#ifndef HEADER_java_nio_charset_StandardCharsets
#define HEADER_java_nio_charset_StandardCharsets

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_nio_charset_StandardCharsets {
	java_lang_Object parent;
} java_nio_charset_StandardCharsets;

extern Class class_java_nio_charset_StandardCharsets;

extern jobject SF_java_nio_charset_StandardCharsets_US_ASCII;
extern jobject SF_java_nio_charset_StandardCharsets_ISO_8859_1;
extern jobject SF_java_nio_charset_StandardCharsets_UTF_8;
extern jobject SF_java_nio_charset_StandardCharsets_UTF_16BE;
extern jobject SF_java_nio_charset_StandardCharsets_UTF_16LE;
extern jobject SF_java_nio_charset_StandardCharsets_UTF_16;

#define VTABLE_java_nio_charset_StandardCharsets_hashCode_R_int 0
typedef jint (*func_java_nio_charset_StandardCharsets_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_charset_StandardCharsets_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_nio_charset_StandardCharsets_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_nio_charset_StandardCharsets_clone_R_java_lang_Object 2
typedef jobject (*func_java_nio_charset_StandardCharsets_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_nio_charset_StandardCharsets_getClass_R_java_lang_Class 3
typedef jobject (*func_java_nio_charset_StandardCharsets_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_nio_charset_StandardCharsets_toString_R_java_lang_String 4
typedef jobject (*func_java_nio_charset_StandardCharsets_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_nio_charset_StandardCharsets_finalize 5
typedef void (*func_java_nio_charset_StandardCharsets_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_nio_charset_StandardCharsets_notify 6
typedef void (*func_java_nio_charset_StandardCharsets_notify)(jcontext ctx, jobject self);
#define VTABLE_java_nio_charset_StandardCharsets_notifyAll 7
typedef void (*func_java_nio_charset_StandardCharsets_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_nio_charset_StandardCharsets_wait 8
typedef void (*func_java_nio_charset_StandardCharsets_wait)(jcontext ctx, jobject self);
#define VTABLE_java_nio_charset_StandardCharsets_wait_long 9
typedef void (*func_java_nio_charset_StandardCharsets_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_nio_charset_StandardCharsets_wait_long_int 10
typedef void (*func_java_nio_charset_StandardCharsets_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_java_nio_charset_StandardCharsets(jobject object, jint mark, jint depth);
void clinit_java_nio_charset_StandardCharsets(jcontext ctx);
void init_java_nio_charset_StandardCharsets(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
