#include "java/util/Spliterators_IteratorSpliterator.h"
#include "java/util/Spliterator.h"
#include "java/util/Collection.h"
#include "java/lang/Object.h"
#include "java/util/Spliterators.h"
#include "java/util/Iterator.h"
#include "java/util/Spliterators_ArraySpliterator.h"
#include "java/util/Spliterators_IteratorSpliterator.h"
#include "java/util/Comparator.h"
#include "java/lang/NullPointerException.h"
#include "java/lang/IllegalStateException.h"
#include "java/util/function/Consumer.h"

extern "C" {

jint SF_java_util_Spliterators$IteratorSpliterator_BATCH_UNIT;
jint SF_java_util_Spliterators$IteratorSpliterator_MAX_BATCH;

void mark_java_util_Spliterators$IteratorSpliterator(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_Spliterators$IteratorSpliterator *) object;
	if (self->F_collection)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_collection)->clazz)->markFunction)((jobject) self->F_collection, mark, depth + 1);
	if (self->F_it)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_it)->clazz)->markFunction)((jobject) self->F_it, mark, depth + 1);
}

void clinit_java_util_Spliterators$IteratorSpliterator(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_java_util_Spliterators$IteratorSpliterator_BATCH_UNIT = jint(1024);
	SF_java_util_Spliterators$IteratorSpliterator_MAX_BATCH = jint(33554432);
}

void init_java_util_Spliterators$IteratorSpliterator_java_util_Collection_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterators$IteratorSpliterator:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Spliterators$IteratorSpliterator(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(1710);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(1711);
	((java_util_Spliterators$IteratorSpliterator *) NULL_CHECK((frame[0].o)))->F_collection = (jref) (frame[1].o);
	LINE_NUMBER(1712);
	((java_util_Spliterators$IteratorSpliterator *) NULL_CHECK((frame[0].o)))->F_it = (jref) (jobject(nullptr));
	LINE_NUMBER(1713);
	sp[0].o = frame[0].o;
	sp += 1;
	if (((frame[2].i) & (4096)) != 0) goto label_4;
	}
	{
	LINE_NUMBER(1714);
	jint temp0 = ((frame[2].i) | (64)) | (16384);
	sp[0].i = temp0;
	sp += 1;
	goto label_6;
	}
label_4:;
	LINE_NUMBER(1715);
	INST_ILOAD(2);
label_6:;
	{
	sp -= 2;
	((java_util_Spliterators$IteratorSpliterator *) NULL_CHECK(sp[0].o))->F_characteristics = sp[1].i;
	LINE_NUMBER(1716);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_Spliterators$IteratorSpliterator_java_util_Iterator_long_int(jcontext ctx, jobject self, jobject param0, jlong param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterators$IteratorSpliterator:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Spliterators$IteratorSpliterator(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].l = param1;
	frame[4].i = param2;
	{
	LINE_NUMBER(1728);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(1729);
	((java_util_Spliterators$IteratorSpliterator *) NULL_CHECK((frame[0].o)))->F_collection = (jref) (jobject(nullptr));
	LINE_NUMBER(1730);
	((java_util_Spliterators$IteratorSpliterator *) NULL_CHECK((frame[0].o)))->F_it = (jref) (frame[1].o);
	LINE_NUMBER(1731);
	((java_util_Spliterators$IteratorSpliterator *) NULL_CHECK((frame[0].o)))->F_est = (frame[2].l);
	LINE_NUMBER(1732);
	sp[0].o = frame[0].o;
	sp += 1;
	if (((frame[4].i) & (4096)) != 0) goto label_5;
	}
	{
	LINE_NUMBER(1733);
	jint temp0 = ((frame[4].i) | (64)) | (16384);
	sp[0].i = temp0;
	sp += 1;
	goto label_7;
	}
label_5:;
	LINE_NUMBER(1734);
	INST_ILOAD(4);
label_7:;
	{
	sp -= 2;
	((java_util_Spliterators$IteratorSpliterator *) NULL_CHECK(sp[0].o))->F_characteristics = sp[1].i;
	LINE_NUMBER(1735);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_Spliterators$IteratorSpliterator_java_util_Iterator_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterators$IteratorSpliterator:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Spliterators$IteratorSpliterator(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(1746);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(1747);
	((java_util_Spliterators$IteratorSpliterator *) NULL_CHECK((frame[0].o)))->F_collection = (jref) (jobject(nullptr));
	LINE_NUMBER(1748);
	((java_util_Spliterators$IteratorSpliterator *) NULL_CHECK((frame[0].o)))->F_it = (jref) (frame[1].o);
	LINE_NUMBER(1749);
	((java_util_Spliterators$IteratorSpliterator *) NULL_CHECK((frame[0].o)))->F_est = (jlong(9223372036854775807ll));
	LINE_NUMBER(1750);
	((java_util_Spliterators$IteratorSpliterator *) NULL_CHECK((frame[0].o)))->F_characteristics = ((frame[2].i) & (-16449));
	LINE_NUMBER(1751);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_util_Spliterators$IteratorSpliterator_trySplit_R_java_util_Spliterator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterators$IteratorSpliterator:trySplit", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1770);
	sp[0].o = (jobject)((java_util_Spliterators$IteratorSpliterator *) NULL_CHECK((frame[0].o)))->F_it;
	frame[1].o = sp[0].o;
	if (sp[0].o != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(1771);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_Spliterators$IteratorSpliterator *) NULL_CHECK((frame[0].o)))->F_collection;
	sp[1].o = (jobject)((func_java_util_Collection_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_iterator_R_java_util_Iterator, sp[1].o))(ctx, sp[1].o);
	((java_util_Spliterators$IteratorSpliterator *) NULL_CHECK(sp[0].o))->F_it = (jref) sp[1].o;
	frame[1].o = sp[1].o;
	LINE_NUMBER(1772);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_Spliterators$IteratorSpliterator *) NULL_CHECK((frame[0].o)))->F_collection;
	jint temp0 = (jint)((func_java_util_Collection_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_size_R_int, sp[1].o))(ctx, sp[1].o);
	jlong temp1 = jlong(temp0);
	((java_util_Spliterators$IteratorSpliterator *) NULL_CHECK(sp[0].o))->F_est = temp1;
	frame[2].l = temp1;
	goto label_6;
	}
label_2:;
	{
	LINE_NUMBER(1775);
	frame[2].l = ((jlong)((java_util_Spliterators$IteratorSpliterator *) NULL_CHECK((frame[0].o)))->F_est);
	}
label_6:;
	{
	LINE_NUMBER(1776);
	if ((longCompare((frame[2].l), (jlong(1)))) <= 0) goto label_7;
	}
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_7;
	}
	{
	LINE_NUMBER(1777);
	frame[4].i = (((jint)((java_util_Spliterators$IteratorSpliterator *) NULL_CHECK((frame[0].o)))->F_batch) + (1024));
	LINE_NUMBER(1778);
	if ((longCompare((jlong((frame[4].i))), (frame[2].l))) <= 0) goto label_10;
	}
	{
	LINE_NUMBER(1779);
	frame[4].i = (jint((frame[2].l)));
	}
label_10:;
	{
	LINE_NUMBER(1780);
	if ((frame[4].i) <= (jint(33554432))) goto label_12;
	}
	{
	LINE_NUMBER(1781);
	frame[4].i = (jint(33554432));
	}
label_12:;
	{
	LINE_NUMBER(1782);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, (frame[4].i));
	frame[5].o = sp[0].o;
	LINE_NUMBER(1783);
	frame[6].i = (jint(0));
	}
label_15:;
	{
	LINE_NUMBER(1784);
	sp[0].o = frame[5].o;
	jint temp0 = frame[6].i;
	sp[1].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	INST_IINC(6, 1);
	if ((frame[6].i) >= (frame[4].i)) goto label_16;
	}
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 != 0) goto label_15;
	}
label_16:;
	{
	LINE_NUMBER(1785);
	((java_util_Spliterators$IteratorSpliterator *) NULL_CHECK((frame[0].o)))->F_batch = (frame[6].i);
	LINE_NUMBER(1786);
	if ((longCompare(((jlong)((java_util_Spliterators$IteratorSpliterator *) NULL_CHECK((frame[0].o)))->F_est), (jlong(9223372036854775807ll)))) == 0) goto label_18;
	}
	{
	LINE_NUMBER(1787);
	sp[0].o = frame[0].o;
	((java_util_Spliterators$IteratorSpliterator *) NULL_CHECK(sp[0].o))->F_est = (((jlong)((java_util_Spliterators$IteratorSpliterator *) NULL_CHECK(sp[0].o))->F_est) - (jlong((frame[6].i))));
	}
label_18:;
	{
	LINE_NUMBER(1788);
	clinit_java_util_Spliterators$ArraySpliterator(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Spliterators$ArraySpliterator);
	init_java_util_Spliterators$ArraySpliterator_Array1_java_lang_Object_int_int_int(ctx, sp[0].o, (frame[5].o), (jint(0)), (frame[6].i), ((jint)((java_util_Spliterators$IteratorSpliterator *) NULL_CHECK((frame[0].o)))->F_characteristics));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_7:;
	{
	LINE_NUMBER(1790);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

void M_java_util_Spliterators$IteratorSpliterator_forEachRemaining_java_util_function_Consumer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterators$IteratorSpliterator:forEachRemaining", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1795);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(1797);
	sp[0].o = (jobject)((java_util_Spliterators$IteratorSpliterator *) NULL_CHECK((frame[0].o)))->F_it;
	frame[2].o = sp[0].o;
	if (sp[0].o != nullptr) goto label_3;
	}
	{
	LINE_NUMBER(1798);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_Spliterators$IteratorSpliterator *) NULL_CHECK((frame[0].o)))->F_collection;
	sp[1].o = (jobject)((func_java_util_Collection_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_iterator_R_java_util_Iterator, sp[1].o))(ctx, sp[1].o);
	((java_util_Spliterators$IteratorSpliterator *) NULL_CHECK(sp[0].o))->F_it = (jref) sp[1].o;
	frame[2].o = sp[1].o;
	LINE_NUMBER(1799);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_Spliterators$IteratorSpliterator *) NULL_CHECK((frame[0].o)))->F_collection;
	jint temp0 = (jint)((func_java_util_Collection_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_size_R_int, sp[1].o))(ctx, sp[1].o);
	((java_util_Spliterators$IteratorSpliterator *) NULL_CHECK(sp[0].o))->F_est = (jlong(temp0));
	}
label_3:;
	{
	LINE_NUMBER(1801);
	((func_java_util_Iterator_forEachRemaining_java_util_function_Consumer) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_forEachRemaining_java_util_function_Consumer, (frame[2].o)))(ctx, (frame[2].o), (frame[1].o));
	LINE_NUMBER(1802);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_java_util_Spliterators$IteratorSpliterator_tryAdvance_java_util_function_Consumer_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterators$IteratorSpliterator:tryAdvance", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1806);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(1807);
	sp[0].o = (jobject)((java_util_Spliterators$IteratorSpliterator *) NULL_CHECK((frame[0].o)))->F_it;
	if (sp[0].o != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(1808);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_Spliterators$IteratorSpliterator *) NULL_CHECK((frame[0].o)))->F_collection;
	sp[1].o = (jobject)((func_java_util_Collection_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_iterator_R_java_util_Iterator, sp[1].o))(ctx, sp[1].o);
	((java_util_Spliterators$IteratorSpliterator *) NULL_CHECK(sp[0].o))->F_it = (jref) sp[1].o;
	LINE_NUMBER(1809);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_Spliterators$IteratorSpliterator *) NULL_CHECK((frame[0].o)))->F_collection;
	jint temp0 = (jint)((func_java_util_Collection_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_size_R_int, sp[1].o))(ctx, sp[1].o);
	((java_util_Spliterators$IteratorSpliterator *) NULL_CHECK(sp[0].o))->F_est = (jlong(temp0));
	}
label_2:;
	{
	LINE_NUMBER(1811);
	sp[0].o = (jobject)((java_util_Spliterators$IteratorSpliterator *) NULL_CHECK((frame[0].o)))->F_it;
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, sp[0].o))(ctx, sp[0].o);
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(1812);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((java_util_Spliterators$IteratorSpliterator *) NULL_CHECK((frame[0].o)))->F_it;
	sp[1].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, sp[1].o))(ctx, sp[1].o);
	((func_java_util_function_Consumer_accept_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_function_Consumer, INDEX_java_util_function_Consumer_accept_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1813);
	popStackFrame(ctx);
	return (jint(1));
	}
label_5:;
	{
	LINE_NUMBER(1815);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jlong M_java_util_Spliterators$IteratorSpliterator_estimateSize_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterators$IteratorSpliterator:estimateSize", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1820);
	sp[0].o = (jobject)((java_util_Spliterators$IteratorSpliterator *) NULL_CHECK((frame[0].o)))->F_it;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(1821);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_Spliterators$IteratorSpliterator *) NULL_CHECK((frame[0].o)))->F_collection;
	sp[1].o = (jobject)((func_java_util_Collection_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_iterator_R_java_util_Iterator, sp[1].o))(ctx, sp[1].o);
	((java_util_Spliterators$IteratorSpliterator *) NULL_CHECK(sp[0].o))->F_it = (jref) sp[1].o;
	LINE_NUMBER(1822);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_Spliterators$IteratorSpliterator *) NULL_CHECK((frame[0].o)))->F_collection;
	jint temp0 = (jint)((func_java_util_Collection_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_size_R_int, sp[1].o))(ctx, sp[1].o);
	jlong temp1 = jlong(temp0);
	((java_util_Spliterators$IteratorSpliterator *) NULL_CHECK(sp[0].o))->F_est = temp1;
	popStackFrame(ctx);
	return temp1;
	}
label_1:;
	{
	LINE_NUMBER(1824);
	popStackFrame(ctx);
	return ((jlong)((java_util_Spliterators$IteratorSpliterator *) NULL_CHECK((frame[0].o)))->F_est);
	}

	popStackFrame(ctx);
}

jint M_java_util_Spliterators$IteratorSpliterator_characteristics_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterators$IteratorSpliterator:characteristics", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1828);
	popStackFrame(ctx);
	return ((jint)((java_util_Spliterators$IteratorSpliterator *) NULL_CHECK((frame[0].o)))->F_characteristics);
	}

	popStackFrame(ctx);
}

jobject M_java_util_Spliterators$IteratorSpliterator_getComparator_R_java_util_Comparator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterators$IteratorSpliterator:getComparator", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1832);
	jint temp0 = (jint)((func_java_util_Spliterators$IteratorSpliterator_hasCharacteristics_int_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_Spliterators$IteratorSpliterator_hasCharacteristics_int_R_boolean])(ctx, (frame[0].o), (jint(4)));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(1833);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_1:;
	{
	LINE_NUMBER(1834);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void *vtable_java_util_Spliterators$IteratorSpliterator[] {
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
	(void *) M_java_util_Spliterators$IteratorSpliterator_tryAdvance_java_util_function_Consumer_R_boolean,
	(void *) M_java_util_Spliterators$IteratorSpliterator_forEachRemaining_java_util_function_Consumer,
	(void *) M_java_util_Spliterators$IteratorSpliterator_trySplit_R_java_util_Spliterator,
	(void *) M_java_util_Spliterators$IteratorSpliterator_estimateSize_R_long,
	(void *) M_java_util_Spliterator_getExactSizeIfKnown_R_long,
	(void *) M_java_util_Spliterators$IteratorSpliterator_characteristics_R_int,
	(void *) M_java_util_Spliterator_hasCharacteristics_int_R_boolean,
	(void *) M_java_util_Spliterators$IteratorSpliterator_getComparator_R_java_util_Comparator,
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
};

static jclass interfaces[] { &class_java_util_Spliterator, };

static FieldMetadata fields[] {
	{ "BATCH_UNIT", &class_int, (intptr_t) &SF_java_util_Spliterators$IteratorSpliterator_BATCH_UNIT, "I", 24 },
	{ "MAX_BATCH", &class_int, (intptr_t) &SF_java_util_Spliterators$IteratorSpliterator_MAX_BATCH, "I", 24 },
	{ "collection", &class_java_util_Collection, offsetof(java_util_Spliterators$IteratorSpliterator, F_collection), "Ljava/util/Collection;", 18 },
	{ "it", &class_java_util_Iterator, offsetof(java_util_Spliterators$IteratorSpliterator, F_it), "Ljava/util/Iterator;", 2 },
	{ "characteristics", &class_int, offsetof(java_util_Spliterators$IteratorSpliterator, F_characteristics), "I", 18 },
	{ "est", &class_long, offsetof(java_util_Spliterators$IteratorSpliterator, F_est), "J", 2 },
	{ "batch", &class_int, offsetof(java_util_Spliterators$IteratorSpliterator, F_batch), "I", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_Spliterators$IteratorSpliterator_java_util_Collection_int, 0, "(Ljava/util/Collection;I)V", 1 },
	{ "<init>", (intptr_t) init_java_util_Spliterators$IteratorSpliterator_java_util_Iterator_long_int, 0, "(Ljava/util/Iterator;JI)V", 1 },
	{ "<init>", (intptr_t) init_java_util_Spliterators$IteratorSpliterator_java_util_Iterator_int, 0, "(Ljava/util/Iterator;I)V", 1 },
	{ "trySplit", (intptr_t) M_java_util_Spliterators$IteratorSpliterator_trySplit_R_java_util_Spliterator, VTABLE_java_util_Spliterators$IteratorSpliterator_trySplit_R_java_util_Spliterator, "()Ljava/util/Spliterator;", 1 },
	{ "forEachRemaining", (intptr_t) M_java_util_Spliterators$IteratorSpliterator_forEachRemaining_java_util_function_Consumer, VTABLE_java_util_Spliterators$IteratorSpliterator_forEachRemaining_java_util_function_Consumer, "(Ljava/util/function/Consumer;)V", 1 },
	{ "tryAdvance", (intptr_t) M_java_util_Spliterators$IteratorSpliterator_tryAdvance_java_util_function_Consumer_R_boolean, VTABLE_java_util_Spliterators$IteratorSpliterator_tryAdvance_java_util_function_Consumer_R_boolean, "(Ljava/util/function/Consumer;)Z", 1 },
	{ "estimateSize", (intptr_t) M_java_util_Spliterators$IteratorSpliterator_estimateSize_R_long, VTABLE_java_util_Spliterators$IteratorSpliterator_estimateSize_R_long, "()J", 1 },
	{ "characteristics", (intptr_t) M_java_util_Spliterators$IteratorSpliterator_characteristics_R_int, VTABLE_java_util_Spliterators$IteratorSpliterator_characteristics_R_int, "()I", 1 },
	{ "getComparator", (intptr_t) M_java_util_Spliterators$IteratorSpliterator_getComparator_R_java_util_Comparator, VTABLE_java_util_Spliterators$IteratorSpliterator_getComparator_R_java_util_Comparator, "()Ljava/util/Comparator;", 1 },
};

Class class_java_util_Spliterators$IteratorSpliterator{
		.nativeName = (intptr_t) "java/util/Spliterators$IteratorSpliterator",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_Spliterators$IteratorSpliterator),
		.classVtable = (intptr_t) vtable_java_util_Spliterators$IteratorSpliterator,
		.staticInitializer = (intptr_t) clinit_java_util_Spliterators$IteratorSpliterator,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_Spliterators$IteratorSpliterator,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_util_Spliterators,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 7,
		.nativeFields = (intptr_t) fields,
		.methodCount = 9,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 19,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_Spliterators$IteratorSpliterator = registerClass(&class_java_util_Spliterators$IteratorSpliterator);

}

