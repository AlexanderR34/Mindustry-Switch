#ifndef HEADER_mindustry_graphics_Lod
#define HEADER_mindustry_graphics_Lod

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_graphics_Lod {
	java_lang_Object parent;
} mindustry_graphics_Lod;

extern Class class_mindustry_graphics_Lod;

extern jfloat SF_mindustry_graphics_Lod_threshold1;
extern jfloat SF_mindustry_graphics_Lod_threshold2;
extern jfloat SF_mindustry_graphics_Lod_fade;
extern jbool SF_mindustry_graphics_Lod_disable;
extern jbool SF_mindustry_graphics_Lod_l1;
extern jfloat SF_mindustry_graphics_Lod_alpha1;
extern jbool SF_mindustry_graphics_Lod_l2;
extern jfloat SF_mindustry_graphics_Lod_alpha2;

#define VTABLE_mindustry_graphics_Lod_hashCode_R_int 0
typedef jint (*func_mindustry_graphics_Lod_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_Lod_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_graphics_Lod_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_graphics_Lod_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_graphics_Lod_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_Lod_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_graphics_Lod_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_Lod_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_graphics_Lod_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_Lod_finalize 5
typedef void (*func_mindustry_graphics_Lod_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_Lod_notify 6
typedef void (*func_mindustry_graphics_Lod_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_Lod_notifyAll 7
typedef void (*func_mindustry_graphics_Lod_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_Lod_wait 8
typedef void (*func_mindustry_graphics_Lod_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_Lod_wait_long 9
typedef void (*func_mindustry_graphics_Lod_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_graphics_Lod_wait_long_int 10
typedef void (*func_mindustry_graphics_Lod_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_mindustry_graphics_Lod(jobject object, jint mark, jint depth);
void clinit_mindustry_graphics_Lod(jcontext ctx);
void init_mindustry_graphics_Lod(jcontext ctx, jobject self);
void SM_mindustry_graphics_Lod_update(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
