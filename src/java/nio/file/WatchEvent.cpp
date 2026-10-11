#include "java/nio/file/WatchEvent.h"
#include "java/lang/Object.h"
#include "java/nio/file/WatchEvent_Modifier.h"
#include "java/nio/file/WatchEvent_Kind.h"
#include "java/nio/file/WatchEvent.h"

extern "C" {


void mark_java_nio_file_WatchEvent(jobject object, jint mark, jint depth) {
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
	auto self = (java_nio_file_WatchEvent *) object;
}

void clinit_java_nio_file_WatchEvent(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void *vtable_java_nio_file_WatchEvent[] {
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
	{ "kind", "()Ljava/nio/file/WatchEvent$Kind;" },
	{ "count", "()I" },
	{ "context", "()Ljava/lang/Object;" },
};

static jclass innerClasses[] {
	&class_java_nio_file_WatchEvent$Kind,
	&class_java_nio_file_WatchEvent$Modifier,
};

static MethodMetadata methods[] {
	{ "kind", 0, INDEX_java_nio_file_WatchEvent_kind_R_java_nio_file_WatchEvent$Kind, "()Ljava/nio/file/WatchEvent$Kind;", 1025 },
	{ "count", 0, INDEX_java_nio_file_WatchEvent_count_R_int, "()I", 1025 },
	{ "context", 0, INDEX_java_nio_file_WatchEvent_context_R_java_lang_Object, "()Ljava/lang/Object;", 1025 },
};

Class class_java_nio_file_WatchEvent{
		.nativeName = (intptr_t) "java/nio/file/WatchEvent",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_nio_file_WatchEvent),
		.classVtable = (intptr_t) vtable_java_nio_file_WatchEvent,
		.staticInitializer = (intptr_t) clinit_java_nio_file_WatchEvent,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_nio_file_WatchEvent,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 2,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 1537,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 14,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_nio_file_WatchEvent = registerClass(&class_java_nio_file_WatchEvent);

}
