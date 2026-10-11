#ifndef HEADER_arc_math_geom_Geometry$SolidChecker
#define HEADER_arc_math_geom_Geometry$SolidChecker

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_math_geom_Geometry$SolidChecker {
	java_lang_Object parent;
} arc_math_geom_Geometry$SolidChecker;

extern Class class_arc_math_geom_Geometry$SolidChecker;


#define INDEX_arc_math_geom_Geometry$SolidChecker_solid_float_int_int_R_boolean 0
typedef jbool (*func_arc_math_geom_Geometry$SolidChecker_solid_float_int_int_R_boolean)(jcontext ctx, jobject self, jfloat param0, jint param1, jint param2);

void mark_arc_math_geom_Geometry$SolidChecker(jobject object, jint mark, jint depth);
void clinit_arc_math_geom_Geometry$SolidChecker(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
