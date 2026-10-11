#include "java/util/PrimitiveIterator_OfDouble.h"
#include "java/util/PrimitiveIterator_OfDouble.h"
#include "java/lang/Object.h"
#include "java/util/PrimitiveIterator_OfDouble_invoke_java_util_function_DoubleConsumer_0.h"
#include "java/util/Iterator.h"
#include "java/util/function/DoubleConsumer.h"
#include "java/util/function/Consumer.h"
#include "java/util/PrimitiveIterator.h"
#include "java/util/Objects.h"
#include "java/lang/Double.h"

extern "C" {


void mark_java_util_PrimitiveIterator$OfDouble(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_PrimitiveIterator$OfDouble *) object;
}

void clinit_java_util_PrimitiveIterator$OfDouble(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void M_java_util_PrimitiveIterator$OfDouble_forEachRemaining_java_util_function_DoubleConsumer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/PrimitiveIterator$OfDouble:forEachRemaining", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(15);
	sp[0].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, (frame[1].o));
	}
label_1:;
	{
	LINE_NUMBER(17);
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[0].o)))(ctx, (frame[0].o));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(18);
	sp[0].o = frame[1].o;
	jdouble temp0 = (jdouble)((func_java_util_PrimitiveIterator$OfDouble_nextDouble_R_double) resolveInterfaceMethod(ctx, &class_java_util_PrimitiveIterator$OfDouble, INDEX_java_util_PrimitiveIterator$OfDouble_nextDouble_R_double, (frame[0].o)))(ctx, (frame[0].o));
	((func_java_util_function_DoubleConsumer_accept_double) resolveInterfaceMethod(ctx, &class_java_util_function_DoubleConsumer, INDEX_java_util_function_DoubleConsumer_accept_double, sp[0].o))(ctx, sp[0].o, temp0);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(21);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_java_util_PrimitiveIterator$OfDouble_next_R_java_lang_Double(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/PrimitiveIterator$OfDouble:next", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(28);
	jdouble temp0 = (jdouble)((func_java_util_PrimitiveIterator$OfDouble_nextDouble_R_double) resolveInterfaceMethod(ctx, &class_java_util_PrimitiveIterator$OfDouble, INDEX_java_util_PrimitiveIterator$OfDouble_nextDouble_R_double, (frame[0].o)))(ctx, (frame[0].o));
	sp[0].o = (jobject)SM_java_lang_Double_valueOf_double_R_java_lang_Double(ctx, temp0);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_java_util_PrimitiveIterator$OfDouble_forEachRemaining_java_util_function_Consumer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/PrimitiveIterator$OfDouble:forEachRemaining", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(32);
	if ((isInstance(ctx, (frame[1].o), &class_java_util_function_DoubleConsumer)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(33);
	((func_java_util_PrimitiveIterator$OfDouble_forEachRemaining_java_util_function_DoubleConsumer) resolveInterfaceMethod(ctx, &class_java_util_PrimitiveIterator$OfDouble, INDEX_java_util_PrimitiveIterator$OfDouble_forEachRemaining_java_util_function_DoubleConsumer, (frame[0].o)))(ctx, (frame[0].o), (checkCast(ctx, &class_java_util_function_DoubleConsumer, (frame[1].o))));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(35);
	sp[0].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, (frame[1].o));
	LINE_NUMBER(40);
	sp[0].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, (frame[1].o));
	LINE_NUMBER(41);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_java_util_PrimitiveIterator$OfDouble_invoke_java_util_function_DoubleConsumer_0(ctx);
		auto proxy = (java_util_PrimitiveIterator$OfDouble_invoke_java_util_function_DoubleConsumer_0 *) gcAlloc(ctx, &class_java_util_PrimitiveIterator$OfDouble_invoke_java_util_function_DoubleConsumer_0);
		proxy->F_field0 = (jref) sp[1].o;
		sp[1].o = (jobject) proxy;
	}
	((func_java_util_PrimitiveIterator$OfDouble_forEachRemaining_java_util_function_DoubleConsumer) resolveInterfaceMethod(ctx, &class_java_util_PrimitiveIterator$OfDouble, INDEX_java_util_PrimitiveIterator$OfDouble_forEachRemaining_java_util_function_DoubleConsumer, sp[0].o))(ctx, sp[0].o, sp[1].o);
	}
label_3:;
	LINE_NUMBER(44);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_util_PrimitiveIterator$OfDouble_forEachRemaining_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/PrimitiveIterator$OfDouble:forEachRemaining", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(11);
	((func_java_util_PrimitiveIterator$OfDouble_forEachRemaining_java_util_function_DoubleConsumer) resolveInterfaceMethod(ctx, &class_java_util_PrimitiveIterator$OfDouble, INDEX_java_util_PrimitiveIterator$OfDouble_forEachRemaining_java_util_function_DoubleConsumer, (frame[0].o)))(ctx, (frame[0].o), (checkCast(ctx, &class_java_util_function_DoubleConsumer, (frame[1].o))));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_util_PrimitiveIterator$OfDouble_next_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/PrimitiveIterator$OfDouble:next", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(11);
	sp[0].o = (jobject)((func_java_util_PrimitiveIterator$OfDouble_next_R_java_lang_Double) resolveInterfaceMethod(ctx, &class_java_util_PrimitiveIterator$OfDouble, INDEX_java_util_PrimitiveIterator$OfDouble_next_R_java_lang_Double, (frame[0].o)))(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_PrimitiveIterator$OfDouble[] {
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
	(void *) M_java_util_PrimitiveIterator$OfDouble_next_R_java_lang_Object,
	(void *) M_java_util_Iterator_remove,
	(void *) M_java_util_PrimitiveIterator$OfDouble_forEachRemaining_java_util_function_Consumer,
	(void *) M_java_util_PrimitiveIterator$OfDouble_forEachRemaining_java_lang_Object,
	(void *) nullptr,
	(void *) M_java_util_PrimitiveIterator$OfDouble_forEachRemaining_java_util_function_DoubleConsumer,
	(void *) M_java_util_PrimitiveIterator$OfDouble_next_R_java_lang_Double,
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
	{ "hasNext", "()Z" },
	{ "next", "()Ljava/lang/Object;" },
	{ "remove", "()V" },
	{ "forEachRemaining", "(Ljava/util/function/Consumer;)V" },
	{ "forEachRemaining", "(Ljava/lang/Object;)V" },
	{ "nextDouble", "()D" },
	{ "forEachRemaining", "(Ljava/util/function/DoubleConsumer;)V" },
	{ "next", "()Ljava/lang/Double;" },
};

static jclass interfaces[] { &class_java_util_PrimitiveIterator, };

static MethodMetadata methods[] {
	{ "nextDouble", 0, INDEX_java_util_PrimitiveIterator$OfDouble_nextDouble_R_double, "()D", 1025 },
	{ "forEachRemaining", (intptr_t) M_java_util_PrimitiveIterator$OfDouble_forEachRemaining_java_util_function_DoubleConsumer, INDEX_java_util_PrimitiveIterator$OfDouble_forEachRemaining_java_util_function_DoubleConsumer, "(Ljava/util/function/DoubleConsumer;)V", 1 },
	{ "next", (intptr_t) M_java_util_PrimitiveIterator$OfDouble_next_R_java_lang_Double, INDEX_java_util_PrimitiveIterator$OfDouble_next_R_java_lang_Double, "()Ljava/lang/Double;", 1 },
	{ "forEachRemaining", (intptr_t) M_java_util_PrimitiveIterator$OfDouble_forEachRemaining_java_util_function_Consumer, INDEX_java_util_PrimitiveIterator$OfDouble_forEachRemaining_java_util_function_Consumer, "(Ljava/util/function/Consumer;)V", 1 },
	{ "forEachRemaining", (intptr_t) M_java_util_PrimitiveIterator$OfDouble_forEachRemaining_java_lang_Object, INDEX_java_util_PrimitiveIterator$OfDouble_forEachRemaining_java_lang_Object, "(Ljava/lang/Object;)V", 4161 },
	{ "next", (intptr_t) M_java_util_PrimitiveIterator$OfDouble_next_R_java_lang_Object, INDEX_java_util_PrimitiveIterator$OfDouble_next_R_java_lang_Object, "()Ljava/lang/Object;", 4161 },
};

Class class_java_util_PrimitiveIterator$OfDouble{
		.nativeName = (intptr_t) "java/util/PrimitiveIterator$OfDouble",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_PrimitiveIterator$OfDouble),
		.classVtable = (intptr_t) vtable_java_util_PrimitiveIterator$OfDouble,
		.staticInitializer = (intptr_t) clinit_java_util_PrimitiveIterator$OfDouble,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_PrimitiveIterator$OfDouble,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_util_PrimitiveIterator,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1545,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 19,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_PrimitiveIterator$OfDouble = registerClass(&class_java_util_PrimitiveIterator$OfDouble);

}

