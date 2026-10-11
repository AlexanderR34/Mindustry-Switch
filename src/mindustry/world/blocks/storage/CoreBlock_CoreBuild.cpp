#include "mindustry/world/blocks/storage/CoreBlock_CoreBuild.h"
#include "java/lang/Integer.h"
#include "arc/graphics/Color.h"
#include "java/lang/Runnable.h"
#include "arc/graphics/g2d/Draw.h"
#include "arc/scene/ui/ScrollPane_ScrollPaneStyle.h"
#include "arc/scene/ui/Image.h"
#include "mindustry/content/Fx.h"
#include "arc/util/Tmp.h"
#include "arc/func/Intf.h"
#include "arc/struct/Seq.h"
#include "mindustry/world/blocks/storage/CoreBlock_CoreBuild_invoke_arc_math_Angles_ParticleConsumer_1.h"
#include "java/lang/reflect/Method.h"
#include "arc/scene/actions/DelayAction.h"
#include "mindustry/world/Tile.h"
#include "mindustry/game/SectorInfo.h"
#include "arc/func/Boolf.h"
#include "arc/math/Mathf.h"
#include "mindustry/world/blocks/storage/CoreBlock_CoreBuild_invoke_java_lang_Runnable_9.h"
#include "arc/Core.h"
#include "java/util/Iterator.h"
#include "arc/math/Interp.h"
#include "arc/util/Time.h"
#include "arc/math/Interp_PowIn.h"
#include "arc/graphics/Texture.h"
#include "arc/util/Nullable.h"
#include "mindustry/gen/Building.h"
#include "arc/scene/Scene.h"
#include "java/lang/Object.h"
#include "mindustry/io/TypeIO.h"
#include "mindustry/world/blocks/storage/CoreBlock.h"
#include "mindustry/world/blocks/storage/CoreBlock_CoreBuild_invoke_java_lang_Runnable_8.h"
#include "arc/util/io/Writes.h"
#include "mindustry/world/blocks/storage/CoreBlock_CoreBuild_invoke_java_lang_Runnable_7.h"
#include "mindustry/world/blocks/LaunchAnimator.h"
#include "mindustry/game/Rules.h"
#include "mindustry/ui/Displayable.h"
#include "mindustry/gen/Unitc.h"
#include "arc/graphics/g2d/Fill.h"
#include "mindustry/ui/fragments/LoadingFragment.h"
#include "arc/func/Cons.h"
#include "arc/audio/Audio.h"
#include "mindustry/world/blocks/storage/CoreBlock_CoreBuild_invoke_java_lang_Runnable_10.h"
#include "mindustry/world/blocks/storage/CoreBlock_CoreBuild_invoke_java_lang_Runnable_11.h"
#include "mindustry/core/Control.h"
#include "mindustry/world/blocks/storage/CoreBlock_CoreBuild_invoke_java_lang_Runnable_12.h"
#include "mindustry/world/blocks/storage/CoreBlock_CoreBuild_invoke_java_lang_Runnable_13.h"
#include "arc/scene/ui/ImageButton_ImageButtonStyle.h"
#include "arc/scene/ui/layout/Scl.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/game/Teams_TeamData.h"
#include "mindustry/type/Sector.h"
#include "mindustry/ui/Styles.h"
#include "mindustry/type/UnitType.h"
#include "arc/util/io/Reads.h"
#include "arc/math/Angles_ParticleConsumer.h"
#include "arc/scene/ui/ScrollPane.h"
#include "mindustry/game/Teams.h"
#include "mindustry/world/blocks/storage/CoreBlock_CoreBuild_invoke_arc_func_Func_1.h"
#include "arc/scene/actions/AlphaAction.h"
#include "mindustry/game/EventType_Trigger.h"
#include "arc/audio/Sound.h"
#include "mindustry/game/GameStats.h"
#include "mindustry/graphics/Drawf.h"
#include "mindustry/Vars.h"
#include "mindustry/core/World.h"
#include "arc/struct/ObjectIntMap.h"
#include "arc/math/Angles.h"
#include "arc/Events.h"
#include "arc/math/geom/Point2.h"
#include "mindustry/logic/LAccess.h"
#include "java/lang/reflect/Constructor.h"
#include "mindustry/entities/Effect.h"
#include "arc/scene/ui/Button.h"
#include "arc/scene/event/Touchable.h"
#include "mindustry/core/Renderer.h"
#include "mindustry/core/ContentLoader.h"
#include "arc/util/I18NBundle.h"
#include "arc/scene/ui/layout/Cell.h"
#include "arc/scene/ui/ImageButton.h"
#include "arc/math/geom/Position.h"
#include "arc/func/Func.h"
#include "java/lang/reflect/Field.h"
#include "mindustry/gen/Unit.h"
#include "mindustry/world/blocks/storage/CoreBlock_CoreBuild_invoke_arc_func_Cons_6.h"
#include "mindustry/world/blocks/storage/CoreBlock_CoreBuild_invoke_arc_func_Cons_5.h"
#include "mindustry/type/Item.h"
#include "mindustry/world/blocks/storage/CoreBlock_CoreBuild_invoke_arc_func_Cons_8.h"
#include "mindustry/entities/Damage.h"
#include "mindustry/world/blocks/storage/CoreBlock_CoreBuild_invoke_arc_func_Cons_7.h"
#include "mindustry/game/EventType_CoreChangeEvent.h"
#include "mindustry/world/blocks/storage/CoreBlock_CoreBuild_invoke_arc_func_Cons_9.h"
#include "mindustry/world/modules/ItemModule.h"
#include "arc/assets/AssetManager.h"
#include "arc/scene/ui/ButtonGroup.h"
#include "mindustry/world/blocks/storage/CoreBlock_CoreBuild_invoke_arc_func_Boolf_7.h"
#include "arc/audio/Music.h"
#include "mindustry/world/blocks/storage/CoreBlock_CoreBuild_invoke_arc_func_Boolf_6.h"
#include "mindustry/world/blocks/storage/CoreBlock_CoreBuild_invoke_arc_func_Boolf_5.h"
#include "mindustry/world/blocks/storage/CoreBlock_CoreBuild_invoke_arc_func_Boolf_4.h"
#include "mindustry/entities/Units.h"
#include "mindustry/ai/WaveSpawner.h"
#include "arc/graphics/Camera.h"
#include "mindustry/type/SectorPreset.h"
#include "arc/math/geom/Vec2.h"
#include "mindustry/net/Net.h"
#include "mindustry/world/Block.h"
#include "mindustry/world/blocks/storage/CoreBlock_CoreBuild.h"
#include "arc/graphics/g2d/Lines.h"
#include "arc/scene/Action.h"
#include "java/lang/String.h"
#include "mindustry/world/blocks/storage/StorageBlock_StorageBuild.h"
#include "arc/scene/style/Drawable.h"
#include "mindustry/world/blocks/environment/Floor.h"
#include "mindustry/world/blocks/storage/StorageBlock.h"
#include "mindustry/world/blocks/storage/CoreBlock_CoreBuild_invoke_arc_func_Intf_5.h"
#include "mindustry/world/blocks/storage/CoreBlock_CoreBuild_invoke_arc_func_Intf_4.h"
#include "arc/math/geom/Geometry.h"
#include "mindustry/world/blocks/storage/CoreBlock_CoreBuild_invoke_arc_func_Intf_3.h"
#include "java/lang/Math.h"
#include "mindustry/gen/Tex.h"
#include "mindustry/gen/Teamc.h"
#include "arc/scene/ui/layout/Table.h"
#include "arc/math/Interp_PowOut.h"
#include "java/lang/Enum.h"
#include "mindustry/core/UI.h"
#include "arc/scene/actions/Actions.h"
#include "mindustry/content/Blocks.h"
#include "arc/scene/Element.h"
#include "mindustry/graphics/Pal.h"
#include "mindustry/gen/Player.h"
#include "mindustry/ctype/Content.h"
#include "mindustry/type/Planet.h"
#include "mindustry/game/Team.h"
#include "java/lang/Class.h"
#include "mindustry/core/GameState.h"
#include "arc/scene/actions/RemoveActorAction.h"
#include "mindustry/input/InputHandler.h"
#include "mindustry/gen/Call.h"

extern "C" {


void mark_mindustry_world_blocks_storage_CoreBlock$CoreBuild(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_gen_Building(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_world_blocks_storage_CoreBlock$CoreBuild *) object;
	if (self->F_lastDamage)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lastDamage)->clazz)->markFunction)((jobject) self->F_lastDamage, mark, depth + 1);
	if (self->F_commandPos)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_commandPos)->clazz)->markFunction)((jobject) self->F_commandPos, mark, depth + 1);
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_mindustry_world_blocks_storage_CoreBlock$CoreBuild(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_gen_Building(ctx);
}

void init_mindustry_world_blocks_storage_CoreBlock$CoreBuild_mindustry_world_blocks_storage_CoreBlock(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/storage/CoreBlock$CoreBuild:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_storage_CoreBlock$CoreBuild(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(258);
	((mindustry_world_blocks_storage_CoreBlock$CoreBuild *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_mindustry_gen_Building(ctx, (frame[0].o));
	LINE_NUMBER(260);
	((mindustry_world_blocks_storage_CoreBlock$CoreBuild *) NULL_CHECK((frame[0].o)))->F_noEffect = (jint(0));
	LINE_NUMBER(261);
	sp[0].o = frame[0].o;
	clinit_mindustry_game_Team(ctx);
	sp[1].o = (jobject)SF_mindustry_game_Team_derelict;
	((mindustry_world_blocks_storage_CoreBlock$CoreBuild *) NULL_CHECK(sp[0].o))->F_lastDamage = (jref) sp[1].o;
	LINE_NUMBER(262);
	((mindustry_world_blocks_storage_CoreBlock$CoreBuild *) NULL_CHECK((frame[0].o)))->F_iframes = (jfloat(-1.0f));
	LINE_NUMBER(263);
	((mindustry_world_blocks_storage_CoreBlock$CoreBuild *) NULL_CHECK((frame[0].o)))->F_thrusterTime = (jfloat(0));
	LINE_NUMBER(258);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_isCommandable_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/storage/CoreBlock$CoreBuild:isCommandable", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(270);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_defaultTeam;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_editor) == 0) goto label_1;
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

jobject M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_getCommandPosition_R_arc_math_geom_Vec2(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/storage/CoreBlock$CoreBuild:getCommandPosition", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(275);
	sp[0].o = (jobject)((mindustry_world_blocks_storage_CoreBlock$CoreBuild *) NULL_CHECK((frame[0].o)))->F_commandPos;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_onCommand_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/storage/CoreBlock$CoreBuild:onCommand", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(280);
	((mindustry_world_blocks_storage_CoreBlock$CoreBuild *) NULL_CHECK((frame[0].o)))->F_commandPos = (jref) (frame[1].o);
	LINE_NUMBER(281);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_canUnload_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/storage/CoreBlock$CoreBuild:canUnload", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(285);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_unloadable) == 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_allowCoreUnloaders) == 0) goto label_1;
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

void M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_buildConfiguration_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/storage/CoreBlock$CoreBuild:buildConfiguration", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(290);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_coreBuildAndConfig) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_defaultTeam;
	if (sp[0].o != sp[1].o) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	sp[0].o = (jobject)((func_mindustry_game_Team_cores_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_cores_R_arc_struct_Seq])(ctx, sp[0].o);
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) != (jint(1))) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(291);
	((func_mindustry_world_blocks_storage_CoreBlock$CoreBuild_deselect) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_storage_CoreBlock$CoreBuild_deselect])(ctx, (frame[0].o));
	LINE_NUMBER(292);
	popStackFrame(ctx);
	return;
	}
label_2:;
	{
	LINE_NUMBER(295);
	clinit_arc_scene_ui_ButtonGroup(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_ButtonGroup);
	init_arc_scene_ui_ButtonGroup(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(296);
	((func_arc_scene_ui_ButtonGroup_setMinCheckCount_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_ButtonGroup_setMinCheckCount_int])(ctx, (frame[2].o), (jint(0)));
	LINE_NUMBER(297);
	clinit_arc_scene_ui_layout_Table(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Table);
	init_arc_scene_ui_layout_Table(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(298);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell])(ctx, (frame[3].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(32.0f)));
	LINE_NUMBER(300);
	frame[4].i = (jint(0));
	LINE_NUMBER(301);
	clinit_mindustry_game_Team(ctx);
	sp[0].o = (jobject)SF_mindustry_game_Team_baseTeams;
	frame[5].o = sp[0].o;
	frame[6].i = (((jarray) nullCheck(ctx, (frame[5].o)))->length);
	frame[7].i = (jint(0));
	}
label_9:;
	{
	if ((frame[7].i) >= (frame[6].i)) goto label_10;
	}
	{
	frame[8].o = ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[7].i)));
	LINE_NUMBER(302);
	sp[0].o = frame[3].o;
	clinit_mindustry_gen_Tex(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Tex_whiteui;
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_clearTogglei;
	jfloat temp0 = jfloat(24.0f);
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_storage_CoreBlock$CoreBuild_invoke_java_lang_Runnable_7(ctx);
		auto proxy = (mindustry_world_blocks_storage_CoreBlock$CoreBuild_invoke_java_lang_Runnable_7 *) gcAlloc(ctx, &class_mindustry_world_blocks_storage_CoreBlock$CoreBuild_invoke_java_lang_Runnable_7);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, sp[3].o);
	sp[1].o = frame[2].o;
	LINE_NUMBER(303);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_group_arc_scene_ui_ButtonGroup_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_group_arc_scene_ui_ButtonGroup_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, sp[0].o);
	frame[9].o = (checkCast(ctx, &class_arc_scene_ui_ImageButton, sp[0].o));
	LINE_NUMBER(304);
	sp[0].o = frame[9].o;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_storage_CoreBlock$CoreBuild_invoke_java_lang_Runnable_8(ctx);
		auto proxy = (mindustry_world_blocks_storage_CoreBlock$CoreBuild_invoke_java_lang_Runnable_8 *) gcAlloc(ctx, &class_mindustry_world_blocks_storage_CoreBlock$CoreBuild_invoke_java_lang_Runnable_8);
		proxy->F_field2 = (jref) (frame[8].o);
		proxy->F_field1 = (jref) (frame[9].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_scene_ui_ImageButton_changed_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ImageButton_changed_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(309);
	sp[0].o = (jobject)((func_arc_scene_ui_ImageButton_getStyle_R_arc_scene_ui_ImageButton$ImageButtonStyle) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_arc_scene_ui_ImageButton_getStyle_R_arc_scene_ui_ImageButton$ImageButtonStyle])(ctx, (frame[9].o));
	sp[1].o = (jobject)((mindustry_game_Team *) NULL_CHECK((frame[8].o)))->F_color;
	((arc_scene_ui_ImageButton$ImageButtonStyle *) NULL_CHECK(sp[0].o))->F_imageUpColor = (jref) sp[1].o;
	LINE_NUMBER(310);
	sp[0].o = frame[9].o;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_storage_CoreBlock$CoreBuild_invoke_java_lang_Runnable_9(ctx);
		auto proxy = (mindustry_world_blocks_storage_CoreBlock$CoreBuild_invoke_java_lang_Runnable_9 *) gcAlloc(ctx, &class_mindustry_world_blocks_storage_CoreBlock$CoreBuild_invoke_java_lang_Runnable_9);
		proxy->F_field2 = (jref) (frame[8].o);
		proxy->F_field1 = (jref) (frame[9].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_ImageButton_update_java_lang_Runnable_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ImageButton_update_java_lang_Runnable_R_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(312);
	jint temp1 = frame[4].i;
	INST_IINC(4, 1);
	if ((temp1 % (jint(3))) != (jint(2))) goto label_17;
	}
	{
	LINE_NUMBER(313);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[3].o));
	}
label_17:;
	{
	LINE_NUMBER(301);
	INST_IINC(7, 1);
	goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(317);
	clinit_arc_scene_ui_ScrollPane(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_ScrollPane);
	sp[1].o = frame[3].o;
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_smallPane;
	init_arc_scene_ui_ScrollPane_arc_scene_Element_arc_scene_ui_ScrollPane$ScrollPaneStyle(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(318);
	((func_arc_scene_ui_ScrollPane_setScrollingDisabled_boolean_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_scene_ui_ScrollPane_setScrollingDisabled_boolean_boolean])(ctx, (frame[5].o), (jint(1)), (jint(0)));
	LINE_NUMBER(319);
	((func_arc_scene_ui_ScrollPane_setOverscroll_boolean_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_scene_ui_ScrollPane_setOverscroll_boolean_boolean])(ctx, (frame[5].o), (jint(0)), (jint(0)));
	LINE_NUMBER(320);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, (frame[1].o), (frame[5].o));
	jfloat temp0 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, (jfloat(80.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_maxHeight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_maxHeight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(321);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(322);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_configured_mindustry_gen_Unit_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/storage/CoreBlock$CoreBuild:configured", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(326);
	M_mindustry_gen_Building_configured_mindustry_gen_Unit_java_lang_Object(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	LINE_NUMBER(327);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_coreBuildAndConfig) == 0) goto label_2;
	}
	{
	if ((isInstance(ctx, (frame[2].o), &class_java_lang_Integer)) != 0) goto label_3;
	}
label_2:;
	popStackFrame(ctx);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(329);
	jint temp0 = (jint)((func_java_lang_Integer_intValue_R_int) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Integer, (frame[2].o))))->vtable)[VTABLE_java_lang_Integer_intValue_R_int])(ctx, (checkCast(ctx, &class_java_lang_Integer, (frame[2].o))));
	sp[0].o = (jobject)SM_mindustry_game_Team_get_int_R_mindustry_game_Team(ctx, temp0);
	frame[3].o = sp[0].o;
	LINE_NUMBER(330);
	if ((frame[1].o) == nullptr) goto label_5;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Unit_isPlayer_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_isPlayer_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(331);
	((func_mindustry_gen_Unit_team_mindustry_game_Team) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_team_mindustry_game_Team])(ctx, (frame[1].o), (frame[3].o));
	LINE_NUMBER(332);
	sp[0].o = (jobject)((func_mindustry_gen_Unit_getPlayer_R_mindustry_gen_Player) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_getPlayer_R_mindustry_gen_Player])(ctx, (frame[1].o));
	((func_mindustry_gen_Player_team_mindustry_game_Team) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_team_mindustry_game_Team])(ctx, sp[0].o, (frame[3].o));
	}
label_5:;
	{
	LINE_NUMBER(334);
	((func_mindustry_world_blocks_storage_CoreBlock$CoreBuild_changeTeam_mindustry_game_Team) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_storage_CoreBlock$CoreBuild_changeTeam_mindustry_game_Team])(ctx, (frame[0].o), (frame[3].o));
	LINE_NUMBER(335);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_shouldHideConfigure_mindustry_gen_Player_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/storage/CoreBlock$CoreBuild:shouldHideConfigure", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(339);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_coreBuildAndConfig) != 0) goto label_1;
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

void M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_draw(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/storage/CoreBlock$CoreBuild:draw", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(345);
	if ((floatCompare(((jfloat)((mindustry_world_blocks_storage_CoreBlock$CoreBuild *) NULL_CHECK((frame[0].o)))->F_thrusterTime), (jfloat(0)), -1)) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(346);
	frame[1].f = ((jfloat)((mindustry_world_blocks_storage_CoreBlock$CoreBuild *) NULL_CHECK((frame[0].o)))->F_thrusterTime);
	LINE_NUMBER(348);
	SM_arc_graphics_g2d_Draw_alpha_float(ctx, (jfloat(1)));
	LINE_NUMBER(349);
	((func_mindustry_world_blocks_storage_CoreBlock$CoreBuild_drawThrusters_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_storage_CoreBlock$CoreBuild_drawThrusters_float])(ctx, (frame[0].o), (frame[1].f));
	LINE_NUMBER(350);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_region;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float(ctx, sp[0].o, ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y));
	LINE_NUMBER(351);
	clinit_arc_math_Interp(ctx);
	sp[0].o = (jobject)SF_arc_math_Interp_pow4In;
	jfloat temp0 = (jfloat)((func_arc_math_Interp$PowIn_apply_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Interp$PowIn_apply_float_R_float])(ctx, sp[0].o, (frame[1].f));
	SM_arc_graphics_g2d_Draw_alpha_float(ctx, temp0);
	LINE_NUMBER(352);
	((func_mindustry_world_blocks_storage_CoreBlock$CoreBuild_drawThrusters_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_storage_CoreBlock$CoreBuild_drawThrusters_float])(ctx, (frame[0].o), (frame[1].f));
	LINE_NUMBER(353);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(355);
	((func_mindustry_world_blocks_storage_CoreBlock$CoreBuild_drawTeamTop) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_storage_CoreBlock$CoreBuild_drawTeamTop])(ctx, (frame[0].o));
	LINE_NUMBER(356);
	goto label_11;
	}
label_1:;
	{
	LINE_NUMBER(357);
	M_mindustry_gen_Building_draw(ctx, (frame[0].o));
	}
label_11:;
	LINE_NUMBER(359);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jfloat M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_launchDuration_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/storage/CoreBlock$CoreBuild:launchDuration", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(363);
	sp[0].o = (jobject)((mindustry_world_blocks_storage_CoreBlock$CoreBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	popStackFrame(ctx);
	return ((jfloat)((mindustry_world_blocks_storage_CoreBlock *) NULL_CHECK(sp[0].o))->F_landDuration);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_landMusic_R_arc_audio_Music(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/storage/CoreBlock$CoreBuild:landMusic", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(368);
	sp[0].o = (jobject)((mindustry_world_blocks_storage_CoreBlock$CoreBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_storage_CoreBlock *) NULL_CHECK(sp[0].o))->F_landMusic;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_beginLaunch_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/storage/CoreBlock$CoreBuild:beginLaunch", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(373);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_random_float_R_float(ctx, (jfloat(1)));
	((mindustry_world_blocks_storage_CoreBlock$CoreBuild *) NULL_CHECK(sp[0].o))->F_cloudSeed = temp0;
	LINE_NUMBER(374);
	if ((frame[1].i) == 0) goto label_2;
	}
	{
	LINE_NUMBER(375);
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_coreLaunchConstruct;
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	sp[1].o = (jobject)((mindustry_world_blocks_storage_CoreBlock$CoreBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_mindustry_entities_Effect_at_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float])(ctx, sp[0].o, temp0, temp1, (jfloat(((jint)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_size))));
	}
label_2:;
	{
	LINE_NUMBER(378);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_headless) != 0) goto label_4;
	}
	{
	LINE_NUMBER(379);
	if ((frame[1].i) == 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_storage_CoreBlock$CoreBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_storage_CoreBlock *) NULL_CHECK(sp[0].o))->F_launchSound;
	sp += 1;
	goto label_7;
	}
label_6:;
	{
	sp[0].o = (jobject)((mindustry_world_blocks_storage_CoreBlock$CoreBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_storage_CoreBlock *) NULL_CHECK(sp[0].o))->F_landSound;
	sp += 1;
	}
label_7:;
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	sp[0].o = (jobject)((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_position;
	jfloat temp0 = jfloat(1);
	sp[1].f = temp0;
	sp += 2;
	if ((frame[1].i) == 0) goto label_8;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_storage_CoreBlock$CoreBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp0 = (jfloat)((mindustry_world_blocks_storage_CoreBlock *) NULL_CHECK(sp[0].o))->F_launchSoundVolume;
	sp[0].f = temp0;
	sp += 1;
	goto label_9;
	}
label_8:;
	{
	sp[0].o = (jobject)((mindustry_world_blocks_storage_CoreBlock$CoreBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp0 = (jfloat)((mindustry_world_blocks_storage_CoreBlock *) NULL_CHECK(sp[0].o))->F_landSoundVolume;
	sp[0].f = temp0;
	sp += 1;
	}
label_9:;
	{
	sp -= 4;
	jint temp0 = (jint)((func_arc_audio_Sound_at_arc_math_geom_Position_float_float_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Sound_at_arc_math_geom_Position_float_float_R_int])(ctx, sp[0].o, sp[1].o, sp[2].f, sp[3].f);
	LINE_NUMBER(381);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	jint temp1 = (jint)((func_mindustry_core_Renderer_isLaunching_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_Renderer_isLaunching_R_boolean])(ctx, sp[0].o);
	if (temp1 == 0) goto label_11;
	}
	{
	LINE_NUMBER(382);
	frame[2].f = (jfloat(30.0f));
	LINE_NUMBER(384);
	clinit_arc_scene_ui_Image(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_Image);
	init_arc_scene_ui_Image(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(385);
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[3].o)))->F_color;
	((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_a = (jfloat(0));
	LINE_NUMBER(386);
	sp[0].o = frame[3].o;
	clinit_arc_scene_event_Touchable(ctx);
	sp[1].o = (jobject)SF_arc_scene_event_Touchable_disabled;
	((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_touchable = (jref) sp[1].o;
	LINE_NUMBER(387);
	((func_arc_scene_ui_Image_setFillParent_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_Image_setFillParent_boolean])(ctx, (frame[3].o), (jint(1)));
	LINE_NUMBER(388);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)createArray(ctx, &class_arc_scene_Action, (jint(4)));
	jint temp0 = jint(0);
	jfloat temp1 = (jfloat)((func_mindustry_world_blocks_storage_CoreBlock$CoreBuild_launchDuration_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_storage_CoreBlock$CoreBuild_launchDuration_R_float])(ctx, (frame[0].o));
	sp[2].o = (jobject)SM_arc_scene_actions_Actions_delay_float_R_arc_scene_actions_DelayAction(ctx, ((temp1 - (frame[2].f)) / (jfloat(60.0f))));
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	jint temp2 = jint(1);
	jfloat temp3 = (frame[2].f) / (jfloat(60.0f));
	clinit_arc_math_Interp(ctx);
	sp[2].o = (jobject)SF_arc_math_Interp_pow2In;
	sp[2].o = (jobject)SM_arc_scene_actions_Actions_fadeIn_float_arc_math_Interp_R_arc_scene_actions_AlphaAction(ctx, temp3, sp[2].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp2) = sp[2].o;
	jint temp4 = jint(2);
	sp[2].o = (jobject)SM_arc_scene_actions_Actions_delay_float_R_arc_scene_actions_DelayAction(ctx, (jfloat(0.1f)));
	ARRAY_ACCESS(jobject, sp[1].o, temp4) = sp[2].o;
	jint temp5 = jint(3);
	sp[2].o = (jobject)SM_arc_scene_actions_Actions_remove_R_arc_scene_actions_RemoveActorAction(ctx);
	ARRAY_ACCESS(jobject, sp[1].o, temp5) = sp[2].o;
	((func_arc_scene_ui_Image_actions_Array1_arc_scene_Action) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Image_actions_Array1_arc_scene_Action])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(389);
	sp[0].o = frame[3].o;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_storage_CoreBlock$CoreBuild_invoke_java_lang_Runnable_10(ctx);
		auto proxy = (mindustry_world_blocks_storage_CoreBlock$CoreBuild_invoke_java_lang_Runnable_10 *) gcAlloc(ctx, &class_mindustry_world_blocks_storage_CoreBlock$CoreBuild_invoke_java_lang_Runnable_10);
		proxy->F_field0 = (jref) (frame[3].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_Image_update_java_lang_Runnable_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Image_update_java_lang_Runnable_R_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(396);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	((func_arc_scene_Scene_add_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_add_arc_scene_Element])(ctx, sp[0].o, (frame[3].o));
	LINE_NUMBER(397);
	goto label_4;
	}
label_11:;
	{
	LINE_NUMBER(398);
	clinit_arc_scene_ui_Image(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_Image);
	init_arc_scene_ui_Image(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(399);
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[2].o)))->F_color;
	((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_a = (jfloat(1));
	LINE_NUMBER(400);
	sp[0].o = frame[2].o;
	clinit_arc_scene_event_Touchable(ctx);
	sp[1].o = (jobject)SF_arc_scene_event_Touchable_disabled;
	((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_touchable = (jref) sp[1].o;
	LINE_NUMBER(401);
	((func_arc_scene_ui_Image_setFillParent_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_Image_setFillParent_boolean])(ctx, (frame[2].o), (jint(1)));
	LINE_NUMBER(402);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)createArray(ctx, &class_arc_scene_Action, (jint(2)));
	jint temp0 = jint(0);
	sp[2].o = (jobject)SM_arc_scene_actions_Actions_fadeOut_float_R_arc_scene_actions_AlphaAction(ctx, (jfloat(0.5833333f)));
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	jint temp1 = jint(1);
	sp[2].o = (jobject)SM_arc_scene_actions_Actions_remove_R_arc_scene_actions_RemoveActorAction(ctx);
	ARRAY_ACCESS(jobject, sp[1].o, temp1) = sp[2].o;
	((func_arc_scene_ui_Image_actions_Array1_arc_scene_Action) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Image_actions_Array1_arc_scene_Action])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(403);
	sp[0].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_storage_CoreBlock$CoreBuild_invoke_java_lang_Runnable_11(ctx);
		auto proxy = (mindustry_world_blocks_storage_CoreBlock$CoreBuild_invoke_java_lang_Runnable_11 *) gcAlloc(ctx, &class_mindustry_world_blocks_storage_CoreBlock$CoreBuild_invoke_java_lang_Runnable_11);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_Image_update_java_lang_Runnable_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Image_update_java_lang_Runnable_R_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(410);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	((func_arc_scene_Scene_add_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_add_arc_scene_Element])(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(412);
	jfloat temp2 = (jfloat)((func_mindustry_world_blocks_storage_CoreBlock$CoreBuild_launchDuration_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_storage_CoreBlock$CoreBuild_launchDuration_R_float])(ctx, (frame[0].o));
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_storage_CoreBlock$CoreBuild_invoke_java_lang_Runnable_12(ctx);
		auto proxy = (mindustry_world_blocks_storage_CoreBlock$CoreBuild_invoke_java_lang_Runnable_12 *) gcAlloc(ctx, &class_mindustry_world_blocks_storage_CoreBlock$CoreBuild_invoke_java_lang_Runnable_12);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	SM_arc_util_Time_run_float_java_lang_Runnable(ctx, temp2, sp[0].o);
	}
label_4:;
	LINE_NUMBER(425);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_endLaunch(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/storage/CoreBlock$CoreBuild:endLaunch", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(428);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_drawLaunch(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[18];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/storage/CoreBlock$CoreBuild:drawLaunch", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(432);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_assets;
	sp[0].o = (jobject)((func_arc_assets_AssetManager_get_java_lang_String_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_get_java_lang_String_java_lang_Class_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"sprites/clouds.png"_j))), (((jobject) &class_arc_graphics_Texture)));
	frame[1].o = (checkCast(ctx, &class_arc_graphics_Texture, sp[0].o));
	LINE_NUMBER(434);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	jfloat temp0 = (jfloat)((func_mindustry_core_Renderer_getLandTimeIn_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_Renderer_getLandTimeIn_R_float])(ctx, sp[0].o);
	frame[2].f = temp0;
	LINE_NUMBER(435);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	jfloat temp1 = (jfloat)((func_mindustry_core_Renderer_getDisplayScale_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_Renderer_getDisplayScale_R_float])(ctx, sp[0].o);
	frame[3].f = temp1;
	LINE_NUMBER(437);
	frame[4].f = ((jfloat(1)) - (frame[2].f));
	LINE_NUMBER(438);
	jfloat temp2 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, (jfloat(4.0f)));
	frame[5].f = (temp2 / (frame[3].f));
	LINE_NUMBER(439);
	clinit_arc_math_Interp(ctx);
	sp[0].o = (jobject)SF_arc_math_Interp_pow3Out;
	jfloat temp3 = (jfloat)((func_arc_math_Interp$PowOut_apply_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Interp$PowOut_apply_float_R_float])(ctx, sp[0].o, (frame[2].f));
	frame[6].f = temp3;
	clinit_arc_math_Interp(ctx);
	sp[0].o = (jobject)SF_arc_math_Interp_pow2In;
	jfloat temp4 = (jfloat)((func_arc_math_Interp$PowIn_apply_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Interp$PowIn_apply_float_R_float])(ctx, sp[0].o, (frame[4].f));
	frame[7].f = temp4;
	LINE_NUMBER(442);
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_lightTrail;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(443);
	jlong temp5 = jlong(1);
	jfloat temp6 = frame[6].f;
	jint temp7 = 100;
	jfloat temp8 = ((jfloat(800.0f)) * (frame[5].f)) * (frame[6].f);
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_storage_CoreBlock$CoreBuild_invoke_arc_math_Angles$ParticleConsumer_1(ctx);
		auto proxy = (mindustry_world_blocks_storage_CoreBlock$CoreBuild_invoke_arc_math_Angles$ParticleConsumer_1 *) gcAlloc(ctx, &class_mindustry_world_blocks_storage_CoreBlock$CoreBuild_invoke_arc_math_Angles$ParticleConsumer_1);
		proxy->F_field2 = (frame[7].f);
		proxy->F_field1 = (frame[5].f);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	SM_arc_math_Angles_randLenVectors_long_float_int_float_arc_math_Angles$ParticleConsumer(ctx, temp5, temp6, temp7, temp8, sp[0].o);
	LINE_NUMBER(447);
	SM_arc_graphics_g2d_Draw_color(ctx);
	LINE_NUMBER(449);
	((func_mindustry_world_blocks_storage_CoreBlock$CoreBuild_drawLanding_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_storage_CoreBlock$CoreBuild_drawLanding_float_float])(ctx, (frame[0].o), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y));
	LINE_NUMBER(451);
	SM_arc_graphics_g2d_Draw_color(ctx);
	LINE_NUMBER(452);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Color_white;
	clinit_arc_math_Interp(ctx);
	sp[1].o = (jobject)SF_arc_math_Interp_pow5In;
	jfloat temp9 = (jfloat)((func_arc_math_Interp$PowIn_apply_float_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_Interp$PowIn_apply_float_R_float])(ctx, sp[1].o, (frame[4].f));
	SM_arc_graphics_g2d_Draw_mixcol_arc_graphics_Color_float(ctx, sp[0].o, temp9);
	LINE_NUMBER(455);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	jint temp10 = (jint)((func_mindustry_core_Renderer_isLaunching_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_Renderer_isLaunching_R_boolean])(ctx, sp[0].o);
	if (temp10 == 0) goto label_14;
	}
	{
	LINE_NUMBER(456);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, ((jfloat(1)) - ((frame[4].f) * (jfloat(12.0f)))));
	frame[8].f = temp0;
	LINE_NUMBER(457);
	if ((floatCompare((frame[8].f), (jfloat(1,000000e-03f)), -1)) <= 0) goto label_14;
	}
	{
	LINE_NUMBER(458);
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_accent;
	SM_arc_graphics_g2d_Draw_mixcol_arc_graphics_Color_float(ctx, sp[0].o, (frame[8].f));
	}
label_14:;
	{
	LINE_NUMBER(463);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_cloudColor;
	if ((floatCompare(((jfloat)((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_a), (jfloat(1,000000e-04f)), -1)) <= 0) goto label_18;
	}
	{
	LINE_NUMBER(464);
	frame[8].f = (jfloat(1700.0f));
	LINE_NUMBER(465);
	jfloat temp0 = jfloat(1);
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, ((frame[2].f) + (jfloat(0.3f))));
	jfloat temp2 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (temp0 + (temp1 * (jfloat(-2.0f)))), (jfloat(0)));
	frame[9].f = (temp2 * (frame[3].f));
	LINE_NUMBER(467);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_tr1;
	((func_arc_graphics_g2d_TextureRegion_set_arc_graphics_Texture) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_set_arc_graphics_Texture])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(468);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_tr1;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_camera;
	sp[1].o = (jobject)((arc_graphics_Camera *) NULL_CHECK(sp[1].o))->F_position;
	jfloat temp3 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_camera;
	jfloat temp4 = (temp3 - ((((jfloat)((arc_graphics_Camera *) NULL_CHECK(sp[1].o))->F_width) / (jfloat(2))) * (frame[9].f))) / (frame[8].f);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_camera;
	sp[1].o = (jobject)((arc_graphics_Camera *) NULL_CHECK(sp[1].o))->F_position;
	jfloat temp5 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_camera;
	jfloat temp6 = (temp5 - ((((jfloat)((arc_graphics_Camera *) NULL_CHECK(sp[1].o))->F_height) / (jfloat(2))) * (frame[9].f))) / (frame[8].f);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_camera;
	sp[1].o = (jobject)((arc_graphics_Camera *) NULL_CHECK(sp[1].o))->F_position;
	jfloat temp7 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_camera;
	jfloat temp8 = (temp7 + ((((jfloat)((arc_graphics_Camera *) NULL_CHECK(sp[1].o))->F_width) / (jfloat(2))) * (frame[9].f))) / (frame[8].f);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_camera;
	sp[1].o = (jobject)((arc_graphics_Camera *) NULL_CHECK(sp[1].o))->F_position;
	jfloat temp9 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_camera;
	((func_arc_graphics_g2d_TextureRegion_set_float_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_set_float_float_float_float])(ctx, sp[0].o, temp4, temp6, temp8, ((temp9 + ((((jfloat)((arc_graphics_Camera *) NULL_CHECK(sp[1].o))->F_height) / (jfloat(2))) * (frame[9].f))) / (frame[8].f)));
	LINE_NUMBER(474);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_tr1;
	((func_arc_graphics_g2d_TextureRegion_scroll_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_scroll_float_float])(ctx, sp[0].o, ((jfloat(10.0f)) * ((jfloat)((mindustry_world_blocks_storage_CoreBlock$CoreBuild *) NULL_CHECK((frame[0].o)))->F_cloudSeed)), ((jfloat(10.0f)) * ((jfloat)((mindustry_world_blocks_storage_CoreBlock$CoreBuild *) NULL_CHECK((frame[0].o)))->F_cloudSeed)));
	LINE_NUMBER(476);
	clinit_mindustry_world_blocks_storage_CoreBlock(ctx);
	sp[0].o = (jobject)SF_mindustry_world_blocks_storage_CoreBlock_cloudAlphas;
	jfloat temp10 = (jfloat)SM_arc_math_Mathf_sample_Array1_float_float_R_float(ctx, sp[0].o, ((frame[2].f) + (jfloat(0.25f))));
	SM_arc_graphics_g2d_Draw_alpha_float(ctx, (temp10 * (jfloat(0.81f))));
	LINE_NUMBER(477);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_cloudColor;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_cloudColor;
	SM_arc_graphics_g2d_Draw_mixcol_arc_graphics_Color_float(ctx, sp[0].o, ((jfloat)((arc_graphics_Color *) NULL_CHECK(sp[1].o))->F_a));
	LINE_NUMBER(478);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_tr1;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_camera;
	sp[1].o = (jobject)((arc_graphics_Camera *) NULL_CHECK(sp[1].o))->F_position;
	jfloat temp11 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_camera;
	sp[1].o = (jobject)((arc_graphics_Camera *) NULL_CHECK(sp[1].o))->F_position;
	jfloat temp12 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_camera;
	jfloat temp13 = (jfloat)((arc_graphics_Camera *) NULL_CHECK(sp[1].o))->F_width;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_camera;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float_float(ctx, sp[0].o, temp11, temp12, temp13, ((jfloat)((arc_graphics_Camera *) NULL_CHECK(sp[1].o))->F_height));
	LINE_NUMBER(479);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	}
label_18:;
	LINE_NUMBER(481);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_drawLanding_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[20];
	auto stack = &frame[15];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/storage/CoreBlock$CoreBuild:drawLanding", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(484);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	jfloat temp0 = (jfloat)((func_mindustry_core_Renderer_getLandTimeIn_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_Renderer_getLandTimeIn_R_float])(ctx, sp[0].o);
	frame[3].f = temp0;
	LINE_NUMBER(485);
	frame[4].f = ((jfloat(1)) - (frame[3].f));
	LINE_NUMBER(487);
	jfloat temp1 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, (jfloat(4.0f)));
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	jfloat temp2 = (jfloat)((func_mindustry_core_Renderer_getDisplayScale_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_Renderer_getDisplayScale_R_float])(ctx, sp[0].o);
	frame[5].f = (temp1 / temp2);
	LINE_NUMBER(488);
	frame[6].f = (jfloat(0));
	LINE_NUMBER(489);
	sp[0].o = (jobject)((mindustry_world_blocks_storage_CoreBlock$CoreBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_region;
	jfloat temp3 = jfloat(((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK(sp[0].o))->F_width));
	sp[0].o = (jobject)((mindustry_world_blocks_storage_CoreBlock$CoreBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_region;
	jfloat temp4 = (jfloat)((func_arc_graphics_g2d_TextureRegion_scl_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_scl_R_float])(ctx, sp[0].o);
	jfloat temp5 = ((temp3 * temp4) * (frame[5].f)) * (jfloat(3.6f));
	clinit_arc_math_Interp(ctx);
	sp[0].o = (jobject)SF_arc_math_Interp_pow2Out;
	jfloat temp6 = (jfloat)((func_arc_math_Interp$PowOut_apply_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Interp$PowOut_apply_float_R_float])(ctx, sp[0].o, (frame[4].f));
	frame[7].f = (temp5 * temp6);
	LINE_NUMBER(490);
	clinit_arc_math_Interp(ctx);
	sp[0].o = (jobject)SF_arc_math_Interp_pow2In;
	jfloat temp7 = (jfloat)((func_arc_math_Interp$PowIn_apply_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Interp$PowIn_apply_float_R_float])(ctx, sp[0].o, (frame[4].f));
	frame[8].f = (temp7 * (jfloat(135.0f)));
	LINE_NUMBER(491);
	jfloat temp8 = frame[1].f;
	jfloat temp9 = (jfloat)SM_arc_math_Mathf_range_float_R_float(ctx, (frame[6].f));
	frame[1].f = (temp8 + temp9);
	LINE_NUMBER(492);
	jfloat temp10 = frame[2].f;
	jfloat temp11 = (jfloat)SM_arc_math_Mathf_range_float_R_float(ctx, (frame[6].f));
	frame[2].f = (temp10 + temp11);
	LINE_NUMBER(493);
	frame[9].f = (jfloat(0.25f));
	LINE_NUMBER(494);
	if ((floatCompare((frame[3].f), (frame[9].f), -1)) < 0) goto label_10;
	}
	INST_FCONST(1);
	goto label_11;
label_10:;
	{
	jfloat temp0 = (frame[3].f) / (frame[9].f);
	sp[0].f = temp0;
	sp += 1;
	}
label_11:;
	{
	sp -= 1;
	frame[10].f = sp[0].f;
	LINE_NUMBER(495);
	clinit_mindustry_world_blocks_storage_CoreBlock(ctx);
	sp[0].o = (jobject)SF_mindustry_world_blocks_storage_CoreBlock_thrusterSizes;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_sample_Array1_float_float_R_float(ctx, sp[0].o, (frame[3].f));
	frame[11].f = temp0;
	LINE_NUMBER(498);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	jint temp1 = (jint)((func_mindustry_core_Renderer_isLaunching_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_Renderer_isLaunching_R_boolean])(ctx, sp[0].o);
	if (temp1 == 0) goto label_14;
	}
	{
	LINE_NUMBER(499);
	clinit_arc_math_Interp(ctx);
	sp[0].o = (jobject)SF_arc_math_Interp_pow2Out;
	frame[12].o = sp[0].o;
	LINE_NUMBER(500);
	sp[0].o = frame[12].o;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, ((frame[4].f) * (jfloat(13.0f))));
	jfloat temp1 = (jfloat)((func_arc_math_Interp_apply_float_R_float) resolveInterfaceMethod(ctx, &class_arc_math_Interp, INDEX_arc_math_Interp_apply_float_R_float, sp[0].o))(ctx, sp[0].o, temp0);
	frame[10].f = temp1;
	LINE_NUMBER(501);
	sp[0].o = frame[12].o;
	jfloat temp2 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, ((frame[4].f) * (jfloat(9.0f))));
	jfloat temp3 = (jfloat)((func_arc_math_Interp_apply_float_R_float) resolveInterfaceMethod(ctx, &class_arc_math_Interp, INDEX_arc_math_Interp_apply_float_R_float, sp[0].o))(ctx, sp[0].o, temp2);
	frame[11].f = temp3;
	}
label_14:;
	{
	LINE_NUMBER(504);
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_lightTrail;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(506);
	SM_arc_graphics_g2d_Draw_rect_java_lang_String_float_float_float_float(ctx, (((jobject) createStringLiteral(ctx, u8"circle-shadow"_j))), (frame[1].f), (frame[2].f), (frame[7].f), (frame[7].f));
	LINE_NUMBER(508);
	SM_arc_graphics_g2d_Draw_scl_float(ctx, (frame[5].f));
	LINE_NUMBER(511);
	jfloat temp0 = jfloat(1);
	sp[0].o = (jobject)((mindustry_world_blocks_storage_CoreBlock$CoreBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp1 = ((temp0 + ((jfloat((((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size) - (jint(3))))) / (jfloat(2.5f)))) * (frame[5].f)) * (frame[11].f);
	jfloat temp2 = jfloat(0.95f);
	jfloat temp3 = (jfloat)SM_arc_math_Mathf_absin_float_float_R_float(ctx, (jfloat(2)), (jfloat(0.1f)));
	frame[12].f = (temp1 * (temp2 + temp3));
	LINE_NUMBER(512);
	sp[0].o = (jobject)((mindustry_world_blocks_storage_CoreBlock$CoreBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	frame[13].f = (((jfloat((((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size) - (jint(3))))) * (jfloat(3.0f))) * (frame[5].f));
	LINE_NUMBER(514);
	frame[14].i = (jint(0));
	}
label_23:;
	{
	if ((frame[14].i) >= (jint(4))) goto label_24;
	}
	{
	LINE_NUMBER(515);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, ((jfloat(((frame[14].i) * (90)))) + (frame[8].f)), (jfloat(1)));
	LINE_NUMBER(517);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	sp[1].o = (jobject)((mindustry_world_blocks_storage_CoreBlock$CoreBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_setLength_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_setLength_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, ((((((jfloat((((jint)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_size) * (8)))) / (jfloat(2))) + (jfloat(1))) * (frame[5].f)) + ((frame[12].f) * (jfloat(2)))) + (frame[13].f)));
	LINE_NUMBER(518);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	sp[0].o = (jobject)((mindustry_game_Team *) NULL_CHECK(sp[0].o))->F_color;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(519);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp0 = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x) + (frame[1].f);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	SM_arc_graphics_g2d_Fill_circle_float_float_float(ctx, temp0, (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y) + (frame[2].f)), ((jfloat(6.0f)) * (frame[12].f)));
	LINE_NUMBER(521);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	sp[1].o = (jobject)((mindustry_world_blocks_storage_CoreBlock$CoreBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_setLength_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_setLength_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, ((((((jfloat((((jint)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_size) * (8)))) / (jfloat(2))) + (jfloat(1))) * (frame[5].f)) + ((frame[12].f) * (jfloat(0.5f)))) + (frame[13].f)));
	LINE_NUMBER(522);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Color_white;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(523);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp1 = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x) + (frame[1].f);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	SM_arc_graphics_g2d_Fill_circle_float_float_float(ctx, temp1, (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y) + (frame[2].f)), ((jfloat(3.5f)) * (frame[12].f)));
	LINE_NUMBER(514);
	INST_IINC(14, 1);
	goto label_23;
	}
label_24:;
	{
	LINE_NUMBER(526);
	((func_mindustry_world_blocks_storage_CoreBlock$CoreBuild_drawLandingThrusters_float_float_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_storage_CoreBlock$CoreBuild_drawLandingThrusters_float_float_float_float])(ctx, (frame[0].o), (frame[1].f), (frame[2].f), (frame[8].f), (frame[10].f));
	LINE_NUMBER(528);
	sp[0].o = (jobject)((mindustry_world_blocks_storage_CoreBlock$CoreBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_region;
	SM_mindustry_graphics_Drawf_spinSprite_arc_graphics_g2d_TextureRegion_float_float_float(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[8].f));
	LINE_NUMBER(530);
	clinit_arc_math_Interp(ctx);
	sp[0].o = (jobject)SF_arc_math_Interp_pow4In;
	jfloat temp0 = (jfloat)((func_arc_math_Interp$PowIn_apply_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Interp$PowIn_apply_float_R_float])(ctx, sp[0].o, (frame[10].f));
	SM_arc_graphics_g2d_Draw_alpha_float(ctx, temp0);
	LINE_NUMBER(531);
	((func_mindustry_world_blocks_storage_CoreBlock$CoreBuild_drawLandingThrusters_float_float_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_storage_CoreBlock$CoreBuild_drawLandingThrusters_float_float_float_float])(ctx, (frame[0].o), (frame[1].f), (frame[2].f), (frame[8].f), (frame[10].f));
	LINE_NUMBER(532);
	SM_arc_graphics_g2d_Draw_alpha_float(ctx, (jfloat(1)));
	LINE_NUMBER(534);
	sp[0].o = (jobject)((mindustry_world_blocks_storage_CoreBlock$CoreBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_teamRegions;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((mindustry_game_Team *) NULL_CHECK(sp[1].o))->F_id));
	sp[1].o = (jobject)((mindustry_world_blocks_storage_CoreBlock$CoreBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_teamRegion;
	if (sp[0].o != sp[1].o) goto label_38;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	sp[0].o = (jobject)((mindustry_game_Team *) NULL_CHECK(sp[0].o))->F_color;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	}
label_38:;
	{
	LINE_NUMBER(536);
	sp[0].o = (jobject)((mindustry_world_blocks_storage_CoreBlock$CoreBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_teamRegions;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	SM_mindustry_graphics_Drawf_spinSprite_arc_graphics_g2d_TextureRegion_float_float_float(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((mindustry_game_Team *) NULL_CHECK(sp[1].o))->F_id))), (frame[1].f), (frame[2].f), (frame[8].f));
	LINE_NUMBER(538);
	SM_arc_graphics_g2d_Draw_color(ctx);
	LINE_NUMBER(539);
	SM_arc_graphics_g2d_Draw_scl(ctx);
	LINE_NUMBER(540);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(541);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_drawLandingThrusters_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/storage/CoreBlock$CoreBuild:drawLandingThrusters", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(544);
	sp[0].o = (jobject)((mindustry_world_blocks_storage_CoreBlock$CoreBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	frame[5].f = ((((jfloat)((mindustry_world_blocks_storage_CoreBlock *) NULL_CHECK(sp[0].o))->F_thrusterLength) * ((frame[4].f) - (jfloat(1)))) - (jfloat(0.25f)));
	LINE_NUMBER(545);
	jfloat temp0 = (jfloat)SM_arc_graphics_g2d_Draw_getColorAlpha_R_float(ctx);
	frame[6].f = temp0;
	LINE_NUMBER(548);
	frame[7].i = (jint(0));
	}
label_3:;
	{
	if ((frame[7].i) >= (jint(2))) goto label_4;
	}
	{
	LINE_NUMBER(549);
	frame[8].i = (jint(0));
	}
label_6:;
	{
	if ((frame[8].i) >= (jint(4))) goto label_7;
	}
	{
	LINE_NUMBER(550);
	if ((frame[8].i) < (jint(2))) goto label_9;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_storage_CoreBlock$CoreBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_storage_CoreBlock *) NULL_CHECK(sp[0].o))->F_thruster2;
	sp += 1;
	goto label_10;
	}
label_9:;
	{
	sp[0].o = (jobject)((mindustry_world_blocks_storage_CoreBlock$CoreBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_storage_CoreBlock *) NULL_CHECK(sp[0].o))->F_thruster1;
	sp += 1;
	}
label_10:;
	{
	sp -= 1;
	frame[9].o = sp[0].o;
	LINE_NUMBER(551);
	frame[10].f = ((jfloat(((frame[8].i) * (90)))) + (fmodf((frame[3].f), (jfloat(90.0f)))));
	LINE_NUMBER(552);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[10].f), ((frame[5].f) * (clinit_arc_graphics_g2d_Draw(ctx), (jfloat)SF_arc_graphics_g2d_Draw_xscl)));
	LINE_NUMBER(555);
	if ((frame[7].i) != (jint(1))) goto label_14;
	}
	{
	LINE_NUMBER(556);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_rotate_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_rotate_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (jfloat(-90.0f)));
	LINE_NUMBER(557);
	SM_arc_graphics_g2d_Draw_alpha_float(ctx, (((fmodf((frame[3].f), (jfloat(90.0f)))) / (jfloat(90.0f))) * (frame[6].f)));
	LINE_NUMBER(558);
	frame[10].f = ((frame[10].f) - (jfloat(90.0f)));
	LINE_NUMBER(559);
	sp[0].o = frame[9].o;
	jfloat temp0 = frame[1].f;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp1 = temp0 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x);
	jfloat temp2 = frame[2].f;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float(ctx, sp[0].o, temp1, (temp2 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y)), (frame[10].f));
	goto label_19;
	}
label_14:;
	{
	LINE_NUMBER(561);
	SM_arc_graphics_g2d_Draw_alpha_float(ctx, (frame[6].f));
	LINE_NUMBER(562);
	sp[0].o = frame[9].o;
	jfloat temp0 = frame[1].f;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp1 = temp0 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x);
	jfloat temp2 = frame[2].f;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float(ctx, sp[0].o, temp1, (temp2 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y)), (frame[10].f));
	}
label_19:;
	{
	LINE_NUMBER(549);
	INST_IINC(8, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(548);
	INST_IINC(7, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(566);
	SM_arc_graphics_g2d_Draw_alpha_float(ctx, (jfloat(1)));
	LINE_NUMBER(567);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_drawThrusters_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/storage/CoreBlock$CoreBuild:drawThrusters", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(570);
	sp[0].o = (jobject)((mindustry_world_blocks_storage_CoreBlock$CoreBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	frame[2].f = ((((jfloat)((mindustry_world_blocks_storage_CoreBlock *) NULL_CHECK(sp[0].o))->F_thrusterLength) * ((frame[1].f) - (jfloat(1)))) - (jfloat(0.25f)));
	LINE_NUMBER(571);
	frame[3].i = (jint(0));
	}
label_2:;
	{
	if ((frame[3].i) >= (jint(4))) goto label_3;
	}
	{
	LINE_NUMBER(572);
	if ((frame[3].i) < (jint(2))) goto label_5;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_storage_CoreBlock$CoreBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_storage_CoreBlock *) NULL_CHECK(sp[0].o))->F_thruster2;
	sp += 1;
	goto label_6;
	}
label_5:;
	{
	sp[0].o = (jobject)((mindustry_world_blocks_storage_CoreBlock$CoreBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_storage_CoreBlock *) NULL_CHECK(sp[0].o))->F_thruster1;
	sp += 1;
	}
label_6:;
	{
	sp -= 1;
	frame[4].o = sp[0].o;
	LINE_NUMBER(573);
	clinit_arc_math_geom_Geometry(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Geometry_d4x;
	frame[5].f = ((jfloat(((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[3].i))))) * (frame[2].f));
	clinit_arc_math_geom_Geometry(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Geometry_d4y;
	frame[6].f = ((jfloat(((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[3].i))))) * (frame[2].f));
	LINE_NUMBER(574);
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float(ctx, (frame[4].o), (((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x) + (frame[5].f)), (((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y) + (frame[6].f)), (jfloat(((frame[3].i) * (90)))));
	LINE_NUMBER(571);
	INST_IINC(3, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(576);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_damage_mindustry_game_Team_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/storage/CoreBlock$CoreBuild:damage", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(580);
	if ((floatCompare(((jfloat)((mindustry_world_blocks_storage_CoreBlock$CoreBuild *) NULL_CHECK((frame[0].o)))->F_iframes), (jfloat(0)), -1)) <= 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(582);
	if ((frame[1].o) == nullptr) goto label_2;
	}
	{
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	if (sp[0].o == sp[1].o) goto label_2;
	}
	{
	LINE_NUMBER(583);
	((mindustry_world_blocks_storage_CoreBlock$CoreBuild *) NULL_CHECK((frame[0].o)))->F_lastDamage = (jref) (frame[1].o);
	}
label_2:;
	{
	LINE_NUMBER(585);
	M_mindustry_gen_Building_damage_mindustry_game_Team_float(ctx, (frame[0].o), (frame[1].o), (frame[2].f));
	LINE_NUMBER(586);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_created(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/storage/CoreBlock$CoreBuild:created", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(590);
	M_mindustry_gen_Building_created(ctx, (frame[0].o));
	LINE_NUMBER(591);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_configurable = ((jint)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_coreBuildAndConfig);
	LINE_NUMBER(593);
	clinit_mindustry_game_EventType$CoreChangeEvent(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$CoreChangeEvent);
	init_mindustry_game_EventType$CoreChangeEvent_mindustry_world_blocks_storage_CoreBlock$CoreBuild(ctx, sp[0].o, (frame[0].o));
	SM_arc_Events_fire_java_lang_Object(ctx, sp[0].o);
	LINE_NUMBER(594);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_changeTeam_mindustry_game_Team(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/storage/CoreBlock$CoreBuild:changeTeam", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(598);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	if (sp[0].o != (frame[1].o)) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(600);
	((func_mindustry_world_blocks_storage_CoreBlock$CoreBuild_onRemoved) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_storage_CoreBlock$CoreBuild_onRemoved])(ctx, (frame[0].o));
	LINE_NUMBER(602);
	M_mindustry_gen_Building_changeTeam_mindustry_game_Team(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(604);
	((func_mindustry_world_blocks_storage_CoreBlock$CoreBuild_onProximityUpdate) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_storage_CoreBlock$CoreBuild_onProximityUpdate])(ctx, (frame[0].o));
	LINE_NUMBER(606);
	clinit_mindustry_game_EventType$CoreChangeEvent(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$CoreChangeEvent);
	init_mindustry_game_EventType$CoreChangeEvent_mindustry_world_blocks_storage_CoreBlock$CoreBuild(ctx, sp[0].o, (frame[0].o));
	SM_arc_Events_fire_java_lang_Object(ctx, sp[0].o);
	LINE_NUMBER(607);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jdouble M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_sense_mindustry_logic_LAccess_R_double(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/storage/CoreBlock$CoreBuild:sense", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(611);
	sp[0].o = frame[1].o;
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_itemCapacity;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	popStackFrame(ctx);
	return (jdouble(((jint)((mindustry_world_blocks_storage_CoreBlock$CoreBuild *) NULL_CHECK((frame[0].o)))->F_storageCapacity)));
	}
label_1:;
	{
	LINE_NUMBER(612);
	sp[0].o = frame[1].o;
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_maxUnits;
	if (sp[0].o != sp[1].o) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	jint temp0 = (jint)SM_mindustry_entities_Units_getCap_mindustry_game_Team_R_int(ctx, sp[0].o);
	popStackFrame(ctx);
	return (jdouble(temp0));
	}
label_2:;
	{
	LINE_NUMBER(613);
	jdouble temp0 = (jdouble)M_mindustry_gen_Building_sense_mindustry_logic_LAccess_R_double(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jdouble M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_sense_mindustry_ctype_Content_R_double(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/storage/CoreBlock$CoreBuild:sense", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(618);
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_type_UnitType)) == 0) goto label_1;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_type_UnitType, (frame[1].o)));
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	sp[0].o = (jobject)((func_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData])(ctx, sp[0].o);
	jint temp0 = (jint)((func_mindustry_game_Teams$TeamData_countType_mindustry_type_UnitType_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Teams$TeamData_countType_mindustry_type_UnitType_R_int])(ctx, sp[0].o, (frame[2].o));
	popStackFrame(ctx);
	return (jdouble(temp0));
	}
label_1:;
	{
	LINE_NUMBER(619);
	jdouble temp0 = (jdouble)M_mindustry_gen_Building_sense_mindustry_ctype_Content_R_double(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_canControlSelect_mindustry_gen_Unit_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/storage/CoreBlock$CoreBuild:canControlSelect", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(624);
	jint temp0 = (jint)((func_mindustry_gen_Unit_isPlayer_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_isPlayer_R_boolean])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_onControlSelect_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/storage/CoreBlock$CoreBuild:onControlSelect", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(629);
	jint temp0 = (jint)((func_mindustry_gen_Unit_isPlayer_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_isPlayer_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_storage_CoreBlock$CoreBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((mindustry_world_blocks_storage_CoreBlock *) NULL_CHECK(sp[0].o))->F_allowSpawn) != 0) goto label_2;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(630);
	sp[0].o = (jobject)((func_mindustry_gen_Unit_getPlayer_R_mindustry_gen_Player) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_getPlayer_R_mindustry_gen_Player])(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(632);
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_spawn;
	((func_mindustry_entities_Effect_at_arc_math_geom_Position) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_arc_math_geom_Position])(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(633);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_5;
	}
	{
	sp[0].o = frame[2].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	if (sp[0].o != sp[1].o) goto label_5;
	}
	{
	LINE_NUMBER(634);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_input;
	((mindustry_input_InputHandler *) NULL_CHECK(sp[0].o))->F_controlledType = (jref) (jobject(nullptr));
	}
label_5:;
	{
	LINE_NUMBER(637);
	((func_mindustry_gen_Player_clearUnit) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_gen_Player_clearUnit])(ctx, (frame[2].o));
	LINE_NUMBER(638);
	((mindustry_gen_Player *) NULL_CHECK((frame[2].o)))->F_deathTimer = (jfloat(61.0f));
	LINE_NUMBER(639);
	((func_mindustry_world_blocks_storage_CoreBlock$CoreBuild_requestSpawn_mindustry_gen_Player) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_storage_CoreBlock$CoreBuild_requestSpawn_mindustry_gen_Player])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(640);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_requestSpawn_mindustry_gen_Player(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/storage/CoreBlock$CoreBuild:requestSpawn", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(644);
	sp[0].o = (jobject)((mindustry_world_blocks_storage_CoreBlock$CoreBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_storage_CoreBlock *) NULL_CHECK(sp[0].o))->F_unitType;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	jint temp0 = (jint)((func_mindustry_type_UnitType_supportsEnv_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_UnitType_supportsEnv_int_R_boolean])(ctx, sp[0].o, ((jint)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_env));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_storage_CoreBlock$CoreBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((mindustry_world_blocks_storage_CoreBlock *) NULL_CHECK(sp[0].o))->F_allowSpawn) != 0) goto label_2;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(646);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	SM_mindustry_gen_Call_playerSpawn_mindustry_world_Tile_mindustry_gen_Player(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(647);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_updateTile(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/storage/CoreBlock$CoreBuild:updateTile", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(651);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_configurable = ((jint)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_coreBuildAndConfig);
	LINE_NUMBER(652);
	sp[0].o = frame[0].o;
	((mindustry_world_blocks_storage_CoreBlock$CoreBuild *) NULL_CHECK(sp[0].o))->F_iframes = (((jfloat)((mindustry_world_blocks_storage_CoreBlock$CoreBuild *) NULL_CHECK(sp[0].o))->F_iframes) - (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta));
	LINE_NUMBER(653);
	sp[0].o = frame[0].o;
	((mindustry_world_blocks_storage_CoreBlock$CoreBuild *) NULL_CHECK(sp[0].o))->F_thrusterTime = (((jfloat)((mindustry_world_blocks_storage_CoreBlock$CoreBuild *) NULL_CHECK(sp[0].o))->F_thrusterTime) - ((clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta) / (jfloat(90.0f))));
	LINE_NUMBER(654);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_zoomLaunch_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/storage/CoreBlock$CoreBuild:zoomLaunch", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(659);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	sp[0].o = (jobject)((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_position;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_arc_math_geom_Position_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Position_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(660);
	sp[0].o = (jobject)((mindustry_world_blocks_storage_CoreBlock$CoreBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_storage_CoreBlock *) NULL_CHECK(sp[0].o))->F_landZoomInterp;
	sp[1].o = (jobject)((mindustry_world_blocks_storage_CoreBlock$CoreBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp0 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, ((jfloat)((mindustry_world_blocks_storage_CoreBlock *) NULL_CHECK(sp[1].o))->F_landZoomFrom));
	sp[1].o = (jobject)((mindustry_world_blocks_storage_CoreBlock$CoreBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp1 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, ((jfloat)((mindustry_world_blocks_storage_CoreBlock *) NULL_CHECK(sp[1].o))->F_landZoomTo));
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_renderer;
	jfloat temp2 = (jfloat)((func_mindustry_core_Renderer_getLandTimeIn_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_Renderer_getLandTimeIn_R_float])(ctx, sp[1].o);
	jfloat temp3 = (jfloat)((func_arc_math_Interp_apply_float_float_float_R_float) resolveInterfaceMethod(ctx, &class_arc_math_Interp, INDEX_arc_math_Interp_apply_float_float_float_R_float, sp[0].o))(ctx, sp[0].o, temp0, temp1, temp2);
	popStackFrame(ctx);
	return temp3;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_updateLaunch(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/storage/CoreBlock$CoreBuild:updateLaunch", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(665);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	jfloat temp0 = (jfloat)((func_mindustry_core_Renderer_getLandTimeIn_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_Renderer_getLandTimeIn_R_float])(ctx, sp[0].o);
	jfloat temp1 = (jfloat)((func_mindustry_world_blocks_storage_CoreBlock$CoreBuild_launchDuration_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_storage_CoreBlock$CoreBuild_launchDuration_R_float])(ctx, (frame[0].o));
	frame[1].f = (temp0 * temp1);
	LINE_NUMBER(666);
	clinit_mindustry_world_blocks_storage_CoreBlock(ctx);
	sp[0].o = (jobject)SF_mindustry_world_blocks_storage_CoreBlock_thrusterSizes;
	jfloat temp2 = (frame[1].f) + (jfloat(35.0f));
	jfloat temp3 = (jfloat)((func_mindustry_world_blocks_storage_CoreBlock$CoreBuild_launchDuration_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_storage_CoreBlock$CoreBuild_launchDuration_R_float])(ctx, (frame[0].o));
	jfloat temp4 = (jfloat)SM_arc_math_Mathf_sample_Array1_float_float_R_float(ctx, sp[0].o, (temp2 / temp3));
	frame[2].f = temp4;
	LINE_NUMBER(668);
	sp[0].o = frame[0].o;
	((mindustry_world_blocks_storage_CoreBlock$CoreBuild *) NULL_CHECK(sp[0].o))->F_landParticleTimer = (((jfloat)((mindustry_world_blocks_storage_CoreBlock$CoreBuild *) NULL_CHECK(sp[0].o))->F_landParticleTimer) + ((frame[2].f) * (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta)));
	LINE_NUMBER(669);
	if ((floatCompare(((jfloat)((mindustry_world_blocks_storage_CoreBlock$CoreBuild *) NULL_CHECK((frame[0].o)))->F_landParticleTimer), (jfloat(1)), -1)) < 0) goto label_4;
	}
	{
	LINE_NUMBER(670);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_storage_CoreBlock$CoreBuild_invoke_arc_func_Cons_5(ctx);
		auto proxy = (mindustry_world_blocks_storage_CoreBlock$CoreBuild_invoke_arc_func_Cons_5 *) gcAlloc(ctx, &class_mindustry_world_blocks_storage_CoreBlock$CoreBuild_invoke_arc_func_Cons_5);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_world_Tile_getLinkedTiles_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_getLinkedTiles_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(676);
	((mindustry_world_blocks_storage_CoreBlock$CoreBuild *) NULL_CHECK((frame[0].o)))->F_landParticleTimer = (jfloat(0));
	}
label_4:;
	LINE_NUMBER(678);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_onDestroyed(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/storage/CoreBlock$CoreBuild:onDestroyed", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(682);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_coreCapture) == 0) goto label_1;
	}
	{
	LINE_NUMBER(684);
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	jfloat temp2 = jfloat(0);
	jfloat temp3 = jfloat(0);
	jfloat temp4 = jfloat(0);
	jint temp5 = 8;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	jfloat temp6 = (jfloat((temp5 * ((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size)))) / (jfloat(2));
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	SM_mindustry_entities_Damage_dynamicExplosion_float_float_float_float_float_float_boolean(ctx, temp0, temp1, temp2, temp3, temp4, temp6, ((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_damageExplosions));
	LINE_NUMBER(685);
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_commandSend;
	((func_mindustry_entities_Effect_at_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float])(ctx, sp[0].o, ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y), (jfloat(140.0f)));
	LINE_NUMBER(688);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_headless) != 0) goto label_5;
	}
	{
	LINE_NUMBER(689);
	((func_mindustry_world_blocks_storage_CoreBlock$CoreBuild_playDestroySound) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_storage_CoreBlock$CoreBuild_playDestroySound])(ctx, (frame[0].o));
	goto label_5;
	}
label_1:;
	{
	LINE_NUMBER(692);
	M_mindustry_gen_Building_onDestroyed(ctx, (frame[0].o));
	}
label_5:;
	{
	LINE_NUMBER(695);
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	jfloat temp2 = jfloat(40.0f);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	SM_mindustry_entities_Effect_shockwaveDust_float_float_float_float(ctx, temp0, temp1, (temp2 + (jfloat((((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size) * (8))))), (jfloat(0.5f)));
	LINE_NUMBER(696);
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_coreExplosion;
	jfloat temp3 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp4 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	sp[1].o = (jobject)((mindustry_game_Team *) NULL_CHECK(sp[1].o))->F_color;
	((func_mindustry_entities_Effect_at_float_float_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_arc_graphics_Color])(ctx, sp[0].o, temp3, temp4, sp[1].o);
	LINE_NUMBER(699);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp5 = (jint)((func_mindustry_core_GameState_isCampaign_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isCampaign_R_boolean])(ctx, sp[0].o);
	if (temp5 == 0) goto label_9;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_waveTeam;
	if (sp[0].o != sp[1].o) goto label_9;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	sp[0].o = (jobject)((func_mindustry_game_Team_cores_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_cores_R_arc_struct_Seq])(ctx, sp[0].o);
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) > (jint(1))) goto label_9;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_spawner;
	sp[0].o = (jobject)((func_mindustry_ai_WaveSpawner_getSpawns_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_WaveSpawner_getSpawns_R_arc_struct_Seq])(ctx, sp[0].o);
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) != 0) goto label_9;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_sector;
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_planet;
	if (((jint)((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_enemyCoreSpawnReplace) == 0) goto label_9;
	}
	{
	LINE_NUMBER(701);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_spawn;
	((func_mindustry_world_Tile_setOverlayQuiet_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_setOverlayQuiet_mindustry_world_Block])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(703);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_spawner;
	sp[0].o = (jobject)((func_mindustry_ai_WaveSpawner_getSpawns_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_WaveSpawner_getSpawns_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	jint temp0 = (jint)((func_arc_struct_Seq_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_9;
	}
	{
	LINE_NUMBER(704);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_spawner;
	sp[0].o = (jobject)((func_mindustry_ai_WaveSpawner_getSpawns_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_WaveSpawner_getSpawns_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	}
label_9:;
	{
	LINE_NUMBER(708);
	clinit_mindustry_game_EventType$CoreChangeEvent(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$CoreChangeEvent);
	init_mindustry_game_EventType$CoreChangeEvent_mindustry_world_blocks_storage_CoreBlock$CoreBuild(ctx, sp[0].o, (frame[0].o));
	SM_arc_Events_fire_java_lang_Object(ctx, sp[0].o);
	LINE_NUMBER(709);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_playDestroySound(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/storage/CoreBlock$CoreBuild:playDestroySound", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(713);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	sp[0].o = (jobject)((func_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK(sp[0].o))->F_cores;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) > (jint(1))) goto label_1;
	}
	clinit_mindustry_Vars(ctx);
	(sp++)->o = SF_mindustry_Vars_player;
	if ((--sp)->o == nullptr) goto label_1;
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[0].o);
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_canGameOver) == 0) goto label_1;
	}
	{
	LINE_NUMBER(715);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_destroySound;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	jfloat temp0 = (jfloat)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_destroySoundVolume;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_audio;
	jfloat temp1 = temp0 * ((jfloat)((arc_audio_Audio *) NULL_CHECK(sp[1].o))->F_sfxVolume);
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	jfloat temp2 = (jfloat)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_destroyPitchMin;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	jfloat temp3 = (jfloat)SM_arc_math_Mathf_random_float_float_R_float(ctx, temp2, ((jfloat)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_destroyPitchMax));
	jint temp4 = (jint)((func_arc_audio_Sound_play_float_float_float_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Sound_play_float_float_float_R_int])(ctx, sp[0].o, temp1, temp3, (jfloat(0)));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(717);
	M_mindustry_gen_Building_playDestroySound(ctx, (frame[0].o));
	}
label_3:;
	LINE_NUMBER(719);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_afterDestroyed(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/storage/CoreBlock$CoreBuild:afterDestroyed", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(723);
	M_mindustry_gen_Building_afterDestroyed(ctx, (frame[0].o));
	LINE_NUMBER(724);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_coreCapture) == 0) goto label_2;
	}
	{
	LINE_NUMBER(725);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
	{
	LINE_NUMBER(726);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	sp[2].o = (jobject)((mindustry_world_blocks_storage_CoreBlock$CoreBuild *) NULL_CHECK((frame[0].o)))->F_lastDamage;
	((func_mindustry_world_Tile_setBlock_mindustry_world_Block_mindustry_game_Team) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_setBlock_mindustry_world_Block_mindustry_game_Team])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(729);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_build;
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_storage_CoreBlock$CoreBuild, sp[0].o);
	sp[1].o = (jobject)((mindustry_world_blocks_storage_CoreBlock$CoreBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	((mindustry_world_blocks_storage_CoreBlock$CoreBuild *) NULL_CHECK(sp[0].o))->F_iframes = ((jfloat)((mindustry_world_blocks_storage_CoreBlock *) NULL_CHECK(sp[1].o))->F_captureInvicibility);
	LINE_NUMBER(731);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(733);
	jfloat temp0 = jfloat(0);
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_storage_CoreBlock$CoreBuild_invoke_java_lang_Runnable_13(ctx);
		auto proxy = (mindustry_world_blocks_storage_CoreBlock$CoreBuild_invoke_java_lang_Runnable_13 *) gcAlloc(ctx, &class_mindustry_world_blocks_storage_CoreBlock$CoreBuild_invoke_java_lang_Runnable_13);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	SM_arc_util_Time_run_float_java_lang_Runnable(ctx, temp0, sp[0].o);
	}
label_2:;
	LINE_NUMBER(739);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_drawLight(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/storage/CoreBlock$CoreBuild:drawLight", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(743);
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	sp[0].o = (jobject)((mindustry_world_blocks_storage_CoreBlock$CoreBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp2 = (jfloat)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_lightRadius;
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_accent;
	jfloat temp3 = jfloat(0.65f);
	jfloat temp4 = (jfloat)SM_arc_math_Mathf_absin_float_float_R_float(ctx, (jfloat(20.0f)), (jfloat(0.1f)));
	SM_mindustry_graphics_Drawf_light_float_float_float_arc_graphics_Color_float(ctx, temp0, temp1, temp2, sp[0].o, (temp3 + temp4));
	LINE_NUMBER(744);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_acceptItem_mindustry_gen_Building_mindustry_type_Item_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/storage/CoreBlock$CoreBuild:acceptItem", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(748);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_coreIncinerates) != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = (jint)((func_mindustry_world_modules_ItemModule_get_mindustry_type_Item_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_get_mindustry_type_Item_R_int])(ctx, sp[0].o, (frame[2].o));
	jint temp1 = (jint)((func_mindustry_world_blocks_storage_CoreBlock$CoreBuild_getMaximumAccepted_mindustry_type_Item_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_storage_CoreBlock$CoreBuild_getMaximumAccepted_mindustry_type_Item_R_int])(ctx, (frame[0].o), (frame[2].o));
	if (temp0 >= temp1) goto label_2;
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

jint M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_getMaximumAccepted_mindustry_type_Item_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/storage/CoreBlock$CoreBuild:getMaximumAccepted", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(753);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_coreIncinerates) == 0) goto label_1;
	}
	(sp++)->i = jint(1073741823);
	goto label_2;
label_1:;
	INST_ALOAD(0);
	sp[-1].i = ((mindustry_world_blocks_storage_CoreBlock$CoreBuild *) NULL_CHECK(sp[-1].o))->F_storageCapacity;
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_onProximityUpdate(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/storage/CoreBlock$CoreBuild:onProximityUpdate", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	if (frame[0].o == nullptr) {
		popStackFrame(ctx);
		return;
	}
	{
	LINE_NUMBER(758);
	M_mindustry_gen_Building_onProximityUpdate(ctx, (frame[0].o));
	LINE_NUMBER(760);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = sp[0].o != nullptr ? (jobject)((mindustry_core_GameState *) sp[0].o)->F_teams : nullptr;
	sp[1].o = (jobject)((mindustry_gen_Building *) (frame[0].o))->F_team;
	if (sp[0].o != nullptr && sp[1].o != nullptr) {
		sp[0].o = (jobject)((func_mindustry_game_Teams_cores_mindustry_game_Team_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Teams_cores_mindustry_game_Team_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
		sp[0].o = sp[0].o != nullptr ? (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o) : nullptr;
	} else {
		sp[0].o = nullptr;
	}
	frame[1].o = sp[0].o;
	}
label_2:;
	if (frame[1].o == nullptr) goto label_3;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = sp[0].o != nullptr ? (checkCast(ctx, &class_mindustry_gen_Building, sp[0].o)) : nullptr;
	LINE_NUMBER(761);
	if (frame[2].o == nullptr) goto label_2;
	sp[0].o = (jobject)((mindustry_gen_Building *) (frame[2].o))->F_tile;
	sp[1].o = (jobject)((mindustry_gen_Building *) (frame[0].o))->F_tile;
	if (sp[0].o == sp[1].o) goto label_5;
	}
	{
	LINE_NUMBER(762);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_gen_Building *) (frame[2].o))->F_items;
	if (sp[1].o != nullptr) {
		((mindustry_gen_Building *) (sp[0].o))->F_items = (jref) sp[1].o;
	}
	}
label_5:;
	LINE_NUMBER(764);
	goto label_2;
label_3:;
	{
	LINE_NUMBER(765);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	if (sp[0].o != nullptr) {
		sp[0].o = (jobject)((mindustry_core_GameState *) sp[0].o)->F_teams;
		if (sp[0].o != nullptr) {
			((func_mindustry_game_Teams_registerCore_mindustry_world_blocks_storage_CoreBlock$CoreBuild) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Teams_registerCore_mindustry_world_blocks_storage_CoreBlock$CoreBuild])(ctx, sp[0].o, (frame[0].o));
		}
	}
	LINE_NUMBER(767);
	{
		jobject blockObj = (jobject)((mindustry_world_blocks_storage_CoreBlock$CoreBuild *) frame[0].o)->F_this$0;
		if (blockObj == nullptr) {
			blockObj = (jobject)((mindustry_gen_Building *) frame[0].o)->F_block;
		}
		jint temp0 = blockObj != nullptr ? (jint)((mindustry_world_Block *) blockObj)->F_itemCapacity : 0;
		jobject proxSeq = (jobject)((mindustry_gen_Building *) frame[0].o)->F_proximity;
		jint temp1 = 0;
		if (proxSeq != nullptr) {
			clinit_mindustry_world_blocks_storage_CoreBlock$CoreBuild_invoke_arc_func_Intf_3(ctx);
			auto proxy = (mindustry_world_blocks_storage_CoreBlock$CoreBuild_invoke_arc_func_Intf_3 *) gcAlloc(ctx, &class_mindustry_world_blocks_storage_CoreBlock$CoreBuild_invoke_arc_func_Intf_3);
			proxy->F_field0 = (jref) (frame[0].o);
			temp1 = (jint)((func_arc_struct_Seq_sum_arc_func_Intf_R_int) ((void **) nullCheck(ctx, proxSeq)->vtable)[VTABLE_arc_struct_Seq_sum_arc_func_Intf_R_int])(ctx, proxSeq, (jobject) proxy);
		}
		((mindustry_world_blocks_storage_CoreBlock$CoreBuild *) frame[0].o)->F_storageCapacity = (temp0 + temp1);
		LINE_NUMBER(768);
		if (proxSeq != nullptr) {
			clinit_mindustry_world_blocks_storage_CoreBlock$CoreBuild_invoke_arc_func_Boolf_4(ctx);
			auto proxy1 = (mindustry_world_blocks_storage_CoreBlock$CoreBuild_invoke_arc_func_Boolf_4 *) gcAlloc(ctx, &class_mindustry_world_blocks_storage_CoreBlock$CoreBuild_invoke_arc_func_Boolf_4);
			proxy1->F_field0 = (jref) (frame[0].o);
			clinit_mindustry_world_blocks_storage_CoreBlock$CoreBuild_invoke_arc_func_Cons_6(ctx);
			auto proxy2 = (mindustry_world_blocks_storage_CoreBlock$CoreBuild_invoke_arc_func_Cons_6 *) gcAlloc(ctx, &class_mindustry_world_blocks_storage_CoreBlock$CoreBuild_invoke_arc_func_Cons_6);
			proxy2->F_field0 = (jref) (frame[0].o);
			((func_arc_struct_Seq_each_arc_func_Boolf_arc_func_Cons) ((void **) nullCheck(ctx, proxSeq)->vtable)[VTABLE_arc_struct_Seq_each_arc_func_Boolf_arc_func_Cons])(ctx, proxSeq, (jobject) proxy1, (jobject) proxy2);
		}
	}
	LINE_NUMBER(773);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = sp[0].o != nullptr ? (jobject)((mindustry_core_GameState *) sp[0].o)->F_teams : nullptr;
	sp[1].o = (jobject)((mindustry_gen_Building *) (frame[0].o))->F_team;
	if (sp[0].o != nullptr && sp[1].o != nullptr) {
		sp[0].o = (jobject)((func_mindustry_game_Teams_cores_mindustry_game_Team_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Teams_cores_mindustry_game_Team_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
		sp[0].o = sp[0].o != nullptr ? (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o) : nullptr;
	} else {
		sp[0].o = nullptr;
	}
	frame[1].o = sp[0].o;
	}
label_10:;
	if (frame[1].o == nullptr) goto label_11;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_11;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = sp[0].o != nullptr ? (checkCast(ctx, &class_mindustry_gen_Building, sp[0].o)) : nullptr;
	LINE_NUMBER(774);
	if (frame[2].o == nullptr) goto label_10;
	sp[0].o = (jobject)((mindustry_gen_Building *) (frame[2].o))->F_tile;
	sp[1].o = (jobject)((mindustry_gen_Building *) (frame[0].o))->F_tile;
	if (sp[0].o != sp[1].o) goto label_13;
	}
	goto label_10;
label_13:;
	{
	LINE_NUMBER(775);
	jint temp0 = (jint)((mindustry_world_blocks_storage_CoreBlock$CoreBuild *) (frame[0].o))->F_storageCapacity;
	sp[1].o = (jobject)((mindustry_gen_Building *) (frame[2].o))->F_block;
	jint temp1 = sp[1].o != nullptr ? (jint)((mindustry_world_Block *) sp[1].o)->F_itemCapacity : 0;
	jobject otherProx = (jobject)((mindustry_gen_Building *) (frame[2].o))->F_proximity;
	jint temp2 = 0;
	if (otherProx != nullptr) {
		clinit_mindustry_world_blocks_storage_CoreBlock$CoreBuild_invoke_arc_func_Intf_4(ctx);
		auto proxy = (mindustry_world_blocks_storage_CoreBlock$CoreBuild_invoke_arc_func_Intf_4 *) gcAlloc(ctx, &class_mindustry_world_blocks_storage_CoreBlock$CoreBuild_invoke_arc_func_Intf_4);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[0].o);
		temp2 = (jint)((func_arc_struct_Seq_sum_arc_func_Intf_R_int) ((void **) nullCheck(ctx, otherProx)->vtable)[VTABLE_arc_struct_Seq_sum_arc_func_Intf_R_int])(ctx, otherProx, (jobject) proxy);
	}
	((mindustry_world_blocks_storage_CoreBlock$CoreBuild *) frame[0].o)->F_storageCapacity = (temp0 + (temp1 + temp2));
	LINE_NUMBER(776);
	goto label_10;
	}
label_11:;
	{
	LINE_NUMBER(778);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp0 = (jint)((func_mindustry_core_World_isGenerating_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_isGenerating_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_15;
	}
	{
	LINE_NUMBER(779);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_items_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_items_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_17:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_15;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_mindustry_type_Item, sp[0].o));
	LINE_NUMBER(780);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	sp[1].o = frame[2].o;
	sp[2].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = (jint)((func_mindustry_world_modules_ItemModule_get_mindustry_type_Item_R_int) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_get_mindustry_type_Item_R_int])(ctx, sp[2].o, (frame[2].o));
	jint temp1 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp0, ((jint)((mindustry_world_blocks_storage_CoreBlock$CoreBuild *) NULL_CHECK((frame[0].o)))->F_storageCapacity));
	((func_mindustry_world_modules_ItemModule_set_mindustry_type_Item_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_set_mindustry_type_Item_int])(ctx, sp[0].o, sp[1].o, temp1);
	LINE_NUMBER(781);
	goto label_17;
	}
label_15:;
	{
	LINE_NUMBER(784);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_teams;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	sp[0].o = (jobject)((func_mindustry_game_Teams_cores_mindustry_game_Team_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Teams_cores_mindustry_game_Team_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_20:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_21;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_mindustry_world_blocks_storage_CoreBlock$CoreBuild, sp[0].o));
	LINE_NUMBER(785);
	((mindustry_world_blocks_storage_CoreBlock$CoreBuild *) NULL_CHECK((frame[2].o)))->F_storageCapacity = ((jint)((mindustry_world_blocks_storage_CoreBlock$CoreBuild *) NULL_CHECK((frame[0].o)))->F_storageCapacity);
	LINE_NUMBER(786);
	goto label_20;
	}
label_21:;
	LINE_NUMBER(787);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_handleStack_mindustry_type_Item_int_mindustry_gen_Teamc(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/storage/CoreBlock$CoreBuild:handleStack", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(791);
	sp[0].o = (jobject)((mindustry_world_blocks_storage_CoreBlock$CoreBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((mindustry_world_blocks_storage_CoreBlock *) NULL_CHECK(sp[0].o))->F_incinerateNonBuildable) == 0) goto label_1;
	}
	{
	if (((jint)((mindustry_type_Item *) NULL_CHECK((frame[1].o)))->F_buildable) != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 1;
	frame[4].i = sp[0].i;
	LINE_NUMBER(792);
	if ((frame[4].i) == 0) goto label_4;
	}
	INST_ICONST(0);
	goto label_5;
label_4:;
	{
	jint temp0 = frame[2].i;
	jint temp1 = (jint)((mindustry_world_blocks_storage_CoreBlock$CoreBuild *) NULL_CHECK((frame[0].o)))->F_storageCapacity;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp2 = (jint)((func_mindustry_world_modules_ItemModule_get_mindustry_type_Item_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_get_mindustry_type_Item_R_int])(ctx, sp[0].o, (frame[1].o));
	jint temp3 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp0, (temp1 - temp2));
	sp[0].i = temp3;
	sp += 1;
	}
label_5:;
	{
	sp -= 1;
	frame[5].i = sp[0].i;
	LINE_NUMBER(793);
	M_mindustry_gen_Building_handleStack_mindustry_type_Item_int_mindustry_gen_Teamc(ctx, (frame[0].o), (frame[1].o), (frame[5].i), (frame[3].o));
	LINE_NUMBER(795);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_defaultTeam;
	if (sp[0].o != sp[1].o) goto label_8;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isCampaign_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isCampaign_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_8;
	}
	{
	LINE_NUMBER(796);
	if ((frame[4].i) != 0) goto label_10;
	}
	{
	LINE_NUMBER(797);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_sector;
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_info;
	((func_mindustry_game_SectorInfo_handleCoreItem_mindustry_type_Item_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_SectorInfo_handleCoreItem_mindustry_type_Item_int])(ctx, sp[0].o, (frame[1].o), (frame[2].i));
	}
label_10:;
	{
	LINE_NUMBER(800);
	if ((frame[5].i) != 0) goto label_8;
	}
	{
	if (((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_wasVisible) == 0) goto label_8;
	}
	{
	LINE_NUMBER(801);
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_coreBurn;
	((func_mindustry_entities_Effect_at_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float])(ctx, sp[0].o, ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y));
	}
label_8:;
	LINE_NUMBER(804);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_removeStack_mindustry_type_Item_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/storage/CoreBlock$CoreBuild:removeStack", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(808);
	jint temp0 = (jint)M_mindustry_gen_Building_removeStack_mindustry_type_Item_int_R_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	frame[3].i = temp0;
	LINE_NUMBER(810);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_defaultTeam;
	if (sp[0].o != sp[1].o) goto label_2;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isCampaign_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isCampaign_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(811);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_sector;
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_info;
	((func_mindustry_game_SectorInfo_handleCoreItem_mindustry_type_Item_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_SectorInfo_handleCoreItem_mindustry_type_Item_int])(ctx, sp[0].o, (frame[1].o), (-(frame[3].i)));
	}
label_2:;
	{
	LINE_NUMBER(814);
	popStackFrame(ctx);
	return (frame[3].i);
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_drawSelect(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/storage/CoreBlock$CoreBuild:drawSelect", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(820);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	sp[0].o = (jobject)((func_mindustry_game_Team_cores_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_cores_R_arc_struct_Seq])(ctx, sp[0].o);
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) > (jint(1))) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_proximity;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_storage_CoreBlock$CoreBuild_invoke_arc_func_Boolf_5(ctx);
		auto proxy = (mindustry_world_blocks_storage_CoreBlock$CoreBuild_invoke_arc_func_Boolf_5 *) gcAlloc(ctx, &class_mindustry_world_blocks_storage_CoreBlock$CoreBuild_invoke_arc_func_Boolf_5);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_arc_struct_Seq_contains_arc_func_Boolf_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_arc_func_Boolf_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(822);
	jfloat temp0 = jfloat(1);
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_accent;
	SM_arc_graphics_g2d_Lines_stroke_float_arc_graphics_Color(ctx, temp0, sp[0].o);
	LINE_NUMBER(823);
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_storage_CoreBlock$CoreBuild_invoke_arc_func_Cons_7(ctx);
		auto proxy = (mindustry_world_blocks_storage_CoreBlock$CoreBuild_invoke_arc_func_Cons_7 *) gcAlloc(ctx, &class_mindustry_world_blocks_storage_CoreBlock$CoreBuild_invoke_arc_func_Cons_7);
		sp[0].o = (jobject) proxy;
	}
	frame[1].o = sp[0].o;
	LINE_NUMBER(830);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	sp[0].o = (jobject)((func_mindustry_game_Team_cores_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_cores_R_arc_struct_Seq])(ctx, sp[0].o);
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_storage_CoreBlock$CoreBuild_invoke_arc_func_Cons_8(ctx);
		auto proxy = (mindustry_world_blocks_storage_CoreBlock$CoreBuild_invoke_arc_func_Cons_8 *) gcAlloc(ctx, &class_mindustry_world_blocks_storage_CoreBlock$CoreBuild_invoke_arc_func_Cons_8);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_struct_Seq_each_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_each_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(834);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(835);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_owns_mindustry_gen_Building_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/storage/CoreBlock$CoreBuild:owns", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(838);
	jint temp0 = (jint)((func_mindustry_world_blocks_storage_CoreBlock$CoreBuild_owns_mindustry_gen_Building_mindustry_gen_Building_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_storage_CoreBlock$CoreBuild_owns_mindustry_gen_Building_mindustry_gen_Building_R_boolean])(ctx, (frame[0].o), (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_owns_mindustry_gen_Building_mindustry_gen_Building_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	if (self == nullptr || param1 == nullptr) return false;
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/storage/CoreBlock$CoreBuild:owns", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(842);
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_world_blocks_storage_StorageBlock$StorageBuild)) == 0) goto label_1;
	}
	{
	frame[3].o = (checkCast(ctx, &class_mindustry_world_blocks_storage_StorageBlock$StorageBuild, (frame[2].o)));
	if (frame[3].o == nullptr) goto label_1;
	sp[0].o = (jobject)((mindustry_gen_Building *) (frame[3].o))->F_block;
	if (sp[0].o == nullptr || !isInstance(ctx, sp[0].o, &class_mindustry_world_blocks_storage_StorageBlock)) goto label_1;
	if (((jint)((mindustry_world_blocks_storage_StorageBlock *) (checkCast(ctx, &class_mindustry_world_blocks_storage_StorageBlock, sp[0].o)))->F_coreMerge) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_storage_StorageBlock$StorageBuild *) (frame[3].o))->F_linkedCore;
	if (sp[0].o == (frame[1].o)) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_storage_StorageBlock$StorageBuild *) (frame[3].o))->F_linkedCore;
	if (sp[0].o != nullptr) goto label_1;
	}
label_3:;
	INST_ICONST(1);
	goto label_4;
label_1:;
	INST_ICONST(0);
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_damage_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/storage/CoreBlock$CoreBuild:damage", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(847);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	sp[1].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[1].o);
	if (sp[0].o != sp[1].o) goto label_1;
	}
	clinit_mindustry_Vars(ctx);
	(sp++)->o = SF_mindustry_Vars_control;
	if ((--sp)->o == nullptr) goto label_1;
	{
	LINE_NUMBER(848);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_lastDamagedCore = (jref) (frame[0].o);
	LINE_NUMBER(849);
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[0].o = (jobject)SF_mindustry_game_EventType$Trigger_teamCoreDamage;
	SM_arc_Events_fire_java_lang_Enum(ctx, sp[0].o);
	}
label_1:;
	{
	LINE_NUMBER(851);
	M_mindustry_gen_Building_damage_float(ctx, (frame[0].o), (frame[1].f));
	LINE_NUMBER(852);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_onRemoved(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/storage/CoreBlock$CoreBuild:onRemoved", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(856);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_proximity;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_storage_CoreBlock$CoreBuild_invoke_arc_func_Intf_5(ctx);
		auto proxy = (mindustry_world_blocks_storage_CoreBlock$CoreBuild_invoke_arc_func_Intf_5 *) gcAlloc(ctx, &class_mindustry_world_blocks_storage_CoreBlock$CoreBuild_invoke_arc_func_Intf_5);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_arc_struct_Seq_sum_arc_func_Intf_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_sum_arc_func_Intf_R_int])(ctx, sp[0].o, sp[1].o);
	frame[1].i = temp0;
	LINE_NUMBER(858);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_proximity;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_storage_CoreBlock$CoreBuild_invoke_arc_func_Boolf_6(ctx);
		auto proxy = (mindustry_world_blocks_storage_CoreBlock$CoreBuild_invoke_arc_func_Boolf_6 *) gcAlloc(ctx, &class_mindustry_world_blocks_storage_CoreBlock$CoreBuild_invoke_arc_func_Boolf_6);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_storage_CoreBlock$CoreBuild_invoke_arc_func_Cons_9(ctx);
		auto proxy = (mindustry_world_blocks_storage_CoreBlock$CoreBuild_invoke_arc_func_Cons_9 *) gcAlloc(ctx, &class_mindustry_world_blocks_storage_CoreBlock$CoreBuild_invoke_arc_func_Cons_9);
		proxy->F_field1 = (frame[1].i);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	((func_arc_struct_Seq_each_arc_func_Boolf_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_each_arc_func_Boolf_arc_func_Cons])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(867);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_teams;
	((func_mindustry_game_Teams_unregisterCore_mindustry_world_blocks_storage_CoreBlock$CoreBuild) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Teams_unregisterCore_mindustry_world_blocks_storage_CoreBlock$CoreBuild])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(869);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_teams;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	sp[0].o = (jobject)((func_mindustry_game_Teams_cores_mindustry_game_Team_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Teams_cores_mindustry_game_Team_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_4:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_mindustry_world_blocks_storage_CoreBlock$CoreBuild, sp[0].o));
	LINE_NUMBER(870);
	((func_mindustry_world_blocks_storage_CoreBlock$CoreBuild_onProximityUpdate) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_world_blocks_storage_CoreBlock$CoreBuild_onProximityUpdate])(ctx, (frame[3].o));
	LINE_NUMBER(871);
	goto label_4;
	}
label_5:;
	LINE_NUMBER(872);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_placed(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/storage/CoreBlock$CoreBuild:placed", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(876);
	M_mindustry_gen_Building_placed(ctx, (frame[0].o));
	LINE_NUMBER(877);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_teams;
	((func_mindustry_game_Teams_registerCore_mindustry_world_blocks_storage_CoreBlock$CoreBuild) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Teams_registerCore_mindustry_world_blocks_storage_CoreBlock$CoreBuild])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(878);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_itemTaken_mindustry_type_Item(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/storage/CoreBlock$CoreBuild:itemTaken", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(882);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isCampaign_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isCampaign_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_defaultTeam;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	LINE_NUMBER(884);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_sector;
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_info;
	((func_mindustry_game_SectorInfo_handleCoreItem_mindustry_type_Item_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_SectorInfo_handleCoreItem_mindustry_type_Item_int])(ctx, sp[0].o, (frame[1].o), (jint(-1)));
	}
label_1:;
	LINE_NUMBER(886);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_handleItem_mindustry_gen_Building_mindustry_type_Item(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/storage/CoreBlock$CoreBuild:handleItem", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(890);
	sp[0].o = (jobject)((mindustry_world_blocks_storage_CoreBlock$CoreBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((mindustry_world_blocks_storage_CoreBlock *) NULL_CHECK(sp[0].o))->F_incinerateNonBuildable) == 0) goto label_1;
	}
	{
	if (((jint)((mindustry_type_Item *) NULL_CHECK((frame[2].o)))->F_buildable) != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 1;
	frame[3].i = sp[0].i;
	LINE_NUMBER(892);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_defaultTeam;
	if (sp[0].o != sp[1].o) goto label_4;
	}
	{
	LINE_NUMBER(893);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_stats;
	sp[0].o = (jobject)((mindustry_game_GameStats *) NULL_CHECK(sp[0].o))->F_coreItemCount;
	jint temp0 = (jint)((func_arc_struct_ObjectIntMap_increment_java_lang_Object_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectIntMap_increment_java_lang_Object_R_int])(ctx, sp[0].o, (frame[2].o));
	}
label_4:;
	{
	LINE_NUMBER(896);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_6;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_active_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_active_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_7;
	}
label_6:;
	{
	LINE_NUMBER(897);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_defaultTeam;
	if (sp[0].o != sp[1].o) goto label_8;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isCampaign_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isCampaign_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_8;
	}
	INST_ILOAD(3);
	if ((--sp)->i != 0) goto label_8;
	{
	LINE_NUMBER(898);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_sector;
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_info;
	((func_mindustry_game_SectorInfo_handleCoreItem_mindustry_type_Item_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_SectorInfo_handleCoreItem_mindustry_type_Item_int])(ctx, sp[0].o, (frame[2].o), (jint(1)));
	}
label_8:;
	{
	LINE_NUMBER(901);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = (jint)((func_mindustry_world_modules_ItemModule_get_mindustry_type_Item_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_get_mindustry_type_Item_R_int])(ctx, sp[0].o, (frame[2].o));
	if (temp0 >= ((jint)((mindustry_world_blocks_storage_CoreBlock$CoreBuild *) NULL_CHECK((frame[0].o)))->F_storageCapacity)) goto label_10;
	}
	INST_ILOAD(3);
	if ((--sp)->i == 0) goto label_11;
label_10:;
	{
	LINE_NUMBER(903);
	if (((jint)((mindustry_world_blocks_storage_CoreBlock$CoreBuild *) NULL_CHECK((frame[0].o)))->F_noEffect) != 0) goto label_12;
	}
	{
	LINE_NUMBER(904);
	SM_mindustry_world_blocks_storage_StorageBlock_incinerateEffect_mindustry_gen_Building_mindustry_gen_Building(ctx, (frame[0].o), (frame[1].o));
	}
label_12:;
	{
	LINE_NUMBER(906);
	((mindustry_world_blocks_storage_CoreBlock$CoreBuild *) NULL_CHECK((frame[0].o)))->F_noEffect = (jint(0));
	goto label_14;
	}
label_11:;
	{
	LINE_NUMBER(908);
	M_mindustry_gen_Building_handleItem_mindustry_gen_Building_mindustry_type_Item(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	goto label_14;
	}
label_7:;
	{
	LINE_NUMBER(910);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_coreIncinerates) == 0) goto label_15;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = (jint)((func_mindustry_world_modules_ItemModule_get_mindustry_type_Item_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_get_mindustry_type_Item_R_int])(ctx, sp[0].o, (frame[2].o));
	if (temp0 >= ((jint)((mindustry_world_blocks_storage_CoreBlock$CoreBuild *) NULL_CHECK((frame[0].o)))->F_storageCapacity)) goto label_16;
	}
label_15:;
	INST_ILOAD(3);
	if ((--sp)->i == 0) goto label_14;
label_16:;
	{
	if (((jint)((mindustry_world_blocks_storage_CoreBlock$CoreBuild *) NULL_CHECK((frame[0].o)))->F_noEffect) != 0) goto label_14;
	}
	{
	LINE_NUMBER(912);
	SM_mindustry_world_blocks_storage_StorageBlock_incinerateEffect_mindustry_gen_Building_mindustry_gen_Building(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(913);
	((mindustry_world_blocks_storage_CoreBlock$CoreBuild *) NULL_CHECK((frame[0].o)))->F_noEffect = (jint(0));
	}
label_14:;
	LINE_NUMBER(915);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbyte M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_version_R_byte(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/storage/CoreBlock$CoreBuild:version", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(919);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_write_arc_util_io_Writes(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/storage/CoreBlock$CoreBuild:write", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(924);
	M_mindustry_gen_Building_write_arc_util_io_Writes(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(925);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_world_blocks_storage_CoreBlock$CoreBuild *) NULL_CHECK((frame[0].o)))->F_commandPos;
	SM_mindustry_io_TypeIO_writeVecNullable_arc_util_io_Writes_arc_math_geom_Vec2(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(926);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_read_arc_util_io_Reads_byte(jcontext ctx, jobject self, jobject param0, jbyte param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/storage/CoreBlock$CoreBuild:read", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(930);
	M_mindustry_gen_Building_read_arc_util_io_Reads_byte(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	LINE_NUMBER(931);
	if ((frame[2].i) < (jint(1))) goto label_2;
	}
	{
	LINE_NUMBER(932);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readVecNullable_arc_util_io_Reads_R_arc_math_geom_Vec2(ctx, (frame[1].o));
	((mindustry_world_blocks_storage_CoreBlock$CoreBuild *) NULL_CHECK(sp[0].o))->F_commandPos = (jref) sp[1].o;
	}
label_2:;
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	if (sp[0].o != nullptr) {
		sp[0].o = (jobject)((mindustry_core_GameState *) sp[0].o)->F_teams;
		if (sp[0].o != nullptr) {
			((func_mindustry_game_Teams_registerCore_mindustry_world_blocks_storage_CoreBlock$CoreBuild) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Teams_registerCore_mindustry_world_blocks_storage_CoreBlock$CoreBuild])(ctx, sp[0].o, (frame[0].o));
		}
	}
	LINE_NUMBER(934);
	popStackFrame(ctx);
	INST_RETURN();
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_lambda$onRemoved$2_int_mindustry_gen_Building(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/storage/CoreBlock$CoreBuild:lambda$onRemoved$2", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(859);
	frame[3].o = (checkCast(ctx, &class_mindustry_world_blocks_storage_StorageBlock$StorageBuild, (frame[2].o)));
	LINE_NUMBER(860);
	((mindustry_world_blocks_storage_StorageBlock$StorageBuild *) NULL_CHECK((frame[3].o)))->F_linkedCore = (jref) (jobject(nullptr));
	LINE_NUMBER(861);
	sp[0].o = frame[3].o;
	clinit_mindustry_world_modules_ItemModule(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_world_modules_ItemModule);
	init_mindustry_world_modules_ItemModule(ctx, sp[1].o);
	((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_items = (jref) sp[1].o;
	LINE_NUMBER(862);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_items_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_items_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	}
label_4:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	frame[5].o = (checkCast(ctx, &class_mindustry_type_Item, sp[0].o));
	LINE_NUMBER(863);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[3].o)))->F_items;
	sp[1].o = frame[5].o;
	sp[2].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[3].o)))->F_block;
	jfloat temp0 = jfloat(((jint)((mindustry_world_Block *) NULL_CHECK(sp[2].o))->F_itemCapacity));
	sp[2].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp1 = (jint)((func_mindustry_world_modules_ItemModule_get_mindustry_type_Item_R_int) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_get_mindustry_type_Item_R_int])(ctx, sp[2].o, (frame[5].o));
	jfloat temp2 = jfloat(temp1);
	sp[2].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[3].o)))->F_block;
	jfloat temp3 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, temp0, ((temp2 * (jfloat(((jint)((mindustry_world_Block *) NULL_CHECK(sp[2].o))->F_itemCapacity)))) / (jfloat((frame[1].i)))));
	((func_mindustry_world_modules_ItemModule_set_mindustry_type_Item_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_set_mindustry_type_Item_int])(ctx, sp[0].o, sp[1].o, (jint(temp3)));
	LINE_NUMBER(864);
	goto label_4;
	}
label_5:;
	LINE_NUMBER(865);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_lambda$onRemoved$1_mindustry_gen_Building_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/storage/CoreBlock$CoreBuild:lambda$onRemoved$1", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(858);
	jint temp0 = (jint)((func_mindustry_world_blocks_storage_CoreBlock$CoreBuild_owns_mindustry_gen_Building_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_storage_CoreBlock$CoreBuild_owns_mindustry_gen_Building_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_items;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_world_blocks_storage_CoreBlock$CoreBuild_owns_mindustry_gen_Building_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_storage_CoreBlock$CoreBuild_owns_mindustry_gen_Building_R_boolean])(ctx, (frame[0].o), (frame[1].o));
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

jint M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_lambda$onRemoved$0_mindustry_gen_Building_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/storage/CoreBlock$CoreBuild:lambda$onRemoved$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(856);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_items;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_items;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_block;
	jint temp0 = (jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_itemCapacity;
	sp[0].i = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_lambda$drawSelect$2_arc_func_Cons_mindustry_world_blocks_storage_CoreBlock$CoreBuild(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/storage/CoreBlock$CoreBuild:lambda$drawSelect$2", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(831);
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o), (frame[2].o));
	LINE_NUMBER(832);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[2].o)))->F_proximity;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_storage_CoreBlock$CoreBuild_invoke_arc_func_Boolf_7(ctx);
		auto proxy = (mindustry_world_blocks_storage_CoreBlock$CoreBuild_invoke_arc_func_Boolf_7 *) gcAlloc(ctx, &class_mindustry_world_blocks_storage_CoreBlock$CoreBuild_invoke_arc_func_Boolf_7);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_struct_Seq_each_arc_func_Boolf_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_each_arc_func_Boolf_arc_func_Cons])(ctx, sp[0].o, sp[1].o, (frame[1].o));
	LINE_NUMBER(833);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_lambda$drawSelect$3_mindustry_gen_Building_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/storage/CoreBlock$CoreBuild:lambda$drawSelect$3", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(832);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_items;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
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

void SM_mindustry_world_blocks_storage_CoreBlock$CoreBuild_lambda$drawSelect$1_mindustry_gen_Building(jcontext ctx, jobject param0) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/storage/CoreBlock$CoreBuild:lambda$drawSelect$1", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_storage_CoreBlock$CoreBuild(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(824);
	frame[1].i = (jint(0));
	}
label_1:;
	{
	if ((frame[1].i) >= (jint(4))) goto label_2;
	}
	{
	LINE_NUMBER(825);
	clinit_arc_math_geom_Geometry(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Geometry_d8edge;
	frame[2].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)));
	LINE_NUMBER(826);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size) - (jint(1))), (jint(0)));
	frame[3].f = (((jfloat((-temp0))) / (jfloat(2))) * (jfloat(8.0f)));
	LINE_NUMBER(827);
	SM_arc_graphics_g2d_Draw_rect_java_lang_String_float_float_float(ctx, (((jobject) createStringLiteral(ctx, u8"block-select"_j))), (((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x) + ((frame[3].f) * (jfloat(((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[2].o)))->F_x))))), (((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y) + ((frame[3].f) * (jfloat(((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[2].o)))->F_y))))), (jfloat(((frame[1].i) * (90)))));
	LINE_NUMBER(824);
	INST_IINC(1, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(829);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_lambda$drawSelect$0_mindustry_gen_Building_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/storage/CoreBlock$CoreBuild:lambda$drawSelect$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(820);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_items;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
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

jint M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_lambda$onProximityUpdate$2_mindustry_gen_Building_mindustry_gen_Building_R_int(jcontext ctx, jobject self, jobject param0, jobject param1) {
	if (self == nullptr || param1 == nullptr) return 0;
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/storage/CoreBlock$CoreBuild:lambda$onProximityUpdate$2", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(775);
	jint temp0 = (jint)((func_mindustry_world_blocks_storage_CoreBlock$CoreBuild_owns_mindustry_gen_Building_mindustry_gen_Building_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_storage_CoreBlock$CoreBuild_owns_mindustry_gen_Building_mindustry_gen_Building_R_boolean])(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) (frame[2].o))->F_block;
	jint temp0 = sp[0].o != nullptr ? (jint)((mindustry_world_Block *) sp[0].o)->F_itemCapacity : 0;
	sp[0].i = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_lambda$onProximityUpdate$1_mindustry_gen_Building(jcontext ctx, jobject self, jobject param0) {
	if (self == nullptr || param0 == nullptr) return;
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/storage/CoreBlock$CoreBuild:lambda$onProximityUpdate$1", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(769);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_Building *) (frame[0].o))->F_items;
	if (sp[1].o != nullptr) {
		((mindustry_gen_Building *) (sp[0].o))->F_items = (jref) sp[1].o;
	}
	LINE_NUMBER(770);
	if (isInstance(ctx, frame[1].o, &class_mindustry_world_blocks_storage_StorageBlock$StorageBuild)) {
		((mindustry_world_blocks_storage_StorageBlock$StorageBuild *) (frame[1].o))->F_linkedCore = (jref) (frame[0].o);
	}
	LINE_NUMBER(771);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_lambda$onProximityUpdate$0_mindustry_gen_Building_R_int(jcontext ctx, jobject self, jobject param0) {
	if (self == nullptr || param0 == nullptr) return 0;
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/storage/CoreBlock$CoreBuild:lambda$onProximityUpdate$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(767);
	jint temp0 = (jint)((func_mindustry_world_blocks_storage_CoreBlock$CoreBuild_owns_mindustry_gen_Building_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_storage_CoreBlock$CoreBuild_owns_mindustry_gen_Building_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) (frame[1].o))->F_block;
	jint temp0 = sp[0].o != nullptr ? (jint)((mindustry_world_Block *) sp[0].o)->F_itemCapacity : 0;
	sp[0].i = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_lambda$afterDestroyed$0(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/storage/CoreBlock$CoreBuild:lambda$afterDestroyed$0", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(734);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	sp[2].o = (jobject)((mindustry_world_blocks_storage_CoreBlock$CoreBuild *) NULL_CHECK((frame[0].o)))->F_lastDamage;
	((func_mindustry_world_Tile_setNet_mindustry_world_Block_mindustry_game_Team_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_setNet_mindustry_world_Block_mindustry_game_Team_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (jint(0)));
	LINE_NUMBER(735);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_lambda$updateLaunch$0_mindustry_world_Tile(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/storage/CoreBlock$CoreBuild:lambda$updateLaunch$0", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(671);
	jint temp0 = (jint)SM_arc_math_Mathf_chance_double_R_boolean(ctx, (jdouble(0.4000000059604645)));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(672);
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_coreLandDust;
	jfloat temp0 = (jfloat)((func_mindustry_world_Tile_worldx_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_worldx_R_float])(ctx, (frame[1].o));
	jfloat temp1 = (jfloat)((func_mindustry_world_Tile_worldy_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_worldy_R_float])(ctx, (frame[1].o));
	sp[1].o = frame[0].o;
	jfloat temp2 = (jfloat)((func_mindustry_world_Tile_worldx_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_worldx_R_float])(ctx, (frame[1].o));
	jfloat temp3 = (jfloat)((func_mindustry_world_Tile_worldy_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_worldy_R_float])(ctx, (frame[1].o));
	jfloat temp4 = (jfloat)((func_mindustry_world_blocks_storage_CoreBlock$CoreBuild_angleTo_float_float_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_blocks_storage_CoreBlock$CoreBuild_angleTo_float_float_R_float])(ctx, sp[1].o, temp2, temp3);
	jfloat temp5 = (jfloat)SM_arc_math_Mathf_range_float_R_float(ctx, (jfloat(30.0f)));
	jfloat temp6 = temp4 + temp5;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_c1;
	sp[2].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[1].o));
	sp[2].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[2].o))->F_mapColor;
	sp[1].o = (jobject)((func_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[1].o, sp[2].o);
	jfloat temp7 = jfloat(1.5f);
	jfloat temp8 = (jfloat)SM_arc_math_Mathf_range_float_R_float(ctx, (jfloat(0.15f)));
	sp[1].o = (jobject)((func_arc_graphics_Color_mul_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Color_mul_float_R_arc_graphics_Color])(ctx, sp[1].o, (temp7 + temp8));
	((func_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color])(ctx, sp[0].o, temp0, temp1, temp6, sp[1].o);
	}
label_1:;
	LINE_NUMBER(674);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_lambda$drawLaunch$0_float_float_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/storage/CoreBlock$CoreBuild:lambda$drawLaunch$0", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	frame[6].f = param5;
	{
	LINE_NUMBER(444);
	SM_arc_graphics_g2d_Lines_stroke_float(ctx, ((((frame[1].f) * (frame[5].f)) * (frame[2].f)) * (jfloat(3.0f))));
	LINE_NUMBER(445);
	jfloat temp0 = ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x) + (frame[3].f);
	jfloat temp1 = ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y) + (frame[4].f);
	jfloat temp2 = (jfloat)SM_arc_math_Mathf_angle_float_float_R_float(ctx, (frame[3].f), (frame[4].f));
	SM_arc_graphics_g2d_Lines_lineAngle_float_float_float_float(ctx, temp0, temp1, temp2, ((((frame[5].f) * (jfloat(20.0f))) + (jfloat(1))) * (frame[1].f)));
	LINE_NUMBER(446);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_lambda$beginLaunch$2(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/storage/CoreBlock$CoreBuild:lambda$beginLaunch$2", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(413);
	sp[0].o = (jobject)((mindustry_world_blocks_storage_CoreBlock$CoreBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_storage_CoreBlock *) NULL_CHECK(sp[0].o))->F_launchEffect;
	((func_mindustry_entities_Effect_at_arc_math_geom_Position) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_arc_math_geom_Position])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(414);
	SM_mindustry_entities_Effect_shake_float_float_arc_math_geom_Position(ctx, (jfloat(5.0f)), (jfloat(5.0f)), (frame[0].o));
	LINE_NUMBER(415);
	((mindustry_world_blocks_storage_CoreBlock$CoreBuild *) NULL_CHECK((frame[0].o)))->F_thrusterTime = (jfloat(1));
	LINE_NUMBER(417);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isCampaign_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isCampaign_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_4;
	}
	clinit_mindustry_Vars(ctx);
	(sp++)->i = SF_mindustry_Vars_showSectorLandInfo;
	if ((--sp)->i == 0) goto label_4;
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_sector;
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_preset;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_sector;
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_preset;
	if (((jint)((mindustry_type_SectorPreset *) NULL_CHECK(sp[0].o))->F_showSectorLandInfo) == 0) goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(418);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_sector;
	sp[1].o = (jobject)((func_mindustry_type_Sector_name_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_type_Sector_name_R_java_lang_String])(ctx, sp[1].o);
	LINE_NUMBER(419);
	clinit_mindustry_Vars(ctx);
	sp[2].o = (jobject)SF_mindustry_Vars_state;
	sp[2].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[2].o))->F_rules;
	sp[2].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[2].o))->F_sector;
	sp[2].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[2].o))->F_info;
	sp[2].o = (jobject)((mindustry_game_SectorInfo *) NULL_CHECK(sp[2].o))->F_resources;
	jint temp0 = (jint)((func_arc_struct_Seq_any_R_boolean) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_struct_Seq_any_R_boolean])(ctx, sp[2].o);
	sp += 2;
	if (temp0 == 0) goto label_7;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[0].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"sectors.resources"_j))));
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_sector;
	sp[1].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[1].o))->F_info;
	sp[1].o = (jobject)((mindustry_game_SectorInfo *) NULL_CHECK(sp[1].o))->F_resources;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8" "_j));
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_storage_CoreBlock$CoreBuild_invoke_arc_func_Func_1(ctx);
		auto proxy = (mindustry_world_blocks_storage_CoreBlock$CoreBuild_invoke_arc_func_Func_1 *) gcAlloc(ctx, &class_mindustry_world_blocks_storage_CoreBlock$CoreBuild_invoke_arc_func_Func_1);
		sp[3].o = (jobject) proxy;
	}
	LINE_NUMBER(420);
	sp[1].o = (jobject)((func_arc_struct_Seq_toString_java_lang_String_arc_func_Func_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_toString_java_lang_String_arc_func_Func_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"[lightgray]\u0001[white] \u0001"_j.string, 2, sp[0].o, sp[1].o);
	sp += 1;
	goto label_9;
	}
label_7:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
label_9:;
	{
	sp -= 3;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"[accent]\u0001\n\u0001"_j.string, 2, sp[1].o, sp[2].o);
	jfloat temp0 = jfloat(5.0f);
	LINE_NUMBER(418);
	((func_mindustry_core_UI_announce_java_lang_String_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_announce_java_lang_String_float])(ctx, sp[0].o, sp[1].o, temp0);
	}
label_4:;
	LINE_NUMBER(422);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_world_blocks_storage_CoreBlock$CoreBuild_lambda$beginLaunch$1_arc_scene_ui_Image(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/storage/CoreBlock$CoreBuild:lambda$beginLaunch$1", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_storage_CoreBlock$CoreBuild(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(404);
	((func_arc_scene_ui_Image_toFront) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Image_toFront])(ctx, (frame[0].o));
	LINE_NUMBER(405);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_loadfrag;
	((func_mindustry_ui_fragments_LoadingFragment_toFront) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_LoadingFragment_toFront])(ctx, sp[0].o);
	LINE_NUMBER(406);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isMenu_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isMenu_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(407);
	jint temp0 = (jint)((func_arc_scene_ui_Image_remove_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Image_remove_R_boolean])(ctx, (frame[0].o));
	}
label_3:;
	LINE_NUMBER(409);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_world_blocks_storage_CoreBlock$CoreBuild_lambda$beginLaunch$0_arc_scene_ui_Image(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/storage/CoreBlock$CoreBuild:lambda$beginLaunch$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_storage_CoreBlock$CoreBuild(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(390);
	((func_arc_scene_ui_Image_toFront) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Image_toFront])(ctx, (frame[0].o));
	LINE_NUMBER(391);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_loadfrag;
	((func_mindustry_ui_fragments_LoadingFragment_toFront) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_LoadingFragment_toFront])(ctx, sp[0].o);
	LINE_NUMBER(392);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isMenu_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isMenu_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(393);
	jint temp0 = (jint)((func_arc_scene_ui_Image_remove_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Image_remove_R_boolean])(ctx, (frame[0].o));
	}
label_3:;
	LINE_NUMBER(395);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_lambda$buildConfiguration$2_arc_scene_ui_ImageButton_mindustry_game_Team(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/storage/CoreBlock$CoreBuild:lambda$buildConfiguration$2", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(310);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	sp += 1;
	if (sp[0].o != (frame[2].o)) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	POP_N(2); // Pop method args
	((func_arc_scene_ui_ImageButton_setChecked_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ImageButton_setChecked_boolean])(ctx, sp[0].o, sp[1].i);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_lambda$buildConfiguration$1_arc_scene_ui_ImageButton_mindustry_game_Team(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/storage/CoreBlock$CoreBuild:lambda$buildConfiguration$1", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(305);
	jint temp0 = (jint)((func_arc_scene_ui_ImageButton_isChecked_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_ImageButton_isChecked_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(306);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, ((jint)((mindustry_game_Team *) NULL_CHECK((frame[2].o)))->F_id));
	((func_mindustry_world_blocks_storage_CoreBlock$CoreBuild_configure_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_storage_CoreBlock$CoreBuild_configure_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	}
label_1:;
	LINE_NUMBER(308);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_world_blocks_storage_CoreBlock$CoreBuild_lambda$buildConfiguration$0(jcontext ctx) {
	FrameInfo frameInfo { "mindustry/world/blocks/storage/CoreBlock$CoreBuild:lambda$buildConfiguration$0", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

	clinit_mindustry_world_blocks_storage_CoreBlock$CoreBuild(ctx);
	LINE_NUMBER(303);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_world_blocks_storage_CoreBlock$CoreBuild;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field commandPos
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[5]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

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

	methods[22]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[23]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[24]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[25]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[26]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[27]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[28]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[29]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[30]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[31]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[32]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[33]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[34]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[35]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[36]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[37]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[38]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[39]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[40]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[41]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[42]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[43]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[44]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[45]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[46]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[47]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[48]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[49]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[50]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[51]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[52]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[53]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[54]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[55]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[56]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[57]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[58]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[59]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[60]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[61]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[62]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[63]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[64]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[65]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_world_blocks_storage_CoreBlock$CoreBuild[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_mindustry_gen_Building_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_mindustry_gen_Building_hitbox_arc_math_geom_Rect,
	(void *) M_mindustry_gen_Building_getX_R_float,
	(void *) M_mindustry_gen_Building_getY_R_float,
	(void *) M_arc_math_geom_Position_angleTo_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_angleTo_float_float_R_float,
	(void *) M_arc_math_geom_Position_dst2_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_dst_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_dst_float_float_R_float,
	(void *) M_arc_math_geom_Position_dst2_float_float_R_float,
	(void *) M_arc_math_geom_Position_within_arc_math_geom_Position_float_R_boolean,
	(void *) M_arc_math_geom_Position_within_float_float_float_R_boolean,
	(void *) M_mindustry_gen_Building_isValid_R_boolean,
	(void *) M_mindustry_gen_Building_shouldAmbientSound_R_boolean,
	(void *) M_mindustry_gen_Building_getAmbientVolume_R_float,
	(void *) M_mindustry_gen_Building_getAmbientSound_R_arc_audio_Sound,
	(void *) M_mindustry_gen_Building_hitSize_R_float,
	(void *) M_mindustry_gen_Building_self_R_mindustry_gen_Entityc,
	(void *) M_mindustry_gen_Building_as_R_java_lang_Object,
	(void *) M_mindustry_gen_Building_isAdded_R_boolean,
	(void *) M_mindustry_gen_Building_isLocal_R_boolean,
	(void *) M_mindustry_gen_Building_isRemote_R_boolean,
	(void *) M_mindustry_gen_Building_serialize_R_boolean,
	(void *) M_mindustry_gen_Building_classId_R_int,
	(void *) M_mindustry_gen_Building_id_R_int,
	(void *) M_mindustry_gen_Building_add,
	(void *) M_mindustry_gen_Building_afterRead,
	(void *) M_mindustry_gen_Building_afterReadAll,
	(void *) M_mindustry_gen_Building_beforeWrite,
	(void *) M_mindustry_gen_Building_id_int,
	(void *) M_mindustry_gen_Building_read_arc_util_io_Reads,
	(void *) M_mindustry_gen_Building_remove,
	(void *) M_mindustry_gen_Building_update,
	(void *) M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_write_arc_util_io_Writes,
	(void *) M_mindustry_gen_Building_floorOn_R_mindustry_world_blocks_environment_Floor,
	(void *) M_mindustry_gen_Building_buildOn_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_onSolid_R_boolean,
	(void *) M_mindustry_gen_Building_x_R_float,
	(void *) M_mindustry_gen_Building_y_R_float,
	(void *) M_mindustry_gen_Building_tileX_R_int,
	(void *) M_mindustry_gen_Building_tileY_R_int,
	(void *) M_mindustry_gen_Building_blockOn_R_mindustry_world_Block,
	(void *) M_mindustry_gen_Building_tileOn_R_mindustry_world_Tile,
	(void *) M_mindustry_gen_Building_set_arc_math_geom_Position,
	(void *) M_mindustry_gen_Building_set_float_float,
	(void *) M_mindustry_gen_Building_trns_arc_math_geom_Position,
	(void *) M_mindustry_gen_Building_trns_float_float,
	(void *) M_mindustry_gen_Building_x_float,
	(void *) M_mindustry_gen_Building_y_float,
	(void *) M_mindustry_gen_Building_damageArmorMult_float_float,
	(void *) M_mindustry_gen_Building_damageArmorMult_float_float_boolean,
	(void *) M_mindustry_gen_Building_damagePierce_float,
	(void *) M_mindustry_gen_Building_damagePierce_float_boolean,
	(void *) M_mindustry_gen_Building_healFract_float,
	(void *) M_mindustry_gen_Building_heal_float,
	(void *) M_mindustry_gen_Building_damaged_R_boolean,
	(void *) M_mindustry_gen_Building_dead_R_boolean,
	(void *) M_mindustry_gen_Building_health_R_float,
	(void *) M_mindustry_gen_Building_healthf_R_float,
	(void *) M_mindustry_gen_Building_hitTime_R_float,
	(void *) M_mindustry_gen_Building_maxHealth_R_float,
	(void *) M_mindustry_gen_Building_clampHealth,
	(void *) M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_damage_float,
	(void *) M_mindustry_gen_Building_damage_float_boolean,
	(void *) M_mindustry_gen_Building_damageContinuous_float,
	(void *) M_mindustry_gen_Building_damageContinuousArmorMult_float_float,
	(void *) M_mindustry_gen_Building_damageContinuousPierce_float,
	(void *) M_mindustry_gen_Building_dead_boolean,
	(void *) M_mindustry_gen_Building_heal,
	(void *) M_mindustry_gen_Building_health_float,
	(void *) M_mindustry_gen_Building_hitTime_float,
	(void *) M_mindustry_gen_Building_kill,
	(void *) M_mindustry_gen_Building_killed,
	(void *) M_mindustry_gen_Building_maxHealth_float,
	(void *) M_mindustry_gen_Building_inFogTo_mindustry_game_Team_R_boolean,
	(void *) M_mindustry_gen_Building_cheating_R_boolean,
	(void *) M_mindustry_gen_Building_team_R_mindustry_game_Team,
	(void *) M_mindustry_gen_Building_closestCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild,
	(void *) M_mindustry_gen_Building_closestEnemyCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild,
	(void *) M_mindustry_gen_Building_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild,
	(void *) M_mindustry_gen_Building_team_mindustry_game_Team,
	(void *) M_mindustry_gen_Building_timer_R_arc_util_Interval,
	(void *) M_mindustry_gen_Building_timer_int_float_R_boolean,
	(void *) M_mindustry_gen_Building_timer_arc_util_Interval,
	(void *) M_mindustry_gen_Building_control_mindustry_logic_LAccess_double_double_double_double,
	(void *) M_mindustry_gen_Building_control_mindustry_logic_LAccess_java_lang_Object_double_double_double,
	(void *) M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_sense_mindustry_logic_LAccess_R_double,
	(void *) M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_sense_mindustry_ctype_Content_R_double,
	(void *) M_mindustry_gen_Building_senseObject_mindustry_logic_LAccess_R_java_lang_Object,
	(void *) M_mindustry_gen_Building_setProp_mindustry_logic_LAccess_double,
	(void *) M_mindustry_gen_Building_setProp_mindustry_logic_LAccess_java_lang_Object,
	(void *) M_mindustry_gen_Building_setProp_mindustry_ctype_UnlockableContent_double,
	(void *) M_mindustry_ui_Displayable_displayable_R_boolean,
	(void *) M_mindustry_gen_Building_display_arc_scene_ui_layout_Table,
	(void *) M_mindustry_gen_Building_setIndex__build_int,
	(void *) M_mindustry_gen_Building_back_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_front_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_left_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_right_R_mindustry_gen_Building,
	(void *) M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_getCommandPosition_R_arc_math_geom_Vec2,
	(void *) M_mindustry_gen_Building_config_R_java_lang_Object,
	(void *) M_mindustry_gen_Building_getPayloads_R_mindustry_type_PayloadSeq,
	(void *) M_mindustry_gen_Building_findClosestEdge_arc_math_geom_Position_arc_func_Boolf_R_mindustry_world_Tile,
	(void *) M_mindustry_gen_Building_getPayload_R_mindustry_world_blocks_payloads_Payload,
	(void *) M_mindustry_gen_Building_takePayload_R_mindustry_world_blocks_payloads_Payload,
	(void *) M_mindustry_gen_Building_onRepaired,
	(void *) M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_placed,
	(void *) M_mindustry_gen_Building_playerPlaced_java_lang_Object,
	(void *) M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_read_arc_util_io_Reads_byte,
	(void *) M_mindustry_gen_Building_create_mindustry_world_Block_mindustry_game_Team_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_getLiquidDestination_mindustry_gen_Building_mindustry_type_Liquid_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_init_mindustry_world_Tile_mindustry_game_Team_boolean_int_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_nearby_int_int_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_nearby_int_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_getCursor_R_arc_Graphics$Cursor,
	(void *) M_mindustry_gen_Building_getDisplayIcon_R_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_gen_Building_getPowerConnections_arc_struct_Seq_R_arc_struct_Seq,
	(void *) M_mindustry_gen_Building_absorbLasers_R_boolean,
	(void *) M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_acceptItem_mindustry_gen_Building_mindustry_type_Item_R_boolean,
	(void *) M_mindustry_gen_Building_acceptLiquid_mindustry_gen_Building_mindustry_type_Liquid_R_boolean,
	(void *) M_mindustry_gen_Building_acceptPayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload_R_boolean,
	(void *) M_mindustry_gen_Building_allowDeposit_R_boolean,
	(void *) M_mindustry_gen_Building_allowUpdate_R_boolean,
	(void *) M_mindustry_gen_Building_canBeReplaced_mindustry_world_Block_R_boolean,
	(void *) M_mindustry_gen_Building_canConsume_R_boolean,
	(void *) M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_canControlSelect_mindustry_gen_Unit_R_boolean,
	(void *) M_mindustry_gen_Building_canDump_mindustry_gen_Building_mindustry_type_Item_R_boolean,
	(void *) M_mindustry_gen_Building_canDumpLiquid_mindustry_gen_Building_mindustry_type_Liquid_R_boolean,
	(void *) M_mindustry_gen_Building_canPickup_R_boolean,
	(void *) M_mindustry_gen_Building_canResupply_R_boolean,
	(void *) M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_canUnload_R_boolean,
	(void *) M_mindustry_gen_Building_canWithdraw_R_boolean,
	(void *) M_mindustry_gen_Building_checkSolid_R_boolean,
	(void *) M_mindustry_gen_Building_checkSuppression_R_boolean,
	(void *) M_mindustry_gen_Building_collide_mindustry_gen_Bullet_R_boolean,
	(void *) M_mindustry_gen_Building_collision_mindustry_gen_Bullet_R_boolean,
	(void *) M_mindustry_gen_Building_conductsTo_mindustry_gen_Building_R_boolean,
	(void *) M_mindustry_gen_Building_configTapped_R_boolean,
	(void *) M_mindustry_gen_Building_consumeTriggerValid_R_boolean,
	(void *) M_mindustry_gen_Building_dump_R_boolean,
	(void *) M_mindustry_gen_Building_dump_mindustry_type_Item_R_boolean,
	(void *) M_mindustry_gen_Building_dumpAccumulate_R_boolean,
	(void *) M_mindustry_gen_Building_dumpAccumulate_mindustry_type_Item_R_boolean,
	(void *) M_mindustry_gen_Building_dumpPayload_mindustry_world_blocks_payloads_Payload_R_boolean,
	(void *) M_mindustry_gen_Building_inMapArea_R_boolean,
	(void *) M_mindustry_gen_Building_interactable_mindustry_game_Team_R_boolean,
	(void *) M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_isCommandable_R_boolean,
	(void *) M_mindustry_gen_Building_isDiscovered_mindustry_game_Team_R_boolean,
	(void *) M_mindustry_gen_Building_isHealSuppressed_R_boolean,
	(void *) M_mindustry_gen_Building_isInsulated_R_boolean,
	(void *) M_mindustry_gen_Building_isPayload_R_boolean,
	(void *) M_mindustry_gen_Building_moveForward_mindustry_type_Item_R_boolean,
	(void *) M_mindustry_gen_Building_movePayload_mindustry_world_blocks_payloads_Payload_R_boolean,
	(void *) M_mindustry_gen_Building_onConfigureBuildTapped_mindustry_gen_Building_R_boolean,
	(void *) M_mindustry_gen_Building_onConfigureTapped_float_float_R_boolean,
	(void *) M_mindustry_gen_Building_payloadCheck_int_R_boolean,
	(void *) M_mindustry_gen_Building_productionValid_R_boolean,
	(void *) M_mindustry_gen_Building_put_mindustry_type_Item_R_boolean,
	(void *) M_mindustry_gen_Building_shouldConsume_R_boolean,
	(void *) M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_shouldHideConfigure_mindustry_gen_Player_R_boolean,
	(void *) M_mindustry_gen_Building_shouldShowConfigure_mindustry_gen_Player_R_boolean,
	(void *) M_mindustry_gen_Building_wasRecentlyDamaged_R_boolean,
	(void *) M_mindustry_gen_Building_wasRecentlyHealed_float_R_boolean,
	(void *) M_mindustry_gen_Building_relativeTo_mindustry_gen_Building_R_byte,
	(void *) M_mindustry_gen_Building_relativeTo_int_int_R_byte,
	(void *) M_mindustry_gen_Building_relativeTo_mindustry_world_Tile_R_byte,
	(void *) M_mindustry_gen_Building_relativeToEdge_mindustry_world_Tile_R_byte,
	(void *) M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_version_R_byte,
	(void *) M_mindustry_gen_Building_ambientVolume_R_float,
	(void *) M_mindustry_gen_Building_calculateHeat_Array1_float_R_float,
	(void *) M_mindustry_gen_Building_calculateHeat_Array1_float_arc_struct_IntSet_R_float,
	(void *) M_mindustry_gen_Building_delta_R_float,
	(void *) M_mindustry_gen_Building_drawrot_R_float,
	(void *) M_mindustry_gen_Building_edelta_R_float,
	(void *) M_mindustry_gen_Building_efficiencyScale_R_float,
	(void *) M_mindustry_gen_Building_fogRadius_R_float,
	(void *) M_mindustry_gen_Building_getDisplayEfficiency_R_float,
	(void *) M_mindustry_gen_Building_getPowerProduction_R_float,
	(void *) M_mindustry_gen_Building_getProgressIncrease_float_R_float,
	(void *) M_mindustry_gen_Building_handleDamage_float_R_float,
	(void *) M_mindustry_gen_Building_moveLiquid_mindustry_gen_Building_mindustry_type_Liquid_R_float,
	(void *) M_mindustry_gen_Building_moveLiquidForward_boolean_mindustry_type_Liquid_R_float,
	(void *) M_mindustry_gen_Building_progress_R_float,
	(void *) M_mindustry_gen_Building_rotdeg_R_float,
	(void *) M_mindustry_gen_Building_timeScale_R_float,
	(void *) M_mindustry_gen_Building_totalProgress_R_float,
	(void *) M_mindustry_gen_Building_warmup_R_float,
	(void *) M_mindustry_gen_Building_acceptStack_mindustry_type_Item_int_mindustry_gen_Teamc_R_int,
	(void *) M_mindustry_gen_Building_explosionItemCap_R_int,
	(void *) M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_getMaximumAccepted_mindustry_type_Item_R_int,
	(void *) M_mindustry_gen_Building_moduleBitmask_R_int,
	(void *) M_mindustry_gen_Building_pos_R_int,
	(void *) M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_removeStack_mindustry_type_Item_int_R_int,
	(void *) M_mindustry_gen_Building_getDisplayName_R_java_lang_String,
	(void *) M_mindustry_gen_Building_floor_R_mindustry_world_blocks_environment_Floor,
	(void *) M_mindustry_gen_Building_status_R_mindustry_world_meta_BlockStatus,
	(void *) M_mindustry_gen_Building_flowItems_R_mindustry_world_modules_ItemModule,
	(void *) M_mindustry_gen_Building_addPlan_boolean,
	(void *) M_mindustry_gen_Building_addPlan_boolean_boolean,
	(void *) M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_afterDestroyed,
	(void *) M_mindustry_gen_Building_afterPickedUp,
	(void *) M_mindustry_gen_Building_applyBoost_float_float,
	(void *) M_mindustry_gen_Building_applyHealSuppression_float,
	(void *) M_mindustry_gen_Building_applyHealSuppression_float_arc_graphics_Color,
	(void *) M_mindustry_gen_Building_applySlowdown_float_float,
	(void *) M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_buildConfiguration_arc_scene_ui_layout_Table,
	(void *) M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_changeTeam_mindustry_game_Team,
	(void *) M_mindustry_gen_Building_changeTeam_mindustry_game_Team_boolean,
	(void *) M_mindustry_gen_Building_checkAllowUpdate,
	(void *) M_mindustry_gen_Building_configure_java_lang_Object,
	(void *) M_mindustry_gen_Building_configureAny_java_lang_Object,
	(void *) M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_configured_mindustry_gen_Unit_java_lang_Object,
	(void *) M_mindustry_gen_Building_consume,
	(void *) M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_created,
	(void *) M_mindustry_gen_Building_damage_mindustry_gen_Bullet_mindustry_game_Team_float,
	(void *) M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_damage_mindustry_game_Team_float,
	(void *) M_mindustry_gen_Building_deselect,
	(void *) M_mindustry_gen_Building_displayBars_arc_scene_ui_layout_Table,
	(void *) M_mindustry_gen_Building_displayConsumption_arc_scene_ui_layout_Table,
	(void *) M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_draw,
	(void *) M_mindustry_gen_Building_drawCached,
	(void *) M_mindustry_gen_Building_drawConfigure,
	(void *) M_mindustry_gen_Building_drawCracks,
	(void *) M_mindustry_gen_Building_drawDisabled,
	(void *) M_mindustry_gen_Building_drawItemSelection_mindustry_ctype_UnlockableContent,
	(void *) M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_drawLight,
	(void *) M_mindustry_gen_Building_drawLiquidLight_mindustry_type_Liquid_float,
	(void *) M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_drawSelect,
	(void *) M_mindustry_gen_Building_drawStatus,
	(void *) M_mindustry_gen_Building_drawTeam,
	(void *) M_mindustry_gen_Building_drawTeamTop,
	(void *) M_mindustry_gen_Building_dropped,
	(void *) M_mindustry_gen_Building_dumpLiquid_mindustry_type_Liquid,
	(void *) M_mindustry_gen_Building_dumpLiquid_mindustry_type_Liquid_float,
	(void *) M_mindustry_gen_Building_dumpLiquid_mindustry_type_Liquid_float_int,
	(void *) M_mindustry_gen_Building_eachEdge_arc_func_Cons,
	(void *) M_mindustry_gen_Building_getStackOffset_mindustry_type_Item_arc_math_geom_Vec2,
	(void *) M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_handleItem_mindustry_gen_Building_mindustry_type_Item,
	(void *) M_mindustry_gen_Building_handleLiquid_mindustry_gen_Building_mindustry_type_Liquid_float,
	(void *) M_mindustry_gen_Building_handlePayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload,
	(void *) M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_handleStack_mindustry_type_Item_int_mindustry_gen_Teamc,
	(void *) M_mindustry_gen_Building_handleString_java_lang_Object,
	(void *) M_mindustry_gen_Building_handleUnitPayload_mindustry_gen_Unit_arc_func_Cons,
	(void *) M_mindustry_gen_Building_healthChanged,
	(void *) M_mindustry_gen_Building_incrementDump_int,
	(void *) M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_itemTaken_mindustry_type_Item,
	(void *) M_mindustry_gen_Building_noSleep,
	(void *) M_mindustry_gen_Building_offload_mindustry_type_Item,
	(void *) M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_onCommand_arc_math_geom_Vec2,
	(void *) M_mindustry_gen_Building_onConfigureClosed,
	(void *) M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_onControlSelect_mindustry_gen_Unit,
	(void *) M_mindustry_gen_Building_onDeconstructed_mindustry_gen_Unit,
	(void *) M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_onDestroyed,
	(void *) M_mindustry_gen_Building_onNearbyBuildAdded_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_onProximityAdded,
	(void *) M_mindustry_gen_Building_onProximityRemoved,
	(void *) M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_onProximityUpdate,
	(void *) M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_onRemoved,
	(void *) M_mindustry_gen_Building_overwrote_arc_struct_Seq,
	(void *) M_mindustry_gen_Building_payloadDraw,
	(void *) M_mindustry_gen_Building_pickedUp,
	(void *) M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_playDestroySound,
	(void *) M_mindustry_gen_Building_powerGraphRemoved,
	(void *) M_mindustry_gen_Building_produced_mindustry_type_Item,
	(void *) M_mindustry_gen_Building_produced_mindustry_type_Item_int,
	(void *) M_mindustry_gen_Building_puddleOn_mindustry_gen_Puddle,
	(void *) M_mindustry_gen_Building_readAll_arc_util_io_Reads_byte,
	(void *) M_mindustry_gen_Building_readBase_arc_util_io_Reads,
	(void *) M_mindustry_gen_Building_readSync_arc_util_io_Reads_byte,
	(void *) M_mindustry_gen_Building_recache,
	(void *) M_mindustry_gen_Building_recentlyHealed,
	(void *) M_mindustry_gen_Building_removeFromProximity,
	(void *) M_mindustry_gen_Building_sleep,
	(void *) M_mindustry_gen_Building_splashLiquid_mindustry_type_Liquid_float,
	(void *) M_mindustry_gen_Building_tapped,
	(void *) M_mindustry_gen_Building_transferLiquid_mindustry_gen_Building_float_mindustry_type_Liquid,
	(void *) M_mindustry_gen_Building_unitOn_mindustry_gen_Unit,
	(void *) M_mindustry_gen_Building_unitOnAny_mindustry_gen_Unit,
	(void *) M_mindustry_gen_Building_unitRemoved_mindustry_gen_Unit,
	(void *) M_mindustry_gen_Building_updateConsumption,
	(void *) M_mindustry_gen_Building_updateEfficiencyMultiplier,
	(void *) M_mindustry_gen_Building_updateFogVisibility,
	(void *) M_mindustry_gen_Building_updateLastAccess_mindustry_gen_Player,
	(void *) M_mindustry_gen_Building_updatePayload_mindustry_gen_Unit_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_updatePowerGraph,
	(void *) M_mindustry_gen_Building_updateProximity,
	(void *) M_mindustry_gen_Building_updateTableAlign_arc_scene_ui_layout_Table,
	(void *) M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_updateTile,
	(void *) M_mindustry_gen_Building_writeAll_arc_util_io_Writes,
	(void *) M_mindustry_gen_Building_writeBase_arc_util_io_Writes,
	(void *) M_mindustry_gen_Building_writeSync_arc_util_io_Writes,
	(void *) M_mindustry_gen_Building_lambda$splashLiquid$0_mindustry_type_Liquid_float,
	(void *) M_mindustry_gen_Building_lambda$onDeconstructed$0_float_mindustry_world_Tile,
	(void *) M_mindustry_gen_Building_lambda$display$6_java_lang_String_arc_scene_ui_layout_Table,
	(void *) M_mindustry_gen_Building_lambda$display$9_arc_struct_Bits_java_lang_Runnable,
	(void *) M_mindustry_gen_Building_lambda$display$7_arc_scene_ui_layout_Table_java_lang_String,
	(void *) M_mindustry_gen_Building_lambda$display$8_mindustry_type_Liquid_java_lang_String_R_java_lang_CharSequence,
	(void *) M_mindustry_gen_Building_lambda$display$1_arc_scene_ui_layout_Table,
	(void *) M_mindustry_gen_Building_lambda$display$0_arc_scene_ui_layout_Table,
	(void *) M_mindustry_gen_Building_lambda$placed$0_mindustry_gen_Building,
	(void *) M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_drawLaunch,
	(void *) M_mindustry_world_blocks_LaunchAnimator_drawLaunchGlobalZ,
	(void *) M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_beginLaunch_boolean,
	(void *) M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_endLaunch,
	(void *) M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_updateLaunch,
	(void *) M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_launchDuration_R_float,
	(void *) M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_landMusic_R_arc_audio_Music,
	(void *) M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_zoomLaunch_R_float,
	(void *) M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_drawLanding_float_float,
	(void *) M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_drawLandingThrusters_float_float_float_float,
	(void *) M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_drawThrusters_float,
	(void *) M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_requestSpawn_mindustry_gen_Player,
	(void *) M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_owns_mindustry_gen_Building_R_boolean,
	(void *) M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_owns_mindustry_gen_Building_mindustry_gen_Building_R_boolean,
	(void *) M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_lambda$onRemoved$2_int_mindustry_gen_Building,
	(void *) M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_lambda$onRemoved$1_mindustry_gen_Building_R_boolean,
	(void *) M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_lambda$onRemoved$0_mindustry_gen_Building_R_int,
	(void *) M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_lambda$drawSelect$2_arc_func_Cons_mindustry_world_blocks_storage_CoreBlock$CoreBuild,
	(void *) M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_lambda$drawSelect$3_mindustry_gen_Building_R_boolean,
	(void *) M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_lambda$drawSelect$0_mindustry_gen_Building_R_boolean,
	(void *) M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_lambda$onProximityUpdate$2_mindustry_gen_Building_mindustry_gen_Building_R_int,
	(void *) M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_lambda$onProximityUpdate$1_mindustry_gen_Building,
	(void *) M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_lambda$onProximityUpdate$0_mindustry_gen_Building_R_int,
	(void *) M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_lambda$afterDestroyed$0,
	(void *) M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_lambda$updateLaunch$0_mindustry_world_Tile,
	(void *) M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_lambda$drawLaunch$0_float_float_float_float_float_float,
	(void *) M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_lambda$beginLaunch$2,
	(void *) M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_lambda$buildConfiguration$2_arc_scene_ui_ImageButton_mindustry_game_Team,
	(void *) M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_lambda$buildConfiguration$1_arc_scene_ui_ImageButton_mindustry_game_Team,
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
	{ "hitbox", "(Larc/math/geom/Rect;)V" },
	{ "getX", "()F" },
	{ "getY", "()F" },
	{ "angleTo", "(Larc/math/geom/Position;)F" },
	{ "angleTo", "(FF)F" },
	{ "dst2", "(Larc/math/geom/Position;)F" },
	{ "dst", "(Larc/math/geom/Position;)F" },
	{ "dst", "(FF)F" },
	{ "dst2", "(FF)F" },
	{ "within", "(Larc/math/geom/Position;F)Z" },
	{ "within", "(FFF)Z" },
	{ "isValid", "()Z" },
	{ "shouldAmbientSound", "()Z" },
	{ "getAmbientVolume", "()F" },
	{ "getAmbientSound", "()Larc/audio/Sound;" },
	{ "hitSize", "()F" },
	{ "self", "()Lmindustry/gen/Entityc;" },
	{ "as", "()Ljava/lang/Object;" },
	{ "isAdded", "()Z" },
	{ "isLocal", "()Z" },
	{ "isRemote", "()Z" },
	{ "serialize", "()Z" },
	{ "classId", "()I" },
	{ "id", "()I" },
	{ "add", "()V" },
	{ "afterRead", "()V" },
	{ "afterReadAll", "()V" },
	{ "beforeWrite", "()V" },
	{ "id", "(I)V" },
	{ "read", "(Larc/util/io/Reads;)V" },
	{ "remove", "()V" },
	{ "update", "()V" },
	{ "write", "(Larc/util/io/Writes;)V" },
	{ "floorOn", "()Lmindustry/world/blocks/environment/Floor;" },
	{ "buildOn", "()Lmindustry/gen/Building;" },
	{ "onSolid", "()Z" },
	{ "x", "()F" },
	{ "y", "()F" },
	{ "tileX", "()I" },
	{ "tileY", "()I" },
	{ "blockOn", "()Lmindustry/world/Block;" },
	{ "tileOn", "()Lmindustry/world/Tile;" },
	{ "set", "(Larc/math/geom/Position;)V" },
	{ "set", "(FF)V" },
	{ "trns", "(Larc/math/geom/Position;)V" },
	{ "trns", "(FF)V" },
	{ "x", "(F)V" },
	{ "y", "(F)V" },
	{ "damageArmorMult", "(FF)V" },
	{ "damageArmorMult", "(FFZ)V" },
	{ "damagePierce", "(F)V" },
	{ "damagePierce", "(FZ)V" },
	{ "healFract", "(F)V" },
	{ "heal", "(F)V" },
	{ "damaged", "()Z" },
	{ "dead", "()Z" },
	{ "health", "()F" },
	{ "healthf", "()F" },
	{ "hitTime", "()F" },
	{ "maxHealth", "()F" },
	{ "clampHealth", "()V" },
	{ "damage", "(F)V" },
	{ "damage", "(FZ)V" },
	{ "damageContinuous", "(F)V" },
	{ "damageContinuousArmorMult", "(FF)V" },
	{ "damageContinuousPierce", "(F)V" },
	{ "dead", "(Z)V" },
	{ "heal", "()V" },
	{ "health", "(F)V" },
	{ "hitTime", "(F)V" },
	{ "kill", "()V" },
	{ "killed", "()V" },
	{ "maxHealth", "(F)V" },
	{ "inFogTo", "(Lmindustry/game/Team;)Z" },
	{ "cheating", "()Z" },
	{ "team", "()Lmindustry/game/Team;" },
	{ "closestCore", "()Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;" },
	{ "closestEnemyCore", "()Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;" },
	{ "core", "()Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;" },
	{ "team", "(Lmindustry/game/Team;)V" },
	{ "timer", "()Larc/util/Interval;" },
	{ "timer", "(IF)Z" },
	{ "timer", "(Larc/util/Interval;)V" },
	{ "control", "(Lmindustry/logic/LAccess;DDDD)V" },
	{ "control", "(Lmindustry/logic/LAccess;Ljava/lang/Object;DDD)V" },
	{ "sense", "(Lmindustry/logic/LAccess;)D" },
	{ "sense", "(Lmindustry/ctype/Content;)D" },
	{ "senseObject", "(Lmindustry/logic/LAccess;)Ljava/lang/Object;" },
	{ "setProp", "(Lmindustry/logic/LAccess;D)V" },
	{ "setProp", "(Lmindustry/logic/LAccess;Ljava/lang/Object;)V" },
	{ "setProp", "(Lmindustry/ctype/UnlockableContent;D)V" },
	{ "displayable", "()Z" },
	{ "display", "(Larc/scene/ui/layout/Table;)V" },
	{ "setIndex__build", "(I)V" },
	{ "back", "()Lmindustry/gen/Building;" },
	{ "front", "()Lmindustry/gen/Building;" },
	{ "left", "()Lmindustry/gen/Building;" },
	{ "right", "()Lmindustry/gen/Building;" },
	{ "getCommandPosition", "()Larc/math/geom/Vec2;" },
	{ "config", "()Ljava/lang/Object;" },
	{ "getPayloads", "()Lmindustry/type/PayloadSeq;" },
	{ "findClosestEdge", "(Larc/math/geom/Position;Larc/func/Boolf;)Lmindustry/world/Tile;" },
	{ "getPayload", "()Lmindustry/world/blocks/payloads/Payload;" },
	{ "takePayload", "()Lmindustry/world/blocks/payloads/Payload;" },
	{ "onRepaired", "()V" },
	{ "placed", "()V" },
	{ "playerPlaced", "(Ljava/lang/Object;)V" },
	{ "read", "(Larc/util/io/Reads;B)V" },
	{ "create", "(Lmindustry/world/Block;Lmindustry/game/Team;)Lmindustry/gen/Building;" },
	{ "getLiquidDestination", "(Lmindustry/gen/Building;Lmindustry/type/Liquid;)Lmindustry/gen/Building;" },
	{ "init", "(Lmindustry/world/Tile;Lmindustry/game/Team;ZI)Lmindustry/gen/Building;" },
	{ "nearby", "(II)Lmindustry/gen/Building;" },
	{ "nearby", "(I)Lmindustry/gen/Building;" },
	{ "getCursor", "()Larc/Graphics$Cursor;" },
	{ "getDisplayIcon", "()Larc/graphics/g2d/TextureRegion;" },
	{ "getPowerConnections", "(Larc/struct/Seq;)Larc/struct/Seq;" },
	{ "absorbLasers", "()Z" },
	{ "acceptItem", "(Lmindustry/gen/Building;Lmindustry/type/Item;)Z" },
	{ "acceptLiquid", "(Lmindustry/gen/Building;Lmindustry/type/Liquid;)Z" },
	{ "acceptPayload", "(Lmindustry/gen/Building;Lmindustry/world/blocks/payloads/Payload;)Z" },
	{ "allowDeposit", "()Z" },
	{ "allowUpdate", "()Z" },
	{ "canBeReplaced", "(Lmindustry/world/Block;)Z" },
	{ "canConsume", "()Z" },
	{ "canControlSelect", "(Lmindustry/gen/Unit;)Z" },
	{ "canDump", "(Lmindustry/gen/Building;Lmindustry/type/Item;)Z" },
	{ "canDumpLiquid", "(Lmindustry/gen/Building;Lmindustry/type/Liquid;)Z" },
	{ "canPickup", "()Z" },
	{ "canResupply", "()Z" },
	{ "canUnload", "()Z" },
	{ "canWithdraw", "()Z" },
	{ "checkSolid", "()Z" },
	{ "checkSuppression", "()Z" },
	{ "collide", "(Lmindustry/gen/Bullet;)Z" },
	{ "collision", "(Lmindustry/gen/Bullet;)Z" },
	{ "conductsTo", "(Lmindustry/gen/Building;)Z" },
	{ "configTapped", "()Z" },
	{ "consumeTriggerValid", "()Z" },
	{ "dump", "()Z" },
	{ "dump", "(Lmindustry/type/Item;)Z" },
	{ "dumpAccumulate", "()Z" },
	{ "dumpAccumulate", "(Lmindustry/type/Item;)Z" },
	{ "dumpPayload", "(Lmindustry/world/blocks/payloads/Payload;)Z" },
	{ "inMapArea", "()Z" },
	{ "interactable", "(Lmindustry/game/Team;)Z" },
	{ "isCommandable", "()Z" },
	{ "isDiscovered", "(Lmindustry/game/Team;)Z" },
	{ "isHealSuppressed", "()Z" },
	{ "isInsulated", "()Z" },
	{ "isPayload", "()Z" },
	{ "moveForward", "(Lmindustry/type/Item;)Z" },
	{ "movePayload", "(Lmindustry/world/blocks/payloads/Payload;)Z" },
	{ "onConfigureBuildTapped", "(Lmindustry/gen/Building;)Z" },
	{ "onConfigureTapped", "(FF)Z" },
	{ "payloadCheck", "(I)Z" },
	{ "productionValid", "()Z" },
	{ "put", "(Lmindustry/type/Item;)Z" },
	{ "shouldConsume", "()Z" },
	{ "shouldHideConfigure", "(Lmindustry/gen/Player;)Z" },
	{ "shouldShowConfigure", "(Lmindustry/gen/Player;)Z" },
	{ "wasRecentlyDamaged", "()Z" },
	{ "wasRecentlyHealed", "(F)Z" },
	{ "relativeTo", "(Lmindustry/gen/Building;)B" },
	{ "relativeTo", "(II)B" },
	{ "relativeTo", "(Lmindustry/world/Tile;)B" },
	{ "relativeToEdge", "(Lmindustry/world/Tile;)B" },
	{ "version", "()B" },
	{ "ambientVolume", "()F" },
	{ "calculateHeat", "([F)F" },
	{ "calculateHeat", "([FLarc/struct/IntSet;)F" },
	{ "delta", "()F" },
	{ "drawrot", "()F" },
	{ "edelta", "()F" },
	{ "efficiencyScale", "()F" },
	{ "fogRadius", "()F" },
	{ "getDisplayEfficiency", "()F" },
	{ "getPowerProduction", "()F" },
	{ "getProgressIncrease", "(F)F" },
	{ "handleDamage", "(F)F" },
	{ "moveLiquid", "(Lmindustry/gen/Building;Lmindustry/type/Liquid;)F" },
	{ "moveLiquidForward", "(ZLmindustry/type/Liquid;)F" },
	{ "progress", "()F" },
	{ "rotdeg", "()F" },
	{ "timeScale", "()F" },
	{ "totalProgress", "()F" },
	{ "warmup", "()F" },
	{ "acceptStack", "(Lmindustry/type/Item;ILmindustry/gen/Teamc;)I" },
	{ "explosionItemCap", "()I" },
	{ "getMaximumAccepted", "(Lmindustry/type/Item;)I" },
	{ "moduleBitmask", "()I" },
	{ "pos", "()I" },
	{ "removeStack", "(Lmindustry/type/Item;I)I" },
	{ "getDisplayName", "()Ljava/lang/String;" },
	{ "floor", "()Lmindustry/world/blocks/environment/Floor;" },
	{ "status", "()Lmindustry/world/meta/BlockStatus;" },
	{ "flowItems", "()Lmindustry/world/modules/ItemModule;" },
	{ "addPlan", "(Z)V" },
	{ "addPlan", "(ZZ)V" },
	{ "afterDestroyed", "()V" },
	{ "afterPickedUp", "()V" },
	{ "applyBoost", "(FF)V" },
	{ "applyHealSuppression", "(F)V" },
	{ "applyHealSuppression", "(FLarc/graphics/Color;)V" },
	{ "applySlowdown", "(FF)V" },
	{ "buildConfiguration", "(Larc/scene/ui/layout/Table;)V" },
	{ "changeTeam", "(Lmindustry/game/Team;)V" },
	{ "changeTeam", "(Lmindustry/game/Team;Z)V" },
	{ "checkAllowUpdate", "()V" },
	{ "configure", "(Ljava/lang/Object;)V" },
	{ "configureAny", "(Ljava/lang/Object;)V" },
	{ "configured", "(Lmindustry/gen/Unit;Ljava/lang/Object;)V" },
	{ "consume", "()V" },
	{ "created", "()V" },
	{ "damage", "(Lmindustry/gen/Bullet;Lmindustry/game/Team;F)V" },
	{ "damage", "(Lmindustry/game/Team;F)V" },
	{ "deselect", "()V" },
	{ "displayBars", "(Larc/scene/ui/layout/Table;)V" },
	{ "displayConsumption", "(Larc/scene/ui/layout/Table;)V" },
	{ "draw", "()V" },
	{ "drawCached", "()V" },
	{ "drawConfigure", "()V" },
	{ "drawCracks", "()V" },
	{ "drawDisabled", "()V" },
	{ "drawItemSelection", "(Lmindustry/ctype/UnlockableContent;)V" },
	{ "drawLight", "()V" },
	{ "drawLiquidLight", "(Lmindustry/type/Liquid;F)V" },
	{ "drawSelect", "()V" },
	{ "drawStatus", "()V" },
	{ "drawTeam", "()V" },
	{ "drawTeamTop", "()V" },
	{ "dropped", "()V" },
	{ "dumpLiquid", "(Lmindustry/type/Liquid;)V" },
	{ "dumpLiquid", "(Lmindustry/type/Liquid;F)V" },
	{ "dumpLiquid", "(Lmindustry/type/Liquid;FI)V" },
	{ "eachEdge", "(Larc/func/Cons;)V" },
	{ "getStackOffset", "(Lmindustry/type/Item;Larc/math/geom/Vec2;)V" },
	{ "handleItem", "(Lmindustry/gen/Building;Lmindustry/type/Item;)V" },
	{ "handleLiquid", "(Lmindustry/gen/Building;Lmindustry/type/Liquid;F)V" },
	{ "handlePayload", "(Lmindustry/gen/Building;Lmindustry/world/blocks/payloads/Payload;)V" },
	{ "handleStack", "(Lmindustry/type/Item;ILmindustry/gen/Teamc;)V" },
	{ "handleString", "(Ljava/lang/Object;)V" },
	{ "handleUnitPayload", "(Lmindustry/gen/Unit;Larc/func/Cons;)V" },
	{ "healthChanged", "()V" },
	{ "incrementDump", "(I)V" },
	{ "itemTaken", "(Lmindustry/type/Item;)V" },
	{ "noSleep", "()V" },
	{ "offload", "(Lmindustry/type/Item;)V" },
	{ "onCommand", "(Larc/math/geom/Vec2;)V" },
	{ "onConfigureClosed", "()V" },
	{ "onControlSelect", "(Lmindustry/gen/Unit;)V" },
	{ "onDeconstructed", "(Lmindustry/gen/Unit;)V" },
	{ "onDestroyed", "()V" },
	{ "onNearbyBuildAdded", "(Lmindustry/gen/Building;)V" },
	{ "onProximityAdded", "()V" },
	{ "onProximityRemoved", "()V" },
	{ "onProximityUpdate", "()V" },
	{ "onRemoved", "()V" },
	{ "overwrote", "(Larc/struct/Seq;)V" },
	{ "payloadDraw", "()V" },
	{ "pickedUp", "()V" },
	{ "playDestroySound", "()V" },
	{ "powerGraphRemoved", "()V" },
	{ "produced", "(Lmindustry/type/Item;)V" },
	{ "produced", "(Lmindustry/type/Item;I)V" },
	{ "puddleOn", "(Lmindustry/gen/Puddle;)V" },
	{ "readAll", "(Larc/util/io/Reads;B)V" },
	{ "readBase", "(Larc/util/io/Reads;)V" },
	{ "readSync", "(Larc/util/io/Reads;B)V" },
	{ "recache", "()V" },
	{ "recentlyHealed", "()V" },
	{ "removeFromProximity", "()V" },
	{ "sleep", "()V" },
	{ "splashLiquid", "(Lmindustry/type/Liquid;F)V" },
	{ "tapped", "()V" },
	{ "transferLiquid", "(Lmindustry/gen/Building;FLmindustry/type/Liquid;)V" },
	{ "unitOn", "(Lmindustry/gen/Unit;)V" },
	{ "unitOnAny", "(Lmindustry/gen/Unit;)V" },
	{ "unitRemoved", "(Lmindustry/gen/Unit;)V" },
	{ "updateConsumption", "()V" },
	{ "updateEfficiencyMultiplier", "()V" },
	{ "updateFogVisibility", "()V" },
	{ "updateLastAccess", "(Lmindustry/gen/Player;)V" },
	{ "updatePayload", "(Lmindustry/gen/Unit;Lmindustry/gen/Building;)V" },
	{ "updatePowerGraph", "()V" },
	{ "updateProximity", "()V" },
	{ "updateTableAlign", "(Larc/scene/ui/layout/Table;)V" },
	{ "updateTile", "()V" },
	{ "writeAll", "(Larc/util/io/Writes;)V" },
	{ "writeBase", "(Larc/util/io/Writes;)V" },
	{ "writeSync", "(Larc/util/io/Writes;)V" },
	{ "lambda$splashLiquid$0", "(Lmindustry/type/Liquid;F)V" },
	{ "lambda$onDeconstructed$0", "(FLmindustry/world/Tile;)V" },
	{ "lambda$display$6", "(Ljava/lang/String;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$display$9", "(Larc/struct/Bits;Ljava/lang/Runnable;)V" },
	{ "lambda$display$7", "(Larc/scene/ui/layout/Table;Ljava/lang/String;)V" },
	{ "lambda$display$8", "(Lmindustry/type/Liquid;Ljava/lang/String;)Ljava/lang/CharSequence;" },
	{ "lambda$display$1", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$display$0", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$placed$0", "(Lmindustry/gen/Building;)V" },
	{ "drawLaunch", "()V" },
	{ "drawLaunchGlobalZ", "()V" },
	{ "beginLaunch", "(Z)V" },
	{ "endLaunch", "()V" },
	{ "updateLaunch", "()V" },
	{ "launchDuration", "()F" },
	{ "landMusic", "()Larc/audio/Music;" },
	{ "zoomLaunch", "()F" },
	{ "drawLanding", "(FF)V" },
	{ "drawLandingThrusters", "(FFFF)V" },
	{ "drawThrusters", "(F)V" },
	{ "requestSpawn", "(Lmindustry/gen/Player;)V" },
	{ "owns", "(Lmindustry/gen/Building;)Z" },
	{ "owns", "(Lmindustry/gen/Building;Lmindustry/gen/Building;)Z" },
	{ "lambda$onRemoved$2", "(ILmindustry/gen/Building;)V" },
	{ "lambda$onRemoved$1", "(Lmindustry/gen/Building;)Z" },
	{ "lambda$onRemoved$0", "(Lmindustry/gen/Building;)I" },
	{ "lambda$drawSelect$2", "(Larc/func/Cons;Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;)V" },
	{ "lambda$drawSelect$3", "(Lmindustry/gen/Building;)Z" },
	{ "lambda$drawSelect$0", "(Lmindustry/gen/Building;)Z" },
	{ "lambda$onProximityUpdate$2", "(Lmindustry/gen/Building;Lmindustry/gen/Building;)I" },
	{ "lambda$onProximityUpdate$1", "(Lmindustry/gen/Building;)V" },
	{ "lambda$onProximityUpdate$0", "(Lmindustry/gen/Building;)I" },
	{ "lambda$afterDestroyed$0", "()V" },
	{ "lambda$updateLaunch$0", "(Lmindustry/world/Tile;)V" },
	{ "lambda$drawLaunch$0", "(FFFFFF)V" },
	{ "lambda$beginLaunch$2", "()V" },
	{ "lambda$buildConfiguration$2", "(Larc/scene/ui/ImageButton;Lmindustry/game/Team;)V" },
	{ "lambda$buildConfiguration$1", "(Larc/scene/ui/ImageButton;Lmindustry/game/Team;)V" },
};

static jclass interfaces[] { &class_mindustry_world_blocks_LaunchAnimator, };

static FieldMetadata fields[] {
	{ "storageCapacity", &class_int, offsetof(mindustry_world_blocks_storage_CoreBlock$CoreBuild, F_storageCapacity), "I", 1 },
	{ "noEffect", &class_boolean, offsetof(mindustry_world_blocks_storage_CoreBlock$CoreBuild, F_noEffect), "Z", 1 },
	{ "lastDamage", &class_mindustry_game_Team, offsetof(mindustry_world_blocks_storage_CoreBlock$CoreBuild, F_lastDamage), "Lmindustry/game/Team;", 1 },
	{ "iframes", &class_float, offsetof(mindustry_world_blocks_storage_CoreBlock$CoreBuild, F_iframes), "F", 1 },
	{ "thrusterTime", &class_float, offsetof(mindustry_world_blocks_storage_CoreBlock$CoreBuild, F_thrusterTime), "F", 1 },
	{ "commandPos", &class_arc_math_geom_Vec2, offsetof(mindustry_world_blocks_storage_CoreBlock$CoreBuild, F_commandPos), "Larc/math/geom/Vec2;", 1 },
	{ "cloudSeed", &class_float, offsetof(mindustry_world_blocks_storage_CoreBlock$CoreBuild, F_cloudSeed), "F", 4 },
	{ "landParticleTimer", &class_float, offsetof(mindustry_world_blocks_storage_CoreBlock$CoreBuild, F_landParticleTimer), "F", 4 },
	{ "this$0", &class_mindustry_world_blocks_storage_CoreBlock, offsetof(mindustry_world_blocks_storage_CoreBlock$CoreBuild, F_this$0), "Lmindustry/world/blocks/storage/CoreBlock;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_blocks_storage_CoreBlock$CoreBuild_mindustry_world_blocks_storage_CoreBlock, 0, "(Lmindustry/world/blocks/storage/CoreBlock;)V", 1 },
	{ "isCommandable", (intptr_t) M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_isCommandable_R_boolean, VTABLE_mindustry_world_blocks_storage_CoreBlock$CoreBuild_isCommandable_R_boolean, "()Z", 1 },
	{ "getCommandPosition", (intptr_t) M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_getCommandPosition_R_arc_math_geom_Vec2, VTABLE_mindustry_world_blocks_storage_CoreBlock$CoreBuild_getCommandPosition_R_arc_math_geom_Vec2, "()Larc/math/geom/Vec2;", 1 },
	{ "onCommand", (intptr_t) M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_onCommand_arc_math_geom_Vec2, VTABLE_mindustry_world_blocks_storage_CoreBlock$CoreBuild_onCommand_arc_math_geom_Vec2, "(Larc/math/geom/Vec2;)V", 1 },
	{ "canUnload", (intptr_t) M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_canUnload_R_boolean, VTABLE_mindustry_world_blocks_storage_CoreBlock$CoreBuild_canUnload_R_boolean, "()Z", 1 },
	{ "buildConfiguration", (intptr_t) M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_buildConfiguration_arc_scene_ui_layout_Table, VTABLE_mindustry_world_blocks_storage_CoreBlock$CoreBuild_buildConfiguration_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 1 },
	{ "configured", (intptr_t) M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_configured_mindustry_gen_Unit_java_lang_Object, VTABLE_mindustry_world_blocks_storage_CoreBlock$CoreBuild_configured_mindustry_gen_Unit_java_lang_Object, "(Lmindustry/gen/Unit;Ljava/lang/Object;)V", 1 },
	{ "shouldHideConfigure", (intptr_t) M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_shouldHideConfigure_mindustry_gen_Player_R_boolean, VTABLE_mindustry_world_blocks_storage_CoreBlock$CoreBuild_shouldHideConfigure_mindustry_gen_Player_R_boolean, "(Lmindustry/gen/Player;)Z", 1 },
	{ "draw", (intptr_t) M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_draw, VTABLE_mindustry_world_blocks_storage_CoreBlock$CoreBuild_draw, "()V", 1 },
	{ "launchDuration", (intptr_t) M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_launchDuration_R_float, VTABLE_mindustry_world_blocks_storage_CoreBlock$CoreBuild_launchDuration_R_float, "()F", 1 },
	{ "landMusic", (intptr_t) M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_landMusic_R_arc_audio_Music, VTABLE_mindustry_world_blocks_storage_CoreBlock$CoreBuild_landMusic_R_arc_audio_Music, "()Larc/audio/Music;", 1 },
	{ "beginLaunch", (intptr_t) M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_beginLaunch_boolean, VTABLE_mindustry_world_blocks_storage_CoreBlock$CoreBuild_beginLaunch_boolean, "(Z)V", 1 },
	{ "endLaunch", (intptr_t) M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_endLaunch, VTABLE_mindustry_world_blocks_storage_CoreBlock$CoreBuild_endLaunch, "()V", 1 },
	{ "drawLaunch", (intptr_t) M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_drawLaunch, VTABLE_mindustry_world_blocks_storage_CoreBlock$CoreBuild_drawLaunch, "()V", 1 },
	{ "drawLanding", (intptr_t) M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_drawLanding_float_float, VTABLE_mindustry_world_blocks_storage_CoreBlock$CoreBuild_drawLanding_float_float, "(FF)V", 1 },
	{ "drawLandingThrusters", (intptr_t) M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_drawLandingThrusters_float_float_float_float, VTABLE_mindustry_world_blocks_storage_CoreBlock$CoreBuild_drawLandingThrusters_float_float_float_float, "(FFFF)V", 4 },
	{ "drawThrusters", (intptr_t) M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_drawThrusters_float, VTABLE_mindustry_world_blocks_storage_CoreBlock$CoreBuild_drawThrusters_float, "(F)V", 1 },
	{ "damage", (intptr_t) M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_damage_mindustry_game_Team_float, VTABLE_mindustry_world_blocks_storage_CoreBlock$CoreBuild_damage_mindustry_game_Team_float, "(Lmindustry/game/Team;F)V", 1 },
	{ "created", (intptr_t) M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_created, VTABLE_mindustry_world_blocks_storage_CoreBlock$CoreBuild_created, "()V", 1 },
	{ "changeTeam", (intptr_t) M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_changeTeam_mindustry_game_Team, VTABLE_mindustry_world_blocks_storage_CoreBlock$CoreBuild_changeTeam_mindustry_game_Team, "(Lmindustry/game/Team;)V", 1 },
	{ "sense", (intptr_t) M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_sense_mindustry_logic_LAccess_R_double, VTABLE_mindustry_world_blocks_storage_CoreBlock$CoreBuild_sense_mindustry_logic_LAccess_R_double, "(Lmindustry/logic/LAccess;)D", 1 },
	{ "sense", (intptr_t) M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_sense_mindustry_ctype_Content_R_double, VTABLE_mindustry_world_blocks_storage_CoreBlock$CoreBuild_sense_mindustry_ctype_Content_R_double, "(Lmindustry/ctype/Content;)D", 1 },
	{ "canControlSelect", (intptr_t) M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_canControlSelect_mindustry_gen_Unit_R_boolean, VTABLE_mindustry_world_blocks_storage_CoreBlock$CoreBuild_canControlSelect_mindustry_gen_Unit_R_boolean, "(Lmindustry/gen/Unit;)Z", 1 },
	{ "onControlSelect", (intptr_t) M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_onControlSelect_mindustry_gen_Unit, VTABLE_mindustry_world_blocks_storage_CoreBlock$CoreBuild_onControlSelect_mindustry_gen_Unit, "(Lmindustry/gen/Unit;)V", 1 },
	{ "requestSpawn", (intptr_t) M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_requestSpawn_mindustry_gen_Player, VTABLE_mindustry_world_blocks_storage_CoreBlock$CoreBuild_requestSpawn_mindustry_gen_Player, "(Lmindustry/gen/Player;)V", 1 },
	{ "updateTile", (intptr_t) M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_updateTile, VTABLE_mindustry_world_blocks_storage_CoreBlock$CoreBuild_updateTile, "()V", 1 },
	{ "zoomLaunch", (intptr_t) M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_zoomLaunch_R_float, VTABLE_mindustry_world_blocks_storage_CoreBlock$CoreBuild_zoomLaunch_R_float, "()F", 1 },
	{ "updateLaunch", (intptr_t) M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_updateLaunch, VTABLE_mindustry_world_blocks_storage_CoreBlock$CoreBuild_updateLaunch, "()V", 1 },
	{ "onDestroyed", (intptr_t) M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_onDestroyed, VTABLE_mindustry_world_blocks_storage_CoreBlock$CoreBuild_onDestroyed, "()V", 1 },
	{ "playDestroySound", (intptr_t) M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_playDestroySound, VTABLE_mindustry_world_blocks_storage_CoreBlock$CoreBuild_playDestroySound, "()V", 1 },
	{ "afterDestroyed", (intptr_t) M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_afterDestroyed, VTABLE_mindustry_world_blocks_storage_CoreBlock$CoreBuild_afterDestroyed, "()V", 1 },
	{ "drawLight", (intptr_t) M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_drawLight, VTABLE_mindustry_world_blocks_storage_CoreBlock$CoreBuild_drawLight, "()V", 1 },
	{ "acceptItem", (intptr_t) M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_acceptItem_mindustry_gen_Building_mindustry_type_Item_R_boolean, VTABLE_mindustry_world_blocks_storage_CoreBlock$CoreBuild_acceptItem_mindustry_gen_Building_mindustry_type_Item_R_boolean, "(Lmindustry/gen/Building;Lmindustry/type/Item;)Z", 1 },
	{ "getMaximumAccepted", (intptr_t) M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_getMaximumAccepted_mindustry_type_Item_R_int, VTABLE_mindustry_world_blocks_storage_CoreBlock$CoreBuild_getMaximumAccepted_mindustry_type_Item_R_int, "(Lmindustry/type/Item;)I", 1 },
	{ "onProximityUpdate", (intptr_t) M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_onProximityUpdate, VTABLE_mindustry_world_blocks_storage_CoreBlock$CoreBuild_onProximityUpdate, "()V", 1 },
	{ "handleStack", (intptr_t) M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_handleStack_mindustry_type_Item_int_mindustry_gen_Teamc, VTABLE_mindustry_world_blocks_storage_CoreBlock$CoreBuild_handleStack_mindustry_type_Item_int_mindustry_gen_Teamc, "(Lmindustry/type/Item;ILmindustry/gen/Teamc;)V", 1 },
	{ "removeStack", (intptr_t) M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_removeStack_mindustry_type_Item_int_R_int, VTABLE_mindustry_world_blocks_storage_CoreBlock$CoreBuild_removeStack_mindustry_type_Item_int_R_int, "(Lmindustry/type/Item;I)I", 1 },
	{ "drawSelect", (intptr_t) M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_drawSelect, VTABLE_mindustry_world_blocks_storage_CoreBlock$CoreBuild_drawSelect, "()V", 1 },
	{ "owns", (intptr_t) M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_owns_mindustry_gen_Building_R_boolean, VTABLE_mindustry_world_blocks_storage_CoreBlock$CoreBuild_owns_mindustry_gen_Building_R_boolean, "(Lmindustry/gen/Building;)Z", 1 },
	{ "owns", (intptr_t) M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_owns_mindustry_gen_Building_mindustry_gen_Building_R_boolean, VTABLE_mindustry_world_blocks_storage_CoreBlock$CoreBuild_owns_mindustry_gen_Building_mindustry_gen_Building_R_boolean, "(Lmindustry/gen/Building;Lmindustry/gen/Building;)Z", 1 },
	{ "damage", (intptr_t) M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_damage_float, VTABLE_mindustry_world_blocks_storage_CoreBlock$CoreBuild_damage_float, "(F)V", 1 },
	{ "onRemoved", (intptr_t) M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_onRemoved, VTABLE_mindustry_world_blocks_storage_CoreBlock$CoreBuild_onRemoved, "()V", 1 },
	{ "placed", (intptr_t) M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_placed, VTABLE_mindustry_world_blocks_storage_CoreBlock$CoreBuild_placed, "()V", 1 },
	{ "itemTaken", (intptr_t) M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_itemTaken_mindustry_type_Item, VTABLE_mindustry_world_blocks_storage_CoreBlock$CoreBuild_itemTaken_mindustry_type_Item, "(Lmindustry/type/Item;)V", 1 },
	{ "handleItem", (intptr_t) M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_handleItem_mindustry_gen_Building_mindustry_type_Item, VTABLE_mindustry_world_blocks_storage_CoreBlock$CoreBuild_handleItem_mindustry_gen_Building_mindustry_type_Item, "(Lmindustry/gen/Building;Lmindustry/type/Item;)V", 1 },
	{ "version", (intptr_t) M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_version_R_byte, VTABLE_mindustry_world_blocks_storage_CoreBlock$CoreBuild_version_R_byte, "()B", 1 },
	{ "write", (intptr_t) M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_write_arc_util_io_Writes, VTABLE_mindustry_world_blocks_storage_CoreBlock$CoreBuild_write_arc_util_io_Writes, "(Larc/util/io/Writes;)V", 1 },
	{ "read", (intptr_t) M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_read_arc_util_io_Reads_byte, VTABLE_mindustry_world_blocks_storage_CoreBlock$CoreBuild_read_arc_util_io_Reads_byte, "(Larc/util/io/Reads;B)V", 1 },
	{ "lambda$onRemoved$2", (intptr_t) M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_lambda$onRemoved$2_int_mindustry_gen_Building, VTABLE_mindustry_world_blocks_storage_CoreBlock$CoreBuild_lambda$onRemoved$2_int_mindustry_gen_Building, "(ILmindustry/gen/Building;)V", 4098 },
	{ "lambda$onRemoved$1", (intptr_t) M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_lambda$onRemoved$1_mindustry_gen_Building_R_boolean, VTABLE_mindustry_world_blocks_storage_CoreBlock$CoreBuild_lambda$onRemoved$1_mindustry_gen_Building_R_boolean, "(Lmindustry/gen/Building;)Z", 4098 },
	{ "lambda$onRemoved$0", (intptr_t) M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_lambda$onRemoved$0_mindustry_gen_Building_R_int, VTABLE_mindustry_world_blocks_storage_CoreBlock$CoreBuild_lambda$onRemoved$0_mindustry_gen_Building_R_int, "(Lmindustry/gen/Building;)I", 4098 },
	{ "lambda$drawSelect$2", (intptr_t) M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_lambda$drawSelect$2_arc_func_Cons_mindustry_world_blocks_storage_CoreBlock$CoreBuild, VTABLE_mindustry_world_blocks_storage_CoreBlock$CoreBuild_lambda$drawSelect$2_arc_func_Cons_mindustry_world_blocks_storage_CoreBlock$CoreBuild, "(Larc/func/Cons;Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;)V", 4098 },
	{ "lambda$drawSelect$3", (intptr_t) M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_lambda$drawSelect$3_mindustry_gen_Building_R_boolean, VTABLE_mindustry_world_blocks_storage_CoreBlock$CoreBuild_lambda$drawSelect$3_mindustry_gen_Building_R_boolean, "(Lmindustry/gen/Building;)Z", 4098 },
	{ "lambda$drawSelect$1", (intptr_t) SM_mindustry_world_blocks_storage_CoreBlock$CoreBuild_lambda$drawSelect$1_mindustry_gen_Building, 0, "(Lmindustry/gen/Building;)V", 4106 },
	{ "lambda$drawSelect$0", (intptr_t) M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_lambda$drawSelect$0_mindustry_gen_Building_R_boolean, VTABLE_mindustry_world_blocks_storage_CoreBlock$CoreBuild_lambda$drawSelect$0_mindustry_gen_Building_R_boolean, "(Lmindustry/gen/Building;)Z", 4098 },
	{ "lambda$onProximityUpdate$2", (intptr_t) M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_lambda$onProximityUpdate$2_mindustry_gen_Building_mindustry_gen_Building_R_int, VTABLE_mindustry_world_blocks_storage_CoreBlock$CoreBuild_lambda$onProximityUpdate$2_mindustry_gen_Building_mindustry_gen_Building_R_int, "(Lmindustry/gen/Building;Lmindustry/gen/Building;)I", 4098 },
	{ "lambda$onProximityUpdate$1", (intptr_t) M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_lambda$onProximityUpdate$1_mindustry_gen_Building, VTABLE_mindustry_world_blocks_storage_CoreBlock$CoreBuild_lambda$onProximityUpdate$1_mindustry_gen_Building, "(Lmindustry/gen/Building;)V", 4098 },
	{ "lambda$onProximityUpdate$0", (intptr_t) M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_lambda$onProximityUpdate$0_mindustry_gen_Building_R_int, VTABLE_mindustry_world_blocks_storage_CoreBlock$CoreBuild_lambda$onProximityUpdate$0_mindustry_gen_Building_R_int, "(Lmindustry/gen/Building;)I", 4098 },
	{ "lambda$afterDestroyed$0", (intptr_t) M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_lambda$afterDestroyed$0, VTABLE_mindustry_world_blocks_storage_CoreBlock$CoreBuild_lambda$afterDestroyed$0, "()V", 4098 },
	{ "lambda$updateLaunch$0", (intptr_t) M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_lambda$updateLaunch$0_mindustry_world_Tile, VTABLE_mindustry_world_blocks_storage_CoreBlock$CoreBuild_lambda$updateLaunch$0_mindustry_world_Tile, "(Lmindustry/world/Tile;)V", 4098 },
	{ "lambda$drawLaunch$0", (intptr_t) M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_lambda$drawLaunch$0_float_float_float_float_float_float, VTABLE_mindustry_world_blocks_storage_CoreBlock$CoreBuild_lambda$drawLaunch$0_float_float_float_float_float_float, "(FFFFFF)V", 4098 },
	{ "lambda$beginLaunch$2", (intptr_t) M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_lambda$beginLaunch$2, VTABLE_mindustry_world_blocks_storage_CoreBlock$CoreBuild_lambda$beginLaunch$2, "()V", 4098 },
	{ "lambda$beginLaunch$1", (intptr_t) SM_mindustry_world_blocks_storage_CoreBlock$CoreBuild_lambda$beginLaunch$1_arc_scene_ui_Image, 0, "(Larc/scene/ui/Image;)V", 4106 },
	{ "lambda$beginLaunch$0", (intptr_t) SM_mindustry_world_blocks_storage_CoreBlock$CoreBuild_lambda$beginLaunch$0_arc_scene_ui_Image, 0, "(Larc/scene/ui/Image;)V", 4106 },
	{ "lambda$buildConfiguration$2", (intptr_t) M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_lambda$buildConfiguration$2_arc_scene_ui_ImageButton_mindustry_game_Team, VTABLE_mindustry_world_blocks_storage_CoreBlock$CoreBuild_lambda$buildConfiguration$2_arc_scene_ui_ImageButton_mindustry_game_Team, "(Larc/scene/ui/ImageButton;Lmindustry/game/Team;)V", 4098 },
	{ "lambda$buildConfiguration$1", (intptr_t) M_mindustry_world_blocks_storage_CoreBlock$CoreBuild_lambda$buildConfiguration$1_arc_scene_ui_ImageButton_mindustry_game_Team, VTABLE_mindustry_world_blocks_storage_CoreBlock$CoreBuild_lambda$buildConfiguration$1_arc_scene_ui_ImageButton_mindustry_game_Team, "(Larc/scene/ui/ImageButton;Lmindustry/game/Team;)V", 4098 },
	{ "lambda$buildConfiguration$0", (intptr_t) SM_mindustry_world_blocks_storage_CoreBlock$CoreBuild_lambda$buildConfiguration$0, 0, "()V", 4106 },
};

Class class_mindustry_world_blocks_storage_CoreBlock$CoreBuild{
		.nativeName = (intptr_t) "mindustry/world/blocks/storage/CoreBlock$CoreBuild",
		.parentClass = (intptr_t) &class_mindustry_gen_Building,
		.size = sizeof(mindustry_world_blocks_storage_CoreBlock$CoreBuild),
		.classVtable = (intptr_t) vtable_mindustry_world_blocks_storage_CoreBlock$CoreBuild,
		.staticInitializer = (intptr_t) clinit_mindustry_world_blocks_storage_CoreBlock$CoreBuild,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_world_blocks_storage_CoreBlock$CoreBuild,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_world_blocks_storage_CoreBlock,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 9,
		.nativeFields = (intptr_t) fields,
		.methodCount = 67,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 339,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_blocks_storage_CoreBlock$CoreBuild = registerClass(&class_mindustry_world_blocks_storage_CoreBlock$CoreBuild);

}

