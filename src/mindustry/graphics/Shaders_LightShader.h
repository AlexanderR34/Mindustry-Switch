#ifndef HEADER_mindustry_graphics_Shaders$LightShader
#define HEADER_mindustry_graphics_Shaders$LightShader

#include "Clearwing.h"
#include "mindustry/graphics/Shaders_LoadShader.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_graphics_Shaders$LightShader {
	mindustry_graphics_Shaders$LoadShader parent;
	jref F_ambient;
} mindustry_graphics_Shaders$LightShader;

extern Class class_mindustry_graphics_Shaders$LightShader;


#define VTABLE_mindustry_graphics_Shaders$LightShader_hashCode_R_int 0
typedef jint (*func_mindustry_graphics_Shaders$LightShader_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_Shaders$LightShader_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_graphics_Shaders$LightShader_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_graphics_Shaders$LightShader_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_graphics_Shaders$LightShader_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_Shaders$LightShader_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_graphics_Shaders$LightShader_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_Shaders$LightShader_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_graphics_Shaders$LightShader_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_Shaders$LightShader_finalize 5
typedef void (*func_mindustry_graphics_Shaders$LightShader_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_Shaders$LightShader_notify 6
typedef void (*func_mindustry_graphics_Shaders$LightShader_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_Shaders$LightShader_notifyAll 7
typedef void (*func_mindustry_graphics_Shaders$LightShader_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_Shaders$LightShader_wait 8
typedef void (*func_mindustry_graphics_Shaders$LightShader_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_Shaders$LightShader_wait_long 9
typedef void (*func_mindustry_graphics_Shaders$LightShader_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_graphics_Shaders$LightShader_wait_long_int 10
typedef void (*func_mindustry_graphics_Shaders$LightShader_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_graphics_Shaders$LightShader_dispose 11
typedef void (*func_mindustry_graphics_Shaders$LightShader_dispose)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_Shaders$LightShader_isDisposed_R_boolean 12
typedef jbool (*func_mindustry_graphics_Shaders$LightShader_isDisposed_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_Shaders$LightShader_apply 13
typedef void (*func_mindustry_graphics_Shaders$LightShader_apply)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_Shaders$LightShader_preprocess_java_lang_String_boolean_R_java_lang_String 14
typedef jobject (*func_mindustry_graphics_Shaders$LightShader_preprocess_java_lang_String_boolean_R_java_lang_String)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_mindustry_graphics_Shaders$LightShader_compileShaders_java_lang_String_java_lang_String 15
typedef void (*func_mindustry_graphics_Shaders$LightShader_compileShaders_java_lang_String_java_lang_String)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_graphics_Shaders$LightShader_loadShader_int_java_lang_String_R_int 16
typedef jint (*func_mindustry_graphics_Shaders$LightShader_loadShader_int_java_lang_String_R_int)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_mindustry_graphics_Shaders$LightShader_createProgram_R_int 17
typedef jint (*func_mindustry_graphics_Shaders$LightShader_createProgram_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_Shaders$LightShader_linkProgram_int_R_int 18
typedef jint (*func_mindustry_graphics_Shaders$LightShader_linkProgram_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_graphics_Shaders$LightShader_getLog_R_java_lang_String 19
typedef jobject (*func_mindustry_graphics_Shaders$LightShader_getLog_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_Shaders$LightShader_isCompiled_R_boolean 20
typedef jbool (*func_mindustry_graphics_Shaders$LightShader_isCompiled_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_Shaders$LightShader_fetchAttributeLocation_java_lang_String_R_int 21
typedef jint (*func_mindustry_graphics_Shaders$LightShader_fetchAttributeLocation_java_lang_String_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_graphics_Shaders$LightShader_fetchUniformLocation_java_lang_String_R_int 22
typedef jint (*func_mindustry_graphics_Shaders$LightShader_fetchUniformLocation_java_lang_String_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_graphics_Shaders$LightShader_fetchUniformLocation_java_lang_String_boolean_R_int 23
typedef jint (*func_mindustry_graphics_Shaders$LightShader_fetchUniformLocation_java_lang_String_boolean_R_int)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_mindustry_graphics_Shaders$LightShader_setUniformi_java_lang_String_int 24
typedef void (*func_mindustry_graphics_Shaders$LightShader_setUniformi_java_lang_String_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_mindustry_graphics_Shaders$LightShader_setUniformi_int_int 25
typedef void (*func_mindustry_graphics_Shaders$LightShader_setUniformi_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_mindustry_graphics_Shaders$LightShader_setUniformi_java_lang_String_int_int 26
typedef void (*func_mindustry_graphics_Shaders$LightShader_setUniformi_java_lang_String_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_mindustry_graphics_Shaders$LightShader_setUniformi_int_int_int 27
typedef void (*func_mindustry_graphics_Shaders$LightShader_setUniformi_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2);
#define VTABLE_mindustry_graphics_Shaders$LightShader_setUniformi_java_lang_String_int_int_int 28
typedef void (*func_mindustry_graphics_Shaders$LightShader_setUniformi_java_lang_String_int_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3);
#define VTABLE_mindustry_graphics_Shaders$LightShader_setUniformi_int_int_int_int 29
typedef void (*func_mindustry_graphics_Shaders$LightShader_setUniformi_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
#define VTABLE_mindustry_graphics_Shaders$LightShader_setUniformi_java_lang_String_int_int_int_int 30
typedef void (*func_mindustry_graphics_Shaders$LightShader_setUniformi_java_lang_String_int_int_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4);
#define VTABLE_mindustry_graphics_Shaders$LightShader_setUniformi_int_int_int_int_int 31
typedef void (*func_mindustry_graphics_Shaders$LightShader_setUniformi_int_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4);
#define VTABLE_mindustry_graphics_Shaders$LightShader_setUniformf_java_lang_String_float 32
typedef void (*func_mindustry_graphics_Shaders$LightShader_setUniformf_java_lang_String_float)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_mindustry_graphics_Shaders$LightShader_setUniformf_int_float 33
typedef void (*func_mindustry_graphics_Shaders$LightShader_setUniformf_int_float)(jcontext ctx, jobject self, jint param0, jfloat param1);
#define VTABLE_mindustry_graphics_Shaders$LightShader_setUniformf_java_lang_String_float_float 34
typedef void (*func_mindustry_graphics_Shaders$LightShader_setUniformf_java_lang_String_float_float)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
#define VTABLE_mindustry_graphics_Shaders$LightShader_setUniformf_int_float_float 35
typedef void (*func_mindustry_graphics_Shaders$LightShader_setUniformf_int_float_float)(jcontext ctx, jobject self, jint param0, jfloat param1, jfloat param2);
#define VTABLE_mindustry_graphics_Shaders$LightShader_setUniformf_java_lang_String_float_float_float 36
typedef void (*func_mindustry_graphics_Shaders$LightShader_setUniformf_java_lang_String_float_float_float)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_mindustry_graphics_Shaders$LightShader_setUniformf_int_float_float_float 37
typedef void (*func_mindustry_graphics_Shaders$LightShader_setUniformf_int_float_float_float)(jcontext ctx, jobject self, jint param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_mindustry_graphics_Shaders$LightShader_setUniformf_java_lang_String_float_float_float_float 38
typedef void (*func_mindustry_graphics_Shaders$LightShader_setUniformf_java_lang_String_float_float_float_float)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4);
#define VTABLE_mindustry_graphics_Shaders$LightShader_setUniformf_int_float_float_float_float 39
typedef void (*func_mindustry_graphics_Shaders$LightShader_setUniformf_int_float_float_float_float)(jcontext ctx, jobject self, jint param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4);
#define VTABLE_mindustry_graphics_Shaders$LightShader_setUniform1fv_java_lang_String_Array1_float_int_int 40
typedef void (*func_mindustry_graphics_Shaders$LightShader_setUniform1fv_java_lang_String_Array1_float_int_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3);
#define VTABLE_mindustry_graphics_Shaders$LightShader_setUniform1fv_int_Array1_float_int_int 41
typedef void (*func_mindustry_graphics_Shaders$LightShader_setUniform1fv_int_Array1_float_int_int)(jcontext ctx, jobject self, jint param0, jobject param1, jint param2, jint param3);
#define VTABLE_mindustry_graphics_Shaders$LightShader_setUniform2fv_java_lang_String_Array1_float_int_int 42
typedef void (*func_mindustry_graphics_Shaders$LightShader_setUniform2fv_java_lang_String_Array1_float_int_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3);
#define VTABLE_mindustry_graphics_Shaders$LightShader_setUniform2fv_int_Array1_float_int_int 43
typedef void (*func_mindustry_graphics_Shaders$LightShader_setUniform2fv_int_Array1_float_int_int)(jcontext ctx, jobject self, jint param0, jobject param1, jint param2, jint param3);
#define VTABLE_mindustry_graphics_Shaders$LightShader_setUniform3fv_java_lang_String_Array1_float_int_int 44
typedef void (*func_mindustry_graphics_Shaders$LightShader_setUniform3fv_java_lang_String_Array1_float_int_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3);
#define VTABLE_mindustry_graphics_Shaders$LightShader_setUniform3fv_int_Array1_float_int_int 45
typedef void (*func_mindustry_graphics_Shaders$LightShader_setUniform3fv_int_Array1_float_int_int)(jcontext ctx, jobject self, jint param0, jobject param1, jint param2, jint param3);
#define VTABLE_mindustry_graphics_Shaders$LightShader_setUniform4fv_java_lang_String_Array1_float_int_int 46
typedef void (*func_mindustry_graphics_Shaders$LightShader_setUniform4fv_java_lang_String_Array1_float_int_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3);
#define VTABLE_mindustry_graphics_Shaders$LightShader_setUniform4fv_int_Array1_float_int_int 47
typedef void (*func_mindustry_graphics_Shaders$LightShader_setUniform4fv_int_Array1_float_int_int)(jcontext ctx, jobject self, jint param0, jobject param1, jint param2, jint param3);
#define VTABLE_mindustry_graphics_Shaders$LightShader_setUniformMatrix_java_lang_String_arc_math_Mat 48
typedef void (*func_mindustry_graphics_Shaders$LightShader_setUniformMatrix_java_lang_String_arc_math_Mat)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_graphics_Shaders$LightShader_setUniformMatrix_java_lang_String_arc_math_Mat_boolean 49
typedef void (*func_mindustry_graphics_Shaders$LightShader_setUniformMatrix_java_lang_String_arc_math_Mat_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2);
#define VTABLE_mindustry_graphics_Shaders$LightShader_setUniformMatrix_int_arc_math_Mat 50
typedef void (*func_mindustry_graphics_Shaders$LightShader_setUniformMatrix_int_arc_math_Mat)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_mindustry_graphics_Shaders$LightShader_setUniformMatrix_int_arc_math_Mat_boolean 51
typedef void (*func_mindustry_graphics_Shaders$LightShader_setUniformMatrix_int_arc_math_Mat_boolean)(jcontext ctx, jobject self, jint param0, jobject param1, jbool param2);
#define VTABLE_mindustry_graphics_Shaders$LightShader_setUniformMatrix4_java_lang_String_Array1_float 52
typedef void (*func_mindustry_graphics_Shaders$LightShader_setUniformMatrix4_java_lang_String_Array1_float)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_graphics_Shaders$LightShader_setUniformMatrix4_java_lang_String_arc_math_Mat 53
typedef void (*func_mindustry_graphics_Shaders$LightShader_setUniformMatrix4_java_lang_String_arc_math_Mat)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_graphics_Shaders$LightShader_setUniformMatrix4_java_lang_String_arc_math_Mat_float_float 54
typedef void (*func_mindustry_graphics_Shaders$LightShader_setUniformMatrix4_java_lang_String_arc_math_Mat_float_float)(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jfloat param3);
#define VTABLE_mindustry_graphics_Shaders$LightShader_setUniformMatrix3fv_java_lang_String_java_nio_FloatBuffer_int_boolean 55
typedef void (*func_mindustry_graphics_Shaders$LightShader_setUniformMatrix3fv_java_lang_String_java_nio_FloatBuffer_int_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jbool param3);
#define VTABLE_mindustry_graphics_Shaders$LightShader_setUniformMatrix4fv_java_lang_String_java_nio_FloatBuffer_int_boolean 56
typedef void (*func_mindustry_graphics_Shaders$LightShader_setUniformMatrix4fv_java_lang_String_java_nio_FloatBuffer_int_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jbool param3);
#define VTABLE_mindustry_graphics_Shaders$LightShader_setUniformMatrix4fv_int_Array1_float_int_int 57
typedef void (*func_mindustry_graphics_Shaders$LightShader_setUniformMatrix4fv_int_Array1_float_int_int)(jcontext ctx, jobject self, jint param0, jobject param1, jint param2, jint param3);
#define VTABLE_mindustry_graphics_Shaders$LightShader_setUniformMatrix4fv_java_lang_String_Array1_float_int_int 58
typedef void (*func_mindustry_graphics_Shaders$LightShader_setUniformMatrix4fv_java_lang_String_Array1_float_int_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3);
#define VTABLE_mindustry_graphics_Shaders$LightShader_setUniformf_java_lang_String_arc_math_geom_Vec2 59
typedef void (*func_mindustry_graphics_Shaders$LightShader_setUniformf_java_lang_String_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_graphics_Shaders$LightShader_setUniformf_int_arc_math_geom_Vec2 60
typedef void (*func_mindustry_graphics_Shaders$LightShader_setUniformf_int_arc_math_geom_Vec2)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_mindustry_graphics_Shaders$LightShader_setUniformf_java_lang_String_arc_math_geom_Vec3 61
typedef void (*func_mindustry_graphics_Shaders$LightShader_setUniformf_java_lang_String_arc_math_geom_Vec3)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_graphics_Shaders$LightShader_setUniformf_int_arc_math_geom_Vec3 62
typedef void (*func_mindustry_graphics_Shaders$LightShader_setUniformf_int_arc_math_geom_Vec3)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_mindustry_graphics_Shaders$LightShader_setUniformf_java_lang_String_arc_graphics_Color 63
typedef void (*func_mindustry_graphics_Shaders$LightShader_setUniformf_java_lang_String_arc_graphics_Color)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_graphics_Shaders$LightShader_setUniformf_int_arc_graphics_Color 64
typedef void (*func_mindustry_graphics_Shaders$LightShader_setUniformf_int_arc_graphics_Color)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_mindustry_graphics_Shaders$LightShader_bind 65
typedef void (*func_mindustry_graphics_Shaders$LightShader_bind)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_Shaders$LightShader_disableVertexAttribute_java_lang_String 66
typedef void (*func_mindustry_graphics_Shaders$LightShader_disableVertexAttribute_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_graphics_Shaders$LightShader_fetchUniforms 67
typedef void (*func_mindustry_graphics_Shaders$LightShader_fetchUniforms)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_Shaders$LightShader_fetchAttributes 68
typedef void (*func_mindustry_graphics_Shaders$LightShader_fetchAttributes)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_Shaders$LightShader_hasAttribute_java_lang_String_R_boolean 69
typedef jbool (*func_mindustry_graphics_Shaders$LightShader_hasAttribute_java_lang_String_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_graphics_Shaders$LightShader_getAttributeType_java_lang_String_R_int 70
typedef jint (*func_mindustry_graphics_Shaders$LightShader_getAttributeType_java_lang_String_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_graphics_Shaders$LightShader_getAttributeLocation_java_lang_String_R_int 71
typedef jint (*func_mindustry_graphics_Shaders$LightShader_getAttributeLocation_java_lang_String_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_graphics_Shaders$LightShader_getAttributeSize_java_lang_String_R_int 72
typedef jint (*func_mindustry_graphics_Shaders$LightShader_getAttributeSize_java_lang_String_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_graphics_Shaders$LightShader_hasUniform_java_lang_String_R_boolean 73
typedef jbool (*func_mindustry_graphics_Shaders$LightShader_hasUniform_java_lang_String_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_graphics_Shaders$LightShader_getUniformType_java_lang_String_R_int 74
typedef jint (*func_mindustry_graphics_Shaders$LightShader_getUniformType_java_lang_String_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_graphics_Shaders$LightShader_getUniformLocation_java_lang_String_R_int 75
typedef jint (*func_mindustry_graphics_Shaders$LightShader_getUniformLocation_java_lang_String_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_graphics_Shaders$LightShader_getUniformSize_java_lang_String_R_int 76
typedef jint (*func_mindustry_graphics_Shaders$LightShader_getUniformSize_java_lang_String_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_graphics_Shaders$LightShader_getAttributes_R_Array1_java_lang_String 77
typedef jobject (*func_mindustry_graphics_Shaders$LightShader_getAttributes_R_Array1_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_Shaders$LightShader_getUniforms_R_Array1_java_lang_String 78
typedef jobject (*func_mindustry_graphics_Shaders$LightShader_getUniforms_R_Array1_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_Shaders$LightShader_getVertexShaderSource_R_java_lang_String 79
typedef jobject (*func_mindustry_graphics_Shaders$LightShader_getVertexShaderSource_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_Shaders$LightShader_getFragmentShaderSource_R_java_lang_String 80
typedef jobject (*func_mindustry_graphics_Shaders$LightShader_getFragmentShaderSource_R_java_lang_String)(jcontext ctx, jobject self);

void mark_mindustry_graphics_Shaders$LightShader(jobject object, jint mark, jint depth);
void clinit_mindustry_graphics_Shaders$LightShader(jcontext ctx);
void init_mindustry_graphics_Shaders$LightShader(jcontext ctx, jobject self);
void M_mindustry_graphics_Shaders$LightShader_apply(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
