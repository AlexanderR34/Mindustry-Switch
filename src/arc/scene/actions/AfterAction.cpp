#include "arc/scene/actions/AfterAction.h"
#include "arc/scene/Element.h"
#include "java/lang/Object.h"
#include "arc/scene/actions/AfterAction.h"
#include "arc/scene/actions/DelegateAction.h"
#include "arc/struct/Seq.h"
#include "arc/scene/Action.h"

extern "C" {


void mark_arc_scene_actions_AfterAction(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_scene_actions_DelegateAction(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (arc_scene_actions_AfterAction *) object;
	if (self->F_waitForActions)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_waitForActions)->clazz)->markFunction)((jobject) self->F_waitForActions, mark, depth + 1);
}

void clinit_arc_scene_actions_AfterAction(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_scene_actions_DelegateAction(ctx);
}

void init_arc_scene_actions_AfterAction(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/AfterAction:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_actions_AfterAction(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(11);
	init_arc_scene_actions_DelegateAction(ctx, (frame[0].o));
	LINE_NUMBER(12);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq_boolean_int(ctx, sp[1].o, (jint(0)), (jint(4)));
	((arc_scene_actions_AfterAction *) NULL_CHECK(sp[0].o))->F_waitForActions = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_actions_AfterAction_setTarget_arc_scene_Element(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/AfterAction:setTarget", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(16);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((arc_scene_actions_AfterAction *) NULL_CHECK((frame[0].o)))->F_waitForActions;
	sp[1].o = (jobject)((func_arc_scene_Element_getActions_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_Element_getActions_R_arc_struct_Seq])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_struct_Seq_addAll_arc_struct_Seq_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_addAll_arc_struct_Seq_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	}
label_1:;
	{
	LINE_NUMBER(17);
	M_arc_scene_actions_DelegateAction_setTarget_arc_scene_Element(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(18);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_actions_AfterAction_restart(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/AfterAction:restart", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(22);
	M_arc_scene_actions_DelegateAction_restart(ctx, (frame[0].o));
	LINE_NUMBER(23);
	sp[0].o = (jobject)((arc_scene_actions_AfterAction *) NULL_CHECK((frame[0].o)))->F_waitForActions;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(24);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_actions_AfterAction_delegate_float_R_boolean(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/AfterAction:delegate", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(28);
	sp[0].o = (jobject)((arc_scene_Action *) NULL_CHECK((frame[0].o)))->F_target;
	sp[0].o = (jobject)((func_arc_scene_Element_getActions_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Element_getActions_R_arc_struct_Seq])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(29);
	if (((jint)((arc_struct_Seq *) NULL_CHECK((frame[2].o)))->F_size) != (jint(1))) goto label_2;
	}
	{
	sp[0].o = (jobject)((arc_scene_actions_AfterAction *) NULL_CHECK((frame[0].o)))->F_waitForActions;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	}
label_2:;
	{
	LINE_NUMBER(30);
	sp[0].o = (jobject)((arc_scene_actions_AfterAction *) NULL_CHECK((frame[0].o)))->F_waitForActions;
	frame[3].i = (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) - (jint(1)));
	}
label_3:;
	INST_ILOAD(3);
	if ((--sp)->i < 0) goto label_4;
	{
	LINE_NUMBER(31);
	sp[0].o = (jobject)((arc_scene_actions_AfterAction *) NULL_CHECK((frame[0].o)))->F_waitForActions;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[3].i));
	frame[4].o = (checkCast(ctx, &class_arc_scene_Action, sp[0].o));
	LINE_NUMBER(32);
	jint temp0 = (jint)((func_arc_struct_Seq_indexOf_java_lang_Object_boolean_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_Seq_indexOf_java_lang_Object_boolean_R_int])(ctx, (frame[2].o), (frame[4].o), (jint(1)));
	frame[5].i = temp0;
	LINE_NUMBER(33);
	if ((frame[5].i) != (jint(-1))) goto label_8;
	}
	{
	sp[0].o = (jobject)((arc_scene_actions_AfterAction *) NULL_CHECK((frame[0].o)))->F_waitForActions;
	sp[0].o = (jobject)((func_arc_struct_Seq_remove_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_remove_int_R_java_lang_Object])(ctx, sp[0].o, (frame[3].i));
	}
label_8:;
	{
	LINE_NUMBER(30);
	INST_IINC(3, -1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(35);
	sp[0].o = (jobject)((arc_scene_actions_AfterAction *) NULL_CHECK((frame[0].o)))->F_waitForActions;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) > 0) goto label_9;
	}
	{
	sp[0].o = (jobject)((arc_scene_actions_DelegateAction *) NULL_CHECK((frame[0].o)))->F_action;
	jint temp0 = (jint)((func_arc_scene_Action_act_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Action_act_float_R_boolean])(ctx, sp[0].o, (frame[1].f));
	if (temp0 == 0) goto label_9;
	}
	INST_ICONST(1);
	goto label_10;
label_9:;
	INST_ICONST(0);
label_10:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void *vtable_arc_scene_actions_AfterAction[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_arc_scene_actions_DelegateAction_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_arc_scene_actions_DelegateAction_reset,
	(void *) M_arc_scene_actions_DelegateAction_act_float_R_boolean,
	(void *) M_arc_scene_actions_AfterAction_restart,
	(void *) M_arc_scene_Action_getActor_R_arc_scene_Element,
	(void *) M_arc_scene_actions_DelegateAction_setActor_arc_scene_Element,
	(void *) M_arc_scene_Action_getTarget_R_arc_scene_Element,
	(void *) M_arc_scene_actions_AfterAction_setTarget_arc_scene_Element,
	(void *) M_arc_scene_Action_getPool_R_arc_util_pooling_Pool,
	(void *) M_arc_scene_Action_setPool_arc_util_pooling_Pool,
	(void *) M_arc_scene_actions_DelegateAction_getAction_R_arc_scene_Action,
	(void *) M_arc_scene_actions_DelegateAction_setAction_arc_scene_Action,
	(void *) M_arc_scene_actions_AfterAction_delegate_float_R_boolean,
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
	{ "getAction", "()Larc/scene/Action;" },
	{ "setAction", "(Larc/scene/Action;)V" },
	{ "delegate", "(F)Z" },
};

static FieldMetadata fields[] {
	{ "waitForActions", &class_arc_struct_Seq, offsetof(arc_scene_actions_AfterAction, F_waitForActions), "Larc/struct/Seq;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_scene_actions_AfterAction, 0, "()V", 1 },
	{ "setTarget", (intptr_t) M_arc_scene_actions_AfterAction_setTarget_arc_scene_Element, VTABLE_arc_scene_actions_AfterAction_setTarget_arc_scene_Element, "(Larc/scene/Element;)V", 1 },
	{ "restart", (intptr_t) M_arc_scene_actions_AfterAction_restart, VTABLE_arc_scene_actions_AfterAction_restart, "()V", 1 },
	{ "delegate", (intptr_t) M_arc_scene_actions_AfterAction_delegate_float_R_boolean, VTABLE_arc_scene_actions_AfterAction_delegate_float_R_boolean, "(F)Z", 4 },
};

Class class_arc_scene_actions_AfterAction{
		.nativeName = (intptr_t) "arc/scene/actions/AfterAction",
		.parentClass = (intptr_t) &class_arc_scene_actions_DelegateAction,
		.size = sizeof(arc_scene_actions_AfterAction),
		.classVtable = (intptr_t) vtable_arc_scene_actions_AfterAction,
		.staticInitializer = (intptr_t) clinit_arc_scene_actions_AfterAction,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_scene_actions_AfterAction,
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
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 23,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_scene_actions_AfterAction = registerClass(&class_arc_scene_actions_AfterAction);

}
