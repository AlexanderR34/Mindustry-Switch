#include "java/util/function/Function.h"
#include "java/lang/Object.h"
#include "java/lang/reflect/Field.h"
#include "java/util/function/Function.h"
#include "java/util/function/Function_invoke_java_util_function_Function_0.h"
#include "java/util/function/Function_invoke_java_util_function_Function_1.h"
#include "java/lang/FunctionalInterface.h"
#include "java/lang/annotation/Annotation.h"
#include "java/util/function/Function_invoke_java_util_function_Function_2.h"
#include "java/lang/reflect/Method.h"
#include "java/util/Objects.h"
#include "java/lang/reflect/Constructor.h"

extern "C" {


void mark_java_util_function_Function(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_function_Function *) object;
}

void clinit_java_util_function_Function(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

jobject M_java_util_function_Function_compose_java_util_function_Function_R_java_util_function_Function(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/function/Function:compose", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(27);
	sp[0].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, (frame[1].o));
	LINE_NUMBER(28);
	{ /* InvokeDynamic */
		clinit_java_util_function_Function_invoke_java_util_function_Function_0(ctx);
		auto proxy = (java_util_function_Function_invoke_java_util_function_Function_0 *) gcAlloc(ctx, &class_java_util_function_Function_invoke_java_util_function_Function_0);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_function_Function_andThen_java_util_function_Function_R_java_util_function_Function(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/function/Function:andThen", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(34);
	sp[0].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, (frame[1].o));
	LINE_NUMBER(35);
	{ /* InvokeDynamic */
		clinit_java_util_function_Function_invoke_java_util_function_Function_1(ctx);
		auto proxy = (java_util_function_Function_invoke_java_util_function_Function_1 *) gcAlloc(ctx, &class_java_util_function_Function_invoke_java_util_function_Function_1);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_function_Function_identity_R_java_util_function_Function(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/function/Function:identity", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_function_Function(ctx);
	{
	LINE_NUMBER(41);
	{ /* InvokeDynamic */
		clinit_java_util_function_Function_invoke_java_util_function_Function_2(ctx);
		auto proxy = (java_util_function_Function_invoke_java_util_function_Function_2 *) gcAlloc(ctx, &class_java_util_function_Function_invoke_java_util_function_Function_2);
		sp[0].o = (jobject) proxy;
	}
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_function_Function_lambda$identity$2_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/function/Function:lambda$identity$2", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_function_Function(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(42);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_java_util_function_Function_lambda$andThen$1_java_util_function_Function_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/function/Function:lambda$andThen$1", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(36);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_java_util_function_Function_apply_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_function_Function, INDEX_java_util_function_Function_apply_java_lang_Object_R_java_lang_Object, (frame[0].o)))(ctx, (frame[0].o), (frame[2].o));
	sp[0].o = (jobject)((func_java_util_function_Function_apply_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_function_Function, INDEX_java_util_function_Function_apply_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_function_Function_lambda$compose$0_java_util_function_Function_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/function/Function:lambda$compose$0", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(29);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_util_function_Function_apply_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_function_Function, INDEX_java_util_function_Function_apply_java_lang_Object_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o), (frame[2].o));
	sp[0].o = (jobject)((func_java_util_function_Function_apply_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_function_Function, INDEX_java_util_function_Function_apply_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_java_util_function_Function;
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

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_java_util_function_Function[] {
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

static MethodMetadata methods[] {
	{ "apply", 0, INDEX_java_util_function_Function_apply_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;)Ljava/lang/Object;", 1025 },
	{ "compose", (intptr_t) M_java_util_function_Function_compose_java_util_function_Function_R_java_util_function_Function, INDEX_java_util_function_Function_compose_java_util_function_Function_R_java_util_function_Function, "(Ljava/util/function/Function;)Ljava/util/function/Function;", 1 },
	{ "andThen", (intptr_t) M_java_util_function_Function_andThen_java_util_function_Function_R_java_util_function_Function, INDEX_java_util_function_Function_andThen_java_util_function_Function_R_java_util_function_Function, "(Ljava/util/function/Function;)Ljava/util/function/Function;", 1 },
	{ "identity", (intptr_t) SM_java_util_function_Function_identity_R_java_util_function_Function, 0, "()Ljava/util/function/Function;", 9 },
	{ "lambda$identity$2", (intptr_t) SM_java_util_function_Function_lambda$identity$2_java_lang_Object_R_java_lang_Object, 0, "(Ljava/lang/Object;)Ljava/lang/Object;", 4106 },
	{ "lambda$andThen$1", (intptr_t) M_java_util_function_Function_lambda$andThen$1_java_util_function_Function_java_lang_Object_R_java_lang_Object, INDEX_java_util_function_Function_lambda$andThen$1_java_util_function_Function_java_lang_Object_R_java_lang_Object, "(Ljava/util/function/Function;Ljava/lang/Object;)Ljava/lang/Object;", 4098 },
	{ "lambda$compose$0", (intptr_t) M_java_util_function_Function_lambda$compose$0_java_util_function_Function_java_lang_Object_R_java_lang_Object, INDEX_java_util_function_Function_lambda$compose$0_java_util_function_Function_java_lang_Object_R_java_lang_Object, "(Ljava/util/function/Function;Ljava/lang/Object;)Ljava/lang/Object;", 4098 },
};

Class class_java_util_function_Function{
		.nativeName = (intptr_t) "java/util/function/Function",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_function_Function),
		.classVtable = (intptr_t) vtable_java_util_function_Function,
		.staticInitializer = (intptr_t) clinit_java_util_function_Function,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_java_util_function_Function,
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
		.methodCount = 7,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_function_Function = registerClass(&class_java_util_function_Function);

}
