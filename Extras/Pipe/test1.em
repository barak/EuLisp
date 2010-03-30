;;; Copyright (c) 1997 by A Kind & University of Bath. All rights reserved.
;;; -----------------------------------------------------------------------
;;; ---                  EuLisp System 'youtoo'
;;; -----------------------------------------------------------------------
;;;  Library: pipe
;;;  Authors: Andreas Kind
;;;  Description: example pipe
;;;  Compilation: make touch; make; make test
;;; -----------------------------------------------------------------------
(defmodule test1
    (syntax (macros)
     import (level1 pipe))

  (let ((x (make <pipe> process: "../../Bin.x86_64/youtoo.sh"))
        (str ""))
    (pprint x)
    (system "ps -a")
    (print (+ 1 3) x)
    (print hierarchy: x)
    (print exit: x)
    (while (setq str (read-line x () ()))
      (prin str)
      (flush)))

  )  ;; end of module test1

;;; -----------------------------------------------------------------------