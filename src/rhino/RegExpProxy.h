#ifndef HEADER_rhino_RegExpProxy
#define HEADER_rhino_RegExpProxy

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_RegExpProxy {
	java_lang_Object parent;
} rhino_RegExpProxy;

extern Class class_rhino_RegExpProxy;

extern jint SF_rhino_RegExpProxy_RA_MATCH;
extern jint SF_rhino_RegExpProxy_RA_REPLACE;
extern jint SF_rhino_RegExpProxy_RA_SEARCH;

#define INDEX_rhino_RegExpProxy_isRegExp_rhino_Scriptable_R_boolean 0
typedef jbool (*func_rhino_RegExpProxy_isRegExp_rhino_Scriptable_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define INDEX_rhino_RegExpProxy_compileRegExp_rhino_Context_java_lang_String_java_lang_String_R_java_lang_Object 1
typedef jobject (*func_rhino_RegExpProxy_compileRegExp_rhino_Context_java_lang_String_java_lang_String_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define INDEX_rhino_RegExpProxy_wrapRegExp_rhino_Context_rhino_Scriptable_java_lang_Object_R_rhino_Scriptable 2
typedef jobject (*func_rhino_RegExpProxy_wrapRegExp_rhino_Context_rhino_Scriptable_java_lang_Object_R_rhino_Scriptable)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define INDEX_rhino_RegExpProxy_action_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_int_R_java_lang_Object 3
typedef jobject (*func_rhino_RegExpProxy_action_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_int_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jint param4);
#define INDEX_rhino_RegExpProxy_find_split_rhino_Context_rhino_Scriptable_java_lang_String_java_lang_String_rhino_Scriptable_Array1_int_Array1_int_Array1_boolean_Array2_java_lang_String_R_int 4
typedef jint (*func_rhino_RegExpProxy_find_split_rhino_Context_rhino_Scriptable_java_lang_String_java_lang_String_rhino_Scriptable_Array1_int_Array1_int_Array1_boolean_Array2_java_lang_String_R_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5, jobject param6, jobject param7, jobject param8);
#define INDEX_rhino_RegExpProxy_js_split_rhino_Context_rhino_Scriptable_java_lang_String_Array1_java_lang_Object_R_java_lang_Object 5
typedef jobject (*func_rhino_RegExpProxy_js_split_rhino_Context_rhino_Scriptable_java_lang_String_Array1_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3);

void mark_rhino_RegExpProxy(jobject object, jint mark, jint depth);
void clinit_rhino_RegExpProxy(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
