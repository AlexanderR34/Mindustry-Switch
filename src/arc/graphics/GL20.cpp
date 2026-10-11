#include "arc/graphics/GL20.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/nio/FloatBuffer.h"
#include "java/nio/Buffer.h"
#include "java/nio/IntBuffer.h"
#include "arc/graphics/GL20.h"

extern "C" {

jint SF_arc_graphics_GL20_GL_ES_VERSION_2_0;
jint SF_arc_graphics_GL20_GL_DEPTH_BUFFER_BIT;
jint SF_arc_graphics_GL20_GL_STENCIL_BUFFER_BIT;
jint SF_arc_graphics_GL20_GL_COLOR_BUFFER_BIT;
jint SF_arc_graphics_GL20_GL_FALSE;
jint SF_arc_graphics_GL20_GL_TRUE;
jint SF_arc_graphics_GL20_GL_POINTS;
jint SF_arc_graphics_GL20_GL_LINES;
jint SF_arc_graphics_GL20_GL_LINE_LOOP;
jint SF_arc_graphics_GL20_GL_LINE_STRIP;
jint SF_arc_graphics_GL20_GL_TRIANGLES;
jint SF_arc_graphics_GL20_GL_TRIANGLE_STRIP;
jint SF_arc_graphics_GL20_GL_TRIANGLE_FAN;
jint SF_arc_graphics_GL20_GL_ZERO;
jint SF_arc_graphics_GL20_GL_ONE;
jint SF_arc_graphics_GL20_GL_SRC_COLOR;
jint SF_arc_graphics_GL20_GL_ONE_MINUS_SRC_COLOR;
jint SF_arc_graphics_GL20_GL_SRC_ALPHA;
jint SF_arc_graphics_GL20_GL_ONE_MINUS_SRC_ALPHA;
jint SF_arc_graphics_GL20_GL_DST_ALPHA;
jint SF_arc_graphics_GL20_GL_ONE_MINUS_DST_ALPHA;
jint SF_arc_graphics_GL20_GL_DST_COLOR;
jint SF_arc_graphics_GL20_GL_ONE_MINUS_DST_COLOR;
jint SF_arc_graphics_GL20_GL_SRC_ALPHA_SATURATE;
jint SF_arc_graphics_GL20_GL_FUNC_ADD;
jint SF_arc_graphics_GL20_GL_BLEND_EQUATION;
jint SF_arc_graphics_GL20_GL_BLEND_EQUATION_RGB;
jint SF_arc_graphics_GL20_GL_BLEND_EQUATION_ALPHA;
jint SF_arc_graphics_GL20_GL_FUNC_SUBTRACT;
jint SF_arc_graphics_GL20_GL_FUNC_REVERSE_SUBTRACT;
jint SF_arc_graphics_GL20_GL_BLEND_DST_RGB;
jint SF_arc_graphics_GL20_GL_BLEND_SRC_RGB;
jint SF_arc_graphics_GL20_GL_BLEND_DST_ALPHA;
jint SF_arc_graphics_GL20_GL_BLEND_SRC_ALPHA;
jint SF_arc_graphics_GL20_GL_CONSTANT_COLOR;
jint SF_arc_graphics_GL20_GL_ONE_MINUS_CONSTANT_COLOR;
jint SF_arc_graphics_GL20_GL_CONSTANT_ALPHA;
jint SF_arc_graphics_GL20_GL_ONE_MINUS_CONSTANT_ALPHA;
jint SF_arc_graphics_GL20_GL_BLEND_COLOR;
jint SF_arc_graphics_GL20_GL_ARRAY_BUFFER;
jint SF_arc_graphics_GL20_GL_ELEMENT_ARRAY_BUFFER;
jint SF_arc_graphics_GL20_GL_ARRAY_BUFFER_BINDING;
jint SF_arc_graphics_GL20_GL_ELEMENT_ARRAY_BUFFER_BINDING;
jint SF_arc_graphics_GL20_GL_STREAM_DRAW;
jint SF_arc_graphics_GL20_GL_STATIC_DRAW;
jint SF_arc_graphics_GL20_GL_DYNAMIC_DRAW;
jint SF_arc_graphics_GL20_GL_BUFFER_SIZE;
jint SF_arc_graphics_GL20_GL_BUFFER_USAGE;
jint SF_arc_graphics_GL20_GL_CURRENT_VERTEX_ATTRIB;
jint SF_arc_graphics_GL20_GL_FRONT;
jint SF_arc_graphics_GL20_GL_BACK;
jint SF_arc_graphics_GL20_GL_FRONT_AND_BACK;
jint SF_arc_graphics_GL20_GL_TEXTURE_2D;
jint SF_arc_graphics_GL20_GL_CULL_FACE;
jint SF_arc_graphics_GL20_GL_BLEND;
jint SF_arc_graphics_GL20_GL_DITHER;
jint SF_arc_graphics_GL20_GL_STENCIL_TEST;
jint SF_arc_graphics_GL20_GL_DEPTH_TEST;
jint SF_arc_graphics_GL20_GL_SCISSOR_TEST;
jint SF_arc_graphics_GL20_GL_POLYGON_OFFSET_FILL;
jint SF_arc_graphics_GL20_GL_SAMPLE_ALPHA_TO_COVERAGE;
jint SF_arc_graphics_GL20_GL_SAMPLE_COVERAGE;
jint SF_arc_graphics_GL20_GL_NO_ERROR;
jint SF_arc_graphics_GL20_GL_INVALID_ENUM;
jint SF_arc_graphics_GL20_GL_INVALID_VALUE;
jint SF_arc_graphics_GL20_GL_INVALID_OPERATION;
jint SF_arc_graphics_GL20_GL_OUT_OF_MEMORY;
jint SF_arc_graphics_GL20_GL_CW;
jint SF_arc_graphics_GL20_GL_CCW;
jint SF_arc_graphics_GL20_GL_LINE_WIDTH;
jint SF_arc_graphics_GL20_GL_ALIASED_POINT_SIZE_RANGE;
jint SF_arc_graphics_GL20_GL_ALIASED_LINE_WIDTH_RANGE;
jint SF_arc_graphics_GL20_GL_CULL_FACE_MODE;
jint SF_arc_graphics_GL20_GL_FRONT_FACE;
jint SF_arc_graphics_GL20_GL_DEPTH_RANGE;
jint SF_arc_graphics_GL20_GL_DEPTH_WRITEMASK;
jint SF_arc_graphics_GL20_GL_DEPTH_CLEAR_VALUE;
jint SF_arc_graphics_GL20_GL_DEPTH_FUNC;
jint SF_arc_graphics_GL20_GL_STENCIL_CLEAR_VALUE;
jint SF_arc_graphics_GL20_GL_STENCIL_FUNC;
jint SF_arc_graphics_GL20_GL_STENCIL_FAIL;
jint SF_arc_graphics_GL20_GL_STENCIL_PASS_DEPTH_FAIL;
jint SF_arc_graphics_GL20_GL_STENCIL_PASS_DEPTH_PASS;
jint SF_arc_graphics_GL20_GL_STENCIL_REF;
jint SF_arc_graphics_GL20_GL_STENCIL_VALUE_MASK;
jint SF_arc_graphics_GL20_GL_STENCIL_WRITEMASK;
jint SF_arc_graphics_GL20_GL_STENCIL_BACK_FUNC;
jint SF_arc_graphics_GL20_GL_STENCIL_BACK_FAIL;
jint SF_arc_graphics_GL20_GL_STENCIL_BACK_PASS_DEPTH_FAIL;
jint SF_arc_graphics_GL20_GL_STENCIL_BACK_PASS_DEPTH_PASS;
jint SF_arc_graphics_GL20_GL_STENCIL_BACK_REF;
jint SF_arc_graphics_GL20_GL_STENCIL_BACK_VALUE_MASK;
jint SF_arc_graphics_GL20_GL_STENCIL_BACK_WRITEMASK;
jint SF_arc_graphics_GL20_GL_VIEWPORT;
jint SF_arc_graphics_GL20_GL_SCISSOR_BOX;
jint SF_arc_graphics_GL20_GL_COLOR_CLEAR_VALUE;
jint SF_arc_graphics_GL20_GL_COLOR_WRITEMASK;
jint SF_arc_graphics_GL20_GL_UNPACK_ALIGNMENT;
jint SF_arc_graphics_GL20_GL_PACK_ALIGNMENT;
jint SF_arc_graphics_GL20_GL_MAX_TEXTURE_SIZE;
jint SF_arc_graphics_GL20_GL_MAX_TEXTURE_UNITS;
jint SF_arc_graphics_GL20_GL_MAX_VIEWPORT_DIMS;
jint SF_arc_graphics_GL20_GL_SUBPIXEL_BITS;
jint SF_arc_graphics_GL20_GL_RED_BITS;
jint SF_arc_graphics_GL20_GL_GREEN_BITS;
jint SF_arc_graphics_GL20_GL_BLUE_BITS;
jint SF_arc_graphics_GL20_GL_ALPHA_BITS;
jint SF_arc_graphics_GL20_GL_DEPTH_BITS;
jint SF_arc_graphics_GL20_GL_STENCIL_BITS;
jint SF_arc_graphics_GL20_GL_POLYGON_OFFSET_UNITS;
jint SF_arc_graphics_GL20_GL_POLYGON_OFFSET_FACTOR;
jint SF_arc_graphics_GL20_GL_TEXTURE_BINDING_2D;
jint SF_arc_graphics_GL20_GL_SAMPLE_BUFFERS;
jint SF_arc_graphics_GL20_GL_SAMPLES;
jint SF_arc_graphics_GL20_GL_SAMPLE_COVERAGE_VALUE;
jint SF_arc_graphics_GL20_GL_SAMPLE_COVERAGE_INVERT;
jint SF_arc_graphics_GL20_GL_NUM_COMPRESSED_TEXTURE_FORMATS;
jint SF_arc_graphics_GL20_GL_COMPRESSED_TEXTURE_FORMATS;
jint SF_arc_graphics_GL20_GL_DONT_CARE;
jint SF_arc_graphics_GL20_GL_FASTEST;
jint SF_arc_graphics_GL20_GL_NICEST;
jint SF_arc_graphics_GL20_GL_GENERATE_MIPMAP;
jint SF_arc_graphics_GL20_GL_GENERATE_MIPMAP_HINT;
jint SF_arc_graphics_GL20_GL_BYTE;
jint SF_arc_graphics_GL20_GL_UNSIGNED_BYTE;
jint SF_arc_graphics_GL20_GL_SHORT;
jint SF_arc_graphics_GL20_GL_UNSIGNED_SHORT;
jint SF_arc_graphics_GL20_GL_INT;
jint SF_arc_graphics_GL20_GL_UNSIGNED_INT;
jint SF_arc_graphics_GL20_GL_FLOAT;
jint SF_arc_graphics_GL20_GL_FIXED;
jint SF_arc_graphics_GL20_GL_DEPTH_COMPONENT;
jint SF_arc_graphics_GL20_GL_ALPHA;
jint SF_arc_graphics_GL20_GL_RGB;
jint SF_arc_graphics_GL20_GL_RGBA;
jint SF_arc_graphics_GL20_GL_LUMINANCE;
jint SF_arc_graphics_GL20_GL_LUMINANCE_ALPHA;
jint SF_arc_graphics_GL20_GL_UNSIGNED_SHORT_4_4_4_4;
jint SF_arc_graphics_GL20_GL_UNSIGNED_SHORT_5_5_5_1;
jint SF_arc_graphics_GL20_GL_UNSIGNED_SHORT_5_6_5;
jint SF_arc_graphics_GL20_GL_FRAGMENT_SHADER;
jint SF_arc_graphics_GL20_GL_VERTEX_SHADER;
jint SF_arc_graphics_GL20_GL_MAX_VERTEX_ATTRIBS;
jint SF_arc_graphics_GL20_GL_MAX_VERTEX_UNIFORM_VECTORS;
jint SF_arc_graphics_GL20_GL_MAX_VARYING_VECTORS;
jint SF_arc_graphics_GL20_GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS;
jint SF_arc_graphics_GL20_GL_MAX_VERTEX_TEXTURE_IMAGE_UNITS;
jint SF_arc_graphics_GL20_GL_MAX_TEXTURE_IMAGE_UNITS;
jint SF_arc_graphics_GL20_GL_MAX_FRAGMENT_UNIFORM_VECTORS;
jint SF_arc_graphics_GL20_GL_SHADER_TYPE;
jint SF_arc_graphics_GL20_GL_DELETE_STATUS;
jint SF_arc_graphics_GL20_GL_LINK_STATUS;
jint SF_arc_graphics_GL20_GL_VALIDATE_STATUS;
jint SF_arc_graphics_GL20_GL_ATTACHED_SHADERS;
jint SF_arc_graphics_GL20_GL_ACTIVE_UNIFORMS;
jint SF_arc_graphics_GL20_GL_ACTIVE_UNIFORM_MAX_LENGTH;
jint SF_arc_graphics_GL20_GL_ACTIVE_ATTRIBUTES;
jint SF_arc_graphics_GL20_GL_ACTIVE_ATTRIBUTE_MAX_LENGTH;
jint SF_arc_graphics_GL20_GL_SHADING_LANGUAGE_VERSION;
jint SF_arc_graphics_GL20_GL_CURRENT_PROGRAM;
jint SF_arc_graphics_GL20_GL_NEVER;
jint SF_arc_graphics_GL20_GL_LESS;
jint SF_arc_graphics_GL20_GL_EQUAL;
jint SF_arc_graphics_GL20_GL_LEQUAL;
jint SF_arc_graphics_GL20_GL_GREATER;
jint SF_arc_graphics_GL20_GL_NOTEQUAL;
jint SF_arc_graphics_GL20_GL_GEQUAL;
jint SF_arc_graphics_GL20_GL_ALWAYS;
jint SF_arc_graphics_GL20_GL_KEEP;
jint SF_arc_graphics_GL20_GL_REPLACE;
jint SF_arc_graphics_GL20_GL_INCR;
jint SF_arc_graphics_GL20_GL_DECR;
jint SF_arc_graphics_GL20_GL_INVERT;
jint SF_arc_graphics_GL20_GL_INCR_WRAP;
jint SF_arc_graphics_GL20_GL_DECR_WRAP;
jint SF_arc_graphics_GL20_GL_VENDOR;
jint SF_arc_graphics_GL20_GL_RENDERER;
jint SF_arc_graphics_GL20_GL_VERSION;
jint SF_arc_graphics_GL20_GL_EXTENSIONS;
jint SF_arc_graphics_GL20_GL_NEAREST;
jint SF_arc_graphics_GL20_GL_LINEAR;
jint SF_arc_graphics_GL20_GL_NEAREST_MIPMAP_NEAREST;
jint SF_arc_graphics_GL20_GL_LINEAR_MIPMAP_NEAREST;
jint SF_arc_graphics_GL20_GL_NEAREST_MIPMAP_LINEAR;
jint SF_arc_graphics_GL20_GL_LINEAR_MIPMAP_LINEAR;
jint SF_arc_graphics_GL20_GL_TEXTURE_MAG_FILTER;
jint SF_arc_graphics_GL20_GL_TEXTURE_MIN_FILTER;
jint SF_arc_graphics_GL20_GL_TEXTURE_WRAP_S;
jint SF_arc_graphics_GL20_GL_TEXTURE_WRAP_T;
jint SF_arc_graphics_GL20_GL_TEXTURE;
jint SF_arc_graphics_GL20_GL_TEXTURE_CUBE_MAP;
jint SF_arc_graphics_GL20_GL_TEXTURE_BINDING_CUBE_MAP;
jint SF_arc_graphics_GL20_GL_TEXTURE_CUBE_MAP_POSITIVE_X;
jint SF_arc_graphics_GL20_GL_TEXTURE_CUBE_MAP_NEGATIVE_X;
jint SF_arc_graphics_GL20_GL_TEXTURE_CUBE_MAP_POSITIVE_Y;
jint SF_arc_graphics_GL20_GL_TEXTURE_CUBE_MAP_NEGATIVE_Y;
jint SF_arc_graphics_GL20_GL_TEXTURE_CUBE_MAP_POSITIVE_Z;
jint SF_arc_graphics_GL20_GL_TEXTURE_CUBE_MAP_NEGATIVE_Z;
jint SF_arc_graphics_GL20_GL_MAX_CUBE_MAP_TEXTURE_SIZE;
jint SF_arc_graphics_GL20_GL_TEXTURE0;
jint SF_arc_graphics_GL20_GL_TEXTURE1;
jint SF_arc_graphics_GL20_GL_TEXTURE2;
jint SF_arc_graphics_GL20_GL_TEXTURE3;
jint SF_arc_graphics_GL20_GL_TEXTURE4;
jint SF_arc_graphics_GL20_GL_TEXTURE5;
jint SF_arc_graphics_GL20_GL_TEXTURE6;
jint SF_arc_graphics_GL20_GL_TEXTURE7;
jint SF_arc_graphics_GL20_GL_TEXTURE8;
jint SF_arc_graphics_GL20_GL_TEXTURE9;
jint SF_arc_graphics_GL20_GL_TEXTURE10;
jint SF_arc_graphics_GL20_GL_TEXTURE11;
jint SF_arc_graphics_GL20_GL_TEXTURE12;
jint SF_arc_graphics_GL20_GL_TEXTURE13;
jint SF_arc_graphics_GL20_GL_TEXTURE14;
jint SF_arc_graphics_GL20_GL_TEXTURE15;
jint SF_arc_graphics_GL20_GL_TEXTURE16;
jint SF_arc_graphics_GL20_GL_TEXTURE17;
jint SF_arc_graphics_GL20_GL_TEXTURE18;
jint SF_arc_graphics_GL20_GL_TEXTURE19;
jint SF_arc_graphics_GL20_GL_TEXTURE20;
jint SF_arc_graphics_GL20_GL_TEXTURE21;
jint SF_arc_graphics_GL20_GL_TEXTURE22;
jint SF_arc_graphics_GL20_GL_TEXTURE23;
jint SF_arc_graphics_GL20_GL_TEXTURE24;
jint SF_arc_graphics_GL20_GL_TEXTURE25;
jint SF_arc_graphics_GL20_GL_TEXTURE26;
jint SF_arc_graphics_GL20_GL_TEXTURE27;
jint SF_arc_graphics_GL20_GL_TEXTURE28;
jint SF_arc_graphics_GL20_GL_TEXTURE29;
jint SF_arc_graphics_GL20_GL_TEXTURE30;
jint SF_arc_graphics_GL20_GL_TEXTURE31;
jint SF_arc_graphics_GL20_GL_ACTIVE_TEXTURE;
jint SF_arc_graphics_GL20_GL_REPEAT;
jint SF_arc_graphics_GL20_GL_CLAMP_TO_EDGE;
jint SF_arc_graphics_GL20_GL_MIRRORED_REPEAT;
jint SF_arc_graphics_GL20_GL_FLOAT_VEC2;
jint SF_arc_graphics_GL20_GL_FLOAT_VEC3;
jint SF_arc_graphics_GL20_GL_FLOAT_VEC4;
jint SF_arc_graphics_GL20_GL_INT_VEC2;
jint SF_arc_graphics_GL20_GL_INT_VEC3;
jint SF_arc_graphics_GL20_GL_INT_VEC4;
jint SF_arc_graphics_GL20_GL_BOOL;
jint SF_arc_graphics_GL20_GL_BOOL_VEC2;
jint SF_arc_graphics_GL20_GL_BOOL_VEC3;
jint SF_arc_graphics_GL20_GL_BOOL_VEC4;
jint SF_arc_graphics_GL20_GL_FLOAT_MAT2;
jint SF_arc_graphics_GL20_GL_FLOAT_MAT3;
jint SF_arc_graphics_GL20_GL_FLOAT_MAT4;
jint SF_arc_graphics_GL20_GL_SAMPLER_2D;
jint SF_arc_graphics_GL20_GL_SAMPLER_CUBE;
jint SF_arc_graphics_GL20_GL_VERTEX_ATTRIB_ARRAY_ENABLED;
jint SF_arc_graphics_GL20_GL_VERTEX_ATTRIB_ARRAY_SIZE;
jint SF_arc_graphics_GL20_GL_VERTEX_ATTRIB_ARRAY_STRIDE;
jint SF_arc_graphics_GL20_GL_VERTEX_ATTRIB_ARRAY_TYPE;
jint SF_arc_graphics_GL20_GL_VERTEX_ATTRIB_ARRAY_NORMALIZED;
jint SF_arc_graphics_GL20_GL_VERTEX_ATTRIB_ARRAY_POINTER;
jint SF_arc_graphics_GL20_GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING;
jint SF_arc_graphics_GL20_GL_IMPLEMENTATION_COLOR_READ_TYPE;
jint SF_arc_graphics_GL20_GL_IMPLEMENTATION_COLOR_READ_FORMAT;
jint SF_arc_graphics_GL20_GL_COMPILE_STATUS;
jint SF_arc_graphics_GL20_GL_INFO_LOG_LENGTH;
jint SF_arc_graphics_GL20_GL_SHADER_SOURCE_LENGTH;
jint SF_arc_graphics_GL20_GL_SHADER_COMPILER;
jint SF_arc_graphics_GL20_GL_SHADER_BINARY_FORMATS;
jint SF_arc_graphics_GL20_GL_NUM_SHADER_BINARY_FORMATS;
jint SF_arc_graphics_GL20_GL_LOW_FLOAT;
jint SF_arc_graphics_GL20_GL_MEDIUM_FLOAT;
jint SF_arc_graphics_GL20_GL_HIGH_FLOAT;
jint SF_arc_graphics_GL20_GL_LOW_INT;
jint SF_arc_graphics_GL20_GL_MEDIUM_INT;
jint SF_arc_graphics_GL20_GL_HIGH_INT;
jint SF_arc_graphics_GL20_GL_FRAMEBUFFER;
jint SF_arc_graphics_GL20_GL_RENDERBUFFER;
jint SF_arc_graphics_GL20_GL_RGBA4;
jint SF_arc_graphics_GL20_GL_RGB5_A1;
jint SF_arc_graphics_GL20_GL_RGB565;
jint SF_arc_graphics_GL20_GL_DEPTH_COMPONENT16;
jint SF_arc_graphics_GL20_GL_STENCIL_INDEX;
jint SF_arc_graphics_GL20_GL_STENCIL_INDEX8;
jint SF_arc_graphics_GL20_GL_RENDERBUFFER_WIDTH;
jint SF_arc_graphics_GL20_GL_RENDERBUFFER_HEIGHT;
jint SF_arc_graphics_GL20_GL_RENDERBUFFER_INTERNAL_FORMAT;
jint SF_arc_graphics_GL20_GL_RENDERBUFFER_RED_SIZE;
jint SF_arc_graphics_GL20_GL_RENDERBUFFER_GREEN_SIZE;
jint SF_arc_graphics_GL20_GL_RENDERBUFFER_BLUE_SIZE;
jint SF_arc_graphics_GL20_GL_RENDERBUFFER_ALPHA_SIZE;
jint SF_arc_graphics_GL20_GL_RENDERBUFFER_DEPTH_SIZE;
jint SF_arc_graphics_GL20_GL_RENDERBUFFER_STENCIL_SIZE;
jint SF_arc_graphics_GL20_GL_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE;
jint SF_arc_graphics_GL20_GL_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME;
jint SF_arc_graphics_GL20_GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL;
jint SF_arc_graphics_GL20_GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE;
jint SF_arc_graphics_GL20_GL_COLOR_ATTACHMENT0;
jint SF_arc_graphics_GL20_GL_DEPTH_ATTACHMENT;
jint SF_arc_graphics_GL20_GL_STENCIL_ATTACHMENT;
jint SF_arc_graphics_GL20_GL_NONE;
jint SF_arc_graphics_GL20_GL_FRAMEBUFFER_COMPLETE;
jint SF_arc_graphics_GL20_GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT;
jint SF_arc_graphics_GL20_GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT;
jint SF_arc_graphics_GL20_GL_FRAMEBUFFER_INCOMPLETE_DIMENSIONS;
jint SF_arc_graphics_GL20_GL_FRAMEBUFFER_UNSUPPORTED;
jint SF_arc_graphics_GL20_GL_FRAMEBUFFER_BINDING;
jint SF_arc_graphics_GL20_GL_RENDERBUFFER_BINDING;
jint SF_arc_graphics_GL20_GL_MAX_RENDERBUFFER_SIZE;
jint SF_arc_graphics_GL20_GL_INVALID_FRAMEBUFFER_OPERATION;
jint SF_arc_graphics_GL20_GL_VERTEX_PROGRAM_POINT_SIZE;
jint SF_arc_graphics_GL20_GL_COVERAGE_BUFFER_BIT_NV;
jint SF_arc_graphics_GL20_GL_TEXTURE_MAX_ANISOTROPY_EXT;
jint SF_arc_graphics_GL20_GL_MAX_TEXTURE_MAX_ANISOTROPY_EXT;

void mark_arc_graphics_GL20(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (arc_graphics_GL20 *) object;
}

void clinit_arc_graphics_GL20(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_arc_graphics_GL20_GL_ES_VERSION_2_0 = jint(1);
	SF_arc_graphics_GL20_GL_DEPTH_BUFFER_BIT = jint(256);
	SF_arc_graphics_GL20_GL_STENCIL_BUFFER_BIT = jint(1024);
	SF_arc_graphics_GL20_GL_COLOR_BUFFER_BIT = jint(16384);
	SF_arc_graphics_GL20_GL_FALSE = jint(0);
	SF_arc_graphics_GL20_GL_TRUE = jint(1);
	SF_arc_graphics_GL20_GL_POINTS = jint(0);
	SF_arc_graphics_GL20_GL_LINES = jint(1);
	SF_arc_graphics_GL20_GL_LINE_LOOP = jint(2);
	SF_arc_graphics_GL20_GL_LINE_STRIP = jint(3);
	SF_arc_graphics_GL20_GL_TRIANGLES = jint(4);
	SF_arc_graphics_GL20_GL_TRIANGLE_STRIP = jint(5);
	SF_arc_graphics_GL20_GL_TRIANGLE_FAN = jint(6);
	SF_arc_graphics_GL20_GL_ZERO = jint(0);
	SF_arc_graphics_GL20_GL_ONE = jint(1);
	SF_arc_graphics_GL20_GL_SRC_COLOR = jint(768);
	SF_arc_graphics_GL20_GL_ONE_MINUS_SRC_COLOR = jint(769);
	SF_arc_graphics_GL20_GL_SRC_ALPHA = jint(770);
	SF_arc_graphics_GL20_GL_ONE_MINUS_SRC_ALPHA = jint(771);
	SF_arc_graphics_GL20_GL_DST_ALPHA = jint(772);
	SF_arc_graphics_GL20_GL_ONE_MINUS_DST_ALPHA = jint(773);
	SF_arc_graphics_GL20_GL_DST_COLOR = jint(774);
	SF_arc_graphics_GL20_GL_ONE_MINUS_DST_COLOR = jint(775);
	SF_arc_graphics_GL20_GL_SRC_ALPHA_SATURATE = jint(776);
	SF_arc_graphics_GL20_GL_FUNC_ADD = jint(32774);
	SF_arc_graphics_GL20_GL_BLEND_EQUATION = jint(32777);
	SF_arc_graphics_GL20_GL_BLEND_EQUATION_RGB = jint(32777);
	SF_arc_graphics_GL20_GL_BLEND_EQUATION_ALPHA = jint(34877);
	SF_arc_graphics_GL20_GL_FUNC_SUBTRACT = jint(32778);
	SF_arc_graphics_GL20_GL_FUNC_REVERSE_SUBTRACT = jint(32779);
	SF_arc_graphics_GL20_GL_BLEND_DST_RGB = jint(32968);
	SF_arc_graphics_GL20_GL_BLEND_SRC_RGB = jint(32969);
	SF_arc_graphics_GL20_GL_BLEND_DST_ALPHA = jint(32970);
	SF_arc_graphics_GL20_GL_BLEND_SRC_ALPHA = jint(32971);
	SF_arc_graphics_GL20_GL_CONSTANT_COLOR = jint(32769);
	SF_arc_graphics_GL20_GL_ONE_MINUS_CONSTANT_COLOR = jint(32770);
	SF_arc_graphics_GL20_GL_CONSTANT_ALPHA = jint(32771);
	SF_arc_graphics_GL20_GL_ONE_MINUS_CONSTANT_ALPHA = jint(32772);
	SF_arc_graphics_GL20_GL_BLEND_COLOR = jint(32773);
	SF_arc_graphics_GL20_GL_ARRAY_BUFFER = jint(34962);
	SF_arc_graphics_GL20_GL_ELEMENT_ARRAY_BUFFER = jint(34963);
	SF_arc_graphics_GL20_GL_ARRAY_BUFFER_BINDING = jint(34964);
	SF_arc_graphics_GL20_GL_ELEMENT_ARRAY_BUFFER_BINDING = jint(34965);
	SF_arc_graphics_GL20_GL_STREAM_DRAW = jint(35040);
	SF_arc_graphics_GL20_GL_STATIC_DRAW = jint(35044);
	SF_arc_graphics_GL20_GL_DYNAMIC_DRAW = jint(35048);
	SF_arc_graphics_GL20_GL_BUFFER_SIZE = jint(34660);
	SF_arc_graphics_GL20_GL_BUFFER_USAGE = jint(34661);
	SF_arc_graphics_GL20_GL_CURRENT_VERTEX_ATTRIB = jint(34342);
	SF_arc_graphics_GL20_GL_FRONT = jint(1028);
	SF_arc_graphics_GL20_GL_BACK = jint(1029);
	SF_arc_graphics_GL20_GL_FRONT_AND_BACK = jint(1032);
	SF_arc_graphics_GL20_GL_TEXTURE_2D = jint(3553);
	SF_arc_graphics_GL20_GL_CULL_FACE = jint(2884);
	SF_arc_graphics_GL20_GL_BLEND = jint(3042);
	SF_arc_graphics_GL20_GL_DITHER = jint(3024);
	SF_arc_graphics_GL20_GL_STENCIL_TEST = jint(2960);
	SF_arc_graphics_GL20_GL_DEPTH_TEST = jint(2929);
	SF_arc_graphics_GL20_GL_SCISSOR_TEST = jint(3089);
	SF_arc_graphics_GL20_GL_POLYGON_OFFSET_FILL = jint(32823);
	SF_arc_graphics_GL20_GL_SAMPLE_ALPHA_TO_COVERAGE = jint(32926);
	SF_arc_graphics_GL20_GL_SAMPLE_COVERAGE = jint(32928);
	SF_arc_graphics_GL20_GL_NO_ERROR = jint(0);
	SF_arc_graphics_GL20_GL_INVALID_ENUM = jint(1280);
	SF_arc_graphics_GL20_GL_INVALID_VALUE = jint(1281);
	SF_arc_graphics_GL20_GL_INVALID_OPERATION = jint(1282);
	SF_arc_graphics_GL20_GL_OUT_OF_MEMORY = jint(1285);
	SF_arc_graphics_GL20_GL_CW = jint(2304);
	SF_arc_graphics_GL20_GL_CCW = jint(2305);
	SF_arc_graphics_GL20_GL_LINE_WIDTH = jint(2849);
	SF_arc_graphics_GL20_GL_ALIASED_POINT_SIZE_RANGE = jint(33901);
	SF_arc_graphics_GL20_GL_ALIASED_LINE_WIDTH_RANGE = jint(33902);
	SF_arc_graphics_GL20_GL_CULL_FACE_MODE = jint(2885);
	SF_arc_graphics_GL20_GL_FRONT_FACE = jint(2886);
	SF_arc_graphics_GL20_GL_DEPTH_RANGE = jint(2928);
	SF_arc_graphics_GL20_GL_DEPTH_WRITEMASK = jint(2930);
	SF_arc_graphics_GL20_GL_DEPTH_CLEAR_VALUE = jint(2931);
	SF_arc_graphics_GL20_GL_DEPTH_FUNC = jint(2932);
	SF_arc_graphics_GL20_GL_STENCIL_CLEAR_VALUE = jint(2961);
	SF_arc_graphics_GL20_GL_STENCIL_FUNC = jint(2962);
	SF_arc_graphics_GL20_GL_STENCIL_FAIL = jint(2964);
	SF_arc_graphics_GL20_GL_STENCIL_PASS_DEPTH_FAIL = jint(2965);
	SF_arc_graphics_GL20_GL_STENCIL_PASS_DEPTH_PASS = jint(2966);
	SF_arc_graphics_GL20_GL_STENCIL_REF = jint(2967);
	SF_arc_graphics_GL20_GL_STENCIL_VALUE_MASK = jint(2963);
	SF_arc_graphics_GL20_GL_STENCIL_WRITEMASK = jint(2968);
	SF_arc_graphics_GL20_GL_STENCIL_BACK_FUNC = jint(34816);
	SF_arc_graphics_GL20_GL_STENCIL_BACK_FAIL = jint(34817);
	SF_arc_graphics_GL20_GL_STENCIL_BACK_PASS_DEPTH_FAIL = jint(34818);
	SF_arc_graphics_GL20_GL_STENCIL_BACK_PASS_DEPTH_PASS = jint(34819);
	SF_arc_graphics_GL20_GL_STENCIL_BACK_REF = jint(36003);
	SF_arc_graphics_GL20_GL_STENCIL_BACK_VALUE_MASK = jint(36004);
	SF_arc_graphics_GL20_GL_STENCIL_BACK_WRITEMASK = jint(36005);
	SF_arc_graphics_GL20_GL_VIEWPORT = jint(2978);
	SF_arc_graphics_GL20_GL_SCISSOR_BOX = jint(3088);
	SF_arc_graphics_GL20_GL_COLOR_CLEAR_VALUE = jint(3106);
	SF_arc_graphics_GL20_GL_COLOR_WRITEMASK = jint(3107);
	SF_arc_graphics_GL20_GL_UNPACK_ALIGNMENT = jint(3317);
	SF_arc_graphics_GL20_GL_PACK_ALIGNMENT = jint(3333);
	SF_arc_graphics_GL20_GL_MAX_TEXTURE_SIZE = jint(3379);
	SF_arc_graphics_GL20_GL_MAX_TEXTURE_UNITS = jint(34018);
	SF_arc_graphics_GL20_GL_MAX_VIEWPORT_DIMS = jint(3386);
	SF_arc_graphics_GL20_GL_SUBPIXEL_BITS = jint(3408);
	SF_arc_graphics_GL20_GL_RED_BITS = jint(3410);
	SF_arc_graphics_GL20_GL_GREEN_BITS = jint(3411);
	SF_arc_graphics_GL20_GL_BLUE_BITS = jint(3412);
	SF_arc_graphics_GL20_GL_ALPHA_BITS = jint(3413);
	SF_arc_graphics_GL20_GL_DEPTH_BITS = jint(3414);
	SF_arc_graphics_GL20_GL_STENCIL_BITS = jint(3415);
	SF_arc_graphics_GL20_GL_POLYGON_OFFSET_UNITS = jint(10752);
	SF_arc_graphics_GL20_GL_POLYGON_OFFSET_FACTOR = jint(32824);
	SF_arc_graphics_GL20_GL_TEXTURE_BINDING_2D = jint(32873);
	SF_arc_graphics_GL20_GL_SAMPLE_BUFFERS = jint(32936);
	SF_arc_graphics_GL20_GL_SAMPLES = jint(32937);
	SF_arc_graphics_GL20_GL_SAMPLE_COVERAGE_VALUE = jint(32938);
	SF_arc_graphics_GL20_GL_SAMPLE_COVERAGE_INVERT = jint(32939);
	SF_arc_graphics_GL20_GL_NUM_COMPRESSED_TEXTURE_FORMATS = jint(34466);
	SF_arc_graphics_GL20_GL_COMPRESSED_TEXTURE_FORMATS = jint(34467);
	SF_arc_graphics_GL20_GL_DONT_CARE = jint(4352);
	SF_arc_graphics_GL20_GL_FASTEST = jint(4353);
	SF_arc_graphics_GL20_GL_NICEST = jint(4354);
	SF_arc_graphics_GL20_GL_GENERATE_MIPMAP = jint(33169);
	SF_arc_graphics_GL20_GL_GENERATE_MIPMAP_HINT = jint(33170);
	SF_arc_graphics_GL20_GL_BYTE = jint(5120);
	SF_arc_graphics_GL20_GL_UNSIGNED_BYTE = jint(5121);
	SF_arc_graphics_GL20_GL_SHORT = jint(5122);
	SF_arc_graphics_GL20_GL_UNSIGNED_SHORT = jint(5123);
	SF_arc_graphics_GL20_GL_INT = jint(5124);
	SF_arc_graphics_GL20_GL_UNSIGNED_INT = jint(5125);
	SF_arc_graphics_GL20_GL_FLOAT = jint(5126);
	SF_arc_graphics_GL20_GL_FIXED = jint(5132);
	SF_arc_graphics_GL20_GL_DEPTH_COMPONENT = jint(6402);
	SF_arc_graphics_GL20_GL_ALPHA = jint(6406);
	SF_arc_graphics_GL20_GL_RGB = jint(6407);
	SF_arc_graphics_GL20_GL_RGBA = jint(6408);
	SF_arc_graphics_GL20_GL_LUMINANCE = jint(6409);
	SF_arc_graphics_GL20_GL_LUMINANCE_ALPHA = jint(6410);
	SF_arc_graphics_GL20_GL_UNSIGNED_SHORT_4_4_4_4 = jint(32819);
	SF_arc_graphics_GL20_GL_UNSIGNED_SHORT_5_5_5_1 = jint(32820);
	SF_arc_graphics_GL20_GL_UNSIGNED_SHORT_5_6_5 = jint(33635);
	SF_arc_graphics_GL20_GL_FRAGMENT_SHADER = jint(35632);
	SF_arc_graphics_GL20_GL_VERTEX_SHADER = jint(35633);
	SF_arc_graphics_GL20_GL_MAX_VERTEX_ATTRIBS = jint(34921);
	SF_arc_graphics_GL20_GL_MAX_VERTEX_UNIFORM_VECTORS = jint(36347);
	SF_arc_graphics_GL20_GL_MAX_VARYING_VECTORS = jint(36348);
	SF_arc_graphics_GL20_GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS = jint(35661);
	SF_arc_graphics_GL20_GL_MAX_VERTEX_TEXTURE_IMAGE_UNITS = jint(35660);
	SF_arc_graphics_GL20_GL_MAX_TEXTURE_IMAGE_UNITS = jint(34930);
	SF_arc_graphics_GL20_GL_MAX_FRAGMENT_UNIFORM_VECTORS = jint(36349);
	SF_arc_graphics_GL20_GL_SHADER_TYPE = jint(35663);
	SF_arc_graphics_GL20_GL_DELETE_STATUS = jint(35712);
	SF_arc_graphics_GL20_GL_LINK_STATUS = jint(35714);
	SF_arc_graphics_GL20_GL_VALIDATE_STATUS = jint(35715);
	SF_arc_graphics_GL20_GL_ATTACHED_SHADERS = jint(35717);
	SF_arc_graphics_GL20_GL_ACTIVE_UNIFORMS = jint(35718);
	SF_arc_graphics_GL20_GL_ACTIVE_UNIFORM_MAX_LENGTH = jint(35719);
	SF_arc_graphics_GL20_GL_ACTIVE_ATTRIBUTES = jint(35721);
	SF_arc_graphics_GL20_GL_ACTIVE_ATTRIBUTE_MAX_LENGTH = jint(35722);
	SF_arc_graphics_GL20_GL_SHADING_LANGUAGE_VERSION = jint(35724);
	SF_arc_graphics_GL20_GL_CURRENT_PROGRAM = jint(35725);
	SF_arc_graphics_GL20_GL_NEVER = jint(512);
	SF_arc_graphics_GL20_GL_LESS = jint(513);
	SF_arc_graphics_GL20_GL_EQUAL = jint(514);
	SF_arc_graphics_GL20_GL_LEQUAL = jint(515);
	SF_arc_graphics_GL20_GL_GREATER = jint(516);
	SF_arc_graphics_GL20_GL_NOTEQUAL = jint(517);
	SF_arc_graphics_GL20_GL_GEQUAL = jint(518);
	SF_arc_graphics_GL20_GL_ALWAYS = jint(519);
	SF_arc_graphics_GL20_GL_KEEP = jint(7680);
	SF_arc_graphics_GL20_GL_REPLACE = jint(7681);
	SF_arc_graphics_GL20_GL_INCR = jint(7682);
	SF_arc_graphics_GL20_GL_DECR = jint(7683);
	SF_arc_graphics_GL20_GL_INVERT = jint(5386);
	SF_arc_graphics_GL20_GL_INCR_WRAP = jint(34055);
	SF_arc_graphics_GL20_GL_DECR_WRAP = jint(34056);
	SF_arc_graphics_GL20_GL_VENDOR = jint(7936);
	SF_arc_graphics_GL20_GL_RENDERER = jint(7937);
	SF_arc_graphics_GL20_GL_VERSION = jint(7938);
	SF_arc_graphics_GL20_GL_EXTENSIONS = jint(7939);
	SF_arc_graphics_GL20_GL_NEAREST = jint(9728);
	SF_arc_graphics_GL20_GL_LINEAR = jint(9729);
	SF_arc_graphics_GL20_GL_NEAREST_MIPMAP_NEAREST = jint(9984);
	SF_arc_graphics_GL20_GL_LINEAR_MIPMAP_NEAREST = jint(9985);
	SF_arc_graphics_GL20_GL_NEAREST_MIPMAP_LINEAR = jint(9986);
	SF_arc_graphics_GL20_GL_LINEAR_MIPMAP_LINEAR = jint(9987);
	SF_arc_graphics_GL20_GL_TEXTURE_MAG_FILTER = jint(10240);
	SF_arc_graphics_GL20_GL_TEXTURE_MIN_FILTER = jint(10241);
	SF_arc_graphics_GL20_GL_TEXTURE_WRAP_S = jint(10242);
	SF_arc_graphics_GL20_GL_TEXTURE_WRAP_T = jint(10243);
	SF_arc_graphics_GL20_GL_TEXTURE = jint(5890);
	SF_arc_graphics_GL20_GL_TEXTURE_CUBE_MAP = jint(34067);
	SF_arc_graphics_GL20_GL_TEXTURE_BINDING_CUBE_MAP = jint(34068);
	SF_arc_graphics_GL20_GL_TEXTURE_CUBE_MAP_POSITIVE_X = jint(34069);
	SF_arc_graphics_GL20_GL_TEXTURE_CUBE_MAP_NEGATIVE_X = jint(34070);
	SF_arc_graphics_GL20_GL_TEXTURE_CUBE_MAP_POSITIVE_Y = jint(34071);
	SF_arc_graphics_GL20_GL_TEXTURE_CUBE_MAP_NEGATIVE_Y = jint(34072);
	SF_arc_graphics_GL20_GL_TEXTURE_CUBE_MAP_POSITIVE_Z = jint(34073);
	SF_arc_graphics_GL20_GL_TEXTURE_CUBE_MAP_NEGATIVE_Z = jint(34074);
	SF_arc_graphics_GL20_GL_MAX_CUBE_MAP_TEXTURE_SIZE = jint(34076);
	SF_arc_graphics_GL20_GL_TEXTURE0 = jint(33984);
	SF_arc_graphics_GL20_GL_TEXTURE1 = jint(33985);
	SF_arc_graphics_GL20_GL_TEXTURE2 = jint(33986);
	SF_arc_graphics_GL20_GL_TEXTURE3 = jint(33987);
	SF_arc_graphics_GL20_GL_TEXTURE4 = jint(33988);
	SF_arc_graphics_GL20_GL_TEXTURE5 = jint(33989);
	SF_arc_graphics_GL20_GL_TEXTURE6 = jint(33990);
	SF_arc_graphics_GL20_GL_TEXTURE7 = jint(33991);
	SF_arc_graphics_GL20_GL_TEXTURE8 = jint(33992);
	SF_arc_graphics_GL20_GL_TEXTURE9 = jint(33993);
	SF_arc_graphics_GL20_GL_TEXTURE10 = jint(33994);
	SF_arc_graphics_GL20_GL_TEXTURE11 = jint(33995);
	SF_arc_graphics_GL20_GL_TEXTURE12 = jint(33996);
	SF_arc_graphics_GL20_GL_TEXTURE13 = jint(33997);
	SF_arc_graphics_GL20_GL_TEXTURE14 = jint(33998);
	SF_arc_graphics_GL20_GL_TEXTURE15 = jint(33999);
	SF_arc_graphics_GL20_GL_TEXTURE16 = jint(34000);
	SF_arc_graphics_GL20_GL_TEXTURE17 = jint(34001);
	SF_arc_graphics_GL20_GL_TEXTURE18 = jint(34002);
	SF_arc_graphics_GL20_GL_TEXTURE19 = jint(34003);
	SF_arc_graphics_GL20_GL_TEXTURE20 = jint(34004);
	SF_arc_graphics_GL20_GL_TEXTURE21 = jint(34005);
	SF_arc_graphics_GL20_GL_TEXTURE22 = jint(34006);
	SF_arc_graphics_GL20_GL_TEXTURE23 = jint(34007);
	SF_arc_graphics_GL20_GL_TEXTURE24 = jint(34008);
	SF_arc_graphics_GL20_GL_TEXTURE25 = jint(34009);
	SF_arc_graphics_GL20_GL_TEXTURE26 = jint(34010);
	SF_arc_graphics_GL20_GL_TEXTURE27 = jint(34011);
	SF_arc_graphics_GL20_GL_TEXTURE28 = jint(34012);
	SF_arc_graphics_GL20_GL_TEXTURE29 = jint(34013);
	SF_arc_graphics_GL20_GL_TEXTURE30 = jint(34014);
	SF_arc_graphics_GL20_GL_TEXTURE31 = jint(34015);
	SF_arc_graphics_GL20_GL_ACTIVE_TEXTURE = jint(34016);
	SF_arc_graphics_GL20_GL_REPEAT = jint(10497);
	SF_arc_graphics_GL20_GL_CLAMP_TO_EDGE = jint(33071);
	SF_arc_graphics_GL20_GL_MIRRORED_REPEAT = jint(33648);
	SF_arc_graphics_GL20_GL_FLOAT_VEC2 = jint(35664);
	SF_arc_graphics_GL20_GL_FLOAT_VEC3 = jint(35665);
	SF_arc_graphics_GL20_GL_FLOAT_VEC4 = jint(35666);
	SF_arc_graphics_GL20_GL_INT_VEC2 = jint(35667);
	SF_arc_graphics_GL20_GL_INT_VEC3 = jint(35668);
	SF_arc_graphics_GL20_GL_INT_VEC4 = jint(35669);
	SF_arc_graphics_GL20_GL_BOOL = jint(35670);
	SF_arc_graphics_GL20_GL_BOOL_VEC2 = jint(35671);
	SF_arc_graphics_GL20_GL_BOOL_VEC3 = jint(35672);
	SF_arc_graphics_GL20_GL_BOOL_VEC4 = jint(35673);
	SF_arc_graphics_GL20_GL_FLOAT_MAT2 = jint(35674);
	SF_arc_graphics_GL20_GL_FLOAT_MAT3 = jint(35675);
	SF_arc_graphics_GL20_GL_FLOAT_MAT4 = jint(35676);
	SF_arc_graphics_GL20_GL_SAMPLER_2D = jint(35678);
	SF_arc_graphics_GL20_GL_SAMPLER_CUBE = jint(35680);
	SF_arc_graphics_GL20_GL_VERTEX_ATTRIB_ARRAY_ENABLED = jint(34338);
	SF_arc_graphics_GL20_GL_VERTEX_ATTRIB_ARRAY_SIZE = jint(34339);
	SF_arc_graphics_GL20_GL_VERTEX_ATTRIB_ARRAY_STRIDE = jint(34340);
	SF_arc_graphics_GL20_GL_VERTEX_ATTRIB_ARRAY_TYPE = jint(34341);
	SF_arc_graphics_GL20_GL_VERTEX_ATTRIB_ARRAY_NORMALIZED = jint(34922);
	SF_arc_graphics_GL20_GL_VERTEX_ATTRIB_ARRAY_POINTER = jint(34373);
	SF_arc_graphics_GL20_GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING = jint(34975);
	SF_arc_graphics_GL20_GL_IMPLEMENTATION_COLOR_READ_TYPE = jint(35738);
	SF_arc_graphics_GL20_GL_IMPLEMENTATION_COLOR_READ_FORMAT = jint(35739);
	SF_arc_graphics_GL20_GL_COMPILE_STATUS = jint(35713);
	SF_arc_graphics_GL20_GL_INFO_LOG_LENGTH = jint(35716);
	SF_arc_graphics_GL20_GL_SHADER_SOURCE_LENGTH = jint(35720);
	SF_arc_graphics_GL20_GL_SHADER_COMPILER = jint(36346);
	SF_arc_graphics_GL20_GL_SHADER_BINARY_FORMATS = jint(36344);
	SF_arc_graphics_GL20_GL_NUM_SHADER_BINARY_FORMATS = jint(36345);
	SF_arc_graphics_GL20_GL_LOW_FLOAT = jint(36336);
	SF_arc_graphics_GL20_GL_MEDIUM_FLOAT = jint(36337);
	SF_arc_graphics_GL20_GL_HIGH_FLOAT = jint(36338);
	SF_arc_graphics_GL20_GL_LOW_INT = jint(36339);
	SF_arc_graphics_GL20_GL_MEDIUM_INT = jint(36340);
	SF_arc_graphics_GL20_GL_HIGH_INT = jint(36341);
	SF_arc_graphics_GL20_GL_FRAMEBUFFER = jint(36160);
	SF_arc_graphics_GL20_GL_RENDERBUFFER = jint(36161);
	SF_arc_graphics_GL20_GL_RGBA4 = jint(32854);
	SF_arc_graphics_GL20_GL_RGB5_A1 = jint(32855);
	SF_arc_graphics_GL20_GL_RGB565 = jint(36194);
	SF_arc_graphics_GL20_GL_DEPTH_COMPONENT16 = jint(33189);
	SF_arc_graphics_GL20_GL_STENCIL_INDEX = jint(6401);
	SF_arc_graphics_GL20_GL_STENCIL_INDEX8 = jint(36168);
	SF_arc_graphics_GL20_GL_RENDERBUFFER_WIDTH = jint(36162);
	SF_arc_graphics_GL20_GL_RENDERBUFFER_HEIGHT = jint(36163);
	SF_arc_graphics_GL20_GL_RENDERBUFFER_INTERNAL_FORMAT = jint(36164);
	SF_arc_graphics_GL20_GL_RENDERBUFFER_RED_SIZE = jint(36176);
	SF_arc_graphics_GL20_GL_RENDERBUFFER_GREEN_SIZE = jint(36177);
	SF_arc_graphics_GL20_GL_RENDERBUFFER_BLUE_SIZE = jint(36178);
	SF_arc_graphics_GL20_GL_RENDERBUFFER_ALPHA_SIZE = jint(36179);
	SF_arc_graphics_GL20_GL_RENDERBUFFER_DEPTH_SIZE = jint(36180);
	SF_arc_graphics_GL20_GL_RENDERBUFFER_STENCIL_SIZE = jint(36181);
	SF_arc_graphics_GL20_GL_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE = jint(36048);
	SF_arc_graphics_GL20_GL_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME = jint(36049);
	SF_arc_graphics_GL20_GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL = jint(36050);
	SF_arc_graphics_GL20_GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE = jint(36051);
	SF_arc_graphics_GL20_GL_COLOR_ATTACHMENT0 = jint(36064);
	SF_arc_graphics_GL20_GL_DEPTH_ATTACHMENT = jint(36096);
	SF_arc_graphics_GL20_GL_STENCIL_ATTACHMENT = jint(36128);
	SF_arc_graphics_GL20_GL_NONE = jint(0);
	SF_arc_graphics_GL20_GL_FRAMEBUFFER_COMPLETE = jint(36053);
	SF_arc_graphics_GL20_GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT = jint(36054);
	SF_arc_graphics_GL20_GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT = jint(36055);
	SF_arc_graphics_GL20_GL_FRAMEBUFFER_INCOMPLETE_DIMENSIONS = jint(36057);
	SF_arc_graphics_GL20_GL_FRAMEBUFFER_UNSUPPORTED = jint(36061);
	SF_arc_graphics_GL20_GL_FRAMEBUFFER_BINDING = jint(36006);
	SF_arc_graphics_GL20_GL_RENDERBUFFER_BINDING = jint(36007);
	SF_arc_graphics_GL20_GL_MAX_RENDERBUFFER_SIZE = jint(34024);
	SF_arc_graphics_GL20_GL_INVALID_FRAMEBUFFER_OPERATION = jint(1286);
	SF_arc_graphics_GL20_GL_VERTEX_PROGRAM_POINT_SIZE = jint(34370);
	SF_arc_graphics_GL20_GL_COVERAGE_BUFFER_BIT_NV = jint(32768);
	SF_arc_graphics_GL20_GL_TEXTURE_MAX_ANISOTROPY_EXT = jint(34046);
	SF_arc_graphics_GL20_GL_MAX_TEXTURE_MAX_ANISOTROPY_EXT = jint(34047);
}

void *vtable_arc_graphics_GL20[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Object_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
};

static VtableEntry vtableEntries[] {
	{ "hashCode", "()I" },
	{ "equals", "(Ljava/lang/Object;)Z" },
	{ "clone", "()Ljava/lang/Object;" },
	{ "getClass", "()Ljava/lang/Class;" },
	{ "toString", "()Ljava/lang/String;" },
	{ "finalize", "()V" },
	{ "notify", "()V" },
	{ "notifyAll", "()V" },
	{ "wait", "()V" },
	{ "wait", "(J)V" },
	{ "wait", "(JI)V" },
	{ "glActiveTexture", "(I)V" },
	{ "glBindTexture", "(II)V" },
	{ "glBlendFunc", "(II)V" },
	{ "glClear", "(I)V" },
	{ "glClearColor", "(FFFF)V" },
	{ "glClearDepthf", "(F)V" },
	{ "glClearStencil", "(I)V" },
	{ "glColorMask", "(ZZZZ)V" },
	{ "glCompressedTexImage2D", "(IIIIIIILjava/nio/Buffer;)V" },
	{ "glCompressedTexSubImage2D", "(IIIIIIIILjava/nio/Buffer;)V" },
	{ "glCopyTexImage2D", "(IIIIIIII)V" },
	{ "glCopyTexSubImage2D", "(IIIIIIII)V" },
	{ "glCullFace", "(I)V" },
	{ "glDeleteTexture", "(I)V" },
	{ "glDepthFunc", "(I)V" },
	{ "glDepthMask", "(Z)V" },
	{ "glDepthRangef", "(FF)V" },
	{ "glDisable", "(I)V" },
	{ "glDrawArrays", "(III)V" },
	{ "glDrawElements", "(IIILjava/nio/Buffer;)V" },
	{ "glEnable", "(I)V" },
	{ "glFinish", "()V" },
	{ "glFlush", "()V" },
	{ "glFrontFace", "(I)V" },
	{ "glGenTexture", "()I" },
	{ "glGetError", "()I" },
	{ "glGetIntegerv", "(ILjava/nio/IntBuffer;)V" },
	{ "glGetString", "(I)Ljava/lang/String;" },
	{ "glHint", "(II)V" },
	{ "glLineWidth", "(F)V" },
	{ "glPixelStorei", "(II)V" },
	{ "glPolygonOffset", "(FF)V" },
	{ "glReadPixels", "(IIIIIILjava/nio/Buffer;)V" },
	{ "glScissor", "(IIII)V" },
	{ "glStencilFunc", "(III)V" },
	{ "glStencilMask", "(I)V" },
	{ "glStencilOp", "(III)V" },
	{ "glTexImage2D", "(IIIIIIIILjava/nio/Buffer;)V" },
	{ "glTexParameterf", "(IIF)V" },
	{ "glTexSubImage2D", "(IIIIIIIILjava/nio/Buffer;)V" },
	{ "glViewport", "(IIII)V" },
	{ "glAttachShader", "(II)V" },
	{ "glBindAttribLocation", "(IILjava/lang/String;)V" },
	{ "glBindBuffer", "(II)V" },
	{ "glBindFramebuffer", "(II)V" },
	{ "glBindRenderbuffer", "(II)V" },
	{ "glBlendColor", "(FFFF)V" },
	{ "glBlendEquation", "(I)V" },
	{ "glBlendEquationSeparate", "(II)V" },
	{ "glBlendFuncSeparate", "(IIII)V" },
	{ "glBufferData", "(IILjava/nio/Buffer;I)V" },
	{ "glBufferSubData", "(IIILjava/nio/Buffer;)V" },
	{ "glCheckFramebufferStatus", "(I)I" },
	{ "glCompileShader", "(I)V" },
	{ "glCreateProgram", "()I" },
	{ "glCreateShader", "(I)I" },
	{ "glDeleteBuffer", "(I)V" },
	{ "glDeleteFramebuffer", "(I)V" },
	{ "glDeleteProgram", "(I)V" },
	{ "glDeleteRenderbuffer", "(I)V" },
	{ "glDeleteShader", "(I)V" },
	{ "glDetachShader", "(II)V" },
	{ "glDisableVertexAttribArray", "(I)V" },
	{ "glDrawElements", "(IIII)V" },
	{ "glEnableVertexAttribArray", "(I)V" },
	{ "glFramebufferRenderbuffer", "(IIII)V" },
	{ "glFramebufferTexture2D", "(IIIII)V" },
	{ "glGenBuffer", "()I" },
	{ "glGenerateMipmap", "(I)V" },
	{ "glGenFramebuffer", "()I" },
	{ "glGenRenderbuffer", "()I" },
	{ "glGetActiveAttrib", "(IILjava/nio/IntBuffer;Ljava/nio/IntBuffer;)Ljava/lang/String;" },
	{ "glGetActiveUniform", "(IILjava/nio/IntBuffer;Ljava/nio/IntBuffer;)Ljava/lang/String;" },
	{ "glGetAttribLocation", "(ILjava/lang/String;)I" },
	{ "glGetBooleanv", "(ILjava/nio/Buffer;)V" },
	{ "glGetBufferParameteriv", "(IILjava/nio/IntBuffer;)V" },
	{ "glGetFloatv", "(ILjava/nio/FloatBuffer;)V" },
	{ "glGetFramebufferAttachmentParameteriv", "(IIILjava/nio/IntBuffer;)V" },
	{ "glGetProgramiv", "(IILjava/nio/IntBuffer;)V" },
	{ "glGetProgramInfoLog", "(I)Ljava/lang/String;" },
	{ "glGetRenderbufferParameteriv", "(IILjava/nio/IntBuffer;)V" },
	{ "glGetShaderiv", "(IILjava/nio/IntBuffer;)V" },
	{ "glGetShaderInfoLog", "(I)Ljava/lang/String;" },
	{ "glGetShaderPrecisionFormat", "(IILjava/nio/IntBuffer;Ljava/nio/IntBuffer;)V" },
	{ "glGetTexParameterfv", "(IILjava/nio/FloatBuffer;)V" },
	{ "glGetTexParameteriv", "(IILjava/nio/IntBuffer;)V" },
	{ "glGetUniformfv", "(IILjava/nio/FloatBuffer;)V" },
	{ "glGetUniformiv", "(IILjava/nio/IntBuffer;)V" },
	{ "glGetUniformLocation", "(ILjava/lang/String;)I" },
	{ "glGetVertexAttribfv", "(IILjava/nio/FloatBuffer;)V" },
	{ "glGetVertexAttribiv", "(IILjava/nio/IntBuffer;)V" },
	{ "glIsBuffer", "(I)Z" },
	{ "glIsEnabled", "(I)Z" },
	{ "glIsFramebuffer", "(I)Z" },
	{ "glIsProgram", "(I)Z" },
	{ "glIsRenderbuffer", "(I)Z" },
	{ "glIsShader", "(I)Z" },
	{ "glIsTexture", "(I)Z" },
	{ "glLinkProgram", "(I)V" },
	{ "glReleaseShaderCompiler", "()V" },
	{ "glRenderbufferStorage", "(IIII)V" },
	{ "glSampleCoverage", "(FZ)V" },
	{ "glShaderSource", "(ILjava/lang/String;)V" },
	{ "glStencilFuncSeparate", "(IIII)V" },
	{ "glStencilMaskSeparate", "(II)V" },
	{ "glStencilOpSeparate", "(IIII)V" },
	{ "glTexParameterfv", "(IILjava/nio/FloatBuffer;)V" },
	{ "glTexParameteri", "(III)V" },
	{ "glTexParameteriv", "(IILjava/nio/IntBuffer;)V" },
	{ "glUniform1f", "(IF)V" },
	{ "glUniform1fv", "(IILjava/nio/FloatBuffer;)V" },
	{ "glUniform1fv", "(II[FI)V" },
	{ "glUniform1i", "(II)V" },
	{ "glUniform1iv", "(IILjava/nio/IntBuffer;)V" },
	{ "glUniform1iv", "(II[II)V" },
	{ "glUniform2f", "(IFF)V" },
	{ "glUniform2fv", "(IILjava/nio/FloatBuffer;)V" },
	{ "glUniform2fv", "(II[FI)V" },
	{ "glUniform2i", "(III)V" },
	{ "glUniform2iv", "(IILjava/nio/IntBuffer;)V" },
	{ "glUniform2iv", "(II[II)V" },
	{ "glUniform3f", "(IFFF)V" },
	{ "glUniform3fv", "(IILjava/nio/FloatBuffer;)V" },
	{ "glUniform3fv", "(II[FI)V" },
	{ "glUniform3i", "(IIII)V" },
	{ "glUniform3iv", "(IILjava/nio/IntBuffer;)V" },
	{ "glUniform3iv", "(II[II)V" },
	{ "glUniform4f", "(IFFFF)V" },
	{ "glUniform4fv", "(IILjava/nio/FloatBuffer;)V" },
	{ "glUniform4fv", "(II[FI)V" },
	{ "glUniform4i", "(IIIII)V" },
	{ "glUniform4iv", "(IILjava/nio/IntBuffer;)V" },
	{ "glUniform4iv", "(II[II)V" },
	{ "glUniformMatrix2fv", "(IIZLjava/nio/FloatBuffer;)V" },
	{ "glUniformMatrix2fv", "(IIZ[FI)V" },
	{ "glUniformMatrix3fv", "(IIZLjava/nio/FloatBuffer;)V" },
	{ "glUniformMatrix3fv", "(IIZ[FI)V" },
	{ "glUniformMatrix4fv", "(IIZLjava/nio/FloatBuffer;)V" },
	{ "glUniformMatrix4fv", "(IIZ[FI)V" },
	{ "glUseProgram", "(I)V" },
	{ "glValidateProgram", "(I)V" },
	{ "glVertexAttrib1f", "(IF)V" },
	{ "glVertexAttrib1fv", "(ILjava/nio/FloatBuffer;)V" },
	{ "glVertexAttrib2f", "(IFF)V" },
	{ "glVertexAttrib2fv", "(ILjava/nio/FloatBuffer;)V" },
	{ "glVertexAttrib3f", "(IFFF)V" },
	{ "glVertexAttrib3fv", "(ILjava/nio/FloatBuffer;)V" },
	{ "glVertexAttrib4f", "(IFFFF)V" },
	{ "glVertexAttrib4fv", "(ILjava/nio/FloatBuffer;)V" },
	{ "glVertexAttribPointer", "(IIIZILjava/nio/Buffer;)V" },
	{ "glVertexAttribPointer", "(IIIZII)V" },
};

static FieldMetadata fields[] {
	{ "GL_ES_VERSION_2_0", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_ES_VERSION_2_0, "I", 25 },
	{ "GL_DEPTH_BUFFER_BIT", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_DEPTH_BUFFER_BIT, "I", 25 },
	{ "GL_STENCIL_BUFFER_BIT", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_STENCIL_BUFFER_BIT, "I", 25 },
	{ "GL_COLOR_BUFFER_BIT", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_COLOR_BUFFER_BIT, "I", 25 },
	{ "GL_FALSE", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_FALSE, "I", 25 },
	{ "GL_TRUE", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_TRUE, "I", 25 },
	{ "GL_POINTS", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_POINTS, "I", 25 },
	{ "GL_LINES", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_LINES, "I", 25 },
	{ "GL_LINE_LOOP", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_LINE_LOOP, "I", 25 },
	{ "GL_LINE_STRIP", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_LINE_STRIP, "I", 25 },
	{ "GL_TRIANGLES", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_TRIANGLES, "I", 25 },
	{ "GL_TRIANGLE_STRIP", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_TRIANGLE_STRIP, "I", 25 },
	{ "GL_TRIANGLE_FAN", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_TRIANGLE_FAN, "I", 25 },
	{ "GL_ZERO", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_ZERO, "I", 25 },
	{ "GL_ONE", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_ONE, "I", 25 },
	{ "GL_SRC_COLOR", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_SRC_COLOR, "I", 25 },
	{ "GL_ONE_MINUS_SRC_COLOR", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_ONE_MINUS_SRC_COLOR, "I", 25 },
	{ "GL_SRC_ALPHA", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_SRC_ALPHA, "I", 25 },
	{ "GL_ONE_MINUS_SRC_ALPHA", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_ONE_MINUS_SRC_ALPHA, "I", 25 },
	{ "GL_DST_ALPHA", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_DST_ALPHA, "I", 25 },
	{ "GL_ONE_MINUS_DST_ALPHA", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_ONE_MINUS_DST_ALPHA, "I", 25 },
	{ "GL_DST_COLOR", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_DST_COLOR, "I", 25 },
	{ "GL_ONE_MINUS_DST_COLOR", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_ONE_MINUS_DST_COLOR, "I", 25 },
	{ "GL_SRC_ALPHA_SATURATE", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_SRC_ALPHA_SATURATE, "I", 25 },
	{ "GL_FUNC_ADD", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_FUNC_ADD, "I", 25 },
	{ "GL_BLEND_EQUATION", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_BLEND_EQUATION, "I", 25 },
	{ "GL_BLEND_EQUATION_RGB", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_BLEND_EQUATION_RGB, "I", 25 },
	{ "GL_BLEND_EQUATION_ALPHA", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_BLEND_EQUATION_ALPHA, "I", 25 },
	{ "GL_FUNC_SUBTRACT", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_FUNC_SUBTRACT, "I", 25 },
	{ "GL_FUNC_REVERSE_SUBTRACT", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_FUNC_REVERSE_SUBTRACT, "I", 25 },
	{ "GL_BLEND_DST_RGB", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_BLEND_DST_RGB, "I", 25 },
	{ "GL_BLEND_SRC_RGB", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_BLEND_SRC_RGB, "I", 25 },
	{ "GL_BLEND_DST_ALPHA", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_BLEND_DST_ALPHA, "I", 25 },
	{ "GL_BLEND_SRC_ALPHA", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_BLEND_SRC_ALPHA, "I", 25 },
	{ "GL_CONSTANT_COLOR", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_CONSTANT_COLOR, "I", 25 },
	{ "GL_ONE_MINUS_CONSTANT_COLOR", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_ONE_MINUS_CONSTANT_COLOR, "I", 25 },
	{ "GL_CONSTANT_ALPHA", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_CONSTANT_ALPHA, "I", 25 },
	{ "GL_ONE_MINUS_CONSTANT_ALPHA", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_ONE_MINUS_CONSTANT_ALPHA, "I", 25 },
	{ "GL_BLEND_COLOR", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_BLEND_COLOR, "I", 25 },
	{ "GL_ARRAY_BUFFER", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_ARRAY_BUFFER, "I", 25 },
	{ "GL_ELEMENT_ARRAY_BUFFER", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_ELEMENT_ARRAY_BUFFER, "I", 25 },
	{ "GL_ARRAY_BUFFER_BINDING", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_ARRAY_BUFFER_BINDING, "I", 25 },
	{ "GL_ELEMENT_ARRAY_BUFFER_BINDING", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_ELEMENT_ARRAY_BUFFER_BINDING, "I", 25 },
	{ "GL_STREAM_DRAW", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_STREAM_DRAW, "I", 25 },
	{ "GL_STATIC_DRAW", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_STATIC_DRAW, "I", 25 },
	{ "GL_DYNAMIC_DRAW", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_DYNAMIC_DRAW, "I", 25 },
	{ "GL_BUFFER_SIZE", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_BUFFER_SIZE, "I", 25 },
	{ "GL_BUFFER_USAGE", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_BUFFER_USAGE, "I", 25 },
	{ "GL_CURRENT_VERTEX_ATTRIB", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_CURRENT_VERTEX_ATTRIB, "I", 25 },
	{ "GL_FRONT", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_FRONT, "I", 25 },
	{ "GL_BACK", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_BACK, "I", 25 },
	{ "GL_FRONT_AND_BACK", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_FRONT_AND_BACK, "I", 25 },
	{ "GL_TEXTURE_2D", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_TEXTURE_2D, "I", 25 },
	{ "GL_CULL_FACE", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_CULL_FACE, "I", 25 },
	{ "GL_BLEND", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_BLEND, "I", 25 },
	{ "GL_DITHER", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_DITHER, "I", 25 },
	{ "GL_STENCIL_TEST", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_STENCIL_TEST, "I", 25 },
	{ "GL_DEPTH_TEST", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_DEPTH_TEST, "I", 25 },
	{ "GL_SCISSOR_TEST", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_SCISSOR_TEST, "I", 25 },
	{ "GL_POLYGON_OFFSET_FILL", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_POLYGON_OFFSET_FILL, "I", 25 },
	{ "GL_SAMPLE_ALPHA_TO_COVERAGE", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_SAMPLE_ALPHA_TO_COVERAGE, "I", 25 },
	{ "GL_SAMPLE_COVERAGE", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_SAMPLE_COVERAGE, "I", 25 },
	{ "GL_NO_ERROR", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_NO_ERROR, "I", 25 },
	{ "GL_INVALID_ENUM", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_INVALID_ENUM, "I", 25 },
	{ "GL_INVALID_VALUE", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_INVALID_VALUE, "I", 25 },
	{ "GL_INVALID_OPERATION", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_INVALID_OPERATION, "I", 25 },
	{ "GL_OUT_OF_MEMORY", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_OUT_OF_MEMORY, "I", 25 },
	{ "GL_CW", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_CW, "I", 25 },
	{ "GL_CCW", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_CCW, "I", 25 },
	{ "GL_LINE_WIDTH", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_LINE_WIDTH, "I", 25 },
	{ "GL_ALIASED_POINT_SIZE_RANGE", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_ALIASED_POINT_SIZE_RANGE, "I", 25 },
	{ "GL_ALIASED_LINE_WIDTH_RANGE", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_ALIASED_LINE_WIDTH_RANGE, "I", 25 },
	{ "GL_CULL_FACE_MODE", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_CULL_FACE_MODE, "I", 25 },
	{ "GL_FRONT_FACE", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_FRONT_FACE, "I", 25 },
	{ "GL_DEPTH_RANGE", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_DEPTH_RANGE, "I", 25 },
	{ "GL_DEPTH_WRITEMASK", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_DEPTH_WRITEMASK, "I", 25 },
	{ "GL_DEPTH_CLEAR_VALUE", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_DEPTH_CLEAR_VALUE, "I", 25 },
	{ "GL_DEPTH_FUNC", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_DEPTH_FUNC, "I", 25 },
	{ "GL_STENCIL_CLEAR_VALUE", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_STENCIL_CLEAR_VALUE, "I", 25 },
	{ "GL_STENCIL_FUNC", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_STENCIL_FUNC, "I", 25 },
	{ "GL_STENCIL_FAIL", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_STENCIL_FAIL, "I", 25 },
	{ "GL_STENCIL_PASS_DEPTH_FAIL", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_STENCIL_PASS_DEPTH_FAIL, "I", 25 },
	{ "GL_STENCIL_PASS_DEPTH_PASS", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_STENCIL_PASS_DEPTH_PASS, "I", 25 },
	{ "GL_STENCIL_REF", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_STENCIL_REF, "I", 25 },
	{ "GL_STENCIL_VALUE_MASK", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_STENCIL_VALUE_MASK, "I", 25 },
	{ "GL_STENCIL_WRITEMASK", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_STENCIL_WRITEMASK, "I", 25 },
	{ "GL_STENCIL_BACK_FUNC", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_STENCIL_BACK_FUNC, "I", 25 },
	{ "GL_STENCIL_BACK_FAIL", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_STENCIL_BACK_FAIL, "I", 25 },
	{ "GL_STENCIL_BACK_PASS_DEPTH_FAIL", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_STENCIL_BACK_PASS_DEPTH_FAIL, "I", 25 },
	{ "GL_STENCIL_BACK_PASS_DEPTH_PASS", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_STENCIL_BACK_PASS_DEPTH_PASS, "I", 25 },
	{ "GL_STENCIL_BACK_REF", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_STENCIL_BACK_REF, "I", 25 },
	{ "GL_STENCIL_BACK_VALUE_MASK", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_STENCIL_BACK_VALUE_MASK, "I", 25 },
	{ "GL_STENCIL_BACK_WRITEMASK", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_STENCIL_BACK_WRITEMASK, "I", 25 },
	{ "GL_VIEWPORT", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_VIEWPORT, "I", 25 },
	{ "GL_SCISSOR_BOX", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_SCISSOR_BOX, "I", 25 },
	{ "GL_COLOR_CLEAR_VALUE", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_COLOR_CLEAR_VALUE, "I", 25 },
	{ "GL_COLOR_WRITEMASK", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_COLOR_WRITEMASK, "I", 25 },
	{ "GL_UNPACK_ALIGNMENT", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_UNPACK_ALIGNMENT, "I", 25 },
	{ "GL_PACK_ALIGNMENT", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_PACK_ALIGNMENT, "I", 25 },
	{ "GL_MAX_TEXTURE_SIZE", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_MAX_TEXTURE_SIZE, "I", 25 },
	{ "GL_MAX_TEXTURE_UNITS", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_MAX_TEXTURE_UNITS, "I", 25 },
	{ "GL_MAX_VIEWPORT_DIMS", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_MAX_VIEWPORT_DIMS, "I", 25 },
	{ "GL_SUBPIXEL_BITS", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_SUBPIXEL_BITS, "I", 25 },
	{ "GL_RED_BITS", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_RED_BITS, "I", 25 },
	{ "GL_GREEN_BITS", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_GREEN_BITS, "I", 25 },
	{ "GL_BLUE_BITS", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_BLUE_BITS, "I", 25 },
	{ "GL_ALPHA_BITS", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_ALPHA_BITS, "I", 25 },
	{ "GL_DEPTH_BITS", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_DEPTH_BITS, "I", 25 },
	{ "GL_STENCIL_BITS", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_STENCIL_BITS, "I", 25 },
	{ "GL_POLYGON_OFFSET_UNITS", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_POLYGON_OFFSET_UNITS, "I", 25 },
	{ "GL_POLYGON_OFFSET_FACTOR", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_POLYGON_OFFSET_FACTOR, "I", 25 },
	{ "GL_TEXTURE_BINDING_2D", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_TEXTURE_BINDING_2D, "I", 25 },
	{ "GL_SAMPLE_BUFFERS", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_SAMPLE_BUFFERS, "I", 25 },
	{ "GL_SAMPLES", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_SAMPLES, "I", 25 },
	{ "GL_SAMPLE_COVERAGE_VALUE", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_SAMPLE_COVERAGE_VALUE, "I", 25 },
	{ "GL_SAMPLE_COVERAGE_INVERT", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_SAMPLE_COVERAGE_INVERT, "I", 25 },
	{ "GL_NUM_COMPRESSED_TEXTURE_FORMATS", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_NUM_COMPRESSED_TEXTURE_FORMATS, "I", 25 },
	{ "GL_COMPRESSED_TEXTURE_FORMATS", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_COMPRESSED_TEXTURE_FORMATS, "I", 25 },
	{ "GL_DONT_CARE", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_DONT_CARE, "I", 25 },
	{ "GL_FASTEST", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_FASTEST, "I", 25 },
	{ "GL_NICEST", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_NICEST, "I", 25 },
	{ "GL_GENERATE_MIPMAP", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_GENERATE_MIPMAP, "I", 25 },
	{ "GL_GENERATE_MIPMAP_HINT", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_GENERATE_MIPMAP_HINT, "I", 25 },
	{ "GL_BYTE", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_BYTE, "I", 25 },
	{ "GL_UNSIGNED_BYTE", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_UNSIGNED_BYTE, "I", 25 },
	{ "GL_SHORT", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_SHORT, "I", 25 },
	{ "GL_UNSIGNED_SHORT", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_UNSIGNED_SHORT, "I", 25 },
	{ "GL_INT", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_INT, "I", 25 },
	{ "GL_UNSIGNED_INT", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_UNSIGNED_INT, "I", 25 },
	{ "GL_FLOAT", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_FLOAT, "I", 25 },
	{ "GL_FIXED", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_FIXED, "I", 25 },
	{ "GL_DEPTH_COMPONENT", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_DEPTH_COMPONENT, "I", 25 },
	{ "GL_ALPHA", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_ALPHA, "I", 25 },
	{ "GL_RGB", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_RGB, "I", 25 },
	{ "GL_RGBA", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_RGBA, "I", 25 },
	{ "GL_LUMINANCE", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_LUMINANCE, "I", 25 },
	{ "GL_LUMINANCE_ALPHA", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_LUMINANCE_ALPHA, "I", 25 },
	{ "GL_UNSIGNED_SHORT_4_4_4_4", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_UNSIGNED_SHORT_4_4_4_4, "I", 25 },
	{ "GL_UNSIGNED_SHORT_5_5_5_1", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_UNSIGNED_SHORT_5_5_5_1, "I", 25 },
	{ "GL_UNSIGNED_SHORT_5_6_5", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_UNSIGNED_SHORT_5_6_5, "I", 25 },
	{ "GL_FRAGMENT_SHADER", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_FRAGMENT_SHADER, "I", 25 },
	{ "GL_VERTEX_SHADER", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_VERTEX_SHADER, "I", 25 },
	{ "GL_MAX_VERTEX_ATTRIBS", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_MAX_VERTEX_ATTRIBS, "I", 25 },
	{ "GL_MAX_VERTEX_UNIFORM_VECTORS", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_MAX_VERTEX_UNIFORM_VECTORS, "I", 25 },
	{ "GL_MAX_VARYING_VECTORS", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_MAX_VARYING_VECTORS, "I", 25 },
	{ "GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS, "I", 25 },
	{ "GL_MAX_VERTEX_TEXTURE_IMAGE_UNITS", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_MAX_VERTEX_TEXTURE_IMAGE_UNITS, "I", 25 },
	{ "GL_MAX_TEXTURE_IMAGE_UNITS", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_MAX_TEXTURE_IMAGE_UNITS, "I", 25 },
	{ "GL_MAX_FRAGMENT_UNIFORM_VECTORS", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_MAX_FRAGMENT_UNIFORM_VECTORS, "I", 25 },
	{ "GL_SHADER_TYPE", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_SHADER_TYPE, "I", 25 },
	{ "GL_DELETE_STATUS", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_DELETE_STATUS, "I", 25 },
	{ "GL_LINK_STATUS", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_LINK_STATUS, "I", 25 },
	{ "GL_VALIDATE_STATUS", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_VALIDATE_STATUS, "I", 25 },
	{ "GL_ATTACHED_SHADERS", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_ATTACHED_SHADERS, "I", 25 },
	{ "GL_ACTIVE_UNIFORMS", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_ACTIVE_UNIFORMS, "I", 25 },
	{ "GL_ACTIVE_UNIFORM_MAX_LENGTH", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_ACTIVE_UNIFORM_MAX_LENGTH, "I", 25 },
	{ "GL_ACTIVE_ATTRIBUTES", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_ACTIVE_ATTRIBUTES, "I", 25 },
	{ "GL_ACTIVE_ATTRIBUTE_MAX_LENGTH", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_ACTIVE_ATTRIBUTE_MAX_LENGTH, "I", 25 },
	{ "GL_SHADING_LANGUAGE_VERSION", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_SHADING_LANGUAGE_VERSION, "I", 25 },
	{ "GL_CURRENT_PROGRAM", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_CURRENT_PROGRAM, "I", 25 },
	{ "GL_NEVER", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_NEVER, "I", 25 },
	{ "GL_LESS", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_LESS, "I", 25 },
	{ "GL_EQUAL", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_EQUAL, "I", 25 },
	{ "GL_LEQUAL", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_LEQUAL, "I", 25 },
	{ "GL_GREATER", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_GREATER, "I", 25 },
	{ "GL_NOTEQUAL", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_NOTEQUAL, "I", 25 },
	{ "GL_GEQUAL", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_GEQUAL, "I", 25 },
	{ "GL_ALWAYS", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_ALWAYS, "I", 25 },
	{ "GL_KEEP", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_KEEP, "I", 25 },
	{ "GL_REPLACE", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_REPLACE, "I", 25 },
	{ "GL_INCR", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_INCR, "I", 25 },
	{ "GL_DECR", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_DECR, "I", 25 },
	{ "GL_INVERT", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_INVERT, "I", 25 },
	{ "GL_INCR_WRAP", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_INCR_WRAP, "I", 25 },
	{ "GL_DECR_WRAP", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_DECR_WRAP, "I", 25 },
	{ "GL_VENDOR", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_VENDOR, "I", 25 },
	{ "GL_RENDERER", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_RENDERER, "I", 25 },
	{ "GL_VERSION", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_VERSION, "I", 25 },
	{ "GL_EXTENSIONS", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_EXTENSIONS, "I", 25 },
	{ "GL_NEAREST", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_NEAREST, "I", 25 },
	{ "GL_LINEAR", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_LINEAR, "I", 25 },
	{ "GL_NEAREST_MIPMAP_NEAREST", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_NEAREST_MIPMAP_NEAREST, "I", 25 },
	{ "GL_LINEAR_MIPMAP_NEAREST", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_LINEAR_MIPMAP_NEAREST, "I", 25 },
	{ "GL_NEAREST_MIPMAP_LINEAR", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_NEAREST_MIPMAP_LINEAR, "I", 25 },
	{ "GL_LINEAR_MIPMAP_LINEAR", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_LINEAR_MIPMAP_LINEAR, "I", 25 },
	{ "GL_TEXTURE_MAG_FILTER", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_TEXTURE_MAG_FILTER, "I", 25 },
	{ "GL_TEXTURE_MIN_FILTER", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_TEXTURE_MIN_FILTER, "I", 25 },
	{ "GL_TEXTURE_WRAP_S", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_TEXTURE_WRAP_S, "I", 25 },
	{ "GL_TEXTURE_WRAP_T", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_TEXTURE_WRAP_T, "I", 25 },
	{ "GL_TEXTURE", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_TEXTURE, "I", 25 },
	{ "GL_TEXTURE_CUBE_MAP", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_TEXTURE_CUBE_MAP, "I", 25 },
	{ "GL_TEXTURE_BINDING_CUBE_MAP", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_TEXTURE_BINDING_CUBE_MAP, "I", 25 },
	{ "GL_TEXTURE_CUBE_MAP_POSITIVE_X", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_TEXTURE_CUBE_MAP_POSITIVE_X, "I", 25 },
	{ "GL_TEXTURE_CUBE_MAP_NEGATIVE_X", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_TEXTURE_CUBE_MAP_NEGATIVE_X, "I", 25 },
	{ "GL_TEXTURE_CUBE_MAP_POSITIVE_Y", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_TEXTURE_CUBE_MAP_POSITIVE_Y, "I", 25 },
	{ "GL_TEXTURE_CUBE_MAP_NEGATIVE_Y", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_TEXTURE_CUBE_MAP_NEGATIVE_Y, "I", 25 },
	{ "GL_TEXTURE_CUBE_MAP_POSITIVE_Z", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_TEXTURE_CUBE_MAP_POSITIVE_Z, "I", 25 },
	{ "GL_TEXTURE_CUBE_MAP_NEGATIVE_Z", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_TEXTURE_CUBE_MAP_NEGATIVE_Z, "I", 25 },
	{ "GL_MAX_CUBE_MAP_TEXTURE_SIZE", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_MAX_CUBE_MAP_TEXTURE_SIZE, "I", 25 },
	{ "GL_TEXTURE0", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_TEXTURE0, "I", 25 },
	{ "GL_TEXTURE1", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_TEXTURE1, "I", 25 },
	{ "GL_TEXTURE2", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_TEXTURE2, "I", 25 },
	{ "GL_TEXTURE3", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_TEXTURE3, "I", 25 },
	{ "GL_TEXTURE4", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_TEXTURE4, "I", 25 },
	{ "GL_TEXTURE5", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_TEXTURE5, "I", 25 },
	{ "GL_TEXTURE6", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_TEXTURE6, "I", 25 },
	{ "GL_TEXTURE7", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_TEXTURE7, "I", 25 },
	{ "GL_TEXTURE8", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_TEXTURE8, "I", 25 },
	{ "GL_TEXTURE9", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_TEXTURE9, "I", 25 },
	{ "GL_TEXTURE10", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_TEXTURE10, "I", 25 },
	{ "GL_TEXTURE11", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_TEXTURE11, "I", 25 },
	{ "GL_TEXTURE12", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_TEXTURE12, "I", 25 },
	{ "GL_TEXTURE13", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_TEXTURE13, "I", 25 },
	{ "GL_TEXTURE14", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_TEXTURE14, "I", 25 },
	{ "GL_TEXTURE15", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_TEXTURE15, "I", 25 },
	{ "GL_TEXTURE16", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_TEXTURE16, "I", 25 },
	{ "GL_TEXTURE17", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_TEXTURE17, "I", 25 },
	{ "GL_TEXTURE18", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_TEXTURE18, "I", 25 },
	{ "GL_TEXTURE19", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_TEXTURE19, "I", 25 },
	{ "GL_TEXTURE20", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_TEXTURE20, "I", 25 },
	{ "GL_TEXTURE21", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_TEXTURE21, "I", 25 },
	{ "GL_TEXTURE22", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_TEXTURE22, "I", 25 },
	{ "GL_TEXTURE23", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_TEXTURE23, "I", 25 },
	{ "GL_TEXTURE24", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_TEXTURE24, "I", 25 },
	{ "GL_TEXTURE25", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_TEXTURE25, "I", 25 },
	{ "GL_TEXTURE26", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_TEXTURE26, "I", 25 },
	{ "GL_TEXTURE27", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_TEXTURE27, "I", 25 },
	{ "GL_TEXTURE28", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_TEXTURE28, "I", 25 },
	{ "GL_TEXTURE29", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_TEXTURE29, "I", 25 },
	{ "GL_TEXTURE30", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_TEXTURE30, "I", 25 },
	{ "GL_TEXTURE31", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_TEXTURE31, "I", 25 },
	{ "GL_ACTIVE_TEXTURE", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_ACTIVE_TEXTURE, "I", 25 },
	{ "GL_REPEAT", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_REPEAT, "I", 25 },
	{ "GL_CLAMP_TO_EDGE", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_CLAMP_TO_EDGE, "I", 25 },
	{ "GL_MIRRORED_REPEAT", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_MIRRORED_REPEAT, "I", 25 },
	{ "GL_FLOAT_VEC2", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_FLOAT_VEC2, "I", 25 },
	{ "GL_FLOAT_VEC3", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_FLOAT_VEC3, "I", 25 },
	{ "GL_FLOAT_VEC4", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_FLOAT_VEC4, "I", 25 },
	{ "GL_INT_VEC2", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_INT_VEC2, "I", 25 },
	{ "GL_INT_VEC3", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_INT_VEC3, "I", 25 },
	{ "GL_INT_VEC4", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_INT_VEC4, "I", 25 },
	{ "GL_BOOL", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_BOOL, "I", 25 },
	{ "GL_BOOL_VEC2", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_BOOL_VEC2, "I", 25 },
	{ "GL_BOOL_VEC3", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_BOOL_VEC3, "I", 25 },
	{ "GL_BOOL_VEC4", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_BOOL_VEC4, "I", 25 },
	{ "GL_FLOAT_MAT2", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_FLOAT_MAT2, "I", 25 },
	{ "GL_FLOAT_MAT3", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_FLOAT_MAT3, "I", 25 },
	{ "GL_FLOAT_MAT4", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_FLOAT_MAT4, "I", 25 },
	{ "GL_SAMPLER_2D", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_SAMPLER_2D, "I", 25 },
	{ "GL_SAMPLER_CUBE", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_SAMPLER_CUBE, "I", 25 },
	{ "GL_VERTEX_ATTRIB_ARRAY_ENABLED", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_VERTEX_ATTRIB_ARRAY_ENABLED, "I", 25 },
	{ "GL_VERTEX_ATTRIB_ARRAY_SIZE", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_VERTEX_ATTRIB_ARRAY_SIZE, "I", 25 },
	{ "GL_VERTEX_ATTRIB_ARRAY_STRIDE", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_VERTEX_ATTRIB_ARRAY_STRIDE, "I", 25 },
	{ "GL_VERTEX_ATTRIB_ARRAY_TYPE", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_VERTEX_ATTRIB_ARRAY_TYPE, "I", 25 },
	{ "GL_VERTEX_ATTRIB_ARRAY_NORMALIZED", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_VERTEX_ATTRIB_ARRAY_NORMALIZED, "I", 25 },
	{ "GL_VERTEX_ATTRIB_ARRAY_POINTER", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_VERTEX_ATTRIB_ARRAY_POINTER, "I", 25 },
	{ "GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING, "I", 25 },
	{ "GL_IMPLEMENTATION_COLOR_READ_TYPE", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_IMPLEMENTATION_COLOR_READ_TYPE, "I", 25 },
	{ "GL_IMPLEMENTATION_COLOR_READ_FORMAT", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_IMPLEMENTATION_COLOR_READ_FORMAT, "I", 25 },
	{ "GL_COMPILE_STATUS", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_COMPILE_STATUS, "I", 25 },
	{ "GL_INFO_LOG_LENGTH", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_INFO_LOG_LENGTH, "I", 25 },
	{ "GL_SHADER_SOURCE_LENGTH", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_SHADER_SOURCE_LENGTH, "I", 25 },
	{ "GL_SHADER_COMPILER", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_SHADER_COMPILER, "I", 25 },
	{ "GL_SHADER_BINARY_FORMATS", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_SHADER_BINARY_FORMATS, "I", 25 },
	{ "GL_NUM_SHADER_BINARY_FORMATS", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_NUM_SHADER_BINARY_FORMATS, "I", 25 },
	{ "GL_LOW_FLOAT", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_LOW_FLOAT, "I", 25 },
	{ "GL_MEDIUM_FLOAT", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_MEDIUM_FLOAT, "I", 25 },
	{ "GL_HIGH_FLOAT", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_HIGH_FLOAT, "I", 25 },
	{ "GL_LOW_INT", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_LOW_INT, "I", 25 },
	{ "GL_MEDIUM_INT", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_MEDIUM_INT, "I", 25 },
	{ "GL_HIGH_INT", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_HIGH_INT, "I", 25 },
	{ "GL_FRAMEBUFFER", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_FRAMEBUFFER, "I", 25 },
	{ "GL_RENDERBUFFER", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_RENDERBUFFER, "I", 25 },
	{ "GL_RGBA4", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_RGBA4, "I", 25 },
	{ "GL_RGB5_A1", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_RGB5_A1, "I", 25 },
	{ "GL_RGB565", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_RGB565, "I", 25 },
	{ "GL_DEPTH_COMPONENT16", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_DEPTH_COMPONENT16, "I", 25 },
	{ "GL_STENCIL_INDEX", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_STENCIL_INDEX, "I", 25 },
	{ "GL_STENCIL_INDEX8", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_STENCIL_INDEX8, "I", 25 },
	{ "GL_RENDERBUFFER_WIDTH", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_RENDERBUFFER_WIDTH, "I", 25 },
	{ "GL_RENDERBUFFER_HEIGHT", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_RENDERBUFFER_HEIGHT, "I", 25 },
	{ "GL_RENDERBUFFER_INTERNAL_FORMAT", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_RENDERBUFFER_INTERNAL_FORMAT, "I", 25 },
	{ "GL_RENDERBUFFER_RED_SIZE", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_RENDERBUFFER_RED_SIZE, "I", 25 },
	{ "GL_RENDERBUFFER_GREEN_SIZE", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_RENDERBUFFER_GREEN_SIZE, "I", 25 },
	{ "GL_RENDERBUFFER_BLUE_SIZE", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_RENDERBUFFER_BLUE_SIZE, "I", 25 },
	{ "GL_RENDERBUFFER_ALPHA_SIZE", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_RENDERBUFFER_ALPHA_SIZE, "I", 25 },
	{ "GL_RENDERBUFFER_DEPTH_SIZE", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_RENDERBUFFER_DEPTH_SIZE, "I", 25 },
	{ "GL_RENDERBUFFER_STENCIL_SIZE", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_RENDERBUFFER_STENCIL_SIZE, "I", 25 },
	{ "GL_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE, "I", 25 },
	{ "GL_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME, "I", 25 },
	{ "GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL, "I", 25 },
	{ "GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE, "I", 25 },
	{ "GL_COLOR_ATTACHMENT0", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_COLOR_ATTACHMENT0, "I", 25 },
	{ "GL_DEPTH_ATTACHMENT", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_DEPTH_ATTACHMENT, "I", 25 },
	{ "GL_STENCIL_ATTACHMENT", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_STENCIL_ATTACHMENT, "I", 25 },
	{ "GL_NONE", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_NONE, "I", 25 },
	{ "GL_FRAMEBUFFER_COMPLETE", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_FRAMEBUFFER_COMPLETE, "I", 25 },
	{ "GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT, "I", 25 },
	{ "GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT, "I", 25 },
	{ "GL_FRAMEBUFFER_INCOMPLETE_DIMENSIONS", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_FRAMEBUFFER_INCOMPLETE_DIMENSIONS, "I", 25 },
	{ "GL_FRAMEBUFFER_UNSUPPORTED", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_FRAMEBUFFER_UNSUPPORTED, "I", 25 },
	{ "GL_FRAMEBUFFER_BINDING", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_FRAMEBUFFER_BINDING, "I", 25 },
	{ "GL_RENDERBUFFER_BINDING", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_RENDERBUFFER_BINDING, "I", 25 },
	{ "GL_MAX_RENDERBUFFER_SIZE", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_MAX_RENDERBUFFER_SIZE, "I", 25 },
	{ "GL_INVALID_FRAMEBUFFER_OPERATION", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_INVALID_FRAMEBUFFER_OPERATION, "I", 25 },
	{ "GL_VERTEX_PROGRAM_POINT_SIZE", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_VERTEX_PROGRAM_POINT_SIZE, "I", 25 },
	{ "GL_COVERAGE_BUFFER_BIT_NV", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_COVERAGE_BUFFER_BIT_NV, "I", 25 },
	{ "GL_TEXTURE_MAX_ANISOTROPY_EXT", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_TEXTURE_MAX_ANISOTROPY_EXT, "I", 25 },
	{ "GL_MAX_TEXTURE_MAX_ANISOTROPY_EXT", &class_int, (intptr_t) &SF_arc_graphics_GL20_GL_MAX_TEXTURE_MAX_ANISOTROPY_EXT, "I", 25 },
};

static MethodMetadata methods[] {
	{ "glActiveTexture", 0, INDEX_arc_graphics_GL20_glActiveTexture_int, "(I)V", 1025 },
	{ "glBindTexture", 0, INDEX_arc_graphics_GL20_glBindTexture_int_int, "(II)V", 1025 },
	{ "glBlendFunc", 0, INDEX_arc_graphics_GL20_glBlendFunc_int_int, "(II)V", 1025 },
	{ "glClear", 0, INDEX_arc_graphics_GL20_glClear_int, "(I)V", 1025 },
	{ "glClearColor", 0, INDEX_arc_graphics_GL20_glClearColor_float_float_float_float, "(FFFF)V", 1025 },
	{ "glClearDepthf", 0, INDEX_arc_graphics_GL20_glClearDepthf_float, "(F)V", 1025 },
	{ "glClearStencil", 0, INDEX_arc_graphics_GL20_glClearStencil_int, "(I)V", 1025 },
	{ "glColorMask", 0, INDEX_arc_graphics_GL20_glColorMask_boolean_boolean_boolean_boolean, "(ZZZZ)V", 1025 },
	{ "glCompressedTexImage2D", 0, INDEX_arc_graphics_GL20_glCompressedTexImage2D_int_int_int_int_int_int_int_java_nio_Buffer, "(IIIIIIILjava/nio/Buffer;)V", 1025 },
	{ "glCompressedTexSubImage2D", 0, INDEX_arc_graphics_GL20_glCompressedTexSubImage2D_int_int_int_int_int_int_int_int_java_nio_Buffer, "(IIIIIIIILjava/nio/Buffer;)V", 1025 },
	{ "glCopyTexImage2D", 0, INDEX_arc_graphics_GL20_glCopyTexImage2D_int_int_int_int_int_int_int_int, "(IIIIIIII)V", 1025 },
	{ "glCopyTexSubImage2D", 0, INDEX_arc_graphics_GL20_glCopyTexSubImage2D_int_int_int_int_int_int_int_int, "(IIIIIIII)V", 1025 },
	{ "glCullFace", 0, INDEX_arc_graphics_GL20_glCullFace_int, "(I)V", 1025 },
	{ "glDeleteTexture", 0, INDEX_arc_graphics_GL20_glDeleteTexture_int, "(I)V", 1025 },
	{ "glDepthFunc", 0, INDEX_arc_graphics_GL20_glDepthFunc_int, "(I)V", 1025 },
	{ "glDepthMask", 0, INDEX_arc_graphics_GL20_glDepthMask_boolean, "(Z)V", 1025 },
	{ "glDepthRangef", 0, INDEX_arc_graphics_GL20_glDepthRangef_float_float, "(FF)V", 1025 },
	{ "glDisable", 0, INDEX_arc_graphics_GL20_glDisable_int, "(I)V", 1025 },
	{ "glDrawArrays", 0, INDEX_arc_graphics_GL20_glDrawArrays_int_int_int, "(III)V", 1025 },
	{ "glDrawElements", 0, INDEX_arc_graphics_GL20_glDrawElements_int_int_int_java_nio_Buffer, "(IIILjava/nio/Buffer;)V", 1025 },
	{ "glEnable", 0, INDEX_arc_graphics_GL20_glEnable_int, "(I)V", 1025 },
	{ "glFinish", 0, INDEX_arc_graphics_GL20_glFinish, "()V", 1025 },
	{ "glFlush", 0, INDEX_arc_graphics_GL20_glFlush, "()V", 1025 },
	{ "glFrontFace", 0, INDEX_arc_graphics_GL20_glFrontFace_int, "(I)V", 1025 },
	{ "glGenTexture", 0, INDEX_arc_graphics_GL20_glGenTexture_R_int, "()I", 1025 },
	{ "glGetError", 0, INDEX_arc_graphics_GL20_glGetError_R_int, "()I", 1025 },
	{ "glGetIntegerv", 0, INDEX_arc_graphics_GL20_glGetIntegerv_int_java_nio_IntBuffer, "(ILjava/nio/IntBuffer;)V", 1025 },
	{ "glGetString", 0, INDEX_arc_graphics_GL20_glGetString_int_R_java_lang_String, "(I)Ljava/lang/String;", 1025 },
	{ "glHint", 0, INDEX_arc_graphics_GL20_glHint_int_int, "(II)V", 1025 },
	{ "glLineWidth", 0, INDEX_arc_graphics_GL20_glLineWidth_float, "(F)V", 1025 },
	{ "glPixelStorei", 0, INDEX_arc_graphics_GL20_glPixelStorei_int_int, "(II)V", 1025 },
	{ "glPolygonOffset", 0, INDEX_arc_graphics_GL20_glPolygonOffset_float_float, "(FF)V", 1025 },
	{ "glReadPixels", 0, INDEX_arc_graphics_GL20_glReadPixels_int_int_int_int_int_int_java_nio_Buffer, "(IIIIIILjava/nio/Buffer;)V", 1025 },
	{ "glScissor", 0, INDEX_arc_graphics_GL20_glScissor_int_int_int_int, "(IIII)V", 1025 },
	{ "glStencilFunc", 0, INDEX_arc_graphics_GL20_glStencilFunc_int_int_int, "(III)V", 1025 },
	{ "glStencilMask", 0, INDEX_arc_graphics_GL20_glStencilMask_int, "(I)V", 1025 },
	{ "glStencilOp", 0, INDEX_arc_graphics_GL20_glStencilOp_int_int_int, "(III)V", 1025 },
	{ "glTexImage2D", 0, INDEX_arc_graphics_GL20_glTexImage2D_int_int_int_int_int_int_int_int_java_nio_Buffer, "(IIIIIIIILjava/nio/Buffer;)V", 1025 },
	{ "glTexParameterf", 0, INDEX_arc_graphics_GL20_glTexParameterf_int_int_float, "(IIF)V", 1025 },
	{ "glTexSubImage2D", 0, INDEX_arc_graphics_GL20_glTexSubImage2D_int_int_int_int_int_int_int_int_java_nio_Buffer, "(IIIIIIIILjava/nio/Buffer;)V", 1025 },
	{ "glViewport", 0, INDEX_arc_graphics_GL20_glViewport_int_int_int_int, "(IIII)V", 1025 },
	{ "glAttachShader", 0, INDEX_arc_graphics_GL20_glAttachShader_int_int, "(II)V", 1025 },
	{ "glBindAttribLocation", 0, INDEX_arc_graphics_GL20_glBindAttribLocation_int_int_java_lang_String, "(IILjava/lang/String;)V", 1025 },
	{ "glBindBuffer", 0, INDEX_arc_graphics_GL20_glBindBuffer_int_int, "(II)V", 1025 },
	{ "glBindFramebuffer", 0, INDEX_arc_graphics_GL20_glBindFramebuffer_int_int, "(II)V", 1025 },
	{ "glBindRenderbuffer", 0, INDEX_arc_graphics_GL20_glBindRenderbuffer_int_int, "(II)V", 1025 },
	{ "glBlendColor", 0, INDEX_arc_graphics_GL20_glBlendColor_float_float_float_float, "(FFFF)V", 1025 },
	{ "glBlendEquation", 0, INDEX_arc_graphics_GL20_glBlendEquation_int, "(I)V", 1025 },
	{ "glBlendEquationSeparate", 0, INDEX_arc_graphics_GL20_glBlendEquationSeparate_int_int, "(II)V", 1025 },
	{ "glBlendFuncSeparate", 0, INDEX_arc_graphics_GL20_glBlendFuncSeparate_int_int_int_int, "(IIII)V", 1025 },
	{ "glBufferData", 0, INDEX_arc_graphics_GL20_glBufferData_int_int_java_nio_Buffer_int, "(IILjava/nio/Buffer;I)V", 1025 },
	{ "glBufferSubData", 0, INDEX_arc_graphics_GL20_glBufferSubData_int_int_int_java_nio_Buffer, "(IIILjava/nio/Buffer;)V", 1025 },
	{ "glCheckFramebufferStatus", 0, INDEX_arc_graphics_GL20_glCheckFramebufferStatus_int_R_int, "(I)I", 1025 },
	{ "glCompileShader", 0, INDEX_arc_graphics_GL20_glCompileShader_int, "(I)V", 1025 },
	{ "glCreateProgram", 0, INDEX_arc_graphics_GL20_glCreateProgram_R_int, "()I", 1025 },
	{ "glCreateShader", 0, INDEX_arc_graphics_GL20_glCreateShader_int_R_int, "(I)I", 1025 },
	{ "glDeleteBuffer", 0, INDEX_arc_graphics_GL20_glDeleteBuffer_int, "(I)V", 1025 },
	{ "glDeleteFramebuffer", 0, INDEX_arc_graphics_GL20_glDeleteFramebuffer_int, "(I)V", 1025 },
	{ "glDeleteProgram", 0, INDEX_arc_graphics_GL20_glDeleteProgram_int, "(I)V", 1025 },
	{ "glDeleteRenderbuffer", 0, INDEX_arc_graphics_GL20_glDeleteRenderbuffer_int, "(I)V", 1025 },
	{ "glDeleteShader", 0, INDEX_arc_graphics_GL20_glDeleteShader_int, "(I)V", 1025 },
	{ "glDetachShader", 0, INDEX_arc_graphics_GL20_glDetachShader_int_int, "(II)V", 1025 },
	{ "glDisableVertexAttribArray", 0, INDEX_arc_graphics_GL20_glDisableVertexAttribArray_int, "(I)V", 1025 },
	{ "glDrawElements", 0, INDEX_arc_graphics_GL20_glDrawElements_int_int_int_int, "(IIII)V", 1025 },
	{ "glEnableVertexAttribArray", 0, INDEX_arc_graphics_GL20_glEnableVertexAttribArray_int, "(I)V", 1025 },
	{ "glFramebufferRenderbuffer", 0, INDEX_arc_graphics_GL20_glFramebufferRenderbuffer_int_int_int_int, "(IIII)V", 1025 },
	{ "glFramebufferTexture2D", 0, INDEX_arc_graphics_GL20_glFramebufferTexture2D_int_int_int_int_int, "(IIIII)V", 1025 },
	{ "glGenBuffer", 0, INDEX_arc_graphics_GL20_glGenBuffer_R_int, "()I", 1025 },
	{ "glGenerateMipmap", 0, INDEX_arc_graphics_GL20_glGenerateMipmap_int, "(I)V", 1025 },
	{ "glGenFramebuffer", 0, INDEX_arc_graphics_GL20_glGenFramebuffer_R_int, "()I", 1025 },
	{ "glGenRenderbuffer", 0, INDEX_arc_graphics_GL20_glGenRenderbuffer_R_int, "()I", 1025 },
	{ "glGetActiveAttrib", 0, INDEX_arc_graphics_GL20_glGetActiveAttrib_int_int_java_nio_IntBuffer_java_nio_IntBuffer_R_java_lang_String, "(IILjava/nio/IntBuffer;Ljava/nio/IntBuffer;)Ljava/lang/String;", 1025 },
	{ "glGetActiveUniform", 0, INDEX_arc_graphics_GL20_glGetActiveUniform_int_int_java_nio_IntBuffer_java_nio_IntBuffer_R_java_lang_String, "(IILjava/nio/IntBuffer;Ljava/nio/IntBuffer;)Ljava/lang/String;", 1025 },
	{ "glGetAttribLocation", 0, INDEX_arc_graphics_GL20_glGetAttribLocation_int_java_lang_String_R_int, "(ILjava/lang/String;)I", 1025 },
	{ "glGetBooleanv", 0, INDEX_arc_graphics_GL20_glGetBooleanv_int_java_nio_Buffer, "(ILjava/nio/Buffer;)V", 1025 },
	{ "glGetBufferParameteriv", 0, INDEX_arc_graphics_GL20_glGetBufferParameteriv_int_int_java_nio_IntBuffer, "(IILjava/nio/IntBuffer;)V", 1025 },
	{ "glGetFloatv", 0, INDEX_arc_graphics_GL20_glGetFloatv_int_java_nio_FloatBuffer, "(ILjava/nio/FloatBuffer;)V", 1025 },
	{ "glGetFramebufferAttachmentParameteriv", 0, INDEX_arc_graphics_GL20_glGetFramebufferAttachmentParameteriv_int_int_int_java_nio_IntBuffer, "(IIILjava/nio/IntBuffer;)V", 1025 },
	{ "glGetProgramiv", 0, INDEX_arc_graphics_GL20_glGetProgramiv_int_int_java_nio_IntBuffer, "(IILjava/nio/IntBuffer;)V", 1025 },
	{ "glGetProgramInfoLog", 0, INDEX_arc_graphics_GL20_glGetProgramInfoLog_int_R_java_lang_String, "(I)Ljava/lang/String;", 1025 },
	{ "glGetRenderbufferParameteriv", 0, INDEX_arc_graphics_GL20_glGetRenderbufferParameteriv_int_int_java_nio_IntBuffer, "(IILjava/nio/IntBuffer;)V", 1025 },
	{ "glGetShaderiv", 0, INDEX_arc_graphics_GL20_glGetShaderiv_int_int_java_nio_IntBuffer, "(IILjava/nio/IntBuffer;)V", 1025 },
	{ "glGetShaderInfoLog", 0, INDEX_arc_graphics_GL20_glGetShaderInfoLog_int_R_java_lang_String, "(I)Ljava/lang/String;", 1025 },
	{ "glGetShaderPrecisionFormat", 0, INDEX_arc_graphics_GL20_glGetShaderPrecisionFormat_int_int_java_nio_IntBuffer_java_nio_IntBuffer, "(IILjava/nio/IntBuffer;Ljava/nio/IntBuffer;)V", 1025 },
	{ "glGetTexParameterfv", 0, INDEX_arc_graphics_GL20_glGetTexParameterfv_int_int_java_nio_FloatBuffer, "(IILjava/nio/FloatBuffer;)V", 1025 },
	{ "glGetTexParameteriv", 0, INDEX_arc_graphics_GL20_glGetTexParameteriv_int_int_java_nio_IntBuffer, "(IILjava/nio/IntBuffer;)V", 1025 },
	{ "glGetUniformfv", 0, INDEX_arc_graphics_GL20_glGetUniformfv_int_int_java_nio_FloatBuffer, "(IILjava/nio/FloatBuffer;)V", 1025 },
	{ "glGetUniformiv", 0, INDEX_arc_graphics_GL20_glGetUniformiv_int_int_java_nio_IntBuffer, "(IILjava/nio/IntBuffer;)V", 1025 },
	{ "glGetUniformLocation", 0, INDEX_arc_graphics_GL20_glGetUniformLocation_int_java_lang_String_R_int, "(ILjava/lang/String;)I", 1025 },
	{ "glGetVertexAttribfv", 0, INDEX_arc_graphics_GL20_glGetVertexAttribfv_int_int_java_nio_FloatBuffer, "(IILjava/nio/FloatBuffer;)V", 1025 },
	{ "glGetVertexAttribiv", 0, INDEX_arc_graphics_GL20_glGetVertexAttribiv_int_int_java_nio_IntBuffer, "(IILjava/nio/IntBuffer;)V", 1025 },
	{ "glIsBuffer", 0, INDEX_arc_graphics_GL20_glIsBuffer_int_R_boolean, "(I)Z", 1025 },
	{ "glIsEnabled", 0, INDEX_arc_graphics_GL20_glIsEnabled_int_R_boolean, "(I)Z", 1025 },
	{ "glIsFramebuffer", 0, INDEX_arc_graphics_GL20_glIsFramebuffer_int_R_boolean, "(I)Z", 1025 },
	{ "glIsProgram", 0, INDEX_arc_graphics_GL20_glIsProgram_int_R_boolean, "(I)Z", 1025 },
	{ "glIsRenderbuffer", 0, INDEX_arc_graphics_GL20_glIsRenderbuffer_int_R_boolean, "(I)Z", 1025 },
	{ "glIsShader", 0, INDEX_arc_graphics_GL20_glIsShader_int_R_boolean, "(I)Z", 1025 },
	{ "glIsTexture", 0, INDEX_arc_graphics_GL20_glIsTexture_int_R_boolean, "(I)Z", 1025 },
	{ "glLinkProgram", 0, INDEX_arc_graphics_GL20_glLinkProgram_int, "(I)V", 1025 },
	{ "glReleaseShaderCompiler", 0, INDEX_arc_graphics_GL20_glReleaseShaderCompiler, "()V", 1025 },
	{ "glRenderbufferStorage", 0, INDEX_arc_graphics_GL20_glRenderbufferStorage_int_int_int_int, "(IIII)V", 1025 },
	{ "glSampleCoverage", 0, INDEX_arc_graphics_GL20_glSampleCoverage_float_boolean, "(FZ)V", 1025 },
	{ "glShaderSource", 0, INDEX_arc_graphics_GL20_glShaderSource_int_java_lang_String, "(ILjava/lang/String;)V", 1025 },
	{ "glStencilFuncSeparate", 0, INDEX_arc_graphics_GL20_glStencilFuncSeparate_int_int_int_int, "(IIII)V", 1025 },
	{ "glStencilMaskSeparate", 0, INDEX_arc_graphics_GL20_glStencilMaskSeparate_int_int, "(II)V", 1025 },
	{ "glStencilOpSeparate", 0, INDEX_arc_graphics_GL20_glStencilOpSeparate_int_int_int_int, "(IIII)V", 1025 },
	{ "glTexParameterfv", 0, INDEX_arc_graphics_GL20_glTexParameterfv_int_int_java_nio_FloatBuffer, "(IILjava/nio/FloatBuffer;)V", 1025 },
	{ "glTexParameteri", 0, INDEX_arc_graphics_GL20_glTexParameteri_int_int_int, "(III)V", 1025 },
	{ "glTexParameteriv", 0, INDEX_arc_graphics_GL20_glTexParameteriv_int_int_java_nio_IntBuffer, "(IILjava/nio/IntBuffer;)V", 1025 },
	{ "glUniform1f", 0, INDEX_arc_graphics_GL20_glUniform1f_int_float, "(IF)V", 1025 },
	{ "glUniform1fv", 0, INDEX_arc_graphics_GL20_glUniform1fv_int_int_java_nio_FloatBuffer, "(IILjava/nio/FloatBuffer;)V", 1025 },
	{ "glUniform1fv", 0, INDEX_arc_graphics_GL20_glUniform1fv_int_int_Array1_float_int, "(II[FI)V", 1025 },
	{ "glUniform1i", 0, INDEX_arc_graphics_GL20_glUniform1i_int_int, "(II)V", 1025 },
	{ "glUniform1iv", 0, INDEX_arc_graphics_GL20_glUniform1iv_int_int_java_nio_IntBuffer, "(IILjava/nio/IntBuffer;)V", 1025 },
	{ "glUniform1iv", 0, INDEX_arc_graphics_GL20_glUniform1iv_int_int_Array1_int_int, "(II[II)V", 1025 },
	{ "glUniform2f", 0, INDEX_arc_graphics_GL20_glUniform2f_int_float_float, "(IFF)V", 1025 },
	{ "glUniform2fv", 0, INDEX_arc_graphics_GL20_glUniform2fv_int_int_java_nio_FloatBuffer, "(IILjava/nio/FloatBuffer;)V", 1025 },
	{ "glUniform2fv", 0, INDEX_arc_graphics_GL20_glUniform2fv_int_int_Array1_float_int, "(II[FI)V", 1025 },
	{ "glUniform2i", 0, INDEX_arc_graphics_GL20_glUniform2i_int_int_int, "(III)V", 1025 },
	{ "glUniform2iv", 0, INDEX_arc_graphics_GL20_glUniform2iv_int_int_java_nio_IntBuffer, "(IILjava/nio/IntBuffer;)V", 1025 },
	{ "glUniform2iv", 0, INDEX_arc_graphics_GL20_glUniform2iv_int_int_Array1_int_int, "(II[II)V", 1025 },
	{ "glUniform3f", 0, INDEX_arc_graphics_GL20_glUniform3f_int_float_float_float, "(IFFF)V", 1025 },
	{ "glUniform3fv", 0, INDEX_arc_graphics_GL20_glUniform3fv_int_int_java_nio_FloatBuffer, "(IILjava/nio/FloatBuffer;)V", 1025 },
	{ "glUniform3fv", 0, INDEX_arc_graphics_GL20_glUniform3fv_int_int_Array1_float_int, "(II[FI)V", 1025 },
	{ "glUniform3i", 0, INDEX_arc_graphics_GL20_glUniform3i_int_int_int_int, "(IIII)V", 1025 },
	{ "glUniform3iv", 0, INDEX_arc_graphics_GL20_glUniform3iv_int_int_java_nio_IntBuffer, "(IILjava/nio/IntBuffer;)V", 1025 },
	{ "glUniform3iv", 0, INDEX_arc_graphics_GL20_glUniform3iv_int_int_Array1_int_int, "(II[II)V", 1025 },
	{ "glUniform4f", 0, INDEX_arc_graphics_GL20_glUniform4f_int_float_float_float_float, "(IFFFF)V", 1025 },
	{ "glUniform4fv", 0, INDEX_arc_graphics_GL20_glUniform4fv_int_int_java_nio_FloatBuffer, "(IILjava/nio/FloatBuffer;)V", 1025 },
	{ "glUniform4fv", 0, INDEX_arc_graphics_GL20_glUniform4fv_int_int_Array1_float_int, "(II[FI)V", 1025 },
	{ "glUniform4i", 0, INDEX_arc_graphics_GL20_glUniform4i_int_int_int_int_int, "(IIIII)V", 1025 },
	{ "glUniform4iv", 0, INDEX_arc_graphics_GL20_glUniform4iv_int_int_java_nio_IntBuffer, "(IILjava/nio/IntBuffer;)V", 1025 },
	{ "glUniform4iv", 0, INDEX_arc_graphics_GL20_glUniform4iv_int_int_Array1_int_int, "(II[II)V", 1025 },
	{ "glUniformMatrix2fv", 0, INDEX_arc_graphics_GL20_glUniformMatrix2fv_int_int_boolean_java_nio_FloatBuffer, "(IIZLjava/nio/FloatBuffer;)V", 1025 },
	{ "glUniformMatrix2fv", 0, INDEX_arc_graphics_GL20_glUniformMatrix2fv_int_int_boolean_Array1_float_int, "(IIZ[FI)V", 1025 },
	{ "glUniformMatrix3fv", 0, INDEX_arc_graphics_GL20_glUniformMatrix3fv_int_int_boolean_java_nio_FloatBuffer, "(IIZLjava/nio/FloatBuffer;)V", 1025 },
	{ "glUniformMatrix3fv", 0, INDEX_arc_graphics_GL20_glUniformMatrix3fv_int_int_boolean_Array1_float_int, "(IIZ[FI)V", 1025 },
	{ "glUniformMatrix4fv", 0, INDEX_arc_graphics_GL20_glUniformMatrix4fv_int_int_boolean_java_nio_FloatBuffer, "(IIZLjava/nio/FloatBuffer;)V", 1025 },
	{ "glUniformMatrix4fv", 0, INDEX_arc_graphics_GL20_glUniformMatrix4fv_int_int_boolean_Array1_float_int, "(IIZ[FI)V", 1025 },
	{ "glUseProgram", 0, INDEX_arc_graphics_GL20_glUseProgram_int, "(I)V", 1025 },
	{ "glValidateProgram", 0, INDEX_arc_graphics_GL20_glValidateProgram_int, "(I)V", 1025 },
	{ "glVertexAttrib1f", 0, INDEX_arc_graphics_GL20_glVertexAttrib1f_int_float, "(IF)V", 1025 },
	{ "glVertexAttrib1fv", 0, INDEX_arc_graphics_GL20_glVertexAttrib1fv_int_java_nio_FloatBuffer, "(ILjava/nio/FloatBuffer;)V", 1025 },
	{ "glVertexAttrib2f", 0, INDEX_arc_graphics_GL20_glVertexAttrib2f_int_float_float, "(IFF)V", 1025 },
	{ "glVertexAttrib2fv", 0, INDEX_arc_graphics_GL20_glVertexAttrib2fv_int_java_nio_FloatBuffer, "(ILjava/nio/FloatBuffer;)V", 1025 },
	{ "glVertexAttrib3f", 0, INDEX_arc_graphics_GL20_glVertexAttrib3f_int_float_float_float, "(IFFF)V", 1025 },
	{ "glVertexAttrib3fv", 0, INDEX_arc_graphics_GL20_glVertexAttrib3fv_int_java_nio_FloatBuffer, "(ILjava/nio/FloatBuffer;)V", 1025 },
	{ "glVertexAttrib4f", 0, INDEX_arc_graphics_GL20_glVertexAttrib4f_int_float_float_float_float, "(IFFFF)V", 1025 },
	{ "glVertexAttrib4fv", 0, INDEX_arc_graphics_GL20_glVertexAttrib4fv_int_java_nio_FloatBuffer, "(ILjava/nio/FloatBuffer;)V", 1025 },
	{ "glVertexAttribPointer", 0, INDEX_arc_graphics_GL20_glVertexAttribPointer_int_int_int_boolean_int_java_nio_Buffer, "(IIIZILjava/nio/Buffer;)V", 1025 },
	{ "glVertexAttribPointer", 0, INDEX_arc_graphics_GL20_glVertexAttribPointer_int_int_int_boolean_int_int, "(IIIZII)V", 1025 },
};

Class class_arc_graphics_GL20{
		.nativeName = (intptr_t) "arc/graphics/GL20",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_graphics_GL20),
		.classVtable = (intptr_t) vtable_arc_graphics_GL20,
		.staticInitializer = (intptr_t) clinit_arc_graphics_GL20,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_graphics_GL20,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1537,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 309,
		.nativeFields = (intptr_t) fields,
		.methodCount = 151,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 162,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_graphics_GL20 = registerClass(&class_arc_graphics_GL20);

}
