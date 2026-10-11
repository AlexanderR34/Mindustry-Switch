#include "java/util/PrimitiveIterator.h"
#include "java/util/PrimitiveIterator_OfLong.h"
#include "java/util/PrimitiveIterator_OfDouble.h"
#include "java/lang/Object.h"
#include "java/util/Iterator.h"
#include "java/util/PrimitiveIterator_OfInt.h"
#include "java/util/PrimitiveIterator.h"

extern "C" {


void mark_java_util_PrimitiveIterator(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_PrimitiveIterator *) object;
}

void clinit_java_util_PrimitiveIterator(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void *vtable_java_util_PrimitiveIterator[] {
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
	(void *) nullptr,
	(void *) M_java_util_Iterator_remove,
	(void *) M_java_util_Iterator_forEachRemaining_java_util_function_Consumer,
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
	{ "hasNext", "()Z" },
	{ "next", "()Ljava/lang/Object;" },
	{ "remove", "()V" },
	{ "forEachRemaining", "(Ljava/util/function/Consumer;)V" },
	{ "forEachRemaining", "(Ljava/lang/Object;)V" },
};

static jclass interfaces[] { &class_java_util_Iterator, };

static jclass innerClasses[] {
	&class_java_util_PrimitiveIterator$OfInt,
	&class_java_util_PrimitiveIterator$OfLong,
	&class_java_util_PrimitiveIterator$OfDouble,
};

static MethodMetadata methods[] {
	{ "forEachRemaining", 0, INDEX_java_util_PrimitiveIterator_forEachRemaining_java_lang_Object, "(Ljava/lang/Object;)V", 1025 },
};

Class class_java_util_PrimitiveIterator{
		.nativeName = (intptr_t) "java/util/PrimitiveIterator",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_PrimitiveIterator),
		.classVtable = (intptr_t) vtable_java_util_PrimitiveIterator,
		.staticInitializer = (intptr_t) clinit_java_util_PrimitiveIterator,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_PrimitiveIterator,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 3,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 1537,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_PrimitiveIterator = registerClass(&class_java_util_PrimitiveIterator);

}
