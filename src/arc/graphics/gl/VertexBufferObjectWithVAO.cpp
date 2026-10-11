#include "arc/graphics/gl/VertexBufferObjectWithVAO.h"
#include "arc/Core.h"
#include "arc/util/Disposable.h"
#include "java/nio/FloatBuffer.h"
#include "java/nio/IntBuffer.h"
#include "arc/graphics/VertexAttribute.h"
#include "arc/util/Buffers.h"
#include "arc/graphics/gl/VertexData.h"
#include "arc/struct/IntSeq.h"
#include "arc/graphics/gl/VertexBufferObjectWithVAO.h"
#include "arc/graphics/GL30.h"
#include "java/nio/ByteBuffer.h"
#include "arc/graphics/gl/Shader.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/nio/Buffer.h"
#include "arc/graphics/Gl.h"
#include "arc/graphics/Mesh.h"

extern "C" {

jobject SF_arc_graphics_gl_VertexBufferObjectWithVAO_tmpHandle;

void mark_arc_graphics_gl_VertexBufferObjectWithVAO(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_arc_graphics_gl_VertexBufferObjectWithVAO_tmpHandle)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_gl_VertexBufferObjectWithVAO_tmpHandle)->clazz)->markFunction)((jobject) SF_arc_graphics_gl_VertexBufferObjectWithVAO_tmpHandle, mark, depth + 1);
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
	auto self = (arc_graphics_gl_VertexBufferObjectWithVAO *) object;
	if (self->F_mesh)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_mesh)->clazz)->markFunction)((jobject) self->F_mesh, mark, depth + 1);
	if (self->F_buffer)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_buffer)->clazz)->markFunction)((jobject) self->F_buffer, mark, depth + 1);
	if (self->F_byteBuffer)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_byteBuffer)->clazz)->markFunction)((jobject) self->F_byteBuffer, mark, depth + 1);
	if (self->F_cachedLocations)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_cachedLocations)->clazz)->markFunction)((jobject) self->F_cachedLocations, mark, depth + 1);
}

void init_arc_graphics_gl_VertexBufferObjectWithVAO_boolean_int_arc_graphics_Mesh(jcontext ctx, jobject self, jbool param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/VertexBufferObjectWithVAO:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_gl_VertexBufferObjectWithVAO(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(46);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(35);
	((arc_graphics_gl_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_isDirty = (jint(0));
	LINE_NUMBER(36);
	((arc_graphics_gl_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_isBound = (jint(0));
	LINE_NUMBER(37);
	((arc_graphics_gl_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_vaoHandle = (jint(-1));
	LINE_NUMBER(38);
	sp[0].o = frame[0].o;
	clinit_arc_struct_IntSeq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_IntSeq);
	init_arc_struct_IntSeq(ctx, sp[1].o);
	((arc_graphics_gl_VertexBufferObjectWithVAO *) NULL_CHECK(sp[0].o))->F_cachedLocations = (jref) sp[1].o;
	LINE_NUMBER(47);
	((arc_graphics_gl_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_isStatic = (frame[1].i);
	LINE_NUMBER(48);
	((arc_graphics_gl_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_mesh = (jref) (frame[3].o);
	LINE_NUMBER(50);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_graphics_gl_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_mesh;
	sp[1].o = (jobject)SM_arc_util_Buffers_newUnsafeByteBuffer_int_R_java_nio_ByteBuffer(ctx, (((jint)((arc_graphics_Mesh *) NULL_CHECK(sp[1].o))->F_vertexSize) * (frame[2].i)));
	((arc_graphics_gl_VertexBufferObjectWithVAO *) NULL_CHECK(sp[0].o))->F_byteBuffer = (jref) sp[1].o;
	LINE_NUMBER(51);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_graphics_gl_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	sp[1].o = (jobject)((func_java_nio_ByteBuffer_asFloatBuffer_R_java_nio_FloatBuffer) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_nio_ByteBuffer_asFloatBuffer_R_java_nio_FloatBuffer])(ctx, sp[1].o);
	((arc_graphics_gl_VertexBufferObjectWithVAO *) NULL_CHECK(sp[0].o))->F_buffer = (jref) sp[1].o;
	LINE_NUMBER(52);
	sp[0].o = (jobject)((arc_graphics_gl_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_buffer;
	sp[0].o = (jobject)((func_java_nio_FloatBuffer_flip_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_FloatBuffer_flip_R_java_nio_Buffer])(ctx, sp[0].o);
	LINE_NUMBER(53);
	sp[0].o = (jobject)((arc_graphics_gl_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_flip_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_flip_R_java_nio_Buffer])(ctx, sp[0].o);
	LINE_NUMBER(54);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[1].i) == 0) goto label_12;
	}
	(sp++)->i = jint(35044);
	goto label_13;
label_12:;
	(sp++)->i = jint(35040);
label_13:;
	{
	sp -= 2;
	((arc_graphics_gl_VertexBufferObjectWithVAO *) NULL_CHECK(sp[0].o))->F_usage = sp[1].i;
	LINE_NUMBER(55);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_arc_graphics_gl_VertexBufferObjectWithVAO_size_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/VertexBufferObjectWithVAO:size", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(59);
	sp[0].o = (jobject)((arc_graphics_gl_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_buffer;
	jint temp0 = (jint)((func_java_nio_FloatBuffer_limit_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_FloatBuffer_limit_R_int])(ctx, sp[0].o);
	jint temp1 = temp0 * (jint(4));
	sp[0].o = (jobject)((arc_graphics_gl_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_mesh;
	popStackFrame(ctx);
	return (temp1 / ((jint)((arc_graphics_Mesh *) NULL_CHECK(sp[0].o))->F_vertexSize));
	}

	popStackFrame(ctx);
}

jint M_arc_graphics_gl_VertexBufferObjectWithVAO_max_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/VertexBufferObjectWithVAO:max", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(64);
	sp[0].o = (jobject)((arc_graphics_gl_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	jint temp0 = (jint)((func_java_nio_ByteBuffer_capacity_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_capacity_R_int])(ctx, sp[0].o);
	sp[0].o = (jobject)((arc_graphics_gl_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_mesh;
	popStackFrame(ctx);
	return (temp0 / ((jint)((arc_graphics_Mesh *) NULL_CHECK(sp[0].o))->F_vertexSize));
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_gl_VertexBufferObjectWithVAO_buffer_R_java_nio_FloatBuffer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/VertexBufferObjectWithVAO:buffer", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(69);
	((arc_graphics_gl_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_isDirty = (jint(1));
	LINE_NUMBER(70);
	sp[0].o = (jobject)((arc_graphics_gl_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_buffer;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_gl_VertexBufferObjectWithVAO_upload(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/VertexBufferObjectWithVAO:upload", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(74);
	jint temp0 = jint(34962);
	sp[0].o = (jobject)((arc_graphics_gl_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	jint temp1 = (jint)((func_java_nio_ByteBuffer_limit_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_limit_R_int])(ctx, sp[0].o);
	sp[0].o = (jobject)((arc_graphics_gl_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	SM_arc_graphics_Gl_bufferData_int_int_java_nio_Buffer_int(ctx, temp0, temp1, sp[0].o, ((jint)((arc_graphics_gl_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_usage));
	LINE_NUMBER(75);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_gl_VertexBufferObjectWithVAO_bufferChanged(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/VertexBufferObjectWithVAO:bufferChanged", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(78);
	if (((jint)((arc_graphics_gl_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_isBound) == 0) goto label_1;
	}
	{
	LINE_NUMBER(79);
	M_arc_graphics_gl_VertexBufferObjectWithVAO_upload(ctx, (frame[0].o));
	LINE_NUMBER(80);
	((arc_graphics_gl_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_isDirty = (jint(0));
	}
label_1:;
	LINE_NUMBER(82);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_graphics_gl_VertexBufferObjectWithVAO_set_Array1_float_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/VertexBufferObjectWithVAO:set", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(86);
	((arc_graphics_gl_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_isDirty = (jint(1));
	LINE_NUMBER(87);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((arc_graphics_gl_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	SM_arc_util_Buffers_copy_Array1_float_java_nio_Buffer_int_int(ctx, sp[0].o, sp[1].o, (frame[3].i), (frame[2].i));
	LINE_NUMBER(88);
	sp[0].o = (jobject)((arc_graphics_gl_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_buffer;
	sp[0].o = (jobject)((func_java_nio_FloatBuffer_position_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_FloatBuffer_position_int_R_java_nio_Buffer])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(89);
	sp[0].o = (jobject)((arc_graphics_gl_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_buffer;
	sp[0].o = (jobject)((func_java_nio_FloatBuffer_limit_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_FloatBuffer_limit_int_R_java_nio_Buffer])(ctx, sp[0].o, (frame[3].i));
	LINE_NUMBER(90);
	M_arc_graphics_gl_VertexBufferObjectWithVAO_bufferChanged(ctx, (frame[0].o));
	LINE_NUMBER(91);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_gl_VertexBufferObjectWithVAO_update_int_Array1_float_int_int(jcontext ctx, jobject self, jint param0, jobject param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/VertexBufferObjectWithVAO:update", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(95);
	((arc_graphics_gl_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_isDirty = (jint(1));
	LINE_NUMBER(96);
	sp[0].o = (jobject)((arc_graphics_gl_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	jint temp0 = (jint)((func_java_nio_ByteBuffer_position_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_position_R_int])(ctx, sp[0].o);
	frame[5].i = temp0;
	LINE_NUMBER(97);
	sp[0].o = (jobject)((arc_graphics_gl_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_position_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_position_int_R_java_nio_Buffer])(ctx, sp[0].o, ((frame[1].i) * (jint(4))));
	LINE_NUMBER(98);
	sp[0].o = frame[2].o;
	jint temp1 = frame[3].i;
	jint temp2 = frame[4].i;
	sp[1].o = (jobject)((arc_graphics_gl_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	SM_arc_util_Buffers_copy_Array1_float_int_int_java_nio_Buffer(ctx, sp[0].o, temp1, temp2, sp[1].o);
	LINE_NUMBER(99);
	sp[0].o = (jobject)((arc_graphics_gl_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_position_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_position_int_R_java_nio_Buffer])(ctx, sp[0].o, (frame[5].i));
	LINE_NUMBER(100);
	sp[0].o = (jobject)((arc_graphics_gl_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_buffer;
	sp[0].o = (jobject)((func_java_nio_FloatBuffer_position_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_FloatBuffer_position_int_R_java_nio_Buffer])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(101);
	M_arc_graphics_gl_VertexBufferObjectWithVAO_bufferChanged(ctx, (frame[0].o));
	LINE_NUMBER(102);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_gl_VertexBufferObjectWithVAO_bind_arc_graphics_gl_Shader(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/VertexBufferObjectWithVAO:bind", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(106);
	if (((jint)((arc_graphics_gl_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_created) != 0) goto label_1;
	}
	{
	LINE_NUMBER(107);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_arc_graphics_Gl_genBuffer_R_int(ctx);
	((arc_graphics_gl_VertexBufferObjectWithVAO *) NULL_CHECK(sp[0].o))->F_bufferHandle = temp0;
	LINE_NUMBER(108);
	clinit_arc_graphics_gl_VertexBufferObjectWithVAO(ctx);
	sp[0].o = (jobject)SF_arc_graphics_gl_VertexBufferObjectWithVAO_tmpHandle;
	sp[0].o = (jobject)((func_java_nio_IntBuffer_clear_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_IntBuffer_clear_R_java_nio_Buffer])(ctx, sp[0].o);
	LINE_NUMBER(109);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl30;
	jint temp1 = jint(1);
	clinit_arc_graphics_gl_VertexBufferObjectWithVAO(ctx);
	sp[1].o = (jobject)SF_arc_graphics_gl_VertexBufferObjectWithVAO_tmpHandle;
	((func_arc_graphics_GL30_glGenVertexArrays_int_java_nio_IntBuffer) resolveInterfaceMethod(ctx, &class_arc_graphics_GL30, INDEX_arc_graphics_GL30_glGenVertexArrays_int_java_nio_IntBuffer, sp[0].o))(ctx, sp[0].o, temp1, sp[1].o);
	LINE_NUMBER(110);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_gl_VertexBufferObjectWithVAO(ctx);
	sp[1].o = (jobject)SF_arc_graphics_gl_VertexBufferObjectWithVAO_tmpHandle;
	jint temp2 = (jint)((func_java_nio_IntBuffer_get_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_nio_IntBuffer_get_R_int])(ctx, sp[1].o);
	((arc_graphics_gl_VertexBufferObjectWithVAO *) NULL_CHECK(sp[0].o))->F_vaoHandle = temp2;
	LINE_NUMBER(111);
	((arc_graphics_gl_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_created = (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(114);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl30;
	((func_arc_graphics_GL30_glBindVertexArray_int) resolveInterfaceMethod(ctx, &class_arc_graphics_GL30, INDEX_arc_graphics_GL30_glBindVertexArray_int, sp[0].o))(ctx, sp[0].o, ((jint)((arc_graphics_gl_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_vaoHandle));
	LINE_NUMBER(116);
	M_arc_graphics_gl_VertexBufferObjectWithVAO_bindAttributes_arc_graphics_gl_Shader(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(119);
	M_arc_graphics_gl_VertexBufferObjectWithVAO_bindData(ctx, (frame[0].o));
	LINE_NUMBER(121);
	((arc_graphics_gl_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_isBound = (jint(1));
	LINE_NUMBER(122);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_gl_VertexBufferObjectWithVAO_bindAttributes_arc_graphics_gl_Shader(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/VertexBufferObjectWithVAO:bindAttributes", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(125);
	sp[0].o = (jobject)((arc_graphics_gl_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_cachedLocations;
	if (((jint)((arc_struct_IntSeq *) NULL_CHECK(sp[0].o))->F_size) == 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 1;
	frame[2].i = sp[0].i;
	LINE_NUMBER(127);
	if ((frame[2].i) == 0) goto label_4;
	}
	{
	LINE_NUMBER(128);
	frame[3].i = (jint(0));
	}
label_6:;
	INST_ILOAD(2);
	if ((--sp)->i == 0) goto label_4;
	{
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((arc_graphics_gl_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_mesh;
	sp[0].o = (jobject)((arc_graphics_Mesh *) NULL_CHECK(sp[0].o))->F_attributes;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_4;
	}
	{
	LINE_NUMBER(129);
	sp[0].o = (jobject)((arc_graphics_gl_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_mesh;
	sp[0].o = (jobject)((arc_graphics_Mesh *) NULL_CHECK(sp[0].o))->F_attributes;
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i)));
	LINE_NUMBER(130);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((arc_graphics_VertexAttribute *) NULL_CHECK((frame[4].o)))->F_alias;
	jint temp0 = (jint)((func_arc_graphics_gl_Shader_getAttributeLocation_java_lang_String_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_Shader_getAttributeLocation_java_lang_String_R_int])(ctx, sp[0].o, sp[1].o);
	frame[5].i = temp0;
	LINE_NUMBER(131);
	jint temp1 = frame[5].i;
	sp[0].o = (jobject)((arc_graphics_gl_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_cachedLocations;
	jint temp2 = (jint)((func_arc_struct_IntSeq_get_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_get_int_R_int])(ctx, sp[0].o, (frame[3].i));
	if (temp1 != temp2) goto label_10;
	}
	INST_ICONST(1);
	goto label_11;
label_10:;
	INST_ICONST(0);
label_11:;
	{
	sp -= 1;
	frame[2].i = sp[0].i;
	LINE_NUMBER(128);
	INST_IINC(3, 1);
	goto label_6;
	}
label_4:;
	{
	LINE_NUMBER(135);
	if ((frame[2].i) != 0) goto label_13;
	}
	{
	LINE_NUMBER(136);
	SM_arc_graphics_Gl_bindBuffer_int_int(ctx, (jint(34962)), ((jint)((arc_graphics_gl_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_bufferHandle));
	LINE_NUMBER(137);
	M_arc_graphics_gl_VertexBufferObjectWithVAO_unbindAttributes_arc_graphics_gl_Shader(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(138);
	sp[0].o = (jobject)((arc_graphics_gl_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_cachedLocations;
	((func_arc_struct_IntSeq_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_clear])(ctx, sp[0].o);
	LINE_NUMBER(140);
	frame[3].i = (jint(0));
	LINE_NUMBER(141);
	frame[4].i = (jint(0));
	}
label_19:;
	{
	jint temp0 = frame[4].i;
	sp[0].o = (jobject)((arc_graphics_gl_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_mesh;
	sp[0].o = (jobject)((arc_graphics_Mesh *) NULL_CHECK(sp[0].o))->F_attributes;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_13;
	}
	{
	LINE_NUMBER(142);
	sp[0].o = (jobject)((arc_graphics_gl_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_mesh;
	sp[0].o = (jobject)((arc_graphics_Mesh *) NULL_CHECK(sp[0].o))->F_attributes;
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[4].i)));
	LINE_NUMBER(143);
	sp[0].o = (jobject)((arc_graphics_gl_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_cachedLocations;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((arc_graphics_VertexAttribute *) NULL_CHECK((frame[5].o)))->F_alias;
	jint temp0 = (jint)((func_arc_graphics_gl_Shader_getAttributeLocation_java_lang_String_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_gl_Shader_getAttributeLocation_java_lang_String_R_int])(ctx, sp[1].o, sp[2].o);
	((func_arc_struct_IntSeq_add_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_add_int])(ctx, sp[0].o, temp0);
	LINE_NUMBER(144);
	frame[6].i = (frame[3].i);
	LINE_NUMBER(145);
	frame[3].i = ((frame[3].i) + ((jint)((arc_graphics_VertexAttribute *) NULL_CHECK((frame[5].o)))->F_size));
	LINE_NUMBER(147);
	sp[0].o = (jobject)((arc_graphics_gl_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_cachedLocations;
	jint temp1 = (jint)((func_arc_struct_IntSeq_get_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_get_int_R_int])(ctx, sp[0].o, (frame[4].i));
	frame[7].i = temp1;
	LINE_NUMBER(148);
	if ((frame[7].i) >= 0) goto label_26;
	}
	LINE_NUMBER(149);
	goto label_28;
label_26:;
	{
	LINE_NUMBER(152);
	SM_arc_graphics_Gl_enableVertexAttribArray_int(ctx, (frame[7].i));
	LINE_NUMBER(153);
	jint temp0 = frame[7].i;
	jint temp1 = (jint)((arc_graphics_VertexAttribute *) NULL_CHECK((frame[5].o)))->F_components;
	jint temp2 = (jint)((arc_graphics_VertexAttribute *) NULL_CHECK((frame[5].o)))->F_type;
	jint temp3 = (jint)((arc_graphics_VertexAttribute *) NULL_CHECK((frame[5].o)))->F_normalized;
	sp[0].o = (jobject)((arc_graphics_gl_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_mesh;
	SM_arc_graphics_Gl_vertexAttribPointer_int_int_int_boolean_int_int(ctx, temp0, temp1, temp2, temp3, ((jint)((arc_graphics_Mesh *) NULL_CHECK(sp[0].o))->F_vertexSize), (frame[6].i));
	}
label_28:;
	{
	LINE_NUMBER(141);
	INST_IINC(4, 1);
	goto label_19;
	}
label_13:;
	LINE_NUMBER(156);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_graphics_gl_VertexBufferObjectWithVAO_unbindAttributes_arc_graphics_gl_Shader(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/VertexBufferObjectWithVAO:unbindAttributes", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(159);
	sp[0].o = (jobject)((arc_graphics_gl_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_cachedLocations;
	if (((jint)((arc_struct_IntSeq *) NULL_CHECK(sp[0].o))->F_size) != 0) goto label_1;
	}
	LINE_NUMBER(160);
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(163);
	frame[2].i = (jint(0));
	}
label_3:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((arc_graphics_gl_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_mesh;
	sp[0].o = (jobject)((arc_graphics_Mesh *) NULL_CHECK(sp[0].o))->F_attributes;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_4;
	}
	{
	LINE_NUMBER(164);
	sp[0].o = (jobject)((arc_graphics_gl_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_cachedLocations;
	jint temp0 = (jint)((func_arc_struct_IntSeq_get_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_get_int_R_int])(ctx, sp[0].o, (frame[2].i));
	frame[3].i = temp0;
	LINE_NUMBER(165);
	if ((frame[3].i) >= 0) goto label_7;
	}
	LINE_NUMBER(166);
	goto label_9;
label_7:;
	{
	LINE_NUMBER(168);
	SM_arc_graphics_Gl_disableVertexAttribArray_int(ctx, (frame[3].i));
	}
label_9:;
	{
	LINE_NUMBER(163);
	INST_IINC(2, 1);
	goto label_3;
	}
label_4:;
	LINE_NUMBER(170);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_graphics_gl_VertexBufferObjectWithVAO_bindData(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/VertexBufferObjectWithVAO:bindData", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(173);
	if (((jint)((arc_graphics_gl_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_isDirty) == 0) goto label_1;
	}
	{
	LINE_NUMBER(174);
	SM_arc_graphics_Gl_bindBuffer_int_int(ctx, (jint(34962)), ((jint)((arc_graphics_gl_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_bufferHandle));
	LINE_NUMBER(175);
	sp[0].o = (jobject)((arc_graphics_gl_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	sp[1].o = (jobject)((arc_graphics_gl_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_buffer;
	jint temp0 = (jint)((func_java_nio_FloatBuffer_limit_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_nio_FloatBuffer_limit_R_int])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_limit_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_limit_int_R_java_nio_Buffer])(ctx, sp[0].o, (temp0 * (jint(4))));
	LINE_NUMBER(176);
	M_arc_graphics_gl_VertexBufferObjectWithVAO_upload(ctx, (frame[0].o));
	LINE_NUMBER(177);
	((arc_graphics_gl_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_isDirty = (jint(0));
	}
label_1:;
	LINE_NUMBER(179);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_graphics_gl_VertexBufferObjectWithVAO_unbind_arc_graphics_gl_Shader(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/VertexBufferObjectWithVAO:unbind", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(183);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl30;
	((func_arc_graphics_GL30_glBindVertexArray_int) resolveInterfaceMethod(ctx, &class_arc_graphics_GL30, INDEX_arc_graphics_GL30_glBindVertexArray_int, sp[0].o))(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(184);
	((arc_graphics_gl_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_isBound = (jint(0));
	LINE_NUMBER(185);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_gl_VertexBufferObjectWithVAO_dispose(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/VertexBufferObjectWithVAO:dispose", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(192);
	SM_arc_graphics_Gl_bindBuffer_int_int(ctx, (jint(34962)), (jint(0)));
	LINE_NUMBER(193);
	SM_arc_graphics_Gl_deleteBuffer_int(ctx, ((jint)((arc_graphics_gl_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_bufferHandle));
	LINE_NUMBER(194);
	((arc_graphics_gl_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_bufferHandle = (jint(0));
	LINE_NUMBER(195);
	sp[0].o = (jobject)((arc_graphics_gl_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	SM_arc_util_Buffers_disposeUnsafeByteBuffer_java_nio_ByteBuffer(ctx, sp[0].o);
	LINE_NUMBER(196);
	M_arc_graphics_gl_VertexBufferObjectWithVAO_deleteVAO(ctx, (frame[0].o));
	LINE_NUMBER(197);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_gl_VertexBufferObjectWithVAO_deleteVAO(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/VertexBufferObjectWithVAO:deleteVAO", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(200);
	if (((jint)((arc_graphics_gl_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_vaoHandle) == (jint(-1))) goto label_1;
	}
	{
	LINE_NUMBER(201);
	clinit_arc_graphics_gl_VertexBufferObjectWithVAO(ctx);
	sp[0].o = (jobject)SF_arc_graphics_gl_VertexBufferObjectWithVAO_tmpHandle;
	sp[0].o = (jobject)((func_java_nio_IntBuffer_clear_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_IntBuffer_clear_R_java_nio_Buffer])(ctx, sp[0].o);
	LINE_NUMBER(202);
	clinit_arc_graphics_gl_VertexBufferObjectWithVAO(ctx);
	sp[0].o = (jobject)SF_arc_graphics_gl_VertexBufferObjectWithVAO_tmpHandle;
	sp[0].o = (jobject)((func_java_nio_IntBuffer_put_int_R_java_nio_IntBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_IntBuffer_put_int_R_java_nio_IntBuffer])(ctx, sp[0].o, ((jint)((arc_graphics_gl_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_vaoHandle));
	LINE_NUMBER(203);
	clinit_arc_graphics_gl_VertexBufferObjectWithVAO(ctx);
	sp[0].o = (jobject)SF_arc_graphics_gl_VertexBufferObjectWithVAO_tmpHandle;
	sp[0].o = (jobject)((func_java_nio_IntBuffer_flip_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_IntBuffer_flip_R_java_nio_Buffer])(ctx, sp[0].o);
	LINE_NUMBER(204);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl30;
	jint temp0 = jint(1);
	clinit_arc_graphics_gl_VertexBufferObjectWithVAO(ctx);
	sp[1].o = (jobject)SF_arc_graphics_gl_VertexBufferObjectWithVAO_tmpHandle;
	((func_arc_graphics_GL30_glDeleteVertexArrays_int_java_nio_IntBuffer) resolveInterfaceMethod(ctx, &class_arc_graphics_GL30, INDEX_arc_graphics_GL30_glDeleteVertexArrays_int_java_nio_IntBuffer, sp[0].o))(ctx, sp[0].o, temp0, sp[1].o);
	LINE_NUMBER(205);
	((arc_graphics_gl_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_vaoHandle = (jint(-1));
	}
label_1:;
	LINE_NUMBER(207);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void clinit_arc_graphics_gl_VertexBufferObjectWithVAO(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/VertexBufferObjectWithVAO:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_gl_VertexBufferObjectWithVAO(ctx);
	{
	LINE_NUMBER(27);
	sp[0].o = (jobject)SM_arc_util_Buffers_newIntBuffer_int_R_java_nio_IntBuffer(ctx, (jint(1)));
	clinit_arc_graphics_gl_VertexBufferObjectWithVAO(ctx);
	SF_arc_graphics_gl_VertexBufferObjectWithVAO_tmpHandle = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_graphics_gl_VertexBufferObjectWithVAO[] {
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
	(void *) M_arc_graphics_gl_VertexBufferObjectWithVAO_dispose,
	(void *) M_arc_util_Disposable_isDisposed_R_boolean,
	(void *) M_arc_graphics_gl_VertexData_render_arc_graphics_gl_IndexData_int_int_int,
	(void *) M_arc_graphics_gl_VertexBufferObjectWithVAO_size_R_int,
	(void *) M_arc_graphics_gl_VertexBufferObjectWithVAO_max_R_int,
	(void *) M_arc_graphics_gl_VertexBufferObjectWithVAO_set_Array1_float_int_int,
	(void *) M_arc_graphics_gl_VertexBufferObjectWithVAO_update_int_Array1_float_int_int,
	(void *) M_arc_graphics_gl_VertexBufferObjectWithVAO_buffer_R_java_nio_FloatBuffer,
	(void *) M_arc_graphics_gl_VertexBufferObjectWithVAO_bind_arc_graphics_gl_Shader,
	(void *) M_arc_graphics_gl_VertexBufferObjectWithVAO_unbind_arc_graphics_gl_Shader,
	(void *) M_arc_graphics_gl_VertexBufferObjectWithVAO_upload,
	(void *) M_arc_graphics_gl_VertexBufferObjectWithVAO_bufferChanged,
	(void *) M_arc_graphics_gl_VertexBufferObjectWithVAO_bindAttributes_arc_graphics_gl_Shader,
	(void *) M_arc_graphics_gl_VertexBufferObjectWithVAO_unbindAttributes_arc_graphics_gl_Shader,
	(void *) M_arc_graphics_gl_VertexBufferObjectWithVAO_bindData,
	(void *) M_arc_graphics_gl_VertexBufferObjectWithVAO_deleteVAO,
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
	{ "upload", "()V" },
	{ "bufferChanged", "()V" },
	{ "bindAttributes", "(Larc/graphics/gl/Shader;)V" },
	{ "unbindAttributes", "(Larc/graphics/gl/Shader;)V" },
	{ "bindData", "()V" },
	{ "deleteVAO", "()V" },
};

static jclass interfaces[] { &class_arc_graphics_gl_VertexData, };

static FieldMetadata fields[] {
	{ "tmpHandle", &class_java_nio_IntBuffer, (intptr_t) &SF_arc_graphics_gl_VertexBufferObjectWithVAO_tmpHandle, "Ljava/nio/IntBuffer;", 24 },
	{ "mesh", &class_arc_graphics_Mesh, offsetof(arc_graphics_gl_VertexBufferObjectWithVAO, F_mesh), "Larc/graphics/Mesh;", 16 },
	{ "buffer", &class_java_nio_FloatBuffer, offsetof(arc_graphics_gl_VertexBufferObjectWithVAO, F_buffer), "Ljava/nio/FloatBuffer;", 16 },
	{ "byteBuffer", &class_java_nio_ByteBuffer, offsetof(arc_graphics_gl_VertexBufferObjectWithVAO, F_byteBuffer), "Ljava/nio/ByteBuffer;", 16 },
	{ "isStatic", &class_boolean, offsetof(arc_graphics_gl_VertexBufferObjectWithVAO, F_isStatic), "Z", 16 },
	{ "usage", &class_int, offsetof(arc_graphics_gl_VertexBufferObjectWithVAO, F_usage), "I", 16 },
	{ "bufferHandle", &class_int, offsetof(arc_graphics_gl_VertexBufferObjectWithVAO, F_bufferHandle), "I", 0 },
	{ "isDirty", &class_boolean, offsetof(arc_graphics_gl_VertexBufferObjectWithVAO, F_isDirty), "Z", 0 },
	{ "isBound", &class_boolean, offsetof(arc_graphics_gl_VertexBufferObjectWithVAO, F_isBound), "Z", 0 },
	{ "vaoHandle", &class_int, offsetof(arc_graphics_gl_VertexBufferObjectWithVAO, F_vaoHandle), "I", 0 },
	{ "cachedLocations", &class_arc_struct_IntSeq, offsetof(arc_graphics_gl_VertexBufferObjectWithVAO, F_cachedLocations), "Larc/struct/IntSeq;", 0 },
	{ "created", &class_boolean, offsetof(arc_graphics_gl_VertexBufferObjectWithVAO, F_created), "Z", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_graphics_gl_VertexBufferObjectWithVAO_boolean_int_arc_graphics_Mesh, 0, "(ZILarc/graphics/Mesh;)V", 1 },
	{ "size", (intptr_t) M_arc_graphics_gl_VertexBufferObjectWithVAO_size_R_int, VTABLE_arc_graphics_gl_VertexBufferObjectWithVAO_size_R_int, "()I", 1 },
	{ "max", (intptr_t) M_arc_graphics_gl_VertexBufferObjectWithVAO_max_R_int, VTABLE_arc_graphics_gl_VertexBufferObjectWithVAO_max_R_int, "()I", 1 },
	{ "buffer", (intptr_t) M_arc_graphics_gl_VertexBufferObjectWithVAO_buffer_R_java_nio_FloatBuffer, VTABLE_arc_graphics_gl_VertexBufferObjectWithVAO_buffer_R_java_nio_FloatBuffer, "()Ljava/nio/FloatBuffer;", 1 },
	{ "upload", (intptr_t) M_arc_graphics_gl_VertexBufferObjectWithVAO_upload, VTABLE_arc_graphics_gl_VertexBufferObjectWithVAO_upload, "()V", 2 },
	{ "bufferChanged", (intptr_t) M_arc_graphics_gl_VertexBufferObjectWithVAO_bufferChanged, VTABLE_arc_graphics_gl_VertexBufferObjectWithVAO_bufferChanged, "()V", 2 },
	{ "set", (intptr_t) M_arc_graphics_gl_VertexBufferObjectWithVAO_set_Array1_float_int_int, VTABLE_arc_graphics_gl_VertexBufferObjectWithVAO_set_Array1_float_int_int, "([FII)V", 1 },
	{ "update", (intptr_t) M_arc_graphics_gl_VertexBufferObjectWithVAO_update_int_Array1_float_int_int, VTABLE_arc_graphics_gl_VertexBufferObjectWithVAO_update_int_Array1_float_int_int, "(I[FII)V", 1 },
	{ "bind", (intptr_t) M_arc_graphics_gl_VertexBufferObjectWithVAO_bind_arc_graphics_gl_Shader, VTABLE_arc_graphics_gl_VertexBufferObjectWithVAO_bind_arc_graphics_gl_Shader, "(Larc/graphics/gl/Shader;)V", 1 },
	{ "bindAttributes", (intptr_t) M_arc_graphics_gl_VertexBufferObjectWithVAO_bindAttributes_arc_graphics_gl_Shader, VTABLE_arc_graphics_gl_VertexBufferObjectWithVAO_bindAttributes_arc_graphics_gl_Shader, "(Larc/graphics/gl/Shader;)V", 2 },
	{ "unbindAttributes", (intptr_t) M_arc_graphics_gl_VertexBufferObjectWithVAO_unbindAttributes_arc_graphics_gl_Shader, VTABLE_arc_graphics_gl_VertexBufferObjectWithVAO_unbindAttributes_arc_graphics_gl_Shader, "(Larc/graphics/gl/Shader;)V", 2 },
	{ "bindData", (intptr_t) M_arc_graphics_gl_VertexBufferObjectWithVAO_bindData, VTABLE_arc_graphics_gl_VertexBufferObjectWithVAO_bindData, "()V", 2 },
	{ "unbind", (intptr_t) M_arc_graphics_gl_VertexBufferObjectWithVAO_unbind_arc_graphics_gl_Shader, VTABLE_arc_graphics_gl_VertexBufferObjectWithVAO_unbind_arc_graphics_gl_Shader, "(Larc/graphics/gl/Shader;)V", 1 },
	{ "dispose", (intptr_t) M_arc_graphics_gl_VertexBufferObjectWithVAO_dispose, VTABLE_arc_graphics_gl_VertexBufferObjectWithVAO_dispose, "()V", 1 },
	{ "deleteVAO", (intptr_t) M_arc_graphics_gl_VertexBufferObjectWithVAO_deleteVAO, VTABLE_arc_graphics_gl_VertexBufferObjectWithVAO_deleteVAO, "()V", 2 },
	{ "<clinit>", (intptr_t) clinit_arc_graphics_gl_VertexBufferObjectWithVAO, 0, "()V", 8 },
};

Class class_arc_graphics_gl_VertexBufferObjectWithVAO{
		.nativeName = (intptr_t) "arc/graphics/gl/VertexBufferObjectWithVAO",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_graphics_gl_VertexBufferObjectWithVAO),
		.classVtable = (intptr_t) vtable_arc_graphics_gl_VertexBufferObjectWithVAO,
		.staticInitializer = (intptr_t) clinit_arc_graphics_gl_VertexBufferObjectWithVAO,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_graphics_gl_VertexBufferObjectWithVAO,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 12,
		.nativeFields = (intptr_t) fields,
		.methodCount = 16,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 27,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_graphics_gl_VertexBufferObjectWithVAO = registerClass(&class_arc_graphics_gl_VertexBufferObjectWithVAO);

}
