#include "mindustry/ui/fragments/PlanConfigFragment.h"
#include "arc/math/geom/Vec2.h"
#include "arc/func/Prov.h"
#include "mindustry/game/EventType_ResetEvent.h"
#include "mindustry/world/Block.h"
#include "arc/Input.h"
#include "arc/Events.h"
#include "mindustry/ui/fragments/PlanConfigFragment_invoke_arc_func_Prov_1.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "arc/scene/Action.h"
#include "java/lang/Runnable.h"
#include "arc/func/Cons.h"
#include "arc/scene/ui/layout/WidgetGroup.h"
#include "arc/struct/Seq.h"
#include "mindustry/core/Control.h"
#include "mindustry/entities/units/BuildPlan.h"
#include "mindustry/world/blocks/ItemSelection.h"
#include "arc/scene/actions/VisibleAction.h"
#include "mindustry/ui/fragments/PlanConfigFragment.h"
#include "arc/Core.h"
#include "mindustry/gen/Unit.h"
#include "arc/scene/Group.h"
#include "arc/scene/ui/layout/Table.h"
#include "arc/math/Interp.h"
#include "mindustry/ui/fragments/PlanConfigFragment_invoke_arc_func_Cons_2.h"
#include "mindustry/ui/fragments/PlanConfigFragment_invoke_arc_func_Cons_3.h"
#include "arc/math/Interp_PowOut.h"
#include "arc/struct/Queue.h"
#include "arc/scene/actions/Actions.h"
#include "java/lang/Object.h"
#include "arc/scene/Element.h"
#include "arc/scene/actions/ScaleToAction.h"
#include "mindustry/gen/Player.h"
#include "mindustry/ui/fragments/PlanConfigFragment_invoke_java_lang_Runnable_1.h"
#include "java/lang/Class.h"
#include "mindustry/Vars.h"
#include "mindustry/input/InputHandler.h"

extern "C" {


void mark_mindustry_ui_fragments_PlanConfigFragment(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_ui_fragments_PlanConfigFragment *) object;
	if (self->F_table)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_table)->clazz)->markFunction)((jobject) self->F_table, mark, depth + 1);
	if (self->F_selected)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_selected)->clazz)->markFunction)((jobject) self->F_selected, mark, depth + 1);
}

void clinit_mindustry_ui_fragments_PlanConfigFragment(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_ui_fragments_PlanConfigFragment(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PlanConfigFragment:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_PlanConfigFragment(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(23);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(24);
	sp[0].o = frame[0].o;
	clinit_arc_scene_ui_layout_Table(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Table);
	init_arc_scene_ui_layout_Table(ctx, sp[1].o);
	((mindustry_ui_fragments_PlanConfigFragment *) NULL_CHECK(sp[0].o))->F_table = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_PlanConfigFragment_build_arc_scene_Group(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PlanConfigFragment:build", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(28);
	sp[0].o = (jobject)((mindustry_ui_fragments_PlanConfigFragment *) NULL_CHECK((frame[0].o)))->F_table;
	((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_visible = (jint(0));
	LINE_NUMBER(29);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_ui_fragments_PlanConfigFragment *) NULL_CHECK((frame[0].o)))->F_table;
	((func_arc_scene_Group_addChild_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Group_addChild_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(31);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$ResetEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_PlanConfigFragment_invoke_arc_func_Cons_2(ctx);
		auto proxy = (mindustry_ui_fragments_PlanConfigFragment_invoke_arc_func_Cons_2 *) gcAlloc(ctx, &class_mindustry_ui_fragments_PlanConfigFragment_invoke_arc_func_Cons_2);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(32);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_PlanConfigFragment_showConfig_mindustry_entities_units_BuildPlan(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PlanConfigFragment:showConfig", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(35);
	sp[0].o = (jobject)((mindustry_ui_fragments_PlanConfigFragment *) NULL_CHECK((frame[0].o)))->F_selected;
	if (sp[0].o == (frame[1].o)) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_block;
	if (sp[0].o != nullptr) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(36);
	((func_mindustry_ui_fragments_PlanConfigFragment_hide) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_fragments_PlanConfigFragment_hide])(ctx, (frame[0].o));
	LINE_NUMBER(37);
	popStackFrame(ctx);
	return;
	}
label_2:;
	{
	LINE_NUMBER(39);
	sp[0].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_block;
	frame[2].o = sp[0].o;
	LINE_NUMBER(40);
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[2].o)))->F_configurable) != 0) goto label_5;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_5:;
	{
	LINE_NUMBER(41);
	((mindustry_ui_fragments_PlanConfigFragment *) NULL_CHECK((frame[0].o)))->F_selected = (jref) (frame[1].o);
	LINE_NUMBER(42);
	sp[0].o = (jobject)((mindustry_ui_fragments_PlanConfigFragment *) NULL_CHECK((frame[0].o)))->F_table;
	((func_arc_scene_ui_layout_Table_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_clear])(ctx, sp[0].o);
	LINE_NUMBER(44);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(45);
	((func_mindustry_world_Block_getPlanConfigs_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_Block_getPlanConfigs_arc_struct_Seq])(ctx, (frame[2].o), (frame[3].o));
	LINE_NUMBER(47);
	jint temp0 = (jint)((func_arc_struct_Seq_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_Seq_isEmpty_R_boolean])(ctx, (frame[3].o));
	if (temp0 == 0) goto label_10;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_10:;
	{
	LINE_NUMBER(49);
	sp[0].o = (jobject)((mindustry_ui_fragments_PlanConfigFragment *) NULL_CHECK((frame[0].o)))->F_table;
	sp[1].o = frame[3].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_PlanConfigFragment_invoke_arc_func_Prov_1(ctx);
		auto proxy = (mindustry_ui_fragments_PlanConfigFragment_invoke_arc_func_Prov_1 *) gcAlloc(ctx, &class_mindustry_ui_fragments_PlanConfigFragment_invoke_arc_func_Prov_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_PlanConfigFragment_invoke_arc_func_Cons_3(ctx);
		auto proxy = (mindustry_ui_fragments_PlanConfigFragment_invoke_arc_func_Cons_3 *) gcAlloc(ctx, &class_mindustry_ui_fragments_PlanConfigFragment_invoke_arc_func_Cons_3);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	SM_mindustry_world_blocks_ItemSelection_buildTable_arc_scene_ui_layout_Table_arc_struct_Seq_arc_func_Prov_arc_func_Cons_int_int(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, ((jint)((mindustry_world_Block *) NULL_CHECK((frame[2].o)))->F_selectionRows), ((jint)((mindustry_world_Block *) NULL_CHECK((frame[2].o)))->F_selectionColumns));
	LINE_NUMBER(58);
	sp[0].o = (jobject)((mindustry_ui_fragments_PlanConfigFragment *) NULL_CHECK((frame[0].o)))->F_table;
	((func_arc_scene_ui_layout_Table_pack) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_pack])(ctx, sp[0].o);
	LINE_NUMBER(59);
	sp[0].o = (jobject)((mindustry_ui_fragments_PlanConfigFragment *) NULL_CHECK((frame[0].o)))->F_table;
	((func_arc_scene_ui_layout_Table_setTransform_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_setTransform_boolean])(ctx, sp[0].o, (jint(1)));
	LINE_NUMBER(60);
	sp[0].o = (jobject)((mindustry_ui_fragments_PlanConfigFragment *) NULL_CHECK((frame[0].o)))->F_table;
	((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_visible = (jint(1));
	LINE_NUMBER(61);
	sp[0].o = (jobject)((mindustry_ui_fragments_PlanConfigFragment *) NULL_CHECK((frame[0].o)))->F_table;
	sp[1].o = (jobject)createArray(ctx, &class_arc_scene_Action, (jint(3)));
	jint temp0 = jint(0);
	sp[2].o = (jobject)SM_arc_scene_actions_Actions_scaleTo_float_float_R_arc_scene_actions_ScaleToAction(ctx, (jfloat(0)), (jfloat(1)));
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	jint temp1 = jint(1);
	sp[2].o = (jobject)SM_arc_scene_actions_Actions_visible_boolean_R_arc_scene_actions_VisibleAction(ctx, (jint(1)));
	ARRAY_ACCESS(jobject, sp[1].o, temp1) = sp[2].o;
	jint temp2 = jint(2);
	jfloat temp3 = jfloat(1);
	jfloat temp4 = jfloat(1);
	jfloat temp5 = jfloat(0.07f);
	clinit_arc_math_Interp(ctx);
	sp[2].o = (jobject)SF_arc_math_Interp_pow3Out;
	LINE_NUMBER(62);
	sp[2].o = (jobject)SM_arc_scene_actions_Actions_scaleTo_float_float_float_arc_math_Interp_R_arc_scene_actions_ScaleToAction(ctx, temp3, temp4, temp5, sp[2].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp2) = sp[2].o;
	LINE_NUMBER(61);
	((func_arc_scene_ui_layout_Table_actions_Array1_arc_scene_Action) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_actions_Array1_arc_scene_Action])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(63);
	sp[0].o = (jobject)((mindustry_ui_fragments_PlanConfigFragment *) NULL_CHECK((frame[0].o)))->F_table;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_PlanConfigFragment_invoke_java_lang_Runnable_1(ctx);
		auto proxy = (mindustry_ui_fragments_PlanConfigFragment_invoke_java_lang_Runnable_1 *) gcAlloc(ctx, &class_mindustry_ui_fragments_PlanConfigFragment_invoke_java_lang_Runnable_1);
		proxy->F_field2 = (jref) (frame[2].o);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_update_java_lang_Runnable_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_update_java_lang_Runnable_R_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(72);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_PlanConfigFragment_forceHide(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PlanConfigFragment:forceHide", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(75);
	sp[0].o = (jobject)((mindustry_ui_fragments_PlanConfigFragment *) NULL_CHECK((frame[0].o)))->F_table;
	((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_visible = (jint(0));
	LINE_NUMBER(76);
	((mindustry_ui_fragments_PlanConfigFragment *) NULL_CHECK((frame[0].o)))->F_selected = (jref) (jobject(nullptr));
	LINE_NUMBER(77);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_PlanConfigFragment_hide(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PlanConfigFragment:hide", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(80);
	((mindustry_ui_fragments_PlanConfigFragment *) NULL_CHECK((frame[0].o)))->F_selected = (jref) (jobject(nullptr));
	LINE_NUMBER(81);
	sp[0].o = (jobject)((mindustry_ui_fragments_PlanConfigFragment *) NULL_CHECK((frame[0].o)))->F_table;
	sp[1].o = (jobject)createArray(ctx, &class_arc_scene_Action, (jint(2)));
	jint temp0 = jint(0);
	jfloat temp1 = jfloat(0);
	jfloat temp2 = jfloat(1);
	jfloat temp3 = jfloat(0.06f);
	clinit_arc_math_Interp(ctx);
	sp[2].o = (jobject)SF_arc_math_Interp_pow3Out;
	sp[2].o = (jobject)SM_arc_scene_actions_Actions_scaleTo_float_float_float_arc_math_Interp_R_arc_scene_actions_ScaleToAction(ctx, temp1, temp2, temp3, sp[2].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	jint temp4 = jint(1);
	sp[2].o = (jobject)SM_arc_scene_actions_Actions_visible_boolean_R_arc_scene_actions_VisibleAction(ctx, (jint(0)));
	ARRAY_ACCESS(jobject, sp[1].o, temp4) = sp[2].o;
	((func_arc_scene_ui_layout_Table_actions_Array1_arc_scene_Action) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_actions_Array1_arc_scene_Action])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(82);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_PlanConfigFragment_lambda$showConfig$2_mindustry_entities_units_BuildPlan_mindustry_world_Block(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PlanConfigFragment:lambda$showConfig$2", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(64);
	sp[0].o = (jobject)((mindustry_ui_fragments_PlanConfigFragment *) NULL_CHECK((frame[0].o)))->F_table;
	((func_arc_scene_ui_layout_Table_setOrigin_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_setOrigin_int])(ctx, sp[0].o, (jint(1)));
	LINE_NUMBER(65);
	jint temp0 = (jint)((func_mindustry_entities_units_BuildPlan_isDone_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_isDone_R_boolean])(ctx, (frame[1].o));
	if (temp0 != 0) goto label_2;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_input;
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK(sp[0].o))->F_selectPlans;
	jint temp0 = (jint)((func_arc_struct_Seq_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 != 0) goto label_3;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	jint temp0 = (jint)((func_mindustry_gen_Player_dead_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_dead_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_3;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_plans;
	jint temp0 = (jint)((func_arc_struct_Queue_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Queue_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 != 0) goto label_3;
	}
label_2:;
	{
	LINE_NUMBER(66);
	((func_mindustry_ui_fragments_PlanConfigFragment_hide) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_fragments_PlanConfigFragment_hide])(ctx, (frame[0].o));
	LINE_NUMBER(67);
	popStackFrame(ctx);
	return;
	}
label_3:;
	{
	LINE_NUMBER(69);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	jfloat temp0 = (jfloat)((func_mindustry_entities_units_BuildPlan_drawx_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_drawx_R_float])(ctx, (frame[1].o));
	jfloat temp1 = (jfloat)((func_mindustry_entities_units_BuildPlan_drawy_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_drawy_R_float])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_Input_mouseScreen_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_mouseScreen_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp0, ((temp1 - ((jfloat((((jint)((mindustry_world_Block *) NULL_CHECK((frame[2].o)))->F_size) * (8)))) / (jfloat(2)))) - (jfloat(1))));
	frame[3].o = sp[0].o;
	LINE_NUMBER(70);
	sp[0].o = (jobject)((mindustry_ui_fragments_PlanConfigFragment *) NULL_CHECK((frame[0].o)))->F_table;
	((func_arc_scene_ui_layout_Table_setPosition_float_float_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_setPosition_float_float_int])(ctx, sp[0].o, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[3].o)))->F_x), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[3].o)))->F_y), (jint(2)));
	LINE_NUMBER(71);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_PlanConfigFragment_lambda$showConfig$1_mindustry_ctype_UnlockableContent(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PlanConfigFragment:lambda$showConfig$1", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(53);
	sp[0].o = (jobject)((mindustry_ui_fragments_PlanConfigFragment *) NULL_CHECK((frame[0].o)))->F_selected;
	((mindustry_entities_units_BuildPlan *) NULL_CHECK(sp[0].o))->F_config = (jref) (frame[1].o);
	LINE_NUMBER(54);
	((func_mindustry_ui_fragments_PlanConfigFragment_hide) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_fragments_PlanConfigFragment_hide])(ctx, (frame[0].o));
	LINE_NUMBER(55);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ui_fragments_PlanConfigFragment_lambda$showConfig$0_R_mindustry_ctype_UnlockableContent(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PlanConfigFragment:lambda$showConfig$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(51);
	sp[0].o = (jobject)((mindustry_ui_fragments_PlanConfigFragment *) NULL_CHECK((frame[0].o)))->F_selected;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_fragments_PlanConfigFragment *) NULL_CHECK((frame[0].o)))->F_selected;
	sp[0].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK(sp[0].o))->F_config;
	frame[2].o = sp[0].o;
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_ctype_UnlockableContent)) == 0) goto label_3;
	}
	{
	frame[1].o = (checkCast(ctx, &class_mindustry_ctype_UnlockableContent, (frame[2].o)));
	sp[0].o = frame[1].o;
	sp += 1;
	goto label_5;
	}
label_3:;
	INST_ACONST_NULL();
	goto label_5;
label_1:;
	INST_ACONST_NULL();
label_5:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_PlanConfigFragment_lambda$build$0_mindustry_game_EventType$ResetEvent(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PlanConfigFragment:lambda$build$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(31);
	((func_mindustry_ui_fragments_PlanConfigFragment_forceHide) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_fragments_PlanConfigFragment_forceHide])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_ui_fragments_PlanConfigFragment[] {
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
	(void *) M_mindustry_ui_fragments_PlanConfigFragment_build_arc_scene_Group,
	(void *) M_mindustry_ui_fragments_PlanConfigFragment_showConfig_mindustry_entities_units_BuildPlan,
	(void *) M_mindustry_ui_fragments_PlanConfigFragment_forceHide,
	(void *) M_mindustry_ui_fragments_PlanConfigFragment_hide,
	(void *) M_mindustry_ui_fragments_PlanConfigFragment_lambda$showConfig$2_mindustry_entities_units_BuildPlan_mindustry_world_Block,
	(void *) M_mindustry_ui_fragments_PlanConfigFragment_lambda$showConfig$1_mindustry_ctype_UnlockableContent,
	(void *) M_mindustry_ui_fragments_PlanConfigFragment_lambda$showConfig$0_R_mindustry_ctype_UnlockableContent,
	(void *) M_mindustry_ui_fragments_PlanConfigFragment_lambda$build$0_mindustry_game_EventType$ResetEvent,
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
	{ "build", "(Larc/scene/Group;)V" },
	{ "showConfig", "(Lmindustry/entities/units/BuildPlan;)V" },
	{ "forceHide", "()V" },
	{ "hide", "()V" },
	{ "lambda$showConfig$2", "(Lmindustry/entities/units/BuildPlan;Lmindustry/world/Block;)V" },
	{ "lambda$showConfig$1", "(Lmindustry/ctype/UnlockableContent;)V" },
	{ "lambda$showConfig$0", "()Lmindustry/ctype/UnlockableContent;" },
	{ "lambda$build$0", "(Lmindustry/game/EventType$ResetEvent;)V" },
};

static FieldMetadata fields[] {
	{ "table", &class_arc_scene_ui_layout_Table, offsetof(mindustry_ui_fragments_PlanConfigFragment, F_table), "Larc/scene/ui/layout/Table;", 0 },
	{ "selected", &class_mindustry_entities_units_BuildPlan, offsetof(mindustry_ui_fragments_PlanConfigFragment, F_selected), "Lmindustry/entities/units/BuildPlan;", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ui_fragments_PlanConfigFragment, 0, "()V", 1 },
	{ "build", (intptr_t) M_mindustry_ui_fragments_PlanConfigFragment_build_arc_scene_Group, VTABLE_mindustry_ui_fragments_PlanConfigFragment_build_arc_scene_Group, "(Larc/scene/Group;)V", 1 },
	{ "showConfig", (intptr_t) M_mindustry_ui_fragments_PlanConfigFragment_showConfig_mindustry_entities_units_BuildPlan, VTABLE_mindustry_ui_fragments_PlanConfigFragment_showConfig_mindustry_entities_units_BuildPlan, "(Lmindustry/entities/units/BuildPlan;)V", 1 },
	{ "forceHide", (intptr_t) M_mindustry_ui_fragments_PlanConfigFragment_forceHide, VTABLE_mindustry_ui_fragments_PlanConfigFragment_forceHide, "()V", 1 },
	{ "hide", (intptr_t) M_mindustry_ui_fragments_PlanConfigFragment_hide, VTABLE_mindustry_ui_fragments_PlanConfigFragment_hide, "()V", 1 },
	{ "lambda$showConfig$2", (intptr_t) M_mindustry_ui_fragments_PlanConfigFragment_lambda$showConfig$2_mindustry_entities_units_BuildPlan_mindustry_world_Block, VTABLE_mindustry_ui_fragments_PlanConfigFragment_lambda$showConfig$2_mindustry_entities_units_BuildPlan_mindustry_world_Block, "(Lmindustry/entities/units/BuildPlan;Lmindustry/world/Block;)V", 4098 },
	{ "lambda$showConfig$1", (intptr_t) M_mindustry_ui_fragments_PlanConfigFragment_lambda$showConfig$1_mindustry_ctype_UnlockableContent, VTABLE_mindustry_ui_fragments_PlanConfigFragment_lambda$showConfig$1_mindustry_ctype_UnlockableContent, "(Lmindustry/ctype/UnlockableContent;)V", 4098 },
	{ "lambda$showConfig$0", (intptr_t) M_mindustry_ui_fragments_PlanConfigFragment_lambda$showConfig$0_R_mindustry_ctype_UnlockableContent, VTABLE_mindustry_ui_fragments_PlanConfigFragment_lambda$showConfig$0_R_mindustry_ctype_UnlockableContent, "()Lmindustry/ctype/UnlockableContent;", 4098 },
	{ "lambda$build$0", (intptr_t) M_mindustry_ui_fragments_PlanConfigFragment_lambda$build$0_mindustry_game_EventType$ResetEvent, VTABLE_mindustry_ui_fragments_PlanConfigFragment_lambda$build$0_mindustry_game_EventType$ResetEvent, "(Lmindustry/game/EventType$ResetEvent;)V", 4098 },
};

Class class_mindustry_ui_fragments_PlanConfigFragment{
		.nativeName = (intptr_t) "mindustry/ui/fragments/PlanConfigFragment",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_ui_fragments_PlanConfigFragment),
		.classVtable = (intptr_t) vtable_mindustry_ui_fragments_PlanConfigFragment,
		.staticInitializer = (intptr_t) clinit_mindustry_ui_fragments_PlanConfigFragment,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_ui_fragments_PlanConfigFragment,
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
		.methodCount = 9,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 19,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_ui_fragments_PlanConfigFragment = registerClass(&class_mindustry_ui_fragments_PlanConfigFragment);

}
