#ifndef HEADER_mindustry_net_Packets$TextureStream
#define HEADER_mindustry_net_Packets$TextureStream

#include "Clearwing.h"
#include "mindustry/net/Streamable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_net_Packets$TextureStream {
	mindustry_net_Streamable parent;
} mindustry_net_Packets$TextureStream;

extern Class class_mindustry_net_Packets$TextureStream;


#define VTABLE_mindustry_net_Packets$TextureStream_hashCode_R_int 0
typedef jint (*func_mindustry_net_Packets$TextureStream_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Packets$TextureStream_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_net_Packets$TextureStream_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_net_Packets$TextureStream_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_net_Packets$TextureStream_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Packets$TextureStream_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_net_Packets$TextureStream_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Packets$TextureStream_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_net_Packets$TextureStream_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Packets$TextureStream_finalize 5
typedef void (*func_mindustry_net_Packets$TextureStream_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Packets$TextureStream_notify 6
typedef void (*func_mindustry_net_Packets$TextureStream_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Packets$TextureStream_notifyAll 7
typedef void (*func_mindustry_net_Packets$TextureStream_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Packets$TextureStream_wait 8
typedef void (*func_mindustry_net_Packets$TextureStream_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Packets$TextureStream_wait_long 9
typedef void (*func_mindustry_net_Packets$TextureStream_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_net_Packets$TextureStream_wait_long_int 10
typedef void (*func_mindustry_net_Packets$TextureStream_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_net_Packets$TextureStream_read_arc_util_io_Reads 11
typedef void (*func_mindustry_net_Packets$TextureStream_read_arc_util_io_Reads)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_net_Packets$TextureStream_write_arc_util_io_Writes 12
typedef void (*func_mindustry_net_Packets$TextureStream_write_arc_util_io_Writes)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_net_Packets$TextureStream_allow_boolean_R_boolean 13
typedef jbool (*func_mindustry_net_Packets$TextureStream_allow_boolean_R_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_net_Packets$TextureStream_read_arc_util_io_Reads_int 14
typedef void (*func_mindustry_net_Packets$TextureStream_read_arc_util_io_Reads_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_mindustry_net_Packets$TextureStream_handled 15
typedef void (*func_mindustry_net_Packets$TextureStream_handled)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Packets$TextureStream_getPriority_R_int 16
typedef jint (*func_mindustry_net_Packets$TextureStream_getPriority_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Packets$TextureStream_handleClient 17
typedef void (*func_mindustry_net_Packets$TextureStream_handleClient)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Packets$TextureStream_handleServer_mindustry_net_NetConnection 18
typedef void (*func_mindustry_net_Packets$TextureStream_handleServer_mindustry_net_NetConnection)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_net_Packets$TextureStream_incremental_R_boolean 19
typedef jbool (*func_mindustry_net_Packets$TextureStream_incremental_R_boolean)(jcontext ctx, jobject self);

void mark_mindustry_net_Packets$TextureStream(jobject object, jint mark, jint depth);
void clinit_mindustry_net_Packets$TextureStream(jcontext ctx);
void init_mindustry_net_Packets$TextureStream(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
