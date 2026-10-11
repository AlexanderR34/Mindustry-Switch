#include "arc/struct/Queue_QueueIterable_QueueIterator.h"
#include "java/lang/Object.h"
#include "arc/struct/Queue_QueueIterable.h"
#include "java/util/NoSuchElementException.h"
#include "java/util/Iterator.h"
#include "java/lang/String.h"
#include "arc/util/ArcRuntimeException.h"
#include "arc/struct/Queue_QueueIterable_QueueIterator.h"
#include "arc/struct/Queue.h"
#include "java/lang/Iterable.h"

extern "C" {


void mark_arc_struct_Queue$QueueIterable$QueueIterator(jobject object, jint mark, jint depth) {
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
	auto self = (arc_struct_Queue$QueueIterable$QueueIterator *) object;
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_arc_struct_Queue$QueueIterable$QueueIterator(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_struct_Queue$QueueIterable$QueueIterator_arc_struct_Queue$QueueIterable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Queue$QueueIterable$QueueIterator:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_Queue$QueueIterable$QueueIterator(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(539);
	((arc_struct_Queue$QueueIterable$QueueIterator *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(537);
	((arc_struct_Queue$QueueIterable$QueueIterator *) NULL_CHECK((frame[0].o)))->F_done = (jint(1));
	LINE_NUMBER(540);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_struct_Queue$QueueIterable$QueueIterator_hasNext_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Queue$QueueIterable$QueueIterator:hasNext", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(544);
	jint temp0 = (jint)((arc_struct_Queue$QueueIterable$QueueIterator *) NULL_CHECK((frame[0].o)))->F_index;
	sp[0].o = (jobject)((arc_struct_Queue$QueueIterable$QueueIterator *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((arc_struct_Queue$QueueIterable *) NULL_CHECK(sp[0].o))->F_queue;
	if (temp0 < ((jint)((arc_struct_Queue *) NULL_CHECK(sp[0].o))->F_size)) goto label_1;
	}
	{
	((arc_struct_Queue$QueueIterable$QueueIterator *) NULL_CHECK((frame[0].o)))->F_done = (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(545);
	jint temp0 = (jint)((arc_struct_Queue$QueueIterable$QueueIterator *) NULL_CHECK((frame[0].o)))->F_index;
	sp[0].o = (jobject)((arc_struct_Queue$QueueIterable$QueueIterator *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((arc_struct_Queue$QueueIterable *) NULL_CHECK(sp[0].o))->F_queue;
	if (temp0 >= ((jint)((arc_struct_Queue *) NULL_CHECK(sp[0].o))->F_size)) goto label_2;
	}
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject M_arc_struct_Queue$QueueIterable$QueueIterator_next_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Queue$QueueIterable$QueueIterator:next", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(550);
	jint temp0 = (jint)((arc_struct_Queue$QueueIterable$QueueIterator *) NULL_CHECK((frame[0].o)))->F_index;
	sp[0].o = (jobject)((arc_struct_Queue$QueueIterable$QueueIterator *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((arc_struct_Queue$QueueIterable *) NULL_CHECK(sp[0].o))->F_queue;
	if (temp0 < ((jint)((arc_struct_Queue *) NULL_CHECK(sp[0].o))->F_size)) goto label_1;
	}
	{
	clinit_java_util_NoSuchElementException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_NoSuchElementException);
	sp[1].o = (jobject)SM_java_lang_String_valueOf_int_R_java_lang_String(ctx, ((jint)((arc_struct_Queue$QueueIterable$QueueIterator *) NULL_CHECK((frame[0].o)))->F_index));
	init_java_util_NoSuchElementException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(551);
	sp[0].o = (jobject)((arc_struct_Queue$QueueIterable$QueueIterator *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((arc_struct_Queue$QueueIterable *) NULL_CHECK(sp[0].o))->F_queue;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((arc_struct_Queue$QueueIterable$QueueIterator *) NULL_CHECK(sp[1].o))->F_index;
	((arc_struct_Queue$QueueIterable$QueueIterator *) NULL_CHECK(sp[1].o))->F_index = (temp0 + (jint(1)));
	sp[0].o = (jobject)((func_arc_struct_Queue_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Queue_get_int_R_java_lang_Object])(ctx, sp[0].o, temp0);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_struct_Queue$QueueIterable$QueueIterator_remove(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Queue$QueueIterable$QueueIterator:remove", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(556);
	sp[0].o = (jobject)((arc_struct_Queue$QueueIterable$QueueIterator *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((arc_struct_Queue$QueueIterable *) NULL_CHECK(sp[0].o))->F_allowRemove) != 0) goto label_1;
	}
	{
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Remove not allowed."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(557);
	sp[0].o = frame[0].o;
	((arc_struct_Queue$QueueIterable$QueueIterator *) NULL_CHECK(sp[0].o))->F_index = (((jint)((arc_struct_Queue$QueueIterable$QueueIterator *) NULL_CHECK(sp[0].o))->F_index) - (jint(1)));
	LINE_NUMBER(558);
	sp[0].o = (jobject)((arc_struct_Queue$QueueIterable$QueueIterator *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((arc_struct_Queue$QueueIterable *) NULL_CHECK(sp[0].o))->F_queue;
	sp[0].o = (jobject)((func_arc_struct_Queue_removeIndex_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Queue_removeIndex_int_R_java_lang_Object])(ctx, sp[0].o, ((jint)((arc_struct_Queue$QueueIterable$QueueIterator *) NULL_CHECK((frame[0].o)))->F_index));
	LINE_NUMBER(559);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_struct_Queue$QueueIterable$QueueIterator_reset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Queue$QueueIterable$QueueIterator:reset", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(562);
	((arc_struct_Queue$QueueIterable$QueueIterator *) NULL_CHECK((frame[0].o)))->F_index = (jint(0));
	LINE_NUMBER(563);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_Queue$QueueIterable$QueueIterator_iterator_R_java_util_Iterator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/Queue$QueueIterable$QueueIterator:iterator", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(567);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

void *vtable_arc_struct_Queue$QueueIterable$QueueIterator[] {
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
	(void *) M_arc_struct_Queue$QueueIterable$QueueIterator_hasNext_R_boolean,
	(void *) M_arc_struct_Queue$QueueIterable$QueueIterator_next_R_java_lang_Object,
	(void *) M_arc_struct_Queue$QueueIterable$QueueIterator_remove,
	(void *) M_java_util_Iterator_forEachRemaining_java_util_function_Consumer,
	(void *) M_arc_struct_Queue$QueueIterable$QueueIterator_iterator_R_java_util_Iterator,
	(void *) M_java_lang_Iterable_forEach_java_util_function_Consumer,
	(void *) M_java_lang_Iterable_spliterator_R_java_util_Spliterator,
	(void *) M_arc_struct_Queue$QueueIterable$QueueIterator_reset,
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
	{ "iterator", "()Ljava/util/Iterator;" },
	{ "forEach", "(Ljava/util/function/Consumer;)V" },
	{ "spliterator", "()Ljava/util/Spliterator;" },
	{ "reset", "()V" },
};

static jclass interfaces[] { &class_java_util_Iterator, &class_java_lang_Iterable, };

static FieldMetadata fields[] {
	{ "index", &class_int, offsetof(arc_struct_Queue$QueueIterable$QueueIterator, F_index), "I", 0 },
	{ "done", &class_boolean, offsetof(arc_struct_Queue$QueueIterable$QueueIterator, F_done), "Z", 0 },
	{ "this$0", &class_arc_struct_Queue$QueueIterable, offsetof(arc_struct_Queue$QueueIterable$QueueIterator, F_this$0), "Larc/struct/Queue$QueueIterable;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_struct_Queue$QueueIterable$QueueIterator_arc_struct_Queue$QueueIterable, 0, "(Larc/struct/Queue$QueueIterable;)V", 0 },
	{ "hasNext", (intptr_t) M_arc_struct_Queue$QueueIterable$QueueIterator_hasNext_R_boolean, VTABLE_arc_struct_Queue$QueueIterable$QueueIterator_hasNext_R_boolean, "()Z", 1 },
	{ "next", (intptr_t) M_arc_struct_Queue$QueueIterable$QueueIterator_next_R_java_lang_Object, VTABLE_arc_struct_Queue$QueueIterable$QueueIterator_next_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "remove", (intptr_t) M_arc_struct_Queue$QueueIterable$QueueIterator_remove, VTABLE_arc_struct_Queue$QueueIterable$QueueIterator_remove, "()V", 1 },
	{ "reset", (intptr_t) M_arc_struct_Queue$QueueIterable$QueueIterator_reset, VTABLE_arc_struct_Queue$QueueIterable$QueueIterator_reset, "()V", 1 },
	{ "iterator", (intptr_t) M_arc_struct_Queue$QueueIterable$QueueIterator_iterator_R_java_util_Iterator, VTABLE_arc_struct_Queue$QueueIterable$QueueIterator_iterator_R_java_util_Iterator, "()Ljava/util/Iterator;", 1 },
};

Class class_arc_struct_Queue$QueueIterable$QueueIterator{
		.nativeName = (intptr_t) "arc/struct/Queue$QueueIterable$QueueIterator",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_struct_Queue$QueueIterable$QueueIterator),
		.classVtable = (intptr_t) vtable_arc_struct_Queue$QueueIterable$QueueIterator,
		.staticInitializer = (intptr_t) clinit_arc_struct_Queue$QueueIterable$QueueIterator,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_struct_Queue$QueueIterable$QueueIterator,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_struct_Queue$QueueIterable,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 2,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 19,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_struct_Queue$QueueIterable$QueueIterator = registerClass(&class_arc_struct_Queue$QueueIterable$QueueIterator);

}

