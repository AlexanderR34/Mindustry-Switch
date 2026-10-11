#ifndef HEADER_arc_graphics_gl_FloatTextureData
#define HEADER_arc_graphics_gl_FloatTextureData

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "arc/graphics/TextureData.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_graphics_gl_FloatTextureData {
	java_lang_Object parent;
	jint F_width;
	jint F_height;
	jint F_internalFormat;
	jint F_format;
	jint F_type;
	jbool F_isGpuOnly;
	jbool F_isPrepared;
	jref F_buffer;
} arc_graphics_gl_FloatTextureData;

extern Class class_arc_graphics_gl_FloatTextureData;


#define VTABLE_arc_graphics_gl_FloatTextureData_hashCode_R_int 0
typedef jint (*func_arc_graphics_gl_FloatTextureData_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_FloatTextureData_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_graphics_gl_FloatTextureData_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_gl_FloatTextureData_clone_R_java_lang_Object 2
typedef jobject (*func_arc_graphics_gl_FloatTextureData_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_FloatTextureData_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_graphics_gl_FloatTextureData_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_FloatTextureData_toString_R_java_lang_String 4
typedef jobject (*func_arc_graphics_gl_FloatTextureData_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_FloatTextureData_finalize 5
typedef void (*func_arc_graphics_gl_FloatTextureData_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_FloatTextureData_notify 6
typedef void (*func_arc_graphics_gl_FloatTextureData_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_FloatTextureData_notifyAll 7
typedef void (*func_arc_graphics_gl_FloatTextureData_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_FloatTextureData_wait 8
typedef void (*func_arc_graphics_gl_FloatTextureData_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_FloatTextureData_wait_long 9
typedef void (*func_arc_graphics_gl_FloatTextureData_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_graphics_gl_FloatTextureData_wait_long_int 10
typedef void (*func_arc_graphics_gl_FloatTextureData_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_graphics_gl_FloatTextureData_isCustom_R_boolean 11
typedef jbool (*func_arc_graphics_gl_FloatTextureData_isCustom_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_FloatTextureData_isPrepared_R_boolean 12
typedef jbool (*func_arc_graphics_gl_FloatTextureData_isPrepared_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_FloatTextureData_prepare 13
typedef void (*func_arc_graphics_gl_FloatTextureData_prepare)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_FloatTextureData_consumePixmap_R_arc_graphics_Pixmap 14
typedef jobject (*func_arc_graphics_gl_FloatTextureData_consumePixmap_R_arc_graphics_Pixmap)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_FloatTextureData_getPixmap_R_arc_graphics_Pixmap 15
typedef jobject (*func_arc_graphics_gl_FloatTextureData_getPixmap_R_arc_graphics_Pixmap)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_FloatTextureData_disposePixmap_R_boolean 16
typedef jbool (*func_arc_graphics_gl_FloatTextureData_disposePixmap_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_FloatTextureData_consumeCustomData_int 17
typedef void (*func_arc_graphics_gl_FloatTextureData_consumeCustomData_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_graphics_gl_FloatTextureData_getWidth_R_int 18
typedef jint (*func_arc_graphics_gl_FloatTextureData_getWidth_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_FloatTextureData_getHeight_R_int 19
typedef jint (*func_arc_graphics_gl_FloatTextureData_getHeight_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_FloatTextureData_getFormat_R_arc_graphics_Pixmap$Format 20
typedef jobject (*func_arc_graphics_gl_FloatTextureData_getFormat_R_arc_graphics_Pixmap$Format)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_FloatTextureData_useMipMaps_R_boolean 21
typedef jbool (*func_arc_graphics_gl_FloatTextureData_useMipMaps_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_FloatTextureData_getBuffer_R_java_nio_FloatBuffer 22
typedef jobject (*func_arc_graphics_gl_FloatTextureData_getBuffer_R_java_nio_FloatBuffer)(jcontext ctx, jobject self);

void mark_arc_graphics_gl_FloatTextureData(jobject object, jint mark, jint depth);
void clinit_arc_graphics_gl_FloatTextureData(jcontext ctx);
void init_arc_graphics_gl_FloatTextureData_int_int_int_int_int_boolean(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4, jbool param5);
jbool M_arc_graphics_gl_FloatTextureData_isCustom_R_boolean(jcontext ctx, jobject self);
jbool M_arc_graphics_gl_FloatTextureData_isPrepared_R_boolean(jcontext ctx, jobject self);
void M_arc_graphics_gl_FloatTextureData_prepare(jcontext ctx, jobject self);
void M_arc_graphics_gl_FloatTextureData_consumeCustomData_int(jcontext ctx, jobject self, jint param0);
jobject M_arc_graphics_gl_FloatTextureData_consumePixmap_R_arc_graphics_Pixmap(jcontext ctx, jobject self);
jbool M_arc_graphics_gl_FloatTextureData_disposePixmap_R_boolean(jcontext ctx, jobject self);
jint M_arc_graphics_gl_FloatTextureData_getWidth_R_int(jcontext ctx, jobject self);
jint M_arc_graphics_gl_FloatTextureData_getHeight_R_int(jcontext ctx, jobject self);
jobject M_arc_graphics_gl_FloatTextureData_getFormat_R_arc_graphics_Pixmap$Format(jcontext ctx, jobject self);
jbool M_arc_graphics_gl_FloatTextureData_useMipMaps_R_boolean(jcontext ctx, jobject self);
jobject M_arc_graphics_gl_FloatTextureData_getBuffer_R_java_nio_FloatBuffer(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
