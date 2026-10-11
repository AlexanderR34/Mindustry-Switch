#ifndef HEADER_arc_backend_sdl_SdlGL30
#define HEADER_arc_backend_sdl_SdlGL30

#include "Clearwing.h"
#include "arc/backend/sdl/SdlGL20.h"
#include "arc/graphics/GL30.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_backend_sdl_SdlGL30 {
	arc_backend_sdl_SdlGL20 parent;
} arc_backend_sdl_SdlGL30;

extern Class class_arc_backend_sdl_SdlGL30;


#define VTABLE_arc_backend_sdl_SdlGL30_hashCode_R_int 0
typedef jint (*func_arc_backend_sdl_SdlGL30_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_SdlGL30_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_backend_sdl_SdlGL30_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_backend_sdl_SdlGL30_clone_R_java_lang_Object 2
typedef jobject (*func_arc_backend_sdl_SdlGL30_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_SdlGL30_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_backend_sdl_SdlGL30_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_SdlGL30_toString_R_java_lang_String 4
typedef jobject (*func_arc_backend_sdl_SdlGL30_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_SdlGL30_finalize 5
typedef void (*func_arc_backend_sdl_SdlGL30_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_SdlGL30_notify 6
typedef void (*func_arc_backend_sdl_SdlGL30_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_SdlGL30_notifyAll 7
typedef void (*func_arc_backend_sdl_SdlGL30_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_SdlGL30_wait 8
typedef void (*func_arc_backend_sdl_SdlGL30_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_SdlGL30_wait_long 9
typedef void (*func_arc_backend_sdl_SdlGL30_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_backend_sdl_SdlGL30_wait_long_int 10
typedef void (*func_arc_backend_sdl_SdlGL30_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_backend_sdl_SdlGL30_glActiveTexture_int 11
typedef void (*func_arc_backend_sdl_SdlGL30_glActiveTexture_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_backend_sdl_SdlGL30_glBindTexture_int_int 12
typedef void (*func_arc_backend_sdl_SdlGL30_glBindTexture_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_arc_backend_sdl_SdlGL30_glBlendFunc_int_int 13
typedef void (*func_arc_backend_sdl_SdlGL30_glBlendFunc_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_arc_backend_sdl_SdlGL30_glClear_int 14
typedef void (*func_arc_backend_sdl_SdlGL30_glClear_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_backend_sdl_SdlGL30_glClearColor_float_float_float_float 15
typedef void (*func_arc_backend_sdl_SdlGL30_glClearColor_float_float_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_arc_backend_sdl_SdlGL30_glClearDepthf_float 16
typedef void (*func_arc_backend_sdl_SdlGL30_glClearDepthf_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_backend_sdl_SdlGL30_glClearStencil_int 17
typedef void (*func_arc_backend_sdl_SdlGL30_glClearStencil_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_backend_sdl_SdlGL30_glColorMask_boolean_boolean_boolean_boolean 18
typedef void (*func_arc_backend_sdl_SdlGL30_glColorMask_boolean_boolean_boolean_boolean)(jcontext ctx, jobject self, jbool param0, jbool param1, jbool param2, jbool param3);
#define VTABLE_arc_backend_sdl_SdlGL30_glCompressedTexImage2D_int_int_int_int_int_int_int_java_nio_Buffer 19
typedef void (*func_arc_backend_sdl_SdlGL30_glCompressedTexImage2D_int_int_int_int_int_int_int_java_nio_Buffer)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jobject param7);
#define VTABLE_arc_backend_sdl_SdlGL30_glCompressedTexSubImage2D_int_int_int_int_int_int_int_int_java_nio_Buffer 20
typedef void (*func_arc_backend_sdl_SdlGL30_glCompressedTexSubImage2D_int_int_int_int_int_int_int_int_java_nio_Buffer)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jobject param8);
#define VTABLE_arc_backend_sdl_SdlGL30_glCopyTexImage2D_int_int_int_int_int_int_int_int 21
typedef void (*func_arc_backend_sdl_SdlGL30_glCopyTexImage2D_int_int_int_int_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7);
#define VTABLE_arc_backend_sdl_SdlGL30_glCopyTexSubImage2D_int_int_int_int_int_int_int_int 22
typedef void (*func_arc_backend_sdl_SdlGL30_glCopyTexSubImage2D_int_int_int_int_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7);
#define VTABLE_arc_backend_sdl_SdlGL30_glCullFace_int 23
typedef void (*func_arc_backend_sdl_SdlGL30_glCullFace_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_backend_sdl_SdlGL30_glDeleteTexture_int 24
typedef void (*func_arc_backend_sdl_SdlGL30_glDeleteTexture_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_backend_sdl_SdlGL30_glDepthFunc_int 25
typedef void (*func_arc_backend_sdl_SdlGL30_glDepthFunc_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_backend_sdl_SdlGL30_glDepthMask_boolean 26
typedef void (*func_arc_backend_sdl_SdlGL30_glDepthMask_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_arc_backend_sdl_SdlGL30_glDepthRangef_float_float 27
typedef void (*func_arc_backend_sdl_SdlGL30_glDepthRangef_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_backend_sdl_SdlGL30_glDisable_int 28
typedef void (*func_arc_backend_sdl_SdlGL30_glDisable_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_backend_sdl_SdlGL30_glDrawArrays_int_int_int 29
typedef void (*func_arc_backend_sdl_SdlGL30_glDrawArrays_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2);
#define VTABLE_arc_backend_sdl_SdlGL30_glDrawElements_int_int_int_java_nio_Buffer 30
typedef void (*func_arc_backend_sdl_SdlGL30_glDrawElements_int_int_int_java_nio_Buffer)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jobject param3);
#define VTABLE_arc_backend_sdl_SdlGL30_glEnable_int 31
typedef void (*func_arc_backend_sdl_SdlGL30_glEnable_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_backend_sdl_SdlGL30_glFinish 32
typedef void (*func_arc_backend_sdl_SdlGL30_glFinish)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_SdlGL30_glFlush 33
typedef void (*func_arc_backend_sdl_SdlGL30_glFlush)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_SdlGL30_glFrontFace_int 34
typedef void (*func_arc_backend_sdl_SdlGL30_glFrontFace_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_backend_sdl_SdlGL30_glGenTexture_R_int 35
typedef jint (*func_arc_backend_sdl_SdlGL30_glGenTexture_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_SdlGL30_glGetError_R_int 36
typedef jint (*func_arc_backend_sdl_SdlGL30_glGetError_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_SdlGL30_glGetIntegerv_int_java_nio_IntBuffer 37
typedef void (*func_arc_backend_sdl_SdlGL30_glGetIntegerv_int_java_nio_IntBuffer)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_arc_backend_sdl_SdlGL30_glGetString_int_R_java_lang_String 38
typedef jobject (*func_arc_backend_sdl_SdlGL30_glGetString_int_R_java_lang_String)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_backend_sdl_SdlGL30_glHint_int_int 39
typedef void (*func_arc_backend_sdl_SdlGL30_glHint_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_arc_backend_sdl_SdlGL30_glLineWidth_float 40
typedef void (*func_arc_backend_sdl_SdlGL30_glLineWidth_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_backend_sdl_SdlGL30_glPixelStorei_int_int 41
typedef void (*func_arc_backend_sdl_SdlGL30_glPixelStorei_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_arc_backend_sdl_SdlGL30_glPolygonOffset_float_float 42
typedef void (*func_arc_backend_sdl_SdlGL30_glPolygonOffset_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_backend_sdl_SdlGL30_glReadPixels_int_int_int_int_int_int_java_nio_Buffer 43
typedef void (*func_arc_backend_sdl_SdlGL30_glReadPixels_int_int_int_int_int_int_java_nio_Buffer)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jobject param6);
#define VTABLE_arc_backend_sdl_SdlGL30_glScissor_int_int_int_int 44
typedef void (*func_arc_backend_sdl_SdlGL30_glScissor_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
#define VTABLE_arc_backend_sdl_SdlGL30_glStencilFunc_int_int_int 45
typedef void (*func_arc_backend_sdl_SdlGL30_glStencilFunc_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2);
#define VTABLE_arc_backend_sdl_SdlGL30_glStencilMask_int 46
typedef void (*func_arc_backend_sdl_SdlGL30_glStencilMask_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_backend_sdl_SdlGL30_glStencilOp_int_int_int 47
typedef void (*func_arc_backend_sdl_SdlGL30_glStencilOp_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2);
#define VTABLE_arc_backend_sdl_SdlGL30_glTexImage2D_int_int_int_int_int_int_int_int_java_nio_Buffer 48
typedef void (*func_arc_backend_sdl_SdlGL30_glTexImage2D_int_int_int_int_int_int_int_int_java_nio_Buffer)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jobject param8);
#define VTABLE_arc_backend_sdl_SdlGL30_glTexParameterf_int_int_float 49
typedef void (*func_arc_backend_sdl_SdlGL30_glTexParameterf_int_int_float)(jcontext ctx, jobject self, jint param0, jint param1, jfloat param2);
#define VTABLE_arc_backend_sdl_SdlGL30_glTexSubImage2D_int_int_int_int_int_int_int_int_java_nio_Buffer 50
typedef void (*func_arc_backend_sdl_SdlGL30_glTexSubImage2D_int_int_int_int_int_int_int_int_java_nio_Buffer)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jobject param8);
#define VTABLE_arc_backend_sdl_SdlGL30_glViewport_int_int_int_int 51
typedef void (*func_arc_backend_sdl_SdlGL30_glViewport_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
#define VTABLE_arc_backend_sdl_SdlGL30_glAttachShader_int_int 52
typedef void (*func_arc_backend_sdl_SdlGL30_glAttachShader_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_arc_backend_sdl_SdlGL30_glBindAttribLocation_int_int_java_lang_String 53
typedef void (*func_arc_backend_sdl_SdlGL30_glBindAttribLocation_int_int_java_lang_String)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
#define VTABLE_arc_backend_sdl_SdlGL30_glBindBuffer_int_int 54
typedef void (*func_arc_backend_sdl_SdlGL30_glBindBuffer_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_arc_backend_sdl_SdlGL30_glBindFramebuffer_int_int 55
typedef void (*func_arc_backend_sdl_SdlGL30_glBindFramebuffer_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_arc_backend_sdl_SdlGL30_glBindRenderbuffer_int_int 56
typedef void (*func_arc_backend_sdl_SdlGL30_glBindRenderbuffer_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_arc_backend_sdl_SdlGL30_glBlendColor_float_float_float_float 57
typedef void (*func_arc_backend_sdl_SdlGL30_glBlendColor_float_float_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_arc_backend_sdl_SdlGL30_glBlendEquation_int 58
typedef void (*func_arc_backend_sdl_SdlGL30_glBlendEquation_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_backend_sdl_SdlGL30_glBlendEquationSeparate_int_int 59
typedef void (*func_arc_backend_sdl_SdlGL30_glBlendEquationSeparate_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_arc_backend_sdl_SdlGL30_glBlendFuncSeparate_int_int_int_int 60
typedef void (*func_arc_backend_sdl_SdlGL30_glBlendFuncSeparate_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
#define VTABLE_arc_backend_sdl_SdlGL30_glBufferData_int_int_java_nio_Buffer_int 61
typedef void (*func_arc_backend_sdl_SdlGL30_glBufferData_int_int_java_nio_Buffer_int)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jint param3);
#define VTABLE_arc_backend_sdl_SdlGL30_glBufferSubData_int_int_int_java_nio_Buffer 62
typedef void (*func_arc_backend_sdl_SdlGL30_glBufferSubData_int_int_int_java_nio_Buffer)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jobject param3);
#define VTABLE_arc_backend_sdl_SdlGL30_glCheckFramebufferStatus_int_R_int 63
typedef jint (*func_arc_backend_sdl_SdlGL30_glCheckFramebufferStatus_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_backend_sdl_SdlGL30_glCompileShader_int 64
typedef void (*func_arc_backend_sdl_SdlGL30_glCompileShader_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_backend_sdl_SdlGL30_glCreateProgram_R_int 65
typedef jint (*func_arc_backend_sdl_SdlGL30_glCreateProgram_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_SdlGL30_glCreateShader_int_R_int 66
typedef jint (*func_arc_backend_sdl_SdlGL30_glCreateShader_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_backend_sdl_SdlGL30_glDeleteBuffer_int 67
typedef void (*func_arc_backend_sdl_SdlGL30_glDeleteBuffer_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_backend_sdl_SdlGL30_glDeleteFramebuffer_int 68
typedef void (*func_arc_backend_sdl_SdlGL30_glDeleteFramebuffer_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_backend_sdl_SdlGL30_glDeleteProgram_int 69
typedef void (*func_arc_backend_sdl_SdlGL30_glDeleteProgram_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_backend_sdl_SdlGL30_glDeleteRenderbuffer_int 70
typedef void (*func_arc_backend_sdl_SdlGL30_glDeleteRenderbuffer_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_backend_sdl_SdlGL30_glDeleteShader_int 71
typedef void (*func_arc_backend_sdl_SdlGL30_glDeleteShader_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_backend_sdl_SdlGL30_glDetachShader_int_int 72
typedef void (*func_arc_backend_sdl_SdlGL30_glDetachShader_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_arc_backend_sdl_SdlGL30_glDisableVertexAttribArray_int 73
typedef void (*func_arc_backend_sdl_SdlGL30_glDisableVertexAttribArray_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_backend_sdl_SdlGL30_glDrawElements_int_int_int_int 74
typedef void (*func_arc_backend_sdl_SdlGL30_glDrawElements_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
#define VTABLE_arc_backend_sdl_SdlGL30_glEnableVertexAttribArray_int 75
typedef void (*func_arc_backend_sdl_SdlGL30_glEnableVertexAttribArray_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_backend_sdl_SdlGL30_glFramebufferRenderbuffer_int_int_int_int 76
typedef void (*func_arc_backend_sdl_SdlGL30_glFramebufferRenderbuffer_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
#define VTABLE_arc_backend_sdl_SdlGL30_glFramebufferTexture2D_int_int_int_int_int 77
typedef void (*func_arc_backend_sdl_SdlGL30_glFramebufferTexture2D_int_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4);
#define VTABLE_arc_backend_sdl_SdlGL30_glGenBuffer_R_int 78
typedef jint (*func_arc_backend_sdl_SdlGL30_glGenBuffer_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_SdlGL30_glGenerateMipmap_int 79
typedef void (*func_arc_backend_sdl_SdlGL30_glGenerateMipmap_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_backend_sdl_SdlGL30_glGenFramebuffer_R_int 80
typedef jint (*func_arc_backend_sdl_SdlGL30_glGenFramebuffer_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_SdlGL30_glGenRenderbuffer_R_int 81
typedef jint (*func_arc_backend_sdl_SdlGL30_glGenRenderbuffer_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_SdlGL30_glGetActiveAttrib_int_int_java_nio_IntBuffer_java_nio_IntBuffer_R_java_lang_String 82
typedef jobject (*func_arc_backend_sdl_SdlGL30_glGetActiveAttrib_int_int_java_nio_IntBuffer_java_nio_IntBuffer_R_java_lang_String)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jobject param3);
#define VTABLE_arc_backend_sdl_SdlGL30_glGetActiveUniform_int_int_java_nio_IntBuffer_java_nio_IntBuffer_R_java_lang_String 83
typedef jobject (*func_arc_backend_sdl_SdlGL30_glGetActiveUniform_int_int_java_nio_IntBuffer_java_nio_IntBuffer_R_java_lang_String)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jobject param3);
#define VTABLE_arc_backend_sdl_SdlGL30_glGetAttribLocation_int_java_lang_String_R_int 84
typedef jint (*func_arc_backend_sdl_SdlGL30_glGetAttribLocation_int_java_lang_String_R_int)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_arc_backend_sdl_SdlGL30_glGetBooleanv_int_java_nio_Buffer 85
typedef void (*func_arc_backend_sdl_SdlGL30_glGetBooleanv_int_java_nio_Buffer)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_arc_backend_sdl_SdlGL30_glGetBufferParameteriv_int_int_java_nio_IntBuffer 86
typedef void (*func_arc_backend_sdl_SdlGL30_glGetBufferParameteriv_int_int_java_nio_IntBuffer)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
#define VTABLE_arc_backend_sdl_SdlGL30_glGetFloatv_int_java_nio_FloatBuffer 87
typedef void (*func_arc_backend_sdl_SdlGL30_glGetFloatv_int_java_nio_FloatBuffer)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_arc_backend_sdl_SdlGL30_glGetFramebufferAttachmentParameteriv_int_int_int_java_nio_IntBuffer 88
typedef void (*func_arc_backend_sdl_SdlGL30_glGetFramebufferAttachmentParameteriv_int_int_int_java_nio_IntBuffer)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jobject param3);
#define VTABLE_arc_backend_sdl_SdlGL30_glGetProgramiv_int_int_java_nio_IntBuffer 89
typedef void (*func_arc_backend_sdl_SdlGL30_glGetProgramiv_int_int_java_nio_IntBuffer)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
#define VTABLE_arc_backend_sdl_SdlGL30_glGetProgramInfoLog_int_R_java_lang_String 90
typedef jobject (*func_arc_backend_sdl_SdlGL30_glGetProgramInfoLog_int_R_java_lang_String)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_backend_sdl_SdlGL30_glGetRenderbufferParameteriv_int_int_java_nio_IntBuffer 91
typedef void (*func_arc_backend_sdl_SdlGL30_glGetRenderbufferParameteriv_int_int_java_nio_IntBuffer)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
#define VTABLE_arc_backend_sdl_SdlGL30_glGetShaderiv_int_int_java_nio_IntBuffer 92
typedef void (*func_arc_backend_sdl_SdlGL30_glGetShaderiv_int_int_java_nio_IntBuffer)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
#define VTABLE_arc_backend_sdl_SdlGL30_glGetShaderInfoLog_int_R_java_lang_String 93
typedef jobject (*func_arc_backend_sdl_SdlGL30_glGetShaderInfoLog_int_R_java_lang_String)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_backend_sdl_SdlGL30_glGetShaderPrecisionFormat_int_int_java_nio_IntBuffer_java_nio_IntBuffer 94
typedef void (*func_arc_backend_sdl_SdlGL30_glGetShaderPrecisionFormat_int_int_java_nio_IntBuffer_java_nio_IntBuffer)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jobject param3);
#define VTABLE_arc_backend_sdl_SdlGL30_glGetTexParameterfv_int_int_java_nio_FloatBuffer 95
typedef void (*func_arc_backend_sdl_SdlGL30_glGetTexParameterfv_int_int_java_nio_FloatBuffer)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
#define VTABLE_arc_backend_sdl_SdlGL30_glGetTexParameteriv_int_int_java_nio_IntBuffer 96
typedef void (*func_arc_backend_sdl_SdlGL30_glGetTexParameteriv_int_int_java_nio_IntBuffer)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
#define VTABLE_arc_backend_sdl_SdlGL30_glGetUniformfv_int_int_java_nio_FloatBuffer 97
typedef void (*func_arc_backend_sdl_SdlGL30_glGetUniformfv_int_int_java_nio_FloatBuffer)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
#define VTABLE_arc_backend_sdl_SdlGL30_glGetUniformiv_int_int_java_nio_IntBuffer 98
typedef void (*func_arc_backend_sdl_SdlGL30_glGetUniformiv_int_int_java_nio_IntBuffer)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
#define VTABLE_arc_backend_sdl_SdlGL30_glGetUniformLocation_int_java_lang_String_R_int 99
typedef jint (*func_arc_backend_sdl_SdlGL30_glGetUniformLocation_int_java_lang_String_R_int)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_arc_backend_sdl_SdlGL30_glGetVertexAttribfv_int_int_java_nio_FloatBuffer 100
typedef void (*func_arc_backend_sdl_SdlGL30_glGetVertexAttribfv_int_int_java_nio_FloatBuffer)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
#define VTABLE_arc_backend_sdl_SdlGL30_glGetVertexAttribiv_int_int_java_nio_IntBuffer 101
typedef void (*func_arc_backend_sdl_SdlGL30_glGetVertexAttribiv_int_int_java_nio_IntBuffer)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
#define VTABLE_arc_backend_sdl_SdlGL30_glIsBuffer_int_R_boolean 102
typedef jbool (*func_arc_backend_sdl_SdlGL30_glIsBuffer_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_backend_sdl_SdlGL30_glIsEnabled_int_R_boolean 103
typedef jbool (*func_arc_backend_sdl_SdlGL30_glIsEnabled_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_backend_sdl_SdlGL30_glIsFramebuffer_int_R_boolean 104
typedef jbool (*func_arc_backend_sdl_SdlGL30_glIsFramebuffer_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_backend_sdl_SdlGL30_glIsProgram_int_R_boolean 105
typedef jbool (*func_arc_backend_sdl_SdlGL30_glIsProgram_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_backend_sdl_SdlGL30_glIsRenderbuffer_int_R_boolean 106
typedef jbool (*func_arc_backend_sdl_SdlGL30_glIsRenderbuffer_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_backend_sdl_SdlGL30_glIsShader_int_R_boolean 107
typedef jbool (*func_arc_backend_sdl_SdlGL30_glIsShader_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_backend_sdl_SdlGL30_glIsTexture_int_R_boolean 108
typedef jbool (*func_arc_backend_sdl_SdlGL30_glIsTexture_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_backend_sdl_SdlGL30_glLinkProgram_int 109
typedef void (*func_arc_backend_sdl_SdlGL30_glLinkProgram_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_backend_sdl_SdlGL30_glReleaseShaderCompiler 110
typedef void (*func_arc_backend_sdl_SdlGL30_glReleaseShaderCompiler)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_SdlGL30_glRenderbufferStorage_int_int_int_int 111
typedef void (*func_arc_backend_sdl_SdlGL30_glRenderbufferStorage_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
#define VTABLE_arc_backend_sdl_SdlGL30_glSampleCoverage_float_boolean 112
typedef void (*func_arc_backend_sdl_SdlGL30_glSampleCoverage_float_boolean)(jcontext ctx, jobject self, jfloat param0, jbool param1);
#define VTABLE_arc_backend_sdl_SdlGL30_glShaderSource_int_java_lang_String 113
typedef void (*func_arc_backend_sdl_SdlGL30_glShaderSource_int_java_lang_String)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_arc_backend_sdl_SdlGL30_glStencilFuncSeparate_int_int_int_int 114
typedef void (*func_arc_backend_sdl_SdlGL30_glStencilFuncSeparate_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
#define VTABLE_arc_backend_sdl_SdlGL30_glStencilMaskSeparate_int_int 115
typedef void (*func_arc_backend_sdl_SdlGL30_glStencilMaskSeparate_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_arc_backend_sdl_SdlGL30_glStencilOpSeparate_int_int_int_int 116
typedef void (*func_arc_backend_sdl_SdlGL30_glStencilOpSeparate_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
#define VTABLE_arc_backend_sdl_SdlGL30_glTexParameterfv_int_int_java_nio_FloatBuffer 117
typedef void (*func_arc_backend_sdl_SdlGL30_glTexParameterfv_int_int_java_nio_FloatBuffer)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
#define VTABLE_arc_backend_sdl_SdlGL30_glTexParameteri_int_int_int 118
typedef void (*func_arc_backend_sdl_SdlGL30_glTexParameteri_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2);
#define VTABLE_arc_backend_sdl_SdlGL30_glTexParameteriv_int_int_java_nio_IntBuffer 119
typedef void (*func_arc_backend_sdl_SdlGL30_glTexParameteriv_int_int_java_nio_IntBuffer)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
#define VTABLE_arc_backend_sdl_SdlGL30_glUniform1f_int_float 120
typedef void (*func_arc_backend_sdl_SdlGL30_glUniform1f_int_float)(jcontext ctx, jobject self, jint param0, jfloat param1);
#define VTABLE_arc_backend_sdl_SdlGL30_glUniform1fv_int_int_java_nio_FloatBuffer 121
typedef void (*func_arc_backend_sdl_SdlGL30_glUniform1fv_int_int_java_nio_FloatBuffer)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
#define VTABLE_arc_backend_sdl_SdlGL30_glUniform1fv_int_int_Array1_float_int 122
typedef void (*func_arc_backend_sdl_SdlGL30_glUniform1fv_int_int_Array1_float_int)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jint param3);
#define VTABLE_arc_backend_sdl_SdlGL30_glUniform1i_int_int 123
typedef void (*func_arc_backend_sdl_SdlGL30_glUniform1i_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_arc_backend_sdl_SdlGL30_glUniform1iv_int_int_java_nio_IntBuffer 124
typedef void (*func_arc_backend_sdl_SdlGL30_glUniform1iv_int_int_java_nio_IntBuffer)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
#define VTABLE_arc_backend_sdl_SdlGL30_glUniform1iv_int_int_Array1_int_int 125
typedef void (*func_arc_backend_sdl_SdlGL30_glUniform1iv_int_int_Array1_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jint param3);
#define VTABLE_arc_backend_sdl_SdlGL30_glUniform2f_int_float_float 126
typedef void (*func_arc_backend_sdl_SdlGL30_glUniform2f_int_float_float)(jcontext ctx, jobject self, jint param0, jfloat param1, jfloat param2);
#define VTABLE_arc_backend_sdl_SdlGL30_glUniform2fv_int_int_java_nio_FloatBuffer 127
typedef void (*func_arc_backend_sdl_SdlGL30_glUniform2fv_int_int_java_nio_FloatBuffer)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
#define VTABLE_arc_backend_sdl_SdlGL30_glUniform2fv_int_int_Array1_float_int 128
typedef void (*func_arc_backend_sdl_SdlGL30_glUniform2fv_int_int_Array1_float_int)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jint param3);
#define VTABLE_arc_backend_sdl_SdlGL30_glUniform2i_int_int_int 129
typedef void (*func_arc_backend_sdl_SdlGL30_glUniform2i_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2);
#define VTABLE_arc_backend_sdl_SdlGL30_glUniform2iv_int_int_java_nio_IntBuffer 130
typedef void (*func_arc_backend_sdl_SdlGL30_glUniform2iv_int_int_java_nio_IntBuffer)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
#define VTABLE_arc_backend_sdl_SdlGL30_glUniform2iv_int_int_Array1_int_int 131
typedef void (*func_arc_backend_sdl_SdlGL30_glUniform2iv_int_int_Array1_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jint param3);
#define VTABLE_arc_backend_sdl_SdlGL30_glUniform3f_int_float_float_float 132
typedef void (*func_arc_backend_sdl_SdlGL30_glUniform3f_int_float_float_float)(jcontext ctx, jobject self, jint param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_arc_backend_sdl_SdlGL30_glUniform3fv_int_int_java_nio_FloatBuffer 133
typedef void (*func_arc_backend_sdl_SdlGL30_glUniform3fv_int_int_java_nio_FloatBuffer)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
#define VTABLE_arc_backend_sdl_SdlGL30_glUniform3fv_int_int_Array1_float_int 134
typedef void (*func_arc_backend_sdl_SdlGL30_glUniform3fv_int_int_Array1_float_int)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jint param3);
#define VTABLE_arc_backend_sdl_SdlGL30_glUniform3i_int_int_int_int 135
typedef void (*func_arc_backend_sdl_SdlGL30_glUniform3i_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
#define VTABLE_arc_backend_sdl_SdlGL30_glUniform3iv_int_int_java_nio_IntBuffer 136
typedef void (*func_arc_backend_sdl_SdlGL30_glUniform3iv_int_int_java_nio_IntBuffer)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
#define VTABLE_arc_backend_sdl_SdlGL30_glUniform3iv_int_int_Array1_int_int 137
typedef void (*func_arc_backend_sdl_SdlGL30_glUniform3iv_int_int_Array1_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jint param3);
#define VTABLE_arc_backend_sdl_SdlGL30_glUniform4f_int_float_float_float_float 138
typedef void (*func_arc_backend_sdl_SdlGL30_glUniform4f_int_float_float_float_float)(jcontext ctx, jobject self, jint param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4);
#define VTABLE_arc_backend_sdl_SdlGL30_glUniform4fv_int_int_java_nio_FloatBuffer 139
typedef void (*func_arc_backend_sdl_SdlGL30_glUniform4fv_int_int_java_nio_FloatBuffer)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
#define VTABLE_arc_backend_sdl_SdlGL30_glUniform4fv_int_int_Array1_float_int 140
typedef void (*func_arc_backend_sdl_SdlGL30_glUniform4fv_int_int_Array1_float_int)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jint param3);
#define VTABLE_arc_backend_sdl_SdlGL30_glUniform4i_int_int_int_int_int 141
typedef void (*func_arc_backend_sdl_SdlGL30_glUniform4i_int_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4);
#define VTABLE_arc_backend_sdl_SdlGL30_glUniform4iv_int_int_java_nio_IntBuffer 142
typedef void (*func_arc_backend_sdl_SdlGL30_glUniform4iv_int_int_java_nio_IntBuffer)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
#define VTABLE_arc_backend_sdl_SdlGL30_glUniform4iv_int_int_Array1_int_int 143
typedef void (*func_arc_backend_sdl_SdlGL30_glUniform4iv_int_int_Array1_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jint param3);
#define VTABLE_arc_backend_sdl_SdlGL30_glUniformMatrix2fv_int_int_boolean_java_nio_FloatBuffer 144
typedef void (*func_arc_backend_sdl_SdlGL30_glUniformMatrix2fv_int_int_boolean_java_nio_FloatBuffer)(jcontext ctx, jobject self, jint param0, jint param1, jbool param2, jobject param3);
#define VTABLE_arc_backend_sdl_SdlGL30_glUniformMatrix2fv_int_int_boolean_Array1_float_int 145
typedef void (*func_arc_backend_sdl_SdlGL30_glUniformMatrix2fv_int_int_boolean_Array1_float_int)(jcontext ctx, jobject self, jint param0, jint param1, jbool param2, jobject param3, jint param4);
#define VTABLE_arc_backend_sdl_SdlGL30_glUniformMatrix3fv_int_int_boolean_java_nio_FloatBuffer 146
typedef void (*func_arc_backend_sdl_SdlGL30_glUniformMatrix3fv_int_int_boolean_java_nio_FloatBuffer)(jcontext ctx, jobject self, jint param0, jint param1, jbool param2, jobject param3);
#define VTABLE_arc_backend_sdl_SdlGL30_glUniformMatrix3fv_int_int_boolean_Array1_float_int 147
typedef void (*func_arc_backend_sdl_SdlGL30_glUniformMatrix3fv_int_int_boolean_Array1_float_int)(jcontext ctx, jobject self, jint param0, jint param1, jbool param2, jobject param3, jint param4);
#define VTABLE_arc_backend_sdl_SdlGL30_glUniformMatrix4fv_int_int_boolean_java_nio_FloatBuffer 148
typedef void (*func_arc_backend_sdl_SdlGL30_glUniformMatrix4fv_int_int_boolean_java_nio_FloatBuffer)(jcontext ctx, jobject self, jint param0, jint param1, jbool param2, jobject param3);
#define VTABLE_arc_backend_sdl_SdlGL30_glUniformMatrix4fv_int_int_boolean_Array1_float_int 149
typedef void (*func_arc_backend_sdl_SdlGL30_glUniformMatrix4fv_int_int_boolean_Array1_float_int)(jcontext ctx, jobject self, jint param0, jint param1, jbool param2, jobject param3, jint param4);
#define VTABLE_arc_backend_sdl_SdlGL30_glUseProgram_int 150
typedef void (*func_arc_backend_sdl_SdlGL30_glUseProgram_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_backend_sdl_SdlGL30_glValidateProgram_int 151
typedef void (*func_arc_backend_sdl_SdlGL30_glValidateProgram_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_backend_sdl_SdlGL30_glVertexAttrib1f_int_float 152
typedef void (*func_arc_backend_sdl_SdlGL30_glVertexAttrib1f_int_float)(jcontext ctx, jobject self, jint param0, jfloat param1);
#define VTABLE_arc_backend_sdl_SdlGL30_glVertexAttrib1fv_int_java_nio_FloatBuffer 153
typedef void (*func_arc_backend_sdl_SdlGL30_glVertexAttrib1fv_int_java_nio_FloatBuffer)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_arc_backend_sdl_SdlGL30_glVertexAttrib2f_int_float_float 154
typedef void (*func_arc_backend_sdl_SdlGL30_glVertexAttrib2f_int_float_float)(jcontext ctx, jobject self, jint param0, jfloat param1, jfloat param2);
#define VTABLE_arc_backend_sdl_SdlGL30_glVertexAttrib2fv_int_java_nio_FloatBuffer 155
typedef void (*func_arc_backend_sdl_SdlGL30_glVertexAttrib2fv_int_java_nio_FloatBuffer)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_arc_backend_sdl_SdlGL30_glVertexAttrib3f_int_float_float_float 156
typedef void (*func_arc_backend_sdl_SdlGL30_glVertexAttrib3f_int_float_float_float)(jcontext ctx, jobject self, jint param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_arc_backend_sdl_SdlGL30_glVertexAttrib3fv_int_java_nio_FloatBuffer 157
typedef void (*func_arc_backend_sdl_SdlGL30_glVertexAttrib3fv_int_java_nio_FloatBuffer)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_arc_backend_sdl_SdlGL30_glVertexAttrib4f_int_float_float_float_float 158
typedef void (*func_arc_backend_sdl_SdlGL30_glVertexAttrib4f_int_float_float_float_float)(jcontext ctx, jobject self, jint param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4);
#define VTABLE_arc_backend_sdl_SdlGL30_glVertexAttrib4fv_int_java_nio_FloatBuffer 159
typedef void (*func_arc_backend_sdl_SdlGL30_glVertexAttrib4fv_int_java_nio_FloatBuffer)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_arc_backend_sdl_SdlGL30_glVertexAttribPointer_int_int_int_boolean_int_java_nio_Buffer 160
typedef void (*func_arc_backend_sdl_SdlGL30_glVertexAttribPointer_int_int_int_boolean_int_java_nio_Buffer)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jbool param3, jint param4, jobject param5);
#define VTABLE_arc_backend_sdl_SdlGL30_glVertexAttribPointer_int_int_int_boolean_int_int 161
typedef void (*func_arc_backend_sdl_SdlGL30_glVertexAttribPointer_int_int_int_boolean_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jbool param3, jint param4, jint param5);
#define VTABLE_arc_backend_sdl_SdlGL30_glReadBuffer_int 162
typedef void (*func_arc_backend_sdl_SdlGL30_glReadBuffer_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_backend_sdl_SdlGL30_glDrawRangeElements_int_int_int_int_int_java_nio_Buffer 163
typedef void (*func_arc_backend_sdl_SdlGL30_glDrawRangeElements_int_int_int_int_int_java_nio_Buffer)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4, jobject param5);
#define VTABLE_arc_backend_sdl_SdlGL30_glDrawRangeElements_int_int_int_int_int_int 164
typedef void (*func_arc_backend_sdl_SdlGL30_glDrawRangeElements_int_int_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5);
#define VTABLE_arc_backend_sdl_SdlGL30_glTexImage3D_int_int_int_int_int_int_int_int_int_java_nio_Buffer 165
typedef void (*func_arc_backend_sdl_SdlGL30_glTexImage3D_int_int_int_int_int_int_int_int_int_java_nio_Buffer)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jint param8, jobject param9);
#define VTABLE_arc_backend_sdl_SdlGL30_glTexImage3D_int_int_int_int_int_int_int_int_int_int 166
typedef void (*func_arc_backend_sdl_SdlGL30_glTexImage3D_int_int_int_int_int_int_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jint param8, jint param9);
#define VTABLE_arc_backend_sdl_SdlGL30_glTexSubImage3D_int_int_int_int_int_int_int_int_int_int_java_nio_Buffer 167
typedef void (*func_arc_backend_sdl_SdlGL30_glTexSubImage3D_int_int_int_int_int_int_int_int_int_int_java_nio_Buffer)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jint param8, jint param9, jobject param10);
#define VTABLE_arc_backend_sdl_SdlGL30_glTexSubImage3D_int_int_int_int_int_int_int_int_int_int_int 168
typedef void (*func_arc_backend_sdl_SdlGL30_glTexSubImage3D_int_int_int_int_int_int_int_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jint param8, jint param9, jint param10);
#define VTABLE_arc_backend_sdl_SdlGL30_glCopyTexSubImage3D_int_int_int_int_int_int_int_int_int 169
typedef void (*func_arc_backend_sdl_SdlGL30_glCopyTexSubImage3D_int_int_int_int_int_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jint param8);
#define VTABLE_arc_backend_sdl_SdlGL30_glGenQueries_int_java_nio_IntBuffer 170
typedef void (*func_arc_backend_sdl_SdlGL30_glGenQueries_int_java_nio_IntBuffer)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_arc_backend_sdl_SdlGL30_glDeleteQueries_int_java_nio_IntBuffer 171
typedef void (*func_arc_backend_sdl_SdlGL30_glDeleteQueries_int_java_nio_IntBuffer)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_arc_backend_sdl_SdlGL30_glIsQuery_int_R_boolean 172
typedef jbool (*func_arc_backend_sdl_SdlGL30_glIsQuery_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_backend_sdl_SdlGL30_glBeginQuery_int_int 173
typedef void (*func_arc_backend_sdl_SdlGL30_glBeginQuery_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_arc_backend_sdl_SdlGL30_glEndQuery_int 174
typedef void (*func_arc_backend_sdl_SdlGL30_glEndQuery_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_backend_sdl_SdlGL30_glGetQueryiv_int_int_java_nio_IntBuffer 175
typedef void (*func_arc_backend_sdl_SdlGL30_glGetQueryiv_int_int_java_nio_IntBuffer)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
#define VTABLE_arc_backend_sdl_SdlGL30_glGetQueryObjectuiv_int_int_java_nio_IntBuffer 176
typedef void (*func_arc_backend_sdl_SdlGL30_glGetQueryObjectuiv_int_int_java_nio_IntBuffer)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
#define VTABLE_arc_backend_sdl_SdlGL30_glUnmapBuffer_int_R_boolean 177
typedef jbool (*func_arc_backend_sdl_SdlGL30_glUnmapBuffer_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_backend_sdl_SdlGL30_glGetBufferPointerv_int_int_R_java_nio_Buffer 178
typedef jobject (*func_arc_backend_sdl_SdlGL30_glGetBufferPointerv_int_int_R_java_nio_Buffer)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_arc_backend_sdl_SdlGL30_glDrawBuffers_int_java_nio_IntBuffer 179
typedef void (*func_arc_backend_sdl_SdlGL30_glDrawBuffers_int_java_nio_IntBuffer)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_arc_backend_sdl_SdlGL30_glUniformMatrix2x3fv_int_int_boolean_java_nio_FloatBuffer 180
typedef void (*func_arc_backend_sdl_SdlGL30_glUniformMatrix2x3fv_int_int_boolean_java_nio_FloatBuffer)(jcontext ctx, jobject self, jint param0, jint param1, jbool param2, jobject param3);
#define VTABLE_arc_backend_sdl_SdlGL30_glUniformMatrix3x2fv_int_int_boolean_java_nio_FloatBuffer 181
typedef void (*func_arc_backend_sdl_SdlGL30_glUniformMatrix3x2fv_int_int_boolean_java_nio_FloatBuffer)(jcontext ctx, jobject self, jint param0, jint param1, jbool param2, jobject param3);
#define VTABLE_arc_backend_sdl_SdlGL30_glUniformMatrix2x4fv_int_int_boolean_java_nio_FloatBuffer 182
typedef void (*func_arc_backend_sdl_SdlGL30_glUniformMatrix2x4fv_int_int_boolean_java_nio_FloatBuffer)(jcontext ctx, jobject self, jint param0, jint param1, jbool param2, jobject param3);
#define VTABLE_arc_backend_sdl_SdlGL30_glUniformMatrix4x2fv_int_int_boolean_java_nio_FloatBuffer 183
typedef void (*func_arc_backend_sdl_SdlGL30_glUniformMatrix4x2fv_int_int_boolean_java_nio_FloatBuffer)(jcontext ctx, jobject self, jint param0, jint param1, jbool param2, jobject param3);
#define VTABLE_arc_backend_sdl_SdlGL30_glUniformMatrix3x4fv_int_int_boolean_java_nio_FloatBuffer 184
typedef void (*func_arc_backend_sdl_SdlGL30_glUniformMatrix3x4fv_int_int_boolean_java_nio_FloatBuffer)(jcontext ctx, jobject self, jint param0, jint param1, jbool param2, jobject param3);
#define VTABLE_arc_backend_sdl_SdlGL30_glUniformMatrix4x3fv_int_int_boolean_java_nio_FloatBuffer 185
typedef void (*func_arc_backend_sdl_SdlGL30_glUniformMatrix4x3fv_int_int_boolean_java_nio_FloatBuffer)(jcontext ctx, jobject self, jint param0, jint param1, jbool param2, jobject param3);
#define VTABLE_arc_backend_sdl_SdlGL30_glBlitFramebuffer_int_int_int_int_int_int_int_int_int_int 186
typedef void (*func_arc_backend_sdl_SdlGL30_glBlitFramebuffer_int_int_int_int_int_int_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jint param8, jint param9);
#define VTABLE_arc_backend_sdl_SdlGL30_glRenderbufferStorageMultisample_int_int_int_int_int 187
typedef void (*func_arc_backend_sdl_SdlGL30_glRenderbufferStorageMultisample_int_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4);
#define VTABLE_arc_backend_sdl_SdlGL30_glFramebufferTextureLayer_int_int_int_int_int 188
typedef void (*func_arc_backend_sdl_SdlGL30_glFramebufferTextureLayer_int_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4);
#define VTABLE_arc_backend_sdl_SdlGL30_glFlushMappedBufferRange_int_int_int 189
typedef void (*func_arc_backend_sdl_SdlGL30_glFlushMappedBufferRange_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2);
#define VTABLE_arc_backend_sdl_SdlGL30_glBindVertexArray_int 190
typedef void (*func_arc_backend_sdl_SdlGL30_glBindVertexArray_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_backend_sdl_SdlGL30_glDeleteVertexArrays_int_java_nio_IntBuffer 191
typedef void (*func_arc_backend_sdl_SdlGL30_glDeleteVertexArrays_int_java_nio_IntBuffer)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_arc_backend_sdl_SdlGL30_glGenVertexArrays_int_java_nio_IntBuffer 192
typedef void (*func_arc_backend_sdl_SdlGL30_glGenVertexArrays_int_java_nio_IntBuffer)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_arc_backend_sdl_SdlGL30_glIsVertexArray_int_R_boolean 193
typedef jbool (*func_arc_backend_sdl_SdlGL30_glIsVertexArray_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_backend_sdl_SdlGL30_glBeginTransformFeedback_int 194
typedef void (*func_arc_backend_sdl_SdlGL30_glBeginTransformFeedback_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_backend_sdl_SdlGL30_glEndTransformFeedback 195
typedef void (*func_arc_backend_sdl_SdlGL30_glEndTransformFeedback)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_SdlGL30_glBindBufferRange_int_int_int_int_int 196
typedef void (*func_arc_backend_sdl_SdlGL30_glBindBufferRange_int_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4);
#define VTABLE_arc_backend_sdl_SdlGL30_glBindBufferBase_int_int_int 197
typedef void (*func_arc_backend_sdl_SdlGL30_glBindBufferBase_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2);
#define VTABLE_arc_backend_sdl_SdlGL30_glTransformFeedbackVaryings_int_Array1_java_lang_String_int 198
typedef void (*func_arc_backend_sdl_SdlGL30_glTransformFeedbackVaryings_int_Array1_java_lang_String_int)(jcontext ctx, jobject self, jint param0, jobject param1, jint param2);
#define VTABLE_arc_backend_sdl_SdlGL30_glVertexAttribIPointer_int_int_int_int_int 199
typedef void (*func_arc_backend_sdl_SdlGL30_glVertexAttribIPointer_int_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4);
#define VTABLE_arc_backend_sdl_SdlGL30_glGetVertexAttribIiv_int_int_java_nio_IntBuffer 200
typedef void (*func_arc_backend_sdl_SdlGL30_glGetVertexAttribIiv_int_int_java_nio_IntBuffer)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
#define VTABLE_arc_backend_sdl_SdlGL30_glGetVertexAttribIuiv_int_int_java_nio_IntBuffer 201
typedef void (*func_arc_backend_sdl_SdlGL30_glGetVertexAttribIuiv_int_int_java_nio_IntBuffer)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
#define VTABLE_arc_backend_sdl_SdlGL30_glVertexAttribI4i_int_int_int_int_int 202
typedef void (*func_arc_backend_sdl_SdlGL30_glVertexAttribI4i_int_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4);
#define VTABLE_arc_backend_sdl_SdlGL30_glVertexAttribI4ui_int_int_int_int_int 203
typedef void (*func_arc_backend_sdl_SdlGL30_glVertexAttribI4ui_int_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4);
#define VTABLE_arc_backend_sdl_SdlGL30_glGetUniformuiv_int_int_java_nio_IntBuffer 204
typedef void (*func_arc_backend_sdl_SdlGL30_glGetUniformuiv_int_int_java_nio_IntBuffer)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
#define VTABLE_arc_backend_sdl_SdlGL30_glGetFragDataLocation_int_java_lang_String_R_int 205
typedef jint (*func_arc_backend_sdl_SdlGL30_glGetFragDataLocation_int_java_lang_String_R_int)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_arc_backend_sdl_SdlGL30_glUniform1uiv_int_int_java_nio_IntBuffer 206
typedef void (*func_arc_backend_sdl_SdlGL30_glUniform1uiv_int_int_java_nio_IntBuffer)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
#define VTABLE_arc_backend_sdl_SdlGL30_glUniform3uiv_int_int_java_nio_IntBuffer 207
typedef void (*func_arc_backend_sdl_SdlGL30_glUniform3uiv_int_int_java_nio_IntBuffer)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
#define VTABLE_arc_backend_sdl_SdlGL30_glUniform4uiv_int_int_java_nio_IntBuffer 208
typedef void (*func_arc_backend_sdl_SdlGL30_glUniform4uiv_int_int_java_nio_IntBuffer)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
#define VTABLE_arc_backend_sdl_SdlGL30_glClearBufferiv_int_int_java_nio_IntBuffer 209
typedef void (*func_arc_backend_sdl_SdlGL30_glClearBufferiv_int_int_java_nio_IntBuffer)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
#define VTABLE_arc_backend_sdl_SdlGL30_glClearBufferuiv_int_int_java_nio_IntBuffer 210
typedef void (*func_arc_backend_sdl_SdlGL30_glClearBufferuiv_int_int_java_nio_IntBuffer)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
#define VTABLE_arc_backend_sdl_SdlGL30_glClearBufferfv_int_int_java_nio_FloatBuffer 211
typedef void (*func_arc_backend_sdl_SdlGL30_glClearBufferfv_int_int_java_nio_FloatBuffer)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
#define VTABLE_arc_backend_sdl_SdlGL30_glClearBufferfi_int_int_float_int 212
typedef void (*func_arc_backend_sdl_SdlGL30_glClearBufferfi_int_int_float_int)(jcontext ctx, jobject self, jint param0, jint param1, jfloat param2, jint param3);
#define VTABLE_arc_backend_sdl_SdlGL30_glGetStringi_int_int_R_java_lang_String 213
typedef jobject (*func_arc_backend_sdl_SdlGL30_glGetStringi_int_int_R_java_lang_String)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_arc_backend_sdl_SdlGL30_glCopyBufferSubData_int_int_int_int_int 214
typedef void (*func_arc_backend_sdl_SdlGL30_glCopyBufferSubData_int_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4);
#define VTABLE_arc_backend_sdl_SdlGL30_glGetUniformIndices_int_Array1_java_lang_String_java_nio_IntBuffer 215
typedef void (*func_arc_backend_sdl_SdlGL30_glGetUniformIndices_int_Array1_java_lang_String_java_nio_IntBuffer)(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2);
#define VTABLE_arc_backend_sdl_SdlGL30_glGetActiveUniformsiv_int_int_java_nio_IntBuffer_int_java_nio_IntBuffer 216
typedef void (*func_arc_backend_sdl_SdlGL30_glGetActiveUniformsiv_int_int_java_nio_IntBuffer_int_java_nio_IntBuffer)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jint param3, jobject param4);
#define VTABLE_arc_backend_sdl_SdlGL30_glGetUniformBlockIndex_int_java_lang_String_R_int 217
typedef jint (*func_arc_backend_sdl_SdlGL30_glGetUniformBlockIndex_int_java_lang_String_R_int)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_arc_backend_sdl_SdlGL30_glGetActiveUniformBlockiv_int_int_int_java_nio_IntBuffer 218
typedef void (*func_arc_backend_sdl_SdlGL30_glGetActiveUniformBlockiv_int_int_int_java_nio_IntBuffer)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jobject param3);
#define VTABLE_arc_backend_sdl_SdlGL30_glGetActiveUniformBlockName_int_int_java_nio_Buffer_java_nio_Buffer 219
typedef void (*func_arc_backend_sdl_SdlGL30_glGetActiveUniformBlockName_int_int_java_nio_Buffer_java_nio_Buffer)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jobject param3);
#define VTABLE_arc_backend_sdl_SdlGL30_glUniformBlockBinding_int_int_int 220
typedef void (*func_arc_backend_sdl_SdlGL30_glUniformBlockBinding_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2);
#define VTABLE_arc_backend_sdl_SdlGL30_glDrawArraysInstanced_int_int_int_int 221
typedef void (*func_arc_backend_sdl_SdlGL30_glDrawArraysInstanced_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
#define VTABLE_arc_backend_sdl_SdlGL30_glDrawElementsInstanced_int_int_int_int_int 222
typedef void (*func_arc_backend_sdl_SdlGL30_glDrawElementsInstanced_int_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4);
#define VTABLE_arc_backend_sdl_SdlGL30_glGetInteger64v_int_java_nio_LongBuffer 223
typedef void (*func_arc_backend_sdl_SdlGL30_glGetInteger64v_int_java_nio_LongBuffer)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_arc_backend_sdl_SdlGL30_glGetBufferParameteri64v_int_int_java_nio_LongBuffer 224
typedef void (*func_arc_backend_sdl_SdlGL30_glGetBufferParameteri64v_int_int_java_nio_LongBuffer)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
#define VTABLE_arc_backend_sdl_SdlGL30_glGenSamplers_int_java_nio_IntBuffer 225
typedef void (*func_arc_backend_sdl_SdlGL30_glGenSamplers_int_java_nio_IntBuffer)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_arc_backend_sdl_SdlGL30_glDeleteSamplers_int_java_nio_IntBuffer 226
typedef void (*func_arc_backend_sdl_SdlGL30_glDeleteSamplers_int_java_nio_IntBuffer)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_arc_backend_sdl_SdlGL30_glIsSampler_int_R_boolean 227
typedef jbool (*func_arc_backend_sdl_SdlGL30_glIsSampler_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_backend_sdl_SdlGL30_glBindSampler_int_int 228
typedef void (*func_arc_backend_sdl_SdlGL30_glBindSampler_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_arc_backend_sdl_SdlGL30_glSamplerParameteri_int_int_int 229
typedef void (*func_arc_backend_sdl_SdlGL30_glSamplerParameteri_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2);
#define VTABLE_arc_backend_sdl_SdlGL30_glSamplerParameteriv_int_int_java_nio_IntBuffer 230
typedef void (*func_arc_backend_sdl_SdlGL30_glSamplerParameteriv_int_int_java_nio_IntBuffer)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
#define VTABLE_arc_backend_sdl_SdlGL30_glSamplerParameterf_int_int_float 231
typedef void (*func_arc_backend_sdl_SdlGL30_glSamplerParameterf_int_int_float)(jcontext ctx, jobject self, jint param0, jint param1, jfloat param2);
#define VTABLE_arc_backend_sdl_SdlGL30_glSamplerParameterfv_int_int_java_nio_FloatBuffer 232
typedef void (*func_arc_backend_sdl_SdlGL30_glSamplerParameterfv_int_int_java_nio_FloatBuffer)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
#define VTABLE_arc_backend_sdl_SdlGL30_glGetSamplerParameteriv_int_int_java_nio_IntBuffer 233
typedef void (*func_arc_backend_sdl_SdlGL30_glGetSamplerParameteriv_int_int_java_nio_IntBuffer)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
#define VTABLE_arc_backend_sdl_SdlGL30_glGetSamplerParameterfv_int_int_java_nio_FloatBuffer 234
typedef void (*func_arc_backend_sdl_SdlGL30_glGetSamplerParameterfv_int_int_java_nio_FloatBuffer)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
#define VTABLE_arc_backend_sdl_SdlGL30_glVertexAttribDivisor_int_int 235
typedef void (*func_arc_backend_sdl_SdlGL30_glVertexAttribDivisor_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_arc_backend_sdl_SdlGL30_glBindTransformFeedback_int_int 236
typedef void (*func_arc_backend_sdl_SdlGL30_glBindTransformFeedback_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_arc_backend_sdl_SdlGL30_glDeleteTransformFeedbacks_int_java_nio_IntBuffer 237
typedef void (*func_arc_backend_sdl_SdlGL30_glDeleteTransformFeedbacks_int_java_nio_IntBuffer)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_arc_backend_sdl_SdlGL30_glGenTransformFeedbacks_int_java_nio_IntBuffer 238
typedef void (*func_arc_backend_sdl_SdlGL30_glGenTransformFeedbacks_int_java_nio_IntBuffer)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_arc_backend_sdl_SdlGL30_glIsTransformFeedback_int_R_boolean 239
typedef jbool (*func_arc_backend_sdl_SdlGL30_glIsTransformFeedback_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_backend_sdl_SdlGL30_glPauseTransformFeedback 240
typedef void (*func_arc_backend_sdl_SdlGL30_glPauseTransformFeedback)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_SdlGL30_glResumeTransformFeedback 241
typedef void (*func_arc_backend_sdl_SdlGL30_glResumeTransformFeedback)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_SdlGL30_glProgramParameteri_int_int_int 242
typedef void (*func_arc_backend_sdl_SdlGL30_glProgramParameteri_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2);
#define VTABLE_arc_backend_sdl_SdlGL30_glInvalidateFramebuffer_int_int_java_nio_IntBuffer 243
typedef void (*func_arc_backend_sdl_SdlGL30_glInvalidateFramebuffer_int_int_java_nio_IntBuffer)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
#define VTABLE_arc_backend_sdl_SdlGL30_glInvalidateSubFramebuffer_int_int_java_nio_IntBuffer_int_int_int_int 244
typedef void (*func_arc_backend_sdl_SdlGL30_glInvalidateSubFramebuffer_int_int_java_nio_IntBuffer_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jint param3, jint param4, jint param5, jint param6);

void mark_arc_backend_sdl_SdlGL30(jobject object, jint mark, jint depth);
void clinit_arc_backend_sdl_SdlGL30(jcontext ctx);
void init_arc_backend_sdl_SdlGL30(jcontext ctx, jobject self);
void M_arc_backend_sdl_SdlGL30_glReadBuffer_int(jcontext ctx, jobject self, jint param0);
void M_arc_backend_sdl_SdlGL30_glDrawRangeElements_int_int_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5);
void M_arc_backend_sdl_SdlGL30_glDrawRangeElements_int_int_int_int_int_java_nio_Buffer(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4, jobject param5);
void M_arc_backend_sdl_SdlGL30_glTexImage3D_int_int_int_int_int_int_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jint param8, jint param9);
void M_arc_backend_sdl_SdlGL30_glTexImage3D_int_int_int_int_int_int_int_int_int_java_nio_Buffer(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jint param8, jobject param9);
void M_arc_backend_sdl_SdlGL30_glTexSubImage3D_int_int_int_int_int_int_int_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jint param8, jint param9, jint param10);
void M_arc_backend_sdl_SdlGL30_glTexSubImage3D_int_int_int_int_int_int_int_int_int_int_java_nio_Buffer(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jint param8, jint param9, jobject param10);
void M_arc_backend_sdl_SdlGL30_glCopyTexSubImage3D_int_int_int_int_int_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jint param8);
void M_arc_backend_sdl_SdlGL30_glGenQueries_int_java_nio_IntBuffer(jcontext ctx, jobject self, jint param0, jobject param1);
void M_arc_backend_sdl_SdlGL30_glDeleteQueries_int_java_nio_IntBuffer(jcontext ctx, jobject self, jint param0, jobject param1);
jbool M_arc_backend_sdl_SdlGL30_glIsQuery_int_R_boolean(jcontext ctx, jobject self, jint param0);
void M_arc_backend_sdl_SdlGL30_glBeginQuery_int_int(jcontext ctx, jobject self, jint param0, jint param1);
void M_arc_backend_sdl_SdlGL30_glEndQuery_int(jcontext ctx, jobject self, jint param0);
void M_arc_backend_sdl_SdlGL30_glGetQueryiv_int_int_java_nio_IntBuffer(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
void M_arc_backend_sdl_SdlGL30_glGetQueryObjectuiv_int_int_java_nio_IntBuffer(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
jbool M_arc_backend_sdl_SdlGL30_glUnmapBuffer_int_R_boolean(jcontext ctx, jobject self, jint param0);
jobject M_arc_backend_sdl_SdlGL30_glGetBufferPointerv_int_int_R_java_nio_Buffer(jcontext ctx, jobject self, jint param0, jint param1);
void M_arc_backend_sdl_SdlGL30_glDrawBuffers_int_java_nio_IntBuffer(jcontext ctx, jobject self, jint param0, jobject param1);
void M_arc_backend_sdl_SdlGL30_glUniformMatrix2x3fv_int_int_boolean_java_nio_FloatBuffer(jcontext ctx, jobject self, jint param0, jint param1, jbool param2, jobject param3);
void M_arc_backend_sdl_SdlGL30_glUniformMatrix3x2fv_int_int_boolean_java_nio_FloatBuffer(jcontext ctx, jobject self, jint param0, jint param1, jbool param2, jobject param3);
void M_arc_backend_sdl_SdlGL30_glUniformMatrix2x4fv_int_int_boolean_java_nio_FloatBuffer(jcontext ctx, jobject self, jint param0, jint param1, jbool param2, jobject param3);
void M_arc_backend_sdl_SdlGL30_glUniformMatrix4x2fv_int_int_boolean_java_nio_FloatBuffer(jcontext ctx, jobject self, jint param0, jint param1, jbool param2, jobject param3);
void M_arc_backend_sdl_SdlGL30_glUniformMatrix3x4fv_int_int_boolean_java_nio_FloatBuffer(jcontext ctx, jobject self, jint param0, jint param1, jbool param2, jobject param3);
void M_arc_backend_sdl_SdlGL30_glUniformMatrix4x3fv_int_int_boolean_java_nio_FloatBuffer(jcontext ctx, jobject self, jint param0, jint param1, jbool param2, jobject param3);
void M_arc_backend_sdl_SdlGL30_glBlitFramebuffer_int_int_int_int_int_int_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jint param8, jint param9);
void M_arc_backend_sdl_SdlGL30_glRenderbufferStorageMultisample_int_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4);
void M_arc_backend_sdl_SdlGL30_glFramebufferTextureLayer_int_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4);
void M_arc_backend_sdl_SdlGL30_glFlushMappedBufferRange_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2);
void M_arc_backend_sdl_SdlGL30_glBindVertexArray_int(jcontext ctx, jobject self, jint param0);
void M_arc_backend_sdl_SdlGL30_glDeleteVertexArrays_int_java_nio_IntBuffer(jcontext ctx, jobject self, jint param0, jobject param1);
void M_arc_backend_sdl_SdlGL30_glGenVertexArrays_int_java_nio_IntBuffer(jcontext ctx, jobject self, jint param0, jobject param1);
jbool M_arc_backend_sdl_SdlGL30_glIsVertexArray_int_R_boolean(jcontext ctx, jobject self, jint param0);
void M_arc_backend_sdl_SdlGL30_glBeginTransformFeedback_int(jcontext ctx, jobject self, jint param0);
void M_arc_backend_sdl_SdlGL30_glEndTransformFeedback(jcontext ctx, jobject self);
void M_arc_backend_sdl_SdlGL30_glBindBufferRange_int_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4);
void M_arc_backend_sdl_SdlGL30_glBindBufferBase_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2);
void M_arc_backend_sdl_SdlGL30_glTransformFeedbackVaryings_int_Array1_java_lang_String_int(jcontext ctx, jobject self, jint param0, jobject param1, jint param2);
void M_arc_backend_sdl_SdlGL30_glVertexAttribIPointer_int_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4);
void M_arc_backend_sdl_SdlGL30_glGetVertexAttribIiv_int_int_java_nio_IntBuffer(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
void M_arc_backend_sdl_SdlGL30_glGetVertexAttribIuiv_int_int_java_nio_IntBuffer(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
void M_arc_backend_sdl_SdlGL30_glVertexAttribI4i_int_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4);
void M_arc_backend_sdl_SdlGL30_glVertexAttribI4ui_int_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4);
void M_arc_backend_sdl_SdlGL30_glGetUniformuiv_int_int_java_nio_IntBuffer(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
jint M_arc_backend_sdl_SdlGL30_glGetFragDataLocation_int_java_lang_String_R_int(jcontext ctx, jobject self, jint param0, jobject param1);
void M_arc_backend_sdl_SdlGL30_glUniform1uiv_int_int_java_nio_IntBuffer(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
void M_arc_backend_sdl_SdlGL30_glUniform3uiv_int_int_java_nio_IntBuffer(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
void M_arc_backend_sdl_SdlGL30_glUniform4uiv_int_int_java_nio_IntBuffer(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
void M_arc_backend_sdl_SdlGL30_glClearBufferiv_int_int_java_nio_IntBuffer(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
void M_arc_backend_sdl_SdlGL30_glClearBufferuiv_int_int_java_nio_IntBuffer(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
void M_arc_backend_sdl_SdlGL30_glClearBufferfv_int_int_java_nio_FloatBuffer(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
void M_arc_backend_sdl_SdlGL30_glClearBufferfi_int_int_float_int(jcontext ctx, jobject self, jint param0, jint param1, jfloat param2, jint param3);
jobject M_arc_backend_sdl_SdlGL30_glGetStringi_int_int_R_java_lang_String(jcontext ctx, jobject self, jint param0, jint param1);
void M_arc_backend_sdl_SdlGL30_glCopyBufferSubData_int_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4);
void M_arc_backend_sdl_SdlGL30_glGetUniformIndices_int_Array1_java_lang_String_java_nio_IntBuffer(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2);
void M_arc_backend_sdl_SdlGL30_glGetActiveUniformsiv_int_int_java_nio_IntBuffer_int_java_nio_IntBuffer(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jint param3, jobject param4);
jint M_arc_backend_sdl_SdlGL30_glGetUniformBlockIndex_int_java_lang_String_R_int(jcontext ctx, jobject self, jint param0, jobject param1);
void M_arc_backend_sdl_SdlGL30_glGetActiveUniformBlockiv_int_int_int_java_nio_IntBuffer(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jobject param3);
void M_arc_backend_sdl_SdlGL30_glGetActiveUniformBlockName_int_int_java_nio_Buffer_java_nio_Buffer(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jobject param3);
void M_arc_backend_sdl_SdlGL30_glUniformBlockBinding_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2);
void M_arc_backend_sdl_SdlGL30_glDrawArraysInstanced_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
void M_arc_backend_sdl_SdlGL30_glDrawElementsInstanced_int_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4);
void M_arc_backend_sdl_SdlGL30_glGetInteger64v_int_java_nio_LongBuffer(jcontext ctx, jobject self, jint param0, jobject param1);
void M_arc_backend_sdl_SdlGL30_glGetBufferParameteri64v_int_int_java_nio_LongBuffer(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
void M_arc_backend_sdl_SdlGL30_glGenSamplers_int_java_nio_IntBuffer(jcontext ctx, jobject self, jint param0, jobject param1);
void M_arc_backend_sdl_SdlGL30_glDeleteSamplers_int_java_nio_IntBuffer(jcontext ctx, jobject self, jint param0, jobject param1);
jbool M_arc_backend_sdl_SdlGL30_glIsSampler_int_R_boolean(jcontext ctx, jobject self, jint param0);
void M_arc_backend_sdl_SdlGL30_glBindSampler_int_int(jcontext ctx, jobject self, jint param0, jint param1);
void M_arc_backend_sdl_SdlGL30_glSamplerParameteri_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2);
void M_arc_backend_sdl_SdlGL30_glSamplerParameteriv_int_int_java_nio_IntBuffer(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
void M_arc_backend_sdl_SdlGL30_glSamplerParameterf_int_int_float(jcontext ctx, jobject self, jint param0, jint param1, jfloat param2);
void M_arc_backend_sdl_SdlGL30_glSamplerParameterfv_int_int_java_nio_FloatBuffer(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
void M_arc_backend_sdl_SdlGL30_glGetSamplerParameteriv_int_int_java_nio_IntBuffer(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
void M_arc_backend_sdl_SdlGL30_glGetSamplerParameterfv_int_int_java_nio_FloatBuffer(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
void M_arc_backend_sdl_SdlGL30_glVertexAttribDivisor_int_int(jcontext ctx, jobject self, jint param0, jint param1);
void M_arc_backend_sdl_SdlGL30_glBindTransformFeedback_int_int(jcontext ctx, jobject self, jint param0, jint param1);
void M_arc_backend_sdl_SdlGL30_glDeleteTransformFeedbacks_int_java_nio_IntBuffer(jcontext ctx, jobject self, jint param0, jobject param1);
void M_arc_backend_sdl_SdlGL30_glGenTransformFeedbacks_int_java_nio_IntBuffer(jcontext ctx, jobject self, jint param0, jobject param1);
jbool M_arc_backend_sdl_SdlGL30_glIsTransformFeedback_int_R_boolean(jcontext ctx, jobject self, jint param0);
void M_arc_backend_sdl_SdlGL30_glPauseTransformFeedback(jcontext ctx, jobject self);
void M_arc_backend_sdl_SdlGL30_glResumeTransformFeedback(jcontext ctx, jobject self);
void M_arc_backend_sdl_SdlGL30_glProgramParameteri_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2);
void M_arc_backend_sdl_SdlGL30_glInvalidateFramebuffer_int_int_java_nio_IntBuffer(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
void M_arc_backend_sdl_SdlGL30_glInvalidateSubFramebuffer_int_int_java_nio_IntBuffer_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jint param3, jint param4, jint param5, jint param6);

#ifdef __cplusplus
}
#endif

#endif
