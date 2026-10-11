#ifndef HEADER_arc_graphics_gl_GLOnlyTextureData
#define HEADER_arc_graphics_gl_GLOnlyTextureData

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "arc/graphics/TextureData.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_graphics_gl_GLOnlyTextureData {
	java_lang_Object parent;
	jint F_width;
	jint F_height;
	jbool F_isPrepared;
	jint F_mipLevel;
	jint F_internalFormat;
	jint F_format;
	jint F_type;
} arc_graphics_gl_GLOnlyTextureData;

extern Class class_arc_graphics_gl_GLOnlyTextureData;


#define VTABLE_arc_graphics_gl_GLOnlyTextureData_hashCode_R_int 0
typedef jint (*func_arc_graphics_gl_GLOnlyTextureData_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_GLOnlyTextureData_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_graphics_gl_GLOnlyTextureData_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_gl_GLOnlyTextureData_clone_R_java_lang_Object 2
typedef jobject (*func_arc_graphics_gl_GLOnlyTextureData_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_GLOnlyTextureData_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_graphics_gl_GLOnlyTextureData_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_GLOnlyTextureData_toString_R_java_lang_String 4
typedef jobject (*func_arc_graphics_gl_GLOnlyTextureData_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_GLOnlyTextureData_finalize 5
typedef void (*func_arc_graphics_gl_GLOnlyTextureData_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_GLOnlyTextureData_notify 6
typedef void (*func_arc_graphics_gl_GLOnlyTextureData_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_GLOnlyTextureData_notifyAll 7
typedef void (*func_arc_graphics_gl_GLOnlyTextureData_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_GLOnlyTextureData_wait 8
typedef void (*func_arc_graphics_gl_GLOnlyTextureData_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_GLOnlyTextureData_wait_long 9
typedef void (*func_arc_graphics_gl_GLOnlyTextureData_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_graphics_gl_GLOnlyTextureData_wait_long_int 10
typedef void (*func_arc_graphics_gl_GLOnlyTextureData_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_graphics_gl_GLOnlyTextureData_isCustom_R_boolean 11
typedef jbool (*func_arc_graphics_gl_GLOnlyTextureData_isCustom_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_GLOnlyTextureData_isPrepared_R_boolean 12
typedef jbool (*func_arc_graphics_gl_GLOnlyTextureData_isPrepared_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_GLOnlyTextureData_prepare 13
typedef void (*func_arc_graphics_gl_GLOnlyTextureData_prepare)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_GLOnlyTextureData_consumePixmap_R_arc_graphics_Pixmap 14
typedef jobject (*func_arc_graphics_gl_GLOnlyTextureData_consumePixmap_R_arc_graphics_Pixmap)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_GLOnlyTextureData_getPixmap_R_arc_graphics_Pixmap 15
typedef jobject (*func_arc_graphics_gl_GLOnlyTextureData_getPixmap_R_arc_graphics_Pixmap)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_GLOnlyTextureData_disposePixmap_R_boolean 16
typedef jbool (*func_arc_graphics_gl_GLOnlyTextureData_disposePixmap_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_GLOnlyTextureData_consumeCustomData_int 17
typedef void (*func_arc_graphics_gl_GLOnlyTextureData_consumeCustomData_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_graphics_gl_GLOnlyTextureData_getWidth_R_int 18
typedef jint (*func_arc_graphics_gl_GLOnlyTextureData_getWidth_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_GLOnlyTextureData_getHeight_R_int 19
typedef jint (*func_arc_graphics_gl_GLOnlyTextureData_getHeight_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_GLOnlyTextureData_getFormat_R_arc_graphics_Pixmap$Format 20
typedef jobject (*func_arc_graphics_gl_GLOnlyTextureData_getFormat_R_arc_graphics_Pixmap$Format)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_GLOnlyTextureData_useMipMaps_R_boolean 21
typedef jbool (*func_arc_graphics_gl_GLOnlyTextureData_useMipMaps_R_boolean)(jcontext ctx, jobject self);

void mark_arc_graphics_gl_GLOnlyTextureData(jobject object, jint mark, jint depth);
void clinit_arc_graphics_gl_GLOnlyTextureData(jcontext ctx);
void init_arc_graphics_gl_GLOnlyTextureData_int_int_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5);
jbool M_arc_graphics_gl_GLOnlyTextureData_isCustom_R_boolean(jcontext ctx, jobject self);
jbool M_arc_graphics_gl_GLOnlyTextureData_isPrepared_R_boolean(jcontext ctx, jobject self);
void M_arc_graphics_gl_GLOnlyTextureData_prepare(jcontext ctx, jobject self);
void M_arc_graphics_gl_GLOnlyTextureData_consumeCustomData_int(jcontext ctx, jobject self, jint param0);
jobject M_arc_graphics_gl_GLOnlyTextureData_consumePixmap_R_arc_graphics_Pixmap(jcontext ctx, jobject self);
jbool M_arc_graphics_gl_GLOnlyTextureData_disposePixmap_R_boolean(jcontext ctx, jobject self);
jint M_arc_graphics_gl_GLOnlyTextureData_getWidth_R_int(jcontext ctx, jobject self);
jint M_arc_graphics_gl_GLOnlyTextureData_getHeight_R_int(jcontext ctx, jobject self);
jobject M_arc_graphics_gl_GLOnlyTextureData_getFormat_R_arc_graphics_Pixmap$Format(jcontext ctx, jobject self);
jbool M_arc_graphics_gl_GLOnlyTextureData_useMipMaps_R_boolean(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
