#include "java/util/Spliterators_AbstractDoubleSpliterator.h"
#include "java/util/Spliterators_DoubleArraySpliterator.h"
#include "java/util/Spliterator.h"
#include "java/lang/Object.h"
#include "java/util/Spliterators.h"
#include "java/util/function/DoubleConsumer.h"
#include "java/util/Spliterator_OfDouble.h"
#include "java/util/Spliterator_OfPrimitive.h"
#include "java/util/Spliterators_AbstractDoubleSpliterator_HoldingDoubleConsumer.h"
#include "java/util/Spliterators_AbstractDoubleSpliterator.h"

extern "C" {

jint SF_java_util_Spliterators$AbstractDoubleSpliterator_MAX_BATCH;
jint SF_java_util_Spliterators$AbstractDoubleSpliterator_BATCH_UNIT;

void mark_java_util_Spliterators$AbstractDoubleSpliterator(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_Spliterators$AbstractDoubleSpliterator *) object;
}

void clinit_java_util_Spliterators$AbstractDoubleSpliterator(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_java_util_Spliterators$AbstractDoubleSpliterator_MAX_BATCH = jint(33554432);
	SF_java_util_Spliterators$AbstractDoubleSpliterator_BATCH_UNIT = jint(1024);
}

void init_java_util_Spliterators$AbstractDoubleSpliterator_long_int(jcontext ctx, jobject self, jlong param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterators$AbstractDoubleSpliterator:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Spliterators$AbstractDoubleSpliterator(ctx);
	frame[0].o = self;
	frame[1].l = param0;
	frame[3].i = param1;
	{
	LINE_NUMBER(1616);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(1617);
	((java_util_Spliterators$AbstractDoubleSpliterator *) NULL_CHECK((frame[0].o)))->F_est = (frame[1].l);
	LINE_NUMBER(1618);
	sp[0].o = frame[0].o;
	sp += 1;
	if (((frame[3].i) & (64)) == 0) goto label_3;
	}
	{
	LINE_NUMBER(1619);
	jint temp0 = (frame[3].i) | (16384);
	sp[0].i = temp0;
	sp += 1;
	goto label_5;
	}
label_3:;
	LINE_NUMBER(1620);
	INST_ILOAD(3);
label_5:;
	{
	sp -= 2;
	((java_util_Spliterators$AbstractDoubleSpliterator *) NULL_CHECK(sp[0].o))->F_characteristics = sp[1].i;
	LINE_NUMBER(1621);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_util_Spliterators$AbstractDoubleSpliterator_trySplit_R_java_util_Spliterator$OfDouble(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterators$AbstractDoubleSpliterator:trySplit", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1639);
	clinit_java_util_Spliterators$AbstractDoubleSpliterator$HoldingDoubleConsumer(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Spliterators$AbstractDoubleSpliterator$HoldingDoubleConsumer);
	init_java_util_Spliterators$AbstractDoubleSpliterator$HoldingDoubleConsumer(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(1640);
	frame[2].l = ((jlong)((java_util_Spliterators$AbstractDoubleSpliterator *) NULL_CHECK((frame[0].o)))->F_est);
	LINE_NUMBER(1641);
	if ((longCompare((frame[2].l), (jlong(1)))) <= 0) goto label_3;
	}
	{
	jint temp0 = (jint)((func_java_util_Spliterators$AbstractDoubleSpliterator_tryAdvance_java_util_function_DoubleConsumer_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_Spliterators$AbstractDoubleSpliterator_tryAdvance_java_util_function_DoubleConsumer_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(1642);
	frame[4].i = (((jint)((java_util_Spliterators$AbstractDoubleSpliterator *) NULL_CHECK((frame[0].o)))->F_batch) + (1024));
	LINE_NUMBER(1643);
	if ((longCompare((jlong((frame[4].i))), (frame[2].l))) <= 0) goto label_6;
	}
	{
	LINE_NUMBER(1644);
	frame[4].i = (jint((frame[2].l)));
	}
label_6:;
	{
	LINE_NUMBER(1645);
	if ((frame[4].i) <= (jint(33554432))) goto label_8;
	}
	{
	LINE_NUMBER(1646);
	frame[4].i = (jint(33554432));
	}
label_8:;
	{
	LINE_NUMBER(1647);
	sp[0].o = (jobject) createArray(ctx, &class_double, (frame[4].i));
	frame[5].o = sp[0].o;
	LINE_NUMBER(1648);
	frame[6].i = (jint(0));
	}
label_11:;
	{
	LINE_NUMBER(1649);
	ARRAY_ACCESS(jdouble, (frame[5].o), (frame[6].i)) = ((jdouble)((java_util_Spliterators$AbstractDoubleSpliterator$HoldingDoubleConsumer *) NULL_CHECK((frame[1].o)))->F_value);
	INST_IINC(6, 1);
	if ((frame[6].i) >= (frame[4].i)) goto label_12;
	}
	{
	jint temp0 = (jint)((func_java_util_Spliterators$AbstractDoubleSpliterator_tryAdvance_java_util_function_DoubleConsumer_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_Spliterators$AbstractDoubleSpliterator_tryAdvance_java_util_function_DoubleConsumer_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	if (temp0 != 0) goto label_11;
	}
label_12:;
	{
	LINE_NUMBER(1650);
	((java_util_Spliterators$AbstractDoubleSpliterator *) NULL_CHECK((frame[0].o)))->F_batch = (frame[6].i);
	LINE_NUMBER(1651);
	if ((longCompare(((jlong)((java_util_Spliterators$AbstractDoubleSpliterator *) NULL_CHECK((frame[0].o)))->F_est), (jlong(9223372036854775807ll)))) == 0) goto label_14;
	}
	{
	LINE_NUMBER(1652);
	sp[0].o = frame[0].o;
	((java_util_Spliterators$AbstractDoubleSpliterator *) NULL_CHECK(sp[0].o))->F_est = (((jlong)((java_util_Spliterators$AbstractDoubleSpliterator *) NULL_CHECK(sp[0].o))->F_est) - (jlong((frame[6].i))));
	}
label_14:;
	{
	LINE_NUMBER(1653);
	clinit_java_util_Spliterators$DoubleArraySpliterator(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Spliterators$DoubleArraySpliterator);
	sp[1].o = frame[5].o;
	jint temp0 = jint(0);
	jint temp1 = frame[6].i;
	jint temp2 = (jint)((func_java_util_Spliterators$AbstractDoubleSpliterator_characteristics_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_Spliterators$AbstractDoubleSpliterator_characteristics_R_int])(ctx, (frame[0].o));
	init_java_util_Spliterators$DoubleArraySpliterator_Array1_double_int_int_int(ctx, sp[0].o, sp[1].o, temp0, temp1, temp2);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(1655);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jlong M_java_util_Spliterators$AbstractDoubleSpliterator_estimateSize_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterators$AbstractDoubleSpliterator:estimateSize", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1668);
	popStackFrame(ctx);
	return ((jlong)((java_util_Spliterators$AbstractDoubleSpliterator *) NULL_CHECK((frame[0].o)))->F_est);
	}

	popStackFrame(ctx);
}

jint M_java_util_Spliterators$AbstractDoubleSpliterator_characteristics_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterators$AbstractDoubleSpliterator:characteristics", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1680);
	popStackFrame(ctx);
	return ((jint)((java_util_Spliterators$AbstractDoubleSpliterator *) NULL_CHECK((frame[0].o)))->F_characteristics);
	}

	popStackFrame(ctx);
}

jobject M_java_util_Spliterators$AbstractDoubleSpliterator_trySplit_R_java_util_Spliterator$OfPrimitive(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterators$AbstractDoubleSpliterator:trySplit", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1599);
	sp[0].o = (jobject)((func_java_util_Spliterators$AbstractDoubleSpliterator_trySplit_R_java_util_Spliterator$OfDouble) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_Spliterators$AbstractDoubleSpliterator_trySplit_R_java_util_Spliterator$OfDouble])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_Spliterators$AbstractDoubleSpliterator_trySplit_R_java_util_Spliterator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterators$AbstractDoubleSpliterator:trySplit", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1599);
	sp[0].o = (jobject)((func_java_util_Spliterators$AbstractDoubleSpliterator_trySplit_R_java_util_Spliterator$OfDouble) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_Spliterators$AbstractDoubleSpliterator_trySplit_R_java_util_Spliterator$OfDouble])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_Spliterators$AbstractDoubleSpliterator[] {
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
	(void *) M_java_util_Spliterator$OfDouble_tryAdvance_java_util_function_Consumer_R_boolean,
	(void *) M_java_util_Spliterator$OfDouble_forEachRemaining_java_util_function_Consumer,
	(void *) M_java_util_Spliterators$AbstractDoubleSpliterator_trySplit_R_java_util_Spliterator,
	(void *) M_java_util_Spliterators$AbstractDoubleSpliterator_estimateSize_R_long,
	(void *) M_java_util_Spliterator_getExactSizeIfKnown_R_long,
	(void *) M_java_util_Spliterators$AbstractDoubleSpliterator_characteristics_R_int,
	(void *) M_java_util_Spliterator_hasCharacteristics_int_R_boolean,
	(void *) M_java_util_Spliterator_getComparator_R_java_util_Comparator,
	(void *) M_java_util_Spliterators$AbstractDoubleSpliterator_trySplit_R_java_util_Spliterator$OfPrimitive,
	(void *) M_java_util_Spliterator$OfDouble_tryAdvance_java_lang_Object_R_boolean,
	(void *) M_java_util_Spliterator$OfDouble_forEachRemaining_java_lang_Object,
	(void *) M_java_util_Spliterators$AbstractDoubleSpliterator_trySplit_R_java_util_Spliterator$OfDouble,
	(void *) nullptr,
	(void *) M_java_util_Spliterator$OfDouble_forEachRemaining_java_util_function_DoubleConsumer,
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
	{ "tryAdvance", "(Ljava/util/function/Consumer;)Z" },
	{ "forEachRemaining", "(Ljava/util/function/Consumer;)V" },
	{ "trySplit", "()Ljava/util/Spliterator;" },
	{ "estimateSize", "()J" },
	{ "getExactSizeIfKnown", "()J" },
	{ "characteristics", "()I" },
	{ "hasCharacteristics", "(I)Z" },
	{ "getComparator", "()Ljava/util/Comparator;" },
	{ "trySplit", "()Ljava/util/Spliterator$OfPrimitive;" },
	{ "tryAdvance", "(Ljava/lang/Object;)Z" },
	{ "forEachRemaining", "(Ljava/lang/Object;)V" },
	{ "trySplit", "()Ljava/util/Spliterator$OfDouble;" },
	{ "tryAdvance", "(Ljava/util/function/DoubleConsumer;)Z" },
	{ "forEachRemaining", "(Ljava/util/function/DoubleConsumer;)V" },
};

static jclass interfaces[] { &class_java_util_Spliterator$OfDouble, };

static jclass innerClasses[] {
	&class_java_util_Spliterators$AbstractDoubleSpliterator$HoldingDoubleConsumer,
};

static FieldMetadata fields[] {
	{ "MAX_BATCH", &class_int, (intptr_t) &SF_java_util_Spliterators$AbstractDoubleSpliterator_MAX_BATCH, "I", 24 },
	{ "BATCH_UNIT", &class_int, (intptr_t) &SF_java_util_Spliterators$AbstractDoubleSpliterator_BATCH_UNIT, "I", 24 },
	{ "characteristics", &class_int, offsetof(java_util_Spliterators$AbstractDoubleSpliterator, F_characteristics), "I", 18 },
	{ "est", &class_long, offsetof(java_util_Spliterators$AbstractDoubleSpliterator, F_est), "J", 2 },
	{ "batch", &class_int, offsetof(java_util_Spliterators$AbstractDoubleSpliterator, F_batch), "I", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_Spliterators$AbstractDoubleSpliterator_long_int, 0, "(JI)V", 4 },
	{ "trySplit", (intptr_t) M_java_util_Spliterators$AbstractDoubleSpliterator_trySplit_R_java_util_Spliterator$OfDouble, VTABLE_java_util_Spliterators$AbstractDoubleSpliterator_trySplit_R_java_util_Spliterator$OfDouble, "()Ljava/util/Spliterator$OfDouble;", 1 },
	{ "estimateSize", (intptr_t) M_java_util_Spliterators$AbstractDoubleSpliterator_estimateSize_R_long, VTABLE_java_util_Spliterators$AbstractDoubleSpliterator_estimateSize_R_long, "()J", 1 },
	{ "characteristics", (intptr_t) M_java_util_Spliterators$AbstractDoubleSpliterator_characteristics_R_int, VTABLE_java_util_Spliterators$AbstractDoubleSpliterator_characteristics_R_int, "()I", 1 },
	{ "trySplit", (intptr_t) M_java_util_Spliterators$AbstractDoubleSpliterator_trySplit_R_java_util_Spliterator$OfPrimitive, VTABLE_java_util_Spliterators$AbstractDoubleSpliterator_trySplit_R_java_util_Spliterator$OfPrimitive, "()Ljava/util/Spliterator$OfPrimitive;", 4161 },
	{ "trySplit", (intptr_t) M_java_util_Spliterators$AbstractDoubleSpliterator_trySplit_R_java_util_Spliterator, VTABLE_java_util_Spliterators$AbstractDoubleSpliterator_trySplit_R_java_util_Spliterator, "()Ljava/util/Spliterator;", 4161 },
};

Class class_java_util_Spliterators$AbstractDoubleSpliterator{
		.nativeName = (intptr_t) "java/util/Spliterators$AbstractDoubleSpliterator",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_Spliterators$AbstractDoubleSpliterator),
		.classVtable = (intptr_t) vtable_java_util_Spliterators$AbstractDoubleSpliterator,
		.staticInitializer = (intptr_t) clinit_java_util_Spliterators$AbstractDoubleSpliterator,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_Spliterators$AbstractDoubleSpliterator,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_util_Spliterators,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 1057,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 25,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_Spliterators$AbstractDoubleSpliterator = registerClass(&class_java_util_Spliterators$AbstractDoubleSpliterator);

}

