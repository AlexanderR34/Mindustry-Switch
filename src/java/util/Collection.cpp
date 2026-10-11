#include "java/util/Collection.h"
#include "java/util/Collection.h"
#include "java/util/Spliterator.h"
#include "java/lang/Object.h"
#include "java/util/Iterator.h"
#include "java/util/Spliterators.h"
#include "java/lang/Iterable.h"

extern "C" {


void mark_java_util_Collection(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_Collection *) object;
}

void clinit_java_util_Collection(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

jobject M_java_util_Collection_spliterator_R_java_util_Spliterator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collection:spliterator", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(317);
	sp[0].o = (jobject)SM_java_util_Spliterators_spliterator_java_util_Collection_int_R_java_util_Spliterator(ctx, (frame[0].o), (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_Collection[] {
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
	(void *) nullptr,
	(void *) M_java_lang_Iterable_forEach_java_util_function_Consumer,
	(void *) M_java_util_Collection_spliterator_R_java_util_Spliterator,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
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

static jclass interfaces[] { &class_java_lang_Iterable, };

static MethodMetadata methods[] {
	{ "add", 0, INDEX_java_util_Collection_add_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1025 },
	{ "addAll", 0, INDEX_java_util_Collection_addAll_java_util_Collection_R_boolean, "(Ljava/util/Collection;)Z", 1025 },
	{ "clear", 0, INDEX_java_util_Collection_clear, "()V", 1025 },
	{ "contains", 0, INDEX_java_util_Collection_contains_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1025 },
	{ "containsAll", 0, INDEX_java_util_Collection_containsAll_java_util_Collection_R_boolean, "(Ljava/util/Collection;)Z", 1025 },
	{ "equals", 0, INDEX_java_util_Collection_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1025 },
	{ "hashCode", 0, INDEX_java_util_Collection_hashCode_R_int, "()I", 1025 },
	{ "isEmpty", 0, INDEX_java_util_Collection_isEmpty_R_boolean, "()Z", 1025 },
	{ "iterator", 0, INDEX_java_util_Collection_iterator_R_java_util_Iterator, "()Ljava/util/Iterator;", 1025 },
	{ "remove", 0, INDEX_java_util_Collection_remove_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1025 },
	{ "removeAll", 0, INDEX_java_util_Collection_removeAll_java_util_Collection_R_boolean, "(Ljava/util/Collection;)Z", 1025 },
	{ "retainAll", 0, INDEX_java_util_Collection_retainAll_java_util_Collection_R_boolean, "(Ljava/util/Collection;)Z", 1025 },
	{ "size", 0, INDEX_java_util_Collection_size_R_int, "()I", 1025 },
	{ "toArray", 0, INDEX_java_util_Collection_toArray_R_Array1_java_lang_Object, "()[Ljava/lang/Object;", 1025 },
	{ "toArray", 0, INDEX_java_util_Collection_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object, "([Ljava/lang/Object;)[Ljava/lang/Object;", 1025 },
	{ "spliterator", (intptr_t) M_java_util_Collection_spliterator_R_java_util_Spliterator, INDEX_java_util_Collection_spliterator_R_java_util_Spliterator, "()Ljava/util/Spliterator;", 1 },
};

Class class_java_util_Collection{
		.nativeName = (intptr_t) "java/util/Collection",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_Collection),
		.classVtable = (intptr_t) vtable_java_util_Collection,
		.staticInitializer = (intptr_t) clinit_java_util_Collection,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_Collection,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1537,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 16,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 26,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_Collection = registerClass(&class_java_util_Collection);

}
