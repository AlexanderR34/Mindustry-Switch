#include "java/util/Comparator.h"
#include "java/util/function/ToLongFunction.h"
#include "java/util/Comparators_NullComparator.h"
#include "java/lang/Integer.h"
#include "java/util/function/ToDoubleFunction.h"
#include "java/util/function/Function.h"
#include "java/lang/Comparable.h"
#include "java/util/function/ToIntFunction.h"
#include "java/lang/Long.h"
#include "java/util/Comparator_invoke_java_util_Comparator_0.h"
#include "java/lang/Object.h"
#include "java/util/Comparator_invoke_java_util_Comparator_1.h"
#include "java/util/Comparator_invoke_java_util_Comparator_2.h"
#include "java/util/Collections.h"
#include "java/util/Comparator.h"
#include "java/util/Objects.h"
#include "java/util/Comparator_invoke_java_util_Comparator_3.h"
#include "java/util/Comparator_invoke_java_util_Comparator_4.h"
#include "java/lang/Double.h"
#include "java/util/Comparator_invoke_java_util_Comparator_5.h"
#include "java/util/Comparators_NaturalOrderComparator.h"

extern "C" {


void mark_java_util_Comparator(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_Comparator *) object;
}

void clinit_java_util_Comparator(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

jobject M_java_util_Comparator_reversed_R_java_util_Comparator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Comparator:reversed", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(89);
	sp[0].o = (jobject)SM_java_util_Collections_reverseOrder_java_util_Comparator_R_java_util_Comparator(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_Comparator_thenComparing_java_util_Comparator_R_java_util_Comparator(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Comparator:thenComparing", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(118);
	sp[0].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, (frame[1].o));
	LINE_NUMBER(119);
	{ /* InvokeDynamic */
		clinit_java_util_Comparator_invoke_java_util_Comparator_0(ctx);
		auto proxy = (java_util_Comparator_invoke_java_util_Comparator_0 *) gcAlloc(ctx, &class_java_util_Comparator_invoke_java_util_Comparator_0);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_Comparator_thenComparing_java_util_function_Function_java_util_Comparator_R_java_util_Comparator(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Comparator:thenComparing", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(146);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_util_Comparator_comparing_java_util_function_Function_java_util_Comparator_R_java_util_Comparator(ctx, (frame[1].o), (frame[2].o));
	sp[0].o = (jobject)((func_java_util_Comparator_thenComparing_java_util_Comparator_R_java_util_Comparator) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_thenComparing_java_util_Comparator_R_java_util_Comparator, sp[0].o))(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_Comparator_thenComparing_java_util_function_Function_R_java_util_Comparator(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Comparator:thenComparing", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(169);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_util_Comparator_comparing_java_util_function_Function_R_java_util_Comparator(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_util_Comparator_thenComparing_java_util_Comparator_R_java_util_Comparator) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_thenComparing_java_util_Comparator_R_java_util_Comparator, sp[0].o))(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_Comparator_thenComparingInt_java_util_function_ToIntFunction_R_java_util_Comparator(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Comparator:thenComparingInt", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(188);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_util_Comparator_comparingInt_java_util_function_ToIntFunction_R_java_util_Comparator(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_util_Comparator_thenComparing_java_util_Comparator_R_java_util_Comparator) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_thenComparing_java_util_Comparator_R_java_util_Comparator, sp[0].o))(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_Comparator_thenComparingLong_java_util_function_ToLongFunction_R_java_util_Comparator(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Comparator:thenComparingLong", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(207);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_util_Comparator_comparingLong_java_util_function_ToLongFunction_R_java_util_Comparator(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_util_Comparator_thenComparing_java_util_Comparator_R_java_util_Comparator) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_thenComparing_java_util_Comparator_R_java_util_Comparator, sp[0].o))(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_Comparator_thenComparingDouble_java_util_function_ToDoubleFunction_R_java_util_Comparator(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Comparator:thenComparingDouble", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(226);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_util_Comparator_comparingDouble_java_util_function_ToDoubleFunction_R_java_util_Comparator(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_util_Comparator_thenComparing_java_util_Comparator_R_java_util_Comparator) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_thenComparing_java_util_Comparator_R_java_util_Comparator, sp[0].o))(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_Comparator_reverseOrder_R_java_util_Comparator(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Comparator:reverseOrder", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Comparator(ctx);
	{
	LINE_NUMBER(243);
	sp[0].o = (jobject)SM_java_util_Collections_reverseOrder_R_java_util_Comparator(ctx);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_Comparator_naturalOrder_R_java_util_Comparator(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Comparator:naturalOrder", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Comparator(ctx);
	{
	LINE_NUMBER(261);
	clinit_java_util_Comparators$NaturalOrderComparator(ctx);
	sp[0].o = (jobject)SF_java_util_Comparators$NaturalOrderComparator_INSTANCE;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_Comparator_nullsFirst_java_util_Comparator_R_java_util_Comparator(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Comparator:nullsFirst", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Comparator(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(282);
	clinit_java_util_Comparators$NullComparator(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Comparators$NullComparator);
	init_java_util_Comparators$NullComparator_boolean_java_util_Comparator(ctx, sp[0].o, (jint(1)), (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_Comparator_nullsLast_java_util_Comparator_R_java_util_Comparator(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Comparator:nullsLast", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Comparator(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(303);
	clinit_java_util_Comparators$NullComparator(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Comparators$NullComparator);
	init_java_util_Comparators$NullComparator_boolean_java_util_Comparator(ctx, sp[0].o, (jint(0)), (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_Comparator_comparing_java_util_function_Function_java_util_Comparator_R_java_util_Comparator(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Comparator:comparing", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Comparator(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(337);
	sp[0].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(338);
	sp[0].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, (frame[1].o));
	LINE_NUMBER(339);
	{ /* InvokeDynamic */
		clinit_java_util_Comparator_invoke_java_util_Comparator_1(ctx);
		auto proxy = (java_util_Comparator_invoke_java_util_Comparator_1 *) gcAlloc(ctx, &class_java_util_Comparator_invoke_java_util_Comparator_1);
		proxy->F_field1 = (jref) (frame[0].o);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[0].o = (jobject) proxy;
	}
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_Comparator_comparing_java_util_function_Function_R_java_util_Comparator(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Comparator:comparing", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Comparator(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(371);
	sp[0].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(372);
	{ /* InvokeDynamic */
		clinit_java_util_Comparator_invoke_java_util_Comparator_2(ctx);
		auto proxy = (java_util_Comparator_invoke_java_util_Comparator_2 *) gcAlloc(ctx, &class_java_util_Comparator_invoke_java_util_Comparator_2);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_Comparator_comparingInt_java_util_function_ToIntFunction_R_java_util_Comparator(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Comparator:comparingInt", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Comparator(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(392);
	sp[0].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(393);
	{ /* InvokeDynamic */
		clinit_java_util_Comparator_invoke_java_util_Comparator_3(ctx);
		auto proxy = (java_util_Comparator_invoke_java_util_Comparator_3 *) gcAlloc(ctx, &class_java_util_Comparator_invoke_java_util_Comparator_3);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_Comparator_comparingLong_java_util_function_ToLongFunction_R_java_util_Comparator(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Comparator:comparingLong", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Comparator(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(413);
	sp[0].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(414);
	{ /* InvokeDynamic */
		clinit_java_util_Comparator_invoke_java_util_Comparator_4(ctx);
		auto proxy = (java_util_Comparator_invoke_java_util_Comparator_4 *) gcAlloc(ctx, &class_java_util_Comparator_invoke_java_util_Comparator_4);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_Comparator_comparingDouble_java_util_function_ToDoubleFunction_R_java_util_Comparator(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Comparator:comparingDouble", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Comparator(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(434);
	sp[0].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(435);
	{ /* InvokeDynamic */
		clinit_java_util_Comparator_invoke_java_util_Comparator_5(ctx);
		auto proxy = (java_util_Comparator_invoke_java_util_Comparator_5 *) gcAlloc(ctx, &class_java_util_Comparator_invoke_java_util_Comparator_5);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint SM_java_util_Comparator_lambda$comparingDouble$5_java_util_function_ToDoubleFunction_java_lang_Object_java_lang_Object_R_int(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Comparator:lambda$comparingDouble$5", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Comparator(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(436);
	jdouble temp0 = (jdouble)((func_java_util_function_ToDoubleFunction_applyAsDouble_java_lang_Object_R_double) resolveInterfaceMethod(ctx, &class_java_util_function_ToDoubleFunction, INDEX_java_util_function_ToDoubleFunction_applyAsDouble_java_lang_Object_R_double, (frame[0].o)))(ctx, (frame[0].o), (frame[1].o));
	jdouble temp1 = (jdouble)((func_java_util_function_ToDoubleFunction_applyAsDouble_java_lang_Object_R_double) resolveInterfaceMethod(ctx, &class_java_util_function_ToDoubleFunction, INDEX_java_util_function_ToDoubleFunction_applyAsDouble_java_lang_Object_R_double, (frame[0].o)))(ctx, (frame[0].o), (frame[2].o));
	jint temp2 = (jint)SM_java_lang_Double_compare_double_double_R_int(ctx, temp0, temp1);
	popStackFrame(ctx);
	return temp2;
	}

	popStackFrame(ctx);
}

jint SM_java_util_Comparator_lambda$comparingLong$4_java_util_function_ToLongFunction_java_lang_Object_java_lang_Object_R_int(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Comparator:lambda$comparingLong$4", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Comparator(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(415);
	jlong temp0 = (jlong)((func_java_util_function_ToLongFunction_applyAsLong_java_lang_Object_R_long) resolveInterfaceMethod(ctx, &class_java_util_function_ToLongFunction, INDEX_java_util_function_ToLongFunction_applyAsLong_java_lang_Object_R_long, (frame[0].o)))(ctx, (frame[0].o), (frame[1].o));
	jlong temp1 = (jlong)((func_java_util_function_ToLongFunction_applyAsLong_java_lang_Object_R_long) resolveInterfaceMethod(ctx, &class_java_util_function_ToLongFunction, INDEX_java_util_function_ToLongFunction_applyAsLong_java_lang_Object_R_long, (frame[0].o)))(ctx, (frame[0].o), (frame[2].o));
	jint temp2 = (jint)SM_java_lang_Long_compare_long_long_R_int(ctx, temp0, temp1);
	popStackFrame(ctx);
	return temp2;
	}

	popStackFrame(ctx);
}

jint SM_java_util_Comparator_lambda$comparingInt$3_java_util_function_ToIntFunction_java_lang_Object_java_lang_Object_R_int(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Comparator:lambda$comparingInt$3", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Comparator(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(394);
	jint temp0 = (jint)((func_java_util_function_ToIntFunction_applyAsInt_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_function_ToIntFunction, INDEX_java_util_function_ToIntFunction_applyAsInt_java_lang_Object_R_int, (frame[0].o)))(ctx, (frame[0].o), (frame[1].o));
	jint temp1 = (jint)((func_java_util_function_ToIntFunction_applyAsInt_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_function_ToIntFunction, INDEX_java_util_function_ToIntFunction_applyAsInt_java_lang_Object_R_int, (frame[0].o)))(ctx, (frame[0].o), (frame[2].o));
	jint temp2 = (jint)SM_java_lang_Integer_compare_int_int_R_int(ctx, temp0, temp1);
	popStackFrame(ctx);
	return temp2;
	}

	popStackFrame(ctx);
}

jint SM_java_util_Comparator_lambda$comparing$2_java_util_function_Function_java_lang_Object_java_lang_Object_R_int(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Comparator:lambda$comparing$2", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Comparator(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(373);
	sp[0].o = (jobject)((func_java_util_function_Function_apply_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_function_Function, INDEX_java_util_function_Function_apply_java_lang_Object_R_java_lang_Object, (frame[0].o)))(ctx, (frame[0].o), (frame[1].o));
	sp[0].o = checkCast(ctx, &class_java_lang_Comparable, sp[0].o);
	sp[1].o = (jobject)((func_java_util_function_Function_apply_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_function_Function, INDEX_java_util_function_Function_apply_java_lang_Object_R_java_lang_Object, (frame[0].o)))(ctx, (frame[0].o), (frame[2].o));
	jint temp0 = (jint)((func_java_lang_Comparable_compareTo_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_lang_Comparable, INDEX_java_lang_Comparable_compareTo_java_lang_Object_R_int, sp[0].o))(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint SM_java_util_Comparator_lambda$comparing$1_java_util_Comparator_java_util_function_Function_java_lang_Object_java_lang_Object_R_int(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Comparator:lambda$comparing$1", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Comparator(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(340);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_util_function_Function_apply_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_function_Function, INDEX_java_util_function_Function_apply_java_lang_Object_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o), (frame[2].o));
	sp[2].o = frame[1].o;
	sp[3].o = frame[3].o;
	LINE_NUMBER(341);
	sp[2].o = (jobject)((func_java_util_function_Function_apply_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_function_Function, INDEX_java_util_function_Function_apply_java_lang_Object_R_java_lang_Object, sp[2].o))(ctx, sp[2].o, sp[3].o);
	LINE_NUMBER(340);
	jint temp0 = (jint)((func_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_java_util_Comparator_lambda$thenComparing$0_java_util_Comparator_java_lang_Object_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Comparator:lambda$thenComparing$0", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(120);
	jint temp0 = (jint)((func_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, (frame[0].o)))(ctx, (frame[0].o), (frame[2].o), (frame[3].o));
	frame[4].i = temp0;
	LINE_NUMBER(121);
	if ((frame[4].i) == 0) goto label_2;
	}
	INST_ILOAD(4);
	goto label_3;
label_2:;
	{
	jint temp0 = (jint)((func_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, (frame[1].o)))(ctx, (frame[1].o), (frame[2].o), (frame[3].o));
	sp[0].i = temp0;
	sp += 1;
	}
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void *vtable_java_util_Comparator[] {
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
	(void *) nullptr,
	(void *) M_java_util_Comparator_reversed_R_java_util_Comparator,
	(void *) M_java_util_Comparator_thenComparing_java_util_Comparator_R_java_util_Comparator,
	(void *) M_java_util_Comparator_thenComparing_java_util_function_Function_java_util_Comparator_R_java_util_Comparator,
	(void *) M_java_util_Comparator_thenComparing_java_util_function_Function_R_java_util_Comparator,
	(void *) M_java_util_Comparator_thenComparingInt_java_util_function_ToIntFunction_R_java_util_Comparator,
	(void *) M_java_util_Comparator_thenComparingLong_java_util_function_ToLongFunction_R_java_util_Comparator,
	(void *) M_java_util_Comparator_thenComparingDouble_java_util_function_ToDoubleFunction_R_java_util_Comparator,
	(void *) M_java_util_Comparator_lambda$thenComparing$0_java_util_Comparator_java_lang_Object_java_lang_Object_R_int,
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
	{ "compare", "(Ljava/lang/Object;Ljava/lang/Object;)I" },
	{ "reversed", "()Ljava/util/Comparator;" },
	{ "thenComparing", "(Ljava/util/Comparator;)Ljava/util/Comparator;" },
	{ "thenComparing", "(Ljava/util/function/Function;Ljava/util/Comparator;)Ljava/util/Comparator;" },
	{ "thenComparing", "(Ljava/util/function/Function;)Ljava/util/Comparator;" },
	{ "thenComparingInt", "(Ljava/util/function/ToIntFunction;)Ljava/util/Comparator;" },
	{ "thenComparingLong", "(Ljava/util/function/ToLongFunction;)Ljava/util/Comparator;" },
	{ "thenComparingDouble", "(Ljava/util/function/ToDoubleFunction;)Ljava/util/Comparator;" },
	{ "lambda$thenComparing$0", "(Ljava/util/Comparator;Ljava/lang/Object;Ljava/lang/Object;)I" },
};

static MethodMetadata methods[] {
	{ "compare", 0, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, "(Ljava/lang/Object;Ljava/lang/Object;)I", 1025 },
	{ "equals", 0, INDEX_java_util_Comparator_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1025 },
	{ "reversed", (intptr_t) M_java_util_Comparator_reversed_R_java_util_Comparator, INDEX_java_util_Comparator_reversed_R_java_util_Comparator, "()Ljava/util/Comparator;", 1 },
	{ "thenComparing", (intptr_t) M_java_util_Comparator_thenComparing_java_util_Comparator_R_java_util_Comparator, INDEX_java_util_Comparator_thenComparing_java_util_Comparator_R_java_util_Comparator, "(Ljava/util/Comparator;)Ljava/util/Comparator;", 1 },
	{ "thenComparing", (intptr_t) M_java_util_Comparator_thenComparing_java_util_function_Function_java_util_Comparator_R_java_util_Comparator, INDEX_java_util_Comparator_thenComparing_java_util_function_Function_java_util_Comparator_R_java_util_Comparator, "(Ljava/util/function/Function;Ljava/util/Comparator;)Ljava/util/Comparator;", 1 },
	{ "thenComparing", (intptr_t) M_java_util_Comparator_thenComparing_java_util_function_Function_R_java_util_Comparator, INDEX_java_util_Comparator_thenComparing_java_util_function_Function_R_java_util_Comparator, "(Ljava/util/function/Function;)Ljava/util/Comparator;", 1 },
	{ "thenComparingInt", (intptr_t) M_java_util_Comparator_thenComparingInt_java_util_function_ToIntFunction_R_java_util_Comparator, INDEX_java_util_Comparator_thenComparingInt_java_util_function_ToIntFunction_R_java_util_Comparator, "(Ljava/util/function/ToIntFunction;)Ljava/util/Comparator;", 1 },
	{ "thenComparingLong", (intptr_t) M_java_util_Comparator_thenComparingLong_java_util_function_ToLongFunction_R_java_util_Comparator, INDEX_java_util_Comparator_thenComparingLong_java_util_function_ToLongFunction_R_java_util_Comparator, "(Ljava/util/function/ToLongFunction;)Ljava/util/Comparator;", 1 },
	{ "thenComparingDouble", (intptr_t) M_java_util_Comparator_thenComparingDouble_java_util_function_ToDoubleFunction_R_java_util_Comparator, INDEX_java_util_Comparator_thenComparingDouble_java_util_function_ToDoubleFunction_R_java_util_Comparator, "(Ljava/util/function/ToDoubleFunction;)Ljava/util/Comparator;", 1 },
	{ "reverseOrder", (intptr_t) SM_java_util_Comparator_reverseOrder_R_java_util_Comparator, 0, "()Ljava/util/Comparator;", 9 },
	{ "naturalOrder", (intptr_t) SM_java_util_Comparator_naturalOrder_R_java_util_Comparator, 0, "()Ljava/util/Comparator;", 9 },
	{ "nullsFirst", (intptr_t) SM_java_util_Comparator_nullsFirst_java_util_Comparator_R_java_util_Comparator, 0, "(Ljava/util/Comparator;)Ljava/util/Comparator;", 9 },
	{ "nullsLast", (intptr_t) SM_java_util_Comparator_nullsLast_java_util_Comparator_R_java_util_Comparator, 0, "(Ljava/util/Comparator;)Ljava/util/Comparator;", 9 },
	{ "comparing", (intptr_t) SM_java_util_Comparator_comparing_java_util_function_Function_java_util_Comparator_R_java_util_Comparator, 0, "(Ljava/util/function/Function;Ljava/util/Comparator;)Ljava/util/Comparator;", 9 },
	{ "comparing", (intptr_t) SM_java_util_Comparator_comparing_java_util_function_Function_R_java_util_Comparator, 0, "(Ljava/util/function/Function;)Ljava/util/Comparator;", 9 },
	{ "comparingInt", (intptr_t) SM_java_util_Comparator_comparingInt_java_util_function_ToIntFunction_R_java_util_Comparator, 0, "(Ljava/util/function/ToIntFunction;)Ljava/util/Comparator;", 9 },
	{ "comparingLong", (intptr_t) SM_java_util_Comparator_comparingLong_java_util_function_ToLongFunction_R_java_util_Comparator, 0, "(Ljava/util/function/ToLongFunction;)Ljava/util/Comparator;", 9 },
	{ "comparingDouble", (intptr_t) SM_java_util_Comparator_comparingDouble_java_util_function_ToDoubleFunction_R_java_util_Comparator, 0, "(Ljava/util/function/ToDoubleFunction;)Ljava/util/Comparator;", 9 },
	{ "lambda$comparingDouble$5", (intptr_t) SM_java_util_Comparator_lambda$comparingDouble$5_java_util_function_ToDoubleFunction_java_lang_Object_java_lang_Object_R_int, 0, "(Ljava/util/function/ToDoubleFunction;Ljava/lang/Object;Ljava/lang/Object;)I", 4106 },
	{ "lambda$comparingLong$4", (intptr_t) SM_java_util_Comparator_lambda$comparingLong$4_java_util_function_ToLongFunction_java_lang_Object_java_lang_Object_R_int, 0, "(Ljava/util/function/ToLongFunction;Ljava/lang/Object;Ljava/lang/Object;)I", 4106 },
	{ "lambda$comparingInt$3", (intptr_t) SM_java_util_Comparator_lambda$comparingInt$3_java_util_function_ToIntFunction_java_lang_Object_java_lang_Object_R_int, 0, "(Ljava/util/function/ToIntFunction;Ljava/lang/Object;Ljava/lang/Object;)I", 4106 },
	{ "lambda$comparing$2", (intptr_t) SM_java_util_Comparator_lambda$comparing$2_java_util_function_Function_java_lang_Object_java_lang_Object_R_int, 0, "(Ljava/util/function/Function;Ljava/lang/Object;Ljava/lang/Object;)I", 4106 },
	{ "lambda$comparing$1", (intptr_t) SM_java_util_Comparator_lambda$comparing$1_java_util_Comparator_java_util_function_Function_java_lang_Object_java_lang_Object_R_int, 0, "(Ljava/util/Comparator;Ljava/util/function/Function;Ljava/lang/Object;Ljava/lang/Object;)I", 4106 },
	{ "lambda$thenComparing$0", (intptr_t) M_java_util_Comparator_lambda$thenComparing$0_java_util_Comparator_java_lang_Object_java_lang_Object_R_int, INDEX_java_util_Comparator_lambda$thenComparing$0_java_util_Comparator_java_lang_Object_java_lang_Object_R_int, "(Ljava/util/Comparator;Ljava/lang/Object;Ljava/lang/Object;)I", 4098 },
};

Class class_java_util_Comparator{
		.nativeName = (intptr_t) "java/util/Comparator",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_Comparator),
		.classVtable = (intptr_t) vtable_java_util_Comparator,
		.staticInitializer = (intptr_t) clinit_java_util_Comparator,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_Comparator,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1537,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 24,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 20,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_Comparator = registerClass(&class_java_util_Comparator);

}
