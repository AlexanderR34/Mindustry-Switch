#include "arc/struct/LongMap_Entries.h"
#include "java/util/NoSuchElementException.h"
#include "java/lang/Object.h"
#include "java/util/Iterator.h"
#include "arc/struct/LongMap.h"
#include "java/lang/String.h"
#include "arc/struct/LongMap_Entry.h"
#include "arc/util/ArcRuntimeException.h"
#include "arc/struct/LongMap_Entries.h"
#include "java/lang/Iterable.h"
#include "arc/struct/LongMap_MapIterator.h"

extern "C" {


void mark_arc_struct_LongMap$Entries(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_struct_LongMap$MapIterator(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (arc_struct_LongMap$Entries *) object;
	if (self->F_entry)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_entry)->clazz)->markFunction)((jobject) self->F_entry, mark, depth + 1);
}

void clinit_arc_struct_LongMap$Entries(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_struct_LongMap$MapIterator(ctx);
}

void init_arc_struct_LongMap$Entries_arc_struct_LongMap(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/LongMap$Entries:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_LongMap$Entries(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(617);
	init_arc_struct_LongMap$MapIterator_arc_struct_LongMap(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(614);
	sp[0].o = frame[0].o;
	clinit_arc_struct_LongMap$Entry(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_LongMap$Entry);
	init_arc_struct_LongMap$Entry(ctx, sp[1].o);
	((arc_struct_LongMap$Entries *) NULL_CHECK(sp[0].o))->F_entry = (jref) sp[1].o;
	LINE_NUMBER(618);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_LongMap$Entries_next_R_arc_struct_LongMap$Entry(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/LongMap$Entries:next", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(622);
	if (((jint)((arc_struct_LongMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_hasNext) != 0) goto label_1;
	}
	{
	clinit_java_util_NoSuchElementException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_NoSuchElementException);
	init_java_util_NoSuchElementException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(623);
	if (((jint)((arc_struct_LongMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_valid) != 0) goto label_2;
	}
	{
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"#iterator() cannot be used nested."_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(624);
	sp[0].o = (jobject)((arc_struct_LongMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((arc_struct_LongMap *) NULL_CHECK(sp[0].o))->F_keyTable;
	frame[1].o = sp[0].o;
	LINE_NUMBER(625);
	if (((jint)((arc_struct_LongMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_nextIndex) != (jint(-1))) goto label_4;
	}
	{
	LINE_NUMBER(626);
	sp[0].o = (jobject)((arc_struct_LongMap$Entries *) NULL_CHECK((frame[0].o)))->F_entry;
	((arc_struct_LongMap$Entry *) NULL_CHECK(sp[0].o))->F_key = (jlong(0));
	LINE_NUMBER(627);
	sp[0].o = (jobject)((arc_struct_LongMap$Entries *) NULL_CHECK((frame[0].o)))->F_entry;
	sp[1].o = (jobject)((arc_struct_LongMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_map;
	sp[1].o = (jobject)((arc_struct_LongMap *) NULL_CHECK(sp[1].o))->F_zeroValue;
	((arc_struct_LongMap$Entry *) NULL_CHECK(sp[0].o))->F_value = (jref) sp[1].o;
	goto label_7;
	}
label_4:;
	{
	LINE_NUMBER(629);
	sp[0].o = (jobject)((arc_struct_LongMap$Entries *) NULL_CHECK((frame[0].o)))->F_entry;
	((arc_struct_LongMap$Entry *) NULL_CHECK(sp[0].o))->F_key = ((jlong)ARRAY_ACCESS(jlong, (frame[1].o), ((jint)((arc_struct_LongMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_nextIndex)));
	LINE_NUMBER(630);
	sp[0].o = (jobject)((arc_struct_LongMap$Entries *) NULL_CHECK((frame[0].o)))->F_entry;
	sp[1].o = (jobject)((arc_struct_LongMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_map;
	sp[1].o = (jobject)((arc_struct_LongMap *) NULL_CHECK(sp[1].o))->F_valueTable;
	((arc_struct_LongMap$Entry *) NULL_CHECK(sp[0].o))->F_value = (jref) ((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)((arc_struct_LongMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_nextIndex)));
	}
label_7:;
	{
	LINE_NUMBER(632);
	((arc_struct_LongMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_currentIndex = ((jint)((arc_struct_LongMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_nextIndex);
	LINE_NUMBER(633);
	((func_arc_struct_LongMap$Entries_findNextIndex) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_LongMap$Entries_findNextIndex])(ctx, (frame[0].o));
	LINE_NUMBER(634);
	sp[0].o = (jobject)((arc_struct_LongMap$Entries *) NULL_CHECK((frame[0].o)))->F_entry;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_arc_struct_LongMap$Entries_hasNext_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/LongMap$Entries:hasNext", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(638);
	if (((jint)((arc_struct_LongMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_valid) != 0) goto label_1;
	}
	{
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"#iterator() cannot be used nested."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(639);
	popStackFrame(ctx);
	return ((jint)((arc_struct_LongMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_hasNext);
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_LongMap$Entries_iterator_R_java_util_Iterator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/LongMap$Entries:iterator", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(643);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

void M_arc_struct_LongMap$Entries_remove(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/LongMap$Entries:remove", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(613);
	M_arc_struct_LongMap$MapIterator_remove(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_struct_LongMap$Entries_reset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/LongMap$Entries:reset", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(613);
	M_arc_struct_LongMap$MapIterator_reset(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_LongMap$Entries_next_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/LongMap$Entries:next", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(613);
	sp[0].o = (jobject)((func_arc_struct_LongMap$Entries_next_R_arc_struct_LongMap$Entry) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_LongMap$Entries_next_R_arc_struct_LongMap$Entry])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_arc_struct_LongMap$Entries[] {
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
	(void *) M_arc_struct_LongMap$Entries_reset,
	(void *) M_arc_struct_LongMap$MapIterator_findNextIndex,
	(void *) M_arc_struct_LongMap$Entries_remove,
	(void *) M_arc_struct_LongMap$Entries_iterator_R_java_util_Iterator,
	(void *) M_java_lang_Iterable_forEach_java_util_function_Consumer,
	(void *) M_java_lang_Iterable_spliterator_R_java_util_Spliterator,
	(void *) M_arc_struct_LongMap$Entries_hasNext_R_boolean,
	(void *) M_arc_struct_LongMap$Entries_next_R_java_lang_Object,
	(void *) M_java_util_Iterator_forEachRemaining_java_util_function_Consumer,
	(void *) M_arc_struct_LongMap$Entries_next_R_arc_struct_LongMap$Entry,
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
	{ "next", "()Larc/struct/LongMap$Entry;" },
};

static jclass interfaces[] { &class_java_lang_Iterable, &class_java_util_Iterator, };

static FieldMetadata fields[] {
	{ "entry", &class_arc_struct_LongMap$Entry, offsetof(arc_struct_LongMap$Entries, F_entry), "Larc/struct/LongMap$Entry;", 18 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_struct_LongMap$Entries_arc_struct_LongMap, 0, "(Larc/struct/LongMap;)V", 1 },
	{ "next", (intptr_t) M_arc_struct_LongMap$Entries_next_R_arc_struct_LongMap$Entry, VTABLE_arc_struct_LongMap$Entries_next_R_arc_struct_LongMap$Entry, "()Larc/struct/LongMap$Entry;", 1 },
	{ "hasNext", (intptr_t) M_arc_struct_LongMap$Entries_hasNext_R_boolean, VTABLE_arc_struct_LongMap$Entries_hasNext_R_boolean, "()Z", 1 },
	{ "iterator", (intptr_t) M_arc_struct_LongMap$Entries_iterator_R_java_util_Iterator, VTABLE_arc_struct_LongMap$Entries_iterator_R_java_util_Iterator, "()Ljava/util/Iterator;", 1 },
	{ "remove", (intptr_t) M_arc_struct_LongMap$Entries_remove, VTABLE_arc_struct_LongMap$Entries_remove, "()V", 4161 },
	{ "reset", (intptr_t) M_arc_struct_LongMap$Entries_reset, VTABLE_arc_struct_LongMap$Entries_reset, "()V", 4161 },
	{ "next", (intptr_t) M_arc_struct_LongMap$Entries_next_R_java_lang_Object, VTABLE_arc_struct_LongMap$Entries_next_R_java_lang_Object, "()Ljava/lang/Object;", 4161 },
};

Class class_arc_struct_LongMap$Entries{
		.nativeName = (intptr_t) "arc/struct/LongMap$Entries",
		.parentClass = (intptr_t) &class_arc_struct_LongMap$MapIterator,
		.size = sizeof(arc_struct_LongMap$Entries),
		.classVtable = (intptr_t) vtable_arc_struct_LongMap$Entries,
		.staticInitializer = (intptr_t) clinit_arc_struct_LongMap$Entries,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_struct_LongMap$Entries,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_struct_LongMap,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 2,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 7,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 21,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_struct_LongMap$Entries = registerClass(&class_arc_struct_LongMap$Entries);

}

