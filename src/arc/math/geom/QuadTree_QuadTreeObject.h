#ifndef HEADER_arc_math_geom_QuadTree$QuadTreeObject
#define HEADER_arc_math_geom_QuadTree$QuadTreeObject

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_math_geom_QuadTree$QuadTreeObject {
	java_lang_Object parent;
} arc_math_geom_QuadTree$QuadTreeObject;

extern Class class_arc_math_geom_QuadTree$QuadTreeObject;


#define INDEX_arc_math_geom_QuadTree$QuadTreeObject_hitbox_arc_math_geom_Rect 0
typedef void (*func_arc_math_geom_QuadTree$QuadTreeObject_hitbox_arc_math_geom_Rect)(jcontext ctx, jobject self, jobject param0);

void mark_arc_math_geom_QuadTree$QuadTreeObject(jobject object, jint mark, jint depth);
void clinit_arc_math_geom_QuadTree$QuadTreeObject(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
