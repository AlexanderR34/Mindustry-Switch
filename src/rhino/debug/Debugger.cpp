#include "rhino/debug/Debugger.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "rhino/debug/DebugFrame.h"
#include "rhino/debug/Debugger.h"
#include "rhino/debug/DebuggableScript.h"
#include "rhino/Context.h"

extern "C" {


void mark_rhino_debug_Debugger(jobject object, jint mark, jint depth) {
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
	auto self = (rhino_debug_Debugger *) object;
}

void clinit_rhino_debug_Debugger(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void *vtable_rhino_debug_Debugger[] {
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
	{ "handleCompilationDone", "(Lrhino/Context;Lrhino/debug/DebuggableScript;Ljava/lang/String;)V" },
	{ "getFrame", "(Lrhino/Context;Lrhino/debug/DebuggableScript;)Lrhino/debug/DebugFrame;" },
};

static MethodMetadata methods[] {
	{ "handleCompilationDone", 0, INDEX_rhino_debug_Debugger_handleCompilationDone_rhino_Context_rhino_debug_DebuggableScript_java_lang_String, "(Lrhino/Context;Lrhino/debug/DebuggableScript;Ljava/lang/String;)V", 1025 },
	{ "getFrame", 0, INDEX_rhino_debug_Debugger_getFrame_rhino_Context_rhino_debug_DebuggableScript_R_rhino_debug_DebugFrame, "(Lrhino/Context;Lrhino/debug/DebuggableScript;)Lrhino/debug/DebugFrame;", 1025 },
};

Class class_rhino_debug_Debugger{
		.nativeName = (intptr_t) "rhino/debug/Debugger",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_debug_Debugger),
		.classVtable = (intptr_t) vtable_rhino_debug_Debugger,
		.staticInitializer = (intptr_t) clinit_rhino_debug_Debugger,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_debug_Debugger,
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
static bool registered_rhino_debug_Debugger = registerClass(&class_rhino_debug_Debugger);

}
