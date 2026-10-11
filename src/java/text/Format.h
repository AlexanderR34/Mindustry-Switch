#ifndef HEADER_java_text_Format
#define HEADER_java_text_Format

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/lang/Cloneable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_text_Format {
	java_lang_Object parent;
} java_text_Format;

extern Class class_java_text_Format;


#define VTABLE_java_text_Format_hashCode_R_int 0
typedef jint (*func_java_text_Format_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_text_Format_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_text_Format_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_text_Format_clone_R_java_lang_Object 2
typedef jobject (*func_java_text_Format_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_text_Format_getClass_R_java_lang_Class 3
typedef jobject (*func_java_text_Format_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_text_Format_toString_R_java_lang_String 4
typedef jobject (*func_java_text_Format_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_text_Format_finalize 5
typedef void (*func_java_text_Format_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_text_Format_notify 6
typedef void (*func_java_text_Format_notify)(jcontext ctx, jobject self);
#define VTABLE_java_text_Format_notifyAll 7
typedef void (*func_java_text_Format_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_text_Format_wait 8
typedef void (*func_java_text_Format_wait)(jcontext ctx, jobject self);
#define VTABLE_java_text_Format_wait_long 9
typedef void (*func_java_text_Format_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_text_Format_wait_long_int 10
typedef void (*func_java_text_Format_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_text_Format_format_java_lang_Object_R_java_lang_String 11
typedef jobject (*func_java_text_Format_format_java_lang_Object_R_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_text_Format_parseObject_java_lang_String_R_java_lang_Object 12
typedef jobject (*func_java_text_Format_parseObject_java_lang_String_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);

void mark_java_text_Format(jobject object, jint mark, jint depth);
void clinit_java_text_Format(jcontext ctx);
void init_java_text_Format(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
