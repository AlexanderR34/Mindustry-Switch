#include "arc/graphics/Gl.h"
#include "java/lang/Object.h"
#include "arc/Core.h"
#include "java/nio/FloatBuffer.h"
#include "java/lang/String.h"
#include "arc/struct/Bits.h"
#include "java/nio/Buffer.h"
#include "java/nio/IntBuffer.h"
#include "java/util/Arrays.h"
#include "arc/util/Buffers.h"
#include "arc/graphics/Gl.h"
#include "arc/graphics/GL20.h"

extern "C" {

jbool SF_arc_graphics_Gl_optimize;
jint SF_arc_graphics_Gl_esVersion20;
jint SF_arc_graphics_Gl_depthBufferBit;
jint SF_arc_graphics_Gl_stencilBufferBit;
jint SF_arc_graphics_Gl_colorBufferBit;
jint SF_arc_graphics_Gl_falseV;
jint SF_arc_graphics_Gl_trueV;
jint SF_arc_graphics_Gl_points;
jint SF_arc_graphics_Gl_lines;
jint SF_arc_graphics_Gl_lineLoop;
jint SF_arc_graphics_Gl_lineStrip;
jint SF_arc_graphics_Gl_triangles;
jint SF_arc_graphics_Gl_triangleStrip;
jint SF_arc_graphics_Gl_triangleFan;
jint SF_arc_graphics_Gl_zero;
jint SF_arc_graphics_Gl_one;
jint SF_arc_graphics_Gl_srcColor;
jint SF_arc_graphics_Gl_oneMinusSrcColor;
jint SF_arc_graphics_Gl_srcAlpha;
jint SF_arc_graphics_Gl_oneMinusSrcAlpha;
jint SF_arc_graphics_Gl_dstAlpha;
jint SF_arc_graphics_Gl_oneMinusDstAlpha;
jint SF_arc_graphics_Gl_dstColor;
jint SF_arc_graphics_Gl_oneMinusDstColor;
jint SF_arc_graphics_Gl_srcAlphaSaturate;
jint SF_arc_graphics_Gl_funcAdd;
jint SF_arc_graphics_Gl_blendEquation;
jint SF_arc_graphics_Gl_blendEquationRgb;
jint SF_arc_graphics_Gl_blendEquationAlpha;
jint SF_arc_graphics_Gl_funcSubtract;
jint SF_arc_graphics_Gl_funcReverseSubtract;
jint SF_arc_graphics_Gl_min;
jint SF_arc_graphics_Gl_max;
jint SF_arc_graphics_Gl_blendDstRgb;
jint SF_arc_graphics_Gl_blendSrcRgb;
jint SF_arc_graphics_Gl_blendDstAlpha;
jint SF_arc_graphics_Gl_blendSrcAlpha;
jint SF_arc_graphics_Gl_constantColor;
jint SF_arc_graphics_Gl_oneMinusConstantColor;
jint SF_arc_graphics_Gl_constantAlpha;
jint SF_arc_graphics_Gl_oneMinusConstantAlpha;
jint SF_arc_graphics_Gl_blendColor;
jint SF_arc_graphics_Gl_arrayBuffer;
jint SF_arc_graphics_Gl_elementArrayBuffer;
jint SF_arc_graphics_Gl_arrayBufferBinding;
jint SF_arc_graphics_Gl_elementArrayBufferBinding;
jint SF_arc_graphics_Gl_streamDraw;
jint SF_arc_graphics_Gl_staticDraw;
jint SF_arc_graphics_Gl_dynamicDraw;
jint SF_arc_graphics_Gl_bufferSize;
jint SF_arc_graphics_Gl_bufferUsage;
jint SF_arc_graphics_Gl_currentVertexAttrib;
jint SF_arc_graphics_Gl_front;
jint SF_arc_graphics_Gl_back;
jint SF_arc_graphics_Gl_frontAndBack;
jint SF_arc_graphics_Gl_texture2d;
jint SF_arc_graphics_Gl_cullFace;
jint SF_arc_graphics_Gl_blend;
jint SF_arc_graphics_Gl_dither;
jint SF_arc_graphics_Gl_stencilTest;
jint SF_arc_graphics_Gl_depthTest;
jint SF_arc_graphics_Gl_scissorTest;
jint SF_arc_graphics_Gl_polygonOffsetFill;
jint SF_arc_graphics_Gl_sampleAlphaToCoverage;
jint SF_arc_graphics_Gl_sampleCoverage;
jint SF_arc_graphics_Gl_noError;
jint SF_arc_graphics_Gl_invalidEnum;
jint SF_arc_graphics_Gl_invalidValue;
jint SF_arc_graphics_Gl_invalidOperation;
jint SF_arc_graphics_Gl_outOfMemory;
jint SF_arc_graphics_Gl_cw;
jint SF_arc_graphics_Gl_ccw;
jint SF_arc_graphics_Gl_lineWidth;
jint SF_arc_graphics_Gl_aliasedPointSizeRange;
jint SF_arc_graphics_Gl_aliasedLineWidthRange;
jint SF_arc_graphics_Gl_cullFaceMode;
jint SF_arc_graphics_Gl_frontFace;
jint SF_arc_graphics_Gl_depthRange;
jint SF_arc_graphics_Gl_depthWritemask;
jint SF_arc_graphics_Gl_depthClearValue;
jint SF_arc_graphics_Gl_depthFunc;
jint SF_arc_graphics_Gl_stencilClearValue;
jint SF_arc_graphics_Gl_stencilFunc;
jint SF_arc_graphics_Gl_stencilFail;
jint SF_arc_graphics_Gl_stencilPassDepthFail;
jint SF_arc_graphics_Gl_stencilPassDepthPass;
jint SF_arc_graphics_Gl_stencilRef;
jint SF_arc_graphics_Gl_stencilValueMask;
jint SF_arc_graphics_Gl_stencilWritemask;
jint SF_arc_graphics_Gl_stencilBackFunc;
jint SF_arc_graphics_Gl_stencilBackFail;
jint SF_arc_graphics_Gl_stencilBackPassDepthFail;
jint SF_arc_graphics_Gl_stencilBackPassDepthPass;
jint SF_arc_graphics_Gl_stencilBackRef;
jint SF_arc_graphics_Gl_stencilBackValueMask;
jint SF_arc_graphics_Gl_stencilBackWritemask;
jint SF_arc_graphics_Gl_viewport;
jint SF_arc_graphics_Gl_scissorBox;
jint SF_arc_graphics_Gl_colorClearValue;
jint SF_arc_graphics_Gl_colorWritemask;
jint SF_arc_graphics_Gl_unpackAlignment;
jint SF_arc_graphics_Gl_packAlignment;
jint SF_arc_graphics_Gl_maxTextureSize;
jint SF_arc_graphics_Gl_maxTextureUnits;
jint SF_arc_graphics_Gl_maxViewportDims;
jint SF_arc_graphics_Gl_subpixelBits;
jint SF_arc_graphics_Gl_redBits;
jint SF_arc_graphics_Gl_greenBits;
jint SF_arc_graphics_Gl_blueBits;
jint SF_arc_graphics_Gl_alphaBits;
jint SF_arc_graphics_Gl_depthBits;
jint SF_arc_graphics_Gl_stencilBits;
jint SF_arc_graphics_Gl_polygonOffsetUnits;
jint SF_arc_graphics_Gl_polygonOffsetFactor;
jint SF_arc_graphics_Gl_textureBinding2d;
jint SF_arc_graphics_Gl_sampleBuffers;
jint SF_arc_graphics_Gl_samples;
jint SF_arc_graphics_Gl_sampleCoverageValue;
jint SF_arc_graphics_Gl_sampleCoverageInvert;
jint SF_arc_graphics_Gl_numCompressedTextureFormats;
jint SF_arc_graphics_Gl_compressedTextureFormats;
jint SF_arc_graphics_Gl_dontCare;
jint SF_arc_graphics_Gl_fastest;
jint SF_arc_graphics_Gl_nicest;
jint SF_arc_graphics_Gl_generateMipmap;
jint SF_arc_graphics_Gl_generateMipmapHint;
jint SF_arc_graphics_Gl_byteV;
jint SF_arc_graphics_Gl_unsignedByte;
jint SF_arc_graphics_Gl_shortV;
jint SF_arc_graphics_Gl_unsignedShort;
jint SF_arc_graphics_Gl_intV;
jint SF_arc_graphics_Gl_unsignedInt;
jint SF_arc_graphics_Gl_floatV;
jint SF_arc_graphics_Gl_fixed;
jint SF_arc_graphics_Gl_depthComponent;
jint SF_arc_graphics_Gl_alpha;
jint SF_arc_graphics_Gl_rgb;
jint SF_arc_graphics_Gl_rgba;
jint SF_arc_graphics_Gl_luminance;
jint SF_arc_graphics_Gl_luminanceAlpha;
jint SF_arc_graphics_Gl_unsignedShort4444;
jint SF_arc_graphics_Gl_unsignedShort5551;
jint SF_arc_graphics_Gl_unsignedShort565;
jint SF_arc_graphics_Gl_fragmentShader;
jint SF_arc_graphics_Gl_vertexShader;
jint SF_arc_graphics_Gl_maxVertexAttribs;
jint SF_arc_graphics_Gl_maxVertexUniformVectors;
jint SF_arc_graphics_Gl_maxVaryingVectors;
jint SF_arc_graphics_Gl_maxCombinedTextureImageUnits;
jint SF_arc_graphics_Gl_maxVertexTextureImageUnits;
jint SF_arc_graphics_Gl_maxTextureImageUnits;
jint SF_arc_graphics_Gl_maxFragmentUniformVectors;
jint SF_arc_graphics_Gl_shaderType;
jint SF_arc_graphics_Gl_deleteStatus;
jint SF_arc_graphics_Gl_linkStatus;
jint SF_arc_graphics_Gl_validateStatus;
jint SF_arc_graphics_Gl_attachedShaders;
jint SF_arc_graphics_Gl_activeUniforms;
jint SF_arc_graphics_Gl_activeUniformMaxLength;
jint SF_arc_graphics_Gl_activeAttributes;
jint SF_arc_graphics_Gl_activeAttributeMaxLength;
jint SF_arc_graphics_Gl_shadingLanguageVersion;
jint SF_arc_graphics_Gl_currentProgram;
jint SF_arc_graphics_Gl_never;
jint SF_arc_graphics_Gl_less;
jint SF_arc_graphics_Gl_equal;
jint SF_arc_graphics_Gl_lequal;
jint SF_arc_graphics_Gl_greater;
jint SF_arc_graphics_Gl_notequal;
jint SF_arc_graphics_Gl_gequal;
jint SF_arc_graphics_Gl_always;
jint SF_arc_graphics_Gl_keep;
jint SF_arc_graphics_Gl_replace;
jint SF_arc_graphics_Gl_incr;
jint SF_arc_graphics_Gl_decr;
jint SF_arc_graphics_Gl_invert;
jint SF_arc_graphics_Gl_incrWrap;
jint SF_arc_graphics_Gl_decrWrap;
jint SF_arc_graphics_Gl_vendor;
jint SF_arc_graphics_Gl_renderer;
jint SF_arc_graphics_Gl_version;
jint SF_arc_graphics_Gl_extensions;
jint SF_arc_graphics_Gl_nearest;
jint SF_arc_graphics_Gl_linear;
jint SF_arc_graphics_Gl_nearestMipmapNearest;
jint SF_arc_graphics_Gl_linearMipmapNearest;
jint SF_arc_graphics_Gl_nearestMipmapLinear;
jint SF_arc_graphics_Gl_linearMipmapLinear;
jint SF_arc_graphics_Gl_textureMagFilter;
jint SF_arc_graphics_Gl_textureMinFilter;
jint SF_arc_graphics_Gl_textureWrapS;
jint SF_arc_graphics_Gl_textureWrapT;
jint SF_arc_graphics_Gl_texture;
jint SF_arc_graphics_Gl_textureCubeMap;
jint SF_arc_graphics_Gl_textureBindingCubeMap;
jint SF_arc_graphics_Gl_textureCubeMapPositiveX;
jint SF_arc_graphics_Gl_textureCubeMapNegativeX;
jint SF_arc_graphics_Gl_textureCubeMapPositiveY;
jint SF_arc_graphics_Gl_textureCubeMapNegativeY;
jint SF_arc_graphics_Gl_textureCubeMapPositiveZ;
jint SF_arc_graphics_Gl_textureCubeMapNegativeZ;
jint SF_arc_graphics_Gl_maxCubeMapTextureSize;
jint SF_arc_graphics_Gl_texture0;
jint SF_arc_graphics_Gl_texture1;
jint SF_arc_graphics_Gl_texture2;
jint SF_arc_graphics_Gl_texture3;
jint SF_arc_graphics_Gl_texture4;
jint SF_arc_graphics_Gl_texture5;
jint SF_arc_graphics_Gl_texture6;
jint SF_arc_graphics_Gl_texture7;
jint SF_arc_graphics_Gl_texture8;
jint SF_arc_graphics_Gl_texture9;
jint SF_arc_graphics_Gl_texture10;
jint SF_arc_graphics_Gl_texture11;
jint SF_arc_graphics_Gl_texture12;
jint SF_arc_graphics_Gl_texture13;
jint SF_arc_graphics_Gl_texture14;
jint SF_arc_graphics_Gl_texture15;
jint SF_arc_graphics_Gl_texture16;
jint SF_arc_graphics_Gl_texture17;
jint SF_arc_graphics_Gl_texture18;
jint SF_arc_graphics_Gl_texture19;
jint SF_arc_graphics_Gl_texture20;
jint SF_arc_graphics_Gl_texture21;
jint SF_arc_graphics_Gl_texture22;
jint SF_arc_graphics_Gl_texture23;
jint SF_arc_graphics_Gl_texture24;
jint SF_arc_graphics_Gl_texture25;
jint SF_arc_graphics_Gl_texture26;
jint SF_arc_graphics_Gl_texture27;
jint SF_arc_graphics_Gl_texture28;
jint SF_arc_graphics_Gl_texture29;
jint SF_arc_graphics_Gl_texture30;
jint SF_arc_graphics_Gl_texture31;
jint SF_arc_graphics_Gl_activeTexture;
jint SF_arc_graphics_Gl_repeat;
jint SF_arc_graphics_Gl_clampToEdge;
jint SF_arc_graphics_Gl_mirroredRepeat;
jint SF_arc_graphics_Gl_floatVec2;
jint SF_arc_graphics_Gl_floatVec3;
jint SF_arc_graphics_Gl_floatVec4;
jint SF_arc_graphics_Gl_intVec2;
jint SF_arc_graphics_Gl_intVec3;
jint SF_arc_graphics_Gl_intVec4;
jint SF_arc_graphics_Gl_bool;
jint SF_arc_graphics_Gl_boolVec2;
jint SF_arc_graphics_Gl_boolVec3;
jint SF_arc_graphics_Gl_boolVec4;
jint SF_arc_graphics_Gl_floatMat2;
jint SF_arc_graphics_Gl_floatMat3;
jint SF_arc_graphics_Gl_floatMat4;
jint SF_arc_graphics_Gl_sampler2d;
jint SF_arc_graphics_Gl_samplerCube;
jint SF_arc_graphics_Gl_vertexAttribArrayEnabled;
jint SF_arc_graphics_Gl_vertexAttribArraySize;
jint SF_arc_graphics_Gl_vertexAttribArrayStride;
jint SF_arc_graphics_Gl_vertexAttribArrayType;
jint SF_arc_graphics_Gl_vertexAttribArrayNormalized;
jint SF_arc_graphics_Gl_vertexAttribArrayPointer;
jint SF_arc_graphics_Gl_vertexAttribArrayBufferBinding;
jint SF_arc_graphics_Gl_implementationColorReadType;
jint SF_arc_graphics_Gl_implementationColorReadFormat;
jint SF_arc_graphics_Gl_compileStatus;
jint SF_arc_graphics_Gl_infoLogLength;
jint SF_arc_graphics_Gl_shaderSourceLength;
jint SF_arc_graphics_Gl_shaderCompiler;
jint SF_arc_graphics_Gl_shaderBinaryFormats;
jint SF_arc_graphics_Gl_numShaderBinaryFormats;
jint SF_arc_graphics_Gl_lowFloat;
jint SF_arc_graphics_Gl_mediumFloat;
jint SF_arc_graphics_Gl_highFloat;
jint SF_arc_graphics_Gl_lowInt;
jint SF_arc_graphics_Gl_mediumInt;
jint SF_arc_graphics_Gl_highInt;
jint SF_arc_graphics_Gl_framebuffer;
jint SF_arc_graphics_Gl_renderbuffer;
jint SF_arc_graphics_Gl_rgba4;
jint SF_arc_graphics_Gl_rgb5A1;
jint SF_arc_graphics_Gl_rgb565;
jint SF_arc_graphics_Gl_depthComponent16;
jint SF_arc_graphics_Gl_stencilIndex;
jint SF_arc_graphics_Gl_stencilIndex8;
jint SF_arc_graphics_Gl_renderbufferWidth;
jint SF_arc_graphics_Gl_renderbufferHeight;
jint SF_arc_graphics_Gl_renderbufferInternalFormat;
jint SF_arc_graphics_Gl_renderbufferRedSize;
jint SF_arc_graphics_Gl_renderbufferGreenSize;
jint SF_arc_graphics_Gl_renderbufferBlueSize;
jint SF_arc_graphics_Gl_renderbufferAlphaSize;
jint SF_arc_graphics_Gl_renderbufferDepthSize;
jint SF_arc_graphics_Gl_renderbufferStencilSize;
jint SF_arc_graphics_Gl_framebufferAttachmentObjectType;
jint SF_arc_graphics_Gl_framebufferAttachmentObjectName;
jint SF_arc_graphics_Gl_framebufferAttachmentTextureLevel;
jint SF_arc_graphics_Gl_framebufferAttachmentTextureCubeMapFace;
jint SF_arc_graphics_Gl_colorAttachment0;
jint SF_arc_graphics_Gl_depthAttachment;
jint SF_arc_graphics_Gl_stencilAttachment;
jint SF_arc_graphics_Gl_none;
jint SF_arc_graphics_Gl_framebufferComplete;
jint SF_arc_graphics_Gl_framebufferIncompleteAttachment;
jint SF_arc_graphics_Gl_framebufferIncompleteMissingAttachment;
jint SF_arc_graphics_Gl_framebufferIncompleteDimensions;
jint SF_arc_graphics_Gl_framebufferUnsupported;
jint SF_arc_graphics_Gl_framebufferBinding;
jint SF_arc_graphics_Gl_renderbufferBinding;
jint SF_arc_graphics_Gl_maxRenderbufferSize;
jint SF_arc_graphics_Gl_invalidFramebufferOperation;
jint SF_arc_graphics_Gl_programPointSize;
jobject SF_arc_graphics_Gl_ibuf;
jobject SF_arc_graphics_Gl_fbuf;
jint SF_arc_graphics_Gl_lastActiveTexture;
jobject SF_arc_graphics_Gl_lastBoundTextures;
jint SF_arc_graphics_Gl_lastUsedProgram;
jobject SF_arc_graphics_Gl_enabled;
jbool SF_arc_graphics_Gl_wasDepthMask;
jint SF_arc_graphics_Gl_lastBlendSrc;
jint SF_arc_graphics_Gl_lastBlendDst;
jint SF_arc_graphics_Gl_lastBlendSrcAlpha;
jint SF_arc_graphics_Gl_lastBlendDstAlpha;

void mark_arc_graphics_Gl(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_arc_graphics_Gl_ibuf)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_Gl_ibuf)->clazz)->markFunction)((jobject) SF_arc_graphics_Gl_ibuf, mark, depth + 1);
		if (SF_arc_graphics_Gl_fbuf)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_Gl_fbuf)->clazz)->markFunction)((jobject) SF_arc_graphics_Gl_fbuf, mark, depth + 1);
		if (SF_arc_graphics_Gl_lastBoundTextures)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_Gl_lastBoundTextures)->clazz)->markFunction)((jobject) SF_arc_graphics_Gl_lastBoundTextures, mark, depth + 1);
		if (SF_arc_graphics_Gl_enabled)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_Gl_enabled)->clazz)->markFunction)((jobject) SF_arc_graphics_Gl_enabled, mark, depth + 1);
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
	auto self = (arc_graphics_Gl *) object;
}

void init_arc_graphics_Gl(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(10);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Gl_reset(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:reset", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	{
	LINE_NUMBER(345);
	clinit_arc_graphics_Gl(ctx);
	SF_arc_graphics_Gl_lastActiveTexture = (jint(-1));
	LINE_NUMBER(346);
	clinit_arc_graphics_Gl(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Gl_lastBoundTextures;
	SM_java_util_Arrays_fill_Array1_int_int(ctx, sp[0].o, (jint(-1)));
	LINE_NUMBER(347);
	clinit_arc_graphics_Gl(ctx);
	SF_arc_graphics_Gl_lastUsedProgram = (jint(-1));
	LINE_NUMBER(348);
	clinit_arc_graphics_Gl(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Gl_enabled;
	((func_arc_struct_Bits_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Bits_clear])(ctx, sp[0].o);
	LINE_NUMBER(349);
	clinit_arc_graphics_Gl(ctx);
	SF_arc_graphics_Gl_wasDepthMask = (jint(1));
	LINE_NUMBER(350);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Gl_activeTexture_int(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:activeTexture", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(353);
	if ((clinit_arc_graphics_Gl(ctx), (jint)SF_arc_graphics_Gl_lastActiveTexture) != (frame[0].i)) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(355);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	((func_arc_graphics_GL20_glActiveTexture_int) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glActiveTexture_int, sp[0].o))(ctx, sp[0].o, (frame[0].i));
	LINE_NUMBER(356);
	clinit_arc_graphics_Gl(ctx);
	SF_arc_graphics_Gl_lastActiveTexture = (frame[0].i);
	LINE_NUMBER(357);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Gl_bindTexture_int_int(jcontext ctx, jint param0, jint param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:bindTexture", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(360);
	if ((frame[0].i) != (3553)) goto label_1;
	}
	{
	LINE_NUMBER(362);
	frame[2].i = ((clinit_arc_graphics_Gl(ctx), (jint)SF_arc_graphics_Gl_lastActiveTexture) - (jint(33984)));
	LINE_NUMBER(364);
	if ((frame[2].i) < 0) goto label_1;
	}
	{
	jint temp0 = frame[2].i;
	clinit_arc_graphics_Gl(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Gl_lastBoundTextures;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_1;
	}
	{
	LINE_NUMBER(365);
	clinit_arc_graphics_Gl(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Gl_lastBoundTextures;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[2].i))) != (frame[1].i)) goto label_5;
	}
	LINE_NUMBER(367);
	popStackFrame(ctx);
	INST_RETURN();
label_5:;
	{
	LINE_NUMBER(369);
	clinit_arc_graphics_Gl(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Gl_lastBoundTextures;
	ARRAY_ACCESS(jint, sp[0].o, (frame[2].i)) = (frame[1].i);
	}
label_1:;
	{
	LINE_NUMBER(373);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	((func_arc_graphics_GL20_glBindTexture_int_int) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glBindTexture_int_int, sp[0].o))(ctx, sp[0].o, (frame[0].i), (frame[1].i));
	LINE_NUMBER(374);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Gl_blendFunc_int_int(jcontext ctx, jint param0, jint param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:blendFunc", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(377);
	if ((clinit_arc_graphics_Gl(ctx), (jint)SF_arc_graphics_Gl_lastBlendSrc) != (frame[0].i)) goto label_1;
	}
	{
	if ((clinit_arc_graphics_Gl(ctx), (jint)SF_arc_graphics_Gl_lastBlendDst) != (frame[1].i)) goto label_1;
	}
	{
	if ((clinit_arc_graphics_Gl(ctx), (jint)SF_arc_graphics_Gl_lastBlendSrcAlpha) != (frame[0].i)) goto label_1;
	}
	{
	if ((clinit_arc_graphics_Gl(ctx), (jint)SF_arc_graphics_Gl_lastBlendDstAlpha) != (frame[1].i)) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(379);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	jint temp0 = frame[0].i;
	clinit_arc_graphics_Gl(ctx);
	SF_arc_graphics_Gl_lastBlendSrcAlpha = temp0;
	clinit_arc_graphics_Gl(ctx);
	SF_arc_graphics_Gl_lastBlendSrc = temp0;
	jint temp5 = frame[1].i;
	clinit_arc_graphics_Gl(ctx);
	SF_arc_graphics_Gl_lastBlendDstAlpha = temp5;
	clinit_arc_graphics_Gl(ctx);
	SF_arc_graphics_Gl_lastBlendDst = temp5;
	((func_arc_graphics_GL20_glBlendFunc_int_int) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glBlendFunc_int_int, sp[0].o))(ctx, sp[0].o, temp0, temp5);
	LINE_NUMBER(380);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Gl_clear_int(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:clear", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(383);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	((func_arc_graphics_GL20_glClear_int) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glClear_int, sp[0].o))(ctx, sp[0].o, (frame[0].i));
	LINE_NUMBER(384);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Gl_clearColor_float_float_float_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:clearColor", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	{
	LINE_NUMBER(387);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	((func_arc_graphics_GL20_glClearColor_float_float_float_float) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glClearColor_float_float_float_float, sp[0].o))(ctx, sp[0].o, (frame[0].f), (frame[1].f), (frame[2].f), (frame[3].f));
	LINE_NUMBER(388);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Gl_clearDepthf_float(jcontext ctx, jfloat param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:clearDepthf", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(391);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	((func_arc_graphics_GL20_glClearDepthf_float) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glClearDepthf_float, sp[0].o))(ctx, sp[0].o, (frame[0].f));
	LINE_NUMBER(392);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Gl_clearStencil_int(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:clearStencil", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(395);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	((func_arc_graphics_GL20_glClearStencil_int) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glClearStencil_int, sp[0].o))(ctx, sp[0].o, (frame[0].i));
	LINE_NUMBER(396);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Gl_colorMask_boolean_boolean_boolean_boolean(jcontext ctx, jbool param0, jbool param1, jbool param2, jbool param3) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:colorMask", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(399);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	((func_arc_graphics_GL20_glColorMask_boolean_boolean_boolean_boolean) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glColorMask_boolean_boolean_boolean_boolean, sp[0].o))(ctx, sp[0].o, (frame[0].i), (frame[1].i), (frame[2].i), (frame[3].i));
	LINE_NUMBER(400);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Gl_compressedTexImage2D_int_int_int_int_int_int_int_java_nio_Buffer(jcontext ctx, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jobject param7) {
	jtype frame[17];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:compressedTexImage2D", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	frame[5].i = param5;
	frame[6].i = param6;
	frame[7].o = param7;
	{
	LINE_NUMBER(403);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	((func_arc_graphics_GL20_glCompressedTexImage2D_int_int_int_int_int_int_int_java_nio_Buffer) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glCompressedTexImage2D_int_int_int_int_int_int_int_java_nio_Buffer, sp[0].o))(ctx, sp[0].o, (frame[0].i), (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].i), (frame[5].i), (frame[6].i), (frame[7].o));
	LINE_NUMBER(404);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Gl_compressedTexSubImage2D_int_int_int_int_int_int_int_int_java_nio_Buffer(jcontext ctx, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jobject param8) {
	jtype frame[19];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:compressedTexSubImage2D", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	frame[5].i = param5;
	frame[6].i = param6;
	frame[7].i = param7;
	frame[8].o = param8;
	{
	LINE_NUMBER(407);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	((func_arc_graphics_GL20_glCompressedTexSubImage2D_int_int_int_int_int_int_int_int_java_nio_Buffer) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glCompressedTexSubImage2D_int_int_int_int_int_int_int_int_java_nio_Buffer, sp[0].o))(ctx, sp[0].o, (frame[0].i), (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].i), (frame[5].i), (frame[6].i), (frame[7].i), (frame[8].o));
	LINE_NUMBER(408);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Gl_copyTexImage2D_int_int_int_int_int_int_int_int(jcontext ctx, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7) {
	jtype frame[17];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:copyTexImage2D", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	frame[5].i = param5;
	frame[6].i = param6;
	frame[7].i = param7;
	{
	LINE_NUMBER(411);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	((func_arc_graphics_GL20_glCopyTexImage2D_int_int_int_int_int_int_int_int) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glCopyTexImage2D_int_int_int_int_int_int_int_int, sp[0].o))(ctx, sp[0].o, (frame[0].i), (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].i), (frame[5].i), (frame[6].i), (frame[7].i));
	LINE_NUMBER(412);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Gl_copyTexSubImage2D_int_int_int_int_int_int_int_int(jcontext ctx, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7) {
	jtype frame[17];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:copyTexSubImage2D", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	frame[5].i = param5;
	frame[6].i = param6;
	frame[7].i = param7;
	{
	LINE_NUMBER(415);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	((func_arc_graphics_GL20_glCopyTexSubImage2D_int_int_int_int_int_int_int_int) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glCopyTexSubImage2D_int_int_int_int_int_int_int_int, sp[0].o))(ctx, sp[0].o, (frame[0].i), (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].i), (frame[5].i), (frame[6].i), (frame[7].i));
	LINE_NUMBER(416);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Gl_cullFace_int(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:cullFace", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(419);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	((func_arc_graphics_GL20_glCullFace_int) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glCullFace_int, sp[0].o))(ctx, sp[0].o, (frame[0].i));
	LINE_NUMBER(420);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Gl_deleteTexture_int(jcontext ctx, jint param0) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:deleteTexture", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(424);
	frame[1].i = (jint(0));
	}
label_1:;
	{
	jint temp0 = frame[1].i;
	clinit_arc_graphics_Gl(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Gl_lastBoundTextures;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_2;
	}
	{
	LINE_NUMBER(425);
	clinit_arc_graphics_Gl(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Gl_lastBoundTextures;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[1].i))) != (frame[0].i)) goto label_4;
	}
	{
	LINE_NUMBER(426);
	clinit_arc_graphics_Gl(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Gl_lastBoundTextures;
	ARRAY_ACCESS(jint, sp[0].o, (frame[1].i)) = (jint(-1));
	}
label_4:;
	{
	LINE_NUMBER(424);
	INST_IINC(1, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(429);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	((func_arc_graphics_GL20_glDeleteTexture_int) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glDeleteTexture_int, sp[0].o))(ctx, sp[0].o, (frame[0].i));
	LINE_NUMBER(430);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Gl_depthFunc_int(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:depthFunc", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(433);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	((func_arc_graphics_GL20_glDepthFunc_int) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glDepthFunc_int, sp[0].o))(ctx, sp[0].o, (frame[0].i));
	LINE_NUMBER(434);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Gl_depthMask_boolean(jcontext ctx, jbool param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:depthMask", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(438);
	if ((frame[0].i) != (clinit_arc_graphics_Gl(ctx), (jint)SF_arc_graphics_Gl_wasDepthMask)) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(439);
	clinit_arc_graphics_Gl(ctx);
	SF_arc_graphics_Gl_wasDepthMask = (frame[0].i);
	LINE_NUMBER(441);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	((func_arc_graphics_GL20_glDepthMask_boolean) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glDepthMask_boolean, sp[0].o))(ctx, sp[0].o, (frame[0].i));
	LINE_NUMBER(442);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Gl_depthRangef_float_float(jcontext ctx, jfloat param0, jfloat param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:depthRangef", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(445);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	((func_arc_graphics_GL20_glDepthRangef_float_float) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glDepthRangef_float_float, sp[0].o))(ctx, sp[0].o, (frame[0].f), (frame[1].f));
	LINE_NUMBER(446);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Gl_disable_int(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:disable", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(449);
	clinit_arc_graphics_Gl(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Gl_enabled;
	jint temp0 = (jint)((func_arc_struct_Bits_get_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Bits_get_int_R_boolean])(ctx, sp[0].o, (frame[0].i));
	if (temp0 != 0) goto label_1;
	}
	LINE_NUMBER(450);
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(452);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	((func_arc_graphics_GL20_glDisable_int) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glDisable_int, sp[0].o))(ctx, sp[0].o, (frame[0].i));
	LINE_NUMBER(453);
	clinit_arc_graphics_Gl(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Gl_enabled;
	((func_arc_struct_Bits_clear_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Bits_clear_int])(ctx, sp[0].o, (frame[0].i));
	LINE_NUMBER(454);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Gl_drawArrays_int_int_int(jcontext ctx, jint param0, jint param1, jint param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:drawArrays", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(457);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	((func_arc_graphics_GL20_glDrawArrays_int_int_int) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glDrawArrays_int_int_int, sp[0].o))(ctx, sp[0].o, (frame[0].i), (frame[1].i), (frame[2].i));
	LINE_NUMBER(458);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Gl_drawElements_int_int_int_java_nio_Buffer(jcontext ctx, jint param0, jint param1, jint param2, jobject param3) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:drawElements", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(461);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	((func_arc_graphics_GL20_glDrawElements_int_int_int_java_nio_Buffer) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glDrawElements_int_int_int_java_nio_Buffer, sp[0].o))(ctx, sp[0].o, (frame[0].i), (frame[1].i), (frame[2].i), (frame[3].o));
	LINE_NUMBER(462);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Gl_enable_int(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:enable", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(465);
	clinit_arc_graphics_Gl(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Gl_enabled;
	jint temp0 = (jint)((func_arc_struct_Bits_get_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Bits_get_int_R_boolean])(ctx, sp[0].o, (frame[0].i));
	if (temp0 == 0) goto label_1;
	}
	LINE_NUMBER(466);
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(468);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	((func_arc_graphics_GL20_glEnable_int) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glEnable_int, sp[0].o))(ctx, sp[0].o, (frame[0].i));
	LINE_NUMBER(469);
	clinit_arc_graphics_Gl(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Gl_enabled;
	((func_arc_struct_Bits_set_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Bits_set_int])(ctx, sp[0].o, (frame[0].i));
	LINE_NUMBER(470);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Gl_finish(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:finish", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	{
	LINE_NUMBER(473);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	((func_arc_graphics_GL20_glFinish) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glFinish, sp[0].o))(ctx, sp[0].o);
	LINE_NUMBER(474);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Gl_flush(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:flush", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	{
	LINE_NUMBER(477);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	((func_arc_graphics_GL20_glFlush) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glFlush, sp[0].o))(ctx, sp[0].o);
	LINE_NUMBER(478);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Gl_frontFace_int(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:frontFace", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(481);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	((func_arc_graphics_GL20_glFrontFace_int) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glFrontFace_int, sp[0].o))(ctx, sp[0].o, (frame[0].i));
	LINE_NUMBER(482);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint SM_arc_graphics_Gl_genTexture_R_int(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:genTexture", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	{
	LINE_NUMBER(485);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	jint temp0 = (jint)((func_arc_graphics_GL20_glGenTexture_R_int) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glGenTexture_R_int, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint SM_arc_graphics_Gl_getError_R_int(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:getError", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	{
	LINE_NUMBER(489);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	jint temp0 = (jint)((func_arc_graphics_GL20_glGetError_R_int) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glGetError_R_int, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Gl_getIntegerv_int_java_nio_IntBuffer(jcontext ctx, jint param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:getIntegerv", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(493);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	((func_arc_graphics_GL20_glGetIntegerv_int_java_nio_IntBuffer) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glGetIntegerv_int_java_nio_IntBuffer, sp[0].o))(ctx, sp[0].o, (frame[0].i), (frame[1].o));
	LINE_NUMBER(494);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint SM_arc_graphics_Gl_getInt_int_R_int(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:getInt", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(497);
	clinit_arc_graphics_Gl(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Gl_ibuf;
	sp[0].o = (jobject)((func_java_nio_IntBuffer_position_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_IntBuffer_position_int_R_java_nio_Buffer])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(498);
	jint temp0 = frame[0].i;
	clinit_arc_graphics_Gl(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Gl_ibuf;
	SM_arc_graphics_Gl_getIntegerv_int_java_nio_IntBuffer(ctx, temp0, sp[0].o);
	LINE_NUMBER(499);
	clinit_arc_graphics_Gl(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Gl_ibuf;
	jint temp1 = (jint)((func_java_nio_IntBuffer_get_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_IntBuffer_get_int_R_int])(ctx, sp[0].o, (jint(0)));
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

jfloat SM_arc_graphics_Gl_getFloat_int_R_float(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:getFloat", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(503);
	clinit_arc_graphics_Gl(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Gl_fbuf;
	sp[0].o = (jobject)((func_java_nio_FloatBuffer_position_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_FloatBuffer_position_int_R_java_nio_Buffer])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(504);
	jint temp0 = frame[0].i;
	clinit_arc_graphics_Gl(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Gl_fbuf;
	SM_arc_graphics_Gl_getFloatv_int_java_nio_FloatBuffer(ctx, temp0, sp[0].o);
	LINE_NUMBER(505);
	clinit_arc_graphics_Gl(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Gl_fbuf;
	jfloat temp1 = (jfloat)((func_java_nio_FloatBuffer_get_int_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_FloatBuffer_get_int_R_float])(ctx, sp[0].o, (jint(0)));
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

jobject SM_arc_graphics_Gl_getString_int_R_java_lang_String(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:getString", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(509);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	sp[0].o = (jobject)((func_arc_graphics_GL20_glGetString_int_R_java_lang_String) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glGetString_int_R_java_lang_String, sp[0].o))(ctx, sp[0].o, (frame[0].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Gl_hint_int_int(jcontext ctx, jint param0, jint param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:hint", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(513);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	((func_arc_graphics_GL20_glHint_int_int) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glHint_int_int, sp[0].o))(ctx, sp[0].o, (frame[0].i), (frame[1].i));
	LINE_NUMBER(514);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Gl_pixelStorei_int_int(jcontext ctx, jint param0, jint param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:pixelStorei", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(517);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	((func_arc_graphics_GL20_glPixelStorei_int_int) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glPixelStorei_int_int, sp[0].o))(ctx, sp[0].o, (frame[0].i), (frame[1].i));
	LINE_NUMBER(518);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Gl_polygonOffset_float_float(jcontext ctx, jfloat param0, jfloat param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:polygonOffset", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(521);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	((func_arc_graphics_GL20_glPolygonOffset_float_float) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glPolygonOffset_float_float, sp[0].o))(ctx, sp[0].o, (frame[0].f), (frame[1].f));
	LINE_NUMBER(522);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Gl_readPixels_int_int_int_int_int_int_java_nio_Buffer(jcontext ctx, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jobject param6) {
	jtype frame[15];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:readPixels", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	frame[5].i = param5;
	frame[6].o = param6;
	{
	LINE_NUMBER(525);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	((func_arc_graphics_GL20_glReadPixels_int_int_int_int_int_int_java_nio_Buffer) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glReadPixels_int_int_int_int_int_int_java_nio_Buffer, sp[0].o))(ctx, sp[0].o, (frame[0].i), (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].i), (frame[5].i), (frame[6].o));
	LINE_NUMBER(526);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Gl_scissor_int_int_int_int(jcontext ctx, jint param0, jint param1, jint param2, jint param3) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:scissor", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(529);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	((func_arc_graphics_GL20_glScissor_int_int_int_int) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glScissor_int_int_int_int, sp[0].o))(ctx, sp[0].o, (frame[0].i), (frame[1].i), (frame[2].i), (frame[3].i));
	LINE_NUMBER(530);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Gl_stencilFunc_int_int_int(jcontext ctx, jint param0, jint param1, jint param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:stencilFunc", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(533);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	((func_arc_graphics_GL20_glStencilFunc_int_int_int) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glStencilFunc_int_int_int, sp[0].o))(ctx, sp[0].o, (frame[0].i), (frame[1].i), (frame[2].i));
	LINE_NUMBER(534);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Gl_stencilMask_int(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:stencilMask", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(537);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	((func_arc_graphics_GL20_glStencilMask_int) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glStencilMask_int, sp[0].o))(ctx, sp[0].o, (frame[0].i));
	LINE_NUMBER(538);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Gl_stencilOp_int_int_int(jcontext ctx, jint param0, jint param1, jint param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:stencilOp", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(541);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	((func_arc_graphics_GL20_glStencilOp_int_int_int) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glStencilOp_int_int_int, sp[0].o))(ctx, sp[0].o, (frame[0].i), (frame[1].i), (frame[2].i));
	LINE_NUMBER(542);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Gl_texImage2D_int_int_int_int_int_int_int_int_java_nio_Buffer(jcontext ctx, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jobject param8) {
	jtype frame[19];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:texImage2D", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	frame[5].i = param5;
	frame[6].i = param6;
	frame[7].i = param7;
	frame[8].o = param8;
	{
	LINE_NUMBER(545);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	((func_arc_graphics_GL20_glTexImage2D_int_int_int_int_int_int_int_int_java_nio_Buffer) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glTexImage2D_int_int_int_int_int_int_int_int_java_nio_Buffer, sp[0].o))(ctx, sp[0].o, (frame[0].i), (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].i), (frame[5].i), (frame[6].i), (frame[7].i), (frame[8].o));
	LINE_NUMBER(546);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Gl_texParameterf_int_int_float(jcontext ctx, jint param0, jint param1, jfloat param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:texParameterf", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].f = param2;
	{
	LINE_NUMBER(549);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	((func_arc_graphics_GL20_glTexParameterf_int_int_float) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glTexParameterf_int_int_float, sp[0].o))(ctx, sp[0].o, (frame[0].i), (frame[1].i), (frame[2].f));
	LINE_NUMBER(550);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Gl_texSubImage2D_int_int_int_int_int_int_int_int_java_nio_Buffer(jcontext ctx, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jobject param8) {
	jtype frame[19];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:texSubImage2D", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	frame[5].i = param5;
	frame[6].i = param6;
	frame[7].i = param7;
	frame[8].o = param8;
	{
	LINE_NUMBER(553);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	((func_arc_graphics_GL20_glTexSubImage2D_int_int_int_int_int_int_int_int_java_nio_Buffer) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glTexSubImage2D_int_int_int_int_int_int_int_int_java_nio_Buffer, sp[0].o))(ctx, sp[0].o, (frame[0].i), (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].i), (frame[5].i), (frame[6].i), (frame[7].i), (frame[8].o));
	LINE_NUMBER(554);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Gl_viewport_int_int_int_int(jcontext ctx, jint param0, jint param1, jint param2, jint param3) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:viewport", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(557);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	((func_arc_graphics_GL20_glViewport_int_int_int_int) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glViewport_int_int_int_int, sp[0].o))(ctx, sp[0].o, (frame[0].i), (frame[1].i), (frame[2].i), (frame[3].i));
	LINE_NUMBER(558);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Gl_attachShader_int_int(jcontext ctx, jint param0, jint param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:attachShader", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(561);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	((func_arc_graphics_GL20_glAttachShader_int_int) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glAttachShader_int_int, sp[0].o))(ctx, sp[0].o, (frame[0].i), (frame[1].i));
	LINE_NUMBER(562);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Gl_bindAttribLocation_int_int_java_lang_String(jcontext ctx, jint param0, jint param1, jobject param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:bindAttribLocation", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(565);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	((func_arc_graphics_GL20_glBindAttribLocation_int_int_java_lang_String) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glBindAttribLocation_int_int_java_lang_String, sp[0].o))(ctx, sp[0].o, (frame[0].i), (frame[1].i), (frame[2].o));
	LINE_NUMBER(566);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Gl_bindBuffer_int_int(jcontext ctx, jint param0, jint param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:bindBuffer", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(569);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	((func_arc_graphics_GL20_glBindBuffer_int_int) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glBindBuffer_int_int, sp[0].o))(ctx, sp[0].o, (frame[0].i), (frame[1].i));
	LINE_NUMBER(570);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Gl_bindFramebuffer_int_int(jcontext ctx, jint param0, jint param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:bindFramebuffer", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(573);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	((func_arc_graphics_GL20_glBindFramebuffer_int_int) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glBindFramebuffer_int_int, sp[0].o))(ctx, sp[0].o, (frame[0].i), (frame[1].i));
	LINE_NUMBER(574);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Gl_bindRenderbuffer_int_int(jcontext ctx, jint param0, jint param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:bindRenderbuffer", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(577);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	((func_arc_graphics_GL20_glBindRenderbuffer_int_int) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glBindRenderbuffer_int_int, sp[0].o))(ctx, sp[0].o, (frame[0].i), (frame[1].i));
	LINE_NUMBER(578);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Gl_blendColor_float_float_float_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:blendColor", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	{
	LINE_NUMBER(581);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	((func_arc_graphics_GL20_glBlendColor_float_float_float_float) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glBlendColor_float_float_float_float, sp[0].o))(ctx, sp[0].o, (frame[0].f), (frame[1].f), (frame[2].f), (frame[3].f));
	LINE_NUMBER(582);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Gl_blendEquation_int(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:blendEquation", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(585);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	((func_arc_graphics_GL20_glBlendEquation_int) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glBlendEquation_int, sp[0].o))(ctx, sp[0].o, (frame[0].i));
	LINE_NUMBER(586);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Gl_blendEquationSeparate_int_int(jcontext ctx, jint param0, jint param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:blendEquationSeparate", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(589);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	((func_arc_graphics_GL20_glBlendEquationSeparate_int_int) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glBlendEquationSeparate_int_int, sp[0].o))(ctx, sp[0].o, (frame[0].i), (frame[1].i));
	LINE_NUMBER(590);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Gl_blendFuncSeparate_int_int_int_int(jcontext ctx, jint param0, jint param1, jint param2, jint param3) {
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:blendFuncSeparate", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(593);
	if ((frame[0].i) != (clinit_arc_graphics_Gl(ctx), (jint)SF_arc_graphics_Gl_lastBlendSrc)) goto label_1;
	}
	{
	if ((frame[1].i) != (clinit_arc_graphics_Gl(ctx), (jint)SF_arc_graphics_Gl_lastBlendDst)) goto label_1;
	}
	{
	if ((frame[2].i) != (clinit_arc_graphics_Gl(ctx), (jint)SF_arc_graphics_Gl_lastBlendSrcAlpha)) goto label_1;
	}
	{
	if ((frame[3].i) != (clinit_arc_graphics_Gl(ctx), (jint)SF_arc_graphics_Gl_lastBlendDstAlpha)) goto label_1;
	}
	LINE_NUMBER(594);
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(597);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	jint temp0 = frame[0].i;
	clinit_arc_graphics_Gl(ctx);
	SF_arc_graphics_Gl_lastBlendSrc = temp0;
	jint temp3 = frame[1].i;
	clinit_arc_graphics_Gl(ctx);
	SF_arc_graphics_Gl_lastBlendDst = temp3;
	jint temp6 = frame[2].i;
	clinit_arc_graphics_Gl(ctx);
	SF_arc_graphics_Gl_lastBlendSrcAlpha = temp6;
	jint temp9 = frame[3].i;
	clinit_arc_graphics_Gl(ctx);
	SF_arc_graphics_Gl_lastBlendDstAlpha = temp9;
	((func_arc_graphics_GL20_glBlendFuncSeparate_int_int_int_int) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glBlendFuncSeparate_int_int_int_int, sp[0].o))(ctx, sp[0].o, temp0, temp3, temp6, temp9);
	LINE_NUMBER(598);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Gl_bufferData_int_int_java_nio_Buffer_int(jcontext ctx, jint param0, jint param1, jobject param2, jint param3) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:bufferData", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(601);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	((func_arc_graphics_GL20_glBufferData_int_int_java_nio_Buffer_int) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glBufferData_int_int_java_nio_Buffer_int, sp[0].o))(ctx, sp[0].o, (frame[0].i), (frame[1].i), (frame[2].o), (frame[3].i));
	LINE_NUMBER(602);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Gl_bufferSubData_int_int_int_java_nio_Buffer(jcontext ctx, jint param0, jint param1, jint param2, jobject param3) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:bufferSubData", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(605);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	((func_arc_graphics_GL20_glBufferSubData_int_int_int_java_nio_Buffer) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glBufferSubData_int_int_int_java_nio_Buffer, sp[0].o))(ctx, sp[0].o, (frame[0].i), (frame[1].i), (frame[2].i), (frame[3].o));
	LINE_NUMBER(606);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint SM_arc_graphics_Gl_checkFramebufferStatus_int_R_int(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:checkFramebufferStatus", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(609);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	jint temp0 = (jint)((func_arc_graphics_GL20_glCheckFramebufferStatus_int_R_int) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glCheckFramebufferStatus_int_R_int, sp[0].o))(ctx, sp[0].o, (frame[0].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Gl_compileShader_int(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:compileShader", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(613);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	((func_arc_graphics_GL20_glCompileShader_int) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glCompileShader_int, sp[0].o))(ctx, sp[0].o, (frame[0].i));
	LINE_NUMBER(614);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint SM_arc_graphics_Gl_createProgram_R_int(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:createProgram", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	{
	LINE_NUMBER(617);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	jint temp0 = (jint)((func_arc_graphics_GL20_glCreateProgram_R_int) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glCreateProgram_R_int, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint SM_arc_graphics_Gl_createShader_int_R_int(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:createShader", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(621);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	jint temp0 = (jint)((func_arc_graphics_GL20_glCreateShader_int_R_int) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glCreateShader_int_R_int, sp[0].o))(ctx, sp[0].o, (frame[0].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Gl_deleteBuffer_int(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:deleteBuffer", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(625);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	((func_arc_graphics_GL20_glDeleteBuffer_int) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glDeleteBuffer_int, sp[0].o))(ctx, sp[0].o, (frame[0].i));
	LINE_NUMBER(626);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Gl_deleteFramebuffer_int(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:deleteFramebuffer", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(629);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	((func_arc_graphics_GL20_glDeleteFramebuffer_int) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glDeleteFramebuffer_int, sp[0].o))(ctx, sp[0].o, (frame[0].i));
	LINE_NUMBER(630);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Gl_deleteProgram_int(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:deleteProgram", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(633);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	((func_arc_graphics_GL20_glDeleteProgram_int) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glDeleteProgram_int, sp[0].o))(ctx, sp[0].o, (frame[0].i));
	LINE_NUMBER(634);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Gl_deleteRenderbuffer_int(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:deleteRenderbuffer", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(637);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	((func_arc_graphics_GL20_glDeleteRenderbuffer_int) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glDeleteRenderbuffer_int, sp[0].o))(ctx, sp[0].o, (frame[0].i));
	LINE_NUMBER(638);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Gl_deleteShader_int(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:deleteShader", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(641);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	((func_arc_graphics_GL20_glDeleteShader_int) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glDeleteShader_int, sp[0].o))(ctx, sp[0].o, (frame[0].i));
	LINE_NUMBER(642);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Gl_detachShader_int_int(jcontext ctx, jint param0, jint param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:detachShader", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(645);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	((func_arc_graphics_GL20_glDetachShader_int_int) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glDetachShader_int_int, sp[0].o))(ctx, sp[0].o, (frame[0].i), (frame[1].i));
	LINE_NUMBER(646);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Gl_disableVertexAttribArray_int(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:disableVertexAttribArray", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(649);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	((func_arc_graphics_GL20_glDisableVertexAttribArray_int) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glDisableVertexAttribArray_int, sp[0].o))(ctx, sp[0].o, (frame[0].i));
	LINE_NUMBER(650);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Gl_drawElements_int_int_int_int(jcontext ctx, jint param0, jint param1, jint param2, jint param3) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:drawElements", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(653);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	((func_arc_graphics_GL20_glDrawElements_int_int_int_int) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glDrawElements_int_int_int_int, sp[0].o))(ctx, sp[0].o, (frame[0].i), (frame[1].i), (frame[2].i), (frame[3].i));
	LINE_NUMBER(654);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Gl_enableVertexAttribArray_int(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:enableVertexAttribArray", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(657);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	((func_arc_graphics_GL20_glEnableVertexAttribArray_int) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glEnableVertexAttribArray_int, sp[0].o))(ctx, sp[0].o, (frame[0].i));
	LINE_NUMBER(658);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Gl_framebufferRenderbuffer_int_int_int_int(jcontext ctx, jint param0, jint param1, jint param2, jint param3) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:framebufferRenderbuffer", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(661);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	((func_arc_graphics_GL20_glFramebufferRenderbuffer_int_int_int_int) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glFramebufferRenderbuffer_int_int_int_int, sp[0].o))(ctx, sp[0].o, (frame[0].i), (frame[1].i), (frame[2].i), (frame[3].i));
	LINE_NUMBER(662);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Gl_framebufferTexture2D_int_int_int_int_int(jcontext ctx, jint param0, jint param1, jint param2, jint param3, jint param4) {
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:framebufferTexture2D", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	{
	LINE_NUMBER(665);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	((func_arc_graphics_GL20_glFramebufferTexture2D_int_int_int_int_int) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glFramebufferTexture2D_int_int_int_int_int, sp[0].o))(ctx, sp[0].o, (frame[0].i), (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].i));
	LINE_NUMBER(666);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint SM_arc_graphics_Gl_genBuffer_R_int(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:genBuffer", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	{
	LINE_NUMBER(669);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	jint temp0 = (jint)((func_arc_graphics_GL20_glGenBuffer_R_int) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glGenBuffer_R_int, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Gl_generateMipmap_int(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:generateMipmap", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(673);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	((func_arc_graphics_GL20_glGenerateMipmap_int) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glGenerateMipmap_int, sp[0].o))(ctx, sp[0].o, (frame[0].i));
	LINE_NUMBER(674);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint SM_arc_graphics_Gl_genFramebuffer_R_int(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:genFramebuffer", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	{
	LINE_NUMBER(677);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	jint temp0 = (jint)((func_arc_graphics_GL20_glGenFramebuffer_R_int) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glGenFramebuffer_R_int, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint SM_arc_graphics_Gl_genRenderbuffer_R_int(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:genRenderbuffer", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	{
	LINE_NUMBER(681);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	jint temp0 = (jint)((func_arc_graphics_GL20_glGenRenderbuffer_R_int) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glGenRenderbuffer_R_int, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject SM_arc_graphics_Gl_getActiveAttrib_int_int_java_nio_IntBuffer_java_nio_IntBuffer_R_java_lang_String(jcontext ctx, jint param0, jint param1, jobject param2, jobject param3) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:getActiveAttrib", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(685);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	sp[0].o = (jobject)((func_arc_graphics_GL20_glGetActiveAttrib_int_int_java_nio_IntBuffer_java_nio_IntBuffer_R_java_lang_String) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glGetActiveAttrib_int_int_java_nio_IntBuffer_java_nio_IntBuffer_R_java_lang_String, sp[0].o))(ctx, sp[0].o, (frame[0].i), (frame[1].i), (frame[2].o), (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_graphics_Gl_getActiveUniform_int_int_java_nio_IntBuffer_java_nio_IntBuffer_R_java_lang_String(jcontext ctx, jint param0, jint param1, jobject param2, jobject param3) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:getActiveUniform", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(689);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	sp[0].o = (jobject)((func_arc_graphics_GL20_glGetActiveUniform_int_int_java_nio_IntBuffer_java_nio_IntBuffer_R_java_lang_String) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glGetActiveUniform_int_int_java_nio_IntBuffer_java_nio_IntBuffer_R_java_lang_String, sp[0].o))(ctx, sp[0].o, (frame[0].i), (frame[1].i), (frame[2].o), (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint SM_arc_graphics_Gl_getAttribLocation_int_java_lang_String_R_int(jcontext ctx, jint param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:getAttribLocation", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(693);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	jint temp0 = (jint)((func_arc_graphics_GL20_glGetAttribLocation_int_java_lang_String_R_int) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glGetAttribLocation_int_java_lang_String_R_int, sp[0].o))(ctx, sp[0].o, (frame[0].i), (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Gl_getBooleanv_int_java_nio_Buffer(jcontext ctx, jint param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:getBooleanv", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(697);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	((func_arc_graphics_GL20_glGetBooleanv_int_java_nio_Buffer) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glGetBooleanv_int_java_nio_Buffer, sp[0].o))(ctx, sp[0].o, (frame[0].i), (frame[1].o));
	LINE_NUMBER(698);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Gl_getBufferParameteriv_int_int_java_nio_IntBuffer(jcontext ctx, jint param0, jint param1, jobject param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:getBufferParameteriv", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(701);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	((func_arc_graphics_GL20_glGetBufferParameteriv_int_int_java_nio_IntBuffer) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glGetBufferParameteriv_int_int_java_nio_IntBuffer, sp[0].o))(ctx, sp[0].o, (frame[0].i), (frame[1].i), (frame[2].o));
	LINE_NUMBER(702);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Gl_getFloatv_int_java_nio_FloatBuffer(jcontext ctx, jint param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:getFloatv", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(705);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	((func_arc_graphics_GL20_glGetFloatv_int_java_nio_FloatBuffer) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glGetFloatv_int_java_nio_FloatBuffer, sp[0].o))(ctx, sp[0].o, (frame[0].i), (frame[1].o));
	LINE_NUMBER(706);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Gl_getFramebufferAttachmentParameteriv_int_int_int_java_nio_IntBuffer(jcontext ctx, jint param0, jint param1, jint param2, jobject param3) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:getFramebufferAttachmentParameteriv", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(709);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	((func_arc_graphics_GL20_glGetFramebufferAttachmentParameteriv_int_int_int_java_nio_IntBuffer) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glGetFramebufferAttachmentParameteriv_int_int_int_java_nio_IntBuffer, sp[0].o))(ctx, sp[0].o, (frame[0].i), (frame[1].i), (frame[2].i), (frame[3].o));
	LINE_NUMBER(710);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Gl_getProgramiv_int_int_java_nio_IntBuffer(jcontext ctx, jint param0, jint param1, jobject param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:getProgramiv", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(713);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	((func_arc_graphics_GL20_glGetProgramiv_int_int_java_nio_IntBuffer) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glGetProgramiv_int_int_java_nio_IntBuffer, sp[0].o))(ctx, sp[0].o, (frame[0].i), (frame[1].i), (frame[2].o));
	LINE_NUMBER(714);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_arc_graphics_Gl_getProgramInfoLog_int_R_java_lang_String(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:getProgramInfoLog", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(717);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	sp[0].o = (jobject)((func_arc_graphics_GL20_glGetProgramInfoLog_int_R_java_lang_String) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glGetProgramInfoLog_int_R_java_lang_String, sp[0].o))(ctx, sp[0].o, (frame[0].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Gl_getRenderbufferParameteriv_int_int_java_nio_IntBuffer(jcontext ctx, jint param0, jint param1, jobject param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:getRenderbufferParameteriv", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(721);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	((func_arc_graphics_GL20_glGetRenderbufferParameteriv_int_int_java_nio_IntBuffer) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glGetRenderbufferParameteriv_int_int_java_nio_IntBuffer, sp[0].o))(ctx, sp[0].o, (frame[0].i), (frame[1].i), (frame[2].o));
	LINE_NUMBER(722);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Gl_getShaderiv_int_int_java_nio_IntBuffer(jcontext ctx, jint param0, jint param1, jobject param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:getShaderiv", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(725);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	((func_arc_graphics_GL20_glGetShaderiv_int_int_java_nio_IntBuffer) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glGetShaderiv_int_int_java_nio_IntBuffer, sp[0].o))(ctx, sp[0].o, (frame[0].i), (frame[1].i), (frame[2].o));
	LINE_NUMBER(726);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_arc_graphics_Gl_getShaderInfoLog_int_R_java_lang_String(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:getShaderInfoLog", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(729);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	sp[0].o = (jobject)((func_arc_graphics_GL20_glGetShaderInfoLog_int_R_java_lang_String) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glGetShaderInfoLog_int_R_java_lang_String, sp[0].o))(ctx, sp[0].o, (frame[0].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Gl_getShaderPrecisionFormat_int_int_java_nio_IntBuffer_java_nio_IntBuffer(jcontext ctx, jint param0, jint param1, jobject param2, jobject param3) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:getShaderPrecisionFormat", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(733);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	((func_arc_graphics_GL20_glGetShaderPrecisionFormat_int_int_java_nio_IntBuffer_java_nio_IntBuffer) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glGetShaderPrecisionFormat_int_int_java_nio_IntBuffer_java_nio_IntBuffer, sp[0].o))(ctx, sp[0].o, (frame[0].i), (frame[1].i), (frame[2].o), (frame[3].o));
	LINE_NUMBER(734);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Gl_getTexParameterfv_int_int_java_nio_FloatBuffer(jcontext ctx, jint param0, jint param1, jobject param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:getTexParameterfv", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(737);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	((func_arc_graphics_GL20_glGetTexParameterfv_int_int_java_nio_FloatBuffer) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glGetTexParameterfv_int_int_java_nio_FloatBuffer, sp[0].o))(ctx, sp[0].o, (frame[0].i), (frame[1].i), (frame[2].o));
	LINE_NUMBER(738);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Gl_getTexParameteriv_int_int_java_nio_IntBuffer(jcontext ctx, jint param0, jint param1, jobject param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:getTexParameteriv", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(741);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	((func_arc_graphics_GL20_glGetTexParameteriv_int_int_java_nio_IntBuffer) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glGetTexParameteriv_int_int_java_nio_IntBuffer, sp[0].o))(ctx, sp[0].o, (frame[0].i), (frame[1].i), (frame[2].o));
	LINE_NUMBER(742);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Gl_getUniformfv_int_int_java_nio_FloatBuffer(jcontext ctx, jint param0, jint param1, jobject param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:getUniformfv", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(745);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	((func_arc_graphics_GL20_glGetUniformfv_int_int_java_nio_FloatBuffer) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glGetUniformfv_int_int_java_nio_FloatBuffer, sp[0].o))(ctx, sp[0].o, (frame[0].i), (frame[1].i), (frame[2].o));
	LINE_NUMBER(746);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Gl_getUniformiv_int_int_java_nio_IntBuffer(jcontext ctx, jint param0, jint param1, jobject param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:getUniformiv", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(749);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	((func_arc_graphics_GL20_glGetUniformiv_int_int_java_nio_IntBuffer) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glGetUniformiv_int_int_java_nio_IntBuffer, sp[0].o))(ctx, sp[0].o, (frame[0].i), (frame[1].i), (frame[2].o));
	LINE_NUMBER(750);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint SM_arc_graphics_Gl_getUniformLocation_int_java_lang_String_R_int(jcontext ctx, jint param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:getUniformLocation", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(753);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	jint temp0 = (jint)((func_arc_graphics_GL20_glGetUniformLocation_int_java_lang_String_R_int) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glGetUniformLocation_int_java_lang_String_R_int, sp[0].o))(ctx, sp[0].o, (frame[0].i), (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Gl_getVertexAttribfv_int_int_java_nio_FloatBuffer(jcontext ctx, jint param0, jint param1, jobject param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:getVertexAttribfv", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(757);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	((func_arc_graphics_GL20_glGetVertexAttribfv_int_int_java_nio_FloatBuffer) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glGetVertexAttribfv_int_int_java_nio_FloatBuffer, sp[0].o))(ctx, sp[0].o, (frame[0].i), (frame[1].i), (frame[2].o));
	LINE_NUMBER(758);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Gl_getVertexAttribiv_int_int_java_nio_IntBuffer(jcontext ctx, jint param0, jint param1, jobject param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:getVertexAttribiv", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(761);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	((func_arc_graphics_GL20_glGetVertexAttribiv_int_int_java_nio_IntBuffer) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glGetVertexAttribiv_int_int_java_nio_IntBuffer, sp[0].o))(ctx, sp[0].o, (frame[0].i), (frame[1].i), (frame[2].o));
	LINE_NUMBER(762);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_arc_graphics_Gl_isBuffer_int_R_boolean(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:isBuffer", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(765);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	jint temp0 = (jint)((func_arc_graphics_GL20_glIsBuffer_int_R_boolean) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glIsBuffer_int_R_boolean, sp[0].o))(ctx, sp[0].o, (frame[0].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_arc_graphics_Gl_isEnabled_int_R_boolean(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:isEnabled", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(769);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	jint temp0 = (jint)((func_arc_graphics_GL20_glIsEnabled_int_R_boolean) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glIsEnabled_int_R_boolean, sp[0].o))(ctx, sp[0].o, (frame[0].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_arc_graphics_Gl_isFramebuffer_int_R_boolean(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:isFramebuffer", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(773);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	jint temp0 = (jint)((func_arc_graphics_GL20_glIsFramebuffer_int_R_boolean) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glIsFramebuffer_int_R_boolean, sp[0].o))(ctx, sp[0].o, (frame[0].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_arc_graphics_Gl_isProgram_int_R_boolean(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:isProgram", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(777);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	jint temp0 = (jint)((func_arc_graphics_GL20_glIsProgram_int_R_boolean) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glIsProgram_int_R_boolean, sp[0].o))(ctx, sp[0].o, (frame[0].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_arc_graphics_Gl_isRenderbuffer_int_R_boolean(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:isRenderbuffer", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(781);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	jint temp0 = (jint)((func_arc_graphics_GL20_glIsRenderbuffer_int_R_boolean) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glIsRenderbuffer_int_R_boolean, sp[0].o))(ctx, sp[0].o, (frame[0].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_arc_graphics_Gl_isShader_int_R_boolean(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:isShader", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(785);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	jint temp0 = (jint)((func_arc_graphics_GL20_glIsShader_int_R_boolean) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glIsShader_int_R_boolean, sp[0].o))(ctx, sp[0].o, (frame[0].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_arc_graphics_Gl_isTexture_int_R_boolean(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:isTexture", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(789);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	jint temp0 = (jint)((func_arc_graphics_GL20_glIsTexture_int_R_boolean) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glIsTexture_int_R_boolean, sp[0].o))(ctx, sp[0].o, (frame[0].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Gl_linkProgram_int(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:linkProgram", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(793);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	((func_arc_graphics_GL20_glLinkProgram_int) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glLinkProgram_int, sp[0].o))(ctx, sp[0].o, (frame[0].i));
	LINE_NUMBER(794);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Gl_releaseShaderCompiler(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:releaseShaderCompiler", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	{
	LINE_NUMBER(797);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	((func_arc_graphics_GL20_glReleaseShaderCompiler) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glReleaseShaderCompiler, sp[0].o))(ctx, sp[0].o);
	LINE_NUMBER(798);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Gl_renderbufferStorage_int_int_int_int(jcontext ctx, jint param0, jint param1, jint param2, jint param3) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:renderbufferStorage", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(801);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	((func_arc_graphics_GL20_glRenderbufferStorage_int_int_int_int) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glRenderbufferStorage_int_int_int_int, sp[0].o))(ctx, sp[0].o, (frame[0].i), (frame[1].i), (frame[2].i), (frame[3].i));
	LINE_NUMBER(802);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Gl_sampleCoverage_float_boolean(jcontext ctx, jfloat param0, jbool param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:sampleCoverage", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].f = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(805);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	((func_arc_graphics_GL20_glSampleCoverage_float_boolean) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glSampleCoverage_float_boolean, sp[0].o))(ctx, sp[0].o, (frame[0].f), (frame[1].i));
	LINE_NUMBER(806);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Gl_shaderSource_int_java_lang_String(jcontext ctx, jint param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:shaderSource", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(809);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	((func_arc_graphics_GL20_glShaderSource_int_java_lang_String) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glShaderSource_int_java_lang_String, sp[0].o))(ctx, sp[0].o, (frame[0].i), (frame[1].o));
	LINE_NUMBER(810);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Gl_stencilFuncSeparate_int_int_int_int(jcontext ctx, jint param0, jint param1, jint param2, jint param3) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:stencilFuncSeparate", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(813);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	((func_arc_graphics_GL20_glStencilFuncSeparate_int_int_int_int) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glStencilFuncSeparate_int_int_int_int, sp[0].o))(ctx, sp[0].o, (frame[0].i), (frame[1].i), (frame[2].i), (frame[3].i));
	LINE_NUMBER(814);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Gl_stencilMaskSeparate_int_int(jcontext ctx, jint param0, jint param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:stencilMaskSeparate", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(817);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	((func_arc_graphics_GL20_glStencilMaskSeparate_int_int) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glStencilMaskSeparate_int_int, sp[0].o))(ctx, sp[0].o, (frame[0].i), (frame[1].i));
	LINE_NUMBER(818);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Gl_stencilOpSeparate_int_int_int_int(jcontext ctx, jint param0, jint param1, jint param2, jint param3) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:stencilOpSeparate", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(821);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	((func_arc_graphics_GL20_glStencilOpSeparate_int_int_int_int) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glStencilOpSeparate_int_int_int_int, sp[0].o))(ctx, sp[0].o, (frame[0].i), (frame[1].i), (frame[2].i), (frame[3].i));
	LINE_NUMBER(822);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Gl_texParameterfv_int_int_java_nio_FloatBuffer(jcontext ctx, jint param0, jint param1, jobject param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:texParameterfv", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(825);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	((func_arc_graphics_GL20_glTexParameterfv_int_int_java_nio_FloatBuffer) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glTexParameterfv_int_int_java_nio_FloatBuffer, sp[0].o))(ctx, sp[0].o, (frame[0].i), (frame[1].i), (frame[2].o));
	LINE_NUMBER(826);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Gl_texParameteri_int_int_int(jcontext ctx, jint param0, jint param1, jint param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:texParameteri", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(829);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	((func_arc_graphics_GL20_glTexParameteri_int_int_int) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glTexParameteri_int_int_int, sp[0].o))(ctx, sp[0].o, (frame[0].i), (frame[1].i), (frame[2].i));
	LINE_NUMBER(830);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Gl_texParameteriv_int_int_java_nio_IntBuffer(jcontext ctx, jint param0, jint param1, jobject param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:texParameteriv", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(833);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	((func_arc_graphics_GL20_glTexParameteriv_int_int_java_nio_IntBuffer) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glTexParameteriv_int_int_java_nio_IntBuffer, sp[0].o))(ctx, sp[0].o, (frame[0].i), (frame[1].i), (frame[2].o));
	LINE_NUMBER(834);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Gl_uniform1f_int_float(jcontext ctx, jint param0, jfloat param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:uniform1f", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(837);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	((func_arc_graphics_GL20_glUniform1f_int_float) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glUniform1f_int_float, sp[0].o))(ctx, sp[0].o, (frame[0].i), (frame[1].f));
	LINE_NUMBER(838);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Gl_uniform1fv_int_int_java_nio_FloatBuffer(jcontext ctx, jint param0, jint param1, jobject param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:uniform1fv", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(841);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	((func_arc_graphics_GL20_glUniform1fv_int_int_java_nio_FloatBuffer) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glUniform1fv_int_int_java_nio_FloatBuffer, sp[0].o))(ctx, sp[0].o, (frame[0].i), (frame[1].i), (frame[2].o));
	LINE_NUMBER(842);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Gl_uniform1fv_int_int_Array1_float_int(jcontext ctx, jint param0, jint param1, jobject param2, jint param3) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:uniform1fv", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(845);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	((func_arc_graphics_GL20_glUniform1fv_int_int_Array1_float_int) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glUniform1fv_int_int_Array1_float_int, sp[0].o))(ctx, sp[0].o, (frame[0].i), (frame[1].i), (frame[2].o), (frame[3].i));
	LINE_NUMBER(846);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Gl_uniform1i_int_int(jcontext ctx, jint param0, jint param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:uniform1i", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(849);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	((func_arc_graphics_GL20_glUniform1i_int_int) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glUniform1i_int_int, sp[0].o))(ctx, sp[0].o, (frame[0].i), (frame[1].i));
	LINE_NUMBER(850);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Gl_uniform1iv_int_int_java_nio_IntBuffer(jcontext ctx, jint param0, jint param1, jobject param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:uniform1iv", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(853);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	((func_arc_graphics_GL20_glUniform1iv_int_int_java_nio_IntBuffer) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glUniform1iv_int_int_java_nio_IntBuffer, sp[0].o))(ctx, sp[0].o, (frame[0].i), (frame[1].i), (frame[2].o));
	LINE_NUMBER(854);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Gl_uniform1iv_int_int_Array1_int_int(jcontext ctx, jint param0, jint param1, jobject param2, jint param3) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:uniform1iv", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(857);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	((func_arc_graphics_GL20_glUniform1iv_int_int_Array1_int_int) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glUniform1iv_int_int_Array1_int_int, sp[0].o))(ctx, sp[0].o, (frame[0].i), (frame[1].i), (frame[2].o), (frame[3].i));
	LINE_NUMBER(858);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Gl_uniform2f_int_float_float(jcontext ctx, jint param0, jfloat param1, jfloat param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:uniform2f", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	{
	LINE_NUMBER(861);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	((func_arc_graphics_GL20_glUniform2f_int_float_float) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glUniform2f_int_float_float, sp[0].o))(ctx, sp[0].o, (frame[0].i), (frame[1].f), (frame[2].f));
	LINE_NUMBER(862);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Gl_uniform2fv_int_int_java_nio_FloatBuffer(jcontext ctx, jint param0, jint param1, jobject param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:uniform2fv", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(865);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	((func_arc_graphics_GL20_glUniform2fv_int_int_java_nio_FloatBuffer) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glUniform2fv_int_int_java_nio_FloatBuffer, sp[0].o))(ctx, sp[0].o, (frame[0].i), (frame[1].i), (frame[2].o));
	LINE_NUMBER(866);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Gl_uniform2fv_int_int_Array1_float_int(jcontext ctx, jint param0, jint param1, jobject param2, jint param3) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:uniform2fv", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(869);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	((func_arc_graphics_GL20_glUniform2fv_int_int_Array1_float_int) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glUniform2fv_int_int_Array1_float_int, sp[0].o))(ctx, sp[0].o, (frame[0].i), (frame[1].i), (frame[2].o), (frame[3].i));
	LINE_NUMBER(870);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Gl_uniform2i_int_int_int(jcontext ctx, jint param0, jint param1, jint param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:uniform2i", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(873);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	((func_arc_graphics_GL20_glUniform2i_int_int_int) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glUniform2i_int_int_int, sp[0].o))(ctx, sp[0].o, (frame[0].i), (frame[1].i), (frame[2].i));
	LINE_NUMBER(874);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Gl_uniform2iv_int_int_java_nio_IntBuffer(jcontext ctx, jint param0, jint param1, jobject param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:uniform2iv", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(877);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	((func_arc_graphics_GL20_glUniform2iv_int_int_java_nio_IntBuffer) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glUniform2iv_int_int_java_nio_IntBuffer, sp[0].o))(ctx, sp[0].o, (frame[0].i), (frame[1].i), (frame[2].o));
	LINE_NUMBER(878);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Gl_uniform2iv_int_int_Array1_int_int(jcontext ctx, jint param0, jint param1, jobject param2, jint param3) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:uniform2iv", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(881);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	((func_arc_graphics_GL20_glUniform2iv_int_int_Array1_int_int) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glUniform2iv_int_int_Array1_int_int, sp[0].o))(ctx, sp[0].o, (frame[0].i), (frame[1].i), (frame[2].o), (frame[3].i));
	LINE_NUMBER(882);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Gl_uniform3f_int_float_float_float(jcontext ctx, jint param0, jfloat param1, jfloat param2, jfloat param3) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:uniform3f", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	{
	LINE_NUMBER(885);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	((func_arc_graphics_GL20_glUniform3f_int_float_float_float) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glUniform3f_int_float_float_float, sp[0].o))(ctx, sp[0].o, (frame[0].i), (frame[1].f), (frame[2].f), (frame[3].f));
	LINE_NUMBER(886);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Gl_uniform3fv_int_int_java_nio_FloatBuffer(jcontext ctx, jint param0, jint param1, jobject param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:uniform3fv", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(889);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	((func_arc_graphics_GL20_glUniform3fv_int_int_java_nio_FloatBuffer) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glUniform3fv_int_int_java_nio_FloatBuffer, sp[0].o))(ctx, sp[0].o, (frame[0].i), (frame[1].i), (frame[2].o));
	LINE_NUMBER(890);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Gl_uniform3fv_int_int_Array1_float_int(jcontext ctx, jint param0, jint param1, jobject param2, jint param3) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:uniform3fv", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(893);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	((func_arc_graphics_GL20_glUniform3fv_int_int_Array1_float_int) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glUniform3fv_int_int_Array1_float_int, sp[0].o))(ctx, sp[0].o, (frame[0].i), (frame[1].i), (frame[2].o), (frame[3].i));
	LINE_NUMBER(894);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Gl_uniform3i_int_int_int_int(jcontext ctx, jint param0, jint param1, jint param2, jint param3) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:uniform3i", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(897);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	((func_arc_graphics_GL20_glUniform3i_int_int_int_int) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glUniform3i_int_int_int_int, sp[0].o))(ctx, sp[0].o, (frame[0].i), (frame[1].i), (frame[2].i), (frame[3].i));
	LINE_NUMBER(898);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Gl_uniform3iv_int_int_java_nio_IntBuffer(jcontext ctx, jint param0, jint param1, jobject param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:uniform3iv", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(901);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	((func_arc_graphics_GL20_glUniform3iv_int_int_java_nio_IntBuffer) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glUniform3iv_int_int_java_nio_IntBuffer, sp[0].o))(ctx, sp[0].o, (frame[0].i), (frame[1].i), (frame[2].o));
	LINE_NUMBER(902);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Gl_uniform3iv_int_int_Array1_int_int(jcontext ctx, jint param0, jint param1, jobject param2, jint param3) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:uniform3iv", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(905);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	((func_arc_graphics_GL20_glUniform3iv_int_int_Array1_int_int) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glUniform3iv_int_int_Array1_int_int, sp[0].o))(ctx, sp[0].o, (frame[0].i), (frame[1].i), (frame[2].o), (frame[3].i));
	LINE_NUMBER(906);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Gl_uniform4f_int_float_float_float_float(jcontext ctx, jint param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4) {
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:uniform4f", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	{
	LINE_NUMBER(909);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	((func_arc_graphics_GL20_glUniform4f_int_float_float_float_float) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glUniform4f_int_float_float_float_float, sp[0].o))(ctx, sp[0].o, (frame[0].i), (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f));
	LINE_NUMBER(910);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Gl_uniform4fv_int_int_java_nio_FloatBuffer(jcontext ctx, jint param0, jint param1, jobject param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:uniform4fv", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(913);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	((func_arc_graphics_GL20_glUniform4fv_int_int_java_nio_FloatBuffer) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glUniform4fv_int_int_java_nio_FloatBuffer, sp[0].o))(ctx, sp[0].o, (frame[0].i), (frame[1].i), (frame[2].o));
	LINE_NUMBER(914);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Gl_uniform4fv_int_int_Array1_float_int(jcontext ctx, jint param0, jint param1, jobject param2, jint param3) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:uniform4fv", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(917);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	((func_arc_graphics_GL20_glUniform4fv_int_int_Array1_float_int) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glUniform4fv_int_int_Array1_float_int, sp[0].o))(ctx, sp[0].o, (frame[0].i), (frame[1].i), (frame[2].o), (frame[3].i));
	LINE_NUMBER(918);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Gl_uniform4i_int_int_int_int_int(jcontext ctx, jint param0, jint param1, jint param2, jint param3, jint param4) {
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:uniform4i", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	{
	LINE_NUMBER(921);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	((func_arc_graphics_GL20_glUniform4i_int_int_int_int_int) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glUniform4i_int_int_int_int_int, sp[0].o))(ctx, sp[0].o, (frame[0].i), (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].i));
	LINE_NUMBER(922);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Gl_uniform4iv_int_int_java_nio_IntBuffer(jcontext ctx, jint param0, jint param1, jobject param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:uniform4iv", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(925);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	((func_arc_graphics_GL20_glUniform4iv_int_int_java_nio_IntBuffer) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glUniform4iv_int_int_java_nio_IntBuffer, sp[0].o))(ctx, sp[0].o, (frame[0].i), (frame[1].i), (frame[2].o));
	LINE_NUMBER(926);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Gl_uniform4iv_int_int_Array1_int_int(jcontext ctx, jint param0, jint param1, jobject param2, jint param3) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:uniform4iv", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(929);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	((func_arc_graphics_GL20_glUniform4iv_int_int_Array1_int_int) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glUniform4iv_int_int_Array1_int_int, sp[0].o))(ctx, sp[0].o, (frame[0].i), (frame[1].i), (frame[2].o), (frame[3].i));
	LINE_NUMBER(930);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Gl_uniformMatrix2fv_int_int_boolean_java_nio_FloatBuffer(jcontext ctx, jint param0, jint param1, jbool param2, jobject param3) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:uniformMatrix2fv", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(933);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	((func_arc_graphics_GL20_glUniformMatrix2fv_int_int_boolean_java_nio_FloatBuffer) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glUniformMatrix2fv_int_int_boolean_java_nio_FloatBuffer, sp[0].o))(ctx, sp[0].o, (frame[0].i), (frame[1].i), (frame[2].i), (frame[3].o));
	LINE_NUMBER(934);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Gl_uniformMatrix2fv_int_int_boolean_Array1_float_int(jcontext ctx, jint param0, jint param1, jbool param2, jobject param3, jint param4) {
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:uniformMatrix2fv", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].o = param3;
	frame[4].i = param4;
	{
	LINE_NUMBER(937);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	((func_arc_graphics_GL20_glUniformMatrix2fv_int_int_boolean_Array1_float_int) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glUniformMatrix2fv_int_int_boolean_Array1_float_int, sp[0].o))(ctx, sp[0].o, (frame[0].i), (frame[1].i), (frame[2].i), (frame[3].o), (frame[4].i));
	LINE_NUMBER(938);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Gl_uniformMatrix3fv_int_int_boolean_java_nio_FloatBuffer(jcontext ctx, jint param0, jint param1, jbool param2, jobject param3) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:uniformMatrix3fv", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(941);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	((func_arc_graphics_GL20_glUniformMatrix3fv_int_int_boolean_java_nio_FloatBuffer) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glUniformMatrix3fv_int_int_boolean_java_nio_FloatBuffer, sp[0].o))(ctx, sp[0].o, (frame[0].i), (frame[1].i), (frame[2].i), (frame[3].o));
	LINE_NUMBER(942);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Gl_uniformMatrix3fv_int_int_boolean_Array1_float_int(jcontext ctx, jint param0, jint param1, jbool param2, jobject param3, jint param4) {
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:uniformMatrix3fv", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].o = param3;
	frame[4].i = param4;
	{
	LINE_NUMBER(945);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	((func_arc_graphics_GL20_glUniformMatrix3fv_int_int_boolean_Array1_float_int) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glUniformMatrix3fv_int_int_boolean_Array1_float_int, sp[0].o))(ctx, sp[0].o, (frame[0].i), (frame[1].i), (frame[2].i), (frame[3].o), (frame[4].i));
	LINE_NUMBER(946);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Gl_uniformMatrix4fv_int_int_boolean_java_nio_FloatBuffer(jcontext ctx, jint param0, jint param1, jbool param2, jobject param3) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:uniformMatrix4fv", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(949);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	((func_arc_graphics_GL20_glUniformMatrix4fv_int_int_boolean_java_nio_FloatBuffer) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glUniformMatrix4fv_int_int_boolean_java_nio_FloatBuffer, sp[0].o))(ctx, sp[0].o, (frame[0].i), (frame[1].i), (frame[2].i), (frame[3].o));
	LINE_NUMBER(950);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Gl_uniformMatrix4fv_int_int_boolean_Array1_float_int(jcontext ctx, jint param0, jint param1, jbool param2, jobject param3, jint param4) {
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:uniformMatrix4fv", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].o = param3;
	frame[4].i = param4;
	{
	LINE_NUMBER(953);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	((func_arc_graphics_GL20_glUniformMatrix4fv_int_int_boolean_Array1_float_int) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glUniformMatrix4fv_int_int_boolean_Array1_float_int, sp[0].o))(ctx, sp[0].o, (frame[0].i), (frame[1].i), (frame[2].i), (frame[3].o), (frame[4].i));
	LINE_NUMBER(954);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Gl_useProgram_int(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:useProgram", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(957);
	if ((clinit_arc_graphics_Gl(ctx), (jint)SF_arc_graphics_Gl_lastUsedProgram) != (frame[0].i)) goto label_1;
	}
	LINE_NUMBER(958);
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(960);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	((func_arc_graphics_GL20_glUseProgram_int) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glUseProgram_int, sp[0].o))(ctx, sp[0].o, (frame[0].i));
	LINE_NUMBER(961);
	clinit_arc_graphics_Gl(ctx);
	SF_arc_graphics_Gl_lastUsedProgram = (frame[0].i);
	LINE_NUMBER(962);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Gl_validateProgram_int(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:validateProgram", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(965);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	((func_arc_graphics_GL20_glValidateProgram_int) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glValidateProgram_int, sp[0].o))(ctx, sp[0].o, (frame[0].i));
	LINE_NUMBER(966);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Gl_vertexAttrib1f_int_float(jcontext ctx, jint param0, jfloat param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:vertexAttrib1f", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(969);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	((func_arc_graphics_GL20_glVertexAttrib1f_int_float) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glVertexAttrib1f_int_float, sp[0].o))(ctx, sp[0].o, (frame[0].i), (frame[1].f));
	LINE_NUMBER(970);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Gl_vertexAttrib1fv_int_java_nio_FloatBuffer(jcontext ctx, jint param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:vertexAttrib1fv", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(973);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	((func_arc_graphics_GL20_glVertexAttrib1fv_int_java_nio_FloatBuffer) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glVertexAttrib1fv_int_java_nio_FloatBuffer, sp[0].o))(ctx, sp[0].o, (frame[0].i), (frame[1].o));
	LINE_NUMBER(974);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Gl_vertexAttrib2f_int_float_float(jcontext ctx, jint param0, jfloat param1, jfloat param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:vertexAttrib2f", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	{
	LINE_NUMBER(977);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	((func_arc_graphics_GL20_glVertexAttrib2f_int_float_float) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glVertexAttrib2f_int_float_float, sp[0].o))(ctx, sp[0].o, (frame[0].i), (frame[1].f), (frame[2].f));
	LINE_NUMBER(978);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Gl_vertexAttrib2fv_int_java_nio_FloatBuffer(jcontext ctx, jint param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:vertexAttrib2fv", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(981);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	((func_arc_graphics_GL20_glVertexAttrib2fv_int_java_nio_FloatBuffer) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glVertexAttrib2fv_int_java_nio_FloatBuffer, sp[0].o))(ctx, sp[0].o, (frame[0].i), (frame[1].o));
	LINE_NUMBER(982);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Gl_vertexAttrib3f_int_float_float_float(jcontext ctx, jint param0, jfloat param1, jfloat param2, jfloat param3) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:vertexAttrib3f", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	{
	LINE_NUMBER(985);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	((func_arc_graphics_GL20_glVertexAttrib3f_int_float_float_float) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glVertexAttrib3f_int_float_float_float, sp[0].o))(ctx, sp[0].o, (frame[0].i), (frame[1].f), (frame[2].f), (frame[3].f));
	LINE_NUMBER(986);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Gl_vertexAttrib3fv_int_java_nio_FloatBuffer(jcontext ctx, jint param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:vertexAttrib3fv", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(989);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	((func_arc_graphics_GL20_glVertexAttrib3fv_int_java_nio_FloatBuffer) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glVertexAttrib3fv_int_java_nio_FloatBuffer, sp[0].o))(ctx, sp[0].o, (frame[0].i), (frame[1].o));
	LINE_NUMBER(990);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Gl_vertexAttrib4f_int_float_float_float_float(jcontext ctx, jint param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4) {
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:vertexAttrib4f", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	{
	LINE_NUMBER(993);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	((func_arc_graphics_GL20_glVertexAttrib4f_int_float_float_float_float) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glVertexAttrib4f_int_float_float_float_float, sp[0].o))(ctx, sp[0].o, (frame[0].i), (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f));
	LINE_NUMBER(994);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Gl_vertexAttrib4fv_int_java_nio_FloatBuffer(jcontext ctx, jint param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:vertexAttrib4fv", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(997);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	((func_arc_graphics_GL20_glVertexAttrib4fv_int_java_nio_FloatBuffer) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glVertexAttrib4fv_int_java_nio_FloatBuffer, sp[0].o))(ctx, sp[0].o, (frame[0].i), (frame[1].o));
	LINE_NUMBER(998);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Gl_vertexAttribPointer_int_int_int_boolean_int_java_nio_Buffer(jcontext ctx, jint param0, jint param1, jint param2, jbool param3, jint param4, jobject param5) {
	jtype frame[13];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:vertexAttribPointer", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	frame[5].o = param5;
	{
	LINE_NUMBER(1001);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	((func_arc_graphics_GL20_glVertexAttribPointer_int_int_int_boolean_int_java_nio_Buffer) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glVertexAttribPointer_int_int_int_boolean_int_java_nio_Buffer, sp[0].o))(ctx, sp[0].o, (frame[0].i), (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].i), (frame[5].o));
	LINE_NUMBER(1002);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Gl_vertexAttribPointer_int_int_int_boolean_int_int(jcontext ctx, jint param0, jint param1, jint param2, jbool param3, jint param4, jint param5) {
	jtype frame[13];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:vertexAttribPointer", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	frame[5].i = param5;
	{
	LINE_NUMBER(1005);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl;
	((func_arc_graphics_GL20_glVertexAttribPointer_int_int_int_boolean_int_int) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glVertexAttribPointer_int_int_int_boolean_int_int, sp[0].o))(ctx, sp[0].o, (frame[0].i), (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].i), (frame[5].i));
	LINE_NUMBER(1006);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_arc_graphics_Gl(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_arc_graphics_Gl_optimize = jint(1);
	SF_arc_graphics_Gl_esVersion20 = jint(1);
	SF_arc_graphics_Gl_depthBufferBit = jint(256);
	SF_arc_graphics_Gl_stencilBufferBit = jint(1024);
	SF_arc_graphics_Gl_colorBufferBit = jint(16384);
	SF_arc_graphics_Gl_falseV = jint(0);
	SF_arc_graphics_Gl_trueV = jint(1);
	SF_arc_graphics_Gl_points = jint(0);
	SF_arc_graphics_Gl_lines = jint(1);
	SF_arc_graphics_Gl_lineLoop = jint(2);
	SF_arc_graphics_Gl_lineStrip = jint(3);
	SF_arc_graphics_Gl_triangles = jint(4);
	SF_arc_graphics_Gl_triangleStrip = jint(5);
	SF_arc_graphics_Gl_triangleFan = jint(6);
	SF_arc_graphics_Gl_zero = jint(0);
	SF_arc_graphics_Gl_one = jint(1);
	SF_arc_graphics_Gl_srcColor = jint(768);
	SF_arc_graphics_Gl_oneMinusSrcColor = jint(769);
	SF_arc_graphics_Gl_srcAlpha = jint(770);
	SF_arc_graphics_Gl_oneMinusSrcAlpha = jint(771);
	SF_arc_graphics_Gl_dstAlpha = jint(772);
	SF_arc_graphics_Gl_oneMinusDstAlpha = jint(773);
	SF_arc_graphics_Gl_dstColor = jint(774);
	SF_arc_graphics_Gl_oneMinusDstColor = jint(775);
	SF_arc_graphics_Gl_srcAlphaSaturate = jint(776);
	SF_arc_graphics_Gl_funcAdd = jint(32774);
	SF_arc_graphics_Gl_blendEquation = jint(32777);
	SF_arc_graphics_Gl_blendEquationRgb = jint(32777);
	SF_arc_graphics_Gl_blendEquationAlpha = jint(34877);
	SF_arc_graphics_Gl_funcSubtract = jint(32778);
	SF_arc_graphics_Gl_funcReverseSubtract = jint(32779);
	SF_arc_graphics_Gl_min = jint(32775);
	SF_arc_graphics_Gl_max = jint(32776);
	SF_arc_graphics_Gl_blendDstRgb = jint(32968);
	SF_arc_graphics_Gl_blendSrcRgb = jint(32969);
	SF_arc_graphics_Gl_blendDstAlpha = jint(32970);
	SF_arc_graphics_Gl_blendSrcAlpha = jint(32971);
	SF_arc_graphics_Gl_constantColor = jint(32769);
	SF_arc_graphics_Gl_oneMinusConstantColor = jint(32770);
	SF_arc_graphics_Gl_constantAlpha = jint(32771);
	SF_arc_graphics_Gl_oneMinusConstantAlpha = jint(32772);
	SF_arc_graphics_Gl_blendColor = jint(32773);
	SF_arc_graphics_Gl_arrayBuffer = jint(34962);
	SF_arc_graphics_Gl_elementArrayBuffer = jint(34963);
	SF_arc_graphics_Gl_arrayBufferBinding = jint(34964);
	SF_arc_graphics_Gl_elementArrayBufferBinding = jint(34965);
	SF_arc_graphics_Gl_streamDraw = jint(35040);
	SF_arc_graphics_Gl_staticDraw = jint(35044);
	SF_arc_graphics_Gl_dynamicDraw = jint(35048);
	SF_arc_graphics_Gl_bufferSize = jint(34660);
	SF_arc_graphics_Gl_bufferUsage = jint(34661);
	SF_arc_graphics_Gl_currentVertexAttrib = jint(34342);
	SF_arc_graphics_Gl_front = jint(1028);
	SF_arc_graphics_Gl_back = jint(1029);
	SF_arc_graphics_Gl_frontAndBack = jint(1032);
	SF_arc_graphics_Gl_texture2d = jint(3553);
	SF_arc_graphics_Gl_cullFace = jint(2884);
	SF_arc_graphics_Gl_blend = jint(3042);
	SF_arc_graphics_Gl_dither = jint(3024);
	SF_arc_graphics_Gl_stencilTest = jint(2960);
	SF_arc_graphics_Gl_depthTest = jint(2929);
	SF_arc_graphics_Gl_scissorTest = jint(3089);
	SF_arc_graphics_Gl_polygonOffsetFill = jint(32823);
	SF_arc_graphics_Gl_sampleAlphaToCoverage = jint(32926);
	SF_arc_graphics_Gl_sampleCoverage = jint(32928);
	SF_arc_graphics_Gl_noError = jint(0);
	SF_arc_graphics_Gl_invalidEnum = jint(1280);
	SF_arc_graphics_Gl_invalidValue = jint(1281);
	SF_arc_graphics_Gl_invalidOperation = jint(1282);
	SF_arc_graphics_Gl_outOfMemory = jint(1285);
	SF_arc_graphics_Gl_cw = jint(2304);
	SF_arc_graphics_Gl_ccw = jint(2305);
	SF_arc_graphics_Gl_lineWidth = jint(2849);
	SF_arc_graphics_Gl_aliasedPointSizeRange = jint(33901);
	SF_arc_graphics_Gl_aliasedLineWidthRange = jint(33902);
	SF_arc_graphics_Gl_cullFaceMode = jint(2885);
	SF_arc_graphics_Gl_frontFace = jint(2886);
	SF_arc_graphics_Gl_depthRange = jint(2928);
	SF_arc_graphics_Gl_depthWritemask = jint(2930);
	SF_arc_graphics_Gl_depthClearValue = jint(2931);
	SF_arc_graphics_Gl_depthFunc = jint(2932);
	SF_arc_graphics_Gl_stencilClearValue = jint(2961);
	SF_arc_graphics_Gl_stencilFunc = jint(2962);
	SF_arc_graphics_Gl_stencilFail = jint(2964);
	SF_arc_graphics_Gl_stencilPassDepthFail = jint(2965);
	SF_arc_graphics_Gl_stencilPassDepthPass = jint(2966);
	SF_arc_graphics_Gl_stencilRef = jint(2967);
	SF_arc_graphics_Gl_stencilValueMask = jint(2963);
	SF_arc_graphics_Gl_stencilWritemask = jint(2968);
	SF_arc_graphics_Gl_stencilBackFunc = jint(34816);
	SF_arc_graphics_Gl_stencilBackFail = jint(34817);
	SF_arc_graphics_Gl_stencilBackPassDepthFail = jint(34818);
	SF_arc_graphics_Gl_stencilBackPassDepthPass = jint(34819);
	SF_arc_graphics_Gl_stencilBackRef = jint(36003);
	SF_arc_graphics_Gl_stencilBackValueMask = jint(36004);
	SF_arc_graphics_Gl_stencilBackWritemask = jint(36005);
	SF_arc_graphics_Gl_viewport = jint(2978);
	SF_arc_graphics_Gl_scissorBox = jint(3088);
	SF_arc_graphics_Gl_colorClearValue = jint(3106);
	SF_arc_graphics_Gl_colorWritemask = jint(3107);
	SF_arc_graphics_Gl_unpackAlignment = jint(3317);
	SF_arc_graphics_Gl_packAlignment = jint(3333);
	SF_arc_graphics_Gl_maxTextureSize = jint(3379);
	SF_arc_graphics_Gl_maxTextureUnits = jint(34018);
	SF_arc_graphics_Gl_maxViewportDims = jint(3386);
	SF_arc_graphics_Gl_subpixelBits = jint(3408);
	SF_arc_graphics_Gl_redBits = jint(3410);
	SF_arc_graphics_Gl_greenBits = jint(3411);
	SF_arc_graphics_Gl_blueBits = jint(3412);
	SF_arc_graphics_Gl_alphaBits = jint(3413);
	SF_arc_graphics_Gl_depthBits = jint(3414);
	SF_arc_graphics_Gl_stencilBits = jint(3415);
	SF_arc_graphics_Gl_polygonOffsetUnits = jint(10752);
	SF_arc_graphics_Gl_polygonOffsetFactor = jint(32824);
	SF_arc_graphics_Gl_textureBinding2d = jint(32873);
	SF_arc_graphics_Gl_sampleBuffers = jint(32936);
	SF_arc_graphics_Gl_samples = jint(32937);
	SF_arc_graphics_Gl_sampleCoverageValue = jint(32938);
	SF_arc_graphics_Gl_sampleCoverageInvert = jint(32939);
	SF_arc_graphics_Gl_numCompressedTextureFormats = jint(34466);
	SF_arc_graphics_Gl_compressedTextureFormats = jint(34467);
	SF_arc_graphics_Gl_dontCare = jint(4352);
	SF_arc_graphics_Gl_fastest = jint(4353);
	SF_arc_graphics_Gl_nicest = jint(4354);
	SF_arc_graphics_Gl_generateMipmap = jint(33169);
	SF_arc_graphics_Gl_generateMipmapHint = jint(33170);
	SF_arc_graphics_Gl_byteV = jint(5120);
	SF_arc_graphics_Gl_unsignedByte = jint(5121);
	SF_arc_graphics_Gl_shortV = jint(5122);
	SF_arc_graphics_Gl_unsignedShort = jint(5123);
	SF_arc_graphics_Gl_intV = jint(5124);
	SF_arc_graphics_Gl_unsignedInt = jint(5125);
	SF_arc_graphics_Gl_floatV = jint(5126);
	SF_arc_graphics_Gl_fixed = jint(5132);
	SF_arc_graphics_Gl_depthComponent = jint(6402);
	SF_arc_graphics_Gl_alpha = jint(6406);
	SF_arc_graphics_Gl_rgb = jint(6407);
	SF_arc_graphics_Gl_rgba = jint(6408);
	SF_arc_graphics_Gl_luminance = jint(6409);
	SF_arc_graphics_Gl_luminanceAlpha = jint(6410);
	SF_arc_graphics_Gl_unsignedShort4444 = jint(32819);
	SF_arc_graphics_Gl_unsignedShort5551 = jint(32820);
	SF_arc_graphics_Gl_unsignedShort565 = jint(33635);
	SF_arc_graphics_Gl_fragmentShader = jint(35632);
	SF_arc_graphics_Gl_vertexShader = jint(35633);
	SF_arc_graphics_Gl_maxVertexAttribs = jint(34921);
	SF_arc_graphics_Gl_maxVertexUniformVectors = jint(36347);
	SF_arc_graphics_Gl_maxVaryingVectors = jint(36348);
	SF_arc_graphics_Gl_maxCombinedTextureImageUnits = jint(35661);
	SF_arc_graphics_Gl_maxVertexTextureImageUnits = jint(35660);
	SF_arc_graphics_Gl_maxTextureImageUnits = jint(34930);
	SF_arc_graphics_Gl_maxFragmentUniformVectors = jint(36349);
	SF_arc_graphics_Gl_shaderType = jint(35663);
	SF_arc_graphics_Gl_deleteStatus = jint(35712);
	SF_arc_graphics_Gl_linkStatus = jint(35714);
	SF_arc_graphics_Gl_validateStatus = jint(35715);
	SF_arc_graphics_Gl_attachedShaders = jint(35717);
	SF_arc_graphics_Gl_activeUniforms = jint(35718);
	SF_arc_graphics_Gl_activeUniformMaxLength = jint(35719);
	SF_arc_graphics_Gl_activeAttributes = jint(35721);
	SF_arc_graphics_Gl_activeAttributeMaxLength = jint(35722);
	SF_arc_graphics_Gl_shadingLanguageVersion = jint(35724);
	SF_arc_graphics_Gl_currentProgram = jint(35725);
	SF_arc_graphics_Gl_never = jint(512);
	SF_arc_graphics_Gl_less = jint(513);
	SF_arc_graphics_Gl_equal = jint(514);
	SF_arc_graphics_Gl_lequal = jint(515);
	SF_arc_graphics_Gl_greater = jint(516);
	SF_arc_graphics_Gl_notequal = jint(517);
	SF_arc_graphics_Gl_gequal = jint(518);
	SF_arc_graphics_Gl_always = jint(519);
	SF_arc_graphics_Gl_keep = jint(7680);
	SF_arc_graphics_Gl_replace = jint(7681);
	SF_arc_graphics_Gl_incr = jint(7682);
	SF_arc_graphics_Gl_decr = jint(7683);
	SF_arc_graphics_Gl_invert = jint(5386);
	SF_arc_graphics_Gl_incrWrap = jint(34055);
	SF_arc_graphics_Gl_decrWrap = jint(34056);
	SF_arc_graphics_Gl_vendor = jint(7936);
	SF_arc_graphics_Gl_renderer = jint(7937);
	SF_arc_graphics_Gl_version = jint(7938);
	SF_arc_graphics_Gl_extensions = jint(7939);
	SF_arc_graphics_Gl_nearest = jint(9728);
	SF_arc_graphics_Gl_linear = jint(9729);
	SF_arc_graphics_Gl_nearestMipmapNearest = jint(9984);
	SF_arc_graphics_Gl_linearMipmapNearest = jint(9985);
	SF_arc_graphics_Gl_nearestMipmapLinear = jint(9986);
	SF_arc_graphics_Gl_linearMipmapLinear = jint(9987);
	SF_arc_graphics_Gl_textureMagFilter = jint(10240);
	SF_arc_graphics_Gl_textureMinFilter = jint(10241);
	SF_arc_graphics_Gl_textureWrapS = jint(10242);
	SF_arc_graphics_Gl_textureWrapT = jint(10243);
	SF_arc_graphics_Gl_texture = jint(5890);
	SF_arc_graphics_Gl_textureCubeMap = jint(34067);
	SF_arc_graphics_Gl_textureBindingCubeMap = jint(34068);
	SF_arc_graphics_Gl_textureCubeMapPositiveX = jint(34069);
	SF_arc_graphics_Gl_textureCubeMapNegativeX = jint(34070);
	SF_arc_graphics_Gl_textureCubeMapPositiveY = jint(34071);
	SF_arc_graphics_Gl_textureCubeMapNegativeY = jint(34072);
	SF_arc_graphics_Gl_textureCubeMapPositiveZ = jint(34073);
	SF_arc_graphics_Gl_textureCubeMapNegativeZ = jint(34074);
	SF_arc_graphics_Gl_maxCubeMapTextureSize = jint(34076);
	SF_arc_graphics_Gl_texture0 = jint(33984);
	SF_arc_graphics_Gl_texture1 = jint(33985);
	SF_arc_graphics_Gl_texture2 = jint(33986);
	SF_arc_graphics_Gl_texture3 = jint(33987);
	SF_arc_graphics_Gl_texture4 = jint(33988);
	SF_arc_graphics_Gl_texture5 = jint(33989);
	SF_arc_graphics_Gl_texture6 = jint(33990);
	SF_arc_graphics_Gl_texture7 = jint(33991);
	SF_arc_graphics_Gl_texture8 = jint(33992);
	SF_arc_graphics_Gl_texture9 = jint(33993);
	SF_arc_graphics_Gl_texture10 = jint(33994);
	SF_arc_graphics_Gl_texture11 = jint(33995);
	SF_arc_graphics_Gl_texture12 = jint(33996);
	SF_arc_graphics_Gl_texture13 = jint(33997);
	SF_arc_graphics_Gl_texture14 = jint(33998);
	SF_arc_graphics_Gl_texture15 = jint(33999);
	SF_arc_graphics_Gl_texture16 = jint(34000);
	SF_arc_graphics_Gl_texture17 = jint(34001);
	SF_arc_graphics_Gl_texture18 = jint(34002);
	SF_arc_graphics_Gl_texture19 = jint(34003);
	SF_arc_graphics_Gl_texture20 = jint(34004);
	SF_arc_graphics_Gl_texture21 = jint(34005);
	SF_arc_graphics_Gl_texture22 = jint(34006);
	SF_arc_graphics_Gl_texture23 = jint(34007);
	SF_arc_graphics_Gl_texture24 = jint(34008);
	SF_arc_graphics_Gl_texture25 = jint(34009);
	SF_arc_graphics_Gl_texture26 = jint(34010);
	SF_arc_graphics_Gl_texture27 = jint(34011);
	SF_arc_graphics_Gl_texture28 = jint(34012);
	SF_arc_graphics_Gl_texture29 = jint(34013);
	SF_arc_graphics_Gl_texture30 = jint(34014);
	SF_arc_graphics_Gl_texture31 = jint(34015);
	SF_arc_graphics_Gl_activeTexture = jint(34016);
	SF_arc_graphics_Gl_repeat = jint(10497);
	SF_arc_graphics_Gl_clampToEdge = jint(33071);
	SF_arc_graphics_Gl_mirroredRepeat = jint(33648);
	SF_arc_graphics_Gl_floatVec2 = jint(35664);
	SF_arc_graphics_Gl_floatVec3 = jint(35665);
	SF_arc_graphics_Gl_floatVec4 = jint(35666);
	SF_arc_graphics_Gl_intVec2 = jint(35667);
	SF_arc_graphics_Gl_intVec3 = jint(35668);
	SF_arc_graphics_Gl_intVec4 = jint(35669);
	SF_arc_graphics_Gl_bool = jint(35670);
	SF_arc_graphics_Gl_boolVec2 = jint(35671);
	SF_arc_graphics_Gl_boolVec3 = jint(35672);
	SF_arc_graphics_Gl_boolVec4 = jint(35673);
	SF_arc_graphics_Gl_floatMat2 = jint(35674);
	SF_arc_graphics_Gl_floatMat3 = jint(35675);
	SF_arc_graphics_Gl_floatMat4 = jint(35676);
	SF_arc_graphics_Gl_sampler2d = jint(35678);
	SF_arc_graphics_Gl_samplerCube = jint(35680);
	SF_arc_graphics_Gl_vertexAttribArrayEnabled = jint(34338);
	SF_arc_graphics_Gl_vertexAttribArraySize = jint(34339);
	SF_arc_graphics_Gl_vertexAttribArrayStride = jint(34340);
	SF_arc_graphics_Gl_vertexAttribArrayType = jint(34341);
	SF_arc_graphics_Gl_vertexAttribArrayNormalized = jint(34922);
	SF_arc_graphics_Gl_vertexAttribArrayPointer = jint(34373);
	SF_arc_graphics_Gl_vertexAttribArrayBufferBinding = jint(34975);
	SF_arc_graphics_Gl_implementationColorReadType = jint(35738);
	SF_arc_graphics_Gl_implementationColorReadFormat = jint(35739);
	SF_arc_graphics_Gl_compileStatus = jint(35713);
	SF_arc_graphics_Gl_infoLogLength = jint(35716);
	SF_arc_graphics_Gl_shaderSourceLength = jint(35720);
	SF_arc_graphics_Gl_shaderCompiler = jint(36346);
	SF_arc_graphics_Gl_shaderBinaryFormats = jint(36344);
	SF_arc_graphics_Gl_numShaderBinaryFormats = jint(36345);
	SF_arc_graphics_Gl_lowFloat = jint(36336);
	SF_arc_graphics_Gl_mediumFloat = jint(36337);
	SF_arc_graphics_Gl_highFloat = jint(36338);
	SF_arc_graphics_Gl_lowInt = jint(36339);
	SF_arc_graphics_Gl_mediumInt = jint(36340);
	SF_arc_graphics_Gl_highInt = jint(36341);
	SF_arc_graphics_Gl_framebuffer = jint(36160);
	SF_arc_graphics_Gl_renderbuffer = jint(36161);
	SF_arc_graphics_Gl_rgba4 = jint(32854);
	SF_arc_graphics_Gl_rgb5A1 = jint(32855);
	SF_arc_graphics_Gl_rgb565 = jint(36194);
	SF_arc_graphics_Gl_depthComponent16 = jint(33189);
	SF_arc_graphics_Gl_stencilIndex = jint(6401);
	SF_arc_graphics_Gl_stencilIndex8 = jint(36168);
	SF_arc_graphics_Gl_renderbufferWidth = jint(36162);
	SF_arc_graphics_Gl_renderbufferHeight = jint(36163);
	SF_arc_graphics_Gl_renderbufferInternalFormat = jint(36164);
	SF_arc_graphics_Gl_renderbufferRedSize = jint(36176);
	SF_arc_graphics_Gl_renderbufferGreenSize = jint(36177);
	SF_arc_graphics_Gl_renderbufferBlueSize = jint(36178);
	SF_arc_graphics_Gl_renderbufferAlphaSize = jint(36179);
	SF_arc_graphics_Gl_renderbufferDepthSize = jint(36180);
	SF_arc_graphics_Gl_renderbufferStencilSize = jint(36181);
	SF_arc_graphics_Gl_framebufferAttachmentObjectType = jint(36048);
	SF_arc_graphics_Gl_framebufferAttachmentObjectName = jint(36049);
	SF_arc_graphics_Gl_framebufferAttachmentTextureLevel = jint(36050);
	SF_arc_graphics_Gl_framebufferAttachmentTextureCubeMapFace = jint(36051);
	SF_arc_graphics_Gl_colorAttachment0 = jint(36064);
	SF_arc_graphics_Gl_depthAttachment = jint(36096);
	SF_arc_graphics_Gl_stencilAttachment = jint(36128);
	SF_arc_graphics_Gl_none = jint(0);
	SF_arc_graphics_Gl_framebufferComplete = jint(36053);
	SF_arc_graphics_Gl_framebufferIncompleteAttachment = jint(36054);
	SF_arc_graphics_Gl_framebufferIncompleteMissingAttachment = jint(36055);
	SF_arc_graphics_Gl_framebufferIncompleteDimensions = jint(36057);
	SF_arc_graphics_Gl_framebufferUnsupported = jint(36061);
	SF_arc_graphics_Gl_framebufferBinding = jint(36006);
	SF_arc_graphics_Gl_renderbufferBinding = jint(36007);
	SF_arc_graphics_Gl_maxRenderbufferSize = jint(34024);
	SF_arc_graphics_Gl_invalidFramebufferOperation = jint(1286);
	SF_arc_graphics_Gl_programPointSize = jint(34370);
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Gl:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Gl(ctx);
	{
	LINE_NUMBER(325);
	sp[0].o = (jobject)SM_arc_util_Buffers_newIntBuffer_int_R_java_nio_IntBuffer(ctx, (jint(1)));
	clinit_arc_graphics_Gl(ctx);
	SF_arc_graphics_Gl_ibuf = sp[0].o;
	LINE_NUMBER(326);
	sp[0].o = (jobject)SM_arc_util_Buffers_newFloatBuffer_int_R_java_nio_FloatBuffer(ctx, (jint(1)));
	clinit_arc_graphics_Gl(ctx);
	SF_arc_graphics_Gl_fbuf = sp[0].o;
	LINE_NUMBER(328);
	clinit_arc_graphics_Gl(ctx);
	SF_arc_graphics_Gl_lastActiveTexture = (jint(-1));
	LINE_NUMBER(330);
	sp[0].o = (jobject) createArray(ctx, &class_int, (32));
	clinit_arc_graphics_Gl(ctx);
	SF_arc_graphics_Gl_lastBoundTextures = sp[0].o;
	LINE_NUMBER(332);
	clinit_arc_graphics_Gl(ctx);
	SF_arc_graphics_Gl_lastUsedProgram = (jint(-1));
	LINE_NUMBER(334);
	clinit_arc_struct_Bits(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Bits);
	init_arc_struct_Bits(ctx, sp[0].o);
	clinit_arc_graphics_Gl(ctx);
	SF_arc_graphics_Gl_enabled = sp[0].o;
	LINE_NUMBER(335);
	clinit_arc_graphics_Gl(ctx);
	SF_arc_graphics_Gl_wasDepthMask = (jint(1));
	LINE_NUMBER(337);
	clinit_arc_graphics_Gl(ctx);
	SF_arc_graphics_Gl_lastBlendSrc = (jint(-1));
	clinit_arc_graphics_Gl(ctx);
	SF_arc_graphics_Gl_lastBlendDst = (jint(-1));
	clinit_arc_graphics_Gl(ctx);
	SF_arc_graphics_Gl_lastBlendSrcAlpha = (jint(-1));
	clinit_arc_graphics_Gl(ctx);
	SF_arc_graphics_Gl_lastBlendDstAlpha = (jint(-1));
	LINE_NUMBER(340);
	SM_arc_graphics_Gl_reset(ctx);
	LINE_NUMBER(341);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_graphics_Gl[] {
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
};

static FieldMetadata fields[] {
	{ "optimize", &class_boolean, (intptr_t) &SF_arc_graphics_Gl_optimize, "Z", 26 },
	{ "esVersion20", &class_int, (intptr_t) &SF_arc_graphics_Gl_esVersion20, "I", 25 },
	{ "depthBufferBit", &class_int, (intptr_t) &SF_arc_graphics_Gl_depthBufferBit, "I", 25 },
	{ "stencilBufferBit", &class_int, (intptr_t) &SF_arc_graphics_Gl_stencilBufferBit, "I", 25 },
	{ "colorBufferBit", &class_int, (intptr_t) &SF_arc_graphics_Gl_colorBufferBit, "I", 25 },
	{ "falseV", &class_int, (intptr_t) &SF_arc_graphics_Gl_falseV, "I", 25 },
	{ "trueV", &class_int, (intptr_t) &SF_arc_graphics_Gl_trueV, "I", 25 },
	{ "points", &class_int, (intptr_t) &SF_arc_graphics_Gl_points, "I", 25 },
	{ "lines", &class_int, (intptr_t) &SF_arc_graphics_Gl_lines, "I", 25 },
	{ "lineLoop", &class_int, (intptr_t) &SF_arc_graphics_Gl_lineLoop, "I", 25 },
	{ "lineStrip", &class_int, (intptr_t) &SF_arc_graphics_Gl_lineStrip, "I", 25 },
	{ "triangles", &class_int, (intptr_t) &SF_arc_graphics_Gl_triangles, "I", 25 },
	{ "triangleStrip", &class_int, (intptr_t) &SF_arc_graphics_Gl_triangleStrip, "I", 25 },
	{ "triangleFan", &class_int, (intptr_t) &SF_arc_graphics_Gl_triangleFan, "I", 25 },
	{ "zero", &class_int, (intptr_t) &SF_arc_graphics_Gl_zero, "I", 25 },
	{ "one", &class_int, (intptr_t) &SF_arc_graphics_Gl_one, "I", 25 },
	{ "srcColor", &class_int, (intptr_t) &SF_arc_graphics_Gl_srcColor, "I", 25 },
	{ "oneMinusSrcColor", &class_int, (intptr_t) &SF_arc_graphics_Gl_oneMinusSrcColor, "I", 25 },
	{ "srcAlpha", &class_int, (intptr_t) &SF_arc_graphics_Gl_srcAlpha, "I", 25 },
	{ "oneMinusSrcAlpha", &class_int, (intptr_t) &SF_arc_graphics_Gl_oneMinusSrcAlpha, "I", 25 },
	{ "dstAlpha", &class_int, (intptr_t) &SF_arc_graphics_Gl_dstAlpha, "I", 25 },
	{ "oneMinusDstAlpha", &class_int, (intptr_t) &SF_arc_graphics_Gl_oneMinusDstAlpha, "I", 25 },
	{ "dstColor", &class_int, (intptr_t) &SF_arc_graphics_Gl_dstColor, "I", 25 },
	{ "oneMinusDstColor", &class_int, (intptr_t) &SF_arc_graphics_Gl_oneMinusDstColor, "I", 25 },
	{ "srcAlphaSaturate", &class_int, (intptr_t) &SF_arc_graphics_Gl_srcAlphaSaturate, "I", 25 },
	{ "funcAdd", &class_int, (intptr_t) &SF_arc_graphics_Gl_funcAdd, "I", 25 },
	{ "blendEquation", &class_int, (intptr_t) &SF_arc_graphics_Gl_blendEquation, "I", 25 },
	{ "blendEquationRgb", &class_int, (intptr_t) &SF_arc_graphics_Gl_blendEquationRgb, "I", 25 },
	{ "blendEquationAlpha", &class_int, (intptr_t) &SF_arc_graphics_Gl_blendEquationAlpha, "I", 25 },
	{ "funcSubtract", &class_int, (intptr_t) &SF_arc_graphics_Gl_funcSubtract, "I", 25 },
	{ "funcReverseSubtract", &class_int, (intptr_t) &SF_arc_graphics_Gl_funcReverseSubtract, "I", 25 },
	{ "min", &class_int, (intptr_t) &SF_arc_graphics_Gl_min, "I", 25 },
	{ "max", &class_int, (intptr_t) &SF_arc_graphics_Gl_max, "I", 25 },
	{ "blendDstRgb", &class_int, (intptr_t) &SF_arc_graphics_Gl_blendDstRgb, "I", 25 },
	{ "blendSrcRgb", &class_int, (intptr_t) &SF_arc_graphics_Gl_blendSrcRgb, "I", 25 },
	{ "blendDstAlpha", &class_int, (intptr_t) &SF_arc_graphics_Gl_blendDstAlpha, "I", 25 },
	{ "blendSrcAlpha", &class_int, (intptr_t) &SF_arc_graphics_Gl_blendSrcAlpha, "I", 25 },
	{ "constantColor", &class_int, (intptr_t) &SF_arc_graphics_Gl_constantColor, "I", 25 },
	{ "oneMinusConstantColor", &class_int, (intptr_t) &SF_arc_graphics_Gl_oneMinusConstantColor, "I", 25 },
	{ "constantAlpha", &class_int, (intptr_t) &SF_arc_graphics_Gl_constantAlpha, "I", 25 },
	{ "oneMinusConstantAlpha", &class_int, (intptr_t) &SF_arc_graphics_Gl_oneMinusConstantAlpha, "I", 25 },
	{ "blendColor", &class_int, (intptr_t) &SF_arc_graphics_Gl_blendColor, "I", 25 },
	{ "arrayBuffer", &class_int, (intptr_t) &SF_arc_graphics_Gl_arrayBuffer, "I", 25 },
	{ "elementArrayBuffer", &class_int, (intptr_t) &SF_arc_graphics_Gl_elementArrayBuffer, "I", 25 },
	{ "arrayBufferBinding", &class_int, (intptr_t) &SF_arc_graphics_Gl_arrayBufferBinding, "I", 25 },
	{ "elementArrayBufferBinding", &class_int, (intptr_t) &SF_arc_graphics_Gl_elementArrayBufferBinding, "I", 25 },
	{ "streamDraw", &class_int, (intptr_t) &SF_arc_graphics_Gl_streamDraw, "I", 25 },
	{ "staticDraw", &class_int, (intptr_t) &SF_arc_graphics_Gl_staticDraw, "I", 25 },
	{ "dynamicDraw", &class_int, (intptr_t) &SF_arc_graphics_Gl_dynamicDraw, "I", 25 },
	{ "bufferSize", &class_int, (intptr_t) &SF_arc_graphics_Gl_bufferSize, "I", 25 },
	{ "bufferUsage", &class_int, (intptr_t) &SF_arc_graphics_Gl_bufferUsage, "I", 25 },
	{ "currentVertexAttrib", &class_int, (intptr_t) &SF_arc_graphics_Gl_currentVertexAttrib, "I", 25 },
	{ "front", &class_int, (intptr_t) &SF_arc_graphics_Gl_front, "I", 25 },
	{ "back", &class_int, (intptr_t) &SF_arc_graphics_Gl_back, "I", 25 },
	{ "frontAndBack", &class_int, (intptr_t) &SF_arc_graphics_Gl_frontAndBack, "I", 25 },
	{ "texture2d", &class_int, (intptr_t) &SF_arc_graphics_Gl_texture2d, "I", 25 },
	{ "cullFace", &class_int, (intptr_t) &SF_arc_graphics_Gl_cullFace, "I", 25 },
	{ "blend", &class_int, (intptr_t) &SF_arc_graphics_Gl_blend, "I", 25 },
	{ "dither", &class_int, (intptr_t) &SF_arc_graphics_Gl_dither, "I", 25 },
	{ "stencilTest", &class_int, (intptr_t) &SF_arc_graphics_Gl_stencilTest, "I", 25 },
	{ "depthTest", &class_int, (intptr_t) &SF_arc_graphics_Gl_depthTest, "I", 25 },
	{ "scissorTest", &class_int, (intptr_t) &SF_arc_graphics_Gl_scissorTest, "I", 25 },
	{ "polygonOffsetFill", &class_int, (intptr_t) &SF_arc_graphics_Gl_polygonOffsetFill, "I", 25 },
	{ "sampleAlphaToCoverage", &class_int, (intptr_t) &SF_arc_graphics_Gl_sampleAlphaToCoverage, "I", 25 },
	{ "sampleCoverage", &class_int, (intptr_t) &SF_arc_graphics_Gl_sampleCoverage, "I", 25 },
	{ "noError", &class_int, (intptr_t) &SF_arc_graphics_Gl_noError, "I", 25 },
	{ "invalidEnum", &class_int, (intptr_t) &SF_arc_graphics_Gl_invalidEnum, "I", 25 },
	{ "invalidValue", &class_int, (intptr_t) &SF_arc_graphics_Gl_invalidValue, "I", 25 },
	{ "invalidOperation", &class_int, (intptr_t) &SF_arc_graphics_Gl_invalidOperation, "I", 25 },
	{ "outOfMemory", &class_int, (intptr_t) &SF_arc_graphics_Gl_outOfMemory, "I", 25 },
	{ "cw", &class_int, (intptr_t) &SF_arc_graphics_Gl_cw, "I", 25 },
	{ "ccw", &class_int, (intptr_t) &SF_arc_graphics_Gl_ccw, "I", 25 },
	{ "lineWidth", &class_int, (intptr_t) &SF_arc_graphics_Gl_lineWidth, "I", 25 },
	{ "aliasedPointSizeRange", &class_int, (intptr_t) &SF_arc_graphics_Gl_aliasedPointSizeRange, "I", 25 },
	{ "aliasedLineWidthRange", &class_int, (intptr_t) &SF_arc_graphics_Gl_aliasedLineWidthRange, "I", 25 },
	{ "cullFaceMode", &class_int, (intptr_t) &SF_arc_graphics_Gl_cullFaceMode, "I", 25 },
	{ "frontFace", &class_int, (intptr_t) &SF_arc_graphics_Gl_frontFace, "I", 25 },
	{ "depthRange", &class_int, (intptr_t) &SF_arc_graphics_Gl_depthRange, "I", 25 },
	{ "depthWritemask", &class_int, (intptr_t) &SF_arc_graphics_Gl_depthWritemask, "I", 25 },
	{ "depthClearValue", &class_int, (intptr_t) &SF_arc_graphics_Gl_depthClearValue, "I", 25 },
	{ "depthFunc", &class_int, (intptr_t) &SF_arc_graphics_Gl_depthFunc, "I", 25 },
	{ "stencilClearValue", &class_int, (intptr_t) &SF_arc_graphics_Gl_stencilClearValue, "I", 25 },
	{ "stencilFunc", &class_int, (intptr_t) &SF_arc_graphics_Gl_stencilFunc, "I", 25 },
	{ "stencilFail", &class_int, (intptr_t) &SF_arc_graphics_Gl_stencilFail, "I", 25 },
	{ "stencilPassDepthFail", &class_int, (intptr_t) &SF_arc_graphics_Gl_stencilPassDepthFail, "I", 25 },
	{ "stencilPassDepthPass", &class_int, (intptr_t) &SF_arc_graphics_Gl_stencilPassDepthPass, "I", 25 },
	{ "stencilRef", &class_int, (intptr_t) &SF_arc_graphics_Gl_stencilRef, "I", 25 },
	{ "stencilValueMask", &class_int, (intptr_t) &SF_arc_graphics_Gl_stencilValueMask, "I", 25 },
	{ "stencilWritemask", &class_int, (intptr_t) &SF_arc_graphics_Gl_stencilWritemask, "I", 25 },
	{ "stencilBackFunc", &class_int, (intptr_t) &SF_arc_graphics_Gl_stencilBackFunc, "I", 25 },
	{ "stencilBackFail", &class_int, (intptr_t) &SF_arc_graphics_Gl_stencilBackFail, "I", 25 },
	{ "stencilBackPassDepthFail", &class_int, (intptr_t) &SF_arc_graphics_Gl_stencilBackPassDepthFail, "I", 25 },
	{ "stencilBackPassDepthPass", &class_int, (intptr_t) &SF_arc_graphics_Gl_stencilBackPassDepthPass, "I", 25 },
	{ "stencilBackRef", &class_int, (intptr_t) &SF_arc_graphics_Gl_stencilBackRef, "I", 25 },
	{ "stencilBackValueMask", &class_int, (intptr_t) &SF_arc_graphics_Gl_stencilBackValueMask, "I", 25 },
	{ "stencilBackWritemask", &class_int, (intptr_t) &SF_arc_graphics_Gl_stencilBackWritemask, "I", 25 },
	{ "viewport", &class_int, (intptr_t) &SF_arc_graphics_Gl_viewport, "I", 25 },
	{ "scissorBox", &class_int, (intptr_t) &SF_arc_graphics_Gl_scissorBox, "I", 25 },
	{ "colorClearValue", &class_int, (intptr_t) &SF_arc_graphics_Gl_colorClearValue, "I", 25 },
	{ "colorWritemask", &class_int, (intptr_t) &SF_arc_graphics_Gl_colorWritemask, "I", 25 },
	{ "unpackAlignment", &class_int, (intptr_t) &SF_arc_graphics_Gl_unpackAlignment, "I", 25 },
	{ "packAlignment", &class_int, (intptr_t) &SF_arc_graphics_Gl_packAlignment, "I", 25 },
	{ "maxTextureSize", &class_int, (intptr_t) &SF_arc_graphics_Gl_maxTextureSize, "I", 25 },
	{ "maxTextureUnits", &class_int, (intptr_t) &SF_arc_graphics_Gl_maxTextureUnits, "I", 25 },
	{ "maxViewportDims", &class_int, (intptr_t) &SF_arc_graphics_Gl_maxViewportDims, "I", 25 },
	{ "subpixelBits", &class_int, (intptr_t) &SF_arc_graphics_Gl_subpixelBits, "I", 25 },
	{ "redBits", &class_int, (intptr_t) &SF_arc_graphics_Gl_redBits, "I", 25 },
	{ "greenBits", &class_int, (intptr_t) &SF_arc_graphics_Gl_greenBits, "I", 25 },
	{ "blueBits", &class_int, (intptr_t) &SF_arc_graphics_Gl_blueBits, "I", 25 },
	{ "alphaBits", &class_int, (intptr_t) &SF_arc_graphics_Gl_alphaBits, "I", 25 },
	{ "depthBits", &class_int, (intptr_t) &SF_arc_graphics_Gl_depthBits, "I", 25 },
	{ "stencilBits", &class_int, (intptr_t) &SF_arc_graphics_Gl_stencilBits, "I", 25 },
	{ "polygonOffsetUnits", &class_int, (intptr_t) &SF_arc_graphics_Gl_polygonOffsetUnits, "I", 25 },
	{ "polygonOffsetFactor", &class_int, (intptr_t) &SF_arc_graphics_Gl_polygonOffsetFactor, "I", 25 },
	{ "textureBinding2d", &class_int, (intptr_t) &SF_arc_graphics_Gl_textureBinding2d, "I", 25 },
	{ "sampleBuffers", &class_int, (intptr_t) &SF_arc_graphics_Gl_sampleBuffers, "I", 25 },
	{ "samples", &class_int, (intptr_t) &SF_arc_graphics_Gl_samples, "I", 25 },
	{ "sampleCoverageValue", &class_int, (intptr_t) &SF_arc_graphics_Gl_sampleCoverageValue, "I", 25 },
	{ "sampleCoverageInvert", &class_int, (intptr_t) &SF_arc_graphics_Gl_sampleCoverageInvert, "I", 25 },
	{ "numCompressedTextureFormats", &class_int, (intptr_t) &SF_arc_graphics_Gl_numCompressedTextureFormats, "I", 25 },
	{ "compressedTextureFormats", &class_int, (intptr_t) &SF_arc_graphics_Gl_compressedTextureFormats, "I", 25 },
	{ "dontCare", &class_int, (intptr_t) &SF_arc_graphics_Gl_dontCare, "I", 25 },
	{ "fastest", &class_int, (intptr_t) &SF_arc_graphics_Gl_fastest, "I", 25 },
	{ "nicest", &class_int, (intptr_t) &SF_arc_graphics_Gl_nicest, "I", 25 },
	{ "generateMipmap", &class_int, (intptr_t) &SF_arc_graphics_Gl_generateMipmap, "I", 25 },
	{ "generateMipmapHint", &class_int, (intptr_t) &SF_arc_graphics_Gl_generateMipmapHint, "I", 25 },
	{ "byteV", &class_int, (intptr_t) &SF_arc_graphics_Gl_byteV, "I", 25 },
	{ "unsignedByte", &class_int, (intptr_t) &SF_arc_graphics_Gl_unsignedByte, "I", 25 },
	{ "shortV", &class_int, (intptr_t) &SF_arc_graphics_Gl_shortV, "I", 25 },
	{ "unsignedShort", &class_int, (intptr_t) &SF_arc_graphics_Gl_unsignedShort, "I", 25 },
	{ "intV", &class_int, (intptr_t) &SF_arc_graphics_Gl_intV, "I", 25 },
	{ "unsignedInt", &class_int, (intptr_t) &SF_arc_graphics_Gl_unsignedInt, "I", 25 },
	{ "floatV", &class_int, (intptr_t) &SF_arc_graphics_Gl_floatV, "I", 25 },
	{ "fixed", &class_int, (intptr_t) &SF_arc_graphics_Gl_fixed, "I", 25 },
	{ "depthComponent", &class_int, (intptr_t) &SF_arc_graphics_Gl_depthComponent, "I", 25 },
	{ "alpha", &class_int, (intptr_t) &SF_arc_graphics_Gl_alpha, "I", 25 },
	{ "rgb", &class_int, (intptr_t) &SF_arc_graphics_Gl_rgb, "I", 25 },
	{ "rgba", &class_int, (intptr_t) &SF_arc_graphics_Gl_rgba, "I", 25 },
	{ "luminance", &class_int, (intptr_t) &SF_arc_graphics_Gl_luminance, "I", 25 },
	{ "luminanceAlpha", &class_int, (intptr_t) &SF_arc_graphics_Gl_luminanceAlpha, "I", 25 },
	{ "unsignedShort4444", &class_int, (intptr_t) &SF_arc_graphics_Gl_unsignedShort4444, "I", 25 },
	{ "unsignedShort5551", &class_int, (intptr_t) &SF_arc_graphics_Gl_unsignedShort5551, "I", 25 },
	{ "unsignedShort565", &class_int, (intptr_t) &SF_arc_graphics_Gl_unsignedShort565, "I", 25 },
	{ "fragmentShader", &class_int, (intptr_t) &SF_arc_graphics_Gl_fragmentShader, "I", 25 },
	{ "vertexShader", &class_int, (intptr_t) &SF_arc_graphics_Gl_vertexShader, "I", 25 },
	{ "maxVertexAttribs", &class_int, (intptr_t) &SF_arc_graphics_Gl_maxVertexAttribs, "I", 25 },
	{ "maxVertexUniformVectors", &class_int, (intptr_t) &SF_arc_graphics_Gl_maxVertexUniformVectors, "I", 25 },
	{ "maxVaryingVectors", &class_int, (intptr_t) &SF_arc_graphics_Gl_maxVaryingVectors, "I", 25 },
	{ "maxCombinedTextureImageUnits", &class_int, (intptr_t) &SF_arc_graphics_Gl_maxCombinedTextureImageUnits, "I", 25 },
	{ "maxVertexTextureImageUnits", &class_int, (intptr_t) &SF_arc_graphics_Gl_maxVertexTextureImageUnits, "I", 25 },
	{ "maxTextureImageUnits", &class_int, (intptr_t) &SF_arc_graphics_Gl_maxTextureImageUnits, "I", 25 },
	{ "maxFragmentUniformVectors", &class_int, (intptr_t) &SF_arc_graphics_Gl_maxFragmentUniformVectors, "I", 25 },
	{ "shaderType", &class_int, (intptr_t) &SF_arc_graphics_Gl_shaderType, "I", 25 },
	{ "deleteStatus", &class_int, (intptr_t) &SF_arc_graphics_Gl_deleteStatus, "I", 25 },
	{ "linkStatus", &class_int, (intptr_t) &SF_arc_graphics_Gl_linkStatus, "I", 25 },
	{ "validateStatus", &class_int, (intptr_t) &SF_arc_graphics_Gl_validateStatus, "I", 25 },
	{ "attachedShaders", &class_int, (intptr_t) &SF_arc_graphics_Gl_attachedShaders, "I", 25 },
	{ "activeUniforms", &class_int, (intptr_t) &SF_arc_graphics_Gl_activeUniforms, "I", 25 },
	{ "activeUniformMaxLength", &class_int, (intptr_t) &SF_arc_graphics_Gl_activeUniformMaxLength, "I", 25 },
	{ "activeAttributes", &class_int, (intptr_t) &SF_arc_graphics_Gl_activeAttributes, "I", 25 },
	{ "activeAttributeMaxLength", &class_int, (intptr_t) &SF_arc_graphics_Gl_activeAttributeMaxLength, "I", 25 },
	{ "shadingLanguageVersion", &class_int, (intptr_t) &SF_arc_graphics_Gl_shadingLanguageVersion, "I", 25 },
	{ "currentProgram", &class_int, (intptr_t) &SF_arc_graphics_Gl_currentProgram, "I", 25 },
	{ "never", &class_int, (intptr_t) &SF_arc_graphics_Gl_never, "I", 25 },
	{ "less", &class_int, (intptr_t) &SF_arc_graphics_Gl_less, "I", 25 },
	{ "equal", &class_int, (intptr_t) &SF_arc_graphics_Gl_equal, "I", 25 },
	{ "lequal", &class_int, (intptr_t) &SF_arc_graphics_Gl_lequal, "I", 25 },
	{ "greater", &class_int, (intptr_t) &SF_arc_graphics_Gl_greater, "I", 25 },
	{ "notequal", &class_int, (intptr_t) &SF_arc_graphics_Gl_notequal, "I", 25 },
	{ "gequal", &class_int, (intptr_t) &SF_arc_graphics_Gl_gequal, "I", 25 },
	{ "always", &class_int, (intptr_t) &SF_arc_graphics_Gl_always, "I", 25 },
	{ "keep", &class_int, (intptr_t) &SF_arc_graphics_Gl_keep, "I", 25 },
	{ "replace", &class_int, (intptr_t) &SF_arc_graphics_Gl_replace, "I", 25 },
	{ "incr", &class_int, (intptr_t) &SF_arc_graphics_Gl_incr, "I", 25 },
	{ "decr", &class_int, (intptr_t) &SF_arc_graphics_Gl_decr, "I", 25 },
	{ "invert", &class_int, (intptr_t) &SF_arc_graphics_Gl_invert, "I", 25 },
	{ "incrWrap", &class_int, (intptr_t) &SF_arc_graphics_Gl_incrWrap, "I", 25 },
	{ "decrWrap", &class_int, (intptr_t) &SF_arc_graphics_Gl_decrWrap, "I", 25 },
	{ "vendor", &class_int, (intptr_t) &SF_arc_graphics_Gl_vendor, "I", 25 },
	{ "renderer", &class_int, (intptr_t) &SF_arc_graphics_Gl_renderer, "I", 25 },
	{ "version", &class_int, (intptr_t) &SF_arc_graphics_Gl_version, "I", 25 },
	{ "extensions", &class_int, (intptr_t) &SF_arc_graphics_Gl_extensions, "I", 25 },
	{ "nearest", &class_int, (intptr_t) &SF_arc_graphics_Gl_nearest, "I", 25 },
	{ "linear", &class_int, (intptr_t) &SF_arc_graphics_Gl_linear, "I", 25 },
	{ "nearestMipmapNearest", &class_int, (intptr_t) &SF_arc_graphics_Gl_nearestMipmapNearest, "I", 25 },
	{ "linearMipmapNearest", &class_int, (intptr_t) &SF_arc_graphics_Gl_linearMipmapNearest, "I", 25 },
	{ "nearestMipmapLinear", &class_int, (intptr_t) &SF_arc_graphics_Gl_nearestMipmapLinear, "I", 25 },
	{ "linearMipmapLinear", &class_int, (intptr_t) &SF_arc_graphics_Gl_linearMipmapLinear, "I", 25 },
	{ "textureMagFilter", &class_int, (intptr_t) &SF_arc_graphics_Gl_textureMagFilter, "I", 25 },
	{ "textureMinFilter", &class_int, (intptr_t) &SF_arc_graphics_Gl_textureMinFilter, "I", 25 },
	{ "textureWrapS", &class_int, (intptr_t) &SF_arc_graphics_Gl_textureWrapS, "I", 25 },
	{ "textureWrapT", &class_int, (intptr_t) &SF_arc_graphics_Gl_textureWrapT, "I", 25 },
	{ "texture", &class_int, (intptr_t) &SF_arc_graphics_Gl_texture, "I", 25 },
	{ "textureCubeMap", &class_int, (intptr_t) &SF_arc_graphics_Gl_textureCubeMap, "I", 25 },
	{ "textureBindingCubeMap", &class_int, (intptr_t) &SF_arc_graphics_Gl_textureBindingCubeMap, "I", 25 },
	{ "textureCubeMapPositiveX", &class_int, (intptr_t) &SF_arc_graphics_Gl_textureCubeMapPositiveX, "I", 25 },
	{ "textureCubeMapNegativeX", &class_int, (intptr_t) &SF_arc_graphics_Gl_textureCubeMapNegativeX, "I", 25 },
	{ "textureCubeMapPositiveY", &class_int, (intptr_t) &SF_arc_graphics_Gl_textureCubeMapPositiveY, "I", 25 },
	{ "textureCubeMapNegativeY", &class_int, (intptr_t) &SF_arc_graphics_Gl_textureCubeMapNegativeY, "I", 25 },
	{ "textureCubeMapPositiveZ", &class_int, (intptr_t) &SF_arc_graphics_Gl_textureCubeMapPositiveZ, "I", 25 },
	{ "textureCubeMapNegativeZ", &class_int, (intptr_t) &SF_arc_graphics_Gl_textureCubeMapNegativeZ, "I", 25 },
	{ "maxCubeMapTextureSize", &class_int, (intptr_t) &SF_arc_graphics_Gl_maxCubeMapTextureSize, "I", 25 },
	{ "texture0", &class_int, (intptr_t) &SF_arc_graphics_Gl_texture0, "I", 25 },
	{ "texture1", &class_int, (intptr_t) &SF_arc_graphics_Gl_texture1, "I", 25 },
	{ "texture2", &class_int, (intptr_t) &SF_arc_graphics_Gl_texture2, "I", 25 },
	{ "texture3", &class_int, (intptr_t) &SF_arc_graphics_Gl_texture3, "I", 25 },
	{ "texture4", &class_int, (intptr_t) &SF_arc_graphics_Gl_texture4, "I", 25 },
	{ "texture5", &class_int, (intptr_t) &SF_arc_graphics_Gl_texture5, "I", 25 },
	{ "texture6", &class_int, (intptr_t) &SF_arc_graphics_Gl_texture6, "I", 25 },
	{ "texture7", &class_int, (intptr_t) &SF_arc_graphics_Gl_texture7, "I", 25 },
	{ "texture8", &class_int, (intptr_t) &SF_arc_graphics_Gl_texture8, "I", 25 },
	{ "texture9", &class_int, (intptr_t) &SF_arc_graphics_Gl_texture9, "I", 25 },
	{ "texture10", &class_int, (intptr_t) &SF_arc_graphics_Gl_texture10, "I", 25 },
	{ "texture11", &class_int, (intptr_t) &SF_arc_graphics_Gl_texture11, "I", 25 },
	{ "texture12", &class_int, (intptr_t) &SF_arc_graphics_Gl_texture12, "I", 25 },
	{ "texture13", &class_int, (intptr_t) &SF_arc_graphics_Gl_texture13, "I", 25 },
	{ "texture14", &class_int, (intptr_t) &SF_arc_graphics_Gl_texture14, "I", 25 },
	{ "texture15", &class_int, (intptr_t) &SF_arc_graphics_Gl_texture15, "I", 25 },
	{ "texture16", &class_int, (intptr_t) &SF_arc_graphics_Gl_texture16, "I", 25 },
	{ "texture17", &class_int, (intptr_t) &SF_arc_graphics_Gl_texture17, "I", 25 },
	{ "texture18", &class_int, (intptr_t) &SF_arc_graphics_Gl_texture18, "I", 25 },
	{ "texture19", &class_int, (intptr_t) &SF_arc_graphics_Gl_texture19, "I", 25 },
	{ "texture20", &class_int, (intptr_t) &SF_arc_graphics_Gl_texture20, "I", 25 },
	{ "texture21", &class_int, (intptr_t) &SF_arc_graphics_Gl_texture21, "I", 25 },
	{ "texture22", &class_int, (intptr_t) &SF_arc_graphics_Gl_texture22, "I", 25 },
	{ "texture23", &class_int, (intptr_t) &SF_arc_graphics_Gl_texture23, "I", 25 },
	{ "texture24", &class_int, (intptr_t) &SF_arc_graphics_Gl_texture24, "I", 25 },
	{ "texture25", &class_int, (intptr_t) &SF_arc_graphics_Gl_texture25, "I", 25 },
	{ "texture26", &class_int, (intptr_t) &SF_arc_graphics_Gl_texture26, "I", 25 },
	{ "texture27", &class_int, (intptr_t) &SF_arc_graphics_Gl_texture27, "I", 25 },
	{ "texture28", &class_int, (intptr_t) &SF_arc_graphics_Gl_texture28, "I", 25 },
	{ "texture29", &class_int, (intptr_t) &SF_arc_graphics_Gl_texture29, "I", 25 },
	{ "texture30", &class_int, (intptr_t) &SF_arc_graphics_Gl_texture30, "I", 25 },
	{ "texture31", &class_int, (intptr_t) &SF_arc_graphics_Gl_texture31, "I", 25 },
	{ "activeTexture", &class_int, (intptr_t) &SF_arc_graphics_Gl_activeTexture, "I", 25 },
	{ "repeat", &class_int, (intptr_t) &SF_arc_graphics_Gl_repeat, "I", 25 },
	{ "clampToEdge", &class_int, (intptr_t) &SF_arc_graphics_Gl_clampToEdge, "I", 25 },
	{ "mirroredRepeat", &class_int, (intptr_t) &SF_arc_graphics_Gl_mirroredRepeat, "I", 25 },
	{ "floatVec2", &class_int, (intptr_t) &SF_arc_graphics_Gl_floatVec2, "I", 25 },
	{ "floatVec3", &class_int, (intptr_t) &SF_arc_graphics_Gl_floatVec3, "I", 25 },
	{ "floatVec4", &class_int, (intptr_t) &SF_arc_graphics_Gl_floatVec4, "I", 25 },
	{ "intVec2", &class_int, (intptr_t) &SF_arc_graphics_Gl_intVec2, "I", 25 },
	{ "intVec3", &class_int, (intptr_t) &SF_arc_graphics_Gl_intVec3, "I", 25 },
	{ "intVec4", &class_int, (intptr_t) &SF_arc_graphics_Gl_intVec4, "I", 25 },
	{ "bool", &class_int, (intptr_t) &SF_arc_graphics_Gl_bool, "I", 25 },
	{ "boolVec2", &class_int, (intptr_t) &SF_arc_graphics_Gl_boolVec2, "I", 25 },
	{ "boolVec3", &class_int, (intptr_t) &SF_arc_graphics_Gl_boolVec3, "I", 25 },
	{ "boolVec4", &class_int, (intptr_t) &SF_arc_graphics_Gl_boolVec4, "I", 25 },
	{ "floatMat2", &class_int, (intptr_t) &SF_arc_graphics_Gl_floatMat2, "I", 25 },
	{ "floatMat3", &class_int, (intptr_t) &SF_arc_graphics_Gl_floatMat3, "I", 25 },
	{ "floatMat4", &class_int, (intptr_t) &SF_arc_graphics_Gl_floatMat4, "I", 25 },
	{ "sampler2d", &class_int, (intptr_t) &SF_arc_graphics_Gl_sampler2d, "I", 25 },
	{ "samplerCube", &class_int, (intptr_t) &SF_arc_graphics_Gl_samplerCube, "I", 25 },
	{ "vertexAttribArrayEnabled", &class_int, (intptr_t) &SF_arc_graphics_Gl_vertexAttribArrayEnabled, "I", 25 },
	{ "vertexAttribArraySize", &class_int, (intptr_t) &SF_arc_graphics_Gl_vertexAttribArraySize, "I", 25 },
	{ "vertexAttribArrayStride", &class_int, (intptr_t) &SF_arc_graphics_Gl_vertexAttribArrayStride, "I", 25 },
	{ "vertexAttribArrayType", &class_int, (intptr_t) &SF_arc_graphics_Gl_vertexAttribArrayType, "I", 25 },
	{ "vertexAttribArrayNormalized", &class_int, (intptr_t) &SF_arc_graphics_Gl_vertexAttribArrayNormalized, "I", 25 },
	{ "vertexAttribArrayPointer", &class_int, (intptr_t) &SF_arc_graphics_Gl_vertexAttribArrayPointer, "I", 25 },
	{ "vertexAttribArrayBufferBinding", &class_int, (intptr_t) &SF_arc_graphics_Gl_vertexAttribArrayBufferBinding, "I", 25 },
	{ "implementationColorReadType", &class_int, (intptr_t) &SF_arc_graphics_Gl_implementationColorReadType, "I", 25 },
	{ "implementationColorReadFormat", &class_int, (intptr_t) &SF_arc_graphics_Gl_implementationColorReadFormat, "I", 25 },
	{ "compileStatus", &class_int, (intptr_t) &SF_arc_graphics_Gl_compileStatus, "I", 25 },
	{ "infoLogLength", &class_int, (intptr_t) &SF_arc_graphics_Gl_infoLogLength, "I", 25 },
	{ "shaderSourceLength", &class_int, (intptr_t) &SF_arc_graphics_Gl_shaderSourceLength, "I", 25 },
	{ "shaderCompiler", &class_int, (intptr_t) &SF_arc_graphics_Gl_shaderCompiler, "I", 25 },
	{ "shaderBinaryFormats", &class_int, (intptr_t) &SF_arc_graphics_Gl_shaderBinaryFormats, "I", 25 },
	{ "numShaderBinaryFormats", &class_int, (intptr_t) &SF_arc_graphics_Gl_numShaderBinaryFormats, "I", 25 },
	{ "lowFloat", &class_int, (intptr_t) &SF_arc_graphics_Gl_lowFloat, "I", 25 },
	{ "mediumFloat", &class_int, (intptr_t) &SF_arc_graphics_Gl_mediumFloat, "I", 25 },
	{ "highFloat", &class_int, (intptr_t) &SF_arc_graphics_Gl_highFloat, "I", 25 },
	{ "lowInt", &class_int, (intptr_t) &SF_arc_graphics_Gl_lowInt, "I", 25 },
	{ "mediumInt", &class_int, (intptr_t) &SF_arc_graphics_Gl_mediumInt, "I", 25 },
	{ "highInt", &class_int, (intptr_t) &SF_arc_graphics_Gl_highInt, "I", 25 },
	{ "framebuffer", &class_int, (intptr_t) &SF_arc_graphics_Gl_framebuffer, "I", 25 },
	{ "renderbuffer", &class_int, (intptr_t) &SF_arc_graphics_Gl_renderbuffer, "I", 25 },
	{ "rgba4", &class_int, (intptr_t) &SF_arc_graphics_Gl_rgba4, "I", 25 },
	{ "rgb5A1", &class_int, (intptr_t) &SF_arc_graphics_Gl_rgb5A1, "I", 25 },
	{ "rgb565", &class_int, (intptr_t) &SF_arc_graphics_Gl_rgb565, "I", 25 },
	{ "depthComponent16", &class_int, (intptr_t) &SF_arc_graphics_Gl_depthComponent16, "I", 25 },
	{ "stencilIndex", &class_int, (intptr_t) &SF_arc_graphics_Gl_stencilIndex, "I", 25 },
	{ "stencilIndex8", &class_int, (intptr_t) &SF_arc_graphics_Gl_stencilIndex8, "I", 25 },
	{ "renderbufferWidth", &class_int, (intptr_t) &SF_arc_graphics_Gl_renderbufferWidth, "I", 25 },
	{ "renderbufferHeight", &class_int, (intptr_t) &SF_arc_graphics_Gl_renderbufferHeight, "I", 25 },
	{ "renderbufferInternalFormat", &class_int, (intptr_t) &SF_arc_graphics_Gl_renderbufferInternalFormat, "I", 25 },
	{ "renderbufferRedSize", &class_int, (intptr_t) &SF_arc_graphics_Gl_renderbufferRedSize, "I", 25 },
	{ "renderbufferGreenSize", &class_int, (intptr_t) &SF_arc_graphics_Gl_renderbufferGreenSize, "I", 25 },
	{ "renderbufferBlueSize", &class_int, (intptr_t) &SF_arc_graphics_Gl_renderbufferBlueSize, "I", 25 },
	{ "renderbufferAlphaSize", &class_int, (intptr_t) &SF_arc_graphics_Gl_renderbufferAlphaSize, "I", 25 },
	{ "renderbufferDepthSize", &class_int, (intptr_t) &SF_arc_graphics_Gl_renderbufferDepthSize, "I", 25 },
	{ "renderbufferStencilSize", &class_int, (intptr_t) &SF_arc_graphics_Gl_renderbufferStencilSize, "I", 25 },
	{ "framebufferAttachmentObjectType", &class_int, (intptr_t) &SF_arc_graphics_Gl_framebufferAttachmentObjectType, "I", 25 },
	{ "framebufferAttachmentObjectName", &class_int, (intptr_t) &SF_arc_graphics_Gl_framebufferAttachmentObjectName, "I", 25 },
	{ "framebufferAttachmentTextureLevel", &class_int, (intptr_t) &SF_arc_graphics_Gl_framebufferAttachmentTextureLevel, "I", 25 },
	{ "framebufferAttachmentTextureCubeMapFace", &class_int, (intptr_t) &SF_arc_graphics_Gl_framebufferAttachmentTextureCubeMapFace, "I", 25 },
	{ "colorAttachment0", &class_int, (intptr_t) &SF_arc_graphics_Gl_colorAttachment0, "I", 25 },
	{ "depthAttachment", &class_int, (intptr_t) &SF_arc_graphics_Gl_depthAttachment, "I", 25 },
	{ "stencilAttachment", &class_int, (intptr_t) &SF_arc_graphics_Gl_stencilAttachment, "I", 25 },
	{ "none", &class_int, (intptr_t) &SF_arc_graphics_Gl_none, "I", 25 },
	{ "framebufferComplete", &class_int, (intptr_t) &SF_arc_graphics_Gl_framebufferComplete, "I", 25 },
	{ "framebufferIncompleteAttachment", &class_int, (intptr_t) &SF_arc_graphics_Gl_framebufferIncompleteAttachment, "I", 25 },
	{ "framebufferIncompleteMissingAttachment", &class_int, (intptr_t) &SF_arc_graphics_Gl_framebufferIncompleteMissingAttachment, "I", 25 },
	{ "framebufferIncompleteDimensions", &class_int, (intptr_t) &SF_arc_graphics_Gl_framebufferIncompleteDimensions, "I", 25 },
	{ "framebufferUnsupported", &class_int, (intptr_t) &SF_arc_graphics_Gl_framebufferUnsupported, "I", 25 },
	{ "framebufferBinding", &class_int, (intptr_t) &SF_arc_graphics_Gl_framebufferBinding, "I", 25 },
	{ "renderbufferBinding", &class_int, (intptr_t) &SF_arc_graphics_Gl_renderbufferBinding, "I", 25 },
	{ "maxRenderbufferSize", &class_int, (intptr_t) &SF_arc_graphics_Gl_maxRenderbufferSize, "I", 25 },
	{ "invalidFramebufferOperation", &class_int, (intptr_t) &SF_arc_graphics_Gl_invalidFramebufferOperation, "I", 25 },
	{ "programPointSize", &class_int, (intptr_t) &SF_arc_graphics_Gl_programPointSize, "I", 25 },
	{ "ibuf", &class_java_nio_IntBuffer, (intptr_t) &SF_arc_graphics_Gl_ibuf, "Ljava/nio/IntBuffer;", 10 },
	{ "fbuf", &class_java_nio_FloatBuffer, (intptr_t) &SF_arc_graphics_Gl_fbuf, "Ljava/nio/FloatBuffer;", 10 },
	{ "lastActiveTexture", &class_int, (intptr_t) &SF_arc_graphics_Gl_lastActiveTexture, "I", 10 },
	{ "lastBoundTextures", getArrayClass(&class_int, 1), (intptr_t) &SF_arc_graphics_Gl_lastBoundTextures, "[I", 10 },
	{ "lastUsedProgram", &class_int, (intptr_t) &SF_arc_graphics_Gl_lastUsedProgram, "I", 10 },
	{ "enabled", &class_arc_struct_Bits, (intptr_t) &SF_arc_graphics_Gl_enabled, "Larc/struct/Bits;", 10 },
	{ "wasDepthMask", &class_boolean, (intptr_t) &SF_arc_graphics_Gl_wasDepthMask, "Z", 10 },
	{ "lastBlendSrc", &class_int, (intptr_t) &SF_arc_graphics_Gl_lastBlendSrc, "I", 10 },
	{ "lastBlendDst", &class_int, (intptr_t) &SF_arc_graphics_Gl_lastBlendDst, "I", 10 },
	{ "lastBlendSrcAlpha", &class_int, (intptr_t) &SF_arc_graphics_Gl_lastBlendSrcAlpha, "I", 10 },
	{ "lastBlendDstAlpha", &class_int, (intptr_t) &SF_arc_graphics_Gl_lastBlendDstAlpha, "I", 10 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_graphics_Gl, 0, "()V", 1 },
	{ "reset", (intptr_t) SM_arc_graphics_Gl_reset, 0, "()V", 9 },
	{ "activeTexture", (intptr_t) SM_arc_graphics_Gl_activeTexture_int, 0, "(I)V", 9 },
	{ "bindTexture", (intptr_t) SM_arc_graphics_Gl_bindTexture_int_int, 0, "(II)V", 9 },
	{ "blendFunc", (intptr_t) SM_arc_graphics_Gl_blendFunc_int_int, 0, "(II)V", 9 },
	{ "clear", (intptr_t) SM_arc_graphics_Gl_clear_int, 0, "(I)V", 9 },
	{ "clearColor", (intptr_t) SM_arc_graphics_Gl_clearColor_float_float_float_float, 0, "(FFFF)V", 9 },
	{ "clearDepthf", (intptr_t) SM_arc_graphics_Gl_clearDepthf_float, 0, "(F)V", 9 },
	{ "clearStencil", (intptr_t) SM_arc_graphics_Gl_clearStencil_int, 0, "(I)V", 9 },
	{ "colorMask", (intptr_t) SM_arc_graphics_Gl_colorMask_boolean_boolean_boolean_boolean, 0, "(ZZZZ)V", 9 },
	{ "compressedTexImage2D", (intptr_t) SM_arc_graphics_Gl_compressedTexImage2D_int_int_int_int_int_int_int_java_nio_Buffer, 0, "(IIIIIIILjava/nio/Buffer;)V", 9 },
	{ "compressedTexSubImage2D", (intptr_t) SM_arc_graphics_Gl_compressedTexSubImage2D_int_int_int_int_int_int_int_int_java_nio_Buffer, 0, "(IIIIIIIILjava/nio/Buffer;)V", 9 },
	{ "copyTexImage2D", (intptr_t) SM_arc_graphics_Gl_copyTexImage2D_int_int_int_int_int_int_int_int, 0, "(IIIIIIII)V", 9 },
	{ "copyTexSubImage2D", (intptr_t) SM_arc_graphics_Gl_copyTexSubImage2D_int_int_int_int_int_int_int_int, 0, "(IIIIIIII)V", 9 },
	{ "cullFace", (intptr_t) SM_arc_graphics_Gl_cullFace_int, 0, "(I)V", 9 },
	{ "deleteTexture", (intptr_t) SM_arc_graphics_Gl_deleteTexture_int, 0, "(I)V", 9 },
	{ "depthFunc", (intptr_t) SM_arc_graphics_Gl_depthFunc_int, 0, "(I)V", 9 },
	{ "depthMask", (intptr_t) SM_arc_graphics_Gl_depthMask_boolean, 0, "(Z)V", 9 },
	{ "depthRangef", (intptr_t) SM_arc_graphics_Gl_depthRangef_float_float, 0, "(FF)V", 9 },
	{ "disable", (intptr_t) SM_arc_graphics_Gl_disable_int, 0, "(I)V", 9 },
	{ "drawArrays", (intptr_t) SM_arc_graphics_Gl_drawArrays_int_int_int, 0, "(III)V", 9 },
	{ "drawElements", (intptr_t) SM_arc_graphics_Gl_drawElements_int_int_int_java_nio_Buffer, 0, "(IIILjava/nio/Buffer;)V", 9 },
	{ "enable", (intptr_t) SM_arc_graphics_Gl_enable_int, 0, "(I)V", 9 },
	{ "finish", (intptr_t) SM_arc_graphics_Gl_finish, 0, "()V", 9 },
	{ "flush", (intptr_t) SM_arc_graphics_Gl_flush, 0, "()V", 9 },
	{ "frontFace", (intptr_t) SM_arc_graphics_Gl_frontFace_int, 0, "(I)V", 9 },
	{ "genTexture", (intptr_t) SM_arc_graphics_Gl_genTexture_R_int, 0, "()I", 9 },
	{ "getError", (intptr_t) SM_arc_graphics_Gl_getError_R_int, 0, "()I", 9 },
	{ "getIntegerv", (intptr_t) SM_arc_graphics_Gl_getIntegerv_int_java_nio_IntBuffer, 0, "(ILjava/nio/IntBuffer;)V", 9 },
	{ "getInt", (intptr_t) SM_arc_graphics_Gl_getInt_int_R_int, 0, "(I)I", 9 },
	{ "getFloat", (intptr_t) SM_arc_graphics_Gl_getFloat_int_R_float, 0, "(I)F", 9 },
	{ "getString", (intptr_t) SM_arc_graphics_Gl_getString_int_R_java_lang_String, 0, "(I)Ljava/lang/String;", 9 },
	{ "hint", (intptr_t) SM_arc_graphics_Gl_hint_int_int, 0, "(II)V", 9 },
	{ "pixelStorei", (intptr_t) SM_arc_graphics_Gl_pixelStorei_int_int, 0, "(II)V", 9 },
	{ "polygonOffset", (intptr_t) SM_arc_graphics_Gl_polygonOffset_float_float, 0, "(FF)V", 9 },
	{ "readPixels", (intptr_t) SM_arc_graphics_Gl_readPixels_int_int_int_int_int_int_java_nio_Buffer, 0, "(IIIIIILjava/nio/Buffer;)V", 9 },
	{ "scissor", (intptr_t) SM_arc_graphics_Gl_scissor_int_int_int_int, 0, "(IIII)V", 9 },
	{ "stencilFunc", (intptr_t) SM_arc_graphics_Gl_stencilFunc_int_int_int, 0, "(III)V", 9 },
	{ "stencilMask", (intptr_t) SM_arc_graphics_Gl_stencilMask_int, 0, "(I)V", 9 },
	{ "stencilOp", (intptr_t) SM_arc_graphics_Gl_stencilOp_int_int_int, 0, "(III)V", 9 },
	{ "texImage2D", (intptr_t) SM_arc_graphics_Gl_texImage2D_int_int_int_int_int_int_int_int_java_nio_Buffer, 0, "(IIIIIIIILjava/nio/Buffer;)V", 9 },
	{ "texParameterf", (intptr_t) SM_arc_graphics_Gl_texParameterf_int_int_float, 0, "(IIF)V", 9 },
	{ "texSubImage2D", (intptr_t) SM_arc_graphics_Gl_texSubImage2D_int_int_int_int_int_int_int_int_java_nio_Buffer, 0, "(IIIIIIIILjava/nio/Buffer;)V", 9 },
	{ "viewport", (intptr_t) SM_arc_graphics_Gl_viewport_int_int_int_int, 0, "(IIII)V", 9 },
	{ "attachShader", (intptr_t) SM_arc_graphics_Gl_attachShader_int_int, 0, "(II)V", 9 },
	{ "bindAttribLocation", (intptr_t) SM_arc_graphics_Gl_bindAttribLocation_int_int_java_lang_String, 0, "(IILjava/lang/String;)V", 9 },
	{ "bindBuffer", (intptr_t) SM_arc_graphics_Gl_bindBuffer_int_int, 0, "(II)V", 9 },
	{ "bindFramebuffer", (intptr_t) SM_arc_graphics_Gl_bindFramebuffer_int_int, 0, "(II)V", 9 },
	{ "bindRenderbuffer", (intptr_t) SM_arc_graphics_Gl_bindRenderbuffer_int_int, 0, "(II)V", 9 },
	{ "blendColor", (intptr_t) SM_arc_graphics_Gl_blendColor_float_float_float_float, 0, "(FFFF)V", 9 },
	{ "blendEquation", (intptr_t) SM_arc_graphics_Gl_blendEquation_int, 0, "(I)V", 9 },
	{ "blendEquationSeparate", (intptr_t) SM_arc_graphics_Gl_blendEquationSeparate_int_int, 0, "(II)V", 9 },
	{ "blendFuncSeparate", (intptr_t) SM_arc_graphics_Gl_blendFuncSeparate_int_int_int_int, 0, "(IIII)V", 9 },
	{ "bufferData", (intptr_t) SM_arc_graphics_Gl_bufferData_int_int_java_nio_Buffer_int, 0, "(IILjava/nio/Buffer;I)V", 9 },
	{ "bufferSubData", (intptr_t) SM_arc_graphics_Gl_bufferSubData_int_int_int_java_nio_Buffer, 0, "(IIILjava/nio/Buffer;)V", 9 },
	{ "checkFramebufferStatus", (intptr_t) SM_arc_graphics_Gl_checkFramebufferStatus_int_R_int, 0, "(I)I", 9 },
	{ "compileShader", (intptr_t) SM_arc_graphics_Gl_compileShader_int, 0, "(I)V", 9 },
	{ "createProgram", (intptr_t) SM_arc_graphics_Gl_createProgram_R_int, 0, "()I", 9 },
	{ "createShader", (intptr_t) SM_arc_graphics_Gl_createShader_int_R_int, 0, "(I)I", 9 },
	{ "deleteBuffer", (intptr_t) SM_arc_graphics_Gl_deleteBuffer_int, 0, "(I)V", 9 },
	{ "deleteFramebuffer", (intptr_t) SM_arc_graphics_Gl_deleteFramebuffer_int, 0, "(I)V", 9 },
	{ "deleteProgram", (intptr_t) SM_arc_graphics_Gl_deleteProgram_int, 0, "(I)V", 9 },
	{ "deleteRenderbuffer", (intptr_t) SM_arc_graphics_Gl_deleteRenderbuffer_int, 0, "(I)V", 9 },
	{ "deleteShader", (intptr_t) SM_arc_graphics_Gl_deleteShader_int, 0, "(I)V", 9 },
	{ "detachShader", (intptr_t) SM_arc_graphics_Gl_detachShader_int_int, 0, "(II)V", 9 },
	{ "disableVertexAttribArray", (intptr_t) SM_arc_graphics_Gl_disableVertexAttribArray_int, 0, "(I)V", 9 },
	{ "drawElements", (intptr_t) SM_arc_graphics_Gl_drawElements_int_int_int_int, 0, "(IIII)V", 9 },
	{ "enableVertexAttribArray", (intptr_t) SM_arc_graphics_Gl_enableVertexAttribArray_int, 0, "(I)V", 9 },
	{ "framebufferRenderbuffer", (intptr_t) SM_arc_graphics_Gl_framebufferRenderbuffer_int_int_int_int, 0, "(IIII)V", 9 },
	{ "framebufferTexture2D", (intptr_t) SM_arc_graphics_Gl_framebufferTexture2D_int_int_int_int_int, 0, "(IIIII)V", 9 },
	{ "genBuffer", (intptr_t) SM_arc_graphics_Gl_genBuffer_R_int, 0, "()I", 9 },
	{ "generateMipmap", (intptr_t) SM_arc_graphics_Gl_generateMipmap_int, 0, "(I)V", 9 },
	{ "genFramebuffer", (intptr_t) SM_arc_graphics_Gl_genFramebuffer_R_int, 0, "()I", 9 },
	{ "genRenderbuffer", (intptr_t) SM_arc_graphics_Gl_genRenderbuffer_R_int, 0, "()I", 9 },
	{ "getActiveAttrib", (intptr_t) SM_arc_graphics_Gl_getActiveAttrib_int_int_java_nio_IntBuffer_java_nio_IntBuffer_R_java_lang_String, 0, "(IILjava/nio/IntBuffer;Ljava/nio/IntBuffer;)Ljava/lang/String;", 9 },
	{ "getActiveUniform", (intptr_t) SM_arc_graphics_Gl_getActiveUniform_int_int_java_nio_IntBuffer_java_nio_IntBuffer_R_java_lang_String, 0, "(IILjava/nio/IntBuffer;Ljava/nio/IntBuffer;)Ljava/lang/String;", 9 },
	{ "getAttribLocation", (intptr_t) SM_arc_graphics_Gl_getAttribLocation_int_java_lang_String_R_int, 0, "(ILjava/lang/String;)I", 9 },
	{ "getBooleanv", (intptr_t) SM_arc_graphics_Gl_getBooleanv_int_java_nio_Buffer, 0, "(ILjava/nio/Buffer;)V", 9 },
	{ "getBufferParameteriv", (intptr_t) SM_arc_graphics_Gl_getBufferParameteriv_int_int_java_nio_IntBuffer, 0, "(IILjava/nio/IntBuffer;)V", 9 },
	{ "getFloatv", (intptr_t) SM_arc_graphics_Gl_getFloatv_int_java_nio_FloatBuffer, 0, "(ILjava/nio/FloatBuffer;)V", 9 },
	{ "getFramebufferAttachmentParameteriv", (intptr_t) SM_arc_graphics_Gl_getFramebufferAttachmentParameteriv_int_int_int_java_nio_IntBuffer, 0, "(IIILjava/nio/IntBuffer;)V", 9 },
	{ "getProgramiv", (intptr_t) SM_arc_graphics_Gl_getProgramiv_int_int_java_nio_IntBuffer, 0, "(IILjava/nio/IntBuffer;)V", 9 },
	{ "getProgramInfoLog", (intptr_t) SM_arc_graphics_Gl_getProgramInfoLog_int_R_java_lang_String, 0, "(I)Ljava/lang/String;", 9 },
	{ "getRenderbufferParameteriv", (intptr_t) SM_arc_graphics_Gl_getRenderbufferParameteriv_int_int_java_nio_IntBuffer, 0, "(IILjava/nio/IntBuffer;)V", 9 },
	{ "getShaderiv", (intptr_t) SM_arc_graphics_Gl_getShaderiv_int_int_java_nio_IntBuffer, 0, "(IILjava/nio/IntBuffer;)V", 9 },
	{ "getShaderInfoLog", (intptr_t) SM_arc_graphics_Gl_getShaderInfoLog_int_R_java_lang_String, 0, "(I)Ljava/lang/String;", 9 },
	{ "getShaderPrecisionFormat", (intptr_t) SM_arc_graphics_Gl_getShaderPrecisionFormat_int_int_java_nio_IntBuffer_java_nio_IntBuffer, 0, "(IILjava/nio/IntBuffer;Ljava/nio/IntBuffer;)V", 9 },
	{ "getTexParameterfv", (intptr_t) SM_arc_graphics_Gl_getTexParameterfv_int_int_java_nio_FloatBuffer, 0, "(IILjava/nio/FloatBuffer;)V", 9 },
	{ "getTexParameteriv", (intptr_t) SM_arc_graphics_Gl_getTexParameteriv_int_int_java_nio_IntBuffer, 0, "(IILjava/nio/IntBuffer;)V", 9 },
	{ "getUniformfv", (intptr_t) SM_arc_graphics_Gl_getUniformfv_int_int_java_nio_FloatBuffer, 0, "(IILjava/nio/FloatBuffer;)V", 9 },
	{ "getUniformiv", (intptr_t) SM_arc_graphics_Gl_getUniformiv_int_int_java_nio_IntBuffer, 0, "(IILjava/nio/IntBuffer;)V", 9 },
	{ "getUniformLocation", (intptr_t) SM_arc_graphics_Gl_getUniformLocation_int_java_lang_String_R_int, 0, "(ILjava/lang/String;)I", 9 },
	{ "getVertexAttribfv", (intptr_t) SM_arc_graphics_Gl_getVertexAttribfv_int_int_java_nio_FloatBuffer, 0, "(IILjava/nio/FloatBuffer;)V", 9 },
	{ "getVertexAttribiv", (intptr_t) SM_arc_graphics_Gl_getVertexAttribiv_int_int_java_nio_IntBuffer, 0, "(IILjava/nio/IntBuffer;)V", 9 },
	{ "isBuffer", (intptr_t) SM_arc_graphics_Gl_isBuffer_int_R_boolean, 0, "(I)Z", 9 },
	{ "isEnabled", (intptr_t) SM_arc_graphics_Gl_isEnabled_int_R_boolean, 0, "(I)Z", 9 },
	{ "isFramebuffer", (intptr_t) SM_arc_graphics_Gl_isFramebuffer_int_R_boolean, 0, "(I)Z", 9 },
	{ "isProgram", (intptr_t) SM_arc_graphics_Gl_isProgram_int_R_boolean, 0, "(I)Z", 9 },
	{ "isRenderbuffer", (intptr_t) SM_arc_graphics_Gl_isRenderbuffer_int_R_boolean, 0, "(I)Z", 9 },
	{ "isShader", (intptr_t) SM_arc_graphics_Gl_isShader_int_R_boolean, 0, "(I)Z", 9 },
	{ "isTexture", (intptr_t) SM_arc_graphics_Gl_isTexture_int_R_boolean, 0, "(I)Z", 9 },
	{ "linkProgram", (intptr_t) SM_arc_graphics_Gl_linkProgram_int, 0, "(I)V", 9 },
	{ "releaseShaderCompiler", (intptr_t) SM_arc_graphics_Gl_releaseShaderCompiler, 0, "()V", 9 },
	{ "renderbufferStorage", (intptr_t) SM_arc_graphics_Gl_renderbufferStorage_int_int_int_int, 0, "(IIII)V", 9 },
	{ "sampleCoverage", (intptr_t) SM_arc_graphics_Gl_sampleCoverage_float_boolean, 0, "(FZ)V", 9 },
	{ "shaderSource", (intptr_t) SM_arc_graphics_Gl_shaderSource_int_java_lang_String, 0, "(ILjava/lang/String;)V", 9 },
	{ "stencilFuncSeparate", (intptr_t) SM_arc_graphics_Gl_stencilFuncSeparate_int_int_int_int, 0, "(IIII)V", 9 },
	{ "stencilMaskSeparate", (intptr_t) SM_arc_graphics_Gl_stencilMaskSeparate_int_int, 0, "(II)V", 9 },
	{ "stencilOpSeparate", (intptr_t) SM_arc_graphics_Gl_stencilOpSeparate_int_int_int_int, 0, "(IIII)V", 9 },
	{ "texParameterfv", (intptr_t) SM_arc_graphics_Gl_texParameterfv_int_int_java_nio_FloatBuffer, 0, "(IILjava/nio/FloatBuffer;)V", 9 },
	{ "texParameteri", (intptr_t) SM_arc_graphics_Gl_texParameteri_int_int_int, 0, "(III)V", 9 },
	{ "texParameteriv", (intptr_t) SM_arc_graphics_Gl_texParameteriv_int_int_java_nio_IntBuffer, 0, "(IILjava/nio/IntBuffer;)V", 9 },
	{ "uniform1f", (intptr_t) SM_arc_graphics_Gl_uniform1f_int_float, 0, "(IF)V", 9 },
	{ "uniform1fv", (intptr_t) SM_arc_graphics_Gl_uniform1fv_int_int_java_nio_FloatBuffer, 0, "(IILjava/nio/FloatBuffer;)V", 9 },
	{ "uniform1fv", (intptr_t) SM_arc_graphics_Gl_uniform1fv_int_int_Array1_float_int, 0, "(II[FI)V", 9 },
	{ "uniform1i", (intptr_t) SM_arc_graphics_Gl_uniform1i_int_int, 0, "(II)V", 9 },
	{ "uniform1iv", (intptr_t) SM_arc_graphics_Gl_uniform1iv_int_int_java_nio_IntBuffer, 0, "(IILjava/nio/IntBuffer;)V", 9 },
	{ "uniform1iv", (intptr_t) SM_arc_graphics_Gl_uniform1iv_int_int_Array1_int_int, 0, "(II[II)V", 9 },
	{ "uniform2f", (intptr_t) SM_arc_graphics_Gl_uniform2f_int_float_float, 0, "(IFF)V", 9 },
	{ "uniform2fv", (intptr_t) SM_arc_graphics_Gl_uniform2fv_int_int_java_nio_FloatBuffer, 0, "(IILjava/nio/FloatBuffer;)V", 9 },
	{ "uniform2fv", (intptr_t) SM_arc_graphics_Gl_uniform2fv_int_int_Array1_float_int, 0, "(II[FI)V", 9 },
	{ "uniform2i", (intptr_t) SM_arc_graphics_Gl_uniform2i_int_int_int, 0, "(III)V", 9 },
	{ "uniform2iv", (intptr_t) SM_arc_graphics_Gl_uniform2iv_int_int_java_nio_IntBuffer, 0, "(IILjava/nio/IntBuffer;)V", 9 },
	{ "uniform2iv", (intptr_t) SM_arc_graphics_Gl_uniform2iv_int_int_Array1_int_int, 0, "(II[II)V", 9 },
	{ "uniform3f", (intptr_t) SM_arc_graphics_Gl_uniform3f_int_float_float_float, 0, "(IFFF)V", 9 },
	{ "uniform3fv", (intptr_t) SM_arc_graphics_Gl_uniform3fv_int_int_java_nio_FloatBuffer, 0, "(IILjava/nio/FloatBuffer;)V", 9 },
	{ "uniform3fv", (intptr_t) SM_arc_graphics_Gl_uniform3fv_int_int_Array1_float_int, 0, "(II[FI)V", 9 },
	{ "uniform3i", (intptr_t) SM_arc_graphics_Gl_uniform3i_int_int_int_int, 0, "(IIII)V", 9 },
	{ "uniform3iv", (intptr_t) SM_arc_graphics_Gl_uniform3iv_int_int_java_nio_IntBuffer, 0, "(IILjava/nio/IntBuffer;)V", 9 },
	{ "uniform3iv", (intptr_t) SM_arc_graphics_Gl_uniform3iv_int_int_Array1_int_int, 0, "(II[II)V", 9 },
	{ "uniform4f", (intptr_t) SM_arc_graphics_Gl_uniform4f_int_float_float_float_float, 0, "(IFFFF)V", 9 },
	{ "uniform4fv", (intptr_t) SM_arc_graphics_Gl_uniform4fv_int_int_java_nio_FloatBuffer, 0, "(IILjava/nio/FloatBuffer;)V", 9 },
	{ "uniform4fv", (intptr_t) SM_arc_graphics_Gl_uniform4fv_int_int_Array1_float_int, 0, "(II[FI)V", 9 },
	{ "uniform4i", (intptr_t) SM_arc_graphics_Gl_uniform4i_int_int_int_int_int, 0, "(IIIII)V", 9 },
	{ "uniform4iv", (intptr_t) SM_arc_graphics_Gl_uniform4iv_int_int_java_nio_IntBuffer, 0, "(IILjava/nio/IntBuffer;)V", 9 },
	{ "uniform4iv", (intptr_t) SM_arc_graphics_Gl_uniform4iv_int_int_Array1_int_int, 0, "(II[II)V", 9 },
	{ "uniformMatrix2fv", (intptr_t) SM_arc_graphics_Gl_uniformMatrix2fv_int_int_boolean_java_nio_FloatBuffer, 0, "(IIZLjava/nio/FloatBuffer;)V", 9 },
	{ "uniformMatrix2fv", (intptr_t) SM_arc_graphics_Gl_uniformMatrix2fv_int_int_boolean_Array1_float_int, 0, "(IIZ[FI)V", 9 },
	{ "uniformMatrix3fv", (intptr_t) SM_arc_graphics_Gl_uniformMatrix3fv_int_int_boolean_java_nio_FloatBuffer, 0, "(IIZLjava/nio/FloatBuffer;)V", 9 },
	{ "uniformMatrix3fv", (intptr_t) SM_arc_graphics_Gl_uniformMatrix3fv_int_int_boolean_Array1_float_int, 0, "(IIZ[FI)V", 9 },
	{ "uniformMatrix4fv", (intptr_t) SM_arc_graphics_Gl_uniformMatrix4fv_int_int_boolean_java_nio_FloatBuffer, 0, "(IIZLjava/nio/FloatBuffer;)V", 9 },
	{ "uniformMatrix4fv", (intptr_t) SM_arc_graphics_Gl_uniformMatrix4fv_int_int_boolean_Array1_float_int, 0, "(IIZ[FI)V", 9 },
	{ "useProgram", (intptr_t) SM_arc_graphics_Gl_useProgram_int, 0, "(I)V", 9 },
	{ "validateProgram", (intptr_t) SM_arc_graphics_Gl_validateProgram_int, 0, "(I)V", 9 },
	{ "vertexAttrib1f", (intptr_t) SM_arc_graphics_Gl_vertexAttrib1f_int_float, 0, "(IF)V", 9 },
	{ "vertexAttrib1fv", (intptr_t) SM_arc_graphics_Gl_vertexAttrib1fv_int_java_nio_FloatBuffer, 0, "(ILjava/nio/FloatBuffer;)V", 9 },
	{ "vertexAttrib2f", (intptr_t) SM_arc_graphics_Gl_vertexAttrib2f_int_float_float, 0, "(IFF)V", 9 },
	{ "vertexAttrib2fv", (intptr_t) SM_arc_graphics_Gl_vertexAttrib2fv_int_java_nio_FloatBuffer, 0, "(ILjava/nio/FloatBuffer;)V", 9 },
	{ "vertexAttrib3f", (intptr_t) SM_arc_graphics_Gl_vertexAttrib3f_int_float_float_float, 0, "(IFFF)V", 9 },
	{ "vertexAttrib3fv", (intptr_t) SM_arc_graphics_Gl_vertexAttrib3fv_int_java_nio_FloatBuffer, 0, "(ILjava/nio/FloatBuffer;)V", 9 },
	{ "vertexAttrib4f", (intptr_t) SM_arc_graphics_Gl_vertexAttrib4f_int_float_float_float_float, 0, "(IFFFF)V", 9 },
	{ "vertexAttrib4fv", (intptr_t) SM_arc_graphics_Gl_vertexAttrib4fv_int_java_nio_FloatBuffer, 0, "(ILjava/nio/FloatBuffer;)V", 9 },
	{ "vertexAttribPointer", (intptr_t) SM_arc_graphics_Gl_vertexAttribPointer_int_int_int_boolean_int_java_nio_Buffer, 0, "(IIIZILjava/nio/Buffer;)V", 9 },
	{ "vertexAttribPointer", (intptr_t) SM_arc_graphics_Gl_vertexAttribPointer_int_int_int_boolean_int_int, 0, "(IIIZII)V", 9 },
	{ "<clinit>", (intptr_t) clinit_arc_graphics_Gl, 0, "()V", 8 },
};

Class class_arc_graphics_Gl{
		.nativeName = (intptr_t) "arc/graphics/Gl",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_graphics_Gl),
		.classVtable = (intptr_t) vtable_arc_graphics_Gl,
		.staticInitializer = (intptr_t) clinit_arc_graphics_Gl,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_graphics_Gl,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 320,
		.nativeFields = (intptr_t) fields,
		.methodCount = 155,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_graphics_Gl = registerClass(&class_arc_graphics_Gl);

}
