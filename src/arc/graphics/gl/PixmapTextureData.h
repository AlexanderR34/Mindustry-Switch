#ifndef HEADER_arc_graphics_gl_PixmapTextureData
#define HEADER_arc_graphics_gl_PixmapTextureData

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "arc/graphics/TextureData.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_graphics_gl_PixmapTextureData {
	java_lang_Object parent;
	jref F_pixmap;
	jbool F_useMipMaps;
	jbool F_disposePixmap;
} arc_graphics_gl_PixmapTextureData;

extern Class class_arc_graphics_gl_PixmapTextureData;


#define VTABLE_arc_graphics_gl_PixmapTextureData_hashCode_R_int 0
typedef jint (*func_arc_graphics_gl_PixmapTextureData_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_PixmapTextureData_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_graphics_gl_PixmapTextureData_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_gl_PixmapTextureData_clone_R_java_lang_Object 2
typedef jobject (*func_arc_graphics_gl_PixmapTextureData_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_PixmapTextureData_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_graphics_gl_PixmapTextureData_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_PixmapTextureData_toString_R_java_lang_String 4
typedef jobject (*func_arc_graphics_gl_PixmapTextureData_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_PixmapTextureData_finalize 5
typedef void (*func_arc_graphics_gl_PixmapTextureData_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_PixmapTextureData_notify 6
typedef void (*func_arc_graphics_gl_PixmapTextureData_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_PixmapTextureData_notifyAll 7
typedef void (*func_arc_graphics_gl_PixmapTextureData_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_PixmapTextureData_wait 8
typedef void (*func_arc_graphics_gl_PixmapTextureData_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_PixmapTextureData_wait_long 9
typedef void (*func_arc_graphics_gl_PixmapTextureData_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_graphics_gl_PixmapTextureData_wait_long_int 10
typedef void (*func_arc_graphics_gl_PixmapTextureData_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_graphics_gl_PixmapTextureData_isCustom_R_boolean 11
typedef jbool (*func_arc_graphics_gl_PixmapTextureData_isCustom_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_PixmapTextureData_isPrepared_R_boolean 12
typedef jbool (*func_arc_graphics_gl_PixmapTextureData_isPrepared_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_PixmapTextureData_prepare 13
typedef void (*func_arc_graphics_gl_PixmapTextureData_prepare)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_PixmapTextureData_consumePixmap_R_arc_graphics_Pixmap 14
typedef jobject (*func_arc_graphics_gl_PixmapTextureData_consumePixmap_R_arc_graphics_Pixmap)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_PixmapTextureData_getPixmap_R_arc_graphics_Pixmap 15
typedef jobject (*func_arc_graphics_gl_PixmapTextureData_getPixmap_R_arc_graphics_Pixmap)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_PixmapTextureData_disposePixmap_R_boolean 16
typedef jbool (*func_arc_graphics_gl_PixmapTextureData_disposePixmap_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_PixmapTextureData_consumeCustomData_int 17
typedef void (*func_arc_graphics_gl_PixmapTextureData_consumeCustomData_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_graphics_gl_PixmapTextureData_getWidth_R_int 18
typedef jint (*func_arc_graphics_gl_PixmapTextureData_getWidth_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_PixmapTextureData_getHeight_R_int 19
typedef jint (*func_arc_graphics_gl_PixmapTextureData_getHeight_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_PixmapTextureData_getFormat_R_arc_graphics_Pixmap$Format 20
typedef jobject (*func_arc_graphics_gl_PixmapTextureData_getFormat_R_arc_graphics_Pixmap$Format)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_PixmapTextureData_useMipMaps_R_boolean 21
typedef jbool (*func_arc_graphics_gl_PixmapTextureData_useMipMaps_R_boolean)(jcontext ctx, jobject self);

void mark_arc_graphics_gl_PixmapTextureData(jobject object, jint mark, jint depth);
void clinit_arc_graphics_gl_PixmapTextureData(jcontext ctx);
void init_arc_graphics_gl_PixmapTextureData_arc_graphics_Pixmap_boolean_boolean(jcontext ctx, jobject self, jobject param0, jbool param1, jbool param2);
jbool M_arc_graphics_gl_PixmapTextureData_disposePixmap_R_boolean(jcontext ctx, jobject self);
jobject M_arc_graphics_gl_PixmapTextureData_consumePixmap_R_arc_graphics_Pixmap(jcontext ctx, jobject self);
jint M_arc_graphics_gl_PixmapTextureData_getWidth_R_int(jcontext ctx, jobject self);
jint M_arc_graphics_gl_PixmapTextureData_getHeight_R_int(jcontext ctx, jobject self);
jobject M_arc_graphics_gl_PixmapTextureData_getFormat_R_arc_graphics_Pixmap$Format(jcontext ctx, jobject self);
jbool M_arc_graphics_gl_PixmapTextureData_useMipMaps_R_boolean(jcontext ctx, jobject self);
jbool M_arc_graphics_gl_PixmapTextureData_isCustom_R_boolean(jcontext ctx, jobject self);
void M_arc_graphics_gl_PixmapTextureData_consumeCustomData_int(jcontext ctx, jobject self, jint param0);
jbool M_arc_graphics_gl_PixmapTextureData_isPrepared_R_boolean(jcontext ctx, jobject self);
void M_arc_graphics_gl_PixmapTextureData_prepare(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
