#ifndef HEADER_arc_graphics_g2d_PixmapRegion
#define HEADER_arc_graphics_g2d_PixmapRegion

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_graphics_g2d_PixmapRegion {
	java_lang_Object parent;
	jref F_pixmap;
	jint F_x;
	jint F_y;
	jint F_width;
	jint F_height;
} arc_graphics_g2d_PixmapRegion;

extern Class class_arc_graphics_g2d_PixmapRegion;


#define VTABLE_arc_graphics_g2d_PixmapRegion_hashCode_R_int 0
typedef jint (*func_arc_graphics_g2d_PixmapRegion_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_PixmapRegion_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_graphics_g2d_PixmapRegion_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_g2d_PixmapRegion_clone_R_java_lang_Object 2
typedef jobject (*func_arc_graphics_g2d_PixmapRegion_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_PixmapRegion_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_graphics_g2d_PixmapRegion_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_PixmapRegion_toString_R_java_lang_String 4
typedef jobject (*func_arc_graphics_g2d_PixmapRegion_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_PixmapRegion_finalize 5
typedef void (*func_arc_graphics_g2d_PixmapRegion_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_PixmapRegion_notify 6
typedef void (*func_arc_graphics_g2d_PixmapRegion_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_PixmapRegion_notifyAll 7
typedef void (*func_arc_graphics_g2d_PixmapRegion_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_PixmapRegion_wait 8
typedef void (*func_arc_graphics_g2d_PixmapRegion_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_PixmapRegion_wait_long 9
typedef void (*func_arc_graphics_g2d_PixmapRegion_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_graphics_g2d_PixmapRegion_wait_long_int 10
typedef void (*func_arc_graphics_g2d_PixmapRegion_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_graphics_g2d_PixmapRegion_get_int_int_R_int 11
typedef jint (*func_arc_graphics_g2d_PixmapRegion_get_int_int_R_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_arc_graphics_g2d_PixmapRegion_getRaw_int_int_R_int 12
typedef jint (*func_arc_graphics_g2d_PixmapRegion_getRaw_int_int_R_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_arc_graphics_g2d_PixmapRegion_getA_int_int_R_int 13
typedef jint (*func_arc_graphics_g2d_PixmapRegion_getA_int_int_R_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_arc_graphics_g2d_PixmapRegion_get_int_int_arc_graphics_Color_R_int 14
typedef jint (*func_arc_graphics_g2d_PixmapRegion_get_int_int_arc_graphics_Color_R_int)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
#define VTABLE_arc_graphics_g2d_PixmapRegion_set_arc_graphics_Pixmap_R_arc_graphics_g2d_PixmapRegion 15
typedef jobject (*func_arc_graphics_g2d_PixmapRegion_set_arc_graphics_Pixmap_R_arc_graphics_g2d_PixmapRegion)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_g2d_PixmapRegion_set_arc_graphics_Pixmap_int_int_int_int_R_arc_graphics_g2d_PixmapRegion 16
typedef jobject (*func_arc_graphics_g2d_PixmapRegion_set_arc_graphics_Pixmap_int_int_int_int_R_arc_graphics_g2d_PixmapRegion)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4);
#define VTABLE_arc_graphics_g2d_PixmapRegion_crop_R_arc_graphics_Pixmap 17
typedef jobject (*func_arc_graphics_g2d_PixmapRegion_crop_R_arc_graphics_Pixmap)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_PixmapRegion_crop_int_int_int_int_R_arc_graphics_Pixmap 18
typedef jobject (*func_arc_graphics_g2d_PixmapRegion_crop_int_int_int_int_R_arc_graphics_Pixmap)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);

void mark_arc_graphics_g2d_PixmapRegion(jobject object, jint mark, jint depth);
void clinit_arc_graphics_g2d_PixmapRegion(jcontext ctx);
void init_arc_graphics_g2d_PixmapRegion_arc_graphics_Pixmap_int_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4);
void init_arc_graphics_g2d_PixmapRegion_arc_graphics_Pixmap(jcontext ctx, jobject self, jobject param0);
jint M_arc_graphics_g2d_PixmapRegion_get_int_int_R_int(jcontext ctx, jobject self, jint param0, jint param1);
jint M_arc_graphics_g2d_PixmapRegion_getRaw_int_int_R_int(jcontext ctx, jobject self, jint param0, jint param1);
jint M_arc_graphics_g2d_PixmapRegion_getA_int_int_R_int(jcontext ctx, jobject self, jint param0, jint param1);
jint M_arc_graphics_g2d_PixmapRegion_get_int_int_arc_graphics_Color_R_int(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
jobject M_arc_graphics_g2d_PixmapRegion_set_arc_graphics_Pixmap_R_arc_graphics_g2d_PixmapRegion(jcontext ctx, jobject self, jobject param0);
jobject M_arc_graphics_g2d_PixmapRegion_set_arc_graphics_Pixmap_int_int_int_int_R_arc_graphics_g2d_PixmapRegion(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4);
jobject M_arc_graphics_g2d_PixmapRegion_crop_R_arc_graphics_Pixmap(jcontext ctx, jobject self);
jobject M_arc_graphics_g2d_PixmapRegion_crop_int_int_int_int_R_arc_graphics_Pixmap(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);

#ifdef __cplusplus
}
#endif

#endif
