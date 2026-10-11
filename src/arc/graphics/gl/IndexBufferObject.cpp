#include "arc/graphics/gl/IndexBufferObject.h"
#include "java/nio/ByteBuffer.h"
#include "java/lang/Object.h"
#include "arc/util/Disposable.h"
#include "java/lang/String.h"
#include "java/nio/Buffer.h"
#include "arc/util/ArcRuntimeException.h"
#include "java/nio/ShortBuffer.h"
#include "arc/util/Buffers.h"
#include "arc/graphics/gl/IndexBufferObject.h"
#include "arc/graphics/Gl.h"
#include "arc/graphics/gl/IndexData.h"

extern "C" {


void mark_arc_graphics_gl_IndexBufferObject(jobject object, jint mark, jint depth) {
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
	auto self = (arc_graphics_gl_IndexBufferObject *) object;
	if (self->F_buffer)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_buffer)->clazz)->markFunction)((jobject) self->F_buffer, mark, depth + 1);
	if (self->F_byteBuffer)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_byteBuffer)->clazz)->markFunction)((jobject) self->F_byteBuffer, mark, depth + 1);
}

void clinit_arc_graphics_gl_IndexBufferObject(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_graphics_gl_IndexBufferObject_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/IndexBufferObject:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_gl_IndexBufferObject(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(45);
	init_arc_graphics_gl_IndexBufferObject_boolean_int(ctx, (frame[0].o), (jint(1)), (frame[1].i));
	LINE_NUMBER(46);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_graphics_gl_IndexBufferObject_boolean_int(jcontext ctx, jobject self, jbool param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/IndexBufferObject:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_gl_IndexBufferObject(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(53);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(36);
	((arc_graphics_gl_IndexBufferObject *) NULL_CHECK((frame[0].o)))->F_dirty = (jint(1));
	LINE_NUMBER(37);
	((arc_graphics_gl_IndexBufferObject *) NULL_CHECK((frame[0].o)))->F_bound = (jint(0));
	LINE_NUMBER(54);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[2].i) != 0) goto label_4;
	}
	INST_ICONST(1);
	goto label_5;
label_4:;
	INST_ICONST(0);
label_5:;
	{
	sp -= 2;
	((arc_graphics_gl_IndexBufferObject *) NULL_CHECK(sp[0].o))->F_empty = sp[1].i;
	LINE_NUMBER(55);
	if (((jint)((arc_graphics_gl_IndexBufferObject *) NULL_CHECK((frame[0].o)))->F_empty) == 0) goto label_7;
	}
	{
	LINE_NUMBER(56);
	frame[2].i = (jint(1));
	}
label_7:;
	{
	LINE_NUMBER(59);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_arc_util_Buffers_newUnsafeByteBuffer_int_R_java_nio_ByteBuffer(ctx, ((frame[2].i) * (jint(2))));
	((arc_graphics_gl_IndexBufferObject *) NULL_CHECK(sp[0].o))->F_byteBuffer = (jref) sp[1].o;
	LINE_NUMBER(60);
	((arc_graphics_gl_IndexBufferObject *) NULL_CHECK((frame[0].o)))->F_isDirect = (jint(1));
	LINE_NUMBER(62);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_graphics_gl_IndexBufferObject *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	sp[1].o = (jobject)((func_java_nio_ByteBuffer_asShortBuffer_R_java_nio_ShortBuffer) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_nio_ByteBuffer_asShortBuffer_R_java_nio_ShortBuffer])(ctx, sp[1].o);
	((arc_graphics_gl_IndexBufferObject *) NULL_CHECK(sp[0].o))->F_buffer = (jref) sp[1].o;
	LINE_NUMBER(63);
	sp[0].o = (jobject)((arc_graphics_gl_IndexBufferObject *) NULL_CHECK((frame[0].o)))->F_buffer;
	sp[0].o = (jobject)((func_java_nio_ShortBuffer_flip_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ShortBuffer_flip_R_java_nio_Buffer])(ctx, sp[0].o);
	LINE_NUMBER(64);
	sp[0].o = (jobject)((arc_graphics_gl_IndexBufferObject *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_flip_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_flip_R_java_nio_Buffer])(ctx, sp[0].o);
	LINE_NUMBER(65);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[1].i) == 0) goto label_14;
	}
	(sp++)->i = jint(35044);
	goto label_15;
label_14:;
	(sp++)->i = jint(35048);
label_15:;
	{
	sp -= 2;
	((arc_graphics_gl_IndexBufferObject *) NULL_CHECK(sp[0].o))->F_usage = sp[1].i;
	LINE_NUMBER(66);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_arc_graphics_gl_IndexBufferObject_size_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/IndexBufferObject:size", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(71);
	if (((jint)((arc_graphics_gl_IndexBufferObject *) NULL_CHECK((frame[0].o)))->F_empty) == 0) goto label_1;
	}
	INST_ICONST(0);
	goto label_2;
label_1:;
	{
	sp[0].o = (jobject)((arc_graphics_gl_IndexBufferObject *) NULL_CHECK((frame[0].o)))->F_buffer;
	jint temp0 = (jint)((func_java_nio_ShortBuffer_limit_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ShortBuffer_limit_R_int])(ctx, sp[0].o);
	sp[0].i = temp0;
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint M_arc_graphics_gl_IndexBufferObject_max_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/IndexBufferObject:max", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(77);
	if (((jint)((arc_graphics_gl_IndexBufferObject *) NULL_CHECK((frame[0].o)))->F_empty) == 0) goto label_1;
	}
	INST_ICONST(0);
	goto label_2;
label_1:;
	{
	sp[0].o = (jobject)((arc_graphics_gl_IndexBufferObject *) NULL_CHECK((frame[0].o)))->F_buffer;
	jint temp0 = (jint)((func_java_nio_ShortBuffer_capacity_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ShortBuffer_capacity_R_int])(ctx, sp[0].o);
	sp[0].i = temp0;
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_arc_graphics_gl_IndexBufferObject_set_Array1_short_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/IndexBufferObject:set", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(95);
	((arc_graphics_gl_IndexBufferObject *) NULL_CHECK((frame[0].o)))->F_dirty = (jint(1));
	LINE_NUMBER(96);
	sp[0].o = (jobject)((arc_graphics_gl_IndexBufferObject *) NULL_CHECK((frame[0].o)))->F_buffer;
	sp[0].o = (jobject)((func_java_nio_ShortBuffer_clear_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ShortBuffer_clear_R_java_nio_Buffer])(ctx, sp[0].o);
	LINE_NUMBER(97);
	sp[0].o = (jobject)((arc_graphics_gl_IndexBufferObject *) NULL_CHECK((frame[0].o)))->F_buffer;
	sp[0].o = (jobject)((func_java_nio_ShortBuffer_put_Array1_short_int_int_R_java_nio_ShortBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ShortBuffer_put_Array1_short_int_int_R_java_nio_ShortBuffer])(ctx, sp[0].o, (frame[1].o), (frame[2].i), (frame[3].i));
	LINE_NUMBER(98);
	sp[0].o = (jobject)((arc_graphics_gl_IndexBufferObject *) NULL_CHECK((frame[0].o)))->F_buffer;
	sp[0].o = (jobject)((func_java_nio_ShortBuffer_flip_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ShortBuffer_flip_R_java_nio_Buffer])(ctx, sp[0].o);
	LINE_NUMBER(99);
	sp[0].o = (jobject)((arc_graphics_gl_IndexBufferObject *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_position_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_position_int_R_java_nio_Buffer])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(100);
	sp[0].o = (jobject)((arc_graphics_gl_IndexBufferObject *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_limit_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_limit_int_R_java_nio_Buffer])(ctx, sp[0].o, ((frame[3].i) << (jint(1))));
	LINE_NUMBER(102);
	if (((jint)((arc_graphics_gl_IndexBufferObject *) NULL_CHECK((frame[0].o)))->F_bound) == 0) goto label_7;
	}
	{
	LINE_NUMBER(103);
	jint temp0 = jint(34963);
	sp[0].o = (jobject)((arc_graphics_gl_IndexBufferObject *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	jint temp1 = (jint)((func_java_nio_ByteBuffer_limit_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_limit_R_int])(ctx, sp[0].o);
	sp[0].o = (jobject)((arc_graphics_gl_IndexBufferObject *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	SM_arc_graphics_Gl_bufferData_int_int_java_nio_Buffer_int(ctx, temp0, temp1, sp[0].o, ((jint)((arc_graphics_gl_IndexBufferObject *) NULL_CHECK((frame[0].o)))->F_usage));
	LINE_NUMBER(104);
	((arc_graphics_gl_IndexBufferObject *) NULL_CHECK((frame[0].o)))->F_dirty = (jint(0));
	}
label_7:;
	LINE_NUMBER(106);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_graphics_gl_IndexBufferObject_set_java_nio_ShortBuffer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/IndexBufferObject:set", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(110);
	((arc_graphics_gl_IndexBufferObject *) NULL_CHECK((frame[0].o)))->F_dirty = (jint(1));
	LINE_NUMBER(111);
	jint temp0 = (jint)((func_java_nio_ShortBuffer_position_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_ShortBuffer_position_R_int])(ctx, (frame[1].o));
	frame[2].i = temp0;
	LINE_NUMBER(112);
	sp[0].o = (jobject)((arc_graphics_gl_IndexBufferObject *) NULL_CHECK((frame[0].o)))->F_buffer;
	sp[0].o = (jobject)((func_java_nio_ShortBuffer_clear_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ShortBuffer_clear_R_java_nio_Buffer])(ctx, sp[0].o);
	LINE_NUMBER(113);
	sp[0].o = (jobject)((arc_graphics_gl_IndexBufferObject *) NULL_CHECK((frame[0].o)))->F_buffer;
	sp[0].o = (jobject)((func_java_nio_ShortBuffer_put_java_nio_ShortBuffer_R_java_nio_ShortBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ShortBuffer_put_java_nio_ShortBuffer_R_java_nio_ShortBuffer])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(114);
	sp[0].o = (jobject)((arc_graphics_gl_IndexBufferObject *) NULL_CHECK((frame[0].o)))->F_buffer;
	sp[0].o = (jobject)((func_java_nio_ShortBuffer_flip_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ShortBuffer_flip_R_java_nio_Buffer])(ctx, sp[0].o);
	LINE_NUMBER(115);
	sp[0].o = (jobject)((func_java_nio_ShortBuffer_position_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_ShortBuffer_position_int_R_java_nio_Buffer])(ctx, (frame[1].o), (frame[2].i));
	LINE_NUMBER(116);
	sp[0].o = (jobject)((arc_graphics_gl_IndexBufferObject *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_position_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_position_int_R_java_nio_Buffer])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(117);
	sp[0].o = (jobject)((arc_graphics_gl_IndexBufferObject *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	sp[1].o = (jobject)((arc_graphics_gl_IndexBufferObject *) NULL_CHECK((frame[0].o)))->F_buffer;
	jint temp1 = (jint)((func_java_nio_ShortBuffer_limit_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_nio_ShortBuffer_limit_R_int])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_limit_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_limit_int_R_java_nio_Buffer])(ctx, sp[0].o, (temp1 << (jint(1))));
	LINE_NUMBER(119);
	if (((jint)((arc_graphics_gl_IndexBufferObject *) NULL_CHECK((frame[0].o)))->F_bound) == 0) goto label_9;
	}
	{
	LINE_NUMBER(120);
	jint temp0 = jint(34963);
	sp[0].o = (jobject)((arc_graphics_gl_IndexBufferObject *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	jint temp1 = (jint)((func_java_nio_ByteBuffer_limit_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_limit_R_int])(ctx, sp[0].o);
	sp[0].o = (jobject)((arc_graphics_gl_IndexBufferObject *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	SM_arc_graphics_Gl_bufferData_int_int_java_nio_Buffer_int(ctx, temp0, temp1, sp[0].o, ((jint)((arc_graphics_gl_IndexBufferObject *) NULL_CHECK((frame[0].o)))->F_usage));
	LINE_NUMBER(121);
	((arc_graphics_gl_IndexBufferObject *) NULL_CHECK((frame[0].o)))->F_dirty = (jint(0));
	}
label_9:;
	LINE_NUMBER(123);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_graphics_gl_IndexBufferObject_update_int_Array1_short_int_int(jcontext ctx, jobject self, jint param0, jobject param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/IndexBufferObject:update", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(127);
	((arc_graphics_gl_IndexBufferObject *) NULL_CHECK((frame[0].o)))->F_dirty = (jint(1));
	LINE_NUMBER(128);
	sp[0].o = (jobject)((arc_graphics_gl_IndexBufferObject *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	jint temp0 = (jint)((func_java_nio_ByteBuffer_position_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_position_R_int])(ctx, sp[0].o);
	frame[5].i = temp0;
	LINE_NUMBER(129);
	sp[0].o = (jobject)((arc_graphics_gl_IndexBufferObject *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_position_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_position_int_R_java_nio_Buffer])(ctx, sp[0].o, ((frame[1].i) * (jint(2))));
	LINE_NUMBER(130);
	sp[0].o = frame[2].o;
	jint temp1 = frame[3].i;
	sp[1].o = (jobject)((arc_graphics_gl_IndexBufferObject *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	SM_arc_util_Buffers_copy_Array1_short_int_java_nio_Buffer_int(ctx, sp[0].o, temp1, sp[1].o, (frame[4].i));
	LINE_NUMBER(131);
	sp[0].o = (jobject)((arc_graphics_gl_IndexBufferObject *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_position_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_position_int_R_java_nio_Buffer])(ctx, sp[0].o, (frame[5].i));
	LINE_NUMBER(132);
	sp[0].o = (jobject)((arc_graphics_gl_IndexBufferObject *) NULL_CHECK((frame[0].o)))->F_buffer;
	sp[0].o = (jobject)((func_java_nio_ShortBuffer_position_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ShortBuffer_position_int_R_java_nio_Buffer])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(134);
	if (((jint)((arc_graphics_gl_IndexBufferObject *) NULL_CHECK((frame[0].o)))->F_bound) == 0) goto label_7;
	}
	{
	LINE_NUMBER(135);
	jint temp0 = jint(34963);
	sp[0].o = (jobject)((arc_graphics_gl_IndexBufferObject *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	jint temp1 = (jint)((func_java_nio_ByteBuffer_limit_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_limit_R_int])(ctx, sp[0].o);
	sp[0].o = (jobject)((arc_graphics_gl_IndexBufferObject *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	SM_arc_graphics_Gl_bufferData_int_int_java_nio_Buffer_int(ctx, temp0, temp1, sp[0].o, ((jint)((arc_graphics_gl_IndexBufferObject *) NULL_CHECK((frame[0].o)))->F_usage));
	LINE_NUMBER(136);
	((arc_graphics_gl_IndexBufferObject *) NULL_CHECK((frame[0].o)))->F_dirty = (jint(0));
	}
label_7:;
	LINE_NUMBER(138);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_arc_graphics_gl_IndexBufferObject_buffer_R_java_nio_ShortBuffer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/IndexBufferObject:buffer", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(149);
	((arc_graphics_gl_IndexBufferObject *) NULL_CHECK((frame[0].o)))->F_dirty = (jint(1));
	LINE_NUMBER(150);
	sp[0].o = (jobject)((arc_graphics_gl_IndexBufferObject *) NULL_CHECK((frame[0].o)))->F_buffer;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_gl_IndexBufferObject_bind(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/IndexBufferObject:bind", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(156);
	if (((jint)((arc_graphics_gl_IndexBufferObject *) NULL_CHECK((frame[0].o)))->F_created) != 0) goto label_1;
	}
	{
	LINE_NUMBER(157);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_arc_graphics_Gl_genBuffer_R_int(ctx);
	((arc_graphics_gl_IndexBufferObject *) NULL_CHECK(sp[0].o))->F_bufferHandle = temp0;
	LINE_NUMBER(158);
	((arc_graphics_gl_IndexBufferObject *) NULL_CHECK((frame[0].o)))->F_created = (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(160);
	if (((jint)((arc_graphics_gl_IndexBufferObject *) NULL_CHECK((frame[0].o)))->F_bufferHandle) != 0) goto label_4;
	}
	{
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"No buffer allocated!"_j))));
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	LINE_NUMBER(162);
	SM_arc_graphics_Gl_bindBuffer_int_int(ctx, (jint(34963)), ((jint)((arc_graphics_gl_IndexBufferObject *) NULL_CHECK((frame[0].o)))->F_bufferHandle));
	LINE_NUMBER(163);
	if (((jint)((arc_graphics_gl_IndexBufferObject *) NULL_CHECK((frame[0].o)))->F_dirty) == 0) goto label_6;
	}
	{
	LINE_NUMBER(164);
	sp[0].o = (jobject)((arc_graphics_gl_IndexBufferObject *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	sp[1].o = (jobject)((arc_graphics_gl_IndexBufferObject *) NULL_CHECK((frame[0].o)))->F_buffer;
	jint temp0 = (jint)((func_java_nio_ShortBuffer_limit_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_nio_ShortBuffer_limit_R_int])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_limit_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_limit_int_R_java_nio_Buffer])(ctx, sp[0].o, (temp0 * (jint(2))));
	LINE_NUMBER(165);
	jint temp1 = jint(34963);
	sp[0].o = (jobject)((arc_graphics_gl_IndexBufferObject *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	jint temp2 = (jint)((func_java_nio_ByteBuffer_limit_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_limit_R_int])(ctx, sp[0].o);
	sp[0].o = (jobject)((arc_graphics_gl_IndexBufferObject *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	SM_arc_graphics_Gl_bufferData_int_int_java_nio_Buffer_int(ctx, temp1, temp2, sp[0].o, ((jint)((arc_graphics_gl_IndexBufferObject *) NULL_CHECK((frame[0].o)))->F_usage));
	LINE_NUMBER(166);
	((arc_graphics_gl_IndexBufferObject *) NULL_CHECK((frame[0].o)))->F_dirty = (jint(0));
	}
label_6:;
	{
	LINE_NUMBER(168);
	((arc_graphics_gl_IndexBufferObject *) NULL_CHECK((frame[0].o)))->F_bound = (jint(1));
	LINE_NUMBER(169);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_gl_IndexBufferObject_unbind(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/IndexBufferObject:unbind", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(174);
	SM_arc_graphics_Gl_bindBuffer_int_int(ctx, (jint(34963)), (jint(0)));
	LINE_NUMBER(175);
	((arc_graphics_gl_IndexBufferObject *) NULL_CHECK((frame[0].o)))->F_bound = (jint(0));
	LINE_NUMBER(176);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_gl_IndexBufferObject_dispose(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/IndexBufferObject:dispose", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(181);
	SM_arc_graphics_Gl_bindBuffer_int_int(ctx, (jint(34963)), (jint(0)));
	LINE_NUMBER(182);
	SM_arc_graphics_Gl_deleteBuffer_int(ctx, ((jint)((arc_graphics_gl_IndexBufferObject *) NULL_CHECK((frame[0].o)))->F_bufferHandle));
	LINE_NUMBER(183);
	((arc_graphics_gl_IndexBufferObject *) NULL_CHECK((frame[0].o)))->F_bufferHandle = (jint(0));
	LINE_NUMBER(185);
	sp[0].o = (jobject)((arc_graphics_gl_IndexBufferObject *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	SM_arc_util_Buffers_disposeUnsafeByteBuffer_java_nio_ByteBuffer(ctx, sp[0].o);
	LINE_NUMBER(186);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_graphics_gl_IndexBufferObject[] {
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
	(void *) M_arc_graphics_gl_IndexBufferObject_dispose,
	(void *) M_arc_util_Disposable_isDisposed_R_boolean,
	(void *) M_arc_graphics_gl_IndexBufferObject_size_R_int,
	(void *) M_arc_graphics_gl_IndexBufferObject_max_R_int,
	(void *) M_arc_graphics_gl_IndexBufferObject_set_Array1_short_int_int,
	(void *) M_arc_graphics_gl_IndexBufferObject_set_java_nio_ShortBuffer,
	(void *) M_arc_graphics_gl_IndexBufferObject_update_int_Array1_short_int_int,
	(void *) M_arc_graphics_gl_IndexBufferObject_buffer_R_java_nio_ShortBuffer,
	(void *) M_arc_graphics_gl_IndexBufferObject_bind,
	(void *) M_arc_graphics_gl_IndexBufferObject_unbind,
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
	{ "size", "()I" },
	{ "max", "()I" },
	{ "set", "([SII)V" },
	{ "set", "(Ljava/nio/ShortBuffer;)V" },
	{ "update", "(I[SII)V" },
	{ "buffer", "()Ljava/nio/ShortBuffer;" },
	{ "bind", "()V" },
	{ "unbind", "()V" },
};

static jclass interfaces[] { &class_arc_graphics_gl_IndexData, };

static FieldMetadata fields[] {
	{ "buffer", &class_java_nio_ShortBuffer, offsetof(arc_graphics_gl_IndexBufferObject, F_buffer), "Ljava/nio/ShortBuffer;", 16 },
	{ "byteBuffer", &class_java_nio_ByteBuffer, offsetof(arc_graphics_gl_IndexBufferObject, F_byteBuffer), "Ljava/nio/ByteBuffer;", 16 },
	{ "isDirect", &class_boolean, offsetof(arc_graphics_gl_IndexBufferObject, F_isDirect), "Z", 16 },
	{ "usage", &class_int, offsetof(arc_graphics_gl_IndexBufferObject, F_usage), "I", 16 },
	{ "empty", &class_boolean, offsetof(arc_graphics_gl_IndexBufferObject, F_empty), "Z", 16 },
	{ "bufferHandle", &class_int, offsetof(arc_graphics_gl_IndexBufferObject, F_bufferHandle), "I", 0 },
	{ "dirty", &class_boolean, offsetof(arc_graphics_gl_IndexBufferObject, F_dirty), "Z", 0 },
	{ "bound", &class_boolean, offsetof(arc_graphics_gl_IndexBufferObject, F_bound), "Z", 0 },
	{ "created", &class_boolean, offsetof(arc_graphics_gl_IndexBufferObject, F_created), "Z", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_graphics_gl_IndexBufferObject_int, 0, "(I)V", 1 },
	{ "<init>", (intptr_t) init_arc_graphics_gl_IndexBufferObject_boolean_int, 0, "(ZI)V", 1 },
	{ "size", (intptr_t) M_arc_graphics_gl_IndexBufferObject_size_R_int, VTABLE_arc_graphics_gl_IndexBufferObject_size_R_int, "()I", 1 },
	{ "max", (intptr_t) M_arc_graphics_gl_IndexBufferObject_max_R_int, VTABLE_arc_graphics_gl_IndexBufferObject_max_R_int, "()I", 1 },
	{ "set", (intptr_t) M_arc_graphics_gl_IndexBufferObject_set_Array1_short_int_int, VTABLE_arc_graphics_gl_IndexBufferObject_set_Array1_short_int_int, "([SII)V", 1 },
	{ "set", (intptr_t) M_arc_graphics_gl_IndexBufferObject_set_java_nio_ShortBuffer, VTABLE_arc_graphics_gl_IndexBufferObject_set_java_nio_ShortBuffer, "(Ljava/nio/ShortBuffer;)V", 1 },
	{ "update", (intptr_t) M_arc_graphics_gl_IndexBufferObject_update_int_Array1_short_int_int, VTABLE_arc_graphics_gl_IndexBufferObject_update_int_Array1_short_int_int, "(I[SII)V", 1 },
	{ "buffer", (intptr_t) M_arc_graphics_gl_IndexBufferObject_buffer_R_java_nio_ShortBuffer, VTABLE_arc_graphics_gl_IndexBufferObject_buffer_R_java_nio_ShortBuffer, "()Ljava/nio/ShortBuffer;", 1 },
	{ "bind", (intptr_t) M_arc_graphics_gl_IndexBufferObject_bind, VTABLE_arc_graphics_gl_IndexBufferObject_bind, "()V", 1 },
	{ "unbind", (intptr_t) M_arc_graphics_gl_IndexBufferObject_unbind, VTABLE_arc_graphics_gl_IndexBufferObject_unbind, "()V", 1 },
	{ "dispose", (intptr_t) M_arc_graphics_gl_IndexBufferObject_dispose, VTABLE_arc_graphics_gl_IndexBufferObject_dispose, "()V", 1 },
};

Class class_arc_graphics_gl_IndexBufferObject{
		.nativeName = (intptr_t) "arc/graphics/gl/IndexBufferObject",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_graphics_gl_IndexBufferObject),
		.classVtable = (intptr_t) vtable_arc_graphics_gl_IndexBufferObject,
		.staticInitializer = (intptr_t) clinit_arc_graphics_gl_IndexBufferObject,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_graphics_gl_IndexBufferObject,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 9,
		.nativeFields = (intptr_t) fields,
		.methodCount = 11,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 21,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_graphics_gl_IndexBufferObject = registerClass(&class_arc_graphics_gl_IndexBufferObject);

}
