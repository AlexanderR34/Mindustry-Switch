#include "java/lang/Thread_UncaughtExceptionHandler.h"
#include "java/lang/Object.h"
#include "java/lang/Thread_UncaughtExceptionHandler.h"
#include "java/lang/Throwable.h"
#include "java/lang/Thread.h"

extern "C" {


void mark_java_lang_Thread$UncaughtExceptionHandler(jobject object, jint mark, jint depth) {
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
	auto self = (java_lang_Thread$UncaughtExceptionHandler *) object;
}

void clinit_java_lang_Thread$UncaughtExceptionHandler(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void *vtable_java_lang_Thread$UncaughtExceptionHandler[] {
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
	{ "uncaughtException", "(Ljava/lang/Thread;Ljava/lang/Throwable;)V" },
};

static MethodMetadata methods[] {
	{ "uncaughtException", 0, INDEX_java_lang_Thread$UncaughtExceptionHandler_uncaughtException_java_lang_Thread_java_lang_Throwable, "(Ljava/lang/Thread;Ljava/lang/Throwable;)V", 1025 },
};

Class class_java_lang_Thread$UncaughtExceptionHandler{
		.nativeName = (intptr_t) "java/lang/Thread$UncaughtExceptionHandler",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_lang_Thread$UncaughtExceptionHandler),
		.classVtable = (intptr_t) vtable_java_lang_Thread$UncaughtExceptionHandler,
		.staticInitializer = (intptr_t) clinit_java_lang_Thread$UncaughtExceptionHandler,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_lang_Thread$UncaughtExceptionHandler,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_lang_Thread,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1545,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_lang_Thread$UncaughtExceptionHandler = registerClass(&class_java_lang_Thread$UncaughtExceptionHandler);

}

