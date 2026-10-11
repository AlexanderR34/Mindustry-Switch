#include "arc/util/QuickSelect.h"
#include "java/lang/Object.h"
#include "java/util/Comparator.h"
#include "arc/util/QuickSelect.h"

extern "C" {


void mark_arc_util_QuickSelect(jobject object, jint mark, jint depth) {
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
	auto self = (arc_util_QuickSelect *) object;
	if (self->F_array)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_array)->clazz)->markFunction)((jobject) self->F_array, mark, depth + 1);
	if (self->F_comp)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_comp)->clazz)->markFunction)((jobject) self->F_comp, mark, depth + 1);
}

void clinit_arc_util_QuickSelect(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_util_QuickSelect(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/QuickSelect:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_QuickSelect(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(11);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_arc_util_QuickSelect_select_Array1_java_lang_Object_java_util_Comparator_int_int_R_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/QuickSelect:select", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(16);
	((arc_util_QuickSelect *) NULL_CHECK((frame[0].o)))->F_array = (jref) (frame[1].o);
	LINE_NUMBER(17);
	((arc_util_QuickSelect *) NULL_CHECK((frame[0].o)))->F_comp = (jref) (frame[2].o);
	LINE_NUMBER(18);
	jint temp0 = (jint)M_arc_util_QuickSelect_recursiveSelect_int_int_int_R_int(ctx, (frame[0].o), (jint(0)), ((frame[4].i) - (jint(1))), (frame[3].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_arc_util_QuickSelect_partition_int_int_int_R_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/QuickSelect:partition", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(22);
	sp[0].o = (jobject)((arc_util_QuickSelect *) NULL_CHECK((frame[0].o)))->F_array;
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i)));
	LINE_NUMBER(23);
	M_arc_util_QuickSelect_swap_int_int(ctx, (frame[0].o), (frame[2].i), (frame[3].i));
	LINE_NUMBER(24);
	frame[5].i = (frame[1].i);
	LINE_NUMBER(25);
	frame[6].i = (frame[1].i);
	}
label_4:;
	{
	if ((frame[6].i) >= (frame[2].i)) goto label_5;
	}
	{
	LINE_NUMBER(26);
	sp[0].o = (jobject)((arc_util_QuickSelect *) NULL_CHECK((frame[0].o)))->F_comp;
	sp[1].o = (jobject)((arc_util_QuickSelect *) NULL_CHECK((frame[0].o)))->F_array;
	jint temp0 = (jint)((func_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, sp[0].o))(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[6].i))), (frame[4].o));
	if (temp0 >= 0) goto label_7;
	}
	{
	LINE_NUMBER(27);
	M_arc_util_QuickSelect_swap_int_int(ctx, (frame[0].o), (frame[5].i), (frame[6].i));
	LINE_NUMBER(28);
	INST_IINC(5, 1);
	}
label_7:;
	{
	LINE_NUMBER(25);
	INST_IINC(6, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(31);
	M_arc_util_QuickSelect_swap_int_int(ctx, (frame[0].o), (frame[2].i), (frame[5].i));
	LINE_NUMBER(32);
	popStackFrame(ctx);
	return (frame[5].i);
	}

	popStackFrame(ctx);
}

jint M_arc_util_QuickSelect_recursiveSelect_int_int_int_R_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/QuickSelect:recursiveSelect", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(36);
	if ((frame[1].i) != (frame[2].i)) goto label_1;
	}
	INST_ILOAD(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(37);
	jint temp0 = (jint)M_arc_util_QuickSelect_medianOfThreePivot_int_int_R_int(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	frame[4].i = temp0;
	LINE_NUMBER(38);
	jint temp1 = (jint)M_arc_util_QuickSelect_partition_int_int_int_R_int(ctx, (frame[0].o), (frame[1].i), (frame[2].i), (frame[4].i));
	frame[5].i = temp1;
	LINE_NUMBER(39);
	frame[6].i = (((frame[5].i) - (frame[1].i)) + (jint(1)));
	LINE_NUMBER(41);
	if ((frame[6].i) != (frame[3].i)) goto label_5;
	}
	{
	LINE_NUMBER(42);
	frame[7].i = (frame[5].i);
	goto label_8;
	}
label_5:;
	{
	LINE_NUMBER(43);
	if ((frame[3].i) >= (frame[6].i)) goto label_9;
	}
	{
	LINE_NUMBER(44);
	jint temp0 = (jint)M_arc_util_QuickSelect_recursiveSelect_int_int_int_R_int(ctx, (frame[0].o), (frame[1].i), ((frame[5].i) - (jint(1))), (frame[3].i));
	frame[7].i = temp0;
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(46);
	jint temp0 = (jint)M_arc_util_QuickSelect_recursiveSelect_int_int_int_R_int(ctx, (frame[0].o), ((frame[5].i) + (jint(1))), (frame[2].i), ((frame[3].i) - (frame[6].i)));
	frame[7].i = temp0;
	}
label_8:;
	{
	LINE_NUMBER(48);
	popStackFrame(ctx);
	return (frame[7].i);
	}

	popStackFrame(ctx);
}

jint M_arc_util_QuickSelect_medianOfThreePivot_int_int_R_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/QuickSelect:medianOfThreePivot", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(53);
	sp[0].o = (jobject)((arc_util_QuickSelect *) NULL_CHECK((frame[0].o)))->F_array;
	frame[3].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)));
	LINE_NUMBER(54);
	frame[4].i = (((frame[1].i) + (frame[2].i)) / (jint(2)));
	LINE_NUMBER(55);
	sp[0].o = (jobject)((arc_util_QuickSelect *) NULL_CHECK((frame[0].o)))->F_array;
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[4].i)));
	LINE_NUMBER(56);
	sp[0].o = (jobject)((arc_util_QuickSelect *) NULL_CHECK((frame[0].o)))->F_array;
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)));
	LINE_NUMBER(60);
	sp[0].o = (jobject)((arc_util_QuickSelect *) NULL_CHECK((frame[0].o)))->F_comp;
	jint temp0 = (jint)((func_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, sp[0].o))(ctx, sp[0].o, (frame[3].o), (frame[5].o));
	if (temp0 <= 0) goto label_5;
	}
	{
	LINE_NUMBER(61);
	sp[0].o = (jobject)((arc_util_QuickSelect *) NULL_CHECK((frame[0].o)))->F_comp;
	jint temp0 = (jint)((func_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, sp[0].o))(ctx, sp[0].o, (frame[5].o), (frame[6].o));
	if (temp0 <= 0) goto label_7;
	}
	{
	LINE_NUMBER(62);
	popStackFrame(ctx);
	return (frame[4].i);
	}
label_7:;
	{
	LINE_NUMBER(63);
	sp[0].o = (jobject)((arc_util_QuickSelect *) NULL_CHECK((frame[0].o)))->F_comp;
	jint temp0 = (jint)((func_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, sp[0].o))(ctx, sp[0].o, (frame[3].o), (frame[6].o));
	if (temp0 <= 0) goto label_9;
	}
	{
	LINE_NUMBER(64);
	popStackFrame(ctx);
	return (frame[2].i);
	}
label_9:;
	{
	LINE_NUMBER(66);
	popStackFrame(ctx);
	return (frame[1].i);
	}
label_5:;
	{
	LINE_NUMBER(69);
	sp[0].o = (jobject)((arc_util_QuickSelect *) NULL_CHECK((frame[0].o)))->F_comp;
	jint temp0 = (jint)((func_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, sp[0].o))(ctx, sp[0].o, (frame[3].o), (frame[6].o));
	if (temp0 <= 0) goto label_11;
	}
	{
	LINE_NUMBER(70);
	popStackFrame(ctx);
	return (frame[1].i);
	}
label_11:;
	{
	LINE_NUMBER(71);
	sp[0].o = (jobject)((arc_util_QuickSelect *) NULL_CHECK((frame[0].o)))->F_comp;
	jint temp0 = (jint)((func_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, sp[0].o))(ctx, sp[0].o, (frame[5].o), (frame[6].o));
	if (temp0 <= 0) goto label_13;
	}
	{
	LINE_NUMBER(72);
	popStackFrame(ctx);
	return (frame[2].i);
	}
label_13:;
	{
	LINE_NUMBER(74);
	popStackFrame(ctx);
	return (frame[4].i);
	}

	popStackFrame(ctx);
}

void M_arc_util_QuickSelect_swap_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/QuickSelect:swap", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(80);
	sp[0].o = (jobject)((arc_util_QuickSelect *) NULL_CHECK((frame[0].o)))->F_array;
	frame[3].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)));
	LINE_NUMBER(81);
	sp[0].o = (jobject)((arc_util_QuickSelect *) NULL_CHECK((frame[0].o)))->F_array;
	jint temp0 = frame[1].i;
	sp[1].o = (jobject)((arc_util_QuickSelect *) NULL_CHECK((frame[0].o)))->F_array;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[2].i)));
	LINE_NUMBER(82);
	sp[0].o = (jobject)((arc_util_QuickSelect *) NULL_CHECK((frame[0].o)))->F_array;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)) = (frame[3].o);
	LINE_NUMBER(83);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_util_QuickSelect[] {
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
	(void *) M_arc_util_QuickSelect_select_Array1_java_lang_Object_java_util_Comparator_int_int_R_int,
	(void *) M_arc_util_QuickSelect_partition_int_int_int_R_int,
	(void *) M_arc_util_QuickSelect_recursiveSelect_int_int_int_R_int,
	(void *) M_arc_util_QuickSelect_medianOfThreePivot_int_int_R_int,
	(void *) M_arc_util_QuickSelect_swap_int_int,
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
	{ "select", "([Ljava/lang/Object;Ljava/util/Comparator;II)I" },
	{ "partition", "(III)I" },
	{ "recursiveSelect", "(III)I" },
	{ "medianOfThreePivot", "(II)I" },
	{ "swap", "(II)V" },
};

static FieldMetadata fields[] {
	{ "array", getArrayClass(&class_java_lang_Object, 1), offsetof(arc_util_QuickSelect, F_array), "[Ljava/lang/Object;", 2 },
	{ "comp", &class_java_util_Comparator, offsetof(arc_util_QuickSelect, F_comp), "Ljava/util/Comparator;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_util_QuickSelect, 0, "()V", 1 },
	{ "select", (intptr_t) M_arc_util_QuickSelect_select_Array1_java_lang_Object_java_util_Comparator_int_int_R_int, VTABLE_arc_util_QuickSelect_select_Array1_java_lang_Object_java_util_Comparator_int_int_R_int, "([Ljava/lang/Object;Ljava/util/Comparator;II)I", 1 },
	{ "partition", (intptr_t) M_arc_util_QuickSelect_partition_int_int_int_R_int, VTABLE_arc_util_QuickSelect_partition_int_int_int_R_int, "(III)I", 2 },
	{ "recursiveSelect", (intptr_t) M_arc_util_QuickSelect_recursiveSelect_int_int_int_R_int, VTABLE_arc_util_QuickSelect_recursiveSelect_int_int_int_R_int, "(III)I", 2 },
	{ "medianOfThreePivot", (intptr_t) M_arc_util_QuickSelect_medianOfThreePivot_int_int_R_int, VTABLE_arc_util_QuickSelect_medianOfThreePivot_int_int_R_int, "(II)I", 2 },
	{ "swap", (intptr_t) M_arc_util_QuickSelect_swap_int_int, VTABLE_arc_util_QuickSelect_swap_int_int, "(II)V", 2 },
};

Class class_arc_util_QuickSelect{
		.nativeName = (intptr_t) "arc/util/QuickSelect",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_util_QuickSelect),
		.classVtable = (intptr_t) vtable_arc_util_QuickSelect,
		.staticInitializer = (intptr_t) clinit_arc_util_QuickSelect,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_util_QuickSelect,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_util_QuickSelect = registerClass(&class_arc_util_QuickSelect);

}
