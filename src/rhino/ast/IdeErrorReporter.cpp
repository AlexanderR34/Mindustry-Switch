#include "rhino/ast/IdeErrorReporter.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "rhino/ast/IdeErrorReporter.h"
#include "rhino/ErrorReporter.h"

extern "C" {


void mark_rhino_ast_IdeErrorReporter(jobject object, jint mark, jint depth) {
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
	auto self = (rhino_ast_IdeErrorReporter *) object;
}

void clinit_rhino_ast_IdeErrorReporter(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void *vtable_rhino_ast_IdeErrorReporter[] {
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
	{ "warning", "(Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;I)V" },
	{ "error", "(Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;I)V" },
	{ "runtimeError", "(Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;I)Lrhino/EvaluatorException;" },
	{ "warning", "(Ljava/lang/String;Ljava/lang/String;II)V" },
	{ "error", "(Ljava/lang/String;Ljava/lang/String;II)V" },
};

static jclass interfaces[] { &class_rhino_ErrorReporter, };

static MethodMetadata methods[] {
	{ "warning", 0, INDEX_rhino_ast_IdeErrorReporter_warning_java_lang_String_java_lang_String_int_int, "(Ljava/lang/String;Ljava/lang/String;II)V", 1025 },
	{ "error", 0, INDEX_rhino_ast_IdeErrorReporter_error_java_lang_String_java_lang_String_int_int, "(Ljava/lang/String;Ljava/lang/String;II)V", 1025 },
};

Class class_rhino_ast_IdeErrorReporter{
		.nativeName = (intptr_t) "rhino/ast/IdeErrorReporter",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_ast_IdeErrorReporter),
		.classVtable = (intptr_t) vtable_rhino_ast_IdeErrorReporter,
		.staticInitializer = (intptr_t) clinit_rhino_ast_IdeErrorReporter,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_ast_IdeErrorReporter,
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
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_ast_IdeErrorReporter = registerClass(&class_rhino_ast_IdeErrorReporter);

}
