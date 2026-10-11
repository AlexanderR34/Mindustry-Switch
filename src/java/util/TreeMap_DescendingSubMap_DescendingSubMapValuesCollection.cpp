#include "java/util/TreeMap_DescendingSubMap_DescendingSubMapValuesCollection.h"
#include "java/util/TreeMap_DescendingSubMap_DescendingSubMapValuesCollection_DescendingValueIterator.h"
#include "java/util/TreeMap.h"
#include "java/util/Collection.h"
#include "java/util/TreeMap_DescendingSubMap_DescendingSubMapValuesCollection.h"
#include "java/lang/Object.h"
#include "java/util/Iterator.h"
#include "java/util/TreeMap_Node.h"
#include "java/util/TreeMap_NavigableSubMap.h"
#include "java/util/TreeMap_DescendingSubMap.h"
#include "java/util/TreeMap_Entry.h"
#include "java/lang/Iterable.h"
#include "java/util/AbstractCollection.h"

extern "C" {


void mark_java_util_TreeMap$DescendingSubMap$DescendingSubMapValuesCollection(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_util_AbstractCollection(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_util_TreeMap$DescendingSubMap$DescendingSubMapValuesCollection *) object;
	if (self->F_subMap)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_subMap)->clazz)->markFunction)((jobject) self->F_subMap, mark, depth + 1);
}

void clinit_java_util_TreeMap$DescendingSubMap$DescendingSubMapValuesCollection(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_util_AbstractCollection(ctx);
}

void init_java_util_TreeMap$DescendingSubMap$DescendingSubMapValuesCollection_java_util_TreeMap$DescendingSubMap(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$DescendingSubMap$DescendingSubMapValuesCollection:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_TreeMap$DescendingSubMap$DescendingSubMapValuesCollection(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(3597);
	init_java_util_AbstractCollection(ctx, (frame[0].o));
	LINE_NUMBER(3598);
	((java_util_TreeMap$DescendingSubMap$DescendingSubMapValuesCollection *) NULL_CHECK((frame[0].o)))->F_subMap = (jref) (frame[1].o);
	LINE_NUMBER(3599);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_java_util_TreeMap$DescendingSubMap$DescendingSubMapValuesCollection_isEmpty_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$DescendingSubMap$DescendingSubMapValuesCollection:isEmpty", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(3603);
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMap$DescendingSubMapValuesCollection *) NULL_CHECK((frame[0].o)))->F_subMap;
	jint temp0 = (jint)((func_java_util_TreeMap$DescendingSubMap_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap$DescendingSubMap_isEmpty_R_boolean])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_java_util_TreeMap$DescendingSubMap$DescendingSubMapValuesCollection_iterator_R_java_util_Iterator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$DescendingSubMap$DescendingSubMapValuesCollection:iterator", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(3608);
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMap$DescendingSubMapValuesCollection *) NULL_CHECK((frame[0].o)))->F_subMap;
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_m;
	sp[1].o = (jobject)((java_util_TreeMap$DescendingSubMap$DescendingSubMapValuesCollection *) NULL_CHECK((frame[0].o)))->F_subMap;
	sp[1].o = (jobject)((func_java_util_TreeMap$DescendingSubMap_firstKey_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_util_TreeMap$DescendingSubMap_firstKey_R_java_lang_Object])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_util_TreeMap_find_java_lang_Object_R_java_util_TreeMap$Entry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_find_java_lang_Object_R_java_util_TreeMap$Entry])(ctx, sp[0].o, sp[1].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(3609);
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMap$DescendingSubMapValuesCollection *) NULL_CHECK((frame[0].o)))->F_subMap;
	sp[0].o = (jobject)((java_util_TreeMap$NavigableSubMap *) NULL_CHECK(sp[0].o))->F_m;
	sp[1].o = (jobject)((java_util_TreeMap$DescendingSubMap$DescendingSubMapValuesCollection *) NULL_CHECK((frame[0].o)))->F_subMap;
	sp[1].o = (jobject)((func_java_util_TreeMap$DescendingSubMap_lastKey_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_util_TreeMap$DescendingSubMap_lastKey_R_java_lang_Object])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_util_TreeMap_findLowerEntry_java_lang_Object_R_java_util_TreeMap$Entry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap_findLowerEntry_java_lang_Object_R_java_util_TreeMap$Entry])(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(3610);
	clinit_java_util_TreeMap$DescendingSubMap$DescendingSubMapValuesCollection$DescendingValueIterator(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_TreeMap$DescendingSubMap$DescendingSubMapValuesCollection$DescendingValueIterator);
	sp[1].o = (jobject)((java_util_TreeMap$Entry *) NULL_CHECK((frame[1].o)))->F_node;
	LINE_NUMBER(3611);
	jobject temp0 = sp[1].o;
	sp[1].o = sp[0].o;
	sp[2].o = temp0;
	sp += 3;
	if ((frame[1].o) != nullptr) goto label_4;
	}
	INST_ICONST(0);
	goto label_5;
label_4:;
	INST_ALOAD(1);
	sp[-1].i = ((java_util_TreeMap$Entry *) NULL_CHECK(sp[-1].o))->F_index;
label_5:;
	{
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMap$DescendingSubMapValuesCollection *) NULL_CHECK((frame[0].o)))->F_subMap;
	sp += 1;
	if ((frame[2].o) != nullptr) goto label_6;
	}
	INST_ACONST_NULL();
	goto label_7;
label_6:;
	INST_ALOAD(2);
	sp[-1].o = (jobject) ((java_util_TreeMap$Entry *) NULL_CHECK(sp[-1].o))->F_node;
label_7:;
	{
	LINE_NUMBER(3612);
	if ((frame[2].o) != nullptr) goto label_8;
	}
	INST_ICONST(0);
	goto label_9;
label_8:;
	INST_ALOAD(2);
	sp[-1].i = ((java_util_TreeMap$Entry *) NULL_CHECK(sp[-1].o))->F_index;
label_9:;
	{
	sp -= 7;
	init_java_util_TreeMap$DescendingSubMap$DescendingSubMapValuesCollection$DescendingValueIterator_java_util_TreeMap$Node_int_java_util_TreeMap$DescendingSubMap_java_util_TreeMap$Node_int(ctx, sp[0].o, sp[2].o, sp[3].i, sp[4].o, sp[5].o, sp[6].i);
	LINE_NUMBER(3610);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_java_util_TreeMap$DescendingSubMap$DescendingSubMapValuesCollection_size_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TreeMap$DescendingSubMap$DescendingSubMapValuesCollection:size", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(3657);
	sp[0].o = (jobject)((java_util_TreeMap$DescendingSubMap$DescendingSubMapValuesCollection *) NULL_CHECK((frame[0].o)))->F_subMap;
	jint temp0 = (jint)((func_java_util_TreeMap$DescendingSubMap_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TreeMap$DescendingSubMap_size_R_int])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_TreeMap$DescendingSubMap$DescendingSubMapValuesCollection[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_util_AbstractCollection_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_util_TreeMap$DescendingSubMap$DescendingSubMapValuesCollection_iterator_R_java_util_Iterator,
	(void *) M_java_lang_Iterable_forEach_java_util_function_Consumer,
	(void *) M_java_util_Collection_spliterator_R_java_util_Spliterator,
	(void *) M_java_util_AbstractCollection_add_java_lang_Object_R_boolean,
	(void *) M_java_util_AbstractCollection_addAll_java_util_Collection_R_boolean,
	(void *) M_java_util_AbstractCollection_clear,
	(void *) M_java_util_AbstractCollection_contains_java_lang_Object_R_boolean,
	(void *) M_java_util_AbstractCollection_containsAll_java_util_Collection_R_boolean,
	(void *) M_java_util_TreeMap$DescendingSubMap$DescendingSubMapValuesCollection_isEmpty_R_boolean,
	(void *) M_java_util_AbstractCollection_remove_java_lang_Object_R_boolean,
	(void *) M_java_util_AbstractCollection_removeAll_java_util_Collection_R_boolean,
	(void *) M_java_util_AbstractCollection_retainAll_java_util_Collection_R_boolean,
	(void *) M_java_util_TreeMap$DescendingSubMap$DescendingSubMapValuesCollection_size_R_int,
	(void *) M_java_util_AbstractCollection_toArray_R_Array1_java_lang_Object,
	(void *) M_java_util_AbstractCollection_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object,
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
};

static jclass innerClasses[] {
	&class_java_util_TreeMap$DescendingSubMap$DescendingSubMapValuesCollection$DescendingValueIterator,
};

static FieldMetadata fields[] {
	{ "subMap", &class_java_util_TreeMap$DescendingSubMap, offsetof(java_util_TreeMap$DescendingSubMap$DescendingSubMapValuesCollection, F_subMap), "Ljava/util/TreeMap$DescendingSubMap;", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_TreeMap$DescendingSubMap$DescendingSubMapValuesCollection_java_util_TreeMap$DescendingSubMap, 0, "(Ljava/util/TreeMap$DescendingSubMap;)V", 1 },
	{ "isEmpty", (intptr_t) M_java_util_TreeMap$DescendingSubMap$DescendingSubMapValuesCollection_isEmpty_R_boolean, VTABLE_java_util_TreeMap$DescendingSubMap$DescendingSubMapValuesCollection_isEmpty_R_boolean, "()Z", 1 },
	{ "iterator", (intptr_t) M_java_util_TreeMap$DescendingSubMap$DescendingSubMapValuesCollection_iterator_R_java_util_Iterator, VTABLE_java_util_TreeMap$DescendingSubMap$DescendingSubMapValuesCollection_iterator_R_java_util_Iterator, "()Ljava/util/Iterator;", 1 },
	{ "size", (intptr_t) M_java_util_TreeMap$DescendingSubMap$DescendingSubMapValuesCollection_size_R_int, VTABLE_java_util_TreeMap$DescendingSubMap$DescendingSubMapValuesCollection_size_R_int, "()I", 1 },
};

Class class_java_util_TreeMap$DescendingSubMap$DescendingSubMapValuesCollection{
		.nativeName = (intptr_t) "java/util/TreeMap$DescendingSubMap$DescendingSubMapValuesCollection",
		.parentClass = (intptr_t) &class_java_util_AbstractCollection,
		.size = sizeof(java_util_TreeMap$DescendingSubMap$DescendingSubMapValuesCollection),
		.classVtable = (intptr_t) vtable_java_util_TreeMap$DescendingSubMap$DescendingSubMapValuesCollection,
		.staticInitializer = (intptr_t) clinit_java_util_TreeMap$DescendingSubMap$DescendingSubMapValuesCollection,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_TreeMap$DescendingSubMap$DescendingSubMapValuesCollection,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_util_TreeMap$DescendingSubMap,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 26,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_TreeMap$DescendingSubMap$DescendingSubMapValuesCollection = registerClass(&class_java_util_TreeMap$DescendingSubMap$DescendingSubMapValuesCollection);

}

