#ifndef HEADER_arc_math_geom_Plane$PlaneSide
#define HEADER_arc_math_geom_Plane$PlaneSide

#include "Clearwing.h"
#include "java/lang/Enum.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_math_geom_Plane$PlaneSide {
	java_lang_Enum parent;
} arc_math_geom_Plane$PlaneSide;

extern Class class_arc_math_geom_Plane$PlaneSide;

extern jobject SF_arc_math_geom_Plane$PlaneSide_onPlane;
extern jobject SF_arc_math_geom_Plane$PlaneSide_back;
extern jobject SF_arc_math_geom_Plane$PlaneSide_front;
extern jobject SF_arc_math_geom_Plane$PlaneSide_$VALUES;

#define VTABLE_arc_math_geom_Plane$PlaneSide_hashCode_R_int 0
typedef jint (*func_arc_math_geom_Plane$PlaneSide_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Plane$PlaneSide_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_math_geom_Plane$PlaneSide_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Plane$PlaneSide_clone_R_java_lang_Object 2
typedef jobject (*func_arc_math_geom_Plane$PlaneSide_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Plane$PlaneSide_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_math_geom_Plane$PlaneSide_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Plane$PlaneSide_toString_R_java_lang_String 4
typedef jobject (*func_arc_math_geom_Plane$PlaneSide_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Plane$PlaneSide_finalize 5
typedef void (*func_arc_math_geom_Plane$PlaneSide_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Plane$PlaneSide_notify 6
typedef void (*func_arc_math_geom_Plane$PlaneSide_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Plane$PlaneSide_notifyAll 7
typedef void (*func_arc_math_geom_Plane$PlaneSide_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Plane$PlaneSide_wait 8
typedef void (*func_arc_math_geom_Plane$PlaneSide_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Plane$PlaneSide_wait_long 9
typedef void (*func_arc_math_geom_Plane$PlaneSide_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_math_geom_Plane$PlaneSide_wait_long_int 10
typedef void (*func_arc_math_geom_Plane$PlaneSide_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_math_geom_Plane$PlaneSide_compareTo_java_lang_Object_R_int 11
typedef jint (*func_arc_math_geom_Plane$PlaneSide_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Plane$PlaneSide_compareTo_java_lang_Enum_R_int 12
typedef jint (*func_arc_math_geom_Plane$PlaneSide_compareTo_java_lang_Enum_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Plane$PlaneSide_name_R_java_lang_String 13
typedef jobject (*func_arc_math_geom_Plane$PlaneSide_name_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Plane$PlaneSide_ordinal_R_int 14
typedef jint (*func_arc_math_geom_Plane$PlaneSide_ordinal_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Plane$PlaneSide_getDeclaringClass_R_java_lang_Class 15
typedef jobject (*func_arc_math_geom_Plane$PlaneSide_getDeclaringClass_R_java_lang_Class)(jcontext ctx, jobject self);

void mark_arc_math_geom_Plane$PlaneSide(jobject object, jint mark, jint depth);
void clinit_arc_math_geom_Plane$PlaneSide(jcontext ctx);
jobject SM_arc_math_geom_Plane$PlaneSide_values_R_Array1_arc_math_geom_Plane$PlaneSide(jcontext ctx);
jobject SM_arc_math_geom_Plane$PlaneSide_valueOf_java_lang_String_R_arc_math_geom_Plane$PlaneSide(jcontext ctx, jobject param0);
void init_arc_math_geom_Plane$PlaneSide_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1);
jobject SM_arc_math_geom_Plane$PlaneSide_$values_R_Array1_arc_math_geom_Plane$PlaneSide(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
