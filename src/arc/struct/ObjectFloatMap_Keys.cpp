#include "arc/struct/ObjectFloatMap_Keys.h"
#include "java/util/NoSuchElementException.h"
#include "java/lang/Object.h"
#include "java/util/Iterator.h"
#include "java/lang/String.h"
#include "arc/struct/ObjectFloatMap.h"
#include "arc/util/ArcRuntimeException.h"
#include "arc/struct/Seq.h"
#include "arc/struct/ObjectFloatMap_Keys.h"
#include "java/lang/Iterable.h"
#include "arc/struct/ObjectFloatMap_MapIterator.h"

extern "C" {


void mark_arc_struct_ObjectFloatMap$Keys(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_struct_ObjectFloatMap$MapIterator(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (arc_struct_ObjectFloatMap$Keys *) object;
}

void clinit_arc_struct_ObjectFloatMap$Keys(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_struct_ObjectFloatMap$MapIterator(ctx);
}

void init_arc_struct_ObjectFloatMap$Keys_arc_struct_ObjectFloatMap(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectFloatMap$Keys:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_ObjectFloatMap$Keys(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(663);
	init_arc_struct_ObjectFloatMap$MapIterator_arc_struct_ObjectFloatMap(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(664);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_struct_ObjectFloatMap$Keys_hasNext_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectFloatMap$Keys:hasNext", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(667);
	if (((jint)((arc_struct_ObjectFloatMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_valid) != 0) goto label_1;
	}
	{
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"#iterator() cannot be used nested."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(668);
	popStackFrame(ctx);
	return ((jint)((arc_struct_ObjectFloatMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_hasNext);
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_ObjectFloatMap$Keys_next_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectFloatMap$Keys:next", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(672);
	if (((jint)((arc_struct_ObjectFloatMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_hasNext) != 0) goto label_1;
	}
	{
	clinit_java_util_NoSuchElementException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_NoSuchElementException);
	init_java_util_NoSuchElementException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(673);
	if (((jint)((arc_struct_ObjectFloatMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_valid) != 0) goto label_2;
	}
	{
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"#iterator() cannot be used nested."_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(674);
	sp[0].o = (jobject)((arc_struct_ObjectFloatMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((arc_struct_ObjectFloatMap *) NULL_CHECK(sp[0].o))->F_keyTable;
	frame[1].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((arc_struct_ObjectFloatMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_nextIndex)));
	LINE_NUMBER(675);
	((arc_struct_ObjectFloatMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_currentIndex = ((jint)((arc_struct_ObjectFloatMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_nextIndex);
	LINE_NUMBER(676);
	((func_arc_struct_ObjectFloatMap$Keys_findNextIndex) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ObjectFloatMap$Keys_findNextIndex])(ctx, (frame[0].o));
	LINE_NUMBER(677);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_ObjectFloatMap$Keys_iterator_R_arc_struct_ObjectFloatMap$Keys(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectFloatMap$Keys:iterator", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(681);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_ObjectFloatMap$Keys_toSeq_R_arc_struct_Seq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectFloatMap$Keys:toSeq", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(686);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	jint temp0 = jint(1);
	sp[2].o = (jobject)((arc_struct_ObjectFloatMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_map;
	init_arc_struct_Seq_boolean_int(ctx, sp[1].o, temp0, ((jint)((arc_struct_ObjectFloatMap *) NULL_CHECK(sp[2].o))->F_size));
	sp[0].o = (jobject)((func_arc_struct_ObjectFloatMap$Keys_toSeq_arc_struct_Seq_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectFloatMap$Keys_toSeq_arc_struct_Seq_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_ObjectFloatMap$Keys_toSeq_arc_struct_Seq_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectFloatMap$Keys:toSeq", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
label_0:;
	{
	LINE_NUMBER(691);
	if (((jint)((arc_struct_ObjectFloatMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_hasNext) == 0) goto label_1;
	}
	{
	LINE_NUMBER(692);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_arc_struct_ObjectFloatMap$Keys_next_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ObjectFloatMap$Keys_next_R_java_lang_Object])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	goto label_0;
	}
label_1:;
	{
	LINE_NUMBER(693);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

void M_arc_struct_ObjectFloatMap$Keys_remove(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectFloatMap$Keys:remove", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(661);
	M_arc_struct_ObjectFloatMap$MapIterator_remove(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_struct_ObjectFloatMap$Keys_reset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectFloatMap$Keys:reset", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(661);
	M_arc_struct_ObjectFloatMap$MapIterator_reset(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_ObjectFloatMap$Keys_iterator_R_java_util_Iterator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectFloatMap$Keys:iterator", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(661);
	sp[0].o = (jobject)((func_arc_struct_ObjectFloatMap$Keys_iterator_R_arc_struct_ObjectFloatMap$Keys) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ObjectFloatMap$Keys_iterator_R_arc_struct_ObjectFloatMap$Keys])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_arc_struct_ObjectFloatMap$Keys[] {
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
	(void *) M_arc_struct_ObjectFloatMap$Keys_reset,
	(void *) M_arc_struct_ObjectFloatMap$MapIterator_findNextIndex,
	(void *) M_arc_struct_ObjectFloatMap$Keys_remove,
	(void *) M_arc_struct_ObjectFloatMap$Keys_iterator_R_java_util_Iterator,
	(void *) M_java_lang_Iterable_forEach_java_util_function_Consumer,
	(void *) M_java_lang_Iterable_spliterator_R_java_util_Spliterator,
	(void *) M_arc_struct_ObjectFloatMap$Keys_hasNext_R_boolean,
	(void *) M_arc_struct_ObjectFloatMap$Keys_next_R_java_lang_Object,
	(void *) M_java_util_Iterator_forEachRemaining_java_util_function_Consumer,
	(void *) M_arc_struct_ObjectFloatMap$Keys_iterator_R_arc_struct_ObjectFloatMap$Keys,
	(void *) M_arc_struct_ObjectFloatMap$Keys_toSeq_R_arc_struct_Seq,
	(void *) M_arc_struct_ObjectFloatMap$Keys_toSeq_arc_struct_Seq_R_arc_struct_Seq,
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
	{ "reset", "()V" },
	{ "findNextIndex", "()V" },
	{ "remove", "()V" },
	{ "iterator", "()Ljava/util/Iterator;" },
	{ "forEach", "(Ljava/util/function/Consumer;)V" },
	{ "spliterator", "()Ljava/util/Spliterator;" },
	{ "hasNext", "()Z" },
	{ "next", "()Ljava/lang/Object;" },
	{ "forEachRemaining", "(Ljava/util/function/Consumer;)V" },
	{ "iterator", "()Larc/struct/ObjectFloatMap$Keys;" },
	{ "toSeq", "()Larc/struct/Seq;" },
	{ "toSeq", "(Larc/struct/Seq;)Larc/struct/Seq;" },
};

static jclass interfaces[] { &class_java_lang_Iterable, &class_java_util_Iterator, };

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_struct_ObjectFloatMap$Keys_arc_struct_ObjectFloatMap, 0, "(Larc/struct/ObjectFloatMap;)V", 1 },
	{ "hasNext", (intptr_t) M_arc_struct_ObjectFloatMap$Keys_hasNext_R_boolean, VTABLE_arc_struct_ObjectFloatMap$Keys_hasNext_R_boolean, "()Z", 1 },
	{ "next", (intptr_t) M_arc_struct_ObjectFloatMap$Keys_next_R_java_lang_Object, VTABLE_arc_struct_ObjectFloatMap$Keys_next_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "iterator", (intptr_t) M_arc_struct_ObjectFloatMap$Keys_iterator_R_arc_struct_ObjectFloatMap$Keys, VTABLE_arc_struct_ObjectFloatMap$Keys_iterator_R_arc_struct_ObjectFloatMap$Keys, "()Larc/struct/ObjectFloatMap$Keys;", 1 },
	{ "toSeq", (intptr_t) M_arc_struct_ObjectFloatMap$Keys_toSeq_R_arc_struct_Seq, VTABLE_arc_struct_ObjectFloatMap$Keys_toSeq_R_arc_struct_Seq, "()Larc/struct/Seq;", 1 },
	{ "toSeq", (intptr_t) M_arc_struct_ObjectFloatMap$Keys_toSeq_arc_struct_Seq_R_arc_struct_Seq, VTABLE_arc_struct_ObjectFloatMap$Keys_toSeq_arc_struct_Seq_R_arc_struct_Seq, "(Larc/struct/Seq;)Larc/struct/Seq;", 1 },
	{ "remove", (intptr_t) M_arc_struct_ObjectFloatMap$Keys_remove, VTABLE_arc_struct_ObjectFloatMap$Keys_remove, "()V", 4161 },
	{ "reset", (intptr_t) M_arc_struct_ObjectFloatMap$Keys_reset, VTABLE_arc_struct_ObjectFloatMap$Keys_reset, "()V", 4161 },
	{ "iterator", (intptr_t) M_arc_struct_ObjectFloatMap$Keys_iterator_R_java_util_Iterator, VTABLE_arc_struct_ObjectFloatMap$Keys_iterator_R_java_util_Iterator, "()Ljava/util/Iterator;", 4161 },
};

Class class_arc_struct_ObjectFloatMap$Keys{
		.nativeName = (intptr_t) "arc/struct/ObjectFloatMap$Keys",
		.parentClass = (intptr_t) &class_arc_struct_ObjectFloatMap$MapIterator,
		.size = sizeof(arc_struct_ObjectFloatMap$Keys),
		.classVtable = (intptr_t) vtable_arc_struct_ObjectFloatMap$Keys,
		.staticInitializer = (intptr_t) clinit_arc_struct_ObjectFloatMap$Keys,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_struct_ObjectFloatMap$Keys,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_struct_ObjectFloatMap,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 2,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 9,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 23,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_struct_ObjectFloatMap$Keys = registerClass(&class_arc_struct_ObjectFloatMap$Keys);

}

