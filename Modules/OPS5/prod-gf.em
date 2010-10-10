;;; Copyright 1995 Tracy Gardner & University of Bath
;;; Copyright 2010 Henry G. Weller
;;;-----------------------------------------------------------------------------
;;  This file is part of
;;; ---                         EuLisp System 'Youtoo'
;;;-----------------------------------------------------------------------------
;;
;;  Youtoo is free software: you can redistribute it and/or modify it under the
;;  terms of the GNU General Public License version 2 as published by the Free
;;  Software Foundation.
;;
;;  Youtoo is distributed in the hope that it will be useful, but WITHOUT ANY
;;  WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
;;  FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more
;;  details.
;;
;;  You should have received a copy of the GNU General Public License along with
;;  this program.  If not, see <http://www.gnu.org/licenses/>.
;;
;;;-----------------------------------------------------------------------------
;;; Title: Generic functions for production
;;;  Library: ops5
;;;  Authors: Tracy Gardner
;;;  Maintainer: Henry G. Weller
;;;  Description:
;;    OPS5 for EuLisp System 'youtoo'
;;;-----------------------------------------------------------------------------

(defmodule prod-gf
  (syntax (syntax-0
           macros-tag)
   import (level-0
           basic)
   export (p-name
           add-cond-el
           fire
           create-prod-insts
           remove-prod-insts))

(print "### prod-gf" nl)

(defgeneric p-name (object))
(defgeneric create-prod-insts (prod ts ce join-tests cr-manager))
(defgeneric remove-prod-insts (prod ts ce cr-manager))
(defgeneric add-cond-el (prod ce))
(defgeneric fire (prod wm-manager ce-manager cr-manager))

;;;-----------------------------------------------------------------------------
)  ;; End of module prod-gf
;;;-----------------------------------------------------------------------------
