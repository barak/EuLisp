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
;;;  Title: Benchmark 'gtakl2'
;;;  Description:
;;    This benchmark was taken from R.P.Gabriel: "Performance and Evaluation
;;    of Lisp-Systems".
;;    In this version function 'shorterp' is realized as a generic function
;;    with four methods specializing on both arguments.
;;;  See also:
;;    tak, takl and gtakl
;;;-----------------------------------------------------------------------------

(defmodule gtakl2t
  (import (eulisp0x timing)
   syntax (eulisp0x timing))

(defun listn (n)
  (if (eql n 0)
      ()
    (cons n (listn (- n 1)))))

(deflocal l26 (listn 26))
(deflocal l16 (listn 16))
(deflocal l6 (listn 6))

;;;-----------------------------------------------------------------------------
;;; takl with generic shorterp
;;;-----------------------------------------------------------------------------

(defun gtakl (x y z)
  (if (null? (gshorterp y x))
      z
    (gtakl (gtakl (cdr x) y z)
           (gtakl (cdr y) z x)
           (gtakl (cdr z) x y))))

(defgeneric gshorterp ((x <list>) (y <list>)))

(defmethod gshorterp ((x <null>) (y <cons>))
  y)

(defmethod gshorterp ((x <cons>) (y <null>))
  ())

(defmethod gshorterp ((x <null>) (y <null>))
  ())

(defmethod gshorterp ((x <cons>) (y <cons>))
  (gshorterp (cdr x) (cdr y)))

;;;-----------------------------------------------------------------------------
;;; Run the test
;;;-----------------------------------------------------------------------------

(time (gtakl l26 l16 l6)
      "\n(gtakl l26 l16 l6): %.2f sec %.2f sec system %.2f sum\n")


;;;-----------------------------------------------------------------------------
) ;; end of module
;;;-----------------------------------------------------------------------------