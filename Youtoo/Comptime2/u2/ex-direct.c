/** ----------------------------------------------------------------------- **
 **                 Generated by EuLisp System 'youtoo'
 ** ----------------------------------------------------------------------- **
 **  Title: C source file of EuLisp module ex-direct
 **  Copyright: See file ex-direct.em
 ** ----------------------------------------------------------------------- **/

#include "eulisp.h"


/* Imported modules */
extern void initialize_module_i_all();
extern void initialize_module_p_env();
extern void initialize_module_sx_obj();
extern void initialize_module_sx_node();
extern void initialize_module_ex_import();
extern void initialize_module_ex_syntax();
extern void initialize_module_ex_expose();
extern LispRef sx_node_bindings[];
extern LispRef i_all_bindings[];
extern LispRef mop_meth_bindings[];
extern LispRef mop_gf_bindings[];
extern LispRef mop_class_bindings[];
extern LispRef i_error_bindings[];
extern LispRef i_param_bindings[];
extern LispRef mop_access_bindings[];
extern LispRef stream2_bindings[];
extern LispRef condition_bindings[];
extern LispRef format_bindings[];
extern LispRef sx_obj_bindings[];
extern LispRef p_env_bindings[];
extern LispRef i_notify_bindings[];
extern LispRef aux_table_bindings[];
extern LispRef ex_import_bindings[];
extern LispRef boot1_bindings[];
extern LispRef sx_obj1_bindings[];
extern LispRef dynamic_bindings[];
extern LispRef ex_expose_bindings[];
extern LispRef boot_bindings[];
extern LispRef ex_syntax_bindings[];

/* Module bindings with size 40 */
LispRef ex_direct_bindings[40];

/* Foreign functions */

/* Initialize module only once */
static int is_initialized = 0;

/* Initialize module ex-direct */
void initialize_module_ex_direct()
{
  if (is_initialized) return;
  initialize_module_i_all();
  initialize_module_p_env();
  initialize_module_sx_obj();
  initialize_module_sx_node();
  initialize_module_ex_import();
  initialize_module_ex_syntax();
  initialize_module_ex_expose();
  eul_fast_table_set(eul_modules,"ex_direct",(LispRef) ex_direct_bindings);
  is_initialized = 1;
  {
  /* Declarations */
  LispRef sym_5629, sym_5628, sym_5627, sym_5626, sym_5625, G005624, sym_5622, G005621, key_5619, G005616, G005614, G005610, G005608, G005606, G005603, G005600, sym_5598, sym_5597, sym_5596, sym_5595, G005594, G005592, sym_5590, G005589, sym_5587, G005586, G005584, G005582;

  /* Code vector and literal definitions */
  /* Byte-vector with size: 9 is_init: 0 index: 7 binding: anonymous */
  static const void *G005581[] = {I(ab,1c,73,24),B(ex_syntax ,4),I(1c,24,00,00),B(boot ,11),I(3c,02,2a,1d),I(11,1b,11,1b),I(1f,04,1f,05),I(3d,02,05,45),I(05,00,00,00)};

  /* Byte-vector with size: 9 is_init: 0 index: 8 binding: anonymous */
  static const void *G005583[] = {I(ab,1c,73,24),B(ex_expose ,8),I(1c,24,00,00),B(boot ,11),I(3c,02,2a,1d),I(11,1b,11,1b),I(1f,04,1f,05),I(3d,02,05,45),I(05,00,00,00)};

  /* Byte-vector with size: 12 is_init: 0 index: 10 binding: anonymous */
  static const void *G005585[] = {I(aa,23,00,00),B(ex_direct ,9),I(24,00,00,00),B(dynamic ,3),I(3c,01,1b,8a),I(0f,24,00,00),B(sx_obj1 ,59),I(08,1b,24,00),B(boot1 ,42),I(3c,01,1f,03),I(1f,04,1d,3d),I(02,04,45,04)};

  /* Byte-vector with size: 11 is_init: 0 index: 12 binding: anonymous */
  static const void *G005588[] = {I(ab,1c,73,23),B(ex_direct ,11),I(23,00,00,00),B(ex_direct ,10),I(3b,01,1c,24),B(boot ,11),I(3c,02,2a,1d),I(11,1b,11,1b),I(1f,04,1f,05),I(3d,02,05,45),I(05,00,00,00)};

  /* Byte-vector with size: 9 is_init: 0 index: 13 binding: anonymous */
  static const void *G005591[] = {I(ab,1c,73,24),B(ex_import ,6),I(1c,24,00,00),B(boot ,11),I(3c,02,2a,1d),I(11,1b,11,1b),I(1f,04,1f,05),I(3d,02,05,45),I(05,00,00,00)};

  /* Byte-vector with size: 38 is_init: 0 index: 18 binding: top-level */
  static const void *G005593[] = {I(a9,24,00,00),B(aux_table ,4),I(3c,00,1b,89),B(ex_direct ,2),I(2a,23,00,00),B(ex_direct ,14),I(23,00,00,00),B(ex_direct ,11),I(23,00,00,00),B(ex_direct ,13),I(3b,02,24,00),B(ex_direct ,3),I(3c,02,2a,23),B(ex_direct ,15),I(23,00,00,00),B(ex_direct ,11),I(23,00,00,00),B(ex_direct ,12),I(3b,02,24,00),B(ex_direct ,3),I(3c,02,2a,23),B(ex_direct ,16),I(23,00,00,00),B(ex_direct ,11),I(23,00,00,00),B(ex_direct ,8),I(3b,02,24,00),B(ex_direct ,3),I(3c,02,2a,23),B(ex_direct ,17),I(23,00,00,00),B(ex_direct ,11),I(23,00,00,00),B(ex_direct ,7),I(3b,02,24,00),B(ex_direct ,3),I(3d,02,01,45),I(01,00,00,00)};

  eul_allocate_static_string(str_5601, "redefinition of expander ~a", 27);
  /* Byte-vector with size: 15 is_init: 0 index: 20 binding: install-directive-expander */
  static const void *G005599[] = {I(ab,1c,24,00),B(ex_direct ,2),I(3c,01,1b,44),I(14,86,23,00),B(ex_direct ,19),I(1f,04,24,00),B(i_notify ,5),I(3c,03,36,02),I(86,2a,24,00),B(ex_direct ,2),I(24,00,00,00),B(boot1 ,42),I(3c,01,1f,03),I(1f,03,1d,3d),I(02,04,45,04)};

  eul_allocate_static_string(str_5604, "exported lexical binding ~a not available", 41);
  /* Byte-vector with size: 26 is_init: 0 index: 22 binding: anonymous */
  static const void *G005602[] = {I(ab,1b,24,00),B(sx_obj1 ,14),I(3c,01,1b,44),I(04,86,36,56),I(1c,24,00,00),B(p_env ,7),I(3c,01,1b,44),I(36,1b,84,24),B(sx_obj1 ,42),I(08,1c,24,00),B(p_env ,11),I(3c,01,2a,1b),I(24,00,00,00),B(sx_obj ,49),I(3c,01,1b,44),I(11,1c,87,1c),I(82,1d,24,00),B(sx_obj ,17),I(09,22,02,36),I(02,86,22,02),I(36,12,86,23),B(ex_direct ,21),I(1f,04,24,00),B(i_notify ,6),I(3d,03,04,22),I(01,45,03,00)};

  /* Byte-vector with size: 9 is_init: 0 index: 23 binding: expand-export */
  static const void *G005605[] = {I(aa,8a,0f,24),B(sx_obj1 ,59),I(08,23,00,00),B(ex_direct ,11),I(23,00,00,00),B(ex_direct ,22),I(3b,02,1c,24),B(aux_table ,7),I(3d,02,01,00)};

  /* Byte-vector with size: 1 is_init: 0 index: 24 binding: anonymous */
  static const void *G005607[] = {I(ab,1c,45,02)};

  eul_allocate_static_string(str_5611, "no directive expander ~a available", 34);
  eul_allocate_static_string(str_5612, "no directive expander ~a available", 34);
  /* Byte-vector with size: 34 is_init: 0 index: 27 binding: directive-expander */
  static const void *G005609[] = {I(ab,1c,7a,12),I(1b,44,12,23),B(ex_direct ,11),I(23,00,00,00),B(ex_direct ,24),I(3b,02,36,67),I(1d,10,7c,1b),I(44,3b,1f,03),I(10,24,00,00),B(ex_direct ,2),I(3c,01,1b,44),I(04,1b,36,25),I(23,00,00,00),B(ex_direct ,25),I(1f,05,24,00),B(format ,2),I(3c,02,24,00),B(condition ,8),I(1c,24,00,00),B(boot ,13),I(3c,02,22,01),I(22,01,36,25),I(23,00,00,00),B(ex_direct ,26),I(1f,04,24,00),B(format ,2),I(3c,02,24,00),B(condition ,8),I(1c,24,00,00),B(boot ,13),I(3c,02,22,01),I(22,01,1f,03),I(1f,03,1d,3d),I(02,04,45,04)};

  /* Byte-vector with size: 1 is_init: 0 index: 28 binding: (method-G005481) */
  static const void *G005613[] = {I(ab,86,45,02)};

  eul_allocate_static_string(str_5617, "compile time error condition: ", 30);
  eul_allocate_static_string(str_5618, "bad directive syntax", 20);
  /* Byte-vector with size: 23 is_init: 0 index: 32 binding: (method-G005481) */
  static const void *G005615[] = {I(ab,24,00,00),B(stream2 ,9),I(23,00,00,00),B(ex_direct ,29),I(24,00,00,00),B(format ,4),I(3c,02,2a,24),B(stream2 ,9),I(1d,24,00,00),B(mop_access ,8),I(3c,02,2a,24),B(i_param ,56),I(44,04,86,36),I(23,24,00,00),B(i_error ,5),I(23,00,00,00),B(ex_direct ,30),I(23,00,00,00),B(ex_direct ,31),I(47,00,00,24),B(boot ,13),I(3d,04,02,45),I(02,00,00,00)};

  /* Byte-vector with size: 77 is_init: 0 index: 34 binding: expand-directive */
  static const void *G005620[] = {I(aa,46,01,1b),I(48,00,00,84),I(24,00,00,00),B(mop_class ,22),I(24,00,00,00),B(mop_class ,22),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(ex_direct ,11),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,63),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,8a),I(03,02,84,86),I(86,24,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,1f,03),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(ex_direct ,33),I(23,00,00,00),B(ex_direct ,32),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,1f,06),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,1f,07),I(8a,03,02,84),I(24,00,00,00),B(i_error ,5),I(86,24,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,1f,0a),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(ex_direct ,33),I(23,00,00,00),B(ex_direct ,28),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,1f,0d),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,1f,0e),I(24,00,00,00),B(dynamic ,5),I(3c,01,2a,47),I(00,00,24,00),B(ex_direct ,5),I(24,00,00,00),B(ex_direct ,5),I(3c,02,83,24),B(dynamic ,6),I(3c,01,2a,1b),I(45,14,00,00)};

  /* Byte-vector with size: 69 is_init: 1 index: 0 binding: initialize-ex-direct */
  static const void *G005623[] = {I(87,25,00,00),B(ex_direct ,1),I(24,00,00,00),B(ex_expose ,1),I(3e,0b,24,00),B(ex_expose ,0),I(3c,00,21,01),I(24,00,00,00),B(ex_syntax ,1),I(3e,0b,24,00),B(ex_syntax ,0),I(3c,00,21,01),I(24,00,00,00),B(ex_import ,1),I(3e,0b,24,00),B(ex_import ,0),I(3c,00,21,01),I(24,00,00,00),B(sx_node ,1),I(3e,0b,24,00),B(sx_node ,0),I(3c,00,21,01),I(24,00,00,00),B(sx_obj ,1),I(3e,0b,24,00),B(sx_obj ,0),I(3c,00,21,01),I(24,00,00,00),B(p_env ,1),I(3e,0b,24,00),B(p_env ,0),I(3c,00,21,01),I(24,00,00,00),B(i_all ,1),I(3e,0b,24,00),B(i_all ,0),I(3c,00,21,01),I(23,00,00,00),B(ex_direct ,35),I(23,00,00,00),B(ex_direct ,34),I(3b,01,25,00),B(ex_direct ,6),I(23,00,00,00),B(ex_direct ,36),I(23,00,00,00),B(ex_direct ,27),I(3b,02,25,00),B(ex_direct ,5),I(23,00,00,00),B(ex_direct ,37),I(23,00,00,00),B(ex_direct ,23),I(3b,01,25,00),B(ex_direct ,4),I(23,00,00,00),B(ex_direct ,38),I(23,00,00,00),B(ex_direct ,20),I(3b,02,25,00),B(ex_direct ,3),I(86,25,00,00),B(ex_direct ,2),I(23,00,00,00),B(ex_direct ,39),I(23,00,00,00),B(ex_direct ,18),I(3b,00,3d,00),I(00,ac,00,00)};


  /* Initializations */
  eul_allocate_bytevector( G005582,G005581);
  eul_allocate_bytevector( G005584,G005583);
  eul_intern_symbol(sym_5587,"*actual-module*");
  eul_allocate_bytevector( G005586,G005585);
  eul_intern_symbol(sym_5590,"anonymous");
  eul_allocate_bytevector( G005589,G005588);
  eul_allocate_bytevector( G005592,G005591);
  eul_intern_symbol(sym_5595,"import");
  eul_intern_symbol(sym_5596,"export");
  eul_intern_symbol(sym_5597,"expose");
  eul_intern_symbol(sym_5598,"syntax");
  eul_allocate_bytevector( G005594,G005593);
  object_class(str_5601) = eul_static_string_class;
  eul_allocate_bytevector( G005600,G005599);
  object_class(str_5604) = eul_static_string_class;
  eul_allocate_bytevector( G005603,G005602);
  eul_allocate_bytevector( G005606,G005605);
  eul_allocate_bytevector( G005608,G005607);
  object_class(str_5611) = eul_static_string_class;
  object_class(str_5612) = eul_static_string_class;
  eul_allocate_bytevector( G005610,G005609);
  eul_allocate_bytevector( G005614,G005613);
  object_class(str_5617) = eul_static_string_class;
  object_class(str_5618) = eul_static_string_class;
  eul_intern_keyword(key_5619,"ct-error-value");
  eul_allocate_bytevector( G005616,G005615);
  eul_intern_symbol(sym_5622,"(method G005481)");
  eul_allocate_bytevector( G005621,G005620);
  eul_intern_symbol(sym_5625,"expand-directive");
  eul_intern_symbol(sym_5626,"directive-expander");
  eul_intern_symbol(sym_5627,"expand-export");
  eul_intern_symbol(sym_5628,"install-directive-expander");
  eul_intern_symbol(sym_5629,"top-level");
  eul_allocate_bytevector( G005624,G005623);

  /* Set local bindings */
  {
    int i;
    for (i = 2; i < 7; i++)
      ex_direct_bindings[i] = eul_nil;
  }

  ex_direct_bindings[ 7] = G005582;
  ex_direct_bindings[ 8] = G005584;
  ex_direct_bindings[ 9] = sym_5587;
  ex_direct_bindings[ 10] = G005586;
  ex_direct_bindings[ 11] = sym_5590;
  ex_direct_bindings[ 12] = G005589;
  ex_direct_bindings[ 13] = G005592;
  ex_direct_bindings[ 14] = sym_5595;
  ex_direct_bindings[ 15] = sym_5596;
  ex_direct_bindings[ 16] = sym_5597;
  ex_direct_bindings[ 17] = sym_5598;
  ex_direct_bindings[ 18] = G005594;
  ex_direct_bindings[ 19] = str_5601;
  ex_direct_bindings[ 20] = G005600;
  ex_direct_bindings[ 21] = str_5604;
  ex_direct_bindings[ 22] = G005603;
  ex_direct_bindings[ 23] = G005606;
  ex_direct_bindings[ 24] = G005608;
  ex_direct_bindings[ 25] = str_5611;
  ex_direct_bindings[ 26] = str_5612;
  ex_direct_bindings[ 27] = G005610;
  ex_direct_bindings[ 28] = G005614;
  ex_direct_bindings[ 29] = str_5617;
  ex_direct_bindings[ 30] = str_5618;
  ex_direct_bindings[ 31] = key_5619;
  ex_direct_bindings[ 32] = G005616;
  ex_direct_bindings[ 33] = sym_5622;
  ex_direct_bindings[ 34] = G005621;
  ex_direct_bindings[ 1] = eul_nil;
  ex_direct_bindings[ 35] = sym_5625;
  ex_direct_bindings[ 36] = sym_5626;
  ex_direct_bindings[ 37] = sym_5627;
  ex_direct_bindings[ 38] = sym_5628;
  ex_direct_bindings[ 39] = sym_5629;
  eul_allocate_lambda( ex_direct_bindings[0], "initialize-ex-direct", 0, G005624);

  }
}


/* eof */