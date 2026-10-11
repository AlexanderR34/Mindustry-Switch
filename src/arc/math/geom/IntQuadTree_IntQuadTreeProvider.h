#ifndef HEADER_arc_math_geom_IntQuadTree$IntQuadTreeProvider
#define HEADER_arc_math_geom_IntQuadTree$IntQuadTreeProvider

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_math_geom_IntQuadTree$IntQuadTreeProvider {
	java_lang_Object parent;
} arc_math_geom_IntQuadTree$IntQuadTreeProvider;

extern Class class_arc_math_geom_IntQuadTree$IntQuadTreeProvider;


#define INDEX_arc_math_geom_IntQuadTree$IntQuadTreeProvider_hitbox_int_arc_math_geom_Rect 0
typedef void (*func_arc_math_geom_IntQuadTree$IntQuadTreeProvider_hitbox_int_arc_math_geom_Rect)(jcontext ctx, jobject self, jint param0, jobject param1);

void mark_arc_math_geom_IntQuadTree$IntQuadTreeProvider(jobject object, jint mark, jint depth);
void clinit_arc_math_geom_IntQuadTree$IntQuadTreeProvider(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
