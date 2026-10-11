#include "java/util/Spliterators_LongArraySpliterator.h"
#include "java/util/Spliterators_LongArraySpliterator.h"
#include "java/util/Spliterator.h"
#include "java/lang/Object.h"
#include "java/util/Spliterator_OfLong.h"
#include "java/util/Spliterators.h"
#include "java/util/Comparator.h"
#include "java/lang/NullPointerException.h"
#include "java/util/function/LongConsumer.h"
#include "java/lang/IllegalStateException.h"
#include "java/util/Spliterator_OfPrimitive.h"

extern "C" {


void mark_java_util_Spliterators$LongArraySpliterator(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_Spliterators$LongArraySpliterator *) object;
	if (self->F_array)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_array)->clazz)->markFunction)((jobject) self->F_array, mark, depth + 1);
}

void clinit_java_util_Spliterators$LongArraySpliterator(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_java_util_Spliterators$LongArraySpliterator_Array1_long_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterators$LongArraySpliterator:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Spliterators$LongArraySpliterator(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(1081);
	init_java_util_Spliterators$LongArraySpliterator_Array1_long_int_int_int(ctx, (frame[0].o), (frame[1].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[1].o)))->length), (frame[2].i));
	LINE_NUMBER(1082);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_Spliterators$LongArraySpliterator_Array1_long_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterators$LongArraySpliterator:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Spliterators$LongArraySpliterator(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(1093);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(1094);
	((java_util_Spliterators$LongArraySpliterator *) NULL_CHECK((frame[0].o)))->F_array = (jref) (frame[1].o);
	LINE_NUMBER(1095);
	((java_util_Spliterators$LongArraySpliterator *) NULL_CHECK((frame[0].o)))->F_index = (frame[2].i);
	LINE_NUMBER(1096);
	((java_util_Spliterators$LongArraySpliterator *) NULL_CHECK((frame[0].o)))->F_fence = (frame[3].i);
	LINE_NUMBER(1097);
	((java_util_Spliterators$LongArraySpliterator *) NULL_CHECK((frame[0].o)))->F_characteristics = (((frame[4].i) | (64)) | (16384));
	LINE_NUMBER(1098);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_util_Spliterators$LongArraySpliterator_trySplit_R_java_util_Spliterator$OfLong(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterators$LongArraySpliterator:trySplit", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1102);
	frame[1].i = ((jint)((java_util_Spliterators$LongArraySpliterator *) NULL_CHECK((frame[0].o)))->F_index);
	frame[2].i = (bit_cast<jint>(bit_cast<uint32_t>(((frame[1].i) + ((jint)((java_util_Spliterators$LongArraySpliterator *) NULL_CHECK((frame[0].o)))->F_fence))) >> (jint(1))));
	LINE_NUMBER(1103);
	if ((frame[1].i) < (frame[2].i)) goto label_3;
	}
	{
	LINE_NUMBER(1104);
	sp[0].o = jobject(nullptr);
	sp += 1;
	goto label_5;
	}
label_3:;
	{
	LINE_NUMBER(1105);
	clinit_java_util_Spliterators$LongArraySpliterator(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Spliterators$LongArraySpliterator);
	sp[1].o = (jobject)((java_util_Spliterators$LongArraySpliterator *) NULL_CHECK((frame[0].o)))->F_array;
	jint temp0 = frame[1].i;
	sp[2].o = frame[0].o;
	jint temp1 = frame[2].i;
	((java_util_Spliterators$LongArraySpliterator *) NULL_CHECK(sp[2].o))->F_index = temp1;
	init_java_util_Spliterators$LongArraySpliterator_Array1_long_int_int_int(ctx, sp[0].o, sp[1].o, temp0, temp1, ((jint)((java_util_Spliterators$LongArraySpliterator *) NULL_CHECK((frame[0].o)))->F_characteristics));
	sp += 1;
	}
label_5:;
	LINE_NUMBER(1103);
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

void M_java_util_Spliterators$LongArraySpliterator_forEachRemaining_java_util_function_LongConsumer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterators$LongArraySpliterator:forEachRemaining", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1111);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(1112);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(1113);
	sp[0].o = (jobject)((java_util_Spliterators$LongArraySpliterator *) NULL_CHECK((frame[0].o)))->F_array;
	frame[2].o = sp[0].o;
	jint temp0 = ((jarray) nullCheck(ctx, sp[0].o))->length;
	jint temp1 = (jint)((java_util_Spliterators$LongArraySpliterator *) NULL_CHECK((frame[0].o)))->F_fence;
	frame[4].i = temp1;
	if (temp0 < temp1) goto label_5;
	}
	{
	jint temp0 = (jint)((java_util_Spliterators$LongArraySpliterator *) NULL_CHECK((frame[0].o)))->F_index;
	frame[3].i = temp0;
	if (temp0 < 0) goto label_5;
	}
	{
	jint temp0 = frame[3].i;
	sp[0].o = frame[0].o;
	jint temp1 = frame[4].i;
	((java_util_Spliterators$LongArraySpliterator *) NULL_CHECK(sp[0].o))->F_index = temp1;
	if (temp0 >= temp1) goto label_5;
	}
label_7:;
	{
	LINE_NUMBER(1115);
	((func_java_util_function_LongConsumer_accept_long) resolveInterfaceMethod(ctx, &class_java_util_function_LongConsumer, INDEX_java_util_function_LongConsumer_accept_long, (frame[1].o)))(ctx, (frame[1].o), ((jlong)ARRAY_ACCESS(jlong, (frame[2].o), (frame[3].i))));
	INST_IINC(3, 1);
	if ((frame[3].i) < (frame[4].i)) goto label_7;
	}
label_5:;
	LINE_NUMBER(1117);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_java_util_Spliterators$LongArraySpliterator_tryAdvance_java_util_function_LongConsumer_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterators$LongArraySpliterator:tryAdvance", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1121);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(1122);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(1123);
	if (((jint)((java_util_Spliterators$LongArraySpliterator *) NULL_CHECK((frame[0].o)))->F_index) < 0) goto label_3;
	}
	{
	if (((jint)((java_util_Spliterators$LongArraySpliterator *) NULL_CHECK((frame[0].o)))->F_index) >= ((jint)((java_util_Spliterators$LongArraySpliterator *) NULL_CHECK((frame[0].o)))->F_fence)) goto label_3;
	}
	{
	LINE_NUMBER(1124);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((java_util_Spliterators$LongArraySpliterator *) NULL_CHECK((frame[0].o)))->F_array;
	sp[2].o = frame[0].o;
	jint temp0 = (jint)((java_util_Spliterators$LongArraySpliterator *) NULL_CHECK(sp[2].o))->F_index;
	((java_util_Spliterators$LongArraySpliterator *) NULL_CHECK(sp[2].o))->F_index = (temp0 + (jint(1)));
	((func_java_util_function_LongConsumer_accept_long) resolveInterfaceMethod(ctx, &class_java_util_function_LongConsumer, INDEX_java_util_function_LongConsumer_accept_long, sp[0].o))(ctx, sp[0].o, ((jlong)ARRAY_ACCESS(jlong, sp[1].o, temp0)));
	LINE_NUMBER(1125);
	popStackFrame(ctx);
	return (jint(1));
	}
label_3:;
	{
	LINE_NUMBER(1127);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jlong M_java_util_Spliterators$LongArraySpliterator_estimateSize_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterators$LongArraySpliterator:estimateSize", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1131);
	popStackFrame(ctx);
	return (jlong((((jint)((java_util_Spliterators$LongArraySpliterator *) NULL_CHECK((frame[0].o)))->F_fence) - ((jint)((java_util_Spliterators$LongArraySpliterator *) NULL_CHECK((frame[0].o)))->F_index))));
	}

	popStackFrame(ctx);
}

jint M_java_util_Spliterators$LongArraySpliterator_characteristics_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterators$LongArraySpliterator:characteristics", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1135);
	popStackFrame(ctx);
	return ((jint)((java_util_Spliterators$LongArraySpliterator *) NULL_CHECK((frame[0].o)))->F_characteristics);
	}

	popStackFrame(ctx);
}

jobject M_java_util_Spliterators$LongArraySpliterator_getComparator_R_java_util_Comparator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterators$LongArraySpliterator:getComparator", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1140);
	jint temp0 = (jint)((func_java_util_Spliterators$LongArraySpliterator_hasCharacteristics_int_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_Spliterators$LongArraySpliterator_hasCharacteristics_int_R_boolean])(ctx, (frame[0].o), (jint(4)));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(1141);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_1:;
	{
	LINE_NUMBER(1142);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void M_java_util_Spliterators$LongArraySpliterator_forEachRemaining_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterators$LongArraySpliterator:forEachRemaining", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1067);
	((func_java_util_Spliterators$LongArraySpliterator_forEachRemaining_java_util_function_LongConsumer) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_Spliterators$LongArraySpliterator_forEachRemaining_java_util_function_LongConsumer])(ctx, (frame[0].o), (checkCast(ctx, &class_java_util_function_LongConsumer, (frame[1].o))));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_java_util_Spliterators$LongArraySpliterator_tryAdvance_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterators$LongArraySpliterator:tryAdvance", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1067);
	jint temp0 = (jint)((func_java_util_Spliterators$LongArraySpliterator_tryAdvance_java_util_function_LongConsumer_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_Spliterators$LongArraySpliterator_tryAdvance_java_util_function_LongConsumer_R_boolean])(ctx, (frame[0].o), (checkCast(ctx, &class_java_util_function_LongConsumer, (frame[1].o))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_java_util_Spliterators$LongArraySpliterator_trySplit_R_java_util_Spliterator$OfPrimitive(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterators$LongArraySpliterator:trySplit", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1067);
	sp[0].o = (jobject)((func_java_util_Spliterators$LongArraySpliterator_trySplit_R_java_util_Spliterator$OfLong) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_Spliterators$LongArraySpliterator_trySplit_R_java_util_Spliterator$OfLong])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_Spliterators$LongArraySpliterator_trySplit_R_java_util_Spliterator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterators$LongArraySpliterator:trySplit", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1067);
	sp[0].o = (jobject)((func_java_util_Spliterators$LongArraySpliterator_trySplit_R_java_util_Spliterator$OfLong) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_Spliterators$LongArraySpliterator_trySplit_R_java_util_Spliterator$OfLong])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_Spliterators$LongArraySpliterator[] {
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
	(void *) M_java_util_Spliterator$OfLong_tryAdvance_java_util_function_Consumer_R_boolean,
	(void *) M_java_util_Spliterator$OfLong_forEachRemaining_java_util_function_Consumer,
	(void *) M_java_util_Spliterators$LongArraySpliterator_trySplit_R_java_util_Spliterator,
	(void *) M_java_util_Spliterators$LongArraySpliterator_estimateSize_R_long,
	(void *) M_java_util_Spliterator_getExactSizeIfKnown_R_long,
	(void *) M_java_util_Spliterators$LongArraySpliterator_characteristics_R_int,
	(void *) M_java_util_Spliterator_hasCharacteristics_int_R_boolean,
	(void *) M_java_util_Spliterators$LongArraySpliterator_getComparator_R_java_util_Comparator,
	(void *) M_java_util_Spliterators$LongArraySpliterator_trySplit_R_java_util_Spliterator$OfPrimitive,
	(void *) M_java_util_Spliterators$LongArraySpliterator_tryAdvance_java_lang_Object_R_boolean,
	(void *) M_java_util_Spliterators$LongArraySpliterator_forEachRemaining_java_lang_Object,
	(void *) M_java_util_Spliterators$LongArraySpliterator_trySplit_R_java_util_Spliterator$OfLong,
	(void *) M_java_util_Spliterators$LongArraySpliterator_tryAdvance_java_util_function_LongConsumer_R_boolean,
	(void *) M_java_util_Spliterators$LongArraySpliterator_forEachRemaining_java_util_function_LongConsumer,
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
	{ "trySplit", "()Ljava/util/Spliterator$OfLong;" },
	{ "tryAdvance", "(Ljava/util/function/LongConsumer;)Z" },
	{ "forEachRemaining", "(Ljava/util/function/LongConsumer;)V" },
};

static jclass interfaces[] { &class_java_util_Spliterator$OfLong, };

static FieldMetadata fields[] {
	{ "array", getArrayClass(&class_long, 1), offsetof(java_util_Spliterators$LongArraySpliterator, F_array), "[J", 18 },
	{ "index", &class_int, offsetof(java_util_Spliterators$LongArraySpliterator, F_index), "I", 2 },
	{ "fence", &class_int, offsetof(java_util_Spliterators$LongArraySpliterator, F_fence), "I", 18 },
	{ "characteristics", &class_int, offsetof(java_util_Spliterators$LongArraySpliterator, F_characteristics), "I", 18 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_Spliterators$LongArraySpliterator_Array1_long_int, 0, "([JI)V", 1 },
	{ "<init>", (intptr_t) init_java_util_Spliterators$LongArraySpliterator_Array1_long_int_int_int, 0, "([JIII)V", 1 },
	{ "trySplit", (intptr_t) M_java_util_Spliterators$LongArraySpliterator_trySplit_R_java_util_Spliterator$OfLong, VTABLE_java_util_Spliterators$LongArraySpliterator_trySplit_R_java_util_Spliterator$OfLong, "()Ljava/util/Spliterator$OfLong;", 1 },
	{ "forEachRemaining", (intptr_t) M_java_util_Spliterators$LongArraySpliterator_forEachRemaining_java_util_function_LongConsumer, VTABLE_java_util_Spliterators$LongArraySpliterator_forEachRemaining_java_util_function_LongConsumer, "(Ljava/util/function/LongConsumer;)V", 1 },
	{ "tryAdvance", (intptr_t) M_java_util_Spliterators$LongArraySpliterator_tryAdvance_java_util_function_LongConsumer_R_boolean, VTABLE_java_util_Spliterators$LongArraySpliterator_tryAdvance_java_util_function_LongConsumer_R_boolean, "(Ljava/util/function/LongConsumer;)Z", 1 },
	{ "estimateSize", (intptr_t) M_java_util_Spliterators$LongArraySpliterator_estimateSize_R_long, VTABLE_java_util_Spliterators$LongArraySpliterator_estimateSize_R_long, "()J", 1 },
	{ "characteristics", (intptr_t) M_java_util_Spliterators$LongArraySpliterator_characteristics_R_int, VTABLE_java_util_Spliterators$LongArraySpliterator_characteristics_R_int, "()I", 1 },
	{ "getComparator", (intptr_t) M_java_util_Spliterators$LongArraySpliterator_getComparator_R_java_util_Comparator, VTABLE_java_util_Spliterators$LongArraySpliterator_getComparator_R_java_util_Comparator, "()Ljava/util/Comparator;", 1 },
	{ "forEachRemaining", (intptr_t) M_java_util_Spliterators$LongArraySpliterator_forEachRemaining_java_lang_Object, VTABLE_java_util_Spliterators$LongArraySpliterator_forEachRemaining_java_lang_Object, "(Ljava/lang/Object;)V", 4161 },
	{ "tryAdvance", (intptr_t) M_java_util_Spliterators$LongArraySpliterator_tryAdvance_java_lang_Object_R_boolean, VTABLE_java_util_Spliterators$LongArraySpliterator_tryAdvance_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 4161 },
	{ "trySplit", (intptr_t) M_java_util_Spliterators$LongArraySpliterator_trySplit_R_java_util_Spliterator$OfPrimitive, VTABLE_java_util_Spliterators$LongArraySpliterator_trySplit_R_java_util_Spliterator$OfPrimitive, "()Ljava/util/Spliterator$OfPrimitive;", 4161 },
	{ "trySplit", (intptr_t) M_java_util_Spliterators$LongArraySpliterator_trySplit_R_java_util_Spliterator, VTABLE_java_util_Spliterators$LongArraySpliterator_trySplit_R_java_util_Spliterator, "()Ljava/util/Spliterator;", 4161 },
};

Class class_java_util_Spliterators$LongArraySpliterator{
		.nativeName = (intptr_t) "java/util/Spliterators$LongArraySpliterator",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_Spliterators$LongArraySpliterator),
		.classVtable = (intptr_t) vtable_java_util_Spliterators$LongArraySpliterator,
		.staticInitializer = (intptr_t) clinit_java_util_Spliterators$LongArraySpliterator,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_Spliterators$LongArraySpliterator,
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
static bool registered_java_util_Spliterators$LongArraySpliterator = registerClass(&class_java_util_Spliterators$LongArraySpliterator);

}

