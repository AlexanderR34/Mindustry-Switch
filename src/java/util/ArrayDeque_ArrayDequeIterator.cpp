#include "java/util/ArrayDeque_ArrayDequeIterator.h"
#include "java/lang/Object.h"
#include "java/util/NoSuchElementException.h"
#include "java/util/Iterator.h"
#include "java/util/ConcurrentModificationException.h"
#include "java/util/ArrayDeque.h"
#include "java/lang/IllegalStateException.h"
#include "java/util/ArrayDeque_DequeStatus.h"
#include "java/util/ArrayDeque_ArrayDequeIterator.h"

extern "C" {


void mark_java_util_ArrayDeque$ArrayDequeIterator(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_ArrayDeque$ArrayDequeIterator *) object;
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_java_util_ArrayDeque$ArrayDequeIterator(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_java_util_ArrayDeque$ArrayDequeIterator_java_util_ArrayDeque(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/ArrayDeque$ArrayDequeIterator:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_ArrayDeque$ArrayDequeIterator(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(62);
	((java_util_ArrayDeque$ArrayDequeIterator *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	LINE_NUMBER(63);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(64);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_util_ArrayDeque_access$000_java_util_ArrayDeque_R_int(ctx, (frame[1].o));
	((java_util_ArrayDeque$ArrayDequeIterator *) NULL_CHECK(sp[0].o))->F_pos = temp0;
	LINE_NUMBER(65);
	sp[0].o = frame[0].o;
	jint temp1 = (jint)SM_java_util_ArrayDeque_access$100_java_util_ArrayDeque_R_int(ctx, (frame[1].o));
	((java_util_ArrayDeque$ArrayDequeIterator *) NULL_CHECK(sp[0].o))->F_expectedModCount = temp1;
	LINE_NUMBER(66);
	((java_util_ArrayDeque$ArrayDequeIterator *) NULL_CHECK((frame[0].o)))->F_canRemove = (jint(0));
	LINE_NUMBER(67);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_java_util_ArrayDeque$ArrayDequeIterator_hasNext_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/ArrayDeque$ArrayDequeIterator:hasNext", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(71);
	jint temp0 = (jint)((java_util_ArrayDeque$ArrayDequeIterator *) NULL_CHECK((frame[0].o)))->F_expectedModCount;
	sp[0].o = (jobject)((java_util_ArrayDeque$ArrayDequeIterator *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp1 = (jint)SM_java_util_ArrayDeque_access$100_java_util_ArrayDeque_R_int(ctx, sp[0].o);
	if (temp0 == temp1) goto label_1;
	}
	{
	LINE_NUMBER(72);
	popStackFrame(ctx);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(74);
	jint temp0 = (jint)M_java_util_ArrayDeque$ArrayDequeIterator_hasNextInternal_R_boolean(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_java_util_ArrayDeque$ArrayDequeIterator_hasNextInternal_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/ArrayDeque$ArrayDequeIterator:hasNextInternal", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(82);
	jint temp0 = (jint)((java_util_ArrayDeque$ArrayDequeIterator *) NULL_CHECK((frame[0].o)))->F_pos;
	sp[0].o = (jobject)((java_util_ArrayDeque$ArrayDequeIterator *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp1 = (jint)SM_java_util_ArrayDeque_access$200_java_util_ArrayDeque_R_int(ctx, sp[0].o);
	if (temp0 != temp1) goto label_1;
	}
	{
	sp[0].o = (jobject)((java_util_ArrayDeque$ArrayDequeIterator *) NULL_CHECK((frame[0].o)))->F_this$0;
	LINE_NUMBER(83);
	sp[0].o = (jobject)SM_java_util_ArrayDeque_access$300_java_util_ArrayDeque_R_java_util_ArrayDeque$DequeStatus(ctx, sp[0].o);
	clinit_java_util_ArrayDeque$DequeStatus(ctx);
	sp[1].o = (jobject)SF_java_util_ArrayDeque$DequeStatus_Full;
	if (sp[0].o != sp[1].o) goto label_3;
	}
	{
	if (((jint)((java_util_ArrayDeque$ArrayDequeIterator *) NULL_CHECK((frame[0].o)))->F_canRemove) != 0) goto label_3;
	}
label_1:;
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	LINE_NUMBER(82);
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject M_java_util_ArrayDeque$ArrayDequeIterator_next_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/ArrayDeque$ArrayDequeIterator:next", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(88);
	jint temp0 = (jint)M_java_util_ArrayDeque$ArrayDequeIterator_hasNextInternal_R_boolean(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(89);
	sp[0].o = (jobject)((java_util_ArrayDeque$ArrayDequeIterator *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)SM_java_util_ArrayDeque_access$400_java_util_ArrayDeque_R_Array1_java_lang_Object(ctx, sp[0].o);
	frame[1].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((java_util_ArrayDeque$ArrayDequeIterator *) NULL_CHECK((frame[0].o)))->F_pos)));
	LINE_NUMBER(90);
	jint temp0 = (jint)((java_util_ArrayDeque$ArrayDequeIterator *) NULL_CHECK((frame[0].o)))->F_expectedModCount;
	sp[0].o = (jobject)((java_util_ArrayDeque$ArrayDequeIterator *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp1 = (jint)SM_java_util_ArrayDeque_access$100_java_util_ArrayDeque_R_int(ctx, sp[0].o);
	if (temp0 != temp1) goto label_4;
	}
	{
	if ((jobject(nullptr)) == (frame[1].o)) goto label_4;
	}
	{
	LINE_NUMBER(91);
	((java_util_ArrayDeque$ArrayDequeIterator *) NULL_CHECK((frame[0].o)))->F_canRemove = (jint(1));
	LINE_NUMBER(92);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_ArrayDeque$ArrayDequeIterator *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)SM_java_util_ArrayDeque_access$500_java_util_ArrayDeque_int_R_int(ctx, sp[1].o, ((jint)((java_util_ArrayDeque$ArrayDequeIterator *) NULL_CHECK((frame[0].o)))->F_pos));
	((java_util_ArrayDeque$ArrayDequeIterator *) NULL_CHECK(sp[0].o))->F_pos = temp0;
	LINE_NUMBER(93);
	popStackFrame(ctx);
	return (frame[1].o);
	}
label_4:;
	{
	LINE_NUMBER(95);
	clinit_java_util_ConcurrentModificationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ConcurrentModificationException);
	init_java_util_ConcurrentModificationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(97);
	clinit_java_util_NoSuchElementException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_NoSuchElementException);
	init_java_util_NoSuchElementException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void M_java_util_ArrayDeque$ArrayDequeIterator_remove(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/ArrayDeque$ArrayDequeIterator:remove", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(102);
	if (((jint)((java_util_ArrayDeque$ArrayDequeIterator *) NULL_CHECK((frame[0].o)))->F_canRemove) == 0) goto label_1;
	}
	{
	LINE_NUMBER(103);
	sp[0].o = (jobject)((java_util_ArrayDeque$ArrayDequeIterator *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)SM_java_util_ArrayDeque_access$600_java_util_ArrayDeque_int_R_int(ctx, sp[0].o, ((jint)((java_util_ArrayDeque$ArrayDequeIterator *) NULL_CHECK((frame[0].o)))->F_pos));
	frame[1].i = temp0;
	LINE_NUMBER(104);
	jint temp1 = (jint)((java_util_ArrayDeque$ArrayDequeIterator *) NULL_CHECK((frame[0].o)))->F_expectedModCount;
	sp[0].o = (jobject)((java_util_ArrayDeque$ArrayDequeIterator *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp2 = (jint)SM_java_util_ArrayDeque_access$100_java_util_ArrayDeque_R_int(ctx, sp[0].o);
	if (temp1 != temp2) goto label_4;
	}
	{
	sp[0].o = jobject(nullptr);
	sp[1].o = (jobject)((java_util_ArrayDeque$ArrayDequeIterator *) NULL_CHECK((frame[0].o)))->F_this$0;
	LINE_NUMBER(105);
	sp[1].o = (jobject)SM_java_util_ArrayDeque_access$400_java_util_ArrayDeque_R_Array1_java_lang_Object(ctx, sp[1].o);
	if (sp[0].o == ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[1].i)))) goto label_4;
	}
	{
	LINE_NUMBER(106);
	sp[0].o = (jobject)((java_util_ArrayDeque$ArrayDequeIterator *) NULL_CHECK((frame[0].o)))->F_this$0;
	SM_java_util_ArrayDeque_access$700_java_util_ArrayDeque_int_boolean(ctx, sp[0].o, (frame[1].i), (jint(1)));
	LINE_NUMBER(107);
	((java_util_ArrayDeque$ArrayDequeIterator *) NULL_CHECK((frame[0].o)))->F_canRemove = (jint(0));
	LINE_NUMBER(108);
	popStackFrame(ctx);
	return;
	}
label_4:;
	{
	LINE_NUMBER(110);
	clinit_java_util_ConcurrentModificationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ConcurrentModificationException);
	init_java_util_ConcurrentModificationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(112);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void *vtable_java_util_ArrayDeque$ArrayDequeIterator[] {
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
	(void *) M_java_util_ArrayDeque$ArrayDequeIterator_hasNext_R_boolean,
	(void *) M_java_util_ArrayDeque$ArrayDequeIterator_next_R_java_lang_Object,
	(void *) M_java_util_ArrayDeque$ArrayDequeIterator_remove,
	(void *) M_java_util_Iterator_forEachRemaining_java_util_function_Consumer,
	(void *) M_java_util_ArrayDeque$ArrayDequeIterator_hasNextInternal_R_boolean,
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
	{ "hasNextInternal", "()Z" },
};

static jclass interfaces[] { &class_java_util_Iterator, };

static FieldMetadata fields[] {
	{ "pos", &class_int, offsetof(java_util_ArrayDeque$ArrayDequeIterator, F_pos), "I", 2 },
	{ "expectedModCount", &class_int, offsetof(java_util_ArrayDeque$ArrayDequeIterator, F_expectedModCount), "I", 18 },
	{ "canRemove", &class_boolean, offsetof(java_util_ArrayDeque$ArrayDequeIterator, F_canRemove), "Z", 2 },
	{ "this$0", &class_java_util_ArrayDeque, offsetof(java_util_ArrayDeque$ArrayDequeIterator, F_this$0), "Ljava/util/ArrayDeque;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_ArrayDeque$ArrayDequeIterator_java_util_ArrayDeque, 0, "(Ljava/util/ArrayDeque;)V", 0 },
	{ "hasNext", (intptr_t) M_java_util_ArrayDeque$ArrayDequeIterator_hasNext_R_boolean, VTABLE_java_util_ArrayDeque$ArrayDequeIterator_hasNext_R_boolean, "()Z", 1 },
	{ "hasNextInternal", (intptr_t) M_java_util_ArrayDeque$ArrayDequeIterator_hasNextInternal_R_boolean, VTABLE_java_util_ArrayDeque$ArrayDequeIterator_hasNextInternal_R_boolean, "()Z", 2 },
	{ "next", (intptr_t) M_java_util_ArrayDeque$ArrayDequeIterator_next_R_java_lang_Object, VTABLE_java_util_ArrayDeque$ArrayDequeIterator_next_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "remove", (intptr_t) M_java_util_ArrayDeque$ArrayDequeIterator_remove, VTABLE_java_util_ArrayDeque$ArrayDequeIterator_remove, "()V", 1 },
};

Class class_java_util_ArrayDeque$ArrayDequeIterator{
		.nativeName = (intptr_t) "java/util/ArrayDeque$ArrayDequeIterator",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_ArrayDeque$ArrayDequeIterator),
		.classVtable = (intptr_t) vtable_java_util_ArrayDeque$ArrayDequeIterator,
		.staticInitializer = (intptr_t) clinit_java_util_ArrayDeque$ArrayDequeIterator,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_ArrayDeque$ArrayDequeIterator,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_util_ArrayDeque,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_ArrayDeque$ArrayDequeIterator = registerClass(&class_java_util_ArrayDeque$ArrayDequeIterator);

}

