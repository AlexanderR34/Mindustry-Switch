#include "arc/scene/actions/DelegateAction.h"
#include "arc/scene/Element.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/scene/actions/DelegateAction.h"
#include "arc/util/pooling/Pool.h"
#include "arc/scene/Action.h"
#include "java/lang/Throwable.h"

extern "C" {


void mark_arc_scene_actions_DelegateAction(jobject object, jint mark, jint depth) {
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
	auto self = (arc_scene_actions_DelegateAction *) object;
	if (self->F_action)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_action)->clazz)->markFunction)((jobject) self->F_action, mark, depth + 1);
}

void clinit_arc_scene_actions_DelegateAction(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_scene_Action(ctx);
}

void init_arc_scene_actions_DelegateAction(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/DelegateAction:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_actions_DelegateAction(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(11);
	init_arc_scene_Action(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_actions_DelegateAction_getAction_R_arc_scene_Action(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/DelegateAction:getAction", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(15);
	sp[0].o = (jobject)((arc_scene_actions_DelegateAction *) NULL_CHECK((frame[0].o)))->F_action;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_scene_actions_DelegateAction_setAction_arc_scene_Action(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/DelegateAction:setAction", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(20);
	((arc_scene_actions_DelegateAction *) NULL_CHECK((frame[0].o)))->F_action = (jref) (frame[1].o);
	LINE_NUMBER(21);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_actions_DelegateAction_act_float_R_boolean(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/DelegateAction:act", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(27);
	sp[0].o = (jobject)((func_arc_scene_actions_DelegateAction_getPool_R_arc_util_pooling_Pool) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_actions_DelegateAction_getPool_R_arc_util_pooling_Pool])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(28);
	((func_arc_scene_actions_DelegateAction_setPool_arc_util_pooling_Pool) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_actions_DelegateAction_setPool_arc_util_pooling_Pool])(ctx, (frame[0].o), (jobject(nullptr)));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(30);
	jint temp0 = (jint)((func_arc_scene_actions_DelegateAction_delegate_float_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_actions_DelegateAction_delegate_float_R_boolean])(ctx, (frame[0].o), (frame[1].f));
	frame[3].i = temp0;
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(32);
	((func_arc_scene_actions_DelegateAction_setPool_arc_util_pooling_Pool) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_actions_DelegateAction_setPool_arc_util_pooling_Pool])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(30);
	popStackFrame(ctx);
	return (frame[3].i);
	}
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(32);
	INST_ASTORE(4);
	popExceptionFrame(frameRef);
	{
	((func_arc_scene_actions_DelegateAction_setPool_arc_util_pooling_Pool) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_actions_DelegateAction_setPool_arc_util_pooling_Pool])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(33);
	throwException(ctx, (frame[4].o));	}

	popStackFrame(ctx);
}

void M_arc_scene_actions_DelegateAction_restart(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/DelegateAction:restart", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(38);
	sp[0].o = (jobject)((arc_scene_actions_DelegateAction *) NULL_CHECK((frame[0].o)))->F_action;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((arc_scene_actions_DelegateAction *) NULL_CHECK((frame[0].o)))->F_action;
	((func_arc_scene_Action_restart) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Action_restart])(ctx, sp[0].o);
	}
label_1:;
	LINE_NUMBER(39);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_scene_actions_DelegateAction_reset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/DelegateAction:reset", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(43);
	M_arc_scene_Action_reset(ctx, (frame[0].o));
	LINE_NUMBER(44);
	((arc_scene_actions_DelegateAction *) NULL_CHECK((frame[0].o)))->F_action = (jref) (jobject(nullptr));
	LINE_NUMBER(45);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_actions_DelegateAction_setActor_arc_scene_Element(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/DelegateAction:setActor", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(49);
	sp[0].o = (jobject)((arc_scene_actions_DelegateAction *) NULL_CHECK((frame[0].o)))->F_action;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((arc_scene_actions_DelegateAction *) NULL_CHECK((frame[0].o)))->F_action;
	((func_arc_scene_Action_setActor_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Action_setActor_arc_scene_Element])(ctx, sp[0].o, (frame[1].o));
	}
label_1:;
	{
	LINE_NUMBER(50);
	M_arc_scene_Action_setActor_arc_scene_Element(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(51);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_actions_DelegateAction_setTarget_arc_scene_Element(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/DelegateAction:setTarget", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(55);
	sp[0].o = (jobject)((arc_scene_actions_DelegateAction *) NULL_CHECK((frame[0].o)))->F_action;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((arc_scene_actions_DelegateAction *) NULL_CHECK((frame[0].o)))->F_action;
	((func_arc_scene_Action_setTarget_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Action_setTarget_arc_scene_Element])(ctx, sp[0].o, (frame[1].o));
	}
label_1:;
	{
	LINE_NUMBER(56);
	M_arc_scene_Action_setTarget_arc_scene_Element(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(57);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_actions_DelegateAction_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/DelegateAction:toString", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(60);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[1].o = (jobject)M_arc_scene_Action_toString_R_java_lang_String(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[1].o = (jobject)((arc_scene_actions_DelegateAction *) NULL_CHECK((frame[0].o)))->F_action;
	sp += 1;
	if (sp[0].o != nullptr) goto label_1;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
	goto label_2;
label_1:;
	{
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"("_j))));
	sp[1].o = (jobject)((arc_scene_actions_DelegateAction *) NULL_CHECK((frame[0].o)))->F_action;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8")"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	}
label_2:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_arc_scene_actions_DelegateAction[] {
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
	(void *) M_arc_scene_actions_DelegateAction_restart,
	(void *) M_arc_scene_Action_getActor_R_arc_scene_Element,
	(void *) M_arc_scene_actions_DelegateAction_setActor_arc_scene_Element,
	(void *) M_arc_scene_Action_getTarget_R_arc_scene_Element,
	(void *) M_arc_scene_actions_DelegateAction_setTarget_arc_scene_Element,
	(void *) M_arc_scene_Action_getPool_R_arc_util_pooling_Pool,
	(void *) M_arc_scene_Action_setPool_arc_util_pooling_Pool,
	(void *) M_arc_scene_actions_DelegateAction_getAction_R_arc_scene_Action,
	(void *) M_arc_scene_actions_DelegateAction_setAction_arc_scene_Action,
	(void *) nullptr,
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
	{ "action", &class_arc_scene_Action, offsetof(arc_scene_actions_DelegateAction, F_action), "Larc/scene/Action;", 4 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_scene_actions_DelegateAction, 0, "()V", 1 },
	{ "getAction", (intptr_t) M_arc_scene_actions_DelegateAction_getAction_R_arc_scene_Action, VTABLE_arc_scene_actions_DelegateAction_getAction_R_arc_scene_Action, "()Larc/scene/Action;", 1 },
	{ "setAction", (intptr_t) M_arc_scene_actions_DelegateAction_setAction_arc_scene_Action, VTABLE_arc_scene_actions_DelegateAction_setAction_arc_scene_Action, "(Larc/scene/Action;)V", 1 },
	{ "delegate", 0, VTABLE_arc_scene_actions_DelegateAction_delegate_float_R_boolean, "(F)Z", 1028 },
	{ "act", (intptr_t) M_arc_scene_actions_DelegateAction_act_float_R_boolean, VTABLE_arc_scene_actions_DelegateAction_act_float_R_boolean, "(F)Z", 17 },
	{ "restart", (intptr_t) M_arc_scene_actions_DelegateAction_restart, VTABLE_arc_scene_actions_DelegateAction_restart, "()V", 1 },
	{ "reset", (intptr_t) M_arc_scene_actions_DelegateAction_reset, VTABLE_arc_scene_actions_DelegateAction_reset, "()V", 1 },
	{ "setActor", (intptr_t) M_arc_scene_actions_DelegateAction_setActor_arc_scene_Element, VTABLE_arc_scene_actions_DelegateAction_setActor_arc_scene_Element, "(Larc/scene/Element;)V", 1 },
	{ "setTarget", (intptr_t) M_arc_scene_actions_DelegateAction_setTarget_arc_scene_Element, VTABLE_arc_scene_actions_DelegateAction_setTarget_arc_scene_Element, "(Larc/scene/Element;)V", 1 },
	{ "toString", (intptr_t) M_arc_scene_actions_DelegateAction_toString_R_java_lang_String, VTABLE_arc_scene_actions_DelegateAction_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
};

Class class_arc_scene_actions_DelegateAction{
		.nativeName = (intptr_t) "arc/scene/actions/DelegateAction",
		.parentClass = (intptr_t) &class_arc_scene_Action,
		.size = sizeof(arc_scene_actions_DelegateAction),
		.classVtable = (intptr_t) vtable_arc_scene_actions_DelegateAction,
		.staticInitializer = (intptr_t) clinit_arc_scene_actions_DelegateAction,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_scene_actions_DelegateAction,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1057,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 10,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 23,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_scene_actions_DelegateAction = registerClass(&class_arc_scene_actions_DelegateAction);

}
