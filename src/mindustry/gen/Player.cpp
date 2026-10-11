#include "mindustry/gen/Player.h"
#include "arc/func/Prov.h"
#include "arc/graphics/g2d/Font.h"
#include "arc/graphics/Color.h"
#include "arc/graphics/g2d/Draw.h"
#include "arc/util/pooling/Pools.h"
#include "arc/func/Intf.h"
#include "arc/util/Tmp.h"
#include "mindustry/core/NetServer_ChatFormatter.h"
#include "arc/struct/Seq.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/entities/units/BuildPlan.h"
#include "mindustry/world/Tile.h"
#include "arc/Settings.h"
#include "mindustry/gen/Healthc.h"
#include "arc/func/Boolf.h"
#include "mindustry/gen/Player_invoke_arc_func_Prov_1.h"
#include "arc/math/Mathf.h"
#include "arc/func/Floatf.h"
#include "arc/Core.h"
#include "arc/math/Interp.h"
#include "arc/util/Time.h"
#include "arc/math/Interp_PowIn.h"
#include "mindustry/gen/Weaponsc.h"
#include "arc/util/Nullable.h"
#include "arc/util/Interval.h"
#include "mindustry/gen/Building.h"
#include "mindustry/entities/units/UnitController.h"
#include "java/lang/Object.h"
#include "mindustry/gen/IndexableEntity__draw.h"
#include "mindustry/io/TypeIO.h"
#include "arc/util/io/Writes.h"
#include "mindustry/world/blocks/storage/CoreBlock.h"
#include "arc/scene/style/TextureRegionDrawable.h"
#include "mindustry/game/Rules.h"
#include "mindustry/gen/Unitc.h"
#include "arc/graphics/g2d/Fill.h"
#include "mindustry/gen/Syncc.h"
#include "mindustry/core/Control.h"
#include "mindustry/net/Administration.h"
#include "mindustry/content/UnitTypes.h"
#include "arc/scene/ui/layout/Scl.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "mindustry/ui/fragments/ChatFragment.h"
#include "java/lang/annotation/Annotation.h"
#include "java/lang/IllegalArgumentException.h"
#include "mindustry/ai/UnitCommand.h"
#include "mindustry/ai/types/CommandAI.h"
#include "mindustry/type/UnitType.h"
#include "arc/util/io/Reads.h"
#include "mindustry/entities/EntityGroup.h"
#include "mindustry/ui/Fonts.h"
#include "mindustry/game/Teams.h"
#include "mindustry/core/NetServer.h"
#include "mindustry/graphics/Drawf.h"
#include "arc/util/Ratekeeper.h"
#include "mindustry/Vars.h"
#include "mindustry/core/World.h"
#include "mindustry/gen/Timerc.h"
#include "java/nio/FloatBuffer.h"
#include "arc/Events.h"
#include "arc/math/geom/Rect.h"
#include "mindustry/gen/IndexableEntity__sync.h"
#include "java/lang/reflect/Constructor.h"
#include "mindustry/core/ContentLoader.h"
#include "mindustry/core/Renderer.h"
#include "mindustry/gen/Entityc.h"
#include "mindustry/gen/IndexableEntity__player.h"
#include "mindustry/input/InputHandler_QueryEachable.h"
#include "arc/math/geom/Position.h"
#include "mindustry/gen/Player_invoke_arc_func_Intf_1.h"
#include "java/lang/reflect/Field.h"
#include "mindustry/gen/Unit.h"
#include "arc/util/Structs.h"
#include "arc/math/geom/QuadTree.h"
#include "mindustry/gen/Player_invoke_arc_func_Boolf_1.h"
#include "mindustry/net/Packets_KickReason.h"
#include "mindustry/gen/Posc.h"
#include "mindustry/gen/Builderc.h"
#include "mindustry/gen/BlockUnitc.h"
#include "mindustry/gen/Player_invoke_arc_func_Floatf_1.h"
#include "arc/graphics/Camera.h"
#include "mindustry/net/Administration_PlayerInfo.h"
#include "mindustry/net/Net.h"
#include "mindustry/world/Block.h"
#include "mindustry/gen/Groups.h"
#include "mindustry/world/blocks/storage/CoreBlock_CoreBuild.h"
#include "java/lang/Float.h"
#include "java/lang/String.h"
#include "java/util/Comparator.h"
#include "mindustry/world/blocks/environment/Floor.h"
#include "mindustry/gen/Playerc.h"
#include "mindustry/net/NetConnection.h"
#include "java/lang/Math.h"
#include "arc/graphics/g2d/GlyphLayout.h"
#include "mindustry/gen/Teamc.h"
#include "mindustry/gen/Icon.h"
#include "arc/graphics/g2d/Font_FontData.h"
#include "mindustry/core/NetClient.h"
#include "arc/math/Interp_PowOut.h"
#include "mindustry/core/UI.h"
#include "java/lang/CharSequence.h"
#include "arc/util/Strings.h"
#include "mindustry/content/Blocks.h"
#include "mindustry/gen/Player.h"
#include "mindustry/ctype/Content.h"
#include "mindustry/game/EventType_UnitChangeEvent.h"
#include "mindustry/gen/Drawc.h"
#include "java/lang/Class.h"
#include "mindustry/game/Team.h"
#include "mindustry/ctype/ContentType.h"
#include "mindustry/core/GameState.h"
#include "mindustry/gen/Call.h"
#include "mindustry/input/InputHandler.h"

extern "C" {

jfloat SF_mindustry_gen_Player_deathDelay;
jfloat SF_mindustry_gen_Player_pingDuration;

void mark_mindustry_gen_Player(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_gen_Player *) object;
	if (self->F_color)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_color)->clazz)->markFunction)((jobject) self->F_color, mark, depth + 1);
	if (self->F_con)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_con)->clazz)->markFunction)((jobject) self->F_con, mark, depth + 1);
	if (self->F_itemDepositRate)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_itemDepositRate)->clazz)->markFunction)((jobject) self->F_itemDepositRate, mark, depth + 1);
	if (self->F_justSwitchFrom)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_justSwitchFrom)->clazz)->markFunction)((jobject) self->F_justSwitchFrom, mark, depth + 1);
	if (self->F_justSwitchTo)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_justSwitchTo)->clazz)->markFunction)((jobject) self->F_justSwitchTo, mark, depth + 1);
	if (self->F_lastCommand)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lastCommand)->clazz)->markFunction)((jobject) self->F_lastCommand, mark, depth + 1);
	if (self->F_lastReadUnit)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lastReadUnit)->clazz)->markFunction)((jobject) self->F_lastReadUnit, mark, depth + 1);
	if (self->F_lastText)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lastText)->clazz)->markFunction)((jobject) self->F_lastText, mark, depth + 1);
	if (self->F_locale)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_locale)->clazz)->markFunction)((jobject) self->F_locale, mark, depth + 1);
	if (self->F_name)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_name)->clazz)->markFunction)((jobject) self->F_name, mark, depth + 1);
	if (self->F_pingText)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_pingText)->clazz)->markFunction)((jobject) self->F_pingText, mark, depth + 1);
	if (self->F_planEachable)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_planEachable)->clazz)->markFunction)((jobject) self->F_planEachable, mark, depth + 1);
	if (self->F_previewPlanTree)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_previewPlanTree)->clazz)->markFunction)((jobject) self->F_previewPlanTree, mark, depth + 1);
	if (self->F_previewPlansAssembling)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_previewPlansAssembling)->clazz)->markFunction)((jobject) self->F_previewPlansAssembling, mark, depth + 1);
	if (self->F_previewPlansCurrent)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_previewPlansCurrent)->clazz)->markFunction)((jobject) self->F_previewPlansCurrent, mark, depth + 1);
	if (self->F_selectedBlock)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_selectedBlock)->clazz)->markFunction)((jobject) self->F_selectedBlock, mark, depth + 1);
	if (self->F_team)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_team)->clazz)->markFunction)((jobject) self->F_team, mark, depth + 1);
	if (self->F_timer)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_timer)->clazz)->markFunction)((jobject) self->F_timer, mark, depth + 1);
	if (self->F_unit)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_unit)->clazz)->markFunction)((jobject) self->F_unit, mark, depth + 1);
}

void clinit_mindustry_gen_Player(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_mindustry_gen_Player_deathDelay = jfloat(60.0f);
	SF_mindustry_gen_Player_pingDuration = jfloat(1200.0f);
}

void init_mindustry_gen_Player(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Player(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(229);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(112);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_Color);
	init_arc_graphics_Color(ctx, sp[1].o);
	((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_color = (jref) sp[1].o;
	LINE_NUMBER(119);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_mindustry_entities_EntityGroup_nextId_R_int(ctx);
	((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_id = temp0;
	LINE_NUMBER(121);
	((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_index__draw = (jint(-1));
	LINE_NUMBER(123);
	((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_index__player = (jint(-1));
	LINE_NUMBER(125);
	((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_index__sync = (jint(-1));
	LINE_NUMBER(127);
	sp[0].o = frame[0].o;
	clinit_arc_util_Ratekeeper(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_util_Ratekeeper);
	init_arc_util_Ratekeeper(ctx, sp[1].o);
	((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_itemDepositRate = (jref) sp[1].o;
	LINE_NUMBER(139);
	((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_lastPreviewPlanGroup = (jint(-1));
	LINE_NUMBER(141);
	((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_lastPreviewPlanGroupServer = (jint(-1));
	LINE_NUMBER(148);
	((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_lastText = (jref) (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(152);
	((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_locale = (jref) (((jobject) createStringLiteral(ctx, u8"en"_j)));
	LINE_NUMBER(160);
	((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_name = (jref) (((jobject) createStringLiteral(ctx, u8"frog"_j)));
	LINE_NUMBER(177);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq_java_lang_Class(ctx, sp[1].o, (((jobject) &class_mindustry_entities_units_BuildPlan)));
	((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_previewPlansAssembling = (jref) sp[1].o;
	LINE_NUMBER(179);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq_java_lang_Class(ctx, sp[1].o, (((jobject) &class_mindustry_entities_units_BuildPlan)));
	((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_previewPlansCurrent = (jref) sp[1].o;
	LINE_NUMBER(195);
	sp[0].o = frame[0].o;
	clinit_mindustry_game_Team(ctx);
	sp[1].o = (jobject)SF_mindustry_game_Team_sharded;
	((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_team = (jref) sp[1].o;
	LINE_NUMBER(200);
	sp[0].o = frame[0].o;
	clinit_arc_util_Interval(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_util_Interval);
	init_arc_util_Interval_int(ctx, sp[1].o, (6));
	((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_timer = (jref) sp[1].o;
	LINE_NUMBER(230);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_Player_buildOn_R_mindustry_gen_Building(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:buildOn", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(235);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_buildWorld_float_float_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_buildWorld_float_float_R_mindustry_gen_Building])(ctx, sp[0].o, ((jfloat)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_y));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_Player_unit_R_mindustry_gen_Unit(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:unit", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(241);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_unit;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_Player_tileOn_R_mindustry_world_Tile(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:tileOn", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(247);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_tileWorld_float_float_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tileWorld_float_float_R_mindustry_world_Tile])(ctx, sp[0].o, ((jfloat)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_y));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_Player_bestCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:bestCore", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(253);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_team;
	sp[0].o = (jobject)((func_mindustry_game_Team_cores_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_cores_R_arc_struct_Seq])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(254);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Player_invoke_arc_func_Boolf_1(ctx);
		auto proxy = (mindustry_gen_Player_invoke_arc_func_Boolf_1 *) gcAlloc(ctx, &class_mindustry_gen_Player_invoke_arc_func_Boolf_1);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Player_invoke_arc_func_Intf_1(ctx);
		auto proxy = (mindustry_gen_Player_invoke_arc_func_Intf_1 *) gcAlloc(ctx, &class_mindustry_gen_Player_invoke_arc_func_Intf_1);
		sp[2].o = (jobject) proxy;
	}
	sp[2].o = (jobject)SM_arc_util_Structs_comparingInt_arc_func_Intf_R_java_util_Comparator(ctx, sp[2].o);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Player_invoke_arc_func_Floatf_1(ctx);
		auto proxy = (mindustry_gen_Player_invoke_arc_func_Floatf_1 *) gcAlloc(ctx, &class_mindustry_gen_Player_invoke_arc_func_Floatf_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[3].o = (jobject)SM_arc_util_Structs_comparingFloat_arc_func_Floatf_R_java_util_Comparator(ctx, sp[3].o);
	sp[2].o = (jobject)SM_arc_util_Structs_comps_java_util_Comparator_java_util_Comparator_R_java_util_Comparator(ctx, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_min_arc_func_Boolf_java_util_Comparator_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_min_arc_func_Boolf_java_util_Comparator_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_world_blocks_storage_CoreBlock$CoreBuild, sp[0].o));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_Player_closestCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:closestCore", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(260);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_teams;
	jfloat temp0 = (jfloat)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_y;
	sp[1].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_team;
	sp[0].o = (jobject)((func_mindustry_game_Teams_closestCore_float_float_mindustry_game_Team_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Teams_closestCore_float_float_mindustry_game_Team_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild])(ctx, sp[0].o, temp0, temp1, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_Player_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:core", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(266);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_team;
	sp[0].o = (jobject)((func_mindustry_game_Team_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_Player_justSwitchFrom_R_mindustry_gen_Unit(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:justSwitchFrom", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(271);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_justSwitchFrom;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_Player_justSwitchTo_R_mindustry_gen_Unit(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:justSwitchTo", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(276);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_justSwitchTo;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_Player_color_R_arc_graphics_Color(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:color", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(281);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_color;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_Player_previewPlanTree_R_arc_math_geom_QuadTree(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:previewPlanTree", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(286);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_previewPlanTree;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_Player_previewPlansAssembling_R_arc_struct_Seq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:previewPlansAssembling", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(291);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_previewPlansAssembling;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_Player_previewPlansCurrent_R_arc_struct_Seq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:previewPlansCurrent", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(296);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_previewPlansCurrent;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_Player_timer_R_arc_util_Interval(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:timer", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(301);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_timer;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_Player_itemDepositRate_R_arc_util_Ratekeeper(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:itemDepositRate", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(306);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_itemDepositRate;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_Player_admin_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:admin", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(311);
	popStackFrame(ctx);
	return ((jint)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_admin);
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_Player_boosting_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:boosting", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(316);
	popStackFrame(ctx);
	return ((jint)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_boosting);
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_Player_previewPlansDirty_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:previewPlansDirty", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(321);
	popStackFrame(ctx);
	return ((jint)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_previewPlansDirty);
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_Player_receivingNewPlanGroup_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:receivingNewPlanGroup", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(326);
	popStackFrame(ctx);
	return ((jint)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_receivingNewPlanGroup);
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_Player_shooting_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:shooting", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(331);
	popStackFrame(ctx);
	return ((jint)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_shooting);
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_Player_typing_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:typing", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(336);
	popStackFrame(ctx);
	return ((jint)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_typing);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_Player_deathTimer_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:deathTimer", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(341);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_deathTimer);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_Player_mouseX_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:mouseX", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(346);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_mouseX);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_Player_mouseY_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:mouseY", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(351);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_mouseY);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_Player_pingTime_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:pingTime", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(356);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_pingTime);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_Player_pingX_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:pingX", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(361);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_pingX);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_Player_pingY_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:pingY", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(366);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_pingY);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_Player_textFadeTime_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:textFadeTime", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(371);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_textFadeTime);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_Player_x_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:x", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(376);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_x);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_Player_y_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:y", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(381);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_y);
	}

	popStackFrame(ctx);
}

jint M_mindustry_gen_Player_classId_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:classId", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(386);
	popStackFrame(ctx);
	return (12);
	}

	popStackFrame(ctx);
}

jint M_mindustry_gen_Player_id_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:id", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(391);
	popStackFrame(ctx);
	return ((jint)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_id);
	}

	popStackFrame(ctx);
}

jint M_mindustry_gen_Player_lastPreviewPlanGroup_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:lastPreviewPlanGroup", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(396);
	popStackFrame(ctx);
	return ((jint)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_lastPreviewPlanGroup);
	}

	popStackFrame(ctx);
}

jint M_mindustry_gen_Player_lastPreviewPlanGroupServer_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:lastPreviewPlanGroupServer", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(401);
	popStackFrame(ctx);
	return ((jint)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_lastPreviewPlanGroupServer);
	}

	popStackFrame(ctx);
}

jint M_mindustry_gen_Player_selectedRotation_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:selectedRotation", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(406);
	popStackFrame(ctx);
	return ((jint)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_selectedRotation);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_Player_lastText_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:lastText", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(411);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_lastText;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_Player_locale_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:locale", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(416);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_locale;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_Player_name_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:name", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(421);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_name;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_Player_pingText_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:pingText", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(426);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_pingText;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_Player_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:toString", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(431);
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"Player#\u0001"_j.string, 1, boxInteger(ctx, ((jint)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_id)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jlong M_mindustry_gen_Player_lastPreviewPlanTimestamp_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:lastPreviewPlanTimestamp", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(436);
	popStackFrame(ctx);
	return ((jlong)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_lastPreviewPlanTimestamp);
	}

	popStackFrame(ctx);
}

jlong M_mindustry_gen_Player_lastUpdated_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:lastUpdated", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(441);
	popStackFrame(ctx);
	return ((jlong)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_lastUpdated);
	}

	popStackFrame(ctx);
}

jlong M_mindustry_gen_Player_updateSpacing_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:updateSpacing", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(446);
	popStackFrame(ctx);
	return ((jlong)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_updateSpacing);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_Player_lastCommand_R_mindustry_ai_UnitCommand(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:lastCommand", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(451);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_lastCommand;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_Player_team_R_mindustry_game_Team(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:team", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(456);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_team;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_Player_planEachable_R_mindustry_input_InputHandler$QueryEachable(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:planEachable", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(461);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_planEachable;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_Player_con_R_mindustry_net_NetConnection(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:con", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(466);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_con;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_Player_selectedBlock_R_mindustry_world_Block(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:selectedBlock", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(471);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_selectedBlock;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Player_admin_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:admin", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(476);
	((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_admin = (frame[1].i);
	LINE_NUMBER(477);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Player_boosting_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:boosting", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(481);
	((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_boosting = (frame[1].i);
	LINE_NUMBER(482);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Player_color_arc_graphics_Color(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:color", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(486);
	((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_color = (jref) (frame[1].o);
	LINE_NUMBER(487);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Player_con_mindustry_net_NetConnection(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:con", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(491);
	((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_con = (jref) (frame[1].o);
	LINE_NUMBER(492);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Player_deathTimer_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:deathTimer", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(496);
	((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_deathTimer = (frame[1].f);
	LINE_NUMBER(497);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Player_id_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:id", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(501);
	((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_id = (frame[1].i);
	LINE_NUMBER(502);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Player_itemDepositRate_arc_util_Ratekeeper(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:itemDepositRate", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(506);
	((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_itemDepositRate = (jref) (frame[1].o);
	LINE_NUMBER(507);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Player_justSwitchFrom_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:justSwitchFrom", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(511);
	((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_justSwitchFrom = (jref) (frame[1].o);
	LINE_NUMBER(512);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Player_justSwitchTo_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:justSwitchTo", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(516);
	((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_justSwitchTo = (jref) (frame[1].o);
	LINE_NUMBER(517);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Player_lastCommand_mindustry_ai_UnitCommand(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:lastCommand", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(521);
	((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_lastCommand = (jref) (frame[1].o);
	LINE_NUMBER(522);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Player_lastPreviewPlanGroup_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:lastPreviewPlanGroup", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(526);
	((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_lastPreviewPlanGroup = (frame[1].i);
	LINE_NUMBER(527);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Player_lastPreviewPlanGroupServer_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:lastPreviewPlanGroupServer", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(531);
	((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_lastPreviewPlanGroupServer = (frame[1].i);
	LINE_NUMBER(532);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Player_lastPreviewPlanTimestamp_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:lastPreviewPlanTimestamp", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(536);
	((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_lastPreviewPlanTimestamp = (frame[1].l);
	LINE_NUMBER(537);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Player_lastText_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:lastText", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(541);
	((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_lastText = (jref) (frame[1].o);
	LINE_NUMBER(542);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Player_lastUpdated_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:lastUpdated", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(546);
	((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_lastUpdated = (frame[1].l);
	LINE_NUMBER(547);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Player_locale_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:locale", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(551);
	((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_locale = (jref) (frame[1].o);
	LINE_NUMBER(552);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Player_mouseX_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:mouseX", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(556);
	((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_mouseX = (frame[1].f);
	LINE_NUMBER(557);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Player_mouseY_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:mouseY", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(561);
	((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_mouseY = (frame[1].f);
	LINE_NUMBER(562);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Player_name_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:name", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(566);
	((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_name = (jref) (frame[1].o);
	LINE_NUMBER(567);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Player_pingText_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:pingText", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(571);
	((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_pingText = (jref) (frame[1].o);
	LINE_NUMBER(572);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Player_pingTime_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:pingTime", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(576);
	((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_pingTime = (frame[1].f);
	LINE_NUMBER(577);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Player_pingX_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:pingX", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(581);
	((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_pingX = (frame[1].f);
	LINE_NUMBER(582);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Player_pingY_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:pingY", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(586);
	((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_pingY = (frame[1].f);
	LINE_NUMBER(587);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Player_planEachable_mindustry_input_InputHandler$QueryEachable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:planEachable", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(591);
	((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_planEachable = (jref) (frame[1].o);
	LINE_NUMBER(592);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Player_previewPlanTree_arc_math_geom_QuadTree(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:previewPlanTree", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(596);
	((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_previewPlanTree = (jref) (frame[1].o);
	LINE_NUMBER(597);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Player_previewPlansAssembling_arc_struct_Seq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:previewPlansAssembling", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(601);
	((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_previewPlansAssembling = (jref) (frame[1].o);
	LINE_NUMBER(602);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Player_previewPlansCurrent_arc_struct_Seq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:previewPlansCurrent", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(606);
	((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_previewPlansCurrent = (jref) (frame[1].o);
	LINE_NUMBER(607);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Player_previewPlansDirty_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:previewPlansDirty", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(611);
	((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_previewPlansDirty = (frame[1].i);
	LINE_NUMBER(612);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Player_receivingNewPlanGroup_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:receivingNewPlanGroup", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(616);
	((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_receivingNewPlanGroup = (frame[1].i);
	LINE_NUMBER(617);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Player_selectedBlock_mindustry_world_Block(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:selectedBlock", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(621);
	((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_selectedBlock = (jref) (frame[1].o);
	LINE_NUMBER(622);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Player_selectedRotation_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:selectedRotation", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(626);
	((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_selectedRotation = (frame[1].i);
	LINE_NUMBER(627);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Player_setIndex__draw_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:setIndex__draw", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(631);
	((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_index__draw = (frame[1].i);
	LINE_NUMBER(632);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Player_setIndex__player_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:setIndex__player", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(636);
	((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_index__player = (frame[1].i);
	LINE_NUMBER(637);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Player_setIndex__sync_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:setIndex__sync", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(641);
	((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_index__sync = (frame[1].i);
	LINE_NUMBER(642);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Player_shooting_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:shooting", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(646);
	((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_shooting = (frame[1].i);
	LINE_NUMBER(647);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Player_textFadeTime_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:textFadeTime", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(651);
	((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_textFadeTime = (frame[1].f);
	LINE_NUMBER(652);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Player_timer_arc_util_Interval(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:timer", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(656);
	((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_timer = (jref) (frame[1].o);
	LINE_NUMBER(657);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Player_typing_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:typing", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(661);
	((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_typing = (frame[1].i);
	LINE_NUMBER(662);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Player_updateSpacing_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:updateSpacing", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(666);
	((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_updateSpacing = (frame[1].l);
	LINE_NUMBER(667);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Player_x_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:x", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(671);
	((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_x = (frame[1].f);
	LINE_NUMBER(672);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Player_y_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:y", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(676);
	((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_y = (frame[1].f);
	LINE_NUMBER(677);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Player_read_arc_util_io_Reads(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:read", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(681);
	jint temp0 = (jint)((func_arc_util_io_Reads_s_R_short) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_s_R_short])(ctx, (frame[1].o));
	frame[2].i = temp0;
	LINE_NUMBER(682);
	if ((frame[2].i) != 0) goto label_2;
	}
	{
	LINE_NUMBER(683);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, (frame[1].o));
	((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_admin = temp0;
	LINE_NUMBER(684);
	sp[0].o = frame[0].o;
	jint temp1 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, (frame[1].o));
	((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_boosting = temp1;
	LINE_NUMBER(685);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_color;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readColor_arc_util_io_Reads_arc_graphics_Color_R_arc_graphics_Color(ctx, sp[1].o, sp[2].o);
	((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_color = (jref) sp[1].o;
	LINE_NUMBER(686);
	sp[0].o = frame[0].o;
	jfloat temp2 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_mouseX = temp2;
	LINE_NUMBER(687);
	sp[0].o = frame[0].o;
	jfloat temp3 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_mouseY = temp3;
	LINE_NUMBER(688);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readString_arc_util_io_Reads_R_java_lang_String(ctx, (frame[1].o));
	((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_name = (jref) sp[1].o;
	LINE_NUMBER(689);
	sp[0].o = frame[0].o;
	jint temp4 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, (frame[1].o));
	((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_shooting = temp4;
	LINE_NUMBER(690);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readTeam_arc_util_io_Reads_R_mindustry_game_Team(ctx, (frame[1].o));
	((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_team = (jref) sp[1].o;
	LINE_NUMBER(691);
	sp[0].o = frame[0].o;
	jint temp5 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, (frame[1].o));
	((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_typing = temp5;
	LINE_NUMBER(692);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readUnit_arc_util_io_Reads_R_mindustry_gen_Unit(ctx, (frame[1].o));
	((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_unit = (jref) sp[1].o;
	LINE_NUMBER(693);
	sp[0].o = frame[0].o;
	jfloat temp6 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_x = temp6;
	LINE_NUMBER(694);
	sp[0].o = frame[0].o;
	jfloat temp7 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_y = temp7;
	goto label_15;
	}
label_2:;
	{
	LINE_NUMBER(695);
	if ((frame[2].i) != (jint(1))) goto label_16;
	}
	{
	LINE_NUMBER(696);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, (frame[1].o));
	((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_admin = temp0;
	LINE_NUMBER(697);
	sp[0].o = frame[0].o;
	jint temp1 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, (frame[1].o));
	((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_boosting = temp1;
	LINE_NUMBER(698);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_color;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readColor_arc_util_io_Reads_arc_graphics_Color_R_arc_graphics_Color(ctx, sp[1].o, sp[2].o);
	((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_color = (jref) sp[1].o;
	LINE_NUMBER(699);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readCommand_arc_util_io_Reads_R_mindustry_ai_UnitCommand(ctx, (frame[1].o));
	((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_lastCommand = (jref) sp[1].o;
	LINE_NUMBER(700);
	sp[0].o = frame[0].o;
	jfloat temp2 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_mouseX = temp2;
	LINE_NUMBER(701);
	sp[0].o = frame[0].o;
	jfloat temp3 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_mouseY = temp3;
	LINE_NUMBER(702);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readString_arc_util_io_Reads_R_java_lang_String(ctx, (frame[1].o));
	((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_name = (jref) sp[1].o;
	LINE_NUMBER(703);
	sp[0].o = frame[0].o;
	jint temp4 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, (frame[1].o));
	((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_shooting = temp4;
	LINE_NUMBER(704);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readTeam_arc_util_io_Reads_R_mindustry_game_Team(ctx, (frame[1].o));
	((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_team = (jref) sp[1].o;
	LINE_NUMBER(705);
	sp[0].o = frame[0].o;
	jint temp5 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, (frame[1].o));
	((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_typing = temp5;
	LINE_NUMBER(706);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readUnit_arc_util_io_Reads_R_mindustry_gen_Unit(ctx, (frame[1].o));
	((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_unit = (jref) sp[1].o;
	LINE_NUMBER(707);
	sp[0].o = frame[0].o;
	jfloat temp6 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_x = temp6;
	LINE_NUMBER(708);
	sp[0].o = frame[0].o;
	jfloat temp7 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_y = temp7;
	goto label_15;
	}
label_16:;
	{
	LINE_NUMBER(709);
	if ((frame[2].i) != (jint(2))) goto label_30;
	}
	{
	LINE_NUMBER(710);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, (frame[1].o));
	((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_admin = temp0;
	LINE_NUMBER(711);
	sp[0].o = frame[0].o;
	jint temp1 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, (frame[1].o));
	((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_boosting = temp1;
	LINE_NUMBER(712);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_color;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readColor_arc_util_io_Reads_arc_graphics_Color_R_arc_graphics_Color(ctx, sp[1].o, sp[2].o);
	((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_color = (jref) sp[1].o;
	LINE_NUMBER(713);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readCommand_arc_util_io_Reads_R_mindustry_ai_UnitCommand(ctx, (frame[1].o));
	((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_lastCommand = (jref) sp[1].o;
	LINE_NUMBER(714);
	sp[0].o = frame[0].o;
	jfloat temp2 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_mouseX = temp2;
	LINE_NUMBER(715);
	sp[0].o = frame[0].o;
	jfloat temp3 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_mouseY = temp3;
	LINE_NUMBER(716);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readString_arc_util_io_Reads_R_java_lang_String(ctx, (frame[1].o));
	((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_name = (jref) sp[1].o;
	LINE_NUMBER(717);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[2].o = (jobject)SF_mindustry_ctype_ContentType_block;
	jint temp4 = (jint)((func_arc_util_io_Reads_s_R_short) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_s_R_short])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_getByID_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_getByID_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content])(ctx, sp[1].o, sp[2].o, temp4);
	((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_selectedBlock = (jref) (checkCast(ctx, &class_mindustry_world_Block, sp[1].o));
	LINE_NUMBER(718);
	sp[0].o = frame[0].o;
	jint temp5 = (jint)((func_arc_util_io_Reads_i_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_i_R_int])(ctx, (frame[1].o));
	((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_selectedRotation = temp5;
	LINE_NUMBER(719);
	sp[0].o = frame[0].o;
	jint temp6 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, (frame[1].o));
	((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_shooting = temp6;
	LINE_NUMBER(720);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readTeam_arc_util_io_Reads_R_mindustry_game_Team(ctx, (frame[1].o));
	((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_team = (jref) sp[1].o;
	LINE_NUMBER(721);
	sp[0].o = frame[0].o;
	jint temp7 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, (frame[1].o));
	((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_typing = temp7;
	LINE_NUMBER(722);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readUnit_arc_util_io_Reads_R_mindustry_gen_Unit(ctx, (frame[1].o));
	((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_unit = (jref) sp[1].o;
	LINE_NUMBER(723);
	sp[0].o = frame[0].o;
	jfloat temp8 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_x = temp8;
	LINE_NUMBER(724);
	sp[0].o = frame[0].o;
	jfloat temp9 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_y = temp9;
	goto label_15;
	}
label_30:;
	{
	LINE_NUMBER(726);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"Unknown revision '\u0001' for entity type 'PlayerComp'"_j.string, 1, boxShort(ctx, (frame[2].i)));
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_15:;
	{
	LINE_NUMBER(729);
	((func_mindustry_gen_Player_afterRead) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_afterRead])(ctx, (frame[0].o));
	LINE_NUMBER(730);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Player_write_arc_util_io_Writes(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:write", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(734);
	((func_arc_util_io_Writes_s_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_s_int])(ctx, (frame[1].o), (jint(2)));
	LINE_NUMBER(735);
	((func_arc_util_io_Writes_bool_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_bool_boolean])(ctx, (frame[1].o), ((jint)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_admin));
	LINE_NUMBER(736);
	((func_arc_util_io_Writes_bool_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_bool_boolean])(ctx, (frame[1].o), ((jint)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_boosting));
	LINE_NUMBER(737);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_color;
	SM_mindustry_io_TypeIO_writeColor_arc_util_io_Writes_arc_graphics_Color(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(738);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_lastCommand;
	SM_mindustry_io_TypeIO_writeCommand_arc_util_io_Writes_mindustry_ai_UnitCommand(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(739);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_mouseX));
	LINE_NUMBER(740);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_mouseY));
	LINE_NUMBER(741);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_name;
	SM_mindustry_io_TypeIO_writeString_arc_util_io_Writes_java_lang_String(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(742);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_selectedBlock;
	sp += 1;
	if (sp[0].o != nullptr) goto label_9;
	}
	INST_ICONST(-1);
	goto label_10;
label_9:;
	{
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_selectedBlock;
	jint temp0 = (jint)((mindustry_ctype_Content *) NULL_CHECK(sp[0].o))->F_id;
	sp[0].i = temp0;
	sp += 1;
	}
label_10:;
	{
	sp -= 2;
	((func_arc_util_io_Writes_s_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_s_int])(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(743);
	((func_arc_util_io_Writes_i_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_i_int])(ctx, (frame[1].o), ((jint)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_selectedRotation));
	LINE_NUMBER(744);
	((func_arc_util_io_Writes_bool_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_bool_boolean])(ctx, (frame[1].o), ((jint)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_shooting));
	LINE_NUMBER(745);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_team;
	SM_mindustry_io_TypeIO_writeTeam_arc_util_io_Writes_mindustry_game_Team(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(746);
	((func_arc_util_io_Writes_bool_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_bool_boolean])(ctx, (frame[1].o), ((jint)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_typing));
	LINE_NUMBER(747);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_unit;
	SM_mindustry_io_TypeIO_writeUnit_arc_util_io_Writes_mindustry_gen_Unit(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(748);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_x));
	LINE_NUMBER(749);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_y));
	LINE_NUMBER(751);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_Player_self_R_mindustry_gen_Entityc(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:self", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(755);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_Player_as_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:as", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(760);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_Player_icon_R_arc_graphics_g2d_TextureRegion(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:icon", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(765);
	jint temp0 = (jint)((func_mindustry_gen_Player_dead_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_dead_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(766);
	sp[0].o = (jobject)((func_mindustry_gen_Player_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild])(ctx, (frame[0].o));
	if (sp[0].o != nullptr) goto label_3;
	}
	{
	LINE_NUMBER(767);
	clinit_mindustry_content_UnitTypes(ctx);
	sp[0].o = (jobject)SF_mindustry_content_UnitTypes_alpha;
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[0].o))->F_uiIcon;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(769);
	sp[0].o = (jobject)((func_mindustry_gen_Player_bestCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_bestCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(770);
	if ((frame[1].o) != nullptr) goto label_6;
	}
	{
	LINE_NUMBER(771);
	clinit_mindustry_content_UnitTypes(ctx);
	sp[0].o = (jobject)SF_mindustry_content_UnitTypes_alpha;
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[0].o))->F_uiIcon;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_6:;
	{
	LINE_NUMBER(773);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_block;
	sp[0].o = (jobject)((mindustry_world_blocks_storage_CoreBlock *) NULL_CHECK((checkCast(ctx, &class_mindustry_world_blocks_storage_CoreBlock, sp[0].o))))->F_unitType;
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[0].o))->F_uiIcon;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(775);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((func_mindustry_gen_Unit_icon_R_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_icon_R_arc_graphics_g2d_TextureRegion])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_Player_getPreviewPlans_R_arc_struct_Seq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:getPreviewPlans", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(780);
	frame[1].l = (jlong(100ll));
	LINE_NUMBER(781);
	jlong temp0 = (jlong)SM_arc_util_Time_timeSinceMillis_long_R_long(ctx, ((jlong)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_lastPreviewPlanTimestamp));
	if ((longCompare(temp0, (frame[1].l))) < 0) goto label_2;
	}
	{
	if (((jint)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_receivingNewPlanGroup) == 0) goto label_2;
	}
	{
	LINE_NUMBER(782);
	((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_receivingNewPlanGroup = (jint(0));
	LINE_NUMBER(783);
	((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_previewPlansDirty = (jint(1));
	LINE_NUMBER(784);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_previewPlansCurrent;
	sp[1].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_previewPlansAssembling;
	((func_arc_struct_Seq_set_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_set_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(785);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_previewPlansAssembling;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	}
label_2:;
	{
	LINE_NUMBER(787);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_previewPlansCurrent;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_Player_dead_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:dead", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(792);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_unit;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_unit;
	jint temp0 = (jint)((func_mindustry_gen_Unit_isValid_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_isValid_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
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

jbool M_mindustry_gen_Player_displayAmmo_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:displayAmmo", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(797);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_unit;
	popStackFrame(ctx);
	return (isInstance(ctx, sp[0].o, &class_mindustry_gen_BlockUnitc));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_Player_isAdded_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:isAdded", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(802);
	popStackFrame(ctx);
	return ((jint)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_added);
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_Player_isBuilder_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:isBuilder", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(807);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_unit;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_unit;
	jint temp0 = (jint)((func_mindustry_gen_Unit_canBuild_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_canBuild_R_boolean])(ctx, sp[0].o);
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

jbool M_mindustry_gen_Player_isLocal_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:isLocal", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(812);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	frame[2].o = (frame[0].o);
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_gen_Unitc)) == 0) goto label_2;
	}
	{
	frame[1].o = (checkCast(ctx, &class_mindustry_gen_Unitc, (frame[2].o)));
	sp[0].o = (jobject)((func_mindustry_gen_Unitc_controller_R_mindustry_entities_units_UnitController) resolveInterfaceMethod(ctx, &class_mindustry_gen_Unitc, INDEX_mindustry_gen_Unitc_controller_R_mindustry_entities_units_UnitController, (frame[1].o)))(ctx, (frame[1].o));
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	if (sp[0].o != sp[1].o) goto label_2;
	}
label_1:;
	INST_ICONST(1);
	goto label_4;
label_2:;
	INST_ICONST(0);
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_gen_Player_isLogicControllable_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:isLogicControllable", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(817);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_Player_isPinging_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:isPinging", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(822);
	if ((floatCompare(((jfloat)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_pingTime), (jfloat(0)), -1)) <= 0) goto label_1;
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

jbool M_mindustry_gen_Player_isRemote_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:isRemote", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(827);
	frame[2].o = (frame[0].o);
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_gen_Unitc)) == 0) goto label_1;
	}
	{
	frame[1].o = (checkCast(ctx, &class_mindustry_gen_Unitc, (frame[2].o)));
	jint temp0 = (jint)((func_mindustry_gen_Unitc_isPlayer_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_gen_Unitc, INDEX_mindustry_gen_Unitc_isPlayer_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Player_isLocal_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_isLocal_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_3;
label_1:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_gen_Player_isSyncHidden_mindustry_game_Team_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:isSyncHidden", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(832);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_Player_isValidController_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:isValidController", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(837);
	jint temp0 = (jint)((func_mindustry_gen_Player_isAdded_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_isAdded_R_boolean])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_Player_onSolid_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:onSolid", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(842);
	sp[0].o = (jobject)((func_mindustry_gen_Player_tileOn_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_tileOn_R_mindustry_world_Tile])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(843);
	if ((frame[1].o) == nullptr) goto label_2;
	}
	{
	jint temp0 = (jint)((func_mindustry_world_Tile_solid_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_solid_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_3;
	}
label_2:;
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_gen_Player_serialize_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:serialize", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(847);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_Player_timer_int_float_R_boolean(jcontext ctx, jobject self, jint param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:timer", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(852);
	jint temp0 = (jint)SM_java_lang_Float_isInfinite_float_R_boolean(ctx, (frame[2].f));
	if (temp0 == 0) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(853);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_timer;
	jint temp0 = (jint)((func_arc_util_Interval_get_int_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_Interval_get_int_float_R_boolean])(ctx, sp[0].o, (frame[1].i), (frame[2].f));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_Player_clipSize_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:clipSize", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(858);
	popStackFrame(ctx);
	return (jfloat(3,402823e+38f));
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_Player_getX_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:getX", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(863);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_x);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_Player_getY_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:getY", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(868);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_y);
	}

	popStackFrame(ctx);
}

jint M_mindustry_gen_Player_tileX_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:tileX", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(873);
	jint temp0 = (jint)SM_mindustry_core_World_toTile_float_R_int(ctx, ((jfloat)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_x));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_mindustry_gen_Player_tileY_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:tileY", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(878);
	jint temp0 = (jint)SM_mindustry_core_World_toTile_float_R_int(ctx, ((jfloat)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_y));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_Player_coloredName_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:coloredName", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(883);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_color;
	sp[0].o = (jobject)((func_arc_graphics_Color_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_toString_R_java_lang_String])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_String_toUpperCase_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_toUpperCase_R_java_lang_String])(ctx, sp[0].o);
	sp[1].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_name;
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"[#\u0001]\u0001"_j.string, 2, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_Player_ip_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:ip", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(888);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_con;
	if (sp[0].o != nullptr) goto label_1;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"localhost"_j));
	goto label_2;
label_1:;
	{
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_con;
	sp[0].o = (jobject)((mindustry_net_NetConnection *) NULL_CHECK(sp[0].o))->F_address;
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_gen_Player_plainName_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:plainName", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(893);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_name;
	sp[0].o = (jobject)SM_arc_util_Strings_stripColors_java_lang_CharSequence_R_java_lang_String(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_Player_usid_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:usid", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(898);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_con;
	if (sp[0].o != nullptr) goto label_1;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"[LOCAL]"_j));
	goto label_2;
label_1:;
	{
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_con;
	sp[0].o = (jobject)((mindustry_net_NetConnection *) NULL_CHECK(sp[0].o))->F_usid;
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_gen_Player_uuid_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:uuid", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(903);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_con;
	if (sp[0].o != nullptr) goto label_1;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"[LOCAL]"_j));
	goto label_2;
label_1:;
	{
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_con;
	sp[0].o = (jobject)((mindustry_net_NetConnection *) NULL_CHECK(sp[0].o))->F_uuid;
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_gen_Player_getInfo_R_mindustry_net_Administration$PlayerInfo(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:getInfo", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(908);
	jint temp0 = (jint)((func_mindustry_gen_Player_isLocal_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_isLocal_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(909);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Local players cannot be traced and do not have info."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(911);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_netServer;
	sp[0].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK(sp[0].o))->F_admins;
	sp[1].o = (jobject)((func_mindustry_gen_Player_uuid_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_uuid_R_java_lang_String])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_mindustry_net_Administration_getInfo_java_lang_String_R_mindustry_net_Administration$PlayerInfo) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Administration_getInfo_java_lang_String_R_mindustry_net_Administration$PlayerInfo])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_Player_blockOn_R_mindustry_world_Block(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:blockOn", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(917);
	sp[0].o = (jobject)((func_mindustry_gen_Player_tileOn_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_tileOn_R_mindustry_world_Tile])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(918);
	if ((frame[1].o) != nullptr) goto label_2;
	}
	clinit_mindustry_content_Blocks(ctx);
	(sp++)->o = SF_mindustry_content_Blocks_air;
	goto label_3;
label_2:;
	INST_ALOAD(1);
	POP_N(1); // Pop method args
	sp->o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, sp[0].o);
	sp++;
label_3:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_gen_Player_floorOn_R_mindustry_world_blocks_environment_Floor(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:floorOn", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(923);
	sp[0].o = (jobject)((func_mindustry_gen_Player_tileOn_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_tileOn_R_mindustry_world_Tile])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(924);
	if ((frame[1].o) == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[1].o));
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	if (sp[0].o == sp[1].o) goto label_3;
	}
label_2:;
	{
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_air;
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_environment_Floor, sp[0].o);
	sp += 1;
	goto label_4;
	}
label_3:;
	INST_ALOAD(1);
	POP_N(1); // Pop method args
	sp->o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, sp[0].o);
	sp++;
label_4:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject SM_mindustry_gen_Player_create_R_mindustry_gen_Player(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:create", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Player(ctx);
	{
	LINE_NUMBER(928);
	clinit_mindustry_gen_Player(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_Player);
	init_mindustry_gen_Player(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Player_add(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:add", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(932);
	if (((jint)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_added) != (jint(1))) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(933);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Groups(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Groups_player;
	jint temp0 = (jint)((func_mindustry_entities_EntityGroup_addIndex_mindustry_gen_Entityc_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_addIndex_mindustry_gen_Entityc_R_int])(ctx, sp[1].o, (frame[0].o));
	((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_index__player = temp0;
	LINE_NUMBER(934);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Groups(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Groups_sync;
	jint temp1 = (jint)((func_mindustry_entities_EntityGroup_addIndex_mindustry_gen_Entityc_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_addIndex_mindustry_gen_Entityc_R_int])(ctx, sp[1].o, (frame[0].o));
	((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_index__sync = temp1;
	LINE_NUMBER(935);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Groups(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Groups_draw;
	jint temp2 = (jint)((func_mindustry_entities_EntityGroup_addIndex_mindustry_gen_Entityc_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_addIndex_mindustry_gen_Entityc_R_int])(ctx, sp[1].o, (frame[0].o));
	((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_index__draw = temp2;
	LINE_NUMBER(937);
	((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_added = (jint(1));
	LINE_NUMBER(938);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Player_afterRead(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:afterRead", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(942);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_Player_afterReadAll(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:afterReadAll", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(946);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_Player_afterSync(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:afterSync", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(951);
	jint temp0 = (jint)((func_mindustry_gen_Player_isLocal_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_isLocal_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_justSwitchFrom;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_justSwitchFrom;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_justSwitchTo;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(952);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_justSwitchTo;
	((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_unit = (jref) sp[1].o;
	LINE_NUMBER(953);
	sp[0].o = frame[0].o;
	jint temp0 = ((jint)((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_wrongReadUnits) + (jint(1));
	((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_wrongReadUnits = temp0;
	if (temp0 < (jint(2))) goto label_4;
	}
	{
	LINE_NUMBER(954);
	((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_justSwitchFrom = (jref) (jobject(nullptr));
	LINE_NUMBER(955);
	((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_wrongReadUnits = (jint(0));
	goto label_4;
	}
label_1:;
	{
	LINE_NUMBER(958);
	((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_justSwitchFrom = (jref) (jobject(nullptr));
	LINE_NUMBER(959);
	((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_justSwitchTo = (jref) (jobject(nullptr));
	LINE_NUMBER(960);
	((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_wrongReadUnits = (jint(0));
	}
label_4:;
	{
	LINE_NUMBER(962);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_unit;
	frame[1].o = sp[0].o;
	LINE_NUMBER(963);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_lastReadUnit;
	((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_unit = (jref) sp[1].o;
	LINE_NUMBER(964);
	((func_mindustry_gen_Player_unit_mindustry_gen_Unit) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_unit_mindustry_gen_Unit])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(965);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_unit;
	((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_lastReadUnit = (jref) sp[1].o;
	LINE_NUMBER(966);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_unit;
	if (sp[0].o == nullptr) goto label_13;
	}
	{
	LINE_NUMBER(967);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_unit;
	((func_mindustry_gen_Unit_aim_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_aim_float_float])(ctx, sp[0].o, ((jfloat)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_mouseX), ((jfloat)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_mouseY));
	LINE_NUMBER(968);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_unit;
	((func_mindustry_gen_Unit_controlWeapons_boolean_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_controlWeapons_boolean_boolean])(ctx, sp[0].o, ((jint)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_shooting), ((jint)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_shooting));
	LINE_NUMBER(969);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_unit;
	((func_mindustry_gen_Unit_controller_mindustry_entities_units_UnitController) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_controller_mindustry_entities_units_UnitController])(ctx, sp[0].o, (frame[0].o));
	}
label_13:;
	LINE_NUMBER(975);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_Player_beforeWrite(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:beforeWrite", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(979);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_Player_checkSpawn(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:checkSpawn", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(983);
	sp[0].o = (jobject)((func_mindustry_gen_Player_bestCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_bestCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(984);
	if ((frame[1].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(985);
	((func_mindustry_world_blocks_storage_CoreBlock$CoreBuild_requestSpawn_mindustry_gen_Player) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_blocks_storage_CoreBlock$CoreBuild_requestSpawn_mindustry_gen_Player])(ctx, (frame[1].o), (frame[0].o));
	}
label_2:;
	LINE_NUMBER(987);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_Player_clearUnit(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:clearUnit", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(991);
	((func_mindustry_gen_Player_unit_mindustry_gen_Unit) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_unit_mindustry_gen_Unit])(ctx, (frame[0].o), (jobject(nullptr)));
	LINE_NUMBER(992);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Player_draw(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:draw", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1000);
	((func_mindustry_gen_Player_drawPing) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_drawPing])(ctx, (frame[0].o));
	LINE_NUMBER(1001);
	((func_mindustry_gen_Player_drawName) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_drawName])(ctx, (frame[0].o));
	LINE_NUMBER(1003);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Player_drawName(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[18];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:drawName", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1007);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_unit;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_name;
	if (sp[0].o != nullptr) goto label_2;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(1008);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type;
	frame[1].f = (((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_hitSize) * (jfloat(2)));
	LINE_NUMBER(1009);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_r1;
	sp[0].o = (jobject)((func_arc_graphics_Camera_bounds_arc_math_geom_Rect_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Camera_bounds_arc_math_geom_Rect_R_arc_math_geom_Rect])(ctx, sp[0].o, sp[1].o);
	jint temp0 = (jint)((func_arc_math_geom_Rect_overlaps_float_float_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_overlaps_float_float_float_float_R_boolean])(ctx, sp[0].o, (((jfloat)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_x) - ((frame[1].f) / (jfloat(2)))), (((jfloat)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_y) - ((frame[1].f) / (jfloat(2)))), (frame[1].f), (frame[1].f));
	if (temp0 != 0) goto label_4;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_4:;
	{
	LINE_NUMBER(1010);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_name;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_unit;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	sp[1].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[1].o);
	jint temp0 = (jint)((func_mindustry_gen_Unit_inFogTo_mindustry_game_Team_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_inFogTo_mindustry_game_Team_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_6;
	}
label_5:;
	popStackFrame(ctx);
	INST_RETURN();
label_6:;
	{
	LINE_NUMBER(1011);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (jfloat(150.0f)));
	LINE_NUMBER(1012);
	jfloat temp0 = (jfloat)SM_mindustry_graphics_Drawf_text_R_float(ctx);
	frame[2].f = temp0;
	LINE_NUMBER(1013);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_outline;
	frame[3].o = sp[0].o;
	LINE_NUMBER(1014);
	sp[0].o = ((jobject) &class_arc_graphics_g2d_GlyphLayout);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Player_invoke_arc_func_Prov_1(ctx);
		auto proxy = (mindustry_gen_Player_invoke_arc_func_Prov_1 *) gcAlloc(ctx, &class_mindustry_gen_Player_invoke_arc_func_Prov_1);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_util_pooling_Pools_obtain_java_lang_Class_arc_func_Prov_R_java_lang_Object(ctx, sp[0].o, sp[1].o);
	frame[4].o = (checkCast(ctx, &class_arc_graphics_g2d_GlyphLayout, sp[0].o));
	LINE_NUMBER(1015);
	frame[5].f = (jfloat(11.0f));
	LINE_NUMBER(1016);
	frame[6].f = (jfloat(15.0f));
	LINE_NUMBER(1017);
	jint temp1 = (jint)((func_arc_graphics_g2d_Font_usesIntegerPositions_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_graphics_g2d_Font_usesIntegerPositions_R_boolean])(ctx, (frame[3].o));
	frame[7].i = temp1;
	LINE_NUMBER(1018);
	((func_arc_graphics_g2d_Font_setUseIntegerPositions_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_graphics_g2d_Font_setUseIntegerPositions_boolean])(ctx, (frame[3].o), (jint(0)));
	LINE_NUMBER(1019);
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData])(ctx, (frame[3].o));
	jfloat temp2 = jfloat(0.25f);
	jfloat temp3 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, (jfloat(1)));
	((func_arc_graphics_g2d_Font$FontData_setScale_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font$FontData_setScale_float])(ctx, sp[0].o, (temp2 / temp3));
	LINE_NUMBER(1020);
	sp[0].o = frame[4].o;
	sp[1].o = frame[3].o;
	sp[2].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_name;
	((func_arc_graphics_g2d_GlyphLayout_setText_arc_graphics_g2d_Font_java_lang_CharSequence) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_GlyphLayout_setText_arc_graphics_g2d_Font_java_lang_CharSequence])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(1021);
	jint temp4 = (jint)((func_mindustry_gen_Player_isLocal_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_isLocal_R_boolean])(ctx, (frame[0].o));
	if (temp4 != 0) goto label_17;
	}
	{
	LINE_NUMBER(1022);
	SM_arc_graphics_g2d_Draw_color_float_float_float_float(ctx, (jfloat(0)), (jfloat(0)), (jfloat(0)), (jfloat(0.3f)));
	LINE_NUMBER(1023);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_unit;
	jfloat temp0 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_x;
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_unit;
	SM_arc_graphics_g2d_Fill_rect_float_float_float_float(ctx, temp0, ((((jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_y) + (jfloat(11.0f))) - (((jfloat)((arc_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[4].o)))->F_height) / (jfloat(2)))), (((jfloat)((arc_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[4].o)))->F_width) + (jfloat(2))), (((jfloat)((arc_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[4].o)))->F_height) + (jfloat(3.0f))));
	LINE_NUMBER(1024);
	SM_arc_graphics_g2d_Draw_color(ctx);
	LINE_NUMBER(1025);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_color;
	((func_arc_graphics_g2d_Font_setColor_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font_setColor_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1026);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_unit;
	jfloat temp1 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[2].o))->F_x;
	sp[2].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font_draw_java_lang_CharSequence_float_float_float_int_boolean_R_arc_graphics_g2d_GlyphLayout) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font_draw_java_lang_CharSequence_float_float_float_int_boolean_R_arc_graphics_g2d_GlyphLayout])(ctx, sp[0].o, sp[1].o, temp1, (((jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[2].o))->F_y) + (jfloat(11.0f))), (jfloat(0)), (jint(1)), (jint(0)));
	LINE_NUMBER(1027);
	if (((jint)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_admin) == 0) goto label_17;
	}
	{
	LINE_NUMBER(1028);
	frame[8].f = (jfloat(3.0f));
	LINE_NUMBER(1029);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_color;
	jfloat temp0 = ((jfloat)((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_r) * (jfloat(0.5f));
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_color;
	jfloat temp1 = ((jfloat)((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_g) * (jfloat(0.5f));
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_color;
	SM_arc_graphics_g2d_Draw_color_float_float_float_float(ctx, temp0, temp1, (((jfloat)((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_b) * (jfloat(0.5f))), (jfloat(1)));
	LINE_NUMBER(1030);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_adminSmall;
	sp[0].o = (jobject)((func_arc_scene_style_TextureRegionDrawable_getRegion_R_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_style_TextureRegionDrawable_getRegion_R_arc_graphics_g2d_TextureRegion])(ctx, sp[0].o);
	sp[1].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_unit;
	jfloat temp2 = ((((jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[1].o))->F_x) + (((jfloat)((arc_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[4].o)))->F_width) / (jfloat(2)))) + (jfloat(2))) + (jfloat(1));
	sp[1].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_unit;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float_float(ctx, sp[0].o, temp2, ((((jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[1].o))->F_y) + (jfloat(11.0f))) - (jfloat(1.5f))), (frame[8].f), (frame[8].f));
	LINE_NUMBER(1031);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_color;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(1032);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_adminSmall;
	sp[0].o = (jobject)((func_arc_scene_style_TextureRegionDrawable_getRegion_R_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_style_TextureRegionDrawable_getRegion_R_arc_graphics_g2d_TextureRegion])(ctx, sp[0].o);
	sp[1].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_unit;
	jfloat temp3 = ((((jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[1].o))->F_x) + (((jfloat)((arc_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[4].o)))->F_width) / (jfloat(2)))) + (jfloat(2))) + (jfloat(1));
	sp[1].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_unit;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float_float(ctx, sp[0].o, temp3, ((((jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[1].o))->F_y) + (jfloat(11.0f))) - (jfloat(1))), (frame[8].f), (frame[8].f));
	}
label_17:;
	{
	LINE_NUMBER(1035);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	jint temp0 = (jint)((func_arc_Settings_getBool_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getBool_java_lang_String_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"playerchat"_j))));
	if (temp0 == 0) goto label_29;
	}
	{
	if ((floatCompare(((jfloat)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_textFadeTime), (jfloat(0)), -1)) <= 0) goto label_30;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_lastText;
	if (sp[0].o != nullptr) goto label_31;
	}
label_30:;
	{
	if (((jint)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_typing) == 0) goto label_29;
	}
label_31:;
	{
	LINE_NUMBER(1036);
	if ((floatCompare(((jfloat)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_textFadeTime), (jfloat(0)), 1)) <= 0) goto label_32;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_lastText;
	if (sp[0].o != nullptr) goto label_33;
	}
label_32:;
	{
	sp[0].o = (jobject)SM_arc_util_Strings_animated_float_int_float_java_lang_String_R_java_lang_String(ctx, (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time), (jint(4)), (jfloat(15.0f)), (((jobject) createStringLiteral(ctx, u8"."_j))));
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"[lightgray]\u0001"_j.string, 1, sp[0].o);
	sp += 1;
	goto label_34;
	}
label_33:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((mindustry_gen_Player *) NULL_CHECK(sp[-1].o))->F_lastText;
label_34:;
	{
	sp -= 1;
	frame[8].o = sp[0].o;
	LINE_NUMBER(1037);
	frame[9].f = (jfloat(100.0f));
	LINE_NUMBER(1038);
	jfloat temp0 = jfloat(1);
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_curve_float_float_R_float(ctx, ((jfloat(1)) - ((jfloat)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_textFadeTime)), (jfloat(0.9f)));
	frame[10].f = (temp0 - temp1);
	LINE_NUMBER(1039);
	sp[0].o = frame[3].o;
	jfloat temp2 = jfloat(1);
	jfloat temp3 = jfloat(1);
	jfloat temp4 = jfloat(1);
	sp[1].f = temp2;
	sp[2].f = temp3;
	sp[3].f = temp4;
	sp += 4;
	if ((floatCompare(((jfloat)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_textFadeTime), (jfloat(0)), 1)) <= 0) goto label_38;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_lastText;
	if (sp[0].o != nullptr) goto label_39;
	}
label_38:;
	INST_FCONST(1);
	goto label_40;
label_39:;
	INST_FLOAD(10);
label_40:;
	{
	sp -= 5;
	((func_arc_graphics_g2d_Font_setColor_float_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font_setColor_float_float_float_float])(ctx, sp[0].o, sp[1].f, sp[2].f, sp[3].f, sp[4].f);
	LINE_NUMBER(1040);
	sp[0].o = frame[4].o;
	sp[1].o = frame[3].o;
	sp[2].o = frame[8].o;
	clinit_arc_graphics_Color(ctx);
	sp[3].o = (jobject)SF_arc_graphics_Color_white;
	((func_arc_graphics_g2d_GlyphLayout_setText_arc_graphics_g2d_Font_java_lang_CharSequence_arc_graphics_Color_float_int_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_GlyphLayout_setText_arc_graphics_g2d_Font_java_lang_CharSequence_arc_graphics_Color_float_int_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, (frame[9].f), (jint(4)), (jint(1)));
	LINE_NUMBER(1041);
	jfloat temp0 = jfloat(0);
	jfloat temp1 = jfloat(0);
	jfloat temp2 = jfloat(0);
	jfloat temp3 = jfloat(0.3f);
	sp[0].f = temp0;
	sp[1].f = temp1;
	sp[2].f = temp2;
	sp[3].f = temp3;
	sp += 4;
	if ((floatCompare(((jfloat)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_textFadeTime), (jfloat(0)), 1)) <= 0) goto label_43;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_lastText;
	if (sp[0].o != nullptr) goto label_44;
	}
label_43:;
	INST_FCONST(1);
	goto label_45;
label_44:;
	INST_FLOAD(10);
label_45:;
	{
	sp -= 5;
	SM_arc_graphics_g2d_Draw_color_float_float_float_float(ctx, sp[0].f, sp[1].f, sp[2].f, (sp[3].f * sp[4].f));
	LINE_NUMBER(1042);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_unit;
	jfloat temp0 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_x;
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_unit;
	SM_arc_graphics_g2d_Fill_rect_float_float_float_float(ctx, temp0, (((((jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_y) + (jfloat(15.0f))) + ((jfloat)((arc_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[4].o)))->F_height)) - (((jfloat)((arc_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[4].o)))->F_height) / (jfloat(2)))), (((jfloat)((arc_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[4].o)))->F_width) + (jfloat(2))), (((jfloat)((arc_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[4].o)))->F_height) + (jfloat(3.0f))));
	LINE_NUMBER(1043);
	sp[0].o = frame[3].o;
	sp[1].o = frame[8].o;
	sp[2].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_unit;
	jfloat temp1 = ((jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[2].o))->F_x) - ((frame[9].f) / (jfloat(2)));
	sp[2].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font_draw_java_lang_CharSequence_float_float_float_int_boolean_R_arc_graphics_g2d_GlyphLayout) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font_draw_java_lang_CharSequence_float_float_float_int_boolean_R_arc_graphics_g2d_GlyphLayout])(ctx, sp[0].o, sp[1].o, temp1, ((((jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[2].o))->F_y) + (jfloat(15.0f))) + ((jfloat)((arc_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[4].o)))->F_height)), (frame[9].f), (jint(1)), (jint(1)));
	}
label_29:;
	{
	LINE_NUMBER(1045);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(1046);
	SM_arc_util_pooling_Pools_free_java_lang_Object(ctx, (frame[4].o));
	LINE_NUMBER(1047);
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData])(ctx, (frame[3].o));
	((func_arc_graphics_g2d_Font$FontData_setScale_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font$FontData_setScale_float])(ctx, sp[0].o, (jfloat(1)));
	LINE_NUMBER(1048);
	sp[0].o = frame[3].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_white;
	((func_arc_graphics_g2d_Font_setColor_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font_setColor_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1049);
	((func_arc_graphics_g2d_Font_setUseIntegerPositions_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_graphics_g2d_Font_setUseIntegerPositions_boolean])(ctx, (frame[3].o), (frame[7].i));
	LINE_NUMBER(1050);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (frame[2].f));
	LINE_NUMBER(1051);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Player_drawPing(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:drawPing", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1055);
	if ((floatCompare(((jfloat)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_pingTime), (jfloat(0)), 1)) <= 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	if (((jint)((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_showPings) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_name;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_showOtherTeamPings) != 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_team;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	sp[1].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[1].o);
	if (sp[0].o == sp[1].o) goto label_2;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(1056);
	clinit_arc_math_Interp(ctx);
	sp[0].o = (jobject)SF_arc_math_Interp_pow5Out;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_map_float_float_float_float_float_R_float(ctx, ((jfloat)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_pingTime), (jfloat(0.05f)), (jfloat(0)), (jfloat(1)), (jfloat(0)));
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, temp0);
	jfloat temp2 = (jfloat)((func_arc_math_Interp$PowOut_apply_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Interp$PowOut_apply_float_R_float])(ctx, sp[0].o, temp1);
	clinit_arc_math_Interp(ctx);
	sp[0].o = (jobject)SF_arc_math_Interp_pow5Out;
	jfloat temp3 = (jfloat)SM_arc_math_Mathf_map_float_float_float_float_float_R_float(ctx, ((jfloat)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_pingTime), (jfloat(1)), (jfloat(0.98f)), (jfloat(0)), (jfloat(1)));
	jfloat temp4 = (jfloat)((func_arc_math_Interp$PowOut_apply_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Interp$PowOut_apply_float_R_float])(ctx, sp[0].o, temp3);
	jfloat temp5 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, temp2, temp4);
	frame[1].f = temp5;
	LINE_NUMBER(1057);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_c1;
	sp[1].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_color;
	sp[0].o = (jobject)((func_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_graphics_Color_a_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_a_float_R_arc_graphics_Color])(ctx, sp[0].o, (frame[1].f));
	LINE_NUMBER(1058);
	sp[0].o = frame[0].o;
	((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_pingTime = (((jfloat)((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_pingTime) - ((clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta) / (jfloat(1200.0f))));
	LINE_NUMBER(1059);
	jfloat temp6 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, (jfloat(4.0f)));
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	jfloat temp7 = (jfloat)((func_mindustry_core_Renderer_getDisplayScale_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_Renderer_getDisplayScale_R_float])(ctx, sp[0].o);
	frame[2].f = (temp6 / temp7);
	LINE_NUMBER(1060);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (jfloat(150.0f)));
	LINE_NUMBER(1061);
	jfloat temp8 = (jfloat)SM_mindustry_graphics_Drawf_text_R_float(ctx);
	frame[3].f = temp8;
	LINE_NUMBER(1062);
	jfloat temp9 = (jfloat)SM_arc_math_Mathf_absin_float_float_R_float(ctx, (jfloat(5.0f)), (jfloat(1)));
	frame[4].f = temp9;
	LINE_NUMBER(1063);
	jfloat temp10 = jfloat(1);
	clinit_arc_math_Interp(ctx);
	sp[0].o = (jobject)SF_arc_math_Interp_pow5In;
	jfloat temp11 = (jfloat)SM_arc_math_Mathf_map_float_float_float_float_float_R_float(ctx, ((jfloat)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_pingTime), (jfloat(1)), (jfloat(0.96f)), (jfloat(1)), (jfloat(0)));
	jfloat temp12 = (jfloat)((func_arc_math_Interp$PowIn_apply_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Interp$PowIn_apply_float_R_float])(ctx, sp[0].o, temp11);
	jfloat temp13 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, temp12);
	frame[5].f = (temp10 + (temp13 * (jfloat(3.0f))));
	LINE_NUMBER(1064);
	jfloat temp14 = (jfloat)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_pingX;
	jfloat temp15 = (jfloat)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_pingY;
	jfloat temp16 = ((jfloat(2)) * (frame[5].f)) * (frame[2].f);
	jfloat temp17 = jfloat(45.0f);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_c1;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_c3;
	clinit_arc_graphics_Color(ctx);
	sp[2].o = (jobject)SF_arc_graphics_Color_darkGray;
	sp[1].o = (jobject)((func_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[1].o, sp[2].o);
	sp[2].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_color;
	sp[1].o = (jobject)((func_arc_graphics_Color_mul_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Color_mul_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[1].o, sp[2].o);
	clinit_arc_util_Tmp(ctx);
	sp[2].o = (jobject)SF_arc_util_Tmp_c1;
	sp[1].o = (jobject)((func_arc_graphics_Color_a_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Color_a_float_R_arc_graphics_Color])(ctx, sp[1].o, ((jfloat)((arc_graphics_Color *) NULL_CHECK(sp[2].o))->F_a));
	SM_mindustry_graphics_Drawf_square_float_float_float_float_arc_graphics_Color_arc_graphics_Color_float(ctx, temp14, temp15, temp16, temp17, sp[0].o, sp[1].o, (frame[2].f));
	LINE_NUMBER(1065);
	jfloat temp18 = (jfloat)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_pingX;
	jfloat temp19 = (((jfloat)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_pingY) + ((jfloat(9.0f)) * (frame[2].f))) + ((frame[4].f) * (frame[2].f));
	jint temp20 = jint(3);
	jfloat temp21 = (jfloat(3.0f)) * (frame[2].f);
	jfloat temp22 = jfloat(-90.0f);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_c1;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_c3;
	SM_mindustry_graphics_Drawf_fillPoly_float_float_int_float_float_arc_graphics_Color_arc_graphics_Color_float(ctx, temp18, temp19, temp20, temp21, temp22, sp[0].o, sp[1].o, (frame[2].f));
	LINE_NUMBER(1066);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_pingText;
	if (sp[0].o == nullptr) goto label_13;
	}
	{
	LINE_NUMBER(1067);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_name;
	jfloat temp0 = (jfloat)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_pingX;
	jfloat temp1 = ((jfloat)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_pingY) + (((jfloat(20.0f)) + (frame[4].f)) * (frame[2].f));
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_c1;
	SM_mindustry_graphics_Drawf_text_java_lang_String_float_float_arc_graphics_Color_float(ctx, sp[0].o, temp0, temp1, sp[1].o, ((jfloat(0.7f)) * (frame[2].f)));
	LINE_NUMBER(1068);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_pingText;
	jfloat temp2 = (jfloat)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_pingX;
	jfloat temp3 = ((jfloat)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_pingY) + (((jfloat(16.0f)) + (frame[4].f)) * (frame[2].f));
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_c2;
	jfloat temp4 = jfloat(1);
	jfloat temp5 = jfloat(1);
	jfloat temp6 = jfloat(1);
	clinit_arc_util_Tmp(ctx);
	sp[2].o = (jobject)SF_arc_util_Tmp_c1;
	sp[1].o = (jobject)((func_arc_graphics_Color_set_float_float_float_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Color_set_float_float_float_float_R_arc_graphics_Color])(ctx, sp[1].o, temp4, temp5, temp6, ((jfloat)((arc_graphics_Color *) NULL_CHECK(sp[2].o))->F_a));
	SM_mindustry_graphics_Drawf_text_java_lang_String_float_float_arc_graphics_Color_float(ctx, sp[0].o, temp2, temp3, sp[1].o, (frame[2].f));
	goto label_16;
	}
label_13:;
	{
	LINE_NUMBER(1070);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_name;
	jfloat temp0 = (jfloat)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_pingX;
	jfloat temp1 = ((jfloat)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_pingY) + (((jfloat(16.0f)) + (frame[4].f)) * (frame[2].f));
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_c1;
	SM_mindustry_graphics_Drawf_text_java_lang_String_float_float_arc_graphics_Color_float(ctx, sp[0].o, temp0, temp1, sp[1].o, (frame[2].f));
	}
label_16:;
	{
	LINE_NUMBER(1072);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(1073);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (frame[3].f));
	LINE_NUMBER(1074);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Player_handlePreviewPlans_int_arc_struct_Seq(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:handlePreviewPlans", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1078);
	if ((frame[1].i) <= ((jint)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_lastPreviewPlanGroup)) goto label_1;
	}
	{
	LINE_NUMBER(1079);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_previewPlansAssembling;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(1080);
	((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_lastPreviewPlanGroup = (frame[1].i);
	LINE_NUMBER(1081);
	((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_receivingNewPlanGroup = (jint(1));
	LINE_NUMBER(1082);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)SM_arc_util_Time_millis_R_long(ctx);
	((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_lastPreviewPlanTimestamp = temp0;
	goto label_6;
	}
label_1:;
	{
	LINE_NUMBER(1083);
	if ((frame[1].i) >= ((jint)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_lastPreviewPlanGroup)) goto label_7;
	}
	LINE_NUMBER(1084);
	popStackFrame(ctx);
	INST_RETURN();
label_7:;
	{
	LINE_NUMBER(1085);
	if (((jint)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_receivingNewPlanGroup) != 0) goto label_6;
	}
	LINE_NUMBER(1086);
	popStackFrame(ctx);
	INST_RETURN();
label_6:;
	{
	LINE_NUMBER(1088);
	if ((frame[2].o) != nullptr) goto label_10;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_10:;
	{
	LINE_NUMBER(1089);
	jint temp0 = (jint)((arc_struct_Seq *) NULL_CHECK((frame[2].o)))->F_size;
	jint temp1 = 1000;
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_previewPlansAssembling;
	jint temp2 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp0, (temp1 - ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)));
	frame[3].i = temp2;
	LINE_NUMBER(1090);
	if ((frame[3].i) <= 0) goto label_12;
	}
	{
	LINE_NUMBER(1091);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_previewPlansAssembling;
	sp[0].o = (jobject)((func_arc_struct_Seq_addAll_arc_struct_Seq_int_int_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_addAll_arc_struct_Seq_int_int_R_arc_struct_Seq])(ctx, sp[0].o, (frame[2].o), (jint(0)), (frame[3].i));
	}
label_12:;
	LINE_NUMBER(1093);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_Player_handleSyncHidden(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:handleSyncHidden", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(1097);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_Player_interpolate(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:interpolate", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1100);
	if ((longCompare(((jlong)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_lastUpdated), (jlong(0)))) == 0) goto label_1;
	}
	{
	if ((longCompare(((jlong)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_updateSpacing), (jlong(0)))) == 0) goto label_1;
	}
	{
	LINE_NUMBER(1101);
	jlong temp0 = (jlong)SM_arc_util_Time_timeSinceMillis_long_R_long(ctx, ((jlong)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_lastUpdated));
	frame[1].f = (jfloat(temp0));
	LINE_NUMBER(1102);
	jfloat temp1 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, ((frame[1].f) / (jfloat(((jlong)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_updateSpacing)))), (jfloat(2)));
	frame[2].f = temp1;
	LINE_NUMBER(1103);
	sp[0].o = frame[0].o;
	jfloat temp2 = (jfloat)SM_arc_math_Mathf_lerp_float_float_float_R_float(ctx, ((jfloat)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_x_LAST_), ((jfloat)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_x_TARGET_), (frame[2].f));
	((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_x = temp2;
	LINE_NUMBER(1104);
	sp[0].o = frame[0].o;
	jfloat temp3 = (jfloat)SM_arc_math_Mathf_lerp_float_float_float_R_float(ctx, ((jfloat)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_y_LAST_), ((jfloat)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_y_TARGET_), (frame[2].f));
	((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_y = temp3;
	LINE_NUMBER(1105);
	goto label_7;
	}
label_1:;
	{
	if ((longCompare(((jlong)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_lastUpdated), (jlong(0)))) == 0) goto label_7;
	}
	{
	LINE_NUMBER(1106);
	((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_x = ((jfloat)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_x_TARGET_);
	LINE_NUMBER(1107);
	((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_y = ((jfloat)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_y_TARGET_);
	}
label_7:;
	LINE_NUMBER(1110);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_Player_kick_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:kick", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1114);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_con;
	((func_mindustry_net_NetConnection_kick_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_NetConnection_kick_java_lang_String])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(1115);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Player_kick_java_lang_String_long(jcontext ctx, jobject self, jobject param0, jlong param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:kick", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].l = param1;
	{
	LINE_NUMBER(1119);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_con;
	((func_mindustry_net_NetConnection_kick_java_lang_String_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_NetConnection_kick_java_lang_String_long])(ctx, sp[0].o, (frame[1].o), (frame[2].l));
	LINE_NUMBER(1120);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Player_kick_mindustry_net_Packets$KickReason(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:kick", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1124);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_con;
	((func_mindustry_net_NetConnection_kick_mindustry_net_Packets$KickReason) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_NetConnection_kick_mindustry_net_Packets$KickReason])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(1125);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Player_kick_mindustry_net_Packets$KickReason_long(jcontext ctx, jobject self, jobject param0, jlong param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:kick", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].l = param1;
	{
	LINE_NUMBER(1129);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_con;
	((func_mindustry_net_NetConnection_kick_mindustry_net_Packets$KickReason_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_NetConnection_kick_mindustry_net_Packets$KickReason_long])(ctx, sp[0].o, (frame[1].o), (frame[2].l));
	LINE_NUMBER(1130);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Player_readSync_arc_util_io_Reads(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:readSync", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1133);
	if ((longCompare(((jlong)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_lastUpdated), (jlong(0)))) == 0) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)SM_arc_util_Time_timeSinceMillis_long_R_long(ctx, ((jlong)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_lastUpdated));
	((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_updateSpacing = temp0;
	}
label_1:;
	{
	LINE_NUMBER(1134);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)SM_arc_util_Time_millis_R_long(ctx);
	((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_lastUpdated = temp0;
	LINE_NUMBER(1135);
	jint temp1 = (jint)((func_mindustry_gen_Player_isLocal_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_isLocal_R_boolean])(ctx, (frame[0].o));
	frame[2].i = temp1;
	LINE_NUMBER(1136);
	sp[0].o = frame[0].o;
	jint temp2 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, (frame[1].o));
	((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_admin = temp2;
	LINE_NUMBER(1137);
	if ((frame[2].i) != 0) goto label_5;
	}
	{
	LINE_NUMBER(1138);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, (frame[1].o));
	((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_boosting = temp0;
	goto label_7;
	}
label_5:;
	{
	LINE_NUMBER(1140);
	jint temp0 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, (frame[1].o));
	}
label_7:;
	{
	LINE_NUMBER(1142);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_color;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readColor_arc_util_io_Reads_arc_graphics_Color_R_arc_graphics_Color(ctx, sp[1].o, sp[2].o);
	((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_color = (jref) sp[1].o;
	LINE_NUMBER(1143);
	if ((frame[2].i) != 0) goto label_9;
	}
	{
	LINE_NUMBER(1144);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_mouseX = temp0;
	goto label_11;
	}
label_9:;
	{
	LINE_NUMBER(1146);
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	}
label_11:;
	{
	LINE_NUMBER(1148);
	if ((frame[2].i) != 0) goto label_12;
	}
	{
	LINE_NUMBER(1149);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_mouseY = temp0;
	goto label_14;
	}
label_12:;
	{
	LINE_NUMBER(1151);
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	}
label_14:;
	{
	LINE_NUMBER(1153);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readString_arc_util_io_Reads_R_java_lang_String(ctx, (frame[1].o));
	((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_name = (jref) sp[1].o;
	LINE_NUMBER(1154);
	if ((frame[2].i) != 0) goto label_16;
	}
	{
	LINE_NUMBER(1155);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[2].o = (jobject)SF_mindustry_ctype_ContentType_block;
	jint temp0 = (jint)((func_arc_util_io_Reads_s_R_short) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_s_R_short])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_getByID_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_getByID_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content])(ctx, sp[1].o, sp[2].o, temp0);
	((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_selectedBlock = (jref) (checkCast(ctx, &class_mindustry_world_Block, sp[1].o));
	goto label_18;
	}
label_16:;
	{
	LINE_NUMBER(1157);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_block;
	jint temp0 = (jint)((func_arc_util_io_Reads_s_R_short) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_s_R_short])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_getByID_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_getByID_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content])(ctx, sp[0].o, sp[1].o, temp0);
	}
label_18:;
	{
	LINE_NUMBER(1159);
	if ((frame[2].i) != 0) goto label_19;
	}
	{
	LINE_NUMBER(1160);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_arc_util_io_Reads_i_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_i_R_int])(ctx, (frame[1].o));
	((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_selectedRotation = temp0;
	goto label_21;
	}
label_19:;
	{
	LINE_NUMBER(1162);
	jint temp0 = (jint)((func_arc_util_io_Reads_i_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_i_R_int])(ctx, (frame[1].o));
	}
label_21:;
	{
	LINE_NUMBER(1164);
	if ((frame[2].i) != 0) goto label_22;
	}
	{
	LINE_NUMBER(1165);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, (frame[1].o));
	((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_shooting = temp0;
	goto label_24;
	}
label_22:;
	{
	LINE_NUMBER(1167);
	jint temp0 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, (frame[1].o));
	}
label_24:;
	{
	LINE_NUMBER(1169);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readTeam_arc_util_io_Reads_R_mindustry_game_Team(ctx, (frame[1].o));
	((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_team = (jref) sp[1].o;
	LINE_NUMBER(1170);
	if ((frame[2].i) != 0) goto label_26;
	}
	{
	LINE_NUMBER(1171);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, (frame[1].o));
	((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_typing = temp0;
	goto label_28;
	}
label_26:;
	{
	LINE_NUMBER(1173);
	jint temp0 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, (frame[1].o));
	}
label_28:;
	{
	LINE_NUMBER(1175);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readUnit_arc_util_io_Reads_R_mindustry_gen_Unit(ctx, (frame[1].o));
	((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_unit = (jref) sp[1].o;
	LINE_NUMBER(1176);
	if ((frame[2].i) != 0) goto label_30;
	}
	{
	LINE_NUMBER(1177);
	((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_x_LAST_ = ((jfloat)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_x);
	LINE_NUMBER(1178);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_x_TARGET_ = temp0;
	goto label_33;
	}
label_30:;
	{
	LINE_NUMBER(1180);
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	LINE_NUMBER(1181);
	((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_x_LAST_ = ((jfloat)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_x);
	LINE_NUMBER(1182);
	((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_x_TARGET_ = ((jfloat)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_x);
	}
label_33:;
	{
	LINE_NUMBER(1184);
	if ((frame[2].i) != 0) goto label_36;
	}
	{
	LINE_NUMBER(1185);
	((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_y_LAST_ = ((jfloat)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_y);
	LINE_NUMBER(1186);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_y_TARGET_ = temp0;
	goto label_39;
	}
label_36:;
	{
	LINE_NUMBER(1188);
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	LINE_NUMBER(1189);
	((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_y_LAST_ = ((jfloat)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_y);
	LINE_NUMBER(1190);
	((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_y_TARGET_ = ((jfloat)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_y);
	}
label_39:;
	{
	LINE_NUMBER(1192);
	((func_mindustry_gen_Player_afterSync) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_afterSync])(ctx, (frame[0].o));
	LINE_NUMBER(1194);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Player_readSyncManual_java_nio_FloatBuffer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:readSyncManual", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1197);
	if ((longCompare(((jlong)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_lastUpdated), (jlong(0)))) == 0) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)SM_arc_util_Time_timeSinceMillis_long_R_long(ctx, ((jlong)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_lastUpdated));
	((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_updateSpacing = temp0;
	}
label_1:;
	{
	LINE_NUMBER(1198);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)SM_arc_util_Time_millis_R_long(ctx);
	((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_lastUpdated = temp0;
	LINE_NUMBER(1199);
	((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_x_LAST_ = ((jfloat)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_x);
	LINE_NUMBER(1200);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)((func_java_nio_FloatBuffer_get_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_FloatBuffer_get_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_x_TARGET_ = temp1;
	LINE_NUMBER(1201);
	((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_y_LAST_ = ((jfloat)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_y);
	LINE_NUMBER(1202);
	sp[0].o = frame[0].o;
	jfloat temp2 = (jfloat)((func_java_nio_FloatBuffer_get_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_FloatBuffer_get_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_y_TARGET_ = temp2;
	LINE_NUMBER(1204);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Player_remove(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:remove", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1207);
	if (((jint)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_added) != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(1208);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_player;
	((func_mindustry_entities_EntityGroup_removeIndex_mindustry_gen_Entityc_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_removeIndex_mindustry_gen_Entityc_int])(ctx, sp[0].o, (frame[0].o), ((jint)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_index__player));
	LINE_NUMBER(1209);
	((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_index__player = (jint(-1));
	LINE_NUMBER(1210);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_sync;
	((func_mindustry_entities_EntityGroup_removeIndex_mindustry_gen_Entityc_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_removeIndex_mindustry_gen_Entityc_int])(ctx, sp[0].o, (frame[0].o), ((jint)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_index__sync));
	LINE_NUMBER(1211);
	((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_index__sync = (jint(-1));
	LINE_NUMBER(1212);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_draw;
	((func_mindustry_entities_EntityGroup_removeIndex_mindustry_gen_Entityc_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_removeIndex_mindustry_gen_Entityc_int])(ctx, sp[0].o, (frame[0].o), ((jint)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_index__draw));
	LINE_NUMBER(1213);
	((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_index__draw = (jint(-1));
	LINE_NUMBER(1216);
	((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_added = (jint(0));
	LINE_NUMBER(1220);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_unit;
	if (sp[0].o == nullptr) goto label_9;
	}
	{
	LINE_NUMBER(1221);
	((func_mindustry_gen_Player_clearUnit) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_clearUnit])(ctx, (frame[0].o));
	}
label_9:;
	{
	LINE_NUMBER(1223);
	((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_lastReadUnit = (jref) (jobject(nullptr));
	LINE_NUMBER(1224);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp[2].o = jobject(nullptr);
	((mindustry_gen_Player *) NULL_CHECK(sp[1].o))->F_justSwitchFrom = (jref) sp[2].o;
	((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_justSwitchTo = (jref) sp[2].o;
	LINE_NUMBER(1228);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_13;
	}
	{
	LINE_NUMBER(1229);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_netClient;
	jint temp0 = (jint)((func_mindustry_gen_Player_id_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_id_R_int])(ctx, (frame[0].o));
	((func_mindustry_core_NetClient_addRemovedEntity_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_NetClient_addRemovedEntity_int])(ctx, sp[0].o, temp0);
	}
label_13:;
	LINE_NUMBER(1232);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_Player_reset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:reset", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1236);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_defaultTeam;
	((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_team = (jref) sp[1].o;
	LINE_NUMBER(1237);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp0 = jint(0);
	((mindustry_gen_Player *) NULL_CHECK(sp[1].o))->F_typing = temp0;
	((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_admin = temp0;
	LINE_NUMBER(1238);
	((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_textFadeTime = (jfloat(0));
	LINE_NUMBER(1239);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jfloat temp3 = jfloat(0);
	((mindustry_gen_Player *) NULL_CHECK(sp[1].o))->F_y = temp3;
	((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_x = temp3;
	LINE_NUMBER(1240);
	((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_lastPreviewPlanTimestamp = (jlong(0));
	LINE_NUMBER(1241);
	((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_lastPreviewPlanGroup = (jint(-1));
	LINE_NUMBER(1242);
	((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_lastPreviewPlanGroupServer = (jint(-1));
	LINE_NUMBER(1243);
	((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_previewPlanTree = (jref) (jobject(nullptr));
	LINE_NUMBER(1244);
	((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_planEachable = (jref) (jobject(nullptr));
	LINE_NUMBER(1245);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_previewPlansCurrent;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(1246);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_previewPlansAssembling;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(1247);
	((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_receivingNewPlanGroup = (jint(0));
	LINE_NUMBER(1248);
	((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_previewPlansDirty = (jint(0));
	LINE_NUMBER(1249);
	jint temp6 = (jint)((func_mindustry_gen_Player_dead_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_dead_R_boolean])(ctx, (frame[0].o));
	if (temp6 != 0) goto label_14;
	}
	{
	LINE_NUMBER(1250);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_unit;
	((func_mindustry_gen_Unit_resetController) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_resetController])(ctx, sp[0].o);
	LINE_NUMBER(1251);
	((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_unit = (jref) (jobject(nullptr));
	}
label_14:;
	LINE_NUMBER(1253);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_Player_sendMessage_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:sendMessage", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1257);
	((func_mindustry_gen_Player_sendMessage_java_lang_String_mindustry_gen_Player_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_sendMessage_java_lang_String_mindustry_gen_Player_java_lang_String])(ctx, (frame[0].o), (frame[1].o), (jobject(nullptr)), (jobject(nullptr)));
	LINE_NUMBER(1258);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Player_sendMessage_java_lang_String_mindustry_gen_Player(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:sendMessage", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1262);
	((func_mindustry_gen_Player_sendMessage_java_lang_String_mindustry_gen_Player_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_sendMessage_java_lang_String_mindustry_gen_Player_java_lang_String])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (jobject(nullptr)));
	LINE_NUMBER(1263);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Player_sendMessage_java_lang_String_mindustry_gen_Player_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:sendMessage", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(1267);
	jint temp0 = (jint)((func_mindustry_gen_Player_isLocal_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_isLocal_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(1268);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(1269);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_chatfrag;
	((func_mindustry_ui_fragments_ChatFragment_addMessage_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_ChatFragment_addMessage_java_lang_String])(ctx, sp[0].o, (frame[1].o));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(1272);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_con;
	SM_mindustry_gen_Call_sendMessage_mindustry_net_NetConnection_java_lang_String_java_lang_String_mindustry_gen_Player(ctx, sp[0].o, (frame[1].o), (frame[3].o), (frame[2].o));
	}
label_3:;
	LINE_NUMBER(1274);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_Player_sendUnformatted_mindustry_gen_Player_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:sendUnformatted", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1278);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_netServer;
	sp[1].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK(sp[1].o))->F_chatFormatter;
	sp[1].o = (jobject)((func_mindustry_core_NetServer$ChatFormatter_format_mindustry_gen_Player_java_lang_String_R_java_lang_String) resolveInterfaceMethod(ctx, &class_mindustry_core_NetServer$ChatFormatter, INDEX_mindustry_core_NetServer$ChatFormatter_format_mindustry_gen_Player_java_lang_String_R_java_lang_String, sp[1].o))(ctx, sp[1].o, (frame[1].o), (frame[2].o));
	((func_mindustry_gen_Player_sendMessage_java_lang_String_mindustry_gen_Player_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_sendMessage_java_lang_String_mindustry_gen_Player_java_lang_String])(ctx, sp[0].o, sp[1].o, (frame[1].o), (frame[2].o));
	LINE_NUMBER(1279);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Player_sendUnformatted_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:sendUnformatted", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1283);
	((func_mindustry_gen_Player_sendUnformatted_mindustry_gen_Player_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_sendUnformatted_mindustry_gen_Player_java_lang_String])(ctx, (frame[0].o), (jobject(nullptr)), (frame[1].o));
	LINE_NUMBER(1284);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Player_set_arc_math_geom_Position(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:set", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1288);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_math_geom_Position_getX_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getX_R_float, (frame[1].o)))(ctx, (frame[1].o));
	jfloat temp1 = (jfloat)((func_arc_math_geom_Position_getY_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getY_R_float, (frame[1].o)))(ctx, (frame[1].o));
	((func_mindustry_gen_Player_set_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_set_float_float])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(1289);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Player_set_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:set", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(1293);
	((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_x = (frame[1].f);
	LINE_NUMBER(1294);
	((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_y = (frame[2].f);
	LINE_NUMBER(1295);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Player_snapInterpolation(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:snapInterpolation", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1298);
	((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_updateSpacing = (jlong(16ll));
	LINE_NUMBER(1299);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)SM_arc_util_Time_millis_R_long(ctx);
	((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_lastUpdated = temp0;
	LINE_NUMBER(1300);
	((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_x_LAST_ = ((jfloat)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_x);
	LINE_NUMBER(1301);
	((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_x_TARGET_ = ((jfloat)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_x);
	LINE_NUMBER(1302);
	((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_y_LAST_ = ((jfloat)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_y);
	LINE_NUMBER(1303);
	((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_y_TARGET_ = ((jfloat)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_y);
	LINE_NUMBER(1305);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Player_snapSync(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:snapSync", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1308);
	((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_updateSpacing = (jlong(16ll));
	LINE_NUMBER(1309);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)SM_arc_util_Time_millis_R_long(ctx);
	((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_lastUpdated = temp0;
	LINE_NUMBER(1310);
	((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_x_LAST_ = ((jfloat)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_x_TARGET_);
	LINE_NUMBER(1311);
	((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_x = ((jfloat)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_x_TARGET_);
	LINE_NUMBER(1312);
	((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_y_LAST_ = ((jfloat)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_y_TARGET_);
	LINE_NUMBER(1313);
	((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_y = ((jfloat)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_y_TARGET_);
	LINE_NUMBER(1315);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Player_team_mindustry_game_Team(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:team", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1319);
	((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_team = (jref) (frame[1].o);
	LINE_NUMBER(1320);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_unit;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(1321);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_unit;
	((func_mindustry_gen_Unit_team_mindustry_game_Team) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_team_mindustry_game_Team])(ctx, sp[0].o, (frame[1].o));
	}
label_2:;
	LINE_NUMBER(1323);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_Player_trns_arc_math_geom_Position(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:trns", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1327);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_math_geom_Position_getX_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getX_R_float, (frame[1].o)))(ctx, (frame[1].o));
	jfloat temp1 = (jfloat)((func_arc_math_geom_Position_getY_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getY_R_float, (frame[1].o)))(ctx, (frame[1].o));
	((func_mindustry_gen_Player_trns_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_trns_float_float])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(1328);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Player_trns_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:trns", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(1332);
	((func_mindustry_gen_Player_set_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_set_float_float])(ctx, (frame[0].o), (((jfloat)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_x) + (frame[1].f)), (((jfloat)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_y) + (frame[2].f)));
	LINE_NUMBER(1333);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Player_unit_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:unit", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1337);
	jint temp0 = (jint)((func_mindustry_gen_Player_isLocal_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_isLocal_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_justSwitchFrom;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_justSwitchFrom;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_justSwitchTo;
	if (sp[0].o == nullptr) goto label_1;
	}
	LINE_NUMBER(1338);
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(1340);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_unit;
	if (sp[0].o != (frame[1].o)) goto label_3;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(1341);
	if ((frame[1].o) == nullptr) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_mindustry_gen_Unit_controller_R_mindustry_entities_units_UnitController) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_controller_R_mindustry_entities_units_UnitController])(ctx, (frame[1].o));
	frame[3].o = sp[0].o;
	if ((isInstance(ctx, (frame[3].o), &class_mindustry_ai_types_CommandAI)) == 0) goto label_4;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_ai_types_CommandAI, (frame[3].o)));
	LINE_NUMBER(1342);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[2].o)))->F_command;
	((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_lastCommand = (jref) sp[1].o;
	}
label_4:;
	{
	LINE_NUMBER(1344);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_unit;
	if (sp[0].o == nullptr) goto label_6;
	}
	{
	LINE_NUMBER(1345);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_unit;
	((func_mindustry_gen_Unit_resetController) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_resetController])(ctx, sp[0].o);
	LINE_NUMBER(1346);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_lastCommand;
	if (sp[0].o == nullptr) goto label_6;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((func_mindustry_gen_Unit_controller_R_mindustry_entities_units_UnitController) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_controller_R_mindustry_entities_units_UnitController])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	if ((isInstance(ctx, (frame[3].o), &class_mindustry_ai_types_CommandAI)) == 0) goto label_6;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_ai_types_CommandAI, (frame[3].o)));
	LINE_NUMBER(1347);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_lastCommand;
	((func_mindustry_ai_types_CommandAI_command_mindustry_ai_UnitCommand) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_types_CommandAI_command_mindustry_ai_UnitCommand])(ctx, sp[0].o, sp[1].o);
	}
label_6:;
	{
	LINE_NUMBER(1350);
	((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_unit = (jref) (frame[1].o);
	LINE_NUMBER(1351);
	if ((frame[1].o) == nullptr) goto label_11;
	}
	{
	LINE_NUMBER(1352);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_team;
	((func_mindustry_gen_Unit_team_mindustry_game_Team) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_team_mindustry_game_Team])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1353);
	((func_mindustry_gen_Unit_controller_mindustry_entities_units_UnitController) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_controller_mindustry_entities_units_UnitController])(ctx, (frame[1].o), (frame[0].o));
	LINE_NUMBER(1354);
	jint temp0 = (jint)((func_mindustry_gen_Unit_isRemote_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_isRemote_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_15;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_15;
	}
	{
	LINE_NUMBER(1355);
	((func_mindustry_gen_Unit_snapInterpolation) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_snapInterpolation])(ctx, (frame[1].o));
	}
label_15:;
	{
	LINE_NUMBER(1357);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_headless) != 0) goto label_11;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Player_isLocal_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_isLocal_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_11;
	}
	{
	LINE_NUMBER(1358);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_input;
	((mindustry_input_InputHandler *) NULL_CHECK(sp[0].o))->F_block = (jref) (jobject(nullptr));
	}
label_11:;
	{
	LINE_NUMBER(1361);
	clinit_mindustry_game_EventType$UnitChangeEvent(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$UnitChangeEvent);
	init_mindustry_game_EventType$UnitChangeEvent_mindustry_gen_Player_mindustry_gen_Unit(ctx, sp[0].o, (frame[0].o), (frame[1].o));
	SM_arc_Events_fire_java_lang_Object(ctx, sp[0].o);
	LINE_NUMBER(1362);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Player_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:update", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1370);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_unit;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_unit;
	jint temp0 = (jint)((func_mindustry_gen_Unit_isValid_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_isValid_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(1371);
	((func_mindustry_gen_Player_clearUnit) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_clearUnit])(ctx, (frame[0].o));
	}
label_1:;
	{
	LINE_NUMBER(1374);
	jint temp0 = (jint)((func_mindustry_gen_Player_dead_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_dead_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_3;
	}
	{
	LINE_NUMBER(1375);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_unit;
	((func_mindustry_gen_Player_set_arc_math_geom_Position) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_set_arc_math_geom_Position])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1376);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_team;
	((func_mindustry_gen_Unit_team_mindustry_game_Team) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_team_mindustry_game_Team])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1377);
	((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_deathTimer = (jfloat(0));
	LINE_NUMBER(1378);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_canBoost) == 0) goto label_8;
	}
	{
	LINE_NUMBER(1379);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_unit;
	jint temp0 = (jint)((func_mindustry_gen_Unit_onSolid_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_onSolid_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_10;
	}
	{
	if (((jint)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_boosting) != 0) goto label_10;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_unit;
	jint temp0 = (jint)((func_mindustry_gen_Unit_isFlying_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_isFlying_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_11;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_unit;
	jint temp0 = (jint)((func_mindustry_gen_Unit_canLand_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_canLand_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_11;
	}
label_10:;
	INST_ICONST(1);
	goto label_12;
label_11:;
	INST_ICONST(0);
label_12:;
	{
	sp -= 1;
	frame[2].i = sp[0].i;
	LINE_NUMBER(1380);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_unit;
	jfloat temp0 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[1].o))->F_elevation;
	sp[1].f = temp0;
	sp += 2;
	if ((frame[2].i) == 0) goto label_14;
	}
	INST_FCONST(1);
	goto label_15;
label_14:;
	INST_FCONST(0);
label_15:;
	INST_ILOAD(2);
	if ((--sp)->i == 0) goto label_16;
	{
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type;
	jfloat temp0 = (jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_riseSpeed;
	sp[0].f = temp0;
	sp += 1;
	goto label_17;
	}
label_16:;
	{
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type;
	jfloat temp0 = (jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_descentSpeed;
	sp[0].f = temp0;
	sp += 1;
	}
label_17:;
	{
	sp -= 4;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_approachDelta_float_float_float_R_float(ctx, sp[1].f, sp[2].f, sp[3].f);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_elevation = temp0;
	LINE_NUMBER(1381);
	goto label_8;
	}
label_3:;
	{
	LINE_NUMBER(1382);
	sp[0].o = (jobject)((func_mindustry_gen_Player_bestCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_bestCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_8;
	}
	{
	LINE_NUMBER(1383);
	sp[0].o = frame[0].o;
	((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_deathTimer = (((jfloat)((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_deathTimer) + (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta));
	LINE_NUMBER(1384);
	if ((floatCompare(((jfloat)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_deathTimer), (jfloat(60.0f)), -1)) < 0) goto label_8;
	}
	{
	LINE_NUMBER(1385);
	((func_mindustry_world_blocks_storage_CoreBlock$CoreBuild_requestSpawn_mindustry_gen_Player) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_blocks_storage_CoreBlock$CoreBuild_requestSpawn_mindustry_gen_Player])(ctx, (frame[1].o), (frame[0].o));
	LINE_NUMBER(1386);
	((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_deathTimer = (jfloat(0));
	}
label_8:;
	{
	LINE_NUMBER(1389);
	sp[0].o = frame[0].o;
	((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_textFadeTime = (((jfloat)((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_textFadeTime) - ((clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta) / (jfloat(300.0f))));
	LINE_NUMBER(1393);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_25;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Player_isLocal_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_isLocal_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_26;
	}
label_25:;
	{
	jint temp0 = (jint)((func_mindustry_gen_Player_isRemote_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_isRemote_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_27;
	}
label_26:;
	{
	LINE_NUMBER(1394);
	((func_mindustry_gen_Player_interpolate) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_interpolate])(ctx, (frame[0].o));
	}
label_27:;
	LINE_NUMBER(1397);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_Player_writeSync_arc_util_io_Writes(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:writeSync", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1400);
	((func_arc_util_io_Writes_bool_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_bool_boolean])(ctx, (frame[1].o), ((jint)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_admin));
	LINE_NUMBER(1401);
	((func_arc_util_io_Writes_bool_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_bool_boolean])(ctx, (frame[1].o), ((jint)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_boosting));
	LINE_NUMBER(1402);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_color;
	SM_mindustry_io_TypeIO_writeColor_arc_util_io_Writes_arc_graphics_Color(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1403);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_mouseX));
	LINE_NUMBER(1404);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_mouseY));
	LINE_NUMBER(1405);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_name;
	SM_mindustry_io_TypeIO_writeString_arc_util_io_Writes_java_lang_String(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1406);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_selectedBlock;
	sp += 1;
	if (sp[0].o != nullptr) goto label_7;
	}
	INST_ICONST(-1);
	goto label_8;
label_7:;
	{
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_selectedBlock;
	jint temp0 = (jint)((mindustry_ctype_Content *) NULL_CHECK(sp[0].o))->F_id;
	sp[0].i = temp0;
	sp += 1;
	}
label_8:;
	{
	sp -= 2;
	((func_arc_util_io_Writes_s_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_s_int])(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(1407);
	((func_arc_util_io_Writes_i_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_i_int])(ctx, (frame[1].o), ((jint)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_selectedRotation));
	LINE_NUMBER(1408);
	((func_arc_util_io_Writes_bool_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_bool_boolean])(ctx, (frame[1].o), ((jint)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_shooting));
	LINE_NUMBER(1409);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_team;
	SM_mindustry_io_TypeIO_writeTeam_arc_util_io_Writes_mindustry_game_Team(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1410);
	((func_arc_util_io_Writes_bool_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_bool_boolean])(ctx, (frame[1].o), ((jint)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_typing));
	LINE_NUMBER(1411);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_unit;
	SM_mindustry_io_TypeIO_writeUnit_arc_util_io_Writes_mindustry_gen_Unit(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1412);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_x));
	LINE_NUMBER(1413);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_y));
	LINE_NUMBER(1415);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Player_writeSyncManual_java_nio_FloatBuffer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:writeSyncManual", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1418);
	sp[0].o = (jobject)((func_java_nio_FloatBuffer_put_float_R_java_nio_FloatBuffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_FloatBuffer_put_float_R_java_nio_FloatBuffer])(ctx, (frame[1].o), ((jfloat)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_x));
	LINE_NUMBER(1419);
	sp[0].o = (jobject)((func_java_nio_FloatBuffer_put_float_R_java_nio_FloatBuffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_FloatBuffer_put_float_R_java_nio_FloatBuffer])(ctx, (frame[1].o), ((jfloat)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_y));
	LINE_NUMBER(1421);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_Player_lambda$bestCore$2_mindustry_world_blocks_storage_CoreBlock$CoreBuild_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:lambda$bestCore$2", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(254);
	jfloat temp0 = (jfloat)((func_mindustry_world_blocks_storage_CoreBlock$CoreBuild_dst2_float_float_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_blocks_storage_CoreBlock$CoreBuild_dst2_float_float_R_float])(ctx, (frame[1].o), ((jfloat)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_y));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint SM_mindustry_gen_Player_lambda$bestCore$1_mindustry_world_blocks_storage_CoreBlock$CoreBuild_R_int(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:lambda$bestCore$1", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Player(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(254);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	popStackFrame(ctx);
	return (-((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size));
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_gen_Player_lambda$bestCore$0_arc_struct_Seq_mindustry_world_blocks_storage_CoreBlock$CoreBuild_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Player:lambda$bestCore$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Player(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(254);
	if (((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size) == (jint(1))) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_block;
	sp[0].o = (jobject)((mindustry_world_blocks_storage_CoreBlock *) NULL_CHECK((checkCast(ctx, &class_mindustry_world_blocks_storage_CoreBlock, sp[0].o))))->F_unitType;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	jint temp0 = (jint)((func_mindustry_type_UnitType_supportsEnv_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_UnitType_supportsEnv_int_R_boolean])(ctx, sp[0].o, ((jint)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_env));
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

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_gen_Player;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field con
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[6]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[12]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field justSwitchFrom
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[13]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field justSwitchTo
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[14]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field lastCommand
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[15]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[16]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[17]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[18]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field lastReadUnit
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[19]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[20]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[21]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[22]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[23]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[24]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[25]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field pingText
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[26]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[27]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[28]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[29]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field planEachable
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[30]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field previewPlanTree
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[31]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[32]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[33]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[34]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[35]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field selectedBlock
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[36]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[37]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[38]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[39]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[40]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[41]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[42]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field unit
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[43]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[44]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[45]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[46]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[47]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[48]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[49]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[50]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[51]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method buildOn
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[0]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Method unit
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[1]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Method tileOn
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[2]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Method bestCore
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[3]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Method closestCore
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[4]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Method core
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[5]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

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

	methods[66]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[67]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[68]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[69]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[70]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[71]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[72]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[73]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[74]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[75]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[76]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[77]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[78]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[79]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[80]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[81]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[82]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[83]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[84]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[85]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[86]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[87]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[88]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[89]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[90]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[91]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[92]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[93]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[94]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[95]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[96]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[97]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[98]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[99]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[100]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[101]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[102]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[103]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[104]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[105]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[106]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[107]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[108]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[109]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[110]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[111]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[112]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[113]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[114]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[115]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[116]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[117]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[118]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[119]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[120]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[121]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[122]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[123]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[124]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[125]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[126]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[127]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[128]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[129]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[130]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[131]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[132]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[133]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[134]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[135]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[136]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[137]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[138]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[139]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[140]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[141]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[142]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[143]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[144]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[145]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[146]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[147]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[148]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[149]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[150]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[151]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[152]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[153]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[154]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[155]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[156]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[157]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[158]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[159]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[160]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_gen_Player[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_mindustry_gen_Player_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_mindustry_gen_Player_self_R_mindustry_gen_Entityc,
	(void *) M_mindustry_gen_Player_as_R_java_lang_Object,
	(void *) M_mindustry_gen_Player_isAdded_R_boolean,
	(void *) M_mindustry_gen_Player_isLocal_R_boolean,
	(void *) M_mindustry_gen_Player_isRemote_R_boolean,
	(void *) M_mindustry_gen_Player_serialize_R_boolean,
	(void *) M_mindustry_gen_Player_classId_R_int,
	(void *) M_mindustry_gen_Player_id_R_int,
	(void *) M_mindustry_gen_Player_add,
	(void *) M_mindustry_gen_Player_afterRead,
	(void *) M_mindustry_gen_Player_afterReadAll,
	(void *) M_mindustry_gen_Player_beforeWrite,
	(void *) M_mindustry_gen_Player_id_int,
	(void *) M_mindustry_gen_Player_read_arc_util_io_Reads,
	(void *) M_mindustry_gen_Player_remove,
	(void *) M_mindustry_gen_Player_update,
	(void *) M_mindustry_gen_Player_write_arc_util_io_Writes,
	(void *) M_mindustry_gen_Player_getX_R_float,
	(void *) M_mindustry_gen_Player_getY_R_float,
	(void *) M_arc_math_geom_Position_angleTo_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_angleTo_float_float_R_float,
	(void *) M_arc_math_geom_Position_dst2_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_dst_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_dst_float_float_R_float,
	(void *) M_arc_math_geom_Position_dst2_float_float_R_float,
	(void *) M_arc_math_geom_Position_within_arc_math_geom_Position_float_R_boolean,
	(void *) M_arc_math_geom_Position_within_float_float_float_R_boolean,
	(void *) M_mindustry_gen_Player_floorOn_R_mindustry_world_blocks_environment_Floor,
	(void *) M_mindustry_gen_Player_buildOn_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Player_onSolid_R_boolean,
	(void *) M_mindustry_gen_Player_x_R_float,
	(void *) M_mindustry_gen_Player_y_R_float,
	(void *) M_mindustry_gen_Player_tileX_R_int,
	(void *) M_mindustry_gen_Player_tileY_R_int,
	(void *) M_mindustry_gen_Player_blockOn_R_mindustry_world_Block,
	(void *) M_mindustry_gen_Player_tileOn_R_mindustry_world_Tile,
	(void *) M_mindustry_gen_Player_set_arc_math_geom_Position,
	(void *) M_mindustry_gen_Player_set_float_float,
	(void *) M_mindustry_gen_Player_trns_arc_math_geom_Position,
	(void *) M_mindustry_gen_Player_trns_float_float,
	(void *) M_mindustry_gen_Player_x_float,
	(void *) M_mindustry_gen_Player_y_float,
	(void *) M_mindustry_gen_Player_clipSize_R_float,
	(void *) M_mindustry_gen_Player_draw,
	(void *) M_mindustry_gen_Player_setIndex__draw_int,
	(void *) M_mindustry_gen_Player_setIndex__player_int,
	(void *) M_mindustry_gen_Player_setIndex__sync_int,
	(void *) M_mindustry_gen_Player_unit_mindustry_gen_Unit,
	(void *) M_mindustry_gen_Player_unit_R_mindustry_gen_Unit,
	(void *) M_mindustry_entities_units_UnitController_hit_mindustry_gen_Bullet,
	(void *) M_mindustry_gen_Player_isValidController_R_boolean,
	(void *) M_mindustry_gen_Player_isLogicControllable_R_boolean,
	(void *) M_mindustry_entities_units_UnitController_updateUnit,
	(void *) M_mindustry_entities_units_UnitController_removed_mindustry_gen_Unit,
	(void *) M_mindustry_entities_units_UnitController_afterRead_mindustry_gen_Unit,
	(void *) M_mindustry_gen_Player_isSyncHidden_mindustry_game_Team_R_boolean,
	(void *) M_mindustry_gen_Player_lastUpdated_R_long,
	(void *) M_mindustry_gen_Player_updateSpacing_R_long,
	(void *) M_mindustry_gen_Player_afterSync,
	(void *) M_mindustry_gen_Player_handleSyncHidden,
	(void *) M_mindustry_gen_Player_interpolate,
	(void *) M_mindustry_gen_Player_lastUpdated_long,
	(void *) M_mindustry_gen_Player_readSync_arc_util_io_Reads,
	(void *) M_mindustry_gen_Player_readSyncManual_java_nio_FloatBuffer,
	(void *) M_mindustry_gen_Player_snapInterpolation,
	(void *) M_mindustry_gen_Player_snapSync,
	(void *) M_mindustry_gen_Player_updateSpacing_long,
	(void *) M_mindustry_gen_Player_writeSync_arc_util_io_Writes,
	(void *) M_mindustry_gen_Player_writeSyncManual_java_nio_FloatBuffer,
	(void *) M_mindustry_gen_Player_timer_R_arc_util_Interval,
	(void *) M_mindustry_gen_Player_timer_int_float_R_boolean,
	(void *) M_mindustry_gen_Player_timer_arc_util_Interval,
	(void *) M_mindustry_gen_Player_bestCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild,
	(void *) M_mindustry_gen_Player_coloredName_R_java_lang_String,
	(void *) M_mindustry_gen_Player_lastCommand_R_mindustry_ai_UnitCommand,
	(void *) M_mindustry_gen_Player_lastCommand_mindustry_ai_UnitCommand,
	(void *) M_mindustry_gen_Player_justSwitchFrom_R_mindustry_gen_Unit,
	(void *) M_mindustry_gen_Player_justSwitchTo_R_mindustry_gen_Unit,
	(void *) M_mindustry_gen_Player_previewPlanTree_R_arc_math_geom_QuadTree,
	(void *) M_mindustry_gen_Player_pingText_R_java_lang_String,
	(void *) M_mindustry_gen_Player_planEachable_R_mindustry_input_InputHandler$QueryEachable,
	(void *) M_mindustry_gen_Player_con_R_mindustry_net_NetConnection,
	(void *) M_mindustry_gen_Player_selectedBlock_R_mindustry_world_Block,
	(void *) M_mindustry_gen_Player_color_R_arc_graphics_Color,
	(void *) M_mindustry_gen_Player_icon_R_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_gen_Player_getPreviewPlans_R_arc_struct_Seq,
	(void *) M_mindustry_gen_Player_previewPlansAssembling_R_arc_struct_Seq,
	(void *) M_mindustry_gen_Player_previewPlansCurrent_R_arc_struct_Seq,
	(void *) M_mindustry_gen_Player_itemDepositRate_R_arc_util_Ratekeeper,
	(void *) M_mindustry_gen_Player_admin_R_boolean,
	(void *) M_mindustry_gen_Player_boosting_R_boolean,
	(void *) M_mindustry_gen_Player_dead_R_boolean,
	(void *) M_mindustry_gen_Player_displayAmmo_R_boolean,
	(void *) M_mindustry_gen_Player_isBuilder_R_boolean,
	(void *) M_mindustry_gen_Player_isPinging_R_boolean,
	(void *) M_mindustry_gen_Player_previewPlansDirty_R_boolean,
	(void *) M_mindustry_gen_Player_receivingNewPlanGroup_R_boolean,
	(void *) M_mindustry_gen_Player_shooting_R_boolean,
	(void *) M_mindustry_gen_Player_typing_R_boolean,
	(void *) M_mindustry_gen_Player_deathTimer_R_float,
	(void *) M_mindustry_gen_Player_mouseX_R_float,
	(void *) M_mindustry_gen_Player_mouseY_R_float,
	(void *) M_mindustry_gen_Player_pingTime_R_float,
	(void *) M_mindustry_gen_Player_pingX_R_float,
	(void *) M_mindustry_gen_Player_pingY_R_float,
	(void *) M_mindustry_gen_Player_textFadeTime_R_float,
	(void *) M_mindustry_gen_Player_lastPreviewPlanGroup_R_int,
	(void *) M_mindustry_gen_Player_lastPreviewPlanGroupServer_R_int,
	(void *) M_mindustry_gen_Player_selectedRotation_R_int,
	(void *) M_mindustry_gen_Player_ip_R_java_lang_String,
	(void *) M_mindustry_gen_Player_lastText_R_java_lang_String,
	(void *) M_mindustry_gen_Player_locale_R_java_lang_String,
	(void *) M_mindustry_gen_Player_name_R_java_lang_String,
	(void *) M_mindustry_gen_Player_plainName_R_java_lang_String,
	(void *) M_mindustry_gen_Player_usid_R_java_lang_String,
	(void *) M_mindustry_gen_Player_uuid_R_java_lang_String,
	(void *) M_mindustry_gen_Player_lastPreviewPlanTimestamp_R_long,
	(void *) M_mindustry_gen_Player_team_R_mindustry_game_Team,
	(void *) M_mindustry_gen_Player_getInfo_R_mindustry_net_Administration$PlayerInfo,
	(void *) M_mindustry_gen_Player_closestCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild,
	(void *) M_mindustry_gen_Player_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild,
	(void *) M_mindustry_gen_Player_admin_boolean,
	(void *) M_mindustry_gen_Player_boosting_boolean,
	(void *) M_mindustry_gen_Player_checkSpawn,
	(void *) M_mindustry_gen_Player_clearUnit,
	(void *) M_mindustry_gen_Player_color_arc_graphics_Color,
	(void *) M_mindustry_gen_Player_con_mindustry_net_NetConnection,
	(void *) M_mindustry_gen_Player_deathTimer_float,
	(void *) M_mindustry_gen_Player_drawName,
	(void *) M_mindustry_gen_Player_drawPing,
	(void *) M_mindustry_gen_Player_handlePreviewPlans_int_arc_struct_Seq,
	(void *) M_mindustry_gen_Player_itemDepositRate_arc_util_Ratekeeper,
	(void *) M_mindustry_gen_Player_justSwitchFrom_mindustry_gen_Unit,
	(void *) M_mindustry_gen_Player_justSwitchTo_mindustry_gen_Unit,
	(void *) M_mindustry_gen_Player_kick_java_lang_String,
	(void *) M_mindustry_gen_Player_kick_java_lang_String_long,
	(void *) M_mindustry_gen_Player_kick_mindustry_net_Packets$KickReason,
	(void *) M_mindustry_gen_Player_kick_mindustry_net_Packets$KickReason_long,
	(void *) M_mindustry_gen_Player_lastPreviewPlanGroup_int,
	(void *) M_mindustry_gen_Player_lastPreviewPlanGroupServer_int,
	(void *) M_mindustry_gen_Player_lastPreviewPlanTimestamp_long,
	(void *) M_mindustry_gen_Player_lastText_java_lang_String,
	(void *) M_mindustry_gen_Player_locale_java_lang_String,
	(void *) M_mindustry_gen_Player_mouseX_float,
	(void *) M_mindustry_gen_Player_mouseY_float,
	(void *) M_mindustry_gen_Player_name_java_lang_String,
	(void *) M_mindustry_gen_Player_pingText_java_lang_String,
	(void *) M_mindustry_gen_Player_pingTime_float,
	(void *) M_mindustry_gen_Player_pingX_float,
	(void *) M_mindustry_gen_Player_pingY_float,
	(void *) M_mindustry_gen_Player_planEachable_mindustry_input_InputHandler$QueryEachable,
	(void *) M_mindustry_gen_Player_previewPlanTree_arc_math_geom_QuadTree,
	(void *) M_mindustry_gen_Player_previewPlansAssembling_arc_struct_Seq,
	(void *) M_mindustry_gen_Player_previewPlansCurrent_arc_struct_Seq,
	(void *) M_mindustry_gen_Player_previewPlansDirty_boolean,
	(void *) M_mindustry_gen_Player_receivingNewPlanGroup_boolean,
	(void *) M_mindustry_gen_Player_reset,
	(void *) M_mindustry_gen_Player_selectedBlock_mindustry_world_Block,
	(void *) M_mindustry_gen_Player_selectedRotation_int,
	(void *) M_mindustry_gen_Player_sendMessage_java_lang_String,
	(void *) M_mindustry_gen_Player_sendMessage_java_lang_String_mindustry_gen_Player,
	(void *) M_mindustry_gen_Player_sendMessage_java_lang_String_mindustry_gen_Player_java_lang_String,
	(void *) M_mindustry_gen_Player_sendUnformatted_mindustry_gen_Player_java_lang_String,
	(void *) M_mindustry_gen_Player_sendUnformatted_java_lang_String,
	(void *) M_mindustry_gen_Player_shooting_boolean,
	(void *) M_mindustry_gen_Player_team_mindustry_game_Team,
	(void *) M_mindustry_gen_Player_textFadeTime_float,
	(void *) M_mindustry_gen_Player_typing_boolean,
	(void *) M_mindustry_gen_Player_lambda$bestCore$2_mindustry_world_blocks_storage_CoreBlock$CoreBuild_R_float,
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
	{ "clipSize", "()F" },
	{ "draw", "()V" },
	{ "setIndex__draw", "(I)V" },
	{ "setIndex__player", "(I)V" },
	{ "setIndex__sync", "(I)V" },
	{ "unit", "(Lmindustry/gen/Unit;)V" },
	{ "unit", "()Lmindustry/gen/Unit;" },
	{ "hit", "(Lmindustry/gen/Bullet;)V" },
	{ "isValidController", "()Z" },
	{ "isLogicControllable", "()Z" },
	{ "updateUnit", "()V" },
	{ "removed", "(Lmindustry/gen/Unit;)V" },
	{ "afterRead", "(Lmindustry/gen/Unit;)V" },
	{ "isSyncHidden", "(Lmindustry/game/Team;)Z" },
	{ "lastUpdated", "()J" },
	{ "updateSpacing", "()J" },
	{ "afterSync", "()V" },
	{ "handleSyncHidden", "()V" },
	{ "interpolate", "()V" },
	{ "lastUpdated", "(J)V" },
	{ "readSync", "(Larc/util/io/Reads;)V" },
	{ "readSyncManual", "(Ljava/nio/FloatBuffer;)V" },
	{ "snapInterpolation", "()V" },
	{ "snapSync", "()V" },
	{ "updateSpacing", "(J)V" },
	{ "writeSync", "(Larc/util/io/Writes;)V" },
	{ "writeSyncManual", "(Ljava/nio/FloatBuffer;)V" },
	{ "timer", "()Larc/util/Interval;" },
	{ "timer", "(IF)Z" },
	{ "timer", "(Larc/util/Interval;)V" },
	{ "bestCore", "()Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;" },
	{ "coloredName", "()Ljava/lang/String;" },
	{ "lastCommand", "()Lmindustry/ai/UnitCommand;" },
	{ "lastCommand", "(Lmindustry/ai/UnitCommand;)V" },
	{ "justSwitchFrom", "()Lmindustry/gen/Unit;" },
	{ "justSwitchTo", "()Lmindustry/gen/Unit;" },
	{ "previewPlanTree", "()Larc/math/geom/QuadTree;" },
	{ "pingText", "()Ljava/lang/String;" },
	{ "planEachable", "()Lmindustry/input/InputHandler$QueryEachable;" },
	{ "con", "()Lmindustry/net/NetConnection;" },
	{ "selectedBlock", "()Lmindustry/world/Block;" },
	{ "color", "()Larc/graphics/Color;" },
	{ "icon", "()Larc/graphics/g2d/TextureRegion;" },
	{ "getPreviewPlans", "()Larc/struct/Seq;" },
	{ "previewPlansAssembling", "()Larc/struct/Seq;" },
	{ "previewPlansCurrent", "()Larc/struct/Seq;" },
	{ "itemDepositRate", "()Larc/util/Ratekeeper;" },
	{ "admin", "()Z" },
	{ "boosting", "()Z" },
	{ "dead", "()Z" },
	{ "displayAmmo", "()Z" },
	{ "isBuilder", "()Z" },
	{ "isPinging", "()Z" },
	{ "previewPlansDirty", "()Z" },
	{ "receivingNewPlanGroup", "()Z" },
	{ "shooting", "()Z" },
	{ "typing", "()Z" },
	{ "deathTimer", "()F" },
	{ "mouseX", "()F" },
	{ "mouseY", "()F" },
	{ "pingTime", "()F" },
	{ "pingX", "()F" },
	{ "pingY", "()F" },
	{ "textFadeTime", "()F" },
	{ "lastPreviewPlanGroup", "()I" },
	{ "lastPreviewPlanGroupServer", "()I" },
	{ "selectedRotation", "()I" },
	{ "ip", "()Ljava/lang/String;" },
	{ "lastText", "()Ljava/lang/String;" },
	{ "locale", "()Ljava/lang/String;" },
	{ "name", "()Ljava/lang/String;" },
	{ "plainName", "()Ljava/lang/String;" },
	{ "usid", "()Ljava/lang/String;" },
	{ "uuid", "()Ljava/lang/String;" },
	{ "lastPreviewPlanTimestamp", "()J" },
	{ "team", "()Lmindustry/game/Team;" },
	{ "getInfo", "()Lmindustry/net/Administration$PlayerInfo;" },
	{ "closestCore", "()Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;" },
	{ "core", "()Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;" },
	{ "admin", "(Z)V" },
	{ "boosting", "(Z)V" },
	{ "checkSpawn", "()V" },
	{ "clearUnit", "()V" },
	{ "color", "(Larc/graphics/Color;)V" },
	{ "con", "(Lmindustry/net/NetConnection;)V" },
	{ "deathTimer", "(F)V" },
	{ "drawName", "()V" },
	{ "drawPing", "()V" },
	{ "handlePreviewPlans", "(ILarc/struct/Seq;)V" },
	{ "itemDepositRate", "(Larc/util/Ratekeeper;)V" },
	{ "justSwitchFrom", "(Lmindustry/gen/Unit;)V" },
	{ "justSwitchTo", "(Lmindustry/gen/Unit;)V" },
	{ "kick", "(Ljava/lang/String;)V" },
	{ "kick", "(Ljava/lang/String;J)V" },
	{ "kick", "(Lmindustry/net/Packets$KickReason;)V" },
	{ "kick", "(Lmindustry/net/Packets$KickReason;J)V" },
	{ "lastPreviewPlanGroup", "(I)V" },
	{ "lastPreviewPlanGroupServer", "(I)V" },
	{ "lastPreviewPlanTimestamp", "(J)V" },
	{ "lastText", "(Ljava/lang/String;)V" },
	{ "locale", "(Ljava/lang/String;)V" },
	{ "mouseX", "(F)V" },
	{ "mouseY", "(F)V" },
	{ "name", "(Ljava/lang/String;)V" },
	{ "pingText", "(Ljava/lang/String;)V" },
	{ "pingTime", "(F)V" },
	{ "pingX", "(F)V" },
	{ "pingY", "(F)V" },
	{ "planEachable", "(Lmindustry/input/InputHandler$QueryEachable;)V" },
	{ "previewPlanTree", "(Larc/math/geom/QuadTree;)V" },
	{ "previewPlansAssembling", "(Larc/struct/Seq;)V" },
	{ "previewPlansCurrent", "(Larc/struct/Seq;)V" },
	{ "previewPlansDirty", "(Z)V" },
	{ "receivingNewPlanGroup", "(Z)V" },
	{ "reset", "()V" },
	{ "selectedBlock", "(Lmindustry/world/Block;)V" },
	{ "selectedRotation", "(I)V" },
	{ "sendMessage", "(Ljava/lang/String;)V" },
	{ "sendMessage", "(Ljava/lang/String;Lmindustry/gen/Player;)V" },
	{ "sendMessage", "(Ljava/lang/String;Lmindustry/gen/Player;Ljava/lang/String;)V" },
	{ "sendUnformatted", "(Lmindustry/gen/Player;Ljava/lang/String;)V" },
	{ "sendUnformatted", "(Ljava/lang/String;)V" },
	{ "shooting", "(Z)V" },
	{ "team", "(Lmindustry/game/Team;)V" },
	{ "textFadeTime", "(F)V" },
	{ "typing", "(Z)V" },
	{ "lambda$bestCore$2", "(Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;)F" },
};

static jclass interfaces[] { &class_mindustry_gen_Drawc, &class_mindustry_gen_Entityc, &class_mindustry_gen_IndexableEntity__draw, &class_mindustry_gen_IndexableEntity__player, &class_mindustry_gen_IndexableEntity__sync, &class_mindustry_gen_Playerc, &class_mindustry_gen_Posc, &class_mindustry_gen_Syncc, &class_mindustry_gen_Timerc, };

static FieldMetadata fields[] {
	{ "deathDelay", &class_float, (intptr_t) &SF_mindustry_gen_Player_deathDelay, "F", 25 },
	{ "pingDuration", &class_float, (intptr_t) &SF_mindustry_gen_Player_pingDuration, "F", 25 },
	{ "added", &class_boolean, offsetof(mindustry_gen_Player, F_added), "Z", 132 },
	{ "admin", &class_boolean, offsetof(mindustry_gen_Player, F_admin), "Z", 1 },
	{ "boosting", &class_boolean, offsetof(mindustry_gen_Player, F_boosting), "Z", 1 },
	{ "color", &class_arc_graphics_Color, offsetof(mindustry_gen_Player, F_color), "Larc/graphics/Color;", 1 },
	{ "con", &class_mindustry_net_NetConnection, offsetof(mindustry_gen_Player, F_con), "Lmindustry/net/NetConnection;", 129 },
	{ "deathTimer", &class_float, offsetof(mindustry_gen_Player, F_deathTimer), "F", 129 },
	{ "id", &class_int, offsetof(mindustry_gen_Player, F_id), "I", 129 },
	{ "index__draw", &class_int, offsetof(mindustry_gen_Player, F_index__draw), "I", 132 },
	{ "index__player", &class_int, offsetof(mindustry_gen_Player, F_index__player), "I", 132 },
	{ "index__sync", &class_int, offsetof(mindustry_gen_Player, F_index__sync), "I", 132 },
	{ "itemDepositRate", &class_arc_util_Ratekeeper, offsetof(mindustry_gen_Player, F_itemDepositRate), "Larc/util/Ratekeeper;", 129 },
	{ "justSwitchFrom", &class_mindustry_gen_Unit, offsetof(mindustry_gen_Player, F_justSwitchFrom), "Lmindustry/gen/Unit;", 129 },
	{ "justSwitchTo", &class_mindustry_gen_Unit, offsetof(mindustry_gen_Player, F_justSwitchTo), "Lmindustry/gen/Unit;", 129 },
	{ "lastCommand", &class_mindustry_ai_UnitCommand, offsetof(mindustry_gen_Player, F_lastCommand), "Lmindustry/ai/UnitCommand;", 1 },
	{ "lastPreviewPlanGroup", &class_int, offsetof(mindustry_gen_Player, F_lastPreviewPlanGroup), "I", 129 },
	{ "lastPreviewPlanGroupServer", &class_int, offsetof(mindustry_gen_Player, F_lastPreviewPlanGroupServer), "I", 129 },
	{ "lastPreviewPlanTimestamp", &class_long, offsetof(mindustry_gen_Player, F_lastPreviewPlanTimestamp), "J", 129 },
	{ "lastReadUnit", &class_mindustry_gen_Unit, offsetof(mindustry_gen_Player, F_lastReadUnit), "Lmindustry/gen/Unit;", 132 },
	{ "lastText", &class_java_lang_String, offsetof(mindustry_gen_Player, F_lastText), "Ljava/lang/String;", 129 },
	{ "lastUpdated", &class_long, offsetof(mindustry_gen_Player, F_lastUpdated), "J", 129 },
	{ "locale", &class_java_lang_String, offsetof(mindustry_gen_Player, F_locale), "Ljava/lang/String;", 129 },
	{ "mouseX", &class_float, offsetof(mindustry_gen_Player, F_mouseX), "F", 1 },
	{ "mouseY", &class_float, offsetof(mindustry_gen_Player, F_mouseY), "F", 1 },
	{ "name", &class_java_lang_String, offsetof(mindustry_gen_Player, F_name), "Ljava/lang/String;", 1 },
	{ "pingText", &class_java_lang_String, offsetof(mindustry_gen_Player, F_pingText), "Ljava/lang/String;", 129 },
	{ "pingTime", &class_float, offsetof(mindustry_gen_Player, F_pingTime), "F", 129 },
	{ "pingX", &class_float, offsetof(mindustry_gen_Player, F_pingX), "F", 129 },
	{ "pingY", &class_float, offsetof(mindustry_gen_Player, F_pingY), "F", 129 },
	{ "planEachable", &class_mindustry_input_InputHandler$QueryEachable, offsetof(mindustry_gen_Player, F_planEachable), "Lmindustry/input/InputHandler$QueryEachable;", 129 },
	{ "previewPlanTree", &class_arc_math_geom_QuadTree, offsetof(mindustry_gen_Player, F_previewPlanTree), "Larc/math/geom/QuadTree;", 129 },
	{ "previewPlansAssembling", &class_arc_struct_Seq, offsetof(mindustry_gen_Player, F_previewPlansAssembling), "Larc/struct/Seq;", 129 },
	{ "previewPlansCurrent", &class_arc_struct_Seq, offsetof(mindustry_gen_Player, F_previewPlansCurrent), "Larc/struct/Seq;", 129 },
	{ "previewPlansDirty", &class_boolean, offsetof(mindustry_gen_Player, F_previewPlansDirty), "Z", 129 },
	{ "receivingNewPlanGroup", &class_boolean, offsetof(mindustry_gen_Player, F_receivingNewPlanGroup), "Z", 129 },
	{ "selectedBlock", &class_mindustry_world_Block, offsetof(mindustry_gen_Player, F_selectedBlock), "Lmindustry/world/Block;", 1 },
	{ "selectedRotation", &class_int, offsetof(mindustry_gen_Player, F_selectedRotation), "I", 1 },
	{ "shooting", &class_boolean, offsetof(mindustry_gen_Player, F_shooting), "Z", 1 },
	{ "team", &class_mindustry_game_Team, offsetof(mindustry_gen_Player, F_team), "Lmindustry/game/Team;", 4 },
	{ "textFadeTime", &class_float, offsetof(mindustry_gen_Player, F_textFadeTime), "F", 129 },
	{ "timer", &class_arc_util_Interval, offsetof(mindustry_gen_Player, F_timer), "Larc/util/Interval;", 129 },
	{ "typing", &class_boolean, offsetof(mindustry_gen_Player, F_typing), "Z", 1 },
	{ "unit", &class_mindustry_gen_Unit, offsetof(mindustry_gen_Player, F_unit), "Lmindustry/gen/Unit;", 4 },
	{ "updateSpacing", &class_long, offsetof(mindustry_gen_Player, F_updateSpacing), "J", 129 },
	{ "wrongReadUnits", &class_int, offsetof(mindustry_gen_Player, F_wrongReadUnits), "I", 132 },
	{ "x", &class_float, offsetof(mindustry_gen_Player, F_x), "F", 1 },
	{ "x_LAST_", &class_float, offsetof(mindustry_gen_Player, F_x_LAST_), "F", 130 },
	{ "x_TARGET_", &class_float, offsetof(mindustry_gen_Player, F_x_TARGET_), "F", 130 },
	{ "y", &class_float, offsetof(mindustry_gen_Player, F_y), "F", 1 },
	{ "y_LAST_", &class_float, offsetof(mindustry_gen_Player, F_y_LAST_), "F", 130 },
	{ "y_TARGET_", &class_float, offsetof(mindustry_gen_Player, F_y_TARGET_), "F", 130 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_gen_Player, 0, "()V", 4 },
	{ "buildOn", (intptr_t) M_mindustry_gen_Player_buildOn_R_mindustry_gen_Building, VTABLE_mindustry_gen_Player_buildOn_R_mindustry_gen_Building, "()Lmindustry/gen/Building;", 1 },
	{ "unit", (intptr_t) M_mindustry_gen_Player_unit_R_mindustry_gen_Unit, VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit, "()Lmindustry/gen/Unit;", 1 },
	{ "tileOn", (intptr_t) M_mindustry_gen_Player_tileOn_R_mindustry_world_Tile, VTABLE_mindustry_gen_Player_tileOn_R_mindustry_world_Tile, "()Lmindustry/world/Tile;", 1 },
	{ "bestCore", (intptr_t) M_mindustry_gen_Player_bestCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild, VTABLE_mindustry_gen_Player_bestCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild, "()Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;", 1 },
	{ "closestCore", (intptr_t) M_mindustry_gen_Player_closestCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild, VTABLE_mindustry_gen_Player_closestCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild, "()Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;", 1 },
	{ "core", (intptr_t) M_mindustry_gen_Player_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild, VTABLE_mindustry_gen_Player_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild, "()Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;", 1 },
	{ "justSwitchFrom", (intptr_t) M_mindustry_gen_Player_justSwitchFrom_R_mindustry_gen_Unit, VTABLE_mindustry_gen_Player_justSwitchFrom_R_mindustry_gen_Unit, "()Lmindustry/gen/Unit;", 1 },
	{ "justSwitchTo", (intptr_t) M_mindustry_gen_Player_justSwitchTo_R_mindustry_gen_Unit, VTABLE_mindustry_gen_Player_justSwitchTo_R_mindustry_gen_Unit, "()Lmindustry/gen/Unit;", 1 },
	{ "color", (intptr_t) M_mindustry_gen_Player_color_R_arc_graphics_Color, VTABLE_mindustry_gen_Player_color_R_arc_graphics_Color, "()Larc/graphics/Color;", 1 },
	{ "previewPlanTree", (intptr_t) M_mindustry_gen_Player_previewPlanTree_R_arc_math_geom_QuadTree, VTABLE_mindustry_gen_Player_previewPlanTree_R_arc_math_geom_QuadTree, "()Larc/math/geom/QuadTree;", 1 },
	{ "previewPlansAssembling", (intptr_t) M_mindustry_gen_Player_previewPlansAssembling_R_arc_struct_Seq, VTABLE_mindustry_gen_Player_previewPlansAssembling_R_arc_struct_Seq, "()Larc/struct/Seq;", 1 },
	{ "previewPlansCurrent", (intptr_t) M_mindustry_gen_Player_previewPlansCurrent_R_arc_struct_Seq, VTABLE_mindustry_gen_Player_previewPlansCurrent_R_arc_struct_Seq, "()Larc/struct/Seq;", 1 },
	{ "timer", (intptr_t) M_mindustry_gen_Player_timer_R_arc_util_Interval, VTABLE_mindustry_gen_Player_timer_R_arc_util_Interval, "()Larc/util/Interval;", 1 },
	{ "itemDepositRate", (intptr_t) M_mindustry_gen_Player_itemDepositRate_R_arc_util_Ratekeeper, VTABLE_mindustry_gen_Player_itemDepositRate_R_arc_util_Ratekeeper, "()Larc/util/Ratekeeper;", 1 },
	{ "admin", (intptr_t) M_mindustry_gen_Player_admin_R_boolean, VTABLE_mindustry_gen_Player_admin_R_boolean, "()Z", 1 },
	{ "boosting", (intptr_t) M_mindustry_gen_Player_boosting_R_boolean, VTABLE_mindustry_gen_Player_boosting_R_boolean, "()Z", 1 },
	{ "previewPlansDirty", (intptr_t) M_mindustry_gen_Player_previewPlansDirty_R_boolean, VTABLE_mindustry_gen_Player_previewPlansDirty_R_boolean, "()Z", 1 },
	{ "receivingNewPlanGroup", (intptr_t) M_mindustry_gen_Player_receivingNewPlanGroup_R_boolean, VTABLE_mindustry_gen_Player_receivingNewPlanGroup_R_boolean, "()Z", 1 },
	{ "shooting", (intptr_t) M_mindustry_gen_Player_shooting_R_boolean, VTABLE_mindustry_gen_Player_shooting_R_boolean, "()Z", 1 },
	{ "typing", (intptr_t) M_mindustry_gen_Player_typing_R_boolean, VTABLE_mindustry_gen_Player_typing_R_boolean, "()Z", 1 },
	{ "deathTimer", (intptr_t) M_mindustry_gen_Player_deathTimer_R_float, VTABLE_mindustry_gen_Player_deathTimer_R_float, "()F", 1 },
	{ "mouseX", (intptr_t) M_mindustry_gen_Player_mouseX_R_float, VTABLE_mindustry_gen_Player_mouseX_R_float, "()F", 1 },
	{ "mouseY", (intptr_t) M_mindustry_gen_Player_mouseY_R_float, VTABLE_mindustry_gen_Player_mouseY_R_float, "()F", 1 },
	{ "pingTime", (intptr_t) M_mindustry_gen_Player_pingTime_R_float, VTABLE_mindustry_gen_Player_pingTime_R_float, "()F", 1 },
	{ "pingX", (intptr_t) M_mindustry_gen_Player_pingX_R_float, VTABLE_mindustry_gen_Player_pingX_R_float, "()F", 1 },
	{ "pingY", (intptr_t) M_mindustry_gen_Player_pingY_R_float, VTABLE_mindustry_gen_Player_pingY_R_float, "()F", 1 },
	{ "textFadeTime", (intptr_t) M_mindustry_gen_Player_textFadeTime_R_float, VTABLE_mindustry_gen_Player_textFadeTime_R_float, "()F", 1 },
	{ "x", (intptr_t) M_mindustry_gen_Player_x_R_float, VTABLE_mindustry_gen_Player_x_R_float, "()F", 1 },
	{ "y", (intptr_t) M_mindustry_gen_Player_y_R_float, VTABLE_mindustry_gen_Player_y_R_float, "()F", 1 },
	{ "classId", (intptr_t) M_mindustry_gen_Player_classId_R_int, VTABLE_mindustry_gen_Player_classId_R_int, "()I", 1 },
	{ "id", (intptr_t) M_mindustry_gen_Player_id_R_int, VTABLE_mindustry_gen_Player_id_R_int, "()I", 1 },
	{ "lastPreviewPlanGroup", (intptr_t) M_mindustry_gen_Player_lastPreviewPlanGroup_R_int, VTABLE_mindustry_gen_Player_lastPreviewPlanGroup_R_int, "()I", 1 },
	{ "lastPreviewPlanGroupServer", (intptr_t) M_mindustry_gen_Player_lastPreviewPlanGroupServer_R_int, VTABLE_mindustry_gen_Player_lastPreviewPlanGroupServer_R_int, "()I", 1 },
	{ "selectedRotation", (intptr_t) M_mindustry_gen_Player_selectedRotation_R_int, VTABLE_mindustry_gen_Player_selectedRotation_R_int, "()I", 1 },
	{ "lastText", (intptr_t) M_mindustry_gen_Player_lastText_R_java_lang_String, VTABLE_mindustry_gen_Player_lastText_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "locale", (intptr_t) M_mindustry_gen_Player_locale_R_java_lang_String, VTABLE_mindustry_gen_Player_locale_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "name", (intptr_t) M_mindustry_gen_Player_name_R_java_lang_String, VTABLE_mindustry_gen_Player_name_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "pingText", (intptr_t) M_mindustry_gen_Player_pingText_R_java_lang_String, VTABLE_mindustry_gen_Player_pingText_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "toString", (intptr_t) M_mindustry_gen_Player_toString_R_java_lang_String, VTABLE_mindustry_gen_Player_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "lastPreviewPlanTimestamp", (intptr_t) M_mindustry_gen_Player_lastPreviewPlanTimestamp_R_long, VTABLE_mindustry_gen_Player_lastPreviewPlanTimestamp_R_long, "()J", 1 },
	{ "lastUpdated", (intptr_t) M_mindustry_gen_Player_lastUpdated_R_long, VTABLE_mindustry_gen_Player_lastUpdated_R_long, "()J", 1 },
	{ "updateSpacing", (intptr_t) M_mindustry_gen_Player_updateSpacing_R_long, VTABLE_mindustry_gen_Player_updateSpacing_R_long, "()J", 1 },
	{ "lastCommand", (intptr_t) M_mindustry_gen_Player_lastCommand_R_mindustry_ai_UnitCommand, VTABLE_mindustry_gen_Player_lastCommand_R_mindustry_ai_UnitCommand, "()Lmindustry/ai/UnitCommand;", 1 },
	{ "team", (intptr_t) M_mindustry_gen_Player_team_R_mindustry_game_Team, VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team, "()Lmindustry/game/Team;", 1 },
	{ "planEachable", (intptr_t) M_mindustry_gen_Player_planEachable_R_mindustry_input_InputHandler$QueryEachable, VTABLE_mindustry_gen_Player_planEachable_R_mindustry_input_InputHandler$QueryEachable, "()Lmindustry/input/InputHandler$QueryEachable;", 1 },
	{ "con", (intptr_t) M_mindustry_gen_Player_con_R_mindustry_net_NetConnection, VTABLE_mindustry_gen_Player_con_R_mindustry_net_NetConnection, "()Lmindustry/net/NetConnection;", 1 },
	{ "selectedBlock", (intptr_t) M_mindustry_gen_Player_selectedBlock_R_mindustry_world_Block, VTABLE_mindustry_gen_Player_selectedBlock_R_mindustry_world_Block, "()Lmindustry/world/Block;", 1 },
	{ "admin", (intptr_t) M_mindustry_gen_Player_admin_boolean, VTABLE_mindustry_gen_Player_admin_boolean, "(Z)V", 1 },
	{ "boosting", (intptr_t) M_mindustry_gen_Player_boosting_boolean, VTABLE_mindustry_gen_Player_boosting_boolean, "(Z)V", 1 },
	{ "color", (intptr_t) M_mindustry_gen_Player_color_arc_graphics_Color, VTABLE_mindustry_gen_Player_color_arc_graphics_Color, "(Larc/graphics/Color;)V", 1 },
	{ "con", (intptr_t) M_mindustry_gen_Player_con_mindustry_net_NetConnection, VTABLE_mindustry_gen_Player_con_mindustry_net_NetConnection, "(Lmindustry/net/NetConnection;)V", 1 },
	{ "deathTimer", (intptr_t) M_mindustry_gen_Player_deathTimer_float, VTABLE_mindustry_gen_Player_deathTimer_float, "(F)V", 1 },
	{ "id", (intptr_t) M_mindustry_gen_Player_id_int, VTABLE_mindustry_gen_Player_id_int, "(I)V", 1 },
	{ "itemDepositRate", (intptr_t) M_mindustry_gen_Player_itemDepositRate_arc_util_Ratekeeper, VTABLE_mindustry_gen_Player_itemDepositRate_arc_util_Ratekeeper, "(Larc/util/Ratekeeper;)V", 1 },
	{ "justSwitchFrom", (intptr_t) M_mindustry_gen_Player_justSwitchFrom_mindustry_gen_Unit, VTABLE_mindustry_gen_Player_justSwitchFrom_mindustry_gen_Unit, "(Lmindustry/gen/Unit;)V", 1 },
	{ "justSwitchTo", (intptr_t) M_mindustry_gen_Player_justSwitchTo_mindustry_gen_Unit, VTABLE_mindustry_gen_Player_justSwitchTo_mindustry_gen_Unit, "(Lmindustry/gen/Unit;)V", 1 },
	{ "lastCommand", (intptr_t) M_mindustry_gen_Player_lastCommand_mindustry_ai_UnitCommand, VTABLE_mindustry_gen_Player_lastCommand_mindustry_ai_UnitCommand, "(Lmindustry/ai/UnitCommand;)V", 1 },
	{ "lastPreviewPlanGroup", (intptr_t) M_mindustry_gen_Player_lastPreviewPlanGroup_int, VTABLE_mindustry_gen_Player_lastPreviewPlanGroup_int, "(I)V", 1 },
	{ "lastPreviewPlanGroupServer", (intptr_t) M_mindustry_gen_Player_lastPreviewPlanGroupServer_int, VTABLE_mindustry_gen_Player_lastPreviewPlanGroupServer_int, "(I)V", 1 },
	{ "lastPreviewPlanTimestamp", (intptr_t) M_mindustry_gen_Player_lastPreviewPlanTimestamp_long, VTABLE_mindustry_gen_Player_lastPreviewPlanTimestamp_long, "(J)V", 1 },
	{ "lastText", (intptr_t) M_mindustry_gen_Player_lastText_java_lang_String, VTABLE_mindustry_gen_Player_lastText_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "lastUpdated", (intptr_t) M_mindustry_gen_Player_lastUpdated_long, VTABLE_mindustry_gen_Player_lastUpdated_long, "(J)V", 1 },
	{ "locale", (intptr_t) M_mindustry_gen_Player_locale_java_lang_String, VTABLE_mindustry_gen_Player_locale_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "mouseX", (intptr_t) M_mindustry_gen_Player_mouseX_float, VTABLE_mindustry_gen_Player_mouseX_float, "(F)V", 1 },
	{ "mouseY", (intptr_t) M_mindustry_gen_Player_mouseY_float, VTABLE_mindustry_gen_Player_mouseY_float, "(F)V", 1 },
	{ "name", (intptr_t) M_mindustry_gen_Player_name_java_lang_String, VTABLE_mindustry_gen_Player_name_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "pingText", (intptr_t) M_mindustry_gen_Player_pingText_java_lang_String, VTABLE_mindustry_gen_Player_pingText_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "pingTime", (intptr_t) M_mindustry_gen_Player_pingTime_float, VTABLE_mindustry_gen_Player_pingTime_float, "(F)V", 1 },
	{ "pingX", (intptr_t) M_mindustry_gen_Player_pingX_float, VTABLE_mindustry_gen_Player_pingX_float, "(F)V", 1 },
	{ "pingY", (intptr_t) M_mindustry_gen_Player_pingY_float, VTABLE_mindustry_gen_Player_pingY_float, "(F)V", 1 },
	{ "planEachable", (intptr_t) M_mindustry_gen_Player_planEachable_mindustry_input_InputHandler$QueryEachable, VTABLE_mindustry_gen_Player_planEachable_mindustry_input_InputHandler$QueryEachable, "(Lmindustry/input/InputHandler$QueryEachable;)V", 1 },
	{ "previewPlanTree", (intptr_t) M_mindustry_gen_Player_previewPlanTree_arc_math_geom_QuadTree, VTABLE_mindustry_gen_Player_previewPlanTree_arc_math_geom_QuadTree, "(Larc/math/geom/QuadTree;)V", 1 },
	{ "previewPlansAssembling", (intptr_t) M_mindustry_gen_Player_previewPlansAssembling_arc_struct_Seq, VTABLE_mindustry_gen_Player_previewPlansAssembling_arc_struct_Seq, "(Larc/struct/Seq;)V", 1 },
	{ "previewPlansCurrent", (intptr_t) M_mindustry_gen_Player_previewPlansCurrent_arc_struct_Seq, VTABLE_mindustry_gen_Player_previewPlansCurrent_arc_struct_Seq, "(Larc/struct/Seq;)V", 1 },
	{ "previewPlansDirty", (intptr_t) M_mindustry_gen_Player_previewPlansDirty_boolean, VTABLE_mindustry_gen_Player_previewPlansDirty_boolean, "(Z)V", 1 },
	{ "receivingNewPlanGroup", (intptr_t) M_mindustry_gen_Player_receivingNewPlanGroup_boolean, VTABLE_mindustry_gen_Player_receivingNewPlanGroup_boolean, "(Z)V", 1 },
	{ "selectedBlock", (intptr_t) M_mindustry_gen_Player_selectedBlock_mindustry_world_Block, VTABLE_mindustry_gen_Player_selectedBlock_mindustry_world_Block, "(Lmindustry/world/Block;)V", 1 },
	{ "selectedRotation", (intptr_t) M_mindustry_gen_Player_selectedRotation_int, VTABLE_mindustry_gen_Player_selectedRotation_int, "(I)V", 1 },
	{ "setIndex__draw", (intptr_t) M_mindustry_gen_Player_setIndex__draw_int, VTABLE_mindustry_gen_Player_setIndex__draw_int, "(I)V", 1 },
	{ "setIndex__player", (intptr_t) M_mindustry_gen_Player_setIndex__player_int, VTABLE_mindustry_gen_Player_setIndex__player_int, "(I)V", 1 },
	{ "setIndex__sync", (intptr_t) M_mindustry_gen_Player_setIndex__sync_int, VTABLE_mindustry_gen_Player_setIndex__sync_int, "(I)V", 1 },
	{ "shooting", (intptr_t) M_mindustry_gen_Player_shooting_boolean, VTABLE_mindustry_gen_Player_shooting_boolean, "(Z)V", 1 },
	{ "textFadeTime", (intptr_t) M_mindustry_gen_Player_textFadeTime_float, VTABLE_mindustry_gen_Player_textFadeTime_float, "(F)V", 1 },
	{ "timer", (intptr_t) M_mindustry_gen_Player_timer_arc_util_Interval, VTABLE_mindustry_gen_Player_timer_arc_util_Interval, "(Larc/util/Interval;)V", 1 },
	{ "typing", (intptr_t) M_mindustry_gen_Player_typing_boolean, VTABLE_mindustry_gen_Player_typing_boolean, "(Z)V", 1 },
	{ "updateSpacing", (intptr_t) M_mindustry_gen_Player_updateSpacing_long, VTABLE_mindustry_gen_Player_updateSpacing_long, "(J)V", 1 },
	{ "x", (intptr_t) M_mindustry_gen_Player_x_float, VTABLE_mindustry_gen_Player_x_float, "(F)V", 1 },
	{ "y", (intptr_t) M_mindustry_gen_Player_y_float, VTABLE_mindustry_gen_Player_y_float, "(F)V", 1 },
	{ "read", (intptr_t) M_mindustry_gen_Player_read_arc_util_io_Reads, VTABLE_mindustry_gen_Player_read_arc_util_io_Reads, "(Larc/util/io/Reads;)V", 1 },
	{ "write", (intptr_t) M_mindustry_gen_Player_write_arc_util_io_Writes, VTABLE_mindustry_gen_Player_write_arc_util_io_Writes, "(Larc/util/io/Writes;)V", 1 },
	{ "self", (intptr_t) M_mindustry_gen_Player_self_R_mindustry_gen_Entityc, VTABLE_mindustry_gen_Player_self_R_mindustry_gen_Entityc, "()Lmindustry/gen/Entityc;", 1 },
	{ "as", (intptr_t) M_mindustry_gen_Player_as_R_java_lang_Object, VTABLE_mindustry_gen_Player_as_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "icon", (intptr_t) M_mindustry_gen_Player_icon_R_arc_graphics_g2d_TextureRegion, VTABLE_mindustry_gen_Player_icon_R_arc_graphics_g2d_TextureRegion, "()Larc/graphics/g2d/TextureRegion;", 1 },
	{ "getPreviewPlans", (intptr_t) M_mindustry_gen_Player_getPreviewPlans_R_arc_struct_Seq, VTABLE_mindustry_gen_Player_getPreviewPlans_R_arc_struct_Seq, "()Larc/struct/Seq;", 1 },
	{ "dead", (intptr_t) M_mindustry_gen_Player_dead_R_boolean, VTABLE_mindustry_gen_Player_dead_R_boolean, "()Z", 1 },
	{ "displayAmmo", (intptr_t) M_mindustry_gen_Player_displayAmmo_R_boolean, VTABLE_mindustry_gen_Player_displayAmmo_R_boolean, "()Z", 1 },
	{ "isAdded", (intptr_t) M_mindustry_gen_Player_isAdded_R_boolean, VTABLE_mindustry_gen_Player_isAdded_R_boolean, "()Z", 1 },
	{ "isBuilder", (intptr_t) M_mindustry_gen_Player_isBuilder_R_boolean, VTABLE_mindustry_gen_Player_isBuilder_R_boolean, "()Z", 1 },
	{ "isLocal", (intptr_t) M_mindustry_gen_Player_isLocal_R_boolean, VTABLE_mindustry_gen_Player_isLocal_R_boolean, "()Z", 1 },
	{ "isLogicControllable", (intptr_t) M_mindustry_gen_Player_isLogicControllable_R_boolean, VTABLE_mindustry_gen_Player_isLogicControllable_R_boolean, "()Z", 1 },
	{ "isPinging", (intptr_t) M_mindustry_gen_Player_isPinging_R_boolean, VTABLE_mindustry_gen_Player_isPinging_R_boolean, "()Z", 1 },
	{ "isRemote", (intptr_t) M_mindustry_gen_Player_isRemote_R_boolean, VTABLE_mindustry_gen_Player_isRemote_R_boolean, "()Z", 1 },
	{ "isSyncHidden", (intptr_t) M_mindustry_gen_Player_isSyncHidden_mindustry_game_Team_R_boolean, VTABLE_mindustry_gen_Player_isSyncHidden_mindustry_game_Team_R_boolean, "(Lmindustry/game/Team;)Z", 1 },
	{ "isValidController", (intptr_t) M_mindustry_gen_Player_isValidController_R_boolean, VTABLE_mindustry_gen_Player_isValidController_R_boolean, "()Z", 1 },
	{ "onSolid", (intptr_t) M_mindustry_gen_Player_onSolid_R_boolean, VTABLE_mindustry_gen_Player_onSolid_R_boolean, "()Z", 1 },
	{ "serialize", (intptr_t) M_mindustry_gen_Player_serialize_R_boolean, VTABLE_mindustry_gen_Player_serialize_R_boolean, "()Z", 1 },
	{ "timer", (intptr_t) M_mindustry_gen_Player_timer_int_float_R_boolean, VTABLE_mindustry_gen_Player_timer_int_float_R_boolean, "(IF)Z", 1 },
	{ "clipSize", (intptr_t) M_mindustry_gen_Player_clipSize_R_float, VTABLE_mindustry_gen_Player_clipSize_R_float, "()F", 1 },
	{ "getX", (intptr_t) M_mindustry_gen_Player_getX_R_float, VTABLE_mindustry_gen_Player_getX_R_float, "()F", 1 },
	{ "getY", (intptr_t) M_mindustry_gen_Player_getY_R_float, VTABLE_mindustry_gen_Player_getY_R_float, "()F", 1 },
	{ "tileX", (intptr_t) M_mindustry_gen_Player_tileX_R_int, VTABLE_mindustry_gen_Player_tileX_R_int, "()I", 1 },
	{ "tileY", (intptr_t) M_mindustry_gen_Player_tileY_R_int, VTABLE_mindustry_gen_Player_tileY_R_int, "()I", 1 },
	{ "coloredName", (intptr_t) M_mindustry_gen_Player_coloredName_R_java_lang_String, VTABLE_mindustry_gen_Player_coloredName_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "ip", (intptr_t) M_mindustry_gen_Player_ip_R_java_lang_String, VTABLE_mindustry_gen_Player_ip_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "plainName", (intptr_t) M_mindustry_gen_Player_plainName_R_java_lang_String, VTABLE_mindustry_gen_Player_plainName_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "usid", (intptr_t) M_mindustry_gen_Player_usid_R_java_lang_String, VTABLE_mindustry_gen_Player_usid_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "uuid", (intptr_t) M_mindustry_gen_Player_uuid_R_java_lang_String, VTABLE_mindustry_gen_Player_uuid_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "getInfo", (intptr_t) M_mindustry_gen_Player_getInfo_R_mindustry_net_Administration$PlayerInfo, VTABLE_mindustry_gen_Player_getInfo_R_mindustry_net_Administration$PlayerInfo, "()Lmindustry/net/Administration$PlayerInfo;", 1 },
	{ "blockOn", (intptr_t) M_mindustry_gen_Player_blockOn_R_mindustry_world_Block, VTABLE_mindustry_gen_Player_blockOn_R_mindustry_world_Block, "()Lmindustry/world/Block;", 1 },
	{ "floorOn", (intptr_t) M_mindustry_gen_Player_floorOn_R_mindustry_world_blocks_environment_Floor, VTABLE_mindustry_gen_Player_floorOn_R_mindustry_world_blocks_environment_Floor, "()Lmindustry/world/blocks/environment/Floor;", 1 },
	{ "create", (intptr_t) SM_mindustry_gen_Player_create_R_mindustry_gen_Player, 0, "()Lmindustry/gen/Player;", 9 },
	{ "add", (intptr_t) M_mindustry_gen_Player_add, VTABLE_mindustry_gen_Player_add, "()V", 1 },
	{ "afterRead", (intptr_t) M_mindustry_gen_Player_afterRead, VTABLE_mindustry_gen_Player_afterRead, "()V", 1 },
	{ "afterReadAll", (intptr_t) M_mindustry_gen_Player_afterReadAll, VTABLE_mindustry_gen_Player_afterReadAll, "()V", 1 },
	{ "afterSync", (intptr_t) M_mindustry_gen_Player_afterSync, VTABLE_mindustry_gen_Player_afterSync, "()V", 1 },
	{ "beforeWrite", (intptr_t) M_mindustry_gen_Player_beforeWrite, VTABLE_mindustry_gen_Player_beforeWrite, "()V", 1 },
	{ "checkSpawn", (intptr_t) M_mindustry_gen_Player_checkSpawn, VTABLE_mindustry_gen_Player_checkSpawn, "()V", 1 },
	{ "clearUnit", (intptr_t) M_mindustry_gen_Player_clearUnit, VTABLE_mindustry_gen_Player_clearUnit, "()V", 1 },
	{ "draw", (intptr_t) M_mindustry_gen_Player_draw, VTABLE_mindustry_gen_Player_draw, "()V", 1 },
	{ "drawName", (intptr_t) M_mindustry_gen_Player_drawName, VTABLE_mindustry_gen_Player_drawName, "()V", 1 },
	{ "drawPing", (intptr_t) M_mindustry_gen_Player_drawPing, VTABLE_mindustry_gen_Player_drawPing, "()V", 1 },
	{ "handlePreviewPlans", (intptr_t) M_mindustry_gen_Player_handlePreviewPlans_int_arc_struct_Seq, VTABLE_mindustry_gen_Player_handlePreviewPlans_int_arc_struct_Seq, "(ILarc/struct/Seq;)V", 1 },
	{ "handleSyncHidden", (intptr_t) M_mindustry_gen_Player_handleSyncHidden, VTABLE_mindustry_gen_Player_handleSyncHidden, "()V", 1 },
	{ "interpolate", (intptr_t) M_mindustry_gen_Player_interpolate, VTABLE_mindustry_gen_Player_interpolate, "()V", 1 },
	{ "kick", (intptr_t) M_mindustry_gen_Player_kick_java_lang_String, VTABLE_mindustry_gen_Player_kick_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "kick", (intptr_t) M_mindustry_gen_Player_kick_java_lang_String_long, VTABLE_mindustry_gen_Player_kick_java_lang_String_long, "(Ljava/lang/String;J)V", 1 },
	{ "kick", (intptr_t) M_mindustry_gen_Player_kick_mindustry_net_Packets$KickReason, VTABLE_mindustry_gen_Player_kick_mindustry_net_Packets$KickReason, "(Lmindustry/net/Packets$KickReason;)V", 1 },
	{ "kick", (intptr_t) M_mindustry_gen_Player_kick_mindustry_net_Packets$KickReason_long, VTABLE_mindustry_gen_Player_kick_mindustry_net_Packets$KickReason_long, "(Lmindustry/net/Packets$KickReason;J)V", 1 },
	{ "readSync", (intptr_t) M_mindustry_gen_Player_readSync_arc_util_io_Reads, VTABLE_mindustry_gen_Player_readSync_arc_util_io_Reads, "(Larc/util/io/Reads;)V", 1 },
	{ "readSyncManual", (intptr_t) M_mindustry_gen_Player_readSyncManual_java_nio_FloatBuffer, VTABLE_mindustry_gen_Player_readSyncManual_java_nio_FloatBuffer, "(Ljava/nio/FloatBuffer;)V", 1 },
	{ "remove", (intptr_t) M_mindustry_gen_Player_remove, VTABLE_mindustry_gen_Player_remove, "()V", 1 },
	{ "reset", (intptr_t) M_mindustry_gen_Player_reset, VTABLE_mindustry_gen_Player_reset, "()V", 1 },
	{ "sendMessage", (intptr_t) M_mindustry_gen_Player_sendMessage_java_lang_String, VTABLE_mindustry_gen_Player_sendMessage_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "sendMessage", (intptr_t) M_mindustry_gen_Player_sendMessage_java_lang_String_mindustry_gen_Player, VTABLE_mindustry_gen_Player_sendMessage_java_lang_String_mindustry_gen_Player, "(Ljava/lang/String;Lmindustry/gen/Player;)V", 1 },
	{ "sendMessage", (intptr_t) M_mindustry_gen_Player_sendMessage_java_lang_String_mindustry_gen_Player_java_lang_String, VTABLE_mindustry_gen_Player_sendMessage_java_lang_String_mindustry_gen_Player_java_lang_String, "(Ljava/lang/String;Lmindustry/gen/Player;Ljava/lang/String;)V", 1 },
	{ "sendUnformatted", (intptr_t) M_mindustry_gen_Player_sendUnformatted_mindustry_gen_Player_java_lang_String, VTABLE_mindustry_gen_Player_sendUnformatted_mindustry_gen_Player_java_lang_String, "(Lmindustry/gen/Player;Ljava/lang/String;)V", 1 },
	{ "sendUnformatted", (intptr_t) M_mindustry_gen_Player_sendUnformatted_java_lang_String, VTABLE_mindustry_gen_Player_sendUnformatted_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "set", (intptr_t) M_mindustry_gen_Player_set_arc_math_geom_Position, VTABLE_mindustry_gen_Player_set_arc_math_geom_Position, "(Larc/math/geom/Position;)V", 1 },
	{ "set", (intptr_t) M_mindustry_gen_Player_set_float_float, VTABLE_mindustry_gen_Player_set_float_float, "(FF)V", 1 },
	{ "snapInterpolation", (intptr_t) M_mindustry_gen_Player_snapInterpolation, VTABLE_mindustry_gen_Player_snapInterpolation, "()V", 1 },
	{ "snapSync", (intptr_t) M_mindustry_gen_Player_snapSync, VTABLE_mindustry_gen_Player_snapSync, "()V", 1 },
	{ "team", (intptr_t) M_mindustry_gen_Player_team_mindustry_game_Team, VTABLE_mindustry_gen_Player_team_mindustry_game_Team, "(Lmindustry/game/Team;)V", 1 },
	{ "trns", (intptr_t) M_mindustry_gen_Player_trns_arc_math_geom_Position, VTABLE_mindustry_gen_Player_trns_arc_math_geom_Position, "(Larc/math/geom/Position;)V", 1 },
	{ "trns", (intptr_t) M_mindustry_gen_Player_trns_float_float, VTABLE_mindustry_gen_Player_trns_float_float, "(FF)V", 1 },
	{ "unit", (intptr_t) M_mindustry_gen_Player_unit_mindustry_gen_Unit, VTABLE_mindustry_gen_Player_unit_mindustry_gen_Unit, "(Lmindustry/gen/Unit;)V", 1 },
	{ "update", (intptr_t) M_mindustry_gen_Player_update, VTABLE_mindustry_gen_Player_update, "()V", 1 },
	{ "writeSync", (intptr_t) M_mindustry_gen_Player_writeSync_arc_util_io_Writes, VTABLE_mindustry_gen_Player_writeSync_arc_util_io_Writes, "(Larc/util/io/Writes;)V", 1 },
	{ "writeSyncManual", (intptr_t) M_mindustry_gen_Player_writeSyncManual_java_nio_FloatBuffer, VTABLE_mindustry_gen_Player_writeSyncManual_java_nio_FloatBuffer, "(Ljava/nio/FloatBuffer;)V", 1 },
	{ "lambda$bestCore$2", (intptr_t) M_mindustry_gen_Player_lambda$bestCore$2_mindustry_world_blocks_storage_CoreBlock$CoreBuild_R_float, VTABLE_mindustry_gen_Player_lambda$bestCore$2_mindustry_world_blocks_storage_CoreBlock$CoreBuild_R_float, "(Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;)F", 4098 },
	{ "lambda$bestCore$1", (intptr_t) SM_mindustry_gen_Player_lambda$bestCore$1_mindustry_world_blocks_storage_CoreBlock$CoreBuild_R_int, 0, "(Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;)I", 4106 },
	{ "lambda$bestCore$0", (intptr_t) SM_mindustry_gen_Player_lambda$bestCore$0_arc_struct_Seq_mindustry_world_blocks_storage_CoreBlock$CoreBuild_R_boolean, 0, "(Larc/struct/Seq;Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;)Z", 4106 },
};

Class class_mindustry_gen_Player{
		.nativeName = (intptr_t) "mindustry/gen/Player",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_gen_Player),
		.classVtable = (intptr_t) vtable_mindustry_gen_Player,
		.staticInitializer = (intptr_t) clinit_mindustry_gen_Player,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_gen_Player,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 9,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 52,
		.nativeFields = (intptr_t) fields,
		.methodCount = 162,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 180,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_gen_Player = registerClass(&class_mindustry_gen_Player);

}
