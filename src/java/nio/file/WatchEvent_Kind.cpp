#include "java/nio/file/WatchEvent_Kind.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/nio/file/WatchEvent_Kind.h"
#include "java/lang/Class.h"
#include "java/nio/file/WatchEvent.h"

extern "C" {


void mark_java_nio_file_WatchEvent$Kind(jobject object, jint mark, jint depth) {
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
	auto self = (java_nio_file_WatchEvent$Kind *) object;
}

void clinit_java_nio_file_WatchEvent$Kind(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void *vtable_java_nio_file_WatchEvent$Kind[] {
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
	{ "name", "()Ljava/lang/String;" },
	{ "type", "()Ljava/lang/Class;" },
};

static MethodMetadata methods[] {
	{ "name", 0, INDEX_java_nio_file_WatchEvent$Kind_name_R_java_lang_String, "()Ljava/lang/String;", 1025 },
	{ "type", 0, INDEX_java_nio_file_WatchEvent$Kind_type_R_java_lang_Class, "()Ljava/lang/Class;", 1025 },
};

Class class_java_nio_file_WatchEvent$Kind{
		.nativeName = (intptr_t) "java/nio/file/WatchEvent$Kind",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_nio_file_WatchEvent$Kind),
		.classVtable = (intptr_t) vtable_java_nio_file_WatchEvent$Kind,
		.staticInitializer = (intptr_t) clinit_java_nio_file_WatchEvent$Kind,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_nio_file_WatchEvent$Kind,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_nio_file_WatchEvent,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1545,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 13,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_nio_file_WatchEvent$Kind = registerClass(&class_java_nio_file_WatchEvent$Kind);

}

