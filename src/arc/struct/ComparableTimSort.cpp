#include "arc/struct/ComparableTimSort.h"
#include "arc/struct/ComparableTimSort.h"
#include "java/lang/Math.h"
#include "java/lang/Object.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/String.h"
#include "java/lang/ArrayIndexOutOfBoundsException.h"
#include "java/lang/Comparable.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/System.h"

extern "C" {

jint SF_arc_struct_ComparableTimSort_MIN_MERGE;
jint SF_arc_struct_ComparableTimSort_MIN_GALLOP;
jint SF_arc_struct_ComparableTimSort_INITIAL_TMP_STORAGE_LENGTH;
jbool SF_arc_struct_ComparableTimSort_DEBUG;

void mark_arc_struct_ComparableTimSort(jobject object, jint mark, jint depth) {
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
	auto self = (arc_struct_ComparableTimSort *) object;
	if (self->F_runBase)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_runBase)->clazz)->markFunction)((jobject) self->F_runBase, mark, depth + 1);
	if (self->F_runLen)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_runLen)->clazz)->markFunction)((jobject) self->F_runLen, mark, depth + 1);
	if (self->F_a)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_a)->clazz)->markFunction)((jobject) self->F_a, mark, depth + 1);
	if (self->F_tmp)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tmp)->clazz)->markFunction)((jobject) self->F_tmp, mark, depth + 1);
}

void clinit_arc_struct_ComparableTimSort(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_arc_struct_ComparableTimSort_MIN_MERGE = jint(32);
	SF_arc_struct_ComparableTimSort_MIN_GALLOP = jint(7);
	SF_arc_struct_ComparableTimSort_INITIAL_TMP_STORAGE_LENGTH = jint(256);
	SF_arc_struct_ComparableTimSort_DEBUG = jint(0);
}

void init_arc_struct_ComparableTimSort(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ComparableTimSort:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_ComparableTimSort(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(75);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(61);
	((arc_struct_ComparableTimSort *) NULL_CHECK((frame[0].o)))->F_minGallop = (7);
	LINE_NUMBER(73);
	((arc_struct_ComparableTimSort *) NULL_CHECK((frame[0].o)))->F_stackSize = (jint(0));
	LINE_NUMBER(76);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (256));
	((arc_struct_ComparableTimSort *) NULL_CHECK(sp[0].o))->F_tmp = (jref) sp[1].o;
	LINE_NUMBER(77);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (40));
	((arc_struct_ComparableTimSort *) NULL_CHECK(sp[0].o))->F_runBase = (jref) sp[1].o;
	LINE_NUMBER(78);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (40));
	((arc_struct_ComparableTimSort *) NULL_CHECK(sp[0].o))->F_runLen = (jref) sp[1].o;
	LINE_NUMBER(79);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_struct_ComparableTimSort_Array1_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ComparableTimSort:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_ComparableTimSort(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(85);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(61);
	((arc_struct_ComparableTimSort *) NULL_CHECK((frame[0].o)))->F_minGallop = (7);
	LINE_NUMBER(73);
	((arc_struct_ComparableTimSort *) NULL_CHECK((frame[0].o)))->F_stackSize = (jint(0));
	LINE_NUMBER(86);
	((arc_struct_ComparableTimSort *) NULL_CHECK((frame[0].o)))->F_a = (jref) (frame[1].o);
	LINE_NUMBER(89);
	frame[2].i = (((jarray) nullCheck(ctx, (frame[1].o)))->length);
	LINE_NUMBER(90);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[2].i) >= (512)) goto label_6;
	}
	{
	jint temp0 = bit_cast<jint>(bit_cast<uint32_t>((frame[2].i)) >> (jint(1)));
	sp[0].i = temp0;
	sp += 1;
	goto label_7;
	}
label_6:;
	INST_SIPUSH(256);
label_7:;
	{
	sp -= 2;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, sp[1].i);
	((arc_struct_ComparableTimSort *) NULL_CHECK(sp[0].o))->F_tmp = (jref) sp[1].o;
	LINE_NUMBER(99);
	if ((frame[2].i) >= (120)) goto label_9;
	}
	INST_ICONST(5);
	goto label_10;
label_9:;
	{
	if ((frame[2].i) >= (1542)) goto label_11;
	}
	INST_BIPUSH(10);
	goto label_10;
label_11:;
	{
	if ((frame[2].i) >= (jint(119151))) goto label_12;
	}
	INST_BIPUSH(19);
	goto label_10;
label_12:;
	INST_BIPUSH(40);
label_10:;
	{
	sp -= 1;
	frame[3].i = sp[0].i;
	LINE_NUMBER(100);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (frame[3].i));
	((arc_struct_ComparableTimSort *) NULL_CHECK(sp[0].o))->F_runBase = (jref) sp[1].o;
	LINE_NUMBER(101);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (frame[3].i));
	((arc_struct_ComparableTimSort *) NULL_CHECK(sp[0].o))->F_runLen = (jref) sp[1].o;
	LINE_NUMBER(102);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_struct_ComparableTimSort_sort_Array1_java_lang_Object(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ComparableTimSort:sort", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_ComparableTimSort(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(105);
	SM_arc_struct_ComparableTimSort_sort_Array1_java_lang_Object_int_int(ctx, (frame[0].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[0].o)))->length));
	LINE_NUMBER(106);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_struct_ComparableTimSort_sort_Array1_java_lang_Object_int_int(jcontext ctx, jobject param0, jint param1, jint param2) {
	jtype frame[13];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ComparableTimSort:sort", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_ComparableTimSort(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(114);
	SM_arc_struct_ComparableTimSort_rangeCheck_int_int_int(ctx, (((jarray) nullCheck(ctx, (frame[0].o)))->length), (frame[1].i), (frame[2].i));
	LINE_NUMBER(115);
	frame[3].i = ((frame[2].i) - (frame[1].i));
	LINE_NUMBER(116);
	if ((frame[3].i) >= (jint(2))) goto label_3;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(119);
	if ((frame[3].i) >= (32)) goto label_4;
	}
	{
	LINE_NUMBER(120);
	jint temp0 = (jint)SM_arc_struct_ComparableTimSort_countRunAndMakeAscending_Array1_java_lang_Object_int_int_R_int(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	frame[4].i = temp0;
	LINE_NUMBER(121);
	SM_arc_struct_ComparableTimSort_binarySort_Array1_java_lang_Object_int_int_int(ctx, (frame[0].o), (frame[1].i), (frame[2].i), ((frame[1].i) + (frame[4].i)));
	LINE_NUMBER(122);
	popStackFrame(ctx);
	return;
	}
label_4:;
	{
	LINE_NUMBER(127);
	clinit_arc_struct_ComparableTimSort(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_ComparableTimSort);
	init_arc_struct_ComparableTimSort_Array1_java_lang_Object(ctx, sp[0].o, (frame[0].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(128);
	jint temp0 = (jint)SM_arc_struct_ComparableTimSort_minRunLength_int_R_int(ctx, (frame[3].i));
	frame[5].i = temp0;
	}
label_9:;
	{
	LINE_NUMBER(131);
	jint temp0 = (jint)SM_arc_struct_ComparableTimSort_countRunAndMakeAscending_Array1_java_lang_Object_int_int_R_int(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	frame[6].i = temp0;
	LINE_NUMBER(134);
	if ((frame[6].i) >= (frame[5].i)) goto label_11;
	}
	{
	LINE_NUMBER(135);
	if ((frame[3].i) > (frame[5].i)) goto label_13;
	}
	INST_ILOAD(3);
	goto label_14;
label_13:;
	INST_ILOAD(5);
label_14:;
	{
	sp -= 1;
	frame[7].i = sp[0].i;
	LINE_NUMBER(136);
	SM_arc_struct_ComparableTimSort_binarySort_Array1_java_lang_Object_int_int_int(ctx, (frame[0].o), (frame[1].i), ((frame[1].i) + (frame[7].i)), ((frame[1].i) + (frame[6].i)));
	LINE_NUMBER(137);
	frame[6].i = (frame[7].i);
	}
label_11:;
	{
	LINE_NUMBER(141);
	M_arc_struct_ComparableTimSort_pushRun_int_int(ctx, (frame[4].o), (frame[1].i), (frame[6].i));
	LINE_NUMBER(142);
	M_arc_struct_ComparableTimSort_mergeCollapse(ctx, (frame[4].o));
	LINE_NUMBER(145);
	frame[1].i = ((frame[1].i) + (frame[6].i));
	LINE_NUMBER(146);
	frame[3].i = ((frame[3].i) - (frame[6].i));
	LINE_NUMBER(147);
	if ((frame[3].i) != 0) goto label_9;
	}
	{
	LINE_NUMBER(151);
	M_arc_struct_ComparableTimSort_mergeForceCollapse(ctx, (frame[4].o));
	LINE_NUMBER(153);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_struct_ComparableTimSort_binarySort_Array1_java_lang_Object_int_int_int(jcontext ctx, jobject param0, jint param1, jint param2, jint param3) {
	jtype frame[13];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ComparableTimSort:binarySort", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_ComparableTimSort(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(169);
	if ((frame[3].i) != (frame[1].i)) goto label_1;
	}
	INST_IINC(3, 1);
label_1:;
	{
	LINE_NUMBER(170);
	if ((frame[3].i) >= (frame[2].i)) goto label_2;
	}
	{
	LINE_NUMBER(172);
	frame[4].o = (checkCast(ctx, &class_java_lang_Comparable, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[3].i)))));
	LINE_NUMBER(175);
	frame[5].i = (frame[1].i);
	LINE_NUMBER(176);
	frame[6].i = (frame[3].i);
	}
label_6:;
	{
	LINE_NUMBER(181);
	if ((frame[5].i) >= (frame[6].i)) goto label_7;
	}
	{
	LINE_NUMBER(182);
	frame[7].i = (bit_cast<jint>(bit_cast<uint32_t>(((frame[5].i) + (frame[6].i))) >> (jint(1))));
	LINE_NUMBER(183);
	jint temp0 = (jint)((func_java_lang_Comparable_compareTo_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_lang_Comparable, INDEX_java_lang_Comparable_compareTo_java_lang_Object_R_int, (frame[4].o)))(ctx, (frame[4].o), ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[7].i))));
	if (temp0 >= 0) goto label_10;
	}
	{
	LINE_NUMBER(184);
	frame[6].i = (frame[7].i);
	goto label_12;
	}
label_10:;
	{
	LINE_NUMBER(186);
	frame[5].i = ((frame[7].i) + (jint(1)));
	}
label_12:;
	LINE_NUMBER(187);
	goto label_6;
label_7:;
	{
	LINE_NUMBER(195);
	frame[7].i = ((frame[3].i) - (frame[5].i));
	LINE_NUMBER(197);
	switch((frame[7].i)) {
		case 1: goto label_14;
		case 2: goto label_15;
		default: goto label_16;
	}
	}
label_15:;
	{
	LINE_NUMBER(199);
	ARRAY_ACCESS(jobject, (frame[0].o), ((frame[5].i) + (jint(2)))) = ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), ((frame[5].i) + (jint(1)))));
	}
label_14:;
	{
	LINE_NUMBER(201);
	ARRAY_ACCESS(jobject, (frame[0].o), ((frame[5].i) + (jint(1)))) = ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[5].i)));
	LINE_NUMBER(202);
	goto label_18;
	}
label_16:;
	{
	LINE_NUMBER(204);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[0].o), (frame[5].i), (frame[0].o), ((frame[5].i) + (jint(1))), (frame[7].i));
	}
label_18:;
	{
	LINE_NUMBER(206);
	ARRAY_ACCESS(jobject, (frame[0].o), (frame[5].i)) = (frame[4].o);
	LINE_NUMBER(170);
	INST_IINC(3, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(208);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint SM_arc_struct_ComparableTimSort_countRunAndMakeAscending_Array1_java_lang_Object_int_int_R_int(jcontext ctx, jobject param0, jint param1, jint param2) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ComparableTimSort:countRunAndMakeAscending", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_ComparableTimSort(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(232);
	frame[3].i = ((frame[1].i) + (jint(1)));
	LINE_NUMBER(233);
	if ((frame[3].i) != (frame[2].i)) goto label_2;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(236);
	sp[0].o = frame[0].o;
	jint temp0 = frame[3].i;
	INST_IINC(3, 1);
	jint temp1 = (jint)((func_java_lang_Comparable_compareTo_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_lang_Comparable, INDEX_java_lang_Comparable_compareTo_java_lang_Object_R_int, (checkCast(ctx, &class_java_lang_Comparable, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, temp0))))))(ctx, (checkCast(ctx, &class_java_lang_Comparable, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, temp0)))), ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[1].i))));
	if (temp1 >= 0) goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(237);
	if ((frame[3].i) >= (frame[2].i)) goto label_5;
	}
	{
	jint temp0 = (jint)((func_java_lang_Comparable_compareTo_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_lang_Comparable, INDEX_java_lang_Comparable_compareTo_java_lang_Object_R_int, (checkCast(ctx, &class_java_lang_Comparable, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[3].i)))))))(ctx, (checkCast(ctx, &class_java_lang_Comparable, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[3].i))))), ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), ((frame[3].i) - (jint(1))))));
	if (temp0 >= 0) goto label_5;
	}
	{
	LINE_NUMBER(238);
	INST_IINC(3, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(239);
	SM_arc_struct_ComparableTimSort_reverseRange_Array1_java_lang_Object_int_int(ctx, (frame[0].o), (frame[1].i), (frame[3].i));
	goto label_7;
	}
label_3:;
	{
	LINE_NUMBER(241);
	if ((frame[3].i) >= (frame[2].i)) goto label_7;
	}
	{
	jint temp0 = (jint)((func_java_lang_Comparable_compareTo_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_lang_Comparable, INDEX_java_lang_Comparable_compareTo_java_lang_Object_R_int, (checkCast(ctx, &class_java_lang_Comparable, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[3].i)))))))(ctx, (checkCast(ctx, &class_java_lang_Comparable, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[3].i))))), ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), ((frame[3].i) - (jint(1))))));
	if (temp0 < 0) goto label_7;
	}
	{
	LINE_NUMBER(242);
	INST_IINC(3, 1);
	goto label_3;
	}
label_7:;
	{
	LINE_NUMBER(245);
	popStackFrame(ctx);
	return ((frame[3].i) - (frame[1].i));
	}

	popStackFrame(ctx);
}

void SM_arc_struct_ComparableTimSort_reverseRange_Array1_java_lang_Object_int_int(jcontext ctx, jobject param0, jint param1, jint param2) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ComparableTimSort:reverseRange", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_ComparableTimSort(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	LINE_NUMBER(255);
	INST_IINC(2, -1);
label_1:;
	{
	LINE_NUMBER(256);
	if ((frame[1].i) >= (frame[2].i)) goto label_2;
	}
	{
	LINE_NUMBER(257);
	frame[3].o = ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[1].i)));
	LINE_NUMBER(258);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	INST_IINC(1, 1);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[2].i)));
	LINE_NUMBER(259);
	sp[0].o = frame[0].o;
	jint temp1 = frame[2].i;
	INST_IINC(2, -1);
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = (frame[3].o);
	LINE_NUMBER(260);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(261);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint SM_arc_struct_ComparableTimSort_minRunLength_int_R_int(jcontext ctx, jint param0) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ComparableTimSort:minRunLength", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_ComparableTimSort(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(279);
	frame[1].i = (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(280);
	if ((frame[0].i) < (32)) goto label_2;
	}
	{
	LINE_NUMBER(281);
	frame[1].i = ((frame[1].i) | ((frame[0].i) & (jint(1))));
	LINE_NUMBER(282);
	frame[0].i = ((frame[0].i) >> (jint(1)));
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(284);
	popStackFrame(ctx);
	return ((frame[0].i) + (frame[1].i));
	}

	popStackFrame(ctx);
}

jint SM_arc_struct_ComparableTimSort_gallopLeft_java_lang_Comparable_Array1_java_lang_Object_int_int_int_R_int(jcontext ctx, jobject param0, jobject param1, jint param2, jint param3, jint param4) {
	jtype frame[13];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ComparableTimSort:gallopLeft", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_ComparableTimSort(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	{
	LINE_NUMBER(303);
	frame[5].i = (jint(0));
	LINE_NUMBER(304);
	frame[6].i = (jint(1));
	LINE_NUMBER(305);
	jint temp0 = (jint)((func_java_lang_Comparable_compareTo_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_lang_Comparable, INDEX_java_lang_Comparable_compareTo_java_lang_Object_R_int, (frame[0].o)))(ctx, (frame[0].o), ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), ((frame[2].i) + (frame[4].i)))));
	if (temp0 <= 0) goto label_3;
	}
	{
	LINE_NUMBER(307);
	frame[7].i = ((frame[3].i) - (frame[4].i));
	}
label_5:;
	{
	LINE_NUMBER(308);
	if ((frame[6].i) >= (frame[7].i)) goto label_6;
	}
	{
	jint temp0 = (jint)((func_java_lang_Comparable_compareTo_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_lang_Comparable, INDEX_java_lang_Comparable_compareTo_java_lang_Object_R_int, (frame[0].o)))(ctx, (frame[0].o), ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (((frame[2].i) + (frame[4].i)) + (frame[6].i)))));
	if (temp0 <= 0) goto label_6;
	}
	{
	LINE_NUMBER(309);
	frame[5].i = (frame[6].i);
	LINE_NUMBER(310);
	frame[6].i = (((frame[6].i) << (jint(1))) + (jint(1)));
	LINE_NUMBER(311);
	if ((frame[6].i) > 0) goto label_5;
	}
	{
	LINE_NUMBER(312);
	frame[6].i = (frame[7].i);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(314);
	if ((frame[6].i) <= (frame[7].i)) goto label_11;
	}
	INST_ILOAD(7);
	INST_ISTORE(6);
label_11:;
	{
	LINE_NUMBER(317);
	frame[5].i = ((frame[5].i) + (frame[4].i));
	LINE_NUMBER(318);
	frame[6].i = ((frame[6].i) + (frame[4].i));
	LINE_NUMBER(319);
	goto label_14;
	}
label_3:;
	{
	LINE_NUMBER(321);
	frame[7].i = ((frame[4].i) + (jint(1)));
	}
label_15:;
	{
	LINE_NUMBER(322);
	if ((frame[6].i) >= (frame[7].i)) goto label_16;
	}
	{
	jint temp0 = (jint)((func_java_lang_Comparable_compareTo_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_lang_Comparable, INDEX_java_lang_Comparable_compareTo_java_lang_Object_R_int, (frame[0].o)))(ctx, (frame[0].o), ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (((frame[2].i) + (frame[4].i)) - (frame[6].i)))));
	if (temp0 > 0) goto label_16;
	}
	{
	LINE_NUMBER(323);
	frame[5].i = (frame[6].i);
	LINE_NUMBER(324);
	frame[6].i = (((frame[6].i) << (jint(1))) + (jint(1)));
	LINE_NUMBER(325);
	if ((frame[6].i) > 0) goto label_15;
	}
	{
	LINE_NUMBER(326);
	frame[6].i = (frame[7].i);
	goto label_15;
	}
label_16:;
	{
	LINE_NUMBER(328);
	if ((frame[6].i) <= (frame[7].i)) goto label_21;
	}
	INST_ILOAD(7);
	INST_ISTORE(6);
label_21:;
	{
	LINE_NUMBER(331);
	frame[8].i = (frame[5].i);
	LINE_NUMBER(332);
	frame[5].i = ((frame[4].i) - (frame[6].i));
	LINE_NUMBER(333);
	frame[6].i = ((frame[4].i) - (frame[8].i));
	}
label_14:;
	LINE_NUMBER(341);
	INST_IINC(5, 1);
label_24:;
	{
	LINE_NUMBER(342);
	if ((frame[5].i) >= (frame[6].i)) goto label_25;
	}
	{
	LINE_NUMBER(343);
	frame[7].i = ((frame[5].i) + (bit_cast<jint>(bit_cast<uint32_t>(((frame[6].i) - (frame[5].i))) >> (jint(1)))));
	LINE_NUMBER(345);
	jint temp0 = (jint)((func_java_lang_Comparable_compareTo_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_lang_Comparable, INDEX_java_lang_Comparable_compareTo_java_lang_Object_R_int, (frame[0].o)))(ctx, (frame[0].o), ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), ((frame[2].i) + (frame[7].i)))));
	if (temp0 <= 0) goto label_28;
	}
	{
	LINE_NUMBER(346);
	frame[5].i = ((frame[7].i) + (jint(1)));
	goto label_30;
	}
label_28:;
	{
	LINE_NUMBER(348);
	frame[6].i = (frame[7].i);
	}
label_30:;
	LINE_NUMBER(349);
	goto label_24;
label_25:;
	{
	LINE_NUMBER(351);
	popStackFrame(ctx);
	return (frame[6].i);
	}

	popStackFrame(ctx);
}

jint SM_arc_struct_ComparableTimSort_gallopRight_java_lang_Comparable_Array1_java_lang_Object_int_int_int_R_int(jcontext ctx, jobject param0, jobject param1, jint param2, jint param3, jint param4) {
	jtype frame[13];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ComparableTimSort:gallopRight", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_ComparableTimSort(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	{
	LINE_NUMBER(368);
	frame[5].i = (jint(1));
	LINE_NUMBER(369);
	frame[6].i = (jint(0));
	LINE_NUMBER(370);
	jint temp0 = (jint)((func_java_lang_Comparable_compareTo_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_lang_Comparable, INDEX_java_lang_Comparable_compareTo_java_lang_Object_R_int, (frame[0].o)))(ctx, (frame[0].o), ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), ((frame[2].i) + (frame[4].i)))));
	if (temp0 >= 0) goto label_3;
	}
	{
	LINE_NUMBER(372);
	frame[7].i = ((frame[4].i) + (jint(1)));
	}
label_5:;
	{
	LINE_NUMBER(373);
	if ((frame[5].i) >= (frame[7].i)) goto label_6;
	}
	{
	jint temp0 = (jint)((func_java_lang_Comparable_compareTo_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_lang_Comparable, INDEX_java_lang_Comparable_compareTo_java_lang_Object_R_int, (frame[0].o)))(ctx, (frame[0].o), ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (((frame[2].i) + (frame[4].i)) - (frame[5].i)))));
	if (temp0 >= 0) goto label_6;
	}
	{
	LINE_NUMBER(374);
	frame[6].i = (frame[5].i);
	LINE_NUMBER(375);
	frame[5].i = (((frame[5].i) << (jint(1))) + (jint(1)));
	LINE_NUMBER(376);
	if ((frame[5].i) > 0) goto label_5;
	}
	{
	LINE_NUMBER(377);
	frame[5].i = (frame[7].i);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(379);
	if ((frame[5].i) <= (frame[7].i)) goto label_11;
	}
	INST_ILOAD(7);
	INST_ISTORE(5);
label_11:;
	{
	LINE_NUMBER(382);
	frame[8].i = (frame[6].i);
	LINE_NUMBER(383);
	frame[6].i = ((frame[4].i) - (frame[5].i));
	LINE_NUMBER(384);
	frame[5].i = ((frame[4].i) - (frame[8].i));
	LINE_NUMBER(385);
	goto label_15;
	}
label_3:;
	{
	LINE_NUMBER(387);
	frame[7].i = ((frame[3].i) - (frame[4].i));
	}
label_16:;
	{
	LINE_NUMBER(388);
	if ((frame[5].i) >= (frame[7].i)) goto label_17;
	}
	{
	jint temp0 = (jint)((func_java_lang_Comparable_compareTo_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_lang_Comparable, INDEX_java_lang_Comparable_compareTo_java_lang_Object_R_int, (frame[0].o)))(ctx, (frame[0].o), ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (((frame[2].i) + (frame[4].i)) + (frame[5].i)))));
	if (temp0 < 0) goto label_17;
	}
	{
	LINE_NUMBER(389);
	frame[6].i = (frame[5].i);
	LINE_NUMBER(390);
	frame[5].i = (((frame[5].i) << (jint(1))) + (jint(1)));
	LINE_NUMBER(391);
	if ((frame[5].i) > 0) goto label_16;
	}
	{
	LINE_NUMBER(392);
	frame[5].i = (frame[7].i);
	goto label_16;
	}
label_17:;
	{
	LINE_NUMBER(394);
	if ((frame[5].i) <= (frame[7].i)) goto label_22;
	}
	INST_ILOAD(7);
	INST_ISTORE(5);
label_22:;
	{
	LINE_NUMBER(397);
	frame[6].i = ((frame[6].i) + (frame[4].i));
	LINE_NUMBER(398);
	frame[5].i = ((frame[5].i) + (frame[4].i));
	}
label_15:;
	LINE_NUMBER(406);
	INST_IINC(6, 1);
label_24:;
	{
	LINE_NUMBER(407);
	if ((frame[6].i) >= (frame[5].i)) goto label_25;
	}
	{
	LINE_NUMBER(408);
	frame[7].i = ((frame[6].i) + (bit_cast<jint>(bit_cast<uint32_t>(((frame[5].i) - (frame[6].i))) >> (jint(1)))));
	LINE_NUMBER(410);
	jint temp0 = (jint)((func_java_lang_Comparable_compareTo_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_lang_Comparable, INDEX_java_lang_Comparable_compareTo_java_lang_Object_R_int, (frame[0].o)))(ctx, (frame[0].o), ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), ((frame[2].i) + (frame[7].i)))));
	if (temp0 >= 0) goto label_28;
	}
	{
	LINE_NUMBER(411);
	frame[5].i = (frame[7].i);
	goto label_30;
	}
label_28:;
	{
	LINE_NUMBER(413);
	frame[6].i = ((frame[7].i) + (jint(1)));
	}
label_30:;
	LINE_NUMBER(414);
	goto label_24;
label_25:;
	{
	LINE_NUMBER(416);
	popStackFrame(ctx);
	return (frame[5].i);
	}

	popStackFrame(ctx);
}

void SM_arc_struct_ComparableTimSort_rangeCheck_int_int_int(jcontext ctx, jint param0, jint param1, jint param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ComparableTimSort:rangeCheck", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_ComparableTimSort(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(428);
	if ((frame[1].i) <= (frame[2].i)) goto label_1;
	}
	{
	LINE_NUMBER(429);
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
	LINE_NUMBER(430);
	if ((frame[1].i) >= 0) goto label_3;
	}
	{
	clinit_java_lang_ArrayIndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ArrayIndexOutOfBoundsException);
	init_java_lang_ArrayIndexOutOfBoundsException_int(ctx, sp[0].o, (frame[1].i));
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(431);
	if ((frame[2].i) <= (frame[0].i)) goto label_4;
	}
	{
	clinit_java_lang_ArrayIndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ArrayIndexOutOfBoundsException);
	init_java_lang_ArrayIndexOutOfBoundsException_int(ctx, sp[0].o, (frame[2].i));
	throwException(ctx, sp[0].o);	}
label_4:;
	LINE_NUMBER(432);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_struct_ComparableTimSort_doSort_Array1_java_lang_Object_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ComparableTimSort:doSort", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(435);
	((arc_struct_ComparableTimSort *) NULL_CHECK((frame[0].o)))->F_stackSize = (jint(0));
	LINE_NUMBER(436);
	SM_arc_struct_ComparableTimSort_rangeCheck_int_int_int(ctx, (((jarray) nullCheck(ctx, (frame[1].o)))->length), (frame[2].i), (frame[3].i));
	LINE_NUMBER(437);
	frame[4].i = ((frame[3].i) - (frame[2].i));
	LINE_NUMBER(438);
	if ((frame[4].i) >= (jint(2))) goto label_4;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_4:;
	{
	LINE_NUMBER(441);
	if ((frame[4].i) >= (32)) goto label_5;
	}
	{
	LINE_NUMBER(442);
	jint temp0 = (jint)SM_arc_struct_ComparableTimSort_countRunAndMakeAscending_Array1_java_lang_Object_int_int_R_int(ctx, (frame[1].o), (frame[2].i), (frame[3].i));
	frame[5].i = temp0;
	LINE_NUMBER(443);
	SM_arc_struct_ComparableTimSort_binarySort_Array1_java_lang_Object_int_int_int(ctx, (frame[1].o), (frame[2].i), (frame[3].i), ((frame[2].i) + (frame[5].i)));
	LINE_NUMBER(444);
	popStackFrame(ctx);
	return;
	}
label_5:;
	{
	LINE_NUMBER(447);
	((arc_struct_ComparableTimSort *) NULL_CHECK((frame[0].o)))->F_a = (jref) (frame[1].o);
	LINE_NUMBER(448);
	((arc_struct_ComparableTimSort *) NULL_CHECK((frame[0].o)))->F_tmpCount = (jint(0));
	LINE_NUMBER(452);
	jint temp0 = (jint)SM_arc_struct_ComparableTimSort_minRunLength_int_R_int(ctx, (frame[4].i));
	frame[5].i = temp0;
	}
label_11:;
	{
	LINE_NUMBER(455);
	jint temp0 = (jint)SM_arc_struct_ComparableTimSort_countRunAndMakeAscending_Array1_java_lang_Object_int_int_R_int(ctx, (frame[1].o), (frame[2].i), (frame[3].i));
	frame[6].i = temp0;
	LINE_NUMBER(458);
	if ((frame[6].i) >= (frame[5].i)) goto label_13;
	}
	{
	LINE_NUMBER(459);
	if ((frame[4].i) > (frame[5].i)) goto label_15;
	}
	INST_ILOAD(4);
	goto label_16;
label_15:;
	INST_ILOAD(5);
label_16:;
	{
	sp -= 1;
	frame[7].i = sp[0].i;
	LINE_NUMBER(460);
	SM_arc_struct_ComparableTimSort_binarySort_Array1_java_lang_Object_int_int_int(ctx, (frame[1].o), (frame[2].i), ((frame[2].i) + (frame[7].i)), ((frame[2].i) + (frame[6].i)));
	LINE_NUMBER(461);
	frame[6].i = (frame[7].i);
	}
label_13:;
	{
	LINE_NUMBER(465);
	M_arc_struct_ComparableTimSort_pushRun_int_int(ctx, (frame[0].o), (frame[2].i), (frame[6].i));
	LINE_NUMBER(466);
	M_arc_struct_ComparableTimSort_mergeCollapse(ctx, (frame[0].o));
	LINE_NUMBER(469);
	frame[2].i = ((frame[2].i) + (frame[6].i));
	LINE_NUMBER(470);
	frame[4].i = ((frame[4].i) - (frame[6].i));
	LINE_NUMBER(471);
	if ((frame[4].i) != 0) goto label_11;
	}
	{
	LINE_NUMBER(475);
	M_arc_struct_ComparableTimSort_mergeForceCollapse(ctx, (frame[0].o));
	LINE_NUMBER(478);
	((arc_struct_ComparableTimSort *) NULL_CHECK((frame[0].o)))->F_a = (jref) (jobject(nullptr));
	LINE_NUMBER(479);
	sp[0].o = (jobject)((arc_struct_ComparableTimSort *) NULL_CHECK((frame[0].o)))->F_tmp;
	frame[6].o = sp[0].o;
	LINE_NUMBER(480);
	frame[7].i = (jint(0));
	frame[8].i = ((jint)((arc_struct_ComparableTimSort *) NULL_CHECK((frame[0].o)))->F_tmpCount);
	}
label_28:;
	{
	if ((frame[7].i) >= (frame[8].i)) goto label_29;
	}
	{
	LINE_NUMBER(481);
	ARRAY_ACCESS(jobject, (frame[6].o), (frame[7].i)) = (jobject(nullptr));
	LINE_NUMBER(480);
	INST_IINC(7, 1);
	goto label_28;
	}
label_29:;
	LINE_NUMBER(482);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_struct_ComparableTimSort_pushRun_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ComparableTimSort:pushRun", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(490);
	sp[0].o = (jobject)((arc_struct_ComparableTimSort *) NULL_CHECK((frame[0].o)))->F_runBase;
	ARRAY_ACCESS(jint, sp[0].o, ((jint)((arc_struct_ComparableTimSort *) NULL_CHECK((frame[0].o)))->F_stackSize)) = (frame[1].i);
	LINE_NUMBER(491);
	sp[0].o = (jobject)((arc_struct_ComparableTimSort *) NULL_CHECK((frame[0].o)))->F_runLen;
	ARRAY_ACCESS(jint, sp[0].o, ((jint)((arc_struct_ComparableTimSort *) NULL_CHECK((frame[0].o)))->F_stackSize)) = (frame[2].i);
	LINE_NUMBER(492);
	sp[0].o = frame[0].o;
	((arc_struct_ComparableTimSort *) NULL_CHECK(sp[0].o))->F_stackSize = (((jint)((arc_struct_ComparableTimSort *) NULL_CHECK(sp[0].o))->F_stackSize) + (jint(1)));
	LINE_NUMBER(493);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_struct_ComparableTimSort_mergeCollapse(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ComparableTimSort:mergeCollapse", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
label_0:;
	{
	LINE_NUMBER(504);
	if (((jint)((arc_struct_ComparableTimSort *) NULL_CHECK((frame[0].o)))->F_stackSize) <= (jint(1))) goto label_1;
	}
	{
	LINE_NUMBER(505);
	frame[1].i = (((jint)((arc_struct_ComparableTimSort *) NULL_CHECK((frame[0].o)))->F_stackSize) - (jint(2)));
	LINE_NUMBER(506);
	if ((frame[1].i) <= 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((arc_struct_ComparableTimSort *) NULL_CHECK((frame[0].o)))->F_runLen;
	jint temp0 = (jint)ARRAY_ACCESS(jint, sp[0].o, ((frame[1].i) - (jint(1))));
	sp[0].o = (jobject)((arc_struct_ComparableTimSort *) NULL_CHECK((frame[0].o)))->F_runLen;
	jint temp1 = (jint)ARRAY_ACCESS(jint, sp[0].o, (frame[1].i));
	sp[0].o = (jobject)((arc_struct_ComparableTimSort *) NULL_CHECK((frame[0].o)))->F_runLen;
	if (temp0 > (temp1 + ((jint)ARRAY_ACCESS(jint, sp[0].o, ((frame[1].i) + (jint(1))))))) goto label_4;
	}
	{
	LINE_NUMBER(507);
	sp[0].o = (jobject)((arc_struct_ComparableTimSort *) NULL_CHECK((frame[0].o)))->F_runLen;
	jint temp0 = (jint)ARRAY_ACCESS(jint, sp[0].o, ((frame[1].i) - (jint(1))));
	sp[0].o = (jobject)((arc_struct_ComparableTimSort *) NULL_CHECK((frame[0].o)))->F_runLen;
	if (temp0 >= ((jint)ARRAY_ACCESS(jint, sp[0].o, ((frame[1].i) + (jint(1)))))) goto label_6;
	}
	INST_IINC(1, -1);
label_6:;
	{
	LINE_NUMBER(508);
	M_arc_struct_ComparableTimSort_mergeAt_int(ctx, (frame[0].o), (frame[1].i));
	goto label_7;
	}
label_4:;
	{
	LINE_NUMBER(509);
	sp[0].o = (jobject)((arc_struct_ComparableTimSort *) NULL_CHECK((frame[0].o)))->F_runLen;
	jint temp0 = (jint)ARRAY_ACCESS(jint, sp[0].o, (frame[1].i));
	sp[0].o = (jobject)((arc_struct_ComparableTimSort *) NULL_CHECK((frame[0].o)))->F_runLen;
	if (temp0 > ((jint)ARRAY_ACCESS(jint, sp[0].o, ((frame[1].i) + (jint(1)))))) goto label_1;
	}
	{
	LINE_NUMBER(510);
	M_arc_struct_ComparableTimSort_mergeAt_int(ctx, (frame[0].o), (frame[1].i));
	}
label_7:;
	LINE_NUMBER(514);
	goto label_0;
label_1:;
	LINE_NUMBER(515);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_struct_ComparableTimSort_mergeForceCollapse(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ComparableTimSort:mergeForceCollapse", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
label_0:;
	{
	LINE_NUMBER(519);
	if (((jint)((arc_struct_ComparableTimSort *) NULL_CHECK((frame[0].o)))->F_stackSize) <= (jint(1))) goto label_1;
	}
	{
	LINE_NUMBER(520);
	frame[1].i = (((jint)((arc_struct_ComparableTimSort *) NULL_CHECK((frame[0].o)))->F_stackSize) - (jint(2)));
	LINE_NUMBER(521);
	if ((frame[1].i) <= 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((arc_struct_ComparableTimSort *) NULL_CHECK((frame[0].o)))->F_runLen;
	jint temp0 = (jint)ARRAY_ACCESS(jint, sp[0].o, ((frame[1].i) - (jint(1))));
	sp[0].o = (jobject)((arc_struct_ComparableTimSort *) NULL_CHECK((frame[0].o)))->F_runLen;
	if (temp0 >= ((jint)ARRAY_ACCESS(jint, sp[0].o, ((frame[1].i) + (jint(1)))))) goto label_4;
	}
	INST_IINC(1, -1);
label_4:;
	{
	LINE_NUMBER(522);
	M_arc_struct_ComparableTimSort_mergeAt_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(523);
	goto label_0;
	}
label_1:;
	LINE_NUMBER(524);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_struct_ComparableTimSort_mergeAt_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ComparableTimSort:mergeAt", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(537);
	sp[0].o = (jobject)((arc_struct_ComparableTimSort *) NULL_CHECK((frame[0].o)))->F_runBase;
	frame[2].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[1].i)));
	LINE_NUMBER(538);
	sp[0].o = (jobject)((arc_struct_ComparableTimSort *) NULL_CHECK((frame[0].o)))->F_runLen;
	frame[3].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[1].i)));
	LINE_NUMBER(539);
	sp[0].o = (jobject)((arc_struct_ComparableTimSort *) NULL_CHECK((frame[0].o)))->F_runBase;
	frame[4].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, ((frame[1].i) + (jint(1)))));
	LINE_NUMBER(540);
	sp[0].o = (jobject)((arc_struct_ComparableTimSort *) NULL_CHECK((frame[0].o)))->F_runLen;
	frame[5].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, ((frame[1].i) + (jint(1)))));
	LINE_NUMBER(548);
	sp[0].o = (jobject)((arc_struct_ComparableTimSort *) NULL_CHECK((frame[0].o)))->F_runLen;
	ARRAY_ACCESS(jint, sp[0].o, (frame[1].i)) = ((frame[3].i) + (frame[5].i));
	LINE_NUMBER(549);
	if ((frame[1].i) != (((jint)((arc_struct_ComparableTimSort *) NULL_CHECK((frame[0].o)))->F_stackSize) - (jint(3)))) goto label_6;
	}
	{
	LINE_NUMBER(550);
	sp[0].o = (jobject)((arc_struct_ComparableTimSort *) NULL_CHECK((frame[0].o)))->F_runBase;
	jint temp0 = (frame[1].i) + (jint(1));
	sp[1].o = (jobject)((arc_struct_ComparableTimSort *) NULL_CHECK((frame[0].o)))->F_runBase;
	ARRAY_ACCESS(jint, sp[0].o, temp0) = ((jint)ARRAY_ACCESS(jint, sp[1].o, ((frame[1].i) + (jint(2)))));
	LINE_NUMBER(551);
	sp[0].o = (jobject)((arc_struct_ComparableTimSort *) NULL_CHECK((frame[0].o)))->F_runLen;
	jint temp1 = (frame[1].i) + (jint(1));
	sp[1].o = (jobject)((arc_struct_ComparableTimSort *) NULL_CHECK((frame[0].o)))->F_runLen;
	ARRAY_ACCESS(jint, sp[0].o, temp1) = ((jint)ARRAY_ACCESS(jint, sp[1].o, ((frame[1].i) + (jint(2)))));
	}
label_6:;
	{
	LINE_NUMBER(553);
	sp[0].o = frame[0].o;
	((arc_struct_ComparableTimSort *) NULL_CHECK(sp[0].o))->F_stackSize = (((jint)((arc_struct_ComparableTimSort *) NULL_CHECK(sp[0].o))->F_stackSize) - (jint(1)));
	LINE_NUMBER(559);
	sp[0].o = (jobject)((arc_struct_ComparableTimSort *) NULL_CHECK((frame[0].o)))->F_a;
	sp[0].o = checkCast(ctx, &class_java_lang_Comparable, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[4].i))));
	sp[1].o = (jobject)((arc_struct_ComparableTimSort *) NULL_CHECK((frame[0].o)))->F_a;
	jint temp0 = (jint)SM_arc_struct_ComparableTimSort_gallopRight_java_lang_Comparable_Array1_java_lang_Object_int_int_int_R_int(ctx, sp[0].o, sp[1].o, (frame[2].i), (frame[3].i), (jint(0)));
	frame[6].i = temp0;
	LINE_NUMBER(561);
	frame[2].i = ((frame[2].i) + (frame[6].i));
	LINE_NUMBER(562);
	frame[3].i = ((frame[3].i) - (frame[6].i));
	LINE_NUMBER(563);
	if ((frame[3].i) != 0) goto label_13;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_13:;
	{
	LINE_NUMBER(569);
	sp[0].o = (jobject)((arc_struct_ComparableTimSort *) NULL_CHECK((frame[0].o)))->F_a;
	sp[0].o = checkCast(ctx, &class_java_lang_Comparable, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (((frame[2].i) + (frame[3].i)) - (jint(1))))));
	sp[1].o = (jobject)((arc_struct_ComparableTimSort *) NULL_CHECK((frame[0].o)))->F_a;
	jint temp0 = (jint)SM_arc_struct_ComparableTimSort_gallopLeft_java_lang_Comparable_Array1_java_lang_Object_int_int_int_R_int(ctx, sp[0].o, sp[1].o, (frame[4].i), (frame[5].i), ((frame[5].i) - (jint(1))));
	frame[5].i = temp0;
	LINE_NUMBER(571);
	if ((frame[5].i) != 0) goto label_15;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_15:;
	{
	LINE_NUMBER(574);
	if ((frame[3].i) > (frame[5].i)) goto label_16;
	}
	{
	LINE_NUMBER(575);
	M_arc_struct_ComparableTimSort_mergeLo_int_int_int_int(ctx, (frame[0].o), (frame[2].i), (frame[3].i), (frame[4].i), (frame[5].i));
	goto label_18;
	}
label_16:;
	{
	LINE_NUMBER(577);
	M_arc_struct_ComparableTimSort_mergeHi_int_int_int_int(ctx, (frame[0].o), (frame[2].i), (frame[3].i), (frame[4].i), (frame[5].i));
	}
label_18:;
	LINE_NUMBER(578);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_struct_ComparableTimSort_mergeLo_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[18];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ComparableTimSort:mergeLo", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(597);
	sp[0].o = (jobject)((arc_struct_ComparableTimSort *) NULL_CHECK((frame[0].o)))->F_a;
	frame[5].o = sp[0].o;
	LINE_NUMBER(598);
	sp[0].o = (jobject)M_arc_struct_ComparableTimSort_ensureCapacity_int_R_Array1_java_lang_Object(ctx, (frame[0].o), (frame[2].i));
	frame[6].o = sp[0].o;
	LINE_NUMBER(599);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[5].o), (frame[1].i), (frame[6].o), (jint(0)), (frame[2].i));
	LINE_NUMBER(601);
	frame[7].i = (jint(0));
	LINE_NUMBER(602);
	frame[8].i = (frame[3].i);
	LINE_NUMBER(603);
	frame[9].i = (frame[1].i);
	LINE_NUMBER(606);
	sp[0].o = frame[5].o;
	jint temp0 = frame[9].i;
	INST_IINC(9, 1);
	sp[1].o = frame[5].o;
	jint temp1 = frame[8].i;
	INST_IINC(8, 1);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = ((jobject)ARRAY_ACCESS(jobject, sp[1].o, temp1));
	LINE_NUMBER(607);
	INST_IINC(4, -1);
	if ((frame[4].i) != 0) goto label_8;
	}
	{
	LINE_NUMBER(608);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[6].o), (frame[7].i), (frame[5].o), (frame[9].i), (frame[2].i));
	LINE_NUMBER(609);
	popStackFrame(ctx);
	return;
	}
label_8:;
	{
	LINE_NUMBER(611);
	if ((frame[2].i) != (jint(1))) goto label_11;
	}
	{
	LINE_NUMBER(612);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[5].o), (frame[8].i), (frame[5].o), (frame[9].i), (frame[4].i));
	LINE_NUMBER(613);
	ARRAY_ACCESS(jobject, (frame[5].o), ((frame[9].i) + (frame[4].i))) = ((jobject)ARRAY_ACCESS(jobject, (frame[6].o), (frame[7].i)));
	LINE_NUMBER(614);
	popStackFrame(ctx);
	return;
	}
label_11:;
	{
	LINE_NUMBER(617);
	frame[10].i = ((jint)((arc_struct_ComparableTimSort *) NULL_CHECK((frame[0].o)))->F_minGallop);
	}
label_15:;
	{
	LINE_NUMBER(620);
	frame[11].i = (jint(0));
	LINE_NUMBER(621);
	frame[12].i = (jint(0));
	}
label_17:;
	{
	LINE_NUMBER(628);
	jint temp0 = (jint)((func_java_lang_Comparable_compareTo_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_lang_Comparable, INDEX_java_lang_Comparable_compareTo_java_lang_Object_R_int, (checkCast(ctx, &class_java_lang_Comparable, ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[8].i)))))))(ctx, (checkCast(ctx, &class_java_lang_Comparable, ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[8].i))))), ((jobject)ARRAY_ACCESS(jobject, (frame[6].o), (frame[7].i))));
	if (temp0 >= 0) goto label_18;
	}
	{
	LINE_NUMBER(629);
	sp[0].o = frame[5].o;
	jint temp0 = frame[9].i;
	INST_IINC(9, 1);
	sp[1].o = frame[5].o;
	jint temp1 = frame[8].i;
	INST_IINC(8, 1);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = ((jobject)ARRAY_ACCESS(jobject, sp[1].o, temp1));
	LINE_NUMBER(630);
	INST_IINC(12, 1);
	LINE_NUMBER(631);
	frame[11].i = (jint(0));
	LINE_NUMBER(632);
	INST_IINC(4, -1);
	if ((frame[4].i) != 0) goto label_23;
	}
	goto label_24;
label_18:;
	{
	LINE_NUMBER(634);
	sp[0].o = frame[5].o;
	jint temp0 = frame[9].i;
	INST_IINC(9, 1);
	sp[1].o = frame[6].o;
	jint temp1 = frame[7].i;
	INST_IINC(7, 1);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = ((jobject)ARRAY_ACCESS(jobject, sp[1].o, temp1));
	LINE_NUMBER(635);
	INST_IINC(11, 1);
	LINE_NUMBER(636);
	frame[12].i = (jint(0));
	LINE_NUMBER(637);
	INST_IINC(2, -1);
	if ((frame[2].i) != (jint(1))) goto label_23;
	}
	goto label_24;
label_23:;
	{
	LINE_NUMBER(639);
	if (((frame[11].i) | (frame[12].i)) < (frame[10].i)) goto label_17;
	}
label_28:;
	{
	LINE_NUMBER(647);
	jint temp0 = (jint)SM_arc_struct_ComparableTimSort_gallopRight_java_lang_Comparable_Array1_java_lang_Object_int_int_int_R_int(ctx, (checkCast(ctx, &class_java_lang_Comparable, ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[8].i))))), (frame[6].o), (frame[7].i), (frame[2].i), (jint(0)));
	frame[11].i = temp0;
	LINE_NUMBER(648);
	if ((frame[11].i) == 0) goto label_30;
	}
	{
	LINE_NUMBER(649);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[6].o), (frame[7].i), (frame[5].o), (frame[9].i), (frame[11].i));
	LINE_NUMBER(650);
	frame[9].i = ((frame[9].i) + (frame[11].i));
	LINE_NUMBER(651);
	frame[7].i = ((frame[7].i) + (frame[11].i));
	LINE_NUMBER(652);
	frame[2].i = ((frame[2].i) - (frame[11].i));
	LINE_NUMBER(653);
	if ((frame[2].i) > (jint(1))) goto label_30;
	}
	LINE_NUMBER(654);
	goto label_24;
label_30:;
	{
	LINE_NUMBER(656);
	sp[0].o = frame[5].o;
	jint temp0 = frame[9].i;
	INST_IINC(9, 1);
	sp[1].o = frame[5].o;
	jint temp1 = frame[8].i;
	INST_IINC(8, 1);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = ((jobject)ARRAY_ACCESS(jobject, sp[1].o, temp1));
	LINE_NUMBER(657);
	INST_IINC(4, -1);
	if ((frame[4].i) != 0) goto label_38;
	}
	goto label_24;
label_38:;
	{
	LINE_NUMBER(659);
	jint temp0 = (jint)SM_arc_struct_ComparableTimSort_gallopLeft_java_lang_Comparable_Array1_java_lang_Object_int_int_int_R_int(ctx, (checkCast(ctx, &class_java_lang_Comparable, ((jobject)ARRAY_ACCESS(jobject, (frame[6].o), (frame[7].i))))), (frame[5].o), (frame[8].i), (frame[4].i), (jint(0)));
	frame[12].i = temp0;
	LINE_NUMBER(660);
	if ((frame[12].i) == 0) goto label_40;
	}
	{
	LINE_NUMBER(661);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[5].o), (frame[8].i), (frame[5].o), (frame[9].i), (frame[12].i));
	LINE_NUMBER(662);
	frame[9].i = ((frame[9].i) + (frame[12].i));
	LINE_NUMBER(663);
	frame[8].i = ((frame[8].i) + (frame[12].i));
	LINE_NUMBER(664);
	frame[4].i = ((frame[4].i) - (frame[12].i));
	LINE_NUMBER(665);
	if ((frame[4].i) != 0) goto label_40;
	}
	goto label_24;
label_40:;
	{
	LINE_NUMBER(667);
	sp[0].o = frame[5].o;
	jint temp0 = frame[9].i;
	INST_IINC(9, 1);
	sp[1].o = frame[6].o;
	jint temp1 = frame[7].i;
	INST_IINC(7, 1);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = ((jobject)ARRAY_ACCESS(jobject, sp[1].o, temp1));
	LINE_NUMBER(668);
	INST_IINC(2, -1);
	if ((frame[2].i) != (jint(1))) goto label_47;
	}
	goto label_24;
label_47:;
	{
	LINE_NUMBER(669);
	INST_IINC(10, -1);
	LINE_NUMBER(670);
	if ((frame[11].i) < (7)) goto label_49;
	}
	INST_ICONST(1);
	goto label_50;
label_49:;
	INST_ICONST(0);
label_50:;
	{
	if ((frame[12].i) < (7)) goto label_51;
	}
	INST_ICONST(1);
	goto label_52;
label_51:;
	INST_ICONST(0);
label_52:;
	INST_IOR();
	if ((--sp)->i != 0) goto label_28;
	{
	LINE_NUMBER(671);
	if ((frame[10].i) >= 0) goto label_54;
	}
	INST_ICONST(0);
	INST_ISTORE(10);
label_54:;
	{
	LINE_NUMBER(672);
	INST_IINC(10, 2);
	LINE_NUMBER(673);
	goto label_15;
	}
label_24:;
	{
	LINE_NUMBER(674);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[10].i) >= (jint(1))) goto label_56;
	}
	INST_ICONST(1);
	goto label_57;
label_56:;
	INST_ILOAD(10);
label_57:;
	{
	sp -= 2;
	((arc_struct_ComparableTimSort *) NULL_CHECK(sp[0].o))->F_minGallop = sp[1].i;
	LINE_NUMBER(676);
	if ((frame[2].i) != (jint(1))) goto label_59;
	}
	{
	LINE_NUMBER(678);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[5].o), (frame[8].i), (frame[5].o), (frame[9].i), (frame[4].i));
	LINE_NUMBER(679);
	ARRAY_ACCESS(jobject, (frame[5].o), ((frame[9].i) + (frame[4].i))) = ((jobject)ARRAY_ACCESS(jobject, (frame[6].o), (frame[7].i)));
	goto label_62;
	}
label_59:;
	{
	LINE_NUMBER(680);
	if ((frame[2].i) != 0) goto label_63;
	}
	{
	LINE_NUMBER(681);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Comparison method violates its general contract!"_j))));
	throwException(ctx, sp[0].o);	}
label_63:;
	{
	LINE_NUMBER(685);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[6].o), (frame[7].i), (frame[5].o), (frame[9].i), (frame[2].i));
	}
label_62:;
	LINE_NUMBER(687);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_struct_ComparableTimSort_mergeHi_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[20];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ComparableTimSort:mergeHi", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(702);
	sp[0].o = (jobject)((arc_struct_ComparableTimSort *) NULL_CHECK((frame[0].o)))->F_a;
	frame[5].o = sp[0].o;
	LINE_NUMBER(703);
	sp[0].o = (jobject)M_arc_struct_ComparableTimSort_ensureCapacity_int_R_Array1_java_lang_Object(ctx, (frame[0].o), (frame[4].i));
	frame[6].o = sp[0].o;
	LINE_NUMBER(704);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[5].o), (frame[3].i), (frame[6].o), (jint(0)), (frame[4].i));
	LINE_NUMBER(706);
	frame[7].i = (((frame[1].i) + (frame[2].i)) - (jint(1)));
	LINE_NUMBER(707);
	frame[8].i = ((frame[4].i) - (jint(1)));
	LINE_NUMBER(708);
	frame[9].i = (((frame[3].i) + (frame[4].i)) - (jint(1)));
	LINE_NUMBER(711);
	sp[0].o = frame[5].o;
	jint temp0 = frame[9].i;
	INST_IINC(9, -1);
	sp[1].o = frame[5].o;
	jint temp1 = frame[7].i;
	INST_IINC(7, -1);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = ((jobject)ARRAY_ACCESS(jobject, sp[1].o, temp1));
	LINE_NUMBER(712);
	INST_IINC(2, -1);
	if ((frame[2].i) != 0) goto label_8;
	}
	{
	LINE_NUMBER(713);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[6].o), (jint(0)), (frame[5].o), ((frame[9].i) - ((frame[4].i) - (jint(1)))), (frame[4].i));
	LINE_NUMBER(714);
	popStackFrame(ctx);
	return;
	}
label_8:;
	{
	LINE_NUMBER(716);
	if ((frame[4].i) != (jint(1))) goto label_11;
	}
	{
	LINE_NUMBER(717);
	frame[9].i = ((frame[9].i) - (frame[2].i));
	LINE_NUMBER(718);
	frame[7].i = ((frame[7].i) - (frame[2].i));
	LINE_NUMBER(719);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[5].o), ((frame[7].i) + (jint(1))), (frame[5].o), ((frame[9].i) + (jint(1))), (frame[2].i));
	LINE_NUMBER(720);
	ARRAY_ACCESS(jobject, (frame[5].o), (frame[9].i)) = ((jobject)ARRAY_ACCESS(jobject, (frame[6].o), (frame[8].i)));
	LINE_NUMBER(721);
	popStackFrame(ctx);
	return;
	}
label_11:;
	{
	LINE_NUMBER(724);
	frame[10].i = ((jint)((arc_struct_ComparableTimSort *) NULL_CHECK((frame[0].o)))->F_minGallop);
	}
label_17:;
	{
	LINE_NUMBER(727);
	frame[11].i = (jint(0));
	LINE_NUMBER(728);
	frame[12].i = (jint(0));
	}
label_19:;
	{
	LINE_NUMBER(735);
	jint temp0 = (jint)((func_java_lang_Comparable_compareTo_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_lang_Comparable, INDEX_java_lang_Comparable_compareTo_java_lang_Object_R_int, (checkCast(ctx, &class_java_lang_Comparable, ((jobject)ARRAY_ACCESS(jobject, (frame[6].o), (frame[8].i)))))))(ctx, (checkCast(ctx, &class_java_lang_Comparable, ((jobject)ARRAY_ACCESS(jobject, (frame[6].o), (frame[8].i))))), ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[7].i))));
	if (temp0 >= 0) goto label_20;
	}
	{
	LINE_NUMBER(736);
	sp[0].o = frame[5].o;
	jint temp0 = frame[9].i;
	INST_IINC(9, -1);
	sp[1].o = frame[5].o;
	jint temp1 = frame[7].i;
	INST_IINC(7, -1);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = ((jobject)ARRAY_ACCESS(jobject, sp[1].o, temp1));
	LINE_NUMBER(737);
	INST_IINC(11, 1);
	LINE_NUMBER(738);
	frame[12].i = (jint(0));
	LINE_NUMBER(739);
	INST_IINC(2, -1);
	if ((frame[2].i) != 0) goto label_25;
	}
	goto label_26;
label_20:;
	{
	LINE_NUMBER(741);
	sp[0].o = frame[5].o;
	jint temp0 = frame[9].i;
	INST_IINC(9, -1);
	sp[1].o = frame[6].o;
	jint temp1 = frame[8].i;
	INST_IINC(8, -1);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = ((jobject)ARRAY_ACCESS(jobject, sp[1].o, temp1));
	LINE_NUMBER(742);
	INST_IINC(12, 1);
	LINE_NUMBER(743);
	frame[11].i = (jint(0));
	LINE_NUMBER(744);
	INST_IINC(4, -1);
	if ((frame[4].i) != (jint(1))) goto label_25;
	}
	goto label_26;
label_25:;
	{
	LINE_NUMBER(746);
	if (((frame[11].i) | (frame[12].i)) < (frame[10].i)) goto label_19;
	}
label_30:;
	{
	LINE_NUMBER(754);
	jint temp0 = frame[2].i;
	jint temp1 = (jint)SM_arc_struct_ComparableTimSort_gallopRight_java_lang_Comparable_Array1_java_lang_Object_int_int_int_R_int(ctx, (checkCast(ctx, &class_java_lang_Comparable, ((jobject)ARRAY_ACCESS(jobject, (frame[6].o), (frame[8].i))))), (frame[5].o), (frame[1].i), (frame[2].i), ((frame[2].i) - (jint(1))));
	frame[11].i = (temp0 - temp1);
	LINE_NUMBER(755);
	if ((frame[11].i) == 0) goto label_32;
	}
	{
	LINE_NUMBER(756);
	frame[9].i = ((frame[9].i) - (frame[11].i));
	LINE_NUMBER(757);
	frame[7].i = ((frame[7].i) - (frame[11].i));
	LINE_NUMBER(758);
	frame[2].i = ((frame[2].i) - (frame[11].i));
	LINE_NUMBER(759);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[5].o), ((frame[7].i) + (jint(1))), (frame[5].o), ((frame[9].i) + (jint(1))), (frame[11].i));
	LINE_NUMBER(760);
	if ((frame[2].i) != 0) goto label_32;
	}
	goto label_26;
label_32:;
	{
	LINE_NUMBER(762);
	sp[0].o = frame[5].o;
	jint temp0 = frame[9].i;
	INST_IINC(9, -1);
	sp[1].o = frame[6].o;
	jint temp1 = frame[8].i;
	INST_IINC(8, -1);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = ((jobject)ARRAY_ACCESS(jobject, sp[1].o, temp1));
	LINE_NUMBER(763);
	INST_IINC(4, -1);
	if ((frame[4].i) != (jint(1))) goto label_39;
	}
	goto label_26;
label_39:;
	{
	LINE_NUMBER(765);
	jint temp0 = frame[4].i;
	jint temp1 = (jint)SM_arc_struct_ComparableTimSort_gallopLeft_java_lang_Comparable_Array1_java_lang_Object_int_int_int_R_int(ctx, (checkCast(ctx, &class_java_lang_Comparable, ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[7].i))))), (frame[6].o), (jint(0)), (frame[4].i), ((frame[4].i) - (jint(1))));
	frame[12].i = (temp0 - temp1);
	LINE_NUMBER(766);
	if ((frame[12].i) == 0) goto label_41;
	}
	{
	LINE_NUMBER(767);
	frame[9].i = ((frame[9].i) - (frame[12].i));
	LINE_NUMBER(768);
	frame[8].i = ((frame[8].i) - (frame[12].i));
	LINE_NUMBER(769);
	frame[4].i = ((frame[4].i) - (frame[12].i));
	LINE_NUMBER(770);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[6].o), ((frame[8].i) + (jint(1))), (frame[5].o), ((frame[9].i) + (jint(1))), (frame[12].i));
	LINE_NUMBER(771);
	if ((frame[4].i) > (jint(1))) goto label_41;
	}
	goto label_26;
label_41:;
	{
	LINE_NUMBER(773);
	sp[0].o = frame[5].o;
	jint temp0 = frame[9].i;
	INST_IINC(9, -1);
	sp[1].o = frame[5].o;
	jint temp1 = frame[7].i;
	INST_IINC(7, -1);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = ((jobject)ARRAY_ACCESS(jobject, sp[1].o, temp1));
	LINE_NUMBER(774);
	INST_IINC(2, -1);
	if ((frame[2].i) != 0) goto label_48;
	}
	goto label_26;
label_48:;
	{
	LINE_NUMBER(775);
	INST_IINC(10, -1);
	LINE_NUMBER(776);
	if ((frame[11].i) < (7)) goto label_50;
	}
	INST_ICONST(1);
	goto label_51;
label_50:;
	INST_ICONST(0);
label_51:;
	{
	if ((frame[12].i) < (7)) goto label_52;
	}
	INST_ICONST(1);
	goto label_53;
label_52:;
	INST_ICONST(0);
label_53:;
	INST_IOR();
	if ((--sp)->i != 0) goto label_30;
	{
	LINE_NUMBER(777);
	if ((frame[10].i) >= 0) goto label_55;
	}
	INST_ICONST(0);
	INST_ISTORE(10);
label_55:;
	{
	LINE_NUMBER(778);
	INST_IINC(10, 2);
	LINE_NUMBER(779);
	goto label_17;
	}
label_26:;
	{
	LINE_NUMBER(780);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[10].i) >= (jint(1))) goto label_57;
	}
	INST_ICONST(1);
	goto label_58;
label_57:;
	INST_ILOAD(10);
label_58:;
	{
	sp -= 2;
	((arc_struct_ComparableTimSort *) NULL_CHECK(sp[0].o))->F_minGallop = sp[1].i;
	LINE_NUMBER(782);
	if ((frame[4].i) != (jint(1))) goto label_60;
	}
	{
	LINE_NUMBER(784);
	frame[9].i = ((frame[9].i) - (frame[2].i));
	LINE_NUMBER(785);
	frame[7].i = ((frame[7].i) - (frame[2].i));
	LINE_NUMBER(786);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[5].o), ((frame[7].i) + (jint(1))), (frame[5].o), ((frame[9].i) + (jint(1))), (frame[2].i));
	LINE_NUMBER(787);
	ARRAY_ACCESS(jobject, (frame[5].o), (frame[9].i)) = ((jobject)ARRAY_ACCESS(jobject, (frame[6].o), (frame[8].i)));
	goto label_65;
	}
label_60:;
	{
	LINE_NUMBER(788);
	if ((frame[4].i) != 0) goto label_66;
	}
	{
	LINE_NUMBER(789);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Comparison method violates its general contract!"_j))));
	throwException(ctx, sp[0].o);	}
label_66:;
	{
	LINE_NUMBER(793);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[6].o), (jint(0)), (frame[5].o), ((frame[9].i) - ((frame[4].i) - (jint(1)))), (frame[4].i));
	}
label_65:;
	LINE_NUMBER(795);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_arc_struct_ComparableTimSort_ensureCapacity_int_R_Array1_java_lang_Object(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ComparableTimSort:ensureCapacity", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(804);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, ((jint)((arc_struct_ComparableTimSort *) NULL_CHECK((frame[0].o)))->F_tmpCount), (frame[1].i));
	((arc_struct_ComparableTimSort *) NULL_CHECK(sp[0].o))->F_tmpCount = temp0;
	LINE_NUMBER(805);
	sp[0].o = (jobject)((arc_struct_ComparableTimSort *) NULL_CHECK((frame[0].o)))->F_tmp;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) >= (frame[1].i)) goto label_2;
	}
	{
	LINE_NUMBER(807);
	frame[2].i = (frame[1].i);
	LINE_NUMBER(808);
	frame[2].i = ((frame[2].i) | ((frame[2].i) >> (jint(1))));
	LINE_NUMBER(809);
	frame[2].i = ((frame[2].i) | ((frame[2].i) >> (jint(2))));
	LINE_NUMBER(810);
	frame[2].i = ((frame[2].i) | ((frame[2].i) >> (jint(4))));
	LINE_NUMBER(811);
	frame[2].i = ((frame[2].i) | ((frame[2].i) >> (8)));
	LINE_NUMBER(812);
	frame[2].i = ((frame[2].i) | ((frame[2].i) >> (16)));
	LINE_NUMBER(813);
	INST_IINC(2, 1);
	LINE_NUMBER(815);
	if ((frame[2].i) >= 0) goto label_11;
	}
	{
	LINE_NUMBER(816);
	frame[2].i = (frame[1].i);
	goto label_13;
	}
label_11:;
	{
	LINE_NUMBER(818);
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((arc_struct_ComparableTimSort *) NULL_CHECK((frame[0].o)))->F_a;
	jint temp1 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp0, (bit_cast<jint>(bit_cast<uint32_t>((((jarray) nullCheck(ctx, sp[0].o))->length)) >> (jint(1)))));
	frame[2].i = temp1;
	}
label_13:;
	{
	LINE_NUMBER(820);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (frame[2].i));
	((arc_struct_ComparableTimSort *) NULL_CHECK(sp[0].o))->F_tmp = (jref) sp[1].o;
	}
label_2:;
	{
	LINE_NUMBER(822);
	sp[0].o = (jobject)((arc_struct_ComparableTimSort *) NULL_CHECK((frame[0].o)))->F_tmp;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_arc_struct_ComparableTimSort[] {
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
	(void *) M_arc_struct_ComparableTimSort_doSort_Array1_java_lang_Object_int_int,
	(void *) M_arc_struct_ComparableTimSort_pushRun_int_int,
	(void *) M_arc_struct_ComparableTimSort_mergeCollapse,
	(void *) M_arc_struct_ComparableTimSort_mergeForceCollapse,
	(void *) M_arc_struct_ComparableTimSort_mergeAt_int,
	(void *) M_arc_struct_ComparableTimSort_mergeLo_int_int_int_int,
	(void *) M_arc_struct_ComparableTimSort_mergeHi_int_int_int_int,
	(void *) M_arc_struct_ComparableTimSort_ensureCapacity_int_R_Array1_java_lang_Object,
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
	{ "doSort", "([Ljava/lang/Object;II)V" },
	{ "pushRun", "(II)V" },
	{ "mergeCollapse", "()V" },
	{ "mergeForceCollapse", "()V" },
	{ "mergeAt", "(I)V" },
	{ "mergeLo", "(IIII)V" },
	{ "mergeHi", "(IIII)V" },
	{ "ensureCapacity", "(I)[Ljava/lang/Object;" },
};

static FieldMetadata fields[] {
	{ "MIN_MERGE", &class_int, (intptr_t) &SF_arc_struct_ComparableTimSort_MIN_MERGE, "I", 26 },
	{ "MIN_GALLOP", &class_int, (intptr_t) &SF_arc_struct_ComparableTimSort_MIN_GALLOP, "I", 26 },
	{ "INITIAL_TMP_STORAGE_LENGTH", &class_int, (intptr_t) &SF_arc_struct_ComparableTimSort_INITIAL_TMP_STORAGE_LENGTH, "I", 26 },
	{ "DEBUG", &class_boolean, (intptr_t) &SF_arc_struct_ComparableTimSort_DEBUG, "Z", 26 },
	{ "runBase", getArrayClass(&class_int, 1), offsetof(arc_struct_ComparableTimSort, F_runBase), "[I", 18 },
	{ "runLen", getArrayClass(&class_int, 1), offsetof(arc_struct_ComparableTimSort, F_runLen), "[I", 18 },
	{ "a", getArrayClass(&class_java_lang_Object, 1), offsetof(arc_struct_ComparableTimSort, F_a), "[Ljava/lang/Object;", 2 },
	{ "minGallop", &class_int, offsetof(arc_struct_ComparableTimSort, F_minGallop), "I", 2 },
	{ "tmp", getArrayClass(&class_java_lang_Object, 1), offsetof(arc_struct_ComparableTimSort, F_tmp), "[Ljava/lang/Object;", 2 },
	{ "tmpCount", &class_int, offsetof(arc_struct_ComparableTimSort, F_tmpCount), "I", 2 },
	{ "stackSize", &class_int, offsetof(arc_struct_ComparableTimSort, F_stackSize), "I", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_struct_ComparableTimSort, 0, "()V", 0 },
	{ "<init>", (intptr_t) init_arc_struct_ComparableTimSort_Array1_java_lang_Object, 0, "([Ljava/lang/Object;)V", 2 },
	{ "sort", (intptr_t) SM_arc_struct_ComparableTimSort_sort_Array1_java_lang_Object, 0, "([Ljava/lang/Object;)V", 8 },
	{ "sort", (intptr_t) SM_arc_struct_ComparableTimSort_sort_Array1_java_lang_Object_int_int, 0, "([Ljava/lang/Object;II)V", 8 },
	{ "binarySort", (intptr_t) SM_arc_struct_ComparableTimSort_binarySort_Array1_java_lang_Object_int_int_int, 0, "([Ljava/lang/Object;III)V", 10 },
	{ "countRunAndMakeAscending", (intptr_t) SM_arc_struct_ComparableTimSort_countRunAndMakeAscending_Array1_java_lang_Object_int_int_R_int, 0, "([Ljava/lang/Object;II)I", 10 },
	{ "reverseRange", (intptr_t) SM_arc_struct_ComparableTimSort_reverseRange_Array1_java_lang_Object_int_int, 0, "([Ljava/lang/Object;II)V", 10 },
	{ "minRunLength", (intptr_t) SM_arc_struct_ComparableTimSort_minRunLength_int_R_int, 0, "(I)I", 10 },
	{ "gallopLeft", (intptr_t) SM_arc_struct_ComparableTimSort_gallopLeft_java_lang_Comparable_Array1_java_lang_Object_int_int_int_R_int, 0, "(Ljava/lang/Comparable;[Ljava/lang/Object;III)I", 10 },
	{ "gallopRight", (intptr_t) SM_arc_struct_ComparableTimSort_gallopRight_java_lang_Comparable_Array1_java_lang_Object_int_int_int_R_int, 0, "(Ljava/lang/Comparable;[Ljava/lang/Object;III)I", 10 },
	{ "rangeCheck", (intptr_t) SM_arc_struct_ComparableTimSort_rangeCheck_int_int_int, 0, "(III)V", 10 },
	{ "doSort", (intptr_t) M_arc_struct_ComparableTimSort_doSort_Array1_java_lang_Object_int_int, VTABLE_arc_struct_ComparableTimSort_doSort_Array1_java_lang_Object_int_int, "([Ljava/lang/Object;II)V", 1 },
	{ "pushRun", (intptr_t) M_arc_struct_ComparableTimSort_pushRun_int_int, VTABLE_arc_struct_ComparableTimSort_pushRun_int_int, "(II)V", 2 },
	{ "mergeCollapse", (intptr_t) M_arc_struct_ComparableTimSort_mergeCollapse, VTABLE_arc_struct_ComparableTimSort_mergeCollapse, "()V", 2 },
	{ "mergeForceCollapse", (intptr_t) M_arc_struct_ComparableTimSort_mergeForceCollapse, VTABLE_arc_struct_ComparableTimSort_mergeForceCollapse, "()V", 2 },
	{ "mergeAt", (intptr_t) M_arc_struct_ComparableTimSort_mergeAt_int, VTABLE_arc_struct_ComparableTimSort_mergeAt_int, "(I)V", 2 },
	{ "mergeLo", (intptr_t) M_arc_struct_ComparableTimSort_mergeLo_int_int_int_int, VTABLE_arc_struct_ComparableTimSort_mergeLo_int_int_int_int, "(IIII)V", 2 },
	{ "mergeHi", (intptr_t) M_arc_struct_ComparableTimSort_mergeHi_int_int_int_int, VTABLE_arc_struct_ComparableTimSort_mergeHi_int_int_int_int, "(IIII)V", 2 },
	{ "ensureCapacity", (intptr_t) M_arc_struct_ComparableTimSort_ensureCapacity_int_R_Array1_java_lang_Object, VTABLE_arc_struct_ComparableTimSort_ensureCapacity_int_R_Array1_java_lang_Object, "(I)[Ljava/lang/Object;", 2 },
};

Class class_arc_struct_ComparableTimSort{
		.nativeName = (intptr_t) "arc/struct/ComparableTimSort",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_struct_ComparableTimSort),
		.classVtable = (intptr_t) vtable_arc_struct_ComparableTimSort,
		.staticInitializer = (intptr_t) clinit_arc_struct_ComparableTimSort,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_struct_ComparableTimSort,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 11,
		.nativeFields = (intptr_t) fields,
		.methodCount = 19,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 19,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_struct_ComparableTimSort = registerClass(&class_arc_struct_ComparableTimSort);

}
