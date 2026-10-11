#include "java/util/Spliterators_LongIteratorSpliterator.h"
#include "java/util/Spliterators_LongArraySpliterator.h"
#include "java/util/Spliterator.h"
#include "java/util/Spliterator_OfLong.h"
#include "java/util/Iterator.h"
#include "java/util/Spliterators_LongIteratorSpliterator.h"
#include "java/util/function/LongConsumer.h"
#include "java/util/PrimitiveIterator_OfLong.h"
#include "java/lang/Object.h"
#include "java/util/Spliterators.h"
#include "java/util/Comparator.h"
#include "java/lang/NullPointerException.h"
#include "java/lang/IllegalStateException.h"
#include "java/util/Spliterator_OfPrimitive.h"

extern "C" {

jint SF_java_util_Spliterators$LongIteratorSpliterator_BATCH_UNIT;
jint SF_java_util_Spliterators$LongIteratorSpliterator_MAX_BATCH;

void mark_java_util_Spliterators$LongIteratorSpliterator(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_Spliterators$LongIteratorSpliterator *) object;
	if (self->F_it)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_it)->clazz)->markFunction)((jobject) self->F_it, mark, depth + 1);
}

void clinit_java_util_Spliterators$LongIteratorSpliterator(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_java_util_Spliterators$LongIteratorSpliterator_BATCH_UNIT = jint(1024);
	SF_java_util_Spliterators$LongIteratorSpliterator_MAX_BATCH = jint(33554432);
}

void init_java_util_Spliterators$LongIteratorSpliterator_java_util_PrimitiveIterator$OfLong_long_int(jcontext ctx, jobject self, jobject param0, jlong param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterators$LongIteratorSpliterator:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Spliterators$LongIteratorSpliterator(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].l = param1;
	frame[4].i = param2;
	{
	LINE_NUMBER(1955);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(1956);
	((java_util_Spliterators$LongIteratorSpliterator *) NULL_CHECK((frame[0].o)))->F_it = (jref) (frame[1].o);
	LINE_NUMBER(1957);
	((java_util_Spliterators$LongIteratorSpliterator *) NULL_CHECK((frame[0].o)))->F_est = (frame[2].l);
	LINE_NUMBER(1958);
	sp[0].o = frame[0].o;
	sp += 1;
	if (((frame[4].i) & (4096)) != 0) goto label_4;
	}
	{
	LINE_NUMBER(1959);
	jint temp0 = ((frame[4].i) | (64)) | (16384);
	sp[0].i = temp0;
	sp += 1;
	goto label_6;
	}
label_4:;
	LINE_NUMBER(1960);
	INST_ILOAD(4);
label_6:;
	{
	sp -= 2;
	((java_util_Spliterators$LongIteratorSpliterator *) NULL_CHECK(sp[0].o))->F_characteristics = sp[1].i;
	LINE_NUMBER(1961);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_Spliterators$LongIteratorSpliterator_java_util_PrimitiveIterator$OfLong_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterators$LongIteratorSpliterator:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Spliterators$LongIteratorSpliterator(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(1972);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(1973);
	((java_util_Spliterators$LongIteratorSpliterator *) NULL_CHECK((frame[0].o)))->F_it = (jref) (frame[1].o);
	LINE_NUMBER(1974);
	((java_util_Spliterators$LongIteratorSpliterator *) NULL_CHECK((frame[0].o)))->F_est = (jlong(9223372036854775807ll));
	LINE_NUMBER(1975);
	((java_util_Spliterators$LongIteratorSpliterator *) NULL_CHECK((frame[0].o)))->F_characteristics = ((frame[2].i) & (-16449));
	LINE_NUMBER(1976);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_util_Spliterators$LongIteratorSpliterator_trySplit_R_java_util_Spliterator$OfLong(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterators$LongIteratorSpliterator:trySplit", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1980);
	sp[0].o = (jobject)((java_util_Spliterators$LongIteratorSpliterator *) NULL_CHECK((frame[0].o)))->F_it;
	frame[1].o = sp[0].o;
	LINE_NUMBER(1981);
	frame[2].l = ((jlong)((java_util_Spliterators$LongIteratorSpliterator *) NULL_CHECK((frame[0].o)))->F_est);
	LINE_NUMBER(1982);
	if ((longCompare((frame[2].l), (jlong(1)))) <= 0) goto label_3;
	}
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(1983);
	frame[4].i = (((jint)((java_util_Spliterators$LongIteratorSpliterator *) NULL_CHECK((frame[0].o)))->F_batch) + (1024));
	LINE_NUMBER(1984);
	if ((longCompare((jlong((frame[4].i))), (frame[2].l))) <= 0) goto label_6;
	}
	{
	LINE_NUMBER(1985);
	frame[4].i = (jint((frame[2].l)));
	}
label_6:;
	{
	LINE_NUMBER(1986);
	if ((frame[4].i) <= (jint(33554432))) goto label_8;
	}
	{
	LINE_NUMBER(1987);
	frame[4].i = (jint(33554432));
	}
label_8:;
	{
	LINE_NUMBER(1988);
	sp[0].o = (jobject) createArray(ctx, &class_long, (frame[4].i));
	frame[5].o = sp[0].o;
	LINE_NUMBER(1989);
	frame[6].i = (jint(0));
	}
label_11:;
	{
	LINE_NUMBER(1990);
	sp[0].o = frame[5].o;
	jint temp0 = frame[6].i;
	jlong temp1 = (jlong)((func_java_util_PrimitiveIterator$OfLong_nextLong_R_long) resolveInterfaceMethod(ctx, &class_java_util_PrimitiveIterator$OfLong, INDEX_java_util_PrimitiveIterator$OfLong_nextLong_R_long, (frame[1].o)))(ctx, (frame[1].o));
	ARRAY_ACCESS(jlong, sp[0].o, temp0) = temp1;
	INST_IINC(6, 1);
	if ((frame[6].i) >= (frame[4].i)) goto label_12;
	}
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 != 0) goto label_11;
	}
label_12:;
	{
	LINE_NUMBER(1991);
	((java_util_Spliterators$LongIteratorSpliterator *) NULL_CHECK((frame[0].o)))->F_batch = (frame[6].i);
	LINE_NUMBER(1992);
	if ((longCompare(((jlong)((java_util_Spliterators$LongIteratorSpliterator *) NULL_CHECK((frame[0].o)))->F_est), (jlong(9223372036854775807ll)))) == 0) goto label_14;
	}
	{
	LINE_NUMBER(1993);
	sp[0].o = frame[0].o;
	((java_util_Spliterators$LongIteratorSpliterator *) NULL_CHECK(sp[0].o))->F_est = (((jlong)((java_util_Spliterators$LongIteratorSpliterator *) NULL_CHECK(sp[0].o))->F_est) - (jlong((frame[6].i))));
	}
label_14:;
	{
	LINE_NUMBER(1994);
	clinit_java_util_Spliterators$LongArraySpliterator(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Spliterators$LongArraySpliterator);
	init_java_util_Spliterators$LongArraySpliterator_Array1_long_int_int_int(ctx, sp[0].o, (frame[5].o), (jint(0)), (frame[6].i), ((jint)((java_util_Spliterators$LongIteratorSpliterator *) NULL_CHECK((frame[0].o)))->F_characteristics));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(1996);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

void M_java_util_Spliterators$LongIteratorSpliterator_forEachRemaining_java_util_function_LongConsumer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterators$LongIteratorSpliterator:forEachRemaining", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2001);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(2002);
	sp[0].o = (jobject)((java_util_Spliterators$LongIteratorSpliterator *) NULL_CHECK((frame[0].o)))->F_it;
	((func_java_util_PrimitiveIterator$OfLong_forEachRemaining_java_util_function_LongConsumer) resolveInterfaceMethod(ctx, &class_java_util_PrimitiveIterator$OfLong, INDEX_java_util_PrimitiveIterator$OfLong_forEachRemaining_java_util_function_LongConsumer, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(2003);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_java_util_Spliterators$LongIteratorSpliterator_tryAdvance_java_util_function_LongConsumer_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterators$LongIteratorSpliterator:tryAdvance", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2007);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(2008);
	sp[0].o = (jobject)((java_util_Spliterators$LongIteratorSpliterator *) NULL_CHECK((frame[0].o)))->F_it;
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, sp[0].o))(ctx, sp[0].o);
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(2009);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((java_util_Spliterators$LongIteratorSpliterator *) NULL_CHECK((frame[0].o)))->F_it;
	jlong temp0 = (jlong)((func_java_util_PrimitiveIterator$OfLong_nextLong_R_long) resolveInterfaceMethod(ctx, &class_java_util_PrimitiveIterator$OfLong, INDEX_java_util_PrimitiveIterator$OfLong_nextLong_R_long, sp[1].o))(ctx, sp[1].o);
	((func_java_util_function_LongConsumer_accept_long) resolveInterfaceMethod(ctx, &class_java_util_function_LongConsumer, INDEX_java_util_function_LongConsumer_accept_long, sp[0].o))(ctx, sp[0].o, temp0);
	LINE_NUMBER(2010);
	popStackFrame(ctx);
	return (jint(1));
	}
label_2:;
	{
	LINE_NUMBER(2012);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jlong M_java_util_Spliterators$LongIteratorSpliterator_estimateSize_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterators$LongIteratorSpliterator:estimateSize", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2017);
	popStackFrame(ctx);
	return ((jlong)((java_util_Spliterators$LongIteratorSpliterator *) NULL_CHECK((frame[0].o)))->F_est);
	}

	popStackFrame(ctx);
}

jint M_java_util_Spliterators$LongIteratorSpliterator_characteristics_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterators$LongIteratorSpliterator:characteristics", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2021);
	popStackFrame(ctx);
	return ((jint)((java_util_Spliterators$LongIteratorSpliterator *) NULL_CHECK((frame[0].o)))->F_characteristics);
	}

	popStackFrame(ctx);
}

jobject M_java_util_Spliterators$LongIteratorSpliterator_getComparator_R_java_util_Comparator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterators$LongIteratorSpliterator:getComparator", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2025);
	jint temp0 = (jint)((func_java_util_Spliterators$LongIteratorSpliterator_hasCharacteristics_int_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_Spliterators$LongIteratorSpliterator_hasCharacteristics_int_R_boolean])(ctx, (frame[0].o), (jint(4)));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(2026);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_1:;
	{
	LINE_NUMBER(2027);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void M_java_util_Spliterators$LongIteratorSpliterator_forEachRemaining_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterators$LongIteratorSpliterator:forEachRemaining", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1937);
	((func_java_util_Spliterators$LongIteratorSpliterator_forEachRemaining_java_util_function_LongConsumer) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_Spliterators$LongIteratorSpliterator_forEachRemaining_java_util_function_LongConsumer])(ctx, (frame[0].o), (checkCast(ctx, &class_java_util_function_LongConsumer, (frame[1].o))));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_java_util_Spliterators$LongIteratorSpliterator_tryAdvance_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterators$LongIteratorSpliterator:tryAdvance", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1937);
	jint temp0 = (jint)((func_java_util_Spliterators$LongIteratorSpliterator_tryAdvance_java_util_function_LongConsumer_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_Spliterators$LongIteratorSpliterator_tryAdvance_java_util_function_LongConsumer_R_boolean])(ctx, (frame[0].o), (checkCast(ctx, &class_java_util_function_LongConsumer, (frame[1].o))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_java_util_Spliterators$LongIteratorSpliterator_trySplit_R_java_util_Spliterator$OfPrimitive(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterators$LongIteratorSpliterator:trySplit", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1937);
	sp[0].o = (jobject)((func_java_util_Spliterators$LongIteratorSpliterator_trySplit_R_java_util_Spliterator$OfLong) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_Spliterators$LongIteratorSpliterator_trySplit_R_java_util_Spliterator$OfLong])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_Spliterators$LongIteratorSpliterator_trySplit_R_java_util_Spliterator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterators$LongIteratorSpliterator:trySplit", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1937);
	sp[0].o = (jobject)((func_java_util_Spliterators$LongIteratorSpliterator_trySplit_R_java_util_Spliterator$OfLong) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_Spliterators$LongIteratorSpliterator_trySplit_R_java_util_Spliterator$OfLong])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_Spliterators$LongIteratorSpliterator[] {
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
	(void *) M_java_util_Spliterators$LongIteratorSpliterator_trySplit_R_java_util_Spliterator,
	(void *) M_java_util_Spliterators$LongIteratorSpliterator_estimateSize_R_long,
	(void *) M_java_util_Spliterator_getExactSizeIfKnown_R_long,
	(void *) M_java_util_Spliterators$LongIteratorSpliterator_characteristics_R_int,
	(void *) M_java_util_Spliterator_hasCharacteristics_int_R_boolean,
	(void *) M_java_util_Spliterators$LongIteratorSpliterator_getComparator_R_java_util_Comparator,
	(void *) M_java_util_Spliterators$LongIteratorSpliterator_trySplit_R_java_util_Spliterator$OfPrimitive,
	(void *) M_java_util_Spliterators$LongIteratorSpliterator_tryAdvance_java_lang_Object_R_boolean,
	(void *) M_java_util_Spliterators$LongIteratorSpliterator_forEachRemaining_java_lang_Object,
	(void *) M_java_util_Spliterators$LongIteratorSpliterator_trySplit_R_java_util_Spliterator$OfLong,
	(void *) M_java_util_Spliterators$LongIteratorSpliterator_tryAdvance_java_util_function_LongConsumer_R_boolean,
	(void *) M_java_util_Spliterators$LongIteratorSpliterator_forEachRemaining_java_util_function_LongConsumer,
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
	{ "BATCH_UNIT", &class_int, (intptr_t) &SF_java_util_Spliterators$LongIteratorSpliterator_BATCH_UNIT, "I", 24 },
	{ "MAX_BATCH", &class_int, (intptr_t) &SF_java_util_Spliterators$LongIteratorSpliterator_MAX_BATCH, "I", 24 },
	{ "it", &class_java_util_PrimitiveIterator$OfLong, offsetof(java_util_Spliterators$LongIteratorSpliterator, F_it), "Ljava/util/PrimitiveIterator$OfLong;", 2 },
	{ "characteristics", &class_int, offsetof(java_util_Spliterators$LongIteratorSpliterator, F_characteristics), "I", 18 },
	{ "est", &class_long, offsetof(java_util_Spliterators$LongIteratorSpliterator, F_est), "J", 2 },
	{ "batch", &class_int, offsetof(java_util_Spliterators$LongIteratorSpliterator, F_batch), "I", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_Spliterators$LongIteratorSpliterator_java_util_PrimitiveIterator$OfLong_long_int, 0, "(Ljava/util/PrimitiveIterator$OfLong;JI)V", 1 },
	{ "<init>", (intptr_t) init_java_util_Spliterators$LongIteratorSpliterator_java_util_PrimitiveIterator$OfLong_int, 0, "(Ljava/util/PrimitiveIterator$OfLong;I)V", 1 },
	{ "trySplit", (intptr_t) M_java_util_Spliterators$LongIteratorSpliterator_trySplit_R_java_util_Spliterator$OfLong, VTABLE_java_util_Spliterators$LongIteratorSpliterator_trySplit_R_java_util_Spliterator$OfLong, "()Ljava/util/Spliterator$OfLong;", 1 },
	{ "forEachRemaining", (intptr_t) M_java_util_Spliterators$LongIteratorSpliterator_forEachRemaining_java_util_function_LongConsumer, VTABLE_java_util_Spliterators$LongIteratorSpliterator_forEachRemaining_java_util_function_LongConsumer, "(Ljava/util/function/LongConsumer;)V", 1 },
	{ "tryAdvance", (intptr_t) M_java_util_Spliterators$LongIteratorSpliterator_tryAdvance_java_util_function_LongConsumer_R_boolean, VTABLE_java_util_Spliterators$LongIteratorSpliterator_tryAdvance_java_util_function_LongConsumer_R_boolean, "(Ljava/util/function/LongConsumer;)Z", 1 },
	{ "estimateSize", (intptr_t) M_java_util_Spliterators$LongIteratorSpliterator_estimateSize_R_long, VTABLE_java_util_Spliterators$LongIteratorSpliterator_estimateSize_R_long, "()J", 1 },
	{ "characteristics", (intptr_t) M_java_util_Spliterators$LongIteratorSpliterator_characteristics_R_int, VTABLE_java_util_Spliterators$LongIteratorSpliterator_characteristics_R_int, "()I", 1 },
	{ "getComparator", (intptr_t) M_java_util_Spliterators$LongIteratorSpliterator_getComparator_R_java_util_Comparator, VTABLE_java_util_Spliterators$LongIteratorSpliterator_getComparator_R_java_util_Comparator, "()Ljava/util/Comparator;", 1 },
	{ "forEachRemaining", (intptr_t) M_java_util_Spliterators$LongIteratorSpliterator_forEachRemaining_java_lang_Object, VTABLE_java_util_Spliterators$LongIteratorSpliterator_forEachRemaining_java_lang_Object, "(Ljava/lang/Object;)V", 4161 },
	{ "tryAdvance", (intptr_t) M_java_util_Spliterators$LongIteratorSpliterator_tryAdvance_java_lang_Object_R_boolean, VTABLE_java_util_Spliterators$LongIteratorSpliterator_tryAdvance_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 4161 },
	{ "trySplit", (intptr_t) M_java_util_Spliterators$LongIteratorSpliterator_trySplit_R_java_util_Spliterator$OfPrimitive, VTABLE_java_util_Spliterators$LongIteratorSpliterator_trySplit_R_java_util_Spliterator$OfPrimitive, "()Ljava/util/Spliterator$OfPrimitive;", 4161 },
	{ "trySplit", (intptr_t) M_java_util_Spliterators$LongIteratorSpliterator_trySplit_R_java_util_Spliterator, VTABLE_java_util_Spliterators$LongIteratorSpliterator_trySplit_R_java_util_Spliterator, "()Ljava/util/Spliterator;", 4161 },
};

Class class_java_util_Spliterators$LongIteratorSpliterator{
		.nativeName = (intptr_t) "java/util/Spliterators$LongIteratorSpliterator",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_Spliterators$LongIteratorSpliterator),
		.classVtable = (intptr_t) vtable_java_util_Spliterators$LongIteratorSpliterator,
		.staticInitializer = (intptr_t) clinit_java_util_Spliterators$LongIteratorSpliterator,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_Spliterators$LongIteratorSpliterator,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_util_Spliterators,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 48,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 6,
		.nativeFields = (intptr_t) fields,
		.methodCount = 12,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 25,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_Spliterators$LongIteratorSpliterator = registerClass(&class_java_util_Spliterators$LongIteratorSpliterator);

}

