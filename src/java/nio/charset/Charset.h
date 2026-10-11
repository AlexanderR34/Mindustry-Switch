#ifndef HEADER_java_nio_charset_Charset
#define HEADER_java_nio_charset_Charset

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/lang/Comparable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_nio_charset_Charset {
	java_lang_Object parent;
	jref F_name;
} java_nio_charset_Charset;

extern Class class_java_nio_charset_Charset;


#define VTABLE_java_nio_charset_Charset_hashCode_R_int 0
typedef jint (*func_java_nio_charset_Charset_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_charset_Charset_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_nio_charset_Charset_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_nio_charset_Charset_clone_R_java_lang_Object 2
typedef jobject (*func_java_nio_charset_Charset_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_nio_charset_Charset_getClass_R_java_lang_Class 3
typedef jobject (*func_java_nio_charset_Charset_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_nio_charset_Charset_toString_R_java_lang_String 4
typedef jobject (*func_java_nio_charset_Charset_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_nio_charset_Charset_finalize 5
typedef void (*func_java_nio_charset_Charset_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_nio_charset_Charset_notify 6
typedef void (*func_java_nio_charset_Charset_notify)(jcontext ctx, jobject self);
#define VTABLE_java_nio_charset_Charset_notifyAll 7
typedef void (*func_java_nio_charset_Charset_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_nio_charset_Charset_wait 8
typedef void (*func_java_nio_charset_Charset_wait)(jcontext ctx, jobject self);
#define VTABLE_java_nio_charset_Charset_wait_long 9
typedef void (*func_java_nio_charset_Charset_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_nio_charset_Charset_wait_long_int 10
typedef void (*func_java_nio_charset_Charset_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_nio_charset_Charset_compareTo_java_lang_Object_R_int 11
typedef jint (*func_java_nio_charset_Charset_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_nio_charset_Charset_compareTo_java_nio_charset_Charset_R_int 12
typedef jint (*func_java_nio_charset_Charset_compareTo_java_nio_charset_Charset_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_nio_charset_Charset_displayName_R_java_lang_String 13
typedef jobject (*func_java_nio_charset_Charset_displayName_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_nio_charset_Charset_newDecoder_R_java_nio_charset_CharsetDecoder 14
typedef jobject (*func_java_nio_charset_Charset_newDecoder_R_java_nio_charset_CharsetDecoder)(jcontext ctx, jobject self);
#define VTABLE_java_nio_charset_Charset_newEncoder_R_java_nio_charset_CharsetEncoder 15
typedef jobject (*func_java_nio_charset_Charset_newEncoder_R_java_nio_charset_CharsetEncoder)(jcontext ctx, jobject self);

void mark_java_nio_charset_Charset(jobject object, jint mark, jint depth);
void clinit_java_nio_charset_Charset(jcontext ctx);
void init_java_nio_charset_Charset_java_lang_String(jcontext ctx, jobject self, jobject param0);
void init_java_nio_charset_Charset_java_lang_String_Array1_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1);
jint M_java_nio_charset_Charset_compareTo_java_nio_charset_Charset_R_int(jcontext ctx, jobject self, jobject param0);
jobject M_java_nio_charset_Charset_displayName_R_java_lang_String(jcontext ctx, jobject self);
jobject SM_java_nio_charset_Charset_forName_java_lang_String_R_java_nio_charset_Charset(jcontext ctx, jobject param0);
jobject SM_java_nio_charset_Charset_defaultCharset_R_java_nio_charset_Charset(jcontext ctx);
jobject M_java_nio_charset_Charset_newDecoder_R_java_nio_charset_CharsetDecoder(jcontext ctx, jobject self);
jobject M_java_nio_charset_Charset_newEncoder_R_java_nio_charset_CharsetEncoder(jcontext ctx, jobject self);
jint M_java_nio_charset_Charset_compareTo_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
