#ifndef HEADER_mindustry_net_Packets$AssetRequirementStream
#define HEADER_mindustry_net_Packets$AssetRequirementStream

#include "Clearwing.h"
#include "mindustry/net/Streamable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_net_Packets$AssetRequirementStream {
	mindustry_net_Streamable parent;
} mindustry_net_Packets$AssetRequirementStream;

extern Class class_mindustry_net_Packets$AssetRequirementStream;


#define VTABLE_mindustry_net_Packets$AssetRequirementStream_hashCode_R_int 0
typedef jint (*func_mindustry_net_Packets$AssetRequirementStream_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Packets$AssetRequirementStream_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_net_Packets$AssetRequirementStream_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_net_Packets$AssetRequirementStream_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_net_Packets$AssetRequirementStream_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Packets$AssetRequirementStream_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_net_Packets$AssetRequirementStream_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Packets$AssetRequirementStream_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_net_Packets$AssetRequirementStream_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Packets$AssetRequirementStream_finalize 5
typedef void (*func_mindustry_net_Packets$AssetRequirementStream_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Packets$AssetRequirementStream_notify 6
typedef void (*func_mindustry_net_Packets$AssetRequirementStream_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Packets$AssetRequirementStream_notifyAll 7
typedef void (*func_mindustry_net_Packets$AssetRequirementStream_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Packets$AssetRequirementStream_wait 8
typedef void (*func_mindustry_net_Packets$AssetRequirementStream_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Packets$AssetRequirementStream_wait_long 9
typedef void (*func_mindustry_net_Packets$AssetRequirementStream_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_net_Packets$AssetRequirementStream_wait_long_int 10
typedef void (*func_mindustry_net_Packets$AssetRequirementStream_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_net_Packets$AssetRequirementStream_read_arc_util_io_Reads 11
typedef void (*func_mindustry_net_Packets$AssetRequirementStream_read_arc_util_io_Reads)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_net_Packets$AssetRequirementStream_write_arc_util_io_Writes 12
typedef void (*func_mindustry_net_Packets$AssetRequirementStream_write_arc_util_io_Writes)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_net_Packets$AssetRequirementStream_allow_boolean_R_boolean 13
typedef jbool (*func_mindustry_net_Packets$AssetRequirementStream_allow_boolean_R_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_net_Packets$AssetRequirementStream_read_arc_util_io_Reads_int 14
typedef void (*func_mindustry_net_Packets$AssetRequirementStream_read_arc_util_io_Reads_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_mindustry_net_Packets$AssetRequirementStream_handled 15
typedef void (*func_mindustry_net_Packets$AssetRequirementStream_handled)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Packets$AssetRequirementStream_getPriority_R_int 16
typedef jint (*func_mindustry_net_Packets$AssetRequirementStream_getPriority_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Packets$AssetRequirementStream_handleClient 17
typedef void (*func_mindustry_net_Packets$AssetRequirementStream_handleClient)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Packets$AssetRequirementStream_handleServer_mindustry_net_NetConnection 18
typedef void (*func_mindustry_net_Packets$AssetRequirementStream_handleServer_mindustry_net_NetConnection)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_net_Packets$AssetRequirementStream_incremental_R_boolean 19
typedef jbool (*func_mindustry_net_Packets$AssetRequirementStream_incremental_R_boolean)(jcontext ctx, jobject self);

void mark_mindustry_net_Packets$AssetRequirementStream(jobject object, jint mark, jint depth);
void clinit_mindustry_net_Packets$AssetRequirementStream(jcontext ctx);
void init_mindustry_net_Packets$AssetRequirementStream(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
