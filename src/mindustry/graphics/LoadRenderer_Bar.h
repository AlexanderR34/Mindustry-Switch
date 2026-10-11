#ifndef HEADER_mindustry_graphics_LoadRenderer$Bar
#define HEADER_mindustry_graphics_LoadRenderer$Bar

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_graphics_LoadRenderer$Bar {
	java_lang_Object parent;
	jref F_value;
	jref F_red;
	jref F_valid;
	jref F_text;
} mindustry_graphics_LoadRenderer$Bar;

extern Class class_mindustry_graphics_LoadRenderer$Bar;


#define VTABLE_mindustry_graphics_LoadRenderer$Bar_hashCode_R_int 0
typedef jint (*func_mindustry_graphics_LoadRenderer$Bar_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_LoadRenderer$Bar_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_graphics_LoadRenderer$Bar_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_graphics_LoadRenderer$Bar_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_graphics_LoadRenderer$Bar_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_LoadRenderer$Bar_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_graphics_LoadRenderer$Bar_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_LoadRenderer$Bar_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_graphics_LoadRenderer$Bar_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_LoadRenderer$Bar_finalize 5
typedef void (*func_mindustry_graphics_LoadRenderer$Bar_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_LoadRenderer$Bar_notify 6
typedef void (*func_mindustry_graphics_LoadRenderer$Bar_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_LoadRenderer$Bar_notifyAll 7
typedef void (*func_mindustry_graphics_LoadRenderer$Bar_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_LoadRenderer$Bar_wait 8
typedef void (*func_mindustry_graphics_LoadRenderer$Bar_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_LoadRenderer$Bar_wait_long 9
typedef void (*func_mindustry_graphics_LoadRenderer$Bar_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_graphics_LoadRenderer$Bar_wait_long_int 10
typedef void (*func_mindustry_graphics_LoadRenderer$Bar_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_graphics_LoadRenderer$Bar_valid_R_boolean 11
typedef jbool (*func_mindustry_graphics_LoadRenderer$Bar_valid_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_LoadRenderer$Bar_red_R_boolean 12
typedef jbool (*func_mindustry_graphics_LoadRenderer$Bar_red_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_LoadRenderer$Bar_value_R_float 13
typedef jfloat (*func_mindustry_graphics_LoadRenderer$Bar_value_R_float)(jcontext ctx, jobject self);

void mark_mindustry_graphics_LoadRenderer$Bar(jobject object, jint mark, jint depth);
void clinit_mindustry_graphics_LoadRenderer$Bar(jcontext ctx);
void init_mindustry_graphics_LoadRenderer$Bar_java_lang_String_float_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1, jbool param2);
void init_mindustry_graphics_LoadRenderer$Bar_java_lang_String_arc_func_Boolp_arc_func_Floatp_arc_func_Boolp(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3);
jbool M_mindustry_graphics_LoadRenderer$Bar_valid_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_graphics_LoadRenderer$Bar_red_R_boolean(jcontext ctx, jobject self);
jfloat M_mindustry_graphics_LoadRenderer$Bar_value_R_float(jcontext ctx, jobject self);
jbool SM_mindustry_graphics_LoadRenderer$Bar_lambda$new$2_R_boolean(jcontext ctx);
jbool SM_mindustry_graphics_LoadRenderer$Bar_lambda$new$1_boolean_R_boolean(jcontext ctx, jbool param0);
jfloat SM_mindustry_graphics_LoadRenderer$Bar_lambda$new$0_float_R_float(jcontext ctx, jfloat param0);

#ifdef __cplusplus
}
#endif

#endif
