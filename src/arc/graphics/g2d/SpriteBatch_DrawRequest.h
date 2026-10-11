#ifndef HEADER_arc_graphics_g2d_SpriteBatch$DrawRequest
#define HEADER_arc_graphics_g2d_SpriteBatch$DrawRequest

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_graphics_g2d_SpriteBatch$DrawRequest {
	java_lang_Object parent;
	jint F_verticesOffset;
	jint F_verticesLength;
	jref F_texture;
	jref F_blending;
	jref F_run;
} arc_graphics_g2d_SpriteBatch$DrawRequest;

extern Class class_arc_graphics_g2d_SpriteBatch$DrawRequest;


#define VTABLE_arc_graphics_g2d_SpriteBatch$DrawRequest_hashCode_R_int 0
typedef jint (*func_arc_graphics_g2d_SpriteBatch$DrawRequest_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_SpriteBatch$DrawRequest_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_graphics_g2d_SpriteBatch$DrawRequest_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_g2d_SpriteBatch$DrawRequest_clone_R_java_lang_Object 2
typedef jobject (*func_arc_graphics_g2d_SpriteBatch$DrawRequest_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_SpriteBatch$DrawRequest_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_graphics_g2d_SpriteBatch$DrawRequest_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_SpriteBatch$DrawRequest_toString_R_java_lang_String 4
typedef jobject (*func_arc_graphics_g2d_SpriteBatch$DrawRequest_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_SpriteBatch$DrawRequest_finalize 5
typedef void (*func_arc_graphics_g2d_SpriteBatch$DrawRequest_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_SpriteBatch$DrawRequest_notify 6
typedef void (*func_arc_graphics_g2d_SpriteBatch$DrawRequest_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_SpriteBatch$DrawRequest_notifyAll 7
typedef void (*func_arc_graphics_g2d_SpriteBatch$DrawRequest_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_SpriteBatch$DrawRequest_wait 8
typedef void (*func_arc_graphics_g2d_SpriteBatch$DrawRequest_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_SpriteBatch$DrawRequest_wait_long 9
typedef void (*func_arc_graphics_g2d_SpriteBatch$DrawRequest_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_graphics_g2d_SpriteBatch$DrawRequest_wait_long_int 10
typedef void (*func_arc_graphics_g2d_SpriteBatch$DrawRequest_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_arc_graphics_g2d_SpriteBatch$DrawRequest(jobject object, jint mark, jint depth);
void clinit_arc_graphics_g2d_SpriteBatch$DrawRequest(jcontext ctx);
void init_arc_graphics_g2d_SpriteBatch$DrawRequest(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
