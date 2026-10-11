#include "arc/graphics/gl/GLFrameBuffer.h"
#include "arc/graphics/GLTexture.h"
#include "java/lang/StringBuilder.h"
#include "java/nio/IntBuffer.h"
#include "arc/graphics/gl/GLFrameBuffer_FrameBufferRenderBufferAttachmentSpec.h"
#include "arc/graphics/gl/GLFrameBuffer_FloatFrameBufferBuilder.h"
#include "arc/graphics/Color.h"
#include "arc/Application.h"
#include "arc/graphics/gl/GLFrameBuffer_GLFrameBufferBuilder.h"
#include "arc/graphics/g2d/Draw.h"
#include "java/nio/ByteBuffer.h"
#include "arc/graphics/gl/GLFrameBuffer_FrameBufferBuilder.h"
#include "arc/graphics/gl/GLFrameBuffer.h"
#include "java/lang/String.h"
#include "java/nio/Buffer.h"
#include "arc/struct/Seq.h"
#include "arc/graphics/gl/GLFrameBuffer_FrameBufferTextureAttachmentSpec.h"
#include "arc/util/Disposable.h"
#include "arc/Core.h"
#include "java/util/Iterator.h"
#include "java/nio/ByteOrder.h"
#include "arc/util/Buffers.h"
#include "java/lang/IllegalArgumentException.h"
#include "arc/graphics/GL30.h"
#include "arc/Graphics.h"
#include "java/lang/Object.h"
#include "arc/util/ArcRuntimeException.h"
#include "java/lang/IllegalStateException.h"
#include "arc/graphics/Gl.h"
#include "arc/graphics/gl/GLFrameBuffer_FrameBufferCubemapBuilder.h"

extern "C" {

jint SF_arc_graphics_gl_GLFrameBuffer_GL_DEPTH24_STENCIL8_OES;
jobject SF_arc_graphics_gl_GLFrameBuffer_currentBoundFramebuffer;
jint SF_arc_graphics_gl_GLFrameBuffer_defaultFramebufferHandle;
jint SF_arc_graphics_gl_GLFrameBuffer_bufferNesting;
jbool SF_arc_graphics_gl_GLFrameBuffer_defaultFramebufferHandleInitialized;

void mark_arc_graphics_gl_GLFrameBuffer(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_arc_graphics_gl_GLFrameBuffer_currentBoundFramebuffer)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_gl_GLFrameBuffer_currentBoundFramebuffer)->clazz)->markFunction)((jobject) SF_arc_graphics_gl_GLFrameBuffer_currentBoundFramebuffer, mark, depth + 1);
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
	auto self = (arc_graphics_gl_GLFrameBuffer *) object;
	if (self->F_textureAttachments)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_textureAttachments)->clazz)->markFunction)((jobject) self->F_textureAttachments, mark, depth + 1);
	if (self->F_lastBoundFramebuffer)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lastBoundFramebuffer)->clazz)->markFunction)((jobject) self->F_lastBoundFramebuffer, mark, depth + 1);
	if (self->F_bufferBuilder)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_bufferBuilder)->clazz)->markFunction)((jobject) self->F_bufferBuilder, mark, depth + 1);
}

void init_arc_graphics_gl_GLFrameBuffer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/GLFrameBuffer:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_gl_GLFrameBuffer(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(58);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(39);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((arc_graphics_gl_GLFrameBuffer *) NULL_CHECK(sp[0].o))->F_textureAttachments = (jref) sp[1].o;
	LINE_NUMBER(41);
	((arc_graphics_gl_GLFrameBuffer *) NULL_CHECK((frame[0].o)))->F_lastBoundFramebuffer = (jref) (jobject(nullptr));
	LINE_NUMBER(59);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_graphics_gl_GLFrameBuffer_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/GLFrameBuffer:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_gl_GLFrameBuffer(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(62);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(39);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((arc_graphics_gl_GLFrameBuffer *) NULL_CHECK(sp[0].o))->F_textureAttachments = (jref) sp[1].o;
	LINE_NUMBER(41);
	((arc_graphics_gl_GLFrameBuffer *) NULL_CHECK((frame[0].o)))->F_lastBoundFramebuffer = (jref) (jobject(nullptr));
	LINE_NUMBER(63);
	((arc_graphics_gl_GLFrameBuffer *) NULL_CHECK((frame[0].o)))->F_bufferBuilder = (jref) (frame[1].o);
	LINE_NUMBER(64);
	((func_arc_graphics_gl_GLFrameBuffer_build) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_gl_GLFrameBuffer_build])(ctx, (frame[0].o));
	LINE_NUMBER(65);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint SM_arc_graphics_gl_GLFrameBuffer_getBufferNesting_R_int(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/GLFrameBuffer:getBufferNesting", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_gl_GLFrameBuffer(ctx);
	{
	LINE_NUMBER(68);
	popStackFrame(ctx);
	return (clinit_arc_graphics_gl_GLFrameBuffer(ctx), (jint)SF_arc_graphics_gl_GLFrameBuffer_bufferNesting);
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_gl_GLFrameBuffer_unbind(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/GLFrameBuffer:unbind", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_gl_GLFrameBuffer(ctx);
	{
	LINE_NUMBER(73);
	SM_arc_graphics_Gl_bindFramebuffer_int_int(ctx, (jint(36160)), (clinit_arc_graphics_gl_GLFrameBuffer(ctx), (jint)SF_arc_graphics_gl_GLFrameBuffer_defaultFramebufferHandle));
	LINE_NUMBER(74);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_gl_GLFrameBuffer_getTexture_R_arc_graphics_GLTexture(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/GLFrameBuffer:getTexture", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(78);
	sp[0].o = (jobject)((arc_graphics_gl_GLFrameBuffer *) NULL_CHECK((frame[0].o)))->F_textureAttachments;
	sp[0].o = (jobject)((func_arc_struct_Seq_first_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_first_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_arc_graphics_GLTexture, sp[0].o));
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_gl_GLFrameBuffer_getTextureAttachments_R_arc_struct_Seq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/GLFrameBuffer:getTextureAttachments", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(83);
	sp[0].o = (jobject)((arc_graphics_gl_GLFrameBuffer *) NULL_CHECK((frame[0].o)))->F_textureAttachments;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_gl_GLFrameBuffer_build(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/GLFrameBuffer:build", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(96);
	M_arc_graphics_gl_GLFrameBuffer_checkValidBuilder(ctx, (frame[0].o));
	LINE_NUMBER(99);
	if ((clinit_arc_graphics_gl_GLFrameBuffer(ctx), (jint)SF_arc_graphics_gl_GLFrameBuffer_defaultFramebufferHandleInitialized) != 0) goto label_2;
	}
	{
	LINE_NUMBER(100);
	clinit_arc_graphics_gl_GLFrameBuffer(ctx);
	SF_arc_graphics_gl_GLFrameBuffer_defaultFramebufferHandleInitialized = (jint(1));
	LINE_NUMBER(101);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	jint temp0 = (jint)((func_arc_Application_isIOS_R_boolean) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_isIOS_R_boolean, sp[0].o))(ctx, sp[0].o);
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(102);
	sp[0].o = (jobject)SM_java_nio_ByteBuffer_allocateDirect_int_R_java_nio_ByteBuffer(ctx, (64));
	sp[1].o = (jobject)SM_java_nio_ByteOrder_nativeOrder_R_java_nio_ByteOrder(ctx);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_order_java_nio_ByteOrder_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_order_java_nio_ByteOrder_R_java_nio_ByteBuffer])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_asIntBuffer_R_java_nio_IntBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_asIntBuffer_R_java_nio_IntBuffer])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(103);
	SM_arc_graphics_Gl_getIntegerv_int_java_nio_IntBuffer(ctx, (jint(36006)), (frame[1].o));
	LINE_NUMBER(104);
	jint temp0 = (jint)((func_java_nio_IntBuffer_get_int_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_IntBuffer_get_int_R_int])(ctx, (frame[1].o), (jint(0)));
	clinit_arc_graphics_gl_GLFrameBuffer(ctx);
	SF_arc_graphics_gl_GLFrameBuffer_defaultFramebufferHandle = temp0;
	LINE_NUMBER(105);
	goto label_2;
	}
label_5:;
	{
	LINE_NUMBER(106);
	clinit_arc_graphics_gl_GLFrameBuffer(ctx);
	SF_arc_graphics_gl_GLFrameBuffer_defaultFramebufferHandle = (jint(0));
	}
label_2:;
	{
	LINE_NUMBER(111);
	clinit_arc_graphics_gl_GLFrameBuffer(ctx);
	sp[0].o = (jobject)SF_arc_graphics_gl_GLFrameBuffer_currentBoundFramebuffer;
	if (sp[0].o != nullptr) goto label_10;
	}
	clinit_arc_graphics_gl_GLFrameBuffer(ctx);
	(sp++)->i = SF_arc_graphics_gl_GLFrameBuffer_defaultFramebufferHandle;
	goto label_11;
label_10:;
	clinit_arc_graphics_gl_GLFrameBuffer(ctx);
	(sp++)->o = SF_arc_graphics_gl_GLFrameBuffer_currentBoundFramebuffer;
	sp[-1].i = ((arc_graphics_gl_GLFrameBuffer *) NULL_CHECK(sp[-1].o))->F_framebufferHandle;
label_11:;
	{
	sp -= 1;
	frame[1].i = sp[0].i;
	LINE_NUMBER(113);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_arc_graphics_Gl_genFramebuffer_R_int(ctx);
	((arc_graphics_gl_GLFrameBuffer *) NULL_CHECK(sp[0].o))->F_framebufferHandle = temp0;
	LINE_NUMBER(114);
	SM_arc_graphics_Gl_bindFramebuffer_int_int(ctx, (jint(36160)), ((jint)((arc_graphics_gl_GLFrameBuffer *) NULL_CHECK((frame[0].o)))->F_framebufferHandle));
	LINE_NUMBER(116);
	sp[0].o = (jobject)((arc_graphics_gl_GLFrameBuffer *) NULL_CHECK((frame[0].o)))->F_bufferBuilder;
	frame[2].i = ((jint)((arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder *) NULL_CHECK(sp[0].o))->F_width);
	LINE_NUMBER(117);
	sp[0].o = (jobject)((arc_graphics_gl_GLFrameBuffer *) NULL_CHECK((frame[0].o)))->F_bufferBuilder;
	frame[3].i = ((jint)((arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder *) NULL_CHECK(sp[0].o))->F_height);
	LINE_NUMBER(119);
	sp[0].o = (jobject)((arc_graphics_gl_GLFrameBuffer *) NULL_CHECK((frame[0].o)))->F_bufferBuilder;
	if (((jint)((arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder *) NULL_CHECK(sp[0].o))->F_hasDepthRenderBuffer) == 0) goto label_17;
	}
	{
	LINE_NUMBER(120);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_arc_graphics_Gl_genRenderbuffer_R_int(ctx);
	((arc_graphics_gl_GLFrameBuffer *) NULL_CHECK(sp[0].o))->F_depthbufferHandle = temp0;
	LINE_NUMBER(121);
	SM_arc_graphics_Gl_bindRenderbuffer_int_int(ctx, (jint(36161)), ((jint)((arc_graphics_gl_GLFrameBuffer *) NULL_CHECK((frame[0].o)))->F_depthbufferHandle));
	LINE_NUMBER(122);
	jint temp1 = jint(36161);
	sp[0].o = (jobject)((arc_graphics_gl_GLFrameBuffer *) NULL_CHECK((frame[0].o)))->F_bufferBuilder;
	sp[0].o = (jobject)((arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder *) NULL_CHECK(sp[0].o))->F_depthRenderBufferSpec;
	SM_arc_graphics_Gl_renderbufferStorage_int_int_int_int(ctx, temp1, ((jint)((arc_graphics_gl_GLFrameBuffer$FrameBufferRenderBufferAttachmentSpec *) NULL_CHECK(sp[0].o))->F_internalFormat), (frame[2].i), (frame[3].i));
	}
label_17:;
	{
	LINE_NUMBER(125);
	sp[0].o = (jobject)((arc_graphics_gl_GLFrameBuffer *) NULL_CHECK((frame[0].o)))->F_bufferBuilder;
	if (((jint)((arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder *) NULL_CHECK(sp[0].o))->F_hasStencilRenderBuffer) == 0) goto label_21;
	}
	{
	LINE_NUMBER(126);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_arc_graphics_Gl_genRenderbuffer_R_int(ctx);
	((arc_graphics_gl_GLFrameBuffer *) NULL_CHECK(sp[0].o))->F_stencilbufferHandle = temp0;
	LINE_NUMBER(127);
	SM_arc_graphics_Gl_bindRenderbuffer_int_int(ctx, (jint(36161)), ((jint)((arc_graphics_gl_GLFrameBuffer *) NULL_CHECK((frame[0].o)))->F_stencilbufferHandle));
	LINE_NUMBER(128);
	jint temp1 = jint(36161);
	sp[0].o = (jobject)((arc_graphics_gl_GLFrameBuffer *) NULL_CHECK((frame[0].o)))->F_bufferBuilder;
	sp[0].o = (jobject)((arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder *) NULL_CHECK(sp[0].o))->F_stencilRenderBufferSpec;
	SM_arc_graphics_Gl_renderbufferStorage_int_int_int_int(ctx, temp1, ((jint)((arc_graphics_gl_GLFrameBuffer$FrameBufferRenderBufferAttachmentSpec *) NULL_CHECK(sp[0].o))->F_internalFormat), (frame[2].i), (frame[3].i));
	}
label_21:;
	{
	LINE_NUMBER(131);
	sp[0].o = (jobject)((arc_graphics_gl_GLFrameBuffer *) NULL_CHECK((frame[0].o)))->F_bufferBuilder;
	if (((jint)((arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder *) NULL_CHECK(sp[0].o))->F_hasPackedStencilDepthRenderBuffer) == 0) goto label_25;
	}
	{
	LINE_NUMBER(132);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_arc_graphics_Gl_genRenderbuffer_R_int(ctx);
	((arc_graphics_gl_GLFrameBuffer *) NULL_CHECK(sp[0].o))->F_depthStencilPackedBufferHandle = temp0;
	LINE_NUMBER(133);
	SM_arc_graphics_Gl_bindRenderbuffer_int_int(ctx, (jint(36161)), ((jint)((arc_graphics_gl_GLFrameBuffer *) NULL_CHECK((frame[0].o)))->F_depthStencilPackedBufferHandle));
	LINE_NUMBER(134);
	jint temp1 = jint(36161);
	sp[0].o = (jobject)((arc_graphics_gl_GLFrameBuffer *) NULL_CHECK((frame[0].o)))->F_bufferBuilder;
	sp[0].o = (jobject)((arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder *) NULL_CHECK(sp[0].o))->F_packedStencilDepthRenderBufferSpec;
	SM_arc_graphics_Gl_renderbufferStorage_int_int_int_int(ctx, temp1, ((jint)((arc_graphics_gl_GLFrameBuffer$FrameBufferRenderBufferAttachmentSpec *) NULL_CHECK(sp[0].o))->F_internalFormat), (frame[2].i), (frame[3].i));
	}
label_25:;
	{
	LINE_NUMBER(138);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_graphics_gl_GLFrameBuffer *) NULL_CHECK((frame[0].o)))->F_bufferBuilder;
	sp[1].o = (jobject)((arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder *) NULL_CHECK(sp[1].o))->F_textureAttachmentSpecs;
	sp += 1;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) <= (jint(1))) goto label_29;
	}
	INST_ICONST(1);
	goto label_30;
label_29:;
	INST_ICONST(0);
label_30:;
	{
	sp -= 2;
	((arc_graphics_gl_GLFrameBuffer *) NULL_CHECK(sp[0].o))->F_isMRT = sp[1].i;
	LINE_NUMBER(139);
	frame[4].i = (jint(0));
	LINE_NUMBER(140);
	if (((jint)((arc_graphics_gl_GLFrameBuffer *) NULL_CHECK((frame[0].o)))->F_isMRT) == 0) goto label_33;
	}
	{
	LINE_NUMBER(141);
	sp[0].o = (jobject)((arc_graphics_gl_GLFrameBuffer *) NULL_CHECK((frame[0].o)))->F_bufferBuilder;
	sp[0].o = (jobject)((arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder *) NULL_CHECK(sp[0].o))->F_textureAttachmentSpecs;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	}
label_35:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[5].o)))(ctx, (frame[5].o));
	if (temp0 == 0) goto label_36;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o));
	frame[6].o = (checkCast(ctx, &class_arc_graphics_gl_GLFrameBuffer$FrameBufferTextureAttachmentSpec, sp[0].o));
	LINE_NUMBER(142);
	sp[0].o = (jobject)((func_arc_graphics_gl_GLFrameBuffer_createTexture_arc_graphics_gl_GLFrameBuffer$FrameBufferTextureAttachmentSpec_R_arc_graphics_GLTexture) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_gl_GLFrameBuffer_createTexture_arc_graphics_gl_GLFrameBuffer$FrameBufferTextureAttachmentSpec_R_arc_graphics_GLTexture])(ctx, (frame[0].o), (frame[6].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(143);
	sp[0].o = (jobject)((arc_graphics_gl_GLFrameBuffer *) NULL_CHECK((frame[0].o)))->F_textureAttachments;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[7].o));
	LINE_NUMBER(144);
	jint temp0 = (jint)((func_arc_graphics_gl_GLFrameBuffer$FrameBufferTextureAttachmentSpec_isColorTexture_R_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_graphics_gl_GLFrameBuffer$FrameBufferTextureAttachmentSpec_isColorTexture_R_boolean])(ctx, (frame[6].o));
	if (temp0 == 0) goto label_40;
	}
	{
	LINE_NUMBER(145);
	((func_arc_graphics_gl_GLFrameBuffer_attachTexture_int_arc_graphics_GLTexture) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_gl_GLFrameBuffer_attachTexture_int_arc_graphics_GLTexture])(ctx, (frame[0].o), ((jint(36064)) + (frame[4].i)), (frame[7].o));
	LINE_NUMBER(146);
	INST_IINC(4, 1);
	goto label_43;
	}
label_40:;
	{
	LINE_NUMBER(147);
	if (((jint)((arc_graphics_gl_GLFrameBuffer$FrameBufferTextureAttachmentSpec *) NULL_CHECK((frame[6].o)))->F_isDepth) == 0) goto label_44;
	}
	{
	LINE_NUMBER(148);
	((func_arc_graphics_gl_GLFrameBuffer_attachTexture_int_arc_graphics_GLTexture) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_gl_GLFrameBuffer_attachTexture_int_arc_graphics_GLTexture])(ctx, (frame[0].o), (jint(36096)), (frame[7].o));
	goto label_43;
	}
label_44:;
	{
	LINE_NUMBER(149);
	if (((jint)((arc_graphics_gl_GLFrameBuffer$FrameBufferTextureAttachmentSpec *) NULL_CHECK((frame[6].o)))->F_isStencil) == 0) goto label_43;
	}
	{
	LINE_NUMBER(150);
	((func_arc_graphics_gl_GLFrameBuffer_attachTexture_int_arc_graphics_GLTexture) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_gl_GLFrameBuffer_attachTexture_int_arc_graphics_GLTexture])(ctx, (frame[0].o), (jint(36128)), (frame[7].o));
	}
label_43:;
	LINE_NUMBER(152);
	goto label_35;
label_36:;
	goto label_47;
label_33:;
	{
	LINE_NUMBER(154);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_graphics_gl_GLFrameBuffer *) NULL_CHECK((frame[0].o)))->F_bufferBuilder;
	sp[1].o = (jobject)((arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder *) NULL_CHECK(sp[1].o))->F_textureAttachmentSpecs;
	sp[1].o = (jobject)((func_arc_struct_Seq_first_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_first_R_java_lang_Object])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_arc_graphics_gl_GLFrameBuffer_createTexture_arc_graphics_gl_GLFrameBuffer$FrameBufferTextureAttachmentSpec_R_arc_graphics_GLTexture) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_GLFrameBuffer_createTexture_arc_graphics_gl_GLFrameBuffer$FrameBufferTextureAttachmentSpec_R_arc_graphics_GLTexture])(ctx, sp[0].o, (checkCast(ctx, &class_arc_graphics_gl_GLFrameBuffer$FrameBufferTextureAttachmentSpec, sp[1].o)));
	frame[5].o = sp[0].o;
	LINE_NUMBER(155);
	sp[0].o = (jobject)((arc_graphics_gl_GLFrameBuffer *) NULL_CHECK((frame[0].o)))->F_textureAttachments;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[5].o));
	LINE_NUMBER(156);
	((func_arc_graphics_gl_GLFrameBuffer_attachTexture_int_arc_graphics_GLTexture) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_gl_GLFrameBuffer_attachTexture_int_arc_graphics_GLTexture])(ctx, (frame[0].o), (jint(36064)), (frame[5].o));
	}
label_47:;
	{
	LINE_NUMBER(159);
	if (((jint)((arc_graphics_gl_GLFrameBuffer *) NULL_CHECK((frame[0].o)))->F_isMRT) == 0) goto label_50;
	}
	{
	LINE_NUMBER(160);
	sp[0].o = (jobject)SM_arc_util_Buffers_newIntBuffer_int_R_java_nio_IntBuffer(ctx, (frame[4].i));
	frame[5].o = sp[0].o;
	LINE_NUMBER(161);
	frame[6].i = (jint(0));
	}
label_53:;
	{
	if ((frame[6].i) >= (frame[4].i)) goto label_54;
	}
	{
	LINE_NUMBER(162);
	sp[0].o = (jobject)((func_java_nio_IntBuffer_put_int_R_java_nio_IntBuffer) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_nio_IntBuffer_put_int_R_java_nio_IntBuffer])(ctx, (frame[5].o), ((jint(36064)) + (frame[6].i)));
	LINE_NUMBER(161);
	INST_IINC(6, 1);
	goto label_53;
	}
label_54:;
	{
	LINE_NUMBER(164);
	sp[0].o = (jobject)((func_java_nio_IntBuffer_position_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_nio_IntBuffer_position_int_R_java_nio_Buffer])(ctx, (frame[5].o), (jint(0)));
	LINE_NUMBER(165);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl30;
	((func_arc_graphics_GL30_glDrawBuffers_int_java_nio_IntBuffer) resolveInterfaceMethod(ctx, &class_arc_graphics_GL30, INDEX_arc_graphics_GL30_glDrawBuffers_int_java_nio_IntBuffer, sp[0].o))(ctx, sp[0].o, (frame[4].i), (frame[5].o));
	}
label_50:;
	{
	LINE_NUMBER(168);
	sp[0].o = (jobject)((arc_graphics_gl_GLFrameBuffer *) NULL_CHECK((frame[0].o)))->F_bufferBuilder;
	if (((jint)((arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder *) NULL_CHECK(sp[0].o))->F_hasDepthRenderBuffer) == 0) goto label_58;
	}
	{
	LINE_NUMBER(169);
	SM_arc_graphics_Gl_framebufferRenderbuffer_int_int_int_int(ctx, (jint(36160)), (jint(36096)), (jint(36161)), ((jint)((arc_graphics_gl_GLFrameBuffer *) NULL_CHECK((frame[0].o)))->F_depthbufferHandle));
	}
label_58:;
	{
	LINE_NUMBER(172);
	sp[0].o = (jobject)((arc_graphics_gl_GLFrameBuffer *) NULL_CHECK((frame[0].o)))->F_bufferBuilder;
	if (((jint)((arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder *) NULL_CHECK(sp[0].o))->F_hasStencilRenderBuffer) == 0) goto label_60;
	}
	{
	LINE_NUMBER(173);
	SM_arc_graphics_Gl_framebufferRenderbuffer_int_int_int_int(ctx, (jint(36160)), (jint(36128)), (jint(36161)), ((jint)((arc_graphics_gl_GLFrameBuffer *) NULL_CHECK((frame[0].o)))->F_stencilbufferHandle));
	}
label_60:;
	{
	LINE_NUMBER(176);
	sp[0].o = (jobject)((arc_graphics_gl_GLFrameBuffer *) NULL_CHECK((frame[0].o)))->F_bufferBuilder;
	if (((jint)((arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder *) NULL_CHECK(sp[0].o))->F_hasPackedStencilDepthRenderBuffer) == 0) goto label_62;
	}
	{
	LINE_NUMBER(177);
	SM_arc_graphics_Gl_framebufferRenderbuffer_int_int_int_int(ctx, (jint(36160)), (jint(33306)), (jint(36161)), ((jint)((arc_graphics_gl_GLFrameBuffer *) NULL_CHECK((frame[0].o)))->F_depthStencilPackedBufferHandle));
	}
label_62:;
	{
	LINE_NUMBER(181);
	SM_arc_graphics_Gl_bindRenderbuffer_int_int(ctx, (jint(36161)), (jint(0)));
	LINE_NUMBER(182);
	sp[0].o = (jobject)((arc_graphics_gl_GLFrameBuffer *) NULL_CHECK((frame[0].o)))->F_textureAttachments;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	}
label_65:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[5].o)))(ctx, (frame[5].o));
	if (temp0 == 0) goto label_66;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o));
	frame[6].o = (checkCast(ctx, &class_arc_graphics_GLTexture, sp[0].o));
	LINE_NUMBER(183);
	SM_arc_graphics_Gl_bindTexture_int_int(ctx, ((jint)((arc_graphics_GLTexture *) NULL_CHECK((frame[6].o)))->F_glTarget), (jint(0)));
	LINE_NUMBER(184);
	goto label_65;
	}
label_66:;
	{
	LINE_NUMBER(186);
	jint temp0 = (jint)SM_arc_graphics_Gl_checkFramebufferStatus_int_R_int(ctx, (jint(36160)));
	frame[5].i = temp0;
	LINE_NUMBER(188);
	if ((frame[5].i) != (jint(36061))) goto label_70;
	}
	{
	sp[0].o = (jobject)((arc_graphics_gl_GLFrameBuffer *) NULL_CHECK((frame[0].o)))->F_bufferBuilder;
	if (((jint)((arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder *) NULL_CHECK(sp[0].o))->F_hasDepthRenderBuffer) == 0) goto label_70;
	}
	{
	sp[0].o = (jobject)((arc_graphics_gl_GLFrameBuffer *) NULL_CHECK((frame[0].o)))->F_bufferBuilder;
	if (((jint)((arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder *) NULL_CHECK(sp[0].o))->F_hasStencilRenderBuffer) == 0) goto label_70;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"GL_OES_packed_depth_stencil"_j));
	LINE_NUMBER(189);
	jint temp0 = (jint)((func_arc_Graphics_supportsExtension_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_supportsExtension_java_lang_String_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_72;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"GL_EXT_packed_depth_stencil"_j));
	LINE_NUMBER(190);
	jint temp0 = (jint)((func_arc_Graphics_supportsExtension_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_supportsExtension_java_lang_String_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_70;
	}
label_72:;
	{
	LINE_NUMBER(191);
	sp[0].o = (jobject)((arc_graphics_gl_GLFrameBuffer *) NULL_CHECK((frame[0].o)))->F_bufferBuilder;
	if (((jint)((arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder *) NULL_CHECK(sp[0].o))->F_hasDepthRenderBuffer) == 0) goto label_74;
	}
	{
	LINE_NUMBER(192);
	SM_arc_graphics_Gl_deleteRenderbuffer_int(ctx, ((jint)((arc_graphics_gl_GLFrameBuffer *) NULL_CHECK((frame[0].o)))->F_depthbufferHandle));
	LINE_NUMBER(193);
	((arc_graphics_gl_GLFrameBuffer *) NULL_CHECK((frame[0].o)))->F_depthbufferHandle = (jint(0));
	}
label_74:;
	{
	LINE_NUMBER(195);
	sp[0].o = (jobject)((arc_graphics_gl_GLFrameBuffer *) NULL_CHECK((frame[0].o)))->F_bufferBuilder;
	if (((jint)((arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder *) NULL_CHECK(sp[0].o))->F_hasStencilRenderBuffer) == 0) goto label_77;
	}
	{
	LINE_NUMBER(196);
	SM_arc_graphics_Gl_deleteRenderbuffer_int(ctx, ((jint)((arc_graphics_gl_GLFrameBuffer *) NULL_CHECK((frame[0].o)))->F_stencilbufferHandle));
	LINE_NUMBER(197);
	((arc_graphics_gl_GLFrameBuffer *) NULL_CHECK((frame[0].o)))->F_stencilbufferHandle = (jint(0));
	}
label_77:;
	{
	LINE_NUMBER(199);
	sp[0].o = (jobject)((arc_graphics_gl_GLFrameBuffer *) NULL_CHECK((frame[0].o)))->F_bufferBuilder;
	if (((jint)((arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder *) NULL_CHECK(sp[0].o))->F_hasPackedStencilDepthRenderBuffer) == 0) goto label_80;
	}
	{
	LINE_NUMBER(200);
	SM_arc_graphics_Gl_deleteRenderbuffer_int(ctx, ((jint)((arc_graphics_gl_GLFrameBuffer *) NULL_CHECK((frame[0].o)))->F_depthStencilPackedBufferHandle));
	LINE_NUMBER(201);
	((arc_graphics_gl_GLFrameBuffer *) NULL_CHECK((frame[0].o)))->F_depthStencilPackedBufferHandle = (jint(0));
	}
label_80:;
	{
	LINE_NUMBER(204);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_arc_graphics_Gl_genRenderbuffer_R_int(ctx);
	((arc_graphics_gl_GLFrameBuffer *) NULL_CHECK(sp[0].o))->F_depthStencilPackedBufferHandle = temp0;
	LINE_NUMBER(205);
	((arc_graphics_gl_GLFrameBuffer *) NULL_CHECK((frame[0].o)))->F_hasDepthStencilPackedBuffer = (jint(1));
	LINE_NUMBER(206);
	SM_arc_graphics_Gl_bindRenderbuffer_int_int(ctx, (jint(36161)), ((jint)((arc_graphics_gl_GLFrameBuffer *) NULL_CHECK((frame[0].o)))->F_depthStencilPackedBufferHandle));
	LINE_NUMBER(207);
	SM_arc_graphics_Gl_renderbufferStorage_int_int_int_int(ctx, (jint(36161)), (jint(35056)), (frame[2].i), (frame[3].i));
	LINE_NUMBER(208);
	SM_arc_graphics_Gl_bindRenderbuffer_int_int(ctx, (jint(36161)), (jint(0)));
	LINE_NUMBER(210);
	SM_arc_graphics_Gl_framebufferRenderbuffer_int_int_int_int(ctx, (jint(36160)), (jint(36096)), (jint(36161)), ((jint)((arc_graphics_gl_GLFrameBuffer *) NULL_CHECK((frame[0].o)))->F_depthStencilPackedBufferHandle));
	LINE_NUMBER(212);
	SM_arc_graphics_Gl_framebufferRenderbuffer_int_int_int_int(ctx, (jint(36160)), (jint(36128)), (jint(36161)), ((jint)((arc_graphics_gl_GLFrameBuffer *) NULL_CHECK((frame[0].o)))->F_depthStencilPackedBufferHandle));
	LINE_NUMBER(214);
	jint temp1 = (jint)SM_arc_graphics_Gl_checkFramebufferStatus_int_R_int(ctx, (jint(36160)));
	frame[5].i = temp1;
	}
label_70:;
	{
	LINE_NUMBER(218);
	SM_arc_graphics_Gl_bindFramebuffer_int_int(ctx, (jint(36160)), (frame[1].i));
	LINE_NUMBER(220);
	if ((frame[5].i) == (jint(36053))) goto label_91;
	}
	{
	LINE_NUMBER(221);
	sp[0].o = (jobject)((arc_graphics_gl_GLFrameBuffer *) NULL_CHECK((frame[0].o)))->F_textureAttachments;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	}
label_93:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[6].o)))(ctx, (frame[6].o));
	if (temp0 == 0) goto label_94;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o));
	frame[7].o = (checkCast(ctx, &class_arc_graphics_GLTexture, sp[0].o));
	LINE_NUMBER(222);
	((func_arc_graphics_gl_GLFrameBuffer_disposeTexture_arc_graphics_GLTexture) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_gl_GLFrameBuffer_disposeTexture_arc_graphics_GLTexture])(ctx, (frame[0].o), (frame[7].o));
	LINE_NUMBER(223);
	goto label_93;
	}
label_94:;
	{
	LINE_NUMBER(225);
	if (((jint)((arc_graphics_gl_GLFrameBuffer *) NULL_CHECK((frame[0].o)))->F_hasDepthStencilPackedBuffer) == 0) goto label_97;
	}
	{
	LINE_NUMBER(226);
	SM_arc_graphics_Gl_deleteBuffer_int(ctx, ((jint)((arc_graphics_gl_GLFrameBuffer *) NULL_CHECK((frame[0].o)))->F_depthStencilPackedBufferHandle));
	goto label_99;
	}
label_97:;
	{
	LINE_NUMBER(228);
	sp[0].o = (jobject)((arc_graphics_gl_GLFrameBuffer *) NULL_CHECK((frame[0].o)))->F_bufferBuilder;
	if (((jint)((arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder *) NULL_CHECK(sp[0].o))->F_hasDepthRenderBuffer) == 0) goto label_100;
	}
	{
	SM_arc_graphics_Gl_deleteRenderbuffer_int(ctx, ((jint)((arc_graphics_gl_GLFrameBuffer *) NULL_CHECK((frame[0].o)))->F_depthbufferHandle));
	}
label_100:;
	{
	LINE_NUMBER(229);
	sp[0].o = (jobject)((arc_graphics_gl_GLFrameBuffer *) NULL_CHECK((frame[0].o)))->F_bufferBuilder;
	if (((jint)((arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder *) NULL_CHECK(sp[0].o))->F_hasStencilRenderBuffer) == 0) goto label_99;
	}
	{
	SM_arc_graphics_Gl_deleteRenderbuffer_int(ctx, ((jint)((arc_graphics_gl_GLFrameBuffer *) NULL_CHECK((frame[0].o)))->F_stencilbufferHandle));
	}
label_99:;
	{
	LINE_NUMBER(232);
	SM_arc_graphics_Gl_deleteFramebuffer_int(ctx, ((jint)((arc_graphics_gl_GLFrameBuffer *) NULL_CHECK((frame[0].o)))->F_framebufferHandle));
	LINE_NUMBER(234);
	if ((frame[5].i) != (jint(36054))) goto label_102;
	}
	{
	LINE_NUMBER(235);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Frame buffer couldn't be constructed: incomplete attachment ("_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[2].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"x"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[3].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8")"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_102:;
	{
	LINE_NUMBER(236);
	if ((frame[5].i) != (jint(36057))) goto label_104;
	}
	{
	LINE_NUMBER(237);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Frame buffer couldn't be constructed: incomplete dimensions"_j))));
	throwException(ctx, sp[0].o);	}
label_104:;
	{
	LINE_NUMBER(238);
	if ((frame[5].i) != (jint(36055))) goto label_106;
	}
	{
	LINE_NUMBER(239);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Frame buffer couldn't be constructed: missing attachment"_j))));
	throwException(ctx, sp[0].o);	}
label_106:;
	{
	LINE_NUMBER(240);
	if ((frame[5].i) != (jint(36061))) goto label_108;
	}
	{
	LINE_NUMBER(241);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Frame buffer couldn't be constructed: unsupported combination of formats"_j))));
	throwException(ctx, sp[0].o);	}
label_108:;
	{
	LINE_NUMBER(242);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Frame buffer couldn't be constructed: unknown error "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[5].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_91:;
	LINE_NUMBER(244);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_graphics_gl_GLFrameBuffer_checkValidBuilder(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/GLFrameBuffer:checkValidBuilder", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(247);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp0 = (jint)((func_arc_Graphics_isGL30Available_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_isGL30Available_R_boolean])(ctx, sp[0].o);
	frame[1].i = temp0;
	LINE_NUMBER(249);
	if ((frame[1].i) != 0) goto label_2;
	}
	{
	LINE_NUMBER(250);
	sp[0].o = (jobject)((arc_graphics_gl_GLFrameBuffer *) NULL_CHECK((frame[0].o)))->F_bufferBuilder;
	if (((jint)((arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder *) NULL_CHECK(sp[0].o))->F_hasPackedStencilDepthRenderBuffer) == 0) goto label_4;
	}
	{
	LINE_NUMBER(251);
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Packed Stencil/Render render buffers are not available on GLES 2.0"_j))));
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	LINE_NUMBER(253);
	sp[0].o = (jobject)((arc_graphics_gl_GLFrameBuffer *) NULL_CHECK((frame[0].o)))->F_bufferBuilder;
	sp[0].o = (jobject)((arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder *) NULL_CHECK(sp[0].o))->F_textureAttachmentSpecs;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) <= (jint(1))) goto label_6;
	}
	{
	LINE_NUMBER(254);
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Multiple render targets not available on GLES 2.0"_j))));
	throwException(ctx, sp[0].o);	}
label_6:;
	{
	LINE_NUMBER(256);
	sp[0].o = (jobject)((arc_graphics_gl_GLFrameBuffer *) NULL_CHECK((frame[0].o)))->F_bufferBuilder;
	sp[0].o = (jobject)((arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder *) NULL_CHECK(sp[0].o))->F_textureAttachmentSpecs;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_8:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_arc_graphics_gl_GLFrameBuffer$FrameBufferTextureAttachmentSpec, sp[0].o));
	LINE_NUMBER(257);
	if (((jint)((arc_graphics_gl_GLFrameBuffer$FrameBufferTextureAttachmentSpec *) NULL_CHECK((frame[3].o)))->F_isDepth) == 0) goto label_10;
	}
	{
	LINE_NUMBER(258);
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Depth texture FrameBuffer Attachment not available on GLES 2.0"_j))));
	throwException(ctx, sp[0].o);	}
label_10:;
	{
	LINE_NUMBER(259);
	if (((jint)((arc_graphics_gl_GLFrameBuffer$FrameBufferTextureAttachmentSpec *) NULL_CHECK((frame[3].o)))->F_isStencil) == 0) goto label_12;
	}
	{
	LINE_NUMBER(260);
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Stencil texture FrameBuffer Attachment not available on GLES 2.0"_j))));
	throwException(ctx, sp[0].o);	}
label_12:;
	{
	LINE_NUMBER(261);
	if (((jint)((arc_graphics_gl_GLFrameBuffer$FrameBufferTextureAttachmentSpec *) NULL_CHECK((frame[3].o)))->F_isFloat) == 0) goto label_14;
	}
	{
	LINE_NUMBER(262);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp0 = (jint)((func_arc_Graphics_supportsExtension_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_supportsExtension_java_lang_String_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"OES_texture_float"_j))));
	if (temp0 != 0) goto label_14;
	}
	{
	LINE_NUMBER(263);
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Float texture FrameBuffer Attachment not available on GLES 2.0"_j))));
	throwException(ctx, sp[0].o);	}
label_14:;
	LINE_NUMBER(266);
	goto label_8;
label_2:;
	LINE_NUMBER(268);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_graphics_gl_GLFrameBuffer_dispose(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/GLFrameBuffer:dispose", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(273);
	sp[0].o = (jobject)((arc_graphics_gl_GLFrameBuffer *) NULL_CHECK((frame[0].o)))->F_textureAttachments;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_1:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_arc_graphics_GLTexture, sp[0].o));
	LINE_NUMBER(274);
	((func_arc_graphics_gl_GLFrameBuffer_disposeTexture_arc_graphics_GLTexture) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_gl_GLFrameBuffer_disposeTexture_arc_graphics_GLTexture])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(275);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(277);
	if (((jint)((arc_graphics_gl_GLFrameBuffer *) NULL_CHECK((frame[0].o)))->F_hasDepthStencilPackedBuffer) == 0) goto label_5;
	}
	{
	LINE_NUMBER(278);
	SM_arc_graphics_Gl_deleteRenderbuffer_int(ctx, ((jint)((arc_graphics_gl_GLFrameBuffer *) NULL_CHECK((frame[0].o)))->F_depthStencilPackedBufferHandle));
	goto label_7;
	}
label_5:;
	{
	LINE_NUMBER(280);
	sp[0].o = (jobject)((arc_graphics_gl_GLFrameBuffer *) NULL_CHECK((frame[0].o)))->F_bufferBuilder;
	if (((jint)((arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder *) NULL_CHECK(sp[0].o))->F_hasDepthRenderBuffer) == 0) goto label_8;
	}
	{
	SM_arc_graphics_Gl_deleteRenderbuffer_int(ctx, ((jint)((arc_graphics_gl_GLFrameBuffer *) NULL_CHECK((frame[0].o)))->F_depthbufferHandle));
	}
label_8:;
	{
	LINE_NUMBER(281);
	sp[0].o = (jobject)((arc_graphics_gl_GLFrameBuffer *) NULL_CHECK((frame[0].o)))->F_bufferBuilder;
	if (((jint)((arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder *) NULL_CHECK(sp[0].o))->F_hasStencilRenderBuffer) == 0) goto label_7;
	}
	{
	SM_arc_graphics_Gl_deleteRenderbuffer_int(ctx, ((jint)((arc_graphics_gl_GLFrameBuffer *) NULL_CHECK((frame[0].o)))->F_stencilbufferHandle));
	}
label_7:;
	{
	LINE_NUMBER(284);
	SM_arc_graphics_Gl_deleteFramebuffer_int(ctx, ((jint)((arc_graphics_gl_GLFrameBuffer *) NULL_CHECK((frame[0].o)))->F_framebufferHandle));
	LINE_NUMBER(285);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_gl_GLFrameBuffer_bind(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/GLFrameBuffer:bind", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(289);
	SM_arc_graphics_Gl_bindFramebuffer_int_int(ctx, (jint(36160)), ((jint)((arc_graphics_gl_GLFrameBuffer *) NULL_CHECK((frame[0].o)))->F_framebufferHandle));
	LINE_NUMBER(290);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_graphics_gl_GLFrameBuffer_isBound_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/GLFrameBuffer:isBound", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(293);
	clinit_arc_graphics_gl_GLFrameBuffer(ctx);
	sp[0].o = (jobject)SF_arc_graphics_gl_GLFrameBuffer_currentBoundFramebuffer;
	if (sp[0].o != (frame[0].o)) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_arc_graphics_gl_GLFrameBuffer_begin_arc_graphics_Color(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/GLFrameBuffer:begin", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(298);
	((func_arc_graphics_gl_GLFrameBuffer_begin) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_gl_GLFrameBuffer_begin])(ctx, (frame[0].o));
	LINE_NUMBER(299);
	SM_arc_graphics_Gl_clearColor_float_float_float_float(ctx, ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[1].o)))->F_r), ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[1].o)))->F_g), ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[1].o)))->F_b), ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[1].o)))->F_a));
	LINE_NUMBER(300);
	if (((jint)((arc_graphics_gl_GLFrameBuffer *) NULL_CHECK((frame[0].o)))->F_depthbufferHandle) == 0) goto label_3;
	}
	INST_SIPUSH(16640);
	goto label_4;
label_3:;
	INST_SIPUSH(16384);
label_4:;
	{
	sp -= 1;
	SM_arc_graphics_Gl_clear_int(ctx, sp[0].i);
	LINE_NUMBER(301);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_gl_GLFrameBuffer_begin(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/GLFrameBuffer:begin", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(305);
	SM_arc_graphics_g2d_Draw_flush(ctx);
	LINE_NUMBER(307);
	((func_arc_graphics_gl_GLFrameBuffer_beginBind) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_gl_GLFrameBuffer_beginBind])(ctx, (frame[0].o));
	LINE_NUMBER(308);
	((func_arc_graphics_gl_GLFrameBuffer_setFrameBufferViewport) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_gl_GLFrameBuffer_setFrameBufferViewport])(ctx, (frame[0].o));
	LINE_NUMBER(309);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_gl_GLFrameBuffer_beginBind(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/GLFrameBuffer:beginBind", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(313);
	clinit_arc_graphics_gl_GLFrameBuffer(ctx);
	sp[0].o = (jobject)SF_arc_graphics_gl_GLFrameBuffer_currentBoundFramebuffer;
	if (sp[0].o != (frame[0].o)) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Do not begin() twice."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(315);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_gl_GLFrameBuffer(ctx);
	sp[1].o = (jobject)SF_arc_graphics_gl_GLFrameBuffer_currentBoundFramebuffer;
	((arc_graphics_gl_GLFrameBuffer *) NULL_CHECK(sp[0].o))->F_lastBoundFramebuffer = (jref) sp[1].o;
	LINE_NUMBER(316);
	clinit_arc_graphics_gl_GLFrameBuffer(ctx);
	SF_arc_graphics_gl_GLFrameBuffer_currentBoundFramebuffer = (frame[0].o);
	LINE_NUMBER(317);
	clinit_arc_graphics_gl_GLFrameBuffer(ctx);
	SF_arc_graphics_gl_GLFrameBuffer_bufferNesting = ((clinit_arc_graphics_gl_GLFrameBuffer(ctx), (jint)SF_arc_graphics_gl_GLFrameBuffer_bufferNesting) + (jint(1)));
	LINE_NUMBER(318);
	((func_arc_graphics_gl_GLFrameBuffer_bind) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_gl_GLFrameBuffer_bind])(ctx, (frame[0].o));
	LINE_NUMBER(319);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_gl_GLFrameBuffer_setFrameBufferViewport(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/GLFrameBuffer:setFrameBufferViewport", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(323);
	jint temp0 = jint(0);
	jint temp1 = jint(0);
	sp[0].o = (jobject)((arc_graphics_gl_GLFrameBuffer *) NULL_CHECK((frame[0].o)))->F_bufferBuilder;
	jint temp2 = (jint)((arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder *) NULL_CHECK(sp[0].o))->F_width;
	sp[0].o = (jobject)((arc_graphics_gl_GLFrameBuffer *) NULL_CHECK((frame[0].o)))->F_bufferBuilder;
	SM_arc_graphics_Gl_viewport_int_int_int_int(ctx, temp0, temp1, temp2, ((jint)((arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder *) NULL_CHECK(sp[0].o))->F_height));
	LINE_NUMBER(324);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_gl_GLFrameBuffer_end(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/GLFrameBuffer:end", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(328);
	SM_arc_graphics_g2d_Draw_flush(ctx);
	LINE_NUMBER(330);
	sp[0].o = (jobject)((arc_graphics_gl_GLFrameBuffer *) NULL_CHECK((frame[0].o)))->F_lastBoundFramebuffer;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(332);
	sp[0].o = (jobject)((arc_graphics_gl_GLFrameBuffer *) NULL_CHECK((frame[0].o)))->F_lastBoundFramebuffer;
	((func_arc_graphics_gl_GLFrameBuffer_bind) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_GLFrameBuffer_bind])(ctx, sp[0].o);
	LINE_NUMBER(333);
	sp[0].o = (jobject)((arc_graphics_gl_GLFrameBuffer *) NULL_CHECK((frame[0].o)))->F_lastBoundFramebuffer;
	((func_arc_graphics_gl_GLFrameBuffer_setFrameBufferViewport) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_GLFrameBuffer_setFrameBufferViewport])(ctx, sp[0].o);
	goto label_5;
	}
label_2:;
	{
	LINE_NUMBER(336);
	SM_arc_graphics_gl_GLFrameBuffer_unbind(ctx);
	LINE_NUMBER(337);
	jint temp0 = jint(0);
	jint temp1 = jint(0);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp2 = (jint)((func_arc_Graphics_getBackBufferWidth_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_getBackBufferWidth_R_int])(ctx, sp[0].o);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp3 = (jint)((func_arc_Graphics_getBackBufferHeight_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_getBackBufferHeight_R_int])(ctx, sp[0].o);
	SM_arc_graphics_Gl_viewport_int_int_int_int(ctx, temp0, temp1, temp2, temp3);
	}
label_5:;
	{
	LINE_NUMBER(340);
	clinit_arc_graphics_gl_GLFrameBuffer(ctx);
	SF_arc_graphics_gl_GLFrameBuffer_bufferNesting = ((clinit_arc_graphics_gl_GLFrameBuffer(ctx), (jint)SF_arc_graphics_gl_GLFrameBuffer_bufferNesting) - (jint(1)));
	LINE_NUMBER(343);
	sp[0].o = (jobject)((arc_graphics_gl_GLFrameBuffer *) NULL_CHECK((frame[0].o)))->F_lastBoundFramebuffer;
	clinit_arc_graphics_gl_GLFrameBuffer(ctx);
	SF_arc_graphics_gl_GLFrameBuffer_currentBoundFramebuffer = sp[0].o;
	LINE_NUMBER(345);
	((arc_graphics_gl_GLFrameBuffer *) NULL_CHECK((frame[0].o)))->F_lastBoundFramebuffer = (jref) (jobject(nullptr));
	LINE_NUMBER(346);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_gl_GLFrameBuffer_endBind(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/GLFrameBuffer:endBind", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(351);
	sp[0].o = (jobject)((arc_graphics_gl_GLFrameBuffer *) NULL_CHECK((frame[0].o)))->F_lastBoundFramebuffer;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(353);
	sp[0].o = (jobject)((arc_graphics_gl_GLFrameBuffer *) NULL_CHECK((frame[0].o)))->F_lastBoundFramebuffer;
	((func_arc_graphics_gl_GLFrameBuffer_bind) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_GLFrameBuffer_bind])(ctx, sp[0].o);
	goto label_3;
	}
label_1:;
	LINE_NUMBER(356);
	SM_arc_graphics_gl_GLFrameBuffer_unbind(ctx);
label_3:;
	{
	LINE_NUMBER(359);
	clinit_arc_graphics_gl_GLFrameBuffer(ctx);
	SF_arc_graphics_gl_GLFrameBuffer_bufferNesting = ((clinit_arc_graphics_gl_GLFrameBuffer(ctx), (jint)SF_arc_graphics_gl_GLFrameBuffer_bufferNesting) - (jint(1)));
	LINE_NUMBER(362);
	sp[0].o = (jobject)((arc_graphics_gl_GLFrameBuffer *) NULL_CHECK((frame[0].o)))->F_lastBoundFramebuffer;
	clinit_arc_graphics_gl_GLFrameBuffer(ctx);
	SF_arc_graphics_gl_GLFrameBuffer_currentBoundFramebuffer = sp[0].o;
	LINE_NUMBER(364);
	((arc_graphics_gl_GLFrameBuffer *) NULL_CHECK((frame[0].o)))->F_lastBoundFramebuffer = (jref) (jobject(nullptr));
	LINE_NUMBER(365);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_arc_graphics_gl_GLFrameBuffer_getFramebufferHandle_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/GLFrameBuffer:getFramebufferHandle", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(369);
	popStackFrame(ctx);
	return ((jint)((arc_graphics_gl_GLFrameBuffer *) NULL_CHECK((frame[0].o)))->F_framebufferHandle);
	}

	popStackFrame(ctx);
}

jint M_arc_graphics_gl_GLFrameBuffer_getDepthBufferHandle_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/GLFrameBuffer:getDepthBufferHandle", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(377);
	popStackFrame(ctx);
	return ((jint)((arc_graphics_gl_GLFrameBuffer *) NULL_CHECK((frame[0].o)))->F_depthbufferHandle);
	}

	popStackFrame(ctx);
}

jint M_arc_graphics_gl_GLFrameBuffer_getStencilBufferHandle_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/GLFrameBuffer:getStencilBufferHandle", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(385);
	popStackFrame(ctx);
	return ((jint)((arc_graphics_gl_GLFrameBuffer *) NULL_CHECK((frame[0].o)))->F_stencilbufferHandle);
	}

	popStackFrame(ctx);
}

jint M_arc_graphics_gl_GLFrameBuffer_getDepthStencilPackedBuffer_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/GLFrameBuffer:getDepthStencilPackedBuffer", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(390);
	popStackFrame(ctx);
	return ((jint)((arc_graphics_gl_GLFrameBuffer *) NULL_CHECK((frame[0].o)))->F_depthStencilPackedBufferHandle);
	}

	popStackFrame(ctx);
}

jint M_arc_graphics_gl_GLFrameBuffer_getHeight_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/GLFrameBuffer:getHeight", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(395);
	sp[0].o = (jobject)((arc_graphics_gl_GLFrameBuffer *) NULL_CHECK((frame[0].o)))->F_bufferBuilder;
	popStackFrame(ctx);
	return ((jint)((arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder *) NULL_CHECK(sp[0].o))->F_height);
	}

	popStackFrame(ctx);
}

jint M_arc_graphics_gl_GLFrameBuffer_getWidth_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/GLFrameBuffer:getWidth", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(400);
	sp[0].o = (jobject)((arc_graphics_gl_GLFrameBuffer *) NULL_CHECK((frame[0].o)))->F_bufferBuilder;
	popStackFrame(ctx);
	return ((jint)((arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder *) NULL_CHECK(sp[0].o))->F_width);
	}

	popStackFrame(ctx);
}

void clinit_arc_graphics_gl_GLFrameBuffer(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_arc_graphics_gl_GLFrameBuffer_GL_DEPTH24_STENCIL8_OES = jint(35056);
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/GLFrameBuffer:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_gl_GLFrameBuffer(ctx);
	{
	LINE_NUMBER(37);
	clinit_arc_graphics_gl_GLFrameBuffer(ctx);
	SF_arc_graphics_gl_GLFrameBuffer_defaultFramebufferHandleInitialized = (jint(0));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_graphics_gl_GLFrameBuffer[] {
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
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
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
};

static jclass interfaces[] { &class_arc_util_Disposable, };

static jclass innerClasses[] {
	&class_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder,
	&class_arc_graphics_gl_GLFrameBuffer$FrameBufferRenderBufferAttachmentSpec,
	&class_arc_graphics_gl_GLFrameBuffer$FrameBufferTextureAttachmentSpec,
	&class_arc_graphics_gl_GLFrameBuffer$FrameBufferCubemapBuilder,
	&class_arc_graphics_gl_GLFrameBuffer$FloatFrameBufferBuilder,
	&class_arc_graphics_gl_GLFrameBuffer$FrameBufferBuilder,
};

static FieldMetadata fields[] {
	{ "GL_DEPTH24_STENCIL8_OES", &class_int, (intptr_t) &SF_arc_graphics_gl_GLFrameBuffer_GL_DEPTH24_STENCIL8_OES, "I", 28 },
	{ "currentBoundFramebuffer", &class_arc_graphics_gl_GLFrameBuffer, (intptr_t) &SF_arc_graphics_gl_GLFrameBuffer_currentBoundFramebuffer, "Larc/graphics/gl/GLFrameBuffer;", 12 },
	{ "defaultFramebufferHandle", &class_int, (intptr_t) &SF_arc_graphics_gl_GLFrameBuffer_defaultFramebufferHandle, "I", 12 },
	{ "bufferNesting", &class_int, (intptr_t) &SF_arc_graphics_gl_GLFrameBuffer_bufferNesting, "I", 12 },
	{ "defaultFramebufferHandleInitialized", &class_boolean, (intptr_t) &SF_arc_graphics_gl_GLFrameBuffer_defaultFramebufferHandleInitialized, "Z", 12 },
	{ "textureAttachments", &class_arc_struct_Seq, offsetof(arc_graphics_gl_GLFrameBuffer, F_textureAttachments), "Larc/struct/Seq;", 4 },
	{ "lastBoundFramebuffer", &class_arc_graphics_gl_GLFrameBuffer, offsetof(arc_graphics_gl_GLFrameBuffer, F_lastBoundFramebuffer), "Larc/graphics/gl/GLFrameBuffer;", 4 },
	{ "framebufferHandle", &class_int, offsetof(arc_graphics_gl_GLFrameBuffer, F_framebufferHandle), "I", 4 },
	{ "depthbufferHandle", &class_int, offsetof(arc_graphics_gl_GLFrameBuffer, F_depthbufferHandle), "I", 4 },
	{ "stencilbufferHandle", &class_int, offsetof(arc_graphics_gl_GLFrameBuffer, F_stencilbufferHandle), "I", 4 },
	{ "depthStencilPackedBufferHandle", &class_int, offsetof(arc_graphics_gl_GLFrameBuffer, F_depthStencilPackedBufferHandle), "I", 4 },
	{ "hasDepthStencilPackedBuffer", &class_boolean, offsetof(arc_graphics_gl_GLFrameBuffer, F_hasDepthStencilPackedBuffer), "Z", 4 },
	{ "isMRT", &class_boolean, offsetof(arc_graphics_gl_GLFrameBuffer, F_isMRT), "Z", 4 },
	{ "bufferBuilder", &class_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder, offsetof(arc_graphics_gl_GLFrameBuffer, F_bufferBuilder), "Larc/graphics/gl/GLFrameBuffer$GLFrameBufferBuilder;", 4 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_graphics_gl_GLFrameBuffer, 0, "()V", 0 },
	{ "<init>", (intptr_t) init_arc_graphics_gl_GLFrameBuffer_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder, 0, "(Larc/graphics/gl/GLFrameBuffer$GLFrameBufferBuilder;)V", 4 },
	{ "getBufferNesting", (intptr_t) SM_arc_graphics_gl_GLFrameBuffer_getBufferNesting_R_int, 0, "()I", 9 },
	{ "unbind", (intptr_t) SM_arc_graphics_gl_GLFrameBuffer_unbind, 0, "()V", 9 },
	{ "getTexture", (intptr_t) M_arc_graphics_gl_GLFrameBuffer_getTexture_R_arc_graphics_GLTexture, VTABLE_arc_graphics_gl_GLFrameBuffer_getTexture_R_arc_graphics_GLTexture, "()Larc/graphics/GLTexture;", 1 },
	{ "getTextureAttachments", (intptr_t) M_arc_graphics_gl_GLFrameBuffer_getTextureAttachments_R_arc_struct_Seq, VTABLE_arc_graphics_gl_GLFrameBuffer_getTextureAttachments_R_arc_struct_Seq, "()Larc/struct/Seq;", 1 },
	{ "createTexture", 0, VTABLE_arc_graphics_gl_GLFrameBuffer_createTexture_arc_graphics_gl_GLFrameBuffer$FrameBufferTextureAttachmentSpec_R_arc_graphics_GLTexture, "(Larc/graphics/gl/GLFrameBuffer$FrameBufferTextureAttachmentSpec;)Larc/graphics/GLTexture;", 1028 },
	{ "disposeTexture", 0, VTABLE_arc_graphics_gl_GLFrameBuffer_disposeTexture_arc_graphics_GLTexture, "(Larc/graphics/GLTexture;)V", 1028 },
	{ "attachTexture", 0, VTABLE_arc_graphics_gl_GLFrameBuffer_attachTexture_int_arc_graphics_GLTexture, "(ILarc/graphics/GLTexture;)V", 1028 },
	{ "build", (intptr_t) M_arc_graphics_gl_GLFrameBuffer_build, VTABLE_arc_graphics_gl_GLFrameBuffer_build, "()V", 4 },
	{ "checkValidBuilder", (intptr_t) M_arc_graphics_gl_GLFrameBuffer_checkValidBuilder, VTABLE_arc_graphics_gl_GLFrameBuffer_checkValidBuilder, "()V", 2 },
	{ "dispose", (intptr_t) M_arc_graphics_gl_GLFrameBuffer_dispose, VTABLE_arc_graphics_gl_GLFrameBuffer_dispose, "()V", 1 },
	{ "bind", (intptr_t) M_arc_graphics_gl_GLFrameBuffer_bind, VTABLE_arc_graphics_gl_GLFrameBuffer_bind, "()V", 1 },
	{ "isBound", (intptr_t) M_arc_graphics_gl_GLFrameBuffer_isBound_R_boolean, VTABLE_arc_graphics_gl_GLFrameBuffer_isBound_R_boolean, "()Z", 1 },
	{ "begin", (intptr_t) M_arc_graphics_gl_GLFrameBuffer_begin_arc_graphics_Color, VTABLE_arc_graphics_gl_GLFrameBuffer_begin_arc_graphics_Color, "(Larc/graphics/Color;)V", 1 },
	{ "begin", (intptr_t) M_arc_graphics_gl_GLFrameBuffer_begin, VTABLE_arc_graphics_gl_GLFrameBuffer_begin, "()V", 1 },
	{ "beginBind", (intptr_t) M_arc_graphics_gl_GLFrameBuffer_beginBind, VTABLE_arc_graphics_gl_GLFrameBuffer_beginBind, "()V", 1 },
	{ "setFrameBufferViewport", (intptr_t) M_arc_graphics_gl_GLFrameBuffer_setFrameBufferViewport, VTABLE_arc_graphics_gl_GLFrameBuffer_setFrameBufferViewport, "()V", 4 },
	{ "end", (intptr_t) M_arc_graphics_gl_GLFrameBuffer_end, VTABLE_arc_graphics_gl_GLFrameBuffer_end, "()V", 1 },
	{ "endBind", (intptr_t) M_arc_graphics_gl_GLFrameBuffer_endBind, VTABLE_arc_graphics_gl_GLFrameBuffer_endBind, "()V", 1 },
	{ "getFramebufferHandle", (intptr_t) M_arc_graphics_gl_GLFrameBuffer_getFramebufferHandle_R_int, VTABLE_arc_graphics_gl_GLFrameBuffer_getFramebufferHandle_R_int, "()I", 1 },
	{ "getDepthBufferHandle", (intptr_t) M_arc_graphics_gl_GLFrameBuffer_getDepthBufferHandle_R_int, VTABLE_arc_graphics_gl_GLFrameBuffer_getDepthBufferHandle_R_int, "()I", 1 },
	{ "getStencilBufferHandle", (intptr_t) M_arc_graphics_gl_GLFrameBuffer_getStencilBufferHandle_R_int, VTABLE_arc_graphics_gl_GLFrameBuffer_getStencilBufferHandle_R_int, "()I", 1 },
	{ "getDepthStencilPackedBuffer", (intptr_t) M_arc_graphics_gl_GLFrameBuffer_getDepthStencilPackedBuffer_R_int, VTABLE_arc_graphics_gl_GLFrameBuffer_getDepthStencilPackedBuffer_R_int, "()I", 4 },
	{ "getHeight", (intptr_t) M_arc_graphics_gl_GLFrameBuffer_getHeight_R_int, VTABLE_arc_graphics_gl_GLFrameBuffer_getHeight_R_int, "()I", 1 },
	{ "getWidth", (intptr_t) M_arc_graphics_gl_GLFrameBuffer_getWidth_R_int, VTABLE_arc_graphics_gl_GLFrameBuffer_getWidth_R_int, "()I", 1 },
	{ "<clinit>", (intptr_t) clinit_arc_graphics_gl_GLFrameBuffer, 0, "()V", 8 },
};

Class class_arc_graphics_gl_GLFrameBuffer{
		.nativeName = (intptr_t) "arc/graphics/gl/GLFrameBuffer",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_graphics_gl_GLFrameBuffer),
		.classVtable = (intptr_t) vtable_arc_graphics_gl_GLFrameBuffer,
		.staticInitializer = (intptr_t) clinit_arc_graphics_gl_GLFrameBuffer,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_graphics_gl_GLFrameBuffer,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 6,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 1057,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 14,
		.nativeFields = (intptr_t) fields,
		.methodCount = 27,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 34,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_graphics_gl_GLFrameBuffer = registerClass(&class_arc_graphics_gl_GLFrameBuffer);

}
