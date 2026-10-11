#ifndef HEADER_mindustry_world_ColorMapper
#define HEADER_mindustry_world_ColorMapper

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_world_ColorMapper {
	java_lang_Object parent;
} mindustry_world_ColorMapper;

extern Class class_mindustry_world_ColorMapper;

extern jobject SF_mindustry_world_ColorMapper_color2block;

#define VTABLE_mindustry_world_ColorMapper_hashCode_R_int 0
typedef jint (*func_mindustry_world_ColorMapper_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_ColorMapper_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_world_ColorMapper_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_ColorMapper_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_world_ColorMapper_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_ColorMapper_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_world_ColorMapper_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_ColorMapper_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_world_ColorMapper_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_ColorMapper_finalize 5
typedef void (*func_mindustry_world_ColorMapper_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_ColorMapper_notify 6
typedef void (*func_mindustry_world_ColorMapper_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_ColorMapper_notifyAll 7
typedef void (*func_mindustry_world_ColorMapper_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_ColorMapper_wait 8
typedef void (*func_mindustry_world_ColorMapper_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_ColorMapper_wait_long 9
typedef void (*func_mindustry_world_ColorMapper_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_world_ColorMapper_wait_long_int 10
typedef void (*func_mindustry_world_ColorMapper_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_mindustry_world_ColorMapper(jobject object, jint mark, jint depth);
void clinit_mindustry_world_ColorMapper(jcontext ctx);
void init_mindustry_world_ColorMapper(jcontext ctx, jobject self);
jobject SM_mindustry_world_ColorMapper_get_int_R_mindustry_world_Block(jcontext ctx, jint param0);
void SM_mindustry_world_ColorMapper_load(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
