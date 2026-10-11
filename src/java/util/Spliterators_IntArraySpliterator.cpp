#include "java/util/Spliterators_IntArraySpliterator.h"
#include "java/util/Spliterator.h"
#include "java/lang/Object.h"
#include "java/util/Spliterators.h"
#include "java/util/function/IntConsumer.h"
#include "java/util/Spliterator_OfInt.h"
#include "java/util/Comparator.h"
#include "java/lang/NullPointerException.h"
#include "java/lang/IllegalStateException.h"
#include "java/util/Spliterator_OfPrimitive.h"
#include "java/util/Spliterators_IntArraySpliterator.h"

extern "C" {


void mark_java_util_Spliterators$IntArraySpliterator(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_Spliterators$IntArraySpliterator *) object;
	if (self->F_array)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_array)->clazz)->markFunction)((jobject) self->F_array, mark, depth + 1);
}

void clinit_java_util_Spliterators$IntArraySpliterator(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_java_util_Spliterators$IntArraySpliterator_Array1_int_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterators$IntArraySpliterator:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Spliterators$IntArraySpliterator(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(998);
	init_java_util_Spliterators$IntArraySpliterator_Array1_int_int_int_int(ctx, (frame[0].o), (frame[1].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[1].o)))->length), (frame[2].i));
	LINE_NUMBER(999);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_Spliterators$IntArraySpliterator_Array1_int_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterators$IntArraySpliterator:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Spliterators$IntArraySpliterator(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(1010);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(1011);
	((java_util_Spliterators$IntArraySpliterator *) NULL_CHECK((frame[0].o)))->F_array = (jref) (frame[1].o);
	LINE_NUMBER(1012);
	((java_util_Spliterators$IntArraySpliterator *) NULL_CHECK((frame[0].o)))->F_index = (frame[2].i);
	LINE_NUMBER(1013);
	((java_util_Spliterators$IntArraySpliterator *) NULL_CHECK((frame[0].o)))->F_fence = (frame[3].i);
	LINE_NUMBER(1014);
	((java_util_Spliterators$IntArraySpliterator *) NULL_CHECK((frame[0].o)))->F_characteristics = (((frame[4].i) | (64)) | (16384));
	LINE_NUMBER(1015);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_util_Spliterators$IntArraySpliterator_trySplit_R_java_util_Spliterator$OfInt(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterators$IntArraySpliterator:trySplit", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1019);
	frame[1].i = ((jint)((java_util_Spliterators$IntArraySpliterator *) NULL_CHECK((frame[0].o)))->F_index);
	frame[2].i = (bit_cast<jint>(bit_cast<uint32_t>(((frame[1].i) + ((jint)((java_util_Spliterators$IntArraySpliterator *) NULL_CHECK((frame[0].o)))->F_fence))) >> (jint(1))));
	LINE_NUMBER(1020);
	if ((frame[1].i) < (frame[2].i)) goto label_3;
	}
	{
	LINE_NUMBER(1021);
	sp[0].o = jobject(nullptr);
	sp += 1;
	goto label_5;
	}
label_3:;
	{
	LINE_NUMBER(1022);
	clinit_java_util_Spliterators$IntArraySpliterator(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Spliterators$IntArraySpliterator);
	sp[1].o = (jobject)((java_util_Spliterators$IntArraySpliterator *) NULL_CHECK((frame[0].o)))->F_array;
	jint temp0 = frame[1].i;
	sp[2].o = frame[0].o;
	jint temp1 = frame[2].i;
	((java_util_Spliterators$IntArraySpliterator *) NULL_CHECK(sp[2].o))->F_index = temp1;
	init_java_util_Spliterators$IntArraySpliterator_Array1_int_int_int_int(ctx, sp[0].o, sp[1].o, temp0, temp1, ((jint)((java_util_Spliterators$IntArraySpliterator *) NULL_CHECK((frame[0].o)))->F_characteristics));
	sp += 1;
	}
label_5:;
	LINE_NUMBER(1020);
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

void M_java_util_Spliterators$IntArraySpliterator_forEachRemaining_java_util_function_IntConsumer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterators$IntArraySpliterator:forEachRemaining", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1028);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(1029);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(1030);
	sp[0].o = (jobject)((java_util_Spliterators$IntArraySpliterator *) NULL_CHECK((frame[0].o)))->F_array;
	frame[2].o = sp[0].o;
	jint temp0 = ((jarray) nullCheck(ctx, sp[0].o))->length;
	jint temp1 = (jint)((java_util_Spliterators$IntArraySpliterator *) NULL_CHECK((frame[0].o)))->F_fence;
	frame[4].i = temp1;
	if (temp0 < temp1) goto label_5;
	}
	{
	jint temp0 = (jint)((java_util_Spliterators$IntArraySpliterator *) NULL_CHECK((frame[0].o)))->F_index;
	frame[3].i = temp0;
	if (temp0 < 0) goto label_5;
	}
	{
	jint temp0 = frame[3].i;
	sp[0].o = frame[0].o;
	jint temp1 = frame[4].i;
	((java_util_Spliterators$IntArraySpliterator *) NULL_CHECK(sp[0].o))->F_index = temp1;
	if (temp0 >= temp1) goto label_5;
	}
label_7:;
	{
	LINE_NUMBER(1032);
	((func_java_util_function_IntConsumer_accept_int) resolveInterfaceMethod(ctx, &class_java_util_function_IntConsumer, INDEX_java_util_function_IntConsumer_accept_int, (frame[1].o)))(ctx, (frame[1].o), ((jint)ARRAY_ACCESS(jint, (frame[2].o), (frame[3].i))));
	INST_IINC(3, 1);
	if ((frame[3].i) < (frame[4].i)) goto label_7;
	}
label_5:;
	LINE_NUMBER(1034);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_java_util_Spliterators$IntArraySpliterator_tryAdvance_java_util_function_IntConsumer_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterators$IntArraySpliterator:tryAdvance", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1038);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(1039);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(1040);
	if (((jint)((java_util_Spliterators$IntArraySpliterator *) NULL_CHECK((frame[0].o)))->F_index) < 0) goto label_3;
	}
	{
	if (((jint)((java_util_Spliterators$IntArraySpliterator *) NULL_CHECK((frame[0].o)))->F_index) >= ((jint)((java_util_Spliterators$IntArraySpliterator *) NULL_CHECK((frame[0].o)))->F_fence)) goto label_3;
	}
	{
	LINE_NUMBER(1041);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((java_util_Spliterators$IntArraySpliterator *) NULL_CHECK((frame[0].o)))->F_array;
	sp[2].o = frame[0].o;
	jint temp0 = (jint)((java_util_Spliterators$IntArraySpliterator *) NULL_CHECK(sp[2].o))->F_index;
	((java_util_Spliterators$IntArraySpliterator *) NULL_CHECK(sp[2].o))->F_index = (temp0 + (jint(1)));
	((func_java_util_function_IntConsumer_accept_int) resolveInterfaceMethod(ctx, &class_java_util_function_IntConsumer, INDEX_java_util_function_IntConsumer_accept_int, sp[0].o))(ctx, sp[0].o, ((jint)ARRAY_ACCESS(jint, sp[1].o, temp0)));
	LINE_NUMBER(1042);
	popStackFrame(ctx);
	return (jint(1));
	}
label_3:;
	{
	LINE_NUMBER(1044);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jlong M_java_util_Spliterators$IntArraySpliterator_estimateSize_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterators$IntArraySpliterator:estimateSize", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1048);
	popStackFrame(ctx);
	return (jlong((((jint)((java_util_Spliterators$IntArraySpliterator *) NULL_CHECK((frame[0].o)))->F_fence) - ((jint)((java_util_Spliterators$IntArraySpliterator *) NULL_CHECK((frame[0].o)))->F_index))));
	}

	popStackFrame(ctx);
}

jint M_java_util_Spliterators$IntArraySpliterator_characteristics_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterators$IntArraySpliterator:characteristics", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1052);
	popStackFrame(ctx);
	return ((jint)((java_util_Spliterators$IntArraySpliterator *) NULL_CHECK((frame[0].o)))->F_characteristics);
	}

	popStackFrame(ctx);
}

jobject M_java_util_Spliterators$IntArraySpliterator_getComparator_R_java_util_Comparator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterators$IntArraySpliterator:getComparator", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1057);
	jint temp0 = (jint)((func_java_util_Spliterators$IntArraySpliterator_hasCharacteristics_int_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_Spliterators$IntArraySpliterator_hasCharacteristics_int_R_boolean])(ctx, (frame[0].o), (jint(4)));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(1058);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_1:;
	{
	LINE_NUMBER(1059);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void M_java_util_Spliterators$IntArraySpliterator_forEachRemaining_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterators$IntArraySpliterator:forEachRemaining", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(984);
	((func_java_util_Spliterators$IntArraySpliterator_forEachRemaining_java_util_function_IntConsumer) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_Spliterators$IntArraySpliterator_forEachRemaining_java_util_function_IntConsumer])(ctx, (frame[0].o), (checkCast(ctx, &class_java_util_function_IntConsumer, (frame[1].o))));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_java_util_Spliterators$IntArraySpliterator_tryAdvance_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterators$IntArraySpliterator:tryAdvance", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(984);
	jint temp0 = (jint)((func_java_util_Spliterators$IntArraySpliterator_tryAdvance_java_util_function_IntConsumer_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_Spliterators$IntArraySpliterator_tryAdvance_java_util_function_IntConsumer_R_boolean])(ctx, (frame[0].o), (checkCast(ctx, &class_java_util_function_IntConsumer, (frame[1].o))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_java_util_Spliterators$IntArraySpliterator_trySplit_R_java_util_Spliterator$OfPrimitive(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterators$IntArraySpliterator:trySplit", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(984);
	sp[0].o = (jobject)((func_java_util_Spliterators$IntArraySpliterator_trySplit_R_java_util_Spliterator$OfInt) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_Spliterators$IntArraySpliterator_trySplit_R_java_util_Spliterator$OfInt])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_Spliterators$IntArraySpliterator_trySplit_R_java_util_Spliterator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterators$IntArraySpliterator:trySplit", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(984);
	sp[0].o = (jobject)((func_java_util_Spliterators$IntArraySpliterator_trySplit_R_java_util_Spliterator$OfInt) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_Spliterators$IntArraySpliterator_trySplit_R_java_util_Spliterator$OfInt])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_Spliterators$IntArraySpliterator[] {
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
	(void *) M_java_util_Spliterator$OfInt_tryAdvance_java_util_function_Consumer_R_boolean,
	(void *) M_java_util_Spliterator$OfInt_forEachRemaining_java_util_function_Consumer,
	(void *) M_java_util_Spliterators$IntArraySpliterator_trySplit_R_java_util_Spliterator,
	(void *) M_java_util_Spliterators$IntArraySpliterator_estimateSize_R_long,
	(void *) M_java_util_Spliterator_getExactSizeIfKnown_R_long,
	(void *) M_java_util_Spliterators$IntArraySpliterator_characteristics_R_int,
	(void *) M_java_util_Spliterator_hasCharacteristics_int_R_boolean,
	(void *) M_java_util_Spliterators$IntArraySpliterator_getComparator_R_java_util_Comparator,
	(void *) M_java_util_Spliterators$IntArraySpliterator_trySplit_R_java_util_Spliterator$OfPrimitive,
	(void *) M_java_util_Spliterators$IntArraySpliterator_tryAdvance_java_lang_Object_R_boolean,
	(void *) M_java_util_Spliterators$IntArraySpliterator_forEachRemaining_java_lang_Object,
	(void *) M_java_util_Spliterators$IntArraySpliterator_trySplit_R_java_util_Spliterator$OfInt,
	(void *) M_java_util_Spliterators$IntArraySpliterator_tryAdvance_java_util_function_IntConsumer_R_boolean,
	(void *) M_java_util_Spliterators$IntArraySpliterator_forEachRemaining_java_util_function_IntConsumer,
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
	{ "trySplit", "()Ljava/util/Spliterator$OfInt;" },
	{ "tryAdvance", "(Ljava/util/function/IntConsumer;)Z" },
	{ "forEachRemaining", "(Ljava/util/function/IntConsumer;)V" },
};

static jclass interfaces[] { &class_java_util_Spliterator$OfInt, };

static FieldMetadata fields[] {
	{ "array", getArrayClass(&class_int, 1), offsetof(java_util_Spliterators$IntArraySpliterator, F_array), "[I", 18 },
	{ "index", &class_int, offsetof(java_util_Spliterators$IntArraySpliterator, F_index), "I", 2 },
	{ "fence", &class_int, offsetof(java_util_Spliterators$IntArraySpliterator, F_fence), "I", 18 },
	{ "characteristics", &class_int, offsetof(java_util_Spliterators$IntArraySpliterator, F_characteristics), "I", 18 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_Spliterators$IntArraySpliterator_Array1_int_int, 0, "([II)V", 1 },
	{ "<init>", (intptr_t) init_java_util_Spliterators$IntArraySpliterator_Array1_int_int_int_int, 0, "([IIII)V", 1 },
	{ "trySplit", (intptr_t) M_java_util_Spliterators$IntArraySpliterator_trySplit_R_java_util_Spliterator$OfInt, VTABLE_java_util_Spliterators$IntArraySpliterator_trySplit_R_java_util_Spliterator$OfInt, "()Ljava/util/Spliterator$OfInt;", 1 },
	{ "forEachRemaining", (intptr_t) M_java_util_Spliterators$IntArraySpliterator_forEachRemaining_java_util_function_IntConsumer, VTABLE_java_util_Spliterators$IntArraySpliterator_forEachRemaining_java_util_function_IntConsumer, "(Ljava/util/function/IntConsumer;)V", 1 },
	{ "tryAdvance", (intptr_t) M_java_util_Spliterators$IntArraySpliterator_tryAdvance_java_util_function_IntConsumer_R_boolean, VTABLE_java_util_Spliterators$IntArraySpliterator_tryAdvance_java_util_function_IntConsumer_R_boolean, "(Ljava/util/function/IntConsumer;)Z", 1 },
	{ "estimateSize", (intptr_t) M_java_util_Spliterators$IntArraySpliterator_estimateSize_R_long, VTABLE_java_util_Spliterators$IntArraySpliterator_estimateSize_R_long, "()J", 1 },
	{ "characteristics", (intptr_t) M_java_util_Spliterators$IntArraySpliterator_characteristics_R_int, VTABLE_java_util_Spliterators$IntArraySpliterator_characteristics_R_int, "()I", 1 },
	{ "getComparator", (intptr_t) M_java_util_Spliterators$IntArraySpliterator_getComparator_R_java_util_Comparator, VTABLE_java_util_Spliterators$IntArraySpliterator_getComparator_R_java_util_Comparator, "()Ljava/util/Comparator;", 1 },
	{ "forEachRemaining", (intptr_t) M_java_util_Spliterators$IntArraySpliterator_forEachRemaining_java_lang_Object, VTABLE_java_util_Spliterators$IntArraySpliterator_forEachRemaining_java_lang_Object, "(Ljava/lang/Object;)V", 4161 },
	{ "tryAdvance", (intptr_t) M_java_util_Spliterators$IntArraySpliterator_tryAdvance_java_lang_Object_R_boolean, VTABLE_java_util_Spliterators$IntArraySpliterator_tryAdvance_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 4161 },
	{ "trySplit", (intptr_t) M_java_util_Spliterators$IntArraySpliterator_trySplit_R_java_util_Spliterator$OfPrimitive, VTABLE_java_util_Spliterators$IntArraySpliterator_trySplit_R_java_util_Spliterator$OfPrimitive, "()Ljava/util/Spliterator$OfPrimitive;", 4161 },
	{ "trySplit", (intptr_t) M_java_util_Spliterators$IntArraySpliterator_trySplit_R_java_util_Spliterator, VTABLE_java_util_Spliterators$IntArraySpliterator_trySplit_R_java_util_Spliterator, "()Ljava/util/Spliterator;", 4161 },
};

Class class_java_util_Spliterators$IntArraySpliterator{
		.nativeName = (intptr_t) "java/util/Spliterators$IntArraySpliterator",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_Spliterators$IntArraySpliterator),
		.classVtable = (intptr_t) vtable_java_util_Spliterators$IntArraySpliterator,
		.staticInitializer = (intptr_t) clinit_java_util_Spliterators$IntArraySpliterator,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_Spliterators$IntArraySpliterator,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_util_Spliterators,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 48,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 12,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 25,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_Spliterators$IntArraySpliterator = registerClass(&class_java_util_Spliterators$IntArraySpliterator);

}

