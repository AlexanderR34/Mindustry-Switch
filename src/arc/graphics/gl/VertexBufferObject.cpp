#include "arc/graphics/gl/VertexBufferObject.h"
#include "arc/util/Disposable.h"
#include "java/nio/FloatBuffer.h"
#include "arc/graphics/VertexAttribute.h"
#include "arc/util/Buffers.h"
#include "arc/graphics/gl/VertexData.h"
#include "arc/graphics/gl/VertexBufferObject.h"
#include "java/nio/ByteBuffer.h"
#include "arc/graphics/gl/Shader.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/nio/Buffer.h"
#include "arc/util/ArcRuntimeException.h"
#include "arc/graphics/Gl.h"
#include "arc/graphics/Mesh.h"

extern "C" {


void mark_arc_graphics_gl_VertexBufferObject(jobject object, jint mark, jint depth) {
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
	auto self = (arc_graphics_gl_VertexBufferObject *) object;
	if (self->F_mesh)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_mesh)->clazz)->markFunction)((jobject) self->F_mesh, mark, depth + 1);
	if (self->F_buffer)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_buffer)->clazz)->markFunction)((jobject) self->F_buffer, mark, depth + 1);
	if (self->F_byteBuffer)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_byteBuffer)->clazz)->markFunction)((jobject) self->F_byteBuffer, mark, depth + 1);
}

void clinit_arc_graphics_gl_VertexBufferObject(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_graphics_gl_VertexBufferObject_boolean_int_arc_graphics_Mesh(jcontext ctx, jobject self, jbool param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/VertexBufferObject:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_gl_VertexBufferObject(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(34);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(19);
	((arc_graphics_gl_VertexBufferObject *) NULL_CHECK((frame[0].o)))->F_dirty = (jint(0));
	LINE_NUMBER(20);
	((arc_graphics_gl_VertexBufferObject *) NULL_CHECK((frame[0].o)))->F_bound = (jint(0));
	LINE_NUMBER(21);
	((arc_graphics_gl_VertexBufferObject *) NULL_CHECK((frame[0].o)))->F_created = (jint(0));
	LINE_NUMBER(35);
	((arc_graphics_gl_VertexBufferObject *) NULL_CHECK((frame[0].o)))->F_mesh = (jref) (frame[3].o);
	LINE_NUMBER(36);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[1].i) == 0) goto label_6;
	}
	(sp++)->i = jint(35044);
	goto label_7;
label_6:;
	(sp++)->i = jint(35048);
label_7:;
	{
	sp -= 2;
	((arc_graphics_gl_VertexBufferObject *) NULL_CHECK(sp[0].o))->F_usage = sp[1].i;
	LINE_NUMBER(38);
	sp[0].o = (jobject)SM_arc_util_Buffers_newUnsafeByteBuffer_int_R_java_nio_ByteBuffer(ctx, (((jint)((arc_graphics_Mesh *) NULL_CHECK((frame[3].o)))->F_vertexSize) * (frame[2].i)));
	frame[4].o = sp[0].o;
	LINE_NUMBER(39);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_limit_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_nio_ByteBuffer_limit_int_R_java_nio_Buffer])(ctx, (frame[4].o), (jint(0)));
	LINE_NUMBER(40);
	((func_arc_graphics_gl_VertexBufferObject_setBuffer_java_nio_Buffer_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_gl_VertexBufferObject_setBuffer_java_nio_Buffer_boolean])(ctx, (frame[0].o), (frame[4].o), (jint(1)));
	LINE_NUMBER(41);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_arc_graphics_gl_VertexBufferObject_size_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/VertexBufferObject:size", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(45);
	sp[0].o = (jobject)((arc_graphics_gl_VertexBufferObject *) NULL_CHECK((frame[0].o)))->F_buffer;
	jint temp0 = (jint)((func_java_nio_FloatBuffer_limit_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_FloatBuffer_limit_R_int])(ctx, sp[0].o);
	jint temp1 = temp0 * (jint(4));
	sp[0].o = (jobject)((arc_graphics_gl_VertexBufferObject *) NULL_CHECK((frame[0].o)))->F_mesh;
	popStackFrame(ctx);
	return (temp1 / ((jint)((arc_graphics_Mesh *) NULL_CHECK(sp[0].o))->F_vertexSize));
	}

	popStackFrame(ctx);
}

jint M_arc_graphics_gl_VertexBufferObject_max_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/VertexBufferObject:max", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(50);
	sp[0].o = (jobject)((arc_graphics_gl_VertexBufferObject *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	jint temp0 = (jint)((func_java_nio_ByteBuffer_capacity_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_capacity_R_int])(ctx, sp[0].o);
	sp[0].o = (jobject)((arc_graphics_gl_VertexBufferObject *) NULL_CHECK((frame[0].o)))->F_mesh;
	popStackFrame(ctx);
	return (temp0 / ((jint)((arc_graphics_Mesh *) NULL_CHECK(sp[0].o))->F_vertexSize));
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_gl_VertexBufferObject_buffer_R_java_nio_FloatBuffer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/VertexBufferObject:buffer", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(55);
	((arc_graphics_gl_VertexBufferObject *) NULL_CHECK((frame[0].o)))->F_dirty = (jint(1));
	LINE_NUMBER(56);
	sp[0].o = (jobject)((arc_graphics_gl_VertexBufferObject *) NULL_CHECK((frame[0].o)))->F_buffer;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_gl_VertexBufferObject_setBuffer_java_nio_Buffer_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/VertexBufferObject:setBuffer", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(63);
	if (((jint)((arc_graphics_gl_VertexBufferObject *) NULL_CHECK((frame[0].o)))->F_bound) == 0) goto label_1;
	}
	{
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Cannot change attributes while VBO is bound"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(64);
	if (((jint)((arc_graphics_gl_VertexBufferObject *) NULL_CHECK((frame[0].o)))->F_ownsBuffer) == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((arc_graphics_gl_VertexBufferObject *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(65);
	sp[0].o = (jobject)((arc_graphics_gl_VertexBufferObject *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	SM_arc_util_Buffers_disposeUnsafeByteBuffer_java_nio_ByteBuffer(ctx, sp[0].o);
	}
label_2:;
	{
	LINE_NUMBER(66);
	if ((isInstance(ctx, (frame[1].o), &class_java_nio_ByteBuffer)) == 0) goto label_4;
	}
	{
	LINE_NUMBER(67);
	((arc_graphics_gl_VertexBufferObject *) NULL_CHECK((frame[0].o)))->F_byteBuffer = (jref) (checkCast(ctx, &class_java_nio_ByteBuffer, (frame[1].o)));
	goto label_6;
	}
label_4:;
	{
	LINE_NUMBER(69);
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Only ByteBuffer is currently supported"_j))));
	throwException(ctx, sp[0].o);	}
label_6:;
	{
	LINE_NUMBER(70);
	((arc_graphics_gl_VertexBufferObject *) NULL_CHECK((frame[0].o)))->F_ownsBuffer = (frame[2].i);
	LINE_NUMBER(72);
	sp[0].o = (jobject)((arc_graphics_gl_VertexBufferObject *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	jint temp0 = (jint)((func_java_nio_ByteBuffer_limit_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_limit_R_int])(ctx, sp[0].o);
	frame[3].i = temp0;
	LINE_NUMBER(73);
	sp[0].o = (jobject)((arc_graphics_gl_VertexBufferObject *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	sp[1].o = (jobject)((arc_graphics_gl_VertexBufferObject *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	jint temp1 = (jint)((func_java_nio_ByteBuffer_capacity_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_nio_ByteBuffer_capacity_R_int])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_limit_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_limit_int_R_java_nio_Buffer])(ctx, sp[0].o, temp1);
	LINE_NUMBER(74);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_graphics_gl_VertexBufferObject *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	sp[1].o = (jobject)((func_java_nio_ByteBuffer_asFloatBuffer_R_java_nio_FloatBuffer) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_nio_ByteBuffer_asFloatBuffer_R_java_nio_FloatBuffer])(ctx, sp[1].o);
	((arc_graphics_gl_VertexBufferObject *) NULL_CHECK(sp[0].o))->F_buffer = (jref) sp[1].o;
	LINE_NUMBER(75);
	sp[0].o = (jobject)((arc_graphics_gl_VertexBufferObject *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_limit_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_limit_int_R_java_nio_Buffer])(ctx, sp[0].o, (frame[3].i));
	LINE_NUMBER(76);
	sp[0].o = (jobject)((arc_graphics_gl_VertexBufferObject *) NULL_CHECK((frame[0].o)))->F_buffer;
	sp[0].o = (jobject)((func_java_nio_FloatBuffer_limit_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_FloatBuffer_limit_int_R_java_nio_Buffer])(ctx, sp[0].o, ((frame[3].i) / (jint(4))));
	LINE_NUMBER(77);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_gl_VertexBufferObject_upload(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/VertexBufferObject:upload", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(80);
	jint temp0 = jint(34962);
	sp[0].o = (jobject)((arc_graphics_gl_VertexBufferObject *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	jint temp1 = (jint)((func_java_nio_ByteBuffer_limit_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_limit_R_int])(ctx, sp[0].o);
	sp[0].o = (jobject)((arc_graphics_gl_VertexBufferObject *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	SM_arc_graphics_Gl_bufferData_int_int_java_nio_Buffer_int(ctx, temp0, temp1, sp[0].o, ((jint)((arc_graphics_gl_VertexBufferObject *) NULL_CHECK((frame[0].o)))->F_usage));
	LINE_NUMBER(81);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_gl_VertexBufferObject_bufferChanged(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/VertexBufferObject:bufferChanged", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(84);
	if (((jint)((arc_graphics_gl_VertexBufferObject *) NULL_CHECK((frame[0].o)))->F_bound) == 0) goto label_1;
	}
	{
	LINE_NUMBER(85);
	M_arc_graphics_gl_VertexBufferObject_upload(ctx, (frame[0].o));
	LINE_NUMBER(86);
	((arc_graphics_gl_VertexBufferObject *) NULL_CHECK((frame[0].o)))->F_dirty = (jint(0));
	}
label_1:;
	LINE_NUMBER(88);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_graphics_gl_VertexBufferObject_set_Array1_float_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/VertexBufferObject:set", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(92);
	((arc_graphics_gl_VertexBufferObject *) NULL_CHECK((frame[0].o)))->F_dirty = (jint(1));
	LINE_NUMBER(93);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((arc_graphics_gl_VertexBufferObject *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	SM_arc_util_Buffers_copy_Array1_float_java_nio_Buffer_int_int(ctx, sp[0].o, sp[1].o, (frame[3].i), (frame[2].i));
	LINE_NUMBER(94);
	sp[0].o = (jobject)((arc_graphics_gl_VertexBufferObject *) NULL_CHECK((frame[0].o)))->F_buffer;
	sp[0].o = (jobject)((func_java_nio_FloatBuffer_position_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_FloatBuffer_position_int_R_java_nio_Buffer])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(95);
	sp[0].o = (jobject)((arc_graphics_gl_VertexBufferObject *) NULL_CHECK((frame[0].o)))->F_buffer;
	sp[0].o = (jobject)((func_java_nio_FloatBuffer_limit_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_FloatBuffer_limit_int_R_java_nio_Buffer])(ctx, sp[0].o, (frame[3].i));
	LINE_NUMBER(96);
	M_arc_graphics_gl_VertexBufferObject_bufferChanged(ctx, (frame[0].o));
	LINE_NUMBER(97);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_gl_VertexBufferObject_update_int_Array1_float_int_int(jcontext ctx, jobject self, jint param0, jobject param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/VertexBufferObject:update", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(101);
	((arc_graphics_gl_VertexBufferObject *) NULL_CHECK((frame[0].o)))->F_dirty = (jint(1));
	LINE_NUMBER(102);
	sp[0].o = (jobject)((arc_graphics_gl_VertexBufferObject *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	jint temp0 = (jint)((func_java_nio_ByteBuffer_position_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_position_R_int])(ctx, sp[0].o);
	frame[5].i = temp0;
	LINE_NUMBER(103);
	sp[0].o = (jobject)((arc_graphics_gl_VertexBufferObject *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_position_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_position_int_R_java_nio_Buffer])(ctx, sp[0].o, ((frame[1].i) * (jint(4))));
	LINE_NUMBER(104);
	sp[0].o = frame[2].o;
	jint temp1 = frame[3].i;
	jint temp2 = frame[4].i;
	sp[1].o = (jobject)((arc_graphics_gl_VertexBufferObject *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	SM_arc_util_Buffers_copy_Array1_float_int_int_java_nio_Buffer(ctx, sp[0].o, temp1, temp2, sp[1].o);
	LINE_NUMBER(105);
	sp[0].o = (jobject)((arc_graphics_gl_VertexBufferObject *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_position_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_position_int_R_java_nio_Buffer])(ctx, sp[0].o, (frame[5].i));
	LINE_NUMBER(106);
	sp[0].o = (jobject)((arc_graphics_gl_VertexBufferObject *) NULL_CHECK((frame[0].o)))->F_buffer;
	sp[0].o = (jobject)((func_java_nio_FloatBuffer_position_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_FloatBuffer_position_int_R_java_nio_Buffer])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(107);
	M_arc_graphics_gl_VertexBufferObject_bufferChanged(ctx, (frame[0].o));
	LINE_NUMBER(108);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_gl_VertexBufferObject_bind(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/VertexBufferObject:bind", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(115);
	if (((jint)((arc_graphics_gl_VertexBufferObject *) NULL_CHECK((frame[0].o)))->F_created) != 0) goto label_1;
	}
	{
	LINE_NUMBER(116);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_arc_graphics_Gl_genBuffer_R_int(ctx);
	((arc_graphics_gl_VertexBufferObject *) NULL_CHECK(sp[0].o))->F_bufferHandle = temp0;
	LINE_NUMBER(117);
	((arc_graphics_gl_VertexBufferObject *) NULL_CHECK((frame[0].o)))->F_created = (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(119);
	SM_arc_graphics_Gl_bindBuffer_int_int(ctx, (jint(34962)), ((jint)((arc_graphics_gl_VertexBufferObject *) NULL_CHECK((frame[0].o)))->F_bufferHandle));
	LINE_NUMBER(120);
	if (((jint)((arc_graphics_gl_VertexBufferObject *) NULL_CHECK((frame[0].o)))->F_dirty) == 0) goto label_5;
	}
	{
	LINE_NUMBER(121);
	sp[0].o = (jobject)((arc_graphics_gl_VertexBufferObject *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	sp[1].o = (jobject)((arc_graphics_gl_VertexBufferObject *) NULL_CHECK((frame[0].o)))->F_buffer;
	jint temp0 = (jint)((func_java_nio_FloatBuffer_limit_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_nio_FloatBuffer_limit_R_int])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_limit_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_limit_int_R_java_nio_Buffer])(ctx, sp[0].o, (temp0 * (jint(4))));
	LINE_NUMBER(122);
	M_arc_graphics_gl_VertexBufferObject_upload(ctx, (frame[0].o));
	LINE_NUMBER(123);
	((arc_graphics_gl_VertexBufferObject *) NULL_CHECK((frame[0].o)))->F_dirty = (jint(0));
	}
label_5:;
	{
	LINE_NUMBER(126);
	((arc_graphics_gl_VertexBufferObject *) NULL_CHECK((frame[0].o)))->F_bound = (jint(1));
	LINE_NUMBER(127);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_gl_VertexBufferObject_bind_arc_graphics_gl_Shader(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/VertexBufferObject:bind", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(135);
	((func_arc_graphics_gl_VertexBufferObject_bind) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_gl_VertexBufferObject_bind])(ctx, (frame[0].o));
	LINE_NUMBER(137);
	frame[2].i = (jint(0));
	LINE_NUMBER(138);
	sp[0].o = (jobject)((arc_graphics_gl_VertexBufferObject *) NULL_CHECK((frame[0].o)))->F_mesh;
	sp[0].o = (jobject)((arc_graphics_Mesh *) NULL_CHECK(sp[0].o))->F_attributes;
	frame[3].o = sp[0].o;
	frame[4].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	frame[5].i = (jint(0));
	}
label_3:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_4;
	}
	{
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(139);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((arc_graphics_VertexAttribute *) NULL_CHECK((frame[6].o)))->F_alias;
	jint temp0 = (jint)((func_arc_graphics_gl_Shader_getAttributeLocation_java_lang_String_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_Shader_getAttributeLocation_java_lang_String_R_int])(ctx, sp[0].o, sp[1].o);
	frame[7].i = temp0;
	LINE_NUMBER(140);
	frame[8].i = (frame[2].i);
	LINE_NUMBER(141);
	frame[2].i = ((frame[2].i) + ((jint)((arc_graphics_VertexAttribute *) NULL_CHECK((frame[6].o)))->F_size));
	LINE_NUMBER(142);
	if ((frame[7].i) >= 0) goto label_9;
	}
	goto label_10;
label_9:;
	{
	LINE_NUMBER(144);
	SM_arc_graphics_Gl_enableVertexAttribArray_int(ctx, (frame[7].i));
	LINE_NUMBER(145);
	jint temp0 = frame[7].i;
	jint temp1 = (jint)((arc_graphics_VertexAttribute *) NULL_CHECK((frame[6].o)))->F_components;
	jint temp2 = (jint)((arc_graphics_VertexAttribute *) NULL_CHECK((frame[6].o)))->F_type;
	jint temp3 = (jint)((arc_graphics_VertexAttribute *) NULL_CHECK((frame[6].o)))->F_normalized;
	sp[0].o = (jobject)((arc_graphics_gl_VertexBufferObject *) NULL_CHECK((frame[0].o)))->F_mesh;
	SM_arc_graphics_Gl_vertexAttribPointer_int_int_int_boolean_int_int(ctx, temp0, temp1, temp2, temp3, ((jint)((arc_graphics_Mesh *) NULL_CHECK(sp[0].o))->F_vertexSize), (frame[8].i));
	}
label_10:;
	{
	LINE_NUMBER(138);
	INST_IINC(5, 1);
	goto label_3;
	}
label_4:;
	LINE_NUMBER(147);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_graphics_gl_VertexBufferObject_unbind_arc_graphics_gl_Shader(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/VertexBufferObject:unbind", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(151);
	sp[0].o = (jobject)((arc_graphics_gl_VertexBufferObject *) NULL_CHECK((frame[0].o)))->F_mesh;
	sp[0].o = (jobject)((arc_graphics_Mesh *) NULL_CHECK(sp[0].o))->F_attributes;
	frame[2].o = sp[0].o;
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_1:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_2;
	}
	{
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(152);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((arc_graphics_VertexAttribute *) NULL_CHECK((frame[5].o)))->F_alias;
	((func_arc_graphics_gl_Shader_disableVertexAttribute_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_Shader_disableVertexAttribute_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(151);
	INST_IINC(4, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(154);
	SM_arc_graphics_Gl_bindBuffer_int_int(ctx, (jint(34962)), (jint(0)));
	LINE_NUMBER(155);
	((arc_graphics_gl_VertexBufferObject *) NULL_CHECK((frame[0].o)))->F_bound = (jint(0));
	LINE_NUMBER(156);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_gl_VertexBufferObject_dispose(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/VertexBufferObject:dispose", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(161);
	SM_arc_graphics_Gl_bindBuffer_int_int(ctx, (jint(34962)), (jint(0)));
	LINE_NUMBER(162);
	SM_arc_graphics_Gl_deleteBuffer_int(ctx, ((jint)((arc_graphics_gl_VertexBufferObject *) NULL_CHECK((frame[0].o)))->F_bufferHandle));
	LINE_NUMBER(163);
	((arc_graphics_gl_VertexBufferObject *) NULL_CHECK((frame[0].o)))->F_bufferHandle = (jint(0));
	LINE_NUMBER(164);
	if (((jint)((arc_graphics_gl_VertexBufferObject *) NULL_CHECK((frame[0].o)))->F_ownsBuffer) == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((arc_graphics_gl_VertexBufferObject *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	SM_arc_util_Buffers_disposeUnsafeByteBuffer_java_nio_ByteBuffer(ctx, sp[0].o);
	}
label_4:;
	LINE_NUMBER(165);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_arc_graphics_gl_VertexBufferObject[] {
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
	(void *) M_arc_graphics_gl_VertexBufferObject_dispose,
	(void *) M_arc_util_Disposable_isDisposed_R_boolean,
	(void *) M_arc_graphics_gl_VertexData_render_arc_graphics_gl_IndexData_int_int_int,
	(void *) M_arc_graphics_gl_VertexBufferObject_size_R_int,
	(void *) M_arc_graphics_gl_VertexBufferObject_max_R_int,
	(void *) M_arc_graphics_gl_VertexBufferObject_set_Array1_float_int_int,
	(void *) M_arc_graphics_gl_VertexBufferObject_update_int_Array1_float_int_int,
	(void *) M_arc_graphics_gl_VertexBufferObject_buffer_R_java_nio_FloatBuffer,
	(void *) M_arc_graphics_gl_VertexBufferObject_bind_arc_graphics_gl_Shader,
	(void *) M_arc_graphics_gl_VertexBufferObject_unbind_arc_graphics_gl_Shader,
	(void *) M_arc_graphics_gl_VertexBufferObject_setBuffer_java_nio_Buffer_boolean,
	(void *) M_arc_graphics_gl_VertexBufferObject_upload,
	(void *) M_arc_graphics_gl_VertexBufferObject_bufferChanged,
	(void *) M_arc_graphics_gl_VertexBufferObject_bind,
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
	{ "render", "(Larc/graphics/gl/IndexData;III)V" },
	{ "size", "()I" },
	{ "max", "()I" },
	{ "set", "([FII)V" },
	{ "update", "(I[FII)V" },
	{ "buffer", "()Ljava/nio/FloatBuffer;" },
	{ "bind", "(Larc/graphics/gl/Shader;)V" },
	{ "unbind", "(Larc/graphics/gl/Shader;)V" },
	{ "setBuffer", "(Ljava/nio/Buffer;Z)V" },
	{ "upload", "()V" },
	{ "bufferChanged", "()V" },
	{ "bind", "()V" },
};

static jclass interfaces[] { &class_arc_graphics_gl_VertexData, };

static FieldMetadata fields[] {
	{ "dirty", &class_boolean, offsetof(arc_graphics_gl_VertexBufferObject, F_dirty), "Z", 0 },
	{ "bound", &class_boolean, offsetof(arc_graphics_gl_VertexBufferObject, F_bound), "Z", 0 },
	{ "created", &class_boolean, offsetof(arc_graphics_gl_VertexBufferObject, F_created), "Z", 0 },
	{ "mesh", &class_arc_graphics_Mesh, offsetof(arc_graphics_gl_VertexBufferObject, F_mesh), "Larc/graphics/Mesh;", 2 },
	{ "buffer", &class_java_nio_FloatBuffer, offsetof(arc_graphics_gl_VertexBufferObject, F_buffer), "Ljava/nio/FloatBuffer;", 2 },
	{ "byteBuffer", &class_java_nio_ByteBuffer, offsetof(arc_graphics_gl_VertexBufferObject, F_byteBuffer), "Ljava/nio/ByteBuffer;", 2 },
	{ "ownsBuffer", &class_boolean, offsetof(arc_graphics_gl_VertexBufferObject, F_ownsBuffer), "Z", 2 },
	{ "bufferHandle", &class_int, offsetof(arc_graphics_gl_VertexBufferObject, F_bufferHandle), "I", 2 },
	{ "usage", &class_int, offsetof(arc_graphics_gl_VertexBufferObject, F_usage), "I", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_graphics_gl_VertexBufferObject_boolean_int_arc_graphics_Mesh, 0, "(ZILarc/graphics/Mesh;)V", 1 },
	{ "size", (intptr_t) M_arc_graphics_gl_VertexBufferObject_size_R_int, VTABLE_arc_graphics_gl_VertexBufferObject_size_R_int, "()I", 1 },
	{ "max", (intptr_t) M_arc_graphics_gl_VertexBufferObject_max_R_int, VTABLE_arc_graphics_gl_VertexBufferObject_max_R_int, "()I", 1 },
	{ "buffer", (intptr_t) M_arc_graphics_gl_VertexBufferObject_buffer_R_java_nio_FloatBuffer, VTABLE_arc_graphics_gl_VertexBufferObject_buffer_R_java_nio_FloatBuffer, "()Ljava/nio/FloatBuffer;", 1 },
	{ "setBuffer", (intptr_t) M_arc_graphics_gl_VertexBufferObject_setBuffer_java_nio_Buffer_boolean, VTABLE_arc_graphics_gl_VertexBufferObject_setBuffer_java_nio_Buffer_boolean, "(Ljava/nio/Buffer;Z)V", 4 },
	{ "upload", (intptr_t) M_arc_graphics_gl_VertexBufferObject_upload, VTABLE_arc_graphics_gl_VertexBufferObject_upload, "()V", 2 },
	{ "bufferChanged", (intptr_t) M_arc_graphics_gl_VertexBufferObject_bufferChanged, VTABLE_arc_graphics_gl_VertexBufferObject_bufferChanged, "()V", 2 },
	{ "set", (intptr_t) M_arc_graphics_gl_VertexBufferObject_set_Array1_float_int_int, VTABLE_arc_graphics_gl_VertexBufferObject_set_Array1_float_int_int, "([FII)V", 1 },
	{ "update", (intptr_t) M_arc_graphics_gl_VertexBufferObject_update_int_Array1_float_int_int, VTABLE_arc_graphics_gl_VertexBufferObject_update_int_Array1_float_int_int, "(I[FII)V", 1 },
	{ "bind", (intptr_t) M_arc_graphics_gl_VertexBufferObject_bind, VTABLE_arc_graphics_gl_VertexBufferObject_bind, "()V", 1 },
	{ "bind", (intptr_t) M_arc_graphics_gl_VertexBufferObject_bind_arc_graphics_gl_Shader, VTABLE_arc_graphics_gl_VertexBufferObject_bind_arc_graphics_gl_Shader, "(Larc/graphics/gl/Shader;)V", 1 },
	{ "unbind", (intptr_t) M_arc_graphics_gl_VertexBufferObject_unbind_arc_graphics_gl_Shader, VTABLE_arc_graphics_gl_VertexBufferObject_unbind_arc_graphics_gl_Shader, "(Larc/graphics/gl/Shader;)V", 1 },
	{ "dispose", (intptr_t) M_arc_graphics_gl_VertexBufferObject_dispose, VTABLE_arc_graphics_gl_VertexBufferObject_dispose, "()V", 1 },
};

Class class_arc_graphics_gl_VertexBufferObject{
		.nativeName = (intptr_t) "arc/graphics/gl/VertexBufferObject",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_graphics_gl_VertexBufferObject),
		.classVtable = (intptr_t) vtable_arc_graphics_gl_VertexBufferObject,
		.staticInitializer = (intptr_t) clinit_arc_graphics_gl_VertexBufferObject,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_graphics_gl_VertexBufferObject,
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
		.methodCount = 13,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 25,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_graphics_gl_VertexBufferObject = registerClass(&class_arc_graphics_gl_VertexBufferObject);

}
