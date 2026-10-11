#ifndef HEADER_arc_graphics_gl_FileTextureArrayData
#define HEADER_arc_graphics_gl_FileTextureArrayData

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "arc/graphics/TextureArrayData.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_graphics_gl_FileTextureArrayData {
	java_lang_Object parent;
	jbool F_useMipMaps;
	jref F_textureDatas;
	jbool F_prepared;
	jint F_depth;
} arc_graphics_gl_FileTextureArrayData;

extern Class class_arc_graphics_gl_FileTextureArrayData;


#define VTABLE_arc_graphics_gl_FileTextureArrayData_hashCode_R_int 0
typedef jint (*func_arc_graphics_gl_FileTextureArrayData_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_FileTextureArrayData_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_graphics_gl_FileTextureArrayData_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_gl_FileTextureArrayData_clone_R_java_lang_Object 2
typedef jobject (*func_arc_graphics_gl_FileTextureArrayData_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_FileTextureArrayData_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_graphics_gl_FileTextureArrayData_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_FileTextureArrayData_toString_R_java_lang_String 4
typedef jobject (*func_arc_graphics_gl_FileTextureArrayData_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_FileTextureArrayData_finalize 5
typedef void (*func_arc_graphics_gl_FileTextureArrayData_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_FileTextureArrayData_notify 6
typedef void (*func_arc_graphics_gl_FileTextureArrayData_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_FileTextureArrayData_notifyAll 7
typedef void (*func_arc_graphics_gl_FileTextureArrayData_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_FileTextureArrayData_wait 8
typedef void (*func_arc_graphics_gl_FileTextureArrayData_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_FileTextureArrayData_wait_long 9
typedef void (*func_arc_graphics_gl_FileTextureArrayData_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_graphics_gl_FileTextureArrayData_wait_long_int 10
typedef void (*func_arc_graphics_gl_FileTextureArrayData_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_graphics_gl_FileTextureArrayData_isPrepared_R_boolean 11
typedef jbool (*func_arc_graphics_gl_FileTextureArrayData_isPrepared_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_FileTextureArrayData_prepare 12
typedef void (*func_arc_graphics_gl_FileTextureArrayData_prepare)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_FileTextureArrayData_consumeTextureArrayData 13
typedef void (*func_arc_graphics_gl_FileTextureArrayData_consumeTextureArrayData)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_FileTextureArrayData_getWidth_R_int 14
typedef jint (*func_arc_graphics_gl_FileTextureArrayData_getWidth_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_FileTextureArrayData_getHeight_R_int 15
typedef jint (*func_arc_graphics_gl_FileTextureArrayData_getHeight_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_FileTextureArrayData_getDepth_R_int 16
typedef jint (*func_arc_graphics_gl_FileTextureArrayData_getDepth_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_FileTextureArrayData_getInternalFormat_R_int 17
typedef jint (*func_arc_graphics_gl_FileTextureArrayData_getInternalFormat_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_FileTextureArrayData_getGLType_R_int 18
typedef jint (*func_arc_graphics_gl_FileTextureArrayData_getGLType_R_int)(jcontext ctx, jobject self);

void mark_arc_graphics_gl_FileTextureArrayData(jobject object, jint mark, jint depth);
void clinit_arc_graphics_gl_FileTextureArrayData(jcontext ctx);
void init_arc_graphics_gl_FileTextureArrayData_boolean_Array1_arc_files_Fi(jcontext ctx, jobject self, jbool param0, jobject param1);
jbool M_arc_graphics_gl_FileTextureArrayData_isPrepared_R_boolean(jcontext ctx, jobject self);
void M_arc_graphics_gl_FileTextureArrayData_prepare(jcontext ctx, jobject self);
void M_arc_graphics_gl_FileTextureArrayData_consumeTextureArrayData(jcontext ctx, jobject self);
jint M_arc_graphics_gl_FileTextureArrayData_getWidth_R_int(jcontext ctx, jobject self);
jint M_arc_graphics_gl_FileTextureArrayData_getHeight_R_int(jcontext ctx, jobject self);
jint M_arc_graphics_gl_FileTextureArrayData_getDepth_R_int(jcontext ctx, jobject self);
jint M_arc_graphics_gl_FileTextureArrayData_getInternalFormat_R_int(jcontext ctx, jobject self);
jint M_arc_graphics_gl_FileTextureArrayData_getGLType_R_int(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
