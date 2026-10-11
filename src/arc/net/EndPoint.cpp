#include "arc/net/EndPoint.h"
#include "java/lang/Object.h"
#include "arc/net/NetListener.h"
#include "arc/net/EndPoint.h"
#include "java/lang/Runnable.h"
#include "java/lang/Thread.h"

extern "C" {


void mark_arc_net_EndPoint(jobject object, jint mark, jint depth) {
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
	auto self = (arc_net_EndPoint *) object;
}

void clinit_arc_net_EndPoint(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void *vtable_arc_net_EndPoint[] {
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
	{ "run", "()V" },
	{ "addListener", "(Larc/net/NetListener;)V" },
	{ "removeListener", "(Larc/net/NetListener;)V" },
	{ "start", "()V" },
	{ "stop", "()V" },
	{ "close", "()V" },
	{ "update", "(I)V" },
	{ "getUpdateThread", "()Ljava/lang/Thread;" },
};

static jclass interfaces[] { &class_java_lang_Runnable, };

static MethodMetadata methods[] {
	{ "addListener", 0, INDEX_arc_net_EndPoint_addListener_arc_net_NetListener, "(Larc/net/NetListener;)V", 1025 },
	{ "removeListener", 0, INDEX_arc_net_EndPoint_removeListener_arc_net_NetListener, "(Larc/net/NetListener;)V", 1025 },
	{ "run", 0, INDEX_arc_net_EndPoint_run, "()V", 1025 },
	{ "start", 0, INDEX_arc_net_EndPoint_start, "()V", 1025 },
	{ "stop", 0, INDEX_arc_net_EndPoint_stop, "()V", 1025 },
	{ "close", 0, INDEX_arc_net_EndPoint_close, "()V", 1025 },
	{ "update", 0, INDEX_arc_net_EndPoint_update_int, "(I)V", 1025 },
	{ "getUpdateThread", 0, INDEX_arc_net_EndPoint_getUpdateThread_R_java_lang_Thread, "()Ljava/lang/Thread;", 1025 },
};

Class class_arc_net_EndPoint{
		.nativeName = (intptr_t) "arc/net/EndPoint",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_net_EndPoint),
		.classVtable = (intptr_t) vtable_arc_net_EndPoint,
		.staticInitializer = (intptr_t) clinit_arc_net_EndPoint,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_net_EndPoint,
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
		.methodCount = 8,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 19,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_net_EndPoint = registerClass(&class_arc_net_EndPoint);

}
