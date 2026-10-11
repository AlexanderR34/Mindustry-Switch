#include "mindustry/world/blocks/defense/turrets/Turret_TurretBuild.h"
#include "arc/math/Angles.h"
#include "arc/Events.h"
#include "mindustry/entities/Sized.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "mindustry/world/meta/BlockStatus.h"
#include "mindustry/logic/LAccess.h"
#include "arc/graphics/Color.h"
#include "java/lang/reflect/Constructor.h"
#include "mindustry/entities/UnitSorts.h"
#include "java/lang/Runnable.h"
#include "mindustry/entities/Effect.h"
#include "mindustry/gen/Entityc.h"
#include "arc/util/Tmp.h"
#include "arc/struct/Seq.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/gen/TimedKillc.h"
#include "mindustry/entities/Predict.h"
#include "mindustry/entities/Mover.h"
#include "arc/math/geom/Position.h"
#include "arc/func/Boolf.h"
#include "arc/math/Mathf.h"
#include "java/lang/reflect/Field.h"
#include "mindustry/gen/Unit.h"
#include "mindustry/gen/Sounds.h"
#include "mindustry/type/Liquid.h"
#include "arc/util/Time.h"
#include "mindustry/world/consumers/ConsumeLiquidBase.h"
#include "mindustry/gen/Weaponsc.h"
#include "arc/util/Nullable.h"
#include "mindustry/gen/Building.h"
#include "mindustry/entities/units/UnitController.h"
#include "mindustry/gen/Posc.h"
#include "java/lang/Object.h"
#include "mindustry/gen/Bullet.h"
#include "mindustry/gen/BlockUnitc.h"
#include "mindustry/entities/Units.h"
#include "mindustry/gen/Hitboxc.h"
#include "mindustry/entities/bullet/BulletType.h"
#include "mindustry/world/modules/LiquidModule.h"
#include "arc/util/io/Writes.h"
#include "arc/math/geom/Vec2.h"
#include "mindustry/world/blocks/defense/turrets/Turret_TurretBuild_invoke_mindustry_entities_pattern_ShootPattern_BulletHandler_1.h"
#include "mindustry/world/blocks/defense/turrets/BaseTurret_BaseTurretBuild.h"
#include "mindustry/audio/SoundLoop.h"
#include "mindustry/game/Rules.h"
#include "mindustry/game/FogControl.h"
#include "mindustry/entities/Units_Sortf.h"
#include "java/lang/Float.h"
#include "mindustry/world/blocks/defense/turrets/Turret.h"
#include "mindustry/gen/Rotc.h"
#include "mindustry/ui/Displayable.h"
#include "mindustry/gen/Unitc.h"
#include "mindustry/world/draw/DrawBlock.h"
#include "mindustry/world/blocks/defense/turrets/ReloadTurret_ReloadTurretBuild.h"
#include "mindustry/content/UnitTypes.h"
#include "mindustry/entities/pattern/ShootPattern_BulletHandler.h"
#include "java/lang/Math.h"
#include "mindustry/gen/Teamc.h"
#include "mindustry/world/blocks/defense/turrets/Turret_TurretBuild_invoke_arc_func_Boolf_5.h"
#include "mindustry/world/blocks/defense/turrets/Turret_1.h"
#include "mindustry/world/blocks/defense/turrets/Turret_TurretBuild_invoke_arc_func_Boolf_4.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/world/blocks/defense/turrets/Turret_TurretBuild_invoke_arc_func_Boolf_7.h"
#include "mindustry/world/blocks/defense/turrets/Turret_TurretBuild_invoke_arc_func_Boolf_6.h"
#include "mindustry/world/blocks/defense/turrets/Turret_TurretBuild.h"
#include "java/lang/Enum.h"
#include "mindustry/type/UnitType.h"
#include "mindustry/world/blocks/ControlBlock.h"
#include "arc/util/io/Reads.h"
#include "mindustry/game/EventType_Trigger.h"
#include "arc/audio/Sound.h"
#include "mindustry/gen/Player.h"
#include "mindustry/world/blocks/defense/turrets/Turret_AmmoEntry.h"
#include "mindustry/graphics/Drawf.h"
#include "mindustry/gen/Statusc.h"
#include "mindustry/world/blocks/defense/turrets/Turret_TurretBuild_invoke_java_lang_Runnable_3.h"
#include "mindustry/world/blocks/defense/turrets/Turret_TurretBuild_invoke_java_lang_Runnable_2.h"
#include "mindustry/world/blocks/defense/turrets/ReloadTurret.h"
#include "mindustry/game/Team.h"
#include "mindustry/entities/pattern/ShootPattern.h"
#include "mindustry/core/World.h"
#include "mindustry/Vars.h"
#include "mindustry/core/GameState.h"

extern "C" {


void mark_mindustry_world_blocks_defense_turrets_Turret$TurretBuild(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_world_blocks_defense_turrets_ReloadTurret$ReloadTurretBuild(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) object;
	if (self->F_recoilOffset)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_recoilOffset)->clazz)->markFunction)((jobject) self->F_recoilOffset, mark, depth + 1);
	if (self->F_ammo)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_ammo)->clazz)->markFunction)((jobject) self->F_ammo, mark, depth + 1);
	if (self->F_curRecoils)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_curRecoils)->clazz)->markFunction)((jobject) self->F_curRecoils, mark, depth + 1);
	if (self->F_target)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_target)->clazz)->markFunction)((jobject) self->F_target, mark, depth + 1);
	if (self->F_targetPos)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_targetPos)->clazz)->markFunction)((jobject) self->F_targetPos, mark, depth + 1);
	if (self->F_unit)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_unit)->clazz)->markFunction)((jobject) self->F_unit, mark, depth + 1);
	if (self->F_sideHeat)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_sideHeat)->clazz)->markFunction)((jobject) self->F_sideHeat, mark, depth + 1);
	if (self->F_soundLoop)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_soundLoop)->clazz)->markFunction)((jobject) self->F_soundLoop, mark, depth + 1);
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_mindustry_world_blocks_defense_turrets_Turret$TurretBuild(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_world_blocks_defense_turrets_ReloadTurret$ReloadTurretBuild(ctx);
}

void init_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_mindustry_world_blocks_defense_turrets_Turret(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/turrets/Turret$TurretBuild:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_defense_turrets_Turret$TurretBuild(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(283);
	((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_mindustry_world_blocks_defense_turrets_ReloadTurret$ReloadTurretBuild_mindustry_world_blocks_defense_turrets_ReloadTurret(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(286);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Vec2(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[1].o);
	((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK(sp[0].o))->F_recoilOffset = (jref) sp[1].o;
	LINE_NUMBER(288);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK(sp[0].o))->F_ammo = (jref) sp[1].o;
	LINE_NUMBER(290);
	((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_logicControlTime = (jfloat(-1.0f));
	LINE_NUMBER(292);
	((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_warmupHold = (jfloat(0));
	LINE_NUMBER(294);
	((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_logicShooting = (jint(0));
	LINE_NUMBER(296);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Vec2(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[1].o);
	((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK(sp[0].o))->F_targetPos = (jref) sp[1].o;
	LINE_NUMBER(297);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_UnitTypes(ctx);
	sp[1].o = (jobject)SF_mindustry_content_UnitTypes_block;
	sp[2].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	sp[1].o = (jobject)((func_mindustry_type_UnitType_create_mindustry_game_Team_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_type_UnitType_create_mindustry_game_Team_R_mindustry_gen_Unit])(ctx, sp[1].o, sp[2].o);
	((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK(sp[0].o))->F_unit = (jref) (checkCast(ctx, &class_mindustry_gen_BlockUnitc, sp[1].o));
	LINE_NUMBER(299);
	((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_queuedBullets = (jint(0));
	LINE_NUMBER(302);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_float, (jint(4)));
	((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK(sp[0].o))->F_sideHeat = (jref) sp[1].o;
	LINE_NUMBER(304);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK(sp[1].o))->F_loopSound;
	clinit_mindustry_gen_Sounds(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Sounds_none;
	sp += 1;
	if (sp[0].o != sp[1].o) goto label_11;
	}
	INST_ACONST_NULL();
	goto label_12;
label_11:;
	{
	clinit_mindustry_audio_SoundLoop(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_audio_SoundLoop);
	sp[1].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK(sp[1].o))->F_loopSound;
	sp[2].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	init_mindustry_audio_SoundLoop_arc_audio_Sound_float(ctx, sp[0].o, sp[1].o, ((jfloat)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK(sp[2].o))->F_loopSoundVolume));
	sp += 1;
	}
label_12:;
	{
	sp -= 2;
	((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK(sp[0].o))->F_soundLoop = (jref) sp[1].o;
	LINE_NUMBER(283);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_remove(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/turrets/Turret$TurretBuild:remove", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(310);
	M_mindustry_gen_Building_remove(ctx, (frame[0].o));
	LINE_NUMBER(311);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_soundLoop;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(312);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_soundLoop;
	((func_mindustry_audio_SoundLoop_stop) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_audio_SoundLoop_stop])(ctx, sp[0].o);
	}
label_2:;
	LINE_NUMBER(314);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_onDestroyed(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/turrets/Turret$TurretBuild:onDestroyed", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(318);
	M_mindustry_gen_Building_onDestroyed(ctx, (frame[0].o));
	LINE_NUMBER(319);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_soundLoop;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(320);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_soundLoop;
	((func_mindustry_audio_SoundLoop_stop) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_audio_SoundLoop_stop])(ctx, sp[0].o);
	}
label_2:;
	LINE_NUMBER(322);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_getAmmoContent_R_mindustry_ctype_UnlockableContent(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/turrets/Turret$TurretBuild:getAmmoContent", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(326);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_getAmmoFraction_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/turrets/Turret$TurretBuild:getAmmoFraction", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(331);
	popStackFrame(ctx);
	return (jfloat(1));
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_estimateDps_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/turrets/Turret$TurretBuild:estimateDps", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(336);
	jint temp0 = (jint)((func_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_hasAmmo_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_hasAmmo_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	INST_FCONST(0);
	popStackFrame(ctx);
	INST_FRETURN();
label_1:;
	{
	LINE_NUMBER(337);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK(sp[0].o))->F_shoot;
	jfloat temp0 = jfloat(((jint)((mindustry_entities_pattern_ShootPattern *) NULL_CHECK(sp[0].o))->F_shots));
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp1 = (temp0 / ((jfloat)((mindustry_world_blocks_defense_turrets_ReloadTurret *) NULL_CHECK(sp[0].o))->F_reload)) * (jfloat(60.0f));
	sp[0].o = (jobject)((func_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_peekAmmo_R_mindustry_entities_bullet_BulletType) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_peekAmmo_R_mindustry_entities_bullet_BulletType])(ctx, (frame[0].o));
	jobject temp2 = sp[0].o;
	sp[0].f = temp1;
	sp += 1;
	if (temp2 != nullptr) goto label_2;
	}
	INST_FCONST(0);
	goto label_3;
label_2:;
	{
	sp[0].o = (jobject)((func_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_peekAmmo_R_mindustry_entities_bullet_BulletType) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_peekAmmo_R_mindustry_entities_bullet_BulletType])(ctx, (frame[0].o));
	jfloat temp0 = (jfloat)((func_mindustry_entities_bullet_BulletType_estimateDPS_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_bullet_BulletType_estimateDPS_R_float])(ctx, sp[0].o);
	sp[0].f = temp0;
	sp += 1;
	}
label_3:;
	{
	sp -= 2;
	popStackFrame(ctx);
	return (((sp[0].f * sp[1].f) * ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_potentialEfficiency)) * ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_timeScale));
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_minRange_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/turrets/Turret$TurretBuild:minRange", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(341);
	sp[0].o = (jobject)((func_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_peekAmmo_R_mindustry_entities_bullet_BulletType) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_peekAmmo_R_mindustry_entities_bullet_BulletType])(ctx, (frame[0].o));
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(342);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp0 = (jfloat)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK(sp[0].o))->F_minRange;
	sp[0].o = (jobject)((func_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_peekAmmo_R_mindustry_entities_bullet_BulletType) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_peekAmmo_R_mindustry_entities_bullet_BulletType])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return (temp0 + ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_minRangeChange));
	}
label_1:;
	{
	LINE_NUMBER(344);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	popStackFrame(ctx);
	return ((jfloat)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK(sp[0].o))->F_minRange);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_range_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/turrets/Turret$TurretBuild:range", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(349);
	sp[0].o = (jobject)((func_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_peekAmmo_R_mindustry_entities_bullet_BulletType) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_peekAmmo_R_mindustry_entities_bullet_BulletType])(ctx, (frame[0].o));
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(350);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp0 = (jfloat)((mindustry_world_blocks_defense_turrets_BaseTurret *) NULL_CHECK(sp[0].o))->F_range;
	sp[0].o = (jobject)((func_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_peekAmmo_R_mindustry_entities_bullet_BulletType) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_peekAmmo_R_mindustry_entities_bullet_BulletType])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return (temp0 + ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_rangeChange));
	}
label_1:;
	{
	LINE_NUMBER(352);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	popStackFrame(ctx);
	return ((jfloat)((mindustry_world_blocks_defense_turrets_BaseTurret *) NULL_CHECK(sp[0].o))->F_range);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_trackingRange_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/turrets/Turret$TurretBuild:trackingRange", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(356);
	jfloat temp0 = (jfloat)((func_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_range_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_range_R_float])(ctx, (frame[0].o));
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp1 = temp0 + ((jfloat)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK(sp[0].o))->F_trackingRange);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	popStackFrame(ctx);
	return (temp1 - ((jfloat)((mindustry_world_blocks_defense_turrets_BaseTurret *) NULL_CHECK(sp[0].o))->F_range));
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_warmup_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/turrets/Turret$TurretBuild:warmup", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(361);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_shootWarmup);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_drawrot_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/turrets/Turret$TurretBuild:drawrot", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(366);
	popStackFrame(ctx);
	return (((jfloat)((mindustry_world_blocks_defense_turrets_BaseTurret$BaseTurretBuild *) NULL_CHECK((frame[0].o)))->F_rotation) - (jfloat(90.0f)));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_shouldConsume_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/turrets/Turret$TurretBuild:shouldConsume", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(371);
	if (((jint)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_isShooting) != 0) goto label_1;
	}
	{
	jfloat temp0 = (jfloat)((mindustry_world_blocks_defense_turrets_ReloadTurret$ReloadTurretBuild *) NULL_CHECK((frame[0].o)))->F_reloadCounter;
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if ((floatCompare(temp0, ((jfloat)((mindustry_world_blocks_defense_turrets_ReloadTurret *) NULL_CHECK(sp[0].o))->F_reload), 1)) >= 0) goto label_2;
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

jobject M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_status_R_mindustry_world_meta_BlockStatus(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/turrets/Turret$TurretBuild:status", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(376);
	if (((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_enabled) == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_hasAmmo_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_hasAmmo_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	clinit_mindustry_world_meta_BlockStatus(ctx);
	(sp++)->o = SF_mindustry_world_meta_BlockStatus_noInput;
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(378);
	sp[0].o = (jobject)M_mindustry_world_blocks_defense_turrets_BaseTurret$BaseTurretBuild_status_R_mindustry_world_meta_BlockStatus(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_canControl_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/turrets/Turret$TurretBuild:canControl", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(383);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	popStackFrame(ctx);
	return ((jint)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK(sp[0].o))->F_playerControllable);
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_control_mindustry_logic_LAccess_double_double_double_double(jcontext ctx, jobject self, jobject param0, jdouble param1, jdouble param2, jdouble param3, jdouble param4) {
	NULL_CHECK(self);
	jtype frame[20];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/turrets/Turret$TurretBuild:control", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].d = param1;
	frame[4].d = param2;
	frame[6].d = param3;
	frame[8].d = param4;
	{
	LINE_NUMBER(388);
	sp[0].o = frame[1].o;
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_shoot;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_unit;
	jint temp0 = (jint)((func_mindustry_gen_Unitc_isPlayer_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_gen_Unitc, INDEX_mindustry_gen_Unitc_isPlayer_R_boolean, sp[0].o))(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(389);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_targetPos;
	jfloat temp0 = (jfloat)SM_mindustry_core_World_unconv_float_R_float(ctx, (jfloat((frame[2].d))));
	jfloat temp1 = (jfloat)SM_mindustry_core_World_unconv_float_R_float(ctx, (jfloat((frame[4].d))));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(390);
	((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_logicControlTime = (jfloat(120.0f));
	LINE_NUMBER(391);
	sp[0].o = frame[0].o;
	jint temp2 = (jint)SM_arc_math_Mathf_zero_double_R_boolean(ctx, (frame[6].d));
	sp += 1;
	if (temp2 != 0) goto label_5;
	}
	INST_ICONST(1);
	goto label_6;
label_5:;
	INST_ICONST(0);
label_6:;
	sp -= 2;
	((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK(sp[0].o))->F_logicShooting = sp[1].i;
label_1:;
	{
	LINE_NUMBER(394);
	M_mindustry_gen_Building_control_mindustry_logic_LAccess_double_double_double_double(ctx, (frame[0].o), (frame[1].o), (frame[2].d), (frame[4].d), (frame[6].d), (frame[8].d));
	LINE_NUMBER(395);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_control_mindustry_logic_LAccess_java_lang_Object_double_double_double(jcontext ctx, jobject self, jobject param0, jobject param1, jdouble param2, jdouble param3, jdouble param4) {
	NULL_CHECK(self);
	jtype frame[19];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/turrets/Turret$TurretBuild:control", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].d = param2;
	frame[5].d = param3;
	frame[7].d = param4;
	{
	LINE_NUMBER(399);
	sp[0].o = frame[1].o;
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_shootp;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_unit;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_unit;
	jint temp0 = (jint)((func_mindustry_gen_Unitc_isPlayer_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_gen_Unitc, INDEX_mindustry_gen_Unitc_isPlayer_R_boolean, sp[0].o))(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(400);
	((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_logicControlTime = (jfloat(120.0f));
	LINE_NUMBER(401);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_arc_math_Mathf_zero_double_R_boolean(ctx, (frame[3].d));
	sp += 1;
	if (temp0 != 0) goto label_4;
	}
	INST_ICONST(1);
	goto label_5;
label_4:;
	INST_ICONST(0);
label_5:;
	{
	sp -= 2;
	((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK(sp[0].o))->F_logicShooting = sp[1].i;
	LINE_NUMBER(403);
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_gen_Posc)) == 0) goto label_1;
	}
	{
	frame[9].o = (checkCast(ctx, &class_mindustry_gen_Posc, (frame[2].o)));
	LINE_NUMBER(404);
	((func_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_targetPosition_mindustry_gen_Posc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_targetPosition_mindustry_gen_Posc])(ctx, (frame[0].o), (frame[9].o));
	}
label_1:;
	{
	LINE_NUMBER(408);
	M_mindustry_gen_Building_control_mindustry_logic_LAccess_java_lang_Object_double_double_double(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].d), (frame[5].d), (frame[7].d));
	LINE_NUMBER(409);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jdouble M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_sense_mindustry_logic_LAccess_R_double(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/turrets/Turret$TurretBuild:sense", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(413);
	clinit_mindustry_world_blocks_defense_turrets_Turret$1(ctx);
	sp[0].o = (jobject)SF_mindustry_world_blocks_defense_turrets_Turret$1_$SwitchMap$mindustry$logic$LAccess;
	jint temp0 = (jint)((func_mindustry_logic_LAccess_ordinal_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_logic_LAccess_ordinal_R_int])(ctx, (frame[1].o));
	switch(((jint)ARRAY_ACCESS(jint, sp[0].o, temp0))) {
		case 1: goto label_1;
		case 2: goto label_2;
		case 3: goto label_3;
		case 4: goto label_4;
		case 5: goto label_5;
		case 6: goto label_6;
		case 7: goto label_7;
		default: goto label_8;
	}
	}
label_1:;
	{
	LINE_NUMBER(414);
	jdouble temp0 = jdouble(((jint)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_totalAmmo));
	sp[0].d = temp0;
	sp += 1;
	goto label_9;
	}
label_2:;
	{
	LINE_NUMBER(415);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jdouble temp0 = jdouble(((jint)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK(sp[0].o))->F_maxAmmo));
	sp[0].d = temp0;
	sp += 1;
	goto label_9;
	}
label_3:;
	{
	LINE_NUMBER(416);
	jdouble temp0 = jdouble(((jfloat)((mindustry_world_blocks_defense_turrets_BaseTurret$BaseTurretBuild *) NULL_CHECK((frame[0].o)))->F_rotation));
	sp[0].d = temp0;
	sp += 1;
	goto label_9;
	}
label_4:;
	{
	LINE_NUMBER(417);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_targetPos;
	jfloat temp0 = (jfloat)SM_mindustry_core_World_conv_float_R_float(ctx, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x));
	jdouble temp1 = jdouble(temp0);
	sp[0].d = temp1;
	sp += 1;
	goto label_9;
	}
label_5:;
	{
	LINE_NUMBER(418);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_targetPos;
	jfloat temp0 = (jfloat)SM_mindustry_core_World_conv_float_R_float(ctx, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y));
	jdouble temp1 = jdouble(temp0);
	sp[0].d = temp1;
	sp += 1;
	goto label_9;
	}
label_6:;
	{
	LINE_NUMBER(419);
	if (((jint)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_isShooting) == 0) goto label_10;
	}
	INST_DCONST(1);
	goto label_9;
label_10:;
	INST_DCONST(0);
	goto label_9;
label_7:;
	{
	LINE_NUMBER(420);
	jfloat temp0 = (jfloat)((func_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_progress_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_progress_R_float])(ctx, (frame[0].o));
	jdouble temp1 = jdouble(temp0);
	sp[0].d = temp1;
	sp += 1;
	goto label_9;
	}
label_8:;
	{
	LINE_NUMBER(421);
	jdouble temp0 = (jdouble)M_mindustry_gen_Building_sense_mindustry_logic_LAccess_R_double(ctx, (frame[0].o), (frame[1].o));
	sp[0].d = temp0;
	sp += 1;
	}
label_9:;
	LINE_NUMBER(413);
	popStackFrame(ctx);
	INST_DRETURN();

	popStackFrame(ctx);
}

jfloat M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_fogRadius_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/turrets/Turret$TurretBuild:fogRadius", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(427);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp0 = (jfloat)((mindustry_world_blocks_defense_turrets_BaseTurret *) NULL_CHECK(sp[0].o))->F_range;
	jint temp1 = (jint)((func_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_hasAmmo_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_hasAmmo_R_boolean])(ctx, (frame[0].o));
	sp[0].f = temp0;
	sp += 1;
	if (temp1 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_peekAmmo_R_mindustry_entities_bullet_BulletType) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_peekAmmo_R_mindustry_entities_bullet_BulletType])(ctx, (frame[0].o));
	jfloat temp0 = (jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_rangeChange;
	sp[0].f = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_FCONST(0);
label_2:;
	{
	sp -= 2;
	jfloat temp0 = (sp[0].f + sp[1].f) / (jfloat(8.0f));
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	popStackFrame(ctx);
	return (temp0 * ((jfloat)((mindustry_world_blocks_defense_turrets_BaseTurret *) NULL_CHECK(sp[0].o))->F_fogRadiusMultiplier));
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_progress_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/turrets/Turret$TurretBuild:progress", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(432);
	jfloat temp0 = (jfloat)((mindustry_world_blocks_defense_turrets_ReloadTurret$ReloadTurretBuild *) NULL_CHECK((frame[0].o)))->F_reloadCounter;
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, (temp0 / ((jfloat)((mindustry_world_blocks_defense_turrets_ReloadTurret *) NULL_CHECK(sp[0].o))->F_reload)));
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_isShooting_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/turrets/Turret$TurretBuild:isShooting", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(436);
	popStackFrame(ctx);
	return ((jint)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_isShooting);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_unit_R_mindustry_gen_Unit(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/turrets/Turret$TurretBuild:unit", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(442);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_unit;
	((func_mindustry_gen_BlockUnitc_tile_mindustry_gen_Building) resolveInterfaceMethod(ctx, &class_mindustry_gen_BlockUnitc, INDEX_mindustry_gen_BlockUnitc_tile_mindustry_gen_Building, sp[0].o))(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(443);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	((func_mindustry_gen_BlockUnitc_team_mindustry_game_Team) resolveInterfaceMethod(ctx, &class_mindustry_gen_BlockUnitc, INDEX_mindustry_gen_BlockUnitc_team_mindustry_game_Team, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(444);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_unit;
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_gen_Unit, sp[0].o));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_controlled_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/turrets/Turret$TurretBuild:controlled", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(448);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_unit;
	jint temp0 = (jint)((func_mindustry_gen_Unitc_isPlayer_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_gen_Unitc, INDEX_mindustry_gen_Unitc_isPlayer_R_boolean, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_logicControlled_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/turrets/Turret$TurretBuild:logicControlled", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(452);
	if ((floatCompare(((jfloat)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_logicControlTime), (jfloat(0)), -1)) <= 0) goto label_1;
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

jbool M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_isActive_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/turrets/Turret$TurretBuild:isActive", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(456);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_target;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	if (((jint)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_wasShooting) == 0) goto label_2;
	}
label_1:;
	{
	if (((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_enabled) == 0) goto label_2;
	}
	{
	if ((floatCompare(((jfloat)((mindustry_world_blocks_defense_turrets_BaseTurret$BaseTurretBuild *) NULL_CHECK((frame[0].o)))->F_activationTimer), (jfloat(0)), 1)) > 0) goto label_2;
	}
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_targetPosition_mindustry_gen_Posc(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/turrets/Turret$TurretBuild:targetPosition", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(460);
	jint temp0 = (jint)((func_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_hasAmmo_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_hasAmmo_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	INST_ALOAD(1);
	if ((--sp)->o != nullptr) goto label_2;
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(461);
	sp[0].o = (jobject)((func_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_peekAmmo_R_mindustry_entities_bullet_BulletType) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_peekAmmo_R_mindustry_entities_bullet_BulletType])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(463);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_setZero_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_setZero_R_arc_math_geom_Vec2])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(466);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK(sp[0].o))->F_accurateDelay) == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK(sp[0].o))->F_moveWhileCharging) != 0) goto label_5;
	}
	{
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_gen_Hitboxc)) == 0) goto label_5;
	}
	{
	frame[4].o = (checkCast(ctx, &class_mindustry_gen_Hitboxc, (frame[1].o)));
	LINE_NUMBER(467);
	sp[0].o = frame[3].o;
	jfloat temp0 = (jfloat)((func_mindustry_gen_Hitboxc_deltaX_R_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Hitboxc, INDEX_mindustry_gen_Hitboxc_deltaX_R_float, (frame[4].o)))(ctx, (frame[4].o));
	jfloat temp1 = (jfloat)((func_mindustry_gen_Hitboxc_deltaY_R_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Hitboxc, INDEX_mindustry_gen_Hitboxc_deltaY_R_float, (frame[4].o)))(ctx, (frame[4].o));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp0, temp1);
	sp[1].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK(sp[1].o))->F_shoot;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_scl_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_scl_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (((jfloat)((mindustry_entities_pattern_ShootPattern *) NULL_CHECK(sp[1].o))->F_firstShotDelay) / (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta)));
	}
label_5:;
	{
	LINE_NUMBER(470);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK(sp[0].o))->F_predictTarget) == 0) goto label_7;
	}
	{
	if ((floatCompare(((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[2].o)))->F_speed), (jfloat(1,000000e-02f)), -1)) < 0) goto label_7;
	}
	{
	LINE_NUMBER(471);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_targetPos;
	sp[1].o = (jobject)SM_mindustry_entities_Predict_intercept_arc_math_geom_Position_arc_math_geom_Position_float_float_float_R_arc_math_geom_Vec2(ctx, (frame[0].o), (frame[1].o), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[3].o)))->F_x), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[3].o)))->F_y), ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[2].o)))->F_speed));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	goto label_9;
	}
label_7:;
	{
	LINE_NUMBER(473);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_targetPos;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_arc_math_geom_Position_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Position_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[1].o));
	}
label_9:;
	{
	LINE_NUMBER(476);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_targetPos;
	jint temp0 = (jint)((func_arc_math_geom_Vec2_isZero_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_isZero_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_10;
	}
	{
	LINE_NUMBER(477);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_targetPos;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_arc_math_geom_Position_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Position_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[1].o));
	}
label_10:;
	LINE_NUMBER(479);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_draw(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/turrets/Turret$TurretBuild:draw", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(483);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK(sp[0].o))->F_drawer;
	((func_mindustry_world_draw_DrawBlock_draw_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_draw_DrawBlock_draw_mindustry_gen_Building])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(484);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_drawSelect(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/turrets/Turret$TurretBuild:drawSelect", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(488);
	M_mindustry_world_blocks_defense_turrets_BaseTurret$BaseTurretBuild_drawSelect(ctx, (frame[0].o));
	LINE_NUMBER(490);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK(sp[0].o))->F_drawMinRange) == 0) goto label_2;
	}
	{
	LINE_NUMBER(491);
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	jfloat temp2 = (jfloat)((func_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_minRange_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_minRange_R_float])(ctx, (frame[0].o));
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	sp[0].o = (jobject)((mindustry_game_Team *) NULL_CHECK(sp[0].o))->F_color;
	SM_mindustry_graphics_Drawf_dashCircle_float_float_float_arc_graphics_Color(ctx, temp0, temp1, temp2, sp[0].o);
	}
label_2:;
	LINE_NUMBER(493);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_updateTile(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/turrets/Turret$TurretBuild:updateTile", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(497);
	jint temp0 = (jint)((func_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_validateTarget_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_validateTarget_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	{
	((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_target = (jref) (jobject(nullptr));
	}
label_1:;
	{
	LINE_NUMBER(498);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp += 1;
	if (((jint)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK(sp[0].o))->F_alwaysShooting) != 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((func_mindustry_gen_Unitc_controller_R_mindustry_entities_units_UnitController) resolveInterfaceMethod(ctx, &class_mindustry_gen_Unitc, INDEX_mindustry_gen_Unitc_controller_R_mindustry_entities_units_UnitController, sp[0].o))(ctx, sp[0].o);
	if ((isInstance(ctx, sp[0].o, &class_mindustry_gen_Player)) == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_unit;
	jint temp0 = (jint)((func_mindustry_gen_Weaponsc_isShooting_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_gen_Weaponsc, INDEX_mindustry_gen_Weaponsc_isShooting_R_boolean, sp[0].o))(ctx, sp[0].o);
	if (temp0 == 0) goto label_4;
	}
	goto label_2;
label_3:;
	{
	jint temp0 = (jint)((func_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_logicControlled_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_logicControlled_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_5;
	}
	{
	if (((jint)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_logicShooting) == 0) goto label_4;
	}
	goto label_2;
label_5:;
	{
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_target;
	if (sp[0].o == nullptr) goto label_4;
	}
label_2:;
	INST_ICONST(1);
	goto label_6;
label_4:;
	INST_ICONST(0);
label_6:;
	{
	sp -= 2;
	((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK(sp[0].o))->F_isShooting = sp[1].i;
	LINE_NUMBER(500);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_unit;
	jint temp0 = (jint)((func_mindustry_gen_Unitc_isPlayer_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_gen_Unitc, INDEX_mindustry_gen_Unitc_isPlayer_R_boolean, sp[0].o))(ctx, sp[0].o);
	if (temp0 == 0) goto label_8;
	}
	{
	LINE_NUMBER(501);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_unit;
	jfloat temp0 = (jfloat)((func_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_getAmmoFraction_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_getAmmoFraction_R_float])(ctx, (frame[0].o));
	((func_mindustry_gen_BlockUnitc_ammo_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_BlockUnitc, INDEX_mindustry_gen_BlockUnitc_ammo_float, sp[0].o))(ctx, sp[0].o, temp0);
	}
label_8:;
	{
	LINE_NUMBER(504);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_soundLoop;
	if (sp[0].o == nullptr) goto label_10;
	}
	{
	LINE_NUMBER(505);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_soundLoop;
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	jint temp2 = (jint)((func_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_shouldActiveSound_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_shouldActiveSound_R_boolean])(ctx, (frame[0].o));
	jfloat temp3 = (jfloat)((func_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_activeSoundVolume_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_activeSoundVolume_R_float])(ctx, (frame[0].o));
	((func_mindustry_audio_SoundLoop_update_float_float_boolean_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_audio_SoundLoop_update_float_float_boolean_float])(ctx, sp[0].o, temp0, temp1, temp2, temp3);
	}
label_10:;
	{
	LINE_NUMBER(508);
	if (((jint)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_isShooting) == 0) goto label_12;
	}
	{
	jint temp0 = (jint)((func_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_canConsume_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_canConsume_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_13;
	}
label_12:;
	{
	jint temp0 = (jint)((func_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_charging_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_charging_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_14;
	}
label_13:;
	INST_FCONST(1);
	goto label_15;
label_14:;
	INST_FCONST(0);
label_15:;
	{
	sp -= 1;
	frame[1].f = sp[0].f;
	LINE_NUMBER(509);
	if ((floatCompare((frame[1].f), (jfloat(0)), -1)) <= 0) goto label_17;
	}
	{
	jint temp0 = (jint)((func_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_controlled_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_controlled_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_17;
	}
	{
	LINE_NUMBER(510);
	((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_warmupHold = (jfloat(1));
	}
label_17:;
	{
	LINE_NUMBER(512);
	if ((floatCompare(((jfloat)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_warmupHold), (jfloat(0)), -1)) <= 0) goto label_19;
	}
	{
	LINE_NUMBER(513);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK(sp[0].o))->F_warmupHold;
	clinit_arc_util_Time(ctx);
	jfloat temp1 = (jfloat)SF_arc_util_Time_delta;
	sp[1].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK(sp[0].o))->F_warmupHold = (temp0 - (temp1 / ((jfloat)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK(sp[1].o))->F_warmupMaintainTime)));
	LINE_NUMBER(514);
	frame[1].f = (jfloat(1));
	}
label_19:;
	{
	LINE_NUMBER(517);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK(sp[0].o))->F_linearWarmup) == 0) goto label_22;
	}
	{
	LINE_NUMBER(518);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_shootWarmup;
	jfloat temp1 = frame[1].f;
	sp[1].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp2 = (jfloat)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK(sp[1].o))->F_shootWarmupSpeed;
	sp[1].f = temp0;
	sp[2].f = temp1;
	sp[3].f = temp2;
	sp += 4;
	if ((floatCompare((frame[1].f), (jfloat(0)), -1)) <= 0) goto label_24;
	}
	{
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_efficiency;
	sp[0].f = temp0;
	sp += 1;
	goto label_25;
	}
label_24:;
	INST_FCONST(1);
label_25:;
	{
	sp -= 5;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_approachDelta_float_float_float_R_float(ctx, sp[1].f, sp[2].f, (sp[3].f * sp[4].f));
	((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK(sp[0].o))->F_shootWarmup = temp0;
	goto label_26;
	}
label_22:;
	{
	LINE_NUMBER(520);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_shootWarmup;
	jfloat temp1 = frame[1].f;
	sp[1].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp2 = (jfloat)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK(sp[1].o))->F_shootWarmupSpeed;
	sp[1].f = temp0;
	sp[2].f = temp1;
	sp[3].f = temp2;
	sp += 4;
	if ((floatCompare((frame[1].f), (jfloat(0)), -1)) <= 0) goto label_27;
	}
	{
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_efficiency;
	sp[0].f = temp0;
	sp += 1;
	goto label_28;
	}
label_27:;
	INST_FCONST(1);
label_28:;
	{
	sp -= 5;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_lerpDelta_float_float_float_R_float(ctx, sp[1].f, sp[2].f, (sp[3].f * sp[4].f));
	((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK(sp[0].o))->F_shootWarmup = temp0;
	}
label_26:;
	{
	LINE_NUMBER(523);
	((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_wasShooting = (jint(0));
	LINE_NUMBER(525);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_curRecoil;
	jfloat temp1 = jfloat(0);
	jfloat temp2 = jfloat(1);
	sp[1].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp3 = (jfloat)SM_arc_math_Mathf_approachDelta_float_float_float_R_float(ctx, temp0, temp1, (temp2 / ((jfloat)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK(sp[1].o))->F_recoilTime)));
	((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK(sp[0].o))->F_curRecoil = temp3;
	LINE_NUMBER(526);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK(sp[0].o))->F_recoils) <= 0) goto label_31;
	}
	{
	LINE_NUMBER(527);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_curRecoils;
	if (sp[0].o != nullptr) goto label_33;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject) createArray(ctx, &class_float, ((jint)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK(sp[1].o))->F_recoils));
	((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK(sp[0].o))->F_curRecoils = (jref) sp[1].o;
	}
label_33:;
	{
	LINE_NUMBER(528);
	frame[2].i = (jint(0));
	}
label_34:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (temp0 >= ((jint)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK(sp[0].o))->F_recoils)) goto label_31;
	}
	{
	LINE_NUMBER(529);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_curRecoils;
	jint temp0 = frame[2].i;
	sp[1].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_curRecoils;
	jfloat temp1 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (frame[2].i));
	jfloat temp2 = jfloat(0);
	jfloat temp3 = jfloat(1);
	sp[1].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp4 = (jfloat)SM_arc_math_Mathf_approachDelta_float_float_float_R_float(ctx, temp1, temp2, (temp3 / ((jfloat)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK(sp[1].o))->F_recoilTime)));
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = temp4;
	LINE_NUMBER(528);
	INST_IINC(2, 1);
	goto label_34;
	}
label_31:;
	{
	LINE_NUMBER(532);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_heat;
	jfloat temp1 = jfloat(0);
	jfloat temp2 = jfloat(1);
	sp[1].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp3 = (jfloat)SM_arc_math_Mathf_approachDelta_float_float_float_R_float(ctx, temp0, temp1, (temp2 / ((jfloat)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK(sp[1].o))->F_cooldownTime)));
	((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK(sp[0].o))->F_heat = temp3;
	LINE_NUMBER(533);
	sp[0].o = frame[0].o;
	jint temp4 = (jint)((func_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_charging_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_charging_R_boolean])(ctx, (frame[0].o));
	sp += 1;
	if (temp4 == 0) goto label_38;
	}
	{
	jfloat temp0 = (jfloat)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_charge;
	jfloat temp1 = jfloat(1);
	jfloat temp2 = jfloat(1);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK(sp[0].o))->F_shoot;
	jfloat temp3 = (jfloat)SM_arc_math_Mathf_approachDelta_float_float_float_R_float(ctx, temp0, temp1, (temp2 / ((jfloat)((mindustry_entities_pattern_ShootPattern *) NULL_CHECK(sp[0].o))->F_firstShotDelay)));
	sp[0].f = temp3;
	sp += 1;
	goto label_39;
	}
label_38:;
	INST_FCONST(0);
label_39:;
	{
	sp -= 2;
	((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK(sp[0].o))->F_charge = sp[1].f;
	LINE_NUMBER(535);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_unit;
	((func_mindustry_gen_BlockUnitc_tile_mindustry_gen_Building) resolveInterfaceMethod(ctx, &class_mindustry_gen_BlockUnitc, INDEX_mindustry_gen_BlockUnitc_tile_mindustry_gen_Building, sp[0].o))(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(536);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_unit;
	((func_mindustry_gen_Rotc_rotation_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Rotc, INDEX_mindustry_gen_Rotc_rotation_float, sp[0].o))(ctx, sp[0].o, ((jfloat)((mindustry_world_blocks_defense_turrets_BaseTurret$BaseTurretBuild *) NULL_CHECK((frame[0].o)))->F_rotation));
	LINE_NUMBER(537);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	((func_mindustry_gen_BlockUnitc_team_mindustry_game_Team) resolveInterfaceMethod(ctx, &class_mindustry_gen_BlockUnitc, INDEX_mindustry_gen_BlockUnitc_team_mindustry_game_Team, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(538);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_recoilOffset;
	jfloat temp0 = (jfloat)((mindustry_world_blocks_defense_turrets_BaseTurret$BaseTurretBuild *) NULL_CHECK((frame[0].o)))->F_rotation;
	jfloat temp1 = (jfloat)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_curRecoil;
	sp[1].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp2 = (jfloat)SM_arc_math_Mathf_pow_float_float_R_float(ctx, temp1, ((jfloat)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK(sp[1].o))->F_recoilPow));
	jfloat temp3 = -temp2;
	sp[1].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp0, (temp3 * ((jfloat)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK(sp[1].o))->F_recoil)));
	LINE_NUMBER(540);
	if ((floatCompare(((jfloat)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_logicControlTime), (jfloat(0)), -1)) <= 0) goto label_45;
	}
	{
	LINE_NUMBER(541);
	sp[0].o = frame[0].o;
	((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK(sp[0].o))->F_logicControlTime = (((jfloat)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK(sp[0].o))->F_logicControlTime) - (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta));
	}
label_45:;
	{
	LINE_NUMBER(544);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if ((floatCompare(((jfloat)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK(sp[0].o))->F_heatRequirement), (jfloat(0)), -1)) <= 0) goto label_47;
	}
	{
	LINE_NUMBER(545);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_sideHeat;
	jfloat temp0 = (jfloat)((func_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_calculateHeat_Array1_float_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_calculateHeat_Array1_float_R_float])(ctx, sp[1].o, sp[2].o);
	((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK(sp[0].o))->F_heatReq = temp0;
	}
label_47:;
	{
	LINE_NUMBER(548);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_rotate) == 0) goto label_49;
	}
	{
	LINE_NUMBER(550);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_arc_math_Mathf_round_float_R_int(ctx, (((jfloat)((mindustry_world_blocks_defense_turrets_BaseTurret$BaseTurretBuild *) NULL_CHECK((frame[0].o)))->F_rotation) / (jfloat(90.0f))));
	jint temp1 = (jint)SM_arc_math_Mathf_mod_int_int_R_int(ctx, temp0, (jint(4)));
	((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_rotation = temp1;
	}
label_49:;
	{
	LINE_NUMBER(553);
	((func_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_handleReload) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_handleReload])(ctx, (frame[0].o));
	LINE_NUMBER(555);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_fog) == 0) goto label_52;
	}
	{
	LINE_NUMBER(556);
	jint temp0 = (jint)((func_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_hasAmmo_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_hasAmmo_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_54;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_peekAmmo_R_mindustry_entities_bullet_BulletType) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_peekAmmo_R_mindustry_entities_bullet_BulletType])(ctx, (frame[0].o));
	jfloat temp0 = (jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_rangeChange;
	sp[0].f = temp0;
	sp += 1;
	goto label_55;
	}
label_54:;
	INST_FCONST(0);
label_55:;
	{
	sp -= 1;
	frame[2].f = sp[0].f;
	LINE_NUMBER(557);
	if ((floatCompare((frame[2].f), ((jfloat)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_lastRangeChange), -1)) == 0) goto label_52;
	}
	{
	LINE_NUMBER(558);
	((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_lastRangeChange = (frame[2].f);
	LINE_NUMBER(559);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_fogControl;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	((func_mindustry_game_FogControl_forceUpdate_mindustry_game_Team_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_FogControl_forceUpdate_mindustry_game_Team_mindustry_gen_Building])(ctx, sp[0].o, sp[1].o, (frame[0].o));
	}
label_52:;
	{
	LINE_NUMBER(563);
	if ((floatCompare(((jfloat)((mindustry_world_blocks_defense_turrets_BaseTurret$BaseTurretBuild *) NULL_CHECK((frame[0].o)))->F_activationTimer), (jfloat(0)), -1)) <= 0) goto label_59;
	}
	{
	LINE_NUMBER(564);
	sp[0].o = frame[0].o;
	((mindustry_world_blocks_defense_turrets_BaseTurret$BaseTurretBuild *) NULL_CHECK(sp[0].o))->F_activationTimer = (((jfloat)((mindustry_world_blocks_defense_turrets_BaseTurret$BaseTurretBuild *) NULL_CHECK(sp[0].o))->F_activationTimer) - (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta));
	LINE_NUMBER(565);
	popStackFrame(ctx);
	return;
	}
label_59:;
	{
	LINE_NUMBER(568);
	jint temp0 = (jint)((func_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_hasAmmo_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_hasAmmo_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_62;
	}
	{
	LINE_NUMBER(569);
	jint temp0 = (jint)SM_java_lang_Float_isNaN_float_R_boolean(ctx, ((jfloat)((mindustry_world_blocks_defense_turrets_ReloadTurret$ReloadTurretBuild *) NULL_CHECK((frame[0].o)))->F_reloadCounter));
	if (temp0 == 0) goto label_64;
	}
	{
	((mindustry_world_blocks_defense_turrets_ReloadTurret$ReloadTurretBuild *) NULL_CHECK((frame[0].o)))->F_reloadCounter = (jfloat(0));
	}
label_64:;
	{
	LINE_NUMBER(571);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK(sp[1].o))->F_timerTarget;
	sp[1].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_target;
	jobject temp1 = sp[1].o;
	sp[1].i = temp0;
	sp += 2;
	if (temp1 == nullptr) goto label_65;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp0 = (jfloat)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK(sp[0].o))->F_newTargetInterval;
	sp[0].f = temp0;
	sp += 1;
	goto label_66;
	}
label_65:;
	{
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp0 = (jfloat)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK(sp[0].o))->F_targetInterval;
	sp[0].f = temp0;
	sp += 1;
	}
label_66:;
	POP_N(3); // Pop method args
	sp->i = (jint)((func_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_timer_int_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_timer_int_float_R_boolean])(ctx, sp[0].o, sp[1].i, sp[2].f);
	sp++;
	if ((--sp)->i == 0) goto label_67;
	{
	LINE_NUMBER(572);
	((func_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_findTarget) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_findTarget])(ctx, (frame[0].o));
	}
label_67:;
	{
	LINE_NUMBER(575);
	jint temp0 = (jint)((func_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_validateTarget_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_validateTarget_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_69;
	}
	{
	LINE_NUMBER(578);
	jint temp0 = (jint)((func_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_controlled_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_controlled_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_71;
	}
	{
	LINE_NUMBER(579);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_targetPos;
	sp[1].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_unit;
	jfloat temp0 = (jfloat)((func_mindustry_gen_Weaponsc_aimX_R_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Weaponsc, INDEX_mindustry_gen_Weaponsc_aimX_R_float, sp[1].o))(ctx, sp[1].o);
	sp[1].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_unit;
	jfloat temp1 = (jfloat)((func_mindustry_gen_Weaponsc_aimY_R_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Weaponsc, INDEX_mindustry_gen_Weaponsc_aimY_R_float, sp[1].o))(ctx, sp[1].o);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(580);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_unit;
	jint temp2 = (jint)((func_mindustry_gen_Weaponsc_isShooting_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_gen_Weaponsc, INDEX_mindustry_gen_Weaponsc_isShooting_R_boolean, sp[0].o))(ctx, sp[0].o);
	frame[2].i = temp2;
	goto label_75;
	}
label_71:;
	{
	LINE_NUMBER(581);
	jint temp0 = (jint)((func_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_logicControlled_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_logicControlled_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_76;
	}
	{
	LINE_NUMBER(582);
	frame[2].i = ((jint)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_logicShooting);
	goto label_75;
	}
label_76:;
	{
	LINE_NUMBER(584);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_target;
	((func_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_targetPosition_mindustry_gen_Posc) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_targetPosition_mindustry_gen_Posc])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(586);
	jint temp0 = (jint)SM_java_lang_Float_isNaN_float_R_boolean(ctx, ((jfloat)((mindustry_world_blocks_defense_turrets_BaseTurret$BaseTurretBuild *) NULL_CHECK((frame[0].o)))->F_rotation));
	if (temp0 == 0) goto label_80;
	}
	{
	((mindustry_world_blocks_defense_turrets_BaseTurret$BaseTurretBuild *) NULL_CHECK((frame[0].o)))->F_rotation = (jfloat(0));
	}
label_80:;
	{
	LINE_NUMBER(587);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_target;
	jfloat temp0 = (jfloat)((func_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_range_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_range_R_float])(ctx, (frame[0].o));
	sp[2].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_target;
	frame[4].o = sp[2].o;
	sp[2].f = temp0;
	sp += 3;
	if ((isInstance(ctx, (frame[4].o), &class_mindustry_entities_Sized)) == 0) goto label_81;
	}
	{
	frame[3].o = (checkCast(ctx, &class_mindustry_entities_Sized, (frame[4].o)));
	jfloat temp0 = (jfloat)((func_mindustry_entities_Sized_hitSize_R_float) resolveInterfaceMethod(ctx, &class_mindustry_entities_Sized, INDEX_mindustry_entities_Sized_hitSize_R_float, (frame[3].o)))(ctx, (frame[3].o));
	jfloat temp1 = temp0 / (jfloat(1.9f));
	sp[0].f = temp1;
	sp += 1;
	goto label_83;
	}
label_81:;
	INST_FCONST(0);
label_83:;
	{
	sp -= 4;
	jint temp0 = (jint)((func_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_within_arc_math_geom_Position_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_within_arc_math_geom_Position_float_R_boolean])(ctx, sp[0].o, sp[1].o, (sp[2].f + sp[3].f));
	frame[2].i = temp0;
	}
label_75:;
	{
	LINE_NUMBER(590);
	jint temp0 = (jint)((func_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_controlled_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_controlled_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_84;
	}
	{
	LINE_NUMBER(591);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_targetPos;
	((func_mindustry_gen_Weaponsc_aimX_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Weaponsc, INDEX_mindustry_gen_Weaponsc_aimX_float, sp[0].o))(ctx, sp[0].o, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x));
	LINE_NUMBER(592);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_targetPos;
	((func_mindustry_gen_Weaponsc_aimY_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Weaponsc, INDEX_mindustry_gen_Weaponsc_aimY_float, sp[0].o))(ctx, sp[0].o, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y));
	}
label_84:;
	{
	LINE_NUMBER(595);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_targetPos;
	jfloat temp0 = (jfloat)((func_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_angleTo_arc_math_geom_Position_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_angleTo_arc_math_geom_Position_R_float])(ctx, sp[0].o, sp[1].o);
	frame[3].f = temp0;
	LINE_NUMBER(597);
	jint temp1 = (jint)((func_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_shouldTurn_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_shouldTurn_R_boolean])(ctx, (frame[0].o));
	if (temp1 == 0) goto label_88;
	}
	{
	LINE_NUMBER(598);
	((func_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_turnToTarget_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_turnToTarget_float])(ctx, (frame[0].o), (frame[3].f));
	}
label_88:;
	{
	LINE_NUMBER(601);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK(sp[0].o))->F_alwaysShooting) != 0) goto label_90;
	}
	{
	jfloat temp0 = (jfloat)SM_arc_math_Angles_angleDist_float_float_R_float(ctx, ((jfloat)((mindustry_world_blocks_defense_turrets_BaseTurret$BaseTurretBuild *) NULL_CHECK((frame[0].o)))->F_rotation), (frame[3].f));
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if ((floatCompare(temp0, ((jfloat)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK(sp[0].o))->F_shootCone), 1)) >= 0) goto label_90;
	}
	INST_ILOAD(2);
	if ((--sp)->i == 0) goto label_90;
	{
	LINE_NUMBER(602);
	((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_wasShooting = (jint(1));
	LINE_NUMBER(603);
	((func_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_updateShooting) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_updateShooting])(ctx, (frame[0].o));
	}
label_90:;
	LINE_NUMBER(605);
	goto label_93;
label_69:;
	{
	LINE_NUMBER(606);
	((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_target = (jref) (jobject(nullptr));
	}
label_93:;
	{
	LINE_NUMBER(609);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK(sp[0].o))->F_alwaysShooting) == 0) goto label_62;
	}
	{
	LINE_NUMBER(610);
	((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_wasShooting = (jint(1));
	LINE_NUMBER(611);
	((func_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_updateShooting) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_updateShooting])(ctx, (frame[0].o));
	}
label_62:;
	LINE_NUMBER(614);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_handleLiquid_mindustry_gen_Building_mindustry_type_Liquid_float(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/turrets/Turret$TurretBuild:handleLiquid", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(618);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_BaseTurret *) NULL_CHECK(sp[0].o))->F_coolant;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_liquids;
	jfloat temp0 = (jfloat)((func_mindustry_world_modules_LiquidModule_currentAmount_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_currentAmount_R_float])(ctx, sp[0].o);
	if ((floatCompare(temp0, (jfloat(1,000000e-03f)), 1)) > 0) goto label_1;
	}
	{
	LINE_NUMBER(619);
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[0].o = (jobject)SF_mindustry_game_EventType$Trigger_turretCool;
	SM_arc_Events_fire_java_lang_Enum(ctx, sp[0].o);
	}
label_1:;
	{
	LINE_NUMBER(622);
	M_mindustry_gen_Building_handleLiquid_mindustry_gen_Building_mindustry_type_Liquid_float(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].f));
	LINE_NUMBER(623);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_canConsume_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/turrets/Turret$TurretBuild:canConsume", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(627);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if ((floatCompare(((jfloat)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK(sp[0].o))->F_heatRequirement), (jfloat(0)), -1)) <= 0) goto label_1;
	}
	{
	if ((floatCompare(((jfloat)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_heatReq), (jfloat(0)), 1)) > 0) goto label_1;
	}
	{
	LINE_NUMBER(628);
	popStackFrame(ctx);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(630);
	jint temp0 = (jint)M_mindustry_gen_Building_canConsume_R_boolean(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_validateTarget_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/turrets/Turret$TurretBuild:validateTarget", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(634);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_target;
	jint temp0 = (jint)((func_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_canHeal_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_canHeal_R_boolean])(ctx, (frame[0].o));
	sp += 1;
	if (temp0 == 0) goto label_1;
	}
	clinit_mindustry_game_Team(ctx);
	(sp++)->o = SF_mindustry_game_Team_derelict;
	goto label_2;
label_1:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((mindustry_gen_Building *) NULL_CHECK(sp[-1].o))->F_team;
label_2:;
	{
	sp -= 2;
	jint temp0 = (jint)SM_mindustry_entities_Units_invalidateTarget_mindustry_gen_Posc_mindustry_game_Team_float_float_R_boolean(ctx, sp[0].o, sp[1].o, ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y));
	if (temp0 == 0) goto label_3;
	}
	{
	jint temp0 = (jint)((func_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_controlled_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_controlled_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_3;
	}
	{
	jint temp0 = (jint)((func_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_logicControlled_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_logicControlled_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_4;
	}
label_3:;
	INST_ICONST(1);
	goto label_5;
label_4:;
	INST_ICONST(0);
label_5:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_canHeal_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/turrets/Turret$TurretBuild:canHeal", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(638);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK(sp[0].o))->F_targetHealing) == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_hasAmmo_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_hasAmmo_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_peekAmmo_R_mindustry_entities_bullet_BulletType) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_peekAmmo_R_mindustry_entities_bullet_BulletType])(ctx, (frame[0].o));
	if (((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_collidesTeam) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_peekAmmo_R_mindustry_entities_bullet_BulletType) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_peekAmmo_R_mindustry_entities_bullet_BulletType])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_mindustry_entities_bullet_BulletType_heals_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_bullet_BulletType_heals_R_boolean])(ctx, sp[0].o);
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

jobject M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_findEnemy_float_R_mindustry_gen_Posc(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/turrets/Turret$TurretBuild:findEnemy", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(642);
	sp[0].o = (jobject)((func_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_peekAmmo_R_mindustry_entities_bullet_BulletType) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_peekAmmo_R_mindustry_entities_bullet_BulletType])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(643);
	sp[0].o = (jobject)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[2].o)))->F_unitSort;
	clinit_mindustry_entities_UnitSorts(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_UnitSorts_closest;
	if (sp[0].o == sp[1].o) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[2].o)))->F_unitSort;
	sp += 1;
	goto label_3;
	}
label_2:;
	{
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK(sp[0].o))->F_unitSort;
	sp += 1;
	}
label_3:;
	{
	sp -= 1;
	frame[3].o = sp[0].o;
	LINE_NUMBER(644);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK(sp[0].o))->F_targetAir) == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK(sp[0].o))->F_targetGround) != 0) goto label_5;
	}
	{
	LINE_NUMBER(645);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	jfloat temp2 = frame[1].f;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_invoke_arc_func_Boolf_4(ctx);
		auto proxy = (mindustry_world_blocks_defense_turrets_Turret$TurretBuild_invoke_arc_func_Boolf_4 *) gcAlloc(ctx, &class_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_invoke_arc_func_Boolf_4);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_entities_Units_bestEnemy_mindustry_game_Team_float_float_float_arc_func_Boolf_mindustry_entities_Units$Sortf_R_mindustry_gen_Unit(ctx, sp[0].o, temp0, temp1, temp2, sp[1].o, (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(647);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK(sp[0].o))->F_targetGround) == 0) goto label_7;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK(sp[0].o))->F_targetBlocks) == 0) goto label_7;
	}
	INST_ALOAD(2);
	if ((--sp)->o == nullptr) goto label_8;
	{
	if (((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[2].o)))->F_targetBlocks) == 0) goto label_7;
	}
label_8:;
	INST_ICONST(1);
	goto label_9;
label_7:;
	INST_ICONST(0);
label_9:;
	{
	sp -= 1;
	frame[4].i = sp[0].i;
	if ((frame[2].o) == nullptr) goto label_11;
	}
	{
	if (((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[2].o)))->F_targetMissiles) == 0) goto label_12;
	}
label_11:;
	INST_ICONST(1);
	goto label_13;
label_12:;
	INST_ICONST(0);
label_13:;
	{
	sp -= 1;
	frame[5].i = sp[0].i;
	LINE_NUMBER(648);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	jfloat temp2 = frame[1].f;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_invoke_arc_func_Boolf_5(ctx);
		auto proxy = (mindustry_world_blocks_defense_turrets_Turret$TurretBuild_invoke_arc_func_Boolf_5 *) gcAlloc(ctx, &class_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_invoke_arc_func_Boolf_5);
		proxy->F_field1 = (frame[5].i);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_invoke_arc_func_Boolf_6(ctx);
		auto proxy = (mindustry_world_blocks_defense_turrets_Turret$TurretBuild_invoke_arc_func_Boolf_6 *) gcAlloc(ctx, &class_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_invoke_arc_func_Boolf_6);
		proxy->F_field1 = (frame[4].i);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_entities_Units_bestTarget_mindustry_game_Team_float_float_float_arc_func_Boolf_arc_func_Boolf_mindustry_entities_Units$Sortf_R_mindustry_gen_Teamc(ctx, sp[0].o, temp0, temp1, temp2, sp[1].o, sp[2].o, (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_findTarget(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/turrets/Turret$TurretBuild:findTarget", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(655);
	jfloat temp0 = (jfloat)((func_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_trackingRange_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_trackingRange_R_float])(ctx, (frame[0].o));
	frame[1].f = temp0;
	jfloat temp1 = (jfloat)((func_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_range_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_range_R_float])(ctx, (frame[0].o));
	frame[2].f = temp1;
	LINE_NUMBER(657);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_findEnemy_float_R_mindustry_gen_Posc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_findEnemy_float_R_mindustry_gen_Posc])(ctx, (frame[0].o), (frame[2].f));
	((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK(sp[0].o))->F_target = (jref) sp[1].o;
	LINE_NUMBER(659);
	jint temp2 = (jint)SM_arc_math_Mathf_equal_float_float_R_boolean(ctx, (frame[1].f), (frame[2].f));
	if (temp2 != 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_target;
	if (sp[0].o != nullptr) goto label_4;
	}
	{
	LINE_NUMBER(660);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_findEnemy_float_R_mindustry_gen_Posc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_findEnemy_float_R_mindustry_gen_Posc])(ctx, (frame[0].o), (frame[1].f));
	((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK(sp[0].o))->F_target = (jref) sp[1].o;
	}
label_4:;
	{
	LINE_NUMBER(663);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_target;
	if (sp[0].o != nullptr) goto label_6;
	}
	{
	jint temp0 = (jint)((func_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_canHeal_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_canHeal_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_6;
	}
	{
	LINE_NUMBER(664);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	jfloat temp2 = frame[2].f;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_invoke_arc_func_Boolf_7(ctx);
		auto proxy = (mindustry_world_blocks_defense_turrets_Turret$TurretBuild_invoke_arc_func_Boolf_7 *) gcAlloc(ctx, &class_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_invoke_arc_func_Boolf_7);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[1].o = (jobject)SM_mindustry_entities_Units_findAllyTile_mindustry_game_Team_float_float_float_arc_func_Boolf_R_mindustry_gen_Building(ctx, sp[1].o, temp0, temp1, temp2, sp[2].o);
	((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK(sp[0].o))->F_target = (jref) sp[1].o;
	}
label_6:;
	LINE_NUMBER(666);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_turnToTarget_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/turrets/Turret$TurretBuild:turnToTarget", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(669);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_world_blocks_defense_turrets_BaseTurret$BaseTurretBuild *) NULL_CHECK((frame[0].o)))->F_rotation;
	jfloat temp1 = frame[1].f;
	sp[1].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp2 = (jfloat)((mindustry_world_blocks_defense_turrets_BaseTurret *) NULL_CHECK(sp[1].o))->F_rotateSpeed;
	jfloat temp3 = (jfloat)((func_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_delta_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_delta_R_float])(ctx, (frame[0].o));
	jfloat temp4 = (jfloat)SM_arc_math_Angles_moveToward_float_float_float_R_float(ctx, temp0, temp1, ((temp2 * temp3) * ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_potentialEfficiency)));
	((mindustry_world_blocks_defense_turrets_BaseTurret$BaseTurretBuild *) NULL_CHECK(sp[0].o))->F_rotation = temp4;
	LINE_NUMBER(670);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_shouldTurn_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/turrets/Turret$TurretBuild:shouldTurn", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(673);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK(sp[0].o))->F_moveWhileCharging) != 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_charging_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_charging_R_boolean])(ctx, (frame[0].o));
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

void M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_updateEfficiencyMultiplier(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/turrets/Turret$TurretBuild:updateEfficiencyMultiplier", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(678);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if ((floatCompare(((jfloat)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK(sp[0].o))->F_heatRequirement), (jfloat(0)), -1)) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(679);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_efficiency;
	jfloat temp1 = (jfloat)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_heatReq;
	sp[1].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp2 = temp1 / ((jfloat)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK(sp[1].o))->F_heatRequirement);
	jint temp3 = (jint)((func_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_cheating_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_cheating_R_boolean])(ctx, (frame[0].o));
	sp[1].f = temp0;
	sp[2].f = temp2;
	sp += 3;
	if (temp3 == 0) goto label_3;
	}
	INST_FCONST(1);
	goto label_4;
label_3:;
	INST_FCONST(0);
label_4:;
	{
	sp -= 4;
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, sp[2].f, sp[3].f);
	sp[2].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp1 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, temp0, ((jfloat)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK(sp[2].o))->F_maxHeatEfficiency));
	((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_efficiency = (sp[1].f * temp1);
	}
label_1:;
	LINE_NUMBER(681);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_useAmmo_R_mindustry_entities_bullet_BulletType(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/turrets/Turret$TurretBuild:useAmmo", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(685);
	jint temp0 = (jint)((func_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_cheating_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_cheating_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_peekAmmo_R_mindustry_entities_bullet_BulletType) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_peekAmmo_R_mindustry_entities_bullet_BulletType])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(687);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_ammo;
	sp[0].o = (jobject)((func_arc_struct_Seq_peek_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_peek_R_java_lang_Object])(ctx, sp[0].o);
	frame[1].o = (checkCast(ctx, &class_mindustry_world_blocks_defense_turrets_Turret$AmmoEntry, sp[0].o));
	LINE_NUMBER(688);
	sp[0].o = frame[1].o;
	jint temp0 = (jint)((mindustry_world_blocks_defense_turrets_Turret$AmmoEntry *) NULL_CHECK(sp[0].o))->F_amount;
	sp[1].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	((mindustry_world_blocks_defense_turrets_Turret$AmmoEntry *) NULL_CHECK(sp[0].o))->F_amount = (temp0 - ((jint)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK(sp[1].o))->F_ammoPerShot));
	LINE_NUMBER(689);
	if (((jint)((mindustry_world_blocks_defense_turrets_Turret$AmmoEntry *) NULL_CHECK((frame[1].o)))->F_amount) > 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_ammo;
	sp[0].o = (jobject)((func_arc_struct_Seq_pop_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_pop_R_java_lang_Object])(ctx, sp[0].o);
	}
label_4:;
	{
	LINE_NUMBER(690);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK(sp[0].o))->F_totalAmmo;
	sp[1].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK(sp[0].o))->F_totalAmmo = (temp0 - ((jint)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK(sp[1].o))->F_ammoPerShot));
	LINE_NUMBER(691);
	sp[0].o = frame[0].o;
	jint temp1 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, ((jint)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_totalAmmo), (jint(0)));
	((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK(sp[0].o))->F_totalAmmo = temp1;
	LINE_NUMBER(692);
	sp[0].o = (jobject)((func_mindustry_world_blocks_defense_turrets_Turret$AmmoEntry_type_R_mindustry_entities_bullet_BulletType) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_blocks_defense_turrets_Turret$AmmoEntry_type_R_mindustry_entities_bullet_BulletType])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_peekAmmo_R_mindustry_entities_bullet_BulletType(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/turrets/Turret$TurretBuild:peekAmmo", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(697);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_ammo;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) != 0) goto label_1;
	}
	INST_ACONST_NULL();
	goto label_2;
label_1:;
	{
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_ammo;
	sp[0].o = (jobject)((func_arc_struct_Seq_peek_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_peek_R_java_lang_Object])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_mindustry_world_blocks_defense_turrets_Turret$AmmoEntry_type_R_mindustry_entities_bullet_BulletType) ((void **) nullCheck(ctx, (checkCast(ctx, &class_mindustry_world_blocks_defense_turrets_Turret$AmmoEntry, sp[0].o)))->vtable)[VTABLE_mindustry_world_blocks_defense_turrets_Turret$AmmoEntry_type_R_mindustry_entities_bullet_BulletType])(ctx, (checkCast(ctx, &class_mindustry_world_blocks_defense_turrets_Turret$AmmoEntry, sp[0].o)));
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_hasAmmo_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/turrets/Turret$TurretBuild:hasAmmo", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(703);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_ammo;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) < (jint(2))) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_ammo;
	sp[0].o = (jobject)((func_arc_struct_Seq_peek_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_peek_R_java_lang_Object])(ctx, sp[0].o);
	jint temp0 = (jint)((mindustry_world_blocks_defense_turrets_Turret$AmmoEntry *) NULL_CHECK((checkCast(ctx, &class_mindustry_world_blocks_defense_turrets_Turret$AmmoEntry, sp[0].o))))->F_amount;
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (temp0 >= ((jint)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK(sp[0].o))->F_ammoPerShot)) goto label_1;
	}
	{
	LINE_NUMBER(704);
	frame[1].i = (jint(0));
	}
label_3:;
	{
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_ammo;
	if (temp0 >= ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_1;
	}
	{
	LINE_NUMBER(705);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_ammo;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[1].i));
	jint temp0 = (jint)((mindustry_world_blocks_defense_turrets_Turret$AmmoEntry *) NULL_CHECK((checkCast(ctx, &class_mindustry_world_blocks_defense_turrets_Turret$AmmoEntry, sp[0].o))))->F_amount;
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (temp0 < ((jint)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK(sp[0].o))->F_ammoPerShot)) goto label_5;
	}
	{
	LINE_NUMBER(706);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_ammo;
	sp[1].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_ammo;
	((func_arc_struct_Seq_swap_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_swap_int_int])(ctx, sp[0].o, (((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size) - (jint(1))), (frame[1].i));
	LINE_NUMBER(707);
	goto label_1;
	}
label_5:;
	{
	LINE_NUMBER(704);
	INST_IINC(1, 1);
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(713);
	jint temp0 = (jint)((func_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_canConsume_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_canConsume_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_8;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_8:;
	{
	LINE_NUMBER(715);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_ammo;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_9;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_ammo;
	sp[0].o = (jobject)((func_arc_struct_Seq_peek_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_peek_R_java_lang_Object])(ctx, sp[0].o);
	jint temp0 = (jint)((mindustry_world_blocks_defense_turrets_Turret$AmmoEntry *) NULL_CHECK((checkCast(ctx, &class_mindustry_world_blocks_defense_turrets_Turret$AmmoEntry, sp[0].o))))->F_amount;
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (temp0 >= ((jint)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK(sp[0].o))->F_ammoPerShot)) goto label_10;
	}
	{
	jint temp0 = (jint)((func_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_cheating_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_cheating_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_9;
	}
label_10:;
	INST_ICONST(1);
	goto label_11;
label_9:;
	INST_ICONST(0);
label_11:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_charging_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/turrets/Turret$TurretBuild:charging", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(719);
	if (((jint)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_queuedBullets) <= 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK(sp[0].o))->F_shoot;
	if ((floatCompare(((jfloat)((mindustry_entities_pattern_ShootPattern *) NULL_CHECK(sp[0].o))->F_firstShotDelay), (jfloat(0)), -1)) <= 0) goto label_1;
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

void M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_handleReload(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/turrets/Turret$TurretBuild:handleReload", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(724);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK(sp[0].o))->F_reloadWhileCharging) != 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_charging_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_charging_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_2;
	}
label_1:;
	{
	jfloat temp0 = (jfloat)((mindustry_world_blocks_defense_turrets_ReloadTurret$ReloadTurretBuild *) NULL_CHECK((frame[0].o)))->F_reloadCounter;
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if ((floatCompare(temp0, ((jfloat)((mindustry_world_blocks_defense_turrets_ReloadTurret *) NULL_CHECK(sp[0].o))->F_reload), 1)) >= 0) goto label_2;
	}
	{
	LINE_NUMBER(726);
	((func_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_updateReload) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_updateReload])(ctx, (frame[0].o));
	LINE_NUMBER(727);
	((func_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_updateCooling) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_updateCooling])(ctx, (frame[0].o));
	}
label_2:;
	LINE_NUMBER(729);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_updateReload(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/turrets/Turret$TurretBuild:updateReload", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(732);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_world_blocks_defense_turrets_ReloadTurret$ReloadTurretBuild *) NULL_CHECK(sp[0].o))->F_reloadCounter;
	jfloat temp1 = (jfloat)((func_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_delta_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_delta_R_float])(ctx, (frame[0].o));
	jfloat temp2 = (jfloat)((func_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_ammoReloadMultiplier_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_ammoReloadMultiplier_R_float])(ctx, (frame[0].o));
	jfloat temp3 = temp1 * temp2;
	jfloat temp4 = (jfloat)((func_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_baseReloadSpeed_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_baseReloadSpeed_R_float])(ctx, (frame[0].o));
	((mindustry_world_blocks_defense_turrets_ReloadTurret$ReloadTurretBuild *) NULL_CHECK(sp[0].o))->F_reloadCounter = (temp0 + (temp3 * temp4));
	LINE_NUMBER(733);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_ammoReloadMultiplier_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/turrets/Turret$TurretBuild:ammoReloadMultiplier", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(737);
	jint temp0 = (jint)((func_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_hasAmmo_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_hasAmmo_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_peekAmmo_R_mindustry_entities_bullet_BulletType) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_peekAmmo_R_mindustry_entities_bullet_BulletType])(ctx, (frame[0].o));
	jfloat temp0 = (jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_reloadMultiplier;
	sp[0].f = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_FCONST(1);
label_2:;
	popStackFrame(ctx);
	INST_FRETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_updateShooting(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/turrets/Turret$TurretBuild:updateShooting", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(742);
	jfloat temp0 = (jfloat)((mindustry_world_blocks_defense_turrets_ReloadTurret$ReloadTurretBuild *) NULL_CHECK((frame[0].o)))->F_reloadCounter;
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if ((floatCompare(temp0, ((jfloat)((mindustry_world_blocks_defense_turrets_ReloadTurret *) NULL_CHECK(sp[0].o))->F_reload), -1)) < 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_charging_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_charging_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	{
	jfloat temp0 = (jfloat)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_shootWarmup;
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if ((floatCompare(temp0, ((jfloat)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK(sp[0].o))->F_minWarmup), -1)) < 0) goto label_1;
	}
	{
	LINE_NUMBER(743);
	sp[0].o = (jobject)((func_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_peekAmmo_R_mindustry_entities_bullet_BulletType) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_peekAmmo_R_mindustry_entities_bullet_BulletType])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(745);
	((func_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_shoot_mindustry_entities_bullet_BulletType) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_shoot_mindustry_entities_bullet_BulletType])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(747);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_world_blocks_defense_turrets_ReloadTurret$ReloadTurretBuild *) NULL_CHECK(sp[0].o))->F_reloadCounter;
	sp[1].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	((mindustry_world_blocks_defense_turrets_ReloadTurret$ReloadTurretBuild *) NULL_CHECK(sp[0].o))->F_reloadCounter = (fmodf(temp0, ((jfloat)((mindustry_world_blocks_defense_turrets_ReloadTurret *) NULL_CHECK(sp[1].o))->F_reload)));
	}
label_1:;
	LINE_NUMBER(749);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_shoot_mindustry_entities_bullet_BulletType(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/turrets/Turret$TurretBuild:shoot", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(753);
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = ((jfloat)((mindustry_world_blocks_defense_turrets_BaseTurret$BaseTurretBuild *) NULL_CHECK((frame[0].o)))->F_rotation) - (jfloat(90.0f));
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp2 = (jfloat)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK(sp[0].o))->F_shootX;
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp3 = (jfloat)SM_arc_math_Angles_trnsx_float_float_float_R_float(ctx, temp1, temp2, ((jfloat)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK(sp[0].o))->F_shootY));
	frame[2].f = (temp0 + temp3);
	LINE_NUMBER(754);
	jfloat temp4 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	jfloat temp5 = ((jfloat)((mindustry_world_blocks_defense_turrets_BaseTurret$BaseTurretBuild *) NULL_CHECK((frame[0].o)))->F_rotation) - (jfloat(90.0f));
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp6 = (jfloat)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK(sp[0].o))->F_shootX;
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp7 = (jfloat)SM_arc_math_Angles_trnsy_float_float_float_R_float(ctx, temp5, temp6, ((jfloat)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK(sp[0].o))->F_shootY));
	frame[3].f = (temp4 + temp7);
	LINE_NUMBER(756);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK(sp[0].o))->F_shoot;
	if ((floatCompare(((jfloat)((mindustry_entities_pattern_ShootPattern *) NULL_CHECK(sp[0].o))->F_firstShotDelay), (jfloat(0)), -1)) <= 0) goto label_3;
	}
	{
	LINE_NUMBER(757);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK(sp[0].o))->F_chargeSound;
	jfloat temp0 = frame[2].f;
	jfloat temp1 = frame[3].f;
	sp[1].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp2 = (jfloat)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK(sp[1].o))->F_soundPitchMin;
	sp[1].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp3 = (jfloat)SM_arc_math_Mathf_random_float_float_R_float(ctx, temp2, ((jfloat)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK(sp[1].o))->F_soundPitchMax));
	jint temp4 = (jint)((func_arc_audio_Sound_at_float_float_float_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Sound_at_float_float_float_R_int])(ctx, sp[0].o, temp0, temp1, temp3);
	LINE_NUMBER(758);
	sp[0].o = (jobject)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[1].o)))->F_chargeEffect;
	((func_mindustry_entities_Effect_at_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float])(ctx, sp[0].o, (frame[2].f), (frame[3].f), ((jfloat)((mindustry_world_blocks_defense_turrets_BaseTurret$BaseTurretBuild *) NULL_CHECK((frame[0].o)))->F_rotation));
	}
label_3:;
	{
	LINE_NUMBER(761);
	sp[0].o = (jobject)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[1].o)))->F_shootPattern;
	if (sp[0].o == nullptr) goto label_6;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[1].o)))->F_shootPattern;
	sp += 1;
	goto label_7;
	}
label_6:;
	{
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK(sp[0].o))->F_shoot;
	sp += 1;
	}
label_7:;
	{
	sp -= 1;
	frame[4].o = sp[0].o;
	LINE_NUMBER(763);
	sp[0].o = frame[4].o;
	jint temp0 = (jint)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_barrelCounter;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_invoke_mindustry_entities_pattern_ShootPattern$BulletHandler_1(ctx);
		auto proxy = (mindustry_world_blocks_defense_turrets_Turret$TurretBuild_invoke_mindustry_entities_pattern_ShootPattern$BulletHandler_1 *) gcAlloc(ctx, &class_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_invoke_mindustry_entities_pattern_ShootPattern$BulletHandler_1);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_invoke_java_lang_Runnable_2(ctx);
		auto proxy = (mindustry_world_blocks_defense_turrets_Turret$TurretBuild_invoke_java_lang_Runnable_2 *) gcAlloc(ctx, &class_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_invoke_java_lang_Runnable_2);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	((func_mindustry_entities_pattern_ShootPattern_shoot_int_mindustry_entities_pattern_ShootPattern$BulletHandler_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_pattern_ShootPattern_shoot_int_mindustry_entities_pattern_ShootPattern$BulletHandler_java_lang_Runnable])(ctx, sp[0].o, temp0, sp[1].o, sp[2].o);
	LINE_NUMBER(780);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK(sp[0].o))->F_consumeAmmoOnce) == 0) goto label_10;
	}
	{
	LINE_NUMBER(781);
	sp[0].o = (jobject)((func_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_useAmmo_R_mindustry_entities_bullet_BulletType) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_useAmmo_R_mindustry_entities_bullet_BulletType])(ctx, (frame[0].o));
	}
label_10:;
	LINE_NUMBER(783);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_bullet_mindustry_entities_bullet_BulletType_float_float_float_mindustry_entities_Mover(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[26];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/turrets/Turret$TurretBuild:bullet", 26 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(786);
	sp[0].o = frame[0].o;
	((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK(sp[0].o))->F_queuedBullets = (((jint)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK(sp[0].o))->F_queuedBullets) - (jint(1)));
	LINE_NUMBER(788);
	if (((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_dead) != 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK(sp[0].o))->F_consumeAmmoOnce) != 0) goto label_3;
	}
	{
	jint temp0 = (jint)((func_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_hasAmmo_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_hasAmmo_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_3;
	}
label_2:;
	popStackFrame(ctx);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(791);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_range_float_R_float(ctx, ((jfloat)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK(sp[0].o))->F_xRand));
	frame[6].f = temp0;
	LINE_NUMBER(792);
	jfloat temp1 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp2 = ((jfloat)((mindustry_world_blocks_defense_turrets_BaseTurret$BaseTurretBuild *) NULL_CHECK((frame[0].o)))->F_rotation) - (jfloat(90.0f));
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp3 = (((jfloat)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK(sp[0].o))->F_shootX) + (frame[2].f)) + (frame[6].f);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp4 = (jfloat)SM_arc_math_Angles_trnsx_float_float_float_R_float(ctx, temp2, temp3, (((jfloat)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK(sp[0].o))->F_shootY) + (frame[3].f)));
	frame[7].f = (temp1 + temp4);
	LINE_NUMBER(793);
	jfloat temp5 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	jfloat temp6 = ((jfloat)((mindustry_world_blocks_defense_turrets_BaseTurret$BaseTurretBuild *) NULL_CHECK((frame[0].o)))->F_rotation) - (jfloat(90.0f));
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp7 = (((jfloat)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK(sp[0].o))->F_shootX) + (frame[2].f)) + (frame[6].f);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp8 = (jfloat)SM_arc_math_Angles_trnsy_float_float_float_R_float(ctx, temp6, temp7, (((jfloat)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK(sp[0].o))->F_shootY) + (frame[3].f)));
	frame[8].f = (temp5 + temp8);
	LINE_NUMBER(794);
	jfloat temp9 = ((jfloat)((mindustry_world_blocks_defense_turrets_BaseTurret$BaseTurretBuild *) NULL_CHECK((frame[0].o)))->F_rotation) + (frame[4].f);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp10 = (jfloat)SM_arc_math_Mathf_range_float_R_float(ctx, (((jfloat)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK(sp[0].o))->F_inaccuracy) + ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[1].o)))->F_inaccuracy)));
	frame[9].f = (temp9 + temp10);
	LINE_NUMBER(796);
	jfloat temp11 = jfloat(1);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp12 = temp11 - ((jfloat)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK(sp[0].o))->F_lifeRnd);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp13 = (jfloat)SM_arc_math_Mathf_random_float_R_float(ctx, ((jfloat)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK(sp[0].o))->F_lifeRnd));
	jfloat temp14 = temp12 + temp13;
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	frame[10].f = (temp14 + ((jfloat)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK(sp[0].o))->F_extraLife));
	LINE_NUMBER(797);
	if (((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[1].o)))->F_scaleLife) == 0) goto label_9;
	}
	{
	jfloat temp0 = frame[10].f;
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp1 = temp0 + ((jfloat)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK(sp[0].o))->F_scaleLifetimeOffset);
	jfloat temp2 = frame[7].f;
	jfloat temp3 = frame[8].f;
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_targetPos;
	jfloat temp4 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x;
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_targetPos;
	jfloat temp5 = (jfloat)SM_arc_math_Mathf_dst_float_float_float_float_R_float(ctx, temp2, temp3, temp4, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y));
	jfloat temp6 = (temp1 * temp5) / ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[1].o)))->F_range);
	jfloat temp7 = (jfloat)((func_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_minRange_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_minRange_R_float])(ctx, (frame[0].o));
	jfloat temp8 = temp7 / ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[1].o)))->F_range);
	jfloat temp9 = (jfloat)((func_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_range_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_range_R_float])(ctx, (frame[0].o));
	jfloat temp10 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, temp6, temp8, (temp9 / ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[1].o)))->F_range)));
	sp[0].f = temp10;
	sp += 1;
	goto label_10;
	}
label_9:;
	INST_FLOAD(10);
label_10:;
	{
	sp -= 1;
	frame[11].f = sp[0].f;
	LINE_NUMBER(800);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[0].o;
	sp[3].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	jfloat temp0 = frame[7].f;
	jfloat temp1 = frame[8].f;
	jfloat temp2 = frame[9].f;
	jfloat temp3 = jfloat(-1.0f);
	jfloat temp4 = jfloat(1);
	sp[4].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp5 = temp4 - ((jfloat)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK(sp[4].o))->F_velocityRnd);
	sp[4].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp6 = (jfloat)SM_arc_math_Mathf_random_float_R_float(ctx, ((jfloat)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK(sp[4].o))->F_velocityRnd));
	jfloat temp7 = temp5 + temp6;
	sp[4].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp8 = temp7 + ((jfloat)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK(sp[4].o))->F_extraVelocity);
	jfloat temp9 = frame[11].f;
	sp[4].o = jobject(nullptr);
	sp[5].o = frame[5].o;
	sp[6].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_targetPos;
	jfloat temp10 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[6].o))->F_x;
	sp[6].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_targetPos;
	sp[1].o = (jobject)((func_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_float_java_lang_Object_mindustry_entities_Mover_float_float_R_mindustry_gen_Bullet) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_float_java_lang_Object_mindustry_entities_Mover_float_float_R_mindustry_gen_Bullet])(ctx, sp[1].o, sp[2].o, sp[3].o, temp0, temp1, temp2, temp3, temp8, temp9, sp[4].o, sp[5].o, temp10, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[6].o))->F_y));
	((func_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_handleBullet_mindustry_gen_Bullet_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_handleBullet_mindustry_gen_Bullet_float_float_float])(ctx, sp[0].o, sp[1].o, (frame[2].f), (frame[3].f), ((frame[9].f) - ((jfloat)((mindustry_world_blocks_defense_turrets_BaseTurret$BaseTurretBuild *) NULL_CHECK((frame[0].o)))->F_rotation)));
	LINE_NUMBER(802);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK(sp[0].o))->F_shootEffect;
	if (sp[0].o != nullptr) goto label_13;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[1].o)))->F_shootEffect;
	sp += 1;
	goto label_14;
	}
label_13:;
	{
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK(sp[0].o))->F_shootEffect;
	sp += 1;
	}
label_14:;
	{
	sp -= 1;
	jfloat temp0 = frame[7].f;
	jfloat temp1 = frame[8].f;
	jfloat temp2 = ((jfloat)((mindustry_world_blocks_defense_turrets_BaseTurret$BaseTurretBuild *) NULL_CHECK((frame[0].o)))->F_rotation) + (frame[4].f);
	sp[1].o = (jobject)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[1].o)))->F_hitColor;
	((func_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color])(ctx, sp[0].o, temp0, temp1, temp2, sp[1].o);
	LINE_NUMBER(803);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK(sp[0].o))->F_smokeEffect;
	if (sp[0].o != nullptr) goto label_16;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[1].o)))->F_smokeEffect;
	sp += 1;
	goto label_17;
	}
label_16:;
	{
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK(sp[0].o))->F_smokeEffect;
	sp += 1;
	}
label_17:;
	{
	sp -= 1;
	jfloat temp0 = frame[7].f;
	jfloat temp1 = frame[8].f;
	jfloat temp2 = ((jfloat)((mindustry_world_blocks_defense_turrets_BaseTurret$BaseTurretBuild *) NULL_CHECK((frame[0].o)))->F_rotation) + (frame[4].f);
	sp[1].o = (jobject)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[1].o)))->F_hitColor;
	((func_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color])(ctx, sp[0].o, temp0, temp1, temp2, sp[1].o);
	LINE_NUMBER(804);
	sp[0].o = (jobject)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[1].o)))->F_shootSound;
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_none;
	if (sp[0].o == sp[1].o) goto label_19;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[1].o)))->F_shootSound;
	sp += 1;
	goto label_20;
	}
label_19:;
	{
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK(sp[0].o))->F_shootSound;
	sp += 1;
	}
label_20:;
	{
	sp -= 1;
	jfloat temp0 = frame[7].f;
	jfloat temp1 = frame[8].f;
	sp[1].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp2 = (jfloat)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK(sp[1].o))->F_soundPitchMin;
	sp[1].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp3 = (jfloat)SM_arc_math_Mathf_random_float_float_R_float(ctx, temp2, ((jfloat)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK(sp[1].o))->F_soundPitchMax));
	sp[1].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp4 = (jint)((func_arc_audio_Sound_at_float_float_float_float_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Sound_at_float_float_float_float_R_int])(ctx, sp[0].o, temp0, temp1, temp3, ((jfloat)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK(sp[1].o))->F_shootSoundVolume));
	LINE_NUMBER(806);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK(sp[0].o))->F_ammoUseEffect;
	jfloat temp5 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp6 = (jfloat)((mindustry_world_blocks_defense_turrets_BaseTurret$BaseTurretBuild *) NULL_CHECK((frame[0].o)))->F_rotation;
	sp[1].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp7 = (jfloat)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK(sp[1].o))->F_ammoEjectBack;
	LINE_NUMBER(807);
	jfloat temp8 = (jfloat)SM_arc_math_Angles_trnsx_float_float_R_float(ctx, temp6, temp7);
	jfloat temp9 = temp5 - temp8;
	jfloat temp10 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	jfloat temp11 = (jfloat)((mindustry_world_blocks_defense_turrets_BaseTurret$BaseTurretBuild *) NULL_CHECK((frame[0].o)))->F_rotation;
	sp[1].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp12 = (jfloat)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK(sp[1].o))->F_ammoEjectBack;
	LINE_NUMBER(808);
	jfloat temp13 = (jfloat)SM_arc_math_Angles_trnsy_float_float_R_float(ctx, temp11, temp12);
	jfloat temp14 = temp10 - temp13;
	jfloat temp15 = (jfloat)((mindustry_world_blocks_defense_turrets_BaseTurret$BaseTurretBuild *) NULL_CHECK((frame[0].o)))->F_rotation;
	jfloat temp16 = frame[2].f;
	LINE_NUMBER(809);
	jint temp17 = (jint)SM_arc_math_Mathf_sign_float_R_int(ctx, temp16);
	jfloat temp18 = temp15 * (jfloat(temp17));
	LINE_NUMBER(806);
	((func_mindustry_entities_Effect_at_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float])(ctx, sp[0].o, temp9, temp14, temp18);
	LINE_NUMBER(812);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if ((floatCompare(((jfloat)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK(sp[0].o))->F_shake), (jfloat(0)), -1)) <= 0) goto label_27;
	}
	{
	LINE_NUMBER(813);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp0 = (jfloat)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK(sp[0].o))->F_shake;
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	SM_mindustry_entities_Effect_shake_float_float_arc_math_geom_Position(ctx, temp0, ((jfloat)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK(sp[0].o))->F_shake), (frame[0].o));
	}
label_27:;
	{
	LINE_NUMBER(816);
	((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_curRecoil = (jfloat(1));
	LINE_NUMBER(817);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK(sp[0].o))->F_recoils) <= 0) goto label_30;
	}
	{
	LINE_NUMBER(818);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_curRecoils;
	jint temp0 = (jint)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_barrelCounter;
	sp[1].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	ARRAY_ACCESS(jfloat, sp[0].o, (temp0 % ((jint)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK(sp[1].o))->F_recoils))) = (jfloat(1));
	}
label_30:;
	{
	LINE_NUMBER(820);
	((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_heat = (jfloat(1));
	LINE_NUMBER(821);
	sp[0].o = frame[0].o;
	((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK(sp[0].o))->F_totalShots = (((jint)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK(sp[0].o))->F_totalShots) + (jint(1)));
	LINE_NUMBER(823);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK(sp[0].o))->F_consumeAmmoOnce) != 0) goto label_34;
	}
	{
	LINE_NUMBER(824);
	sp[0].o = (jobject)((func_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_useAmmo_R_mindustry_entities_bullet_BulletType) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_useAmmo_R_mindustry_entities_bullet_BulletType])(ctx, (frame[0].o));
	}
label_34:;
	LINE_NUMBER(826);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_handleBullet_mindustry_gen_Bullet_float_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/turrets/Turret$TurretBuild:handleBullet", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	LINE_NUMBER(830);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jfloat M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_activeSoundVolume_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/turrets/Turret$TurretBuild:activeSoundVolume", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(833);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_shootWarmup);
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_shouldActiveSound_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/turrets/Turret$TurretBuild:shouldActiveSound", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(837);
	if ((floatCompare(((jfloat)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_shootWarmup), (jfloat(1,000000e-02f)), -1)) <= 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK(sp[0].o))->F_loopSound;
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_none;
	if (sp[0].o == sp[1].o) goto label_1;
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

void M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_write_arc_util_io_Writes(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/turrets/Turret$TurretBuild:write", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(842);
	M_mindustry_gen_Building_write_arc_util_io_Writes(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(843);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_world_blocks_defense_turrets_ReloadTurret$ReloadTurretBuild *) NULL_CHECK((frame[0].o)))->F_reloadCounter));
	LINE_NUMBER(844);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_world_blocks_defense_turrets_BaseTurret$BaseTurretBuild *) NULL_CHECK((frame[0].o)))->F_rotation));
	LINE_NUMBER(845);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_read_arc_util_io_Reads_byte(jcontext ctx, jobject self, jobject param0, jbyte param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/turrets/Turret$TurretBuild:read", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(849);
	M_mindustry_gen_Building_read_arc_util_io_Reads_byte(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	LINE_NUMBER(851);
	if ((frame[2].i) < (jint(1))) goto label_2;
	}
	{
	LINE_NUMBER(852);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_world_blocks_defense_turrets_ReloadTurret$ReloadTurretBuild *) NULL_CHECK(sp[0].o))->F_reloadCounter = temp0;
	LINE_NUMBER(853);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_world_blocks_defense_turrets_BaseTurret$BaseTurretBuild *) NULL_CHECK(sp[0].o))->F_rotation = temp1;
	}
label_2:;
	LINE_NUMBER(855);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbyte M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_version_R_byte(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/turrets/Turret$TurretBuild:version", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(859);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_readSync_arc_util_io_Reads_byte(jcontext ctx, jobject self, jobject param0, jbyte param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/turrets/Turret$TurretBuild:readSync", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(865);
	frame[3].f = ((jfloat)((mindustry_world_blocks_defense_turrets_BaseTurret$BaseTurretBuild *) NULL_CHECK((frame[0].o)))->F_rotation);
	frame[4].f = ((jfloat)((mindustry_world_blocks_defense_turrets_ReloadTurret$ReloadTurretBuild *) NULL_CHECK((frame[0].o)))->F_reloadCounter);
	LINE_NUMBER(867);
	((func_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_readAll_arc_util_io_Reads_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_readAll_arc_util_io_Reads_byte])(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	LINE_NUMBER(869);
	((mindustry_world_blocks_defense_turrets_BaseTurret$BaseTurretBuild *) NULL_CHECK((frame[0].o)))->F_rotation = (frame[3].f);
	LINE_NUMBER(870);
	((mindustry_world_blocks_defense_turrets_ReloadTurret$ReloadTurretBuild *) NULL_CHECK((frame[0].o)))->F_reloadCounter = (frame[4].f);
	LINE_NUMBER(871);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_lambda$shoot$2(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/turrets/Turret$TurretBuild:lambda$shoot$2", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(778);
	sp[0].o = frame[0].o;
	((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK(sp[0].o))->F_barrelCounter = (((jint)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK(sp[0].o))->F_barrelCounter) + (jint(1)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_lambda$shoot$0_mindustry_entities_bullet_BulletType_float_float_float_float_mindustry_entities_Mover(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jobject param5) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/turrets/Turret$TurretBuild:lambda$shoot$0", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	frame[6].o = param5;
	{
	LINE_NUMBER(764);
	sp[0].o = frame[0].o;
	((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK(sp[0].o))->F_queuedBullets = (((jint)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK(sp[0].o))->F_queuedBullets) + (jint(1)));
	LINE_NUMBER(765);
	frame[7].i = ((jint)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_barrelCounter);
	LINE_NUMBER(767);
	if ((floatCompare((frame[5].f), (jfloat(0)), -1)) <= 0) goto label_3;
	}
	{
	LINE_NUMBER(768);
	jfloat temp0 = frame[5].f;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_invoke_java_lang_Runnable_3(ctx);
		auto proxy = (mindustry_world_blocks_defense_turrets_Turret$TurretBuild_invoke_java_lang_Runnable_3 *) gcAlloc(ctx, &class_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_invoke_java_lang_Runnable_3);
		proxy->F_field6 = (jref) (frame[6].o);
		proxy->F_field5 = (frame[4].f);
		proxy->F_field4 = (frame[3].f);
		proxy->F_field3 = (frame[2].f);
		proxy->F_field2 = (jref) (frame[1].o);
		proxy->F_field1 = (frame[7].i);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	SM_arc_util_Time_run_float_java_lang_Runnable(ctx, temp0, sp[0].o);
	goto label_5;
	}
label_3:;
	{
	LINE_NUMBER(776);
	((func_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_bullet_mindustry_entities_bullet_BulletType_float_float_float_mindustry_entities_Mover) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_bullet_mindustry_entities_bullet_BulletType_float_float_float_mindustry_entities_Mover])(ctx, (frame[0].o), (frame[1].o), (frame[2].f), (frame[3].f), (frame[4].f), (frame[6].o));
	}
label_5:;
	LINE_NUMBER(778);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_lambda$shoot$1_int_mindustry_entities_bullet_BulletType_float_float_float_mindustry_entities_Mover(jcontext ctx, jobject self, jint param0, jobject param1, jfloat param2, jfloat param3, jfloat param4, jobject param5) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/turrets/Turret$TurretBuild:lambda$shoot$1", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	frame[6].o = param5;
	{
	LINE_NUMBER(770);
	frame[7].i = ((jint)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_barrelCounter);
	LINE_NUMBER(771);
	((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_barrelCounter = (frame[1].i);
	LINE_NUMBER(772);
	((func_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_bullet_mindustry_entities_bullet_BulletType_float_float_float_mindustry_entities_Mover) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_bullet_mindustry_entities_bullet_BulletType_float_float_float_mindustry_entities_Mover])(ctx, (frame[0].o), (frame[2].o), (frame[3].f), (frame[4].f), (frame[5].f), (frame[6].o));
	LINE_NUMBER(773);
	((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_barrelCounter = (frame[7].i);
	LINE_NUMBER(774);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_lambda$findTarget$0_mindustry_gen_Building_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/turrets/Turret$TurretBuild:lambda$findTarget$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(664);
	jint temp0 = (jint)((func_mindustry_gen_Building_damaged_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_damaged_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	if ((frame[1].o) == (frame[0].o)) goto label_1;
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

jbool M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_lambda$findEnemy$2_boolean_mindustry_gen_Building_R_boolean(jcontext ctx, jobject self, jbool param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/turrets/Turret$TurretBuild:lambda$findEnemy$2", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(650);
	if ((frame[1].i) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK(sp[0].o))->F_buildingFilter;
	jint temp0 = (jint)((func_arc_func_Boolf_get_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolf, INDEX_arc_func_Boolf_get_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, (frame[2].o));
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

jbool M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_lambda$findEnemy$1_boolean_mindustry_gen_Unit_R_boolean(jcontext ctx, jobject self, jbool param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/turrets/Turret$TurretBuild:lambda$findEnemy$1", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(649);
	jint temp0 = (jint)((func_mindustry_gen_Unit_dead_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_gen_Unit_dead_R_boolean])(ctx, (frame[2].o));
	if (temp0 != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK(sp[0].o))->F_unitFilter;
	jint temp0 = (jint)((func_arc_func_Boolf_get_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolf, INDEX_arc_func_Boolf_get_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, (frame[2].o));
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Unit_isGrounded_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_gen_Unit_isGrounded_R_boolean])(ctx, (frame[2].o));
	if (temp0 != 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK(sp[0].o))->F_targetAir) == 0) goto label_1;
	}
label_2:;
	{
	jint temp0 = (jint)((func_mindustry_gen_Unit_isGrounded_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_gen_Unit_isGrounded_R_boolean])(ctx, (frame[2].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK(sp[0].o))->F_targetGround) == 0) goto label_1;
	}
label_3:;
	INST_ILOAD(1);
	if ((--sp)->i != 0) goto label_4;
	{
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_gen_TimedKillc)) != 0) goto label_1;
	}
label_4:;
	INST_ICONST(1);
	goto label_5;
label_1:;
	INST_ICONST(0);
label_5:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_lambda$findEnemy$0_mindustry_gen_Unit_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/turrets/Turret$TurretBuild:lambda$findEnemy$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(645);
	jint temp0 = (jint)((func_mindustry_gen_Unit_dead_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_dead_R_boolean])(ctx, (frame[1].o));
	if (temp0 != 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Unit_isGrounded_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_isGrounded_R_boolean])(ctx, (frame[1].o));
	if (temp0 != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK(sp[0].o))->F_unitFilter;
	jint temp0 = (jint)((func_arc_func_Boolf_get_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolf, INDEX_arc_func_Boolf_get_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, (frame[1].o));
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

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_world_blocks_defense_turrets_Turret$TurretBuild;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field curRecoils
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

	{ // Field target
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[13]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[14]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[15]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[16]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[17]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[18]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[19]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[20]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field soundLoop
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[21]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[22]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[23]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method getAmmoContent
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[2]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

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

	{ // Method peekAmmo
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[37]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

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
}

void *vtable_mindustry_world_blocks_defense_turrets_Turret$TurretBuild[] {
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
	(void *) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_remove,
	(void *) M_mindustry_gen_Building_update,
	(void *) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_write_arc_util_io_Writes,
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
	(void *) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_control_mindustry_logic_LAccess_double_double_double_double,
	(void *) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_control_mindustry_logic_LAccess_java_lang_Object_double_double_double,
	(void *) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_sense_mindustry_logic_LAccess_R_double,
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
	(void *) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_read_arc_util_io_Reads_byte,
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
	(void *) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_canConsume_R_boolean,
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
	(void *) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_shouldConsume_R_boolean,
	(void *) M_mindustry_gen_Building_shouldHideConfigure_mindustry_gen_Player_R_boolean,
	(void *) M_mindustry_gen_Building_shouldShowConfigure_mindustry_gen_Player_R_boolean,
	(void *) M_mindustry_gen_Building_wasRecentlyDamaged_R_boolean,
	(void *) M_mindustry_gen_Building_wasRecentlyHealed_float_R_boolean,
	(void *) M_mindustry_gen_Building_relativeTo_mindustry_gen_Building_R_byte,
	(void *) M_mindustry_gen_Building_relativeTo_int_int_R_byte,
	(void *) M_mindustry_gen_Building_relativeTo_mindustry_world_Tile_R_byte,
	(void *) M_mindustry_gen_Building_relativeToEdge_mindustry_world_Tile_R_byte,
	(void *) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_version_R_byte,
	(void *) M_mindustry_gen_Building_ambientVolume_R_float,
	(void *) M_mindustry_gen_Building_calculateHeat_Array1_float_R_float,
	(void *) M_mindustry_gen_Building_calculateHeat_Array1_float_arc_struct_IntSet_R_float,
	(void *) M_mindustry_gen_Building_delta_R_float,
	(void *) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_drawrot_R_float,
	(void *) M_mindustry_gen_Building_edelta_R_float,
	(void *) M_mindustry_gen_Building_efficiencyScale_R_float,
	(void *) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_fogRadius_R_float,
	(void *) M_mindustry_gen_Building_getDisplayEfficiency_R_float,
	(void *) M_mindustry_gen_Building_getPowerProduction_R_float,
	(void *) M_mindustry_gen_Building_getProgressIncrease_float_R_float,
	(void *) M_mindustry_gen_Building_handleDamage_float_R_float,
	(void *) M_mindustry_gen_Building_moveLiquid_mindustry_gen_Building_mindustry_type_Liquid_R_float,
	(void *) M_mindustry_gen_Building_moveLiquidForward_boolean_mindustry_type_Liquid_R_float,
	(void *) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_progress_R_float,
	(void *) M_mindustry_gen_Building_rotdeg_R_float,
	(void *) M_mindustry_gen_Building_timeScale_R_float,
	(void *) M_mindustry_gen_Building_totalProgress_R_float,
	(void *) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_warmup_R_float,
	(void *) M_mindustry_gen_Building_acceptStack_mindustry_type_Item_int_mindustry_gen_Teamc_R_int,
	(void *) M_mindustry_gen_Building_explosionItemCap_R_int,
	(void *) M_mindustry_gen_Building_getMaximumAccepted_mindustry_type_Item_R_int,
	(void *) M_mindustry_gen_Building_moduleBitmask_R_int,
	(void *) M_mindustry_gen_Building_pos_R_int,
	(void *) M_mindustry_gen_Building_removeStack_mindustry_type_Item_int_R_int,
	(void *) M_mindustry_gen_Building_getDisplayName_R_java_lang_String,
	(void *) M_mindustry_gen_Building_floor_R_mindustry_world_blocks_environment_Floor,
	(void *) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_status_R_mindustry_world_meta_BlockStatus,
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
	(void *) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_draw,
	(void *) M_mindustry_gen_Building_drawCached,
	(void *) M_mindustry_gen_Building_drawConfigure,
	(void *) M_mindustry_gen_Building_drawCracks,
	(void *) M_mindustry_gen_Building_drawDisabled,
	(void *) M_mindustry_gen_Building_drawItemSelection_mindustry_ctype_UnlockableContent,
	(void *) M_mindustry_gen_Building_drawLight,
	(void *) M_mindustry_gen_Building_drawLiquidLight_mindustry_type_Liquid_float,
	(void *) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_drawSelect,
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
	(void *) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_handleLiquid_mindustry_gen_Building_mindustry_type_Liquid_float,
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
	(void *) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_onDestroyed,
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
	(void *) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_readSync_arc_util_io_Reads_byte,
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
	(void *) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_updateEfficiencyMultiplier,
	(void *) M_mindustry_gen_Building_updateFogVisibility,
	(void *) M_mindustry_gen_Building_updateLastAccess_mindustry_gen_Player,
	(void *) M_mindustry_gen_Building_updatePayload_mindustry_gen_Unit_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_updatePowerGraph,
	(void *) M_mindustry_gen_Building_updateProximity,
	(void *) M_mindustry_gen_Building_updateTableAlign_arc_scene_ui_layout_Table,
	(void *) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_updateTile,
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
	(void *) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_range_R_float,
	(void *) M_mindustry_world_blocks_defense_turrets_BaseTurret$BaseTurretBuild_buildRotation_R_float,
	(void *) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_estimateDps_R_float,
	(void *) M_mindustry_world_blocks_defense_turrets_ReloadTurret$ReloadTurretBuild_updateCooling,
	(void *) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_ammoReloadMultiplier_R_float,
	(void *) M_mindustry_world_blocks_defense_turrets_ReloadTurret$ReloadTurretBuild_baseReloadSpeed_R_float,
	(void *) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_unit_R_mindustry_gen_Unit,
	(void *) M_mindustry_world_blocks_ControlBlock_isControlled_R_boolean,
	(void *) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_canControl_R_boolean,
	(void *) M_mindustry_world_blocks_ControlBlock_shouldAutoTarget_R_boolean,
	(void *) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_getAmmoContent_R_mindustry_ctype_UnlockableContent,
	(void *) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_getAmmoFraction_R_float,
	(void *) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_minRange_R_float,
	(void *) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_trackingRange_R_float,
	(void *) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_isShooting_R_boolean,
	(void *) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_controlled_R_boolean,
	(void *) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_logicControlled_R_boolean,
	(void *) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_isActive_R_boolean,
	(void *) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_targetPosition_mindustry_gen_Posc,
	(void *) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_validateTarget_R_boolean,
	(void *) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_canHeal_R_boolean,
	(void *) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_findEnemy_float_R_mindustry_gen_Posc,
	(void *) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_findTarget,
	(void *) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_turnToTarget_float,
	(void *) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_shouldTurn_R_boolean,
	(void *) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_useAmmo_R_mindustry_entities_bullet_BulletType,
	(void *) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_peekAmmo_R_mindustry_entities_bullet_BulletType,
	(void *) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_hasAmmo_R_boolean,
	(void *) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_charging_R_boolean,
	(void *) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_handleReload,
	(void *) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_updateReload,
	(void *) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_updateShooting,
	(void *) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_shoot_mindustry_entities_bullet_BulletType,
	(void *) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_bullet_mindustry_entities_bullet_BulletType_float_float_float_mindustry_entities_Mover,
	(void *) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_handleBullet_mindustry_gen_Bullet_float_float_float,
	(void *) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_activeSoundVolume_R_float,
	(void *) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_shouldActiveSound_R_boolean,
	(void *) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_lambda$shoot$2,
	(void *) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_lambda$shoot$0_mindustry_entities_bullet_BulletType_float_float_float_float_mindustry_entities_Mover,
	(void *) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_lambda$shoot$1_int_mindustry_entities_bullet_BulletType_float_float_float_mindustry_entities_Mover,
	(void *) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_lambda$findTarget$0_mindustry_gen_Building_R_boolean,
	(void *) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_lambda$findEnemy$2_boolean_mindustry_gen_Building_R_boolean,
	(void *) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_lambda$findEnemy$1_boolean_mindustry_gen_Unit_R_boolean,
	(void *) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_lambda$findEnemy$0_mindustry_gen_Unit_R_boolean,
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
	{ "updateCooling", "()V" },
	{ "ammoReloadMultiplier", "()F" },
	{ "baseReloadSpeed", "()F" },
	{ "unit", "()Lmindustry/gen/Unit;" },
	{ "isControlled", "()Z" },
	{ "canControl", "()Z" },
	{ "shouldAutoTarget", "()Z" },
	{ "getAmmoContent", "()Lmindustry/ctype/UnlockableContent;" },
	{ "getAmmoFraction", "()F" },
	{ "minRange", "()F" },
	{ "trackingRange", "()F" },
	{ "isShooting", "()Z" },
	{ "controlled", "()Z" },
	{ "logicControlled", "()Z" },
	{ "isActive", "()Z" },
	{ "targetPosition", "(Lmindustry/gen/Posc;)V" },
	{ "validateTarget", "()Z" },
	{ "canHeal", "()Z" },
	{ "findEnemy", "(F)Lmindustry/gen/Posc;" },
	{ "findTarget", "()V" },
	{ "turnToTarget", "(F)V" },
	{ "shouldTurn", "()Z" },
	{ "useAmmo", "()Lmindustry/entities/bullet/BulletType;" },
	{ "peekAmmo", "()Lmindustry/entities/bullet/BulletType;" },
	{ "hasAmmo", "()Z" },
	{ "charging", "()Z" },
	{ "handleReload", "()V" },
	{ "updateReload", "()V" },
	{ "updateShooting", "()V" },
	{ "shoot", "(Lmindustry/entities/bullet/BulletType;)V" },
	{ "bullet", "(Lmindustry/entities/bullet/BulletType;FFFLmindustry/entities/Mover;)V" },
	{ "handleBullet", "(Lmindustry/gen/Bullet;FFF)V" },
	{ "activeSoundVolume", "()F" },
	{ "shouldActiveSound", "()Z" },
	{ "lambda$shoot$2", "()V" },
	{ "lambda$shoot$0", "(Lmindustry/entities/bullet/BulletType;FFFFLmindustry/entities/Mover;)V" },
	{ "lambda$shoot$1", "(ILmindustry/entities/bullet/BulletType;FFFLmindustry/entities/Mover;)V" },
	{ "lambda$findTarget$0", "(Lmindustry/gen/Building;)Z" },
	{ "lambda$findEnemy$2", "(ZLmindustry/gen/Building;)Z" },
	{ "lambda$findEnemy$1", "(ZLmindustry/gen/Unit;)Z" },
	{ "lambda$findEnemy$0", "(Lmindustry/gen/Unit;)Z" },
};

static jclass interfaces[] { &class_mindustry_world_blocks_ControlBlock, };

static FieldMetadata fields[] {
	{ "recoilOffset", &class_arc_math_geom_Vec2, offsetof(mindustry_world_blocks_defense_turrets_Turret$TurretBuild, F_recoilOffset), "Larc/math/geom/Vec2;", 1 },
	{ "ammo", &class_arc_struct_Seq, offsetof(mindustry_world_blocks_defense_turrets_Turret$TurretBuild, F_ammo), "Larc/struct/Seq;", 1 },
	{ "totalAmmo", &class_int, offsetof(mindustry_world_blocks_defense_turrets_Turret$TurretBuild, F_totalAmmo), "I", 1 },
	{ "curRecoil", &class_float, offsetof(mindustry_world_blocks_defense_turrets_Turret$TurretBuild, F_curRecoil), "F", 1 },
	{ "heat", &class_float, offsetof(mindustry_world_blocks_defense_turrets_Turret$TurretBuild, F_heat), "F", 1 },
	{ "logicControlTime", &class_float, offsetof(mindustry_world_blocks_defense_turrets_Turret$TurretBuild, F_logicControlTime), "F", 1 },
	{ "curRecoils", getArrayClass(&class_float, 1), offsetof(mindustry_world_blocks_defense_turrets_Turret$TurretBuild, F_curRecoils), "[F", 1 },
	{ "shootWarmup", &class_float, offsetof(mindustry_world_blocks_defense_turrets_Turret$TurretBuild, F_shootWarmup), "F", 1 },
	{ "charge", &class_float, offsetof(mindustry_world_blocks_defense_turrets_Turret$TurretBuild, F_charge), "F", 1 },
	{ "warmupHold", &class_float, offsetof(mindustry_world_blocks_defense_turrets_Turret$TurretBuild, F_warmupHold), "F", 1 },
	{ "totalShots", &class_int, offsetof(mindustry_world_blocks_defense_turrets_Turret$TurretBuild, F_totalShots), "I", 1 },
	{ "barrelCounter", &class_int, offsetof(mindustry_world_blocks_defense_turrets_Turret$TurretBuild, F_barrelCounter), "I", 1 },
	{ "logicShooting", &class_boolean, offsetof(mindustry_world_blocks_defense_turrets_Turret$TurretBuild, F_logicShooting), "Z", 1 },
	{ "target", &class_mindustry_gen_Posc, offsetof(mindustry_world_blocks_defense_turrets_Turret$TurretBuild, F_target), "Lmindustry/gen/Posc;", 1 },
	{ "targetPos", &class_arc_math_geom_Vec2, offsetof(mindustry_world_blocks_defense_turrets_Turret$TurretBuild, F_targetPos), "Larc/math/geom/Vec2;", 1 },
	{ "unit", &class_mindustry_gen_BlockUnitc, offsetof(mindustry_world_blocks_defense_turrets_Turret$TurretBuild, F_unit), "Lmindustry/gen/BlockUnitc;", 1 },
	{ "wasShooting", &class_boolean, offsetof(mindustry_world_blocks_defense_turrets_Turret$TurretBuild, F_wasShooting), "Z", 1 },
	{ "isShooting", &class_boolean, offsetof(mindustry_world_blocks_defense_turrets_Turret$TurretBuild, F_isShooting), "Z", 1 },
	{ "queuedBullets", &class_int, offsetof(mindustry_world_blocks_defense_turrets_Turret$TurretBuild, F_queuedBullets), "I", 1 },
	{ "heatReq", &class_float, offsetof(mindustry_world_blocks_defense_turrets_Turret$TurretBuild, F_heatReq), "F", 1 },
	{ "sideHeat", getArrayClass(&class_float, 1), offsetof(mindustry_world_blocks_defense_turrets_Turret$TurretBuild, F_sideHeat), "[F", 1 },
	{ "soundLoop", &class_mindustry_audio_SoundLoop, offsetof(mindustry_world_blocks_defense_turrets_Turret$TurretBuild, F_soundLoop), "Lmindustry/audio/SoundLoop;", 1 },
	{ "lastRangeChange", &class_float, offsetof(mindustry_world_blocks_defense_turrets_Turret$TurretBuild, F_lastRangeChange), "F", 0 },
	{ "this$0", &class_mindustry_world_blocks_defense_turrets_Turret, offsetof(mindustry_world_blocks_defense_turrets_Turret$TurretBuild, F_this$0), "Lmindustry/world/blocks/defense/turrets/Turret;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_mindustry_world_blocks_defense_turrets_Turret, 0, "(Lmindustry/world/blocks/defense/turrets/Turret;)V", 1 },
	{ "remove", (intptr_t) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_remove, VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_remove, "()V", 1 },
	{ "onDestroyed", (intptr_t) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_onDestroyed, VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_onDestroyed, "()V", 1 },
	{ "getAmmoContent", (intptr_t) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_getAmmoContent_R_mindustry_ctype_UnlockableContent, VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_getAmmoContent_R_mindustry_ctype_UnlockableContent, "()Lmindustry/ctype/UnlockableContent;", 1 },
	{ "getAmmoFraction", (intptr_t) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_getAmmoFraction_R_float, VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_getAmmoFraction_R_float, "()F", 1 },
	{ "estimateDps", (intptr_t) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_estimateDps_R_float, VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_estimateDps_R_float, "()F", 1 },
	{ "minRange", (intptr_t) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_minRange_R_float, VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_minRange_R_float, "()F", 1 },
	{ "range", (intptr_t) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_range_R_float, VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_range_R_float, "()F", 1 },
	{ "trackingRange", (intptr_t) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_trackingRange_R_float, VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_trackingRange_R_float, "()F", 1 },
	{ "warmup", (intptr_t) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_warmup_R_float, VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_warmup_R_float, "()F", 1 },
	{ "drawrot", (intptr_t) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_drawrot_R_float, VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_drawrot_R_float, "()F", 1 },
	{ "shouldConsume", (intptr_t) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_shouldConsume_R_boolean, VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_shouldConsume_R_boolean, "()Z", 1 },
	{ "status", (intptr_t) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_status_R_mindustry_world_meta_BlockStatus, VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_status_R_mindustry_world_meta_BlockStatus, "()Lmindustry/world/meta/BlockStatus;", 1 },
	{ "canControl", (intptr_t) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_canControl_R_boolean, VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_canControl_R_boolean, "()Z", 1 },
	{ "control", (intptr_t) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_control_mindustry_logic_LAccess_double_double_double_double, VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_control_mindustry_logic_LAccess_double_double_double_double, "(Lmindustry/logic/LAccess;DDDD)V", 1 },
	{ "control", (intptr_t) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_control_mindustry_logic_LAccess_java_lang_Object_double_double_double, VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_control_mindustry_logic_LAccess_java_lang_Object_double_double_double, "(Lmindustry/logic/LAccess;Ljava/lang/Object;DDD)V", 1 },
	{ "sense", (intptr_t) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_sense_mindustry_logic_LAccess_R_double, VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_sense_mindustry_logic_LAccess_R_double, "(Lmindustry/logic/LAccess;)D", 1 },
	{ "fogRadius", (intptr_t) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_fogRadius_R_float, VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_fogRadius_R_float, "()F", 1 },
	{ "progress", (intptr_t) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_progress_R_float, VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_progress_R_float, "()F", 1 },
	{ "isShooting", (intptr_t) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_isShooting_R_boolean, VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_isShooting_R_boolean, "()Z", 1 },
	{ "unit", (intptr_t) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_unit_R_mindustry_gen_Unit, VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_unit_R_mindustry_gen_Unit, "()Lmindustry/gen/Unit;", 1 },
	{ "controlled", (intptr_t) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_controlled_R_boolean, VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_controlled_R_boolean, "()Z", 1 },
	{ "logicControlled", (intptr_t) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_logicControlled_R_boolean, VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_logicControlled_R_boolean, "()Z", 1 },
	{ "isActive", (intptr_t) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_isActive_R_boolean, VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_isActive_R_boolean, "()Z", 1 },
	{ "targetPosition", (intptr_t) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_targetPosition_mindustry_gen_Posc, VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_targetPosition_mindustry_gen_Posc, "(Lmindustry/gen/Posc;)V", 1 },
	{ "draw", (intptr_t) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_draw, VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_draw, "()V", 1 },
	{ "drawSelect", (intptr_t) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_drawSelect, VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_drawSelect, "()V", 1 },
	{ "updateTile", (intptr_t) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_updateTile, VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_updateTile, "()V", 1 },
	{ "handleLiquid", (intptr_t) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_handleLiquid_mindustry_gen_Building_mindustry_type_Liquid_float, VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_handleLiquid_mindustry_gen_Building_mindustry_type_Liquid_float, "(Lmindustry/gen/Building;Lmindustry/type/Liquid;F)V", 1 },
	{ "canConsume", (intptr_t) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_canConsume_R_boolean, VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_canConsume_R_boolean, "()Z", 1 },
	{ "validateTarget", (intptr_t) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_validateTarget_R_boolean, VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_validateTarget_R_boolean, "()Z", 4 },
	{ "canHeal", (intptr_t) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_canHeal_R_boolean, VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_canHeal_R_boolean, "()Z", 4 },
	{ "findEnemy", (intptr_t) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_findEnemy_float_R_mindustry_gen_Posc, VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_findEnemy_float_R_mindustry_gen_Posc, "(F)Lmindustry/gen/Posc;", 4 },
	{ "findTarget", (intptr_t) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_findTarget, VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_findTarget, "()V", 4 },
	{ "turnToTarget", (intptr_t) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_turnToTarget_float, VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_turnToTarget_float, "(F)V", 4 },
	{ "shouldTurn", (intptr_t) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_shouldTurn_R_boolean, VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_shouldTurn_R_boolean, "()Z", 1 },
	{ "updateEfficiencyMultiplier", (intptr_t) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_updateEfficiencyMultiplier, VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_updateEfficiencyMultiplier, "()V", 1 },
	{ "useAmmo", (intptr_t) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_useAmmo_R_mindustry_entities_bullet_BulletType, VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_useAmmo_R_mindustry_entities_bullet_BulletType, "()Lmindustry/entities/bullet/BulletType;", 1 },
	{ "peekAmmo", (intptr_t) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_peekAmmo_R_mindustry_entities_bullet_BulletType, VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_peekAmmo_R_mindustry_entities_bullet_BulletType, "()Lmindustry/entities/bullet/BulletType;", 1 },
	{ "hasAmmo", (intptr_t) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_hasAmmo_R_boolean, VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_hasAmmo_R_boolean, "()Z", 1 },
	{ "charging", (intptr_t) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_charging_R_boolean, VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_charging_R_boolean, "()Z", 1 },
	{ "handleReload", (intptr_t) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_handleReload, VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_handleReload, "()V", 4 },
	{ "updateReload", (intptr_t) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_updateReload, VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_updateReload, "()V", 4 },
	{ "ammoReloadMultiplier", (intptr_t) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_ammoReloadMultiplier_R_float, VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_ammoReloadMultiplier_R_float, "()F", 4 },
	{ "updateShooting", (intptr_t) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_updateShooting, VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_updateShooting, "()V", 4 },
	{ "shoot", (intptr_t) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_shoot_mindustry_entities_bullet_BulletType, VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_shoot_mindustry_entities_bullet_BulletType, "(Lmindustry/entities/bullet/BulletType;)V", 4 },
	{ "bullet", (intptr_t) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_bullet_mindustry_entities_bullet_BulletType_float_float_float_mindustry_entities_Mover, VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_bullet_mindustry_entities_bullet_BulletType_float_float_float_mindustry_entities_Mover, "(Lmindustry/entities/bullet/BulletType;FFFLmindustry/entities/Mover;)V", 4 },
	{ "handleBullet", (intptr_t) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_handleBullet_mindustry_gen_Bullet_float_float_float, VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_handleBullet_mindustry_gen_Bullet_float_float_float, "(Lmindustry/gen/Bullet;FFF)V", 4 },
	{ "activeSoundVolume", (intptr_t) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_activeSoundVolume_R_float, VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_activeSoundVolume_R_float, "()F", 1 },
	{ "shouldActiveSound", (intptr_t) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_shouldActiveSound_R_boolean, VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_shouldActiveSound_R_boolean, "()Z", 1 },
	{ "write", (intptr_t) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_write_arc_util_io_Writes, VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_write_arc_util_io_Writes, "(Larc/util/io/Writes;)V", 1 },
	{ "read", (intptr_t) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_read_arc_util_io_Reads_byte, VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_read_arc_util_io_Reads_byte, "(Larc/util/io/Reads;B)V", 1 },
	{ "version", (intptr_t) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_version_R_byte, VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_version_R_byte, "()B", 1 },
	{ "readSync", (intptr_t) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_readSync_arc_util_io_Reads_byte, VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_readSync_arc_util_io_Reads_byte, "(Larc/util/io/Reads;B)V", 1 },
	{ "lambda$shoot$2", (intptr_t) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_lambda$shoot$2, VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_lambda$shoot$2, "()V", 4098 },
	{ "lambda$shoot$0", (intptr_t) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_lambda$shoot$0_mindustry_entities_bullet_BulletType_float_float_float_float_mindustry_entities_Mover, VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_lambda$shoot$0_mindustry_entities_bullet_BulletType_float_float_float_float_mindustry_entities_Mover, "(Lmindustry/entities/bullet/BulletType;FFFFLmindustry/entities/Mover;)V", 4098 },
	{ "lambda$shoot$1", (intptr_t) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_lambda$shoot$1_int_mindustry_entities_bullet_BulletType_float_float_float_mindustry_entities_Mover, VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_lambda$shoot$1_int_mindustry_entities_bullet_BulletType_float_float_float_mindustry_entities_Mover, "(ILmindustry/entities/bullet/BulletType;FFFLmindustry/entities/Mover;)V", 4098 },
	{ "lambda$findTarget$0", (intptr_t) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_lambda$findTarget$0_mindustry_gen_Building_R_boolean, VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_lambda$findTarget$0_mindustry_gen_Building_R_boolean, "(Lmindustry/gen/Building;)Z", 4098 },
	{ "lambda$findEnemy$2", (intptr_t) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_lambda$findEnemy$2_boolean_mindustry_gen_Building_R_boolean, VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_lambda$findEnemy$2_boolean_mindustry_gen_Building_R_boolean, "(ZLmindustry/gen/Building;)Z", 4098 },
	{ "lambda$findEnemy$1", (intptr_t) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_lambda$findEnemy$1_boolean_mindustry_gen_Unit_R_boolean, VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_lambda$findEnemy$1_boolean_mindustry_gen_Unit_R_boolean, "(ZLmindustry/gen/Unit;)Z", 4098 },
	{ "lambda$findEnemy$0", (intptr_t) M_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_lambda$findEnemy$0_mindustry_gen_Unit_R_boolean, VTABLE_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_lambda$findEnemy$0_mindustry_gen_Unit_R_boolean, "(Lmindustry/gen/Unit;)Z", 4098 },
};

Class class_mindustry_world_blocks_defense_turrets_Turret$TurretBuild{
		.nativeName = (intptr_t) "mindustry/world/blocks/defense/turrets/Turret$TurretBuild",
		.parentClass = (intptr_t) &class_mindustry_world_blocks_defense_turrets_ReloadTurret$ReloadTurretBuild,
		.size = sizeof(mindustry_world_blocks_defense_turrets_Turret$TurretBuild),
		.classVtable = (intptr_t) vtable_mindustry_world_blocks_defense_turrets_Turret$TurretBuild,
		.staticInitializer = (intptr_t) clinit_mindustry_world_blocks_defense_turrets_Turret$TurretBuild,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_world_blocks_defense_turrets_Turret$TurretBuild,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_world_blocks_defense_turrets_Turret,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 24,
		.nativeFields = (intptr_t) fields,
		.methodCount = 61,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 354,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_blocks_defense_turrets_Turret$TurretBuild = registerClass(&class_mindustry_world_blocks_defense_turrets_Turret$TurretBuild);

}

