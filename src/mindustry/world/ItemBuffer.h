#ifndef HEADER_mindustry_world_ItemBuffer
#define HEADER_mindustry_world_ItemBuffer

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_world_ItemBuffer {
	java_lang_Object parent;
	jref F_buffer;
	jint F_index;
} mindustry_world_ItemBuffer;

extern Class class_mindustry_world_ItemBuffer;


#define VTABLE_mindustry_world_ItemBuffer_hashCode_R_int 0
typedef jint (*func_mindustry_world_ItemBuffer_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_ItemBuffer_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_world_ItemBuffer_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_ItemBuffer_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_world_ItemBuffer_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_ItemBuffer_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_world_ItemBuffer_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_ItemBuffer_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_world_ItemBuffer_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_ItemBuffer_finalize 5
typedef void (*func_mindustry_world_ItemBuffer_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_ItemBuffer_notify 6
typedef void (*func_mindustry_world_ItemBuffer_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_ItemBuffer_notifyAll 7
typedef void (*func_mindustry_world_ItemBuffer_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_ItemBuffer_wait 8
typedef void (*func_mindustry_world_ItemBuffer_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_ItemBuffer_wait_long 9
typedef void (*func_mindustry_world_ItemBuffer_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_world_ItemBuffer_wait_long_int 10
typedef void (*func_mindustry_world_ItemBuffer_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_world_ItemBuffer_accepts_R_boolean 11
typedef jbool (*func_mindustry_world_ItemBuffer_accepts_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_ItemBuffer_accept_mindustry_type_Item_short 12
typedef void (*func_mindustry_world_ItemBuffer_accept_mindustry_type_Item_short)(jcontext ctx, jobject self, jobject param0, jshort param1);
#define VTABLE_mindustry_world_ItemBuffer_accept_mindustry_type_Item 13
typedef void (*func_mindustry_world_ItemBuffer_accept_mindustry_type_Item)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_ItemBuffer_poll_float_R_mindustry_type_Item 14
typedef jobject (*func_mindustry_world_ItemBuffer_poll_float_R_mindustry_type_Item)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_world_ItemBuffer_remove 15
typedef void (*func_mindustry_world_ItemBuffer_remove)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_ItemBuffer_write_arc_util_io_Writes 16
typedef void (*func_mindustry_world_ItemBuffer_write_arc_util_io_Writes)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_ItemBuffer_read_arc_util_io_Reads 17
typedef void (*func_mindustry_world_ItemBuffer_read_arc_util_io_Reads)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_world_ItemBuffer(jobject object, jint mark, jint depth);
void clinit_mindustry_world_ItemBuffer(jcontext ctx);
void init_mindustry_world_ItemBuffer_int(jcontext ctx, jobject self, jint param0);
jbool M_mindustry_world_ItemBuffer_accepts_R_boolean(jcontext ctx, jobject self);
void M_mindustry_world_ItemBuffer_accept_mindustry_type_Item_short(jcontext ctx, jobject self, jobject param0, jshort param1);
void M_mindustry_world_ItemBuffer_accept_mindustry_type_Item(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_world_ItemBuffer_poll_float_R_mindustry_type_Item(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_world_ItemBuffer_remove(jcontext ctx, jobject self);
void M_mindustry_world_ItemBuffer_write_arc_util_io_Writes(jcontext ctx, jobject self, jobject param0);
void M_mindustry_world_ItemBuffer_read_arc_util_io_Reads(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
