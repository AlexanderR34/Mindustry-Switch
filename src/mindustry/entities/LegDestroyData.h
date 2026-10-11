#ifndef HEADER_mindustry_entities_LegDestroyData
#define HEADER_mindustry_entities_LegDestroyData

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_entities_LegDestroyData {
	java_lang_Object parent;
	jref F_a;
	jref F_b;
	jref F_region;
} mindustry_entities_LegDestroyData;

extern Class class_mindustry_entities_LegDestroyData;


#define VTABLE_mindustry_entities_LegDestroyData_hashCode_R_int 0
typedef jint (*func_mindustry_entities_LegDestroyData_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_LegDestroyData_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_entities_LegDestroyData_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_LegDestroyData_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_entities_LegDestroyData_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_LegDestroyData_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_entities_LegDestroyData_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_LegDestroyData_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_entities_LegDestroyData_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_LegDestroyData_finalize 5
typedef void (*func_mindustry_entities_LegDestroyData_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_LegDestroyData_notify 6
typedef void (*func_mindustry_entities_LegDestroyData_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_LegDestroyData_notifyAll 7
typedef void (*func_mindustry_entities_LegDestroyData_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_LegDestroyData_wait 8
typedef void (*func_mindustry_entities_LegDestroyData_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_LegDestroyData_wait_long 9
typedef void (*func_mindustry_entities_LegDestroyData_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_entities_LegDestroyData_wait_long_int 10
typedef void (*func_mindustry_entities_LegDestroyData_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_mindustry_entities_LegDestroyData(jobject object, jint mark, jint depth);
void clinit_mindustry_entities_LegDestroyData(jcontext ctx);
void init_mindustry_entities_LegDestroyData_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_graphics_g2d_TextureRegion(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);

#ifdef __cplusplus
}
#endif

#endif
