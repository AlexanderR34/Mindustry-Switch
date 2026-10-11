#include "arc/scene/actions/Actions.h"
#include "arc/scene/actions/Actions_invoke_arc_func_Prov_10.h"
#include "arc/scene/actions/ParallelAction.h"
#include "arc/scene/actions/Actions_invoke_arc_func_Prov_11.h"
#include "arc/func/Prov.h"
#include "arc/scene/actions/Actions_invoke_arc_func_Prov_14.h"
#include "arc/scene/actions/Actions_invoke_arc_func_Prov_15.h"
#include "arc/scene/actions/ScaleByAction.h"
#include "arc/scene/actions/Actions_invoke_arc_func_Prov_12.h"
#include "arc/scene/actions/Actions_invoke_arc_func_Prov_13.h"
#include "arc/scene/actions/RemoveAction.h"
#include "arc/scene/actions/SizeToAction.h"
#include "arc/graphics/Color.h"
#include "java/lang/Runnable.h"
#include "arc/scene/actions/SequenceAction.h"
#include "arc/scene/event/Touchable.h"
#include "arc/util/pooling/Pools.h"
#include "arc/scene/actions/TimeScaleAction.h"
#include "arc/scene/actions/TemporalAction.h"
#include "arc/scene/actions/DelayAction.h"
#include "arc/scene/actions/VisibleAction.h"
#include "arc/scene/actions/Actions_invoke_arc_func_Prov_21.h"
#include "arc/scene/actions/Actions_invoke_java_lang_Runnable_0.h"
#include "arc/scene/actions/Actions_invoke_arc_func_Prov_22.h"
#include "arc/scene/actions/Actions_invoke_arc_func_Prov_20.h"
#include "arc/scene/actions/Actions_invoke_arc_func_Prov_25.h"
#include "arc/math/Interp.h"
#include "arc/scene/actions/Actions_invoke_arc_func_Prov_26.h"
#include "arc/scene/actions/Actions_invoke_arc_func_Prov_23.h"
#include "arc/scene/actions/Actions_invoke_arc_func_Prov_24.h"
#include "arc/scene/actions/DelegateAction.h"
#include "arc/scene/actions/TouchableAction.h"
#include "java/lang/Object.h"
#include "arc/scene/actions/ScaleToAction.h"
#include "arc/scene/actions/MoveByAction.h"
#include "arc/scene/actions/Actions_invoke_arc_func_Prov_18.h"
#include "arc/util/pooling/Pool.h"
#include "arc/scene/actions/Actions_invoke_arc_func_Prov_19.h"
#include "arc/scene/actions/Actions_invoke_arc_func_Prov_16.h"
#include "arc/scene/actions/ColorAction.h"
#include "arc/scene/actions/Actions_invoke_arc_func_Prov_17.h"
#include "arc/scene/actions/AddAction.h"
#include "arc/scene/actions/Actions_invoke_arc_func_Prov_8.h"
#include "arc/scene/actions/Actions_invoke_arc_func_Prov_32.h"
#include "arc/scene/actions/Actions_invoke_arc_func_Prov_7.h"
#include "arc/scene/actions/Actions_invoke_arc_func_Prov_33.h"
#include "arc/scene/actions/Actions_invoke_arc_func_Prov_30.h"
#include "arc/scene/actions/OriginAction.h"
#include "arc/scene/actions/RunnableAction.h"
#include "arc/scene/actions/Actions_invoke_arc_func_Prov_9.h"
#include "arc/scene/actions/Actions_invoke_arc_func_Prov_31.h"
#include "arc/scene/actions/Actions_invoke_arc_func_Prov_4.h"
#include "arc/scene/actions/Actions_invoke_arc_func_Prov_36.h"
#include "arc/scene/actions/Actions_invoke_arc_func_Prov_3.h"
#include "arc/scene/actions/Actions_invoke_arc_func_Prov_37.h"
#include "arc/scene/actions/Actions_invoke_arc_func_Prov_6.h"
#include "arc/scene/actions/Actions_invoke_arc_func_Prov_34.h"
#include "arc/scene/actions/Actions_invoke_arc_func_Prov_5.h"
#include "arc/scene/actions/Actions_invoke_arc_func_Prov_35.h"
#include "arc/scene/actions/Actions_invoke_arc_func_Prov_0.h"
#include "arc/scene/actions/Actions_invoke_arc_func_Prov_2.h"
#include "arc/scene/Action.h"
#include "arc/scene/actions/Actions_invoke_arc_func_Prov_1.h"
#include "arc/scene/actions/MoveToAction.h"
#include "arc/scene/actions/SizeByAction.h"
#include "arc/scene/actions/Actions_invoke_arc_func_Prov_29.h"
#include "arc/scene/actions/RepeatAction.h"
#include "arc/scene/actions/Actions_invoke_arc_func_Prov_27.h"
#include "arc/scene/actions/Actions_invoke_arc_func_Prov_28.h"
#include "arc/scene/actions/Actions_invoke_arc_func_Prov_43.h"
#include "arc/scene/actions/Actions_invoke_arc_func_Prov_44.h"
#include "arc/scene/actions/Actions_invoke_arc_func_Prov_41.h"
#include "arc/scene/actions/Actions_invoke_arc_func_Prov_42.h"
#include "arc/scene/actions/Actions_invoke_arc_func_Prov_47.h"
#include "arc/scene/actions/LayoutAction.h"
#include "arc/scene/actions/Actions_invoke_arc_func_Prov_48.h"
#include "arc/scene/actions/Actions_invoke_arc_func_Prov_45.h"
#include "arc/scene/actions/Actions_invoke_arc_func_Prov_46.h"
#include "arc/scene/actions/RemoveListenerAction.h"
#include "arc/scene/actions/AddListenerAction.h"
#include "arc/scene/actions/Actions_invoke_arc_func_Prov_40.h"
#include "arc/scene/actions/Actions.h"
#include "arc/scene/Element.h"
#include "arc/scene/actions/TranslateByAction.h"
#include "arc/scene/actions/AlphaAction.h"
#include "arc/scene/actions/AfterAction.h"
#include "arc/scene/actions/RotateByAction.h"
#include "arc/scene/event/EventListener.h"
#include "arc/scene/actions/RotateToAction.h"
#include "arc/scene/actions/Actions_invoke_arc_func_Prov_38.h"
#include "arc/scene/actions/Actions_invoke_arc_func_Prov_39.h"
#include "java/lang/Class.h"
#include "arc/scene/actions/RemoveActorAction.h"

extern "C" {


void mark_arc_scene_actions_Actions(jobject object, jint mark, jint depth) {
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
	auto self = (arc_scene_actions_Actions *) object;
}

void clinit_arc_scene_actions_Actions(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_scene_actions_Actions(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/Actions:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_actions_Actions(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(16);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_arc_scene_actions_Actions_action_java_lang_Class_arc_func_Prov_R_arc_scene_Action(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/Actions:action", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_actions_Actions(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(19);
	sp[0].o = (jobject)SM_arc_util_pooling_Pools_obtain_java_lang_Class_arc_func_Prov_R_java_lang_Object(ctx, (frame[0].o), (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_arc_scene_Action, sp[0].o));
	LINE_NUMBER(20);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)SM_arc_util_pooling_Pools_get_java_lang_Class_arc_func_Prov_R_arc_util_pooling_Pool(ctx, (frame[0].o), (frame[1].o));
	((func_arc_scene_Action_setPool_arc_util_pooling_Pool) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Action_setPool_arc_util_pooling_Pool])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(21);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject SM_arc_scene_actions_Actions_addAction_arc_scene_Action_R_arc_scene_actions_AddAction(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/Actions:addAction", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_actions_Actions(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(25);
	sp[0].o = ((jobject) &class_arc_scene_actions_AddAction);
	{ /* InvokeDynamic */
		clinit_arc_scene_actions_Actions_invoke_arc_func_Prov_0(ctx);
		auto proxy = (arc_scene_actions_Actions_invoke_arc_func_Prov_0 *) gcAlloc(ctx, &class_arc_scene_actions_Actions_invoke_arc_func_Prov_0);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_scene_actions_Actions_action_java_lang_Class_arc_func_Prov_R_arc_scene_Action(ctx, sp[0].o, sp[1].o);
	frame[1].o = (checkCast(ctx, &class_arc_scene_actions_AddAction, sp[0].o));
	LINE_NUMBER(26);
	((func_arc_scene_actions_AddAction_setAction_arc_scene_Action) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_actions_AddAction_setAction_arc_scene_Action])(ctx, (frame[1].o), (frame[0].o));
	LINE_NUMBER(27);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject SM_arc_scene_actions_Actions_addAction_arc_scene_Action_arc_scene_Element_R_arc_scene_actions_AddAction(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/Actions:addAction", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_actions_Actions(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(31);
	sp[0].o = ((jobject) &class_arc_scene_actions_AddAction);
	{ /* InvokeDynamic */
		clinit_arc_scene_actions_Actions_invoke_arc_func_Prov_1(ctx);
		auto proxy = (arc_scene_actions_Actions_invoke_arc_func_Prov_1 *) gcAlloc(ctx, &class_arc_scene_actions_Actions_invoke_arc_func_Prov_1);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_scene_actions_Actions_action_java_lang_Class_arc_func_Prov_R_arc_scene_Action(ctx, sp[0].o, sp[1].o);
	frame[2].o = (checkCast(ctx, &class_arc_scene_actions_AddAction, sp[0].o));
	LINE_NUMBER(32);
	((func_arc_scene_actions_AddAction_setTarget_arc_scene_Element) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_actions_AddAction_setTarget_arc_scene_Element])(ctx, (frame[2].o), (frame[1].o));
	LINE_NUMBER(33);
	((func_arc_scene_actions_AddAction_setAction_arc_scene_Action) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_actions_AddAction_setAction_arc_scene_Action])(ctx, (frame[2].o), (frame[0].o));
	LINE_NUMBER(34);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject SM_arc_scene_actions_Actions_removeAction_arc_scene_Action_R_arc_scene_actions_RemoveAction(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/Actions:removeAction", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_actions_Actions(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(38);
	sp[0].o = ((jobject) &class_arc_scene_actions_RemoveAction);
	{ /* InvokeDynamic */
		clinit_arc_scene_actions_Actions_invoke_arc_func_Prov_2(ctx);
		auto proxy = (arc_scene_actions_Actions_invoke_arc_func_Prov_2 *) gcAlloc(ctx, &class_arc_scene_actions_Actions_invoke_arc_func_Prov_2);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_scene_actions_Actions_action_java_lang_Class_arc_func_Prov_R_arc_scene_Action(ctx, sp[0].o, sp[1].o);
	frame[1].o = (checkCast(ctx, &class_arc_scene_actions_RemoveAction, sp[0].o));
	LINE_NUMBER(39);
	((func_arc_scene_actions_RemoveAction_setAction_arc_scene_Action) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_actions_RemoveAction_setAction_arc_scene_Action])(ctx, (frame[1].o), (frame[0].o));
	LINE_NUMBER(40);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject SM_arc_scene_actions_Actions_removeAction_arc_scene_Action_arc_scene_Element_R_arc_scene_actions_RemoveAction(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/Actions:removeAction", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_actions_Actions(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(44);
	sp[0].o = ((jobject) &class_arc_scene_actions_RemoveAction);
	{ /* InvokeDynamic */
		clinit_arc_scene_actions_Actions_invoke_arc_func_Prov_3(ctx);
		auto proxy = (arc_scene_actions_Actions_invoke_arc_func_Prov_3 *) gcAlloc(ctx, &class_arc_scene_actions_Actions_invoke_arc_func_Prov_3);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_scene_actions_Actions_action_java_lang_Class_arc_func_Prov_R_arc_scene_Action(ctx, sp[0].o, sp[1].o);
	frame[2].o = (checkCast(ctx, &class_arc_scene_actions_RemoveAction, sp[0].o));
	LINE_NUMBER(45);
	((func_arc_scene_actions_RemoveAction_setTarget_arc_scene_Element) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_actions_RemoveAction_setTarget_arc_scene_Element])(ctx, (frame[2].o), (frame[1].o));
	LINE_NUMBER(46);
	((func_arc_scene_actions_RemoveAction_setAction_arc_scene_Action) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_actions_RemoveAction_setAction_arc_scene_Action])(ctx, (frame[2].o), (frame[0].o));
	LINE_NUMBER(47);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject SM_arc_scene_actions_Actions_originCenter_R_arc_scene_Action(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/Actions:originCenter", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_actions_Actions(ctx);
	{
	LINE_NUMBER(52);
	clinit_arc_scene_actions_OriginAction(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_actions_OriginAction);
	init_arc_scene_actions_OriginAction(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_scene_actions_Actions_moveTo_float_float_R_arc_scene_actions_MoveToAction(jcontext ctx, jfloat param0, jfloat param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/Actions:moveTo", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_actions_Actions(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(57);
	sp[0].o = (jobject)SM_arc_scene_actions_Actions_moveTo_float_float_float_arc_math_Interp_R_arc_scene_actions_MoveToAction(ctx, (frame[0].f), (frame[1].f), (jfloat(0)), (jobject(nullptr)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_scene_actions_Actions_moveTo_float_float_float_R_arc_scene_actions_MoveToAction(jcontext ctx, jfloat param0, jfloat param1, jfloat param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/Actions:moveTo", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_actions_Actions(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	{
	LINE_NUMBER(61);
	sp[0].o = (jobject)SM_arc_scene_actions_Actions_moveTo_float_float_float_arc_math_Interp_R_arc_scene_actions_MoveToAction(ctx, (frame[0].f), (frame[1].f), (frame[2].f), (jobject(nullptr)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_scene_actions_Actions_moveTo_float_float_float_arc_math_Interp_R_arc_scene_actions_MoveToAction(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jobject param3) {
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/Actions:moveTo", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_actions_Actions(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(65);
	sp[0].o = ((jobject) &class_arc_scene_actions_MoveToAction);
	{ /* InvokeDynamic */
		clinit_arc_scene_actions_Actions_invoke_arc_func_Prov_4(ctx);
		auto proxy = (arc_scene_actions_Actions_invoke_arc_func_Prov_4 *) gcAlloc(ctx, &class_arc_scene_actions_Actions_invoke_arc_func_Prov_4);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_scene_actions_Actions_action_java_lang_Class_arc_func_Prov_R_arc_scene_Action(ctx, sp[0].o, sp[1].o);
	frame[4].o = (checkCast(ctx, &class_arc_scene_actions_MoveToAction, sp[0].o));
	LINE_NUMBER(66);
	((func_arc_scene_actions_MoveToAction_setPosition_float_float) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_actions_MoveToAction_setPosition_float_float])(ctx, (frame[4].o), (frame[0].f), (frame[1].f));
	LINE_NUMBER(67);
	((func_arc_scene_actions_MoveToAction_setDuration_float) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_actions_MoveToAction_setDuration_float])(ctx, (frame[4].o), (frame[2].f));
	LINE_NUMBER(68);
	((func_arc_scene_actions_MoveToAction_setInterpolation_arc_math_Interp) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_actions_MoveToAction_setInterpolation_arc_math_Interp])(ctx, (frame[4].o), (frame[3].o));
	LINE_NUMBER(69);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

jobject SM_arc_scene_actions_Actions_moveToAligned_float_float_int_R_arc_scene_actions_MoveToAction(jcontext ctx, jfloat param0, jfloat param1, jint param2) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/Actions:moveToAligned", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_actions_Actions(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(73);
	sp[0].o = (jobject)SM_arc_scene_actions_Actions_moveToAligned_float_float_int_float_arc_math_Interp_R_arc_scene_actions_MoveToAction(ctx, (frame[0].f), (frame[1].f), (frame[2].i), (jfloat(0)), (jobject(nullptr)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_scene_actions_Actions_moveToAligned_float_float_int_float_R_arc_scene_actions_MoveToAction(jcontext ctx, jfloat param0, jfloat param1, jint param2, jfloat param3) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/Actions:moveToAligned", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_actions_Actions(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].i = param2;
	frame[3].f = param3;
	{
	LINE_NUMBER(77);
	sp[0].o = (jobject)SM_arc_scene_actions_Actions_moveToAligned_float_float_int_float_arc_math_Interp_R_arc_scene_actions_MoveToAction(ctx, (frame[0].f), (frame[1].f), (frame[2].i), (frame[3].f), (jobject(nullptr)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_scene_actions_Actions_moveToAligned_float_float_int_float_arc_math_Interp_R_arc_scene_actions_MoveToAction(jcontext ctx, jfloat param0, jfloat param1, jint param2, jfloat param3, jobject param4) {
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/Actions:moveToAligned", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_actions_Actions(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].i = param2;
	frame[3].f = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(81);
	sp[0].o = ((jobject) &class_arc_scene_actions_MoveToAction);
	{ /* InvokeDynamic */
		clinit_arc_scene_actions_Actions_invoke_arc_func_Prov_5(ctx);
		auto proxy = (arc_scene_actions_Actions_invoke_arc_func_Prov_5 *) gcAlloc(ctx, &class_arc_scene_actions_Actions_invoke_arc_func_Prov_5);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_scene_actions_Actions_action_java_lang_Class_arc_func_Prov_R_arc_scene_Action(ctx, sp[0].o, sp[1].o);
	frame[5].o = (checkCast(ctx, &class_arc_scene_actions_MoveToAction, sp[0].o));
	LINE_NUMBER(82);
	((func_arc_scene_actions_MoveToAction_setPosition_float_float_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_scene_actions_MoveToAction_setPosition_float_float_int])(ctx, (frame[5].o), (frame[0].f), (frame[1].f), (frame[2].i));
	LINE_NUMBER(83);
	((func_arc_scene_actions_MoveToAction_setDuration_float) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_scene_actions_MoveToAction_setDuration_float])(ctx, (frame[5].o), (frame[3].f));
	LINE_NUMBER(84);
	((func_arc_scene_actions_MoveToAction_setInterpolation_arc_math_Interp) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_scene_actions_MoveToAction_setInterpolation_arc_math_Interp])(ctx, (frame[5].o), (frame[4].o));
	LINE_NUMBER(85);
	popStackFrame(ctx);
	return (frame[5].o);
	}

	popStackFrame(ctx);
}

jobject SM_arc_scene_actions_Actions_moveBy_float_float_R_arc_scene_actions_MoveByAction(jcontext ctx, jfloat param0, jfloat param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/Actions:moveBy", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_actions_Actions(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(90);
	sp[0].o = (jobject)SM_arc_scene_actions_Actions_moveBy_float_float_float_arc_math_Interp_R_arc_scene_actions_MoveByAction(ctx, (frame[0].f), (frame[1].f), (jfloat(0)), (jobject(nullptr)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_scene_actions_Actions_moveBy_float_float_float_R_arc_scene_actions_MoveByAction(jcontext ctx, jfloat param0, jfloat param1, jfloat param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/Actions:moveBy", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_actions_Actions(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	{
	LINE_NUMBER(94);
	sp[0].o = (jobject)SM_arc_scene_actions_Actions_moveBy_float_float_float_arc_math_Interp_R_arc_scene_actions_MoveByAction(ctx, (frame[0].f), (frame[1].f), (frame[2].f), (jobject(nullptr)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_scene_actions_Actions_translateTo_float_float_R_arc_scene_actions_RunnableAction(jcontext ctx, jfloat param0, jfloat param1) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/Actions:translateTo", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_actions_Actions(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(98);
	sp[0].o = ((jobject) &class_arc_scene_actions_RunnableAction);
	{ /* InvokeDynamic */
		clinit_arc_scene_actions_Actions_invoke_arc_func_Prov_6(ctx);
		auto proxy = (arc_scene_actions_Actions_invoke_arc_func_Prov_6 *) gcAlloc(ctx, &class_arc_scene_actions_Actions_invoke_arc_func_Prov_6);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_scene_actions_Actions_action_java_lang_Class_arc_func_Prov_R_arc_scene_Action(ctx, sp[0].o, sp[1].o);
	frame[2].o = (checkCast(ctx, &class_arc_scene_actions_RunnableAction, sp[0].o));
	LINE_NUMBER(99);
	sp[0].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_arc_scene_actions_Actions_invoke_java_lang_Runnable_0(ctx);
		auto proxy = (arc_scene_actions_Actions_invoke_java_lang_Runnable_0 *) gcAlloc(ctx, &class_arc_scene_actions_Actions_invoke_java_lang_Runnable_0);
		proxy->F_field2 = (frame[1].f);
		proxy->F_field1 = (frame[0].f);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_scene_actions_RunnableAction_setRunnable_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_actions_RunnableAction_setRunnable_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(100);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject SM_arc_scene_actions_Actions_translateBy_float_float_float_arc_math_Interp_R_arc_scene_actions_TranslateByAction(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jobject param3) {
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/Actions:translateBy", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_actions_Actions(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(104);
	sp[0].o = ((jobject) &class_arc_scene_actions_TranslateByAction);
	{ /* InvokeDynamic */
		clinit_arc_scene_actions_Actions_invoke_arc_func_Prov_7(ctx);
		auto proxy = (arc_scene_actions_Actions_invoke_arc_func_Prov_7 *) gcAlloc(ctx, &class_arc_scene_actions_Actions_invoke_arc_func_Prov_7);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_scene_actions_Actions_action_java_lang_Class_arc_func_Prov_R_arc_scene_Action(ctx, sp[0].o, sp[1].o);
	frame[4].o = (checkCast(ctx, &class_arc_scene_actions_TranslateByAction, sp[0].o));
	LINE_NUMBER(105);
	((func_arc_scene_actions_TranslateByAction_setAmount_float_float) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_actions_TranslateByAction_setAmount_float_float])(ctx, (frame[4].o), (frame[0].f), (frame[1].f));
	LINE_NUMBER(106);
	((func_arc_scene_actions_TranslateByAction_setDuration_float) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_actions_TranslateByAction_setDuration_float])(ctx, (frame[4].o), (frame[2].f));
	LINE_NUMBER(107);
	((func_arc_scene_actions_TranslateByAction_setInterpolation_arc_math_Interp) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_actions_TranslateByAction_setInterpolation_arc_math_Interp])(ctx, (frame[4].o), (frame[3].o));
	LINE_NUMBER(108);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

jobject SM_arc_scene_actions_Actions_translateBy_float_float_R_arc_scene_actions_TranslateByAction(jcontext ctx, jfloat param0, jfloat param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/Actions:translateBy", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_actions_Actions(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(112);
	sp[0].o = (jobject)SM_arc_scene_actions_Actions_translateBy_float_float_float_arc_math_Interp_R_arc_scene_actions_TranslateByAction(ctx, (frame[0].f), (frame[1].f), (jfloat(0)), (jobject(nullptr)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_scene_actions_Actions_translateBy_float_float_float_R_arc_scene_actions_TranslateByAction(jcontext ctx, jfloat param0, jfloat param1, jfloat param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/Actions:translateBy", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_actions_Actions(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	{
	LINE_NUMBER(116);
	sp[0].o = (jobject)SM_arc_scene_actions_Actions_translateBy_float_float_float_arc_math_Interp_R_arc_scene_actions_TranslateByAction(ctx, (frame[0].f), (frame[1].f), (frame[2].f), (jobject(nullptr)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_scene_actions_Actions_moveBy_float_float_float_arc_math_Interp_R_arc_scene_actions_MoveByAction(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jobject param3) {
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/Actions:moveBy", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_actions_Actions(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(120);
	sp[0].o = ((jobject) &class_arc_scene_actions_MoveByAction);
	{ /* InvokeDynamic */
		clinit_arc_scene_actions_Actions_invoke_arc_func_Prov_8(ctx);
		auto proxy = (arc_scene_actions_Actions_invoke_arc_func_Prov_8 *) gcAlloc(ctx, &class_arc_scene_actions_Actions_invoke_arc_func_Prov_8);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_scene_actions_Actions_action_java_lang_Class_arc_func_Prov_R_arc_scene_Action(ctx, sp[0].o, sp[1].o);
	frame[4].o = (checkCast(ctx, &class_arc_scene_actions_MoveByAction, sp[0].o));
	LINE_NUMBER(121);
	((func_arc_scene_actions_MoveByAction_setAmount_float_float) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_actions_MoveByAction_setAmount_float_float])(ctx, (frame[4].o), (frame[0].f), (frame[1].f));
	LINE_NUMBER(122);
	((func_arc_scene_actions_MoveByAction_setDuration_float) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_actions_MoveByAction_setDuration_float])(ctx, (frame[4].o), (frame[2].f));
	LINE_NUMBER(123);
	((func_arc_scene_actions_MoveByAction_setInterpolation_arc_math_Interp) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_actions_MoveByAction_setInterpolation_arc_math_Interp])(ctx, (frame[4].o), (frame[3].o));
	LINE_NUMBER(124);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

jobject SM_arc_scene_actions_Actions_sizeTo_float_float_R_arc_scene_actions_SizeToAction(jcontext ctx, jfloat param0, jfloat param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/Actions:sizeTo", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_actions_Actions(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(129);
	sp[0].o = (jobject)SM_arc_scene_actions_Actions_sizeTo_float_float_float_arc_math_Interp_R_arc_scene_actions_SizeToAction(ctx, (frame[0].f), (frame[1].f), (jfloat(0)), (jobject(nullptr)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_scene_actions_Actions_sizeTo_float_float_float_R_arc_scene_actions_SizeToAction(jcontext ctx, jfloat param0, jfloat param1, jfloat param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/Actions:sizeTo", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_actions_Actions(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	{
	LINE_NUMBER(133);
	sp[0].o = (jobject)SM_arc_scene_actions_Actions_sizeTo_float_float_float_arc_math_Interp_R_arc_scene_actions_SizeToAction(ctx, (frame[0].f), (frame[1].f), (frame[2].f), (jobject(nullptr)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_scene_actions_Actions_sizeTo_float_float_float_arc_math_Interp_R_arc_scene_actions_SizeToAction(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jobject param3) {
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/Actions:sizeTo", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_actions_Actions(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(137);
	sp[0].o = ((jobject) &class_arc_scene_actions_SizeToAction);
	{ /* InvokeDynamic */
		clinit_arc_scene_actions_Actions_invoke_arc_func_Prov_9(ctx);
		auto proxy = (arc_scene_actions_Actions_invoke_arc_func_Prov_9 *) gcAlloc(ctx, &class_arc_scene_actions_Actions_invoke_arc_func_Prov_9);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_scene_actions_Actions_action_java_lang_Class_arc_func_Prov_R_arc_scene_Action(ctx, sp[0].o, sp[1].o);
	frame[4].o = (checkCast(ctx, &class_arc_scene_actions_SizeToAction, sp[0].o));
	LINE_NUMBER(138);
	((func_arc_scene_actions_SizeToAction_setSize_float_float) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_actions_SizeToAction_setSize_float_float])(ctx, (frame[4].o), (frame[0].f), (frame[1].f));
	LINE_NUMBER(139);
	((func_arc_scene_actions_SizeToAction_setDuration_float) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_actions_SizeToAction_setDuration_float])(ctx, (frame[4].o), (frame[2].f));
	LINE_NUMBER(140);
	((func_arc_scene_actions_SizeToAction_setInterpolation_arc_math_Interp) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_actions_SizeToAction_setInterpolation_arc_math_Interp])(ctx, (frame[4].o), (frame[3].o));
	LINE_NUMBER(141);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

jobject SM_arc_scene_actions_Actions_sizeBy_float_float_R_arc_scene_actions_SizeByAction(jcontext ctx, jfloat param0, jfloat param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/Actions:sizeBy", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_actions_Actions(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(146);
	sp[0].o = (jobject)SM_arc_scene_actions_Actions_sizeBy_float_float_float_arc_math_Interp_R_arc_scene_actions_SizeByAction(ctx, (frame[0].f), (frame[1].f), (jfloat(0)), (jobject(nullptr)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_scene_actions_Actions_sizeBy_float_float_float_R_arc_scene_actions_SizeByAction(jcontext ctx, jfloat param0, jfloat param1, jfloat param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/Actions:sizeBy", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_actions_Actions(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	{
	LINE_NUMBER(150);
	sp[0].o = (jobject)SM_arc_scene_actions_Actions_sizeBy_float_float_float_arc_math_Interp_R_arc_scene_actions_SizeByAction(ctx, (frame[0].f), (frame[1].f), (frame[2].f), (jobject(nullptr)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_scene_actions_Actions_sizeBy_float_float_float_arc_math_Interp_R_arc_scene_actions_SizeByAction(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jobject param3) {
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/Actions:sizeBy", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_actions_Actions(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(154);
	sp[0].o = ((jobject) &class_arc_scene_actions_SizeByAction);
	{ /* InvokeDynamic */
		clinit_arc_scene_actions_Actions_invoke_arc_func_Prov_10(ctx);
		auto proxy = (arc_scene_actions_Actions_invoke_arc_func_Prov_10 *) gcAlloc(ctx, &class_arc_scene_actions_Actions_invoke_arc_func_Prov_10);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_scene_actions_Actions_action_java_lang_Class_arc_func_Prov_R_arc_scene_Action(ctx, sp[0].o, sp[1].o);
	frame[4].o = (checkCast(ctx, &class_arc_scene_actions_SizeByAction, sp[0].o));
	LINE_NUMBER(155);
	((func_arc_scene_actions_SizeByAction_setAmount_float_float) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_actions_SizeByAction_setAmount_float_float])(ctx, (frame[4].o), (frame[0].f), (frame[1].f));
	LINE_NUMBER(156);
	((func_arc_scene_actions_SizeByAction_setDuration_float) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_actions_SizeByAction_setDuration_float])(ctx, (frame[4].o), (frame[2].f));
	LINE_NUMBER(157);
	((func_arc_scene_actions_SizeByAction_setInterpolation_arc_math_Interp) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_actions_SizeByAction_setInterpolation_arc_math_Interp])(ctx, (frame[4].o), (frame[3].o));
	LINE_NUMBER(158);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

jobject SM_arc_scene_actions_Actions_scaleTo_float_float_R_arc_scene_actions_ScaleToAction(jcontext ctx, jfloat param0, jfloat param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/Actions:scaleTo", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_actions_Actions(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(163);
	sp[0].o = (jobject)SM_arc_scene_actions_Actions_scaleTo_float_float_float_arc_math_Interp_R_arc_scene_actions_ScaleToAction(ctx, (frame[0].f), (frame[1].f), (jfloat(0)), (jobject(nullptr)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_scene_actions_Actions_scaleTo_float_float_float_R_arc_scene_actions_ScaleToAction(jcontext ctx, jfloat param0, jfloat param1, jfloat param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/Actions:scaleTo", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_actions_Actions(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	{
	LINE_NUMBER(167);
	sp[0].o = (jobject)SM_arc_scene_actions_Actions_scaleTo_float_float_float_arc_math_Interp_R_arc_scene_actions_ScaleToAction(ctx, (frame[0].f), (frame[1].f), (frame[2].f), (jobject(nullptr)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_scene_actions_Actions_scaleTo_float_float_float_arc_math_Interp_R_arc_scene_actions_ScaleToAction(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jobject param3) {
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/Actions:scaleTo", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_actions_Actions(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(171);
	sp[0].o = ((jobject) &class_arc_scene_actions_ScaleToAction);
	{ /* InvokeDynamic */
		clinit_arc_scene_actions_Actions_invoke_arc_func_Prov_11(ctx);
		auto proxy = (arc_scene_actions_Actions_invoke_arc_func_Prov_11 *) gcAlloc(ctx, &class_arc_scene_actions_Actions_invoke_arc_func_Prov_11);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_scene_actions_Actions_action_java_lang_Class_arc_func_Prov_R_arc_scene_Action(ctx, sp[0].o, sp[1].o);
	frame[4].o = (checkCast(ctx, &class_arc_scene_actions_ScaleToAction, sp[0].o));
	LINE_NUMBER(172);
	((func_arc_scene_actions_ScaleToAction_setScale_float_float) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_actions_ScaleToAction_setScale_float_float])(ctx, (frame[4].o), (frame[0].f), (frame[1].f));
	LINE_NUMBER(173);
	((func_arc_scene_actions_ScaleToAction_setDuration_float) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_actions_ScaleToAction_setDuration_float])(ctx, (frame[4].o), (frame[2].f));
	LINE_NUMBER(174);
	((func_arc_scene_actions_ScaleToAction_setInterpolation_arc_math_Interp) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_actions_ScaleToAction_setInterpolation_arc_math_Interp])(ctx, (frame[4].o), (frame[3].o));
	LINE_NUMBER(175);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

jobject SM_arc_scene_actions_Actions_scaleBy_float_float_R_arc_scene_actions_ScaleByAction(jcontext ctx, jfloat param0, jfloat param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/Actions:scaleBy", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_actions_Actions(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(180);
	sp[0].o = (jobject)SM_arc_scene_actions_Actions_scaleBy_float_float_float_arc_math_Interp_R_arc_scene_actions_ScaleByAction(ctx, (frame[0].f), (frame[1].f), (jfloat(0)), (jobject(nullptr)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_scene_actions_Actions_scaleBy_float_float_float_R_arc_scene_actions_ScaleByAction(jcontext ctx, jfloat param0, jfloat param1, jfloat param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/Actions:scaleBy", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_actions_Actions(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	{
	LINE_NUMBER(184);
	sp[0].o = (jobject)SM_arc_scene_actions_Actions_scaleBy_float_float_float_arc_math_Interp_R_arc_scene_actions_ScaleByAction(ctx, (frame[0].f), (frame[1].f), (frame[2].f), (jobject(nullptr)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_scene_actions_Actions_scaleBy_float_float_float_arc_math_Interp_R_arc_scene_actions_ScaleByAction(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jobject param3) {
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/Actions:scaleBy", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_actions_Actions(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(188);
	sp[0].o = ((jobject) &class_arc_scene_actions_ScaleByAction);
	{ /* InvokeDynamic */
		clinit_arc_scene_actions_Actions_invoke_arc_func_Prov_12(ctx);
		auto proxy = (arc_scene_actions_Actions_invoke_arc_func_Prov_12 *) gcAlloc(ctx, &class_arc_scene_actions_Actions_invoke_arc_func_Prov_12);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_scene_actions_Actions_action_java_lang_Class_arc_func_Prov_R_arc_scene_Action(ctx, sp[0].o, sp[1].o);
	frame[4].o = (checkCast(ctx, &class_arc_scene_actions_ScaleByAction, sp[0].o));
	LINE_NUMBER(189);
	((func_arc_scene_actions_ScaleByAction_setAmount_float_float) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_actions_ScaleByAction_setAmount_float_float])(ctx, (frame[4].o), (frame[0].f), (frame[1].f));
	LINE_NUMBER(190);
	((func_arc_scene_actions_ScaleByAction_setDuration_float) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_actions_ScaleByAction_setDuration_float])(ctx, (frame[4].o), (frame[2].f));
	LINE_NUMBER(191);
	((func_arc_scene_actions_ScaleByAction_setInterpolation_arc_math_Interp) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_actions_ScaleByAction_setInterpolation_arc_math_Interp])(ctx, (frame[4].o), (frame[3].o));
	LINE_NUMBER(192);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

jobject SM_arc_scene_actions_Actions_rotateTo_float_R_arc_scene_actions_RotateToAction(jcontext ctx, jfloat param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/Actions:rotateTo", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_actions_Actions(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(197);
	sp[0].o = (jobject)SM_arc_scene_actions_Actions_rotateTo_float_float_arc_math_Interp_R_arc_scene_actions_RotateToAction(ctx, (frame[0].f), (jfloat(0)), (jobject(nullptr)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_scene_actions_Actions_rotateTo_float_float_R_arc_scene_actions_RotateToAction(jcontext ctx, jfloat param0, jfloat param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/Actions:rotateTo", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_actions_Actions(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(201);
	sp[0].o = (jobject)SM_arc_scene_actions_Actions_rotateTo_float_float_arc_math_Interp_R_arc_scene_actions_RotateToAction(ctx, (frame[0].f), (frame[1].f), (jobject(nullptr)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_scene_actions_Actions_rotateTo_float_float_arc_math_Interp_R_arc_scene_actions_RotateToAction(jcontext ctx, jfloat param0, jfloat param1, jobject param2) {
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/Actions:rotateTo", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_actions_Actions(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(205);
	sp[0].o = ((jobject) &class_arc_scene_actions_RotateToAction);
	{ /* InvokeDynamic */
		clinit_arc_scene_actions_Actions_invoke_arc_func_Prov_13(ctx);
		auto proxy = (arc_scene_actions_Actions_invoke_arc_func_Prov_13 *) gcAlloc(ctx, &class_arc_scene_actions_Actions_invoke_arc_func_Prov_13);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_scene_actions_Actions_action_java_lang_Class_arc_func_Prov_R_arc_scene_Action(ctx, sp[0].o, sp[1].o);
	frame[3].o = (checkCast(ctx, &class_arc_scene_actions_RotateToAction, sp[0].o));
	LINE_NUMBER(206);
	((func_arc_scene_actions_RotateToAction_setRotation_float) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_actions_RotateToAction_setRotation_float])(ctx, (frame[3].o), (frame[0].f));
	LINE_NUMBER(207);
	((func_arc_scene_actions_RotateToAction_setDuration_float) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_actions_RotateToAction_setDuration_float])(ctx, (frame[3].o), (frame[1].f));
	LINE_NUMBER(208);
	((func_arc_scene_actions_RotateToAction_setInterpolation_arc_math_Interp) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_actions_RotateToAction_setInterpolation_arc_math_Interp])(ctx, (frame[3].o), (frame[2].o));
	LINE_NUMBER(209);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jobject SM_arc_scene_actions_Actions_rotateBy_float_R_arc_scene_actions_RotateByAction(jcontext ctx, jfloat param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/Actions:rotateBy", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_actions_Actions(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(214);
	sp[0].o = (jobject)SM_arc_scene_actions_Actions_rotateBy_float_float_arc_math_Interp_R_arc_scene_actions_RotateByAction(ctx, (frame[0].f), (jfloat(0)), (jobject(nullptr)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_scene_actions_Actions_rotateBy_float_float_R_arc_scene_actions_RotateByAction(jcontext ctx, jfloat param0, jfloat param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/Actions:rotateBy", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_actions_Actions(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(218);
	sp[0].o = (jobject)SM_arc_scene_actions_Actions_rotateBy_float_float_arc_math_Interp_R_arc_scene_actions_RotateByAction(ctx, (frame[0].f), (frame[1].f), (jobject(nullptr)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_scene_actions_Actions_rotateBy_float_float_arc_math_Interp_R_arc_scene_actions_RotateByAction(jcontext ctx, jfloat param0, jfloat param1, jobject param2) {
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/Actions:rotateBy", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_actions_Actions(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(222);
	sp[0].o = ((jobject) &class_arc_scene_actions_RotateByAction);
	{ /* InvokeDynamic */
		clinit_arc_scene_actions_Actions_invoke_arc_func_Prov_14(ctx);
		auto proxy = (arc_scene_actions_Actions_invoke_arc_func_Prov_14 *) gcAlloc(ctx, &class_arc_scene_actions_Actions_invoke_arc_func_Prov_14);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_scene_actions_Actions_action_java_lang_Class_arc_func_Prov_R_arc_scene_Action(ctx, sp[0].o, sp[1].o);
	frame[3].o = (checkCast(ctx, &class_arc_scene_actions_RotateByAction, sp[0].o));
	LINE_NUMBER(223);
	((func_arc_scene_actions_RotateByAction_setAmount_float) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_actions_RotateByAction_setAmount_float])(ctx, (frame[3].o), (frame[0].f));
	LINE_NUMBER(224);
	((func_arc_scene_actions_RotateByAction_setDuration_float) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_actions_RotateByAction_setDuration_float])(ctx, (frame[3].o), (frame[1].f));
	LINE_NUMBER(225);
	((func_arc_scene_actions_RotateByAction_setInterpolation_arc_math_Interp) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_actions_RotateByAction_setInterpolation_arc_math_Interp])(ctx, (frame[3].o), (frame[2].o));
	LINE_NUMBER(226);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jobject SM_arc_scene_actions_Actions_color_arc_graphics_Color_R_arc_scene_actions_ColorAction(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/Actions:color", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_actions_Actions(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(231);
	sp[0].o = (jobject)SM_arc_scene_actions_Actions_color_arc_graphics_Color_float_arc_math_Interp_R_arc_scene_actions_ColorAction(ctx, (frame[0].o), (jfloat(0)), (jobject(nullptr)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_scene_actions_Actions_color_arc_graphics_Color_float_R_arc_scene_actions_ColorAction(jcontext ctx, jobject param0, jfloat param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/Actions:color", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_actions_Actions(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(236);
	sp[0].o = (jobject)SM_arc_scene_actions_Actions_color_arc_graphics_Color_float_arc_math_Interp_R_arc_scene_actions_ColorAction(ctx, (frame[0].o), (frame[1].f), (jobject(nullptr)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_scene_actions_Actions_color_arc_graphics_Color_float_arc_math_Interp_R_arc_scene_actions_ColorAction(jcontext ctx, jobject param0, jfloat param1, jobject param2) {
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/Actions:color", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_actions_Actions(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(241);
	sp[0].o = ((jobject) &class_arc_scene_actions_ColorAction);
	{ /* InvokeDynamic */
		clinit_arc_scene_actions_Actions_invoke_arc_func_Prov_15(ctx);
		auto proxy = (arc_scene_actions_Actions_invoke_arc_func_Prov_15 *) gcAlloc(ctx, &class_arc_scene_actions_Actions_invoke_arc_func_Prov_15);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_scene_actions_Actions_action_java_lang_Class_arc_func_Prov_R_arc_scene_Action(ctx, sp[0].o, sp[1].o);
	frame[3].o = (checkCast(ctx, &class_arc_scene_actions_ColorAction, sp[0].o));
	LINE_NUMBER(242);
	((func_arc_scene_actions_ColorAction_setEndColor_arc_graphics_Color) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_actions_ColorAction_setEndColor_arc_graphics_Color])(ctx, (frame[3].o), (frame[0].o));
	LINE_NUMBER(243);
	((func_arc_scene_actions_ColorAction_setDuration_float) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_actions_ColorAction_setDuration_float])(ctx, (frame[3].o), (frame[1].f));
	LINE_NUMBER(244);
	((func_arc_scene_actions_ColorAction_setInterpolation_arc_math_Interp) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_actions_ColorAction_setInterpolation_arc_math_Interp])(ctx, (frame[3].o), (frame[2].o));
	LINE_NUMBER(245);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jobject SM_arc_scene_actions_Actions_alpha_float_R_arc_scene_actions_AlphaAction(jcontext ctx, jfloat param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/Actions:alpha", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_actions_Actions(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(250);
	sp[0].o = (jobject)SM_arc_scene_actions_Actions_alpha_float_float_arc_math_Interp_R_arc_scene_actions_AlphaAction(ctx, (frame[0].f), (jfloat(0)), (jobject(nullptr)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_scene_actions_Actions_alpha_float_float_R_arc_scene_actions_AlphaAction(jcontext ctx, jfloat param0, jfloat param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/Actions:alpha", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_actions_Actions(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(255);
	sp[0].o = (jobject)SM_arc_scene_actions_Actions_alpha_float_float_arc_math_Interp_R_arc_scene_actions_AlphaAction(ctx, (frame[0].f), (frame[1].f), (jobject(nullptr)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_scene_actions_Actions_alpha_float_float_arc_math_Interp_R_arc_scene_actions_AlphaAction(jcontext ctx, jfloat param0, jfloat param1, jobject param2) {
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/Actions:alpha", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_actions_Actions(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(260);
	sp[0].o = ((jobject) &class_arc_scene_actions_AlphaAction);
	{ /* InvokeDynamic */
		clinit_arc_scene_actions_Actions_invoke_arc_func_Prov_16(ctx);
		auto proxy = (arc_scene_actions_Actions_invoke_arc_func_Prov_16 *) gcAlloc(ctx, &class_arc_scene_actions_Actions_invoke_arc_func_Prov_16);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_scene_actions_Actions_action_java_lang_Class_arc_func_Prov_R_arc_scene_Action(ctx, sp[0].o, sp[1].o);
	frame[3].o = (checkCast(ctx, &class_arc_scene_actions_AlphaAction, sp[0].o));
	LINE_NUMBER(261);
	((func_arc_scene_actions_AlphaAction_setAlpha_float) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_actions_AlphaAction_setAlpha_float])(ctx, (frame[3].o), (frame[0].f));
	LINE_NUMBER(262);
	((func_arc_scene_actions_AlphaAction_setDuration_float) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_actions_AlphaAction_setDuration_float])(ctx, (frame[3].o), (frame[1].f));
	LINE_NUMBER(263);
	((func_arc_scene_actions_AlphaAction_setInterpolation_arc_math_Interp) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_actions_AlphaAction_setInterpolation_arc_math_Interp])(ctx, (frame[3].o), (frame[2].o));
	LINE_NUMBER(264);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jobject SM_arc_scene_actions_Actions_fadeOut_float_R_arc_scene_actions_AlphaAction(jcontext ctx, jfloat param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/Actions:fadeOut", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_actions_Actions(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(269);
	sp[0].o = (jobject)SM_arc_scene_actions_Actions_alpha_float_float_arc_math_Interp_R_arc_scene_actions_AlphaAction(ctx, (jfloat(0)), (frame[0].f), (jobject(nullptr)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_scene_actions_Actions_fadeOut_float_arc_math_Interp_R_arc_scene_actions_AlphaAction(jcontext ctx, jfloat param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/Actions:fadeOut", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_actions_Actions(ctx);
	frame[0].f = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(274);
	sp[0].o = ((jobject) &class_arc_scene_actions_AlphaAction);
	{ /* InvokeDynamic */
		clinit_arc_scene_actions_Actions_invoke_arc_func_Prov_17(ctx);
		auto proxy = (arc_scene_actions_Actions_invoke_arc_func_Prov_17 *) gcAlloc(ctx, &class_arc_scene_actions_Actions_invoke_arc_func_Prov_17);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_scene_actions_Actions_action_java_lang_Class_arc_func_Prov_R_arc_scene_Action(ctx, sp[0].o, sp[1].o);
	frame[2].o = (checkCast(ctx, &class_arc_scene_actions_AlphaAction, sp[0].o));
	LINE_NUMBER(275);
	((func_arc_scene_actions_AlphaAction_setAlpha_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_actions_AlphaAction_setAlpha_float])(ctx, (frame[2].o), (jfloat(0)));
	LINE_NUMBER(276);
	((func_arc_scene_actions_AlphaAction_setDuration_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_actions_AlphaAction_setDuration_float])(ctx, (frame[2].o), (frame[0].f));
	LINE_NUMBER(277);
	((func_arc_scene_actions_AlphaAction_setInterpolation_arc_math_Interp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_actions_AlphaAction_setInterpolation_arc_math_Interp])(ctx, (frame[2].o), (frame[1].o));
	LINE_NUMBER(278);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject SM_arc_scene_actions_Actions_fadeIn_float_R_arc_scene_actions_AlphaAction(jcontext ctx, jfloat param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/Actions:fadeIn", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_actions_Actions(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(283);
	sp[0].o = (jobject)SM_arc_scene_actions_Actions_alpha_float_float_arc_math_Interp_R_arc_scene_actions_AlphaAction(ctx, (jfloat(1)), (frame[0].f), (jobject(nullptr)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_scene_actions_Actions_fadeIn_float_arc_math_Interp_R_arc_scene_actions_AlphaAction(jcontext ctx, jfloat param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/Actions:fadeIn", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_actions_Actions(ctx);
	frame[0].f = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(288);
	sp[0].o = ((jobject) &class_arc_scene_actions_AlphaAction);
	{ /* InvokeDynamic */
		clinit_arc_scene_actions_Actions_invoke_arc_func_Prov_18(ctx);
		auto proxy = (arc_scene_actions_Actions_invoke_arc_func_Prov_18 *) gcAlloc(ctx, &class_arc_scene_actions_Actions_invoke_arc_func_Prov_18);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_scene_actions_Actions_action_java_lang_Class_arc_func_Prov_R_arc_scene_Action(ctx, sp[0].o, sp[1].o);
	frame[2].o = (checkCast(ctx, &class_arc_scene_actions_AlphaAction, sp[0].o));
	LINE_NUMBER(289);
	((func_arc_scene_actions_AlphaAction_setAlpha_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_actions_AlphaAction_setAlpha_float])(ctx, (frame[2].o), (jfloat(1)));
	LINE_NUMBER(290);
	((func_arc_scene_actions_AlphaAction_setDuration_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_actions_AlphaAction_setDuration_float])(ctx, (frame[2].o), (frame[0].f));
	LINE_NUMBER(291);
	((func_arc_scene_actions_AlphaAction_setInterpolation_arc_math_Interp) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_actions_AlphaAction_setInterpolation_arc_math_Interp])(ctx, (frame[2].o), (frame[1].o));
	LINE_NUMBER(292);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject SM_arc_scene_actions_Actions_show_R_arc_scene_actions_VisibleAction(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/Actions:show", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_actions_Actions(ctx);
	{
	LINE_NUMBER(296);
	sp[0].o = (jobject)SM_arc_scene_actions_Actions_visible_boolean_R_arc_scene_actions_VisibleAction(ctx, (jint(1)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_scene_actions_Actions_hide_R_arc_scene_actions_VisibleAction(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/Actions:hide", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_actions_Actions(ctx);
	{
	LINE_NUMBER(300);
	sp[0].o = (jobject)SM_arc_scene_actions_Actions_visible_boolean_R_arc_scene_actions_VisibleAction(ctx, (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_scene_actions_Actions_visible_boolean_R_arc_scene_actions_VisibleAction(jcontext ctx, jbool param0) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/Actions:visible", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_actions_Actions(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(304);
	sp[0].o = ((jobject) &class_arc_scene_actions_VisibleAction);
	{ /* InvokeDynamic */
		clinit_arc_scene_actions_Actions_invoke_arc_func_Prov_19(ctx);
		auto proxy = (arc_scene_actions_Actions_invoke_arc_func_Prov_19 *) gcAlloc(ctx, &class_arc_scene_actions_Actions_invoke_arc_func_Prov_19);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_scene_actions_Actions_action_java_lang_Class_arc_func_Prov_R_arc_scene_Action(ctx, sp[0].o, sp[1].o);
	frame[1].o = (checkCast(ctx, &class_arc_scene_actions_VisibleAction, sp[0].o));
	LINE_NUMBER(305);
	((func_arc_scene_actions_VisibleAction_setVisible_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_actions_VisibleAction_setVisible_boolean])(ctx, (frame[1].o), (frame[0].i));
	LINE_NUMBER(306);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject SM_arc_scene_actions_Actions_touchable_arc_scene_event_Touchable_R_arc_scene_actions_TouchableAction(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/Actions:touchable", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_actions_Actions(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(310);
	sp[0].o = ((jobject) &class_arc_scene_actions_TouchableAction);
	{ /* InvokeDynamic */
		clinit_arc_scene_actions_Actions_invoke_arc_func_Prov_20(ctx);
		auto proxy = (arc_scene_actions_Actions_invoke_arc_func_Prov_20 *) gcAlloc(ctx, &class_arc_scene_actions_Actions_invoke_arc_func_Prov_20);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_scene_actions_Actions_action_java_lang_Class_arc_func_Prov_R_arc_scene_Action(ctx, sp[0].o, sp[1].o);
	frame[1].o = (checkCast(ctx, &class_arc_scene_actions_TouchableAction, sp[0].o));
	LINE_NUMBER(311);
	((func_arc_scene_actions_TouchableAction_touchable_arc_scene_event_Touchable) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_actions_TouchableAction_touchable_arc_scene_event_Touchable])(ctx, (frame[1].o), (frame[0].o));
	LINE_NUMBER(312);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject SM_arc_scene_actions_Actions_remove_R_arc_scene_actions_RemoveActorAction(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/Actions:remove", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_actions_Actions(ctx);
	{
	LINE_NUMBER(316);
	sp[0].o = ((jobject) &class_arc_scene_actions_RemoveActorAction);
	{ /* InvokeDynamic */
		clinit_arc_scene_actions_Actions_invoke_arc_func_Prov_21(ctx);
		auto proxy = (arc_scene_actions_Actions_invoke_arc_func_Prov_21 *) gcAlloc(ctx, &class_arc_scene_actions_Actions_invoke_arc_func_Prov_21);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_scene_actions_Actions_action_java_lang_Class_arc_func_Prov_R_arc_scene_Action(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_arc_scene_actions_RemoveActorAction, sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_arc_scene_actions_Actions_remove_arc_scene_Element_R_arc_scene_actions_RemoveActorAction(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/Actions:remove", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_actions_Actions(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(320);
	sp[0].o = ((jobject) &class_arc_scene_actions_RemoveActorAction);
	{ /* InvokeDynamic */
		clinit_arc_scene_actions_Actions_invoke_arc_func_Prov_22(ctx);
		auto proxy = (arc_scene_actions_Actions_invoke_arc_func_Prov_22 *) gcAlloc(ctx, &class_arc_scene_actions_Actions_invoke_arc_func_Prov_22);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_scene_actions_Actions_action_java_lang_Class_arc_func_Prov_R_arc_scene_Action(ctx, sp[0].o, sp[1].o);
	frame[1].o = (checkCast(ctx, &class_arc_scene_actions_RemoveActorAction, sp[0].o));
	LINE_NUMBER(321);
	((func_arc_scene_actions_RemoveActorAction_setTarget_arc_scene_Element) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_actions_RemoveActorAction_setTarget_arc_scene_Element])(ctx, (frame[1].o), (frame[0].o));
	LINE_NUMBER(322);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject SM_arc_scene_actions_Actions_delay_float_R_arc_scene_actions_DelayAction(jcontext ctx, jfloat param0) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/Actions:delay", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_actions_Actions(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(326);
	sp[0].o = ((jobject) &class_arc_scene_actions_DelayAction);
	{ /* InvokeDynamic */
		clinit_arc_scene_actions_Actions_invoke_arc_func_Prov_23(ctx);
		auto proxy = (arc_scene_actions_Actions_invoke_arc_func_Prov_23 *) gcAlloc(ctx, &class_arc_scene_actions_Actions_invoke_arc_func_Prov_23);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_scene_actions_Actions_action_java_lang_Class_arc_func_Prov_R_arc_scene_Action(ctx, sp[0].o, sp[1].o);
	frame[1].o = (checkCast(ctx, &class_arc_scene_actions_DelayAction, sp[0].o));
	LINE_NUMBER(327);
	((func_arc_scene_actions_DelayAction_setDuration_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_actions_DelayAction_setDuration_float])(ctx, (frame[1].o), (frame[0].f));
	LINE_NUMBER(328);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject SM_arc_scene_actions_Actions_delay_float_arc_scene_Action_R_arc_scene_actions_DelayAction(jcontext ctx, jfloat param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/Actions:delay", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_actions_Actions(ctx);
	frame[0].f = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(332);
	sp[0].o = ((jobject) &class_arc_scene_actions_DelayAction);
	{ /* InvokeDynamic */
		clinit_arc_scene_actions_Actions_invoke_arc_func_Prov_24(ctx);
		auto proxy = (arc_scene_actions_Actions_invoke_arc_func_Prov_24 *) gcAlloc(ctx, &class_arc_scene_actions_Actions_invoke_arc_func_Prov_24);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_scene_actions_Actions_action_java_lang_Class_arc_func_Prov_R_arc_scene_Action(ctx, sp[0].o, sp[1].o);
	frame[2].o = (checkCast(ctx, &class_arc_scene_actions_DelayAction, sp[0].o));
	LINE_NUMBER(333);
	((func_arc_scene_actions_DelayAction_setDuration_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_actions_DelayAction_setDuration_float])(ctx, (frame[2].o), (frame[0].f));
	LINE_NUMBER(334);
	((func_arc_scene_actions_DelayAction_setAction_arc_scene_Action) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_actions_DelayAction_setAction_arc_scene_Action])(ctx, (frame[2].o), (frame[1].o));
	LINE_NUMBER(335);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject SM_arc_scene_actions_Actions_timeScale_float_arc_scene_Action_R_arc_scene_actions_TimeScaleAction(jcontext ctx, jfloat param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/Actions:timeScale", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_actions_Actions(ctx);
	frame[0].f = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(339);
	sp[0].o = ((jobject) &class_arc_scene_actions_TimeScaleAction);
	{ /* InvokeDynamic */
		clinit_arc_scene_actions_Actions_invoke_arc_func_Prov_25(ctx);
		auto proxy = (arc_scene_actions_Actions_invoke_arc_func_Prov_25 *) gcAlloc(ctx, &class_arc_scene_actions_Actions_invoke_arc_func_Prov_25);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_scene_actions_Actions_action_java_lang_Class_arc_func_Prov_R_arc_scene_Action(ctx, sp[0].o, sp[1].o);
	frame[2].o = (checkCast(ctx, &class_arc_scene_actions_TimeScaleAction, sp[0].o));
	LINE_NUMBER(340);
	((func_arc_scene_actions_TimeScaleAction_setScale_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_actions_TimeScaleAction_setScale_float])(ctx, (frame[2].o), (frame[0].f));
	LINE_NUMBER(341);
	((func_arc_scene_actions_TimeScaleAction_setAction_arc_scene_Action) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_actions_TimeScaleAction_setAction_arc_scene_Action])(ctx, (frame[2].o), (frame[1].o));
	LINE_NUMBER(342);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject SM_arc_scene_actions_Actions_sequence_arc_scene_Action_R_arc_scene_actions_SequenceAction(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/Actions:sequence", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_actions_Actions(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(346);
	sp[0].o = ((jobject) &class_arc_scene_actions_SequenceAction);
	{ /* InvokeDynamic */
		clinit_arc_scene_actions_Actions_invoke_arc_func_Prov_26(ctx);
		auto proxy = (arc_scene_actions_Actions_invoke_arc_func_Prov_26 *) gcAlloc(ctx, &class_arc_scene_actions_Actions_invoke_arc_func_Prov_26);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_scene_actions_Actions_action_java_lang_Class_arc_func_Prov_R_arc_scene_Action(ctx, sp[0].o, sp[1].o);
	frame[1].o = (checkCast(ctx, &class_arc_scene_actions_SequenceAction, sp[0].o));
	LINE_NUMBER(347);
	((func_arc_scene_actions_SequenceAction_addAction_arc_scene_Action) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_actions_SequenceAction_addAction_arc_scene_Action])(ctx, (frame[1].o), (frame[0].o));
	LINE_NUMBER(348);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject SM_arc_scene_actions_Actions_sequence_arc_scene_Action_arc_scene_Action_R_arc_scene_actions_SequenceAction(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/Actions:sequence", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_actions_Actions(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(352);
	sp[0].o = ((jobject) &class_arc_scene_actions_SequenceAction);
	{ /* InvokeDynamic */
		clinit_arc_scene_actions_Actions_invoke_arc_func_Prov_27(ctx);
		auto proxy = (arc_scene_actions_Actions_invoke_arc_func_Prov_27 *) gcAlloc(ctx, &class_arc_scene_actions_Actions_invoke_arc_func_Prov_27);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_scene_actions_Actions_action_java_lang_Class_arc_func_Prov_R_arc_scene_Action(ctx, sp[0].o, sp[1].o);
	frame[2].o = (checkCast(ctx, &class_arc_scene_actions_SequenceAction, sp[0].o));
	LINE_NUMBER(353);
	((func_arc_scene_actions_SequenceAction_addAction_arc_scene_Action) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_actions_SequenceAction_addAction_arc_scene_Action])(ctx, (frame[2].o), (frame[0].o));
	LINE_NUMBER(354);
	((func_arc_scene_actions_SequenceAction_addAction_arc_scene_Action) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_actions_SequenceAction_addAction_arc_scene_Action])(ctx, (frame[2].o), (frame[1].o));
	LINE_NUMBER(355);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject SM_arc_scene_actions_Actions_sequence_arc_scene_Action_arc_scene_Action_arc_scene_Action_R_arc_scene_actions_SequenceAction(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/Actions:sequence", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_actions_Actions(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(359);
	sp[0].o = ((jobject) &class_arc_scene_actions_SequenceAction);
	{ /* InvokeDynamic */
		clinit_arc_scene_actions_Actions_invoke_arc_func_Prov_28(ctx);
		auto proxy = (arc_scene_actions_Actions_invoke_arc_func_Prov_28 *) gcAlloc(ctx, &class_arc_scene_actions_Actions_invoke_arc_func_Prov_28);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_scene_actions_Actions_action_java_lang_Class_arc_func_Prov_R_arc_scene_Action(ctx, sp[0].o, sp[1].o);
	frame[3].o = (checkCast(ctx, &class_arc_scene_actions_SequenceAction, sp[0].o));
	LINE_NUMBER(360);
	((func_arc_scene_actions_SequenceAction_addAction_arc_scene_Action) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_actions_SequenceAction_addAction_arc_scene_Action])(ctx, (frame[3].o), (frame[0].o));
	LINE_NUMBER(361);
	((func_arc_scene_actions_SequenceAction_addAction_arc_scene_Action) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_actions_SequenceAction_addAction_arc_scene_Action])(ctx, (frame[3].o), (frame[1].o));
	LINE_NUMBER(362);
	((func_arc_scene_actions_SequenceAction_addAction_arc_scene_Action) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_actions_SequenceAction_addAction_arc_scene_Action])(ctx, (frame[3].o), (frame[2].o));
	LINE_NUMBER(363);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jobject SM_arc_scene_actions_Actions_sequence_arc_scene_Action_arc_scene_Action_arc_scene_Action_arc_scene_Action_R_arc_scene_actions_SequenceAction(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3) {
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/Actions:sequence", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_actions_Actions(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(367);
	sp[0].o = ((jobject) &class_arc_scene_actions_SequenceAction);
	{ /* InvokeDynamic */
		clinit_arc_scene_actions_Actions_invoke_arc_func_Prov_29(ctx);
		auto proxy = (arc_scene_actions_Actions_invoke_arc_func_Prov_29 *) gcAlloc(ctx, &class_arc_scene_actions_Actions_invoke_arc_func_Prov_29);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_scene_actions_Actions_action_java_lang_Class_arc_func_Prov_R_arc_scene_Action(ctx, sp[0].o, sp[1].o);
	frame[4].o = (checkCast(ctx, &class_arc_scene_actions_SequenceAction, sp[0].o));
	LINE_NUMBER(368);
	((func_arc_scene_actions_SequenceAction_addAction_arc_scene_Action) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_actions_SequenceAction_addAction_arc_scene_Action])(ctx, (frame[4].o), (frame[0].o));
	LINE_NUMBER(369);
	((func_arc_scene_actions_SequenceAction_addAction_arc_scene_Action) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_actions_SequenceAction_addAction_arc_scene_Action])(ctx, (frame[4].o), (frame[1].o));
	LINE_NUMBER(370);
	((func_arc_scene_actions_SequenceAction_addAction_arc_scene_Action) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_actions_SequenceAction_addAction_arc_scene_Action])(ctx, (frame[4].o), (frame[2].o));
	LINE_NUMBER(371);
	((func_arc_scene_actions_SequenceAction_addAction_arc_scene_Action) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_actions_SequenceAction_addAction_arc_scene_Action])(ctx, (frame[4].o), (frame[3].o));
	LINE_NUMBER(372);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

jobject SM_arc_scene_actions_Actions_sequence_arc_scene_Action_arc_scene_Action_arc_scene_Action_arc_scene_Action_arc_scene_Action_R_arc_scene_actions_SequenceAction(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4) {
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/Actions:sequence", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_actions_Actions(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(376);
	sp[0].o = ((jobject) &class_arc_scene_actions_SequenceAction);
	{ /* InvokeDynamic */
		clinit_arc_scene_actions_Actions_invoke_arc_func_Prov_30(ctx);
		auto proxy = (arc_scene_actions_Actions_invoke_arc_func_Prov_30 *) gcAlloc(ctx, &class_arc_scene_actions_Actions_invoke_arc_func_Prov_30);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_scene_actions_Actions_action_java_lang_Class_arc_func_Prov_R_arc_scene_Action(ctx, sp[0].o, sp[1].o);
	frame[5].o = (checkCast(ctx, &class_arc_scene_actions_SequenceAction, sp[0].o));
	LINE_NUMBER(377);
	((func_arc_scene_actions_SequenceAction_addAction_arc_scene_Action) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_scene_actions_SequenceAction_addAction_arc_scene_Action])(ctx, (frame[5].o), (frame[0].o));
	LINE_NUMBER(378);
	((func_arc_scene_actions_SequenceAction_addAction_arc_scene_Action) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_scene_actions_SequenceAction_addAction_arc_scene_Action])(ctx, (frame[5].o), (frame[1].o));
	LINE_NUMBER(379);
	((func_arc_scene_actions_SequenceAction_addAction_arc_scene_Action) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_scene_actions_SequenceAction_addAction_arc_scene_Action])(ctx, (frame[5].o), (frame[2].o));
	LINE_NUMBER(380);
	((func_arc_scene_actions_SequenceAction_addAction_arc_scene_Action) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_scene_actions_SequenceAction_addAction_arc_scene_Action])(ctx, (frame[5].o), (frame[3].o));
	LINE_NUMBER(381);
	((func_arc_scene_actions_SequenceAction_addAction_arc_scene_Action) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_scene_actions_SequenceAction_addAction_arc_scene_Action])(ctx, (frame[5].o), (frame[4].o));
	LINE_NUMBER(382);
	popStackFrame(ctx);
	return (frame[5].o);
	}

	popStackFrame(ctx);
}

jobject SM_arc_scene_actions_Actions_sequence_Array1_arc_scene_Action_R_arc_scene_actions_SequenceAction(jcontext ctx, jobject param0) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/Actions:sequence", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_actions_Actions(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(386);
	sp[0].o = ((jobject) &class_arc_scene_actions_SequenceAction);
	{ /* InvokeDynamic */
		clinit_arc_scene_actions_Actions_invoke_arc_func_Prov_31(ctx);
		auto proxy = (arc_scene_actions_Actions_invoke_arc_func_Prov_31 *) gcAlloc(ctx, &class_arc_scene_actions_Actions_invoke_arc_func_Prov_31);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_scene_actions_Actions_action_java_lang_Class_arc_func_Prov_R_arc_scene_Action(ctx, sp[0].o, sp[1].o);
	frame[1].o = (checkCast(ctx, &class_arc_scene_actions_SequenceAction, sp[0].o));
	LINE_NUMBER(387);
	frame[2].i = (jint(0));
	frame[3].i = (((jarray) nullCheck(ctx, (frame[0].o)))->length);
	}
label_3:;
	{
	if ((frame[2].i) >= (frame[3].i)) goto label_4;
	}
	{
	LINE_NUMBER(388);
	((func_arc_scene_actions_SequenceAction_addAction_arc_scene_Action) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_actions_SequenceAction_addAction_arc_scene_Action])(ctx, (frame[1].o), ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[2].i))));
	LINE_NUMBER(387);
	INST_IINC(2, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(389);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject SM_arc_scene_actions_Actions_sequence_R_arc_scene_actions_SequenceAction(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/Actions:sequence", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_actions_Actions(ctx);
	{
	LINE_NUMBER(393);
	sp[0].o = ((jobject) &class_arc_scene_actions_SequenceAction);
	{ /* InvokeDynamic */
		clinit_arc_scene_actions_Actions_invoke_arc_func_Prov_32(ctx);
		auto proxy = (arc_scene_actions_Actions_invoke_arc_func_Prov_32 *) gcAlloc(ctx, &class_arc_scene_actions_Actions_invoke_arc_func_Prov_32);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_scene_actions_Actions_action_java_lang_Class_arc_func_Prov_R_arc_scene_Action(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_arc_scene_actions_SequenceAction, sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_arc_scene_actions_Actions_parallel_arc_scene_Action_R_arc_scene_actions_ParallelAction(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/Actions:parallel", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_actions_Actions(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(397);
	sp[0].o = ((jobject) &class_arc_scene_actions_ParallelAction);
	{ /* InvokeDynamic */
		clinit_arc_scene_actions_Actions_invoke_arc_func_Prov_33(ctx);
		auto proxy = (arc_scene_actions_Actions_invoke_arc_func_Prov_33 *) gcAlloc(ctx, &class_arc_scene_actions_Actions_invoke_arc_func_Prov_33);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_scene_actions_Actions_action_java_lang_Class_arc_func_Prov_R_arc_scene_Action(ctx, sp[0].o, sp[1].o);
	frame[1].o = (checkCast(ctx, &class_arc_scene_actions_ParallelAction, sp[0].o));
	LINE_NUMBER(398);
	((func_arc_scene_actions_ParallelAction_addAction_arc_scene_Action) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_actions_ParallelAction_addAction_arc_scene_Action])(ctx, (frame[1].o), (frame[0].o));
	LINE_NUMBER(399);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject SM_arc_scene_actions_Actions_parallel_arc_scene_Action_arc_scene_Action_R_arc_scene_actions_ParallelAction(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/Actions:parallel", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_actions_Actions(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(403);
	sp[0].o = ((jobject) &class_arc_scene_actions_ParallelAction);
	{ /* InvokeDynamic */
		clinit_arc_scene_actions_Actions_invoke_arc_func_Prov_34(ctx);
		auto proxy = (arc_scene_actions_Actions_invoke_arc_func_Prov_34 *) gcAlloc(ctx, &class_arc_scene_actions_Actions_invoke_arc_func_Prov_34);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_scene_actions_Actions_action_java_lang_Class_arc_func_Prov_R_arc_scene_Action(ctx, sp[0].o, sp[1].o);
	frame[2].o = (checkCast(ctx, &class_arc_scene_actions_ParallelAction, sp[0].o));
	LINE_NUMBER(404);
	((func_arc_scene_actions_ParallelAction_addAction_arc_scene_Action) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_actions_ParallelAction_addAction_arc_scene_Action])(ctx, (frame[2].o), (frame[0].o));
	LINE_NUMBER(405);
	((func_arc_scene_actions_ParallelAction_addAction_arc_scene_Action) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_actions_ParallelAction_addAction_arc_scene_Action])(ctx, (frame[2].o), (frame[1].o));
	LINE_NUMBER(406);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject SM_arc_scene_actions_Actions_parallel_arc_scene_Action_arc_scene_Action_arc_scene_Action_R_arc_scene_actions_ParallelAction(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/Actions:parallel", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_actions_Actions(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(410);
	sp[0].o = ((jobject) &class_arc_scene_actions_ParallelAction);
	{ /* InvokeDynamic */
		clinit_arc_scene_actions_Actions_invoke_arc_func_Prov_35(ctx);
		auto proxy = (arc_scene_actions_Actions_invoke_arc_func_Prov_35 *) gcAlloc(ctx, &class_arc_scene_actions_Actions_invoke_arc_func_Prov_35);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_scene_actions_Actions_action_java_lang_Class_arc_func_Prov_R_arc_scene_Action(ctx, sp[0].o, sp[1].o);
	frame[3].o = (checkCast(ctx, &class_arc_scene_actions_ParallelAction, sp[0].o));
	LINE_NUMBER(411);
	((func_arc_scene_actions_ParallelAction_addAction_arc_scene_Action) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_actions_ParallelAction_addAction_arc_scene_Action])(ctx, (frame[3].o), (frame[0].o));
	LINE_NUMBER(412);
	((func_arc_scene_actions_ParallelAction_addAction_arc_scene_Action) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_actions_ParallelAction_addAction_arc_scene_Action])(ctx, (frame[3].o), (frame[1].o));
	LINE_NUMBER(413);
	((func_arc_scene_actions_ParallelAction_addAction_arc_scene_Action) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_actions_ParallelAction_addAction_arc_scene_Action])(ctx, (frame[3].o), (frame[2].o));
	LINE_NUMBER(414);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jobject SM_arc_scene_actions_Actions_parallel_arc_scene_Action_arc_scene_Action_arc_scene_Action_arc_scene_Action_R_arc_scene_actions_ParallelAction(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3) {
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/Actions:parallel", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_actions_Actions(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(418);
	sp[0].o = ((jobject) &class_arc_scene_actions_ParallelAction);
	{ /* InvokeDynamic */
		clinit_arc_scene_actions_Actions_invoke_arc_func_Prov_36(ctx);
		auto proxy = (arc_scene_actions_Actions_invoke_arc_func_Prov_36 *) gcAlloc(ctx, &class_arc_scene_actions_Actions_invoke_arc_func_Prov_36);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_scene_actions_Actions_action_java_lang_Class_arc_func_Prov_R_arc_scene_Action(ctx, sp[0].o, sp[1].o);
	frame[4].o = (checkCast(ctx, &class_arc_scene_actions_ParallelAction, sp[0].o));
	LINE_NUMBER(419);
	((func_arc_scene_actions_ParallelAction_addAction_arc_scene_Action) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_actions_ParallelAction_addAction_arc_scene_Action])(ctx, (frame[4].o), (frame[0].o));
	LINE_NUMBER(420);
	((func_arc_scene_actions_ParallelAction_addAction_arc_scene_Action) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_actions_ParallelAction_addAction_arc_scene_Action])(ctx, (frame[4].o), (frame[1].o));
	LINE_NUMBER(421);
	((func_arc_scene_actions_ParallelAction_addAction_arc_scene_Action) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_actions_ParallelAction_addAction_arc_scene_Action])(ctx, (frame[4].o), (frame[2].o));
	LINE_NUMBER(422);
	((func_arc_scene_actions_ParallelAction_addAction_arc_scene_Action) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_actions_ParallelAction_addAction_arc_scene_Action])(ctx, (frame[4].o), (frame[3].o));
	LINE_NUMBER(423);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

jobject SM_arc_scene_actions_Actions_parallel_arc_scene_Action_arc_scene_Action_arc_scene_Action_arc_scene_Action_arc_scene_Action_R_arc_scene_actions_ParallelAction(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4) {
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/Actions:parallel", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_actions_Actions(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(427);
	sp[0].o = ((jobject) &class_arc_scene_actions_ParallelAction);
	{ /* InvokeDynamic */
		clinit_arc_scene_actions_Actions_invoke_arc_func_Prov_37(ctx);
		auto proxy = (arc_scene_actions_Actions_invoke_arc_func_Prov_37 *) gcAlloc(ctx, &class_arc_scene_actions_Actions_invoke_arc_func_Prov_37);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_scene_actions_Actions_action_java_lang_Class_arc_func_Prov_R_arc_scene_Action(ctx, sp[0].o, sp[1].o);
	frame[5].o = (checkCast(ctx, &class_arc_scene_actions_ParallelAction, sp[0].o));
	LINE_NUMBER(428);
	((func_arc_scene_actions_ParallelAction_addAction_arc_scene_Action) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_scene_actions_ParallelAction_addAction_arc_scene_Action])(ctx, (frame[5].o), (frame[0].o));
	LINE_NUMBER(429);
	((func_arc_scene_actions_ParallelAction_addAction_arc_scene_Action) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_scene_actions_ParallelAction_addAction_arc_scene_Action])(ctx, (frame[5].o), (frame[1].o));
	LINE_NUMBER(430);
	((func_arc_scene_actions_ParallelAction_addAction_arc_scene_Action) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_scene_actions_ParallelAction_addAction_arc_scene_Action])(ctx, (frame[5].o), (frame[2].o));
	LINE_NUMBER(431);
	((func_arc_scene_actions_ParallelAction_addAction_arc_scene_Action) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_scene_actions_ParallelAction_addAction_arc_scene_Action])(ctx, (frame[5].o), (frame[3].o));
	LINE_NUMBER(432);
	((func_arc_scene_actions_ParallelAction_addAction_arc_scene_Action) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_scene_actions_ParallelAction_addAction_arc_scene_Action])(ctx, (frame[5].o), (frame[4].o));
	LINE_NUMBER(433);
	popStackFrame(ctx);
	return (frame[5].o);
	}

	popStackFrame(ctx);
}

jobject SM_arc_scene_actions_Actions_parallel_Array1_arc_scene_Action_R_arc_scene_actions_ParallelAction(jcontext ctx, jobject param0) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/Actions:parallel", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_actions_Actions(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(437);
	sp[0].o = ((jobject) &class_arc_scene_actions_ParallelAction);
	{ /* InvokeDynamic */
		clinit_arc_scene_actions_Actions_invoke_arc_func_Prov_38(ctx);
		auto proxy = (arc_scene_actions_Actions_invoke_arc_func_Prov_38 *) gcAlloc(ctx, &class_arc_scene_actions_Actions_invoke_arc_func_Prov_38);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_scene_actions_Actions_action_java_lang_Class_arc_func_Prov_R_arc_scene_Action(ctx, sp[0].o, sp[1].o);
	frame[1].o = (checkCast(ctx, &class_arc_scene_actions_ParallelAction, sp[0].o));
	LINE_NUMBER(438);
	frame[2].i = (jint(0));
	frame[3].i = (((jarray) nullCheck(ctx, (frame[0].o)))->length);
	}
label_3:;
	{
	if ((frame[2].i) >= (frame[3].i)) goto label_4;
	}
	{
	LINE_NUMBER(439);
	((func_arc_scene_actions_ParallelAction_addAction_arc_scene_Action) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_actions_ParallelAction_addAction_arc_scene_Action])(ctx, (frame[1].o), ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[2].i))));
	LINE_NUMBER(438);
	INST_IINC(2, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(440);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject SM_arc_scene_actions_Actions_parallel_R_arc_scene_actions_ParallelAction(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/Actions:parallel", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_actions_Actions(ctx);
	{
	LINE_NUMBER(444);
	sp[0].o = ((jobject) &class_arc_scene_actions_ParallelAction);
	{ /* InvokeDynamic */
		clinit_arc_scene_actions_Actions_invoke_arc_func_Prov_39(ctx);
		auto proxy = (arc_scene_actions_Actions_invoke_arc_func_Prov_39 *) gcAlloc(ctx, &class_arc_scene_actions_Actions_invoke_arc_func_Prov_39);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_scene_actions_Actions_action_java_lang_Class_arc_func_Prov_R_arc_scene_Action(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_arc_scene_actions_ParallelAction, sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_arc_scene_actions_Actions_repeat_int_arc_scene_Action_R_arc_scene_actions_RepeatAction(jcontext ctx, jint param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/Actions:repeat", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_actions_Actions(ctx);
	frame[0].i = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(448);
	sp[0].o = ((jobject) &class_arc_scene_actions_RepeatAction);
	{ /* InvokeDynamic */
		clinit_arc_scene_actions_Actions_invoke_arc_func_Prov_40(ctx);
		auto proxy = (arc_scene_actions_Actions_invoke_arc_func_Prov_40 *) gcAlloc(ctx, &class_arc_scene_actions_Actions_invoke_arc_func_Prov_40);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_scene_actions_Actions_action_java_lang_Class_arc_func_Prov_R_arc_scene_Action(ctx, sp[0].o, sp[1].o);
	frame[2].o = (checkCast(ctx, &class_arc_scene_actions_RepeatAction, sp[0].o));
	LINE_NUMBER(449);
	((func_arc_scene_actions_RepeatAction_setCount_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_actions_RepeatAction_setCount_int])(ctx, (frame[2].o), (frame[0].i));
	LINE_NUMBER(450);
	((func_arc_scene_actions_RepeatAction_setAction_arc_scene_Action) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_actions_RepeatAction_setAction_arc_scene_Action])(ctx, (frame[2].o), (frame[1].o));
	LINE_NUMBER(451);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject SM_arc_scene_actions_Actions_forever_arc_scene_Action_R_arc_scene_actions_RepeatAction(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/Actions:forever", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_actions_Actions(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(455);
	sp[0].o = ((jobject) &class_arc_scene_actions_RepeatAction);
	{ /* InvokeDynamic */
		clinit_arc_scene_actions_Actions_invoke_arc_func_Prov_41(ctx);
		auto proxy = (arc_scene_actions_Actions_invoke_arc_func_Prov_41 *) gcAlloc(ctx, &class_arc_scene_actions_Actions_invoke_arc_func_Prov_41);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_scene_actions_Actions_action_java_lang_Class_arc_func_Prov_R_arc_scene_Action(ctx, sp[0].o, sp[1].o);
	frame[1].o = (checkCast(ctx, &class_arc_scene_actions_RepeatAction, sp[0].o));
	LINE_NUMBER(456);
	((func_arc_scene_actions_RepeatAction_setCount_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_actions_RepeatAction_setCount_int])(ctx, (frame[1].o), (jint(-1)));
	LINE_NUMBER(457);
	((func_arc_scene_actions_RepeatAction_setAction_arc_scene_Action) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_actions_RepeatAction_setAction_arc_scene_Action])(ctx, (frame[1].o), (frame[0].o));
	LINE_NUMBER(458);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject SM_arc_scene_actions_Actions_run_java_lang_Runnable_R_arc_scene_actions_RunnableAction(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/Actions:run", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_actions_Actions(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(462);
	sp[0].o = ((jobject) &class_arc_scene_actions_RunnableAction);
	{ /* InvokeDynamic */
		clinit_arc_scene_actions_Actions_invoke_arc_func_Prov_42(ctx);
		auto proxy = (arc_scene_actions_Actions_invoke_arc_func_Prov_42 *) gcAlloc(ctx, &class_arc_scene_actions_Actions_invoke_arc_func_Prov_42);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_scene_actions_Actions_action_java_lang_Class_arc_func_Prov_R_arc_scene_Action(ctx, sp[0].o, sp[1].o);
	frame[1].o = (checkCast(ctx, &class_arc_scene_actions_RunnableAction, sp[0].o));
	LINE_NUMBER(463);
	((func_arc_scene_actions_RunnableAction_setRunnable_java_lang_Runnable) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_actions_RunnableAction_setRunnable_java_lang_Runnable])(ctx, (frame[1].o), (frame[0].o));
	LINE_NUMBER(464);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject SM_arc_scene_actions_Actions_layout_boolean_R_arc_scene_actions_LayoutAction(jcontext ctx, jbool param0) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/Actions:layout", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_actions_Actions(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(468);
	sp[0].o = ((jobject) &class_arc_scene_actions_LayoutAction);
	{ /* InvokeDynamic */
		clinit_arc_scene_actions_Actions_invoke_arc_func_Prov_43(ctx);
		auto proxy = (arc_scene_actions_Actions_invoke_arc_func_Prov_43 *) gcAlloc(ctx, &class_arc_scene_actions_Actions_invoke_arc_func_Prov_43);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_scene_actions_Actions_action_java_lang_Class_arc_func_Prov_R_arc_scene_Action(ctx, sp[0].o, sp[1].o);
	frame[1].o = (checkCast(ctx, &class_arc_scene_actions_LayoutAction, sp[0].o));
	LINE_NUMBER(469);
	((func_arc_scene_actions_LayoutAction_setLayoutEnabled_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_actions_LayoutAction_setLayoutEnabled_boolean])(ctx, (frame[1].o), (frame[0].i));
	LINE_NUMBER(470);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject SM_arc_scene_actions_Actions_after_arc_scene_Action_R_arc_scene_actions_AfterAction(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/Actions:after", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_actions_Actions(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(474);
	sp[0].o = ((jobject) &class_arc_scene_actions_AfterAction);
	{ /* InvokeDynamic */
		clinit_arc_scene_actions_Actions_invoke_arc_func_Prov_44(ctx);
		auto proxy = (arc_scene_actions_Actions_invoke_arc_func_Prov_44 *) gcAlloc(ctx, &class_arc_scene_actions_Actions_invoke_arc_func_Prov_44);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_scene_actions_Actions_action_java_lang_Class_arc_func_Prov_R_arc_scene_Action(ctx, sp[0].o, sp[1].o);
	frame[1].o = (checkCast(ctx, &class_arc_scene_actions_AfterAction, sp[0].o));
	LINE_NUMBER(475);
	((func_arc_scene_actions_AfterAction_setAction_arc_scene_Action) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_actions_AfterAction_setAction_arc_scene_Action])(ctx, (frame[1].o), (frame[0].o));
	LINE_NUMBER(476);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject SM_arc_scene_actions_Actions_addListener_arc_scene_event_EventListener_boolean_R_arc_scene_actions_AddListenerAction(jcontext ctx, jobject param0, jbool param1) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/Actions:addListener", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_actions_Actions(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(480);
	sp[0].o = ((jobject) &class_arc_scene_actions_AddListenerAction);
	{ /* InvokeDynamic */
		clinit_arc_scene_actions_Actions_invoke_arc_func_Prov_45(ctx);
		auto proxy = (arc_scene_actions_Actions_invoke_arc_func_Prov_45 *) gcAlloc(ctx, &class_arc_scene_actions_Actions_invoke_arc_func_Prov_45);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_scene_actions_Actions_action_java_lang_Class_arc_func_Prov_R_arc_scene_Action(ctx, sp[0].o, sp[1].o);
	frame[2].o = (checkCast(ctx, &class_arc_scene_actions_AddListenerAction, sp[0].o));
	LINE_NUMBER(481);
	((func_arc_scene_actions_AddListenerAction_setListener_arc_scene_event_EventListener) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_actions_AddListenerAction_setListener_arc_scene_event_EventListener])(ctx, (frame[2].o), (frame[0].o));
	LINE_NUMBER(482);
	((func_arc_scene_actions_AddListenerAction_setCapture_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_actions_AddListenerAction_setCapture_boolean])(ctx, (frame[2].o), (frame[1].i));
	LINE_NUMBER(483);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject SM_arc_scene_actions_Actions_addListener_arc_scene_event_EventListener_boolean_arc_scene_Element_R_arc_scene_actions_AddListenerAction(jcontext ctx, jobject param0, jbool param1, jobject param2) {
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/Actions:addListener", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_actions_Actions(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(487);
	sp[0].o = ((jobject) &class_arc_scene_actions_AddListenerAction);
	{ /* InvokeDynamic */
		clinit_arc_scene_actions_Actions_invoke_arc_func_Prov_46(ctx);
		auto proxy = (arc_scene_actions_Actions_invoke_arc_func_Prov_46 *) gcAlloc(ctx, &class_arc_scene_actions_Actions_invoke_arc_func_Prov_46);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_scene_actions_Actions_action_java_lang_Class_arc_func_Prov_R_arc_scene_Action(ctx, sp[0].o, sp[1].o);
	frame[3].o = (checkCast(ctx, &class_arc_scene_actions_AddListenerAction, sp[0].o));
	LINE_NUMBER(488);
	((func_arc_scene_actions_AddListenerAction_setTarget_arc_scene_Element) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_actions_AddListenerAction_setTarget_arc_scene_Element])(ctx, (frame[3].o), (frame[2].o));
	LINE_NUMBER(489);
	((func_arc_scene_actions_AddListenerAction_setListener_arc_scene_event_EventListener) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_actions_AddListenerAction_setListener_arc_scene_event_EventListener])(ctx, (frame[3].o), (frame[0].o));
	LINE_NUMBER(490);
	((func_arc_scene_actions_AddListenerAction_setCapture_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_actions_AddListenerAction_setCapture_boolean])(ctx, (frame[3].o), (frame[1].i));
	LINE_NUMBER(491);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jobject SM_arc_scene_actions_Actions_removeListener_arc_scene_event_EventListener_boolean_R_arc_scene_actions_RemoveListenerAction(jcontext ctx, jobject param0, jbool param1) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/Actions:removeListener", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_actions_Actions(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(495);
	sp[0].o = ((jobject) &class_arc_scene_actions_RemoveListenerAction);
	{ /* InvokeDynamic */
		clinit_arc_scene_actions_Actions_invoke_arc_func_Prov_47(ctx);
		auto proxy = (arc_scene_actions_Actions_invoke_arc_func_Prov_47 *) gcAlloc(ctx, &class_arc_scene_actions_Actions_invoke_arc_func_Prov_47);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_scene_actions_Actions_action_java_lang_Class_arc_func_Prov_R_arc_scene_Action(ctx, sp[0].o, sp[1].o);
	frame[2].o = (checkCast(ctx, &class_arc_scene_actions_RemoveListenerAction, sp[0].o));
	LINE_NUMBER(496);
	((func_arc_scene_actions_RemoveListenerAction_setListener_arc_scene_event_EventListener) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_actions_RemoveListenerAction_setListener_arc_scene_event_EventListener])(ctx, (frame[2].o), (frame[0].o));
	LINE_NUMBER(497);
	((func_arc_scene_actions_RemoveListenerAction_setCapture_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_actions_RemoveListenerAction_setCapture_boolean])(ctx, (frame[2].o), (frame[1].i));
	LINE_NUMBER(498);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject SM_arc_scene_actions_Actions_removeListener_arc_scene_event_EventListener_boolean_arc_scene_Element_R_arc_scene_actions_RemoveListenerAction(jcontext ctx, jobject param0, jbool param1, jobject param2) {
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/Actions:removeListener", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_actions_Actions(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(502);
	sp[0].o = ((jobject) &class_arc_scene_actions_RemoveListenerAction);
	{ /* InvokeDynamic */
		clinit_arc_scene_actions_Actions_invoke_arc_func_Prov_48(ctx);
		auto proxy = (arc_scene_actions_Actions_invoke_arc_func_Prov_48 *) gcAlloc(ctx, &class_arc_scene_actions_Actions_invoke_arc_func_Prov_48);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_scene_actions_Actions_action_java_lang_Class_arc_func_Prov_R_arc_scene_Action(ctx, sp[0].o, sp[1].o);
	frame[3].o = (checkCast(ctx, &class_arc_scene_actions_RemoveListenerAction, sp[0].o));
	LINE_NUMBER(503);
	((func_arc_scene_actions_RemoveListenerAction_setTarget_arc_scene_Element) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_actions_RemoveListenerAction_setTarget_arc_scene_Element])(ctx, (frame[3].o), (frame[2].o));
	LINE_NUMBER(504);
	((func_arc_scene_actions_RemoveListenerAction_setListener_arc_scene_event_EventListener) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_actions_RemoveListenerAction_setListener_arc_scene_event_EventListener])(ctx, (frame[3].o), (frame[0].o));
	LINE_NUMBER(505);
	((func_arc_scene_actions_RemoveListenerAction_setCapture_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_actions_RemoveListenerAction_setCapture_boolean])(ctx, (frame[3].o), (frame[1].i));
	LINE_NUMBER(506);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

void SM_arc_scene_actions_Actions_lambda$translateTo$0_arc_scene_actions_RunnableAction_float_float(jcontext ctx, jobject param0, jfloat param1, jfloat param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/Actions:lambda$translateTo$0", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_actions_Actions(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	{
	LINE_NUMBER(99);
	sp[0].o = (jobject)((func_arc_scene_actions_RunnableAction_getActor_R_arc_scene_Element) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_actions_RunnableAction_getActor_R_arc_scene_Element])(ctx, (frame[0].o));
	((func_arc_scene_Element_setTranslation_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Element_setTranslation_float_float])(ctx, sp[0].o, (frame[1].f), (frame[2].f));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_scene_actions_Actions[] {
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
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_scene_actions_Actions, 0, "()V", 1 },
	{ "action", (intptr_t) SM_arc_scene_actions_Actions_action_java_lang_Class_arc_func_Prov_R_arc_scene_Action, 0, "(Ljava/lang/Class;Larc/func/Prov;)Larc/scene/Action;", 9 },
	{ "addAction", (intptr_t) SM_arc_scene_actions_Actions_addAction_arc_scene_Action_R_arc_scene_actions_AddAction, 0, "(Larc/scene/Action;)Larc/scene/actions/AddAction;", 9 },
	{ "addAction", (intptr_t) SM_arc_scene_actions_Actions_addAction_arc_scene_Action_arc_scene_Element_R_arc_scene_actions_AddAction, 0, "(Larc/scene/Action;Larc/scene/Element;)Larc/scene/actions/AddAction;", 9 },
	{ "removeAction", (intptr_t) SM_arc_scene_actions_Actions_removeAction_arc_scene_Action_R_arc_scene_actions_RemoveAction, 0, "(Larc/scene/Action;)Larc/scene/actions/RemoveAction;", 9 },
	{ "removeAction", (intptr_t) SM_arc_scene_actions_Actions_removeAction_arc_scene_Action_arc_scene_Element_R_arc_scene_actions_RemoveAction, 0, "(Larc/scene/Action;Larc/scene/Element;)Larc/scene/actions/RemoveAction;", 9 },
	{ "originCenter", (intptr_t) SM_arc_scene_actions_Actions_originCenter_R_arc_scene_Action, 0, "()Larc/scene/Action;", 9 },
	{ "moveTo", (intptr_t) SM_arc_scene_actions_Actions_moveTo_float_float_R_arc_scene_actions_MoveToAction, 0, "(FF)Larc/scene/actions/MoveToAction;", 9 },
	{ "moveTo", (intptr_t) SM_arc_scene_actions_Actions_moveTo_float_float_float_R_arc_scene_actions_MoveToAction, 0, "(FFF)Larc/scene/actions/MoveToAction;", 9 },
	{ "moveTo", (intptr_t) SM_arc_scene_actions_Actions_moveTo_float_float_float_arc_math_Interp_R_arc_scene_actions_MoveToAction, 0, "(FFFLarc/math/Interp;)Larc/scene/actions/MoveToAction;", 9 },
	{ "moveToAligned", (intptr_t) SM_arc_scene_actions_Actions_moveToAligned_float_float_int_R_arc_scene_actions_MoveToAction, 0, "(FFI)Larc/scene/actions/MoveToAction;", 9 },
	{ "moveToAligned", (intptr_t) SM_arc_scene_actions_Actions_moveToAligned_float_float_int_float_R_arc_scene_actions_MoveToAction, 0, "(FFIF)Larc/scene/actions/MoveToAction;", 9 },
	{ "moveToAligned", (intptr_t) SM_arc_scene_actions_Actions_moveToAligned_float_float_int_float_arc_math_Interp_R_arc_scene_actions_MoveToAction, 0, "(FFIFLarc/math/Interp;)Larc/scene/actions/MoveToAction;", 9 },
	{ "moveBy", (intptr_t) SM_arc_scene_actions_Actions_moveBy_float_float_R_arc_scene_actions_MoveByAction, 0, "(FF)Larc/scene/actions/MoveByAction;", 9 },
	{ "moveBy", (intptr_t) SM_arc_scene_actions_Actions_moveBy_float_float_float_R_arc_scene_actions_MoveByAction, 0, "(FFF)Larc/scene/actions/MoveByAction;", 9 },
	{ "translateTo", (intptr_t) SM_arc_scene_actions_Actions_translateTo_float_float_R_arc_scene_actions_RunnableAction, 0, "(FF)Larc/scene/actions/RunnableAction;", 9 },
	{ "translateBy", (intptr_t) SM_arc_scene_actions_Actions_translateBy_float_float_float_arc_math_Interp_R_arc_scene_actions_TranslateByAction, 0, "(FFFLarc/math/Interp;)Larc/scene/actions/TranslateByAction;", 9 },
	{ "translateBy", (intptr_t) SM_arc_scene_actions_Actions_translateBy_float_float_R_arc_scene_actions_TranslateByAction, 0, "(FF)Larc/scene/actions/TranslateByAction;", 9 },
	{ "translateBy", (intptr_t) SM_arc_scene_actions_Actions_translateBy_float_float_float_R_arc_scene_actions_TranslateByAction, 0, "(FFF)Larc/scene/actions/TranslateByAction;", 9 },
	{ "moveBy", (intptr_t) SM_arc_scene_actions_Actions_moveBy_float_float_float_arc_math_Interp_R_arc_scene_actions_MoveByAction, 0, "(FFFLarc/math/Interp;)Larc/scene/actions/MoveByAction;", 9 },
	{ "sizeTo", (intptr_t) SM_arc_scene_actions_Actions_sizeTo_float_float_R_arc_scene_actions_SizeToAction, 0, "(FF)Larc/scene/actions/SizeToAction;", 9 },
	{ "sizeTo", (intptr_t) SM_arc_scene_actions_Actions_sizeTo_float_float_float_R_arc_scene_actions_SizeToAction, 0, "(FFF)Larc/scene/actions/SizeToAction;", 9 },
	{ "sizeTo", (intptr_t) SM_arc_scene_actions_Actions_sizeTo_float_float_float_arc_math_Interp_R_arc_scene_actions_SizeToAction, 0, "(FFFLarc/math/Interp;)Larc/scene/actions/SizeToAction;", 9 },
	{ "sizeBy", (intptr_t) SM_arc_scene_actions_Actions_sizeBy_float_float_R_arc_scene_actions_SizeByAction, 0, "(FF)Larc/scene/actions/SizeByAction;", 9 },
	{ "sizeBy", (intptr_t) SM_arc_scene_actions_Actions_sizeBy_float_float_float_R_arc_scene_actions_SizeByAction, 0, "(FFF)Larc/scene/actions/SizeByAction;", 9 },
	{ "sizeBy", (intptr_t) SM_arc_scene_actions_Actions_sizeBy_float_float_float_arc_math_Interp_R_arc_scene_actions_SizeByAction, 0, "(FFFLarc/math/Interp;)Larc/scene/actions/SizeByAction;", 9 },
	{ "scaleTo", (intptr_t) SM_arc_scene_actions_Actions_scaleTo_float_float_R_arc_scene_actions_ScaleToAction, 0, "(FF)Larc/scene/actions/ScaleToAction;", 9 },
	{ "scaleTo", (intptr_t) SM_arc_scene_actions_Actions_scaleTo_float_float_float_R_arc_scene_actions_ScaleToAction, 0, "(FFF)Larc/scene/actions/ScaleToAction;", 9 },
	{ "scaleTo", (intptr_t) SM_arc_scene_actions_Actions_scaleTo_float_float_float_arc_math_Interp_R_arc_scene_actions_ScaleToAction, 0, "(FFFLarc/math/Interp;)Larc/scene/actions/ScaleToAction;", 9 },
	{ "scaleBy", (intptr_t) SM_arc_scene_actions_Actions_scaleBy_float_float_R_arc_scene_actions_ScaleByAction, 0, "(FF)Larc/scene/actions/ScaleByAction;", 9 },
	{ "scaleBy", (intptr_t) SM_arc_scene_actions_Actions_scaleBy_float_float_float_R_arc_scene_actions_ScaleByAction, 0, "(FFF)Larc/scene/actions/ScaleByAction;", 9 },
	{ "scaleBy", (intptr_t) SM_arc_scene_actions_Actions_scaleBy_float_float_float_arc_math_Interp_R_arc_scene_actions_ScaleByAction, 0, "(FFFLarc/math/Interp;)Larc/scene/actions/ScaleByAction;", 9 },
	{ "rotateTo", (intptr_t) SM_arc_scene_actions_Actions_rotateTo_float_R_arc_scene_actions_RotateToAction, 0, "(F)Larc/scene/actions/RotateToAction;", 9 },
	{ "rotateTo", (intptr_t) SM_arc_scene_actions_Actions_rotateTo_float_float_R_arc_scene_actions_RotateToAction, 0, "(FF)Larc/scene/actions/RotateToAction;", 9 },
	{ "rotateTo", (intptr_t) SM_arc_scene_actions_Actions_rotateTo_float_float_arc_math_Interp_R_arc_scene_actions_RotateToAction, 0, "(FFLarc/math/Interp;)Larc/scene/actions/RotateToAction;", 9 },
	{ "rotateBy", (intptr_t) SM_arc_scene_actions_Actions_rotateBy_float_R_arc_scene_actions_RotateByAction, 0, "(F)Larc/scene/actions/RotateByAction;", 9 },
	{ "rotateBy", (intptr_t) SM_arc_scene_actions_Actions_rotateBy_float_float_R_arc_scene_actions_RotateByAction, 0, "(FF)Larc/scene/actions/RotateByAction;", 9 },
	{ "rotateBy", (intptr_t) SM_arc_scene_actions_Actions_rotateBy_float_float_arc_math_Interp_R_arc_scene_actions_RotateByAction, 0, "(FFLarc/math/Interp;)Larc/scene/actions/RotateByAction;", 9 },
	{ "color", (intptr_t) SM_arc_scene_actions_Actions_color_arc_graphics_Color_R_arc_scene_actions_ColorAction, 0, "(Larc/graphics/Color;)Larc/scene/actions/ColorAction;", 9 },
	{ "color", (intptr_t) SM_arc_scene_actions_Actions_color_arc_graphics_Color_float_R_arc_scene_actions_ColorAction, 0, "(Larc/graphics/Color;F)Larc/scene/actions/ColorAction;", 9 },
	{ "color", (intptr_t) SM_arc_scene_actions_Actions_color_arc_graphics_Color_float_arc_math_Interp_R_arc_scene_actions_ColorAction, 0, "(Larc/graphics/Color;FLarc/math/Interp;)Larc/scene/actions/ColorAction;", 9 },
	{ "alpha", (intptr_t) SM_arc_scene_actions_Actions_alpha_float_R_arc_scene_actions_AlphaAction, 0, "(F)Larc/scene/actions/AlphaAction;", 9 },
	{ "alpha", (intptr_t) SM_arc_scene_actions_Actions_alpha_float_float_R_arc_scene_actions_AlphaAction, 0, "(FF)Larc/scene/actions/AlphaAction;", 9 },
	{ "alpha", (intptr_t) SM_arc_scene_actions_Actions_alpha_float_float_arc_math_Interp_R_arc_scene_actions_AlphaAction, 0, "(FFLarc/math/Interp;)Larc/scene/actions/AlphaAction;", 9 },
	{ "fadeOut", (intptr_t) SM_arc_scene_actions_Actions_fadeOut_float_R_arc_scene_actions_AlphaAction, 0, "(F)Larc/scene/actions/AlphaAction;", 9 },
	{ "fadeOut", (intptr_t) SM_arc_scene_actions_Actions_fadeOut_float_arc_math_Interp_R_arc_scene_actions_AlphaAction, 0, "(FLarc/math/Interp;)Larc/scene/actions/AlphaAction;", 9 },
	{ "fadeIn", (intptr_t) SM_arc_scene_actions_Actions_fadeIn_float_R_arc_scene_actions_AlphaAction, 0, "(F)Larc/scene/actions/AlphaAction;", 9 },
	{ "fadeIn", (intptr_t) SM_arc_scene_actions_Actions_fadeIn_float_arc_math_Interp_R_arc_scene_actions_AlphaAction, 0, "(FLarc/math/Interp;)Larc/scene/actions/AlphaAction;", 9 },
	{ "show", (intptr_t) SM_arc_scene_actions_Actions_show_R_arc_scene_actions_VisibleAction, 0, "()Larc/scene/actions/VisibleAction;", 9 },
	{ "hide", (intptr_t) SM_arc_scene_actions_Actions_hide_R_arc_scene_actions_VisibleAction, 0, "()Larc/scene/actions/VisibleAction;", 9 },
	{ "visible", (intptr_t) SM_arc_scene_actions_Actions_visible_boolean_R_arc_scene_actions_VisibleAction, 0, "(Z)Larc/scene/actions/VisibleAction;", 9 },
	{ "touchable", (intptr_t) SM_arc_scene_actions_Actions_touchable_arc_scene_event_Touchable_R_arc_scene_actions_TouchableAction, 0, "(Larc/scene/event/Touchable;)Larc/scene/actions/TouchableAction;", 9 },
	{ "remove", (intptr_t) SM_arc_scene_actions_Actions_remove_R_arc_scene_actions_RemoveActorAction, 0, "()Larc/scene/actions/RemoveActorAction;", 9 },
	{ "remove", (intptr_t) SM_arc_scene_actions_Actions_remove_arc_scene_Element_R_arc_scene_actions_RemoveActorAction, 0, "(Larc/scene/Element;)Larc/scene/actions/RemoveActorAction;", 9 },
	{ "delay", (intptr_t) SM_arc_scene_actions_Actions_delay_float_R_arc_scene_actions_DelayAction, 0, "(F)Larc/scene/actions/DelayAction;", 9 },
	{ "delay", (intptr_t) SM_arc_scene_actions_Actions_delay_float_arc_scene_Action_R_arc_scene_actions_DelayAction, 0, "(FLarc/scene/Action;)Larc/scene/actions/DelayAction;", 9 },
	{ "timeScale", (intptr_t) SM_arc_scene_actions_Actions_timeScale_float_arc_scene_Action_R_arc_scene_actions_TimeScaleAction, 0, "(FLarc/scene/Action;)Larc/scene/actions/TimeScaleAction;", 9 },
	{ "sequence", (intptr_t) SM_arc_scene_actions_Actions_sequence_arc_scene_Action_R_arc_scene_actions_SequenceAction, 0, "(Larc/scene/Action;)Larc/scene/actions/SequenceAction;", 9 },
	{ "sequence", (intptr_t) SM_arc_scene_actions_Actions_sequence_arc_scene_Action_arc_scene_Action_R_arc_scene_actions_SequenceAction, 0, "(Larc/scene/Action;Larc/scene/Action;)Larc/scene/actions/SequenceAction;", 9 },
	{ "sequence", (intptr_t) SM_arc_scene_actions_Actions_sequence_arc_scene_Action_arc_scene_Action_arc_scene_Action_R_arc_scene_actions_SequenceAction, 0, "(Larc/scene/Action;Larc/scene/Action;Larc/scene/Action;)Larc/scene/actions/SequenceAction;", 9 },
	{ "sequence", (intptr_t) SM_arc_scene_actions_Actions_sequence_arc_scene_Action_arc_scene_Action_arc_scene_Action_arc_scene_Action_R_arc_scene_actions_SequenceAction, 0, "(Larc/scene/Action;Larc/scene/Action;Larc/scene/Action;Larc/scene/Action;)Larc/scene/actions/SequenceAction;", 9 },
	{ "sequence", (intptr_t) SM_arc_scene_actions_Actions_sequence_arc_scene_Action_arc_scene_Action_arc_scene_Action_arc_scene_Action_arc_scene_Action_R_arc_scene_actions_SequenceAction, 0, "(Larc/scene/Action;Larc/scene/Action;Larc/scene/Action;Larc/scene/Action;Larc/scene/Action;)Larc/scene/actions/SequenceAction;", 9 },
	{ "sequence", (intptr_t) SM_arc_scene_actions_Actions_sequence_Array1_arc_scene_Action_R_arc_scene_actions_SequenceAction, 0, "([Larc/scene/Action;)Larc/scene/actions/SequenceAction;", 137 },
	{ "sequence", (intptr_t) SM_arc_scene_actions_Actions_sequence_R_arc_scene_actions_SequenceAction, 0, "()Larc/scene/actions/SequenceAction;", 9 },
	{ "parallel", (intptr_t) SM_arc_scene_actions_Actions_parallel_arc_scene_Action_R_arc_scene_actions_ParallelAction, 0, "(Larc/scene/Action;)Larc/scene/actions/ParallelAction;", 9 },
	{ "parallel", (intptr_t) SM_arc_scene_actions_Actions_parallel_arc_scene_Action_arc_scene_Action_R_arc_scene_actions_ParallelAction, 0, "(Larc/scene/Action;Larc/scene/Action;)Larc/scene/actions/ParallelAction;", 9 },
	{ "parallel", (intptr_t) SM_arc_scene_actions_Actions_parallel_arc_scene_Action_arc_scene_Action_arc_scene_Action_R_arc_scene_actions_ParallelAction, 0, "(Larc/scene/Action;Larc/scene/Action;Larc/scene/Action;)Larc/scene/actions/ParallelAction;", 9 },
	{ "parallel", (intptr_t) SM_arc_scene_actions_Actions_parallel_arc_scene_Action_arc_scene_Action_arc_scene_Action_arc_scene_Action_R_arc_scene_actions_ParallelAction, 0, "(Larc/scene/Action;Larc/scene/Action;Larc/scene/Action;Larc/scene/Action;)Larc/scene/actions/ParallelAction;", 9 },
	{ "parallel", (intptr_t) SM_arc_scene_actions_Actions_parallel_arc_scene_Action_arc_scene_Action_arc_scene_Action_arc_scene_Action_arc_scene_Action_R_arc_scene_actions_ParallelAction, 0, "(Larc/scene/Action;Larc/scene/Action;Larc/scene/Action;Larc/scene/Action;Larc/scene/Action;)Larc/scene/actions/ParallelAction;", 9 },
	{ "parallel", (intptr_t) SM_arc_scene_actions_Actions_parallel_Array1_arc_scene_Action_R_arc_scene_actions_ParallelAction, 0, "([Larc/scene/Action;)Larc/scene/actions/ParallelAction;", 137 },
	{ "parallel", (intptr_t) SM_arc_scene_actions_Actions_parallel_R_arc_scene_actions_ParallelAction, 0, "()Larc/scene/actions/ParallelAction;", 9 },
	{ "repeat", (intptr_t) SM_arc_scene_actions_Actions_repeat_int_arc_scene_Action_R_arc_scene_actions_RepeatAction, 0, "(ILarc/scene/Action;)Larc/scene/actions/RepeatAction;", 9 },
	{ "forever", (intptr_t) SM_arc_scene_actions_Actions_forever_arc_scene_Action_R_arc_scene_actions_RepeatAction, 0, "(Larc/scene/Action;)Larc/scene/actions/RepeatAction;", 9 },
	{ "run", (intptr_t) SM_arc_scene_actions_Actions_run_java_lang_Runnable_R_arc_scene_actions_RunnableAction, 0, "(Ljava/lang/Runnable;)Larc/scene/actions/RunnableAction;", 9 },
	{ "layout", (intptr_t) SM_arc_scene_actions_Actions_layout_boolean_R_arc_scene_actions_LayoutAction, 0, "(Z)Larc/scene/actions/LayoutAction;", 9 },
	{ "after", (intptr_t) SM_arc_scene_actions_Actions_after_arc_scene_Action_R_arc_scene_actions_AfterAction, 0, "(Larc/scene/Action;)Larc/scene/actions/AfterAction;", 9 },
	{ "addListener", (intptr_t) SM_arc_scene_actions_Actions_addListener_arc_scene_event_EventListener_boolean_R_arc_scene_actions_AddListenerAction, 0, "(Larc/scene/event/EventListener;Z)Larc/scene/actions/AddListenerAction;", 9 },
	{ "addListener", (intptr_t) SM_arc_scene_actions_Actions_addListener_arc_scene_event_EventListener_boolean_arc_scene_Element_R_arc_scene_actions_AddListenerAction, 0, "(Larc/scene/event/EventListener;ZLarc/scene/Element;)Larc/scene/actions/AddListenerAction;", 9 },
	{ "removeListener", (intptr_t) SM_arc_scene_actions_Actions_removeListener_arc_scene_event_EventListener_boolean_R_arc_scene_actions_RemoveListenerAction, 0, "(Larc/scene/event/EventListener;Z)Larc/scene/actions/RemoveListenerAction;", 9 },
	{ "removeListener", (intptr_t) SM_arc_scene_actions_Actions_removeListener_arc_scene_event_EventListener_boolean_arc_scene_Element_R_arc_scene_actions_RemoveListenerAction, 0, "(Larc/scene/event/EventListener;ZLarc/scene/Element;)Larc/scene/actions/RemoveListenerAction;", 9 },
	{ "lambda$translateTo$0", (intptr_t) SM_arc_scene_actions_Actions_lambda$translateTo$0_arc_scene_actions_RunnableAction_float_float, 0, "(Larc/scene/actions/RunnableAction;FF)V", 4106 },
};

Class class_arc_scene_actions_Actions{
		.nativeName = (intptr_t) "arc/scene/actions/Actions",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_scene_actions_Actions),
		.classVtable = (intptr_t) vtable_arc_scene_actions_Actions,
		.staticInitializer = (intptr_t) clinit_arc_scene_actions_Actions,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_scene_actions_Actions,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 81,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_scene_actions_Actions = registerClass(&class_arc_scene_actions_Actions);

}
