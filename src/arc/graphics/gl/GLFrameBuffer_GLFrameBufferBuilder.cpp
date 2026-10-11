#include "arc/graphics/gl/GLFrameBuffer_GLFrameBufferBuilder.h"
#include "java/lang/Object.h"
#include "arc/graphics/gl/GLFrameBuffer.h"
#include "arc/struct/Seq.h"
#include "arc/graphics/gl/GLFrameBuffer_FrameBufferRenderBufferAttachmentSpec.h"
#include "arc/graphics/gl/GLFrameBuffer_FrameBufferTextureAttachmentSpec.h"
#include "arc/graphics/gl/GLFrameBuffer_GLFrameBufferBuilder.h"
#include "arc/graphics/Pixmap_Format.h"

extern "C" {


void mark_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder(jobject object, jint mark, jint depth) {
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
	auto self = (arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder *) object;
	if (self->F_textureAttachmentSpecs)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_textureAttachmentSpecs)->clazz)->markFunction)((jobject) self->F_textureAttachmentSpecs, mark, depth + 1);
	if (self->F_stencilRenderBufferSpec)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_stencilRenderBufferSpec)->clazz)->markFunction)((jobject) self->F_stencilRenderBufferSpec, mark, depth + 1);
	if (self->F_depthRenderBufferSpec)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_depthRenderBufferSpec)->clazz)->markFunction)((jobject) self->F_depthRenderBufferSpec, mark, depth + 1);
	if (self->F_packedStencilDepthRenderBufferSpec)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_packedStencilDepthRenderBufferSpec)->clazz)->markFunction)((jobject) self->F_packedStencilDepthRenderBufferSpec, mark, depth + 1);
}

void clinit_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/GLFrameBuffer$GLFrameBufferBuilder:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(441);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(431);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder *) NULL_CHECK(sp[0].o))->F_textureAttachmentSpecs = (jref) sp[1].o;
	LINE_NUMBER(442);
	((arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder *) NULL_CHECK((frame[0].o)))->F_width = (frame[1].i);
	LINE_NUMBER(443);
	((arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder *) NULL_CHECK((frame[0].o)))->F_height = (frame[2].i);
	LINE_NUMBER(444);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder_addColorTextureAttachment_int_int_int_R_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder(jcontext ctx, jobject self, jint param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/GLFrameBuffer$GLFrameBufferBuilder:addColorTextureAttachment", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(447);
	sp[0].o = (jobject)((arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder *) NULL_CHECK((frame[0].o)))->F_textureAttachmentSpecs;
	clinit_arc_graphics_gl_GLFrameBuffer$FrameBufferTextureAttachmentSpec(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_gl_GLFrameBuffer$FrameBufferTextureAttachmentSpec);
	init_arc_graphics_gl_GLFrameBuffer$FrameBufferTextureAttachmentSpec_int_int_int(ctx, sp[1].o, (frame[1].i), (frame[2].i), (frame[3].i));
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(448);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder_addBasicColorTextureAttachment_arc_graphics_Pixmap$Format_R_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/GLFrameBuffer$GLFrameBufferBuilder:addBasicColorTextureAttachment", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(452);
	frame[2].i = ((jint)((arc_graphics_Pixmap$Format *) NULL_CHECK((frame[1].o)))->F_glFormat);
	LINE_NUMBER(453);
	frame[3].i = ((jint)((arc_graphics_Pixmap$Format *) NULL_CHECK((frame[1].o)))->F_glType);
	LINE_NUMBER(454);
	sp[0].o = (jobject)((func_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder_addColorTextureAttachment_int_int_int_R_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder_addColorTextureAttachment_int_int_int_R_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder])(ctx, (frame[0].o), (frame[2].i), (frame[2].i), (frame[3].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder_addFloatAttachment_int_int_int_boolean_R_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jbool param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/GLFrameBuffer$GLFrameBufferBuilder:addFloatAttachment", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(458);
	clinit_arc_graphics_gl_GLFrameBuffer$FrameBufferTextureAttachmentSpec(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_gl_GLFrameBuffer$FrameBufferTextureAttachmentSpec);
	init_arc_graphics_gl_GLFrameBuffer$FrameBufferTextureAttachmentSpec_int_int_int(ctx, sp[0].o, (frame[1].i), (frame[2].i), (frame[3].i));
	frame[5].o = sp[0].o;
	LINE_NUMBER(459);
	((arc_graphics_gl_GLFrameBuffer$FrameBufferTextureAttachmentSpec *) NULL_CHECK((frame[5].o)))->F_isFloat = (jint(1));
	LINE_NUMBER(460);
	((arc_graphics_gl_GLFrameBuffer$FrameBufferTextureAttachmentSpec *) NULL_CHECK((frame[5].o)))->F_isGpuOnly = (frame[4].i);
	LINE_NUMBER(461);
	sp[0].o = (jobject)((arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder *) NULL_CHECK((frame[0].o)))->F_textureAttachmentSpecs;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[5].o));
	LINE_NUMBER(462);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder_addDepthTextureAttachment_int_int_R_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/GLFrameBuffer$GLFrameBufferBuilder:addDepthTextureAttachment", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(466);
	clinit_arc_graphics_gl_GLFrameBuffer$FrameBufferTextureAttachmentSpec(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_gl_GLFrameBuffer$FrameBufferTextureAttachmentSpec);
	init_arc_graphics_gl_GLFrameBuffer$FrameBufferTextureAttachmentSpec_int_int_int(ctx, sp[0].o, (frame[1].i), (6402), (frame[2].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(468);
	((arc_graphics_gl_GLFrameBuffer$FrameBufferTextureAttachmentSpec *) NULL_CHECK((frame[3].o)))->F_isDepth = (jint(1));
	LINE_NUMBER(469);
	sp[0].o = (jobject)((arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder *) NULL_CHECK((frame[0].o)))->F_textureAttachmentSpecs;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[3].o));
	LINE_NUMBER(470);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder_addStencilTextureAttachment_int_int_R_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/GLFrameBuffer$GLFrameBufferBuilder:addStencilTextureAttachment", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(474);
	clinit_arc_graphics_gl_GLFrameBuffer$FrameBufferTextureAttachmentSpec(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_gl_GLFrameBuffer$FrameBufferTextureAttachmentSpec);
	init_arc_graphics_gl_GLFrameBuffer$FrameBufferTextureAttachmentSpec_int_int_int(ctx, sp[0].o, (frame[1].i), (jint(36128)), (frame[2].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(476);
	((arc_graphics_gl_GLFrameBuffer$FrameBufferTextureAttachmentSpec *) NULL_CHECK((frame[3].o)))->F_isStencil = (jint(1));
	LINE_NUMBER(477);
	sp[0].o = (jobject)((arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder *) NULL_CHECK((frame[0].o)))->F_textureAttachmentSpecs;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[3].o));
	LINE_NUMBER(478);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder_addDepthRenderBuffer_int_R_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/GLFrameBuffer$GLFrameBufferBuilder:addDepthRenderBuffer", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(482);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_gl_GLFrameBuffer$FrameBufferRenderBufferAttachmentSpec(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_gl_GLFrameBuffer$FrameBufferRenderBufferAttachmentSpec);
	init_arc_graphics_gl_GLFrameBuffer$FrameBufferRenderBufferAttachmentSpec_int(ctx, sp[1].o, (frame[1].i));
	((arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder *) NULL_CHECK(sp[0].o))->F_depthRenderBufferSpec = (jref) sp[1].o;
	LINE_NUMBER(483);
	((arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder *) NULL_CHECK((frame[0].o)))->F_hasDepthRenderBuffer = (jint(1));
	LINE_NUMBER(484);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder_addStencilRenderBuffer_int_R_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/GLFrameBuffer$GLFrameBufferBuilder:addStencilRenderBuffer", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(488);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_gl_GLFrameBuffer$FrameBufferRenderBufferAttachmentSpec(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_gl_GLFrameBuffer$FrameBufferRenderBufferAttachmentSpec);
	init_arc_graphics_gl_GLFrameBuffer$FrameBufferRenderBufferAttachmentSpec_int(ctx, sp[1].o, (frame[1].i));
	((arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder *) NULL_CHECK(sp[0].o))->F_stencilRenderBufferSpec = (jref) sp[1].o;
	LINE_NUMBER(489);
	((arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder *) NULL_CHECK((frame[0].o)))->F_hasStencilRenderBuffer = (jint(1));
	LINE_NUMBER(490);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder_addStencilDepthPackedRenderBuffer_int_R_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/GLFrameBuffer$GLFrameBufferBuilder:addStencilDepthPackedRenderBuffer", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(494);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_gl_GLFrameBuffer$FrameBufferRenderBufferAttachmentSpec(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_gl_GLFrameBuffer$FrameBufferRenderBufferAttachmentSpec);
	init_arc_graphics_gl_GLFrameBuffer$FrameBufferRenderBufferAttachmentSpec_int(ctx, sp[1].o, (frame[1].i));
	((arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder *) NULL_CHECK(sp[0].o))->F_packedStencilDepthRenderBufferSpec = (jref) sp[1].o;
	LINE_NUMBER(495);
	((arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder *) NULL_CHECK((frame[0].o)))->F_hasPackedStencilDepthRenderBuffer = (jint(1));
	LINE_NUMBER(496);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder_addBasicDepthRenderBuffer_R_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/GLFrameBuffer$GLFrameBufferBuilder:addBasicDepthRenderBuffer", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(500);
	sp[0].o = (jobject)((func_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder_addDepthRenderBuffer_int_R_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder_addDepthRenderBuffer_int_R_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder])(ctx, (frame[0].o), (jint(33189)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder_addBasicStencilRenderBuffer_R_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/GLFrameBuffer$GLFrameBufferBuilder:addBasicStencilRenderBuffer", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(504);
	sp[0].o = (jobject)((func_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder_addStencilRenderBuffer_int_R_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder_addStencilRenderBuffer_int_R_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder])(ctx, (frame[0].o), (jint(36168)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder_addBasicStencilDepthPackedRenderBuffer_R_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/GLFrameBuffer$GLFrameBufferBuilder:addBasicStencilDepthPackedRenderBuffer", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(508);
	sp[0].o = (jobject)((func_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder_addStencilDepthPackedRenderBuffer_int_R_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder_addStencilDepthPackedRenderBuffer_int_R_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder])(ctx, (frame[0].o), (jint(35056)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder[] {
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
	(void *) M_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder_addColorTextureAttachment_int_int_int_R_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder,
	(void *) M_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder_addBasicColorTextureAttachment_arc_graphics_Pixmap$Format_R_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder,
	(void *) M_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder_addFloatAttachment_int_int_int_boolean_R_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder,
	(void *) M_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder_addDepthTextureAttachment_int_int_R_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder,
	(void *) M_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder_addStencilTextureAttachment_int_int_R_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder,
	(void *) M_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder_addDepthRenderBuffer_int_R_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder,
	(void *) M_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder_addStencilRenderBuffer_int_R_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder,
	(void *) M_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder_addStencilDepthPackedRenderBuffer_int_R_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder,
	(void *) M_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder_addBasicDepthRenderBuffer_R_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder,
	(void *) M_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder_addBasicStencilRenderBuffer_R_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder,
	(void *) M_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder_addBasicStencilDepthPackedRenderBuffer_R_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder,
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
};

static FieldMetadata fields[] {
	{ "width", &class_int, offsetof(arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder, F_width), "I", 4 },
	{ "height", &class_int, offsetof(arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder, F_height), "I", 4 },
	{ "textureAttachmentSpecs", &class_arc_struct_Seq, offsetof(arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder, F_textureAttachmentSpecs), "Larc/struct/Seq;", 4 },
	{ "stencilRenderBufferSpec", &class_arc_graphics_gl_GLFrameBuffer$FrameBufferRenderBufferAttachmentSpec, offsetof(arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder, F_stencilRenderBufferSpec), "Larc/graphics/gl/GLFrameBuffer$FrameBufferRenderBufferAttachmentSpec;", 4 },
	{ "depthRenderBufferSpec", &class_arc_graphics_gl_GLFrameBuffer$FrameBufferRenderBufferAttachmentSpec, offsetof(arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder, F_depthRenderBufferSpec), "Larc/graphics/gl/GLFrameBuffer$FrameBufferRenderBufferAttachmentSpec;", 4 },
	{ "packedStencilDepthRenderBufferSpec", &class_arc_graphics_gl_GLFrameBuffer$FrameBufferRenderBufferAttachmentSpec, offsetof(arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder, F_packedStencilDepthRenderBufferSpec), "Larc/graphics/gl/GLFrameBuffer$FrameBufferRenderBufferAttachmentSpec;", 4 },
	{ "hasStencilRenderBuffer", &class_boolean, offsetof(arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder, F_hasStencilRenderBuffer), "Z", 4 },
	{ "hasDepthRenderBuffer", &class_boolean, offsetof(arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder, F_hasDepthRenderBuffer), "Z", 4 },
	{ "hasPackedStencilDepthRenderBuffer", &class_boolean, offsetof(arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder, F_hasPackedStencilDepthRenderBuffer), "Z", 4 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder_int_int, 0, "(II)V", 1 },
	{ "addColorTextureAttachment", (intptr_t) M_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder_addColorTextureAttachment_int_int_int_R_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder, VTABLE_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder_addColorTextureAttachment_int_int_int_R_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder, "(III)Larc/graphics/gl/GLFrameBuffer$GLFrameBufferBuilder;", 1 },
	{ "addBasicColorTextureAttachment", (intptr_t) M_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder_addBasicColorTextureAttachment_arc_graphics_Pixmap$Format_R_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder, VTABLE_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder_addBasicColorTextureAttachment_arc_graphics_Pixmap$Format_R_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder, "(Larc/graphics/Pixmap$Format;)Larc/graphics/gl/GLFrameBuffer$GLFrameBufferBuilder;", 1 },
	{ "addFloatAttachment", (intptr_t) M_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder_addFloatAttachment_int_int_int_boolean_R_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder, VTABLE_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder_addFloatAttachment_int_int_int_boolean_R_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder, "(IIIZ)Larc/graphics/gl/GLFrameBuffer$GLFrameBufferBuilder;", 1 },
	{ "addDepthTextureAttachment", (intptr_t) M_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder_addDepthTextureAttachment_int_int_R_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder, VTABLE_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder_addDepthTextureAttachment_int_int_R_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder, "(II)Larc/graphics/gl/GLFrameBuffer$GLFrameBufferBuilder;", 1 },
	{ "addStencilTextureAttachment", (intptr_t) M_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder_addStencilTextureAttachment_int_int_R_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder, VTABLE_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder_addStencilTextureAttachment_int_int_R_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder, "(II)Larc/graphics/gl/GLFrameBuffer$GLFrameBufferBuilder;", 1 },
	{ "addDepthRenderBuffer", (intptr_t) M_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder_addDepthRenderBuffer_int_R_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder, VTABLE_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder_addDepthRenderBuffer_int_R_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder, "(I)Larc/graphics/gl/GLFrameBuffer$GLFrameBufferBuilder;", 1 },
	{ "addStencilRenderBuffer", (intptr_t) M_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder_addStencilRenderBuffer_int_R_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder, VTABLE_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder_addStencilRenderBuffer_int_R_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder, "(I)Larc/graphics/gl/GLFrameBuffer$GLFrameBufferBuilder;", 1 },
	{ "addStencilDepthPackedRenderBuffer", (intptr_t) M_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder_addStencilDepthPackedRenderBuffer_int_R_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder, VTABLE_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder_addStencilDepthPackedRenderBuffer_int_R_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder, "(I)Larc/graphics/gl/GLFrameBuffer$GLFrameBufferBuilder;", 1 },
	{ "addBasicDepthRenderBuffer", (intptr_t) M_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder_addBasicDepthRenderBuffer_R_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder, VTABLE_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder_addBasicDepthRenderBuffer_R_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder, "()Larc/graphics/gl/GLFrameBuffer$GLFrameBufferBuilder;", 1 },
	{ "addBasicStencilRenderBuffer", (intptr_t) M_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder_addBasicStencilRenderBuffer_R_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder, VTABLE_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder_addBasicStencilRenderBuffer_R_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder, "()Larc/graphics/gl/GLFrameBuffer$GLFrameBufferBuilder;", 1 },
	{ "addBasicStencilDepthPackedRenderBuffer", (intptr_t) M_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder_addBasicStencilDepthPackedRenderBuffer_R_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder, VTABLE_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder_addBasicStencilDepthPackedRenderBuffer_R_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder, "()Larc/graphics/gl/GLFrameBuffer$GLFrameBufferBuilder;", 1 },
	{ "build", 0, VTABLE_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder_build_R_arc_graphics_gl_GLFrameBuffer, "()Larc/graphics/gl/GLFrameBuffer;", 1025 },
};

Class class_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder{
		.nativeName = (intptr_t) "arc/graphics/gl/GLFrameBuffer$GLFrameBufferBuilder",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder),
		.classVtable = (intptr_t) vtable_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder,
		.staticInitializer = (intptr_t) clinit_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_graphics_gl_GLFrameBuffer,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1057,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 9,
		.nativeFields = (intptr_t) fields,
		.methodCount = 13,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 23,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder = registerClass(&class_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder);

}

