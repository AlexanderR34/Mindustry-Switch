#ifndef HEADER_mindustry_world_DirectionalItemBuffer
#define HEADER_mindustry_world_DirectionalItemBuffer

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_world_DirectionalItemBuffer {
	java_lang_Object parent;
	jref F_buffers;
	jref F_indexes;
} mindustry_world_DirectionalItemBuffer;

extern Class class_mindustry_world_DirectionalItemBuffer;


#define VTABLE_mindustry_world_DirectionalItemBuffer_hashCode_R_int 0
typedef jint (*func_mindustry_world_DirectionalItemBuffer_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_DirectionalItemBuffer_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_world_DirectionalItemBuffer_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_DirectionalItemBuffer_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_world_DirectionalItemBuffer_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_DirectionalItemBuffer_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_world_DirectionalItemBuffer_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_DirectionalItemBuffer_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_world_DirectionalItemBuffer_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_DirectionalItemBuffer_finalize 5
typedef void (*func_mindustry_world_DirectionalItemBuffer_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_DirectionalItemBuffer_notify 6
typedef void (*func_mindustry_world_DirectionalItemBuffer_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_DirectionalItemBuffer_notifyAll 7
typedef void (*func_mindustry_world_DirectionalItemBuffer_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_DirectionalItemBuffer_wait 8
typedef void (*func_mindustry_world_DirectionalItemBuffer_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_DirectionalItemBuffer_wait_long 9
typedef void (*func_mindustry_world_DirectionalItemBuffer_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_world_DirectionalItemBuffer_wait_long_int 10
typedef void (*func_mindustry_world_DirectionalItemBuffer_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_world_DirectionalItemBuffer_accepts_int_R_boolean 11
typedef jbool (*func_mindustry_world_DirectionalItemBuffer_accepts_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_world_DirectionalItemBuffer_accept_int_mindustry_type_Item 12
typedef void (*func_mindustry_world_DirectionalItemBuffer_accept_int_mindustry_type_Item)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_mindustry_world_DirectionalItemBuffer_poll_int_float_R_mindustry_type_Item 13
typedef jobject (*func_mindustry_world_DirectionalItemBuffer_poll_int_float_R_mindustry_type_Item)(jcontext ctx, jobject self, jint param0, jfloat param1);
#define VTABLE_mindustry_world_DirectionalItemBuffer_remove_int 14
typedef void (*func_mindustry_world_DirectionalItemBuffer_remove_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_world_DirectionalItemBuffer_write_arc_util_io_Writes 15
typedef void (*func_mindustry_world_DirectionalItemBuffer_write_arc_util_io_Writes)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_DirectionalItemBuffer_read_arc_util_io_Reads 16
typedef void (*func_mindustry_world_DirectionalItemBuffer_read_arc_util_io_Reads)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_DirectionalItemBuffer_read_arc_util_io_Reads_boolean 17
typedef void (*func_mindustry_world_DirectionalItemBuffer_read_arc_util_io_Reads_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);

void mark_mindustry_world_DirectionalItemBuffer(jobject object, jint mark, jint depth);
void clinit_mindustry_world_DirectionalItemBuffer(jcontext ctx);
void init_mindustry_world_DirectionalItemBuffer_int(jcontext ctx, jobject self, jint param0);
jbool M_mindustry_world_DirectionalItemBuffer_accepts_int_R_boolean(jcontext ctx, jobject self, jint param0);
void M_mindustry_world_DirectionalItemBuffer_accept_int_mindustry_type_Item(jcontext ctx, jobject self, jint param0, jobject param1);
jobject M_mindustry_world_DirectionalItemBuffer_poll_int_float_R_mindustry_type_Item(jcontext ctx, jobject self, jint param0, jfloat param1);
void M_mindustry_world_DirectionalItemBuffer_remove_int(jcontext ctx, jobject self, jint param0);
void M_mindustry_world_DirectionalItemBuffer_write_arc_util_io_Writes(jcontext ctx, jobject self, jobject param0);
void M_mindustry_world_DirectionalItemBuffer_read_arc_util_io_Reads(jcontext ctx, jobject self, jobject param0);
void M_mindustry_world_DirectionalItemBuffer_read_arc_util_io_Reads_boolean(jcontext ctx, jobject self, jobject param0, jbool param1);

#ifdef __cplusplus
}
#endif

#endif
