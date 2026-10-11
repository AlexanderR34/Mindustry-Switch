#ifndef HEADER_java_io_ObjectInputStream
#define HEADER_java_io_ObjectInputStream

#include "Clearwing.h"
#include "java/io/InputStream.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_io_ObjectInputStream {
	java_io_InputStream parent;
} java_io_ObjectInputStream;

extern Class class_java_io_ObjectInputStream;


#define VTABLE_java_io_ObjectInputStream_hashCode_R_int 0
typedef jint (*func_java_io_ObjectInputStream_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_io_ObjectInputStream_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_io_ObjectInputStream_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_io_ObjectInputStream_clone_R_java_lang_Object 2
typedef jobject (*func_java_io_ObjectInputStream_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_io_ObjectInputStream_getClass_R_java_lang_Class 3
typedef jobject (*func_java_io_ObjectInputStream_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_io_ObjectInputStream_toString_R_java_lang_String 4
typedef jobject (*func_java_io_ObjectInputStream_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_io_ObjectInputStream_finalize 5
typedef void (*func_java_io_ObjectInputStream_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_io_ObjectInputStream_notify 6
typedef void (*func_java_io_ObjectInputStream_notify)(jcontext ctx, jobject self);
#define VTABLE_java_io_ObjectInputStream_notifyAll 7
typedef void (*func_java_io_ObjectInputStream_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_io_ObjectInputStream_wait 8
typedef void (*func_java_io_ObjectInputStream_wait)(jcontext ctx, jobject self);
#define VTABLE_java_io_ObjectInputStream_wait_long 9
typedef void (*func_java_io_ObjectInputStream_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_io_ObjectInputStream_wait_long_int 10
typedef void (*func_java_io_ObjectInputStream_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_io_ObjectInputStream_close 11
typedef void (*func_java_io_ObjectInputStream_close)(jcontext ctx, jobject self);
#define VTABLE_java_io_ObjectInputStream_available_R_int 12
typedef jint (*func_java_io_ObjectInputStream_available_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_io_ObjectInputStream_mark_int 13
typedef void (*func_java_io_ObjectInputStream_mark_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_io_ObjectInputStream_markSupported_R_boolean 14
typedef jbool (*func_java_io_ObjectInputStream_markSupported_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_io_ObjectInputStream_read_R_int 15
typedef jint (*func_java_io_ObjectInputStream_read_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_io_ObjectInputStream_read_Array1_byte_R_int 16
typedef jint (*func_java_io_ObjectInputStream_read_Array1_byte_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_io_ObjectInputStream_read_Array1_byte_int_int_R_int 17
typedef jint (*func_java_io_ObjectInputStream_read_Array1_byte_int_int_R_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_java_io_ObjectInputStream_reset 18
typedef void (*func_java_io_ObjectInputStream_reset)(jcontext ctx, jobject self);
#define VTABLE_java_io_ObjectInputStream_skip_long_R_long 19
typedef jlong (*func_java_io_ObjectInputStream_skip_long_R_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_io_ObjectInputStream_defaultReadObject 20
typedef void (*func_java_io_ObjectInputStream_defaultReadObject)(jcontext ctx, jobject self);
#define VTABLE_java_io_ObjectInputStream_readObject_R_java_lang_Object 21
typedef jobject (*func_java_io_ObjectInputStream_readObject_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_io_ObjectInputStream_readInt_R_int 22
typedef jint (*func_java_io_ObjectInputStream_readInt_R_int)(jcontext ctx, jobject self);

void mark_java_io_ObjectInputStream(jobject object, jint mark, jint depth);
void clinit_java_io_ObjectInputStream(jcontext ctx);
void init_java_io_ObjectInputStream_java_io_InputStream(jcontext ctx, jobject self, jobject param0);
jint M_java_io_ObjectInputStream_read_R_int(jcontext ctx, jobject self);
void M_java_io_ObjectInputStream_defaultReadObject(jcontext ctx, jobject self);
jobject M_java_io_ObjectInputStream_readObject_R_java_lang_Object(jcontext ctx, jobject self);
jint M_java_io_ObjectInputStream_readInt_R_int(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
