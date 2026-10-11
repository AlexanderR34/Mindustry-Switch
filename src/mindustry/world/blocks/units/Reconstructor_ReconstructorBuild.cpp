#include "mindustry/world/blocks/units/Reconstructor_ReconstructorBuild.h"
#include "arc/Events.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "mindustry/world/meta/BlockStatus.h"
#include "mindustry/world/blocks/units/UnitBlock_UnitBuild.h"
#include "mindustry/logic/LAccess.h"
#include "java/lang/Runnable.h"
#include "arc/graphics/g2d/Draw.h"
#include "java/lang/reflect/Constructor.h"
#include "mindustry/entities/Effect.h"
#include "arc/scene/ui/Button.h"
#include "mindustry/content/Fx.h"
#include "mindustry/core/ContentLoader.h"
#include "arc/struct/Seq.h"
#include "arc/scene/ui/layout/Cell.h"
#include "java/lang/reflect/Method.h"
#include "arc/scene/ui/ImageButton.h"
#include "arc/math/geom/Position.h"
#include "mindustry/world/blocks/payloads/Payload.h"
#include "arc/func/Boolf.h"
#include "arc/math/Mathf.h"
#include "java/lang/reflect/Field.h"
#include "mindustry/gen/Unit.h"
#include "java/util/Iterator.h"
#include "mindustry/world/blocks/units/Reconstructor_ReconstructorBuild_invoke_java_lang_Runnable_3.h"
#include "mindustry/world/blocks/units/Reconstructor_ReconstructorBuild_invoke_java_lang_Runnable_5.h"
#include "mindustry/world/blocks/units/Reconstructor_ReconstructorBuild_invoke_java_lang_Runnable_4.h"
#include "arc/Graphics_Cursor.h"
#include "mindustry/world/blocks/units/Reconstructor_ReconstructorBuild_invoke_arc_func_Boolf_1.h"
#include "mindustry/type/Item.h"
#include "arc/util/Nullable.h"
#include "mindustry/world/modules/ItemModule.h"
#include "mindustry/gen/Building.h"
#include "java/lang/Object.h"
#include "mindustry/world/blocks/units/Reconstructor_ReconstructorBuild.h"
#include "arc/scene/ui/ButtonGroup.h"
#include "mindustry/io/TypeIO.h"
#include "arc/util/io/Writes.h"
#include "arc/math/geom/Vec2.h"
#include "mindustry/world/Block.h"
#include "arc/scene/style/TextureRegionDrawable.h"
#include "mindustry/game/Rules.h"
#include "mindustry/world/blocks/payloads/UnitPayload.h"
#include "mindustry/game/EventType_UnitCreateEvent.h"
#include "mindustry/ui/Displayable.h"
#include "mindustry/world/blocks/units/Reconstructor.h"
#include "mindustry/gen/Unitc.h"
#include "java/lang/String.h"
#include "mindustry/world/blocks/units/UnitBlock.h"
#include "arc/scene/style/Drawable.h"
#include "arc/scene/ui/ImageButton_ImageButtonStyle.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "mindustry/gen/Icon.h"
#include "arc/scene/ui/layout/Table.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/ai/UnitCommand.h"
#include "mindustry/ai/types/CommandAI.h"
#include "mindustry/ui/Styles.h"
#include "java/lang/Enum.h"
#include "mindustry/type/UnitType.h"
#include "arc/util/io/Reads.h"
#include "arc/Graphics_Cursor_SystemCursor.h"
#include "arc/scene/Element.h"
#include "mindustry/game/EventType_Trigger.h"
#include "mindustry/gen/Player.h"
#include "arc/audio/Sound.h"
#include "mindustry/world/blocks/payloads/PayloadBlock_PayloadBlockBuild.h"
#include "mindustry/graphics/Drawf.h"
#include "mindustry/game/Team.h"
#include "mindustry/Vars.h"
#include "mindustry/core/World.h"
#include "mindustry/core/GameState.h"

extern "C" {


void mark_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_world_blocks_units_UnitBlock$UnitBuild(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_world_blocks_units_Reconstructor$ReconstructorBuild *) object;
	if (self->F_commandPos)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_commandPos)->clazz)->markFunction)((jobject) self->F_commandPos, mark, depth + 1);
	if (self->F_command)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_command)->clazz)->markFunction)((jobject) self->F_command, mark, depth + 1);
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_world_blocks_units_UnitBlock$UnitBuild(ctx);
}

void init_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_mindustry_world_blocks_units_Reconstructor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/Reconstructor$ReconstructorBuild:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(168);
	((mindustry_world_blocks_units_Reconstructor$ReconstructorBuild *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_mindustry_world_blocks_units_UnitBlock$UnitBuild_mindustry_world_blocks_units_UnitBlock(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_fraction_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/Reconstructor$ReconstructorBuild:fraction", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(175);
	jfloat temp0 = (jfloat)((mindustry_world_blocks_units_UnitBlock$UnitBuild *) NULL_CHECK((frame[0].o)))->F_progress;
	sp[0].o = (jobject)((mindustry_world_blocks_units_Reconstructor$ReconstructorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	popStackFrame(ctx);
	return (temp0 / ((jfloat)((mindustry_world_blocks_units_Reconstructor *) NULL_CHECK(sp[0].o))->F_constructTime));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_getCommandPosition_R_arc_math_geom_Vec2(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/Reconstructor$ReconstructorBuild:getCommandPosition", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(180);
	sp[0].o = (jobject)((mindustry_world_blocks_units_Reconstructor$ReconstructorBuild *) NULL_CHECK((frame[0].o)))->F_commandPos;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_onCommand_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/Reconstructor$ReconstructorBuild:onCommand", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(185);
	((mindustry_world_blocks_units_Reconstructor$ReconstructorBuild *) NULL_CHECK((frame[0].o)))->F_commandPos = (jref) (frame[1].o);
	LINE_NUMBER(186);
	sp[0].o = (jobject)((mindustry_world_blocks_units_Reconstructor$ReconstructorBuild *) NULL_CHECK((frame[0].o)))->F_command;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_units_Reconstructor$ReconstructorBuild *) NULL_CHECK((frame[0].o)))->F_command;
	if (((jint)((mindustry_ai_UnitCommand *) NULL_CHECK(sp[0].o))->F_snapToBuilding) == 0) goto label_2;
	}
	{
	LINE_NUMBER(187);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_buildWorld_float_float_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_buildWorld_float_float_R_mindustry_gen_Building])(ctx, sp[0].o, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y));
	frame[2].o = sp[0].o;
	LINE_NUMBER(188);
	if ((frame[2].o) == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[2].o)))->F_team;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	if (sp[0].o != sp[1].o) goto label_2;
	}
	{
	LINE_NUMBER(189);
	sp[0].o = (jobject)((mindustry_world_blocks_units_Reconstructor$ReconstructorBuild *) NULL_CHECK((frame[0].o)))->F_commandPos;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_arc_math_geom_Position_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Position_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[2].o));
	}
label_2:;
	LINE_NUMBER(192);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_acceptUnitPayload_mindustry_gen_Unit_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/Reconstructor$ReconstructorBuild:acceptUnitPayload", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(196);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_type;
	jint temp0 = (jint)((func_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_hasUpgrade_mindustry_type_UnitType_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_hasUpgrade_mindustry_type_UnitType_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_type;
	sp[0].o = (jobject)((func_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_upgrade_mindustry_type_UnitType_R_mindustry_type_UnitType) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_upgrade_mindustry_type_UnitType_R_mindustry_type_UnitType])(ctx, sp[0].o, sp[1].o);
	jint temp0 = (jint)((func_mindustry_type_UnitType_isBanned_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_UnitType_isBanned_R_boolean])(ctx, sp[0].o);
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

jbool M_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_canSetCommand_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/Reconstructor$ReconstructorBuild:canSetCommand", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(200);
	sp[0].o = (jobject)((func_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_unit_R_mindustry_type_UnitType) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_unit_R_mindustry_type_UnitType])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(201);
	sp[0].o = (jobject)((mindustry_world_blocks_units_Reconstructor$ReconstructorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((mindustry_world_blocks_units_Reconstructor *) NULL_CHECK(sp[0].o))->F_showAllCommands) == 0) goto label_2;
	}
	INST_ALOAD(1);
	if ((--sp)->o == nullptr) goto label_3;
	{
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK((frame[1].o)))->F_allowChangeCommands) == 0) goto label_4;
	}
label_3:;
	INST_ICONST(1);
	goto label_5;
label_4:;
	INST_ICONST(0);
	goto label_5;
label_2:;
	INST_ALOAD(1);
	if ((--sp)->o == nullptr) goto label_6;
	{
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[1].o)))->F_commands;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) <= (jint(1))) goto label_6;
	}
	INST_ICONST(1);
	goto label_5;
label_6:;
	INST_ICONST(0);
label_5:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_getCursor_R_arc_Graphics$Cursor(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/Reconstructor$ReconstructorBuild:getCursor", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(206);
	jint temp0 = (jint)((func_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_canSetCommand_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_canSetCommand_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)M_mindustry_gen_Building_getCursor_R_arc_Graphics$Cursor(ctx, (frame[0].o));
	sp += 1;
	goto label_2;
	}
label_1:;
	clinit_arc_Graphics$Cursor$SystemCursor(ctx);
	(sp++)->o = SF_arc_Graphics$Cursor$SystemCursor_arrow;
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_shouldShowConfigure_mindustry_gen_Player_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/Reconstructor$ReconstructorBuild:shouldShowConfigure", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(211);
	jint temp0 = (jint)((func_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_canSetCommand_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_canSetCommand_R_boolean])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_buildConfiguration_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/Reconstructor$ReconstructorBuild:buildConfiguration", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(216);
	sp[0].o = (jobject)((func_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_unit_R_mindustry_type_UnitType) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_unit_R_mindustry_type_UnitType])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(218);
	sp[0].o = (jobject)((mindustry_world_blocks_units_Reconstructor$ReconstructorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((mindustry_world_blocks_units_Reconstructor *) NULL_CHECK(sp[0].o))->F_showAllCommands) != 0) goto label_2;
	}
	INST_ALOAD(2);
	if ((--sp)->o != nullptr) goto label_2;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(220);
	clinit_arc_scene_ui_ButtonGroup(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_ButtonGroup);
	init_arc_scene_ui_ButtonGroup(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(221);
	((func_arc_scene_ui_ButtonGroup_setMinCheckCount_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_ButtonGroup_setMinCheckCount_int])(ctx, (frame[3].o), (jint(0)));
	LINE_NUMBER(222);
	frame[4].i = (jint(0));
	frame[5].i = (jint(5));
	LINE_NUMBER(224);
	sp[0].o = frame[1].o;
	clinit_mindustry_ui_Styles(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_Styles_black6;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_background_arc_scene_style_Drawable_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_background_arc_scene_style_Drawable_R_arc_scene_ui_layout_Table])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(226);
	if ((frame[2].o) != nullptr) goto label_8;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_unitCommands_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_unitCommands_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_copy_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_copy_R_arc_struct_Seq])(ctx, sp[0].o);
	sp += 1;
	goto label_9;
	}
label_8:;
	{
	sp[0].o = (jobject)((func_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_unit_R_mindustry_type_UnitType) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_unit_R_mindustry_type_UnitType])(ctx, (frame[0].o));
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_commands;
	sp += 1;
	}
label_9:;
	{
	sp -= 1;
	frame[6].o = sp[0].o;
	LINE_NUMBER(227);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[6].o));
	frame[7].o = sp[0].o;
	}
label_11:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[7].o)))(ctx, (frame[7].o));
	if (temp0 == 0) goto label_12;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[7].o)))(ctx, (frame[7].o));
	frame[8].o = (checkCast(ctx, &class_mindustry_ai_UnitCommand, sp[0].o));
	LINE_NUMBER(228);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_mindustry_ai_UnitCommand_getIcon_R_arc_scene_style_TextureRegionDrawable) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_mindustry_ai_UnitCommand_getIcon_R_arc_scene_style_TextureRegionDrawable])(ctx, (frame[8].o));
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_clearNoneTogglei;
	jfloat temp0 = jfloat(44.0f);
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_invoke_java_lang_Runnable_3(ctx);
		auto proxy = (mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_invoke_java_lang_Runnable_3 *) gcAlloc(ctx, &class_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_invoke_java_lang_Runnable_3);
		proxy->F_field1 = (jref) (frame[8].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, sp[3].o);
	sp[1].o = frame[8].o;
	LINE_NUMBER(231);
	sp[1].o = (jobject)((func_mindustry_ai_UnitCommand_localized_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_ai_UnitCommand_localized_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_tooltip_java_lang_String_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_tooltip_java_lang_String_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_group_arc_scene_ui_ButtonGroup_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_group_arc_scene_ui_ButtonGroup_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (frame[3].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, sp[0].o);
	frame[9].o = (checkCast(ctx, &class_arc_scene_ui_ImageButton, sp[0].o));
	LINE_NUMBER(233);
	sp[0].o = frame[9].o;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_invoke_java_lang_Runnable_4(ctx);
		auto proxy = (mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_invoke_java_lang_Runnable_4 *) gcAlloc(ctx, &class_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_invoke_java_lang_Runnable_4);
		proxy->F_field3 = (jref) (frame[2].o);
		proxy->F_field2 = (jref) (frame[8].o);
		proxy->F_field1 = (jref) (frame[9].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_ImageButton_update_java_lang_Runnable_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ImageButton_update_java_lang_Runnable_R_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(235);
	INST_IINC(4, 1);
	if (((frame[4].i) % (frame[5].i)) != 0) goto label_17;
	}
	{
	LINE_NUMBER(236);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	}
label_17:;
	LINE_NUMBER(238);
	goto label_11;
label_12:;
	LINE_NUMBER(239);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_acceptPayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/Reconstructor$ReconstructorBuild:acceptPayload", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(243);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_payload;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	if (((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_enabled) != 0) goto label_2;
	}
	{
	if ((frame[1].o) != (frame[0].o)) goto label_1;
	}
label_2:;
	{
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	LINE_NUMBER(245);
	jint temp0 = (jint)((func_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_relativeTo_mindustry_gen_Building_R_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_relativeTo_mindustry_gen_Building_R_byte])(ctx, sp[0].o, sp[1].o);
	if (temp0 == ((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_rotation)) goto label_1;
	}
	{
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_world_blocks_payloads_UnitPayload)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(246);
	frame[3].o = (checkCast(ctx, &class_mindustry_world_blocks_payloads_UnitPayload, (frame[2].o)));
	goto label_6;
	}
label_1:;
	{
	LINE_NUMBER(247);
	popStackFrame(ctx);
	return (jint(0));
	}
label_6:;
	{
	LINE_NUMBER(250);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_world_blocks_payloads_UnitPayload *) NULL_CHECK((frame[3].o)))->F_unit;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[1].o))->F_type;
	sp[0].o = (jobject)((func_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_upgrade_mindustry_type_UnitType_R_mindustry_type_UnitType) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_upgrade_mindustry_type_UnitType_R_mindustry_type_UnitType])(ctx, sp[0].o, sp[1].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(252);
	if ((frame[4].o) == nullptr) goto label_8;
	}
	{
	LINE_NUMBER(253);
	jint temp0 = (jint)((func_mindustry_type_UnitType_unlockedNowHost_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_type_UnitType_unlockedNowHost_R_boolean])(ctx, (frame[4].o));
	if (temp0 != 0) goto label_10;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	jint temp0 = (jint)((func_mindustry_game_Team_isAI_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_isAI_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_10;
	}
	{
	LINE_NUMBER(255);
	sp[0].o = frame[3].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_tree;
	((func_mindustry_world_blocks_payloads_UnitPayload_showOverlay_arc_scene_style_TextureRegionDrawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_payloads_UnitPayload_showOverlay_arc_scene_style_TextureRegionDrawable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(256);
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[0].o = (jobject)SF_mindustry_game_EventType$Trigger_cannotUpgrade;
	SM_arc_Events_fire_java_lang_Enum(ctx, sp[0].o);
	}
label_10:;
	{
	LINE_NUMBER(259);
	jint temp0 = (jint)((func_mindustry_type_UnitType_isBanned_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_type_UnitType_isBanned_R_boolean])(ctx, (frame[4].o));
	if (temp0 == 0) goto label_8;
	}
	{
	LINE_NUMBER(261);
	sp[0].o = frame[3].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_cancel;
	((func_mindustry_world_blocks_payloads_UnitPayload_showOverlay_arc_scene_style_TextureRegionDrawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_payloads_UnitPayload_showOverlay_arc_scene_style_TextureRegionDrawable])(ctx, sp[0].o, sp[1].o);
	}
label_8:;
	{
	LINE_NUMBER(265);
	if ((frame[4].o) == nullptr) goto label_14;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	jint temp0 = (jint)((func_mindustry_game_Team_isAI_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_isAI_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_15;
	}
	{
	jint temp0 = (jint)((func_mindustry_type_UnitType_unlockedNowHost_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_type_UnitType_unlockedNowHost_R_boolean])(ctx, (frame[4].o));
	if (temp0 == 0) goto label_14;
	}
label_15:;
	{
	jint temp0 = (jint)((func_mindustry_type_UnitType_isBanned_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_type_UnitType_isBanned_R_boolean])(ctx, (frame[4].o));
	if (temp0 != 0) goto label_14;
	}
	INST_ICONST(1);
	goto label_16;
label_14:;
	INST_ICONST(0);
label_16:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_status_R_mindustry_world_meta_BlockStatus(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/Reconstructor$ReconstructorBuild:status", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(270);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	jint temp0 = (jint)((func_mindustry_game_Team_activateUnitFactories_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_activateUnitFactories_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	clinit_mindustry_world_meta_BlockStatus(ctx);
	(sp++)->o = SF_mindustry_world_meta_BlockStatus_inactiveUnitFactory;
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(271);
	sp[0].o = (jobject)M_mindustry_gen_Building_status_R_mindustry_world_meta_BlockStatus(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_getMaximumAccepted_mindustry_type_Item_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/Reconstructor$ReconstructorBuild:getMaximumAccepted", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(276);
	sp[0].o = (jobject)((mindustry_world_blocks_units_Reconstructor$ReconstructorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_units_Reconstructor *) NULL_CHECK(sp[0].o))->F_capacities;
	jfloat temp0 = jfloat(((jint)ARRAY_ACCESS(jint, sp[0].o, ((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[1].o)))->F_id))));
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	jfloat temp1 = (jfloat)((func_mindustry_game_Rules_unitCost_mindustry_game_Team_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Rules_unitCost_mindustry_game_Team_R_float])(ctx, sp[0].o, sp[1].o);
	jint temp2 = (jint)SM_arc_math_Mathf_round_float_R_int(ctx, (temp0 * temp1));
	popStackFrame(ctx);
	return temp2;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_overwrote_arc_struct_Seq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/Reconstructor$ReconstructorBuild:overwrote", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(281);
	sp[0].o = (jobject)((func_arc_struct_Seq_first_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_first_R_java_lang_Object])(ctx, (frame[1].o));
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((checkCast(ctx, &class_mindustry_gen_Building, sp[0].o))))->F_block;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	LINE_NUMBER(282);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	sp[1].o = (jobject)((func_arc_struct_Seq_first_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_first_R_java_lang_Object])(ctx, (frame[1].o));
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((checkCast(ctx, &class_mindustry_gen_Building, sp[1].o))))->F_items;
	((func_mindustry_world_modules_ItemModule_add_mindustry_world_modules_ItemModule) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_add_mindustry_world_modules_ItemModule])(ctx, sp[0].o, sp[1].o);
	}
label_1:;
	LINE_NUMBER(284);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_draw(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/Reconstructor$ReconstructorBuild:draw", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(288);
	sp[0].o = (jobject)((mindustry_world_blocks_units_Reconstructor$ReconstructorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_region;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float(ctx, sp[0].o, ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y));
	LINE_NUMBER(291);
	frame[1].i = (jint(1));
	LINE_NUMBER(292);
	frame[2].i = (jint(0));
	}
label_3:;
	{
	if ((frame[2].i) >= (jint(4))) goto label_4;
	}
	{
	LINE_NUMBER(293);
	jint temp0 = (jint)((func_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_blends_int_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_blends_int_R_boolean])(ctx, (frame[0].o), (frame[2].i));
	if (temp0 == 0) goto label_6;
	}
	{
	if ((frame[2].i) == ((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_rotation)) goto label_6;
	}
	{
	LINE_NUMBER(294);
	sp[0].o = (jobject)((mindustry_world_blocks_units_Reconstructor$ReconstructorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock *) NULL_CHECK(sp[0].o))->F_inRegion;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float(ctx, sp[0].o, ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y), (jfloat((((frame[2].i) * (90)) - (180)))));
	LINE_NUMBER(295);
	frame[1].i = (jint(0));
	}
label_6:;
	{
	LINE_NUMBER(292);
	INST_IINC(2, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(298);
	if ((frame[1].i) == 0) goto label_9;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_units_Reconstructor$ReconstructorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock *) NULL_CHECK(sp[0].o))->F_inRegion;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float(ctx, sp[0].o, ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y), (jfloat((((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_rotation) * (90)))));
	}
label_9:;
	{
	LINE_NUMBER(300);
	sp[0].o = (jobject)((mindustry_world_blocks_units_Reconstructor$ReconstructorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock *) NULL_CHECK(sp[0].o))->F_outRegion;
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	jfloat temp2 = (jfloat)((func_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_rotdeg_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_rotdeg_R_float])(ctx, (frame[0].o));
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float(ctx, sp[0].o, temp0, temp1, temp2);
	LINE_NUMBER(302);
	jint temp3 = (jint)((func_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_constructing_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_constructing_R_boolean])(ctx, (frame[0].o));
	if (temp3 == 0) goto label_11;
	}
	{
	jint temp0 = (jint)((func_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_hasArrived_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_hasArrived_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_11;
	}
	{
	LINE_NUMBER(303);
	jfloat temp0 = jfloat(35.0f);
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_invoke_java_lang_Runnable_5(ctx);
		auto proxy = (mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_invoke_java_lang_Runnable_5 *) gcAlloc(ctx, &class_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_invoke_java_lang_Runnable_5);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	SM_arc_graphics_g2d_Draw_draw_float_java_lang_Runnable(ctx, temp0, sp[0].o);
	goto label_13;
	}
label_11:;
	{
	LINE_NUMBER(310);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (jfloat(35.0f)));
	LINE_NUMBER(312);
	((func_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_drawPayload) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_drawPayload])(ctx, (frame[0].o));
	}
label_13:;
	{
	LINE_NUMBER(315);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (jfloat(35.1f)));
	LINE_NUMBER(316);
	sp[0].o = (jobject)((mindustry_world_blocks_units_Reconstructor$ReconstructorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock *) NULL_CHECK(sp[0].o))->F_topRegion;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float(ctx, sp[0].o, ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y));
	LINE_NUMBER(317);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_senseObject_mindustry_logic_LAccess_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/Reconstructor$ReconstructorBuild:senseObject", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(321);
	sp[0].o = frame[1].o;
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_config;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_unit_R_mindustry_type_UnitType) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_unit_R_mindustry_type_UnitType])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(322);
	sp[0].o = (jobject)M_mindustry_gen_Building_senseObject_mindustry_logic_LAccess_R_java_lang_Object(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_updateTile(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/Reconstructor$ReconstructorBuild:updateTile", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(328);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_constructing_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_constructing_R_boolean])(ctx, (frame[0].o));
	((mindustry_world_blocks_units_Reconstructor$ReconstructorBuild *) NULL_CHECK(sp[0].o))->F_constructing = temp0;
	LINE_NUMBER(329);
	frame[1].i = (jint(0));
	LINE_NUMBER(331);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_payload;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(333);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_payload;
	sp[1].o = (jobject)((mindustry_world_blocks_payloads_UnitPayload *) NULL_CHECK((checkCast(ctx, &class_mindustry_world_blocks_payloads_UnitPayload, sp[1].o))))->F_unit;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[1].o))->F_type;
	jint temp0 = (jint)((func_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_hasUpgrade_mindustry_type_UnitType_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_hasUpgrade_mindustry_type_UnitType_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_5;
	}
	{
	LINE_NUMBER(334);
	((func_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_moveOutPayload) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_moveOutPayload])(ctx, (frame[0].o));
	goto label_3;
	}
label_5:;
	{
	LINE_NUMBER(336);
	jint temp0 = (jint)((func_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_moveInPayload_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_moveInPayload_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(337);
	if ((floatCompare(((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_efficiency), (jfloat(0)), -1)) <= 0) goto label_8;
	}
	{
	LINE_NUMBER(338);
	frame[1].i = (jint(1));
	LINE_NUMBER(339);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_world_blocks_units_UnitBlock$UnitBuild *) NULL_CHECK(sp[0].o))->F_progress;
	jfloat temp1 = (jfloat)((func_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_edelta_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_edelta_R_float])(ctx, (frame[0].o));
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[2].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	jfloat temp2 = (jfloat)((func_mindustry_game_Rules_unitBuildSpeed_mindustry_game_Team_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_game_Rules_unitBuildSpeed_mindustry_game_Team_R_float])(ctx, sp[1].o, sp[2].o);
	((mindustry_world_blocks_units_UnitBlock$UnitBuild *) NULL_CHECK(sp[0].o))->F_progress = (temp0 + (temp1 * temp2));
	}
label_8:;
	{
	LINE_NUMBER(343);
	jfloat temp0 = (jfloat)((mindustry_world_blocks_units_UnitBlock$UnitBuild *) NULL_CHECK((frame[0].o)))->F_progress;
	sp[0].o = (jobject)((mindustry_world_blocks_units_Reconstructor$ReconstructorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if ((floatCompare(temp0, ((jfloat)((mindustry_world_blocks_units_Reconstructor *) NULL_CHECK(sp[0].o))->F_constructTime), -1)) < 0) goto label_3;
	}
	{
	LINE_NUMBER(344);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_payload;
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_payloads_UnitPayload, sp[0].o);
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_payload;
	sp[2].o = (jobject)((mindustry_world_blocks_payloads_UnitPayload *) NULL_CHECK((checkCast(ctx, &class_mindustry_world_blocks_payloads_UnitPayload, sp[2].o))))->F_unit;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[2].o))->F_type;
	sp[1].o = (jobject)((func_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_upgrade_mindustry_type_UnitType_R_mindustry_type_UnitType) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_upgrade_mindustry_type_UnitType_R_mindustry_type_UnitType])(ctx, sp[1].o, sp[2].o);
	sp[2].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_payload;
	sp[2].o = (jobject)((mindustry_world_blocks_payloads_UnitPayload *) NULL_CHECK((checkCast(ctx, &class_mindustry_world_blocks_payloads_UnitPayload, sp[2].o))))->F_unit;
	sp[2].o = (jobject)((func_mindustry_gen_Unit_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_gen_Unit_team_R_mindustry_game_Team])(ctx, sp[2].o);
	sp[1].o = (jobject)((func_mindustry_type_UnitType_create_mindustry_game_Team_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_type_UnitType_create_mindustry_game_Team_R_mindustry_gen_Unit])(ctx, sp[1].o, sp[2].o);
	((mindustry_world_blocks_payloads_UnitPayload *) NULL_CHECK(sp[0].o))->F_unit = (jref) sp[1].o;
	LINE_NUMBER(346);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_payload;
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_UnitPayload *) NULL_CHECK((checkCast(ctx, &class_mindustry_world_blocks_payloads_UnitPayload, sp[0].o))))->F_unit;
	jint temp0 = (jint)((func_mindustry_gen_Unit_isCommandable_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_isCommandable_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_13;
	}
	{
	LINE_NUMBER(347);
	sp[0].o = (jobject)((mindustry_world_blocks_units_Reconstructor$ReconstructorBuild *) NULL_CHECK((frame[0].o)))->F_commandPos;
	if (sp[0].o == nullptr) goto label_15;
	}
	{
	LINE_NUMBER(348);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_payload;
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_UnitPayload *) NULL_CHECK((checkCast(ctx, &class_mindustry_world_blocks_payloads_UnitPayload, sp[0].o))))->F_unit;
	sp[0].o = (jobject)((func_mindustry_gen_Unit_command_R_mindustry_ai_types_CommandAI) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_command_R_mindustry_ai_types_CommandAI])(ctx, sp[0].o);
	sp[1].o = (jobject)((mindustry_world_blocks_units_Reconstructor$ReconstructorBuild *) NULL_CHECK((frame[0].o)))->F_commandPos;
	((func_mindustry_ai_types_CommandAI_commandPosition_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_types_CommandAI_commandPosition_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	}
label_15:;
	{
	LINE_NUMBER(351);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_payload;
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_UnitPayload *) NULL_CHECK((checkCast(ctx, &class_mindustry_world_blocks_payloads_UnitPayload, sp[0].o))))->F_unit;
	sp[0].o = (jobject)((func_mindustry_gen_Unit_command_R_mindustry_ai_types_CommandAI) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_command_R_mindustry_ai_types_CommandAI])(ctx, sp[0].o);
	sp[1].o = (jobject)((mindustry_world_blocks_units_Reconstructor$ReconstructorBuild *) NULL_CHECK((frame[0].o)))->F_command;
	sp += 1;
	if (sp[0].o != nullptr) goto label_17;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_payload;
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_UnitPayload *) NULL_CHECK((checkCast(ctx, &class_mindustry_world_blocks_payloads_UnitPayload, sp[0].o))))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type;
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_defaultCommand;
	if (sp[0].o == nullptr) goto label_17;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_payload;
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_UnitPayload *) NULL_CHECK((checkCast(ctx, &class_mindustry_world_blocks_payloads_UnitPayload, sp[0].o))))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type;
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_defaultCommand;
	sp += 1;
	goto label_18;
	}
label_17:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((mindustry_world_blocks_units_Reconstructor$ReconstructorBuild *) NULL_CHECK(sp[-1].o))->F_command;
label_18:;
	POP_N(2); // Pop method args
	((func_mindustry_ai_types_CommandAI_command_mindustry_ai_UnitCommand) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_types_CommandAI_command_mindustry_ai_UnitCommand])(ctx, sp[0].o, sp[1].o);
label_13:;
	{
	LINE_NUMBER(354);
	sp[0].o = (jobject)((mindustry_world_blocks_units_Reconstructor$ReconstructorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_units_Reconstructor *) NULL_CHECK(sp[0].o))->F_createSound;
	sp[1].o = frame[0].o;
	jfloat temp0 = jfloat(1);
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_range_float_R_float(ctx, (jfloat(0.06f)));
	jfloat temp2 = temp0 + temp1;
	sp[2].o = (jobject)((mindustry_world_blocks_units_Reconstructor$ReconstructorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp3 = (jint)((func_arc_audio_Sound_at_arc_math_geom_Position_float_float_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Sound_at_arc_math_geom_Position_float_float_R_int])(ctx, sp[0].o, sp[1].o, temp2, ((jfloat)((mindustry_world_blocks_units_Reconstructor *) NULL_CHECK(sp[2].o))->F_createSoundVolume));
	LINE_NUMBER(355);
	sp[0].o = frame[0].o;
	((mindustry_world_blocks_units_UnitBlock$UnitBuild *) NULL_CHECK(sp[0].o))->F_progress = (fmodf(((jfloat)((mindustry_world_blocks_units_UnitBlock$UnitBuild *) NULL_CHECK(sp[0].o))->F_progress), (jfloat(1))));
	LINE_NUMBER(356);
	SM_mindustry_entities_Effect_shake_float_float_arc_math_geom_Position(ctx, (jfloat(2)), (jfloat(3.0f)), (frame[0].o));
	LINE_NUMBER(357);
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_producesmoke;
	((func_mindustry_entities_Effect_at_arc_math_geom_Position) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_arc_math_geom_Position])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(358);
	((func_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_consume) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_consume])(ctx, (frame[0].o));
	LINE_NUMBER(359);
	clinit_mindustry_game_EventType$UnitCreateEvent(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$UnitCreateEvent);
	sp[1].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_payload;
	sp[1].o = (jobject)((mindustry_world_blocks_payloads_UnitPayload *) NULL_CHECK((checkCast(ctx, &class_mindustry_world_blocks_payloads_UnitPayload, sp[1].o))))->F_unit;
	init_mindustry_game_EventType$UnitCreateEvent_mindustry_gen_Unit_mindustry_gen_Building(ctx, sp[0].o, sp[1].o, (frame[0].o));
	SM_arc_Events_fire_java_lang_Object(ctx, sp[0].o);
	}
label_3:;
	{
	LINE_NUMBER(365);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_world_blocks_units_UnitBlock$UnitBuild *) NULL_CHECK((frame[0].o)))->F_speedScl;
	jint temp1 = (jint)SM_arc_math_Mathf_num_boolean_R_int(ctx, (frame[1].i));
	jfloat temp2 = (jfloat)SM_arc_math_Mathf_lerpDelta_float_float_float_R_float(ctx, temp0, (jfloat(temp1)), (jfloat(0.05f)));
	((mindustry_world_blocks_units_UnitBlock$UnitBuild *) NULL_CHECK(sp[0].o))->F_speedScl = temp2;
	LINE_NUMBER(366);
	sp[0].o = frame[0].o;
	jfloat temp3 = (jfloat)((mindustry_world_blocks_units_UnitBlock$UnitBuild *) NULL_CHECK(sp[0].o))->F_time;
	jfloat temp4 = (jfloat)((func_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_edelta_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_edelta_R_float])(ctx, (frame[0].o));
	jfloat temp5 = temp4 * ((jfloat)((mindustry_world_blocks_units_UnitBlock$UnitBuild *) NULL_CHECK((frame[0].o)))->F_speedScl);
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[2].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	jfloat temp6 = (jfloat)((func_mindustry_game_Rules_unitBuildSpeed_mindustry_game_Team_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_game_Rules_unitBuildSpeed_mindustry_game_Team_R_float])(ctx, sp[1].o, sp[2].o);
	((mindustry_world_blocks_units_UnitBlock$UnitBuild *) NULL_CHECK(sp[0].o))->F_time = (temp3 + (temp5 * temp6));
	LINE_NUMBER(367);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jdouble M_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_sense_mindustry_logic_LAccess_R_double(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/Reconstructor$ReconstructorBuild:sense", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(371);
	sp[0].o = frame[1].o;
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_progress;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	jfloat temp0 = (jfloat)((func_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_fraction_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_fraction_R_float])(ctx, (frame[0].o));
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, temp0);
	popStackFrame(ctx);
	return (jdouble(temp1));
	}
label_1:;
	{
	LINE_NUMBER(372);
	sp[0].o = frame[1].o;
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_itemCapacity;
	if (sp[0].o != sp[1].o) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_units_Reconstructor$ReconstructorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp0 = jfloat(((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_itemCapacity));
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	jfloat temp1 = (jfloat)((func_mindustry_game_Rules_unitCost_mindustry_game_Team_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Rules_unitCost_mindustry_game_Team_R_float])(ctx, sp[0].o, sp[1].o);
	jint temp2 = (jint)SM_arc_math_Mathf_round_float_R_int(ctx, (temp0 * temp1));
	popStackFrame(ctx);
	return (jdouble(temp2));
	}
label_2:;
	{
	LINE_NUMBER(373);
	jdouble temp0 = (jdouble)M_mindustry_gen_Building_sense_mindustry_logic_LAccess_R_double(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_shouldConsume_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/Reconstructor$ReconstructorBuild:shouldConsume", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(378);
	if (((jint)((mindustry_world_blocks_units_Reconstructor$ReconstructorBuild *) NULL_CHECK((frame[0].o)))->F_constructing) == 0) goto label_1;
	}
	{
	if (((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_enabled) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	jint temp0 = (jint)((func_mindustry_game_Team_activateUnitFactories_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_activateUnitFactories_R_boolean])(ctx, sp[0].o);
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

jobject M_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_config_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/Reconstructor$ReconstructorBuild:config", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(383);
	sp[0].o = (jobject)((mindustry_world_blocks_units_Reconstructor$ReconstructorBuild *) NULL_CHECK((frame[0].o)))->F_command;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_unit_R_mindustry_type_UnitType(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/Reconstructor$ReconstructorBuild:unit", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(387);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_payload;
	if (sp[0].o != nullptr) goto label_1;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(389);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_payload;
	sp[1].o = (jobject)((mindustry_world_blocks_payloads_UnitPayload *) NULL_CHECK((checkCast(ctx, &class_mindustry_world_blocks_payloads_UnitPayload, sp[1].o))))->F_unit;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[1].o))->F_type;
	sp[0].o = (jobject)((func_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_upgrade_mindustry_type_UnitType_R_mindustry_type_UnitType) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_upgrade_mindustry_type_UnitType_R_mindustry_type_UnitType])(ctx, sp[0].o, sp[1].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(390);
	if ((frame[1].o) == nullptr) goto label_3;
	}
	{
	jint temp0 = (jint)((func_mindustry_type_UnitType_unlockedNowHost_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_type_UnitType_unlockedNowHost_R_boolean])(ctx, (frame[1].o));
	if (temp0 != 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	jint temp0 = (jint)((func_mindustry_game_Team_isAI_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_isAI_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
label_4:;
	INST_ALOAD(1);
	goto label_5;
label_3:;
	INST_ACONST_NULL();
label_5:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_constructing_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/Reconstructor$ReconstructorBuild:constructing", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(394);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_payload;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_payload;
	sp[1].o = (jobject)((mindustry_world_blocks_payloads_UnitPayload *) NULL_CHECK((checkCast(ctx, &class_mindustry_world_blocks_payloads_UnitPayload, sp[1].o))))->F_unit;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[1].o))->F_type;
	jint temp0 = (jint)((func_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_hasUpgrade_mindustry_type_UnitType_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_hasUpgrade_mindustry_type_UnitType_R_boolean])(ctx, sp[0].o, sp[1].o);
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

jbool M_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_hasUpgrade_mindustry_type_UnitType_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/Reconstructor$ReconstructorBuild:hasUpgrade", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(398);
	sp[0].o = (jobject)((func_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_upgrade_mindustry_type_UnitType_R_mindustry_type_UnitType) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_upgrade_mindustry_type_UnitType_R_mindustry_type_UnitType])(ctx, (frame[0].o), (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(399);
	if ((frame[2].o) == nullptr) goto label_2;
	}
	{
	jint temp0 = (jint)((func_mindustry_type_UnitType_unlockedNowHost_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_type_UnitType_unlockedNowHost_R_boolean])(ctx, (frame[2].o));
	if (temp0 != 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	jint temp0 = (jint)((func_mindustry_game_Team_isAI_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_isAI_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_2;
	}
label_3:;
	{
	jint temp0 = (jint)((func_mindustry_type_UnitType_isBanned_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_type_UnitType_isBanned_R_boolean])(ctx, (frame[1].o));
	if (temp0 != 0) goto label_2;
	}
	INST_ICONST(1);
	goto label_4;
label_2:;
	INST_ICONST(0);
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_upgrade_mindustry_type_UnitType_R_mindustry_type_UnitType(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/Reconstructor$ReconstructorBuild:upgrade", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(403);
	sp[0].o = (jobject)((mindustry_world_blocks_units_Reconstructor$ReconstructorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_units_Reconstructor *) NULL_CHECK(sp[0].o))->F_upgrades;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_invoke_arc_func_Boolf_1(ctx);
		auto proxy = (mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_invoke_arc_func_Boolf_1 *) gcAlloc(ctx, &class_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_invoke_arc_func_Boolf_1);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_find_arc_func_Boolf_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_find_arc_func_Boolf_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	frame[2].o = (checkCast(ctx, getArrayClass(&class_mindustry_type_UnitType, 1), sp[0].o));
	LINE_NUMBER(404);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	INST_ACONST_NULL();
	goto label_3;
label_2:;
	{
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[2].o), (jint(1)));
	sp += 1;
	}
label_3:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jbyte M_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_version_R_byte(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/Reconstructor$ReconstructorBuild:version", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(409);
	popStackFrame(ctx);
	return (jint(3));
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_write_arc_util_io_Writes(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/Reconstructor$ReconstructorBuild:write", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(414);
	M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_write_arc_util_io_Writes(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(416);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_world_blocks_units_UnitBlock$UnitBuild *) NULL_CHECK((frame[0].o)))->F_progress));
	LINE_NUMBER(417);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_world_blocks_units_Reconstructor$ReconstructorBuild *) NULL_CHECK((frame[0].o)))->F_commandPos;
	SM_mindustry_io_TypeIO_writeVecNullable_arc_util_io_Writes_arc_math_geom_Vec2(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(418);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_world_blocks_units_Reconstructor$ReconstructorBuild *) NULL_CHECK((frame[0].o)))->F_command;
	SM_mindustry_io_TypeIO_writeCommand_arc_util_io_Writes_mindustry_ai_UnitCommand(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(419);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_read_arc_util_io_Reads_byte(jcontext ctx, jobject self, jobject param0, jbyte param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/Reconstructor$ReconstructorBuild:read", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(423);
	M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_read_arc_util_io_Reads_byte(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	LINE_NUMBER(425);
	if ((frame[2].i) < (jint(1))) goto label_2;
	}
	{
	LINE_NUMBER(426);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_world_blocks_units_UnitBlock$UnitBuild *) NULL_CHECK(sp[0].o))->F_progress = temp0;
	}
label_2:;
	{
	LINE_NUMBER(429);
	if ((frame[2].i) < (jint(2))) goto label_4;
	}
	{
	LINE_NUMBER(430);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readVecNullable_arc_util_io_Reads_R_arc_math_geom_Vec2(ctx, (frame[1].o));
	((mindustry_world_blocks_units_Reconstructor$ReconstructorBuild *) NULL_CHECK(sp[0].o))->F_commandPos = (jref) sp[1].o;
	}
label_4:;
	{
	LINE_NUMBER(433);
	if ((frame[2].i) < (jint(3))) goto label_6;
	}
	{
	LINE_NUMBER(434);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readCommand_arc_util_io_Reads_R_mindustry_ai_UnitCommand(ctx, (frame[1].o));
	((mindustry_world_blocks_units_Reconstructor$ReconstructorBuild *) NULL_CHECK(sp[0].o))->F_command = (jref) sp[1].o;
	}
label_6:;
	LINE_NUMBER(436);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_lambda$upgrade$0_mindustry_type_UnitType_Array1_mindustry_type_UnitType_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/Reconstructor$ReconstructorBuild:lambda$upgrade$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(403);
	if (((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0)))) != (frame[0].o)) goto label_1;
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

void M_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_lambda$draw$0(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/Reconstructor$ReconstructorBuild:lambda$draw$0", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(304);
	jfloat temp0 = jfloat(1);
	jfloat temp1 = (jfloat)((mindustry_world_blocks_units_UnitBlock$UnitBuild *) NULL_CHECK((frame[0].o)))->F_progress;
	sp[0].o = (jobject)((mindustry_world_blocks_units_Reconstructor$ReconstructorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	SM_arc_graphics_g2d_Draw_alpha_float(ctx, (temp0 - (temp1 / ((jfloat)((mindustry_world_blocks_units_Reconstructor *) NULL_CHECK(sp[0].o))->F_constructTime))));
	LINE_NUMBER(305);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_payload;
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_UnitPayload *) NULL_CHECK((checkCast(ctx, &class_mindustry_world_blocks_payloads_UnitPayload, sp[0].o))))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type;
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[0].o))->F_fullIcon;
	jfloat temp2 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp3 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	sp[1].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_payload;
	jfloat temp4 = (jfloat)((func_mindustry_world_blocks_payloads_UnitPayload_rotation_R_float) ((void **) nullCheck(ctx, (checkCast(ctx, &class_mindustry_world_blocks_payloads_UnitPayload, sp[1].o)))->vtable)[VTABLE_mindustry_world_blocks_payloads_UnitPayload_rotation_R_float])(ctx, (checkCast(ctx, &class_mindustry_world_blocks_payloads_UnitPayload, sp[1].o)));
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float(ctx, sp[0].o, temp2, temp3, (temp4 - (jfloat(90.0f))));
	LINE_NUMBER(306);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(307);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_payload;
	sp[2].o = (jobject)((mindustry_world_blocks_payloads_UnitPayload *) NULL_CHECK((checkCast(ctx, &class_mindustry_world_blocks_payloads_UnitPayload, sp[2].o))))->F_unit;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[2].o))->F_type;
	sp[1].o = (jobject)((func_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_upgrade_mindustry_type_UnitType_R_mindustry_type_UnitType) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_upgrade_mindustry_type_UnitType_R_mindustry_type_UnitType])(ctx, sp[1].o, sp[2].o);
	sp[2].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_payload;
	jfloat temp5 = (jfloat)((func_mindustry_world_blocks_payloads_UnitPayload_rotation_R_float) ((void **) nullCheck(ctx, (checkCast(ctx, &class_mindustry_world_blocks_payloads_UnitPayload, sp[2].o)))->vtable)[VTABLE_mindustry_world_blocks_payloads_UnitPayload_rotation_R_float])(ctx, (checkCast(ctx, &class_mindustry_world_blocks_payloads_UnitPayload, sp[2].o)));
	jfloat temp6 = temp5 - (jfloat(90.0f));
	jfloat temp7 = (jfloat)((mindustry_world_blocks_units_UnitBlock$UnitBuild *) NULL_CHECK((frame[0].o)))->F_progress;
	sp[2].o = (jobject)((mindustry_world_blocks_units_Reconstructor$ReconstructorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	SM_mindustry_graphics_Drawf_construct_mindustry_gen_Building_mindustry_ctype_UnlockableContent_float_float_float_float(ctx, sp[0].o, sp[1].o, temp6, (temp7 / ((jfloat)((mindustry_world_blocks_units_Reconstructor *) NULL_CHECK(sp[2].o))->F_constructTime)), ((jfloat)((mindustry_world_blocks_units_UnitBlock$UnitBuild *) NULL_CHECK((frame[0].o)))->F_speedScl), ((jfloat)((mindustry_world_blocks_units_UnitBlock$UnitBuild *) NULL_CHECK((frame[0].o)))->F_time));
	LINE_NUMBER(308);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_lambda$buildConfiguration$1_arc_scene_ui_ImageButton_mindustry_ai_UnitCommand_mindustry_type_UnitType(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/Reconstructor$ReconstructorBuild:lambda$buildConfiguration$1", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(233);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_world_blocks_units_Reconstructor$ReconstructorBuild *) NULL_CHECK((frame[0].o)))->F_command;
	sp += 1;
	if (sp[0].o == (frame[2].o)) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_units_Reconstructor$ReconstructorBuild *) NULL_CHECK((frame[0].o)))->F_command;
	if (sp[0].o != nullptr) goto label_2;
	}
	INST_ALOAD(3);
	if ((--sp)->o == nullptr) goto label_2;
	{
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[3].o)))->F_defaultCommand;
	if (sp[0].o != (frame[2].o)) goto label_2;
	}
label_1:;
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	POP_N(2); // Pop method args
	((func_arc_scene_ui_ImageButton_setChecked_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ImageButton_setChecked_boolean])(ctx, sp[0].o, sp[1].i);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_lambda$buildConfiguration$0_mindustry_ai_UnitCommand(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/Reconstructor$ReconstructorBuild:lambda$buildConfiguration$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(229);
	((func_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_configure_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_configure_java_lang_Object])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(230);
	((func_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_deselect) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_deselect])(ctx, (frame[0].o));
	LINE_NUMBER(231);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	{ // Field commandPos
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[0]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field command
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[1]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

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
}

void *vtable_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild[] {
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
	(void *) M_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_write_arc_util_io_Writes,
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
	(void *) M_mindustry_gen_Building_damage_float,
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
	(void *) M_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_sense_mindustry_logic_LAccess_R_double,
	(void *) M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_sense_mindustry_ctype_Content_R_double,
	(void *) M_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_senseObject_mindustry_logic_LAccess_R_java_lang_Object,
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
	(void *) M_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_getCommandPosition_R_arc_math_geom_Vec2,
	(void *) M_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_config_R_java_lang_Object,
	(void *) M_mindustry_gen_Building_getPayloads_R_mindustry_type_PayloadSeq,
	(void *) M_mindustry_gen_Building_findClosestEdge_arc_math_geom_Position_arc_func_Boolf_R_mindustry_world_Tile,
	(void *) M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_getPayload_R_mindustry_world_blocks_payloads_Payload,
	(void *) M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_takePayload_R_mindustry_world_blocks_payloads_Payload,
	(void *) M_mindustry_gen_Building_onRepaired,
	(void *) M_mindustry_gen_Building_placed,
	(void *) M_mindustry_gen_Building_playerPlaced_java_lang_Object,
	(void *) M_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_read_arc_util_io_Reads_byte,
	(void *) M_mindustry_gen_Building_create_mindustry_world_Block_mindustry_game_Team_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_getLiquidDestination_mindustry_gen_Building_mindustry_type_Liquid_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_init_mindustry_world_Tile_mindustry_game_Team_boolean_int_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_nearby_int_int_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_nearby_int_R_mindustry_gen_Building,
	(void *) M_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_getCursor_R_arc_Graphics$Cursor,
	(void *) M_mindustry_gen_Building_getDisplayIcon_R_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_gen_Building_getPowerConnections_arc_struct_Seq_R_arc_struct_Seq,
	(void *) M_mindustry_gen_Building_absorbLasers_R_boolean,
	(void *) M_mindustry_gen_Building_acceptItem_mindustry_gen_Building_mindustry_type_Item_R_boolean,
	(void *) M_mindustry_gen_Building_acceptLiquid_mindustry_gen_Building_mindustry_type_Liquid_R_boolean,
	(void *) M_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_acceptPayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload_R_boolean,
	(void *) M_mindustry_gen_Building_allowDeposit_R_boolean,
	(void *) M_mindustry_gen_Building_allowUpdate_R_boolean,
	(void *) M_mindustry_gen_Building_canBeReplaced_mindustry_world_Block_R_boolean,
	(void *) M_mindustry_gen_Building_canConsume_R_boolean,
	(void *) M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_canControlSelect_mindustry_gen_Unit_R_boolean,
	(void *) M_mindustry_gen_Building_canDump_mindustry_gen_Building_mindustry_type_Item_R_boolean,
	(void *) M_mindustry_gen_Building_canDumpLiquid_mindustry_gen_Building_mindustry_type_Liquid_R_boolean,
	(void *) M_mindustry_gen_Building_canPickup_R_boolean,
	(void *) M_mindustry_gen_Building_canResupply_R_boolean,
	(void *) M_mindustry_gen_Building_canUnload_R_boolean,
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
	(void *) M_mindustry_gen_Building_isCommandable_R_boolean,
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
	(void *) M_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_shouldConsume_R_boolean,
	(void *) M_mindustry_gen_Building_shouldHideConfigure_mindustry_gen_Player_R_boolean,
	(void *) M_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_shouldShowConfigure_mindustry_gen_Player_R_boolean,
	(void *) M_mindustry_gen_Building_wasRecentlyDamaged_R_boolean,
	(void *) M_mindustry_gen_Building_wasRecentlyHealed_float_R_boolean,
	(void *) M_mindustry_gen_Building_relativeTo_mindustry_gen_Building_R_byte,
	(void *) M_mindustry_gen_Building_relativeTo_int_int_R_byte,
	(void *) M_mindustry_gen_Building_relativeTo_mindustry_world_Tile_R_byte,
	(void *) M_mindustry_gen_Building_relativeToEdge_mindustry_world_Tile_R_byte,
	(void *) M_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_version_R_byte,
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
	(void *) M_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_getMaximumAccepted_mindustry_type_Item_R_int,
	(void *) M_mindustry_gen_Building_moduleBitmask_R_int,
	(void *) M_mindustry_gen_Building_pos_R_int,
	(void *) M_mindustry_gen_Building_removeStack_mindustry_type_Item_int_R_int,
	(void *) M_mindustry_gen_Building_getDisplayName_R_java_lang_String,
	(void *) M_mindustry_gen_Building_floor_R_mindustry_world_blocks_environment_Floor,
	(void *) M_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_status_R_mindustry_world_meta_BlockStatus,
	(void *) M_mindustry_gen_Building_flowItems_R_mindustry_world_modules_ItemModule,
	(void *) M_mindustry_gen_Building_addPlan_boolean,
	(void *) M_mindustry_gen_Building_addPlan_boolean_boolean,
	(void *) M_mindustry_gen_Building_afterDestroyed,
	(void *) M_mindustry_gen_Building_afterPickedUp,
	(void *) M_mindustry_gen_Building_applyBoost_float_float,
	(void *) M_mindustry_gen_Building_applyHealSuppression_float,
	(void *) M_mindustry_gen_Building_applyHealSuppression_float_arc_graphics_Color,
	(void *) M_mindustry_gen_Building_applySlowdown_float_float,
	(void *) M_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_buildConfiguration_arc_scene_ui_layout_Table,
	(void *) M_mindustry_gen_Building_changeTeam_mindustry_game_Team,
	(void *) M_mindustry_gen_Building_changeTeam_mindustry_game_Team_boolean,
	(void *) M_mindustry_gen_Building_checkAllowUpdate,
	(void *) M_mindustry_gen_Building_configure_java_lang_Object,
	(void *) M_mindustry_gen_Building_configureAny_java_lang_Object,
	(void *) M_mindustry_gen_Building_configured_mindustry_gen_Unit_java_lang_Object,
	(void *) M_mindustry_gen_Building_consume,
	(void *) M_mindustry_gen_Building_created,
	(void *) M_mindustry_gen_Building_damage_mindustry_gen_Bullet_mindustry_game_Team_float,
	(void *) M_mindustry_gen_Building_damage_mindustry_game_Team_float,
	(void *) M_mindustry_gen_Building_deselect,
	(void *) M_mindustry_gen_Building_displayBars_arc_scene_ui_layout_Table,
	(void *) M_mindustry_gen_Building_displayConsumption_arc_scene_ui_layout_Table,
	(void *) M_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_draw,
	(void *) M_mindustry_gen_Building_drawCached,
	(void *) M_mindustry_gen_Building_drawConfigure,
	(void *) M_mindustry_gen_Building_drawCracks,
	(void *) M_mindustry_gen_Building_drawDisabled,
	(void *) M_mindustry_gen_Building_drawItemSelection_mindustry_ctype_UnlockableContent,
	(void *) M_mindustry_gen_Building_drawLight,
	(void *) M_mindustry_gen_Building_drawLiquidLight_mindustry_type_Liquid_float,
	(void *) M_mindustry_gen_Building_drawSelect,
	(void *) M_mindustry_gen_Building_drawStatus,
	(void *) M_mindustry_gen_Building_drawTeam,
	(void *) M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_drawTeamTop,
	(void *) M_mindustry_gen_Building_dropped,
	(void *) M_mindustry_gen_Building_dumpLiquid_mindustry_type_Liquid,
	(void *) M_mindustry_gen_Building_dumpLiquid_mindustry_type_Liquid_float,
	(void *) M_mindustry_gen_Building_dumpLiquid_mindustry_type_Liquid_float_int,
	(void *) M_mindustry_gen_Building_eachEdge_arc_func_Cons,
	(void *) M_mindustry_gen_Building_getStackOffset_mindustry_type_Item_arc_math_geom_Vec2,
	(void *) M_mindustry_gen_Building_handleItem_mindustry_gen_Building_mindustry_type_Item,
	(void *) M_mindustry_gen_Building_handleLiquid_mindustry_gen_Building_mindustry_type_Liquid_float,
	(void *) M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_handlePayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload,
	(void *) M_mindustry_gen_Building_handleStack_mindustry_type_Item_int_mindustry_gen_Teamc,
	(void *) M_mindustry_gen_Building_handleString_java_lang_Object,
	(void *) M_mindustry_gen_Building_handleUnitPayload_mindustry_gen_Unit_arc_func_Cons,
	(void *) M_mindustry_gen_Building_healthChanged,
	(void *) M_mindustry_gen_Building_incrementDump_int,
	(void *) M_mindustry_gen_Building_itemTaken_mindustry_type_Item,
	(void *) M_mindustry_gen_Building_noSleep,
	(void *) M_mindustry_gen_Building_offload_mindustry_type_Item,
	(void *) M_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_onCommand_arc_math_geom_Vec2,
	(void *) M_mindustry_gen_Building_onConfigureClosed,
	(void *) M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_onControlSelect_mindustry_gen_Unit,
	(void *) M_mindustry_gen_Building_onDeconstructed_mindustry_gen_Unit,
	(void *) M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_onDestroyed,
	(void *) M_mindustry_gen_Building_onNearbyBuildAdded_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_onProximityAdded,
	(void *) M_mindustry_gen_Building_onProximityRemoved,
	(void *) M_mindustry_gen_Building_onProximityUpdate,
	(void *) M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_onRemoved,
	(void *) M_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_overwrote_arc_struct_Seq,
	(void *) M_mindustry_gen_Building_payloadDraw,
	(void *) M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_pickedUp,
	(void *) M_mindustry_gen_Building_playDestroySound,
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
	(void *) M_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_updateTile,
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
	(void *) M_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_acceptUnitPayload_mindustry_gen_Unit_R_boolean,
	(void *) M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_blends_int_R_boolean,
	(void *) M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_updatePayload,
	(void *) M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_moveInPayload_R_boolean,
	(void *) M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_moveInPayload_boolean_R_boolean,
	(void *) M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_moveOutPayload,
	(void *) M_mindustry_world_blocks_units_UnitBlock$UnitBuild_dumpPayload,
	(void *) M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_hasArrived_R_boolean,
	(void *) M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_drawPayload,
	(void *) M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_lambda$onControlSelect$0_mindustry_world_blocks_payloads_Payload,
	(void *) M_mindustry_world_blocks_units_UnitBlock$UnitBuild_spawned,
	(void *) M_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_fraction_R_float,
	(void *) M_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_canSetCommand_R_boolean,
	(void *) M_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_unit_R_mindustry_type_UnitType,
	(void *) M_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_constructing_R_boolean,
	(void *) M_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_hasUpgrade_mindustry_type_UnitType_R_boolean,
	(void *) M_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_upgrade_mindustry_type_UnitType_R_mindustry_type_UnitType,
	(void *) M_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_lambda$draw$0,
	(void *) M_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_lambda$buildConfiguration$1_arc_scene_ui_ImageButton_mindustry_ai_UnitCommand_mindustry_type_UnitType,
	(void *) M_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_lambda$buildConfiguration$0_mindustry_ai_UnitCommand,
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
	{ "acceptUnitPayload", "(Lmindustry/gen/Unit;)Z" },
	{ "blends", "(I)Z" },
	{ "updatePayload", "()V" },
	{ "moveInPayload", "()Z" },
	{ "moveInPayload", "(Z)Z" },
	{ "moveOutPayload", "()V" },
	{ "dumpPayload", "()V" },
	{ "hasArrived", "()Z" },
	{ "drawPayload", "()V" },
	{ "lambda$onControlSelect$0", "(Lmindustry/world/blocks/payloads/Payload;)V" },
	{ "spawned", "()V" },
	{ "fraction", "()F" },
	{ "canSetCommand", "()Z" },
	{ "unit", "()Lmindustry/type/UnitType;" },
	{ "constructing", "()Z" },
	{ "hasUpgrade", "(Lmindustry/type/UnitType;)Z" },
	{ "upgrade", "(Lmindustry/type/UnitType;)Lmindustry/type/UnitType;" },
	{ "lambda$draw$0", "()V" },
	{ "lambda$buildConfiguration$1", "(Larc/scene/ui/ImageButton;Lmindustry/ai/UnitCommand;Lmindustry/type/UnitType;)V" },
	{ "lambda$buildConfiguration$0", "(Lmindustry/ai/UnitCommand;)V" },
};

static FieldMetadata fields[] {
	{ "commandPos", &class_arc_math_geom_Vec2, offsetof(mindustry_world_blocks_units_Reconstructor$ReconstructorBuild, F_commandPos), "Larc/math/geom/Vec2;", 1 },
	{ "command", &class_mindustry_ai_UnitCommand, offsetof(mindustry_world_blocks_units_Reconstructor$ReconstructorBuild, F_command), "Lmindustry/ai/UnitCommand;", 1 },
	{ "constructing", &class_boolean, offsetof(mindustry_world_blocks_units_Reconstructor$ReconstructorBuild, F_constructing), "Z", 0 },
	{ "this$0", &class_mindustry_world_blocks_units_Reconstructor, offsetof(mindustry_world_blocks_units_Reconstructor$ReconstructorBuild, F_this$0), "Lmindustry/world/blocks/units/Reconstructor;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_mindustry_world_blocks_units_Reconstructor, 0, "(Lmindustry/world/blocks/units/Reconstructor;)V", 1 },
	{ "fraction", (intptr_t) M_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_fraction_R_float, VTABLE_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_fraction_R_float, "()F", 1 },
	{ "getCommandPosition", (intptr_t) M_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_getCommandPosition_R_arc_math_geom_Vec2, VTABLE_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_getCommandPosition_R_arc_math_geom_Vec2, "()Larc/math/geom/Vec2;", 1 },
	{ "onCommand", (intptr_t) M_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_onCommand_arc_math_geom_Vec2, VTABLE_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_onCommand_arc_math_geom_Vec2, "(Larc/math/geom/Vec2;)V", 1 },
	{ "acceptUnitPayload", (intptr_t) M_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_acceptUnitPayload_mindustry_gen_Unit_R_boolean, VTABLE_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_acceptUnitPayload_mindustry_gen_Unit_R_boolean, "(Lmindustry/gen/Unit;)Z", 1 },
	{ "canSetCommand", (intptr_t) M_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_canSetCommand_R_boolean, VTABLE_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_canSetCommand_R_boolean, "()Z", 1 },
	{ "getCursor", (intptr_t) M_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_getCursor_R_arc_Graphics$Cursor, VTABLE_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_getCursor_R_arc_Graphics$Cursor, "()Larc/Graphics$Cursor;", 1 },
	{ "shouldShowConfigure", (intptr_t) M_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_shouldShowConfigure_mindustry_gen_Player_R_boolean, VTABLE_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_shouldShowConfigure_mindustry_gen_Player_R_boolean, "(Lmindustry/gen/Player;)Z", 1 },
	{ "buildConfiguration", (intptr_t) M_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_buildConfiguration_arc_scene_ui_layout_Table, VTABLE_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_buildConfiguration_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 1 },
	{ "acceptPayload", (intptr_t) M_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_acceptPayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload_R_boolean, VTABLE_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_acceptPayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload_R_boolean, "(Lmindustry/gen/Building;Lmindustry/world/blocks/payloads/Payload;)Z", 1 },
	{ "status", (intptr_t) M_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_status_R_mindustry_world_meta_BlockStatus, VTABLE_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_status_R_mindustry_world_meta_BlockStatus, "()Lmindustry/world/meta/BlockStatus;", 1 },
	{ "getMaximumAccepted", (intptr_t) M_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_getMaximumAccepted_mindustry_type_Item_R_int, VTABLE_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_getMaximumAccepted_mindustry_type_Item_R_int, "(Lmindustry/type/Item;)I", 1 },
	{ "overwrote", (intptr_t) M_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_overwrote_arc_struct_Seq, VTABLE_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_overwrote_arc_struct_Seq, "(Larc/struct/Seq;)V", 1 },
	{ "draw", (intptr_t) M_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_draw, VTABLE_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_draw, "()V", 1 },
	{ "senseObject", (intptr_t) M_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_senseObject_mindustry_logic_LAccess_R_java_lang_Object, VTABLE_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_senseObject_mindustry_logic_LAccess_R_java_lang_Object, "(Lmindustry/logic/LAccess;)Ljava/lang/Object;", 1 },
	{ "updateTile", (intptr_t) M_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_updateTile, VTABLE_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_updateTile, "()V", 1 },
	{ "sense", (intptr_t) M_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_sense_mindustry_logic_LAccess_R_double, VTABLE_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_sense_mindustry_logic_LAccess_R_double, "(Lmindustry/logic/LAccess;)D", 1 },
	{ "shouldConsume", (intptr_t) M_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_shouldConsume_R_boolean, VTABLE_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_shouldConsume_R_boolean, "()Z", 1 },
	{ "config", (intptr_t) M_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_config_R_java_lang_Object, VTABLE_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_config_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "unit", (intptr_t) M_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_unit_R_mindustry_type_UnitType, VTABLE_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_unit_R_mindustry_type_UnitType, "()Lmindustry/type/UnitType;", 1 },
	{ "constructing", (intptr_t) M_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_constructing_R_boolean, VTABLE_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_constructing_R_boolean, "()Z", 1 },
	{ "hasUpgrade", (intptr_t) M_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_hasUpgrade_mindustry_type_UnitType_R_boolean, VTABLE_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_hasUpgrade_mindustry_type_UnitType_R_boolean, "(Lmindustry/type/UnitType;)Z", 1 },
	{ "upgrade", (intptr_t) M_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_upgrade_mindustry_type_UnitType_R_mindustry_type_UnitType, VTABLE_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_upgrade_mindustry_type_UnitType_R_mindustry_type_UnitType, "(Lmindustry/type/UnitType;)Lmindustry/type/UnitType;", 1 },
	{ "version", (intptr_t) M_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_version_R_byte, VTABLE_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_version_R_byte, "()B", 1 },
	{ "write", (intptr_t) M_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_write_arc_util_io_Writes, VTABLE_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_write_arc_util_io_Writes, "(Larc/util/io/Writes;)V", 1 },
	{ "read", (intptr_t) M_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_read_arc_util_io_Reads_byte, VTABLE_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_read_arc_util_io_Reads_byte, "(Larc/util/io/Reads;B)V", 1 },
	{ "lambda$upgrade$0", (intptr_t) SM_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_lambda$upgrade$0_mindustry_type_UnitType_Array1_mindustry_type_UnitType_R_boolean, 0, "(Lmindustry/type/UnitType;[Lmindustry/type/UnitType;)Z", 4106 },
	{ "lambda$draw$0", (intptr_t) M_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_lambda$draw$0, VTABLE_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_lambda$draw$0, "()V", 4098 },
	{ "lambda$buildConfiguration$1", (intptr_t) M_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_lambda$buildConfiguration$1_arc_scene_ui_ImageButton_mindustry_ai_UnitCommand_mindustry_type_UnitType, VTABLE_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_lambda$buildConfiguration$1_arc_scene_ui_ImageButton_mindustry_ai_UnitCommand_mindustry_type_UnitType, "(Larc/scene/ui/ImageButton;Lmindustry/ai/UnitCommand;Lmindustry/type/UnitType;)V", 4098 },
	{ "lambda$buildConfiguration$0", (intptr_t) M_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_lambda$buildConfiguration$0_mindustry_ai_UnitCommand, VTABLE_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild_lambda$buildConfiguration$0_mindustry_ai_UnitCommand, "(Lmindustry/ai/UnitCommand;)V", 4098 },
};

Class class_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild{
		.nativeName = (intptr_t) "mindustry/world/blocks/units/Reconstructor$ReconstructorBuild",
		.parentClass = (intptr_t) &class_mindustry_world_blocks_units_UnitBlock$UnitBuild,
		.size = sizeof(mindustry_world_blocks_units_Reconstructor$ReconstructorBuild),
		.classVtable = (intptr_t) vtable_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild,
		.staticInitializer = (intptr_t) clinit_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_world_blocks_units_Reconstructor,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 30,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 330,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild = registerClass(&class_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild);

}

