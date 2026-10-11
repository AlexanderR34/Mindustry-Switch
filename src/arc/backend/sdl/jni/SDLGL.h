#ifndef HEADER_arc_backend_sdl_jni_SDLGL
#define HEADER_arc_backend_sdl_jni_SDLGL

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_backend_sdl_jni_SDLGL {
	java_lang_Object parent;
} arc_backend_sdl_jni_SDLGL;

extern Class class_arc_backend_sdl_jni_SDLGL;


#define VTABLE_arc_backend_sdl_jni_SDLGL_hashCode_R_int 0
typedef jint (*func_arc_backend_sdl_jni_SDLGL_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_jni_SDLGL_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_backend_sdl_jni_SDLGL_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_backend_sdl_jni_SDLGL_clone_R_java_lang_Object 2
typedef jobject (*func_arc_backend_sdl_jni_SDLGL_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_jni_SDLGL_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_backend_sdl_jni_SDLGL_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_jni_SDLGL_toString_R_java_lang_String 4
typedef jobject (*func_arc_backend_sdl_jni_SDLGL_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_jni_SDLGL_finalize 5
typedef void (*func_arc_backend_sdl_jni_SDLGL_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_jni_SDLGL_notify 6
typedef void (*func_arc_backend_sdl_jni_SDLGL_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_jni_SDLGL_notifyAll 7
typedef void (*func_arc_backend_sdl_jni_SDLGL_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_jni_SDLGL_wait 8
typedef void (*func_arc_backend_sdl_jni_SDLGL_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_jni_SDLGL_wait_long 9
typedef void (*func_arc_backend_sdl_jni_SDLGL_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_backend_sdl_jni_SDLGL_wait_long_int 10
typedef void (*func_arc_backend_sdl_jni_SDLGL_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_arc_backend_sdl_jni_SDLGL(jobject object, jint mark, jint depth);
void clinit_arc_backend_sdl_jni_SDLGL(jcontext ctx);
void init_arc_backend_sdl_jni_SDLGL(jcontext ctx, jobject self);
jobject SM_arc_backend_sdl_jni_SDLGL_init_R_java_lang_String(jcontext ctx);
void SM_arc_backend_sdl_jni_SDLGL_glActiveTexture_int(jcontext ctx, jint param0);
void SM_arc_backend_sdl_jni_SDLGL_glBindTexture_int_int(jcontext ctx, jint param0, jint param1);
void SM_arc_backend_sdl_jni_SDLGL_glBlendFunc_int_int(jcontext ctx, jint param0, jint param1);
void SM_arc_backend_sdl_jni_SDLGL_glClear_int(jcontext ctx, jint param0);
void SM_arc_backend_sdl_jni_SDLGL_glClearColor_float_float_float_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
void SM_arc_backend_sdl_jni_SDLGL_glClearDepthf_float(jcontext ctx, jfloat param0);
void SM_arc_backend_sdl_jni_SDLGL_glClearStencil_int(jcontext ctx, jint param0);
void SM_arc_backend_sdl_jni_SDLGL_glColorMask_boolean_boolean_boolean_boolean(jcontext ctx, jbool param0, jbool param1, jbool param2, jbool param3);
void SM_arc_backend_sdl_jni_SDLGL_glCompressedTexImage2D_int_int_int_int_int_int_int_java_nio_Buffer(jcontext ctx, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jobject param7);
void SM_arc_backend_sdl_jni_SDLGL_glCompressedTexSubImage2D_int_int_int_int_int_int_int_int_java_nio_Buffer(jcontext ctx, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jobject param8);
void SM_arc_backend_sdl_jni_SDLGL_glCopyTexImage2D_int_int_int_int_int_int_int_int(jcontext ctx, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7);
void SM_arc_backend_sdl_jni_SDLGL_glCopyTexSubImage2D_int_int_int_int_int_int_int_int(jcontext ctx, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7);
void SM_arc_backend_sdl_jni_SDLGL_glCullFace_int(jcontext ctx, jint param0);
void SM_arc_backend_sdl_jni_SDLGL_glDeleteTexture_int(jcontext ctx, jint param0);
void SM_arc_backend_sdl_jni_SDLGL_glDepthFunc_int(jcontext ctx, jint param0);
void SM_arc_backend_sdl_jni_SDLGL_glDepthMask_boolean(jcontext ctx, jbool param0);
void SM_arc_backend_sdl_jni_SDLGL_glDepthRangef_float_float(jcontext ctx, jfloat param0, jfloat param1);
void SM_arc_backend_sdl_jni_SDLGL_glDisable_int(jcontext ctx, jint param0);
void SM_arc_backend_sdl_jni_SDLGL_glDrawArrays_int_int_int(jcontext ctx, jint param0, jint param1, jint param2);
void SM_arc_backend_sdl_jni_SDLGL_glDrawElements_int_int_int_java_nio_Buffer(jcontext ctx, jint param0, jint param1, jint param2, jobject param3);
void SM_arc_backend_sdl_jni_SDLGL_glEnable_int(jcontext ctx, jint param0);
void SM_arc_backend_sdl_jni_SDLGL_glFinish(jcontext ctx);
void SM_arc_backend_sdl_jni_SDLGL_glFlush(jcontext ctx);
void SM_arc_backend_sdl_jni_SDLGL_glFrontFace_int(jcontext ctx, jint param0);
jint SM_arc_backend_sdl_jni_SDLGL_glGenTexture_R_int(jcontext ctx);
jint SM_arc_backend_sdl_jni_SDLGL_glGetError_R_int(jcontext ctx);
void SM_arc_backend_sdl_jni_SDLGL_glGetIntegerv_int_java_nio_IntBuffer(jcontext ctx, jint param0, jobject param1);
jobject SM_arc_backend_sdl_jni_SDLGL_glGetString_int_R_java_lang_String(jcontext ctx, jint param0);
void SM_arc_backend_sdl_jni_SDLGL_glHint_int_int(jcontext ctx, jint param0, jint param1);
void SM_arc_backend_sdl_jni_SDLGL_glLineWidth_float(jcontext ctx, jfloat param0);
void SM_arc_backend_sdl_jni_SDLGL_glPixelStorei_int_int(jcontext ctx, jint param0, jint param1);
void SM_arc_backend_sdl_jni_SDLGL_glPolygonOffset_float_float(jcontext ctx, jfloat param0, jfloat param1);
void SM_arc_backend_sdl_jni_SDLGL_glReadPixels_int_int_int_int_int_int_java_nio_Buffer(jcontext ctx, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jobject param6);
void SM_arc_backend_sdl_jni_SDLGL_glScissor_int_int_int_int(jcontext ctx, jint param0, jint param1, jint param2, jint param3);
void SM_arc_backend_sdl_jni_SDLGL_glStencilFunc_int_int_int(jcontext ctx, jint param0, jint param1, jint param2);
void SM_arc_backend_sdl_jni_SDLGL_glStencilMask_int(jcontext ctx, jint param0);
void SM_arc_backend_sdl_jni_SDLGL_glStencilOp_int_int_int(jcontext ctx, jint param0, jint param1, jint param2);
void SM_arc_backend_sdl_jni_SDLGL_glTexImage2D_int_int_int_int_int_int_int_int_java_nio_Buffer(jcontext ctx, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jobject param8);
void SM_arc_backend_sdl_jni_SDLGL_glTexParameterf_int_int_float(jcontext ctx, jint param0, jint param1, jfloat param2);
void SM_arc_backend_sdl_jni_SDLGL_glTexSubImage2D_int_int_int_int_int_int_int_int_java_nio_Buffer(jcontext ctx, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jobject param8);
void SM_arc_backend_sdl_jni_SDLGL_glViewport_int_int_int_int(jcontext ctx, jint param0, jint param1, jint param2, jint param3);
void SM_arc_backend_sdl_jni_SDLGL_glAttachShader_int_int(jcontext ctx, jint param0, jint param1);
void SM_arc_backend_sdl_jni_SDLGL_glBindAttribLocation_int_int_java_lang_String(jcontext ctx, jint param0, jint param1, jobject param2);
void SM_arc_backend_sdl_jni_SDLGL_glBindBuffer_int_int(jcontext ctx, jint param0, jint param1);
void SM_arc_backend_sdl_jni_SDLGL_glBindFramebuffer_int_int(jcontext ctx, jint param0, jint param1);
void SM_arc_backend_sdl_jni_SDLGL_glBindRenderbuffer_int_int(jcontext ctx, jint param0, jint param1);
void SM_arc_backend_sdl_jni_SDLGL_glBlendColor_float_float_float_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
void SM_arc_backend_sdl_jni_SDLGL_glBlendEquation_int(jcontext ctx, jint param0);
void SM_arc_backend_sdl_jni_SDLGL_glBlendEquationSeparate_int_int(jcontext ctx, jint param0, jint param1);
void SM_arc_backend_sdl_jni_SDLGL_glBlendFuncSeparate_int_int_int_int(jcontext ctx, jint param0, jint param1, jint param2, jint param3);
void SM_arc_backend_sdl_jni_SDLGL_glBufferData_int_int_java_nio_Buffer_int(jcontext ctx, jint param0, jint param1, jobject param2, jint param3);
void SM_arc_backend_sdl_jni_SDLGL_glBufferSubData_int_int_int_java_nio_Buffer(jcontext ctx, jint param0, jint param1, jint param2, jobject param3);
jint SM_arc_backend_sdl_jni_SDLGL_glCheckFramebufferStatus_int_R_int(jcontext ctx, jint param0);
void SM_arc_backend_sdl_jni_SDLGL_glCompileShader_int(jcontext ctx, jint param0);
jint SM_arc_backend_sdl_jni_SDLGL_glCreateProgram_R_int(jcontext ctx);
jint SM_arc_backend_sdl_jni_SDLGL_glCreateShader_int_R_int(jcontext ctx, jint param0);
void SM_arc_backend_sdl_jni_SDLGL_glDeleteBuffer_int(jcontext ctx, jint param0);
void SM_arc_backend_sdl_jni_SDLGL_glDeleteFramebuffer_int(jcontext ctx, jint param0);
void SM_arc_backend_sdl_jni_SDLGL_glDeleteProgram_int(jcontext ctx, jint param0);
void SM_arc_backend_sdl_jni_SDLGL_glDeleteRenderbuffer_int(jcontext ctx, jint param0);
void SM_arc_backend_sdl_jni_SDLGL_glDeleteShader_int(jcontext ctx, jint param0);
void SM_arc_backend_sdl_jni_SDLGL_glDetachShader_int_int(jcontext ctx, jint param0, jint param1);
void SM_arc_backend_sdl_jni_SDLGL_glDisableVertexAttribArray_int(jcontext ctx, jint param0);
void SM_arc_backend_sdl_jni_SDLGL_glDrawElements_int_int_int_int(jcontext ctx, jint param0, jint param1, jint param2, jint param3);
void SM_arc_backend_sdl_jni_SDLGL_glEnableVertexAttribArray_int(jcontext ctx, jint param0);
void SM_arc_backend_sdl_jni_SDLGL_glFramebufferRenderbuffer_int_int_int_int(jcontext ctx, jint param0, jint param1, jint param2, jint param3);
void SM_arc_backend_sdl_jni_SDLGL_glFramebufferTexture2D_int_int_int_int_int(jcontext ctx, jint param0, jint param1, jint param2, jint param3, jint param4);
jint SM_arc_backend_sdl_jni_SDLGL_glGenBuffer_R_int(jcontext ctx);
void SM_arc_backend_sdl_jni_SDLGL_glGenerateMipmap_int(jcontext ctx, jint param0);
jint SM_arc_backend_sdl_jni_SDLGL_glGenFramebuffer_R_int(jcontext ctx);
jint SM_arc_backend_sdl_jni_SDLGL_glGenRenderbuffer_R_int(jcontext ctx);
jobject SM_arc_backend_sdl_jni_SDLGL_glGetActiveAttrib_int_int_java_lang_Object_java_lang_Object_R_java_lang_String(jcontext ctx, jint param0, jint param1, jobject param2, jobject param3);
jobject SM_arc_backend_sdl_jni_SDLGL_glGetActiveUniform_int_int_java_lang_Object_java_lang_Object_R_java_lang_String(jcontext ctx, jint param0, jint param1, jobject param2, jobject param3);
jint SM_arc_backend_sdl_jni_SDLGL_glGetAttribLocation_int_java_lang_String_R_int(jcontext ctx, jint param0, jobject param1);
void SM_arc_backend_sdl_jni_SDLGL_glGetBooleanv_int_java_nio_Buffer(jcontext ctx, jint param0, jobject param1);
void SM_arc_backend_sdl_jni_SDLGL_glGetBufferParameteriv_int_int_java_nio_IntBuffer(jcontext ctx, jint param0, jint param1, jobject param2);
void SM_arc_backend_sdl_jni_SDLGL_glGetFloatv_int_java_nio_FloatBuffer(jcontext ctx, jint param0, jobject param1);
void SM_arc_backend_sdl_jni_SDLGL_glGetFramebufferAttachmentParameteriv_int_int_int_java_nio_IntBuffer(jcontext ctx, jint param0, jint param1, jint param2, jobject param3);
void SM_arc_backend_sdl_jni_SDLGL_glGetProgramiv_int_int_java_nio_IntBuffer(jcontext ctx, jint param0, jint param1, jobject param2);
jobject SM_arc_backend_sdl_jni_SDLGL_glGetProgramInfoLog_int_R_java_lang_String(jcontext ctx, jint param0);
void SM_arc_backend_sdl_jni_SDLGL_glGetRenderbufferParameteriv_int_int_java_nio_IntBuffer(jcontext ctx, jint param0, jint param1, jobject param2);
void SM_arc_backend_sdl_jni_SDLGL_glGetShaderiv_int_int_java_nio_IntBuffer(jcontext ctx, jint param0, jint param1, jobject param2);
jobject SM_arc_backend_sdl_jni_SDLGL_glGetShaderInfoLog_int_R_java_lang_String(jcontext ctx, jint param0);
void SM_arc_backend_sdl_jni_SDLGL_glGetShaderPrecisionFormat_int_int_java_nio_IntBuffer_java_nio_IntBuffer(jcontext ctx, jint param0, jint param1, jobject param2, jobject param3);
void SM_arc_backend_sdl_jni_SDLGL_glGetTexParameterfv_int_int_java_nio_FloatBuffer(jcontext ctx, jint param0, jint param1, jobject param2);
void SM_arc_backend_sdl_jni_SDLGL_glGetTexParameteriv_int_int_java_nio_IntBuffer(jcontext ctx, jint param0, jint param1, jobject param2);
void SM_arc_backend_sdl_jni_SDLGL_glGetUniformfv_int_int_java_nio_FloatBuffer(jcontext ctx, jint param0, jint param1, jobject param2);
void SM_arc_backend_sdl_jni_SDLGL_glGetUniformiv_int_int_java_nio_IntBuffer(jcontext ctx, jint param0, jint param1, jobject param2);
jint SM_arc_backend_sdl_jni_SDLGL_glGetUniformLocation_int_java_lang_String_R_int(jcontext ctx, jint param0, jobject param1);
void SM_arc_backend_sdl_jni_SDLGL_glGetVertexAttribfv_int_int_java_nio_FloatBuffer(jcontext ctx, jint param0, jint param1, jobject param2);
void SM_arc_backend_sdl_jni_SDLGL_glGetVertexAttribiv_int_int_java_nio_IntBuffer(jcontext ctx, jint param0, jint param1, jobject param2);
jbool SM_arc_backend_sdl_jni_SDLGL_glIsBuffer_int_R_boolean(jcontext ctx, jint param0);
jbool SM_arc_backend_sdl_jni_SDLGL_glIsEnabled_int_R_boolean(jcontext ctx, jint param0);
jbool SM_arc_backend_sdl_jni_SDLGL_glIsFramebuffer_int_R_boolean(jcontext ctx, jint param0);
jbool SM_arc_backend_sdl_jni_SDLGL_glIsProgram_int_R_boolean(jcontext ctx, jint param0);
jbool SM_arc_backend_sdl_jni_SDLGL_glIsRenderbuffer_int_R_boolean(jcontext ctx, jint param0);
jbool SM_arc_backend_sdl_jni_SDLGL_glIsShader_int_R_boolean(jcontext ctx, jint param0);
jbool SM_arc_backend_sdl_jni_SDLGL_glIsTexture_int_R_boolean(jcontext ctx, jint param0);
void SM_arc_backend_sdl_jni_SDLGL_glLinkProgram_int(jcontext ctx, jint param0);
void SM_arc_backend_sdl_jni_SDLGL_glReleaseShaderCompiler(jcontext ctx);
void SM_arc_backend_sdl_jni_SDLGL_glRenderbufferStorage_int_int_int_int(jcontext ctx, jint param0, jint param1, jint param2, jint param3);
void SM_arc_backend_sdl_jni_SDLGL_glSampleCoverage_float_boolean(jcontext ctx, jfloat param0, jbool param1);
void SM_arc_backend_sdl_jni_SDLGL_glShaderSource_int_java_lang_String(jcontext ctx, jint param0, jobject param1);
void SM_arc_backend_sdl_jni_SDLGL_glStencilFuncSeparate_int_int_int_int(jcontext ctx, jint param0, jint param1, jint param2, jint param3);
void SM_arc_backend_sdl_jni_SDLGL_glStencilMaskSeparate_int_int(jcontext ctx, jint param0, jint param1);
void SM_arc_backend_sdl_jni_SDLGL_glStencilOpSeparate_int_int_int_int(jcontext ctx, jint param0, jint param1, jint param2, jint param3);
void SM_arc_backend_sdl_jni_SDLGL_glTexParameterfv_int_int_java_nio_FloatBuffer(jcontext ctx, jint param0, jint param1, jobject param2);
void SM_arc_backend_sdl_jni_SDLGL_glTexParameteri_int_int_int(jcontext ctx, jint param0, jint param1, jint param2);
void SM_arc_backend_sdl_jni_SDLGL_glTexParameteriv_int_int_java_nio_IntBuffer(jcontext ctx, jint param0, jint param1, jobject param2);
void SM_arc_backend_sdl_jni_SDLGL_glUniform1f_int_float(jcontext ctx, jint param0, jfloat param1);
void SM_arc_backend_sdl_jni_SDLGL_glUniform1fv_int_int_java_nio_FloatBuffer(jcontext ctx, jint param0, jint param1, jobject param2);
void SM_arc_backend_sdl_jni_SDLGL_glUniform1fv_int_int_Array1_float_int(jcontext ctx, jint param0, jint param1, jobject param2, jint param3);
void SM_arc_backend_sdl_jni_SDLGL_glUniform1i_int_int(jcontext ctx, jint param0, jint param1);
void SM_arc_backend_sdl_jni_SDLGL_glUniform1iv_int_int_java_nio_IntBuffer(jcontext ctx, jint param0, jint param1, jobject param2);
void SM_arc_backend_sdl_jni_SDLGL_glUniform1iv_int_int_Array1_int_int(jcontext ctx, jint param0, jint param1, jobject param2, jint param3);
void SM_arc_backend_sdl_jni_SDLGL_glUniform2f_int_float_float(jcontext ctx, jint param0, jfloat param1, jfloat param2);
void SM_arc_backend_sdl_jni_SDLGL_glUniform2fv_int_int_java_nio_FloatBuffer(jcontext ctx, jint param0, jint param1, jobject param2);
void SM_arc_backend_sdl_jni_SDLGL_glUniform2fv_int_int_Array1_float_int(jcontext ctx, jint param0, jint param1, jobject param2, jint param3);
void SM_arc_backend_sdl_jni_SDLGL_glUniform2i_int_int_int(jcontext ctx, jint param0, jint param1, jint param2);
void SM_arc_backend_sdl_jni_SDLGL_glUniform2iv_int_int_java_nio_IntBuffer(jcontext ctx, jint param0, jint param1, jobject param2);
void SM_arc_backend_sdl_jni_SDLGL_glUniform2iv_int_int_Array1_int_int(jcontext ctx, jint param0, jint param1, jobject param2, jint param3);
void SM_arc_backend_sdl_jni_SDLGL_glUniform3f_int_float_float_float(jcontext ctx, jint param0, jfloat param1, jfloat param2, jfloat param3);
void SM_arc_backend_sdl_jni_SDLGL_glUniform3fv_int_int_java_nio_FloatBuffer(jcontext ctx, jint param0, jint param1, jobject param2);
void SM_arc_backend_sdl_jni_SDLGL_glUniform3fv_int_int_Array1_float_int(jcontext ctx, jint param0, jint param1, jobject param2, jint param3);
void SM_arc_backend_sdl_jni_SDLGL_glUniform3i_int_int_int_int(jcontext ctx, jint param0, jint param1, jint param2, jint param3);
void SM_arc_backend_sdl_jni_SDLGL_glUniform3iv_int_int_java_nio_IntBuffer(jcontext ctx, jint param0, jint param1, jobject param2);
void SM_arc_backend_sdl_jni_SDLGL_glUniform3iv_int_int_Array1_int_int(jcontext ctx, jint param0, jint param1, jobject param2, jint param3);
void SM_arc_backend_sdl_jni_SDLGL_glUniform4f_int_float_float_float_float(jcontext ctx, jint param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4);
void SM_arc_backend_sdl_jni_SDLGL_glUniform4fv_int_int_java_nio_FloatBuffer(jcontext ctx, jint param0, jint param1, jobject param2);
void SM_arc_backend_sdl_jni_SDLGL_glUniform4fv_int_int_Array1_float_int(jcontext ctx, jint param0, jint param1, jobject param2, jint param3);
void SM_arc_backend_sdl_jni_SDLGL_glUniform4i_int_int_int_int_int(jcontext ctx, jint param0, jint param1, jint param2, jint param3, jint param4);
void SM_arc_backend_sdl_jni_SDLGL_glUniform4iv_int_int_java_nio_IntBuffer(jcontext ctx, jint param0, jint param1, jobject param2);
void SM_arc_backend_sdl_jni_SDLGL_glUniform4iv_int_int_Array1_int_int(jcontext ctx, jint param0, jint param1, jobject param2, jint param3);
void SM_arc_backend_sdl_jni_SDLGL_glUniformMatrix2fv_int_int_boolean_java_nio_FloatBuffer(jcontext ctx, jint param0, jint param1, jbool param2, jobject param3);
void SM_arc_backend_sdl_jni_SDLGL_glUniformMatrix2fv_int_int_boolean_Array1_float_int(jcontext ctx, jint param0, jint param1, jbool param2, jobject param3, jint param4);
void SM_arc_backend_sdl_jni_SDLGL_glUniformMatrix3fv_int_int_boolean_java_nio_FloatBuffer(jcontext ctx, jint param0, jint param1, jbool param2, jobject param3);
void SM_arc_backend_sdl_jni_SDLGL_glUniformMatrix3fv_int_int_boolean_Array1_float_int(jcontext ctx, jint param0, jint param1, jbool param2, jobject param3, jint param4);
void SM_arc_backend_sdl_jni_SDLGL_glUniformMatrix4fv_int_int_boolean_java_nio_FloatBuffer(jcontext ctx, jint param0, jint param1, jbool param2, jobject param3);
void SM_arc_backend_sdl_jni_SDLGL_glUniformMatrix4fv_int_int_boolean_Array1_float_int(jcontext ctx, jint param0, jint param1, jbool param2, jobject param3, jint param4);
void SM_arc_backend_sdl_jni_SDLGL_glUseProgram_int(jcontext ctx, jint param0);
void SM_arc_backend_sdl_jni_SDLGL_glValidateProgram_int(jcontext ctx, jint param0);
void SM_arc_backend_sdl_jni_SDLGL_glVertexAttrib1f_int_float(jcontext ctx, jint param0, jfloat param1);
void SM_arc_backend_sdl_jni_SDLGL_glVertexAttrib1fv_int_java_nio_FloatBuffer(jcontext ctx, jint param0, jobject param1);
void SM_arc_backend_sdl_jni_SDLGL_glVertexAttrib2f_int_float_float(jcontext ctx, jint param0, jfloat param1, jfloat param2);
void SM_arc_backend_sdl_jni_SDLGL_glVertexAttrib2fv_int_java_nio_FloatBuffer(jcontext ctx, jint param0, jobject param1);
void SM_arc_backend_sdl_jni_SDLGL_glVertexAttrib3f_int_float_float_float(jcontext ctx, jint param0, jfloat param1, jfloat param2, jfloat param3);
void SM_arc_backend_sdl_jni_SDLGL_glVertexAttrib3fv_int_java_nio_FloatBuffer(jcontext ctx, jint param0, jobject param1);
void SM_arc_backend_sdl_jni_SDLGL_glVertexAttrib4f_int_float_float_float_float(jcontext ctx, jint param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4);
void SM_arc_backend_sdl_jni_SDLGL_glVertexAttrib4fv_int_java_nio_FloatBuffer(jcontext ctx, jint param0, jobject param1);
void SM_arc_backend_sdl_jni_SDLGL_glVertexAttribPointer_int_int_int_boolean_int_java_lang_Object(jcontext ctx, jint param0, jint param1, jint param2, jbool param3, jint param4, jobject param5);
void SM_arc_backend_sdl_jni_SDLGL_glVertexAttribPointer_int_int_int_boolean_int_int(jcontext ctx, jint param0, jint param1, jint param2, jbool param3, jint param4, jint param5);
void SM_arc_backend_sdl_jni_SDLGL_glReadBuffer_int(jcontext ctx, jint param0);
void SM_arc_backend_sdl_jni_SDLGL_glDrawRangeElements_int_int_int_int_int_int(jcontext ctx, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5);
void SM_arc_backend_sdl_jni_SDLGL_glDrawRangeElements_int_int_int_int_int_java_nio_Buffer(jcontext ctx, jint param0, jint param1, jint param2, jint param3, jint param4, jobject param5);
void SM_arc_backend_sdl_jni_SDLGL_glTexImage3D_int_int_int_int_int_int_int_int_int_int(jcontext ctx, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jint param8, jint param9);
void SM_arc_backend_sdl_jni_SDLGL_glTexImage3D_int_int_int_int_int_int_int_int_int_java_nio_Buffer(jcontext ctx, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jint param8, jobject param9);
void SM_arc_backend_sdl_jni_SDLGL_glTexSubImage3D_int_int_int_int_int_int_int_int_int_int_int(jcontext ctx, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jint param8, jint param9, jint param10);
void SM_arc_backend_sdl_jni_SDLGL_glTexSubImage3D_int_int_int_int_int_int_int_int_int_int_java_nio_Buffer(jcontext ctx, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jint param8, jint param9, jobject param10);
void SM_arc_backend_sdl_jni_SDLGL_glCopyTexSubImage3D_int_int_int_int_int_int_int_int_int(jcontext ctx, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jint param8);
void SM_arc_backend_sdl_jni_SDLGL_glGenQueries_int_java_nio_IntBuffer(jcontext ctx, jint param0, jobject param1);
void SM_arc_backend_sdl_jni_SDLGL_glDeleteQueries_int_java_nio_IntBuffer(jcontext ctx, jint param0, jobject param1);
jbool SM_arc_backend_sdl_jni_SDLGL_glIsQuery_int_R_boolean(jcontext ctx, jint param0);
void SM_arc_backend_sdl_jni_SDLGL_glBeginQuery_int_int(jcontext ctx, jint param0, jint param1);
void SM_arc_backend_sdl_jni_SDLGL_glEndQuery_int(jcontext ctx, jint param0);
void SM_arc_backend_sdl_jni_SDLGL_glGetQueryiv_int_int_java_nio_IntBuffer(jcontext ctx, jint param0, jint param1, jobject param2);
void SM_arc_backend_sdl_jni_SDLGL_glGetQueryObjectuiv_int_int_java_nio_IntBuffer(jcontext ctx, jint param0, jint param1, jobject param2);
jbool SM_arc_backend_sdl_jni_SDLGL_glUnmapBuffer_int_R_boolean(jcontext ctx, jint param0);
jobject SM_arc_backend_sdl_jni_SDLGL_glGetBufferPointerv_int_int_R_java_nio_Buffer(jcontext ctx, jint param0, jint param1);
void SM_arc_backend_sdl_jni_SDLGL_glDrawBuffers_int_java_nio_IntBuffer(jcontext ctx, jint param0, jobject param1);
void SM_arc_backend_sdl_jni_SDLGL_glUniformMatrix2x3fv_int_int_boolean_java_nio_FloatBuffer(jcontext ctx, jint param0, jint param1, jbool param2, jobject param3);
void SM_arc_backend_sdl_jni_SDLGL_glUniformMatrix3x2fv_int_int_boolean_java_nio_FloatBuffer(jcontext ctx, jint param0, jint param1, jbool param2, jobject param3);
void SM_arc_backend_sdl_jni_SDLGL_glUniformMatrix2x4fv_int_int_boolean_java_nio_FloatBuffer(jcontext ctx, jint param0, jint param1, jbool param2, jobject param3);
void SM_arc_backend_sdl_jni_SDLGL_glUniformMatrix4x2fv_int_int_boolean_java_nio_FloatBuffer(jcontext ctx, jint param0, jint param1, jbool param2, jobject param3);
void SM_arc_backend_sdl_jni_SDLGL_glUniformMatrix3x4fv_int_int_boolean_java_nio_FloatBuffer(jcontext ctx, jint param0, jint param1, jbool param2, jobject param3);
void SM_arc_backend_sdl_jni_SDLGL_glUniformMatrix4x3fv_int_int_boolean_java_nio_FloatBuffer(jcontext ctx, jint param0, jint param1, jbool param2, jobject param3);
void SM_arc_backend_sdl_jni_SDLGL_glBlitFramebuffer_int_int_int_int_int_int_int_int_int_int(jcontext ctx, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jint param8, jint param9);
void SM_arc_backend_sdl_jni_SDLGL_glRenderbufferStorageMultisample_int_int_int_int_int(jcontext ctx, jint param0, jint param1, jint param2, jint param3, jint param4);
void SM_arc_backend_sdl_jni_SDLGL_glFramebufferTextureLayer_int_int_int_int_int(jcontext ctx, jint param0, jint param1, jint param2, jint param3, jint param4);
void SM_arc_backend_sdl_jni_SDLGL_glFlushMappedBufferRange_int_int_int(jcontext ctx, jint param0, jint param1, jint param2);
void SM_arc_backend_sdl_jni_SDLGL_glBindVertexArray_int(jcontext ctx, jint param0);
void SM_arc_backend_sdl_jni_SDLGL_glDeleteVertexArrays_int_java_nio_IntBuffer(jcontext ctx, jint param0, jobject param1);
void SM_arc_backend_sdl_jni_SDLGL_glGenVertexArrays_int_java_nio_IntBuffer(jcontext ctx, jint param0, jobject param1);
jbool SM_arc_backend_sdl_jni_SDLGL_glIsVertexArray_int_R_boolean(jcontext ctx, jint param0);
void SM_arc_backend_sdl_jni_SDLGL_glBeginTransformFeedback_int(jcontext ctx, jint param0);
void SM_arc_backend_sdl_jni_SDLGL_glEndTransformFeedback(jcontext ctx);
void SM_arc_backend_sdl_jni_SDLGL_glBindBufferRange_int_int_int_int_int(jcontext ctx, jint param0, jint param1, jint param2, jint param3, jint param4);
void SM_arc_backend_sdl_jni_SDLGL_glBindBufferBase_int_int_int(jcontext ctx, jint param0, jint param1, jint param2);
void SM_arc_backend_sdl_jni_SDLGL_glTransformFeedbackVaryings_int_Array1_java_lang_String_int(jcontext ctx, jint param0, jobject param1, jint param2);
void SM_arc_backend_sdl_jni_SDLGL_glVertexAttribIPointer_int_int_int_int_int(jcontext ctx, jint param0, jint param1, jint param2, jint param3, jint param4);
void SM_arc_backend_sdl_jni_SDLGL_glGetVertexAttribIiv_int_int_java_nio_IntBuffer(jcontext ctx, jint param0, jint param1, jobject param2);
void SM_arc_backend_sdl_jni_SDLGL_glGetVertexAttribIuiv_int_int_java_nio_IntBuffer(jcontext ctx, jint param0, jint param1, jobject param2);
void SM_arc_backend_sdl_jni_SDLGL_glVertexAttribI4i_int_int_int_int_int(jcontext ctx, jint param0, jint param1, jint param2, jint param3, jint param4);
void SM_arc_backend_sdl_jni_SDLGL_glVertexAttribI4ui_int_int_int_int_int(jcontext ctx, jint param0, jint param1, jint param2, jint param3, jint param4);
void SM_arc_backend_sdl_jni_SDLGL_glGetUniformuiv_int_int_java_nio_IntBuffer(jcontext ctx, jint param0, jint param1, jobject param2);
jint SM_arc_backend_sdl_jni_SDLGL_glGetFragDataLocation_int_java_lang_String_R_int(jcontext ctx, jint param0, jobject param1);
void SM_arc_backend_sdl_jni_SDLGL_glUniform1uiv_int_int_java_nio_IntBuffer(jcontext ctx, jint param0, jint param1, jobject param2);
void SM_arc_backend_sdl_jni_SDLGL_glUniform3uiv_int_int_java_nio_IntBuffer(jcontext ctx, jint param0, jint param1, jobject param2);
void SM_arc_backend_sdl_jni_SDLGL_glUniform4uiv_int_int_java_nio_IntBuffer(jcontext ctx, jint param0, jint param1, jobject param2);
void SM_arc_backend_sdl_jni_SDLGL_glClearBufferiv_int_int_java_nio_IntBuffer(jcontext ctx, jint param0, jint param1, jobject param2);
void SM_arc_backend_sdl_jni_SDLGL_glClearBufferuiv_int_int_java_nio_IntBuffer(jcontext ctx, jint param0, jint param1, jobject param2);
void SM_arc_backend_sdl_jni_SDLGL_glClearBufferfv_int_int_java_nio_FloatBuffer(jcontext ctx, jint param0, jint param1, jobject param2);
void SM_arc_backend_sdl_jni_SDLGL_glClearBufferfi_int_int_float_int(jcontext ctx, jint param0, jint param1, jfloat param2, jint param3);
jobject SM_arc_backend_sdl_jni_SDLGL_glGetStringi_int_int_R_java_lang_String(jcontext ctx, jint param0, jint param1);
void SM_arc_backend_sdl_jni_SDLGL_glCopyBufferSubData_int_int_int_int_int(jcontext ctx, jint param0, jint param1, jint param2, jint param3, jint param4);
void SM_arc_backend_sdl_jni_SDLGL_glGetUniformIndices_int_Array1_java_lang_String_java_nio_IntBuffer(jcontext ctx, jint param0, jobject param1, jobject param2);
void SM_arc_backend_sdl_jni_SDLGL_glGetActiveUniformsiv_int_int_java_nio_IntBuffer_int_java_nio_IntBuffer(jcontext ctx, jint param0, jint param1, jobject param2, jint param3, jobject param4);
jint SM_arc_backend_sdl_jni_SDLGL_glGetUniformBlockIndex_int_java_lang_String_R_int(jcontext ctx, jint param0, jobject param1);
void SM_arc_backend_sdl_jni_SDLGL_glGetActiveUniformBlockiv_int_int_int_java_nio_IntBuffer(jcontext ctx, jint param0, jint param1, jint param2, jobject param3);
void SM_arc_backend_sdl_jni_SDLGL_glGetActiveUniformBlockName_int_int_java_nio_Buffer_java_nio_Buffer(jcontext ctx, jint param0, jint param1, jobject param2, jobject param3);
void SM_arc_backend_sdl_jni_SDLGL_glUniformBlockBinding_int_int_int(jcontext ctx, jint param0, jint param1, jint param2);
void SM_arc_backend_sdl_jni_SDLGL_glDrawArraysInstanced_int_int_int_int(jcontext ctx, jint param0, jint param1, jint param2, jint param3);
void SM_arc_backend_sdl_jni_SDLGL_glDrawElementsInstanced_int_int_int_int_int(jcontext ctx, jint param0, jint param1, jint param2, jint param3, jint param4);
void SM_arc_backend_sdl_jni_SDLGL_glGetInteger64v_int_java_nio_LongBuffer(jcontext ctx, jint param0, jobject param1);
void SM_arc_backend_sdl_jni_SDLGL_glGetBufferParameteri64v_int_int_java_nio_LongBuffer(jcontext ctx, jint param0, jint param1, jobject param2);
void SM_arc_backend_sdl_jni_SDLGL_glGenSamplers_int_java_nio_IntBuffer(jcontext ctx, jint param0, jobject param1);
void SM_arc_backend_sdl_jni_SDLGL_glDeleteSamplers_int_java_nio_IntBuffer(jcontext ctx, jint param0, jobject param1);
jbool SM_arc_backend_sdl_jni_SDLGL_glIsSampler_int_R_boolean(jcontext ctx, jint param0);
void SM_arc_backend_sdl_jni_SDLGL_glBindSampler_int_int(jcontext ctx, jint param0, jint param1);
void SM_arc_backend_sdl_jni_SDLGL_glSamplerParameteri_int_int_int(jcontext ctx, jint param0, jint param1, jint param2);
void SM_arc_backend_sdl_jni_SDLGL_glSamplerParameteriv_int_int_java_nio_IntBuffer(jcontext ctx, jint param0, jint param1, jobject param2);
void SM_arc_backend_sdl_jni_SDLGL_glSamplerParameterf_int_int_float(jcontext ctx, jint param0, jint param1, jfloat param2);
void SM_arc_backend_sdl_jni_SDLGL_glSamplerParameterfv_int_int_java_nio_FloatBuffer(jcontext ctx, jint param0, jint param1, jobject param2);
void SM_arc_backend_sdl_jni_SDLGL_glGetSamplerParameteriv_int_int_java_nio_IntBuffer(jcontext ctx, jint param0, jint param1, jobject param2);
void SM_arc_backend_sdl_jni_SDLGL_glGetSamplerParameterfv_int_int_java_nio_FloatBuffer(jcontext ctx, jint param0, jint param1, jobject param2);
void SM_arc_backend_sdl_jni_SDLGL_glVertexAttribDivisor_int_int(jcontext ctx, jint param0, jint param1);
void SM_arc_backend_sdl_jni_SDLGL_glBindTransformFeedback_int_int(jcontext ctx, jint param0, jint param1);
void SM_arc_backend_sdl_jni_SDLGL_glDeleteTransformFeedbacks_int_java_nio_IntBuffer(jcontext ctx, jint param0, jobject param1);
void SM_arc_backend_sdl_jni_SDLGL_glGenTransformFeedbacks_int_java_nio_IntBuffer(jcontext ctx, jint param0, jobject param1);
jbool SM_arc_backend_sdl_jni_SDLGL_glIsTransformFeedback_int_R_boolean(jcontext ctx, jint param0);
void SM_arc_backend_sdl_jni_SDLGL_glPauseTransformFeedback(jcontext ctx);
void SM_arc_backend_sdl_jni_SDLGL_glResumeTransformFeedback(jcontext ctx);
void SM_arc_backend_sdl_jni_SDLGL_glProgramParameteri_int_int_int(jcontext ctx, jint param0, jint param1, jint param2);
void SM_arc_backend_sdl_jni_SDLGL_glInvalidateFramebuffer_int_int_java_nio_IntBuffer(jcontext ctx, jint param0, jint param1, jobject param2);
void SM_arc_backend_sdl_jni_SDLGL_glInvalidateSubFramebuffer_int_int_java_nio_IntBuffer_int_int_int_int(jcontext ctx, jint param0, jint param1, jobject param2, jint param3, jint param4, jint param5, jint param6);

#ifdef __cplusplus
}
#endif

#endif
