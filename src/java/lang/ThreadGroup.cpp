#include "java/lang/ThreadGroup.h"
#include "java/lang/Math.h"
#include "java/lang/reflect/Field.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/ThreadDeath.h"
#include "java/lang/ThreadGroup.h"
#include "java/lang/annotation/Annotation.h"
#include "java/lang/Void.h"
#include "java/lang/Thread_UncaughtExceptionHandler.h"
#include "java/lang/reflect/Constructor.h"
#include "java/io/PrintStream.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/util/Arrays.h"
#include "java/lang/reflect/Method.h"
#include "java/lang/IllegalThreadStateException.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "java/lang/System.h"
#include "java/lang/Thread.h"
#include "java/lang/Deprecated.h"

extern "C" {


void mark_java_lang_ThreadGroup(jobject object, jint mark, jint depth) {
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
	auto self = (java_lang_ThreadGroup *) object;
	if (self->F_parent)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_parent)->clazz)->markFunction)((jobject) self->F_parent, mark, depth + 1);
	if (self->F_name)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_name)->clazz)->markFunction)((jobject) self->F_name, mark, depth + 1);
	if (self->F_threads)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_threads)->clazz)->markFunction)((jobject) self->F_threads, mark, depth + 1);
	if (self->F_groups)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_groups)->clazz)->markFunction)((jobject) self->F_groups, mark, depth + 1);
}

void clinit_java_lang_ThreadGroup(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_java_lang_ThreadGroup(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ThreadGroup:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_ThreadGroup(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(74);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(63);
	((java_lang_ThreadGroup *) NULL_CHECK((frame[0].o)))->F_nUnstartedThreads = (jint(0));
	LINE_NUMBER(75);
	((java_lang_ThreadGroup *) NULL_CHECK((frame[0].o)))->F_name = (jref) (((jobject) createStringLiteral(ctx, u8"system"_j)));
	LINE_NUMBER(76);
	((java_lang_ThreadGroup *) NULL_CHECK((frame[0].o)))->F_maxPriority = (10);
	LINE_NUMBER(77);
	((java_lang_ThreadGroup *) NULL_CHECK((frame[0].o)))->F_parent = (jref) (jobject(nullptr));
	LINE_NUMBER(78);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_lang_ThreadGroup_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ThreadGroup:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_ThreadGroup(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(94);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_lang_Thread_currentThread_R_java_lang_Thread(ctx);
	sp[1].o = (jobject)((func_java_lang_Thread_getThreadGroup_R_java_lang_ThreadGroup) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_Thread_getThreadGroup_R_java_lang_ThreadGroup])(ctx, sp[1].o);
	init_java_lang_ThreadGroup_java_lang_ThreadGroup_java_lang_String(ctx, sp[0].o, sp[1].o, (frame[1].o));
	LINE_NUMBER(95);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_lang_ThreadGroup_java_lang_ThreadGroup_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ThreadGroup:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_ThreadGroup(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(115);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_lang_ThreadGroup_checkParentAccess_java_lang_ThreadGroup_R_java_lang_Void(ctx, (frame[1].o));
	init_java_lang_ThreadGroup_java_lang_Void_java_lang_ThreadGroup_java_lang_String(ctx, sp[0].o, sp[1].o, (frame[1].o), (frame[2].o));
	LINE_NUMBER(116);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_lang_ThreadGroup_java_lang_Void_java_lang_ThreadGroup_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ThreadGroup:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_ThreadGroup(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(118);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(63);
	((java_lang_ThreadGroup *) NULL_CHECK((frame[0].o)))->F_nUnstartedThreads = (jint(0));
	LINE_NUMBER(119);
	((java_lang_ThreadGroup *) NULL_CHECK((frame[0].o)))->F_name = (jref) (frame[3].o);
	LINE_NUMBER(120);
	((java_lang_ThreadGroup *) NULL_CHECK((frame[0].o)))->F_maxPriority = ((jint)((java_lang_ThreadGroup *) NULL_CHECK((frame[2].o)))->F_maxPriority);
	LINE_NUMBER(121);
	((java_lang_ThreadGroup *) NULL_CHECK((frame[0].o)))->F_daemon = ((jint)((java_lang_ThreadGroup *) NULL_CHECK((frame[2].o)))->F_daemon);
	LINE_NUMBER(122);
	((java_lang_ThreadGroup *) NULL_CHECK((frame[0].o)))->F_parent = (jref) (frame[2].o);
	LINE_NUMBER(123);
	M_java_lang_ThreadGroup_add_java_lang_ThreadGroup(ctx, (frame[2].o), (frame[0].o));
	LINE_NUMBER(124);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_java_lang_ThreadGroup_checkParentAccess_java_lang_ThreadGroup_R_java_lang_Void(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ThreadGroup:checkParentAccess", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_ThreadGroup(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(132);
	((func_java_lang_ThreadGroup_checkAccess) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_ThreadGroup_checkAccess])(ctx, (frame[0].o));
	LINE_NUMBER(133);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_java_lang_ThreadGroup_getName_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ThreadGroup:getName", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(143);
	sp[0].o = (jobject)((java_lang_ThreadGroup *) NULL_CHECK((frame[0].o)))->F_name;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_lang_ThreadGroup_getParent_R_java_lang_ThreadGroup(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ThreadGroup:getParent", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(163);
	sp[0].o = (jobject)((java_lang_ThreadGroup *) NULL_CHECK((frame[0].o)))->F_parent;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(164);
	sp[0].o = (jobject)((java_lang_ThreadGroup *) NULL_CHECK((frame[0].o)))->F_parent;
	((func_java_lang_ThreadGroup_checkAccess) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_ThreadGroup_checkAccess])(ctx, sp[0].o);
	}
label_1:;
	{
	LINE_NUMBER(165);
	sp[0].o = (jobject)((java_lang_ThreadGroup *) NULL_CHECK((frame[0].o)))->F_parent;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_java_lang_ThreadGroup_getMaxPriority_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ThreadGroup:getMaxPriority", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(179);
	popStackFrame(ctx);
	return ((jint)((java_lang_ThreadGroup *) NULL_CHECK((frame[0].o)))->F_maxPriority);
	}

	popStackFrame(ctx);
}

jbool M_java_lang_ThreadGroup_isDaemon_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ThreadGroup:isDaemon", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(192);
	popStackFrame(ctx);
	return ((jint)((java_lang_ThreadGroup *) NULL_CHECK((frame[0].o)))->F_daemon);
	}

	popStackFrame(ctx);
}

jbool M_java_lang_ThreadGroup_isDestroyed_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ThreadGroup:isDestroyed", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	{
	LINE_NUMBER(202);
	popStackFrame(ctx, self);
	return ((jint)((java_lang_ThreadGroup *) NULL_CHECK((frame[0].o)))->F_destroyed);
	}

	popStackFrame(ctx);
}

void M_java_lang_ThreadGroup_setDaemon_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ThreadGroup:setDaemon", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(224);
	((func_java_lang_ThreadGroup_checkAccess) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_ThreadGroup_checkAccess])(ctx, (frame[0].o));
	LINE_NUMBER(225);
	((java_lang_ThreadGroup *) NULL_CHECK((frame[0].o)))->F_daemon = (frame[1].i);
	LINE_NUMBER(226);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_lang_ThreadGroup_setMaxPriority_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ThreadGroup:setMaxPriority", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(259);
	sp[0].o = frame[0].o;
	frame[4].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(260);
	((func_java_lang_ThreadGroup_checkAccess) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_ThreadGroup_checkAccess])(ctx, (frame[0].o));
	LINE_NUMBER(261);
	if ((frame[1].i) < (jint(1))) goto label_11;
	}
	{
	if ((frame[1].i) <= (10)) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
label_11:;
	{
	LINE_NUMBER(262);
	monitorExit(ctx, (frame[4].o));
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_RETURN();
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(264);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_lang_ThreadGroup *) NULL_CHECK((frame[0].o)))->F_parent;
	sp += 1;
	if (sp[0].o == nullptr) goto label_12;
	}
	{
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((java_lang_ThreadGroup *) NULL_CHECK((frame[0].o)))->F_parent;
	jint temp1 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp0, ((jint)((java_lang_ThreadGroup *) NULL_CHECK(sp[0].o))->F_maxPriority));
	sp[0].i = temp1;
	sp += 1;
	goto label_13;
	}
label_12:;
	INST_ILOAD(1);
label_13:;
	{
	sp -= 2;
	((java_lang_ThreadGroup *) NULL_CHECK(sp[0].o))->F_maxPriority = sp[1].i;
	LINE_NUMBER(265);
	frame[2].i = ((jint)((java_lang_ThreadGroup *) NULL_CHECK((frame[0].o)))->F_ngroups);
	LINE_NUMBER(266);
	sp[0].o = (jobject)((java_lang_ThreadGroup *) NULL_CHECK((frame[0].o)))->F_groups;
	if (sp[0].o == nullptr) goto label_16;
	}
	{
	LINE_NUMBER(267);
	sp[0].o = (jobject)((java_lang_ThreadGroup *) NULL_CHECK((frame[0].o)))->F_groups;
	sp[0].o = (jobject)SM_java_util_Arrays_copyOf_Array1_java_lang_Object_int_R_Array1_java_lang_Object(ctx, sp[0].o, (frame[2].i));
	frame[3].o = (checkCast(ctx, getArrayClass(&class_java_lang_ThreadGroup, 1), sp[0].o));
	goto label_19;
	}
label_16:;
	{
	LINE_NUMBER(269);
	frame[3].o = (jobject(nullptr));
	}
label_19:;
	{
	LINE_NUMBER(271);
	monitorExit(ctx, (frame[4].o));
	}
	popExceptionFrame(frameRef);
	goto label_20;
label_2:;
label_8: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	frame[5].o = sp[0].o;
	monitorExit(ctx, (frame[4].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(5);
	INST_ATHROW();
	label_20:;
	{
	LINE_NUMBER(272);
	frame[4].i = (jint(0));
	}
label_21:;
	{
	if ((frame[4].i) >= (frame[2].i)) goto label_22;
	}
	{
	LINE_NUMBER(273);
	((func_java_lang_ThreadGroup_setMaxPriority_int) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i))))->vtable)[VTABLE_java_lang_ThreadGroup_setMaxPriority_int])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i))), (frame[1].i));
	LINE_NUMBER(272);
	INST_IINC(4, 1);
	goto label_21;
	}
label_22:;
	LINE_NUMBER(275);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_java_lang_ThreadGroup_parentOf_java_lang_ThreadGroup_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ThreadGroup:parentOf", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
label_0:;
	{
	LINE_NUMBER(288);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(289);
	if ((frame[1].o) != (frame[0].o)) goto label_3;
	}
	{
	LINE_NUMBER(290);
	popStackFrame(ctx);
	return (jint(1));
	}
label_3:;
	{
	LINE_NUMBER(288);
	sp[0].o = (jobject)((java_lang_ThreadGroup *) NULL_CHECK((frame[1].o)))->F_parent;
	frame[1].o = sp[0].o;
	goto label_0;
	}
label_1:;
	{
	LINE_NUMBER(293);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_java_lang_ThreadGroup_checkAccess(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ThreadGroup:checkAccess", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(314);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_java_lang_ThreadGroup_activeCount_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ThreadGroup:activeCount", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(339);
	sp[0].o = frame[0].o;
	frame[4].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(340);
	if (((jint)((java_lang_ThreadGroup *) NULL_CHECK((frame[0].o)))->F_destroyed) == 0) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	LINE_NUMBER(341);
	jint temp0 = jint(0);
	monitorExit(ctx, (frame[4].o));
	sp[0].i = temp0;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(343);
	frame[1].i = ((jint)((java_lang_ThreadGroup *) NULL_CHECK((frame[0].o)))->F_nthreads);
	LINE_NUMBER(344);
	frame[2].i = ((jint)((java_lang_ThreadGroup *) NULL_CHECK((frame[0].o)))->F_ngroups);
	LINE_NUMBER(345);
	sp[0].o = (jobject)((java_lang_ThreadGroup *) NULL_CHECK((frame[0].o)))->F_groups;
	if (sp[0].o == nullptr) goto label_13;
	}
	{
	LINE_NUMBER(346);
	sp[0].o = (jobject)((java_lang_ThreadGroup *) NULL_CHECK((frame[0].o)))->F_groups;
	sp[0].o = (jobject)SM_java_util_Arrays_copyOf_Array1_java_lang_Object_int_R_Array1_java_lang_Object(ctx, sp[0].o, (frame[2].i));
	frame[3].o = (checkCast(ctx, getArrayClass(&class_java_lang_ThreadGroup, 1), sp[0].o));
	goto label_16;
	}
label_13:;
	{
	LINE_NUMBER(348);
	frame[3].o = (jobject(nullptr));
	}
label_16:;
	{
	LINE_NUMBER(350);
	monitorExit(ctx, (frame[4].o));
	}
	popExceptionFrame(frameRef);
	goto label_17;
label_2:;
label_8: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	frame[5].o = sp[0].o;
	monitorExit(ctx, (frame[4].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(5);
	INST_ATHROW();
	label_17:;
	{
	LINE_NUMBER(351);
	frame[4].i = (jint(0));
	}
label_18:;
	{
	if ((frame[4].i) >= (frame[2].i)) goto label_19;
	}
	{
	LINE_NUMBER(352);
	jint temp0 = frame[1].i;
	jint temp1 = (jint)((func_java_lang_ThreadGroup_activeCount_R_int) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i))))->vtable)[VTABLE_java_lang_ThreadGroup_activeCount_R_int])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i))));
	frame[1].i = (temp0 + temp1);
	LINE_NUMBER(351);
	INST_IINC(4, 1);
	goto label_18;
	}
label_19:;
	{
	LINE_NUMBER(354);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

jint M_java_lang_ThreadGroup_enumerate_Array1_java_lang_Thread_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ThreadGroup:enumerate", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(380);
	((func_java_lang_ThreadGroup_checkAccess) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_ThreadGroup_checkAccess])(ctx, (frame[0].o));
	LINE_NUMBER(381);
	jint temp0 = (jint)M_java_lang_ThreadGroup_enumerate_Array1_java_lang_Thread_int_boolean_R_int(ctx, (frame[0].o), (frame[1].o), (jint(0)), (jint(1)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_java_lang_ThreadGroup_enumerate_Array1_java_lang_Thread_boolean_R_int(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ThreadGroup:enumerate", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(418);
	((func_java_lang_ThreadGroup_checkAccess) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_ThreadGroup_checkAccess])(ctx, (frame[0].o));
	LINE_NUMBER(419);
	jint temp0 = (jint)M_java_lang_ThreadGroup_enumerate_Array1_java_lang_Thread_int_boolean_R_int(ctx, (frame[0].o), (frame[1].o), (jint(0)), (frame[2].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_java_lang_ThreadGroup_enumerate_Array1_java_lang_Thread_int_boolean_R_int(jcontext ctx, jobject self, jobject param0, jint param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ThreadGroup:enumerate", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(423);
	frame[4].i = (jint(0));
	LINE_NUMBER(424);
	frame[5].o = (jobject(nullptr));
	LINE_NUMBER(425);
	sp[0].o = frame[0].o;
	frame[6].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(426);
	if (((jint)((java_lang_ThreadGroup *) NULL_CHECK((frame[0].o)))->F_destroyed) == 0) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	LINE_NUMBER(427);
	jint temp0 = jint(0);
	monitorExit(ctx, (frame[6].o));
	sp[0].i = temp0;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(429);
	frame[7].i = ((jint)((java_lang_ThreadGroup *) NULL_CHECK((frame[0].o)))->F_nthreads);
	LINE_NUMBER(430);
	if ((frame[7].i) <= ((((jarray) nullCheck(ctx, (frame[1].o)))->length) - (frame[2].i))) goto label_14;
	}
	{
	LINE_NUMBER(431);
	frame[7].i = ((((jarray) nullCheck(ctx, (frame[1].o)))->length) - (frame[2].i));
	}
label_14:;
	{
	LINE_NUMBER(433);
	frame[8].i = (jint(0));
	}
label_16:;
	{
	if ((frame[8].i) >= (frame[7].i)) goto label_17;
	}
	{
	LINE_NUMBER(434);
	sp[0].o = (jobject)((java_lang_ThreadGroup *) NULL_CHECK((frame[0].o)))->F_threads;
	jint temp0 = (jint)((func_java_lang_Thread_isAlive_R_boolean) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[8].i))))->vtable)[VTABLE_java_lang_Thread_isAlive_R_boolean])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[8].i))));
	if (temp0 == 0) goto label_19;
	}
	{
	LINE_NUMBER(435);
	sp[0].o = frame[1].o;
	jint temp0 = frame[2].i;
	INST_IINC(2, 1);
	sp[1].o = (jobject)((java_lang_ThreadGroup *) NULL_CHECK((frame[0].o)))->F_threads;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[8].i)));
	}
label_19:;
	{
	LINE_NUMBER(433);
	INST_IINC(8, 1);
	goto label_16;
	}
label_17:;
	{
	LINE_NUMBER(438);
	if ((frame[3].i) == 0) goto label_21;
	}
	{
	LINE_NUMBER(439);
	frame[4].i = ((jint)((java_lang_ThreadGroup *) NULL_CHECK((frame[0].o)))->F_ngroups);
	LINE_NUMBER(440);
	sp[0].o = (jobject)((java_lang_ThreadGroup *) NULL_CHECK((frame[0].o)))->F_groups;
	if (sp[0].o == nullptr) goto label_24;
	}
	{
	LINE_NUMBER(441);
	sp[0].o = (jobject)((java_lang_ThreadGroup *) NULL_CHECK((frame[0].o)))->F_groups;
	sp[0].o = (jobject)SM_java_util_Arrays_copyOf_Array1_java_lang_Object_int_R_Array1_java_lang_Object(ctx, sp[0].o, (frame[4].i));
	frame[5].o = (checkCast(ctx, getArrayClass(&class_java_lang_ThreadGroup, 1), sp[0].o));
	goto label_21;
	}
label_24:;
	{
	LINE_NUMBER(443);
	frame[5].o = (jobject(nullptr));
	}
label_21:;
	{
	LINE_NUMBER(446);
	monitorExit(ctx, (frame[6].o));
	}
	popExceptionFrame(frameRef);
	goto label_26;
label_2:;
label_8: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	frame[9].o = sp[0].o;
	monitorExit(ctx, (frame[6].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(9);
	INST_ATHROW();
	label_26:;
	{
	LINE_NUMBER(447);
	if ((frame[3].i) == 0) goto label_27;
	}
	{
	LINE_NUMBER(448);
	frame[6].i = (jint(0));
	}
label_29:;
	{
	if ((frame[6].i) >= (frame[4].i)) goto label_27;
	}
	{
	LINE_NUMBER(449);
	jint temp0 = (jint)M_java_lang_ThreadGroup_enumerate_Array1_java_lang_Thread_int_boolean_R_int(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[6].i))), (frame[1].o), (frame[2].i), (jint(1)));
	frame[2].i = temp0;
	LINE_NUMBER(448);
	INST_IINC(6, 1);
	goto label_29;
	}
label_27:;
	{
	LINE_NUMBER(452);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

jint M_java_lang_ThreadGroup_activeGroupCount_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ThreadGroup:activeGroupCount", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(473);
	sp[0].o = frame[0].o;
	frame[3].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(474);
	if (((jint)((java_lang_ThreadGroup *) NULL_CHECK((frame[0].o)))->F_destroyed) == 0) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	LINE_NUMBER(475);
	jint temp0 = jint(0);
	monitorExit(ctx, (frame[3].o));
	sp[0].i = temp0;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(477);
	frame[1].i = ((jint)((java_lang_ThreadGroup *) NULL_CHECK((frame[0].o)))->F_ngroups);
	LINE_NUMBER(478);
	sp[0].o = (jobject)((java_lang_ThreadGroup *) NULL_CHECK((frame[0].o)))->F_groups;
	if (sp[0].o == nullptr) goto label_12;
	}
	{
	LINE_NUMBER(479);
	sp[0].o = (jobject)((java_lang_ThreadGroup *) NULL_CHECK((frame[0].o)))->F_groups;
	sp[0].o = (jobject)SM_java_util_Arrays_copyOf_Array1_java_lang_Object_int_R_Array1_java_lang_Object(ctx, sp[0].o, (frame[1].i));
	frame[2].o = (checkCast(ctx, getArrayClass(&class_java_lang_ThreadGroup, 1), sp[0].o));
	goto label_15;
	}
label_12:;
	{
	LINE_NUMBER(481);
	frame[2].o = (jobject(nullptr));
	}
label_15:;
	{
	LINE_NUMBER(483);
	monitorExit(ctx, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	goto label_16;
label_2:;
label_8: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
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
	label_16:;
	{
	LINE_NUMBER(484);
	frame[3].i = (frame[1].i);
	LINE_NUMBER(485);
	frame[4].i = (jint(0));
	}
label_18:;
	{
	if ((frame[4].i) >= (frame[1].i)) goto label_19;
	}
	{
	LINE_NUMBER(486);
	jint temp0 = frame[3].i;
	jint temp1 = (jint)((func_java_lang_ThreadGroup_activeGroupCount_R_int) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i))))->vtable)[VTABLE_java_lang_ThreadGroup_activeGroupCount_R_int])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i))));
	frame[3].i = (temp0 + temp1);
	LINE_NUMBER(485);
	INST_IINC(4, 1);
	goto label_18;
	}
label_19:;
	{
	LINE_NUMBER(488);
	popStackFrame(ctx);
	return (frame[3].i);
	}

	popStackFrame(ctx);
}

jint M_java_lang_ThreadGroup_enumerate_Array1_java_lang_ThreadGroup_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ThreadGroup:enumerate", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(514);
	((func_java_lang_ThreadGroup_checkAccess) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_ThreadGroup_checkAccess])(ctx, (frame[0].o));
	LINE_NUMBER(515);
	jint temp0 = (jint)M_java_lang_ThreadGroup_enumerate_Array1_java_lang_ThreadGroup_int_boolean_R_int(ctx, (frame[0].o), (frame[1].o), (jint(0)), (jint(1)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_java_lang_ThreadGroup_enumerate_Array1_java_lang_ThreadGroup_boolean_R_int(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ThreadGroup:enumerate", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(552);
	((func_java_lang_ThreadGroup_checkAccess) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_ThreadGroup_checkAccess])(ctx, (frame[0].o));
	LINE_NUMBER(553);
	jint temp0 = (jint)M_java_lang_ThreadGroup_enumerate_Array1_java_lang_ThreadGroup_int_boolean_R_int(ctx, (frame[0].o), (frame[1].o), (jint(0)), (frame[2].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_java_lang_ThreadGroup_enumerate_Array1_java_lang_ThreadGroup_int_boolean_R_int(jcontext ctx, jobject self, jobject param0, jint param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ThreadGroup:enumerate", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(557);
	frame[4].i = (jint(0));
	LINE_NUMBER(558);
	frame[5].o = (jobject(nullptr));
	LINE_NUMBER(559);
	sp[0].o = frame[0].o;
	frame[6].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(560);
	if (((jint)((java_lang_ThreadGroup *) NULL_CHECK((frame[0].o)))->F_destroyed) == 0) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	LINE_NUMBER(561);
	jint temp0 = jint(0);
	monitorExit(ctx, (frame[6].o));
	sp[0].i = temp0;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(563);
	frame[7].i = ((jint)((java_lang_ThreadGroup *) NULL_CHECK((frame[0].o)))->F_ngroups);
	LINE_NUMBER(564);
	if ((frame[7].i) <= ((((jarray) nullCheck(ctx, (frame[1].o)))->length) - (frame[2].i))) goto label_14;
	}
	{
	LINE_NUMBER(565);
	frame[7].i = ((((jarray) nullCheck(ctx, (frame[1].o)))->length) - (frame[2].i));
	}
label_14:;
	{
	LINE_NUMBER(567);
	if ((frame[7].i) <= 0) goto label_16;
	}
	{
	LINE_NUMBER(568);
	sp[0].o = (jobject)((java_lang_ThreadGroup *) NULL_CHECK((frame[0].o)))->F_groups;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, (jint(0)), (frame[1].o), (frame[2].i), (frame[7].i));
	LINE_NUMBER(569);
	frame[2].i = ((frame[2].i) + (frame[7].i));
	}
label_16:;
	{
	LINE_NUMBER(571);
	if ((frame[3].i) == 0) goto label_19;
	}
	{
	LINE_NUMBER(572);
	frame[4].i = ((jint)((java_lang_ThreadGroup *) NULL_CHECK((frame[0].o)))->F_ngroups);
	LINE_NUMBER(573);
	sp[0].o = (jobject)((java_lang_ThreadGroup *) NULL_CHECK((frame[0].o)))->F_groups;
	if (sp[0].o == nullptr) goto label_22;
	}
	{
	LINE_NUMBER(574);
	sp[0].o = (jobject)((java_lang_ThreadGroup *) NULL_CHECK((frame[0].o)))->F_groups;
	sp[0].o = (jobject)SM_java_util_Arrays_copyOf_Array1_java_lang_Object_int_R_Array1_java_lang_Object(ctx, sp[0].o, (frame[4].i));
	frame[5].o = (checkCast(ctx, getArrayClass(&class_java_lang_ThreadGroup, 1), sp[0].o));
	goto label_19;
	}
label_22:;
	{
	LINE_NUMBER(576);
	frame[5].o = (jobject(nullptr));
	}
label_19:;
	{
	LINE_NUMBER(579);
	monitorExit(ctx, (frame[6].o));
	}
	popExceptionFrame(frameRef);
	goto label_24;
label_2:;
label_8: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	frame[8].o = sp[0].o;
	monitorExit(ctx, (frame[6].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(8);
	INST_ATHROW();
	label_24:;
	{
	LINE_NUMBER(580);
	if ((frame[3].i) == 0) goto label_25;
	}
	{
	LINE_NUMBER(581);
	frame[6].i = (jint(0));
	}
label_27:;
	{
	if ((frame[6].i) >= (frame[4].i)) goto label_25;
	}
	{
	LINE_NUMBER(582);
	jint temp0 = (jint)M_java_lang_ThreadGroup_enumerate_Array1_java_lang_ThreadGroup_int_boolean_R_int(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[6].i))), (frame[1].o), (frame[2].i), (jint(1)));
	frame[2].i = temp0;
	LINE_NUMBER(581);
	INST_IINC(6, 1);
	goto label_27;
	}
label_25:;
	{
	LINE_NUMBER(585);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

void M_java_lang_ThreadGroup_stop(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ThreadGroup:stop", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(609);
	jint temp0 = (jint)M_java_lang_ThreadGroup_stopOrSuspend_boolean_R_boolean(ctx, (frame[0].o), (jint(0)));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(610);
	sp[0].o = (jobject)SM_java_lang_Thread_currentThread_R_java_lang_Thread(ctx);
	((func_java_lang_Thread_stop) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Thread_stop])(ctx, sp[0].o);
	}
label_1:;
	LINE_NUMBER(611);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_lang_ThreadGroup_interrupt(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ThreadGroup:interrupt", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(633);
	sp[0].o = frame[0].o;
	frame[3].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(634);
	((func_java_lang_ThreadGroup_checkAccess) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_ThreadGroup_checkAccess])(ctx, (frame[0].o));
	LINE_NUMBER(635);
	frame[4].i = (jint(0));
	}
label_8:;
	{
	if ((frame[4].i) >= ((jint)((java_lang_ThreadGroup *) NULL_CHECK((frame[0].o)))->F_nthreads)) goto label_9;
	}
	{
	LINE_NUMBER(636);
	sp[0].o = (jobject)((java_lang_ThreadGroup *) NULL_CHECK((frame[0].o)))->F_threads;
	((func_java_lang_Thread_interrupt) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[4].i))))->vtable)[VTABLE_java_lang_Thread_interrupt])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[4].i))));
	LINE_NUMBER(635);
	INST_IINC(4, 1);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(638);
	frame[1].i = ((jint)((java_lang_ThreadGroup *) NULL_CHECK((frame[0].o)))->F_ngroups);
	LINE_NUMBER(639);
	sp[0].o = (jobject)((java_lang_ThreadGroup *) NULL_CHECK((frame[0].o)))->F_groups;
	if (sp[0].o == nullptr) goto label_13;
	}
	{
	LINE_NUMBER(640);
	sp[0].o = (jobject)((java_lang_ThreadGroup *) NULL_CHECK((frame[0].o)))->F_groups;
	sp[0].o = (jobject)SM_java_util_Arrays_copyOf_Array1_java_lang_Object_int_R_Array1_java_lang_Object(ctx, sp[0].o, (frame[1].i));
	frame[2].o = (checkCast(ctx, getArrayClass(&class_java_lang_ThreadGroup, 1), sp[0].o));
	goto label_16;
	}
label_13:;
	{
	LINE_NUMBER(642);
	frame[2].o = (jobject(nullptr));
	}
label_16:;
	{
	LINE_NUMBER(644);
	monitorExit(ctx, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	goto label_17;
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	frame[5].o = sp[0].o;
	monitorExit(ctx, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(5);
	INST_ATHROW();
	label_17:;
	{
	LINE_NUMBER(645);
	frame[3].i = (jint(0));
	}
label_18:;
	{
	if ((frame[3].i) >= (frame[1].i)) goto label_19;
	}
	{
	LINE_NUMBER(646);
	((func_java_lang_ThreadGroup_interrupt) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[3].i))))->vtable)[VTABLE_java_lang_ThreadGroup_interrupt])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[3].i))));
	LINE_NUMBER(645);
	INST_IINC(3, 1);
	goto label_18;
	}
label_19:;
	LINE_NUMBER(648);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_lang_ThreadGroup_suspend(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ThreadGroup:suspend", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(672);
	jint temp0 = (jint)M_java_lang_ThreadGroup_stopOrSuspend_boolean_R_boolean(ctx, (frame[0].o), (jint(1)));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(673);
	sp[0].o = (jobject)SM_java_lang_Thread_currentThread_R_java_lang_Thread(ctx);
	((func_java_lang_Thread_suspend) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Thread_suspend])(ctx, sp[0].o);
	}
label_1:;
	LINE_NUMBER(674);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_java_lang_ThreadGroup_stopOrSuspend_boolean_R_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ThreadGroup:stopOrSuspend", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(685);
	frame[2].i = (jint(0));
	LINE_NUMBER(686);
	sp[0].o = (jobject)SM_java_lang_Thread_currentThread_R_java_lang_Thread(ctx);
	frame[3].o = sp[0].o;
	LINE_NUMBER(688);
	frame[5].o = (jobject(nullptr));
	LINE_NUMBER(689);
	sp[0].o = frame[0].o;
	frame[6].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(690);
	((func_java_lang_ThreadGroup_checkAccess) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_ThreadGroup_checkAccess])(ctx, (frame[0].o));
	LINE_NUMBER(691);
	frame[7].i = (jint(0));
	}
label_11:;
	{
	if ((frame[7].i) >= ((jint)((java_lang_ThreadGroup *) NULL_CHECK((frame[0].o)))->F_nthreads)) goto label_12;
	}
	{
	LINE_NUMBER(692);
	sp[0].o = (jobject)((java_lang_ThreadGroup *) NULL_CHECK((frame[0].o)))->F_threads;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[7].i))) != (frame[3].o)) goto label_14;
	}
	{
	LINE_NUMBER(693);
	frame[2].i = (jint(1));
	goto label_16;
	}
label_14:;
	{
	LINE_NUMBER(694);
	if ((frame[1].i) == 0) goto label_17;
	}
	{
	LINE_NUMBER(695);
	sp[0].o = (jobject)((java_lang_ThreadGroup *) NULL_CHECK((frame[0].o)))->F_threads;
	((func_java_lang_Thread_suspend) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[7].i))))->vtable)[VTABLE_java_lang_Thread_suspend])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[7].i))));
	goto label_16;
	}
label_17:;
	{
	LINE_NUMBER(697);
	sp[0].o = (jobject)((java_lang_ThreadGroup *) NULL_CHECK((frame[0].o)))->F_threads;
	((func_java_lang_Thread_stop) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[7].i))))->vtable)[VTABLE_java_lang_Thread_stop])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[7].i))));
	}
label_16:;
	{
	LINE_NUMBER(691);
	INST_IINC(7, 1);
	goto label_11;
	}
label_12:;
	{
	LINE_NUMBER(700);
	frame[4].i = ((jint)((java_lang_ThreadGroup *) NULL_CHECK((frame[0].o)))->F_ngroups);
	LINE_NUMBER(701);
	sp[0].o = (jobject)((java_lang_ThreadGroup *) NULL_CHECK((frame[0].o)))->F_groups;
	if (sp[0].o == nullptr) goto label_20;
	}
	{
	LINE_NUMBER(702);
	sp[0].o = (jobject)((java_lang_ThreadGroup *) NULL_CHECK((frame[0].o)))->F_groups;
	sp[0].o = (jobject)SM_java_util_Arrays_copyOf_Array1_java_lang_Object_int_R_Array1_java_lang_Object(ctx, sp[0].o, (frame[4].i));
	frame[5].o = (checkCast(ctx, getArrayClass(&class_java_lang_ThreadGroup, 1), sp[0].o));
	}
label_20:;
	{
	LINE_NUMBER(704);
	monitorExit(ctx, (frame[6].o));
	}
	popExceptionFrame(frameRef);
	goto label_22;
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	frame[8].o = sp[0].o;
	monitorExit(ctx, (frame[6].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(8);
	INST_ATHROW();
	label_22:;
	{
	LINE_NUMBER(705);
	frame[6].i = (jint(0));
	}
label_23:;
	{
	if ((frame[6].i) >= (frame[4].i)) goto label_24;
	}
	{
	LINE_NUMBER(706);
	jint temp0 = (jint)M_java_lang_ThreadGroup_stopOrSuspend_boolean_R_boolean(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[6].i))), (frame[1].i));
	if (temp0 != 0) goto label_26;
	}
	INST_ILOAD(2);
	if ((--sp)->i == 0) goto label_27;
label_26:;
	INST_ICONST(1);
	goto label_28;
label_27:;
	INST_ICONST(0);
label_28:;
	{
	sp -= 1;
	frame[2].i = sp[0].i;
	LINE_NUMBER(705);
	INST_IINC(6, 1);
	goto label_23;
	}
label_24:;
	{
	LINE_NUMBER(708);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

void M_java_lang_ThreadGroup_resume(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ThreadGroup:resume", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(737);
	sp[0].o = frame[0].o;
	frame[3].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(738);
	((func_java_lang_ThreadGroup_checkAccess) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_ThreadGroup_checkAccess])(ctx, (frame[0].o));
	LINE_NUMBER(739);
	frame[4].i = (jint(0));
	}
label_8:;
	{
	if ((frame[4].i) >= ((jint)((java_lang_ThreadGroup *) NULL_CHECK((frame[0].o)))->F_nthreads)) goto label_9;
	}
	{
	LINE_NUMBER(740);
	sp[0].o = (jobject)((java_lang_ThreadGroup *) NULL_CHECK((frame[0].o)))->F_threads;
	((func_java_lang_Thread_resume) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[4].i))))->vtable)[VTABLE_java_lang_Thread_resume])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[4].i))));
	LINE_NUMBER(739);
	INST_IINC(4, 1);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(742);
	frame[1].i = ((jint)((java_lang_ThreadGroup *) NULL_CHECK((frame[0].o)))->F_ngroups);
	LINE_NUMBER(743);
	sp[0].o = (jobject)((java_lang_ThreadGroup *) NULL_CHECK((frame[0].o)))->F_groups;
	if (sp[0].o == nullptr) goto label_13;
	}
	{
	LINE_NUMBER(744);
	sp[0].o = (jobject)((java_lang_ThreadGroup *) NULL_CHECK((frame[0].o)))->F_groups;
	sp[0].o = (jobject)SM_java_util_Arrays_copyOf_Array1_java_lang_Object_int_R_Array1_java_lang_Object(ctx, sp[0].o, (frame[1].i));
	frame[2].o = (checkCast(ctx, getArrayClass(&class_java_lang_ThreadGroup, 1), sp[0].o));
	goto label_16;
	}
label_13:;
	{
	LINE_NUMBER(746);
	frame[2].o = (jobject(nullptr));
	}
label_16:;
	{
	LINE_NUMBER(748);
	monitorExit(ctx, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	goto label_17;
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	frame[5].o = sp[0].o;
	monitorExit(ctx, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(5);
	INST_ATHROW();
	label_17:;
	{
	LINE_NUMBER(749);
	frame[3].i = (jint(0));
	}
label_18:;
	{
	if ((frame[3].i) >= (frame[1].i)) goto label_19;
	}
	{
	LINE_NUMBER(750);
	((func_java_lang_ThreadGroup_resume) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[3].i))))->vtable)[VTABLE_java_lang_ThreadGroup_resume])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[3].i))));
	LINE_NUMBER(749);
	INST_IINC(3, 1);
	goto label_18;
	}
label_19:;
	LINE_NUMBER(752);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_lang_ThreadGroup_destroy(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ThreadGroup:destroy", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(772);
	sp[0].o = frame[0].o;
	frame[3].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(773);
	((func_java_lang_ThreadGroup_checkAccess) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_ThreadGroup_checkAccess])(ctx, (frame[0].o));
	LINE_NUMBER(774);
	if (((jint)((java_lang_ThreadGroup *) NULL_CHECK((frame[0].o)))->F_destroyed) != 0) goto label_8;
	}
	{
	if (((jint)((java_lang_ThreadGroup *) NULL_CHECK((frame[0].o)))->F_nthreads) <= 0) goto label_9;
	}
label_8:;
	{
	LINE_NUMBER(775);
	clinit_java_lang_IllegalThreadStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalThreadStateException);
	init_java_lang_IllegalThreadStateException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_9:;
	{
	LINE_NUMBER(777);
	frame[1].i = ((jint)((java_lang_ThreadGroup *) NULL_CHECK((frame[0].o)))->F_ngroups);
	LINE_NUMBER(778);
	sp[0].o = (jobject)((java_lang_ThreadGroup *) NULL_CHECK((frame[0].o)))->F_groups;
	if (sp[0].o == nullptr) goto label_11;
	}
	{
	LINE_NUMBER(779);
	sp[0].o = (jobject)((java_lang_ThreadGroup *) NULL_CHECK((frame[0].o)))->F_groups;
	sp[0].o = (jobject)SM_java_util_Arrays_copyOf_Array1_java_lang_Object_int_R_Array1_java_lang_Object(ctx, sp[0].o, (frame[1].i));
	frame[2].o = (checkCast(ctx, getArrayClass(&class_java_lang_ThreadGroup, 1), sp[0].o));
	goto label_14;
	}
label_11:;
	{
	LINE_NUMBER(781);
	frame[2].o = (jobject(nullptr));
	}
label_14:;
	{
	LINE_NUMBER(783);
	sp[0].o = (jobject)((java_lang_ThreadGroup *) NULL_CHECK((frame[0].o)))->F_parent;
	if (sp[0].o == nullptr) goto label_15;
	}
	{
	LINE_NUMBER(784);
	((java_lang_ThreadGroup *) NULL_CHECK((frame[0].o)))->F_destroyed = (jint(1));
	LINE_NUMBER(785);
	((java_lang_ThreadGroup *) NULL_CHECK((frame[0].o)))->F_ngroups = (jint(0));
	LINE_NUMBER(786);
	((java_lang_ThreadGroup *) NULL_CHECK((frame[0].o)))->F_groups = (jref) (jobject(nullptr));
	LINE_NUMBER(787);
	((java_lang_ThreadGroup *) NULL_CHECK((frame[0].o)))->F_nthreads = (jint(0));
	LINE_NUMBER(788);
	((java_lang_ThreadGroup *) NULL_CHECK((frame[0].o)))->F_threads = (jref) (jobject(nullptr));
	}
label_15:;
	{
	LINE_NUMBER(790);
	monitorExit(ctx, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	goto label_21;
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
	label_21:;
	{
	LINE_NUMBER(791);
	frame[3].i = (jint(0));
	}
label_22:;
	{
	if ((frame[3].i) >= (frame[1].i)) goto label_23;
	}
	{
	LINE_NUMBER(792);
	((func_java_lang_ThreadGroup_destroy) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[3].i))))->vtable)[VTABLE_java_lang_ThreadGroup_destroy])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[3].i))));
	LINE_NUMBER(791);
	INST_IINC(3, 1);
	goto label_22;
	}
label_23:;
	{
	LINE_NUMBER(794);
	sp[0].o = (jobject)((java_lang_ThreadGroup *) NULL_CHECK((frame[0].o)))->F_parent;
	if (sp[0].o == nullptr) goto label_26;
	}
	{
	LINE_NUMBER(795);
	sp[0].o = (jobject)((java_lang_ThreadGroup *) NULL_CHECK((frame[0].o)))->F_parent;
	M_java_lang_ThreadGroup_remove_java_lang_ThreadGroup(ctx, sp[0].o, (frame[0].o));
	}
label_26:;
	LINE_NUMBER(797);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_lang_ThreadGroup_add_java_lang_ThreadGroup(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ThreadGroup:add", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(805);
	sp[0].o = frame[0].o;
	frame[2].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(806);
	if (((jint)((java_lang_ThreadGroup *) NULL_CHECK((frame[0].o)))->F_destroyed) == 0) goto label_7;
	}
	{
	LINE_NUMBER(807);
	clinit_java_lang_IllegalThreadStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalThreadStateException);
	init_java_lang_IllegalThreadStateException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_7:;
	{
	LINE_NUMBER(809);
	sp[0].o = (jobject)((java_lang_ThreadGroup *) NULL_CHECK((frame[0].o)))->F_groups;
	if (sp[0].o != nullptr) goto label_9;
	}
	{
	LINE_NUMBER(810);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_ThreadGroup, (jint(4)));
	((java_lang_ThreadGroup *) NULL_CHECK(sp[0].o))->F_groups = (jref) sp[1].o;
	goto label_11;
	}
label_9:;
	{
	LINE_NUMBER(811);
	jint temp0 = (jint)((java_lang_ThreadGroup *) NULL_CHECK((frame[0].o)))->F_ngroups;
	sp[0].o = (jobject)((java_lang_ThreadGroup *) NULL_CHECK((frame[0].o)))->F_groups;
	if (temp0 != (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_11;
	}
	{
	LINE_NUMBER(812);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_lang_ThreadGroup *) NULL_CHECK((frame[0].o)))->F_groups;
	sp[1].o = (jobject)SM_java_util_Arrays_copyOf_Array1_java_lang_Object_int_R_Array1_java_lang_Object(ctx, sp[1].o, (((jint)((java_lang_ThreadGroup *) NULL_CHECK((frame[0].o)))->F_ngroups) * (jint(2))));
	((java_lang_ThreadGroup *) NULL_CHECK(sp[0].o))->F_groups = (jref) (checkCast(ctx, getArrayClass(&class_java_lang_ThreadGroup, 1), sp[1].o));
	}
label_11:;
	{
	LINE_NUMBER(814);
	sp[0].o = (jobject)((java_lang_ThreadGroup *) NULL_CHECK((frame[0].o)))->F_groups;
	ARRAY_ACCESS(jobject, sp[0].o, ((jint)((java_lang_ThreadGroup *) NULL_CHECK((frame[0].o)))->F_ngroups)) = (frame[1].o);
	LINE_NUMBER(818);
	sp[0].o = frame[0].o;
	((java_lang_ThreadGroup *) NULL_CHECK(sp[0].o))->F_ngroups = (((jint)((java_lang_ThreadGroup *) NULL_CHECK(sp[0].o))->F_ngroups) + (jint(1)));
	LINE_NUMBER(819);
	monitorExit(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	goto label_15;
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
	label_15:;
	LINE_NUMBER(820);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_lang_ThreadGroup_remove_java_lang_ThreadGroup(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ThreadGroup:remove", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(828);
	sp[0].o = frame[0].o;
	frame[2].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(829);
	if (((jint)((java_lang_ThreadGroup *) NULL_CHECK((frame[0].o)))->F_destroyed) == 0) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	LINE_NUMBER(830);
	monitorExit(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_RETURN();
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(832);
	frame[3].i = (jint(0));
	}
label_11:;
	{
	if ((frame[3].i) >= ((jint)((java_lang_ThreadGroup *) NULL_CHECK((frame[0].o)))->F_ngroups)) goto label_12;
	}
	{
	LINE_NUMBER(833);
	sp[0].o = (jobject)((java_lang_ThreadGroup *) NULL_CHECK((frame[0].o)))->F_groups;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i))) != (frame[1].o)) goto label_14;
	}
	{
	LINE_NUMBER(834);
	sp[0].o = frame[0].o;
	((java_lang_ThreadGroup *) NULL_CHECK(sp[0].o))->F_ngroups = (((jint)((java_lang_ThreadGroup *) NULL_CHECK(sp[0].o))->F_ngroups) - (jint(1)));
	LINE_NUMBER(835);
	sp[0].o = (jobject)((java_lang_ThreadGroup *) NULL_CHECK((frame[0].o)))->F_groups;
	jint temp0 = (frame[3].i) + (jint(1));
	sp[1].o = (jobject)((java_lang_ThreadGroup *) NULL_CHECK((frame[0].o)))->F_groups;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, (frame[3].i), (((jint)((java_lang_ThreadGroup *) NULL_CHECK((frame[0].o)))->F_ngroups) - (frame[3].i)));
	LINE_NUMBER(838);
	sp[0].o = (jobject)((java_lang_ThreadGroup *) NULL_CHECK((frame[0].o)))->F_groups;
	ARRAY_ACCESS(jobject, sp[0].o, ((jint)((java_lang_ThreadGroup *) NULL_CHECK((frame[0].o)))->F_ngroups)) = (jobject(nullptr));
	LINE_NUMBER(839);
	goto label_12;
	}
label_14:;
	{
	LINE_NUMBER(832);
	INST_IINC(3, 1);
	goto label_11;
	}
label_12:;
	{
	LINE_NUMBER(842);
	if (((jint)((java_lang_ThreadGroup *) NULL_CHECK((frame[0].o)))->F_nthreads) != 0) goto label_19;
	}
	{
	LINE_NUMBER(843);
	((func_java_lang_Object_notifyAll) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_notifyAll])(ctx, (frame[0].o));
	}
label_19:;
	{
	LINE_NUMBER(845);
	if (((jint)((java_lang_ThreadGroup *) NULL_CHECK((frame[0].o)))->F_daemon) == 0) goto label_21;
	}
	{
	if (((jint)((java_lang_ThreadGroup *) NULL_CHECK((frame[0].o)))->F_nthreads) != 0) goto label_21;
	}
	{
	if (((jint)((java_lang_ThreadGroup *) NULL_CHECK((frame[0].o)))->F_nUnstartedThreads) != 0) goto label_21;
	}
	{
	if (((jint)((java_lang_ThreadGroup *) NULL_CHECK((frame[0].o)))->F_ngroups) != 0) goto label_21;
	}
	{
	LINE_NUMBER(848);
	((func_java_lang_ThreadGroup_destroy) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_ThreadGroup_destroy])(ctx, (frame[0].o));
	}
label_21:;
	{
	LINE_NUMBER(850);
	monitorExit(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	goto label_23;
label_2:;
label_8: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	frame[4].o = sp[0].o;
	monitorExit(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(4);
	INST_ATHROW();
	label_23:;
	LINE_NUMBER(851);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_lang_ThreadGroup_addUnstarted(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ThreadGroup:addUnstarted", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(862);
	sp[0].o = frame[0].o;
	frame[1].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(863);
	if (((jint)((java_lang_ThreadGroup *) NULL_CHECK((frame[0].o)))->F_destroyed) == 0) goto label_7;
	}
	{
	LINE_NUMBER(864);
	clinit_java_lang_IllegalThreadStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalThreadStateException);
	init_java_lang_IllegalThreadStateException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_7:;
	{
	LINE_NUMBER(866);
	sp[0].o = frame[0].o;
	((java_lang_ThreadGroup *) NULL_CHECK(sp[0].o))->F_nUnstartedThreads = (((jint)((java_lang_ThreadGroup *) NULL_CHECK(sp[0].o))->F_nUnstartedThreads) + (jint(1)));
	LINE_NUMBER(867);
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
	LINE_NUMBER(868);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_lang_ThreadGroup_add_java_lang_Thread(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ThreadGroup:add", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(884);
	sp[0].o = frame[0].o;
	frame[2].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(885);
	if (((jint)((java_lang_ThreadGroup *) NULL_CHECK((frame[0].o)))->F_destroyed) == 0) goto label_7;
	}
	{
	LINE_NUMBER(886);
	clinit_java_lang_IllegalThreadStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalThreadStateException);
	init_java_lang_IllegalThreadStateException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_7:;
	{
	LINE_NUMBER(888);
	sp[0].o = (jobject)((java_lang_ThreadGroup *) NULL_CHECK((frame[0].o)))->F_threads;
	if (sp[0].o != nullptr) goto label_9;
	}
	{
	LINE_NUMBER(889);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Thread, (jint(4)));
	((java_lang_ThreadGroup *) NULL_CHECK(sp[0].o))->F_threads = (jref) sp[1].o;
	goto label_11;
	}
label_9:;
	{
	LINE_NUMBER(890);
	jint temp0 = (jint)((java_lang_ThreadGroup *) NULL_CHECK((frame[0].o)))->F_nthreads;
	sp[0].o = (jobject)((java_lang_ThreadGroup *) NULL_CHECK((frame[0].o)))->F_threads;
	if (temp0 != (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_11;
	}
	{
	LINE_NUMBER(891);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_lang_ThreadGroup *) NULL_CHECK((frame[0].o)))->F_threads;
	sp[1].o = (jobject)SM_java_util_Arrays_copyOf_Array1_java_lang_Object_int_R_Array1_java_lang_Object(ctx, sp[1].o, (((jint)((java_lang_ThreadGroup *) NULL_CHECK((frame[0].o)))->F_nthreads) * (jint(2))));
	((java_lang_ThreadGroup *) NULL_CHECK(sp[0].o))->F_threads = (jref) (checkCast(ctx, getArrayClass(&class_java_lang_Thread, 1), sp[1].o));
	}
label_11:;
	{
	LINE_NUMBER(893);
	sp[0].o = (jobject)((java_lang_ThreadGroup *) NULL_CHECK((frame[0].o)))->F_threads;
	ARRAY_ACCESS(jobject, sp[0].o, ((jint)((java_lang_ThreadGroup *) NULL_CHECK((frame[0].o)))->F_nthreads)) = (frame[1].o);
	LINE_NUMBER(897);
	sp[0].o = frame[0].o;
	((java_lang_ThreadGroup *) NULL_CHECK(sp[0].o))->F_nthreads = (((jint)((java_lang_ThreadGroup *) NULL_CHECK(sp[0].o))->F_nthreads) + (jint(1)));
	LINE_NUMBER(903);
	sp[0].o = frame[0].o;
	((java_lang_ThreadGroup *) NULL_CHECK(sp[0].o))->F_nUnstartedThreads = (((jint)((java_lang_ThreadGroup *) NULL_CHECK(sp[0].o))->F_nUnstartedThreads) - (jint(1)));
	LINE_NUMBER(904);
	monitorExit(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	goto label_16;
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
	label_16:;
	LINE_NUMBER(905);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_lang_ThreadGroup_threadStartFailed_java_lang_Thread(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ThreadGroup:threadStartFailed", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(920);
	sp[0].o = frame[0].o;
	frame[2].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(921);
	M_java_lang_ThreadGroup_remove_java_lang_Thread(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(922);
	sp[0].o = frame[0].o;
	((java_lang_ThreadGroup *) NULL_CHECK(sp[0].o))->F_nUnstartedThreads = (((jint)((java_lang_ThreadGroup *) NULL_CHECK(sp[0].o))->F_nUnstartedThreads) + (jint(1)));
	LINE_NUMBER(923);
	monitorExit(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	goto label_9;
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
	label_9:;
	LINE_NUMBER(924);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_lang_ThreadGroup_threadTerminated_java_lang_Thread(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ThreadGroup:threadTerminated", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(938);
	sp[0].o = frame[0].o;
	frame[2].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(939);
	M_java_lang_ThreadGroup_remove_java_lang_Thread(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(941);
	if (((jint)((java_lang_ThreadGroup *) NULL_CHECK((frame[0].o)))->F_nthreads) != 0) goto label_8;
	}
	{
	LINE_NUMBER(942);
	((func_java_lang_Object_notifyAll) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_notifyAll])(ctx, (frame[0].o));
	}
label_8:;
	{
	LINE_NUMBER(944);
	if (((jint)((java_lang_ThreadGroup *) NULL_CHECK((frame[0].o)))->F_daemon) == 0) goto label_10;
	}
	{
	if (((jint)((java_lang_ThreadGroup *) NULL_CHECK((frame[0].o)))->F_nthreads) != 0) goto label_10;
	}
	{
	if (((jint)((java_lang_ThreadGroup *) NULL_CHECK((frame[0].o)))->F_nUnstartedThreads) != 0) goto label_10;
	}
	{
	if (((jint)((java_lang_ThreadGroup *) NULL_CHECK((frame[0].o)))->F_ngroups) != 0) goto label_10;
	}
	{
	LINE_NUMBER(947);
	((func_java_lang_ThreadGroup_destroy) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_ThreadGroup_destroy])(ctx, (frame[0].o));
	}
label_10:;
	{
	LINE_NUMBER(949);
	monitorExit(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	goto label_12;
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
	label_12:;
	LINE_NUMBER(950);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_lang_ThreadGroup_remove_java_lang_Thread(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ThreadGroup:remove", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(960);
	sp[0].o = frame[0].o;
	frame[2].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(961);
	if (((jint)((java_lang_ThreadGroup *) NULL_CHECK((frame[0].o)))->F_destroyed) == 0) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	LINE_NUMBER(962);
	monitorExit(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_RETURN();
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(964);
	frame[3].i = (jint(0));
	}
label_11:;
	{
	if ((frame[3].i) >= ((jint)((java_lang_ThreadGroup *) NULL_CHECK((frame[0].o)))->F_nthreads)) goto label_12;
	}
	{
	LINE_NUMBER(965);
	sp[0].o = (jobject)((java_lang_ThreadGroup *) NULL_CHECK((frame[0].o)))->F_threads;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i))) != (frame[1].o)) goto label_14;
	}
	{
	LINE_NUMBER(966);
	sp[0].o = (jobject)((java_lang_ThreadGroup *) NULL_CHECK((frame[0].o)))->F_threads;
	jint temp0 = (frame[3].i) + (jint(1));
	sp[1].o = (jobject)((java_lang_ThreadGroup *) NULL_CHECK((frame[0].o)))->F_threads;
	jint temp1 = frame[3].i;
	sp[2].o = frame[0].o;
	jint temp2 = ((jint)((java_lang_ThreadGroup *) NULL_CHECK(sp[2].o))->F_nthreads) - (jint(1));
	((java_lang_ThreadGroup *) NULL_CHECK(sp[2].o))->F_nthreads = temp2;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, temp1, (temp2 - (frame[3].i)));
	LINE_NUMBER(969);
	sp[0].o = (jobject)((java_lang_ThreadGroup *) NULL_CHECK((frame[0].o)))->F_threads;
	ARRAY_ACCESS(jobject, sp[0].o, ((jint)((java_lang_ThreadGroup *) NULL_CHECK((frame[0].o)))->F_nthreads)) = (jobject(nullptr));
	LINE_NUMBER(970);
	goto label_12;
	}
label_14:;
	{
	LINE_NUMBER(964);
	INST_IINC(3, 1);
	goto label_11;
	}
label_12:;
	{
	LINE_NUMBER(973);
	monitorExit(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	goto label_18;
label_2:;
label_8: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	frame[4].o = sp[0].o;
	monitorExit(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(4);
	INST_ATHROW();
	label_18:;
	LINE_NUMBER(974);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_lang_ThreadGroup_list(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ThreadGroup:list", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(983);
	sp[0].o = frame[0].o;
	clinit_java_lang_System(ctx);
	sp[1].o = (jobject)SF_java_lang_System_out;
	((func_java_lang_ThreadGroup_list_java_io_PrintStream_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_ThreadGroup_list_java_io_PrintStream_int])(ctx, sp[0].o, sp[1].o, (jint(0)));
	LINE_NUMBER(984);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_lang_ThreadGroup_list_java_io_PrintStream_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ThreadGroup:list", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(988);
	sp[0].o = frame[0].o;
	frame[5].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(989);
	frame[6].i = (jint(0));
	}
label_7:;
	{
	if ((frame[6].i) >= (frame[2].i)) goto label_8;
	}
	{
	LINE_NUMBER(990);
	((func_java_io_PrintStream_print_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_PrintStream_print_java_lang_String])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(989);
	INST_IINC(6, 1);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(992);
	((func_java_io_PrintStream_println_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_PrintStream_println_java_lang_Object])(ctx, (frame[1].o), (frame[0].o));
	LINE_NUMBER(993);
	INST_IINC(2, 4);
	LINE_NUMBER(994);
	frame[6].i = (jint(0));
	}
label_13:;
	{
	if ((frame[6].i) >= ((jint)((java_lang_ThreadGroup *) NULL_CHECK((frame[0].o)))->F_nthreads)) goto label_14;
	}
	{
	LINE_NUMBER(995);
	frame[7].i = (jint(0));
	}
label_16:;
	{
	if ((frame[7].i) >= (frame[2].i)) goto label_17;
	}
	{
	LINE_NUMBER(996);
	((func_java_io_PrintStream_print_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_PrintStream_print_java_lang_String])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(995);
	INST_IINC(7, 1);
	goto label_16;
	}
label_17:;
	{
	LINE_NUMBER(998);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((java_lang_ThreadGroup *) NULL_CHECK((frame[0].o)))->F_threads;
	((func_java_io_PrintStream_println_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_PrintStream_println_java_lang_Object])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[6].i))));
	LINE_NUMBER(994);
	INST_IINC(6, 1);
	goto label_13;
	}
label_14:;
	{
	LINE_NUMBER(1000);
	frame[3].i = ((jint)((java_lang_ThreadGroup *) NULL_CHECK((frame[0].o)))->F_ngroups);
	LINE_NUMBER(1001);
	sp[0].o = (jobject)((java_lang_ThreadGroup *) NULL_CHECK((frame[0].o)))->F_groups;
	if (sp[0].o == nullptr) goto label_22;
	}
	{
	LINE_NUMBER(1002);
	sp[0].o = (jobject)((java_lang_ThreadGroup *) NULL_CHECK((frame[0].o)))->F_groups;
	sp[0].o = (jobject)SM_java_util_Arrays_copyOf_Array1_java_lang_Object_int_R_Array1_java_lang_Object(ctx, sp[0].o, (frame[3].i));
	frame[4].o = (checkCast(ctx, getArrayClass(&class_java_lang_ThreadGroup, 1), sp[0].o));
	goto label_25;
	}
label_22:;
	{
	LINE_NUMBER(1004);
	frame[4].o = (jobject(nullptr));
	}
label_25:;
	{
	LINE_NUMBER(1006);
	monitorExit(ctx, (frame[5].o));
	}
	popExceptionFrame(frameRef);
	goto label_26;
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	frame[8].o = sp[0].o;
	monitorExit(ctx, (frame[5].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(8);
	INST_ATHROW();
	label_26:;
	{
	LINE_NUMBER(1007);
	frame[5].i = (jint(0));
	}
label_27:;
	{
	if ((frame[5].i) >= (frame[3].i)) goto label_28;
	}
	{
	LINE_NUMBER(1008);
	((func_java_lang_ThreadGroup_list_java_io_PrintStream_int) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[5].i))))->vtable)[VTABLE_java_lang_ThreadGroup_list_java_io_PrintStream_int])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[5].i))), (frame[1].o), (frame[2].i));
	LINE_NUMBER(1007);
	INST_IINC(5, 1);
	goto label_27;
	}
label_28:;
	LINE_NUMBER(1010);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_lang_ThreadGroup_uncaughtException_java_lang_Thread_java_lang_Throwable(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ThreadGroup:uncaughtException", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1048);
	sp[0].o = (jobject)((java_lang_ThreadGroup *) NULL_CHECK((frame[0].o)))->F_parent;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(1049);
	sp[0].o = (jobject)((java_lang_ThreadGroup *) NULL_CHECK((frame[0].o)))->F_parent;
	((func_java_lang_ThreadGroup_uncaughtException_java_lang_Thread_java_lang_Throwable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_ThreadGroup_uncaughtException_java_lang_Thread_java_lang_Throwable])(ctx, sp[0].o, (frame[1].o), (frame[2].o));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(1052);
	sp[0].o = (jobject)SM_java_lang_Thread_getDefaultUncaughtExceptionHandler_R_java_lang_Thread$UncaughtExceptionHandler(ctx);
	frame[3].o = sp[0].o;
	LINE_NUMBER(1053);
	if ((frame[3].o) == nullptr) goto label_5;
	}
	{
	LINE_NUMBER(1054);
	((func_java_lang_Thread$UncaughtExceptionHandler_uncaughtException_java_lang_Thread_java_lang_Throwable) resolveInterfaceMethod(ctx, &class_java_lang_Thread$UncaughtExceptionHandler, INDEX_java_lang_Thread$UncaughtExceptionHandler_uncaughtException_java_lang_Thread_java_lang_Throwable, (frame[3].o)))(ctx, (frame[3].o), (frame[1].o), (frame[2].o));
	goto label_3;
	}
label_5:;
	{
	LINE_NUMBER(1055);
	if ((isInstance(ctx, (frame[2].o), &class_java_lang_ThreadDeath)) != 0) goto label_3;
	}
	{
	LINE_NUMBER(1056);
	clinit_java_lang_System(ctx);
	sp[0].o = (jobject)SF_java_lang_System_err;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Exception in thread \""_j))));
	sp[2].o = frame[1].o;
	LINE_NUMBER(1057);
	sp[2].o = (jobject)((func_java_lang_Thread_getName_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_Thread_getName_R_java_lang_String])(ctx, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"\" "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	LINE_NUMBER(1056);
	((func_java_io_PrintStream_print_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_PrintStream_print_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1058);
	sp[0].o = frame[2].o;
	clinit_java_lang_System(ctx);
	sp[1].o = (jobject)SF_java_lang_System_err;
	((func_java_lang_Throwable_printStackTrace_java_io_PrintStream) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Throwable_printStackTrace_java_io_PrintStream])(ctx, sp[0].o, sp[1].o);
	}
label_3:;
	LINE_NUMBER(1061);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_java_lang_ThreadGroup_allowThreadSuspension_boolean_R_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ThreadGroup:allowThreadSuspension", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1075);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jobject M_java_lang_ThreadGroup_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ThreadGroup:toString", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1085);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[1].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"[name="_j))));
	sp[1].o = (jobject)((func_java_lang_ThreadGroup_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_ThreadGroup_getName_R_java_lang_String])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8",maxpri="_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((java_lang_ThreadGroup *) NULL_CHECK((frame[0].o)))->F_maxPriority));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"]"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_java_lang_ThreadGroup;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[1])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[2])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[3])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[12]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[13]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[14]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[15]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[16]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[17]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method stop
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[18]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_java_lang_Deprecated);
		((java_lang_Deprecated *)annotations[0])->F_since = (intptr_t) ((jobject) createStringLiteral(ctx, u8"1.2"_j));
		((java_lang_Deprecated *)annotations[0])->F_forRemoval = 0;
	}

	methods[19]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method suspend
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[20]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_java_lang_Deprecated);
		((java_lang_Deprecated *)annotations[0])->F_since = (intptr_t) ((jobject) createStringLiteral(ctx, u8"1.2"_j));
		((java_lang_Deprecated *)annotations[0])->F_forRemoval = 0;
	}

	methods[21]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method resume
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[22]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_java_lang_Deprecated);
		((java_lang_Deprecated *)annotations[0])->F_since = (intptr_t) ((jobject) createStringLiteral(ctx, u8"1.2"_j));
		((java_lang_Deprecated *)annotations[0])->F_forRemoval = 0;
	}

	methods[23]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[24]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[25]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[26]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[27]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[28]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[29]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[30]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[31]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[32]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[33]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method allowThreadSuspension
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[34]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_java_lang_Deprecated);
		((java_lang_Deprecated *)annotations[0])->F_since = (intptr_t) ((jobject) createStringLiteral(ctx, u8"1.2"_j));
		((java_lang_Deprecated *)annotations[0])->F_forRemoval = 0;
	}

	methods[35]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_java_lang_ThreadGroup[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_ThreadGroup_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_lang_ThreadGroup_uncaughtException_java_lang_Thread_java_lang_Throwable,
	(void *) M_java_lang_ThreadGroup_getName_R_java_lang_String,
	(void *) M_java_lang_ThreadGroup_getParent_R_java_lang_ThreadGroup,
	(void *) M_java_lang_ThreadGroup_getMaxPriority_R_int,
	(void *) M_java_lang_ThreadGroup_isDaemon_R_boolean,
	(void *) M_java_lang_ThreadGroup_isDestroyed_R_boolean,
	(void *) M_java_lang_ThreadGroup_setDaemon_boolean,
	(void *) M_java_lang_ThreadGroup_setMaxPriority_int,
	(void *) M_java_lang_ThreadGroup_parentOf_java_lang_ThreadGroup_R_boolean,
	(void *) M_java_lang_ThreadGroup_checkAccess,
	(void *) M_java_lang_ThreadGroup_activeCount_R_int,
	(void *) M_java_lang_ThreadGroup_enumerate_Array1_java_lang_Thread_R_int,
	(void *) M_java_lang_ThreadGroup_enumerate_Array1_java_lang_Thread_boolean_R_int,
	(void *) M_java_lang_ThreadGroup_enumerate_Array1_java_lang_Thread_int_boolean_R_int,
	(void *) M_java_lang_ThreadGroup_activeGroupCount_R_int,
	(void *) M_java_lang_ThreadGroup_enumerate_Array1_java_lang_ThreadGroup_R_int,
	(void *) M_java_lang_ThreadGroup_enumerate_Array1_java_lang_ThreadGroup_boolean_R_int,
	(void *) M_java_lang_ThreadGroup_enumerate_Array1_java_lang_ThreadGroup_int_boolean_R_int,
	(void *) M_java_lang_ThreadGroup_stop,
	(void *) M_java_lang_ThreadGroup_interrupt,
	(void *) M_java_lang_ThreadGroup_suspend,
	(void *) M_java_lang_ThreadGroup_stopOrSuspend_boolean_R_boolean,
	(void *) M_java_lang_ThreadGroup_resume,
	(void *) M_java_lang_ThreadGroup_destroy,
	(void *) M_java_lang_ThreadGroup_add_java_lang_ThreadGroup,
	(void *) M_java_lang_ThreadGroup_remove_java_lang_ThreadGroup,
	(void *) M_java_lang_ThreadGroup_addUnstarted,
	(void *) M_java_lang_ThreadGroup_add_java_lang_Thread,
	(void *) M_java_lang_ThreadGroup_threadStartFailed_java_lang_Thread,
	(void *) M_java_lang_ThreadGroup_threadTerminated_java_lang_Thread,
	(void *) M_java_lang_ThreadGroup_remove_java_lang_Thread,
	(void *) M_java_lang_ThreadGroup_list,
	(void *) M_java_lang_ThreadGroup_list_java_io_PrintStream_int,
	(void *) M_java_lang_ThreadGroup_allowThreadSuspension_boolean_R_boolean,
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
	{ "uncaughtException", "(Ljava/lang/Thread;Ljava/lang/Throwable;)V" },
	{ "getName", "()Ljava/lang/String;" },
	{ "getParent", "()Ljava/lang/ThreadGroup;" },
	{ "getMaxPriority", "()I" },
	{ "isDaemon", "()Z" },
	{ "isDestroyed", "()Z" },
	{ "setDaemon", "(Z)V" },
	{ "setMaxPriority", "(I)V" },
	{ "parentOf", "(Ljava/lang/ThreadGroup;)Z" },
	{ "checkAccess", "()V" },
	{ "activeCount", "()I" },
	{ "enumerate", "([Ljava/lang/Thread;)I" },
	{ "enumerate", "([Ljava/lang/Thread;Z)I" },
	{ "enumerate", "([Ljava/lang/Thread;IZ)I" },
	{ "activeGroupCount", "()I" },
	{ "enumerate", "([Ljava/lang/ThreadGroup;)I" },
	{ "enumerate", "([Ljava/lang/ThreadGroup;Z)I" },
	{ "enumerate", "([Ljava/lang/ThreadGroup;IZ)I" },
	{ "stop", "()V" },
	{ "interrupt", "()V" },
	{ "suspend", "()V" },
	{ "stopOrSuspend", "(Z)Z" },
	{ "resume", "()V" },
	{ "destroy", "()V" },
	{ "add", "(Ljava/lang/ThreadGroup;)V" },
	{ "remove", "(Ljava/lang/ThreadGroup;)V" },
	{ "addUnstarted", "()V" },
	{ "add", "(Ljava/lang/Thread;)V" },
	{ "threadStartFailed", "(Ljava/lang/Thread;)V" },
	{ "threadTerminated", "(Ljava/lang/Thread;)V" },
	{ "remove", "(Ljava/lang/Thread;)V" },
	{ "list", "()V" },
	{ "list", "(Ljava/io/PrintStream;I)V" },
	{ "allowThreadSuspension", "(Z)Z" },
};

static jclass interfaces[] { &class_java_lang_Thread$UncaughtExceptionHandler, };

static FieldMetadata fields[] {
	{ "parent", &class_java_lang_ThreadGroup, offsetof(java_lang_ThreadGroup, F_parent), "Ljava/lang/ThreadGroup;", 18 },
	{ "name", &class_java_lang_String, offsetof(java_lang_ThreadGroup, F_name), "Ljava/lang/String;", 0 },
	{ "maxPriority", &class_int, offsetof(java_lang_ThreadGroup, F_maxPriority), "I", 0 },
	{ "destroyed", &class_boolean, offsetof(java_lang_ThreadGroup, F_destroyed), "Z", 0 },
	{ "daemon", &class_boolean, offsetof(java_lang_ThreadGroup, F_daemon), "Z", 0 },
	{ "nUnstartedThreads", &class_int, offsetof(java_lang_ThreadGroup, F_nUnstartedThreads), "I", 0 },
	{ "nthreads", &class_int, offsetof(java_lang_ThreadGroup, F_nthreads), "I", 0 },
	{ "threads", getArrayClass(&class_java_lang_Thread, 1), offsetof(java_lang_ThreadGroup, F_threads), "[Ljava/lang/Thread;", 0 },
	{ "ngroups", &class_int, offsetof(java_lang_ThreadGroup, F_ngroups), "I", 0 },
	{ "groups", getArrayClass(&class_java_lang_ThreadGroup, 1), offsetof(java_lang_ThreadGroup, F_groups), "[Ljava/lang/ThreadGroup;", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_lang_ThreadGroup, 0, "()V", 2 },
	{ "<init>", (intptr_t) init_java_lang_ThreadGroup_java_lang_String, 0, "(Ljava/lang/String;)V", 1 },
	{ "<init>", (intptr_t) init_java_lang_ThreadGroup_java_lang_ThreadGroup_java_lang_String, 0, "(Ljava/lang/ThreadGroup;Ljava/lang/String;)V", 1 },
	{ "<init>", (intptr_t) init_java_lang_ThreadGroup_java_lang_Void_java_lang_ThreadGroup_java_lang_String, 0, "(Ljava/lang/Void;Ljava/lang/ThreadGroup;Ljava/lang/String;)V", 2 },
	{ "checkParentAccess", (intptr_t) SM_java_lang_ThreadGroup_checkParentAccess_java_lang_ThreadGroup_R_java_lang_Void, 0, "(Ljava/lang/ThreadGroup;)Ljava/lang/Void;", 10 },
	{ "getName", (intptr_t) M_java_lang_ThreadGroup_getName_R_java_lang_String, VTABLE_java_lang_ThreadGroup_getName_R_java_lang_String, "()Ljava/lang/String;", 17 },
	{ "getParent", (intptr_t) M_java_lang_ThreadGroup_getParent_R_java_lang_ThreadGroup, VTABLE_java_lang_ThreadGroup_getParent_R_java_lang_ThreadGroup, "()Ljava/lang/ThreadGroup;", 17 },
	{ "getMaxPriority", (intptr_t) M_java_lang_ThreadGroup_getMaxPriority_R_int, VTABLE_java_lang_ThreadGroup_getMaxPriority_R_int, "()I", 17 },
	{ "isDaemon", (intptr_t) M_java_lang_ThreadGroup_isDaemon_R_boolean, VTABLE_java_lang_ThreadGroup_isDaemon_R_boolean, "()Z", 17 },
	{ "isDestroyed", (intptr_t) M_java_lang_ThreadGroup_isDestroyed_R_boolean, VTABLE_java_lang_ThreadGroup_isDestroyed_R_boolean, "()Z", 33 },
	{ "setDaemon", (intptr_t) M_java_lang_ThreadGroup_setDaemon_boolean, VTABLE_java_lang_ThreadGroup_setDaemon_boolean, "(Z)V", 17 },
	{ "setMaxPriority", (intptr_t) M_java_lang_ThreadGroup_setMaxPriority_int, VTABLE_java_lang_ThreadGroup_setMaxPriority_int, "(I)V", 17 },
	{ "parentOf", (intptr_t) M_java_lang_ThreadGroup_parentOf_java_lang_ThreadGroup_R_boolean, VTABLE_java_lang_ThreadGroup_parentOf_java_lang_ThreadGroup_R_boolean, "(Ljava/lang/ThreadGroup;)Z", 17 },
	{ "checkAccess", (intptr_t) M_java_lang_ThreadGroup_checkAccess, VTABLE_java_lang_ThreadGroup_checkAccess, "()V", 17 },
	{ "activeCount", (intptr_t) M_java_lang_ThreadGroup_activeCount_R_int, VTABLE_java_lang_ThreadGroup_activeCount_R_int, "()I", 1 },
	{ "enumerate", (intptr_t) M_java_lang_ThreadGroup_enumerate_Array1_java_lang_Thread_R_int, VTABLE_java_lang_ThreadGroup_enumerate_Array1_java_lang_Thread_R_int, "([Ljava/lang/Thread;)I", 1 },
	{ "enumerate", (intptr_t) M_java_lang_ThreadGroup_enumerate_Array1_java_lang_Thread_boolean_R_int, VTABLE_java_lang_ThreadGroup_enumerate_Array1_java_lang_Thread_boolean_R_int, "([Ljava/lang/Thread;Z)I", 1 },
	{ "enumerate", (intptr_t) M_java_lang_ThreadGroup_enumerate_Array1_java_lang_Thread_int_boolean_R_int, VTABLE_java_lang_ThreadGroup_enumerate_Array1_java_lang_Thread_int_boolean_R_int, "([Ljava/lang/Thread;IZ)I", 2 },
	{ "activeGroupCount", (intptr_t) M_java_lang_ThreadGroup_activeGroupCount_R_int, VTABLE_java_lang_ThreadGroup_activeGroupCount_R_int, "()I", 1 },
	{ "enumerate", (intptr_t) M_java_lang_ThreadGroup_enumerate_Array1_java_lang_ThreadGroup_R_int, VTABLE_java_lang_ThreadGroup_enumerate_Array1_java_lang_ThreadGroup_R_int, "([Ljava/lang/ThreadGroup;)I", 1 },
	{ "enumerate", (intptr_t) M_java_lang_ThreadGroup_enumerate_Array1_java_lang_ThreadGroup_boolean_R_int, VTABLE_java_lang_ThreadGroup_enumerate_Array1_java_lang_ThreadGroup_boolean_R_int, "([Ljava/lang/ThreadGroup;Z)I", 1 },
	{ "enumerate", (intptr_t) M_java_lang_ThreadGroup_enumerate_Array1_java_lang_ThreadGroup_int_boolean_R_int, VTABLE_java_lang_ThreadGroup_enumerate_Array1_java_lang_ThreadGroup_int_boolean_R_int, "([Ljava/lang/ThreadGroup;IZ)I", 2 },
	{ "stop", (intptr_t) M_java_lang_ThreadGroup_stop, VTABLE_java_lang_ThreadGroup_stop, "()V", 131089 },
	{ "interrupt", (intptr_t) M_java_lang_ThreadGroup_interrupt, VTABLE_java_lang_ThreadGroup_interrupt, "()V", 17 },
	{ "suspend", (intptr_t) M_java_lang_ThreadGroup_suspend, VTABLE_java_lang_ThreadGroup_suspend, "()V", 131089 },
	{ "stopOrSuspend", (intptr_t) M_java_lang_ThreadGroup_stopOrSuspend_boolean_R_boolean, VTABLE_java_lang_ThreadGroup_stopOrSuspend_boolean_R_boolean, "(Z)Z", 2 },
	{ "resume", (intptr_t) M_java_lang_ThreadGroup_resume, VTABLE_java_lang_ThreadGroup_resume, "()V", 131089 },
	{ "destroy", (intptr_t) M_java_lang_ThreadGroup_destroy, VTABLE_java_lang_ThreadGroup_destroy, "()V", 17 },
	{ "add", (intptr_t) M_java_lang_ThreadGroup_add_java_lang_ThreadGroup, VTABLE_java_lang_ThreadGroup_add_java_lang_ThreadGroup, "(Ljava/lang/ThreadGroup;)V", 18 },
	{ "remove", (intptr_t) M_java_lang_ThreadGroup_remove_java_lang_ThreadGroup, VTABLE_java_lang_ThreadGroup_remove_java_lang_ThreadGroup, "(Ljava/lang/ThreadGroup;)V", 2 },
	{ "addUnstarted", (intptr_t) M_java_lang_ThreadGroup_addUnstarted, VTABLE_java_lang_ThreadGroup_addUnstarted, "()V", 0 },
	{ "add", (intptr_t) M_java_lang_ThreadGroup_add_java_lang_Thread, VTABLE_java_lang_ThreadGroup_add_java_lang_Thread, "(Ljava/lang/Thread;)V", 0 },
	{ "threadStartFailed", (intptr_t) M_java_lang_ThreadGroup_threadStartFailed_java_lang_Thread, VTABLE_java_lang_ThreadGroup_threadStartFailed_java_lang_Thread, "(Ljava/lang/Thread;)V", 0 },
	{ "threadTerminated", (intptr_t) M_java_lang_ThreadGroup_threadTerminated_java_lang_Thread, VTABLE_java_lang_ThreadGroup_threadTerminated_java_lang_Thread, "(Ljava/lang/Thread;)V", 0 },
	{ "remove", (intptr_t) M_java_lang_ThreadGroup_remove_java_lang_Thread, VTABLE_java_lang_ThreadGroup_remove_java_lang_Thread, "(Ljava/lang/Thread;)V", 2 },
	{ "list", (intptr_t) M_java_lang_ThreadGroup_list, VTABLE_java_lang_ThreadGroup_list, "()V", 1 },
	{ "list", (intptr_t) M_java_lang_ThreadGroup_list_java_io_PrintStream_int, VTABLE_java_lang_ThreadGroup_list_java_io_PrintStream_int, "(Ljava/io/PrintStream;I)V", 0 },
	{ "uncaughtException", (intptr_t) M_java_lang_ThreadGroup_uncaughtException_java_lang_Thread_java_lang_Throwable, VTABLE_java_lang_ThreadGroup_uncaughtException_java_lang_Thread_java_lang_Throwable, "(Ljava/lang/Thread;Ljava/lang/Throwable;)V", 1 },
	{ "allowThreadSuspension", (intptr_t) M_java_lang_ThreadGroup_allowThreadSuspension_boolean_R_boolean, VTABLE_java_lang_ThreadGroup_allowThreadSuspension_boolean_R_boolean, "(Z)Z", 131073 },
	{ "toString", (intptr_t) M_java_lang_ThreadGroup_toString_R_java_lang_String, VTABLE_java_lang_ThreadGroup_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
};

Class class_java_lang_ThreadGroup{
		.nativeName = (intptr_t) "java/lang/ThreadGroup",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_lang_ThreadGroup),
		.classVtable = (intptr_t) vtable_java_lang_ThreadGroup,
		.staticInitializer = (intptr_t) clinit_java_lang_ThreadGroup,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_java_lang_ThreadGroup,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 10,
		.nativeFields = (intptr_t) fields,
		.methodCount = 40,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 45,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_lang_ThreadGroup = registerClass(&class_java_lang_ThreadGroup);

}
