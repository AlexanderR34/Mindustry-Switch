#ifndef HEADER_arc_graphics_Texture$TextureFilter
#define HEADER_arc_graphics_Texture$TextureFilter

#include "Clearwing.h"
#include "java/lang/Enum.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_graphics_Texture$TextureFilter {
	java_lang_Enum parent;
	jint F_glEnum;
} arc_graphics_Texture$TextureFilter;

extern Class class_arc_graphics_Texture$TextureFilter;

extern jobject SF_arc_graphics_Texture$TextureFilter_nearest;
extern jobject SF_arc_graphics_Texture$TextureFilter_linear;
extern jobject SF_arc_graphics_Texture$TextureFilter_mipMap;
extern jobject SF_arc_graphics_Texture$TextureFilter_mipMapNearestNearest;
extern jobject SF_arc_graphics_Texture$TextureFilter_mipMapLinearNearest;
extern jobject SF_arc_graphics_Texture$TextureFilter_mipMapNearestLinear;
extern jobject SF_arc_graphics_Texture$TextureFilter_mipMapLinearLinear;
extern jobject SF_arc_graphics_Texture$TextureFilter_all;
extern jobject SF_arc_graphics_Texture$TextureFilter_$VALUES;

#define VTABLE_arc_graphics_Texture$TextureFilter_hashCode_R_int 0
typedef jint (*func_arc_graphics_Texture$TextureFilter_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Texture$TextureFilter_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_graphics_Texture$TextureFilter_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_Texture$TextureFilter_clone_R_java_lang_Object 2
typedef jobject (*func_arc_graphics_Texture$TextureFilter_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Texture$TextureFilter_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_graphics_Texture$TextureFilter_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Texture$TextureFilter_toString_R_java_lang_String 4
typedef jobject (*func_arc_graphics_Texture$TextureFilter_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Texture$TextureFilter_finalize 5
typedef void (*func_arc_graphics_Texture$TextureFilter_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Texture$TextureFilter_notify 6
typedef void (*func_arc_graphics_Texture$TextureFilter_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Texture$TextureFilter_notifyAll 7
typedef void (*func_arc_graphics_Texture$TextureFilter_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Texture$TextureFilter_wait 8
typedef void (*func_arc_graphics_Texture$TextureFilter_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Texture$TextureFilter_wait_long 9
typedef void (*func_arc_graphics_Texture$TextureFilter_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_graphics_Texture$TextureFilter_wait_long_int 10
typedef void (*func_arc_graphics_Texture$TextureFilter_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_graphics_Texture$TextureFilter_compareTo_java_lang_Object_R_int 11
typedef jint (*func_arc_graphics_Texture$TextureFilter_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_Texture$TextureFilter_compareTo_java_lang_Enum_R_int 12
typedef jint (*func_arc_graphics_Texture$TextureFilter_compareTo_java_lang_Enum_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_Texture$TextureFilter_name_R_java_lang_String 13
typedef jobject (*func_arc_graphics_Texture$TextureFilter_name_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Texture$TextureFilter_ordinal_R_int 14
typedef jint (*func_arc_graphics_Texture$TextureFilter_ordinal_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Texture$TextureFilter_getDeclaringClass_R_java_lang_Class 15
typedef jobject (*func_arc_graphics_Texture$TextureFilter_getDeclaringClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Texture$TextureFilter_isMipMap_R_boolean 16
typedef jbool (*func_arc_graphics_Texture$TextureFilter_isMipMap_R_boolean)(jcontext ctx, jobject self);

void mark_arc_graphics_Texture$TextureFilter(jobject object, jint mark, jint depth);
void clinit_arc_graphics_Texture$TextureFilter(jcontext ctx);
jobject SM_arc_graphics_Texture$TextureFilter_values_R_Array1_arc_graphics_Texture$TextureFilter(jcontext ctx);
jobject SM_arc_graphics_Texture$TextureFilter_valueOf_java_lang_String_R_arc_graphics_Texture$TextureFilter(jcontext ctx, jobject param0);
void init_arc_graphics_Texture$TextureFilter_java_lang_String_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
jbool M_arc_graphics_Texture$TextureFilter_isMipMap_R_boolean(jcontext ctx, jobject self);
jobject SM_arc_graphics_Texture$TextureFilter_$values_R_Array1_arc_graphics_Texture$TextureFilter(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
