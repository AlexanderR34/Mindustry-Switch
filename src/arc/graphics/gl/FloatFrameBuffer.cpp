#include "arc/graphics/gl/FloatFrameBuffer.h"
#include "arc/graphics/TextureData.h"
#include "arc/graphics/GLTexture.h"
#include "arc/graphics/gl/FrameBuffer.h"
#include "arc/Core.h"
#include "arc/util/Disposable.h"
#include "arc/graphics/gl/FloatTextureData.h"
#include "java/lang/IllegalArgumentException.h"
#include "arc/graphics/gl/GLFrameBuffer_FloatFrameBufferBuilder.h"
#include "arc/graphics/Texture.h"
#include "arc/graphics/gl/FloatFrameBuffer.h"
#include "arc/Application.h"
#include "arc/graphics/gl/GLFrameBuffer_GLFrameBufferBuilder.h"
#include "arc/graphics/Pixmap_Format.h"
#include "arc/graphics/gl/GLFrameBuffer.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/graphics/Texture_TextureFilter.h"
#include "arc/graphics/Texture_TextureWrap.h"
#include "arc/graphics/gl/GLFrameBuffer_FrameBufferTextureAttachmentSpec.h"

extern "C" {


void mark_arc_graphics_gl_FloatFrameBuffer(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_graphics_gl_FrameBuffer(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (arc_graphics_gl_FloatFrameBuffer *) object;
}

void clinit_arc_graphics_gl_FloatFrameBuffer(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_graphics_gl_FrameBuffer(ctx);
}

void init_arc_graphics_gl_FloatFrameBuffer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/FloatFrameBuffer:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_gl_FloatFrameBuffer(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(11);
	init_arc_graphics_gl_FrameBuffer(ctx, (frame[0].o));
	LINE_NUMBER(12);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_graphics_gl_FloatFrameBuffer_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/FloatFrameBuffer:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_gl_FloatFrameBuffer(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(18);
	init_arc_graphics_gl_FrameBuffer_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(19);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_graphics_gl_FloatFrameBuffer_int_int_boolean(jcontext ctx, jobject self, jint param0, jint param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/FloatFrameBuffer:<init>", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_gl_FloatFrameBuffer(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(28);
	init_arc_graphics_gl_FrameBuffer(ctx, (frame[0].o));
	LINE_NUMBER(29);
	clinit_arc_graphics_gl_GLFrameBuffer$FloatFrameBufferBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_gl_GLFrameBuffer$FloatFrameBufferBuilder);
	init_arc_graphics_gl_GLFrameBuffer$FloatFrameBufferBuilder_int_int(ctx, sp[0].o, (frame[1].i), (frame[2].i));
	frame[4].o = sp[0].o;
	LINE_NUMBER(30);
	sp[0].o = (jobject)((func_arc_graphics_gl_GLFrameBuffer$FloatFrameBufferBuilder_addFloatAttachment_int_int_int_boolean_R_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_graphics_gl_GLFrameBuffer$FloatFrameBufferBuilder_addFloatAttachment_int_int_int_boolean_R_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder])(ctx, (frame[4].o), (jint(34836)), (6408), (5126), (jint(0)));
	LINE_NUMBER(31);
	if ((frame[3].i) == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_arc_graphics_gl_GLFrameBuffer$FloatFrameBufferBuilder_addBasicDepthRenderBuffer_R_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_graphics_gl_GLFrameBuffer$FloatFrameBufferBuilder_addBasicDepthRenderBuffer_R_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder])(ctx, (frame[4].o));
	}
label_4:;
	{
	LINE_NUMBER(32);
	((arc_graphics_gl_GLFrameBuffer *) NULL_CHECK((frame[0].o)))->F_bufferBuilder = (jref) (frame[4].o);
	LINE_NUMBER(34);
	((func_arc_graphics_gl_FloatFrameBuffer_build) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_gl_FloatFrameBuffer_build])(ctx, (frame[0].o));
	LINE_NUMBER(35);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_gl_FloatFrameBuffer_create_arc_graphics_Pixmap$Format_int_int_boolean_boolean(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jbool param3, jbool param4) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/FloatFrameBuffer:create", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	LINE_NUMBER(40);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_graphics_gl_FloatFrameBuffer_resize_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/FloatFrameBuffer:resize", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(44);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"resize() is currently unsupported here."_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_gl_FloatFrameBuffer_createTexture_arc_graphics_gl_GLFrameBuffer$FrameBufferTextureAttachmentSpec_R_arc_graphics_Texture(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/FloatFrameBuffer:createTexture", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(49);
	clinit_arc_graphics_gl_FloatTextureData(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_gl_FloatTextureData);
	sp[1].o = (jobject)((arc_graphics_gl_GLFrameBuffer *) NULL_CHECK((frame[0].o)))->F_bufferBuilder;
	jint temp0 = (jint)((arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder *) NULL_CHECK(sp[1].o))->F_width;
	sp[1].o = (jobject)((arc_graphics_gl_GLFrameBuffer *) NULL_CHECK((frame[0].o)))->F_bufferBuilder;
	init_arc_graphics_gl_FloatTextureData_int_int_int_int_int_boolean(ctx, sp[0].o, temp0, ((jint)((arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder *) NULL_CHECK(sp[1].o))->F_height), ((jint)((arc_graphics_gl_GLFrameBuffer$FrameBufferTextureAttachmentSpec *) NULL_CHECK((frame[1].o)))->F_internalFormat), ((jint)((arc_graphics_gl_GLFrameBuffer$FrameBufferTextureAttachmentSpec *) NULL_CHECK((frame[1].o)))->F_format), ((jint)((arc_graphics_gl_GLFrameBuffer$FrameBufferTextureAttachmentSpec *) NULL_CHECK((frame[1].o)))->F_type), ((jint)((arc_graphics_gl_GLFrameBuffer$FrameBufferTextureAttachmentSpec *) NULL_CHECK((frame[1].o)))->F_isGpuOnly));
	frame[2].o = sp[0].o;
	LINE_NUMBER(54);
	clinit_arc_graphics_Texture(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Texture);
	init_arc_graphics_Texture_arc_graphics_TextureData(ctx, sp[0].o, (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(55);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	jint temp1 = (jint)((func_arc_Application_isDesktop_R_boolean) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_isDesktop_R_boolean, sp[0].o))(ctx, sp[0].o);
	if (temp1 == 0) goto label_3;
	}
	{
	LINE_NUMBER(56);
	sp[0].o = frame[3].o;
	clinit_arc_graphics_Texture$TextureFilter(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Texture$TextureFilter_linear;
	clinit_arc_graphics_Texture$TextureFilter(ctx);
	sp[2].o = (jobject)SF_arc_graphics_Texture$TextureFilter_linear;
	((func_arc_graphics_Texture_setFilter_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Texture_setFilter_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter])(ctx, sp[0].o, sp[1].o, sp[2].o);
	goto label_5;
	}
label_3:;
	{
	LINE_NUMBER(59);
	sp[0].o = frame[3].o;
	clinit_arc_graphics_Texture$TextureFilter(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Texture$TextureFilter_nearest;
	clinit_arc_graphics_Texture$TextureFilter(ctx);
	sp[2].o = (jobject)SF_arc_graphics_Texture$TextureFilter_nearest;
	((func_arc_graphics_Texture_setFilter_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Texture_setFilter_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_5:;
	{
	LINE_NUMBER(60);
	sp[0].o = frame[3].o;
	clinit_arc_graphics_Texture$TextureWrap(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Texture$TextureWrap_clampToEdge;
	clinit_arc_graphics_Texture$TextureWrap(ctx);
	sp[2].o = (jobject)SF_arc_graphics_Texture$TextureWrap_clampToEdge;
	((func_arc_graphics_Texture_setWrap_arc_graphics_Texture$TextureWrap_arc_graphics_Texture$TextureWrap) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Texture_setWrap_arc_graphics_Texture$TextureWrap_arc_graphics_Texture$TextureWrap])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(61);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_gl_FloatFrameBuffer_createTexture_arc_graphics_gl_GLFrameBuffer$FrameBufferTextureAttachmentSpec_R_arc_graphics_GLTexture(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/FloatFrameBuffer:createTexture", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(9);
	sp[0].o = (jobject)((func_arc_graphics_gl_FloatFrameBuffer_createTexture_arc_graphics_gl_GLFrameBuffer$FrameBufferTextureAttachmentSpec_R_arc_graphics_Texture) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_gl_FloatFrameBuffer_createTexture_arc_graphics_gl_GLFrameBuffer$FrameBufferTextureAttachmentSpec_R_arc_graphics_Texture])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_arc_graphics_gl_FloatFrameBuffer[] {
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
	(void *) M_arc_graphics_gl_GLFrameBuffer_dispose,
	(void *) M_arc_util_Disposable_isDisposed_R_boolean,
	(void *) M_arc_graphics_gl_GLFrameBuffer_getTexture_R_arc_graphics_GLTexture,
	(void *) M_arc_graphics_gl_GLFrameBuffer_getTextureAttachments_R_arc_struct_Seq,
	(void *) M_arc_graphics_gl_FloatFrameBuffer_createTexture_arc_graphics_gl_GLFrameBuffer$FrameBufferTextureAttachmentSpec_R_arc_graphics_GLTexture,
	(void *) M_arc_graphics_gl_FrameBuffer_disposeTexture_arc_graphics_GLTexture,
	(void *) M_arc_graphics_gl_FrameBuffer_attachTexture_int_arc_graphics_GLTexture,
	(void *) M_arc_graphics_gl_GLFrameBuffer_build,
	(void *) M_arc_graphics_gl_GLFrameBuffer_checkValidBuilder,
	(void *) M_arc_graphics_gl_GLFrameBuffer_bind,
	(void *) M_arc_graphics_gl_GLFrameBuffer_isBound_R_boolean,
	(void *) M_arc_graphics_gl_GLFrameBuffer_begin_arc_graphics_Color,
	(void *) M_arc_graphics_gl_GLFrameBuffer_begin,
	(void *) M_arc_graphics_gl_GLFrameBuffer_beginBind,
	(void *) M_arc_graphics_gl_GLFrameBuffer_setFrameBufferViewport,
	(void *) M_arc_graphics_gl_GLFrameBuffer_end,
	(void *) M_arc_graphics_gl_GLFrameBuffer_endBind,
	(void *) M_arc_graphics_gl_GLFrameBuffer_getFramebufferHandle_R_int,
	(void *) M_arc_graphics_gl_GLFrameBuffer_getDepthBufferHandle_R_int,
	(void *) M_arc_graphics_gl_GLFrameBuffer_getStencilBufferHandle_R_int,
	(void *) M_arc_graphics_gl_GLFrameBuffer_getDepthStencilPackedBuffer_R_int,
	(void *) M_arc_graphics_gl_GLFrameBuffer_getHeight_R_int,
	(void *) M_arc_graphics_gl_GLFrameBuffer_getWidth_R_int,
	(void *) M_arc_graphics_gl_FloatFrameBuffer_create_arc_graphics_Pixmap$Format_int_int_boolean_boolean,
	(void *) M_arc_graphics_gl_FrameBuffer_blit_arc_graphics_gl_Shader,
	(void *) M_arc_graphics_gl_FrameBuffer_resizeCheck_int_int_R_boolean,
	(void *) M_arc_graphics_gl_FloatFrameBuffer_resize_int_int,
	(void *) M_arc_graphics_gl_FloatFrameBuffer_createTexture_arc_graphics_gl_GLFrameBuffer$FrameBufferTextureAttachmentSpec_R_arc_graphics_Texture,
	(void *) M_arc_graphics_gl_FrameBuffer_disposeTexture_arc_graphics_Texture,
	(void *) M_arc_graphics_gl_FrameBuffer_attachTexture_int_arc_graphics_Texture,
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
	{ "dispose", "()V" },
	{ "isDisposed", "()Z" },
	{ "getTexture", "()Larc/graphics/GLTexture;" },
	{ "getTextureAttachments", "()Larc/struct/Seq;" },
	{ "createTexture", "(Larc/graphics/gl/GLFrameBuffer$FrameBufferTextureAttachmentSpec;)Larc/graphics/GLTexture;" },
	{ "disposeTexture", "(Larc/graphics/GLTexture;)V" },
	{ "attachTexture", "(ILarc/graphics/GLTexture;)V" },
	{ "build", "()V" },
	{ "checkValidBuilder", "()V" },
	{ "bind", "()V" },
	{ "isBound", "()Z" },
	{ "begin", "(Larc/graphics/Color;)V" },
	{ "begin", "()V" },
	{ "beginBind", "()V" },
	{ "setFrameBufferViewport", "()V" },
	{ "end", "()V" },
	{ "endBind", "()V" },
	{ "getFramebufferHandle", "()I" },
	{ "getDepthBufferHandle", "()I" },
	{ "getStencilBufferHandle", "()I" },
	{ "getDepthStencilPackedBuffer", "()I" },
	{ "getHeight", "()I" },
	{ "getWidth", "()I" },
	{ "create", "(Larc/graphics/Pixmap$Format;IIZZ)V" },
	{ "blit", "(Larc/graphics/gl/Shader;)V" },
	{ "resizeCheck", "(II)Z" },
	{ "resize", "(II)V" },
	{ "createTexture", "(Larc/graphics/gl/GLFrameBuffer$FrameBufferTextureAttachmentSpec;)Larc/graphics/Texture;" },
	{ "disposeTexture", "(Larc/graphics/Texture;)V" },
	{ "attachTexture", "(ILarc/graphics/Texture;)V" },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_graphics_gl_FloatFrameBuffer, 0, "()V", 0 },
	{ "<init>", (intptr_t) init_arc_graphics_gl_FloatFrameBuffer_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder, 0, "(Larc/graphics/gl/GLFrameBuffer$GLFrameBufferBuilder;)V", 4 },
	{ "<init>", (intptr_t) init_arc_graphics_gl_FloatFrameBuffer_int_int_boolean, 0, "(IIZ)V", 1 },
	{ "create", (intptr_t) M_arc_graphics_gl_FloatFrameBuffer_create_arc_graphics_Pixmap$Format_int_int_boolean_boolean, VTABLE_arc_graphics_gl_FloatFrameBuffer_create_arc_graphics_Pixmap$Format_int_int_boolean_boolean, "(Larc/graphics/Pixmap$Format;IIZZ)V", 4 },
	{ "resize", (intptr_t) M_arc_graphics_gl_FloatFrameBuffer_resize_int_int, VTABLE_arc_graphics_gl_FloatFrameBuffer_resize_int_int, "(II)V", 1 },
	{ "createTexture", (intptr_t) M_arc_graphics_gl_FloatFrameBuffer_createTexture_arc_graphics_gl_GLFrameBuffer$FrameBufferTextureAttachmentSpec_R_arc_graphics_Texture, VTABLE_arc_graphics_gl_FloatFrameBuffer_createTexture_arc_graphics_gl_GLFrameBuffer$FrameBufferTextureAttachmentSpec_R_arc_graphics_Texture, "(Larc/graphics/gl/GLFrameBuffer$FrameBufferTextureAttachmentSpec;)Larc/graphics/Texture;", 4 },
	{ "createTexture", (intptr_t) M_arc_graphics_gl_FloatFrameBuffer_createTexture_arc_graphics_gl_GLFrameBuffer$FrameBufferTextureAttachmentSpec_R_arc_graphics_GLTexture, VTABLE_arc_graphics_gl_FloatFrameBuffer_createTexture_arc_graphics_gl_GLFrameBuffer$FrameBufferTextureAttachmentSpec_R_arc_graphics_GLTexture, "(Larc/graphics/gl/GLFrameBuffer$FrameBufferTextureAttachmentSpec;)Larc/graphics/GLTexture;", 4164 },
};

Class class_arc_graphics_gl_FloatFrameBuffer{
		.nativeName = (intptr_t) "arc/graphics/gl/FloatFrameBuffer",
		.parentClass = (intptr_t) &class_arc_graphics_gl_FrameBuffer,
		.size = sizeof(arc_graphics_gl_FloatFrameBuffer),
		.classVtable = (intptr_t) vtable_arc_graphics_gl_FloatFrameBuffer,
		.staticInitializer = (intptr_t) clinit_arc_graphics_gl_FloatFrameBuffer,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_graphics_gl_FloatFrameBuffer,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 7,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 41,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_graphics_gl_FloatFrameBuffer = registerClass(&class_arc_graphics_gl_FloatFrameBuffer);

}
