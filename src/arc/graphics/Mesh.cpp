#include "arc/graphics/Mesh.h"
#include "arc/util/Disposable.h"
#include "arc/Core.h"
#include "java/lang/StringBuilder.h"
#include "java/nio/FloatBuffer.h"
#include "arc/graphics/VertexAttribute.h"
#include "arc/graphics/gl/VertexData.h"
#include "java/lang/IllegalArgumentException.h"
#include "arc/graphics/gl/VertexArray.h"
#include "arc/graphics/gl/IndexData.h"
#include "arc/graphics/gl/VertexBufferObjectWithVAO.h"
#include "arc/graphics/GL30.h"
#include "arc/graphics/gl/VertexBufferObject.h"
#include "arc/graphics/gl/Shader.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/nio/Buffer.h"
#include "java/nio/ShortBuffer.h"
#include "arc/graphics/gl/IndexArray.h"
#include "arc/graphics/gl/IndexBufferObject.h"
#include "arc/graphics/Mesh.h"

extern "C" {


void mark_arc_graphics_Mesh(jobject object, jint mark, jint depth) {
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
	auto self = (arc_graphics_Mesh *) object;
	if (self->F_attributes)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_attributes)->clazz)->markFunction)((jobject) self->F_attributes, mark, depth + 1);
	if (self->F_vertices)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_vertices)->clazz)->markFunction)((jobject) self->F_vertices, mark, depth + 1);
	if (self->F_indices)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_indices)->clazz)->markFunction)((jobject) self->F_indices, mark, depth + 1);
}

void clinit_arc_graphics_Mesh(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_graphics_Mesh_boolean_int_int_Array1_arc_graphics_VertexAttribute(jcontext ctx, jobject self, jbool param0, jint param1, jint param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Mesh:<init>", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Mesh(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(45);
	init_arc_graphics_Mesh_boolean_boolean_int_int_Array1_arc_graphics_VertexAttribute(ctx, (frame[0].o), (jint(0)), (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].o));
	LINE_NUMBER(46);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_graphics_Mesh_boolean_boolean_int_int_Array1_arc_graphics_VertexAttribute(jcontext ctx, jobject self, jbool param0, jbool param1, jint param2, jint param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Mesh:<init>", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Mesh(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(55);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(34);
	((arc_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_autoBind = (jint(1));
	LINE_NUMBER(56);
	frame[6].i = (jint(0));
	LINE_NUMBER(57);
	frame[7].o = (frame[5].o);
	frame[8].i = (((jarray) nullCheck(ctx, (frame[7].o)))->length);
	frame[9].i = (jint(0));
	}
label_4:;
	{
	if ((frame[9].i) >= (frame[8].i)) goto label_5;
	}
	{
	frame[10].o = ((jobject)ARRAY_ACCESS(jobject, (frame[7].o), (frame[9].i)));
	LINE_NUMBER(58);
	frame[6].i = ((frame[6].i) + ((jint)((arc_graphics_VertexAttribute *) NULL_CHECK((frame[10].o)))->F_size));
	LINE_NUMBER(57);
	INST_IINC(9, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(61);
	((arc_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_vertexSize = (frame[6].i);
	LINE_NUMBER(62);
	((arc_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_attributes = (jref) (frame[5].o);
	LINE_NUMBER(64);
	if ((frame[1].i) == 0) goto label_10;
	}
	clinit_arc_Core(ctx);
	(sp++)->o = SF_arc_Core_gl30;
	if ((--sp)->o != nullptr) goto label_10;
	{
	LINE_NUMBER(65);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_gl_VertexArray(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_gl_VertexArray);
	init_arc_graphics_gl_VertexArray_int_arc_graphics_Mesh(ctx, sp[1].o, (frame[3].i), (frame[0].o));
	((arc_graphics_Mesh *) NULL_CHECK(sp[0].o))->F_vertices = (jref) sp[1].o;
	LINE_NUMBER(66);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_gl_IndexArray(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_gl_IndexArray);
	init_arc_graphics_gl_IndexArray_int(ctx, sp[1].o, (frame[4].i));
	((arc_graphics_Mesh *) NULL_CHECK(sp[0].o))->F_indices = (jref) sp[1].o;
	goto label_13;
	}
label_10:;
	{
	LINE_NUMBER(67);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl30;
	if (sp[0].o == nullptr) goto label_14;
	}
	{
	LINE_NUMBER(68);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_gl_VertexBufferObjectWithVAO(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_gl_VertexBufferObjectWithVAO);
	init_arc_graphics_gl_VertexBufferObjectWithVAO_boolean_int_arc_graphics_Mesh(ctx, sp[1].o, (frame[2].i), (frame[3].i), (frame[0].o));
	((arc_graphics_Mesh *) NULL_CHECK(sp[0].o))->F_vertices = (jref) sp[1].o;
	LINE_NUMBER(69);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_gl_IndexBufferObject(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_gl_IndexBufferObject);
	init_arc_graphics_gl_IndexBufferObject_boolean_int(ctx, sp[1].o, (frame[2].i), (frame[4].i));
	((arc_graphics_Mesh *) NULL_CHECK(sp[0].o))->F_indices = (jref) sp[1].o;
	goto label_13;
	}
label_14:;
	{
	LINE_NUMBER(71);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_gl_VertexBufferObject(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_gl_VertexBufferObject);
	init_arc_graphics_gl_VertexBufferObject_boolean_int_arc_graphics_Mesh(ctx, sp[1].o, (frame[2].i), (frame[3].i), (frame[0].o));
	((arc_graphics_Mesh *) NULL_CHECK(sp[0].o))->F_vertices = (jref) sp[1].o;
	LINE_NUMBER(72);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_gl_IndexBufferObject(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_gl_IndexBufferObject);
	init_arc_graphics_gl_IndexBufferObject_boolean_int(ctx, sp[1].o, (frame[2].i), (frame[4].i));
	((arc_graphics_Mesh *) NULL_CHECK(sp[0].o))->F_indices = (jref) sp[1].o;
	}
label_13:;
	LINE_NUMBER(74);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_arc_graphics_Mesh_setVertices_Array1_float_R_arc_graphics_Mesh(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Mesh:setVertices", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(82);
	sp[0].o = (jobject)((arc_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_vertices;
	((func_arc_graphics_gl_VertexData_set_Array1_float_int_int) resolveInterfaceMethod(ctx, &class_arc_graphics_gl_VertexData, INDEX_arc_graphics_gl_VertexData_set_Array1_float_int_int, sp[0].o))(ctx, sp[0].o, (frame[1].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	LINE_NUMBER(84);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_Mesh_setVertices_Array1_float_int_int_R_arc_graphics_Mesh(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Mesh:setVertices", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(95);
	sp[0].o = (jobject)((arc_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_vertices;
	((func_arc_graphics_gl_VertexData_set_Array1_float_int_int) resolveInterfaceMethod(ctx, &class_arc_graphics_gl_VertexData, INDEX_arc_graphics_gl_VertexData_set_Array1_float_int_int, sp[0].o))(ctx, sp[0].o, (frame[1].o), (frame[2].i), (frame[3].i));
	LINE_NUMBER(97);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_Mesh_updateVertices_int_Array1_float_R_arc_graphics_Mesh(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Mesh:updateVertices", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(106);
	sp[0].o = (jobject)((func_arc_graphics_Mesh_updateVertices_int_Array1_float_int_int_R_arc_graphics_Mesh) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_Mesh_updateVertices_int_Array1_float_int_int_R_arc_graphics_Mesh])(ctx, (frame[0].o), (frame[1].i), (frame[2].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[2].o)))->length));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_Mesh_updateVertices_int_Array1_float_int_int_R_arc_graphics_Mesh(jcontext ctx, jobject self, jint param0, jobject param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Mesh:updateVertices", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(117);
	sp[0].o = (jobject)((arc_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_vertices;
	((func_arc_graphics_gl_VertexData_update_int_Array1_float_int_int) resolveInterfaceMethod(ctx, &class_arc_graphics_gl_VertexData, INDEX_arc_graphics_gl_VertexData_update_int_Array1_float_int_int, sp[0].o))(ctx, sp[0].o, (frame[1].i), (frame[2].o), (frame[3].i), (frame[4].i));
	LINE_NUMBER(118);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_Mesh_setIndices_Array1_short_R_arc_graphics_Mesh(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Mesh:setIndices", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(127);
	sp[0].o = (jobject)((arc_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_indices;
	((func_arc_graphics_gl_IndexData_set_Array1_short_int_int) resolveInterfaceMethod(ctx, &class_arc_graphics_gl_IndexData, INDEX_arc_graphics_gl_IndexData_set_Array1_short_int_int, sp[0].o))(ctx, sp[0].o, (frame[1].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	LINE_NUMBER(129);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_Mesh_setIndices_Array1_short_int_int_R_arc_graphics_Mesh(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Mesh:setIndices", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(140);
	sp[0].o = (jobject)((arc_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_indices;
	((func_arc_graphics_gl_IndexData_set_Array1_short_int_int) resolveInterfaceMethod(ctx, &class_arc_graphics_gl_IndexData, INDEX_arc_graphics_gl_IndexData_set_Array1_short_int_int, sp[0].o))(ctx, sp[0].o, (frame[1].o), (frame[2].i), (frame[3].i));
	LINE_NUMBER(142);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

void M_arc_graphics_Mesh_getIndices_Array1_short(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Mesh:getIndices", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(150);
	((func_arc_graphics_Mesh_getIndices_Array1_short_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_Mesh_getIndices_Array1_short_int])(ctx, (frame[0].o), (frame[1].o), (jint(0)));
	LINE_NUMBER(151);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_Mesh_getIndices_Array1_short_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Mesh:getIndices", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(160);
	((func_arc_graphics_Mesh_getIndices_int_Array1_short_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_Mesh_getIndices_int_Array1_short_int])(ctx, (frame[0].o), (jint(0)), (frame[1].o), (frame[2].i));
	LINE_NUMBER(161);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_Mesh_getIndices_int_Array1_short_int(jcontext ctx, jobject self, jint param0, jobject param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Mesh:getIndices", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(171);
	((func_arc_graphics_Mesh_getIndices_int_int_Array1_short_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_Mesh_getIndices_int_int_Array1_short_int])(ctx, (frame[0].o), (frame[1].i), (jint(-1)), (frame[2].o), (frame[3].i));
	LINE_NUMBER(172);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_Mesh_getIndices_int_int_Array1_short_int(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Mesh:getIndices", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(183);
	jint temp0 = (jint)((func_arc_graphics_Mesh_getNumIndices_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_Mesh_getNumIndices_R_int])(ctx, (frame[0].o));
	frame[5].i = temp0;
	LINE_NUMBER(184);
	if ((frame[2].i) >= 0) goto label_2;
	}
	{
	frame[2].i = ((frame[5].i) - (frame[1].i));
	}
label_2:;
	{
	LINE_NUMBER(185);
	if ((frame[1].i) < 0) goto label_3;
	}
	{
	if ((frame[1].i) >= (frame[5].i)) goto label_3;
	}
	{
	if (((frame[1].i) + (frame[2].i)) <= (frame[5].i)) goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(186);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Invalid range specified, offset: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8", count: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[2].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8", max: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[5].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	LINE_NUMBER(188);
	if (((((jarray) nullCheck(ctx, (frame[3].o)))->length) - (frame[4].i)) >= (frame[2].i)) goto label_5;
	}
	{
	LINE_NUMBER(189);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"not enough room in indices array, has "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jarray) nullCheck(ctx, (frame[3].o)))->length));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" shorts, needs "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[2].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_5:;
	{
	LINE_NUMBER(190);
	sp[0].o = (jobject)((func_arc_graphics_Mesh_getIndicesBuffer_R_java_nio_ShortBuffer) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_Mesh_getIndicesBuffer_R_java_nio_ShortBuffer])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_nio_ShortBuffer_position_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ShortBuffer_position_R_int])(ctx, sp[0].o);
	frame[6].i = temp0;
	LINE_NUMBER(191);
	sp[0].o = (jobject)((func_arc_graphics_Mesh_getIndicesBuffer_R_java_nio_ShortBuffer) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_Mesh_getIndicesBuffer_R_java_nio_ShortBuffer])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_nio_ShortBuffer_position_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ShortBuffer_position_int_R_java_nio_Buffer])(ctx, sp[0].o, (frame[1].i));
	LINE_NUMBER(192);
	sp[0].o = (jobject)((func_arc_graphics_Mesh_getIndicesBuffer_R_java_nio_ShortBuffer) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_Mesh_getIndicesBuffer_R_java_nio_ShortBuffer])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_nio_ShortBuffer_get_Array1_short_int_int_R_java_nio_ShortBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ShortBuffer_get_Array1_short_int_int_R_java_nio_ShortBuffer])(ctx, sp[0].o, (frame[3].o), (frame[4].i), (frame[2].i));
	LINE_NUMBER(193);
	sp[0].o = (jobject)((func_arc_graphics_Mesh_getIndicesBuffer_R_java_nio_ShortBuffer) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_Mesh_getIndicesBuffer_R_java_nio_ShortBuffer])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_nio_ShortBuffer_position_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ShortBuffer_position_int_R_java_nio_Buffer])(ctx, sp[0].o, (frame[6].i));
	LINE_NUMBER(194);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_arc_graphics_Mesh_getNumIndices_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Mesh:getNumIndices", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(198);
	sp[0].o = (jobject)((arc_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_indices;
	jint temp0 = (jint)((func_arc_graphics_gl_IndexData_size_R_int) resolveInterfaceMethod(ctx, &class_arc_graphics_gl_IndexData, INDEX_arc_graphics_gl_IndexData_size_R_int, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_arc_graphics_Mesh_getNumVertices_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Mesh:getNumVertices", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(203);
	sp[0].o = (jobject)((arc_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_vertices;
	jint temp0 = (jint)((func_arc_graphics_gl_VertexData_size_R_int) resolveInterfaceMethod(ctx, &class_arc_graphics_gl_VertexData, INDEX_arc_graphics_gl_VertexData_size_R_int, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_arc_graphics_Mesh_getMaxVertices_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Mesh:getMaxVertices", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(208);
	sp[0].o = (jobject)((arc_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_vertices;
	jint temp0 = (jint)((func_arc_graphics_gl_VertexData_max_R_int) resolveInterfaceMethod(ctx, &class_arc_graphics_gl_VertexData, INDEX_arc_graphics_gl_VertexData_max_R_int, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_arc_graphics_Mesh_getMaxIndices_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Mesh:getMaxIndices", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(213);
	sp[0].o = (jobject)((arc_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_indices;
	jint temp0 = (jint)((func_arc_graphics_gl_IndexData_max_R_int) resolveInterfaceMethod(ctx, &class_arc_graphics_gl_IndexData, INDEX_arc_graphics_gl_IndexData_max_R_int, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_arc_graphics_Mesh_getVertexSize_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Mesh:getVertexSize", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(218);
	popStackFrame(ctx);
	return ((jint)((arc_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_vertexSize);
	}

	popStackFrame(ctx);
}

void M_arc_graphics_Mesh_setAutoBind_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Mesh:setAutoBind", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(227);
	((arc_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_autoBind = (frame[1].i);
	LINE_NUMBER(228);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_Mesh_bind_arc_graphics_gl_Shader(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Mesh:bind", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(235);
	sp[0].o = (jobject)((arc_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_vertices;
	((func_arc_graphics_gl_VertexData_bind_arc_graphics_gl_Shader) resolveInterfaceMethod(ctx, &class_arc_graphics_gl_VertexData, INDEX_arc_graphics_gl_VertexData_bind_arc_graphics_gl_Shader, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(236);
	sp[0].o = (jobject)((arc_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_indices;
	jint temp0 = (jint)((func_arc_graphics_gl_IndexData_size_R_int) resolveInterfaceMethod(ctx, &class_arc_graphics_gl_IndexData, INDEX_arc_graphics_gl_IndexData_size_R_int, sp[0].o))(ctx, sp[0].o);
	if (temp0 <= 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((arc_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_indices;
	((func_arc_graphics_gl_IndexData_bind) resolveInterfaceMethod(ctx, &class_arc_graphics_gl_IndexData, INDEX_arc_graphics_gl_IndexData_bind, sp[0].o))(ctx, sp[0].o);
	}
label_2:;
	LINE_NUMBER(237);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_graphics_Mesh_unbind_arc_graphics_gl_Shader(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Mesh:unbind", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(243);
	sp[0].o = (jobject)((arc_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_vertices;
	((func_arc_graphics_gl_VertexData_unbind_arc_graphics_gl_Shader) resolveInterfaceMethod(ctx, &class_arc_graphics_gl_VertexData, INDEX_arc_graphics_gl_VertexData_unbind_arc_graphics_gl_Shader, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(244);
	sp[0].o = (jobject)((arc_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_indices;
	jint temp0 = (jint)((func_arc_graphics_gl_IndexData_size_R_int) resolveInterfaceMethod(ctx, &class_arc_graphics_gl_IndexData, INDEX_arc_graphics_gl_IndexData_size_R_int, sp[0].o))(ctx, sp[0].o);
	if (temp0 <= 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((arc_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_indices;
	((func_arc_graphics_gl_IndexData_unbind) resolveInterfaceMethod(ctx, &class_arc_graphics_gl_IndexData, INDEX_arc_graphics_gl_IndexData_unbind, sp[0].o))(ctx, sp[0].o);
	}
label_2:;
	LINE_NUMBER(245);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_graphics_Mesh_render_arc_graphics_gl_Shader_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Mesh:render", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(249);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jint temp0 = frame[2].i;
	jint temp1 = jint(0);
	sp[2].o = (jobject)((arc_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_indices;
	jint temp2 = (jint)((func_arc_graphics_gl_IndexData_max_R_int) resolveInterfaceMethod(ctx, &class_arc_graphics_gl_IndexData, INDEX_arc_graphics_gl_IndexData_max_R_int, sp[2].o))(ctx, sp[2].o);
	sp[2].i = temp0;
	sp[3].i = temp1;
	sp += 4;
	if (temp2 <= 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_arc_graphics_Mesh_getNumIndices_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_Mesh_getNumIndices_R_int])(ctx, (frame[0].o));
	sp[0].i = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	sp->i = (jint)((func_arc_graphics_Mesh_getNumVertices_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Mesh_getNumVertices_R_int])(ctx, sp[0].o);
	sp++;
label_2:;
	{
	sp -= 5;
	((func_arc_graphics_Mesh_render_arc_graphics_gl_Shader_int_int_int_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Mesh_render_arc_graphics_gl_Shader_int_int_int_boolean])(ctx, sp[0].o, sp[1].o, sp[2].i, sp[3].i, sp[4].i, ((jint)((arc_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_autoBind));
	LINE_NUMBER(250);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_Mesh_render_arc_graphics_gl_Shader_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Mesh:render", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(254);
	((func_arc_graphics_Mesh_render_arc_graphics_gl_Shader_int_int_int_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_Mesh_render_arc_graphics_gl_Shader_int_int_int_boolean])(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].i), (frame[4].i), ((jint)((arc_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_autoBind));
	LINE_NUMBER(255);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_Mesh_render_arc_graphics_gl_Shader_int_int_int_boolean(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jbool param4) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Mesh:render", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(280);
	if ((frame[4].i) != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(282);
	if ((frame[5].i) == 0) goto label_2;
	}
	{
	((func_arc_graphics_Mesh_bind_arc_graphics_gl_Shader) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_Mesh_bind_arc_graphics_gl_Shader])(ctx, (frame[0].o), (frame[1].o));
	}
label_2:;
	{
	LINE_NUMBER(284);
	sp[0].o = (jobject)((arc_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_vertices;
	sp[1].o = (jobject)((arc_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_indices;
	((func_arc_graphics_gl_VertexData_render_arc_graphics_gl_IndexData_int_int_int) resolveInterfaceMethod(ctx, &class_arc_graphics_gl_VertexData, INDEX_arc_graphics_gl_VertexData_render_arc_graphics_gl_IndexData_int_int_int, sp[0].o))(ctx, sp[0].o, sp[1].o, (frame[2].i), (frame[3].i), (frame[4].i));
	LINE_NUMBER(286);
	if ((frame[5].i) == 0) goto label_4;
	}
	{
	((func_arc_graphics_Mesh_unbind_arc_graphics_gl_Shader) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_Mesh_unbind_arc_graphics_gl_Shader])(ctx, (frame[0].o), (frame[1].o));
	}
label_4:;
	LINE_NUMBER(287);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_graphics_Mesh_dispose(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Mesh:dispose", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(292);
	sp[0].o = (jobject)((arc_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_vertices;
	((func_arc_util_Disposable_dispose) resolveInterfaceMethod(ctx, &class_arc_util_Disposable, INDEX_arc_util_Disposable_dispose, sp[0].o))(ctx, sp[0].o);
	LINE_NUMBER(293);
	sp[0].o = (jobject)((arc_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_indices;
	((func_arc_graphics_gl_IndexData_dispose) resolveInterfaceMethod(ctx, &class_arc_graphics_gl_IndexData, INDEX_arc_graphics_gl_IndexData_dispose, sp[0].o))(ctx, sp[0].o);
	LINE_NUMBER(294);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_Mesh_getVerticesBuffer_R_java_nio_FloatBuffer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Mesh:getVerticesBuffer", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(298);
	sp[0].o = (jobject)((arc_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_vertices;
	sp[0].o = (jobject)((func_arc_graphics_gl_VertexData_buffer_R_java_nio_FloatBuffer) resolveInterfaceMethod(ctx, &class_arc_graphics_gl_VertexData, INDEX_arc_graphics_gl_VertexData_buffer_R_java_nio_FloatBuffer, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_Mesh_getIndicesBuffer_R_java_nio_ShortBuffer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Mesh:getIndicesBuffer", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(303);
	sp[0].o = (jobject)((arc_graphics_Mesh *) NULL_CHECK((frame[0].o)))->F_indices;
	sp[0].o = (jobject)((func_arc_graphics_gl_IndexData_buffer_R_java_nio_ShortBuffer) resolveInterfaceMethod(ctx, &class_arc_graphics_gl_IndexData, INDEX_arc_graphics_gl_IndexData_buffer_R_java_nio_ShortBuffer, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_arc_graphics_Mesh[] {
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
	(void *) M_arc_graphics_Mesh_dispose,
	(void *) M_arc_util_Disposable_isDisposed_R_boolean,
	(void *) M_arc_graphics_Mesh_setVertices_Array1_float_R_arc_graphics_Mesh,
	(void *) M_arc_graphics_Mesh_setVertices_Array1_float_int_int_R_arc_graphics_Mesh,
	(void *) M_arc_graphics_Mesh_updateVertices_int_Array1_float_R_arc_graphics_Mesh,
	(void *) M_arc_graphics_Mesh_updateVertices_int_Array1_float_int_int_R_arc_graphics_Mesh,
	(void *) M_arc_graphics_Mesh_setIndices_Array1_short_R_arc_graphics_Mesh,
	(void *) M_arc_graphics_Mesh_setIndices_Array1_short_int_int_R_arc_graphics_Mesh,
	(void *) M_arc_graphics_Mesh_getIndices_Array1_short,
	(void *) M_arc_graphics_Mesh_getIndices_Array1_short_int,
	(void *) M_arc_graphics_Mesh_getIndices_int_Array1_short_int,
	(void *) M_arc_graphics_Mesh_getIndices_int_int_Array1_short_int,
	(void *) M_arc_graphics_Mesh_getNumIndices_R_int,
	(void *) M_arc_graphics_Mesh_getNumVertices_R_int,
	(void *) M_arc_graphics_Mesh_getMaxVertices_R_int,
	(void *) M_arc_graphics_Mesh_getMaxIndices_R_int,
	(void *) M_arc_graphics_Mesh_getVertexSize_R_int,
	(void *) M_arc_graphics_Mesh_setAutoBind_boolean,
	(void *) M_arc_graphics_Mesh_bind_arc_graphics_gl_Shader,
	(void *) M_arc_graphics_Mesh_unbind_arc_graphics_gl_Shader,
	(void *) M_arc_graphics_Mesh_render_arc_graphics_gl_Shader_int,
	(void *) M_arc_graphics_Mesh_render_arc_graphics_gl_Shader_int_int_int,
	(void *) M_arc_graphics_Mesh_render_arc_graphics_gl_Shader_int_int_int_boolean,
	(void *) M_arc_graphics_Mesh_getVerticesBuffer_R_java_nio_FloatBuffer,
	(void *) M_arc_graphics_Mesh_getIndicesBuffer_R_java_nio_ShortBuffer,
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
	{ "setVertices", "([F)Larc/graphics/Mesh;" },
	{ "setVertices", "([FII)Larc/graphics/Mesh;" },
	{ "updateVertices", "(I[F)Larc/graphics/Mesh;" },
	{ "updateVertices", "(I[FII)Larc/graphics/Mesh;" },
	{ "setIndices", "([S)Larc/graphics/Mesh;" },
	{ "setIndices", "([SII)Larc/graphics/Mesh;" },
	{ "getIndices", "([S)V" },
	{ "getIndices", "([SI)V" },
	{ "getIndices", "(I[SI)V" },
	{ "getIndices", "(II[SI)V" },
	{ "getNumIndices", "()I" },
	{ "getNumVertices", "()I" },
	{ "getMaxVertices", "()I" },
	{ "getMaxIndices", "()I" },
	{ "getVertexSize", "()I" },
	{ "setAutoBind", "(Z)V" },
	{ "bind", "(Larc/graphics/gl/Shader;)V" },
	{ "unbind", "(Larc/graphics/gl/Shader;)V" },
	{ "render", "(Larc/graphics/gl/Shader;I)V" },
	{ "render", "(Larc/graphics/gl/Shader;III)V" },
	{ "render", "(Larc/graphics/gl/Shader;IIIZ)V" },
	{ "getVerticesBuffer", "()Ljava/nio/FloatBuffer;" },
	{ "getIndicesBuffer", "()Ljava/nio/ShortBuffer;" },
};

static jclass interfaces[] { &class_arc_util_Disposable, };

static FieldMetadata fields[] {
	{ "vertexSize", &class_int, offsetof(arc_graphics_Mesh, F_vertexSize), "I", 17 },
	{ "attributes", getArrayClass(&class_arc_graphics_VertexAttribute, 1), offsetof(arc_graphics_Mesh, F_attributes), "[Larc/graphics/VertexAttribute;", 17 },
	{ "vertices", &class_arc_graphics_gl_VertexData, offsetof(arc_graphics_Mesh, F_vertices), "Larc/graphics/gl/VertexData;", 1 },
	{ "indices", &class_arc_graphics_gl_IndexData, offsetof(arc_graphics_Mesh, F_indices), "Larc/graphics/gl/IndexData;", 1 },
	{ "autoBind", &class_boolean, offsetof(arc_graphics_Mesh, F_autoBind), "Z", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_graphics_Mesh_boolean_int_int_Array1_arc_graphics_VertexAttribute, 0, "(ZII[Larc/graphics/VertexAttribute;)V", 129 },
	{ "<init>", (intptr_t) init_arc_graphics_Mesh_boolean_boolean_int_int_Array1_arc_graphics_VertexAttribute, 0, "(ZZII[Larc/graphics/VertexAttribute;)V", 129 },
	{ "setVertices", (intptr_t) M_arc_graphics_Mesh_setVertices_Array1_float_R_arc_graphics_Mesh, VTABLE_arc_graphics_Mesh_setVertices_Array1_float_R_arc_graphics_Mesh, "([F)Larc/graphics/Mesh;", 1 },
	{ "setVertices", (intptr_t) M_arc_graphics_Mesh_setVertices_Array1_float_int_int_R_arc_graphics_Mesh, VTABLE_arc_graphics_Mesh_setVertices_Array1_float_int_int_R_arc_graphics_Mesh, "([FII)Larc/graphics/Mesh;", 1 },
	{ "updateVertices", (intptr_t) M_arc_graphics_Mesh_updateVertices_int_Array1_float_R_arc_graphics_Mesh, VTABLE_arc_graphics_Mesh_updateVertices_int_Array1_float_R_arc_graphics_Mesh, "(I[F)Larc/graphics/Mesh;", 1 },
	{ "updateVertices", (intptr_t) M_arc_graphics_Mesh_updateVertices_int_Array1_float_int_int_R_arc_graphics_Mesh, VTABLE_arc_graphics_Mesh_updateVertices_int_Array1_float_int_int_R_arc_graphics_Mesh, "(I[FII)Larc/graphics/Mesh;", 1 },
	{ "setIndices", (intptr_t) M_arc_graphics_Mesh_setIndices_Array1_short_R_arc_graphics_Mesh, VTABLE_arc_graphics_Mesh_setIndices_Array1_short_R_arc_graphics_Mesh, "([S)Larc/graphics/Mesh;", 1 },
	{ "setIndices", (intptr_t) M_arc_graphics_Mesh_setIndices_Array1_short_int_int_R_arc_graphics_Mesh, VTABLE_arc_graphics_Mesh_setIndices_Array1_short_int_int_R_arc_graphics_Mesh, "([SII)Larc/graphics/Mesh;", 1 },
	{ "getIndices", (intptr_t) M_arc_graphics_Mesh_getIndices_Array1_short, VTABLE_arc_graphics_Mesh_getIndices_Array1_short, "([S)V", 1 },
	{ "getIndices", (intptr_t) M_arc_graphics_Mesh_getIndices_Array1_short_int, VTABLE_arc_graphics_Mesh_getIndices_Array1_short_int, "([SI)V", 1 },
	{ "getIndices", (intptr_t) M_arc_graphics_Mesh_getIndices_int_Array1_short_int, VTABLE_arc_graphics_Mesh_getIndices_int_Array1_short_int, "(I[SI)V", 1 },
	{ "getIndices", (intptr_t) M_arc_graphics_Mesh_getIndices_int_int_Array1_short_int, VTABLE_arc_graphics_Mesh_getIndices_int_int_Array1_short_int, "(II[SI)V", 1 },
	{ "getNumIndices", (intptr_t) M_arc_graphics_Mesh_getNumIndices_R_int, VTABLE_arc_graphics_Mesh_getNumIndices_R_int, "()I", 1 },
	{ "getNumVertices", (intptr_t) M_arc_graphics_Mesh_getNumVertices_R_int, VTABLE_arc_graphics_Mesh_getNumVertices_R_int, "()I", 1 },
	{ "getMaxVertices", (intptr_t) M_arc_graphics_Mesh_getMaxVertices_R_int, VTABLE_arc_graphics_Mesh_getMaxVertices_R_int, "()I", 1 },
	{ "getMaxIndices", (intptr_t) M_arc_graphics_Mesh_getMaxIndices_R_int, VTABLE_arc_graphics_Mesh_getMaxIndices_R_int, "()I", 1 },
	{ "getVertexSize", (intptr_t) M_arc_graphics_Mesh_getVertexSize_R_int, VTABLE_arc_graphics_Mesh_getVertexSize_R_int, "()I", 1 },
	{ "setAutoBind", (intptr_t) M_arc_graphics_Mesh_setAutoBind_boolean, VTABLE_arc_graphics_Mesh_setAutoBind_boolean, "(Z)V", 1 },
	{ "bind", (intptr_t) M_arc_graphics_Mesh_bind_arc_graphics_gl_Shader, VTABLE_arc_graphics_Mesh_bind_arc_graphics_gl_Shader, "(Larc/graphics/gl/Shader;)V", 1 },
	{ "unbind", (intptr_t) M_arc_graphics_Mesh_unbind_arc_graphics_gl_Shader, VTABLE_arc_graphics_Mesh_unbind_arc_graphics_gl_Shader, "(Larc/graphics/gl/Shader;)V", 1 },
	{ "render", (intptr_t) M_arc_graphics_Mesh_render_arc_graphics_gl_Shader_int, VTABLE_arc_graphics_Mesh_render_arc_graphics_gl_Shader_int, "(Larc/graphics/gl/Shader;I)V", 1 },
	{ "render", (intptr_t) M_arc_graphics_Mesh_render_arc_graphics_gl_Shader_int_int_int, VTABLE_arc_graphics_Mesh_render_arc_graphics_gl_Shader_int_int_int, "(Larc/graphics/gl/Shader;III)V", 1 },
	{ "render", (intptr_t) M_arc_graphics_Mesh_render_arc_graphics_gl_Shader_int_int_int_boolean, VTABLE_arc_graphics_Mesh_render_arc_graphics_gl_Shader_int_int_int_boolean, "(Larc/graphics/gl/Shader;IIIZ)V", 1 },
	{ "dispose", (intptr_t) M_arc_graphics_Mesh_dispose, VTABLE_arc_graphics_Mesh_dispose, "()V", 1 },
	{ "getVerticesBuffer", (intptr_t) M_arc_graphics_Mesh_getVerticesBuffer_R_java_nio_FloatBuffer, VTABLE_arc_graphics_Mesh_getVerticesBuffer_R_java_nio_FloatBuffer, "()Ljava/nio/FloatBuffer;", 1 },
	{ "getIndicesBuffer", (intptr_t) M_arc_graphics_Mesh_getIndicesBuffer_R_java_nio_ShortBuffer, VTABLE_arc_graphics_Mesh_getIndicesBuffer_R_java_nio_ShortBuffer, "()Ljava/nio/ShortBuffer;", 1 },
};

Class class_arc_graphics_Mesh{
		.nativeName = (intptr_t) "arc/graphics/Mesh",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_graphics_Mesh),
		.classVtable = (intptr_t) vtable_arc_graphics_Mesh,
		.staticInitializer = (intptr_t) clinit_arc_graphics_Mesh,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_graphics_Mesh,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 26,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 36,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_graphics_Mesh = registerClass(&class_arc_graphics_Mesh);

}
