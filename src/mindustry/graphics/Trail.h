#ifndef HEADER_mindustry_graphics_Trail
#define HEADER_mindustry_graphics_Trail

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_graphics_Trail {
	java_lang_Object parent;
	jint F_length;
	jref F_points;
	jfloat F_lastX;
	jfloat F_lastY;
	jfloat F_lastAngle;
	jfloat F_counter;
	jfloat F_lastW;
} mindustry_graphics_Trail;

extern Class class_mindustry_graphics_Trail;


#define VTABLE_mindustry_graphics_Trail_hashCode_R_int 0
typedef jint (*func_mindustry_graphics_Trail_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_Trail_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_graphics_Trail_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_graphics_Trail_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_graphics_Trail_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_Trail_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_graphics_Trail_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_Trail_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_graphics_Trail_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_Trail_finalize 5
typedef void (*func_mindustry_graphics_Trail_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_Trail_notify 6
typedef void (*func_mindustry_graphics_Trail_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_Trail_notifyAll 7
typedef void (*func_mindustry_graphics_Trail_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_Trail_wait 8
typedef void (*func_mindustry_graphics_Trail_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_Trail_wait_long 9
typedef void (*func_mindustry_graphics_Trail_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_graphics_Trail_wait_long_int 10
typedef void (*func_mindustry_graphics_Trail_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_graphics_Trail_copy_R_mindustry_graphics_Trail 11
typedef jobject (*func_mindustry_graphics_Trail_copy_R_mindustry_graphics_Trail)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_Trail_width_R_float 12
typedef jfloat (*func_mindustry_graphics_Trail_width_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_Trail_clear 13
typedef void (*func_mindustry_graphics_Trail_clear)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_Trail_size_R_int 14
typedef jint (*func_mindustry_graphics_Trail_size_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_Trail_drawCap_arc_graphics_Color_float 15
typedef void (*func_mindustry_graphics_Trail_drawCap_arc_graphics_Color_float)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_mindustry_graphics_Trail_draw_arc_graphics_Color_float 16
typedef void (*func_mindustry_graphics_Trail_draw_arc_graphics_Color_float)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_mindustry_graphics_Trail_shorten 17
typedef void (*func_mindustry_graphics_Trail_shorten)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_Trail_update_float_float 18
typedef void (*func_mindustry_graphics_Trail_update_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_graphics_Trail_update_float_float_float 19
typedef void (*func_mindustry_graphics_Trail_update_float_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);

void mark_mindustry_graphics_Trail(jobject object, jint mark, jint depth);
void clinit_mindustry_graphics_Trail(jcontext ctx);
void init_mindustry_graphics_Trail_int(jcontext ctx, jobject self, jint param0);
jobject M_mindustry_graphics_Trail_copy_R_mindustry_graphics_Trail(jcontext ctx, jobject self);
jfloat M_mindustry_graphics_Trail_width_R_float(jcontext ctx, jobject self);
void M_mindustry_graphics_Trail_clear(jcontext ctx, jobject self);
jint M_mindustry_graphics_Trail_size_R_int(jcontext ctx, jobject self);
void M_mindustry_graphics_Trail_drawCap_arc_graphics_Color_float(jcontext ctx, jobject self, jobject param0, jfloat param1);
void M_mindustry_graphics_Trail_draw_arc_graphics_Color_float(jcontext ctx, jobject self, jobject param0, jfloat param1);
void M_mindustry_graphics_Trail_shorten(jcontext ctx, jobject self);
void M_mindustry_graphics_Trail_update_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1);
void M_mindustry_graphics_Trail_update_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);

#ifdef __cplusplus
}
#endif

#endif
