#include "java/lang/ref/ReferenceQueue.h"
#include "java/lang/Object.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/String.h"
#include "java/lang/ref/ReferenceQueue.h"
#include "java/lang/ref/Reference.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/io/UnsupportedOperationException.h"
#include "java/lang/System.h"

extern "C" {

jint SF_java_lang_ref_ReferenceQueue_NANOS_PER_MILLI;
jobject SF_java_lang_ref_ReferenceQueue_unenqueued;

void mark_java_lang_ref_ReferenceQueue(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_java_lang_ref_ReferenceQueue_unenqueued)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_lang_ref_ReferenceQueue_unenqueued)->clazz)->markFunction)((jobject) SF_java_lang_ref_ReferenceQueue_unenqueued, mark, depth + 1);
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
	auto self = (java_lang_ref_ReferenceQueue *) object;
	if (self->F_head)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_head)->clazz)->markFunction)((jobject) self->F_head, mark, depth + 1);
}

void init_java_lang_ref_ReferenceQueue(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ref/ReferenceQueue:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_ref_ReferenceQueue(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(37);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(38);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_lang_ref_ReferenceQueue_poll_R_java_lang_ref_Reference(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ref/ReferenceQueue:poll", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	{
	LINE_NUMBER(49);
	popStackFrame(ctx, self);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_java_lang_ref_ReferenceQueue_remove_R_java_lang_ref_Reference(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ref/ReferenceQueue:remove", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(76);
	sp[0].o = (jobject)((func_java_lang_ref_ReferenceQueue_remove_long_R_java_lang_ref_Reference) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_ref_ReferenceQueue_remove_long_R_java_lang_ref_Reference])(ctx, (frame[0].o), (jlong(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_lang_ref_ReferenceQueue_remove_long_R_java_lang_ref_Reference(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[18];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ref/ReferenceQueue:remove", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(94);
	if ((longCompare((frame[1].l), (jlong(0)))) >= 0) goto label_1;
	}
	{
	LINE_NUMBER(95);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"timeout < 0: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_long_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_long_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].l));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(98);
	sp[0].o = (jobject)((java_lang_ref_ReferenceQueue *) NULL_CHECK((frame[0].o)))->F_head;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(99);
	sp[0].o = (jobject)((func_java_lang_ref_ReferenceQueue_poll_R_java_lang_ref_Reference) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_ref_ReferenceQueue_poll_R_java_lang_ref_Reference])(ctx, (frame[0].o));
	popStackFrame(ctx, self);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(103);
	if ((longCompare((frame[1].l), (jlong(0)))) == 0) goto label_5;
	}
	{
	if ((longCompare((frame[1].l), (jlong(9223372036854ll)))) <= 0) goto label_6;
	}
label_5:;
	{
	LINE_NUMBER(105);
	((func_java_lang_Object_wait_long) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_wait_long])(ctx, (frame[0].o), (jlong(0)));
	LINE_NUMBER(106);
	sp[0].o = (jobject)((java_lang_ref_ReferenceQueue *) NULL_CHECK((frame[0].o)))->F_head;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	LINE_NUMBER(107);
	sp[0].o = (jobject)((func_java_lang_ref_ReferenceQueue_poll_R_java_lang_ref_Reference) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_ref_ReferenceQueue_poll_R_java_lang_ref_Reference])(ctx, (frame[0].o));
	popStackFrame(ctx, self);
	return sp[0].o;
	}
label_6:;
	{
	LINE_NUMBER(111);
	frame[3].l = ((frame[1].l) * (jlong(1000000ll)));
	LINE_NUMBER(112);
	frame[5].i = (jint(0));
	LINE_NUMBER(115);
	jlong temp0 = (jlong)SM_java_lang_System_nanoTime_R_long(ctx);
	frame[6].l = temp0;
	}
label_11:;
	{
	LINE_NUMBER(117);
	((func_java_lang_Object_wait_long_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_wait_long_int])(ctx, (frame[0].o), (frame[1].l), (frame[5].i));
	LINE_NUMBER(118);
	sp[0].o = (jobject)((java_lang_ref_ReferenceQueue *) NULL_CHECK((frame[0].o)))->F_head;
	if (sp[0].o == nullptr) goto label_13;
	}
	LINE_NUMBER(119);
	goto label_15;
label_13:;
	{
	LINE_NUMBER(121);
	jlong temp0 = (jlong)SM_java_lang_System_nanoTime_R_long(ctx);
	frame[8].l = (temp0 - (frame[6].l));
	LINE_NUMBER(122);
	frame[10].l = ((frame[3].l) - (frame[8].l));
	LINE_NUMBER(123);
	if ((longCompare((frame[10].l), (jlong(0)))) > 0) goto label_18;
	}
	LINE_NUMBER(124);
	goto label_15;
label_18:;
	{
	LINE_NUMBER(126);
	frame[1].l = ((frame[10].l) / (jlong(1000000ll)));
	LINE_NUMBER(127);
	frame[5].i = (jint(((frame[10].l) - ((frame[1].l) * (jlong(1000000ll))))));
	LINE_NUMBER(128);
	goto label_11;
	}
label_15:;
	{
	LINE_NUMBER(129);
	sp[0].o = (jobject)((func_java_lang_ref_ReferenceQueue_poll_R_java_lang_ref_Reference) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_ref_ReferenceQueue_poll_R_java_lang_ref_Reference])(ctx, (frame[0].o));
	popStackFrame(ctx, self);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_java_lang_ref_ReferenceQueue_enqueue_java_lang_ref_Reference(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ref/ReferenceQueue:enqueue", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(139);
	clinit_java_io_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_UnsupportedOperationException);
	init_java_io_UnsupportedOperationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void SM_java_lang_ref_ReferenceQueue_add_java_lang_ref_Reference(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ref/ReferenceQueue:add", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_ref_ReferenceQueue(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(153);
	clinit_java_io_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_UnsupportedOperationException);
	init_java_io_UnsupportedOperationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void clinit_java_lang_ref_ReferenceQueue(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_java_lang_ref_ReferenceQueue_NANOS_PER_MILLI = jint(1000000);
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ref/ReferenceQueue:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_ref_ReferenceQueue(ctx);
	{
	LINE_NUMBER(150);
	clinit_java_lang_ref_ReferenceQueue(ctx);
	SF_java_lang_ref_ReferenceQueue_unenqueued = (jobject(nullptr));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_lang_ref_ReferenceQueue[] {
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
	(void *) M_java_lang_ref_ReferenceQueue_poll_R_java_lang_ref_Reference,
	(void *) M_java_lang_ref_ReferenceQueue_remove_R_java_lang_ref_Reference,
	(void *) M_java_lang_ref_ReferenceQueue_remove_long_R_java_lang_ref_Reference,
	(void *) M_java_lang_ref_ReferenceQueue_enqueue_java_lang_ref_Reference,
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
	{ "poll", "()Ljava/lang/ref/Reference;" },
	{ "remove", "()Ljava/lang/ref/Reference;" },
	{ "remove", "(J)Ljava/lang/ref/Reference;" },
	{ "enqueue", "(Ljava/lang/ref/Reference;)V" },
};

static FieldMetadata fields[] {
	{ "NANOS_PER_MILLI", &class_int, (intptr_t) &SF_java_lang_ref_ReferenceQueue_NANOS_PER_MILLI, "I", 26 },
	{ "head", &class_java_lang_ref_Reference, offsetof(java_lang_ref_ReferenceQueue, F_head), "Ljava/lang/ref/Reference;", 2 },
	{ "unenqueued", &class_java_lang_ref_Reference, (intptr_t) &SF_java_lang_ref_ReferenceQueue_unenqueued, "Ljava/lang/ref/Reference;", 9 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_lang_ref_ReferenceQueue, 0, "()V", 1 },
	{ "poll", (intptr_t) M_java_lang_ref_ReferenceQueue_poll_R_java_lang_ref_Reference, VTABLE_java_lang_ref_ReferenceQueue_poll_R_java_lang_ref_Reference, "()Ljava/lang/ref/Reference;", 33 },
	{ "remove", (intptr_t) M_java_lang_ref_ReferenceQueue_remove_R_java_lang_ref_Reference, VTABLE_java_lang_ref_ReferenceQueue_remove_R_java_lang_ref_Reference, "()Ljava/lang/ref/Reference;", 1 },
	{ "remove", (intptr_t) M_java_lang_ref_ReferenceQueue_remove_long_R_java_lang_ref_Reference, VTABLE_java_lang_ref_ReferenceQueue_remove_long_R_java_lang_ref_Reference, "(J)Ljava/lang/ref/Reference;", 33 },
	{ "enqueue", (intptr_t) M_java_lang_ref_ReferenceQueue_enqueue_java_lang_ref_Reference, VTABLE_java_lang_ref_ReferenceQueue_enqueue_java_lang_ref_Reference, "(Ljava/lang/ref/Reference;)V", 32 },
	{ "add", (intptr_t) SM_java_lang_ref_ReferenceQueue_add_java_lang_ref_Reference, 0, "(Ljava/lang/ref/Reference;)V", 8 },
	{ "<clinit>", (intptr_t) clinit_java_lang_ref_ReferenceQueue, 0, "()V", 8 },
};

Class class_java_lang_ref_ReferenceQueue{
		.nativeName = (intptr_t) "java/lang/ref/ReferenceQueue",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_lang_ref_ReferenceQueue),
		.classVtable = (intptr_t) vtable_java_lang_ref_ReferenceQueue,
		.staticInitializer = (intptr_t) clinit_java_lang_ref_ReferenceQueue,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_lang_ref_ReferenceQueue,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 7,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 15,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_lang_ref_ReferenceQueue = registerClass(&class_java_lang_ref_ReferenceQueue);

}
