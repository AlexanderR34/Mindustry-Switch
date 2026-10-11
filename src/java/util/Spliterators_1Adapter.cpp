#include "java/util/Spliterators_1Adapter.h"
#include "java/util/Spliterator.h"
#include "java/lang/Object.h"
#include "java/util/NoSuchElementException.h"
#include "java/util/Iterator.h"
#include "java/util/function/Consumer.h"
#include "java/util/Spliterators_1Adapter.h"

extern "C" {


void mark_java_util_Spliterators$1Adapter(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_Spliterators$1Adapter *) object;
	if (self->F_nextElement)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_nextElement)->clazz)->markFunction)((jobject) self->F_nextElement, mark, depth + 1);
	if (self->F_val$spliterator)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_val$spliterator)->clazz)->markFunction)((jobject) self->F_val$spliterator, mark, depth + 1);
}

void clinit_java_util_Spliterators$1Adapter(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_java_util_Spliterators$1Adapter_java_util_Spliterator(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterators$1Adapter:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Spliterators$1Adapter(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(668);
	((java_util_Spliterators$1Adapter *) NULL_CHECK((frame[0].o)))->F_val$spliterator = (jref) (frame[1].o);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(669);
	((java_util_Spliterators$1Adapter *) NULL_CHECK((frame[0].o)))->F_valueReady = (jint(0));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_Spliterators$1Adapter_accept_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterators$1Adapter:accept", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(674);
	((java_util_Spliterators$1Adapter *) NULL_CHECK((frame[0].o)))->F_valueReady = (jint(1));
	LINE_NUMBER(675);
	((java_util_Spliterators$1Adapter *) NULL_CHECK((frame[0].o)))->F_nextElement = (jref) (frame[1].o);
	LINE_NUMBER(676);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_java_util_Spliterators$1Adapter_hasNext_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterators$1Adapter:hasNext", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(680);
	if (((jint)((java_util_Spliterators$1Adapter *) NULL_CHECK((frame[0].o)))->F_valueReady) != 0) goto label_1;
	}
	{
	LINE_NUMBER(681);
	sp[0].o = (jobject)((java_util_Spliterators$1Adapter *) NULL_CHECK((frame[0].o)))->F_val$spliterator;
	jint temp0 = (jint)((func_java_util_Spliterator_tryAdvance_java_util_function_Consumer_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Spliterator, INDEX_java_util_Spliterator_tryAdvance_java_util_function_Consumer_R_boolean, sp[0].o))(ctx, sp[0].o, (frame[0].o));
	}
label_1:;
	{
	LINE_NUMBER(682);
	popStackFrame(ctx);
	return ((jint)((java_util_Spliterators$1Adapter *) NULL_CHECK((frame[0].o)))->F_valueReady);
	}

	popStackFrame(ctx);
}

jobject M_java_util_Spliterators$1Adapter_next_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterators$1Adapter:next", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(687);
	if (((jint)((java_util_Spliterators$1Adapter *) NULL_CHECK((frame[0].o)))->F_valueReady) != 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_java_util_Spliterators$1Adapter_hasNext_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_Spliterators$1Adapter_hasNext_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(688);
	clinit_java_util_NoSuchElementException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_NoSuchElementException);
	init_java_util_NoSuchElementException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(690);
	((java_util_Spliterators$1Adapter *) NULL_CHECK((frame[0].o)))->F_valueReady = (jint(0));
	LINE_NUMBER(691);
	sp[0].o = (jobject)((java_util_Spliterators$1Adapter *) NULL_CHECK((frame[0].o)))->F_nextElement;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_Spliterators$1Adapter[] {
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
	(void *) M_java_util_Spliterators$1Adapter_hasNext_R_boolean,
	(void *) M_java_util_Spliterators$1Adapter_next_R_java_lang_Object,
	(void *) M_java_util_Iterator_remove,
	(void *) M_java_util_Iterator_forEachRemaining_java_util_function_Consumer,
	(void *) M_java_util_Spliterators$1Adapter_accept_java_lang_Object,
	(void *) M_java_util_function_Consumer_andThen_java_util_function_Consumer_R_java_util_function_Consumer,
	(void *) M_java_util_function_Consumer_lambda$andThen$0_java_util_function_Consumer_java_lang_Object,
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
	{ "accept", "(Ljava/lang/Object;)V" },
	{ "andThen", "(Ljava/util/function/Consumer;)Ljava/util/function/Consumer;" },
	{ "lambda$andThen$0", "(Ljava/util/function/Consumer;Ljava/lang/Object;)V" },
};

static jclass interfaces[] { &class_java_util_Iterator, &class_java_util_function_Consumer, };

static FieldMetadata fields[] {
	{ "valueReady", &class_boolean, offsetof(java_util_Spliterators$1Adapter, F_valueReady), "Z", 0 },
	{ "nextElement", &class_java_lang_Object, offsetof(java_util_Spliterators$1Adapter, F_nextElement), "Ljava/lang/Object;", 0 },
	{ "val$spliterator", &class_java_util_Spliterator, offsetof(java_util_Spliterators$1Adapter, F_val$spliterator), "Ljava/util/Spliterator;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_Spliterators$1Adapter_java_util_Spliterator, 0, "(Ljava/util/Spliterator;)V", 0 },
	{ "accept", (intptr_t) M_java_util_Spliterators$1Adapter_accept_java_lang_Object, VTABLE_java_util_Spliterators$1Adapter_accept_java_lang_Object, "(Ljava/lang/Object;)V", 1 },
	{ "hasNext", (intptr_t) M_java_util_Spliterators$1Adapter_hasNext_R_boolean, VTABLE_java_util_Spliterators$1Adapter_hasNext_R_boolean, "()Z", 1 },
	{ "next", (intptr_t) M_java_util_Spliterators$1Adapter_next_R_java_lang_Object, VTABLE_java_util_Spliterators$1Adapter_next_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
};

Class class_java_util_Spliterators$1Adapter{
		.nativeName = (intptr_t) "java/util/Spliterators$1Adapter",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_Spliterators$1Adapter),
		.classVtable = (intptr_t) vtable_java_util_Spliterators$1Adapter,
		.staticInitializer = (intptr_t) clinit_java_util_Spliterators$1Adapter,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_Spliterators$1Adapter,
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
		.vtableSize = 18,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_Spliterators$1Adapter = registerClass(&class_java_util_Spliterators$1Adapter);

}

