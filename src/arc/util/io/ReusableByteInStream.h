#ifndef HEADER_arc_util_io_ReusableByteInStream
#define HEADER_arc_util_io_ReusableByteInStream

#include "Clearwing.h"
#include "java/io/ByteArrayInputStream.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_util_io_ReusableByteInStream {
	java_io_ByteArrayInputStream parent;
} arc_util_io_ReusableByteInStream;

extern Class class_arc_util_io_ReusableByteInStream;


#define VTABLE_arc_util_io_ReusableByteInStream_hashCode_R_int 0
typedef jint (*func_arc_util_io_ReusableByteInStream_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_util_io_ReusableByteInStream_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_util_io_ReusableByteInStream_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_io_ReusableByteInStream_clone_R_java_lang_Object 2
typedef jobject (*func_arc_util_io_ReusableByteInStream_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_util_io_ReusableByteInStream_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_util_io_ReusableByteInStream_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_util_io_ReusableByteInStream_toString_R_java_lang_String 4
typedef jobject (*func_arc_util_io_ReusableByteInStream_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_util_io_ReusableByteInStream_finalize 5
typedef void (*func_arc_util_io_ReusableByteInStream_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_util_io_ReusableByteInStream_notify 6
typedef void (*func_arc_util_io_ReusableByteInStream_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_util_io_ReusableByteInStream_notifyAll 7
typedef void (*func_arc_util_io_ReusableByteInStream_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_util_io_ReusableByteInStream_wait 8
typedef void (*func_arc_util_io_ReusableByteInStream_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_util_io_ReusableByteInStream_wait_long 9
typedef void (*func_arc_util_io_ReusableByteInStream_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_util_io_ReusableByteInStream_wait_long_int 10
typedef void (*func_arc_util_io_ReusableByteInStream_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_util_io_ReusableByteInStream_close 11
typedef void (*func_arc_util_io_ReusableByteInStream_close)(jcontext ctx, jobject self);
#define VTABLE_arc_util_io_ReusableByteInStream_available_R_int 12
typedef jint (*func_arc_util_io_ReusableByteInStream_available_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_util_io_ReusableByteInStream_mark_int 13
typedef void (*func_arc_util_io_ReusableByteInStream_mark_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_util_io_ReusableByteInStream_markSupported_R_boolean 14
typedef jbool (*func_arc_util_io_ReusableByteInStream_markSupported_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_util_io_ReusableByteInStream_read_R_int 15
typedef jint (*func_arc_util_io_ReusableByteInStream_read_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_util_io_ReusableByteInStream_read_Array1_byte_R_int 16
typedef jint (*func_arc_util_io_ReusableByteInStream_read_Array1_byte_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_io_ReusableByteInStream_read_Array1_byte_int_int_R_int 17
typedef jint (*func_arc_util_io_ReusableByteInStream_read_Array1_byte_int_int_R_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_arc_util_io_ReusableByteInStream_reset 18
typedef void (*func_arc_util_io_ReusableByteInStream_reset)(jcontext ctx, jobject self);
#define VTABLE_arc_util_io_ReusableByteInStream_skip_long_R_long 19
typedef jlong (*func_arc_util_io_ReusableByteInStream_skip_long_R_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_util_io_ReusableByteInStream_position_R_int 20
typedef jint (*func_arc_util_io_ReusableByteInStream_position_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_util_io_ReusableByteInStream_setBytes_Array1_byte 21
typedef void (*func_arc_util_io_ReusableByteInStream_setBytes_Array1_byte)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_io_ReusableByteInStream_setBytes_Array1_byte_int_int 22
typedef void (*func_arc_util_io_ReusableByteInStream_setBytes_Array1_byte_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);

void mark_arc_util_io_ReusableByteInStream(jobject object, jint mark, jint depth);
void clinit_arc_util_io_ReusableByteInStream(jcontext ctx);
void init_arc_util_io_ReusableByteInStream(jcontext ctx, jobject self);
jint M_arc_util_io_ReusableByteInStream_position_R_int(jcontext ctx, jobject self);
void M_arc_util_io_ReusableByteInStream_setBytes_Array1_byte(jcontext ctx, jobject self, jobject param0);
void M_arc_util_io_ReusableByteInStream_setBytes_Array1_byte_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);

#ifdef __cplusplus
}
#endif

#endif
