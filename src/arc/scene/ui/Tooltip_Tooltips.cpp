#include "arc/scene/ui/Tooltip_Tooltips.h"
#include "arc/scene/actions/ParallelAction.h"
#include "arc/scene/ui/Tooltip_Tooltips_invoke_arc_func_Func_0.h"
#include "arc/scene/ui/Tooltip_Tooltips.h"
#include "arc/util/Timer_Task.h"
#include "arc/scene/Action.h"
#include "arc/func/Cons.h"
#include "arc/scene/ui/Tooltip_Tooltips_1.h"
#include "arc/scene/ui/Tooltip_Tooltips_2.h"
#include "java/lang/String.h"
#include "arc/util/Timer.h"
#include "arc/scene/actions/SequenceAction.h"
#include "arc/scene/ui/layout/Cell.h"
#include "arc/scene/ui/Tooltip.h"
#include "arc/func/Func.h"
#include "arc/scene/Group.h"
#include "arc/scene/ui/Tooltip_Tooltips_invoke_arc_func_Cons_0.h"
#include "arc/scene/ui/layout/Table.h"
#include "arc/math/Interp.h"
#include "arc/scene/actions/Actions.h"
#include "java/lang/CharSequence.h"
#include "java/lang/Object.h"
#include "arc/scene/Element.h"
#include "arc/scene/actions/ScaleToAction.h"
#include "arc/scene/actions/AlphaAction.h"
#include "arc/scene/actions/RemoveActorAction.h"

extern "C" {

jobject SF_arc_scene_ui_Tooltip$Tooltips_instance;

void mark_arc_scene_ui_Tooltip$Tooltips(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_arc_scene_ui_Tooltip$Tooltips_instance)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_scene_ui_Tooltip$Tooltips_instance)->clazz)->markFunction)((jobject) SF_arc_scene_ui_Tooltip$Tooltips_instance, mark, depth + 1);
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
	auto self = (arc_scene_ui_Tooltip$Tooltips *) object;
	if (self->F_textProvider)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_textProvider)->clazz)->markFunction)((jobject) self->F_textProvider, mark, depth + 1);
	if (self->F_resetTask)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_resetTask)->clazz)->markFunction)((jobject) self->F_resetTask, mark, depth + 1);
	if (self->F_showTooltip)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_showTooltip)->clazz)->markFunction)((jobject) self->F_showTooltip, mark, depth + 1);
	if (self->F_showTask)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_showTask)->clazz)->markFunction)((jobject) self->F_showTask, mark, depth + 1);
}

void clinit_arc_scene_ui_Tooltip$Tooltips(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_scene_ui_Tooltip$Tooltips(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Tooltip$Tooltips:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_Tooltip$Tooltips(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(159);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(163);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_arc_scene_ui_Tooltip$Tooltips_invoke_arc_func_Func_0(ctx);
		auto proxy = (arc_scene_ui_Tooltip$Tooltips_invoke_arc_func_Func_0 *) gcAlloc(ctx, &class_arc_scene_ui_Tooltip$Tooltips_invoke_arc_func_Func_0);
		sp[1].o = (jobject) proxy;
	}
	((arc_scene_ui_Tooltip$Tooltips *) NULL_CHECK(sp[0].o))->F_textProvider = (jref) sp[1].o;
	LINE_NUMBER(167);
	((arc_scene_ui_Tooltip$Tooltips *) NULL_CHECK((frame[0].o)))->F_initialTime = (jfloat(2));
	LINE_NUMBER(169);
	((arc_scene_ui_Tooltip$Tooltips *) NULL_CHECK((frame[0].o)))->F_subsequentTime = (jfloat(0));
	LINE_NUMBER(171);
	((arc_scene_ui_Tooltip$Tooltips *) NULL_CHECK((frame[0].o)))->F_resetTime = (jfloat(1.5f));
	LINE_NUMBER(173);
	((arc_scene_ui_Tooltip$Tooltips *) NULL_CHECK((frame[0].o)))->F_enabled = (jint(1));
	LINE_NUMBER(175);
	((arc_scene_ui_Tooltip$Tooltips *) NULL_CHECK((frame[0].o)))->F_animations = (jint(0));
	LINE_NUMBER(177);
	((arc_scene_ui_Tooltip$Tooltips *) NULL_CHECK((frame[0].o)))->F_offsetX = (jfloat(15.0f));
	((arc_scene_ui_Tooltip$Tooltips *) NULL_CHECK((frame[0].o)))->F_offsetY = (jfloat(19.0f));
	LINE_NUMBER(182);
	((arc_scene_ui_Tooltip$Tooltips *) NULL_CHECK((frame[0].o)))->F_edgeDistance = (jfloat(7.0f));
	LINE_NUMBER(184);
	((arc_scene_ui_Tooltip$Tooltips *) NULL_CHECK((frame[0].o)))->F_time = ((jfloat)((arc_scene_ui_Tooltip$Tooltips *) NULL_CHECK((frame[0].o)))->F_initialTime);
	LINE_NUMBER(185);
	sp[0].o = frame[0].o;
	clinit_arc_scene_ui_Tooltip$Tooltips$1(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_ui_Tooltip$Tooltips$1);
	init_arc_scene_ui_Tooltip$Tooltips$1_arc_scene_ui_Tooltip$Tooltips(ctx, sp[1].o, (frame[0].o));
	((arc_scene_ui_Tooltip$Tooltips *) NULL_CHECK(sp[0].o))->F_resetTask = (jref) sp[1].o;
	LINE_NUMBER(193);
	sp[0].o = frame[0].o;
	clinit_arc_scene_ui_Tooltip$Tooltips$2(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_ui_Tooltip$Tooltips$2);
	init_arc_scene_ui_Tooltip$Tooltips$2_arc_scene_ui_Tooltip$Tooltips(ctx, sp[1].o, (frame[0].o));
	((arc_scene_ui_Tooltip$Tooltips *) NULL_CHECK(sp[0].o))->F_showTask = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_arc_scene_ui_Tooltip$Tooltips_getInstance_R_arc_scene_ui_Tooltip$Tooltips(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Tooltip$Tooltips:getInstance", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_Tooltip$Tooltips(ctx);
	{
	LINE_NUMBER(214);
	clinit_arc_scene_ui_Tooltip$Tooltips(ctx);
	sp[0].o = (jobject)SF_arc_scene_ui_Tooltip$Tooltips_instance;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(215);
	clinit_arc_scene_ui_Tooltip$Tooltips(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_Tooltip$Tooltips);
	init_arc_scene_ui_Tooltip$Tooltips(ctx, sp[0].o);
	clinit_arc_scene_ui_Tooltip$Tooltips(ctx);
	SF_arc_scene_ui_Tooltip$Tooltips_instance = sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(217);
	clinit_arc_scene_ui_Tooltip$Tooltips(ctx);
	sp[0].o = (jobject)SF_arc_scene_ui_Tooltip$Tooltips_instance;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_Tooltip$Tooltips_create_java_lang_String_R_arc_scene_ui_Tooltip(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Tooltip$Tooltips:create", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(221);
	sp[0].o = (jobject)((arc_scene_ui_Tooltip$Tooltips *) NULL_CHECK((frame[0].o)))->F_textProvider;
	sp[0].o = (jobject)((func_arc_func_Func_get_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Func, INDEX_arc_func_Func_get_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_arc_scene_ui_Tooltip, sp[0].o));
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_Tooltip$Tooltips_create_java_lang_String_boolean_R_arc_scene_ui_Tooltip(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Tooltip$Tooltips:create", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(225);
	sp[0].o = (jobject)((arc_scene_ui_Tooltip$Tooltips *) NULL_CHECK((frame[0].o)))->F_textProvider;
	sp[0].o = (jobject)((func_arc_func_Func_get_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Func, INDEX_arc_func_Func_get_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	frame[3].o = (checkCast(ctx, &class_arc_scene_ui_Tooltip, sp[0].o));
	LINE_NUMBER(226);
	((arc_scene_ui_Tooltip *) NULL_CHECK((frame[3].o)))->F_allowMobile = (frame[2].i);
	LINE_NUMBER(227);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_Tooltip$Tooltips_touchDown_arc_scene_ui_Tooltip(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Tooltip$Tooltips:touchDown", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(231);
	sp[0].o = (jobject)((arc_scene_ui_Tooltip$Tooltips *) NULL_CHECK((frame[0].o)))->F_showTask;
	((func_arc_util_Timer$Task_cancel) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_Timer$Task_cancel])(ctx, sp[0].o);
	LINE_NUMBER(232);
	sp[0].o = (jobject)((arc_scene_ui_Tooltip *) NULL_CHECK((frame[1].o)))->F_container;
	jint temp0 = (jint)((func_arc_scene_ui_layout_Table_remove_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_remove_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_Tooltip$Tooltips *) NULL_CHECK((frame[0].o)))->F_resetTask;
	((func_arc_util_Timer$Task_cancel) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_Timer$Task_cancel])(ctx, sp[0].o);
	}
label_2:;
	{
	LINE_NUMBER(233);
	sp[0].o = (jobject)((arc_scene_ui_Tooltip$Tooltips *) NULL_CHECK((frame[0].o)))->F_resetTask;
	((func_arc_util_Timer$Task_run) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_Timer$Task_run])(ctx, sp[0].o);
	LINE_NUMBER(234);
	if (((jint)((arc_scene_ui_Tooltip$Tooltips *) NULL_CHECK((frame[0].o)))->F_enabled) != 0) goto label_4;
	}
	{
	if (((jint)((arc_scene_ui_Tooltip *) NULL_CHECK((frame[1].o)))->F_always) == 0) goto label_5;
	}
label_4:;
	{
	LINE_NUMBER(235);
	((arc_scene_ui_Tooltip$Tooltips *) NULL_CHECK((frame[0].o)))->F_showTooltip = (jref) (frame[1].o);
	LINE_NUMBER(236);
	sp[0].o = (jobject)((arc_scene_ui_Tooltip$Tooltips *) NULL_CHECK((frame[0].o)))->F_showTask;
	sp[0].o = (jobject)SM_arc_util_Timer_schedule_arc_util_Timer$Task_float_R_arc_util_Timer$Task(ctx, sp[0].o, ((jfloat)((arc_scene_ui_Tooltip$Tooltips *) NULL_CHECK((frame[0].o)))->F_time));
	}
label_5:;
	LINE_NUMBER(238);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_scene_ui_Tooltip$Tooltips_enter_arc_scene_ui_Tooltip(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Tooltip$Tooltips:enter", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(241);
	((arc_scene_ui_Tooltip$Tooltips *) NULL_CHECK((frame[0].o)))->F_showTooltip = (jref) (frame[1].o);
	LINE_NUMBER(242);
	sp[0].o = (jobject)((arc_scene_ui_Tooltip$Tooltips *) NULL_CHECK((frame[0].o)))->F_showTask;
	((func_arc_util_Timer$Task_cancel) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_Timer$Task_cancel])(ctx, sp[0].o);
	LINE_NUMBER(243);
	if (((jint)((arc_scene_ui_Tooltip$Tooltips *) NULL_CHECK((frame[0].o)))->F_enabled) != 0) goto label_3;
	}
	{
	if (((jint)((arc_scene_ui_Tooltip *) NULL_CHECK((frame[1].o)))->F_always) == 0) goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(244);
	if ((floatCompare(((jfloat)((arc_scene_ui_Tooltip$Tooltips *) NULL_CHECK((frame[0].o)))->F_time), (jfloat(0)), -1)) == 0) goto label_5;
	}
	{
	if (((jint)((arc_scene_ui_Tooltip *) NULL_CHECK((frame[1].o)))->F_instant) == 0) goto label_6;
	}
label_5:;
	{
	LINE_NUMBER(245);
	sp[0].o = (jobject)((arc_scene_ui_Tooltip$Tooltips *) NULL_CHECK((frame[0].o)))->F_showTask;
	((func_arc_util_Timer$Task_run) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_Timer$Task_run])(ctx, sp[0].o);
	goto label_4;
	}
label_6:;
	{
	LINE_NUMBER(247);
	sp[0].o = (jobject)((arc_scene_ui_Tooltip$Tooltips *) NULL_CHECK((frame[0].o)))->F_showTask;
	sp[0].o = (jobject)SM_arc_util_Timer_schedule_arc_util_Timer$Task_float_R_arc_util_Timer$Task(ctx, sp[0].o, ((jfloat)((arc_scene_ui_Tooltip$Tooltips *) NULL_CHECK((frame[0].o)))->F_time));
	}
label_4:;
	LINE_NUMBER(249);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_scene_ui_Tooltip$Tooltips_hide_arc_scene_ui_Tooltip(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Tooltip$Tooltips:hide", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(252);
	((arc_scene_ui_Tooltip$Tooltips *) NULL_CHECK((frame[0].o)))->F_showTooltip = (jref) (jobject(nullptr));
	LINE_NUMBER(253);
	sp[0].o = (jobject)((arc_scene_ui_Tooltip$Tooltips *) NULL_CHECK((frame[0].o)))->F_showTask;
	((func_arc_util_Timer$Task_cancel) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_Timer$Task_cancel])(ctx, sp[0].o);
	LINE_NUMBER(254);
	sp[0].o = (jobject)((arc_scene_ui_Tooltip *) NULL_CHECK((frame[1].o)))->F_container;
	jint temp0 = (jint)((func_arc_scene_ui_layout_Table_hasParent_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_hasParent_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(255);
	((func_arc_scene_ui_Tooltip$Tooltips_hideAction_arc_scene_ui_Tooltip) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Tooltip$Tooltips_hideAction_arc_scene_ui_Tooltip])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(256);
	sp[0].o = (jobject)((arc_scene_ui_Tooltip$Tooltips *) NULL_CHECK((frame[0].o)))->F_resetTask;
	((func_arc_util_Timer$Task_cancel) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_Timer$Task_cancel])(ctx, sp[0].o);
	LINE_NUMBER(257);
	sp[0].o = (jobject)((arc_scene_ui_Tooltip$Tooltips *) NULL_CHECK((frame[0].o)))->F_resetTask;
	sp[0].o = (jobject)SM_arc_util_Timer_schedule_arc_util_Timer$Task_float_R_arc_util_Timer$Task(ctx, sp[0].o, ((jfloat)((arc_scene_ui_Tooltip$Tooltips *) NULL_CHECK((frame[0].o)))->F_resetTime));
	}
label_3:;
	LINE_NUMBER(259);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_scene_ui_Tooltip$Tooltips_showAction_arc_scene_ui_Tooltip(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Tooltip$Tooltips:showAction", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(263);
	if (((jint)((arc_scene_ui_Tooltip$Tooltips *) NULL_CHECK((frame[0].o)))->F_animations) == 0) goto label_1;
	}
	{
	if ((floatCompare(((jfloat)((arc_scene_ui_Tooltip$Tooltips *) NULL_CHECK((frame[0].o)))->F_time), (jfloat(0)), -1)) <= 0) goto label_2;
	}
	(sp++)->f = jfloat(0.5f);
	goto label_3;
label_2:;
	(sp++)->f = jfloat(0.15f);
	goto label_3;
label_1:;
	(sp++)->f = jfloat(0.1f);
label_3:;
	{
	sp -= 1;
	frame[2].f = sp[0].f;
	LINE_NUMBER(264);
	sp[0].o = (jobject)((arc_scene_ui_Tooltip *) NULL_CHECK((frame[1].o)))->F_container;
	((func_arc_scene_ui_layout_Table_setTransform_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_setTransform_boolean])(ctx, sp[0].o, (jint(1)));
	LINE_NUMBER(265);
	sp[0].o = (jobject)((arc_scene_ui_Tooltip *) NULL_CHECK((frame[1].o)))->F_container;
	jfloat temp0 = frame[2].f;
	clinit_arc_math_Interp(ctx);
	sp[1].o = (jobject)SF_arc_math_Interp_fade;
	sp[1].o = (jobject)SM_arc_scene_actions_Actions_fadeIn_float_arc_math_Interp_R_arc_scene_actions_AlphaAction(ctx, temp0, sp[1].o);
	jfloat temp1 = jfloat(1);
	jfloat temp2 = jfloat(1);
	jfloat temp3 = frame[2].f;
	clinit_arc_math_Interp(ctx);
	sp[2].o = (jobject)SF_arc_math_Interp_fade;
	sp[2].o = (jobject)SM_arc_scene_actions_Actions_scaleTo_float_float_float_arc_math_Interp_R_arc_scene_actions_ScaleToAction(ctx, temp1, temp2, temp3, sp[2].o);
	sp[1].o = (jobject)SM_arc_scene_actions_Actions_parallel_arc_scene_Action_arc_scene_Action_R_arc_scene_actions_ParallelAction(ctx, sp[1].o, sp[2].o);
	((func_arc_scene_ui_layout_Table_addAction_arc_scene_Action) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_addAction_arc_scene_Action])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(266);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_Tooltip$Tooltips_hideAction_arc_scene_ui_Tooltip(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Tooltip$Tooltips:hideAction", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(273);
	sp[0].o = (jobject)((arc_scene_ui_Tooltip *) NULL_CHECK((frame[1].o)))->F_container;
	jfloat temp0 = jfloat(0.2f);
	jfloat temp1 = jfloat(0.2f);
	clinit_arc_math_Interp(ctx);
	sp[1].o = (jobject)SF_arc_math_Interp_fade;
	LINE_NUMBER(274);
	sp[1].o = (jobject)SM_arc_scene_actions_Actions_alpha_float_float_arc_math_Interp_R_arc_scene_actions_AlphaAction(ctx, temp0, temp1, sp[1].o);
	jfloat temp2 = jfloat(0.05f);
	jfloat temp3 = jfloat(0.05f);
	jfloat temp4 = jfloat(0.2f);
	clinit_arc_math_Interp(ctx);
	sp[2].o = (jobject)SF_arc_math_Interp_fade;
	sp[2].o = (jobject)SM_arc_scene_actions_Actions_scaleTo_float_float_float_arc_math_Interp_R_arc_scene_actions_ScaleToAction(ctx, temp2, temp3, temp4, sp[2].o);
	sp[1].o = (jobject)SM_arc_scene_actions_Actions_parallel_arc_scene_Action_arc_scene_Action_R_arc_scene_actions_ParallelAction(ctx, sp[1].o, sp[2].o);
	sp[2].o = (jobject)SM_arc_scene_actions_Actions_remove_R_arc_scene_actions_RemoveActorAction(ctx);
	sp[1].o = (jobject)SM_arc_scene_actions_Actions_sequence_arc_scene_Action_arc_scene_Action_R_arc_scene_actions_SequenceAction(ctx, sp[1].o, sp[2].o);
	((func_arc_scene_ui_layout_Table_addAction_arc_scene_Action) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_addAction_arc_scene_Action])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(275);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_Tooltip$Tooltips_instant(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Tooltip$Tooltips:instant", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(279);
	((arc_scene_ui_Tooltip$Tooltips *) NULL_CHECK((frame[0].o)))->F_time = (jfloat(0));
	LINE_NUMBER(280);
	sp[0].o = (jobject)((arc_scene_ui_Tooltip$Tooltips *) NULL_CHECK((frame[0].o)))->F_showTask;
	((func_arc_util_Timer$Task_run) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_Timer$Task_run])(ctx, sp[0].o);
	LINE_NUMBER(281);
	sp[0].o = (jobject)((arc_scene_ui_Tooltip$Tooltips *) NULL_CHECK((frame[0].o)))->F_showTask;
	((func_arc_util_Timer$Task_cancel) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_Timer$Task_cancel])(ctx, sp[0].o);
	LINE_NUMBER(282);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_arc_scene_ui_Tooltip$Tooltips_lambda$new$0_java_lang_String_R_arc_scene_ui_Tooltip(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Tooltip$Tooltips:lambda$new$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_Tooltip$Tooltips(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(163);
	clinit_arc_scene_ui_Tooltip(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_Tooltip);
	{ /* InvokeDynamic */
		clinit_arc_scene_ui_Tooltip$Tooltips_invoke_arc_func_Cons_0(ctx);
		auto proxy = (arc_scene_ui_Tooltip$Tooltips_invoke_arc_func_Cons_0 *) gcAlloc(ctx, &class_arc_scene_ui_Tooltip$Tooltips_invoke_arc_func_Cons_0);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	init_arc_scene_ui_Tooltip_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_arc_scene_ui_Tooltip$Tooltips_lambda$new$1_java_lang_String_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Tooltip$Tooltips:lambda$new$1", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_Tooltip$Tooltips(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(163);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, (frame[1].o), (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_scene_ui_Tooltip$Tooltips[] {
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
	(void *) M_arc_scene_ui_Tooltip$Tooltips_create_java_lang_String_R_arc_scene_ui_Tooltip,
	(void *) M_arc_scene_ui_Tooltip$Tooltips_create_java_lang_String_boolean_R_arc_scene_ui_Tooltip,
	(void *) M_arc_scene_ui_Tooltip$Tooltips_touchDown_arc_scene_ui_Tooltip,
	(void *) M_arc_scene_ui_Tooltip$Tooltips_enter_arc_scene_ui_Tooltip,
	(void *) M_arc_scene_ui_Tooltip$Tooltips_hide_arc_scene_ui_Tooltip,
	(void *) M_arc_scene_ui_Tooltip$Tooltips_showAction_arc_scene_ui_Tooltip,
	(void *) M_arc_scene_ui_Tooltip$Tooltips_hideAction_arc_scene_ui_Tooltip,
	(void *) M_arc_scene_ui_Tooltip$Tooltips_instant,
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
	{ "create", "(Ljava/lang/String;)Larc/scene/ui/Tooltip;" },
	{ "create", "(Ljava/lang/String;Z)Larc/scene/ui/Tooltip;" },
	{ "touchDown", "(Larc/scene/ui/Tooltip;)V" },
	{ "enter", "(Larc/scene/ui/Tooltip;)V" },
	{ "hide", "(Larc/scene/ui/Tooltip;)V" },
	{ "showAction", "(Larc/scene/ui/Tooltip;)V" },
	{ "hideAction", "(Larc/scene/ui/Tooltip;)V" },
	{ "instant", "()V" },
};

static FieldMetadata fields[] {
	{ "instance", &class_arc_scene_ui_Tooltip$Tooltips, (intptr_t) &SF_arc_scene_ui_Tooltip$Tooltips_instance, "Larc/scene/ui/Tooltip$Tooltips;", 10 },
	{ "textProvider", &class_arc_func_Func, offsetof(arc_scene_ui_Tooltip$Tooltips, F_textProvider), "Larc/func/Func;", 1 },
	{ "initialTime", &class_float, offsetof(arc_scene_ui_Tooltip$Tooltips, F_initialTime), "F", 1 },
	{ "subsequentTime", &class_float, offsetof(arc_scene_ui_Tooltip$Tooltips, F_subsequentTime), "F", 1 },
	{ "resetTime", &class_float, offsetof(arc_scene_ui_Tooltip$Tooltips, F_resetTime), "F", 1 },
	{ "enabled", &class_boolean, offsetof(arc_scene_ui_Tooltip$Tooltips, F_enabled), "Z", 1 },
	{ "animations", &class_boolean, offsetof(arc_scene_ui_Tooltip$Tooltips, F_animations), "Z", 1 },
	{ "offsetX", &class_float, offsetof(arc_scene_ui_Tooltip$Tooltips, F_offsetX), "F", 1 },
	{ "offsetY", &class_float, offsetof(arc_scene_ui_Tooltip$Tooltips, F_offsetY), "F", 1 },
	{ "edgeDistance", &class_float, offsetof(arc_scene_ui_Tooltip$Tooltips, F_edgeDistance), "F", 1 },
	{ "time", &class_float, offsetof(arc_scene_ui_Tooltip$Tooltips, F_time), "F", 0 },
	{ "resetTask", &class_arc_util_Timer$Task, offsetof(arc_scene_ui_Tooltip$Tooltips, F_resetTask), "Larc/util/Timer$Task;", 16 },
	{ "showTooltip", &class_arc_scene_ui_Tooltip, offsetof(arc_scene_ui_Tooltip$Tooltips, F_showTooltip), "Larc/scene/ui/Tooltip;", 0 },
	{ "showTask", &class_arc_util_Timer$Task, offsetof(arc_scene_ui_Tooltip$Tooltips, F_showTask), "Larc/util/Timer$Task;", 16 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_scene_ui_Tooltip$Tooltips, 0, "()V", 1 },
	{ "getInstance", (intptr_t) SM_arc_scene_ui_Tooltip$Tooltips_getInstance_R_arc_scene_ui_Tooltip$Tooltips, 0, "()Larc/scene/ui/Tooltip$Tooltips;", 9 },
	{ "create", (intptr_t) M_arc_scene_ui_Tooltip$Tooltips_create_java_lang_String_R_arc_scene_ui_Tooltip, VTABLE_arc_scene_ui_Tooltip$Tooltips_create_java_lang_String_R_arc_scene_ui_Tooltip, "(Ljava/lang/String;)Larc/scene/ui/Tooltip;", 1 },
	{ "create", (intptr_t) M_arc_scene_ui_Tooltip$Tooltips_create_java_lang_String_boolean_R_arc_scene_ui_Tooltip, VTABLE_arc_scene_ui_Tooltip$Tooltips_create_java_lang_String_boolean_R_arc_scene_ui_Tooltip, "(Ljava/lang/String;Z)Larc/scene/ui/Tooltip;", 1 },
	{ "touchDown", (intptr_t) M_arc_scene_ui_Tooltip$Tooltips_touchDown_arc_scene_ui_Tooltip, VTABLE_arc_scene_ui_Tooltip$Tooltips_touchDown_arc_scene_ui_Tooltip, "(Larc/scene/ui/Tooltip;)V", 1 },
	{ "enter", (intptr_t) M_arc_scene_ui_Tooltip$Tooltips_enter_arc_scene_ui_Tooltip, VTABLE_arc_scene_ui_Tooltip$Tooltips_enter_arc_scene_ui_Tooltip, "(Larc/scene/ui/Tooltip;)V", 1 },
	{ "hide", (intptr_t) M_arc_scene_ui_Tooltip$Tooltips_hide_arc_scene_ui_Tooltip, VTABLE_arc_scene_ui_Tooltip$Tooltips_hide_arc_scene_ui_Tooltip, "(Larc/scene/ui/Tooltip;)V", 1 },
	{ "showAction", (intptr_t) M_arc_scene_ui_Tooltip$Tooltips_showAction_arc_scene_ui_Tooltip, VTABLE_arc_scene_ui_Tooltip$Tooltips_showAction_arc_scene_ui_Tooltip, "(Larc/scene/ui/Tooltip;)V", 4 },
	{ "hideAction", (intptr_t) M_arc_scene_ui_Tooltip$Tooltips_hideAction_arc_scene_ui_Tooltip, VTABLE_arc_scene_ui_Tooltip$Tooltips_hideAction_arc_scene_ui_Tooltip, "(Larc/scene/ui/Tooltip;)V", 4 },
	{ "instant", (intptr_t) M_arc_scene_ui_Tooltip$Tooltips_instant, VTABLE_arc_scene_ui_Tooltip$Tooltips_instant, "()V", 1 },
	{ "lambda$new$0", (intptr_t) SM_arc_scene_ui_Tooltip$Tooltips_lambda$new$0_java_lang_String_R_arc_scene_ui_Tooltip, 0, "(Ljava/lang/String;)Larc/scene/ui/Tooltip;", 4106 },
	{ "lambda$new$1", (intptr_t) SM_arc_scene_ui_Tooltip$Tooltips_lambda$new$1_java_lang_String_arc_scene_ui_layout_Table, 0, "(Ljava/lang/String;Larc/scene/ui/layout/Table;)V", 4106 },
};

Class class_arc_scene_ui_Tooltip$Tooltips{
		.nativeName = (intptr_t) "arc/scene/ui/Tooltip$Tooltips",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_scene_ui_Tooltip$Tooltips),
		.classVtable = (intptr_t) vtable_arc_scene_ui_Tooltip$Tooltips,
		.staticInitializer = (intptr_t) clinit_arc_scene_ui_Tooltip$Tooltips,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_scene_ui_Tooltip$Tooltips,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_scene_ui_Tooltip,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 14,
		.nativeFields = (intptr_t) fields,
		.methodCount = 12,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 19,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_scene_ui_Tooltip$Tooltips = registerClass(&class_arc_scene_ui_Tooltip$Tooltips);

}

