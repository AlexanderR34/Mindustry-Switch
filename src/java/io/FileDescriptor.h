#ifndef HEADER_java_io_FileDescriptor
#define HEADER_java_io_FileDescriptor

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_io_FileDescriptor {
	java_lang_Object parent;
	jint F_fd;
} java_io_FileDescriptor;

extern Class class_java_io_FileDescriptor;

extern jobject SF_java_io_FileDescriptor_in;
extern jobject SF_java_io_FileDescriptor_out;
extern jobject SF_java_io_FileDescriptor_err;

#define VTABLE_java_io_FileDescriptor_hashCode_R_int 0
typedef jint (*func_java_io_FileDescriptor_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_io_FileDescriptor_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_io_FileDescriptor_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_io_FileDescriptor_clone_R_java_lang_Object 2
typedef jobject (*func_java_io_FileDescriptor_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_io_FileDescriptor_getClass_R_java_lang_Class 3
typedef jobject (*func_java_io_FileDescriptor_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_io_FileDescriptor_toString_R_java_lang_String 4
typedef jobject (*func_java_io_FileDescriptor_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_io_FileDescriptor_finalize 5
typedef void (*func_java_io_FileDescriptor_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_io_FileDescriptor_notify 6
typedef void (*func_java_io_FileDescriptor_notify)(jcontext ctx, jobject self);
#define VTABLE_java_io_FileDescriptor_notifyAll 7
typedef void (*func_java_io_FileDescriptor_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_io_FileDescriptor_wait 8
typedef void (*func_java_io_FileDescriptor_wait)(jcontext ctx, jobject self);
#define VTABLE_java_io_FileDescriptor_wait_long 9
typedef void (*func_java_io_FileDescriptor_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_io_FileDescriptor_wait_long_int 10
typedef void (*func_java_io_FileDescriptor_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_io_FileDescriptor_valid_R_boolean 11
typedef jbool (*func_java_io_FileDescriptor_valid_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_io_FileDescriptor_sync 12
typedef void (*func_java_io_FileDescriptor_sync)(jcontext ctx, jobject self);

void mark_java_io_FileDescriptor(jobject object, jint mark, jint depth);
void clinit_java_io_FileDescriptor(jcontext ctx);
void init_java_io_FileDescriptor(jcontext ctx, jobject self);
void init_java_io_FileDescriptor_int(jcontext ctx, jobject self, jint param0);
jbool M_java_io_FileDescriptor_valid_R_boolean(jcontext ctx, jobject self);
void M_java_io_FileDescriptor_sync(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
