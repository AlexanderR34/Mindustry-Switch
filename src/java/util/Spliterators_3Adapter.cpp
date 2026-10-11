#include "java/util/Spliterators_3Adapter.h"
#include "java/util/PrimitiveIterator_OfLong.h"
#include "java/lang/Object.h"
#include "java/util/Spliterators_3Adapter.h"
#include "java/util/NoSuchElementException.h"
#include "java/util/Spliterator_OfLong.h"
#include "java/util/Iterator.h"
#include "java/util/function/LongConsumer.h"

extern "C" {


void mark_java_util_Spliterators$3Adapter(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_Spliterators$3Adapter *) object;
	if (self->F_val$spliterator)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_val$spliterator)->clazz)->markFunction)((jobject) self->F_val$spliterator, mark, depth + 1);
}

void clinit_java_util_Spliterators$3Adapter(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_java_util_Spliterators$3Adapter_java_util_Spliterator$OfLong(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterators$3Adapter:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Spliterators$3Adapter(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(758);
	((java_util_Spliterators$3Adapter *) NULL_CHECK((frame[0].o)))->F_val$spliterator = (jref) (frame[1].o);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(759);
	((java_util_Spliterators$3Adapter *) NULL_CHECK((frame[0].o)))->F_valueReady = (jint(0));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_Spliterators$3Adapter_accept_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterators$3Adapter:accept", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(764);
	((java_util_Spliterators$3Adapter *) NULL_CHECK((frame[0].o)))->F_valueReady = (jint(1));
	LINE_NUMBER(765);
	((java_util_Spliterators$3Adapter *) NULL_CHECK((frame[0].o)))->F_nextElement = (frame[1].l);
	LINE_NUMBER(766);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_java_util_Spliterators$3Adapter_hasNext_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterators$3Adapter:hasNext", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(770);
	if (((jint)((java_util_Spliterators$3Adapter *) NULL_CHECK((frame[0].o)))->F_valueReady) != 0) goto label_1;
	}
	{
	LINE_NUMBER(771);
	sp[0].o = (jobject)((java_util_Spliterators$3Adapter *) NULL_CHECK((frame[0].o)))->F_val$spliterator;
	jint temp0 = (jint)((func_java_util_Spliterator$OfLong_tryAdvance_java_util_function_LongConsumer_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Spliterator$OfLong, INDEX_java_util_Spliterator$OfLong_tryAdvance_java_util_function_LongConsumer_R_boolean, sp[0].o))(ctx, sp[0].o, (frame[0].o));
	}
label_1:;
	{
	LINE_NUMBER(772);
	popStackFrame(ctx);
	return ((jint)((java_util_Spliterators$3Adapter *) NULL_CHECK((frame[0].o)))->F_valueReady);
	}

	popStackFrame(ctx);
}

jlong M_java_util_Spliterators$3Adapter_nextLong_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterators$3Adapter:nextLong", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(777);
	if (((jint)((java_util_Spliterators$3Adapter *) NULL_CHECK((frame[0].o)))->F_valueReady) != 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_java_util_Spliterators$3Adapter_hasNext_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_Spliterators$3Adapter_hasNext_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(778);
	clinit_java_util_NoSuchElementException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_NoSuchElementException);
	init_java_util_NoSuchElementException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(780);
	((java_util_Spliterators$3Adapter *) NULL_CHECK((frame[0].o)))->F_valueReady = (jint(0));
	LINE_NUMBER(781);
	popStackFrame(ctx);
	return ((jlong)((java_util_Spliterators$3Adapter *) NULL_CHECK((frame[0].o)))->F_nextElement);
	}

	popStackFrame(ctx);
}

void *vtable_java_util_Spliterators$3Adapter[] {
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
	(void *) M_java_util_Spliterators$3Adapter_hasNext_R_boolean,
	(void *) M_java_util_PrimitiveIterator$OfLong_next_R_java_lang_Object,
	(void *) M_java_util_Iterator_remove,
	(void *) M_java_util_PrimitiveIterator$OfLong_forEachRemaining_java_util_function_Consumer,
	(void *) M_java_util_PrimitiveIterator$OfLong_forEachRemaining_java_lang_Object,
	(void *) M_java_util_Spliterators$3Adapter_nextLong_R_long,
	(void *) M_java_util_PrimitiveIterator$OfLong_forEachRemaining_java_util_function_LongConsumer,
	(void *) M_java_util_PrimitiveIterator$OfLong_next_R_java_lang_Long,
	(void *) M_java_util_Spliterators$3Adapter_accept_long,
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
	{ "hasNext", "()Z" },
	{ "next", "()Ljava/lang/Object;" },
	{ "remove", "()V" },
	{ "forEachRemaining", "(Ljava/util/function/Consumer;)V" },
	{ "forEachRemaining", "(Ljava/lang/Object;)V" },
	{ "nextLong", "()J" },
	{ "forEachRemaining", "(Ljava/util/function/LongConsumer;)V" },
	{ "next", "()Ljava/lang/Long;" },
	{ "accept", "(J)V" },
	{ "andThen", "(Ljava/util/function/LongConsumer;)Ljava/util/function/LongConsumer;" },
	{ "lambda$andThen$0", "(Ljava/util/function/LongConsumer;J)V" },
};

static jclass interfaces[] { &class_java_util_PrimitiveIterator$OfLong, &class_java_util_function_LongConsumer, };

static FieldMetadata fields[] {
	{ "valueReady", &class_boolean, offsetof(java_util_Spliterators$3Adapter, F_valueReady), "Z", 0 },
	{ "nextElement", &class_long, offsetof(java_util_Spliterators$3Adapter, F_nextElement), "J", 0 },
	{ "val$spliterator", &class_java_util_Spliterator$OfLong, offsetof(java_util_Spliterators$3Adapter, F_val$spliterator), "Ljava/util/Spliterator$OfLong;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_Spliterators$3Adapter_java_util_Spliterator$OfLong, 0, "(Ljava/util/Spliterator$OfLong;)V", 0 },
	{ "accept", (intptr_t) M_java_util_Spliterators$3Adapter_accept_long, VTABLE_java_util_Spliterators$3Adapter_accept_long, "(J)V", 1 },
	{ "hasNext", (intptr_t) M_java_util_Spliterators$3Adapter_hasNext_R_boolean, VTABLE_java_util_Spliterators$3Adapter_hasNext_R_boolean, "()Z", 1 },
	{ "nextLong", (intptr_t) M_java_util_Spliterators$3Adapter_nextLong_R_long, VTABLE_java_util_Spliterators$3Adapter_nextLong_R_long, "()J", 1 },
};

Class class_java_util_Spliterators$3Adapter{
		.nativeName = (intptr_t) "java/util/Spliterators$3Adapter",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_Spliterators$3Adapter),
		.classVtable = (intptr_t) vtable_java_util_Spliterators$3Adapter,
		.staticInitializer = (intptr_t) clinit_java_util_Spliterators$3Adapter,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_Spliterators$3Adapter,
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
static bool registered_java_util_Spliterators$3Adapter = registerClass(&class_java_util_Spliterators$3Adapter);

}

