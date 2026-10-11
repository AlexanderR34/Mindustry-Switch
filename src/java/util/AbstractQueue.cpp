#include "java/util/AbstractQueue.h"
#include "java/util/AbstractQueue.h"
#include "java/util/Collection.h"
#include "java/lang/Object.h"
#include "java/util/NoSuchElementException.h"
#include "java/util/Queue.h"
#include "java/lang/NullPointerException.h"
#include "java/lang/IllegalStateException.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/Iterable.h"
#include "java/util/AbstractCollection.h"

extern "C" {


void mark_java_util_AbstractQueue(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_util_AbstractCollection(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_util_AbstractQueue *) object;
}

void clinit_java_util_AbstractQueue(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_util_AbstractCollection(ctx);
}

void init_java_util_AbstractQueue(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/AbstractQueue:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_AbstractQueue(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(36);
	init_java_util_AbstractCollection(ctx, (frame[0].o));
	LINE_NUMBER(37);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_java_util_AbstractQueue_add_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/AbstractQueue:add", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(50);
	if ((jobject(nullptr)) != (frame[1].o)) goto label_1;
	}
	{
	LINE_NUMBER(51);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(53);
	jint temp0 = (jint)((func_java_util_AbstractQueue_offer_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_AbstractQueue_offer_java_lang_Object_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(54);
	popStackFrame(ctx);
	return (jint(1));
	}
label_3:;
	{
	LINE_NUMBER(56);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jbool M_java_util_AbstractQueue_addAll_java_util_Collection_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/AbstractQueue:addAll", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(78);
	if ((jobject(nullptr)) != (frame[1].o)) goto label_1;
	}
	{
	LINE_NUMBER(79);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(81);
	if ((frame[0].o) != (frame[1].o)) goto label_3;
	}
	{
	LINE_NUMBER(82);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(84);
	jint temp0 = (jint)M_java_util_AbstractCollection_addAll_java_util_Collection_R_boolean(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_java_util_AbstractQueue_remove_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/AbstractQueue:remove", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(95);
	sp[0].o = (jobject)((func_java_util_AbstractQueue_poll_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_AbstractQueue_poll_R_java_lang_Object])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(96);
	if ((jobject(nullptr)) != (frame[1].o)) goto label_2;
	}
	{
	LINE_NUMBER(97);
	clinit_java_util_NoSuchElementException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_NoSuchElementException);
	init_java_util_NoSuchElementException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(99);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_java_util_AbstractQueue_element_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/AbstractQueue:element", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(110);
	sp[0].o = (jobject)((func_java_util_AbstractQueue_peek_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_AbstractQueue_peek_R_java_lang_Object])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(111);
	if ((jobject(nullptr)) != (frame[1].o)) goto label_2;
	}
	{
	LINE_NUMBER(112);
	clinit_java_util_NoSuchElementException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_NoSuchElementException);
	init_java_util_NoSuchElementException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(114);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

void M_java_util_AbstractQueue_clear(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/AbstractQueue:clear", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
label_0:;
	{
	LINE_NUMBER(124);
	sp[0].o = (jobject)((func_java_util_AbstractQueue_poll_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_AbstractQueue_poll_R_java_lang_Object])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(125);
	if ((jobject(nullptr)) != (frame[1].o)) goto label_0;
	}
	LINE_NUMBER(126);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_java_util_AbstractQueue[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_util_AbstractCollection_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) nullptr,
	(void *) M_java_lang_Iterable_forEach_java_util_function_Consumer,
	(void *) M_java_util_Collection_spliterator_R_java_util_Spliterator,
	(void *) M_java_util_AbstractQueue_add_java_lang_Object_R_boolean,
	(void *) M_java_util_AbstractQueue_addAll_java_util_Collection_R_boolean,
	(void *) M_java_util_AbstractQueue_clear,
	(void *) M_java_util_AbstractCollection_contains_java_lang_Object_R_boolean,
	(void *) M_java_util_AbstractCollection_containsAll_java_util_Collection_R_boolean,
	(void *) M_java_util_AbstractCollection_isEmpty_R_boolean,
	(void *) M_java_util_AbstractCollection_remove_java_lang_Object_R_boolean,
	(void *) M_java_util_AbstractCollection_removeAll_java_util_Collection_R_boolean,
	(void *) M_java_util_AbstractCollection_retainAll_java_util_Collection_R_boolean,
	(void *) nullptr,
	(void *) M_java_util_AbstractCollection_toArray_R_Array1_java_lang_Object,
	(void *) M_java_util_AbstractCollection_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_java_util_AbstractQueue_remove_R_java_lang_Object,
	(void *) nullptr,
	(void *) M_java_util_AbstractQueue_element_R_java_lang_Object,
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
	{ "iterator", "()Ljava/util/Iterator;" },
	{ "forEach", "(Ljava/util/function/Consumer;)V" },
	{ "spliterator", "()Ljava/util/Spliterator;" },
	{ "add", "(Ljava/lang/Object;)Z" },
	{ "addAll", "(Ljava/util/Collection;)Z" },
	{ "clear", "()V" },
	{ "contains", "(Ljava/lang/Object;)Z" },
	{ "containsAll", "(Ljava/util/Collection;)Z" },
	{ "isEmpty", "()Z" },
	{ "remove", "(Ljava/lang/Object;)Z" },
	{ "removeAll", "(Ljava/util/Collection;)Z" },
	{ "retainAll", "(Ljava/util/Collection;)Z" },
	{ "size", "()I" },
	{ "toArray", "()[Ljava/lang/Object;" },
	{ "toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;" },
	{ "offer", "(Ljava/lang/Object;)Z" },
	{ "poll", "()Ljava/lang/Object;" },
	{ "remove", "()Ljava/lang/Object;" },
	{ "peek", "()Ljava/lang/Object;" },
	{ "element", "()Ljava/lang/Object;" },
};

static jclass interfaces[] { &class_java_util_Queue, };

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_AbstractQueue, 0, "()V", 4 },
	{ "add", (intptr_t) M_java_util_AbstractQueue_add_java_lang_Object_R_boolean, VTABLE_java_util_AbstractQueue_add_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "addAll", (intptr_t) M_java_util_AbstractQueue_addAll_java_util_Collection_R_boolean, VTABLE_java_util_AbstractQueue_addAll_java_util_Collection_R_boolean, "(Ljava/util/Collection;)Z", 1 },
	{ "remove", (intptr_t) M_java_util_AbstractQueue_remove_R_java_lang_Object, VTABLE_java_util_AbstractQueue_remove_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "element", (intptr_t) M_java_util_AbstractQueue_element_R_java_lang_Object, VTABLE_java_util_AbstractQueue_element_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "clear", (intptr_t) M_java_util_AbstractQueue_clear, VTABLE_java_util_AbstractQueue_clear, "()V", 1 },
};

Class class_java_util_AbstractQueue{
		.nativeName = (intptr_t) "java/util/AbstractQueue",
		.parentClass = (intptr_t) &class_java_util_AbstractCollection,
		.size = sizeof(java_util_AbstractQueue),
		.classVtable = (intptr_t) vtable_java_util_AbstractQueue,
		.staticInitializer = (intptr_t) clinit_java_util_AbstractQueue,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_AbstractQueue,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1057,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 31,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_AbstractQueue = registerClass(&class_java_util_AbstractQueue);

}
