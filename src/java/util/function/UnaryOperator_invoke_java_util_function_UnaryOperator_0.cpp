#include "java/util/function/UnaryOperator_invoke_java_util_function_UnaryOperator_0.h"
#include "java/lang/Object.h"
#include "java/util/function/Function.h"
#include "java/util/function/UnaryOperator.h"
#include "java/util/function/UnaryOperator_invoke_java_util_function_UnaryOperator_0.h"

extern "C" {


void mark_java_util_function_UnaryOperator_invoke_java_util_function_UnaryOperator_0(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_function_UnaryOperator_invoke_java_util_function_UnaryOperator_0 *) object;
}

void clinit_java_util_function_UnaryOperator_invoke_java_util_function_UnaryOperator_0(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

jobject M_java_util_function_UnaryOperator_invoke_java_util_function_UnaryOperator_0_apply_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	FrameInfo frameInfo { "java/util/function/UnaryOperator_invoke_java_util_function_UnaryOperator_0:apply", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

auto proxy = (java_util_function_UnaryOperator_invoke_java_util_function_UnaryOperator_0 *) self;
	auto object = SM_java_util_function_UnaryOperator_lambda$identity$0_java_lang_Object_R_java_lang_Object(ctx, param0);
	popStackFrame(ctx);
	return object;

	popStackFrame(ctx);
}

void *vtable_java_util_function_UnaryOperator_invoke_java_util_function_UnaryOperator_0[] {
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
	(void *) M_java_util_function_UnaryOperator_invoke_java_util_function_UnaryOperator_0_apply_java_lang_Object_R_java_lang_Object,
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

static jclass interfaces[] { &class_java_util_function_UnaryOperator, };

static MethodMetadata methods[] {
	{ "apply", (intptr_t) M_java_util_function_UnaryOperator_invoke_java_util_function_UnaryOperator_0_apply_java_lang_Object_R_java_lang_Object, VTABLE_java_util_function_UnaryOperator_invoke_java_util_function_UnaryOperator_0_apply_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;)Ljava/lang/Object;", 0 },
};

Class class_java_util_function_UnaryOperator_invoke_java_util_function_UnaryOperator_0{
		.nativeName = (intptr_t) "java/util/function/UnaryOperator_invoke_java_util_function_UnaryOperator_0",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_function_UnaryOperator_invoke_java_util_function_UnaryOperator_0),
		.classVtable = (intptr_t) vtable_java_util_function_UnaryOperator_invoke_java_util_function_UnaryOperator_0,
		.staticInitializer = (intptr_t) clinit_java_util_function_UnaryOperator_invoke_java_util_function_UnaryOperator_0,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_function_UnaryOperator_invoke_java_util_function_UnaryOperator_0,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 0,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_function_UnaryOperator_invoke_java_util_function_UnaryOperator_0 = registerClass(&class_java_util_function_UnaryOperator_invoke_java_util_function_UnaryOperator_0);

}
