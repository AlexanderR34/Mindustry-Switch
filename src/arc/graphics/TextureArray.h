#ifndef HEADER_arc_graphics_TextureArray
#define HEADER_arc_graphics_TextureArray

#include "Clearwing.h"
#include "arc/graphics/GLTexture.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_graphics_TextureArray {
	arc_graphics_GLTexture parent;
	jref F_data;
} arc_graphics_TextureArray;

extern Class class_arc_graphics_TextureArray;


#define VTABLE_arc_graphics_TextureArray_hashCode_R_int 0
typedef jint (*func_arc_graphics_TextureArray_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_TextureArray_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_graphics_TextureArray_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_TextureArray_clone_R_java_lang_Object 2
typedef jobject (*func_arc_graphics_TextureArray_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_TextureArray_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_graphics_TextureArray_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_TextureArray_toString_R_java_lang_String 4
typedef jobject (*func_arc_graphics_TextureArray_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_TextureArray_finalize 5
typedef void (*func_arc_graphics_TextureArray_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_TextureArray_notify 6
typedef void (*func_arc_graphics_TextureArray_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_TextureArray_notifyAll 7
typedef void (*func_arc_graphics_TextureArray_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_TextureArray_wait 8
typedef void (*func_arc_graphics_TextureArray_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_TextureArray_wait_long 9
typedef void (*func_arc_graphics_TextureArray_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_graphics_TextureArray_wait_long_int 10
typedef void (*func_arc_graphics_TextureArray_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_graphics_TextureArray_dispose 11
typedef void (*func_arc_graphics_TextureArray_dispose)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_TextureArray_isDisposed_R_boolean 12
typedef jbool (*func_arc_graphics_TextureArray_isDisposed_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_TextureArray_getDepth_R_int 13
typedef jint (*func_arc_graphics_TextureArray_getDepth_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_TextureArray_bind 14
typedef void (*func_arc_graphics_TextureArray_bind)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_TextureArray_bind_int 15
typedef void (*func_arc_graphics_TextureArray_bind_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_graphics_TextureArray_getMinFilter_R_arc_graphics_Texture$TextureFilter 16
typedef jobject (*func_arc_graphics_TextureArray_getMinFilter_R_arc_graphics_Texture$TextureFilter)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_TextureArray_getMagFilter_R_arc_graphics_Texture$TextureFilter 17
typedef jobject (*func_arc_graphics_TextureArray_getMagFilter_R_arc_graphics_Texture$TextureFilter)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_TextureArray_getUWrap_R_arc_graphics_Texture$TextureWrap 18
typedef jobject (*func_arc_graphics_TextureArray_getUWrap_R_arc_graphics_Texture$TextureWrap)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_TextureArray_getVWrap_R_arc_graphics_Texture$TextureWrap 19
typedef jobject (*func_arc_graphics_TextureArray_getVWrap_R_arc_graphics_Texture$TextureWrap)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_TextureArray_getTextureObjectHandle_R_int 20
typedef jint (*func_arc_graphics_TextureArray_getTextureObjectHandle_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_TextureArray_unsafeSetWrap_arc_graphics_Texture$TextureWrap_arc_graphics_Texture$TextureWrap 21
typedef void (*func_arc_graphics_TextureArray_unsafeSetWrap_arc_graphics_Texture$TextureWrap_arc_graphics_Texture$TextureWrap)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_graphics_TextureArray_unsafeSetWrap_arc_graphics_Texture$TextureWrap_arc_graphics_Texture$TextureWrap_boolean 22
typedef void (*func_arc_graphics_TextureArray_unsafeSetWrap_arc_graphics_Texture$TextureWrap_arc_graphics_Texture$TextureWrap_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2);
#define VTABLE_arc_graphics_TextureArray_setWrap_arc_graphics_Texture$TextureWrap 23
typedef void (*func_arc_graphics_TextureArray_setWrap_arc_graphics_Texture$TextureWrap)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_TextureArray_setWrap_arc_graphics_Texture$TextureWrap_arc_graphics_Texture$TextureWrap 24
typedef void (*func_arc_graphics_TextureArray_setWrap_arc_graphics_Texture$TextureWrap_arc_graphics_Texture$TextureWrap)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_graphics_TextureArray_unsafeSetFilter_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter 25
typedef void (*func_arc_graphics_TextureArray_unsafeSetFilter_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_graphics_TextureArray_unsafeSetFilter_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter_boolean 26
typedef void (*func_arc_graphics_TextureArray_unsafeSetFilter_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2);
#define VTABLE_arc_graphics_TextureArray_setFilter_arc_graphics_Texture$TextureFilter 27
typedef void (*func_arc_graphics_TextureArray_setFilter_arc_graphics_Texture$TextureFilter)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_TextureArray_setFilter_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter 28
typedef void (*func_arc_graphics_TextureArray_setFilter_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_graphics_TextureArray_load_arc_graphics_TextureArrayData 29
typedef void (*func_arc_graphics_TextureArray_load_arc_graphics_TextureArrayData)(jcontext ctx, jobject self, jobject param0);

void mark_arc_graphics_TextureArray(jobject object, jint mark, jint depth);
void clinit_arc_graphics_TextureArray(jcontext ctx);
void init_arc_graphics_TextureArray_Array1_java_lang_String(jcontext ctx, jobject self, jobject param0);
void init_arc_graphics_TextureArray_Array1_arc_files_Fi(jcontext ctx, jobject self, jobject param0);
void init_arc_graphics_TextureArray_boolean_Array1_arc_files_Fi(jcontext ctx, jobject self, jbool param0, jobject param1);
void init_arc_graphics_TextureArray_arc_graphics_TextureArrayData(jcontext ctx, jobject self, jobject param0);
jobject SM_arc_graphics_TextureArray_getInternalHandles_Array1_java_lang_String_R_Array1_arc_files_Fi(jcontext ctx, jobject param0);
void M_arc_graphics_TextureArray_load_arc_graphics_TextureArrayData(jcontext ctx, jobject self, jobject param0);
jint M_arc_graphics_TextureArray_getDepth_R_int(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
