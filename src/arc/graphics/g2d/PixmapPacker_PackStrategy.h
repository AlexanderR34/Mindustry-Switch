#ifndef HEADER_arc_graphics_g2d_PixmapPacker$PackStrategy
#define HEADER_arc_graphics_g2d_PixmapPacker$PackStrategy

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_graphics_g2d_PixmapPacker$PackStrategy {
	java_lang_Object parent;
} arc_graphics_g2d_PixmapPacker$PackStrategy;

extern Class class_arc_graphics_g2d_PixmapPacker$PackStrategy;


#define INDEX_arc_graphics_g2d_PixmapPacker$PackStrategy_sort_arc_struct_Seq 0
typedef void (*func_arc_graphics_g2d_PixmapPacker$PackStrategy_sort_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0);
#define INDEX_arc_graphics_g2d_PixmapPacker$PackStrategy_pack_arc_graphics_g2d_PixmapPacker_java_lang_String_arc_math_geom_Rect_R_arc_graphics_g2d_PixmapPacker$Page 1
typedef jobject (*func_arc_graphics_g2d_PixmapPacker$PackStrategy_pack_arc_graphics_g2d_PixmapPacker_java_lang_String_arc_math_geom_Rect_R_arc_graphics_g2d_PixmapPacker$Page)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);

void mark_arc_graphics_g2d_PixmapPacker$PackStrategy(jobject object, jint mark, jint depth);
void clinit_arc_graphics_g2d_PixmapPacker$PackStrategy(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
