#ifndef HEADER_arc_util_Scaling
#define HEADER_arc_util_Scaling

#include "Clearwing.h"
#include "java/lang/Enum.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_util_Scaling {
	java_lang_Enum parent;
} arc_util_Scaling;

extern Class class_arc_util_Scaling;

extern jobject SF_arc_util_Scaling_fit;
extern jobject SF_arc_util_Scaling_bounded;
extern jobject SF_arc_util_Scaling_fill;
extern jobject SF_arc_util_Scaling_fillX;
extern jobject SF_arc_util_Scaling_fillY;
extern jobject SF_arc_util_Scaling_stretch;
extern jobject SF_arc_util_Scaling_stretchX;
extern jobject SF_arc_util_Scaling_stretchY;
extern jobject SF_arc_util_Scaling_none;
extern jobject SF_arc_util_Scaling_temp;
extern jobject SF_arc_util_Scaling_$VALUES;

#define VTABLE_arc_util_Scaling_hashCode_R_int 0
typedef jint (*func_arc_util_Scaling_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Scaling_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_util_Scaling_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_Scaling_clone_R_java_lang_Object 2
typedef jobject (*func_arc_util_Scaling_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Scaling_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_util_Scaling_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Scaling_toString_R_java_lang_String 4
typedef jobject (*func_arc_util_Scaling_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Scaling_finalize 5
typedef void (*func_arc_util_Scaling_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Scaling_notify 6
typedef void (*func_arc_util_Scaling_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Scaling_notifyAll 7
typedef void (*func_arc_util_Scaling_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Scaling_wait 8
typedef void (*func_arc_util_Scaling_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Scaling_wait_long 9
typedef void (*func_arc_util_Scaling_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_util_Scaling_wait_long_int 10
typedef void (*func_arc_util_Scaling_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_util_Scaling_compareTo_java_lang_Object_R_int 11
typedef jint (*func_arc_util_Scaling_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_Scaling_compareTo_java_lang_Enum_R_int 12
typedef jint (*func_arc_util_Scaling_compareTo_java_lang_Enum_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_Scaling_name_R_java_lang_String 13
typedef jobject (*func_arc_util_Scaling_name_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Scaling_ordinal_R_int 14
typedef jint (*func_arc_util_Scaling_ordinal_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Scaling_getDeclaringClass_R_java_lang_Class 15
typedef jobject (*func_arc_util_Scaling_getDeclaringClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Scaling_apply_float_float_float_float_R_arc_math_geom_Vec2 16
typedef jobject (*func_arc_util_Scaling_apply_float_float_float_float_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);

void mark_arc_util_Scaling(jobject object, jint mark, jint depth);
void clinit_arc_util_Scaling(jcontext ctx);
jobject SM_arc_util_Scaling_values_R_Array1_arc_util_Scaling(jcontext ctx);
jobject SM_arc_util_Scaling_valueOf_java_lang_String_R_arc_util_Scaling(jcontext ctx, jobject param0);
void init_arc_util_Scaling_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1);
jobject M_arc_util_Scaling_apply_float_float_float_float_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
jobject SM_arc_util_Scaling_$values_R_Array1_arc_util_Scaling(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
