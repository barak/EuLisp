/// Copyright 1997 A. Kind & University of Bath
/// Copyright 2010 Henry G. Weller
///-----------------------------------------------------------------------------
//  This file is part of
/// ---                         EuLisp System 'Youtoo'
///-----------------------------------------------------------------------------
//
//  Youtoo is free software: you can redistribute it and/or modify it under the
//  terms of the GNU General Public License version 2 as published by the Free
//  Software Foundation.
//
//  Youtoo is distributed in the hope that it will be useful, but WITHOUT ANY
//  WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
//  FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more
//  details.
//
//  You should have received a copy of the GNU General Public License along with
//  this program.  If not, see <http://www.gnu.org/licenses/>.
//
///-----------------------------------------------------------------------------
/// Title: Printing, etc.
///  Library: eulvm (Bytecode Interpreter -- Eutopia)
///  Authors: Keith Playford, Andreas Kind
///  Maintainer: Henry G. Weller
///-----------------------------------------------------------------------------
#include "stdc.h"
#include "config.h"
#include "notify.h"
#include "shared-mem.h"
#include "tag.h"
#include "object.h"
#include "register.h"
#include "util.h"
#include "eul-string.h"
#include "symbol.h"
#include "keyword.h"
#include "class.h"
#include "bytevec.h"
#include "fpi.h"
#include "double.h"
#include "operator.h"

///-----------------------------------------------------------------------------
/// Check if Lisp object; the GC should help us here, but what is the
/// function?
///-----------------------------------------------------------------------------
// These setting are somewhat arbitrary ...
#define MAX_CLASS_SIZE 64
#define MAX_OBJECT_SIZE 10000

LispRef eul_is_object(void *o)
{
    LispRef cl, m, n, x = (LispRef) o;

    if
    (
        is_immediate(x)
     || (
            #ifndef WITH_CONS_TAG
            (tag_field(x) != SPARE_TAG)
            #endif // WITH_CONS_TAG
         && (is_immediate(m = object_size(x)))
         && !is_immediate(cl = object_class(x))
         && ((((uPtrInt)eul_fpi_as_c_int(m)) < MAX_OBJECT_SIZE)
         || (cl == PGLOBAL(glob_vector_class)))
         && is_immediate(n = object_size(cl))
         && (eul_fpi_as_c_int(n) >= CLASS_SIZE)
         && (eul_fpi_as_c_int(n) < MAX_CLASS_SIZE))
    ) // C ints and chars with FPI_TAG cannot be distinguished!
    {
        return eul_true;
    }

    return eul_nil;
}


///-----------------------------------------------------------------------------
/// Generic printer
///-----------------------------------------------------------------------------
void (*printer_table[PRINTER_TABLE_SIZE])(FILE *, LispRef);


///-----------------------------------------------------------------------------
/// Default object printer
///-----------------------------------------------------------------------------
static void fprint_object(FILE *fd, LispRef o)
{
    #ifdef WITH_PRIMITIVE_PRINTER
    fprimitive_print_object(fd, o);
    #else
    if
    (
        (object_class(o) != eul_nil)
     && (CLASS_NAME(object_class(o)) != eul_nil)
    )
    {
        fprintf
        (
            fd,
            "#<%s: 0x%08" ptrIntPM "X>",
            (char *)STRING_DATA(SYMBOL_NAME(CLASS_NAME(object_class(o)))),
            (ptrInt) o
        );
    }
    else
    {
        fprimitive_print_object(fd, o);
    }
    #endif
}

void fprint_ref(FILE *fd, LispRef o)
{
    if (!eul_is_object(o))
    {
        fprintf(fd, "#<C: 0x%08" ptrIntPM "X>", (ptrInt) o);
    }
    else if (eul_is_cons(o))
    {
        fprint_cons(fd, o);
    }
    else if (eul_is_vector(o))
    {
        fprint_vector(fd, o);
    }
    else if (o == eul_true)
    {
        fprintf(fd, "t");
    }
    else if (o == eul_nil)
    {
        fprintf(fd, "()");
    }
    else if (eul_is_symbol(o))
    {
        fprintf(fd, "%s", (char *)STRING_DATA(SYMBOL_NAME(o)));
    }
    else if (eul_is_keyword(o))
    {
        fprintf(fd, "%s:", (char *)STRING_DATA(KEYWORD_NAME(o)));
    }
    else if (eul_is_string(o))
    {
        fprintf(fd, "%s", (char *)STRING_DATA(o));
    }
    else if (eul_is_lambda(o))
    {
        fprintf(fd, "#<simple-function: ");
        fprint_ref(fd, LAMBDA_NAME(o));
        fprintf(fd, ">");
    }
    else if (eul_is_simple_gf(o))
    {
        fprintf(fd, "#<simple-generic-function: ");
        fprint_ref(fd, GF_NAME(o));
        fprintf(fd, ">");
    }
    else if (eul_is_gf(o))
    {
        fprintf(fd, "#<generic-function: ");
        fprint_ref(fd, GF_NAME(o));
        fprintf(fd, ">");
    }
    else if (eul_is_double(o))
    {
        fprintf(fd, "%f", eul_double_as_c_double(o));
    }
    else
    {
        (printer(o)) (fd, o);
    }
}


///-----------------------------------------------------------------------------
/// Initialize utilities
///-----------------------------------------------------------------------------
void eul_initialize_util()
{
    NOTIFY0(".Initialize utilities");
    define_printer(OBJECT_TAG, fprint_object);
}


///-----------------------------------------------------------------------------
