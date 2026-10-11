#ifndef HEADER_rhino_NativeGlobal
#define HEADER_rhino_NativeGlobal

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "rhino/IdFunctionCall.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_NativeGlobal {
	java_lang_Object parent;
} rhino_NativeGlobal;

extern Class class_rhino_NativeGlobal;

extern jlong SF_rhino_NativeGlobal_serialVersionUID;
extern jobject SF_rhino_NativeGlobal_URI_DECODE_RESERVED;
extern jint SF_rhino_NativeGlobal_INVALID_UTF8;
extern jobject SF_rhino_NativeGlobal_FTAG;
extern jint SF_rhino_NativeGlobal_Id_decodeURI;
extern jint SF_rhino_NativeGlobal_Id_decodeURIComponent;
extern jint SF_rhino_NativeGlobal_Id_encodeURI;
extern jint SF_rhino_NativeGlobal_Id_encodeURIComponent;
extern jint SF_rhino_NativeGlobal_Id_escape;
extern jint SF_rhino_NativeGlobal_Id_eval;
extern jint SF_rhino_NativeGlobal_Id_isFinite;
extern jint SF_rhino_NativeGlobal_Id_isNaN;
extern jint SF_rhino_NativeGlobal_Id_isXMLName;
extern jint SF_rhino_NativeGlobal_Id_parseFloat;
extern jint SF_rhino_NativeGlobal_Id_parseInt;
extern jint SF_rhino_NativeGlobal_Id_unescape;
extern jint SF_rhino_NativeGlobal_Id_uneval;
extern jint SF_rhino_NativeGlobal_LAST_SCOPE_FUNCTION_ID;
extern jint SF_rhino_NativeGlobal_Id_new_CommonError;

#define VTABLE_rhino_NativeGlobal_hashCode_R_int 0
typedef jint (*func_rhino_NativeGlobal_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeGlobal_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_NativeGlobal_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeGlobal_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_NativeGlobal_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeGlobal_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_NativeGlobal_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeGlobal_toString_R_java_lang_String 4
typedef jobject (*func_rhino_NativeGlobal_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeGlobal_finalize 5
typedef void (*func_rhino_NativeGlobal_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeGlobal_notify 6
typedef void (*func_rhino_NativeGlobal_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeGlobal_notifyAll 7
typedef void (*func_rhino_NativeGlobal_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeGlobal_wait 8
typedef void (*func_rhino_NativeGlobal_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeGlobal_wait_long 9
typedef void (*func_rhino_NativeGlobal_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_NativeGlobal_wait_long_int 10
typedef void (*func_rhino_NativeGlobal_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_rhino_NativeGlobal_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object 11
typedef jobject (*func_rhino_NativeGlobal_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4);
#define VTABLE_rhino_NativeGlobal_js_escape_Array1_java_lang_Object_R_java_lang_Object 12
typedef jobject (*func_rhino_NativeGlobal_js_escape_Array1_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeGlobal_js_unescape_Array1_java_lang_Object_R_java_lang_Object 13
typedef jobject (*func_rhino_NativeGlobal_js_unescape_Array1_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeGlobal_js_eval_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object 14
typedef jobject (*func_rhino_NativeGlobal_js_eval_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);

void mark_rhino_NativeGlobal(jobject object, jint mark, jint depth);
void clinit_rhino_NativeGlobal(jcontext ctx);
void init_rhino_NativeGlobal(jcontext ctx, jobject self);
void SM_rhino_NativeGlobal_init_rhino_Context_rhino_Scriptable_boolean(jcontext ctx, jobject param0, jobject param1, jbool param2);
jobject M_rhino_NativeGlobal_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4);
jobject SM_rhino_NativeGlobal_js_parseInt_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject param0);
jobject SM_rhino_NativeGlobal_js_parseFloat_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject param0);
jobject M_rhino_NativeGlobal_js_escape_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_NativeGlobal_js_unescape_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_NativeGlobal_js_eval_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
jbool SM_rhino_NativeGlobal_isEvalFunction_java_lang_Object_R_boolean(jcontext ctx, jobject param0);
jobject SM_rhino_NativeGlobal_encode_java_lang_String_boolean_R_java_lang_String(jcontext ctx, jobject param0, jbool param1);
jchar SM_rhino_NativeGlobal_toHexChar_int_R_char(jcontext ctx, jint param0);
jint SM_rhino_NativeGlobal_unHex_char_R_int(jcontext ctx, jchar param0);
jint SM_rhino_NativeGlobal_unHex_char_char_R_int(jcontext ctx, jchar param0, jchar param1);
jobject SM_rhino_NativeGlobal_decode_java_lang_String_boolean_R_java_lang_String(jcontext ctx, jobject param0, jbool param1);
jbool SM_rhino_NativeGlobal_encodeUnescaped_char_boolean_R_boolean(jcontext ctx, jchar param0, jbool param1);
jobject SM_rhino_NativeGlobal_uriError_R_rhino_EcmaError(jcontext ctx);
jint SM_rhino_NativeGlobal_oneUcs4ToUtf8Char_Array1_byte_int_R_int(jcontext ctx, jobject param0, jint param1);

#ifdef __cplusplus
}
#endif

#endif
