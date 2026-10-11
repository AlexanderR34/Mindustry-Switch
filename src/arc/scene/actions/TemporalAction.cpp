#include "arc/scene/actions/TemporalAction.h"
#include "java/lang/Object.h"
#include "arc/math/Interp.h"
#include "arc/scene/actions/TemporalAction.h"
#include "arc/util/pooling/Pool.h"
#include "arc/scene/Action.h"
#include "java/lang/Throwable.h"

extern "C" {


void mark_arc_scene_actions_TemporalAction(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_scene_Action(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (arc_scene_actions_TemporalAction *) object;
	if (self->F_interpolation)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_interpolation)->clazz)->markFunction)((jobject) self->F_interpolation, mark, depth + 1);
}

void clinit_arc_scene_actions_TemporalAction(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_scene_Action(ctx);
}

void init_arc_scene_actions_TemporalAction(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/TemporalAction:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_actions_TemporalAction(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(16);
	init_arc_scene_Action(ctx, (frame[0].o));
	LINE_NUMBER(17);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_scene_actions_TemporalAction_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/TemporalAction:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_actions_TemporalAction(ctx);
	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(19);
	init_arc_scene_Action(ctx, (frame[0].o));
	LINE_NUMBER(20);
	((arc_scene_actions_TemporalAction *) NULL_CHECK((frame[0].o)))->F_duration = (frame[1].f);
	LINE_NUMBER(21);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_scene_actions_TemporalAction_float_arc_math_Interp(jcontext ctx, jobject self, jfloat param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/TemporalAction:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_actions_TemporalAction(ctx);
	frame[0].o = self;
	frame[1].f = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(23);
	init_arc_scene_Action(ctx, (frame[0].o));
	LINE_NUMBER(24);
	((arc_scene_actions_TemporalAction *) NULL_CHECK((frame[0].o)))->F_duration = (frame[1].f);
	LINE_NUMBER(25);
	((arc_scene_actions_TemporalAction *) NULL_CHECK((frame[0].o)))->F_interpolation = (jref) (frame[2].o);
	LINE_NUMBER(26);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_actions_TemporalAction_act_float_R_boolean(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/TemporalAction:act", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(30);
	if (((jint)((arc_scene_actions_TemporalAction *) NULL_CHECK((frame[0].o)))->F_complete) == 0) goto label_7;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_7:;
	{
	LINE_NUMBER(31);
	sp[0].o = (jobject)((func_arc_scene_actions_TemporalAction_getPool_R_arc_util_pooling_Pool) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_actions_TemporalAction_getPool_R_arc_util_pooling_Pool])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(32);
	((func_arc_scene_actions_TemporalAction_setPool_arc_util_pooling_Pool) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_actions_TemporalAction_setPool_arc_util_pooling_Pool])(ctx, (frame[0].o), (jobject(nullptr)));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(34);
	if (((jint)((arc_scene_actions_TemporalAction *) NULL_CHECK((frame[0].o)))->F_began) != 0) goto label_9;
	}
	{
	LINE_NUMBER(35);
	((func_arc_scene_actions_TemporalAction_begin) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_actions_TemporalAction_begin])(ctx, (frame[0].o));
	LINE_NUMBER(36);
	((arc_scene_actions_TemporalAction *) NULL_CHECK((frame[0].o)))->F_began = (jint(1));
	}
label_9:;
	{
	LINE_NUMBER(38);
	sp[0].o = frame[0].o;
	((arc_scene_actions_TemporalAction *) NULL_CHECK(sp[0].o))->F_time = (((jfloat)((arc_scene_actions_TemporalAction *) NULL_CHECK(sp[0].o))->F_time) + (frame[1].f));
	LINE_NUMBER(39);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((floatCompare(((jfloat)((arc_scene_actions_TemporalAction *) NULL_CHECK((frame[0].o)))->F_time), ((jfloat)((arc_scene_actions_TemporalAction *) NULL_CHECK((frame[0].o)))->F_duration), -1)) < 0) goto label_13;
	}
	INST_ICONST(1);
	goto label_14;
label_13:;
	INST_ICONST(0);
label_14:;
	{
	sp -= 2;
	((arc_scene_actions_TemporalAction *) NULL_CHECK(sp[0].o))->F_complete = sp[1].i;
	LINE_NUMBER(41);
	if (((jint)((arc_scene_actions_TemporalAction *) NULL_CHECK((frame[0].o)))->F_complete) == 0) goto label_16;
	}
	{
	LINE_NUMBER(42);
	frame[3].f = (jfloat(1));
	goto label_19;
	}
label_16:;
	{
	LINE_NUMBER(44);
	frame[3].f = (((jfloat)((arc_scene_actions_TemporalAction *) NULL_CHECK((frame[0].o)))->F_time) / ((jfloat)((arc_scene_actions_TemporalAction *) NULL_CHECK((frame[0].o)))->F_duration));
	LINE_NUMBER(45);
	sp[0].o = (jobject)((arc_scene_actions_TemporalAction *) NULL_CHECK((frame[0].o)))->F_interpolation;
	if (sp[0].o == nullptr) goto label_19;
	}
	{
	sp[0].o = (jobject)((arc_scene_actions_TemporalAction *) NULL_CHECK((frame[0].o)))->F_interpolation;
	jfloat temp0 = (jfloat)((func_arc_math_Interp_apply_float_R_float) resolveInterfaceMethod(ctx, &class_arc_math_Interp, INDEX_arc_math_Interp_apply_float_R_float, sp[0].o))(ctx, sp[0].o, (frame[3].f));
	frame[3].f = temp0;
	}
label_19:;
	{
	LINE_NUMBER(47);
	sp[0].o = frame[0].o;
	sp += 1;
	if (((jint)((arc_scene_actions_TemporalAction *) NULL_CHECK((frame[0].o)))->F_reverse) == 0) goto label_21;
	}
	{
	jfloat temp0 = (jfloat(1)) - (frame[3].f);
	sp[0].f = temp0;
	sp += 1;
	goto label_22;
	}
label_21:;
	INST_FLOAD(3);
label_22:;
	{
	sp -= 2;
	((func_arc_scene_actions_TemporalAction_update_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_actions_TemporalAction_update_float])(ctx, sp[0].o, sp[1].f);
	LINE_NUMBER(48);
	if (((jint)((arc_scene_actions_TemporalAction *) NULL_CHECK((frame[0].o)))->F_complete) == 0) goto label_24;
	}
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	((func_arc_scene_actions_TemporalAction_end) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_actions_TemporalAction_end])(ctx, sp[0].o);
label_24:;
	{
	LINE_NUMBER(49);
	frame[4].i = ((jint)((arc_scene_actions_TemporalAction *) NULL_CHECK((frame[0].o)))->F_complete);
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(51);
	((func_arc_scene_actions_TemporalAction_setPool_arc_util_pooling_Pool) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_actions_TemporalAction_setPool_arc_util_pooling_Pool])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(49);
	popStackFrame(ctx);
	return (frame[4].i);
	}
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(51);
	INST_ASTORE(5);
	popExceptionFrame(frameRef);
	{
	((func_arc_scene_actions_TemporalAction_setPool_arc_util_pooling_Pool) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_actions_TemporalAction_setPool_arc_util_pooling_Pool])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(52);
	throwException(ctx, (frame[5].o));	}

	popStackFrame(ctx);
}

void M_arc_scene_actions_TemporalAction_begin(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/TemporalAction:begin", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(60);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_scene_actions_TemporalAction_end(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/TemporalAction:end", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(64);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_scene_actions_TemporalAction_finish(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/TemporalAction:finish", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(75);
	((arc_scene_actions_TemporalAction *) NULL_CHECK((frame[0].o)))->F_time = ((jfloat)((arc_scene_actions_TemporalAction *) NULL_CHECK((frame[0].o)))->F_duration);
	LINE_NUMBER(76);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_actions_TemporalAction_restart(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/TemporalAction:restart", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(80);
	((arc_scene_actions_TemporalAction *) NULL_CHECK((frame[0].o)))->F_time = (jfloat(0));
	LINE_NUMBER(81);
	((arc_scene_actions_TemporalAction *) NULL_CHECK((frame[0].o)))->F_began = (jint(0));
	LINE_NUMBER(82);
	((arc_scene_actions_TemporalAction *) NULL_CHECK((frame[0].o)))->F_complete = (jint(0));
	LINE_NUMBER(83);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_actions_TemporalAction_reset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/TemporalAction:reset", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(87);
	M_arc_scene_Action_reset(ctx, (frame[0].o));
	LINE_NUMBER(88);
	((arc_scene_actions_TemporalAction *) NULL_CHECK((frame[0].o)))->F_reverse = (jint(0));
	LINE_NUMBER(89);
	((arc_scene_actions_TemporalAction *) NULL_CHECK((frame[0].o)))->F_interpolation = (jref) (jobject(nullptr));
	LINE_NUMBER(90);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_arc_scene_actions_TemporalAction_getTime_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/TemporalAction:getTime", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(94);
	popStackFrame(ctx);
	return ((jfloat)((arc_scene_actions_TemporalAction *) NULL_CHECK((frame[0].o)))->F_time);
	}

	popStackFrame(ctx);
}

void M_arc_scene_actions_TemporalAction_setTime_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/TemporalAction:setTime", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(99);
	((arc_scene_actions_TemporalAction *) NULL_CHECK((frame[0].o)))->F_time = (frame[1].f);
	LINE_NUMBER(100);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_arc_scene_actions_TemporalAction_getDuration_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/TemporalAction:getDuration", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(103);
	popStackFrame(ctx);
	return ((jfloat)((arc_scene_actions_TemporalAction *) NULL_CHECK((frame[0].o)))->F_duration);
	}

	popStackFrame(ctx);
}

void M_arc_scene_actions_TemporalAction_setDuration_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/TemporalAction:setDuration", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(108);
	((arc_scene_actions_TemporalAction *) NULL_CHECK((frame[0].o)))->F_duration = (frame[1].f);
	LINE_NUMBER(109);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_actions_TemporalAction_getInterpolation_R_arc_math_Interp(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/TemporalAction:getInterpolation", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(112);
	sp[0].o = (jobject)((arc_scene_actions_TemporalAction *) NULL_CHECK((frame[0].o)))->F_interpolation;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_scene_actions_TemporalAction_setInterpolation_arc_math_Interp(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/TemporalAction:setInterpolation", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(116);
	((arc_scene_actions_TemporalAction *) NULL_CHECK((frame[0].o)))->F_interpolation = (jref) (frame[1].o);
	LINE_NUMBER(117);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_actions_TemporalAction_isReverse_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/TemporalAction:isReverse", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(120);
	popStackFrame(ctx);
	return ((jint)((arc_scene_actions_TemporalAction *) NULL_CHECK((frame[0].o)))->F_reverse);
	}

	popStackFrame(ctx);
}

void M_arc_scene_actions_TemporalAction_setReverse_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/TemporalAction:setReverse", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(125);
	((arc_scene_actions_TemporalAction *) NULL_CHECK((frame[0].o)))->F_reverse = (frame[1].i);
	LINE_NUMBER(126);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_scene_actions_TemporalAction[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_arc_scene_Action_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_arc_scene_actions_TemporalAction_reset,
	(void *) M_arc_scene_actions_TemporalAction_act_float_R_boolean,
	(void *) M_arc_scene_actions_TemporalAction_restart,
	(void *) M_arc_scene_Action_getActor_R_arc_scene_Element,
	(void *) M_arc_scene_Action_setActor_arc_scene_Element,
	(void *) M_arc_scene_Action_getTarget_R_arc_scene_Element,
	(void *) M_arc_scene_Action_setTarget_arc_scene_Element,
	(void *) M_arc_scene_Action_getPool_R_arc_util_pooling_Pool,
	(void *) M_arc_scene_Action_setPool_arc_util_pooling_Pool,
	(void *) M_arc_scene_actions_TemporalAction_begin,
	(void *) M_arc_scene_actions_TemporalAction_end,
	(void *) nullptr,
	(void *) M_arc_scene_actions_TemporalAction_finish,
	(void *) M_arc_scene_actions_TemporalAction_getTime_R_float,
	(void *) M_arc_scene_actions_TemporalAction_setTime_float,
	(void *) M_arc_scene_actions_TemporalAction_getDuration_R_float,
	(void *) M_arc_scene_actions_TemporalAction_setDuration_float,
	(void *) M_arc_scene_actions_TemporalAction_getInterpolation_R_arc_math_Interp,
	(void *) M_arc_scene_actions_TemporalAction_setInterpolation_arc_math_Interp,
	(void *) M_arc_scene_actions_TemporalAction_isReverse_R_boolean,
	(void *) M_arc_scene_actions_TemporalAction_setReverse_boolean,
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
	{ "reset", "()V" },
	{ "act", "(F)Z" },
	{ "restart", "()V" },
	{ "getActor", "()Larc/scene/Element;" },
	{ "setActor", "(Larc/scene/Element;)V" },
	{ "getTarget", "()Larc/scene/Element;" },
	{ "setTarget", "(Larc/scene/Element;)V" },
	{ "getPool", "()Larc/util/pooling/Pool;" },
	{ "setPool", "(Larc/util/pooling/Pool;)V" },
	{ "begin", "()V" },
	{ "end", "()V" },
	{ "update", "(F)V" },
	{ "finish", "()V" },
	{ "getTime", "()F" },
	{ "setTime", "(F)V" },
	{ "getDuration", "()F" },
	{ "setDuration", "(F)V" },
	{ "getInterpolation", "()Larc/math/Interp;" },
	{ "setInterpolation", "(Larc/math/Interp;)V" },
	{ "isReverse", "()Z" },
	{ "setReverse", "(Z)V" },
};

static FieldMetadata fields[] {
	{ "duration", &class_float, offsetof(arc_scene_actions_TemporalAction, F_duration), "F", 2 },
	{ "time", &class_float, offsetof(arc_scene_actions_TemporalAction, F_time), "F", 2 },
	{ "interpolation", &class_arc_math_Interp, offsetof(arc_scene_actions_TemporalAction, F_interpolation), "Larc/math/Interp;", 2 },
	{ "reverse", &class_boolean, offsetof(arc_scene_actions_TemporalAction, F_reverse), "Z", 2 },
	{ "began", &class_boolean, offsetof(arc_scene_actions_TemporalAction, F_began), "Z", 2 },
	{ "complete", &class_boolean, offsetof(arc_scene_actions_TemporalAction, F_complete), "Z", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_scene_actions_TemporalAction, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_arc_scene_actions_TemporalAction_float, 0, "(F)V", 1 },
	{ "<init>", (intptr_t) init_arc_scene_actions_TemporalAction_float_arc_math_Interp, 0, "(FLarc/math/Interp;)V", 1 },
	{ "act", (intptr_t) M_arc_scene_actions_TemporalAction_act_float_R_boolean, VTABLE_arc_scene_actions_TemporalAction_act_float_R_boolean, "(F)Z", 1 },
	{ "begin", (intptr_t) M_arc_scene_actions_TemporalAction_begin, VTABLE_arc_scene_actions_TemporalAction_begin, "()V", 4 },
	{ "end", (intptr_t) M_arc_scene_actions_TemporalAction_end, VTABLE_arc_scene_actions_TemporalAction_end, "()V", 4 },
	{ "update", 0, VTABLE_arc_scene_actions_TemporalAction_update_float, "(F)V", 1028 },
	{ "finish", (intptr_t) M_arc_scene_actions_TemporalAction_finish, VTABLE_arc_scene_actions_TemporalAction_finish, "()V", 1 },
	{ "restart", (intptr_t) M_arc_scene_actions_TemporalAction_restart, VTABLE_arc_scene_actions_TemporalAction_restart, "()V", 1 },
	{ "reset", (intptr_t) M_arc_scene_actions_TemporalAction_reset, VTABLE_arc_scene_actions_TemporalAction_reset, "()V", 1 },
	{ "getTime", (intptr_t) M_arc_scene_actions_TemporalAction_getTime_R_float, VTABLE_arc_scene_actions_TemporalAction_getTime_R_float, "()F", 1 },
	{ "setTime", (intptr_t) M_arc_scene_actions_TemporalAction_setTime_float, VTABLE_arc_scene_actions_TemporalAction_setTime_float, "(F)V", 1 },
	{ "getDuration", (intptr_t) M_arc_scene_actions_TemporalAction_getDuration_R_float, VTABLE_arc_scene_actions_TemporalAction_getDuration_R_float, "()F", 1 },
	{ "setDuration", (intptr_t) M_arc_scene_actions_TemporalAction_setDuration_float, VTABLE_arc_scene_actions_TemporalAction_setDuration_float, "(F)V", 1 },
	{ "getInterpolation", (intptr_t) M_arc_scene_actions_TemporalAction_getInterpolation_R_arc_math_Interp, VTABLE_arc_scene_actions_TemporalAction_getInterpolation_R_arc_math_Interp, "()Larc/math/Interp;", 1 },
	{ "setInterpolation", (intptr_t) M_arc_scene_actions_TemporalAction_setInterpolation_arc_math_Interp, VTABLE_arc_scene_actions_TemporalAction_setInterpolation_arc_math_Interp, "(Larc/math/Interp;)V", 1 },
	{ "isReverse", (intptr_t) M_arc_scene_actions_TemporalAction_isReverse_R_boolean, VTABLE_arc_scene_actions_TemporalAction_isReverse_R_boolean, "()Z", 1 },
	{ "setReverse", (intptr_t) M_arc_scene_actions_TemporalAction_setReverse_boolean, VTABLE_arc_scene_actions_TemporalAction_setReverse_boolean, "(Z)V", 1 },
};

Class class_arc_scene_actions_TemporalAction{
		.nativeName = (intptr_t) "arc/scene/actions/TemporalAction",
		.parentClass = (intptr_t) &class_arc_scene_Action,
		.size = sizeof(arc_scene_actions_TemporalAction),
		.classVtable = (intptr_t) vtable_arc_scene_actions_TemporalAction,
		.staticInitializer = (intptr_t) clinit_arc_scene_actions_TemporalAction,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_scene_actions_TemporalAction,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1057,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 6,
		.nativeFields = (intptr_t) fields,
		.methodCount = 18,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 32,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_scene_actions_TemporalAction = registerClass(&class_arc_scene_actions_TemporalAction);

}
