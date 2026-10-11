#ifndef HEADER_arc_graphics_gl_Shader
#define HEADER_arc_graphics_gl_Shader

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "arc/util/Disposable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_graphics_gl_Shader {
	java_lang_Object parent;
	jref F_uniforms;
	jref F_uniformTypes;
	jref F_uniformSizes;
	jref F_attributes;
	jref F_attributeTypes;
	jref F_attributeSizes;
	jref F_vertexShaderSource;
	jref F_fragmentShaderSource;
	jref F_params;
	jref F_type;
	jref F_log;
	jbool F_isCompiled;
	jref F_uniformNames;
	jref F_attributeNames;
	jint F_program;
	jint F_vertexShaderHandle;
	jint F_fragmentShaderHandle;
	jbool F_disposed;
} arc_graphics_gl_Shader;

extern Class class_arc_graphics_gl_Shader;

extern jobject SF_arc_graphics_gl_Shader_positionAttribute;
extern jobject SF_arc_graphics_gl_Shader_normalAttribute;
extern jobject SF_arc_graphics_gl_Shader_colorAttribute;
extern jobject SF_arc_graphics_gl_Shader_mixColorAttribute;
extern jobject SF_arc_graphics_gl_Shader_texcoordAttribute;
extern jbool SF_arc_graphics_gl_Shader_pedantic;
extern jobject SF_arc_graphics_gl_Shader_prependVertexCode;
extern jobject SF_arc_graphics_gl_Shader_prependFragmentCode;
extern jobject SF_arc_graphics_gl_Shader_val;

#define VTABLE_arc_graphics_gl_Shader_hashCode_R_int 0
typedef jint (*func_arc_graphics_gl_Shader_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_Shader_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_graphics_gl_Shader_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_gl_Shader_clone_R_java_lang_Object 2
typedef jobject (*func_arc_graphics_gl_Shader_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_Shader_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_graphics_gl_Shader_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_Shader_toString_R_java_lang_String 4
typedef jobject (*func_arc_graphics_gl_Shader_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_Shader_finalize 5
typedef void (*func_arc_graphics_gl_Shader_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_Shader_notify 6
typedef void (*func_arc_graphics_gl_Shader_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_Shader_notifyAll 7
typedef void (*func_arc_graphics_gl_Shader_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_Shader_wait 8
typedef void (*func_arc_graphics_gl_Shader_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_Shader_wait_long 9
typedef void (*func_arc_graphics_gl_Shader_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_graphics_gl_Shader_wait_long_int 10
typedef void (*func_arc_graphics_gl_Shader_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_graphics_gl_Shader_dispose 11
typedef void (*func_arc_graphics_gl_Shader_dispose)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_Shader_isDisposed_R_boolean 12
typedef jbool (*func_arc_graphics_gl_Shader_isDisposed_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_Shader_apply 13
typedef void (*func_arc_graphics_gl_Shader_apply)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_Shader_preprocess_java_lang_String_boolean_R_java_lang_String 14
typedef jobject (*func_arc_graphics_gl_Shader_preprocess_java_lang_String_boolean_R_java_lang_String)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_arc_graphics_gl_Shader_compileShaders_java_lang_String_java_lang_String 15
typedef void (*func_arc_graphics_gl_Shader_compileShaders_java_lang_String_java_lang_String)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_graphics_gl_Shader_loadShader_int_java_lang_String_R_int 16
typedef jint (*func_arc_graphics_gl_Shader_loadShader_int_java_lang_String_R_int)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_arc_graphics_gl_Shader_createProgram_R_int 17
typedef jint (*func_arc_graphics_gl_Shader_createProgram_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_Shader_linkProgram_int_R_int 18
typedef jint (*func_arc_graphics_gl_Shader_linkProgram_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_graphics_gl_Shader_getLog_R_java_lang_String 19
typedef jobject (*func_arc_graphics_gl_Shader_getLog_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_Shader_isCompiled_R_boolean 20
typedef jbool (*func_arc_graphics_gl_Shader_isCompiled_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_Shader_fetchAttributeLocation_java_lang_String_R_int 21
typedef jint (*func_arc_graphics_gl_Shader_fetchAttributeLocation_java_lang_String_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_gl_Shader_fetchUniformLocation_java_lang_String_R_int 22
typedef jint (*func_arc_graphics_gl_Shader_fetchUniformLocation_java_lang_String_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_gl_Shader_fetchUniformLocation_java_lang_String_boolean_R_int 23
typedef jint (*func_arc_graphics_gl_Shader_fetchUniformLocation_java_lang_String_boolean_R_int)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_arc_graphics_gl_Shader_setUniformi_java_lang_String_int 24
typedef void (*func_arc_graphics_gl_Shader_setUniformi_java_lang_String_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_arc_graphics_gl_Shader_setUniformi_int_int 25
typedef void (*func_arc_graphics_gl_Shader_setUniformi_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_arc_graphics_gl_Shader_setUniformi_java_lang_String_int_int 26
typedef void (*func_arc_graphics_gl_Shader_setUniformi_java_lang_String_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_arc_graphics_gl_Shader_setUniformi_int_int_int 27
typedef void (*func_arc_graphics_gl_Shader_setUniformi_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2);
#define VTABLE_arc_graphics_gl_Shader_setUniformi_java_lang_String_int_int_int 28
typedef void (*func_arc_graphics_gl_Shader_setUniformi_java_lang_String_int_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3);
#define VTABLE_arc_graphics_gl_Shader_setUniformi_int_int_int_int 29
typedef void (*func_arc_graphics_gl_Shader_setUniformi_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
#define VTABLE_arc_graphics_gl_Shader_setUniformi_java_lang_String_int_int_int_int 30
typedef void (*func_arc_graphics_gl_Shader_setUniformi_java_lang_String_int_int_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4);
#define VTABLE_arc_graphics_gl_Shader_setUniformi_int_int_int_int_int 31
typedef void (*func_arc_graphics_gl_Shader_setUniformi_int_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4);
#define VTABLE_arc_graphics_gl_Shader_setUniformf_java_lang_String_float 32
typedef void (*func_arc_graphics_gl_Shader_setUniformf_java_lang_String_float)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_arc_graphics_gl_Shader_setUniformf_int_float 33
typedef void (*func_arc_graphics_gl_Shader_setUniformf_int_float)(jcontext ctx, jobject self, jint param0, jfloat param1);
#define VTABLE_arc_graphics_gl_Shader_setUniformf_java_lang_String_float_float 34
typedef void (*func_arc_graphics_gl_Shader_setUniformf_java_lang_String_float_float)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
#define VTABLE_arc_graphics_gl_Shader_setUniformf_int_float_float 35
typedef void (*func_arc_graphics_gl_Shader_setUniformf_int_float_float)(jcontext ctx, jobject self, jint param0, jfloat param1, jfloat param2);
#define VTABLE_arc_graphics_gl_Shader_setUniformf_java_lang_String_float_float_float 36
typedef void (*func_arc_graphics_gl_Shader_setUniformf_java_lang_String_float_float_float)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_arc_graphics_gl_Shader_setUniformf_int_float_float_float 37
typedef void (*func_arc_graphics_gl_Shader_setUniformf_int_float_float_float)(jcontext ctx, jobject self, jint param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_arc_graphics_gl_Shader_setUniformf_java_lang_String_float_float_float_float 38
typedef void (*func_arc_graphics_gl_Shader_setUniformf_java_lang_String_float_float_float_float)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4);
#define VTABLE_arc_graphics_gl_Shader_setUniformf_int_float_float_float_float 39
typedef void (*func_arc_graphics_gl_Shader_setUniformf_int_float_float_float_float)(jcontext ctx, jobject self, jint param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4);
#define VTABLE_arc_graphics_gl_Shader_setUniform1fv_java_lang_String_Array1_float_int_int 40
typedef void (*func_arc_graphics_gl_Shader_setUniform1fv_java_lang_String_Array1_float_int_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3);
#define VTABLE_arc_graphics_gl_Shader_setUniform1fv_int_Array1_float_int_int 41
typedef void (*func_arc_graphics_gl_Shader_setUniform1fv_int_Array1_float_int_int)(jcontext ctx, jobject self, jint param0, jobject param1, jint param2, jint param3);
#define VTABLE_arc_graphics_gl_Shader_setUniform2fv_java_lang_String_Array1_float_int_int 42
typedef void (*func_arc_graphics_gl_Shader_setUniform2fv_java_lang_String_Array1_float_int_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3);
#define VTABLE_arc_graphics_gl_Shader_setUniform2fv_int_Array1_float_int_int 43
typedef void (*func_arc_graphics_gl_Shader_setUniform2fv_int_Array1_float_int_int)(jcontext ctx, jobject self, jint param0, jobject param1, jint param2, jint param3);
#define VTABLE_arc_graphics_gl_Shader_setUniform3fv_java_lang_String_Array1_float_int_int 44
typedef void (*func_arc_graphics_gl_Shader_setUniform3fv_java_lang_String_Array1_float_int_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3);
#define VTABLE_arc_graphics_gl_Shader_setUniform3fv_int_Array1_float_int_int 45
typedef void (*func_arc_graphics_gl_Shader_setUniform3fv_int_Array1_float_int_int)(jcontext ctx, jobject self, jint param0, jobject param1, jint param2, jint param3);
#define VTABLE_arc_graphics_gl_Shader_setUniform4fv_java_lang_String_Array1_float_int_int 46
typedef void (*func_arc_graphics_gl_Shader_setUniform4fv_java_lang_String_Array1_float_int_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3);
#define VTABLE_arc_graphics_gl_Shader_setUniform4fv_int_Array1_float_int_int 47
typedef void (*func_arc_graphics_gl_Shader_setUniform4fv_int_Array1_float_int_int)(jcontext ctx, jobject self, jint param0, jobject param1, jint param2, jint param3);
#define VTABLE_arc_graphics_gl_Shader_setUniformMatrix_java_lang_String_arc_math_Mat 48
typedef void (*func_arc_graphics_gl_Shader_setUniformMatrix_java_lang_String_arc_math_Mat)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_graphics_gl_Shader_setUniformMatrix_java_lang_String_arc_math_Mat_boolean 49
typedef void (*func_arc_graphics_gl_Shader_setUniformMatrix_java_lang_String_arc_math_Mat_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2);
#define VTABLE_arc_graphics_gl_Shader_setUniformMatrix_int_arc_math_Mat 50
typedef void (*func_arc_graphics_gl_Shader_setUniformMatrix_int_arc_math_Mat)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_arc_graphics_gl_Shader_setUniformMatrix_int_arc_math_Mat_boolean 51
typedef void (*func_arc_graphics_gl_Shader_setUniformMatrix_int_arc_math_Mat_boolean)(jcontext ctx, jobject self, jint param0, jobject param1, jbool param2);
#define VTABLE_arc_graphics_gl_Shader_setUniformMatrix4_java_lang_String_Array1_float 52
typedef void (*func_arc_graphics_gl_Shader_setUniformMatrix4_java_lang_String_Array1_float)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_graphics_gl_Shader_setUniformMatrix4_java_lang_String_arc_math_Mat 53
typedef void (*func_arc_graphics_gl_Shader_setUniformMatrix4_java_lang_String_arc_math_Mat)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_graphics_gl_Shader_setUniformMatrix4_java_lang_String_arc_math_Mat_float_float 54
typedef void (*func_arc_graphics_gl_Shader_setUniformMatrix4_java_lang_String_arc_math_Mat_float_float)(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jfloat param3);
#define VTABLE_arc_graphics_gl_Shader_setUniformMatrix3fv_java_lang_String_java_nio_FloatBuffer_int_boolean 55
typedef void (*func_arc_graphics_gl_Shader_setUniformMatrix3fv_java_lang_String_java_nio_FloatBuffer_int_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jbool param3);
#define VTABLE_arc_graphics_gl_Shader_setUniformMatrix4fv_java_lang_String_java_nio_FloatBuffer_int_boolean 56
typedef void (*func_arc_graphics_gl_Shader_setUniformMatrix4fv_java_lang_String_java_nio_FloatBuffer_int_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jbool param3);
#define VTABLE_arc_graphics_gl_Shader_setUniformMatrix4fv_int_Array1_float_int_int 57
typedef void (*func_arc_graphics_gl_Shader_setUniformMatrix4fv_int_Array1_float_int_int)(jcontext ctx, jobject self, jint param0, jobject param1, jint param2, jint param3);
#define VTABLE_arc_graphics_gl_Shader_setUniformMatrix4fv_java_lang_String_Array1_float_int_int 58
typedef void (*func_arc_graphics_gl_Shader_setUniformMatrix4fv_java_lang_String_Array1_float_int_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3);
#define VTABLE_arc_graphics_gl_Shader_setUniformf_java_lang_String_arc_math_geom_Vec2 59
typedef void (*func_arc_graphics_gl_Shader_setUniformf_java_lang_String_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_graphics_gl_Shader_setUniformf_int_arc_math_geom_Vec2 60
typedef void (*func_arc_graphics_gl_Shader_setUniformf_int_arc_math_geom_Vec2)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_arc_graphics_gl_Shader_setUniformf_java_lang_String_arc_math_geom_Vec3 61
typedef void (*func_arc_graphics_gl_Shader_setUniformf_java_lang_String_arc_math_geom_Vec3)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_graphics_gl_Shader_setUniformf_int_arc_math_geom_Vec3 62
typedef void (*func_arc_graphics_gl_Shader_setUniformf_int_arc_math_geom_Vec3)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_arc_graphics_gl_Shader_setUniformf_java_lang_String_arc_graphics_Color 63
typedef void (*func_arc_graphics_gl_Shader_setUniformf_java_lang_String_arc_graphics_Color)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_graphics_gl_Shader_setUniformf_int_arc_graphics_Color 64
typedef void (*func_arc_graphics_gl_Shader_setUniformf_int_arc_graphics_Color)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_arc_graphics_gl_Shader_bind 65
typedef void (*func_arc_graphics_gl_Shader_bind)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_Shader_disableVertexAttribute_java_lang_String 66
typedef void (*func_arc_graphics_gl_Shader_disableVertexAttribute_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_gl_Shader_fetchUniforms 67
typedef void (*func_arc_graphics_gl_Shader_fetchUniforms)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_Shader_fetchAttributes 68
typedef void (*func_arc_graphics_gl_Shader_fetchAttributes)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_Shader_hasAttribute_java_lang_String_R_boolean 69
typedef jbool (*func_arc_graphics_gl_Shader_hasAttribute_java_lang_String_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_gl_Shader_getAttributeType_java_lang_String_R_int 70
typedef jint (*func_arc_graphics_gl_Shader_getAttributeType_java_lang_String_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_gl_Shader_getAttributeLocation_java_lang_String_R_int 71
typedef jint (*func_arc_graphics_gl_Shader_getAttributeLocation_java_lang_String_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_gl_Shader_getAttributeSize_java_lang_String_R_int 72
typedef jint (*func_arc_graphics_gl_Shader_getAttributeSize_java_lang_String_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_gl_Shader_hasUniform_java_lang_String_R_boolean 73
typedef jbool (*func_arc_graphics_gl_Shader_hasUniform_java_lang_String_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_gl_Shader_getUniformType_java_lang_String_R_int 74
typedef jint (*func_arc_graphics_gl_Shader_getUniformType_java_lang_String_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_gl_Shader_getUniformLocation_java_lang_String_R_int 75
typedef jint (*func_arc_graphics_gl_Shader_getUniformLocation_java_lang_String_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_gl_Shader_getUniformSize_java_lang_String_R_int 76
typedef jint (*func_arc_graphics_gl_Shader_getUniformSize_java_lang_String_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_gl_Shader_getAttributes_R_Array1_java_lang_String 77
typedef jobject (*func_arc_graphics_gl_Shader_getAttributes_R_Array1_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_Shader_getUniforms_R_Array1_java_lang_String 78
typedef jobject (*func_arc_graphics_gl_Shader_getUniforms_R_Array1_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_Shader_getVertexShaderSource_R_java_lang_String 79
typedef jobject (*func_arc_graphics_gl_Shader_getVertexShaderSource_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_Shader_getFragmentShaderSource_R_java_lang_String 80
typedef jobject (*func_arc_graphics_gl_Shader_getFragmentShaderSource_R_java_lang_String)(jcontext ctx, jobject self);

void mark_arc_graphics_gl_Shader(jobject object, jint mark, jint depth);
void clinit_arc_graphics_gl_Shader(jcontext ctx);
void init_arc_graphics_gl_Shader_java_lang_String_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1);
void init_arc_graphics_gl_Shader_arc_files_Fi_arc_files_Fi(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_arc_graphics_gl_Shader_apply(jcontext ctx, jobject self);
jobject M_arc_graphics_gl_Shader_preprocess_java_lang_String_boolean_R_java_lang_String(jcontext ctx, jobject self, jobject param0, jbool param1);
void M_arc_graphics_gl_Shader_compileShaders_java_lang_String_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1);
jint M_arc_graphics_gl_Shader_loadShader_int_java_lang_String_R_int(jcontext ctx, jobject self, jint param0, jobject param1);
jint M_arc_graphics_gl_Shader_createProgram_R_int(jcontext ctx, jobject self);
jint M_arc_graphics_gl_Shader_linkProgram_int_R_int(jcontext ctx, jobject self, jint param0);
jobject M_arc_graphics_gl_Shader_getLog_R_java_lang_String(jcontext ctx, jobject self);
jbool M_arc_graphics_gl_Shader_isCompiled_R_boolean(jcontext ctx, jobject self);
jint M_arc_graphics_gl_Shader_fetchAttributeLocation_java_lang_String_R_int(jcontext ctx, jobject self, jobject param0);
jint M_arc_graphics_gl_Shader_fetchUniformLocation_java_lang_String_R_int(jcontext ctx, jobject self, jobject param0);
jint M_arc_graphics_gl_Shader_fetchUniformLocation_java_lang_String_boolean_R_int(jcontext ctx, jobject self, jobject param0, jbool param1);
void M_arc_graphics_gl_Shader_setUniformi_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1);
void M_arc_graphics_gl_Shader_setUniformi_int_int(jcontext ctx, jobject self, jint param0, jint param1);
void M_arc_graphics_gl_Shader_setUniformi_java_lang_String_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
void M_arc_graphics_gl_Shader_setUniformi_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2);
void M_arc_graphics_gl_Shader_setUniformi_java_lang_String_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3);
void M_arc_graphics_gl_Shader_setUniformi_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
void M_arc_graphics_gl_Shader_setUniformi_java_lang_String_int_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4);
void M_arc_graphics_gl_Shader_setUniformi_int_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4);
void M_arc_graphics_gl_Shader_setUniformf_java_lang_String_float(jcontext ctx, jobject self, jobject param0, jfloat param1);
void M_arc_graphics_gl_Shader_setUniformf_int_float(jcontext ctx, jobject self, jint param0, jfloat param1);
void M_arc_graphics_gl_Shader_setUniformf_java_lang_String_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
void M_arc_graphics_gl_Shader_setUniformf_int_float_float(jcontext ctx, jobject self, jint param0, jfloat param1, jfloat param2);
void M_arc_graphics_gl_Shader_setUniformf_java_lang_String_float_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3);
void M_arc_graphics_gl_Shader_setUniformf_int_float_float_float(jcontext ctx, jobject self, jint param0, jfloat param1, jfloat param2, jfloat param3);
void M_arc_graphics_gl_Shader_setUniformf_java_lang_String_float_float_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4);
void M_arc_graphics_gl_Shader_setUniformf_int_float_float_float_float(jcontext ctx, jobject self, jint param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4);
void M_arc_graphics_gl_Shader_setUniform1fv_java_lang_String_Array1_float_int_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3);
void M_arc_graphics_gl_Shader_setUniform1fv_int_Array1_float_int_int(jcontext ctx, jobject self, jint param0, jobject param1, jint param2, jint param3);
void M_arc_graphics_gl_Shader_setUniform2fv_java_lang_String_Array1_float_int_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3);
void M_arc_graphics_gl_Shader_setUniform2fv_int_Array1_float_int_int(jcontext ctx, jobject self, jint param0, jobject param1, jint param2, jint param3);
void M_arc_graphics_gl_Shader_setUniform3fv_java_lang_String_Array1_float_int_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3);
void M_arc_graphics_gl_Shader_setUniform3fv_int_Array1_float_int_int(jcontext ctx, jobject self, jint param0, jobject param1, jint param2, jint param3);
void M_arc_graphics_gl_Shader_setUniform4fv_java_lang_String_Array1_float_int_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3);
void M_arc_graphics_gl_Shader_setUniform4fv_int_Array1_float_int_int(jcontext ctx, jobject self, jint param0, jobject param1, jint param2, jint param3);
void M_arc_graphics_gl_Shader_setUniformMatrix_java_lang_String_arc_math_Mat(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_arc_graphics_gl_Shader_setUniformMatrix_java_lang_String_arc_math_Mat_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2);
void M_arc_graphics_gl_Shader_setUniformMatrix_int_arc_math_Mat(jcontext ctx, jobject self, jint param0, jobject param1);
void M_arc_graphics_gl_Shader_setUniformMatrix_int_arc_math_Mat_boolean(jcontext ctx, jobject self, jint param0, jobject param1, jbool param2);
void M_arc_graphics_gl_Shader_setUniformMatrix4_java_lang_String_Array1_float(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_arc_graphics_gl_Shader_setUniformMatrix4_java_lang_String_arc_math_Mat(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_arc_graphics_gl_Shader_setUniformMatrix4_java_lang_String_arc_math_Mat_float_float(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jfloat param3);
void M_arc_graphics_gl_Shader_setUniformMatrix3fv_java_lang_String_java_nio_FloatBuffer_int_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jbool param3);
void M_arc_graphics_gl_Shader_setUniformMatrix4fv_java_lang_String_java_nio_FloatBuffer_int_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jbool param3);
void M_arc_graphics_gl_Shader_setUniformMatrix4fv_int_Array1_float_int_int(jcontext ctx, jobject self, jint param0, jobject param1, jint param2, jint param3);
void M_arc_graphics_gl_Shader_setUniformMatrix4fv_java_lang_String_Array1_float_int_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3);
void M_arc_graphics_gl_Shader_setUniformf_java_lang_String_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_arc_graphics_gl_Shader_setUniformf_int_arc_math_geom_Vec2(jcontext ctx, jobject self, jint param0, jobject param1);
void M_arc_graphics_gl_Shader_setUniformf_java_lang_String_arc_math_geom_Vec3(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_arc_graphics_gl_Shader_setUniformf_int_arc_math_geom_Vec3(jcontext ctx, jobject self, jint param0, jobject param1);
void M_arc_graphics_gl_Shader_setUniformf_java_lang_String_arc_graphics_Color(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_arc_graphics_gl_Shader_setUniformf_int_arc_graphics_Color(jcontext ctx, jobject self, jint param0, jobject param1);
void M_arc_graphics_gl_Shader_bind(jcontext ctx, jobject self);
void M_arc_graphics_gl_Shader_dispose(jcontext ctx, jobject self);
jbool M_arc_graphics_gl_Shader_isDisposed_R_boolean(jcontext ctx, jobject self);
void M_arc_graphics_gl_Shader_disableVertexAttribute_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_arc_graphics_gl_Shader_fetchUniforms(jcontext ctx, jobject self);
void M_arc_graphics_gl_Shader_fetchAttributes(jcontext ctx, jobject self);
jbool M_arc_graphics_gl_Shader_hasAttribute_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0);
jint M_arc_graphics_gl_Shader_getAttributeType_java_lang_String_R_int(jcontext ctx, jobject self, jobject param0);
jint M_arc_graphics_gl_Shader_getAttributeLocation_java_lang_String_R_int(jcontext ctx, jobject self, jobject param0);
jint M_arc_graphics_gl_Shader_getAttributeSize_java_lang_String_R_int(jcontext ctx, jobject self, jobject param0);
jbool M_arc_graphics_gl_Shader_hasUniform_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0);
jint M_arc_graphics_gl_Shader_getUniformType_java_lang_String_R_int(jcontext ctx, jobject self, jobject param0);
jint M_arc_graphics_gl_Shader_getUniformLocation_java_lang_String_R_int(jcontext ctx, jobject self, jobject param0);
jint M_arc_graphics_gl_Shader_getUniformSize_java_lang_String_R_int(jcontext ctx, jobject self, jobject param0);
jobject M_arc_graphics_gl_Shader_getAttributes_R_Array1_java_lang_String(jcontext ctx, jobject self);
jobject M_arc_graphics_gl_Shader_getUniforms_R_Array1_java_lang_String(jcontext ctx, jobject self);
jobject M_arc_graphics_gl_Shader_getVertexShaderSource_R_java_lang_String(jcontext ctx, jobject self);
jobject M_arc_graphics_gl_Shader_getFragmentShaderSource_R_java_lang_String(jcontext ctx, jobject self);
jobject SM_arc_graphics_gl_Shader_copyTransform_arc_math_Mat_R_Array1_float(jcontext ctx, jobject param0);
jobject SM_arc_graphics_gl_Shader_copyTransform_arc_math_Mat_float_float_R_Array1_float(jcontext ctx, jobject param0, jfloat param1, jfloat param2);

#ifdef __cplusplus
}
#endif

#endif
