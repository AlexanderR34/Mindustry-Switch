#include "arc/graphics/gl/FrameBuffer.h"
#include "java/lang/Math.h"
#include "arc/graphics/GLTexture.h"
#include "arc/graphics/TextureData.h"
#include "arc/graphics/gl/FrameBuffer.h"
#include "arc/util/Disposable.h"
#include "arc/graphics/gl/GLOnlyTextureData.h"
#include "arc/graphics/Texture.h"
#include "arc/graphics/gl/GLFrameBuffer_GLFrameBufferBuilder.h"
#include "arc/graphics/Pixmap_Format.h"
#include "arc/graphics/g2d/Draw.h"
#include "arc/graphics/gl/GLFrameBuffer_FrameBufferBuilder.h"
#include "arc/graphics/gl/Shader.h"
#include "arc/graphics/gl/GLFrameBuffer.h"
#include "java/lang/Object.h"
#include "arc/graphics/Texture_TextureFilter.h"
#include "arc/struct/Seq.h"
#include "arc/graphics/Texture_TextureWrap.h"
#include "arc/graphics/Gl.h"
#include "arc/graphics/gl/GLFrameBuffer_FrameBufferTextureAttachmentSpec.h"

extern "C" {


void mark_arc_graphics_gl_FrameBuffer(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_graphics_gl_GLFrameBuffer(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (arc_graphics_gl_FrameBuffer *) object;
	if (self->F_format)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_format)->clazz)->markFunction)((jobject) self->F_format, mark, depth + 1);
}

void clinit_arc_graphics_gl_FrameBuffer(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_graphics_gl_GLFrameBuffer(ctx);
}

void init_arc_graphics_gl_FrameBuffer_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/FrameBuffer:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_gl_FrameBuffer(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(33);
	init_arc_graphics_gl_GLFrameBuffer_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(34);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_graphics_gl_FrameBuffer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/FrameBuffer:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_gl_FrameBuffer(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(38);
	init_arc_graphics_gl_FrameBuffer_int_int(ctx, (frame[0].o), (jint(2)), (jint(2)));
	LINE_NUMBER(39);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_graphics_gl_FrameBuffer_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/FrameBuffer:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_gl_FrameBuffer(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(43);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Pixmap$Format(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Pixmap$Format_rgba8888;
	init_arc_graphics_gl_FrameBuffer_arc_graphics_Pixmap$Format_int_int_boolean_boolean(ctx, sp[0].o, sp[1].o, (frame[1].i), (frame[2].i), (jint(0)), (jint(0)));
	LINE_NUMBER(44);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_graphics_gl_FrameBuffer_arc_graphics_Pixmap$Format_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/FrameBuffer:<init>", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_gl_FrameBuffer(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(48);
	init_arc_graphics_gl_FrameBuffer_arc_graphics_Pixmap$Format_int_int_boolean_boolean(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].i), (jint(0)), (jint(0)));
	LINE_NUMBER(49);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_graphics_gl_FrameBuffer_arc_graphics_Pixmap$Format_int_int_boolean(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jbool param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/FrameBuffer:<init>", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_gl_FrameBuffer(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(53);
	init_arc_graphics_gl_FrameBuffer_arc_graphics_Pixmap$Format_int_int_boolean_boolean(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].i), (frame[4].i), (jint(0)));
	LINE_NUMBER(54);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_graphics_gl_FrameBuffer_int_int_boolean(jcontext ctx, jobject self, jint param0, jint param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/FrameBuffer:<init>", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_gl_FrameBuffer(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(58);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Pixmap$Format(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Pixmap$Format_rgba8888;
	init_arc_graphics_gl_FrameBuffer_arc_graphics_Pixmap$Format_int_int_boolean_boolean(ctx, sp[0].o, sp[1].o, (frame[1].i), (frame[2].i), (frame[3].i), (jint(0)));
	LINE_NUMBER(59);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_graphics_gl_FrameBuffer_arc_graphics_Pixmap$Format_int_int_boolean_boolean(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jbool param3, jbool param4) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/FrameBuffer:<init>", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_gl_FrameBuffer(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(70);
	init_arc_graphics_gl_GLFrameBuffer(ctx, (frame[0].o));
	LINE_NUMBER(71);
	((func_arc_graphics_gl_FrameBuffer_create_arc_graphics_Pixmap$Format_int_int_boolean_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_create_arc_graphics_Pixmap$Format_int_int_boolean_boolean])(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].i), (frame[4].i), (frame[5].i));
	LINE_NUMBER(72);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_gl_FrameBuffer_create_arc_graphics_Pixmap$Format_int_int_boolean_boolean(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jbool param3, jbool param4) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/FrameBuffer:create", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(75);
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (frame[2].i), (jint(2)));
	frame[2].i = temp0;
	LINE_NUMBER(76);
	jint temp1 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (frame[3].i), (jint(2)));
	frame[3].i = temp1;
	LINE_NUMBER(77);
	((arc_graphics_gl_FrameBuffer *) NULL_CHECK((frame[0].o)))->F_format = (jref) (frame[1].o);
	LINE_NUMBER(78);
	clinit_arc_graphics_gl_GLFrameBuffer$FrameBufferBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_gl_GLFrameBuffer$FrameBufferBuilder);
	init_arc_graphics_gl_GLFrameBuffer$FrameBufferBuilder_int_int(ctx, sp[0].o, (frame[2].i), (frame[3].i));
	frame[6].o = sp[0].o;
	LINE_NUMBER(79);
	sp[0].o = (jobject)((func_arc_graphics_gl_GLFrameBuffer$FrameBufferBuilder_addBasicColorTextureAttachment_arc_graphics_Pixmap$Format_R_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_graphics_gl_GLFrameBuffer$FrameBufferBuilder_addBasicColorTextureAttachment_arc_graphics_Pixmap$Format_R_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder])(ctx, (frame[6].o), (frame[1].o));
	LINE_NUMBER(80);
	if ((frame[4].i) == 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((func_arc_graphics_gl_GLFrameBuffer$FrameBufferBuilder_addBasicDepthRenderBuffer_R_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_graphics_gl_GLFrameBuffer$FrameBufferBuilder_addBasicDepthRenderBuffer_R_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder])(ctx, (frame[6].o));
	}
label_6:;
	{
	LINE_NUMBER(81);
	if ((frame[5].i) == 0) goto label_7;
	}
	{
	sp[0].o = (jobject)((func_arc_graphics_gl_GLFrameBuffer$FrameBufferBuilder_addBasicStencilRenderBuffer_R_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_graphics_gl_GLFrameBuffer$FrameBufferBuilder_addBasicStencilRenderBuffer_R_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder])(ctx, (frame[6].o));
	}
label_7:;
	{
	LINE_NUMBER(82);
	((arc_graphics_gl_GLFrameBuffer *) NULL_CHECK((frame[0].o)))->F_bufferBuilder = (jref) (frame[6].o);
	LINE_NUMBER(83);
	((func_arc_graphics_gl_FrameBuffer_build) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_build])(ctx, (frame[0].o));
	LINE_NUMBER(84);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_gl_FrameBuffer_blit_arc_graphics_gl_Shader(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/FrameBuffer:blit", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(88);
	SM_arc_graphics_g2d_Draw_blit_arc_graphics_gl_FrameBuffer_arc_graphics_gl_Shader(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(89);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_graphics_gl_FrameBuffer_resizeCheck_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/FrameBuffer:resizeCheck", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(92);
	jint temp0 = (jint)((func_arc_graphics_gl_FrameBuffer_getWidth_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_getWidth_R_int])(ctx, (frame[0].o));
	frame[3].i = temp0;
	jint temp1 = (jint)((func_arc_graphics_gl_FrameBuffer_getHeight_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_getHeight_R_int])(ctx, (frame[0].o));
	frame[4].i = temp1;
	LINE_NUMBER(93);
	((func_arc_graphics_gl_FrameBuffer_resize_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_resize_int_int])(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	LINE_NUMBER(94);
	jint temp2 = frame[3].i;
	jint temp3 = (jint)((func_arc_graphics_gl_FrameBuffer_getWidth_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_getWidth_R_int])(ctx, (frame[0].o));
	if (temp2 != temp3) goto label_4;
	}
	{
	jint temp0 = frame[4].i;
	jint temp1 = (jint)((func_arc_graphics_gl_FrameBuffer_getHeight_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_getHeight_R_int])(ctx, (frame[0].o));
	if (temp0 == temp1) goto label_5;
	}
label_4:;
	INST_ICONST(1);
	goto label_6;
label_5:;
	INST_ICONST(0);
label_6:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_arc_graphics_gl_FrameBuffer_resize_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/FrameBuffer:resize", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(102);
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (frame[1].i), (jint(2)));
	frame[1].i = temp0;
	LINE_NUMBER(103);
	jint temp1 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (frame[2].i), (jint(2)));
	frame[2].i = temp1;
	LINE_NUMBER(106);
	jint temp2 = frame[1].i;
	jint temp3 = (jint)((func_arc_graphics_gl_FrameBuffer_getWidth_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_getWidth_R_int])(ctx, (frame[0].o));
	if (temp2 != temp3) goto label_3;
	}
	{
	jint temp0 = frame[2].i;
	jint temp1 = (jint)((func_arc_graphics_gl_FrameBuffer_getHeight_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_getHeight_R_int])(ctx, (frame[0].o));
	if (temp0 != temp1) goto label_3;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(108);
	sp[0].o = (jobject)((func_arc_graphics_gl_FrameBuffer_getTexture_R_arc_graphics_GLTexture) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_getTexture_R_arc_graphics_GLTexture])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_arc_graphics_Texture_getMinFilter_R_arc_graphics_Texture$TextureFilter) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_graphics_Texture, sp[0].o)))->vtable)[VTABLE_arc_graphics_Texture_getMinFilter_R_arc_graphics_Texture$TextureFilter])(ctx, (checkCast(ctx, &class_arc_graphics_Texture, sp[0].o)));
	frame[3].o = sp[0].o;
	sp[0].o = (jobject)((func_arc_graphics_gl_FrameBuffer_getTexture_R_arc_graphics_GLTexture) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_getTexture_R_arc_graphics_GLTexture])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_arc_graphics_Texture_getMagFilter_R_arc_graphics_Texture$TextureFilter) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_graphics_Texture, sp[0].o)))->vtable)[VTABLE_arc_graphics_Texture_getMagFilter_R_arc_graphics_Texture$TextureFilter])(ctx, (checkCast(ctx, &class_arc_graphics_Texture, sp[0].o)));
	frame[4].o = sp[0].o;
	LINE_NUMBER(109);
	if (((jint)((arc_graphics_gl_GLFrameBuffer *) NULL_CHECK((frame[0].o)))->F_depthbufferHandle) == 0) goto label_6;
	}
	INST_ICONST(1);
	goto label_7;
label_6:;
	INST_ICONST(0);
label_7:;
	{
	sp -= 1;
	frame[5].i = sp[0].i;
	if (((jint)((arc_graphics_gl_GLFrameBuffer *) NULL_CHECK((frame[0].o)))->F_stencilbufferHandle) == 0) goto label_9;
	}
	INST_ICONST(1);
	goto label_10;
label_9:;
	INST_ICONST(0);
label_10:;
	{
	sp -= 1;
	frame[6].i = sp[0].i;
	LINE_NUMBER(110);
	((func_arc_graphics_gl_FrameBuffer_dispose) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_dispose])(ctx, (frame[0].o));
	LINE_NUMBER(112);
	clinit_arc_graphics_gl_GLFrameBuffer$FrameBufferBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_gl_GLFrameBuffer$FrameBufferBuilder);
	init_arc_graphics_gl_GLFrameBuffer$FrameBufferBuilder_int_int(ctx, sp[0].o, (frame[1].i), (frame[2].i));
	frame[7].o = sp[0].o;
	LINE_NUMBER(113);
	sp[0].o = frame[7].o;
	sp[1].o = (jobject)((arc_graphics_gl_FrameBuffer *) NULL_CHECK((frame[0].o)))->F_format;
	sp[0].o = (jobject)((func_arc_graphics_gl_GLFrameBuffer$FrameBufferBuilder_addBasicColorTextureAttachment_arc_graphics_Pixmap$Format_R_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_GLFrameBuffer$FrameBufferBuilder_addBasicColorTextureAttachment_arc_graphics_Pixmap$Format_R_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(114);
	if ((frame[5].i) == 0) goto label_15;
	}
	{
	sp[0].o = (jobject)((func_arc_graphics_gl_GLFrameBuffer$FrameBufferBuilder_addBasicDepthRenderBuffer_R_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_graphics_gl_GLFrameBuffer$FrameBufferBuilder_addBasicDepthRenderBuffer_R_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder])(ctx, (frame[7].o));
	}
label_15:;
	{
	LINE_NUMBER(115);
	if ((frame[6].i) == 0) goto label_16;
	}
	{
	sp[0].o = (jobject)((func_arc_graphics_gl_GLFrameBuffer$FrameBufferBuilder_addBasicStencilRenderBuffer_R_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_graphics_gl_GLFrameBuffer$FrameBufferBuilder_addBasicStencilRenderBuffer_R_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder])(ctx, (frame[7].o));
	}
label_16:;
	{
	LINE_NUMBER(116);
	((arc_graphics_gl_GLFrameBuffer *) NULL_CHECK((frame[0].o)))->F_bufferBuilder = (jref) (frame[7].o);
	LINE_NUMBER(117);
	sp[0].o = (jobject)((arc_graphics_gl_GLFrameBuffer *) NULL_CHECK((frame[0].o)))->F_textureAttachments;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(118);
	((arc_graphics_gl_GLFrameBuffer *) NULL_CHECK((frame[0].o)))->F_framebufferHandle = (jint(0));
	LINE_NUMBER(119);
	((arc_graphics_gl_GLFrameBuffer *) NULL_CHECK((frame[0].o)))->F_depthbufferHandle = (jint(0));
	LINE_NUMBER(120);
	((arc_graphics_gl_GLFrameBuffer *) NULL_CHECK((frame[0].o)))->F_stencilbufferHandle = (jint(0));
	LINE_NUMBER(121);
	((arc_graphics_gl_GLFrameBuffer *) NULL_CHECK((frame[0].o)))->F_depthStencilPackedBufferHandle = (jint(0));
	LINE_NUMBER(122);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp0 = jint(0);
	((arc_graphics_gl_GLFrameBuffer *) NULL_CHECK(sp[1].o))->F_isMRT = temp0;
	((arc_graphics_gl_GLFrameBuffer *) NULL_CHECK(sp[0].o))->F_hasDepthStencilPackedBuffer = temp0;
	LINE_NUMBER(123);
	((func_arc_graphics_gl_FrameBuffer_build) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_build])(ctx, (frame[0].o));
	LINE_NUMBER(124);
	sp[0].o = (jobject)((func_arc_graphics_gl_FrameBuffer_getTexture_R_arc_graphics_GLTexture) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_getTexture_R_arc_graphics_GLTexture])(ctx, (frame[0].o));
	((func_arc_graphics_Texture_setFilter_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_graphics_Texture, sp[0].o)))->vtable)[VTABLE_arc_graphics_Texture_setFilter_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter])(ctx, (checkCast(ctx, &class_arc_graphics_Texture, sp[0].o)), (frame[3].o), (frame[4].o));
	LINE_NUMBER(125);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_gl_FrameBuffer_unbind(jcontext ctx) {
	FrameInfo frameInfo { "arc/graphics/gl/FrameBuffer:unbind", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

	clinit_arc_graphics_gl_FrameBuffer(ctx);
	{
	LINE_NUMBER(129);
	SM_arc_graphics_gl_GLFrameBuffer_unbind(ctx);
	LINE_NUMBER(130);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_gl_FrameBuffer_createTexture_arc_graphics_gl_GLFrameBuffer$FrameBufferTextureAttachmentSpec_R_arc_graphics_Texture(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/FrameBuffer:createTexture", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(134);
	clinit_arc_graphics_gl_GLOnlyTextureData(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_gl_GLOnlyTextureData);
	sp[1].o = (jobject)((arc_graphics_gl_GLFrameBuffer *) NULL_CHECK((frame[0].o)))->F_bufferBuilder;
	jint temp0 = (jint)((arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder *) NULL_CHECK(sp[1].o))->F_width;
	sp[1].o = (jobject)((arc_graphics_gl_GLFrameBuffer *) NULL_CHECK((frame[0].o)))->F_bufferBuilder;
	init_arc_graphics_gl_GLOnlyTextureData_int_int_int_int_int_int(ctx, sp[0].o, temp0, ((jint)((arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder *) NULL_CHECK(sp[1].o))->F_height), (jint(0)), ((jint)((arc_graphics_gl_GLFrameBuffer$FrameBufferTextureAttachmentSpec *) NULL_CHECK((frame[1].o)))->F_internalFormat), ((jint)((arc_graphics_gl_GLFrameBuffer$FrameBufferTextureAttachmentSpec *) NULL_CHECK((frame[1].o)))->F_format), ((jint)((arc_graphics_gl_GLFrameBuffer$FrameBufferTextureAttachmentSpec *) NULL_CHECK((frame[1].o)))->F_type));
	frame[2].o = sp[0].o;
	LINE_NUMBER(135);
	clinit_arc_graphics_Texture(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Texture);
	init_arc_graphics_Texture_arc_graphics_TextureData(ctx, sp[0].o, (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(136);
	sp[0].o = frame[3].o;
	clinit_arc_graphics_Texture$TextureFilter(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Texture$TextureFilter_linear;
	clinit_arc_graphics_Texture$TextureFilter(ctx);
	sp[2].o = (jobject)SF_arc_graphics_Texture$TextureFilter_linear;
	((func_arc_graphics_Texture_setFilter_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Texture_setFilter_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(137);
	sp[0].o = frame[3].o;
	clinit_arc_graphics_Texture$TextureWrap(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Texture$TextureWrap_clampToEdge;
	clinit_arc_graphics_Texture$TextureWrap(ctx);
	sp[2].o = (jobject)SF_arc_graphics_Texture$TextureWrap_clampToEdge;
	((func_arc_graphics_Texture_setWrap_arc_graphics_Texture$TextureWrap_arc_graphics_Texture$TextureWrap) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Texture_setWrap_arc_graphics_Texture$TextureWrap_arc_graphics_Texture$TextureWrap])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(138);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

void M_arc_graphics_gl_FrameBuffer_disposeTexture_arc_graphics_Texture(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/FrameBuffer:disposeTexture", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(143);
	((func_arc_graphics_Texture_dispose) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_graphics_Texture_dispose])(ctx, (frame[1].o));
	LINE_NUMBER(144);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_gl_FrameBuffer_attachTexture_int_arc_graphics_Texture(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/FrameBuffer:attachTexture", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(148);
	jint temp0 = jint(36160);
	jint temp1 = frame[1].i;
	jint temp2 = 3553;
	jint temp3 = (jint)((func_arc_graphics_Texture_getTextureObjectHandle_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_graphics_Texture_getTextureObjectHandle_R_int])(ctx, (frame[2].o));
	SM_arc_graphics_Gl_framebufferTexture2D_int_int_int_int_int(ctx, temp0, temp1, temp2, temp3, (jint(0)));
	LINE_NUMBER(149);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_gl_FrameBuffer_attachTexture_int_arc_graphics_GLTexture(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/FrameBuffer:attachTexture", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(26);
	((func_arc_graphics_gl_FrameBuffer_attachTexture_int_arc_graphics_Texture) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_attachTexture_int_arc_graphics_Texture])(ctx, (frame[0].o), (frame[1].i), (checkCast(ctx, &class_arc_graphics_Texture, (frame[2].o))));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_gl_FrameBuffer_disposeTexture_arc_graphics_GLTexture(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/FrameBuffer:disposeTexture", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(26);
	((func_arc_graphics_gl_FrameBuffer_disposeTexture_arc_graphics_Texture) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_disposeTexture_arc_graphics_Texture])(ctx, (frame[0].o), (checkCast(ctx, &class_arc_graphics_Texture, (frame[1].o))));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_gl_FrameBuffer_createTexture_arc_graphics_gl_GLFrameBuffer$FrameBufferTextureAttachmentSpec_R_arc_graphics_GLTexture(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/FrameBuffer:createTexture", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(26);
	sp[0].o = (jobject)((func_arc_graphics_gl_FrameBuffer_createTexture_arc_graphics_gl_GLFrameBuffer$FrameBufferTextureAttachmentSpec_R_arc_graphics_Texture) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_createTexture_arc_graphics_gl_GLFrameBuffer$FrameBufferTextureAttachmentSpec_R_arc_graphics_Texture])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_arc_graphics_gl_FrameBuffer[] {
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
	(void *) M_arc_graphics_gl_FrameBuffer_createTexture_arc_graphics_gl_GLFrameBuffer$FrameBufferTextureAttachmentSpec_R_arc_graphics_GLTexture,
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
	(void *) M_arc_graphics_gl_FrameBuffer_create_arc_graphics_Pixmap$Format_int_int_boolean_boolean,
	(void *) M_arc_graphics_gl_FrameBuffer_blit_arc_graphics_gl_Shader,
	(void *) M_arc_graphics_gl_FrameBuffer_resizeCheck_int_int_R_boolean,
	(void *) M_arc_graphics_gl_FrameBuffer_resize_int_int,
	(void *) M_arc_graphics_gl_FrameBuffer_createTexture_arc_graphics_gl_GLFrameBuffer$FrameBufferTextureAttachmentSpec_R_arc_graphics_Texture,
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

static FieldMetadata fields[] {
	{ "format", &class_arc_graphics_Pixmap$Format, offsetof(arc_graphics_gl_FrameBuffer, F_format), "Larc/graphics/Pixmap$Format;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_graphics_gl_FrameBuffer_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder, 0, "(Larc/graphics/gl/GLFrameBuffer$GLFrameBufferBuilder;)V", 4 },
	{ "<init>", (intptr_t) init_arc_graphics_gl_FrameBuffer, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_arc_graphics_gl_FrameBuffer_int_int, 0, "(II)V", 1 },
	{ "<init>", (intptr_t) init_arc_graphics_gl_FrameBuffer_arc_graphics_Pixmap$Format_int_int, 0, "(Larc/graphics/Pixmap$Format;II)V", 1 },
	{ "<init>", (intptr_t) init_arc_graphics_gl_FrameBuffer_arc_graphics_Pixmap$Format_int_int_boolean, 0, "(Larc/graphics/Pixmap$Format;IIZ)V", 1 },
	{ "<init>", (intptr_t) init_arc_graphics_gl_FrameBuffer_int_int_boolean, 0, "(IIZ)V", 1 },
	{ "<init>", (intptr_t) init_arc_graphics_gl_FrameBuffer_arc_graphics_Pixmap$Format_int_int_boolean_boolean, 0, "(Larc/graphics/Pixmap$Format;IIZZ)V", 1 },
	{ "create", (intptr_t) M_arc_graphics_gl_FrameBuffer_create_arc_graphics_Pixmap$Format_int_int_boolean_boolean, VTABLE_arc_graphics_gl_FrameBuffer_create_arc_graphics_Pixmap$Format_int_int_boolean_boolean, "(Larc/graphics/Pixmap$Format;IIZZ)V", 4 },
	{ "blit", (intptr_t) M_arc_graphics_gl_FrameBuffer_blit_arc_graphics_gl_Shader, VTABLE_arc_graphics_gl_FrameBuffer_blit_arc_graphics_gl_Shader, "(Larc/graphics/gl/Shader;)V", 1 },
	{ "resizeCheck", (intptr_t) M_arc_graphics_gl_FrameBuffer_resizeCheck_int_int_R_boolean, VTABLE_arc_graphics_gl_FrameBuffer_resizeCheck_int_int_R_boolean, "(II)Z", 1 },
	{ "resize", (intptr_t) M_arc_graphics_gl_FrameBuffer_resize_int_int, VTABLE_arc_graphics_gl_FrameBuffer_resize_int_int, "(II)V", 1 },
	{ "unbind", (intptr_t) SM_arc_graphics_gl_FrameBuffer_unbind, 0, "()V", 9 },
	{ "createTexture", (intptr_t) M_arc_graphics_gl_FrameBuffer_createTexture_arc_graphics_gl_GLFrameBuffer$FrameBufferTextureAttachmentSpec_R_arc_graphics_Texture, VTABLE_arc_graphics_gl_FrameBuffer_createTexture_arc_graphics_gl_GLFrameBuffer$FrameBufferTextureAttachmentSpec_R_arc_graphics_Texture, "(Larc/graphics/gl/GLFrameBuffer$FrameBufferTextureAttachmentSpec;)Larc/graphics/Texture;", 4 },
	{ "disposeTexture", (intptr_t) M_arc_graphics_gl_FrameBuffer_disposeTexture_arc_graphics_Texture, VTABLE_arc_graphics_gl_FrameBuffer_disposeTexture_arc_graphics_Texture, "(Larc/graphics/Texture;)V", 4 },
	{ "attachTexture", (intptr_t) M_arc_graphics_gl_FrameBuffer_attachTexture_int_arc_graphics_Texture, VTABLE_arc_graphics_gl_FrameBuffer_attachTexture_int_arc_graphics_Texture, "(ILarc/graphics/Texture;)V", 4 },
	{ "attachTexture", (intptr_t) M_arc_graphics_gl_FrameBuffer_attachTexture_int_arc_graphics_GLTexture, VTABLE_arc_graphics_gl_FrameBuffer_attachTexture_int_arc_graphics_GLTexture, "(ILarc/graphics/GLTexture;)V", 4164 },
	{ "disposeTexture", (intptr_t) M_arc_graphics_gl_FrameBuffer_disposeTexture_arc_graphics_GLTexture, VTABLE_arc_graphics_gl_FrameBuffer_disposeTexture_arc_graphics_GLTexture, "(Larc/graphics/GLTexture;)V", 4164 },
	{ "createTexture", (intptr_t) M_arc_graphics_gl_FrameBuffer_createTexture_arc_graphics_gl_GLFrameBuffer$FrameBufferTextureAttachmentSpec_R_arc_graphics_GLTexture, VTABLE_arc_graphics_gl_FrameBuffer_createTexture_arc_graphics_gl_GLFrameBuffer$FrameBufferTextureAttachmentSpec_R_arc_graphics_GLTexture, "(Larc/graphics/gl/GLFrameBuffer$FrameBufferTextureAttachmentSpec;)Larc/graphics/GLTexture;", 4164 },
};

Class class_arc_graphics_gl_FrameBuffer{
		.nativeName = (intptr_t) "arc/graphics/gl/FrameBuffer",
		.parentClass = (intptr_t) &class_arc_graphics_gl_GLFrameBuffer,
		.size = sizeof(arc_graphics_gl_FrameBuffer),
		.classVtable = (intptr_t) vtable_arc_graphics_gl_FrameBuffer,
		.staticInitializer = (intptr_t) clinit_arc_graphics_gl_FrameBuffer,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_graphics_gl_FrameBuffer,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 18,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 41,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_graphics_gl_FrameBuffer = registerClass(&class_arc_graphics_gl_FrameBuffer);

}
