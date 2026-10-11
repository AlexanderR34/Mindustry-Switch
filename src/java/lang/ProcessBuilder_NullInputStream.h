#ifndef HEADER_java_lang_ProcessBuilder$NullInputStream
#define HEADER_java_lang_ProcessBuilder$NullInputStream

#include "Clearwing.h"
#include "java/io/InputStream.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_lang_ProcessBuilder$NullInputStream {
	java_io_InputStream parent;
} java_lang_ProcessBuilder$NullInputStream;

extern Class class_java_lang_ProcessBuilder$NullInputStream;

extern jobject SF_java_lang_ProcessBuilder$NullInputStream_INSTANCE;

#define VTABLE_java_lang_ProcessBuilder$NullInputStream_hashCode_R_int 0
typedef jint (*func_java_lang_ProcessBuilder$NullInputStream_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ProcessBuilder$NullInputStream_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_lang_ProcessBuilder$NullInputStream_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_ProcessBuilder$NullInputStream_clone_R_java_lang_Object 2
typedef jobject (*func_java_lang_ProcessBuilder$NullInputStream_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ProcessBuilder$NullInputStream_getClass_R_java_lang_Class 3
typedef jobject (*func_java_lang_ProcessBuilder$NullInputStream_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ProcessBuilder$NullInputStream_toString_R_java_lang_String 4
typedef jobject (*func_java_lang_ProcessBuilder$NullInputStream_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ProcessBuilder$NullInputStream_finalize 5
typedef void (*func_java_lang_ProcessBuilder$NullInputStream_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ProcessBuilder$NullInputStream_notify 6
typedef void (*func_java_lang_ProcessBuilder$NullInputStream_notify)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ProcessBuilder$NullInputStream_notifyAll 7
typedef void (*func_java_lang_ProcessBuilder$NullInputStream_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ProcessBuilder$NullInputStream_wait 8
typedef void (*func_java_lang_ProcessBuilder$NullInputStream_wait)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ProcessBuilder$NullInputStream_wait_long 9
typedef void (*func_java_lang_ProcessBuilder$NullInputStream_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_lang_ProcessBuilder$NullInputStream_wait_long_int 10
typedef void (*func_java_lang_ProcessBuilder$NullInputStream_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_lang_ProcessBuilder$NullInputStream_close 11
typedef void (*func_java_lang_ProcessBuilder$NullInputStream_close)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ProcessBuilder$NullInputStream_available_R_int 12
typedef jint (*func_java_lang_ProcessBuilder$NullInputStream_available_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ProcessBuilder$NullInputStream_mark_int 13
typedef void (*func_java_lang_ProcessBuilder$NullInputStream_mark_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_lang_ProcessBuilder$NullInputStream_markSupported_R_boolean 14
typedef jbool (*func_java_lang_ProcessBuilder$NullInputStream_markSupported_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ProcessBuilder$NullInputStream_read_R_int 15
typedef jint (*func_java_lang_ProcessBuilder$NullInputStream_read_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ProcessBuilder$NullInputStream_read_Array1_byte_R_int 16
typedef jint (*func_java_lang_ProcessBuilder$NullInputStream_read_Array1_byte_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_ProcessBuilder$NullInputStream_read_Array1_byte_int_int_R_int 17
typedef jint (*func_java_lang_ProcessBuilder$NullInputStream_read_Array1_byte_int_int_R_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_java_lang_ProcessBuilder$NullInputStream_reset 18
typedef void (*func_java_lang_ProcessBuilder$NullInputStream_reset)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ProcessBuilder$NullInputStream_skip_long_R_long 19
typedef jlong (*func_java_lang_ProcessBuilder$NullInputStream_skip_long_R_long)(jcontext ctx, jobject self, jlong param0);

void mark_java_lang_ProcessBuilder$NullInputStream(jobject object, jint mark, jint depth);
void clinit_java_lang_ProcessBuilder$NullInputStream(jcontext ctx);
void init_java_lang_ProcessBuilder$NullInputStream(jcontext ctx, jobject self);
jint M_java_lang_ProcessBuilder$NullInputStream_read_R_int(jcontext ctx, jobject self);
jint M_java_lang_ProcessBuilder$NullInputStream_available_R_int(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
