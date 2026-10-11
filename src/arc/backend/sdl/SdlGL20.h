#ifndef HEADER_arc_backend_sdl_SdlGL20
#define HEADER_arc_backend_sdl_SdlGL20

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "arc/graphics/GL20.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_backend_sdl_SdlGL20 {
	java_lang_Object parent;
} arc_backend_sdl_SdlGL20;

extern Class class_arc_backend_sdl_SdlGL20;


#define VTABLE_arc_backend_sdl_SdlGL20_hashCode_R_int 0
typedef jint (*func_arc_backend_sdl_SdlGL20_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_SdlGL20_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_backend_sdl_SdlGL20_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_backend_sdl_SdlGL20_clone_R_java_lang_Object 2
typedef jobject (*func_arc_backend_sdl_SdlGL20_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_SdlGL20_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_backend_sdl_SdlGL20_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_SdlGL20_toString_R_java_lang_String 4
typedef jobject (*func_arc_backend_sdl_SdlGL20_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_SdlGL20_finalize 5
typedef void (*func_arc_backend_sdl_SdlGL20_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_SdlGL20_notify 6
typedef void (*func_arc_backend_sdl_SdlGL20_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_SdlGL20_notifyAll 7
typedef void (*func_arc_backend_sdl_SdlGL20_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_SdlGL20_wait 8
typedef void (*func_arc_backend_sdl_SdlGL20_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_SdlGL20_wait_long 9
typedef void (*func_arc_backend_sdl_SdlGL20_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_backend_sdl_SdlGL20_wait_long_int 10
typedef void (*func_arc_backend_sdl_SdlGL20_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_backend_sdl_SdlGL20_glActiveTexture_int 11
typedef void (*func_arc_backend_sdl_SdlGL20_glActiveTexture_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_backend_sdl_SdlGL20_glBindTexture_int_int 12
typedef void (*func_arc_backend_sdl_SdlGL20_glBindTexture_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_arc_backend_sdl_SdlGL20_glBlendFunc_int_int 13
typedef void (*func_arc_backend_sdl_SdlGL20_glBlendFunc_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_arc_backend_sdl_SdlGL20_glClear_int 14
typedef void (*func_arc_backend_sdl_SdlGL20_glClear_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_backend_sdl_SdlGL20_glClearColor_float_float_float_float 15
typedef void (*func_arc_backend_sdl_SdlGL20_glClearColor_float_float_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_arc_backend_sdl_SdlGL20_glClearDepthf_float 16
typedef void (*func_arc_backend_sdl_SdlGL20_glClearDepthf_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_backend_sdl_SdlGL20_glClearStencil_int 17
typedef void (*func_arc_backend_sdl_SdlGL20_glClearStencil_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_backend_sdl_SdlGL20_glColorMask_boolean_boolean_boolean_boolean 18
typedef void (*func_arc_backend_sdl_SdlGL20_glColorMask_boolean_boolean_boolean_boolean)(jcontext ctx, jobject self, jbool param0, jbool param1, jbool param2, jbool param3);
#define VTABLE_arc_backend_sdl_SdlGL20_glCompressedTexImage2D_int_int_int_int_int_int_int_java_nio_Buffer 19
typedef void (*func_arc_backend_sdl_SdlGL20_glCompressedTexImage2D_int_int_int_int_int_int_int_java_nio_Buffer)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jobject param7);
#define VTABLE_arc_backend_sdl_SdlGL20_glCompressedTexSubImage2D_int_int_int_int_int_int_int_int_java_nio_Buffer 20
typedef void (*func_arc_backend_sdl_SdlGL20_glCompressedTexSubImage2D_int_int_int_int_int_int_int_int_java_nio_Buffer)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jobject param8);
#define VTABLE_arc_backend_sdl_SdlGL20_glCopyTexImage2D_int_int_int_int_int_int_int_int 21
typedef void (*func_arc_backend_sdl_SdlGL20_glCopyTexImage2D_int_int_int_int_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7);
#define VTABLE_arc_backend_sdl_SdlGL20_glCopyTexSubImage2D_int_int_int_int_int_int_int_int 22
typedef void (*func_arc_backend_sdl_SdlGL20_glCopyTexSubImage2D_int_int_int_int_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7);
#define VTABLE_arc_backend_sdl_SdlGL20_glCullFace_int 23
typedef void (*func_arc_backend_sdl_SdlGL20_glCullFace_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_backend_sdl_SdlGL20_glDeleteTexture_int 24
typedef void (*func_arc_backend_sdl_SdlGL20_glDeleteTexture_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_backend_sdl_SdlGL20_glDepthFunc_int 25
typedef void (*func_arc_backend_sdl_SdlGL20_glDepthFunc_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_backend_sdl_SdlGL20_glDepthMask_boolean 26
typedef void (*func_arc_backend_sdl_SdlGL20_glDepthMask_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_arc_backend_sdl_SdlGL20_glDepthRangef_float_float 27
typedef void (*func_arc_backend_sdl_SdlGL20_glDepthRangef_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_backend_sdl_SdlGL20_glDisable_int 28
typedef void (*func_arc_backend_sdl_SdlGL20_glDisable_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_backend_sdl_SdlGL20_glDrawArrays_int_int_int 29
typedef void (*func_arc_backend_sdl_SdlGL20_glDrawArrays_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2);
#define VTABLE_arc_backend_sdl_SdlGL20_glDrawElements_int_int_int_java_nio_Buffer 30
typedef void (*func_arc_backend_sdl_SdlGL20_glDrawElements_int_int_int_java_nio_Buffer)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jobject param3);
#define VTABLE_arc_backend_sdl_SdlGL20_glEnable_int 31
typedef void (*func_arc_backend_sdl_SdlGL20_glEnable_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_backend_sdl_SdlGL20_glFinish 32
typedef void (*func_arc_backend_sdl_SdlGL20_glFinish)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_SdlGL20_glFlush 33
typedef void (*func_arc_backend_sdl_SdlGL20_glFlush)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_SdlGL20_glFrontFace_int 34
typedef void (*func_arc_backend_sdl_SdlGL20_glFrontFace_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_backend_sdl_SdlGL20_glGenTexture_R_int 35
typedef jint (*func_arc_backend_sdl_SdlGL20_glGenTexture_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_SdlGL20_glGetError_R_int 36
typedef jint (*func_arc_backend_sdl_SdlGL20_glGetError_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_SdlGL20_glGetIntegerv_int_java_nio_IntBuffer 37
typedef void (*func_arc_backend_sdl_SdlGL20_glGetIntegerv_int_java_nio_IntBuffer)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_arc_backend_sdl_SdlGL20_glGetString_int_R_java_lang_String 38
typedef jobject (*func_arc_backend_sdl_SdlGL20_glGetString_int_R_java_lang_String)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_backend_sdl_SdlGL20_glHint_int_int 39
typedef void (*func_arc_backend_sdl_SdlGL20_glHint_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_arc_backend_sdl_SdlGL20_glLineWidth_float 40
typedef void (*func_arc_backend_sdl_SdlGL20_glLineWidth_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_backend_sdl_SdlGL20_glPixelStorei_int_int 41
typedef void (*func_arc_backend_sdl_SdlGL20_glPixelStorei_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_arc_backend_sdl_SdlGL20_glPolygonOffset_float_float 42
typedef void (*func_arc_backend_sdl_SdlGL20_glPolygonOffset_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_backend_sdl_SdlGL20_glReadPixels_int_int_int_int_int_int_java_nio_Buffer 43
typedef void (*func_arc_backend_sdl_SdlGL20_glReadPixels_int_int_int_int_int_int_java_nio_Buffer)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jobject param6);
#define VTABLE_arc_backend_sdl_SdlGL20_glScissor_int_int_int_int 44
typedef void (*func_arc_backend_sdl_SdlGL20_glScissor_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
#define VTABLE_arc_backend_sdl_SdlGL20_glStencilFunc_int_int_int 45
typedef void (*func_arc_backend_sdl_SdlGL20_glStencilFunc_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2);
#define VTABLE_arc_backend_sdl_SdlGL20_glStencilMask_int 46
typedef void (*func_arc_backend_sdl_SdlGL20_glStencilMask_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_backend_sdl_SdlGL20_glStencilOp_int_int_int 47
typedef void (*func_arc_backend_sdl_SdlGL20_glStencilOp_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2);
#define VTABLE_arc_backend_sdl_SdlGL20_glTexImage2D_int_int_int_int_int_int_int_int_java_nio_Buffer 48
typedef void (*func_arc_backend_sdl_SdlGL20_glTexImage2D_int_int_int_int_int_int_int_int_java_nio_Buffer)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jobject param8);
#define VTABLE_arc_backend_sdl_SdlGL20_glTexParameterf_int_int_float 49
typedef void (*func_arc_backend_sdl_SdlGL20_glTexParameterf_int_int_float)(jcontext ctx, jobject self, jint param0, jint param1, jfloat param2);
#define VTABLE_arc_backend_sdl_SdlGL20_glTexSubImage2D_int_int_int_int_int_int_int_int_java_nio_Buffer 50
typedef void (*func_arc_backend_sdl_SdlGL20_glTexSubImage2D_int_int_int_int_int_int_int_int_java_nio_Buffer)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jobject param8);
#define VTABLE_arc_backend_sdl_SdlGL20_glViewport_int_int_int_int 51
typedef void (*func_arc_backend_sdl_SdlGL20_glViewport_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
#define VTABLE_arc_backend_sdl_SdlGL20_glAttachShader_int_int 52
typedef void (*func_arc_backend_sdl_SdlGL20_glAttachShader_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_arc_backend_sdl_SdlGL20_glBindAttribLocation_int_int_java_lang_String 53
typedef void (*func_arc_backend_sdl_SdlGL20_glBindAttribLocation_int_int_java_lang_String)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
#define VTABLE_arc_backend_sdl_SdlGL20_glBindBuffer_int_int 54
typedef void (*func_arc_backend_sdl_SdlGL20_glBindBuffer_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_arc_backend_sdl_SdlGL20_glBindFramebuffer_int_int 55
typedef void (*func_arc_backend_sdl_SdlGL20_glBindFramebuffer_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_arc_backend_sdl_SdlGL20_glBindRenderbuffer_int_int 56
typedef void (*func_arc_backend_sdl_SdlGL20_glBindRenderbuffer_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_arc_backend_sdl_SdlGL20_glBlendColor_float_float_float_float 57
typedef void (*func_arc_backend_sdl_SdlGL20_glBlendColor_float_float_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_arc_backend_sdl_SdlGL20_glBlendEquation_int 58
typedef void (*func_arc_backend_sdl_SdlGL20_glBlendEquation_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_backend_sdl_SdlGL20_glBlendEquationSeparate_int_int 59
typedef void (*func_arc_backend_sdl_SdlGL20_glBlendEquationSeparate_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_arc_backend_sdl_SdlGL20_glBlendFuncSeparate_int_int_int_int 60
typedef void (*func_arc_backend_sdl_SdlGL20_glBlendFuncSeparate_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
#define VTABLE_arc_backend_sdl_SdlGL20_glBufferData_int_int_java_nio_Buffer_int 61
typedef void (*func_arc_backend_sdl_SdlGL20_glBufferData_int_int_java_nio_Buffer_int)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jint param3);
#define VTABLE_arc_backend_sdl_SdlGL20_glBufferSubData_int_int_int_java_nio_Buffer 62
typedef void (*func_arc_backend_sdl_SdlGL20_glBufferSubData_int_int_int_java_nio_Buffer)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jobject param3);
#define VTABLE_arc_backend_sdl_SdlGL20_glCheckFramebufferStatus_int_R_int 63
typedef jint (*func_arc_backend_sdl_SdlGL20_glCheckFramebufferStatus_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_backend_sdl_SdlGL20_glCompileShader_int 64
typedef void (*func_arc_backend_sdl_SdlGL20_glCompileShader_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_backend_sdl_SdlGL20_glCreateProgram_R_int 65
typedef jint (*func_arc_backend_sdl_SdlGL20_glCreateProgram_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_SdlGL20_glCreateShader_int_R_int 66
typedef jint (*func_arc_backend_sdl_SdlGL20_glCreateShader_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_backend_sdl_SdlGL20_glDeleteBuffer_int 67
typedef void (*func_arc_backend_sdl_SdlGL20_glDeleteBuffer_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_backend_sdl_SdlGL20_glDeleteFramebuffer_int 68
typedef void (*func_arc_backend_sdl_SdlGL20_glDeleteFramebuffer_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_backend_sdl_SdlGL20_glDeleteProgram_int 69
typedef void (*func_arc_backend_sdl_SdlGL20_glDeleteProgram_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_backend_sdl_SdlGL20_glDeleteRenderbuffer_int 70
typedef void (*func_arc_backend_sdl_SdlGL20_glDeleteRenderbuffer_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_backend_sdl_SdlGL20_glDeleteShader_int 71
typedef void (*func_arc_backend_sdl_SdlGL20_glDeleteShader_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_backend_sdl_SdlGL20_glDetachShader_int_int 72
typedef void (*func_arc_backend_sdl_SdlGL20_glDetachShader_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_arc_backend_sdl_SdlGL20_glDisableVertexAttribArray_int 73
typedef void (*func_arc_backend_sdl_SdlGL20_glDisableVertexAttribArray_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_backend_sdl_SdlGL20_glDrawElements_int_int_int_int 74
typedef void (*func_arc_backend_sdl_SdlGL20_glDrawElements_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
#define VTABLE_arc_backend_sdl_SdlGL20_glEnableVertexAttribArray_int 75
typedef void (*func_arc_backend_sdl_SdlGL20_glEnableVertexAttribArray_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_backend_sdl_SdlGL20_glFramebufferRenderbuffer_int_int_int_int 76
typedef void (*func_arc_backend_sdl_SdlGL20_glFramebufferRenderbuffer_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
#define VTABLE_arc_backend_sdl_SdlGL20_glFramebufferTexture2D_int_int_int_int_int 77
typedef void (*func_arc_backend_sdl_SdlGL20_glFramebufferTexture2D_int_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4);
#define VTABLE_arc_backend_sdl_SdlGL20_glGenBuffer_R_int 78
typedef jint (*func_arc_backend_sdl_SdlGL20_glGenBuffer_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_SdlGL20_glGenerateMipmap_int 79
typedef void (*func_arc_backend_sdl_SdlGL20_glGenerateMipmap_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_backend_sdl_SdlGL20_glGenFramebuffer_R_int 80
typedef jint (*func_arc_backend_sdl_SdlGL20_glGenFramebuffer_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_SdlGL20_glGenRenderbuffer_R_int 81
typedef jint (*func_arc_backend_sdl_SdlGL20_glGenRenderbuffer_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_SdlGL20_glGetActiveAttrib_int_int_java_nio_IntBuffer_java_nio_IntBuffer_R_java_lang_String 82
typedef jobject (*func_arc_backend_sdl_SdlGL20_glGetActiveAttrib_int_int_java_nio_IntBuffer_java_nio_IntBuffer_R_java_lang_String)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jobject param3);
#define VTABLE_arc_backend_sdl_SdlGL20_glGetActiveUniform_int_int_java_nio_IntBuffer_java_nio_IntBuffer_R_java_lang_String 83
typedef jobject (*func_arc_backend_sdl_SdlGL20_glGetActiveUniform_int_int_java_nio_IntBuffer_java_nio_IntBuffer_R_java_lang_String)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jobject param3);
#define VTABLE_arc_backend_sdl_SdlGL20_glGetAttribLocation_int_java_lang_String_R_int 84
typedef jint (*func_arc_backend_sdl_SdlGL20_glGetAttribLocation_int_java_lang_String_R_int)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_arc_backend_sdl_SdlGL20_glGetBooleanv_int_java_nio_Buffer 85
typedef void (*func_arc_backend_sdl_SdlGL20_glGetBooleanv_int_java_nio_Buffer)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_arc_backend_sdl_SdlGL20_glGetBufferParameteriv_int_int_java_nio_IntBuffer 86
typedef void (*func_arc_backend_sdl_SdlGL20_glGetBufferParameteriv_int_int_java_nio_IntBuffer)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
#define VTABLE_arc_backend_sdl_SdlGL20_glGetFloatv_int_java_nio_FloatBuffer 87
typedef void (*func_arc_backend_sdl_SdlGL20_glGetFloatv_int_java_nio_FloatBuffer)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_arc_backend_sdl_SdlGL20_glGetFramebufferAttachmentParameteriv_int_int_int_java_nio_IntBuffer 88
typedef void (*func_arc_backend_sdl_SdlGL20_glGetFramebufferAttachmentParameteriv_int_int_int_java_nio_IntBuffer)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jobject param3);
#define VTABLE_arc_backend_sdl_SdlGL20_glGetProgramiv_int_int_java_nio_IntBuffer 89
typedef void (*func_arc_backend_sdl_SdlGL20_glGetProgramiv_int_int_java_nio_IntBuffer)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
#define VTABLE_arc_backend_sdl_SdlGL20_glGetProgramInfoLog_int_R_java_lang_String 90
typedef jobject (*func_arc_backend_sdl_SdlGL20_glGetProgramInfoLog_int_R_java_lang_String)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_backend_sdl_SdlGL20_glGetRenderbufferParameteriv_int_int_java_nio_IntBuffer 91
typedef void (*func_arc_backend_sdl_SdlGL20_glGetRenderbufferParameteriv_int_int_java_nio_IntBuffer)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
#define VTABLE_arc_backend_sdl_SdlGL20_glGetShaderiv_int_int_java_nio_IntBuffer 92
typedef void (*func_arc_backend_sdl_SdlGL20_glGetShaderiv_int_int_java_nio_IntBuffer)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
#define VTABLE_arc_backend_sdl_SdlGL20_glGetShaderInfoLog_int_R_java_lang_String 93
typedef jobject (*func_arc_backend_sdl_SdlGL20_glGetShaderInfoLog_int_R_java_lang_String)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_backend_sdl_SdlGL20_glGetShaderPrecisionFormat_int_int_java_nio_IntBuffer_java_nio_IntBuffer 94
typedef void (*func_arc_backend_sdl_SdlGL20_glGetShaderPrecisionFormat_int_int_java_nio_IntBuffer_java_nio_IntBuffer)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jobject param3);
#define VTABLE_arc_backend_sdl_SdlGL20_glGetTexParameterfv_int_int_java_nio_FloatBuffer 95
typedef void (*func_arc_backend_sdl_SdlGL20_glGetTexParameterfv_int_int_java_nio_FloatBuffer)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
#define VTABLE_arc_backend_sdl_SdlGL20_glGetTexParameteriv_int_int_java_nio_IntBuffer 96
typedef void (*func_arc_backend_sdl_SdlGL20_glGetTexParameteriv_int_int_java_nio_IntBuffer)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
#define VTABLE_arc_backend_sdl_SdlGL20_glGetUniformfv_int_int_java_nio_FloatBuffer 97
typedef void (*func_arc_backend_sdl_SdlGL20_glGetUniformfv_int_int_java_nio_FloatBuffer)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
#define VTABLE_arc_backend_sdl_SdlGL20_glGetUniformiv_int_int_java_nio_IntBuffer 98
typedef void (*func_arc_backend_sdl_SdlGL20_glGetUniformiv_int_int_java_nio_IntBuffer)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
#define VTABLE_arc_backend_sdl_SdlGL20_glGetUniformLocation_int_java_lang_String_R_int 99
typedef jint (*func_arc_backend_sdl_SdlGL20_glGetUniformLocation_int_java_lang_String_R_int)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_arc_backend_sdl_SdlGL20_glGetVertexAttribfv_int_int_java_nio_FloatBuffer 100
typedef void (*func_arc_backend_sdl_SdlGL20_glGetVertexAttribfv_int_int_java_nio_FloatBuffer)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
#define VTABLE_arc_backend_sdl_SdlGL20_glGetVertexAttribiv_int_int_java_nio_IntBuffer 101
typedef void (*func_arc_backend_sdl_SdlGL20_glGetVertexAttribiv_int_int_java_nio_IntBuffer)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
#define VTABLE_arc_backend_sdl_SdlGL20_glIsBuffer_int_R_boolean 102
typedef jbool (*func_arc_backend_sdl_SdlGL20_glIsBuffer_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_backend_sdl_SdlGL20_glIsEnabled_int_R_boolean 103
typedef jbool (*func_arc_backend_sdl_SdlGL20_glIsEnabled_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_backend_sdl_SdlGL20_glIsFramebuffer_int_R_boolean 104
typedef jbool (*func_arc_backend_sdl_SdlGL20_glIsFramebuffer_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_backend_sdl_SdlGL20_glIsProgram_int_R_boolean 105
typedef jbool (*func_arc_backend_sdl_SdlGL20_glIsProgram_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_backend_sdl_SdlGL20_glIsRenderbuffer_int_R_boolean 106
typedef jbool (*func_arc_backend_sdl_SdlGL20_glIsRenderbuffer_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_backend_sdl_SdlGL20_glIsShader_int_R_boolean 107
typedef jbool (*func_arc_backend_sdl_SdlGL20_glIsShader_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_backend_sdl_SdlGL20_glIsTexture_int_R_boolean 108
typedef jbool (*func_arc_backend_sdl_SdlGL20_glIsTexture_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_backend_sdl_SdlGL20_glLinkProgram_int 109
typedef void (*func_arc_backend_sdl_SdlGL20_glLinkProgram_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_backend_sdl_SdlGL20_glReleaseShaderCompiler 110
typedef void (*func_arc_backend_sdl_SdlGL20_glReleaseShaderCompiler)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_SdlGL20_glRenderbufferStorage_int_int_int_int 111
typedef void (*func_arc_backend_sdl_SdlGL20_glRenderbufferStorage_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
#define VTABLE_arc_backend_sdl_SdlGL20_glSampleCoverage_float_boolean 112
typedef void (*func_arc_backend_sdl_SdlGL20_glSampleCoverage_float_boolean)(jcontext ctx, jobject self, jfloat param0, jbool param1);
#define VTABLE_arc_backend_sdl_SdlGL20_glShaderSource_int_java_lang_String 113
typedef void (*func_arc_backend_sdl_SdlGL20_glShaderSource_int_java_lang_String)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_arc_backend_sdl_SdlGL20_glStencilFuncSeparate_int_int_int_int 114
typedef void (*func_arc_backend_sdl_SdlGL20_glStencilFuncSeparate_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
#define VTABLE_arc_backend_sdl_SdlGL20_glStencilMaskSeparate_int_int 115
typedef void (*func_arc_backend_sdl_SdlGL20_glStencilMaskSeparate_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_arc_backend_sdl_SdlGL20_glStencilOpSeparate_int_int_int_int 116
typedef void (*func_arc_backend_sdl_SdlGL20_glStencilOpSeparate_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
#define VTABLE_arc_backend_sdl_SdlGL20_glTexParameterfv_int_int_java_nio_FloatBuffer 117
typedef void (*func_arc_backend_sdl_SdlGL20_glTexParameterfv_int_int_java_nio_FloatBuffer)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
#define VTABLE_arc_backend_sdl_SdlGL20_glTexParameteri_int_int_int 118
typedef void (*func_arc_backend_sdl_SdlGL20_glTexParameteri_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2);
#define VTABLE_arc_backend_sdl_SdlGL20_glTexParameteriv_int_int_java_nio_IntBuffer 119
typedef void (*func_arc_backend_sdl_SdlGL20_glTexParameteriv_int_int_java_nio_IntBuffer)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
#define VTABLE_arc_backend_sdl_SdlGL20_glUniform1f_int_float 120
typedef void (*func_arc_backend_sdl_SdlGL20_glUniform1f_int_float)(jcontext ctx, jobject self, jint param0, jfloat param1);
#define VTABLE_arc_backend_sdl_SdlGL20_glUniform1fv_int_int_java_nio_FloatBuffer 121
typedef void (*func_arc_backend_sdl_SdlGL20_glUniform1fv_int_int_java_nio_FloatBuffer)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
#define VTABLE_arc_backend_sdl_SdlGL20_glUniform1fv_int_int_Array1_float_int 122
typedef void (*func_arc_backend_sdl_SdlGL20_glUniform1fv_int_int_Array1_float_int)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jint param3);
#define VTABLE_arc_backend_sdl_SdlGL20_glUniform1i_int_int 123
typedef void (*func_arc_backend_sdl_SdlGL20_glUniform1i_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_arc_backend_sdl_SdlGL20_glUniform1iv_int_int_java_nio_IntBuffer 124
typedef void (*func_arc_backend_sdl_SdlGL20_glUniform1iv_int_int_java_nio_IntBuffer)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
#define VTABLE_arc_backend_sdl_SdlGL20_glUniform1iv_int_int_Array1_int_int 125
typedef void (*func_arc_backend_sdl_SdlGL20_glUniform1iv_int_int_Array1_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jint param3);
#define VTABLE_arc_backend_sdl_SdlGL20_glUniform2f_int_float_float 126
typedef void (*func_arc_backend_sdl_SdlGL20_glUniform2f_int_float_float)(jcontext ctx, jobject self, jint param0, jfloat param1, jfloat param2);
#define VTABLE_arc_backend_sdl_SdlGL20_glUniform2fv_int_int_java_nio_FloatBuffer 127
typedef void (*func_arc_backend_sdl_SdlGL20_glUniform2fv_int_int_java_nio_FloatBuffer)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
#define VTABLE_arc_backend_sdl_SdlGL20_glUniform2fv_int_int_Array1_float_int 128
typedef void (*func_arc_backend_sdl_SdlGL20_glUniform2fv_int_int_Array1_float_int)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jint param3);
#define VTABLE_arc_backend_sdl_SdlGL20_glUniform2i_int_int_int 129
typedef void (*func_arc_backend_sdl_SdlGL20_glUniform2i_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2);
#define VTABLE_arc_backend_sdl_SdlGL20_glUniform2iv_int_int_java_nio_IntBuffer 130
typedef void (*func_arc_backend_sdl_SdlGL20_glUniform2iv_int_int_java_nio_IntBuffer)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
#define VTABLE_arc_backend_sdl_SdlGL20_glUniform2iv_int_int_Array1_int_int 131
typedef void (*func_arc_backend_sdl_SdlGL20_glUniform2iv_int_int_Array1_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jint param3);
#define VTABLE_arc_backend_sdl_SdlGL20_glUniform3f_int_float_float_float 132
typedef void (*func_arc_backend_sdl_SdlGL20_glUniform3f_int_float_float_float)(jcontext ctx, jobject self, jint param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_arc_backend_sdl_SdlGL20_glUniform3fv_int_int_java_nio_FloatBuffer 133
typedef void (*func_arc_backend_sdl_SdlGL20_glUniform3fv_int_int_java_nio_FloatBuffer)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
#define VTABLE_arc_backend_sdl_SdlGL20_glUniform3fv_int_int_Array1_float_int 134
typedef void (*func_arc_backend_sdl_SdlGL20_glUniform3fv_int_int_Array1_float_int)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jint param3);
#define VTABLE_arc_backend_sdl_SdlGL20_glUniform3i_int_int_int_int 135
typedef void (*func_arc_backend_sdl_SdlGL20_glUniform3i_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
#define VTABLE_arc_backend_sdl_SdlGL20_glUniform3iv_int_int_java_nio_IntBuffer 136
typedef void (*func_arc_backend_sdl_SdlGL20_glUniform3iv_int_int_java_nio_IntBuffer)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
#define VTABLE_arc_backend_sdl_SdlGL20_glUniform3iv_int_int_Array1_int_int 137
typedef void (*func_arc_backend_sdl_SdlGL20_glUniform3iv_int_int_Array1_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jint param3);
#define VTABLE_arc_backend_sdl_SdlGL20_glUniform4f_int_float_float_float_float 138
typedef void (*func_arc_backend_sdl_SdlGL20_glUniform4f_int_float_float_float_float)(jcontext ctx, jobject self, jint param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4);
#define VTABLE_arc_backend_sdl_SdlGL20_glUniform4fv_int_int_java_nio_FloatBuffer 139
typedef void (*func_arc_backend_sdl_SdlGL20_glUniform4fv_int_int_java_nio_FloatBuffer)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
#define VTABLE_arc_backend_sdl_SdlGL20_glUniform4fv_int_int_Array1_float_int 140
typedef void (*func_arc_backend_sdl_SdlGL20_glUniform4fv_int_int_Array1_float_int)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jint param3);
#define VTABLE_arc_backend_sdl_SdlGL20_glUniform4i_int_int_int_int_int 141
typedef void (*func_arc_backend_sdl_SdlGL20_glUniform4i_int_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4);
#define VTABLE_arc_backend_sdl_SdlGL20_glUniform4iv_int_int_java_nio_IntBuffer 142
typedef void (*func_arc_backend_sdl_SdlGL20_glUniform4iv_int_int_java_nio_IntBuffer)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
#define VTABLE_arc_backend_sdl_SdlGL20_glUniform4iv_int_int_Array1_int_int 143
typedef void (*func_arc_backend_sdl_SdlGL20_glUniform4iv_int_int_Array1_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jint param3);
#define VTABLE_arc_backend_sdl_SdlGL20_glUniformMatrix2fv_int_int_boolean_java_nio_FloatBuffer 144
typedef void (*func_arc_backend_sdl_SdlGL20_glUniformMatrix2fv_int_int_boolean_java_nio_FloatBuffer)(jcontext ctx, jobject self, jint param0, jint param1, jbool param2, jobject param3);
#define VTABLE_arc_backend_sdl_SdlGL20_glUniformMatrix2fv_int_int_boolean_Array1_float_int 145
typedef void (*func_arc_backend_sdl_SdlGL20_glUniformMatrix2fv_int_int_boolean_Array1_float_int)(jcontext ctx, jobject self, jint param0, jint param1, jbool param2, jobject param3, jint param4);
#define VTABLE_arc_backend_sdl_SdlGL20_glUniformMatrix3fv_int_int_boolean_java_nio_FloatBuffer 146
typedef void (*func_arc_backend_sdl_SdlGL20_glUniformMatrix3fv_int_int_boolean_java_nio_FloatBuffer)(jcontext ctx, jobject self, jint param0, jint param1, jbool param2, jobject param3);
#define VTABLE_arc_backend_sdl_SdlGL20_glUniformMatrix3fv_int_int_boolean_Array1_float_int 147
typedef void (*func_arc_backend_sdl_SdlGL20_glUniformMatrix3fv_int_int_boolean_Array1_float_int)(jcontext ctx, jobject self, jint param0, jint param1, jbool param2, jobject param3, jint param4);
#define VTABLE_arc_backend_sdl_SdlGL20_glUniformMatrix4fv_int_int_boolean_java_nio_FloatBuffer 148
typedef void (*func_arc_backend_sdl_SdlGL20_glUniformMatrix4fv_int_int_boolean_java_nio_FloatBuffer)(jcontext ctx, jobject self, jint param0, jint param1, jbool param2, jobject param3);
#define VTABLE_arc_backend_sdl_SdlGL20_glUniformMatrix4fv_int_int_boolean_Array1_float_int 149
typedef void (*func_arc_backend_sdl_SdlGL20_glUniformMatrix4fv_int_int_boolean_Array1_float_int)(jcontext ctx, jobject self, jint param0, jint param1, jbool param2, jobject param3, jint param4);
#define VTABLE_arc_backend_sdl_SdlGL20_glUseProgram_int 150
typedef void (*func_arc_backend_sdl_SdlGL20_glUseProgram_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_backend_sdl_SdlGL20_glValidateProgram_int 151
typedef void (*func_arc_backend_sdl_SdlGL20_glValidateProgram_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_backend_sdl_SdlGL20_glVertexAttrib1f_int_float 152
typedef void (*func_arc_backend_sdl_SdlGL20_glVertexAttrib1f_int_float)(jcontext ctx, jobject self, jint param0, jfloat param1);
#define VTABLE_arc_backend_sdl_SdlGL20_glVertexAttrib1fv_int_java_nio_FloatBuffer 153
typedef void (*func_arc_backend_sdl_SdlGL20_glVertexAttrib1fv_int_java_nio_FloatBuffer)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_arc_backend_sdl_SdlGL20_glVertexAttrib2f_int_float_float 154
typedef void (*func_arc_backend_sdl_SdlGL20_glVertexAttrib2f_int_float_float)(jcontext ctx, jobject self, jint param0, jfloat param1, jfloat param2);
#define VTABLE_arc_backend_sdl_SdlGL20_glVertexAttrib2fv_int_java_nio_FloatBuffer 155
typedef void (*func_arc_backend_sdl_SdlGL20_glVertexAttrib2fv_int_java_nio_FloatBuffer)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_arc_backend_sdl_SdlGL20_glVertexAttrib3f_int_float_float_float 156
typedef void (*func_arc_backend_sdl_SdlGL20_glVertexAttrib3f_int_float_float_float)(jcontext ctx, jobject self, jint param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_arc_backend_sdl_SdlGL20_glVertexAttrib3fv_int_java_nio_FloatBuffer 157
typedef void (*func_arc_backend_sdl_SdlGL20_glVertexAttrib3fv_int_java_nio_FloatBuffer)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_arc_backend_sdl_SdlGL20_glVertexAttrib4f_int_float_float_float_float 158
typedef void (*func_arc_backend_sdl_SdlGL20_glVertexAttrib4f_int_float_float_float_float)(jcontext ctx, jobject self, jint param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4);
#define VTABLE_arc_backend_sdl_SdlGL20_glVertexAttrib4fv_int_java_nio_FloatBuffer 159
typedef void (*func_arc_backend_sdl_SdlGL20_glVertexAttrib4fv_int_java_nio_FloatBuffer)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_arc_backend_sdl_SdlGL20_glVertexAttribPointer_int_int_int_boolean_int_java_nio_Buffer 160
typedef void (*func_arc_backend_sdl_SdlGL20_glVertexAttribPointer_int_int_int_boolean_int_java_nio_Buffer)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jbool param3, jint param4, jobject param5);
#define VTABLE_arc_backend_sdl_SdlGL20_glVertexAttribPointer_int_int_int_boolean_int_int 161
typedef void (*func_arc_backend_sdl_SdlGL20_glVertexAttribPointer_int_int_int_boolean_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jbool param3, jint param4, jint param5);

void mark_arc_backend_sdl_SdlGL20(jobject object, jint mark, jint depth);
void clinit_arc_backend_sdl_SdlGL20(jcontext ctx);
void init_arc_backend_sdl_SdlGL20(jcontext ctx, jobject self);
void M_arc_backend_sdl_SdlGL20_glActiveTexture_int(jcontext ctx, jobject self, jint param0);
void M_arc_backend_sdl_SdlGL20_glBindTexture_int_int(jcontext ctx, jobject self, jint param0, jint param1);
void M_arc_backend_sdl_SdlGL20_glBlendFunc_int_int(jcontext ctx, jobject self, jint param0, jint param1);
void M_arc_backend_sdl_SdlGL20_glClear_int(jcontext ctx, jobject self, jint param0);
void M_arc_backend_sdl_SdlGL20_glClearColor_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
void M_arc_backend_sdl_SdlGL20_glClearDepthf_float(jcontext ctx, jobject self, jfloat param0);
void M_arc_backend_sdl_SdlGL20_glClearStencil_int(jcontext ctx, jobject self, jint param0);
void M_arc_backend_sdl_SdlGL20_glColorMask_boolean_boolean_boolean_boolean(jcontext ctx, jobject self, jbool param0, jbool param1, jbool param2, jbool param3);
void M_arc_backend_sdl_SdlGL20_glCompressedTexImage2D_int_int_int_int_int_int_int_java_nio_Buffer(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jobject param7);
void M_arc_backend_sdl_SdlGL20_glCompressedTexSubImage2D_int_int_int_int_int_int_int_int_java_nio_Buffer(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jobject param8);
void M_arc_backend_sdl_SdlGL20_glCopyTexImage2D_int_int_int_int_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7);
void M_arc_backend_sdl_SdlGL20_glCopyTexSubImage2D_int_int_int_int_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7);
void M_arc_backend_sdl_SdlGL20_glCullFace_int(jcontext ctx, jobject self, jint param0);
void M_arc_backend_sdl_SdlGL20_glDeleteTexture_int(jcontext ctx, jobject self, jint param0);
void M_arc_backend_sdl_SdlGL20_glDepthFunc_int(jcontext ctx, jobject self, jint param0);
void M_arc_backend_sdl_SdlGL20_glDepthMask_boolean(jcontext ctx, jobject self, jbool param0);
void M_arc_backend_sdl_SdlGL20_glDepthRangef_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1);
void M_arc_backend_sdl_SdlGL20_glDisable_int(jcontext ctx, jobject self, jint param0);
void M_arc_backend_sdl_SdlGL20_glDrawArrays_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2);
void M_arc_backend_sdl_SdlGL20_glDrawElements_int_int_int_java_nio_Buffer(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jobject param3);
void M_arc_backend_sdl_SdlGL20_glEnable_int(jcontext ctx, jobject self, jint param0);
void M_arc_backend_sdl_SdlGL20_glFinish(jcontext ctx, jobject self);
void M_arc_backend_sdl_SdlGL20_glFlush(jcontext ctx, jobject self);
void M_arc_backend_sdl_SdlGL20_glFrontFace_int(jcontext ctx, jobject self, jint param0);
jint M_arc_backend_sdl_SdlGL20_glGenTexture_R_int(jcontext ctx, jobject self);
jint M_arc_backend_sdl_SdlGL20_glGetError_R_int(jcontext ctx, jobject self);
void M_arc_backend_sdl_SdlGL20_glGetIntegerv_int_java_nio_IntBuffer(jcontext ctx, jobject self, jint param0, jobject param1);
jobject M_arc_backend_sdl_SdlGL20_glGetString_int_R_java_lang_String(jcontext ctx, jobject self, jint param0);
void M_arc_backend_sdl_SdlGL20_glHint_int_int(jcontext ctx, jobject self, jint param0, jint param1);
void M_arc_backend_sdl_SdlGL20_glLineWidth_float(jcontext ctx, jobject self, jfloat param0);
void M_arc_backend_sdl_SdlGL20_glPixelStorei_int_int(jcontext ctx, jobject self, jint param0, jint param1);
void M_arc_backend_sdl_SdlGL20_glPolygonOffset_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1);
void M_arc_backend_sdl_SdlGL20_glReadPixels_int_int_int_int_int_int_java_nio_Buffer(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jobject param6);
void M_arc_backend_sdl_SdlGL20_glScissor_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
void M_arc_backend_sdl_SdlGL20_glStencilFunc_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2);
void M_arc_backend_sdl_SdlGL20_glStencilMask_int(jcontext ctx, jobject self, jint param0);
void M_arc_backend_sdl_SdlGL20_glStencilOp_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2);
void M_arc_backend_sdl_SdlGL20_glTexImage2D_int_int_int_int_int_int_int_int_java_nio_Buffer(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jobject param8);
void M_arc_backend_sdl_SdlGL20_glTexParameterf_int_int_float(jcontext ctx, jobject self, jint param0, jint param1, jfloat param2);
void M_arc_backend_sdl_SdlGL20_glTexSubImage2D_int_int_int_int_int_int_int_int_java_nio_Buffer(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jobject param8);
void M_arc_backend_sdl_SdlGL20_glViewport_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
void M_arc_backend_sdl_SdlGL20_glAttachShader_int_int(jcontext ctx, jobject self, jint param0, jint param1);
void M_arc_backend_sdl_SdlGL20_glBindAttribLocation_int_int_java_lang_String(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
void M_arc_backend_sdl_SdlGL20_glBindBuffer_int_int(jcontext ctx, jobject self, jint param0, jint param1);
void M_arc_backend_sdl_SdlGL20_glBindFramebuffer_int_int(jcontext ctx, jobject self, jint param0, jint param1);
void M_arc_backend_sdl_SdlGL20_glBindRenderbuffer_int_int(jcontext ctx, jobject self, jint param0, jint param1);
void M_arc_backend_sdl_SdlGL20_glBlendColor_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
void M_arc_backend_sdl_SdlGL20_glBlendEquation_int(jcontext ctx, jobject self, jint param0);
void M_arc_backend_sdl_SdlGL20_glBlendEquationSeparate_int_int(jcontext ctx, jobject self, jint param0, jint param1);
void M_arc_backend_sdl_SdlGL20_glBlendFuncSeparate_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
void M_arc_backend_sdl_SdlGL20_glBufferData_int_int_java_nio_Buffer_int(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jint param3);
void M_arc_backend_sdl_SdlGL20_glBufferSubData_int_int_int_java_nio_Buffer(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jobject param3);
jint M_arc_backend_sdl_SdlGL20_glCheckFramebufferStatus_int_R_int(jcontext ctx, jobject self, jint param0);
void M_arc_backend_sdl_SdlGL20_glCompileShader_int(jcontext ctx, jobject self, jint param0);
jint M_arc_backend_sdl_SdlGL20_glCreateProgram_R_int(jcontext ctx, jobject self);
jint M_arc_backend_sdl_SdlGL20_glCreateShader_int_R_int(jcontext ctx, jobject self, jint param0);
void M_arc_backend_sdl_SdlGL20_glDeleteBuffer_int(jcontext ctx, jobject self, jint param0);
void M_arc_backend_sdl_SdlGL20_glDeleteFramebuffer_int(jcontext ctx, jobject self, jint param0);
void M_arc_backend_sdl_SdlGL20_glDeleteProgram_int(jcontext ctx, jobject self, jint param0);
void M_arc_backend_sdl_SdlGL20_glDeleteRenderbuffer_int(jcontext ctx, jobject self, jint param0);
void M_arc_backend_sdl_SdlGL20_glDeleteShader_int(jcontext ctx, jobject self, jint param0);
void M_arc_backend_sdl_SdlGL20_glDetachShader_int_int(jcontext ctx, jobject self, jint param0, jint param1);
void M_arc_backend_sdl_SdlGL20_glDisableVertexAttribArray_int(jcontext ctx, jobject self, jint param0);
void M_arc_backend_sdl_SdlGL20_glDrawElements_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
void M_arc_backend_sdl_SdlGL20_glEnableVertexAttribArray_int(jcontext ctx, jobject self, jint param0);
void M_arc_backend_sdl_SdlGL20_glFramebufferRenderbuffer_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
void M_arc_backend_sdl_SdlGL20_glFramebufferTexture2D_int_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4);
jint M_arc_backend_sdl_SdlGL20_glGenBuffer_R_int(jcontext ctx, jobject self);
void M_arc_backend_sdl_SdlGL20_glGenerateMipmap_int(jcontext ctx, jobject self, jint param0);
jint M_arc_backend_sdl_SdlGL20_glGenFramebuffer_R_int(jcontext ctx, jobject self);
jint M_arc_backend_sdl_SdlGL20_glGenRenderbuffer_R_int(jcontext ctx, jobject self);
jobject M_arc_backend_sdl_SdlGL20_glGetActiveAttrib_int_int_java_nio_IntBuffer_java_nio_IntBuffer_R_java_lang_String(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jobject param3);
jobject M_arc_backend_sdl_SdlGL20_glGetActiveUniform_int_int_java_nio_IntBuffer_java_nio_IntBuffer_R_java_lang_String(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jobject param3);
jint M_arc_backend_sdl_SdlGL20_glGetAttribLocation_int_java_lang_String_R_int(jcontext ctx, jobject self, jint param0, jobject param1);
void M_arc_backend_sdl_SdlGL20_glGetBooleanv_int_java_nio_Buffer(jcontext ctx, jobject self, jint param0, jobject param1);
void M_arc_backend_sdl_SdlGL20_glGetBufferParameteriv_int_int_java_nio_IntBuffer(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
void M_arc_backend_sdl_SdlGL20_glGetFloatv_int_java_nio_FloatBuffer(jcontext ctx, jobject self, jint param0, jobject param1);
void M_arc_backend_sdl_SdlGL20_glGetFramebufferAttachmentParameteriv_int_int_int_java_nio_IntBuffer(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jobject param3);
void M_arc_backend_sdl_SdlGL20_glGetProgramiv_int_int_java_nio_IntBuffer(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
jobject M_arc_backend_sdl_SdlGL20_glGetProgramInfoLog_int_R_java_lang_String(jcontext ctx, jobject self, jint param0);
void M_arc_backend_sdl_SdlGL20_glGetRenderbufferParameteriv_int_int_java_nio_IntBuffer(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
void M_arc_backend_sdl_SdlGL20_glGetShaderiv_int_int_java_nio_IntBuffer(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
jobject M_arc_backend_sdl_SdlGL20_glGetShaderInfoLog_int_R_java_lang_String(jcontext ctx, jobject self, jint param0);
void M_arc_backend_sdl_SdlGL20_glGetShaderPrecisionFormat_int_int_java_nio_IntBuffer_java_nio_IntBuffer(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jobject param3);
void M_arc_backend_sdl_SdlGL20_glGetTexParameterfv_int_int_java_nio_FloatBuffer(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
void M_arc_backend_sdl_SdlGL20_glGetTexParameteriv_int_int_java_nio_IntBuffer(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
void M_arc_backend_sdl_SdlGL20_glGetUniformfv_int_int_java_nio_FloatBuffer(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
void M_arc_backend_sdl_SdlGL20_glGetUniformiv_int_int_java_nio_IntBuffer(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
jint M_arc_backend_sdl_SdlGL20_glGetUniformLocation_int_java_lang_String_R_int(jcontext ctx, jobject self, jint param0, jobject param1);
void M_arc_backend_sdl_SdlGL20_glGetVertexAttribfv_int_int_java_nio_FloatBuffer(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
void M_arc_backend_sdl_SdlGL20_glGetVertexAttribiv_int_int_java_nio_IntBuffer(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
jbool M_arc_backend_sdl_SdlGL20_glIsBuffer_int_R_boolean(jcontext ctx, jobject self, jint param0);
jbool M_arc_backend_sdl_SdlGL20_glIsEnabled_int_R_boolean(jcontext ctx, jobject self, jint param0);
jbool M_arc_backend_sdl_SdlGL20_glIsFramebuffer_int_R_boolean(jcontext ctx, jobject self, jint param0);
jbool M_arc_backend_sdl_SdlGL20_glIsProgram_int_R_boolean(jcontext ctx, jobject self, jint param0);
jbool M_arc_backend_sdl_SdlGL20_glIsRenderbuffer_int_R_boolean(jcontext ctx, jobject self, jint param0);
jbool M_arc_backend_sdl_SdlGL20_glIsShader_int_R_boolean(jcontext ctx, jobject self, jint param0);
jbool M_arc_backend_sdl_SdlGL20_glIsTexture_int_R_boolean(jcontext ctx, jobject self, jint param0);
void M_arc_backend_sdl_SdlGL20_glLinkProgram_int(jcontext ctx, jobject self, jint param0);
void M_arc_backend_sdl_SdlGL20_glReleaseShaderCompiler(jcontext ctx, jobject self);
void M_arc_backend_sdl_SdlGL20_glRenderbufferStorage_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
void M_arc_backend_sdl_SdlGL20_glSampleCoverage_float_boolean(jcontext ctx, jobject self, jfloat param0, jbool param1);
void M_arc_backend_sdl_SdlGL20_glShaderSource_int_java_lang_String(jcontext ctx, jobject self, jint param0, jobject param1);
void M_arc_backend_sdl_SdlGL20_glStencilFuncSeparate_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
void M_arc_backend_sdl_SdlGL20_glStencilMaskSeparate_int_int(jcontext ctx, jobject self, jint param0, jint param1);
void M_arc_backend_sdl_SdlGL20_glStencilOpSeparate_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
void M_arc_backend_sdl_SdlGL20_glTexParameterfv_int_int_java_nio_FloatBuffer(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
void M_arc_backend_sdl_SdlGL20_glTexParameteri_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2);
void M_arc_backend_sdl_SdlGL20_glTexParameteriv_int_int_java_nio_IntBuffer(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
void M_arc_backend_sdl_SdlGL20_glUniform1f_int_float(jcontext ctx, jobject self, jint param0, jfloat param1);
void M_arc_backend_sdl_SdlGL20_glUniform1fv_int_int_java_nio_FloatBuffer(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
void M_arc_backend_sdl_SdlGL20_glUniform1fv_int_int_Array1_float_int(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jint param3);
void M_arc_backend_sdl_SdlGL20_glUniform1i_int_int(jcontext ctx, jobject self, jint param0, jint param1);
void M_arc_backend_sdl_SdlGL20_glUniform1iv_int_int_java_nio_IntBuffer(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
void M_arc_backend_sdl_SdlGL20_glUniform1iv_int_int_Array1_int_int(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jint param3);
void M_arc_backend_sdl_SdlGL20_glUniform2f_int_float_float(jcontext ctx, jobject self, jint param0, jfloat param1, jfloat param2);
void M_arc_backend_sdl_SdlGL20_glUniform2fv_int_int_java_nio_FloatBuffer(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
void M_arc_backend_sdl_SdlGL20_glUniform2fv_int_int_Array1_float_int(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jint param3);
void M_arc_backend_sdl_SdlGL20_glUniform2i_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2);
void M_arc_backend_sdl_SdlGL20_glUniform2iv_int_int_java_nio_IntBuffer(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
void M_arc_backend_sdl_SdlGL20_glUniform2iv_int_int_Array1_int_int(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jint param3);
void M_arc_backend_sdl_SdlGL20_glUniform3f_int_float_float_float(jcontext ctx, jobject self, jint param0, jfloat param1, jfloat param2, jfloat param3);
void M_arc_backend_sdl_SdlGL20_glUniform3fv_int_int_java_nio_FloatBuffer(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
void M_arc_backend_sdl_SdlGL20_glUniform3fv_int_int_Array1_float_int(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jint param3);
void M_arc_backend_sdl_SdlGL20_glUniform3i_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
void M_arc_backend_sdl_SdlGL20_glUniform3iv_int_int_java_nio_IntBuffer(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
void M_arc_backend_sdl_SdlGL20_glUniform3iv_int_int_Array1_int_int(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jint param3);
void M_arc_backend_sdl_SdlGL20_glUniform4f_int_float_float_float_float(jcontext ctx, jobject self, jint param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4);
void M_arc_backend_sdl_SdlGL20_glUniform4fv_int_int_java_nio_FloatBuffer(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
void M_arc_backend_sdl_SdlGL20_glUniform4fv_int_int_Array1_float_int(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jint param3);
void M_arc_backend_sdl_SdlGL20_glUniform4i_int_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4);
void M_arc_backend_sdl_SdlGL20_glUniform4iv_int_int_java_nio_IntBuffer(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
void M_arc_backend_sdl_SdlGL20_glUniform4iv_int_int_Array1_int_int(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jint param3);
void M_arc_backend_sdl_SdlGL20_glUniformMatrix2fv_int_int_boolean_java_nio_FloatBuffer(jcontext ctx, jobject self, jint param0, jint param1, jbool param2, jobject param3);
void M_arc_backend_sdl_SdlGL20_glUniformMatrix2fv_int_int_boolean_Array1_float_int(jcontext ctx, jobject self, jint param0, jint param1, jbool param2, jobject param3, jint param4);
void M_arc_backend_sdl_SdlGL20_glUniformMatrix3fv_int_int_boolean_java_nio_FloatBuffer(jcontext ctx, jobject self, jint param0, jint param1, jbool param2, jobject param3);
void M_arc_backend_sdl_SdlGL20_glUniformMatrix3fv_int_int_boolean_Array1_float_int(jcontext ctx, jobject self, jint param0, jint param1, jbool param2, jobject param3, jint param4);
void M_arc_backend_sdl_SdlGL20_glUniformMatrix4fv_int_int_boolean_java_nio_FloatBuffer(jcontext ctx, jobject self, jint param0, jint param1, jbool param2, jobject param3);
void M_arc_backend_sdl_SdlGL20_glUniformMatrix4fv_int_int_boolean_Array1_float_int(jcontext ctx, jobject self, jint param0, jint param1, jbool param2, jobject param3, jint param4);
void M_arc_backend_sdl_SdlGL20_glUseProgram_int(jcontext ctx, jobject self, jint param0);
void M_arc_backend_sdl_SdlGL20_glValidateProgram_int(jcontext ctx, jobject self, jint param0);
void M_arc_backend_sdl_SdlGL20_glVertexAttrib1f_int_float(jcontext ctx, jobject self, jint param0, jfloat param1);
void M_arc_backend_sdl_SdlGL20_glVertexAttrib1fv_int_java_nio_FloatBuffer(jcontext ctx, jobject self, jint param0, jobject param1);
void M_arc_backend_sdl_SdlGL20_glVertexAttrib2f_int_float_float(jcontext ctx, jobject self, jint param0, jfloat param1, jfloat param2);
void M_arc_backend_sdl_SdlGL20_glVertexAttrib2fv_int_java_nio_FloatBuffer(jcontext ctx, jobject self, jint param0, jobject param1);
void M_arc_backend_sdl_SdlGL20_glVertexAttrib3f_int_float_float_float(jcontext ctx, jobject self, jint param0, jfloat param1, jfloat param2, jfloat param3);
void M_arc_backend_sdl_SdlGL20_glVertexAttrib3fv_int_java_nio_FloatBuffer(jcontext ctx, jobject self, jint param0, jobject param1);
void M_arc_backend_sdl_SdlGL20_glVertexAttrib4f_int_float_float_float_float(jcontext ctx, jobject self, jint param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4);
void M_arc_backend_sdl_SdlGL20_glVertexAttrib4fv_int_java_nio_FloatBuffer(jcontext ctx, jobject self, jint param0, jobject param1);
void M_arc_backend_sdl_SdlGL20_glVertexAttribPointer_int_int_int_boolean_int_java_nio_Buffer(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jbool param3, jint param4, jobject param5);
void M_arc_backend_sdl_SdlGL20_glVertexAttribPointer_int_int_int_boolean_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jbool param3, jint param4, jint param5);

#ifdef __cplusplus
}
#endif

#endif
