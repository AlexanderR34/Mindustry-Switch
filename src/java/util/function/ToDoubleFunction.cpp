#include "java/util/function/ToDoubleFunction.h"
#include "java/lang/Object.h"
#include "java/lang/reflect/Field.h"
#include "java/util/function/ToDoubleFunction.h"
#include "java/lang/FunctionalInterface.h"
#include "java/lang/annotation/Annotation.h"
#include "java/lang/reflect/Method.h"
#include "java/lang/reflect/Constructor.h"

extern "C" {


void mark_java_util_function_ToDoubleFunction(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_function_ToDoubleFunction *) object;
}

void clinit_java_util_function_ToDoubleFunction(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_java_util_function_ToDoubleFunction;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	{ // Class
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		clazz.annotations = (jref) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_java_lang_FunctionalInterface);
	}

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_java_util_function_ToDoubleFunction[] {
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
	{ "applyAsDouble", "(Ljava/lang/Object;)D" },
};

static MethodMetadata methods[] {
	{ "applyAsDouble", 0, INDEX_java_util_function_ToDoubleFunction_applyAsDouble_java_lang_Object_R_double, "(Ljava/lang/Object;)D", 1025 },
};

Class class_java_util_function_ToDoubleFunction{
		.nativeName = (intptr_t) "java/util/function/ToDoubleFunction",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_function_ToDoubleFunction),
		.classVtable = (intptr_t) vtable_java_util_function_ToDoubleFunction,
		.staticInitializer = (intptr_t) clinit_java_util_function_ToDoubleFunction,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_java_util_function_ToDoubleFunction,
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
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_function_ToDoubleFunction = registerClass(&class_java_util_function_ToDoubleFunction);

}
