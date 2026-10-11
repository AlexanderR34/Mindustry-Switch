#include "java/util/Collections_SynchronizedSortedSet.h"
#include "java/util/Collection.h"
#include "java/util/Set.h"
#include "java/lang/Object.h"
#include "java/util/SortedSet.h"
#include "java/util/Collections_SynchronizedCollection.h"
#include "java/util/Collections.h"
#include "java/util/Comparator.h"
#include "java/util/Collections_SynchronizedSortedSet.h"
#include "java/lang/Iterable.h"
#include "java/lang/Throwable.h"
#include "java/util/Collections_SynchronizedSet.h"

extern "C" {

jlong SF_java_util_Collections$SynchronizedSortedSet_serialVersionUID;

void mark_java_util_Collections$SynchronizedSortedSet(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_util_Collections$SynchronizedSet(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_util_Collections$SynchronizedSortedSet *) object;
	if (self->F_ss)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_ss)->clazz)->markFunction)((jobject) self->F_ss, mark, depth + 1);
}

void clinit_java_util_Collections$SynchronizedSortedSet(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_util_Collections$SynchronizedSet(ctx);
	SF_java_util_Collections$SynchronizedSortedSet_serialVersionUID = jlong(8695801310862127406ll);
}

void init_java_util_Collections$SynchronizedSortedSet_java_util_SortedSet(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$SynchronizedSortedSet:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Collections$SynchronizedSortedSet(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(882);
	init_java_util_Collections$SynchronizedSet_java_util_Set(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(883);
	((java_util_Collections$SynchronizedSortedSet *) NULL_CHECK((frame[0].o)))->F_ss = (jref) (frame[1].o);
	LINE_NUMBER(884);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_Collections$SynchronizedSortedSet_java_util_SortedSet_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$SynchronizedSortedSet:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Collections$SynchronizedSortedSet(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(887);
	init_java_util_Collections$SynchronizedSet_java_util_Set_java_lang_Object(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	LINE_NUMBER(888);
	((java_util_Collections$SynchronizedSortedSet *) NULL_CHECK((frame[0].o)))->F_ss = (jref) (frame[1].o);
	LINE_NUMBER(889);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_util_Collections$SynchronizedSortedSet_comparator_R_java_util_Comparator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$SynchronizedSortedSet:comparator", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(892);
	sp[0].o = (jobject)((java_util_Collections$SynchronizedCollection *) NULL_CHECK((frame[0].o)))->F_mutex;
	frame[1].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(893);
	sp[0].o = (jobject)((java_util_Collections$SynchronizedSortedSet *) NULL_CHECK((frame[0].o)))->F_ss;
	sp[0].o = (jobject)((func_java_util_SortedSet_comparator_R_java_util_Comparator) resolveInterfaceMethod(ctx, &class_java_util_SortedSet, INDEX_java_util_SortedSet_comparator_R_java_util_Comparator, sp[0].o))(ctx, sp[0].o);
	monitorExit(ctx, (frame[1].o));
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	LINE_NUMBER(894);
	frame[2].o = sp[0].o;
	monitorExit(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(2);
	INST_ATHROW();
	
	popStackFrame(ctx);
}

jobject M_java_util_Collections$SynchronizedSortedSet_first_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$SynchronizedSortedSet:first", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(898);
	sp[0].o = (jobject)((java_util_Collections$SynchronizedCollection *) NULL_CHECK((frame[0].o)))->F_mutex;
	frame[1].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(899);
	sp[0].o = (jobject)((java_util_Collections$SynchronizedSortedSet *) NULL_CHECK((frame[0].o)))->F_ss;
	sp[0].o = (jobject)((func_java_util_SortedSet_first_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_SortedSet, INDEX_java_util_SortedSet_first_R_java_lang_Object, sp[0].o))(ctx, sp[0].o);
	monitorExit(ctx, (frame[1].o));
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	LINE_NUMBER(900);
	frame[2].o = sp[0].o;
	monitorExit(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(2);
	INST_ATHROW();
	
	popStackFrame(ctx);
}

jobject M_java_util_Collections$SynchronizedSortedSet_headSet_java_lang_Object_R_java_util_SortedSet(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$SynchronizedSortedSet:headSet", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(904);
	sp[0].o = (jobject)((java_util_Collections$SynchronizedCollection *) NULL_CHECK((frame[0].o)))->F_mutex;
	frame[2].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(905);
	clinit_java_util_Collections$SynchronizedSortedSet(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Collections$SynchronizedSortedSet);
	sp[1].o = (jobject)((java_util_Collections$SynchronizedSortedSet *) NULL_CHECK((frame[0].o)))->F_ss;
	sp[1].o = (jobject)((func_java_util_SortedSet_headSet_java_lang_Object_R_java_util_SortedSet) resolveInterfaceMethod(ctx, &class_java_util_SortedSet, INDEX_java_util_SortedSet_headSet_java_lang_Object_R_java_util_SortedSet, sp[1].o))(ctx, sp[1].o, (frame[1].o));
	sp[2].o = (jobject)((java_util_Collections$SynchronizedCollection *) NULL_CHECK((frame[0].o)))->F_mutex;
	init_java_util_Collections$SynchronizedSortedSet_java_util_SortedSet_java_lang_Object(ctx, sp[0].o, sp[1].o, sp[2].o);
	monitorExit(ctx, (frame[2].o));
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	LINE_NUMBER(906);
	frame[3].o = sp[0].o;
	monitorExit(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(3);
	INST_ATHROW();
	
	popStackFrame(ctx);
}

jobject M_java_util_Collections$SynchronizedSortedSet_last_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$SynchronizedSortedSet:last", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(910);
	sp[0].o = (jobject)((java_util_Collections$SynchronizedCollection *) NULL_CHECK((frame[0].o)))->F_mutex;
	frame[1].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(911);
	sp[0].o = (jobject)((java_util_Collections$SynchronizedSortedSet *) NULL_CHECK((frame[0].o)))->F_ss;
	sp[0].o = (jobject)((func_java_util_SortedSet_last_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_SortedSet, INDEX_java_util_SortedSet_last_R_java_lang_Object, sp[0].o))(ctx, sp[0].o);
	monitorExit(ctx, (frame[1].o));
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	LINE_NUMBER(912);
	frame[2].o = sp[0].o;
	monitorExit(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(2);
	INST_ATHROW();
	
	popStackFrame(ctx);
}

jobject M_java_util_Collections$SynchronizedSortedSet_subSet_java_lang_Object_java_lang_Object_R_java_util_SortedSet(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$SynchronizedSortedSet:subSet", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(916);
	sp[0].o = (jobject)((java_util_Collections$SynchronizedCollection *) NULL_CHECK((frame[0].o)))->F_mutex;
	frame[3].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(917);
	clinit_java_util_Collections$SynchronizedSortedSet(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Collections$SynchronizedSortedSet);
	sp[1].o = (jobject)((java_util_Collections$SynchronizedSortedSet *) NULL_CHECK((frame[0].o)))->F_ss;
	sp[1].o = (jobject)((func_java_util_SortedSet_subSet_java_lang_Object_java_lang_Object_R_java_util_SortedSet) resolveInterfaceMethod(ctx, &class_java_util_SortedSet, INDEX_java_util_SortedSet_subSet_java_lang_Object_java_lang_Object_R_java_util_SortedSet, sp[1].o))(ctx, sp[1].o, (frame[1].o), (frame[2].o));
	sp[2].o = (jobject)((java_util_Collections$SynchronizedCollection *) NULL_CHECK((frame[0].o)))->F_mutex;
	init_java_util_Collections$SynchronizedSortedSet_java_util_SortedSet_java_lang_Object(ctx, sp[0].o, sp[1].o, sp[2].o);
	monitorExit(ctx, (frame[3].o));
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	LINE_NUMBER(919);
	frame[4].o = sp[0].o;
	monitorExit(ctx, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(4);
	INST_ATHROW();
	
	popStackFrame(ctx);
}

jobject M_java_util_Collections$SynchronizedSortedSet_tailSet_java_lang_Object_R_java_util_SortedSet(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$SynchronizedSortedSet:tailSet", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(923);
	sp[0].o = (jobject)((java_util_Collections$SynchronizedCollection *) NULL_CHECK((frame[0].o)))->F_mutex;
	frame[2].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(924);
	clinit_java_util_Collections$SynchronizedSortedSet(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Collections$SynchronizedSortedSet);
	sp[1].o = (jobject)((java_util_Collections$SynchronizedSortedSet *) NULL_CHECK((frame[0].o)))->F_ss;
	sp[1].o = (jobject)((func_java_util_SortedSet_tailSet_java_lang_Object_R_java_util_SortedSet) resolveInterfaceMethod(ctx, &class_java_util_SortedSet, INDEX_java_util_SortedSet_tailSet_java_lang_Object_R_java_util_SortedSet, sp[1].o))(ctx, sp[1].o, (frame[1].o));
	sp[2].o = (jobject)((java_util_Collections$SynchronizedCollection *) NULL_CHECK((frame[0].o)))->F_mutex;
	init_java_util_Collections$SynchronizedSortedSet_java_util_SortedSet_java_lang_Object(ctx, sp[0].o, sp[1].o, sp[2].o);
	monitorExit(ctx, (frame[2].o));
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	LINE_NUMBER(925);
	frame[3].o = sp[0].o;
	monitorExit(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(3);
	INST_ATHROW();
	
	popStackFrame(ctx);
}

void *vtable_java_util_Collections$SynchronizedSortedSet[] {
	(void *) M_java_util_Collections$SynchronizedSet_hashCode_R_int,
	(void *) M_java_util_Collections$SynchronizedSet_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_util_Collections$SynchronizedCollection_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_util_Collections$SynchronizedCollection_iterator_R_java_util_Iterator,
	(void *) M_java_lang_Iterable_forEach_java_util_function_Consumer,
	(void *) M_java_util_Collection_spliterator_R_java_util_Spliterator,
	(void *) M_java_util_Collections$SynchronizedCollection_add_java_lang_Object_R_boolean,
	(void *) M_java_util_Collections$SynchronizedCollection_addAll_java_util_Collection_R_boolean,
	(void *) M_java_util_Collections$SynchronizedCollection_clear,
	(void *) M_java_util_Collections$SynchronizedCollection_contains_java_lang_Object_R_boolean,
	(void *) M_java_util_Collections$SynchronizedCollection_containsAll_java_util_Collection_R_boolean,
	(void *) M_java_util_Collections$SynchronizedCollection_isEmpty_R_boolean,
	(void *) M_java_util_Collections$SynchronizedCollection_remove_java_lang_Object_R_boolean,
	(void *) M_java_util_Collections$SynchronizedCollection_removeAll_java_util_Collection_R_boolean,
	(void *) M_java_util_Collections$SynchronizedCollection_retainAll_java_util_Collection_R_boolean,
	(void *) M_java_util_Collections$SynchronizedCollection_size_R_int,
	(void *) M_java_util_Collections$SynchronizedCollection_toArray_R_Array1_java_lang_Object,
	(void *) M_java_util_Collections$SynchronizedCollection_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object,
	(void *) M_java_util_Collections$SynchronizedSortedSet_comparator_R_java_util_Comparator,
	(void *) M_java_util_Collections$SynchronizedSortedSet_first_R_java_lang_Object,
	(void *) M_java_util_Collections$SynchronizedSortedSet_headSet_java_lang_Object_R_java_util_SortedSet,
	(void *) M_java_util_Collections$SynchronizedSortedSet_last_R_java_lang_Object,
	(void *) M_java_util_Collections$SynchronizedSortedSet_subSet_java_lang_Object_java_lang_Object_R_java_util_SortedSet,
	(void *) M_java_util_Collections$SynchronizedSortedSet_tailSet_java_lang_Object_R_java_util_SortedSet,
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
	{ "add", "(Ljava/lang/Object;)Z" },
	{ "addAll", "(Ljava/util/Collection;)Z" },
	{ "clear", "()V" },
	{ "contains", "(Ljava/lang/Object;)Z" },
	{ "containsAll", "(Ljava/util/Collection;)Z" },
	{ "isEmpty", "()Z" },
	{ "remove", "(Ljava/lang/Object;)Z" },
	{ "removeAll", "(Ljava/util/Collection;)Z" },
	{ "retainAll", "(Ljava/util/Collection;)Z" },
	{ "size", "()I" },
	{ "toArray", "()[Ljava/lang/Object;" },
	{ "toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;" },
	{ "comparator", "()Ljava/util/Comparator;" },
	{ "first", "()Ljava/lang/Object;" },
	{ "headSet", "(Ljava/lang/Object;)Ljava/util/SortedSet;" },
	{ "last", "()Ljava/lang/Object;" },
	{ "subSet", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/SortedSet;" },
	{ "tailSet", "(Ljava/lang/Object;)Ljava/util/SortedSet;" },
};

static jclass interfaces[] { &class_java_util_SortedSet, };

static FieldMetadata fields[] {
	{ "serialVersionUID", &class_long, (intptr_t) &SF_java_util_Collections$SynchronizedSortedSet_serialVersionUID, "J", 26 },
	{ "ss", &class_java_util_SortedSet, offsetof(java_util_Collections$SynchronizedSortedSet, F_ss), "Ljava/util/SortedSet;", 18 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_Collections$SynchronizedSortedSet_java_util_SortedSet, 0, "(Ljava/util/SortedSet;)V", 0 },
	{ "<init>", (intptr_t) init_java_util_Collections$SynchronizedSortedSet_java_util_SortedSet_java_lang_Object, 0, "(Ljava/util/SortedSet;Ljava/lang/Object;)V", 0 },
	{ "comparator", (intptr_t) M_java_util_Collections$SynchronizedSortedSet_comparator_R_java_util_Comparator, VTABLE_java_util_Collections$SynchronizedSortedSet_comparator_R_java_util_Comparator, "()Ljava/util/Comparator;", 1 },
	{ "first", (intptr_t) M_java_util_Collections$SynchronizedSortedSet_first_R_java_lang_Object, VTABLE_java_util_Collections$SynchronizedSortedSet_first_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "headSet", (intptr_t) M_java_util_Collections$SynchronizedSortedSet_headSet_java_lang_Object_R_java_util_SortedSet, VTABLE_java_util_Collections$SynchronizedSortedSet_headSet_java_lang_Object_R_java_util_SortedSet, "(Ljava/lang/Object;)Ljava/util/SortedSet;", 1 },
	{ "last", (intptr_t) M_java_util_Collections$SynchronizedSortedSet_last_R_java_lang_Object, VTABLE_java_util_Collections$SynchronizedSortedSet_last_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "subSet", (intptr_t) M_java_util_Collections$SynchronizedSortedSet_subSet_java_lang_Object_java_lang_Object_R_java_util_SortedSet, VTABLE_java_util_Collections$SynchronizedSortedSet_subSet_java_lang_Object_java_lang_Object_R_java_util_SortedSet, "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/SortedSet;", 1 },
	{ "tailSet", (intptr_t) M_java_util_Collections$SynchronizedSortedSet_tailSet_java_lang_Object_R_java_util_SortedSet, VTABLE_java_util_Collections$SynchronizedSortedSet_tailSet_java_lang_Object_R_java_util_SortedSet, "(Ljava/lang/Object;)Ljava/util/SortedSet;", 1 },
};

Class class_java_util_Collections$SynchronizedSortedSet{
		.nativeName = (intptr_t) "java/util/Collections$SynchronizedSortedSet",
		.parentClass = (intptr_t) &class_java_util_Collections$SynchronizedSet,
		.size = sizeof(java_util_Collections$SynchronizedSortedSet),
		.classVtable = (intptr_t) vtable_java_util_Collections$SynchronizedSortedSet,
		.staticInitializer = (intptr_t) clinit_java_util_Collections$SynchronizedSortedSet,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_Collections$SynchronizedSortedSet,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_util_Collections,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 8,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 32,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_Collections$SynchronizedSortedSet = registerClass(&class_java_util_Collections$SynchronizedSortedSet);

}

