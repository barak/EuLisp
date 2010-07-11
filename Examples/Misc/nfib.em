;;; Copyright (c) 1997 by A Kind & University of Bath. All rights reserved.
;;;-----------------------------------------------------------------------------
;;; ---                         EuLisp System 'youtoo'
;;;-----------------------------------------------------------------------------
;;;  Library: misc
;;;  Authors: Andreas Kind
;;; Description: counting fibonacci function calls
;;;  Compilation
;;    youtoo nfib -l level0
;;;  Interpretation: (!> nfib)
;;;-----------------------------------------------------------------------------
(defmodule nfib
  (syntax (macros)
   import (level0)
   export (nfib))

  (defun nfib (n)
    (if (< 1 n)
        (+ (nfib (- n 1))
           (nfib (- n 2))
           1)
      1))

  (time-execution (nfib 35) stdout)

;;;-----------------------------------------------------------------------------
  )  ;; end of module
;;;-----------------------------------------------------------------------------
