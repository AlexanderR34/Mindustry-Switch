#include "java/nio/file/WatchKey.h"
#include "java/lang/Object.h"
#include "java/nio/file/Watchable.h"
#include "java/nio/file/WatchKey.h"
#include "java/util/List.h"

extern "C" {


void mark_java_nio_file_WatchKey(jobject object, jint mark, jint depth) {
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
	auto self = (java_nio_file_WatchKey *) object;
}

void clinit_java_nio_file_WatchKey(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void *vtable_java_nio_file_WatchKey[] {
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
	{ "isValid", "()Z" },
	{ "pollEvents", "()Ljava/util/List;" },
	{ "reset", "()Z" },
	{ "cancel", "()V" },
	{ "watchable", "()Ljava/nio/file/Watchable;" },
};

static MethodMetadata methods[] {
	{ "isValid", 0, INDEX_java_nio_file_WatchKey_isValid_R_boolean, "()Z", 1025 },
	{ "pollEvents", 0, INDEX_java_nio_file_WatchKey_pollEvents_R_java_util_List, "()Ljava/util/List;", 1025 },
	{ "reset", 0, INDEX_java_nio_file_WatchKey_reset_R_boolean, "()Z", 1025 },
	{ "cancel", 0, INDEX_java_nio_file_WatchKey_cancel, "()V", 1025 },
	{ "watchable", 0, INDEX_java_nio_file_WatchKey_watchable_R_java_nio_file_Watchable, "()Ljava/nio/file/Watchable;", 1025 },
};

Class class_java_nio_file_WatchKey{
		.nativeName = (intptr_t) "java/nio/file/WatchKey",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_nio_file_WatchKey),
		.classVtable = (intptr_t) vtable_java_nio_file_WatchKey,
		.staticInitializer = (intptr_t) clinit_java_nio_file_WatchKey,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_nio_file_WatchKey,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1537,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_nio_file_WatchKey = registerClass(&class_java_nio_file_WatchKey);

}
