#ifndef HEADER_arc_graphics_g2d_SpriteCache$Cache
#define HEADER_arc_graphics_g2d_SpriteCache$Cache

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_graphics_g2d_SpriteCache$Cache {
	java_lang_Object parent;
	jint F_id;
	jint F_offset;
	jint F_maxCount;
	jint F_textureCount;
	jref F_textures;
	jref F_counts;
} arc_graphics_g2d_SpriteCache$Cache;

extern Class class_arc_graphics_g2d_SpriteCache$Cache;


#define VTABLE_arc_graphics_g2d_SpriteCache$Cache_hashCode_R_int 0
typedef jint (*func_arc_graphics_g2d_SpriteCache$Cache_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_SpriteCache$Cache_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_graphics_g2d_SpriteCache$Cache_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_g2d_SpriteCache$Cache_clone_R_java_lang_Object 2
typedef jobject (*func_arc_graphics_g2d_SpriteCache$Cache_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_SpriteCache$Cache_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_graphics_g2d_SpriteCache$Cache_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_SpriteCache$Cache_toString_R_java_lang_String 4
typedef jobject (*func_arc_graphics_g2d_SpriteCache$Cache_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_SpriteCache$Cache_finalize 5
typedef void (*func_arc_graphics_g2d_SpriteCache$Cache_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_SpriteCache$Cache_notify 6
typedef void (*func_arc_graphics_g2d_SpriteCache$Cache_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_SpriteCache$Cache_notifyAll 7
typedef void (*func_arc_graphics_g2d_SpriteCache$Cache_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_SpriteCache$Cache_wait 8
typedef void (*func_arc_graphics_g2d_SpriteCache$Cache_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_SpriteCache$Cache_wait_long 9
typedef void (*func_arc_graphics_g2d_SpriteCache$Cache_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_graphics_g2d_SpriteCache$Cache_wait_long_int 10
typedef void (*func_arc_graphics_g2d_SpriteCache$Cache_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_arc_graphics_g2d_SpriteCache$Cache(jobject object, jint mark, jint depth);
void clinit_arc_graphics_g2d_SpriteCache$Cache(jcontext ctx);
void init_arc_graphics_g2d_SpriteCache$Cache_int_int(jcontext ctx, jobject self, jint param0, jint param1);

#ifdef __cplusplus
}
#endif

#endif
