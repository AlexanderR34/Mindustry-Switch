#ifndef HEADER_mindustry_logic_LAssembler
#define HEADER_mindustry_logic_LAssembler

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_logic_LAssembler {
	java_lang_Object parent;
	jbool F_privileged;
	jref F_vars;
	jref F_instructions;
} mindustry_logic_LAssembler;

extern Class class_mindustry_logic_LAssembler;

extern jobject SF_mindustry_logic_LAssembler_customParsers;

#define VTABLE_mindustry_logic_LAssembler_hashCode_R_int 0
typedef jint (*func_mindustry_logic_LAssembler_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LAssembler_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_logic_LAssembler_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LAssembler_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_logic_LAssembler_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LAssembler_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_logic_LAssembler_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LAssembler_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_logic_LAssembler_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LAssembler_finalize 5
typedef void (*func_mindustry_logic_LAssembler_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LAssembler_notify 6
typedef void (*func_mindustry_logic_LAssembler_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LAssembler_notifyAll 7
typedef void (*func_mindustry_logic_LAssembler_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LAssembler_wait 8
typedef void (*func_mindustry_logic_LAssembler_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LAssembler_wait_long 9
typedef void (*func_mindustry_logic_LAssembler_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_logic_LAssembler_wait_long_int 10
typedef void (*func_mindustry_logic_LAssembler_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar 11
typedef jobject (*func_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LAssembler_parseDouble_java_lang_String_R_double 12
typedef jdouble (*func_mindustry_logic_LAssembler_parseDouble_java_lang_String_R_double)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LAssembler_isNumStart_char_R_boolean 13
typedef jbool (*func_mindustry_logic_LAssembler_isNumStart_char_R_boolean)(jcontext ctx, jobject self, jchar param0);
#define VTABLE_mindustry_logic_LAssembler_parseHexOrBin_boolean_java_lang_String_boolean_int_R_double 14
typedef jdouble (*func_mindustry_logic_LAssembler_parseHexOrBin_boolean_java_lang_String_boolean_int_R_double)(jcontext ctx, jobject self, jbool param0, jobject param1, jbool param2, jint param3);
#define VTABLE_mindustry_logic_LAssembler_parseColor_java_lang_String_R_double 15
typedef jdouble (*func_mindustry_logic_LAssembler_parseColor_java_lang_String_R_double)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LAssembler_parseNamedColor_java_lang_String_R_double 16
typedef jdouble (*func_mindustry_logic_LAssembler_parseNamedColor_java_lang_String_R_double)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LAssembler_putConst_java_lang_String_java_lang_Object_R_mindustry_logic_LVar 17
typedef jobject (*func_mindustry_logic_LAssembler_putConst_java_lang_String_java_lang_Object_R_mindustry_logic_LVar)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_logic_LAssembler_putVar_java_lang_String_R_mindustry_logic_LVar 18
typedef jobject (*func_mindustry_logic_LAssembler_putVar_java_lang_String_R_mindustry_logic_LVar)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LAssembler_getVar_java_lang_String_R_mindustry_logic_LVar 19
typedef jobject (*func_mindustry_logic_LAssembler_getVar_java_lang_String_R_mindustry_logic_LVar)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_logic_LAssembler(jobject object, jint mark, jint depth);
void clinit_mindustry_logic_LAssembler(jcontext ctx);
void init_mindustry_logic_LAssembler(jcontext ctx, jobject self);
jobject SM_mindustry_logic_LAssembler_assemble_java_lang_String_boolean_R_mindustry_logic_LAssembler(jcontext ctx, jobject param0, jbool param1);
jobject SM_mindustry_logic_LAssembler_write_arc_struct_Seq_R_java_lang_String(jcontext ctx, jobject param0);
jobject SM_mindustry_logic_LAssembler_read_java_lang_String_boolean_R_arc_struct_Seq(jcontext ctx, jobject param0, jbool param1);
jobject M_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar(jcontext ctx, jobject self, jobject param0);
jobject SM_mindustry_logic_LAssembler_unescape_java_lang_String_R_java_lang_String(jcontext ctx, jobject param0);
jdouble M_mindustry_logic_LAssembler_parseDouble_java_lang_String_R_double(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_logic_LAssembler_isNumStart_char_R_boolean(jcontext ctx, jobject self, jchar param0);
jdouble M_mindustry_logic_LAssembler_parseHexOrBin_boolean_java_lang_String_boolean_int_R_double(jcontext ctx, jobject self, jbool param0, jobject param1, jbool param2, jint param3);
jdouble M_mindustry_logic_LAssembler_parseColor_java_lang_String_R_double(jcontext ctx, jobject self, jobject param0);
jdouble M_mindustry_logic_LAssembler_parseNamedColor_java_lang_String_R_double(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_logic_LAssembler_putConst_java_lang_String_java_lang_Object_R_mindustry_logic_LVar(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_mindustry_logic_LAssembler_putVar_java_lang_String_R_mindustry_logic_LVar(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_logic_LAssembler_getVar_java_lang_String_R_mindustry_logic_LVar(jcontext ctx, jobject self, jobject param0);
jbool SM_mindustry_logic_LAssembler_lambda$assemble$1_mindustry_logic_LExecutor$LInstruction_R_boolean(jcontext ctx, jobject param0);
jobject SM_mindustry_logic_LAssembler_lambda$assemble$0_mindustry_logic_LAssembler_mindustry_logic_LStatement_R_mindustry_logic_LExecutor$LInstruction(jcontext ctx, jobject param0, jobject param1);

#ifdef __cplusplus
}
#endif

#endif
