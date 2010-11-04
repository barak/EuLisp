/** ----------------------------------------------------------------------- **
 **                 Generated by EuLisp System 'youtoo'
 ** ----------------------------------------------------------------------- **
 **  Title: C source file of EuLisp module mop-key
 **  Copyright: See file mop-key.em
 ** ----------------------------------------------------------------------- **/

#include "eulisp.h"


/* Imported modules */
extern void initialize_module_boot();
extern LispRef boot_bindings[];
extern LispRef boot1_bindings[];

/* Module bindings with size 12 */
LispRef mop_key_bindings[12];

/* Foreign functions */

/* Initialize module only once */
static int is_initialized = 0;

/* Initialize module mop-key */
void initialize_module_mop_key()
{
  if (is_initialized) return;
  initialize_module_boot();
  eul_fast_table_set(eul_modules,"mop_key",(LispRef) mop_key_bindings);
  is_initialized = 1;
  {
  /* Declarations */
  LispRef sym_87, sym_86, G0085, sym_83, G0082, G0080, key_77, G0076;

  /* Code vector and literal definitions */
  eul_allocate_static_string(str_78, "missing required keyword ~a", 27);
  /* Byte-vector with size: 19 is_init: 0 index: 6 binding: find-key */
  static const void *G0075[] = {I(43,03,1c,1f),I(03,24,00,00),B(boot1 ,47),I(24,00,00,00),B(boot ,32),I(3c,03,1b,24),B(boot1 ,47),I(50,1b,44,29),I(1d,23,00,00),B(mop_key ,4),I(50,1b,44,17),I(23,00,00,00),B(mop_key ,5),I(1f,06,24,00),B(boot ,25),I(3c,02,2a,1d),I(36,03,1f,03),I(22,01,36,02),I(1c,45,05,00)};

  /* Byte-vector with size: 18 is_init: 0 index: 7 binding: anonymous */
  static const void *G0079[] = {I(ab,1c,12,1b),I(44,0c,1c,24),B(boot ,28),I(3d,01,03,36),I(35,1d,10,1f),I(03,11,1b,10),I(1c,11,1f,03),I(47,00,00,86),I(6c,1b,44,0c),I(1c,1f,07,47),I(00,01,3d,02),I(08,36,15,1f),I(04,1f,07,0f),I(1f,03,1c,0f),I(1f,03,1c,47),I(00,01,3d,02),I(0a,22,02,22),I(05,45,03,00)};

  /* Byte-vector with size: 11 is_init: 0 index: 9 binding: filter-keywords */
  static const void *G0081[] = {I(ab,46,02,1b),I(48,00,00,86),I(1b,48,00,01),I(23,00,00,00),B(mop_key ,8),I(23,00,00,00),B(mop_key ,7),I(3b,02,48,00),I(01,1d,86,47),I(00,01,3d,02),I(03,45,03,00)};

  /* Byte-vector with size: 20 is_init: 1 index: 0 binding: initialize-mop-key */
  static const void *G0084[] = {I(87,25,00,00),B(mop_key ,1),I(24,00,00,00),B(boot ,1),I(3e,0b,24,00),B(boot ,0),I(3c,00,21,01),I(23,00,00,00),B(mop_key ,10),I(23,00,00,00),B(mop_key ,9),I(3b,02,25,00),B(mop_key ,3),I(23,00,00,00),B(mop_key ,11),I(23,00,00,00),B(mop_key ,6),I(3b,03,25,00),B(mop_key ,2),I(86,ac,00,00)};


  /* Initializations */
  eul_intern_keyword(key_77,"required");
  object_class(str_78) = eul_static_string_class;
  eul_allocate_bytevector( G0076,G0075);
  eul_allocate_bytevector( G0080,G0079);
  eul_intern_symbol(sym_83,"anonymous");
  eul_allocate_bytevector( G0082,G0081);
  eul_intern_symbol(sym_86,"filter-keywords");
  eul_intern_symbol(sym_87,"find-key");
  eul_allocate_bytevector( G0085,G0084);

  /* Set local bindings */
  {
    int i;
    for (i = 2; i < 4; i++)
      mop_key_bindings[i] = eul_nil;
  }

  mop_key_bindings[ 4] = key_77;
  mop_key_bindings[ 5] = str_78;
  mop_key_bindings[ 6] = G0076;
  mop_key_bindings[ 7] = G0080;
  mop_key_bindings[ 8] = sym_83;
  mop_key_bindings[ 9] = G0082;
  mop_key_bindings[ 1] = eul_nil;
  mop_key_bindings[ 10] = sym_86;
  mop_key_bindings[ 11] = sym_87;
  eul_allocate_lambda( mop_key_bindings[0], "initialize-mop-key", 0, G0085);

  }
}


/* eof */
