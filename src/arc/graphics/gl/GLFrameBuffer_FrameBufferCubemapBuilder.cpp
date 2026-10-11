#include "arc/graphics/gl/GLFrameBuffer_FrameBufferCubemapBuilder.h"
#include "arc/graphics/gl/GLFrameBuffer.h"
#include "java/lang/Object.h"
#include "arc/graphics/gl/GLFrameBuffer_FrameBufferCubemapBuilder.h"
#include "arc/graphics/gl/GLFrameBuffer_GLFrameBufferBuilder.h"
#include "arc/graphics/gl/FrameBufferCubemap.h"
#include "arc/graphics/Pixmap_Format.h"

extern "C" {


void mark_arc_graphics_gl_GLFrameBuffer$FrameBufferCubemapBuilder(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (arc_graphics_gl_GLFrameBuffer$FrameBufferCubemapBuilder *) object;
}

void clinit_arc_graphics_gl_GLFrameBuffer$FrameBufferCubemapBuilder(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder(ctx);
}

void init_arc_graphics_gl_GLFrameBuffer$FrameBufferCubemapBuilder_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/GLFrameBuffer$FrameBufferCubemapBuilder:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_gl_GLFrameBuffer$FrameBufferCubemapBuilder(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(538);
	init_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder_int_int(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	LINE_NUMBER(539);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_gl_GLFrameBuffer$FrameBufferCubemapBuilder_build_R_arc_graphics_gl_FrameBufferCubemap(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/GLFrameBuffer$FrameBufferCubemapBuilder:build", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(543);
	clinit_arc_graphics_gl_FrameBufferCubemap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_gl_FrameBufferCubemap);
	init_arc_graphics_gl_FrameBufferCubemap_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_gl_GLFrameBuffer$FrameBufferCubemapBuilder_build_R_arc_graphics_gl_GLFrameBuffer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/GLFrameBuffer$FrameBufferCubemapBuilder:build", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(536);
	sp[0].o = (jobject)((func_arc_graphics_gl_GLFrameBuffer$FrameBufferCubemapBuilder_build_R_arc_graphics_gl_FrameBufferCubemap) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_gl_GLFrameBuffer$FrameBufferCubemapBuilder_build_R_arc_graphics_gl_FrameBufferCubemap])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_gl_GLFrameBuffer$FrameBufferCubemapBuilder_addBasicStencilDepthPackedRenderBuffer_R_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/GLFrameBuffer$FrameBufferCubemapBuilder:addBasicStencilDepthPackedRenderBuffer", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(536);
	sp[0].o = (jobject)M_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder_addBasicStencilDepthPackedRenderBuffer_R_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_gl_GLFrameBuffer$FrameBufferCubemapBuilder_addBasicStencilRenderBuffer_R_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/GLFrameBuffer$FrameBufferCubemapBuilder:addBasicStencilRenderBuffer", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(536);
	sp[0].o = (jobject)M_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder_addBasicStencilRenderBuffer_R_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_gl_GLFrameBuffer$FrameBufferCubemapBuilder_addBasicDepthRenderBuffer_R_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/GLFrameBuffer$FrameBufferCubemapBuilder:addBasicDepthRenderBuffer", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(536);
	sp[0].o = (jobject)M_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder_addBasicDepthRenderBuffer_R_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_gl_GLFrameBuffer$FrameBufferCubemapBuilder_addStencilDepthPackedRenderBuffer_int_R_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/GLFrameBuffer$FrameBufferCubemapBuilder:addStencilDepthPackedRenderBuffer", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(536);
	sp[0].o = (jobject)M_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder_addStencilDepthPackedRenderBuffer_int_R_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder(ctx, (frame[0].o), (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_gl_GLFrameBuffer$FrameBufferCubemapBuilder_addStencilRenderBuffer_int_R_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/GLFrameBuffer$FrameBufferCubemapBuilder:addStencilRenderBuffer", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(536);
	sp[0].o = (jobject)M_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder_addStencilRenderBuffer_int_R_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder(ctx, (frame[0].o), (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_gl_GLFrameBuffer$FrameBufferCubemapBuilder_addDepthRenderBuffer_int_R_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/GLFrameBuffer$FrameBufferCubemapBuilder:addDepthRenderBuffer", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(536);
	sp[0].o = (jobject)M_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder_addDepthRenderBuffer_int_R_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder(ctx, (frame[0].o), (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_gl_GLFrameBuffer$FrameBufferCubemapBuilder_addStencilTextureAttachment_int_int_R_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/GLFrameBuffer$FrameBufferCubemapBuilder:addStencilTextureAttachment", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(536);
	sp[0].o = (jobject)M_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder_addStencilTextureAttachment_int_int_R_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_gl_GLFrameBuffer$FrameBufferCubemapBuilder_addDepthTextureAttachment_int_int_R_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/GLFrameBuffer$FrameBufferCubemapBuilder:addDepthTextureAttachment", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(536);
	sp[0].o = (jobject)M_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder_addDepthTextureAttachment_int_int_R_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_gl_GLFrameBuffer$FrameBufferCubemapBuilder_addFloatAttachment_int_int_int_boolean_R_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jbool param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/GLFrameBuffer$FrameBufferCubemapBuilder:addFloatAttachment", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(536);
	sp[0].o = (jobject)M_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder_addFloatAttachment_int_int_int_boolean_R_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder(ctx, (frame[0].o), (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_gl_GLFrameBuffer$FrameBufferCubemapBuilder_addBasicColorTextureAttachment_arc_graphics_Pixmap$Format_R_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/GLFrameBuffer$FrameBufferCubemapBuilder:addBasicColorTextureAttachment", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(536);
	sp[0].o = (jobject)M_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder_addBasicColorTextureAttachment_arc_graphics_Pixmap$Format_R_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_gl_GLFrameBuffer$FrameBufferCubemapBuilder_addColorTextureAttachment_int_int_int_R_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder(jcontext ctx, jobject self, jint param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/GLFrameBuffer$FrameBufferCubemapBuilder:addColorTextureAttachment", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(536);
	sp[0].o = (jobject)M_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder_addColorTextureAttachment_int_int_int_R_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder(ctx, (frame[0].o), (frame[1].i), (frame[2].i), (frame[3].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_arc_graphics_gl_GLFrameBuffer$FrameBufferCubemapBuilder[] {
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
	(void *) M_arc_graphics_gl_GLFrameBuffer$FrameBufferCubemapBuilder_addColorTextureAttachment_int_int_int_R_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder,
	(void *) M_arc_graphics_gl_GLFrameBuffer$FrameBufferCubemapBuilder_addBasicColorTextureAttachment_arc_graphics_Pixmap$Format_R_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder,
	(void *) M_arc_graphics_gl_GLFrameBuffer$FrameBufferCubemapBuilder_addFloatAttachment_int_int_int_boolean_R_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder,
	(void *) M_arc_graphics_gl_GLFrameBuffer$FrameBufferCubemapBuilder_addDepthTextureAttachment_int_int_R_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder,
	(void *) M_arc_graphics_gl_GLFrameBuffer$FrameBufferCubemapBuilder_addStencilTextureAttachment_int_int_R_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder,
	(void *) M_arc_graphics_gl_GLFrameBuffer$FrameBufferCubemapBuilder_addDepthRenderBuffer_int_R_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder,
	(void *) M_arc_graphics_gl_GLFrameBuffer$FrameBufferCubemapBuilder_addStencilRenderBuffer_int_R_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder,
	(void *) M_arc_graphics_gl_GLFrameBuffer$FrameBufferCubemapBuilder_addStencilDepthPackedRenderBuffer_int_R_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder,
	(void *) M_arc_graphics_gl_GLFrameBuffer$FrameBufferCubemapBuilder_addBasicDepthRenderBuffer_R_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder,
	(void *) M_arc_graphics_gl_GLFrameBuffer$FrameBufferCubemapBuilder_addBasicStencilRenderBuffer_R_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder,
	(void *) M_arc_graphics_gl_GLFrameBuffer$FrameBufferCubemapBuilder_addBasicStencilDepthPackedRenderBuffer_R_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder,
	(void *) M_arc_graphics_gl_GLFrameBuffer$FrameBufferCubemapBuilder_build_R_arc_graphics_gl_GLFrameBuffer,
	(void *) M_arc_graphics_gl_GLFrameBuffer$FrameBufferCubemapBuilder_build_R_arc_graphics_gl_FrameBufferCubemap,
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
	{ "addColorTextureAttachment", "(III)Larc/graphics/gl/GLFrameBuffer$GLFrameBufferBuilder;" },
	{ "addBasicColorTextureAttachment", "(Larc/graphics/Pixmap$Format;)Larc/graphics/gl/GLFrameBuffer$GLFrameBufferBuilder;" },
	{ "addFloatAttachment", "(IIIZ)Larc/graphics/gl/GLFrameBuffer$GLFrameBufferBuilder;" },
	{ "addDepthTextureAttachment", "(II)Larc/graphics/gl/GLFrameBuffer$GLFrameBufferBuilder;" },
	{ "addStencilTextureAttachment", "(II)Larc/graphics/gl/GLFrameBuffer$GLFrameBufferBuilder;" },
	{ "addDepthRenderBuffer", "(I)Larc/graphics/gl/GLFrameBuffer$GLFrameBufferBuilder;" },
	{ "addStencilRenderBuffer", "(I)Larc/graphics/gl/GLFrameBuffer$GLFrameBufferBuilder;" },
	{ "addStencilDepthPackedRenderBuffer", "(I)Larc/graphics/gl/GLFrameBuffer$GLFrameBufferBuilder;" },
	{ "addBasicDepthRenderBuffer", "()Larc/graphics/gl/GLFrameBuffer$GLFrameBufferBuilder;" },
	{ "addBasicStencilRenderBuffer", "()Larc/graphics/gl/GLFrameBuffer$GLFrameBufferBuilder;" },
	{ "addBasicStencilDepthPackedRenderBuffer", "()Larc/graphics/gl/GLFrameBuffer$GLFrameBufferBuilder;" },
	{ "build", "()Larc/graphics/gl/GLFrameBuffer;" },
	{ "build", "()Larc/graphics/gl/FrameBufferCubemap;" },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_graphics_gl_GLFrameBuffer$FrameBufferCubemapBuilder_int_int, 0, "(II)V", 1 },
	{ "build", (intptr_t) M_arc_graphics_gl_GLFrameBuffer$FrameBufferCubemapBuilder_build_R_arc_graphics_gl_FrameBufferCubemap, VTABLE_arc_graphics_gl_GLFrameBuffer$FrameBufferCubemapBuilder_build_R_arc_graphics_gl_FrameBufferCubemap, "()Larc/graphics/gl/FrameBufferCubemap;", 1 },
	{ "build", (intptr_t) M_arc_graphics_gl_GLFrameBuffer$FrameBufferCubemapBuilder_build_R_arc_graphics_gl_GLFrameBuffer, VTABLE_arc_graphics_gl_GLFrameBuffer$FrameBufferCubemapBuilder_build_R_arc_graphics_gl_GLFrameBuffer, "()Larc/graphics/gl/GLFrameBuffer;", 4161 },
	{ "addBasicStencilDepthPackedRenderBuffer", (intptr_t) M_arc_graphics_gl_GLFrameBuffer$FrameBufferCubemapBuilder_addBasicStencilDepthPackedRenderBuffer_R_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder, VTABLE_arc_graphics_gl_GLFrameBuffer$FrameBufferCubemapBuilder_addBasicStencilDepthPackedRenderBuffer_R_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder, "()Larc/graphics/gl/GLFrameBuffer$GLFrameBufferBuilder;", 4161 },
	{ "addBasicStencilRenderBuffer", (intptr_t) M_arc_graphics_gl_GLFrameBuffer$FrameBufferCubemapBuilder_addBasicStencilRenderBuffer_R_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder, VTABLE_arc_graphics_gl_GLFrameBuffer$FrameBufferCubemapBuilder_addBasicStencilRenderBuffer_R_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder, "()Larc/graphics/gl/GLFrameBuffer$GLFrameBufferBuilder;", 4161 },
	{ "addBasicDepthRenderBuffer", (intptr_t) M_arc_graphics_gl_GLFrameBuffer$FrameBufferCubemapBuilder_addBasicDepthRenderBuffer_R_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder, VTABLE_arc_graphics_gl_GLFrameBuffer$FrameBufferCubemapBuilder_addBasicDepthRenderBuffer_R_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder, "()Larc/graphics/gl/GLFrameBuffer$GLFrameBufferBuilder;", 4161 },
	{ "addStencilDepthPackedRenderBuffer", (intptr_t) M_arc_graphics_gl_GLFrameBuffer$FrameBufferCubemapBuilder_addStencilDepthPackedRenderBuffer_int_R_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder, VTABLE_arc_graphics_gl_GLFrameBuffer$FrameBufferCubemapBuilder_addStencilDepthPackedRenderBuffer_int_R_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder, "(I)Larc/graphics/gl/GLFrameBuffer$GLFrameBufferBuilder;", 4161 },
	{ "addStencilRenderBuffer", (intptr_t) M_arc_graphics_gl_GLFrameBuffer$FrameBufferCubemapBuilder_addStencilRenderBuffer_int_R_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder, VTABLE_arc_graphics_gl_GLFrameBuffer$FrameBufferCubemapBuilder_addStencilRenderBuffer_int_R_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder, "(I)Larc/graphics/gl/GLFrameBuffer$GLFrameBufferBuilder;", 4161 },
	{ "addDepthRenderBuffer", (intptr_t) M_arc_graphics_gl_GLFrameBuffer$FrameBufferCubemapBuilder_addDepthRenderBuffer_int_R_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder, VTABLE_arc_graphics_gl_GLFrameBuffer$FrameBufferCubemapBuilder_addDepthRenderBuffer_int_R_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder, "(I)Larc/graphics/gl/GLFrameBuffer$GLFrameBufferBuilder;", 4161 },
	{ "addStencilTextureAttachment", (intptr_t) M_arc_graphics_gl_GLFrameBuffer$FrameBufferCubemapBuilder_addStencilTextureAttachment_int_int_R_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder, VTABLE_arc_graphics_gl_GLFrameBuffer$FrameBufferCubemapBuilder_addStencilTextureAttachment_int_int_R_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder, "(II)Larc/graphics/gl/GLFrameBuffer$GLFrameBufferBuilder;", 4161 },
	{ "addDepthTextureAttachment", (intptr_t) M_arc_graphics_gl_GLFrameBuffer$FrameBufferCubemapBuilder_addDepthTextureAttachment_int_int_R_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder, VTABLE_arc_graphics_gl_GLFrameBuffer$FrameBufferCubemapBuilder_addDepthTextureAttachment_int_int_R_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder, "(II)Larc/graphics/gl/GLFrameBuffer$GLFrameBufferBuilder;", 4161 },
	{ "addFloatAttachment", (intptr_t) M_arc_graphics_gl_GLFrameBuffer$FrameBufferCubemapBuilder_addFloatAttachment_int_int_int_boolean_R_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder, VTABLE_arc_graphics_gl_GLFrameBuffer$FrameBufferCubemapBuilder_addFloatAttachment_int_int_int_boolean_R_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder, "(IIIZ)Larc/graphics/gl/GLFrameBuffer$GLFrameBufferBuilder;", 4161 },
	{ "addBasicColorTextureAttachment", (intptr_t) M_arc_graphics_gl_GLFrameBuffer$FrameBufferCubemapBuilder_addBasicColorTextureAttachment_arc_graphics_Pixmap$Format_R_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder, VTABLE_arc_graphics_gl_GLFrameBuffer$FrameBufferCubemapBuilder_addBasicColorTextureAttachment_arc_graphics_Pixmap$Format_R_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder, "(Larc/graphics/Pixmap$Format;)Larc/graphics/gl/GLFrameBuffer$GLFrameBufferBuilder;", 4161 },
	{ "addColorTextureAttachment", (intptr_t) M_arc_graphics_gl_GLFrameBuffer$FrameBufferCubemapBuilder_addColorTextureAttachment_int_int_int_R_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder, VTABLE_arc_graphics_gl_GLFrameBuffer$FrameBufferCubemapBuilder_addColorTextureAttachment_int_int_int_R_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder, "(III)Larc/graphics/gl/GLFrameBuffer$GLFrameBufferBuilder;", 4161 },
};

Class class_arc_graphics_gl_GLFrameBuffer$FrameBufferCubemapBuilder{
		.nativeName = (intptr_t) "arc/graphics/gl/GLFrameBuffer$FrameBufferCubemapBuilder",
		.parentClass = (intptr_t) &class_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder,
		.size = sizeof(arc_graphics_gl_GLFrameBuffer$FrameBufferCubemapBuilder),
		.classVtable = (intptr_t) vtable_arc_graphics_gl_GLFrameBuffer$FrameBufferCubemapBuilder,
		.staticInitializer = (intptr_t) clinit_arc_graphics_gl_GLFrameBuffer$FrameBufferCubemapBuilder,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_graphics_gl_GLFrameBuffer$FrameBufferCubemapBuilder,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_graphics_gl_GLFrameBuffer,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 14,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 24,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_graphics_gl_GLFrameBuffer$FrameBufferCubemapBuilder = registerClass(&class_arc_graphics_gl_GLFrameBuffer$FrameBufferCubemapBuilder);

}

