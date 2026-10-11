#ifndef HEADER_arc_math_geom_Intersector3D$SplitTriangle
#define HEADER_arc_math_geom_Intersector3D$SplitTriangle

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_math_geom_Intersector3D$SplitTriangle {
	java_lang_Object parent;
	jref F_front;
	jref F_back;
	jint F_numFront;
	jint F_numBack;
	jint F_total;
	jref F_edgeSplit;
	jbool F_frontCurrent;
	jint F_frontOffset;
	jint F_backOffset;
} arc_math_geom_Intersector3D$SplitTriangle;

extern Class class_arc_math_geom_Intersector3D$SplitTriangle;


#define VTABLE_arc_math_geom_Intersector3D$SplitTriangle_hashCode_R_int 0
typedef jint (*func_arc_math_geom_Intersector3D$SplitTriangle_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Intersector3D$SplitTriangle_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_math_geom_Intersector3D$SplitTriangle_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Intersector3D$SplitTriangle_clone_R_java_lang_Object 2
typedef jobject (*func_arc_math_geom_Intersector3D$SplitTriangle_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Intersector3D$SplitTriangle_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_math_geom_Intersector3D$SplitTriangle_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Intersector3D$SplitTriangle_toString_R_java_lang_String 4
typedef jobject (*func_arc_math_geom_Intersector3D$SplitTriangle_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Intersector3D$SplitTriangle_finalize 5
typedef void (*func_arc_math_geom_Intersector3D$SplitTriangle_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Intersector3D$SplitTriangle_notify 6
typedef void (*func_arc_math_geom_Intersector3D$SplitTriangle_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Intersector3D$SplitTriangle_notifyAll 7
typedef void (*func_arc_math_geom_Intersector3D$SplitTriangle_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Intersector3D$SplitTriangle_wait 8
typedef void (*func_arc_math_geom_Intersector3D$SplitTriangle_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Intersector3D$SplitTriangle_wait_long 9
typedef void (*func_arc_math_geom_Intersector3D$SplitTriangle_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_math_geom_Intersector3D$SplitTriangle_wait_long_int 10
typedef void (*func_arc_math_geom_Intersector3D$SplitTriangle_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_math_geom_Intersector3D$SplitTriangle_getSide_R_boolean 11
typedef jbool (*func_arc_math_geom_Intersector3D$SplitTriangle_getSide_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Intersector3D$SplitTriangle_setSide_boolean 12
typedef void (*func_arc_math_geom_Intersector3D$SplitTriangle_setSide_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_arc_math_geom_Intersector3D$SplitTriangle_add_Array1_float_int_int 13
typedef void (*func_arc_math_geom_Intersector3D$SplitTriangle_add_Array1_float_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_arc_math_geom_Intersector3D$SplitTriangle_reset 14
typedef void (*func_arc_math_geom_Intersector3D$SplitTriangle_reset)(jcontext ctx, jobject self);

void mark_arc_math_geom_Intersector3D$SplitTriangle(jobject object, jint mark, jint depth);
void clinit_arc_math_geom_Intersector3D$SplitTriangle(jcontext ctx);
void init_arc_math_geom_Intersector3D$SplitTriangle_int(jcontext ctx, jobject self, jint param0);
jobject M_arc_math_geom_Intersector3D$SplitTriangle_toString_R_java_lang_String(jcontext ctx, jobject self);
jbool M_arc_math_geom_Intersector3D$SplitTriangle_getSide_R_boolean(jcontext ctx, jobject self);
void M_arc_math_geom_Intersector3D$SplitTriangle_setSide_boolean(jcontext ctx, jobject self, jbool param0);
void M_arc_math_geom_Intersector3D$SplitTriangle_add_Array1_float_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
void M_arc_math_geom_Intersector3D$SplitTriangle_reset(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
