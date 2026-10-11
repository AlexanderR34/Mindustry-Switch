#ifndef HEADER_arc_math_geom_Shape2D
#define HEADER_arc_math_geom_Shape2D

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_math_geom_Shape2D {
	java_lang_Object parent;
} arc_math_geom_Shape2D;

extern Class class_arc_math_geom_Shape2D;


#define INDEX_arc_math_geom_Shape2D_contains_arc_math_geom_Vec2_R_boolean 0
typedef jbool (*func_arc_math_geom_Shape2D_contains_arc_math_geom_Vec2_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define INDEX_arc_math_geom_Shape2D_contains_float_float_R_boolean 1
typedef jbool (*func_arc_math_geom_Shape2D_contains_float_float_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1);

void mark_arc_math_geom_Shape2D(jobject object, jint mark, jint depth);
void clinit_arc_math_geom_Shape2D(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
