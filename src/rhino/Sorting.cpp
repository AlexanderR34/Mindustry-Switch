#include "rhino/Sorting.h"
#include "java/lang/Math.h"
#include "java/lang/Object.h"
#include "rhino/Sorting.h"
#include "java/util/Comparator.h"

extern "C" {

jint SF_rhino_Sorting_SMALLSORT;
jobject SF_rhino_Sorting_sorting;

void mark_rhino_Sorting(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_rhino_Sorting_sorting)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_Sorting_sorting)->clazz)->markFunction)((jobject) SF_rhino_Sorting_sorting, mark, depth + 1);
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
	auto self = (rhino_Sorting *) object;
}

void init_rhino_Sorting(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Sorting:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Sorting(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(10);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(11);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_Sorting_get_R_rhino_Sorting(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Sorting:get", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Sorting(ctx);
	{
	LINE_NUMBER(14);
	clinit_rhino_Sorting(ctx);
	sp[0].o = (jobject)SF_rhino_Sorting_sorting;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_rhino_Sorting_insertionSort_Array1_java_lang_Object_java_util_Comparator(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Sorting:insertionSort", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(18);
	M_rhino_Sorting_insertionSort_Array1_java_lang_Object_int_int_java_util_Comparator(ctx, (frame[0].o), (frame[1].o), (jint(0)), ((((jarray) nullCheck(ctx, (frame[1].o)))->length) - (jint(1))), (frame[2].o));
	LINE_NUMBER(19);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_Sorting_insertionSort_Array1_java_lang_Object_int_int_java_util_Comparator(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Sorting:insertionSort", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(22);
	frame[5].i = (frame[2].i);
	}
label_1:;
	{
	LINE_NUMBER(23);
	if ((frame[5].i) > (frame[3].i)) goto label_2;
	}
	{
	LINE_NUMBER(24);
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[5].i)));
	LINE_NUMBER(25);
	frame[7].i = ((frame[5].i) - (jint(1)));
	}
label_5:;
	{
	LINE_NUMBER(26);
	if ((frame[7].i) < (frame[2].i)) goto label_6;
	}
	{
	jint temp0 = (jint)((func_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, (frame[4].o)))(ctx, (frame[4].o), ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[7].i))), (frame[6].o));
	if (temp0 <= 0) goto label_6;
	}
	{
	LINE_NUMBER(27);
	ARRAY_ACCESS(jobject, (frame[1].o), ((frame[7].i) + (jint(1)))) = ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[7].i)));
	LINE_NUMBER(28);
	INST_IINC(7, -1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(30);
	ARRAY_ACCESS(jobject, (frame[1].o), ((frame[7].i) + (jint(1)))) = (frame[6].o);
	LINE_NUMBER(31);
	INST_IINC(5, 1);
	LINE_NUMBER(32);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(33);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_rhino_Sorting_hybridSort_Array1_java_lang_Object_java_util_Comparator(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Sorting:hybridSort", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(42);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jint temp0 = jint(0);
	jint temp1 = (((jarray) nullCheck(ctx, (frame[1].o)))->length) - (jint(1));
	sp[2].o = frame[2].o;
	jint temp2 = (jint)M_rhino_Sorting_log2_int_R_int(ctx, (frame[0].o), (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	M_rhino_Sorting_hybridSort_Array1_java_lang_Object_int_int_java_util_Comparator_int(ctx, sp[0].o, sp[1].o, temp0, temp1, sp[2].o, (temp2 * (jint(2))));
	LINE_NUMBER(43);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_Sorting_hybridSort_Array1_java_lang_Object_int_int_java_util_Comparator_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jobject param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Sorting:hybridSort", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(46);
	if ((frame[2].i) >= (frame[3].i)) goto label_1;
	}
	{
	LINE_NUMBER(47);
	if ((frame[5].i) == 0) goto label_3;
	}
	{
	if (((frame[3].i) - (frame[2].i)) > (16)) goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(48);
	M_rhino_Sorting_insertionSort_Array1_java_lang_Object_int_int_java_util_Comparator(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].i), (frame[4].o));
	goto label_1;
	}
label_4:;
	{
	LINE_NUMBER(50);
	jint temp0 = (jint)M_rhino_Sorting_partition_Array1_java_lang_Object_int_int_java_util_Comparator_R_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].i), (frame[4].o));
	frame[6].i = temp0;
	LINE_NUMBER(51);
	M_rhino_Sorting_hybridSort_Array1_java_lang_Object_int_int_java_util_Comparator_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[6].i), (frame[4].o), ((frame[5].i) - (jint(1))));
	LINE_NUMBER(52);
	M_rhino_Sorting_hybridSort_Array1_java_lang_Object_int_int_java_util_Comparator_int(ctx, (frame[0].o), (frame[1].o), ((frame[6].i) + (jint(1))), (frame[3].i), (frame[4].o), ((frame[5].i) - (jint(1))));
	}
label_1:;
	LINE_NUMBER(55);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_rhino_Sorting_partition_Array1_java_lang_Object_int_int_java_util_Comparator_R_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Sorting:partition", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(64);
	jint temp0 = (jint)((func_rhino_Sorting_median_Array1_java_lang_Object_int_int_java_util_Comparator_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Sorting_median_Array1_java_lang_Object_int_int_java_util_Comparator_R_int])(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].i), (frame[4].o));
	frame[5].i = temp0;
	LINE_NUMBER(65);
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[5].i)));
	LINE_NUMBER(66);
	ARRAY_ACCESS(jobject, (frame[1].o), (frame[5].i)) = ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[2].i)));
	LINE_NUMBER(67);
	ARRAY_ACCESS(jobject, (frame[1].o), (frame[2].i)) = (frame[6].o);
	LINE_NUMBER(69);
	frame[7].i = (frame[2].i);
	LINE_NUMBER(70);
	frame[8].i = ((frame[3].i) + (jint(1)));
	}
label_6:;
	{
	LINE_NUMBER(73);
	sp[0].o = frame[4].o;
	sp[1].o = frame[1].o;
	INST_IINC(7, 1);
	jint temp0 = (jint)((func_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, sp[0].o))(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[7].i))), (frame[6].o));
	if (temp0 >= 0) goto label_7;
	}
	{
	LINE_NUMBER(74);
	if ((frame[7].i) != (frame[3].i)) goto label_6;
	}
	LINE_NUMBER(75);
	goto label_7;
label_7:;
	{
	LINE_NUMBER(78);
	sp[0].o = frame[4].o;
	sp[1].o = frame[1].o;
	INST_IINC(8, -1);
	jint temp0 = (jint)((func_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, sp[0].o))(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[8].i))), (frame[6].o));
	if (temp0 < 0) goto label_10;
	}
	{
	LINE_NUMBER(79);
	if ((frame[8].i) != (frame[2].i)) goto label_7;
	}
	LINE_NUMBER(80);
	goto label_10;
label_10:;
	{
	LINE_NUMBER(83);
	if ((frame[7].i) < (frame[8].i)) goto label_13;
	}
	LINE_NUMBER(84);
	goto label_15;
label_13:;
	{
	LINE_NUMBER(86);
	M_rhino_Sorting_swap_Array1_java_lang_Object_int_int(ctx, (frame[0].o), (frame[1].o), (frame[7].i), (frame[8].i));
	goto label_6;
	}
label_15:;
	{
	LINE_NUMBER(89);
	M_rhino_Sorting_swap_Array1_java_lang_Object_int_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[8].i));
	LINE_NUMBER(90);
	popStackFrame(ctx);
	return (frame[8].i);
	}

	popStackFrame(ctx);
}

void M_rhino_Sorting_swap_Array1_java_lang_Object_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Sorting:swap", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(94);
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[2].i)));
	LINE_NUMBER(95);
	ARRAY_ACCESS(jobject, (frame[1].o), (frame[2].i)) = ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i)));
	LINE_NUMBER(96);
	ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i)) = (frame[4].o);
	LINE_NUMBER(97);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_rhino_Sorting_log2_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Sorting:log2", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(100);
	jdouble temp0 = (jdouble)SM_java_lang_Math_log10_double_R_double(ctx, (jdouble((frame[1].i))));
	jdouble temp1 = (jdouble)SM_java_lang_Math_log10_double_R_double(ctx, (jdouble(2.0)));
	popStackFrame(ctx);
	return (jint((temp0 / temp1)));
	}

	popStackFrame(ctx);
}

jint M_rhino_Sorting_median_Array1_java_lang_Object_int_int_java_util_Comparator_R_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Sorting:median", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(108);
	frame[5].i = ((frame[2].i) + (((frame[3].i) - (frame[2].i)) / (jint(2))));
	LINE_NUMBER(109);
	frame[6].i = (frame[2].i);
	LINE_NUMBER(111);
	jint temp0 = (jint)((func_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, (frame[4].o)))(ctx, (frame[4].o), ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[6].i))), ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[5].i))));
	if (temp0 <= 0) goto label_3;
	}
	{
	LINE_NUMBER(112);
	frame[6].i = (frame[5].i);
	}
label_3:;
	{
	LINE_NUMBER(114);
	jint temp0 = (jint)((func_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, (frame[4].o)))(ctx, (frame[4].o), ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[6].i))), ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i))));
	if (temp0 <= 0) goto label_5;
	}
	{
	LINE_NUMBER(115);
	frame[6].i = (frame[3].i);
	}
label_5:;
	{
	LINE_NUMBER(118);
	if ((frame[6].i) != (frame[2].i)) goto label_7;
	}
	{
	LINE_NUMBER(119);
	jint temp0 = (jint)((func_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, (frame[4].o)))(ctx, (frame[4].o), ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[5].i))), ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i))));
	if (temp0 >= 0) goto label_9;
	}
	INST_ILOAD(5);
	goto label_10;
label_9:;
	INST_ILOAD(3);
label_10:;
	popStackFrame(ctx);
	INST_IRETURN();
label_7:;
	{
	LINE_NUMBER(121);
	if ((frame[6].i) != (frame[5].i)) goto label_11;
	}
	{
	LINE_NUMBER(122);
	jint temp0 = (jint)((func_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, (frame[4].o)))(ctx, (frame[4].o), ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[2].i))), ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i))));
	if (temp0 >= 0) goto label_13;
	}
	INST_ILOAD(2);
	goto label_14;
label_13:;
	INST_ILOAD(3);
label_14:;
	popStackFrame(ctx);
	INST_IRETURN();
label_11:;
	{
	LINE_NUMBER(124);
	jint temp0 = (jint)((func_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, (frame[4].o)))(ctx, (frame[4].o), ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[2].i))), ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[5].i))));
	if (temp0 >= 0) goto label_15;
	}
	INST_ILOAD(2);
	goto label_16;
label_15:;
	INST_ILOAD(5);
label_16:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void clinit_rhino_Sorting(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_rhino_Sorting_SMALLSORT = jint(16);
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Sorting:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Sorting(ctx);
	{
	LINE_NUMBER(8);
	clinit_rhino_Sorting(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Sorting);
	init_rhino_Sorting(ctx, sp[0].o);
	clinit_rhino_Sorting(ctx);
	SF_rhino_Sorting_sorting = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_rhino_Sorting[] {
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
	(void *) M_rhino_Sorting_insertionSort_Array1_java_lang_Object_java_util_Comparator,
	(void *) M_rhino_Sorting_insertionSort_Array1_java_lang_Object_int_int_java_util_Comparator,
	(void *) M_rhino_Sorting_hybridSort_Array1_java_lang_Object_java_util_Comparator,
	(void *) M_rhino_Sorting_hybridSort_Array1_java_lang_Object_int_int_java_util_Comparator_int,
	(void *) M_rhino_Sorting_partition_Array1_java_lang_Object_int_int_java_util_Comparator_R_int,
	(void *) M_rhino_Sorting_swap_Array1_java_lang_Object_int_int,
	(void *) M_rhino_Sorting_log2_int_R_int,
	(void *) M_rhino_Sorting_median_Array1_java_lang_Object_int_int_java_util_Comparator_R_int,
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
	{ "insertionSort", "([Ljava/lang/Object;Ljava/util/Comparator;)V" },
	{ "insertionSort", "([Ljava/lang/Object;IILjava/util/Comparator;)V" },
	{ "hybridSort", "([Ljava/lang/Object;Ljava/util/Comparator;)V" },
	{ "hybridSort", "([Ljava/lang/Object;IILjava/util/Comparator;I)V" },
	{ "partition", "([Ljava/lang/Object;IILjava/util/Comparator;)I" },
	{ "swap", "([Ljava/lang/Object;II)V" },
	{ "log2", "(I)I" },
	{ "median", "([Ljava/lang/Object;IILjava/util/Comparator;)I" },
};

static FieldMetadata fields[] {
	{ "SMALLSORT", &class_int, (intptr_t) &SF_rhino_Sorting_SMALLSORT, "I", 26 },
	{ "sorting", &class_rhino_Sorting, (intptr_t) &SF_rhino_Sorting_sorting, "Lrhino/Sorting;", 26 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_Sorting, 0, "()V", 2 },
	{ "get", (intptr_t) SM_rhino_Sorting_get_R_rhino_Sorting, 0, "()Lrhino/Sorting;", 9 },
	{ "insertionSort", (intptr_t) M_rhino_Sorting_insertionSort_Array1_java_lang_Object_java_util_Comparator, VTABLE_rhino_Sorting_insertionSort_Array1_java_lang_Object_java_util_Comparator, "([Ljava/lang/Object;Ljava/util/Comparator;)V", 1 },
	{ "insertionSort", (intptr_t) M_rhino_Sorting_insertionSort_Array1_java_lang_Object_int_int_java_util_Comparator, VTABLE_rhino_Sorting_insertionSort_Array1_java_lang_Object_int_int_java_util_Comparator, "([Ljava/lang/Object;IILjava/util/Comparator;)V", 2 },
	{ "hybridSort", (intptr_t) M_rhino_Sorting_hybridSort_Array1_java_lang_Object_java_util_Comparator, VTABLE_rhino_Sorting_hybridSort_Array1_java_lang_Object_java_util_Comparator, "([Ljava/lang/Object;Ljava/util/Comparator;)V", 1 },
	{ "hybridSort", (intptr_t) M_rhino_Sorting_hybridSort_Array1_java_lang_Object_int_int_java_util_Comparator_int, VTABLE_rhino_Sorting_hybridSort_Array1_java_lang_Object_int_int_java_util_Comparator_int, "([Ljava/lang/Object;IILjava/util/Comparator;I)V", 2 },
	{ "partition", (intptr_t) M_rhino_Sorting_partition_Array1_java_lang_Object_int_int_java_util_Comparator_R_int, VTABLE_rhino_Sorting_partition_Array1_java_lang_Object_int_int_java_util_Comparator_R_int, "([Ljava/lang/Object;IILjava/util/Comparator;)I", 2 },
	{ "swap", (intptr_t) M_rhino_Sorting_swap_Array1_java_lang_Object_int_int, VTABLE_rhino_Sorting_swap_Array1_java_lang_Object_int_int, "([Ljava/lang/Object;II)V", 2 },
	{ "log2", (intptr_t) M_rhino_Sorting_log2_int_R_int, VTABLE_rhino_Sorting_log2_int_R_int, "(I)I", 2 },
	{ "median", (intptr_t) M_rhino_Sorting_median_Array1_java_lang_Object_int_int_java_util_Comparator_R_int, VTABLE_rhino_Sorting_median_Array1_java_lang_Object_int_int_java_util_Comparator_R_int, "([Ljava/lang/Object;IILjava/util/Comparator;)I", 1 },
	{ "<clinit>", (intptr_t) clinit_rhino_Sorting, 0, "()V", 8 },
};

Class class_rhino_Sorting{
		.nativeName = (intptr_t) "rhino/Sorting",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_Sorting),
		.classVtable = (intptr_t) vtable_rhino_Sorting,
		.staticInitializer = (intptr_t) clinit_rhino_Sorting,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_Sorting,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 11,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 19,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_Sorting = registerClass(&class_rhino_Sorting);

}
