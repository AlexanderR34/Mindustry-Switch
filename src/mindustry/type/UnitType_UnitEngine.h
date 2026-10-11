#ifndef HEADER_mindustry_type_UnitType$UnitEngine
#define HEADER_mindustry_type_UnitType$UnitEngine

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/lang/Cloneable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_type_UnitType$UnitEngine {
	java_lang_Object parent;
	jfloat F_x;
	jfloat F_y;
	jfloat F_radius;
	jfloat F_rotation;
	jref F_color;
} mindustry_type_UnitType$UnitEngine;

extern Class class_mindustry_type_UnitType$UnitEngine;


#define VTABLE_mindustry_type_UnitType$UnitEngine_hashCode_R_int 0
typedef jint (*func_mindustry_type_UnitType$UnitEngine_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_UnitType$UnitEngine_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_type_UnitType$UnitEngine_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_UnitType$UnitEngine_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_type_UnitType$UnitEngine_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_UnitType$UnitEngine_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_type_UnitType$UnitEngine_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_UnitType$UnitEngine_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_type_UnitType$UnitEngine_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_UnitType$UnitEngine_finalize 5
typedef void (*func_mindustry_type_UnitType$UnitEngine_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_UnitType$UnitEngine_notify 6
typedef void (*func_mindustry_type_UnitType$UnitEngine_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_UnitType$UnitEngine_notifyAll 7
typedef void (*func_mindustry_type_UnitType$UnitEngine_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_UnitType$UnitEngine_wait 8
typedef void (*func_mindustry_type_UnitType$UnitEngine_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_UnitType$UnitEngine_wait_long 9
typedef void (*func_mindustry_type_UnitType$UnitEngine_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_type_UnitType$UnitEngine_wait_long_int 10
typedef void (*func_mindustry_type_UnitType$UnitEngine_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_type_UnitType$UnitEngine_draw_mindustry_gen_Unit 11
typedef void (*func_mindustry_type_UnitType$UnitEngine_draw_mindustry_gen_Unit)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_UnitType$UnitEngine_copy_R_mindustry_type_UnitType$UnitEngine 12
typedef jobject (*func_mindustry_type_UnitType$UnitEngine_copy_R_mindustry_type_UnitType$UnitEngine)(jcontext ctx, jobject self);

void mark_mindustry_type_UnitType$UnitEngine(jobject object, jint mark, jint depth);
void clinit_mindustry_type_UnitType$UnitEngine(jcontext ctx);
void init_mindustry_type_UnitType$UnitEngine_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
void init_mindustry_type_UnitType$UnitEngine(jcontext ctx, jobject self);
void M_mindustry_type_UnitType$UnitEngine_draw_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_type_UnitType$UnitEngine_copy_R_mindustry_type_UnitType$UnitEngine(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
