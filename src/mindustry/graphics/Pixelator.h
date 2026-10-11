#ifndef HEADER_mindustry_graphics_Pixelator
#define HEADER_mindustry_graphics_Pixelator

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "arc/util/Disposable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_graphics_Pixelator {
	java_lang_Object parent;
	jref F_buffer;
	jfloat F_px;
	jfloat F_py;
	jfloat F_pre;
} mindustry_graphics_Pixelator;

extern Class class_mindustry_graphics_Pixelator;


#define VTABLE_mindustry_graphics_Pixelator_hashCode_R_int 0
typedef jint (*func_mindustry_graphics_Pixelator_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_Pixelator_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_graphics_Pixelator_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_graphics_Pixelator_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_graphics_Pixelator_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_Pixelator_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_graphics_Pixelator_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_Pixelator_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_graphics_Pixelator_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_Pixelator_finalize 5
typedef void (*func_mindustry_graphics_Pixelator_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_Pixelator_notify 6
typedef void (*func_mindustry_graphics_Pixelator_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_Pixelator_notifyAll 7
typedef void (*func_mindustry_graphics_Pixelator_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_Pixelator_wait 8
typedef void (*func_mindustry_graphics_Pixelator_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_Pixelator_wait_long 9
typedef void (*func_mindustry_graphics_Pixelator_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_graphics_Pixelator_wait_long_int 10
typedef void (*func_mindustry_graphics_Pixelator_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_graphics_Pixelator_dispose 11
typedef void (*func_mindustry_graphics_Pixelator_dispose)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_Pixelator_isDisposed_R_boolean 12
typedef jbool (*func_mindustry_graphics_Pixelator_isDisposed_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_Pixelator_drawPixelate 13
typedef void (*func_mindustry_graphics_Pixelator_drawPixelate)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_Pixelator_register 14
typedef void (*func_mindustry_graphics_Pixelator_register)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_Pixelator_enabled_R_boolean 15
typedef jbool (*func_mindustry_graphics_Pixelator_enabled_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_Pixelator_lambda$register$0 16
typedef void (*func_mindustry_graphics_Pixelator_lambda$register$0)(jcontext ctx, jobject self);

void mark_mindustry_graphics_Pixelator(jobject object, jint mark, jint depth);
void clinit_mindustry_graphics_Pixelator(jcontext ctx);
void init_mindustry_graphics_Pixelator(jcontext ctx, jobject self);
void M_mindustry_graphics_Pixelator_drawPixelate(jcontext ctx, jobject self);
void M_mindustry_graphics_Pixelator_register(jcontext ctx, jobject self);
jbool M_mindustry_graphics_Pixelator_enabled_R_boolean(jcontext ctx, jobject self);
void M_mindustry_graphics_Pixelator_dispose(jcontext ctx, jobject self);
void M_mindustry_graphics_Pixelator_lambda$register$0(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
