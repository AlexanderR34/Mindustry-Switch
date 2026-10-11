#include "mindustry/entities/comp/PlayerComp.h"
#include "mindustry/entities/comp/PlayerComp_invoke_arc_func_Intf_0.h"
#include "arc/func/Prov.h"
#include "arc/graphics/g2d/Font.h"
#include "arc/Events.h"
#include "arc/math/geom/Rect.h"
#include "arc/graphics/Color.h"
#include "java/lang/reflect/Constructor.h"
#include "arc/graphics/g2d/Draw.h"
#include "mindustry/core/Renderer.h"
#include "arc/util/pooling/Pools.h"
#include "mindustry/gen/Entityc.h"
#include "arc/func/Intf.h"
#include "arc/util/Tmp.h"
#include "mindustry/core/NetServer_ChatFormatter.h"
#include "arc/struct/Seq.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/entities/units/BuildPlan.h"
#include "mindustry/input/InputHandler_QueryEachable.h"
#include "arc/Settings.h"
#include "mindustry/gen/Healthc.h"
#include "arc/math/geom/Position.h"
#include "arc/func/Boolf.h"
#include "mindustry/entities/comp/PlayerComp.h"
#include "arc/math/Mathf.h"
#include "arc/func/Floatf.h"
#include "java/lang/reflect/Field.h"
#include "arc/Core.h"
#include "mindustry/gen/Unit.h"
#include "arc/math/Interp.h"
#include "arc/util/Structs.h"
#include "arc/math/geom/QuadTree.h"
#include "mindustry/entities/comp/PlayerComp_invoke_arc_func_Prov_0.h"
#include "arc/util/Time.h"
#include "arc/math/Interp_PowIn.h"
#include "mindustry/gen/Weaponsc.h"
#include "arc/util/Nullable.h"
#include "mindustry/entities/units/UnitController.h"
#include "mindustry/net/Packets_KickReason.h"
#include "mindustry/gen/Posc.h"
#include "java/lang/Object.h"
#include "mindustry/gen/Builderc.h"
#include "mindustry/gen/BlockUnitc.h"
#include "arc/graphics/Camera.h"
#include "mindustry/world/blocks/storage/CoreBlock.h"
#include "mindustry/net/Administration_PlayerInfo.h"
#include "mindustry/net/Net.h"
#include "mindustry/world/Block.h"
#include "arc/scene/style/TextureRegionDrawable.h"
#include "mindustry/game/Rules.h"
#include "mindustry/world/blocks/storage/CoreBlock_CoreBuild.h"
#include "mindustry/gen/Unitc.h"
#include "arc/graphics/g2d/Fill.h"
#include "java/lang/String.h"
#include "java/util/Comparator.h"
#include "mindustry/gen/Syncc.h"
#include "mindustry/core/Control.h"
#include "mindustry/net/Administration.h"
#include "mindustry/content/UnitTypes.h"
#include "mindustry/net/NetConnection.h"
#include "arc/scene/ui/layout/Scl.h"
#include "java/lang/Math.h"
#include "arc/graphics/g2d/GlyphLayout.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "mindustry/gen/Teamc.h"
#include "mindustry/gen/Icon.h"
#include "arc/graphics/g2d/Font_FontData.h"
#include "mindustry/ui/fragments/ChatFragment.h"
#include "java/lang/annotation/Annotation.h"
#include "java/lang/IllegalArgumentException.h"
#include "mindustry/ai/types/CommandAI.h"
#include "mindustry/ai/UnitCommand.h"
#include "arc/math/Interp_PowOut.h"
#include "mindustry/type/UnitType.h"
#include "mindustry/core/UI.h"
#include "java/lang/CharSequence.h"
#include "mindustry/ui/Fonts.h"
#include "arc/util/Strings.h"
#include "mindustry/game/Teams.h"
#include "mindustry/gen/Player.h"
#include "mindustry/game/EventType_UnitChangeEvent.h"
#include "mindustry/graphics/Drawf.h"
#include "mindustry/core/NetServer.h"
#include "mindustry/gen/Drawc.h"
#include "mindustry/entities/comp/PlayerComp_invoke_arc_func_Boolf_0.h"
#include "mindustry/entities/comp/PlayerComp_invoke_arc_func_Floatf_0.h"
#include "arc/util/Ratekeeper.h"
#include "mindustry/game/Team.h"
#include "java/lang/Class.h"
#include "mindustry/Vars.h"
#include "mindustry/core/GameState.h"
#include "mindustry/input/InputHandler.h"
#include "mindustry/gen/Call.h"
#include "mindustry/gen/Timerc.h"

extern "C" {

jfloat SF_mindustry_entities_comp_PlayerComp_deathDelay;
jfloat SF_mindustry_entities_comp_PlayerComp_pingDuration;

void mark_mindustry_entities_comp_PlayerComp(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_entities_comp_PlayerComp *) object;
	if (self->F_unit)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_unit)->clazz)->markFunction)((jobject) self->F_unit, mark, depth + 1);
	if (self->F_con)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_con)->clazz)->markFunction)((jobject) self->F_con, mark, depth + 1);
	if (self->F_team)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_team)->clazz)->markFunction)((jobject) self->F_team, mark, depth + 1);
	if (self->F_selectedBlock)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_selectedBlock)->clazz)->markFunction)((jobject) self->F_selectedBlock, mark, depth + 1);
	if (self->F_lastCommand)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lastCommand)->clazz)->markFunction)((jobject) self->F_lastCommand, mark, depth + 1);
	if (self->F_name)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_name)->clazz)->markFunction)((jobject) self->F_name, mark, depth + 1);
	if (self->F_color)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_color)->clazz)->markFunction)((jobject) self->F_color, mark, depth + 1);
	if (self->F_locale)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_locale)->clazz)->markFunction)((jobject) self->F_locale, mark, depth + 1);
	if (self->F_lastText)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lastText)->clazz)->markFunction)((jobject) self->F_lastText, mark, depth + 1);
	if (self->F_itemDepositRate)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_itemDepositRate)->clazz)->markFunction)((jobject) self->F_itemDepositRate, mark, depth + 1);
	if (self->F_pingText)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_pingText)->clazz)->markFunction)((jobject) self->F_pingText, mark, depth + 1);
	if (self->F_lastReadUnit)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lastReadUnit)->clazz)->markFunction)((jobject) self->F_lastReadUnit, mark, depth + 1);
	if (self->F_justSwitchFrom)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_justSwitchFrom)->clazz)->markFunction)((jobject) self->F_justSwitchFrom, mark, depth + 1);
	if (self->F_justSwitchTo)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_justSwitchTo)->clazz)->markFunction)((jobject) self->F_justSwitchTo, mark, depth + 1);
	if (self->F_previewPlansCurrent)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_previewPlansCurrent)->clazz)->markFunction)((jobject) self->F_previewPlansCurrent, mark, depth + 1);
	if (self->F_previewPlansAssembling)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_previewPlansAssembling)->clazz)->markFunction)((jobject) self->F_previewPlansAssembling, mark, depth + 1);
	if (self->F_previewPlanTree)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_previewPlanTree)->clazz)->markFunction)((jobject) self->F_previewPlanTree, mark, depth + 1);
	if (self->F_planEachable)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_planEachable)->clazz)->markFunction)((jobject) self->F_planEachable, mark, depth + 1);
}

void clinit_mindustry_entities_comp_PlayerComp(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_mindustry_entities_comp_PlayerComp_deathDelay = jfloat(60.0f);
	SF_mindustry_entities_comp_PlayerComp_pingDuration = jfloat(1200.0f);
}

void init_mindustry_entities_comp_PlayerComp(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/PlayerComp:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_comp_PlayerComp(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(35);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(43);
	sp[0].o = frame[0].o;
	clinit_mindustry_game_Team(ctx);
	sp[1].o = (jobject)SF_mindustry_game_Team_sharded;
	((mindustry_entities_comp_PlayerComp *) NULL_CHECK(sp[0].o))->F_team = (jref) sp[1].o;
	LINE_NUMBER(51);
	((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_name = (jref) (((jobject) createStringLiteral(ctx, u8"frog"_j)));
	LINE_NUMBER(52);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_Color);
	init_arc_graphics_Color(ctx, sp[1].o);
	((mindustry_entities_comp_PlayerComp *) NULL_CHECK(sp[0].o))->F_color = (jref) sp[1].o;
	LINE_NUMBER(54);
	((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_locale = (jref) (((jobject) createStringLiteral(ctx, u8"en"_j)));
	LINE_NUMBER(56);
	((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_lastText = (jref) (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(58);
	sp[0].o = frame[0].o;
	clinit_arc_util_Ratekeeper(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_util_Ratekeeper);
	init_arc_util_Ratekeeper(ctx, sp[1].o);
	((mindustry_entities_comp_PlayerComp *) NULL_CHECK(sp[0].o))->F_itemDepositRate = (jref) sp[1].o;
	LINE_NUMBER(66);
	((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_lastPreviewPlanGroup = (jint(-1));
	((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_lastPreviewPlanGroupServer = (jint(-1));
	LINE_NUMBER(69);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq_java_lang_Class(ctx, sp[1].o, (((jobject) &class_mindustry_entities_units_BuildPlan)));
	((mindustry_entities_comp_PlayerComp *) NULL_CHECK(sp[0].o))->F_previewPlansCurrent = (jref) sp[1].o;
	LINE_NUMBER(70);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq_java_lang_Class(ctx, sp[1].o, (((jobject) &class_mindustry_entities_units_BuildPlan)));
	((mindustry_entities_comp_PlayerComp *) NULL_CHECK(sp[0].o))->F_previewPlansAssembling = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_entities_comp_PlayerComp_getPreviewPlans_R_arc_struct_Seq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/PlayerComp:getPreviewPlans", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(76);
	frame[1].l = (jlong(100ll));
	LINE_NUMBER(77);
	jlong temp0 = (jlong)SM_arc_util_Time_timeSinceMillis_long_R_long(ctx, ((jlong)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_lastPreviewPlanTimestamp));
	if ((longCompare(temp0, (frame[1].l))) < 0) goto label_2;
	}
	{
	if (((jint)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_receivingNewPlanGroup) == 0) goto label_2;
	}
	{
	LINE_NUMBER(78);
	((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_receivingNewPlanGroup = (jint(0));
	LINE_NUMBER(79);
	((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_previewPlansDirty = (jint(1));
	LINE_NUMBER(80);
	sp[0].o = (jobject)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_previewPlansCurrent;
	sp[1].o = (jobject)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_previewPlansAssembling;
	((func_arc_struct_Seq_set_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_set_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(81);
	sp[0].o = (jobject)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_previewPlansAssembling;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	}
label_2:;
	{
	LINE_NUMBER(84);
	sp[0].o = (jobject)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_previewPlansCurrent;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_PlayerComp_handlePreviewPlans_int_arc_struct_Seq(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/PlayerComp:handlePreviewPlans", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(88);
	if ((frame[1].i) <= ((jint)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_lastPreviewPlanGroup)) goto label_1;
	}
	{
	LINE_NUMBER(89);
	sp[0].o = (jobject)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_previewPlansAssembling;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(90);
	((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_lastPreviewPlanGroup = (frame[1].i);
	LINE_NUMBER(91);
	((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_receivingNewPlanGroup = (jint(1));
	LINE_NUMBER(92);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)SM_arc_util_Time_millis_R_long(ctx);
	((mindustry_entities_comp_PlayerComp *) NULL_CHECK(sp[0].o))->F_lastPreviewPlanTimestamp = temp0;
	goto label_6;
	}
label_1:;
	{
	LINE_NUMBER(93);
	if ((frame[1].i) >= ((jint)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_lastPreviewPlanGroup)) goto label_7;
	}
	LINE_NUMBER(94);
	popStackFrame(ctx);
	INST_RETURN();
label_7:;
	{
	LINE_NUMBER(95);
	if (((jint)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_receivingNewPlanGroup) != 0) goto label_6;
	}
	LINE_NUMBER(96);
	popStackFrame(ctx);
	INST_RETURN();
label_6:;
	{
	LINE_NUMBER(99);
	if ((frame[2].o) != nullptr) goto label_10;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_10:;
	{
	LINE_NUMBER(101);
	jint temp0 = (jint)((arc_struct_Seq *) NULL_CHECK((frame[2].o)))->F_size;
	jint temp1 = 1000;
	sp[0].o = (jobject)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_previewPlansAssembling;
	jint temp2 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp0, (temp1 - ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)));
	frame[3].i = temp2;
	LINE_NUMBER(102);
	if ((frame[3].i) <= 0) goto label_12;
	}
	{
	LINE_NUMBER(103);
	sp[0].o = (jobject)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_previewPlansAssembling;
	sp[0].o = (jobject)((func_arc_struct_Seq_addAll_arc_struct_Seq_int_int_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_addAll_arc_struct_Seq_int_int_R_arc_struct_Seq])(ctx, sp[0].o, (frame[2].o), (jint(0)), (frame[3].i));
	}
label_12:;
	LINE_NUMBER(105);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_entities_comp_PlayerComp_isBuilder_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/PlayerComp:isBuilder", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(108);
	sp[0].o = (jobject)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_unit;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_unit;
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

jobject M_mindustry_entities_comp_PlayerComp_closestCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/PlayerComp:closestCore", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(112);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_teams;
	jfloat temp0 = (jfloat)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_y;
	sp[1].o = (jobject)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_team;
	sp[0].o = (jobject)((func_mindustry_game_Teams_closestCore_float_float_mindustry_game_Team_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Teams_closestCore_float_float_mindustry_game_Team_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild])(ctx, sp[0].o, temp0, temp1, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_entities_comp_PlayerComp_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/PlayerComp:core", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(116);
	sp[0].o = (jobject)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_team;
	sp[0].o = (jobject)((func_mindustry_game_Team_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_entities_comp_PlayerComp_bestCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/PlayerComp:bestCore", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(122);
	sp[0].o = (jobject)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_team;
	sp[0].o = (jobject)((func_mindustry_game_Team_cores_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_cores_R_arc_struct_Seq])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(125);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_entities_comp_PlayerComp_invoke_arc_func_Boolf_0(ctx);
		auto proxy = (mindustry_entities_comp_PlayerComp_invoke_arc_func_Boolf_0 *) gcAlloc(ctx, &class_mindustry_entities_comp_PlayerComp_invoke_arc_func_Boolf_0);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_entities_comp_PlayerComp_invoke_arc_func_Intf_0(ctx);
		auto proxy = (mindustry_entities_comp_PlayerComp_invoke_arc_func_Intf_0 *) gcAlloc(ctx, &class_mindustry_entities_comp_PlayerComp_invoke_arc_func_Intf_0);
		sp[2].o = (jobject) proxy;
	}
	sp[2].o = (jobject)SM_arc_util_Structs_comparingInt_arc_func_Intf_R_java_util_Comparator(ctx, sp[2].o);
	{ /* InvokeDynamic */
		clinit_mindustry_entities_comp_PlayerComp_invoke_arc_func_Floatf_0(ctx);
		auto proxy = (mindustry_entities_comp_PlayerComp_invoke_arc_func_Floatf_0 *) gcAlloc(ctx, &class_mindustry_entities_comp_PlayerComp_invoke_arc_func_Floatf_0);
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

jobject M_mindustry_entities_comp_PlayerComp_icon_R_arc_graphics_g2d_TextureRegion(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/PlayerComp:icon", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(130);
	jint temp0 = (jint)((func_mindustry_entities_comp_PlayerComp_dead_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_PlayerComp_dead_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(131);
	sp[0].o = (jobject)((func_mindustry_entities_comp_PlayerComp_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_PlayerComp_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild])(ctx, (frame[0].o));
	if (sp[0].o != nullptr) goto label_3;
	}
	{
	LINE_NUMBER(132);
	clinit_mindustry_content_UnitTypes(ctx);
	sp[0].o = (jobject)SF_mindustry_content_UnitTypes_alpha;
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[0].o))->F_uiIcon;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(134);
	sp[0].o = (jobject)((func_mindustry_entities_comp_PlayerComp_bestCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_PlayerComp_bestCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(135);
	if ((frame[1].o) != nullptr) goto label_6;
	}
	{
	LINE_NUMBER(136);
	clinit_mindustry_content_UnitTypes(ctx);
	sp[0].o = (jobject)SF_mindustry_content_UnitTypes_alpha;
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[0].o))->F_uiIcon;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_6:;
	{
	LINE_NUMBER(138);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_block;
	sp[0].o = (jobject)((mindustry_world_blocks_storage_CoreBlock *) NULL_CHECK((checkCast(ctx, &class_mindustry_world_blocks_storage_CoreBlock, sp[0].o))))->F_unitType;
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[0].o))->F_uiIcon;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(141);
	sp[0].o = (jobject)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((func_mindustry_gen_Unit_icon_R_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_icon_R_arc_graphics_g2d_TextureRegion])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_entities_comp_PlayerComp_displayAmmo_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/PlayerComp:displayAmmo", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(145);
	sp[0].o = (jobject)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_unit;
	popStackFrame(ctx);
	return (isInstance(ctx, sp[0].o, &class_mindustry_gen_BlockUnitc));
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_PlayerComp_reset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/PlayerComp:reset", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(149);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_defaultTeam;
	((mindustry_entities_comp_PlayerComp *) NULL_CHECK(sp[0].o))->F_team = (jref) sp[1].o;
	LINE_NUMBER(150);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp0 = jint(0);
	((mindustry_entities_comp_PlayerComp *) NULL_CHECK(sp[1].o))->F_typing = temp0;
	((mindustry_entities_comp_PlayerComp *) NULL_CHECK(sp[0].o))->F_admin = temp0;
	LINE_NUMBER(151);
	((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_textFadeTime = (jfloat(0));
	LINE_NUMBER(152);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jfloat temp3 = jfloat(0);
	((mindustry_entities_comp_PlayerComp *) NULL_CHECK(sp[1].o))->F_y = temp3;
	((mindustry_entities_comp_PlayerComp *) NULL_CHECK(sp[0].o))->F_x = temp3;
	LINE_NUMBER(153);
	((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_lastPreviewPlanTimestamp = (jlong(0));
	LINE_NUMBER(154);
	((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_lastPreviewPlanGroup = (jint(-1));
	LINE_NUMBER(155);
	((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_lastPreviewPlanGroupServer = (jint(-1));
	LINE_NUMBER(156);
	((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_previewPlanTree = (jref) (jobject(nullptr));
	LINE_NUMBER(157);
	((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_planEachable = (jref) (jobject(nullptr));
	LINE_NUMBER(158);
	sp[0].o = (jobject)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_previewPlansCurrent;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(159);
	sp[0].o = (jobject)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_previewPlansAssembling;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(160);
	((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_receivingNewPlanGroup = (jint(0));
	LINE_NUMBER(161);
	((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_previewPlansDirty = (jint(0));
	LINE_NUMBER(162);
	jint temp6 = (jint)((func_mindustry_entities_comp_PlayerComp_dead_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_PlayerComp_dead_R_boolean])(ctx, (frame[0].o));
	if (temp6 != 0) goto label_14;
	}
	{
	LINE_NUMBER(163);
	sp[0].o = (jobject)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_unit;
	((func_mindustry_gen_Unit_resetController) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_resetController])(ctx, sp[0].o);
	LINE_NUMBER(164);
	((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_unit = (jref) (jobject(nullptr));
	}
label_14:;
	LINE_NUMBER(166);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_entities_comp_PlayerComp_isValidController_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/PlayerComp:isValidController", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(170);
	jint temp0 = (jint)((func_mindustry_entities_comp_PlayerComp_isAdded_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_PlayerComp_isAdded_R_boolean])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_entities_comp_PlayerComp_isLogicControllable_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/PlayerComp:isLogicControllable", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(175);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_entities_comp_PlayerComp_clipSize_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/PlayerComp:clipSize", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(180);
	popStackFrame(ctx);
	return (jfloat(3,402823e+38f));
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_PlayerComp_afterSync(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/PlayerComp:afterSync", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(188);
	jint temp0 = (jint)((func_mindustry_entities_comp_PlayerComp_isLocal_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_PlayerComp_isLocal_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_justSwitchFrom;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_justSwitchFrom;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_justSwitchTo;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(189);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_justSwitchTo;
	((mindustry_entities_comp_PlayerComp *) NULL_CHECK(sp[0].o))->F_unit = (jref) sp[1].o;
	LINE_NUMBER(191);
	sp[0].o = frame[0].o;
	jint temp0 = ((jint)((mindustry_entities_comp_PlayerComp *) NULL_CHECK(sp[0].o))->F_wrongReadUnits) + (jint(1));
	((mindustry_entities_comp_PlayerComp *) NULL_CHECK(sp[0].o))->F_wrongReadUnits = temp0;
	if (temp0 < (jint(2))) goto label_4;
	}
	{
	LINE_NUMBER(192);
	((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_justSwitchFrom = (jref) (jobject(nullptr));
	LINE_NUMBER(193);
	((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_wrongReadUnits = (jint(0));
	goto label_4;
	}
label_1:;
	{
	LINE_NUMBER(196);
	((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_justSwitchFrom = (jref) (jobject(nullptr));
	LINE_NUMBER(197);
	((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_justSwitchTo = (jref) (jobject(nullptr));
	LINE_NUMBER(198);
	((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_wrongReadUnits = (jint(0));
	}
label_4:;
	{
	LINE_NUMBER(202);
	sp[0].o = (jobject)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_unit;
	frame[1].o = sp[0].o;
	LINE_NUMBER(203);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_lastReadUnit;
	((mindustry_entities_comp_PlayerComp *) NULL_CHECK(sp[0].o))->F_unit = (jref) sp[1].o;
	LINE_NUMBER(204);
	((func_mindustry_entities_comp_PlayerComp_unit_mindustry_gen_Unit) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_PlayerComp_unit_mindustry_gen_Unit])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(205);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_unit;
	((mindustry_entities_comp_PlayerComp *) NULL_CHECK(sp[0].o))->F_lastReadUnit = (jref) sp[1].o;
	LINE_NUMBER(206);
	sp[0].o = (jobject)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_unit;
	if (sp[0].o == nullptr) goto label_13;
	}
	{
	LINE_NUMBER(207);
	sp[0].o = (jobject)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_unit;
	((func_mindustry_gen_Unit_aim_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_aim_float_float])(ctx, sp[0].o, ((jfloat)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_mouseX), ((jfloat)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_mouseY));
	LINE_NUMBER(209);
	sp[0].o = (jobject)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_unit;
	((func_mindustry_gen_Unit_controlWeapons_boolean_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_controlWeapons_boolean_boolean])(ctx, sp[0].o, ((jint)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_shooting), ((jint)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_shooting));
	LINE_NUMBER(211);
	sp[0].o = (jobject)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_unit;
	((func_mindustry_gen_Unit_controller_mindustry_entities_units_UnitController) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_controller_mindustry_entities_units_UnitController])(ctx, sp[0].o, (frame[0].o));
	}
label_13:;
	LINE_NUMBER(213);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_PlayerComp_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/PlayerComp:update", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(217);
	sp[0].o = (jobject)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_unit;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_unit;
	jint temp0 = (jint)((func_mindustry_gen_Unit_isValid_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_isValid_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(218);
	((func_mindustry_entities_comp_PlayerComp_clearUnit) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_PlayerComp_clearUnit])(ctx, (frame[0].o));
	}
label_1:;
	{
	LINE_NUMBER(223);
	jint temp0 = (jint)((func_mindustry_entities_comp_PlayerComp_dead_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_PlayerComp_dead_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_3;
	}
	{
	LINE_NUMBER(224);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_unit;
	((func_mindustry_entities_comp_PlayerComp_set_arc_math_geom_Position) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_comp_PlayerComp_set_arc_math_geom_Position])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(225);
	sp[0].o = (jobject)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_team;
	((func_mindustry_gen_Unit_team_mindustry_game_Team) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_team_mindustry_game_Team])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(226);
	((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_deathTimer = (jfloat(0));
	LINE_NUMBER(229);
	sp[0].o = (jobject)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_canBoost) == 0) goto label_8;
	}
	{
	LINE_NUMBER(230);
	sp[0].o = (jobject)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_unit;
	jint temp0 = (jint)((func_mindustry_gen_Unit_onSolid_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_onSolid_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_10;
	}
	{
	if (((jint)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_boosting) != 0) goto label_10;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_unit;
	jint temp0 = (jint)((func_mindustry_gen_Unit_isFlying_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_isFlying_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_11;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_unit;
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
	LINE_NUMBER(231);
	sp[0].o = (jobject)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_unit;
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
	sp[0].o = (jobject)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type;
	jfloat temp0 = (jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_riseSpeed;
	sp[0].f = temp0;
	sp += 1;
	goto label_17;
	}
label_16:;
	{
	sp[0].o = (jobject)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_unit;
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
	LINE_NUMBER(232);
	goto label_8;
	}
label_3:;
	{
	LINE_NUMBER(233);
	sp[0].o = (jobject)((func_mindustry_entities_comp_PlayerComp_bestCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_PlayerComp_bestCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_8;
	}
	{
	LINE_NUMBER(236);
	sp[0].o = frame[0].o;
	((mindustry_entities_comp_PlayerComp *) NULL_CHECK(sp[0].o))->F_deathTimer = (((jfloat)((mindustry_entities_comp_PlayerComp *) NULL_CHECK(sp[0].o))->F_deathTimer) + (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta));
	LINE_NUMBER(237);
	if ((floatCompare(((jfloat)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_deathTimer), (jfloat(60.0f)), -1)) < 0) goto label_8;
	}
	{
	LINE_NUMBER(239);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_mindustry_entities_comp_PlayerComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_PlayerComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	((func_mindustry_world_blocks_storage_CoreBlock$CoreBuild_requestSpawn_mindustry_gen_Player) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_storage_CoreBlock$CoreBuild_requestSpawn_mindustry_gen_Player])(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_gen_Player, sp[1].o)));
	LINE_NUMBER(240);
	((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_deathTimer = (jfloat(0));
	}
label_8:;
	{
	LINE_NUMBER(244);
	sp[0].o = frame[0].o;
	((mindustry_entities_comp_PlayerComp *) NULL_CHECK(sp[0].o))->F_textFadeTime = (((jfloat)((mindustry_entities_comp_PlayerComp *) NULL_CHECK(sp[0].o))->F_textFadeTime) - ((clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta) / (jfloat(300.0f))));
	LINE_NUMBER(246);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_PlayerComp_checkSpawn(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/PlayerComp:checkSpawn", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(249);
	sp[0].o = (jobject)((func_mindustry_entities_comp_PlayerComp_bestCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_PlayerComp_bestCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(250);
	if ((frame[1].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(251);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_mindustry_entities_comp_PlayerComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_PlayerComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	((func_mindustry_world_blocks_storage_CoreBlock$CoreBuild_requestSpawn_mindustry_gen_Player) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_storage_CoreBlock$CoreBuild_requestSpawn_mindustry_gen_Player])(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_gen_Player, sp[1].o)));
	}
label_2:;
	LINE_NUMBER(253);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_PlayerComp_remove(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/PlayerComp:remove", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(258);
	sp[0].o = (jobject)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_unit;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(259);
	((func_mindustry_entities_comp_PlayerComp_clearUnit) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_PlayerComp_clearUnit])(ctx, (frame[0].o));
	}
label_1:;
	{
	LINE_NUMBER(262);
	((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_lastReadUnit = (jref) (jobject(nullptr));
	LINE_NUMBER(263);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp[2].o = jobject(nullptr);
	((mindustry_entities_comp_PlayerComp *) NULL_CHECK(sp[1].o))->F_justSwitchFrom = (jref) sp[2].o;
	((mindustry_entities_comp_PlayerComp *) NULL_CHECK(sp[0].o))->F_justSwitchTo = (jref) sp[2].o;
	LINE_NUMBER(264);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_PlayerComp_team_mindustry_game_Team(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/PlayerComp:team", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(267);
	((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_team = (jref) (frame[1].o);
	LINE_NUMBER(268);
	sp[0].o = (jobject)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_unit;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(269);
	sp[0].o = (jobject)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_unit;
	((func_mindustry_gen_Unit_team_mindustry_game_Team) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_team_mindustry_game_Team])(ctx, sp[0].o, (frame[1].o));
	}
label_2:;
	LINE_NUMBER(271);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_PlayerComp_clearUnit(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/PlayerComp:clearUnit", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(274);
	((func_mindustry_entities_comp_PlayerComp_unit_mindustry_gen_Unit) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_PlayerComp_unit_mindustry_gen_Unit])(ctx, (frame[0].o), (jobject(nullptr)));
	LINE_NUMBER(275);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_entities_comp_PlayerComp_unit_R_mindustry_gen_Unit(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/PlayerComp:unit", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(278);
	sp[0].o = (jobject)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_unit;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_PlayerComp_unit_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/PlayerComp:unit", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(283);
	jint temp0 = (jint)((func_mindustry_entities_comp_PlayerComp_isLocal_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_PlayerComp_isLocal_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_justSwitchFrom;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_justSwitchFrom;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_justSwitchTo;
	if (sp[0].o == nullptr) goto label_1;
	}
	LINE_NUMBER(284);
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(287);
	sp[0].o = (jobject)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_unit;
	if (sp[0].o != (frame[1].o)) goto label_3;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(290);
	if ((frame[1].o) == nullptr) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_mindustry_gen_Unit_controller_R_mindustry_entities_units_UnitController) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_controller_R_mindustry_entities_units_UnitController])(ctx, (frame[1].o));
	frame[3].o = sp[0].o;
	if ((isInstance(ctx, (frame[3].o), &class_mindustry_ai_types_CommandAI)) == 0) goto label_4;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_ai_types_CommandAI, (frame[3].o)));
	LINE_NUMBER(291);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[2].o)))->F_command;
	((mindustry_entities_comp_PlayerComp *) NULL_CHECK(sp[0].o))->F_lastCommand = (jref) sp[1].o;
	}
label_4:;
	{
	LINE_NUMBER(294);
	sp[0].o = (jobject)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_unit;
	if (sp[0].o == nullptr) goto label_6;
	}
	{
	LINE_NUMBER(296);
	sp[0].o = (jobject)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_unit;
	((func_mindustry_gen_Unit_resetController) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_resetController])(ctx, sp[0].o);
	LINE_NUMBER(298);
	sp[0].o = (jobject)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_lastCommand;
	if (sp[0].o == nullptr) goto label_6;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((func_mindustry_gen_Unit_controller_R_mindustry_entities_units_UnitController) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_controller_R_mindustry_entities_units_UnitController])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	if ((isInstance(ctx, (frame[3].o), &class_mindustry_ai_types_CommandAI)) == 0) goto label_6;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_ai_types_CommandAI, (frame[3].o)));
	LINE_NUMBER(299);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_lastCommand;
	((func_mindustry_ai_types_CommandAI_command_mindustry_ai_UnitCommand) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_types_CommandAI_command_mindustry_ai_UnitCommand])(ctx, sp[0].o, sp[1].o);
	}
label_6:;
	{
	LINE_NUMBER(302);
	((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_unit = (jref) (frame[1].o);
	LINE_NUMBER(303);
	if ((frame[1].o) == nullptr) goto label_11;
	}
	{
	LINE_NUMBER(304);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_team;
	((func_mindustry_gen_Unit_team_mindustry_game_Team) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_team_mindustry_game_Team])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(305);
	((func_mindustry_gen_Unit_controller_mindustry_entities_units_UnitController) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_controller_mindustry_entities_units_UnitController])(ctx, (frame[1].o), (frame[0].o));
	LINE_NUMBER(308);
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
	LINE_NUMBER(309);
	((func_mindustry_gen_Unit_snapInterpolation) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_snapInterpolation])(ctx, (frame[1].o));
	}
label_15:;
	{
	LINE_NUMBER(313);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_headless) != 0) goto label_11;
	}
	{
	jint temp0 = (jint)((func_mindustry_entities_comp_PlayerComp_isLocal_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_PlayerComp_isLocal_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_11;
	}
	{
	LINE_NUMBER(314);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_input;
	((mindustry_input_InputHandler *) NULL_CHECK(sp[0].o))->F_block = (jref) (jobject(nullptr));
	}
label_11:;
	{
	LINE_NUMBER(318);
	clinit_mindustry_game_EventType$UnitChangeEvent(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$UnitChangeEvent);
	sp[1].o = (jobject)((func_mindustry_entities_comp_PlayerComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_PlayerComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	init_mindustry_game_EventType$UnitChangeEvent_mindustry_gen_Player_mindustry_gen_Unit(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_gen_Player, sp[1].o)), (frame[1].o));
	SM_arc_Events_fire_java_lang_Object(ctx, sp[0].o);
	LINE_NUMBER(319);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_entities_comp_PlayerComp_dead_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/PlayerComp:dead", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(322);
	sp[0].o = (jobject)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_unit;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_unit;
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

jobject M_mindustry_entities_comp_PlayerComp_ip_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/PlayerComp:ip", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(326);
	sp[0].o = (jobject)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_con;
	if (sp[0].o != nullptr) goto label_1;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"localhost"_j));
	goto label_2;
label_1:;
	{
	sp[0].o = (jobject)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_con;
	sp[0].o = (jobject)((mindustry_net_NetConnection *) NULL_CHECK(sp[0].o))->F_address;
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_entities_comp_PlayerComp_uuid_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/PlayerComp:uuid", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(330);
	sp[0].o = (jobject)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_con;
	if (sp[0].o != nullptr) goto label_1;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"[LOCAL]"_j));
	goto label_2;
label_1:;
	{
	sp[0].o = (jobject)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_con;
	sp[0].o = (jobject)((mindustry_net_NetConnection *) NULL_CHECK(sp[0].o))->F_uuid;
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_entities_comp_PlayerComp_usid_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/PlayerComp:usid", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(334);
	sp[0].o = (jobject)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_con;
	if (sp[0].o != nullptr) goto label_1;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"[LOCAL]"_j));
	goto label_2;
label_1:;
	{
	sp[0].o = (jobject)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_con;
	sp[0].o = (jobject)((mindustry_net_NetConnection *) NULL_CHECK(sp[0].o))->F_usid;
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_PlayerComp_kick_mindustry_net_Packets$KickReason(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/PlayerComp:kick", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(338);
	sp[0].o = (jobject)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_con;
	((func_mindustry_net_NetConnection_kick_mindustry_net_Packets$KickReason) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_NetConnection_kick_mindustry_net_Packets$KickReason])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(339);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_PlayerComp_kick_mindustry_net_Packets$KickReason_long(jcontext ctx, jobject self, jobject param0, jlong param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/PlayerComp:kick", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].l = param1;
	{
	LINE_NUMBER(342);
	sp[0].o = (jobject)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_con;
	((func_mindustry_net_NetConnection_kick_mindustry_net_Packets$KickReason_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_NetConnection_kick_mindustry_net_Packets$KickReason_long])(ctx, sp[0].o, (frame[1].o), (frame[2].l));
	LINE_NUMBER(343);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_PlayerComp_kick_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/PlayerComp:kick", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(346);
	sp[0].o = (jobject)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_con;
	((func_mindustry_net_NetConnection_kick_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_NetConnection_kick_java_lang_String])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(347);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_PlayerComp_kick_java_lang_String_long(jcontext ctx, jobject self, jobject param0, jlong param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/PlayerComp:kick", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].l = param1;
	{
	LINE_NUMBER(350);
	sp[0].o = (jobject)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_con;
	((func_mindustry_net_NetConnection_kick_java_lang_String_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_NetConnection_kick_java_lang_String_long])(ctx, sp[0].o, (frame[1].o), (frame[2].l));
	LINE_NUMBER(351);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_PlayerComp_draw(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/PlayerComp:draw", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(355);
	((func_mindustry_entities_comp_PlayerComp_drawPing) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_PlayerComp_drawPing])(ctx, (frame[0].o));
	LINE_NUMBER(356);
	((func_mindustry_entities_comp_PlayerComp_drawName) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_PlayerComp_drawName])(ctx, (frame[0].o));
	LINE_NUMBER(357);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_entities_comp_PlayerComp_isPinging_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/PlayerComp:isPinging", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(360);
	if ((floatCompare(((jfloat)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_pingTime), (jfloat(0)), -1)) <= 0) goto label_1;
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

void M_mindustry_entities_comp_PlayerComp_drawPing(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/PlayerComp:drawPing", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(364);
	if ((floatCompare(((jfloat)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_pingTime), (jfloat(0)), 1)) <= 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	if (((jint)((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_showPings) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_name;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_showOtherTeamPings) != 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_team;
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
	LINE_NUMBER(366);
	clinit_arc_math_Interp(ctx);
	sp[0].o = (jobject)SF_arc_math_Interp_pow5Out;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_map_float_float_float_float_float_R_float(ctx, ((jfloat)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_pingTime), (jfloat(0.05f)), (jfloat(0)), (jfloat(1)), (jfloat(0)));
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, temp0);
	jfloat temp2 = (jfloat)((func_arc_math_Interp$PowOut_apply_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Interp$PowOut_apply_float_R_float])(ctx, sp[0].o, temp1);
	clinit_arc_math_Interp(ctx);
	sp[0].o = (jobject)SF_arc_math_Interp_pow5Out;
	jfloat temp3 = (jfloat)SM_arc_math_Mathf_map_float_float_float_float_float_R_float(ctx, ((jfloat)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_pingTime), (jfloat(1)), (jfloat(0.98f)), (jfloat(0)), (jfloat(1)));
	jfloat temp4 = (jfloat)((func_arc_math_Interp$PowOut_apply_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Interp$PowOut_apply_float_R_float])(ctx, sp[0].o, temp3);
	jfloat temp5 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, temp2, temp4);
	frame[1].f = temp5;
	LINE_NUMBER(368);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_c1;
	sp[1].o = (jobject)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_color;
	sp[0].o = (jobject)((func_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_graphics_Color_a_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_a_float_R_arc_graphics_Color])(ctx, sp[0].o, (frame[1].f));
	LINE_NUMBER(370);
	sp[0].o = frame[0].o;
	((mindustry_entities_comp_PlayerComp *) NULL_CHECK(sp[0].o))->F_pingTime = (((jfloat)((mindustry_entities_comp_PlayerComp *) NULL_CHECK(sp[0].o))->F_pingTime) - ((clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta) / (jfloat(1200.0f))));
	LINE_NUMBER(372);
	jfloat temp6 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, (jfloat(4.0f)));
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	jfloat temp7 = (jfloat)((func_mindustry_core_Renderer_getDisplayScale_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_Renderer_getDisplayScale_R_float])(ctx, sp[0].o);
	frame[2].f = (temp6 / temp7);
	LINE_NUMBER(374);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (jfloat(150.0f)));
	LINE_NUMBER(375);
	jfloat temp8 = (jfloat)SM_mindustry_graphics_Drawf_text_R_float(ctx);
	frame[3].f = temp8;
	LINE_NUMBER(376);
	jfloat temp9 = (jfloat)SM_arc_math_Mathf_absin_float_float_R_float(ctx, (jfloat(5.0f)), (jfloat(1)));
	frame[4].f = temp9;
	LINE_NUMBER(377);
	jfloat temp10 = jfloat(1);
	clinit_arc_math_Interp(ctx);
	sp[0].o = (jobject)SF_arc_math_Interp_pow5In;
	jfloat temp11 = (jfloat)SM_arc_math_Mathf_map_float_float_float_float_float_R_float(ctx, ((jfloat)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_pingTime), (jfloat(1)), (jfloat(0.96f)), (jfloat(1)), (jfloat(0)));
	jfloat temp12 = (jfloat)((func_arc_math_Interp$PowIn_apply_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Interp$PowIn_apply_float_R_float])(ctx, sp[0].o, temp11);
	jfloat temp13 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, temp12);
	frame[5].f = (temp10 + (temp13 * (jfloat(3.0f))));
	LINE_NUMBER(379);
	jfloat temp14 = (jfloat)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_pingX;
	jfloat temp15 = (jfloat)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_pingY;
	jfloat temp16 = ((jfloat(2)) * (frame[5].f)) * (frame[2].f);
	jfloat temp17 = jfloat(45.0f);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_c1;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_c3;
	clinit_arc_graphics_Color(ctx);
	sp[2].o = (jobject)SF_arc_graphics_Color_darkGray;
	sp[1].o = (jobject)((func_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[1].o, sp[2].o);
	sp[2].o = (jobject)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_color;
	sp[1].o = (jobject)((func_arc_graphics_Color_mul_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Color_mul_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[1].o, sp[2].o);
	clinit_arc_util_Tmp(ctx);
	sp[2].o = (jobject)SF_arc_util_Tmp_c1;
	sp[1].o = (jobject)((func_arc_graphics_Color_a_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Color_a_float_R_arc_graphics_Color])(ctx, sp[1].o, ((jfloat)((arc_graphics_Color *) NULL_CHECK(sp[2].o))->F_a));
	SM_mindustry_graphics_Drawf_square_float_float_float_float_arc_graphics_Color_arc_graphics_Color_float(ctx, temp14, temp15, temp16, temp17, sp[0].o, sp[1].o, (frame[2].f));
	LINE_NUMBER(380);
	jfloat temp18 = (jfloat)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_pingX;
	jfloat temp19 = (((jfloat)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_pingY) + ((jfloat(9.0f)) * (frame[2].f))) + ((frame[4].f) * (frame[2].f));
	jint temp20 = jint(3);
	jfloat temp21 = (jfloat(3.0f)) * (frame[2].f);
	jfloat temp22 = jfloat(-90.0f);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_c1;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_c3;
	SM_mindustry_graphics_Drawf_fillPoly_float_float_int_float_float_arc_graphics_Color_arc_graphics_Color_float(ctx, temp18, temp19, temp20, temp21, temp22, sp[0].o, sp[1].o, (frame[2].f));
	LINE_NUMBER(382);
	sp[0].o = (jobject)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_pingText;
	if (sp[0].o == nullptr) goto label_13;
	}
	{
	LINE_NUMBER(383);
	sp[0].o = (jobject)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_name;
	jfloat temp0 = (jfloat)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_pingX;
	jfloat temp1 = ((jfloat)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_pingY) + (((jfloat(20.0f)) + (frame[4].f)) * (frame[2].f));
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_c1;
	SM_mindustry_graphics_Drawf_text_java_lang_String_float_float_arc_graphics_Color_float(ctx, sp[0].o, temp0, temp1, sp[1].o, ((jfloat(0.7f)) * (frame[2].f)));
	LINE_NUMBER(384);
	sp[0].o = (jobject)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_pingText;
	jfloat temp2 = (jfloat)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_pingX;
	jfloat temp3 = ((jfloat)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_pingY) + (((jfloat(16.0f)) + (frame[4].f)) * (frame[2].f));
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
	LINE_NUMBER(386);
	sp[0].o = (jobject)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_name;
	jfloat temp0 = (jfloat)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_pingX;
	jfloat temp1 = ((jfloat)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_pingY) + (((jfloat(16.0f)) + (frame[4].f)) * (frame[2].f));
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_c1;
	SM_mindustry_graphics_Drawf_text_java_lang_String_float_float_arc_graphics_Color_float(ctx, sp[0].o, temp0, temp1, sp[1].o, (frame[2].f));
	}
label_16:;
	{
	LINE_NUMBER(389);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(390);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (frame[3].f));
	LINE_NUMBER(391);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_PlayerComp_drawName(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[18];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/PlayerComp:drawName", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(395);
	sp[0].o = (jobject)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_unit;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_name;
	if (sp[0].o != nullptr) goto label_2;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(397);
	sp[0].o = (jobject)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type;
	frame[1].f = (((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_hitSize) * (jfloat(2)));
	LINE_NUMBER(398);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_r1;
	sp[0].o = (jobject)((func_arc_graphics_Camera_bounds_arc_math_geom_Rect_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Camera_bounds_arc_math_geom_Rect_R_arc_math_geom_Rect])(ctx, sp[0].o, sp[1].o);
	jint temp0 = (jint)((func_arc_math_geom_Rect_overlaps_float_float_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_overlaps_float_float_float_float_R_boolean])(ctx, sp[0].o, (((jfloat)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_x) - ((frame[1].f) / (jfloat(2)))), (((jfloat)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_y) - ((frame[1].f) / (jfloat(2)))), (frame[1].f), (frame[1].f));
	if (temp0 != 0) goto label_4;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_4:;
	{
	LINE_NUMBER(400);
	sp[0].o = (jobject)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_name;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_unit;
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
	LINE_NUMBER(402);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (jfloat(150.0f)));
	LINE_NUMBER(403);
	jfloat temp0 = (jfloat)SM_mindustry_graphics_Drawf_text_R_float(ctx);
	frame[2].f = temp0;
	LINE_NUMBER(405);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_outline;
	frame[3].o = sp[0].o;
	LINE_NUMBER(406);
	sp[0].o = ((jobject) &class_arc_graphics_g2d_GlyphLayout);
	{ /* InvokeDynamic */
		clinit_mindustry_entities_comp_PlayerComp_invoke_arc_func_Prov_0(ctx);
		auto proxy = (mindustry_entities_comp_PlayerComp_invoke_arc_func_Prov_0 *) gcAlloc(ctx, &class_mindustry_entities_comp_PlayerComp_invoke_arc_func_Prov_0);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_util_pooling_Pools_obtain_java_lang_Class_arc_func_Prov_R_java_lang_Object(ctx, sp[0].o, sp[1].o);
	frame[4].o = (checkCast(ctx, &class_arc_graphics_g2d_GlyphLayout, sp[0].o));
	LINE_NUMBER(407);
	frame[5].f = (jfloat(11.0f));
	LINE_NUMBER(408);
	frame[6].f = (jfloat(15.0f));
	LINE_NUMBER(410);
	jint temp1 = (jint)((func_arc_graphics_g2d_Font_usesIntegerPositions_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_graphics_g2d_Font_usesIntegerPositions_R_boolean])(ctx, (frame[3].o));
	frame[7].i = temp1;
	LINE_NUMBER(411);
	((func_arc_graphics_g2d_Font_setUseIntegerPositions_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_graphics_g2d_Font_setUseIntegerPositions_boolean])(ctx, (frame[3].o), (jint(0)));
	LINE_NUMBER(412);
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData])(ctx, (frame[3].o));
	jfloat temp2 = jfloat(0.25f);
	jfloat temp3 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, (jfloat(1)));
	((func_arc_graphics_g2d_Font$FontData_setScale_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font$FontData_setScale_float])(ctx, sp[0].o, (temp2 / temp3));
	LINE_NUMBER(413);
	sp[0].o = frame[4].o;
	sp[1].o = frame[3].o;
	sp[2].o = (jobject)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_name;
	((func_arc_graphics_g2d_GlyphLayout_setText_arc_graphics_g2d_Font_java_lang_CharSequence) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_GlyphLayout_setText_arc_graphics_g2d_Font_java_lang_CharSequence])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(415);
	jint temp4 = (jint)((func_mindustry_entities_comp_PlayerComp_isLocal_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_PlayerComp_isLocal_R_boolean])(ctx, (frame[0].o));
	if (temp4 != 0) goto label_17;
	}
	{
	LINE_NUMBER(416);
	SM_arc_graphics_g2d_Draw_color_float_float_float_float(ctx, (jfloat(0)), (jfloat(0)), (jfloat(0)), (jfloat(0.3f)));
	LINE_NUMBER(417);
	sp[0].o = (jobject)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_unit;
	jfloat temp0 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_x;
	sp[0].o = (jobject)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_unit;
	SM_arc_graphics_g2d_Fill_rect_float_float_float_float(ctx, temp0, ((((jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_y) + (jfloat(11.0f))) - (((jfloat)((arc_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[4].o)))->F_height) / (jfloat(2)))), (((jfloat)((arc_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[4].o)))->F_width) + (jfloat(2))), (((jfloat)((arc_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[4].o)))->F_height) + (jfloat(3.0f))));
	LINE_NUMBER(418);
	SM_arc_graphics_g2d_Draw_color(ctx);
	LINE_NUMBER(419);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_color;
	((func_arc_graphics_g2d_Font_setColor_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font_setColor_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(420);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_unit;
	jfloat temp1 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[2].o))->F_x;
	sp[2].o = (jobject)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font_draw_java_lang_CharSequence_float_float_float_int_boolean_R_arc_graphics_g2d_GlyphLayout) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font_draw_java_lang_CharSequence_float_float_float_int_boolean_R_arc_graphics_g2d_GlyphLayout])(ctx, sp[0].o, sp[1].o, temp1, (((jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[2].o))->F_y) + (jfloat(11.0f))), (jfloat(0)), (jint(1)), (jint(0)));
	LINE_NUMBER(422);
	if (((jint)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_admin) == 0) goto label_17;
	}
	{
	LINE_NUMBER(423);
	frame[8].f = (jfloat(3.0f));
	LINE_NUMBER(424);
	sp[0].o = (jobject)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_color;
	jfloat temp0 = ((jfloat)((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_r) * (jfloat(0.5f));
	sp[0].o = (jobject)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_color;
	jfloat temp1 = ((jfloat)((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_g) * (jfloat(0.5f));
	sp[0].o = (jobject)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_color;
	SM_arc_graphics_g2d_Draw_color_float_float_float_float(ctx, temp0, temp1, (((jfloat)((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_b) * (jfloat(0.5f))), (jfloat(1)));
	LINE_NUMBER(425);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_adminSmall;
	sp[0].o = (jobject)((func_arc_scene_style_TextureRegionDrawable_getRegion_R_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_style_TextureRegionDrawable_getRegion_R_arc_graphics_g2d_TextureRegion])(ctx, sp[0].o);
	sp[1].o = (jobject)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_unit;
	jfloat temp2 = ((((jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[1].o))->F_x) + (((jfloat)((arc_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[4].o)))->F_width) / (jfloat(2)))) + (jfloat(2))) + (jfloat(1));
	sp[1].o = (jobject)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_unit;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float_float(ctx, sp[0].o, temp2, ((((jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[1].o))->F_y) + (jfloat(11.0f))) - (jfloat(1.5f))), (frame[8].f), (frame[8].f));
	LINE_NUMBER(426);
	sp[0].o = (jobject)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_color;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(427);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_adminSmall;
	sp[0].o = (jobject)((func_arc_scene_style_TextureRegionDrawable_getRegion_R_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_style_TextureRegionDrawable_getRegion_R_arc_graphics_g2d_TextureRegion])(ctx, sp[0].o);
	sp[1].o = (jobject)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_unit;
	jfloat temp3 = ((((jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[1].o))->F_x) + (((jfloat)((arc_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[4].o)))->F_width) / (jfloat(2)))) + (jfloat(2))) + (jfloat(1));
	sp[1].o = (jobject)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_unit;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float_float(ctx, sp[0].o, temp3, ((((jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[1].o))->F_y) + (jfloat(11.0f))) - (jfloat(1))), (frame[8].f), (frame[8].f));
	}
label_17:;
	{
	LINE_NUMBER(431);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	jint temp0 = (jint)((func_arc_Settings_getBool_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getBool_java_lang_String_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"playerchat"_j))));
	if (temp0 == 0) goto label_29;
	}
	{
	if ((floatCompare(((jfloat)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_textFadeTime), (jfloat(0)), -1)) <= 0) goto label_30;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_lastText;
	if (sp[0].o != nullptr) goto label_31;
	}
label_30:;
	{
	if (((jint)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_typing) == 0) goto label_29;
	}
label_31:;
	{
	LINE_NUMBER(432);
	if ((floatCompare(((jfloat)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_textFadeTime), (jfloat(0)), 1)) <= 0) goto label_32;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_lastText;
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
	sp[-1].o = (jobject) ((mindustry_entities_comp_PlayerComp *) NULL_CHECK(sp[-1].o))->F_lastText;
label_34:;
	{
	sp -= 1;
	frame[8].o = sp[0].o;
	LINE_NUMBER(433);
	frame[9].f = (jfloat(100.0f));
	LINE_NUMBER(434);
	jfloat temp0 = jfloat(1);
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_curve_float_float_R_float(ctx, ((jfloat(1)) - ((jfloat)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_textFadeTime)), (jfloat(0.9f)));
	frame[10].f = (temp0 - temp1);
	LINE_NUMBER(435);
	sp[0].o = frame[3].o;
	jfloat temp2 = jfloat(1);
	jfloat temp3 = jfloat(1);
	jfloat temp4 = jfloat(1);
	sp[1].f = temp2;
	sp[2].f = temp3;
	sp[3].f = temp4;
	sp += 4;
	if ((floatCompare(((jfloat)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_textFadeTime), (jfloat(0)), 1)) <= 0) goto label_38;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_lastText;
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
	LINE_NUMBER(437);
	sp[0].o = frame[4].o;
	sp[1].o = frame[3].o;
	sp[2].o = frame[8].o;
	clinit_arc_graphics_Color(ctx);
	sp[3].o = (jobject)SF_arc_graphics_Color_white;
	((func_arc_graphics_g2d_GlyphLayout_setText_arc_graphics_g2d_Font_java_lang_CharSequence_arc_graphics_Color_float_int_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_GlyphLayout_setText_arc_graphics_g2d_Font_java_lang_CharSequence_arc_graphics_Color_float_int_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, (frame[9].f), (jint(4)), (jint(1)));
	LINE_NUMBER(439);
	jfloat temp0 = jfloat(0);
	jfloat temp1 = jfloat(0);
	jfloat temp2 = jfloat(0);
	jfloat temp3 = jfloat(0.3f);
	sp[0].f = temp0;
	sp[1].f = temp1;
	sp[2].f = temp2;
	sp[3].f = temp3;
	sp += 4;
	if ((floatCompare(((jfloat)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_textFadeTime), (jfloat(0)), 1)) <= 0) goto label_43;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_lastText;
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
	LINE_NUMBER(440);
	sp[0].o = (jobject)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_unit;
	jfloat temp0 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_x;
	sp[0].o = (jobject)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_unit;
	SM_arc_graphics_g2d_Fill_rect_float_float_float_float(ctx, temp0, (((((jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_y) + (jfloat(15.0f))) + ((jfloat)((arc_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[4].o)))->F_height)) - (((jfloat)((arc_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[4].o)))->F_height) / (jfloat(2)))), (((jfloat)((arc_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[4].o)))->F_width) + (jfloat(2))), (((jfloat)((arc_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[4].o)))->F_height) + (jfloat(3.0f))));
	LINE_NUMBER(441);
	sp[0].o = frame[3].o;
	sp[1].o = frame[8].o;
	sp[2].o = (jobject)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_unit;
	jfloat temp1 = ((jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[2].o))->F_x) - ((frame[9].f) / (jfloat(2)));
	sp[2].o = (jobject)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font_draw_java_lang_CharSequence_float_float_float_int_boolean_R_arc_graphics_g2d_GlyphLayout) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font_draw_java_lang_CharSequence_float_float_float_int_boolean_R_arc_graphics_g2d_GlyphLayout])(ctx, sp[0].o, sp[1].o, temp1, ((((jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[2].o))->F_y) + (jfloat(15.0f))) + ((jfloat)((arc_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[4].o)))->F_height)), (frame[9].f), (jint(1)), (jint(1)));
	}
label_29:;
	{
	LINE_NUMBER(444);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(445);
	SM_arc_util_pooling_Pools_free_java_lang_Object(ctx, (frame[4].o));
	LINE_NUMBER(446);
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData])(ctx, (frame[3].o));
	((func_arc_graphics_g2d_Font$FontData_setScale_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font$FontData_setScale_float])(ctx, sp[0].o, (jfloat(1)));
	LINE_NUMBER(447);
	sp[0].o = frame[3].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_white;
	((func_arc_graphics_g2d_Font_setColor_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font_setColor_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(448);
	((func_arc_graphics_g2d_Font_setUseIntegerPositions_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_graphics_g2d_Font_setUseIntegerPositions_boolean])(ctx, (frame[3].o), (frame[7].i));
	LINE_NUMBER(450);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (frame[2].f));
	LINE_NUMBER(451);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_entities_comp_PlayerComp_coloredName_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/PlayerComp:coloredName", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(455);
	sp[0].o = (jobject)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_color;
	sp[0].o = (jobject)((func_arc_graphics_Color_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_toString_R_java_lang_String])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_String_toUpperCase_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_toUpperCase_R_java_lang_String])(ctx, sp[0].o);
	sp[1].o = (jobject)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_name;
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"[#\u0001]\u0001"_j.string, 2, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_entities_comp_PlayerComp_plainName_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/PlayerComp:plainName", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(459);
	sp[0].o = (jobject)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_name;
	sp[0].o = (jobject)SM_arc_util_Strings_stripColors_java_lang_CharSequence_R_java_lang_String(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_PlayerComp_sendMessage_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/PlayerComp:sendMessage", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(463);
	((func_mindustry_entities_comp_PlayerComp_sendMessage_java_lang_String_mindustry_gen_Player_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_PlayerComp_sendMessage_java_lang_String_mindustry_gen_Player_java_lang_String])(ctx, (frame[0].o), (frame[1].o), (jobject(nullptr)), (jobject(nullptr)));
	LINE_NUMBER(464);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_PlayerComp_sendMessage_java_lang_String_mindustry_gen_Player(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/PlayerComp:sendMessage", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(467);
	((func_mindustry_entities_comp_PlayerComp_sendMessage_java_lang_String_mindustry_gen_Player_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_PlayerComp_sendMessage_java_lang_String_mindustry_gen_Player_java_lang_String])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (jobject(nullptr)));
	LINE_NUMBER(468);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_PlayerComp_sendMessage_java_lang_String_mindustry_gen_Player_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/PlayerComp:sendMessage", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(471);
	jint temp0 = (jint)((func_mindustry_entities_comp_PlayerComp_isLocal_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_PlayerComp_isLocal_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(472);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(473);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_chatfrag;
	((func_mindustry_ui_fragments_ChatFragment_addMessage_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_ChatFragment_addMessage_java_lang_String])(ctx, sp[0].o, (frame[1].o));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(476);
	sp[0].o = (jobject)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_con;
	SM_mindustry_gen_Call_sendMessage_mindustry_net_NetConnection_java_lang_String_java_lang_String_mindustry_gen_Player(ctx, sp[0].o, (frame[1].o), (frame[3].o), (frame[2].o));
	}
label_3:;
	LINE_NUMBER(478);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_PlayerComp_sendUnformatted_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/PlayerComp:sendUnformatted", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(481);
	((func_mindustry_entities_comp_PlayerComp_sendUnformatted_mindustry_gen_Player_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_PlayerComp_sendUnformatted_mindustry_gen_Player_java_lang_String])(ctx, (frame[0].o), (jobject(nullptr)), (frame[1].o));
	LINE_NUMBER(482);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_PlayerComp_sendUnformatted_mindustry_gen_Player_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/PlayerComp:sendUnformatted", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(485);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_netServer;
	sp[1].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK(sp[1].o))->F_chatFormatter;
	sp[1].o = (jobject)((func_mindustry_core_NetServer$ChatFormatter_format_mindustry_gen_Player_java_lang_String_R_java_lang_String) resolveInterfaceMethod(ctx, &class_mindustry_core_NetServer$ChatFormatter, INDEX_mindustry_core_NetServer$ChatFormatter_format_mindustry_gen_Player_java_lang_String_R_java_lang_String, sp[1].o))(ctx, sp[1].o, (frame[1].o), (frame[2].o));
	((func_mindustry_entities_comp_PlayerComp_sendMessage_java_lang_String_mindustry_gen_Player_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_comp_PlayerComp_sendMessage_java_lang_String_mindustry_gen_Player_java_lang_String])(ctx, sp[0].o, sp[1].o, (frame[1].o), (frame[2].o));
	LINE_NUMBER(486);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_entities_comp_PlayerComp_getInfo_R_mindustry_net_Administration$PlayerInfo(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/PlayerComp:getInfo", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(489);
	jint temp0 = (jint)((func_mindustry_entities_comp_PlayerComp_isLocal_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_PlayerComp_isLocal_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(490);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Local players cannot be traced and do not have info."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(492);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_netServer;
	sp[0].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK(sp[0].o))->F_admins;
	sp[1].o = (jobject)((func_mindustry_entities_comp_PlayerComp_uuid_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_PlayerComp_uuid_R_java_lang_String])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_mindustry_net_Administration_getInfo_java_lang_String_R_mindustry_net_Administration$PlayerInfo) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Administration_getInfo_java_lang_String_R_mindustry_net_Administration$PlayerInfo])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_entities_comp_PlayerComp_lambda$bestCore$2_mindustry_world_blocks_storage_CoreBlock$CoreBuild_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/PlayerComp:lambda$bestCore$2", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(125);
	jfloat temp0 = (jfloat)((func_mindustry_world_blocks_storage_CoreBlock$CoreBuild_dst2_float_float_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_blocks_storage_CoreBlock$CoreBuild_dst2_float_float_R_float])(ctx, (frame[1].o), ((jfloat)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_entities_comp_PlayerComp *) NULL_CHECK((frame[0].o)))->F_y));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint SM_mindustry_entities_comp_PlayerComp_lambda$bestCore$1_mindustry_world_blocks_storage_CoreBlock$CoreBuild_R_int(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/PlayerComp:lambda$bestCore$1", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_comp_PlayerComp(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(125);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	popStackFrame(ctx);
	return (-((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size));
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_entities_comp_PlayerComp_lambda$bestCore$0_arc_struct_Seq_mindustry_world_blocks_storage_CoreBlock$CoreBuild_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/PlayerComp:lambda$bestCore$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_comp_PlayerComp(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(125);
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
	auto &clazz = class_mindustry_entities_comp_PlayerComp;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field unit
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[4]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field con
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[5]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field selectedBlock
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[10]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[12]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[13]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field lastCommand
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[14]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[15]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[16]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[17]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[18]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[19]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

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

	{ // Field lastReadUnit
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[27]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[28]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field justSwitchFrom
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[29]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field justSwitchTo
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[30]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[31]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[32]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[33]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[34]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[35]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[36]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field previewPlanTree
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[37]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field planEachable
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[38]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[39]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method closestCore
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[3]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Method core
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[4]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Method bestCore
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

	{ // Method unit
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[18]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

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
}

void *vtable_mindustry_entities_comp_PlayerComp[] {
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
	(void *) M_mindustry_entities_comp_PlayerComp_unit_mindustry_gen_Unit,
	(void *) M_mindustry_entities_comp_PlayerComp_unit_R_mindustry_gen_Unit,
	(void *) M_mindustry_entities_units_UnitController_hit_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_comp_PlayerComp_isValidController_R_boolean,
	(void *) M_mindustry_entities_comp_PlayerComp_isLogicControllable_R_boolean,
	(void *) M_mindustry_entities_units_UnitController_updateUnit,
	(void *) M_mindustry_entities_units_UnitController_removed_mindustry_gen_Unit,
	(void *) M_mindustry_entities_units_UnitController_afterRead_mindustry_gen_Unit,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_entities_comp_PlayerComp_remove,
	(void *) M_mindustry_entities_comp_PlayerComp_update,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_entities_comp_PlayerComp_afterSync,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_arc_math_geom_Position_angleTo_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_angleTo_float_float_R_float,
	(void *) M_arc_math_geom_Position_dst2_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_dst_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_dst_float_float_R_float,
	(void *) M_arc_math_geom_Position_dst2_float_float_R_float,
	(void *) M_arc_math_geom_Position_within_arc_math_geom_Position_float_R_boolean,
	(void *) M_arc_math_geom_Position_within_float_float_float_R_boolean,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_entities_comp_PlayerComp_clipSize_R_float,
	(void *) M_mindustry_entities_comp_PlayerComp_draw,
	(void *) M_mindustry_entities_comp_PlayerComp_getPreviewPlans_R_arc_struct_Seq,
	(void *) M_mindustry_entities_comp_PlayerComp_handlePreviewPlans_int_arc_struct_Seq,
	(void *) M_mindustry_entities_comp_PlayerComp_isBuilder_R_boolean,
	(void *) M_mindustry_entities_comp_PlayerComp_closestCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild,
	(void *) M_mindustry_entities_comp_PlayerComp_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild,
	(void *) M_mindustry_entities_comp_PlayerComp_bestCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild,
	(void *) M_mindustry_entities_comp_PlayerComp_icon_R_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_entities_comp_PlayerComp_displayAmmo_R_boolean,
	(void *) M_mindustry_entities_comp_PlayerComp_reset,
	(void *) M_mindustry_entities_comp_PlayerComp_checkSpawn,
	(void *) M_mindustry_entities_comp_PlayerComp_team_mindustry_game_Team,
	(void *) M_mindustry_entities_comp_PlayerComp_clearUnit,
	(void *) M_mindustry_entities_comp_PlayerComp_dead_R_boolean,
	(void *) M_mindustry_entities_comp_PlayerComp_ip_R_java_lang_String,
	(void *) M_mindustry_entities_comp_PlayerComp_uuid_R_java_lang_String,
	(void *) M_mindustry_entities_comp_PlayerComp_usid_R_java_lang_String,
	(void *) M_mindustry_entities_comp_PlayerComp_kick_mindustry_net_Packets$KickReason,
	(void *) M_mindustry_entities_comp_PlayerComp_kick_mindustry_net_Packets$KickReason_long,
	(void *) M_mindustry_entities_comp_PlayerComp_kick_java_lang_String,
	(void *) M_mindustry_entities_comp_PlayerComp_kick_java_lang_String_long,
	(void *) M_mindustry_entities_comp_PlayerComp_isPinging_R_boolean,
	(void *) M_mindustry_entities_comp_PlayerComp_drawPing,
	(void *) M_mindustry_entities_comp_PlayerComp_drawName,
	(void *) M_mindustry_entities_comp_PlayerComp_coloredName_R_java_lang_String,
	(void *) M_mindustry_entities_comp_PlayerComp_plainName_R_java_lang_String,
	(void *) M_mindustry_entities_comp_PlayerComp_sendMessage_java_lang_String,
	(void *) M_mindustry_entities_comp_PlayerComp_sendMessage_java_lang_String_mindustry_gen_Player,
	(void *) M_mindustry_entities_comp_PlayerComp_sendMessage_java_lang_String_mindustry_gen_Player_java_lang_String,
	(void *) M_mindustry_entities_comp_PlayerComp_sendUnformatted_java_lang_String,
	(void *) M_mindustry_entities_comp_PlayerComp_sendUnformatted_mindustry_gen_Player_java_lang_String,
	(void *) M_mindustry_entities_comp_PlayerComp_getInfo_R_mindustry_net_Administration$PlayerInfo,
	(void *) M_mindustry_entities_comp_PlayerComp_lambda$bestCore$2_mindustry_world_blocks_storage_CoreBlock$CoreBuild_R_float,
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
	{ "unit", "(Lmindustry/gen/Unit;)V" },
	{ "unit", "()Lmindustry/gen/Unit;" },
	{ "hit", "(Lmindustry/gen/Bullet;)V" },
	{ "isValidController", "()Z" },
	{ "isLogicControllable", "()Z" },
	{ "updateUnit", "()V" },
	{ "removed", "(Lmindustry/gen/Unit;)V" },
	{ "afterRead", "(Lmindustry/gen/Unit;)V" },
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
	{ "getPreviewPlans", "()Larc/struct/Seq;" },
	{ "handlePreviewPlans", "(ILarc/struct/Seq;)V" },
	{ "isBuilder", "()Z" },
	{ "closestCore", "()Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;" },
	{ "core", "()Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;" },
	{ "bestCore", "()Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;" },
	{ "icon", "()Larc/graphics/g2d/TextureRegion;" },
	{ "displayAmmo", "()Z" },
	{ "reset", "()V" },
	{ "checkSpawn", "()V" },
	{ "team", "(Lmindustry/game/Team;)V" },
	{ "clearUnit", "()V" },
	{ "dead", "()Z" },
	{ "ip", "()Ljava/lang/String;" },
	{ "uuid", "()Ljava/lang/String;" },
	{ "usid", "()Ljava/lang/String;" },
	{ "kick", "(Lmindustry/net/Packets$KickReason;)V" },
	{ "kick", "(Lmindustry/net/Packets$KickReason;J)V" },
	{ "kick", "(Ljava/lang/String;)V" },
	{ "kick", "(Ljava/lang/String;J)V" },
	{ "isPinging", "()Z" },
	{ "drawPing", "()V" },
	{ "drawName", "()V" },
	{ "coloredName", "()Ljava/lang/String;" },
	{ "plainName", "()Ljava/lang/String;" },
	{ "sendMessage", "(Ljava/lang/String;)V" },
	{ "sendMessage", "(Ljava/lang/String;Lmindustry/gen/Player;)V" },
	{ "sendMessage", "(Ljava/lang/String;Lmindustry/gen/Player;Ljava/lang/String;)V" },
	{ "sendUnformatted", "(Ljava/lang/String;)V" },
	{ "sendUnformatted", "(Lmindustry/gen/Player;Ljava/lang/String;)V" },
	{ "getInfo", "()Lmindustry/net/Administration$PlayerInfo;" },
	{ "lambda$bestCore$2", "(Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;)F" },
};

static jclass interfaces[] { &class_mindustry_entities_units_UnitController, &class_mindustry_gen_Entityc, &class_mindustry_gen_Syncc, &class_mindustry_gen_Timerc, &class_mindustry_gen_Drawc, };

static FieldMetadata fields[] {
	{ "deathDelay", &class_float, (intptr_t) &SF_mindustry_entities_comp_PlayerComp_deathDelay, "F", 24 },
	{ "pingDuration", &class_float, (intptr_t) &SF_mindustry_entities_comp_PlayerComp_pingDuration, "F", 24 },
	{ "x", &class_float, offsetof(mindustry_entities_comp_PlayerComp, F_x), "F", 0 },
	{ "y", &class_float, offsetof(mindustry_entities_comp_PlayerComp, F_y), "F", 0 },
	{ "unit", &class_mindustry_gen_Unit, offsetof(mindustry_entities_comp_PlayerComp, F_unit), "Lmindustry/gen/Unit;", 0 },
	{ "con", &class_mindustry_net_NetConnection, offsetof(mindustry_entities_comp_PlayerComp, F_con), "Lmindustry/net/NetConnection;", 128 },
	{ "team", &class_mindustry_game_Team, offsetof(mindustry_entities_comp_PlayerComp, F_team), "Lmindustry/game/Team;", 0 },
	{ "typing", &class_boolean, offsetof(mindustry_entities_comp_PlayerComp, F_typing), "Z", 0 },
	{ "shooting", &class_boolean, offsetof(mindustry_entities_comp_PlayerComp, F_shooting), "Z", 0 },
	{ "boosting", &class_boolean, offsetof(mindustry_entities_comp_PlayerComp, F_boosting), "Z", 0 },
	{ "selectedBlock", &class_mindustry_world_Block, offsetof(mindustry_entities_comp_PlayerComp, F_selectedBlock), "Lmindustry/world/Block;", 0 },
	{ "selectedRotation", &class_int, offsetof(mindustry_entities_comp_PlayerComp, F_selectedRotation), "I", 0 },
	{ "mouseX", &class_float, offsetof(mindustry_entities_comp_PlayerComp, F_mouseX), "F", 0 },
	{ "mouseY", &class_float, offsetof(mindustry_entities_comp_PlayerComp, F_mouseY), "F", 0 },
	{ "lastCommand", &class_mindustry_ai_UnitCommand, offsetof(mindustry_entities_comp_PlayerComp, F_lastCommand), "Lmindustry/ai/UnitCommand;", 0 },
	{ "admin", &class_boolean, offsetof(mindustry_entities_comp_PlayerComp, F_admin), "Z", 0 },
	{ "name", &class_java_lang_String, offsetof(mindustry_entities_comp_PlayerComp, F_name), "Ljava/lang/String;", 0 },
	{ "color", &class_arc_graphics_Color, offsetof(mindustry_entities_comp_PlayerComp, F_color), "Larc/graphics/Color;", 0 },
	{ "locale", &class_java_lang_String, offsetof(mindustry_entities_comp_PlayerComp, F_locale), "Ljava/lang/String;", 128 },
	{ "deathTimer", &class_float, offsetof(mindustry_entities_comp_PlayerComp, F_deathTimer), "F", 128 },
	{ "lastText", &class_java_lang_String, offsetof(mindustry_entities_comp_PlayerComp, F_lastText), "Ljava/lang/String;", 128 },
	{ "textFadeTime", &class_float, offsetof(mindustry_entities_comp_PlayerComp, F_textFadeTime), "F", 128 },
	{ "itemDepositRate", &class_arc_util_Ratekeeper, offsetof(mindustry_entities_comp_PlayerComp, F_itemDepositRate), "Larc/util/Ratekeeper;", 128 },
	{ "pingX", &class_float, offsetof(mindustry_entities_comp_PlayerComp, F_pingX), "F", 128 },
	{ "pingY", &class_float, offsetof(mindustry_entities_comp_PlayerComp, F_pingY), "F", 128 },
	{ "pingTime", &class_float, offsetof(mindustry_entities_comp_PlayerComp, F_pingTime), "F", 128 },
	{ "pingText", &class_java_lang_String, offsetof(mindustry_entities_comp_PlayerComp, F_pingText), "Ljava/lang/String;", 128 },
	{ "lastReadUnit", &class_mindustry_gen_Unit, offsetof(mindustry_entities_comp_PlayerComp, F_lastReadUnit), "Lmindustry/gen/Unit;", 130 },
	{ "wrongReadUnits", &class_int, offsetof(mindustry_entities_comp_PlayerComp, F_wrongReadUnits), "I", 130 },
	{ "justSwitchFrom", &class_mindustry_gen_Unit, offsetof(mindustry_entities_comp_PlayerComp, F_justSwitchFrom), "Lmindustry/gen/Unit;", 128 },
	{ "justSwitchTo", &class_mindustry_gen_Unit, offsetof(mindustry_entities_comp_PlayerComp, F_justSwitchTo), "Lmindustry/gen/Unit;", 128 },
	{ "lastPreviewPlanGroup", &class_int, offsetof(mindustry_entities_comp_PlayerComp, F_lastPreviewPlanGroup), "I", 128 },
	{ "lastPreviewPlanGroupServer", &class_int, offsetof(mindustry_entities_comp_PlayerComp, F_lastPreviewPlanGroupServer), "I", 128 },
	{ "lastPreviewPlanTimestamp", &class_long, offsetof(mindustry_entities_comp_PlayerComp, F_lastPreviewPlanTimestamp), "J", 128 },
	{ "receivingNewPlanGroup", &class_boolean, offsetof(mindustry_entities_comp_PlayerComp, F_receivingNewPlanGroup), "Z", 128 },
	{ "previewPlansCurrent", &class_arc_struct_Seq, offsetof(mindustry_entities_comp_PlayerComp, F_previewPlansCurrent), "Larc/struct/Seq;", 128 },
	{ "previewPlansAssembling", &class_arc_struct_Seq, offsetof(mindustry_entities_comp_PlayerComp, F_previewPlansAssembling), "Larc/struct/Seq;", 128 },
	{ "previewPlanTree", &class_arc_math_geom_QuadTree, offsetof(mindustry_entities_comp_PlayerComp, F_previewPlanTree), "Larc/math/geom/QuadTree;", 128 },
	{ "planEachable", &class_mindustry_input_InputHandler$QueryEachable, offsetof(mindustry_entities_comp_PlayerComp, F_planEachable), "Lmindustry/input/InputHandler$QueryEachable;", 128 },
	{ "previewPlansDirty", &class_boolean, offsetof(mindustry_entities_comp_PlayerComp, F_previewPlansDirty), "Z", 128 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_entities_comp_PlayerComp, 0, "()V", 0 },
	{ "getPreviewPlans", (intptr_t) M_mindustry_entities_comp_PlayerComp_getPreviewPlans_R_arc_struct_Seq, VTABLE_mindustry_entities_comp_PlayerComp_getPreviewPlans_R_arc_struct_Seq, "()Larc/struct/Seq;", 1 },
	{ "handlePreviewPlans", (intptr_t) M_mindustry_entities_comp_PlayerComp_handlePreviewPlans_int_arc_struct_Seq, VTABLE_mindustry_entities_comp_PlayerComp_handlePreviewPlans_int_arc_struct_Seq, "(ILarc/struct/Seq;)V", 1 },
	{ "isBuilder", (intptr_t) M_mindustry_entities_comp_PlayerComp_isBuilder_R_boolean, VTABLE_mindustry_entities_comp_PlayerComp_isBuilder_R_boolean, "()Z", 1 },
	{ "closestCore", (intptr_t) M_mindustry_entities_comp_PlayerComp_closestCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild, VTABLE_mindustry_entities_comp_PlayerComp_closestCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild, "()Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;", 1 },
	{ "core", (intptr_t) M_mindustry_entities_comp_PlayerComp_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild, VTABLE_mindustry_entities_comp_PlayerComp_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild, "()Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;", 1 },
	{ "bestCore", (intptr_t) M_mindustry_entities_comp_PlayerComp_bestCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild, VTABLE_mindustry_entities_comp_PlayerComp_bestCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild, "()Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;", 1 },
	{ "icon", (intptr_t) M_mindustry_entities_comp_PlayerComp_icon_R_arc_graphics_g2d_TextureRegion, VTABLE_mindustry_entities_comp_PlayerComp_icon_R_arc_graphics_g2d_TextureRegion, "()Larc/graphics/g2d/TextureRegion;", 1 },
	{ "displayAmmo", (intptr_t) M_mindustry_entities_comp_PlayerComp_displayAmmo_R_boolean, VTABLE_mindustry_entities_comp_PlayerComp_displayAmmo_R_boolean, "()Z", 1 },
	{ "reset", (intptr_t) M_mindustry_entities_comp_PlayerComp_reset, VTABLE_mindustry_entities_comp_PlayerComp_reset, "()V", 1 },
	{ "isValidController", (intptr_t) M_mindustry_entities_comp_PlayerComp_isValidController_R_boolean, VTABLE_mindustry_entities_comp_PlayerComp_isValidController_R_boolean, "()Z", 1 },
	{ "isLogicControllable", (intptr_t) M_mindustry_entities_comp_PlayerComp_isLogicControllable_R_boolean, VTABLE_mindustry_entities_comp_PlayerComp_isLogicControllable_R_boolean, "()Z", 1 },
	{ "clipSize", (intptr_t) M_mindustry_entities_comp_PlayerComp_clipSize_R_float, VTABLE_mindustry_entities_comp_PlayerComp_clipSize_R_float, "()F", 1 },
	{ "afterSync", (intptr_t) M_mindustry_entities_comp_PlayerComp_afterSync, VTABLE_mindustry_entities_comp_PlayerComp_afterSync, "()V", 1 },
	{ "update", (intptr_t) M_mindustry_entities_comp_PlayerComp_update, VTABLE_mindustry_entities_comp_PlayerComp_update, "()V", 1 },
	{ "checkSpawn", (intptr_t) M_mindustry_entities_comp_PlayerComp_checkSpawn, VTABLE_mindustry_entities_comp_PlayerComp_checkSpawn, "()V", 1 },
	{ "remove", (intptr_t) M_mindustry_entities_comp_PlayerComp_remove, VTABLE_mindustry_entities_comp_PlayerComp_remove, "()V", 1 },
	{ "team", (intptr_t) M_mindustry_entities_comp_PlayerComp_team_mindustry_game_Team, VTABLE_mindustry_entities_comp_PlayerComp_team_mindustry_game_Team, "(Lmindustry/game/Team;)V", 1 },
	{ "clearUnit", (intptr_t) M_mindustry_entities_comp_PlayerComp_clearUnit, VTABLE_mindustry_entities_comp_PlayerComp_clearUnit, "()V", 1 },
	{ "unit", (intptr_t) M_mindustry_entities_comp_PlayerComp_unit_R_mindustry_gen_Unit, VTABLE_mindustry_entities_comp_PlayerComp_unit_R_mindustry_gen_Unit, "()Lmindustry/gen/Unit;", 1 },
	{ "unit", (intptr_t) M_mindustry_entities_comp_PlayerComp_unit_mindustry_gen_Unit, VTABLE_mindustry_entities_comp_PlayerComp_unit_mindustry_gen_Unit, "(Lmindustry/gen/Unit;)V", 1 },
	{ "dead", (intptr_t) M_mindustry_entities_comp_PlayerComp_dead_R_boolean, VTABLE_mindustry_entities_comp_PlayerComp_dead_R_boolean, "()Z", 0 },
	{ "ip", (intptr_t) M_mindustry_entities_comp_PlayerComp_ip_R_java_lang_String, VTABLE_mindustry_entities_comp_PlayerComp_ip_R_java_lang_String, "()Ljava/lang/String;", 0 },
	{ "uuid", (intptr_t) M_mindustry_entities_comp_PlayerComp_uuid_R_java_lang_String, VTABLE_mindustry_entities_comp_PlayerComp_uuid_R_java_lang_String, "()Ljava/lang/String;", 0 },
	{ "usid", (intptr_t) M_mindustry_entities_comp_PlayerComp_usid_R_java_lang_String, VTABLE_mindustry_entities_comp_PlayerComp_usid_R_java_lang_String, "()Ljava/lang/String;", 0 },
	{ "kick", (intptr_t) M_mindustry_entities_comp_PlayerComp_kick_mindustry_net_Packets$KickReason, VTABLE_mindustry_entities_comp_PlayerComp_kick_mindustry_net_Packets$KickReason, "(Lmindustry/net/Packets$KickReason;)V", 0 },
	{ "kick", (intptr_t) M_mindustry_entities_comp_PlayerComp_kick_mindustry_net_Packets$KickReason_long, VTABLE_mindustry_entities_comp_PlayerComp_kick_mindustry_net_Packets$KickReason_long, "(Lmindustry/net/Packets$KickReason;J)V", 0 },
	{ "kick", (intptr_t) M_mindustry_entities_comp_PlayerComp_kick_java_lang_String, VTABLE_mindustry_entities_comp_PlayerComp_kick_java_lang_String, "(Ljava/lang/String;)V", 0 },
	{ "kick", (intptr_t) M_mindustry_entities_comp_PlayerComp_kick_java_lang_String_long, VTABLE_mindustry_entities_comp_PlayerComp_kick_java_lang_String_long, "(Ljava/lang/String;J)V", 0 },
	{ "draw", (intptr_t) M_mindustry_entities_comp_PlayerComp_draw, VTABLE_mindustry_entities_comp_PlayerComp_draw, "()V", 1 },
	{ "isPinging", (intptr_t) M_mindustry_entities_comp_PlayerComp_isPinging_R_boolean, VTABLE_mindustry_entities_comp_PlayerComp_isPinging_R_boolean, "()Z", 1 },
	{ "drawPing", (intptr_t) M_mindustry_entities_comp_PlayerComp_drawPing, VTABLE_mindustry_entities_comp_PlayerComp_drawPing, "()V", 0 },
	{ "drawName", (intptr_t) M_mindustry_entities_comp_PlayerComp_drawName, VTABLE_mindustry_entities_comp_PlayerComp_drawName, "()V", 0 },
	{ "coloredName", (intptr_t) M_mindustry_entities_comp_PlayerComp_coloredName_R_java_lang_String, VTABLE_mindustry_entities_comp_PlayerComp_coloredName_R_java_lang_String, "()Ljava/lang/String;", 0 },
	{ "plainName", (intptr_t) M_mindustry_entities_comp_PlayerComp_plainName_R_java_lang_String, VTABLE_mindustry_entities_comp_PlayerComp_plainName_R_java_lang_String, "()Ljava/lang/String;", 0 },
	{ "sendMessage", (intptr_t) M_mindustry_entities_comp_PlayerComp_sendMessage_java_lang_String, VTABLE_mindustry_entities_comp_PlayerComp_sendMessage_java_lang_String, "(Ljava/lang/String;)V", 0 },
	{ "sendMessage", (intptr_t) M_mindustry_entities_comp_PlayerComp_sendMessage_java_lang_String_mindustry_gen_Player, VTABLE_mindustry_entities_comp_PlayerComp_sendMessage_java_lang_String_mindustry_gen_Player, "(Ljava/lang/String;Lmindustry/gen/Player;)V", 0 },
	{ "sendMessage", (intptr_t) M_mindustry_entities_comp_PlayerComp_sendMessage_java_lang_String_mindustry_gen_Player_java_lang_String, VTABLE_mindustry_entities_comp_PlayerComp_sendMessage_java_lang_String_mindustry_gen_Player_java_lang_String, "(Ljava/lang/String;Lmindustry/gen/Player;Ljava/lang/String;)V", 0 },
	{ "sendUnformatted", (intptr_t) M_mindustry_entities_comp_PlayerComp_sendUnformatted_java_lang_String, VTABLE_mindustry_entities_comp_PlayerComp_sendUnformatted_java_lang_String, "(Ljava/lang/String;)V", 0 },
	{ "sendUnformatted", (intptr_t) M_mindustry_entities_comp_PlayerComp_sendUnformatted_mindustry_gen_Player_java_lang_String, VTABLE_mindustry_entities_comp_PlayerComp_sendUnformatted_mindustry_gen_Player_java_lang_String, "(Lmindustry/gen/Player;Ljava/lang/String;)V", 0 },
	{ "getInfo", (intptr_t) M_mindustry_entities_comp_PlayerComp_getInfo_R_mindustry_net_Administration$PlayerInfo, VTABLE_mindustry_entities_comp_PlayerComp_getInfo_R_mindustry_net_Administration$PlayerInfo, "()Lmindustry/net/Administration$PlayerInfo;", 0 },
	{ "lambda$bestCore$2", (intptr_t) M_mindustry_entities_comp_PlayerComp_lambda$bestCore$2_mindustry_world_blocks_storage_CoreBlock$CoreBuild_R_float, VTABLE_mindustry_entities_comp_PlayerComp_lambda$bestCore$2_mindustry_world_blocks_storage_CoreBlock$CoreBuild_R_float, "(Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;)F", 4098 },
	{ "lambda$bestCore$1", (intptr_t) SM_mindustry_entities_comp_PlayerComp_lambda$bestCore$1_mindustry_world_blocks_storage_CoreBlock$CoreBuild_R_int, 0, "(Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;)I", 4106 },
	{ "lambda$bestCore$0", (intptr_t) SM_mindustry_entities_comp_PlayerComp_lambda$bestCore$0_arc_struct_Seq_mindustry_world_blocks_storage_CoreBlock$CoreBuild_R_boolean, 0, "(Larc/struct/Seq;Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;)Z", 4106 },
};

Class class_mindustry_entities_comp_PlayerComp{
		.nativeName = (intptr_t) "mindustry/entities/comp/PlayerComp",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_entities_comp_PlayerComp),
		.classVtable = (intptr_t) vtable_mindustry_entities_comp_PlayerComp,
		.staticInitializer = (intptr_t) clinit_mindustry_entities_comp_PlayerComp,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_entities_comp_PlayerComp,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1056,
		.interfaceCount = 5,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 40,
		.nativeFields = (intptr_t) fields,
		.methodCount = 44,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 112,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_entities_comp_PlayerComp = registerClass(&class_mindustry_entities_comp_PlayerComp);

}
