#include "rhino/Evaluator.h"
#include "rhino/Function.h"
#include "java/lang/Object.h"
#include "rhino/RhinoException.h"
#include "rhino/ast/ScriptNode.h"
#include "java/lang/String.h"
#include "rhino/CompilerEnvirons.h"
#include "rhino/Context.h"
#include "rhino/Scriptable.h"
#include "rhino/Script.h"
#include "java/util/List.h"
#include "rhino/Evaluator.h"

extern "C" {


void mark_rhino_Evaluator(jobject object, jint mark, jint depth) {
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
	auto self = (rhino_Evaluator *) object;
}

void clinit_rhino_Evaluator(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void *vtable_rhino_Evaluator[] {
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
	{ "compile", "(Lrhino/CompilerEnvirons;Lrhino/ast/ScriptNode;Ljava/lang/String;Z)Ljava/lang/Object;" },
	{ "createFunctionObject", "(Lrhino/Context;Lrhino/Scriptable;Ljava/lang/Object;)Lrhino/Function;" },
	{ "createScriptObject", "(Ljava/lang/Object;)Lrhino/Script;" },
	{ "captureStackInfo", "(Lrhino/RhinoException;)V" },
	{ "getSourcePositionFromStack", "(Lrhino/Context;[I)Ljava/lang/String;" },
	{ "getPatchedStack", "(Lrhino/RhinoException;Ljava/lang/String;)Ljava/lang/String;" },
	{ "getScriptStack", "(Lrhino/RhinoException;)Ljava/util/List;" },
	{ "setEvalScriptFlag", "(Lrhino/Script;)V" },
};

static MethodMetadata methods[] {
	{ "compile", 0, INDEX_rhino_Evaluator_compile_rhino_CompilerEnvirons_rhino_ast_ScriptNode_java_lang_String_boolean_R_java_lang_Object, "(Lrhino/CompilerEnvirons;Lrhino/ast/ScriptNode;Ljava/lang/String;Z)Ljava/lang/Object;", 1025 },
	{ "createFunctionObject", 0, INDEX_rhino_Evaluator_createFunctionObject_rhino_Context_rhino_Scriptable_java_lang_Object_R_rhino_Function, "(Lrhino/Context;Lrhino/Scriptable;Ljava/lang/Object;)Lrhino/Function;", 1025 },
	{ "createScriptObject", 0, INDEX_rhino_Evaluator_createScriptObject_java_lang_Object_R_rhino_Script, "(Ljava/lang/Object;)Lrhino/Script;", 1025 },
	{ "captureStackInfo", 0, INDEX_rhino_Evaluator_captureStackInfo_rhino_RhinoException, "(Lrhino/RhinoException;)V", 1025 },
	{ "getSourcePositionFromStack", 0, INDEX_rhino_Evaluator_getSourcePositionFromStack_rhino_Context_Array1_int_R_java_lang_String, "(Lrhino/Context;[I)Ljava/lang/String;", 1025 },
	{ "getPatchedStack", 0, INDEX_rhino_Evaluator_getPatchedStack_rhino_RhinoException_java_lang_String_R_java_lang_String, "(Lrhino/RhinoException;Ljava/lang/String;)Ljava/lang/String;", 1025 },
	{ "getScriptStack", 0, INDEX_rhino_Evaluator_getScriptStack_rhino_RhinoException_R_java_util_List, "(Lrhino/RhinoException;)Ljava/util/List;", 1025 },
	{ "setEvalScriptFlag", 0, INDEX_rhino_Evaluator_setEvalScriptFlag_rhino_Script, "(Lrhino/Script;)V", 1025 },
};

Class class_rhino_Evaluator{
		.nativeName = (intptr_t) "rhino/Evaluator",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_Evaluator),
		.classVtable = (intptr_t) vtable_rhino_Evaluator,
		.staticInitializer = (intptr_t) clinit_rhino_Evaluator,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_Evaluator,
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
		.methodCount = 8,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 19,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_Evaluator = registerClass(&class_rhino_Evaluator);

}
