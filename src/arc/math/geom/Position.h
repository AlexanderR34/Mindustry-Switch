#ifndef HEADER_arc_math_geom_Position
#define HEADER_arc_math_geom_Position

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_math_geom_Position {
	java_lang_Object parent;
} arc_math_geom_Position;

extern Class class_arc_math_geom_Position;


#define INDEX_arc_math_geom_Position_getX_R_float 0
typedef jfloat (*func_arc_math_geom_Position_getX_R_float)(jcontext ctx, jobject self);
#define INDEX_arc_math_geom_Position_getY_R_float 1
typedef jfloat (*func_arc_math_geom_Position_getY_R_float)(jcontext ctx, jobject self);
#define INDEX_arc_math_geom_Position_angleTo_arc_math_geom_Position_R_float 2
typedef jfloat (*func_arc_math_geom_Position_angleTo_arc_math_geom_Position_R_float)(jcontext ctx, jobject self, jobject param0);
#define INDEX_arc_math_geom_Position_angleTo_float_float_R_float 3
typedef jfloat (*func_arc_math_geom_Position_angleTo_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define INDEX_arc_math_geom_Position_dst2_arc_math_geom_Position_R_float 4
typedef jfloat (*func_arc_math_geom_Position_dst2_arc_math_geom_Position_R_float)(jcontext ctx, jobject self, jobject param0);
#define INDEX_arc_math_geom_Position_dst_arc_math_geom_Position_R_float 5
typedef jfloat (*func_arc_math_geom_Position_dst_arc_math_geom_Position_R_float)(jcontext ctx, jobject self, jobject param0);
#define INDEX_arc_math_geom_Position_dst_float_float_R_float 6
typedef jfloat (*func_arc_math_geom_Position_dst_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define INDEX_arc_math_geom_Position_dst2_float_float_R_float 7
typedef jfloat (*func_arc_math_geom_Position_dst2_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define INDEX_arc_math_geom_Position_within_arc_math_geom_Position_float_R_boolean 8
typedef jbool (*func_arc_math_geom_Position_within_arc_math_geom_Position_float_R_boolean)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define INDEX_arc_math_geom_Position_within_float_float_float_R_boolean 9
typedef jbool (*func_arc_math_geom_Position_within_float_float_float_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);

void mark_arc_math_geom_Position(jobject object, jint mark, jint depth);
void clinit_arc_math_geom_Position(jcontext ctx);
jfloat M_arc_math_geom_Position_angleTo_arc_math_geom_Position_R_float(jcontext ctx, jobject self, jobject param0);
jfloat M_arc_math_geom_Position_angleTo_float_float_R_float(jcontext ctx, jobject self, jfloat param0, jfloat param1);
jfloat M_arc_math_geom_Position_dst2_arc_math_geom_Position_R_float(jcontext ctx, jobject self, jobject param0);
jfloat M_arc_math_geom_Position_dst_arc_math_geom_Position_R_float(jcontext ctx, jobject self, jobject param0);
jfloat M_arc_math_geom_Position_dst_float_float_R_float(jcontext ctx, jobject self, jfloat param0, jfloat param1);
jfloat M_arc_math_geom_Position_dst2_float_float_R_float(jcontext ctx, jobject self, jfloat param0, jfloat param1);
jbool M_arc_math_geom_Position_within_arc_math_geom_Position_float_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1);
jbool M_arc_math_geom_Position_within_float_float_float_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);

#ifdef __cplusplus
}
#endif

#endif
