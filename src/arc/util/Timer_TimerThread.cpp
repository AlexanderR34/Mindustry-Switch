#include "arc/util/Timer_TimerThread.h"
#include "arc/Core.h"
#include "java/lang/StringBuilder.h"
#include "arc/Files.h"
#include "java/lang/InterruptedException.h"
#include "arc/util/Timer_TimerThread.h"
#include "arc/Application.h"
#include "java/lang/Runnable.h"
#include "java/lang/Object.h"
#include "arc/util/Timer.h"
#include "java/lang/String.h"
#include "arc/ApplicationListener.h"
#include "arc/util/ArcRuntimeException.h"
#include "arc/struct/Seq.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "java/lang/System.h"
#include "java/lang/Thread.h"

extern "C" {


void mark_arc_util_Timer$TimerThread(jobject object, jint mark, jint depth) {
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
	auto self = (arc_util_Timer$TimerThread *) object;
	if (self->F_files)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_files)->clazz)->markFunction)((jobject) self->F_files, mark, depth + 1);
	if (self->F_instances)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_instances)->clazz)->markFunction)((jobject) self->F_instances, mark, depth + 1);
	if (self->F_instance)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_instance)->clazz)->markFunction)((jobject) self->F_instance, mark, depth + 1);
}

void clinit_arc_util_Timer$TimerThread(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_util_Timer$TimerThread(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Timer$TimerThread:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Timer$TimerThread(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(298);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(294);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq_int(ctx, sp[1].o, (jint(1)));
	((arc_util_Timer$TimerThread *) NULL_CHECK(sp[0].o))->F_instances = (jref) sp[1].o;
	LINE_NUMBER(299);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_files;
	((arc_util_Timer$TimerThread *) NULL_CHECK(sp[0].o))->F_files = (jref) sp[1].o;
	LINE_NUMBER(300);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	((func_arc_Application_addListener_arc_ApplicationListener) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_addListener_arc_ApplicationListener, sp[0].o))(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(301);
	((func_arc_util_Timer$TimerThread_resume) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_Timer$TimerThread_resume])(ctx, (frame[0].o));
	LINE_NUMBER(303);
	clinit_java_lang_Thread(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_Thread);
	init_java_lang_Thread_java_lang_Runnable_java_lang_String(ctx, sp[0].o, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Timer"_j))));
	frame[1].o = sp[0].o;
	LINE_NUMBER(304);
	((func_java_lang_Thread_setDaemon_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Thread_setDaemon_boolean])(ctx, (frame[1].o), (jint(1)));
	LINE_NUMBER(305);
	((func_java_lang_Thread_start) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Thread_start])(ctx, (frame[1].o));
	LINE_NUMBER(306);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_util_Timer$TimerThread_run(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Timer$TimerThread:run", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
label_19:;
	{
	LINE_NUMBER(311);
	clinit_arc_util_Timer(ctx);
	sp[0].o = (jobject)SF_arc_util_Timer_threadLock;
	frame[1].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_11: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_10; }
	}
	{
	LINE_NUMBER(312);
	clinit_arc_util_Timer(ctx);
	sp[0].o = (jobject)SF_arc_util_Timer_thread;
	if (sp[0].o != (frame[0].o)) goto label_20;
	}
	{
	sp[0].o = (jobject)((arc_util_Timer$TimerThread *) NULL_CHECK((frame[0].o)))->F_files;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_files;
	if (sp[0].o == sp[1].o) { popExceptionFrames(frameRef, 1); goto label_12; }
	}
label_20:;
	INST_ALOAD(1);
	INST_MONITOREXIT();
	popExceptionFrame(frameRef);
	goto label_21;
label_12:;
label_14: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_10; }
	}
	{
	LINE_NUMBER(314);
	frame[2].l = (jlong(5000ll));
	LINE_NUMBER(315);
	if ((longCompare(((jlong)((arc_util_Timer$TimerThread *) NULL_CHECK((frame[0].o)))->F_pauseMillis), (jlong(0)))) != 0) goto label_23;
	}
	{
	LINE_NUMBER(316);
	jlong temp0 = (jlong)SM_java_lang_System_nanoTime_R_long(ctx);
	frame[4].l = (temp0 / (jlong(1000000ll)));
	LINE_NUMBER(317);
	frame[6].i = (jint(0));
	sp[0].o = (jobject)((arc_util_Timer$TimerThread *) NULL_CHECK((frame[0].o)))->F_instances;
	frame[7].i = ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size);
	}
label_27:;
	{
	if ((frame[6].i) >= (frame[7].i)) goto label_23;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(319);
	sp[0].o = (jobject)((arc_util_Timer$TimerThread *) NULL_CHECK((frame[0].o)))->F_instances;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[6].i));
	jlong temp0 = (jlong)((func_arc_util_Timer_update_long_long_R_long) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_util_Timer, sp[0].o)))->vtable)[VTABLE_arc_util_Timer_update_long_long_R_long])(ctx, (checkCast(ctx, &class_arc_util_Timer, sp[0].o)), (frame[4].l), (frame[2].l));
	frame[2].l = temp0;
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(322);
	goto label_28;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(320);
	frame[8].o = sp[0].o;
	LINE_NUMBER(321);
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Task failed: "_j))));
	sp[2].o = (jobject)((arc_util_Timer$TimerThread *) NULL_CHECK((frame[0].o)))->F_instances;
	sp[2].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[2].o, (frame[6].i));
	sp[2].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_util_Timer, sp[2].o)))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (checkCast(ctx, &class_arc_util_Timer, sp[2].o)));
	sp[2].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_arc_util_ArcRuntimeException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, sp[1].o, (frame[8].o));
	throwException(ctx, sp[0].o);	}
label_28:;
	{
	LINE_NUMBER(317);
	INST_IINC(6, 1);
	goto label_27;
	}
label_23:;
	{
	LINE_NUMBER(326);
	clinit_arc_util_Timer(ctx);
	sp[0].o = (jobject)SF_arc_util_Timer_thread;
	if (sp[0].o != (frame[0].o)) goto label_30;
	}
	{
	sp[0].o = (jobject)((arc_util_Timer$TimerThread *) NULL_CHECK((frame[0].o)))->F_files;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_files;
	if (sp[0].o == sp[1].o) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
label_30:;
	INST_ALOAD(1);
	INST_MONITOREXIT();
	popExceptionFrame(frameRef);
	goto label_21;
label_4:;
label_16: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_10; }
	}
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_InterruptedException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	LINE_NUMBER(329);
	if ((longCompare((frame[2].l), (jlong(0)))) <= 0) goto label_5;
	}
	{
	clinit_arc_util_Timer(ctx);
	sp[0].o = (jobject)SF_arc_util_Timer_threadLock;
	((func_java_lang_Object_wait_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_wait_long])(ctx, sp[0].o, (frame[2].l));
	}
label_5:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(331);
	goto label_31;
label_6:;
	LINE_NUMBER(330);
	INST_ASTORE(4);
label_31:;
	{
	LINE_NUMBER(332);
	monitorExit(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	goto label_32;
label_10:;
label_18: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_10; }
	}
	{
	sp -= 1;
	frame[9].o = sp[0].o;
	monitorExit(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(9);
	INST_ATHROW();
	label_32:;
	goto label_19;
label_21:;
	{
	LINE_NUMBER(334);
	((func_arc_util_Timer$TimerThread_dispose) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_Timer$TimerThread_dispose])(ctx, (frame[0].o));
	LINE_NUMBER(335);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_util_Timer$TimerThread_resume(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Timer$TimerThread:resume", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(339);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	jint temp0 = (jint)((func_arc_Application_isDesktop_R_boolean) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_isDesktop_R_boolean, sp[0].o))(ctx, sp[0].o);
	if (temp0 == 0) goto label_7;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_7:;
	{
	LINE_NUMBER(340);
	clinit_arc_util_Timer(ctx);
	sp[0].o = (jobject)SF_arc_util_Timer_threadLock;
	frame[1].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(341);
	jlong temp0 = (jlong)SM_java_lang_System_nanoTime_R_long(ctx);
	frame[2].l = ((temp0 / (jlong(1000000ll))) - ((jlong)((arc_util_Timer$TimerThread *) NULL_CHECK((frame[0].o)))->F_pauseMillis));
	LINE_NUMBER(342);
	frame[4].i = (jint(0));
	sp[0].o = (jobject)((arc_util_Timer$TimerThread *) NULL_CHECK((frame[0].o)))->F_instances;
	frame[5].i = ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size);
	}
label_10:;
	{
	if ((frame[4].i) >= (frame[5].i)) goto label_11;
	}
	{
	LINE_NUMBER(343);
	sp[0].o = (jobject)((arc_util_Timer$TimerThread *) NULL_CHECK((frame[0].o)))->F_instances;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[4].i));
	((func_arc_util_Timer_delay_long) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_util_Timer, sp[0].o)))->vtable)[VTABLE_arc_util_Timer_delay_long])(ctx, (checkCast(ctx, &class_arc_util_Timer, sp[0].o)), (frame[2].l));
	LINE_NUMBER(342);
	INST_IINC(4, 1);
	goto label_10;
	}
label_11:;
	{
	LINE_NUMBER(344);
	((arc_util_Timer$TimerThread *) NULL_CHECK((frame[0].o)))->F_pauseMillis = (jlong(0));
	LINE_NUMBER(345);
	clinit_arc_util_Timer(ctx);
	sp[0].o = (jobject)SF_arc_util_Timer_threadLock;
	((func_java_lang_Object_notifyAll) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_notifyAll])(ctx, sp[0].o);
	LINE_NUMBER(346);
	monitorExit(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	goto label_16;
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	frame[6].o = sp[0].o;
	monitorExit(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(6);
	INST_ATHROW();
	label_16:;
	LINE_NUMBER(347);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_util_Timer$TimerThread_pause(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Timer$TimerThread:pause", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(352);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	jint temp0 = (jint)((func_arc_Application_isDesktop_R_boolean) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_isDesktop_R_boolean, sp[0].o))(ctx, sp[0].o);
	if (temp0 == 0) goto label_7;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_7:;
	{
	LINE_NUMBER(353);
	clinit_arc_util_Timer(ctx);
	sp[0].o = (jobject)SF_arc_util_Timer_threadLock;
	frame[1].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(354);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)SM_java_lang_System_nanoTime_R_long(ctx);
	((arc_util_Timer$TimerThread *) NULL_CHECK(sp[0].o))->F_pauseMillis = (temp0 / (jlong(1000000ll)));
	LINE_NUMBER(355);
	clinit_arc_util_Timer(ctx);
	sp[0].o = (jobject)SF_arc_util_Timer_threadLock;
	((func_java_lang_Object_notifyAll) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_notifyAll])(ctx, sp[0].o);
	LINE_NUMBER(356);
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
	LINE_NUMBER(357);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_util_Timer$TimerThread_dispose(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Timer$TimerThread:dispose", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(361);
	clinit_arc_util_Timer(ctx);
	sp[0].o = (jobject)SF_arc_util_Timer_threadLock;
	frame[1].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(362);
	clinit_arc_util_Timer(ctx);
	sp[0].o = (jobject)SF_arc_util_Timer_thread;
	if (sp[0].o != (frame[0].o)) goto label_7;
	}
	INST_ACONST_NULL();
	clinit_arc_util_Timer(ctx);
	SF_arc_util_Timer_thread = (--sp)->o;
label_7:;
	{
	LINE_NUMBER(363);
	sp[0].o = (jobject)((arc_util_Timer$TimerThread *) NULL_CHECK((frame[0].o)))->F_instances;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(364);
	clinit_arc_util_Timer(ctx);
	sp[0].o = (jobject)SF_arc_util_Timer_threadLock;
	((func_java_lang_Object_notifyAll) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_notifyAll])(ctx, sp[0].o);
	LINE_NUMBER(365);
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
	LINE_NUMBER(366);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	((func_arc_Application_removeListener_arc_ApplicationListener) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_removeListener_arc_ApplicationListener, sp[0].o))(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(367);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_util_Timer$TimerThread[] {
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
	(void *) M_arc_util_Timer$TimerThread_run,
	(void *) M_arc_ApplicationListener_init,
	(void *) M_arc_ApplicationListener_resize_int_int,
	(void *) M_arc_ApplicationListener_update,
	(void *) M_arc_util_Timer$TimerThread_pause,
	(void *) M_arc_util_Timer$TimerThread_resume,
	(void *) M_arc_util_Timer$TimerThread_dispose,
	(void *) M_arc_ApplicationListener_exit,
	(void *) M_arc_ApplicationListener_fileDropped_arc_files_Fi,
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
	{ "init", "()V" },
	{ "resize", "(II)V" },
	{ "update", "()V" },
	{ "pause", "()V" },
	{ "resume", "()V" },
	{ "dispose", "()V" },
	{ "exit", "()V" },
	{ "fileDropped", "(Larc/files/Fi;)V" },
};

static jclass interfaces[] { &class_java_lang_Runnable, &class_arc_ApplicationListener, };

static FieldMetadata fields[] {
	{ "files", &class_arc_Files, offsetof(arc_util_Timer$TimerThread, F_files), "Larc/Files;", 16 },
	{ "instances", &class_arc_struct_Seq, offsetof(arc_util_Timer$TimerThread, F_instances), "Larc/struct/Seq;", 16 },
	{ "instance", &class_arc_util_Timer, offsetof(arc_util_Timer$TimerThread, F_instance), "Larc/util/Timer;", 0 },
	{ "pauseMillis", &class_long, offsetof(arc_util_Timer$TimerThread, F_pauseMillis), "J", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_util_Timer$TimerThread, 0, "()V", 1 },
	{ "run", (intptr_t) M_arc_util_Timer$TimerThread_run, VTABLE_arc_util_Timer$TimerThread_run, "()V", 1 },
	{ "resume", (intptr_t) M_arc_util_Timer$TimerThread_resume, VTABLE_arc_util_Timer$TimerThread_resume, "()V", 1 },
	{ "pause", (intptr_t) M_arc_util_Timer$TimerThread_pause, VTABLE_arc_util_Timer$TimerThread_pause, "()V", 1 },
	{ "dispose", (intptr_t) M_arc_util_Timer$TimerThread_dispose, VTABLE_arc_util_Timer$TimerThread_dispose, "()V", 1 },
};

Class class_arc_util_Timer$TimerThread{
		.nativeName = (intptr_t) "arc/util/Timer$TimerThread",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_util_Timer$TimerThread),
		.classVtable = (intptr_t) vtable_arc_util_Timer$TimerThread,
		.staticInitializer = (intptr_t) clinit_arc_util_Timer$TimerThread,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_util_Timer$TimerThread,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_util_Timer,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 2,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 20,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_util_Timer$TimerThread = registerClass(&class_arc_util_Timer$TimerThread);

}

