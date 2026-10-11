#include "java/util/LinkedHashMap_LinkedHashMapEntrySet.h"
#include "java/util/Collection.h"
#include "java/util/LinkedHashMap_EntryIterator.h"
#include "java/lang/Object.h"
#include "java/util/Iterator.h"
#include "java/util/AbstractSet.h"
#include "java/util/HashMap.h"
#include "java/util/LinkedHashMap.h"
#include "java/util/LinkedHashMap_LinkedHashMapEntrySet.h"
#include "java/util/HashMap_HashMapEntrySet.h"
#include "java/lang/Iterable.h"
#include "java/util/AbstractCollection.h"

extern "C" {


void mark_java_util_LinkedHashMap$LinkedHashMapEntrySet(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_util_HashMap$HashMapEntrySet(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_util_LinkedHashMap$LinkedHashMapEntrySet *) object;
}

void clinit_java_util_LinkedHashMap$LinkedHashMapEntrySet(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_util_HashMap$HashMapEntrySet(ctx);
}

void init_java_util_LinkedHashMap$LinkedHashMapEntrySet_java_util_LinkedHashMap(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/LinkedHashMap$LinkedHashMapEntrySet:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_LinkedHashMap$LinkedHashMapEntrySet(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(240);
	init_java_util_HashMap$HashMapEntrySet_java_util_HashMap(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(241);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_util_LinkedHashMap$LinkedHashMapEntrySet_iterator_R_java_util_Iterator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/LinkedHashMap$LinkedHashMapEntrySet:iterator", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(245);
	clinit_java_util_LinkedHashMap$EntryIterator(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_LinkedHashMap$EntryIterator);
	sp[1].o = (jobject)((func_java_util_LinkedHashMap$LinkedHashMapEntrySet_hashMap_R_java_util_HashMap) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_LinkedHashMap$LinkedHashMapEntrySet_hashMap_R_java_util_HashMap])(ctx, (frame[0].o));
	init_java_util_LinkedHashMap$EntryIterator_java_util_LinkedHashMap(ctx, sp[0].o, (checkCast(ctx, &class_java_util_LinkedHashMap, sp[1].o)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_LinkedHashMap$LinkedHashMapEntrySet[] {
	(void *) M_java_util_AbstractSet_hashCode_R_int,
	(void *) M_java_util_AbstractSet_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_util_AbstractCollection_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_util_LinkedHashMap$LinkedHashMapEntrySet_iterator_R_java_util_Iterator,
	(void *) M_java_lang_Iterable_forEach_java_util_function_Consumer,
	(void *) M_java_util_Collection_spliterator_R_java_util_Spliterator,
	(void *) M_java_util_AbstractCollection_add_java_lang_Object_R_boolean,
	(void *) M_java_util_AbstractCollection_addAll_java_util_Collection_R_boolean,
	(void *) M_java_util_HashMap$HashMapEntrySet_clear,
	(void *) M_java_util_HashMap$HashMapEntrySet_contains_java_lang_Object_R_boolean,
	(void *) M_java_util_AbstractCollection_containsAll_java_util_Collection_R_boolean,
	(void *) M_java_util_AbstractCollection_isEmpty_R_boolean,
	(void *) M_java_util_HashMap$HashMapEntrySet_remove_java_lang_Object_R_boolean,
	(void *) M_java_util_AbstractSet_removeAll_java_util_Collection_R_boolean,
	(void *) M_java_util_AbstractCollection_retainAll_java_util_Collection_R_boolean,
	(void *) M_java_util_HashMap$HashMapEntrySet_size_R_int,
	(void *) M_java_util_AbstractCollection_toArray_R_Array1_java_lang_Object,
	(void *) M_java_util_AbstractCollection_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object,
	(void *) M_java_util_HashMap$HashMapEntrySet_hashMap_R_java_util_HashMap,
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
	{ "hashMap", "()Ljava/util/HashMap;" },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_LinkedHashMap$LinkedHashMapEntrySet_java_util_LinkedHashMap, 0, "(Ljava/util/LinkedHashMap;)V", 1 },
	{ "iterator", (intptr_t) M_java_util_LinkedHashMap$LinkedHashMapEntrySet_iterator_R_java_util_Iterator, VTABLE_java_util_LinkedHashMap$LinkedHashMapEntrySet_iterator_R_java_util_Iterator, "()Ljava/util/Iterator;", 1 },
};

Class class_java_util_LinkedHashMap$LinkedHashMapEntrySet{
		.nativeName = (intptr_t) "java/util/LinkedHashMap$LinkedHashMapEntrySet",
		.parentClass = (intptr_t) &class_java_util_HashMap$HashMapEntrySet,
		.size = sizeof(java_util_LinkedHashMap$LinkedHashMapEntrySet),
		.classVtable = (intptr_t) vtable_java_util_LinkedHashMap$LinkedHashMapEntrySet,
		.staticInitializer = (intptr_t) clinit_java_util_LinkedHashMap$LinkedHashMapEntrySet,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_LinkedHashMap$LinkedHashMapEntrySet,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_util_LinkedHashMap,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 48,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 27,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_LinkedHashMap$LinkedHashMapEntrySet = registerClass(&class_java_util_LinkedHashMap$LinkedHashMapEntrySet);

}

