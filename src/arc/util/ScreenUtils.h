#ifndef HEADER_arc_util_ScreenUtils
#define HEADER_arc_util_ScreenUtils

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_util_ScreenUtils {
	java_lang_Object parent;
} arc_util_ScreenUtils;

extern Class class_arc_util_ScreenUtils;


#define VTABLE_arc_util_ScreenUtils_hashCode_R_int 0
typedef jint (*func_arc_util_ScreenUtils_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_util_ScreenUtils_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_util_ScreenUtils_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_ScreenUtils_clone_R_java_lang_Object 2
typedef jobject (*func_arc_util_ScreenUtils_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_util_ScreenUtils_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_util_ScreenUtils_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_util_ScreenUtils_toString_R_java_lang_String 4
typedef jobject (*func_arc_util_ScreenUtils_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_util_ScreenUtils_finalize 5
typedef void (*func_arc_util_ScreenUtils_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_util_ScreenUtils_notify 6
typedef void (*func_arc_util_ScreenUtils_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_util_ScreenUtils_notifyAll 7
typedef void (*func_arc_util_ScreenUtils_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_util_ScreenUtils_wait 8
typedef void (*func_arc_util_ScreenUtils_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_util_ScreenUtils_wait_long 9
typedef void (*func_arc_util_ScreenUtils_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_util_ScreenUtils_wait_long_int 10
typedef void (*func_arc_util_ScreenUtils_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_arc_util_ScreenUtils(jobject object, jint mark, jint depth);
void clinit_arc_util_ScreenUtils(jcontext ctx);
void init_arc_util_ScreenUtils(jcontext ctx, jobject self);
void SM_arc_util_ScreenUtils_saveScreenshot_arc_files_Fi(jcontext ctx, jobject param0);
void SM_arc_util_ScreenUtils_saveScreenshot_arc_files_Fi_int_int_int_int(jcontext ctx, jobject param0, jint param1, jint param2, jint param3, jint param4);
jobject SM_arc_util_ScreenUtils_getFrameBufferTexture_R_arc_graphics_g2d_TextureRegion(jcontext ctx);
jobject SM_arc_util_ScreenUtils_getFrameBufferTexture_int_int_int_int_R_arc_graphics_g2d_TextureRegion(jcontext ctx, jint param0, jint param1, jint param2, jint param3);
jobject SM_arc_util_ScreenUtils_getFrameBufferPixmap_int_int_int_int_R_arc_graphics_Pixmap(jcontext ctx, jint param0, jint param1, jint param2, jint param3);
jobject SM_arc_util_ScreenUtils_getFrameBufferPixmap_int_int_int_int_boolean_R_arc_graphics_Pixmap(jcontext ctx, jint param0, jint param1, jint param2, jint param3, jbool param4);
jobject SM_arc_util_ScreenUtils_getFrameBufferPixels_boolean_R_Array1_byte(jcontext ctx, jbool param0);
jobject SM_arc_util_ScreenUtils_getFrameBufferPixels_int_int_int_int_boolean_R_Array1_byte(jcontext ctx, jint param0, jint param1, jint param2, jint param3, jbool param4);

#ifdef __cplusplus
}
#endif

#endif
