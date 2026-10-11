#ifndef HEADER_arc_graphics_g2d_PixmapPacker$SkylineStrategy
#define HEADER_arc_graphics_g2d_PixmapPacker$SkylineStrategy

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "arc/graphics/g2d/PixmapPacker_PackStrategy.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_graphics_g2d_PixmapPacker$SkylineStrategy {
	java_lang_Object parent;
} arc_graphics_g2d_PixmapPacker$SkylineStrategy;

extern Class class_arc_graphics_g2d_PixmapPacker$SkylineStrategy;


#define VTABLE_arc_graphics_g2d_PixmapPacker$SkylineStrategy_hashCode_R_int 0
typedef jint (*func_arc_graphics_g2d_PixmapPacker$SkylineStrategy_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_PixmapPacker$SkylineStrategy_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_graphics_g2d_PixmapPacker$SkylineStrategy_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_g2d_PixmapPacker$SkylineStrategy_clone_R_java_lang_Object 2
typedef jobject (*func_arc_graphics_g2d_PixmapPacker$SkylineStrategy_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_PixmapPacker$SkylineStrategy_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_graphics_g2d_PixmapPacker$SkylineStrategy_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_PixmapPacker$SkylineStrategy_toString_R_java_lang_String 4
typedef jobject (*func_arc_graphics_g2d_PixmapPacker$SkylineStrategy_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_PixmapPacker$SkylineStrategy_finalize 5
typedef void (*func_arc_graphics_g2d_PixmapPacker$SkylineStrategy_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_PixmapPacker$SkylineStrategy_notify 6
typedef void (*func_arc_graphics_g2d_PixmapPacker$SkylineStrategy_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_PixmapPacker$SkylineStrategy_notifyAll 7
typedef void (*func_arc_graphics_g2d_PixmapPacker$SkylineStrategy_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_PixmapPacker$SkylineStrategy_wait 8
typedef void (*func_arc_graphics_g2d_PixmapPacker$SkylineStrategy_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_PixmapPacker$SkylineStrategy_wait_long 9
typedef void (*func_arc_graphics_g2d_PixmapPacker$SkylineStrategy_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_graphics_g2d_PixmapPacker$SkylineStrategy_wait_long_int 10
typedef void (*func_arc_graphics_g2d_PixmapPacker$SkylineStrategy_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_graphics_g2d_PixmapPacker$SkylineStrategy_sort_arc_struct_Seq 11
typedef void (*func_arc_graphics_g2d_PixmapPacker$SkylineStrategy_sort_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_g2d_PixmapPacker$SkylineStrategy_pack_arc_graphics_g2d_PixmapPacker_java_lang_String_arc_math_geom_Rect_R_arc_graphics_g2d_PixmapPacker$Page 12
typedef jobject (*func_arc_graphics_g2d_PixmapPacker$SkylineStrategy_pack_arc_graphics_g2d_PixmapPacker_java_lang_String_arc_math_geom_Rect_R_arc_graphics_g2d_PixmapPacker$Page)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);

void mark_arc_graphics_g2d_PixmapPacker$SkylineStrategy(jobject object, jint mark, jint depth);
void clinit_arc_graphics_g2d_PixmapPacker$SkylineStrategy(jcontext ctx);
void init_arc_graphics_g2d_PixmapPacker$SkylineStrategy(jcontext ctx, jobject self);
void M_arc_graphics_g2d_PixmapPacker$SkylineStrategy_sort_arc_struct_Seq(jcontext ctx, jobject self, jobject param0);
jobject M_arc_graphics_g2d_PixmapPacker$SkylineStrategy_pack_arc_graphics_g2d_PixmapPacker_java_lang_String_arc_math_geom_Rect_R_arc_graphics_g2d_PixmapPacker$Page(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
jint SM_arc_graphics_g2d_PixmapPacker$SkylineStrategy_lambda$sort$0_arc_graphics_g2d_PixmapRegion_arc_graphics_g2d_PixmapRegion_R_int(jcontext ctx, jobject param0, jobject param1);

#ifdef __cplusplus
}
#endif

#endif
