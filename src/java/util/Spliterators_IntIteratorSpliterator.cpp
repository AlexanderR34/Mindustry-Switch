#include "java/util/Spliterators_IntIteratorSpliterator.h"
#include "java/util/Spliterator.h"
#include "java/util/Iterator.h"
#include "java/util/function/IntConsumer.h"
#include "java/util/Spliterators_IntIteratorSpliterator.h"
#include "java/util/Spliterators_IntArraySpliterator.h"
#include "java/lang/Object.h"
#include "java/util/Spliterators.h"
#include "java/util/PrimitiveIterator_OfInt.h"
#include "java/util/Spliterator_OfInt.h"
#include "java/util/Comparator.h"
#include "java/lang/NullPointerException.h"
#include "java/lang/IllegalStateException.h"
#include "java/util/Spliterator_OfPrimitive.h"

extern "C" {

jint SF_java_util_Spliterators$IntIteratorSpliterator_BATCH_UNIT;
jint SF_java_util_Spliterators$IntIteratorSpliterator_MAX_BATCH;

void mark_java_util_Spliterators$IntIteratorSpliterator(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_Spliterators$IntIteratorSpliterator *) object;
	if (self->F_it)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_it)->clazz)->markFunction)((jobject) self->F_it, mark, depth + 1);
}

void clinit_java_util_Spliterators$IntIteratorSpliterator(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_java_util_Spliterators$IntIteratorSpliterator_BATCH_UNIT = jint(1024);
	SF_java_util_Spliterators$IntIteratorSpliterator_MAX_BATCH = jint(33554432);
}

void init_java_util_Spliterators$IntIteratorSpliterator_java_util_PrimitiveIterator$OfInt_long_int(jcontext ctx, jobject self, jobject param0, jlong param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterators$IntIteratorSpliterator:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Spliterators$IntIteratorSpliterator(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].l = param1;
	frame[4].i = param2;
	{
	LINE_NUMBER(1861);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(1862);
	((java_util_Spliterators$IntIteratorSpliterator *) NULL_CHECK((frame[0].o)))->F_it = (jref) (frame[1].o);
	LINE_NUMBER(1863);
	((java_util_Spliterators$IntIteratorSpliterator *) NULL_CHECK((frame[0].o)))->F_est = (frame[2].l);
	LINE_NUMBER(1864);
	sp[0].o = frame[0].o;
	sp += 1;
	if (((frame[4].i) & (4096)) != 0) goto label_4;
	}
	{
	LINE_NUMBER(1865);
	jint temp0 = ((frame[4].i) | (64)) | (16384);
	sp[0].i = temp0;
	sp += 1;
	goto label_6;
	}
label_4:;
	LINE_NUMBER(1866);
	INST_ILOAD(4);
label_6:;
	{
	sp -= 2;
	((java_util_Spliterators$IntIteratorSpliterator *) NULL_CHECK(sp[0].o))->F_characteristics = sp[1].i;
	LINE_NUMBER(1867);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_Spliterators$IntIteratorSpliterator_java_util_PrimitiveIterator$OfInt_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterators$IntIteratorSpliterator:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Spliterators$IntIteratorSpliterator(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(1878);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(1879);
	((java_util_Spliterators$IntIteratorSpliterator *) NULL_CHECK((frame[0].o)))->F_it = (jref) (frame[1].o);
	LINE_NUMBER(1880);
	((java_util_Spliterators$IntIteratorSpliterator *) NULL_CHECK((frame[0].o)))->F_est = (jlong(9223372036854775807ll));
	LINE_NUMBER(1881);
	((java_util_Spliterators$IntIteratorSpliterator *) NULL_CHECK((frame[0].o)))->F_characteristics = ((frame[2].i) & (-16449));
	LINE_NUMBER(1882);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_util_Spliterators$IntIteratorSpliterator_trySplit_R_java_util_Spliterator$OfInt(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterators$IntIteratorSpliterator:trySplit", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1886);
	sp[0].o = (jobject)((java_util_Spliterators$IntIteratorSpliterator *) NULL_CHECK((frame[0].o)))->F_it;
	frame[1].o = sp[0].o;
	LINE_NUMBER(1887);
	frame[2].l = ((jlong)((java_util_Spliterators$IntIteratorSpliterator *) NULL_CHECK((frame[0].o)))->F_est);
	LINE_NUMBER(1888);
	if ((longCompare((frame[2].l), (jlong(1)))) <= 0) goto label_3;
	}
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(1889);
	frame[4].i = (((jint)((java_util_Spliterators$IntIteratorSpliterator *) NULL_CHECK((frame[0].o)))->F_batch) + (1024));
	LINE_NUMBER(1890);
	if ((longCompare((jlong((frame[4].i))), (frame[2].l))) <= 0) goto label_6;
	}
	{
	LINE_NUMBER(1891);
	frame[4].i = (jint((frame[2].l)));
	}
label_6:;
	{
	LINE_NUMBER(1892);
	if ((frame[4].i) <= (jint(33554432))) goto label_8;
	}
	{
	LINE_NUMBER(1893);
	frame[4].i = (jint(33554432));
	}
label_8:;
	{
	LINE_NUMBER(1894);
	sp[0].o = (jobject) createArray(ctx, &class_int, (frame[4].i));
	frame[5].o = sp[0].o;
	LINE_NUMBER(1895);
	frame[6].i = (jint(0));
	}
label_11:;
	{
	LINE_NUMBER(1896);
	sp[0].o = frame[5].o;
	jint temp0 = frame[6].i;
	jint temp1 = (jint)((func_java_util_PrimitiveIterator$OfInt_nextInt_R_int) resolveInterfaceMethod(ctx, &class_java_util_PrimitiveIterator$OfInt, INDEX_java_util_PrimitiveIterator$OfInt_nextInt_R_int, (frame[1].o)))(ctx, (frame[1].o));
	ARRAY_ACCESS(jint, sp[0].o, temp0) = temp1;
	INST_IINC(6, 1);
	if ((frame[6].i) >= (frame[4].i)) goto label_12;
	}
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 != 0) goto label_11;
	}
label_12:;
	{
	LINE_NUMBER(1897);
	((java_util_Spliterators$IntIteratorSpliterator *) NULL_CHECK((frame[0].o)))->F_batch = (frame[6].i);
	LINE_NUMBER(1898);
	if ((longCompare(((jlong)((java_util_Spliterators$IntIteratorSpliterator *) NULL_CHECK((frame[0].o)))->F_est), (jlong(9223372036854775807ll)))) == 0) goto label_14;
	}
	{
	LINE_NUMBER(1899);
	sp[0].o = frame[0].o;
	((java_util_Spliterators$IntIteratorSpliterator *) NULL_CHECK(sp[0].o))->F_est = (((jlong)((java_util_Spliterators$IntIteratorSpliterator *) NULL_CHECK(sp[0].o))->F_est) - (jlong((frame[6].i))));
	}
label_14:;
	{
	LINE_NUMBER(1900);
	clinit_java_util_Spliterators$IntArraySpliterator(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Spliterators$IntArraySpliterator);
	init_java_util_Spliterators$IntArraySpliterator_Array1_int_int_int_int(ctx, sp[0].o, (frame[5].o), (jint(0)), (frame[6].i), ((jint)((java_util_Spliterators$IntIteratorSpliterator *) NULL_CHECK((frame[0].o)))->F_characteristics));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(1902);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

void M_java_util_Spliterators$IntIteratorSpliterator_forEachRemaining_java_util_function_IntConsumer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterators$IntIteratorSpliterator:forEachRemaining", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1907);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(1908);
	sp[0].o = (jobject)((java_util_Spliterators$IntIteratorSpliterator *) NULL_CHECK((frame[0].o)))->F_it;
	((func_java_util_PrimitiveIterator$OfInt_forEachRemaining_java_util_function_IntConsumer) resolveInterfaceMethod(ctx, &class_java_util_PrimitiveIterator$OfInt, INDEX_java_util_PrimitiveIterator$OfInt_forEachRemaining_java_util_function_IntConsumer, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(1909);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_java_util_Spliterators$IntIteratorSpliterator_tryAdvance_java_util_function_IntConsumer_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterators$IntIteratorSpliterator:tryAdvance", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1913);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(1914);
	sp[0].o = (jobject)((java_util_Spliterators$IntIteratorSpliterator *) NULL_CHECK((frame[0].o)))->F_it;
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, sp[0].o))(ctx, sp[0].o);
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(1915);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((java_util_Spliterators$IntIteratorSpliterator *) NULL_CHECK((frame[0].o)))->F_it;
	jint temp0 = (jint)((func_java_util_PrimitiveIterator$OfInt_nextInt_R_int) resolveInterfaceMethod(ctx, &class_java_util_PrimitiveIterator$OfInt, INDEX_java_util_PrimitiveIterator$OfInt_nextInt_R_int, sp[1].o))(ctx, sp[1].o);
	((func_java_util_function_IntConsumer_accept_int) resolveInterfaceMethod(ctx, &class_java_util_function_IntConsumer, INDEX_java_util_function_IntConsumer_accept_int, sp[0].o))(ctx, sp[0].o, temp0);
	LINE_NUMBER(1916);
	popStackFrame(ctx);
	return (jint(1));
	}
label_2:;
	{
	LINE_NUMBER(1918);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jlong M_java_util_Spliterators$IntIteratorSpliterator_estimateSize_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterators$IntIteratorSpliterator:estimateSize", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1923);
	popStackFrame(ctx);
	return ((jlong)((java_util_Spliterators$IntIteratorSpliterator *) NULL_CHECK((frame[0].o)))->F_est);
	}

	popStackFrame(ctx);
}

jint M_java_util_Spliterators$IntIteratorSpliterator_characteristics_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterators$IntIteratorSpliterator:characteristics", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1927);
	popStackFrame(ctx);
	return ((jint)((java_util_Spliterators$IntIteratorSpliterator *) NULL_CHECK((frame[0].o)))->F_characteristics);
	}

	popStackFrame(ctx);
}

jobject M_java_util_Spliterators$IntIteratorSpliterator_getComparator_R_java_util_Comparator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterators$IntIteratorSpliterator:getComparator", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1931);
	jint temp0 = (jint)((func_java_util_Spliterators$IntIteratorSpliterator_hasCharacteristics_int_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_Spliterators$IntIteratorSpliterator_hasCharacteristics_int_R_boolean])(ctx, (frame[0].o), (jint(4)));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(1932);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_1:;
	{
	LINE_NUMBER(1933);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void M_java_util_Spliterators$IntIteratorSpliterator_forEachRemaining_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterators$IntIteratorSpliterator:forEachRemaining", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1843);
	((func_java_util_Spliterators$IntIteratorSpliterator_forEachRemaining_java_util_function_IntConsumer) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_Spliterators$IntIteratorSpliterator_forEachRemaining_java_util_function_IntConsumer])(ctx, (frame[0].o), (checkCast(ctx, &class_java_util_function_IntConsumer, (frame[1].o))));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_java_util_Spliterators$IntIteratorSpliterator_tryAdvance_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterators$IntIteratorSpliterator:tryAdvance", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1843);
	jint temp0 = (jint)((func_java_util_Spliterators$IntIteratorSpliterator_tryAdvance_java_util_function_IntConsumer_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_Spliterators$IntIteratorSpliterator_tryAdvance_java_util_function_IntConsumer_R_boolean])(ctx, (frame[0].o), (checkCast(ctx, &class_java_util_function_IntConsumer, (frame[1].o))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_java_util_Spliterators$IntIteratorSpliterator_trySplit_R_java_util_Spliterator$OfPrimitive(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterators$IntIteratorSpliterator:trySplit", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1843);
	sp[0].o = (jobject)((func_java_util_Spliterators$IntIteratorSpliterator_trySplit_R_java_util_Spliterator$OfInt) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_Spliterators$IntIteratorSpliterator_trySplit_R_java_util_Spliterator$OfInt])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_Spliterators$IntIteratorSpliterator_trySplit_R_java_util_Spliterator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterators$IntIteratorSpliterator:trySplit", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1843);
	sp[0].o = (jobject)((func_java_util_Spliterators$IntIteratorSpliterator_trySplit_R_java_util_Spliterator$OfInt) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_Spliterators$IntIteratorSpliterator_trySplit_R_java_util_Spliterator$OfInt])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_Spliterators$IntIteratorSpliterator[] {
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
	(void *) M_java_util_Spliterators$IntIteratorSpliterator_trySplit_R_java_util_Spliterator,
	(void *) M_java_util_Spliterators$IntIteratorSpliterator_estimateSize_R_long,
	(void *) M_java_util_Spliterator_getExactSizeIfKnown_R_long,
	(void *) M_java_util_Spliterators$IntIteratorSpliterator_characteristics_R_int,
	(void *) M_java_util_Spliterator_hasCharacteristics_int_R_boolean,
	(void *) M_java_util_Spliterators$IntIteratorSpliterator_getComparator_R_java_util_Comparator,
	(void *) M_java_util_Spliterators$IntIteratorSpliterator_trySplit_R_java_util_Spliterator$OfPrimitive,
	(void *) M_java_util_Spliterators$IntIteratorSpliterator_tryAdvance_java_lang_Object_R_boolean,
	(void *) M_java_util_Spliterators$IntIteratorSpliterator_forEachRemaining_java_lang_Object,
	(void *) M_java_util_Spliterators$IntIteratorSpliterator_trySplit_R_java_util_Spliterator$OfInt,
	(void *) M_java_util_Spliterators$IntIteratorSpliterator_tryAdvance_java_util_function_IntConsumer_R_boolean,
	(void *) M_java_util_Spliterators$IntIteratorSpliterator_forEachRemaining_java_util_function_IntConsumer,
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
	{ "BATCH_UNIT", &class_int, (intptr_t) &SF_java_util_Spliterators$IntIteratorSpliterator_BATCH_UNIT, "I", 24 },
	{ "MAX_BATCH", &class_int, (intptr_t) &SF_java_util_Spliterators$IntIteratorSpliterator_MAX_BATCH, "I", 24 },
	{ "it", &class_java_util_PrimitiveIterator$OfInt, offsetof(java_util_Spliterators$IntIteratorSpliterator, F_it), "Ljava/util/PrimitiveIterator$OfInt;", 2 },
	{ "characteristics", &class_int, offsetof(java_util_Spliterators$IntIteratorSpliterator, F_characteristics), "I", 18 },
	{ "est", &class_long, offsetof(java_util_Spliterators$IntIteratorSpliterator, F_est), "J", 2 },
	{ "batch", &class_int, offsetof(java_util_Spliterators$IntIteratorSpliterator, F_batch), "I", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_Spliterators$IntIteratorSpliterator_java_util_PrimitiveIterator$OfInt_long_int, 0, "(Ljava/util/PrimitiveIterator$OfInt;JI)V", 1 },
	{ "<init>", (intptr_t) init_java_util_Spliterators$IntIteratorSpliterator_java_util_PrimitiveIterator$OfInt_int, 0, "(Ljava/util/PrimitiveIterator$OfInt;I)V", 1 },
	{ "trySplit", (intptr_t) M_java_util_Spliterators$IntIteratorSpliterator_trySplit_R_java_util_Spliterator$OfInt, VTABLE_java_util_Spliterators$IntIteratorSpliterator_trySplit_R_java_util_Spliterator$OfInt, "()Ljava/util/Spliterator$OfInt;", 1 },
	{ "forEachRemaining", (intptr_t) M_java_util_Spliterators$IntIteratorSpliterator_forEachRemaining_java_util_function_IntConsumer, VTABLE_java_util_Spliterators$IntIteratorSpliterator_forEachRemaining_java_util_function_IntConsumer, "(Ljava/util/function/IntConsumer;)V", 1 },
	{ "tryAdvance", (intptr_t) M_java_util_Spliterators$IntIteratorSpliterator_tryAdvance_java_util_function_IntConsumer_R_boolean, VTABLE_java_util_Spliterators$IntIteratorSpliterator_tryAdvance_java_util_function_IntConsumer_R_boolean, "(Ljava/util/function/IntConsumer;)Z", 1 },
	{ "estimateSize", (intptr_t) M_java_util_Spliterators$IntIteratorSpliterator_estimateSize_R_long, VTABLE_java_util_Spliterators$IntIteratorSpliterator_estimateSize_R_long, "()J", 1 },
	{ "characteristics", (intptr_t) M_java_util_Spliterators$IntIteratorSpliterator_characteristics_R_int, VTABLE_java_util_Spliterators$IntIteratorSpliterator_characteristics_R_int, "()I", 1 },
	{ "getComparator", (intptr_t) M_java_util_Spliterators$IntIteratorSpliterator_getComparator_R_java_util_Comparator, VTABLE_java_util_Spliterators$IntIteratorSpliterator_getComparator_R_java_util_Comparator, "()Ljava/util/Comparator;", 1 },
	{ "forEachRemaining", (intptr_t) M_java_util_Spliterators$IntIteratorSpliterator_forEachRemaining_java_lang_Object, VTABLE_java_util_Spliterators$IntIteratorSpliterator_forEachRemaining_java_lang_Object, "(Ljava/lang/Object;)V", 4161 },
	{ "tryAdvance", (intptr_t) M_java_util_Spliterators$IntIteratorSpliterator_tryAdvance_java_lang_Object_R_boolean, VTABLE_java_util_Spliterators$IntIteratorSpliterator_tryAdvance_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 4161 },
	{ "trySplit", (intptr_t) M_java_util_Spliterators$IntIteratorSpliterator_trySplit_R_java_util_Spliterator$OfPrimitive, VTABLE_java_util_Spliterators$IntIteratorSpliterator_trySplit_R_java_util_Spliterator$OfPrimitive, "()Ljava/util/Spliterator$OfPrimitive;", 4161 },
	{ "trySplit", (intptr_t) M_java_util_Spliterators$IntIteratorSpliterator_trySplit_R_java_util_Spliterator, VTABLE_java_util_Spliterators$IntIteratorSpliterator_trySplit_R_java_util_Spliterator, "()Ljava/util/Spliterator;", 4161 },
};

Class class_java_util_Spliterators$IntIteratorSpliterator{
		.nativeName = (intptr_t) "java/util/Spliterators$IntIteratorSpliterator",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_Spliterators$IntIteratorSpliterator),
		.classVtable = (intptr_t) vtable_java_util_Spliterators$IntIteratorSpliterator,
		.staticInitializer = (intptr_t) clinit_java_util_Spliterators$IntIteratorSpliterator,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_Spliterators$IntIteratorSpliterator,
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
static bool registered_java_util_Spliterators$IntIteratorSpliterator = registerClass(&class_java_util_Spliterators$IntIteratorSpliterator);

}

