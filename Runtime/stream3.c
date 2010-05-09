/** ----------------------------------------------------------------------- **
 **                 Generated by EuLisp System 'youtoo'
 ** ----------------------------------------------------------------------- **
 **  Description: C source file of EuLisp module stream3
 **  Copyright: See file stream3.em
 ** ----------------------------------------------------------------------- **/

#include "eulisp.h"


/* Imported modules */
extern void initialize_module_telos();
extern void initialize_module_integer();
extern void initialize_module_collect();
extern void initialize_module_list();
extern void initialize_module_character();
extern void initialize_module_string();
extern void initialize_module_vector();
extern void initialize_module_float();
extern void initialize_module_stream1();
extern void initialize_module_stream();
extern LispRef stream1_bindings[];
extern LispRef list_bindings[];
extern LispRef telos_bindings[];
extern LispRef string_bindings[];
extern LispRef vector_bindings[];
extern LispRef float_bindings[];
extern LispRef integer_bindings[];
extern LispRef mop_class_bindings[];
extern LispRef mop_meth_bindings[];
extern LispRef boot_bindings[];
extern LispRef boot1_bindings[];
extern LispRef collect_bindings[];
extern LispRef character_bindings[];
extern LispRef mop_gf_bindings[];
extern LispRef socket_bindings[];
extern LispRef stream2_bindings[];
extern LispRef stream_bindings[];

/* Module bindings with size 51 */
LispRef stream3_bindings[51];

/* Foreign functions */

/* Initialize module only once */
static int is_initialized = 0;

/* Initialize module stream3 */
void initialize_module_stream3()
{
  if (is_initialized) return;
  initialize_module_telos();
  initialize_module_integer();
  initialize_module_collect();
  initialize_module_list();
  initialize_module_character();
  initialize_module_string();
  initialize_module_vector();
  initialize_module_float();
  initialize_module_stream1();
  initialize_module_stream();
  eul_fast_table_set(eul_modules,"stream3",(LispRef) stream3_bindings);
  is_initialized = 1;
  {
  /* Declarations */
  LispRef sym_10061, G0010060, sym_10058, sym_10057, G0010056, G0010054, G0010052, G0010048, G0010045, G0010043, G0010041, G0010038, G0010035, G0010032, G0010027, G0010025, G0010022, G0010020, G0010018, sym_10013, G0010012, G0010009, G0010006, G0010001, G009999, G009996, G009994, G009992, G009990, sym_9988, G009987;

  /* Code vector and literal definitions */
  /* Byte-vector with size: 19 is_init: 0 index: 3 binding: (method-generic-prin) */
  static const void *G009986[] = {I(ab,1c,82,02),I(1b,34,00,00),I(00,00,00,0f),I(1b,32,00,00),I(00,00,00,0f),I(23,00,00,00),B(stream3 ,2),I(82,02,27,3c),I(1f,03,24,00),B(stream ,3),I(3c,02,2a,1b),I(06,1c,1c,1f),I(05,24,00,00),B(stream ,4),I(3c,03,2a,27),I(3e,1f,04,24),B(stream ,3),I(3c,02,2a,1f),I(04,45,05,00)};

  /* Byte-vector with size: 5 is_init: 0 index: 4 binding: (method-generic-prin) */
  static const void *G009989[] = {I(ab,1c,06,1d),I(1c,1f,03,24),B(stream ,4),I(3c,03,2a,1d),I(45,03,00,00)};

  /* Byte-vector with size: 5 is_init: 0 index: 5 binding: (method-generic-prin) */
  static const void *G009991[] = {I(ab,1c,82,02),I(1b,1d,24,00),B(stream2 ,2),I(3c,02,2a,1d),I(45,03,00,00)};

  /* Byte-vector with size: 4 is_init: 0 index: 6 binding: (method-generic-prin) */
  static const void *G009993[] = {I(ab,1c,1c,24),B(stream ,3),I(3c,02,2a,1c),I(45,02,00,00)};

  eul_allocate_static_string(str_9997, " . ", 3);
  /* Byte-vector with size: 27 is_init: 0 index: 8 binding: (method-generic-prin) */
  static const void *G009995[] = {I(ab,27,28,1c),I(24,00,00,00),B(stream ,3),I(3c,02,2a,1c),I(24,00,00,00),B(stream2 ,2),I(1d,24,00,00),B(stream ,11),I(3c,03,1b,12),I(1b,34,00,00),I(00,00,00,0f),I(86,32,00,00),I(00,00,00,2d),I(23,00,00,00),B(stream3 ,7),I(26,00,00,00),I(00,00,00,03),I(1f,04,24,00),B(stream ,4),I(3c,03,2a,1c),I(1f,03,24,00),B(stream ,13),I(3c,02,2a,27),I(29,1f,03,24),B(stream ,3),I(3c,02,2a,1f),I(03,45,04,00)};

  /* Byte-vector with size: 19 is_init: 0 index: 9 binding: anonymous */
  static const void *G009998[] = {I(a9,47,00,03),I(47,00,02,1a),I(1b,34,00,00),I(00,00,00,3f),I(47,00,00,47),I(00,03,02,1b),I(47,00,01,24),B(stream ,13),I(3c,02,2a,27),I(20,47,00,01),I(24,00,00,00),B(stream ,3),I(3c,02,2a,47),I(00,03,2b,1b),I(48,00,03,47),I(00,04,3d,00),I(03,22,02,32),I(00,00,00,06),I(86,45,01,00)};

  eul_allocate_static_string(str_10002, "#()", 3);
  eul_allocate_static_string(str_10003, "#(", 2);
  eul_allocate_static_string(str_10004, "#(", 2);
  /* Byte-vector with size: 61 is_init: 0 index: 13 binding: (method-generic-prin) */
  static const void *G0010000[] = {I(ab,46,06,1c),I(48,00,00,1b),I(48,00,01,47),I(00,00,06,1b),I(2d,1b,34,00),I(00,00,00,26),I(23,00,00,00),B(stream3 ,10),I(26,00,00,00),I(00,00,00,03),I(47,00,01,24),B(stream ,4),I(3c,03,32,00),I(00,00,00,bc),I(1c,83,19,1b),I(34,00,00,00),I(00,00,00,4c),I(23,00,00,00),B(stream3 ,11),I(84,47,00,01),I(24,00,00,00),B(stream ,4),I(3c,03,2a,47),I(00,00,82,02),I(1b,47,00,01),I(24,00,00,00),B(stream ,13),I(3c,02,2a,27),I(29,47,00,01),I(24,00,00,00),B(stream ,3),I(3c,02,22,01),I(32,00,00,00),I(00,00,00,6c),I(1d,2c,82,1c),I(48,00,02,1b),I(48,00,03,23),B(stream3 ,12),I(84,47,00,01),I(24,00,00,00),B(stream ,4),I(3c,03,2a,86),I(1b,48,00,04),I(23,00,00,00),B(stream3 ,2),I(23,00,00,00),B(stream3 ,9),I(3b,00,48,00),I(04,47,00,04),I(3c,00,2a,47),I(00,00,47,00),I(02,02,1b,47),I(00,01,24,00),B(stream ,13),I(3c,02,2a,27),I(29,47,00,01),I(24,00,00,00),B(stream ,3),I(3c,02,22,04),I(22,01,2a,47),I(00,00,45,04)};

  eul_allocate_static_string(str_10007, "#<~a: ~a:~a>", 12);
  /* Byte-vector with size: 15 is_init: 0 index: 15 binding: (method-generic-write) */
  static const void *G0010005[] = {I(ab,1c,04,1b),I(82,02,1f,03),I(84,24,00,00),B(socket ,7),I(08,1f,04,26),I(00,00,00,03),I(24,00,00,00),B(socket ,7),I(08,1f,04,23),B(stream3 ,14),I(1f,04,1f,04),I(1f,04,24,00),B(mop_gf ,17),I(3c,05,2a,1f),I(05,45,06,00)};

  eul_allocate_static_string(str_10010, "#<~a: ~a:~a>", 12);
  /* Byte-vector with size: 14 is_init: 0 index: 17 binding: (method-generic-write) */
  static const void *G0010008[] = {I(ab,1c,04,1b),I(82,02,1f,03),I(83,24,00,00),B(socket ,2),I(08,1f,04,82),I(24,00,00,00),B(socket ,2),I(08,1f,04,23),B(stream3 ,16),I(1f,04,1f,04),I(1f,04,24,00),B(mop_gf ,17),I(3c,05,2a,1f),I(05,45,06,00)};

  eul_allocate_static_string(str_10014, "*unconnected*", 13);
  eul_allocate_static_string(str_10015, "*unconnected*", 13);
  eul_allocate_static_string(str_10016, "#<~a: ~a>", 9);
  /* Byte-vector with size: 47 is_init: 0 index: 22 binding: (method-generic-write) */
  static const void *G0010011[] = {I(ab,1c,26,00),I(00,00,00,05),I(24,00,00,00),B(stream2 ,21),I(08,1d,26,00),I(00,00,00,04),I(24,00,00,00),B(stream2 ,21),I(08,1f,03,82),I(24,00,00,00),B(stream2 ,21),I(08,1f,04,04),I(1b,82,02,1d),I(23,00,00,00),B(stream3 ,18),I(50,1b,34,00),I(00,00,00,36),I(1f,04,24,00),B(stream2 ,13),I(3c,01,1b,34),I(00,00,00,15),I(1f,05,84,24),B(stream2 ,4),I(08,32,00,00),I(00,00,00,0f),I(23,00,00,00),B(stream3 ,19),I(22,01,32,00),I(00,00,00,30),I(1f,05,24,00),B(stream2 ,13),I(3c,01,1b,34),I(00,00,00,15),I(1f,06,84,24),B(stream2 ,4),I(08,32,00,00),I(00,00,00,0f),I(23,00,00,00),B(stream3 ,20),I(22,01,1f,07),I(23,00,00,00),B(stream3 ,21),I(1f,04,1f,03),I(24,00,00,00),B(mop_gf ,17),I(3c,04,2a,1f),I(08,45,09,00)};

  /* Byte-vector with size: 12 is_init: 0 index: 23 binding: (method-generic-write) */
  static const void *G0010017[] = {I(ab,27,22,1c),I(24,00,00,00),B(stream ,3),I(3c,02,2a,1c),I(06,1d,1c,1f),I(03,24,00,00),B(stream ,4),I(3c,03,2a,27),I(22,1d,24,00),B(stream ,3),I(3c,02,2a,1d),I(45,03,00,00)};

  /* Byte-vector with size: 11 is_init: 0 index: 24 binding: (method-generic-write) */
  static const void *G0010019[] = {I(ab,27,23,1c),I(24,00,00,00),B(stream ,3),I(3c,02,2a,27),I(5c,1c,24,00),B(stream ,3),I(3c,02,2a,1c),I(1c,24,00,00),B(stream ,3),I(3c,02,2a,1c),I(45,02,00,00)};

  eul_allocate_static_string(str_10023, " . ", 3);
  /* Byte-vector with size: 27 is_init: 0 index: 26 binding: (method-generic-write) */
  static const void *G0010021[] = {I(ab,27,28,1c),I(24,00,00,00),B(stream ,3),I(3c,02,2a,1c),I(24,00,00,00),B(stream2 ,29),I(1d,24,00,00),B(stream ,11),I(3c,03,1b,12),I(1b,34,00,00),I(00,00,00,0f),I(86,32,00,00),I(00,00,00,2d),I(23,00,00,00),B(stream3 ,25),I(26,00,00,00),I(00,00,00,03),I(1f,04,24,00),B(stream ,4),I(3c,03,2a,1c),I(1f,03,24,00),B(stream ,10),I(3c,02,2a,27),I(29,1f,03,24),B(stream ,3),I(3c,02,2a,1f),I(03,45,04,00)};

  /* Byte-vector with size: 19 is_init: 0 index: 27 binding: anonymous */
  static const void *G0010024[] = {I(a9,47,00,03),I(47,00,02,1a),I(1b,34,00,00),I(00,00,00,3f),I(47,00,00,47),I(00,03,02,1b),I(47,00,01,24),B(stream ,10),I(3c,02,2a,27),I(20,47,00,01),I(24,00,00,00),B(stream ,3),I(3c,02,2a,47),I(00,03,2b,1b),I(48,00,03,47),I(00,04,3d,00),I(03,22,02,32),I(00,00,00,06),I(86,45,01,00)};

  eul_allocate_static_string(str_10028, "#()", 3);
  eul_allocate_static_string(str_10029, "#(", 2);
  eul_allocate_static_string(str_10030, "#(", 2);
  /* Byte-vector with size: 61 is_init: 0 index: 31 binding: (method-generic-write) */
  static const void *G0010026[] = {I(ab,46,06,1c),I(48,00,00,1b),I(48,00,01,47),I(00,00,06,1b),I(2d,1b,34,00),I(00,00,00,26),I(23,00,00,00),B(stream3 ,28),I(26,00,00,00),I(00,00,00,03),I(47,00,01,24),B(stream ,4),I(3c,03,32,00),I(00,00,00,bc),I(1c,83,19,1b),I(34,00,00,00),I(00,00,00,4c),I(23,00,00,00),B(stream3 ,29),I(84,47,00,01),I(24,00,00,00),B(stream ,4),I(3c,03,2a,47),I(00,00,82,02),I(1b,47,00,01),I(24,00,00,00),B(stream ,10),I(3c,02,2a,27),I(29,47,00,01),I(24,00,00,00),B(stream ,3),I(3c,02,22,01),I(32,00,00,00),I(00,00,00,6c),I(1d,2c,82,1c),I(48,00,02,1b),I(48,00,03,23),B(stream3 ,30),I(84,47,00,01),I(24,00,00,00),B(stream ,4),I(3c,03,2a,86),I(1b,48,00,04),I(23,00,00,00),B(stream3 ,2),I(23,00,00,00),B(stream3 ,27),I(3b,00,48,00),I(04,47,00,04),I(3c,00,2a,47),I(00,00,47,00),I(02,02,1b,47),I(00,01,24,00),B(stream ,10),I(3c,02,2a,27),I(29,47,00,01),I(24,00,00,00),B(stream ,3),I(3c,02,22,04),I(22,01,2a,47),I(00,00,45,04)};

  eul_allocate_static_string(str_10033, "#<~a: ~a>", 9);
  /* Byte-vector with size: 10 is_init: 0 index: 33 binding: (method-generic-write) */
  static const void *G0010031[] = {I(ab,1c,04,1b),I(82,02,1f,03),I(82,02,1f,03),I(23,00,00,00),B(stream3 ,32),I(1f,03,1f,03),I(24,00,00,00),B(mop_gf ,17),I(3d,04,05,45),I(05,00,00,00)};

  eul_allocate_static_string(str_10036, "%f", 2);
  /* Byte-vector with size: 6 is_init: 0 index: 35 binding: (method-generic-write) */
  static const void *G0010034[] = {I(ab,1b,23,00),B(stream3 ,34),I(1f,03,24,00),B(stream ,16),I(3c,03,2a,1b),I(45,02,00,00)};

  eul_allocate_static_string(str_10039, "%i", 2);
  /* Byte-vector with size: 6 is_init: 0 index: 37 binding: (method-generic-write) */
  static const void *G0010037[] = {I(ab,1b,23,00),B(stream3 ,36),I(1f,03,24,00),B(stream ,16),I(3c,03,2a,1b),I(45,02,00,00)};

  /* Byte-vector with size: 9 is_init: 0 index: 38 binding: (method-generic-write) */
  static const void *G0010040[] = {I(ab,1c,82,02),I(1b,06,1c,1c),I(1f,04,24,00),B(stream ,4),I(3c,03,2a,27),I(3a,1f,03,24),B(stream ,3),I(3c,02,2a,1f),I(03,45,04,00)};

  /* Byte-vector with size: 22 is_init: 0 index: 39 binding: (method-generic-write) */
  static const void *G0010042[] = {I(ab,1c,82,02),I(24,00,00,00),B(character ,8),I(1c,24,00,00),B(collect ,15),I(3c,02,1b,34),I(00,00,00,15),I(1c,1f,03,24),B(stream2 ,2),I(3c,02,32,00),I(00,00,00,2c),I(27,7c,1f,03),I(24,00,00,00),B(stream ,3),I(3c,02,2a,1c),I(1f,03,24,00),B(stream2 ,2),I(3c,02,2a,27),I(7c,1f,03,24),B(stream ,3),I(3c,02,2a,1f),I(03,45,04,00)};

  eul_allocate_static_string(str_10046, "()", 2);
  /* Byte-vector with size: 6 is_init: 0 index: 41 binding: (method-generic-write) */
  static const void *G0010044[] = {I(ab,23,00,00),B(stream3 ,40),I(84,1d,24,00),B(stream ,4),I(3c,03,2a,86),I(45,02,00,00)};

  eul_allocate_static_string(str_10049, "#<", 2);
  eul_allocate_static_string(str_10050, ": ", 2);
  /* Byte-vector with size: 22 is_init: 0 index: 44 binding: (method-generic-write) */
  static const void *G0010047[] = {I(ab,23,00,00),B(stream3 ,42),I(84,1d,24,00),B(stream ,4),I(3c,03,2a,1c),I(04,1b,82,02),I(82,02,1b,06),I(1c,1c,1f,05),I(24,00,00,00),B(stream ,4),I(3c,03,2a,23),B(stream3 ,43),I(84,1f,05,24),B(stream ,4),I(3c,03,2a,1f),I(04,1f,04,24),B(stream ,9),I(3c,02,2a,27),I(3e,1f,04,24),B(stream ,3),I(3c,02,2a,1f),I(04,45,05,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 45 binding: (method-generic-prin) */
  static const void *G0010051[] = {I(ab,24,00,00),B(stream2 ,29),I(3d,02,00,00)};

  /* Byte-vector with size: 11 is_init: 0 index: 46 binding: (method-generic-write) */
  static const void *G0010053[] = {I(ab,1b,84,24),B(stream2 ,21),I(08,1b,34,00),I(00,00,00,1e),I(1c,84,24,00),B(stream2 ,21),I(08,1f,03,1f),I(03,1d,3d,02),I(04,22,01,32),I(00,00,00,06),I(86,45,03,00)};

  /* Byte-vector with size: 656 is_init: 0 index: 49 binding: top-level */
  static const void *G0010055[] = {I(a9,24,00,00),B(stream2 ,29),I(26,00,00,00),I(00,00,00,03),I(02,84,86,24),B(stream2 ,21),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(stream2 ,29),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(stream3 ,47),I(23,00,00,00),B(stream3 ,46),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(stream2 ,29),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(stream2 ,2),I(26,00,00,00),I(00,00,00,03),I(02,84,86,24),B(stream2 ,21),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(stream2 ,2),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(stream3 ,48),I(23,00,00,00),B(stream3 ,45),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(stream2 ,2),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(stream2 ,29),I(26,00,00,00),I(00,00,00,03),I(02,84,86,24),B(stream2 ,20),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(stream2 ,29),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(stream3 ,47),I(23,00,00,00),B(stream3 ,44),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(stream2 ,29),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(stream2 ,29),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(mop_class ,26),I(24,00,00,00),B(stream2 ,20),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(stream2 ,29),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(stream3 ,47),I(23,00,00,00),B(stream3 ,41),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(stream2 ,29),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(stream2 ,29),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(mop_class ,6),I(24,00,00,00),B(stream2 ,20),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(stream2 ,29),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(stream3 ,47),I(23,00,00,00),B(stream3 ,39),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(stream2 ,29),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(stream2 ,29),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(mop_class ,81),I(24,00,00,00),B(stream2 ,20),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(stream2 ,29),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(stream3 ,47),I(23,00,00,00),B(stream3 ,38),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(stream2 ,29),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(stream2 ,29),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(integer ,2),I(24,00,00,00),B(stream2 ,20),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(stream2 ,29),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(stream3 ,47),I(23,00,00,00),B(stream3 ,37),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(stream2 ,29),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(stream2 ,29),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(float ,6),I(24,00,00,00),B(stream2 ,20),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(stream2 ,29),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(stream3 ,47),I(23,00,00,00),B(stream3 ,35),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(stream2 ,29),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(stream2 ,29),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(mop_class ,28),I(24,00,00,00),B(stream2 ,20),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(stream2 ,29),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(stream3 ,47),I(23,00,00,00),B(stream3 ,33),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(stream2 ,29),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(stream2 ,29),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(vector ,8),I(24,00,00,00),B(stream2 ,20),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(stream2 ,29),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(stream3 ,47),I(23,00,00,00),B(stream3 ,31),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(stream2 ,29),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(stream2 ,29),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(mop_class ,72),I(24,00,00,00),B(stream2 ,20),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(stream2 ,29),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(stream3 ,47),I(23,00,00,00),B(stream3 ,26),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(stream2 ,29),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(stream2 ,29),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(character ,7),I(24,00,00,00),B(stream2 ,20),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(stream2 ,29),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(stream3 ,47),I(23,00,00,00),B(stream3 ,24),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(stream2 ,29),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(stream2 ,29),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(string ,13),I(24,00,00,00),B(stream2 ,20),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(stream2 ,29),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(stream3 ,47),I(23,00,00,00),B(stream3 ,23),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(stream2 ,29),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(stream2 ,29),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(stream2 ,5),I(24,00,00,00),B(stream2 ,20),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(stream2 ,29),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(stream3 ,47),I(23,00,00,00),B(stream3 ,22),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(stream2 ,29),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(stream2 ,29),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(socket ,2),I(24,00,00,00),B(stream2 ,20),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(stream2 ,29),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(stream3 ,47),I(23,00,00,00),B(stream3 ,17),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(stream2 ,29),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(stream2 ,29),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(socket ,7),I(24,00,00,00),B(stream2 ,20),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(stream2 ,29),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(stream3 ,47),I(23,00,00,00),B(stream3 ,15),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(stream2 ,29),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(stream2 ,2),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(vector ,8),I(24,00,00,00),B(stream2 ,20),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(stream2 ,2),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(stream3 ,48),I(23,00,00,00),B(stream3 ,13),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(stream2 ,2),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(stream2 ,2),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(mop_class ,72),I(24,00,00,00),B(stream2 ,20),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(stream2 ,2),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(stream3 ,48),I(23,00,00,00),B(stream3 ,8),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(stream2 ,2),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(stream2 ,2),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(character ,7),I(24,00,00,00),B(stream2 ,20),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(stream2 ,2),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(stream3 ,48),I(23,00,00,00),B(stream3 ,6),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(stream2 ,2),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(stream2 ,2),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(mop_class ,6),I(24,00,00,00),B(stream2 ,20),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(stream2 ,2),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(stream3 ,48),I(23,00,00,00),B(stream3 ,5),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(stream2 ,2),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(stream2 ,2),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(string ,13),I(24,00,00,00),B(stream2 ,20),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(stream2 ,2),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(stream3 ,48),I(23,00,00,00),B(stream3 ,4),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(stream2 ,2),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(stream2 ,2),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(mop_class ,75),I(24,00,00,00),B(stream2 ,20),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(stream2 ,2),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(stream3 ,48),I(23,00,00,00),B(stream3 ,3),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(stream2 ,2),I(1c,24,00,00),B(mop_meth ,5),I(3d,02,84,45),I(84,00,00,00)};

  /* Byte-vector with size: 58 is_init: 1 index: 0 binding: initialize-stream3 */
  static const void *G0010059[] = {I(87,25,00,00),B(stream3 ,1),I(24,00,00,00),B(stream ,1),I(3e,0b,24,00),B(stream ,0),I(3c,00,21,01),I(24,00,00,00),B(stream1 ,1),I(3e,0b,24,00),B(stream1 ,0),I(3c,00,21,01),I(24,00,00,00),B(float ,1),I(3e,0b,24,00),B(float ,0),I(3c,00,21,01),I(24,00,00,00),B(vector ,1),I(3e,0b,24,00),B(vector ,0),I(3c,00,21,01),I(24,00,00,00),B(string ,1),I(3e,0b,24,00),B(string ,0),I(3c,00,21,01),I(24,00,00,00),B(character ,1),I(3e,0b,24,00),B(character ,0),I(3c,00,21,01),I(24,00,00,00),B(list ,1),I(3e,0b,24,00),B(list ,0),I(3c,00,21,01),I(24,00,00,00),B(collect ,1),I(3e,0b,24,00),B(collect ,0),I(3c,00,21,01),I(24,00,00,00),B(integer ,1),I(3e,0b,24,00),B(integer ,0),I(3c,00,21,01),I(24,00,00,00),B(telos ,1),I(3e,0b,24,00),B(telos ,0),I(3c,00,21,01),I(23,00,00,00),B(stream3 ,50),I(23,00,00,00),B(stream3 ,49),I(3b,00,3d,00),I(00,ac,00,00)};


  /* Initializations */
  eul_intern_symbol(sym_9988,"anonymous");
  eul_allocate_bytevector( G009987,G009986);
  eul_allocate_bytevector( G009990,G009989);
  eul_allocate_bytevector( G009992,G009991);
  eul_allocate_bytevector( G009994,G009993);
  object_class(str_9997) = eul_static_string_class;
  eul_allocate_bytevector( G009996,G009995);
  eul_allocate_bytevector( G009999,G009998);
  object_class(str_10002) = eul_static_string_class;
  object_class(str_10003) = eul_static_string_class;
  object_class(str_10004) = eul_static_string_class;
  eul_allocate_bytevector( G0010001,G0010000);
  object_class(str_10007) = eul_static_string_class;
  eul_allocate_bytevector( G0010006,G0010005);
  object_class(str_10010) = eul_static_string_class;
  eul_allocate_bytevector( G0010009,G0010008);
  eul_intern_symbol(sym_10013,"r");
  object_class(str_10014) = eul_static_string_class;
  object_class(str_10015) = eul_static_string_class;
  object_class(str_10016) = eul_static_string_class;
  eul_allocate_bytevector( G0010012,G0010011);
  eul_allocate_bytevector( G0010018,G0010017);
  eul_allocate_bytevector( G0010020,G0010019);
  object_class(str_10023) = eul_static_string_class;
  eul_allocate_bytevector( G0010022,G0010021);
  eul_allocate_bytevector( G0010025,G0010024);
  object_class(str_10028) = eul_static_string_class;
  object_class(str_10029) = eul_static_string_class;
  object_class(str_10030) = eul_static_string_class;
  eul_allocate_bytevector( G0010027,G0010026);
  object_class(str_10033) = eul_static_string_class;
  eul_allocate_bytevector( G0010032,G0010031);
  object_class(str_10036) = eul_static_string_class;
  eul_allocate_bytevector( G0010035,G0010034);
  object_class(str_10039) = eul_static_string_class;
  eul_allocate_bytevector( G0010038,G0010037);
  eul_allocate_bytevector( G0010041,G0010040);
  eul_allocate_bytevector( G0010043,G0010042);
  object_class(str_10046) = eul_static_string_class;
  eul_allocate_bytevector( G0010045,G0010044);
  object_class(str_10049) = eul_static_string_class;
  object_class(str_10050) = eul_static_string_class;
  eul_allocate_bytevector( G0010048,G0010047);
  eul_allocate_bytevector( G0010052,G0010051);
  eul_allocate_bytevector( G0010054,G0010053);
  eul_intern_symbol(sym_10057,"(method generic-write)");
  eul_intern_symbol(sym_10058,"(method generic-prin)");
  eul_allocate_bytevector( G0010056,G0010055);
  eul_intern_symbol(sym_10061,"top-level");
  eul_allocate_bytevector( G0010060,G0010059);

  /* Set local bindings */
  stream3_bindings[ 2] = sym_9988;
  stream3_bindings[ 3] = G009987;
  stream3_bindings[ 4] = G009990;
  stream3_bindings[ 5] = G009992;
  stream3_bindings[ 6] = G009994;
  stream3_bindings[ 7] = str_9997;
  stream3_bindings[ 8] = G009996;
  stream3_bindings[ 9] = G009999;
  stream3_bindings[ 10] = str_10002;
  stream3_bindings[ 11] = str_10003;
  stream3_bindings[ 12] = str_10004;
  stream3_bindings[ 13] = G0010001;
  stream3_bindings[ 14] = str_10007;
  stream3_bindings[ 15] = G0010006;
  stream3_bindings[ 16] = str_10010;
  stream3_bindings[ 17] = G0010009;
  stream3_bindings[ 18] = sym_10013;
  stream3_bindings[ 19] = str_10014;
  stream3_bindings[ 20] = str_10015;
  stream3_bindings[ 21] = str_10016;
  stream3_bindings[ 22] = G0010012;
  stream3_bindings[ 23] = G0010018;
  stream3_bindings[ 24] = G0010020;
  stream3_bindings[ 25] = str_10023;
  stream3_bindings[ 26] = G0010022;
  stream3_bindings[ 27] = G0010025;
  stream3_bindings[ 28] = str_10028;
  stream3_bindings[ 29] = str_10029;
  stream3_bindings[ 30] = str_10030;
  stream3_bindings[ 31] = G0010027;
  stream3_bindings[ 32] = str_10033;
  stream3_bindings[ 33] = G0010032;
  stream3_bindings[ 34] = str_10036;
  stream3_bindings[ 35] = G0010035;
  stream3_bindings[ 36] = str_10039;
  stream3_bindings[ 37] = G0010038;
  stream3_bindings[ 38] = G0010041;
  stream3_bindings[ 39] = G0010043;
  stream3_bindings[ 40] = str_10046;
  stream3_bindings[ 41] = G0010045;
  stream3_bindings[ 42] = str_10049;
  stream3_bindings[ 43] = str_10050;
  stream3_bindings[ 44] = G0010048;
  stream3_bindings[ 45] = G0010052;
  stream3_bindings[ 46] = G0010054;
  stream3_bindings[ 47] = sym_10057;
  stream3_bindings[ 48] = sym_10058;
  stream3_bindings[ 49] = G0010056;
  stream3_bindings[ 1] = eul_nil;
  stream3_bindings[ 50] = sym_10061;
  eul_allocate_lambda( stream3_bindings[0], "initialize-stream3", 0, G0010060);

  }
}


/* eof */
