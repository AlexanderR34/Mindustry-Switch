#include "arc/struct/TimSort.h"
#include "java/lang/Math.h"
#include "java/lang/Object.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/String.h"
#include "java/lang/ArrayIndexOutOfBoundsException.h"
#include "java/util/Arrays.h"
#include "arc/struct/TimSort.h"
#include "java/util/Comparator.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/System.h"

extern "C" {

jint SF_arc_struct_TimSort_MIN_MERGE;
jint SF_arc_struct_TimSort_MIN_GALLOP;
jint SF_arc_struct_TimSort_INITIAL_TMP_STORAGE_LENGTH;
jbool SF_arc_struct_TimSort_DEBUG;

void mark_arc_struct_TimSort(jobject object, jint mark, jint depth) {
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
	auto self = (arc_struct_TimSort *) object;
	if (self->F_runBase)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_runBase)->clazz)->markFunction)((jobject) self->F_runBase, mark, depth + 1);
	if (self->F_runLen)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_runLen)->clazz)->markFunction)((jobject) self->F_runLen, mark, depth + 1);
	if (self->F_a)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_a)->clazz)->markFunction)((jobject) self->F_a, mark, depth + 1);
	if (self->F_c)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_c)->clazz)->markFunction)((jobject) self->F_c, mark, depth + 1);
	if (self->F_tmp)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tmp)->clazz)->markFunction)((jobject) self->F_tmp, mark, depth + 1);
}

void clinit_arc_struct_TimSort(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_arc_struct_TimSort_MIN_MERGE = jint(32);
	SF_arc_struct_TimSort_MIN_GALLOP = jint(7);
	SF_arc_struct_TimSort_INITIAL_TMP_STORAGE_LENGTH = jint(256);
	SF_arc_struct_TimSort_DEBUG = jint(0);
}

void init_arc_struct_TimSort(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/TimSort:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_TimSort(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(94);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(80);
	((arc_struct_TimSort *) NULL_CHECK((frame[0].o)))->F_minGallop = (7);
	LINE_NUMBER(92);
	((arc_struct_TimSort *) NULL_CHECK((frame[0].o)))->F_stackSize = (jint(0));
	LINE_NUMBER(95);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (256));
	((arc_struct_TimSort *) NULL_CHECK(sp[0].o))->F_tmp = (jref) sp[1].o;
	LINE_NUMBER(96);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (40));
	((arc_struct_TimSort *) NULL_CHECK(sp[0].o))->F_runBase = (jref) sp[1].o;
	LINE_NUMBER(97);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (40));
	((arc_struct_TimSort *) NULL_CHECK(sp[0].o))->F_runLen = (jref) sp[1].o;
	LINE_NUMBER(98);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_struct_TimSort_Array1_java_lang_Object_java_util_Comparator(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/TimSort:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_TimSort(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(105);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(80);
	((arc_struct_TimSort *) NULL_CHECK((frame[0].o)))->F_minGallop = (7);
	LINE_NUMBER(92);
	((arc_struct_TimSort *) NULL_CHECK((frame[0].o)))->F_stackSize = (jint(0));
	LINE_NUMBER(106);
	((arc_struct_TimSort *) NULL_CHECK((frame[0].o)))->F_a = (jref) (frame[1].o);
	LINE_NUMBER(107);
	((arc_struct_TimSort *) NULL_CHECK((frame[0].o)))->F_c = (jref) (frame[2].o);
	LINE_NUMBER(110);
	frame[3].i = (((jarray) nullCheck(ctx, (frame[1].o)))->length);
	LINE_NUMBER(111);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[3].i) >= (512)) goto label_7;
	}
	{
	jint temp0 = bit_cast<jint>(bit_cast<uint32_t>((frame[3].i)) >> (jint(1)));
	sp[0].i = temp0;
	sp += 1;
	goto label_8;
	}
label_7:;
	INST_SIPUSH(256);
label_8:;
	{
	sp -= 2;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, sp[1].i);
	((arc_struct_TimSort *) NULL_CHECK(sp[0].o))->F_tmp = (jref) sp[1].o;
	LINE_NUMBER(120);
	if ((frame[3].i) >= (120)) goto label_10;
	}
	INST_ICONST(5);
	goto label_11;
label_10:;
	{
	if ((frame[3].i) >= (1542)) goto label_12;
	}
	INST_BIPUSH(10);
	goto label_11;
label_12:;
	{
	if ((frame[3].i) >= (jint(119151))) goto label_13;
	}
	INST_BIPUSH(19);
	goto label_11;
label_13:;
	INST_BIPUSH(40);
label_11:;
	{
	sp -= 1;
	frame[4].i = sp[0].i;
	LINE_NUMBER(121);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (frame[4].i));
	((arc_struct_TimSort *) NULL_CHECK(sp[0].o))->F_runBase = (jref) sp[1].o;
	LINE_NUMBER(122);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (frame[4].i));
	((arc_struct_TimSort *) NULL_CHECK(sp[0].o))->F_runLen = (jref) sp[1].o;
	LINE_NUMBER(123);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_struct_TimSort_sort_Array1_java_lang_Object_java_util_Comparator(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/TimSort:sort", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_TimSort(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(126);
	SM_arc_struct_TimSort_sort_Array1_java_lang_Object_int_int_java_util_Comparator(ctx, (frame[0].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[0].o)))->length), (frame[1].o));
	LINE_NUMBER(127);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_struct_TimSort_sort_Array1_java_lang_Object_int_int_java_util_Comparator(jcontext ctx, jobject param0, jint param1, jint param2, jobject param3) {
	jtype frame[14];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/TimSort:sort", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_TimSort(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(135);
	if ((frame[3].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(136);
	SM_java_util_Arrays_sort_Array1_java_lang_Object_int_int(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	LINE_NUMBER(137);
	popStackFrame(ctx);
	return;
	}
label_1:;
	{
	LINE_NUMBER(140);
	SM_arc_struct_TimSort_rangeCheck_int_int_int(ctx, (((jarray) nullCheck(ctx, (frame[0].o)))->length), (frame[1].i), (frame[2].i));
	LINE_NUMBER(141);
	frame[4].i = ((frame[2].i) - (frame[1].i));
	LINE_NUMBER(142);
	if ((frame[4].i) >= (jint(2))) goto label_6;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_6:;
	{
	LINE_NUMBER(145);
	if ((frame[4].i) >= (32)) goto label_7;
	}
	{
	LINE_NUMBER(146);
	jint temp0 = (jint)SM_arc_struct_TimSort_countRunAndMakeAscending_Array1_java_lang_Object_int_int_java_util_Comparator_R_int(ctx, (frame[0].o), (frame[1].i), (frame[2].i), (frame[3].o));
	frame[5].i = temp0;
	LINE_NUMBER(147);
	SM_arc_struct_TimSort_binarySort_Array1_java_lang_Object_int_int_int_java_util_Comparator(ctx, (frame[0].o), (frame[1].i), (frame[2].i), ((frame[1].i) + (frame[5].i)), (frame[3].o));
	LINE_NUMBER(148);
	popStackFrame(ctx);
	return;
	}
label_7:;
	{
	LINE_NUMBER(153);
	clinit_arc_struct_TimSort(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_TimSort);
	init_arc_struct_TimSort_Array1_java_lang_Object_java_util_Comparator(ctx, sp[0].o, (frame[0].o), (frame[3].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(154);
	jint temp0 = (jint)SM_arc_struct_TimSort_minRunLength_int_R_int(ctx, (frame[4].i));
	frame[6].i = temp0;
	}
label_12:;
	{
	LINE_NUMBER(157);
	jint temp0 = (jint)SM_arc_struct_TimSort_countRunAndMakeAscending_Array1_java_lang_Object_int_int_java_util_Comparator_R_int(ctx, (frame[0].o), (frame[1].i), (frame[2].i), (frame[3].o));
	frame[7].i = temp0;
	LINE_NUMBER(160);
	if ((frame[7].i) >= (frame[6].i)) goto label_14;
	}
	{
	LINE_NUMBER(161);
	if ((frame[4].i) > (frame[6].i)) goto label_16;
	}
	INST_ILOAD(4);
	goto label_17;
label_16:;
	INST_ILOAD(6);
label_17:;
	{
	sp -= 1;
	frame[8].i = sp[0].i;
	LINE_NUMBER(162);
	SM_arc_struct_TimSort_binarySort_Array1_java_lang_Object_int_int_int_java_util_Comparator(ctx, (frame[0].o), (frame[1].i), ((frame[1].i) + (frame[8].i)), ((frame[1].i) + (frame[7].i)), (frame[3].o));
	LINE_NUMBER(163);
	frame[7].i = (frame[8].i);
	}
label_14:;
	{
	LINE_NUMBER(167);
	M_arc_struct_TimSort_pushRun_int_int(ctx, (frame[5].o), (frame[1].i), (frame[7].i));
	LINE_NUMBER(168);
	M_arc_struct_TimSort_mergeCollapse(ctx, (frame[5].o));
	LINE_NUMBER(171);
	frame[1].i = ((frame[1].i) + (frame[7].i));
	LINE_NUMBER(172);
	frame[4].i = ((frame[4].i) - (frame[7].i));
	LINE_NUMBER(173);
	if ((frame[4].i) != 0) goto label_12;
	}
	{
	LINE_NUMBER(177);
	M_arc_struct_TimSort_mergeForceCollapse(ctx, (frame[5].o));
	LINE_NUMBER(179);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_struct_TimSort_binarySort_Array1_java_lang_Object_int_int_int_java_util_Comparator(jcontext ctx, jobject param0, jint param1, jint param2, jint param3, jobject param4) {
	jtype frame[14];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/TimSort:binarySort", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_TimSort(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(196);
	if ((frame[3].i) != (frame[1].i)) goto label_1;
	}
	INST_IINC(3, 1);
label_1:;
	{
	LINE_NUMBER(197);
	if ((frame[3].i) >= (frame[2].i)) goto label_2;
	}
	{
	LINE_NUMBER(198);
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[3].i)));
	LINE_NUMBER(201);
	frame[6].i = (frame[1].i);
	LINE_NUMBER(202);
	frame[7].i = (frame[3].i);
	}
label_6:;
	{
	LINE_NUMBER(207);
	if ((frame[6].i) >= (frame[7].i)) goto label_7;
	}
	{
	LINE_NUMBER(208);
	frame[8].i = (bit_cast<jint>(bit_cast<uint32_t>(((frame[6].i) + (frame[7].i))) >> (jint(1))));
	LINE_NUMBER(209);
	jint temp0 = (jint)((func_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, (frame[4].o)))(ctx, (frame[4].o), (frame[5].o), ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[8].i))));
	if (temp0 >= 0) goto label_10;
	}
	{
	LINE_NUMBER(210);
	frame[7].i = (frame[8].i);
	goto label_12;
	}
label_10:;
	{
	LINE_NUMBER(212);
	frame[6].i = ((frame[8].i) + (jint(1)));
	}
label_12:;
	LINE_NUMBER(213);
	goto label_6;
label_7:;
	{
	LINE_NUMBER(221);
	frame[8].i = ((frame[3].i) - (frame[6].i));
	LINE_NUMBER(223);
	switch((frame[8].i)) {
		case 1: goto label_14;
		case 2: goto label_15;
		default: goto label_16;
	}
	}
label_15:;
	{
	LINE_NUMBER(225);
	ARRAY_ACCESS(jobject, (frame[0].o), ((frame[6].i) + (jint(2)))) = ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), ((frame[6].i) + (jint(1)))));
	}
label_14:;
	{
	LINE_NUMBER(227);
	ARRAY_ACCESS(jobject, (frame[0].o), ((frame[6].i) + (jint(1)))) = ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[6].i)));
	LINE_NUMBER(228);
	goto label_18;
	}
label_16:;
	{
	LINE_NUMBER(230);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[0].o), (frame[6].i), (frame[0].o), ((frame[6].i) + (jint(1))), (frame[8].i));
	}
label_18:;
	{
	LINE_NUMBER(232);
	ARRAY_ACCESS(jobject, (frame[0].o), (frame[6].i)) = (frame[5].o);
	LINE_NUMBER(197);
	INST_IINC(3, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(234);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint SM_arc_struct_TimSort_countRunAndMakeAscending_Array1_java_lang_Object_int_int_java_util_Comparator_R_int(jcontext ctx, jobject param0, jint param1, jint param2, jobject param3) {
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/TimSort:countRunAndMakeAscending", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_TimSort(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(258);
	frame[4].i = ((frame[1].i) + (jint(1)));
	LINE_NUMBER(259);
	if ((frame[4].i) != (frame[2].i)) goto label_2;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(262);
	sp[0].o = frame[3].o;
	sp[1].o = frame[0].o;
	jint temp0 = frame[4].i;
	INST_IINC(4, 1);
	jint temp1 = (jint)((func_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, sp[0].o))(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, temp0)), ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[1].i))));
	if (temp1 >= 0) goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(263);
	if ((frame[4].i) >= (frame[2].i)) goto label_5;
	}
	{
	jint temp0 = (jint)((func_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, (frame[3].o)))(ctx, (frame[3].o), ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[4].i))), ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), ((frame[4].i) - (jint(1))))));
	if (temp0 >= 0) goto label_5;
	}
	{
	LINE_NUMBER(264);
	INST_IINC(4, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(265);
	SM_arc_struct_TimSort_reverseRange_Array1_java_lang_Object_int_int(ctx, (frame[0].o), (frame[1].i), (frame[4].i));
	goto label_7;
	}
label_3:;
	{
	LINE_NUMBER(267);
	if ((frame[4].i) >= (frame[2].i)) goto label_7;
	}
	{
	jint temp0 = (jint)((func_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, (frame[3].o)))(ctx, (frame[3].o), ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[4].i))), ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), ((frame[4].i) - (jint(1))))));
	if (temp0 < 0) goto label_7;
	}
	{
	LINE_NUMBER(268);
	INST_IINC(4, 1);
	goto label_3;
	}
label_7:;
	{
	LINE_NUMBER(271);
	popStackFrame(ctx);
	return ((frame[4].i) - (frame[1].i));
	}

	popStackFrame(ctx);
}

void SM_arc_struct_TimSort_reverseRange_Array1_java_lang_Object_int_int(jcontext ctx, jobject param0, jint param1, jint param2) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/TimSort:reverseRange", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_TimSort(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	LINE_NUMBER(281);
	INST_IINC(2, -1);
label_1:;
	{
	LINE_NUMBER(282);
	if ((frame[1].i) >= (frame[2].i)) goto label_2;
	}
	{
	LINE_NUMBER(283);
	frame[3].o = ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[1].i)));
	LINE_NUMBER(284);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	INST_IINC(1, 1);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[2].i)));
	LINE_NUMBER(285);
	sp[0].o = frame[0].o;
	jint temp1 = frame[2].i;
	INST_IINC(2, -1);
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = (frame[3].o);
	LINE_NUMBER(286);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(287);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint SM_arc_struct_TimSort_minRunLength_int_R_int(jcontext ctx, jint param0) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/TimSort:minRunLength", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_TimSort(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(305);
	frame[1].i = (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(306);
	if ((frame[0].i) < (32)) goto label_2;
	}
	{
	LINE_NUMBER(307);
	frame[1].i = ((frame[1].i) | ((frame[0].i) & (jint(1))));
	LINE_NUMBER(308);
	frame[0].i = ((frame[0].i) >> (jint(1)));
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(310);
	popStackFrame(ctx);
	return ((frame[0].i) + (frame[1].i));
	}

	popStackFrame(ctx);
}

jint SM_arc_struct_TimSort_gallopLeft_java_lang_Object_Array1_java_lang_Object_int_int_int_java_util_Comparator_R_int(jcontext ctx, jobject param0, jobject param1, jint param2, jint param3, jint param4, jobject param5) {
	jtype frame[15];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/TimSort:gallopLeft", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_TimSort(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	frame[5].o = param5;
	{
	LINE_NUMBER(329);
	frame[6].i = (jint(0));
	LINE_NUMBER(330);
	frame[7].i = (jint(1));
	LINE_NUMBER(331);
	jint temp0 = (jint)((func_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, (frame[5].o)))(ctx, (frame[5].o), (frame[0].o), ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), ((frame[2].i) + (frame[4].i)))));
	if (temp0 <= 0) goto label_3;
	}
	{
	LINE_NUMBER(333);
	frame[8].i = ((frame[3].i) - (frame[4].i));
	}
label_5:;
	{
	LINE_NUMBER(334);
	if ((frame[7].i) >= (frame[8].i)) goto label_6;
	}
	{
	jint temp0 = (jint)((func_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, (frame[5].o)))(ctx, (frame[5].o), (frame[0].o), ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (((frame[2].i) + (frame[4].i)) + (frame[7].i)))));
	if (temp0 <= 0) goto label_6;
	}
	{
	LINE_NUMBER(335);
	frame[6].i = (frame[7].i);
	LINE_NUMBER(336);
	frame[7].i = (((frame[7].i) << (jint(1))) + (jint(1)));
	LINE_NUMBER(337);
	if ((frame[7].i) > 0) goto label_5;
	}
	{
	LINE_NUMBER(338);
	frame[7].i = (frame[8].i);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(340);
	if ((frame[7].i) <= (frame[8].i)) goto label_11;
	}
	INST_ILOAD(8);
	INST_ISTORE(7);
label_11:;
	{
	LINE_NUMBER(343);
	frame[6].i = ((frame[6].i) + (frame[4].i));
	LINE_NUMBER(344);
	frame[7].i = ((frame[7].i) + (frame[4].i));
	LINE_NUMBER(345);
	goto label_14;
	}
label_3:;
	{
	LINE_NUMBER(347);
	frame[8].i = ((frame[4].i) + (jint(1)));
	}
label_15:;
	{
	LINE_NUMBER(348);
	if ((frame[7].i) >= (frame[8].i)) goto label_16;
	}
	{
	jint temp0 = (jint)((func_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, (frame[5].o)))(ctx, (frame[5].o), (frame[0].o), ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (((frame[2].i) + (frame[4].i)) - (frame[7].i)))));
	if (temp0 > 0) goto label_16;
	}
	{
	LINE_NUMBER(349);
	frame[6].i = (frame[7].i);
	LINE_NUMBER(350);
	frame[7].i = (((frame[7].i) << (jint(1))) + (jint(1)));
	LINE_NUMBER(351);
	if ((frame[7].i) > 0) goto label_15;
	}
	{
	LINE_NUMBER(352);
	frame[7].i = (frame[8].i);
	goto label_15;
	}
label_16:;
	{
	LINE_NUMBER(354);
	if ((frame[7].i) <= (frame[8].i)) goto label_21;
	}
	INST_ILOAD(8);
	INST_ISTORE(7);
label_21:;
	{
	LINE_NUMBER(357);
	frame[9].i = (frame[6].i);
	LINE_NUMBER(358);
	frame[6].i = ((frame[4].i) - (frame[7].i));
	LINE_NUMBER(359);
	frame[7].i = ((frame[4].i) - (frame[9].i));
	}
label_14:;
	LINE_NUMBER(367);
	INST_IINC(6, 1);
label_24:;
	{
	LINE_NUMBER(368);
	if ((frame[6].i) >= (frame[7].i)) goto label_25;
	}
	{
	LINE_NUMBER(369);
	frame[8].i = ((frame[6].i) + (bit_cast<jint>(bit_cast<uint32_t>(((frame[7].i) - (frame[6].i))) >> (jint(1)))));
	LINE_NUMBER(371);
	jint temp0 = (jint)((func_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, (frame[5].o)))(ctx, (frame[5].o), (frame[0].o), ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), ((frame[2].i) + (frame[8].i)))));
	if (temp0 <= 0) goto label_28;
	}
	{
	LINE_NUMBER(372);
	frame[6].i = ((frame[8].i) + (jint(1)));
	goto label_30;
	}
label_28:;
	{
	LINE_NUMBER(374);
	frame[7].i = (frame[8].i);
	}
label_30:;
	LINE_NUMBER(375);
	goto label_24;
label_25:;
	{
	LINE_NUMBER(377);
	popStackFrame(ctx);
	return (frame[7].i);
	}

	popStackFrame(ctx);
}

jint SM_arc_struct_TimSort_gallopRight_java_lang_Object_Array1_java_lang_Object_int_int_int_java_util_Comparator_R_int(jcontext ctx, jobject param0, jobject param1, jint param2, jint param3, jint param4, jobject param5) {
	jtype frame[15];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/TimSort:gallopRight", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_TimSort(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	frame[5].o = param5;
	{
	LINE_NUMBER(395);
	frame[6].i = (jint(1));
	LINE_NUMBER(396);
	frame[7].i = (jint(0));
	LINE_NUMBER(397);
	jint temp0 = (jint)((func_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, (frame[5].o)))(ctx, (frame[5].o), (frame[0].o), ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), ((frame[2].i) + (frame[4].i)))));
	if (temp0 >= 0) goto label_3;
	}
	{
	LINE_NUMBER(399);
	frame[8].i = ((frame[4].i) + (jint(1)));
	}
label_5:;
	{
	LINE_NUMBER(400);
	if ((frame[6].i) >= (frame[8].i)) goto label_6;
	}
	{
	jint temp0 = (jint)((func_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, (frame[5].o)))(ctx, (frame[5].o), (frame[0].o), ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (((frame[2].i) + (frame[4].i)) - (frame[6].i)))));
	if (temp0 >= 0) goto label_6;
	}
	{
	LINE_NUMBER(401);
	frame[7].i = (frame[6].i);
	LINE_NUMBER(402);
	frame[6].i = (((frame[6].i) << (jint(1))) + (jint(1)));
	LINE_NUMBER(403);
	if ((frame[6].i) > 0) goto label_5;
	}
	{
	LINE_NUMBER(404);
	frame[6].i = (frame[8].i);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(406);
	if ((frame[6].i) <= (frame[8].i)) goto label_11;
	}
	INST_ILOAD(8);
	INST_ISTORE(6);
label_11:;
	{
	LINE_NUMBER(409);
	frame[9].i = (frame[7].i);
	LINE_NUMBER(410);
	frame[7].i = ((frame[4].i) - (frame[6].i));
	LINE_NUMBER(411);
	frame[6].i = ((frame[4].i) - (frame[9].i));
	LINE_NUMBER(412);
	goto label_15;
	}
label_3:;
	{
	LINE_NUMBER(414);
	frame[8].i = ((frame[3].i) - (frame[4].i));
	}
label_16:;
	{
	LINE_NUMBER(415);
	if ((frame[6].i) >= (frame[8].i)) goto label_17;
	}
	{
	jint temp0 = (jint)((func_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, (frame[5].o)))(ctx, (frame[5].o), (frame[0].o), ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (((frame[2].i) + (frame[4].i)) + (frame[6].i)))));
	if (temp0 < 0) goto label_17;
	}
	{
	LINE_NUMBER(416);
	frame[7].i = (frame[6].i);
	LINE_NUMBER(417);
	frame[6].i = (((frame[6].i) << (jint(1))) + (jint(1)));
	LINE_NUMBER(418);
	if ((frame[6].i) > 0) goto label_16;
	}
	{
	LINE_NUMBER(419);
	frame[6].i = (frame[8].i);
	goto label_16;
	}
label_17:;
	{
	LINE_NUMBER(421);
	if ((frame[6].i) <= (frame[8].i)) goto label_22;
	}
	INST_ILOAD(8);
	INST_ISTORE(6);
label_22:;
	{
	LINE_NUMBER(424);
	frame[7].i = ((frame[7].i) + (frame[4].i));
	LINE_NUMBER(425);
	frame[6].i = ((frame[6].i) + (frame[4].i));
	}
label_15:;
	LINE_NUMBER(433);
	INST_IINC(7, 1);
label_24:;
	{
	LINE_NUMBER(434);
	if ((frame[7].i) >= (frame[6].i)) goto label_25;
	}
	{
	LINE_NUMBER(435);
	frame[8].i = ((frame[7].i) + (bit_cast<jint>(bit_cast<uint32_t>(((frame[6].i) - (frame[7].i))) >> (jint(1)))));
	LINE_NUMBER(437);
	jint temp0 = (jint)((func_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, (frame[5].o)))(ctx, (frame[5].o), (frame[0].o), ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), ((frame[2].i) + (frame[8].i)))));
	if (temp0 >= 0) goto label_28;
	}
	{
	LINE_NUMBER(438);
	frame[6].i = (frame[8].i);
	goto label_30;
	}
label_28:;
	{
	LINE_NUMBER(440);
	frame[7].i = ((frame[8].i) + (jint(1)));
	}
label_30:;
	LINE_NUMBER(441);
	goto label_24;
label_25:;
	{
	LINE_NUMBER(443);
	popStackFrame(ctx);
	return (frame[6].i);
	}

	popStackFrame(ctx);
}

void SM_arc_struct_TimSort_rangeCheck_int_int_int(jcontext ctx, jint param0, jint param1, jint param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/TimSort:rangeCheck", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_TimSort(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(455);
	if ((frame[1].i) <= (frame[2].i)) goto label_1;
	}
	{
	LINE_NUMBER(456);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"fromIndex("_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8") > toIndex("_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[2].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8")"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(457);
	if ((frame[1].i) >= 0) goto label_3;
	}
	{
	clinit_java_lang_ArrayIndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ArrayIndexOutOfBoundsException);
	init_java_lang_ArrayIndexOutOfBoundsException_int(ctx, sp[0].o, (frame[1].i));
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(458);
	if ((frame[2].i) <= (frame[0].i)) goto label_4;
	}
	{
	clinit_java_lang_ArrayIndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ArrayIndexOutOfBoundsException);
	init_java_lang_ArrayIndexOutOfBoundsException_int(ctx, sp[0].o, (frame[2].i));
	throwException(ctx, sp[0].o);	}
label_4:;
	LINE_NUMBER(459);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_struct_TimSort_doSort_Array1_java_lang_Object_java_util_Comparator_int_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/TimSort:doSort", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(462);
	((arc_struct_TimSort *) NULL_CHECK((frame[0].o)))->F_stackSize = (jint(0));
	LINE_NUMBER(463);
	SM_arc_struct_TimSort_rangeCheck_int_int_int(ctx, (((jarray) nullCheck(ctx, (frame[1].o)))->length), (frame[3].i), (frame[4].i));
	LINE_NUMBER(464);
	frame[5].i = ((frame[4].i) - (frame[3].i));
	LINE_NUMBER(465);
	if ((frame[5].i) >= (jint(2))) goto label_4;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_4:;
	{
	LINE_NUMBER(468);
	if ((frame[5].i) >= (32)) goto label_5;
	}
	{
	LINE_NUMBER(469);
	jint temp0 = (jint)SM_arc_struct_TimSort_countRunAndMakeAscending_Array1_java_lang_Object_int_int_java_util_Comparator_R_int(ctx, (frame[1].o), (frame[3].i), (frame[4].i), (frame[2].o));
	frame[6].i = temp0;
	LINE_NUMBER(470);
	SM_arc_struct_TimSort_binarySort_Array1_java_lang_Object_int_int_int_java_util_Comparator(ctx, (frame[1].o), (frame[3].i), (frame[4].i), ((frame[3].i) + (frame[6].i)), (frame[2].o));
	LINE_NUMBER(471);
	popStackFrame(ctx);
	return;
	}
label_5:;
	{
	LINE_NUMBER(474);
	((arc_struct_TimSort *) NULL_CHECK((frame[0].o)))->F_a = (jref) (frame[1].o);
	LINE_NUMBER(475);
	((arc_struct_TimSort *) NULL_CHECK((frame[0].o)))->F_c = (jref) (frame[2].o);
	LINE_NUMBER(476);
	((arc_struct_TimSort *) NULL_CHECK((frame[0].o)))->F_tmpCount = (jint(0));
	LINE_NUMBER(480);
	jint temp0 = (jint)SM_arc_struct_TimSort_minRunLength_int_R_int(ctx, (frame[5].i));
	frame[6].i = temp0;
	}
label_12:;
	{
	LINE_NUMBER(483);
	jint temp0 = (jint)SM_arc_struct_TimSort_countRunAndMakeAscending_Array1_java_lang_Object_int_int_java_util_Comparator_R_int(ctx, (frame[1].o), (frame[3].i), (frame[4].i), (frame[2].o));
	frame[7].i = temp0;
	LINE_NUMBER(486);
	if ((frame[7].i) >= (frame[6].i)) goto label_14;
	}
	{
	LINE_NUMBER(487);
	if ((frame[5].i) > (frame[6].i)) goto label_16;
	}
	INST_ILOAD(5);
	goto label_17;
label_16:;
	INST_ILOAD(6);
label_17:;
	{
	sp -= 1;
	frame[8].i = sp[0].i;
	LINE_NUMBER(488);
	SM_arc_struct_TimSort_binarySort_Array1_java_lang_Object_int_int_int_java_util_Comparator(ctx, (frame[1].o), (frame[3].i), ((frame[3].i) + (frame[8].i)), ((frame[3].i) + (frame[7].i)), (frame[2].o));
	LINE_NUMBER(489);
	frame[7].i = (frame[8].i);
	}
label_14:;
	{
	LINE_NUMBER(493);
	M_arc_struct_TimSort_pushRun_int_int(ctx, (frame[0].o), (frame[3].i), (frame[7].i));
	LINE_NUMBER(494);
	M_arc_struct_TimSort_mergeCollapse(ctx, (frame[0].o));
	LINE_NUMBER(497);
	frame[3].i = ((frame[3].i) + (frame[7].i));
	LINE_NUMBER(498);
	frame[5].i = ((frame[5].i) - (frame[7].i));
	LINE_NUMBER(499);
	if ((frame[5].i) != 0) goto label_12;
	}
	{
	LINE_NUMBER(503);
	M_arc_struct_TimSort_mergeForceCollapse(ctx, (frame[0].o));
	LINE_NUMBER(506);
	((arc_struct_TimSort *) NULL_CHECK((frame[0].o)))->F_a = (jref) (jobject(nullptr));
	LINE_NUMBER(507);
	((arc_struct_TimSort *) NULL_CHECK((frame[0].o)))->F_c = (jref) (jobject(nullptr));
	LINE_NUMBER(508);
	sp[0].o = (jobject)((arc_struct_TimSort *) NULL_CHECK((frame[0].o)))->F_tmp;
	frame[7].o = sp[0].o;
	LINE_NUMBER(509);
	frame[8].i = (jint(0));
	frame[9].i = ((jint)((arc_struct_TimSort *) NULL_CHECK((frame[0].o)))->F_tmpCount);
	}
label_30:;
	{
	if ((frame[8].i) >= (frame[9].i)) goto label_31;
	}
	{
	LINE_NUMBER(510);
	ARRAY_ACCESS(jobject, (frame[7].o), (frame[8].i)) = (jobject(nullptr));
	LINE_NUMBER(509);
	INST_IINC(8, 1);
	goto label_30;
	}
label_31:;
	LINE_NUMBER(511);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_struct_TimSort_pushRun_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/TimSort:pushRun", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(519);
	sp[0].o = (jobject)((arc_struct_TimSort *) NULL_CHECK((frame[0].o)))->F_runBase;
	ARRAY_ACCESS(jint, sp[0].o, ((jint)((arc_struct_TimSort *) NULL_CHECK((frame[0].o)))->F_stackSize)) = (frame[1].i);
	LINE_NUMBER(520);
	sp[0].o = (jobject)((arc_struct_TimSort *) NULL_CHECK((frame[0].o)))->F_runLen;
	ARRAY_ACCESS(jint, sp[0].o, ((jint)((arc_struct_TimSort *) NULL_CHECK((frame[0].o)))->F_stackSize)) = (frame[2].i);
	LINE_NUMBER(521);
	sp[0].o = frame[0].o;
	((arc_struct_TimSort *) NULL_CHECK(sp[0].o))->F_stackSize = (((jint)((arc_struct_TimSort *) NULL_CHECK(sp[0].o))->F_stackSize) + (jint(1)));
	LINE_NUMBER(522);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_struct_TimSort_mergeCollapse(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/TimSort:mergeCollapse", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
label_0:;
	{
	LINE_NUMBER(539);
	if (((jint)((arc_struct_TimSort *) NULL_CHECK((frame[0].o)))->F_stackSize) <= (jint(1))) goto label_1;
	}
	{
	LINE_NUMBER(540);
	frame[1].i = (((jint)((arc_struct_TimSort *) NULL_CHECK((frame[0].o)))->F_stackSize) - (jint(2)));
	LINE_NUMBER(541);
	if ((frame[1].i) < (jint(1))) goto label_4;
	}
	{
	sp[0].o = (jobject)((arc_struct_TimSort *) NULL_CHECK((frame[0].o)))->F_runLen;
	jint temp0 = (jint)ARRAY_ACCESS(jint, sp[0].o, ((frame[1].i) - (jint(1))));
	sp[0].o = (jobject)((arc_struct_TimSort *) NULL_CHECK((frame[0].o)))->F_runLen;
	jint temp1 = (jint)ARRAY_ACCESS(jint, sp[0].o, (frame[1].i));
	sp[0].o = (jobject)((arc_struct_TimSort *) NULL_CHECK((frame[0].o)))->F_runLen;
	if (temp0 <= (temp1 + ((jint)ARRAY_ACCESS(jint, sp[0].o, ((frame[1].i) + (jint(1))))))) goto label_5;
	}
label_4:;
	{
	if ((frame[1].i) < (jint(2))) goto label_6;
	}
	{
	sp[0].o = (jobject)((arc_struct_TimSort *) NULL_CHECK((frame[0].o)))->F_runLen;
	jint temp0 = (jint)ARRAY_ACCESS(jint, sp[0].o, ((frame[1].i) - (jint(2))));
	sp[0].o = (jobject)((arc_struct_TimSort *) NULL_CHECK((frame[0].o)))->F_runLen;
	jint temp1 = (jint)ARRAY_ACCESS(jint, sp[0].o, (frame[1].i));
	sp[0].o = (jobject)((arc_struct_TimSort *) NULL_CHECK((frame[0].o)))->F_runLen;
	if (temp0 > (temp1 + ((jint)ARRAY_ACCESS(jint, sp[0].o, ((frame[1].i) - (jint(1))))))) goto label_6;
	}
label_5:;
	{
	LINE_NUMBER(542);
	sp[0].o = (jobject)((arc_struct_TimSort *) NULL_CHECK((frame[0].o)))->F_runLen;
	jint temp0 = (jint)ARRAY_ACCESS(jint, sp[0].o, ((frame[1].i) - (jint(1))));
	sp[0].o = (jobject)((arc_struct_TimSort *) NULL_CHECK((frame[0].o)))->F_runLen;
	if (temp0 >= ((jint)ARRAY_ACCESS(jint, sp[0].o, ((frame[1].i) + (jint(1)))))) goto label_7;
	}
	INST_IINC(1, -1);
	goto label_7;
label_6:;
	{
	LINE_NUMBER(543);
	sp[0].o = (jobject)((arc_struct_TimSort *) NULL_CHECK((frame[0].o)))->F_runLen;
	jint temp0 = (jint)ARRAY_ACCESS(jint, sp[0].o, (frame[1].i));
	sp[0].o = (jobject)((arc_struct_TimSort *) NULL_CHECK((frame[0].o)))->F_runLen;
	if (temp0 <= ((jint)ARRAY_ACCESS(jint, sp[0].o, ((frame[1].i) + (jint(1)))))) goto label_7;
	}
	LINE_NUMBER(544);
	goto label_1;
label_7:;
	{
	LINE_NUMBER(546);
	M_arc_struct_TimSort_mergeAt_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(547);
	goto label_0;
	}
label_1:;
	LINE_NUMBER(548);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_struct_TimSort_mergeForceCollapse(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/TimSort:mergeForceCollapse", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
label_0:;
	{
	LINE_NUMBER(552);
	if (((jint)((arc_struct_TimSort *) NULL_CHECK((frame[0].o)))->F_stackSize) <= (jint(1))) goto label_1;
	}
	{
	LINE_NUMBER(553);
	frame[1].i = (((jint)((arc_struct_TimSort *) NULL_CHECK((frame[0].o)))->F_stackSize) - (jint(2)));
	LINE_NUMBER(554);
	if ((frame[1].i) <= 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((arc_struct_TimSort *) NULL_CHECK((frame[0].o)))->F_runLen;
	jint temp0 = (jint)ARRAY_ACCESS(jint, sp[0].o, ((frame[1].i) - (jint(1))));
	sp[0].o = (jobject)((arc_struct_TimSort *) NULL_CHECK((frame[0].o)))->F_runLen;
	if (temp0 >= ((jint)ARRAY_ACCESS(jint, sp[0].o, ((frame[1].i) + (jint(1)))))) goto label_4;
	}
	INST_IINC(1, -1);
label_4:;
	{
	LINE_NUMBER(555);
	M_arc_struct_TimSort_mergeAt_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(556);
	goto label_0;
	}
label_1:;
	LINE_NUMBER(557);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_struct_TimSort_mergeAt_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/TimSort:mergeAt", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(569);
	sp[0].o = (jobject)((arc_struct_TimSort *) NULL_CHECK((frame[0].o)))->F_runBase;
	frame[2].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[1].i)));
	LINE_NUMBER(570);
	sp[0].o = (jobject)((arc_struct_TimSort *) NULL_CHECK((frame[0].o)))->F_runLen;
	frame[3].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[1].i)));
	LINE_NUMBER(571);
	sp[0].o = (jobject)((arc_struct_TimSort *) NULL_CHECK((frame[0].o)))->F_runBase;
	frame[4].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, ((frame[1].i) + (jint(1)))));
	LINE_NUMBER(572);
	sp[0].o = (jobject)((arc_struct_TimSort *) NULL_CHECK((frame[0].o)))->F_runLen;
	frame[5].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, ((frame[1].i) + (jint(1)))));
	LINE_NUMBER(580);
	sp[0].o = (jobject)((arc_struct_TimSort *) NULL_CHECK((frame[0].o)))->F_runLen;
	ARRAY_ACCESS(jint, sp[0].o, (frame[1].i)) = ((frame[3].i) + (frame[5].i));
	LINE_NUMBER(581);
	if ((frame[1].i) != (((jint)((arc_struct_TimSort *) NULL_CHECK((frame[0].o)))->F_stackSize) - (jint(3)))) goto label_6;
	}
	{
	LINE_NUMBER(582);
	sp[0].o = (jobject)((arc_struct_TimSort *) NULL_CHECK((frame[0].o)))->F_runBase;
	jint temp0 = (frame[1].i) + (jint(1));
	sp[1].o = (jobject)((arc_struct_TimSort *) NULL_CHECK((frame[0].o)))->F_runBase;
	ARRAY_ACCESS(jint, sp[0].o, temp0) = ((jint)ARRAY_ACCESS(jint, sp[1].o, ((frame[1].i) + (jint(2)))));
	LINE_NUMBER(583);
	sp[0].o = (jobject)((arc_struct_TimSort *) NULL_CHECK((frame[0].o)))->F_runLen;
	jint temp1 = (frame[1].i) + (jint(1));
	sp[1].o = (jobject)((arc_struct_TimSort *) NULL_CHECK((frame[0].o)))->F_runLen;
	ARRAY_ACCESS(jint, sp[0].o, temp1) = ((jint)ARRAY_ACCESS(jint, sp[1].o, ((frame[1].i) + (jint(2)))));
	}
label_6:;
	{
	LINE_NUMBER(585);
	sp[0].o = frame[0].o;
	((arc_struct_TimSort *) NULL_CHECK(sp[0].o))->F_stackSize = (((jint)((arc_struct_TimSort *) NULL_CHECK(sp[0].o))->F_stackSize) - (jint(1)));
	LINE_NUMBER(591);
	sp[0].o = (jobject)((arc_struct_TimSort *) NULL_CHECK((frame[0].o)))->F_a;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[4].i));
	sp[1].o = (jobject)((arc_struct_TimSort *) NULL_CHECK((frame[0].o)))->F_a;
	jint temp0 = frame[2].i;
	jint temp1 = frame[3].i;
	jint temp2 = jint(0);
	sp[2].o = (jobject)((arc_struct_TimSort *) NULL_CHECK((frame[0].o)))->F_c;
	jint temp3 = (jint)SM_arc_struct_TimSort_gallopRight_java_lang_Object_Array1_java_lang_Object_int_int_int_java_util_Comparator_R_int(ctx, sp[0].o, sp[1].o, temp0, temp1, temp2, sp[2].o);
	frame[6].i = temp3;
	LINE_NUMBER(593);
	frame[2].i = ((frame[2].i) + (frame[6].i));
	LINE_NUMBER(594);
	frame[3].i = ((frame[3].i) - (frame[6].i));
	LINE_NUMBER(595);
	if ((frame[3].i) != 0) goto label_13;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_13:;
	{
	LINE_NUMBER(601);
	sp[0].o = (jobject)((arc_struct_TimSort *) NULL_CHECK((frame[0].o)))->F_a;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (((frame[2].i) + (frame[3].i)) - (jint(1))));
	sp[1].o = (jobject)((arc_struct_TimSort *) NULL_CHECK((frame[0].o)))->F_a;
	jint temp0 = frame[4].i;
	jint temp1 = frame[5].i;
	jint temp2 = (frame[5].i) - (jint(1));
	sp[2].o = (jobject)((arc_struct_TimSort *) NULL_CHECK((frame[0].o)))->F_c;
	jint temp3 = (jint)SM_arc_struct_TimSort_gallopLeft_java_lang_Object_Array1_java_lang_Object_int_int_int_java_util_Comparator_R_int(ctx, sp[0].o, sp[1].o, temp0, temp1, temp2, sp[2].o);
	frame[5].i = temp3;
	LINE_NUMBER(603);
	if ((frame[5].i) != 0) goto label_15;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_15:;
	{
	LINE_NUMBER(606);
	if ((frame[3].i) > (frame[5].i)) goto label_16;
	}
	{
	LINE_NUMBER(607);
	M_arc_struct_TimSort_mergeLo_int_int_int_int(ctx, (frame[0].o), (frame[2].i), (frame[3].i), (frame[4].i), (frame[5].i));
	goto label_18;
	}
label_16:;
	{
	LINE_NUMBER(609);
	M_arc_struct_TimSort_mergeHi_int_int_int_int(ctx, (frame[0].o), (frame[2].i), (frame[3].i), (frame[4].i), (frame[5].i));
	}
label_18:;
	LINE_NUMBER(610);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_struct_TimSort_mergeLo_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[20];
	auto stack = &frame[14];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/TimSort:mergeLo", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(628);
	sp[0].o = (jobject)((arc_struct_TimSort *) NULL_CHECK((frame[0].o)))->F_a;
	frame[5].o = sp[0].o;
	LINE_NUMBER(629);
	sp[0].o = (jobject)M_arc_struct_TimSort_ensureCapacity_int_R_Array1_java_lang_Object(ctx, (frame[0].o), (frame[2].i));
	frame[6].o = sp[0].o;
	LINE_NUMBER(630);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[5].o), (frame[1].i), (frame[6].o), (jint(0)), (frame[2].i));
	LINE_NUMBER(632);
	frame[7].i = (jint(0));
	LINE_NUMBER(633);
	frame[8].i = (frame[3].i);
	LINE_NUMBER(634);
	frame[9].i = (frame[1].i);
	LINE_NUMBER(637);
	sp[0].o = frame[5].o;
	jint temp0 = frame[9].i;
	INST_IINC(9, 1);
	sp[1].o = frame[5].o;
	jint temp1 = frame[8].i;
	INST_IINC(8, 1);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = ((jobject)ARRAY_ACCESS(jobject, sp[1].o, temp1));
	LINE_NUMBER(638);
	INST_IINC(4, -1);
	if ((frame[4].i) != 0) goto label_8;
	}
	{
	LINE_NUMBER(639);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[6].o), (frame[7].i), (frame[5].o), (frame[9].i), (frame[2].i));
	LINE_NUMBER(640);
	popStackFrame(ctx);
	return;
	}
label_8:;
	{
	LINE_NUMBER(642);
	if ((frame[2].i) != (jint(1))) goto label_11;
	}
	{
	LINE_NUMBER(643);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[5].o), (frame[8].i), (frame[5].o), (frame[9].i), (frame[4].i));
	LINE_NUMBER(644);
	ARRAY_ACCESS(jobject, (frame[5].o), ((frame[9].i) + (frame[4].i))) = ((jobject)ARRAY_ACCESS(jobject, (frame[6].o), (frame[7].i)));
	LINE_NUMBER(645);
	popStackFrame(ctx);
	return;
	}
label_11:;
	{
	LINE_NUMBER(648);
	sp[0].o = (jobject)((arc_struct_TimSort *) NULL_CHECK((frame[0].o)))->F_c;
	frame[10].o = sp[0].o;
	LINE_NUMBER(649);
	frame[11].i = ((jint)((arc_struct_TimSort *) NULL_CHECK((frame[0].o)))->F_minGallop);
	}
label_16:;
	{
	LINE_NUMBER(652);
	frame[12].i = (jint(0));
	LINE_NUMBER(653);
	frame[13].i = (jint(0));
	}
label_18:;
	{
	LINE_NUMBER(660);
	jint temp0 = (jint)((func_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, (frame[10].o)))(ctx, (frame[10].o), ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[8].i))), ((jobject)ARRAY_ACCESS(jobject, (frame[6].o), (frame[7].i))));
	if (temp0 >= 0) goto label_19;
	}
	{
	LINE_NUMBER(661);
	sp[0].o = frame[5].o;
	jint temp0 = frame[9].i;
	INST_IINC(9, 1);
	sp[1].o = frame[5].o;
	jint temp1 = frame[8].i;
	INST_IINC(8, 1);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = ((jobject)ARRAY_ACCESS(jobject, sp[1].o, temp1));
	LINE_NUMBER(662);
	INST_IINC(13, 1);
	LINE_NUMBER(663);
	frame[12].i = (jint(0));
	LINE_NUMBER(664);
	INST_IINC(4, -1);
	if ((frame[4].i) != 0) goto label_24;
	}
	goto label_25;
label_19:;
	{
	LINE_NUMBER(666);
	sp[0].o = frame[5].o;
	jint temp0 = frame[9].i;
	INST_IINC(9, 1);
	sp[1].o = frame[6].o;
	jint temp1 = frame[7].i;
	INST_IINC(7, 1);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = ((jobject)ARRAY_ACCESS(jobject, sp[1].o, temp1));
	LINE_NUMBER(667);
	INST_IINC(12, 1);
	LINE_NUMBER(668);
	frame[13].i = (jint(0));
	LINE_NUMBER(669);
	INST_IINC(2, -1);
	if ((frame[2].i) != (jint(1))) goto label_24;
	}
	goto label_25;
label_24:;
	{
	LINE_NUMBER(671);
	if (((frame[12].i) | (frame[13].i)) < (frame[11].i)) goto label_18;
	}
label_29:;
	{
	LINE_NUMBER(679);
	jint temp0 = (jint)SM_arc_struct_TimSort_gallopRight_java_lang_Object_Array1_java_lang_Object_int_int_int_java_util_Comparator_R_int(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[8].i))), (frame[6].o), (frame[7].i), (frame[2].i), (jint(0)), (frame[10].o));
	frame[12].i = temp0;
	LINE_NUMBER(680);
	if ((frame[12].i) == 0) goto label_31;
	}
	{
	LINE_NUMBER(681);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[6].o), (frame[7].i), (frame[5].o), (frame[9].i), (frame[12].i));
	LINE_NUMBER(682);
	frame[9].i = ((frame[9].i) + (frame[12].i));
	LINE_NUMBER(683);
	frame[7].i = ((frame[7].i) + (frame[12].i));
	LINE_NUMBER(684);
	frame[2].i = ((frame[2].i) - (frame[12].i));
	LINE_NUMBER(685);
	if ((frame[2].i) > (jint(1))) goto label_31;
	}
	LINE_NUMBER(686);
	goto label_25;
label_31:;
	{
	LINE_NUMBER(688);
	sp[0].o = frame[5].o;
	jint temp0 = frame[9].i;
	INST_IINC(9, 1);
	sp[1].o = frame[5].o;
	jint temp1 = frame[8].i;
	INST_IINC(8, 1);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = ((jobject)ARRAY_ACCESS(jobject, sp[1].o, temp1));
	LINE_NUMBER(689);
	INST_IINC(4, -1);
	if ((frame[4].i) != 0) goto label_39;
	}
	goto label_25;
label_39:;
	{
	LINE_NUMBER(691);
	jint temp0 = (jint)SM_arc_struct_TimSort_gallopLeft_java_lang_Object_Array1_java_lang_Object_int_int_int_java_util_Comparator_R_int(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[6].o), (frame[7].i))), (frame[5].o), (frame[8].i), (frame[4].i), (jint(0)), (frame[10].o));
	frame[13].i = temp0;
	LINE_NUMBER(692);
	if ((frame[13].i) == 0) goto label_41;
	}
	{
	LINE_NUMBER(693);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[5].o), (frame[8].i), (frame[5].o), (frame[9].i), (frame[13].i));
	LINE_NUMBER(694);
	frame[9].i = ((frame[9].i) + (frame[13].i));
	LINE_NUMBER(695);
	frame[8].i = ((frame[8].i) + (frame[13].i));
	LINE_NUMBER(696);
	frame[4].i = ((frame[4].i) - (frame[13].i));
	LINE_NUMBER(697);
	if ((frame[4].i) != 0) goto label_41;
	}
	goto label_25;
label_41:;
	{
	LINE_NUMBER(699);
	sp[0].o = frame[5].o;
	jint temp0 = frame[9].i;
	INST_IINC(9, 1);
	sp[1].o = frame[6].o;
	jint temp1 = frame[7].i;
	INST_IINC(7, 1);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = ((jobject)ARRAY_ACCESS(jobject, sp[1].o, temp1));
	LINE_NUMBER(700);
	INST_IINC(2, -1);
	if ((frame[2].i) != (jint(1))) goto label_48;
	}
	goto label_25;
label_48:;
	{
	LINE_NUMBER(701);
	INST_IINC(11, -1);
	LINE_NUMBER(702);
	if ((frame[12].i) < (7)) goto label_50;
	}
	INST_ICONST(1);
	goto label_51;
label_50:;
	INST_ICONST(0);
label_51:;
	{
	if ((frame[13].i) < (7)) goto label_52;
	}
	INST_ICONST(1);
	goto label_53;
label_52:;
	INST_ICONST(0);
label_53:;
	INST_IOR();
	if ((--sp)->i != 0) goto label_29;
	{
	LINE_NUMBER(703);
	if ((frame[11].i) >= 0) goto label_55;
	}
	INST_ICONST(0);
	INST_ISTORE(11);
label_55:;
	{
	LINE_NUMBER(704);
	INST_IINC(11, 2);
	LINE_NUMBER(705);
	goto label_16;
	}
label_25:;
	{
	LINE_NUMBER(706);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[11].i) >= (jint(1))) goto label_57;
	}
	INST_ICONST(1);
	goto label_58;
label_57:;
	INST_ILOAD(11);
label_58:;
	{
	sp -= 2;
	((arc_struct_TimSort *) NULL_CHECK(sp[0].o))->F_minGallop = sp[1].i;
	LINE_NUMBER(708);
	if ((frame[2].i) != (jint(1))) goto label_60;
	}
	{
	LINE_NUMBER(710);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[5].o), (frame[8].i), (frame[5].o), (frame[9].i), (frame[4].i));
	LINE_NUMBER(711);
	ARRAY_ACCESS(jobject, (frame[5].o), ((frame[9].i) + (frame[4].i))) = ((jobject)ARRAY_ACCESS(jobject, (frame[6].o), (frame[7].i)));
	goto label_63;
	}
label_60:;
	{
	LINE_NUMBER(712);
	if ((frame[2].i) != 0) goto label_64;
	}
	{
	LINE_NUMBER(713);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Comparison method violates its general contract!"_j))));
	throwException(ctx, sp[0].o);	}
label_64:;
	{
	LINE_NUMBER(717);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[6].o), (frame[7].i), (frame[5].o), (frame[9].i), (frame[2].i));
	}
label_63:;
	LINE_NUMBER(719);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_struct_TimSort_mergeHi_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[21];
	auto stack = &frame[14];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/TimSort:mergeHi", 21 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(733);
	sp[0].o = (jobject)((arc_struct_TimSort *) NULL_CHECK((frame[0].o)))->F_a;
	frame[5].o = sp[0].o;
	LINE_NUMBER(734);
	sp[0].o = (jobject)M_arc_struct_TimSort_ensureCapacity_int_R_Array1_java_lang_Object(ctx, (frame[0].o), (frame[4].i));
	frame[6].o = sp[0].o;
	LINE_NUMBER(735);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[5].o), (frame[3].i), (frame[6].o), (jint(0)), (frame[4].i));
	LINE_NUMBER(737);
	frame[7].i = (((frame[1].i) + (frame[2].i)) - (jint(1)));
	LINE_NUMBER(738);
	frame[8].i = ((frame[4].i) - (jint(1)));
	LINE_NUMBER(739);
	frame[9].i = (((frame[3].i) + (frame[4].i)) - (jint(1)));
	LINE_NUMBER(742);
	sp[0].o = frame[5].o;
	jint temp0 = frame[9].i;
	INST_IINC(9, -1);
	sp[1].o = frame[5].o;
	jint temp1 = frame[7].i;
	INST_IINC(7, -1);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = ((jobject)ARRAY_ACCESS(jobject, sp[1].o, temp1));
	LINE_NUMBER(743);
	INST_IINC(2, -1);
	if ((frame[2].i) != 0) goto label_8;
	}
	{
	LINE_NUMBER(744);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[6].o), (jint(0)), (frame[5].o), ((frame[9].i) - ((frame[4].i) - (jint(1)))), (frame[4].i));
	LINE_NUMBER(745);
	popStackFrame(ctx);
	return;
	}
label_8:;
	{
	LINE_NUMBER(747);
	if ((frame[4].i) != (jint(1))) goto label_11;
	}
	{
	LINE_NUMBER(748);
	frame[9].i = ((frame[9].i) - (frame[2].i));
	LINE_NUMBER(749);
	frame[7].i = ((frame[7].i) - (frame[2].i));
	LINE_NUMBER(750);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[5].o), ((frame[7].i) + (jint(1))), (frame[5].o), ((frame[9].i) + (jint(1))), (frame[2].i));
	LINE_NUMBER(751);
	ARRAY_ACCESS(jobject, (frame[5].o), (frame[9].i)) = ((jobject)ARRAY_ACCESS(jobject, (frame[6].o), (frame[8].i)));
	LINE_NUMBER(752);
	popStackFrame(ctx);
	return;
	}
label_11:;
	{
	LINE_NUMBER(755);
	sp[0].o = (jobject)((arc_struct_TimSort *) NULL_CHECK((frame[0].o)))->F_c;
	frame[10].o = sp[0].o;
	LINE_NUMBER(756);
	frame[11].i = ((jint)((arc_struct_TimSort *) NULL_CHECK((frame[0].o)))->F_minGallop);
	}
label_18:;
	{
	LINE_NUMBER(759);
	frame[12].i = (jint(0));
	LINE_NUMBER(760);
	frame[13].i = (jint(0));
	}
label_20:;
	{
	LINE_NUMBER(767);
	jint temp0 = (jint)((func_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, (frame[10].o)))(ctx, (frame[10].o), ((jobject)ARRAY_ACCESS(jobject, (frame[6].o), (frame[8].i))), ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[7].i))));
	if (temp0 >= 0) goto label_21;
	}
	{
	LINE_NUMBER(768);
	sp[0].o = frame[5].o;
	jint temp0 = frame[9].i;
	INST_IINC(9, -1);
	sp[1].o = frame[5].o;
	jint temp1 = frame[7].i;
	INST_IINC(7, -1);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = ((jobject)ARRAY_ACCESS(jobject, sp[1].o, temp1));
	LINE_NUMBER(769);
	INST_IINC(12, 1);
	LINE_NUMBER(770);
	frame[13].i = (jint(0));
	LINE_NUMBER(771);
	INST_IINC(2, -1);
	if ((frame[2].i) != 0) goto label_26;
	}
	goto label_27;
label_21:;
	{
	LINE_NUMBER(773);
	sp[0].o = frame[5].o;
	jint temp0 = frame[9].i;
	INST_IINC(9, -1);
	sp[1].o = frame[6].o;
	jint temp1 = frame[8].i;
	INST_IINC(8, -1);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = ((jobject)ARRAY_ACCESS(jobject, sp[1].o, temp1));
	LINE_NUMBER(774);
	INST_IINC(13, 1);
	LINE_NUMBER(775);
	frame[12].i = (jint(0));
	LINE_NUMBER(776);
	INST_IINC(4, -1);
	if ((frame[4].i) != (jint(1))) goto label_26;
	}
	goto label_27;
label_26:;
	{
	LINE_NUMBER(778);
	if (((frame[12].i) | (frame[13].i)) < (frame[11].i)) goto label_20;
	}
label_31:;
	{
	LINE_NUMBER(786);
	jint temp0 = frame[2].i;
	jint temp1 = (jint)SM_arc_struct_TimSort_gallopRight_java_lang_Object_Array1_java_lang_Object_int_int_int_java_util_Comparator_R_int(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[6].o), (frame[8].i))), (frame[5].o), (frame[1].i), (frame[2].i), ((frame[2].i) - (jint(1))), (frame[10].o));
	frame[12].i = (temp0 - temp1);
	LINE_NUMBER(787);
	if ((frame[12].i) == 0) goto label_33;
	}
	{
	LINE_NUMBER(788);
	frame[9].i = ((frame[9].i) - (frame[12].i));
	LINE_NUMBER(789);
	frame[7].i = ((frame[7].i) - (frame[12].i));
	LINE_NUMBER(790);
	frame[2].i = ((frame[2].i) - (frame[12].i));
	LINE_NUMBER(791);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[5].o), ((frame[7].i) + (jint(1))), (frame[5].o), ((frame[9].i) + (jint(1))), (frame[12].i));
	LINE_NUMBER(792);
	if ((frame[2].i) != 0) goto label_33;
	}
	goto label_27;
label_33:;
	{
	LINE_NUMBER(794);
	sp[0].o = frame[5].o;
	jint temp0 = frame[9].i;
	INST_IINC(9, -1);
	sp[1].o = frame[6].o;
	jint temp1 = frame[8].i;
	INST_IINC(8, -1);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = ((jobject)ARRAY_ACCESS(jobject, sp[1].o, temp1));
	LINE_NUMBER(795);
	INST_IINC(4, -1);
	if ((frame[4].i) != (jint(1))) goto label_40;
	}
	goto label_27;
label_40:;
	{
	LINE_NUMBER(797);
	jint temp0 = frame[4].i;
	jint temp1 = (jint)SM_arc_struct_TimSort_gallopLeft_java_lang_Object_Array1_java_lang_Object_int_int_int_java_util_Comparator_R_int(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[7].i))), (frame[6].o), (jint(0)), (frame[4].i), ((frame[4].i) - (jint(1))), (frame[10].o));
	frame[13].i = (temp0 - temp1);
	LINE_NUMBER(798);
	if ((frame[13].i) == 0) goto label_42;
	}
	{
	LINE_NUMBER(799);
	frame[9].i = ((frame[9].i) - (frame[13].i));
	LINE_NUMBER(800);
	frame[8].i = ((frame[8].i) - (frame[13].i));
	LINE_NUMBER(801);
	frame[4].i = ((frame[4].i) - (frame[13].i));
	LINE_NUMBER(802);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[6].o), ((frame[8].i) + (jint(1))), (frame[5].o), ((frame[9].i) + (jint(1))), (frame[13].i));
	LINE_NUMBER(803);
	if ((frame[4].i) > (jint(1))) goto label_42;
	}
	LINE_NUMBER(804);
	goto label_27;
label_42:;
	{
	LINE_NUMBER(806);
	sp[0].o = frame[5].o;
	jint temp0 = frame[9].i;
	INST_IINC(9, -1);
	sp[1].o = frame[5].o;
	jint temp1 = frame[7].i;
	INST_IINC(7, -1);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = ((jobject)ARRAY_ACCESS(jobject, sp[1].o, temp1));
	LINE_NUMBER(807);
	INST_IINC(2, -1);
	if ((frame[2].i) != 0) goto label_50;
	}
	goto label_27;
label_50:;
	{
	LINE_NUMBER(808);
	INST_IINC(11, -1);
	LINE_NUMBER(809);
	if ((frame[12].i) < (7)) goto label_52;
	}
	INST_ICONST(1);
	goto label_53;
label_52:;
	INST_ICONST(0);
label_53:;
	{
	if ((frame[13].i) < (7)) goto label_54;
	}
	INST_ICONST(1);
	goto label_55;
label_54:;
	INST_ICONST(0);
label_55:;
	INST_IOR();
	if ((--sp)->i != 0) goto label_31;
	{
	LINE_NUMBER(810);
	if ((frame[11].i) >= 0) goto label_57;
	}
	INST_ICONST(0);
	INST_ISTORE(11);
label_57:;
	{
	LINE_NUMBER(811);
	INST_IINC(11, 2);
	LINE_NUMBER(812);
	goto label_18;
	}
label_27:;
	{
	LINE_NUMBER(813);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[11].i) >= (jint(1))) goto label_59;
	}
	INST_ICONST(1);
	goto label_60;
label_59:;
	INST_ILOAD(11);
label_60:;
	{
	sp -= 2;
	((arc_struct_TimSort *) NULL_CHECK(sp[0].o))->F_minGallop = sp[1].i;
	LINE_NUMBER(815);
	if ((frame[4].i) != (jint(1))) goto label_62;
	}
	{
	LINE_NUMBER(817);
	frame[9].i = ((frame[9].i) - (frame[2].i));
	LINE_NUMBER(818);
	frame[7].i = ((frame[7].i) - (frame[2].i));
	LINE_NUMBER(819);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[5].o), ((frame[7].i) + (jint(1))), (frame[5].o), ((frame[9].i) + (jint(1))), (frame[2].i));
	LINE_NUMBER(820);
	ARRAY_ACCESS(jobject, (frame[5].o), (frame[9].i)) = ((jobject)ARRAY_ACCESS(jobject, (frame[6].o), (frame[8].i)));
	goto label_67;
	}
label_62:;
	{
	LINE_NUMBER(821);
	if ((frame[4].i) != 0) goto label_68;
	}
	{
	LINE_NUMBER(822);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Comparison method violates its general contract!"_j))));
	throwException(ctx, sp[0].o);	}
label_68:;
	{
	LINE_NUMBER(826);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[6].o), (jint(0)), (frame[5].o), ((frame[9].i) - ((frame[4].i) - (jint(1)))), (frame[4].i));
	}
label_67:;
	LINE_NUMBER(828);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_arc_struct_TimSort_ensureCapacity_int_R_Array1_java_lang_Object(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/TimSort:ensureCapacity", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(837);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, ((jint)((arc_struct_TimSort *) NULL_CHECK((frame[0].o)))->F_tmpCount), (frame[1].i));
	((arc_struct_TimSort *) NULL_CHECK(sp[0].o))->F_tmpCount = temp0;
	LINE_NUMBER(838);
	sp[0].o = (jobject)((arc_struct_TimSort *) NULL_CHECK((frame[0].o)))->F_tmp;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) >= (frame[1].i)) goto label_2;
	}
	{
	LINE_NUMBER(840);
	frame[2].i = (frame[1].i);
	LINE_NUMBER(841);
	frame[2].i = ((frame[2].i) | ((frame[2].i) >> (jint(1))));
	LINE_NUMBER(842);
	frame[2].i = ((frame[2].i) | ((frame[2].i) >> (jint(2))));
	LINE_NUMBER(843);
	frame[2].i = ((frame[2].i) | ((frame[2].i) >> (jint(4))));
	LINE_NUMBER(844);
	frame[2].i = ((frame[2].i) | ((frame[2].i) >> (8)));
	LINE_NUMBER(845);
	frame[2].i = ((frame[2].i) | ((frame[2].i) >> (16)));
	LINE_NUMBER(846);
	INST_IINC(2, 1);
	LINE_NUMBER(848);
	if ((frame[2].i) >= 0) goto label_11;
	}
	{
	LINE_NUMBER(849);
	frame[2].i = (frame[1].i);
	goto label_13;
	}
label_11:;
	{
	LINE_NUMBER(851);
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((arc_struct_TimSort *) NULL_CHECK((frame[0].o)))->F_a;
	jint temp1 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp0, (bit_cast<jint>(bit_cast<uint32_t>((((jarray) nullCheck(ctx, sp[0].o))->length)) >> (jint(1)))));
	frame[2].i = temp1;
	}
label_13:;
	{
	LINE_NUMBER(853);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (frame[2].i));
	((arc_struct_TimSort *) NULL_CHECK(sp[0].o))->F_tmp = (jref) sp[1].o;
	}
label_2:;
	{
	LINE_NUMBER(855);
	sp[0].o = (jobject)((arc_struct_TimSort *) NULL_CHECK((frame[0].o)))->F_tmp;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_arc_struct_TimSort[] {
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
	(void *) M_arc_struct_TimSort_doSort_Array1_java_lang_Object_java_util_Comparator_int_int,
	(void *) M_arc_struct_TimSort_pushRun_int_int,
	(void *) M_arc_struct_TimSort_mergeCollapse,
	(void *) M_arc_struct_TimSort_mergeForceCollapse,
	(void *) M_arc_struct_TimSort_mergeAt_int,
	(void *) M_arc_struct_TimSort_mergeLo_int_int_int_int,
	(void *) M_arc_struct_TimSort_mergeHi_int_int_int_int,
	(void *) M_arc_struct_TimSort_ensureCapacity_int_R_Array1_java_lang_Object,
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
	{ "doSort", "([Ljava/lang/Object;Ljava/util/Comparator;II)V" },
	{ "pushRun", "(II)V" },
	{ "mergeCollapse", "()V" },
	{ "mergeForceCollapse", "()V" },
	{ "mergeAt", "(I)V" },
	{ "mergeLo", "(IIII)V" },
	{ "mergeHi", "(IIII)V" },
	{ "ensureCapacity", "(I)[Ljava/lang/Object;" },
};

static FieldMetadata fields[] {
	{ "MIN_MERGE", &class_int, (intptr_t) &SF_arc_struct_TimSort_MIN_MERGE, "I", 26 },
	{ "MIN_GALLOP", &class_int, (intptr_t) &SF_arc_struct_TimSort_MIN_GALLOP, "I", 26 },
	{ "INITIAL_TMP_STORAGE_LENGTH", &class_int, (intptr_t) &SF_arc_struct_TimSort_INITIAL_TMP_STORAGE_LENGTH, "I", 26 },
	{ "DEBUG", &class_boolean, (intptr_t) &SF_arc_struct_TimSort_DEBUG, "Z", 26 },
	{ "runBase", getArrayClass(&class_int, 1), offsetof(arc_struct_TimSort, F_runBase), "[I", 18 },
	{ "runLen", getArrayClass(&class_int, 1), offsetof(arc_struct_TimSort, F_runLen), "[I", 18 },
	{ "a", getArrayClass(&class_java_lang_Object, 1), offsetof(arc_struct_TimSort, F_a), "[Ljava/lang/Object;", 2 },
	{ "c", &class_java_util_Comparator, offsetof(arc_struct_TimSort, F_c), "Ljava/util/Comparator;", 2 },
	{ "minGallop", &class_int, offsetof(arc_struct_TimSort, F_minGallop), "I", 2 },
	{ "tmp", getArrayClass(&class_java_lang_Object, 1), offsetof(arc_struct_TimSort, F_tmp), "[Ljava/lang/Object;", 2 },
	{ "tmpCount", &class_int, offsetof(arc_struct_TimSort, F_tmpCount), "I", 2 },
	{ "stackSize", &class_int, offsetof(arc_struct_TimSort, F_stackSize), "I", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_struct_TimSort, 0, "()V", 0 },
	{ "<init>", (intptr_t) init_arc_struct_TimSort_Array1_java_lang_Object_java_util_Comparator, 0, "([Ljava/lang/Object;Ljava/util/Comparator;)V", 2 },
	{ "sort", (intptr_t) SM_arc_struct_TimSort_sort_Array1_java_lang_Object_java_util_Comparator, 0, "([Ljava/lang/Object;Ljava/util/Comparator;)V", 8 },
	{ "sort", (intptr_t) SM_arc_struct_TimSort_sort_Array1_java_lang_Object_int_int_java_util_Comparator, 0, "([Ljava/lang/Object;IILjava/util/Comparator;)V", 8 },
	{ "binarySort", (intptr_t) SM_arc_struct_TimSort_binarySort_Array1_java_lang_Object_int_int_int_java_util_Comparator, 0, "([Ljava/lang/Object;IIILjava/util/Comparator;)V", 10 },
	{ "countRunAndMakeAscending", (intptr_t) SM_arc_struct_TimSort_countRunAndMakeAscending_Array1_java_lang_Object_int_int_java_util_Comparator_R_int, 0, "([Ljava/lang/Object;IILjava/util/Comparator;)I", 10 },
	{ "reverseRange", (intptr_t) SM_arc_struct_TimSort_reverseRange_Array1_java_lang_Object_int_int, 0, "([Ljava/lang/Object;II)V", 10 },
	{ "minRunLength", (intptr_t) SM_arc_struct_TimSort_minRunLength_int_R_int, 0, "(I)I", 10 },
	{ "gallopLeft", (intptr_t) SM_arc_struct_TimSort_gallopLeft_java_lang_Object_Array1_java_lang_Object_int_int_int_java_util_Comparator_R_int, 0, "(Ljava/lang/Object;[Ljava/lang/Object;IIILjava/util/Comparator;)I", 10 },
	{ "gallopRight", (intptr_t) SM_arc_struct_TimSort_gallopRight_java_lang_Object_Array1_java_lang_Object_int_int_int_java_util_Comparator_R_int, 0, "(Ljava/lang/Object;[Ljava/lang/Object;IIILjava/util/Comparator;)I", 10 },
	{ "rangeCheck", (intptr_t) SM_arc_struct_TimSort_rangeCheck_int_int_int, 0, "(III)V", 10 },
	{ "doSort", (intptr_t) M_arc_struct_TimSort_doSort_Array1_java_lang_Object_java_util_Comparator_int_int, VTABLE_arc_struct_TimSort_doSort_Array1_java_lang_Object_java_util_Comparator_int_int, "([Ljava/lang/Object;Ljava/util/Comparator;II)V", 1 },
	{ "pushRun", (intptr_t) M_arc_struct_TimSort_pushRun_int_int, VTABLE_arc_struct_TimSort_pushRun_int_int, "(II)V", 2 },
	{ "mergeCollapse", (intptr_t) M_arc_struct_TimSort_mergeCollapse, VTABLE_arc_struct_TimSort_mergeCollapse, "()V", 2 },
	{ "mergeForceCollapse", (intptr_t) M_arc_struct_TimSort_mergeForceCollapse, VTABLE_arc_struct_TimSort_mergeForceCollapse, "()V", 2 },
	{ "mergeAt", (intptr_t) M_arc_struct_TimSort_mergeAt_int, VTABLE_arc_struct_TimSort_mergeAt_int, "(I)V", 2 },
	{ "mergeLo", (intptr_t) M_arc_struct_TimSort_mergeLo_int_int_int_int, VTABLE_arc_struct_TimSort_mergeLo_int_int_int_int, "(IIII)V", 2 },
	{ "mergeHi", (intptr_t) M_arc_struct_TimSort_mergeHi_int_int_int_int, VTABLE_arc_struct_TimSort_mergeHi_int_int_int_int, "(IIII)V", 2 },
	{ "ensureCapacity", (intptr_t) M_arc_struct_TimSort_ensureCapacity_int_R_Array1_java_lang_Object, VTABLE_arc_struct_TimSort_ensureCapacity_int_R_Array1_java_lang_Object, "(I)[Ljava/lang/Object;", 2 },
};

Class class_arc_struct_TimSort{
		.nativeName = (intptr_t) "arc/struct/TimSort",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_struct_TimSort),
		.classVtable = (intptr_t) vtable_arc_struct_TimSort,
		.staticInitializer = (intptr_t) clinit_arc_struct_TimSort,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_struct_TimSort,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 12,
		.nativeFields = (intptr_t) fields,
		.methodCount = 19,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 19,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_struct_TimSort = registerClass(&class_arc_struct_TimSort);

}
