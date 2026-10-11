#ifndef HEADER_arc_freetype_FreeType$Bitmap
#define HEADER_arc_freetype_FreeType$Bitmap

#include "Clearwing.h"
#include "arc/freetype/FreeType_Pointer.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_freetype_FreeType$Bitmap {
	arc_freetype_FreeType$Pointer parent;
} arc_freetype_FreeType$Bitmap;

extern Class class_arc_freetype_FreeType$Bitmap;


#define VTABLE_arc_freetype_FreeType$Bitmap_hashCode_R_int 0
typedef jint (*func_arc_freetype_FreeType$Bitmap_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeType$Bitmap_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_freetype_FreeType$Bitmap_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_freetype_FreeType$Bitmap_clone_R_java_lang_Object 2
typedef jobject (*func_arc_freetype_FreeType$Bitmap_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeType$Bitmap_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_freetype_FreeType$Bitmap_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeType$Bitmap_toString_R_java_lang_String 4
typedef jobject (*func_arc_freetype_FreeType$Bitmap_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeType$Bitmap_finalize 5
typedef void (*func_arc_freetype_FreeType$Bitmap_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeType$Bitmap_notify 6
typedef void (*func_arc_freetype_FreeType$Bitmap_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeType$Bitmap_notifyAll 7
typedef void (*func_arc_freetype_FreeType$Bitmap_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeType$Bitmap_wait 8
typedef void (*func_arc_freetype_FreeType$Bitmap_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeType$Bitmap_wait_long 9
typedef void (*func_arc_freetype_FreeType$Bitmap_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_freetype_FreeType$Bitmap_wait_long_int 10
typedef void (*func_arc_freetype_FreeType$Bitmap_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_freetype_FreeType$Bitmap_getRows_R_int 11
typedef jint (*func_arc_freetype_FreeType$Bitmap_getRows_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeType$Bitmap_getWidth_R_int 12
typedef jint (*func_arc_freetype_FreeType$Bitmap_getWidth_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeType$Bitmap_getPitch_R_int 13
typedef jint (*func_arc_freetype_FreeType$Bitmap_getPitch_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeType$Bitmap_getBuffer_R_java_nio_ByteBuffer 14
typedef jobject (*func_arc_freetype_FreeType$Bitmap_getBuffer_R_java_nio_ByteBuffer)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeType$Bitmap_getPixmap_arc_graphics_Color_float_R_arc_graphics_Pixmap 15
typedef jobject (*func_arc_freetype_FreeType$Bitmap_getPixmap_arc_graphics_Color_float_R_arc_graphics_Pixmap)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_arc_freetype_FreeType$Bitmap_getNumGray_R_int 16
typedef jint (*func_arc_freetype_FreeType$Bitmap_getNumGray_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeType$Bitmap_getPixelMode_R_int 17
typedef jint (*func_arc_freetype_FreeType$Bitmap_getPixelMode_R_int)(jcontext ctx, jobject self);

void mark_arc_freetype_FreeType$Bitmap(jobject object, jint mark, jint depth);
void clinit_arc_freetype_FreeType$Bitmap(jcontext ctx);
void init_arc_freetype_FreeType$Bitmap_long(jcontext ctx, jobject self, jlong param0);
jint SM_arc_freetype_FreeType$Bitmap_getRows_long_R_int(jcontext ctx, jlong param0);
jint SM_arc_freetype_FreeType$Bitmap_getWidth_long_R_int(jcontext ctx, jlong param0);
jint SM_arc_freetype_FreeType$Bitmap_getPitch_long_R_int(jcontext ctx, jlong param0);
jobject SM_arc_freetype_FreeType$Bitmap_getBuffer_long_R_java_nio_ByteBuffer(jcontext ctx, jlong param0);
jint SM_arc_freetype_FreeType$Bitmap_getNumGray_long_R_int(jcontext ctx, jlong param0);
jint SM_arc_freetype_FreeType$Bitmap_getPixelMode_long_R_int(jcontext ctx, jlong param0);
jint M_arc_freetype_FreeType$Bitmap_getRows_R_int(jcontext ctx, jobject self);
jint M_arc_freetype_FreeType$Bitmap_getWidth_R_int(jcontext ctx, jobject self);
jint M_arc_freetype_FreeType$Bitmap_getPitch_R_int(jcontext ctx, jobject self);
jobject M_arc_freetype_FreeType$Bitmap_getBuffer_R_java_nio_ByteBuffer(jcontext ctx, jobject self);
jobject M_arc_freetype_FreeType$Bitmap_getPixmap_arc_graphics_Color_float_R_arc_graphics_Pixmap(jcontext ctx, jobject self, jobject param0, jfloat param1);
jint M_arc_freetype_FreeType$Bitmap_getNumGray_R_int(jcontext ctx, jobject self);
jint M_arc_freetype_FreeType$Bitmap_getPixelMode_R_int(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
