/// Copyright 1988 David Michael Betz
/// Copyright 1994 Russell Bradford
/// Copyright 2010, 2011 Henry G. Weller
///-----------------------------------------------------------------------------
//  This file is part of
/// ---                           EuLisp System 'EuXLisp'
///-----------------------------------------------------------------------------
//
//  EuXLisp is free software: you can redistribute it and/or modify it under the
//  terms of the GNU General Public License version 2 as published by the Free
//  Software Foundation.
//
//  EuXLisp is distributed in the hope that it will be useful, but WITHOUT ANY
//  WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
//  FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more
//  details.
//
//  You should have received a copy of the GNU General Public License along with
//  this program.  If not, see <http://www.gnu.org/licenses/>.
//
///-----------------------------------------------------------------------------
/// Title: Definitions for classes and objects
///  Maintainer: Henry G. Weller
///-----------------------------------------------------------------------------
#ifndef EUXLOBJ_H
#define EUXLOBJ_H

// See euxcOInit in euxlTelos.c
#define euxmClassNameId             1
#define euxmSuperClassId            2
#define euxmClassPrecedenceListId   3
#define euxmSlotsId                 4
#define euxmKeywordS                5
#define euxmSubClassesId            6
#define euxmInstanceSizeId          7
#define euxmAbstractpId             8

#define euxmClassSize               8

extern euxlValue euxlc_object, euxlc_class, euxlc_simple_class, euxlc_vector;

///-----------------------------------------------------------------------------
#endif // EUXLOBJ_H
///-----------------------------------------------------------------------------
