#ifndef HEADER_arc_math_geom_Polygon
#define HEADER_arc_math_geom_Polygon

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "arc/math/geom/Shape2D.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_math_geom_Polygon {
	java_lang_Object parent;
	jref F_localVertices;
	jref F_worldVertices;
	jfloat F_x;
	jfloat F_y;
	jfloat F_originX;
	jfloat F_originY;
	jfloat F_rotation;
	jfloat F_scaleX;
	jfloat F_scaleY;
	jbool F_dirty;
	jref F_bounds;
} arc_math_geom_Polygon;

extern Class class_arc_math_geom_Polygon;


#define VTABLE_arc_math_geom_Polygon_hashCode_R_int 0
typedef jint (*func_arc_math_geom_Polygon_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Polygon_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_math_geom_Polygon_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Polygon_clone_R_java_lang_Object 2
typedef jobject (*func_arc_math_geom_Polygon_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Polygon_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_math_geom_Polygon_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Polygon_toString_R_java_lang_String 4
typedef jobject (*func_arc_math_geom_Polygon_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Polygon_finalize 5
typedef void (*func_arc_math_geom_Polygon_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Polygon_notify 6
typedef void (*func_arc_math_geom_Polygon_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Polygon_notifyAll 7
typedef void (*func_arc_math_geom_Polygon_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Polygon_wait 8
typedef void (*func_arc_math_geom_Polygon_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Polygon_wait_long 9
typedef void (*func_arc_math_geom_Polygon_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_math_geom_Polygon_wait_long_int 10
typedef void (*func_arc_math_geom_Polygon_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_math_geom_Polygon_contains_arc_math_geom_Vec2_R_boolean 11
typedef jbool (*func_arc_math_geom_Polygon_contains_arc_math_geom_Vec2_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Polygon_contains_float_float_R_boolean 12
typedef jbool (*func_arc_math_geom_Polygon_contains_float_float_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_math_geom_Polygon_getVertices_R_Array1_float 13
typedef jobject (*func_arc_math_geom_Polygon_getVertices_R_Array1_float)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Polygon_setVertices_Array1_float 14
typedef void (*func_arc_math_geom_Polygon_setVertices_Array1_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Polygon_getTransformedVertices_R_Array1_float 15
typedef jobject (*func_arc_math_geom_Polygon_getTransformedVertices_R_Array1_float)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Polygon_setOrigin_float_float 16
typedef void (*func_arc_math_geom_Polygon_setOrigin_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_math_geom_Polygon_setPosition_float_float 17
typedef void (*func_arc_math_geom_Polygon_setPosition_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_math_geom_Polygon_translate_float_float 18
typedef void (*func_arc_math_geom_Polygon_translate_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_math_geom_Polygon_rotate_float 19
typedef void (*func_arc_math_geom_Polygon_rotate_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_math_geom_Polygon_setScale_float_float 20
typedef void (*func_arc_math_geom_Polygon_setScale_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_math_geom_Polygon_scale_float 21
typedef void (*func_arc_math_geom_Polygon_scale_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_math_geom_Polygon_dirty 22
typedef void (*func_arc_math_geom_Polygon_dirty)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Polygon_area_R_float 23
typedef jfloat (*func_arc_math_geom_Polygon_area_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Polygon_getBoundingRectangle_R_arc_math_geom_Rect 24
typedef jobject (*func_arc_math_geom_Polygon_getBoundingRectangle_R_arc_math_geom_Rect)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Polygon_getX_R_float 25
typedef jfloat (*func_arc_math_geom_Polygon_getX_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Polygon_getY_R_float 26
typedef jfloat (*func_arc_math_geom_Polygon_getY_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Polygon_getOriginX_R_float 27
typedef jfloat (*func_arc_math_geom_Polygon_getOriginX_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Polygon_getOriginY_R_float 28
typedef jfloat (*func_arc_math_geom_Polygon_getOriginY_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Polygon_getRotation_R_float 29
typedef jfloat (*func_arc_math_geom_Polygon_getRotation_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Polygon_setRotation_float 30
typedef void (*func_arc_math_geom_Polygon_setRotation_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_math_geom_Polygon_getScaleX_R_float 31
typedef jfloat (*func_arc_math_geom_Polygon_getScaleX_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Polygon_getScaleY_R_float 32
typedef jfloat (*func_arc_math_geom_Polygon_getScaleY_R_float)(jcontext ctx, jobject self);

void mark_arc_math_geom_Polygon(jobject object, jint mark, jint depth);
void clinit_arc_math_geom_Polygon(jcontext ctx);
void init_arc_math_geom_Polygon(jcontext ctx, jobject self);
void init_arc_math_geom_Polygon_Array1_float(jcontext ctx, jobject self, jobject param0);
jobject M_arc_math_geom_Polygon_getVertices_R_Array1_float(jcontext ctx, jobject self);
void M_arc_math_geom_Polygon_setVertices_Array1_float(jcontext ctx, jobject self, jobject param0);
jobject M_arc_math_geom_Polygon_getTransformedVertices_R_Array1_float(jcontext ctx, jobject self);
void M_arc_math_geom_Polygon_setOrigin_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1);
void M_arc_math_geom_Polygon_setPosition_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1);
void M_arc_math_geom_Polygon_translate_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1);
void M_arc_math_geom_Polygon_rotate_float(jcontext ctx, jobject self, jfloat param0);
void M_arc_math_geom_Polygon_setScale_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1);
void M_arc_math_geom_Polygon_scale_float(jcontext ctx, jobject self, jfloat param0);
void M_arc_math_geom_Polygon_dirty(jcontext ctx, jobject self);
jfloat M_arc_math_geom_Polygon_area_R_float(jcontext ctx, jobject self);
jobject M_arc_math_geom_Polygon_getBoundingRectangle_R_arc_math_geom_Rect(jcontext ctx, jobject self);
jbool M_arc_math_geom_Polygon_contains_float_float_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1);
jbool M_arc_math_geom_Polygon_contains_arc_math_geom_Vec2_R_boolean(jcontext ctx, jobject self, jobject param0);
jfloat M_arc_math_geom_Polygon_getX_R_float(jcontext ctx, jobject self);
jfloat M_arc_math_geom_Polygon_getY_R_float(jcontext ctx, jobject self);
jfloat M_arc_math_geom_Polygon_getOriginX_R_float(jcontext ctx, jobject self);
jfloat M_arc_math_geom_Polygon_getOriginY_R_float(jcontext ctx, jobject self);
jfloat M_arc_math_geom_Polygon_getRotation_R_float(jcontext ctx, jobject self);
void M_arc_math_geom_Polygon_setRotation_float(jcontext ctx, jobject self, jfloat param0);
jfloat M_arc_math_geom_Polygon_getScaleX_R_float(jcontext ctx, jobject self);
jfloat M_arc_math_geom_Polygon_getScaleY_R_float(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
