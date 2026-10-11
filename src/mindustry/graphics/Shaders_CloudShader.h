#ifndef HEADER_mindustry_graphics_Shaders$CloudShader
#define HEADER_mindustry_graphics_Shaders$CloudShader

#include "Clearwing.h"
#include "mindustry/graphics/Shaders_LoadShader.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_graphics_Shaders$CloudShader {
	mindustry_graphics_Shaders$LoadShader parent;
	jref F_lightDir;
	jref F_ambientColor;
	jref F_camDir;
	jfloat F_alpha;
	jref F_planet;
} mindustry_graphics_Shaders$CloudShader;

extern Class class_mindustry_graphics_Shaders$CloudShader;


#define VTABLE_mindustry_graphics_Shaders$CloudShader_hashCode_R_int 0
typedef jint (*func_mindustry_graphics_Shaders$CloudShader_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_Shaders$CloudShader_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_graphics_Shaders$CloudShader_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_graphics_Shaders$CloudShader_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_graphics_Shaders$CloudShader_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_Shaders$CloudShader_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_graphics_Shaders$CloudShader_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_Shaders$CloudShader_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_graphics_Shaders$CloudShader_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_Shaders$CloudShader_finalize 5
typedef void (*func_mindustry_graphics_Shaders$CloudShader_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_Shaders$CloudShader_notify 6
typedef void (*func_mindustry_graphics_Shaders$CloudShader_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_Shaders$CloudShader_notifyAll 7
typedef void (*func_mindustry_graphics_Shaders$CloudShader_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_Shaders$CloudShader_wait 8
typedef void (*func_mindustry_graphics_Shaders$CloudShader_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_Shaders$CloudShader_wait_long 9
typedef void (*func_mindustry_graphics_Shaders$CloudShader_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_graphics_Shaders$CloudShader_wait_long_int 10
typedef void (*func_mindustry_graphics_Shaders$CloudShader_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_graphics_Shaders$CloudShader_dispose 11
typedef void (*func_mindustry_graphics_Shaders$CloudShader_dispose)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_Shaders$CloudShader_isDisposed_R_boolean 12
typedef jbool (*func_mindustry_graphics_Shaders$CloudShader_isDisposed_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_Shaders$CloudShader_apply 13
typedef void (*func_mindustry_graphics_Shaders$CloudShader_apply)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_Shaders$CloudShader_preprocess_java_lang_String_boolean_R_java_lang_String 14
typedef jobject (*func_mindustry_graphics_Shaders$CloudShader_preprocess_java_lang_String_boolean_R_java_lang_String)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_mindustry_graphics_Shaders$CloudShader_compileShaders_java_lang_String_java_lang_String 15
typedef void (*func_mindustry_graphics_Shaders$CloudShader_compileShaders_java_lang_String_java_lang_String)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_graphics_Shaders$CloudShader_loadShader_int_java_lang_String_R_int 16
typedef jint (*func_mindustry_graphics_Shaders$CloudShader_loadShader_int_java_lang_String_R_int)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_mindustry_graphics_Shaders$CloudShader_createProgram_R_int 17
typedef jint (*func_mindustry_graphics_Shaders$CloudShader_createProgram_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_Shaders$CloudShader_linkProgram_int_R_int 18
typedef jint (*func_mindustry_graphics_Shaders$CloudShader_linkProgram_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_graphics_Shaders$CloudShader_getLog_R_java_lang_String 19
typedef jobject (*func_mindustry_graphics_Shaders$CloudShader_getLog_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_Shaders$CloudShader_isCompiled_R_boolean 20
typedef jbool (*func_mindustry_graphics_Shaders$CloudShader_isCompiled_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_Shaders$CloudShader_fetchAttributeLocation_java_lang_String_R_int 21
typedef jint (*func_mindustry_graphics_Shaders$CloudShader_fetchAttributeLocation_java_lang_String_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_graphics_Shaders$CloudShader_fetchUniformLocation_java_lang_String_R_int 22
typedef jint (*func_mindustry_graphics_Shaders$CloudShader_fetchUniformLocation_java_lang_String_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_graphics_Shaders$CloudShader_fetchUniformLocation_java_lang_String_boolean_R_int 23
typedef jint (*func_mindustry_graphics_Shaders$CloudShader_fetchUniformLocation_java_lang_String_boolean_R_int)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_mindustry_graphics_Shaders$CloudShader_setUniformi_java_lang_String_int 24
typedef void (*func_mindustry_graphics_Shaders$CloudShader_setUniformi_java_lang_String_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_mindustry_graphics_Shaders$CloudShader_setUniformi_int_int 25
typedef void (*func_mindustry_graphics_Shaders$CloudShader_setUniformi_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_mindustry_graphics_Shaders$CloudShader_setUniformi_java_lang_String_int_int 26
typedef void (*func_mindustry_graphics_Shaders$CloudShader_setUniformi_java_lang_String_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_mindustry_graphics_Shaders$CloudShader_setUniformi_int_int_int 27
typedef void (*func_mindustry_graphics_Shaders$CloudShader_setUniformi_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2);
#define VTABLE_mindustry_graphics_Shaders$CloudShader_setUniformi_java_lang_String_int_int_int 28
typedef void (*func_mindustry_graphics_Shaders$CloudShader_setUniformi_java_lang_String_int_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3);
#define VTABLE_mindustry_graphics_Shaders$CloudShader_setUniformi_int_int_int_int 29
typedef void (*func_mindustry_graphics_Shaders$CloudShader_setUniformi_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
#define VTABLE_mindustry_graphics_Shaders$CloudShader_setUniformi_java_lang_String_int_int_int_int 30
typedef void (*func_mindustry_graphics_Shaders$CloudShader_setUniformi_java_lang_String_int_int_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4);
#define VTABLE_mindustry_graphics_Shaders$CloudShader_setUniformi_int_int_int_int_int 31
typedef void (*func_mindustry_graphics_Shaders$CloudShader_setUniformi_int_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4);
#define VTABLE_mindustry_graphics_Shaders$CloudShader_setUniformf_java_lang_String_float 32
typedef void (*func_mindustry_graphics_Shaders$CloudShader_setUniformf_java_lang_String_float)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_mindustry_graphics_Shaders$CloudShader_setUniformf_int_float 33
typedef void (*func_mindustry_graphics_Shaders$CloudShader_setUniformf_int_float)(jcontext ctx, jobject self, jint param0, jfloat param1);
#define VTABLE_mindustry_graphics_Shaders$CloudShader_setUniformf_java_lang_String_float_float 34
typedef void (*func_mindustry_graphics_Shaders$CloudShader_setUniformf_java_lang_String_float_float)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
#define VTABLE_mindustry_graphics_Shaders$CloudShader_setUniformf_int_float_float 35
typedef void (*func_mindustry_graphics_Shaders$CloudShader_setUniformf_int_float_float)(jcontext ctx, jobject self, jint param0, jfloat param1, jfloat param2);
#define VTABLE_mindustry_graphics_Shaders$CloudShader_setUniformf_java_lang_String_float_float_float 36
typedef void (*func_mindustry_graphics_Shaders$CloudShader_setUniformf_java_lang_String_float_float_float)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_mindustry_graphics_Shaders$CloudShader_setUniformf_int_float_float_float 37
typedef void (*func_mindustry_graphics_Shaders$CloudShader_setUniformf_int_float_float_float)(jcontext ctx, jobject self, jint param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_mindustry_graphics_Shaders$CloudShader_setUniformf_java_lang_String_float_float_float_float 38
typedef void (*func_mindustry_graphics_Shaders$CloudShader_setUniformf_java_lang_String_float_float_float_float)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4);
#define VTABLE_mindustry_graphics_Shaders$CloudShader_setUniformf_int_float_float_float_float 39
typedef void (*func_mindustry_graphics_Shaders$CloudShader_setUniformf_int_float_float_float_float)(jcontext ctx, jobject self, jint param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4);
#define VTABLE_mindustry_graphics_Shaders$CloudShader_setUniform1fv_java_lang_String_Array1_float_int_int 40
typedef void (*func_mindustry_graphics_Shaders$CloudShader_setUniform1fv_java_lang_String_Array1_float_int_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3);
#define VTABLE_mindustry_graphics_Shaders$CloudShader_setUniform1fv_int_Array1_float_int_int 41
typedef void (*func_mindustry_graphics_Shaders$CloudShader_setUniform1fv_int_Array1_float_int_int)(jcontext ctx, jobject self, jint param0, jobject param1, jint param2, jint param3);
#define VTABLE_mindustry_graphics_Shaders$CloudShader_setUniform2fv_java_lang_String_Array1_float_int_int 42
typedef void (*func_mindustry_graphics_Shaders$CloudShader_setUniform2fv_java_lang_String_Array1_float_int_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3);
#define VTABLE_mindustry_graphics_Shaders$CloudShader_setUniform2fv_int_Array1_float_int_int 43
typedef void (*func_mindustry_graphics_Shaders$CloudShader_setUniform2fv_int_Array1_float_int_int)(jcontext ctx, jobject self, jint param0, jobject param1, jint param2, jint param3);
#define VTABLE_mindustry_graphics_Shaders$CloudShader_setUniform3fv_java_lang_String_Array1_float_int_int 44
typedef void (*func_mindustry_graphics_Shaders$CloudShader_setUniform3fv_java_lang_String_Array1_float_int_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3);
#define VTABLE_mindustry_graphics_Shaders$CloudShader_setUniform3fv_int_Array1_float_int_int 45
typedef void (*func_mindustry_graphics_Shaders$CloudShader_setUniform3fv_int_Array1_float_int_int)(jcontext ctx, jobject self, jint param0, jobject param1, jint param2, jint param3);
#define VTABLE_mindustry_graphics_Shaders$CloudShader_setUniform4fv_java_lang_String_Array1_float_int_int 46
typedef void (*func_mindustry_graphics_Shaders$CloudShader_setUniform4fv_java_lang_String_Array1_float_int_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3);
#define VTABLE_mindustry_graphics_Shaders$CloudShader_setUniform4fv_int_Array1_float_int_int 47
typedef void (*func_mindustry_graphics_Shaders$CloudShader_setUniform4fv_int_Array1_float_int_int)(jcontext ctx, jobject self, jint param0, jobject param1, jint param2, jint param3);
#define VTABLE_mindustry_graphics_Shaders$CloudShader_setUniformMatrix_java_lang_String_arc_math_Mat 48
typedef void (*func_mindustry_graphics_Shaders$CloudShader_setUniformMatrix_java_lang_String_arc_math_Mat)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_graphics_Shaders$CloudShader_setUniformMatrix_java_lang_String_arc_math_Mat_boolean 49
typedef void (*func_mindustry_graphics_Shaders$CloudShader_setUniformMatrix_java_lang_String_arc_math_Mat_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2);
#define VTABLE_mindustry_graphics_Shaders$CloudShader_setUniformMatrix_int_arc_math_Mat 50
typedef void (*func_mindustry_graphics_Shaders$CloudShader_setUniformMatrix_int_arc_math_Mat)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_mindustry_graphics_Shaders$CloudShader_setUniformMatrix_int_arc_math_Mat_boolean 51
typedef void (*func_mindustry_graphics_Shaders$CloudShader_setUniformMatrix_int_arc_math_Mat_boolean)(jcontext ctx, jobject self, jint param0, jobject param1, jbool param2);
#define VTABLE_mindustry_graphics_Shaders$CloudShader_setUniformMatrix4_java_lang_String_Array1_float 52
typedef void (*func_mindustry_graphics_Shaders$CloudShader_setUniformMatrix4_java_lang_String_Array1_float)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_graphics_Shaders$CloudShader_setUniformMatrix4_java_lang_String_arc_math_Mat 53
typedef void (*func_mindustry_graphics_Shaders$CloudShader_setUniformMatrix4_java_lang_String_arc_math_Mat)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_graphics_Shaders$CloudShader_setUniformMatrix4_java_lang_String_arc_math_Mat_float_float 54
typedef void (*func_mindustry_graphics_Shaders$CloudShader_setUniformMatrix4_java_lang_String_arc_math_Mat_float_float)(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jfloat param3);
#define VTABLE_mindustry_graphics_Shaders$CloudShader_setUniformMatrix3fv_java_lang_String_java_nio_FloatBuffer_int_boolean 55
typedef void (*func_mindustry_graphics_Shaders$CloudShader_setUniformMatrix3fv_java_lang_String_java_nio_FloatBuffer_int_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jbool param3);
#define VTABLE_mindustry_graphics_Shaders$CloudShader_setUniformMatrix4fv_java_lang_String_java_nio_FloatBuffer_int_boolean 56
typedef void (*func_mindustry_graphics_Shaders$CloudShader_setUniformMatrix4fv_java_lang_String_java_nio_FloatBuffer_int_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jbool param3);
#define VTABLE_mindustry_graphics_Shaders$CloudShader_setUniformMatrix4fv_int_Array1_float_int_int 57
typedef void (*func_mindustry_graphics_Shaders$CloudShader_setUniformMatrix4fv_int_Array1_float_int_int)(jcontext ctx, jobject self, jint param0, jobject param1, jint param2, jint param3);
#define VTABLE_mindustry_graphics_Shaders$CloudShader_setUniformMatrix4fv_java_lang_String_Array1_float_int_int 58
typedef void (*func_mindustry_graphics_Shaders$CloudShader_setUniformMatrix4fv_java_lang_String_Array1_float_int_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3);
#define VTABLE_mindustry_graphics_Shaders$CloudShader_setUniformf_java_lang_String_arc_math_geom_Vec2 59
typedef void (*func_mindustry_graphics_Shaders$CloudShader_setUniformf_java_lang_String_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_graphics_Shaders$CloudShader_setUniformf_int_arc_math_geom_Vec2 60
typedef void (*func_mindustry_graphics_Shaders$CloudShader_setUniformf_int_arc_math_geom_Vec2)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_mindustry_graphics_Shaders$CloudShader_setUniformf_java_lang_String_arc_math_geom_Vec3 61
typedef void (*func_mindustry_graphics_Shaders$CloudShader_setUniformf_java_lang_String_arc_math_geom_Vec3)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_graphics_Shaders$CloudShader_setUniformf_int_arc_math_geom_Vec3 62
typedef void (*func_mindustry_graphics_Shaders$CloudShader_setUniformf_int_arc_math_geom_Vec3)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_mindustry_graphics_Shaders$CloudShader_setUniformf_java_lang_String_arc_graphics_Color 63
typedef void (*func_mindustry_graphics_Shaders$CloudShader_setUniformf_java_lang_String_arc_graphics_Color)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_graphics_Shaders$CloudShader_setUniformf_int_arc_graphics_Color 64
typedef void (*func_mindustry_graphics_Shaders$CloudShader_setUniformf_int_arc_graphics_Color)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_mindustry_graphics_Shaders$CloudShader_bind 65
typedef void (*func_mindustry_graphics_Shaders$CloudShader_bind)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_Shaders$CloudShader_disableVertexAttribute_java_lang_String 66
typedef void (*func_mindustry_graphics_Shaders$CloudShader_disableVertexAttribute_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_graphics_Shaders$CloudShader_fetchUniforms 67
typedef void (*func_mindustry_graphics_Shaders$CloudShader_fetchUniforms)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_Shaders$CloudShader_fetchAttributes 68
typedef void (*func_mindustry_graphics_Shaders$CloudShader_fetchAttributes)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_Shaders$CloudShader_hasAttribute_java_lang_String_R_boolean 69
typedef jbool (*func_mindustry_graphics_Shaders$CloudShader_hasAttribute_java_lang_String_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_graphics_Shaders$CloudShader_getAttributeType_java_lang_String_R_int 70
typedef jint (*func_mindustry_graphics_Shaders$CloudShader_getAttributeType_java_lang_String_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_graphics_Shaders$CloudShader_getAttributeLocation_java_lang_String_R_int 71
typedef jint (*func_mindustry_graphics_Shaders$CloudShader_getAttributeLocation_java_lang_String_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_graphics_Shaders$CloudShader_getAttributeSize_java_lang_String_R_int 72
typedef jint (*func_mindustry_graphics_Shaders$CloudShader_getAttributeSize_java_lang_String_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_graphics_Shaders$CloudShader_hasUniform_java_lang_String_R_boolean 73
typedef jbool (*func_mindustry_graphics_Shaders$CloudShader_hasUniform_java_lang_String_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_graphics_Shaders$CloudShader_getUniformType_java_lang_String_R_int 74
typedef jint (*func_mindustry_graphics_Shaders$CloudShader_getUniformType_java_lang_String_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_graphics_Shaders$CloudShader_getUniformLocation_java_lang_String_R_int 75
typedef jint (*func_mindustry_graphics_Shaders$CloudShader_getUniformLocation_java_lang_String_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_graphics_Shaders$CloudShader_getUniformSize_java_lang_String_R_int 76
typedef jint (*func_mindustry_graphics_Shaders$CloudShader_getUniformSize_java_lang_String_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_graphics_Shaders$CloudShader_getAttributes_R_Array1_java_lang_String 77
typedef jobject (*func_mindustry_graphics_Shaders$CloudShader_getAttributes_R_Array1_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_Shaders$CloudShader_getUniforms_R_Array1_java_lang_String 78
typedef jobject (*func_mindustry_graphics_Shaders$CloudShader_getUniforms_R_Array1_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_Shaders$CloudShader_getVertexShaderSource_R_java_lang_String 79
typedef jobject (*func_mindustry_graphics_Shaders$CloudShader_getVertexShaderSource_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_Shaders$CloudShader_getFragmentShaderSource_R_java_lang_String 80
typedef jobject (*func_mindustry_graphics_Shaders$CloudShader_getFragmentShaderSource_R_java_lang_String)(jcontext ctx, jobject self);

void mark_mindustry_graphics_Shaders$CloudShader(jobject object, jint mark, jint depth);
void clinit_mindustry_graphics_Shaders$CloudShader(jcontext ctx);
void init_mindustry_graphics_Shaders$CloudShader(jcontext ctx, jobject self);
void M_mindustry_graphics_Shaders$CloudShader_apply(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
