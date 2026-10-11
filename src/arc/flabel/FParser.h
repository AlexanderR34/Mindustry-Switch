#ifndef HEADER_arc_flabel_FParser
#define HEADER_arc_flabel_FParser

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_flabel_FParser {
	java_lang_Object parent;
} arc_flabel_FParser;

extern Class class_arc_flabel_FParser;

extern jobject SF_arc_flabel_FParser_resetReplacement;
extern jobject SF_arc_flabel_FParser_parameterParser;

#define VTABLE_arc_flabel_FParser_hashCode_R_int 0
typedef jint (*func_arc_flabel_FParser_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FParser_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_flabel_FParser_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_flabel_FParser_clone_R_java_lang_Object 2
typedef jobject (*func_arc_flabel_FParser_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FParser_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_flabel_FParser_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FParser_toString_R_java_lang_String 4
typedef jobject (*func_arc_flabel_FParser_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FParser_finalize 5
typedef void (*func_arc_flabel_FParser_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FParser_notify 6
typedef void (*func_arc_flabel_FParser_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FParser_notifyAll 7
typedef void (*func_arc_flabel_FParser_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FParser_wait 8
typedef void (*func_arc_flabel_FParser_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FParser_wait_long 9
typedef void (*func_arc_flabel_FParser_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_flabel_FParser_wait_long_int 10
typedef void (*func_arc_flabel_FParser_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_arc_flabel_FParser(jobject object, jint mark, jint depth);
void clinit_arc_flabel_FParser(jcontext ctx);
void init_arc_flabel_FParser(jcontext ctx, jobject self);
void SM_arc_flabel_FParser_parseTokens_arc_flabel_FLabel(jcontext ctx, jobject param0);
void SM_arc_flabel_FParser_baseParse_arc_flabel_FLabel_arc_flabel_FParser$TokenHandler(jcontext ctx, jobject param0, jobject param1);
void SM_arc_flabel_FParser_parseReplacements_arc_flabel_FLabel(jcontext ctx, jobject param0);
void SM_arc_flabel_FParser_parseRegularTokens_arc_flabel_FLabel(jcontext ctx, jobject param0);
void SM_arc_flabel_FParser_parseAllTokens_arc_flabel_FLabel_boolean_arc_func_Intc2(jcontext ctx, jobject param0, jbool param1, jobject param2);
void SM_arc_flabel_FParser_stripTokens_arc_flabel_FLabel(jcontext ctx, jobject param0);
jobject SM_arc_flabel_FParser_getResetReplacement_R_java_lang_String(jcontext ctx);
jobject SM_arc_flabel_FParser_lambda$getResetReplacement$0_java_lang_String_R_java_lang_String(jcontext ctx, jobject param0);
void SM_arc_flabel_FParser_lambda$stripTokens$1_int_int(jcontext ctx, jint param0, jint param1);
jobject SM_arc_flabel_FParser_lambda$stripTokens$0_java_lang_String_int_R_java_lang_String(jcontext ctx, jobject param0, jint param1);
jobject SM_arc_flabel_FParser_lambda$parseRegularTokens$0_arc_flabel_FLabel_java_lang_String_int_R_java_lang_String(jcontext ctx, jobject param0, jobject param1, jint param2);
jobject SM_arc_flabel_FParser_lambda$parseReplacements$0_arc_flabel_FLabel_java_lang_String_int_R_java_lang_String(jcontext ctx, jobject param0, jobject param1, jint param2);
void SM_arc_flabel_FParser_lambda$baseParse$0_java_lang_StringBuilder_arc_flabel_FParser$TokenHandler_Array1_int_java_lang_StringBuilder_Array1_int_int_int(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jint param5, jint param6);

#ifdef __cplusplus
}
#endif

#endif
