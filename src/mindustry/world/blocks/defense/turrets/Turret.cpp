#include "mindustry/world/blocks/defense/turrets/Turret.h"
#include "mindustry/world/blocks/defense/turrets/Turret_invoke_arc_func_Func_1.h"
#include "mindustry/world/blocks/defense/turrets/Turret_invoke_arc_func_Prov_3.h"
#include "java/lang/Integer.h"
#include "arc/func/Prov.h"
#include "arc/util/Eachable.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "arc/graphics/Color.h"
#include "mindustry/entities/UnitSorts.h"
#include "java/lang/reflect/Constructor.h"
#include "mindustry/entities/Effect.h"
#include "mindustry/content/Fx.h"
#include "arc/util/I18NBundle.h"
#include "arc/struct/Seq.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/ctype/MappableContent.h"
#include "mindustry/entities/units/BuildPlan.h"
#include "mindustry/world/Tile.h"
#include "arc/func/Floatp.h"
#include "arc/func/Boolf.h"
#include "mindustry/world/blocks/defense/turrets/Turret_invoke_arc_func_Prov_2.h"
#include "mindustry/world/draw/DrawTurret.h"
#include "arc/func/Func.h"
#include "arc/Core.h"
#include "java/lang/reflect/Field.h"
#include "mindustry/gen/Unit.h"
#include "mindustry/gen/Sounds.h"
#include "mindustry/world/meta/Stats.h"
#include "arc/util/Nullable.h"
#include "mindustry/world/blocks/defense/turrets/Turret_BulletEntry.h"
#include "mindustry/gen/Building.h"
#include "java/lang/Object.h"
#include "mindustry/entities/bullet/BulletType.h"
#include "mindustry/world/Block.h"
#include "mindustry/world/meta/StatUnit.h"
#include "mindustry/ui/Bar.h"
#include "mindustry/entities/Units_Sortf.h"
#include "mindustry/world/blocks/defense/turrets/Turret.h"
#include "mindustry/world/meta/Stat.h"
#include "java/lang/String.h"
#include "mindustry/world/draw/DrawBlock.h"
#include "mindustry/world/blocks/defense/turrets/Turret_invoke_arc_func_Boolf_2.h"
#include "mindustry/world/blocks/defense/turrets/Turret_invoke_arc_func_Boolf_3.h"
#include "java/lang/Math.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/world/blocks/defense/turrets/Turret_TurretBuild.h"
#include "java/lang/CharSequence.h"
#include "mindustry/graphics/Pal.h"
#include "arc/audio/Sound.h"
#include "mindustry/ctype/Content.h"
#include "mindustry/world/blocks/defense/turrets/Turret_AmmoEntry.h"
#include "mindustry/world/blocks/defense/turrets/BaseTurret.h"
#include "mindustry/graphics/Drawf.h"
#include "mindustry/world/blocks/defense/turrets/Turret_invoke_arc_func_Floatp_1.h"
#include "mindustry/world/blocks/defense/turrets/ReloadTurret.h"
#include "mindustry/entities/pattern/ShootPattern.h"

extern "C" {

jfloat SF_mindustry_world_blocks_defense_turrets_Turret_logicControlCooldown;

void mark_mindustry_world_blocks_defense_turrets_Turret(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_world_blocks_defense_turrets_ReloadTurret(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_world_blocks_defense_turrets_Turret *) object;
	if (self->F_shoot)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_shoot)->clazz)->markFunction)((jobject) self->F_shoot, mark, depth + 1);
	if (self->F_unitSort)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_unitSort)->clazz)->markFunction)((jobject) self->F_unitSort, mark, depth + 1);
	if (self->F_unitFilter)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_unitFilter)->clazz)->markFunction)((jobject) self->F_unitFilter, mark, depth + 1);
	if (self->F_buildingFilter)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_buildingFilter)->clazz)->markFunction)((jobject) self->F_buildingFilter, mark, depth + 1);
	if (self->F_heatColor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_heatColor)->clazz)->markFunction)((jobject) self->F_heatColor, mark, depth + 1);
	if (self->F_shootEffect)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_shootEffect)->clazz)->markFunction)((jobject) self->F_shootEffect, mark, depth + 1);
	if (self->F_smokeEffect)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_smokeEffect)->clazz)->markFunction)((jobject) self->F_smokeEffect, mark, depth + 1);
	if (self->F_ammoUseEffect)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_ammoUseEffect)->clazz)->markFunction)((jobject) self->F_ammoUseEffect, mark, depth + 1);
	if (self->F_shootSound)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_shootSound)->clazz)->markFunction)((jobject) self->F_shootSound, mark, depth + 1);
	if (self->F_chargeSound)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_chargeSound)->clazz)->markFunction)((jobject) self->F_chargeSound, mark, depth + 1);
	if (self->F_loopSound)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_loopSound)->clazz)->markFunction)((jobject) self->F_loopSound, mark, depth + 1);
	if (self->F_drawer)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_drawer)->clazz)->markFunction)((jobject) self->F_drawer, mark, depth + 1);
}

void clinit_mindustry_world_blocks_defense_turrets_Turret(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_world_blocks_defense_turrets_ReloadTurret(ctx);
	SF_mindustry_world_blocks_defense_turrets_Turret_logicControlCooldown = jfloat(120.0f);
}

void init_mindustry_world_blocks_defense_turrets_Turret_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/turrets/Turret:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_defense_turrets_Turret(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(164);
	init_mindustry_world_blocks_defense_turrets_ReloadTurret_java_lang_String(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(40);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_timers;
	((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_timers = (temp0 + (jint(1)));
	((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK(sp[0].o))->F_timerTarget = temp0;
	LINE_NUMBER(42);
	((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK((frame[0].o)))->F_targetInterval = (jfloat(20.0f));
	LINE_NUMBER(44);
	((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK((frame[0].o)))->F_newTargetInterval = (jfloat(-1.0f));
	LINE_NUMBER(47);
	((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK((frame[0].o)))->F_maxAmmo = (30);
	LINE_NUMBER(49);
	((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK((frame[0].o)))->F_ammoPerShot = (jint(1));
	LINE_NUMBER(51);
	((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK((frame[0].o)))->F_consumeAmmoOnce = (jint(1));
	LINE_NUMBER(53);
	((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK((frame[0].o)))->F_heatRequirement = (jfloat(-1.0f));
	LINE_NUMBER(55);
	((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK((frame[0].o)))->F_maxHeatEfficiency = (jfloat(3.0f));
	LINE_NUMBER(58);
	((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK((frame[0].o)))->F_inaccuracy = (jfloat(0));
	LINE_NUMBER(60);
	((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK((frame[0].o)))->F_velocityRnd = (jfloat(0));
	LINE_NUMBER(62);
	((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK((frame[0].o)))->F_extraVelocity = (jfloat(0));
	LINE_NUMBER(64);
	((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK((frame[0].o)))->F_lifeRnd = (jfloat(0));
	LINE_NUMBER(66);
	((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK((frame[0].o)))->F_extraLife = (jfloat(0));
	LINE_NUMBER(68);
	((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK((frame[0].o)))->F_scaleLifetimeOffset = (jfloat(0));
	LINE_NUMBER(70);
	((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK((frame[0].o)))->F_shootCone = (jfloat(8.0f));
	LINE_NUMBER(72);
	((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK((frame[0].o)))->F_shootX = (jfloat(0));
	((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK((frame[0].o)))->F_shootY = (jfloat(-std::numeric_limits<float>::infinity()));
	LINE_NUMBER(74);
	((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK((frame[0].o)))->F_xRand = (jfloat(0));
	LINE_NUMBER(78);
	((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK((frame[0].o)))->F_trackingRange = (jfloat(0));
	LINE_NUMBER(80);
	((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK((frame[0].o)))->F_minRange = (jfloat(0));
	LINE_NUMBER(82);
	((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK((frame[0].o)))->F_minWarmup = (jfloat(0));
	LINE_NUMBER(84);
	((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK((frame[0].o)))->F_accurateDelay = (jint(1));
	LINE_NUMBER(86);
	((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK((frame[0].o)))->F_moveWhileCharging = (jint(1));
	LINE_NUMBER(88);
	((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK((frame[0].o)))->F_reloadWhileCharging = (jint(1));
	LINE_NUMBER(90);
	((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK((frame[0].o)))->F_warmupMaintainTime = (jfloat(0));
	LINE_NUMBER(92);
	sp[0].o = frame[0].o;
	clinit_mindustry_entities_pattern_ShootPattern(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_entities_pattern_ShootPattern);
	init_mindustry_entities_pattern_ShootPattern(ctx, sp[1].o);
	((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK(sp[0].o))->F_shoot = (jref) sp[1].o;
	LINE_NUMBER(95);
	((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK((frame[0].o)))->F_targetAir = (jint(1));
	LINE_NUMBER(97);
	((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK((frame[0].o)))->F_targetGround = (jint(1));
	LINE_NUMBER(99);
	((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK((frame[0].o)))->F_targetBlocks = (jint(1));
	LINE_NUMBER(101);
	((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK((frame[0].o)))->F_targetHealing = (jint(0));
	LINE_NUMBER(103);
	((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK((frame[0].o)))->F_playerControllable = (jint(1));
	LINE_NUMBER(105);
	((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK((frame[0].o)))->F_displayAmmoMultiplier = (jint(1));
	LINE_NUMBER(107);
	((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK((frame[0].o)))->F_targetUnderBlocks = (jint(1));
	LINE_NUMBER(109);
	((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK((frame[0].o)))->F_alwaysShooting = (jint(0));
	LINE_NUMBER(111);
	((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK((frame[0].o)))->F_predictTarget = (jint(1));
	LINE_NUMBER(113);
	sp[0].o = frame[0].o;
	clinit_mindustry_entities_UnitSorts(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_UnitSorts_closest;
	((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK(sp[0].o))->F_unitSort = (jref) sp[1].o;
	LINE_NUMBER(115);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_defense_turrets_Turret_invoke_arc_func_Boolf_2(ctx);
		auto proxy = (mindustry_world_blocks_defense_turrets_Turret_invoke_arc_func_Boolf_2 *) gcAlloc(ctx, &class_mindustry_world_blocks_defense_turrets_Turret_invoke_arc_func_Boolf_2);
		sp[1].o = (jobject) proxy;
	}
	((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK(sp[0].o))->F_unitFilter = (jref) sp[1].o;
	LINE_NUMBER(117);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_defense_turrets_Turret_invoke_arc_func_Boolf_3(ctx);
		auto proxy = (mindustry_world_blocks_defense_turrets_Turret_invoke_arc_func_Boolf_3 *) gcAlloc(ctx, &class_mindustry_world_blocks_defense_turrets_Turret_invoke_arc_func_Boolf_3);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK(sp[0].o))->F_buildingFilter = (jref) sp[1].o;
	LINE_NUMBER(120);
	sp[0].o = frame[0].o;
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_turretHeat;
	((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK(sp[0].o))->F_heatColor = (jref) sp[1].o;
	LINE_NUMBER(126);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_none;
	((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK(sp[0].o))->F_ammoUseEffect = (jref) sp[1].o;
	LINE_NUMBER(128);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_shootDuo;
	((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK(sp[0].o))->F_shootSound = (jref) sp[1].o;
	LINE_NUMBER(130);
	((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK((frame[0].o)))->F_shootSoundVolume = (jfloat(1));
	LINE_NUMBER(132);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_none;
	((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK(sp[0].o))->F_chargeSound = (jref) sp[1].o;
	LINE_NUMBER(134);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_none;
	((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK(sp[0].o))->F_loopSound = (jref) sp[1].o;
	LINE_NUMBER(136);
	((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK((frame[0].o)))->F_loopSoundVolume = (jfloat(0.5f));
	LINE_NUMBER(138);
	((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK((frame[0].o)))->F_soundPitchMin = (jfloat(0.9f));
	((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK((frame[0].o)))->F_soundPitchMax = (jfloat(1.1f));
	LINE_NUMBER(140);
	((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK((frame[0].o)))->F_ammoEjectBack = (jfloat(1));
	LINE_NUMBER(142);
	((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK((frame[0].o)))->F_shootWarmupSpeed = (jfloat(0.1f));
	LINE_NUMBER(144);
	((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK((frame[0].o)))->F_linearWarmup = (jint(0));
	LINE_NUMBER(146);
	((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK((frame[0].o)))->F_recoil = (jfloat(1));
	LINE_NUMBER(148);
	((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK((frame[0].o)))->F_recoils = (jint(-1));
	LINE_NUMBER(150);
	((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK((frame[0].o)))->F_recoilTime = (jfloat(-1.0f));
	LINE_NUMBER(152);
	((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK((frame[0].o)))->F_recoilPow = (jfloat(1.8f));
	LINE_NUMBER(154);
	((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK((frame[0].o)))->F_cooldownTime = (jfloat(20.0f));
	LINE_NUMBER(156);
	((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK((frame[0].o)))->F_elevation = (jfloat(-1.0f));
	LINE_NUMBER(158);
	((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK((frame[0].o)))->F_shake = (jfloat(0));
	LINE_NUMBER(161);
	sp[0].o = frame[0].o;
	clinit_mindustry_world_draw_DrawTurret(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_world_draw_DrawTurret);
	init_mindustry_world_draw_DrawTurret(ctx, sp[1].o);
	((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK(sp[0].o))->F_drawer = (jref) sp[1].o;
	LINE_NUMBER(165);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_liquidCapacity = (jfloat(20.0f));
	LINE_NUMBER(166);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_outlinedIcon = (jint(1));
	LINE_NUMBER(167);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_drawLiquidLight = (jint(0));
	LINE_NUMBER(168);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_sync = (jint(1));
	LINE_NUMBER(169);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_rotate = (jint(1));
	LINE_NUMBER(170);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_quickRotate = (jint(0));
	LINE_NUMBER(171);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_drawArrow = (jint(0));
	LINE_NUMBER(172);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_ignoreLineRotation = (jint(1));
	LINE_NUMBER(173);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_rotateDrawEditor = (jint(0));
	LINE_NUMBER(174);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_visualRotationOffset = (jfloat(-90.0f));
	LINE_NUMBER(175);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_regionRotated1 = (jint(1));
	LINE_NUMBER(176);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_regionRotated2 = (jint(2));
	LINE_NUMBER(177);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_defense_turrets_Turret_outputsItems_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/turrets/Turret:outputsItems", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(181);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_defense_turrets_Turret_setStats(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/turrets/Turret:setStats", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(186);
	M_mindustry_world_blocks_defense_turrets_ReloadTurret_setStats(ctx, (frame[0].o));
	LINE_NUMBER(188);
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_stats;
	clinit_mindustry_world_meta_Stat(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_Stat_inaccuracy;
	jfloat temp0 = jfloat((jint(((jfloat)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK((frame[0].o)))->F_inaccuracy))));
	clinit_mindustry_world_meta_StatUnit(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_StatUnit_degrees;
	((func_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_float_mindustry_world_meta_StatUnit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_float_mindustry_world_meta_StatUnit])(ctx, sp[0].o, sp[1].o, temp0, sp[2].o);
	LINE_NUMBER(189);
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_stats;
	clinit_mindustry_world_meta_Stat(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_Stat_reload;
	jfloat temp1 = jfloat(60.0f);
	jfloat temp2 = (jfloat)((mindustry_world_blocks_defense_turrets_ReloadTurret *) NULL_CHECK((frame[0].o)))->F_reload;
	sp[2].f = temp1;
	sp[3].f = temp2;
	sp += 4;
	if (((jint)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK((frame[0].o)))->F_reloadWhileCharging) != 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK((frame[0].o)))->F_shoot;
	jfloat temp0 = (jfloat)((mindustry_entities_pattern_ShootPattern *) NULL_CHECK(sp[0].o))->F_firstShotDelay;
	sp[0].f = temp0;
	sp += 1;
	goto label_4;
	}
label_3:;
	INST_FCONST(0);
label_4:;
	{
	sp -= 5;
	jfloat temp0 = sp[2].f / (sp[3].f + sp[4].f);
	sp[2].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK((frame[0].o)))->F_shoot;
	jfloat temp1 = temp0 * (jfloat(((jint)((mindustry_entities_pattern_ShootPattern *) NULL_CHECK(sp[2].o))->F_shots)));
	clinit_mindustry_world_meta_StatUnit(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_StatUnit_perSecond;
	((func_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_float_mindustry_world_meta_StatUnit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_float_mindustry_world_meta_StatUnit])(ctx, sp[0].o, sp[1].o, temp1, sp[2].o);
	LINE_NUMBER(190);
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_stats;
	clinit_mindustry_world_meta_Stat(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_Stat_targetsAir;
	((func_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_boolean])(ctx, sp[0].o, sp[1].o, ((jint)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK((frame[0].o)))->F_targetAir));
	LINE_NUMBER(191);
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_stats;
	clinit_mindustry_world_meta_Stat(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_Stat_targetsGround;
	((func_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_boolean])(ctx, sp[0].o, sp[1].o, ((jint)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK((frame[0].o)))->F_targetGround));
	LINE_NUMBER(192);
	if (((jint)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK((frame[0].o)))->F_ammoPerShot) == (jint(1))) goto label_8;
	}
	{
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_stats;
	clinit_mindustry_world_meta_Stat(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_Stat_ammoUse;
	jfloat temp0 = jfloat(((jint)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK((frame[0].o)))->F_ammoPerShot));
	clinit_mindustry_world_meta_StatUnit(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_StatUnit_perShot;
	((func_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_float_mindustry_world_meta_StatUnit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_float_mindustry_world_meta_StatUnit])(ctx, sp[0].o, sp[1].o, temp0, sp[2].o);
	}
label_8:;
	{
	LINE_NUMBER(193);
	if ((floatCompare(((jfloat)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK((frame[0].o)))->F_heatRequirement), (jfloat(0)), -1)) <= 0) goto label_9;
	}
	{
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_stats;
	clinit_mindustry_world_meta_Stat(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_Stat_input;
	jfloat temp0 = (jfloat)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK((frame[0].o)))->F_heatRequirement;
	clinit_mindustry_world_meta_StatUnit(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_StatUnit_heatUnits;
	((func_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_float_mindustry_world_meta_StatUnit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_float_mindustry_world_meta_StatUnit])(ctx, sp[0].o, sp[1].o, temp0, sp[2].o);
	}
label_9:;
	{
	LINE_NUMBER(194);
	if ((floatCompare(((jfloat)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK((frame[0].o)))->F_heatRequirement), (jfloat(0)), -1)) <= 0) goto label_10;
	}
	{
	if ((floatCompare(((jfloat)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK((frame[0].o)))->F_maxHeatEfficiency), (jfloat(0)), -1)) <= 0) goto label_10;
	}
	{
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_stats;
	clinit_mindustry_world_meta_Stat(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_Stat_maxEfficiency;
	jfloat temp0 = jfloat((jint((((jfloat)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK((frame[0].o)))->F_maxHeatEfficiency) * (jfloat(100.0f))))));
	clinit_mindustry_world_meta_StatUnit(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_StatUnit_percent;
	((func_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_float_mindustry_world_meta_StatUnit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_float_mindustry_world_meta_StatUnit])(ctx, sp[0].o, sp[1].o, temp0, sp[2].o);
	}
label_10:;
	LINE_NUMBER(195);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_defense_turrets_Turret_setBars(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/turrets/Turret:setBars", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(199);
	M_mindustry_world_blocks_defense_turrets_BaseTurret_setBars(ctx, (frame[0].o));
	LINE_NUMBER(201);
	if ((floatCompare(((jfloat)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK((frame[0].o)))->F_heatRequirement), (jfloat(0)), -1)) <= 0) goto label_2;
	}
	{
	LINE_NUMBER(202);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"heat"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_defense_turrets_Turret_invoke_arc_func_Func_1(ctx);
		auto proxy = (mindustry_world_blocks_defense_turrets_Turret_invoke_arc_func_Func_1 *) gcAlloc(ctx, &class_mindustry_world_blocks_defense_turrets_Turret_invoke_arc_func_Func_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	((func_mindustry_world_blocks_defense_turrets_Turret_addBar_java_lang_String_arc_func_Func) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_defense_turrets_Turret_addBar_java_lang_String_arc_func_Func])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_2:;
	LINE_NUMBER(208);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_defense_turrets_Turret_init(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/turrets/Turret:init", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(212);
	if ((floatCompare(((jfloat)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK((frame[0].o)))->F_shootY), (jfloat(-std::numeric_limits<float>::infinity())), -1)) != 0) goto label_1;
	}
	{
	((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK((frame[0].o)))->F_shootY = ((jfloat((((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_size) * (8)))) / (jfloat(2)));
	}
label_1:;
	{
	LINE_NUMBER(213);
	if ((floatCompare(((jfloat)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK((frame[0].o)))->F_elevation), (jfloat(0)), 1)) >= 0) goto label_2;
	}
	{
	((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK((frame[0].o)))->F_elevation = ((jfloat(((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_size))) / (jfloat(2)));
	}
label_2:;
	{
	LINE_NUMBER(214);
	if ((floatCompare(((jfloat)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK((frame[0].o)))->F_recoilTime), (jfloat(0)), 1)) >= 0) goto label_3;
	}
	{
	((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK((frame[0].o)))->F_recoilTime = ((jfloat)((mindustry_world_blocks_defense_turrets_ReloadTurret *) NULL_CHECK((frame[0].o)))->F_reload);
	}
label_3:;
	{
	LINE_NUMBER(215);
	if ((floatCompare(((jfloat)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK((frame[0].o)))->F_cooldownTime), (jfloat(0)), 1)) >= 0) goto label_4;
	}
	{
	((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK((frame[0].o)))->F_cooldownTime = ((jfloat)((mindustry_world_blocks_defense_turrets_ReloadTurret *) NULL_CHECK((frame[0].o)))->F_reload);
	}
label_4:;
	{
	LINE_NUMBER(216);
	if ((floatCompare(((jfloat)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK((frame[0].o)))->F_newTargetInterval), (jfloat(0)), 1)) > 0) goto label_5;
	}
	{
	((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK((frame[0].o)))->F_newTargetInterval = ((jfloat)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK((frame[0].o)))->F_targetInterval);
	}
label_5:;
	{
	LINE_NUMBER(218);
	if (((jint)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK((frame[0].o)))->F_targetGround) != 0) goto label_6;
	}
	{
	LINE_NUMBER(219);
	((mindustry_world_blocks_defense_turrets_BaseTurret *) NULL_CHECK((frame[0].o)))->F_disableOverlapCheck = (jint(1));
	}
label_6:;
	{
	LINE_NUMBER(222);
	M_mindustry_world_blocks_defense_turrets_BaseTurret_init(ctx, (frame[0].o));
	LINE_NUMBER(223);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((jfloat)((mindustry_world_blocks_defense_turrets_BaseTurret *) NULL_CHECK((frame[0].o)))->F_range), ((jfloat)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK((frame[0].o)))->F_trackingRange));
	((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK(sp[0].o))->F_trackingRange = temp0;
	LINE_NUMBER(224);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_defense_turrets_Turret_load(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/turrets/Turret:load", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(228);
	M_mindustry_world_Block_load(ctx, (frame[0].o));
	LINE_NUMBER(230);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK((frame[0].o)))->F_drawer;
	((func_mindustry_world_draw_DrawBlock_load_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_draw_DrawBlock_load_mindustry_world_Block])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(231);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_defense_turrets_Turret_drawPlanRegion_mindustry_entities_units_BuildPlan_arc_util_Eachable(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/turrets/Turret:drawPlanRegion", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(235);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK((frame[0].o)))->F_drawer;
	((func_mindustry_world_draw_DrawBlock_drawPlan_mindustry_world_Block_mindustry_entities_units_BuildPlan_arc_util_Eachable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_draw_DrawBlock_drawPlan_mindustry_world_Block_mindustry_entities_units_BuildPlan_arc_util_Eachable])(ctx, sp[0].o, (frame[0].o), (frame[1].o), (frame[2].o));
	LINE_NUMBER(236);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_blocks_defense_turrets_Turret_icons_R_Array1_arc_graphics_g2d_TextureRegion(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/turrets/Turret:icons", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(240);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK((frame[0].o)))->F_drawer;
	sp[0].o = (jobject)((func_mindustry_world_draw_DrawBlock_finalIcons_mindustry_world_Block_R_Array1_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_draw_DrawBlock_finalIcons_mindustry_world_Block_R_Array1_arc_graphics_g2d_TextureRegion])(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_defense_turrets_Turret_getRegionsToOutline_arc_struct_Seq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/turrets/Turret:getRegionsToOutline", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(245);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK((frame[0].o)))->F_drawer;
	((func_mindustry_world_draw_DrawBlock_getRegionsToOutline_mindustry_world_Block_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_draw_DrawBlock_getRegionsToOutline_mindustry_world_Block_arc_struct_Seq])(ctx, sp[0].o, (frame[0].o), (frame[1].o));
	LINE_NUMBER(246);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_defense_turrets_Turret_limitRange_mindustry_entities_bullet_BulletType_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/turrets/Turret:limitRange", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(249);
	frame[3].f = (((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[1].o)))->F_rangeChange) + ((jfloat)((mindustry_world_blocks_defense_turrets_BaseTurret *) NULL_CHECK((frame[0].o)))->F_range));
	LINE_NUMBER(251);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[1].o)))->F_lifetime = (((((frame[3].f) + (frame[2].f)) + ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[1].o)))->F_extraRangeMargin)) + (jfloat(10.0f))) / ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[1].o)))->F_speed));
	LINE_NUMBER(252);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_defense_turrets_Turret_drawPlace_int_int_int_boolean(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jbool param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/turrets/Turret:drawPlace", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(256);
	M_mindustry_world_blocks_defense_turrets_BaseTurret_drawPlace_int_int_int_boolean(ctx, (frame[0].o), (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].i));
	LINE_NUMBER(258);
	if (((jint)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK((frame[0].o)))->F_drawMinRange) == 0) goto label_2;
	}
	{
	LINE_NUMBER(259);
	jfloat temp0 = (jfloat(((frame[1].i) * (8)))) + ((jfloat)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_offset);
	jfloat temp1 = (jfloat(((frame[2].i) * (8)))) + ((jfloat)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_offset);
	jfloat temp2 = (jfloat)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK((frame[0].o)))->F_minRange;
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_placing;
	SM_mindustry_graphics_Drawf_dashCircle_float_float_float_arc_graphics_Color(ctx, temp0, temp1, temp2, sp[0].o);
	}
label_2:;
	LINE_NUMBER(261);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_defense_turrets_Turret_rotatedOutput_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/turrets/Turret:rotatedOutput", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(272);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_defense_turrets_Turret_placeEnded_mindustry_world_Tile_mindustry_gen_Unit_int_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/turrets/Turret:placeEnded", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(277);
	M_mindustry_world_Block_placeEnded_mindustry_world_Tile_mindustry_gen_Unit_int_java_lang_Object(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].i), (frame[4].o));
	LINE_NUMBER(278);
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_rotate) == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_build;
	frame[6].o = sp[0].o;
	if ((isInstance(ctx, (frame[6].o), &class_mindustry_world_blocks_defense_turrets_Turret$TurretBuild)) == 0) goto label_2;
	}
	{
	frame[5].o = (checkCast(ctx, &class_mindustry_world_blocks_defense_turrets_Turret$TurretBuild, (frame[6].o)));
	LINE_NUMBER(279);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_build;
	jfloat temp0 = (jfloat)((func_mindustry_gen_Building_rotdeg_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Building_rotdeg_R_float])(ctx, sp[1].o);
	((mindustry_world_blocks_defense_turrets_BaseTurret$BaseTurretBuild *) NULL_CHECK(sp[0].o))->F_rotation = temp0;
	}
label_2:;
	LINE_NUMBER(281);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_world_blocks_defense_turrets_Turret_lambda$setBars$0_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_R_mindustry_ui_Bar(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/turrets/Turret:lambda$setBars$0", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(203);
	clinit_mindustry_ui_Bar(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_Bar);
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_defense_turrets_Turret_invoke_arc_func_Prov_2(ctx);
		auto proxy = (mindustry_world_blocks_defense_turrets_Turret_invoke_arc_func_Prov_2 *) gcAlloc(ctx, &class_mindustry_world_blocks_defense_turrets_Turret_invoke_arc_func_Prov_2);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_defense_turrets_Turret_invoke_arc_func_Prov_3(ctx);
		auto proxy = (mindustry_world_blocks_defense_turrets_Turret_invoke_arc_func_Prov_3 *) gcAlloc(ctx, &class_mindustry_world_blocks_defense_turrets_Turret_invoke_arc_func_Prov_3);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_defense_turrets_Turret_invoke_arc_func_Floatp_1(ctx);
		auto proxy = (mindustry_world_blocks_defense_turrets_Turret_invoke_arc_func_Floatp_1 *) gcAlloc(ctx, &class_mindustry_world_blocks_defense_turrets_Turret_invoke_arc_func_Floatp_1);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	init_mindustry_ui_Bar_arc_func_Prov_arc_func_Prov_arc_func_Floatp(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_world_blocks_defense_turrets_Turret_lambda$setBars$3_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/turrets/Turret:lambda$setBars$3", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(206);
	popStackFrame(ctx);
	return (((jfloat)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[1].o)))->F_heatReq) / ((jfloat)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK((frame[0].o)))->F_heatRequirement));
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_world_blocks_defense_turrets_Turret_lambda$setBars$2_R_arc_graphics_Color(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/turrets/Turret:lambda$setBars$2", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_defense_turrets_Turret(ctx);
	{
	LINE_NUMBER(205);
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_lightOrange;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_blocks_defense_turrets_Turret_lambda$setBars$1_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_R_java_lang_CharSequence(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/turrets/Turret:lambda$setBars$1", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(204);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"bar.heatpercent"_j));
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(2)));
	jint temp0 = jint(0);
	sp[3].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (jint(((jfloat)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[1].o)))->F_heatReq))));
	ARRAY_ACCESS(jobject, sp[2].o, temp0) = sp[3].o;
	jint temp1 = jint(1);
	jfloat temp2 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, (((jfloat)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[1].o)))->F_heatReq) / ((jfloat)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK((frame[0].o)))->F_heatRequirement)), ((jfloat)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK((frame[0].o)))->F_maxHeatEfficiency));
	sp[3].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (jint((temp2 * (jfloat(100.0f))))));
	ARRAY_ACCESS(jobject, sp[2].o, temp1) = sp[3].o;
	sp[0].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_defense_turrets_Turret_lambda$new$1_mindustry_gen_Building_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/turrets/Turret:lambda$new$1", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(117);
	if (((jint)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK((frame[0].o)))->F_targetUnderBlocks) != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_underBullets) != 0) goto label_2;
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

jbool SM_mindustry_world_blocks_defense_turrets_Turret_lambda$new$0_mindustry_gen_Unit_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/turrets/Turret:lambda$new$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_defense_turrets_Turret(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(115);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_world_blocks_defense_turrets_Turret;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[12]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[13]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[14]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

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

	fields[26]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[27]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[28]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[29]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[30]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[31]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[32]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[33]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[34]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[35]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[36]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[37]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[38]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[39]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[40]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field shootEffect
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[41]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field smokeEffect
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[42]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[43]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[44]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[45]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[46]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[47]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[48]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[49]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[50]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[51]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[52]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[53]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[54]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[55]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[56]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[57]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[58]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[59]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[60]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[61]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

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
}

void *vtable_mindustry_world_blocks_defense_turrets_Turret[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_mindustry_ctype_MappableContent_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_mindustry_ctype_Content_compareTo_java_lang_Object_R_int,
	(void *) M_mindustry_world_Block_getContentType_R_mindustry_ctype_ContentType,
	(void *) M_mindustry_ctype_Content_removeContent,
	(void *) M_mindustry_world_blocks_defense_turrets_Turret_init,
	(void *) M_mindustry_world_Block_postInit,
	(void *) M_mindustry_world_Block_afterPatch,
	(void *) M_mindustry_world_blocks_defense_turrets_Turret_load,
	(void *) M_mindustry_ctype_UnlockableContent_loadIcon,
	(void *) M_mindustry_ctype_Content_hasErrored_R_boolean,
	(void *) M_mindustry_ctype_Content_isVanilla_R_boolean,
	(void *) M_mindustry_ctype_Content_isModded_R_boolean,
	(void *) M_mindustry_ctype_Content_isPatchContent_R_boolean,
	(void *) M_mindustry_ctype_Content_compareTo_mindustry_ctype_Content_R_int,
	(void *) M_mindustry_world_Block_isBanned_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_isOnPlanet_mindustry_type_Planet_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_getLogicId_R_int,
	(void *) M_mindustry_ctype_UnlockableContent_displayDescription_R_java_lang_String,
	(void *) M_mindustry_ctype_UnlockableContent_checkStats,
	(void *) M_mindustry_world_blocks_defense_turrets_Turret_setStats,
	(void *) M_mindustry_ctype_UnlockableContent_computeStats_R_mindustry_world_meta_Stats,
	(void *) M_mindustry_ctype_UnlockableContent_displayExtra_arc_scene_ui_layout_Table,
	(void *) M_mindustry_world_Block_createIcons_mindustry_graphics_MultiPacker,
	(void *) M_mindustry_ctype_UnlockableContent_makeOutline_mindustry_graphics_MultiPacker$PageType_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_boolean_arc_graphics_Color_int,
	(void *) M_mindustry_ctype_UnlockableContent_makeOutline_mindustry_graphics_MultiPacker$PageType_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_boolean_arc_graphics_Color_int_int,
	(void *) M_mindustry_ctype_UnlockableContent_makeOutline_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_java_lang_String_arc_graphics_Color_int,
	(void *) M_mindustry_ctype_UnlockableContent_makeOutline_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_java_lang_String_arc_graphics_Color,
	(void *) M_mindustry_world_Block_researchRequirements_R_Array1_mindustry_type_ItemStack,
	(void *) M_mindustry_ctype_UnlockableContent_emoji_R_java_lang_String,
	(void *) M_mindustry_ctype_UnlockableContent_emojiChar_R_int,
	(void *) M_mindustry_ctype_UnlockableContent_hasEmoji_R_boolean,
	(void *) M_mindustry_world_Block_getDependencies_arc_func_Cons,
	(void *) M_mindustry_ctype_UnlockableContent_onUnlock,
	(void *) M_mindustry_world_Block_isHidden_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_showUnlock_R_boolean,
	(void *) M_mindustry_world_Block_logicVisible_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_unlock,
	(void *) M_mindustry_ctype_UnlockableContent_quietUnlock,
	(void *) M_mindustry_ctype_UnlockableContent_unlockedNowHost_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_unlockedHost_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_unlockedNow_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_unlocked_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_clearUnlock,
	(void *) M_mindustry_ctype_UnlockableContent_locked_R_boolean,
	(void *) M_mindustry_world_Block_sense_mindustry_logic_LAccess_R_double,
	(void *) M_mindustry_world_Block_sense_mindustry_ctype_Content_R_double,
	(void *) M_mindustry_world_Block_senseObject_mindustry_logic_LAccess_R_java_lang_Object,
	(void *) M_mindustry_world_Block_drawBase_mindustry_world_Tile,
	(void *) M_mindustry_world_Block_drawBaseCached_mindustry_world_Tile,
	(void *) M_mindustry_world_Block_drawShadow_mindustry_world_Tile,
	(void *) M_mindustry_world_Block_percentSolid_int_int_R_float,
	(void *) M_mindustry_world_Block_drawEnvironmentLight_mindustry_world_Tile,
	(void *) M_mindustry_world_blocks_defense_turrets_Turret_drawPlace_int_int_int_boolean,
	(void *) M_mindustry_world_Block_drawSideRegion_arc_graphics_g2d_TextureRegion_float_float_int,
	(void *) M_mindustry_world_Block_drawPotentialLinks_int_int,
	(void *) M_mindustry_world_Block_drawPlaceText_java_lang_String_int_int_boolean_R_float,
	(void *) M_mindustry_world_Block_drawPlaceText_java_lang_String_int_int_arc_graphics_Color_boolean_R_float,
	(void *) M_mindustry_world_Block_drawOverlay_float_float_int,
	(void *) M_mindustry_world_Block_displayShadow_mindustry_world_Tile_R_boolean,
	(void *) M_mindustry_world_Block_sumAttribute_mindustry_world_meta_Attribute_int_int_R_float,
	(void *) M_mindustry_world_Block_getDisplayIcon_mindustry_world_Tile_R_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_world_Block_getDisplayName_mindustry_world_Tile_R_java_lang_String,
	(void *) M_mindustry_world_Block_minimapColor_mindustry_world_Tile_R_int,
	(void *) M_mindustry_world_Block_getColor_mindustry_world_Tile_R_arc_graphics_Color,
	(void *) M_mindustry_world_blocks_defense_turrets_Turret_outputsItems_R_boolean,
	(void *) M_mindustry_world_Block_canPlaceOn_mindustry_world_Tile_mindustry_game_Team_int_R_boolean,
	(void *) M_mindustry_world_Block_canBreak_mindustry_world_Tile_R_boolean,
	(void *) M_mindustry_world_blocks_defense_turrets_Turret_rotatedOutput_int_int_R_boolean,
	(void *) M_mindustry_world_Block_rotatedOutput_int_int_mindustry_world_Tile_R_boolean,
	(void *) M_mindustry_world_Block_synthetic_R_boolean,
	(void *) M_mindustry_world_Block_checkForceDark_mindustry_world_Tile_R_boolean,
	(void *) M_mindustry_world_Block_isDarkened_mindustry_world_Tile_R_boolean,
	(void *) M_mindustry_world_Block_addBar_java_lang_String_arc_func_Func,
	(void *) M_mindustry_world_Block_removeBar_java_lang_String,
	(void *) M_mindustry_world_Block_listBars_R_java_lang_Iterable,
	(void *) M_mindustry_world_Block_addLiquidBar_mindustry_type_Liquid,
	(void *) M_mindustry_world_Block_addLiquidBar_arc_func_Func,
	(void *) M_mindustry_world_blocks_defense_turrets_Turret_setBars,
	(void *) M_mindustry_world_Block_consumesItem_mindustry_type_Item_R_boolean,
	(void *) M_mindustry_world_Block_consumesLiquid_mindustry_type_Liquid_R_boolean,
	(void *) M_mindustry_world_Block_canReplace_mindustry_world_Block_R_boolean,
	(void *) M_mindustry_world_Block_getReplacement_mindustry_entities_units_BuildPlan_arc_struct_Seq_R_mindustry_world_Block,
	(void *) M_mindustry_world_Block_changePlacementPath_arc_struct_Seq_int_boolean,
	(void *) M_mindustry_world_Block_changePlacementPath_arc_struct_Seq_int,
	(void *) M_mindustry_world_Block_handlePlacementLine_arc_struct_Seq,
	(void *) M_mindustry_world_Block_configSenseable_R_boolean,
	(void *) M_mindustry_world_Block_nextConfig_R_java_lang_Object,
	(void *) M_mindustry_world_Block_onNewPlan_mindustry_entities_units_BuildPlan,
	(void *) M_mindustry_world_Block_drawPlan_mindustry_entities_units_BuildPlan_arc_util_Eachable_boolean,
	(void *) M_mindustry_world_Block_drawPlan_mindustry_entities_units_BuildPlan_arc_util_Eachable_boolean_float,
	(void *) M_mindustry_world_Block_drawOtherPlayerPlan_mindustry_entities_units_BuildPlan_arc_util_Eachable_float,
	(void *) M_mindustry_world_blocks_defense_turrets_Turret_drawPlanRegion_mindustry_entities_units_BuildPlan_arc_util_Eachable,
	(void *) M_mindustry_world_Block_drawDefaultPlanRegion_mindustry_entities_units_BuildPlan_arc_util_Eachable,
	(void *) M_mindustry_world_Block_getPlanRegion_mindustry_entities_units_BuildPlan_arc_util_Eachable_R_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_world_Block_drawPlanConfig_mindustry_entities_units_BuildPlan_arc_util_Eachable,
	(void *) M_mindustry_world_Block_drawPlanConfigCenter_mindustry_entities_units_BuildPlan_java_lang_Object_java_lang_String_boolean,
	(void *) M_mindustry_world_Block_drawPlanConfigCenter_mindustry_entities_units_BuildPlan_java_lang_Object_java_lang_String,
	(void *) M_mindustry_world_Block_drawPlanConfigTop_mindustry_entities_units_BuildPlan_arc_util_Eachable,
	(void *) M_mindustry_world_Block_planConfigClipSize_R_float,
	(void *) M_mindustry_world_Block_pointConfig_java_lang_Object_arc_func_Cons_R_java_lang_Object,
	(void *) M_mindustry_world_Block_configClear_arc_func_Cons,
	(void *) M_mindustry_world_Block_config_java_lang_Class_arc_func_Cons2,
	(void *) M_mindustry_world_Block_isAccessible_R_boolean,
	(void *) M_mindustry_world_Block_nearbySide_int_int_int_int_arc_math_geom_Point2,
	(void *) M_mindustry_world_Block_getEdges_R_Array1_arc_math_geom_Point2,
	(void *) M_mindustry_world_Block_getInsideEdges_R_Array1_arc_math_geom_Point2,
	(void *) M_mindustry_world_Block_iterateTaken_int_int_arc_func_Intc2,
	(void *) M_mindustry_world_Block_makeIconRegions_R_Array1_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_world_blocks_defense_turrets_Turret_icons_R_Array1_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_world_blocks_defense_turrets_Turret_getRegionsToOutline_arc_struct_Seq,
	(void *) M_mindustry_world_Block_getGeneratedIcons_R_Array1_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_world_Block_resetGeneratedIcons,
	(void *) M_mindustry_world_Block_variantRegions_R_Array1_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_world_Block_hasBuilding_R_boolean,
	(void *) M_mindustry_world_Block_newBuilding_R_mindustry_gen_Building,
	(void *) M_mindustry_world_Block_updateClipRadius_float,
	(void *) M_mindustry_world_Block_bounds_int_int_arc_math_geom_Rect_R_arc_math_geom_Rect,
	(void *) M_mindustry_world_Block_isMultiblock_R_boolean,
	(void *) M_mindustry_world_Block_isVisible_R_boolean,
	(void *) M_mindustry_world_Block_isPlaceable_R_boolean,
	(void *) M_mindustry_world_Block_isOverPlacementLimit_mindustry_game_Team_R_boolean,
	(void *) M_mindustry_world_Block_supportsEnv_int_R_boolean,
	(void *) M_mindustry_world_Block_buildEditorConfig_arc_scene_ui_layout_Table,
	(void *) M_mindustry_world_Block_onPicked_mindustry_world_Tile,
	(void *) M_mindustry_world_Block_getConfig_mindustry_world_Tile_R_java_lang_Object,
	(void *) M_mindustry_world_Block_blockChanged_mindustry_world_Tile,
	(void *) M_mindustry_world_Block_placeBegan_mindustry_world_Tile_mindustry_world_Block,
	(void *) M_mindustry_world_Block_placeBegan_mindustry_world_Tile_mindustry_world_Block_mindustry_gen_Unit,
	(void *) M_mindustry_world_blocks_defense_turrets_Turret_placeEnded_mindustry_world_Tile_mindustry_gen_Unit_int_java_lang_Object,
	(void *) M_mindustry_world_Block_beforePlaceBegan_mindustry_world_Tile_mindustry_world_Block,
	(void *) M_mindustry_world_Block_editorPicked_mindustry_world_Tile,
	(void *) M_mindustry_world_Block_isFloor_R_boolean,
	(void *) M_mindustry_world_Block_isOverlay_R_boolean,
	(void *) M_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor,
	(void *) M_mindustry_world_Block_isAir_R_boolean,
	(void *) M_mindustry_world_Block_canBeBuilt_R_boolean,
	(void *) M_mindustry_world_Block_environmentBuildable_R_boolean,
	(void *) M_mindustry_world_Block_isStatic_R_boolean,
	(void *) M_mindustry_world_Block_findConsumer_arc_func_Boolf_R_mindustry_world_consumers_Consume,
	(void *) M_mindustry_world_Block_hasConsumer_mindustry_world_consumers_Consume_R_boolean,
	(void *) M_mindustry_world_Block_removeConsumer_mindustry_world_consumers_Consume,
	(void *) M_mindustry_world_Block_removeConsumers_arc_func_Boolf,
	(void *) M_mindustry_world_Block_consumeLiquid_mindustry_type_Liquid_float_R_mindustry_world_consumers_ConsumeLiquid,
	(void *) M_mindustry_world_Block_consumeLiquids_Array1_mindustry_type_LiquidStack_R_mindustry_world_consumers_ConsumeLiquids,
	(void *) M_mindustry_world_Block_consumePower_float_R_mindustry_world_consumers_ConsumePower,
	(void *) M_mindustry_world_Block_consumePowerCond_float_arc_func_Boolf_R_mindustry_world_consumers_ConsumePower,
	(void *) M_mindustry_world_Block_consumePowerDynamic_arc_func_Floatf_R_mindustry_world_consumers_ConsumePower,
	(void *) M_mindustry_world_Block_consumePowerDynamic_float_arc_func_Floatf_R_mindustry_world_consumers_ConsumePower,
	(void *) M_mindustry_world_Block_consumePowerBuffered_float_R_mindustry_world_consumers_ConsumePower,
	(void *) M_mindustry_world_Block_consumeItem_mindustry_type_Item_R_mindustry_world_consumers_ConsumeItems,
	(void *) M_mindustry_world_Block_consumeItem_mindustry_type_Item_int_R_mindustry_world_consumers_ConsumeItems,
	(void *) M_mindustry_world_Block_consumeItems_Array1_mindustry_type_ItemStack_R_mindustry_world_consumers_ConsumeItems,
	(void *) M_mindustry_world_Block_consumeCoolant_float_R_mindustry_world_consumers_ConsumeCoolant,
	(void *) M_mindustry_world_Block_consumeCoolant_float_boolean_boolean_R_mindustry_world_consumers_ConsumeCoolant,
	(void *) M_mindustry_world_Block_consume_mindustry_world_consumers_Consume_R_mindustry_world_consumers_Consume,
	(void *) M_mindustry_world_Block_setupRequirements_mindustry_type_Category_Array1_mindustry_type_ItemStack,
	(void *) M_mindustry_world_Block_setupRequirements_mindustry_type_Category_mindustry_world_meta_BuildVisibility_Array1_mindustry_type_ItemStack,
	(void *) M_mindustry_world_Block_requirements_mindustry_type_Category_Array1_mindustry_type_ItemStack_boolean,
	(void *) M_mindustry_world_Block_requirements_mindustry_type_Category_Array1_mindustry_type_ItemStack,
	(void *) M_mindustry_world_Block_requirements_mindustry_type_Category_mindustry_world_meta_BuildVisibility_Array1_mindustry_type_ItemStack,
	(void *) M_mindustry_world_Block_initBuilding,
	(void *) M_mindustry_world_blocks_defense_turrets_BaseTurret_reinitializeConsumers,
	(void *) M_mindustry_world_Block_checkContentArrayCapacity_int_int,
	(void *) M_mindustry_world_Block_planRotation_int_R_int,
	(void *) M_mindustry_world_Block_flipRotation_mindustry_entities_units_BuildPlan_boolean,
	(void *) M_mindustry_world_Block_getPlanConfigs_arc_struct_Seq,
	(void *) M_mindustry_world_Block_lambda$init$3_java_lang_Class_arc_func_Cons2,
	(void *) M_mindustry_world_Block_lambda$initBuilding$1_java_lang_reflect_Constructor_R_mindustry_gen_Building,
	(void *) M_mindustry_world_Block_lambda$setBars$5_mindustry_gen_Building_R_mindustry_ui_Bar,
	(void *) M_mindustry_world_Block_lambda$setBars$8_mindustry_gen_Building_R_float,
	(void *) M_mindustry_world_Block_lambda$setBars$1_boolean_float_mindustry_gen_Building_R_mindustry_ui_Bar,
	(void *) M_mindustry_world_Block_lambda$setBars$4_mindustry_gen_Building_R_float,
	(void *) M_mindustry_world_Block_lambda$addLiquidBar$3_arc_func_Func_mindustry_gen_Building_R_mindustry_ui_Bar,
	(void *) M_mindustry_world_Block_lambda$addLiquidBar$6_arc_func_Func_mindustry_gen_Building_R_float,
	(void *) M_mindustry_world_Block_lambda$addLiquidBar$0_mindustry_type_Liquid_mindustry_gen_Building_R_mindustry_ui_Bar,
	(void *) M_mindustry_world_Block_lambda$addLiquidBar$2_mindustry_gen_Building_mindustry_type_Liquid_R_float,
	(void *) M_mindustry_world_Block_lambda$sumAttribute$0_mindustry_world_meta_Attribute_mindustry_world_Tile_R_float,
	(void *) M_mindustry_world_Block_lambda$drawPotentialLinks$1_int_int_mindustry_gen_Building,
	(void *) M_mindustry_world_Block_lambda$drawPotentialLinks$0_int_int_mindustry_gen_Building,
	(void *) M_mindustry_world_blocks_defense_turrets_BaseTurret_checkInitCoolant,
	(void *) M_mindustry_world_blocks_defense_turrets_BaseTurret_lambda$setBars$0_mindustry_world_blocks_defense_turrets_BaseTurret$BaseTurretBuild_R_mindustry_ui_Bar,
	(void *) M_mindustry_world_blocks_defense_turrets_BaseTurret_lambda$setBars$3_mindustry_world_blocks_defense_turrets_BaseTurret$BaseTurretBuild_R_float,
	(void *) M_mindustry_world_blocks_defense_turrets_Turret_limitRange_mindustry_entities_bullet_BulletType_float,
	(void *) M_mindustry_world_blocks_defense_turrets_Turret_lambda$setBars$0_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_R_mindustry_ui_Bar,
	(void *) M_mindustry_world_blocks_defense_turrets_Turret_lambda$setBars$3_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_R_float,
	(void *) M_mindustry_world_blocks_defense_turrets_Turret_lambda$setBars$1_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_R_java_lang_CharSequence,
	(void *) M_mindustry_world_blocks_defense_turrets_Turret_lambda$new$1_mindustry_gen_Building_R_boolean,
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
	{ "compareTo", "(Ljava/lang/Object;)I" },
	{ "getContentType", "()Lmindustry/ctype/ContentType;" },
	{ "removeContent", "()V" },
	{ "init", "()V" },
	{ "postInit", "()V" },
	{ "afterPatch", "()V" },
	{ "load", "()V" },
	{ "loadIcon", "()V" },
	{ "hasErrored", "()Z" },
	{ "isVanilla", "()Z" },
	{ "isModded", "()Z" },
	{ "isPatchContent", "()Z" },
	{ "compareTo", "(Lmindustry/ctype/Content;)I" },
	{ "isBanned", "()Z" },
	{ "isOnPlanet", "(Lmindustry/type/Planet;)Z" },
	{ "getLogicId", "()I" },
	{ "displayDescription", "()Ljava/lang/String;" },
	{ "checkStats", "()V" },
	{ "setStats", "()V" },
	{ "computeStats", "()Lmindustry/world/meta/Stats;" },
	{ "displayExtra", "(Larc/scene/ui/layout/Table;)V" },
	{ "createIcons", "(Lmindustry/graphics/MultiPacker;)V" },
	{ "makeOutline", "(Lmindustry/graphics/MultiPacker$PageType;Lmindustry/graphics/MultiPacker;Larc/graphics/g2d/TextureRegion;ZLarc/graphics/Color;I)V" },
	{ "makeOutline", "(Lmindustry/graphics/MultiPacker$PageType;Lmindustry/graphics/MultiPacker;Larc/graphics/g2d/TextureRegion;ZLarc/graphics/Color;II)V" },
	{ "makeOutline", "(Lmindustry/graphics/MultiPacker;Larc/graphics/g2d/TextureRegion;Ljava/lang/String;Larc/graphics/Color;I)V" },
	{ "makeOutline", "(Lmindustry/graphics/MultiPacker;Larc/graphics/g2d/TextureRegion;Ljava/lang/String;Larc/graphics/Color;)V" },
	{ "researchRequirements", "()[Lmindustry/type/ItemStack;" },
	{ "emoji", "()Ljava/lang/String;" },
	{ "emojiChar", "()I" },
	{ "hasEmoji", "()Z" },
	{ "getDependencies", "(Larc/func/Cons;)V" },
	{ "onUnlock", "()V" },
	{ "isHidden", "()Z" },
	{ "showUnlock", "()Z" },
	{ "logicVisible", "()Z" },
	{ "unlock", "()V" },
	{ "quietUnlock", "()V" },
	{ "unlockedNowHost", "()Z" },
	{ "unlockedHost", "()Z" },
	{ "unlockedNow", "()Z" },
	{ "unlocked", "()Z" },
	{ "clearUnlock", "()V" },
	{ "locked", "()Z" },
	{ "sense", "(Lmindustry/logic/LAccess;)D" },
	{ "sense", "(Lmindustry/ctype/Content;)D" },
	{ "senseObject", "(Lmindustry/logic/LAccess;)Ljava/lang/Object;" },
	{ "drawBase", "(Lmindustry/world/Tile;)V" },
	{ "drawBaseCached", "(Lmindustry/world/Tile;)V" },
	{ "drawShadow", "(Lmindustry/world/Tile;)V" },
	{ "percentSolid", "(II)F" },
	{ "drawEnvironmentLight", "(Lmindustry/world/Tile;)V" },
	{ "drawPlace", "(IIIZ)V" },
	{ "drawSideRegion", "(Larc/graphics/g2d/TextureRegion;FFI)V" },
	{ "drawPotentialLinks", "(II)V" },
	{ "drawPlaceText", "(Ljava/lang/String;IIZ)F" },
	{ "drawPlaceText", "(Ljava/lang/String;IILarc/graphics/Color;Z)F" },
	{ "drawOverlay", "(FFI)V" },
	{ "displayShadow", "(Lmindustry/world/Tile;)Z" },
	{ "sumAttribute", "(Lmindustry/world/meta/Attribute;II)F" },
	{ "getDisplayIcon", "(Lmindustry/world/Tile;)Larc/graphics/g2d/TextureRegion;" },
	{ "getDisplayName", "(Lmindustry/world/Tile;)Ljava/lang/String;" },
	{ "minimapColor", "(Lmindustry/world/Tile;)I" },
	{ "getColor", "(Lmindustry/world/Tile;)Larc/graphics/Color;" },
	{ "outputsItems", "()Z" },
	{ "canPlaceOn", "(Lmindustry/world/Tile;Lmindustry/game/Team;I)Z" },
	{ "canBreak", "(Lmindustry/world/Tile;)Z" },
	{ "rotatedOutput", "(II)Z" },
	{ "rotatedOutput", "(IILmindustry/world/Tile;)Z" },
	{ "synthetic", "()Z" },
	{ "checkForceDark", "(Lmindustry/world/Tile;)Z" },
	{ "isDarkened", "(Lmindustry/world/Tile;)Z" },
	{ "addBar", "(Ljava/lang/String;Larc/func/Func;)V" },
	{ "removeBar", "(Ljava/lang/String;)V" },
	{ "listBars", "()Ljava/lang/Iterable;" },
	{ "addLiquidBar", "(Lmindustry/type/Liquid;)V" },
	{ "addLiquidBar", "(Larc/func/Func;)V" },
	{ "setBars", "()V" },
	{ "consumesItem", "(Lmindustry/type/Item;)Z" },
	{ "consumesLiquid", "(Lmindustry/type/Liquid;)Z" },
	{ "canReplace", "(Lmindustry/world/Block;)Z" },
	{ "getReplacement", "(Lmindustry/entities/units/BuildPlan;Larc/struct/Seq;)Lmindustry/world/Block;" },
	{ "changePlacementPath", "(Larc/struct/Seq;IZ)V" },
	{ "changePlacementPath", "(Larc/struct/Seq;I)V" },
	{ "handlePlacementLine", "(Larc/struct/Seq;)V" },
	{ "configSenseable", "()Z" },
	{ "nextConfig", "()Ljava/lang/Object;" },
	{ "onNewPlan", "(Lmindustry/entities/units/BuildPlan;)V" },
	{ "drawPlan", "(Lmindustry/entities/units/BuildPlan;Larc/util/Eachable;Z)V" },
	{ "drawPlan", "(Lmindustry/entities/units/BuildPlan;Larc/util/Eachable;ZF)V" },
	{ "drawOtherPlayerPlan", "(Lmindustry/entities/units/BuildPlan;Larc/util/Eachable;F)V" },
	{ "drawPlanRegion", "(Lmindustry/entities/units/BuildPlan;Larc/util/Eachable;)V" },
	{ "drawDefaultPlanRegion", "(Lmindustry/entities/units/BuildPlan;Larc/util/Eachable;)V" },
	{ "getPlanRegion", "(Lmindustry/entities/units/BuildPlan;Larc/util/Eachable;)Larc/graphics/g2d/TextureRegion;" },
	{ "drawPlanConfig", "(Lmindustry/entities/units/BuildPlan;Larc/util/Eachable;)V" },
	{ "drawPlanConfigCenter", "(Lmindustry/entities/units/BuildPlan;Ljava/lang/Object;Ljava/lang/String;Z)V" },
	{ "drawPlanConfigCenter", "(Lmindustry/entities/units/BuildPlan;Ljava/lang/Object;Ljava/lang/String;)V" },
	{ "drawPlanConfigTop", "(Lmindustry/entities/units/BuildPlan;Larc/util/Eachable;)V" },
	{ "planConfigClipSize", "()F" },
	{ "pointConfig", "(Ljava/lang/Object;Larc/func/Cons;)Ljava/lang/Object;" },
	{ "configClear", "(Larc/func/Cons;)V" },
	{ "config", "(Ljava/lang/Class;Larc/func/Cons2;)V" },
	{ "isAccessible", "()Z" },
	{ "nearbySide", "(IIIILarc/math/geom/Point2;)V" },
	{ "getEdges", "()[Larc/math/geom/Point2;" },
	{ "getInsideEdges", "()[Larc/math/geom/Point2;" },
	{ "iterateTaken", "(IILarc/func/Intc2;)V" },
	{ "makeIconRegions", "()[Larc/graphics/g2d/TextureRegion;" },
	{ "icons", "()[Larc/graphics/g2d/TextureRegion;" },
	{ "getRegionsToOutline", "(Larc/struct/Seq;)V" },
	{ "getGeneratedIcons", "()[Larc/graphics/g2d/TextureRegion;" },
	{ "resetGeneratedIcons", "()V" },
	{ "variantRegions", "()[Larc/graphics/g2d/TextureRegion;" },
	{ "hasBuilding", "()Z" },
	{ "newBuilding", "()Lmindustry/gen/Building;" },
	{ "updateClipRadius", "(F)V" },
	{ "bounds", "(IILarc/math/geom/Rect;)Larc/math/geom/Rect;" },
	{ "isMultiblock", "()Z" },
	{ "isVisible", "()Z" },
	{ "isPlaceable", "()Z" },
	{ "isOverPlacementLimit", "(Lmindustry/game/Team;)Z" },
	{ "supportsEnv", "(I)Z" },
	{ "buildEditorConfig", "(Larc/scene/ui/layout/Table;)V" },
	{ "onPicked", "(Lmindustry/world/Tile;)V" },
	{ "getConfig", "(Lmindustry/world/Tile;)Ljava/lang/Object;" },
	{ "blockChanged", "(Lmindustry/world/Tile;)V" },
	{ "placeBegan", "(Lmindustry/world/Tile;Lmindustry/world/Block;)V" },
	{ "placeBegan", "(Lmindustry/world/Tile;Lmindustry/world/Block;Lmindustry/gen/Unit;)V" },
	{ "placeEnded", "(Lmindustry/world/Tile;Lmindustry/gen/Unit;ILjava/lang/Object;)V" },
	{ "beforePlaceBegan", "(Lmindustry/world/Tile;Lmindustry/world/Block;)V" },
	{ "editorPicked", "(Lmindustry/world/Tile;)V" },
	{ "isFloor", "()Z" },
	{ "isOverlay", "()Z" },
	{ "asFloor", "()Lmindustry/world/blocks/environment/Floor;" },
	{ "isAir", "()Z" },
	{ "canBeBuilt", "()Z" },
	{ "environmentBuildable", "()Z" },
	{ "isStatic", "()Z" },
	{ "findConsumer", "(Larc/func/Boolf;)Lmindustry/world/consumers/Consume;" },
	{ "hasConsumer", "(Lmindustry/world/consumers/Consume;)Z" },
	{ "removeConsumer", "(Lmindustry/world/consumers/Consume;)V" },
	{ "removeConsumers", "(Larc/func/Boolf;)V" },
	{ "consumeLiquid", "(Lmindustry/type/Liquid;F)Lmindustry/world/consumers/ConsumeLiquid;" },
	{ "consumeLiquids", "([Lmindustry/type/LiquidStack;)Lmindustry/world/consumers/ConsumeLiquids;" },
	{ "consumePower", "(F)Lmindustry/world/consumers/ConsumePower;" },
	{ "consumePowerCond", "(FLarc/func/Boolf;)Lmindustry/world/consumers/ConsumePower;" },
	{ "consumePowerDynamic", "(Larc/func/Floatf;)Lmindustry/world/consumers/ConsumePower;" },
	{ "consumePowerDynamic", "(FLarc/func/Floatf;)Lmindustry/world/consumers/ConsumePower;" },
	{ "consumePowerBuffered", "(F)Lmindustry/world/consumers/ConsumePower;" },
	{ "consumeItem", "(Lmindustry/type/Item;)Lmindustry/world/consumers/ConsumeItems;" },
	{ "consumeItem", "(Lmindustry/type/Item;I)Lmindustry/world/consumers/ConsumeItems;" },
	{ "consumeItems", "([Lmindustry/type/ItemStack;)Lmindustry/world/consumers/ConsumeItems;" },
	{ "consumeCoolant", "(F)Lmindustry/world/consumers/ConsumeCoolant;" },
	{ "consumeCoolant", "(FZZ)Lmindustry/world/consumers/ConsumeCoolant;" },
	{ "consume", "(Lmindustry/world/consumers/Consume;)Lmindustry/world/consumers/Consume;" },
	{ "setupRequirements", "(Lmindustry/type/Category;[Lmindustry/type/ItemStack;)V" },
	{ "setupRequirements", "(Lmindustry/type/Category;Lmindustry/world/meta/BuildVisibility;[Lmindustry/type/ItemStack;)V" },
	{ "requirements", "(Lmindustry/type/Category;[Lmindustry/type/ItemStack;Z)V" },
	{ "requirements", "(Lmindustry/type/Category;[Lmindustry/type/ItemStack;)V" },
	{ "requirements", "(Lmindustry/type/Category;Lmindustry/world/meta/BuildVisibility;[Lmindustry/type/ItemStack;)V" },
	{ "initBuilding", "()V" },
	{ "reinitializeConsumers", "()V" },
	{ "checkContentArrayCapacity", "(II)V" },
	{ "planRotation", "(I)I" },
	{ "flipRotation", "(Lmindustry/entities/units/BuildPlan;Z)V" },
	{ "getPlanConfigs", "(Larc/struct/Seq;)V" },
	{ "lambda$init$3", "(Ljava/lang/Class;Larc/func/Cons2;)V" },
	{ "lambda$initBuilding$1", "(Ljava/lang/reflect/Constructor;)Lmindustry/gen/Building;" },
	{ "lambda$setBars$5", "(Lmindustry/gen/Building;)Lmindustry/ui/Bar;" },
	{ "lambda$setBars$8", "(Lmindustry/gen/Building;)F" },
	{ "lambda$setBars$1", "(ZFLmindustry/gen/Building;)Lmindustry/ui/Bar;" },
	{ "lambda$setBars$4", "(Lmindustry/gen/Building;)F" },
	{ "lambda$addLiquidBar$3", "(Larc/func/Func;Lmindustry/gen/Building;)Lmindustry/ui/Bar;" },
	{ "lambda$addLiquidBar$6", "(Larc/func/Func;Lmindustry/gen/Building;)F" },
	{ "lambda$addLiquidBar$0", "(Lmindustry/type/Liquid;Lmindustry/gen/Building;)Lmindustry/ui/Bar;" },
	{ "lambda$addLiquidBar$2", "(Lmindustry/gen/Building;Lmindustry/type/Liquid;)F" },
	{ "lambda$sumAttribute$0", "(Lmindustry/world/meta/Attribute;Lmindustry/world/Tile;)F" },
	{ "lambda$drawPotentialLinks$1", "(IILmindustry/gen/Building;)V" },
	{ "lambda$drawPotentialLinks$0", "(IILmindustry/gen/Building;)V" },
	{ "checkInitCoolant", "()V" },
	{ "lambda$setBars$0", "(Lmindustry/world/blocks/defense/turrets/BaseTurret$BaseTurretBuild;)Lmindustry/ui/Bar;" },
	{ "lambda$setBars$3", "(Lmindustry/world/blocks/defense/turrets/BaseTurret$BaseTurretBuild;)F" },
	{ "limitRange", "(Lmindustry/entities/bullet/BulletType;F)V" },
	{ "lambda$setBars$0", "(Lmindustry/world/blocks/defense/turrets/Turret$TurretBuild;)Lmindustry/ui/Bar;" },
	{ "lambda$setBars$3", "(Lmindustry/world/blocks/defense/turrets/Turret$TurretBuild;)F" },
	{ "lambda$setBars$1", "(Lmindustry/world/blocks/defense/turrets/Turret$TurretBuild;)Ljava/lang/CharSequence;" },
	{ "lambda$new$1", "(Lmindustry/gen/Building;)Z" },
};

static jclass innerClasses[] {
	&class_mindustry_world_blocks_defense_turrets_Turret$TurretBuild,
	&class_mindustry_world_blocks_defense_turrets_Turret$BulletEntry,
	&class_mindustry_world_blocks_defense_turrets_Turret$AmmoEntry,
};

static FieldMetadata fields[] {
	{ "logicControlCooldown", &class_float, (intptr_t) &SF_mindustry_world_blocks_defense_turrets_Turret_logicControlCooldown, "F", 25 },
	{ "timerTarget", &class_int, offsetof(mindustry_world_blocks_defense_turrets_Turret, F_timerTarget), "I", 17 },
	{ "targetInterval", &class_float, offsetof(mindustry_world_blocks_defense_turrets_Turret, F_targetInterval), "F", 1 },
	{ "newTargetInterval", &class_float, offsetof(mindustry_world_blocks_defense_turrets_Turret, F_newTargetInterval), "F", 1 },
	{ "maxAmmo", &class_int, offsetof(mindustry_world_blocks_defense_turrets_Turret, F_maxAmmo), "I", 1 },
	{ "ammoPerShot", &class_int, offsetof(mindustry_world_blocks_defense_turrets_Turret, F_ammoPerShot), "I", 1 },
	{ "consumeAmmoOnce", &class_boolean, offsetof(mindustry_world_blocks_defense_turrets_Turret, F_consumeAmmoOnce), "Z", 1 },
	{ "heatRequirement", &class_float, offsetof(mindustry_world_blocks_defense_turrets_Turret, F_heatRequirement), "F", 1 },
	{ "maxHeatEfficiency", &class_float, offsetof(mindustry_world_blocks_defense_turrets_Turret, F_maxHeatEfficiency), "F", 1 },
	{ "inaccuracy", &class_float, offsetof(mindustry_world_blocks_defense_turrets_Turret, F_inaccuracy), "F", 1 },
	{ "velocityRnd", &class_float, offsetof(mindustry_world_blocks_defense_turrets_Turret, F_velocityRnd), "F", 1 },
	{ "extraVelocity", &class_float, offsetof(mindustry_world_blocks_defense_turrets_Turret, F_extraVelocity), "F", 1 },
	{ "lifeRnd", &class_float, offsetof(mindustry_world_blocks_defense_turrets_Turret, F_lifeRnd), "F", 1 },
	{ "extraLife", &class_float, offsetof(mindustry_world_blocks_defense_turrets_Turret, F_extraLife), "F", 1 },
	{ "scaleLifetimeOffset", &class_float, offsetof(mindustry_world_blocks_defense_turrets_Turret, F_scaleLifetimeOffset), "F", 1 },
	{ "shootCone", &class_float, offsetof(mindustry_world_blocks_defense_turrets_Turret, F_shootCone), "F", 1 },
	{ "shootX", &class_float, offsetof(mindustry_world_blocks_defense_turrets_Turret, F_shootX), "F", 1 },
	{ "shootY", &class_float, offsetof(mindustry_world_blocks_defense_turrets_Turret, F_shootY), "F", 1 },
	{ "xRand", &class_float, offsetof(mindustry_world_blocks_defense_turrets_Turret, F_xRand), "F", 1 },
	{ "drawMinRange", &class_boolean, offsetof(mindustry_world_blocks_defense_turrets_Turret, F_drawMinRange), "Z", 1 },
	{ "trackingRange", &class_float, offsetof(mindustry_world_blocks_defense_turrets_Turret, F_trackingRange), "F", 1 },
	{ "minRange", &class_float, offsetof(mindustry_world_blocks_defense_turrets_Turret, F_minRange), "F", 1 },
	{ "minWarmup", &class_float, offsetof(mindustry_world_blocks_defense_turrets_Turret, F_minWarmup), "F", 1 },
	{ "accurateDelay", &class_boolean, offsetof(mindustry_world_blocks_defense_turrets_Turret, F_accurateDelay), "Z", 1 },
	{ "moveWhileCharging", &class_boolean, offsetof(mindustry_world_blocks_defense_turrets_Turret, F_moveWhileCharging), "Z", 1 },
	{ "reloadWhileCharging", &class_boolean, offsetof(mindustry_world_blocks_defense_turrets_Turret, F_reloadWhileCharging), "Z", 1 },
	{ "warmupMaintainTime", &class_float, offsetof(mindustry_world_blocks_defense_turrets_Turret, F_warmupMaintainTime), "F", 1 },
	{ "shoot", &class_mindustry_entities_pattern_ShootPattern, offsetof(mindustry_world_blocks_defense_turrets_Turret, F_shoot), "Lmindustry/entities/pattern/ShootPattern;", 1 },
	{ "targetAir", &class_boolean, offsetof(mindustry_world_blocks_defense_turrets_Turret, F_targetAir), "Z", 1 },
	{ "targetGround", &class_boolean, offsetof(mindustry_world_blocks_defense_turrets_Turret, F_targetGround), "Z", 1 },
	{ "targetBlocks", &class_boolean, offsetof(mindustry_world_blocks_defense_turrets_Turret, F_targetBlocks), "Z", 1 },
	{ "targetHealing", &class_boolean, offsetof(mindustry_world_blocks_defense_turrets_Turret, F_targetHealing), "Z", 1 },
	{ "playerControllable", &class_boolean, offsetof(mindustry_world_blocks_defense_turrets_Turret, F_playerControllable), "Z", 1 },
	{ "displayAmmoMultiplier", &class_boolean, offsetof(mindustry_world_blocks_defense_turrets_Turret, F_displayAmmoMultiplier), "Z", 1 },
	{ "targetUnderBlocks", &class_boolean, offsetof(mindustry_world_blocks_defense_turrets_Turret, F_targetUnderBlocks), "Z", 1 },
	{ "alwaysShooting", &class_boolean, offsetof(mindustry_world_blocks_defense_turrets_Turret, F_alwaysShooting), "Z", 1 },
	{ "predictTarget", &class_boolean, offsetof(mindustry_world_blocks_defense_turrets_Turret, F_predictTarget), "Z", 1 },
	{ "unitSort", &class_mindustry_entities_Units$Sortf, offsetof(mindustry_world_blocks_defense_turrets_Turret, F_unitSort), "Lmindustry/entities/Units$Sortf;", 1 },
	{ "unitFilter", &class_arc_func_Boolf, offsetof(mindustry_world_blocks_defense_turrets_Turret, F_unitFilter), "Larc/func/Boolf;", 1 },
	{ "buildingFilter", &class_arc_func_Boolf, offsetof(mindustry_world_blocks_defense_turrets_Turret, F_buildingFilter), "Larc/func/Boolf;", 1 },
	{ "heatColor", &class_arc_graphics_Color, offsetof(mindustry_world_blocks_defense_turrets_Turret, F_heatColor), "Larc/graphics/Color;", 1 },
	{ "shootEffect", &class_mindustry_entities_Effect, offsetof(mindustry_world_blocks_defense_turrets_Turret, F_shootEffect), "Lmindustry/entities/Effect;", 1 },
	{ "smokeEffect", &class_mindustry_entities_Effect, offsetof(mindustry_world_blocks_defense_turrets_Turret, F_smokeEffect), "Lmindustry/entities/Effect;", 1 },
	{ "ammoUseEffect", &class_mindustry_entities_Effect, offsetof(mindustry_world_blocks_defense_turrets_Turret, F_ammoUseEffect), "Lmindustry/entities/Effect;", 1 },
	{ "shootSound", &class_arc_audio_Sound, offsetof(mindustry_world_blocks_defense_turrets_Turret, F_shootSound), "Larc/audio/Sound;", 1 },
	{ "shootSoundVolume", &class_float, offsetof(mindustry_world_blocks_defense_turrets_Turret, F_shootSoundVolume), "F", 1 },
	{ "chargeSound", &class_arc_audio_Sound, offsetof(mindustry_world_blocks_defense_turrets_Turret, F_chargeSound), "Larc/audio/Sound;", 1 },
	{ "loopSound", &class_arc_audio_Sound, offsetof(mindustry_world_blocks_defense_turrets_Turret, F_loopSound), "Larc/audio/Sound;", 1 },
	{ "loopSoundVolume", &class_float, offsetof(mindustry_world_blocks_defense_turrets_Turret, F_loopSoundVolume), "F", 1 },
	{ "soundPitchMin", &class_float, offsetof(mindustry_world_blocks_defense_turrets_Turret, F_soundPitchMin), "F", 1 },
	{ "soundPitchMax", &class_float, offsetof(mindustry_world_blocks_defense_turrets_Turret, F_soundPitchMax), "F", 1 },
	{ "ammoEjectBack", &class_float, offsetof(mindustry_world_blocks_defense_turrets_Turret, F_ammoEjectBack), "F", 1 },
	{ "shootWarmupSpeed", &class_float, offsetof(mindustry_world_blocks_defense_turrets_Turret, F_shootWarmupSpeed), "F", 1 },
	{ "linearWarmup", &class_boolean, offsetof(mindustry_world_blocks_defense_turrets_Turret, F_linearWarmup), "Z", 1 },
	{ "recoil", &class_float, offsetof(mindustry_world_blocks_defense_turrets_Turret, F_recoil), "F", 1 },
	{ "recoils", &class_int, offsetof(mindustry_world_blocks_defense_turrets_Turret, F_recoils), "I", 1 },
	{ "recoilTime", &class_float, offsetof(mindustry_world_blocks_defense_turrets_Turret, F_recoilTime), "F", 1 },
	{ "recoilPow", &class_float, offsetof(mindustry_world_blocks_defense_turrets_Turret, F_recoilPow), "F", 1 },
	{ "cooldownTime", &class_float, offsetof(mindustry_world_blocks_defense_turrets_Turret, F_cooldownTime), "F", 1 },
	{ "elevation", &class_float, offsetof(mindustry_world_blocks_defense_turrets_Turret, F_elevation), "F", 1 },
	{ "shake", &class_float, offsetof(mindustry_world_blocks_defense_turrets_Turret, F_shake), "F", 1 },
	{ "drawer", &class_mindustry_world_draw_DrawBlock, offsetof(mindustry_world_blocks_defense_turrets_Turret, F_drawer), "Lmindustry/world/draw/DrawBlock;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_blocks_defense_turrets_Turret_java_lang_String, 0, "(Ljava/lang/String;)V", 1 },
	{ "outputsItems", (intptr_t) M_mindustry_world_blocks_defense_turrets_Turret_outputsItems_R_boolean, VTABLE_mindustry_world_blocks_defense_turrets_Turret_outputsItems_R_boolean, "()Z", 1 },
	{ "setStats", (intptr_t) M_mindustry_world_blocks_defense_turrets_Turret_setStats, VTABLE_mindustry_world_blocks_defense_turrets_Turret_setStats, "()V", 1 },
	{ "setBars", (intptr_t) M_mindustry_world_blocks_defense_turrets_Turret_setBars, VTABLE_mindustry_world_blocks_defense_turrets_Turret_setBars, "()V", 1 },
	{ "init", (intptr_t) M_mindustry_world_blocks_defense_turrets_Turret_init, VTABLE_mindustry_world_blocks_defense_turrets_Turret_init, "()V", 1 },
	{ "load", (intptr_t) M_mindustry_world_blocks_defense_turrets_Turret_load, VTABLE_mindustry_world_blocks_defense_turrets_Turret_load, "()V", 1 },
	{ "drawPlanRegion", (intptr_t) M_mindustry_world_blocks_defense_turrets_Turret_drawPlanRegion_mindustry_entities_units_BuildPlan_arc_util_Eachable, VTABLE_mindustry_world_blocks_defense_turrets_Turret_drawPlanRegion_mindustry_entities_units_BuildPlan_arc_util_Eachable, "(Lmindustry/entities/units/BuildPlan;Larc/util/Eachable;)V", 1 },
	{ "icons", (intptr_t) M_mindustry_world_blocks_defense_turrets_Turret_icons_R_Array1_arc_graphics_g2d_TextureRegion, VTABLE_mindustry_world_blocks_defense_turrets_Turret_icons_R_Array1_arc_graphics_g2d_TextureRegion, "()[Larc/graphics/g2d/TextureRegion;", 1 },
	{ "getRegionsToOutline", (intptr_t) M_mindustry_world_blocks_defense_turrets_Turret_getRegionsToOutline_arc_struct_Seq, VTABLE_mindustry_world_blocks_defense_turrets_Turret_getRegionsToOutline_arc_struct_Seq, "(Larc/struct/Seq;)V", 1 },
	{ "limitRange", (intptr_t) M_mindustry_world_blocks_defense_turrets_Turret_limitRange_mindustry_entities_bullet_BulletType_float, VTABLE_mindustry_world_blocks_defense_turrets_Turret_limitRange_mindustry_entities_bullet_BulletType_float, "(Lmindustry/entities/bullet/BulletType;F)V", 1 },
	{ "drawPlace", (intptr_t) M_mindustry_world_blocks_defense_turrets_Turret_drawPlace_int_int_int_boolean, VTABLE_mindustry_world_blocks_defense_turrets_Turret_drawPlace_int_int_int_boolean, "(IIIZ)V", 1 },
	{ "rotatedOutput", (intptr_t) M_mindustry_world_blocks_defense_turrets_Turret_rotatedOutput_int_int_R_boolean, VTABLE_mindustry_world_blocks_defense_turrets_Turret_rotatedOutput_int_int_R_boolean, "(II)Z", 1 },
	{ "placeEnded", (intptr_t) M_mindustry_world_blocks_defense_turrets_Turret_placeEnded_mindustry_world_Tile_mindustry_gen_Unit_int_java_lang_Object, VTABLE_mindustry_world_blocks_defense_turrets_Turret_placeEnded_mindustry_world_Tile_mindustry_gen_Unit_int_java_lang_Object, "(Lmindustry/world/Tile;Lmindustry/gen/Unit;ILjava/lang/Object;)V", 1 },
	{ "lambda$setBars$0", (intptr_t) M_mindustry_world_blocks_defense_turrets_Turret_lambda$setBars$0_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_R_mindustry_ui_Bar, VTABLE_mindustry_world_blocks_defense_turrets_Turret_lambda$setBars$0_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_R_mindustry_ui_Bar, "(Lmindustry/world/blocks/defense/turrets/Turret$TurretBuild;)Lmindustry/ui/Bar;", 4098 },
	{ "lambda$setBars$3", (intptr_t) M_mindustry_world_blocks_defense_turrets_Turret_lambda$setBars$3_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_R_float, VTABLE_mindustry_world_blocks_defense_turrets_Turret_lambda$setBars$3_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_R_float, "(Lmindustry/world/blocks/defense/turrets/Turret$TurretBuild;)F", 4098 },
	{ "lambda$setBars$2", (intptr_t) SM_mindustry_world_blocks_defense_turrets_Turret_lambda$setBars$2_R_arc_graphics_Color, 0, "()Larc/graphics/Color;", 4106 },
	{ "lambda$setBars$1", (intptr_t) M_mindustry_world_blocks_defense_turrets_Turret_lambda$setBars$1_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_R_java_lang_CharSequence, VTABLE_mindustry_world_blocks_defense_turrets_Turret_lambda$setBars$1_mindustry_world_blocks_defense_turrets_Turret$TurretBuild_R_java_lang_CharSequence, "(Lmindustry/world/blocks/defense/turrets/Turret$TurretBuild;)Ljava/lang/CharSequence;", 4098 },
	{ "lambda$new$1", (intptr_t) M_mindustry_world_blocks_defense_turrets_Turret_lambda$new$1_mindustry_gen_Building_R_boolean, VTABLE_mindustry_world_blocks_defense_turrets_Turret_lambda$new$1_mindustry_gen_Building_R_boolean, "(Lmindustry/gen/Building;)Z", 4098 },
	{ "lambda$new$0", (intptr_t) SM_mindustry_world_blocks_defense_turrets_Turret_lambda$new$0_mindustry_gen_Unit_R_boolean, 0, "(Lmindustry/gen/Unit;)Z", 4106 },
};

Class class_mindustry_world_blocks_defense_turrets_Turret{
		.nativeName = (intptr_t) "mindustry/world/blocks/defense/turrets/Turret",
		.parentClass = (intptr_t) &class_mindustry_world_blocks_defense_turrets_ReloadTurret,
		.size = sizeof(mindustry_world_blocks_defense_turrets_Turret),
		.classVtable = (intptr_t) vtable_mindustry_world_blocks_defense_turrets_Turret,
		.staticInitializer = (intptr_t) clinit_mindustry_world_blocks_defense_turrets_Turret,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_world_blocks_defense_turrets_Turret,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 3,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 62,
		.nativeFields = (intptr_t) fields,
		.methodCount = 19,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 197,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_blocks_defense_turrets_Turret = registerClass(&class_mindustry_world_blocks_defense_turrets_Turret);

}
