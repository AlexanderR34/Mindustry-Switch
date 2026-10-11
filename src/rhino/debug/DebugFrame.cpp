#include "rhino/debug/DebugFrame.h"
#include "java/lang/Object.h"
#include "rhino/debug/DebugFrame.h"
#include "rhino/Context.h"
#include "rhino/Scriptable.h"
#include "java/lang/Throwable.h"

extern "C" {


void mark_rhino_debug_DebugFrame(jobject object, jint mark, jint depth) {
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
	auto self = (rhino_debug_DebugFrame *) object;
}

void clinit_rhino_debug_DebugFrame(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void *vtable_rhino_debug_DebugFrame[] {
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
	{ "onEnter", "(Lrhino/Context;Lrhino/Scriptable;Lrhino/Scriptable;[Ljava/lang/Object;)V" },
	{ "onLineChange", "(Lrhino/Context;I)V" },
	{ "onExceptionThrown", "(Lrhino/Context;Ljava/lang/Throwable;)V" },
	{ "onExit", "(Lrhino/Context;ZLjava/lang/Object;)V" },
	{ "onDebuggerStatement", "(Lrhino/Context;)V" },
};

static MethodMetadata methods[] {
	{ "onEnter", 0, INDEX_rhino_debug_DebugFrame_onEnter_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object, "(Lrhino/Context;Lrhino/Scriptable;Lrhino/Scriptable;[Ljava/lang/Object;)V", 1025 },
	{ "onLineChange", 0, INDEX_rhino_debug_DebugFrame_onLineChange_rhino_Context_int, "(Lrhino/Context;I)V", 1025 },
	{ "onExceptionThrown", 0, INDEX_rhino_debug_DebugFrame_onExceptionThrown_rhino_Context_java_lang_Throwable, "(Lrhino/Context;Ljava/lang/Throwable;)V", 1025 },
	{ "onExit", 0, INDEX_rhino_debug_DebugFrame_onExit_rhino_Context_boolean_java_lang_Object, "(Lrhino/Context;ZLjava/lang/Object;)V", 1025 },
	{ "onDebuggerStatement", 0, INDEX_rhino_debug_DebugFrame_onDebuggerStatement_rhino_Context, "(Lrhino/Context;)V", 1025 },
};

Class class_rhino_debug_DebugFrame{
		.nativeName = (intptr_t) "rhino/debug/DebugFrame",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_debug_DebugFrame),
		.classVtable = (intptr_t) vtable_rhino_debug_DebugFrame,
		.staticInitializer = (intptr_t) clinit_rhino_debug_DebugFrame,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_debug_DebugFrame,
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
static bool registered_rhino_debug_DebugFrame = registerClass(&class_rhino_debug_DebugFrame);

}
