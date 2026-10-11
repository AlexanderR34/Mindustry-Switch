#include "arc/util/Timer_Task.h"
#include "java/lang/Object.h"
#include "arc/Core.h"
#include "arc/util/Timer.h"
#include "java/lang/String.h"
#include "java/lang/IllegalStateException.h"
#include "arc/struct/Seq.h"
#include "arc/util/Timer_Task.h"
#include "java/lang/Throwable.h"
#include "arc/Application.h"
#include "java/lang/Runnable.h"

extern "C" {


void mark_arc_util_Timer$Task(jobject object, jint mark, jint depth) {
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
	auto self = (arc_util_Timer$Task *) object;
	if (self->F_app)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_app)->clazz)->markFunction)((jobject) self->F_app, mark, depth + 1);
	if (self->F_timer)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_timer)->clazz)->markFunction)((jobject) self->F_timer, mark, depth + 1);
}

void clinit_arc_util_Timer$Task(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_util_Timer$Task(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Timer$Task:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Timer$Task(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(237);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(238);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_app;
	((arc_util_Timer$Task *) NULL_CHECK(sp[0].o))->F_app = (jref) sp[1].o;
	LINE_NUMBER(239);
	sp[0].o = (jobject)((arc_util_Timer$Task *) NULL_CHECK((frame[0].o)))->F_app;
	if (sp[0].o != nullptr) goto label_3;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Core.app not available."_j))));
	throwException(ctx, sp[0].o);	}
label_3:;
	LINE_NUMBER(240);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_util_Timer$Task_cancel(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Timer$Task:cancel", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(250);
	sp[0].o = (jobject)((arc_util_Timer$Task *) NULL_CHECK((frame[0].o)))->F_timer;
	frame[1].o = sp[0].o;
	LINE_NUMBER(251);
	if ((frame[1].o) == nullptr) goto label_20;
	}
	{
	LINE_NUMBER(252);
	sp[0].o = frame[1].o;
	frame[2].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_8; }
	}
	{
	LINE_NUMBER(253);
	sp[0].o = frame[0].o;
	frame[3].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(254);
	((arc_util_Timer$Task *) NULL_CHECK((frame[0].o)))->F_executeTimeMillis = (jlong(0));
	LINE_NUMBER(255);
	((arc_util_Timer$Task *) NULL_CHECK((frame[0].o)))->F_timer = (jref) (jobject(nullptr));
	LINE_NUMBER(256);
	sp[0].o = (jobject)((arc_util_Timer *) NULL_CHECK((frame[1].o)))->F_tasks;
	jint temp0 = (jint)((func_arc_struct_Seq_remove_java_lang_Object_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_remove_java_lang_Object_boolean_R_boolean])(ctx, sp[0].o, (frame[0].o), (jint(1)));
	LINE_NUMBER(257);
	monitorExit(ctx, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	goto label_25;
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	frame[4].o = sp[0].o;
	monitorExit(ctx, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(4);
	INST_ATHROW();
	label_25:;
	{
	LINE_NUMBER(258);
	monitorExit(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	goto label_26;
label_8:;
label_11: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_8; }
	}
	{
	sp -= 1;
	frame[5].o = sp[0].o;
	monitorExit(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(5);
	INST_ATHROW();
	label_26:;
	goto label_27;
label_20:;
	{
	LINE_NUMBER(260);
	sp[0].o = frame[0].o;
	frame[2].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_15: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_14; }
	}
	{
	LINE_NUMBER(261);
	((arc_util_Timer$Task *) NULL_CHECK((frame[0].o)))->F_executeTimeMillis = (jlong(0));
	LINE_NUMBER(262);
	((arc_util_Timer$Task *) NULL_CHECK((frame[0].o)))->F_timer = (jref) (jobject(nullptr));
	LINE_NUMBER(263);
	monitorExit(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	goto label_27;
label_14:;
label_17: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_14; }
	}
	{
	sp -= 1;
	frame[6].o = sp[0].o;
	monitorExit(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(6);
	INST_ATHROW();
	label_27:;
	LINE_NUMBER(265);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_arc_util_Timer$Task_isScheduled_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Timer$Task:isScheduled", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(279);
	sp[0].o = (jobject)((arc_util_Timer$Task *) NULL_CHECK((frame[0].o)))->F_timer;
	if (sp[0].o == nullptr) goto label_1;
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

jlong M_arc_util_Timer$Task_getExecuteTimeMillis_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Timer$Task:getExecuteTimeMillis", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	{
	LINE_NUMBER(284);
	popStackFrame(ctx, self);
	return ((jlong)((arc_util_Timer$Task *) NULL_CHECK((frame[0].o)))->F_executeTimeMillis);
	}

	popStackFrame(ctx);
}

void *vtable_arc_util_Timer$Task[] {
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
	(void *) M_arc_util_Timer$Task_cancel,
	(void *) M_arc_util_Timer$Task_isScheduled_R_boolean,
	(void *) M_arc_util_Timer$Task_getExecuteTimeMillis_R_long,
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
	{ "cancel", "()V" },
	{ "isScheduled", "()Z" },
	{ "getExecuteTimeMillis", "()J" },
};

static jclass interfaces[] { &class_java_lang_Runnable, };

static FieldMetadata fields[] {
	{ "app", &class_arc_Application, offsetof(arc_util_Timer$Task, F_app), "Larc/Application;", 16 },
	{ "executeTimeMillis", &class_long, offsetof(arc_util_Timer$Task, F_executeTimeMillis), "J", 0 },
	{ "intervalMillis", &class_long, offsetof(arc_util_Timer$Task, F_intervalMillis), "J", 0 },
	{ "repeatCount", &class_int, offsetof(arc_util_Timer$Task, F_repeatCount), "I", 0 },
	{ "timer", &class_arc_util_Timer, offsetof(arc_util_Timer$Task, F_timer), "Larc/util/Timer;", 64 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_util_Timer$Task, 0, "()V", 1 },
	{ "run", 0, VTABLE_arc_util_Timer$Task_run, "()V", 1025 },
	{ "cancel", (intptr_t) M_arc_util_Timer$Task_cancel, VTABLE_arc_util_Timer$Task_cancel, "()V", 1 },
	{ "isScheduled", (intptr_t) M_arc_util_Timer$Task_isScheduled_R_boolean, VTABLE_arc_util_Timer$Task_isScheduled_R_boolean, "()Z", 1 },
	{ "getExecuteTimeMillis", (intptr_t) M_arc_util_Timer$Task_getExecuteTimeMillis_R_long, VTABLE_arc_util_Timer$Task_getExecuteTimeMillis_R_long, "()J", 33 },
};

Class class_arc_util_Timer$Task{
		.nativeName = (intptr_t) "arc/util/Timer$Task",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_util_Timer$Task),
		.classVtable = (intptr_t) vtable_arc_util_Timer$Task,
		.staticInitializer = (intptr_t) clinit_arc_util_Timer$Task,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_util_Timer$Task,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_util_Timer,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1057,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 15,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_util_Timer$Task = registerClass(&class_arc_util_Timer$Task);

}

