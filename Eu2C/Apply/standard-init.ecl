;;; Copyright 1994-2010 Fraunhofer ISST
;;; Copyright 2010 Henry G. Weller
;;;-----------------------------------------------------------------------------
;;  This file is part of
;;; ---                           EuLisp System 'Eu2C'
;;;-----------------------------------------------------------------------------
;;
;;  Eu2C is free software: you can redistribute it and/or modify it under the
;;  terms of the GNU General Public License version 2 as published by the Free
;;  Software Foundation.
;;
;;  Eu2C is distributed in the hope that it will be useful, but WITHOUT ANY
;;  WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
;;  FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more
;;  details.
;;
;;  You should have received a copy of the GNU General Public License along with
;;  this program.  If not, see <http://www.gnu.org/licenses/>.
;;
;;;-----------------------------------------------------------------------------
;;; Title: initialization protocol of the compile time MOP for standard classes
;;;  Description:
;;    The methods for <standard-class-def> implement the single inheritance case
;;    which is the default for the predefined EuLisp class <class>.
;;;  Authors: Ingo Mohr
;;;  Maintainer: Henry G. Weller
;;;-----------------------------------------------------------------------------

#module standard-init
(import (level-1
         lzs-mop
         accessors
         lzs
         option-lists
         tail-module
         el2lzs-error
         (only (append
                remove-duplicates
                substitute
                mapc
                mapcar
                mapcan
                find
                warn
                make-instance
                nconc
                vector)
               common-lisp))
 syntax (level-1
         (only (case
                push)
               common-lisp)))

;;;-----------------------------------------------------------------------------
;;; initialization of class definitions
;;;-----------------------------------------------------------------------------
;; The methods for <standard-class-def> implement the compile time MOP for the
;; single inheritance case like the application MOP defined for <class>

(defun compute-and-ensure-tail-slot-accessors (class slots)
  (mapc (lambda (slot)
          (when (?reader slot)
                (setf (?reader slot) (~compute-slot-reader class slot slots)))
          (when (?writer slot)
                (setf (?writer slot) (~compute-slot-writer class slot slots))))
        slots)
  slots)

(defun create-slot-defs (class direct-slot-specs inherited-slots)
  ;; creates new slot definition, which means slot definitions introduced by the
  ;; current class and not inherited from the superclass
  (if (null? direct-slot-specs)
      ()
    (let* ((slot-spec (car direct-slot-specs))
           (name (get-option ^name slot-spec ()))
           (default-function (get-option ^default-function slot-spec ()))
           (keyword (get-option ^keyword slot-spec ())))
      (if (find name inherited-slots
                :key #'~slot-name)
          ;; it was a slot specialization
          (create-slot-defs class (cdr direct-slot-specs)
                            inherited-slots)
        ;; it was a slot definition, a new slot must be created
        (let ((slot (make-instance <slot-desc>
                                   :identifier name
                                   :default-function default-function
                                   :keyword keyword
                                   :type (get-option ^type slot-spec %object)
                                   :slot-of class)))
          (when default-function
                (setf (?slot default-function) slot)
                (when (function-with-constant-value? default-function)
                      (setf (?initvalue slot)
                            (get-constant-function-value default-function))))
          (cons slot
                (create-slot-defs class (cdr direct-slot-specs)
                                  inherited-slots)))))))

(defun get-constant-function-value (fun)
  (let ((value (?body fun)))
    (if (named-const? value)
        (?value value)
      value)))

(defun create-tail-slot-defs (class slot-specs)
  (if (null? slot-specs)
      ()
    (let* ((slot-spec (car slot-specs))
           (name (get-option ^name slot-spec ()))
           (default-function (get-option ^default-function slot-spec ()))
           (keyword (get-option ^keyword slot-spec ()))
           (reader? (get-option ^reader slot-spec ()))
           (writer? (get-option ^writer slot-spec ()))
           (slot (make-instance <slot-desc>
                                :identifier name
                                :default-function default-function
                                :keyword keyword
                                :type (get-option ^type slot-spec %object)
                                :slot-of class)))
      (when default-function
            (setf (?slot default-function) slot))
      (when reader? (setf (?reader slot) t))
      (when writer? (setf (?writer slot) t))
      (cons slot
            (create-tail-slot-defs class (cdr slot-specs))))))

(defmethod ~initialize ((class <standard-class-def>) initlist)
  ;;options in initlist are: name direct-superclasses direct-slot-specs
  ;;direct-keywords representation allocation
  (let ((name (get-option ^name initlist ()))
        (direct-superclasses (get-option ^direct-superclasses initlist ()))
        (direct-slot-specs (get-option ^direct-slots initlist ()))
        (direct-keywords (get-option ^direct-keywords initlist ()))
        (representation (get-option ^representation initlist ()))
        (allocation (get-option ^allocation initlist ()))
        (direct-super-lattice-types (get-option ^direct-super-lattice-types
                                                initlist ()))
        effective-slots inherited-slots
        )

    ;; resetting of annotations holding intermediate informations during
    ;; compilation
    (setf (?place class) ())
    (setf (?expanded-literal class) ())

    (cond ((null? (?identifier class))
           (setf (?identifier class) name))
          ((eq (?identifier class) name))
          (t (warn "identifiers for class name (~A) and binding (~A) are not the same"
                   name (?identifier class))))
    (setf (?supers class) direct-superclasses)
    (mapc (lambda (superclass)
            (push class (?subclasses superclass)))
          direct-superclasses)
    (setf (?lattice-type class)
          (~compute-lattice-type class direct-superclasses
                                 direct-super-lattice-types))
    (setf (?class-name class) name)
    (setf (?class-precedence-list class)
          (~compute-class-precedence-list class direct-superclasses))
    (setf (?keywords class)
          (~compute-keywords
           class direct-keywords
           (~compute-inherited-keywords class direct-superclasses)))
    (setq inherited-slots
          (~compute-inherited-slots class direct-superclasses))
    (setq effective-slots
          (~compute-slots class direct-slot-specs
                                      inherited-slots))
    (setf (?effective-slots class) effective-slots)
    (setf (?representation class)
          (~compute-representation class representation allocation))
    (~compute-and-ensure-slot-accessors class effective-slots inherited-slots)
    class))

(defmethod ~initialize ((class <tail-class-def>) initlist)
  ;;recognized options in initlist are: name direct-slot-specs
  ;;direct-keywords representation allocation
  (let ((name (get-option ^name initlist ()))
        (direct-slot-specs (get-option ^direct-slots initlist ()))
        (direct-keywords (get-option ^direct-keywords initlist ()))
        (representation (get-option ^representation initlist ()))
        (allocation (get-option ^allocation initlist t))
        (direct-super-lattice-types (get-option ^direct-super-lattice-types
                                                initlist ()))
        effective-slots
        )

    ;; resetting annotations holding intermediate informations during
    ;; compilation
    (setf (?place class) ())
    (setf (?expanded-literal class) ())

    (cond ((null? (?identifier class))
           (setf (?identifier class) name))
          ((eq (?identifier class) name))
          (t (warn "identifiers for class name (~A) and binding (~A) are not the same"
                   name (?identifier class))))
    (setf (?supers class) ())
    (setf (?lattice-type class)
          (~compute-lattice-type class () direct-super-lattice-types))
    (setf (?class-name class) name)
    (setf (?class-precedence-list class)  (list class))
    (setf (?keywords class) direct-keywords)
    (setq effective-slots (create-tail-slot-defs class direct-slot-specs))
    (setf (?effective-slots class) effective-slots)
    (setf (?representation class)
          (~compute-representation class representation allocation))
    (compute-and-ensure-tail-slot-accessors class effective-slots)
    class))

(defmethod ~initialize ((class <imported-class>) initlist)
  (let ((name (get-option ^name initlist ()))
        (direct-superclasses (get-option ^direct-superclasses initlist ()))
        (effective-slot-specs (get-option ^effective-slots initlist ()))
        (direct-keywords (get-option ^direct-keywords initlist ()))
        (direct-super-lattice-types (get-option ^direct-super-lattice-types
                                                initlist ()))
        (representation (get-option ^representation initlist ()))
        (converter (get-option ^converter initlist ()))
        )

    ;; resetting of annotations holding intermediate informations during
    ;; compilation
    (setf (?place class) ())

    (cond ((null? (?identifier class))
           (setf (?identifier class) name))
          ((eq (?identifier class) name))
          (t (warn "identifiers for class name (~A) and binding (~A) are not the same"
                   name (?identifier class))))
    (setf (?supers class) direct-superclasses)
    (mapc (lambda (superclass)
            (push class (?subclasses superclass)))
          direct-superclasses)
    (setf (?lattice-type class)
          (~compute-lattice-type class direct-superclasses
                                 direct-super-lattice-types))
    (setf (?class-name class) name)
    (setf (?class-precedence-list class)
          (~compute-class-precedence-list class direct-superclasses))
    (setf (?keywords class)
          (~compute-keywords class direct-keywords
                             (~compute-inherited-keywords class direct-superclasses)))
    (setf (?effective-slots class)
          (~compute-slots class effective-slot-specs
                                      ()))
    (setf (?representation class)
          (~compute-representation class representation
                                   ())) ; no allocation
    (setf (?converter class) converter)
    class))

;;;-----------------------------------------------------------------------------
;;; ~compute-class-precedence-list
;;;-----------------------------------------------------------------------------
(defmethod ~compute-class-precedence-list
  ((class <class-def>) direct-superclasses)
  (cons class (~class-precedence-list (car direct-superclasses))))

(defmethod ~compute-class-precedence-list
  ((class <class-def>) (direct-superclasses <null>))
  (list class))

;;;-----------------------------------------------------------------------------
;;; ~compute-inherited-slots, ~compute-slots
;;;-----------------------------------------------------------------------------
(defmethod ~compute-inherited-slots
  ((class <class-def>) direct-superclasses)
  (list (~class-slots (car direct-superclasses))))

(defmethod ~compute-inherited-slots
  ((class <class-def>) (direct-superclasses <null>))
  (list ()))

(defmethod ~compute-slots
  ((class <class-def>) direct-slot-specs inherited-slots)
  (nconc (mapcar (lambda (inherited-slot)
                   (create-specializing-slot
                    class inherited-slot direct-slot-specs))
                 (car inherited-slots))
         (create-slot-defs class direct-slot-specs
                           (car inherited-slots))))

(defmethod ~compute-slots ((class <imported-class>)
                                       effective-slot-specs
                                       not-used)
  ;; in case of imported classes the list of effective slots is given such that
  ;; no inheritance for slots is necessary
  (create-slot-defs-of-imported-class class effective-slot-specs))

(defgeneric create-specializing-slot (class inherited-slot direct-slot-specs))

(defmethod create-specializing-slot ((class <class-def>)
                                     inherited-slot direct-slot-specs)
  ;; creates slot-specs for slots specializing inherited ones and for slots
  ;; simply inherited from superclass without specialization
  (let* ((specializing-slot (make-instance
                              <slot-desc>
                              :identifier (~slot-name inherited-slot)
                              :specializes inherited-slot
                              :slot-of class))
         (slot-spec (find (~slot-name inherited-slot) direct-slot-specs
                          :key (lambda (slot-spec)
                                 (get-option ^name slot-spec ()))))
         (default-function (get-option ^default-function slot-spec ()))
         (type (get-option ^type slot-spec ()))
         (keyword (get-option ^keyword slot-spec ())))
    (when default-function
          (setf (?slot default-function) specializing-slot))
    (setf (?default-function specializing-slot)
          (or default-function (?default-function inherited-slot)))
    (cond ((null? default-function)
           (setf (?initvalue specializing-slot)
                 (?initvalue inherited-slot)))
          ((function-with-constant-value? default-function)
           (setf (?initvalue specializing-slot)
                 (get-constant-function-value default-function))))
    (setf (?type specializing-slot)
          (or type (?type inherited-slot)))
    (setf (?keyword specializing-slot)
          (if (and keyword
                   (?keyword inherited-slot))
              (progn
                (error-redefinition-of-inherited-keyword
                 specializing-slot
                 inherited-slot
                 keyword)
                (?keyword inherited-slot))
            (or keyword (?keyword inherited-slot))))
    specializing-slot))

(defgeneric function-with-constant-value? (fun))
(defmethod function-with-constant-value? ((fun <generic-fun>)) ())
(defmethod function-with-constant-value? ((fun <simple-fun>))
  (let ((body (?body fun)))
    (and (null? (eq body ^unknown))
         (or (and (named-const? body)
                  (null? (eq (?value body) ^unknown)))
             (sym? body)
             (structured-literal? body)
             (literal-instance? body)
             (class-def? body)
             (fun? body)
             (null? (lzs-object? body)) ; for example a number
             ))))

(defmethod create-slot-defs-of-imported-class (class effective-slot-specs)
  ;; creates new slot definitions for all given effective slots
  (mapcar (lambda (slot-spec)
            (make-instance
              <slot-desc>
              :identifier (get-option ^name slot-spec ())
              :code-identifier (get-option ^c-identifier slot-spec ())
              :keyword (get-option ^keyword slot-spec ())
              :type (get-option ^type slot-spec %object)
              :slot-of class))
          effective-slot-specs))

;;;-----------------------------------------------------------------------------
;;; ~compute-inherited-keywords, ~compute-keywords
;;;-----------------------------------------------------------------------------
(defmethod ~compute-inherited-keywords ((class <class-def>)
                                        direct-superclasses)
  (list (?keywords (car direct-superclasses))))

(defmethod ~compute-inherited-keywords ((class <class-def>)
                                        (direct-superclasses <null>))
  (list ()))


(defmethod ~compute-keywords ((class <class-def>)
                              keywords inherited-keyword-lists)
  (remove-duplicates (append keywords (car inherited-keyword-lists))))

;; ~compute-representation defined in representation.em
;; ~compute-constructor defined in mm-initialize.em
;; ~compute-predicate defined in mm-initialize.em

;;;-----------------------------------------------------------------------------
;;; Initialization of the Slot Access Protocol
;;;-----------------------------------------------------------------------------
(defmethod ~compute-and-ensure-slot-accessors
  ((class <standard-class-def>) effective-slots inherited-slots)
  ;; a reader and a writer is generated for every type of slot (new,
  ;; specializing, inherited) to get different signatures for the type inference
  (mapc (lambda (slot)
          (setf (?reader slot)
                (~compute-slot-reader class slot effective-slots))
          (setf (?writer slot)
                (~compute-slot-writer class slot effective-slots)))
        effective-slots)
  effective-slots)

;;(defmethod ~compute-and-ensure-slot-accessors
;;           ((class <%string>) effective-slots inherited-slots)
;;  ; to avoid creation of accessors for slot 'length' of %string because this is
;;  ; not allowed before apply-level-2
;;  (mapc (lambda (slot)
;;          (unless (eq ^length (~slot-name slot))
;;            (setf (?reader slot)
;;                  (~compute-slot-reader class slot effective-slots))
;;            (setf (?writer slot)
;;                  (~compute-slot-writer class slot effective-slots))))
;;        effective-slots)
;;  effective-slots)

;; The methods for ~compute-slot-reader and ~compute-slot-writer are defined in
;; mm-initialize.em

;;;-----------------------------------------------------------------------------
;;; Initialization of Generic Functions and Methods
;;;-----------------------------------------------------------------------------
(defun method-valid? (method gf)
  (cond ((non-congruent-lambda-lists? (?params (?fun method))
                                       (?params gf))
         (error-non-congruent-lambda-lists method gf)
         ())
        ((incompatible-method-domain? (?domain method)
                                       (?domain gf))
         (error-incompatible-method-domain method gf)
         ())
        ((method-domain-clash? method gf)
         (error-method-domain-clash method gf)
         ())
        (t t)))

(defun non-congruent-lambda-lists? (params1 params2)
  (null? (and (= (length (?var-list params1))
                (length (?var-list params2)))
             (if (?rest params1)
                 (?rest params2)
               (null? (?rest params2))))))

(defun incompatible-method-domain? (method-domain gf-domain)
  (cond ((null? method-domain) ())
        ((~subclass? (car method-domain)
                     (car gf-domain))
         (incompatible-method-domain? (cdr method-domain)
                                       (cdr gf-domain)))
        (t t)))

(defun method-domain-clash? (method gf)
  (find (?domain method) (?method-list gf)
        :key #'?domain
        :test #'equal))

(defmethod ~initialize ((gf <defined-generic-fun>) options)
  ;;options are: name domain range method-class method*
  ;;additional option for the compiler: parameters
  (let ((name (get-option ^name options ()))
        (domain (get-option ^domain options ()))
        (range (get-option ^range options ()))
        (method-class (get-option ^method-class options ()))
        (params (get-option ^parameters options ())))
    (cond ((null? (?identifier gf))
           (setf (?identifier gf) name))
          ((eq (?identifier gf) name))
          (t (warn "identifiers for generic function name (~A) and binding (~A) are not the same"
                   name (?identifier gf))))
    (setf (?domain gf) domain)
    (setf (?params gf) params)
    (setf (?range-and-domain gf)
          (apply #'vector range domain))
    gf))

(defmethod ~initialize ((method <method-def>) options)
  ;;options are: domain range function generic-function
  (let ((domain (get-option ^domain options ()))
        (range (get-option ^range options ()))
        (function (get-option ^function options ()))
        (generic-function (get-option ^generic-function options ())))
    (setf (?domain method) domain)
    (setf (?fun method) function)
    (setf (?generic-fun method) generic-function)
    (setf (?range-and-domain function)
          (apply #'vector range domain))
    method))

(defmethod ~add-method ((gf <global-generic-fun>) (method <method-def>))
  (when (method-valid? method gf)
        (push method (?method-list gf)))
  gf)

(defmethod ~add-method ((gf <imported-generic-fun>) (method <method-def>))
  (when t ; (method-valid? method gf) this test should be used but the problem
        ;; is that sometimes the method functions are declared in the .def-file
        ;; after the generic function is declared and so the method functions
        ;; have the slot params not set when add-method is called
        (push method (?method-list gf)))
  gf)

(defmethod ~add-method (gf (method <method-def>))
  ;; it is not allowed to add a method to other things than generic functions
  (error-invalid-gf-for-add-method gf)
  ())

;;;-----------------------------------------------------------------------------
#module-end
;;;-----------------------------------------------------------------------------
