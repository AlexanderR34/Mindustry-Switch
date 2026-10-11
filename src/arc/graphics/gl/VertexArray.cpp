#include "arc/graphics/gl/VertexArray.h"
#include "arc/util/Disposable.h"
#include "java/nio/FloatBuffer.h"
#include "arc/graphics/VertexAttribute.h"
#include "arc/util/Buffers.h"
#include "arc/graphics/gl/VertexData.h"
#include "arc/graphics/gl/VertexArray.h"
#include "arc/graphics/gl/IndexData.h"
#include "java/nio/ByteBuffer.h"
#include "arc/graphics/gl/Shader.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/nio/Buffer.h"
#include "java/nio/ShortBuffer.h"
#include "arc/graphics/Gl.h"
#include "arc/graphics/Mesh.h"

extern "C" {


void mark_arc_graphics_gl_VertexArray(jobject object, jint mark, jint depth) {
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
	auto self = (arc_graphics_gl_VertexArray *) object;
	if (self->F_mesh)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_mesh)->clazz)->markFunction)((jobject) self->F_mesh, mark, depth + 1);
	if (self->F_buffer)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_buffer)->clazz)->markFunction)((jobject) self->F_buffer, mark, depth + 1);
	if (self->F_byteBuffer)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_byteBuffer)->clazz)->markFunction)((jobject) self->F_byteBuffer, mark, depth + 1);
}

void clinit_arc_graphics_gl_VertexArray(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_graphics_gl_VertexArray_int_arc_graphics_Mesh(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/VertexArray:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_gl_VertexArray(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(29);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(23);
	((arc_graphics_gl_VertexArray *) NULL_CHECK((frame[0].o)))->F_isBound = (jint(0));
	LINE_NUMBER(30);
	((arc_graphics_gl_VertexArray *) NULL_CHECK((frame[0].o)))->F_mesh = (jref) (frame[2].o);
	LINE_NUMBER(31);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_graphics_gl_VertexArray *) NULL_CHECK((frame[0].o)))->F_mesh;
	sp[1].o = (jobject)SM_arc_util_Buffers_newUnsafeByteBuffer_int_R_java_nio_ByteBuffer(ctx, (((jint)((arc_graphics_Mesh *) NULL_CHECK(sp[1].o))->F_vertexSize) * (frame[1].i)));
	((arc_graphics_gl_VertexArray *) NULL_CHECK(sp[0].o))->F_byteBuffer = (jref) sp[1].o;
	LINE_NUMBER(32);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_graphics_gl_VertexArray *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	sp[1].o = (jobject)((func_java_nio_ByteBuffer_asFloatBuffer_R_java_nio_FloatBuffer) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_nio_ByteBuffer_asFloatBuffer_R_java_nio_FloatBuffer])(ctx, sp[1].o);
	((arc_graphics_gl_VertexArray *) NULL_CHECK(sp[0].o))->F_buffer = (jref) sp[1].o;
	LINE_NUMBER(33);
	sp[0].o = (jobject)((arc_graphics_gl_VertexArray *) NULL_CHECK((frame[0].o)))->F_buffer;
	sp[0].o = (jobject)((func_java_nio_FloatBuffer_flip_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_FloatBuffer_flip_R_java_nio_Buffer])(ctx, sp[0].o);
	LINE_NUMBER(34);
	sp[0].o = (jobject)((arc_graphics_gl_VertexArray *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_flip_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_flip_R_java_nio_Buffer])(ctx, sp[0].o);
	LINE_NUMBER(36);
	sp[0].o = (jobject)((arc_graphics_gl_VertexArray *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_asFloatBuffer_R_java_nio_FloatBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_asFloatBuffer_R_java_nio_FloatBuffer])(ctx, sp[0].o);
	LINE_NUMBER(37);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_gl_VertexArray_render_arc_graphics_gl_IndexData_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/VertexArray:render", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(41);
	jint temp0 = (jint)((func_arc_graphics_gl_IndexData_size_R_int) resolveInterfaceMethod(ctx, &class_arc_graphics_gl_IndexData, INDEX_arc_graphics_gl_IndexData_size_R_int, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 <= 0) goto label_1;
	}
	{
	LINE_NUMBER(42);
	sp[0].o = (jobject)((func_arc_graphics_gl_IndexData_buffer_R_java_nio_ShortBuffer) resolveInterfaceMethod(ctx, &class_arc_graphics_gl_IndexData, INDEX_arc_graphics_gl_IndexData_buffer_R_java_nio_ShortBuffer, (frame[1].o)))(ctx, (frame[1].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(43);
	jint temp0 = (jint)((func_java_nio_ShortBuffer_position_R_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_nio_ShortBuffer_position_R_int])(ctx, (frame[5].o));
	frame[6].i = temp0;
	LINE_NUMBER(44);
	jint temp1 = (jint)((func_java_nio_ShortBuffer_limit_R_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_nio_ShortBuffer_limit_R_int])(ctx, (frame[5].o));
	frame[7].i = temp1;
	LINE_NUMBER(45);
	sp[0].o = (jobject)((func_java_nio_ShortBuffer_position_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_nio_ShortBuffer_position_int_R_java_nio_Buffer])(ctx, (frame[5].o), (frame[3].i));
	LINE_NUMBER(46);
	sp[0].o = (jobject)((func_java_nio_ShortBuffer_limit_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_nio_ShortBuffer_limit_int_R_java_nio_Buffer])(ctx, (frame[5].o), ((frame[3].i) + (frame[4].i)));
	LINE_NUMBER(47);
	SM_arc_graphics_Gl_drawElements_int_int_int_java_nio_Buffer(ctx, (frame[2].i), (frame[4].i), (5123), (frame[5].o));
	LINE_NUMBER(48);
	sp[0].o = (jobject)((func_java_nio_ShortBuffer_position_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_nio_ShortBuffer_position_int_R_java_nio_Buffer])(ctx, (frame[5].o), (frame[6].i));
	LINE_NUMBER(49);
	sp[0].o = (jobject)((func_java_nio_ShortBuffer_limit_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_nio_ShortBuffer_limit_int_R_java_nio_Buffer])(ctx, (frame[5].o), (frame[7].i));
	LINE_NUMBER(50);
	goto label_11;
	}
label_1:;
	{
	LINE_NUMBER(51);
	SM_arc_graphics_Gl_drawArrays_int_int_int(ctx, (frame[2].i), (frame[3].i), (frame[4].i));
	}
label_11:;
	LINE_NUMBER(53);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_graphics_gl_VertexArray_dispose(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/VertexArray:dispose", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(57);
	sp[0].o = (jobject)((arc_graphics_gl_VertexArray *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	SM_arc_util_Buffers_disposeUnsafeByteBuffer_java_nio_ByteBuffer(ctx, sp[0].o);
	LINE_NUMBER(58);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_gl_VertexArray_buffer_R_java_nio_FloatBuffer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/VertexArray:buffer", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(62);
	sp[0].o = (jobject)((arc_graphics_gl_VertexArray *) NULL_CHECK((frame[0].o)))->F_buffer;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_arc_graphics_gl_VertexArray_size_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/VertexArray:size", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(67);
	sp[0].o = (jobject)((arc_graphics_gl_VertexArray *) NULL_CHECK((frame[0].o)))->F_buffer;
	jint temp0 = (jint)((func_java_nio_FloatBuffer_limit_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_FloatBuffer_limit_R_int])(ctx, sp[0].o);
	jint temp1 = temp0 * (jint(4));
	sp[0].o = (jobject)((arc_graphics_gl_VertexArray *) NULL_CHECK((frame[0].o)))->F_mesh;
	popStackFrame(ctx);
	return (temp1 / ((jint)((arc_graphics_Mesh *) NULL_CHECK(sp[0].o))->F_vertexSize));
	}

	popStackFrame(ctx);
}

jint M_arc_graphics_gl_VertexArray_max_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/VertexArray:max", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(72);
	sp[0].o = (jobject)((arc_graphics_gl_VertexArray *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	jint temp0 = (jint)((func_java_nio_ByteBuffer_capacity_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_capacity_R_int])(ctx, sp[0].o);
	sp[0].o = (jobject)((arc_graphics_gl_VertexArray *) NULL_CHECK((frame[0].o)))->F_mesh;
	popStackFrame(ctx);
	return (temp0 / ((jint)((arc_graphics_Mesh *) NULL_CHECK(sp[0].o))->F_vertexSize));
	}

	popStackFrame(ctx);
}

void M_arc_graphics_gl_VertexArray_set_Array1_float_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/VertexArray:set", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(77);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((arc_graphics_gl_VertexArray *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	SM_arc_util_Buffers_copy_Array1_float_java_nio_Buffer_int_int(ctx, sp[0].o, sp[1].o, (frame[3].i), (frame[2].i));
	LINE_NUMBER(78);
	sp[0].o = (jobject)((arc_graphics_gl_VertexArray *) NULL_CHECK((frame[0].o)))->F_buffer;
	sp[0].o = (jobject)((func_java_nio_FloatBuffer_position_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_FloatBuffer_position_int_R_java_nio_Buffer])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(79);
	sp[0].o = (jobject)((arc_graphics_gl_VertexArray *) NULL_CHECK((frame[0].o)))->F_buffer;
	sp[0].o = (jobject)((func_java_nio_FloatBuffer_limit_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_FloatBuffer_limit_int_R_java_nio_Buffer])(ctx, sp[0].o, (frame[3].i));
	LINE_NUMBER(80);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_gl_VertexArray_update_int_Array1_float_int_int(jcontext ctx, jobject self, jint param0, jobject param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/VertexArray:update", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(84);
	sp[0].o = (jobject)((arc_graphics_gl_VertexArray *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	jint temp0 = (jint)((func_java_nio_ByteBuffer_position_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_position_R_int])(ctx, sp[0].o);
	frame[5].i = temp0;
	LINE_NUMBER(85);
	sp[0].o = (jobject)((arc_graphics_gl_VertexArray *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_position_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_position_int_R_java_nio_Buffer])(ctx, sp[0].o, ((frame[1].i) * (jint(4))));
	LINE_NUMBER(86);
	sp[0].o = frame[2].o;
	jint temp1 = frame[3].i;
	jint temp2 = frame[4].i;
	sp[1].o = (jobject)((arc_graphics_gl_VertexArray *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	SM_arc_util_Buffers_copy_Array1_float_int_int_java_nio_Buffer(ctx, sp[0].o, temp1, temp2, sp[1].o);
	LINE_NUMBER(87);
	sp[0].o = (jobject)((arc_graphics_gl_VertexArray *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_position_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_position_int_R_java_nio_Buffer])(ctx, sp[0].o, (frame[5].i));
	LINE_NUMBER(88);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_gl_VertexArray_bind_arc_graphics_gl_Shader(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/VertexArray:bind", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(92);
	sp[0].o = (jobject)((arc_graphics_gl_VertexArray *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	sp[1].o = (jobject)((arc_graphics_gl_VertexArray *) NULL_CHECK((frame[0].o)))->F_buffer;
	jint temp0 = (jint)((func_java_nio_FloatBuffer_limit_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_nio_FloatBuffer_limit_R_int])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_limit_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_limit_int_R_java_nio_Buffer])(ctx, sp[0].o, (temp0 * (jint(4))));
	LINE_NUMBER(94);
	frame[2].i = (jint(0));
	LINE_NUMBER(95);
	sp[0].o = (jobject)((arc_graphics_gl_VertexArray *) NULL_CHECK((frame[0].o)))->F_mesh;
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
	LINE_NUMBER(96);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((arc_graphics_VertexAttribute *) NULL_CHECK((frame[6].o)))->F_alias;
	jint temp0 = (jint)((func_arc_graphics_gl_Shader_getAttributeLocation_java_lang_String_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_Shader_getAttributeLocation_java_lang_String_R_int])(ctx, sp[0].o, sp[1].o);
	frame[7].i = temp0;
	LINE_NUMBER(97);
	frame[8].i = (frame[2].i);
	LINE_NUMBER(98);
	frame[2].i = ((frame[2].i) + ((jint)((arc_graphics_VertexAttribute *) NULL_CHECK((frame[6].o)))->F_size));
	LINE_NUMBER(99);
	if ((frame[7].i) >= 0) goto label_9;
	}
	goto label_10;
label_9:;
	{
	LINE_NUMBER(100);
	SM_arc_graphics_Gl_enableVertexAttribArray_int(ctx, (frame[7].i));
	LINE_NUMBER(102);
	if (((jint)((arc_graphics_VertexAttribute *) NULL_CHECK((frame[6].o)))->F_type) != (5126)) goto label_12;
	}
	{
	LINE_NUMBER(103);
	sp[0].o = (jobject)((arc_graphics_gl_VertexArray *) NULL_CHECK((frame[0].o)))->F_buffer;
	sp[0].o = (jobject)((func_java_nio_FloatBuffer_position_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_FloatBuffer_position_int_R_java_nio_Buffer])(ctx, sp[0].o, ((frame[8].i) / (jint(4))));
	LINE_NUMBER(104);
	jint temp0 = frame[7].i;
	jint temp1 = (jint)((arc_graphics_VertexAttribute *) NULL_CHECK((frame[6].o)))->F_components;
	jint temp2 = (jint)((arc_graphics_VertexAttribute *) NULL_CHECK((frame[6].o)))->F_type;
	jint temp3 = (jint)((arc_graphics_VertexAttribute *) NULL_CHECK((frame[6].o)))->F_normalized;
	sp[0].o = (jobject)((arc_graphics_gl_VertexArray *) NULL_CHECK((frame[0].o)))->F_mesh;
	jint temp4 = (jint)((arc_graphics_Mesh *) NULL_CHECK(sp[0].o))->F_vertexSize;
	sp[0].o = (jobject)((arc_graphics_gl_VertexArray *) NULL_CHECK((frame[0].o)))->F_buffer;
	SM_arc_graphics_Gl_vertexAttribPointer_int_int_int_boolean_int_java_nio_Buffer(ctx, temp0, temp1, temp2, temp3, temp4, sp[0].o);
	goto label_10;
	}
label_12:;
	{
	LINE_NUMBER(106);
	sp[0].o = (jobject)((arc_graphics_gl_VertexArray *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_position_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_position_int_R_java_nio_Buffer])(ctx, sp[0].o, (frame[8].i));
	LINE_NUMBER(107);
	jint temp0 = frame[7].i;
	jint temp1 = (jint)((arc_graphics_VertexAttribute *) NULL_CHECK((frame[6].o)))->F_components;
	jint temp2 = (jint)((arc_graphics_VertexAttribute *) NULL_CHECK((frame[6].o)))->F_type;
	jint temp3 = (jint)((arc_graphics_VertexAttribute *) NULL_CHECK((frame[6].o)))->F_normalized;
	sp[0].o = (jobject)((arc_graphics_gl_VertexArray *) NULL_CHECK((frame[0].o)))->F_mesh;
	jint temp4 = (jint)((arc_graphics_Mesh *) NULL_CHECK(sp[0].o))->F_vertexSize;
	sp[0].o = (jobject)((arc_graphics_gl_VertexArray *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	SM_arc_graphics_Gl_vertexAttribPointer_int_int_int_boolean_int_java_nio_Buffer(ctx, temp0, temp1, temp2, temp3, temp4, sp[0].o);
	}
label_10:;
	{
	LINE_NUMBER(95);
	INST_IINC(5, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(111);
	((arc_graphics_gl_VertexArray *) NULL_CHECK((frame[0].o)))->F_isBound = (jint(1));
	LINE_NUMBER(112);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_gl_VertexArray_unbind_arc_graphics_gl_Shader(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/VertexArray:unbind", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(116);
	sp[0].o = (jobject)((arc_graphics_gl_VertexArray *) NULL_CHECK((frame[0].o)))->F_mesh;
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
	LINE_NUMBER(117);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((arc_graphics_VertexAttribute *) NULL_CHECK((frame[5].o)))->F_alias;
	((func_arc_graphics_gl_Shader_disableVertexAttribute_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_Shader_disableVertexAttribute_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(116);
	INST_IINC(4, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(120);
	((arc_graphics_gl_VertexArray *) NULL_CHECK((frame[0].o)))->F_isBound = (jint(0));
	LINE_NUMBER(121);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_graphics_gl_VertexArray[] {
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
	(void *) M_arc_graphics_gl_VertexArray_dispose,
	(void *) M_arc_util_Disposable_isDisposed_R_boolean,
	(void *) M_arc_graphics_gl_VertexArray_render_arc_graphics_gl_IndexData_int_int_int,
	(void *) M_arc_graphics_gl_VertexArray_size_R_int,
	(void *) M_arc_graphics_gl_VertexArray_max_R_int,
	(void *) M_arc_graphics_gl_VertexArray_set_Array1_float_int_int,
	(void *) M_arc_graphics_gl_VertexArray_update_int_Array1_float_int_int,
	(void *) M_arc_graphics_gl_VertexArray_buffer_R_java_nio_FloatBuffer,
	(void *) M_arc_graphics_gl_VertexArray_bind_arc_graphics_gl_Shader,
	(void *) M_arc_graphics_gl_VertexArray_unbind_arc_graphics_gl_Shader,
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
};

static jclass interfaces[] { &class_arc_graphics_gl_VertexData, };

static FieldMetadata fields[] {
	{ "mesh", &class_arc_graphics_Mesh, offsetof(arc_graphics_gl_VertexArray, F_mesh), "Larc/graphics/Mesh;", 16 },
	{ "buffer", &class_java_nio_FloatBuffer, offsetof(arc_graphics_gl_VertexArray, F_buffer), "Ljava/nio/FloatBuffer;", 16 },
	{ "byteBuffer", &class_java_nio_ByteBuffer, offsetof(arc_graphics_gl_VertexArray, F_byteBuffer), "Ljava/nio/ByteBuffer;", 16 },
	{ "isBound", &class_boolean, offsetof(arc_graphics_gl_VertexArray, F_isBound), "Z", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_graphics_gl_VertexArray_int_arc_graphics_Mesh, 0, "(ILarc/graphics/Mesh;)V", 1 },
	{ "render", (intptr_t) M_arc_graphics_gl_VertexArray_render_arc_graphics_gl_IndexData_int_int_int, VTABLE_arc_graphics_gl_VertexArray_render_arc_graphics_gl_IndexData_int_int_int, "(Larc/graphics/gl/IndexData;III)V", 1 },
	{ "dispose", (intptr_t) M_arc_graphics_gl_VertexArray_dispose, VTABLE_arc_graphics_gl_VertexArray_dispose, "()V", 1 },
	{ "buffer", (intptr_t) M_arc_graphics_gl_VertexArray_buffer_R_java_nio_FloatBuffer, VTABLE_arc_graphics_gl_VertexArray_buffer_R_java_nio_FloatBuffer, "()Ljava/nio/FloatBuffer;", 1 },
	{ "size", (intptr_t) M_arc_graphics_gl_VertexArray_size_R_int, VTABLE_arc_graphics_gl_VertexArray_size_R_int, "()I", 1 },
	{ "max", (intptr_t) M_arc_graphics_gl_VertexArray_max_R_int, VTABLE_arc_graphics_gl_VertexArray_max_R_int, "()I", 1 },
	{ "set", (intptr_t) M_arc_graphics_gl_VertexArray_set_Array1_float_int_int, VTABLE_arc_graphics_gl_VertexArray_set_Array1_float_int_int, "([FII)V", 1 },
	{ "update", (intptr_t) M_arc_graphics_gl_VertexArray_update_int_Array1_float_int_int, VTABLE_arc_graphics_gl_VertexArray_update_int_Array1_float_int_int, "(I[FII)V", 1 },
	{ "bind", (intptr_t) M_arc_graphics_gl_VertexArray_bind_arc_graphics_gl_Shader, VTABLE_arc_graphics_gl_VertexArray_bind_arc_graphics_gl_Shader, "(Larc/graphics/gl/Shader;)V", 1 },
	{ "unbind", (intptr_t) M_arc_graphics_gl_VertexArray_unbind_arc_graphics_gl_Shader, VTABLE_arc_graphics_gl_VertexArray_unbind_arc_graphics_gl_Shader, "(Larc/graphics/gl/Shader;)V", 1 },
};

Class class_arc_graphics_gl_VertexArray{
		.nativeName = (intptr_t) "arc/graphics/gl/VertexArray",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_graphics_gl_VertexArray),
		.classVtable = (intptr_t) vtable_arc_graphics_gl_VertexArray,
		.staticInitializer = (intptr_t) clinit_arc_graphics_gl_VertexArray,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_graphics_gl_VertexArray,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 10,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 21,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_graphics_gl_VertexArray = registerClass(&class_arc_graphics_gl_VertexArray);

}
