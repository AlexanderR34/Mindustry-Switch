#include "arc/struct/ObjectIntMap_Entries.h"
#include "arc/struct/ObjectIntMap_Entry.h"
#include "java/util/NoSuchElementException.h"
#include "java/lang/Object.h"
#include "java/util/Iterator.h"
#include "java/lang/String.h"
#include "arc/struct/ObjectIntMap_Entries.h"
#include "arc/util/ArcRuntimeException.h"
#include "arc/struct/Seq.h"
#include "java/lang/Iterable.h"
#include "arc/struct/ObjectIntMap.h"
#include "arc/struct/ObjectIntMap_MapIterator.h"

extern "C" {


void mark_arc_struct_ObjectIntMap$Entries(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_struct_ObjectIntMap$MapIterator(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (arc_struct_ObjectIntMap$Entries *) object;
	if (self->F_entry)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_entry)->clazz)->markFunction)((jobject) self->F_entry, mark, depth + 1);
}

void clinit_arc_struct_ObjectIntMap$Entries(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_struct_ObjectIntMap$MapIterator(ctx);
}

void init_arc_struct_ObjectIntMap$Entries_arc_struct_ObjectIntMap(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectIntMap$Entries:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_ObjectIntMap$Entries(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(571);
	init_arc_struct_ObjectIntMap$MapIterator_arc_struct_ObjectIntMap(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(568);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectIntMap$Entry(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectIntMap$Entry);
	init_arc_struct_ObjectIntMap$Entry(ctx, sp[1].o);
	((arc_struct_ObjectIntMap$Entries *) NULL_CHECK(sp[0].o))->F_entry = (jref) sp[1].o;
	LINE_NUMBER(572);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_ObjectIntMap$Entries_next_R_arc_struct_ObjectIntMap$Entry(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectIntMap$Entries:next", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(577);
	if (((jint)((arc_struct_ObjectIntMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_hasNext) != 0) goto label_1;
	}
	{
	clinit_java_util_NoSuchElementException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_NoSuchElementException);
	init_java_util_NoSuchElementException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(578);
	if (((jint)((arc_struct_ObjectIntMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_valid) != 0) goto label_2;
	}
	{
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"#iterator() cannot be used nested."_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(579);
	sp[0].o = (jobject)((arc_struct_ObjectIntMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((arc_struct_ObjectIntMap *) NULL_CHECK(sp[0].o))->F_keyTable;
	frame[1].o = sp[0].o;
	LINE_NUMBER(580);
	sp[0].o = (jobject)((arc_struct_ObjectIntMap$Entries *) NULL_CHECK((frame[0].o)))->F_entry;
	((arc_struct_ObjectIntMap$Entry *) NULL_CHECK(sp[0].o))->F_key = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), ((jint)((arc_struct_ObjectIntMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_nextIndex)));
	LINE_NUMBER(581);
	sp[0].o = (jobject)((arc_struct_ObjectIntMap$Entries *) NULL_CHECK((frame[0].o)))->F_entry;
	sp[1].o = (jobject)((arc_struct_ObjectIntMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_map;
	sp[1].o = (jobject)((arc_struct_ObjectIntMap *) NULL_CHECK(sp[1].o))->F_valueTable;
	((arc_struct_ObjectIntMap$Entry *) NULL_CHECK(sp[0].o))->F_value = ((jint)ARRAY_ACCESS(jint, sp[1].o, ((jint)((arc_struct_ObjectIntMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_nextIndex)));
	LINE_NUMBER(582);
	((arc_struct_ObjectIntMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_currentIndex = ((jint)((arc_struct_ObjectIntMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_nextIndex);
	LINE_NUMBER(583);
	((func_arc_struct_ObjectIntMap$Entries_findNextIndex) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ObjectIntMap$Entries_findNextIndex])(ctx, (frame[0].o));
	LINE_NUMBER(584);
	sp[0].o = (jobject)((arc_struct_ObjectIntMap$Entries *) NULL_CHECK((frame[0].o)))->F_entry;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_arc_struct_ObjectIntMap$Entries_hasNext_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectIntMap$Entries:hasNext", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(589);
	if (((jint)((arc_struct_ObjectIntMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_valid) != 0) goto label_1;
	}
	{
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"#iterator() cannot be used nested."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(590);
	popStackFrame(ctx);
	return ((jint)((arc_struct_ObjectIntMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_hasNext);
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_ObjectIntMap$Entries_iterator_R_arc_struct_ObjectIntMap$Entries(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectIntMap$Entries:iterator", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(595);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_ObjectIntMap$Entries_toArray_R_arc_struct_Seq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectIntMap$Entries:toArray", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(599);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	sp[1].o = (jobject)((arc_struct_ObjectIntMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_map;
	init_arc_struct_Seq_int(ctx, sp[0].o, ((jint)((arc_struct_ObjectIntMap *) NULL_CHECK(sp[1].o))->F_size));
	frame[1].o = sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(600);
	jint temp0 = (jint)((func_arc_struct_ObjectIntMap$Entries_hasNext_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ObjectIntMap$Entries_hasNext_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(601);
	sp[0].o = (jobject)((func_arc_struct_ObjectIntMap$Entries_next_R_arc_struct_ObjectIntMap$Entry) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ObjectIntMap$Entries_next_R_arc_struct_ObjectIntMap$Entry])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(602);
	clinit_arc_struct_ObjectIntMap$Entry(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_ObjectIntMap$Entry);
	init_arc_struct_ObjectIntMap$Entry(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(603);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((arc_struct_ObjectIntMap$Entry *) NULL_CHECK((frame[2].o)))->F_key;
	((arc_struct_ObjectIntMap$Entry *) NULL_CHECK(sp[0].o))->F_key = (jref) sp[1].o;
	LINE_NUMBER(604);
	((arc_struct_ObjectIntMap$Entry *) NULL_CHECK((frame[3].o)))->F_value = ((jint)((arc_struct_ObjectIntMap$Entry *) NULL_CHECK((frame[2].o)))->F_value);
	LINE_NUMBER(605);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, (frame[1].o), (frame[3].o));
	LINE_NUMBER(606);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(607);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

void M_arc_struct_ObjectIntMap$Entries_remove(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectIntMap$Entries:remove", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(567);
	M_arc_struct_ObjectIntMap$MapIterator_remove(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_struct_ObjectIntMap$Entries_reset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectIntMap$Entries:reset", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(567);
	M_arc_struct_ObjectIntMap$MapIterator_reset(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_ObjectIntMap$Entries_iterator_R_java_util_Iterator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectIntMap$Entries:iterator", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(567);
	sp[0].o = (jobject)((func_arc_struct_ObjectIntMap$Entries_iterator_R_arc_struct_ObjectIntMap$Entries) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ObjectIntMap$Entries_iterator_R_arc_struct_ObjectIntMap$Entries])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_ObjectIntMap$Entries_next_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/ObjectIntMap$Entries:next", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(567);
	sp[0].o = (jobject)((func_arc_struct_ObjectIntMap$Entries_next_R_arc_struct_ObjectIntMap$Entry) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ObjectIntMap$Entries_next_R_arc_struct_ObjectIntMap$Entry])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_arc_struct_ObjectIntMap$Entries[] {
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
	(void *) M_arc_struct_ObjectIntMap$Entries_reset,
	(void *) M_arc_struct_ObjectIntMap$MapIterator_findNextIndex,
	(void *) M_arc_struct_ObjectIntMap$Entries_remove,
	(void *) M_arc_struct_ObjectIntMap$Entries_iterator_R_java_util_Iterator,
	(void *) M_java_lang_Iterable_forEach_java_util_function_Consumer,
	(void *) M_java_lang_Iterable_spliterator_R_java_util_Spliterator,
	(void *) M_arc_struct_ObjectIntMap$Entries_hasNext_R_boolean,
	(void *) M_arc_struct_ObjectIntMap$Entries_next_R_java_lang_Object,
	(void *) M_java_util_Iterator_forEachRemaining_java_util_function_Consumer,
	(void *) M_arc_struct_ObjectIntMap$Entries_next_R_arc_struct_ObjectIntMap$Entry,
	(void *) M_arc_struct_ObjectIntMap$Entries_iterator_R_arc_struct_ObjectIntMap$Entries,
	(void *) M_arc_struct_ObjectIntMap$Entries_toArray_R_arc_struct_Seq,
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
	{ "next", "()Larc/struct/ObjectIntMap$Entry;" },
	{ "iterator", "()Larc/struct/ObjectIntMap$Entries;" },
	{ "toArray", "()Larc/struct/Seq;" },
};

static jclass interfaces[] { &class_java_lang_Iterable, &class_java_util_Iterator, };

static FieldMetadata fields[] {
	{ "entry", &class_arc_struct_ObjectIntMap$Entry, offsetof(arc_struct_ObjectIntMap$Entries, F_entry), "Larc/struct/ObjectIntMap$Entry;", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_struct_ObjectIntMap$Entries_arc_struct_ObjectIntMap, 0, "(Larc/struct/ObjectIntMap;)V", 1 },
	{ "next", (intptr_t) M_arc_struct_ObjectIntMap$Entries_next_R_arc_struct_ObjectIntMap$Entry, VTABLE_arc_struct_ObjectIntMap$Entries_next_R_arc_struct_ObjectIntMap$Entry, "()Larc/struct/ObjectIntMap$Entry;", 1 },
	{ "hasNext", (intptr_t) M_arc_struct_ObjectIntMap$Entries_hasNext_R_boolean, VTABLE_arc_struct_ObjectIntMap$Entries_hasNext_R_boolean, "()Z", 1 },
	{ "iterator", (intptr_t) M_arc_struct_ObjectIntMap$Entries_iterator_R_arc_struct_ObjectIntMap$Entries, VTABLE_arc_struct_ObjectIntMap$Entries_iterator_R_arc_struct_ObjectIntMap$Entries, "()Larc/struct/ObjectIntMap$Entries;", 1 },
	{ "toArray", (intptr_t) M_arc_struct_ObjectIntMap$Entries_toArray_R_arc_struct_Seq, VTABLE_arc_struct_ObjectIntMap$Entries_toArray_R_arc_struct_Seq, "()Larc/struct/Seq;", 1 },
	{ "remove", (intptr_t) M_arc_struct_ObjectIntMap$Entries_remove, VTABLE_arc_struct_ObjectIntMap$Entries_remove, "()V", 4161 },
	{ "reset", (intptr_t) M_arc_struct_ObjectIntMap$Entries_reset, VTABLE_arc_struct_ObjectIntMap$Entries_reset, "()V", 4161 },
	{ "iterator", (intptr_t) M_arc_struct_ObjectIntMap$Entries_iterator_R_java_util_Iterator, VTABLE_arc_struct_ObjectIntMap$Entries_iterator_R_java_util_Iterator, "()Ljava/util/Iterator;", 4161 },
	{ "next", (intptr_t) M_arc_struct_ObjectIntMap$Entries_next_R_java_lang_Object, VTABLE_arc_struct_ObjectIntMap$Entries_next_R_java_lang_Object, "()Ljava/lang/Object;", 4161 },
};

Class class_arc_struct_ObjectIntMap$Entries{
		.nativeName = (intptr_t) "arc/struct/ObjectIntMap$Entries",
		.parentClass = (intptr_t) &class_arc_struct_ObjectIntMap$MapIterator,
		.size = sizeof(arc_struct_ObjectIntMap$Entries),
		.classVtable = (intptr_t) vtable_arc_struct_ObjectIntMap$Entries,
		.staticInitializer = (intptr_t) clinit_arc_struct_ObjectIntMap$Entries,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_struct_ObjectIntMap$Entries,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_struct_ObjectIntMap,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 2,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 9,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 23,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_struct_ObjectIntMap$Entries = registerClass(&class_arc_struct_ObjectIntMap$Entries);

}

