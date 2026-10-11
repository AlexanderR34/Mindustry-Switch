#include "mindustry/ui/fragments/HintsFragment.h"
#include "arc/scene/actions/ParallelAction.h"
#include "mindustry/game/EventType_BlockBuildBeginEvent.h"
#include "arc/Input.h"
#include "arc/Events.h"
#include "arc/func/Boolp.h"
#include "mindustry/world/blocks/ConstructBlock_ConstructBuild.h"
#include "mindustry/ui/fragments/HintsFragment_invoke_arc_func_Cons_10.h"
#include "java/lang/Runnable.h"
#include "mindustry/ui/fragments/HintsFragment_invoke_arc_func_Cons_11.h"
#include "java/lang/reflect/Constructor.h"
#include "arc/scene/event/Touchable.h"
#include "mindustry/content/SectorPresets.h"
#include "mindustry/core/Renderer.h"
#include "arc/struct/Seq.h"
#include "arc/scene/ui/layout/Cell.h"
#include "mindustry/ui/fragments/HudFragment.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/world/Tile.h"
#include "arc/Settings.h"
#include "arc/func/Boolf.h"
#include "arc/func/Floatf.h"
#include "arc/Core.h"
#include "java/lang/reflect/Field.h"
#include "mindustry/gen/Unit.h"
#include "mindustry/game/Saves.h"
#include "mindustry/ui/fragments/HintsFragment_DefaultHint.h"
#include "arc/math/Interp.h"
#include "arc/util/Nullable.h"
#include "mindustry/gen/Building.h"
#include "mindustry/game/EventType_BuildingCommandEvent.h"
#include "java/lang/Object.h"
#include "mindustry/ui/fragments/HintsFragment_invoke_arc_func_Boolf_7.h"
#include "mindustry/ui/fragments/HintsFragment_invoke_arc_func_Boolf_6.h"
#include "mindustry/ui/fragments/HintsFragment_invoke_arc_func_Boolf_5.h"
#include "mindustry/ui/fragments/HintsFragment_invoke_arc_func_Boolf_4.h"
#include "arc/struct/ObjectSet.h"
#include "mindustry/ui/fragments/HintsFragment_invoke_arc_func_Boolp_3.h"
#include "mindustry/ui/fragments/HintsFragment_invoke_arc_func_Boolp_2.h"
#include "mindustry/type/SectorPreset.h"
#include "mindustry/game/EventType_ResetEvent.h"
#include "mindustry/world/Block.h"
#include "mindustry/game/Rules.h"
#include "arc/scene/ui/TextButton_TextButtonStyle.h"
#include "arc/scene/Action.h"
#include "arc/func/Cons.h"
#include "java/lang/String.h"
#include "arc/scene/ui/layout/WidgetGroup.h"
#include "mindustry/ui/fragments/HintsFragment.h"
#include "arc/scene/style/Drawable.h"
#include "mindustry/core/Control.h"
#include "arc/scene/ui/layout/Scl.h"
#include "mindustry/ui/fragments/HintsFragment_invoke_java_lang_Runnable_7.h"
#include "mindustry/ui/fragments/HintsFragment_invoke_java_lang_Runnable_6.h"
#include "mindustry/ui/fragments/HintsFragment_invoke_java_lang_Runnable_5.h"
#include "mindustry/ui/fragments/HintsFragment_invoke_arc_func_Cons_9.h"
#include "arc/scene/Group.h"
#include "arc/scene/ui/layout/Table.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/type/Sector.h"
#include "mindustry/ui/fragments/HintsFragment_invoke_java_lang_Runnable_4.h"
#include "mindustry/ui/fragments/HintsFragment_invoke_arc_func_Cons_8.h"
#include "mindustry/ui/Styles.h"
#include "mindustry/ui/fragments/HintsFragment_invoke_arc_func_Cons_7.h"
#include "mindustry/ui/fragments/HintsFragment_invoke_arc_func_Cons_6.h"
#include "mindustry/core/UI.h"
#include "arc/scene/actions/Actions.h"
#include "java/lang/CharSequence.h"
#include "mindustry/ui/fragments/HintsFragment_Hint.h"
#include "arc/scene/Element.h"
#include "arc/scene/actions/TranslateByAction.h"
#include "mindustry/game/EventType_Trigger.h"
#include "arc/scene/actions/AlphaAction.h"
#include "mindustry/game/EventType_BlockBuildEndEvent.h"
#include "mindustry/gen/Player.h"
#include "mindustry/world/blocks/payloads/PayloadBlock_PayloadBlockBuild.h"
#include "mindustry/ui/fragments/HintsFragment_invoke_arc_func_Floatf_1.h"
#include "java/lang/Class.h"
#include "mindustry/game/Team.h"
#include "mindustry/Vars.h"
#include "mindustry/core/GameState.h"
#include "arc/scene/actions/RemoveActorAction.h"
#include "mindustry/core/World.h"

extern "C" {

jobject SF_mindustry_ui_fragments_HintsFragment_isTutorial;
jfloat SF_mindustry_ui_fragments_HintsFragment_foutTime;

void mark_mindustry_ui_fragments_HintsFragment(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_ui_fragments_HintsFragment_isTutorial)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_fragments_HintsFragment_isTutorial)->clazz)->markFunction)((jobject) SF_mindustry_ui_fragments_HintsFragment_isTutorial, mark, depth + 1);
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
	auto self = (mindustry_ui_fragments_HintsFragment *) object;
	if (self->F_hints)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_hints)->clazz)->markFunction)((jobject) self->F_hints, mark, depth + 1);
	if (self->F_current)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_current)->clazz)->markFunction)((jobject) self->F_current, mark, depth + 1);
	if (self->F_group)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_group)->clazz)->markFunction)((jobject) self->F_group, mark, depth + 1);
	if (self->F_events)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_events)->clazz)->markFunction)((jobject) self->F_events, mark, depth + 1);
	if (self->F_placedBlocks)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_placedBlocks)->clazz)->markFunction)((jobject) self->F_placedBlocks, mark, depth + 1);
	if (self->F_last)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_last)->clazz)->markFunction)((jobject) self->F_last, mark, depth + 1);
}

void init_mindustry_ui_fragments_HintsFragment(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HintsFragment:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HintsFragment(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(29);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(34);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	sp[2].o = (jobject)SM_mindustry_ui_fragments_HintsFragment$DefaultHint_values_R_Array1_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	sp[1].o = (jobject)((func_arc_struct_Seq_add_Array1_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_add_Array1_java_lang_Object_R_arc_struct_Seq])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_arc_struct_Seq_as_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_as_R_arc_struct_Seq])(ctx, sp[1].o);
	((mindustry_ui_fragments_HintsFragment *) NULL_CHECK(sp[0].o))->F_hints = (jref) sp[1].o;
	LINE_NUMBER(37);
	sp[0].o = frame[0].o;
	clinit_arc_scene_ui_layout_WidgetGroup(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_ui_layout_WidgetGroup);
	init_arc_scene_ui_layout_WidgetGroup(ctx, sp[1].o);
	((mindustry_ui_fragments_HintsFragment *) NULL_CHECK(sp[0].o))->F_group = (jref) sp[1].o;
	LINE_NUMBER(38);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectSet(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectSet);
	init_arc_struct_ObjectSet(ctx, sp[1].o);
	((mindustry_ui_fragments_HintsFragment *) NULL_CHECK(sp[0].o))->F_events = (jref) sp[1].o;
	LINE_NUMBER(39);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectSet(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectSet);
	init_arc_struct_ObjectSet(ctx, sp[1].o);
	((mindustry_ui_fragments_HintsFragment *) NULL_CHECK(sp[0].o))->F_placedBlocks = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_HintsFragment_build_arc_scene_Group(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HintsFragment:build", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(43);
	sp[0].o = (jobject)((mindustry_ui_fragments_HintsFragment *) NULL_CHECK((frame[0].o)))->F_group;
	((func_arc_scene_Group_setFillParent_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Group_setFillParent_boolean])(ctx, sp[0].o, (jint(1)));
	LINE_NUMBER(44);
	sp[0].o = (jobject)((mindustry_ui_fragments_HintsFragment *) NULL_CHECK((frame[0].o)))->F_group;
	clinit_arc_scene_event_Touchable(ctx);
	sp[1].o = (jobject)SF_arc_scene_event_Touchable_childrenOnly;
	((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_touchable = (jref) sp[1].o;
	LINE_NUMBER(45);
	sp[0].o = (jobject)((mindustry_ui_fragments_HintsFragment *) NULL_CHECK((frame[0].o)))->F_group;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HintsFragment_invoke_arc_func_Boolp_2(ctx);
		auto proxy = (mindustry_ui_fragments_HintsFragment_invoke_arc_func_Boolp_2 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HintsFragment_invoke_arc_func_Boolp_2);
		sp[1].o = (jobject) proxy;
	}
	((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_visibility = (jref) sp[1].o;
	LINE_NUMBER(46);
	sp[0].o = (jobject)((mindustry_ui_fragments_HintsFragment *) NULL_CHECK((frame[0].o)))->F_group;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HintsFragment_invoke_java_lang_Runnable_4(ctx);
		auto proxy = (mindustry_ui_fragments_HintsFragment_invoke_java_lang_Runnable_4 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HintsFragment_invoke_java_lang_Runnable_4);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_Group_update_java_lang_Runnable_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Group_update_java_lang_Runnable_R_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(70);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_ui_fragments_HintsFragment *) NULL_CHECK((frame[0].o)))->F_group;
	((func_arc_scene_Group_addChild_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Group_addChild_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(72);
	((func_mindustry_ui_fragments_HintsFragment_checkNext) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_fragments_HintsFragment_checkNext])(ctx, (frame[0].o));
	LINE_NUMBER(74);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$BlockBuildEndEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HintsFragment_invoke_arc_func_Cons_6(ctx);
		auto proxy = (mindustry_ui_fragments_HintsFragment_invoke_arc_func_Cons_6 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HintsFragment_invoke_arc_func_Cons_6);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(84);
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[0].o = (jobject)SF_mindustry_game_EventType$Trigger_cannotUpgrade;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HintsFragment_invoke_java_lang_Runnable_5(ctx);
		auto proxy = (mindustry_ui_fragments_HintsFragment_invoke_java_lang_Runnable_5 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HintsFragment_invoke_java_lang_Runnable_5);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_run_java_lang_Object_java_lang_Runnable(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(85);
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[0].o = (jobject)SF_mindustry_game_EventType$Trigger_fireCreate;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HintsFragment_invoke_java_lang_Runnable_6(ctx);
		auto proxy = (mindustry_ui_fragments_HintsFragment_invoke_java_lang_Runnable_6 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HintsFragment_invoke_java_lang_Runnable_6);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_run_java_lang_Object_java_lang_Runnable(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(87);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$ResetEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HintsFragment_invoke_arc_func_Cons_7(ctx);
		auto proxy = (mindustry_ui_fragments_HintsFragment_invoke_arc_func_Cons_7 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HintsFragment_invoke_arc_func_Cons_7);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(92);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$BuildingCommandEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HintsFragment_invoke_arc_func_Cons_8(ctx);
		auto proxy = (mindustry_ui_fragments_HintsFragment_invoke_arc_func_Cons_8 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HintsFragment_invoke_arc_func_Cons_8);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(98);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$BlockBuildBeginEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HintsFragment_invoke_arc_func_Cons_9(ctx);
		auto proxy = (mindustry_ui_fragments_HintsFragment_invoke_arc_func_Cons_9 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HintsFragment_invoke_arc_func_Cons_9);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(103);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_HintsFragment_checkNext(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HintsFragment:checkNext", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(106);
	sp[0].o = (jobject)((mindustry_ui_fragments_HintsFragment *) NULL_CHECK((frame[0].o)))->F_current;
	if (sp[0].o == nullptr) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(108);
	sp[0].o = (jobject)((mindustry_ui_fragments_HintsFragment *) NULL_CHECK((frame[0].o)))->F_hints;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HintsFragment_invoke_arc_func_Boolf_4(ctx);
		auto proxy = (mindustry_ui_fragments_HintsFragment_invoke_arc_func_Boolf_4 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HintsFragment_invoke_arc_func_Boolf_4);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_removeAll_arc_func_Boolf_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_removeAll_arc_func_Boolf_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(109);
	sp[0].o = (jobject)((mindustry_ui_fragments_HintsFragment *) NULL_CHECK((frame[0].o)))->F_hints;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HintsFragment_invoke_arc_func_Floatf_1(ctx);
		auto proxy = (mindustry_ui_fragments_HintsFragment_invoke_arc_func_Floatf_1 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HintsFragment_invoke_arc_func_Floatf_1);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_sort_arc_func_Floatf_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_sort_arc_func_Floatf_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(111);
	sp[0].o = (jobject)((mindustry_ui_fragments_HintsFragment *) NULL_CHECK((frame[0].o)))->F_hints;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HintsFragment_invoke_arc_func_Boolf_5(ctx);
		auto proxy = (mindustry_ui_fragments_HintsFragment_invoke_arc_func_Boolf_5 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HintsFragment_invoke_arc_func_Boolf_5);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_find_arc_func_Boolf_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_find_arc_func_Boolf_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	frame[1].o = (checkCast(ctx, &class_mindustry_ui_fragments_HintsFragment$Hint, sp[0].o));
	LINE_NUMBER(112);
	if ((frame[1].o) == nullptr) goto label_5;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	jint temp0 = (jint)((func_mindustry_core_Renderer_isCutscene_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_Renderer_isCutscene_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_5;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isGame_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isGame_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(113);
	sp[0].o = (jobject)((mindustry_ui_fragments_HintsFragment *) NULL_CHECK((frame[0].o)))->F_hints;
	jint temp0 = (jint)((func_arc_struct_Seq_remove_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_remove_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(114);
	((func_mindustry_ui_fragments_HintsFragment_display_mindustry_ui_fragments_HintsFragment$Hint) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_fragments_HintsFragment_display_mindustry_ui_fragments_HintsFragment$Hint])(ctx, (frame[0].o), (frame[1].o));
	}
label_5:;
	LINE_NUMBER(116);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_HintsFragment_display_mindustry_ui_fragments_HintsFragment$Hint(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HintsFragment:display", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(119);
	sp[0].o = (jobject)((mindustry_ui_fragments_HintsFragment *) NULL_CHECK((frame[0].o)))->F_current;
	if (sp[0].o == nullptr) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(121);
	sp[0].o = (jobject)((mindustry_ui_fragments_HintsFragment *) NULL_CHECK((frame[0].o)))->F_group;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HintsFragment_invoke_arc_func_Cons_10(ctx);
		auto proxy = (mindustry_ui_fragments_HintsFragment_invoke_arc_func_Cons_10 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HintsFragment_invoke_arc_func_Cons_10);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_scene_Group_fill_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Group_fill_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(136);
	((mindustry_ui_fragments_HintsFragment *) NULL_CHECK((frame[0].o)))->F_current = (jref) (frame[1].o);
	LINE_NUMBER(137);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_HintsFragment_complete(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HintsFragment:complete", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(141);
	sp[0].o = (jobject)((mindustry_ui_fragments_HintsFragment *) NULL_CHECK((frame[0].o)))->F_current;
	if (sp[0].o != nullptr) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(143);
	sp[0].o = (jobject)((mindustry_ui_fragments_HintsFragment *) NULL_CHECK((frame[0].o)))->F_current;
	((func_mindustry_ui_fragments_HintsFragment$Hint_finish) resolveInterfaceMethod(ctx, &class_mindustry_ui_fragments_HintsFragment$Hint, INDEX_mindustry_ui_fragments_HintsFragment$Hint_finish, sp[0].o))(ctx, sp[0].o);
	LINE_NUMBER(144);
	sp[0].o = (jobject)((mindustry_ui_fragments_HintsFragment *) NULL_CHECK((frame[0].o)))->F_hints;
	sp[1].o = (jobject)((mindustry_ui_fragments_HintsFragment *) NULL_CHECK((frame[0].o)))->F_current;
	jint temp0 = (jint)((func_arc_struct_Seq_remove_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_remove_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(146);
	((func_mindustry_ui_fragments_HintsFragment_hide) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_fragments_HintsFragment_hide])(ctx, (frame[0].o));
	LINE_NUMBER(147);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_HintsFragment_hide(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HintsFragment:hide", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(152);
	sp[0].o = (jobject)((mindustry_ui_fragments_HintsFragment *) NULL_CHECK((frame[0].o)))->F_last;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(153);
	sp[0].o = (jobject)((mindustry_ui_fragments_HintsFragment *) NULL_CHECK((frame[0].o)))->F_last;
	sp[1].o = (jobject)createArray(ctx, &class_arc_scene_Action, (jint(2)));
	jint temp0 = jint(0);
	jfloat temp1 = jfloat(0);
	jfloat temp2 = jfloat(0.6f);
	clinit_arc_math_Interp(ctx);
	sp[2].o = (jobject)SF_arc_math_Interp_smooth;
	sp[2].o = (jobject)SM_arc_scene_actions_Actions_alpha_float_float_arc_math_Interp_R_arc_scene_actions_AlphaAction(ctx, temp1, temp2, sp[2].o);
	jfloat temp3 = jfloat(0);
	jfloat temp4 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, (jfloat(-200.0f)));
	jfloat temp5 = jfloat(0.6f);
	clinit_arc_math_Interp(ctx);
	sp[3].o = (jobject)SF_arc_math_Interp_smooth;
	sp[3].o = (jobject)SM_arc_scene_actions_Actions_translateBy_float_float_float_arc_math_Interp_R_arc_scene_actions_TranslateByAction(ctx, temp3, temp4, temp5, sp[3].o);
	sp[2].o = (jobject)SM_arc_scene_actions_Actions_parallel_arc_scene_Action_arc_scene_Action_R_arc_scene_actions_ParallelAction(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	jint temp6 = jint(1);
	sp[2].o = (jobject)SM_arc_scene_actions_Actions_remove_R_arc_scene_actions_RemoveActorAction(ctx);
	ARRAY_ACCESS(jobject, sp[1].o, temp6) = sp[2].o;
	((func_arc_scene_ui_layout_Table_actions_Array1_arc_scene_Action) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_actions_Array1_arc_scene_Action])(ctx, sp[0].o, sp[1].o);
	}
label_1:;
	{
	LINE_NUMBER(156);
	((mindustry_ui_fragments_HintsFragment *) NULL_CHECK((frame[0].o)))->F_current = (jref) (jobject(nullptr));
	LINE_NUMBER(157);
	((mindustry_ui_fragments_HintsFragment *) NULL_CHECK((frame[0].o)))->F_last = (jref) (jobject(nullptr));
	LINE_NUMBER(158);
	((func_mindustry_ui_fragments_HintsFragment_checkNext) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_fragments_HintsFragment_checkNext])(ctx, (frame[0].o));
	LINE_NUMBER(159);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ui_fragments_HintsFragment_shown_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HintsFragment:shown", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(162);
	sp[0].o = (jobject)((mindustry_ui_fragments_HintsFragment *) NULL_CHECK((frame[0].o)))->F_current;
	if (sp[0].o == nullptr) goto label_1;
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

jbool SM_mindustry_ui_fragments_HintsFragment_isSerpulo_R_boolean(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HintsFragment:isSerpulo", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HintsFragment(ctx);
	{
	LINE_NUMBER(166);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	jint temp0 = (jint)((func_mindustry_game_Rules_hasEnv_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Rules_hasEnv_int_R_boolean])(ctx, sp[0].o, (16));
	if (temp0 != 0) goto label_1;
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

void M_mindustry_ui_fragments_HintsFragment_lambda$display$0_mindustry_ui_fragments_HintsFragment$Hint_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HintsFragment:lambda$display$0", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(122);
	((mindustry_ui_fragments_HintsFragment *) NULL_CHECK((frame[0].o)))->F_last = (jref) (frame[2].o);
	LINE_NUMBER(123);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	LINE_NUMBER(124);
	sp[0].o = frame[2].o;
	clinit_mindustry_ui_Styles(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_Styles_black5;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HintsFragment_invoke_arc_func_Cons_11(ctx);
		auto proxy = (mindustry_ui_fragments_HintsFragment_invoke_arc_func_Cons_11 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HintsFragment_invoke_arc_func_Cons_11);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(128);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	LINE_NUMBER(129);
	sp[0].o = frame[2].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@hint.skip"_j));
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_nonet;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HintsFragment_invoke_java_lang_Runnable_7(ctx);
		auto proxy = (mindustry_ui_fragments_HintsFragment_invoke_java_lang_Runnable_7 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HintsFragment_invoke_java_lang_Runnable_7);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	jfloat temp0 = jfloat(112.0f);
	jfloat temp1 = jfloat(40.0f);
	LINE_NUMBER(133);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0, temp1);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(134);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_HintsFragment_lambda$display$2(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HintsFragment:lambda$display$2", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(130);
	sp[0].o = (jobject)((mindustry_ui_fragments_HintsFragment *) NULL_CHECK((frame[0].o)))->F_current;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(131);
	((func_mindustry_ui_fragments_HintsFragment_complete) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_fragments_HintsFragment_complete])(ctx, (frame[0].o));
	}
label_1:;
	LINE_NUMBER(133);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_ui_fragments_HintsFragment_lambda$display$1_mindustry_ui_fragments_HintsFragment$Hint_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[9];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HintsFragment:lambda$display$1", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HintsFragment(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(125);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)createArray(ctx, &class_arc_scene_Action, (jint(2)));
	jint temp0 = jint(0);
	sp[2].o = (jobject)SM_arc_scene_actions_Actions_alpha_float_R_arc_scene_actions_AlphaAction(ctx, (jfloat(0)));
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	jint temp1 = jint(1);
	jfloat temp2 = jfloat(1);
	jfloat temp3 = jfloat(1);
	clinit_arc_math_Interp(ctx);
	sp[2].o = (jobject)SF_arc_math_Interp_smooth;
	sp[2].o = (jobject)SM_arc_scene_actions_Actions_alpha_float_float_arc_math_Interp_R_arc_scene_actions_AlphaAction(ctx, temp2, temp3, sp[2].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp1) = sp[2].o;
	((func_arc_scene_ui_layout_Table_actions_Array1_arc_scene_Action) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_actions_Array1_arc_scene_Action])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(126);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o), (jfloat(6.0f)));
	sp[1].o = (jobject)((func_mindustry_ui_fragments_HintsFragment$Hint_text_R_java_lang_String) resolveInterfaceMethod(ctx, &class_mindustry_ui_fragments_HintsFragment$Hint, INDEX_mindustry_ui_fragments_HintsFragment$Hint_text_R_java_lang_String, (frame[0].o)))(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp += 1;
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_mobile) == 0) goto label_2;
	}
	(sp++)->f = jfloat(270.0f);
	goto label_3;
label_2:;
	(sp++)->f = jfloat(400.0f);
label_3:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].f);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_labelAlign_int_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_labelAlign_int_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (8));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_wrap_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_wrap_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(127);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_fragments_HintsFragment_lambda$checkNext$0_mindustry_ui_fragments_HintsFragment$Hint_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HintsFragment:lambda$checkNext$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HintsFragment(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(108);
	jint temp0 = (jint)((func_mindustry_ui_fragments_HintsFragment$Hint_valid_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_ui_fragments_HintsFragment$Hint, INDEX_mindustry_ui_fragments_HintsFragment$Hint_valid_R_boolean, (frame[0].o)))(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_ui_fragments_HintsFragment$Hint_finished_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_ui_fragments_HintsFragment$Hint, INDEX_mindustry_ui_fragments_HintsFragment$Hint_finished_R_boolean, (frame[0].o)))(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_ui_fragments_HintsFragment$Hint_show_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_ui_fragments_HintsFragment$Hint, INDEX_mindustry_ui_fragments_HintsFragment$Hint_show_R_boolean, (frame[0].o)))(ctx, (frame[0].o));
	if (temp0 == 0) goto label_2;
	}
	{
	jint temp0 = (jint)((func_mindustry_ui_fragments_HintsFragment$Hint_complete_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_ui_fragments_HintsFragment$Hint, INDEX_mindustry_ui_fragments_HintsFragment$Hint_complete_R_boolean, (frame[0].o)))(ctx, (frame[0].o));
	if (temp0 == 0) goto label_2;
	}
label_1:;
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_HintsFragment_lambda$build$7_mindustry_game_EventType$BlockBuildBeginEvent(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HintsFragment:lambda$build$7", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(99);
	sp[0].o = (jobject)((mindustry_game_EventType$BlockBuildBeginEvent *) NULL_CHECK((frame[1].o)))->F_unit;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	sp[1].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, sp[1].o);
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_game_EventType$BlockBuildBeginEvent *) NULL_CHECK((frame[1].o)))->F_tile;
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_build;
	frame[3].o = sp[0].o;
	if ((isInstance(ctx, (frame[3].o), &class_mindustry_world_blocks_ConstructBlock$ConstructBuild)) == 0) goto label_1;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_world_blocks_ConstructBlock$ConstructBuild, (frame[3].o)));
	sp[0].o = (jobject)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[2].o)))->F_prevBuild;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[2].o)))->F_prevBuild;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HintsFragment_invoke_arc_func_Boolf_6(ctx);
		auto proxy = (mindustry_ui_fragments_HintsFragment_invoke_arc_func_Boolf_6 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HintsFragment_invoke_arc_func_Boolf_6);
		sp[1].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_arc_struct_Seq_contains_arc_func_Boolf_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_arc_func_Boolf_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(100);
	sp[0].o = (jobject)((mindustry_ui_fragments_HintsFragment *) NULL_CHECK((frame[0].o)))->F_events;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_add_java_lang_Object_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"derelictbreak"_j))));
	}
label_1:;
	LINE_NUMBER(102);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_fragments_HintsFragment_lambda$build$8_mindustry_gen_Building_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HintsFragment:lambda$build$8", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HintsFragment(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(99);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	clinit_mindustry_game_Team(ctx);
	sp[1].o = (jobject)SF_mindustry_game_Team_derelict;
	if (sp[0].o != sp[1].o) goto label_1;
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

void M_mindustry_ui_fragments_HintsFragment_lambda$build$6_mindustry_game_EventType$BuildingCommandEvent(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HintsFragment:lambda$build$6", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(93);
	sp[0].o = (jobject)((mindustry_game_EventType$BuildingCommandEvent *) NULL_CHECK((frame[1].o)))->F_building;
	if ((isInstance(ctx, sp[0].o, &class_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(94);
	sp[0].o = (jobject)((mindustry_ui_fragments_HintsFragment *) NULL_CHECK((frame[0].o)))->F_events;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_add_java_lang_Object_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"factorycontrol"_j))));
	}
label_1:;
	LINE_NUMBER(96);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_HintsFragment_lambda$build$5_mindustry_game_EventType$ResetEvent(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HintsFragment:lambda$build$5", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(88);
	sp[0].o = (jobject)((mindustry_ui_fragments_HintsFragment *) NULL_CHECK((frame[0].o)))->F_placedBlocks;
	((func_arc_struct_ObjectSet_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_clear])(ctx, sp[0].o);
	LINE_NUMBER(89);
	sp[0].o = (jobject)((mindustry_ui_fragments_HintsFragment *) NULL_CHECK((frame[0].o)))->F_events;
	((func_arc_struct_ObjectSet_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_clear])(ctx, sp[0].o);
	LINE_NUMBER(90);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_HintsFragment_lambda$build$4(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HintsFragment:lambda$build$4", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(85);
	sp[0].o = (jobject)((mindustry_ui_fragments_HintsFragment *) NULL_CHECK((frame[0].o)))->F_events;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_add_java_lang_Object_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"fire"_j))));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_HintsFragment_lambda$build$3(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HintsFragment:lambda$build$3", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(84);
	sp[0].o = (jobject)((mindustry_ui_fragments_HintsFragment *) NULL_CHECK((frame[0].o)))->F_events;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_add_java_lang_Object_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"cannotupgrade"_j))));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_HintsFragment_lambda$build$2_mindustry_game_EventType$BlockBuildEndEvent(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HintsFragment:lambda$build$2", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(75);
	if (((jint)((mindustry_game_EventType$BlockBuildEndEvent *) NULL_CHECK((frame[1].o)))->F_breaking) != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_game_EventType$BlockBuildEndEvent *) NULL_CHECK((frame[1].o)))->F_unit;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	sp[1].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, sp[1].o);
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	LINE_NUMBER(76);
	sp[0].o = (jobject)((mindustry_ui_fragments_HintsFragment *) NULL_CHECK((frame[0].o)))->F_placedBlocks;
	sp[1].o = (jobject)((mindustry_game_EventType$BlockBuildEndEvent *) NULL_CHECK((frame[1].o)))->F_tile;
	sp[1].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, sp[1].o);
	jint temp0 = (jint)((func_arc_struct_ObjectSet_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_add_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	}
label_1:;
	{
	LINE_NUMBER(79);
	if (((jint)((mindustry_game_EventType$BlockBuildEndEvent *) NULL_CHECK((frame[1].o)))->F_breaking) == 0) goto label_3;
	}
	{
	LINE_NUMBER(80);
	sp[0].o = (jobject)((mindustry_ui_fragments_HintsFragment *) NULL_CHECK((frame[0].o)))->F_events;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_add_java_lang_Object_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"break"_j))));
	}
label_3:;
	LINE_NUMBER(82);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_HintsFragment_lambda$build$1(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HintsFragment:lambda$build$1", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(47);
	sp[0].o = (jobject)((mindustry_ui_fragments_HintsFragment *) NULL_CHECK((frame[0].o)))->F_current;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(49);
	sp[0].o = (jobject)((mindustry_ui_fragments_HintsFragment *) NULL_CHECK((frame[0].o)))->F_current;
	jint temp0 = (jint)((func_mindustry_ui_fragments_HintsFragment$Hint_complete_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_ui_fragments_HintsFragment$Hint, INDEX_mindustry_ui_fragments_HintsFragment$Hint_complete_R_boolean, sp[0].o))(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(50);
	((func_mindustry_ui_fragments_HintsFragment_complete) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_fragments_HintsFragment_complete])(ctx, (frame[0].o));
	goto label_5;
	}
label_3:;
	{
	LINE_NUMBER(51);
	sp[0].o = (jobject)((mindustry_ui_fragments_HintsFragment *) NULL_CHECK((frame[0].o)))->F_current;
	jint temp0 = (jint)((func_mindustry_ui_fragments_HintsFragment$Hint_show_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_ui_fragments_HintsFragment$Hint, INDEX_mindustry_ui_fragments_HintsFragment$Hint_show_R_boolean, sp[0].o))(ctx, sp[0].o);
	if (temp0 != 0) goto label_5;
	}
	{
	LINE_NUMBER(52);
	((func_mindustry_ui_fragments_HintsFragment_hide) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_fragments_HintsFragment_hide])(ctx, (frame[0].o));
	goto label_5;
	}
label_1:;
	{
	LINE_NUMBER(54);
	sp[0].o = (jobject)((mindustry_ui_fragments_HintsFragment *) NULL_CHECK((frame[0].o)))->F_hints;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_5;
	}
	{
	LINE_NUMBER(56);
	sp[0].o = (jobject)((mindustry_ui_fragments_HintsFragment *) NULL_CHECK((frame[0].o)))->F_hints;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HintsFragment_invoke_arc_func_Boolf_7(ctx);
		auto proxy = (mindustry_ui_fragments_HintsFragment_invoke_arc_func_Boolf_7 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HintsFragment_invoke_arc_func_Boolf_7);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_find_arc_func_Boolf_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_find_arc_func_Boolf_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	frame[1].o = (checkCast(ctx, &class_mindustry_ui_fragments_HintsFragment$Hint, sp[0].o));
	LINE_NUMBER(57);
	if ((frame[1].o) == nullptr) goto label_9;
	}
	{
	jint temp0 = (jint)((func_mindustry_ui_fragments_HintsFragment$Hint_complete_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_ui_fragments_HintsFragment$Hint, INDEX_mindustry_ui_fragments_HintsFragment$Hint_complete_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_9;
	}
	{
	LINE_NUMBER(58);
	sp[0].o = (jobject)((mindustry_ui_fragments_HintsFragment *) NULL_CHECK((frame[0].o)))->F_hints;
	jint temp0 = (jint)((func_arc_struct_Seq_remove_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_remove_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	goto label_5;
	}
label_9:;
	{
	LINE_NUMBER(59);
	if ((frame[1].o) == nullptr) goto label_11;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	jint temp0 = (jint)((func_mindustry_core_Renderer_isCutscene_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_Renderer_isCutscene_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_11;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isGame_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isGame_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_11;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_saves;
	jlong temp0 = (jlong)((func_mindustry_game_Saves_getTotalPlaytime_R_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Saves_getTotalPlaytime_R_long])(ctx, sp[0].o);
	// Allow tutorial hints to show immediately without blocking when starting a new save
	if (temp0 < 0) goto label_11;
	}
	{
	LINE_NUMBER(60);
	((func_mindustry_ui_fragments_HintsFragment_display_mindustry_ui_fragments_HintsFragment$Hint) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_fragments_HintsFragment_display_mindustry_ui_fragments_HintsFragment$Hint])(ctx, (frame[0].o), (frame[1].o));
	goto label_5;
	}
label_11:;
	{
	LINE_NUMBER(63);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_input;
	jfloat temp0 = (jfloat)((func_arc_Input_mouseWorldX_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Input_mouseWorldX_R_float])(ctx, sp[1].o);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_input;
	jfloat temp1 = (jfloat)((func_arc_Input_mouseWorldY_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Input_mouseWorldY_R_float])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_mindustry_core_World_buildWorld_float_float_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_buildWorld_float_float_R_mindustry_gen_Building])(ctx, sp[0].o, temp0, temp1);
	frame[2].o = sp[0].o;
	LINE_NUMBER(64);
	if ((frame[2].o) == nullptr) goto label_5;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[2].o)))->F_team;
	clinit_mindustry_game_Team(ctx);
	sp[1].o = (jobject)SF_mindustry_game_Team_derelict;
	if (sp[0].o != sp[1].o) goto label_5;
	}
	{
	LINE_NUMBER(65);
	sp[0].o = (jobject)((mindustry_ui_fragments_HintsFragment *) NULL_CHECK((frame[0].o)))->F_events;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_add_java_lang_Object_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"derelictmouse"_j))));
	}
label_5:;
	LINE_NUMBER(69);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_fragments_HintsFragment_lambda$build$0_R_boolean(jcontext ctx) {
	jtype frame[3];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HintsFragment:lambda$build$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HintsFragment(ctx);
	{
	LINE_NUMBER(45);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	jint temp0 = (jint)((func_arc_Settings_getBool_java_lang_String_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getBool_java_lang_String_boolean_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"hints"_j))), (jint(1)));
	if (temp0 == 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_hudfrag;
	jint temp0 = (jint)((func_mindustry_ui_fragments_HudFragment_shown_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_HudFragment_shown_R_boolean])(ctx, sp[0].o);
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

jbool SM_mindustry_ui_fragments_HintsFragment_lambda$static$0_R_boolean(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HintsFragment:lambda$static$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HintsFragment(ctx);
	{
	LINE_NUMBER(30);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_sector;
	clinit_mindustry_content_SectorPresets(ctx);
	sp[1].o = (jobject)SF_mindustry_content_SectorPresets_groundZero;
	sp[1].o = (jobject)((mindustry_type_SectorPreset *) NULL_CHECK(sp[1].o))->F_sector;
	if (sp[0].o != sp[1].o) goto label_1;
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

void clinit_mindustry_ui_fragments_HintsFragment(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_mindustry_ui_fragments_HintsFragment_foutTime = jfloat(0.6f);
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HintsFragment:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HintsFragment(ctx);
	{
	LINE_NUMBER(30);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HintsFragment_invoke_arc_func_Boolp_3(ctx);
		auto proxy = (mindustry_ui_fragments_HintsFragment_invoke_arc_func_Boolp_3 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HintsFragment_invoke_arc_func_Boolp_3);
		sp[0].o = (jobject) proxy;
	}
	clinit_mindustry_ui_fragments_HintsFragment(ctx);
	SF_mindustry_ui_fragments_HintsFragment_isTutorial = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_ui_fragments_HintsFragment;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field current
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[3]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

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

	methods[18]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[19]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[20]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[21]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_ui_fragments_HintsFragment[] {
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
	(void *) M_mindustry_ui_fragments_HintsFragment_build_arc_scene_Group,
	(void *) M_mindustry_ui_fragments_HintsFragment_checkNext,
	(void *) M_mindustry_ui_fragments_HintsFragment_display_mindustry_ui_fragments_HintsFragment$Hint,
	(void *) M_mindustry_ui_fragments_HintsFragment_complete,
	(void *) M_mindustry_ui_fragments_HintsFragment_hide,
	(void *) M_mindustry_ui_fragments_HintsFragment_shown_R_boolean,
	(void *) M_mindustry_ui_fragments_HintsFragment_lambda$display$0_mindustry_ui_fragments_HintsFragment$Hint_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_fragments_HintsFragment_lambda$display$2,
	(void *) M_mindustry_ui_fragments_HintsFragment_lambda$build$7_mindustry_game_EventType$BlockBuildBeginEvent,
	(void *) M_mindustry_ui_fragments_HintsFragment_lambda$build$6_mindustry_game_EventType$BuildingCommandEvent,
	(void *) M_mindustry_ui_fragments_HintsFragment_lambda$build$5_mindustry_game_EventType$ResetEvent,
	(void *) M_mindustry_ui_fragments_HintsFragment_lambda$build$4,
	(void *) M_mindustry_ui_fragments_HintsFragment_lambda$build$3,
	(void *) M_mindustry_ui_fragments_HintsFragment_lambda$build$2_mindustry_game_EventType$BlockBuildEndEvent,
	(void *) M_mindustry_ui_fragments_HintsFragment_lambda$build$1,
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
	{ "checkNext", "()V" },
	{ "display", "(Lmindustry/ui/fragments/HintsFragment$Hint;)V" },
	{ "complete", "()V" },
	{ "hide", "()V" },
	{ "shown", "()Z" },
	{ "lambda$display$0", "(Lmindustry/ui/fragments/HintsFragment$Hint;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$display$2", "()V" },
	{ "lambda$build$7", "(Lmindustry/game/EventType$BlockBuildBeginEvent;)V" },
	{ "lambda$build$6", "(Lmindustry/game/EventType$BuildingCommandEvent;)V" },
	{ "lambda$build$5", "(Lmindustry/game/EventType$ResetEvent;)V" },
	{ "lambda$build$4", "()V" },
	{ "lambda$build$3", "()V" },
	{ "lambda$build$2", "(Lmindustry/game/EventType$BlockBuildEndEvent;)V" },
	{ "lambda$build$1", "()V" },
};

static jclass innerClasses[] {
	&class_mindustry_ui_fragments_HintsFragment$DefaultHint,
	&class_mindustry_ui_fragments_HintsFragment$Hint,
};

static FieldMetadata fields[] {
	{ "isTutorial", &class_arc_func_Boolp, (intptr_t) &SF_mindustry_ui_fragments_HintsFragment_isTutorial, "Larc/func/Boolp;", 26 },
	{ "foutTime", &class_float, (intptr_t) &SF_mindustry_ui_fragments_HintsFragment_foutTime, "F", 26 },
	{ "hints", &class_arc_struct_Seq, offsetof(mindustry_ui_fragments_HintsFragment, F_hints), "Larc/struct/Seq;", 1 },
	{ "current", &class_mindustry_ui_fragments_HintsFragment$Hint, offsetof(mindustry_ui_fragments_HintsFragment, F_current), "Lmindustry/ui/fragments/HintsFragment$Hint;", 0 },
	{ "group", &class_arc_scene_Group, offsetof(mindustry_ui_fragments_HintsFragment, F_group), "Larc/scene/Group;", 0 },
	{ "events", &class_arc_struct_ObjectSet, offsetof(mindustry_ui_fragments_HintsFragment, F_events), "Larc/struct/ObjectSet;", 0 },
	{ "placedBlocks", &class_arc_struct_ObjectSet, offsetof(mindustry_ui_fragments_HintsFragment, F_placedBlocks), "Larc/struct/ObjectSet;", 0 },
	{ "last", &class_arc_scene_ui_layout_Table, offsetof(mindustry_ui_fragments_HintsFragment, F_last), "Larc/scene/ui/layout/Table;", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ui_fragments_HintsFragment, 0, "()V", 1 },
	{ "build", (intptr_t) M_mindustry_ui_fragments_HintsFragment_build_arc_scene_Group, VTABLE_mindustry_ui_fragments_HintsFragment_build_arc_scene_Group, "(Larc/scene/Group;)V", 1 },
	{ "checkNext", (intptr_t) M_mindustry_ui_fragments_HintsFragment_checkNext, VTABLE_mindustry_ui_fragments_HintsFragment_checkNext, "()V", 0 },
	{ "display", (intptr_t) M_mindustry_ui_fragments_HintsFragment_display_mindustry_ui_fragments_HintsFragment$Hint, VTABLE_mindustry_ui_fragments_HintsFragment_display_mindustry_ui_fragments_HintsFragment$Hint, "(Lmindustry/ui/fragments/HintsFragment$Hint;)V", 0 },
	{ "complete", (intptr_t) M_mindustry_ui_fragments_HintsFragment_complete, VTABLE_mindustry_ui_fragments_HintsFragment_complete, "()V", 0 },
	{ "hide", (intptr_t) M_mindustry_ui_fragments_HintsFragment_hide, VTABLE_mindustry_ui_fragments_HintsFragment_hide, "()V", 0 },
	{ "shown", (intptr_t) M_mindustry_ui_fragments_HintsFragment_shown_R_boolean, VTABLE_mindustry_ui_fragments_HintsFragment_shown_R_boolean, "()Z", 1 },
	{ "isSerpulo", (intptr_t) SM_mindustry_ui_fragments_HintsFragment_isSerpulo_R_boolean, 0, "()Z", 8 },
	{ "lambda$display$0", (intptr_t) M_mindustry_ui_fragments_HintsFragment_lambda$display$0_mindustry_ui_fragments_HintsFragment$Hint_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_fragments_HintsFragment_lambda$display$0_mindustry_ui_fragments_HintsFragment$Hint_arc_scene_ui_layout_Table, "(Lmindustry/ui/fragments/HintsFragment$Hint;Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$display$2", (intptr_t) M_mindustry_ui_fragments_HintsFragment_lambda$display$2, VTABLE_mindustry_ui_fragments_HintsFragment_lambda$display$2, "()V", 4098 },
	{ "lambda$display$1", (intptr_t) SM_mindustry_ui_fragments_HintsFragment_lambda$display$1_mindustry_ui_fragments_HintsFragment$Hint_arc_scene_ui_layout_Table, 0, "(Lmindustry/ui/fragments/HintsFragment$Hint;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$checkNext$0", (intptr_t) SM_mindustry_ui_fragments_HintsFragment_lambda$checkNext$0_mindustry_ui_fragments_HintsFragment$Hint_R_boolean, 0, "(Lmindustry/ui/fragments/HintsFragment$Hint;)Z", 4106 },
	{ "lambda$build$7", (intptr_t) M_mindustry_ui_fragments_HintsFragment_lambda$build$7_mindustry_game_EventType$BlockBuildBeginEvent, VTABLE_mindustry_ui_fragments_HintsFragment_lambda$build$7_mindustry_game_EventType$BlockBuildBeginEvent, "(Lmindustry/game/EventType$BlockBuildBeginEvent;)V", 4098 },
	{ "lambda$build$8", (intptr_t) SM_mindustry_ui_fragments_HintsFragment_lambda$build$8_mindustry_gen_Building_R_boolean, 0, "(Lmindustry/gen/Building;)Z", 4106 },
	{ "lambda$build$6", (intptr_t) M_mindustry_ui_fragments_HintsFragment_lambda$build$6_mindustry_game_EventType$BuildingCommandEvent, VTABLE_mindustry_ui_fragments_HintsFragment_lambda$build$6_mindustry_game_EventType$BuildingCommandEvent, "(Lmindustry/game/EventType$BuildingCommandEvent;)V", 4098 },
	{ "lambda$build$5", (intptr_t) M_mindustry_ui_fragments_HintsFragment_lambda$build$5_mindustry_game_EventType$ResetEvent, VTABLE_mindustry_ui_fragments_HintsFragment_lambda$build$5_mindustry_game_EventType$ResetEvent, "(Lmindustry/game/EventType$ResetEvent;)V", 4098 },
	{ "lambda$build$4", (intptr_t) M_mindustry_ui_fragments_HintsFragment_lambda$build$4, VTABLE_mindustry_ui_fragments_HintsFragment_lambda$build$4, "()V", 4098 },
	{ "lambda$build$3", (intptr_t) M_mindustry_ui_fragments_HintsFragment_lambda$build$3, VTABLE_mindustry_ui_fragments_HintsFragment_lambda$build$3, "()V", 4098 },
	{ "lambda$build$2", (intptr_t) M_mindustry_ui_fragments_HintsFragment_lambda$build$2_mindustry_game_EventType$BlockBuildEndEvent, VTABLE_mindustry_ui_fragments_HintsFragment_lambda$build$2_mindustry_game_EventType$BlockBuildEndEvent, "(Lmindustry/game/EventType$BlockBuildEndEvent;)V", 4098 },
	{ "lambda$build$1", (intptr_t) M_mindustry_ui_fragments_HintsFragment_lambda$build$1, VTABLE_mindustry_ui_fragments_HintsFragment_lambda$build$1, "()V", 4098 },
	{ "lambda$build$0", (intptr_t) SM_mindustry_ui_fragments_HintsFragment_lambda$build$0_R_boolean, 0, "()Z", 4106 },
	{ "lambda$static$0", (intptr_t) SM_mindustry_ui_fragments_HintsFragment_lambda$static$0_R_boolean, 0, "()Z", 4106 },
	{ "<clinit>", (intptr_t) clinit_mindustry_ui_fragments_HintsFragment, 0, "()V", 8 },
};

Class class_mindustry_ui_fragments_HintsFragment{
		.nativeName = (intptr_t) "mindustry/ui/fragments/HintsFragment",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_ui_fragments_HintsFragment),
		.classVtable = (intptr_t) vtable_mindustry_ui_fragments_HintsFragment,
		.staticInitializer = (intptr_t) clinit_mindustry_ui_fragments_HintsFragment,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_ui_fragments_HintsFragment,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 2,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 8,
		.nativeFields = (intptr_t) fields,
		.methodCount = 23,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 26,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_ui_fragments_HintsFragment = registerClass(&class_mindustry_ui_fragments_HintsFragment);

}
