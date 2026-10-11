#ifndef HEADER_rhino_regexp_RegExpImpl
#define HEADER_rhino_regexp_RegExpImpl

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "rhino/RegExpProxy.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_regexp_RegExpImpl {
	java_lang_Object parent;
	jref F_input;
	jbool F_multiline;
	jref F_parens;
	jref F_lastMatch;
	jref F_lastParen;
	jref F_leftContext;
	jref F_rightContext;
} rhino_regexp_RegExpImpl;

extern Class class_rhino_regexp_RegExpImpl;


#define VTABLE_rhino_regexp_RegExpImpl_hashCode_R_int 0
typedef jint (*func_rhino_regexp_RegExpImpl_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_regexp_RegExpImpl_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_regexp_RegExpImpl_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_regexp_RegExpImpl_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_regexp_RegExpImpl_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_regexp_RegExpImpl_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_regexp_RegExpImpl_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_regexp_RegExpImpl_toString_R_java_lang_String 4
typedef jobject (*func_rhino_regexp_RegExpImpl_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_regexp_RegExpImpl_finalize 5
typedef void (*func_rhino_regexp_RegExpImpl_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_regexp_RegExpImpl_notify 6
typedef void (*func_rhino_regexp_RegExpImpl_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_regexp_RegExpImpl_notifyAll 7
typedef void (*func_rhino_regexp_RegExpImpl_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_regexp_RegExpImpl_wait 8
typedef void (*func_rhino_regexp_RegExpImpl_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_regexp_RegExpImpl_wait_long 9
typedef void (*func_rhino_regexp_RegExpImpl_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_regexp_RegExpImpl_wait_long_int 10
typedef void (*func_rhino_regexp_RegExpImpl_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_rhino_regexp_RegExpImpl_isRegExp_rhino_Scriptable_R_boolean 11
typedef jbool (*func_rhino_regexp_RegExpImpl_isRegExp_rhino_Scriptable_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_regexp_RegExpImpl_compileRegExp_rhino_Context_java_lang_String_java_lang_String_R_java_lang_Object 12
typedef jobject (*func_rhino_regexp_RegExpImpl_compileRegExp_rhino_Context_java_lang_String_java_lang_String_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_rhino_regexp_RegExpImpl_wrapRegExp_rhino_Context_rhino_Scriptable_java_lang_Object_R_rhino_Scriptable 13
typedef jobject (*func_rhino_regexp_RegExpImpl_wrapRegExp_rhino_Context_rhino_Scriptable_java_lang_Object_R_rhino_Scriptable)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_rhino_regexp_RegExpImpl_action_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_int_R_java_lang_Object 14
typedef jobject (*func_rhino_regexp_RegExpImpl_action_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_int_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jint param4);
#define VTABLE_rhino_regexp_RegExpImpl_find_split_rhino_Context_rhino_Scriptable_java_lang_String_java_lang_String_rhino_Scriptable_Array1_int_Array1_int_Array1_boolean_Array2_java_lang_String_R_int 15
typedef jint (*func_rhino_regexp_RegExpImpl_find_split_rhino_Context_rhino_Scriptable_java_lang_String_java_lang_String_rhino_Scriptable_Array1_int_Array1_int_Array1_boolean_Array2_java_lang_String_R_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5, jobject param6, jobject param7, jobject param8);
#define VTABLE_rhino_regexp_RegExpImpl_js_split_rhino_Context_rhino_Scriptable_java_lang_String_Array1_java_lang_Object_R_java_lang_Object 16
typedef jobject (*func_rhino_regexp_RegExpImpl_js_split_rhino_Context_rhino_Scriptable_java_lang_String_Array1_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3);
#define VTABLE_rhino_regexp_RegExpImpl_getParenSubString_int_R_rhino_regexp_SubString 17
typedef jobject (*func_rhino_regexp_RegExpImpl_getParenSubString_int_R_rhino_regexp_SubString)(jcontext ctx, jobject self, jint param0);

void mark_rhino_regexp_RegExpImpl(jobject object, jint mark, jint depth);
void clinit_rhino_regexp_RegExpImpl(jcontext ctx);
void init_rhino_regexp_RegExpImpl(jcontext ctx, jobject self);
jbool M_rhino_regexp_RegExpImpl_isRegExp_rhino_Scriptable_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_regexp_RegExpImpl_compileRegExp_rhino_Context_java_lang_String_java_lang_String_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
jobject M_rhino_regexp_RegExpImpl_wrapRegExp_rhino_Context_rhino_Scriptable_java_lang_Object_R_rhino_Scriptable(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
jobject M_rhino_regexp_RegExpImpl_action_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_int_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jint param4);
jobject SM_rhino_regexp_RegExpImpl_createRegExp_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_int_boolean_R_rhino_regexp_NativeRegExp(jcontext ctx, jobject param0, jobject param1, jobject param2, jint param3, jbool param4);
jobject SM_rhino_regexp_RegExpImpl_matchOrReplace_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_rhino_regexp_RegExpImpl_rhino_regexp_GlobData_rhino_regexp_NativeRegExp_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5, jobject param6);
jint M_rhino_regexp_RegExpImpl_find_split_rhino_Context_rhino_Scriptable_java_lang_String_java_lang_String_rhino_Scriptable_Array1_int_Array1_int_Array1_boolean_Array2_java_lang_String_R_int(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5, jobject param6, jobject param7, jobject param8);
jobject M_rhino_regexp_RegExpImpl_getParenSubString_int_R_rhino_regexp_SubString(jcontext ctx, jobject self, jint param0);
void SM_rhino_regexp_RegExpImpl_match_glob_rhino_regexp_GlobData_rhino_Context_rhino_Scriptable_int_rhino_regexp_RegExpImpl(jcontext ctx, jobject param0, jobject param1, jobject param2, jint param3, jobject param4);
void SM_rhino_regexp_RegExpImpl_replace_glob_rhino_regexp_GlobData_rhino_Context_rhino_Scriptable_rhino_regexp_RegExpImpl_int_int(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jint param4, jint param5);
jobject SM_rhino_regexp_RegExpImpl_interpretDollar_rhino_Context_rhino_regexp_RegExpImpl_java_lang_String_int_Array1_int_R_rhino_regexp_SubString(jcontext ctx, jobject param0, jobject param1, jobject param2, jint param3, jobject param4);
void SM_rhino_regexp_RegExpImpl_do_replace_rhino_regexp_GlobData_rhino_Context_rhino_regexp_RegExpImpl(jcontext ctx, jobject param0, jobject param1, jobject param2);
jobject M_rhino_regexp_RegExpImpl_js_split_rhino_Context_rhino_Scriptable_java_lang_String_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3);
jint SM_rhino_regexp_RegExpImpl_find_split_rhino_Context_rhino_Scriptable_java_lang_String_java_lang_String_int_rhino_RegExpProxy_rhino_Scriptable_Array1_int_Array1_int_Array1_boolean_Array2_java_lang_String_R_int(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jint param4, jobject param5, jobject param6, jobject param7, jobject param8, jobject param9, jobject param10);

#ifdef __cplusplus
}
#endif

#endif
