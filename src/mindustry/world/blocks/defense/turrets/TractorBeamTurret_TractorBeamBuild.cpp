#include "mindustry/world/blocks/defense/turrets/TractorBeamTurret_TractorBeamBuild.h"
#include "arc/math/geom/Vec2.h"
#include "mindustry/world/blocks/defense/turrets/BaseTurret_BaseTurretBuild.h"
#include "arc/math/Angles.h"
#include "mindustry/game/Rules.h"
#include "mindustry/world/blocks/defense/turrets/TractorBeamTurret_TractorBeamBuild_invoke_arc_func_Boolf_1.h"
#include "arc/graphics/Color.h"
#include "mindustry/ui/Displayable.h"
#include "mindustry/gen/Unitc.h"
#include "arc/graphics/g2d/Draw.h"
#include "java/lang/reflect/Constructor.h"
#include "mindustry/entities/Effect.h"
#include "mindustry/content/StatusEffects.h"
#include "mindustry/gen/Physicsc.h"
#include "arc/util/Tmp.h"
#include "mindustry/core/Control.h"
#include "java/lang/reflect/Method.h"
#include "arc/math/geom/Position.h"
#include "mindustry/gen/Healthc.h"
#include "arc/func/Boolf.h"
#include "java/lang/Math.h"
#include "arc/math/Mathf.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "java/lang/reflect/Field.h"
#include "mindustry/gen/Unit.h"
#include "mindustry/type/Liquid.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/type/StatusEffect.h"
#include "arc/util/Time.h"
#include "mindustry/world/consumers/ConsumeLiquidBase.h"
#include "arc/util/Nullable.h"
#include "mindustry/gen/Building.h"
#include "arc/util/io/Reads.h"
#include "java/lang/Object.h"
#include "mindustry/world/blocks/defense/turrets/TractorBeamTurret.h"
#include "arc/audio/Sound.h"
#include "mindustry/world/blocks/defense/turrets/TractorBeamTurret_TractorBeamBuild.h"
#include "mindustry/world/blocks/defense/turrets/BaseTurret.h"
#include "mindustry/gen/Statusc.h"
#include "mindustry/graphics/Drawf.h"
#include "mindustry/entities/Units.h"
#include "mindustry/game/Team.h"
#include "mindustry/world/modules/LiquidModule.h"
#include "mindustry/Vars.h"
#include "mindustry/core/GameState.h"
#include "mindustry/audio/SoundControl.h"
#include "arc/util/io/Writes.h"

extern "C" {


void mark_mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_world_blocks_defense_turrets_BaseTurret$BaseTurretBuild(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild *) object;
	if (self->F_target)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_target)->clazz)->markFunction)((jobject) self->F_target, mark, depth + 1);
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_world_blocks_defense_turrets_BaseTurret$BaseTurretBuild(ctx);
}

void init_mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild_mindustry_world_blocks_defense_turrets_TractorBeamTurret(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/turrets/TractorBeamTurret$TractorBeamBuild:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(75);
	((mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_mindustry_world_blocks_defense_turrets_BaseTurret$BaseTurretBuild_mindustry_world_blocks_defense_turrets_BaseTurret(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(79);
	((mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild *) NULL_CHECK((frame[0].o)))->F_coolantMultiplier = (jfloat(1));
	LINE_NUMBER(75);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild_updateTile(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/turrets/TractorBeamTurret$TractorBeamBuild:updateTile", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(83);
	if ((floatCompare(((jfloat)((mindustry_world_blocks_defense_turrets_BaseTurret$BaseTurretBuild *) NULL_CHECK((frame[0].o)))->F_activationTimer), (jfloat(0)), -1)) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(84);
	sp[0].o = frame[0].o;
	((mindustry_world_blocks_defense_turrets_BaseTurret$BaseTurretBuild *) NULL_CHECK(sp[0].o))->F_activationTimer = (((jfloat)((mindustry_world_blocks_defense_turrets_BaseTurret$BaseTurretBuild *) NULL_CHECK(sp[0].o))->F_activationTimer) - (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta));
	LINE_NUMBER(85);
	popStackFrame(ctx);
	return;
	}
label_1:;
	{
	LINE_NUMBER(88);
	frame[1].f = (((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_efficiency) * ((jfloat)((mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild *) NULL_CHECK((frame[0].o)))->F_coolantMultiplier));
	jfloat temp0 = frame[1].f;
	jfloat temp1 = (jfloat)((func_mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild_delta_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild_delta_R_float])(ctx, (frame[0].o));
	frame[2].f = (temp0 * temp1);
	LINE_NUMBER(91);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp2 = (jint)((mindustry_world_blocks_defense_turrets_TractorBeamTurret *) NULL_CHECK(sp[1].o))->F_timerTarget;
	sp[1].o = (jobject)((mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp3 = (jint)((func_mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild_timer_int_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild_timer_int_float_R_boolean])(ctx, sp[0].o, temp2, ((jfloat)((mindustry_world_blocks_defense_turrets_TractorBeamTurret *) NULL_CHECK(sp[1].o))->F_retargetTime));
	if (temp3 == 0) goto label_6;
	}
	{
	LINE_NUMBER(92);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	sp[2].o = (jobject)((mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp2 = (jfloat)((mindustry_world_blocks_defense_turrets_BaseTurret *) NULL_CHECK(sp[2].o))->F_range;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild_invoke_arc_func_Boolf_1(ctx);
		auto proxy = (mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild_invoke_arc_func_Boolf_1 *) gcAlloc(ctx, &class_mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild_invoke_arc_func_Boolf_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[1].o = (jobject)SM_mindustry_entities_Units_closestEnemy_mindustry_game_Team_float_float_float_arc_func_Boolf_R_mindustry_gen_Unit(ctx, sp[1].o, temp0, temp1, temp2, sp[2].o);
	((mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild *) NULL_CHECK(sp[0].o))->F_target = (jref) sp[1].o;
	}
label_6:;
	{
	LINE_NUMBER(96);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild *) NULL_CHECK((frame[0].o)))->F_target;
	if (sp[0].o == nullptr) goto label_8;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_BaseTurret *) NULL_CHECK(sp[0].o))->F_coolant;
	if (sp[0].o == nullptr) goto label_8;
	}
	{
	LINE_NUMBER(97);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_BaseTurret *) NULL_CHECK(sp[0].o))->F_coolant;
	frame[3].f = ((jfloat)((mindustry_world_consumers_ConsumeLiquidBase *) NULL_CHECK(sp[0].o))->F_amount);
	LINE_NUMBER(99);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_liquids;
	sp[0].o = (jobject)((func_mindustry_world_modules_LiquidModule_current_R_mindustry_type_Liquid) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_current_R_mindustry_type_Liquid])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(101);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_liquids;
	jfloat temp0 = (jfloat)((func_mindustry_world_modules_LiquidModule_get_mindustry_type_Liquid_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_get_mindustry_type_Liquid_R_float])(ctx, sp[0].o, (frame[4].o));
	jfloat temp1 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, temp0, ((frame[3].f) * (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta)));
	jfloat temp2 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (jfloat(0)), (((jfloat(1)) / ((jfloat)((mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild *) NULL_CHECK((frame[0].o)))->F_coolantMultiplier)) / ((jfloat)((mindustry_type_Liquid *) NULL_CHECK((frame[4].o)))->F_heatCapacity)));
	jfloat temp3 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, temp1, temp2);
	frame[5].f = temp3;
	LINE_NUMBER(103);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_liquids;
	((func_mindustry_world_modules_LiquidModule_remove_mindustry_type_Liquid_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_remove_mindustry_type_Liquid_float])(ctx, sp[0].o, (frame[4].o), (frame[5].f));
	LINE_NUMBER(105);
	jint temp4 = (jint)SM_arc_math_Mathf_chance_double_R_boolean(ctx, ((jdouble(0.06)) * (jdouble((frame[5].f)))));
	if (temp4 == 0) goto label_14;
	}
	{
	LINE_NUMBER(106);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_BaseTurret *) NULL_CHECK(sp[0].o))->F_coolEffect;
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	sp[1].o = (jobject)((mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_range_float_R_float(ctx, ((jfloat((((jint)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_size) * (8)))) / (jfloat(2))));
	jfloat temp2 = temp0 + temp1;
	jfloat temp3 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	sp[1].o = (jobject)((mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp4 = (jfloat)SM_arc_math_Mathf_range_float_R_float(ctx, ((jfloat((((jint)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_size) * (8)))) / (jfloat(2))));
	((func_mindustry_entities_Effect_at_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float])(ctx, sp[0].o, temp2, (temp3 + temp4));
	}
label_14:;
	{
	LINE_NUMBER(109);
	((mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild *) NULL_CHECK((frame[0].o)))->F_coolantMultiplier = ((jfloat(1)) + (((frame[5].f) * ((jfloat)((mindustry_type_Liquid *) NULL_CHECK((frame[4].o)))->F_heatCapacity)) * ((jfloat)((mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild *) NULL_CHECK((frame[0].o)))->F_coolantMultiplier)));
	}
label_8:;
	{
	LINE_NUMBER(112);
	((mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild *) NULL_CHECK((frame[0].o)))->F_any = (jint(0));
	LINE_NUMBER(115);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild *) NULL_CHECK((frame[0].o)))->F_target;
	if (sp[0].o == nullptr) goto label_17;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild *) NULL_CHECK((frame[0].o)))->F_target;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp0 = (jfloat)((mindustry_world_blocks_defense_turrets_BaseTurret *) NULL_CHECK(sp[2].o))->F_range;
	sp[2].o = (jobject)((mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild *) NULL_CHECK((frame[0].o)))->F_target;
	jint temp1 = (jint)((func_mindustry_gen_Unit_within_arc_math_geom_Position_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_within_arc_math_geom_Position_float_R_boolean])(ctx, sp[0].o, sp[1].o, (temp0 + (((jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[2].o))->F_hitSize) / (jfloat(2)))));
	if (temp1 == 0) goto label_17;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild *) NULL_CHECK((frame[0].o)))->F_target;
	sp[0].o = (jobject)((func_mindustry_gen_Unit_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_team_R_mindustry_game_Team])(ctx, sp[0].o);
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	if (sp[0].o == sp[1].o) goto label_17;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild *) NULL_CHECK((frame[0].o)))->F_target;
	sp[1].o = (jobject)((mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)((mindustry_world_blocks_defense_turrets_TractorBeamTurret *) NULL_CHECK(sp[1].o))->F_targetAir;
	sp[1].o = (jobject)((mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp1 = (jint)((func_mindustry_gen_Unit_checkTarget_boolean_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_checkTarget_boolean_boolean_R_boolean])(ctx, sp[0].o, temp0, ((jint)((mindustry_world_blocks_defense_turrets_TractorBeamTurret *) NULL_CHECK(sp[1].o))->F_targetGround));
	if (temp1 == 0) goto label_17;
	}
	{
	if ((floatCompare(((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_efficiency), (jfloat(0.02f)), -1)) <= 0) goto label_17;
	}
	{
	LINE_NUMBER(116);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_headless) != 0) goto label_19;
	}
	{
	LINE_NUMBER(117);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_sound;
	sp[1].o = (jobject)((mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_world_blocks_defense_turrets_TractorBeamTurret *) NULL_CHECK(sp[1].o))->F_shootSound;
	sp[2].o = frame[0].o;
	sp[3].o = (jobject)((mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_mindustry_audio_SoundControl_loop_arc_audio_Sound_arc_math_geom_Position_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_audio_SoundControl_loop_arc_audio_Sound_arc_math_geom_Position_float])(ctx, sp[0].o, sp[1].o, sp[2].o, ((jfloat)((mindustry_world_blocks_defense_turrets_TractorBeamTurret *) NULL_CHECK(sp[3].o))->F_shootSoundVolume));
	}
label_19:;
	{
	LINE_NUMBER(120);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild *) NULL_CHECK((frame[0].o)))->F_target;
	jfloat temp0 = (jfloat)((func_mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild_angleTo_arc_math_geom_Position_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild_angleTo_arc_math_geom_Position_R_float])(ctx, sp[0].o, sp[1].o);
	frame[3].f = temp0;
	LINE_NUMBER(121);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)((mindustry_world_blocks_defense_turrets_BaseTurret$BaseTurretBuild *) NULL_CHECK((frame[0].o)))->F_rotation;
	jfloat temp2 = frame[3].f;
	sp[1].o = (jobject)((mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp3 = (jfloat)SM_arc_math_Angles_moveToward_float_float_float_R_float(ctx, temp1, temp2, (((jfloat)((mindustry_world_blocks_defense_turrets_BaseTurret *) NULL_CHECK(sp[1].o))->F_rotateSpeed) * (frame[2].f)));
	((mindustry_world_blocks_defense_turrets_BaseTurret$BaseTurretBuild *) NULL_CHECK(sp[0].o))->F_rotation = temp3;
	LINE_NUMBER(122);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild *) NULL_CHECK((frame[0].o)))->F_target;
	((mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild *) NULL_CHECK(sp[0].o))->F_lastX = ((jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[1].o))->F_x);
	LINE_NUMBER(123);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild *) NULL_CHECK((frame[0].o)))->F_target;
	((mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild *) NULL_CHECK(sp[0].o))->F_lastY = ((jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[1].o))->F_y);
	LINE_NUMBER(124);
	sp[0].o = frame[0].o;
	jfloat temp4 = (jfloat)SM_arc_math_Mathf_lerpDelta_float_float_float_R_float(ctx, ((jfloat)((mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild *) NULL_CHECK((frame[0].o)))->F_strength), (jfloat(1)), (jfloat(0.1f)));
	((mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild *) NULL_CHECK(sp[0].o))->F_strength = temp4;
	LINE_NUMBER(127);
	jfloat temp5 = (jfloat)((mindustry_world_blocks_defense_turrets_BaseTurret$BaseTurretBuild *) NULL_CHECK((frame[0].o)))->F_rotation;
	jfloat temp6 = frame[3].f;
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp7 = (jint)SM_arc_math_Angles_within_float_float_float_R_boolean(ctx, temp5, temp6, ((jfloat)((mindustry_world_blocks_defense_turrets_TractorBeamTurret *) NULL_CHECK(sp[0].o))->F_shootCone));
	if (temp7 == 0) goto label_26;
	}
	{
	LINE_NUMBER(128);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if ((floatCompare(((jfloat)((mindustry_world_blocks_defense_turrets_TractorBeamTurret *) NULL_CHECK(sp[0].o))->F_damage), (jfloat(0)), -1)) <= 0) goto label_28;
	}
	{
	LINE_NUMBER(129);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild *) NULL_CHECK((frame[0].o)))->F_target;
	sp[1].o = (jobject)((mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp0 = (((jfloat)((mindustry_world_blocks_defense_turrets_TractorBeamTurret *) NULL_CHECK(sp[1].o))->F_damage) * (frame[1].f)) * ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_timeScale);
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[2].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	jfloat temp1 = (jfloat)((func_mindustry_game_Rules_blockDamage_mindustry_game_Team_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_game_Rules_blockDamage_mindustry_game_Team_R_float])(ctx, sp[1].o, sp[2].o);
	((func_mindustry_gen_Unit_damageContinuousPierce_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_damageContinuousPierce_float])(ctx, sp[0].o, (temp0 * temp1));
	}
label_28:;
	{
	LINE_NUMBER(132);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_TractorBeamTurret *) NULL_CHECK(sp[0].o))->F_status;
	clinit_mindustry_content_StatusEffects(ctx);
	sp[1].o = (jobject)SF_mindustry_content_StatusEffects_none;
	if (sp[0].o == sp[1].o) goto label_30;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)SM_arc_math_Mathf_chance_double_R_boolean(ctx, (jdouble(((jfloat)((mindustry_world_blocks_defense_turrets_TractorBeamTurret *) NULL_CHECK(sp[0].o))->F_statusChance))));
	if (temp0 == 0) goto label_30;
	}
	{
	LINE_NUMBER(133);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild *) NULL_CHECK((frame[0].o)))->F_target;
	sp[1].o = (jobject)((mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_world_blocks_defense_turrets_TractorBeamTurret *) NULL_CHECK(sp[1].o))->F_status;
	sp[2].o = (jobject)((mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_mindustry_gen_Unit_apply_mindustry_type_StatusEffect_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_apply_mindustry_type_StatusEffect_float])(ctx, sp[0].o, sp[1].o, ((jfloat)((mindustry_world_blocks_defense_turrets_TractorBeamTurret *) NULL_CHECK(sp[2].o))->F_statusDuration));
	}
label_30:;
	{
	LINE_NUMBER(136);
	((mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild *) NULL_CHECK((frame[0].o)))->F_any = (jint(1));
	LINE_NUMBER(137);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild *) NULL_CHECK((frame[0].o)))->F_target;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	sp[1].o = (jobject)((func_arc_math_geom_Vec2_set_arc_math_geom_Position_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Position_R_arc_math_geom_Vec2])(ctx, sp[1].o, (frame[0].o));
	sp[2].o = (jobject)((mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild *) NULL_CHECK((frame[0].o)))->F_target;
	sp[1].o = (jobject)((func_arc_math_geom_Vec2_sub_arc_math_geom_Position_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_sub_arc_math_geom_Position_R_arc_math_geom_Vec2])(ctx, sp[1].o, sp[2].o);
	sp[2].o = (jobject)((mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp0 = (jfloat)((mindustry_world_blocks_defense_turrets_TractorBeamTurret *) NULL_CHECK(sp[2].o))->F_force;
	jfloat temp1 = jfloat(1);
	sp[2].o = (jobject)((mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild *) NULL_CHECK((frame[0].o)))->F_target;
	jfloat temp2 = (jfloat)((func_mindustry_gen_Unit_dst_arc_math_geom_Position_R_float) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_gen_Unit_dst_arc_math_geom_Position_R_float])(ctx, sp[2].o, (frame[0].o));
	sp[2].o = (jobject)((mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp3 = temp1 - (temp2 / ((jfloat)((mindustry_world_blocks_defense_turrets_BaseTurret *) NULL_CHECK(sp[2].o))->F_range));
	sp[2].o = (jobject)((mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((func_arc_math_geom_Vec2_limit_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_limit_float_R_arc_math_geom_Vec2])(ctx, sp[1].o, ((temp0 + (temp3 * ((jfloat)((mindustry_world_blocks_defense_turrets_TractorBeamTurret *) NULL_CHECK(sp[2].o))->F_scaledForce))) * (frame[2].f)));
	((func_mindustry_gen_Unit_impulseNet_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_impulseNet_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	}
label_26:;
	LINE_NUMBER(139);
	goto label_33;
label_17:;
	{
	LINE_NUMBER(140);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_lerpDelta_float_float_float_R_float(ctx, ((jfloat)((mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild *) NULL_CHECK((frame[0].o)))->F_strength), (jfloat(0)), (jfloat(0.1f)));
	((mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild *) NULL_CHECK(sp[0].o))->F_strength = temp0;
	}
label_33:;
	LINE_NUMBER(142);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild_shouldConsume_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/turrets/TractorBeamTurret$TractorBeamBuild:shouldConsume", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(146);
	jint temp0 = (jint)M_mindustry_gen_Building_shouldConsume_R_boolean(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild *) NULL_CHECK((frame[0].o)))->F_target;
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

jfloat M_mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild_estimateDps_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/turrets/TractorBeamTurret$TractorBeamBuild:estimateDps", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(151);
	if (((jint)((mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild *) NULL_CHECK((frame[0].o)))->F_any) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if ((floatCompare(((jfloat)((mindustry_world_blocks_defense_turrets_TractorBeamTurret *) NULL_CHECK(sp[0].o))->F_damage), (jfloat(0)), 1)) > 0) goto label_2;
	}
label_1:;
	INST_FCONST(0);
	popStackFrame(ctx);
	INST_FRETURN();
label_2:;
	{
	LINE_NUMBER(152);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	popStackFrame(ctx);
	return (((((jfloat)((mindustry_world_blocks_defense_turrets_TractorBeamTurret *) NULL_CHECK(sp[0].o))->F_damage) * (jfloat(60.0f))) * ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_efficiency)) * ((jfloat)((mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild *) NULL_CHECK((frame[0].o)))->F_coolantMultiplier));
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild_draw(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/turrets/TractorBeamTurret$TractorBeamBuild:draw", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(157);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_TractorBeamTurret *) NULL_CHECK(sp[0].o))->F_baseRegion;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float(ctx, sp[0].o, ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y));
	LINE_NUMBER(158);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_region;
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	sp[1].o = (jobject)((mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp1 = temp0 - ((jfloat(((jint)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_size))) / (jfloat(2)));
	jfloat temp2 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	sp[1].o = (jobject)((mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	SM_mindustry_graphics_Drawf_shadow_arc_graphics_g2d_TextureRegion_float_float_float(ctx, sp[0].o, temp1, (temp2 - ((jfloat(((jint)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_size))) / (jfloat(2)))), (((jfloat)((mindustry_world_blocks_defense_turrets_BaseTurret$BaseTurretBuild *) NULL_CHECK((frame[0].o)))->F_rotation) - (jfloat(90.0f))));
	LINE_NUMBER(159);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_region;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float(ctx, sp[0].o, ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y), (((jfloat)((mindustry_world_blocks_defense_turrets_BaseTurret$BaseTurretBuild *) NULL_CHECK((frame[0].o)))->F_rotation) - (jfloat(90.0f))));
	LINE_NUMBER(162);
	if (((jint)((mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild *) NULL_CHECK((frame[0].o)))->F_any) == 0) goto label_4;
	}
	{
	jint temp0 = (jint)((func_mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild_isPayload_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild_isPayload_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_4;
	}
	{
	LINE_NUMBER(163);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (jfloat(100.0f)));
	LINE_NUMBER(164);
	jfloat temp0 = (jfloat)((func_mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild_angleTo_float_float_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild_angleTo_float_float_R_float])(ctx, (frame[0].o), ((jfloat)((mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild *) NULL_CHECK((frame[0].o)))->F_lastX), ((jfloat)((mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild *) NULL_CHECK((frame[0].o)))->F_lastY));
	frame[1].f = temp0;
	LINE_NUMBER(166);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_TractorBeamTurret *) NULL_CHECK(sp[0].o))->F_laserColor;
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_absin_float_float_R_float(ctx, (jfloat(4.0f)), (jfloat(0.6f)));
	SM_arc_graphics_g2d_Draw_mixcol_arc_graphics_Color_float(ctx, sp[0].o, temp1);
	LINE_NUMBER(168);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_TractorBeamTurret *) NULL_CHECK(sp[0].o))->F_laser;
	sp[1].o = (jobject)((mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_world_blocks_defense_turrets_TractorBeamTurret *) NULL_CHECK(sp[1].o))->F_laserStart;
	sp[2].o = (jobject)((mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[2].o = (jobject)((mindustry_world_blocks_defense_turrets_TractorBeamTurret *) NULL_CHECK(sp[2].o))->F_laserEnd;
	jfloat temp2 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp3 = frame[1].f;
	sp[3].o = (jobject)((mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp4 = (jfloat)((mindustry_world_blocks_defense_turrets_TractorBeamTurret *) NULL_CHECK(sp[3].o))->F_shootLength;
	LINE_NUMBER(169);
	jfloat temp5 = (jfloat)SM_arc_math_Angles_trnsx_float_float_R_float(ctx, temp3, temp4);
	jfloat temp6 = temp2 + temp5;
	jfloat temp7 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	jfloat temp8 = frame[1].f;
	sp[3].o = (jobject)((mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp9 = (jfloat)SM_arc_math_Angles_trnsy_float_float_R_float(ctx, temp8, ((jfloat)((mindustry_world_blocks_defense_turrets_TractorBeamTurret *) NULL_CHECK(sp[3].o))->F_shootLength));
	jfloat temp10 = temp7 + temp9;
	jfloat temp11 = (jfloat)((mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild *) NULL_CHECK((frame[0].o)))->F_lastX;
	jfloat temp12 = (jfloat)((mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild *) NULL_CHECK((frame[0].o)))->F_lastY;
	jfloat temp13 = ((jfloat)((mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild *) NULL_CHECK((frame[0].o)))->F_strength) * ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_efficiency);
	sp[3].o = (jobject)((mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp14 = temp13 * ((jfloat)((mindustry_world_blocks_defense_turrets_TractorBeamTurret *) NULL_CHECK(sp[3].o))->F_laserWidth);
	LINE_NUMBER(168);
	SM_mindustry_graphics_Drawf_laser_arc_graphics_g2d_TextureRegion_arc_graphics_g2d_TextureRegion_arc_graphics_g2d_TextureRegion_float_float_float_float_float(ctx, sp[0].o, sp[1].o, sp[2].o, temp6, temp10, temp11, temp12, temp14);
	LINE_NUMBER(172);
	SM_arc_graphics_g2d_Draw_mixcol(ctx);
	}
label_4:;
	LINE_NUMBER(174);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild_write_arc_util_io_Writes(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/turrets/TractorBeamTurret$TractorBeamBuild:write", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(178);
	M_mindustry_gen_Building_write_arc_util_io_Writes(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(180);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_world_blocks_defense_turrets_BaseTurret$BaseTurretBuild *) NULL_CHECK((frame[0].o)))->F_rotation));
	LINE_NUMBER(181);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild_read_arc_util_io_Reads_byte(jcontext ctx, jobject self, jobject param0, jbyte param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/turrets/TractorBeamTurret$TractorBeamBuild:read", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(185);
	M_mindustry_gen_Building_read_arc_util_io_Reads_byte(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	LINE_NUMBER(187);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_world_blocks_defense_turrets_BaseTurret$BaseTurretBuild *) NULL_CHECK(sp[0].o))->F_rotation = temp0;
	LINE_NUMBER(188);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild_lambda$updateTile$0_mindustry_gen_Unit_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/turrets/TractorBeamTurret$TractorBeamBuild:lambda$updateTile$0", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(92);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)((mindustry_world_blocks_defense_turrets_TractorBeamTurret *) NULL_CHECK(sp[1].o))->F_targetAir;
	sp[1].o = (jobject)((mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp1 = (jint)((func_mindustry_gen_Unit_checkTarget_boolean_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_checkTarget_boolean_boolean_R_boolean])(ctx, sp[0].o, temp0, ((jint)((mindustry_world_blocks_defense_turrets_TractorBeamTurret *) NULL_CHECK(sp[1].o))->F_targetGround));
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	{ // Field target
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[0]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild[] {
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
	(void *) M_mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild_write_arc_util_io_Writes,
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
	(void *) M_mindustry_gen_Building_sense_mindustry_logic_LAccess_R_double,
	(void *) M_mindustry_gen_Building_sense_mindustry_ctype_Content_R_double,
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
	(void *) M_mindustry_gen_Building_getCommandPosition_R_arc_math_geom_Vec2,
	(void *) M_mindustry_gen_Building_config_R_java_lang_Object,
	(void *) M_mindustry_gen_Building_getPayloads_R_mindustry_type_PayloadSeq,
	(void *) M_mindustry_gen_Building_findClosestEdge_arc_math_geom_Position_arc_func_Boolf_R_mindustry_world_Tile,
	(void *) M_mindustry_gen_Building_getPayload_R_mindustry_world_blocks_payloads_Payload,
	(void *) M_mindustry_gen_Building_takePayload_R_mindustry_world_blocks_payloads_Payload,
	(void *) M_mindustry_gen_Building_onRepaired,
	(void *) M_mindustry_world_blocks_defense_turrets_BaseTurret$BaseTurretBuild_placed,
	(void *) M_mindustry_gen_Building_playerPlaced_java_lang_Object,
	(void *) M_mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild_read_arc_util_io_Reads_byte,
	(void *) M_mindustry_gen_Building_create_mindustry_world_Block_mindustry_game_Team_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_getLiquidDestination_mindustry_gen_Building_mindustry_type_Liquid_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_init_mindustry_world_Tile_mindustry_game_Team_boolean_int_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_nearby_int_int_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_nearby_int_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_getCursor_R_arc_Graphics$Cursor,
	(void *) M_mindustry_gen_Building_getDisplayIcon_R_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_gen_Building_getPowerConnections_arc_struct_Seq_R_arc_struct_Seq,
	(void *) M_mindustry_gen_Building_absorbLasers_R_boolean,
	(void *) M_mindustry_gen_Building_acceptItem_mindustry_gen_Building_mindustry_type_Item_R_boolean,
	(void *) M_mindustry_gen_Building_acceptLiquid_mindustry_gen_Building_mindustry_type_Liquid_R_boolean,
	(void *) M_mindustry_gen_Building_acceptPayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload_R_boolean,
	(void *) M_mindustry_gen_Building_allowDeposit_R_boolean,
	(void *) M_mindustry_gen_Building_allowUpdate_R_boolean,
	(void *) M_mindustry_gen_Building_canBeReplaced_mindustry_world_Block_R_boolean,
	(void *) M_mindustry_gen_Building_canConsume_R_boolean,
	(void *) M_mindustry_gen_Building_canControlSelect_mindustry_gen_Unit_R_boolean,
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
	(void *) M_mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild_shouldConsume_R_boolean,
	(void *) M_mindustry_gen_Building_shouldHideConfigure_mindustry_gen_Player_R_boolean,
	(void *) M_mindustry_gen_Building_shouldShowConfigure_mindustry_gen_Player_R_boolean,
	(void *) M_mindustry_gen_Building_wasRecentlyDamaged_R_boolean,
	(void *) M_mindustry_gen_Building_wasRecentlyHealed_float_R_boolean,
	(void *) M_mindustry_gen_Building_relativeTo_mindustry_gen_Building_R_byte,
	(void *) M_mindustry_gen_Building_relativeTo_int_int_R_byte,
	(void *) M_mindustry_gen_Building_relativeTo_mindustry_world_Tile_R_byte,
	(void *) M_mindustry_gen_Building_relativeToEdge_mindustry_world_Tile_R_byte,
	(void *) M_mindustry_gen_Building_version_R_byte,
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
	(void *) M_mindustry_gen_Building_getMaximumAccepted_mindustry_type_Item_R_int,
	(void *) M_mindustry_gen_Building_moduleBitmask_R_int,
	(void *) M_mindustry_gen_Building_pos_R_int,
	(void *) M_mindustry_gen_Building_removeStack_mindustry_type_Item_int_R_int,
	(void *) M_mindustry_gen_Building_getDisplayName_R_java_lang_String,
	(void *) M_mindustry_gen_Building_floor_R_mindustry_world_blocks_environment_Floor,
	(void *) M_mindustry_world_blocks_defense_turrets_BaseTurret$BaseTurretBuild_status_R_mindustry_world_meta_BlockStatus,
	(void *) M_mindustry_gen_Building_flowItems_R_mindustry_world_modules_ItemModule,
	(void *) M_mindustry_gen_Building_addPlan_boolean,
	(void *) M_mindustry_gen_Building_addPlan_boolean_boolean,
	(void *) M_mindustry_gen_Building_afterDestroyed,
	(void *) M_mindustry_gen_Building_afterPickedUp,
	(void *) M_mindustry_gen_Building_applyBoost_float_float,
	(void *) M_mindustry_gen_Building_applyHealSuppression_float,
	(void *) M_mindustry_gen_Building_applyHealSuppression_float_arc_graphics_Color,
	(void *) M_mindustry_gen_Building_applySlowdown_float_float,
	(void *) M_mindustry_gen_Building_buildConfiguration_arc_scene_ui_layout_Table,
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
	(void *) M_mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild_draw,
	(void *) M_mindustry_gen_Building_drawCached,
	(void *) M_mindustry_gen_Building_drawConfigure,
	(void *) M_mindustry_gen_Building_drawCracks,
	(void *) M_mindustry_gen_Building_drawDisabled,
	(void *) M_mindustry_gen_Building_drawItemSelection_mindustry_ctype_UnlockableContent,
	(void *) M_mindustry_gen_Building_drawLight,
	(void *) M_mindustry_gen_Building_drawLiquidLight_mindustry_type_Liquid_float,
	(void *) M_mindustry_world_blocks_defense_turrets_BaseTurret$BaseTurretBuild_drawSelect,
	(void *) M_mindustry_gen_Building_drawStatus,
	(void *) M_mindustry_gen_Building_drawTeam,
	(void *) M_mindustry_gen_Building_drawTeamTop,
	(void *) M_mindustry_gen_Building_dropped,
	(void *) M_mindustry_gen_Building_dumpLiquid_mindustry_type_Liquid,
	(void *) M_mindustry_gen_Building_dumpLiquid_mindustry_type_Liquid_float,
	(void *) M_mindustry_gen_Building_dumpLiquid_mindustry_type_Liquid_float_int,
	(void *) M_mindustry_gen_Building_eachEdge_arc_func_Cons,
	(void *) M_mindustry_gen_Building_getStackOffset_mindustry_type_Item_arc_math_geom_Vec2,
	(void *) M_mindustry_gen_Building_handleItem_mindustry_gen_Building_mindustry_type_Item,
	(void *) M_mindustry_gen_Building_handleLiquid_mindustry_gen_Building_mindustry_type_Liquid_float,
	(void *) M_mindustry_gen_Building_handlePayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload,
	(void *) M_mindustry_gen_Building_handleStack_mindustry_type_Item_int_mindustry_gen_Teamc,
	(void *) M_mindustry_gen_Building_handleString_java_lang_Object,
	(void *) M_mindustry_gen_Building_handleUnitPayload_mindustry_gen_Unit_arc_func_Cons,
	(void *) M_mindustry_gen_Building_healthChanged,
	(void *) M_mindustry_gen_Building_incrementDump_int,
	(void *) M_mindustry_gen_Building_itemTaken_mindustry_type_Item,
	(void *) M_mindustry_gen_Building_noSleep,
	(void *) M_mindustry_gen_Building_offload_mindustry_type_Item,
	(void *) M_mindustry_gen_Building_onCommand_arc_math_geom_Vec2,
	(void *) M_mindustry_gen_Building_onConfigureClosed,
	(void *) M_mindustry_gen_Building_onControlSelect_mindustry_gen_Unit,
	(void *) M_mindustry_gen_Building_onDeconstructed_mindustry_gen_Unit,
	(void *) M_mindustry_gen_Building_onDestroyed,
	(void *) M_mindustry_gen_Building_onNearbyBuildAdded_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_onProximityAdded,
	(void *) M_mindustry_gen_Building_onProximityRemoved,
	(void *) M_mindustry_gen_Building_onProximityUpdate,
	(void *) M_mindustry_gen_Building_onRemoved,
	(void *) M_mindustry_gen_Building_overwrote_arc_struct_Seq,
	(void *) M_mindustry_gen_Building_payloadDraw,
	(void *) M_mindustry_gen_Building_pickedUp,
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
	(void *) M_mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild_updateTile,
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
	(void *) M_mindustry_world_blocks_defense_turrets_BaseTurret$BaseTurretBuild_range_R_float,
	(void *) M_mindustry_world_blocks_defense_turrets_BaseTurret$BaseTurretBuild_buildRotation_R_float,
	(void *) M_mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild_estimateDps_R_float,
	(void *) M_mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild_lambda$updateTile$0_mindustry_gen_Unit_R_boolean,
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
	{ "range", "()F" },
	{ "buildRotation", "()F" },
	{ "estimateDps", "()F" },
	{ "lambda$updateTile$0", "(Lmindustry/gen/Unit;)Z" },
};

static FieldMetadata fields[] {
	{ "target", &class_mindustry_gen_Unit, offsetof(mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild, F_target), "Lmindustry/gen/Unit;", 1 },
	{ "lastX", &class_float, offsetof(mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild, F_lastX), "F", 1 },
	{ "lastY", &class_float, offsetof(mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild, F_lastY), "F", 1 },
	{ "strength", &class_float, offsetof(mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild, F_strength), "F", 1 },
	{ "any", &class_boolean, offsetof(mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild, F_any), "Z", 1 },
	{ "coolantMultiplier", &class_float, offsetof(mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild, F_coolantMultiplier), "F", 1 },
	{ "this$0", &class_mindustry_world_blocks_defense_turrets_TractorBeamTurret, offsetof(mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild, F_this$0), "Lmindustry/world/blocks/defense/turrets/TractorBeamTurret;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild_mindustry_world_blocks_defense_turrets_TractorBeamTurret, 0, "(Lmindustry/world/blocks/defense/turrets/TractorBeamTurret;)V", 1 },
	{ "updateTile", (intptr_t) M_mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild_updateTile, VTABLE_mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild_updateTile, "()V", 1 },
	{ "shouldConsume", (intptr_t) M_mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild_shouldConsume_R_boolean, VTABLE_mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild_shouldConsume_R_boolean, "()Z", 1 },
	{ "estimateDps", (intptr_t) M_mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild_estimateDps_R_float, VTABLE_mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild_estimateDps_R_float, "()F", 1 },
	{ "draw", (intptr_t) M_mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild_draw, VTABLE_mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild_draw, "()V", 1 },
	{ "write", (intptr_t) M_mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild_write_arc_util_io_Writes, VTABLE_mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild_write_arc_util_io_Writes, "(Larc/util/io/Writes;)V", 1 },
	{ "read", (intptr_t) M_mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild_read_arc_util_io_Reads_byte, VTABLE_mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild_read_arc_util_io_Reads_byte, "(Larc/util/io/Reads;B)V", 1 },
	{ "lambda$updateTile$0", (intptr_t) M_mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild_lambda$updateTile$0_mindustry_gen_Unit_R_boolean, VTABLE_mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild_lambda$updateTile$0_mindustry_gen_Unit_R_boolean, "(Lmindustry/gen/Unit;)Z", 4098 },
};

Class class_mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild{
		.nativeName = (intptr_t) "mindustry/world/blocks/defense/turrets/TractorBeamTurret$TractorBeamBuild",
		.parentClass = (intptr_t) &class_mindustry_world_blocks_defense_turrets_BaseTurret$BaseTurretBuild,
		.size = sizeof(mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild),
		.classVtable = (intptr_t) vtable_mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild,
		.staticInitializer = (intptr_t) clinit_mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_world_blocks_defense_turrets_TractorBeamTurret,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 7,
		.nativeFields = (intptr_t) fields,
		.methodCount = 8,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 314,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild = registerClass(&class_mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild);

}

