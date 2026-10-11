#ifndef HEADER_arc_graphics_GL20
#define HEADER_arc_graphics_GL20

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_graphics_GL20 {
	java_lang_Object parent;
} arc_graphics_GL20;

extern Class class_arc_graphics_GL20;

extern jint SF_arc_graphics_GL20_GL_ES_VERSION_2_0;
extern jint SF_arc_graphics_GL20_GL_DEPTH_BUFFER_BIT;
extern jint SF_arc_graphics_GL20_GL_STENCIL_BUFFER_BIT;
extern jint SF_arc_graphics_GL20_GL_COLOR_BUFFER_BIT;
extern jint SF_arc_graphics_GL20_GL_FALSE;
extern jint SF_arc_graphics_GL20_GL_TRUE;
extern jint SF_arc_graphics_GL20_GL_POINTS;
extern jint SF_arc_graphics_GL20_GL_LINES;
extern jint SF_arc_graphics_GL20_GL_LINE_LOOP;
extern jint SF_arc_graphics_GL20_GL_LINE_STRIP;
extern jint SF_arc_graphics_GL20_GL_TRIANGLES;
extern jint SF_arc_graphics_GL20_GL_TRIANGLE_STRIP;
extern jint SF_arc_graphics_GL20_GL_TRIANGLE_FAN;
extern jint SF_arc_graphics_GL20_GL_ZERO;
extern jint SF_arc_graphics_GL20_GL_ONE;
extern jint SF_arc_graphics_GL20_GL_SRC_COLOR;
extern jint SF_arc_graphics_GL20_GL_ONE_MINUS_SRC_COLOR;
extern jint SF_arc_graphics_GL20_GL_SRC_ALPHA;
extern jint SF_arc_graphics_GL20_GL_ONE_MINUS_SRC_ALPHA;
extern jint SF_arc_graphics_GL20_GL_DST_ALPHA;
extern jint SF_arc_graphics_GL20_GL_ONE_MINUS_DST_ALPHA;
extern jint SF_arc_graphics_GL20_GL_DST_COLOR;
extern jint SF_arc_graphics_GL20_GL_ONE_MINUS_DST_COLOR;
extern jint SF_arc_graphics_GL20_GL_SRC_ALPHA_SATURATE;
extern jint SF_arc_graphics_GL20_GL_FUNC_ADD;
extern jint SF_arc_graphics_GL20_GL_BLEND_EQUATION;
extern jint SF_arc_graphics_GL20_GL_BLEND_EQUATION_RGB;
extern jint SF_arc_graphics_GL20_GL_BLEND_EQUATION_ALPHA;
extern jint SF_arc_graphics_GL20_GL_FUNC_SUBTRACT;
extern jint SF_arc_graphics_GL20_GL_FUNC_REVERSE_SUBTRACT;
extern jint SF_arc_graphics_GL20_GL_BLEND_DST_RGB;
extern jint SF_arc_graphics_GL20_GL_BLEND_SRC_RGB;
extern jint SF_arc_graphics_GL20_GL_BLEND_DST_ALPHA;
extern jint SF_arc_graphics_GL20_GL_BLEND_SRC_ALPHA;
extern jint SF_arc_graphics_GL20_GL_CONSTANT_COLOR;
extern jint SF_arc_graphics_GL20_GL_ONE_MINUS_CONSTANT_COLOR;
extern jint SF_arc_graphics_GL20_GL_CONSTANT_ALPHA;
extern jint SF_arc_graphics_GL20_GL_ONE_MINUS_CONSTANT_ALPHA;
extern jint SF_arc_graphics_GL20_GL_BLEND_COLOR;
extern jint SF_arc_graphics_GL20_GL_ARRAY_BUFFER;
extern jint SF_arc_graphics_GL20_GL_ELEMENT_ARRAY_BUFFER;
extern jint SF_arc_graphics_GL20_GL_ARRAY_BUFFER_BINDING;
extern jint SF_arc_graphics_GL20_GL_ELEMENT_ARRAY_BUFFER_BINDING;
extern jint SF_arc_graphics_GL20_GL_STREAM_DRAW;
extern jint SF_arc_graphics_GL20_GL_STATIC_DRAW;
extern jint SF_arc_graphics_GL20_GL_DYNAMIC_DRAW;
extern jint SF_arc_graphics_GL20_GL_BUFFER_SIZE;
extern jint SF_arc_graphics_GL20_GL_BUFFER_USAGE;
extern jint SF_arc_graphics_GL20_GL_CURRENT_VERTEX_ATTRIB;
extern jint SF_arc_graphics_GL20_GL_FRONT;
extern jint SF_arc_graphics_GL20_GL_BACK;
extern jint SF_arc_graphics_GL20_GL_FRONT_AND_BACK;
extern jint SF_arc_graphics_GL20_GL_TEXTURE_2D;
extern jint SF_arc_graphics_GL20_GL_CULL_FACE;
extern jint SF_arc_graphics_GL20_GL_BLEND;
extern jint SF_arc_graphics_GL20_GL_DITHER;
extern jint SF_arc_graphics_GL20_GL_STENCIL_TEST;
extern jint SF_arc_graphics_GL20_GL_DEPTH_TEST;
extern jint SF_arc_graphics_GL20_GL_SCISSOR_TEST;
extern jint SF_arc_graphics_GL20_GL_POLYGON_OFFSET_FILL;
extern jint SF_arc_graphics_GL20_GL_SAMPLE_ALPHA_TO_COVERAGE;
extern jint SF_arc_graphics_GL20_GL_SAMPLE_COVERAGE;
extern jint SF_arc_graphics_GL20_GL_NO_ERROR;
extern jint SF_arc_graphics_GL20_GL_INVALID_ENUM;
extern jint SF_arc_graphics_GL20_GL_INVALID_VALUE;
extern jint SF_arc_graphics_GL20_GL_INVALID_OPERATION;
extern jint SF_arc_graphics_GL20_GL_OUT_OF_MEMORY;
extern jint SF_arc_graphics_GL20_GL_CW;
extern jint SF_arc_graphics_GL20_GL_CCW;
extern jint SF_arc_graphics_GL20_GL_LINE_WIDTH;
extern jint SF_arc_graphics_GL20_GL_ALIASED_POINT_SIZE_RANGE;
extern jint SF_arc_graphics_GL20_GL_ALIASED_LINE_WIDTH_RANGE;
extern jint SF_arc_graphics_GL20_GL_CULL_FACE_MODE;
extern jint SF_arc_graphics_GL20_GL_FRONT_FACE;
extern jint SF_arc_graphics_GL20_GL_DEPTH_RANGE;
extern jint SF_arc_graphics_GL20_GL_DEPTH_WRITEMASK;
extern jint SF_arc_graphics_GL20_GL_DEPTH_CLEAR_VALUE;
extern jint SF_arc_graphics_GL20_GL_DEPTH_FUNC;
extern jint SF_arc_graphics_GL20_GL_STENCIL_CLEAR_VALUE;
extern jint SF_arc_graphics_GL20_GL_STENCIL_FUNC;
extern jint SF_arc_graphics_GL20_GL_STENCIL_FAIL;
extern jint SF_arc_graphics_GL20_GL_STENCIL_PASS_DEPTH_FAIL;
extern jint SF_arc_graphics_GL20_GL_STENCIL_PASS_DEPTH_PASS;
extern jint SF_arc_graphics_GL20_GL_STENCIL_REF;
extern jint SF_arc_graphics_GL20_GL_STENCIL_VALUE_MASK;
extern jint SF_arc_graphics_GL20_GL_STENCIL_WRITEMASK;
extern jint SF_arc_graphics_GL20_GL_STENCIL_BACK_FUNC;
extern jint SF_arc_graphics_GL20_GL_STENCIL_BACK_FAIL;
extern jint SF_arc_graphics_GL20_GL_STENCIL_BACK_PASS_DEPTH_FAIL;
extern jint SF_arc_graphics_GL20_GL_STENCIL_BACK_PASS_DEPTH_PASS;
extern jint SF_arc_graphics_GL20_GL_STENCIL_BACK_REF;
extern jint SF_arc_graphics_GL20_GL_STENCIL_BACK_VALUE_MASK;
extern jint SF_arc_graphics_GL20_GL_STENCIL_BACK_WRITEMASK;
extern jint SF_arc_graphics_GL20_GL_VIEWPORT;
extern jint SF_arc_graphics_GL20_GL_SCISSOR_BOX;
extern jint SF_arc_graphics_GL20_GL_COLOR_CLEAR_VALUE;
extern jint SF_arc_graphics_GL20_GL_COLOR_WRITEMASK;
extern jint SF_arc_graphics_GL20_GL_UNPACK_ALIGNMENT;
extern jint SF_arc_graphics_GL20_GL_PACK_ALIGNMENT;
extern jint SF_arc_graphics_GL20_GL_MAX_TEXTURE_SIZE;
extern jint SF_arc_graphics_GL20_GL_MAX_TEXTURE_UNITS;
extern jint SF_arc_graphics_GL20_GL_MAX_VIEWPORT_DIMS;
extern jint SF_arc_graphics_GL20_GL_SUBPIXEL_BITS;
extern jint SF_arc_graphics_GL20_GL_RED_BITS;
extern jint SF_arc_graphics_GL20_GL_GREEN_BITS;
extern jint SF_arc_graphics_GL20_GL_BLUE_BITS;
extern jint SF_arc_graphics_GL20_GL_ALPHA_BITS;
extern jint SF_arc_graphics_GL20_GL_DEPTH_BITS;
extern jint SF_arc_graphics_GL20_GL_STENCIL_BITS;
extern jint SF_arc_graphics_GL20_GL_POLYGON_OFFSET_UNITS;
extern jint SF_arc_graphics_GL20_GL_POLYGON_OFFSET_FACTOR;
extern jint SF_arc_graphics_GL20_GL_TEXTURE_BINDING_2D;
extern jint SF_arc_graphics_GL20_GL_SAMPLE_BUFFERS;
extern jint SF_arc_graphics_GL20_GL_SAMPLES;
extern jint SF_arc_graphics_GL20_GL_SAMPLE_COVERAGE_VALUE;
extern jint SF_arc_graphics_GL20_GL_SAMPLE_COVERAGE_INVERT;
extern jint SF_arc_graphics_GL20_GL_NUM_COMPRESSED_TEXTURE_FORMATS;
extern jint SF_arc_graphics_GL20_GL_COMPRESSED_TEXTURE_FORMATS;
extern jint SF_arc_graphics_GL20_GL_DONT_CARE;
extern jint SF_arc_graphics_GL20_GL_FASTEST;
extern jint SF_arc_graphics_GL20_GL_NICEST;
extern jint SF_arc_graphics_GL20_GL_GENERATE_MIPMAP;
extern jint SF_arc_graphics_GL20_GL_GENERATE_MIPMAP_HINT;
extern jint SF_arc_graphics_GL20_GL_BYTE;
extern jint SF_arc_graphics_GL20_GL_UNSIGNED_BYTE;
extern jint SF_arc_graphics_GL20_GL_SHORT;
extern jint SF_arc_graphics_GL20_GL_UNSIGNED_SHORT;
extern jint SF_arc_graphics_GL20_GL_INT;
extern jint SF_arc_graphics_GL20_GL_UNSIGNED_INT;
extern jint SF_arc_graphics_GL20_GL_FLOAT;
extern jint SF_arc_graphics_GL20_GL_FIXED;
extern jint SF_arc_graphics_GL20_GL_DEPTH_COMPONENT;
extern jint SF_arc_graphics_GL20_GL_ALPHA;
extern jint SF_arc_graphics_GL20_GL_RGB;
extern jint SF_arc_graphics_GL20_GL_RGBA;
extern jint SF_arc_graphics_GL20_GL_LUMINANCE;
extern jint SF_arc_graphics_GL20_GL_LUMINANCE_ALPHA;
extern jint SF_arc_graphics_GL20_GL_UNSIGNED_SHORT_4_4_4_4;
extern jint SF_arc_graphics_GL20_GL_UNSIGNED_SHORT_5_5_5_1;
extern jint SF_arc_graphics_GL20_GL_UNSIGNED_SHORT_5_6_5;
extern jint SF_arc_graphics_GL20_GL_FRAGMENT_SHADER;
extern jint SF_arc_graphics_GL20_GL_VERTEX_SHADER;
extern jint SF_arc_graphics_GL20_GL_MAX_VERTEX_ATTRIBS;
extern jint SF_arc_graphics_GL20_GL_MAX_VERTEX_UNIFORM_VECTORS;
extern jint SF_arc_graphics_GL20_GL_MAX_VARYING_VECTORS;
extern jint SF_arc_graphics_GL20_GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS;
extern jint SF_arc_graphics_GL20_GL_MAX_VERTEX_TEXTURE_IMAGE_UNITS;
extern jint SF_arc_graphics_GL20_GL_MAX_TEXTURE_IMAGE_UNITS;
extern jint SF_arc_graphics_GL20_GL_MAX_FRAGMENT_UNIFORM_VECTORS;
extern jint SF_arc_graphics_GL20_GL_SHADER_TYPE;
extern jint SF_arc_graphics_GL20_GL_DELETE_STATUS;
extern jint SF_arc_graphics_GL20_GL_LINK_STATUS;
extern jint SF_arc_graphics_GL20_GL_VALIDATE_STATUS;
extern jint SF_arc_graphics_GL20_GL_ATTACHED_SHADERS;
extern jint SF_arc_graphics_GL20_GL_ACTIVE_UNIFORMS;
extern jint SF_arc_graphics_GL20_GL_ACTIVE_UNIFORM_MAX_LENGTH;
extern jint SF_arc_graphics_GL20_GL_ACTIVE_ATTRIBUTES;
extern jint SF_arc_graphics_GL20_GL_ACTIVE_ATTRIBUTE_MAX_LENGTH;
extern jint SF_arc_graphics_GL20_GL_SHADING_LANGUAGE_VERSION;
extern jint SF_arc_graphics_GL20_GL_CURRENT_PROGRAM;
extern jint SF_arc_graphics_GL20_GL_NEVER;
extern jint SF_arc_graphics_GL20_GL_LESS;
extern jint SF_arc_graphics_GL20_GL_EQUAL;
extern jint SF_arc_graphics_GL20_GL_LEQUAL;
extern jint SF_arc_graphics_GL20_GL_GREATER;
extern jint SF_arc_graphics_GL20_GL_NOTEQUAL;
extern jint SF_arc_graphics_GL20_GL_GEQUAL;
extern jint SF_arc_graphics_GL20_GL_ALWAYS;
extern jint SF_arc_graphics_GL20_GL_KEEP;
extern jint SF_arc_graphics_GL20_GL_REPLACE;
extern jint SF_arc_graphics_GL20_GL_INCR;
extern jint SF_arc_graphics_GL20_GL_DECR;
extern jint SF_arc_graphics_GL20_GL_INVERT;
extern jint SF_arc_graphics_GL20_GL_INCR_WRAP;
extern jint SF_arc_graphics_GL20_GL_DECR_WRAP;
extern jint SF_arc_graphics_GL20_GL_VENDOR;
extern jint SF_arc_graphics_GL20_GL_RENDERER;
extern jint SF_arc_graphics_GL20_GL_VERSION;
extern jint SF_arc_graphics_GL20_GL_EXTENSIONS;
extern jint SF_arc_graphics_GL20_GL_NEAREST;
extern jint SF_arc_graphics_GL20_GL_LINEAR;
extern jint SF_arc_graphics_GL20_GL_NEAREST_MIPMAP_NEAREST;
extern jint SF_arc_graphics_GL20_GL_LINEAR_MIPMAP_NEAREST;
extern jint SF_arc_graphics_GL20_GL_NEAREST_MIPMAP_LINEAR;
extern jint SF_arc_graphics_GL20_GL_LINEAR_MIPMAP_LINEAR;
extern jint SF_arc_graphics_GL20_GL_TEXTURE_MAG_FILTER;
extern jint SF_arc_graphics_GL20_GL_TEXTURE_MIN_FILTER;
extern jint SF_arc_graphics_GL20_GL_TEXTURE_WRAP_S;
extern jint SF_arc_graphics_GL20_GL_TEXTURE_WRAP_T;
extern jint SF_arc_graphics_GL20_GL_TEXTURE;
extern jint SF_arc_graphics_GL20_GL_TEXTURE_CUBE_MAP;
extern jint SF_arc_graphics_GL20_GL_TEXTURE_BINDING_CUBE_MAP;
extern jint SF_arc_graphics_GL20_GL_TEXTURE_CUBE_MAP_POSITIVE_X;
extern jint SF_arc_graphics_GL20_GL_TEXTURE_CUBE_MAP_NEGATIVE_X;
extern jint SF_arc_graphics_GL20_GL_TEXTURE_CUBE_MAP_POSITIVE_Y;
extern jint SF_arc_graphics_GL20_GL_TEXTURE_CUBE_MAP_NEGATIVE_Y;
extern jint SF_arc_graphics_GL20_GL_TEXTURE_CUBE_MAP_POSITIVE_Z;
extern jint SF_arc_graphics_GL20_GL_TEXTURE_CUBE_MAP_NEGATIVE_Z;
extern jint SF_arc_graphics_GL20_GL_MAX_CUBE_MAP_TEXTURE_SIZE;
extern jint SF_arc_graphics_GL20_GL_TEXTURE0;
extern jint SF_arc_graphics_GL20_GL_TEXTURE1;
extern jint SF_arc_graphics_GL20_GL_TEXTURE2;
extern jint SF_arc_graphics_GL20_GL_TEXTURE3;
extern jint SF_arc_graphics_GL20_GL_TEXTURE4;
extern jint SF_arc_graphics_GL20_GL_TEXTURE5;
extern jint SF_arc_graphics_GL20_GL_TEXTURE6;
extern jint SF_arc_graphics_GL20_GL_TEXTURE7;
extern jint SF_arc_graphics_GL20_GL_TEXTURE8;
extern jint SF_arc_graphics_GL20_GL_TEXTURE9;
extern jint SF_arc_graphics_GL20_GL_TEXTURE10;
extern jint SF_arc_graphics_GL20_GL_TEXTURE11;
extern jint SF_arc_graphics_GL20_GL_TEXTURE12;
extern jint SF_arc_graphics_GL20_GL_TEXTURE13;
extern jint SF_arc_graphics_GL20_GL_TEXTURE14;
extern jint SF_arc_graphics_GL20_GL_TEXTURE15;
extern jint SF_arc_graphics_GL20_GL_TEXTURE16;
extern jint SF_arc_graphics_GL20_GL_TEXTURE17;
extern jint SF_arc_graphics_GL20_GL_TEXTURE18;
extern jint SF_arc_graphics_GL20_GL_TEXTURE19;
extern jint SF_arc_graphics_GL20_GL_TEXTURE20;
extern jint SF_arc_graphics_GL20_GL_TEXTURE21;
extern jint SF_arc_graphics_GL20_GL_TEXTURE22;
extern jint SF_arc_graphics_GL20_GL_TEXTURE23;
extern jint SF_arc_graphics_GL20_GL_TEXTURE24;
extern jint SF_arc_graphics_GL20_GL_TEXTURE25;
extern jint SF_arc_graphics_GL20_GL_TEXTURE26;
extern jint SF_arc_graphics_GL20_GL_TEXTURE27;
extern jint SF_arc_graphics_GL20_GL_TEXTURE28;
extern jint SF_arc_graphics_GL20_GL_TEXTURE29;
extern jint SF_arc_graphics_GL20_GL_TEXTURE30;
extern jint SF_arc_graphics_GL20_GL_TEXTURE31;
extern jint SF_arc_graphics_GL20_GL_ACTIVE_TEXTURE;
extern jint SF_arc_graphics_GL20_GL_REPEAT;
extern jint SF_arc_graphics_GL20_GL_CLAMP_TO_EDGE;
extern jint SF_arc_graphics_GL20_GL_MIRRORED_REPEAT;
extern jint SF_arc_graphics_GL20_GL_FLOAT_VEC2;
extern jint SF_arc_graphics_GL20_GL_FLOAT_VEC3;
extern jint SF_arc_graphics_GL20_GL_FLOAT_VEC4;
extern jint SF_arc_graphics_GL20_GL_INT_VEC2;
extern jint SF_arc_graphics_GL20_GL_INT_VEC3;
extern jint SF_arc_graphics_GL20_GL_INT_VEC4;
extern jint SF_arc_graphics_GL20_GL_BOOL;
extern jint SF_arc_graphics_GL20_GL_BOOL_VEC2;
extern jint SF_arc_graphics_GL20_GL_BOOL_VEC3;
extern jint SF_arc_graphics_GL20_GL_BOOL_VEC4;
extern jint SF_arc_graphics_GL20_GL_FLOAT_MAT2;
extern jint SF_arc_graphics_GL20_GL_FLOAT_MAT3;
extern jint SF_arc_graphics_GL20_GL_FLOAT_MAT4;
extern jint SF_arc_graphics_GL20_GL_SAMPLER_2D;
extern jint SF_arc_graphics_GL20_GL_SAMPLER_CUBE;
extern jint SF_arc_graphics_GL20_GL_VERTEX_ATTRIB_ARRAY_ENABLED;
extern jint SF_arc_graphics_GL20_GL_VERTEX_ATTRIB_ARRAY_SIZE;
extern jint SF_arc_graphics_GL20_GL_VERTEX_ATTRIB_ARRAY_STRIDE;
extern jint SF_arc_graphics_GL20_GL_VERTEX_ATTRIB_ARRAY_TYPE;
extern jint SF_arc_graphics_GL20_GL_VERTEX_ATTRIB_ARRAY_NORMALIZED;
extern jint SF_arc_graphics_GL20_GL_VERTEX_ATTRIB_ARRAY_POINTER;
extern jint SF_arc_graphics_GL20_GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING;
extern jint SF_arc_graphics_GL20_GL_IMPLEMENTATION_COLOR_READ_TYPE;
extern jint SF_arc_graphics_GL20_GL_IMPLEMENTATION_COLOR_READ_FORMAT;
extern jint SF_arc_graphics_GL20_GL_COMPILE_STATUS;
extern jint SF_arc_graphics_GL20_GL_INFO_LOG_LENGTH;
extern jint SF_arc_graphics_GL20_GL_SHADER_SOURCE_LENGTH;
extern jint SF_arc_graphics_GL20_GL_SHADER_COMPILER;
extern jint SF_arc_graphics_GL20_GL_SHADER_BINARY_FORMATS;
extern jint SF_arc_graphics_GL20_GL_NUM_SHADER_BINARY_FORMATS;
extern jint SF_arc_graphics_GL20_GL_LOW_FLOAT;
extern jint SF_arc_graphics_GL20_GL_MEDIUM_FLOAT;
extern jint SF_arc_graphics_GL20_GL_HIGH_FLOAT;
extern jint SF_arc_graphics_GL20_GL_LOW_INT;
extern jint SF_arc_graphics_GL20_GL_MEDIUM_INT;
extern jint SF_arc_graphics_GL20_GL_HIGH_INT;
extern jint SF_arc_graphics_GL20_GL_FRAMEBUFFER;
extern jint SF_arc_graphics_GL20_GL_RENDERBUFFER;
extern jint SF_arc_graphics_GL20_GL_RGBA4;
extern jint SF_arc_graphics_GL20_GL_RGB5_A1;
extern jint SF_arc_graphics_GL20_GL_RGB565;
extern jint SF_arc_graphics_GL20_GL_DEPTH_COMPONENT16;
extern jint SF_arc_graphics_GL20_GL_STENCIL_INDEX;
extern jint SF_arc_graphics_GL20_GL_STENCIL_INDEX8;
extern jint SF_arc_graphics_GL20_GL_RENDERBUFFER_WIDTH;
extern jint SF_arc_graphics_GL20_GL_RENDERBUFFER_HEIGHT;
extern jint SF_arc_graphics_GL20_GL_RENDERBUFFER_INTERNAL_FORMAT;
extern jint SF_arc_graphics_GL20_GL_RENDERBUFFER_RED_SIZE;
extern jint SF_arc_graphics_GL20_GL_RENDERBUFFER_GREEN_SIZE;
extern jint SF_arc_graphics_GL20_GL_RENDERBUFFER_BLUE_SIZE;
extern jint SF_arc_graphics_GL20_GL_RENDERBUFFER_ALPHA_SIZE;
extern jint SF_arc_graphics_GL20_GL_RENDERBUFFER_DEPTH_SIZE;
extern jint SF_arc_graphics_GL20_GL_RENDERBUFFER_STENCIL_SIZE;
extern jint SF_arc_graphics_GL20_GL_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE;
extern jint SF_arc_graphics_GL20_GL_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME;
extern jint SF_arc_graphics_GL20_GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL;
extern jint SF_arc_graphics_GL20_GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE;
extern jint SF_arc_graphics_GL20_GL_COLOR_ATTACHMENT0;
extern jint SF_arc_graphics_GL20_GL_DEPTH_ATTACHMENT;
extern jint SF_arc_graphics_GL20_GL_STENCIL_ATTACHMENT;
extern jint SF_arc_graphics_GL20_GL_NONE;
extern jint SF_arc_graphics_GL20_GL_FRAMEBUFFER_COMPLETE;
extern jint SF_arc_graphics_GL20_GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT;
extern jint SF_arc_graphics_GL20_GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT;
extern jint SF_arc_graphics_GL20_GL_FRAMEBUFFER_INCOMPLETE_DIMENSIONS;
extern jint SF_arc_graphics_GL20_GL_FRAMEBUFFER_UNSUPPORTED;
extern jint SF_arc_graphics_GL20_GL_FRAMEBUFFER_BINDING;
extern jint SF_arc_graphics_GL20_GL_RENDERBUFFER_BINDING;
extern jint SF_arc_graphics_GL20_GL_MAX_RENDERBUFFER_SIZE;
extern jint SF_arc_graphics_GL20_GL_INVALID_FRAMEBUFFER_OPERATION;
extern jint SF_arc_graphics_GL20_GL_VERTEX_PROGRAM_POINT_SIZE;
extern jint SF_arc_graphics_GL20_GL_COVERAGE_BUFFER_BIT_NV;
extern jint SF_arc_graphics_GL20_GL_TEXTURE_MAX_ANISOTROPY_EXT;
extern jint SF_arc_graphics_GL20_GL_MAX_TEXTURE_MAX_ANISOTROPY_EXT;

#define INDEX_arc_graphics_GL20_glActiveTexture_int 0
typedef void (*func_arc_graphics_GL20_glActiveTexture_int)(jcontext ctx, jobject self, jint param0);
#define INDEX_arc_graphics_GL20_glBindTexture_int_int 1
typedef void (*func_arc_graphics_GL20_glBindTexture_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define INDEX_arc_graphics_GL20_glBlendFunc_int_int 2
typedef void (*func_arc_graphics_GL20_glBlendFunc_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define INDEX_arc_graphics_GL20_glClear_int 3
typedef void (*func_arc_graphics_GL20_glClear_int)(jcontext ctx, jobject self, jint param0);
#define INDEX_arc_graphics_GL20_glClearColor_float_float_float_float 4
typedef void (*func_arc_graphics_GL20_glClearColor_float_float_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define INDEX_arc_graphics_GL20_glClearDepthf_float 5
typedef void (*func_arc_graphics_GL20_glClearDepthf_float)(jcontext ctx, jobject self, jfloat param0);
#define INDEX_arc_graphics_GL20_glClearStencil_int 6
typedef void (*func_arc_graphics_GL20_glClearStencil_int)(jcontext ctx, jobject self, jint param0);
#define INDEX_arc_graphics_GL20_glColorMask_boolean_boolean_boolean_boolean 7
typedef void (*func_arc_graphics_GL20_glColorMask_boolean_boolean_boolean_boolean)(jcontext ctx, jobject self, jbool param0, jbool param1, jbool param2, jbool param3);
#define INDEX_arc_graphics_GL20_glCompressedTexImage2D_int_int_int_int_int_int_int_java_nio_Buffer 8
typedef void (*func_arc_graphics_GL20_glCompressedTexImage2D_int_int_int_int_int_int_int_java_nio_Buffer)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jobject param7);
#define INDEX_arc_graphics_GL20_glCompressedTexSubImage2D_int_int_int_int_int_int_int_int_java_nio_Buffer 9
typedef void (*func_arc_graphics_GL20_glCompressedTexSubImage2D_int_int_int_int_int_int_int_int_java_nio_Buffer)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jobject param8);
#define INDEX_arc_graphics_GL20_glCopyTexImage2D_int_int_int_int_int_int_int_int 10
typedef void (*func_arc_graphics_GL20_glCopyTexImage2D_int_int_int_int_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7);
#define INDEX_arc_graphics_GL20_glCopyTexSubImage2D_int_int_int_int_int_int_int_int 11
typedef void (*func_arc_graphics_GL20_glCopyTexSubImage2D_int_int_int_int_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7);
#define INDEX_arc_graphics_GL20_glCullFace_int 12
typedef void (*func_arc_graphics_GL20_glCullFace_int)(jcontext ctx, jobject self, jint param0);
#define INDEX_arc_graphics_GL20_glDeleteTexture_int 13
typedef void (*func_arc_graphics_GL20_glDeleteTexture_int)(jcontext ctx, jobject self, jint param0);
#define INDEX_arc_graphics_GL20_glDepthFunc_int 14
typedef void (*func_arc_graphics_GL20_glDepthFunc_int)(jcontext ctx, jobject self, jint param0);
#define INDEX_arc_graphics_GL20_glDepthMask_boolean 15
typedef void (*func_arc_graphics_GL20_glDepthMask_boolean)(jcontext ctx, jobject self, jbool param0);
#define INDEX_arc_graphics_GL20_glDepthRangef_float_float 16
typedef void (*func_arc_graphics_GL20_glDepthRangef_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define INDEX_arc_graphics_GL20_glDisable_int 17
typedef void (*func_arc_graphics_GL20_glDisable_int)(jcontext ctx, jobject self, jint param0);
#define INDEX_arc_graphics_GL20_glDrawArrays_int_int_int 18
typedef void (*func_arc_graphics_GL20_glDrawArrays_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2);
#define INDEX_arc_graphics_GL20_glDrawElements_int_int_int_java_nio_Buffer 19
typedef void (*func_arc_graphics_GL20_glDrawElements_int_int_int_java_nio_Buffer)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jobject param3);
#define INDEX_arc_graphics_GL20_glEnable_int 20
typedef void (*func_arc_graphics_GL20_glEnable_int)(jcontext ctx, jobject self, jint param0);
#define INDEX_arc_graphics_GL20_glFinish 21
typedef void (*func_arc_graphics_GL20_glFinish)(jcontext ctx, jobject self);
#define INDEX_arc_graphics_GL20_glFlush 22
typedef void (*func_arc_graphics_GL20_glFlush)(jcontext ctx, jobject self);
#define INDEX_arc_graphics_GL20_glFrontFace_int 23
typedef void (*func_arc_graphics_GL20_glFrontFace_int)(jcontext ctx, jobject self, jint param0);
#define INDEX_arc_graphics_GL20_glGenTexture_R_int 24
typedef jint (*func_arc_graphics_GL20_glGenTexture_R_int)(jcontext ctx, jobject self);
#define INDEX_arc_graphics_GL20_glGetError_R_int 25
typedef jint (*func_arc_graphics_GL20_glGetError_R_int)(jcontext ctx, jobject self);
#define INDEX_arc_graphics_GL20_glGetIntegerv_int_java_nio_IntBuffer 26
typedef void (*func_arc_graphics_GL20_glGetIntegerv_int_java_nio_IntBuffer)(jcontext ctx, jobject self, jint param0, jobject param1);
#define INDEX_arc_graphics_GL20_glGetString_int_R_java_lang_String 27
typedef jobject (*func_arc_graphics_GL20_glGetString_int_R_java_lang_String)(jcontext ctx, jobject self, jint param0);
#define INDEX_arc_graphics_GL20_glHint_int_int 28
typedef void (*func_arc_graphics_GL20_glHint_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define INDEX_arc_graphics_GL20_glLineWidth_float 29
typedef void (*func_arc_graphics_GL20_glLineWidth_float)(jcontext ctx, jobject self, jfloat param0);
#define INDEX_arc_graphics_GL20_glPixelStorei_int_int 30
typedef void (*func_arc_graphics_GL20_glPixelStorei_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define INDEX_arc_graphics_GL20_glPolygonOffset_float_float 31
typedef void (*func_arc_graphics_GL20_glPolygonOffset_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define INDEX_arc_graphics_GL20_glReadPixels_int_int_int_int_int_int_java_nio_Buffer 32
typedef void (*func_arc_graphics_GL20_glReadPixels_int_int_int_int_int_int_java_nio_Buffer)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jobject param6);
#define INDEX_arc_graphics_GL20_glScissor_int_int_int_int 33
typedef void (*func_arc_graphics_GL20_glScissor_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
#define INDEX_arc_graphics_GL20_glStencilFunc_int_int_int 34
typedef void (*func_arc_graphics_GL20_glStencilFunc_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2);
#define INDEX_arc_graphics_GL20_glStencilMask_int 35
typedef void (*func_arc_graphics_GL20_glStencilMask_int)(jcontext ctx, jobject self, jint param0);
#define INDEX_arc_graphics_GL20_glStencilOp_int_int_int 36
typedef void (*func_arc_graphics_GL20_glStencilOp_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2);
#define INDEX_arc_graphics_GL20_glTexImage2D_int_int_int_int_int_int_int_int_java_nio_Buffer 37
typedef void (*func_arc_graphics_GL20_glTexImage2D_int_int_int_int_int_int_int_int_java_nio_Buffer)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jobject param8);
#define INDEX_arc_graphics_GL20_glTexParameterf_int_int_float 38
typedef void (*func_arc_graphics_GL20_glTexParameterf_int_int_float)(jcontext ctx, jobject self, jint param0, jint param1, jfloat param2);
#define INDEX_arc_graphics_GL20_glTexSubImage2D_int_int_int_int_int_int_int_int_java_nio_Buffer 39
typedef void (*func_arc_graphics_GL20_glTexSubImage2D_int_int_int_int_int_int_int_int_java_nio_Buffer)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jobject param8);
#define INDEX_arc_graphics_GL20_glViewport_int_int_int_int 40
typedef void (*func_arc_graphics_GL20_glViewport_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
#define INDEX_arc_graphics_GL20_glAttachShader_int_int 41
typedef void (*func_arc_graphics_GL20_glAttachShader_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define INDEX_arc_graphics_GL20_glBindAttribLocation_int_int_java_lang_String 42
typedef void (*func_arc_graphics_GL20_glBindAttribLocation_int_int_java_lang_String)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
#define INDEX_arc_graphics_GL20_glBindBuffer_int_int 43
typedef void (*func_arc_graphics_GL20_glBindBuffer_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define INDEX_arc_graphics_GL20_glBindFramebuffer_int_int 44
typedef void (*func_arc_graphics_GL20_glBindFramebuffer_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define INDEX_arc_graphics_GL20_glBindRenderbuffer_int_int 45
typedef void (*func_arc_graphics_GL20_glBindRenderbuffer_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define INDEX_arc_graphics_GL20_glBlendColor_float_float_float_float 46
typedef void (*func_arc_graphics_GL20_glBlendColor_float_float_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define INDEX_arc_graphics_GL20_glBlendEquation_int 47
typedef void (*func_arc_graphics_GL20_glBlendEquation_int)(jcontext ctx, jobject self, jint param0);
#define INDEX_arc_graphics_GL20_glBlendEquationSeparate_int_int 48
typedef void (*func_arc_graphics_GL20_glBlendEquationSeparate_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define INDEX_arc_graphics_GL20_glBlendFuncSeparate_int_int_int_int 49
typedef void (*func_arc_graphics_GL20_glBlendFuncSeparate_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
#define INDEX_arc_graphics_GL20_glBufferData_int_int_java_nio_Buffer_int 50
typedef void (*func_arc_graphics_GL20_glBufferData_int_int_java_nio_Buffer_int)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jint param3);
#define INDEX_arc_graphics_GL20_glBufferSubData_int_int_int_java_nio_Buffer 51
typedef void (*func_arc_graphics_GL20_glBufferSubData_int_int_int_java_nio_Buffer)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jobject param3);
#define INDEX_arc_graphics_GL20_glCheckFramebufferStatus_int_R_int 52
typedef jint (*func_arc_graphics_GL20_glCheckFramebufferStatus_int_R_int)(jcontext ctx, jobject self, jint param0);
#define INDEX_arc_graphics_GL20_glCompileShader_int 53
typedef void (*func_arc_graphics_GL20_glCompileShader_int)(jcontext ctx, jobject self, jint param0);
#define INDEX_arc_graphics_GL20_glCreateProgram_R_int 54
typedef jint (*func_arc_graphics_GL20_glCreateProgram_R_int)(jcontext ctx, jobject self);
#define INDEX_arc_graphics_GL20_glCreateShader_int_R_int 55
typedef jint (*func_arc_graphics_GL20_glCreateShader_int_R_int)(jcontext ctx, jobject self, jint param0);
#define INDEX_arc_graphics_GL20_glDeleteBuffer_int 56
typedef void (*func_arc_graphics_GL20_glDeleteBuffer_int)(jcontext ctx, jobject self, jint param0);
#define INDEX_arc_graphics_GL20_glDeleteFramebuffer_int 57
typedef void (*func_arc_graphics_GL20_glDeleteFramebuffer_int)(jcontext ctx, jobject self, jint param0);
#define INDEX_arc_graphics_GL20_glDeleteProgram_int 58
typedef void (*func_arc_graphics_GL20_glDeleteProgram_int)(jcontext ctx, jobject self, jint param0);
#define INDEX_arc_graphics_GL20_glDeleteRenderbuffer_int 59
typedef void (*func_arc_graphics_GL20_glDeleteRenderbuffer_int)(jcontext ctx, jobject self, jint param0);
#define INDEX_arc_graphics_GL20_glDeleteShader_int 60
typedef void (*func_arc_graphics_GL20_glDeleteShader_int)(jcontext ctx, jobject self, jint param0);
#define INDEX_arc_graphics_GL20_glDetachShader_int_int 61
typedef void (*func_arc_graphics_GL20_glDetachShader_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define INDEX_arc_graphics_GL20_glDisableVertexAttribArray_int 62
typedef void (*func_arc_graphics_GL20_glDisableVertexAttribArray_int)(jcontext ctx, jobject self, jint param0);
#define INDEX_arc_graphics_GL20_glDrawElements_int_int_int_int 63
typedef void (*func_arc_graphics_GL20_glDrawElements_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
#define INDEX_arc_graphics_GL20_glEnableVertexAttribArray_int 64
typedef void (*func_arc_graphics_GL20_glEnableVertexAttribArray_int)(jcontext ctx, jobject self, jint param0);
#define INDEX_arc_graphics_GL20_glFramebufferRenderbuffer_int_int_int_int 65
typedef void (*func_arc_graphics_GL20_glFramebufferRenderbuffer_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
#define INDEX_arc_graphics_GL20_glFramebufferTexture2D_int_int_int_int_int 66
typedef void (*func_arc_graphics_GL20_glFramebufferTexture2D_int_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4);
#define INDEX_arc_graphics_GL20_glGenBuffer_R_int 67
typedef jint (*func_arc_graphics_GL20_glGenBuffer_R_int)(jcontext ctx, jobject self);
#define INDEX_arc_graphics_GL20_glGenerateMipmap_int 68
typedef void (*func_arc_graphics_GL20_glGenerateMipmap_int)(jcontext ctx, jobject self, jint param0);
#define INDEX_arc_graphics_GL20_glGenFramebuffer_R_int 69
typedef jint (*func_arc_graphics_GL20_glGenFramebuffer_R_int)(jcontext ctx, jobject self);
#define INDEX_arc_graphics_GL20_glGenRenderbuffer_R_int 70
typedef jint (*func_arc_graphics_GL20_glGenRenderbuffer_R_int)(jcontext ctx, jobject self);
#define INDEX_arc_graphics_GL20_glGetActiveAttrib_int_int_java_nio_IntBuffer_java_nio_IntBuffer_R_java_lang_String 71
typedef jobject (*func_arc_graphics_GL20_glGetActiveAttrib_int_int_java_nio_IntBuffer_java_nio_IntBuffer_R_java_lang_String)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jobject param3);
#define INDEX_arc_graphics_GL20_glGetActiveUniform_int_int_java_nio_IntBuffer_java_nio_IntBuffer_R_java_lang_String 72
typedef jobject (*func_arc_graphics_GL20_glGetActiveUniform_int_int_java_nio_IntBuffer_java_nio_IntBuffer_R_java_lang_String)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jobject param3);
#define INDEX_arc_graphics_GL20_glGetAttribLocation_int_java_lang_String_R_int 73
typedef jint (*func_arc_graphics_GL20_glGetAttribLocation_int_java_lang_String_R_int)(jcontext ctx, jobject self, jint param0, jobject param1);
#define INDEX_arc_graphics_GL20_glGetBooleanv_int_java_nio_Buffer 74
typedef void (*func_arc_graphics_GL20_glGetBooleanv_int_java_nio_Buffer)(jcontext ctx, jobject self, jint param0, jobject param1);
#define INDEX_arc_graphics_GL20_glGetBufferParameteriv_int_int_java_nio_IntBuffer 75
typedef void (*func_arc_graphics_GL20_glGetBufferParameteriv_int_int_java_nio_IntBuffer)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
#define INDEX_arc_graphics_GL20_glGetFloatv_int_java_nio_FloatBuffer 76
typedef void (*func_arc_graphics_GL20_glGetFloatv_int_java_nio_FloatBuffer)(jcontext ctx, jobject self, jint param0, jobject param1);
#define INDEX_arc_graphics_GL20_glGetFramebufferAttachmentParameteriv_int_int_int_java_nio_IntBuffer 77
typedef void (*func_arc_graphics_GL20_glGetFramebufferAttachmentParameteriv_int_int_int_java_nio_IntBuffer)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jobject param3);
#define INDEX_arc_graphics_GL20_glGetProgramiv_int_int_java_nio_IntBuffer 78
typedef void (*func_arc_graphics_GL20_glGetProgramiv_int_int_java_nio_IntBuffer)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
#define INDEX_arc_graphics_GL20_glGetProgramInfoLog_int_R_java_lang_String 79
typedef jobject (*func_arc_graphics_GL20_glGetProgramInfoLog_int_R_java_lang_String)(jcontext ctx, jobject self, jint param0);
#define INDEX_arc_graphics_GL20_glGetRenderbufferParameteriv_int_int_java_nio_IntBuffer 80
typedef void (*func_arc_graphics_GL20_glGetRenderbufferParameteriv_int_int_java_nio_IntBuffer)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
#define INDEX_arc_graphics_GL20_glGetShaderiv_int_int_java_nio_IntBuffer 81
typedef void (*func_arc_graphics_GL20_glGetShaderiv_int_int_java_nio_IntBuffer)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
#define INDEX_arc_graphics_GL20_glGetShaderInfoLog_int_R_java_lang_String 82
typedef jobject (*func_arc_graphics_GL20_glGetShaderInfoLog_int_R_java_lang_String)(jcontext ctx, jobject self, jint param0);
#define INDEX_arc_graphics_GL20_glGetShaderPrecisionFormat_int_int_java_nio_IntBuffer_java_nio_IntBuffer 83
typedef void (*func_arc_graphics_GL20_glGetShaderPrecisionFormat_int_int_java_nio_IntBuffer_java_nio_IntBuffer)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jobject param3);
#define INDEX_arc_graphics_GL20_glGetTexParameterfv_int_int_java_nio_FloatBuffer 84
typedef void (*func_arc_graphics_GL20_glGetTexParameterfv_int_int_java_nio_FloatBuffer)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
#define INDEX_arc_graphics_GL20_glGetTexParameteriv_int_int_java_nio_IntBuffer 85
typedef void (*func_arc_graphics_GL20_glGetTexParameteriv_int_int_java_nio_IntBuffer)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
#define INDEX_arc_graphics_GL20_glGetUniformfv_int_int_java_nio_FloatBuffer 86
typedef void (*func_arc_graphics_GL20_glGetUniformfv_int_int_java_nio_FloatBuffer)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
#define INDEX_arc_graphics_GL20_glGetUniformiv_int_int_java_nio_IntBuffer 87
typedef void (*func_arc_graphics_GL20_glGetUniformiv_int_int_java_nio_IntBuffer)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
#define INDEX_arc_graphics_GL20_glGetUniformLocation_int_java_lang_String_R_int 88
typedef jint (*func_arc_graphics_GL20_glGetUniformLocation_int_java_lang_String_R_int)(jcontext ctx, jobject self, jint param0, jobject param1);
#define INDEX_arc_graphics_GL20_glGetVertexAttribfv_int_int_java_nio_FloatBuffer 89
typedef void (*func_arc_graphics_GL20_glGetVertexAttribfv_int_int_java_nio_FloatBuffer)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
#define INDEX_arc_graphics_GL20_glGetVertexAttribiv_int_int_java_nio_IntBuffer 90
typedef void (*func_arc_graphics_GL20_glGetVertexAttribiv_int_int_java_nio_IntBuffer)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
#define INDEX_arc_graphics_GL20_glIsBuffer_int_R_boolean 91
typedef jbool (*func_arc_graphics_GL20_glIsBuffer_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define INDEX_arc_graphics_GL20_glIsEnabled_int_R_boolean 92
typedef jbool (*func_arc_graphics_GL20_glIsEnabled_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define INDEX_arc_graphics_GL20_glIsFramebuffer_int_R_boolean 93
typedef jbool (*func_arc_graphics_GL20_glIsFramebuffer_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define INDEX_arc_graphics_GL20_glIsProgram_int_R_boolean 94
typedef jbool (*func_arc_graphics_GL20_glIsProgram_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define INDEX_arc_graphics_GL20_glIsRenderbuffer_int_R_boolean 95
typedef jbool (*func_arc_graphics_GL20_glIsRenderbuffer_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define INDEX_arc_graphics_GL20_glIsShader_int_R_boolean 96
typedef jbool (*func_arc_graphics_GL20_glIsShader_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define INDEX_arc_graphics_GL20_glIsTexture_int_R_boolean 97
typedef jbool (*func_arc_graphics_GL20_glIsTexture_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define INDEX_arc_graphics_GL20_glLinkProgram_int 98
typedef void (*func_arc_graphics_GL20_glLinkProgram_int)(jcontext ctx, jobject self, jint param0);
#define INDEX_arc_graphics_GL20_glReleaseShaderCompiler 99
typedef void (*func_arc_graphics_GL20_glReleaseShaderCompiler)(jcontext ctx, jobject self);
#define INDEX_arc_graphics_GL20_glRenderbufferStorage_int_int_int_int 100
typedef void (*func_arc_graphics_GL20_glRenderbufferStorage_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
#define INDEX_arc_graphics_GL20_glSampleCoverage_float_boolean 101
typedef void (*func_arc_graphics_GL20_glSampleCoverage_float_boolean)(jcontext ctx, jobject self, jfloat param0, jbool param1);
#define INDEX_arc_graphics_GL20_glShaderSource_int_java_lang_String 102
typedef void (*func_arc_graphics_GL20_glShaderSource_int_java_lang_String)(jcontext ctx, jobject self, jint param0, jobject param1);
#define INDEX_arc_graphics_GL20_glStencilFuncSeparate_int_int_int_int 103
typedef void (*func_arc_graphics_GL20_glStencilFuncSeparate_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
#define INDEX_arc_graphics_GL20_glStencilMaskSeparate_int_int 104
typedef void (*func_arc_graphics_GL20_glStencilMaskSeparate_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define INDEX_arc_graphics_GL20_glStencilOpSeparate_int_int_int_int 105
typedef void (*func_arc_graphics_GL20_glStencilOpSeparate_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
#define INDEX_arc_graphics_GL20_glTexParameterfv_int_int_java_nio_FloatBuffer 106
typedef void (*func_arc_graphics_GL20_glTexParameterfv_int_int_java_nio_FloatBuffer)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
#define INDEX_arc_graphics_GL20_glTexParameteri_int_int_int 107
typedef void (*func_arc_graphics_GL20_glTexParameteri_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2);
#define INDEX_arc_graphics_GL20_glTexParameteriv_int_int_java_nio_IntBuffer 108
typedef void (*func_arc_graphics_GL20_glTexParameteriv_int_int_java_nio_IntBuffer)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
#define INDEX_arc_graphics_GL20_glUniform1f_int_float 109
typedef void (*func_arc_graphics_GL20_glUniform1f_int_float)(jcontext ctx, jobject self, jint param0, jfloat param1);
#define INDEX_arc_graphics_GL20_glUniform1fv_int_int_java_nio_FloatBuffer 110
typedef void (*func_arc_graphics_GL20_glUniform1fv_int_int_java_nio_FloatBuffer)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
#define INDEX_arc_graphics_GL20_glUniform1fv_int_int_Array1_float_int 111
typedef void (*func_arc_graphics_GL20_glUniform1fv_int_int_Array1_float_int)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jint param3);
#define INDEX_arc_graphics_GL20_glUniform1i_int_int 112
typedef void (*func_arc_graphics_GL20_glUniform1i_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define INDEX_arc_graphics_GL20_glUniform1iv_int_int_java_nio_IntBuffer 113
typedef void (*func_arc_graphics_GL20_glUniform1iv_int_int_java_nio_IntBuffer)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
#define INDEX_arc_graphics_GL20_glUniform1iv_int_int_Array1_int_int 114
typedef void (*func_arc_graphics_GL20_glUniform1iv_int_int_Array1_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jint param3);
#define INDEX_arc_graphics_GL20_glUniform2f_int_float_float 115
typedef void (*func_arc_graphics_GL20_glUniform2f_int_float_float)(jcontext ctx, jobject self, jint param0, jfloat param1, jfloat param2);
#define INDEX_arc_graphics_GL20_glUniform2fv_int_int_java_nio_FloatBuffer 116
typedef void (*func_arc_graphics_GL20_glUniform2fv_int_int_java_nio_FloatBuffer)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
#define INDEX_arc_graphics_GL20_glUniform2fv_int_int_Array1_float_int 117
typedef void (*func_arc_graphics_GL20_glUniform2fv_int_int_Array1_float_int)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jint param3);
#define INDEX_arc_graphics_GL20_glUniform2i_int_int_int 118
typedef void (*func_arc_graphics_GL20_glUniform2i_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2);
#define INDEX_arc_graphics_GL20_glUniform2iv_int_int_java_nio_IntBuffer 119
typedef void (*func_arc_graphics_GL20_glUniform2iv_int_int_java_nio_IntBuffer)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
#define INDEX_arc_graphics_GL20_glUniform2iv_int_int_Array1_int_int 120
typedef void (*func_arc_graphics_GL20_glUniform2iv_int_int_Array1_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jint param3);
#define INDEX_arc_graphics_GL20_glUniform3f_int_float_float_float 121
typedef void (*func_arc_graphics_GL20_glUniform3f_int_float_float_float)(jcontext ctx, jobject self, jint param0, jfloat param1, jfloat param2, jfloat param3);
#define INDEX_arc_graphics_GL20_glUniform3fv_int_int_java_nio_FloatBuffer 122
typedef void (*func_arc_graphics_GL20_glUniform3fv_int_int_java_nio_FloatBuffer)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
#define INDEX_arc_graphics_GL20_glUniform3fv_int_int_Array1_float_int 123
typedef void (*func_arc_graphics_GL20_glUniform3fv_int_int_Array1_float_int)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jint param3);
#define INDEX_arc_graphics_GL20_glUniform3i_int_int_int_int 124
typedef void (*func_arc_graphics_GL20_glUniform3i_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
#define INDEX_arc_graphics_GL20_glUniform3iv_int_int_java_nio_IntBuffer 125
typedef void (*func_arc_graphics_GL20_glUniform3iv_int_int_java_nio_IntBuffer)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
#define INDEX_arc_graphics_GL20_glUniform3iv_int_int_Array1_int_int 126
typedef void (*func_arc_graphics_GL20_glUniform3iv_int_int_Array1_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jint param3);
#define INDEX_arc_graphics_GL20_glUniform4f_int_float_float_float_float 127
typedef void (*func_arc_graphics_GL20_glUniform4f_int_float_float_float_float)(jcontext ctx, jobject self, jint param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4);
#define INDEX_arc_graphics_GL20_glUniform4fv_int_int_java_nio_FloatBuffer 128
typedef void (*func_arc_graphics_GL20_glUniform4fv_int_int_java_nio_FloatBuffer)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
#define INDEX_arc_graphics_GL20_glUniform4fv_int_int_Array1_float_int 129
typedef void (*func_arc_graphics_GL20_glUniform4fv_int_int_Array1_float_int)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jint param3);
#define INDEX_arc_graphics_GL20_glUniform4i_int_int_int_int_int 130
typedef void (*func_arc_graphics_GL20_glUniform4i_int_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4);
#define INDEX_arc_graphics_GL20_glUniform4iv_int_int_java_nio_IntBuffer 131
typedef void (*func_arc_graphics_GL20_glUniform4iv_int_int_java_nio_IntBuffer)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
#define INDEX_arc_graphics_GL20_glUniform4iv_int_int_Array1_int_int 132
typedef void (*func_arc_graphics_GL20_glUniform4iv_int_int_Array1_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jint param3);
#define INDEX_arc_graphics_GL20_glUniformMatrix2fv_int_int_boolean_java_nio_FloatBuffer 133
typedef void (*func_arc_graphics_GL20_glUniformMatrix2fv_int_int_boolean_java_nio_FloatBuffer)(jcontext ctx, jobject self, jint param0, jint param1, jbool param2, jobject param3);
#define INDEX_arc_graphics_GL20_glUniformMatrix2fv_int_int_boolean_Array1_float_int 134
typedef void (*func_arc_graphics_GL20_glUniformMatrix2fv_int_int_boolean_Array1_float_int)(jcontext ctx, jobject self, jint param0, jint param1, jbool param2, jobject param3, jint param4);
#define INDEX_arc_graphics_GL20_glUniformMatrix3fv_int_int_boolean_java_nio_FloatBuffer 135
typedef void (*func_arc_graphics_GL20_glUniformMatrix3fv_int_int_boolean_java_nio_FloatBuffer)(jcontext ctx, jobject self, jint param0, jint param1, jbool param2, jobject param3);
#define INDEX_arc_graphics_GL20_glUniformMatrix3fv_int_int_boolean_Array1_float_int 136
typedef void (*func_arc_graphics_GL20_glUniformMatrix3fv_int_int_boolean_Array1_float_int)(jcontext ctx, jobject self, jint param0, jint param1, jbool param2, jobject param3, jint param4);
#define INDEX_arc_graphics_GL20_glUniformMatrix4fv_int_int_boolean_java_nio_FloatBuffer 137
typedef void (*func_arc_graphics_GL20_glUniformMatrix4fv_int_int_boolean_java_nio_FloatBuffer)(jcontext ctx, jobject self, jint param0, jint param1, jbool param2, jobject param3);
#define INDEX_arc_graphics_GL20_glUniformMatrix4fv_int_int_boolean_Array1_float_int 138
typedef void (*func_arc_graphics_GL20_glUniformMatrix4fv_int_int_boolean_Array1_float_int)(jcontext ctx, jobject self, jint param0, jint param1, jbool param2, jobject param3, jint param4);
#define INDEX_arc_graphics_GL20_glUseProgram_int 139
typedef void (*func_arc_graphics_GL20_glUseProgram_int)(jcontext ctx, jobject self, jint param0);
#define INDEX_arc_graphics_GL20_glValidateProgram_int 140
typedef void (*func_arc_graphics_GL20_glValidateProgram_int)(jcontext ctx, jobject self, jint param0);
#define INDEX_arc_graphics_GL20_glVertexAttrib1f_int_float 141
typedef void (*func_arc_graphics_GL20_glVertexAttrib1f_int_float)(jcontext ctx, jobject self, jint param0, jfloat param1);
#define INDEX_arc_graphics_GL20_glVertexAttrib1fv_int_java_nio_FloatBuffer 142
typedef void (*func_arc_graphics_GL20_glVertexAttrib1fv_int_java_nio_FloatBuffer)(jcontext ctx, jobject self, jint param0, jobject param1);
#define INDEX_arc_graphics_GL20_glVertexAttrib2f_int_float_float 143
typedef void (*func_arc_graphics_GL20_glVertexAttrib2f_int_float_float)(jcontext ctx, jobject self, jint param0, jfloat param1, jfloat param2);
#define INDEX_arc_graphics_GL20_glVertexAttrib2fv_int_java_nio_FloatBuffer 144
typedef void (*func_arc_graphics_GL20_glVertexAttrib2fv_int_java_nio_FloatBuffer)(jcontext ctx, jobject self, jint param0, jobject param1);
#define INDEX_arc_graphics_GL20_glVertexAttrib3f_int_float_float_float 145
typedef void (*func_arc_graphics_GL20_glVertexAttrib3f_int_float_float_float)(jcontext ctx, jobject self, jint param0, jfloat param1, jfloat param2, jfloat param3);
#define INDEX_arc_graphics_GL20_glVertexAttrib3fv_int_java_nio_FloatBuffer 146
typedef void (*func_arc_graphics_GL20_glVertexAttrib3fv_int_java_nio_FloatBuffer)(jcontext ctx, jobject self, jint param0, jobject param1);
#define INDEX_arc_graphics_GL20_glVertexAttrib4f_int_float_float_float_float 147
typedef void (*func_arc_graphics_GL20_glVertexAttrib4f_int_float_float_float_float)(jcontext ctx, jobject self, jint param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4);
#define INDEX_arc_graphics_GL20_glVertexAttrib4fv_int_java_nio_FloatBuffer 148
typedef void (*func_arc_graphics_GL20_glVertexAttrib4fv_int_java_nio_FloatBuffer)(jcontext ctx, jobject self, jint param0, jobject param1);
#define INDEX_arc_graphics_GL20_glVertexAttribPointer_int_int_int_boolean_int_java_nio_Buffer 149
typedef void (*func_arc_graphics_GL20_glVertexAttribPointer_int_int_int_boolean_int_java_nio_Buffer)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jbool param3, jint param4, jobject param5);
#define INDEX_arc_graphics_GL20_glVertexAttribPointer_int_int_int_boolean_int_int 150
typedef void (*func_arc_graphics_GL20_glVertexAttribPointer_int_int_int_boolean_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jbool param3, jint param4, jint param5);

void mark_arc_graphics_GL20(jobject object, jint mark, jint depth);
void clinit_arc_graphics_GL20(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
