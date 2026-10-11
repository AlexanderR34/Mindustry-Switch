#include "arc/scene/actions/SequenceAction.h"
#include "arc/scene/actions/ParallelAction.h"
#include "java/lang/Object.h"
#include "arc/scene/Element.h"
#include "arc/scene/actions/SequenceAction.h"
#include "arc/struct/Seq.h"
#include "arc/util/pooling/Pool.h"
#include "arc/scene/Action.h"
#include "java/lang/Throwable.h"

extern "C" {


void mark_arc_scene_actions_SequenceAction(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_scene_actions_ParallelAction(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (arc_scene_actions_SequenceAction *) object;
}

void clinit_arc_scene_actions_SequenceAction(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_scene_actions_ParallelAction(ctx);
}

void init_arc_scene_actions_SequenceAction(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/SequenceAction:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_actions_SequenceAction(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(13);
	init_arc_scene_actions_ParallelAction(ctx, (frame[0].o));
	LINE_NUMBER(14);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_scene_actions_SequenceAction_arc_scene_Action(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/SequenceAction:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_actions_SequenceAction(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(16);
	init_arc_scene_actions_ParallelAction(ctx, (frame[0].o));
	LINE_NUMBER(17);
	((func_arc_scene_actions_SequenceAction_addAction_arc_scene_Action) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_actions_SequenceAction_addAction_arc_scene_Action])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(18);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_scene_actions_SequenceAction_arc_scene_Action_arc_scene_Action(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/SequenceAction:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_actions_SequenceAction(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(20);
	init_arc_scene_actions_ParallelAction(ctx, (frame[0].o));
	LINE_NUMBER(21);
	((func_arc_scene_actions_SequenceAction_addAction_arc_scene_Action) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_actions_SequenceAction_addAction_arc_scene_Action])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(22);
	((func_arc_scene_actions_SequenceAction_addAction_arc_scene_Action) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_actions_SequenceAction_addAction_arc_scene_Action])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(23);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_scene_actions_SequenceAction_arc_scene_Action_arc_scene_Action_arc_scene_Action(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/SequenceAction:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_actions_SequenceAction(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(25);
	init_arc_scene_actions_ParallelAction(ctx, (frame[0].o));
	LINE_NUMBER(26);
	((func_arc_scene_actions_SequenceAction_addAction_arc_scene_Action) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_actions_SequenceAction_addAction_arc_scene_Action])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(27);
	((func_arc_scene_actions_SequenceAction_addAction_arc_scene_Action) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_actions_SequenceAction_addAction_arc_scene_Action])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(28);
	((func_arc_scene_actions_SequenceAction_addAction_arc_scene_Action) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_actions_SequenceAction_addAction_arc_scene_Action])(ctx, (frame[0].o), (frame[3].o));
	LINE_NUMBER(29);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_scene_actions_SequenceAction_arc_scene_Action_arc_scene_Action_arc_scene_Action_arc_scene_Action(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/SequenceAction:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_actions_SequenceAction(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(31);
	init_arc_scene_actions_ParallelAction(ctx, (frame[0].o));
	LINE_NUMBER(32);
	((func_arc_scene_actions_SequenceAction_addAction_arc_scene_Action) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_actions_SequenceAction_addAction_arc_scene_Action])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(33);
	((func_arc_scene_actions_SequenceAction_addAction_arc_scene_Action) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_actions_SequenceAction_addAction_arc_scene_Action])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(34);
	((func_arc_scene_actions_SequenceAction_addAction_arc_scene_Action) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_actions_SequenceAction_addAction_arc_scene_Action])(ctx, (frame[0].o), (frame[3].o));
	LINE_NUMBER(35);
	((func_arc_scene_actions_SequenceAction_addAction_arc_scene_Action) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_actions_SequenceAction_addAction_arc_scene_Action])(ctx, (frame[0].o), (frame[4].o));
	LINE_NUMBER(36);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_scene_actions_SequenceAction_arc_scene_Action_arc_scene_Action_arc_scene_Action_arc_scene_Action_arc_scene_Action(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/SequenceAction:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_actions_SequenceAction(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(38);
	init_arc_scene_actions_ParallelAction(ctx, (frame[0].o));
	LINE_NUMBER(39);
	((func_arc_scene_actions_SequenceAction_addAction_arc_scene_Action) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_actions_SequenceAction_addAction_arc_scene_Action])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(40);
	((func_arc_scene_actions_SequenceAction_addAction_arc_scene_Action) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_actions_SequenceAction_addAction_arc_scene_Action])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(41);
	((func_arc_scene_actions_SequenceAction_addAction_arc_scene_Action) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_actions_SequenceAction_addAction_arc_scene_Action])(ctx, (frame[0].o), (frame[3].o));
	LINE_NUMBER(42);
	((func_arc_scene_actions_SequenceAction_addAction_arc_scene_Action) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_actions_SequenceAction_addAction_arc_scene_Action])(ctx, (frame[0].o), (frame[4].o));
	LINE_NUMBER(43);
	((func_arc_scene_actions_SequenceAction_addAction_arc_scene_Action) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_actions_SequenceAction_addAction_arc_scene_Action])(ctx, (frame[0].o), (frame[5].o));
	LINE_NUMBER(44);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_actions_SequenceAction_act_float_R_boolean(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/SequenceAction:act", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(48);
	jint temp0 = (jint)((arc_scene_actions_SequenceAction *) NULL_CHECK((frame[0].o)))->F_index;
	sp[0].o = (jobject)((arc_scene_actions_ParallelAction *) NULL_CHECK((frame[0].o)))->F_actions;
	if (temp0 < ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_13;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_13:;
	{
	LINE_NUMBER(49);
	sp[0].o = (jobject)((func_arc_scene_actions_SequenceAction_getPool_R_arc_util_pooling_Pool) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_actions_SequenceAction_getPool_R_arc_util_pooling_Pool])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(50);
	((func_arc_scene_actions_SequenceAction_setPool_arc_util_pooling_Pool) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_actions_SequenceAction_setPool_arc_util_pooling_Pool])(ctx, (frame[0].o), (jobject(nullptr)));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(52);
	sp[0].o = (jobject)((arc_scene_actions_ParallelAction *) NULL_CHECK((frame[0].o)))->F_actions;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, ((jint)((arc_scene_actions_SequenceAction *) NULL_CHECK((frame[0].o)))->F_index));
	jint temp0 = (jint)((func_arc_scene_Action_act_float_R_boolean) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_scene_Action, sp[0].o)))->vtable)[VTABLE_arc_scene_Action_act_float_R_boolean])(ctx, (checkCast(ctx, &class_arc_scene_Action, sp[0].o)), (frame[1].f));
	if (temp0 == 0) { popExceptionFrames(frameRef, 1); goto label_7; }
	}
	{
	LINE_NUMBER(53);
	sp[0].o = (jobject)((arc_scene_Action *) NULL_CHECK((frame[0].o)))->F_actor;
	if (sp[0].o != nullptr) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	INST_ICONST(1);
	INST_ISTORE(3);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(59);
	((func_arc_scene_actions_SequenceAction_setPool_arc_util_pooling_Pool) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_actions_SequenceAction_setPool_arc_util_pooling_Pool])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(53);
	popStackFrame(ctx);
	return (frame[3].i);
	}
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(54);
	sp[0].o = frame[0].o;
	((arc_scene_actions_SequenceAction *) NULL_CHECK(sp[0].o))->F_index = (((jint)((arc_scene_actions_SequenceAction *) NULL_CHECK(sp[0].o))->F_index) + (jint(1)));
	LINE_NUMBER(55);
	jint temp0 = (jint)((arc_scene_actions_SequenceAction *) NULL_CHECK((frame[0].o)))->F_index;
	sp[0].o = (jobject)((arc_scene_actions_ParallelAction *) NULL_CHECK((frame[0].o)))->F_actions;
	if (temp0 < ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_18;
	}
	INST_ICONST(1);
	goto label_19;
label_18:;
	INST_ICONST(0);
label_19:;
	INST_ISTORE(3);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(59);
	((func_arc_scene_actions_SequenceAction_setPool_arc_util_pooling_Pool) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_actions_SequenceAction_setPool_arc_util_pooling_Pool])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(55);
	popStackFrame(ctx);
	return (frame[3].i);
	}
label_7:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(57);
	frame[3].i = (jint(0));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(59);
	((func_arc_scene_actions_SequenceAction_setPool_arc_util_pooling_Pool) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_actions_SequenceAction_setPool_arc_util_pooling_Pool])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(57);
	popStackFrame(ctx);
	return (frame[3].i);
	}
label_2:;
label_11: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(59);
	INST_ASTORE(4);
	popExceptionFrame(frameRef);
	{
	((func_arc_scene_actions_SequenceAction_setPool_arc_util_pooling_Pool) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_actions_SequenceAction_setPool_arc_util_pooling_Pool])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(60);
	throwException(ctx, (frame[4].o));	}

	popStackFrame(ctx);
}

void M_arc_scene_actions_SequenceAction_restart(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/SequenceAction:restart", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(65);
	M_arc_scene_actions_ParallelAction_restart(ctx, (frame[0].o));
	LINE_NUMBER(66);
	((arc_scene_actions_SequenceAction *) NULL_CHECK((frame[0].o)))->F_index = (jint(0));
	LINE_NUMBER(67);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_scene_actions_SequenceAction[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_arc_scene_actions_ParallelAction_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_arc_scene_actions_ParallelAction_reset,
	(void *) M_arc_scene_actions_SequenceAction_act_float_R_boolean,
	(void *) M_arc_scene_actions_SequenceAction_restart,
	(void *) M_arc_scene_Action_getActor_R_arc_scene_Element,
	(void *) M_arc_scene_actions_ParallelAction_setActor_arc_scene_Element,
	(void *) M_arc_scene_Action_getTarget_R_arc_scene_Element,
	(void *) M_arc_scene_Action_setTarget_arc_scene_Element,
	(void *) M_arc_scene_Action_getPool_R_arc_util_pooling_Pool,
	(void *) M_arc_scene_Action_setPool_arc_util_pooling_Pool,
	(void *) M_arc_scene_actions_ParallelAction_addAction_arc_scene_Action,
	(void *) M_arc_scene_actions_ParallelAction_getActions_R_arc_struct_Seq,
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
	{ "addAction", "(Larc/scene/Action;)V" },
	{ "getActions", "()Larc/struct/Seq;" },
};

static FieldMetadata fields[] {
	{ "index", &class_int, offsetof(arc_scene_actions_SequenceAction, F_index), "I", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_scene_actions_SequenceAction, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_arc_scene_actions_SequenceAction_arc_scene_Action, 0, "(Larc/scene/Action;)V", 1 },
	{ "<init>", (intptr_t) init_arc_scene_actions_SequenceAction_arc_scene_Action_arc_scene_Action, 0, "(Larc/scene/Action;Larc/scene/Action;)V", 1 },
	{ "<init>", (intptr_t) init_arc_scene_actions_SequenceAction_arc_scene_Action_arc_scene_Action_arc_scene_Action, 0, "(Larc/scene/Action;Larc/scene/Action;Larc/scene/Action;)V", 1 },
	{ "<init>", (intptr_t) init_arc_scene_actions_SequenceAction_arc_scene_Action_arc_scene_Action_arc_scene_Action_arc_scene_Action, 0, "(Larc/scene/Action;Larc/scene/Action;Larc/scene/Action;Larc/scene/Action;)V", 1 },
	{ "<init>", (intptr_t) init_arc_scene_actions_SequenceAction_arc_scene_Action_arc_scene_Action_arc_scene_Action_arc_scene_Action_arc_scene_Action, 0, "(Larc/scene/Action;Larc/scene/Action;Larc/scene/Action;Larc/scene/Action;Larc/scene/Action;)V", 1 },
	{ "act", (intptr_t) M_arc_scene_actions_SequenceAction_act_float_R_boolean, VTABLE_arc_scene_actions_SequenceAction_act_float_R_boolean, "(F)Z", 1 },
	{ "restart", (intptr_t) M_arc_scene_actions_SequenceAction_restart, VTABLE_arc_scene_actions_SequenceAction_restart, "()V", 1 },
};

Class class_arc_scene_actions_SequenceAction{
		.nativeName = (intptr_t) "arc/scene/actions/SequenceAction",
		.parentClass = (intptr_t) &class_arc_scene_actions_ParallelAction,
		.size = sizeof(arc_scene_actions_SequenceAction),
		.classVtable = (intptr_t) vtable_arc_scene_actions_SequenceAction,
		.staticInitializer = (intptr_t) clinit_arc_scene_actions_SequenceAction,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_scene_actions_SequenceAction,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 8,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 22,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_scene_actions_SequenceAction = registerClass(&class_arc_scene_actions_SequenceAction);

}
