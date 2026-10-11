#ifndef HEADER_arc_graphics_Texture$TextureWrap
#define HEADER_arc_graphics_Texture$TextureWrap

#include "Clearwing.h"
#include "java/lang/Enum.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_graphics_Texture$TextureWrap {
	java_lang_Enum parent;
	jint F_glEnum;
} arc_graphics_Texture$TextureWrap;

extern Class class_arc_graphics_Texture$TextureWrap;

extern jobject SF_arc_graphics_Texture$TextureWrap_mirroredRepeat;
extern jobject SF_arc_graphics_Texture$TextureWrap_clampToEdge;
extern jobject SF_arc_graphics_Texture$TextureWrap_repeat;
extern jobject SF_arc_graphics_Texture$TextureWrap_all;
extern jobject SF_arc_graphics_Texture$TextureWrap_$VALUES;

#define VTABLE_arc_graphics_Texture$TextureWrap_hashCode_R_int 0
typedef jint (*func_arc_graphics_Texture$TextureWrap_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Texture$TextureWrap_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_graphics_Texture$TextureWrap_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_Texture$TextureWrap_clone_R_java_lang_Object 2
typedef jobject (*func_arc_graphics_Texture$TextureWrap_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Texture$TextureWrap_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_graphics_Texture$TextureWrap_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Texture$TextureWrap_toString_R_java_lang_String 4
typedef jobject (*func_arc_graphics_Texture$TextureWrap_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Texture$TextureWrap_finalize 5
typedef void (*func_arc_graphics_Texture$TextureWrap_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Texture$TextureWrap_notify 6
typedef void (*func_arc_graphics_Texture$TextureWrap_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Texture$TextureWrap_notifyAll 7
typedef void (*func_arc_graphics_Texture$TextureWrap_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Texture$TextureWrap_wait 8
typedef void (*func_arc_graphics_Texture$TextureWrap_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Texture$TextureWrap_wait_long 9
typedef void (*func_arc_graphics_Texture$TextureWrap_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_graphics_Texture$TextureWrap_wait_long_int 10
typedef void (*func_arc_graphics_Texture$TextureWrap_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_graphics_Texture$TextureWrap_compareTo_java_lang_Object_R_int 11
typedef jint (*func_arc_graphics_Texture$TextureWrap_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_Texture$TextureWrap_compareTo_java_lang_Enum_R_int 12
typedef jint (*func_arc_graphics_Texture$TextureWrap_compareTo_java_lang_Enum_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_Texture$TextureWrap_name_R_java_lang_String 13
typedef jobject (*func_arc_graphics_Texture$TextureWrap_name_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Texture$TextureWrap_ordinal_R_int 14
typedef jint (*func_arc_graphics_Texture$TextureWrap_ordinal_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Texture$TextureWrap_getDeclaringClass_R_java_lang_Class 15
typedef jobject (*func_arc_graphics_Texture$TextureWrap_getDeclaringClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Texture$TextureWrap_getGLEnum_R_int 16
typedef jint (*func_arc_graphics_Texture$TextureWrap_getGLEnum_R_int)(jcontext ctx, jobject self);

void mark_arc_graphics_Texture$TextureWrap(jobject object, jint mark, jint depth);
void clinit_arc_graphics_Texture$TextureWrap(jcontext ctx);
jobject SM_arc_graphics_Texture$TextureWrap_values_R_Array1_arc_graphics_Texture$TextureWrap(jcontext ctx);
jobject SM_arc_graphics_Texture$TextureWrap_valueOf_java_lang_String_R_arc_graphics_Texture$TextureWrap(jcontext ctx, jobject param0);
void init_arc_graphics_Texture$TextureWrap_java_lang_String_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
jint M_arc_graphics_Texture$TextureWrap_getGLEnum_R_int(jcontext ctx, jobject self);
jobject SM_arc_graphics_Texture$TextureWrap_$values_R_Array1_arc_graphics_Texture$TextureWrap(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
