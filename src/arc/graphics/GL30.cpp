#include "arc/graphics/GL30.h"
#include "java/lang/Object.h"
#include "java/nio/FloatBuffer.h"
#include "java/lang/String.h"
#include "java/nio/Buffer.h"
#include "java/nio/IntBuffer.h"
#include "arc/graphics/GL20.h"
#include "java/nio/LongBuffer.h"
#include "arc/graphics/GL30.h"

extern "C" {

jint SF_arc_graphics_GL30_GL_READ_BUFFER;
jint SF_arc_graphics_GL30_GL_UNPACK_ROW_LENGTH;
jint SF_arc_graphics_GL30_GL_UNPACK_SKIP_ROWS;
jint SF_arc_graphics_GL30_GL_UNPACK_SKIP_PIXELS;
jint SF_arc_graphics_GL30_GL_PACK_ROW_LENGTH;
jint SF_arc_graphics_GL30_GL_PACK_SKIP_ROWS;
jint SF_arc_graphics_GL30_GL_PACK_SKIP_PIXELS;
jint SF_arc_graphics_GL30_GL_COLOR;
jint SF_arc_graphics_GL30_GL_DEPTH;
jint SF_arc_graphics_GL30_GL_STENCIL;
jint SF_arc_graphics_GL30_GL_RED;
jint SF_arc_graphics_GL30_GL_RGB8;
jint SF_arc_graphics_GL30_GL_RGBA8;
jint SF_arc_graphics_GL30_GL_RGB10_A2;
jint SF_arc_graphics_GL30_GL_TEXTURE_BINDING_3D;
jint SF_arc_graphics_GL30_GL_UNPACK_SKIP_IMAGES;
jint SF_arc_graphics_GL30_GL_UNPACK_IMAGE_HEIGHT;
jint SF_arc_graphics_GL30_GL_TEXTURE_3D;
jint SF_arc_graphics_GL30_GL_TEXTURE_WRAP_R;
jint SF_arc_graphics_GL30_GL_MAX_3D_TEXTURE_SIZE;
jint SF_arc_graphics_GL30_GL_UNSIGNED_INT_2_10_10_10_REV;
jint SF_arc_graphics_GL30_GL_MAX_ELEMENTS_VERTICES;
jint SF_arc_graphics_GL30_GL_MAX_ELEMENTS_INDICES;
jint SF_arc_graphics_GL30_GL_TEXTURE_MIN_LOD;
jint SF_arc_graphics_GL30_GL_TEXTURE_MAX_LOD;
jint SF_arc_graphics_GL30_GL_TEXTURE_BASE_LEVEL;
jint SF_arc_graphics_GL30_GL_TEXTURE_MAX_LEVEL;
jint SF_arc_graphics_GL30_GL_MIN;
jint SF_arc_graphics_GL30_GL_MAX;
jint SF_arc_graphics_GL30_GL_DEPTH_COMPONENT24;
jint SF_arc_graphics_GL30_GL_MAX_TEXTURE_LOD_BIAS;
jint SF_arc_graphics_GL30_GL_TEXTURE_COMPARE_MODE;
jint SF_arc_graphics_GL30_GL_TEXTURE_COMPARE_FUNC;
jint SF_arc_graphics_GL30_GL_CURRENT_QUERY;
jint SF_arc_graphics_GL30_GL_QUERY_RESULT;
jint SF_arc_graphics_GL30_GL_QUERY_RESULT_AVAILABLE;
jint SF_arc_graphics_GL30_GL_BUFFER_MAPPED;
jint SF_arc_graphics_GL30_GL_BUFFER_MAP_POINTER;
jint SF_arc_graphics_GL30_GL_STREAM_READ;
jint SF_arc_graphics_GL30_GL_STREAM_COPY;
jint SF_arc_graphics_GL30_GL_STATIC_READ;
jint SF_arc_graphics_GL30_GL_STATIC_COPY;
jint SF_arc_graphics_GL30_GL_DYNAMIC_READ;
jint SF_arc_graphics_GL30_GL_DYNAMIC_COPY;
jint SF_arc_graphics_GL30_GL_MAX_DRAW_BUFFERS;
jint SF_arc_graphics_GL30_GL_DRAW_BUFFER0;
jint SF_arc_graphics_GL30_GL_DRAW_BUFFER1;
jint SF_arc_graphics_GL30_GL_DRAW_BUFFER2;
jint SF_arc_graphics_GL30_GL_DRAW_BUFFER3;
jint SF_arc_graphics_GL30_GL_DRAW_BUFFER4;
jint SF_arc_graphics_GL30_GL_DRAW_BUFFER5;
jint SF_arc_graphics_GL30_GL_DRAW_BUFFER6;
jint SF_arc_graphics_GL30_GL_DRAW_BUFFER7;
jint SF_arc_graphics_GL30_GL_DRAW_BUFFER8;
jint SF_arc_graphics_GL30_GL_DRAW_BUFFER9;
jint SF_arc_graphics_GL30_GL_DRAW_BUFFER10;
jint SF_arc_graphics_GL30_GL_DRAW_BUFFER11;
jint SF_arc_graphics_GL30_GL_DRAW_BUFFER12;
jint SF_arc_graphics_GL30_GL_DRAW_BUFFER13;
jint SF_arc_graphics_GL30_GL_DRAW_BUFFER14;
jint SF_arc_graphics_GL30_GL_DRAW_BUFFER15;
jint SF_arc_graphics_GL30_GL_MAX_FRAGMENT_UNIFORM_COMPONENTS;
jint SF_arc_graphics_GL30_GL_MAX_VERTEX_UNIFORM_COMPONENTS;
jint SF_arc_graphics_GL30_GL_SAMPLER_3D;
jint SF_arc_graphics_GL30_GL_SAMPLER_2D_SHADOW;
jint SF_arc_graphics_GL30_GL_FRAGMENT_SHADER_DERIVATIVE_HINT;
jint SF_arc_graphics_GL30_GL_PIXEL_PACK_BUFFER;
jint SF_arc_graphics_GL30_GL_PIXEL_UNPACK_BUFFER;
jint SF_arc_graphics_GL30_GL_PIXEL_PACK_BUFFER_BINDING;
jint SF_arc_graphics_GL30_GL_PIXEL_UNPACK_BUFFER_BINDING;
jint SF_arc_graphics_GL30_GL_FLOAT_MAT2x3;
jint SF_arc_graphics_GL30_GL_FLOAT_MAT2x4;
jint SF_arc_graphics_GL30_GL_FLOAT_MAT3x2;
jint SF_arc_graphics_GL30_GL_FLOAT_MAT3x4;
jint SF_arc_graphics_GL30_GL_FLOAT_MAT4x2;
jint SF_arc_graphics_GL30_GL_FLOAT_MAT4x3;
jint SF_arc_graphics_GL30_GL_SRGB;
jint SF_arc_graphics_GL30_GL_SRGB8;
jint SF_arc_graphics_GL30_GL_SRGB8_ALPHA8;
jint SF_arc_graphics_GL30_GL_COMPARE_REF_TO_TEXTURE;
jint SF_arc_graphics_GL30_GL_MAJOR_VERSION;
jint SF_arc_graphics_GL30_GL_MINOR_VERSION;
jint SF_arc_graphics_GL30_GL_NUM_EXTENSIONS;
jint SF_arc_graphics_GL30_GL_RGBA32F;
jint SF_arc_graphics_GL30_GL_RGB32F;
jint SF_arc_graphics_GL30_GL_RGBA16F;
jint SF_arc_graphics_GL30_GL_RGB16F;
jint SF_arc_graphics_GL30_GL_VERTEX_ATTRIB_ARRAY_INTEGER;
jint SF_arc_graphics_GL30_GL_MAX_ARRAY_TEXTURE_LAYERS;
jint SF_arc_graphics_GL30_GL_MIN_PROGRAM_TEXEL_OFFSET;
jint SF_arc_graphics_GL30_GL_MAX_PROGRAM_TEXEL_OFFSET;
jint SF_arc_graphics_GL30_GL_MAX_VARYING_COMPONENTS;
jint SF_arc_graphics_GL30_GL_TEXTURE_2D_ARRAY;
jint SF_arc_graphics_GL30_GL_TEXTURE_BINDING_2D_ARRAY;
jint SF_arc_graphics_GL30_GL_R11F_G11F_B10F;
jint SF_arc_graphics_GL30_GL_UNSIGNED_INT_10F_11F_11F_REV;
jint SF_arc_graphics_GL30_GL_RGB9_E5;
jint SF_arc_graphics_GL30_GL_UNSIGNED_INT_5_9_9_9_REV;
jint SF_arc_graphics_GL30_GL_TRANSFORM_FEEDBACK_VARYING_MAX_LENGTH;
jint SF_arc_graphics_GL30_GL_TRANSFORM_FEEDBACK_BUFFER_MODE;
jint SF_arc_graphics_GL30_GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_COMPONENTS;
jint SF_arc_graphics_GL30_GL_TRANSFORM_FEEDBACK_VARYINGS;
jint SF_arc_graphics_GL30_GL_TRANSFORM_FEEDBACK_BUFFER_START;
jint SF_arc_graphics_GL30_GL_TRANSFORM_FEEDBACK_BUFFER_SIZE;
jint SF_arc_graphics_GL30_GL_TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN;
jint SF_arc_graphics_GL30_GL_RASTERIZER_DISCARD;
jint SF_arc_graphics_GL30_GL_MAX_TRANSFORM_FEEDBACK_INTERLEAVED_COMPONENTS;
jint SF_arc_graphics_GL30_GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_ATTRIBS;
jint SF_arc_graphics_GL30_GL_INTERLEAVED_ATTRIBS;
jint SF_arc_graphics_GL30_GL_SEPARATE_ATTRIBS;
jint SF_arc_graphics_GL30_GL_TRANSFORM_FEEDBACK_BUFFER;
jint SF_arc_graphics_GL30_GL_TRANSFORM_FEEDBACK_BUFFER_BINDING;
jint SF_arc_graphics_GL30_GL_RGBA32UI;
jint SF_arc_graphics_GL30_GL_RGB32UI;
jint SF_arc_graphics_GL30_GL_RGBA16UI;
jint SF_arc_graphics_GL30_GL_RGB16UI;
jint SF_arc_graphics_GL30_GL_RGBA8UI;
jint SF_arc_graphics_GL30_GL_RGB8UI;
jint SF_arc_graphics_GL30_GL_RGBA32I;
jint SF_arc_graphics_GL30_GL_RGB32I;
jint SF_arc_graphics_GL30_GL_RGBA16I;
jint SF_arc_graphics_GL30_GL_RGB16I;
jint SF_arc_graphics_GL30_GL_RGBA8I;
jint SF_arc_graphics_GL30_GL_RGB8I;
jint SF_arc_graphics_GL30_GL_RED_INTEGER;
jint SF_arc_graphics_GL30_GL_RGB_INTEGER;
jint SF_arc_graphics_GL30_GL_RGBA_INTEGER;
jint SF_arc_graphics_GL30_GL_SAMPLER_2D_ARRAY;
jint SF_arc_graphics_GL30_GL_SAMPLER_2D_ARRAY_SHADOW;
jint SF_arc_graphics_GL30_GL_SAMPLER_CUBE_SHADOW;
jint SF_arc_graphics_GL30_GL_UNSIGNED_INT_VEC2;
jint SF_arc_graphics_GL30_GL_UNSIGNED_INT_VEC3;
jint SF_arc_graphics_GL30_GL_UNSIGNED_INT_VEC4;
jint SF_arc_graphics_GL30_GL_INT_SAMPLER_2D;
jint SF_arc_graphics_GL30_GL_INT_SAMPLER_3D;
jint SF_arc_graphics_GL30_GL_INT_SAMPLER_CUBE;
jint SF_arc_graphics_GL30_GL_INT_SAMPLER_2D_ARRAY;
jint SF_arc_graphics_GL30_GL_UNSIGNED_INT_SAMPLER_2D;
jint SF_arc_graphics_GL30_GL_UNSIGNED_INT_SAMPLER_3D;
jint SF_arc_graphics_GL30_GL_UNSIGNED_INT_SAMPLER_CUBE;
jint SF_arc_graphics_GL30_GL_UNSIGNED_INT_SAMPLER_2D_ARRAY;
jint SF_arc_graphics_GL30_GL_BUFFER_ACCESS_FLAGS;
jint SF_arc_graphics_GL30_GL_BUFFER_MAP_LENGTH;
jint SF_arc_graphics_GL30_GL_BUFFER_MAP_OFFSET;
jint SF_arc_graphics_GL30_GL_DEPTH_COMPONENT32F;
jint SF_arc_graphics_GL30_GL_DEPTH32F_STENCIL8;
jint SF_arc_graphics_GL30_GL_FLOAT_32_UNSIGNED_INT_24_8_REV;
jint SF_arc_graphics_GL30_GL_FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING;
jint SF_arc_graphics_GL30_GL_FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE;
jint SF_arc_graphics_GL30_GL_FRAMEBUFFER_ATTACHMENT_RED_SIZE;
jint SF_arc_graphics_GL30_GL_FRAMEBUFFER_ATTACHMENT_GREEN_SIZE;
jint SF_arc_graphics_GL30_GL_FRAMEBUFFER_ATTACHMENT_BLUE_SIZE;
jint SF_arc_graphics_GL30_GL_FRAMEBUFFER_ATTACHMENT_ALPHA_SIZE;
jint SF_arc_graphics_GL30_GL_FRAMEBUFFER_ATTACHMENT_DEPTH_SIZE;
jint SF_arc_graphics_GL30_GL_FRAMEBUFFER_ATTACHMENT_STENCIL_SIZE;
jint SF_arc_graphics_GL30_GL_FRAMEBUFFER_DEFAULT;
jint SF_arc_graphics_GL30_GL_FRAMEBUFFER_UNDEFINED;
jint SF_arc_graphics_GL30_GL_DEPTH_STENCIL_ATTACHMENT;
jint SF_arc_graphics_GL30_GL_DEPTH_STENCIL;
jint SF_arc_graphics_GL30_GL_UNSIGNED_INT_24_8;
jint SF_arc_graphics_GL30_GL_DEPTH24_STENCIL8;
jint SF_arc_graphics_GL30_GL_UNSIGNED_NORMALIZED;
jint SF_arc_graphics_GL30_GL_DRAW_FRAMEBUFFER_BINDING;
jint SF_arc_graphics_GL30_GL_READ_FRAMEBUFFER;
jint SF_arc_graphics_GL30_GL_DRAW_FRAMEBUFFER;
jint SF_arc_graphics_GL30_GL_READ_FRAMEBUFFER_BINDING;
jint SF_arc_graphics_GL30_GL_RENDERBUFFER_SAMPLES;
jint SF_arc_graphics_GL30_GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER;
jint SF_arc_graphics_GL30_GL_MAX_COLOR_ATTACHMENTS;
jint SF_arc_graphics_GL30_GL_COLOR_ATTACHMENT1;
jint SF_arc_graphics_GL30_GL_COLOR_ATTACHMENT2;
jint SF_arc_graphics_GL30_GL_COLOR_ATTACHMENT3;
jint SF_arc_graphics_GL30_GL_COLOR_ATTACHMENT4;
jint SF_arc_graphics_GL30_GL_COLOR_ATTACHMENT5;
jint SF_arc_graphics_GL30_GL_COLOR_ATTACHMENT6;
jint SF_arc_graphics_GL30_GL_COLOR_ATTACHMENT7;
jint SF_arc_graphics_GL30_GL_COLOR_ATTACHMENT8;
jint SF_arc_graphics_GL30_GL_COLOR_ATTACHMENT9;
jint SF_arc_graphics_GL30_GL_COLOR_ATTACHMENT10;
jint SF_arc_graphics_GL30_GL_COLOR_ATTACHMENT11;
jint SF_arc_graphics_GL30_GL_COLOR_ATTACHMENT12;
jint SF_arc_graphics_GL30_GL_COLOR_ATTACHMENT13;
jint SF_arc_graphics_GL30_GL_COLOR_ATTACHMENT14;
jint SF_arc_graphics_GL30_GL_COLOR_ATTACHMENT15;
jint SF_arc_graphics_GL30_GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE;
jint SF_arc_graphics_GL30_GL_MAX_SAMPLES;
jint SF_arc_graphics_GL30_GL_HALF_FLOAT;
jint SF_arc_graphics_GL30_GL_MAP_READ_BIT;
jint SF_arc_graphics_GL30_GL_MAP_WRITE_BIT;
jint SF_arc_graphics_GL30_GL_MAP_INVALIDATE_RANGE_BIT;
jint SF_arc_graphics_GL30_GL_MAP_INVALIDATE_BUFFER_BIT;
jint SF_arc_graphics_GL30_GL_MAP_FLUSH_EXPLICIT_BIT;
jint SF_arc_graphics_GL30_GL_MAP_UNSYNCHRONIZED_BIT;
jint SF_arc_graphics_GL30_GL_RG;
jint SF_arc_graphics_GL30_GL_RG_INTEGER;
jint SF_arc_graphics_GL30_GL_R8;
jint SF_arc_graphics_GL30_GL_RG8;
jint SF_arc_graphics_GL30_GL_R16F;
jint SF_arc_graphics_GL30_GL_R32F;
jint SF_arc_graphics_GL30_GL_RG16F;
jint SF_arc_graphics_GL30_GL_RG32F;
jint SF_arc_graphics_GL30_GL_R8I;
jint SF_arc_graphics_GL30_GL_R8UI;
jint SF_arc_graphics_GL30_GL_R16I;
jint SF_arc_graphics_GL30_GL_R16UI;
jint SF_arc_graphics_GL30_GL_R32I;
jint SF_arc_graphics_GL30_GL_R32UI;
jint SF_arc_graphics_GL30_GL_RG8I;
jint SF_arc_graphics_GL30_GL_RG8UI;
jint SF_arc_graphics_GL30_GL_RG16I;
jint SF_arc_graphics_GL30_GL_RG16UI;
jint SF_arc_graphics_GL30_GL_RG32I;
jint SF_arc_graphics_GL30_GL_RG32UI;
jint SF_arc_graphics_GL30_GL_VERTEX_ARRAY_BINDING;
jint SF_arc_graphics_GL30_GL_R8_SNORM;
jint SF_arc_graphics_GL30_GL_RG8_SNORM;
jint SF_arc_graphics_GL30_GL_RGB8_SNORM;
jint SF_arc_graphics_GL30_GL_RGBA8_SNORM;
jint SF_arc_graphics_GL30_GL_SIGNED_NORMALIZED;
jint SF_arc_graphics_GL30_GL_PRIMITIVE_RESTART_FIXED_INDEX;
jint SF_arc_graphics_GL30_GL_COPY_READ_BUFFER;
jint SF_arc_graphics_GL30_GL_COPY_WRITE_BUFFER;
jint SF_arc_graphics_GL30_GL_COPY_READ_BUFFER_BINDING;
jint SF_arc_graphics_GL30_GL_COPY_WRITE_BUFFER_BINDING;
jint SF_arc_graphics_GL30_GL_UNIFORM_BUFFER;
jint SF_arc_graphics_GL30_GL_UNIFORM_BUFFER_BINDING;
jint SF_arc_graphics_GL30_GL_UNIFORM_BUFFER_START;
jint SF_arc_graphics_GL30_GL_UNIFORM_BUFFER_SIZE;
jint SF_arc_graphics_GL30_GL_MAX_VERTEX_UNIFORM_BLOCKS;
jint SF_arc_graphics_GL30_GL_MAX_FRAGMENT_UNIFORM_BLOCKS;
jint SF_arc_graphics_GL30_GL_MAX_COMBINED_UNIFORM_BLOCKS;
jint SF_arc_graphics_GL30_GL_MAX_UNIFORM_BUFFER_BINDINGS;
jint SF_arc_graphics_GL30_GL_MAX_UNIFORM_BLOCK_SIZE;
jint SF_arc_graphics_GL30_GL_MAX_COMBINED_VERTEX_UNIFORM_COMPONENTS;
jint SF_arc_graphics_GL30_GL_MAX_COMBINED_FRAGMENT_UNIFORM_COMPONENTS;
jint SF_arc_graphics_GL30_GL_UNIFORM_BUFFER_OFFSET_ALIGNMENT;
jint SF_arc_graphics_GL30_GL_ACTIVE_UNIFORM_BLOCK_MAX_NAME_LENGTH;
jint SF_arc_graphics_GL30_GL_ACTIVE_UNIFORM_BLOCKS;
jint SF_arc_graphics_GL30_GL_UNIFORM_TYPE;
jint SF_arc_graphics_GL30_GL_UNIFORM_SIZE;
jint SF_arc_graphics_GL30_GL_UNIFORM_NAME_LENGTH;
jint SF_arc_graphics_GL30_GL_UNIFORM_BLOCK_INDEX;
jint SF_arc_graphics_GL30_GL_UNIFORM_OFFSET;
jint SF_arc_graphics_GL30_GL_UNIFORM_ARRAY_STRIDE;
jint SF_arc_graphics_GL30_GL_UNIFORM_MATRIX_STRIDE;
jint SF_arc_graphics_GL30_GL_UNIFORM_IS_ROW_MAJOR;
jint SF_arc_graphics_GL30_GL_UNIFORM_BLOCK_BINDING;
jint SF_arc_graphics_GL30_GL_UNIFORM_BLOCK_DATA_SIZE;
jint SF_arc_graphics_GL30_GL_UNIFORM_BLOCK_NAME_LENGTH;
jint SF_arc_graphics_GL30_GL_UNIFORM_BLOCK_ACTIVE_UNIFORMS;
jint SF_arc_graphics_GL30_GL_UNIFORM_BLOCK_ACTIVE_UNIFORM_INDICES;
jint SF_arc_graphics_GL30_GL_UNIFORM_BLOCK_REFERENCED_BY_VERTEX_SHADER;
jint SF_arc_graphics_GL30_GL_UNIFORM_BLOCK_REFERENCED_BY_FRAGMENT_SHADER;
jint SF_arc_graphics_GL30_GL_INVALID_INDEX;
jint SF_arc_graphics_GL30_GL_MAX_VERTEX_OUTPUT_COMPONENTS;
jint SF_arc_graphics_GL30_GL_MAX_FRAGMENT_INPUT_COMPONENTS;
jint SF_arc_graphics_GL30_GL_MAX_SERVER_WAIT_TIMEOUT;
jint SF_arc_graphics_GL30_GL_OBJECT_TYPE;
jint SF_arc_graphics_GL30_GL_SYNC_CONDITION;
jint SF_arc_graphics_GL30_GL_SYNC_STATUS;
jint SF_arc_graphics_GL30_GL_SYNC_FLAGS;
jint SF_arc_graphics_GL30_GL_SYNC_FENCE;
jint SF_arc_graphics_GL30_GL_SYNC_GPU_COMMANDS_COMPLETE;
jint SF_arc_graphics_GL30_GL_UNSIGNALED;
jint SF_arc_graphics_GL30_GL_SIGNALED;
jint SF_arc_graphics_GL30_GL_ALREADY_SIGNALED;
jint SF_arc_graphics_GL30_GL_TIMEOUT_EXPIRED;
jint SF_arc_graphics_GL30_GL_CONDITION_SATISFIED;
jint SF_arc_graphics_GL30_GL_WAIT_FAILED;
jint SF_arc_graphics_GL30_GL_SYNC_FLUSH_COMMANDS_BIT;
jlong SF_arc_graphics_GL30_GL_TIMEOUT_IGNORED;
jint SF_arc_graphics_GL30_GL_VERTEX_ATTRIB_ARRAY_DIVISOR;
jint SF_arc_graphics_GL30_GL_ANY_SAMPLES_PASSED;
jint SF_arc_graphics_GL30_GL_ANY_SAMPLES_PASSED_CONSERVATIVE;
jint SF_arc_graphics_GL30_GL_SAMPLER_BINDING;
jint SF_arc_graphics_GL30_GL_RGB10_A2UI;
jint SF_arc_graphics_GL30_GL_TEXTURE_SWIZZLE_R;
jint SF_arc_graphics_GL30_GL_TEXTURE_SWIZZLE_G;
jint SF_arc_graphics_GL30_GL_TEXTURE_SWIZZLE_B;
jint SF_arc_graphics_GL30_GL_TEXTURE_SWIZZLE_A;
jint SF_arc_graphics_GL30_GL_GREEN;
jint SF_arc_graphics_GL30_GL_BLUE;
jint SF_arc_graphics_GL30_GL_INT_2_10_10_10_REV;
jint SF_arc_graphics_GL30_GL_TRANSFORM_FEEDBACK;
jint SF_arc_graphics_GL30_GL_TRANSFORM_FEEDBACK_PAUSED;
jint SF_arc_graphics_GL30_GL_TRANSFORM_FEEDBACK_ACTIVE;
jint SF_arc_graphics_GL30_GL_TRANSFORM_FEEDBACK_BINDING;
jint SF_arc_graphics_GL30_GL_PROGRAM_BINARY_RETRIEVABLE_HINT;
jint SF_arc_graphics_GL30_GL_PROGRAM_BINARY_LENGTH;
jint SF_arc_graphics_GL30_GL_NUM_PROGRAM_BINARY_FORMATS;
jint SF_arc_graphics_GL30_GL_PROGRAM_BINARY_FORMATS;
jint SF_arc_graphics_GL30_GL_COMPRESSED_R11_EAC;
jint SF_arc_graphics_GL30_GL_COMPRESSED_SIGNED_R11_EAC;
jint SF_arc_graphics_GL30_GL_COMPRESSED_RG11_EAC;
jint SF_arc_graphics_GL30_GL_COMPRESSED_SIGNED_RG11_EAC;
jint SF_arc_graphics_GL30_GL_COMPRESSED_RGB8_ETC2;
jint SF_arc_graphics_GL30_GL_COMPRESSED_SRGB8_ETC2;
jint SF_arc_graphics_GL30_GL_COMPRESSED_RGB8_PUNCHTHROUGH_ALPHA1_ETC2;
jint SF_arc_graphics_GL30_GL_COMPRESSED_SRGB8_PUNCHTHROUGH_ALPHA1_ETC2;
jint SF_arc_graphics_GL30_GL_COMPRESSED_RGBA8_ETC2_EAC;
jint SF_arc_graphics_GL30_GL_COMPRESSED_SRGB8_ALPHA8_ETC2_EAC;
jint SF_arc_graphics_GL30_GL_TEXTURE_IMMUTABLE_FORMAT;
jint SF_arc_graphics_GL30_GL_MAX_ELEMENT_INDEX;
jint SF_arc_graphics_GL30_GL_NUM_SAMPLE_COUNTS;
jint SF_arc_graphics_GL30_GL_TEXTURE_IMMUTABLE_LEVELS;

void mark_arc_graphics_GL30(jobject object, jint mark, jint depth) {
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
	auto self = (arc_graphics_GL30 *) object;
}

void clinit_arc_graphics_GL30(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_arc_graphics_GL30_GL_READ_BUFFER = jint(3074);
	SF_arc_graphics_GL30_GL_UNPACK_ROW_LENGTH = jint(3314);
	SF_arc_graphics_GL30_GL_UNPACK_SKIP_ROWS = jint(3315);
	SF_arc_graphics_GL30_GL_UNPACK_SKIP_PIXELS = jint(3316);
	SF_arc_graphics_GL30_GL_PACK_ROW_LENGTH = jint(3330);
	SF_arc_graphics_GL30_GL_PACK_SKIP_ROWS = jint(3331);
	SF_arc_graphics_GL30_GL_PACK_SKIP_PIXELS = jint(3332);
	SF_arc_graphics_GL30_GL_COLOR = jint(6144);
	SF_arc_graphics_GL30_GL_DEPTH = jint(6145);
	SF_arc_graphics_GL30_GL_STENCIL = jint(6146);
	SF_arc_graphics_GL30_GL_RED = jint(6403);
	SF_arc_graphics_GL30_GL_RGB8 = jint(32849);
	SF_arc_graphics_GL30_GL_RGBA8 = jint(32856);
	SF_arc_graphics_GL30_GL_RGB10_A2 = jint(32857);
	SF_arc_graphics_GL30_GL_TEXTURE_BINDING_3D = jint(32874);
	SF_arc_graphics_GL30_GL_UNPACK_SKIP_IMAGES = jint(32877);
	SF_arc_graphics_GL30_GL_UNPACK_IMAGE_HEIGHT = jint(32878);
	SF_arc_graphics_GL30_GL_TEXTURE_3D = jint(32879);
	SF_arc_graphics_GL30_GL_TEXTURE_WRAP_R = jint(32882);
	SF_arc_graphics_GL30_GL_MAX_3D_TEXTURE_SIZE = jint(32883);
	SF_arc_graphics_GL30_GL_UNSIGNED_INT_2_10_10_10_REV = jint(33640);
	SF_arc_graphics_GL30_GL_MAX_ELEMENTS_VERTICES = jint(33000);
	SF_arc_graphics_GL30_GL_MAX_ELEMENTS_INDICES = jint(33001);
	SF_arc_graphics_GL30_GL_TEXTURE_MIN_LOD = jint(33082);
	SF_arc_graphics_GL30_GL_TEXTURE_MAX_LOD = jint(33083);
	SF_arc_graphics_GL30_GL_TEXTURE_BASE_LEVEL = jint(33084);
	SF_arc_graphics_GL30_GL_TEXTURE_MAX_LEVEL = jint(33085);
	SF_arc_graphics_GL30_GL_MIN = jint(32775);
	SF_arc_graphics_GL30_GL_MAX = jint(32776);
	SF_arc_graphics_GL30_GL_DEPTH_COMPONENT24 = jint(33190);
	SF_arc_graphics_GL30_GL_MAX_TEXTURE_LOD_BIAS = jint(34045);
	SF_arc_graphics_GL30_GL_TEXTURE_COMPARE_MODE = jint(34892);
	SF_arc_graphics_GL30_GL_TEXTURE_COMPARE_FUNC = jint(34893);
	SF_arc_graphics_GL30_GL_CURRENT_QUERY = jint(34917);
	SF_arc_graphics_GL30_GL_QUERY_RESULT = jint(34918);
	SF_arc_graphics_GL30_GL_QUERY_RESULT_AVAILABLE = jint(34919);
	SF_arc_graphics_GL30_GL_BUFFER_MAPPED = jint(35004);
	SF_arc_graphics_GL30_GL_BUFFER_MAP_POINTER = jint(35005);
	SF_arc_graphics_GL30_GL_STREAM_READ = jint(35041);
	SF_arc_graphics_GL30_GL_STREAM_COPY = jint(35042);
	SF_arc_graphics_GL30_GL_STATIC_READ = jint(35045);
	SF_arc_graphics_GL30_GL_STATIC_COPY = jint(35046);
	SF_arc_graphics_GL30_GL_DYNAMIC_READ = jint(35049);
	SF_arc_graphics_GL30_GL_DYNAMIC_COPY = jint(35050);
	SF_arc_graphics_GL30_GL_MAX_DRAW_BUFFERS = jint(34852);
	SF_arc_graphics_GL30_GL_DRAW_BUFFER0 = jint(34853);
	SF_arc_graphics_GL30_GL_DRAW_BUFFER1 = jint(34854);
	SF_arc_graphics_GL30_GL_DRAW_BUFFER2 = jint(34855);
	SF_arc_graphics_GL30_GL_DRAW_BUFFER3 = jint(34856);
	SF_arc_graphics_GL30_GL_DRAW_BUFFER4 = jint(34857);
	SF_arc_graphics_GL30_GL_DRAW_BUFFER5 = jint(34858);
	SF_arc_graphics_GL30_GL_DRAW_BUFFER6 = jint(34859);
	SF_arc_graphics_GL30_GL_DRAW_BUFFER7 = jint(34860);
	SF_arc_graphics_GL30_GL_DRAW_BUFFER8 = jint(34861);
	SF_arc_graphics_GL30_GL_DRAW_BUFFER9 = jint(34862);
	SF_arc_graphics_GL30_GL_DRAW_BUFFER10 = jint(34863);
	SF_arc_graphics_GL30_GL_DRAW_BUFFER11 = jint(34864);
	SF_arc_graphics_GL30_GL_DRAW_BUFFER12 = jint(34865);
	SF_arc_graphics_GL30_GL_DRAW_BUFFER13 = jint(34866);
	SF_arc_graphics_GL30_GL_DRAW_BUFFER14 = jint(34867);
	SF_arc_graphics_GL30_GL_DRAW_BUFFER15 = jint(34868);
	SF_arc_graphics_GL30_GL_MAX_FRAGMENT_UNIFORM_COMPONENTS = jint(35657);
	SF_arc_graphics_GL30_GL_MAX_VERTEX_UNIFORM_COMPONENTS = jint(35658);
	SF_arc_graphics_GL30_GL_SAMPLER_3D = jint(35679);
	SF_arc_graphics_GL30_GL_SAMPLER_2D_SHADOW = jint(35682);
	SF_arc_graphics_GL30_GL_FRAGMENT_SHADER_DERIVATIVE_HINT = jint(35723);
	SF_arc_graphics_GL30_GL_PIXEL_PACK_BUFFER = jint(35051);
	SF_arc_graphics_GL30_GL_PIXEL_UNPACK_BUFFER = jint(35052);
	SF_arc_graphics_GL30_GL_PIXEL_PACK_BUFFER_BINDING = jint(35053);
	SF_arc_graphics_GL30_GL_PIXEL_UNPACK_BUFFER_BINDING = jint(35055);
	SF_arc_graphics_GL30_GL_FLOAT_MAT2x3 = jint(35685);
	SF_arc_graphics_GL30_GL_FLOAT_MAT2x4 = jint(35686);
	SF_arc_graphics_GL30_GL_FLOAT_MAT3x2 = jint(35687);
	SF_arc_graphics_GL30_GL_FLOAT_MAT3x4 = jint(35688);
	SF_arc_graphics_GL30_GL_FLOAT_MAT4x2 = jint(35689);
	SF_arc_graphics_GL30_GL_FLOAT_MAT4x3 = jint(35690);
	SF_arc_graphics_GL30_GL_SRGB = jint(35904);
	SF_arc_graphics_GL30_GL_SRGB8 = jint(35905);
	SF_arc_graphics_GL30_GL_SRGB8_ALPHA8 = jint(35907);
	SF_arc_graphics_GL30_GL_COMPARE_REF_TO_TEXTURE = jint(34894);
	SF_arc_graphics_GL30_GL_MAJOR_VERSION = jint(33307);
	SF_arc_graphics_GL30_GL_MINOR_VERSION = jint(33308);
	SF_arc_graphics_GL30_GL_NUM_EXTENSIONS = jint(33309);
	SF_arc_graphics_GL30_GL_RGBA32F = jint(34836);
	SF_arc_graphics_GL30_GL_RGB32F = jint(34837);
	SF_arc_graphics_GL30_GL_RGBA16F = jint(34842);
	SF_arc_graphics_GL30_GL_RGB16F = jint(34843);
	SF_arc_graphics_GL30_GL_VERTEX_ATTRIB_ARRAY_INTEGER = jint(35069);
	SF_arc_graphics_GL30_GL_MAX_ARRAY_TEXTURE_LAYERS = jint(35071);
	SF_arc_graphics_GL30_GL_MIN_PROGRAM_TEXEL_OFFSET = jint(35076);
	SF_arc_graphics_GL30_GL_MAX_PROGRAM_TEXEL_OFFSET = jint(35077);
	SF_arc_graphics_GL30_GL_MAX_VARYING_COMPONENTS = jint(35659);
	SF_arc_graphics_GL30_GL_TEXTURE_2D_ARRAY = jint(35866);
	SF_arc_graphics_GL30_GL_TEXTURE_BINDING_2D_ARRAY = jint(35869);
	SF_arc_graphics_GL30_GL_R11F_G11F_B10F = jint(35898);
	SF_arc_graphics_GL30_GL_UNSIGNED_INT_10F_11F_11F_REV = jint(35899);
	SF_arc_graphics_GL30_GL_RGB9_E5 = jint(35901);
	SF_arc_graphics_GL30_GL_UNSIGNED_INT_5_9_9_9_REV = jint(35902);
	SF_arc_graphics_GL30_GL_TRANSFORM_FEEDBACK_VARYING_MAX_LENGTH = jint(35958);
	SF_arc_graphics_GL30_GL_TRANSFORM_FEEDBACK_BUFFER_MODE = jint(35967);
	SF_arc_graphics_GL30_GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_COMPONENTS = jint(35968);
	SF_arc_graphics_GL30_GL_TRANSFORM_FEEDBACK_VARYINGS = jint(35971);
	SF_arc_graphics_GL30_GL_TRANSFORM_FEEDBACK_BUFFER_START = jint(35972);
	SF_arc_graphics_GL30_GL_TRANSFORM_FEEDBACK_BUFFER_SIZE = jint(35973);
	SF_arc_graphics_GL30_GL_TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN = jint(35976);
	SF_arc_graphics_GL30_GL_RASTERIZER_DISCARD = jint(35977);
	SF_arc_graphics_GL30_GL_MAX_TRANSFORM_FEEDBACK_INTERLEAVED_COMPONENTS = jint(35978);
	SF_arc_graphics_GL30_GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_ATTRIBS = jint(35979);
	SF_arc_graphics_GL30_GL_INTERLEAVED_ATTRIBS = jint(35980);
	SF_arc_graphics_GL30_GL_SEPARATE_ATTRIBS = jint(35981);
	SF_arc_graphics_GL30_GL_TRANSFORM_FEEDBACK_BUFFER = jint(35982);
	SF_arc_graphics_GL30_GL_TRANSFORM_FEEDBACK_BUFFER_BINDING = jint(35983);
	SF_arc_graphics_GL30_GL_RGBA32UI = jint(36208);
	SF_arc_graphics_GL30_GL_RGB32UI = jint(36209);
	SF_arc_graphics_GL30_GL_RGBA16UI = jint(36214);
	SF_arc_graphics_GL30_GL_RGB16UI = jint(36215);
	SF_arc_graphics_GL30_GL_RGBA8UI = jint(36220);
	SF_arc_graphics_GL30_GL_RGB8UI = jint(36221);
	SF_arc_graphics_GL30_GL_RGBA32I = jint(36226);
	SF_arc_graphics_GL30_GL_RGB32I = jint(36227);
	SF_arc_graphics_GL30_GL_RGBA16I = jint(36232);
	SF_arc_graphics_GL30_GL_RGB16I = jint(36233);
	SF_arc_graphics_GL30_GL_RGBA8I = jint(36238);
	SF_arc_graphics_GL30_GL_RGB8I = jint(36239);
	SF_arc_graphics_GL30_GL_RED_INTEGER = jint(36244);
	SF_arc_graphics_GL30_GL_RGB_INTEGER = jint(36248);
	SF_arc_graphics_GL30_GL_RGBA_INTEGER = jint(36249);
	SF_arc_graphics_GL30_GL_SAMPLER_2D_ARRAY = jint(36289);
	SF_arc_graphics_GL30_GL_SAMPLER_2D_ARRAY_SHADOW = jint(36292);
	SF_arc_graphics_GL30_GL_SAMPLER_CUBE_SHADOW = jint(36293);
	SF_arc_graphics_GL30_GL_UNSIGNED_INT_VEC2 = jint(36294);
	SF_arc_graphics_GL30_GL_UNSIGNED_INT_VEC3 = jint(36295);
	SF_arc_graphics_GL30_GL_UNSIGNED_INT_VEC4 = jint(36296);
	SF_arc_graphics_GL30_GL_INT_SAMPLER_2D = jint(36298);
	SF_arc_graphics_GL30_GL_INT_SAMPLER_3D = jint(36299);
	SF_arc_graphics_GL30_GL_INT_SAMPLER_CUBE = jint(36300);
	SF_arc_graphics_GL30_GL_INT_SAMPLER_2D_ARRAY = jint(36303);
	SF_arc_graphics_GL30_GL_UNSIGNED_INT_SAMPLER_2D = jint(36306);
	SF_arc_graphics_GL30_GL_UNSIGNED_INT_SAMPLER_3D = jint(36307);
	SF_arc_graphics_GL30_GL_UNSIGNED_INT_SAMPLER_CUBE = jint(36308);
	SF_arc_graphics_GL30_GL_UNSIGNED_INT_SAMPLER_2D_ARRAY = jint(36311);
	SF_arc_graphics_GL30_GL_BUFFER_ACCESS_FLAGS = jint(37151);
	SF_arc_graphics_GL30_GL_BUFFER_MAP_LENGTH = jint(37152);
	SF_arc_graphics_GL30_GL_BUFFER_MAP_OFFSET = jint(37153);
	SF_arc_graphics_GL30_GL_DEPTH_COMPONENT32F = jint(36012);
	SF_arc_graphics_GL30_GL_DEPTH32F_STENCIL8 = jint(36013);
	SF_arc_graphics_GL30_GL_FLOAT_32_UNSIGNED_INT_24_8_REV = jint(36269);
	SF_arc_graphics_GL30_GL_FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING = jint(33296);
	SF_arc_graphics_GL30_GL_FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE = jint(33297);
	SF_arc_graphics_GL30_GL_FRAMEBUFFER_ATTACHMENT_RED_SIZE = jint(33298);
	SF_arc_graphics_GL30_GL_FRAMEBUFFER_ATTACHMENT_GREEN_SIZE = jint(33299);
	SF_arc_graphics_GL30_GL_FRAMEBUFFER_ATTACHMENT_BLUE_SIZE = jint(33300);
	SF_arc_graphics_GL30_GL_FRAMEBUFFER_ATTACHMENT_ALPHA_SIZE = jint(33301);
	SF_arc_graphics_GL30_GL_FRAMEBUFFER_ATTACHMENT_DEPTH_SIZE = jint(33302);
	SF_arc_graphics_GL30_GL_FRAMEBUFFER_ATTACHMENT_STENCIL_SIZE = jint(33303);
	SF_arc_graphics_GL30_GL_FRAMEBUFFER_DEFAULT = jint(33304);
	SF_arc_graphics_GL30_GL_FRAMEBUFFER_UNDEFINED = jint(33305);
	SF_arc_graphics_GL30_GL_DEPTH_STENCIL_ATTACHMENT = jint(33306);
	SF_arc_graphics_GL30_GL_DEPTH_STENCIL = jint(34041);
	SF_arc_graphics_GL30_GL_UNSIGNED_INT_24_8 = jint(34042);
	SF_arc_graphics_GL30_GL_DEPTH24_STENCIL8 = jint(35056);
	SF_arc_graphics_GL30_GL_UNSIGNED_NORMALIZED = jint(35863);
	SF_arc_graphics_GL30_GL_DRAW_FRAMEBUFFER_BINDING = jint(36006);
	SF_arc_graphics_GL30_GL_READ_FRAMEBUFFER = jint(36008);
	SF_arc_graphics_GL30_GL_DRAW_FRAMEBUFFER = jint(36009);
	SF_arc_graphics_GL30_GL_READ_FRAMEBUFFER_BINDING = jint(36010);
	SF_arc_graphics_GL30_GL_RENDERBUFFER_SAMPLES = jint(36011);
	SF_arc_graphics_GL30_GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER = jint(36052);
	SF_arc_graphics_GL30_GL_MAX_COLOR_ATTACHMENTS = jint(36063);
	SF_arc_graphics_GL30_GL_COLOR_ATTACHMENT1 = jint(36065);
	SF_arc_graphics_GL30_GL_COLOR_ATTACHMENT2 = jint(36066);
	SF_arc_graphics_GL30_GL_COLOR_ATTACHMENT3 = jint(36067);
	SF_arc_graphics_GL30_GL_COLOR_ATTACHMENT4 = jint(36068);
	SF_arc_graphics_GL30_GL_COLOR_ATTACHMENT5 = jint(36069);
	SF_arc_graphics_GL30_GL_COLOR_ATTACHMENT6 = jint(36070);
	SF_arc_graphics_GL30_GL_COLOR_ATTACHMENT7 = jint(36071);
	SF_arc_graphics_GL30_GL_COLOR_ATTACHMENT8 = jint(36072);
	SF_arc_graphics_GL30_GL_COLOR_ATTACHMENT9 = jint(36073);
	SF_arc_graphics_GL30_GL_COLOR_ATTACHMENT10 = jint(36074);
	SF_arc_graphics_GL30_GL_COLOR_ATTACHMENT11 = jint(36075);
	SF_arc_graphics_GL30_GL_COLOR_ATTACHMENT12 = jint(36076);
	SF_arc_graphics_GL30_GL_COLOR_ATTACHMENT13 = jint(36077);
	SF_arc_graphics_GL30_GL_COLOR_ATTACHMENT14 = jint(36078);
	SF_arc_graphics_GL30_GL_COLOR_ATTACHMENT15 = jint(36079);
	SF_arc_graphics_GL30_GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE = jint(36182);
	SF_arc_graphics_GL30_GL_MAX_SAMPLES = jint(36183);
	SF_arc_graphics_GL30_GL_HALF_FLOAT = jint(5131);
	SF_arc_graphics_GL30_GL_MAP_READ_BIT = jint(1);
	SF_arc_graphics_GL30_GL_MAP_WRITE_BIT = jint(2);
	SF_arc_graphics_GL30_GL_MAP_INVALIDATE_RANGE_BIT = jint(4);
	SF_arc_graphics_GL30_GL_MAP_INVALIDATE_BUFFER_BIT = jint(8);
	SF_arc_graphics_GL30_GL_MAP_FLUSH_EXPLICIT_BIT = jint(16);
	SF_arc_graphics_GL30_GL_MAP_UNSYNCHRONIZED_BIT = jint(32);
	SF_arc_graphics_GL30_GL_RG = jint(33319);
	SF_arc_graphics_GL30_GL_RG_INTEGER = jint(33320);
	SF_arc_graphics_GL30_GL_R8 = jint(33321);
	SF_arc_graphics_GL30_GL_RG8 = jint(33323);
	SF_arc_graphics_GL30_GL_R16F = jint(33325);
	SF_arc_graphics_GL30_GL_R32F = jint(33326);
	SF_arc_graphics_GL30_GL_RG16F = jint(33327);
	SF_arc_graphics_GL30_GL_RG32F = jint(33328);
	SF_arc_graphics_GL30_GL_R8I = jint(33329);
	SF_arc_graphics_GL30_GL_R8UI = jint(33330);
	SF_arc_graphics_GL30_GL_R16I = jint(33331);
	SF_arc_graphics_GL30_GL_R16UI = jint(33332);
	SF_arc_graphics_GL30_GL_R32I = jint(33333);
	SF_arc_graphics_GL30_GL_R32UI = jint(33334);
	SF_arc_graphics_GL30_GL_RG8I = jint(33335);
	SF_arc_graphics_GL30_GL_RG8UI = jint(33336);
	SF_arc_graphics_GL30_GL_RG16I = jint(33337);
	SF_arc_graphics_GL30_GL_RG16UI = jint(33338);
	SF_arc_graphics_GL30_GL_RG32I = jint(33339);
	SF_arc_graphics_GL30_GL_RG32UI = jint(33340);
	SF_arc_graphics_GL30_GL_VERTEX_ARRAY_BINDING = jint(34229);
	SF_arc_graphics_GL30_GL_R8_SNORM = jint(36756);
	SF_arc_graphics_GL30_GL_RG8_SNORM = jint(36757);
	SF_arc_graphics_GL30_GL_RGB8_SNORM = jint(36758);
	SF_arc_graphics_GL30_GL_RGBA8_SNORM = jint(36759);
	SF_arc_graphics_GL30_GL_SIGNED_NORMALIZED = jint(36764);
	SF_arc_graphics_GL30_GL_PRIMITIVE_RESTART_FIXED_INDEX = jint(36201);
	SF_arc_graphics_GL30_GL_COPY_READ_BUFFER = jint(36662);
	SF_arc_graphics_GL30_GL_COPY_WRITE_BUFFER = jint(36663);
	SF_arc_graphics_GL30_GL_COPY_READ_BUFFER_BINDING = jint(36662);
	SF_arc_graphics_GL30_GL_COPY_WRITE_BUFFER_BINDING = jint(36663);
	SF_arc_graphics_GL30_GL_UNIFORM_BUFFER = jint(35345);
	SF_arc_graphics_GL30_GL_UNIFORM_BUFFER_BINDING = jint(35368);
	SF_arc_graphics_GL30_GL_UNIFORM_BUFFER_START = jint(35369);
	SF_arc_graphics_GL30_GL_UNIFORM_BUFFER_SIZE = jint(35370);
	SF_arc_graphics_GL30_GL_MAX_VERTEX_UNIFORM_BLOCKS = jint(35371);
	SF_arc_graphics_GL30_GL_MAX_FRAGMENT_UNIFORM_BLOCKS = jint(35373);
	SF_arc_graphics_GL30_GL_MAX_COMBINED_UNIFORM_BLOCKS = jint(35374);
	SF_arc_graphics_GL30_GL_MAX_UNIFORM_BUFFER_BINDINGS = jint(35375);
	SF_arc_graphics_GL30_GL_MAX_UNIFORM_BLOCK_SIZE = jint(35376);
	SF_arc_graphics_GL30_GL_MAX_COMBINED_VERTEX_UNIFORM_COMPONENTS = jint(35377);
	SF_arc_graphics_GL30_GL_MAX_COMBINED_FRAGMENT_UNIFORM_COMPONENTS = jint(35379);
	SF_arc_graphics_GL30_GL_UNIFORM_BUFFER_OFFSET_ALIGNMENT = jint(35380);
	SF_arc_graphics_GL30_GL_ACTIVE_UNIFORM_BLOCK_MAX_NAME_LENGTH = jint(35381);
	SF_arc_graphics_GL30_GL_ACTIVE_UNIFORM_BLOCKS = jint(35382);
	SF_arc_graphics_GL30_GL_UNIFORM_TYPE = jint(35383);
	SF_arc_graphics_GL30_GL_UNIFORM_SIZE = jint(35384);
	SF_arc_graphics_GL30_GL_UNIFORM_NAME_LENGTH = jint(35385);
	SF_arc_graphics_GL30_GL_UNIFORM_BLOCK_INDEX = jint(35386);
	SF_arc_graphics_GL30_GL_UNIFORM_OFFSET = jint(35387);
	SF_arc_graphics_GL30_GL_UNIFORM_ARRAY_STRIDE = jint(35388);
	SF_arc_graphics_GL30_GL_UNIFORM_MATRIX_STRIDE = jint(35389);
	SF_arc_graphics_GL30_GL_UNIFORM_IS_ROW_MAJOR = jint(35390);
	SF_arc_graphics_GL30_GL_UNIFORM_BLOCK_BINDING = jint(35391);
	SF_arc_graphics_GL30_GL_UNIFORM_BLOCK_DATA_SIZE = jint(35392);
	SF_arc_graphics_GL30_GL_UNIFORM_BLOCK_NAME_LENGTH = jint(35393);
	SF_arc_graphics_GL30_GL_UNIFORM_BLOCK_ACTIVE_UNIFORMS = jint(35394);
	SF_arc_graphics_GL30_GL_UNIFORM_BLOCK_ACTIVE_UNIFORM_INDICES = jint(35395);
	SF_arc_graphics_GL30_GL_UNIFORM_BLOCK_REFERENCED_BY_VERTEX_SHADER = jint(35396);
	SF_arc_graphics_GL30_GL_UNIFORM_BLOCK_REFERENCED_BY_FRAGMENT_SHADER = jint(35398);
	SF_arc_graphics_GL30_GL_INVALID_INDEX = jint(-1);
	SF_arc_graphics_GL30_GL_MAX_VERTEX_OUTPUT_COMPONENTS = jint(37154);
	SF_arc_graphics_GL30_GL_MAX_FRAGMENT_INPUT_COMPONENTS = jint(37157);
	SF_arc_graphics_GL30_GL_MAX_SERVER_WAIT_TIMEOUT = jint(37137);
	SF_arc_graphics_GL30_GL_OBJECT_TYPE = jint(37138);
	SF_arc_graphics_GL30_GL_SYNC_CONDITION = jint(37139);
	SF_arc_graphics_GL30_GL_SYNC_STATUS = jint(37140);
	SF_arc_graphics_GL30_GL_SYNC_FLAGS = jint(37141);
	SF_arc_graphics_GL30_GL_SYNC_FENCE = jint(37142);
	SF_arc_graphics_GL30_GL_SYNC_GPU_COMMANDS_COMPLETE = jint(37143);
	SF_arc_graphics_GL30_GL_UNSIGNALED = jint(37144);
	SF_arc_graphics_GL30_GL_SIGNALED = jint(37145);
	SF_arc_graphics_GL30_GL_ALREADY_SIGNALED = jint(37146);
	SF_arc_graphics_GL30_GL_TIMEOUT_EXPIRED = jint(37147);
	SF_arc_graphics_GL30_GL_CONDITION_SATISFIED = jint(37148);
	SF_arc_graphics_GL30_GL_WAIT_FAILED = jint(37149);
	SF_arc_graphics_GL30_GL_SYNC_FLUSH_COMMANDS_BIT = jint(1);
	SF_arc_graphics_GL30_GL_TIMEOUT_IGNORED = jlong(-1ll);
	SF_arc_graphics_GL30_GL_VERTEX_ATTRIB_ARRAY_DIVISOR = jint(35070);
	SF_arc_graphics_GL30_GL_ANY_SAMPLES_PASSED = jint(35887);
	SF_arc_graphics_GL30_GL_ANY_SAMPLES_PASSED_CONSERVATIVE = jint(36202);
	SF_arc_graphics_GL30_GL_SAMPLER_BINDING = jint(35097);
	SF_arc_graphics_GL30_GL_RGB10_A2UI = jint(36975);
	SF_arc_graphics_GL30_GL_TEXTURE_SWIZZLE_R = jint(36418);
	SF_arc_graphics_GL30_GL_TEXTURE_SWIZZLE_G = jint(36419);
	SF_arc_graphics_GL30_GL_TEXTURE_SWIZZLE_B = jint(36420);
	SF_arc_graphics_GL30_GL_TEXTURE_SWIZZLE_A = jint(36421);
	SF_arc_graphics_GL30_GL_GREEN = jint(6404);
	SF_arc_graphics_GL30_GL_BLUE = jint(6405);
	SF_arc_graphics_GL30_GL_INT_2_10_10_10_REV = jint(36255);
	SF_arc_graphics_GL30_GL_TRANSFORM_FEEDBACK = jint(36386);
	SF_arc_graphics_GL30_GL_TRANSFORM_FEEDBACK_PAUSED = jint(36387);
	SF_arc_graphics_GL30_GL_TRANSFORM_FEEDBACK_ACTIVE = jint(36388);
	SF_arc_graphics_GL30_GL_TRANSFORM_FEEDBACK_BINDING = jint(36389);
	SF_arc_graphics_GL30_GL_PROGRAM_BINARY_RETRIEVABLE_HINT = jint(33367);
	SF_arc_graphics_GL30_GL_PROGRAM_BINARY_LENGTH = jint(34625);
	SF_arc_graphics_GL30_GL_NUM_PROGRAM_BINARY_FORMATS = jint(34814);
	SF_arc_graphics_GL30_GL_PROGRAM_BINARY_FORMATS = jint(34815);
	SF_arc_graphics_GL30_GL_COMPRESSED_R11_EAC = jint(37488);
	SF_arc_graphics_GL30_GL_COMPRESSED_SIGNED_R11_EAC = jint(37489);
	SF_arc_graphics_GL30_GL_COMPRESSED_RG11_EAC = jint(37490);
	SF_arc_graphics_GL30_GL_COMPRESSED_SIGNED_RG11_EAC = jint(37491);
	SF_arc_graphics_GL30_GL_COMPRESSED_RGB8_ETC2 = jint(37492);
	SF_arc_graphics_GL30_GL_COMPRESSED_SRGB8_ETC2 = jint(37493);
	SF_arc_graphics_GL30_GL_COMPRESSED_RGB8_PUNCHTHROUGH_ALPHA1_ETC2 = jint(37494);
	SF_arc_graphics_GL30_GL_COMPRESSED_SRGB8_PUNCHTHROUGH_ALPHA1_ETC2 = jint(37495);
	SF_arc_graphics_GL30_GL_COMPRESSED_RGBA8_ETC2_EAC = jint(37496);
	SF_arc_graphics_GL30_GL_COMPRESSED_SRGB8_ALPHA8_ETC2_EAC = jint(37497);
	SF_arc_graphics_GL30_GL_TEXTURE_IMMUTABLE_FORMAT = jint(37167);
	SF_arc_graphics_GL30_GL_MAX_ELEMENT_INDEX = jint(36203);
	SF_arc_graphics_GL30_GL_NUM_SAMPLE_COUNTS = jint(37760);
	SF_arc_graphics_GL30_GL_TEXTURE_IMMUTABLE_LEVELS = jint(33503);
}

void *vtable_arc_graphics_GL30[] {
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
	{ "glReadBuffer", "(I)V" },
	{ "glDrawRangeElements", "(IIIIILjava/nio/Buffer;)V" },
	{ "glDrawRangeElements", "(IIIIII)V" },
	{ "glTexImage3D", "(IIIIIIIIILjava/nio/Buffer;)V" },
	{ "glTexImage3D", "(IIIIIIIIII)V" },
	{ "glTexSubImage3D", "(IIIIIIIIIILjava/nio/Buffer;)V" },
	{ "glTexSubImage3D", "(IIIIIIIIIII)V" },
	{ "glCopyTexSubImage3D", "(IIIIIIIII)V" },
	{ "glGenQueries", "(ILjava/nio/IntBuffer;)V" },
	{ "glDeleteQueries", "(ILjava/nio/IntBuffer;)V" },
	{ "glIsQuery", "(I)Z" },
	{ "glBeginQuery", "(II)V" },
	{ "glEndQuery", "(I)V" },
	{ "glGetQueryiv", "(IILjava/nio/IntBuffer;)V" },
	{ "glGetQueryObjectuiv", "(IILjava/nio/IntBuffer;)V" },
	{ "glUnmapBuffer", "(I)Z" },
	{ "glGetBufferPointerv", "(II)Ljava/nio/Buffer;" },
	{ "glDrawBuffers", "(ILjava/nio/IntBuffer;)V" },
	{ "glUniformMatrix2x3fv", "(IIZLjava/nio/FloatBuffer;)V" },
	{ "glUniformMatrix3x2fv", "(IIZLjava/nio/FloatBuffer;)V" },
	{ "glUniformMatrix2x4fv", "(IIZLjava/nio/FloatBuffer;)V" },
	{ "glUniformMatrix4x2fv", "(IIZLjava/nio/FloatBuffer;)V" },
	{ "glUniformMatrix3x4fv", "(IIZLjava/nio/FloatBuffer;)V" },
	{ "glUniformMatrix4x3fv", "(IIZLjava/nio/FloatBuffer;)V" },
	{ "glBlitFramebuffer", "(IIIIIIIIII)V" },
	{ "glRenderbufferStorageMultisample", "(IIIII)V" },
	{ "glFramebufferTextureLayer", "(IIIII)V" },
	{ "glFlushMappedBufferRange", "(III)V" },
	{ "glBindVertexArray", "(I)V" },
	{ "glDeleteVertexArrays", "(ILjava/nio/IntBuffer;)V" },
	{ "glGenVertexArrays", "(ILjava/nio/IntBuffer;)V" },
	{ "glIsVertexArray", "(I)Z" },
	{ "glBeginTransformFeedback", "(I)V" },
	{ "glEndTransformFeedback", "()V" },
	{ "glBindBufferRange", "(IIIII)V" },
	{ "glBindBufferBase", "(III)V" },
	{ "glTransformFeedbackVaryings", "(I[Ljava/lang/String;I)V" },
	{ "glVertexAttribIPointer", "(IIIII)V" },
	{ "glGetVertexAttribIiv", "(IILjava/nio/IntBuffer;)V" },
	{ "glGetVertexAttribIuiv", "(IILjava/nio/IntBuffer;)V" },
	{ "glVertexAttribI4i", "(IIIII)V" },
	{ "glVertexAttribI4ui", "(IIIII)V" },
	{ "glGetUniformuiv", "(IILjava/nio/IntBuffer;)V" },
	{ "glGetFragDataLocation", "(ILjava/lang/String;)I" },
	{ "glUniform1uiv", "(IILjava/nio/IntBuffer;)V" },
	{ "glUniform3uiv", "(IILjava/nio/IntBuffer;)V" },
	{ "glUniform4uiv", "(IILjava/nio/IntBuffer;)V" },
	{ "glClearBufferiv", "(IILjava/nio/IntBuffer;)V" },
	{ "glClearBufferuiv", "(IILjava/nio/IntBuffer;)V" },
	{ "glClearBufferfv", "(IILjava/nio/FloatBuffer;)V" },
	{ "glClearBufferfi", "(IIFI)V" },
	{ "glGetStringi", "(II)Ljava/lang/String;" },
	{ "glCopyBufferSubData", "(IIIII)V" },
	{ "glGetUniformIndices", "(I[Ljava/lang/String;Ljava/nio/IntBuffer;)V" },
	{ "glGetActiveUniformsiv", "(IILjava/nio/IntBuffer;ILjava/nio/IntBuffer;)V" },
	{ "glGetUniformBlockIndex", "(ILjava/lang/String;)I" },
	{ "glGetActiveUniformBlockiv", "(IIILjava/nio/IntBuffer;)V" },
	{ "glGetActiveUniformBlockName", "(IILjava/nio/Buffer;Ljava/nio/Buffer;)V" },
	{ "glUniformBlockBinding", "(III)V" },
	{ "glDrawArraysInstanced", "(IIII)V" },
	{ "glDrawElementsInstanced", "(IIIII)V" },
	{ "glGetInteger64v", "(ILjava/nio/LongBuffer;)V" },
	{ "glGetBufferParameteri64v", "(IILjava/nio/LongBuffer;)V" },
	{ "glGenSamplers", "(ILjava/nio/IntBuffer;)V" },
	{ "glDeleteSamplers", "(ILjava/nio/IntBuffer;)V" },
	{ "glIsSampler", "(I)Z" },
	{ "glBindSampler", "(II)V" },
	{ "glSamplerParameteri", "(III)V" },
	{ "glSamplerParameteriv", "(IILjava/nio/IntBuffer;)V" },
	{ "glSamplerParameterf", "(IIF)V" },
	{ "glSamplerParameterfv", "(IILjava/nio/FloatBuffer;)V" },
	{ "glGetSamplerParameteriv", "(IILjava/nio/IntBuffer;)V" },
	{ "glGetSamplerParameterfv", "(IILjava/nio/FloatBuffer;)V" },
	{ "glVertexAttribDivisor", "(II)V" },
	{ "glBindTransformFeedback", "(II)V" },
	{ "glDeleteTransformFeedbacks", "(ILjava/nio/IntBuffer;)V" },
	{ "glGenTransformFeedbacks", "(ILjava/nio/IntBuffer;)V" },
	{ "glIsTransformFeedback", "(I)Z" },
	{ "glPauseTransformFeedback", "()V" },
	{ "glResumeTransformFeedback", "()V" },
	{ "glProgramParameteri", "(III)V" },
	{ "glInvalidateFramebuffer", "(IILjava/nio/IntBuffer;)V" },
	{ "glInvalidateSubFramebuffer", "(IILjava/nio/IntBuffer;IIII)V" },
};

static jclass interfaces[] { &class_arc_graphics_GL20, };

static FieldMetadata fields[] {
	{ "GL_READ_BUFFER", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_READ_BUFFER, "I", 25 },
	{ "GL_UNPACK_ROW_LENGTH", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_UNPACK_ROW_LENGTH, "I", 25 },
	{ "GL_UNPACK_SKIP_ROWS", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_UNPACK_SKIP_ROWS, "I", 25 },
	{ "GL_UNPACK_SKIP_PIXELS", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_UNPACK_SKIP_PIXELS, "I", 25 },
	{ "GL_PACK_ROW_LENGTH", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_PACK_ROW_LENGTH, "I", 25 },
	{ "GL_PACK_SKIP_ROWS", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_PACK_SKIP_ROWS, "I", 25 },
	{ "GL_PACK_SKIP_PIXELS", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_PACK_SKIP_PIXELS, "I", 25 },
	{ "GL_COLOR", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_COLOR, "I", 25 },
	{ "GL_DEPTH", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_DEPTH, "I", 25 },
	{ "GL_STENCIL", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_STENCIL, "I", 25 },
	{ "GL_RED", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_RED, "I", 25 },
	{ "GL_RGB8", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_RGB8, "I", 25 },
	{ "GL_RGBA8", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_RGBA8, "I", 25 },
	{ "GL_RGB10_A2", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_RGB10_A2, "I", 25 },
	{ "GL_TEXTURE_BINDING_3D", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_TEXTURE_BINDING_3D, "I", 25 },
	{ "GL_UNPACK_SKIP_IMAGES", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_UNPACK_SKIP_IMAGES, "I", 25 },
	{ "GL_UNPACK_IMAGE_HEIGHT", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_UNPACK_IMAGE_HEIGHT, "I", 25 },
	{ "GL_TEXTURE_3D", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_TEXTURE_3D, "I", 25 },
	{ "GL_TEXTURE_WRAP_R", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_TEXTURE_WRAP_R, "I", 25 },
	{ "GL_MAX_3D_TEXTURE_SIZE", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_MAX_3D_TEXTURE_SIZE, "I", 25 },
	{ "GL_UNSIGNED_INT_2_10_10_10_REV", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_UNSIGNED_INT_2_10_10_10_REV, "I", 25 },
	{ "GL_MAX_ELEMENTS_VERTICES", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_MAX_ELEMENTS_VERTICES, "I", 25 },
	{ "GL_MAX_ELEMENTS_INDICES", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_MAX_ELEMENTS_INDICES, "I", 25 },
	{ "GL_TEXTURE_MIN_LOD", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_TEXTURE_MIN_LOD, "I", 25 },
	{ "GL_TEXTURE_MAX_LOD", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_TEXTURE_MAX_LOD, "I", 25 },
	{ "GL_TEXTURE_BASE_LEVEL", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_TEXTURE_BASE_LEVEL, "I", 25 },
	{ "GL_TEXTURE_MAX_LEVEL", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_TEXTURE_MAX_LEVEL, "I", 25 },
	{ "GL_MIN", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_MIN, "I", 25 },
	{ "GL_MAX", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_MAX, "I", 25 },
	{ "GL_DEPTH_COMPONENT24", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_DEPTH_COMPONENT24, "I", 25 },
	{ "GL_MAX_TEXTURE_LOD_BIAS", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_MAX_TEXTURE_LOD_BIAS, "I", 25 },
	{ "GL_TEXTURE_COMPARE_MODE", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_TEXTURE_COMPARE_MODE, "I", 25 },
	{ "GL_TEXTURE_COMPARE_FUNC", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_TEXTURE_COMPARE_FUNC, "I", 25 },
	{ "GL_CURRENT_QUERY", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_CURRENT_QUERY, "I", 25 },
	{ "GL_QUERY_RESULT", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_QUERY_RESULT, "I", 25 },
	{ "GL_QUERY_RESULT_AVAILABLE", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_QUERY_RESULT_AVAILABLE, "I", 25 },
	{ "GL_BUFFER_MAPPED", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_BUFFER_MAPPED, "I", 25 },
	{ "GL_BUFFER_MAP_POINTER", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_BUFFER_MAP_POINTER, "I", 25 },
	{ "GL_STREAM_READ", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_STREAM_READ, "I", 25 },
	{ "GL_STREAM_COPY", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_STREAM_COPY, "I", 25 },
	{ "GL_STATIC_READ", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_STATIC_READ, "I", 25 },
	{ "GL_STATIC_COPY", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_STATIC_COPY, "I", 25 },
	{ "GL_DYNAMIC_READ", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_DYNAMIC_READ, "I", 25 },
	{ "GL_DYNAMIC_COPY", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_DYNAMIC_COPY, "I", 25 },
	{ "GL_MAX_DRAW_BUFFERS", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_MAX_DRAW_BUFFERS, "I", 25 },
	{ "GL_DRAW_BUFFER0", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_DRAW_BUFFER0, "I", 25 },
	{ "GL_DRAW_BUFFER1", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_DRAW_BUFFER1, "I", 25 },
	{ "GL_DRAW_BUFFER2", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_DRAW_BUFFER2, "I", 25 },
	{ "GL_DRAW_BUFFER3", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_DRAW_BUFFER3, "I", 25 },
	{ "GL_DRAW_BUFFER4", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_DRAW_BUFFER4, "I", 25 },
	{ "GL_DRAW_BUFFER5", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_DRAW_BUFFER5, "I", 25 },
	{ "GL_DRAW_BUFFER6", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_DRAW_BUFFER6, "I", 25 },
	{ "GL_DRAW_BUFFER7", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_DRAW_BUFFER7, "I", 25 },
	{ "GL_DRAW_BUFFER8", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_DRAW_BUFFER8, "I", 25 },
	{ "GL_DRAW_BUFFER9", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_DRAW_BUFFER9, "I", 25 },
	{ "GL_DRAW_BUFFER10", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_DRAW_BUFFER10, "I", 25 },
	{ "GL_DRAW_BUFFER11", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_DRAW_BUFFER11, "I", 25 },
	{ "GL_DRAW_BUFFER12", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_DRAW_BUFFER12, "I", 25 },
	{ "GL_DRAW_BUFFER13", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_DRAW_BUFFER13, "I", 25 },
	{ "GL_DRAW_BUFFER14", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_DRAW_BUFFER14, "I", 25 },
	{ "GL_DRAW_BUFFER15", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_DRAW_BUFFER15, "I", 25 },
	{ "GL_MAX_FRAGMENT_UNIFORM_COMPONENTS", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_MAX_FRAGMENT_UNIFORM_COMPONENTS, "I", 25 },
	{ "GL_MAX_VERTEX_UNIFORM_COMPONENTS", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_MAX_VERTEX_UNIFORM_COMPONENTS, "I", 25 },
	{ "GL_SAMPLER_3D", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_SAMPLER_3D, "I", 25 },
	{ "GL_SAMPLER_2D_SHADOW", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_SAMPLER_2D_SHADOW, "I", 25 },
	{ "GL_FRAGMENT_SHADER_DERIVATIVE_HINT", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_FRAGMENT_SHADER_DERIVATIVE_HINT, "I", 25 },
	{ "GL_PIXEL_PACK_BUFFER", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_PIXEL_PACK_BUFFER, "I", 25 },
	{ "GL_PIXEL_UNPACK_BUFFER", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_PIXEL_UNPACK_BUFFER, "I", 25 },
	{ "GL_PIXEL_PACK_BUFFER_BINDING", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_PIXEL_PACK_BUFFER_BINDING, "I", 25 },
	{ "GL_PIXEL_UNPACK_BUFFER_BINDING", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_PIXEL_UNPACK_BUFFER_BINDING, "I", 25 },
	{ "GL_FLOAT_MAT2x3", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_FLOAT_MAT2x3, "I", 25 },
	{ "GL_FLOAT_MAT2x4", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_FLOAT_MAT2x4, "I", 25 },
	{ "GL_FLOAT_MAT3x2", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_FLOAT_MAT3x2, "I", 25 },
	{ "GL_FLOAT_MAT3x4", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_FLOAT_MAT3x4, "I", 25 },
	{ "GL_FLOAT_MAT4x2", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_FLOAT_MAT4x2, "I", 25 },
	{ "GL_FLOAT_MAT4x3", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_FLOAT_MAT4x3, "I", 25 },
	{ "GL_SRGB", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_SRGB, "I", 25 },
	{ "GL_SRGB8", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_SRGB8, "I", 25 },
	{ "GL_SRGB8_ALPHA8", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_SRGB8_ALPHA8, "I", 25 },
	{ "GL_COMPARE_REF_TO_TEXTURE", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_COMPARE_REF_TO_TEXTURE, "I", 25 },
	{ "GL_MAJOR_VERSION", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_MAJOR_VERSION, "I", 25 },
	{ "GL_MINOR_VERSION", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_MINOR_VERSION, "I", 25 },
	{ "GL_NUM_EXTENSIONS", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_NUM_EXTENSIONS, "I", 25 },
	{ "GL_RGBA32F", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_RGBA32F, "I", 25 },
	{ "GL_RGB32F", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_RGB32F, "I", 25 },
	{ "GL_RGBA16F", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_RGBA16F, "I", 25 },
	{ "GL_RGB16F", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_RGB16F, "I", 25 },
	{ "GL_VERTEX_ATTRIB_ARRAY_INTEGER", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_VERTEX_ATTRIB_ARRAY_INTEGER, "I", 25 },
	{ "GL_MAX_ARRAY_TEXTURE_LAYERS", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_MAX_ARRAY_TEXTURE_LAYERS, "I", 25 },
	{ "GL_MIN_PROGRAM_TEXEL_OFFSET", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_MIN_PROGRAM_TEXEL_OFFSET, "I", 25 },
	{ "GL_MAX_PROGRAM_TEXEL_OFFSET", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_MAX_PROGRAM_TEXEL_OFFSET, "I", 25 },
	{ "GL_MAX_VARYING_COMPONENTS", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_MAX_VARYING_COMPONENTS, "I", 25 },
	{ "GL_TEXTURE_2D_ARRAY", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_TEXTURE_2D_ARRAY, "I", 25 },
	{ "GL_TEXTURE_BINDING_2D_ARRAY", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_TEXTURE_BINDING_2D_ARRAY, "I", 25 },
	{ "GL_R11F_G11F_B10F", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_R11F_G11F_B10F, "I", 25 },
	{ "GL_UNSIGNED_INT_10F_11F_11F_REV", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_UNSIGNED_INT_10F_11F_11F_REV, "I", 25 },
	{ "GL_RGB9_E5", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_RGB9_E5, "I", 25 },
	{ "GL_UNSIGNED_INT_5_9_9_9_REV", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_UNSIGNED_INT_5_9_9_9_REV, "I", 25 },
	{ "GL_TRANSFORM_FEEDBACK_VARYING_MAX_LENGTH", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_TRANSFORM_FEEDBACK_VARYING_MAX_LENGTH, "I", 25 },
	{ "GL_TRANSFORM_FEEDBACK_BUFFER_MODE", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_TRANSFORM_FEEDBACK_BUFFER_MODE, "I", 25 },
	{ "GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_COMPONENTS", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_COMPONENTS, "I", 25 },
	{ "GL_TRANSFORM_FEEDBACK_VARYINGS", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_TRANSFORM_FEEDBACK_VARYINGS, "I", 25 },
	{ "GL_TRANSFORM_FEEDBACK_BUFFER_START", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_TRANSFORM_FEEDBACK_BUFFER_START, "I", 25 },
	{ "GL_TRANSFORM_FEEDBACK_BUFFER_SIZE", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_TRANSFORM_FEEDBACK_BUFFER_SIZE, "I", 25 },
	{ "GL_TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN, "I", 25 },
	{ "GL_RASTERIZER_DISCARD", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_RASTERIZER_DISCARD, "I", 25 },
	{ "GL_MAX_TRANSFORM_FEEDBACK_INTERLEAVED_COMPONENTS", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_MAX_TRANSFORM_FEEDBACK_INTERLEAVED_COMPONENTS, "I", 25 },
	{ "GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_ATTRIBS", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_ATTRIBS, "I", 25 },
	{ "GL_INTERLEAVED_ATTRIBS", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_INTERLEAVED_ATTRIBS, "I", 25 },
	{ "GL_SEPARATE_ATTRIBS", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_SEPARATE_ATTRIBS, "I", 25 },
	{ "GL_TRANSFORM_FEEDBACK_BUFFER", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_TRANSFORM_FEEDBACK_BUFFER, "I", 25 },
	{ "GL_TRANSFORM_FEEDBACK_BUFFER_BINDING", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_TRANSFORM_FEEDBACK_BUFFER_BINDING, "I", 25 },
	{ "GL_RGBA32UI", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_RGBA32UI, "I", 25 },
	{ "GL_RGB32UI", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_RGB32UI, "I", 25 },
	{ "GL_RGBA16UI", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_RGBA16UI, "I", 25 },
	{ "GL_RGB16UI", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_RGB16UI, "I", 25 },
	{ "GL_RGBA8UI", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_RGBA8UI, "I", 25 },
	{ "GL_RGB8UI", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_RGB8UI, "I", 25 },
	{ "GL_RGBA32I", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_RGBA32I, "I", 25 },
	{ "GL_RGB32I", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_RGB32I, "I", 25 },
	{ "GL_RGBA16I", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_RGBA16I, "I", 25 },
	{ "GL_RGB16I", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_RGB16I, "I", 25 },
	{ "GL_RGBA8I", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_RGBA8I, "I", 25 },
	{ "GL_RGB8I", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_RGB8I, "I", 25 },
	{ "GL_RED_INTEGER", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_RED_INTEGER, "I", 25 },
	{ "GL_RGB_INTEGER", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_RGB_INTEGER, "I", 25 },
	{ "GL_RGBA_INTEGER", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_RGBA_INTEGER, "I", 25 },
	{ "GL_SAMPLER_2D_ARRAY", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_SAMPLER_2D_ARRAY, "I", 25 },
	{ "GL_SAMPLER_2D_ARRAY_SHADOW", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_SAMPLER_2D_ARRAY_SHADOW, "I", 25 },
	{ "GL_SAMPLER_CUBE_SHADOW", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_SAMPLER_CUBE_SHADOW, "I", 25 },
	{ "GL_UNSIGNED_INT_VEC2", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_UNSIGNED_INT_VEC2, "I", 25 },
	{ "GL_UNSIGNED_INT_VEC3", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_UNSIGNED_INT_VEC3, "I", 25 },
	{ "GL_UNSIGNED_INT_VEC4", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_UNSIGNED_INT_VEC4, "I", 25 },
	{ "GL_INT_SAMPLER_2D", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_INT_SAMPLER_2D, "I", 25 },
	{ "GL_INT_SAMPLER_3D", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_INT_SAMPLER_3D, "I", 25 },
	{ "GL_INT_SAMPLER_CUBE", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_INT_SAMPLER_CUBE, "I", 25 },
	{ "GL_INT_SAMPLER_2D_ARRAY", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_INT_SAMPLER_2D_ARRAY, "I", 25 },
	{ "GL_UNSIGNED_INT_SAMPLER_2D", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_UNSIGNED_INT_SAMPLER_2D, "I", 25 },
	{ "GL_UNSIGNED_INT_SAMPLER_3D", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_UNSIGNED_INT_SAMPLER_3D, "I", 25 },
	{ "GL_UNSIGNED_INT_SAMPLER_CUBE", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_UNSIGNED_INT_SAMPLER_CUBE, "I", 25 },
	{ "GL_UNSIGNED_INT_SAMPLER_2D_ARRAY", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_UNSIGNED_INT_SAMPLER_2D_ARRAY, "I", 25 },
	{ "GL_BUFFER_ACCESS_FLAGS", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_BUFFER_ACCESS_FLAGS, "I", 25 },
	{ "GL_BUFFER_MAP_LENGTH", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_BUFFER_MAP_LENGTH, "I", 25 },
	{ "GL_BUFFER_MAP_OFFSET", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_BUFFER_MAP_OFFSET, "I", 25 },
	{ "GL_DEPTH_COMPONENT32F", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_DEPTH_COMPONENT32F, "I", 25 },
	{ "GL_DEPTH32F_STENCIL8", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_DEPTH32F_STENCIL8, "I", 25 },
	{ "GL_FLOAT_32_UNSIGNED_INT_24_8_REV", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_FLOAT_32_UNSIGNED_INT_24_8_REV, "I", 25 },
	{ "GL_FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING, "I", 25 },
	{ "GL_FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE, "I", 25 },
	{ "GL_FRAMEBUFFER_ATTACHMENT_RED_SIZE", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_FRAMEBUFFER_ATTACHMENT_RED_SIZE, "I", 25 },
	{ "GL_FRAMEBUFFER_ATTACHMENT_GREEN_SIZE", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_FRAMEBUFFER_ATTACHMENT_GREEN_SIZE, "I", 25 },
	{ "GL_FRAMEBUFFER_ATTACHMENT_BLUE_SIZE", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_FRAMEBUFFER_ATTACHMENT_BLUE_SIZE, "I", 25 },
	{ "GL_FRAMEBUFFER_ATTACHMENT_ALPHA_SIZE", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_FRAMEBUFFER_ATTACHMENT_ALPHA_SIZE, "I", 25 },
	{ "GL_FRAMEBUFFER_ATTACHMENT_DEPTH_SIZE", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_FRAMEBUFFER_ATTACHMENT_DEPTH_SIZE, "I", 25 },
	{ "GL_FRAMEBUFFER_ATTACHMENT_STENCIL_SIZE", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_FRAMEBUFFER_ATTACHMENT_STENCIL_SIZE, "I", 25 },
	{ "GL_FRAMEBUFFER_DEFAULT", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_FRAMEBUFFER_DEFAULT, "I", 25 },
	{ "GL_FRAMEBUFFER_UNDEFINED", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_FRAMEBUFFER_UNDEFINED, "I", 25 },
	{ "GL_DEPTH_STENCIL_ATTACHMENT", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_DEPTH_STENCIL_ATTACHMENT, "I", 25 },
	{ "GL_DEPTH_STENCIL", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_DEPTH_STENCIL, "I", 25 },
	{ "GL_UNSIGNED_INT_24_8", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_UNSIGNED_INT_24_8, "I", 25 },
	{ "GL_DEPTH24_STENCIL8", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_DEPTH24_STENCIL8, "I", 25 },
	{ "GL_UNSIGNED_NORMALIZED", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_UNSIGNED_NORMALIZED, "I", 25 },
	{ "GL_DRAW_FRAMEBUFFER_BINDING", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_DRAW_FRAMEBUFFER_BINDING, "I", 25 },
	{ "GL_READ_FRAMEBUFFER", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_READ_FRAMEBUFFER, "I", 25 },
	{ "GL_DRAW_FRAMEBUFFER", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_DRAW_FRAMEBUFFER, "I", 25 },
	{ "GL_READ_FRAMEBUFFER_BINDING", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_READ_FRAMEBUFFER_BINDING, "I", 25 },
	{ "GL_RENDERBUFFER_SAMPLES", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_RENDERBUFFER_SAMPLES, "I", 25 },
	{ "GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER, "I", 25 },
	{ "GL_MAX_COLOR_ATTACHMENTS", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_MAX_COLOR_ATTACHMENTS, "I", 25 },
	{ "GL_COLOR_ATTACHMENT1", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_COLOR_ATTACHMENT1, "I", 25 },
	{ "GL_COLOR_ATTACHMENT2", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_COLOR_ATTACHMENT2, "I", 25 },
	{ "GL_COLOR_ATTACHMENT3", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_COLOR_ATTACHMENT3, "I", 25 },
	{ "GL_COLOR_ATTACHMENT4", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_COLOR_ATTACHMENT4, "I", 25 },
	{ "GL_COLOR_ATTACHMENT5", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_COLOR_ATTACHMENT5, "I", 25 },
	{ "GL_COLOR_ATTACHMENT6", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_COLOR_ATTACHMENT6, "I", 25 },
	{ "GL_COLOR_ATTACHMENT7", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_COLOR_ATTACHMENT7, "I", 25 },
	{ "GL_COLOR_ATTACHMENT8", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_COLOR_ATTACHMENT8, "I", 25 },
	{ "GL_COLOR_ATTACHMENT9", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_COLOR_ATTACHMENT9, "I", 25 },
	{ "GL_COLOR_ATTACHMENT10", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_COLOR_ATTACHMENT10, "I", 25 },
	{ "GL_COLOR_ATTACHMENT11", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_COLOR_ATTACHMENT11, "I", 25 },
	{ "GL_COLOR_ATTACHMENT12", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_COLOR_ATTACHMENT12, "I", 25 },
	{ "GL_COLOR_ATTACHMENT13", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_COLOR_ATTACHMENT13, "I", 25 },
	{ "GL_COLOR_ATTACHMENT14", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_COLOR_ATTACHMENT14, "I", 25 },
	{ "GL_COLOR_ATTACHMENT15", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_COLOR_ATTACHMENT15, "I", 25 },
	{ "GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE, "I", 25 },
	{ "GL_MAX_SAMPLES", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_MAX_SAMPLES, "I", 25 },
	{ "GL_HALF_FLOAT", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_HALF_FLOAT, "I", 25 },
	{ "GL_MAP_READ_BIT", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_MAP_READ_BIT, "I", 25 },
	{ "GL_MAP_WRITE_BIT", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_MAP_WRITE_BIT, "I", 25 },
	{ "GL_MAP_INVALIDATE_RANGE_BIT", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_MAP_INVALIDATE_RANGE_BIT, "I", 25 },
	{ "GL_MAP_INVALIDATE_BUFFER_BIT", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_MAP_INVALIDATE_BUFFER_BIT, "I", 25 },
	{ "GL_MAP_FLUSH_EXPLICIT_BIT", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_MAP_FLUSH_EXPLICIT_BIT, "I", 25 },
	{ "GL_MAP_UNSYNCHRONIZED_BIT", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_MAP_UNSYNCHRONIZED_BIT, "I", 25 },
	{ "GL_RG", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_RG, "I", 25 },
	{ "GL_RG_INTEGER", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_RG_INTEGER, "I", 25 },
	{ "GL_R8", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_R8, "I", 25 },
	{ "GL_RG8", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_RG8, "I", 25 },
	{ "GL_R16F", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_R16F, "I", 25 },
	{ "GL_R32F", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_R32F, "I", 25 },
	{ "GL_RG16F", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_RG16F, "I", 25 },
	{ "GL_RG32F", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_RG32F, "I", 25 },
	{ "GL_R8I", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_R8I, "I", 25 },
	{ "GL_R8UI", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_R8UI, "I", 25 },
	{ "GL_R16I", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_R16I, "I", 25 },
	{ "GL_R16UI", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_R16UI, "I", 25 },
	{ "GL_R32I", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_R32I, "I", 25 },
	{ "GL_R32UI", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_R32UI, "I", 25 },
	{ "GL_RG8I", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_RG8I, "I", 25 },
	{ "GL_RG8UI", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_RG8UI, "I", 25 },
	{ "GL_RG16I", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_RG16I, "I", 25 },
	{ "GL_RG16UI", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_RG16UI, "I", 25 },
	{ "GL_RG32I", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_RG32I, "I", 25 },
	{ "GL_RG32UI", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_RG32UI, "I", 25 },
	{ "GL_VERTEX_ARRAY_BINDING", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_VERTEX_ARRAY_BINDING, "I", 25 },
	{ "GL_R8_SNORM", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_R8_SNORM, "I", 25 },
	{ "GL_RG8_SNORM", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_RG8_SNORM, "I", 25 },
	{ "GL_RGB8_SNORM", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_RGB8_SNORM, "I", 25 },
	{ "GL_RGBA8_SNORM", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_RGBA8_SNORM, "I", 25 },
	{ "GL_SIGNED_NORMALIZED", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_SIGNED_NORMALIZED, "I", 25 },
	{ "GL_PRIMITIVE_RESTART_FIXED_INDEX", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_PRIMITIVE_RESTART_FIXED_INDEX, "I", 25 },
	{ "GL_COPY_READ_BUFFER", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_COPY_READ_BUFFER, "I", 25 },
	{ "GL_COPY_WRITE_BUFFER", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_COPY_WRITE_BUFFER, "I", 25 },
	{ "GL_COPY_READ_BUFFER_BINDING", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_COPY_READ_BUFFER_BINDING, "I", 25 },
	{ "GL_COPY_WRITE_BUFFER_BINDING", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_COPY_WRITE_BUFFER_BINDING, "I", 25 },
	{ "GL_UNIFORM_BUFFER", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_UNIFORM_BUFFER, "I", 25 },
	{ "GL_UNIFORM_BUFFER_BINDING", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_UNIFORM_BUFFER_BINDING, "I", 25 },
	{ "GL_UNIFORM_BUFFER_START", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_UNIFORM_BUFFER_START, "I", 25 },
	{ "GL_UNIFORM_BUFFER_SIZE", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_UNIFORM_BUFFER_SIZE, "I", 25 },
	{ "GL_MAX_VERTEX_UNIFORM_BLOCKS", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_MAX_VERTEX_UNIFORM_BLOCKS, "I", 25 },
	{ "GL_MAX_FRAGMENT_UNIFORM_BLOCKS", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_MAX_FRAGMENT_UNIFORM_BLOCKS, "I", 25 },
	{ "GL_MAX_COMBINED_UNIFORM_BLOCKS", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_MAX_COMBINED_UNIFORM_BLOCKS, "I", 25 },
	{ "GL_MAX_UNIFORM_BUFFER_BINDINGS", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_MAX_UNIFORM_BUFFER_BINDINGS, "I", 25 },
	{ "GL_MAX_UNIFORM_BLOCK_SIZE", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_MAX_UNIFORM_BLOCK_SIZE, "I", 25 },
	{ "GL_MAX_COMBINED_VERTEX_UNIFORM_COMPONENTS", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_MAX_COMBINED_VERTEX_UNIFORM_COMPONENTS, "I", 25 },
	{ "GL_MAX_COMBINED_FRAGMENT_UNIFORM_COMPONENTS", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_MAX_COMBINED_FRAGMENT_UNIFORM_COMPONENTS, "I", 25 },
	{ "GL_UNIFORM_BUFFER_OFFSET_ALIGNMENT", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_UNIFORM_BUFFER_OFFSET_ALIGNMENT, "I", 25 },
	{ "GL_ACTIVE_UNIFORM_BLOCK_MAX_NAME_LENGTH", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_ACTIVE_UNIFORM_BLOCK_MAX_NAME_LENGTH, "I", 25 },
	{ "GL_ACTIVE_UNIFORM_BLOCKS", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_ACTIVE_UNIFORM_BLOCKS, "I", 25 },
	{ "GL_UNIFORM_TYPE", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_UNIFORM_TYPE, "I", 25 },
	{ "GL_UNIFORM_SIZE", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_UNIFORM_SIZE, "I", 25 },
	{ "GL_UNIFORM_NAME_LENGTH", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_UNIFORM_NAME_LENGTH, "I", 25 },
	{ "GL_UNIFORM_BLOCK_INDEX", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_UNIFORM_BLOCK_INDEX, "I", 25 },
	{ "GL_UNIFORM_OFFSET", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_UNIFORM_OFFSET, "I", 25 },
	{ "GL_UNIFORM_ARRAY_STRIDE", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_UNIFORM_ARRAY_STRIDE, "I", 25 },
	{ "GL_UNIFORM_MATRIX_STRIDE", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_UNIFORM_MATRIX_STRIDE, "I", 25 },
	{ "GL_UNIFORM_IS_ROW_MAJOR", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_UNIFORM_IS_ROW_MAJOR, "I", 25 },
	{ "GL_UNIFORM_BLOCK_BINDING", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_UNIFORM_BLOCK_BINDING, "I", 25 },
	{ "GL_UNIFORM_BLOCK_DATA_SIZE", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_UNIFORM_BLOCK_DATA_SIZE, "I", 25 },
	{ "GL_UNIFORM_BLOCK_NAME_LENGTH", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_UNIFORM_BLOCK_NAME_LENGTH, "I", 25 },
	{ "GL_UNIFORM_BLOCK_ACTIVE_UNIFORMS", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_UNIFORM_BLOCK_ACTIVE_UNIFORMS, "I", 25 },
	{ "GL_UNIFORM_BLOCK_ACTIVE_UNIFORM_INDICES", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_UNIFORM_BLOCK_ACTIVE_UNIFORM_INDICES, "I", 25 },
	{ "GL_UNIFORM_BLOCK_REFERENCED_BY_VERTEX_SHADER", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_UNIFORM_BLOCK_REFERENCED_BY_VERTEX_SHADER, "I", 25 },
	{ "GL_UNIFORM_BLOCK_REFERENCED_BY_FRAGMENT_SHADER", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_UNIFORM_BLOCK_REFERENCED_BY_FRAGMENT_SHADER, "I", 25 },
	{ "GL_INVALID_INDEX", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_INVALID_INDEX, "I", 25 },
	{ "GL_MAX_VERTEX_OUTPUT_COMPONENTS", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_MAX_VERTEX_OUTPUT_COMPONENTS, "I", 25 },
	{ "GL_MAX_FRAGMENT_INPUT_COMPONENTS", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_MAX_FRAGMENT_INPUT_COMPONENTS, "I", 25 },
	{ "GL_MAX_SERVER_WAIT_TIMEOUT", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_MAX_SERVER_WAIT_TIMEOUT, "I", 25 },
	{ "GL_OBJECT_TYPE", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_OBJECT_TYPE, "I", 25 },
	{ "GL_SYNC_CONDITION", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_SYNC_CONDITION, "I", 25 },
	{ "GL_SYNC_STATUS", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_SYNC_STATUS, "I", 25 },
	{ "GL_SYNC_FLAGS", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_SYNC_FLAGS, "I", 25 },
	{ "GL_SYNC_FENCE", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_SYNC_FENCE, "I", 25 },
	{ "GL_SYNC_GPU_COMMANDS_COMPLETE", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_SYNC_GPU_COMMANDS_COMPLETE, "I", 25 },
	{ "GL_UNSIGNALED", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_UNSIGNALED, "I", 25 },
	{ "GL_SIGNALED", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_SIGNALED, "I", 25 },
	{ "GL_ALREADY_SIGNALED", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_ALREADY_SIGNALED, "I", 25 },
	{ "GL_TIMEOUT_EXPIRED", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_TIMEOUT_EXPIRED, "I", 25 },
	{ "GL_CONDITION_SATISFIED", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_CONDITION_SATISFIED, "I", 25 },
	{ "GL_WAIT_FAILED", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_WAIT_FAILED, "I", 25 },
	{ "GL_SYNC_FLUSH_COMMANDS_BIT", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_SYNC_FLUSH_COMMANDS_BIT, "I", 25 },
	{ "GL_TIMEOUT_IGNORED", &class_long, (intptr_t) &SF_arc_graphics_GL30_GL_TIMEOUT_IGNORED, "J", 25 },
	{ "GL_VERTEX_ATTRIB_ARRAY_DIVISOR", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_VERTEX_ATTRIB_ARRAY_DIVISOR, "I", 25 },
	{ "GL_ANY_SAMPLES_PASSED", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_ANY_SAMPLES_PASSED, "I", 25 },
	{ "GL_ANY_SAMPLES_PASSED_CONSERVATIVE", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_ANY_SAMPLES_PASSED_CONSERVATIVE, "I", 25 },
	{ "GL_SAMPLER_BINDING", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_SAMPLER_BINDING, "I", 25 },
	{ "GL_RGB10_A2UI", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_RGB10_A2UI, "I", 25 },
	{ "GL_TEXTURE_SWIZZLE_R", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_TEXTURE_SWIZZLE_R, "I", 25 },
	{ "GL_TEXTURE_SWIZZLE_G", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_TEXTURE_SWIZZLE_G, "I", 25 },
	{ "GL_TEXTURE_SWIZZLE_B", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_TEXTURE_SWIZZLE_B, "I", 25 },
	{ "GL_TEXTURE_SWIZZLE_A", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_TEXTURE_SWIZZLE_A, "I", 25 },
	{ "GL_GREEN", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_GREEN, "I", 25 },
	{ "GL_BLUE", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_BLUE, "I", 25 },
	{ "GL_INT_2_10_10_10_REV", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_INT_2_10_10_10_REV, "I", 25 },
	{ "GL_TRANSFORM_FEEDBACK", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_TRANSFORM_FEEDBACK, "I", 25 },
	{ "GL_TRANSFORM_FEEDBACK_PAUSED", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_TRANSFORM_FEEDBACK_PAUSED, "I", 25 },
	{ "GL_TRANSFORM_FEEDBACK_ACTIVE", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_TRANSFORM_FEEDBACK_ACTIVE, "I", 25 },
	{ "GL_TRANSFORM_FEEDBACK_BINDING", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_TRANSFORM_FEEDBACK_BINDING, "I", 25 },
	{ "GL_PROGRAM_BINARY_RETRIEVABLE_HINT", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_PROGRAM_BINARY_RETRIEVABLE_HINT, "I", 25 },
	{ "GL_PROGRAM_BINARY_LENGTH", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_PROGRAM_BINARY_LENGTH, "I", 25 },
	{ "GL_NUM_PROGRAM_BINARY_FORMATS", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_NUM_PROGRAM_BINARY_FORMATS, "I", 25 },
	{ "GL_PROGRAM_BINARY_FORMATS", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_PROGRAM_BINARY_FORMATS, "I", 25 },
	{ "GL_COMPRESSED_R11_EAC", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_COMPRESSED_R11_EAC, "I", 25 },
	{ "GL_COMPRESSED_SIGNED_R11_EAC", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_COMPRESSED_SIGNED_R11_EAC, "I", 25 },
	{ "GL_COMPRESSED_RG11_EAC", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_COMPRESSED_RG11_EAC, "I", 25 },
	{ "GL_COMPRESSED_SIGNED_RG11_EAC", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_COMPRESSED_SIGNED_RG11_EAC, "I", 25 },
	{ "GL_COMPRESSED_RGB8_ETC2", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_COMPRESSED_RGB8_ETC2, "I", 25 },
	{ "GL_COMPRESSED_SRGB8_ETC2", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_COMPRESSED_SRGB8_ETC2, "I", 25 },
	{ "GL_COMPRESSED_RGB8_PUNCHTHROUGH_ALPHA1_ETC2", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_COMPRESSED_RGB8_PUNCHTHROUGH_ALPHA1_ETC2, "I", 25 },
	{ "GL_COMPRESSED_SRGB8_PUNCHTHROUGH_ALPHA1_ETC2", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_COMPRESSED_SRGB8_PUNCHTHROUGH_ALPHA1_ETC2, "I", 25 },
	{ "GL_COMPRESSED_RGBA8_ETC2_EAC", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_COMPRESSED_RGBA8_ETC2_EAC, "I", 25 },
	{ "GL_COMPRESSED_SRGB8_ALPHA8_ETC2_EAC", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_COMPRESSED_SRGB8_ALPHA8_ETC2_EAC, "I", 25 },
	{ "GL_TEXTURE_IMMUTABLE_FORMAT", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_TEXTURE_IMMUTABLE_FORMAT, "I", 25 },
	{ "GL_MAX_ELEMENT_INDEX", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_MAX_ELEMENT_INDEX, "I", 25 },
	{ "GL_NUM_SAMPLE_COUNTS", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_NUM_SAMPLE_COUNTS, "I", 25 },
	{ "GL_TEXTURE_IMMUTABLE_LEVELS", &class_int, (intptr_t) &SF_arc_graphics_GL30_GL_TEXTURE_IMMUTABLE_LEVELS, "I", 25 },
};

static MethodMetadata methods[] {
	{ "glReadBuffer", 0, INDEX_arc_graphics_GL30_glReadBuffer_int, "(I)V", 1025 },
	{ "glDrawRangeElements", 0, INDEX_arc_graphics_GL30_glDrawRangeElements_int_int_int_int_int_java_nio_Buffer, "(IIIIILjava/nio/Buffer;)V", 1025 },
	{ "glDrawRangeElements", 0, INDEX_arc_graphics_GL30_glDrawRangeElements_int_int_int_int_int_int, "(IIIIII)V", 1025 },
	{ "glTexImage3D", 0, INDEX_arc_graphics_GL30_glTexImage3D_int_int_int_int_int_int_int_int_int_java_nio_Buffer, "(IIIIIIIIILjava/nio/Buffer;)V", 1025 },
	{ "glTexImage3D", 0, INDEX_arc_graphics_GL30_glTexImage3D_int_int_int_int_int_int_int_int_int_int, "(IIIIIIIIII)V", 1025 },
	{ "glTexSubImage3D", 0, INDEX_arc_graphics_GL30_glTexSubImage3D_int_int_int_int_int_int_int_int_int_int_java_nio_Buffer, "(IIIIIIIIIILjava/nio/Buffer;)V", 1025 },
	{ "glTexSubImage3D", 0, INDEX_arc_graphics_GL30_glTexSubImage3D_int_int_int_int_int_int_int_int_int_int_int, "(IIIIIIIIIII)V", 1025 },
	{ "glCopyTexSubImage3D", 0, INDEX_arc_graphics_GL30_glCopyTexSubImage3D_int_int_int_int_int_int_int_int_int, "(IIIIIIIII)V", 1025 },
	{ "glGenQueries", 0, INDEX_arc_graphics_GL30_glGenQueries_int_java_nio_IntBuffer, "(ILjava/nio/IntBuffer;)V", 1025 },
	{ "glDeleteQueries", 0, INDEX_arc_graphics_GL30_glDeleteQueries_int_java_nio_IntBuffer, "(ILjava/nio/IntBuffer;)V", 1025 },
	{ "glIsQuery", 0, INDEX_arc_graphics_GL30_glIsQuery_int_R_boolean, "(I)Z", 1025 },
	{ "glBeginQuery", 0, INDEX_arc_graphics_GL30_glBeginQuery_int_int, "(II)V", 1025 },
	{ "glEndQuery", 0, INDEX_arc_graphics_GL30_glEndQuery_int, "(I)V", 1025 },
	{ "glGetQueryiv", 0, INDEX_arc_graphics_GL30_glGetQueryiv_int_int_java_nio_IntBuffer, "(IILjava/nio/IntBuffer;)V", 1025 },
	{ "glGetQueryObjectuiv", 0, INDEX_arc_graphics_GL30_glGetQueryObjectuiv_int_int_java_nio_IntBuffer, "(IILjava/nio/IntBuffer;)V", 1025 },
	{ "glUnmapBuffer", 0, INDEX_arc_graphics_GL30_glUnmapBuffer_int_R_boolean, "(I)Z", 1025 },
	{ "glGetBufferPointerv", 0, INDEX_arc_graphics_GL30_glGetBufferPointerv_int_int_R_java_nio_Buffer, "(II)Ljava/nio/Buffer;", 1025 },
	{ "glDrawBuffers", 0, INDEX_arc_graphics_GL30_glDrawBuffers_int_java_nio_IntBuffer, "(ILjava/nio/IntBuffer;)V", 1025 },
	{ "glUniformMatrix2x3fv", 0, INDEX_arc_graphics_GL30_glUniformMatrix2x3fv_int_int_boolean_java_nio_FloatBuffer, "(IIZLjava/nio/FloatBuffer;)V", 1025 },
	{ "glUniformMatrix3x2fv", 0, INDEX_arc_graphics_GL30_glUniformMatrix3x2fv_int_int_boolean_java_nio_FloatBuffer, "(IIZLjava/nio/FloatBuffer;)V", 1025 },
	{ "glUniformMatrix2x4fv", 0, INDEX_arc_graphics_GL30_glUniformMatrix2x4fv_int_int_boolean_java_nio_FloatBuffer, "(IIZLjava/nio/FloatBuffer;)V", 1025 },
	{ "glUniformMatrix4x2fv", 0, INDEX_arc_graphics_GL30_glUniformMatrix4x2fv_int_int_boolean_java_nio_FloatBuffer, "(IIZLjava/nio/FloatBuffer;)V", 1025 },
	{ "glUniformMatrix3x4fv", 0, INDEX_arc_graphics_GL30_glUniformMatrix3x4fv_int_int_boolean_java_nio_FloatBuffer, "(IIZLjava/nio/FloatBuffer;)V", 1025 },
	{ "glUniformMatrix4x3fv", 0, INDEX_arc_graphics_GL30_glUniformMatrix4x3fv_int_int_boolean_java_nio_FloatBuffer, "(IIZLjava/nio/FloatBuffer;)V", 1025 },
	{ "glBlitFramebuffer", 0, INDEX_arc_graphics_GL30_glBlitFramebuffer_int_int_int_int_int_int_int_int_int_int, "(IIIIIIIIII)V", 1025 },
	{ "glRenderbufferStorageMultisample", 0, INDEX_arc_graphics_GL30_glRenderbufferStorageMultisample_int_int_int_int_int, "(IIIII)V", 1025 },
	{ "glFramebufferTextureLayer", 0, INDEX_arc_graphics_GL30_glFramebufferTextureLayer_int_int_int_int_int, "(IIIII)V", 1025 },
	{ "glFlushMappedBufferRange", 0, INDEX_arc_graphics_GL30_glFlushMappedBufferRange_int_int_int, "(III)V", 1025 },
	{ "glBindVertexArray", 0, INDEX_arc_graphics_GL30_glBindVertexArray_int, "(I)V", 1025 },
	{ "glDeleteVertexArrays", 0, INDEX_arc_graphics_GL30_glDeleteVertexArrays_int_java_nio_IntBuffer, "(ILjava/nio/IntBuffer;)V", 1025 },
	{ "glGenVertexArrays", 0, INDEX_arc_graphics_GL30_glGenVertexArrays_int_java_nio_IntBuffer, "(ILjava/nio/IntBuffer;)V", 1025 },
	{ "glIsVertexArray", 0, INDEX_arc_graphics_GL30_glIsVertexArray_int_R_boolean, "(I)Z", 1025 },
	{ "glBeginTransformFeedback", 0, INDEX_arc_graphics_GL30_glBeginTransformFeedback_int, "(I)V", 1025 },
	{ "glEndTransformFeedback", 0, INDEX_arc_graphics_GL30_glEndTransformFeedback, "()V", 1025 },
	{ "glBindBufferRange", 0, INDEX_arc_graphics_GL30_glBindBufferRange_int_int_int_int_int, "(IIIII)V", 1025 },
	{ "glBindBufferBase", 0, INDEX_arc_graphics_GL30_glBindBufferBase_int_int_int, "(III)V", 1025 },
	{ "glTransformFeedbackVaryings", 0, INDEX_arc_graphics_GL30_glTransformFeedbackVaryings_int_Array1_java_lang_String_int, "(I[Ljava/lang/String;I)V", 1025 },
	{ "glVertexAttribIPointer", 0, INDEX_arc_graphics_GL30_glVertexAttribIPointer_int_int_int_int_int, "(IIIII)V", 1025 },
	{ "glGetVertexAttribIiv", 0, INDEX_arc_graphics_GL30_glGetVertexAttribIiv_int_int_java_nio_IntBuffer, "(IILjava/nio/IntBuffer;)V", 1025 },
	{ "glGetVertexAttribIuiv", 0, INDEX_arc_graphics_GL30_glGetVertexAttribIuiv_int_int_java_nio_IntBuffer, "(IILjava/nio/IntBuffer;)V", 1025 },
	{ "glVertexAttribI4i", 0, INDEX_arc_graphics_GL30_glVertexAttribI4i_int_int_int_int_int, "(IIIII)V", 1025 },
	{ "glVertexAttribI4ui", 0, INDEX_arc_graphics_GL30_glVertexAttribI4ui_int_int_int_int_int, "(IIIII)V", 1025 },
	{ "glGetUniformuiv", 0, INDEX_arc_graphics_GL30_glGetUniformuiv_int_int_java_nio_IntBuffer, "(IILjava/nio/IntBuffer;)V", 1025 },
	{ "glGetFragDataLocation", 0, INDEX_arc_graphics_GL30_glGetFragDataLocation_int_java_lang_String_R_int, "(ILjava/lang/String;)I", 1025 },
	{ "glUniform1uiv", 0, INDEX_arc_graphics_GL30_glUniform1uiv_int_int_java_nio_IntBuffer, "(IILjava/nio/IntBuffer;)V", 1025 },
	{ "glUniform3uiv", 0, INDEX_arc_graphics_GL30_glUniform3uiv_int_int_java_nio_IntBuffer, "(IILjava/nio/IntBuffer;)V", 1025 },
	{ "glUniform4uiv", 0, INDEX_arc_graphics_GL30_glUniform4uiv_int_int_java_nio_IntBuffer, "(IILjava/nio/IntBuffer;)V", 1025 },
	{ "glClearBufferiv", 0, INDEX_arc_graphics_GL30_glClearBufferiv_int_int_java_nio_IntBuffer, "(IILjava/nio/IntBuffer;)V", 1025 },
	{ "glClearBufferuiv", 0, INDEX_arc_graphics_GL30_glClearBufferuiv_int_int_java_nio_IntBuffer, "(IILjava/nio/IntBuffer;)V", 1025 },
	{ "glClearBufferfv", 0, INDEX_arc_graphics_GL30_glClearBufferfv_int_int_java_nio_FloatBuffer, "(IILjava/nio/FloatBuffer;)V", 1025 },
	{ "glClearBufferfi", 0, INDEX_arc_graphics_GL30_glClearBufferfi_int_int_float_int, "(IIFI)V", 1025 },
	{ "glGetStringi", 0, INDEX_arc_graphics_GL30_glGetStringi_int_int_R_java_lang_String, "(II)Ljava/lang/String;", 1025 },
	{ "glCopyBufferSubData", 0, INDEX_arc_graphics_GL30_glCopyBufferSubData_int_int_int_int_int, "(IIIII)V", 1025 },
	{ "glGetUniformIndices", 0, INDEX_arc_graphics_GL30_glGetUniformIndices_int_Array1_java_lang_String_java_nio_IntBuffer, "(I[Ljava/lang/String;Ljava/nio/IntBuffer;)V", 1025 },
	{ "glGetActiveUniformsiv", 0, INDEX_arc_graphics_GL30_glGetActiveUniformsiv_int_int_java_nio_IntBuffer_int_java_nio_IntBuffer, "(IILjava/nio/IntBuffer;ILjava/nio/IntBuffer;)V", 1025 },
	{ "glGetUniformBlockIndex", 0, INDEX_arc_graphics_GL30_glGetUniformBlockIndex_int_java_lang_String_R_int, "(ILjava/lang/String;)I", 1025 },
	{ "glGetActiveUniformBlockiv", 0, INDEX_arc_graphics_GL30_glGetActiveUniformBlockiv_int_int_int_java_nio_IntBuffer, "(IIILjava/nio/IntBuffer;)V", 1025 },
	{ "glGetActiveUniformBlockName", 0, INDEX_arc_graphics_GL30_glGetActiveUniformBlockName_int_int_java_nio_Buffer_java_nio_Buffer, "(IILjava/nio/Buffer;Ljava/nio/Buffer;)V", 1025 },
	{ "glUniformBlockBinding", 0, INDEX_arc_graphics_GL30_glUniformBlockBinding_int_int_int, "(III)V", 1025 },
	{ "glDrawArraysInstanced", 0, INDEX_arc_graphics_GL30_glDrawArraysInstanced_int_int_int_int, "(IIII)V", 1025 },
	{ "glDrawElementsInstanced", 0, INDEX_arc_graphics_GL30_glDrawElementsInstanced_int_int_int_int_int, "(IIIII)V", 1025 },
	{ "glGetInteger64v", 0, INDEX_arc_graphics_GL30_glGetInteger64v_int_java_nio_LongBuffer, "(ILjava/nio/LongBuffer;)V", 1025 },
	{ "glGetBufferParameteri64v", 0, INDEX_arc_graphics_GL30_glGetBufferParameteri64v_int_int_java_nio_LongBuffer, "(IILjava/nio/LongBuffer;)V", 1025 },
	{ "glGenSamplers", 0, INDEX_arc_graphics_GL30_glGenSamplers_int_java_nio_IntBuffer, "(ILjava/nio/IntBuffer;)V", 1025 },
	{ "glDeleteSamplers", 0, INDEX_arc_graphics_GL30_glDeleteSamplers_int_java_nio_IntBuffer, "(ILjava/nio/IntBuffer;)V", 1025 },
	{ "glIsSampler", 0, INDEX_arc_graphics_GL30_glIsSampler_int_R_boolean, "(I)Z", 1025 },
	{ "glBindSampler", 0, INDEX_arc_graphics_GL30_glBindSampler_int_int, "(II)V", 1025 },
	{ "glSamplerParameteri", 0, INDEX_arc_graphics_GL30_glSamplerParameteri_int_int_int, "(III)V", 1025 },
	{ "glSamplerParameteriv", 0, INDEX_arc_graphics_GL30_glSamplerParameteriv_int_int_java_nio_IntBuffer, "(IILjava/nio/IntBuffer;)V", 1025 },
	{ "glSamplerParameterf", 0, INDEX_arc_graphics_GL30_glSamplerParameterf_int_int_float, "(IIF)V", 1025 },
	{ "glSamplerParameterfv", 0, INDEX_arc_graphics_GL30_glSamplerParameterfv_int_int_java_nio_FloatBuffer, "(IILjava/nio/FloatBuffer;)V", 1025 },
	{ "glGetSamplerParameteriv", 0, INDEX_arc_graphics_GL30_glGetSamplerParameteriv_int_int_java_nio_IntBuffer, "(IILjava/nio/IntBuffer;)V", 1025 },
	{ "glGetSamplerParameterfv", 0, INDEX_arc_graphics_GL30_glGetSamplerParameterfv_int_int_java_nio_FloatBuffer, "(IILjava/nio/FloatBuffer;)V", 1025 },
	{ "glVertexAttribDivisor", 0, INDEX_arc_graphics_GL30_glVertexAttribDivisor_int_int, "(II)V", 1025 },
	{ "glBindTransformFeedback", 0, INDEX_arc_graphics_GL30_glBindTransformFeedback_int_int, "(II)V", 1025 },
	{ "glDeleteTransformFeedbacks", 0, INDEX_arc_graphics_GL30_glDeleteTransformFeedbacks_int_java_nio_IntBuffer, "(ILjava/nio/IntBuffer;)V", 1025 },
	{ "glGenTransformFeedbacks", 0, INDEX_arc_graphics_GL30_glGenTransformFeedbacks_int_java_nio_IntBuffer, "(ILjava/nio/IntBuffer;)V", 1025 },
	{ "glIsTransformFeedback", 0, INDEX_arc_graphics_GL30_glIsTransformFeedback_int_R_boolean, "(I)Z", 1025 },
	{ "glPauseTransformFeedback", 0, INDEX_arc_graphics_GL30_glPauseTransformFeedback, "()V", 1025 },
	{ "glResumeTransformFeedback", 0, INDEX_arc_graphics_GL30_glResumeTransformFeedback, "()V", 1025 },
	{ "glProgramParameteri", 0, INDEX_arc_graphics_GL30_glProgramParameteri_int_int_int, "(III)V", 1025 },
	{ "glInvalidateFramebuffer", 0, INDEX_arc_graphics_GL30_glInvalidateFramebuffer_int_int_java_nio_IntBuffer, "(IILjava/nio/IntBuffer;)V", 1025 },
	{ "glInvalidateSubFramebuffer", 0, INDEX_arc_graphics_GL30_glInvalidateSubFramebuffer_int_int_java_nio_IntBuffer_int_int_int_int, "(IILjava/nio/IntBuffer;IIII)V", 1025 },
};

Class class_arc_graphics_GL30{
		.nativeName = (intptr_t) "arc/graphics/GL30",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_graphics_GL30),
		.classVtable = (intptr_t) vtable_arc_graphics_GL30,
		.staticInitializer = (intptr_t) clinit_arc_graphics_GL30,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_graphics_GL30,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1537,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 305,
		.nativeFields = (intptr_t) fields,
		.methodCount = 83,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 245,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_graphics_GL30 = registerClass(&class_arc_graphics_GL30);

}
