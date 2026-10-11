#ifndef HEADER_arc_math_geom_Geometry$Raycaster
#define HEADER_arc_math_geom_Geometry$Raycaster

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_math_geom_Geometry$Raycaster {
	java_lang_Object parent;
} arc_math_geom_Geometry$Raycaster;

extern Class class_arc_math_geom_Geometry$Raycaster;


#define INDEX_arc_math_geom_Geometry$Raycaster_accept_int_int_R_boolean 0
typedef jbool (*func_arc_math_geom_Geometry$Raycaster_accept_int_int_R_boolean)(jcontext ctx, jobject self, jint param0, jint param1);

void mark_arc_math_geom_Geometry$Raycaster(jobject object, jint mark, jint depth);
void clinit_arc_math_geom_Geometry$Raycaster(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
