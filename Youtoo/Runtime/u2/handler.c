/** ----------------------------------------------------------------------- **
 **                 Generated by EuLisp System 'youtoo'
 ** ----------------------------------------------------------------------- **
 **  Title: C source file of EuLisp module handler
 **  Copyright: See file handler.em
 ** ----------------------------------------------------------------------- **/

#include "eulisp.h"


/* Imported modules */
extern void initialize_module_telos();
extern void initialize_module_callback();
extern void initialize_module_convert();
extern void initialize_module_convert1();
extern void initialize_module_fpi();
extern void initialize_module_float();
extern void initialize_module_string();
extern void initialize_module_collect();
extern LispRef convert1_bindings[];
extern LispRef convert_bindings[];
extern LispRef callback_bindings[];
extern LispRef telos_bindings[];
extern LispRef string_bindings[];
extern LispRef float_bindings[];
extern LispRef collect_bindings[];
extern LispRef fpi_bindings[];
extern LispRef mop_meth_bindings[];
extern LispRef boot_bindings[];
extern LispRef mop_gf_bindings[];
extern LispRef boot1_bindings[];
extern LispRef mop_class_bindings[];

/* Module bindings with size 83 */
LispRef handler_bindings[83];

/* Foreign functions */
static LispRef ff_stub_eul_fpi_as_eul_fpi_ref10070 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G0010170, res;

  POPVAL1(G0010170);
  FF_RES_CONVERT6(res,eul_fpi_as_eul_fpi_ref(FF_ARG_CONVERT8(G0010170)));
  return res;
}

static LispRef ff_stub_eul_fpi_ref_as_c_int10071 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G0010171, res;

  POPVAL1(G0010171);
  FF_RES_CONVERT0(res,eul_fpi_ref_as_c_int(FF_ARG_CONVERT8(G0010171)));
  return res;
}

static LispRef ff_stub_eul_c_vector_ref10072 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G0010172, G0010173, res;

  POPVAL1(G0010173);
  POPVAL1(G0010172);
  FF_RES_CONVERT0(res,eul_c_vector_ref(FF_ARG_CONVERT9(G0010172), FF_ARG_CONVERT0(G0010173)));
  return res;
}

static LispRef ff_stub_eul_c_vector_set10073 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G0010174, G0010175, G0010176, res;

  POPVAL1(G0010176);
  POPVAL1(G0010175);
  POPVAL1(G0010174);
  FF_RES_CONVERT0(res,eul_c_vector_set(FF_ARG_CONVERT9(G0010174), FF_ARG_CONVERT0(G0010175), FF_ARG_CONVERT0(G0010176)));
  return res;
}

static LispRef ff_stub_eul_double_as_eul_double_ref10074 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G0010177, res;

  POPVAL1(G0010177);
  FF_RES_CONVERT6(res,eul_double_as_eul_double_ref(FF_ARG_CONVERT8(G0010177)));
  return res;
}

static LispRef ff_stub_eul_double_ref_as_c_double10075 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G0010178, res;

  POPVAL1(G0010178);
  FF_RES_CONVERT2(res,eul_double_ref_as_c_double(FF_ARG_CONVERT8(G0010178)));
  return res;
}

static LispRef ff_stub_eul_c_vector_ref10076 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G0010179, G0010180, res;

  POPVAL1(G0010180);
  POPVAL1(G0010179);
  FF_RES_CONVERT2(res,eul_c_vector_ref(FF_ARG_CONVERT10(G0010179), FF_ARG_CONVERT0(G0010180)));
  return res;
}

static LispRef ff_stub_eul_c_vector_set10077 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G0010181, G0010182, G0010183, res;

  POPVAL1(G0010183);
  POPVAL1(G0010182);
  POPVAL1(G0010181);
  FF_RES_CONVERT2(res,eul_c_vector_set(FF_ARG_CONVERT10(G0010181), FF_ARG_CONVERT0(G0010182), FF_ARG_CONVERT2(G0010183)));
  return res;
}

static LispRef ff_stub_eul_string_as_eul_string_ref10078 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G0010184, res;

  POPVAL1(G0010184);
  FF_RES_CONVERT6(res,eul_string_as_eul_string_ref(FF_ARG_CONVERT8(G0010184)));
  return res;
}

static LispRef ff_stub_eul_string_ref_as_c_string10079 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G0010185, res;

  POPVAL1(G0010185);
  FF_RES_CONVERT3(res,eul_string_ref_as_c_string(FF_ARG_CONVERT8(G0010185)));
  return res;
}

static LispRef ff_stub_eul_c_vector_ref10080 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G0010186, G0010187, res;

  POPVAL1(G0010187);
  POPVAL1(G0010186);
  FF_RES_CONVERT3(res,eul_c_vector_ref(FF_ARG_CONVERT11(G0010186), FF_ARG_CONVERT0(G0010187)));
  return res;
}

static LispRef ff_stub_eul_c_vector_set10081 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G0010188, G0010189, G0010190, res;

  POPVAL1(G0010190);
  POPVAL1(G0010189);
  POPVAL1(G0010188);
  FF_RES_CONVERT3(res,eul_c_vector_set(FF_ARG_CONVERT11(G0010188), FF_ARG_CONVERT0(G0010189), FF_ARG_CONVERT3(G0010190)));
  return res;
}


/* Initialize module only once */
static int is_initialized = 0;

/* Initialize module handler */
void initialize_module_handler()
{
  if (is_initialized) return;
  initialize_module_telos();
  initialize_module_callback();
  initialize_module_convert();
  initialize_module_convert1();
  initialize_module_fpi();
  initialize_module_float();
  initialize_module_string();
  initialize_module_collect();
  eul_fast_table_set(eul_modules,"handler",(LispRef) handler_bindings);
  is_initialized = 1;
  {
  /* Declarations */
  LispRef sym_10169, G0010168, G0010166, sym_10164, sym_10163, sym_10162, sym_10159, sym_10158, sym_10157, sym_10156, sym_10155, sym_10152, sym_10151, sym_10150, sym_10149, sym_10148, sym_10147, sym_10146, sym_10144, sym_10142, sym_10141, sym_10140, sym_10139, sym_10138, sym_10137, sym_10136, sym_10135, key_10133, key_10132, key_10131, sym_10130, key_10129, key_10128, sym_10127, key_10126, G0010125, G0010123, G0010121, G0010119, G0010117, G0010115, G0010113, G0010111, G0010109, G0010107, G0010105, G0010103, G0010101, G0010099, G0010097, G0010095, G0010093, G0010091, G0010089, G0010087, G0010085, G0010083;

  /* Code vector and literal definitions */
  /* Byte-vector with size: 3 is_init: 0 index: 23 binding: (method-(setter element)) */
  static const void *G0010082[] = {I(43,03,41,00),B(handler ,22),I(45,03,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 24 binding: (method-element) */
  static const void *G0010084[] = {I(ab,41,00,00),B(handler ,21),I(45,02,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 25 binding: (method-(converter <string>)) */
  static const void *G0010086[] = {I(aa,41,00,00),B(handler ,20),I(45,01,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 26 binding: (method-(converter <string*>)) */
  static const void *G0010088[] = {I(aa,41,00,00),B(handler ,19),I(45,01,00,00)};

  /* Byte-vector with size: 1 is_init: 0 index: 27 binding: (method-string*?) */
  static const void *G0010090[] = {I(aa,1b,45,01)};

  /* Byte-vector with size: 1 is_init: 0 index: 28 binding: (method-string*?) */
  static const void *G0010092[] = {I(aa,86,45,01)};

  /* Byte-vector with size: 3 is_init: 0 index: 29 binding: (method-(setter element)) */
  static const void *G0010094[] = {I(43,03,41,00),B(handler ,18),I(45,03,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 30 binding: (method-element) */
  static const void *G0010096[] = {I(ab,41,00,00),B(handler ,17),I(45,02,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 31 binding: (method-(converter <double-float>)) */
  static const void *G0010098[] = {I(aa,41,00,00),B(handler ,16),I(45,01,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 32 binding: (method-(converter <double*>)) */
  static const void *G0010100[] = {I(aa,41,00,00),B(handler ,15),I(45,01,00,00)};

  /* Byte-vector with size: 1 is_init: 0 index: 33 binding: (method-double*?) */
  static const void *G0010102[] = {I(aa,1b,45,01)};

  /* Byte-vector with size: 1 is_init: 0 index: 34 binding: (method-double*?) */
  static const void *G0010104[] = {I(aa,86,45,01)};

  /* Byte-vector with size: 3 is_init: 0 index: 35 binding: (method-(setter element)) */
  static const void *G0010106[] = {I(43,03,41,00),B(handler ,14),I(45,03,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 36 binding: (method-element) */
  static const void *G0010108[] = {I(ab,41,00,00),B(handler ,13),I(45,02,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 37 binding: (method-(converter <fpi>)) */
  static const void *G0010110[] = {I(aa,41,00,00),B(handler ,12),I(45,01,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 38 binding: (method-(converter <int*>)) */
  static const void *G0010112[] = {I(aa,41,00,00),B(handler ,11),I(45,01,00,00)};

  /* Byte-vector with size: 1 is_init: 0 index: 39 binding: (method-int*?) */
  static const void *G0010114[] = {I(aa,1b,45,01)};

  /* Byte-vector with size: 1 is_init: 0 index: 40 binding: (method-int*?) */
  static const void *G0010116[] = {I(aa,86,45,01)};

  /* Byte-vector with size: 1 is_init: 0 index: 41 binding: (method-handler?) */
  static const void *G0010118[] = {I(aa,1b,45,01)};

  /* Byte-vector with size: 1 is_init: 0 index: 42 binding: (method-handler?) */
  static const void *G0010120[] = {I(aa,86,45,01)};

  /* Byte-vector with size: 4 is_init: 0 index: 43 binding: (setter-handle) */
  static const void *G0010122[] = {I(ab,1c,82,1d),I(24,00,00,00),B(handler ,2),I(09,45,02,00)};

  eul_allocate_static_cons(cons_10134, NULL, NULL);
  eul_allocate_static_cons(cons_10145, NULL, NULL);
  eul_allocate_static_cons(cons_10143, NULL, eul_as_static(cons_10145));
  eul_allocate_static_cons(cons_10154, NULL, NULL);
  eul_allocate_static_cons(cons_10153, NULL, eul_as_static(cons_10154));
  eul_allocate_static_cons(cons_10161, NULL, NULL);
  eul_allocate_static_cons(cons_10160, NULL, eul_as_static(cons_10161));
  /* Byte-vector with size: 917 is_init: 0 index: 80 binding: top-level */
  static const void *G0010124[] = {I(a9,24,00,00),B(mop_class ,22),I(24,00,00,00),B(boot1 ,26),I(3c,01,23,00),B(handler ,44),I(23,00,00,00),B(handler ,45),I(23,00,00,00),B(handler ,46),I(23,00,00,00),B(handler ,47),I(24,00,00,00),B(boot1 ,26),I(3c,04,1b,24),B(boot1 ,26),I(3c,01,24,00),B(mop_class ,81),I(23,00,00,00),B(handler ,44),I(23,00,00,00),B(handler ,48),I(23,00,00,00),B(handler ,49),I(1f,06,23,00),B(handler ,50),I(1f,06,23,00),B(handler ,51),I(23,00,00,00),B(handler ,52),I(24,00,00,00),B(mop_gf ,2),I(3c,09,1b,89),B(handler ,2),I(2a,28,28,1b),I(89,00,00,00),B(handler ,4),I(2a,28,29,1b),I(89,00,00,00),B(handler ,5),I(2a,28,2a,1b),I(89,00,00,00),B(handler ,6),I(2a,83,24,00),B(mop_class ,22),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(handler ,53),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,63),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(handler ,8),I(2a,83,24,00),B(mop_class ,22),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(handler ,54),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,63),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(handler ,9),I(2a,83,24,00),B(mop_class ,22),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(handler ,55),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,63),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(handler ,10),I(2a,83,24,00),B(mop_class ,22),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(handler ,56),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,63),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(handler ,7),I(2a,24,00,00),B(boot1 ,42),I(24,00,00,00),B(boot1 ,42),I(3c,01,24,00),B(handler ,3),I(23,00,00,00),B(handler ,57),I(23,00,00,00),B(handler ,43),I(3b,02,1d,3c),I(02,2a,24,00),B(handler ,8),I(8a,03,02,83),I(24,00,00,00),B(mop_class ,22),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(handler ,8),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(handler ,58),I(23,00,00,00),B(handler ,42),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(handler ,8),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(handler ,8),I(8a,03,02,83),I(24,00,00,00),B(handler ,2),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(handler ,8),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(handler ,58),I(23,00,00,00),B(handler ,41),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(handler ,8),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(handler ,8),I(2a,24,00,00),B(handler ,2),I(2a,24,00,00),B(handler ,4),I(24,00,00,00),B(mop_class ,81),I(05,2a,24,00),B(handler ,2),I(24,00,00,00),B(boot1 ,26),I(3c,01,24,00),B(boot1 ,26),I(3c,00,23,00),B(handler ,44),I(23,00,00,00),B(handler ,59),I(23,00,00,00),B(handler ,49),I(1f,04,23,00),B(handler ,50),I(1f,05,23,00),B(handler ,51),I(86,24,00,00),B(boot1 ,26),I(3c,08,24,00),B(handler ,4),I(1c,24,00,00),B(mop_gf ,12),I(3c,02,2a,24),B(handler ,9),I(8a,03,02,83),I(24,00,00,00),B(mop_class ,22),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(handler ,9),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(handler ,60),I(23,00,00,00),B(handler ,40),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(handler ,9),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(handler ,9),I(8a,03,02,83),I(24,00,00,00),B(handler ,4),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(handler ,9),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(handler ,60),I(23,00,00,00),B(handler ,39),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(handler ,9),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(handler ,9),I(2a,24,00,00),B(handler ,4),I(2a,24,00,00),B(mop_class ,13),I(24,00,00,00),B(boot1 ,42),I(3c,01,83,24),B(mop_class ,22),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(handler ,63),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,63),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,24,00),B(handler ,4),I(1c,1f,06,3c),I(02,2a,24,00),B(handler ,4),I(24,00,00,00),B(mop_class ,13),I(3c,01,2a,24),B(handler ,4),I(24,00,00,00),B(mop_class ,13),I(3c,01,24,00),B(handler ,4),I(24,00,00,00),B(mop_class ,13),I(3c,01,1b,8a),I(03,02,83,24),B(fpi ,6),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(handler ,4),I(24,00,00,00),B(mop_class ,13),I(3c,01,1b,8a),I(04,02,1d,1c),I(24,00,00,00),B(boot ,8),I(3c,02,1f,05),I(1f,05,23,00),B(handler ,64),I(23,00,00,00),B(handler ,38),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,1f,08),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(fpi ,6),I(24,00,00,00),B(mop_class ,13),I(3c,01,24,00),B(fpi ,6),I(24,00,00,00),B(mop_class ,13),I(3c,01,1b,8a),I(03,02,83,24),B(handler ,4),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(fpi ,6),I(24,00,00,00),B(mop_class ,13),I(3c,01,1b,8a),I(04,02,1d,1c),I(24,00,00,00),B(boot ,8),I(3c,02,1f,05),I(1f,05,23,00),B(handler ,65),I(23,00,00,00),B(handler ,37),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,1f,08),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,20),I(8a,03,02,84),I(24,00,00,00),B(handler ,4),I(24,00,00,00),B(fpi ,6),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(collect ,20),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(handler ,66),I(23,00,00,00),B(handler ,36),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(collect ,20),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,20),I(24,00,00,00),B(boot1 ,42),I(3c,01,24,00),B(collect ,20),I(24,00,00,00),B(boot1 ,42),I(3c,01,1b,8a),I(03,02,8a,03),I(24,00,00,00),B(handler ,4),I(24,00,00,00),B(fpi ,6),I(86,24,00,00),B(boot1 ,40),I(3c,04,24,00),B(boot1 ,26),I(3c,00,24,00),B(collect ,20),I(24,00,00,00),B(boot1 ,42),I(3c,01,1b,8a),I(04,02,1d,1c),I(24,00,00,00),B(boot ,8),I(3c,02,1f,05),I(1f,05,23,00),B(handler ,67),I(23,00,00,00),B(handler ,35),I(3b,03,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,1f,08),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(handler ,5),I(24,00,00,00),B(mop_class ,81),I(05,2a,24,00),B(handler ,2),I(24,00,00,00),B(boot1 ,26),I(3c,01,24,00),B(boot1 ,26),I(3c,00,23,00),B(handler ,44),I(23,00,00,00),B(handler ,68),I(23,00,00,00),B(handler ,49),I(1f,04,23,00),B(handler ,50),I(1f,05,23,00),B(handler ,51),I(86,24,00,00),B(boot1 ,26),I(3c,08,24,00),B(handler ,5),I(1c,24,00,00),B(mop_gf ,12),I(3c,02,2a,24),B(handler ,10),I(8a,03,02,83),I(24,00,00,00),B(mop_class ,22),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(handler ,10),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(handler ,69),I(23,00,00,00),B(handler ,34),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(handler ,10),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(handler ,10),I(8a,03,02,83),I(24,00,00,00),B(handler ,5),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(handler ,10),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(handler ,69),I(23,00,00,00),B(handler ,33),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(handler ,10),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(handler ,10),I(2a,24,00,00),B(handler ,5),I(2a,24,00,00),B(mop_class ,13),I(24,00,00,00),B(boot1 ,42),I(3c,01,83,24),B(mop_class ,22),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(handler ,71),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,63),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,24,00),B(handler ,5),I(1c,1f,06,3c),I(02,2a,24,00),B(handler ,5),I(24,00,00,00),B(mop_class ,13),I(3c,01,2a,24),B(handler ,5),I(24,00,00,00),B(mop_class ,13),I(3c,01,24,00),B(handler ,5),I(24,00,00,00),B(mop_class ,13),I(3c,01,1b,8a),I(03,02,83,24),B(float ,8),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(handler ,5),I(24,00,00,00),B(mop_class ,13),I(3c,01,1b,8a),I(04,02,1d,1c),I(24,00,00,00),B(boot ,8),I(3c,02,1f,05),I(1f,05,23,00),B(handler ,72),I(23,00,00,00),B(handler ,32),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,1f,08),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(float ,8),I(24,00,00,00),B(mop_class ,13),I(3c,01,24,00),B(float ,8),I(24,00,00,00),B(mop_class ,13),I(3c,01,1b,8a),I(03,02,83,24),B(handler ,5),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(float ,8),I(24,00,00,00),B(mop_class ,13),I(3c,01,1b,8a),I(04,02,1d,1c),I(24,00,00,00),B(boot ,8),I(3c,02,1f,05),I(1f,05,23,00),B(handler ,73),I(23,00,00,00),B(handler ,31),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,1f,08),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,20),I(8a,03,02,84),I(24,00,00,00),B(handler ,5),I(24,00,00,00),B(fpi ,6),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(collect ,20),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(handler ,66),I(23,00,00,00),B(handler ,30),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(collect ,20),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,20),I(24,00,00,00),B(boot1 ,42),I(3c,01,24,00),B(collect ,20),I(24,00,00,00),B(boot1 ,42),I(3c,01,1b,8a),I(03,02,8a,03),I(24,00,00,00),B(handler ,5),I(24,00,00,00),B(fpi ,6),I(86,24,00,00),B(boot1 ,40),I(3c,04,24,00),B(boot1 ,26),I(3c,00,24,00),B(collect ,20),I(24,00,00,00),B(boot1 ,42),I(3c,01,1b,8a),I(04,02,1d,1c),I(24,00,00,00),B(boot ,8),I(3c,02,1f,05),I(1f,05,23,00),B(handler ,67),I(23,00,00,00),B(handler ,29),I(3b,03,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,1f,08),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(handler ,6),I(24,00,00,00),B(mop_class ,81),I(05,2a,24,00),B(handler ,2),I(24,00,00,00),B(boot1 ,26),I(3c,01,24,00),B(boot1 ,26),I(3c,00,23,00),B(handler ,44),I(23,00,00,00),B(handler ,74),I(23,00,00,00),B(handler ,49),I(1f,04,23,00),B(handler ,50),I(1f,05,23,00),B(handler ,51),I(86,24,00,00),B(boot1 ,26),I(3c,08,24,00),B(handler ,6),I(1c,24,00,00),B(mop_gf ,12),I(3c,02,2a,24),B(handler ,7),I(8a,03,02,83),I(24,00,00,00),B(mop_class ,22),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(handler ,7),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(handler ,75),I(23,00,00,00),B(handler ,28),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(handler ,7),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(handler ,7),I(8a,03,02,83),I(24,00,00,00),B(handler ,6),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(handler ,7),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(handler ,75),I(23,00,00,00),B(handler ,27),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(handler ,7),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(handler ,7),I(2a,24,00,00),B(handler ,6),I(2a,24,00,00),B(mop_class ,13),I(24,00,00,00),B(boot1 ,42),I(3c,01,83,24),B(mop_class ,22),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(handler ,77),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,63),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,24,00),B(handler ,6),I(1c,1f,06,3c),I(02,2a,24,00),B(handler ,6),I(24,00,00,00),B(mop_class ,13),I(3c,01,2a,24),B(handler ,6),I(24,00,00,00),B(mop_class ,13),I(3c,01,24,00),B(handler ,6),I(24,00,00,00),B(mop_class ,13),I(3c,01,1b,8a),I(03,02,83,24),B(string ,13),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(handler ,6),I(24,00,00,00),B(mop_class ,13),I(3c,01,1b,8a),I(04,02,1d,1c),I(24,00,00,00),B(boot ,8),I(3c,02,1f,05),I(1f,05,23,00),B(handler ,78),I(23,00,00,00),B(handler ,26),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,1f,08),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(string ,13),I(24,00,00,00),B(mop_class ,13),I(3c,01,24,00),B(string ,13),I(24,00,00,00),B(mop_class ,13),I(3c,01,1b,8a),I(03,02,83,24),B(handler ,6),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(string ,13),I(24,00,00,00),B(mop_class ,13),I(3c,01,1b,8a),I(04,02,1d,1c),I(24,00,00,00),B(boot ,8),I(3c,02,1f,05),I(1f,05,23,00),B(handler ,79),I(23,00,00,00),B(handler ,25),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,1f,08),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,20),I(8a,03,02,84),I(24,00,00,00),B(handler ,6),I(24,00,00,00),B(fpi ,6),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(collect ,20),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(handler ,66),I(23,00,00,00),B(handler ,24),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(collect ,20),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,20),I(24,00,00,00),B(boot1 ,42),I(3c,01,24,00),B(collect ,20),I(24,00,00,00),B(boot1 ,42),I(3c,01,1b,8a),I(03,02,8a,03),I(24,00,00,00),B(handler ,6),I(24,00,00,00),B(fpi ,6),I(86,24,00,00),B(boot1 ,40),I(3c,04,24,00),B(boot1 ,26),I(3c,00,24,00),B(collect ,20),I(24,00,00,00),B(boot1 ,42),I(3c,01,1b,8a),I(04,02,1d,1c),I(24,00,00,00),B(boot ,8),I(3c,02,1f,05),I(1f,05,23,00),B(handler ,67),I(23,00,00,00),B(handler ,23),I(3b,03,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,1f,08),I(1c,24,00,00),B(mop_meth ,5),I(3d,02,c3,45),I(c3,00,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 81 binding: handle */
  static const void *G0010165[] = {I(aa,82,24,00),B(handler ,2),I(08,45,00,00)};

  /* Byte-vector with size: 70 is_init: 1 index: 0 binding: initialize-handler */
  static const void *G0010167[] = {I(87,25,00,00),B(handler ,1),I(24,00,00,00),B(collect ,1),I(3e,0b,24,00),B(collect ,0),I(3c,00,21,01),I(24,00,00,00),B(string ,1),I(3e,0b,24,00),B(string ,0),I(3c,00,21,01),I(24,00,00,00),B(float ,1),I(3e,0b,24,00),B(float ,0),I(3c,00,21,01),I(24,00,00,00),B(fpi ,1),I(3e,0b,24,00),B(fpi ,0),I(3c,00,21,01),I(24,00,00,00),B(convert1 ,1),I(3e,0b,24,00),B(convert1 ,0),I(3c,00,21,01),I(24,00,00,00),B(convert ,1),I(3e,0b,24,00),B(convert ,0),I(3c,00,21,01),I(24,00,00,00),B(callback ,1),I(3e,0b,24,00),B(callback ,0),I(3c,00,21,01),I(24,00,00,00),B(telos ,1),I(3e,0b,24,00),B(telos ,0),I(3c,00,21,01),I(86,25,00,00),B(handler ,10),I(86,25,00,00),B(handler ,9),I(86,25,00,00),B(handler ,8),I(86,25,00,00),B(handler ,7),I(86,25,00,00),B(handler ,6),I(86,25,00,00),B(handler ,5),I(86,25,00,00),B(handler ,4),I(23,00,00,00),B(handler ,45),I(23,00,00,00),B(handler ,81),I(3b,01,25,00),B(handler ,3),I(86,25,00,00),B(handler ,2),I(23,00,00,00),B(handler ,82),I(23,00,00,00),B(handler ,80),I(3b,00,3d,00),I(00,ac,00,00)};


  /* Initializations */
  eul_allocate_bytevector( G0010083,G0010082);
  eul_allocate_bytevector( G0010085,G0010084);
  eul_allocate_bytevector( G0010087,G0010086);
  eul_allocate_bytevector( G0010089,G0010088);
  eul_allocate_bytevector( G0010091,G0010090);
  eul_allocate_bytevector( G0010093,G0010092);
  eul_allocate_bytevector( G0010095,G0010094);
  eul_allocate_bytevector( G0010097,G0010096);
  eul_allocate_bytevector( G0010099,G0010098);
  eul_allocate_bytevector( G0010101,G0010100);
  eul_allocate_bytevector( G0010103,G0010102);
  eul_allocate_bytevector( G0010105,G0010104);
  eul_allocate_bytevector( G0010107,G0010106);
  eul_allocate_bytevector( G0010109,G0010108);
  eul_allocate_bytevector( G0010111,G0010110);
  eul_allocate_bytevector( G0010113,G0010112);
  eul_allocate_bytevector( G0010115,G0010114);
  eul_allocate_bytevector( G0010117,G0010116);
  eul_allocate_bytevector( G0010119,G0010118);
  eul_allocate_bytevector( G0010121,G0010120);
  eul_allocate_bytevector( G0010123,G0010122);
  eul_intern_keyword(key_10126,"name");
  eul_intern_symbol(sym_10127,"handle");
  eul_intern_keyword(key_10128,"keyword");
  eul_intern_keyword(key_10129,"handle");
  eul_intern_symbol(sym_10130,"handler");
  eul_intern_keyword(key_10131,"direct-superclasses");
  eul_intern_keyword(key_10132,"direct-slots");
  eul_intern_keyword(key_10133,"direct-keywords");
  object_class(cons_10134) = eul_static_cons_class;
  eul_car(cons_10134) = key_10129;
  eul_cdr(cons_10134) = eul_nil;
  eul_intern_symbol(sym_10135,"handler?");
  eul_intern_symbol(sym_10136,"int*?");
  eul_intern_symbol(sym_10137,"double*?");
  eul_intern_symbol(sym_10138,"string*?");
  eul_intern_symbol(sym_10139,"(setter handle)");
  eul_intern_symbol(sym_10140,"(method handler?)");
  eul_intern_symbol(sym_10141,"int*");
  eul_intern_symbol(sym_10142,"(method int*?)");
  eul_intern_symbol(sym_10144,"converter");
  eul_intern_symbol(sym_10146,"<int*>");
  object_class(cons_10145) = eul_static_cons_class;
  eul_car(cons_10145) = sym_10146;
  eul_cdr(cons_10145) = eul_nil;
  object_class(cons_10143) = eul_static_cons_class;
  eul_car(cons_10143) = sym_10144;
  eul_intern_symbol(sym_10147,"(method (converter <int*>))");
  eul_intern_symbol(sym_10148,"(method (converter <fpi>))");
  eul_intern_symbol(sym_10149,"(method element)");
  eul_intern_symbol(sym_10150,"(method (setter element))");
  eul_intern_symbol(sym_10151,"double*");
  eul_intern_symbol(sym_10152,"(method double*?)");
  eul_intern_symbol(sym_10155,"<double*>");
  object_class(cons_10154) = eul_static_cons_class;
  eul_car(cons_10154) = sym_10155;
  eul_cdr(cons_10154) = eul_nil;
  object_class(cons_10153) = eul_static_cons_class;
  eul_car(cons_10153) = sym_10144;
  eul_intern_symbol(sym_10156,"(method (converter <double*>))");
  eul_intern_symbol(sym_10157,"(method (converter <double-float>))");
  eul_intern_symbol(sym_10158,"string*");
  eul_intern_symbol(sym_10159,"(method string*?)");
  eul_intern_symbol(sym_10162,"<string*>");
  object_class(cons_10161) = eul_static_cons_class;
  eul_car(cons_10161) = sym_10162;
  eul_cdr(cons_10161) = eul_nil;
  object_class(cons_10160) = eul_static_cons_class;
  eul_car(cons_10160) = sym_10144;
  eul_intern_symbol(sym_10163,"(method (converter <string*>))");
  eul_intern_symbol(sym_10164,"(method (converter <string>))");
  eul_allocate_bytevector( G0010125,G0010124);
  eul_allocate_bytevector( G0010166,G0010165);
  eul_intern_symbol(sym_10169,"top-level");
  eul_allocate_bytevector( G0010168,G0010167);

  /* Set local bindings */
  {
    int i;
    for (i = 2; i < 11; i++)
      handler_bindings[i] = eul_nil;
  }

  handler_bindings[ 11] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_fpi_as_eul_fpi_ref10070;
  handler_bindings[ 12] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_fpi_ref_as_c_int10071;
  handler_bindings[ 13] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_c_vector_ref10072;
  handler_bindings[ 14] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_c_vector_set10073;
  handler_bindings[ 15] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_double_as_eul_double_ref10074;
  handler_bindings[ 16] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_double_ref_as_c_double10075;
  handler_bindings[ 17] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_c_vector_ref10076;
  handler_bindings[ 18] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_c_vector_set10077;
  handler_bindings[ 19] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_string_as_eul_string_ref10078;
  handler_bindings[ 20] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_string_ref_as_c_string10079;
  handler_bindings[ 21] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_c_vector_ref10080;
  handler_bindings[ 22] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_c_vector_set10081;
  handler_bindings[ 23] = G0010083;
  handler_bindings[ 24] = G0010085;
  handler_bindings[ 25] = G0010087;
  handler_bindings[ 26] = G0010089;
  handler_bindings[ 27] = G0010091;
  handler_bindings[ 28] = G0010093;
  handler_bindings[ 29] = G0010095;
  handler_bindings[ 30] = G0010097;
  handler_bindings[ 31] = G0010099;
  handler_bindings[ 32] = G0010101;
  handler_bindings[ 33] = G0010103;
  handler_bindings[ 34] = G0010105;
  handler_bindings[ 35] = G0010107;
  handler_bindings[ 36] = G0010109;
  handler_bindings[ 37] = G0010111;
  handler_bindings[ 38] = G0010113;
  handler_bindings[ 39] = G0010115;
  handler_bindings[ 40] = G0010117;
  handler_bindings[ 41] = G0010119;
  handler_bindings[ 42] = G0010121;
  handler_bindings[ 43] = G0010123;
  handler_bindings[ 44] = key_10126;
  handler_bindings[ 45] = sym_10127;
  handler_bindings[ 46] = key_10128;
  handler_bindings[ 47] = key_10129;
  handler_bindings[ 48] = sym_10130;
  handler_bindings[ 49] = key_10131;
  handler_bindings[ 50] = key_10132;
  handler_bindings[ 51] = key_10133;
  handler_bindings[ 52] = cons_10134;
  handler_bindings[ 53] = sym_10135;
  handler_bindings[ 54] = sym_10136;
  handler_bindings[ 55] = sym_10137;
  handler_bindings[ 56] = sym_10138;
  handler_bindings[ 57] = sym_10139;
  handler_bindings[ 58] = sym_10140;
  handler_bindings[ 59] = sym_10141;
  handler_bindings[ 60] = sym_10142;
  handler_bindings[ 61] = sym_10144;
  handler_bindings[ 62] = sym_10146;
  handler_bindings[ 63] = cons_10143;
  handler_bindings[ 64] = sym_10147;
  handler_bindings[ 65] = sym_10148;
  handler_bindings[ 66] = sym_10149;
  handler_bindings[ 67] = sym_10150;
  handler_bindings[ 68] = sym_10151;
  handler_bindings[ 69] = sym_10152;
  handler_bindings[ 70] = sym_10155;
  handler_bindings[ 71] = cons_10153;
  handler_bindings[ 72] = sym_10156;
  handler_bindings[ 73] = sym_10157;
  handler_bindings[ 74] = sym_10158;
  handler_bindings[ 75] = sym_10159;
  handler_bindings[ 76] = sym_10162;
  handler_bindings[ 77] = cons_10160;
  handler_bindings[ 78] = sym_10163;
  handler_bindings[ 79] = sym_10164;
  handler_bindings[ 80] = G0010125;
  handler_bindings[ 81] = G0010166;
  handler_bindings[ 1] = eul_nil;
  handler_bindings[ 82] = sym_10169;
  eul_allocate_lambda( handler_bindings[0], "initialize-handler", 0, G0010168);

  }
}


/* eof */
