#ifndef HEADER_mindustry_graphics_CacheLayer
#define HEADER_mindustry_graphics_CacheLayer

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_graphics_CacheLayer {
	java_lang_Object parent;
	jint F_id;
	jbool F_liquid;
} mindustry_graphics_CacheLayer;

extern Class class_mindustry_graphics_CacheLayer;

extern jobject SF_mindustry_graphics_CacheLayer_water;
extern jobject SF_mindustry_graphics_CacheLayer_mud;
extern jobject SF_mindustry_graphics_CacheLayer_cryofluid;
extern jobject SF_mindustry_graphics_CacheLayer_tar;
extern jobject SF_mindustry_graphics_CacheLayer_slag;
extern jobject SF_mindustry_graphics_CacheLayer_arkycite;
extern jobject SF_mindustry_graphics_CacheLayer_space;
extern jobject SF_mindustry_graphics_CacheLayer_normal;
extern jobject SF_mindustry_graphics_CacheLayer_walls;
extern jobject SF_mindustry_graphics_CacheLayer_all;

#define VTABLE_mindustry_graphics_CacheLayer_hashCode_R_int 0
typedef jint (*func_mindustry_graphics_CacheLayer_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_CacheLayer_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_graphics_CacheLayer_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_graphics_CacheLayer_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_graphics_CacheLayer_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_CacheLayer_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_graphics_CacheLayer_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_CacheLayer_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_graphics_CacheLayer_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_CacheLayer_finalize 5
typedef void (*func_mindustry_graphics_CacheLayer_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_CacheLayer_notify 6
typedef void (*func_mindustry_graphics_CacheLayer_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_CacheLayer_notifyAll 7
typedef void (*func_mindustry_graphics_CacheLayer_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_CacheLayer_wait 8
typedef void (*func_mindustry_graphics_CacheLayer_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_CacheLayer_wait_long 9
typedef void (*func_mindustry_graphics_CacheLayer_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_graphics_CacheLayer_wait_long_int 10
typedef void (*func_mindustry_graphics_CacheLayer_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_graphics_CacheLayer_begin 11
typedef void (*func_mindustry_graphics_CacheLayer_begin)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_CacheLayer_end 12
typedef void (*func_mindustry_graphics_CacheLayer_end)(jcontext ctx, jobject self);

void mark_mindustry_graphics_CacheLayer(jobject object, jint mark, jint depth);
void clinit_mindustry_graphics_CacheLayer(jcontext ctx);
void init_mindustry_graphics_CacheLayer(jcontext ctx, jobject self);
void SM_mindustry_graphics_CacheLayer_add_Array1_mindustry_graphics_CacheLayer(jcontext ctx, jobject param0);
void SM_mindustry_graphics_CacheLayer_addLast_Array1_mindustry_graphics_CacheLayer(jcontext ctx, jobject param0);
void SM_mindustry_graphics_CacheLayer_add_int_mindustry_graphics_CacheLayer(jcontext ctx, jint param0, jobject param1);
void SM_mindustry_graphics_CacheLayer_init(jcontext ctx);
void M_mindustry_graphics_CacheLayer_begin(jcontext ctx, jobject self);
void M_mindustry_graphics_CacheLayer_end(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
