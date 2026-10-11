#ifndef HEADER_mindustry_world_DirectionalItemBuffer$BufferItemStruct
#define HEADER_mindustry_world_DirectionalItemBuffer$BufferItemStruct

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_world_DirectionalItemBuffer$BufferItemStruct {
	java_lang_Object parent;
	jshort F_item;
	jfloat F_time;
	jref F_this$0;
} mindustry_world_DirectionalItemBuffer$BufferItemStruct;

extern Class class_mindustry_world_DirectionalItemBuffer$BufferItemStruct;


#define VTABLE_mindustry_world_DirectionalItemBuffer$BufferItemStruct_hashCode_R_int 0
typedef jint (*func_mindustry_world_DirectionalItemBuffer$BufferItemStruct_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_DirectionalItemBuffer$BufferItemStruct_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_world_DirectionalItemBuffer$BufferItemStruct_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_DirectionalItemBuffer$BufferItemStruct_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_world_DirectionalItemBuffer$BufferItemStruct_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_DirectionalItemBuffer$BufferItemStruct_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_world_DirectionalItemBuffer$BufferItemStruct_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_DirectionalItemBuffer$BufferItemStruct_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_world_DirectionalItemBuffer$BufferItemStruct_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_DirectionalItemBuffer$BufferItemStruct_finalize 5
typedef void (*func_mindustry_world_DirectionalItemBuffer$BufferItemStruct_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_DirectionalItemBuffer$BufferItemStruct_notify 6
typedef void (*func_mindustry_world_DirectionalItemBuffer$BufferItemStruct_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_DirectionalItemBuffer$BufferItemStruct_notifyAll 7
typedef void (*func_mindustry_world_DirectionalItemBuffer$BufferItemStruct_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_DirectionalItemBuffer$BufferItemStruct_wait 8
typedef void (*func_mindustry_world_DirectionalItemBuffer$BufferItemStruct_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_DirectionalItemBuffer$BufferItemStruct_wait_long 9
typedef void (*func_mindustry_world_DirectionalItemBuffer$BufferItemStruct_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_world_DirectionalItemBuffer$BufferItemStruct_wait_long_int 10
typedef void (*func_mindustry_world_DirectionalItemBuffer$BufferItemStruct_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_mindustry_world_DirectionalItemBuffer$BufferItemStruct(jobject object, jint mark, jint depth);
void clinit_mindustry_world_DirectionalItemBuffer$BufferItemStruct(jcontext ctx);
void init_mindustry_world_DirectionalItemBuffer$BufferItemStruct_mindustry_world_DirectionalItemBuffer(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
