#include "java/nio/file/WatchService.h"
#include "java/lang/Object.h"
#include "java/lang/AutoCloseable.h"
#include "java/util/concurrent/TimeUnit.h"
#include "java/io/Closeable.h"
#include "java/nio/file/WatchKey.h"
#include "java/nio/file/WatchService.h"

extern "C" {


void mark_java_nio_file_WatchService(jobject object, jint mark, jint depth) {
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
	auto self = (java_nio_file_WatchService *) object;
}

void clinit_java_nio_file_WatchService(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void *vtable_java_nio_file_WatchService[] {
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
	{ "close", "()V" },
	{ "poll", "()Ljava/nio/file/WatchKey;" },
	{ "poll", "(JLjava/util/concurrent/TimeUnit;)Ljava/nio/file/WatchKey;" },
	{ "take", "()Ljava/nio/file/WatchKey;" },
};

static jclass interfaces[] { &class_java_io_Closeable, };

static MethodMetadata methods[] {
	{ "close", 0, INDEX_java_nio_file_WatchService_close, "()V", 1025 },
	{ "poll", 0, INDEX_java_nio_file_WatchService_poll_R_java_nio_file_WatchKey, "()Ljava/nio/file/WatchKey;", 1025 },
	{ "poll", 0, INDEX_java_nio_file_WatchService_poll_long_java_util_concurrent_TimeUnit_R_java_nio_file_WatchKey, "(JLjava/util/concurrent/TimeUnit;)Ljava/nio/file/WatchKey;", 1025 },
	{ "take", 0, INDEX_java_nio_file_WatchService_take_R_java_nio_file_WatchKey, "()Ljava/nio/file/WatchKey;", 1025 },
};

Class class_java_nio_file_WatchService{
		.nativeName = (intptr_t) "java/nio/file/WatchService",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_nio_file_WatchService),
		.classVtable = (intptr_t) vtable_java_nio_file_WatchService,
		.staticInitializer = (intptr_t) clinit_java_nio_file_WatchService,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_nio_file_WatchService,
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
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 15,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_nio_file_WatchService = registerClass(&class_java_nio_file_WatchService);

}
