#include "mindustry/ui/fragments/BlockInventoryFragment.h"
#include "arc/func/Prov.h"
#include "arc/Input.h"
#include "mindustry/ui/fragments/BlockInventoryFragment_invoke_arc_func_Cons_1.h"
#include "arc/Events.h"
#include "arc/func/Boolp.h"
#include "java/lang/Runnable.h"
#include "arc/scene/ui/Image.h"
#include "arc/scene/event/Touchable.h"
#include "mindustry/core/ContentLoader.h"
#include "java/util/Arrays.h"
#include "arc/struct/Seq.h"
#include "arc/scene/ui/layout/Cell.h"
#include "arc/math/geom/Position.h"
#include "arc/scene/actions/VisibleAction.h"
#include "mindustry/game/EventType_WithdrawEvent.h"
#include "arc/Core.h"
#include "mindustry/gen/Unit.h"
#include "mindustry/ui/fragments/BlockInventoryFragment_invoke_arc_func_Prov_1.h"
#include "arc/math/Interp.h"
#include "mindustry/ui/fragments/BlockInventoryFragment_invoke_arc_func_Boolp_3.h"
#include "arc/util/Time.h"
#include "mindustry/type/Item.h"
#include "mindustry/ui/fragments/BlockInventoryFragment_invoke_arc_func_Boolp_2.h"
#include "mindustry/world/modules/ItemModule.h"
#include "mindustry/gen/Building.h"
#include "arc/scene/Scene.h"
#include "java/lang/Object.h"
#include "arc/scene/actions/ScaleToAction.h"
#include "mindustry/gen/Itemsc.h"
#include "mindustry/net/Net.h"
#include "arc/math/geom/Vec2.h"
#include "mindustry/ui/fragments/BlockInventoryFragment.h"
#include "mindustry/world/Block.h"
#include "arc/scene/actions/RunnableAction.h"
#include "mindustry/ui/fragments/BlockInventoryFragment_invoke_java_lang_Runnable_2.h"
#include "mindustry/ui/fragments/BlockInventoryFragment_invoke_java_lang_Runnable_3.h"
#include "arc/scene/event/HandCursorListener.h"
#include "arc/scene/Action.h"
#include "arc/func/Cons.h"
#include "arc/struct/IntSet.h"
#include "java/lang/String.h"
#include "mindustry/game/EventType_WorldLoadEvent.h"
#include "arc/scene/ui/layout/WidgetGroup.h"
#include "arc/scene/style/Drawable.h"
#include "java/lang/Math.h"
#include "mindustry/gen/Tex.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "arc/scene/ui/layout/Stack.h"
#include "arc/scene/Group.h"
#include "arc/scene/ui/layout/Table.h"
#include "arc/math/Interp_PowOut.h"
#include "mindustry/core/UI.h"
#include "arc/scene/actions/Actions.h"
#include "java/lang/CharSequence.h"
#include "arc/scene/Element.h"
#include "mindustry/gen/Player.h"
#include "arc/scene/event/EventListener.h"
#include "mindustry/ui/fragments/BlockInventoryFragment_1.h"
#include "java/lang/Class.h"
#include "arc/struct/SnapshotSeq.h"
#include "mindustry/Vars.h"
#include "mindustry/gen/Call.h"
#include "mindustry/core/GameState.h"

extern "C" {

jfloat SF_mindustry_ui_fragments_BlockInventoryFragment_holdWithdraw;
jfloat SF_mindustry_ui_fragments_BlockInventoryFragment_holdShrink;

void mark_mindustry_ui_fragments_BlockInventoryFragment(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_ui_fragments_BlockInventoryFragment *) object;
	if (self->F_table)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_table)->clazz)->markFunction)((jobject) self->F_table, mark, depth + 1);
	if (self->F_build)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_build)->clazz)->markFunction)((jobject) self->F_build, mark, depth + 1);
	if (self->F_shrinkHoldTimes)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_shrinkHoldTimes)->clazz)->markFunction)((jobject) self->F_shrinkHoldTimes, mark, depth + 1);
	if (self->F_lastItem)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lastItem)->clazz)->markFunction)((jobject) self->F_lastItem, mark, depth + 1);
}

void clinit_mindustry_ui_fragments_BlockInventoryFragment(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_mindustry_ui_fragments_BlockInventoryFragment_holdWithdraw = jfloat(20.0f);
	SF_mindustry_ui_fragments_BlockInventoryFragment_holdShrink = jfloat(120.0f);
}

void init_mindustry_ui_fragments_BlockInventoryFragment(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/BlockInventoryFragment:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_BlockInventoryFragment(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(26);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(30);
	sp[0].o = frame[0].o;
	clinit_arc_scene_ui_layout_Table(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Table);
	init_arc_scene_ui_layout_Table(ctx, sp[1].o);
	((mindustry_ui_fragments_BlockInventoryFragment *) NULL_CHECK(sp[0].o))->F_table = (jref) sp[1].o;
	LINE_NUMBER(32);
	((mindustry_ui_fragments_BlockInventoryFragment *) NULL_CHECK((frame[0].o)))->F_holdTime = (jfloat(0));
	LINE_NUMBER(34);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_items_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_items_R_arc_struct_Seq])(ctx, sp[1].o);
	sp[1].o = (jobject) createArray(ctx, &class_float, ((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size));
	((mindustry_ui_fragments_BlockInventoryFragment *) NULL_CHECK(sp[0].o))->F_shrinkHoldTimes = (jref) sp[1].o;
	LINE_NUMBER(38);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$WorldLoadEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_BlockInventoryFragment_invoke_arc_func_Cons_1(ctx);
		auto proxy = (mindustry_ui_fragments_BlockInventoryFragment_invoke_arc_func_Cons_1 *) gcAlloc(ctx, &class_mindustry_ui_fragments_BlockInventoryFragment_invoke_arc_func_Cons_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(34);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_BlockInventoryFragment_build_arc_scene_Group(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/BlockInventoryFragment:build", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(42);
	sp[0].o = (jobject)((mindustry_ui_fragments_BlockInventoryFragment *) NULL_CHECK((frame[0].o)))->F_table;
	((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_name = (jref) (((jobject) createStringLiteral(ctx, u8"inventory"_j)));
	LINE_NUMBER(43);
	sp[0].o = (jobject)((mindustry_ui_fragments_BlockInventoryFragment *) NULL_CHECK((frame[0].o)))->F_table;
	((func_arc_scene_ui_layout_Table_setTransform_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_setTransform_boolean])(ctx, sp[0].o, (jint(1)));
	LINE_NUMBER(44);
	((func_arc_scene_Group_setTransform_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_Group_setTransform_boolean])(ctx, (frame[1].o), (jint(1)));
	LINE_NUMBER(45);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_ui_fragments_BlockInventoryFragment *) NULL_CHECK((frame[0].o)))->F_table;
	((func_arc_scene_Group_addChild_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Group_addChild_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(46);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_BlockInventoryFragment_showFor_mindustry_gen_Building(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/BlockInventoryFragment:showFor", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(49);
	sp[0].o = (jobject)((mindustry_ui_fragments_BlockInventoryFragment *) NULL_CHECK((frame[0].o)))->F_build;
	if (sp[0].o != (frame[1].o)) goto label_1;
	}
	{
	LINE_NUMBER(50);
	((func_mindustry_ui_fragments_BlockInventoryFragment_hide) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_fragments_BlockInventoryFragment_hide])(ctx, (frame[0].o));
	LINE_NUMBER(51);
	popStackFrame(ctx);
	return;
	}
label_1:;
	{
	LINE_NUMBER(53);
	((mindustry_ui_fragments_BlockInventoryFragment *) NULL_CHECK((frame[0].o)))->F_build = (jref) (frame[1].o);
	LINE_NUMBER(54);
	jint temp0 = (jint)((func_mindustry_gen_Building_pos_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_pos_R_int])(ctx, (frame[1].o));
	SM_mindustry_gen_Call_requestBlockSnapshot_int(ctx, temp0);
	LINE_NUMBER(55);
	sp[0].o = (jobject)((mindustry_ui_fragments_BlockInventoryFragment *) NULL_CHECK((frame[0].o)))->F_build;
	if (sp[0].o == nullptr) goto label_6;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_fragments_BlockInventoryFragment *) NULL_CHECK((frame[0].o)))->F_build;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_block;
	jint temp0 = (jint)((func_mindustry_world_Block_isAccessible_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_isAccessible_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_fragments_BlockInventoryFragment *) NULL_CHECK((frame[0].o)))->F_build;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_items;
	if (sp[0].o == nullptr) goto label_6;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_fragments_BlockInventoryFragment *) NULL_CHECK((frame[0].o)))->F_build;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_items;
	jint temp0 = (jint)((func_mindustry_world_modules_ItemModule_total_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_total_R_int])(ctx, sp[0].o);
	if (temp0 != 0) goto label_7;
	}
label_6:;
	LINE_NUMBER(56);
	popStackFrame(ctx);
	INST_RETURN();
label_7:;
	{
	LINE_NUMBER(58);
	((func_mindustry_ui_fragments_BlockInventoryFragment_rebuild_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_fragments_BlockInventoryFragment_rebuild_boolean])(ctx, (frame[0].o), (jint(1)));
	LINE_NUMBER(59);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_BlockInventoryFragment_hide(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/BlockInventoryFragment:hide", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(62);
	sp[0].o = (jobject)((mindustry_ui_fragments_BlockInventoryFragment *) NULL_CHECK((frame[0].o)))->F_table;
	if (sp[0].o != nullptr) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(64);
	sp[0].o = (jobject)((mindustry_ui_fragments_BlockInventoryFragment *) NULL_CHECK((frame[0].o)))->F_table;
	sp[1].o = (jobject)createArray(ctx, &class_arc_scene_Action, (jint(3)));
	jint temp0 = jint(0);
	jfloat temp1 = jfloat(0);
	jfloat temp2 = jfloat(1);
	jfloat temp3 = jfloat(0.06f);
	clinit_arc_math_Interp(ctx);
	sp[2].o = (jobject)SF_arc_math_Interp_pow3Out;
	sp[2].o = (jobject)SM_arc_scene_actions_Actions_scaleTo_float_float_float_arc_math_Interp_R_arc_scene_actions_ScaleToAction(ctx, temp1, temp2, temp3, sp[2].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	jint temp4 = jint(1);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_BlockInventoryFragment_invoke_java_lang_Runnable_2(ctx);
		auto proxy = (mindustry_ui_fragments_BlockInventoryFragment_invoke_java_lang_Runnable_2 *) gcAlloc(ctx, &class_mindustry_ui_fragments_BlockInventoryFragment_invoke_java_lang_Runnable_2);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[2].o = (jobject)SM_arc_scene_actions_Actions_run_java_lang_Runnable_R_arc_scene_actions_RunnableAction(ctx, sp[2].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp4) = sp[2].o;
	jint temp5 = jint(2);
	jint temp6 = jint(0);
	LINE_NUMBER(68);
	sp[2].o = (jobject)SM_arc_scene_actions_Actions_visible_boolean_R_arc_scene_actions_VisibleAction(ctx, temp6);
	ARRAY_ACCESS(jobject, sp[1].o, temp5) = sp[2].o;
	LINE_NUMBER(64);
	((func_arc_scene_ui_layout_Table_actions_Array1_arc_scene_Action) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_actions_Array1_arc_scene_Action])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(69);
	sp[0].o = (jobject)((mindustry_ui_fragments_BlockInventoryFragment *) NULL_CHECK((frame[0].o)))->F_table;
	clinit_arc_scene_event_Touchable(ctx);
	sp[1].o = (jobject)SF_arc_scene_event_Touchable_disabled;
	((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_touchable = (jref) sp[1].o;
	LINE_NUMBER(70);
	((mindustry_ui_fragments_BlockInventoryFragment *) NULL_CHECK((frame[0].o)))->F_build = (jref) (jobject(nullptr));
	LINE_NUMBER(71);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_BlockInventoryFragment_takeItem_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/BlockInventoryFragment:takeItem", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(74);
	sp[0].o = (jobject)((mindustry_ui_fragments_BlockInventoryFragment *) NULL_CHECK((frame[0].o)))->F_build;
	jint temp0 = (jint)((func_mindustry_gen_Building_canWithdraw_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_canWithdraw_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(77);
	jint temp0 = frame[1].i;
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, sp[0].o);
	sp[1].o = (jobject)((mindustry_ui_fragments_BlockInventoryFragment *) NULL_CHECK((frame[0].o)))->F_lastItem;
	jint temp1 = (jint)((func_mindustry_gen_Unit_maxAccepted_mindustry_type_Item_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_maxAccepted_mindustry_type_Item_R_int])(ctx, sp[0].o, sp[1].o);
	jint temp2 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp0, temp1);
	frame[2].i = temp2;
	LINE_NUMBER(79);
	if ((frame[2].i) <= 0) goto label_3;
	}
	{
	LINE_NUMBER(80);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[1].o = (jobject)((mindustry_ui_fragments_BlockInventoryFragment *) NULL_CHECK((frame[0].o)))->F_build;
	sp[2].o = (jobject)((mindustry_ui_fragments_BlockInventoryFragment *) NULL_CHECK((frame[0].o)))->F_lastItem;
	SM_mindustry_gen_Call_requestItem_mindustry_gen_Player_mindustry_gen_Building_mindustry_type_Item_int(ctx, sp[0].o, sp[1].o, sp[2].o, (frame[2].i));
	LINE_NUMBER(81);
	((mindustry_ui_fragments_BlockInventoryFragment *) NULL_CHECK((frame[0].o)))->F_holding = (jint(0));
	LINE_NUMBER(82);
	((mindustry_ui_fragments_BlockInventoryFragment *) NULL_CHECK((frame[0].o)))->F_holdTime = (jfloat(0));
	LINE_NUMBER(83);
	((mindustry_ui_fragments_BlockInventoryFragment *) NULL_CHECK((frame[0].o)))->F_held = (jint(1));
	LINE_NUMBER(85);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	{
	clinit_mindustry_game_EventType$WithdrawEvent(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$WithdrawEvent);
	sp[1].o = (jobject)((mindustry_ui_fragments_BlockInventoryFragment *) NULL_CHECK((frame[0].o)))->F_build;
	clinit_mindustry_Vars(ctx);
	sp[2].o = (jobject)SF_mindustry_Vars_player;
	sp[3].o = (jobject)((mindustry_ui_fragments_BlockInventoryFragment *) NULL_CHECK((frame[0].o)))->F_lastItem;
	init_mindustry_game_EventType$WithdrawEvent_mindustry_gen_Building_mindustry_gen_Player_mindustry_type_Item_int(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, (frame[2].i));
	SM_arc_Events_fire_java_lang_Object(ctx, sp[0].o);
	}
label_3:;
	LINE_NUMBER(87);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_BlockInventoryFragment_rebuild_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[19];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/BlockInventoryFragment:rebuild", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(90);
	clinit_arc_struct_IntSet(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_IntSet);
	init_arc_struct_IntSet(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(92);
	sp[0].o = (jobject)((mindustry_ui_fragments_BlockInventoryFragment *) NULL_CHECK((frame[0].o)))->F_shrinkHoldTimes;
	SM_java_util_Arrays_fill_Array1_float_float(ctx, sp[0].o, (jfloat(0)));
	LINE_NUMBER(93);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jfloat temp0 = jfloat(0);
	((mindustry_ui_fragments_BlockInventoryFragment *) NULL_CHECK(sp[1].o))->F_emptyTime = temp0;
	((mindustry_ui_fragments_BlockInventoryFragment *) NULL_CHECK(sp[0].o))->F_holdTime = temp0;
	LINE_NUMBER(95);
	sp[0].o = (jobject)((mindustry_ui_fragments_BlockInventoryFragment *) NULL_CHECK((frame[0].o)))->F_table;
	((func_arc_scene_ui_layout_Table_clearChildren) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_clearChildren])(ctx, sp[0].o);
	LINE_NUMBER(96);
	sp[0].o = (jobject)((mindustry_ui_fragments_BlockInventoryFragment *) NULL_CHECK((frame[0].o)))->F_table;
	((func_arc_scene_ui_layout_Table_clearActions) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_clearActions])(ctx, sp[0].o);
	LINE_NUMBER(97);
	sp[0].o = (jobject)((mindustry_ui_fragments_BlockInventoryFragment *) NULL_CHECK((frame[0].o)))->F_table;
	clinit_mindustry_gen_Tex(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Tex_inventory;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_background_arc_scene_style_Drawable_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_background_arc_scene_style_Drawable_R_arc_scene_ui_layout_Table])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(98);
	sp[0].o = (jobject)((mindustry_ui_fragments_BlockInventoryFragment *) NULL_CHECK((frame[0].o)))->F_table;
	clinit_arc_scene_event_Touchable(ctx);
	sp[1].o = (jobject)SF_arc_scene_event_Touchable_enabled;
	((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_touchable = (jref) sp[1].o;
	LINE_NUMBER(99);
	sp[0].o = (jobject)((mindustry_ui_fragments_BlockInventoryFragment *) NULL_CHECK((frame[0].o)))->F_table;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_BlockInventoryFragment_invoke_java_lang_Runnable_3(ctx);
		auto proxy = (mindustry_ui_fragments_BlockInventoryFragment_invoke_java_lang_Runnable_3 *) gcAlloc(ctx, &class_mindustry_ui_fragments_BlockInventoryFragment_invoke_java_lang_Runnable_3);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_update_java_lang_Runnable_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_update_java_lang_Runnable_R_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(142);
	frame[3].i = (jint(3));
	LINE_NUMBER(143);
	frame[4].i = (jint(0));
	LINE_NUMBER(145);
	sp[0].o = (jobject)((mindustry_ui_fragments_BlockInventoryFragment *) NULL_CHECK((frame[0].o)))->F_table;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table])(ctx, sp[0].o, (jfloat(4.0f)));
	LINE_NUMBER(146);
	sp[0].o = (jobject)((mindustry_ui_fragments_BlockInventoryFragment *) NULL_CHECK((frame[0].o)))->F_table;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(40.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	LINE_NUMBER(148);
	sp[0].o = (jobject)((mindustry_ui_fragments_BlockInventoryFragment *) NULL_CHECK((frame[0].o)))->F_build;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_hasItems) == 0) goto label_13;
	}
	{
	LINE_NUMBER(150);
	frame[5].i = (jint(0));
	}
label_15:;
	{
	jint temp0 = frame[5].i;
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_items_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_items_R_arc_struct_Seq])(ctx, sp[0].o);
	if (temp0 >= ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_13;
	}
	{
	LINE_NUMBER(151);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_item_int_R_mindustry_type_Item) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_item_int_R_mindustry_type_Item])(ctx, sp[0].o, (frame[5].i));
	frame[6].o = sp[0].o;
	LINE_NUMBER(152);
	sp[0].o = (jobject)((mindustry_ui_fragments_BlockInventoryFragment *) NULL_CHECK((frame[0].o)))->F_build;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_items;
	jint temp0 = (jint)((func_mindustry_world_modules_ItemModule_has_mindustry_type_Item_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_has_mindustry_type_Item_R_boolean])(ctx, sp[0].o, (frame[6].o));
	if (temp0 != 0) goto label_18;
	}
	goto label_19;
label_18:;
	{
	LINE_NUMBER(154);
	jint temp0 = (jint)((func_arc_struct_IntSet_add_int_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_IntSet_add_int_R_boolean])(ctx, (frame[2].o), (frame[5].i));
	LINE_NUMBER(156);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_BlockInventoryFragment_invoke_arc_func_Boolp_2(ctx);
		auto proxy = (mindustry_ui_fragments_BlockInventoryFragment_invoke_arc_func_Boolp_2 *) gcAlloc(ctx, &class_mindustry_ui_fragments_BlockInventoryFragment_invoke_arc_func_Boolp_2);
		proxy->F_field1 = (jref) (frame[6].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	frame[7].o = sp[0].o;
	LINE_NUMBER(158);
	clinit_arc_scene_event_HandCursorListener(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_event_HandCursorListener);
	init_arc_scene_event_HandCursorListener(ctx, sp[0].o);
	frame[8].o = sp[0].o;
	LINE_NUMBER(159);
	((arc_scene_event_HandCursorListener *) NULL_CHECK((frame[8].o)))->F_enabled = (jref) (frame[7].o);
	LINE_NUMBER(161);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[6].o)))->F_uiIcon;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_BlockInventoryFragment_invoke_arc_func_Prov_1(ctx);
		auto proxy = (mindustry_ui_fragments_BlockInventoryFragment_invoke_arc_func_Prov_1 *) gcAlloc(ctx, &class_mindustry_ui_fragments_BlockInventoryFragment_invoke_arc_func_Prov_1);
		proxy->F_field1 = (jref) (frame[6].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_ui_fragments_BlockInventoryFragment_itemImage_arc_graphics_g2d_TextureRegion_arc_func_Prov_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_BlockInventoryFragment_itemImage_arc_graphics_g2d_TextureRegion_arc_func_Prov_R_arc_scene_Element])(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[9].o = sp[0].o;
	LINE_NUMBER(167);
	jint temp1 = (jint)((func_arc_scene_Element_addListener_arc_scene_event_EventListener_R_boolean) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_arc_scene_Element_addListener_arc_scene_event_EventListener_R_boolean])(ctx, (frame[9].o), (frame[8].o));
	LINE_NUMBER(169);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_BlockInventoryFragment_invoke_arc_func_Boolp_3(ctx);
		auto proxy = (mindustry_ui_fragments_BlockInventoryFragment_invoke_arc_func_Boolp_3 *) gcAlloc(ctx, &class_mindustry_ui_fragments_BlockInventoryFragment_invoke_arc_func_Boolp_3);
		proxy->F_field2 = (jref) (frame[6].o);
		proxy->F_field1 = (jref) (frame[7].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	frame[10].o = sp[0].o;
	LINE_NUMBER(171);
	sp[0].o = frame[9].o;
	clinit_mindustry_ui_fragments_BlockInventoryFragment$1(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_fragments_BlockInventoryFragment$1);
	init_mindustry_ui_fragments_BlockInventoryFragment$1_mindustry_ui_fragments_BlockInventoryFragment_arc_func_Boolp_mindustry_type_Item(ctx, sp[1].o, (frame[0].o), (frame[10].o), (frame[6].o));
	jint temp2 = (jint)((func_arc_scene_Element_addListener_arc_scene_event_EventListener_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Element_addListener_arc_scene_event_EventListener_R_boolean])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(200);
	sp[0].o = (jobject)((mindustry_ui_fragments_BlockInventoryFragment *) NULL_CHECK((frame[0].o)))->F_table;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (frame[9].o));
	LINE_NUMBER(202);
	jint temp3 = frame[4].i;
	INST_IINC(4, 1);
	if ((temp3 % (frame[3].i)) != ((frame[3].i) - (jint(1)))) goto label_19;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_fragments_BlockInventoryFragment *) NULL_CHECK((frame[0].o)))->F_table;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	}
label_19:;
	{
	LINE_NUMBER(150);
	INST_IINC(5, 1);
	goto label_15;
	}
label_13:;
	{
	LINE_NUMBER(206);
	if ((frame[4].i) != 0) goto label_29;
	}
	{
	LINE_NUMBER(207);
	sp[0].o = (jobject)((mindustry_ui_fragments_BlockInventoryFragment *) NULL_CHECK((frame[0].o)))->F_table;
	((func_arc_scene_ui_layout_Table_setSize_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_setSize_float_float])(ctx, sp[0].o, (jfloat(0)), (jfloat(0)));
	}
label_29:;
	{
	LINE_NUMBER(210);
	((func_mindustry_ui_fragments_BlockInventoryFragment_updateTablePosition) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_fragments_BlockInventoryFragment_updateTablePosition])(ctx, (frame[0].o));
	LINE_NUMBER(212);
	sp[0].o = (jobject)((mindustry_ui_fragments_BlockInventoryFragment *) NULL_CHECK((frame[0].o)))->F_table;
	((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_visible = (jint(1));
	LINE_NUMBER(214);
	if ((frame[1].i) == 0) goto label_33;
	}
	{
	LINE_NUMBER(215);
	sp[0].o = (jobject)((mindustry_ui_fragments_BlockInventoryFragment *) NULL_CHECK((frame[0].o)))->F_table;
	((func_arc_scene_ui_layout_Table_setScale_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_setScale_float_float])(ctx, sp[0].o, (jfloat(0)), (jfloat(1)));
	LINE_NUMBER(216);
	sp[0].o = (jobject)((mindustry_ui_fragments_BlockInventoryFragment *) NULL_CHECK((frame[0].o)))->F_table;
	sp[1].o = (jobject)createArray(ctx, &class_arc_scene_Action, (jint(1)));
	jint temp0 = jint(0);
	jfloat temp1 = jfloat(1);
	jfloat temp2 = jfloat(1);
	jfloat temp3 = jfloat(0.07f);
	clinit_arc_math_Interp(ctx);
	sp[2].o = (jobject)SF_arc_math_Interp_pow3Out;
	sp[2].o = (jobject)SM_arc_scene_actions_Actions_scaleTo_float_float_float_arc_math_Interp_R_arc_scene_actions_ScaleToAction(ctx, temp1, temp2, temp3, sp[2].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	((func_arc_scene_ui_layout_Table_actions_Array1_arc_scene_Action) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_actions_Array1_arc_scene_Action])(ctx, sp[0].o, sp[1].o);
	goto label_36;
	}
label_33:;
	{
	LINE_NUMBER(218);
	sp[0].o = (jobject)((mindustry_ui_fragments_BlockInventoryFragment *) NULL_CHECK((frame[0].o)))->F_table;
	((func_arc_scene_ui_layout_Table_setScale_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_setScale_float_float])(ctx, sp[0].o, (jfloat(1)), (jfloat(1)));
	}
label_36:;
	LINE_NUMBER(220);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_ui_fragments_BlockInventoryFragment_round_float_R_java_lang_String(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/BlockInventoryFragment:round", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(223);
	frame[1].f = (jfloat((jint((frame[1].f)))));
	LINE_NUMBER(224);
	if ((floatCompare((frame[1].f), (jfloat(1000000.0f)), -1)) < 0) goto label_2;
	}
	{
	LINE_NUMBER(225);
	jint temp0 = jint(((frame[1].f) / (jfloat(1000000.0f))));
	clinit_mindustry_core_UI(ctx);
	sp[0].o = (jobject)SF_mindustry_core_UI_millions;
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\u0001[gray]\u0001"_j.string, 2, boxInteger(ctx, temp0), sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(226);
	if ((floatCompare((frame[1].f), (jfloat(1000.0f)), -1)) < 0) goto label_4;
	}
	{
	LINE_NUMBER(227);
	jint temp0 = jint(((frame[1].f) / (jfloat(1000.0f))));
	clinit_mindustry_core_UI(ctx);
	sp[0].o = (jobject)SF_mindustry_core_UI_thousands;
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\u0001\u0001"_j.string, 2, boxInteger(ctx, temp0), sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(229);
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\u0001"_j.string, 1, boxInteger(ctx, (jint((frame[1].f)))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_BlockInventoryFragment_updateTablePosition(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/BlockInventoryFragment:updateTablePosition", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(234);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	sp[1].o = (jobject)((mindustry_ui_fragments_BlockInventoryFragment *) NULL_CHECK((frame[0].o)))->F_build;
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK(sp[1].o))->F_x;
	sp[1].o = (jobject)((mindustry_ui_fragments_BlockInventoryFragment *) NULL_CHECK((frame[0].o)))->F_build;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[1].o))->F_block;
	jfloat temp1 = temp0 + ((jfloat((((jint)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_size) * (8)))) / (jfloat(2)));
	sp[1].o = (jobject)((mindustry_ui_fragments_BlockInventoryFragment *) NULL_CHECK((frame[0].o)))->F_build;
	jfloat temp2 = (jfloat)((mindustry_gen_Building *) NULL_CHECK(sp[1].o))->F_y;
	sp[1].o = (jobject)((mindustry_ui_fragments_BlockInventoryFragment *) NULL_CHECK((frame[0].o)))->F_build;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[1].o))->F_block;
	sp[0].o = (jobject)((func_arc_Input_mouseScreen_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_mouseScreen_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp1, (temp2 + ((jfloat((((jint)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_size) * (8)))) / (jfloat(2)))));
	frame[1].o = sp[0].o;
	LINE_NUMBER(235);
	sp[0].o = (jobject)((mindustry_ui_fragments_BlockInventoryFragment *) NULL_CHECK((frame[0].o)))->F_table;
	((func_arc_scene_ui_layout_Table_pack) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_pack])(ctx, sp[0].o);
	LINE_NUMBER(236);
	sp[0].o = (jobject)((mindustry_ui_fragments_BlockInventoryFragment *) NULL_CHECK((frame[0].o)))->F_table;
	jfloat temp3 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_scene;
	jfloat temp4 = temp3 - ((jfloat)((arc_scene_Scene *) NULL_CHECK(sp[1].o))->F_marginLeft);
	jfloat temp5 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_scene;
	jfloat temp6 = temp5 - ((jfloat)((arc_scene_Scene *) NULL_CHECK(sp[1].o))->F_marginBottom);
	sp[1].o = (jobject)((mindustry_ui_fragments_BlockInventoryFragment *) NULL_CHECK((frame[0].o)))->F_build;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[1].o))->F_block;
	jobject temp7 = sp[1].o;
	sp[1].f = temp4;
	sp[2].f = temp6;
	sp += 3;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(temp7))->F_diagonalConfigInventory) == 0) goto label_3;
	}
	INST_BIPUSH(12);
	goto label_4;
label_3:;
	INST_BIPUSH(10);
label_4:;
	{
	sp -= 4;
	((func_arc_scene_ui_layout_Table_setPosition_float_float_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_setPosition_float_float_int])(ctx, sp[0].o, sp[1].f, sp[2].f, sp[3].i);
	LINE_NUMBER(237);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ui_fragments_BlockInventoryFragment_itemImage_arc_graphics_g2d_TextureRegion_arc_func_Prov_R_arc_scene_Element(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/BlockInventoryFragment:itemImage", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(240);
	clinit_arc_scene_ui_layout_Stack(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Stack);
	init_arc_scene_ui_layout_Stack(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(242);
	clinit_arc_scene_ui_layout_Table(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Table);
	init_arc_scene_ui_layout_Table(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_bottom_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_bottom_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(243);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_label_arc_func_Prov_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_label_arc_func_Prov_R_arc_scene_ui_layout_Cell])(ctx, (frame[4].o), (frame[2].o));
	LINE_NUMBER(245);
	sp[0].o = frame[3].o;
	clinit_arc_scene_ui_Image(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_ui_Image);
	init_arc_scene_ui_Image_arc_graphics_g2d_TextureRegion(ctx, sp[1].o, (frame[1].o));
	((func_arc_scene_ui_layout_Stack_add_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Stack_add_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(246);
	((func_arc_scene_ui_layout_Stack_add_arc_scene_Element) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_layout_Stack_add_arc_scene_Element])(ctx, (frame[3].o), (frame[4].o));
	LINE_NUMBER(247);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ui_fragments_BlockInventoryFragment_lambda$rebuild$3_arc_func_Boolp_mindustry_type_Item_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/BlockInventoryFragment:lambda$rebuild$3", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(169);
	jint temp0 = (jint)((func_arc_func_Boolp_get_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolp, INDEX_arc_func_Boolp_get_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_fragments_BlockInventoryFragment *) NULL_CHECK((frame[0].o)))->F_build;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_fragments_BlockInventoryFragment *) NULL_CHECK((frame[0].o)))->F_build;
	jint temp0 = (jint)((func_mindustry_gen_Building_isValid_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_isValid_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_fragments_BlockInventoryFragment *) NULL_CHECK((frame[0].o)))->F_build;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_items;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_fragments_BlockInventoryFragment *) NULL_CHECK((frame[0].o)))->F_build;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_items;
	jint temp0 = (jint)((func_mindustry_world_modules_ItemModule_has_mindustry_type_Item_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_has_mindustry_type_Item_R_boolean])(ctx, sp[0].o, (frame[2].o));
	if (temp0 == 0) goto label_1;
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

jobject M_mindustry_ui_fragments_BlockInventoryFragment_lambda$rebuild$2_mindustry_type_Item_R_java_lang_CharSequence(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/BlockInventoryFragment:lambda$rebuild$2", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(162);
	sp[0].o = (jobject)((mindustry_ui_fragments_BlockInventoryFragment *) NULL_CHECK((frame[0].o)))->F_build;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_fragments_BlockInventoryFragment *) NULL_CHECK((frame[0].o)))->F_build;
	jint temp0 = (jint)((func_mindustry_gen_Building_isValid_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_isValid_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(163);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8""_j)));
	}
label_2:;
	{
	LINE_NUMBER(165);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_ui_fragments_BlockInventoryFragment *) NULL_CHECK((frame[0].o)))->F_build;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[1].o))->F_items;
	jint temp0 = (jint)((func_mindustry_world_modules_ItemModule_get_mindustry_type_Item_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_get_mindustry_type_Item_R_int])(ctx, sp[1].o, (frame[1].o));
	sp[0].o = (jobject)((func_mindustry_ui_fragments_BlockInventoryFragment_round_float_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_BlockInventoryFragment_round_float_R_java_lang_String])(ctx, sp[0].o, (jfloat(temp0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ui_fragments_BlockInventoryFragment_lambda$rebuild$1_mindustry_type_Item_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/BlockInventoryFragment:lambda$rebuild$1", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(156);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	jint temp0 = (jint)((func_mindustry_gen_Player_dead_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_dead_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, sp[0].o);
	jint temp0 = (jint)((func_mindustry_gen_Unit_acceptsItem_mindustry_type_Item_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_acceptsItem_mindustry_type_Item_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isPaused_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isPaused_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[1].o = (jobject)((mindustry_ui_fragments_BlockInventoryFragment *) NULL_CHECK((frame[0].o)))->F_build;
	jint temp0 = (jint)((func_mindustry_gen_Player_within_arc_math_geom_Position_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_within_arc_math_geom_Position_float_R_boolean])(ctx, sp[0].o, sp[1].o, (jfloat(220.0f)));
	if (temp0 == 0) goto label_1;
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

void M_mindustry_ui_fragments_BlockInventoryFragment_lambda$rebuild$0_arc_struct_IntSet(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/BlockInventoryFragment:lambda$rebuild$0", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(101);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isMenu_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isMenu_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_fragments_BlockInventoryFragment *) NULL_CHECK((frame[0].o)))->F_build;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_fragments_BlockInventoryFragment *) NULL_CHECK((frame[0].o)))->F_build;
	jint temp0 = (jint)((func_mindustry_gen_Building_isValid_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_isValid_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_fragments_BlockInventoryFragment *) NULL_CHECK((frame[0].o)))->F_build;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_block;
	jint temp0 = (jint)((func_mindustry_world_Block_isAccessible_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_isAccessible_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	if ((floatCompare(((jfloat)((mindustry_ui_fragments_BlockInventoryFragment *) NULL_CHECK((frame[0].o)))->F_emptyTime), (jfloat(120.0f)), -1)) < 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(102);
	((func_mindustry_ui_fragments_BlockInventoryFragment_hide) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_fragments_BlockInventoryFragment_hide])(ctx, (frame[0].o));
	goto label_3;
	}
label_2:;
	{
	LINE_NUMBER(104);
	sp[0].o = (jobject)((mindustry_ui_fragments_BlockInventoryFragment *) NULL_CHECK((frame[0].o)))->F_build;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_items;
	jint temp0 = (jint)((func_mindustry_world_modules_ItemModule_total_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_total_R_int])(ctx, sp[0].o);
	if (temp0 != 0) goto label_4;
	}
	{
	LINE_NUMBER(105);
	sp[0].o = frame[0].o;
	((mindustry_ui_fragments_BlockInventoryFragment *) NULL_CHECK(sp[0].o))->F_emptyTime = (((jfloat)((mindustry_ui_fragments_BlockInventoryFragment *) NULL_CHECK(sp[0].o))->F_emptyTime) + (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta));
	goto label_6;
	}
label_4:;
	{
	LINE_NUMBER(107);
	((mindustry_ui_fragments_BlockInventoryFragment *) NULL_CHECK((frame[0].o)))->F_emptyTime = (jfloat(0));
	}
label_6:;
	{
	LINE_NUMBER(110);
	if (((jint)((mindustry_ui_fragments_BlockInventoryFragment *) NULL_CHECK((frame[0].o)))->F_holding) == 0) goto label_7;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_fragments_BlockInventoryFragment *) NULL_CHECK((frame[0].o)))->F_lastItem;
	if (sp[0].o == nullptr) goto label_7;
	}
	{
	sp[0].o = frame[0].o;
	jfloat temp0 = ((jfloat)((mindustry_ui_fragments_BlockInventoryFragment *) NULL_CHECK(sp[0].o))->F_holdTime) + (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta);
	((mindustry_ui_fragments_BlockInventoryFragment *) NULL_CHECK(sp[0].o))->F_holdTime = temp0;
	if ((floatCompare(temp0, (jfloat(20.0f)), -1)) < 0) goto label_7;
	}
	{
	LINE_NUMBER(111);
	((mindustry_ui_fragments_BlockInventoryFragment *) NULL_CHECK((frame[0].o)))->F_holdTime = (jfloat(0));
	LINE_NUMBER(114);
	((func_mindustry_ui_fragments_BlockInventoryFragment_takeItem_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_fragments_BlockInventoryFragment_takeItem_int])(ctx, (frame[0].o), (jint(1)));
	}
label_7:;
	{
	LINE_NUMBER(117);
	((func_mindustry_ui_fragments_BlockInventoryFragment_updateTablePosition) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_fragments_BlockInventoryFragment_updateTablePosition])(ctx, (frame[0].o));
	LINE_NUMBER(118);
	sp[0].o = (jobject)((mindustry_ui_fragments_BlockInventoryFragment *) NULL_CHECK((frame[0].o)))->F_build;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_hasItems) == 0) goto label_11;
	}
	{
	LINE_NUMBER(119);
	frame[2].i = (jint(0));
	LINE_NUMBER(120);
	sp[0].o = (jobject)((mindustry_ui_fragments_BlockInventoryFragment *) NULL_CHECK((frame[0].o)))->F_shrinkHoldTimes;
	jint temp0 = ((jarray) nullCheck(ctx, sp[0].o))->length;
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_items_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_items_R_arc_struct_Seq])(ctx, sp[0].o);
	if (temp0 == ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_14;
	}
	{
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_items_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_items_R_arc_struct_Seq])(ctx, sp[1].o);
	sp[1].o = (jobject) createArray(ctx, &class_float, ((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size));
	((mindustry_ui_fragments_BlockInventoryFragment *) NULL_CHECK(sp[0].o))->F_shrinkHoldTimes = (jref) sp[1].o;
	}
label_14:;
	{
	LINE_NUMBER(122);
	frame[3].i = (jint(0));
	}
label_15:;
	{
	jint temp0 = frame[3].i;
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_items_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_items_R_arc_struct_Seq])(ctx, sp[0].o);
	if (temp0 >= ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_16;
	}
	{
	LINE_NUMBER(123);
	sp[0].o = (jobject)((mindustry_ui_fragments_BlockInventoryFragment *) NULL_CHECK((frame[0].o)))->F_build;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_items;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_item_int_R_mindustry_type_Item) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_item_int_R_mindustry_type_Item])(ctx, sp[1].o, (frame[3].i));
	jint temp0 = (jint)((func_mindustry_world_modules_ItemModule_has_mindustry_type_Item_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_has_mindustry_type_Item_R_boolean])(ctx, sp[0].o, sp[1].o);
	frame[4].i = temp0;
	LINE_NUMBER(124);
	jint temp1 = (jint)((func_arc_struct_IntSet_contains_int_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_IntSet_contains_int_R_boolean])(ctx, (frame[1].o), (frame[3].i));
	frame[5].i = temp1;
	LINE_NUMBER(125);
	if ((frame[4].i) == 0) goto label_20;
	}
	{
	LINE_NUMBER(126);
	sp[0].o = (jobject)((mindustry_ui_fragments_BlockInventoryFragment *) NULL_CHECK((frame[0].o)))->F_shrinkHoldTimes;
	ARRAY_ACCESS(jfloat, sp[0].o, (frame[3].i)) = (jfloat(0));
	LINE_NUMBER(127);
	jint temp0 = frame[2].i;
	sp[0].i = temp0;
	sp += 1;
	if ((frame[5].i) != 0) goto label_23;
	}
	INST_ICONST(1);
	goto label_24;
label_23:;
	INST_ICONST(0);
label_24:;
	{
	sp -= 2;
	frame[2].i = (sp[0].i | sp[1].i);
	goto label_25;
	}
label_20:;
	{
	LINE_NUMBER(128);
	if ((frame[5].i) == 0) goto label_25;
	}
	{
	LINE_NUMBER(129);
	sp[0].o = (jobject)((mindustry_ui_fragments_BlockInventoryFragment *) NULL_CHECK((frame[0].o)))->F_shrinkHoldTimes;
	jint temp0 = frame[3].i;
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp0)) + (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta));
	LINE_NUMBER(130);
	jint temp3 = frame[2].i;
	sp[0].o = (jobject)((mindustry_ui_fragments_BlockInventoryFragment *) NULL_CHECK((frame[0].o)))->F_shrinkHoldTimes;
	jobject temp4 = sp[0].o;
	sp[0].i = temp3;
	sp += 1;
	if ((floatCompare(((jfloat)ARRAY_ACCESS(jfloat, temp4, (frame[3].i))), (jfloat(120.0f)), -1)) < 0) goto label_28;
	}
	INST_ICONST(1);
	goto label_29;
label_28:;
	INST_ICONST(0);
label_29:;
	INST_IOR();
	INST_ISTORE(2);
label_25:;
	{
	LINE_NUMBER(122);
	INST_IINC(3, 1);
	goto label_15;
	}
label_16:;
	{
	LINE_NUMBER(133);
	if ((frame[2].i) == 0) goto label_11;
	}
	{
	((func_mindustry_ui_fragments_BlockInventoryFragment_rebuild_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_fragments_BlockInventoryFragment_rebuild_boolean])(ctx, (frame[0].o), (jint(0)));
	}
label_11:;
	{
	LINE_NUMBER(136);
	sp[0].o = (jobject)((mindustry_ui_fragments_BlockInventoryFragment *) NULL_CHECK((frame[0].o)))->F_table;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_getChildren_R_arc_struct_SnapshotSeq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_getChildren_R_arc_struct_SnapshotSeq])(ctx, sp[0].o);
	jint temp0 = (jint)((func_arc_struct_SnapshotSeq_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_SnapshotSeq_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(137);
	((func_mindustry_ui_fragments_BlockInventoryFragment_hide) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_fragments_BlockInventoryFragment_hide])(ctx, (frame[0].o));
	}
label_3:;
	LINE_NUMBER(140);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_BlockInventoryFragment_lambda$hide$0(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/BlockInventoryFragment:lambda$hide$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(65);
	sp[0].o = (jobject)((mindustry_ui_fragments_BlockInventoryFragment *) NULL_CHECK((frame[0].o)))->F_table;
	((func_arc_scene_ui_layout_Table_clearChildren) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_clearChildren])(ctx, sp[0].o);
	LINE_NUMBER(66);
	sp[0].o = (jobject)((mindustry_ui_fragments_BlockInventoryFragment *) NULL_CHECK((frame[0].o)))->F_table;
	((func_arc_scene_ui_layout_Table_clearListeners) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_clearListeners])(ctx, sp[0].o);
	LINE_NUMBER(67);
	sp[0].o = (jobject)((mindustry_ui_fragments_BlockInventoryFragment *) NULL_CHECK((frame[0].o)))->F_table;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_update_java_lang_Runnable_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_update_java_lang_Runnable_R_arc_scene_Element])(ctx, sp[0].o, (jobject(nullptr)));
	LINE_NUMBER(68);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_BlockInventoryFragment_lambda$new$0_mindustry_game_EventType$WorldLoadEvent(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/BlockInventoryFragment:lambda$new$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(38);
	((func_mindustry_ui_fragments_BlockInventoryFragment_hide) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_fragments_BlockInventoryFragment_hide])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_ui_fragments_BlockInventoryFragment[] {
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
	(void *) M_mindustry_ui_fragments_BlockInventoryFragment_build_arc_scene_Group,
	(void *) M_mindustry_ui_fragments_BlockInventoryFragment_showFor_mindustry_gen_Building,
	(void *) M_mindustry_ui_fragments_BlockInventoryFragment_hide,
	(void *) M_mindustry_ui_fragments_BlockInventoryFragment_takeItem_int,
	(void *) M_mindustry_ui_fragments_BlockInventoryFragment_rebuild_boolean,
	(void *) M_mindustry_ui_fragments_BlockInventoryFragment_round_float_R_java_lang_String,
	(void *) M_mindustry_ui_fragments_BlockInventoryFragment_updateTablePosition,
	(void *) M_mindustry_ui_fragments_BlockInventoryFragment_itemImage_arc_graphics_g2d_TextureRegion_arc_func_Prov_R_arc_scene_Element,
	(void *) M_mindustry_ui_fragments_BlockInventoryFragment_lambda$rebuild$3_arc_func_Boolp_mindustry_type_Item_R_boolean,
	(void *) M_mindustry_ui_fragments_BlockInventoryFragment_lambda$rebuild$2_mindustry_type_Item_R_java_lang_CharSequence,
	(void *) M_mindustry_ui_fragments_BlockInventoryFragment_lambda$rebuild$1_mindustry_type_Item_R_boolean,
	(void *) M_mindustry_ui_fragments_BlockInventoryFragment_lambda$rebuild$0_arc_struct_IntSet,
	(void *) M_mindustry_ui_fragments_BlockInventoryFragment_lambda$hide$0,
	(void *) M_mindustry_ui_fragments_BlockInventoryFragment_lambda$new$0_mindustry_game_EventType$WorldLoadEvent,
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
	{ "showFor", "(Lmindustry/gen/Building;)V" },
	{ "hide", "()V" },
	{ "takeItem", "(I)V" },
	{ "rebuild", "(Z)V" },
	{ "round", "(F)Ljava/lang/String;" },
	{ "updateTablePosition", "()V" },
	{ "itemImage", "(Larc/graphics/g2d/TextureRegion;Larc/func/Prov;)Larc/scene/Element;" },
	{ "lambda$rebuild$3", "(Larc/func/Boolp;Lmindustry/type/Item;)Z" },
	{ "lambda$rebuild$2", "(Lmindustry/type/Item;)Ljava/lang/CharSequence;" },
	{ "lambda$rebuild$1", "(Lmindustry/type/Item;)Z" },
	{ "lambda$rebuild$0", "(Larc/struct/IntSet;)V" },
	{ "lambda$hide$0", "()V" },
	{ "lambda$new$0", "(Lmindustry/game/EventType$WorldLoadEvent;)V" },
};

static FieldMetadata fields[] {
	{ "holdWithdraw", &class_float, (intptr_t) &SF_mindustry_ui_fragments_BlockInventoryFragment_holdWithdraw, "F", 26 },
	{ "holdShrink", &class_float, (intptr_t) &SF_mindustry_ui_fragments_BlockInventoryFragment_holdShrink, "F", 26 },
	{ "table", &class_arc_scene_ui_layout_Table, offsetof(mindustry_ui_fragments_BlockInventoryFragment, F_table), "Larc/scene/ui/layout/Table;", 0 },
	{ "build", &class_mindustry_gen_Building, offsetof(mindustry_ui_fragments_BlockInventoryFragment, F_build), "Lmindustry/gen/Building;", 0 },
	{ "holdTime", &class_float, offsetof(mindustry_ui_fragments_BlockInventoryFragment, F_holdTime), "F", 0 },
	{ "emptyTime", &class_float, offsetof(mindustry_ui_fragments_BlockInventoryFragment, F_emptyTime), "F", 0 },
	{ "holding", &class_boolean, offsetof(mindustry_ui_fragments_BlockInventoryFragment, F_holding), "Z", 0 },
	{ "held", &class_boolean, offsetof(mindustry_ui_fragments_BlockInventoryFragment, F_held), "Z", 0 },
	{ "shrinkHoldTimes", getArrayClass(&class_float, 1), offsetof(mindustry_ui_fragments_BlockInventoryFragment, F_shrinkHoldTimes), "[F", 0 },
	{ "lastItem", &class_mindustry_type_Item, offsetof(mindustry_ui_fragments_BlockInventoryFragment, F_lastItem), "Lmindustry/type/Item;", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ui_fragments_BlockInventoryFragment, 0, "()V", 1 },
	{ "build", (intptr_t) M_mindustry_ui_fragments_BlockInventoryFragment_build_arc_scene_Group, VTABLE_mindustry_ui_fragments_BlockInventoryFragment_build_arc_scene_Group, "(Larc/scene/Group;)V", 1 },
	{ "showFor", (intptr_t) M_mindustry_ui_fragments_BlockInventoryFragment_showFor_mindustry_gen_Building, VTABLE_mindustry_ui_fragments_BlockInventoryFragment_showFor_mindustry_gen_Building, "(Lmindustry/gen/Building;)V", 1 },
	{ "hide", (intptr_t) M_mindustry_ui_fragments_BlockInventoryFragment_hide, VTABLE_mindustry_ui_fragments_BlockInventoryFragment_hide, "()V", 1 },
	{ "takeItem", (intptr_t) M_mindustry_ui_fragments_BlockInventoryFragment_takeItem_int, VTABLE_mindustry_ui_fragments_BlockInventoryFragment_takeItem_int, "(I)V", 2 },
	{ "rebuild", (intptr_t) M_mindustry_ui_fragments_BlockInventoryFragment_rebuild_boolean, VTABLE_mindustry_ui_fragments_BlockInventoryFragment_rebuild_boolean, "(Z)V", 2 },
	{ "round", (intptr_t) M_mindustry_ui_fragments_BlockInventoryFragment_round_float_R_java_lang_String, VTABLE_mindustry_ui_fragments_BlockInventoryFragment_round_float_R_java_lang_String, "(F)Ljava/lang/String;", 2 },
	{ "updateTablePosition", (intptr_t) M_mindustry_ui_fragments_BlockInventoryFragment_updateTablePosition, VTABLE_mindustry_ui_fragments_BlockInventoryFragment_updateTablePosition, "()V", 2 },
	{ "itemImage", (intptr_t) M_mindustry_ui_fragments_BlockInventoryFragment_itemImage_arc_graphics_g2d_TextureRegion_arc_func_Prov_R_arc_scene_Element, VTABLE_mindustry_ui_fragments_BlockInventoryFragment_itemImage_arc_graphics_g2d_TextureRegion_arc_func_Prov_R_arc_scene_Element, "(Larc/graphics/g2d/TextureRegion;Larc/func/Prov;)Larc/scene/Element;", 2 },
	{ "lambda$rebuild$3", (intptr_t) M_mindustry_ui_fragments_BlockInventoryFragment_lambda$rebuild$3_arc_func_Boolp_mindustry_type_Item_R_boolean, VTABLE_mindustry_ui_fragments_BlockInventoryFragment_lambda$rebuild$3_arc_func_Boolp_mindustry_type_Item_R_boolean, "(Larc/func/Boolp;Lmindustry/type/Item;)Z", 4098 },
	{ "lambda$rebuild$2", (intptr_t) M_mindustry_ui_fragments_BlockInventoryFragment_lambda$rebuild$2_mindustry_type_Item_R_java_lang_CharSequence, VTABLE_mindustry_ui_fragments_BlockInventoryFragment_lambda$rebuild$2_mindustry_type_Item_R_java_lang_CharSequence, "(Lmindustry/type/Item;)Ljava/lang/CharSequence;", 4098 },
	{ "lambda$rebuild$1", (intptr_t) M_mindustry_ui_fragments_BlockInventoryFragment_lambda$rebuild$1_mindustry_type_Item_R_boolean, VTABLE_mindustry_ui_fragments_BlockInventoryFragment_lambda$rebuild$1_mindustry_type_Item_R_boolean, "(Lmindustry/type/Item;)Z", 4098 },
	{ "lambda$rebuild$0", (intptr_t) M_mindustry_ui_fragments_BlockInventoryFragment_lambda$rebuild$0_arc_struct_IntSet, VTABLE_mindustry_ui_fragments_BlockInventoryFragment_lambda$rebuild$0_arc_struct_IntSet, "(Larc/struct/IntSet;)V", 4098 },
	{ "lambda$hide$0", (intptr_t) M_mindustry_ui_fragments_BlockInventoryFragment_lambda$hide$0, VTABLE_mindustry_ui_fragments_BlockInventoryFragment_lambda$hide$0, "()V", 4098 },
	{ "lambda$new$0", (intptr_t) M_mindustry_ui_fragments_BlockInventoryFragment_lambda$new$0_mindustry_game_EventType$WorldLoadEvent, VTABLE_mindustry_ui_fragments_BlockInventoryFragment_lambda$new$0_mindustry_game_EventType$WorldLoadEvent, "(Lmindustry/game/EventType$WorldLoadEvent;)V", 4098 },
};

Class class_mindustry_ui_fragments_BlockInventoryFragment{
		.nativeName = (intptr_t) "mindustry/ui/fragments/BlockInventoryFragment",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_ui_fragments_BlockInventoryFragment),
		.classVtable = (intptr_t) vtable_mindustry_ui_fragments_BlockInventoryFragment,
		.staticInitializer = (intptr_t) clinit_mindustry_ui_fragments_BlockInventoryFragment,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_ui_fragments_BlockInventoryFragment,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 10,
		.nativeFields = (intptr_t) fields,
		.methodCount = 15,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 25,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_ui_fragments_BlockInventoryFragment = registerClass(&class_mindustry_ui_fragments_BlockInventoryFragment);

}
