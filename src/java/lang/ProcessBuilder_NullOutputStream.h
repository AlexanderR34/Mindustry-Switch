#ifndef HEADER_java_lang_ProcessBuilder$NullOutputStream
#define HEADER_java_lang_ProcessBuilder$NullOutputStream

#include "Clearwing.h"
#include "java/io/OutputStream.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_lang_ProcessBuilder$NullOutputStream {
	java_io_OutputStream parent;
} java_lang_ProcessBuilder$NullOutputStream;

extern Class class_java_lang_ProcessBuilder$NullOutputStream;

extern jobject SF_java_lang_ProcessBuilder$NullOutputStream_INSTANCE;

#define VTABLE_java_lang_ProcessBuilder$NullOutputStream_hashCode_R_int 0
typedef jint (*func_java_lang_ProcessBuilder$NullOutputStream_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ProcessBuilder$NullOutputStream_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_lang_ProcessBuilder$NullOutputStream_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_ProcessBuilder$NullOutputStream_clone_R_java_lang_Object 2
typedef jobject (*func_java_lang_ProcessBuilder$NullOutputStream_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ProcessBuilder$NullOutputStream_getClass_R_java_lang_Class 3
typedef jobject (*func_java_lang_ProcessBuilder$NullOutputStream_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ProcessBuilder$NullOutputStream_toString_R_java_lang_String 4
typedef jobject (*func_java_lang_ProcessBuilder$NullOutputStream_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ProcessBuilder$NullOutputStream_finalize 5
typedef void (*func_java_lang_ProcessBuilder$NullOutputStream_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ProcessBuilder$NullOutputStream_notify 6
typedef void (*func_java_lang_ProcessBuilder$NullOutputStream_notify)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ProcessBuilder$NullOutputStream_notifyAll 7
typedef void (*func_java_lang_ProcessBuilder$NullOutputStream_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ProcessBuilder$NullOutputStream_wait 8
typedef void (*func_java_lang_ProcessBuilder$NullOutputStream_wait)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ProcessBuilder$NullOutputStream_wait_long 9
typedef void (*func_java_lang_ProcessBuilder$NullOutputStream_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_lang_ProcessBuilder$NullOutputStream_wait_long_int 10
typedef void (*func_java_lang_ProcessBuilder$NullOutputStream_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_lang_ProcessBuilder$NullOutputStream_close 11
typedef void (*func_java_lang_ProcessBuilder$NullOutputStream_close)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ProcessBuilder$NullOutputStream_flush 12
typedef void (*func_java_lang_ProcessBuilder$NullOutputStream_flush)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ProcessBuilder$NullOutputStream_write_Array1_byte 13
typedef void (*func_java_lang_ProcessBuilder$NullOutputStream_write_Array1_byte)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_ProcessBuilder$NullOutputStream_write_Array1_byte_int_int 14
typedef void (*func_java_lang_ProcessBuilder$NullOutputStream_write_Array1_byte_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_java_lang_ProcessBuilder$NullOutputStream_write_int 15
typedef void (*func_java_lang_ProcessBuilder$NullOutputStream_write_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_lang_ProcessBuilder$NullOutputStream_checkError_R_boolean 16
typedef jbool (*func_java_lang_ProcessBuilder$NullOutputStream_checkError_R_boolean)(jcontext ctx, jobject self);

void mark_java_lang_ProcessBuilder$NullOutputStream(jobject object, jint mark, jint depth);
void clinit_java_lang_ProcessBuilder$NullOutputStream(jcontext ctx);
void init_java_lang_ProcessBuilder$NullOutputStream(jcontext ctx, jobject self);
void M_java_lang_ProcessBuilder$NullOutputStream_write_int(jcontext ctx, jobject self, jint param0);

#ifdef __cplusplus
}
#endif

#endif
