/** ----------------------------------------------------------------------- **
 **                 Generated by EuLisp System 'youtoo'
 ** ----------------------------------------------------------------------- **
 **  Description: C source file of EuLisp module sx-write
 **  Copyright: See file sx-write.em
 ** ----------------------------------------------------------------------- **/

#include "eulisp.h"


/* Imported modules */
extern void initialize_module_i_all();
extern void initialize_module_sx_obj();
extern LispRef i_all_bindings[];
extern LispRef stream_bindings[];
extern LispRef aux_table_bindings[];
extern LispRef mop_inspect_bindings[];
extern LispRef mop_meth_bindings[];
extern LispRef stream2_bindings[];
extern LispRef boot1_bindings[];
extern LispRef mop_class_bindings[];
extern LispRef mop_defcl_bindings[];
extern LispRef mop_access_bindings[];
extern LispRef sx_obj1_bindings[];
extern LispRef number_bindings[];
extern LispRef dynamic_bindings[];
extern LispRef boot_bindings[];
extern LispRef sx_obj2_bindings[];
extern LispRef mop_gf_bindings[];
extern LispRef sx_obj_bindings[];

/* Module bindings with size 70 */
LispRef sx_write_bindings[70];

/* Foreign functions */

/* Initialize module only once */
static int is_initialized = 0;

/* Initialize module sx-write */
void initialize_module_sx_write()
{
  if (is_initialized) return;
  initialize_module_i_all();
  initialize_module_sx_obj();
  eul_fast_table_set(eul_modules,"sx_write",(LispRef) sx_write_bindings);
  is_initialized = 1;
  {
  /* Declarations */
  LispRef sym_2032, sym_2031, sym_2030, G002029, sym_2023, G002022, G002020, G002017, G002014, G002011, G002007, sym_2005, sym_2004, sym_2003, G002002, G001999, G001995, G001993, G001990, sym_1986, G001985, G001982, G001979, G001976, G001973, G001970, G001967, sym_1961, G001960, G001957, sym_1954, G001952, G001949, G001946, G001943;

  /* Code vector and literal definitions */
  eul_allocate_static_string(str_1944, "(if ~a ~a ~a)", 13);
  /* Byte-vector with size: 14 is_init: 0 index: 6 binding: (method-new-generic-prin) */
  static const void *G001942[] = {I(ab,1c,84,24),B(sx_obj ,9),I(08,1d,83,24),B(sx_obj ,9),I(08,1f,03,82),I(24,00,00,00),B(sx_obj ,9),I(08,1f,03,23),B(sx_write ,5),I(1f,04,1f,04),I(1f,04,24,00),B(mop_gf ,17),I(3d,05,05,45),I(05,00,00,00)};

  eul_allocate_static_string(str_1947, "~a", 2);
  /* Byte-vector with size: 11 is_init: 0 index: 8 binding: (method-new-generic-prin) */
  static const void *G001945[] = {I(ab,1c,83,24),B(sx_obj ,42),I(08,1d,82,24),B(sx_obj ,42),I(08,1c,1c,0f),I(1f,03,23,00),B(sx_write ,7),I(1d,24,00,00),B(mop_gf ,17),I(3d,03,05,45),I(05,00,00,00)};

  eul_allocate_static_string(str_1950, "(~a ~a)", 7);
  /* Byte-vector with size: 15 is_init: 0 index: 10 binding: anonymous */
  static const void *G001948[] = {I(aa,1b,24,00),B(sx_obj2 ,10),I(3c,01,1b,34),I(00,00,00,15),I(1c,83,24,00),B(sx_obj2 ,11),I(08,32,00,00),I(00,00,00,08),I(86,47,00,00),I(23,00,00,00),B(sx_write ,9),I(1f,04,1f,03),I(24,00,00,00),B(mop_gf ,17),I(3d,04,03,00)};

  eul_allocate_static_string(str_1953, "(let* (", 7);
  eul_allocate_static_string(str_1955, ") ~a)", 5);
  /* Byte-vector with size: 27 is_init: 0 index: 14 binding: (method-new-generic-prin) */
  static const void *G001951[] = {I(ab,46,01,1b),I(48,00,00,47),I(00,00,23,00),B(sx_write ,11),I(24,00,00,00),B(mop_gf ,17),I(3c,02,2a,1c),I(26,00,00,00),I(00,00,00,05),I(24,00,00,00),B(sx_obj ,18),I(08,23,00,00),B(sx_write ,12),I(23,00,00,00),B(sx_write ,10),I(3b,01,1c,24),B(boot ,4),I(3c,02,2a,1d),I(84,24,00,00),B(sx_obj ,18),I(08,47,00,00),I(23,00,00,00),B(sx_write ,13),I(1d,24,00,00),B(mop_gf ,17),I(3d,03,04,45),I(04,00,00,00)};

  eul_allocate_static_string(str_1958, "(opencoded-lambda ~a ~a)", 24);
  /* Byte-vector with size: 13 is_init: 0 index: 16 binding: (method-new-generic-prin) */
  static const void *G001956[] = {I(ab,1c,26,00),I(00,00,00,05),I(24,00,00,00),B(sx_obj ,18),I(08,1d,84,24),B(sx_obj ,18),I(08,1d,23,00),B(sx_write ,15),I(1f,03,1f,03),I(24,00,00,00),B(mop_gf ,17),I(3d,04,04,45),I(04,00,00,00)};

  eul_allocate_static_string(str_1962, "~a", 2);
  eul_allocate_static_string(str_1963, "inlined-lambda", 14);
  eul_allocate_static_string(str_1964, "lambda", 6);
  eul_allocate_static_string(str_1965, "(~a ~a ~a)", 10);
  /* Byte-vector with size: 52 is_init: 0 index: 22 binding: (method-new-generic-prin) */
  static const void *G001959[] = {I(ab,23,00,00),B(sx_write ,17),I(24,00,00,00),B(dynamic ,3),I(3c,01,24,00),B(number ,23),I(3c,01,1b,34),I(00,00,00,21),I(23,00,00,00),B(sx_write ,17),I(24,00,00,00),B(dynamic ,3),I(3c,01,84,1a),I(32,00,00,00),I(00,00,00,09),I(86,1b,34,00),I(00,00,00,32),I(1f,03,26,00),I(00,00,00,07),I(24,00,00,00),B(sx_obj ,18),I(08,1f,03,23),B(sx_write ,18),I(1d,24,00,00),B(mop_gf ,17),I(3d,03,05,22),I(01,32,00,00),I(00,00,00,64),I(1f,03,84,24),B(sx_obj ,13),I(08,1b,34,00),I(00,00,00,16),I(23,00,00,00),B(sx_write ,19),I(32,00,00,00),I(00,00,00,10),I(23,00,00,00),B(sx_write ,20),I(1f,05,26,00),I(00,00,00,05),I(24,00,00,00),B(sx_obj ,18),I(08,1f,06,84),I(24,00,00,00),B(sx_obj ,18),I(08,1f,06,23),B(sx_write ,21),I(1f,04,1f,04),I(1f,04,24,00),B(mop_gf ,17),I(3d,05,08,22),I(04,45,04,00)};

  eul_allocate_static_string(str_1968, "~a", 2);
  /* Byte-vector with size: 8 is_init: 0 index: 24 binding: (method-new-generic-prin) */
  static const void *G001966[] = {I(ab,1c,82,24),B(sx_obj2 ,29),I(08,1c,23,00),B(sx_write ,23),I(1d,24,00,00),B(mop_gf ,17),I(3d,03,03,45),I(03,00,00,00)};

  eul_allocate_static_string(str_1971, "~a", 2);
  /* Byte-vector with size: 8 is_init: 0 index: 26 binding: (method-new-generic-prin) */
  static const void *G001969[] = {I(ab,1c,83,24),B(sx_obj2 ,21),I(08,1c,23,00),B(sx_write ,25),I(1d,24,00,00),B(mop_gf ,17),I(3d,03,03,45),I(03,00,00,00)};

  eul_allocate_static_string(str_1974, "(setq ~a ~a)", 12);
  /* Byte-vector with size: 11 is_init: 0 index: 28 binding: (method-new-generic-prin) */
  static const void *G001972[] = {I(ab,1c,83,24),B(sx_obj2 ,25),I(08,1d,82,24),B(sx_obj2 ,25),I(08,1d,23,00),B(sx_write ,27),I(1f,03,1f,03),I(24,00,00,00),B(mop_gf ,17),I(3d,04,04,45),I(04,00,00,00)};

  eul_allocate_static_string(str_1977, "~a", 2);
  /* Byte-vector with size: 10 is_init: 0 index: 30 binding: (method-new-generic-prin) */
  static const void *G001975[] = {I(ab,1c,26,00),I(00,00,00,03),I(24,00,00,00),B(sx_obj2 ,11),I(08,1c,23,00),B(sx_write ,29),I(1d,24,00,00),B(mop_gf ,17),I(3d,03,03,45),I(03,00,00,00)};

  eul_allocate_static_string(str_1980, "~a", 2);
  /* Byte-vector with size: 10 is_init: 0 index: 32 binding: (method-new-generic-prin) */
  static const void *G001978[] = {I(ab,1c,26,00),I(00,00,00,06),I(24,00,00,00),B(sx_obj1 ,44),I(08,1c,23,00),B(sx_write ,31),I(1d,24,00,00),B(mop_gf ,17),I(3d,03,03,45),I(03,00,00,00)};

  eul_allocate_static_string(str_1983, "~a", 2);
  /* Byte-vector with size: 10 is_init: 0 index: 34 binding: (method-new-generic-prin) */
  static const void *G001981[] = {I(ab,1c,26,00),I(00,00,00,15),I(24,00,00,00),B(sx_obj1 ,60),I(08,1c,23,00),B(sx_write ,33),I(1d,24,00,00),B(mop_gf ,17),I(3d,03,03,45),I(03,00,00,00)};

  eul_allocate_static_string(str_1987, "~a", 2);
  eul_allocate_static_string(str_1988, "<unprintable syntax object>", 27);
  /* Byte-vector with size: 25 is_init: 0 index: 38 binding: (method-new-generic-prin) */
  static const void *G001984[] = {I(ab,1c,24,00),B(mop_access ,5),I(3c,01,23,00),B(sx_write ,35),I(1c,86,6c,1b),I(34,00,00,00),I(00,00,00,38),I(1f,03,23,00),B(sx_write ,35),I(24,00,00,00),B(mop_defcl ,7),I(3c,02,1f,03),I(23,00,00,00),B(sx_write ,36),I(1d,24,00,00),B(mop_gf ,17),I(3d,03,05,22),I(01,32,00,00),I(00,00,00,1a),I(1d,23,00,00),B(sx_write ,37),I(24,00,00,00),B(mop_gf ,17),I(3d,02,04,45),I(04,00,00,00)};

  eul_allocate_static_string(str_1991, "#<macro-function>", 17);
  /* Byte-vector with size: 5 is_init: 0 index: 40 binding: (method-new-generic-prin) */
  static const void *G001989[] = {I(ab,23,00,00),B(sx_write ,39),I(24,00,00,00),B(mop_gf ,17),I(3d,02,01,00)};

  /* Byte-vector with size: 12 is_init: 0 index: 41 binding: (method-generic-prin) */
  static const void *G001992[] = {I(ab,23,00,00),B(sx_write ,17),I(24,00,00,00),B(dynamic ,3),I(3c,01,1b,34),I(00,00,00,15),I(1d,1d,24,00),B(sx_write ,2),I(3d,02,03,32),I(00,00,00,08),I(38,02,01,45),I(03,00,00,00)};

  eul_allocate_static_string(str_1996, "#<binding: ~a:~a:~a>", 20);
  eul_allocate_static_string(str_1997, "#<binding: ~a:~a>", 17);
  /* Byte-vector with size: 38 is_init: 0 index: 44 binding: (method-generic-prin) */
  static const void *G001994[] = {I(ab,1c,26,00),I(00,00,00,05),I(24,00,00,00),B(sx_obj1 ,44),I(08,1d,26,00),I(00,00,00,06),I(24,00,00,00),B(sx_obj1 ,44),I(08,1f,03,83),I(24,00,00,00),B(sx_obj1 ,44),I(08,1d,24,00),B(sx_obj1 ,7),I(3c,01,1b,34),I(00,00,00,1d),I(1f,03,26,00),I(00,00,00,15),I(24,00,00,00),B(sx_obj1 ,60),I(08,32,00,00),I(00,00,00,09),I(1f,03,1d,7e),I(1b,34,00,00),I(00,00,00,23),I(1f,06,23,00),B(sx_write ,42),I(1f,03,1f,07),I(1f,07,24,00),B(mop_gf ,17),I(3d,05,08,32),I(00,00,00,1c),I(1f,06,23,00),B(sx_write ,43),I(1f,03,1f,07),I(24,00,00,00),B(mop_gf ,17),I(3d,04,08,45),I(08,00,00,00)};

  eul_allocate_static_string(str_2000, "#<module: ~a>", 13);
  /* Byte-vector with size: 10 is_init: 0 index: 46 binding: (method-generic-prin) */
  static const void *G001998[] = {I(ab,1c,26,00),I(00,00,00,15),I(24,00,00,00),B(sx_obj1 ,60),I(08,1c,23,00),B(sx_write ,45),I(1d,24,00,00),B(mop_gf ,17),I(3d,03,03,45),I(03,00,00,00)};

  /* Byte-vector with size: 479 is_init: 0 index: 50 binding: top-level */
  static const void *G002001[] = {I(a9,84,24,00),B(mop_class ,21),I(24,00,00,00),B(mop_class ,21),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(sx_write ,47),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(sx_write ,2),I(2a,24,00,00),B(stream2 ,2),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(sx_obj1 ,60),I(24,00,00,00),B(stream2 ,21),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(stream2 ,2),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(sx_write ,48),I(23,00,00,00),B(sx_write ,46),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(stream2 ,2),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(stream2 ,2),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(sx_obj1 ,44),I(24,00,00,00),B(stream2 ,21),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(stream2 ,2),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(sx_write ,48),I(23,00,00,00),B(sx_write ,44),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(stream2 ,2),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(stream2 ,2),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(sx_obj1 ,27),I(24,00,00,00),B(stream2 ,21),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(stream2 ,2),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(sx_write ,48),I(23,00,00,00),B(sx_write ,41),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(stream2 ,2),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(sx_write ,2),I(2a,24,00,00),B(sx_write ,2),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(mop_class ,28),I(86,24,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(sx_write ,2),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(sx_write ,49),I(23,00,00,00),B(sx_write ,40),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(sx_write ,2),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(sx_write ,2),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(sx_obj1 ,27),I(86,24,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(sx_write ,2),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(sx_write ,49),I(23,00,00,00),B(sx_write ,38),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(sx_write ,2),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(sx_write ,2),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(sx_obj1 ,60),I(86,24,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(sx_write ,2),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(sx_write ,49),I(23,00,00,00),B(sx_write ,34),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(sx_write ,2),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(sx_write ,2),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(sx_obj1 ,44),I(86,24,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(sx_write ,2),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(sx_write ,49),I(23,00,00,00),B(sx_write ,32),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(sx_write ,2),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(sx_write ,2),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(sx_obj2 ,11),I(86,24,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(sx_write ,2),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(sx_write ,49),I(23,00,00,00),B(sx_write ,30),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(sx_write ,2),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(sx_write ,2),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(sx_obj2 ,25),I(86,24,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(sx_write ,2),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(sx_write ,49),I(23,00,00,00),B(sx_write ,28),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(sx_write ,2),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(sx_write ,2),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(sx_obj2 ,21),I(86,24,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(sx_write ,2),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(sx_write ,49),I(23,00,00,00),B(sx_write ,26),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(sx_write ,2),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(sx_write ,2),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(sx_obj2 ,32),I(86,24,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(sx_write ,2),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(sx_write ,49),I(23,00,00,00),B(sx_write ,24),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(sx_write ,2),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(sx_write ,2),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(sx_obj ,13),I(86,24,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(sx_write ,2),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(sx_write ,49),I(23,00,00,00),B(sx_write ,22),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(sx_write ,2),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(sx_write ,2),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(sx_obj ,10),I(86,24,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(sx_write ,2),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(sx_write ,49),I(23,00,00,00),B(sx_write ,16),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(sx_write ,2),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(sx_write ,2),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(sx_obj ,2),I(86,24,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(sx_write ,2),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(sx_write ,49),I(23,00,00,00),B(sx_write ,14),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(sx_write ,2),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(sx_write ,2),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(sx_obj ,42),I(86,24,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(sx_write ,2),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(sx_write ,49),I(23,00,00,00),B(sx_write ,8),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(sx_write ,2),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(sx_write ,2),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(sx_obj ,9),I(86,24,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(sx_write ,2),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(sx_write ,49),I(23,00,00,00),B(sx_write ,6),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(sx_write ,2),I(1c,24,00,00),B(mop_meth ,5),I(3d,02,64,45),I(64,00,00,00)};

  eul_allocate_static_string(str_2008, "#<macro-function>", 17);
  eul_allocate_static_string(str_2009, "~a", 2);
  /* Byte-vector with size: 16 is_init: 0 index: 53 binding: binding-prin-string */
  static const void *G002006[] = {I(aa,84,24,00),B(sx_obj1 ,44),I(08,1b,24,00),B(mop_inspect ,6),I(3c,01,1b,34),I(00,00,00,15),I(23,00,00,00),B(sx_write ,51),I(32,00,00,00),I(00,00,00,1b),I(86,23,00,00),B(sx_write ,52),I(1f,03,24,00),B(mop_gf ,17),I(3d,03,02,45),I(02,00,00,00)};

  eul_allocate_static_string(str_2012, "\n   (~a . ~a)", 13);
  /* Byte-vector with size: 14 is_init: 0 index: 55 binding: anonymous */
  static const void *G002010[] = {I(ab,1b,26,00),I(00,00,00,06),I(24,00,00,00),B(sx_obj1 ,44),I(08,1c,24,00),B(sx_write ,3),I(3c,01,47,00),I(00,23,00,00),B(sx_write ,54),I(1f,03,1f,03),I(24,00,00,00),B(mop_gf ,17),I(3d,04,04,45),I(04,00,00,00)};

  eul_allocate_static_string(str_2015, "\n   (~a . ~a)", 13);
  /* Byte-vector with size: 14 is_init: 0 index: 57 binding: anonymous */
  static const void *G002013[] = {I(ab,1b,26,00),I(00,00,00,06),I(24,00,00,00),B(sx_obj1 ,44),I(08,1c,24,00),B(sx_write ,3),I(3c,01,47,00),I(00,23,00,00),B(sx_write ,56),I(1f,03,1f,03),I(24,00,00,00),B(mop_gf ,17),I(3d,04,04,45),I(04,00,00,00)};

  eul_allocate_static_string(str_2018, "\n   (~a . ~a)", 13);
  /* Byte-vector with size: 14 is_init: 0 index: 59 binding: anonymous */
  static const void *G002016[] = {I(ab,1b,26,00),I(00,00,00,06),I(24,00,00,00),B(sx_obj1 ,44),I(08,1c,24,00),B(sx_write ,3),I(3c,01,47,00),I(00,23,00,00),B(sx_write ,58),I(1f,03,1f,03),I(24,00,00,00),B(mop_gf ,17),I(3d,04,04,45),I(04,00,00,00)};

  /* Byte-vector with size: 6 is_init: 0 index: 60 binding: anonymous */
  static const void *G002019[] = {I(a9,83,24,00),B(dynamic ,8),I(3c,01,2a,83),I(24,00,00,00),B(dynamic ,8),I(3d,01,00,00)};

  eul_allocate_static_string(str_2024, "\nPretty printed environment of module ~a:", 41);
  eul_allocate_static_string(str_2025, "\n  lexical-env:", 15);
  eul_allocate_static_string(str_2026, "\n  external-env:", 16);
  eul_allocate_static_string(str_2027, "\n  syntax-env:", 14);
  /* Byte-vector with size: 99 is_init: 0 index: 66 binding: pprint-module */
  static const void *G002021[] = {I(43,fe,46,01),I(1b,34,00,00),I(00,00,00,0f),I(1b,10,32,00),I(00,00,00,07),I(86,1b,34,00),I(00,00,00,0e),I(1b,32,00,00),I(00,00,00,08),I(87,1b,48,00),I(00,23,00,00),B(sx_write ,17),I(87,24,00,00),B(dynamic ,2),I(3c,02,2a,23),B(sx_write ,61),I(24,00,00,00),B(dynamic ,3),I(3c,01,23,00),B(sx_write ,12),I(23,00,00,00),B(sx_write ,60),I(3b,00,1c,0f),I(23,00,00,00),B(sx_write ,61),I(1c,24,00,00),B(dynamic ,2),I(3c,02,2a,1f),I(05,47,00,00),I(24,00,00,00),B(mop_access ,3),I(3c,02,2a,1f),I(05,26,00,00),I(00,00,00,15),I(24,00,00,00),B(sx_obj1 ,60),I(08,47,00,00),I(23,00,00,00),B(sx_write ,62),I(1d,24,00,00),B(mop_gf ,17),I(3c,03,2a,47),I(00,00,23,00),B(sx_write ,63),I(24,00,00,00),B(mop_gf ,17),I(3c,02,2a,1f),I(06,26,00,00),I(00,00,00,10),I(24,00,00,00),B(sx_obj1 ,60),I(08,23,00,00),B(sx_write ,12),I(23,00,00,00),B(sx_write ,59),I(3b,02,1c,24),B(aux_table ,7),I(3c,02,2a,47),I(00,00,23,00),B(sx_write ,64),I(24,00,00,00),B(mop_gf ,17),I(3c,02,2a,1f),I(07,26,00,00),I(00,00,00,0f),I(24,00,00,00),B(sx_obj1 ,60),I(08,23,00,00),B(sx_write ,12),I(23,00,00,00),B(sx_write ,57),I(3b,02,1c,24),B(aux_table ,7),I(3c,02,2a,47),I(00,00,23,00),B(sx_write ,65),I(24,00,00,00),B(mop_gf ,17),I(3c,02,2a,1f),I(08,26,00,00),I(00,00,00,0e),I(24,00,00,00),B(sx_obj1 ,60),I(08,23,00,00),B(sx_write ,12),I(23,00,00,00),B(sx_write ,55),I(3b,02,1c,24),B(aux_table ,7),I(3c,02,2a,47),I(00,00,24,00),B(stream ,7),I(3c,01,83,24),B(dynamic ,8),I(3c,01,2a,83),I(24,00,00,00),B(dynamic ,8),I(3c,01,2a,1f),I(0a,45,0b,00)};

  /* Byte-vector with size: 32 is_init: 1 index: 0 binding: initialize-sx-write */
  static const void *G002028[] = {I(87,25,00,00),B(sx_write ,1),I(24,00,00,00),B(sx_obj ,1),I(3e,0b,24,00),B(sx_obj ,0),I(3c,00,21,01),I(24,00,00,00),B(i_all ,1),I(3e,0b,24,00),B(i_all ,0),I(3c,00,21,01),I(23,00,00,00),B(sx_write ,67),I(23,00,00,00),B(sx_write ,66),I(3b,fe,25,00),B(sx_write ,4),I(23,00,00,00),B(sx_write ,68),I(23,00,00,00),B(sx_write ,53),I(3b,01,25,00),B(sx_write ,3),I(86,25,00,00),B(sx_write ,2),I(23,00,00,00),B(sx_write ,69),I(23,00,00,00),B(sx_write ,50),I(3b,00,3d,00),I(00,ac,00,00)};


  /* Initializations */
  object_class(str_1944) = eul_static_string_class;
  eul_allocate_bytevector( G001943,G001942);
  object_class(str_1947) = eul_static_string_class;
  eul_allocate_bytevector( G001946,G001945);
  object_class(str_1950) = eul_static_string_class;
  eul_allocate_bytevector( G001949,G001948);
  object_class(str_1953) = eul_static_string_class;
  eul_intern_symbol(sym_1954,"anonymous");
  object_class(str_1955) = eul_static_string_class;
  eul_allocate_bytevector( G001952,G001951);
  object_class(str_1958) = eul_static_string_class;
  eul_allocate_bytevector( G001957,G001956);
  eul_intern_symbol(sym_1961,"*pprint*");
  object_class(str_1962) = eul_static_string_class;
  object_class(str_1963) = eul_static_string_class;
  object_class(str_1964) = eul_static_string_class;
  object_class(str_1965) = eul_static_string_class;
  eul_allocate_bytevector( G001960,G001959);
  object_class(str_1968) = eul_static_string_class;
  eul_allocate_bytevector( G001967,G001966);
  object_class(str_1971) = eul_static_string_class;
  eul_allocate_bytevector( G001970,G001969);
  object_class(str_1974) = eul_static_string_class;
  eul_allocate_bytevector( G001973,G001972);
  object_class(str_1977) = eul_static_string_class;
  eul_allocate_bytevector( G001976,G001975);
  object_class(str_1980) = eul_static_string_class;
  eul_allocate_bytevector( G001979,G001978);
  object_class(str_1983) = eul_static_string_class;
  eul_allocate_bytevector( G001982,G001981);
  eul_intern_symbol(sym_1986,"binding");
  object_class(str_1987) = eul_static_string_class;
  object_class(str_1988) = eul_static_string_class;
  eul_allocate_bytevector( G001985,G001984);
  object_class(str_1991) = eul_static_string_class;
  eul_allocate_bytevector( G001990,G001989);
  eul_allocate_bytevector( G001993,G001992);
  object_class(str_1996) = eul_static_string_class;
  object_class(str_1997) = eul_static_string_class;
  eul_allocate_bytevector( G001995,G001994);
  object_class(str_2000) = eul_static_string_class;
  eul_allocate_bytevector( G001999,G001998);
  eul_intern_symbol(sym_2003,"new-generic-prin");
  eul_intern_symbol(sym_2004,"(method generic-prin)");
  eul_intern_symbol(sym_2005,"(method new-generic-prin)");
  eul_allocate_bytevector( G002002,G002001);
  object_class(str_2008) = eul_static_string_class;
  object_class(str_2009) = eul_static_string_class;
  eul_allocate_bytevector( G002007,G002006);
  object_class(str_2012) = eul_static_string_class;
  eul_allocate_bytevector( G002011,G002010);
  object_class(str_2015) = eul_static_string_class;
  eul_allocate_bytevector( G002014,G002013);
  object_class(str_2018) = eul_static_string_class;
  eul_allocate_bytevector( G002017,G002016);
  eul_allocate_bytevector( G002020,G002019);
  eul_intern_symbol(sym_2023,"*clean-ups*");
  object_class(str_2024) = eul_static_string_class;
  object_class(str_2025) = eul_static_string_class;
  object_class(str_2026) = eul_static_string_class;
  object_class(str_2027) = eul_static_string_class;
  eul_allocate_bytevector( G002022,G002021);
  eul_intern_symbol(sym_2030,"pprint-module");
  eul_intern_symbol(sym_2031,"binding-prin-string");
  eul_intern_symbol(sym_2032,"top-level");
  eul_allocate_bytevector( G002029,G002028);

  /* Set local bindings */
  {
    int i;
    for (i = 2; i < 5; i++)
      sx_write_bindings[i] = eul_nil;
  }

  sx_write_bindings[ 5] = str_1944;
  sx_write_bindings[ 6] = G001943;
  sx_write_bindings[ 7] = str_1947;
  sx_write_bindings[ 8] = G001946;
  sx_write_bindings[ 9] = str_1950;
  sx_write_bindings[ 10] = G001949;
  sx_write_bindings[ 11] = str_1953;
  sx_write_bindings[ 12] = sym_1954;
  sx_write_bindings[ 13] = str_1955;
  sx_write_bindings[ 14] = G001952;
  sx_write_bindings[ 15] = str_1958;
  sx_write_bindings[ 16] = G001957;
  sx_write_bindings[ 17] = sym_1961;
  sx_write_bindings[ 18] = str_1962;
  sx_write_bindings[ 19] = str_1963;
  sx_write_bindings[ 20] = str_1964;
  sx_write_bindings[ 21] = str_1965;
  sx_write_bindings[ 22] = G001960;
  sx_write_bindings[ 23] = str_1968;
  sx_write_bindings[ 24] = G001967;
  sx_write_bindings[ 25] = str_1971;
  sx_write_bindings[ 26] = G001970;
  sx_write_bindings[ 27] = str_1974;
  sx_write_bindings[ 28] = G001973;
  sx_write_bindings[ 29] = str_1977;
  sx_write_bindings[ 30] = G001976;
  sx_write_bindings[ 31] = str_1980;
  sx_write_bindings[ 32] = G001979;
  sx_write_bindings[ 33] = str_1983;
  sx_write_bindings[ 34] = G001982;
  sx_write_bindings[ 35] = sym_1986;
  sx_write_bindings[ 36] = str_1987;
  sx_write_bindings[ 37] = str_1988;
  sx_write_bindings[ 38] = G001985;
  sx_write_bindings[ 39] = str_1991;
  sx_write_bindings[ 40] = G001990;
  sx_write_bindings[ 41] = G001993;
  sx_write_bindings[ 42] = str_1996;
  sx_write_bindings[ 43] = str_1997;
  sx_write_bindings[ 44] = G001995;
  sx_write_bindings[ 45] = str_2000;
  sx_write_bindings[ 46] = G001999;
  sx_write_bindings[ 47] = sym_2003;
  sx_write_bindings[ 48] = sym_2004;
  sx_write_bindings[ 49] = sym_2005;
  sx_write_bindings[ 50] = G002002;
  sx_write_bindings[ 51] = str_2008;
  sx_write_bindings[ 52] = str_2009;
  sx_write_bindings[ 53] = G002007;
  sx_write_bindings[ 54] = str_2012;
  sx_write_bindings[ 55] = G002011;
  sx_write_bindings[ 56] = str_2015;
  sx_write_bindings[ 57] = G002014;
  sx_write_bindings[ 58] = str_2018;
  sx_write_bindings[ 59] = G002017;
  sx_write_bindings[ 60] = G002020;
  sx_write_bindings[ 61] = sym_2023;
  sx_write_bindings[ 62] = str_2024;
  sx_write_bindings[ 63] = str_2025;
  sx_write_bindings[ 64] = str_2026;
  sx_write_bindings[ 65] = str_2027;
  sx_write_bindings[ 66] = G002022;
  sx_write_bindings[ 1] = eul_nil;
  sx_write_bindings[ 67] = sym_2030;
  sx_write_bindings[ 68] = sym_2031;
  sx_write_bindings[ 69] = sym_2032;
  eul_allocate_lambda( sx_write_bindings[0], "initialize-sx-write", 0, G002029);

  }
}


/* eof */
