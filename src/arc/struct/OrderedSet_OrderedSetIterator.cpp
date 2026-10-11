#include "arc/struct/OrderedSet_OrderedSetIterator.h"
#include "java/util/NoSuchElementException.h"
#include "java/lang/Object.h"
#include "arc/struct/OrderedSet_OrderedSetIterator.h"
#include "java/lang/String.h"
#include "java/util/Iterator.h"
#include "arc/util/ArcRuntimeException.h"
#include "arc/struct/ObjectSet_ObjectSetIterator.h"
#include "arc/struct/Seq.h"
#include "java/lang/IllegalStateException.h"
#include "arc/struct/OrderedSet.h"
#include "arc/struct/ObjectSet.h"
#include "java/lang/Iterable.h"

extern "C" {


void mark_arc_struct_OrderedSet$OrderedSetIterator(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_struct_ObjectSet$ObjectSetIterator(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (arc_struct_OrderedSet$OrderedSetIterator *) object;
	if (self->F_items)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_items)->clazz)->markFunction)((jobject) self->F_items, mark, depth + 1);
}

void clinit_arc_struct_OrderedSet$OrderedSetIterator(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_struct_ObjectSet$ObjectSetIterator(ctx);
}

void init_arc_struct_OrderedSet$OrderedSetIterator_arc_struct_OrderedSet(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/OrderedSet$OrderedSetIterator:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_OrderedSet$OrderedSetIterator(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(193);
	init_arc_struct_ObjectSet$ObjectSetIterator_arc_struct_ObjectSet(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(194);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_struct_OrderedSet *) NULL_CHECK((frame[1].o)))->F_items;
	((arc_struct_OrderedSet$OrderedSetIterator *) NULL_CHECK(sp[0].o))->F_items = (jref) sp[1].o;
	LINE_NUMBER(195);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_struct_OrderedSet$OrderedSetIterator_reset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/OrderedSet$OrderedSetIterator:reset", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(198);
	((arc_struct_ObjectSet$ObjectSetIterator *) NULL_CHECK((frame[0].o)))->F_nextIndex = (jint(0));
	LINE_NUMBER(199);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_struct_ObjectSet$ObjectSetIterator *) NULL_CHECK((frame[0].o)))->F_set;
	sp += 1;
	if (((jint)((arc_struct_ObjectSet *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_2;
	}
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	{
	sp -= 2;
	((arc_struct_ObjectSet$ObjectSetIterator *) NULL_CHECK(sp[0].o))->F_hasNext = sp[1].i;
	LINE_NUMBER(200);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_OrderedSet$OrderedSetIterator_next_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/OrderedSet$OrderedSetIterator:next", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(203);
	if (((jint)((arc_struct_ObjectSet$ObjectSetIterator *) NULL_CHECK((frame[0].o)))->F_hasNext) != 0) goto label_1;
	}
	{
	clinit_java_util_NoSuchElementException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_NoSuchElementException);
	init_java_util_NoSuchElementException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(204);
	if (((jint)((arc_struct_ObjectSet$ObjectSetIterator *) NULL_CHECK((frame[0].o)))->F_valid) != 0) goto label_2;
	}
	{
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"#iterator() cannot be used nested."_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(205);
	sp[0].o = (jobject)((arc_struct_OrderedSet$OrderedSetIterator *) NULL_CHECK((frame[0].o)))->F_items;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, ((jint)((arc_struct_ObjectSet$ObjectSetIterator *) NULL_CHECK((frame[0].o)))->F_nextIndex));
	frame[1].o = sp[0].o;
	LINE_NUMBER(206);
	sp[0].o = frame[0].o;
	((arc_struct_ObjectSet$ObjectSetIterator *) NULL_CHECK(sp[0].o))->F_nextIndex = (((jint)((arc_struct_ObjectSet$ObjectSetIterator *) NULL_CHECK(sp[0].o))->F_nextIndex) + (jint(1)));
	LINE_NUMBER(207);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((arc_struct_ObjectSet$ObjectSetIterator *) NULL_CHECK((frame[0].o)))->F_nextIndex;
	sp[1].o = (jobject)((arc_struct_ObjectSet$ObjectSetIterator *) NULL_CHECK((frame[0].o)))->F_set;
	sp += 1;
	if (temp0 >= ((jint)((arc_struct_ObjectSet *) NULL_CHECK(sp[0].o))->F_size)) goto label_5;
	}
	INST_ICONST(1);
	goto label_6;
label_5:;
	INST_ICONST(0);
label_6:;
	{
	sp -= 2;
	((arc_struct_ObjectSet$ObjectSetIterator *) NULL_CHECK(sp[0].o))->F_hasNext = sp[1].i;
	LINE_NUMBER(208);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

void M_arc_struct_OrderedSet$OrderedSetIterator_remove(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/OrderedSet$OrderedSetIterator:remove", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(212);
	if (((jint)((arc_struct_ObjectSet$ObjectSetIterator *) NULL_CHECK((frame[0].o)))->F_nextIndex) >= 0) goto label_1;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"next must be called before remove."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(213);
	sp[0].o = frame[0].o;
	((arc_struct_ObjectSet$ObjectSetIterator *) NULL_CHECK(sp[0].o))->F_nextIndex = (((jint)((arc_struct_ObjectSet$ObjectSetIterator *) NULL_CHECK(sp[0].o))->F_nextIndex) - (jint(1)));
	LINE_NUMBER(214);
	sp[0].o = (jobject)((arc_struct_ObjectSet$ObjectSetIterator *) NULL_CHECK((frame[0].o)))->F_set;
	sp[0].o = (jobject)((func_arc_struct_OrderedSet_removeIndex_int_R_java_lang_Object) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_struct_OrderedSet, sp[0].o)))->vtable)[VTABLE_arc_struct_OrderedSet_removeIndex_int_R_java_lang_Object])(ctx, (checkCast(ctx, &class_arc_struct_OrderedSet, sp[0].o)), ((jint)((arc_struct_ObjectSet$ObjectSetIterator *) NULL_CHECK((frame[0].o)))->F_nextIndex));
	LINE_NUMBER(215);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_OrderedSet$OrderedSetIterator_toSeq_arc_struct_Seq_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/OrderedSet$OrderedSetIterator:toSeq", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(218);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((arc_struct_OrderedSet$OrderedSetIterator *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = (jint)((arc_struct_ObjectSet$ObjectSetIterator *) NULL_CHECK((frame[0].o)))->F_nextIndex;
	sp[2].o = (jobject)((arc_struct_OrderedSet$OrderedSetIterator *) NULL_CHECK((frame[0].o)))->F_items;
	sp[0].o = (jobject)((func_arc_struct_Seq_addAll_arc_struct_Seq_int_int_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_addAll_arc_struct_Seq_int_int_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o, temp0, (((jint)((arc_struct_Seq *) NULL_CHECK(sp[2].o))->F_size) - ((jint)((arc_struct_ObjectSet$ObjectSetIterator *) NULL_CHECK((frame[0].o)))->F_nextIndex)));
	LINE_NUMBER(219);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_struct_OrderedSet$OrderedSetIterator *) NULL_CHECK((frame[0].o)))->F_items;
	((arc_struct_ObjectSet$ObjectSetIterator *) NULL_CHECK(sp[0].o))->F_nextIndex = ((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size);
	LINE_NUMBER(220);
	((arc_struct_ObjectSet$ObjectSetIterator *) NULL_CHECK((frame[0].o)))->F_hasNext = (jint(0));
	LINE_NUMBER(221);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_OrderedSet$OrderedSetIterator_toSeq_R_arc_struct_Seq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/OrderedSet$OrderedSetIterator:toSeq", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(225);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	jint temp0 = jint(1);
	sp[2].o = (jobject)((arc_struct_ObjectSet$ObjectSetIterator *) NULL_CHECK((frame[0].o)))->F_set;
	init_arc_struct_Seq_boolean_int(ctx, sp[1].o, temp0, (((jint)((arc_struct_ObjectSet *) NULL_CHECK(sp[2].o))->F_size) - ((jint)((arc_struct_ObjectSet$ObjectSetIterator *) NULL_CHECK((frame[0].o)))->F_nextIndex)));
	sp[0].o = (jobject)((func_arc_struct_OrderedSet$OrderedSetIterator_toSeq_arc_struct_Seq_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedSet$OrderedSetIterator_toSeq_arc_struct_Seq_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_arc_struct_OrderedSet$OrderedSetIterator[] {
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
	(void *) M_arc_struct_ObjectSet$ObjectSetIterator_iterator_R_java_util_Iterator,
	(void *) M_java_lang_Iterable_forEach_java_util_function_Consumer,
	(void *) M_java_lang_Iterable_spliterator_R_java_util_Spliterator,
	(void *) M_arc_struct_ObjectSet$ObjectSetIterator_hasNext_R_boolean,
	(void *) M_arc_struct_OrderedSet$OrderedSetIterator_next_R_java_lang_Object,
	(void *) M_arc_struct_OrderedSet$OrderedSetIterator_remove,
	(void *) M_java_util_Iterator_forEachRemaining_java_util_function_Consumer,
	(void *) M_arc_struct_OrderedSet$OrderedSetIterator_reset,
	(void *) M_arc_struct_ObjectSet$ObjectSetIterator_findNextIndex,
	(void *) M_arc_struct_ObjectSet$ObjectSetIterator_iterator_R_arc_struct_ObjectSet$ObjectSetIterator,
	(void *) M_arc_struct_OrderedSet$OrderedSetIterator_toSeq_arc_struct_Seq_R_arc_struct_Seq,
	(void *) M_arc_struct_OrderedSet$OrderedSetIterator_toSeq_R_arc_struct_Seq,
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
	{ "iterator", "()Ljava/util/Iterator;" },
	{ "forEach", "(Ljava/util/function/Consumer;)V" },
	{ "spliterator", "()Ljava/util/Spliterator;" },
	{ "hasNext", "()Z" },
	{ "next", "()Ljava/lang/Object;" },
	{ "remove", "()V" },
	{ "forEachRemaining", "(Ljava/util/function/Consumer;)V" },
	{ "reset", "()V" },
	{ "findNextIndex", "()V" },
	{ "iterator", "()Larc/struct/ObjectSet$ObjectSetIterator;" },
	{ "toSeq", "(Larc/struct/Seq;)Larc/struct/Seq;" },
	{ "toSeq", "()Larc/struct/Seq;" },
};

static FieldMetadata fields[] {
	{ "items", &class_arc_struct_Seq, offsetof(arc_struct_OrderedSet$OrderedSetIterator, F_items), "Larc/struct/Seq;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_struct_OrderedSet$OrderedSetIterator_arc_struct_OrderedSet, 0, "(Larc/struct/OrderedSet;)V", 1 },
	{ "reset", (intptr_t) M_arc_struct_OrderedSet$OrderedSetIterator_reset, VTABLE_arc_struct_OrderedSet$OrderedSetIterator_reset, "()V", 1 },
	{ "next", (intptr_t) M_arc_struct_OrderedSet$OrderedSetIterator_next_R_java_lang_Object, VTABLE_arc_struct_OrderedSet$OrderedSetIterator_next_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "remove", (intptr_t) M_arc_struct_OrderedSet$OrderedSetIterator_remove, VTABLE_arc_struct_OrderedSet$OrderedSetIterator_remove, "()V", 1 },
	{ "toSeq", (intptr_t) M_arc_struct_OrderedSet$OrderedSetIterator_toSeq_arc_struct_Seq_R_arc_struct_Seq, VTABLE_arc_struct_OrderedSet$OrderedSetIterator_toSeq_arc_struct_Seq_R_arc_struct_Seq, "(Larc/struct/Seq;)Larc/struct/Seq;", 1 },
	{ "toSeq", (intptr_t) M_arc_struct_OrderedSet$OrderedSetIterator_toSeq_R_arc_struct_Seq, VTABLE_arc_struct_OrderedSet$OrderedSetIterator_toSeq_R_arc_struct_Seq, "()Larc/struct/Seq;", 1 },
};

Class class_arc_struct_OrderedSet$OrderedSetIterator{
		.nativeName = (intptr_t) "arc/struct/OrderedSet$OrderedSetIterator",
		.parentClass = (intptr_t) &class_arc_struct_ObjectSet$ObjectSetIterator,
		.size = sizeof(arc_struct_OrderedSet$OrderedSetIterator),
		.classVtable = (intptr_t) vtable_arc_struct_OrderedSet$OrderedSetIterator,
		.staticInitializer = (intptr_t) clinit_arc_struct_OrderedSet$OrderedSetIterator,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_struct_OrderedSet$OrderedSetIterator,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_struct_OrderedSet,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 23,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_struct_OrderedSet$OrderedSetIterator = registerClass(&class_arc_struct_OrderedSet$OrderedSetIterator);

}

