#include "java/util/Spliterators_4Adapter.h"
#include "java/util/Spliterators_4Adapter.h"
#include "java/util/PrimitiveIterator_OfDouble.h"
#include "java/lang/Object.h"
#include "java/util/NoSuchElementException.h"
#include "java/util/function/DoubleConsumer.h"
#include "java/util/Iterator.h"
#include "java/util/Spliterator_OfDouble.h"

extern "C" {


void mark_java_util_Spliterators$4Adapter(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_Spliterators$4Adapter *) object;
	if (self->F_val$spliterator)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_val$spliterator)->clazz)->markFunction)((jobject) self->F_val$spliterator, mark, depth + 1);
}

void clinit_java_util_Spliterators$4Adapter(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_java_util_Spliterators$4Adapter_java_util_Spliterator$OfDouble(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterators$4Adapter:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Spliterators$4Adapter(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(803);
	((java_util_Spliterators$4Adapter *) NULL_CHECK((frame[0].o)))->F_val$spliterator = (jref) (frame[1].o);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(804);
	((java_util_Spliterators$4Adapter *) NULL_CHECK((frame[0].o)))->F_valueReady = (jint(0));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_Spliterators$4Adapter_accept_double(jcontext ctx, jobject self, jdouble param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterators$4Adapter:accept", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].d = param0;
	{
	LINE_NUMBER(809);
	((java_util_Spliterators$4Adapter *) NULL_CHECK((frame[0].o)))->F_valueReady = (jint(1));
	LINE_NUMBER(810);
	((java_util_Spliterators$4Adapter *) NULL_CHECK((frame[0].o)))->F_nextElement = (frame[1].d);
	LINE_NUMBER(811);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_java_util_Spliterators$4Adapter_hasNext_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterators$4Adapter:hasNext", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(815);
	if (((jint)((java_util_Spliterators$4Adapter *) NULL_CHECK((frame[0].o)))->F_valueReady) != 0) goto label_1;
	}
	{
	LINE_NUMBER(816);
	sp[0].o = (jobject)((java_util_Spliterators$4Adapter *) NULL_CHECK((frame[0].o)))->F_val$spliterator;
	jint temp0 = (jint)((func_java_util_Spliterator$OfDouble_tryAdvance_java_util_function_DoubleConsumer_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Spliterator$OfDouble, INDEX_java_util_Spliterator$OfDouble_tryAdvance_java_util_function_DoubleConsumer_R_boolean, sp[0].o))(ctx, sp[0].o, (frame[0].o));
	}
label_1:;
	{
	LINE_NUMBER(817);
	popStackFrame(ctx);
	return ((jint)((java_util_Spliterators$4Adapter *) NULL_CHECK((frame[0].o)))->F_valueReady);
	}

	popStackFrame(ctx);
}

jdouble M_java_util_Spliterators$4Adapter_nextDouble_R_double(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterators$4Adapter:nextDouble", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(822);
	if (((jint)((java_util_Spliterators$4Adapter *) NULL_CHECK((frame[0].o)))->F_valueReady) != 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_java_util_Spliterators$4Adapter_hasNext_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_Spliterators$4Adapter_hasNext_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(823);
	clinit_java_util_NoSuchElementException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_NoSuchElementException);
	init_java_util_NoSuchElementException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(825);
	((java_util_Spliterators$4Adapter *) NULL_CHECK((frame[0].o)))->F_valueReady = (jint(0));
	LINE_NUMBER(826);
	popStackFrame(ctx);
	return ((jdouble)((java_util_Spliterators$4Adapter *) NULL_CHECK((frame[0].o)))->F_nextElement);
	}

	popStackFrame(ctx);
}

void *vtable_java_util_Spliterators$4Adapter[] {
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
	(void *) M_java_util_Spliterators$4Adapter_hasNext_R_boolean,
	(void *) M_java_util_PrimitiveIterator$OfDouble_next_R_java_lang_Object,
	(void *) M_java_util_Iterator_remove,
	(void *) M_java_util_PrimitiveIterator$OfDouble_forEachRemaining_java_util_function_Consumer,
	(void *) M_java_util_PrimitiveIterator$OfDouble_forEachRemaining_java_lang_Object,
	(void *) M_java_util_Spliterators$4Adapter_nextDouble_R_double,
	(void *) M_java_util_PrimitiveIterator$OfDouble_forEachRemaining_java_util_function_DoubleConsumer,
	(void *) M_java_util_PrimitiveIterator$OfDouble_next_R_java_lang_Double,
	(void *) M_java_util_Spliterators$4Adapter_accept_double,
	(void *) M_java_util_function_DoubleConsumer_andThen_java_util_function_DoubleConsumer_R_java_util_function_DoubleConsumer,
	(void *) M_java_util_function_DoubleConsumer_lambda$andThen$0_java_util_function_DoubleConsumer_double,
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
	{ "accept", "(D)V" },
	{ "andThen", "(Ljava/util/function/DoubleConsumer;)Ljava/util/function/DoubleConsumer;" },
	{ "lambda$andThen$0", "(Ljava/util/function/DoubleConsumer;D)V" },
};

static jclass interfaces[] { &class_java_util_PrimitiveIterator$OfDouble, &class_java_util_function_DoubleConsumer, };

static FieldMetadata fields[] {
	{ "valueReady", &class_boolean, offsetof(java_util_Spliterators$4Adapter, F_valueReady), "Z", 0 },
	{ "nextElement", &class_double, offsetof(java_util_Spliterators$4Adapter, F_nextElement), "D", 0 },
	{ "val$spliterator", &class_java_util_Spliterator$OfDouble, offsetof(java_util_Spliterators$4Adapter, F_val$spliterator), "Ljava/util/Spliterator$OfDouble;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_Spliterators$4Adapter_java_util_Spliterator$OfDouble, 0, "(Ljava/util/Spliterator$OfDouble;)V", 0 },
	{ "accept", (intptr_t) M_java_util_Spliterators$4Adapter_accept_double, VTABLE_java_util_Spliterators$4Adapter_accept_double, "(D)V", 1 },
	{ "hasNext", (intptr_t) M_java_util_Spliterators$4Adapter_hasNext_R_boolean, VTABLE_java_util_Spliterators$4Adapter_hasNext_R_boolean, "()Z", 1 },
	{ "nextDouble", (intptr_t) M_java_util_Spliterators$4Adapter_nextDouble_R_double, VTABLE_java_util_Spliterators$4Adapter_nextDouble_R_double, "()D", 1 },
};

Class class_java_util_Spliterators$4Adapter{
		.nativeName = (intptr_t) "java/util/Spliterators$4Adapter",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_Spliterators$4Adapter),
		.classVtable = (intptr_t) vtable_java_util_Spliterators$4Adapter,
		.staticInitializer = (intptr_t) clinit_java_util_Spliterators$4Adapter,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_Spliterators$4Adapter,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 2,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 22,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_Spliterators$4Adapter = registerClass(&class_java_util_Spliterators$4Adapter);

}

