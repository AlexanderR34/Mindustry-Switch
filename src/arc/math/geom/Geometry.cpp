#include "arc/math/geom/Geometry.h"
#include "arc/math/geom/Vec2.h"
#include "java/lang/Integer.h"
#include "arc/func/Intc2.h"
#include "arc/math/Angles.h"
#include "arc/math/geom/Point2.h"
#include "arc/math/geom/Rect.h"
#include "arc/struct/FloatSeq.h"
#include "java/lang/Iterable.h"
#include "arc/struct/IntSeq.h"
#include "arc/func/Cons.h"
#include "arc/func/Intc.h"
#include "java/lang/String.h"
#include "arc/math/geom/Geometry_SolidChecker.h"
#include "arc/struct/Seq.h"
#include "arc/math/geom/Geometry_invoke_arc_func_Intc_0.h"
#include "arc/math/geom/Position.h"
#include "arc/func/Boolf.h"
#include "arc/math/geom/Geometry.h"
#include "arc/math/geom/Geometry_invoke_arc_math_geom_Geometry_SolidChecker_0.h"
#include "arc/math/Mathf.h"
#include "java/lang/Math.h"
#include "arc/func/Floatf.h"
#include "arc/math/geom/Geometry_Raycaster.h"
#include "arc/math/geom/Geometry_invoke_arc_func_Floatf_0.h"
#include "java/util/Iterator.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/Object.h"
#include "arc/math/geom/Geometry_invoke_arc_func_Cons_0.h"
#include "arc/math/geom/Geometry_invoke_arc_func_Cons_1.h"
#include "java/util/Objects.h"
#include "java/lang/Class.h"
#include "arc/func/Floatc2.h"
#include "arc/func/Floatc4.h"

extern "C" {

jobject SF_arc_math_geom_Geometry_d4;
jobject SF_arc_math_geom_Geometry_d4c;
jobject SF_arc_math_geom_Geometry_d4x;
jobject SF_arc_math_geom_Geometry_d4y;
jobject SF_arc_math_geom_Geometry_d8;
jobject SF_arc_math_geom_Geometry_d8edge;
jobject SF_arc_math_geom_Geometry_tmp1;
jobject SF_arc_math_geom_Geometry_tmp2;
jobject SF_arc_math_geom_Geometry_tmp3;

void mark_arc_math_geom_Geometry(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_arc_math_geom_Geometry_d4)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_math_geom_Geometry_d4)->clazz)->markFunction)((jobject) SF_arc_math_geom_Geometry_d4, mark, depth + 1);
		if (SF_arc_math_geom_Geometry_d4c)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_math_geom_Geometry_d4c)->clazz)->markFunction)((jobject) SF_arc_math_geom_Geometry_d4c, mark, depth + 1);
		if (SF_arc_math_geom_Geometry_d4x)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_math_geom_Geometry_d4x)->clazz)->markFunction)((jobject) SF_arc_math_geom_Geometry_d4x, mark, depth + 1);
		if (SF_arc_math_geom_Geometry_d4y)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_math_geom_Geometry_d4y)->clazz)->markFunction)((jobject) SF_arc_math_geom_Geometry_d4y, mark, depth + 1);
		if (SF_arc_math_geom_Geometry_d8)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_math_geom_Geometry_d8)->clazz)->markFunction)((jobject) SF_arc_math_geom_Geometry_d8, mark, depth + 1);
		if (SF_arc_math_geom_Geometry_d8edge)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_math_geom_Geometry_d8edge)->clazz)->markFunction)((jobject) SF_arc_math_geom_Geometry_d8edge, mark, depth + 1);
		if (SF_arc_math_geom_Geometry_tmp1)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_math_geom_Geometry_tmp1)->clazz)->markFunction)((jobject) SF_arc_math_geom_Geometry_tmp1, mark, depth + 1);
		if (SF_arc_math_geom_Geometry_tmp2)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_math_geom_Geometry_tmp2)->clazz)->markFunction)((jobject) SF_arc_math_geom_Geometry_tmp2, mark, depth + 1);
		if (SF_arc_math_geom_Geometry_tmp3)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_math_geom_Geometry_tmp3)->clazz)->markFunction)((jobject) SF_arc_math_geom_Geometry_tmp3, mark, depth + 1);
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
	auto self = (arc_math_geom_Geometry *) object;
}

void init_arc_math_geom_Geometry(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Geometry:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Geometry(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(7);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_arc_math_geom_Geometry_d4_int_R_arc_math_geom_Point2(jcontext ctx, jint param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Geometry:d4", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Geometry(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(44);
	clinit_arc_math_geom_Geometry(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Geometry_d4;
	jint temp0 = (jint)SM_arc_math_Mathf_mod_int_int_R_int(ctx, (frame[0].i), (jint(4)));
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, temp0));
	}

	popStackFrame(ctx);
}

jint SM_arc_math_geom_Geometry_d4x_int_R_int(jcontext ctx, jint param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Geometry:d4x", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Geometry(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(48);
	clinit_arc_math_geom_Geometry(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Geometry_d4x;
	jint temp0 = (jint)SM_arc_math_Mathf_mod_int_int_R_int(ctx, (frame[0].i), (jint(4)));
	popStackFrame(ctx);
	return ((jint)ARRAY_ACCESS(jint, sp[0].o, temp0));
	}

	popStackFrame(ctx);
}

jint SM_arc_math_geom_Geometry_d4y_int_R_int(jcontext ctx, jint param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Geometry:d4y", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Geometry(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(52);
	clinit_arc_math_geom_Geometry(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Geometry_d4y;
	jint temp0 = (jint)SM_arc_math_Mathf_mod_int_int_R_int(ctx, (frame[0].i), (jint(4)));
	popStackFrame(ctx);
	return ((jint)ARRAY_ACCESS(jint, sp[0].o, temp0));
	}

	popStackFrame(ctx);
}

jobject SM_arc_math_geom_Geometry_d8_int_R_arc_math_geom_Point2(jcontext ctx, jint param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Geometry:d8", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Geometry(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(56);
	clinit_arc_math_geom_Geometry(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Geometry_d8;
	jint temp0 = (jint)SM_arc_math_Mathf_mod_int_int_R_int(ctx, (frame[0].i), (8));
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, temp0));
	}

	popStackFrame(ctx);
}

jobject SM_arc_math_geom_Geometry_d8edge_int_R_arc_math_geom_Point2(jcontext ctx, jint param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Geometry:d8edge", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Geometry(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(60);
	clinit_arc_math_geom_Geometry(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Geometry_d8edge;
	jint temp0 = (jint)SM_arc_math_Mathf_mod_int_int_R_int(ctx, (frame[0].i), (jint(4)));
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, temp0));
	}

	popStackFrame(ctx);
}

void SM_arc_math_geom_Geometry_circle_int_int_int_arc_func_Intc2(jcontext ctx, jint param0, jint param1, jint param2, jobject param3) {
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Geometry:circle", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Geometry(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(64);
	frame[4].i = (-(frame[2].i));
	}
label_1:;
	{
	if ((frame[4].i) > (frame[2].i)) goto label_2;
	}
	{
	LINE_NUMBER(65);
	frame[5].i = (-(frame[2].i));
	}
label_4:;
	{
	if ((frame[5].i) > (frame[2].i)) goto label_5;
	}
	{
	LINE_NUMBER(66);
	jint temp0 = (jint)SM_arc_math_Mathf_within_float_float_float_R_boolean(ctx, (jfloat((frame[4].i))), (jfloat((frame[5].i))), (jfloat((frame[2].i))));
	if (temp0 == 0) goto label_7;
	}
	{
	LINE_NUMBER(67);
	((func_arc_func_Intc2_get_int_int) resolveInterfaceMethod(ctx, &class_arc_func_Intc2, INDEX_arc_func_Intc2_get_int_int, (frame[3].o)))(ctx, (frame[3].o), ((frame[4].i) + (frame[0].i)), ((frame[5].i) + (frame[1].i)));
	}
label_7:;
	{
	LINE_NUMBER(65);
	INST_IINC(5, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(64);
	INST_IINC(4, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(71);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_arc_math_geom_Geometry_circle_int_int_int_int_int_arc_func_Intc2(jcontext ctx, jint param0, jint param1, jint param2, jint param3, jint param4, jobject param5) {
	jtype frame[13];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Geometry:circle", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Geometry(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	frame[5].o = param5;
	{
	LINE_NUMBER(74);
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, ((frame[0].i) - (frame[4].i)), (jint(0)));
	frame[6].i = temp0;
	}
label_1:;
	{
	jint temp0 = frame[6].i;
	jint temp1 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, ((frame[0].i) + (frame[4].i)), ((frame[2].i) - (jint(1))));
	if (temp0 > temp1) goto label_2;
	}
	{
	LINE_NUMBER(75);
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, ((frame[1].i) - (frame[4].i)), (jint(0)));
	frame[7].i = temp0;
	}
label_4:;
	{
	jint temp0 = frame[7].i;
	jint temp1 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, ((frame[1].i) + (frame[4].i)), ((frame[3].i) - (jint(1))));
	if (temp0 > temp1) goto label_5;
	}
	{
	LINE_NUMBER(76);
	jint temp0 = (jint)SM_arc_math_Mathf_within_float_float_float_float_float_R_boolean(ctx, (jfloat((frame[6].i))), (jfloat((frame[7].i))), (jfloat((frame[0].i))), (jfloat((frame[1].i))), (jfloat((frame[4].i))));
	if (temp0 == 0) goto label_7;
	}
	{
	LINE_NUMBER(77);
	((func_arc_func_Intc2_get_int_int) resolveInterfaceMethod(ctx, &class_arc_func_Intc2, INDEX_arc_func_Intc2_get_int_int, (frame[5].o)))(ctx, (frame[5].o), (frame[6].i), (frame[7].i));
	}
label_7:;
	{
	LINE_NUMBER(75);
	INST_IINC(7, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(74);
	INST_IINC(6, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(81);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_arc_math_geom_Geometry_vectorsToFloats_arc_struct_Seq_R_arc_struct_FloatSeq(jcontext ctx, jobject param0) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Geometry:vectorsToFloats", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Geometry(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(84);
	clinit_arc_struct_FloatSeq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_FloatSeq);
	init_arc_struct_FloatSeq_int(ctx, sp[0].o, (((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size) * (jint(2))));
	frame[1].o = sp[0].o;
	LINE_NUMBER(85);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_arc_math_geom_Geometry_invoke_arc_func_Cons_0(ctx);
		auto proxy = (arc_math_geom_Geometry_invoke_arc_func_Cons_0 *) gcAlloc(ctx, &class_arc_math_geom_Geometry_invoke_arc_func_Cons_0);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_struct_Seq_each_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_each_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(86);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject SM_arc_math_geom_Geometry_findClosest_float_float_Array1_arc_math_geom_Position_R_arc_math_geom_Position(jcontext ctx, jfloat param0, jfloat param1, jobject param2) {
	jtype frame[13];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Geometry:findClosest", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Geometry(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(90);
	frame[3].o = (jobject(nullptr));
	LINE_NUMBER(91);
	frame[4].f = (jfloat(0));
	LINE_NUMBER(92);
	frame[5].o = (frame[2].o);
	frame[6].i = (((jarray) nullCheck(ctx, (frame[5].o)))->length);
	frame[7].i = (jint(0));
	}
label_3:;
	{
	if ((frame[7].i) >= (frame[6].i)) goto label_4;
	}
	{
	frame[8].o = ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[7].i)));
	LINE_NUMBER(93);
	jfloat temp0 = (jfloat)((func_arc_math_geom_Position_dst2_float_float_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_dst2_float_float_R_float, (frame[8].o)))(ctx, (frame[8].o), (frame[0].f), (frame[1].f));
	frame[9].f = temp0;
	LINE_NUMBER(94);
	if ((frame[3].o) == nullptr) goto label_7;
	}
	{
	if ((floatCompare((frame[9].f), (frame[4].f), 1)) >= 0) goto label_8;
	}
label_7:;
	{
	LINE_NUMBER(95);
	frame[3].o = (frame[8].o);
	LINE_NUMBER(96);
	frame[4].f = (frame[9].f);
	}
label_8:;
	{
	LINE_NUMBER(92);
	INST_IINC(7, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(99);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jobject SM_arc_math_geom_Geometry_findClosest_float_float_java_lang_Iterable_R_arc_math_geom_Position(jcontext ctx, jfloat param0, jfloat param1, jobject param2) {
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Geometry:findClosest", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Geometry(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(103);
	frame[3].o = (jobject(nullptr));
	LINE_NUMBER(104);
	frame[4].f = (jfloat(0));
	LINE_NUMBER(105);
	sp[0].o = (jobject)((func_java_lang_Iterable_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_lang_Iterable, INDEX_java_lang_Iterable_iterator_R_java_util_Iterator, (frame[2].o)))(ctx, (frame[2].o));
	frame[5].o = sp[0].o;
	}
label_3:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[5].o)))(ctx, (frame[5].o));
	if (temp0 == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o));
	frame[6].o = (checkCast(ctx, &class_arc_math_geom_Position, sp[0].o));
	LINE_NUMBER(106);
	jfloat temp0 = (jfloat)((func_arc_math_geom_Position_dst2_float_float_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_dst2_float_float_R_float, (frame[6].o)))(ctx, (frame[6].o), (frame[0].f), (frame[1].f));
	frame[7].f = temp0;
	LINE_NUMBER(107);
	if ((frame[3].o) == nullptr) goto label_7;
	}
	{
	if ((floatCompare((frame[7].f), (frame[4].f), 1)) >= 0) goto label_8;
	}
label_7:;
	{
	LINE_NUMBER(108);
	frame[3].o = (frame[6].o);
	LINE_NUMBER(109);
	frame[4].f = (frame[7].f);
	}
label_8:;
	LINE_NUMBER(111);
	goto label_3;
label_4:;
	{
	LINE_NUMBER(112);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jobject SM_arc_math_geom_Geometry_findClosest_float_float_java_lang_Iterable_arc_func_Boolf_R_arc_math_geom_Position(jcontext ctx, jfloat param0, jfloat param1, jobject param2, jobject param3) {
	jtype frame[12];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Geometry:findClosest", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Geometry(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(116);
	frame[4].o = (jobject(nullptr));
	LINE_NUMBER(117);
	frame[5].f = (jfloat(0));
	LINE_NUMBER(118);
	sp[0].o = (jobject)((func_java_lang_Iterable_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_lang_Iterable, INDEX_java_lang_Iterable_iterator_R_java_util_Iterator, (frame[2].o)))(ctx, (frame[2].o));
	frame[6].o = sp[0].o;
	}
label_3:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[6].o)))(ctx, (frame[6].o));
	if (temp0 == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o));
	frame[7].o = (checkCast(ctx, &class_arc_math_geom_Position, sp[0].o));
	LINE_NUMBER(119);
	jint temp0 = (jint)((func_arc_func_Boolf_get_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolf, INDEX_arc_func_Boolf_get_java_lang_Object_R_boolean, (frame[3].o)))(ctx, (frame[3].o), (frame[7].o));
	if (temp0 != 0) goto label_6;
	}
	goto label_3;
label_6:;
	{
	LINE_NUMBER(120);
	jfloat temp0 = (jfloat)((func_arc_math_geom_Position_dst2_float_float_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_dst2_float_float_R_float, (frame[7].o)))(ctx, (frame[7].o), (frame[0].f), (frame[1].f));
	frame[8].f = temp0;
	LINE_NUMBER(121);
	if ((frame[4].o) == nullptr) goto label_8;
	}
	{
	if ((floatCompare((frame[8].f), (frame[5].f), 1)) >= 0) goto label_9;
	}
label_8:;
	{
	LINE_NUMBER(122);
	frame[4].o = (frame[7].o);
	LINE_NUMBER(123);
	frame[5].f = (frame[8].f);
	}
label_9:;
	LINE_NUMBER(125);
	goto label_3;
label_4:;
	{
	LINE_NUMBER(126);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

jobject SM_arc_math_geom_Geometry_findFurthest_float_float_java_lang_Iterable_R_arc_math_geom_Position(jcontext ctx, jfloat param0, jfloat param1, jobject param2) {
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Geometry:findFurthest", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Geometry(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(130);
	frame[3].o = (jobject(nullptr));
	LINE_NUMBER(131);
	frame[4].f = (jfloat(0));
	LINE_NUMBER(132);
	sp[0].o = (jobject)((func_java_lang_Iterable_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_lang_Iterable, INDEX_java_lang_Iterable_iterator_R_java_util_Iterator, (frame[2].o)))(ctx, (frame[2].o));
	frame[5].o = sp[0].o;
	}
label_3:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[5].o)))(ctx, (frame[5].o));
	if (temp0 == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o));
	frame[6].o = (checkCast(ctx, &class_arc_math_geom_Position, sp[0].o));
	LINE_NUMBER(133);
	jfloat temp0 = (jfloat)((func_arc_math_geom_Position_dst2_float_float_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_dst2_float_float_R_float, (frame[6].o)))(ctx, (frame[6].o), (frame[0].f), (frame[1].f));
	frame[7].f = temp0;
	LINE_NUMBER(134);
	if ((frame[3].o) == nullptr) goto label_7;
	}
	{
	if ((floatCompare((frame[7].f), (frame[4].f), -1)) <= 0) goto label_8;
	}
label_7:;
	{
	LINE_NUMBER(135);
	frame[3].o = (frame[6].o);
	LINE_NUMBER(136);
	frame[4].f = (frame[7].f);
	}
label_8:;
	LINE_NUMBER(138);
	goto label_3;
label_4:;
	{
	LINE_NUMBER(139);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jobject SM_arc_math_geom_Geometry_findFurthest_float_float_java_lang_Iterable_arc_func_Boolf_R_arc_math_geom_Position(jcontext ctx, jfloat param0, jfloat param1, jobject param2, jobject param3) {
	jtype frame[12];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Geometry:findFurthest", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Geometry(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(143);
	frame[4].o = (jobject(nullptr));
	LINE_NUMBER(144);
	frame[5].f = (jfloat(0));
	LINE_NUMBER(145);
	sp[0].o = (jobject)((func_java_lang_Iterable_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_lang_Iterable, INDEX_java_lang_Iterable_iterator_R_java_util_Iterator, (frame[2].o)))(ctx, (frame[2].o));
	frame[6].o = sp[0].o;
	}
label_3:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[6].o)))(ctx, (frame[6].o));
	if (temp0 == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o));
	frame[7].o = (checkCast(ctx, &class_arc_math_geom_Position, sp[0].o));
	LINE_NUMBER(146);
	jint temp0 = (jint)((func_arc_func_Boolf_get_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolf, INDEX_arc_func_Boolf_get_java_lang_Object_R_boolean, (frame[3].o)))(ctx, (frame[3].o), (frame[7].o));
	if (temp0 != 0) goto label_6;
	}
	goto label_3;
label_6:;
	{
	LINE_NUMBER(147);
	jfloat temp0 = (jfloat)((func_arc_math_geom_Position_dst2_float_float_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_dst2_float_float_R_float, (frame[7].o)))(ctx, (frame[7].o), (frame[0].f), (frame[1].f));
	frame[8].f = temp0;
	LINE_NUMBER(148);
	if ((frame[4].o) == nullptr) goto label_8;
	}
	{
	if ((floatCompare((frame[8].f), (frame[5].f), -1)) <= 0) goto label_9;
	}
label_8:;
	{
	LINE_NUMBER(149);
	frame[4].o = (frame[7].o);
	LINE_NUMBER(150);
	frame[5].f = (frame[8].f);
	}
label_9:;
	LINE_NUMBER(152);
	goto label_3;
label_4:;
	{
	LINE_NUMBER(153);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

jobject SM_arc_math_geom_Geometry_pixelCircle_float_R_Array1_arc_math_geom_Vec2(jcontext ctx, jfloat param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Geometry:pixelCircle", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Geometry(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(157);
	jfloat temp0 = frame[0].f;
	{ /* InvokeDynamic */
		clinit_arc_math_geom_Geometry_invoke_arc_math_geom_Geometry$SolidChecker_0(ctx);
		auto proxy = (arc_math_geom_Geometry_invoke_arc_math_geom_Geometry$SolidChecker_0 *) gcAlloc(ctx, &class_arc_math_geom_Geometry_invoke_arc_math_geom_Geometry$SolidChecker_0);
		sp[0].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_math_geom_Geometry_pixelCircle_float_arc_math_geom_Geometry$SolidChecker_R_Array1_arc_math_geom_Vec2(ctx, temp0, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_math_geom_Geometry_pixelCircle_float_arc_math_geom_Geometry$SolidChecker_R_Array1_arc_math_geom_Vec2(jcontext ctx, jfloat param0, jobject param1) {
	jtype frame[18];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Geometry:pixelCircle", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Geometry(ctx);
	frame[0].f = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(161);
	frame[2].i = (jint(((frame[0].f) * (jfloat(2)))));
	LINE_NUMBER(162);
	clinit_arc_struct_IntSeq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_IntSeq);
	init_arc_struct_IntSeq(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(165);
	frame[4].i = (jint(-1));
	}
label_3:;
	{
	if ((frame[4].i) >= ((frame[2].i) + (jint(1)))) goto label_4;
	}
	{
	LINE_NUMBER(166);
	frame[5].i = (jint(-1));
	}
label_6:;
	{
	if ((frame[5].i) >= ((frame[2].i) + (jint(1)))) goto label_7;
	}
	{
	LINE_NUMBER(167);
	jint temp0 = (jint)((func_arc_math_geom_Geometry$SolidChecker_solid_float_int_int_R_boolean) resolveInterfaceMethod(ctx, &class_arc_math_geom_Geometry$SolidChecker, INDEX_arc_math_geom_Geometry$SolidChecker_solid_float_int_int_R_boolean, (frame[1].o)))(ctx, (frame[1].o), (frame[0].f), (frame[4].i), (frame[5].i));
	if (temp0 != 0) goto label_9;
	}
	{
	jint temp0 = (jint)((func_arc_math_geom_Geometry$SolidChecker_solid_float_int_int_R_boolean) resolveInterfaceMethod(ctx, &class_arc_math_geom_Geometry$SolidChecker, INDEX_arc_math_geom_Geometry$SolidChecker_solid_float_int_int_R_boolean, (frame[1].o)))(ctx, (frame[1].o), (frame[0].f), ((frame[4].i) - (jint(1))), (frame[5].i));
	if (temp0 != 0) goto label_9;
	}
	{
	jint temp0 = (jint)((func_arc_math_geom_Geometry$SolidChecker_solid_float_int_int_R_boolean) resolveInterfaceMethod(ctx, &class_arc_math_geom_Geometry$SolidChecker, INDEX_arc_math_geom_Geometry$SolidChecker_solid_float_int_int_R_boolean, (frame[1].o)))(ctx, (frame[1].o), (frame[0].f), (frame[4].i), ((frame[5].i) - (jint(1))));
	if (temp0 != 0) goto label_9;
	}
	{
	jint temp0 = (jint)((func_arc_math_geom_Geometry$SolidChecker_solid_float_int_int_R_boolean) resolveInterfaceMethod(ctx, &class_arc_math_geom_Geometry$SolidChecker, INDEX_arc_math_geom_Geometry$SolidChecker_solid_float_int_int_R_boolean, (frame[1].o)))(ctx, (frame[1].o), (frame[0].f), ((frame[4].i) - (jint(1))), ((frame[5].i) - (jint(1))));
	if (temp0 == 0) goto label_10;
	}
label_9:;
	{
	sp[0].o = frame[1].o;
	jfloat temp0 = frame[0].f;
	jint temp1 = frame[4].i;
	jint temp2 = frame[5].i;
	LINE_NUMBER(168);
	jint temp3 = (jint)((func_arc_math_geom_Geometry$SolidChecker_solid_float_int_int_R_boolean) resolveInterfaceMethod(ctx, &class_arc_math_geom_Geometry$SolidChecker, INDEX_arc_math_geom_Geometry$SolidChecker_solid_float_int_int_R_boolean, sp[0].o))(ctx, sp[0].o, temp0, temp1, temp2);
	if (temp3 == 0) goto label_12;
	}
	{
	jint temp0 = (jint)((func_arc_math_geom_Geometry$SolidChecker_solid_float_int_int_R_boolean) resolveInterfaceMethod(ctx, &class_arc_math_geom_Geometry$SolidChecker, INDEX_arc_math_geom_Geometry$SolidChecker_solid_float_int_int_R_boolean, (frame[1].o)))(ctx, (frame[1].o), (frame[0].f), ((frame[4].i) - (jint(1))), (frame[5].i));
	if (temp0 == 0) goto label_12;
	}
	{
	jint temp0 = (jint)((func_arc_math_geom_Geometry$SolidChecker_solid_float_int_int_R_boolean) resolveInterfaceMethod(ctx, &class_arc_math_geom_Geometry$SolidChecker, INDEX_arc_math_geom_Geometry$SolidChecker_solid_float_int_int_R_boolean, (frame[1].o)))(ctx, (frame[1].o), (frame[0].f), (frame[4].i), ((frame[5].i) - (jint(1))));
	if (temp0 == 0) goto label_12;
	}
	{
	jint temp0 = (jint)((func_arc_math_geom_Geometry$SolidChecker_solid_float_int_int_R_boolean) resolveInterfaceMethod(ctx, &class_arc_math_geom_Geometry$SolidChecker, INDEX_arc_math_geom_Geometry$SolidChecker_solid_float_int_int_R_boolean, (frame[1].o)))(ctx, (frame[1].o), (frame[0].f), ((frame[4].i) - (jint(1))), ((frame[5].i) - (jint(1))));
	if (temp0 != 0) goto label_10;
	}
label_12:;
	{
	LINE_NUMBER(169);
	((func_arc_struct_IntSeq_add_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_IntSeq_add_int])(ctx, (frame[3].o), ((frame[4].i) + ((frame[5].i) * ((frame[2].i) + (jint(1))))));
	}
label_10:;
	{
	LINE_NUMBER(166);
	INST_IINC(5, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(165);
	INST_IINC(4, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(174);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(177);
	if ((frame[2].i) != (jint(3))) goto label_14;
	}
	{
	LINE_NUMBER(179);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(180);
	sp[0].o = frame[3].o;
	sp[1].o = frame[5].o;
	sp[2].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_arc_math_geom_Geometry_invoke_arc_func_Intc_0(ctx);
		auto proxy = (arc_math_geom_Geometry_invoke_arc_func_Intc_0 *) gcAlloc(ctx, &class_arc_math_geom_Geometry_invoke_arc_func_Intc_0);
		proxy->F_field0 = (jref) sp[1].o;
		sp[1].o = (jobject) proxy;
	}
	((func_arc_struct_IntSeq_each_arc_func_Intc) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_each_arc_func_Intc])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(181);
	sp[0].o = frame[5].o;
	{ /* InvokeDynamic */
		clinit_arc_math_geom_Geometry_invoke_arc_func_Floatf_0(ctx);
		auto proxy = (arc_math_geom_Geometry_invoke_arc_func_Floatf_0 *) gcAlloc(ctx, &class_arc_math_geom_Geometry_invoke_arc_func_Floatf_0);
		proxy->F_field1 = (frame[0].f);
		proxy->F_field0 = (frame[2].i);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_sort_arc_func_Floatf_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_sort_arc_func_Floatf_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(182);
	((func_arc_struct_IntSeq_clear) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_IntSeq_clear])(ctx, (frame[3].o));
	LINE_NUMBER(183);
	sp[0].o = frame[5].o;
	sp[1].o = frame[3].o;
	sp[2].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_arc_math_geom_Geometry_invoke_arc_func_Cons_1(ctx);
		auto proxy = (arc_math_geom_Geometry_invoke_arc_func_Cons_1 *) gcAlloc(ctx, &class_arc_math_geom_Geometry_invoke_arc_func_Cons_1);
		proxy->F_field0 = (jref) sp[1].o;
		sp[1].o = (jobject) proxy;
	}
	((func_arc_struct_Seq_each_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_each_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	}
label_14:;
	{
	LINE_NUMBER(186);
	frame[5].i = (jint(0));
	}
label_20:;
	{
	LINE_NUMBER(187);
	if (((jint)((arc_struct_IntSeq *) NULL_CHECK((frame[3].o)))->F_size) <= 0) goto label_21;
	}
	{
	LINE_NUMBER(188);
	jint temp0 = (jint)((func_arc_struct_IntSeq_get_int_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_IntSeq_get_int_R_int])(ctx, (frame[3].o), (frame[5].i));
	frame[6].i = (temp0 % ((frame[2].i) + (jint(1))));
	LINE_NUMBER(189);
	jint temp1 = (jint)((func_arc_struct_IntSeq_get_int_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_IntSeq_get_int_R_int])(ctx, (frame[3].o), (frame[5].i));
	frame[7].i = (temp1 / ((frame[2].i) + (jint(1))));
	LINE_NUMBER(190);
	sp[0].o = frame[4].o;
	clinit_arc_math_geom_Vec2(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2_float_float(ctx, sp[1].o, (jfloat(((frame[6].i) - ((frame[2].i) / (jint(2)))))), (jfloat(((frame[7].i) - ((frame[2].i) / (jint(2)))))));
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(191);
	jint temp2 = (jint)((func_arc_struct_IntSeq_removeIndex_int_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_IntSeq_removeIndex_int_R_int])(ctx, (frame[3].o), (frame[5].i));
	LINE_NUMBER(194);
	frame[8].i = (jint(0));
	}
label_27:;
	{
	if ((frame[8].i) >= ((jint)((arc_struct_IntSeq *) NULL_CHECK((frame[3].o)))->F_size)) goto label_28;
	}
	{
	LINE_NUMBER(196);
	jint temp0 = (jint)((func_arc_struct_IntSeq_get_int_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_IntSeq_get_int_R_int])(ctx, (frame[3].o), (frame[8].i));
	frame[9].i = (temp0 % ((frame[2].i) + (jint(1))));
	LINE_NUMBER(197);
	jint temp1 = (jint)((func_arc_struct_IntSeq_get_int_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_IntSeq_get_int_R_int])(ctx, (frame[3].o), (frame[8].i));
	frame[10].i = (temp1 / ((frame[2].i) + (jint(1))));
	LINE_NUMBER(198);
	jint temp2 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, ((frame[9].i) - (frame[6].i)));
	if (temp2 > (jint(1))) goto label_32;
	}
	{
	jint temp0 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, ((frame[10].i) - (frame[7].i)));
	if (temp0 > (jint(1))) goto label_32;
	}
	{
	jint temp0 = (frame[9].i) - (frame[6].i);
	LINE_NUMBER(199);
	jint temp1 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, temp0);
	if (temp1 != (jint(1))) goto label_34;
	}
	{
	jint temp0 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, ((frame[10].i) - (frame[7].i)));
	if (temp0 == (jint(1))) goto label_32;
	}
label_34:;
	{
	LINE_NUMBER(200);
	frame[5].i = (frame[8].i);
	LINE_NUMBER(201);
	goto label_28;
	}
label_32:;
	{
	LINE_NUMBER(194);
	INST_IINC(8, 1);
	goto label_27;
	}
label_28:;
	LINE_NUMBER(204);
	goto label_20;
label_21:;
	{
	LINE_NUMBER(206);
	sp[0].o = (jobject)((func_arc_struct_Seq_toArray_java_lang_Class_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_struct_Seq_toArray_java_lang_Class_R_Array1_java_lang_Object])(ctx, (frame[4].o), (((jobject) &class_arc_math_geom_Vec2)));
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_arc_math_geom_Vec2, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_arc_math_geom_Geometry_regPoly_int_float_R_Array1_float(jcontext ctx, jint param0, jfloat param1) {
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Geometry:regPoly", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Geometry(ctx);
	frame[0].i = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(211);
	sp[0].o = (jobject) createArray(ctx, &class_float, ((frame[0].i) * (jint(2))));
	frame[2].o = sp[0].o;
	LINE_NUMBER(212);
	clinit_arc_math_geom_Vec2(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2_float_float(ctx, sp[0].o, (jfloat(1)), (jfloat(1)));
	frame[3].o = sp[0].o;
	LINE_NUMBER(213);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_setLength_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_math_geom_Vec2_setLength_float_R_arc_math_geom_Vec2])(ctx, (frame[3].o), (frame[1].f));
	LINE_NUMBER(214);
	frame[4].i = (jint(0));
	}
label_4:;
	{
	if ((frame[4].i) >= (frame[0].i)) goto label_5;
	}
	{
	LINE_NUMBER(215);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_setAngle_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_math_geom_Vec2_setAngle_float_R_arc_math_geom_Vec2])(ctx, (frame[3].o), ((((jfloat(360.0f)) / (jfloat((frame[0].i)))) * (jfloat((frame[4].i)))) + (jfloat(90.0f))));
	LINE_NUMBER(216);
	ARRAY_ACCESS(jfloat, (frame[2].o), ((frame[4].i) * (jint(2)))) = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[3].o)))->F_x);
	LINE_NUMBER(217);
	ARRAY_ACCESS(jfloat, (frame[2].o), (((frame[4].i) * (jint(2))) + (jint(1)))) = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[3].o)))->F_y);
	LINE_NUMBER(214);
	INST_IINC(4, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(219);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jfloat SM_arc_math_geom_Geometry_iterateLine_float_float_float_float_float_float_arc_func_Floatc2_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jobject param6) {
	jtype frame[17];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Geometry:iterateLine", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Geometry(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	frame[6].o = param6;
	{
	LINE_NUMBER(223);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_dst_float_float_float_float_R_float(ctx, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f));
	frame[7].f = temp0;
	LINE_NUMBER(224);
	frame[8].i = (jint(((frame[7].f) / (frame[5].f))));
	LINE_NUMBER(225);
	frame[9].f = ((jfloat(1)) / (jfloat((frame[8].i))));
	LINE_NUMBER(227);
	frame[10].f = (frame[7].f);
	LINE_NUMBER(228);
	clinit_arc_math_geom_Geometry(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Geometry_tmp2;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[3].f), (frame[4].f));
	LINE_NUMBER(229);
	frame[11].i = (jint(0));
	}
label_6:;
	{
	if ((frame[11].i) >= (frame[8].i)) goto label_7;
	}
	{
	LINE_NUMBER(230);
	frame[12].f = ((frame[9].f) * (jfloat((frame[11].i))));
	LINE_NUMBER(231);
	clinit_arc_math_geom_Geometry(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Geometry_tmp1;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[1].f), (frame[2].f));
	LINE_NUMBER(232);
	clinit_arc_math_geom_Geometry(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Geometry_tmp1;
	clinit_arc_math_geom_Geometry(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Geometry_tmp2;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_lerp_arc_math_geom_Vec2_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_lerp_arc_math_geom_Vec2_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o, (frame[12].f));
	LINE_NUMBER(233);
	sp[0].o = frame[6].o;
	clinit_arc_math_geom_Geometry(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Geometry_tmp1;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x;
	clinit_arc_math_geom_Geometry(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Geometry_tmp1;
	((func_arc_func_Floatc2_get_float_float) resolveInterfaceMethod(ctx, &class_arc_func_Floatc2, INDEX_arc_func_Floatc2_get_float_float, sp[0].o))(ctx, sp[0].o, temp0, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y));
	LINE_NUMBER(234);
	frame[10].f = ((frame[10].f) - (frame[9].f));
	LINE_NUMBER(229);
	INST_IINC(11, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(237);
	popStackFrame(ctx);
	return (frame[10].f);
	}

	popStackFrame(ctx);
}

void SM_arc_math_geom_Geometry_iteratePolySegments_Array1_float_arc_func_Floatc4(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Geometry:iteratePolySegments", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Geometry(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(241);
	frame[2].i = (jint(0));
	}
label_1:;
	{
	if ((frame[2].i) >= (((jarray) nullCheck(ctx, (frame[0].o)))->length)) goto label_2;
	}
	{
	LINE_NUMBER(242);
	frame[3].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (frame[2].i)));
	LINE_NUMBER(243);
	frame[4].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), ((frame[2].i) + (jint(1)))));
	LINE_NUMBER(245);
	if ((frame[2].i) != ((((jarray) nullCheck(ctx, (frame[0].o)))->length) - (jint(2)))) goto label_6;
	}
	{
	LINE_NUMBER(246);
	frame[5].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(0))));
	LINE_NUMBER(247);
	frame[6].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(1))));
	goto label_10;
	}
label_6:;
	{
	LINE_NUMBER(249);
	frame[5].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), ((frame[2].i) + (jint(2)))));
	LINE_NUMBER(250);
	frame[6].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), ((frame[2].i) + (jint(3)))));
	}
label_10:;
	{
	LINE_NUMBER(253);
	((func_arc_func_Floatc4_get_float_float_float_float) resolveInterfaceMethod(ctx, &class_arc_func_Floatc4, INDEX_arc_func_Floatc4_get_float_float_float_float, (frame[1].o)))(ctx, (frame[1].o), (frame[3].f), (frame[4].f), (frame[5].f), (frame[6].f));
	LINE_NUMBER(241);
	INST_IINC(2, 2);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(255);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_arc_math_geom_Geometry_iteratePolygon_arc_func_Floatc2_Array1_float(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Geometry:iteratePolygon", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Geometry(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(258);
	frame[2].i = (jint(0));
	}
label_1:;
	{
	if ((frame[2].i) >= (((jarray) nullCheck(ctx, (frame[1].o)))->length)) goto label_2;
	}
	{
	LINE_NUMBER(259);
	frame[3].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (frame[2].i)));
	LINE_NUMBER(260);
	frame[4].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), ((frame[2].i) + (jint(1)))));
	LINE_NUMBER(261);
	((func_arc_func_Floatc2_get_float_float) resolveInterfaceMethod(ctx, &class_arc_func_Floatc2, INDEX_arc_func_Floatc2_get_float_float, (frame[0].o)))(ctx, (frame[0].o), (frame[3].f), (frame[4].f));
	LINE_NUMBER(258);
	INST_IINC(2, 2);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(263);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_arc_math_geom_Geometry_getD4Points_R_Array1_arc_math_geom_Point2(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Geometry:getD4Points", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Geometry(ctx);
	{
	LINE_NUMBER(266);
	clinit_arc_math_geom_Geometry(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Geometry_d4;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_math_geom_Geometry_getD8Points_R_Array1_arc_math_geom_Point2(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Geometry:getD8Points", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Geometry(ctx);
	{
	LINE_NUMBER(270);
	clinit_arc_math_geom_Geometry(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Geometry_d8;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_math_geom_Geometry_getD8EdgePoints_R_Array1_arc_math_geom_Point2(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Geometry:getD8EdgePoints", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Geometry(ctx);
	{
	LINE_NUMBER(274);
	clinit_arc_math_geom_Geometry(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Geometry_d8edge;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool SM_arc_math_geom_Geometry_raycast_int_int_int_int_arc_math_geom_Geometry$Raycaster_R_boolean(jcontext ctx, jint param0, jint param1, jint param2, jint param3, jobject param4) {
	jtype frame[16];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Geometry:raycast", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Geometry(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(278);
	frame[5].i = (frame[0].i);
	LINE_NUMBER(279);
	frame[6].i = (frame[1].i);
	LINE_NUMBER(280);
	jint temp0 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, ((frame[2].i) - (frame[5].i)));
	frame[7].i = temp0;
	LINE_NUMBER(281);
	jint temp1 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, ((frame[3].i) - (frame[6].i)));
	frame[8].i = temp1;
	LINE_NUMBER(283);
	if ((frame[5].i) >= (frame[2].i)) goto label_5;
	}
	INST_ICONST(1);
	goto label_6;
label_5:;
	INST_ICONST(-1);
label_6:;
	{
	sp -= 1;
	frame[9].i = sp[0].i;
	LINE_NUMBER(284);
	if ((frame[6].i) >= (frame[3].i)) goto label_8;
	}
	INST_ICONST(1);
	goto label_9;
label_8:;
	INST_ICONST(-1);
label_9:;
	{
	sp -= 1;
	frame[10].i = sp[0].i;
	LINE_NUMBER(286);
	frame[11].i = ((frame[7].i) - (frame[8].i));
	}
label_11:;
	{
	LINE_NUMBER(290);
	jint temp0 = (jint)((func_arc_math_geom_Geometry$Raycaster_accept_int_int_R_boolean) resolveInterfaceMethod(ctx, &class_arc_math_geom_Geometry$Raycaster, INDEX_arc_math_geom_Geometry$Raycaster_accept_int_int_R_boolean, (frame[4].o)))(ctx, (frame[4].o), (frame[5].i), (frame[6].i));
	if (temp0 == 0) goto label_12;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_12:;
	{
	LINE_NUMBER(291);
	if ((frame[5].i) != (frame[2].i)) goto label_13;
	}
	{
	if ((frame[6].i) != (frame[3].i)) goto label_13;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_13:;
	{
	LINE_NUMBER(293);
	frame[12].i = ((jint(2)) * (frame[11].i));
	LINE_NUMBER(294);
	if ((frame[12].i) <= (-(frame[8].i))) goto label_15;
	}
	{
	LINE_NUMBER(295);
	frame[11].i = ((frame[11].i) - (frame[8].i));
	LINE_NUMBER(296);
	frame[5].i = ((frame[5].i) + (frame[9].i));
	}
label_15:;
	{
	LINE_NUMBER(299);
	if ((frame[12].i) >= (frame[7].i)) goto label_11;
	}
	{
	LINE_NUMBER(300);
	frame[11].i = ((frame[11].i) + (frame[7].i));
	LINE_NUMBER(301);
	frame[6].i = ((frame[6].i) + (frame[10].i));
	goto label_11;
	}

	popStackFrame(ctx);
}

jobject SM_arc_math_geom_Geometry_raycastRect_float_float_float_float_arc_math_geom_Rect_R_arc_math_geom_Vec2(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jobject param4) {
	jtype frame[14];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Geometry:raycastRect", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Geometry(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(307);
	sp[0].o = (jobject)SM_arc_math_geom_Geometry_raycastRect_float_float_float_float_float_float_float_float_R_arc_math_geom_Vec2(ctx, (frame[0].f), (frame[1].f), (frame[2].f), (frame[3].f), (((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[4].o)))->F_x) + (((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[4].o)))->F_width) / (jfloat(2)))), (((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[4].o)))->F_y) + (((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[4].o)))->F_height) / (jfloat(2)))), (((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[4].o)))->F_width) / (jfloat(2))), (((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[4].o)))->F_height) / (jfloat(2))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_math_geom_Geometry_raycastRect_float_float_float_float_float_float_float_float_R_arc_math_geom_Vec2(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7) {
	jtype frame[27];
	auto stack = &frame[24];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Geometry:raycastRect", 27 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Geometry(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	frame[6].f = param6;
	frame[7].f = param7;
	{
	LINE_NUMBER(311);
	frame[8].f = ((frame[2].f) - (frame[0].f));
	frame[9].f = ((frame[3].f) - (frame[1].f));
	LINE_NUMBER(313);
	clinit_arc_math_geom_Geometry(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Geometry_tmp1;
	frame[10].o = sp[0].o;
	LINE_NUMBER(316);
	frame[11].f = ((jfloat(1)) / (frame[8].f));
	LINE_NUMBER(317);
	frame[12].f = ((jfloat(1)) / (frame[9].f));
	LINE_NUMBER(318);
	jint temp0 = (jint)SM_arc_math_Mathf_sign_float_R_int(ctx, (frame[11].f));
	frame[13].i = temp0;
	LINE_NUMBER(319);
	jint temp1 = (jint)SM_arc_math_Mathf_sign_float_R_int(ctx, (frame[12].f));
	frame[14].i = temp1;
	LINE_NUMBER(320);
	frame[15].f = ((((frame[4].f) - ((jfloat((frame[13].i))) * (frame[6].f))) - (frame[0].f)) * (frame[11].f));
	LINE_NUMBER(321);
	frame[16].f = ((((frame[5].f) - ((jfloat((frame[14].i))) * (frame[7].f))) - (frame[1].f)) * (frame[12].f));
	LINE_NUMBER(322);
	frame[17].f = ((((frame[4].f) + ((jfloat((frame[13].i))) * (frame[6].f))) - (frame[0].f)) * (frame[11].f));
	LINE_NUMBER(323);
	frame[18].f = ((((frame[5].f) + ((jfloat((frame[14].i))) * (frame[7].f))) - (frame[1].f)) * (frame[12].f));
	LINE_NUMBER(325);
	if ((floatCompare((frame[15].f), (frame[18].f), -1)) > 0) goto label_12;
	}
	{
	if ((floatCompare((frame[16].f), (frame[17].f), -1)) <= 0) goto label_13;
	}
label_12:;
	{
	LINE_NUMBER(326);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_13:;
	{
	LINE_NUMBER(328);
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (frame[15].f), (frame[16].f));
	frame[19].f = temp0;
	LINE_NUMBER(329);
	jfloat temp1 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, (frame[17].f), (frame[18].f));
	frame[20].f = temp1;
	LINE_NUMBER(331);
	if ((floatCompare((frame[19].f), (jfloat(1)), -1)) >= 0) goto label_16;
	}
	{
	if ((floatCompare((frame[20].f), (jfloat(0)), 1)) > 0) goto label_17;
	}
label_16:;
	{
	LINE_NUMBER(332);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_17:;
	{
	LINE_NUMBER(334);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, (frame[19].f));
	frame[21].f = temp0;
	LINE_NUMBER(335);
	frame[22].f = ((frame[21].f) * (frame[8].f));
	LINE_NUMBER(336);
	frame[23].f = ((frame[21].f) * (frame[9].f));
	LINE_NUMBER(337);
	((arc_math_geom_Vec2 *) NULL_CHECK((frame[10].o)))->F_x = ((frame[0].f) + (frame[22].f));
	LINE_NUMBER(338);
	((arc_math_geom_Vec2 *) NULL_CHECK((frame[10].o)))->F_y = ((frame[1].f) + (frame[23].f));
	LINE_NUMBER(339);
	popStackFrame(ctx);
	return (frame[10].o);
	}

	popStackFrame(ctx);
}

jobject SM_arc_math_geom_Geometry_overlap_arc_math_geom_Rect_arc_math_geom_Rect_boolean_R_arc_math_geom_Vec2(jcontext ctx, jobject param0, jobject param1, jbool param2) {
	jtype frame[19];
	auto stack = &frame[16];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Geometry:overlap", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Geometry(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(347);
	frame[3].f = (jfloat(0));
	LINE_NUMBER(349);
	frame[4].f = (((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_x) + (((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_width) / (jfloat(2))));
	frame[5].f = (((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[1].o)))->F_x) + (((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[1].o)))->F_width) / (jfloat(2))));
	LINE_NUMBER(350);
	frame[6].f = (((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_y) + (((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_height) / (jfloat(2))));
	frame[7].f = (((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[1].o)))->F_y) + (((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[1].o)))->F_height) / (jfloat(2))));
	LINE_NUMBER(353);
	frame[8].f = ((frame[4].f) - (frame[5].f));
	LINE_NUMBER(354);
	frame[9].f = ((frame[6].f) - (frame[7].f));
	LINE_NUMBER(357);
	frame[10].f = (((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_width) / (jfloat(2)));
	LINE_NUMBER(358);
	frame[11].f = (((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[1].o)))->F_width) / (jfloat(2)));
	LINE_NUMBER(361);
	jfloat temp0 = (frame[10].f) + (frame[11].f);
	jfloat temp1 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, (frame[8].f));
	frame[12].f = (temp0 - temp1);
	LINE_NUMBER(362);
	jfloat temp2 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, (frame[12].f));
	if ((floatCompare(temp2, (jfloat(0)), -1)) <= 0) goto label_11;
	}
	{
	LINE_NUMBER(365);
	frame[13].f = (((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_height) / (jfloat(2)));
	LINE_NUMBER(366);
	frame[14].f = (((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[1].o)))->F_height) / (jfloat(2)));
	LINE_NUMBER(369);
	jfloat temp0 = (frame[13].f) + (frame[14].f);
	jfloat temp1 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, (frame[9].f));
	frame[15].f = (temp0 - temp1);
	LINE_NUMBER(370);
	jfloat temp2 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, (frame[15].f));
	if ((floatCompare(temp2, (jfloat(0)), -1)) <= 0) goto label_11;
	}
	{
	LINE_NUMBER(373);
	jfloat temp0 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, (frame[12].f));
	jfloat temp1 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, (frame[15].f));
	if ((floatCompare(temp0, temp1, 1)) >= 0) goto label_17;
	}
	{
	LINE_NUMBER(375);
	clinit_arc_math_geom_Geometry(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Geometry_tmp1;
	sp += 1;
	if ((floatCompare((frame[8].f), (jfloat(0)), 1)) >= 0) goto label_19;
	}
	INST_FCONST(1);
	goto label_20;
label_19:;
	(sp++)->f = jfloat(-1.0f);
label_20:;
	{
	sp -= 2;
	((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x = sp[1].f;
	LINE_NUMBER(376);
	clinit_arc_math_geom_Geometry(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Geometry_tmp1;
	((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y = (jfloat(0));
	LINE_NUMBER(377);
	frame[3].f = (frame[12].f);
	goto label_11;
	}
label_17:;
	{
	LINE_NUMBER(380);
	clinit_arc_math_geom_Geometry(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Geometry_tmp1;
	((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x = (jfloat(0));
	LINE_NUMBER(381);
	clinit_arc_math_geom_Geometry(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Geometry_tmp1;
	sp += 1;
	if ((floatCompare((frame[9].f), (jfloat(0)), 1)) >= 0) goto label_24;
	}
	INST_FCONST(1);
	goto label_25;
label_24:;
	(sp++)->f = jfloat(-1.0f);
label_25:;
	{
	sp -= 2;
	((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y = sp[1].f;
	LINE_NUMBER(382);
	frame[3].f = (frame[15].f);
	}
label_11:;
	{
	LINE_NUMBER(387);
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (frame[3].f), (jfloat(0)));
	frame[13].f = temp0;
	LINE_NUMBER(390);
	jfloat temp1 = frame[13].f;
	clinit_arc_math_geom_Geometry(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Geometry_tmp1;
	frame[14].f = (temp1 * ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x));
	LINE_NUMBER(391);
	jfloat temp2 = frame[13].f;
	clinit_arc_math_geom_Geometry(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Geometry_tmp1;
	frame[15].f = (temp2 * ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y));
	LINE_NUMBER(393);
	clinit_arc_math_geom_Geometry(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Geometry_tmp1;
	((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x = (-(frame[14].f));
	LINE_NUMBER(394);
	clinit_arc_math_geom_Geometry(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Geometry_tmp1;
	((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y = (-(frame[15].f));
	LINE_NUMBER(396);
	clinit_arc_math_geom_Geometry(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Geometry_tmp1;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_math_geom_Geometry_toBarycoord_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_R_arc_math_geom_Vec2(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4) {
	jtype frame[18];
	auto stack = &frame[14];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Geometry:toBarycoord", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Geometry(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(415);
	clinit_arc_math_geom_Geometry(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Geometry_tmp1;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[2].o));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_sub_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_sub_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[1].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(416);
	clinit_arc_math_geom_Geometry(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Geometry_tmp2;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[3].o));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_sub_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_sub_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[1].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(417);
	clinit_arc_math_geom_Geometry(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Geometry_tmp3;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[0].o));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_sub_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_sub_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[1].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(418);
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec2_dot_arc_math_geom_Vec2_R_float) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_math_geom_Vec2_dot_arc_math_geom_Vec2_R_float])(ctx, (frame[5].o), (frame[5].o));
	frame[8].f = temp0;
	LINE_NUMBER(419);
	jfloat temp1 = (jfloat)((func_arc_math_geom_Vec2_dot_arc_math_geom_Vec2_R_float) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_math_geom_Vec2_dot_arc_math_geom_Vec2_R_float])(ctx, (frame[5].o), (frame[6].o));
	frame[9].f = temp1;
	LINE_NUMBER(420);
	jfloat temp2 = (jfloat)((func_arc_math_geom_Vec2_dot_arc_math_geom_Vec2_R_float) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_math_geom_Vec2_dot_arc_math_geom_Vec2_R_float])(ctx, (frame[6].o), (frame[6].o));
	frame[10].f = temp2;
	LINE_NUMBER(421);
	jfloat temp3 = (jfloat)((func_arc_math_geom_Vec2_dot_arc_math_geom_Vec2_R_float) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_math_geom_Vec2_dot_arc_math_geom_Vec2_R_float])(ctx, (frame[7].o), (frame[5].o));
	frame[11].f = temp3;
	LINE_NUMBER(422);
	jfloat temp4 = (jfloat)((func_arc_math_geom_Vec2_dot_arc_math_geom_Vec2_R_float) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_math_geom_Vec2_dot_arc_math_geom_Vec2_R_float])(ctx, (frame[7].o), (frame[6].o));
	frame[12].f = temp4;
	LINE_NUMBER(423);
	frame[13].f = (((frame[8].f) * (frame[10].f)) - ((frame[9].f) * (frame[9].f)));
	LINE_NUMBER(424);
	((arc_math_geom_Vec2 *) NULL_CHECK((frame[4].o)))->F_x = ((((frame[10].f) * (frame[11].f)) - ((frame[9].f) * (frame[12].f))) / (frame[13].f));
	LINE_NUMBER(425);
	((arc_math_geom_Vec2 *) NULL_CHECK((frame[4].o)))->F_y = ((((frame[8].f) * (frame[12].f)) - ((frame[9].f) * (frame[11].f))) / (frame[13].f));
	LINE_NUMBER(426);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

jbool SM_arc_math_geom_Geometry_barycoordInsideTriangle_arc_math_geom_Vec2_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Geometry:barycoordInsideTriangle", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Geometry(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(431);
	if ((floatCompare(((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_x), (jfloat(0)), -1)) < 0) goto label_1;
	}
	{
	if ((floatCompare(((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_y), (jfloat(0)), -1)) < 0) goto label_1;
	}
	{
	if ((floatCompare((((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_x) + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_y)), (jfloat(1)), 1)) > 0) goto label_1;
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

jobject SM_arc_math_geom_Geometry_fromBarycoord_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_R_arc_math_geom_Vec2(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4) {
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Geometry:fromBarycoord", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Geometry(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(439);
	frame[5].f = (((jfloat(1)) - ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_x)) - ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_y));
	LINE_NUMBER(440);
	((arc_math_geom_Vec2 *) NULL_CHECK((frame[4].o)))->F_x = ((((frame[5].f) * ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x)) + (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_x) * ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[2].o)))->F_x))) + (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_y) * ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[3].o)))->F_x)));
	LINE_NUMBER(441);
	((arc_math_geom_Vec2 *) NULL_CHECK((frame[4].o)))->F_y = ((((frame[5].f) * ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y)) + (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_x) * ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[2].o)))->F_y))) + (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_y) * ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[3].o)))->F_y)));
	LINE_NUMBER(442);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

jfloat SM_arc_math_geom_Geometry_fromBarycoord_arc_math_geom_Vec2_float_float_float_R_float(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3) {
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Geometry:fromBarycoord", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Geometry(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	{
	LINE_NUMBER(450);
	frame[4].f = (((jfloat(1)) - ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_x)) - ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_y));
	LINE_NUMBER(451);
	popStackFrame(ctx);
	return ((((frame[4].f) * (frame[1].f)) + (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_x) * (frame[2].f))) + (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_y) * (frame[3].f)));
	}

	popStackFrame(ctx);
}

jfloat SM_arc_math_geom_Geometry_lowestPositiveRoot_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2) {
	jtype frame[12];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Geometry:lowestPositiveRoot", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Geometry(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	{
	LINE_NUMBER(463);
	frame[3].f = (((frame[1].f) * (frame[1].f)) - (((jfloat(4.0f)) * (frame[0].f)) * (frame[2].f)));
	LINE_NUMBER(464);
	if ((floatCompare((frame[3].f), (jfloat(0)), 1)) >= 0) goto label_2;
	}
	(sp++)->f = jfloat(std::numeric_limits<float>::quiet_NaN());
	popStackFrame(ctx);
	INST_FRETURN();
label_2:;
	{
	LINE_NUMBER(466);
	jdouble temp0 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, (jdouble((frame[3].f))));
	frame[4].f = (jfloat(temp0));
	LINE_NUMBER(467);
	frame[5].f = ((jfloat(1)) / ((jfloat(2)) * (frame[0].f)));
	LINE_NUMBER(468);
	frame[6].f = (((-(frame[1].f)) - (frame[4].f)) * (frame[5].f));
	LINE_NUMBER(469);
	frame[7].f = (((-(frame[1].f)) + (frame[4].f)) * (frame[5].f));
	LINE_NUMBER(471);
	if ((floatCompare((frame[6].f), (frame[7].f), -1)) <= 0) goto label_7;
	}
	{
	LINE_NUMBER(472);
	frame[8].f = (frame[7].f);
	LINE_NUMBER(473);
	frame[7].f = (frame[6].f);
	LINE_NUMBER(474);
	frame[6].f = (frame[8].f);
	}
label_7:;
	{
	LINE_NUMBER(477);
	if ((floatCompare((frame[6].f), (jfloat(0)), -1)) <= 0) goto label_11;
	}
	INST_FLOAD(6);
	popStackFrame(ctx);
	INST_FRETURN();
label_11:;
	{
	LINE_NUMBER(478);
	if ((floatCompare((frame[7].f), (jfloat(0)), -1)) <= 0) goto label_12;
	}
	INST_FLOAD(7);
	popStackFrame(ctx);
	INST_FRETURN();
label_12:;
	{
	LINE_NUMBER(479);
	popStackFrame(ctx);
	return (jfloat(std::numeric_limits<float>::quiet_NaN()));
	}

	popStackFrame(ctx);
}

jbool SM_arc_math_geom_Geometry_colinear_float_float_float_float_float_float_R_boolean(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5) {
	jtype frame[14];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Geometry:colinear", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Geometry(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	{
	LINE_NUMBER(483);
	frame[6].f = ((frame[2].f) - (frame[0].f));
	frame[7].f = ((frame[3].f) - (frame[1].f));
	LINE_NUMBER(484);
	frame[8].f = ((frame[4].f) - (frame[2].f));
	frame[9].f = ((frame[5].f) - (frame[3].f));
	LINE_NUMBER(485);
	frame[10].f = (((frame[8].f) * (frame[7].f)) - ((frame[6].f) * (frame[9].f)));
	LINE_NUMBER(486);
	jfloat temp0 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, (frame[10].f));
	if ((floatCompare(temp0, (jfloat(1,000000e-06f)), 1)) >= 0) goto label_6;
	}
	INST_ICONST(1);
	goto label_7;
label_6:;
	INST_ICONST(0);
label_7:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject SM_arc_math_geom_Geometry_triangleCentroid_float_float_float_float_float_float_arc_math_geom_Vec2_R_arc_math_geom_Vec2(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jobject param6) {
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Geometry:triangleCentroid", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Geometry(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	frame[6].o = param6;
	{
	LINE_NUMBER(490);
	((arc_math_geom_Vec2 *) NULL_CHECK((frame[6].o)))->F_x = ((((frame[0].f) + (frame[2].f)) + (frame[4].f)) / (jfloat(3.0f)));
	LINE_NUMBER(491);
	((arc_math_geom_Vec2 *) NULL_CHECK((frame[6].o)))->F_y = ((((frame[1].f) + (frame[3].f)) + (frame[5].f)) / (jfloat(3.0f)));
	LINE_NUMBER(492);
	popStackFrame(ctx);
	return (frame[6].o);
	}

	popStackFrame(ctx);
}

jobject SM_arc_math_geom_Geometry_triangleCircumcenter_float_float_float_float_float_float_arc_math_geom_Vec2_R_arc_math_geom_Vec2(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jobject param6) {
	jtype frame[22];
	auto stack = &frame[17];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Geometry:triangleCircumcenter", 22 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Geometry(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	frame[6].o = param6;
	{
	LINE_NUMBER(497);
	frame[7].f = ((frame[2].f) - (frame[0].f));
	frame[8].f = ((frame[3].f) - (frame[1].f));
	LINE_NUMBER(498);
	frame[9].f = ((frame[4].f) - (frame[2].f));
	frame[10].f = ((frame[5].f) - (frame[3].f));
	LINE_NUMBER(499);
	frame[11].f = ((frame[0].f) - (frame[4].f));
	frame[12].f = ((frame[1].f) - (frame[5].f));
	LINE_NUMBER(500);
	frame[13].f = (((frame[9].f) * (frame[8].f)) - ((frame[7].f) * (frame[10].f)));
	LINE_NUMBER(501);
	jfloat temp0 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, (frame[13].f));
	if ((floatCompare(temp0, (jfloat(1,000000e-06f)), 1)) >= 0) goto label_8;
	}
	{
	LINE_NUMBER(502);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Triangle points must not be colinear."_j))));
	throwException(ctx, sp[0].o);	}
label_8:;
	{
	LINE_NUMBER(503);
	frame[13].f = ((frame[13].f) * (jfloat(2)));
	LINE_NUMBER(504);
	frame[14].f = (((frame[0].f) * (frame[0].f)) + ((frame[1].f) * (frame[1].f)));
	frame[15].f = (((frame[2].f) * (frame[2].f)) + ((frame[3].f) * (frame[3].f)));
	frame[16].f = (((frame[4].f) * (frame[4].f)) + ((frame[5].f) * (frame[5].f)));
	LINE_NUMBER(505);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, (frame[6].o), (((((frame[14].f) * (frame[10].f)) + ((frame[15].f) * (frame[12].f))) + ((frame[16].f) * (frame[8].f))) / (frame[13].f)), ((-((((frame[14].f) * (frame[9].f)) + ((frame[15].f) * (frame[11].f))) + ((frame[16].f) * (frame[7].f)))) / (frame[13].f)));
	LINE_NUMBER(506);
	popStackFrame(ctx);
	return (frame[6].o);
	}

	popStackFrame(ctx);
}

jfloat SM_arc_math_geom_Geometry_triangleCircumradius_float_float_float_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5) {
	jtype frame[19];
	auto stack = &frame[16];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Geometry:triangleCircumradius", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Geometry(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	{
	LINE_NUMBER(511);
	jfloat temp0 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, ((frame[3].f) - (frame[1].f)));
	if ((floatCompare(temp0, (jfloat(1,000000e-06f)), 1)) >= 0) goto label_1;
	}
	{
	LINE_NUMBER(512);
	frame[7].f = ((-((frame[4].f) - (frame[2].f))) / ((frame[5].f) - (frame[3].f)));
	LINE_NUMBER(513);
	frame[9].f = (((frame[2].f) + (frame[4].f)) / (jfloat(2)));
	LINE_NUMBER(514);
	frame[11].f = (((frame[3].f) + (frame[5].f)) / (jfloat(2)));
	LINE_NUMBER(515);
	frame[12].f = (((frame[2].f) + (frame[0].f)) / (jfloat(2)));
	LINE_NUMBER(516);
	frame[13].f = (((frame[7].f) * ((frame[12].f) - (frame[9].f))) + (frame[11].f));
	goto label_8;
	}
label_1:;
	{
	LINE_NUMBER(517);
	jfloat temp0 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, ((frame[5].f) - (frame[3].f)));
	if ((floatCompare(temp0, (jfloat(1,000000e-06f)), 1)) >= 0) goto label_9;
	}
	{
	LINE_NUMBER(518);
	frame[6].f = ((-((frame[2].f) - (frame[0].f))) / ((frame[3].f) - (frame[1].f)));
	LINE_NUMBER(519);
	frame[8].f = (((frame[0].f) + (frame[2].f)) / (jfloat(2)));
	LINE_NUMBER(520);
	frame[10].f = (((frame[1].f) + (frame[3].f)) / (jfloat(2)));
	LINE_NUMBER(521);
	frame[12].f = (((frame[4].f) + (frame[2].f)) / (jfloat(2)));
	LINE_NUMBER(522);
	frame[13].f = (((frame[6].f) * ((frame[12].f) - (frame[8].f))) + (frame[10].f));
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(524);
	frame[6].f = ((-((frame[2].f) - (frame[0].f))) / ((frame[3].f) - (frame[1].f)));
	LINE_NUMBER(525);
	frame[7].f = ((-((frame[4].f) - (frame[2].f))) / ((frame[5].f) - (frame[3].f)));
	LINE_NUMBER(526);
	frame[8].f = (((frame[0].f) + (frame[2].f)) / (jfloat(2)));
	LINE_NUMBER(527);
	frame[9].f = (((frame[2].f) + (frame[4].f)) / (jfloat(2)));
	LINE_NUMBER(528);
	frame[10].f = (((frame[1].f) + (frame[3].f)) / (jfloat(2)));
	LINE_NUMBER(529);
	frame[11].f = (((frame[3].f) + (frame[5].f)) / (jfloat(2)));
	LINE_NUMBER(530);
	frame[12].f = ((((((frame[6].f) * (frame[8].f)) - ((frame[7].f) * (frame[9].f))) + (frame[11].f)) - (frame[10].f)) / ((frame[6].f) - (frame[7].f)));
	LINE_NUMBER(531);
	frame[13].f = (((frame[6].f) * ((frame[12].f) - (frame[8].f))) + (frame[10].f));
	}
label_8:;
	{
	LINE_NUMBER(533);
	frame[14].f = ((frame[0].f) - (frame[12].f));
	frame[15].f = ((frame[1].f) - (frame[13].f));
	LINE_NUMBER(534);
	jdouble temp0 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, (jdouble((((frame[14].f) * (frame[14].f)) + ((frame[15].f) * (frame[15].f))))));
	popStackFrame(ctx);
	return (jfloat(temp0));
	}

	popStackFrame(ctx);
}

jfloat SM_arc_math_geom_Geometry_triangleQuality_float_float_float_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5) {
	jtype frame[16];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Geometry:triangleQuality", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Geometry(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	{
	LINE_NUMBER(544);
	jdouble temp0 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, (jdouble((((frame[0].f) * (frame[0].f)) + ((frame[1].f) * (frame[1].f))))));
	frame[6].f = (jfloat(temp0));
	LINE_NUMBER(545);
	jdouble temp1 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, (jdouble((((frame[2].f) * (frame[2].f)) + ((frame[3].f) * (frame[3].f))))));
	frame[7].f = (jfloat(temp1));
	LINE_NUMBER(546);
	jdouble temp2 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, (jdouble((((frame[4].f) * (frame[4].f)) + ((frame[5].f) * (frame[5].f))))));
	frame[8].f = (jfloat(temp2));
	LINE_NUMBER(547);
	jfloat temp3 = frame[6].f;
	jfloat temp4 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, (frame[7].f), (frame[8].f));
	jfloat temp5 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, temp3, temp4);
	jfloat temp6 = (jfloat)SM_arc_math_geom_Geometry_triangleCircumradius_float_float_float_float_float_float_R_float(ctx, (frame[0].f), (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f), (frame[5].f));
	popStackFrame(ctx);
	return (temp5 / temp6);
	}

	popStackFrame(ctx);
}

jfloat SM_arc_math_geom_Geometry_triangleArea_float_float_float_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5) {
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Geometry:triangleArea", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Geometry(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	{
	LINE_NUMBER(551);
	jfloat temp0 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, ((((frame[0].f) - (frame[4].f)) * ((frame[3].f) - (frame[1].f))) - (((frame[0].f) - (frame[2].f)) * ((frame[5].f) - (frame[1].f)))));
	popStackFrame(ctx);
	return (temp0 * (jfloat(0.5f)));
	}

	popStackFrame(ctx);
}

jobject SM_arc_math_geom_Geometry_quadrilateralCentroid_float_float_float_float_float_float_float_float_arc_math_geom_Vec2_R_arc_math_geom_Vec2(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jobject param8) {
	jtype frame[17];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Geometry:quadrilateralCentroid", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Geometry(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	frame[6].f = param6;
	frame[7].f = param7;
	frame[8].o = param8;
	{
	LINE_NUMBER(556);
	frame[9].f = ((((frame[0].f) + (frame[2].f)) + (frame[4].f)) / (jfloat(3.0f)));
	LINE_NUMBER(557);
	frame[10].f = ((((frame[1].f) + (frame[3].f)) + (frame[5].f)) / (jfloat(3.0f)));
	LINE_NUMBER(558);
	frame[11].f = ((((frame[0].f) + (frame[6].f)) + (frame[4].f)) / (jfloat(3.0f)));
	LINE_NUMBER(559);
	frame[12].f = ((((frame[1].f) + (frame[7].f)) + (frame[5].f)) / (jfloat(3.0f)));
	LINE_NUMBER(560);
	((arc_math_geom_Vec2 *) NULL_CHECK((frame[8].o)))->F_x = ((frame[9].f) - (((frame[9].f) - (frame[11].f)) / (jfloat(2))));
	LINE_NUMBER(561);
	((arc_math_geom_Vec2 *) NULL_CHECK((frame[8].o)))->F_y = ((frame[10].f) - (((frame[10].f) - (frame[12].f)) / (jfloat(2))));
	LINE_NUMBER(562);
	popStackFrame(ctx);
	return (frame[8].o);
	}

	popStackFrame(ctx);
}

jobject SM_arc_math_geom_Geometry_polygonCentroid_Array1_float_int_int_arc_math_geom_Vec2_R_arc_math_geom_Vec2(jcontext ctx, jobject param0, jint param1, jint param2, jobject param3) {
	jtype frame[18];
	auto stack = &frame[14];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Geometry:polygonCentroid", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Geometry(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(567);
	if ((frame[2].i) >= (6)) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"A polygon must have 3 or more coordinate pairs."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(568);
	frame[4].f = (jfloat(0));
	frame[5].f = (jfloat(0));
	LINE_NUMBER(570);
	frame[6].f = (jfloat(0));
	LINE_NUMBER(571);
	frame[7].i = (frame[1].i);
	LINE_NUMBER(572);
	frame[8].i = (((frame[1].i) + (frame[2].i)) - (jint(2)));
	}
label_6:;
	{
	if ((frame[7].i) >= (frame[8].i)) goto label_7;
	}
	{
	LINE_NUMBER(573);
	frame[9].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (frame[7].i)));
	LINE_NUMBER(574);
	frame[10].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), ((frame[7].i) + (jint(1)))));
	LINE_NUMBER(575);
	frame[11].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), ((frame[7].i) + (jint(2)))));
	LINE_NUMBER(576);
	frame[12].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), ((frame[7].i) + (jint(3)))));
	LINE_NUMBER(577);
	frame[13].f = (((frame[9].f) * (frame[12].f)) - ((frame[11].f) * (frame[10].f)));
	LINE_NUMBER(578);
	frame[6].f = ((frame[6].f) + (frame[13].f));
	LINE_NUMBER(579);
	frame[4].f = ((frame[4].f) + (((frame[9].f) + (frame[11].f)) * (frame[13].f)));
	LINE_NUMBER(580);
	frame[5].f = ((frame[5].f) + (((frame[10].f) + (frame[12].f)) * (frame[13].f)));
	LINE_NUMBER(572);
	INST_IINC(7, 2);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(583);
	frame[8].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (frame[7].i)));
	LINE_NUMBER(584);
	frame[9].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), ((frame[7].i) + (jint(1)))));
	LINE_NUMBER(585);
	frame[10].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (frame[1].i)));
	LINE_NUMBER(586);
	frame[11].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), ((frame[1].i) + (jint(1)))));
	LINE_NUMBER(587);
	frame[12].f = (((frame[8].f) * (frame[11].f)) - ((frame[10].f) * (frame[9].f)));
	LINE_NUMBER(588);
	frame[6].f = ((frame[6].f) + (frame[12].f));
	LINE_NUMBER(589);
	frame[4].f = ((frame[4].f) + (((frame[8].f) + (frame[10].f)) * (frame[12].f)));
	LINE_NUMBER(590);
	frame[5].f = ((frame[5].f) + (((frame[9].f) + (frame[11].f)) * (frame[12].f)));
	LINE_NUMBER(592);
	if ((floatCompare((frame[6].f), (jfloat(0)), -1)) != 0) goto label_25;
	}
	{
	LINE_NUMBER(593);
	((arc_math_geom_Vec2 *) NULL_CHECK((frame[3].o)))->F_x = (jfloat(0));
	LINE_NUMBER(594);
	((arc_math_geom_Vec2 *) NULL_CHECK((frame[3].o)))->F_y = (jfloat(0));
	goto label_28;
	}
label_25:;
	{
	LINE_NUMBER(596);
	frame[6].f = ((frame[6].f) * (jfloat(0.5f)));
	LINE_NUMBER(597);
	((arc_math_geom_Vec2 *) NULL_CHECK((frame[3].o)))->F_x = ((frame[4].f) / ((jfloat(6.0f)) * (frame[6].f)));
	LINE_NUMBER(598);
	((arc_math_geom_Vec2 *) NULL_CHECK((frame[3].o)))->F_y = ((frame[5].f) / ((jfloat(6.0f)) * (frame[6].f)));
	}
label_28:;
	{
	LINE_NUMBER(600);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jfloat SM_arc_math_geom_Geometry_polygonArea_Array1_float_int_int_R_float(jcontext ctx, jobject param0, jint param1, jint param2) {
	jtype frame[13];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Geometry:polygonArea", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Geometry(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(605);
	frame[3].f = (jfloat(0));
	LINE_NUMBER(606);
	frame[4].i = (frame[1].i);
	frame[5].i = ((frame[1].i) + (frame[2].i));
	}
label_3:;
	{
	if ((frame[4].i) >= (frame[5].i)) goto label_4;
	}
	{
	LINE_NUMBER(607);
	frame[6].i = ((frame[4].i) + (jint(1)));
	LINE_NUMBER(608);
	frame[7].i = (((frame[4].i) + (jint(2))) % (frame[5].i));
	LINE_NUMBER(609);
	if ((frame[7].i) >= (frame[1].i)) goto label_8;
	}
	{
	frame[7].i = ((frame[7].i) + (frame[1].i));
	}
label_8:;
	{
	LINE_NUMBER(610);
	frame[8].i = (((frame[4].i) + (jint(3))) % (frame[5].i));
	LINE_NUMBER(611);
	if ((frame[8].i) >= (frame[1].i)) goto label_10;
	}
	{
	frame[8].i = ((frame[8].i) + (frame[1].i));
	}
label_10:;
	{
	LINE_NUMBER(612);
	frame[3].f = ((frame[3].f) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (frame[4].i))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (frame[8].i)))));
	LINE_NUMBER(613);
	frame[3].f = ((frame[3].f) - (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (frame[7].i))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (frame[6].i)))));
	LINE_NUMBER(606);
	INST_IINC(4, 2);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(615);
	frame[3].f = ((frame[3].f) * (jfloat(0.5f)));
	LINE_NUMBER(616);
	popStackFrame(ctx);
	return (frame[3].f);
	}

	popStackFrame(ctx);
}

void SM_arc_math_geom_Geometry_ensureCCW_Array1_float(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Geometry:ensureCCW", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Geometry(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(620);
	SM_arc_math_geom_Geometry_ensureCCW_Array1_float_int_int(ctx, (frame[0].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[0].o)))->length));
	LINE_NUMBER(621);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_math_geom_Geometry_ensureCCW_Array1_float_int_int(jcontext ctx, jobject param0, jint param1, jint param2) {
	jtype frame[14];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Geometry:ensureCCW", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Geometry(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(624);
	jint temp0 = (jint)SM_arc_math_geom_Geometry_isClockwise_Array1_float_int_int_R_boolean(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	if (temp0 != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(625);
	frame[3].i = (((frame[1].i) + (frame[2].i)) - (jint(2)));
	LINE_NUMBER(626);
	frame[4].i = (frame[1].i);
	frame[5].i = ((frame[1].i) + ((frame[2].i) / (jint(2))));
	}
label_4:;
	{
	if ((frame[4].i) >= (frame[5].i)) goto label_5;
	}
	{
	LINE_NUMBER(627);
	frame[6].i = ((frame[3].i) - (frame[4].i));
	LINE_NUMBER(628);
	frame[7].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (frame[4].i)));
	LINE_NUMBER(629);
	frame[8].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), ((frame[4].i) + (jint(1)))));
	LINE_NUMBER(630);
	ARRAY_ACCESS(jfloat, (frame[0].o), (frame[4].i)) = ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (frame[6].i)));
	LINE_NUMBER(631);
	ARRAY_ACCESS(jfloat, (frame[0].o), ((frame[4].i) + (jint(1)))) = ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), ((frame[6].i) + (jint(1)))));
	LINE_NUMBER(632);
	ARRAY_ACCESS(jfloat, (frame[0].o), (frame[6].i)) = (frame[7].f);
	LINE_NUMBER(633);
	ARRAY_ACCESS(jfloat, (frame[0].o), ((frame[6].i) + (jint(1)))) = (frame[8].f);
	LINE_NUMBER(626);
	INST_IINC(4, 2);
	goto label_4;
	}
label_5:;
	LINE_NUMBER(635);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_arc_math_geom_Geometry_isClockwise_Array1_float_int_int_R_boolean(jcontext ctx, jobject param0, jint param1, jint param2) {
	jtype frame[14];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Geometry:isClockwise", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Geometry(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(638);
	if ((frame[2].i) > (jint(2))) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(639);
	frame[3].f = (jfloat(0));
	LINE_NUMBER(640);
	frame[8].i = (frame[1].i);
	frame[9].i = (((frame[1].i) + (frame[2].i)) - (jint(3)));
	}
label_4:;
	{
	if ((frame[8].i) >= (frame[9].i)) goto label_5;
	}
	{
	LINE_NUMBER(641);
	frame[4].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (frame[8].i)));
	LINE_NUMBER(642);
	frame[5].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), ((frame[8].i) + (jint(1)))));
	LINE_NUMBER(643);
	frame[6].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), ((frame[8].i) + (jint(2)))));
	LINE_NUMBER(644);
	frame[7].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), ((frame[8].i) + (jint(3)))));
	LINE_NUMBER(645);
	frame[3].f = ((frame[3].f) + (((frame[4].f) * (frame[7].f)) - ((frame[6].f) * (frame[5].f))));
	LINE_NUMBER(640);
	INST_IINC(8, 2);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(647);
	frame[4].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (((frame[1].i) + (frame[2].i)) - (jint(2)))));
	LINE_NUMBER(648);
	frame[5].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (((frame[1].i) + (frame[2].i)) - (jint(1)))));
	LINE_NUMBER(649);
	frame[6].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (frame[1].i)));
	LINE_NUMBER(650);
	frame[7].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), ((frame[1].i) + (jint(1)))));
	LINE_NUMBER(651);
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

jfloat SM_arc_math_geom_Geometry_lambda$pixelCircle$1_int_float_java_lang_Integer_R_float(jcontext ctx, jint param0, jfloat param1, jobject param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Geometry:lambda$pixelCircle$1", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Geometry(ctx);
	frame[0].i = param0;
	frame[1].f = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(181);
	jint temp0 = (jint)((func_java_lang_Integer_intValue_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Integer_intValue_R_int])(ctx, (frame[2].o));
	jfloat temp1 = jfloat((temp0 % ((frame[0].i) + (jint(1)))));
	jint temp2 = (jint)((func_java_lang_Integer_intValue_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Integer_intValue_R_int])(ctx, (frame[2].o));
	jfloat temp3 = (jfloat)SM_arc_math_Angles_angle_float_float_float_float_R_float(ctx, temp1, (jfloat((temp2 / ((frame[0].i) + (jint(1)))))), (frame[1].f), (frame[1].f));
	popStackFrame(ctx);
	return temp3;
	}

	popStackFrame(ctx);
}

jbool SM_arc_math_geom_Geometry_lambda$pixelCircle$0_float_int_int_R_boolean(jcontext ctx, jfloat param0, jint param1, jint param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Geometry:lambda$pixelCircle$0", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Geometry(ctx);
	frame[0].f = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(157);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_dst_float_float_float_float_R_float(ctx, (jfloat((frame[1].i))), (jfloat((frame[2].i))), (frame[0].f), (frame[0].f));
	if ((floatCompare(temp0, ((frame[0].f) - (jfloat(0.5f))), 1)) >= 0) goto label_1;
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

void SM_arc_math_geom_Geometry_lambda$vectorsToFloats$0_arc_struct_FloatSeq_arc_math_geom_Vec2(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Geometry:lambda$vectorsToFloats$0", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Geometry(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(85);
	((func_arc_struct_FloatSeq_add_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_FloatSeq_add_float_float])(ctx, (frame[0].o), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_arc_math_geom_Geometry(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[7];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Geometry:<clinit>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Geometry(ctx);
	{
	LINE_NUMBER(9);
	sp[0].o = (jobject)createArray(ctx, &class_arc_math_geom_Point2, (jint(4)));
	jint temp0 = jint(0);
	clinit_arc_math_geom_Point2(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Point2);
	init_arc_math_geom_Point2_int_int(ctx, sp[1].o, (jint(1)), (jint(0)));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_arc_math_geom_Point2(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Point2);
	init_arc_math_geom_Point2_int_int(ctx, sp[1].o, (jint(0)), (jint(1)));
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_arc_math_geom_Point2(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Point2);
	init_arc_math_geom_Point2_int_int(ctx, sp[1].o, (jint(-1)), (jint(0)));
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(3);
	clinit_arc_math_geom_Point2(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Point2);
	init_arc_math_geom_Point2_int_int(ctx, sp[1].o, (jint(0)), (jint(-1)));
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	clinit_arc_math_geom_Geometry(ctx);
	SF_arc_math_geom_Geometry_d4 = sp[0].o;
	LINE_NUMBER(16);
	sp[0].o = (jobject)createArray(ctx, &class_arc_math_geom_Point2, (jint(5)));
	jint temp4 = jint(0);
	clinit_arc_math_geom_Point2(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Point2);
	init_arc_math_geom_Point2_int_int(ctx, sp[1].o, (jint(1)), (jint(0)));
	ARRAY_ACCESS(jobject, sp[0].o, temp4) = sp[1].o;
	jint temp5 = jint(1);
	clinit_arc_math_geom_Point2(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Point2);
	init_arc_math_geom_Point2_int_int(ctx, sp[1].o, (jint(0)), (jint(1)));
	ARRAY_ACCESS(jobject, sp[0].o, temp5) = sp[1].o;
	jint temp6 = jint(2);
	clinit_arc_math_geom_Point2(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Point2);
	init_arc_math_geom_Point2_int_int(ctx, sp[1].o, (jint(-1)), (jint(0)));
	ARRAY_ACCESS(jobject, sp[0].o, temp6) = sp[1].o;
	jint temp7 = jint(3);
	clinit_arc_math_geom_Point2(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Point2);
	init_arc_math_geom_Point2_int_int(ctx, sp[1].o, (jint(0)), (jint(-1)));
	ARRAY_ACCESS(jobject, sp[0].o, temp7) = sp[1].o;
	jint temp8 = jint(4);
	clinit_arc_math_geom_Point2(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Point2);
	init_arc_math_geom_Point2_int_int(ctx, sp[1].o, (jint(0)), (jint(0)));
	ARRAY_ACCESS(jobject, sp[0].o, temp8) = sp[1].o;
	clinit_arc_math_geom_Geometry(ctx);
	SF_arc_math_geom_Geometry_d4c = sp[0].o;
	LINE_NUMBER(23);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(4)));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (jint(1));
	ARRAY_ACCESS(jint, sp[0].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jint, sp[0].o, (jint(2))) = (jint(-1));
	ARRAY_ACCESS(jint, sp[0].o, (jint(3))) = (jint(0));
	clinit_arc_math_geom_Geometry(ctx);
	SF_arc_math_geom_Geometry_d4x = sp[0].o;
	LINE_NUMBER(24);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(4)));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[0].o, (jint(1))) = (jint(1));
	ARRAY_ACCESS(jint, sp[0].o, (jint(2))) = (jint(0));
	ARRAY_ACCESS(jint, sp[0].o, (jint(3))) = (jint(-1));
	clinit_arc_math_geom_Geometry(ctx);
	SF_arc_math_geom_Geometry_d4y = sp[0].o;
	LINE_NUMBER(25);
	sp[0].o = (jobject)createArray(ctx, &class_arc_math_geom_Point2, (8));
	jint temp9 = jint(0);
	clinit_arc_math_geom_Point2(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Point2);
	init_arc_math_geom_Point2_int_int(ctx, sp[1].o, (jint(1)), (jint(0)));
	ARRAY_ACCESS(jobject, sp[0].o, temp9) = sp[1].o;
	jint temp10 = jint(1);
	clinit_arc_math_geom_Point2(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Point2);
	init_arc_math_geom_Point2_int_int(ctx, sp[1].o, (jint(1)), (jint(1)));
	ARRAY_ACCESS(jobject, sp[0].o, temp10) = sp[1].o;
	jint temp11 = jint(2);
	clinit_arc_math_geom_Point2(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Point2);
	init_arc_math_geom_Point2_int_int(ctx, sp[1].o, (jint(0)), (jint(1)));
	ARRAY_ACCESS(jobject, sp[0].o, temp11) = sp[1].o;
	jint temp12 = jint(3);
	clinit_arc_math_geom_Point2(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Point2);
	init_arc_math_geom_Point2_int_int(ctx, sp[1].o, (jint(-1)), (jint(1)));
	ARRAY_ACCESS(jobject, sp[0].o, temp12) = sp[1].o;
	jint temp13 = jint(4);
	clinit_arc_math_geom_Point2(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Point2);
	init_arc_math_geom_Point2_int_int(ctx, sp[1].o, (jint(-1)), (jint(0)));
	ARRAY_ACCESS(jobject, sp[0].o, temp13) = sp[1].o;
	jint temp14 = jint(5);
	clinit_arc_math_geom_Point2(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Point2);
	init_arc_math_geom_Point2_int_int(ctx, sp[1].o, (jint(-1)), (jint(-1)));
	ARRAY_ACCESS(jobject, sp[0].o, temp14) = sp[1].o;
	jint temp15 = 6;
	clinit_arc_math_geom_Point2(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Point2);
	init_arc_math_geom_Point2_int_int(ctx, sp[1].o, (jint(0)), (jint(-1)));
	ARRAY_ACCESS(jobject, sp[0].o, temp15) = sp[1].o;
	jint temp16 = 7;
	clinit_arc_math_geom_Point2(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Point2);
	init_arc_math_geom_Point2_int_int(ctx, sp[1].o, (jint(1)), (jint(-1)));
	ARRAY_ACCESS(jobject, sp[0].o, temp16) = sp[1].o;
	clinit_arc_math_geom_Geometry(ctx);
	SF_arc_math_geom_Geometry_d8 = sp[0].o;
	LINE_NUMBER(35);
	sp[0].o = (jobject)createArray(ctx, &class_arc_math_geom_Point2, (jint(4)));
	jint temp17 = jint(0);
	clinit_arc_math_geom_Point2(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Point2);
	init_arc_math_geom_Point2_int_int(ctx, sp[1].o, (jint(1)), (jint(1)));
	ARRAY_ACCESS(jobject, sp[0].o, temp17) = sp[1].o;
	jint temp18 = jint(1);
	clinit_arc_math_geom_Point2(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Point2);
	init_arc_math_geom_Point2_int_int(ctx, sp[1].o, (jint(-1)), (jint(1)));
	ARRAY_ACCESS(jobject, sp[0].o, temp18) = sp[1].o;
	jint temp19 = jint(2);
	clinit_arc_math_geom_Point2(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Point2);
	init_arc_math_geom_Point2_int_int(ctx, sp[1].o, (jint(-1)), (jint(-1)));
	ARRAY_ACCESS(jobject, sp[0].o, temp19) = sp[1].o;
	jint temp20 = jint(3);
	clinit_arc_math_geom_Point2(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Point2);
	init_arc_math_geom_Point2_int_int(ctx, sp[1].o, (jint(1)), (jint(-1)));
	ARRAY_ACCESS(jobject, sp[0].o, temp20) = sp[1].o;
	clinit_arc_math_geom_Geometry(ctx);
	SF_arc_math_geom_Geometry_d8edge = sp[0].o;
	LINE_NUMBER(41);
	clinit_arc_math_geom_Vec2(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[0].o);
	clinit_arc_math_geom_Geometry(ctx);
	SF_arc_math_geom_Geometry_tmp1 = sp[0].o;
	clinit_arc_math_geom_Vec2(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[0].o);
	clinit_arc_math_geom_Geometry(ctx);
	SF_arc_math_geom_Geometry_tmp2 = sp[0].o;
	clinit_arc_math_geom_Vec2(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[0].o);
	clinit_arc_math_geom_Geometry(ctx);
	SF_arc_math_geom_Geometry_tmp3 = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_math_geom_Geometry[] {
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
};

static jclass innerClasses[] {
	&class_arc_math_geom_Geometry$SolidChecker,
	&class_arc_math_geom_Geometry$Raycaster,
};

static FieldMetadata fields[] {
	{ "d4", getArrayClass(&class_arc_math_geom_Point2, 1), (intptr_t) &SF_arc_math_geom_Geometry_d4, "[Larc/math/geom/Point2;", 25 },
	{ "d4c", getArrayClass(&class_arc_math_geom_Point2, 1), (intptr_t) &SF_arc_math_geom_Geometry_d4c, "[Larc/math/geom/Point2;", 25 },
	{ "d4x", getArrayClass(&class_int, 1), (intptr_t) &SF_arc_math_geom_Geometry_d4x, "[I", 25 },
	{ "d4y", getArrayClass(&class_int, 1), (intptr_t) &SF_arc_math_geom_Geometry_d4y, "[I", 25 },
	{ "d8", getArrayClass(&class_arc_math_geom_Point2, 1), (intptr_t) &SF_arc_math_geom_Geometry_d8, "[Larc/math/geom/Point2;", 25 },
	{ "d8edge", getArrayClass(&class_arc_math_geom_Point2, 1), (intptr_t) &SF_arc_math_geom_Geometry_d8edge, "[Larc/math/geom/Point2;", 25 },
	{ "tmp1", &class_arc_math_geom_Vec2, (intptr_t) &SF_arc_math_geom_Geometry_tmp1, "Larc/math/geom/Vec2;", 26 },
	{ "tmp2", &class_arc_math_geom_Vec2, (intptr_t) &SF_arc_math_geom_Geometry_tmp2, "Larc/math/geom/Vec2;", 26 },
	{ "tmp3", &class_arc_math_geom_Vec2, (intptr_t) &SF_arc_math_geom_Geometry_tmp3, "Larc/math/geom/Vec2;", 26 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_math_geom_Geometry, 0, "()V", 1 },
	{ "d4", (intptr_t) SM_arc_math_geom_Geometry_d4_int_R_arc_math_geom_Point2, 0, "(I)Larc/math/geom/Point2;", 9 },
	{ "d4x", (intptr_t) SM_arc_math_geom_Geometry_d4x_int_R_int, 0, "(I)I", 9 },
	{ "d4y", (intptr_t) SM_arc_math_geom_Geometry_d4y_int_R_int, 0, "(I)I", 9 },
	{ "d8", (intptr_t) SM_arc_math_geom_Geometry_d8_int_R_arc_math_geom_Point2, 0, "(I)Larc/math/geom/Point2;", 9 },
	{ "d8edge", (intptr_t) SM_arc_math_geom_Geometry_d8edge_int_R_arc_math_geom_Point2, 0, "(I)Larc/math/geom/Point2;", 9 },
	{ "circle", (intptr_t) SM_arc_math_geom_Geometry_circle_int_int_int_arc_func_Intc2, 0, "(IIILarc/func/Intc2;)V", 9 },
	{ "circle", (intptr_t) SM_arc_math_geom_Geometry_circle_int_int_int_int_int_arc_func_Intc2, 0, "(IIIIILarc/func/Intc2;)V", 9 },
	{ "vectorsToFloats", (intptr_t) SM_arc_math_geom_Geometry_vectorsToFloats_arc_struct_Seq_R_arc_struct_FloatSeq, 0, "(Larc/struct/Seq;)Larc/struct/FloatSeq;", 9 },
	{ "findClosest", (intptr_t) SM_arc_math_geom_Geometry_findClosest_float_float_Array1_arc_math_geom_Position_R_arc_math_geom_Position, 0, "(FF[Larc/math/geom/Position;)Larc/math/geom/Position;", 9 },
	{ "findClosest", (intptr_t) SM_arc_math_geom_Geometry_findClosest_float_float_java_lang_Iterable_R_arc_math_geom_Position, 0, "(FFLjava/lang/Iterable;)Larc/math/geom/Position;", 9 },
	{ "findClosest", (intptr_t) SM_arc_math_geom_Geometry_findClosest_float_float_java_lang_Iterable_arc_func_Boolf_R_arc_math_geom_Position, 0, "(FFLjava/lang/Iterable;Larc/func/Boolf;)Larc/math/geom/Position;", 9 },
	{ "findFurthest", (intptr_t) SM_arc_math_geom_Geometry_findFurthest_float_float_java_lang_Iterable_R_arc_math_geom_Position, 0, "(FFLjava/lang/Iterable;)Larc/math/geom/Position;", 9 },
	{ "findFurthest", (intptr_t) SM_arc_math_geom_Geometry_findFurthest_float_float_java_lang_Iterable_arc_func_Boolf_R_arc_math_geom_Position, 0, "(FFLjava/lang/Iterable;Larc/func/Boolf;)Larc/math/geom/Position;", 9 },
	{ "pixelCircle", (intptr_t) SM_arc_math_geom_Geometry_pixelCircle_float_R_Array1_arc_math_geom_Vec2, 0, "(F)[Larc/math/geom/Vec2;", 9 },
	{ "pixelCircle", (intptr_t) SM_arc_math_geom_Geometry_pixelCircle_float_arc_math_geom_Geometry$SolidChecker_R_Array1_arc_math_geom_Vec2, 0, "(FLarc/math/geom/Geometry$SolidChecker;)[Larc/math/geom/Vec2;", 9 },
	{ "regPoly", (intptr_t) SM_arc_math_geom_Geometry_regPoly_int_float_R_Array1_float, 0, "(IF)[F", 9 },
	{ "iterateLine", (intptr_t) SM_arc_math_geom_Geometry_iterateLine_float_float_float_float_float_float_arc_func_Floatc2_R_float, 0, "(FFFFFFLarc/func/Floatc2;)F", 9 },
	{ "iteratePolySegments", (intptr_t) SM_arc_math_geom_Geometry_iteratePolySegments_Array1_float_arc_func_Floatc4, 0, "([FLarc/func/Floatc4;)V", 9 },
	{ "iteratePolygon", (intptr_t) SM_arc_math_geom_Geometry_iteratePolygon_arc_func_Floatc2_Array1_float, 0, "(Larc/func/Floatc2;[F)V", 9 },
	{ "getD4Points", (intptr_t) SM_arc_math_geom_Geometry_getD4Points_R_Array1_arc_math_geom_Point2, 0, "()[Larc/math/geom/Point2;", 9 },
	{ "getD8Points", (intptr_t) SM_arc_math_geom_Geometry_getD8Points_R_Array1_arc_math_geom_Point2, 0, "()[Larc/math/geom/Point2;", 9 },
	{ "getD8EdgePoints", (intptr_t) SM_arc_math_geom_Geometry_getD8EdgePoints_R_Array1_arc_math_geom_Point2, 0, "()[Larc/math/geom/Point2;", 9 },
	{ "raycast", (intptr_t) SM_arc_math_geom_Geometry_raycast_int_int_int_int_arc_math_geom_Geometry$Raycaster_R_boolean, 0, "(IIIILarc/math/geom/Geometry$Raycaster;)Z", 9 },
	{ "raycastRect", (intptr_t) SM_arc_math_geom_Geometry_raycastRect_float_float_float_float_arc_math_geom_Rect_R_arc_math_geom_Vec2, 0, "(FFFFLarc/math/geom/Rect;)Larc/math/geom/Vec2;", 9 },
	{ "raycastRect", (intptr_t) SM_arc_math_geom_Geometry_raycastRect_float_float_float_float_float_float_float_float_R_arc_math_geom_Vec2, 0, "(FFFFFFFF)Larc/math/geom/Vec2;", 9 },
	{ "overlap", (intptr_t) SM_arc_math_geom_Geometry_overlap_arc_math_geom_Rect_arc_math_geom_Rect_boolean_R_arc_math_geom_Vec2, 0, "(Larc/math/geom/Rect;Larc/math/geom/Rect;Z)Larc/math/geom/Vec2;", 9 },
	{ "toBarycoord", (intptr_t) SM_arc_math_geom_Geometry_toBarycoord_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_R_arc_math_geom_Vec2, 0, "(Larc/math/geom/Vec2;Larc/math/geom/Vec2;Larc/math/geom/Vec2;Larc/math/geom/Vec2;Larc/math/geom/Vec2;)Larc/math/geom/Vec2;", 9 },
	{ "barycoordInsideTriangle", (intptr_t) SM_arc_math_geom_Geometry_barycoordInsideTriangle_arc_math_geom_Vec2_R_boolean, 0, "(Larc/math/geom/Vec2;)Z", 9 },
	{ "fromBarycoord", (intptr_t) SM_arc_math_geom_Geometry_fromBarycoord_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_R_arc_math_geom_Vec2, 0, "(Larc/math/geom/Vec2;Larc/math/geom/Vec2;Larc/math/geom/Vec2;Larc/math/geom/Vec2;Larc/math/geom/Vec2;)Larc/math/geom/Vec2;", 9 },
	{ "fromBarycoord", (intptr_t) SM_arc_math_geom_Geometry_fromBarycoord_arc_math_geom_Vec2_float_float_float_R_float, 0, "(Larc/math/geom/Vec2;FFF)F", 9 },
	{ "lowestPositiveRoot", (intptr_t) SM_arc_math_geom_Geometry_lowestPositiveRoot_float_float_float_R_float, 0, "(FFF)F", 9 },
	{ "colinear", (intptr_t) SM_arc_math_geom_Geometry_colinear_float_float_float_float_float_float_R_boolean, 0, "(FFFFFF)Z", 9 },
	{ "triangleCentroid", (intptr_t) SM_arc_math_geom_Geometry_triangleCentroid_float_float_float_float_float_float_arc_math_geom_Vec2_R_arc_math_geom_Vec2, 0, "(FFFFFFLarc/math/geom/Vec2;)Larc/math/geom/Vec2;", 9 },
	{ "triangleCircumcenter", (intptr_t) SM_arc_math_geom_Geometry_triangleCircumcenter_float_float_float_float_float_float_arc_math_geom_Vec2_R_arc_math_geom_Vec2, 0, "(FFFFFFLarc/math/geom/Vec2;)Larc/math/geom/Vec2;", 9 },
	{ "triangleCircumradius", (intptr_t) SM_arc_math_geom_Geometry_triangleCircumradius_float_float_float_float_float_float_R_float, 0, "(FFFFFF)F", 9 },
	{ "triangleQuality", (intptr_t) SM_arc_math_geom_Geometry_triangleQuality_float_float_float_float_float_float_R_float, 0, "(FFFFFF)F", 9 },
	{ "triangleArea", (intptr_t) SM_arc_math_geom_Geometry_triangleArea_float_float_float_float_float_float_R_float, 0, "(FFFFFF)F", 9 },
	{ "quadrilateralCentroid", (intptr_t) SM_arc_math_geom_Geometry_quadrilateralCentroid_float_float_float_float_float_float_float_float_arc_math_geom_Vec2_R_arc_math_geom_Vec2, 0, "(FFFFFFFFLarc/math/geom/Vec2;)Larc/math/geom/Vec2;", 9 },
	{ "polygonCentroid", (intptr_t) SM_arc_math_geom_Geometry_polygonCentroid_Array1_float_int_int_arc_math_geom_Vec2_R_arc_math_geom_Vec2, 0, "([FIILarc/math/geom/Vec2;)Larc/math/geom/Vec2;", 9 },
	{ "polygonArea", (intptr_t) SM_arc_math_geom_Geometry_polygonArea_Array1_float_int_int_R_float, 0, "([FII)F", 9 },
	{ "ensureCCW", (intptr_t) SM_arc_math_geom_Geometry_ensureCCW_Array1_float, 0, "([F)V", 9 },
	{ "ensureCCW", (intptr_t) SM_arc_math_geom_Geometry_ensureCCW_Array1_float_int_int, 0, "([FII)V", 9 },
	{ "isClockwise", (intptr_t) SM_arc_math_geom_Geometry_isClockwise_Array1_float_int_int_R_boolean, 0, "([FII)Z", 9 },
	{ "lambda$pixelCircle$1", (intptr_t) SM_arc_math_geom_Geometry_lambda$pixelCircle$1_int_float_java_lang_Integer_R_float, 0, "(IFLjava/lang/Integer;)F", 4106 },
	{ "lambda$pixelCircle$0", (intptr_t) SM_arc_math_geom_Geometry_lambda$pixelCircle$0_float_int_int_R_boolean, 0, "(FII)Z", 4106 },
	{ "lambda$vectorsToFloats$0", (intptr_t) SM_arc_math_geom_Geometry_lambda$vectorsToFloats$0_arc_struct_FloatSeq_arc_math_geom_Vec2, 0, "(Larc/struct/FloatSeq;Larc/math/geom/Vec2;)V", 4106 },
	{ "<clinit>", (intptr_t) clinit_arc_math_geom_Geometry, 0, "()V", 8 },
};

Class class_arc_math_geom_Geometry{
		.nativeName = (intptr_t) "arc/math/geom/Geometry",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_math_geom_Geometry),
		.classVtable = (intptr_t) vtable_arc_math_geom_Geometry,
		.staticInitializer = (intptr_t) clinit_arc_math_geom_Geometry,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_math_geom_Geometry,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 2,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 9,
		.nativeFields = (intptr_t) fields,
		.methodCount = 48,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_math_geom_Geometry = registerClass(&class_arc_math_geom_Geometry);

}
