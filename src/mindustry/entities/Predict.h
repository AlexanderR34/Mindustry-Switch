#ifndef HEADER_mindustry_entities_Predict
#define HEADER_mindustry_entities_Predict

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_entities_Predict {
	java_lang_Object parent;
} mindustry_entities_Predict;

extern Class class_mindustry_entities_Predict;

extern jobject SF_mindustry_entities_Predict_vec;
extern jobject SF_mindustry_entities_Predict_vresult;

#define VTABLE_mindustry_entities_Predict_hashCode_R_int 0
typedef jint (*func_mindustry_entities_Predict_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_Predict_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_entities_Predict_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_Predict_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_entities_Predict_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_Predict_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_entities_Predict_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_Predict_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_entities_Predict_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_Predict_finalize 5
typedef void (*func_mindustry_entities_Predict_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_Predict_notify 6
typedef void (*func_mindustry_entities_Predict_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_Predict_notifyAll 7
typedef void (*func_mindustry_entities_Predict_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_Predict_wait 8
typedef void (*func_mindustry_entities_Predict_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_Predict_wait_long 9
typedef void (*func_mindustry_entities_Predict_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_entities_Predict_wait_long_int 10
typedef void (*func_mindustry_entities_Predict_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_mindustry_entities_Predict(jobject object, jint mark, jint depth);
void clinit_mindustry_entities_Predict(jcontext ctx);
void init_mindustry_entities_Predict(jcontext ctx, jobject self);
jobject SM_mindustry_entities_Predict_intercept_float_float_float_float_float_float_float_R_arc_math_geom_Vec2(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6);
jobject SM_mindustry_entities_Predict_intercept_arc_math_geom_Position_arc_math_geom_Position_float_R_arc_math_geom_Vec2(jcontext ctx, jobject param0, jobject param1, jfloat param2);
jobject SM_mindustry_entities_Predict_intercept_arc_math_geom_Position_arc_math_geom_Position_mindustry_entities_bullet_BulletType_R_arc_math_geom_Vec2(jcontext ctx, jobject param0, jobject param1, jobject param2);
jobject SM_mindustry_entities_Predict_intercept_arc_math_geom_Position_arc_math_geom_Position_float_float_float_R_arc_math_geom_Vec2(jcontext ctx, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4);
jobject SM_mindustry_entities_Predict_intercept_arc_math_geom_Position_arc_math_geom_Position_float_float_boolean_float_R_arc_math_geom_Vec2(jcontext ctx, jobject param0, jobject param1, jfloat param2, jfloat param3, jbool param4, jfloat param5);
jobject SM_mindustry_entities_Predict_intercept_mindustry_gen_Hitboxc_mindustry_gen_Hitboxc_float_R_arc_math_geom_Vec2(jcontext ctx, jobject param0, jobject param1, jfloat param2);
jobject SM_mindustry_entities_Predict_quad_float_float_float_R_arc_math_geom_Vec2(jcontext ctx, jfloat param0, jfloat param1, jfloat param2);

#ifdef __cplusplus
}
#endif

#endif
