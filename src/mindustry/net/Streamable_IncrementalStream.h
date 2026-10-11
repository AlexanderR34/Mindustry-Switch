#ifndef HEADER_mindustry_net_Streamable$IncrementalStream
#define HEADER_mindustry_net_Streamable$IncrementalStream

#include "Clearwing.h"
#include "java/io/InputStream.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_net_Streamable$IncrementalStream {
	java_io_InputStream parent;
	jref F_queue;
	volatile jbool F_isClosed;
	volatile jbool F_isFinished;
	jref F_currentBuffer;
	jref F_singleByte;
	jint F_currentOffset;
} mindustry_net_Streamable$IncrementalStream;

extern Class class_mindustry_net_Streamable$IncrementalStream;

extern jobject SF_mindustry_net_Streamable$IncrementalStream_closedSignal;

#define VTABLE_mindustry_net_Streamable$IncrementalStream_hashCode_R_int 0
typedef jint (*func_mindustry_net_Streamable$IncrementalStream_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Streamable$IncrementalStream_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_net_Streamable$IncrementalStream_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_net_Streamable$IncrementalStream_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_net_Streamable$IncrementalStream_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Streamable$IncrementalStream_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_net_Streamable$IncrementalStream_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Streamable$IncrementalStream_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_net_Streamable$IncrementalStream_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Streamable$IncrementalStream_finalize 5
typedef void (*func_mindustry_net_Streamable$IncrementalStream_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Streamable$IncrementalStream_notify 6
typedef void (*func_mindustry_net_Streamable$IncrementalStream_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Streamable$IncrementalStream_notifyAll 7
typedef void (*func_mindustry_net_Streamable$IncrementalStream_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Streamable$IncrementalStream_wait 8
typedef void (*func_mindustry_net_Streamable$IncrementalStream_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Streamable$IncrementalStream_wait_long 9
typedef void (*func_mindustry_net_Streamable$IncrementalStream_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_net_Streamable$IncrementalStream_wait_long_int 10
typedef void (*func_mindustry_net_Streamable$IncrementalStream_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_net_Streamable$IncrementalStream_close 11
typedef void (*func_mindustry_net_Streamable$IncrementalStream_close)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Streamable$IncrementalStream_available_R_int 12
typedef jint (*func_mindustry_net_Streamable$IncrementalStream_available_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Streamable$IncrementalStream_mark_int 13
typedef void (*func_mindustry_net_Streamable$IncrementalStream_mark_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_net_Streamable$IncrementalStream_markSupported_R_boolean 14
typedef jbool (*func_mindustry_net_Streamable$IncrementalStream_markSupported_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Streamable$IncrementalStream_read_R_int 15
typedef jint (*func_mindustry_net_Streamable$IncrementalStream_read_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Streamable$IncrementalStream_read_Array1_byte_R_int 16
typedef jint (*func_mindustry_net_Streamable$IncrementalStream_read_Array1_byte_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_net_Streamable$IncrementalStream_read_Array1_byte_int_int_R_int 17
typedef jint (*func_mindustry_net_Streamable$IncrementalStream_read_Array1_byte_int_int_R_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_mindustry_net_Streamable$IncrementalStream_reset 18
typedef void (*func_mindustry_net_Streamable$IncrementalStream_reset)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Streamable$IncrementalStream_skip_long_R_long 19
typedef jlong (*func_mindustry_net_Streamable$IncrementalStream_skip_long_R_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_net_Streamable$IncrementalStream_add_Array1_byte 20
typedef void (*func_mindustry_net_Streamable$IncrementalStream_add_Array1_byte)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_net_Streamable$IncrementalStream_finish 21
typedef void (*func_mindustry_net_Streamable$IncrementalStream_finish)(jcontext ctx, jobject self);

void mark_mindustry_net_Streamable$IncrementalStream(jobject object, jint mark, jint depth);
void clinit_mindustry_net_Streamable$IncrementalStream(jcontext ctx);
void init_mindustry_net_Streamable$IncrementalStream(jcontext ctx, jobject self);
void M_mindustry_net_Streamable$IncrementalStream_add_Array1_byte(jcontext ctx, jobject self, jobject param0);
jint M_mindustry_net_Streamable$IncrementalStream_read_Array1_byte_int_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
jint M_mindustry_net_Streamable$IncrementalStream_read_R_int(jcontext ctx, jobject self);
void M_mindustry_net_Streamable$IncrementalStream_finish(jcontext ctx, jobject self);
void M_mindustry_net_Streamable$IncrementalStream_close(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
