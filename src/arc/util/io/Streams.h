#ifndef HEADER_arc_util_io_Streams
#define HEADER_arc_util_io_Streams

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_util_io_Streams {
	java_lang_Object parent;
} arc_util_io_Streams;

extern Class class_arc_util_io_Streams;

extern jint SF_arc_util_io_Streams_defaultBufferSize;
extern jobject SF_arc_util_io_Streams_emptyBytes;

#define VTABLE_arc_util_io_Streams_hashCode_R_int 0
typedef jint (*func_arc_util_io_Streams_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_util_io_Streams_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_util_io_Streams_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_io_Streams_clone_R_java_lang_Object 2
typedef jobject (*func_arc_util_io_Streams_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_util_io_Streams_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_util_io_Streams_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_util_io_Streams_toString_R_java_lang_String 4
typedef jobject (*func_arc_util_io_Streams_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_util_io_Streams_finalize 5
typedef void (*func_arc_util_io_Streams_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_util_io_Streams_notify 6
typedef void (*func_arc_util_io_Streams_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_util_io_Streams_notifyAll 7
typedef void (*func_arc_util_io_Streams_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_util_io_Streams_wait 8
typedef void (*func_arc_util_io_Streams_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_util_io_Streams_wait_long 9
typedef void (*func_arc_util_io_Streams_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_util_io_Streams_wait_long_int 10
typedef void (*func_arc_util_io_Streams_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_arc_util_io_Streams(jobject object, jint mark, jint depth);
void clinit_arc_util_io_Streams(jcontext ctx);
void init_arc_util_io_Streams(jcontext ctx, jobject self);
void SM_arc_util_io_Streams_copy_java_io_InputStream_java_io_OutputStream(jcontext ctx, jobject param0, jobject param1);
void SM_arc_util_io_Streams_copy_java_io_InputStream_java_io_OutputStream_int(jcontext ctx, jobject param0, jobject param1, jint param2);
void SM_arc_util_io_Streams_copy_java_io_InputStream_java_io_OutputStream_Array1_byte(jcontext ctx, jobject param0, jobject param1, jobject param2);
void SM_arc_util_io_Streams_copyProgress_java_io_InputStream_java_io_OutputStream_long_int_arc_func_Floatc(jcontext ctx, jobject param0, jobject param1, jlong param2, jint param3, jobject param4);
void SM_arc_util_io_Streams_copy_java_io_InputStream_java_nio_ByteBuffer(jcontext ctx, jobject param0, jobject param1);
void SM_arc_util_io_Streams_copy_java_io_InputStream_java_nio_ByteBuffer_int(jcontext ctx, jobject param0, jobject param1, jint param2);
jint SM_arc_util_io_Streams_copy_java_io_InputStream_java_nio_ByteBuffer_Array1_byte_R_int(jcontext ctx, jobject param0, jobject param1, jobject param2);
jobject SM_arc_util_io_Streams_copyBytes_java_io_InputStream_R_Array1_byte(jcontext ctx, jobject param0);
jobject SM_arc_util_io_Streams_copyBytes_java_io_InputStream_int_R_Array1_byte(jcontext ctx, jobject param0, jint param1);
jobject SM_arc_util_io_Streams_copyString_java_io_InputStream_R_java_lang_String(jcontext ctx, jobject param0);
jobject SM_arc_util_io_Streams_copyString_java_io_InputStream_int_R_java_lang_String(jcontext ctx, jobject param0, jint param1);
jobject SM_arc_util_io_Streams_copyString_java_io_InputStream_int_java_lang_String_R_java_lang_String(jcontext ctx, jobject param0, jint param1, jobject param2);
void SM_arc_util_io_Streams_close_java_io_Closeable(jcontext ctx, jobject param0);
jobject SM_arc_util_io_Streams_sha256_Array1_byte_R_Array1_byte(jcontext ctx, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
