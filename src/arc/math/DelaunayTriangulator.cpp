#include "arc/math/DelaunayTriangulator.h"
#include "arc/struct/ShortSeq.h"
#include "java/lang/Math.h"
#include "arc/math/geom/Vec2.h"
#include "arc/math/geom/Intersector.h"
#include "java/lang/Object.h"
#include "arc/math/DelaunayTriangulator.h"
#include "arc/struct/BoolSeq.h"
#include "arc/struct/FloatSeq.h"
#include "arc/struct/IntSeq.h"
#include "java/lang/System.h"
#include "arc/math/geom/Geometry.h"

extern "C" {

jfloat SF_arc_math_DelaunayTriangulator_EPSILON;
jint SF_arc_math_DelaunayTriangulator_INSIDE;
jint SF_arc_math_DelaunayTriangulator_COMPLETE;
jint SF_arc_math_DelaunayTriangulator_INCOMPLETE;

void mark_arc_math_DelaunayTriangulator(jobject object, jint mark, jint depth) {
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
	auto self = (arc_math_DelaunayTriangulator *) object;
	if (self->F_quicksortStack)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_quicksortStack)->clazz)->markFunction)((jobject) self->F_quicksortStack, mark, depth + 1);
	if (self->F_triangles)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_triangles)->clazz)->markFunction)((jobject) self->F_triangles, mark, depth + 1);
	if (self->F_originalIndices)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_originalIndices)->clazz)->markFunction)((jobject) self->F_originalIndices, mark, depth + 1);
	if (self->F_edges)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_edges)->clazz)->markFunction)((jobject) self->F_edges, mark, depth + 1);
	if (self->F_complete)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_complete)->clazz)->markFunction)((jobject) self->F_complete, mark, depth + 1);
	if (self->F_superTriangle)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_superTriangle)->clazz)->markFunction)((jobject) self->F_superTriangle, mark, depth + 1);
	if (self->F_centroid)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_centroid)->clazz)->markFunction)((jobject) self->F_centroid, mark, depth + 1);
	if (self->F_sortedPoints)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_sortedPoints)->clazz)->markFunction)((jobject) self->F_sortedPoints, mark, depth + 1);
}

void clinit_arc_math_DelaunayTriangulator(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_arc_math_DelaunayTriangulator_EPSILON = jfloat(1,000000e-06f);
	SF_arc_math_DelaunayTriangulator_INSIDE = jint(0);
	SF_arc_math_DelaunayTriangulator_COMPLETE = jint(1);
	SF_arc_math_DelaunayTriangulator_INCOMPLETE = jint(2);
}

void init_arc_math_DelaunayTriangulator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/DelaunayTriangulator:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_DelaunayTriangulator(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(15);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(21);
	sp[0].o = frame[0].o;
	clinit_arc_struct_IntSeq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_IntSeq);
	init_arc_struct_IntSeq(ctx, sp[1].o);
	((arc_math_DelaunayTriangulator *) NULL_CHECK(sp[0].o))->F_quicksortStack = (jref) sp[1].o;
	LINE_NUMBER(22);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ShortSeq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ShortSeq);
	init_arc_struct_ShortSeq_boolean_int(ctx, sp[1].o, (jint(0)), (16));
	((arc_math_DelaunayTriangulator *) NULL_CHECK(sp[0].o))->F_triangles = (jref) sp[1].o;
	LINE_NUMBER(23);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ShortSeq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ShortSeq);
	init_arc_struct_ShortSeq_boolean_int(ctx, sp[1].o, (jint(0)), (jint(0)));
	((arc_math_DelaunayTriangulator *) NULL_CHECK(sp[0].o))->F_originalIndices = (jref) sp[1].o;
	LINE_NUMBER(24);
	sp[0].o = frame[0].o;
	clinit_arc_struct_IntSeq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_IntSeq);
	init_arc_struct_IntSeq(ctx, sp[1].o);
	((arc_math_DelaunayTriangulator *) NULL_CHECK(sp[0].o))->F_edges = (jref) sp[1].o;
	LINE_NUMBER(25);
	sp[0].o = frame[0].o;
	clinit_arc_struct_BoolSeq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_BoolSeq);
	init_arc_struct_BoolSeq_boolean_int(ctx, sp[1].o, (jint(0)), (16));
	((arc_math_DelaunayTriangulator *) NULL_CHECK(sp[0].o))->F_complete = (jref) sp[1].o;
	LINE_NUMBER(26);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_float, (6));
	((arc_math_DelaunayTriangulator *) NULL_CHECK(sp[0].o))->F_superTriangle = (jref) sp[1].o;
	LINE_NUMBER(27);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Vec2(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[1].o);
	((arc_math_DelaunayTriangulator *) NULL_CHECK(sp[0].o))->F_centroid = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_DelaunayTriangulator_computeTriangles_arc_struct_FloatSeq_boolean_R_arc_struct_ShortSeq(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/DelaunayTriangulator:computeTriangles", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(32);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_struct_FloatSeq *) NULL_CHECK((frame[1].o)))->F_items;
	sp[0].o = (jobject)((func_arc_math_DelaunayTriangulator_computeTriangles_Array1_float_int_int_boolean_R_arc_struct_ShortSeq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_DelaunayTriangulator_computeTriangles_Array1_float_int_int_boolean_R_arc_struct_ShortSeq])(ctx, sp[0].o, sp[1].o, (jint(0)), ((jint)((arc_struct_FloatSeq *) NULL_CHECK((frame[1].o)))->F_size), (frame[2].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_DelaunayTriangulator_computeTriangles_Array1_float_boolean_R_arc_struct_ShortSeq(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/DelaunayTriangulator:computeTriangles", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(37);
	sp[0].o = (jobject)((func_arc_math_DelaunayTriangulator_computeTriangles_Array1_float_int_int_boolean_R_arc_struct_ShortSeq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_DelaunayTriangulator_computeTriangles_Array1_float_int_int_boolean_R_arc_struct_ShortSeq])(ctx, (frame[0].o), (frame[1].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[1].o)))->length), (frame[2].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_DelaunayTriangulator_computeTriangles_Array1_float_int_int_boolean_R_arc_struct_ShortSeq(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jbool param3) {
	NULL_CHECK(self);
	jtype frame[45];
	auto stack = &frame[36];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/DelaunayTriangulator:computeTriangles", 45 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(50);
	sp[0].o = (jobject)((arc_math_DelaunayTriangulator *) NULL_CHECK((frame[0].o)))->F_triangles;
	frame[5].o = sp[0].o;
	LINE_NUMBER(51);
	((func_arc_struct_ShortSeq_clear) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_struct_ShortSeq_clear])(ctx, (frame[5].o));
	LINE_NUMBER(52);
	if ((frame[3].i) >= (6)) goto label_3;
	}
	INST_ALOAD(5);
	popStackFrame(ctx);
	INST_ARETURN();
label_3:;
	{
	LINE_NUMBER(53);
	sp[0].o = (jobject)((func_arc_struct_ShortSeq_ensureCapacity_int_R_Array1_short) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_struct_ShortSeq_ensureCapacity_int_R_Array1_short])(ctx, (frame[5].o), (frame[3].i));
	LINE_NUMBER(55);
	if ((frame[4].i) != 0) goto label_5;
	}
	{
	LINE_NUMBER(56);
	sp[0].o = (jobject)((arc_math_DelaunayTriangulator *) NULL_CHECK((frame[0].o)))->F_sortedPoints;
	if (sp[0].o == nullptr) goto label_7;
	}
	{
	sp[0].o = (jobject)((arc_math_DelaunayTriangulator *) NULL_CHECK((frame[0].o)))->F_sortedPoints;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) >= (frame[3].i)) goto label_8;
	}
label_7:;
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_float, (frame[3].i));
	((arc_math_DelaunayTriangulator *) NULL_CHECK(sp[0].o))->F_sortedPoints = (jref) sp[1].o;
	}
label_8:;
	{
	LINE_NUMBER(57);
	sp[0].o = frame[1].o;
	jint temp0 = frame[2].i;
	sp[1].o = (jobject)((arc_math_DelaunayTriangulator *) NULL_CHECK((frame[0].o)))->F_sortedPoints;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, (jint(0)), (frame[3].i));
	LINE_NUMBER(58);
	sp[0].o = (jobject)((arc_math_DelaunayTriangulator *) NULL_CHECK((frame[0].o)))->F_sortedPoints;
	frame[1].o = sp[0].o;
	LINE_NUMBER(59);
	frame[2].i = (jint(0));
	LINE_NUMBER(60);
	M_arc_math_DelaunayTriangulator_sort_Array1_float_int(ctx, (frame[0].o), (frame[1].o), (frame[3].i));
	}
label_5:;
	{
	LINE_NUMBER(63);
	frame[6].i = ((frame[2].i) + (frame[3].i));
	LINE_NUMBER(66);
	frame[7].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(0))));
	frame[8].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(1))));
	LINE_NUMBER(67);
	frame[9].f = (frame[7].f);
	frame[10].f = (frame[8].f);
	LINE_NUMBER(68);
	frame[11].i = ((frame[2].i) + (jint(2)));
	}
label_17:;
	{
	if ((frame[11].i) >= (frame[6].i)) goto label_18;
	}
	{
	LINE_NUMBER(69);
	frame[12].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (frame[11].i)));
	LINE_NUMBER(70);
	if ((floatCompare((frame[12].f), (frame[7].f), 1)) >= 0) goto label_21;
	}
	INST_FLOAD(12);
	INST_FSTORE(7);
label_21:;
	{
	LINE_NUMBER(71);
	if ((floatCompare((frame[12].f), (frame[9].f), -1)) <= 0) goto label_22;
	}
	INST_FLOAD(12);
	INST_FSTORE(9);
label_22:;
	{
	LINE_NUMBER(72);
	INST_IINC(11, 1);
	LINE_NUMBER(73);
	frame[12].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (frame[11].i)));
	LINE_NUMBER(74);
	if ((floatCompare((frame[12].f), (frame[8].f), 1)) >= 0) goto label_25;
	}
	INST_FLOAD(12);
	INST_FSTORE(8);
label_25:;
	{
	LINE_NUMBER(75);
	if ((floatCompare((frame[12].f), (frame[10].f), -1)) <= 0) goto label_26;
	}
	INST_FLOAD(12);
	INST_FSTORE(10);
label_26:;
	{
	LINE_NUMBER(68);
	INST_IINC(11, 1);
	goto label_17;
	}
label_18:;
	{
	LINE_NUMBER(77);
	frame[11].f = ((frame[9].f) - (frame[7].f));
	frame[12].f = ((frame[10].f) - (frame[8].f));
	LINE_NUMBER(78);
	if ((floatCompare((frame[11].f), (frame[12].f), -1)) <= 0) goto label_29;
	}
	INST_FLOAD(11);
	goto label_30;
label_29:;
	INST_FLOAD(12);
label_30:;
	{
	sp -= 1;
	frame[13].f = (sp[0].f * (jfloat(20.0f)));
	LINE_NUMBER(79);
	frame[14].f = (((frame[9].f) + (frame[7].f)) / (jfloat(2)));
	frame[15].f = (((frame[10].f) + (frame[8].f)) / (jfloat(2)));
	LINE_NUMBER(82);
	sp[0].o = (jobject)((arc_math_DelaunayTriangulator *) NULL_CHECK((frame[0].o)))->F_superTriangle;
	frame[16].o = sp[0].o;
	LINE_NUMBER(83);
	ARRAY_ACCESS(jfloat, (frame[16].o), (jint(0))) = ((frame[14].f) - (frame[13].f));
	LINE_NUMBER(84);
	ARRAY_ACCESS(jfloat, (frame[16].o), (jint(1))) = ((frame[15].f) - (frame[13].f));
	LINE_NUMBER(85);
	ARRAY_ACCESS(jfloat, (frame[16].o), (jint(2))) = (frame[14].f);
	LINE_NUMBER(86);
	ARRAY_ACCESS(jfloat, (frame[16].o), (jint(3))) = ((frame[15].f) + (frame[13].f));
	LINE_NUMBER(87);
	ARRAY_ACCESS(jfloat, (frame[16].o), (jint(4))) = ((frame[14].f) + (frame[13].f));
	LINE_NUMBER(88);
	ARRAY_ACCESS(jfloat, (frame[16].o), (jint(5))) = ((frame[15].f) - (frame[13].f));
	LINE_NUMBER(90);
	sp[0].o = (jobject)((arc_math_DelaunayTriangulator *) NULL_CHECK((frame[0].o)))->F_edges;
	frame[17].o = sp[0].o;
	LINE_NUMBER(91);
	sp[0].o = (jobject)((func_arc_struct_IntSeq_ensureCapacity_int_R_Array1_int) ((void **) nullCheck(ctx, (frame[17].o))->vtable)[VTABLE_arc_struct_IntSeq_ensureCapacity_int_R_Array1_int])(ctx, (frame[17].o), ((frame[3].i) / (jint(2))));
	LINE_NUMBER(93);
	sp[0].o = (jobject)((arc_math_DelaunayTriangulator *) NULL_CHECK((frame[0].o)))->F_complete;
	frame[18].o = sp[0].o;
	LINE_NUMBER(94);
	((func_arc_struct_BoolSeq_clear) ((void **) nullCheck(ctx, (frame[18].o))->vtable)[VTABLE_arc_struct_BoolSeq_clear])(ctx, (frame[18].o));
	LINE_NUMBER(95);
	sp[0].o = (jobject)((func_arc_struct_BoolSeq_ensureCapacity_int_R_Array1_boolean) ((void **) nullCheck(ctx, (frame[18].o))->vtable)[VTABLE_arc_struct_BoolSeq_ensureCapacity_int_R_Array1_boolean])(ctx, (frame[18].o), (frame[3].i));
	LINE_NUMBER(98);
	((func_arc_struct_ShortSeq_add_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_struct_ShortSeq_add_int])(ctx, (frame[5].o), (frame[6].i));
	LINE_NUMBER(99);
	((func_arc_struct_ShortSeq_add_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_struct_ShortSeq_add_int])(ctx, (frame[5].o), ((frame[6].i) + (jint(2))));
	LINE_NUMBER(100);
	((func_arc_struct_ShortSeq_add_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_struct_ShortSeq_add_int])(ctx, (frame[5].o), ((frame[6].i) + (jint(4))));
	LINE_NUMBER(101);
	((func_arc_struct_BoolSeq_add_boolean) ((void **) nullCheck(ctx, (frame[18].o))->vtable)[VTABLE_arc_struct_BoolSeq_add_boolean])(ctx, (frame[18].o), (jint(0)));
	LINE_NUMBER(104);
	frame[19].i = (frame[2].i);
	}
label_50:;
	{
	if ((frame[19].i) >= (frame[6].i)) goto label_51;
	}
	{
	LINE_NUMBER(105);
	frame[20].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (frame[19].i)));
	frame[21].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), ((frame[19].i) + (jint(1)))));
	LINE_NUMBER(108);
	sp[0].o = (jobject)((arc_struct_ShortSeq *) NULL_CHECK((frame[5].o)))->F_items;
	frame[22].o = sp[0].o;
	LINE_NUMBER(109);
	sp[0].o = (jobject)((arc_struct_BoolSeq *) NULL_CHECK((frame[18].o)))->F_items;
	frame[23].o = sp[0].o;
	LINE_NUMBER(110);
	frame[24].i = (((jint)((arc_struct_ShortSeq *) NULL_CHECK((frame[5].o)))->F_size) - (jint(1)));
	}
label_57:;
	INST_ILOAD(24);
	if ((--sp)->i < 0) goto label_58;
	{
	LINE_NUMBER(111);
	frame[25].i = ((frame[24].i) / (jint(3)));
	LINE_NUMBER(112);
	if (((jint)ARRAY_ACCESS(jbyte, (frame[23].o), (frame[25].i))) == 0) goto label_61;
	}
	goto label_62;
label_61:;
	{
	LINE_NUMBER(113);
	frame[26].i = ((jint)ARRAY_ACCESS(jshort, (frame[22].o), ((frame[24].i) - (jint(2)))));
	LINE_NUMBER(114);
	frame[27].i = ((jint)ARRAY_ACCESS(jshort, (frame[22].o), ((frame[24].i) - (jint(1)))));
	LINE_NUMBER(115);
	frame[28].i = ((jint)ARRAY_ACCESS(jshort, (frame[22].o), (frame[24].i)));
	LINE_NUMBER(117);
	if ((frame[26].i) < (frame[6].i)) goto label_66;
	}
	{
	LINE_NUMBER(118);
	frame[35].i = ((frame[26].i) - (frame[6].i));
	LINE_NUMBER(119);
	frame[29].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[16].o), (frame[35].i)));
	LINE_NUMBER(120);
	frame[30].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[16].o), ((frame[35].i) + (jint(1)))));
	LINE_NUMBER(121);
	goto label_71;
	}
label_66:;
	{
	LINE_NUMBER(122);
	frame[29].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (frame[26].i)));
	LINE_NUMBER(123);
	frame[30].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), ((frame[26].i) + (jint(1)))));
	}
label_71:;
	{
	LINE_NUMBER(125);
	if ((frame[27].i) < (frame[6].i)) goto label_73;
	}
	{
	LINE_NUMBER(126);
	frame[35].i = ((frame[27].i) - (frame[6].i));
	LINE_NUMBER(127);
	frame[31].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[16].o), (frame[35].i)));
	LINE_NUMBER(128);
	frame[32].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[16].o), ((frame[35].i) + (jint(1)))));
	LINE_NUMBER(129);
	goto label_78;
	}
label_73:;
	{
	LINE_NUMBER(130);
	frame[31].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (frame[27].i)));
	LINE_NUMBER(131);
	frame[32].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), ((frame[27].i) + (jint(1)))));
	}
label_78:;
	{
	LINE_NUMBER(133);
	if ((frame[28].i) < (frame[6].i)) goto label_80;
	}
	{
	LINE_NUMBER(134);
	frame[35].i = ((frame[28].i) - (frame[6].i));
	LINE_NUMBER(135);
	frame[33].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[16].o), (frame[35].i)));
	LINE_NUMBER(136);
	frame[34].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[16].o), ((frame[35].i) + (jint(1)))));
	LINE_NUMBER(137);
	goto label_85;
	}
label_80:;
	{
	LINE_NUMBER(138);
	frame[33].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (frame[28].i)));
	LINE_NUMBER(139);
	frame[34].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), ((frame[28].i) + (jint(1)))));
	}
label_85:;
	{
	LINE_NUMBER(141);
	jint temp0 = (jint)M_arc_math_DelaunayTriangulator_circumCircle_float_float_float_float_float_float_float_float_R_int(ctx, (frame[0].o), (frame[20].f), (frame[21].f), (frame[29].f), (frame[30].f), (frame[31].f), (frame[32].f), (frame[33].f), (frame[34].f));
	switch(temp0) {
		case 0: goto label_87;
		case 1: goto label_88;
		default: goto label_62;
	}
	}
label_88:;
	{
	LINE_NUMBER(143);
	ARRAY_ACCESS(jbyte, (frame[23].o), (frame[25].i)) = (jint(1));
	LINE_NUMBER(144);
	goto label_62;
	}
label_87:;
	{
	LINE_NUMBER(146);
	((func_arc_struct_IntSeq_add_int) ((void **) nullCheck(ctx, (frame[17].o))->vtable)[VTABLE_arc_struct_IntSeq_add_int])(ctx, (frame[17].o), (frame[26].i));
	LINE_NUMBER(147);
	((func_arc_struct_IntSeq_add_int) ((void **) nullCheck(ctx, (frame[17].o))->vtable)[VTABLE_arc_struct_IntSeq_add_int])(ctx, (frame[17].o), (frame[27].i));
	LINE_NUMBER(148);
	((func_arc_struct_IntSeq_add_int) ((void **) nullCheck(ctx, (frame[17].o))->vtable)[VTABLE_arc_struct_IntSeq_add_int])(ctx, (frame[17].o), (frame[27].i));
	LINE_NUMBER(149);
	((func_arc_struct_IntSeq_add_int) ((void **) nullCheck(ctx, (frame[17].o))->vtable)[VTABLE_arc_struct_IntSeq_add_int])(ctx, (frame[17].o), (frame[28].i));
	LINE_NUMBER(150);
	((func_arc_struct_IntSeq_add_int) ((void **) nullCheck(ctx, (frame[17].o))->vtable)[VTABLE_arc_struct_IntSeq_add_int])(ctx, (frame[17].o), (frame[28].i));
	LINE_NUMBER(151);
	((func_arc_struct_IntSeq_add_int) ((void **) nullCheck(ctx, (frame[17].o))->vtable)[VTABLE_arc_struct_IntSeq_add_int])(ctx, (frame[17].o), (frame[26].i));
	LINE_NUMBER(153);
	jint temp0 = (jint)((func_arc_struct_ShortSeq_removeIndex_int_R_short) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_struct_ShortSeq_removeIndex_int_R_short])(ctx, (frame[5].o), (frame[24].i));
	LINE_NUMBER(154);
	jint temp1 = (jint)((func_arc_struct_ShortSeq_removeIndex_int_R_short) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_struct_ShortSeq_removeIndex_int_R_short])(ctx, (frame[5].o), ((frame[24].i) - (jint(1))));
	LINE_NUMBER(155);
	jint temp2 = (jint)((func_arc_struct_ShortSeq_removeIndex_int_R_short) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_struct_ShortSeq_removeIndex_int_R_short])(ctx, (frame[5].o), ((frame[24].i) - (jint(2))));
	LINE_NUMBER(156);
	jint temp3 = (jint)((func_arc_struct_BoolSeq_removeIndex_int_R_boolean) ((void **) nullCheck(ctx, (frame[18].o))->vtable)[VTABLE_arc_struct_BoolSeq_removeIndex_int_R_boolean])(ctx, (frame[18].o), (frame[25].i));
	}
label_62:;
	{
	LINE_NUMBER(110);
	INST_IINC(24, -3);
	goto label_57;
	}
label_58:;
	{
	LINE_NUMBER(161);
	sp[0].o = (jobject)((arc_struct_IntSeq *) NULL_CHECK((frame[17].o)))->F_items;
	frame[24].o = sp[0].o;
	LINE_NUMBER(162);
	frame[25].i = (jint(0));
	frame[26].i = ((jint)((arc_struct_IntSeq *) NULL_CHECK((frame[17].o)))->F_size);
	}
label_101:;
	{
	if ((frame[25].i) >= (frame[26].i)) goto label_102;
	}
	{
	LINE_NUMBER(164);
	frame[27].i = ((jint)ARRAY_ACCESS(jint, (frame[24].o), (frame[25].i)));
	LINE_NUMBER(165);
	if ((frame[27].i) != (jint(-1))) goto label_105;
	}
	goto label_106;
label_105:;
	{
	LINE_NUMBER(166);
	frame[28].i = ((jint)ARRAY_ACCESS(jint, (frame[24].o), ((frame[25].i) + (jint(1)))));
	LINE_NUMBER(167);
	frame[29].i = (jint(0));
	LINE_NUMBER(168);
	frame[30].i = ((frame[25].i) + (jint(2)));
	}
label_109:;
	{
	if ((frame[30].i) >= (frame[26].i)) goto label_110;
	}
	{
	LINE_NUMBER(169);
	if ((frame[27].i) != ((jint)ARRAY_ACCESS(jint, (frame[24].o), ((frame[30].i) + (jint(1)))))) goto label_112;
	}
	{
	if ((frame[28].i) != ((jint)ARRAY_ACCESS(jint, (frame[24].o), (frame[30].i)))) goto label_112;
	}
	{
	LINE_NUMBER(170);
	frame[29].i = (jint(1));
	LINE_NUMBER(171);
	ARRAY_ACCESS(jint, (frame[24].o), (frame[30].i)) = (jint(-1));
	}
label_112:;
	{
	LINE_NUMBER(168);
	INST_IINC(30, 2);
	goto label_109;
	}
label_110:;
	{
	LINE_NUMBER(174);
	if ((frame[29].i) == 0) goto label_115;
	}
	goto label_106;
label_115:;
	{
	LINE_NUMBER(177);
	((func_arc_struct_ShortSeq_add_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_struct_ShortSeq_add_int])(ctx, (frame[5].o), (frame[27].i));
	LINE_NUMBER(178);
	((func_arc_struct_ShortSeq_add_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_struct_ShortSeq_add_int])(ctx, (frame[5].o), ((jint)ARRAY_ACCESS(jint, (frame[24].o), ((frame[25].i) + (jint(1))))));
	LINE_NUMBER(179);
	((func_arc_struct_ShortSeq_add_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_struct_ShortSeq_add_int])(ctx, (frame[5].o), (frame[19].i));
	LINE_NUMBER(180);
	((func_arc_struct_BoolSeq_add_boolean) ((void **) nullCheck(ctx, (frame[18].o))->vtable)[VTABLE_arc_struct_BoolSeq_add_boolean])(ctx, (frame[18].o), (jint(0)));
	}
label_106:;
	{
	LINE_NUMBER(162);
	INST_IINC(25, 2);
	goto label_101;
	}
label_102:;
	{
	LINE_NUMBER(182);
	((func_arc_struct_IntSeq_clear) ((void **) nullCheck(ctx, (frame[17].o))->vtable)[VTABLE_arc_struct_IntSeq_clear])(ctx, (frame[17].o));
	LINE_NUMBER(104);
	INST_IINC(19, 2);
	goto label_50;
	}
label_51:;
	{
	LINE_NUMBER(186);
	sp[0].o = (jobject)((arc_struct_ShortSeq *) NULL_CHECK((frame[5].o)))->F_items;
	frame[19].o = sp[0].o;
	LINE_NUMBER(187);
	frame[20].i = (((jint)((arc_struct_ShortSeq *) NULL_CHECK((frame[5].o)))->F_size) - (jint(1)));
	}
label_121:;
	INST_ILOAD(20);
	if ((--sp)->i < 0) goto label_122;
	{
	LINE_NUMBER(188);
	if (((jint)ARRAY_ACCESS(jshort, (frame[19].o), (frame[20].i))) >= (frame[6].i)) goto label_124;
	}
	{
	if (((jint)ARRAY_ACCESS(jshort, (frame[19].o), ((frame[20].i) - (jint(1))))) >= (frame[6].i)) goto label_124;
	}
	{
	if (((jint)ARRAY_ACCESS(jshort, (frame[19].o), ((frame[20].i) - (jint(2))))) < (frame[6].i)) goto label_125;
	}
label_124:;
	{
	LINE_NUMBER(189);
	jint temp0 = (jint)((func_arc_struct_ShortSeq_removeIndex_int_R_short) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_struct_ShortSeq_removeIndex_int_R_short])(ctx, (frame[5].o), (frame[20].i));
	LINE_NUMBER(190);
	jint temp1 = (jint)((func_arc_struct_ShortSeq_removeIndex_int_R_short) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_struct_ShortSeq_removeIndex_int_R_short])(ctx, (frame[5].o), ((frame[20].i) - (jint(1))));
	LINE_NUMBER(191);
	jint temp2 = (jint)((func_arc_struct_ShortSeq_removeIndex_int_R_short) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_struct_ShortSeq_removeIndex_int_R_short])(ctx, (frame[5].o), ((frame[20].i) - (jint(2))));
	}
label_125:;
	{
	LINE_NUMBER(187);
	INST_IINC(20, -3);
	goto label_121;
	}
label_122:;
	{
	LINE_NUMBER(196);
	if ((frame[4].i) != 0) goto label_128;
	}
	{
	LINE_NUMBER(197);
	sp[0].o = (jobject)((arc_math_DelaunayTriangulator *) NULL_CHECK((frame[0].o)))->F_originalIndices;
	sp[0].o = (jobject)((arc_struct_ShortSeq *) NULL_CHECK(sp[0].o))->F_items;
	frame[20].o = sp[0].o;
	LINE_NUMBER(198);
	frame[21].i = (jint(0));
	frame[22].i = ((jint)((arc_struct_ShortSeq *) NULL_CHECK((frame[5].o)))->F_size);
	}
label_132:;
	{
	if ((frame[21].i) >= (frame[22].i)) goto label_128;
	}
	{
	LINE_NUMBER(199);
	ARRAY_ACCESS(jshort, (frame[19].o), (frame[21].i)) = (jshort((((jint)ARRAY_ACCESS(jshort, (frame[20].o), (((jint)ARRAY_ACCESS(jshort, (frame[19].o), (frame[21].i))) / (jint(2))))) * (jint(2)))));
	LINE_NUMBER(198);
	INST_IINC(21, 1);
	goto label_132;
	}
label_128:;
	{
	LINE_NUMBER(203);
	if ((frame[2].i) != 0) goto label_135;
	}
	{
	LINE_NUMBER(204);
	frame[20].i = (jint(0));
	frame[21].i = ((jint)((arc_struct_ShortSeq *) NULL_CHECK((frame[5].o)))->F_size);
	}
label_138:;
	{
	if ((frame[20].i) >= (frame[21].i)) goto label_139;
	}
	{
	LINE_NUMBER(205);
	ARRAY_ACCESS(jshort, (frame[19].o), (frame[20].i)) = (jshort((((jint)ARRAY_ACCESS(jshort, (frame[19].o), (frame[20].i))) / (jint(2)))));
	LINE_NUMBER(204);
	INST_IINC(20, 1);
	goto label_138;
	}
label_139:;
	goto label_142;
label_135:;
	{
	LINE_NUMBER(207);
	frame[20].i = (jint(0));
	frame[21].i = ((jint)((arc_struct_ShortSeq *) NULL_CHECK((frame[5].o)))->F_size);
	}
label_144:;
	{
	if ((frame[20].i) >= (frame[21].i)) goto label_142;
	}
	{
	LINE_NUMBER(208);
	ARRAY_ACCESS(jshort, (frame[19].o), (frame[20].i)) = (jshort(((((jint)ARRAY_ACCESS(jshort, (frame[19].o), (frame[20].i))) - (frame[2].i)) / (jint(2)))));
	LINE_NUMBER(207);
	INST_IINC(20, 1);
	goto label_144;
	}
label_142:;
	{
	LINE_NUMBER(211);
	popStackFrame(ctx);
	return (frame[5].o);
	}

	popStackFrame(ctx);
}

jint M_arc_math_DelaunayTriangulator_circumCircle_float_float_float_float_float_float_float_float_R_int(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7) {
	NULL_CHECK(self);
	jtype frame[22];
	auto stack = &frame[19];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/DelaunayTriangulator:circumCircle", 22 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	frame[6].f = param5;
	frame[7].f = param6;
	frame[8].f = param7;
	{
	LINE_NUMBER(221);
	jfloat temp0 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, ((frame[4].f) - (frame[6].f)));
	frame[11].f = temp0;
	LINE_NUMBER(222);
	jfloat temp1 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, ((frame[6].f) - (frame[8].f)));
	frame[12].f = temp1;
	LINE_NUMBER(223);
	if ((floatCompare((frame[11].f), (jfloat(1,000000e-06f)), 1)) >= 0) goto label_3;
	}
	{
	LINE_NUMBER(224);
	if ((floatCompare((frame[12].f), (jfloat(1,000000e-06f)), 1)) >= 0) goto label_5;
	}
	INST_ICONST(2);
	popStackFrame(ctx);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(225);
	frame[13].f = ((-((frame[7].f) - (frame[5].f))) / ((frame[8].f) - (frame[6].f)));
	LINE_NUMBER(226);
	frame[14].f = (((frame[5].f) + (frame[7].f)) / (jfloat(2)));
	LINE_NUMBER(227);
	frame[15].f = (((frame[6].f) + (frame[8].f)) / (jfloat(2)));
	LINE_NUMBER(228);
	frame[9].f = (((frame[5].f) + (frame[3].f)) / (jfloat(2)));
	LINE_NUMBER(229);
	frame[10].f = (((frame[13].f) * ((frame[9].f) - (frame[14].f))) + (frame[15].f));
	LINE_NUMBER(230);
	goto label_11;
	}
label_3:;
	{
	LINE_NUMBER(231);
	frame[13].f = ((-((frame[5].f) - (frame[3].f))) / ((frame[6].f) - (frame[4].f)));
	LINE_NUMBER(232);
	frame[14].f = (((frame[3].f) + (frame[5].f)) / (jfloat(2)));
	LINE_NUMBER(233);
	frame[15].f = (((frame[4].f) + (frame[6].f)) / (jfloat(2)));
	LINE_NUMBER(234);
	if ((floatCompare((frame[12].f), (jfloat(1,000000e-06f)), 1)) >= 0) goto label_15;
	}
	{
	LINE_NUMBER(235);
	frame[9].f = (((frame[7].f) + (frame[5].f)) / (jfloat(2)));
	LINE_NUMBER(236);
	frame[10].f = (((frame[13].f) * ((frame[9].f) - (frame[14].f))) + (frame[15].f));
	goto label_11;
	}
label_15:;
	{
	LINE_NUMBER(238);
	frame[16].f = ((-((frame[7].f) - (frame[5].f))) / ((frame[8].f) - (frame[6].f)));
	LINE_NUMBER(239);
	frame[17].f = (((frame[5].f) + (frame[7].f)) / (jfloat(2)));
	LINE_NUMBER(240);
	frame[18].f = (((frame[6].f) + (frame[8].f)) / (jfloat(2)));
	LINE_NUMBER(241);
	frame[9].f = ((((((frame[13].f) * (frame[14].f)) - ((frame[16].f) * (frame[17].f))) + (frame[18].f)) - (frame[15].f)) / ((frame[13].f) - (frame[16].f)));
	LINE_NUMBER(242);
	frame[10].f = (((frame[13].f) * ((frame[9].f) - (frame[14].f))) + (frame[15].f));
	}
label_11:;
	{
	LINE_NUMBER(246);
	frame[13].f = ((frame[5].f) - (frame[9].f));
	LINE_NUMBER(247);
	frame[14].f = ((frame[6].f) - (frame[10].f));
	LINE_NUMBER(248);
	frame[15].f = (((frame[13].f) * (frame[13].f)) + ((frame[14].f) * (frame[14].f)));
	LINE_NUMBER(250);
	frame[13].f = ((frame[1].f) - (frame[9].f));
	LINE_NUMBER(251);
	frame[13].f = ((frame[13].f) * (frame[13].f));
	LINE_NUMBER(252);
	frame[14].f = ((frame[2].f) - (frame[10].f));
	LINE_NUMBER(253);
	if ((floatCompare((((frame[13].f) + ((frame[14].f) * (frame[14].f))) - (frame[15].f)), (jfloat(1,000000e-06f)), 1)) > 0) goto label_29;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_29:;
	{
	LINE_NUMBER(254);
	if ((floatCompare((frame[1].f), (frame[9].f), -1)) <= 0) goto label_30;
	}
	{
	if ((floatCompare((frame[13].f), (frame[15].f), -1)) <= 0) goto label_30;
	}
	INST_ICONST(1);
	goto label_31;
label_30:;
	INST_ICONST(2);
label_31:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_arc_math_DelaunayTriangulator_sort_Array1_float_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/DelaunayTriangulator:sort", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(262);
	frame[3].i = ((frame[2].i) / (jint(2)));
	LINE_NUMBER(263);
	sp[0].o = (jobject)((arc_math_DelaunayTriangulator *) NULL_CHECK((frame[0].o)))->F_originalIndices;
	((func_arc_struct_ShortSeq_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ShortSeq_clear])(ctx, sp[0].o);
	LINE_NUMBER(264);
	sp[0].o = (jobject)((arc_math_DelaunayTriangulator *) NULL_CHECK((frame[0].o)))->F_originalIndices;
	sp[0].o = (jobject)((func_arc_struct_ShortSeq_ensureCapacity_int_R_Array1_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ShortSeq_ensureCapacity_int_R_Array1_short])(ctx, sp[0].o, (frame[3].i));
	LINE_NUMBER(265);
	sp[0].o = (jobject)((arc_math_DelaunayTriangulator *) NULL_CHECK((frame[0].o)))->F_originalIndices;
	sp[0].o = (jobject)((arc_struct_ShortSeq *) NULL_CHECK(sp[0].o))->F_items;
	frame[4].o = sp[0].o;
	LINE_NUMBER(266);
	frame[5].i = (jint(0));
	}
label_5:;
	{
	if ((frame[5].i) >= (frame[3].i)) goto label_6;
	}
	{
	LINE_NUMBER(267);
	ARRAY_ACCESS(jshort, (frame[4].o), (frame[5].i)) = (frame[5].i);
	LINE_NUMBER(266);
	frame[5].i = (jshort(((frame[5].i) + (jint(1)))));
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(269);
	frame[5].i = (jint(0));
	LINE_NUMBER(270);
	frame[6].i = ((frame[2].i) - (jint(1)));
	LINE_NUMBER(271);
	sp[0].o = (jobject)((arc_math_DelaunayTriangulator *) NULL_CHECK((frame[0].o)))->F_quicksortStack;
	frame[7].o = sp[0].o;
	LINE_NUMBER(272);
	((func_arc_struct_IntSeq_add_int) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_struct_IntSeq_add_int])(ctx, (frame[7].o), (frame[5].i));
	LINE_NUMBER(273);
	((func_arc_struct_IntSeq_add_int) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_struct_IntSeq_add_int])(ctx, (frame[7].o), ((frame[6].i) - (jint(1))));
	}
label_13:;
	{
	LINE_NUMBER(274);
	if (((jint)((arc_struct_IntSeq *) NULL_CHECK((frame[7].o)))->F_size) <= 0) goto label_14;
	}
	{
	LINE_NUMBER(275);
	jint temp0 = (jint)((func_arc_struct_IntSeq_pop_R_int) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_struct_IntSeq_pop_R_int])(ctx, (frame[7].o));
	frame[6].i = temp0;
	LINE_NUMBER(276);
	jint temp1 = (jint)((func_arc_struct_IntSeq_pop_R_int) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_struct_IntSeq_pop_R_int])(ctx, (frame[7].o));
	frame[5].i = temp1;
	LINE_NUMBER(277);
	if ((frame[6].i) > (frame[5].i)) goto label_18;
	}
	goto label_13;
label_18:;
	{
	LINE_NUMBER(278);
	jint temp0 = (jint)M_arc_math_DelaunayTriangulator_quicksortPartition_Array1_float_int_int_Array1_short_R_int(ctx, (frame[0].o), (frame[1].o), (frame[5].i), (frame[6].i), (frame[4].o));
	frame[8].i = temp0;
	LINE_NUMBER(279);
	if (((frame[8].i) - (frame[5].i)) <= ((frame[6].i) - (frame[8].i))) goto label_20;
	}
	{
	LINE_NUMBER(280);
	((func_arc_struct_IntSeq_add_int) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_struct_IntSeq_add_int])(ctx, (frame[7].o), (frame[5].i));
	LINE_NUMBER(281);
	((func_arc_struct_IntSeq_add_int) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_struct_IntSeq_add_int])(ctx, (frame[7].o), ((frame[8].i) - (jint(2))));
	}
label_20:;
	{
	LINE_NUMBER(283);
	((func_arc_struct_IntSeq_add_int) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_struct_IntSeq_add_int])(ctx, (frame[7].o), ((frame[8].i) + (jint(2))));
	LINE_NUMBER(284);
	((func_arc_struct_IntSeq_add_int) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_struct_IntSeq_add_int])(ctx, (frame[7].o), (frame[6].i));
	LINE_NUMBER(285);
	if (((frame[6].i) - (frame[8].i)) < ((frame[8].i) - (frame[5].i))) goto label_25;
	}
	{
	LINE_NUMBER(286);
	((func_arc_struct_IntSeq_add_int) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_struct_IntSeq_add_int])(ctx, (frame[7].o), (frame[5].i));
	LINE_NUMBER(287);
	((func_arc_struct_IntSeq_add_int) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_struct_IntSeq_add_int])(ctx, (frame[7].o), ((frame[8].i) - (jint(2))));
	}
label_25:;
	LINE_NUMBER(289);
	goto label_13;
label_14:;
	LINE_NUMBER(290);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_arc_math_DelaunayTriangulator_quicksortPartition_Array1_float_int_int_Array1_short_R_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/DelaunayTriangulator:quicksortPartition", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(293);
	frame[5].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (frame[2].i)));
	LINE_NUMBER(294);
	frame[6].i = (frame[3].i);
	LINE_NUMBER(295);
	frame[7].i = ((frame[2].i) + (jint(2)));
	}
label_3:;
	{
	LINE_NUMBER(298);
	if ((frame[7].i) >= (frame[6].i)) goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(299);
	if ((frame[7].i) >= (frame[6].i)) goto label_6;
	}
	{
	if ((floatCompare(((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (frame[7].i))), (frame[5].f), 1)) > 0) goto label_6;
	}
	{
	LINE_NUMBER(300);
	frame[7].i = ((frame[7].i) + (jint(2)));
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(301);
	if ((floatCompare(((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (frame[6].i))), (frame[5].f), -1)) <= 0) goto label_8;
	}
	{
	LINE_NUMBER(302);
	frame[6].i = ((frame[6].i) - (jint(2)));
	goto label_6;
	}
label_8:;
	{
	LINE_NUMBER(303);
	if ((frame[7].i) >= (frame[6].i)) goto label_3;
	}
	{
	LINE_NUMBER(304);
	frame[8].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (frame[7].i)));
	LINE_NUMBER(305);
	ARRAY_ACCESS(jfloat, (frame[1].o), (frame[7].i)) = ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (frame[6].i)));
	LINE_NUMBER(306);
	ARRAY_ACCESS(jfloat, (frame[1].o), (frame[6].i)) = (frame[8].f);
	LINE_NUMBER(308);
	frame[8].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), ((frame[7].i) + (jint(1)))));
	LINE_NUMBER(309);
	ARRAY_ACCESS(jfloat, (frame[1].o), ((frame[7].i) + (jint(1)))) = ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), ((frame[6].i) + (jint(1)))));
	LINE_NUMBER(310);
	ARRAY_ACCESS(jfloat, (frame[1].o), ((frame[6].i) + (jint(1)))) = (frame[8].f);
	LINE_NUMBER(312);
	frame[9].i = ((jint)ARRAY_ACCESS(jshort, (frame[4].o), ((frame[7].i) / (jint(2)))));
	LINE_NUMBER(313);
	ARRAY_ACCESS(jshort, (frame[4].o), ((frame[7].i) / (jint(2)))) = ((jint)ARRAY_ACCESS(jshort, (frame[4].o), ((frame[6].i) / (jint(2)))));
	LINE_NUMBER(314);
	ARRAY_ACCESS(jshort, (frame[4].o), ((frame[6].i) / (jint(2)))) = (frame[9].i);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(317);
	ARRAY_ACCESS(jfloat, (frame[1].o), (frame[2].i)) = ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (frame[6].i)));
	LINE_NUMBER(318);
	ARRAY_ACCESS(jfloat, (frame[1].o), (frame[6].i)) = (frame[5].f);
	LINE_NUMBER(320);
	frame[8].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), ((frame[2].i) + (jint(1)))));
	LINE_NUMBER(321);
	ARRAY_ACCESS(jfloat, (frame[1].o), ((frame[2].i) + (jint(1)))) = ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), ((frame[6].i) + (jint(1)))));
	LINE_NUMBER(322);
	ARRAY_ACCESS(jfloat, (frame[1].o), ((frame[6].i) + (jint(1)))) = (frame[8].f);
	LINE_NUMBER(324);
	frame[9].i = ((jint)ARRAY_ACCESS(jshort, (frame[4].o), ((frame[2].i) / (jint(2)))));
	LINE_NUMBER(325);
	ARRAY_ACCESS(jshort, (frame[4].o), ((frame[2].i) / (jint(2)))) = ((jint)ARRAY_ACCESS(jshort, (frame[4].o), ((frame[6].i) / (jint(2)))));
	LINE_NUMBER(326);
	ARRAY_ACCESS(jshort, (frame[4].o), ((frame[6].i) / (jint(2)))) = (frame[9].i);
	LINE_NUMBER(327);
	popStackFrame(ctx);
	return (frame[6].i);
	}

	popStackFrame(ctx);
}

void M_arc_math_DelaunayTriangulator_trim_arc_struct_ShortSeq_Array1_float_Array1_float_int_int(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jint param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[19];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/DelaunayTriangulator:trim", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(335);
	sp[0].o = (jobject)((arc_struct_ShortSeq *) NULL_CHECK((frame[1].o)))->F_items;
	frame[6].o = sp[0].o;
	LINE_NUMBER(336);
	frame[7].i = (((jint)((arc_struct_ShortSeq *) NULL_CHECK((frame[1].o)))->F_size) - (jint(1)));
	}
label_2:;
	INST_ILOAD(7);
	if ((--sp)->i < 0) goto label_3;
	{
	LINE_NUMBER(337);
	frame[8].i = (((jint)ARRAY_ACCESS(jshort, (frame[6].o), ((frame[7].i) - (jint(2))))) * (jint(2)));
	LINE_NUMBER(338);
	frame[9].i = (((jint)ARRAY_ACCESS(jshort, (frame[6].o), ((frame[7].i) - (jint(1))))) * (jint(2)));
	LINE_NUMBER(339);
	frame[10].i = (((jint)ARRAY_ACCESS(jshort, (frame[6].o), (frame[7].i))) * (jint(2)));
	LINE_NUMBER(340);
	jfloat temp0 = (jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (frame[8].i));
	jfloat temp1 = (jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), ((frame[8].i) + (jint(1))));
	jfloat temp2 = (jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (frame[9].i));
	jfloat temp3 = (jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), ((frame[9].i) + (jint(1))));
	jfloat temp4 = (jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (frame[10].i));
	jfloat temp5 = (jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), ((frame[10].i) + (jint(1))));
	sp[0].o = (jobject)((arc_math_DelaunayTriangulator *) NULL_CHECK((frame[0].o)))->F_centroid;
	sp[0].o = (jobject)SM_arc_math_geom_Geometry_triangleCentroid_float_float_float_float_float_float_arc_math_geom_Vec2_R_arc_math_geom_Vec2(ctx, temp0, temp1, temp2, temp3, temp4, temp5, sp[0].o);
	LINE_NUMBER(342);
	sp[0].o = frame[3].o;
	jint temp6 = frame[4].i;
	jint temp7 = frame[5].i;
	sp[1].o = (jobject)((arc_math_DelaunayTriangulator *) NULL_CHECK((frame[0].o)))->F_centroid;
	jfloat temp8 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x;
	sp[1].o = (jobject)((arc_math_DelaunayTriangulator *) NULL_CHECK((frame[0].o)))->F_centroid;
	jint temp9 = (jint)SM_arc_math_geom_Intersector_isInPolygon_Array1_float_int_int_float_float_R_boolean(ctx, sp[0].o, temp6, temp7, temp8, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y));
	if (temp9 != 0) goto label_9;
	}
	{
	LINE_NUMBER(343);
	jint temp0 = (jint)((func_arc_struct_ShortSeq_removeIndex_int_R_short) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_ShortSeq_removeIndex_int_R_short])(ctx, (frame[1].o), (frame[7].i));
	LINE_NUMBER(344);
	jint temp1 = (jint)((func_arc_struct_ShortSeq_removeIndex_int_R_short) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_ShortSeq_removeIndex_int_R_short])(ctx, (frame[1].o), ((frame[7].i) - (jint(1))));
	LINE_NUMBER(345);
	jint temp2 = (jint)((func_arc_struct_ShortSeq_removeIndex_int_R_short) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_ShortSeq_removeIndex_int_R_short])(ctx, (frame[1].o), ((frame[7].i) - (jint(2))));
	}
label_9:;
	{
	LINE_NUMBER(336);
	INST_IINC(7, -3);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(348);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_arc_math_DelaunayTriangulator[] {
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
	(void *) M_arc_math_DelaunayTriangulator_computeTriangles_arc_struct_FloatSeq_boolean_R_arc_struct_ShortSeq,
	(void *) M_arc_math_DelaunayTriangulator_computeTriangles_Array1_float_boolean_R_arc_struct_ShortSeq,
	(void *) M_arc_math_DelaunayTriangulator_computeTriangles_Array1_float_int_int_boolean_R_arc_struct_ShortSeq,
	(void *) M_arc_math_DelaunayTriangulator_circumCircle_float_float_float_float_float_float_float_float_R_int,
	(void *) M_arc_math_DelaunayTriangulator_sort_Array1_float_int,
	(void *) M_arc_math_DelaunayTriangulator_quicksortPartition_Array1_float_int_int_Array1_short_R_int,
	(void *) M_arc_math_DelaunayTriangulator_trim_arc_struct_ShortSeq_Array1_float_Array1_float_int_int,
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
	{ "computeTriangles", "(Larc/struct/FloatSeq;Z)Larc/struct/ShortSeq;" },
	{ "computeTriangles", "([FZ)Larc/struct/ShortSeq;" },
	{ "computeTriangles", "([FIIZ)Larc/struct/ShortSeq;" },
	{ "circumCircle", "(FFFFFFFF)I" },
	{ "sort", "([FI)V" },
	{ "quicksortPartition", "([FII[S)I" },
	{ "trim", "(Larc/struct/ShortSeq;[F[FII)V" },
};

static FieldMetadata fields[] {
	{ "EPSILON", &class_float, (intptr_t) &SF_arc_math_DelaunayTriangulator_EPSILON, "F", 26 },
	{ "INSIDE", &class_int, (intptr_t) &SF_arc_math_DelaunayTriangulator_INSIDE, "I", 26 },
	{ "COMPLETE", &class_int, (intptr_t) &SF_arc_math_DelaunayTriangulator_COMPLETE, "I", 26 },
	{ "INCOMPLETE", &class_int, (intptr_t) &SF_arc_math_DelaunayTriangulator_INCOMPLETE, "I", 26 },
	{ "quicksortStack", &class_arc_struct_IntSeq, offsetof(arc_math_DelaunayTriangulator, F_quicksortStack), "Larc/struct/IntSeq;", 18 },
	{ "triangles", &class_arc_struct_ShortSeq, offsetof(arc_math_DelaunayTriangulator, F_triangles), "Larc/struct/ShortSeq;", 18 },
	{ "originalIndices", &class_arc_struct_ShortSeq, offsetof(arc_math_DelaunayTriangulator, F_originalIndices), "Larc/struct/ShortSeq;", 18 },
	{ "edges", &class_arc_struct_IntSeq, offsetof(arc_math_DelaunayTriangulator, F_edges), "Larc/struct/IntSeq;", 18 },
	{ "complete", &class_arc_struct_BoolSeq, offsetof(arc_math_DelaunayTriangulator, F_complete), "Larc/struct/BoolSeq;", 18 },
	{ "superTriangle", getArrayClass(&class_float, 1), offsetof(arc_math_DelaunayTriangulator, F_superTriangle), "[F", 18 },
	{ "centroid", &class_arc_math_geom_Vec2, offsetof(arc_math_DelaunayTriangulator, F_centroid), "Larc/math/geom/Vec2;", 18 },
	{ "sortedPoints", getArrayClass(&class_float, 1), offsetof(arc_math_DelaunayTriangulator, F_sortedPoints), "[F", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_math_DelaunayTriangulator, 0, "()V", 1 },
	{ "computeTriangles", (intptr_t) M_arc_math_DelaunayTriangulator_computeTriangles_arc_struct_FloatSeq_boolean_R_arc_struct_ShortSeq, VTABLE_arc_math_DelaunayTriangulator_computeTriangles_arc_struct_FloatSeq_boolean_R_arc_struct_ShortSeq, "(Larc/struct/FloatSeq;Z)Larc/struct/ShortSeq;", 1 },
	{ "computeTriangles", (intptr_t) M_arc_math_DelaunayTriangulator_computeTriangles_Array1_float_boolean_R_arc_struct_ShortSeq, VTABLE_arc_math_DelaunayTriangulator_computeTriangles_Array1_float_boolean_R_arc_struct_ShortSeq, "([FZ)Larc/struct/ShortSeq;", 1 },
	{ "computeTriangles", (intptr_t) M_arc_math_DelaunayTriangulator_computeTriangles_Array1_float_int_int_boolean_R_arc_struct_ShortSeq, VTABLE_arc_math_DelaunayTriangulator_computeTriangles_Array1_float_int_int_boolean_R_arc_struct_ShortSeq, "([FIIZ)Larc/struct/ShortSeq;", 1 },
	{ "circumCircle", (intptr_t) M_arc_math_DelaunayTriangulator_circumCircle_float_float_float_float_float_float_float_float_R_int, VTABLE_arc_math_DelaunayTriangulator_circumCircle_float_float_float_float_float_float_float_float_R_int, "(FFFFFFFF)I", 2 },
	{ "sort", (intptr_t) M_arc_math_DelaunayTriangulator_sort_Array1_float_int, VTABLE_arc_math_DelaunayTriangulator_sort_Array1_float_int, "([FI)V", 2 },
	{ "quicksortPartition", (intptr_t) M_arc_math_DelaunayTriangulator_quicksortPartition_Array1_float_int_int_Array1_short_R_int, VTABLE_arc_math_DelaunayTriangulator_quicksortPartition_Array1_float_int_int_Array1_short_R_int, "([FII[S)I", 2 },
	{ "trim", (intptr_t) M_arc_math_DelaunayTriangulator_trim_arc_struct_ShortSeq_Array1_float_Array1_float_int_int, VTABLE_arc_math_DelaunayTriangulator_trim_arc_struct_ShortSeq_Array1_float_Array1_float_int_int, "(Larc/struct/ShortSeq;[F[FII)V", 1 },
};

Class class_arc_math_DelaunayTriangulator{
		.nativeName = (intptr_t) "arc/math/DelaunayTriangulator",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_math_DelaunayTriangulator),
		.classVtable = (intptr_t) vtable_arc_math_DelaunayTriangulator,
		.staticInitializer = (intptr_t) clinit_arc_math_DelaunayTriangulator,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_math_DelaunayTriangulator,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 12,
		.nativeFields = (intptr_t) fields,
		.methodCount = 8,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 18,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_math_DelaunayTriangulator = registerClass(&class_arc_math_DelaunayTriangulator);

}
