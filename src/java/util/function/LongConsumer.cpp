#include "java/util/function/LongConsumer.h"
#include "java/lang/Object.h"
#include "java/lang/reflect/Field.h"
#include "java/util/function/LongConsumer_invoke_java_util_function_LongConsumer_0.h"
#include "java/lang/FunctionalInterface.h"
#include "java/lang/annotation/Annotation.h"
#include "java/util/function/LongConsumer.h"
#include "java/lang/reflect/Method.h"
#include "java/util/Objects.h"
#include "java/lang/reflect/Constructor.h"

extern "C" {


void mark_java_util_function_LongConsumer(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_function_LongConsumer *) object;
}

void clinit_java_util_function_LongConsumer(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

jobject M_java_util_function_LongConsumer_andThen_java_util_function_LongConsumer_R_java_util_function_LongConsumer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/function/LongConsumer:andThen", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(27);
	sp[0].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, (frame[1].o));
	LINE_NUMBER(28);
	{ /* InvokeDynamic */
		clinit_java_util_function_LongConsumer_invoke_java_util_function_LongConsumer_0(ctx);
		auto proxy = (java_util_function_LongConsumer_invoke_java_util_function_LongConsumer_0 *) gcAlloc(ctx, &class_java_util_function_LongConsumer_invoke_java_util_function_LongConsumer_0);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_java_util_function_LongConsumer_lambda$andThen$0_java_util_function_LongConsumer_long(jcontext ctx, jobject self, jobject param0, jlong param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/function/LongConsumer:lambda$andThen$0", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].l = param1;
	{
	LINE_NUMBER(29);
	((func_java_util_function_LongConsumer_accept_long) resolveInterfaceMethod(ctx, &class_java_util_function_LongConsumer, INDEX_java_util_function_LongConsumer_accept_long, (frame[0].o)))(ctx, (frame[0].o), (frame[2].l));
	LINE_NUMBER(30);
	((func_java_util_function_LongConsumer_accept_long) resolveInterfaceMethod(ctx, &class_java_util_function_LongConsumer, INDEX_java_util_function_LongConsumer_accept_long, (frame[1].o)))(ctx, (frame[1].o), (frame[2].l));
	LINE_NUMBER(31);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_java_util_function_LongConsumer;
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
}

void *vtable_java_util_function_LongConsumer[] {
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
	(void *) M_java_util_function_LongConsumer_andThen_java_util_function_LongConsumer_R_java_util_function_LongConsumer,
	(void *) M_java_util_function_LongConsumer_lambda$andThen$0_java_util_function_LongConsumer_long,
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
	{ "accept", "(J)V" },
	{ "andThen", "(Ljava/util/function/LongConsumer;)Ljava/util/function/LongConsumer;" },
	{ "lambda$andThen$0", "(Ljava/util/function/LongConsumer;J)V" },
};

static MethodMetadata methods[] {
	{ "accept", 0, INDEX_java_util_function_LongConsumer_accept_long, "(J)V", 1025 },
	{ "andThen", (intptr_t) M_java_util_function_LongConsumer_andThen_java_util_function_LongConsumer_R_java_util_function_LongConsumer, INDEX_java_util_function_LongConsumer_andThen_java_util_function_LongConsumer_R_java_util_function_LongConsumer, "(Ljava/util/function/LongConsumer;)Ljava/util/function/LongConsumer;", 1 },
	{ "lambda$andThen$0", (intptr_t) M_java_util_function_LongConsumer_lambda$andThen$0_java_util_function_LongConsumer_long, INDEX_java_util_function_LongConsumer_lambda$andThen$0_java_util_function_LongConsumer_long, "(Ljava/util/function/LongConsumer;J)V", 4098 },
};

Class class_java_util_function_LongConsumer{
		.nativeName = (intptr_t) "java/util/function/LongConsumer",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_function_LongConsumer),
		.classVtable = (intptr_t) vtable_java_util_function_LongConsumer,
		.staticInitializer = (intptr_t) clinit_java_util_function_LongConsumer,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_java_util_function_LongConsumer,
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
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 14,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_function_LongConsumer = registerClass(&class_java_util_function_LongConsumer);

}
