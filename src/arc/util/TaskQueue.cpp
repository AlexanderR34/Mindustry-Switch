#include "arc/util/TaskQueue.h"
#include "java/lang/Object.h"
#include "java/util/Iterator.h"
#include "arc/struct/Seq.h"
#include "java/lang/Throwable.h"
#include "arc/util/TaskQueue.h"
#include "java/lang/Runnable.h"

extern "C" {


void mark_arc_util_TaskQueue(jobject object, jint mark, jint depth) {
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
	auto self = (arc_util_TaskQueue *) object;
	if (self->F_runnables)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_runnables)->clazz)->markFunction)((jobject) self->F_runnables, mark, depth + 1);
	if (self->F_executedRunnables)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_executedRunnables)->clazz)->markFunction)((jobject) self->F_executedRunnables, mark, depth + 1);
}

void clinit_arc_util_TaskQueue(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_util_TaskQueue(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/TaskQueue:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_TaskQueue(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(5);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(6);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((arc_util_TaskQueue *) NULL_CHECK(sp[0].o))->F_runnables = (jref) sp[1].o;
	LINE_NUMBER(7);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((arc_util_TaskQueue *) NULL_CHECK(sp[0].o))->F_executedRunnables = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_util_TaskQueue_run(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/TaskQueue:run", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(10);
	sp[0].o = (jobject)((arc_util_TaskQueue *) NULL_CHECK((frame[0].o)))->F_runnables;
	frame[1].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(11);
	sp[0].o = (jobject)((arc_util_TaskQueue *) NULL_CHECK((frame[0].o)))->F_executedRunnables;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(12);
	sp[0].o = (jobject)((arc_util_TaskQueue *) NULL_CHECK((frame[0].o)))->F_executedRunnables;
	sp[1].o = (jobject)((arc_util_TaskQueue *) NULL_CHECK((frame[0].o)))->F_runnables;
	sp[0].o = (jobject)((func_arc_struct_Seq_addAll_arc_struct_Seq_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_addAll_arc_struct_Seq_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(13);
	sp[0].o = (jobject)((arc_util_TaskQueue *) NULL_CHECK((frame[0].o)))->F_runnables;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(14);
	monitorExit(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	goto label_10;
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	frame[2].o = sp[0].o;
	monitorExit(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(2);
	INST_ATHROW();
	label_10:;
	{
	LINE_NUMBER(16);
	sp[0].o = (jobject)((arc_util_TaskQueue *) NULL_CHECK((frame[0].o)))->F_executedRunnables;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_11:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_12;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_java_lang_Runnable, sp[0].o));
	LINE_NUMBER(17);
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, (frame[2].o)))(ctx, (frame[2].o));
	LINE_NUMBER(18);
	goto label_11;
	}
label_12:;
	LINE_NUMBER(19);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_arc_util_TaskQueue_size_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/TaskQueue:size", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(22);
	sp[0].o = (jobject)((arc_util_TaskQueue *) NULL_CHECK((frame[0].o)))->F_runnables;
	popStackFrame(ctx);
	return ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size);
	}

	popStackFrame(ctx);
}

void M_arc_util_TaskQueue_clear(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/TaskQueue:clear", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(26);
	sp[0].o = (jobject)((arc_util_TaskQueue *) NULL_CHECK((frame[0].o)))->F_runnables;
	frame[1].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(27);
	sp[0].o = (jobject)((arc_util_TaskQueue *) NULL_CHECK((frame[0].o)))->F_runnables;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(28);
	monitorExit(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	goto label_8;
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	frame[2].o = sp[0].o;
	monitorExit(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(2);
	INST_ATHROW();
	label_8:;
	LINE_NUMBER(29);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_util_TaskQueue_post_java_lang_Runnable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/TaskQueue:post", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(32);
	sp[0].o = (jobject)((arc_util_TaskQueue *) NULL_CHECK((frame[0].o)))->F_runnables;
	frame[2].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(33);
	sp[0].o = (jobject)((arc_util_TaskQueue *) NULL_CHECK((frame[0].o)))->F_runnables;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(34);
	monitorExit(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	goto label_8;
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	frame[3].o = sp[0].o;
	monitorExit(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(3);
	INST_ATHROW();
	label_8:;
	LINE_NUMBER(35);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_arc_util_TaskQueue[] {
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
	(void *) M_arc_util_TaskQueue_run,
	(void *) M_arc_util_TaskQueue_size_R_int,
	(void *) M_arc_util_TaskQueue_clear,
	(void *) M_arc_util_TaskQueue_post_java_lang_Runnable,
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
	{ "run", "()V" },
	{ "size", "()I" },
	{ "clear", "()V" },
	{ "post", "(Ljava/lang/Runnable;)V" },
};

static FieldMetadata fields[] {
	{ "runnables", &class_arc_struct_Seq, offsetof(arc_util_TaskQueue, F_runnables), "Larc/struct/Seq;", 18 },
	{ "executedRunnables", &class_arc_struct_Seq, offsetof(arc_util_TaskQueue, F_executedRunnables), "Larc/struct/Seq;", 18 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_util_TaskQueue, 0, "()V", 1 },
	{ "run", (intptr_t) M_arc_util_TaskQueue_run, VTABLE_arc_util_TaskQueue_run, "()V", 1 },
	{ "size", (intptr_t) M_arc_util_TaskQueue_size_R_int, VTABLE_arc_util_TaskQueue_size_R_int, "()I", 1 },
	{ "clear", (intptr_t) M_arc_util_TaskQueue_clear, VTABLE_arc_util_TaskQueue_clear, "()V", 1 },
	{ "post", (intptr_t) M_arc_util_TaskQueue_post_java_lang_Runnable, VTABLE_arc_util_TaskQueue_post_java_lang_Runnable, "(Ljava/lang/Runnable;)V", 1 },
};

Class class_arc_util_TaskQueue{
		.nativeName = (intptr_t) "arc/util/TaskQueue",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_util_TaskQueue),
		.classVtable = (intptr_t) vtable_arc_util_TaskQueue,
		.staticInitializer = (intptr_t) clinit_arc_util_TaskQueue,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_util_TaskQueue,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 15,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_util_TaskQueue = registerClass(&class_arc_util_TaskQueue);

}
