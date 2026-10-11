#include "arc/struct/ObjectMap_Keys.h"
#include "arc/struct/ObjectMap_MapIterator.h"
#include "java/util/NoSuchElementException.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/util/Iterator.h"
#include "arc/util/ArcRuntimeException.h"
#include "arc/struct/Seq.h"
#include "arc/struct/ObjectMap_Keys.h"
#include "arc/struct/ObjectMap.h"
#include "java/lang/Iterable.h"

extern "C" {


void mark_arc_struct_ObjectMap$Keys(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_struct_ObjectMap$MapIterator(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (arc_struct_ObjectMap$Keys *) object;
}

void clinit_arc_struct_ObjectMap$Keys(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_struct_ObjectMap$MapIterator(ctx);
}

void init_arc_struct_ObjectMap$Keys_arc_struct_ObjectMap(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectMap$Keys:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_ObjectMap$Keys(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(667);
	init_arc_struct_ObjectMap$MapIterator_arc_struct_ObjectMap(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(668);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_struct_ObjectMap$Keys_hasNext_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectMap$Keys:hasNext", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(672);
	if (((jint)((arc_struct_ObjectMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_valid) != 0) goto label_1;
	}
	{
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"#iterator() cannot be used nested."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(673);
	popStackFrame(ctx);
	return ((jint)((arc_struct_ObjectMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_hasNext);
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_ObjectMap$Keys_next_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectMap$Keys:next", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(678);
	if (((jint)((arc_struct_ObjectMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_hasNext) != 0) goto label_1;
	}
	{
	clinit_java_util_NoSuchElementException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_NoSuchElementException);
	init_java_util_NoSuchElementException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(679);
	if (((jint)((arc_struct_ObjectMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_valid) != 0) goto label_2;
	}
	{
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"#iterator() cannot be used nested."_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(680);
	sp[0].o = (jobject)((arc_struct_ObjectMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((arc_struct_ObjectMap *) NULL_CHECK(sp[0].o))->F_keyTable;
	frame[1].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((arc_struct_ObjectMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_nextIndex)));
	LINE_NUMBER(681);
	((arc_struct_ObjectMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_currentIndex = ((jint)((arc_struct_ObjectMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_nextIndex);
	LINE_NUMBER(682);
	((func_arc_struct_ObjectMap$Keys_findNextIndex) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ObjectMap$Keys_findNextIndex])(ctx, (frame[0].o));
	LINE_NUMBER(683);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_ObjectMap$Keys_iterator_R_arc_struct_ObjectMap$Keys(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectMap$Keys:iterator", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(688);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_ObjectMap$Keys_toSeq_R_arc_struct_Seq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectMap$Keys:toSeq", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(693);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	jint temp0 = jint(1);
	sp[2].o = (jobject)((arc_struct_ObjectMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_map;
	init_arc_struct_Seq_boolean_int(ctx, sp[1].o, temp0, ((jint)((arc_struct_ObjectMap *) NULL_CHECK(sp[2].o))->F_size));
	sp[0].o = (jobject)((func_arc_struct_ObjectMap$Keys_toSeq_arc_struct_Seq_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap$Keys_toSeq_arc_struct_Seq_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_ObjectMap$Keys_toSeq_arc_struct_Seq_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectMap$Keys:toSeq", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
label_0:;
	{
	LINE_NUMBER(698);
	if (((jint)((arc_struct_ObjectMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_hasNext) == 0) goto label_1;
	}
	{
	LINE_NUMBER(699);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_arc_struct_ObjectMap$Keys_next_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ObjectMap$Keys_next_R_java_lang_Object])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	goto label_0;
	}
label_1:;
	{
	LINE_NUMBER(700);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

void M_arc_struct_ObjectMap$Keys_remove(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectMap$Keys:remove", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(665);
	M_arc_struct_ObjectMap$MapIterator_remove(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_struct_ObjectMap$Keys_reset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectMap$Keys:reset", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(665);
	M_arc_struct_ObjectMap$MapIterator_reset(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_ObjectMap$Keys_iterator_R_java_util_Iterator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectMap$Keys:iterator", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(665);
	sp[0].o = (jobject)((func_arc_struct_ObjectMap$Keys_iterator_R_arc_struct_ObjectMap$Keys) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ObjectMap$Keys_iterator_R_arc_struct_ObjectMap$Keys])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_arc_struct_ObjectMap$Keys[] {
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
	(void *) M_arc_struct_ObjectMap$Keys_iterator_R_java_util_Iterator,
	(void *) M_java_lang_Iterable_forEach_java_util_function_Consumer,
	(void *) M_java_lang_Iterable_spliterator_R_java_util_Spliterator,
	(void *) M_arc_struct_ObjectMap$Keys_hasNext_R_boolean,
	(void *) M_arc_struct_ObjectMap$Keys_next_R_java_lang_Object,
	(void *) M_arc_struct_ObjectMap$Keys_remove,
	(void *) M_java_util_Iterator_forEachRemaining_java_util_function_Consumer,
	(void *) M_arc_struct_ObjectMap$Keys_reset,
	(void *) M_arc_struct_ObjectMap$MapIterator_findNextIndex,
	(void *) M_arc_struct_ObjectMap$Keys_iterator_R_arc_struct_ObjectMap$Keys,
	(void *) M_arc_struct_ObjectMap$Keys_toSeq_R_arc_struct_Seq,
	(void *) M_arc_struct_ObjectMap$Keys_toSeq_arc_struct_Seq_R_arc_struct_Seq,
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
	{ "iterator", "()Larc/struct/ObjectMap$Keys;" },
	{ "toSeq", "()Larc/struct/Seq;" },
	{ "toSeq", "(Larc/struct/Seq;)Larc/struct/Seq;" },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_struct_ObjectMap$Keys_arc_struct_ObjectMap, 0, "(Larc/struct/ObjectMap;)V", 1 },
	{ "hasNext", (intptr_t) M_arc_struct_ObjectMap$Keys_hasNext_R_boolean, VTABLE_arc_struct_ObjectMap$Keys_hasNext_R_boolean, "()Z", 1 },
	{ "next", (intptr_t) M_arc_struct_ObjectMap$Keys_next_R_java_lang_Object, VTABLE_arc_struct_ObjectMap$Keys_next_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "iterator", (intptr_t) M_arc_struct_ObjectMap$Keys_iterator_R_arc_struct_ObjectMap$Keys, VTABLE_arc_struct_ObjectMap$Keys_iterator_R_arc_struct_ObjectMap$Keys, "()Larc/struct/ObjectMap$Keys;", 1 },
	{ "toSeq", (intptr_t) M_arc_struct_ObjectMap$Keys_toSeq_R_arc_struct_Seq, VTABLE_arc_struct_ObjectMap$Keys_toSeq_R_arc_struct_Seq, "()Larc/struct/Seq;", 1 },
	{ "toSeq", (intptr_t) M_arc_struct_ObjectMap$Keys_toSeq_arc_struct_Seq_R_arc_struct_Seq, VTABLE_arc_struct_ObjectMap$Keys_toSeq_arc_struct_Seq_R_arc_struct_Seq, "(Larc/struct/Seq;)Larc/struct/Seq;", 1 },
	{ "remove", (intptr_t) M_arc_struct_ObjectMap$Keys_remove, VTABLE_arc_struct_ObjectMap$Keys_remove, "()V", 4161 },
	{ "reset", (intptr_t) M_arc_struct_ObjectMap$Keys_reset, VTABLE_arc_struct_ObjectMap$Keys_reset, "()V", 4161 },
	{ "iterator", (intptr_t) M_arc_struct_ObjectMap$Keys_iterator_R_java_util_Iterator, VTABLE_arc_struct_ObjectMap$Keys_iterator_R_java_util_Iterator, "()Ljava/util/Iterator;", 4161 },
};

Class class_arc_struct_ObjectMap$Keys{
		.nativeName = (intptr_t) "arc/struct/ObjectMap$Keys",
		.parentClass = (intptr_t) &class_arc_struct_ObjectMap$MapIterator,
		.size = sizeof(arc_struct_ObjectMap$Keys),
		.classVtable = (intptr_t) vtable_arc_struct_ObjectMap$Keys,
		.staticInitializer = (intptr_t) clinit_arc_struct_ObjectMap$Keys,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_struct_ObjectMap$Keys,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_struct_ObjectMap,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 9,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 23,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_struct_ObjectMap$Keys = registerClass(&class_arc_struct_ObjectMap$Keys);

}

