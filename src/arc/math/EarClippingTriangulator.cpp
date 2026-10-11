#include "arc/math/EarClippingTriangulator.h"
#include "arc/struct/ShortSeq.h"
#include "java/lang/Math.h"
#include "java/lang/Object.h"
#include "arc/struct/FloatSeq.h"
#include "arc/struct/IntSeq.h"
#include "arc/math/EarClippingTriangulator.h"

extern "C" {

jint SF_arc_math_EarClippingTriangulator_CONCAVE;
jint SF_arc_math_EarClippingTriangulator_CONVEX;

void mark_arc_math_EarClippingTriangulator(jobject object, jint mark, jint depth) {
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
	auto self = (arc_math_EarClippingTriangulator *) object;
	if (self->F_indicesArray)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_indicesArray)->clazz)->markFunction)((jobject) self->F_indicesArray, mark, depth + 1);
	if (self->F_vertexTypes)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_vertexTypes)->clazz)->markFunction)((jobject) self->F_vertexTypes, mark, depth + 1);
	if (self->F_triangles)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_triangles)->clazz)->markFunction)((jobject) self->F_triangles, mark, depth + 1);
	if (self->F_indices)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_indices)->clazz)->markFunction)((jobject) self->F_indices, mark, depth + 1);
	if (self->F_vertices)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_vertices)->clazz)->markFunction)((jobject) self->F_vertices, mark, depth + 1);
}

void clinit_arc_math_EarClippingTriangulator(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_arc_math_EarClippingTriangulator_CONCAVE = jint(-1);
	SF_arc_math_EarClippingTriangulator_CONVEX = jint(1);
}

void init_arc_math_EarClippingTriangulator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/EarClippingTriangulator:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_EarClippingTriangulator(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(24);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(28);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ShortSeq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ShortSeq);
	init_arc_struct_ShortSeq(ctx, sp[1].o);
	((arc_math_EarClippingTriangulator *) NULL_CHECK(sp[0].o))->F_indicesArray = (jref) sp[1].o;
	LINE_NUMBER(29);
	sp[0].o = frame[0].o;
	clinit_arc_struct_IntSeq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_IntSeq);
	init_arc_struct_IntSeq(ctx, sp[1].o);
	((arc_math_EarClippingTriangulator *) NULL_CHECK(sp[0].o))->F_vertexTypes = (jref) sp[1].o;
	LINE_NUMBER(30);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ShortSeq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ShortSeq);
	init_arc_struct_ShortSeq(ctx, sp[1].o);
	((arc_math_EarClippingTriangulator *) NULL_CHECK(sp[0].o))->F_triangles = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_arc_math_EarClippingTriangulator_areVerticesClockwise_Array1_float_int_int_R_boolean(jcontext ctx, jobject param0, jint param1, jint param2) {
	jtype frame[14];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/EarClippingTriangulator:areVerticesClockwise", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_EarClippingTriangulator(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(36);
	if ((frame[2].i) > (jint(2))) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(37);
	frame[3].f = (jfloat(0));
	LINE_NUMBER(38);
	frame[8].i = (frame[1].i);
	frame[9].i = (((frame[1].i) + (frame[2].i)) - (jint(3)));
	}
label_4:;
	{
	if ((frame[8].i) >= (frame[9].i)) goto label_5;
	}
	{
	LINE_NUMBER(39);
	frame[4].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (frame[8].i)));
	LINE_NUMBER(40);
	frame[5].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), ((frame[8].i) + (jint(1)))));
	LINE_NUMBER(41);
	frame[6].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), ((frame[8].i) + (jint(2)))));
	LINE_NUMBER(42);
	frame[7].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), ((frame[8].i) + (jint(3)))));
	LINE_NUMBER(43);
	frame[3].f = ((frame[3].f) + (((frame[4].f) * (frame[7].f)) - ((frame[6].f) * (frame[5].f))));
	LINE_NUMBER(38);
	INST_IINC(8, 2);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(45);
	frame[4].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (((frame[1].i) + (frame[2].i)) - (jint(2)))));
	LINE_NUMBER(46);
	frame[5].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (((frame[1].i) + (frame[2].i)) - (jint(1)))));
	LINE_NUMBER(47);
	frame[6].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (frame[1].i)));
	LINE_NUMBER(48);
	frame[7].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), ((frame[1].i) + (jint(1)))));
	LINE_NUMBER(49);
	if ((floatCompare((((frame[3].f) + ((frame[4].f) * (frame[7].f))) - ((frame[6].f) * (frame[5].f))), (jfloat(0)), 1)) >= 0) goto label_16;
	}
	INST_ICONST(1);
	goto label_17;
label_16:;
	INST_ICONST(0);
label_17:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint SM_arc_math_EarClippingTriangulator_computeSpannedAreaSign_float_float_float_float_float_float_R_int(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5) {
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/EarClippingTriangulator:computeSpannedAreaSign", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_EarClippingTriangulator(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	{
	LINE_NUMBER(53);
	frame[6].f = ((frame[0].f) * ((frame[5].f) - (frame[3].f)));
	LINE_NUMBER(54);
	frame[6].f = ((frame[6].f) + ((frame[2].f) * ((frame[1].f) - (frame[5].f))));
	LINE_NUMBER(55);
	frame[6].f = ((frame[6].f) + ((frame[4].f) * ((frame[3].f) - (frame[1].f))));
	LINE_NUMBER(56);
	jfloat temp0 = (jfloat)SM_java_lang_Math_signum_float_R_float(ctx, (frame[6].f));
	popStackFrame(ctx);
	return (jint(temp0));
	}

	popStackFrame(ctx);
}

jobject M_arc_math_EarClippingTriangulator_computeTriangles_arc_struct_FloatSeq_R_arc_struct_ShortSeq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/EarClippingTriangulator:computeTriangles", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(61);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_struct_FloatSeq *) NULL_CHECK((frame[1].o)))->F_items;
	sp[0].o = (jobject)((func_arc_math_EarClippingTriangulator_computeTriangles_Array1_float_int_int_R_arc_struct_ShortSeq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_EarClippingTriangulator_computeTriangles_Array1_float_int_int_R_arc_struct_ShortSeq])(ctx, sp[0].o, sp[1].o, (jint(0)), ((jint)((arc_struct_FloatSeq *) NULL_CHECK((frame[1].o)))->F_size));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_EarClippingTriangulator_computeTriangles_Array1_float_R_arc_struct_ShortSeq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/EarClippingTriangulator:computeTriangles", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(66);
	sp[0].o = (jobject)((func_arc_math_EarClippingTriangulator_computeTriangles_Array1_float_int_int_R_arc_struct_ShortSeq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_EarClippingTriangulator_computeTriangles_Array1_float_int_int_R_arc_struct_ShortSeq])(ctx, (frame[0].o), (frame[1].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_EarClippingTriangulator_computeTriangles_Array1_float_int_int_R_arc_struct_ShortSeq(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/EarClippingTriangulator:computeTriangles", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(76);
	((arc_math_EarClippingTriangulator *) NULL_CHECK((frame[0].o)))->F_vertices = (jref) (frame[1].o);
	LINE_NUMBER(77);
	sp[0].o = frame[0].o;
	jint temp0 = (frame[3].i) / (jint(2));
	((arc_math_EarClippingTriangulator *) NULL_CHECK(sp[0].o))->F_vertexCount = temp0;
	frame[4].i = temp0;
	LINE_NUMBER(78);
	frame[5].i = ((frame[2].i) / (jint(2)));
	LINE_NUMBER(80);
	sp[0].o = (jobject)((arc_math_EarClippingTriangulator *) NULL_CHECK((frame[0].o)))->F_indicesArray;
	frame[6].o = sp[0].o;
	LINE_NUMBER(81);
	((func_arc_struct_ShortSeq_clear) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_struct_ShortSeq_clear])(ctx, (frame[6].o));
	LINE_NUMBER(82);
	sp[0].o = (jobject)((func_arc_struct_ShortSeq_ensureCapacity_int_R_Array1_short) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_struct_ShortSeq_ensureCapacity_int_R_Array1_short])(ctx, (frame[6].o), (frame[4].i));
	LINE_NUMBER(83);
	((arc_struct_ShortSeq *) NULL_CHECK((frame[6].o)))->F_size = (frame[4].i);
	LINE_NUMBER(84);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_struct_ShortSeq *) NULL_CHECK((frame[6].o)))->F_items;
	((arc_math_EarClippingTriangulator *) NULL_CHECK(sp[0].o))->F_indices = (jref) sp[1].o;
	frame[7].o = sp[1].o;
	LINE_NUMBER(85);
	jint temp3 = (jint)SM_arc_math_EarClippingTriangulator_areVerticesClockwise_Array1_float_int_int_R_boolean(ctx, (frame[1].o), (frame[2].i), (frame[3].i));
	if (temp3 == 0) goto label_9;
	}
	{
	LINE_NUMBER(86);
	frame[8].i = (jint(0));
	}
label_11:;
	{
	if ((frame[8].i) >= (frame[4].i)) goto label_12;
	}
	{
	LINE_NUMBER(87);
	ARRAY_ACCESS(jshort, (frame[7].o), (frame[8].i)) = (jshort(((frame[5].i) + (frame[8].i))));
	LINE_NUMBER(86);
	frame[8].i = (jshort(((frame[8].i) + (jint(1)))));
	goto label_11;
	}
label_12:;
	goto label_15;
label_9:;
	{
	LINE_NUMBER(89);
	frame[8].i = (jint(0));
	frame[9].i = ((frame[4].i) - (jint(1)));
	}
label_17:;
	{
	if ((frame[8].i) >= (frame[4].i)) goto label_15;
	}
	{
	LINE_NUMBER(90);
	ARRAY_ACCESS(jshort, (frame[7].o), (frame[8].i)) = (jshort((((frame[5].i) + (frame[9].i)) - (frame[8].i))));
	LINE_NUMBER(89);
	INST_IINC(8, 1);
	goto label_17;
	}
label_15:;
	{
	LINE_NUMBER(93);
	sp[0].o = (jobject)((arc_math_EarClippingTriangulator *) NULL_CHECK((frame[0].o)))->F_vertexTypes;
	frame[8].o = sp[0].o;
	LINE_NUMBER(94);
	((func_arc_struct_IntSeq_clear) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_arc_struct_IntSeq_clear])(ctx, (frame[8].o));
	LINE_NUMBER(95);
	sp[0].o = (jobject)((func_arc_struct_IntSeq_ensureCapacity_int_R_Array1_int) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_arc_struct_IntSeq_ensureCapacity_int_R_Array1_int])(ctx, (frame[8].o), (frame[4].i));
	LINE_NUMBER(96);
	frame[9].i = (jint(0));
	}
label_23:;
	{
	if ((frame[9].i) >= (frame[4].i)) goto label_24;
	}
	{
	LINE_NUMBER(97);
	sp[0].o = frame[8].o;
	jint temp0 = (jint)M_arc_math_EarClippingTriangulator_classifyVertex_int_R_int(ctx, (frame[0].o), (frame[9].i));
	((func_arc_struct_IntSeq_add_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_add_int])(ctx, sp[0].o, temp0);
	LINE_NUMBER(96);
	INST_IINC(9, 1);
	goto label_23;
	}
label_24:;
	{
	LINE_NUMBER(100);
	sp[0].o = (jobject)((arc_math_EarClippingTriangulator *) NULL_CHECK((frame[0].o)))->F_triangles;
	frame[9].o = sp[0].o;
	LINE_NUMBER(101);
	((func_arc_struct_ShortSeq_clear) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_arc_struct_ShortSeq_clear])(ctx, (frame[9].o));
	LINE_NUMBER(102);
	sp[0].o = frame[9].o;
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (jint(0)), ((frame[4].i) - (jint(2))));
	sp[0].o = (jobject)((func_arc_struct_ShortSeq_ensureCapacity_int_R_Array1_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ShortSeq_ensureCapacity_int_R_Array1_short])(ctx, sp[0].o, (temp0 * (jint(3))));
	LINE_NUMBER(103);
	M_arc_math_EarClippingTriangulator_triangulate(ctx, (frame[0].o));
	LINE_NUMBER(104);
	popStackFrame(ctx);
	return (frame[9].o);
	}

	popStackFrame(ctx);
}

void M_arc_math_EarClippingTriangulator_triangulate(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/EarClippingTriangulator:triangulate", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(108);
	sp[0].o = (jobject)((arc_math_EarClippingTriangulator *) NULL_CHECK((frame[0].o)))->F_vertexTypes;
	sp[0].o = (jobject)((arc_struct_IntSeq *) NULL_CHECK(sp[0].o))->F_items;
	frame[1].o = sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(110);
	if (((jint)((arc_math_EarClippingTriangulator *) NULL_CHECK((frame[0].o)))->F_vertexCount) <= (jint(3))) goto label_2;
	}
	{
	LINE_NUMBER(111);
	jint temp0 = (jint)M_arc_math_EarClippingTriangulator_findEarTip_R_int(ctx, (frame[0].o));
	frame[2].i = temp0;
	LINE_NUMBER(112);
	M_arc_math_EarClippingTriangulator_cutEarTip_int(ctx, (frame[0].o), (frame[2].i));
	LINE_NUMBER(115);
	jint temp1 = (jint)M_arc_math_EarClippingTriangulator_previousIndex_int_R_int(ctx, (frame[0].o), (frame[2].i));
	frame[3].i = temp1;
	LINE_NUMBER(116);
	if ((frame[2].i) != ((jint)((arc_math_EarClippingTriangulator *) NULL_CHECK((frame[0].o)))->F_vertexCount)) goto label_7;
	}
	INST_ICONST(0);
	goto label_8;
label_7:;
	INST_ILOAD(2);
label_8:;
	{
	sp -= 1;
	frame[4].i = sp[0].i;
	LINE_NUMBER(117);
	sp[0].o = frame[1].o;
	jint temp0 = frame[3].i;
	jint temp1 = (jint)M_arc_math_EarClippingTriangulator_classifyVertex_int_R_int(ctx, (frame[0].o), (frame[3].i));
	ARRAY_ACCESS(jint, sp[0].o, temp0) = temp1;
	LINE_NUMBER(118);
	sp[0].o = frame[1].o;
	jint temp2 = frame[4].i;
	jint temp3 = (jint)M_arc_math_EarClippingTriangulator_classifyVertex_int_R_int(ctx, (frame[0].o), (frame[4].i));
	ARRAY_ACCESS(jint, sp[0].o, temp2) = temp3;
	LINE_NUMBER(119);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(121);
	if (((jint)((arc_math_EarClippingTriangulator *) NULL_CHECK((frame[0].o)))->F_vertexCount) != (jint(3))) goto label_12;
	}
	{
	LINE_NUMBER(122);
	sp[0].o = (jobject)((arc_math_EarClippingTriangulator *) NULL_CHECK((frame[0].o)))->F_triangles;
	frame[2].o = sp[0].o;
	LINE_NUMBER(123);
	sp[0].o = (jobject)((arc_math_EarClippingTriangulator *) NULL_CHECK((frame[0].o)))->F_indices;
	frame[3].o = sp[0].o;
	LINE_NUMBER(124);
	((func_arc_struct_ShortSeq_add_short) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_ShortSeq_add_short])(ctx, (frame[2].o), ((jint)ARRAY_ACCESS(jshort, (frame[3].o), (jint(0)))));
	LINE_NUMBER(125);
	((func_arc_struct_ShortSeq_add_short) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_ShortSeq_add_short])(ctx, (frame[2].o), ((jint)ARRAY_ACCESS(jshort, (frame[3].o), (jint(1)))));
	LINE_NUMBER(126);
	((func_arc_struct_ShortSeq_add_short) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_ShortSeq_add_short])(ctx, (frame[2].o), ((jint)ARRAY_ACCESS(jshort, (frame[3].o), (jint(2)))));
	}
label_12:;
	LINE_NUMBER(128);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_arc_math_EarClippingTriangulator_classifyVertex_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/EarClippingTriangulator:classifyVertex", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(132);
	sp[0].o = (jobject)((arc_math_EarClippingTriangulator *) NULL_CHECK((frame[0].o)))->F_indices;
	frame[2].o = sp[0].o;
	LINE_NUMBER(133);
	sp[0].o = frame[2].o;
	jint temp0 = (jint)M_arc_math_EarClippingTriangulator_previousIndex_int_R_int(ctx, (frame[0].o), (frame[1].i));
	frame[3].i = (((jint)ARRAY_ACCESS(jshort, sp[0].o, temp0)) * (jint(2)));
	LINE_NUMBER(134);
	frame[4].i = (((jint)ARRAY_ACCESS(jshort, (frame[2].o), (frame[1].i))) * (jint(2)));
	LINE_NUMBER(135);
	sp[0].o = frame[2].o;
	jint temp1 = (jint)M_arc_math_EarClippingTriangulator_nextIndex_int_R_int(ctx, (frame[0].o), (frame[1].i));
	frame[5].i = (((jint)ARRAY_ACCESS(jshort, sp[0].o, temp1)) * (jint(2)));
	LINE_NUMBER(136);
	sp[0].o = (jobject)((arc_math_EarClippingTriangulator *) NULL_CHECK((frame[0].o)))->F_vertices;
	frame[6].o = sp[0].o;
	LINE_NUMBER(137);
	jint temp2 = (jint)SM_arc_math_EarClippingTriangulator_computeSpannedAreaSign_float_float_float_float_float_float_R_int(ctx, ((jfloat)ARRAY_ACCESS(jfloat, (frame[6].o), (frame[3].i))), ((jfloat)ARRAY_ACCESS(jfloat, (frame[6].o), ((frame[3].i) + (jint(1))))), ((jfloat)ARRAY_ACCESS(jfloat, (frame[6].o), (frame[4].i))), ((jfloat)ARRAY_ACCESS(jfloat, (frame[6].o), ((frame[4].i) + (jint(1))))), ((jfloat)ARRAY_ACCESS(jfloat, (frame[6].o), (frame[5].i))), ((jfloat)ARRAY_ACCESS(jfloat, (frame[6].o), ((frame[5].i) + (jint(1))))));
	popStackFrame(ctx);
	return temp2;
	}

	popStackFrame(ctx);
}

jint M_arc_math_EarClippingTriangulator_findEarTip_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/EarClippingTriangulator:findEarTip", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(142);
	frame[1].i = ((jint)((arc_math_EarClippingTriangulator *) NULL_CHECK((frame[0].o)))->F_vertexCount);
	LINE_NUMBER(143);
	frame[2].i = (jint(0));
	}
label_2:;
	{
	if ((frame[2].i) >= (frame[1].i)) goto label_3;
	}
	{
	LINE_NUMBER(144);
	jint temp0 = (jint)M_arc_math_EarClippingTriangulator_isEarTip_int_R_boolean(ctx, (frame[0].o), (frame[2].i));
	if (temp0 == 0) goto label_5;
	}
	INST_ILOAD(2);
	popStackFrame(ctx);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(143);
	INST_IINC(2, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(153);
	sp[0].o = (jobject)((arc_math_EarClippingTriangulator *) NULL_CHECK((frame[0].o)))->F_vertexTypes;
	sp[0].o = (jobject)((arc_struct_IntSeq *) NULL_CHECK(sp[0].o))->F_items;
	frame[2].o = sp[0].o;
	LINE_NUMBER(154);
	frame[3].i = (jint(0));
	}
label_7:;
	{
	if ((frame[3].i) >= (frame[1].i)) goto label_8;
	}
	{
	LINE_NUMBER(155);
	if (((jint)ARRAY_ACCESS(jint, (frame[2].o), (frame[3].i))) == (jint(-1))) goto label_10;
	}
	INST_ILOAD(3);
	popStackFrame(ctx);
	INST_IRETURN();
label_10:;
	{
	LINE_NUMBER(154);
	INST_IINC(3, 1);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(156);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_arc_math_EarClippingTriangulator_isEarTip_int_R_boolean(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[26];
	auto stack = &frame[20];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/EarClippingTriangulator:isEarTip", 26 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(160);
	sp[0].o = (jobject)((arc_math_EarClippingTriangulator *) NULL_CHECK((frame[0].o)))->F_vertexTypes;
	sp[0].o = (jobject)((arc_struct_IntSeq *) NULL_CHECK(sp[0].o))->F_items;
	frame[2].o = sp[0].o;
	LINE_NUMBER(161);
	if (((jint)ARRAY_ACCESS(jint, (frame[2].o), (frame[1].i))) != (jint(-1))) goto label_2;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(163);
	jint temp0 = (jint)M_arc_math_EarClippingTriangulator_previousIndex_int_R_int(ctx, (frame[0].o), (frame[1].i));
	frame[3].i = temp0;
	LINE_NUMBER(164);
	jint temp1 = (jint)M_arc_math_EarClippingTriangulator_nextIndex_int_R_int(ctx, (frame[0].o), (frame[1].i));
	frame[4].i = temp1;
	LINE_NUMBER(165);
	sp[0].o = (jobject)((arc_math_EarClippingTriangulator *) NULL_CHECK((frame[0].o)))->F_indices;
	frame[5].o = sp[0].o;
	LINE_NUMBER(166);
	frame[6].i = (((jint)ARRAY_ACCESS(jshort, (frame[5].o), (frame[3].i))) * (jint(2)));
	LINE_NUMBER(167);
	frame[7].i = (((jint)ARRAY_ACCESS(jshort, (frame[5].o), (frame[1].i))) * (jint(2)));
	LINE_NUMBER(168);
	frame[8].i = (((jint)ARRAY_ACCESS(jshort, (frame[5].o), (frame[4].i))) * (jint(2)));
	LINE_NUMBER(169);
	sp[0].o = (jobject)((arc_math_EarClippingTriangulator *) NULL_CHECK((frame[0].o)))->F_vertices;
	frame[9].o = sp[0].o;
	LINE_NUMBER(170);
	frame[10].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[9].o), (frame[6].i)));
	frame[11].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[9].o), ((frame[6].i) + (jint(1)))));
	LINE_NUMBER(171);
	frame[12].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[9].o), (frame[7].i)));
	frame[13].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[9].o), ((frame[7].i) + (jint(1)))));
	LINE_NUMBER(172);
	frame[14].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[9].o), (frame[8].i)));
	frame[15].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[9].o), ((frame[8].i) + (jint(1)))));
	LINE_NUMBER(176);
	jint temp2 = (jint)M_arc_math_EarClippingTriangulator_nextIndex_int_R_int(ctx, (frame[0].o), (frame[4].i));
	frame[16].i = temp2;
	}
label_16:;
	{
	if ((frame[16].i) == (frame[3].i)) goto label_17;
	}
	{
	LINE_NUMBER(179);
	if (((jint)ARRAY_ACCESS(jint, (frame[2].o), (frame[16].i))) == (jint(1))) goto label_19;
	}
	{
	LINE_NUMBER(180);
	frame[17].i = (((jint)ARRAY_ACCESS(jshort, (frame[5].o), (frame[16].i))) * (jint(2)));
	LINE_NUMBER(181);
	frame[18].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[9].o), (frame[17].i)));
	LINE_NUMBER(182);
	frame[19].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[9].o), ((frame[17].i) + (jint(1)))));
	LINE_NUMBER(186);
	jint temp0 = (jint)SM_arc_math_EarClippingTriangulator_computeSpannedAreaSign_float_float_float_float_float_float_R_int(ctx, (frame[14].f), (frame[15].f), (frame[10].f), (frame[11].f), (frame[18].f), (frame[19].f));
	if (temp0 < 0) goto label_19;
	}
	{
	LINE_NUMBER(187);
	jint temp0 = (jint)SM_arc_math_EarClippingTriangulator_computeSpannedAreaSign_float_float_float_float_float_float_R_int(ctx, (frame[10].f), (frame[11].f), (frame[12].f), (frame[13].f), (frame[18].f), (frame[19].f));
	if (temp0 < 0) goto label_19;
	}
	{
	LINE_NUMBER(188);
	jint temp0 = (jint)SM_arc_math_EarClippingTriangulator_computeSpannedAreaSign_float_float_float_float_float_float_R_int(ctx, (frame[12].f), (frame[13].f), (frame[14].f), (frame[15].f), (frame[18].f), (frame[19].f));
	if (temp0 < 0) goto label_19;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_19:;
	{
	LINE_NUMBER(176);
	jint temp0 = (jint)M_arc_math_EarClippingTriangulator_nextIndex_int_R_int(ctx, (frame[0].o), (frame[16].i));
	frame[16].i = temp0;
	goto label_16;
	}
label_17:;
	{
	LINE_NUMBER(193);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void M_arc_math_EarClippingTriangulator_cutEarTip_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/EarClippingTriangulator:cutEarTip", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(197);
	sp[0].o = (jobject)((arc_math_EarClippingTriangulator *) NULL_CHECK((frame[0].o)))->F_indices;
	frame[2].o = sp[0].o;
	LINE_NUMBER(198);
	sp[0].o = (jobject)((arc_math_EarClippingTriangulator *) NULL_CHECK((frame[0].o)))->F_triangles;
	frame[3].o = sp[0].o;
	LINE_NUMBER(200);
	sp[0].o = frame[3].o;
	sp[1].o = frame[2].o;
	jint temp0 = (jint)M_arc_math_EarClippingTriangulator_previousIndex_int_R_int(ctx, (frame[0].o), (frame[1].i));
	((func_arc_struct_ShortSeq_add_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ShortSeq_add_short])(ctx, sp[0].o, ((jint)ARRAY_ACCESS(jshort, sp[1].o, temp0)));
	LINE_NUMBER(201);
	((func_arc_struct_ShortSeq_add_short) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_ShortSeq_add_short])(ctx, (frame[3].o), ((jint)ARRAY_ACCESS(jshort, (frame[2].o), (frame[1].i))));
	LINE_NUMBER(202);
	sp[0].o = frame[3].o;
	sp[1].o = frame[2].o;
	jint temp1 = (jint)M_arc_math_EarClippingTriangulator_nextIndex_int_R_int(ctx, (frame[0].o), (frame[1].i));
	((func_arc_struct_ShortSeq_add_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ShortSeq_add_short])(ctx, sp[0].o, ((jint)ARRAY_ACCESS(jshort, sp[1].o, temp1)));
	LINE_NUMBER(204);
	sp[0].o = (jobject)((arc_math_EarClippingTriangulator *) NULL_CHECK((frame[0].o)))->F_indicesArray;
	jint temp2 = (jint)((func_arc_struct_ShortSeq_removeIndex_int_R_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ShortSeq_removeIndex_int_R_short])(ctx, sp[0].o, (frame[1].i));
	LINE_NUMBER(205);
	sp[0].o = (jobject)((arc_math_EarClippingTriangulator *) NULL_CHECK((frame[0].o)))->F_vertexTypes;
	jint temp3 = (jint)((func_arc_struct_IntSeq_removeIndex_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_removeIndex_int_R_int])(ctx, sp[0].o, (frame[1].i));
	LINE_NUMBER(206);
	sp[0].o = frame[0].o;
	((arc_math_EarClippingTriangulator *) NULL_CHECK(sp[0].o))->F_vertexCount = (((jint)((arc_math_EarClippingTriangulator *) NULL_CHECK(sp[0].o))->F_vertexCount) - (jint(1)));
	LINE_NUMBER(207);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_arc_math_EarClippingTriangulator_previousIndex_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/EarClippingTriangulator:previousIndex", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(210);
	if ((frame[1].i) != 0) goto label_1;
	}
	{
	jint temp0 = (jint)((arc_math_EarClippingTriangulator *) NULL_CHECK((frame[0].o)))->F_vertexCount;
	sp[0].i = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ILOAD(1);
label_2:;
	{
	sp -= 1;
	popStackFrame(ctx);
	return (sp[0].i - (jint(1)));
	}

	popStackFrame(ctx);
}

jint M_arc_math_EarClippingTriangulator_nextIndex_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/EarClippingTriangulator:nextIndex", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(214);
	popStackFrame(ctx);
	return (((frame[1].i) + (jint(1))) % ((jint)((arc_math_EarClippingTriangulator *) NULL_CHECK((frame[0].o)))->F_vertexCount));
	}

	popStackFrame(ctx);
}

void *vtable_arc_math_EarClippingTriangulator[] {
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
	(void *) M_arc_math_EarClippingTriangulator_computeTriangles_arc_struct_FloatSeq_R_arc_struct_ShortSeq,
	(void *) M_arc_math_EarClippingTriangulator_computeTriangles_Array1_float_R_arc_struct_ShortSeq,
	(void *) M_arc_math_EarClippingTriangulator_computeTriangles_Array1_float_int_int_R_arc_struct_ShortSeq,
	(void *) M_arc_math_EarClippingTriangulator_triangulate,
	(void *) M_arc_math_EarClippingTriangulator_classifyVertex_int_R_int,
	(void *) M_arc_math_EarClippingTriangulator_findEarTip_R_int,
	(void *) M_arc_math_EarClippingTriangulator_isEarTip_int_R_boolean,
	(void *) M_arc_math_EarClippingTriangulator_cutEarTip_int,
	(void *) M_arc_math_EarClippingTriangulator_previousIndex_int_R_int,
	(void *) M_arc_math_EarClippingTriangulator_nextIndex_int_R_int,
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
	{ "computeTriangles", "(Larc/struct/FloatSeq;)Larc/struct/ShortSeq;" },
	{ "computeTriangles", "([F)Larc/struct/ShortSeq;" },
	{ "computeTriangles", "([FII)Larc/struct/ShortSeq;" },
	{ "triangulate", "()V" },
	{ "classifyVertex", "(I)I" },
	{ "findEarTip", "()I" },
	{ "isEarTip", "(I)Z" },
	{ "cutEarTip", "(I)V" },
	{ "previousIndex", "(I)I" },
	{ "nextIndex", "(I)I" },
};

static FieldMetadata fields[] {
	{ "CONCAVE", &class_int, (intptr_t) &SF_arc_math_EarClippingTriangulator_CONCAVE, "I", 26 },
	{ "CONVEX", &class_int, (intptr_t) &SF_arc_math_EarClippingTriangulator_CONVEX, "I", 26 },
	{ "indicesArray", &class_arc_struct_ShortSeq, offsetof(arc_math_EarClippingTriangulator, F_indicesArray), "Larc/struct/ShortSeq;", 18 },
	{ "vertexTypes", &class_arc_struct_IntSeq, offsetof(arc_math_EarClippingTriangulator, F_vertexTypes), "Larc/struct/IntSeq;", 18 },
	{ "triangles", &class_arc_struct_ShortSeq, offsetof(arc_math_EarClippingTriangulator, F_triangles), "Larc/struct/ShortSeq;", 18 },
	{ "indices", getArrayClass(&class_short, 1), offsetof(arc_math_EarClippingTriangulator, F_indices), "[S", 2 },
	{ "vertices", getArrayClass(&class_float, 1), offsetof(arc_math_EarClippingTriangulator, F_vertices), "[F", 2 },
	{ "vertexCount", &class_int, offsetof(arc_math_EarClippingTriangulator, F_vertexCount), "I", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_math_EarClippingTriangulator, 0, "()V", 1 },
	{ "areVerticesClockwise", (intptr_t) SM_arc_math_EarClippingTriangulator_areVerticesClockwise_Array1_float_int_int_R_boolean, 0, "([FII)Z", 10 },
	{ "computeSpannedAreaSign", (intptr_t) SM_arc_math_EarClippingTriangulator_computeSpannedAreaSign_float_float_float_float_float_float_R_int, 0, "(FFFFFF)I", 10 },
	{ "computeTriangles", (intptr_t) M_arc_math_EarClippingTriangulator_computeTriangles_arc_struct_FloatSeq_R_arc_struct_ShortSeq, VTABLE_arc_math_EarClippingTriangulator_computeTriangles_arc_struct_FloatSeq_R_arc_struct_ShortSeq, "(Larc/struct/FloatSeq;)Larc/struct/ShortSeq;", 1 },
	{ "computeTriangles", (intptr_t) M_arc_math_EarClippingTriangulator_computeTriangles_Array1_float_R_arc_struct_ShortSeq, VTABLE_arc_math_EarClippingTriangulator_computeTriangles_Array1_float_R_arc_struct_ShortSeq, "([F)Larc/struct/ShortSeq;", 1 },
	{ "computeTriangles", (intptr_t) M_arc_math_EarClippingTriangulator_computeTriangles_Array1_float_int_int_R_arc_struct_ShortSeq, VTABLE_arc_math_EarClippingTriangulator_computeTriangles_Array1_float_int_int_R_arc_struct_ShortSeq, "([FII)Larc/struct/ShortSeq;", 1 },
	{ "triangulate", (intptr_t) M_arc_math_EarClippingTriangulator_triangulate, VTABLE_arc_math_EarClippingTriangulator_triangulate, "()V", 2 },
	{ "classifyVertex", (intptr_t) M_arc_math_EarClippingTriangulator_classifyVertex_int_R_int, VTABLE_arc_math_EarClippingTriangulator_classifyVertex_int_R_int, "(I)I", 2 },
	{ "findEarTip", (intptr_t) M_arc_math_EarClippingTriangulator_findEarTip_R_int, VTABLE_arc_math_EarClippingTriangulator_findEarTip_R_int, "()I", 2 },
	{ "isEarTip", (intptr_t) M_arc_math_EarClippingTriangulator_isEarTip_int_R_boolean, VTABLE_arc_math_EarClippingTriangulator_isEarTip_int_R_boolean, "(I)Z", 2 },
	{ "cutEarTip", (intptr_t) M_arc_math_EarClippingTriangulator_cutEarTip_int, VTABLE_arc_math_EarClippingTriangulator_cutEarTip_int, "(I)V", 2 },
	{ "previousIndex", (intptr_t) M_arc_math_EarClippingTriangulator_previousIndex_int_R_int, VTABLE_arc_math_EarClippingTriangulator_previousIndex_int_R_int, "(I)I", 2 },
	{ "nextIndex", (intptr_t) M_arc_math_EarClippingTriangulator_nextIndex_int_R_int, VTABLE_arc_math_EarClippingTriangulator_nextIndex_int_R_int, "(I)I", 2 },
};

Class class_arc_math_EarClippingTriangulator{
		.nativeName = (intptr_t) "arc/math/EarClippingTriangulator",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_math_EarClippingTriangulator),
		.classVtable = (intptr_t) vtable_arc_math_EarClippingTriangulator,
		.staticInitializer = (intptr_t) clinit_arc_math_EarClippingTriangulator,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_math_EarClippingTriangulator,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 8,
		.nativeFields = (intptr_t) fields,
		.methodCount = 13,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 21,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_math_EarClippingTriangulator = registerClass(&class_arc_math_EarClippingTriangulator);

}
