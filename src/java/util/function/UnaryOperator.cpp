#include "java/util/function/UnaryOperator.h"
#include "java/lang/Object.h"
#include "java/lang/reflect/Field.h"
#include "java/util/function/Function.h"
#include "java/lang/FunctionalInterface.h"
#include "java/lang/annotation/Annotation.h"
#include "java/lang/reflect/Method.h"
#include "java/util/function/UnaryOperator.h"
#include "java/util/function/UnaryOperator_invoke_java_util_function_UnaryOperator_0.h"
#include "java/lang/reflect/Constructor.h"

extern "C" {


void mark_java_util_function_UnaryOperator(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_function_UnaryOperator *) object;
}

void clinit_java_util_function_UnaryOperator(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

jobject SM_java_util_function_UnaryOperator_identity_R_java_util_function_UnaryOperator(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/function/UnaryOperator:identity", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_function_UnaryOperator(ctx);
	{
	LINE_NUMBER(23);
	{ /* InvokeDynamic */
		clinit_java_util_function_UnaryOperator_invoke_java_util_function_UnaryOperator_0(ctx);
		auto proxy = (java_util_function_UnaryOperator_invoke_java_util_function_UnaryOperator_0 *) gcAlloc(ctx, &class_java_util_function_UnaryOperator_invoke_java_util_function_UnaryOperator_0);
		sp[0].o = (jobject) proxy;
	}
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_function_UnaryOperator_lambda$identity$0_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/function/UnaryOperator:lambda$identity$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_function_UnaryOperator(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(23);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_java_util_function_UnaryOperator;
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

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_java_util_function_UnaryOperator[] {
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
	(void *) M_java_util_function_Function_compose_java_util_function_Function_R_java_util_function_Function,
	(void *) M_java_util_function_Function_andThen_java_util_function_Function_R_java_util_function_Function,
	(void *) M_java_util_function_Function_lambda$andThen$1_java_util_function_Function_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_function_Function_lambda$compose$0_java_util_function_Function_java_lang_Object_R_java_lang_Object,
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
	{ "apply", "(Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "compose", "(Ljava/util/function/Function;)Ljava/util/function/Function;" },
	{ "andThen", "(Ljava/util/function/Function;)Ljava/util/function/Function;" },
	{ "lambda$andThen$1", "(Ljava/util/function/Function;Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "lambda$compose$0", "(Ljava/util/function/Function;Ljava/lang/Object;)Ljava/lang/Object;" },
};

static jclass interfaces[] { &class_java_util_function_Function, };

static MethodMetadata methods[] {
	{ "identity", (intptr_t) SM_java_util_function_UnaryOperator_identity_R_java_util_function_UnaryOperator, 0, "()Ljava/util/function/UnaryOperator;", 9 },
	{ "lambda$identity$0", (intptr_t) SM_java_util_function_UnaryOperator_lambda$identity$0_java_lang_Object_R_java_lang_Object, 0, "(Ljava/lang/Object;)Ljava/lang/Object;", 4106 },
};

Class class_java_util_function_UnaryOperator{
		.nativeName = (intptr_t) "java/util/function/UnaryOperator",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_function_UnaryOperator),
		.classVtable = (intptr_t) vtable_java_util_function_UnaryOperator,
		.staticInitializer = (intptr_t) clinit_java_util_function_UnaryOperator,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_java_util_function_UnaryOperator,
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
static bool registered_java_util_function_UnaryOperator = registerClass(&class_java_util_function_UnaryOperator);

}
