#ifndef HEADER_arc_math_geom_Path
#define HEADER_arc_math_geom_Path

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_math_geom_Path {
	java_lang_Object parent;
} arc_math_geom_Path;

extern Class class_arc_math_geom_Path;


#define INDEX_arc_math_geom_Path_derivativeAt_java_lang_Object_float_R_java_lang_Object 0
typedef jobject (*func_arc_math_geom_Path_derivativeAt_java_lang_Object_float_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define INDEX_arc_math_geom_Path_valueAt_java_lang_Object_float_R_java_lang_Object 1
typedef jobject (*func_arc_math_geom_Path_valueAt_java_lang_Object_float_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define INDEX_arc_math_geom_Path_approximate_java_lang_Object_R_float 2
typedef jfloat (*func_arc_math_geom_Path_approximate_java_lang_Object_R_float)(jcontext ctx, jobject self, jobject param0);
#define INDEX_arc_math_geom_Path_locate_java_lang_Object_R_float 3
typedef jfloat (*func_arc_math_geom_Path_locate_java_lang_Object_R_float)(jcontext ctx, jobject self, jobject param0);
#define INDEX_arc_math_geom_Path_approxLength_int_R_float 4
typedef jfloat (*func_arc_math_geom_Path_approxLength_int_R_float)(jcontext ctx, jobject self, jint param0);

void mark_arc_math_geom_Path(jobject object, jint mark, jint depth);
void clinit_arc_math_geom_Path(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
