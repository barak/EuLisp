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
;;; Title: collection for vectors
;;;  Description:
;;    collection for vectors gives the functionality described in A.2
;;;  Authors: Winfried Heicking
;;;  Maintainer: Henry G. Weller
;;;-----------------------------------------------------------------------------

(defmodule collection-vector
  (import (tail
           apply
           eulisp-kernel
           (only (eql)
                 compare)
           basic-list
           vector
           (only (print)
                 print)
           (only (<conversion-condition> error)
                 condition)
           collection-generic
           collection-aux)
   syntax (tail
           syntax-i)
   export (accumulate
           accumulate1
           any?
           concatenate
           do
           element
           empty?
           fill
           map
           member
           reverse
           size))

;;;------------------------------------------------------------
;;; accumulate
;;;------------------------------------------------------------------
;;  (defmethod accumulate ((function <function>)
;;                         (object <object>)
;;                         (vec <vector>))
;;    (accumulate-vector function object vec))

(defmethod accumulate ((function <function>)
                       (object <object>)
                       (vec <vector>))
  (map-accumulate function vec object (primitive-vector-size vec) #%I0))

(%define-function (map-accumulate <object>)
  ((function <function>)
   (vec <vector>)
   (res <object>)
   (max-len %unsigned-word-integer)
   (index %unsigned-word-integer))
  (if (%lt index max-len)
      (map-accumulate function
                      vec
                      (function res (primitive-vector-ref vec index))
                      max-len
                      (%plus index #%I1))
    res))

;;;-----------------------------------------------------------------------------
;;; accumulate1
;;;-----------------------------------------------------------------------------
(defmethod accumulate1 ((function <function>)
                        (vec <vector>))
  (if (%eq (primitive-vector-size vec) #%I0)
      ()
    (map-accumulate function vec
                    (primitive-vector-ref vec #%I0) ;initial element
                    (primitive-vector-size vec)
                    #%I1))) ;start is second element

;;;-----------------------------------------------------------------------------
;;; any?
;;;-----------------------------------------------------------------------------
;;  (defmethod any? ((function <function>)
;;                   (vec <vector>) . more-collections)
;;    (any?-vector function vec more-collections))

(defmethod any? ((function <function>)
                 (vec <vector>) . more-collections)
  (%let ((rest-list-size %signed-word-integer
                           (%list-size more-collections)))
        (cond ((%eq rest-list-size #%i0)
               (any?-with-one-vector function vec #%I0
                                     (primitive-vector-size vec)))
              ((%eq rest-list-size #%i1)
               (any?-with-two-args function vec (car more-collections)))
              (t (any?-collection function vec more-collections)))
        ))

(%define-function (any?-with-one-vector <object>)
  ((function <function>)
   (vec <vector>)
   (index %unsigned-word-integer)
   (len %unsigned-word-integer))
  (if (%lt index len)
      (if (function (primitive-vector-ref vec index))
          t
        (any?-with-one-vector function vec (%plus index #%I1) len))
    ()))

(defmethod any?-with-two-args
  ((function <function>)
   (vec1 <vector>)
   (vec2 <vector>))
  (%let*((vec-size1 %unsigned-word-integer
                      (primitive-vector-size vec1))
         (vec-size2 %unsigned-word-integer
                      (primitive-vector-size vec2))
         (min-size %unsigned-word-integer
                     (if (%le vec-size1 vec-size2)
                         vec-size1
                       vec-size2)))
        (any?-with-two-vectors function
                               vec1
                               vec2
                               min-size
                               #%I0)))

(%define-function (any?-with-two-vectors <object>)
  ((function <function>)
   (vec1 <vector>)
   (vec2 <vector>)
   (min-size %unsigned-word-integer)
   (index %unsigned-word-integer))
  (if (%lt index min-size)
      (if (function (primitive-vector-ref vec1 index)
                    (primitive-vector-ref vec2 index))
          t
        (any?-with-two-vectors function vec1 vec2 min-size
                               (%plus index #%I1)))
    ()))

(defmethod any?-with-two-args
  ((function <function>)
   (vec1 <vector>)
   (collection <object>))
  (any?-collection function vec1 (cons collection ())))

;;;-----------------------------------------------------------------------------
;;; concatenate
;;;-----------------------------------------------------------------------------
(defmethod concatenate ((vec <vector>) . more-collections)
  (%let ((rest-list-size %signed-word-integer
                           (%list-size more-collections)))
        (cond ((%eq rest-list-size #%i0)
               (%let ((vec-size %unsigned-word-integer
                                  (primitive-vector-size vec)))
                     (concat-with-one-vector vec #%I0
                                             vec-size
                                             (make-uninitialized-vector
                                              vec-size))))
              ((%eq rest-list-size #%i1)
               (concat-with-two-args vec (car more-collections)))
              (t (concat-collection vec more-collections)))
        ))

(%define-function (concat-with-one-vector <vector>)
  ((vec <vector>)
   (index %unsigned-word-integer)
   (len %unsigned-word-integer)
   (result <vector>))
  (if (%lt index len)
      (progn (setf-primitive-vector-ref
              result
              index
              (primitive-vector-ref vec index))
             (concat-with-one-vector vec
                                     (%plus index #%I1) len result))
    result))

(%define-function (concat-next-vector <vector>)
  ((src-vec <vector>)
   (src-size %unsigned-word-integer)
   (index %unsigned-word-integer)
   (start %unsigned-word-integer)
   (result <vector>))
  (if (%lt index src-size)
      (progn (setf-primitive-vector-ref
              result
              start
              (primitive-vector-ref src-vec index))
             (concat-next-vector src-vec src-size
                                 (%plus index #%I1)
                                 (%plus start #%I1)
                                 result))
    result))

(defmethod concat-with-two-args ((vec1 <vector>) (vec2 <vector>))
  (%let ((vec-size1 %unsigned-word-integer
                      (primitive-vector-size vec1))
         (vec-size2 %unsigned-word-integer
                      (primitive-vector-size vec2)))
        (concat-with-two-vectors
         vec1
         vec-size1
         vec2
         vec-size2
         #%I0
         (make-uninitialized-vector
          (%plus vec-size1 vec-size2)))))

;;;; result should be a list because of <null> !!!
;;  (defmethod concat-with-two-args ((no-vec <null>) (vec <vector>))
;;    (%let ((vec-size %unsigned-word-integer
;;                                (primitive-vector-size vec)))
;;      (concat-with-one-vector vec #%I0
;;                              vec-size
;;                              (make-uninitialized-vector
;;                               vec-size))))


(defmethod concat-with-two-args ((no-vec <null>) (vec <vector>))
  (vector-to-list vec
                  #%I0
                  (primitive-vector-size vec)))

(%define-function (vector-to-list <list>)
  ((vec <vector>)
   (index %unsigned-word-integer)
   (vec-size %unsigned-word-integer))
  (if (%lt index vec-size)
      (cons (primitive-vector-ref vec index)
            (vector-to-list vec
                            (%plus index #%I1)
                            vec-size))
    ()))

(defmethod concat-with-two-args ((vec <vector>) (no-vec <null>))
  (%let ((vec-size %unsigned-word-integer
                     (primitive-vector-size vec)))
        (concat-with-one-vector vec #%I0
                                vec-size
                                (make-uninitialized-vector
                                 vec-size))))

(%define-function (concat-with-two-vectors <object>)
  ((vec1 <vector>)
   (vec-size1 %unsigned-word-integer)
   (vec2 <vector>)
   (vec-size2 %unsigned-word-integer)
   (index %unsigned-word-integer)
   (result-vector <vector>))
  (concat-with-one-vector vec1 index vec-size1 result-vector)
  (concat-next-vector vec2 vec-size2 #%I0 vec-size1
                      result-vector)
  result-vector)

(defmethod concat-with-two-args
  ((vec <vector>) (collection <object>))
  (concat-collection vec (cons collection ())))

;;;-----------------------------------------------------------------------------
;;; do
;;;-----------------------------------------------------------------------------
;;  (defmethod do ((function <function>)
;;                 (vec <vector>) . more-collections)
;;    (do-vector function vec more-collections))

(defmethod do ((function <function>)
               (vec <vector>) . more-collections)
  (%let ((rest-list-size %signed-word-integer
                           (%list-size more-collections)))
        (cond ((%eq rest-list-size #%i0)
               (do-with-one-vector function vec #%I0
                                   (primitive-vector-size vec)))
              ((%eq rest-list-size #%i1)
               (do-with-two-args function vec (car more-collections)))
              (t (do-collection function vec more-collections)))
        ))

(%define-function (do-with-one-vector <object>)
  ((function <function>)
   (vec <vector>)
   (index %unsigned-word-integer)
   (len %unsigned-word-integer))
  (if (%lt index len)
      (progn (function (primitive-vector-ref vec index))
             (do-with-one-vector function vec (%plus index #%I1) len))
    ()))

(defmethod do-with-two-args
  ((function <function>)
   (vec1 <vector>)
   (vec2 <vector>))
  (%let*((vec-size1 %unsigned-word-integer
                      (primitive-vector-size vec1))
         (vec-size2 %unsigned-word-integer
                      (primitive-vector-size vec2))
         (min-size %unsigned-word-integer
                     (if (%le vec-size1 vec-size2)
                         vec-size1
                       vec-size2)))
        (do-with-two-vectors function
                             vec1
                             vec2
                             min-size
                             #%I0)))

(%define-function (do-with-two-vectors <object>)
  ((function <function>)
   (vec1 <vector>)
   (vec2 <vector>)
   (min-size %unsigned-word-integer)
   (index %unsigned-word-integer))
  (if (%lt index min-size)
      (progn (function (primitive-vector-ref vec1 index)
                       (primitive-vector-ref vec2 index))
             (do-with-two-vectors function vec1 vec2 min-size
                                  (%plus index #%I1)))
    ()))

(defmethod do-with-two-args
  ((function <function>)
   (vec1 <vector>)
   (collection <object>))
  (do-collection function vec1 (cons collection ())))

;;do-vector is equal to do-list ... and can be used for all collections!!!

;;  (defun do-vector (function vec . more-collections)
;;    (map-do-apply
;;     function
;;     (mapc-more-collections
;;      (cons
;;       (construct-collection-info vec)
;;       ())
;;      more-collections)
;;     ))

;;;-----------------------------------------------------------------------------
;;; element and (setter element)
;;;-----------------------------------------------------------------------------
(defmethod element ((vec <vector>)
                    (key <fpi>))
  (vector-ref vec key))

(defmethod (setter element) ((vec <vector>)
                             (key <fpi>)
                             (value <object>))
  (setf-vector-ref vec key value))

;;;-----------------------------------------------------------------------------
;;; empty?
;;;-----------------------------------------------------------------------------
(defmethod empty? ((vec <vector>))
  (if (%eq (primitive-vector-size vec) #%I0)
      t
    ()))

;;  (defun empty?-vector (vec)
;;    (if (%eq (primitive-vector-size vec) #%I0)
;;      t
;;      ()))

;;;-----------------------------------------------------------------------------
;;; fill
;;;-----------------------------------------------------------------------------
;;  (defmethod fill ((vec <vector>)
;;                   (object <character>) ;object to fill
;;                   (start <fpi>)
;;                   (end <fpi>))
;;    (fill-vector vec object start end))

(defmethod fill ((vec <vector>)
                 (object <object>) . keys)
  (%let ((vec-len %signed-word-integer
                  (%cast %signed-word-integer
                         (primitive-vector-size vec)))
         (rest-list-size %signed-word-integer
                           (%list-size keys)))
        (if (%eq #%i0 rest-list-size)
            (progn
              (fill-vector-aux vec object #%I0
                               (%cast %unsigned-word-integer
                                      (%minus vec-len #%i1)))
              ())
          (if (%eq #%i1 rest-list-size)
              (error "fill: collection does not have natural order"
                     <conversion-condition>)
            (%let ((start %signed-word-integer
                          (make-swi (car keys)))
                   (end %signed-word-integer
                        (make-swi (car (cdr keys)))))
                  (if (test-range-indizes start end vec-len)
                      (progn
                        (fill-vector-aux
                         vec
                         object
                         (%cast %unsigned-word-integer start)
                         (%cast %unsigned-word-integer end))
                        ())
                    ()))))))


(%define-function (fill-vector-aux %void)
  ((vec <vector>)
   (object <object>)
   (start %unsigned-word-integer)
   (end %unsigned-word-integer))
  (if (%gt start end)
      ()
    (progn (setf-primitive-vector-ref vec start object)
           (fill-vector-aux vec object (%plus start #%I1) end))))

;;;-----------------------------------------------------------------------------
;;; map
;;;-----------------------------------------------------------------------------
;;  (defmethod map ((function <function>)
;;                  (vec <vector>) . more-collections)
;;    (map-vector function vec more-collections))

(defmethod map ((function <function>)
                (vec <vector>) . more-collections)
  (%let ((rest-list-size %signed-word-integer
                           (%list-size more-collections)))
        (cond ((%eq rest-list-size #%i0)
               (%let ((vec-size %unsigned-word-integer
                                  (primitive-vector-size vec)))
                     (map-with-one-vector function vec #%I0
                                          vec-size
                                          (make-uninitialized-vector
                                           vec-size))))
              ((%eq rest-list-size #%i1)
               (map-with-two-args function vec (car more-collections) ()))
              (t (map-collection function vec more-collections)))
        ))

(%define-function (map-with-one-vector <vector>)
  ((function <function>)
   (vec <vector>)
   (index %unsigned-word-integer)
   (len %unsigned-word-integer)
   (result <vector>))
  (if (%lt index len)
      (progn (setf-primitive-vector-ref
              result
              index
              (function (primitive-vector-ref vec index)))
             (map-with-one-vector function vec
                                  (%plus index #%I1) len result))
    result))

(defmethod map-with-two-args
  ((function <function>)
   (vec1 <vector>)
   (vec2 <vector>)
   (not-used <object>))
  (%let* ((vec-size1 %unsigned-word-integer
                       (primitive-vector-size vec1))
          (vec-size2 %unsigned-word-integer
                       (primitive-vector-size vec2))
          (min-size %unsigned-word-integer
                      (if (%le vec-size1 vec-size2)
                          vec-size1
                        vec-size2)))
         (map-with-two-vectors function
                               vec1
                               vec2
                               min-size
                               #%I0
                               (make-uninitialized-vector
                                min-size))))

(%define-function (map-with-two-vectors <object>)
  ((function <function>)
   (vec1 <vector>)
   (vec2 <vector>)
   (min-size %unsigned-word-integer)
   (index %unsigned-word-integer)
   (result-vector <vector>))
  (if (%lt index min-size)
      (progn (setf-primitive-vector-ref
              result-vector
              index
              (function (primitive-vector-ref vec1 index)
                        (primitive-vector-ref vec2 index)))
             (map-with-two-vectors function vec1 vec2 min-size
                                   (%plus index #%I1) result-vector))
    result-vector))

(defmethod map-with-two-args
  ((function <function>)
   (vec1 <vector>)
   (collection <object>)
   (not-used <object>))
  (map-collection function vec1 (cons collection ())))


;;map-vector is equal to map-list... and can be used for all collections!!!

;;  (defun map-vector (function vec . more-collections)
;;    (map-tab-apply
;;     function
;;     (mapc-more-collections
;;      (cons
;;       (construct-collection-info vec)
;;       ())
;;      more-collections)
;;     ()
;;     vec))

;;;-----------------------------------------------------------------------------
;;; member
;;;-----------------------------------------------------------------------------
;;  (defmethod member ((object <object>)
;;                     (vec <vector>)
;;                     (test <function>))
;;    (member-vector object vec test))

(defmethod member ((object <object>)
                   (vec <vector>) . test)
  (let ((test-fct (if test
                      (car test)
                    eql)))
    (if (eq test-fct eq)
        (memq-vector object vec #%I0 (primitive-vector-size vec))
      (member-vector-aux object vec #%I0
                         (primitive-vector-size vec)
                         test-fct))))

(%define-function (member-vector-aux <object>)
  ((object <object>)
   (vec <vector>)
   (index %unsigned-word-integer)
   (len %unsigned-word-integer)
   (test <function>))
  (if (%lt index len)
      (if (test (primitive-vector-ref vec index) object)
          t
        (member-vector-aux object vec (%plus index #%I1) len test))
    ()))

(%define-function (memq-vector <object>)
  ((object <object>)
   (vec <vector>)
   (index %unsigned-word-integer)
   (len %unsigned-word-integer))
  (if (%lt index len)
      (if (eq (primitive-vector-ref vec index) object)
          t
        (memq-vector object vec (%plus index #%I1) len))
    ()))

;;;-----------------------------------------------------------------------------
;;; reverse
;;;-----------------------------------------------------------------------------
(defmethod reverse ((vec <vector>))
  (%let* ((vec-len %unsigned-word-integer
                   (primitive-vector-size vec))
          (rev-vec <vector>
                   (make-uninitialized-vector vec-len)))
         (if (%eq vec-len #%I0)
             rev-vec
           (reverse-vector-aux vec rev-vec #%I0
                               (%minus vec-len #%I1)))))

;;  (defun reverse-vector (vec)
;;    (%let* ((vec-len %unsigned-word-integer
;;                     (primitive-vector-size vec))
;;            (rev-vec <vector>
;;                     (make-uninitialized-vector vec-len)))
;;           (if (%eq vec-len #%I0)
;;             rev-vec
;;             (reverse-vector-aux vec rev-vec #%I0
;;                                 (%minus vec-len #%I1)))))

(%define-function (reverse-vector-aux <vector>)
  ((vec <vector>)
   (rev-vec <vector>)
   (index %unsigned-word-integer)
   (vec-len %unsigned-word-integer))
  (if (%le index vec-len)
      (progn
        (setf-primitive-vector-ref
         rev-vec
         index
         (primitive-vector-ref vec (%minus vec-len index)))
        (reverse-vector-aux vec rev-vec (%plus index #%I1) vec-len))
    rev-vec)
  )

;;;-----------------------------------------------------------------------------
;;; size
;;;-----------------------------------------------------------------------------
(defmethod size ((vec <vector>))
  (vector-size vec))

;;  (defun size-vector (vec)
;;    (vector-size vec))

;;;-----------------------------------------------------------------------------
)  ;; End of module collection-vector
;;;-----------------------------------------------------------------------------
