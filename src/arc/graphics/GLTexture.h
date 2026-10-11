#ifndef HEADER_arc_graphics_GLTexture
#define HEADER_arc_graphics_GLTexture

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "arc/util/Disposable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_graphics_GLTexture {
	java_lang_Object parent;
	jint F_glTarget;
	jint F_width;
	jint F_height;
	jint F_glHandle;
	jref F_minFilter;
	jref F_magFilter;
	jref F_uWrap;
	jref F_vWrap;
} arc_graphics_GLTexture;

extern Class class_arc_graphics_GLTexture;


#define VTABLE_arc_graphics_GLTexture_hashCode_R_int 0
typedef jint (*func_arc_graphics_GLTexture_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_GLTexture_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_graphics_GLTexture_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_GLTexture_clone_R_java_lang_Object 2
typedef jobject (*func_arc_graphics_GLTexture_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_GLTexture_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_graphics_GLTexture_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_GLTexture_toString_R_java_lang_String 4
typedef jobject (*func_arc_graphics_GLTexture_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_GLTexture_finalize 5
typedef void (*func_arc_graphics_GLTexture_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_GLTexture_notify 6
typedef void (*func_arc_graphics_GLTexture_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_GLTexture_notifyAll 7
typedef void (*func_arc_graphics_GLTexture_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_GLTexture_wait 8
typedef void (*func_arc_graphics_GLTexture_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_GLTexture_wait_long 9
typedef void (*func_arc_graphics_GLTexture_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_graphics_GLTexture_wait_long_int 10
typedef void (*func_arc_graphics_GLTexture_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_graphics_GLTexture_dispose 11
typedef void (*func_arc_graphics_GLTexture_dispose)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_GLTexture_isDisposed_R_boolean 12
typedef jbool (*func_arc_graphics_GLTexture_isDisposed_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_GLTexture_getDepth_R_int 13
typedef jint (*func_arc_graphics_GLTexture_getDepth_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_GLTexture_bind 14
typedef void (*func_arc_graphics_GLTexture_bind)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_GLTexture_bind_int 15
typedef void (*func_arc_graphics_GLTexture_bind_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_graphics_GLTexture_getMinFilter_R_arc_graphics_Texture$TextureFilter 16
typedef jobject (*func_arc_graphics_GLTexture_getMinFilter_R_arc_graphics_Texture$TextureFilter)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_GLTexture_getMagFilter_R_arc_graphics_Texture$TextureFilter 17
typedef jobject (*func_arc_graphics_GLTexture_getMagFilter_R_arc_graphics_Texture$TextureFilter)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_GLTexture_getUWrap_R_arc_graphics_Texture$TextureWrap 18
typedef jobject (*func_arc_graphics_GLTexture_getUWrap_R_arc_graphics_Texture$TextureWrap)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_GLTexture_getVWrap_R_arc_graphics_Texture$TextureWrap 19
typedef jobject (*func_arc_graphics_GLTexture_getVWrap_R_arc_graphics_Texture$TextureWrap)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_GLTexture_getTextureObjectHandle_R_int 20
typedef jint (*func_arc_graphics_GLTexture_getTextureObjectHandle_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_GLTexture_unsafeSetWrap_arc_graphics_Texture$TextureWrap_arc_graphics_Texture$TextureWrap 21
typedef void (*func_arc_graphics_GLTexture_unsafeSetWrap_arc_graphics_Texture$TextureWrap_arc_graphics_Texture$TextureWrap)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_graphics_GLTexture_unsafeSetWrap_arc_graphics_Texture$TextureWrap_arc_graphics_Texture$TextureWrap_boolean 22
typedef void (*func_arc_graphics_GLTexture_unsafeSetWrap_arc_graphics_Texture$TextureWrap_arc_graphics_Texture$TextureWrap_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2);
#define VTABLE_arc_graphics_GLTexture_setWrap_arc_graphics_Texture$TextureWrap 23
typedef void (*func_arc_graphics_GLTexture_setWrap_arc_graphics_Texture$TextureWrap)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_GLTexture_setWrap_arc_graphics_Texture$TextureWrap_arc_graphics_Texture$TextureWrap 24
typedef void (*func_arc_graphics_GLTexture_setWrap_arc_graphics_Texture$TextureWrap_arc_graphics_Texture$TextureWrap)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_graphics_GLTexture_unsafeSetFilter_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter 25
typedef void (*func_arc_graphics_GLTexture_unsafeSetFilter_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_graphics_GLTexture_unsafeSetFilter_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter_boolean 26
typedef void (*func_arc_graphics_GLTexture_unsafeSetFilter_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2);
#define VTABLE_arc_graphics_GLTexture_setFilter_arc_graphics_Texture$TextureFilter 27
typedef void (*func_arc_graphics_GLTexture_setFilter_arc_graphics_Texture$TextureFilter)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_GLTexture_setFilter_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter 28
typedef void (*func_arc_graphics_GLTexture_setFilter_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter)(jcontext ctx, jobject self, jobject param0, jobject param1);

void mark_arc_graphics_GLTexture(jobject object, jint mark, jint depth);
void clinit_arc_graphics_GLTexture(jcontext ctx);
void init_arc_graphics_GLTexture_int(jcontext ctx, jobject self, jint param0);
void init_arc_graphics_GLTexture_int_int(jcontext ctx, jobject self, jint param0, jint param1);
void SM_arc_graphics_GLTexture_uploadImageData_int_arc_graphics_TextureData(jcontext ctx, jint param0, jobject param1);
void SM_arc_graphics_GLTexture_uploadImageData_int_arc_graphics_TextureData_int(jcontext ctx, jint param0, jobject param1, jint param2);
void M_arc_graphics_GLTexture_bind(jcontext ctx, jobject self);
void M_arc_graphics_GLTexture_bind_int(jcontext ctx, jobject self, jint param0);
jobject M_arc_graphics_GLTexture_getMinFilter_R_arc_graphics_Texture$TextureFilter(jcontext ctx, jobject self);
jobject M_arc_graphics_GLTexture_getMagFilter_R_arc_graphics_Texture$TextureFilter(jcontext ctx, jobject self);
jobject M_arc_graphics_GLTexture_getUWrap_R_arc_graphics_Texture$TextureWrap(jcontext ctx, jobject self);
jobject M_arc_graphics_GLTexture_getVWrap_R_arc_graphics_Texture$TextureWrap(jcontext ctx, jobject self);
jint M_arc_graphics_GLTexture_getTextureObjectHandle_R_int(jcontext ctx, jobject self);
void M_arc_graphics_GLTexture_unsafeSetWrap_arc_graphics_Texture$TextureWrap_arc_graphics_Texture$TextureWrap(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_arc_graphics_GLTexture_unsafeSetWrap_arc_graphics_Texture$TextureWrap_arc_graphics_Texture$TextureWrap_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2);
void M_arc_graphics_GLTexture_setWrap_arc_graphics_Texture$TextureWrap(jcontext ctx, jobject self, jobject param0);
void M_arc_graphics_GLTexture_setWrap_arc_graphics_Texture$TextureWrap_arc_graphics_Texture$TextureWrap(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_arc_graphics_GLTexture_unsafeSetFilter_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_arc_graphics_GLTexture_unsafeSetFilter_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2);
void M_arc_graphics_GLTexture_setFilter_arc_graphics_Texture$TextureFilter(jcontext ctx, jobject self, jobject param0);
void M_arc_graphics_GLTexture_setFilter_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_arc_graphics_GLTexture_dispose(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
