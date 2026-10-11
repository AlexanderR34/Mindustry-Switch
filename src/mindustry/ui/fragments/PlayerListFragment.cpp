#include "mindustry/ui/fragments/PlayerListFragment.h"
#include "java/lang/Integer.h"
#include "arc/func/Prov.h"
#include "arc/func/Boolp.h"
#include "arc/graphics/Color.h"
#include "java/lang/Runnable.h"
#include "arc/scene/ui/Image.h"
#include "arc/struct/Seq.h"
#include "arc/func/Boolf.h"
#include "arc/Core.h"
#include "java/util/Iterator.h"
#include "mindustry/ui/dialogs/BaseDialog.h"
#include "arc/util/Interval.h"
#include "mindustry/ui/dialogs/AdminsDialog.h"
#include "arc/scene/Scene.h"
#include "arc/Graphics.h"
#include "java/lang/Object.h"
#include "arc/scene/ui/Dialog.h"
#include "mindustry/ui/dialogs/BansDialog.h"
#include "mindustry/ui/fragments/PlayerListFragment_invoke_arc_func_Boolf_6.h"
#include "mindustry/ui/fragments/PlayerListFragment_invoke_arc_func_Boolf_8.h"
#include "mindustry/ui/fragments/PlayerListFragment_invoke_arc_func_Boolf_7.h"
#include "arc/scene/style/TextureRegionDrawable.h"
#include "mindustry/game/Rules.h"
#include "mindustry/ui/fragments/PlayerListFragment_invoke_arc_func_Boolf_9.h"
#include "arc/scene/ui/TextButton_TextButtonStyle.h"
#include "mindustry/ui/fragments/PlayerListFragment_1.h"
#include "arc/func/Cons.h"
#include "arc/scene/ui/layout/WidgetGroup.h"
#include "mindustry/ui/fragments/PlayerListFragment_invoke_arc_func_Cons_10.h"
#include "mindustry/core/Control.h"
#include "mindustry/net/Administration.h"
#include "mindustry/ui/fragments/PlayerListFragment_invoke_arc_func_Cons_11.h"
#include "arc/scene/ui/ImageButton_ImageButtonStyle.h"
#include "mindustry/ui/fragments/PlayerListFragment_invoke_arc_func_Func_1.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "mindustry/ui/fragments/PlayerListFragment.h"
#include "arc/scene/event/ClickListener.h"
#include "mindustry/ui/Styles.h"
#include "mindustry/entities/EntityGroup.h"
#include "arc/scene/ui/Label_LabelStyle.h"
#include "mindustry/core/NetServer.h"
#include "arc/scene/event/EventListener.h"
#include "mindustry/Vars.h"
#include "mindustry/ui/fragments/PlayerListFragment_invoke_arc_func_Boolf_10.h"
#include "mindustry/ui/fragments/PlayerListFragment_invoke_arc_func_Boolf_11.h"
#include "arc/scene/ui/TextField.h"
#include "mindustry/ui/fragments/PlayerListFragment_invoke_arc_func_Cons_7.h"
#include "mindustry/ui/fragments/PlayerListFragment_invoke_java_lang_Runnable_35.h"
#include "mindustry/ui/fragments/PlayerListFragment_invoke_arc_func_Cons_6.h"
#include "mindustry/ui/fragments/PlayerListFragment_invoke_arc_func_Cons_9.h"
#include "mindustry/ui/fragments/PlayerListFragment_invoke_java_lang_Runnable_33.h"
#include "mindustry/ui/fragments/PlayerListFragment_invoke_arc_func_Cons_8.h"
#include "mindustry/ui/fragments/PlayerListFragment_invoke_java_lang_Runnable_34.h"
#include "mindustry/ui/fragments/PlayerListFragment_invoke_java_lang_Runnable_31.h"
#include "mindustry/ui/fragments/PlayerListFragment_invoke_java_lang_Runnable_32.h"
#include "mindustry/ui/fragments/PlayerListFragment_invoke_java_lang_Runnable_30.h"
#include "arc/scene/event/Touchable.h"
#include "arc/util/I18NBundle.h"
#include "arc/scene/ui/layout/Cell.h"
#include "arc/scene/ui/TextButton.h"
#include "arc/scene/ui/ImageButton.h"
#include "mindustry/ui/fragments/PlayerListFragment_invoke_arc_func_Prov_1.h"
#include "mindustry/net/Packets_AdminAction.h"
#include "arc/func/Func.h"
#include "mindustry/gen/Unit.h"
#include "mindustry/ui/fragments/PlayerListFragment_invoke_java_lang_Runnable_28.h"
#include "mindustry/ui/fragments/PlayerListFragment_invoke_java_lang_Runnable_29.h"
#include "mindustry/ui/fragments/PlayerListFragment_invoke_java_lang_Runnable_26.h"
#include "arc/util/Structs.h"
#include "mindustry/ui/fragments/PlayerListFragment_invoke_java_lang_Runnable_27.h"
#include "mindustry/ui/fragments/PlayerListFragment_invoke_java_lang_Runnable_24.h"
#include "mindustry/ui/fragments/PlayerListFragment_invoke_java_lang_Runnable_25.h"
#include "mindustry/ui/fragments/PlayerListFragment_invoke_java_lang_Runnable_22.h"
#include "mindustry/ui/fragments/PlayerListFragment_invoke_java_lang_Runnable_23.h"
#include "mindustry/ui/fragments/PlayerListFragment_invoke_java_lang_Runnable_20.h"
#include "mindustry/ui/fragments/PlayerListFragment_invoke_java_lang_Runnable_21.h"
#include "arc/scene/ui/Label.h"
#include "mindustry/ui/fragments/PlayerListFragment_2.h"
#include "mindustry/ui/fragments/PlayerListFragment_invoke_arc_func_Boolp_3.h"
#include "mindustry/net/Net.h"
#include "mindustry/ui/fragments/PlayerListFragment_invoke_java_lang_Runnable_19.h"
#include "mindustry/ui/fragments/PlayerListFragment_invoke_arc_func_Boolp_2.h"
#include "mindustry/ui/fragments/PlayerListFragment_invoke_java_lang_Runnable_18.h"
#include "mindustry/gen/Groups.h"
#include "arc/scene/event/HandCursorListener.h"
#include "java/lang/String.h"
#include "java/util/Comparator.h"
#include "arc/scene/style/Drawable.h"
#include "mindustry/net/NetConnection.h"
#include "mindustry/gen/Tex.h"
#include "mindustry/gen/Icon.h"
#include "arc/scene/Group.h"
#include "arc/util/Scaling.h"
#include "arc/scene/ui/layout/Table.h"
#include "mindustry/core/UI.h"
#include "java/lang/CharSequence.h"
#include "arc/scene/style/Style.h"
#include "arc/util/Strings.h"
#include "arc/scene/Element.h"
#include "mindustry/graphics/Pal.h"
#include "mindustry/gen/Player.h"
#include "mindustry/game/Team.h"
#include "arc/scene/event/InputListener.h"
#include "java/util/Objects.h"
#include "mindustry/core/GameState.h"
#include "mindustry/gen/Call.h"
#include "mindustry/input/InputHandler.h"

extern "C" {


void mark_mindustry_ui_fragments_PlayerListFragment(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_ui_fragments_PlayerListFragment *) object;
	if (self->F_content)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_content)->clazz)->markFunction)((jobject) self->F_content, mark, depth + 1);
	if (self->F_timer)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_timer)->clazz)->markFunction)((jobject) self->F_timer, mark, depth + 1);
	if (self->F_search)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_search)->clazz)->markFunction)((jobject) self->F_search, mark, depth + 1);
	if (self->F_players)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_players)->clazz)->markFunction)((jobject) self->F_players, mark, depth + 1);
}

void clinit_mindustry_ui_fragments_PlayerListFragment(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_ui_fragments_PlayerListFragment(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PlayerListFragment:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_PlayerListFragment(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(23);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(24);
	sp[0].o = frame[0].o;
	clinit_arc_scene_ui_layout_Table(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Table);
	init_arc_scene_ui_layout_Table(ctx, sp[1].o);
	sp[1].o = (jobject)((func_arc_scene_ui_layout_Table_marginRight_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_marginRight_float_R_arc_scene_ui_layout_Table])(ctx, sp[1].o, (jfloat(13.0f)));
	sp[1].o = (jobject)((func_arc_scene_ui_layout_Table_marginLeft_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_marginLeft_float_R_arc_scene_ui_layout_Table])(ctx, sp[1].o, (jfloat(13.0f)));
	((mindustry_ui_fragments_PlayerListFragment *) NULL_CHECK(sp[0].o))->F_content = (jref) sp[1].o;
	LINE_NUMBER(25);
	((mindustry_ui_fragments_PlayerListFragment *) NULL_CHECK((frame[0].o)))->F_visible = (jint(0));
	LINE_NUMBER(26);
	sp[0].o = frame[0].o;
	clinit_arc_util_Interval(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_util_Interval);
	init_arc_util_Interval(ctx, sp[1].o);
	((mindustry_ui_fragments_PlayerListFragment *) NULL_CHECK(sp[0].o))->F_timer = (jref) sp[1].o;
	LINE_NUMBER(28);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_ui_fragments_PlayerListFragment *) NULL_CHECK(sp[0].o))->F_players = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_PlayerListFragment_build_arc_scene_Group(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PlayerListFragment:build", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(31);
	sp[0].o = (jobject)((mindustry_ui_fragments_PlayerListFragment *) NULL_CHECK((frame[0].o)))->F_content;
	((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_name = (jref) (((jobject) createStringLiteral(ctx, u8"players"_j)));
	LINE_NUMBER(32);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_PlayerListFragment_invoke_arc_func_Cons_6(ctx);
		auto proxy = (mindustry_ui_fragments_PlayerListFragment_invoke_arc_func_Cons_6 *) gcAlloc(ctx, &class_mindustry_ui_fragments_PlayerListFragment_invoke_arc_func_Cons_6);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_scene_Group_fill_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Group_fill_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(73);
	((func_mindustry_ui_fragments_PlayerListFragment_rebuild) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_fragments_PlayerListFragment_rebuild])(ctx, (frame[0].o));
	LINE_NUMBER(74);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_PlayerListFragment_rebuild(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PlayerListFragment:rebuild", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(77);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isCampaign_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isCampaign_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_pvp) != 0) goto label_2;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_infiniteResources) == 0) goto label_1;
	}
label_2:;
	INST_ICONST(1);
	goto label_3;
label_1:;
	INST_ICONST(0);
label_3:;
	{
	sp -= 1;
	frame[1].i = sp[0].i;
	LINE_NUMBER(79);
	sp[0].o = (jobject)((mindustry_ui_fragments_PlayerListFragment *) NULL_CHECK((frame[0].o)))->F_content;
	((func_arc_scene_ui_layout_Table_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_clear])(ctx, sp[0].o);
	LINE_NUMBER(81);
	frame[2].f = (jfloat(50.0f));
	LINE_NUMBER(82);
	frame[3].i = (jint(0));
	LINE_NUMBER(84);
	sp[0].o = (jobject)((mindustry_ui_fragments_PlayerListFragment *) NULL_CHECK((frame[0].o)))->F_players;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(85);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_player;
	sp[1].o = (jobject)((mindustry_ui_fragments_PlayerListFragment *) NULL_CHECK((frame[0].o)))->F_players;
	sp[0].o = (jobject)((func_mindustry_entities_EntityGroup_copy_arc_struct_Seq_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_copy_arc_struct_Seq_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(87);
	sp[0].o = (jobject)((mindustry_ui_fragments_PlayerListFragment *) NULL_CHECK((frame[0].o)))->F_players;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_PlayerListFragment_invoke_arc_func_Func_1(ctx);
		auto proxy = (mindustry_ui_fragments_PlayerListFragment_invoke_arc_func_Func_1 *) gcAlloc(ctx, &class_mindustry_ui_fragments_PlayerListFragment_invoke_arc_func_Func_1);
		sp[1].o = (jobject) proxy;
	}
	sp[1].o = (jobject)SM_arc_util_Structs_comparing_arc_func_Func_R_java_util_Comparator(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_PlayerListFragment_invoke_arc_func_Boolf_6(ctx);
		auto proxy = (mindustry_ui_fragments_PlayerListFragment_invoke_arc_func_Boolf_6 *) gcAlloc(ctx, &class_mindustry_ui_fragments_PlayerListFragment_invoke_arc_func_Boolf_6);
		sp[2].o = (jobject) proxy;
	}
	sp[2].o = (jobject)SM_arc_util_Structs_comparingBool_arc_func_Boolf_R_java_util_Comparator(ctx, sp[2].o);
	sp[1].o = (jobject)SM_arc_util_Structs_comps_java_util_Comparator_java_util_Comparator_R_java_util_Comparator(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_sort_java_util_Comparator_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_sort_java_util_Comparator_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(88);
	sp[0].o = (jobject)((mindustry_ui_fragments_PlayerListFragment *) NULL_CHECK((frame[0].o)))->F_search;
	sp[0].o = (jobject)((func_arc_scene_ui_TextField_getText_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_getText_R_java_lang_String])(ctx, sp[0].o);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[0].o);
	if (temp0 <= 0) goto label_11;
	}
	{
	LINE_NUMBER(89);
	sp[0].o = (jobject)((mindustry_ui_fragments_PlayerListFragment *) NULL_CHECK((frame[0].o)))->F_players;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_PlayerListFragment_invoke_arc_func_Boolf_7(ctx);
		auto proxy = (mindustry_ui_fragments_PlayerListFragment_invoke_arc_func_Boolf_7 *) gcAlloc(ctx, &class_mindustry_ui_fragments_PlayerListFragment_invoke_arc_func_Boolf_7);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_retainAll_arc_func_Boolf_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_retainAll_arc_func_Boolf_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	}
label_11:;
	{
	LINE_NUMBER(92);
	sp[0].o = (jobject)((mindustry_ui_fragments_PlayerListFragment *) NULL_CHECK((frame[0].o)))->F_players;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	}
label_13:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 == 0) goto label_14;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	frame[5].o = (checkCast(ctx, &class_mindustry_gen_Player, sp[0].o));
	LINE_NUMBER(93);
	frame[3].i = (jint(1));
	LINE_NUMBER(94);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[5].o)))->F_con;
	frame[6].o = sp[0].o;
	LINE_NUMBER(96);
	if ((frame[6].o) != nullptr) goto label_18;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_18;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Player_isLocal_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_gen_Player_isLocal_R_boolean])(ctx, (frame[5].o));
	if (temp0 != 0) goto label_18;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_18:;
	{
	LINE_NUMBER(98);
	clinit_arc_scene_ui_layout_Table(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Table);
	init_arc_scene_ui_layout_Table(ctx, sp[0].o);
	frame[7].o = sp[0].o;
	LINE_NUMBER(99);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, (frame[7].o));
	LINE_NUMBER(100);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table])(ctx, (frame[7].o), (jfloat(5.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_marginBottom_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_marginBottom_float_R_arc_scene_ui_layout_Table])(ctx, sp[0].o, (jfloat(10.0f)));
	LINE_NUMBER(102);
	clinit_arc_scene_event_ClickListener(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_event_ClickListener);
	init_arc_scene_event_ClickListener(ctx, sp[0].o);
	frame[8].o = sp[0].o;
	LINE_NUMBER(104);
	clinit_mindustry_ui_fragments_PlayerListFragment$1(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_fragments_PlayerListFragment$1);
	init_mindustry_ui_fragments_PlayerListFragment$1_mindustry_ui_fragments_PlayerListFragment_mindustry_gen_Player_arc_scene_event_ClickListener(ctx, sp[0].o, (frame[0].o), (frame[5].o), (frame[8].o));
	frame[9].o = sp[0].o;
	LINE_NUMBER(116);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_fog) == 0) goto label_24;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_pvp) == 0) goto label_24;
	}
	{
	sp[0].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, (frame[5].o));
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	sp[1].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[1].o);
	if (sp[0].o != sp[1].o) goto label_25;
	}
label_24:;
	INST_ICONST(1);
	goto label_26;
label_25:;
	INST_ICONST(0);
label_26:;
	{
	sp -= 1;
	frame[10].i = sp[0].i;
	LINE_NUMBER(118);
	if ((frame[10].i) == 0) goto label_28;
	}
	{
	LINE_NUMBER(119);
	jint temp0 = (jint)((func_arc_scene_ui_layout_Table_addListener_arc_scene_event_EventListener_R_boolean) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_addListener_arc_scene_event_EventListener_R_boolean])(ctx, (frame[9].o), (frame[8].o));
	LINE_NUMBER(120);
	sp[0].o = frame[9].o;
	clinit_arc_scene_event_HandCursorListener(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_event_HandCursorListener);
	init_arc_scene_event_HandCursorListener(ctx, sp[1].o);
	jint temp1 = (jint)((func_arc_scene_ui_layout_Table_addListener_arc_scene_event_EventListener_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_addListener_arc_scene_event_EventListener_R_boolean])(ctx, sp[0].o, sp[1].o);
	}
label_28:;
	{
	LINE_NUMBER(122);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table])(ctx, (frame[9].o), (jfloat(8.0f)));
	LINE_NUMBER(123);
	sp[0].o = frame[9].o;
	clinit_arc_scene_ui_Image(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_ui_Image);
	sp[2].o = (jobject)((func_mindustry_gen_Player_icon_R_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_gen_Player_icon_R_arc_graphics_g2d_TextureRegion])(ctx, (frame[5].o));
	init_arc_scene_ui_Image_arc_graphics_g2d_TextureRegion(ctx, sp[1].o, sp[2].o);
	clinit_arc_util_Scaling(ctx);
	sp[2].o = (jobject)SF_arc_util_Scaling_bounded;
	sp[1].o = (jobject)((func_arc_scene_ui_Image_setScaling_arc_util_Scaling_R_arc_scene_ui_Image) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_Image_setScaling_arc_util_Scaling_R_arc_scene_ui_Image])(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(124);
	sp[0].o = frame[9].o;
	sp[1].o = (jobject)((func_mindustry_gen_Player_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_gen_Player_name_R_java_lang_String])(ctx, (frame[5].o));
	((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_name = (jref) sp[1].o;
	LINE_NUMBER(125);
	sp[0].o = frame[9].o;
	clinit_arc_scene_event_Touchable(ctx);
	sp[1].o = (jobject)SF_arc_scene_event_Touchable_enabled;
	((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_touchable = (jref) sp[1].o;
	LINE_NUMBER(127);
	sp[0].o = frame[9].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_PlayerListFragment_invoke_java_lang_Runnable_18(ctx);
		auto proxy = (mindustry_ui_fragments_PlayerListFragment_invoke_java_lang_Runnable_18 *) gcAlloc(ctx, &class_mindustry_ui_fragments_PlayerListFragment_invoke_java_lang_Runnable_18);
		proxy->F_field1 = (frame[10].i);
		proxy->F_field0 = (jref) (frame[5].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_tapped_java_lang_Runnable_R_arc_scene_event_InputListener) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_tapped_java_lang_Runnable_R_arc_scene_event_InputListener])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(134);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, (frame[7].o), (frame[9].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (frame[2].f));
	LINE_NUMBER(135);
	sp[0].o = frame[7].o;
	sp[1].o = (jobject)((func_mindustry_gen_Player_color_R_arc_graphics_Color) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_gen_Player_color_R_arc_graphics_Color])(ctx, (frame[5].o));
	sp[1].o = (jobject)((func_arc_graphics_Color_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Color_toString_R_java_lang_String])(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_String_toUpperCase_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_toUpperCase_R_java_lang_String])(ctx, sp[1].o);
	sp[2].o = (jobject)((func_mindustry_gen_Player_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_gen_Player_name_R_java_lang_String])(ctx, (frame[5].o));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"[#\u0001]\u0001"_j.string, 2, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_ui_Styles(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_Styles_outlineLabel;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_style_arc_scene_style_Style_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_style_arc_scene_style_Style_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_wrap_boolean_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_wrap_boolean_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jint(1)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(10.0f)));
	LINE_NUMBER(137);
	sp[0].o = frame[7].o;
	clinit_mindustry_gen_Tex(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Tex_underline;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_background_arc_scene_style_Drawable_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_background_arc_scene_style_Drawable_R_arc_scene_ui_layout_Table])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(139);
	sp[0].o = frame[7].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_admin;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_image_arc_scene_style_Drawable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_image_arc_scene_style_Drawable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_PlayerListFragment_invoke_arc_func_Boolp_2(ctx);
		auto proxy = (mindustry_ui_fragments_PlayerListFragment_invoke_arc_func_Boolp_2 *) gcAlloc(ctx, &class_mindustry_ui_fragments_PlayerListFragment_invoke_arc_func_Boolp_2);
		proxy->F_field0 = (jref) (frame[5].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_visible_arc_func_Boolp_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_visible_arc_func_Boolp_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(5.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, sp[0].o);
	((func_arc_scene_ui_Image_updateVisibility) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_scene_ui_Image, sp[0].o)))->vtable)[VTABLE_arc_scene_ui_Image_updateVisibility])(ctx, (checkCast(ctx, &class_arc_scene_ui_Image, sp[0].o)));
	LINE_NUMBER(141);
	clinit_mindustry_ui_fragments_PlayerListFragment$2(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_fragments_PlayerListFragment$2);
	init_mindustry_ui_fragments_PlayerListFragment$2_mindustry_ui_fragments_PlayerListFragment(ctx, sp[0].o, (frame[0].o));
	frame[11].o = sp[0].o;
	LINE_NUMBER(149);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_41;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	if (((jint)((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_admin) == 0) goto label_42;
	}
	{
	if (((jint)((mindustry_gen_Player *) NULL_CHECK((frame[5].o)))->F_admin) == 0) goto label_41;
	}
	{
	sp[0].o = frame[5].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	if (sp[0].o != sp[1].o) goto label_42;
	}
label_41:;
	{
	LINE_NUMBER(150);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_R_arc_scene_ui_layout_Cell])(ctx, (frame[7].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growY_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growY_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(152);
	if ((frame[1].i) != 0) goto label_44;
	}
	{
	sp[0].o = frame[5].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	if (sp[0].o == sp[1].o) goto label_45;
	}
label_44:;
	{
	LINE_NUMBER(153);
	sp[0].o = frame[7].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_menu;
	sp[2].o = frame[11].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_PlayerListFragment_invoke_java_lang_Runnable_19(ctx);
		auto proxy = (mindustry_ui_fragments_PlayerListFragment_invoke_java_lang_Runnable_19 *) gcAlloc(ctx, &class_mindustry_ui_fragments_PlayerListFragment_invoke_java_lang_Runnable_19);
		proxy->F_field1 = (frame[1].i);
		proxy->F_field0 = (jref) (frame[5].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	jfloat temp0 = frame[2].f;
	LINE_NUMBER(238);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	goto label_45;
	}
label_42:;
	{
	LINE_NUMBER(240);
	jint temp0 = (jint)((func_mindustry_gen_Player_isLocal_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_gen_Player_isLocal_R_boolean])(ctx, (frame[5].o));
	if (temp0 != 0) goto label_45;
	}
	{
	if (((jint)((mindustry_gen_Player *) NULL_CHECK((frame[5].o)))->F_admin) != 0) goto label_45;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_45;
	}
	{
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_player;
	jint temp0 = (jint)((func_mindustry_entities_EntityGroup_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_size_R_int])(ctx, sp[0].o);
	if (temp0 < (jint(3))) goto label_45;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[0].o);
	sp[1].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, (frame[5].o));
	if (sp[0].o != sp[1].o) goto label_45;
	}
	{
	LINE_NUMBER(241);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_R_arc_scene_ui_layout_Cell])(ctx, (frame[7].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growY_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growY_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(243);
	sp[0].o = frame[7].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_hammer;
	sp[2].o = frame[11].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_PlayerListFragment_invoke_java_lang_Runnable_20(ctx);
		auto proxy = (mindustry_ui_fragments_PlayerListFragment_invoke_java_lang_Runnable_20 *) gcAlloc(ctx, &class_mindustry_ui_fragments_PlayerListFragment_invoke_java_lang_Runnable_20);
		proxy->F_field0 = (jref) (frame[5].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	jfloat temp0 = frame[2].f;
	LINE_NUMBER(246);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	}
label_45:;
	{
	LINE_NUMBER(249);
	sp[0].o = (jobject)((mindustry_ui_fragments_PlayerListFragment *) NULL_CHECK((frame[0].o)))->F_content;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (frame[7].o));
	sp += 1;
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_mobile) == 0) goto label_50;
	}
	(sp++)->f = jfloat(350.0f);
	goto label_51;
label_50:;
	(sp++)->f = jfloat(470.0f);
label_51:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].f);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, ((frame[2].f) + (jfloat(14.0f))));
	LINE_NUMBER(250);
	sp[0].o = (jobject)((mindustry_ui_fragments_PlayerListFragment *) NULL_CHECK((frame[0].o)))->F_content;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	LINE_NUMBER(251);
	goto label_13;
	}
label_14:;
	{
	LINE_NUMBER(253);
	if ((frame[3].i) != 0) goto label_54;
	}
	{
	LINE_NUMBER(254);
	sp[0].o = (jobject)((mindustry_ui_fragments_PlayerListFragment *) NULL_CHECK((frame[0].o)))->F_content;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"players.notfound"_j));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(0)));
	sp[1].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(6.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(350.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_maxHeight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_maxHeight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, ((frame[2].f) + (jfloat(14.0f))));
	}
label_54:;
	{
	LINE_NUMBER(257);
	sp[0].o = (jobject)((mindustry_ui_fragments_PlayerListFragment *) NULL_CHECK((frame[0].o)))->F_content;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_marginBottom_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_marginBottom_float_R_arc_scene_ui_layout_Table])(ctx, sp[0].o, (jfloat(5.0f)));
	LINE_NUMBER(258);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_PlayerListFragment_toggle(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PlayerListFragment:toggle", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(261);
	sp[0].o = frame[0].o;
	sp += 1;
	if (((jint)((mindustry_ui_fragments_PlayerListFragment *) NULL_CHECK((frame[0].o)))->F_visible) != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 2;
	((mindustry_ui_fragments_PlayerListFragment *) NULL_CHECK(sp[0].o))->F_visible = sp[1].i;
	LINE_NUMBER(262);
	if (((jint)((mindustry_ui_fragments_PlayerListFragment *) NULL_CHECK((frame[0].o)))->F_visible) == 0) goto label_4;
	}
	{
	LINE_NUMBER(263);
	((func_mindustry_ui_fragments_PlayerListFragment_rebuild) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_fragments_PlayerListFragment_rebuild])(ctx, (frame[0].o));
	goto label_6;
	}
label_4:;
	{
	LINE_NUMBER(265);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	jint temp0 = (jint)((func_arc_scene_Scene_setKeyboardFocus_arc_scene_Element_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_setKeyboardFocus_arc_scene_Element_R_boolean])(ctx, sp[0].o, (jobject(nullptr)));
	LINE_NUMBER(266);
	sp[0].o = (jobject)((mindustry_ui_fragments_PlayerListFragment *) NULL_CHECK((frame[0].o)))->F_search;
	((func_arc_scene_ui_TextField_clearText) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_clearText])(ctx, sp[0].o);
	}
label_6:;
	LINE_NUMBER(268);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_ui_fragments_PlayerListFragment_lambda$rebuild$18_mindustry_gen_Player(jcontext ctx, jobject param0) {
	jtype frame[9];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PlayerListFragment:lambda$rebuild$18", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_PlayerListFragment(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(244);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@votekick.reason"_j));
	clinit_arc_Core(ctx);
	sp[2].o = (jobject)SF_arc_Core_bundle;
	sp[3].o = ((jobject) createStringLiteral(ctx, u8"votekick.reason.message"_j));
	sp[4].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[5].o = (jobject)((func_mindustry_gen_Player_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_name_R_java_lang_String])(ctx, (frame[0].o));
	ARRAY_ACCESS(jobject, sp[4].o, temp0) = sp[5].o;
	sp[2].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[2].o, sp[3].o, sp[4].o);
	sp[3].o = ((jobject) createStringLiteral(ctx, u8""_j));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_PlayerListFragment_invoke_arc_func_Cons_7(ctx);
		auto proxy = (mindustry_ui_fragments_PlayerListFragment_invoke_arc_func_Cons_7 *) gcAlloc(ctx, &class_mindustry_ui_fragments_PlayerListFragment_invoke_arc_func_Cons_7);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	((func_mindustry_core_UI_showTextInput_java_lang_String_java_lang_String_java_lang_String_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showTextInput_java_lang_String_java_lang_String_java_lang_String_arc_func_Cons])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_fragments_PlayerListFragment_lambda$rebuild$19_mindustry_gen_Player_java_lang_String(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PlayerListFragment:lambda$rebuild$19", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_PlayerListFragment(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(245);
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"/votekick #\u0001 \u0001"_j.string, 2, boxInteger(ctx, ((jint)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_id)), (frame[1].o));
	SM_mindustry_gen_Call_sendChatMessage_java_lang_String(ctx, sp[0].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_fragments_PlayerListFragment_lambda$rebuild$4_mindustry_gen_Player_boolean(jcontext ctx, jobject param0, jbool param1) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PlayerListFragment:lambda$rebuild$4", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_PlayerListFragment(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(154);
	clinit_mindustry_ui_dialogs_BaseDialog(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_BaseDialog);
	sp[1].o = (jobject)((func_mindustry_gen_Player_coloredName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_coloredName_R_java_lang_String])(ctx, (frame[0].o));
	init_mindustry_ui_dialogs_BaseDialog_java_lang_String(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(156);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[2].o)))->F_title;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_white;
	((func_arc_scene_ui_Label_setColor_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Label_setColor_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(157);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[2].o)))->F_titleTable;
	jint temp0 = (jint)((func_arc_scene_ui_layout_Table_remove_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_remove_R_boolean])(ctx, sp[0].o);
	LINE_NUMBER(159);
	((func_mindustry_ui_dialogs_BaseDialog_closeOnBack) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_closeOnBack])(ctx, (frame[2].o));
	LINE_NUMBER(161);
	clinit_mindustry_ui_Styles(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Styles_defaultt;
	frame[3].o = sp[0].o;
	LINE_NUMBER(163);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[2].o)))->F_cont;
	sp[1].o = (jobject)((func_mindustry_gen_Player_coloredName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_coloredName_R_java_lang_String])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(164);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[2].o)))->F_cont;
	clinit_mindustry_gen_Tex(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Tex_whiteui;
	clinit_mindustry_graphics_Pal(ctx);
	sp[2].o = (jobject)SF_mindustry_graphics_Pal_accent;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_image_arc_scene_style_Drawable_arc_graphics_Color_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_image_arc_scene_style_Drawable_arc_graphics_Color_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(3.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(166);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[2].o)))->F_cont;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_PlayerListFragment_invoke_arc_func_Cons_8(ctx);
		auto proxy = (mindustry_ui_fragments_PlayerListFragment_invoke_arc_func_Cons_8 *) gcAlloc(ctx, &class_mindustry_ui_fragments_PlayerListFragment_invoke_arc_func_Cons_8);
		proxy->F_field3 = (frame[1].i);
		proxy->F_field2 = (jref) (frame[2].o);
		proxy->F_field1 = (jref) (frame[3].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_pane_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_pane_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(233);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(235);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[2].o)))->F_cont;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@back"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_left;
	sp[3].o = frame[2].o;
	sp[4].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[3].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_PlayerListFragment_invoke_java_lang_Runnable_21(ctx);
		auto proxy = (mindustry_ui_fragments_PlayerListFragment_invoke_java_lang_Runnable_21 *) gcAlloc(ctx, &class_mindustry_ui_fragments_PlayerListFragment_invoke_java_lang_Runnable_21);
		proxy->F_field0 = (jref) sp[3].o;
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(-1.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(220.0f)), (jfloat(55.0f)));
	LINE_NUMBER(237);
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_BaseDialog_show_R_arc_scene_ui_Dialog) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_show_R_arc_scene_ui_Dialog])(ctx, (frame[2].o));
	LINE_NUMBER(238);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_fragments_PlayerListFragment_lambda$rebuild$5_mindustry_gen_Player_arc_scene_ui_TextButton$TextButtonStyle_mindustry_ui_dialogs_BaseDialog_boolean_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1, jobject param2, jbool param3, jobject param4) {
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PlayerListFragment:lambda$rebuild$5", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_PlayerListFragment(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(167);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell])(ctx, (frame[4].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(220.0f)), (jfloat(55.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(3.0f)));
	LINE_NUMBER(169);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	if (sp[0].o == sp[1].o) goto label_2;
	}
	{
	LINE_NUMBER(170);
	sp[0].o = frame[4].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@player.ban"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_hammer;
	sp[3].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_PlayerListFragment_invoke_java_lang_Runnable_22(ctx);
		auto proxy = (mindustry_ui_fragments_PlayerListFragment_invoke_java_lang_Runnable_22 *) gcAlloc(ctx, &class_mindustry_ui_fragments_PlayerListFragment_invoke_java_lang_Runnable_22);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(173);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(175);
	sp[0].o = frame[4].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@player.kick"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_cancel;
	sp[3].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_PlayerListFragment_invoke_java_lang_Runnable_23(ctx);
		auto proxy = (mindustry_ui_fragments_PlayerListFragment_invoke_java_lang_Runnable_23 *) gcAlloc(ctx, &class_mindustry_ui_fragments_PlayerListFragment_invoke_java_lang_Runnable_23);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(178);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(180);
	sp[0].o = frame[4].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@player.trace"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_zoom;
	sp[3].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_PlayerListFragment_invoke_java_lang_Runnable_24(ctx);
		auto proxy = (mindustry_ui_fragments_PlayerListFragment_invoke_java_lang_Runnable_24 *) gcAlloc(ctx, &class_mindustry_ui_fragments_PlayerListFragment_invoke_java_lang_Runnable_24);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(183);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	}
label_2:;
	{
	LINE_NUMBER(187);
	if ((frame[3].i) == 0) goto label_9;
	}
	{
	LINE_NUMBER(188);
	sp[0].o = frame[4].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@player.team"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_redo;
	sp[3].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_PlayerListFragment_invoke_java_lang_Runnable_25(ctx);
		auto proxy = (mindustry_ui_fragments_PlayerListFragment_invoke_java_lang_Runnable_25 *) gcAlloc(ctx, &class_mindustry_ui_fragments_PlayerListFragment_invoke_java_lang_Runnable_25);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(212);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	}
label_9:;
	{
	LINE_NUMBER(215);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_12;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Player_isLocal_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_isLocal_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_12;
	}
	{
	LINE_NUMBER(216);
	sp[0].o = frame[4].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@player.admin"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_admin;
	clinit_mindustry_ui_Styles(ctx);
	sp[3].o = (jobject)SF_mindustry_ui_Styles_togglet;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_PlayerListFragment_invoke_java_lang_Runnable_26(ctx);
		auto proxy = (mindustry_ui_fragments_PlayerListFragment_invoke_java_lang_Runnable_26 *) gcAlloc(ctx, &class_mindustry_ui_fragments_PlayerListFragment_invoke_java_lang_Runnable_26);
		proxy->F_field1 = (jref) (frame[0].o);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_PlayerListFragment_invoke_arc_func_Boolf_8(ctx);
		auto proxy = (mindustry_ui_fragments_PlayerListFragment_invoke_arc_func_Boolf_8 *) gcAlloc(ctx, &class_mindustry_ui_fragments_PlayerListFragment_invoke_arc_func_Boolf_8);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	LINE_NUMBER(231);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_checked_arc_func_Boolf_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_checked_arc_func_Boolf_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	}
label_12:;
	LINE_NUMBER(233);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_fragments_PlayerListFragment_lambda$rebuild$17_mindustry_gen_Player_arc_scene_ui_TextButton_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PlayerListFragment:lambda$rebuild$17", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_PlayerListFragment(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(231);
	popStackFrame(ctx);
	return ((jint)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_admin);
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_fragments_PlayerListFragment_lambda$rebuild$14_mindustry_ui_dialogs_BaseDialog_mindustry_gen_Player(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[11];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PlayerListFragment:lambda$rebuild$14", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_PlayerListFragment(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(217);
	((func_mindustry_ui_dialogs_BaseDialog_hide) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_hide])(ctx, (frame[0].o));
	LINE_NUMBER(218);
	sp[0].o = (jobject)((func_mindustry_gen_Player_uuid_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Player_uuid_R_java_lang_String])(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(220);
	if (((jint)((mindustry_gen_Player *) NULL_CHECK((frame[1].o)))->F_admin) == 0) goto label_3;
	}
	{
	LINE_NUMBER(221);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@confirm"_j));
	clinit_arc_Core(ctx);
	sp[2].o = (jobject)SF_arc_Core_bundle;
	sp[3].o = ((jobject) createStringLiteral(ctx, u8"confirmunadmin"_j));
	sp[4].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[5].o = (jobject)((func_mindustry_gen_Player_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Player_name_R_java_lang_String])(ctx, (frame[1].o));
	ARRAY_ACCESS(jobject, sp[4].o, temp0) = sp[5].o;
	sp[2].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[2].o, sp[3].o, sp[4].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_PlayerListFragment_invoke_java_lang_Runnable_27(ctx);
		auto proxy = (mindustry_ui_fragments_PlayerListFragment_invoke_java_lang_Runnable_27 *) gcAlloc(ctx, &class_mindustry_ui_fragments_PlayerListFragment_invoke_java_lang_Runnable_27);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[3].o = (jobject) proxy;
	}
	((func_mindustry_core_UI_showConfirm_java_lang_String_java_lang_String_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showConfirm_java_lang_String_java_lang_String_java_lang_Runnable])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	goto label_5;
	}
label_3:;
	{
	LINE_NUMBER(226);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@confirm"_j));
	clinit_arc_Core(ctx);
	sp[2].o = (jobject)SF_arc_Core_bundle;
	sp[3].o = ((jobject) createStringLiteral(ctx, u8"confirmadmin"_j));
	sp[4].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[5].o = (jobject)((func_mindustry_gen_Player_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Player_name_R_java_lang_String])(ctx, (frame[1].o));
	ARRAY_ACCESS(jobject, sp[4].o, temp0) = sp[5].o;
	sp[2].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[2].o, sp[3].o, sp[4].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_PlayerListFragment_invoke_java_lang_Runnable_28(ctx);
		auto proxy = (mindustry_ui_fragments_PlayerListFragment_invoke_java_lang_Runnable_28 *) gcAlloc(ctx, &class_mindustry_ui_fragments_PlayerListFragment_invoke_java_lang_Runnable_28);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[3].o = (jobject) proxy;
	}
	((func_mindustry_core_UI_showConfirm_java_lang_String_java_lang_String_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showConfirm_java_lang_String_java_lang_String_java_lang_Runnable])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	}
label_5:;
	LINE_NUMBER(231);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_ui_fragments_PlayerListFragment_lambda$rebuild$16_java_lang_String_mindustry_gen_Player(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PlayerListFragment:lambda$rebuild$16", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_PlayerListFragment(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(227);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_netServer;
	sp[0].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK(sp[0].o))->F_admins;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((func_mindustry_gen_Player_usid_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Player_usid_R_java_lang_String])(ctx, (frame[1].o));
	jint temp0 = (jint)((func_mindustry_net_Administration_adminPlayer_java_lang_String_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Administration_adminPlayer_java_lang_String_java_lang_String_R_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(228);
	((mindustry_gen_Player *) NULL_CHECK((frame[1].o)))->F_admin = (jint(1));
	LINE_NUMBER(229);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_fragments_PlayerListFragment_lambda$rebuild$15_java_lang_String_mindustry_gen_Player(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PlayerListFragment:lambda$rebuild$15", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_PlayerListFragment(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(222);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_netServer;
	sp[0].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK(sp[0].o))->F_admins;
	jint temp0 = (jint)((func_mindustry_net_Administration_unAdminPlayer_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Administration_unAdminPlayer_java_lang_String_R_boolean])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(223);
	((mindustry_gen_Player *) NULL_CHECK((frame[1].o)))->F_admin = (jint(0));
	LINE_NUMBER(224);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_fragments_PlayerListFragment_lambda$rebuild$11_mindustry_gen_Player_mindustry_ui_dialogs_BaseDialog(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[13];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PlayerListFragment:lambda$rebuild$11", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_PlayerListFragment(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(189);
	clinit_mindustry_ui_dialogs_BaseDialog(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_BaseDialog);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"player.team"_j))));
	sp[2].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_name;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001: \u0001"_j.string, 2, sp[1].o, sp[2].o);
	init_mindustry_ui_dialogs_BaseDialog_java_lang_String(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(190);
	((func_mindustry_ui_dialogs_BaseDialog_setFillParent_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_setFillParent_boolean])(ctx, (frame[2].o), (jint(0)));
	LINE_NUMBER(192);
	frame[3].i = (jint(0));
	LINE_NUMBER(194);
	clinit_mindustry_game_Team(ctx);
	sp[0].o = (jobject)SF_mindustry_game_Team_baseTeams;
	frame[4].o = sp[0].o;
	frame[5].i = (((jarray) nullCheck(ctx, (frame[4].o)))->length);
	frame[6].i = (jint(0));
	}
label_6:;
	{
	if ((frame[6].i) >= (frame[5].i)) goto label_7;
	}
	{
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[6].i)));
	LINE_NUMBER(195);
	clinit_arc_scene_ui_ImageButton(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_ImageButton);
	clinit_mindustry_gen_Tex(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Tex_whiteui;
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_clearNoneTogglei;
	init_arc_scene_ui_ImageButton_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[8].o = sp[0].o;
	LINE_NUMBER(196);
	sp[0].o = (jobject)((func_arc_scene_ui_ImageButton_margin_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_arc_scene_ui_ImageButton_margin_float_R_arc_scene_ui_layout_Table])(ctx, (frame[8].o), (jfloat(4.0f)));
	LINE_NUMBER(197);
	sp[0].o = (jobject)((func_arc_scene_ui_ImageButton_getImageCell_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_arc_scene_ui_ImageButton_getImageCell_R_arc_scene_ui_layout_Cell])(ctx, (frame[8].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(198);
	sp[0].o = (jobject)((func_arc_scene_ui_ImageButton_getStyle_R_arc_scene_ui_ImageButton$ImageButtonStyle) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_arc_scene_ui_ImageButton_getStyle_R_arc_scene_ui_ImageButton$ImageButtonStyle])(ctx, (frame[8].o));
	sp[1].o = (jobject)((mindustry_game_Team *) NULL_CHECK((frame[7].o)))->F_color;
	((arc_scene_ui_ImageButton$ImageButtonStyle *) NULL_CHECK(sp[0].o))->F_imageUpColor = (jref) sp[1].o;
	LINE_NUMBER(199);
	sp[0].o = frame[8].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_PlayerListFragment_invoke_java_lang_Runnable_29(ctx);
		auto proxy = (mindustry_ui_fragments_PlayerListFragment_invoke_java_lang_Runnable_29 *) gcAlloc(ctx, &class_mindustry_ui_fragments_PlayerListFragment_invoke_java_lang_Runnable_29);
		proxy->F_field2 = (jref) (frame[2].o);
		proxy->F_field1 = (jref) (frame[7].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_ImageButton_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ImageButton_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(203);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[2].o)))->F_cont;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (frame[8].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(50.0f)));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_PlayerListFragment_invoke_arc_func_Boolf_9(ctx);
		auto proxy = (mindustry_ui_fragments_PlayerListFragment_invoke_arc_func_Boolf_9 *) gcAlloc(ctx, &class_mindustry_ui_fragments_PlayerListFragment_invoke_arc_func_Boolf_9);
		proxy->F_field1 = (jref) (frame[7].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_checked_arc_func_Boolf_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_checked_arc_func_Boolf_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(205);
	jint temp0 = frame[3].i;
	INST_IINC(3, 1);
	if ((temp0 % (jint(3))) != (jint(2))) goto label_15;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[2].o)))->F_cont;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	}
label_15:;
	{
	LINE_NUMBER(194);
	INST_IINC(6, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(208);
	((func_mindustry_ui_dialogs_BaseDialog_addCloseButton) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_addCloseButton])(ctx, (frame[2].o));
	LINE_NUMBER(209);
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_BaseDialog_show_R_arc_scene_ui_Dialog) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_show_R_arc_scene_ui_Dialog])(ctx, (frame[2].o));
	LINE_NUMBER(211);
	((func_mindustry_ui_dialogs_BaseDialog_hide) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_hide])(ctx, (frame[1].o));
	LINE_NUMBER(212);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_fragments_PlayerListFragment_lambda$rebuild$13_mindustry_gen_Player_mindustry_game_Team_arc_scene_ui_ImageButton_R_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PlayerListFragment:lambda$rebuild$13", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_PlayerListFragment(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(203);
	sp[0].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, (frame[0].o));
	if (sp[0].o != (frame[1].o)) goto label_1;
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

void SM_mindustry_ui_fragments_PlayerListFragment_lambda$rebuild$12_mindustry_gen_Player_mindustry_game_Team_mindustry_ui_dialogs_BaseDialog(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PlayerListFragment:lambda$rebuild$12", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_PlayerListFragment(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(200);
	sp[0].o = frame[0].o;
	clinit_mindustry_net_Packets$AdminAction(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packets$AdminAction_switchTeam;
	SM_mindustry_gen_Call_adminRequest_mindustry_gen_Player_mindustry_net_Packets$AdminAction_java_lang_Object(ctx, sp[0].o, sp[1].o, (frame[1].o));
	LINE_NUMBER(201);
	((func_mindustry_ui_dialogs_BaseDialog_hide) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_hide])(ctx, (frame[2].o));
	LINE_NUMBER(202);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_fragments_PlayerListFragment_lambda$rebuild$10_mindustry_gen_Player_mindustry_ui_dialogs_BaseDialog(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PlayerListFragment:lambda$rebuild$10", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_PlayerListFragment(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(181);
	sp[0].o = frame[0].o;
	clinit_mindustry_net_Packets$AdminAction(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packets$AdminAction_trace;
	SM_mindustry_gen_Call_adminRequest_mindustry_gen_Player_mindustry_net_Packets$AdminAction_java_lang_Object(ctx, sp[0].o, sp[1].o, (jobject(nullptr)));
	LINE_NUMBER(182);
	((func_mindustry_ui_dialogs_BaseDialog_hide) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_hide])(ctx, (frame[1].o));
	LINE_NUMBER(183);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_fragments_PlayerListFragment_lambda$rebuild$8_mindustry_gen_Player_mindustry_ui_dialogs_BaseDialog(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[10];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PlayerListFragment:lambda$rebuild$8", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_PlayerListFragment(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(176);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@confirm"_j));
	clinit_arc_Core(ctx);
	sp[2].o = (jobject)SF_arc_Core_bundle;
	sp[3].o = ((jobject) createStringLiteral(ctx, u8"confirmkick"_j));
	sp[4].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[5].o = (jobject)((func_mindustry_gen_Player_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_name_R_java_lang_String])(ctx, (frame[0].o));
	ARRAY_ACCESS(jobject, sp[4].o, temp0) = sp[5].o;
	sp[2].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[2].o, sp[3].o, sp[4].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_PlayerListFragment_invoke_java_lang_Runnable_30(ctx);
		auto proxy = (mindustry_ui_fragments_PlayerListFragment_invoke_java_lang_Runnable_30 *) gcAlloc(ctx, &class_mindustry_ui_fragments_PlayerListFragment_invoke_java_lang_Runnable_30);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	((func_mindustry_core_UI_showConfirm_java_lang_String_java_lang_String_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showConfirm_java_lang_String_java_lang_String_java_lang_Runnable])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(177);
	((func_mindustry_ui_dialogs_BaseDialog_hide) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_hide])(ctx, (frame[1].o));
	LINE_NUMBER(178);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_fragments_PlayerListFragment_lambda$rebuild$9_mindustry_gen_Player(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PlayerListFragment:lambda$rebuild$9", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_PlayerListFragment(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(176);
	sp[0].o = frame[0].o;
	clinit_mindustry_net_Packets$AdminAction(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packets$AdminAction_kick;
	SM_mindustry_gen_Call_adminRequest_mindustry_gen_Player_mindustry_net_Packets$AdminAction_java_lang_Object(ctx, sp[0].o, sp[1].o, (jobject(nullptr)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_fragments_PlayerListFragment_lambda$rebuild$6_mindustry_gen_Player_mindustry_ui_dialogs_BaseDialog(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[10];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PlayerListFragment:lambda$rebuild$6", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_PlayerListFragment(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(171);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@confirm"_j));
	clinit_arc_Core(ctx);
	sp[2].o = (jobject)SF_arc_Core_bundle;
	sp[3].o = ((jobject) createStringLiteral(ctx, u8"confirmban"_j));
	sp[4].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[5].o = (jobject)((func_mindustry_gen_Player_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_name_R_java_lang_String])(ctx, (frame[0].o));
	ARRAY_ACCESS(jobject, sp[4].o, temp0) = sp[5].o;
	sp[2].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[2].o, sp[3].o, sp[4].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_PlayerListFragment_invoke_java_lang_Runnable_31(ctx);
		auto proxy = (mindustry_ui_fragments_PlayerListFragment_invoke_java_lang_Runnable_31 *) gcAlloc(ctx, &class_mindustry_ui_fragments_PlayerListFragment_invoke_java_lang_Runnable_31);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	((func_mindustry_core_UI_showConfirm_java_lang_String_java_lang_String_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showConfirm_java_lang_String_java_lang_String_java_lang_Runnable])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(172);
	((func_mindustry_ui_dialogs_BaseDialog_hide) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_hide])(ctx, (frame[1].o));
	LINE_NUMBER(173);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_fragments_PlayerListFragment_lambda$rebuild$7_mindustry_gen_Player(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PlayerListFragment:lambda$rebuild$7", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_PlayerListFragment(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(171);
	sp[0].o = frame[0].o;
	clinit_mindustry_net_Packets$AdminAction(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packets$AdminAction_ban;
	SM_mindustry_gen_Call_adminRequest_mindustry_gen_Player_mindustry_net_Packets$AdminAction_java_lang_Object(ctx, sp[0].o, sp[1].o, (jobject(nullptr)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_fragments_PlayerListFragment_lambda$rebuild$3_mindustry_gen_Player_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PlayerListFragment:lambda$rebuild$3", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_PlayerListFragment(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(139);
	if (((jint)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_admin) == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Player_isLocal_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_isLocal_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_2;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
label_2:;
	INST_ICONST(1);
	goto label_3;
label_1:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void SM_mindustry_ui_fragments_PlayerListFragment_lambda$rebuild$2_mindustry_gen_Player_boolean(jcontext ctx, jobject param0, jbool param1) {
	jtype frame[9];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PlayerListFragment:lambda$rebuild$2", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_PlayerListFragment(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(128);
	jint temp0 = (jint)((func_mindustry_gen_Player_dead_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_dead_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	INST_ILOAD(1);
	if ((--sp)->i == 0) goto label_1;
	{
	LINE_NUMBER(129);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_input;
	sp[1].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, (frame[0].o));
	((func_mindustry_input_InputHandler_spectate_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_input_InputHandler_spectate_mindustry_gen_Unit])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(130);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"viewplayer"_j));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[4].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_name;
	ARRAY_ACCESS(jobject, sp[3].o, temp0) = sp[4].o;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	((func_mindustry_core_UI_showInfoFade_java_lang_String_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showInfoFade_java_lang_String_float])(ctx, sp[0].o, sp[1].o, (jfloat(1)));
	}
label_1:;
	LINE_NUMBER(132);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_ui_fragments_PlayerListFragment_lambda$rebuild$1_mindustry_gen_Player_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PlayerListFragment:lambda$rebuild$1", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(89);
	sp[0].o = (jobject)((func_mindustry_gen_Player_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Player_name_R_java_lang_String])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_String_toLowerCase_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_toLowerCase_R_java_lang_String])(ctx, sp[0].o);
	sp[0].o = (jobject)SM_arc_util_Strings_stripColors_java_lang_CharSequence_R_java_lang_String(ctx, sp[0].o);
	sp[1].o = (jobject)((mindustry_ui_fragments_PlayerListFragment *) NULL_CHECK((frame[0].o)))->F_search;
	sp[1].o = (jobject)((func_arc_scene_ui_TextField_getText_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_TextField_getText_R_java_lang_String])(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_String_toLowerCase_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_toLowerCase_R_java_lang_String])(ctx, sp[1].o);
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_fragments_PlayerListFragment_lambda$rebuild$0_mindustry_gen_Player_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PlayerListFragment:lambda$rebuild$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_PlayerListFragment(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(87);
	if (((jint)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_admin) != 0) goto label_1;
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

void M_mindustry_ui_fragments_PlayerListFragment_lambda$build$0_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PlayerListFragment:lambda$build$0", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(33);
	((arc_scene_Element *) NULL_CHECK((frame[1].o)))->F_name = (jref) (((jobject) createStringLiteral(ctx, u8"playerlist"_j)));
	LINE_NUMBER(34);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_PlayerListFragment_invoke_arc_func_Boolp_3(ctx);
		auto proxy = (mindustry_ui_fragments_PlayerListFragment_invoke_arc_func_Boolp_3 *) gcAlloc(ctx, &class_mindustry_ui_fragments_PlayerListFragment_invoke_arc_func_Boolp_3);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_visible_arc_func_Boolp_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_visible_arc_func_Boolp_R_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(35);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_PlayerListFragment_invoke_java_lang_Runnable_32(ctx);
		auto proxy = (mindustry_ui_fragments_PlayerListFragment_invoke_java_lang_Runnable_32 *) gcAlloc(ctx, &class_mindustry_ui_fragments_PlayerListFragment_invoke_java_lang_Runnable_32);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_update_java_lang_Runnable_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_update_java_lang_Runnable_R_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(50);
	sp[0].o = frame[1].o;
	clinit_mindustry_gen_Tex(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Tex_buttonTrans;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_PlayerListFragment_invoke_arc_func_Cons_9(ctx);
		auto proxy = (mindustry_ui_fragments_PlayerListFragment_invoke_arc_func_Cons_9 *) gcAlloc(ctx, &class_mindustry_ui_fragments_PlayerListFragment_invoke_arc_func_Cons_9);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	clinit_arc_scene_event_Touchable(ctx);
	sp[1].o = (jobject)SF_arc_scene_event_Touchable_enabled;
	LINE_NUMBER(70);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_touchable_arc_scene_event_Touchable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_touchable_arc_scene_event_Touchable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_margin_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_margin_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(14.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_minWidth_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_minWidth_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(360.0f)));
	LINE_NUMBER(71);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_PlayerListFragment_lambda$build$3_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PlayerListFragment:lambda$build$3", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(51);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_PlayerListFragment_invoke_arc_func_Prov_1(ctx);
		auto proxy = (mindustry_ui_fragments_PlayerListFragment_invoke_arc_func_Prov_1 *) gcAlloc(ctx, &class_mindustry_ui_fragments_PlayerListFragment_invoke_arc_func_Prov_1);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_label_arc_func_Prov_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_label_arc_func_Prov_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(52);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(54);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = jobject(nullptr);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_PlayerListFragment_invoke_arc_func_Cons_10(ctx);
		auto proxy = (mindustry_ui_fragments_PlayerListFragment_invoke_arc_func_Cons_10 *) gcAlloc(ctx, &class_mindustry_ui_fragments_PlayerListFragment_invoke_arc_func_Cons_10);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[1].o = (jobject)((func_arc_scene_ui_layout_Table_field_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_field_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[1].o = (jobject)((func_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell])(ctx, sp[1].o);
	sp[1].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[1].o, (jfloat(8.0f)));
	sp[1].o = (jobject)((func_arc_scene_ui_layout_Cell_name_java_lang_String_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_name_java_lang_String_R_arc_scene_ui_layout_Cell])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"search"_j))));
	sp[1].o = (jobject)((func_arc_scene_ui_layout_Cell_maxTextLength_int_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_maxTextLength_int_R_arc_scene_ui_layout_Cell])(ctx, sp[1].o, (40));
	sp[1].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, sp[1].o);
	((mindustry_ui_fragments_PlayerListFragment *) NULL_CHECK(sp[0].o))->F_search = (jref) (checkCast(ctx, &class_arc_scene_ui_TextField, sp[1].o));
	LINE_NUMBER(55);
	sp[0].o = (jobject)((mindustry_ui_fragments_PlayerListFragment *) NULL_CHECK((frame[0].o)))->F_search;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"players.search"_j))));
	((func_arc_scene_ui_TextField_setMessageText_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_setMessageText_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(57);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(58);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_ui_fragments_PlayerListFragment *) NULL_CHECK((frame[0].o)))->F_content;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_pane_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_pane_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_scrollX_boolean_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_scrollX_boolean_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(59);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(61);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_PlayerListFragment_invoke_arc_func_Cons_11(ctx);
		auto proxy = (mindustry_ui_fragments_PlayerListFragment_invoke_arc_func_Cons_11 *) gcAlloc(ctx, &class_mindustry_ui_fragments_PlayerListFragment_invoke_arc_func_Cons_11);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	jfloat temp0 = jfloat(0);
	LINE_NUMBER(68);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_margin_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_margin_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(10.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(70);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_PlayerListFragment_lambda$build$6_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PlayerListFragment:lambda$build$6", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(62);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(50.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_fillY_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_fillY_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(63);
	((arc_scene_Element *) NULL_CHECK((frame[1].o)))->F_name = (jref) (((jobject) createStringLiteral(ctx, u8"menu"_j)));
	LINE_NUMBER(65);
	sp[0].o = frame[1].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@server.bans"_j));
	clinit_mindustry_Vars(ctx);
	sp[2].o = (jobject)SF_mindustry_Vars_ui;
	sp[2].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[2].o))->F_bans;
	sp[3].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[2].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_PlayerListFragment_invoke_java_lang_Runnable_33(ctx);
		auto proxy = (mindustry_ui_fragments_PlayerListFragment_invoke_java_lang_Runnable_33 *) gcAlloc(ctx, &class_mindustry_ui_fragments_PlayerListFragment_invoke_java_lang_Runnable_33);
		proxy->F_field0 = (jref) sp[2].o;
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_PlayerListFragment_invoke_arc_func_Boolf_10(ctx);
		auto proxy = (mindustry_ui_fragments_PlayerListFragment_invoke_arc_func_Boolf_10 *) gcAlloc(ctx, &class_mindustry_ui_fragments_PlayerListFragment_invoke_arc_func_Boolf_10);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_disabled_arc_func_Boolf_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_disabled_arc_func_Boolf_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(66);
	sp[0].o = frame[1].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@server.admins"_j));
	clinit_mindustry_Vars(ctx);
	sp[2].o = (jobject)SF_mindustry_Vars_ui;
	sp[2].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[2].o))->F_admins;
	sp[3].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[2].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_PlayerListFragment_invoke_java_lang_Runnable_34(ctx);
		auto proxy = (mindustry_ui_fragments_PlayerListFragment_invoke_java_lang_Runnable_34 *) gcAlloc(ctx, &class_mindustry_ui_fragments_PlayerListFragment_invoke_java_lang_Runnable_34);
		proxy->F_field0 = (jref) sp[2].o;
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_PlayerListFragment_invoke_arc_func_Boolf_11(ctx);
		auto proxy = (mindustry_ui_fragments_PlayerListFragment_invoke_arc_func_Boolf_11 *) gcAlloc(ctx, &class_mindustry_ui_fragments_PlayerListFragment_invoke_arc_func_Boolf_11);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_disabled_arc_func_Boolf_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_disabled_arc_func_Boolf_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(67);
	sp[0].o = frame[1].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@close"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_PlayerListFragment_invoke_java_lang_Runnable_35(ctx);
		auto proxy = (mindustry_ui_fragments_PlayerListFragment_invoke_java_lang_Runnable_35 *) gcAlloc(ctx, &class_mindustry_ui_fragments_PlayerListFragment_invoke_java_lang_Runnable_35);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(68);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_fragments_PlayerListFragment_lambda$build$8_arc_scene_ui_TextButton_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PlayerListFragment:lambda$build$8", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_PlayerListFragment(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(66);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_fragments_PlayerListFragment_lambda$build$7_arc_scene_ui_TextButton_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PlayerListFragment:lambda$build$7", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_PlayerListFragment(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(65);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_PlayerListFragment_lambda$build$5_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PlayerListFragment:lambda$build$5", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(54);
	((func_mindustry_ui_fragments_PlayerListFragment_rebuild) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_fragments_PlayerListFragment_rebuild])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_ui_fragments_PlayerListFragment_lambda$build$4_R_java_lang_CharSequence(jcontext ctx) {
	jtype frame[6];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PlayerListFragment:lambda$build$4", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_PlayerListFragment(ctx);
	{
	LINE_NUMBER(51);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	clinit_mindustry_gen_Groups(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Groups_player;
	jint temp0 = (jint)((func_mindustry_entities_EntityGroup_size_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_size_R_int])(ctx, sp[1].o);
	sp += 1;
	if (temp0 != (jint(1))) goto label_1;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"players.single"_j));
	goto label_2;
label_1:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"players"_j));
label_2:;
	{
	sp -= 2;
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	clinit_mindustry_gen_Groups(ctx);
	sp[3].o = (jobject)SF_mindustry_gen_Groups_player;
	jint temp1 = (jint)((func_mindustry_entities_EntityGroup_size_R_int) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_size_R_int])(ctx, sp[3].o);
	sp[3].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, temp1);
	ARRAY_ACCESS(jobject, sp[2].o, temp0) = sp[3].o;
	sp[0].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_PlayerListFragment_lambda$build$2(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PlayerListFragment:lambda$build$2", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(36);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_active_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_active_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isGame_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isGame_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(37);
	((mindustry_ui_fragments_PlayerListFragment *) NULL_CHECK((frame[0].o)))->F_visible = (jint(0));
	LINE_NUMBER(38);
	popStackFrame(ctx);
	return;
	}
label_2:;
	{
	LINE_NUMBER(41);
	if (((jint)((mindustry_ui_fragments_PlayerListFragment *) NULL_CHECK((frame[0].o)))->F_visible) == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_fragments_PlayerListFragment *) NULL_CHECK((frame[0].o)))->F_timer;
	jint temp0 = (jint)((func_arc_util_Interval_get_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_Interval_get_float_R_boolean])(ctx, sp[0].o, (jfloat(20.0f)));
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(42);
	((func_mindustry_ui_fragments_PlayerListFragment_rebuild) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_fragments_PlayerListFragment_rebuild])(ctx, (frame[0].o));
	LINE_NUMBER(43);
	sp[0].o = (jobject)((mindustry_ui_fragments_PlayerListFragment *) NULL_CHECK((frame[0].o)))->F_content;
	((func_arc_scene_ui_layout_Table_pack) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_pack])(ctx, sp[0].o);
	LINE_NUMBER(44);
	sp[0].o = (jobject)((mindustry_ui_fragments_PlayerListFragment *) NULL_CHECK((frame[0].o)))->F_content;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_graphics;
	jfloat temp0 = (jfloat)((func_arc_Graphics_getDeltaTime_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Graphics_getDeltaTime_R_float])(ctx, sp[1].o);
	((func_arc_scene_ui_layout_Table_act_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_act_float])(ctx, sp[0].o, temp0);
	LINE_NUMBER(46);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	((func_arc_scene_Scene_act_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_act_float])(ctx, sp[0].o, (jfloat(0)));
	}
label_4:;
	LINE_NUMBER(48);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_ui_fragments_PlayerListFragment_lambda$build$1_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PlayerListFragment:lambda$build$1", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(34);
	popStackFrame(ctx);
	return ((jint)((mindustry_ui_fragments_PlayerListFragment *) NULL_CHECK((frame[0].o)))->F_visible);
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_ui_fragments_PlayerListFragment[] {
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
	(void *) M_mindustry_ui_fragments_PlayerListFragment_build_arc_scene_Group,
	(void *) M_mindustry_ui_fragments_PlayerListFragment_rebuild,
	(void *) M_mindustry_ui_fragments_PlayerListFragment_toggle,
	(void *) M_mindustry_ui_fragments_PlayerListFragment_lambda$rebuild$1_mindustry_gen_Player_R_boolean,
	(void *) M_mindustry_ui_fragments_PlayerListFragment_lambda$build$0_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_fragments_PlayerListFragment_lambda$build$3_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_fragments_PlayerListFragment_lambda$build$6_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_fragments_PlayerListFragment_lambda$build$5_java_lang_String,
	(void *) M_mindustry_ui_fragments_PlayerListFragment_lambda$build$2,
	(void *) M_mindustry_ui_fragments_PlayerListFragment_lambda$build$1_R_boolean,
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
	{ "rebuild", "()V" },
	{ "toggle", "()V" },
	{ "lambda$rebuild$1", "(Lmindustry/gen/Player;)Z" },
	{ "lambda$build$0", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$build$3", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$build$6", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$build$5", "(Ljava/lang/String;)V" },
	{ "lambda$build$2", "()V" },
	{ "lambda$build$1", "()Z" },
};

static FieldMetadata fields[] {
	{ "content", &class_arc_scene_ui_layout_Table, offsetof(mindustry_ui_fragments_PlayerListFragment, F_content), "Larc/scene/ui/layout/Table;", 1 },
	{ "visible", &class_boolean, offsetof(mindustry_ui_fragments_PlayerListFragment, F_visible), "Z", 2 },
	{ "timer", &class_arc_util_Interval, offsetof(mindustry_ui_fragments_PlayerListFragment, F_timer), "Larc/util/Interval;", 2 },
	{ "search", &class_arc_scene_ui_TextField, offsetof(mindustry_ui_fragments_PlayerListFragment, F_search), "Larc/scene/ui/TextField;", 2 },
	{ "players", &class_arc_struct_Seq, offsetof(mindustry_ui_fragments_PlayerListFragment, F_players), "Larc/struct/Seq;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ui_fragments_PlayerListFragment, 0, "()V", 1 },
	{ "build", (intptr_t) M_mindustry_ui_fragments_PlayerListFragment_build_arc_scene_Group, VTABLE_mindustry_ui_fragments_PlayerListFragment_build_arc_scene_Group, "(Larc/scene/Group;)V", 1 },
	{ "rebuild", (intptr_t) M_mindustry_ui_fragments_PlayerListFragment_rebuild, VTABLE_mindustry_ui_fragments_PlayerListFragment_rebuild, "()V", 1 },
	{ "toggle", (intptr_t) M_mindustry_ui_fragments_PlayerListFragment_toggle, VTABLE_mindustry_ui_fragments_PlayerListFragment_toggle, "()V", 1 },
	{ "lambda$rebuild$18", (intptr_t) SM_mindustry_ui_fragments_PlayerListFragment_lambda$rebuild$18_mindustry_gen_Player, 0, "(Lmindustry/gen/Player;)V", 4106 },
	{ "lambda$rebuild$19", (intptr_t) SM_mindustry_ui_fragments_PlayerListFragment_lambda$rebuild$19_mindustry_gen_Player_java_lang_String, 0, "(Lmindustry/gen/Player;Ljava/lang/String;)V", 4106 },
	{ "lambda$rebuild$4", (intptr_t) SM_mindustry_ui_fragments_PlayerListFragment_lambda$rebuild$4_mindustry_gen_Player_boolean, 0, "(Lmindustry/gen/Player;Z)V", 4106 },
	{ "lambda$rebuild$5", (intptr_t) SM_mindustry_ui_fragments_PlayerListFragment_lambda$rebuild$5_mindustry_gen_Player_arc_scene_ui_TextButton$TextButtonStyle_mindustry_ui_dialogs_BaseDialog_boolean_arc_scene_ui_layout_Table, 0, "(Lmindustry/gen/Player;Larc/scene/ui/TextButton$TextButtonStyle;Lmindustry/ui/dialogs/BaseDialog;ZLarc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$rebuild$17", (intptr_t) SM_mindustry_ui_fragments_PlayerListFragment_lambda$rebuild$17_mindustry_gen_Player_arc_scene_ui_TextButton_R_boolean, 0, "(Lmindustry/gen/Player;Larc/scene/ui/TextButton;)Z", 4106 },
	{ "lambda$rebuild$14", (intptr_t) SM_mindustry_ui_fragments_PlayerListFragment_lambda$rebuild$14_mindustry_ui_dialogs_BaseDialog_mindustry_gen_Player, 0, "(Lmindustry/ui/dialogs/BaseDialog;Lmindustry/gen/Player;)V", 4106 },
	{ "lambda$rebuild$16", (intptr_t) SM_mindustry_ui_fragments_PlayerListFragment_lambda$rebuild$16_java_lang_String_mindustry_gen_Player, 0, "(Ljava/lang/String;Lmindustry/gen/Player;)V", 4106 },
	{ "lambda$rebuild$15", (intptr_t) SM_mindustry_ui_fragments_PlayerListFragment_lambda$rebuild$15_java_lang_String_mindustry_gen_Player, 0, "(Ljava/lang/String;Lmindustry/gen/Player;)V", 4106 },
	{ "lambda$rebuild$11", (intptr_t) SM_mindustry_ui_fragments_PlayerListFragment_lambda$rebuild$11_mindustry_gen_Player_mindustry_ui_dialogs_BaseDialog, 0, "(Lmindustry/gen/Player;Lmindustry/ui/dialogs/BaseDialog;)V", 4106 },
	{ "lambda$rebuild$13", (intptr_t) SM_mindustry_ui_fragments_PlayerListFragment_lambda$rebuild$13_mindustry_gen_Player_mindustry_game_Team_arc_scene_ui_ImageButton_R_boolean, 0, "(Lmindustry/gen/Player;Lmindustry/game/Team;Larc/scene/ui/ImageButton;)Z", 4106 },
	{ "lambda$rebuild$12", (intptr_t) SM_mindustry_ui_fragments_PlayerListFragment_lambda$rebuild$12_mindustry_gen_Player_mindustry_game_Team_mindustry_ui_dialogs_BaseDialog, 0, "(Lmindustry/gen/Player;Lmindustry/game/Team;Lmindustry/ui/dialogs/BaseDialog;)V", 4106 },
	{ "lambda$rebuild$10", (intptr_t) SM_mindustry_ui_fragments_PlayerListFragment_lambda$rebuild$10_mindustry_gen_Player_mindustry_ui_dialogs_BaseDialog, 0, "(Lmindustry/gen/Player;Lmindustry/ui/dialogs/BaseDialog;)V", 4106 },
	{ "lambda$rebuild$8", (intptr_t) SM_mindustry_ui_fragments_PlayerListFragment_lambda$rebuild$8_mindustry_gen_Player_mindustry_ui_dialogs_BaseDialog, 0, "(Lmindustry/gen/Player;Lmindustry/ui/dialogs/BaseDialog;)V", 4106 },
	{ "lambda$rebuild$9", (intptr_t) SM_mindustry_ui_fragments_PlayerListFragment_lambda$rebuild$9_mindustry_gen_Player, 0, "(Lmindustry/gen/Player;)V", 4106 },
	{ "lambda$rebuild$6", (intptr_t) SM_mindustry_ui_fragments_PlayerListFragment_lambda$rebuild$6_mindustry_gen_Player_mindustry_ui_dialogs_BaseDialog, 0, "(Lmindustry/gen/Player;Lmindustry/ui/dialogs/BaseDialog;)V", 4106 },
	{ "lambda$rebuild$7", (intptr_t) SM_mindustry_ui_fragments_PlayerListFragment_lambda$rebuild$7_mindustry_gen_Player, 0, "(Lmindustry/gen/Player;)V", 4106 },
	{ "lambda$rebuild$3", (intptr_t) SM_mindustry_ui_fragments_PlayerListFragment_lambda$rebuild$3_mindustry_gen_Player_R_boolean, 0, "(Lmindustry/gen/Player;)Z", 4106 },
	{ "lambda$rebuild$2", (intptr_t) SM_mindustry_ui_fragments_PlayerListFragment_lambda$rebuild$2_mindustry_gen_Player_boolean, 0, "(Lmindustry/gen/Player;Z)V", 4106 },
	{ "lambda$rebuild$1", (intptr_t) M_mindustry_ui_fragments_PlayerListFragment_lambda$rebuild$1_mindustry_gen_Player_R_boolean, VTABLE_mindustry_ui_fragments_PlayerListFragment_lambda$rebuild$1_mindustry_gen_Player_R_boolean, "(Lmindustry/gen/Player;)Z", 4098 },
	{ "lambda$rebuild$0", (intptr_t) SM_mindustry_ui_fragments_PlayerListFragment_lambda$rebuild$0_mindustry_gen_Player_R_boolean, 0, "(Lmindustry/gen/Player;)Z", 4106 },
	{ "lambda$build$0", (intptr_t) M_mindustry_ui_fragments_PlayerListFragment_lambda$build$0_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_fragments_PlayerListFragment_lambda$build$0_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$build$3", (intptr_t) M_mindustry_ui_fragments_PlayerListFragment_lambda$build$3_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_fragments_PlayerListFragment_lambda$build$3_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$build$6", (intptr_t) M_mindustry_ui_fragments_PlayerListFragment_lambda$build$6_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_fragments_PlayerListFragment_lambda$build$6_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$build$8", (intptr_t) SM_mindustry_ui_fragments_PlayerListFragment_lambda$build$8_arc_scene_ui_TextButton_R_boolean, 0, "(Larc/scene/ui/TextButton;)Z", 4106 },
	{ "lambda$build$7", (intptr_t) SM_mindustry_ui_fragments_PlayerListFragment_lambda$build$7_arc_scene_ui_TextButton_R_boolean, 0, "(Larc/scene/ui/TextButton;)Z", 4106 },
	{ "lambda$build$5", (intptr_t) M_mindustry_ui_fragments_PlayerListFragment_lambda$build$5_java_lang_String, VTABLE_mindustry_ui_fragments_PlayerListFragment_lambda$build$5_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$build$4", (intptr_t) SM_mindustry_ui_fragments_PlayerListFragment_lambda$build$4_R_java_lang_CharSequence, 0, "()Ljava/lang/CharSequence;", 4106 },
	{ "lambda$build$2", (intptr_t) M_mindustry_ui_fragments_PlayerListFragment_lambda$build$2, VTABLE_mindustry_ui_fragments_PlayerListFragment_lambda$build$2, "()V", 4098 },
	{ "lambda$build$1", (intptr_t) M_mindustry_ui_fragments_PlayerListFragment_lambda$build$1_R_boolean, VTABLE_mindustry_ui_fragments_PlayerListFragment_lambda$build$1_R_boolean, "()Z", 4098 },
};

Class class_mindustry_ui_fragments_PlayerListFragment{
		.nativeName = (intptr_t) "mindustry/ui/fragments/PlayerListFragment",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_ui_fragments_PlayerListFragment),
		.classVtable = (intptr_t) vtable_mindustry_ui_fragments_PlayerListFragment,
		.staticInitializer = (intptr_t) clinit_mindustry_ui_fragments_PlayerListFragment,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_ui_fragments_PlayerListFragment,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 33,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 21,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_ui_fragments_PlayerListFragment = registerClass(&class_mindustry_ui_fragments_PlayerListFragment);

}
