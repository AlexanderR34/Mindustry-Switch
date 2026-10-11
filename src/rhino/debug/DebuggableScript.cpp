#include "rhino/debug/DebuggableScript.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "rhino/debug/DebuggableScript.h"

extern "C" {


void mark_rhino_debug_DebuggableScript(jobject object, jint mark, jint depth) {
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
	auto self = (rhino_debug_DebuggableScript *) object;
}

void clinit_rhino_debug_DebuggableScript(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void *vtable_rhino_debug_DebuggableScript[] {
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
	{ "isTopLevel", "()Z" },
	{ "isFunction", "()Z" },
	{ "getFunctionName", "()Ljava/lang/String;" },
	{ "getParamCount", "()I" },
	{ "getParamAndVarCount", "()I" },
	{ "getParamOrVarName", "(I)Ljava/lang/String;" },
	{ "getSourceName", "()Ljava/lang/String;" },
	{ "isGeneratedScript", "()Z" },
	{ "getLineNumbers", "()[I" },
	{ "getFunctionCount", "()I" },
	{ "getFunction", "(I)Lrhino/debug/DebuggableScript;" },
	{ "getParent", "()Lrhino/debug/DebuggableScript;" },
};

static MethodMetadata methods[] {
	{ "isTopLevel", 0, INDEX_rhino_debug_DebuggableScript_isTopLevel_R_boolean, "()Z", 1025 },
	{ "isFunction", 0, INDEX_rhino_debug_DebuggableScript_isFunction_R_boolean, "()Z", 1025 },
	{ "getFunctionName", 0, INDEX_rhino_debug_DebuggableScript_getFunctionName_R_java_lang_String, "()Ljava/lang/String;", 1025 },
	{ "getParamCount", 0, INDEX_rhino_debug_DebuggableScript_getParamCount_R_int, "()I", 1025 },
	{ "getParamAndVarCount", 0, INDEX_rhino_debug_DebuggableScript_getParamAndVarCount_R_int, "()I", 1025 },
	{ "getParamOrVarName", 0, INDEX_rhino_debug_DebuggableScript_getParamOrVarName_int_R_java_lang_String, "(I)Ljava/lang/String;", 1025 },
	{ "getSourceName", 0, INDEX_rhino_debug_DebuggableScript_getSourceName_R_java_lang_String, "()Ljava/lang/String;", 1025 },
	{ "isGeneratedScript", 0, INDEX_rhino_debug_DebuggableScript_isGeneratedScript_R_boolean, "()Z", 1025 },
	{ "getLineNumbers", 0, INDEX_rhino_debug_DebuggableScript_getLineNumbers_R_Array1_int, "()[I", 1025 },
	{ "getFunctionCount", 0, INDEX_rhino_debug_DebuggableScript_getFunctionCount_R_int, "()I", 1025 },
	{ "getFunction", 0, INDEX_rhino_debug_DebuggableScript_getFunction_int_R_rhino_debug_DebuggableScript, "(I)Lrhino/debug/DebuggableScript;", 1025 },
	{ "getParent", 0, INDEX_rhino_debug_DebuggableScript_getParent_R_rhino_debug_DebuggableScript, "()Lrhino/debug/DebuggableScript;", 1025 },
};

Class class_rhino_debug_DebuggableScript{
		.nativeName = (intptr_t) "rhino/debug/DebuggableScript",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_debug_DebuggableScript),
		.classVtable = (intptr_t) vtable_rhino_debug_DebuggableScript,
		.staticInitializer = (intptr_t) clinit_rhino_debug_DebuggableScript,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_debug_DebuggableScript,
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
		.methodCount = 12,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 23,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_debug_DebuggableScript = registerClass(&class_rhino_debug_DebuggableScript);

}
