#include "java/nio/file/Watchable.h"
#include "java/lang/Object.h"
#include "java/nio/file/WatchEvent_Modifier.h"
#include "java/nio/file/WatchEvent_Kind.h"
#include "java/nio/file/Watchable.h"
#include "java/nio/file/WatchKey.h"
#include "java/nio/file/WatchService.h"

extern "C" {


void mark_java_nio_file_Watchable(jobject object, jint mark, jint depth) {
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
	auto self = (java_nio_file_Watchable *) object;
}

void clinit_java_nio_file_Watchable(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void *vtable_java_nio_file_Watchable[] {
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
	{ "register", "(Ljava/nio/file/WatchService;[Ljava/nio/file/WatchEvent$Kind;[Ljava/nio/file/WatchEvent$Modifier;)Ljava/nio/file/WatchKey;" },
	{ "register", "(Ljava/nio/file/WatchService;[Ljava/nio/file/WatchEvent$Kind;)Ljava/nio/file/WatchKey;" },
};

static MethodMetadata methods[] {
	{ "register", 0, INDEX_java_nio_file_Watchable_register_java_nio_file_WatchService_Array1_java_nio_file_WatchEvent$Kind_Array1_java_nio_file_WatchEvent$Modifier_R_java_nio_file_WatchKey, "(Ljava/nio/file/WatchService;[Ljava/nio/file/WatchEvent$Kind;[Ljava/nio/file/WatchEvent$Modifier;)Ljava/nio/file/WatchKey;", 1153 },
	{ "register", 0, INDEX_java_nio_file_Watchable_register_java_nio_file_WatchService_Array1_java_nio_file_WatchEvent$Kind_R_java_nio_file_WatchKey, "(Ljava/nio/file/WatchService;[Ljava/nio/file/WatchEvent$Kind;)Ljava/nio/file/WatchKey;", 1153 },
};

Class class_java_nio_file_Watchable{
		.nativeName = (intptr_t) "java/nio/file/Watchable",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_nio_file_Watchable),
		.classVtable = (intptr_t) vtable_java_nio_file_Watchable,
		.staticInitializer = (intptr_t) clinit_java_nio_file_Watchable,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_nio_file_Watchable,
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
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 13,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_nio_file_Watchable = registerClass(&class_java_nio_file_Watchable);

}
