#include "java/util/function/Predicate.h"
#include "java/lang/reflect/Field.h"
#include "java/lang/FunctionalInterface.h"
#include "java/lang/annotation/Annotation.h"
#include "java/lang/reflect/Constructor.h"
#include "java/util/function/Predicate_invoke_java_util_function_Predicate_0.h"
#include "java/lang/Object.h"
#include "java/util/function/Predicate_invoke_java_util_function_Predicate_1.h"
#include "java/util/function/Predicate_invoke_java_util_function_Predicate_2.h"
#include "java/util/function/Predicate_invoke_java_util_function_Predicate_3.h"
#include "java/util/function/Predicate_invoke_java_util_function_Predicate_4.h"
#include "java/lang/reflect/Method.h"
#include "java/util/Objects.h"
#include "java/util/function/Predicate.h"

extern "C" {


void mark_java_util_function_Predicate(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_function_Predicate *) object;
}

void clinit_java_util_function_Predicate(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

jobject M_java_util_function_Predicate_and_java_util_function_Predicate_R_java_util_function_Predicate(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/function/Predicate:and", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(27);
	sp[0].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, (frame[1].o));
	LINE_NUMBER(28);
	{ /* InvokeDynamic */
		clinit_java_util_function_Predicate_invoke_java_util_function_Predicate_0(ctx);
		auto proxy = (java_util_function_Predicate_invoke_java_util_function_Predicate_0 *) gcAlloc(ctx, &class_java_util_function_Predicate_invoke_java_util_function_Predicate_0);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_function_Predicate_negate_R_java_util_function_Predicate(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/function/Predicate:negate", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(34);
	{ /* InvokeDynamic */
		clinit_java_util_function_Predicate_invoke_java_util_function_Predicate_1(ctx);
		auto proxy = (java_util_function_Predicate_invoke_java_util_function_Predicate_1 *) gcAlloc(ctx, &class_java_util_function_Predicate_invoke_java_util_function_Predicate_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_function_Predicate_or_java_util_function_Predicate_R_java_util_function_Predicate(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/function/Predicate:or", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(40);
	sp[0].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, (frame[1].o));
	LINE_NUMBER(41);
	{ /* InvokeDynamic */
		clinit_java_util_function_Predicate_invoke_java_util_function_Predicate_2(ctx);
		auto proxy = (java_util_function_Predicate_invoke_java_util_function_Predicate_2 *) gcAlloc(ctx, &class_java_util_function_Predicate_invoke_java_util_function_Predicate_2);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_function_Predicate_isEqual_java_lang_Object_R_java_util_function_Predicate(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/function/Predicate:isEqual", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_function_Predicate(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(47);
	if ((jobject(nullptr)) != (frame[0].o)) goto label_1;
	}
	{ /* InvokeDynamic */
		clinit_java_util_function_Predicate_invoke_java_util_function_Predicate_3(ctx);
		auto proxy = (java_util_function_Predicate_invoke_java_util_function_Predicate_3 *) gcAlloc(ctx, &class_java_util_function_Predicate_invoke_java_util_function_Predicate_3);
		PUSH_OBJECT((jobject) proxy);
	}
	goto label_2;
label_1:;
	INST_ALOAD(0);
	{ /* InvokeDynamic */
		clinit_java_util_function_Predicate_invoke_java_util_function_Predicate_4(ctx);
		auto proxy = (java_util_function_Predicate_invoke_java_util_function_Predicate_4 *) gcAlloc(ctx, &class_java_util_function_Predicate_invoke_java_util_function_Predicate_4);
		proxy->F_field0 = (jref) (--sp)->o;
		PUSH_OBJECT((jobject) proxy);
	}
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject SM_java_util_function_Predicate_not_java_util_function_Predicate_R_java_util_function_Predicate(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/function/Predicate:not", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_function_Predicate(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(53);
	sp[0].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(54);
	sp[0].o = (jobject)((func_java_util_function_Predicate_negate_R_java_util_function_Predicate) resolveInterfaceMethod(ctx, &class_java_util_function_Predicate, INDEX_java_util_function_Predicate_negate_R_java_util_function_Predicate, (frame[0].o)))(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool SM_java_util_function_Predicate_lambda$isEqual$3_java_lang_Object_java_lang_Object_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/function/Predicate:lambda$isEqual$3", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_function_Predicate(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(48);
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_java_util_function_Predicate_lambda$or$2_java_util_function_Predicate_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/function/Predicate:lambda$or$2", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(42);
	jint temp0 = (jint)((func_java_util_function_Predicate_test_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_function_Predicate, INDEX_java_util_function_Predicate_test_java_lang_Object_R_boolean, (frame[0].o)))(ctx, (frame[0].o), (frame[2].o));
	if (temp0 != 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_java_util_function_Predicate_test_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_function_Predicate, INDEX_java_util_function_Predicate_test_java_lang_Object_R_boolean, (frame[1].o)))(ctx, (frame[1].o), (frame[2].o));
	if (temp0 == 0) goto label_2;
	}
label_1:;
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_java_util_function_Predicate_lambda$negate$1_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/function/Predicate:lambda$negate$1", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(35);
	jint temp0 = (jint)((func_java_util_function_Predicate_test_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_function_Predicate, INDEX_java_util_function_Predicate_test_java_lang_Object_R_boolean, (frame[0].o)))(ctx, (frame[0].o), (frame[1].o));
	if (temp0 != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_java_util_function_Predicate_lambda$and$0_java_util_function_Predicate_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/function/Predicate:lambda$and$0", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(29);
	jint temp0 = (jint)((func_java_util_function_Predicate_test_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_function_Predicate, INDEX_java_util_function_Predicate_test_java_lang_Object_R_boolean, (frame[0].o)))(ctx, (frame[0].o), (frame[2].o));
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_java_util_function_Predicate_test_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_function_Predicate, INDEX_java_util_function_Predicate_test_java_lang_Object_R_boolean, (frame[1].o)))(ctx, (frame[1].o), (frame[2].o));
	if (temp0 == 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_java_util_function_Predicate;
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

	methods[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_java_util_function_Predicate[] {
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
	(void *) M_java_util_function_Predicate_and_java_util_function_Predicate_R_java_util_function_Predicate,
	(void *) M_java_util_function_Predicate_negate_R_java_util_function_Predicate,
	(void *) M_java_util_function_Predicate_or_java_util_function_Predicate_R_java_util_function_Predicate,
	(void *) M_java_util_function_Predicate_lambda$or$2_java_util_function_Predicate_java_lang_Object_R_boolean,
	(void *) M_java_util_function_Predicate_lambda$negate$1_java_lang_Object_R_boolean,
	(void *) M_java_util_function_Predicate_lambda$and$0_java_util_function_Predicate_java_lang_Object_R_boolean,
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
	{ "test", "(Ljava/lang/Object;)Z" },
	{ "and", "(Ljava/util/function/Predicate;)Ljava/util/function/Predicate;" },
	{ "negate", "()Ljava/util/function/Predicate;" },
	{ "or", "(Ljava/util/function/Predicate;)Ljava/util/function/Predicate;" },
	{ "lambda$or$2", "(Ljava/util/function/Predicate;Ljava/lang/Object;)Z" },
	{ "lambda$negate$1", "(Ljava/lang/Object;)Z" },
	{ "lambda$and$0", "(Ljava/util/function/Predicate;Ljava/lang/Object;)Z" },
};

static MethodMetadata methods[] {
	{ "test", 0, INDEX_java_util_function_Predicate_test_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1025 },
	{ "and", (intptr_t) M_java_util_function_Predicate_and_java_util_function_Predicate_R_java_util_function_Predicate, INDEX_java_util_function_Predicate_and_java_util_function_Predicate_R_java_util_function_Predicate, "(Ljava/util/function/Predicate;)Ljava/util/function/Predicate;", 1 },
	{ "negate", (intptr_t) M_java_util_function_Predicate_negate_R_java_util_function_Predicate, INDEX_java_util_function_Predicate_negate_R_java_util_function_Predicate, "()Ljava/util/function/Predicate;", 1 },
	{ "or", (intptr_t) M_java_util_function_Predicate_or_java_util_function_Predicate_R_java_util_function_Predicate, INDEX_java_util_function_Predicate_or_java_util_function_Predicate_R_java_util_function_Predicate, "(Ljava/util/function/Predicate;)Ljava/util/function/Predicate;", 1 },
	{ "isEqual", (intptr_t) SM_java_util_function_Predicate_isEqual_java_lang_Object_R_java_util_function_Predicate, 0, "(Ljava/lang/Object;)Ljava/util/function/Predicate;", 9 },
	{ "not", (intptr_t) SM_java_util_function_Predicate_not_java_util_function_Predicate_R_java_util_function_Predicate, 0, "(Ljava/util/function/Predicate;)Ljava/util/function/Predicate;", 9 },
	{ "lambda$isEqual$3", (intptr_t) SM_java_util_function_Predicate_lambda$isEqual$3_java_lang_Object_java_lang_Object_R_boolean, 0, "(Ljava/lang/Object;Ljava/lang/Object;)Z", 4106 },
	{ "lambda$or$2", (intptr_t) M_java_util_function_Predicate_lambda$or$2_java_util_function_Predicate_java_lang_Object_R_boolean, INDEX_java_util_function_Predicate_lambda$or$2_java_util_function_Predicate_java_lang_Object_R_boolean, "(Ljava/util/function/Predicate;Ljava/lang/Object;)Z", 4098 },
	{ "lambda$negate$1", (intptr_t) M_java_util_function_Predicate_lambda$negate$1_java_lang_Object_R_boolean, INDEX_java_util_function_Predicate_lambda$negate$1_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 4098 },
	{ "lambda$and$0", (intptr_t) M_java_util_function_Predicate_lambda$and$0_java_util_function_Predicate_java_lang_Object_R_boolean, INDEX_java_util_function_Predicate_lambda$and$0_java_util_function_Predicate_java_lang_Object_R_boolean, "(Ljava/util/function/Predicate;Ljava/lang/Object;)Z", 4098 },
};

Class class_java_util_function_Predicate{
		.nativeName = (intptr_t) "java/util/function/Predicate",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_function_Predicate),
		.classVtable = (intptr_t) vtable_java_util_function_Predicate,
		.staticInitializer = (intptr_t) clinit_java_util_function_Predicate,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_java_util_function_Predicate,
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
		.methodCount = 10,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 18,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_function_Predicate = registerClass(&class_java_util_function_Predicate);

}
