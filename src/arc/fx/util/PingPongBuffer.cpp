#include "arc/fx/util/PingPongBuffer.h"
#include "arc/graphics/GLTexture.h"
#include "arc/Core.h"
#include "arc/graphics/gl/FrameBuffer.h"
#include "arc/graphics/Texture.h"
#include "arc/graphics/Color.h"
#include "arc/graphics/Pixmap_Format.h"
#include "arc/Graphics.h"
#include "java/lang/Object.h"
#include "arc/graphics/gl/GLFrameBuffer.h"
#include "java/lang/String.h"
#include "arc/fx/util/PingPongBuffer.h"
#include "arc/graphics/Texture_TextureFilter.h"
#include "java/lang/IllegalStateException.h"
#include "arc/graphics/Texture_TextureWrap.h"
#include "arc/graphics/Gl.h"

extern "C" {


void mark_arc_fx_util_PingPongBuffer(jobject object, jint mark, jint depth) {
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
	auto self = (arc_fx_util_PingPongBuffer *) object;
	if (self->F_buffer1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_buffer1)->clazz)->markFunction)((jobject) self->F_buffer1, mark, depth + 1);
	if (self->F_buffer2)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_buffer2)->clazz)->markFunction)((jobject) self->F_buffer2, mark, depth + 1);
	if (self->F_bufDst)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_bufDst)->clazz)->markFunction)((jobject) self->F_bufDst, mark, depth + 1);
	if (self->F_bufSrc)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_bufSrc)->clazz)->markFunction)((jobject) self->F_bufSrc, mark, depth + 1);
	if (self->F_wrapU)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_wrapU)->clazz)->markFunction)((jobject) self->F_wrapU, mark, depth + 1);
	if (self->F_wrapV)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_wrapV)->clazz)->markFunction)((jobject) self->F_wrapV, mark, depth + 1);
	if (self->F_filterMin)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_filterMin)->clazz)->markFunction)((jobject) self->F_filterMin, mark, depth + 1);
	if (self->F_filterMag)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_filterMag)->clazz)->markFunction)((jobject) self->F_filterMag, mark, depth + 1);
}

void clinit_arc_fx_util_PingPongBuffer(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_fx_util_PingPongBuffer_arc_graphics_Pixmap$Format(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/fx/util/PingPongBuffer:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_fx_util_PingPongBuffer(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(54);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_arc_Core(ctx);
	sp[2].o = (jobject)SF_arc_Core_graphics;
	jint temp0 = (jint)((func_arc_Graphics_getWidth_R_int) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_Graphics_getWidth_R_int])(ctx, sp[2].o);
	clinit_arc_Core(ctx);
	sp[2].o = (jobject)SF_arc_Core_graphics;
	jint temp1 = (jint)((func_arc_Graphics_getHeight_R_int) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_Graphics_getHeight_R_int])(ctx, sp[2].o);
	init_arc_fx_util_PingPongBuffer_arc_graphics_Pixmap$Format_int_int(ctx, sp[0].o, sp[1].o, temp0, temp1);
	LINE_NUMBER(55);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_fx_util_PingPongBuffer_arc_graphics_Pixmap$Format_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/fx/util/PingPongBuffer:<init>", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_fx_util_PingPongBuffer(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(58);
	init_arc_fx_util_PingPongBuffer_arc_graphics_Pixmap$Format_int_int_boolean_boolean(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].i), (jint(0)), (jint(0)));
	LINE_NUMBER(59);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_fx_util_PingPongBuffer_arc_graphics_Pixmap$Format_int_int_boolean_boolean(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jbool param3, jbool param4) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/fx/util/PingPongBuffer:<init>", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_fx_util_PingPongBuffer(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(65);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(42);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Texture$TextureWrap(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Texture$TextureWrap_clampToEdge;
	((arc_fx_util_PingPongBuffer *) NULL_CHECK(sp[0].o))->F_wrapU = (jref) sp[1].o;
	LINE_NUMBER(43);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Texture$TextureWrap(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Texture$TextureWrap_clampToEdge;
	((arc_fx_util_PingPongBuffer *) NULL_CHECK(sp[0].o))->F_wrapV = (jref) sp[1].o;
	LINE_NUMBER(44);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Texture$TextureFilter(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Texture$TextureFilter_linear;
	((arc_fx_util_PingPongBuffer *) NULL_CHECK(sp[0].o))->F_filterMin = (jref) sp[1].o;
	LINE_NUMBER(45);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Texture$TextureFilter(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Texture$TextureFilter_linear;
	((arc_fx_util_PingPongBuffer *) NULL_CHECK(sp[0].o))->F_filterMag = (jref) sp[1].o;
	LINE_NUMBER(66);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_gl_FrameBuffer(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_gl_FrameBuffer);
	init_arc_graphics_gl_FrameBuffer_arc_graphics_Pixmap$Format_int_int_boolean_boolean(ctx, sp[1].o, (frame[1].o), (frame[2].i), (frame[3].i), (frame[4].i), (frame[5].i));
	((arc_fx_util_PingPongBuffer *) NULL_CHECK(sp[0].o))->F_buffer1 = (jref) sp[1].o;
	LINE_NUMBER(67);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_gl_FrameBuffer(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_gl_FrameBuffer);
	init_arc_graphics_gl_FrameBuffer_arc_graphics_Pixmap$Format_int_int_boolean_boolean(ctx, sp[1].o, (frame[1].o), (frame[2].i), (frame[3].i), (frame[4].i), (frame[5].i));
	((arc_fx_util_PingPongBuffer *) NULL_CHECK(sp[0].o))->F_buffer2 = (jref) sp[1].o;
	LINE_NUMBER(68);
	((func_arc_fx_util_PingPongBuffer_rebind) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_fx_util_PingPongBuffer_rebind])(ctx, (frame[0].o));
	LINE_NUMBER(71);
	((arc_fx_util_PingPongBuffer *) NULL_CHECK((frame[0].o)))->F_writeState = (jint(0));
	LINE_NUMBER(72);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_fx_util_PingPongBuffer *) NULL_CHECK((frame[0].o)))->F_buffer1;
	((arc_fx_util_PingPongBuffer *) NULL_CHECK(sp[0].o))->F_bufDst = (jref) sp[1].o;
	LINE_NUMBER(73);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_fx_util_PingPongBuffer *) NULL_CHECK((frame[0].o)))->F_buffer2;
	((arc_fx_util_PingPongBuffer *) NULL_CHECK(sp[0].o))->F_bufSrc = (jref) sp[1].o;
	LINE_NUMBER(74);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_fx_util_PingPongBuffer_dispose(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/fx/util/PingPongBuffer:dispose", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(77);
	sp[0].o = (jobject)((arc_fx_util_PingPongBuffer *) NULL_CHECK((frame[0].o)))->F_buffer1;
	((func_arc_graphics_gl_FrameBuffer_dispose) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_dispose])(ctx, sp[0].o);
	LINE_NUMBER(78);
	sp[0].o = (jobject)((arc_fx_util_PingPongBuffer *) NULL_CHECK((frame[0].o)))->F_buffer2;
	((func_arc_graphics_gl_FrameBuffer_dispose) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_dispose])(ctx, sp[0].o);
	LINE_NUMBER(79);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_fx_util_PingPongBuffer_resize_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/fx/util/PingPongBuffer:resize", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(82);
	sp[0].o = (jobject)((arc_fx_util_PingPongBuffer *) NULL_CHECK((frame[0].o)))->F_buffer1;
	((func_arc_graphics_gl_FrameBuffer_resize_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_resize_int_int])(ctx, sp[0].o, (frame[1].i), (frame[2].i));
	LINE_NUMBER(83);
	sp[0].o = (jobject)((arc_fx_util_PingPongBuffer *) NULL_CHECK((frame[0].o)))->F_buffer2;
	((func_arc_graphics_gl_FrameBuffer_resize_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_resize_int_int])(ctx, sp[0].o, (frame[1].i), (frame[2].i));
	LINE_NUMBER(84);
	((func_arc_fx_util_PingPongBuffer_rebind) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_fx_util_PingPongBuffer_rebind])(ctx, (frame[0].o));
	LINE_NUMBER(85);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_fx_util_PingPongBuffer_rebind(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/fx/util/PingPongBuffer:rebind", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(92);
	sp[0].o = (jobject)((arc_fx_util_PingPongBuffer *) NULL_CHECK((frame[0].o)))->F_buffer1;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(93);
	sp[0].o = (jobject)((arc_fx_util_PingPongBuffer *) NULL_CHECK((frame[0].o)))->F_buffer1;
	sp[0].o = (jobject)((func_arc_graphics_gl_FrameBuffer_getTexture_R_arc_graphics_GLTexture) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_getTexture_R_arc_graphics_GLTexture])(ctx, sp[0].o);
	frame[1].o = (checkCast(ctx, &class_arc_graphics_Texture, sp[0].o));
	LINE_NUMBER(94);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((arc_fx_util_PingPongBuffer *) NULL_CHECK((frame[0].o)))->F_wrapU;
	sp[2].o = (jobject)((arc_fx_util_PingPongBuffer *) NULL_CHECK((frame[0].o)))->F_wrapV;
	((func_arc_graphics_Texture_setWrap_arc_graphics_Texture$TextureWrap_arc_graphics_Texture$TextureWrap) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Texture_setWrap_arc_graphics_Texture$TextureWrap_arc_graphics_Texture$TextureWrap])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(95);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((arc_fx_util_PingPongBuffer *) NULL_CHECK((frame[0].o)))->F_filterMin;
	sp[2].o = (jobject)((arc_fx_util_PingPongBuffer *) NULL_CHECK((frame[0].o)))->F_filterMag;
	((func_arc_graphics_Texture_setFilter_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Texture_setFilter_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_1:;
	{
	LINE_NUMBER(97);
	sp[0].o = (jobject)((arc_fx_util_PingPongBuffer *) NULL_CHECK((frame[0].o)))->F_buffer2;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	LINE_NUMBER(98);
	sp[0].o = (jobject)((arc_fx_util_PingPongBuffer *) NULL_CHECK((frame[0].o)))->F_buffer2;
	sp[0].o = (jobject)((func_arc_graphics_gl_FrameBuffer_getTexture_R_arc_graphics_GLTexture) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_getTexture_R_arc_graphics_GLTexture])(ctx, sp[0].o);
	frame[1].o = (checkCast(ctx, &class_arc_graphics_Texture, sp[0].o));
	LINE_NUMBER(99);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((arc_fx_util_PingPongBuffer *) NULL_CHECK((frame[0].o)))->F_wrapU;
	sp[2].o = (jobject)((arc_fx_util_PingPongBuffer *) NULL_CHECK((frame[0].o)))->F_wrapV;
	((func_arc_graphics_Texture_setWrap_arc_graphics_Texture$TextureWrap_arc_graphics_Texture$TextureWrap) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Texture_setWrap_arc_graphics_Texture$TextureWrap_arc_graphics_Texture$TextureWrap])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(100);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((arc_fx_util_PingPongBuffer *) NULL_CHECK((frame[0].o)))->F_filterMin;
	sp[2].o = (jobject)((arc_fx_util_PingPongBuffer *) NULL_CHECK((frame[0].o)))->F_filterMag;
	((func_arc_graphics_Texture_setFilter_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Texture_setFilter_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_5:;
	LINE_NUMBER(102);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_fx_util_PingPongBuffer_begin(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/fx/util/PingPongBuffer:begin", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(110);
	if (((jint)((arc_fx_util_PingPongBuffer *) NULL_CHECK((frame[0].o)))->F_capturing) == 0) goto label_1;
	}
	{
	LINE_NUMBER(111);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Ping pong buffer is already in capturing state."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(114);
	((arc_fx_util_PingPongBuffer *) NULL_CHECK((frame[0].o)))->F_capturing = (jint(1));
	LINE_NUMBER(115);
	sp[0].o = (jobject)((arc_fx_util_PingPongBuffer *) NULL_CHECK((frame[0].o)))->F_bufDst;
	((func_arc_graphics_gl_FrameBuffer_begin) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_begin])(ctx, sp[0].o);
	LINE_NUMBER(116);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_fx_util_PingPongBuffer_swap(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/fx/util/PingPongBuffer:swap", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(123);
	if (((jint)((arc_fx_util_PingPongBuffer *) NULL_CHECK((frame[0].o)))->F_capturing) == 0) goto label_1;
	}
	{
	LINE_NUMBER(124);
	sp[0].o = (jobject)((arc_fx_util_PingPongBuffer *) NULL_CHECK((frame[0].o)))->F_bufDst;
	((func_arc_graphics_gl_FrameBuffer_end) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_end])(ctx, sp[0].o);
	}
label_1:;
	{
	LINE_NUMBER(128);
	if (((jint)((arc_fx_util_PingPongBuffer *) NULL_CHECK((frame[0].o)))->F_writeState) == 0) goto label_3;
	}
	{
	LINE_NUMBER(129);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_fx_util_PingPongBuffer *) NULL_CHECK((frame[0].o)))->F_buffer1;
	((arc_fx_util_PingPongBuffer *) NULL_CHECK(sp[0].o))->F_bufSrc = (jref) sp[1].o;
	LINE_NUMBER(130);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_fx_util_PingPongBuffer *) NULL_CHECK((frame[0].o)))->F_buffer2;
	((arc_fx_util_PingPongBuffer *) NULL_CHECK(sp[0].o))->F_bufDst = (jref) sp[1].o;
	goto label_6;
	}
label_3:;
	{
	LINE_NUMBER(132);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_fx_util_PingPongBuffer *) NULL_CHECK((frame[0].o)))->F_buffer2;
	((arc_fx_util_PingPongBuffer *) NULL_CHECK(sp[0].o))->F_bufSrc = (jref) sp[1].o;
	LINE_NUMBER(133);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_fx_util_PingPongBuffer *) NULL_CHECK((frame[0].o)))->F_buffer1;
	((arc_fx_util_PingPongBuffer *) NULL_CHECK(sp[0].o))->F_bufDst = (jref) sp[1].o;
	}
label_6:;
	{
	LINE_NUMBER(136);
	if (((jint)((arc_fx_util_PingPongBuffer *) NULL_CHECK((frame[0].o)))->F_capturing) == 0) goto label_8;
	}
	{
	LINE_NUMBER(137);
	sp[0].o = (jobject)((arc_fx_util_PingPongBuffer *) NULL_CHECK((frame[0].o)))->F_bufDst;
	((func_arc_graphics_gl_FrameBuffer_begin) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_begin])(ctx, sp[0].o);
	}
label_8:;
	{
	LINE_NUMBER(140);
	sp[0].o = frame[0].o;
	sp += 1;
	if (((jint)((arc_fx_util_PingPongBuffer *) NULL_CHECK((frame[0].o)))->F_writeState) != 0) goto label_10;
	}
	INST_ICONST(1);
	goto label_11;
label_10:;
	INST_ICONST(0);
label_11:;
	{
	sp -= 2;
	((arc_fx_util_PingPongBuffer *) NULL_CHECK(sp[0].o))->F_writeState = sp[1].i;
	LINE_NUMBER(141);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_fx_util_PingPongBuffer_end(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/fx/util/PingPongBuffer:end", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(147);
	if (((jint)((arc_fx_util_PingPongBuffer *) NULL_CHECK((frame[0].o)))->F_capturing) != 0) goto label_1;
	}
	{
	LINE_NUMBER(148);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Ping pong is not in capturing state. You should call begin() before calling end()."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(150);
	sp[0].o = (jobject)((arc_fx_util_PingPongBuffer *) NULL_CHECK((frame[0].o)))->F_bufDst;
	((func_arc_graphics_gl_FrameBuffer_end) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_end])(ctx, sp[0].o);
	LINE_NUMBER(151);
	((arc_fx_util_PingPongBuffer *) NULL_CHECK((frame[0].o)))->F_capturing = (jint(0));
	LINE_NUMBER(152);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_fx_util_PingPongBuffer_getSrcTexture_R_arc_graphics_Texture(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/fx/util/PingPongBuffer:getSrcTexture", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(156);
	sp[0].o = (jobject)((arc_fx_util_PingPongBuffer *) NULL_CHECK((frame[0].o)))->F_bufSrc;
	sp[0].o = (jobject)((func_arc_graphics_gl_FrameBuffer_getTexture_R_arc_graphics_GLTexture) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_getTexture_R_arc_graphics_GLTexture])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_arc_graphics_Texture, sp[0].o));
	}

	popStackFrame(ctx);
}

jobject M_arc_fx_util_PingPongBuffer_getSrcBuffer_R_arc_graphics_gl_FrameBuffer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/fx/util/PingPongBuffer:getSrcBuffer", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(161);
	sp[0].o = (jobject)((arc_fx_util_PingPongBuffer *) NULL_CHECK((frame[0].o)))->F_bufSrc;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_fx_util_PingPongBuffer_getDstTexture_R_arc_graphics_Texture(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/fx/util/PingPongBuffer:getDstTexture", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(166);
	sp[0].o = (jobject)((arc_fx_util_PingPongBuffer *) NULL_CHECK((frame[0].o)))->F_bufDst;
	sp[0].o = (jobject)((func_arc_graphics_gl_FrameBuffer_getTexture_R_arc_graphics_GLTexture) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_getTexture_R_arc_graphics_GLTexture])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_arc_graphics_Texture, sp[0].o));
	}

	popStackFrame(ctx);
}

jobject M_arc_fx_util_PingPongBuffer_getDstBuffer_R_arc_graphics_gl_FrameBuffer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/fx/util/PingPongBuffer:getDstBuffer", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(171);
	sp[0].o = (jobject)((arc_fx_util_PingPongBuffer *) NULL_CHECK((frame[0].o)))->F_bufDst;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_fx_util_PingPongBuffer_setTextureParams_arc_graphics_Texture$TextureWrap_arc_graphics_Texture$TextureWrap_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/fx/util/PingPongBuffer:setTextureParams", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(175);
	((arc_fx_util_PingPongBuffer *) NULL_CHECK((frame[0].o)))->F_wrapU = (jref) (frame[1].o);
	LINE_NUMBER(176);
	((arc_fx_util_PingPongBuffer *) NULL_CHECK((frame[0].o)))->F_wrapV = (jref) (frame[2].o);
	LINE_NUMBER(177);
	((arc_fx_util_PingPongBuffer *) NULL_CHECK((frame[0].o)))->F_filterMin = (jref) (frame[3].o);
	LINE_NUMBER(178);
	((arc_fx_util_PingPongBuffer *) NULL_CHECK((frame[0].o)))->F_filterMag = (jref) (frame[4].o);
	LINE_NUMBER(179);
	((func_arc_fx_util_PingPongBuffer_rebind) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_fx_util_PingPongBuffer_rebind])(ctx, (frame[0].o));
	LINE_NUMBER(180);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_fx_util_PingPongBuffer_clear_arc_graphics_Color(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/fx/util/PingPongBuffer:clear", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(184);
	((func_arc_fx_util_PingPongBuffer_clear_float_float_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_fx_util_PingPongBuffer_clear_float_float_float_float])(ctx, (frame[0].o), ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[1].o)))->F_r), ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[1].o)))->F_g), ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[1].o)))->F_b), ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[1].o)))->F_a));
	LINE_NUMBER(185);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_fx_util_PingPongBuffer_clear_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/fx/util/PingPongBuffer:clear", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(189);
	frame[5].i = ((jint)((arc_fx_util_PingPongBuffer *) NULL_CHECK((frame[0].o)))->F_capturing);
	LINE_NUMBER(191);
	if ((frame[5].i) != 0) goto label_2;
	}
	{
	LINE_NUMBER(192);
	((func_arc_fx_util_PingPongBuffer_begin) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_fx_util_PingPongBuffer_begin])(ctx, (frame[0].o));
	}
label_2:;
	{
	LINE_NUMBER(195);
	SM_arc_graphics_Gl_clearColor_float_float_float_float(ctx, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f));
	LINE_NUMBER(196);
	SM_arc_graphics_Gl_clear_int(ctx, (16384));
	LINE_NUMBER(197);
	((func_arc_fx_util_PingPongBuffer_swap) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_fx_util_PingPongBuffer_swap])(ctx, (frame[0].o));
	LINE_NUMBER(198);
	SM_arc_graphics_Gl_clear_int(ctx, (16384));
	LINE_NUMBER(200);
	if ((frame[5].i) != 0) goto label_8;
	}
	{
	LINE_NUMBER(201);
	((func_arc_fx_util_PingPongBuffer_end) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_fx_util_PingPongBuffer_end])(ctx, (frame[0].o));
	}
label_8:;
	LINE_NUMBER(203);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_arc_fx_util_PingPongBuffer[] {
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
	(void *) M_arc_fx_util_PingPongBuffer_dispose,
	(void *) M_arc_fx_util_PingPongBuffer_resize_int_int,
	(void *) M_arc_fx_util_PingPongBuffer_rebind,
	(void *) M_arc_fx_util_PingPongBuffer_begin,
	(void *) M_arc_fx_util_PingPongBuffer_swap,
	(void *) M_arc_fx_util_PingPongBuffer_end,
	(void *) M_arc_fx_util_PingPongBuffer_getSrcTexture_R_arc_graphics_Texture,
	(void *) M_arc_fx_util_PingPongBuffer_getSrcBuffer_R_arc_graphics_gl_FrameBuffer,
	(void *) M_arc_fx_util_PingPongBuffer_getDstTexture_R_arc_graphics_Texture,
	(void *) M_arc_fx_util_PingPongBuffer_getDstBuffer_R_arc_graphics_gl_FrameBuffer,
	(void *) M_arc_fx_util_PingPongBuffer_setTextureParams_arc_graphics_Texture$TextureWrap_arc_graphics_Texture$TextureWrap_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter,
	(void *) M_arc_fx_util_PingPongBuffer_clear_arc_graphics_Color,
	(void *) M_arc_fx_util_PingPongBuffer_clear_float_float_float_float,
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
	{ "resize", "(II)V" },
	{ "rebind", "()V" },
	{ "begin", "()V" },
	{ "swap", "()V" },
	{ "end", "()V" },
	{ "getSrcTexture", "()Larc/graphics/Texture;" },
	{ "getSrcBuffer", "()Larc/graphics/gl/FrameBuffer;" },
	{ "getDstTexture", "()Larc/graphics/Texture;" },
	{ "getDstBuffer", "()Larc/graphics/gl/FrameBuffer;" },
	{ "setTextureParams", "(Larc/graphics/Texture$TextureWrap;Larc/graphics/Texture$TextureWrap;Larc/graphics/Texture$TextureFilter;Larc/graphics/Texture$TextureFilter;)V" },
	{ "clear", "(Larc/graphics/Color;)V" },
	{ "clear", "(FFFF)V" },
};

static FieldMetadata fields[] {
	{ "buffer1", &class_arc_graphics_gl_FrameBuffer, offsetof(arc_fx_util_PingPongBuffer, F_buffer1), "Larc/graphics/gl/FrameBuffer;", 18 },
	{ "buffer2", &class_arc_graphics_gl_FrameBuffer, offsetof(arc_fx_util_PingPongBuffer, F_buffer2), "Larc/graphics/gl/FrameBuffer;", 18 },
	{ "bufDst", &class_arc_graphics_gl_FrameBuffer, offsetof(arc_fx_util_PingPongBuffer, F_bufDst), "Larc/graphics/gl/FrameBuffer;", 2 },
	{ "bufSrc", &class_arc_graphics_gl_FrameBuffer, offsetof(arc_fx_util_PingPongBuffer, F_bufSrc), "Larc/graphics/gl/FrameBuffer;", 2 },
	{ "writeState", &class_boolean, offsetof(arc_fx_util_PingPongBuffer, F_writeState), "Z", 2 },
	{ "capturing", &class_boolean, offsetof(arc_fx_util_PingPongBuffer, F_capturing), "Z", 2 },
	{ "wrapU", &class_arc_graphics_Texture$TextureWrap, offsetof(arc_fx_util_PingPongBuffer, F_wrapU), "Larc/graphics/Texture$TextureWrap;", 2 },
	{ "wrapV", &class_arc_graphics_Texture$TextureWrap, offsetof(arc_fx_util_PingPongBuffer, F_wrapV), "Larc/graphics/Texture$TextureWrap;", 2 },
	{ "filterMin", &class_arc_graphics_Texture$TextureFilter, offsetof(arc_fx_util_PingPongBuffer, F_filterMin), "Larc/graphics/Texture$TextureFilter;", 2 },
	{ "filterMag", &class_arc_graphics_Texture$TextureFilter, offsetof(arc_fx_util_PingPongBuffer, F_filterMag), "Larc/graphics/Texture$TextureFilter;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_fx_util_PingPongBuffer_arc_graphics_Pixmap$Format, 0, "(Larc/graphics/Pixmap$Format;)V", 1 },
	{ "<init>", (intptr_t) init_arc_fx_util_PingPongBuffer_arc_graphics_Pixmap$Format_int_int, 0, "(Larc/graphics/Pixmap$Format;II)V", 1 },
	{ "<init>", (intptr_t) init_arc_fx_util_PingPongBuffer_arc_graphics_Pixmap$Format_int_int_boolean_boolean, 0, "(Larc/graphics/Pixmap$Format;IIZZ)V", 1 },
	{ "dispose", (intptr_t) M_arc_fx_util_PingPongBuffer_dispose, VTABLE_arc_fx_util_PingPongBuffer_dispose, "()V", 1 },
	{ "resize", (intptr_t) M_arc_fx_util_PingPongBuffer_resize_int_int, VTABLE_arc_fx_util_PingPongBuffer_resize_int_int, "(II)V", 1 },
	{ "rebind", (intptr_t) M_arc_fx_util_PingPongBuffer_rebind, VTABLE_arc_fx_util_PingPongBuffer_rebind, "()V", 1 },
	{ "begin", (intptr_t) M_arc_fx_util_PingPongBuffer_begin, VTABLE_arc_fx_util_PingPongBuffer_begin, "()V", 1 },
	{ "swap", (intptr_t) M_arc_fx_util_PingPongBuffer_swap, VTABLE_arc_fx_util_PingPongBuffer_swap, "()V", 1 },
	{ "end", (intptr_t) M_arc_fx_util_PingPongBuffer_end, VTABLE_arc_fx_util_PingPongBuffer_end, "()V", 1 },
	{ "getSrcTexture", (intptr_t) M_arc_fx_util_PingPongBuffer_getSrcTexture_R_arc_graphics_Texture, VTABLE_arc_fx_util_PingPongBuffer_getSrcTexture_R_arc_graphics_Texture, "()Larc/graphics/Texture;", 1 },
	{ "getSrcBuffer", (intptr_t) M_arc_fx_util_PingPongBuffer_getSrcBuffer_R_arc_graphics_gl_FrameBuffer, VTABLE_arc_fx_util_PingPongBuffer_getSrcBuffer_R_arc_graphics_gl_FrameBuffer, "()Larc/graphics/gl/FrameBuffer;", 1 },
	{ "getDstTexture", (intptr_t) M_arc_fx_util_PingPongBuffer_getDstTexture_R_arc_graphics_Texture, VTABLE_arc_fx_util_PingPongBuffer_getDstTexture_R_arc_graphics_Texture, "()Larc/graphics/Texture;", 1 },
	{ "getDstBuffer", (intptr_t) M_arc_fx_util_PingPongBuffer_getDstBuffer_R_arc_graphics_gl_FrameBuffer, VTABLE_arc_fx_util_PingPongBuffer_getDstBuffer_R_arc_graphics_gl_FrameBuffer, "()Larc/graphics/gl/FrameBuffer;", 1 },
	{ "setTextureParams", (intptr_t) M_arc_fx_util_PingPongBuffer_setTextureParams_arc_graphics_Texture$TextureWrap_arc_graphics_Texture$TextureWrap_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter, VTABLE_arc_fx_util_PingPongBuffer_setTextureParams_arc_graphics_Texture$TextureWrap_arc_graphics_Texture$TextureWrap_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter, "(Larc/graphics/Texture$TextureWrap;Larc/graphics/Texture$TextureWrap;Larc/graphics/Texture$TextureFilter;Larc/graphics/Texture$TextureFilter;)V", 1 },
	{ "clear", (intptr_t) M_arc_fx_util_PingPongBuffer_clear_arc_graphics_Color, VTABLE_arc_fx_util_PingPongBuffer_clear_arc_graphics_Color, "(Larc/graphics/Color;)V", 1 },
	{ "clear", (intptr_t) M_arc_fx_util_PingPongBuffer_clear_float_float_float_float, VTABLE_arc_fx_util_PingPongBuffer_clear_float_float_float_float, "(FFFF)V", 1 },
};

Class class_arc_fx_util_PingPongBuffer{
		.nativeName = (intptr_t) "arc/fx/util/PingPongBuffer",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_fx_util_PingPongBuffer),
		.classVtable = (intptr_t) vtable_arc_fx_util_PingPongBuffer,
		.staticInitializer = (intptr_t) clinit_arc_fx_util_PingPongBuffer,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_fx_util_PingPongBuffer,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 10,
		.nativeFields = (intptr_t) fields,
		.methodCount = 16,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 24,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_fx_util_PingPongBuffer = registerClass(&class_arc_fx_util_PingPongBuffer);

}
