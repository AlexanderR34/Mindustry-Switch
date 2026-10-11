#include "mindustry/entities/bullet/BulletType.h"
#include "mindustry/entities/bullet/BulletType_invoke_arc_func_Boolf_10.h"
#include "mindustry/entities/bullet/BulletType_invoke_arc_func_Boolf_11.h"
#include "arc/math/Angles.h"
#include "mindustry/content/Bullets.h"
#include "arc/Events.h"
#include "arc/graphics/Color.h"
#include "mindustry/entities/UnitSorts.h"
#include "java/lang/Runnable.h"
#include "arc/graphics/g2d/Draw.h"
#include "java/lang/reflect/Constructor.h"
#include "mindustry/entities/Effect.h"
#include "mindustry/ai/BlockIndexer.h"
#include "mindustry/content/Fx.h"
#include "mindustry/core/ContentLoader.h"
#include "mindustry/gen/Physicsc.h"
#include "mindustry/game/EventType_UnitBulletDestroyEvent.h"
#include "mindustry/gen/Entityc.h"
#include "arc/util/Tmp.h"
#include "arc/struct/Seq.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/world/Tile.h"
#include "mindustry/entities/Mover.h"
#include "mindustry/game/EventType_BulletCreateEvent.h"
#include "arc/math/geom/Position.h"
#include "mindustry/gen/Healthc.h"
#include "java/lang/Throwable.h"
#include "mindustry/gen/Shieldc.h"
#include "arc/func/Boolf.h"
#include "arc/math/Mathf.h"
#include "java/lang/Exception.h"
#include "java/lang/reflect/Field.h"
#include "java/util/Iterator.h"
#include "mindustry/gen/Unit.h"
#include "mindustry/gen/Sounds.h"
#include "mindustry/entities/Lightning.h"
#include "arc/math/Interp.h"
#include "mindustry/type/Liquid.h"
#include "java/lang/Cloneable.h"
#include "arc/util/Time.h"
#include "mindustry/entities/Damage.h"
#include "mindustry/entities/bullet/BulletType_invoke_arc_func_Boolf_9.h"
#include "arc/util/Nullable.h"
#include "mindustry/game/EventType_UnitDamageEvent.h"
#include "mindustry/entities/bullet/BulletType_invoke_java_lang_Runnable_1.h"
#include "arc/util/Interval.h"
#include "mindustry/entities/bullet/BulletType_invoke_arc_func_Boolf_8.h"
#include "mindustry/entities/bullet/BulletType_invoke_arc_func_Boolf_7.h"
#include "mindustry/gen/Building.h"
#include "mindustry/entities/bullet/BulletType_invoke_arc_func_Boolf_6.h"
#include "mindustry/entities/units/UnitController.h"
#include "mindustry/gen/Posc.h"
#include "mindustry/graphics/Trail.h"
#include "java/lang/Object.h"
#include "mindustry/world/blocks/ConstructBlock.h"
#include "mindustry/gen/Bullet.h"
#include "mindustry/entities/Units.h"
#include "java/lang/RuntimeException.h"
#include "mindustry/gen/Hitboxc.h"
#include "mindustry/entities/bullet/BulletType.h"
#include "mindustry/content/Liquids.h"
#include "arc/math/geom/Vec2.h"
#include "mindustry/net/Net.h"
#include "mindustry/world/Block.h"
#include "mindustry/game/Rules.h"
#include "mindustry/entities/Units_Sortf.h"
#include "java/lang/Float.h"
#include "mindustry/gen/Velc.h"
#include "mindustry/entities/Puddles.h"
#include "mindustry/gen/Unitc.h"
#include "arc/func/Cons.h"
#include "mindustry/content/StatusEffects.h"
#include "java/lang/String.h"
#include "mindustry/ai/types/MissileAI.h"
#include "java/lang/Math.h"
#include "mindustry/gen/Teamc.h"
#include "mindustry/entities/part/DrawPart_PartParams.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/type/StatusEffect.h"
#include "mindustry/entities/part/DrawPart.h"
#include "mindustry/type/UnitType.h"
#include "mindustry/world/blocks/ControlBlock.h"
#include "mindustry/graphics/Pal.h"
#include "mindustry/entities/Fires.h"
#include "mindustry/ctype/Content.h"
#include "arc/audio/Sound.h"
#include "mindustry/gen/Statusc.h"
#include "mindustry/graphics/Drawf.h"
#include "mindustry/entities/bullet/BulletType_invoke_arc_func_Cons_3.h"
#include "mindustry/ctype/ContentType.h"
#include "mindustry/game/Team.h"
#include "mindustry/entities/pattern/ShootPattern.h"
#include "mindustry/Vars.h"
#include "mindustry/core/GameState.h"
#include "mindustry/core/World.h"
#include "mindustry/gen/Call.h"
#include "mindustry/entities/bullet/BulletType_invoke_arc_func_Cons_2.h"

extern "C" {

jobject SF_mindustry_entities_bullet_BulletType_bulletDamageEvent;
jobject SF_mindustry_entities_bullet_BulletType_bulletCreateEvent;

void mark_mindustry_entities_bullet_BulletType(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_entities_bullet_BulletType_bulletDamageEvent)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_entities_bullet_BulletType_bulletDamageEvent)->clazz)->markFunction)((jobject) SF_mindustry_entities_bullet_BulletType_bulletDamageEvent, mark, depth + 1);
		if (SF_mindustry_entities_bullet_BulletType_bulletCreateEvent)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_entities_bullet_BulletType_bulletCreateEvent)->clazz)->markFunction)((jobject) SF_mindustry_entities_bullet_BulletType_bulletCreateEvent, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_ctype_Content(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_entities_bullet_BulletType *) object;
	if (self->F_hitEffect)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_hitEffect)->clazz)->markFunction)((jobject) self->F_hitEffect, mark, depth + 1);
	if (self->F_despawnEffect)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_despawnEffect)->clazz)->markFunction)((jobject) self->F_despawnEffect, mark, depth + 1);
	if (self->F_shootEffect)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_shootEffect)->clazz)->markFunction)((jobject) self->F_shootEffect, mark, depth + 1);
	if (self->F_shootPattern)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_shootPattern)->clazz)->markFunction)((jobject) self->F_shootPattern, mark, depth + 1);
	if (self->F_chargeEffect)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_chargeEffect)->clazz)->markFunction)((jobject) self->F_chargeEffect, mark, depth + 1);
	if (self->F_smokeEffect)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_smokeEffect)->clazz)->markFunction)((jobject) self->F_smokeEffect, mark, depth + 1);
	if (self->F_shootSound)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_shootSound)->clazz)->markFunction)((jobject) self->F_shootSound, mark, depth + 1);
	if (self->F_hitSound)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_hitSound)->clazz)->markFunction)((jobject) self->F_hitSound, mark, depth + 1);
	if (self->F_despawnSound)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_despawnSound)->clazz)->markFunction)((jobject) self->F_despawnSound, mark, depth + 1);
	if (self->F_status)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_status)->clazz)->markFunction)((jobject) self->F_status, mark, depth + 1);
	if (self->F_unitSort)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_unitSort)->clazz)->markFunction)((jobject) self->F_unitSort, mark, depth + 1);
	if (self->F_healSound)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_healSound)->clazz)->markFunction)((jobject) self->F_healSound, mark, depth + 1);
	if (self->F_fragBullet)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_fragBullet)->clazz)->markFunction)((jobject) self->F_fragBullet, mark, depth + 1);
	if (self->F_intervalBullet)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_intervalBullet)->clazz)->markFunction)((jobject) self->F_intervalBullet, mark, depth + 1);
	if (self->F_hitColor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_hitColor)->clazz)->markFunction)((jobject) self->F_hitColor, mark, depth + 1);
	if (self->F_healColor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_healColor)->clazz)->markFunction)((jobject) self->F_healColor, mark, depth + 1);
	if (self->F_healEffect)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_healEffect)->clazz)->markFunction)((jobject) self->F_healEffect, mark, depth + 1);
	if (self->F_spawnBullets)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_spawnBullets)->clazz)->markFunction)((jobject) self->F_spawnBullets, mark, depth + 1);
	if (self->F_spawnUnit)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_spawnUnit)->clazz)->markFunction)((jobject) self->F_spawnUnit, mark, depth + 1);
	if (self->F_despawnUnit)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_despawnUnit)->clazz)->markFunction)((jobject) self->F_despawnUnit, mark, depth + 1);
	if (self->F_parts)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_parts)->clazz)->markFunction)((jobject) self->F_parts, mark, depth + 1);
	if (self->F_trailColor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_trailColor)->clazz)->markFunction)((jobject) self->F_trailColor, mark, depth + 1);
	if (self->F_trailEffect)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_trailEffect)->clazz)->markFunction)((jobject) self->F_trailEffect, mark, depth + 1);
	if (self->F_trailInterp)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_trailInterp)->clazz)->markFunction)((jobject) self->F_trailInterp, mark, depth + 1);
	if (self->F_suppressColor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_suppressColor)->clazz)->markFunction)((jobject) self->F_suppressColor, mark, depth + 1);
	if (self->F_lightningColor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lightningColor)->clazz)->markFunction)((jobject) self->F_lightningColor, mark, depth + 1);
	if (self->F_lightningType)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lightningType)->clazz)->markFunction)((jobject) self->F_lightningType, mark, depth + 1);
	if (self->F_puddleLiquid)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_puddleLiquid)->clazz)->markFunction)((jobject) self->F_puddleLiquid, mark, depth + 1);
	if (self->F_lightColor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lightColor)->clazz)->markFunction)((jobject) self->F_lightColor, mark, depth + 1);
}

void init_mindustry_entities_bullet_BulletType_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/BulletType:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_bullet_BulletType(ctx);
	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(387);
	init_mindustry_ctype_Content(ctx, (frame[0].o));
	LINE_NUMBER(35);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_lifetime = (jfloat(40.0f));
	LINE_NUMBER(37);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_lifeScaleRandMin = (jfloat(1));
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_lifeScaleRandMax = (jfloat(1));
	LINE_NUMBER(39);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_speed = (jfloat(1));
	LINE_NUMBER(41);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_velocityScaleRandMin = (jfloat(1));
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_velocityScaleRandMax = (jfloat(1));
	LINE_NUMBER(43);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_damage = (jfloat(1));
	LINE_NUMBER(45);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_hitSize = (jfloat(4.0f));
	LINE_NUMBER(47);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_drawSize = (jfloat(40.0f));
	LINE_NUMBER(49);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_angleOffset = (jfloat(0));
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_randomAngleOffset = (jfloat(0));
	LINE_NUMBER(51);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_drag = (jfloat(0));
	LINE_NUMBER(53);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_accel = (jfloat(0));
	LINE_NUMBER(59);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_pierceCap = (jint(-1));
	LINE_NUMBER(61);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_pierceDamageFactor = (jfloat(0));
	LINE_NUMBER(63);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_maxDamageFraction = (jfloat(-1.0f));
	LINE_NUMBER(65);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_removeAfterPierce = (jint(1));
	LINE_NUMBER(67);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_laserAbsorb = (jint(1));
	LINE_NUMBER(69);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_laserBullet = (jint(0));
	LINE_NUMBER(71);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_optimalLifeFract = (jfloat(0));
	LINE_NUMBER(73);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_layer = (jfloat(100.0f));
	LINE_NUMBER(75);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_hitBulletSmall;
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_hitEffect = (jref) sp[1].o;
	LINE_NUMBER(77);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_hitBulletSmall;
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_despawnEffect = (jref) sp[1].o;
	LINE_NUMBER(79);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_shootSmall;
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_shootEffect = (jref) sp[1].o;
	LINE_NUMBER(81);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_shootPattern = (jref) (jobject(nullptr));
	LINE_NUMBER(83);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_none;
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_chargeEffect = (jref) sp[1].o;
	LINE_NUMBER(85);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_shootSmallSmoke;
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_smokeEffect = (jref) sp[1].o;
	LINE_NUMBER(87);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_none;
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_shootSound = (jref) sp[1].o;
	LINE_NUMBER(89);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_none;
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_hitSound = (jref) sp[1].o;
	LINE_NUMBER(91);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_none;
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_despawnSound = (jref) sp[1].o;
	LINE_NUMBER(93);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_hitSoundPitch = (jfloat(1));
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_hitSoundPitchRange = (jfloat(0.1f));
	LINE_NUMBER(95);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_hitSoundVolume = (jfloat(1));
	LINE_NUMBER(97);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_inaccuracy = (jfloat(0));
	LINE_NUMBER(99);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_ammoMultiplier = (jfloat(2));
	LINE_NUMBER(101);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_reloadMultiplier = (jfloat(1));
	LINE_NUMBER(103);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_buildingDamageMultiplier = (jfloat(1));
	LINE_NUMBER(105);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_shieldDamageMultiplier = (jfloat(1));
	LINE_NUMBER(113);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_splashDamage = (jfloat(0));
	LINE_NUMBER(115);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_scaledSplashDamage = (jint(0));
	LINE_NUMBER(121);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_StatusEffects(ctx);
	sp[1].o = (jobject)SF_mindustry_content_StatusEffects_none;
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_status = (jref) sp[1].o;
	LINE_NUMBER(123);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_statusDuration = (jfloat(480.0f));
	LINE_NUMBER(125);
	sp[0].o = frame[0].o;
	clinit_mindustry_entities_UnitSorts(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_UnitSorts_closest;
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_unitSort = (jref) sp[1].o;
	LINE_NUMBER(127);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_statusChance = (jfloat(1));
	LINE_NUMBER(129);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_targetBlocks = (jint(1));
	LINE_NUMBER(131);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_targetMissiles = (jint(1));
	LINE_NUMBER(133);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_collidesTiles = (jint(1));
	LINE_NUMBER(135);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_collidesTeam = (jint(0));
	LINE_NUMBER(137);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_collidesAir = (jint(1));
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_collidesGround = (jint(1));
	LINE_NUMBER(139);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_collides = (jint(1));
	LINE_NUMBER(141);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_collideFloor = (jint(0));
	LINE_NUMBER(143);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_collideTerrain = (jint(0));
	LINE_NUMBER(145);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_keepVelocity = (jint(1));
	LINE_NUMBER(147);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_scaleKeepVelocity = (jint(0));
	LINE_NUMBER(151);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_hittable = (jint(1));
	LINE_NUMBER(153);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_reflectable = (jint(1));
	LINE_NUMBER(155);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_absorbable = (jint(1));
	LINE_NUMBER(157);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_ignoreSpawnAngle = (jint(0));
	LINE_NUMBER(159);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_createChance = (jfloat(1));
	LINE_NUMBER(161);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_maxRange = (jfloat(-1.0f));
	LINE_NUMBER(163);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_rangeOverride = (jfloat(-1.0f));
	LINE_NUMBER(165);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_rangeChange = (jfloat(0));
	LINE_NUMBER(167);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_extraRangeMargin = (jfloat(0));
	LINE_NUMBER(169);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_range = (jfloat(0));
	LINE_NUMBER(171);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_minRangeChange = (jfloat(0));
	LINE_NUMBER(173);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_healPercent = (jfloat(0));
	LINE_NUMBER(175);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_healAmount = (jfloat(0));
	LINE_NUMBER(177);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_blockHeal;
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_healSound = (jref) sp[1].o;
	LINE_NUMBER(179);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_healSoundVolume = (jfloat(0.9f));
	LINE_NUMBER(181);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_lifesteal = (jfloat(0));
	LINE_NUMBER(183);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_makeFire = (jint(0));
	LINE_NUMBER(185);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_hitUnder = (jint(0));
	LINE_NUMBER(187);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_despawnHit = (jint(0));
	LINE_NUMBER(189);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_fragOnHit = (jint(1));
	LINE_NUMBER(191);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_fragOnDespawn = (jint(1));
	LINE_NUMBER(193);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_fragOnAbsorb = (jint(1));
	LINE_NUMBER(195);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_pierceArmor = (jint(0));
	LINE_NUMBER(197);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_armorMultiplier = (jfloat(1));
	LINE_NUMBER(199);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_blockArmorMultiplier = (jfloat(1));
	LINE_NUMBER(201);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_sticky = (jint(0));
	LINE_NUMBER(203);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_stickyExtraLifetime = (jfloat(0));
	LINE_NUMBER(205);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_setDefaults = (jint(1));
	LINE_NUMBER(207);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_hitShake = (jfloat(0));
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_despawnShake = (jfloat(0));
	LINE_NUMBER(210);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_fragBullet = (jref) (jobject(nullptr));
	LINE_NUMBER(212);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_delayFrags = (jint(0));
	LINE_NUMBER(214);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_fragRandomSpread = (jfloat(360.0f));
	LINE_NUMBER(216);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_fragSpread = (jfloat(0));
	LINE_NUMBER(218);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_fragAngle = (jfloat(0));
	LINE_NUMBER(220);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_fragBullets = (9);
	LINE_NUMBER(222);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_fragVelocityMin = (jfloat(0.2f));
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_fragVelocityMax = (jfloat(1));
	LINE_NUMBER(224);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_fragLifeMin = (jfloat(1));
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_fragLifeMax = (jfloat(1));
	LINE_NUMBER(226);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_fragOffsetMin = (jfloat(1));
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_fragOffsetMax = (jfloat(7.0f));
	LINE_NUMBER(228);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_pierceFragCap = (jint(-1));
	LINE_NUMBER(233);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_bulletInterval = (jfloat(20.0f));
	LINE_NUMBER(235);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_intervalBullets = (jint(1));
	LINE_NUMBER(237);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_intervalRandomSpread = (jfloat(360.0f));
	LINE_NUMBER(239);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_intervalSpread = (jfloat(0));
	LINE_NUMBER(241);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_intervalAngle = (jfloat(0));
	LINE_NUMBER(243);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_intervalDelay = (jfloat(-1.0f));
	LINE_NUMBER(246);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_underwater = (jint(0));
	LINE_NUMBER(249);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_white;
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_hitColor = (jref) sp[1].o;
	LINE_NUMBER(251);
	sp[0].o = frame[0].o;
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_heal;
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_healColor = (jref) sp[1].o;
	LINE_NUMBER(253);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_healBlockFull;
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_healEffect = (jref) sp[1].o;
	LINE_NUMBER(255);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_spawnBullets = (jref) sp[1].o;
	LINE_NUMBER(257);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_showStats = (jint(0));
	LINE_NUMBER(259);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_spawnBulletRandomSpread = (jfloat(0));
	LINE_NUMBER(265);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_despawnUnitChance = (jfloat(1));
	LINE_NUMBER(267);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_despawnUnitCount = (jint(1));
	LINE_NUMBER(269);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_despawnUnitRadius = (jfloat(0.1f));
	LINE_NUMBER(271);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_faceOutwards = (jint(0));
	LINE_NUMBER(273);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_parts = (jref) sp[1].o;
	LINE_NUMBER(276);
	sp[0].o = frame[0].o;
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_missileYellowBack;
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_trailColor = (jref) sp[1].o;
	LINE_NUMBER(278);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_trailChance = (jfloat(-1,000000e-04f));
	LINE_NUMBER(280);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_trailInterval = (jfloat(0));
	LINE_NUMBER(282);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_trailMinVelocity = (jfloat(0));
	LINE_NUMBER(284);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_missileTrail;
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_trailEffect = (jref) sp[1].o;
	LINE_NUMBER(286);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_trailSpread = (jfloat(0));
	LINE_NUMBER(288);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_trailParam = (jfloat(2));
	LINE_NUMBER(290);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_trailRotation = (jint(0));
	LINE_NUMBER(292);
	sp[0].o = frame[0].o;
	clinit_arc_math_Interp(ctx);
	sp[1].o = (jobject)SF_arc_math_Interp_one;
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_trailInterp = (jref) sp[1].o;
	LINE_NUMBER(294);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_trailLength = (jint(-1));
	LINE_NUMBER(296);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_trailWidth = (jfloat(2));
	LINE_NUMBER(298);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_trailSinMag = (jfloat(0));
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_trailSinScl = (jfloat(3.0f));
	LINE_NUMBER(300);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_circleShooter = (jint(0));
	LINE_NUMBER(302);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_circleShooterRadius = (jfloat(13.0f));
	LINE_NUMBER(304);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_circleShooterRadiusSmooth = (jfloat(10.0f));
	LINE_NUMBER(306);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_circleShooterRotateSpeed = (jfloat(0.3f));
	LINE_NUMBER(309);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_splashDamageRadius = (jfloat(-1.0f));
	LINE_NUMBER(311);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_splashDamagePierce = (jint(0));
	LINE_NUMBER(314);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_incendAmount = (jint(0));
	LINE_NUMBER(316);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_incendSpread = (jfloat(8.0f));
	LINE_NUMBER(318);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_incendChance = (jfloat(1));
	LINE_NUMBER(321);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_homingPower = (jfloat(0));
	LINE_NUMBER(323);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_homingRange = (jfloat(50.0f));
	LINE_NUMBER(325);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_homingDelay = (jfloat(-1.0f));
	LINE_NUMBER(327);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_followAimSpeed = (jfloat(0));
	LINE_NUMBER(330);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_suppressionRange = (jfloat(-1.0f));
	LINE_NUMBER(332);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_suppressionDuration = (jfloat(480.0f));
	LINE_NUMBER(334);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_suppressionEffectChance = (jfloat(50.0f));
	LINE_NUMBER(336);
	sp[0].o = frame[0].o;
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_sapBullet;
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_suppressColor = (jref) sp[1].o;
	LINE_NUMBER(339);
	sp[0].o = frame[0].o;
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_surge;
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_lightningColor = (jref) sp[1].o;
	LINE_NUMBER(343);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_lightningLength = (jint(5));
	LINE_NUMBER(345);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_lightningLengthRand = (jint(0));
	LINE_NUMBER(347);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_lightningDamage = (jfloat(-1.0f));
	LINE_NUMBER(349);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_lightningCone = (jfloat(360.0f));
	LINE_NUMBER(351);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_lightningAngle = (jfloat(0));
	LINE_NUMBER(353);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_lightningType = (jref) (jobject(nullptr));
	LINE_NUMBER(356);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_weaveScale = (jfloat(1));
	LINE_NUMBER(358);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_weaveMag = (jfloat(0));
	LINE_NUMBER(360);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_weaveRandom = (jint(1));
	LINE_NUMBER(362);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_rotateSpeed = (jfloat(0));
	LINE_NUMBER(369);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_puddleAmount = (jfloat(5.0f));
	LINE_NUMBER(371);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Liquids(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Liquids_water;
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_puddleLiquid = (jref) sp[1].o;
	LINE_NUMBER(374);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_displayAmmoMultiplier = (jint(1));
	LINE_NUMBER(379);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_lightRadius = (jfloat(-1.0f));
	LINE_NUMBER(381);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_lightOpacity = (jfloat(0.3f));
	LINE_NUMBER(383);
	sp[0].o = frame[0].o;
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_powerLight;
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_lightColor = (jref) sp[1].o;
	LINE_NUMBER(385);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_cachedDps = (jfloat(-1.0f));
	LINE_NUMBER(388);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_speed = (frame[1].f);
	LINE_NUMBER(389);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_damage = (frame[2].f);
	LINE_NUMBER(390);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_entities_bullet_BulletType(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/BulletType:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_bullet_BulletType(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(392);
	init_mindustry_ctype_Content(ctx, (frame[0].o));
	LINE_NUMBER(35);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_lifetime = (jfloat(40.0f));
	LINE_NUMBER(37);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_lifeScaleRandMin = (jfloat(1));
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_lifeScaleRandMax = (jfloat(1));
	LINE_NUMBER(39);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_speed = (jfloat(1));
	LINE_NUMBER(41);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_velocityScaleRandMin = (jfloat(1));
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_velocityScaleRandMax = (jfloat(1));
	LINE_NUMBER(43);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_damage = (jfloat(1));
	LINE_NUMBER(45);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_hitSize = (jfloat(4.0f));
	LINE_NUMBER(47);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_drawSize = (jfloat(40.0f));
	LINE_NUMBER(49);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_angleOffset = (jfloat(0));
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_randomAngleOffset = (jfloat(0));
	LINE_NUMBER(51);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_drag = (jfloat(0));
	LINE_NUMBER(53);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_accel = (jfloat(0));
	LINE_NUMBER(59);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_pierceCap = (jint(-1));
	LINE_NUMBER(61);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_pierceDamageFactor = (jfloat(0));
	LINE_NUMBER(63);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_maxDamageFraction = (jfloat(-1.0f));
	LINE_NUMBER(65);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_removeAfterPierce = (jint(1));
	LINE_NUMBER(67);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_laserAbsorb = (jint(1));
	LINE_NUMBER(69);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_laserBullet = (jint(0));
	LINE_NUMBER(71);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_optimalLifeFract = (jfloat(0));
	LINE_NUMBER(73);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_layer = (jfloat(100.0f));
	LINE_NUMBER(75);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_hitBulletSmall;
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_hitEffect = (jref) sp[1].o;
	LINE_NUMBER(77);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_hitBulletSmall;
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_despawnEffect = (jref) sp[1].o;
	LINE_NUMBER(79);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_shootSmall;
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_shootEffect = (jref) sp[1].o;
	LINE_NUMBER(81);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_shootPattern = (jref) (jobject(nullptr));
	LINE_NUMBER(83);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_none;
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_chargeEffect = (jref) sp[1].o;
	LINE_NUMBER(85);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_shootSmallSmoke;
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_smokeEffect = (jref) sp[1].o;
	LINE_NUMBER(87);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_none;
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_shootSound = (jref) sp[1].o;
	LINE_NUMBER(89);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_none;
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_hitSound = (jref) sp[1].o;
	LINE_NUMBER(91);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_none;
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_despawnSound = (jref) sp[1].o;
	LINE_NUMBER(93);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_hitSoundPitch = (jfloat(1));
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_hitSoundPitchRange = (jfloat(0.1f));
	LINE_NUMBER(95);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_hitSoundVolume = (jfloat(1));
	LINE_NUMBER(97);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_inaccuracy = (jfloat(0));
	LINE_NUMBER(99);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_ammoMultiplier = (jfloat(2));
	LINE_NUMBER(101);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_reloadMultiplier = (jfloat(1));
	LINE_NUMBER(103);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_buildingDamageMultiplier = (jfloat(1));
	LINE_NUMBER(105);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_shieldDamageMultiplier = (jfloat(1));
	LINE_NUMBER(113);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_splashDamage = (jfloat(0));
	LINE_NUMBER(115);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_scaledSplashDamage = (jint(0));
	LINE_NUMBER(121);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_StatusEffects(ctx);
	sp[1].o = (jobject)SF_mindustry_content_StatusEffects_none;
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_status = (jref) sp[1].o;
	LINE_NUMBER(123);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_statusDuration = (jfloat(480.0f));
	LINE_NUMBER(125);
	sp[0].o = frame[0].o;
	clinit_mindustry_entities_UnitSorts(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_UnitSorts_closest;
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_unitSort = (jref) sp[1].o;
	LINE_NUMBER(127);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_statusChance = (jfloat(1));
	LINE_NUMBER(129);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_targetBlocks = (jint(1));
	LINE_NUMBER(131);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_targetMissiles = (jint(1));
	LINE_NUMBER(133);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_collidesTiles = (jint(1));
	LINE_NUMBER(135);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_collidesTeam = (jint(0));
	LINE_NUMBER(137);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_collidesAir = (jint(1));
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_collidesGround = (jint(1));
	LINE_NUMBER(139);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_collides = (jint(1));
	LINE_NUMBER(141);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_collideFloor = (jint(0));
	LINE_NUMBER(143);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_collideTerrain = (jint(0));
	LINE_NUMBER(145);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_keepVelocity = (jint(1));
	LINE_NUMBER(147);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_scaleKeepVelocity = (jint(0));
	LINE_NUMBER(151);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_hittable = (jint(1));
	LINE_NUMBER(153);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_reflectable = (jint(1));
	LINE_NUMBER(155);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_absorbable = (jint(1));
	LINE_NUMBER(157);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_ignoreSpawnAngle = (jint(0));
	LINE_NUMBER(159);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_createChance = (jfloat(1));
	LINE_NUMBER(161);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_maxRange = (jfloat(-1.0f));
	LINE_NUMBER(163);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_rangeOverride = (jfloat(-1.0f));
	LINE_NUMBER(165);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_rangeChange = (jfloat(0));
	LINE_NUMBER(167);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_extraRangeMargin = (jfloat(0));
	LINE_NUMBER(169);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_range = (jfloat(0));
	LINE_NUMBER(171);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_minRangeChange = (jfloat(0));
	LINE_NUMBER(173);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_healPercent = (jfloat(0));
	LINE_NUMBER(175);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_healAmount = (jfloat(0));
	LINE_NUMBER(177);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_blockHeal;
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_healSound = (jref) sp[1].o;
	LINE_NUMBER(179);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_healSoundVolume = (jfloat(0.9f));
	LINE_NUMBER(181);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_lifesteal = (jfloat(0));
	LINE_NUMBER(183);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_makeFire = (jint(0));
	LINE_NUMBER(185);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_hitUnder = (jint(0));
	LINE_NUMBER(187);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_despawnHit = (jint(0));
	LINE_NUMBER(189);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_fragOnHit = (jint(1));
	LINE_NUMBER(191);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_fragOnDespawn = (jint(1));
	LINE_NUMBER(193);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_fragOnAbsorb = (jint(1));
	LINE_NUMBER(195);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_pierceArmor = (jint(0));
	LINE_NUMBER(197);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_armorMultiplier = (jfloat(1));
	LINE_NUMBER(199);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_blockArmorMultiplier = (jfloat(1));
	LINE_NUMBER(201);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_sticky = (jint(0));
	LINE_NUMBER(203);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_stickyExtraLifetime = (jfloat(0));
	LINE_NUMBER(205);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_setDefaults = (jint(1));
	LINE_NUMBER(207);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_hitShake = (jfloat(0));
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_despawnShake = (jfloat(0));
	LINE_NUMBER(210);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_fragBullet = (jref) (jobject(nullptr));
	LINE_NUMBER(212);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_delayFrags = (jint(0));
	LINE_NUMBER(214);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_fragRandomSpread = (jfloat(360.0f));
	LINE_NUMBER(216);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_fragSpread = (jfloat(0));
	LINE_NUMBER(218);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_fragAngle = (jfloat(0));
	LINE_NUMBER(220);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_fragBullets = (9);
	LINE_NUMBER(222);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_fragVelocityMin = (jfloat(0.2f));
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_fragVelocityMax = (jfloat(1));
	LINE_NUMBER(224);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_fragLifeMin = (jfloat(1));
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_fragLifeMax = (jfloat(1));
	LINE_NUMBER(226);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_fragOffsetMin = (jfloat(1));
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_fragOffsetMax = (jfloat(7.0f));
	LINE_NUMBER(228);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_pierceFragCap = (jint(-1));
	LINE_NUMBER(233);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_bulletInterval = (jfloat(20.0f));
	LINE_NUMBER(235);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_intervalBullets = (jint(1));
	LINE_NUMBER(237);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_intervalRandomSpread = (jfloat(360.0f));
	LINE_NUMBER(239);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_intervalSpread = (jfloat(0));
	LINE_NUMBER(241);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_intervalAngle = (jfloat(0));
	LINE_NUMBER(243);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_intervalDelay = (jfloat(-1.0f));
	LINE_NUMBER(246);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_underwater = (jint(0));
	LINE_NUMBER(249);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_white;
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_hitColor = (jref) sp[1].o;
	LINE_NUMBER(251);
	sp[0].o = frame[0].o;
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_heal;
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_healColor = (jref) sp[1].o;
	LINE_NUMBER(253);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_healBlockFull;
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_healEffect = (jref) sp[1].o;
	LINE_NUMBER(255);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_spawnBullets = (jref) sp[1].o;
	LINE_NUMBER(257);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_showStats = (jint(0));
	LINE_NUMBER(259);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_spawnBulletRandomSpread = (jfloat(0));
	LINE_NUMBER(265);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_despawnUnitChance = (jfloat(1));
	LINE_NUMBER(267);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_despawnUnitCount = (jint(1));
	LINE_NUMBER(269);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_despawnUnitRadius = (jfloat(0.1f));
	LINE_NUMBER(271);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_faceOutwards = (jint(0));
	LINE_NUMBER(273);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_parts = (jref) sp[1].o;
	LINE_NUMBER(276);
	sp[0].o = frame[0].o;
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_missileYellowBack;
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_trailColor = (jref) sp[1].o;
	LINE_NUMBER(278);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_trailChance = (jfloat(-1,000000e-04f));
	LINE_NUMBER(280);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_trailInterval = (jfloat(0));
	LINE_NUMBER(282);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_trailMinVelocity = (jfloat(0));
	LINE_NUMBER(284);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_missileTrail;
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_trailEffect = (jref) sp[1].o;
	LINE_NUMBER(286);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_trailSpread = (jfloat(0));
	LINE_NUMBER(288);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_trailParam = (jfloat(2));
	LINE_NUMBER(290);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_trailRotation = (jint(0));
	LINE_NUMBER(292);
	sp[0].o = frame[0].o;
	clinit_arc_math_Interp(ctx);
	sp[1].o = (jobject)SF_arc_math_Interp_one;
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_trailInterp = (jref) sp[1].o;
	LINE_NUMBER(294);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_trailLength = (jint(-1));
	LINE_NUMBER(296);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_trailWidth = (jfloat(2));
	LINE_NUMBER(298);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_trailSinMag = (jfloat(0));
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_trailSinScl = (jfloat(3.0f));
	LINE_NUMBER(300);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_circleShooter = (jint(0));
	LINE_NUMBER(302);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_circleShooterRadius = (jfloat(13.0f));
	LINE_NUMBER(304);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_circleShooterRadiusSmooth = (jfloat(10.0f));
	LINE_NUMBER(306);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_circleShooterRotateSpeed = (jfloat(0.3f));
	LINE_NUMBER(309);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_splashDamageRadius = (jfloat(-1.0f));
	LINE_NUMBER(311);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_splashDamagePierce = (jint(0));
	LINE_NUMBER(314);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_incendAmount = (jint(0));
	LINE_NUMBER(316);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_incendSpread = (jfloat(8.0f));
	LINE_NUMBER(318);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_incendChance = (jfloat(1));
	LINE_NUMBER(321);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_homingPower = (jfloat(0));
	LINE_NUMBER(323);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_homingRange = (jfloat(50.0f));
	LINE_NUMBER(325);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_homingDelay = (jfloat(-1.0f));
	LINE_NUMBER(327);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_followAimSpeed = (jfloat(0));
	LINE_NUMBER(330);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_suppressionRange = (jfloat(-1.0f));
	LINE_NUMBER(332);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_suppressionDuration = (jfloat(480.0f));
	LINE_NUMBER(334);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_suppressionEffectChance = (jfloat(50.0f));
	LINE_NUMBER(336);
	sp[0].o = frame[0].o;
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_sapBullet;
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_suppressColor = (jref) sp[1].o;
	LINE_NUMBER(339);
	sp[0].o = frame[0].o;
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_surge;
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_lightningColor = (jref) sp[1].o;
	LINE_NUMBER(343);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_lightningLength = (jint(5));
	LINE_NUMBER(345);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_lightningLengthRand = (jint(0));
	LINE_NUMBER(347);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_lightningDamage = (jfloat(-1.0f));
	LINE_NUMBER(349);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_lightningCone = (jfloat(360.0f));
	LINE_NUMBER(351);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_lightningAngle = (jfloat(0));
	LINE_NUMBER(353);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_lightningType = (jref) (jobject(nullptr));
	LINE_NUMBER(356);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_weaveScale = (jfloat(1));
	LINE_NUMBER(358);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_weaveMag = (jfloat(0));
	LINE_NUMBER(360);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_weaveRandom = (jint(1));
	LINE_NUMBER(362);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_rotateSpeed = (jfloat(0));
	LINE_NUMBER(369);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_puddleAmount = (jfloat(5.0f));
	LINE_NUMBER(371);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Liquids(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Liquids_water;
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_puddleLiquid = (jref) sp[1].o;
	LINE_NUMBER(374);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_displayAmmoMultiplier = (jint(1));
	LINE_NUMBER(379);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_lightRadius = (jfloat(-1.0f));
	LINE_NUMBER(381);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_lightOpacity = (jfloat(0.3f));
	LINE_NUMBER(383);
	sp[0].o = frame[0].o;
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_powerLight;
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_lightColor = (jref) sp[1].o;
	LINE_NUMBER(385);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_cachedDps = (jfloat(-1.0f));
	LINE_NUMBER(393);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_entities_bullet_BulletType_copy_R_mindustry_entities_bullet_BulletType(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/BulletType:copy", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(397);
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, (frame[0].o));
	frame[1].o = (checkCast(ctx, &class_mindustry_entities_bullet_BulletType, sp[0].o));
	LINE_NUMBER(398);
	sp[0].o = frame[1].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	sp[2].o = (jobject)((func_mindustry_entities_bullet_BulletType_getContentType_R_mindustry_ctype_ContentType) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_bullet_BulletType_getContentType_R_mindustry_ctype_ContentType])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_getBy_mindustry_ctype_ContentType_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_getBy_mindustry_ctype_ContentType_R_arc_struct_Seq])(ctx, sp[1].o, sp[2].o);
	((mindustry_ctype_Content *) NULL_CHECK(sp[0].o))->F_id = (jshort(((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size)));
	LINE_NUMBER(399);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	((func_mindustry_core_ContentLoader_handleContent_mindustry_ctype_Content) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_handleContent_mindustry_ctype_Content])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(400);
	sp[0].o = frame[1].o;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(401);
	frame[1].o = sp[0].o;
	LINE_NUMBER(402);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"death to checked exceptions"_j))), (frame[1].o));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void M_mindustry_entities_bullet_BulletType_afterPatch(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/BulletType:afterPatch", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(408);
	M_mindustry_ctype_Content_afterPatch(ctx, (frame[0].o));
	LINE_NUMBER(410);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_mindustry_entities_bullet_BulletType_calculateRange_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_bullet_BulletType_calculateRange_R_float])(ctx, (frame[0].o));
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_range = temp0;
	LINE_NUMBER(411);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_bullet_BulletType_load(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/BulletType:load", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(415);
	sp[0].o = (jobject)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_parts;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_1:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_mindustry_entities_part_DrawPart, sp[0].o));
	LINE_NUMBER(416);
	((mindustry_entities_part_DrawPart *) NULL_CHECK((frame[2].o)))->F_turretShading = (jint(0));
	LINE_NUMBER(417);
	((func_mindustry_entities_part_DrawPart_load_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_entities_part_DrawPart_load_java_lang_String])(ctx, (frame[2].o), (jobject(nullptr)));
	LINE_NUMBER(418);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(419);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jfloat M_mindustry_entities_bullet_BulletType_estimateDPS_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/BulletType:estimateDPS", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(423);
	if ((floatCompare(((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_cachedDps), (jfloat(0)), -1)) < 0) goto label_1;
	}
	{
	popStackFrame(ctx);
	return ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_cachedDps);
	}
label_1:;
	{
	LINE_NUMBER(425);
	sp[0].o = (jobject)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_spawnUnit;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(426);
	sp[0].o = (jobject)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_spawnUnit;
	jfloat temp0 = (jfloat)((func_mindustry_type_UnitType_estimateDps_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_UnitType_estimateDps_R_float])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}
label_2:;
	{
	LINE_NUMBER(428);
	sp[0].o = (jobject)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_despawnUnit;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	LINE_NUMBER(429);
	sp[0].o = (jobject)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_despawnUnit;
	jfloat temp0 = (jfloat)((func_mindustry_type_UnitType_estimateDps_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_UnitType_estimateDps_R_float])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}
label_4:;
	{
	LINE_NUMBER(432);
	jfloat temp0 = ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_damage) + (((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_splashDamage) * (jfloat(0.75f)));
	sp[0].f = temp0;
	sp += 1;
	if (((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_pierce) == 0) goto label_6;
	}
	{
	if (((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_pierceCap) != (jint(-1))) goto label_7;
	}
	INST_FCONST(2);
	goto label_8;
label_7:;
	{
	jint temp0 = (jint)SM_arc_math_Mathf_clamp_int_int_int_R_int(ctx, ((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_pierceCap), (jint(1)), (jint(2)));
	jfloat temp1 = jfloat(temp0);
	sp[0].f = temp1;
	sp += 1;
	goto label_8;
	}
label_6:;
	INST_FCONST(1);
label_8:;
	{
	sp -= 2;
	frame[1].f = (sp[0].f * sp[1].f);
	LINE_NUMBER(433);
	sp[0].o = (jobject)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_fragBullet;
	if (sp[0].o == nullptr) goto label_10;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_fragBullet;
	if (sp[0].o == (frame[0].o)) goto label_10;
	}
	{
	LINE_NUMBER(434);
	jfloat temp0 = frame[1].f;
	sp[0].o = (jobject)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_fragBullet;
	jfloat temp1 = (jfloat)((func_mindustry_entities_bullet_BulletType_estimateDPS_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_bullet_BulletType_estimateDPS_R_float])(ctx, sp[0].o);
	frame[1].f = (temp0 + ((temp1 * (jfloat(((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_fragBullets)))) / (jfloat(2))));
	}
label_10:;
	{
	LINE_NUMBER(436);
	sp[0].o = (jobject)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_spawnBullets;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_12:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_13;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_mindustry_entities_bullet_BulletType, sp[0].o));
	LINE_NUMBER(437);
	jfloat temp0 = frame[1].f;
	jfloat temp1 = (jfloat)((func_mindustry_entities_bullet_BulletType_estimateDPS_R_float) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_entities_bullet_BulletType_estimateDPS_R_float])(ctx, (frame[3].o));
	frame[1].f = (temp0 + temp1);
	LINE_NUMBER(438);
	goto label_12;
	}
label_13:;
	{
	LINE_NUMBER(439);
	sp[0].o = frame[0].o;
	jfloat temp0 = frame[1].f;
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_cachedDps = temp0;
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_entities_bullet_BulletType_calculateRange_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/BulletType:calculateRange", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(444);
	if ((floatCompare(((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_rangeOverride), (jfloat(0)), -1)) <= 0) goto label_1;
	}
	{
	popStackFrame(ctx);
	return ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_rangeOverride);
	}
label_1:;
	{
	LINE_NUMBER(445);
	sp[0].o = (jobject)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_spawnUnit;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_spawnUnit;
	jfloat temp0 = (jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_lifetime;
	sp[0].o = (jobject)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_spawnUnit;
	popStackFrame(ctx);
	return (temp0 * ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_speed));
	}
label_2:;
	{
	LINE_NUMBER(446);
	sp[0].o = (jobject)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_despawnUnit;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_despawnUnit;
	jfloat temp0 = (jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_lifetime;
	sp[0].o = (jobject)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_despawnUnit;
	popStackFrame(ctx);
	return (temp0 * ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_speed));
	}
label_3:;
	{
	LINE_NUMBER(447);
	jint temp0 = (jint)SM_arc_math_Mathf_zero_float_R_boolean(ctx, ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_drag));
	if (temp0 == 0) goto label_4;
	}
	{
	jfloat temp0 = ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_speed) * ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_lifetime);
	sp[0].f = temp0;
	sp += 1;
	goto label_5;
	}
label_4:;
	{
	jfloat temp0 = (jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_speed;
	jfloat temp1 = jfloat(1);
	jfloat temp2 = (jfloat)SM_arc_math_Mathf_pow_float_float_R_float(ctx, ((jfloat(1)) - ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_drag)), ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_lifetime));
	jfloat temp3 = (temp0 * (temp1 - temp2)) / ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_drag);
	sp[0].f = temp3;
	sp += 1;
	}
label_5:;
	{
	sp -= 1;
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, sp[0].f, ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_maxRange));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_entities_bullet_BulletType_continuousDamage_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/BulletType:continuousDamage", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(452);
	popStackFrame(ctx);
	return (jfloat(-1.0f));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_entities_bullet_BulletType_heals_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/BulletType:heals", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(456);
	if ((floatCompare(((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_healPercent), (jfloat(0)), -1)) > 0) goto label_1;
	}
	{
	if ((floatCompare(((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_healAmount), (jfloat(0)), -1)) <= 0) goto label_2;
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

jbool M_mindustry_entities_bullet_BulletType_testCollision_mindustry_gen_Bullet_mindustry_gen_Building_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/BulletType:testCollision", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(460);
	jint temp0 = (jint)((func_mindustry_entities_bullet_BulletType_heals_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_bullet_BulletType_heals_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[2].o)))->F_team;
	sp[1].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_team;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	jfloat temp0 = (jfloat)((func_mindustry_gen_Building_healthf_R_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_gen_Building_healthf_R_float])(ctx, (frame[2].o));
	if ((floatCompare(temp0, (jfloat(1)), 1)) >= 0) goto label_2;
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

void M_mindustry_entities_bullet_BulletType_hitTile_mindustry_gen_Bullet_mindustry_gen_Building_float_float_float_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4, jbool param5) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/BulletType:hitTile", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	frame[6].i = param5;
	{
	LINE_NUMBER(466);
	if (((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_makeFire) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[2].o)))->F_team;
	sp[1].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_team;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	LINE_NUMBER(467);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[2].o)))->F_tile;
	SM_mindustry_entities_Fires_create_mindustry_world_Tile(ctx, sp[0].o);
	}
label_1:;
	{
	LINE_NUMBER(470);
	jint temp0 = (jint)((func_mindustry_entities_bullet_BulletType_heals_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_bullet_BulletType_heals_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[2].o)))->F_team;
	sp[1].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_team;
	if (sp[0].o != sp[1].o) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[2].o)))->F_block;
	if ((isInstance(ctx, sp[0].o, &class_mindustry_world_blocks_ConstructBlock)) != 0) goto label_3;
	}
	{
	LINE_NUMBER(471);
	sp[0].o = (jobject)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_healEffect;
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[2].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[2].o)))->F_y;
	jfloat temp2 = jfloat(0);
	sp[1].o = (jobject)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_healColor;
	sp[2].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[2].o)))->F_block;
	((func_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color_java_lang_Object])(ctx, sp[0].o, temp0, temp1, temp2, sp[1].o, sp[2].o);
	LINE_NUMBER(472);
	((func_mindustry_gen_Building_heal_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_gen_Building_heal_float])(ctx, (frame[2].o), (((((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_healPercent) / (jfloat(100.0f))) * ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[2].o)))->F_maxHealth)) + ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_healAmount)));
	LINE_NUMBER(473);
	sp[0].o = (jobject)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_healSound;
	sp[1].o = frame[2].o;
	jfloat temp3 = jfloat(1);
	jfloat temp4 = (jfloat)SM_arc_math_Mathf_range_float_R_float(ctx, (jfloat(0.1f)));
	jint temp5 = (jint)((func_arc_audio_Sound_at_arc_math_geom_Position_float_float_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Sound_at_arc_math_geom_Position_float_float_R_int])(ctx, sp[0].o, sp[1].o, (temp3 + temp4), ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_healSoundVolume));
	LINE_NUMBER(475);
	((func_mindustry_entities_bullet_BulletType_hit_mindustry_gen_Bullet) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_bullet_BulletType_hit_mindustry_gen_Bullet])(ctx, (frame[0].o), (frame[1].o));
	goto label_8;
	}
label_3:;
	{
	LINE_NUMBER(476);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[2].o)))->F_team;
	sp[1].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_team;
	if (sp[0].o == sp[1].o) goto label_8;
	}
	INST_ILOAD(6);
	if ((--sp)->i == 0) goto label_8;
	{
	LINE_NUMBER(477);
	((func_mindustry_entities_bullet_BulletType_hit_mindustry_gen_Bullet) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_bullet_BulletType_hit_mindustry_gen_Bullet])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(479);
	if ((floatCompare(((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_lifesteal), (jfloat(0)), -1)) <= 0) goto label_8;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_owner;
	frame[8].o = sp[0].o;
	if ((isInstance(ctx, (frame[8].o), &class_mindustry_gen_Healthc)) == 0) goto label_8;
	}
	{
	frame[7].o = (checkCast(ctx, &class_mindustry_gen_Healthc, (frame[8].o)));
	LINE_NUMBER(480);
	jfloat temp0 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[2].o)))->F_health), ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_damage));
	jfloat temp1 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp0, (jfloat(0)));
	frame[8].f = temp1;
	LINE_NUMBER(481);
	((func_mindustry_gen_Healthc_heal_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Healthc, INDEX_mindustry_gen_Healthc_heal_float, (frame[7].o)))(ctx, (frame[7].o), ((frame[8].f) * ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_lifesteal)));
	}
label_8:;
	{
	LINE_NUMBER(485);
	((func_mindustry_entities_bullet_BulletType_handlePierce_mindustry_gen_Bullet_float_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_bullet_BulletType_handlePierce_mindustry_gen_Bullet_float_float_float])(ctx, (frame[0].o), (frame[1].o), (frame[5].f), (frame[3].f), (frame[4].f));
	LINE_NUMBER(486);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_bullet_BulletType_hitEntity_mindustry_gen_Bullet_mindustry_gen_Hitboxc_float(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/BulletType:hitEntity", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(489);
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_gen_Unit)) == 0) goto label_1;
	}
	{
	frame[5].o = (checkCast(ctx, &class_mindustry_gen_Unit, (frame[2].o)));
	if (((jint)((mindustry_gen_Unit *) NULL_CHECK((frame[5].o)))->F_dead) == 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_3;
label_1:;
	INST_ICONST(0);
label_3:;
	{
	sp -= 1;
	frame[4].i = sp[0].i;
	LINE_NUMBER(491);
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_gen_Healthc)) == 0) goto label_5;
	}
	{
	frame[5].o = (checkCast(ctx, &class_mindustry_gen_Healthc, (frame[2].o)));
	LINE_NUMBER(492);
	frame[6].f = ((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_damage);
	LINE_NUMBER(493);
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_gen_Shieldc)) == 0) goto label_8;
	}
	{
	frame[8].o = (checkCast(ctx, &class_mindustry_gen_Shieldc, (frame[2].o)));
	jfloat temp0 = (jfloat)((func_mindustry_gen_Shieldc_shield_R_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Shieldc, INDEX_mindustry_gen_Shieldc_shield_R_float, (frame[8].o)))(ctx, (frame[8].o));
	jfloat temp1 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp0, (jfloat(0)));
	sp[0].f = temp1;
	sp += 1;
	goto label_10;
	}
label_8:;
	INST_FCONST(0);
label_10:;
	{
	sp -= 1;
	frame[7].f = sp[0].f;
	LINE_NUMBER(494);
	if ((floatCompare(((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_maxDamageFraction), (jfloat(0)), -1)) <= 0) goto label_12;
	}
	{
	LINE_NUMBER(495);
	jfloat temp0 = (jfloat)((func_mindustry_gen_Healthc_maxHealth_R_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Healthc, INDEX_mindustry_gen_Healthc_maxHealth_R_float, (frame[5].o)))(ctx, (frame[5].o));
	frame[8].f = ((temp0 * ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_maxDamageFraction)) + (frame[7].f));
	LINE_NUMBER(496);
	jfloat temp1 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, (frame[6].f), (frame[8].f));
	frame[6].f = temp1;
	LINE_NUMBER(498);
	jfloat temp2 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, (frame[3].f), (frame[8].f));
	frame[3].f = temp2;
	LINE_NUMBER(499);
	goto label_17;
	}
label_12:;
	{
	LINE_NUMBER(500);
	frame[3].f = ((frame[3].f) + (frame[7].f));
	}
label_17:;
	{
	LINE_NUMBER(502);
	if ((floatCompare(((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_lifesteal), (jfloat(0)), -1)) <= 0) goto label_18;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_owner;
	frame[9].o = sp[0].o;
	if ((isInstance(ctx, (frame[9].o), &class_mindustry_gen_Healthc)) == 0) goto label_18;
	}
	{
	frame[8].o = (checkCast(ctx, &class_mindustry_gen_Healthc, (frame[9].o)));
	LINE_NUMBER(503);
	jfloat temp0 = (jfloat)((func_mindustry_gen_Healthc_health_R_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Healthc, INDEX_mindustry_gen_Healthc_health_R_float, (frame[5].o)))(ctx, (frame[5].o));
	jfloat temp1 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, temp0, (frame[6].f));
	jfloat temp2 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp1, (jfloat(0)));
	frame[9].f = temp2;
	LINE_NUMBER(504);
	((func_mindustry_gen_Healthc_heal_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Healthc, INDEX_mindustry_gen_Healthc_heal_float, (frame[8].o)))(ctx, (frame[8].o), ((frame[9].f) * ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_lifesteal)));
	}
label_18:;
	{
	LINE_NUMBER(506);
	if (((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_pierceArmor) == 0) goto label_21;
	}
	{
	LINE_NUMBER(507);
	((func_mindustry_gen_Healthc_damagePierce_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Healthc, INDEX_mindustry_gen_Healthc_damagePierce_float, (frame[5].o)))(ctx, (frame[5].o), (frame[6].f));
	goto label_5;
	}
label_21:;
	{
	LINE_NUMBER(508);
	if ((floatCompare(((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_armorMultiplier), (jfloat(1)), -1)) == 0) goto label_23;
	}
	{
	LINE_NUMBER(509);
	((func_mindustry_gen_Healthc_damageArmorMult_float_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Healthc, INDEX_mindustry_gen_Healthc_damageArmorMult_float_float, (frame[5].o)))(ctx, (frame[5].o), (frame[6].f), ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_armorMultiplier));
	goto label_5;
	}
label_23:;
	{
	LINE_NUMBER(511);
	((func_mindustry_gen_Healthc_damage_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Healthc, INDEX_mindustry_gen_Healthc_damage_float, (frame[5].o)))(ctx, (frame[5].o), (frame[6].f));
	}
label_5:;
	{
	LINE_NUMBER(515);
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_gen_Unit)) == 0) goto label_25;
	}
	{
	frame[5].o = (checkCast(ctx, &class_mindustry_gen_Unit, (frame[2].o)));
	LINE_NUMBER(516);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[5].o)))->F_type;
	if ((floatCompare(((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_knockbackMultiplier), (jfloat(0)), -1)) <= 0) goto label_27;
	}
	{
	LINE_NUMBER(517);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v3;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_arc_math_geom_Position_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Position_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[5].o));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_sub_arc_math_geom_Position_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_sub_arc_math_geom_Position_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[1].o));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_nor_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_nor_R_arc_math_geom_Vec2])(ctx, sp[0].o);
	jfloat temp0 = ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_knockback) * (jfloat(80.0f));
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[5].o)))->F_type;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_scl_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_scl_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (temp0 * ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_knockbackMultiplier)));
	LINE_NUMBER(518);
	if (((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_impact) == 0) goto label_30;
	}
	{
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v3;
	jfloat temp0 = (jfloat)((func_mindustry_gen_Bullet_rotation_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Bullet_rotation_R_float])(ctx, (frame[1].o));
	sp[1].f = temp0;
	sp += 2;
	if ((floatCompare(((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_knockback), (jfloat(0)), 1)) >= 0) goto label_31;
	}
	(sp++)->f = jfloat(180.0f);
	goto label_32;
label_31:;
	INST_FCONST(0);
label_32:;
	{
	sp -= 3;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_setAngle_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_setAngle_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (sp[1].f + sp[2].f));
	}
label_30:;
	{
	LINE_NUMBER(519);
	sp[0].o = frame[5].o;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v3;
	((func_mindustry_gen_Unit_impulse_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_impulse_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	}
label_27:;
	{
	LINE_NUMBER(522);
	jint temp0 = (jint)SM_arc_math_Mathf_chance_double_R_boolean(ctx, (jdouble(((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_statusChance))));
	if (temp0 == 0) goto label_33;
	}
	{
	LINE_NUMBER(523);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_status;
	((func_mindustry_gen_Unit_apply_mindustry_type_StatusEffect_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_apply_mindustry_type_StatusEffect_float])(ctx, sp[0].o, sp[1].o, ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_statusDuration));
	}
label_33:;
	{
	LINE_NUMBER(526);
	clinit_mindustry_entities_bullet_BulletType(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_bullet_BulletType_bulletDamageEvent;
	sp[0].o = (jobject)((func_mindustry_game_EventType$UnitDamageEvent_set_mindustry_gen_Unit_mindustry_gen_Bullet_R_mindustry_game_EventType$UnitDamageEvent) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_EventType$UnitDamageEvent_set_mindustry_gen_Unit_mindustry_gen_Bullet_R_mindustry_game_EventType$UnitDamageEvent])(ctx, sp[0].o, (frame[5].o), (frame[1].o));
	SM_arc_Events_fire_java_lang_Object(ctx, sp[0].o);
	}
label_25:;
	{
	LINE_NUMBER(529);
	if ((frame[4].i) != 0) goto label_35;
	}
	{
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_gen_Unit)) == 0) goto label_35;
	}
	{
	frame[5].o = (checkCast(ctx, &class_mindustry_gen_Unit, (frame[2].o)));
	if (((jint)((mindustry_gen_Unit *) NULL_CHECK((frame[5].o)))->F_dead) == 0) goto label_35;
	}
	{
	LINE_NUMBER(530);
	clinit_mindustry_game_EventType$UnitBulletDestroyEvent(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$UnitBulletDestroyEvent);
	init_mindustry_game_EventType$UnitBulletDestroyEvent_mindustry_gen_Unit_mindustry_gen_Bullet(ctx, sp[0].o, (frame[5].o), (frame[1].o));
	SM_arc_Events_fire_java_lang_Object(ctx, sp[0].o);
	}
label_35:;
	{
	LINE_NUMBER(533);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jfloat temp0 = frame[3].f;
	jfloat temp1 = (jfloat)((func_mindustry_gen_Posc_x_R_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Posc, INDEX_mindustry_gen_Posc_x_R_float, (frame[2].o)))(ctx, (frame[2].o));
	jfloat temp2 = (jfloat)((func_mindustry_gen_Posc_y_R_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Posc, INDEX_mindustry_gen_Posc_y_R_float, (frame[2].o)))(ctx, (frame[2].o));
	((func_mindustry_entities_bullet_BulletType_handlePierce_mindustry_gen_Bullet_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_bullet_BulletType_handlePierce_mindustry_gen_Bullet_float_float_float])(ctx, sp[0].o, sp[1].o, temp0, temp1, temp2);
	LINE_NUMBER(534);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_bullet_BulletType_handlePierce_mindustry_gen_Bullet_float_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/BulletType:handlePierce", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(537);
	jint temp0 = (jint)SM_arc_math_Mathf_zero_float_R_boolean(ctx, ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_pierceDamageFactor));
	if (temp0 == 0) goto label_1;
	}
	INST_FCONST(0);
	goto label_2;
label_1:;
	{
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((frame[2].f) * ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_pierceDamageFactor)), (jfloat(0)));
	sp[0].f = temp0;
	sp += 1;
	}
label_2:;
	{
	sp -= 1;
	frame[5].f = sp[0].f;
	LINE_NUMBER(539);
	sp[0].o = frame[1].o;
	jfloat temp0 = (jfloat)((mindustry_gen_Bullet *) NULL_CHECK(sp[0].o))->F_damage;
	jint temp1 = (jint)SM_java_lang_Float_isNaN_float_R_boolean(ctx, (frame[5].f));
	sp[1].f = temp0;
	sp += 2;
	if (temp1 == 0) goto label_4;
	}
	{
	jfloat temp0 = (jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_damage;
	sp[0].f = temp0;
	sp += 1;
	goto label_5;
	}
label_4:;
	{
	jfloat temp0 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, ((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_damage), (frame[5].f));
	sp[0].f = temp0;
	sp += 1;
	}
label_5:;
	{
	sp -= 3;
	((mindustry_gen_Bullet *) NULL_CHECK(sp[0].o))->F_damage = (sp[1].f - sp[2].f);
	LINE_NUMBER(541);
	if (((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_removeAfterPierce) == 0) goto label_7;
	}
	{
	if ((floatCompare(((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_damage), (jfloat(0)), 1)) > 0) goto label_7;
	}
	{
	LINE_NUMBER(542);
	((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_hit = (jint(1));
	LINE_NUMBER(543);
	((func_mindustry_gen_Bullet_remove) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Bullet_remove])(ctx, (frame[1].o));
	}
label_7:;
	LINE_NUMBER(545);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jfloat M_mindustry_entities_bullet_BulletType_damageMultiplier_mindustry_gen_Bullet_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/BulletType:damageMultiplier", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(548);
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_owner;
	frame[3].o = sp[0].o;
	if ((isInstance(ctx, (frame[3].o), &class_mindustry_gen_Unit)) == 0) goto label_1;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_gen_Unit, (frame[3].o)));
	jfloat temp0 = (jfloat)((func_mindustry_gen_Unit_damageMultiplier_R_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_gen_Unit_damageMultiplier_R_float])(ctx, (frame[2].o));
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[1].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_team;
	jfloat temp1 = (jfloat)((func_mindustry_game_Rules_unitDamage_mindustry_game_Team_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Rules_unitDamage_mindustry_game_Team_R_float])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return (temp0 * temp1);
	}
label_1:;
	{
	LINE_NUMBER(549);
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_owner;
	if ((isInstance(ctx, sp[0].o, &class_mindustry_gen_Building)) == 0) goto label_3;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[1].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_team;
	jfloat temp0 = (jfloat)((func_mindustry_game_Rules_blockDamage_mindustry_game_Team_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Rules_blockDamage_mindustry_game_Team_R_float])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return temp0;
	}
label_3:;
	{
	LINE_NUMBER(551);
	popStackFrame(ctx);
	return (jfloat(1));
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_bullet_BulletType_hit_mindustry_gen_Bullet(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/BulletType:hit", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(555);
	((func_mindustry_entities_bullet_BulletType_hit_mindustry_gen_Bullet_float_float_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_bullet_BulletType_hit_mindustry_gen_Bullet_float_float_boolean])(ctx, (frame[0].o), (frame[1].o), ((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_y), (jint(1)));
	LINE_NUMBER(556);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_bullet_BulletType_hit_mindustry_gen_Bullet_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/BulletType:hit", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(559);
	((func_mindustry_entities_bullet_BulletType_hit_mindustry_gen_Bullet_float_float_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_bullet_BulletType_hit_mindustry_gen_Bullet_float_float_boolean])(ctx, (frame[0].o), (frame[1].o), (frame[2].f), (frame[3].f), (jint(1)));
	LINE_NUMBER(560);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_bullet_BulletType_hit_mindustry_gen_Bullet_float_float_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jbool param3) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/BulletType:hit", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(563);
	sp[0].o = (jobject)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_hitEffect;
	jfloat temp0 = frame[2].f;
	jfloat temp1 = frame[3].f;
	jfloat temp2 = (jfloat)((func_mindustry_gen_Bullet_rotation_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Bullet_rotation_R_float])(ctx, (frame[1].o));
	sp[1].o = (jobject)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_hitColor;
	((func_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color])(ctx, sp[0].o, temp0, temp1, temp2, sp[1].o);
	LINE_NUMBER(564);
	sp[0].o = (jobject)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_hitSound;
	jfloat temp3 = frame[2].f;
	jfloat temp4 = frame[3].f;
	jfloat temp5 = (jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_hitSoundPitch;
	jfloat temp6 = (jfloat)SM_arc_math_Mathf_range_float_R_float(ctx, ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_hitSoundPitchRange));
	jint temp7 = (jint)((func_arc_audio_Sound_at_float_float_float_float_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Sound_at_float_float_float_float_R_int])(ctx, sp[0].o, temp3, temp4, (temp5 + temp6), ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_hitSoundVolume));
	LINE_NUMBER(566);
	SM_mindustry_entities_Effect_shake_float_float_arc_math_geom_Position(ctx, ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_hitShake), ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_hitShake), (frame[1].o));
	LINE_NUMBER(568);
	if ((frame[4].i) == 0) goto label_4;
	}
	{
	if (((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_fragOnHit) == 0) goto label_4;
	}
	{
	LINE_NUMBER(569);
	if (((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_delayFrags) == 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_fragBullet;
	if (sp[0].o == nullptr) goto label_6;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_fragBullet;
	if (((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_delayFrags) == 0) goto label_6;
	}
	{
	LINE_NUMBER(570);
	jfloat temp0 = jfloat(0);
	{ /* InvokeDynamic */
		clinit_mindustry_entities_bullet_BulletType_invoke_java_lang_Runnable_1(ctx);
		auto proxy = (mindustry_entities_bullet_BulletType_invoke_java_lang_Runnable_1 *) gcAlloc(ctx, &class_mindustry_entities_bullet_BulletType_invoke_java_lang_Runnable_1);
		proxy->F_field3 = (frame[3].f);
		proxy->F_field2 = (frame[2].f);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	SM_arc_util_Time_run_float_java_lang_Runnable(ctx, temp0, sp[0].o);
	goto label_4;
	}
label_6:;
	{
	LINE_NUMBER(572);
	((func_mindustry_entities_bullet_BulletType_createFrags_mindustry_gen_Bullet_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_bullet_BulletType_createFrags_mindustry_gen_Bullet_float_float])(ctx, (frame[0].o), (frame[1].o), (frame[2].f), (frame[3].f));
	}
label_4:;
	{
	LINE_NUMBER(575);
	((func_mindustry_entities_bullet_BulletType_createPuddles_mindustry_gen_Bullet_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_bullet_BulletType_createPuddles_mindustry_gen_Bullet_float_float])(ctx, (frame[0].o), (frame[1].o), (frame[2].f), (frame[3].f));
	LINE_NUMBER(576);
	((func_mindustry_entities_bullet_BulletType_createIncend_mindustry_gen_Bullet_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_bullet_BulletType_createIncend_mindustry_gen_Bullet_float_float])(ctx, (frame[0].o), (frame[1].o), (frame[2].f), (frame[3].f));
	LINE_NUMBER(577);
	((func_mindustry_entities_bullet_BulletType_createUnits_mindustry_gen_Bullet_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_bullet_BulletType_createUnits_mindustry_gen_Bullet_float_float])(ctx, (frame[0].o), (frame[1].o), (frame[2].f), (frame[3].f));
	LINE_NUMBER(579);
	if ((floatCompare(((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_suppressionRange), (jfloat(0)), -1)) <= 0) goto label_11;
	}
	{
	LINE_NUMBER(581);
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_team;
	jfloat temp0 = (jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_y;
	jfloat temp2 = (jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_suppressionRange;
	jfloat temp3 = (jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_suppressionDuration;
	jfloat temp4 = jfloat(0);
	jfloat temp5 = (jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_suppressionEffectChance;
	clinit_arc_math_geom_Vec2(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2_float_float(ctx, sp[1].o, ((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_y));
	sp[2].o = (jobject)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_suppressColor;
	SM_mindustry_entities_Damage_applySuppression_mindustry_game_Team_float_float_float_float_float_float_arc_math_geom_Position_arc_graphics_Color(ctx, sp[0].o, temp0, temp1, temp2, temp3, temp4, temp5, sp[1].o, sp[2].o);
	}
label_11:;
	{
	LINE_NUMBER(584);
	((func_mindustry_entities_bullet_BulletType_createSplashDamage_mindustry_gen_Bullet_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_bullet_BulletType_createSplashDamage_mindustry_gen_Bullet_float_float])(ctx, (frame[0].o), (frame[1].o), (frame[2].f), (frame[3].f));
	LINE_NUMBER(586);
	frame[5].i = (jint(0));
	}
label_14:;
	{
	if ((frame[5].i) >= ((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_lightning)) goto label_15;
	}
	{
	LINE_NUMBER(587);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_lightningColor;
	sp += 2;
	if ((floatCompare(((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_lightningDamage), (jfloat(0)), 1)) >= 0) goto label_17;
	}
	{
	jfloat temp0 = (jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_damage;
	sp[0].f = temp0;
	sp += 1;
	goto label_18;
	}
label_17:;
	INST_ALOAD(0);
	sp[-1].f = ((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[-1].o))->F_lightningDamage;
label_18:;
	{
	sp -= 3;
	jfloat temp0 = (jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_y;
	jfloat temp2 = (jfloat)((func_mindustry_gen_Bullet_rotation_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Bullet_rotation_R_float])(ctx, (frame[1].o));
	jfloat temp3 = (jfloat)SM_arc_math_Mathf_range_float_R_float(ctx, (((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_lightningCone) / (jfloat(2))));
	jfloat temp4 = (temp2 + temp3) + ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_lightningAngle);
	jint temp5 = (jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_lightningLength;
	jint temp6 = (jint)SM_arc_math_Mathf_random_int_R_int(ctx, ((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_lightningLengthRand));
	SM_mindustry_entities_Lightning_create_mindustry_gen_Bullet_arc_graphics_Color_float_float_float_float_int(ctx, sp[0].o, sp[1].o, sp[2].f, temp0, temp1, temp4, (temp5 + temp6));
	LINE_NUMBER(586);
	INST_IINC(5, 1);
	goto label_14;
	}
label_15:;
	LINE_NUMBER(589);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_bullet_BulletType_createIncend_mindustry_gen_Bullet_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/BulletType:createIncend", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(592);
	if ((floatCompare(((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_incendChance), (jfloat(0)), -1)) <= 0) goto label_1;
	}
	{
	jint temp0 = (jint)SM_arc_math_Mathf_chance_double_R_boolean(ctx, (jdouble(((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_incendChance))));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(593);
	SM_mindustry_entities_Damage_createIncend_float_float_float_int(ctx, (frame[2].f), (frame[3].f), ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_incendSpread), ((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_incendAmount));
	}
label_1:;
	LINE_NUMBER(595);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_bullet_BulletType_createPuddles_mindustry_gen_Bullet_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/BulletType:createPuddles", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(598);
	sp[0].o = (jobject)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_puddleLiquid;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	if (((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_puddles) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(599);
	frame[4].i = (jint(0));
	}
label_3:;
	{
	if ((frame[4].i) >= ((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_puddles)) goto label_1;
	}
	{
	LINE_NUMBER(600);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jfloat temp0 = frame[2].f;
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_range_float_R_float(ctx, ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_puddleRange));
	jfloat temp2 = temp0 + temp1;
	jfloat temp3 = frame[3].f;
	jfloat temp4 = (jfloat)SM_arc_math_Mathf_range_float_R_float(ctx, ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_puddleRange));
	sp[0].o = (jobject)((func_mindustry_core_World_tileWorld_float_float_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tileWorld_float_float_R_mindustry_world_Tile])(ctx, sp[0].o, temp2, (temp3 + temp4));
	frame[5].o = sp[0].o;
	LINE_NUMBER(601);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_puddleLiquid;
	SM_mindustry_entities_Puddles_deposit_mindustry_world_Tile_mindustry_type_Liquid_float(ctx, sp[0].o, sp[1].o, ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_puddleAmount));
	LINE_NUMBER(599);
	INST_IINC(4, 1);
	goto label_3;
	}
label_1:;
	LINE_NUMBER(604);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_bullet_BulletType_createSplashDamage_mindustry_gen_Bullet_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/BulletType:createSplashDamage", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(607);
	if ((floatCompare(((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_splashDamageRadius), (jfloat(0)), -1)) <= 0) goto label_1;
	}
	{
	if (((jint)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_absorbed) != 0) goto label_1;
	}
	{
	LINE_NUMBER(608);
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_team;
	jfloat temp0 = frame[2].f;
	jfloat temp1 = frame[3].f;
	jfloat temp2 = (jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_splashDamageRadius;
	jfloat temp3 = (jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_splashDamage;
	jfloat temp4 = (jfloat)((func_mindustry_gen_Bullet_damageMultiplier_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Bullet_damageMultiplier_R_float])(ctx, (frame[1].o));
	SM_mindustry_entities_Damage_damage_mindustry_game_Team_float_float_float_float_boolean_boolean_boolean_boolean_mindustry_gen_Bullet_float(ctx, sp[0].o, temp0, temp1, temp2, (temp3 * temp4), ((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_splashDamagePierce), ((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_collidesAir), ((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_collidesGround), ((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_scaledSplashDamage), (frame[1].o), ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_armorMultiplier));
	LINE_NUMBER(610);
	sp[0].o = (jobject)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_status;
	clinit_mindustry_content_StatusEffects(ctx);
	sp[1].o = (jobject)SF_mindustry_content_StatusEffects_none;
	if (sp[0].o == sp[1].o) goto label_4;
	}
	{
	LINE_NUMBER(611);
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_team;
	jfloat temp0 = frame[2].f;
	jfloat temp1 = frame[3].f;
	jfloat temp2 = (jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_splashDamageRadius;
	sp[1].o = (jobject)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_status;
	SM_mindustry_entities_Damage_status_mindustry_game_Team_float_float_float_mindustry_type_StatusEffect_float_boolean_boolean_float(ctx, sp[0].o, temp0, temp1, temp2, sp[1].o, ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_statusDuration), ((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_collidesAir), ((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_collidesGround), ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_statusChance));
	}
label_4:;
	{
	LINE_NUMBER(614);
	jint temp0 = (jint)((func_mindustry_entities_bullet_BulletType_heals_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_bullet_BulletType_heals_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_6;
	}
	{
	LINE_NUMBER(615);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_indexer;
	sp[1].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_team;
	jfloat temp0 = frame[2].f;
	jfloat temp1 = frame[3].f;
	jfloat temp2 = (jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_splashDamageRadius;
	{ /* InvokeDynamic */
		clinit_mindustry_entities_bullet_BulletType_invoke_arc_func_Boolf_6(ctx);
		auto proxy = (mindustry_entities_bullet_BulletType_invoke_arc_func_Boolf_6 *) gcAlloc(ctx, &class_mindustry_entities_bullet_BulletType_invoke_arc_func_Boolf_6);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_entities_bullet_BulletType_invoke_arc_func_Cons_2(ctx);
		auto proxy = (mindustry_entities_bullet_BulletType_invoke_arc_func_Cons_2 *) gcAlloc(ctx, &class_mindustry_entities_bullet_BulletType_invoke_arc_func_Cons_2);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	jint temp3 = (jint)((func_mindustry_ai_BlockIndexer_eachBlock_mindustry_game_Team_float_float_float_arc_func_Boolf_arc_func_Cons_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_BlockIndexer_eachBlock_mindustry_game_Team_float_float_float_arc_func_Boolf_arc_func_Cons_R_boolean])(ctx, sp[0].o, sp[1].o, temp0, temp1, temp2, sp[2].o, sp[3].o);
	}
label_6:;
	{
	LINE_NUMBER(621);
	if (((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_makeFire) == 0) goto label_1;
	}
	{
	LINE_NUMBER(622);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_indexer;
	sp[1].o = jobject(nullptr);
	jfloat temp0 = frame[2].f;
	jfloat temp1 = frame[3].f;
	jfloat temp2 = (jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_splashDamageRadius;
	{ /* InvokeDynamic */
		clinit_mindustry_entities_bullet_BulletType_invoke_arc_func_Boolf_7(ctx);
		auto proxy = (mindustry_entities_bullet_BulletType_invoke_arc_func_Boolf_7 *) gcAlloc(ctx, &class_mindustry_entities_bullet_BulletType_invoke_arc_func_Boolf_7);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_entities_bullet_BulletType_invoke_arc_func_Cons_3(ctx);
		auto proxy = (mindustry_entities_bullet_BulletType_invoke_arc_func_Cons_3 *) gcAlloc(ctx, &class_mindustry_entities_bullet_BulletType_invoke_arc_func_Cons_3);
		sp[3].o = (jobject) proxy;
	}
	jint temp3 = (jint)((func_mindustry_ai_BlockIndexer_eachBlock_mindustry_game_Team_float_float_float_arc_func_Boolf_arc_func_Cons_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_BlockIndexer_eachBlock_mindustry_game_Team_float_float_float_arc_func_Boolf_arc_func_Cons_R_boolean])(ctx, sp[0].o, sp[1].o, temp0, temp1, temp2, sp[2].o, sp[3].o);
	}
label_1:;
	LINE_NUMBER(625);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_bullet_BulletType_createFrags_mindustry_gen_Bullet_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/BulletType:createFrags", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(628);
	sp[0].o = (jobject)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_fragBullet;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	if (((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_fragOnAbsorb) != 0) goto label_2;
	}
	{
	if (((jint)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_absorbed) != 0) goto label_1;
	}
label_2:;
	{
	if (((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_pierceFragCap) < 0) goto label_3;
	}
	{
	if (((jint)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_frags) >= ((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_pierceFragCap)) goto label_1;
	}
label_3:;
	{
	LINE_NUMBER(629);
	frame[4].i = (jint(0));
	}
label_4:;
	{
	if ((frame[4].i) >= ((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_fragBullets)) goto label_5;
	}
	{
	LINE_NUMBER(630);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_random_float_float_R_float(ctx, ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_fragOffsetMin), ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_fragOffsetMax));
	frame[5].f = temp0;
	LINE_NUMBER(631);
	jfloat temp1 = (jfloat)((func_mindustry_gen_Bullet_rotation_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Bullet_rotation_R_float])(ctx, (frame[1].o));
	jfloat temp2 = (jfloat)SM_arc_math_Mathf_range_float_R_float(ctx, (((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_fragRandomSpread) / (jfloat(2))));
	frame[6].f = ((((temp1 + temp2) + ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_fragAngle)) + (((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_fragSpread) * (jfloat((frame[4].i))))) - (((jfloat((((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_fragBullets) - (jint(1))))) * ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_fragSpread)) / (jfloat(2))));
	LINE_NUMBER(632);
	sp[0].o = (jobject)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_fragBullet;
	sp[1].o = frame[1].o;
	jfloat temp3 = frame[2].f;
	jfloat temp4 = (jfloat)SM_arc_math_Angles_trnsx_float_float_R_float(ctx, (frame[6].f), (frame[5].f));
	jfloat temp5 = temp3 + temp4;
	jfloat temp6 = frame[3].f;
	jfloat temp7 = (jfloat)SM_arc_math_Angles_trnsy_float_float_R_float(ctx, (frame[6].f), (frame[5].f));
	jfloat temp8 = temp6 + temp7;
	jfloat temp9 = frame[6].f;
	jfloat temp10 = (jfloat)SM_arc_math_Mathf_random_float_float_R_float(ctx, ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_fragVelocityMin), ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_fragVelocityMax));
	jfloat temp11 = (jfloat)SM_arc_math_Mathf_random_float_float_R_float(ctx, ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_fragLifeMin), ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_fragLifeMax));
	sp[0].o = (jobject)((func_mindustry_entities_bullet_BulletType_create_mindustry_gen_Bullet_float_float_float_float_float_R_mindustry_gen_Bullet) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_bullet_BulletType_create_mindustry_gen_Bullet_float_float_float_float_float_R_mindustry_gen_Bullet])(ctx, sp[0].o, sp[1].o, temp5, temp8, temp9, temp10, temp11);
	LINE_NUMBER(629);
	INST_IINC(4, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(634);
	sp[0].o = frame[1].o;
	((mindustry_gen_Bullet *) NULL_CHECK(sp[0].o))->F_frags = (((jint)((mindustry_gen_Bullet *) NULL_CHECK(sp[0].o))->F_frags) + (jint(1)));
	}
label_1:;
	LINE_NUMBER(636);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_bullet_BulletType_createUnits_mindustry_gen_Bullet_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/BulletType:createUnits", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(639);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_despawnUnit;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	jint temp0 = (jint)SM_arc_math_Mathf_chance_double_R_boolean(ctx, (jdouble(((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_despawnUnitChance))));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(640);
	frame[4].i = (jint(0));
	}
label_3:;
	{
	if ((frame[4].i) >= ((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_despawnUnitCount)) goto label_1;
	}
	{
	LINE_NUMBER(641);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_random_float_R_float(ctx, ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_despawnUnitRadius));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_rnd_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_rnd_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp0);
	LINE_NUMBER(642);
	sp[0].o = (jobject)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_despawnUnit;
	sp[1].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_team;
	jfloat temp1 = frame[2].f;
	clinit_arc_util_Tmp(ctx);
	sp[2].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp2 = temp1 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[2].o))->F_x);
	jfloat temp3 = frame[3].f;
	clinit_arc_util_Tmp(ctx);
	sp[2].o = (jobject)SF_arc_util_Tmp_v1;
	sp[0].o = (jobject)((func_mindustry_type_UnitType_spawn_mindustry_game_Team_float_float_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_UnitType_spawn_mindustry_game_Team_float_float_R_mindustry_gen_Unit])(ctx, sp[0].o, sp[1].o, temp2, (temp3 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[2].o))->F_y)));
	frame[5].o = sp[0].o;
	LINE_NUMBER(643);
	sp[0].o = frame[5].o;
	sp += 1;
	if (((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_faceOutwards) == 0) goto label_7;
	}
	{
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec2_angle_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_angle_R_float])(ctx, sp[0].o);
	sp[0].f = temp0;
	sp += 1;
	goto label_8;
	}
label_7:;
	INST_ALOAD(1);
	POP_N(1); // Pop method args
	sp->f = (jfloat)((func_mindustry_gen_Bullet_rotation_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Bullet_rotation_R_float])(ctx, sp[0].o);
	sp++;
label_8:;
	{
	sp -= 2;
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_rotation = sp[1].f;
	LINE_NUMBER(644);
	SM_mindustry_entities_Units_notifyUnitSpawn_mindustry_gen_Unit(ctx, (frame[5].o));
	LINE_NUMBER(640);
	INST_IINC(4, 1);
	goto label_3;
	}
label_1:;
	LINE_NUMBER(647);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_bullet_BulletType_despawned_mindustry_gen_Bullet(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/BulletType:despawned", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(651);
	if (((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_despawnHit) == 0) goto label_1;
	}
	{
	LINE_NUMBER(652);
	((func_mindustry_entities_bullet_BulletType_hit_mindustry_gen_Bullet_float_float_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_bullet_BulletType_hit_mindustry_gen_Bullet_float_float_boolean])(ctx, (frame[0].o), (frame[1].o), ((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_y), (jint(0)));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(654);
	((func_mindustry_entities_bullet_BulletType_createUnits_mindustry_gen_Bullet_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_bullet_BulletType_createUnits_mindustry_gen_Bullet_float_float])(ctx, (frame[0].o), (frame[1].o), ((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_y));
	}
label_3:;
	{
	LINE_NUMBER(657);
	sp[0].o = (jobject)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_despawnEffect;
	jfloat temp0 = (jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_y;
	jfloat temp2 = (jfloat)((func_mindustry_gen_Bullet_rotation_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Bullet_rotation_R_float])(ctx, (frame[1].o));
	sp[1].o = (jobject)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_hitColor;
	((func_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color])(ctx, sp[0].o, temp0, temp1, temp2, sp[1].o);
	LINE_NUMBER(658);
	sp[0].o = (jobject)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_despawnSound;
	sp[1].o = frame[1].o;
	jfloat temp3 = jfloat(1);
	jfloat temp4 = (jfloat)SM_arc_math_Mathf_range_float_R_float(ctx, ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_hitSoundPitchRange));
	jint temp5 = (jint)((func_arc_audio_Sound_at_arc_math_geom_Position_float_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Sound_at_arc_math_geom_Position_float_R_int])(ctx, sp[0].o, sp[1].o, (temp3 + temp4));
	LINE_NUMBER(660);
	SM_mindustry_entities_Effect_shake_float_float_arc_math_geom_Position(ctx, ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_despawnShake), ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_despawnShake), (frame[1].o));
	LINE_NUMBER(661);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_bullet_BulletType_removed_mindustry_gen_Bullet(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/BulletType:removed", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(665);
	if (((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_trailLength) <= 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_trail;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_trail;
	jint temp0 = (jint)((func_mindustry_graphics_Trail_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_Trail_size_R_int])(ctx, sp[0].o);
	if (temp0 <= 0) goto label_1;
	}
	{
	LINE_NUMBER(666);
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_trailFade;
	jfloat temp0 = (jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_y;
	jfloat temp2 = (jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_trailWidth;
	sp[1].o = (jobject)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_trailColor;
	sp[2].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_trail;
	sp[2].o = (jobject)((func_mindustry_graphics_Trail_copy_R_mindustry_graphics_Trail) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_graphics_Trail_copy_R_mindustry_graphics_Trail])(ctx, sp[2].o);
	((func_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color_java_lang_Object])(ctx, sp[0].o, temp0, temp1, temp2, sp[1].o, sp[2].o);
	}
label_1:;
	{
	LINE_NUMBER(669);
	if (((jint)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_frags) != 0) goto label_3;
	}
	{
	if (((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_fragOnDespawn) == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_fragBullet;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(670);
	((func_mindustry_entities_bullet_BulletType_createFrags_mindustry_gen_Bullet_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_bullet_BulletType_createFrags_mindustry_gen_Bullet_float_float])(ctx, (frame[0].o), (frame[1].o), ((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_y));
	}
label_3:;
	LINE_NUMBER(672);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jfloat M_mindustry_entities_bullet_BulletType_buildingDamage_mindustry_gen_Bullet_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/BulletType:buildingDamage", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(675);
	jfloat temp0 = (jfloat)((func_mindustry_gen_Bullet_damage_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Bullet_damage_R_float])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return (temp0 * ((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_buildingDamageMultiplier));
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_entities_bullet_BulletType_shieldDamage_mindustry_gen_Bullet_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/BulletType:shieldDamage", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(679);
	jfloat temp0 = (jfloat)((func_mindustry_gen_Bullet_damage_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Bullet_damage_R_float])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return (temp0 * ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_shieldDamageMultiplier));
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_bullet_BulletType_draw_mindustry_gen_Bullet(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/BulletType:draw", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(683);
	((func_mindustry_entities_bullet_BulletType_drawTrail_mindustry_gen_Bullet) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_bullet_BulletType_drawTrail_mindustry_gen_Bullet])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(684);
	((func_mindustry_entities_bullet_BulletType_drawParts_mindustry_gen_Bullet) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_bullet_BulletType_drawParts_mindustry_gen_Bullet])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(685);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_bullet_BulletType_drawTrail_mindustry_gen_Bullet(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/BulletType:drawTrail", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(688);
	if (((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_trailLength) <= 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_trail;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(690);
	jfloat temp0 = (jfloat)SM_arc_graphics_g2d_Draw_z_R_float(ctx);
	frame[2].f = temp0;
	LINE_NUMBER(691);
	SM_arc_graphics_g2d_Draw_z_float(ctx, ((frame[2].f) - (jfloat(1,000000e-04f))));
	LINE_NUMBER(692);
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_trail;
	sp[1].o = (jobject)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_trailColor;
	((func_mindustry_graphics_Trail_draw_arc_graphics_Color_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_Trail_draw_arc_graphics_Color_float])(ctx, sp[0].o, sp[1].o, ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_trailWidth));
	LINE_NUMBER(693);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (frame[2].f));
	}
label_1:;
	LINE_NUMBER(695);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_bullet_BulletType_drawParts_mindustry_gen_Bullet(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/BulletType:drawParts", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(698);
	sp[0].o = (jobject)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_parts;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(699);
	clinit_mindustry_entities_part_DrawPart(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_part_DrawPart_params;
	jfloat temp0 = (jfloat)((func_mindustry_gen_Bullet_fin_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Bullet_fin_R_float])(ctx, (frame[1].o));
	jfloat temp1 = jfloat(0);
	jfloat temp2 = jfloat(0);
	jfloat temp3 = jfloat(0);
	jfloat temp4 = jfloat(0);
	jfloat temp5 = jfloat(0);
	jfloat temp6 = (jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_x;
	jfloat temp7 = (jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_y;
	jfloat temp8 = (jfloat)((func_mindustry_gen_Bullet_rotation_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Bullet_rotation_R_float])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_mindustry_entities_part_DrawPart$PartParams_set_float_float_float_float_float_float_float_float_float_R_mindustry_entities_part_DrawPart$PartParams) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_part_DrawPart$PartParams_set_float_float_float_float_float_float_float_float_float_R_mindustry_entities_part_DrawPart$PartParams])(ctx, sp[0].o, temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8);
	LINE_NUMBER(700);
	clinit_mindustry_entities_part_DrawPart(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_part_DrawPart_params;
	jfloat temp9 = (jfloat)((func_mindustry_gen_Bullet_fin_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Bullet_fin_R_float])(ctx, (frame[1].o));
	((mindustry_entities_part_DrawPart$PartParams *) NULL_CHECK(sp[0].o))->F_life = temp9;
	LINE_NUMBER(702);
	frame[2].i = (jint(0));
	}
label_5:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_parts;
	if (temp0 >= ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_1;
	}
	{
	LINE_NUMBER(703);
	sp[0].o = (jobject)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_parts;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[2].i));
	sp[0].o = checkCast(ctx, &class_mindustry_entities_part_DrawPart, sp[0].o);
	clinit_mindustry_entities_part_DrawPart(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_part_DrawPart_params;
	((func_mindustry_entities_part_DrawPart_draw_mindustry_entities_part_DrawPart$PartParams) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_part_DrawPart_draw_mindustry_entities_part_DrawPart$PartParams])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(702);
	INST_IINC(2, 1);
	goto label_5;
	}
label_1:;
	LINE_NUMBER(706);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_bullet_BulletType_drawLight_mindustry_gen_Bullet(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/BulletType:drawLight", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(709);
	if ((floatCompare(((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_lightOpacity), (jfloat(0)), 1)) <= 0) goto label_1;
	}
	{
	if ((floatCompare(((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_lightRadius), (jfloat(0)), 1)) > 0) goto label_2;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(710);
	sp[0].o = frame[1].o;
	jfloat temp0 = (jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_lightRadius;
	sp[1].o = (jobject)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_lightColor;
	SM_mindustry_graphics_Drawf_light_arc_math_geom_Position_float_arc_graphics_Color_float(ctx, sp[0].o, temp0, sp[1].o, ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_lightOpacity));
	LINE_NUMBER(711);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_bullet_BulletType_init_mindustry_gen_Bullet(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/BulletType:init", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(715);
	if (((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_killShooter) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_mindustry_gen_Bullet_owner_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Bullet_owner_R_mindustry_gen_Entityc])(ctx, (frame[1].o));
	frame[3].o = sp[0].o;
	if ((isInstance(ctx, (frame[3].o), &class_mindustry_gen_Healthc)) == 0) goto label_1;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_gen_Healthc, (frame[3].o)));
	jint temp0 = (jint)((func_mindustry_gen_Healthc_dead_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_gen_Healthc, INDEX_mindustry_gen_Healthc_dead_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(716);
	((func_mindustry_gen_Healthc_kill) resolveInterfaceMethod(ctx, &class_mindustry_gen_Healthc, INDEX_mindustry_gen_Healthc_kill, (frame[2].o)))(ctx, (frame[2].o));
	}
label_1:;
	{
	LINE_NUMBER(719);
	if (((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_instantDisappear) == 0) goto label_4;
	}
	{
	LINE_NUMBER(720);
	((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_time = (((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_lifetime) + (jfloat(1)));
	}
label_4:;
	{
	LINE_NUMBER(723);
	sp[0].o = (jobject)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_spawnBullets;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_6;
	}
	{
	LINE_NUMBER(724);
	sp[0].o = (jobject)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_spawnBullets;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_8:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_mindustry_entities_bullet_BulletType, sp[0].o));
	LINE_NUMBER(725);
	sp[0].o = frame[3].o;
	sp[1].o = frame[1].o;
	jfloat temp0 = (jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_y;
	jfloat temp2 = (jfloat)((func_mindustry_gen_Bullet_rotation_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Bullet_rotation_R_float])(ctx, (frame[1].o));
	jfloat temp3 = (jfloat)SM_arc_math_Mathf_range_float_R_float(ctx, ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_spawnBulletRandomSpread));
	sp[0].o = (jobject)((func_mindustry_entities_bullet_BulletType_create_mindustry_gen_Bullet_float_float_float_R_mindustry_gen_Bullet) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_bullet_BulletType_create_mindustry_gen_Bullet_float_float_float_R_mindustry_gen_Bullet])(ctx, sp[0].o, sp[1].o, temp0, temp1, (temp2 + temp3));
	LINE_NUMBER(726);
	goto label_8;
	}
label_6:;
	LINE_NUMBER(728);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_bullet_BulletType_update_mindustry_gen_Bullet(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/BulletType:update", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(731);
	((func_mindustry_entities_bullet_BulletType_updateTrail_mindustry_gen_Bullet) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_bullet_BulletType_updateTrail_mindustry_gen_Bullet])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(732);
	((func_mindustry_entities_bullet_BulletType_updateHoming_mindustry_gen_Bullet) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_bullet_BulletType_updateHoming_mindustry_gen_Bullet])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(733);
	((func_mindustry_entities_bullet_BulletType_updateWeaving_mindustry_gen_Bullet) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_bullet_BulletType_updateWeaving_mindustry_gen_Bullet])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(734);
	((func_mindustry_entities_bullet_BulletType_updateTrailEffects_mindustry_gen_Bullet) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_bullet_BulletType_updateTrailEffects_mindustry_gen_Bullet])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(735);
	((func_mindustry_entities_bullet_BulletType_updateBulletInterval_mindustry_gen_Bullet) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_bullet_BulletType_updateBulletInterval_mindustry_gen_Bullet])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(736);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_bullet_BulletType_updateBulletInterval_mindustry_gen_Bullet(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/BulletType:updateBulletInterval", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(739);
	sp[0].o = (jobject)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_intervalBullet;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	if ((floatCompare(((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_time), ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_intervalDelay), -1)) < 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_timer;
	jint temp0 = (jint)((func_arc_util_Interval_get_int_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_Interval_get_int_float_R_boolean])(ctx, sp[0].o, (jint(2)), ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_bulletInterval));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(740);
	jfloat temp0 = (jfloat)((func_mindustry_gen_Bullet_rotation_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Bullet_rotation_R_float])(ctx, (frame[1].o));
	frame[2].f = temp0;
	LINE_NUMBER(741);
	frame[3].i = (jint(0));
	}
label_4:;
	{
	if ((frame[3].i) >= ((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_intervalBullets)) goto label_1;
	}
	{
	LINE_NUMBER(742);
	sp[0].o = (jobject)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_intervalBullet;
	sp[1].o = frame[1].o;
	jfloat temp0 = (jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_y;
	jfloat temp2 = frame[2].f;
	jfloat temp3 = (jfloat)SM_arc_math_Mathf_range_float_R_float(ctx, ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_intervalRandomSpread));
	sp[0].o = (jobject)((func_mindustry_entities_bullet_BulletType_create_mindustry_gen_Bullet_float_float_float_R_mindustry_gen_Bullet) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_bullet_BulletType_create_mindustry_gen_Bullet_float_float_float_R_mindustry_gen_Bullet])(ctx, sp[0].o, sp[1].o, temp0, temp1, (((temp2 + temp3) + ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_intervalAngle)) + (((jfloat((frame[3].i))) - (((jfloat(((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_intervalBullets))) - (jfloat(1))) / (jfloat(2)))) * ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_intervalSpread))));
	LINE_NUMBER(741);
	INST_IINC(3, 1);
	goto label_4;
	}
label_1:;
	LINE_NUMBER(745);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_bullet_BulletType_updateHoming_mindustry_gen_Bullet(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/BulletType:updateHoming", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(748);
	if ((floatCompare(((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_homingPower), (jfloat(1,000000e-04f)), -1)) <= 0) goto label_1;
	}
	{
	if ((floatCompare(((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_time), ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_homingDelay), -1)) < 0) goto label_1;
	}
	{
	LINE_NUMBER(749);
	if ((floatCompare(((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_aimX), (jfloat(0)), 1)) >= 0) goto label_3;
	}
	{
	jfloat temp0 = (jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_x;
	sp[0].f = temp0;
	sp += 1;
	goto label_4;
	}
label_3:;
	INST_ALOAD(1);
	sp[-1].f = ((mindustry_gen_Bullet *) NULL_CHECK(sp[-1].o))->F_aimX;
label_4:;
	{
	sp -= 1;
	frame[2].f = sp[0].f;
	LINE_NUMBER(750);
	if ((floatCompare(((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_aimY), (jfloat(0)), 1)) >= 0) goto label_6;
	}
	{
	jfloat temp0 = (jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_y;
	sp[0].f = temp0;
	sp += 1;
	goto label_7;
	}
label_6:;
	INST_ALOAD(1);
	sp[-1].f = ((mindustry_gen_Bullet *) NULL_CHECK(sp[-1].o))->F_aimY;
label_7:;
	{
	sp -= 1;
	frame[3].f = sp[0].f;
	LINE_NUMBER(755);
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_aimTile;
	if (sp[0].o == nullptr) goto label_9;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_aimTile;
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_build;
	if (sp[0].o == nullptr) goto label_9;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_aimTile;
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_build;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_team;
	sp[1].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_team;
	if (sp[0].o == sp[1].o) goto label_9;
	}
	{
	if (((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_collidesGround) == 0) goto label_9;
	}
	{
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_aimTile;
	sp[1].o = (jobject)((mindustry_world_Tile *) NULL_CHECK(sp[1].o))->F_build;
	jint temp0 = (jint)((func_mindustry_gen_Bullet_hasCollided_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Bullet_hasCollided_int_R_boolean])(ctx, sp[0].o, ((jint)((mindustry_gen_Building *) NULL_CHECK(sp[1].o))->F_id));
	if (temp0 != 0) goto label_9;
	}
	{
	LINE_NUMBER(756);
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_aimTile;
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_build;
	frame[4].o = sp[0].o;
	goto label_12;
	}
label_9:;
	{
	LINE_NUMBER(757);
	jint temp0 = (jint)((func_mindustry_entities_bullet_BulletType_heals_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_bullet_BulletType_heals_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_13;
	}
	{
	LINE_NUMBER(759);
	sp[0].o = jobject(nullptr);
	jfloat temp0 = frame[2].f;
	jfloat temp1 = frame[3].f;
	jfloat temp2 = (jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_homingRange;
	sp[1].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_team;
	{ /* InvokeDynamic */
		clinit_mindustry_entities_bullet_BulletType_invoke_arc_func_Boolf_8(ctx);
		auto proxy = (mindustry_entities_bullet_BulletType_invoke_arc_func_Boolf_8 *) gcAlloc(ctx, &class_mindustry_entities_bullet_BulletType_invoke_arc_func_Boolf_8);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_entities_bullet_BulletType_invoke_arc_func_Boolf_9(ctx);
		auto proxy = (mindustry_entities_bullet_BulletType_invoke_arc_func_Boolf_9 *) gcAlloc(ctx, &class_mindustry_entities_bullet_BulletType_invoke_arc_func_Boolf_9);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_entities_Units_closestTarget_mindustry_game_Team_float_float_float_mindustry_game_Team_arc_func_Boolf_arc_func_Boolf_R_mindustry_gen_Teamc(ctx, sp[0].o, temp0, temp1, temp2, sp[1].o, sp[2].o, sp[3].o);
	frame[4].o = sp[0].o;
	goto label_12;
	}
label_13:;
	{
	LINE_NUMBER(763);
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_team;
	jfloat temp0 = frame[2].f;
	jfloat temp1 = frame[3].f;
	jfloat temp2 = (jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_homingRange;
	{ /* InvokeDynamic */
		clinit_mindustry_entities_bullet_BulletType_invoke_arc_func_Boolf_10(ctx);
		auto proxy = (mindustry_entities_bullet_BulletType_invoke_arc_func_Boolf_10 *) gcAlloc(ctx, &class_mindustry_entities_bullet_BulletType_invoke_arc_func_Boolf_10);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_entities_bullet_BulletType_invoke_arc_func_Boolf_11(ctx);
		auto proxy = (mindustry_entities_bullet_BulletType_invoke_arc_func_Boolf_11 *) gcAlloc(ctx, &class_mindustry_entities_bullet_BulletType_invoke_arc_func_Boolf_11);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_entities_Units_closestTarget_mindustry_game_Team_float_float_float_arc_func_Boolf_arc_func_Boolf_R_mindustry_gen_Teamc(ctx, sp[0].o, temp0, temp1, temp2, sp[1].o, sp[2].o);
	frame[4].o = sp[0].o;
	}
label_12:;
	{
	LINE_NUMBER(768);
	if ((frame[4].o) == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(769);
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_vel;
	jfloat temp0 = (jfloat)((func_mindustry_gen_Bullet_rotation_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Bullet_rotation_R_float])(ctx, (frame[1].o));
	jfloat temp1 = (jfloat)((func_mindustry_gen_Bullet_angleTo_arc_math_geom_Position_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Bullet_angleTo_arc_math_geom_Position_R_float])(ctx, (frame[1].o), (frame[4].o));
	jfloat temp2 = (jfloat)SM_arc_math_Angles_moveToward_float_float_float_R_float(ctx, temp0, temp1, ((((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_homingPower) * (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta)) * (jfloat(50.0f))));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_setAngle_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_setAngle_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp2);
	}
label_1:;
	{
	LINE_NUMBER(773);
	if ((floatCompare(((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_followAimSpeed), (jfloat(0)), -1)) <= 0) goto label_17;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_shooter;
	frame[3].o = sp[0].o;
	if ((isInstance(ctx, (frame[3].o), &class_mindustry_gen_Unit)) == 0) goto label_17;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_gen_Unit, (frame[3].o)));
	LINE_NUMBER(774);
	jfloat temp0 = (jfloat)((func_mindustry_gen_Bullet_angleTo_float_float_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Bullet_angleTo_float_float_R_float])(ctx, (frame[1].o), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[2].o)))->F_aimX), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[2].o)))->F_aimY));
	frame[3].f = temp0;
	LINE_NUMBER(775);
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_vel;
	sp[1].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_vel;
	jfloat temp1 = (jfloat)((func_arc_math_geom_Vec2_angle_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_angle_R_float])(ctx, sp[1].o);
	jfloat temp2 = (jfloat)SM_arc_math_Angles_moveToward_float_float_float_R_float(ctx, temp1, (frame[3].f), (((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_followAimSpeed) * (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta)));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_setAngle_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_setAngle_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp2);
	}
label_17:;
	LINE_NUMBER(777);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_bullet_BulletType_updateWeaving_mindustry_gen_Bullet(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/BulletType:updateWeaving", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(780);
	if ((floatCompare(((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_weaveMag), (jfloat(0)), -1)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(781);
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_vel;
	jdouble temp0 = (jdouble)SM_java_lang_Math_sin_double_R_double(ctx, (((jdouble(((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_time))) + (((jdouble(3.141592653589793)) * (jdouble(((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_weaveScale)))) / (jdouble(2.0)))) / (jdouble(((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_weaveScale)))));
	jfloat temp1 = (jfloat(temp0)) * ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_weaveMag);
	sp[1].f = temp1;
	sp += 2;
	if (((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_weaveRandom) == 0) goto label_3;
	}
	{
	jint temp0 = (jint)SM_arc_math_Mathf_randomSeed_long_int_int_R_int(ctx, (jlong(((jint)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_id))), (jint(0)), (jint(1)));
	if (temp0 != (jint(1))) goto label_4;
	}
	INST_ICONST(-1);
	goto label_5;
label_4:;
	INST_ICONST(1);
label_5:;
	INST_I2F();
	goto label_6;
label_3:;
	INST_FCONST(1);
label_6:;
	{
	sp -= 3;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_rotateRadExact_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_rotateRadExact_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (((sp[1].f * sp[2].f) * (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta)) * (jfloat(0.017453292f))));
	}
label_1:;
	{
	LINE_NUMBER(784);
	if ((floatCompare(((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_rotateSpeed), (jfloat(0)), -1)) == 0) goto label_7;
	}
	{
	LINE_NUMBER(785);
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_vel;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_rotate_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_rotate_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_rotateSpeed) * (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta)));
	}
label_7:;
	{
	LINE_NUMBER(788);
	if (((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_circleShooter) == 0) goto label_9;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_owner;
	frame[3].o = sp[0].o;
	if ((isInstance(ctx, (frame[3].o), &class_mindustry_gen_Healthc)) == 0) goto label_9;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_gen_Healthc, (frame[3].o)));
	jint temp0 = (jint)((func_mindustry_gen_Healthc_isValid_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_gen_Healthc, INDEX_mindustry_gen_Healthc_isValid_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_9;
	}
	{
	LINE_NUMBER(789);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_arc_math_geom_Position_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Position_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[2].o));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_sub_arc_math_geom_Position_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_sub_arc_math_geom_Position_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(790);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp0 = jfloat(90.0f);
	jfloat temp1 = jfloat(0);
	jfloat temp2 = jfloat(1);
	jfloat temp3 = jfloat(1);
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp4 = (jfloat)((func_arc_math_geom_Vec2_len_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_len_R_float])(ctx, sp[1].o);
	jfloat temp5 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, ((temp4 - ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_circleShooterRadius)) / ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_circleShooterRadiusSmooth)));
	jfloat temp6 = (jfloat)SM_arc_math_Mathf_lerp_float_float_float_R_float(ctx, temp1, temp2, (temp3 - temp5));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_rotate_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_rotate_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (temp0 * temp6));
	LINE_NUMBER(791);
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_vel;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	sp[1].o = (jobject)((func_arc_math_geom_Vec2_limit_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_limit_float_R_arc_math_geom_Vec2])(ctx, sp[1].o, ((((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_speed) * ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_circleShooterRotateSpeed)) * (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta)));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_add_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_add_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_limit_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_limit_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_speed));
	}
label_9:;
	LINE_NUMBER(793);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_bullet_BulletType_updateTrailEffects_mindustry_gen_Bullet(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/BulletType:updateTrailEffects", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(796);
	if ((floatCompare(((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_trailMinVelocity), (jfloat(0)), 1)) <= 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_vel;
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec2_len2_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_len2_R_float])(ctx, sp[0].o);
	if ((floatCompare(temp0, (((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_trailMinVelocity) * ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_trailMinVelocity)), -1)) < 0) goto label_2;
	}
label_1:;
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	{
	sp -= 1;
	frame[2].i = sp[0].i;
	LINE_NUMBER(798);
	if ((floatCompare(((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_trailChance), (jfloat(0)), -1)) <= 0) goto label_5;
	}
	INST_ILOAD(2);
	if ((--sp)->i == 0) goto label_5;
	{
	LINE_NUMBER(799);
	jint temp0 = (jint)SM_arc_math_Mathf_chanceDelta_double_R_boolean(ctx, (jdouble(((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_trailChance))));
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(800);
	if ((floatCompare(((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_trailSpread), (jfloat(0)), -1)) <= 0) goto label_8;
	}
	{
	LINE_NUMBER(801);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_random_float_R_float(ctx, ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_trailSpread));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_rnd_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_rnd_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp0);
	goto label_10;
	}
label_8:;
	{
	LINE_NUMBER(803);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_setZero_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_setZero_R_arc_math_geom_Vec2])(ctx, sp[0].o);
	}
label_10:;
	{
	LINE_NUMBER(805);
	sp[0].o = (jobject)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_trailEffect;
	jfloat temp0 = (jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_x;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp1 = temp0 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x);
	jfloat temp2 = (jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_y;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp3 = temp2 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y);
	sp[1].f = temp1;
	sp[2].f = temp3;
	sp += 3;
	if (((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_trailRotation) == 0) goto label_11;
	}
	{
	jfloat temp0 = (jfloat)((func_mindustry_gen_Bullet_rotation_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Bullet_rotation_R_float])(ctx, (frame[1].o));
	sp[0].f = temp0;
	sp += 1;
	goto label_12;
	}
label_11:;
	INST_ALOAD(0);
	sp[-1].f = ((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[-1].o))->F_trailParam;
label_12:;
	{
	sp -= 4;
	sp[4].o = (jobject)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_trailColor;
	((func_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color])(ctx, sp[0].o, sp[1].f, sp[2].f, sp[3].f, sp[4].o);
	}
label_5:;
	{
	LINE_NUMBER(809);
	if ((floatCompare(((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_trailInterval), (jfloat(0)), -1)) <= 0) goto label_13;
	}
	INST_ILOAD(2);
	if ((--sp)->i == 0) goto label_13;
	{
	LINE_NUMBER(810);
	jint temp0 = (jint)((func_mindustry_gen_Bullet_timer_int_float_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Bullet_timer_int_float_R_boolean])(ctx, (frame[1].o), (jint(0)), ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_trailInterval));
	if (temp0 == 0) goto label_13;
	}
	{
	LINE_NUMBER(811);
	if ((floatCompare(((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_trailSpread), (jfloat(0)), -1)) <= 0) goto label_16;
	}
	{
	LINE_NUMBER(812);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_random_float_R_float(ctx, ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_trailSpread));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_rnd_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_rnd_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp0);
	goto label_18;
	}
label_16:;
	{
	LINE_NUMBER(814);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_setZero_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_setZero_R_arc_math_geom_Vec2])(ctx, sp[0].o);
	}
label_18:;
	{
	LINE_NUMBER(816);
	sp[0].o = (jobject)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_trailEffect;
	jfloat temp0 = (jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_x;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp1 = temp0 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x);
	jfloat temp2 = (jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_y;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp3 = temp2 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y);
	sp[1].f = temp1;
	sp[2].f = temp3;
	sp += 3;
	if (((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_trailRotation) == 0) goto label_19;
	}
	{
	jfloat temp0 = (jfloat)((func_mindustry_gen_Bullet_rotation_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Bullet_rotation_R_float])(ctx, (frame[1].o));
	sp[0].f = temp0;
	sp += 1;
	goto label_20;
	}
label_19:;
	INST_ALOAD(0);
	sp[-1].f = ((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[-1].o))->F_trailParam;
label_20:;
	{
	sp -= 4;
	sp[4].o = (jobject)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_trailColor;
	((func_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color])(ctx, sp[0].o, sp[1].f, sp[2].f, sp[3].f, sp[4].o);
	}
label_13:;
	LINE_NUMBER(819);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_bullet_BulletType_updateTrail_mindustry_gen_Bullet(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/BulletType:updateTrail", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(822);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_headless) != 0) goto label_1;
	}
	{
	if (((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_trailLength) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(823);
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_trail;
	if (sp[0].o != nullptr) goto label_3;
	}
	{
	LINE_NUMBER(824);
	sp[0].o = frame[1].o;
	clinit_mindustry_graphics_Trail(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_graphics_Trail);
	init_mindustry_graphics_Trail_int(ctx, sp[1].o, ((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_trailLength));
	((mindustry_gen_Bullet *) NULL_CHECK(sp[0].o))->F_trail = (jref) sp[1].o;
	}
label_3:;
	{
	LINE_NUMBER(826);
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_trail;
	((mindustry_graphics_Trail *) NULL_CHECK(sp[0].o))->F_length = ((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_trailLength);
	LINE_NUMBER(827);
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_trail;
	jfloat temp0 = (jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_y;
	sp[1].o = (jobject)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_trailInterp;
	jfloat temp2 = (jfloat)((func_mindustry_gen_Bullet_fin_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Bullet_fin_R_float])(ctx, (frame[1].o));
	jfloat temp3 = (jfloat)((func_arc_math_Interp_apply_float_R_float) resolveInterfaceMethod(ctx, &class_arc_math_Interp, INDEX_arc_math_Interp_apply_float_R_float, sp[1].o))(ctx, sp[1].o, temp2);
	jfloat temp4 = jfloat(1);
	sp[1].f = temp0;
	sp[2].f = temp1;
	sp[3].f = temp3;
	sp[4].f = temp4;
	sp += 5;
	if ((floatCompare(((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_trailSinMag), (jfloat(0)), -1)) <= 0) goto label_6;
	}
	{
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_absin_float_float_float_R_float(ctx, (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time), ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_trailSinScl), ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_trailSinMag));
	sp[0].f = temp0;
	sp += 1;
	goto label_7;
	}
label_6:;
	INST_FCONST(0);
label_7:;
	{
	sp -= 6;
	((func_mindustry_graphics_Trail_update_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_Trail_update_float_float_float])(ctx, sp[0].o, sp[1].f, sp[2].f, (sp[3].f * (sp[4].f + sp[5].f)));
	}
label_1:;
	LINE_NUMBER(829);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_bullet_BulletType_init(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/BulletType:init", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(833);
	if (((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_pierceCap) < (jint(1))) goto label_1;
	}
	{
	LINE_NUMBER(834);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_pierce = (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(838);
	if (((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_setDefaults) == 0) goto label_3;
	}
	{
	LINE_NUMBER(839);
	if (((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_lightning) <= 0) goto label_5;
	}
	{
	LINE_NUMBER(840);
	sp[0].o = (jobject)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_status;
	clinit_mindustry_content_StatusEffects(ctx);
	sp[1].o = (jobject)SF_mindustry_content_StatusEffects_none;
	if (sp[0].o != sp[1].o) goto label_5;
	}
	{
	LINE_NUMBER(841);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_StatusEffects(ctx);
	sp[1].o = (jobject)SF_mindustry_content_StatusEffects_shocked;
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_status = (jref) sp[1].o;
	}
label_5:;
	{
	LINE_NUMBER(845);
	sp[0].o = (jobject)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_fragBullet;
	if (sp[0].o != nullptr) goto label_8;
	}
	{
	if ((floatCompare(((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_splashDamageRadius), (jfloat(0)), -1)) > 0) goto label_8;
	}
	{
	if (((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_lightning) <= 0) goto label_3;
	}
label_8:;
	{
	LINE_NUMBER(846);
	((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_despawnHit = (jint(1));
	}
label_3:;
	{
	LINE_NUMBER(850);
	sp[0].o = (jobject)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_fragBullet;
	if (sp[0].o == nullptr) goto label_9;
	}
	{
	LINE_NUMBER(851);
	sp[0].o = (jobject)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_fragBullet;
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_keepVelocity = (jint(0));
	LINE_NUMBER(852);
	sp[0].o = (jobject)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_fragBullet;
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_scaleKeepVelocity = (jint(0));
	}
label_9:;
	{
	LINE_NUMBER(855);
	sp[0].o = (jobject)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_lightningType;
	if (sp[0].o != nullptr) goto label_12;
	}
	{
	LINE_NUMBER(856);
	sp[0].o = frame[0].o;
	LINE_NUMBER(857);
	sp += 1;
	if (((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_collidesAir) != 0) goto label_15;
	}
	clinit_mindustry_content_Bullets(ctx);
	(sp++)->o = SF_mindustry_content_Bullets_damageLightningGround;
	goto label_16;
label_15:;
	{
	LINE_NUMBER(858);
	if (((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_collidesGround) != 0) goto label_17;
	}
	clinit_mindustry_content_Bullets(ctx);
	(sp++)->o = SF_mindustry_content_Bullets_damageLightningAir;
	goto label_16;
label_17:;
	LINE_NUMBER(859);
	clinit_mindustry_content_Bullets(ctx);
	(sp++)->o = SF_mindustry_content_Bullets_damageLightning;
label_16:;
	sp -= 2;
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_lightningType = (jref) sp[1].o;
label_12:;
	{
	LINE_NUMBER(862);
	if ((floatCompare(((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_lightRadius), (jfloat(-1.0f)), 1)) > 0) goto label_18;
	}
	{
	LINE_NUMBER(863);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (jfloat(18.0f)), (((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_hitSize) * (jfloat(5.0f))));
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_lightRadius = temp0;
	}
label_18:;
	{
	LINE_NUMBER(866);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_drawSize), (((jfloat(((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_trailLength))) * ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_speed)) * (jfloat(2))));
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_drawSize = temp0;
	LINE_NUMBER(867);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)((func_mindustry_entities_bullet_BulletType_calculateRange_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_bullet_BulletType_calculateRange_R_float])(ctx, (frame[0].o));
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_range = temp1;
	LINE_NUMBER(868);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_entities_bullet_BulletType_getContentType_R_mindustry_ctype_ContentType(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/BulletType:getContentType", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(872);
	clinit_mindustry_ctype_ContentType(ctx);
	sp[0].o = (jobject)SF_mindustry_ctype_ContentType_bullet;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_entities_bullet_BulletType_create_mindustry_gen_Teamc_float_float_float_R_mindustry_gen_Bullet(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/BulletType:create", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(876);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((func_mindustry_gen_Teamc_team_R_mindustry_game_Team) resolveInterfaceMethod(ctx, &class_mindustry_gen_Teamc, INDEX_mindustry_gen_Teamc_team_R_mindustry_game_Team, (frame[1].o)))(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_R_mindustry_gen_Bullet) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_R_mindustry_gen_Bullet])(ctx, sp[0].o, sp[1].o, sp[2].o, (frame[2].f), (frame[3].f), (frame[4].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_R_mindustry_gen_Bullet(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/BulletType:create", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	{
	LINE_NUMBER(880);
	sp[0].o = (jobject)((func_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_R_mindustry_gen_Bullet) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_R_mindustry_gen_Bullet])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].f), (frame[4].f), (frame[5].f), (jfloat(1)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_R_mindustry_gen_Bullet(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/BulletType:create", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	frame[6].f = param5;
	{
	LINE_NUMBER(884);
	sp[0].o = (jobject)((func_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_float_java_lang_Object_R_mindustry_gen_Bullet) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_float_java_lang_Object_R_mindustry_gen_Bullet])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].f), (frame[4].f), (frame[5].f), (jfloat(-1.0f)), (frame[6].f), (jfloat(1)), (jobject(nullptr)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_R_mindustry_gen_Bullet(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6) {
	NULL_CHECK(self);
	jtype frame[18];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/BulletType:create", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	frame[6].f = param5;
	frame[7].f = param6;
	{
	LINE_NUMBER(888);
	sp[0].o = (jobject)((func_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_float_java_lang_Object_R_mindustry_gen_Bullet) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_float_java_lang_Object_R_mindustry_gen_Bullet])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].f), (frame[4].f), (frame[5].f), (jfloat(-1.0f)), (frame[6].f), (frame[7].f), (jobject(nullptr)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_mindustry_entities_Mover_R_mindustry_gen_Bullet(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jobject param7) {
	NULL_CHECK(self);
	jtype frame[20];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/BulletType:create", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	frame[6].f = param5;
	frame[7].f = param6;
	frame[8].o = param7;
	{
	LINE_NUMBER(893);
	sp[0].o = (jobject)((func_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_float_java_lang_Object_mindustry_entities_Mover_R_mindustry_gen_Bullet) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_float_java_lang_Object_mindustry_entities_Mover_R_mindustry_gen_Bullet])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].f), (frame[4].f), (frame[5].f), (jfloat(-1.0f)), (frame[6].f), (frame[7].f), (jobject(nullptr)), (frame[8].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_entities_bullet_BulletType_create_mindustry_gen_Bullet_float_float_float_R_mindustry_gen_Bullet(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[19];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/BulletType:create", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(897);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_owner;
	sp[2].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_shooter;
	sp[3].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_team;
	sp[0].o = (jobject)((func_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_float_java_lang_Object_mindustry_entities_Mover_float_float_R_mindustry_gen_Bullet) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_float_java_lang_Object_mindustry_entities_Mover_float_float_R_mindustry_gen_Bullet])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, (frame[2].f), (frame[3].f), (frame[4].f), (jfloat(-1.0f)), (jfloat(1)), (jfloat(1)), (jobject(nullptr)), (jobject(nullptr)), (jfloat(-1.0f)), (jfloat(-1.0f)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_entities_bullet_BulletType_create_mindustry_gen_Bullet_float_float_float_float_float_R_mindustry_gen_Bullet(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5) {
	NULL_CHECK(self);
	jtype frame[21];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/BulletType:create", 21 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	frame[6].f = param5;
	{
	LINE_NUMBER(901);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_owner;
	sp[2].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_shooter;
	sp[3].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_team;
	sp[0].o = (jobject)((func_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_float_java_lang_Object_mindustry_entities_Mover_float_float_R_mindustry_gen_Bullet) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_float_java_lang_Object_mindustry_entities_Mover_float_float_R_mindustry_gen_Bullet])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, (frame[2].f), (frame[3].f), (frame[4].f), (jfloat(-1.0f)), (frame[5].f), (frame[6].f), (jobject(nullptr)), (jobject(nullptr)), (jfloat(-1.0f)), (jfloat(-1.0f)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_entities_bullet_BulletType_create_mindustry_gen_Bullet_float_float_float_float_R_mindustry_gen_Bullet(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4) {
	NULL_CHECK(self);
	jtype frame[20];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/BulletType:create", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	{
	LINE_NUMBER(905);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_owner;
	sp[2].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_shooter;
	sp[3].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_team;
	sp[0].o = (jobject)((func_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_float_java_lang_Object_mindustry_entities_Mover_float_float_R_mindustry_gen_Bullet) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_float_java_lang_Object_mindustry_entities_Mover_float_float_R_mindustry_gen_Bullet])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, (frame[2].f), (frame[3].f), (frame[4].f), (jfloat(-1.0f)), (frame[5].f), (jfloat(1)), (jobject(nullptr)), (jobject(nullptr)), (jfloat(-1.0f)), (jfloat(-1.0f)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_float_java_lang_Object_R_mindustry_gen_Bullet(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jobject param8) {
	NULL_CHECK(self);
	jtype frame[21];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/BulletType:create", 21 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	frame[6].f = param5;
	frame[7].f = param6;
	frame[8].f = param7;
	frame[9].o = param8;
	{
	LINE_NUMBER(909);
	sp[0].o = (jobject)((func_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_float_java_lang_Object_mindustry_entities_Mover_R_mindustry_gen_Bullet) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_float_java_lang_Object_mindustry_entities_Mover_R_mindustry_gen_Bullet])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].f), (frame[4].f), (frame[5].f), (frame[6].f), (frame[7].f), (frame[8].f), (frame[9].o), (jobject(nullptr)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_float_java_lang_Object_mindustry_entities_Mover_R_mindustry_gen_Bullet(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jobject param8, jobject param9) {
	NULL_CHECK(self);
	jtype frame[24];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/BulletType:create", 24 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	frame[6].f = param5;
	frame[7].f = param6;
	frame[8].f = param7;
	frame[9].o = param8;
	frame[10].o = param9;
	{
	LINE_NUMBER(913);
	sp[0].o = (jobject)((func_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_float_java_lang_Object_mindustry_entities_Mover_float_float_R_mindustry_gen_Bullet) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_float_java_lang_Object_mindustry_entities_Mover_float_float_R_mindustry_gen_Bullet])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].f), (frame[4].f), (frame[5].f), (frame[6].f), (frame[7].f), (frame[8].f), (frame[9].o), (frame[10].o), (jfloat(-1.0f)), (jfloat(-1.0f)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_float_java_lang_Object_mindustry_entities_Mover_float_float_R_mindustry_gen_Bullet(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jobject param8, jobject param9, jfloat param10, jfloat param11) {
	NULL_CHECK(self);
	jtype frame[27];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/BulletType:create", 27 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	frame[6].f = param5;
	frame[7].f = param6;
	frame[8].f = param7;
	frame[9].o = param8;
	frame[10].o = param9;
	frame[11].f = param10;
	frame[12].f = param11;
	{
	LINE_NUMBER(917);
	sp[0].o = (jobject)((func_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_float_java_lang_Object_mindustry_entities_Mover_float_float_R_mindustry_gen_Bullet) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_float_java_lang_Object_mindustry_entities_Mover_float_float_R_mindustry_gen_Bullet])(ctx, (frame[0].o), (frame[1].o), (frame[1].o), (frame[2].o), (frame[3].f), (frame[4].f), (frame[5].f), (frame[6].f), (frame[7].f), (frame[8].f), (frame[9].o), (frame[10].o), (frame[11].f), (frame[12].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_float_java_lang_Object_mindustry_entities_Mover_float_float_R_mindustry_gen_Bullet(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jfloat param8, jobject param9, jobject param10, jfloat param11, jfloat param12) {
	NULL_CHECK(self);
	jtype frame[29];
	auto stack = &frame[14];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/BulletType:create", 29 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	frame[6].f = param5;
	frame[7].f = param6;
	frame[8].f = param7;
	frame[9].f = param8;
	frame[10].o = param9;
	frame[11].o = param10;
	frame[12].f = param11;
	frame[13].f = param12;
	{
	LINE_NUMBER(921);
	sp[0].o = (jobject)((func_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_float_java_lang_Object_mindustry_entities_Mover_float_float_mindustry_gen_Teamc_R_mindustry_gen_Bullet) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_float_java_lang_Object_mindustry_entities_Mover_float_float_mindustry_gen_Teamc_R_mindustry_gen_Bullet])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o), (frame[4].f), (frame[5].f), (frame[6].f), (frame[7].f), (frame[8].f), (frame[9].f), (frame[10].o), (frame[11].o), (frame[12].f), (frame[13].f), (jobject(nullptr)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_float_java_lang_Object_mindustry_entities_Mover_float_float_mindustry_gen_Teamc_R_mindustry_gen_Bullet(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jfloat param8, jobject param9, jobject param10, jfloat param11, jfloat param12, jobject param13) {
	NULL_CHECK(self);
	jtype frame[24];
	auto stack = &frame[19];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/BulletType:create", 24 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	frame[6].f = param5;
	frame[7].f = param6;
	frame[8].f = param7;
	frame[9].f = param8;
	frame[10].o = param9;
	frame[11].o = param10;
	frame[12].f = param11;
	frame[13].f = param12;
	frame[14].o = param13;
	{
	LINE_NUMBER(928);
	jfloat temp0 = frame[6].f;
	jfloat temp1 = (jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_angleOffset;
	jfloat temp2 = (jfloat)SM_arc_math_Mathf_range_float_R_float(ctx, ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_randomAngleOffset));
	frame[6].f = (temp0 + (temp1 + temp2));
	LINE_NUMBER(930);
	jint temp3 = (jint)SM_arc_math_Mathf_chance_double_R_boolean(ctx, (jdouble(((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_createChance))));
	if (temp3 != 0) goto label_2;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	LINE_NUMBER(931);
	if (((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_ignoreSpawnAngle) == 0) goto label_3;
	}
	INST_FCONST(0);
	INST_FSTORE(6);
label_3:;
	{
	LINE_NUMBER(932);
	sp[0].o = (jobject)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_spawnUnit;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	LINE_NUMBER(934);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_6;
	}
	{
	LINE_NUMBER(935);
	sp[0].o = (jobject)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_spawnUnit;
	sp[0].o = (jobject)((func_mindustry_type_UnitType_create_mindustry_game_Team_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_UnitType_create_mindustry_game_Team_R_mindustry_gen_Unit])(ctx, sp[0].o, (frame[3].o));
	frame[15].o = sp[0].o;
	LINE_NUMBER(936);
	((func_mindustry_gen_Unit_set_float_float) ((void **) nullCheck(ctx, (frame[15].o))->vtable)[VTABLE_mindustry_gen_Unit_set_float_float])(ctx, (frame[15].o), (frame[4].f), (frame[5].f));
	LINE_NUMBER(937);
	((mindustry_gen_Unit *) NULL_CHECK((frame[15].o)))->F_rotation = (frame[6].f);
	LINE_NUMBER(939);
	sp[0].o = (jobject)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_spawnUnit;
	if ((floatCompare(((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_missileAccelTime), (jfloat(0)), 1)) > 0) goto label_11;
	}
	{
	LINE_NUMBER(940);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[15].o)))->F_vel;
	jfloat temp0 = frame[6].f;
	sp[1].o = (jobject)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_spawnUnit;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp0, ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_speed));
	}
label_11:;
	{
	LINE_NUMBER(943);
	sp[0].o = (jobject)((func_mindustry_gen_Unit_controller_R_mindustry_entities_units_UnitController) ((void **) nullCheck(ctx, (frame[15].o))->vtable)[VTABLE_mindustry_gen_Unit_controller_R_mindustry_entities_units_UnitController])(ctx, (frame[15].o));
	frame[17].o = sp[0].o;
	if ((isInstance(ctx, (frame[17].o), &class_mindustry_ai_types_MissileAI)) == 0) goto label_13;
	}
	{
	frame[16].o = (checkCast(ctx, &class_mindustry_ai_types_MissileAI, (frame[17].o)));
	LINE_NUMBER(944);
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_gen_Unit)) == 0) goto label_15;
	}
	{
	frame[17].o = (checkCast(ctx, &class_mindustry_gen_Unit, (frame[2].o)));
	LINE_NUMBER(945);
	((mindustry_ai_types_MissileAI *) NULL_CHECK((frame[16].o)))->F_shooter = (jref) (frame[17].o);
	}
label_15:;
	{
	LINE_NUMBER(948);
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_world_blocks_ControlBlock)) == 0) goto label_13;
	}
	{
	frame[17].o = (checkCast(ctx, &class_mindustry_world_blocks_ControlBlock, (frame[2].o)));
	LINE_NUMBER(949);
	sp[0].o = frame[16].o;
	sp[1].o = (jobject)((func_mindustry_world_blocks_ControlBlock_unit_R_mindustry_gen_Unit) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_ControlBlock, INDEX_mindustry_world_blocks_ControlBlock_unit_R_mindustry_gen_Unit, (frame[17].o)))(ctx, (frame[17].o));
	((mindustry_ai_types_MissileAI *) NULL_CHECK(sp[0].o))->F_shooter = (jref) sp[1].o;
	}
label_13:;
	{
	LINE_NUMBER(953);
	((func_mindustry_gen_Unit_add) ((void **) nullCheck(ctx, (frame[15].o))->vtable)[VTABLE_mindustry_gen_Unit_add])(ctx, (frame[15].o));
	LINE_NUMBER(954);
	SM_mindustry_entities_Units_notifyUnitSpawn_mindustry_gen_Unit(ctx, (frame[15].o));
	}
label_6:;
	{
	LINE_NUMBER(957);
	if (((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_killShooter) == 0) goto label_19;
	}
	{
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_gen_Healthc)) == 0) goto label_19;
	}
	{
	frame[15].o = (checkCast(ctx, &class_mindustry_gen_Healthc, (frame[1].o)));
	jint temp0 = (jint)((func_mindustry_gen_Healthc_dead_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_gen_Healthc, INDEX_mindustry_gen_Healthc_dead_R_boolean, (frame[15].o)))(ctx, (frame[15].o));
	if (temp0 != 0) goto label_19;
	}
	INST_ALOAD(15);
	POP_N(1); // Pop method args
	((func_mindustry_gen_Healthc_kill) resolveInterfaceMethod(ctx, &class_mindustry_gen_Healthc, INDEX_mindustry_gen_Healthc_kill, sp[0].o))(ctx, sp[0].o);
label_19:;
	{
	LINE_NUMBER(960);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_4:;
	{
	LINE_NUMBER(963);
	sp[0].o = (jobject)SM_mindustry_gen_Bullet_create_R_mindustry_gen_Bullet(ctx);
	frame[15].o = sp[0].o;
	LINE_NUMBER(964);
	((mindustry_gen_Bullet *) NULL_CHECK((frame[15].o)))->F_type = (jref) (frame[0].o);
	LINE_NUMBER(965);
	((mindustry_gen_Bullet *) NULL_CHECK((frame[15].o)))->F_owner = (jref) (frame[1].o);
	LINE_NUMBER(966);
	sp[0].o = frame[15].o;
	sp += 1;
	if ((frame[2].o) != nullptr) goto label_24;
	}
	INST_ALOAD(1);
	goto label_25;
label_24:;
	INST_ALOAD(2);
label_25:;
	{
	sp -= 2;
	((mindustry_gen_Bullet *) NULL_CHECK(sp[0].o))->F_shooter = (jref) sp[1].o;
	LINE_NUMBER(967);
	((mindustry_gen_Bullet *) NULL_CHECK((frame[15].o)))->F_team = (jref) (frame[3].o);
	LINE_NUMBER(968);
	((mindustry_gen_Bullet *) NULL_CHECK((frame[15].o)))->F_time = (jfloat(0));
	LINE_NUMBER(969);
	((mindustry_gen_Bullet *) NULL_CHECK((frame[15].o)))->F_originX = (frame[4].f);
	LINE_NUMBER(970);
	((mindustry_gen_Bullet *) NULL_CHECK((frame[15].o)))->F_originY = (frame[5].f);
	LINE_NUMBER(971);
	if ((floatCompare((frame[12].f), (jfloat(-1.0f)), -1)) != 0) goto label_31;
	}
	{
	if ((floatCompare((frame[13].f), (jfloat(-1.0f)), -1)) == 0) goto label_32;
	}
label_31:;
	{
	LINE_NUMBER(972);
	sp[0].o = frame[15].o;
	sp += 1;
	if ((isInstance(ctx, (frame[14].o), &class_mindustry_gen_Building)) == 0) goto label_33;
	}
	{
	frame[16].o = (checkCast(ctx, &class_mindustry_gen_Building, (frame[14].o)));
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[16].o)))->F_tile;
	sp += 1;
	goto label_35;
	}
label_33:;
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_tileWorld_float_float_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tileWorld_float_float_R_mindustry_world_Tile])(ctx, sp[0].o, (frame[12].f), (frame[13].f));
	sp += 1;
	}
label_35:;
	sp -= 2;
	((mindustry_gen_Bullet *) NULL_CHECK(sp[0].o))->F_aimTile = (jref) sp[1].o;
label_32:;
	{
	LINE_NUMBER(974);
	((mindustry_gen_Bullet *) NULL_CHECK((frame[15].o)))->F_aimX = (frame[12].f);
	LINE_NUMBER(975);
	((mindustry_gen_Bullet *) NULL_CHECK((frame[15].o)))->F_aimY = (frame[13].f);
	LINE_NUMBER(977);
	sp[0].o = frame[15].o;
	jfloat temp0 = frame[6].f;
	jfloat temp1 = ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_speed) * (frame[8].f);
	sp[1].f = temp0;
	sp[2].f = temp1;
	sp += 3;
	if ((floatCompare(((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_velocityScaleRandMin), (jfloat(1)), -1)) != 0) goto label_38;
	}
	{
	if ((floatCompare(((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_velocityScaleRandMax), (jfloat(1)), -1)) == 0) goto label_39;
	}
label_38:;
	{
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_random_float_float_R_float(ctx, ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_velocityScaleRandMin), ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_velocityScaleRandMax));
	sp[0].f = temp0;
	sp += 1;
	goto label_40;
	}
label_39:;
	INST_FCONST(1);
label_40:;
	{
	sp -= 4;
	((func_mindustry_gen_Bullet_initVel_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Bullet_initVel_float_float])(ctx, sp[0].o, sp[1].f, (sp[2].f * sp[3].f));
	LINE_NUMBER(978);
	((func_mindustry_gen_Bullet_set_float_float) ((void **) nullCheck(ctx, (frame[15].o))->vtable)[VTABLE_mindustry_gen_Bullet_set_float_float])(ctx, (frame[15].o), (frame[4].f), (frame[5].f));
	LINE_NUMBER(979);
	((mindustry_gen_Bullet *) NULL_CHECK((frame[15].o)))->F_lastX = (frame[4].f);
	LINE_NUMBER(980);
	((mindustry_gen_Bullet *) NULL_CHECK((frame[15].o)))->F_lastY = (frame[5].f);
	LINE_NUMBER(981);
	sp[0].o = frame[15].o;
	jfloat temp0 = ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_lifetime) * (frame[9].f);
	sp[1].f = temp0;
	sp += 2;
	if ((floatCompare(((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_lifeScaleRandMin), (jfloat(1)), -1)) != 0) goto label_45;
	}
	{
	if ((floatCompare(((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_lifeScaleRandMax), (jfloat(1)), -1)) == 0) goto label_46;
	}
label_45:;
	{
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_random_float_float_R_float(ctx, ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_lifeScaleRandMin), ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_lifeScaleRandMax));
	sp[0].f = temp0;
	sp += 1;
	goto label_47;
	}
label_46:;
	INST_FCONST(1);
label_47:;
	{
	sp -= 3;
	((mindustry_gen_Bullet *) NULL_CHECK(sp[0].o))->F_lifetime = (sp[1].f * sp[2].f);
	LINE_NUMBER(982);
	((mindustry_gen_Bullet *) NULL_CHECK((frame[15].o)))->F_data = (jref) (frame[10].o);
	LINE_NUMBER(983);
	((mindustry_gen_Bullet *) NULL_CHECK((frame[15].o)))->F_hitSize = ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_hitSize);
	LINE_NUMBER(984);
	((mindustry_gen_Bullet *) NULL_CHECK((frame[15].o)))->F_mover = (jref) (frame[11].o);
	LINE_NUMBER(985);
	sp[0].o = frame[15].o;
	sp += 1;
	if ((floatCompare((frame[7].f), (jfloat(0)), 1)) >= 0) goto label_52;
	}
	{
	jfloat temp0 = (jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_damage;
	sp[0].f = temp0;
	sp += 1;
	goto label_53;
	}
label_52:;
	INST_FLOAD(7);
label_53:;
	{
	sp -= 2;
	jfloat temp0 = (jfloat)((func_mindustry_gen_Bullet_damageMultiplier_R_float) ((void **) nullCheck(ctx, (frame[15].o))->vtable)[VTABLE_mindustry_gen_Bullet_damageMultiplier_R_float])(ctx, (frame[15].o));
	((mindustry_gen_Bullet *) NULL_CHECK(sp[0].o))->F_damage = (sp[1].f * temp0);
	LINE_NUMBER(986);
	((mindustry_gen_Bullet *) NULL_CHECK((frame[15].o)))->F_buildingDamageMultiplier = ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_buildingDamageMultiplier);
	LINE_NUMBER(988);
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[15].o)))->F_trail;
	if (sp[0].o == nullptr) goto label_56;
	}
	{
	LINE_NUMBER(989);
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[15].o)))->F_trail;
	((func_mindustry_graphics_Trail_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_Trail_clear])(ctx, sp[0].o);
	}
label_56:;
	{
	LINE_NUMBER(991);
	((func_mindustry_gen_Bullet_add) ((void **) nullCheck(ctx, (frame[15].o))->vtable)[VTABLE_mindustry_gen_Bullet_add])(ctx, (frame[15].o));
	LINE_NUMBER(993);
	if (((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_keepVelocity) == 0) goto label_59;
	}
	{
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_gen_Velc)) == 0) goto label_59;
	}
	{
	frame[16].o = (checkCast(ctx, &class_mindustry_gen_Velc, (frame[1].o)));
	LINE_NUMBER(994);
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[15].o)))->F_vel;
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec2_len_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_len_R_float])(ctx, sp[0].o);
	frame[17].f = temp0;
	LINE_NUMBER(995);
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[15].o)))->F_vel;
	sp[1].o = (jobject)((func_mindustry_gen_Velc_vel_R_arc_math_geom_Vec2) resolveInterfaceMethod(ctx, &class_mindustry_gen_Velc, INDEX_mindustry_gen_Velc_vel_R_arc_math_geom_Vec2, (frame[16].o)))(ctx, (frame[16].o));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_add_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_add_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(997);
	if (((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_scaleKeepVelocity) == 0) goto label_59;
	}
	{
	LINE_NUMBER(998);
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[15].o)))->F_vel;
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec2_len_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_len_R_float])(ctx, sp[0].o);
	frame[18].f = temp0;
	LINE_NUMBER(1000);
	if ((floatCompare((frame[18].f), (jfloat(0)), -1)) <= 0) goto label_59;
	}
	{
	sp[0].o = frame[15].o;
	jfloat temp0 = (jfloat)((mindustry_gen_Bullet *) NULL_CHECK(sp[0].o))->F_lifetime;
	jfloat temp1 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, (jfloat(1)), ((frame[17].f) / (frame[18].f)));
	((mindustry_gen_Bullet *) NULL_CHECK(sp[0].o))->F_lifetime = (temp0 * temp1);
	}
label_59:;
	{
	LINE_NUMBER(1003);
	popStackFrame(ctx);
	return (frame[15].o);
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_bullet_BulletType_createNet_mindustry_game_Team_float_float_float_float_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/BulletType:createNet", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	frame[6].f = param5;
	frame[7].f = param6;
	{
	LINE_NUMBER(1007);
	SM_mindustry_gen_Call_createBullet_mindustry_entities_bullet_BulletType_mindustry_game_Team_float_float_float_float_float_float(ctx, (frame[0].o), (frame[1].o), (frame[2].f), (frame[3].f), (frame[4].f), (frame[5].f), (frame[6].f), (frame[7].f));
	LINE_NUMBER(1008);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_entities_bullet_BulletType_createBullet_mindustry_entities_bullet_BulletType_mindustry_game_Team_float_float_float_float_float_float(jcontext ctx, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7) {
	jtype frame[19];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/BulletType:createBullet", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_bullet_BulletType(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	frame[6].f = param6;
	frame[7].f = param7;
	{
	LINE_NUMBER(1012);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(1013);
	sp[0].o = (jobject)((func_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_float_java_lang_Object_R_mindustry_gen_Bullet) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_float_java_lang_Object_R_mindustry_gen_Bullet])(ctx, (frame[0].o), (jobject(nullptr)), (frame[1].o), (frame[2].f), (frame[3].f), (frame[4].f), (frame[5].f), (frame[6].f), (frame[7].f), (jobject(nullptr)));
	frame[8].o = sp[0].o;
	LINE_NUMBER(1014);
	clinit_mindustry_entities_bullet_BulletType(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_bullet_BulletType_bulletCreateEvent;
	sp[0].o = (jobject)((func_mindustry_game_EventType$BulletCreateEvent_set_mindustry_gen_Bullet_R_mindustry_game_EventType$BulletCreateEvent) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_EventType$BulletCreateEvent_set_mindustry_gen_Bullet_R_mindustry_game_EventType$BulletCreateEvent])(ctx, sp[0].o, (frame[8].o));
	SM_arc_Events_fire_java_lang_Object(ctx, sp[0].o);
	LINE_NUMBER(1015);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_entities_bullet_BulletType_lambda$updateHoming$3_mindustry_gen_Bullet_mindustry_gen_Building_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/BulletType:lambda$updateHoming$3", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(765);
	if ((frame[2].o) == nullptr) goto label_1;
	}
	{
	if (((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_collidesGround) == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Bullet_hasCollided_int_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Bullet_hasCollided_int_R_boolean])(ctx, (frame[1].o), ((jint)((mindustry_gen_Building *) NULL_CHECK((frame[2].o)))->F_id));
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

jbool M_mindustry_entities_bullet_BulletType_lambda$updateHoming$2_mindustry_gen_Bullet_mindustry_gen_Unit_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/BulletType:lambda$updateHoming$2", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(764);
	if ((frame[2].o) == nullptr) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Unit_checkTarget_boolean_boolean_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_gen_Unit_checkTarget_boolean_boolean_R_boolean])(ctx, (frame[2].o), ((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_collidesAir), ((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_collidesGround));
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Bullet_hasCollided_int_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Bullet_hasCollided_int_R_boolean])(ctx, (frame[1].o), ((jint)((mindustry_gen_Unit *) NULL_CHECK((frame[2].o)))->F_id));
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

jbool M_mindustry_entities_bullet_BulletType_lambda$updateHoming$1_mindustry_gen_Bullet_mindustry_gen_Building_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/BulletType:lambda$updateHoming$1", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(761);
	if (((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_collidesGround) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[2].o)))->F_team;
	sp[1].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_team;
	if (sp[0].o != sp[1].o) goto label_2;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Building_damaged_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_gen_Building_damaged_R_boolean])(ctx, (frame[2].o));
	if (temp0 == 0) goto label_1;
	}
label_2:;
	{
	jint temp0 = (jint)((func_mindustry_gen_Bullet_hasCollided_int_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Bullet_hasCollided_int_R_boolean])(ctx, (frame[1].o), ((jint)((mindustry_gen_Building *) NULL_CHECK((frame[2].o)))->F_id));
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

jbool M_mindustry_entities_bullet_BulletType_lambda$updateHoming$0_mindustry_gen_Bullet_mindustry_gen_Unit_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/BulletType:lambda$updateHoming$0", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(760);
	jint temp0 = (jint)((func_mindustry_gen_Unit_checkTarget_boolean_boolean_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_gen_Unit_checkTarget_boolean_boolean_R_boolean])(ctx, (frame[2].o), ((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_collidesAir), ((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_collidesGround));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[2].o)))->F_team;
	sp[1].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_team;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Bullet_hasCollided_int_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Bullet_hasCollided_int_R_boolean])(ctx, (frame[1].o), ((jint)((mindustry_gen_Unit *) NULL_CHECK((frame[2].o)))->F_id));
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

void SM_mindustry_entities_bullet_BulletType_lambda$createSplashDamage$2_mindustry_gen_Building(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/BulletType:lambda$createSplashDamage$2", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_bullet_BulletType(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(622);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	SM_mindustry_entities_Fires_create_mindustry_world_Tile(ctx, sp[0].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_entities_bullet_BulletType_lambda$createSplashDamage$1_mindustry_gen_Bullet_mindustry_gen_Building_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/BulletType:lambda$createSplashDamage$1", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_bullet_BulletType(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(622);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_team;
	sp[1].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_team;
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

void M_mindustry_entities_bullet_BulletType_lambda$createSplashDamage$0_mindustry_gen_Building(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/BulletType:lambda$createSplashDamage$0", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(616);
	sp[0].o = (jobject)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_healEffect;
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_y;
	jfloat temp2 = jfloat(0);
	sp[1].o = (jobject)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_healColor;
	sp[2].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_block;
	((func_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color_java_lang_Object])(ctx, sp[0].o, temp0, temp1, temp2, sp[1].o, sp[2].o);
	LINE_NUMBER(617);
	sp[0].o = frame[1].o;
	jfloat temp3 = ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_healPercent) / (jfloat(100.0f));
	jfloat temp4 = (jfloat)((func_mindustry_gen_Building_maxHealth_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_maxHealth_R_float])(ctx, (frame[1].o));
	((func_mindustry_gen_Building_heal_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_heal_float])(ctx, sp[0].o, ((temp3 * temp4) + ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[0].o)))->F_healAmount)));
	LINE_NUMBER(618);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_bullet_BulletType_lambda$hit$0_mindustry_gen_Bullet_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/BulletType:lambda$hit$0", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(570);
	((func_mindustry_entities_bullet_BulletType_createFrags_mindustry_gen_Bullet_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_bullet_BulletType_createFrags_mindustry_gen_Bullet_float_float])(ctx, (frame[0].o), (frame[1].o), (frame[2].f), (frame[3].f));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_mindustry_entities_bullet_BulletType(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_ctype_Content(ctx);
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/BulletType:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_bullet_BulletType(ctx);
	{
	LINE_NUMBER(31);
	clinit_mindustry_game_EventType$UnitDamageEvent(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$UnitDamageEvent);
	init_mindustry_game_EventType$UnitDamageEvent(ctx, sp[0].o);
	clinit_mindustry_entities_bullet_BulletType(ctx);
	SF_mindustry_entities_bullet_BulletType_bulletDamageEvent = sp[0].o;
	LINE_NUMBER(32);
	clinit_mindustry_game_EventType$BulletCreateEvent(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$BulletCreateEvent);
	init_mindustry_game_EventType$BulletCreateEvent(ctx, sp[0].o);
	clinit_mindustry_entities_bullet_BulletType(ctx);
	SF_mindustry_entities_bullet_BulletType_bulletCreateEvent = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_entities_bullet_BulletType;
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

	{ // Field shootPattern
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[28]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

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

	fields[41]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[42]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

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

	fields[62]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[63]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[64]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[65]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[66]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[67]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[68]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[69]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[70]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[71]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[72]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[73]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[74]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[75]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[76]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[77]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[78]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[79]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[80]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[81]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[82]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[83]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[84]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[85]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[86]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[87]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[88]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[89]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[90]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[91]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[92]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[93]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[94]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field fragBullet
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[95]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[96]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[97]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[98]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[99]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[100]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[101]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[102]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[103]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[104]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[105]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[106]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[107]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field intervalBullet
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[108]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[109]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[110]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[111]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[112]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[113]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[114]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[115]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[116]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[117]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[118]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[119]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[120]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[121]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field spawnUnit
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[122]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field despawnUnit
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[123]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[124]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[125]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[126]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[127]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[128]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[129]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[130]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[131]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[132]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[133]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[134]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[135]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[136]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[137]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[138]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[139]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[140]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[141]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[142]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[143]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[144]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[145]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[146]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[147]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[148]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[149]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[150]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[151]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[152]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[153]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[154]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[155]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[156]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[157]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[158]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[159]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[160]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[161]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[162]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[163]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[164]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[165]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field lightningType
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[166]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[167]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[168]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[169]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[170]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[171]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[172]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[173]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[174]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[175]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[176]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[177]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[178]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[179]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[180]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[1])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

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

	{ // Method create
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[37]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Method create
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[38]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Method create
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[39]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Method create
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[40]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Method create
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[41]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Method create
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[42]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Method create
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[43]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Method create
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[44]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Method create
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[45]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Method create
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[46]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Method create
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[47]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Method create
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[48]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Method create
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[49]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

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
}

void *vtable_mindustry_entities_bullet_BulletType[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_mindustry_ctype_Content_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_mindustry_ctype_Content_compareTo_java_lang_Object_R_int,
	(void *) M_mindustry_entities_bullet_BulletType_getContentType_R_mindustry_ctype_ContentType,
	(void *) M_mindustry_ctype_Content_removeContent,
	(void *) M_mindustry_entities_bullet_BulletType_init,
	(void *) M_mindustry_ctype_Content_postInit,
	(void *) M_mindustry_entities_bullet_BulletType_afterPatch,
	(void *) M_mindustry_entities_bullet_BulletType_load,
	(void *) M_mindustry_ctype_Content_loadIcon,
	(void *) M_mindustry_ctype_Content_hasErrored_R_boolean,
	(void *) M_mindustry_ctype_Content_isVanilla_R_boolean,
	(void *) M_mindustry_ctype_Content_isModded_R_boolean,
	(void *) M_mindustry_ctype_Content_isPatchContent_R_boolean,
	(void *) M_mindustry_ctype_Content_compareTo_mindustry_ctype_Content_R_int,
	(void *) M_mindustry_entities_bullet_BulletType_copy_R_mindustry_entities_bullet_BulletType,
	(void *) M_mindustry_entities_bullet_BulletType_estimateDPS_R_float,
	(void *) M_mindustry_entities_bullet_BulletType_calculateRange_R_float,
	(void *) M_mindustry_entities_bullet_BulletType_continuousDamage_R_float,
	(void *) M_mindustry_entities_bullet_BulletType_heals_R_boolean,
	(void *) M_mindustry_entities_bullet_BulletType_testCollision_mindustry_gen_Bullet_mindustry_gen_Building_R_boolean,
	(void *) M_mindustry_entities_bullet_BulletType_hitTile_mindustry_gen_Bullet_mindustry_gen_Building_float_float_float_boolean,
	(void *) M_mindustry_entities_bullet_BulletType_hitEntity_mindustry_gen_Bullet_mindustry_gen_Hitboxc_float,
	(void *) M_mindustry_entities_bullet_BulletType_handlePierce_mindustry_gen_Bullet_float_float_float,
	(void *) M_mindustry_entities_bullet_BulletType_damageMultiplier_mindustry_gen_Bullet_R_float,
	(void *) M_mindustry_entities_bullet_BulletType_hit_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_hit_mindustry_gen_Bullet_float_float,
	(void *) M_mindustry_entities_bullet_BulletType_hit_mindustry_gen_Bullet_float_float_boolean,
	(void *) M_mindustry_entities_bullet_BulletType_createIncend_mindustry_gen_Bullet_float_float,
	(void *) M_mindustry_entities_bullet_BulletType_createPuddles_mindustry_gen_Bullet_float_float,
	(void *) M_mindustry_entities_bullet_BulletType_createSplashDamage_mindustry_gen_Bullet_float_float,
	(void *) M_mindustry_entities_bullet_BulletType_createFrags_mindustry_gen_Bullet_float_float,
	(void *) M_mindustry_entities_bullet_BulletType_createUnits_mindustry_gen_Bullet_float_float,
	(void *) M_mindustry_entities_bullet_BulletType_despawned_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_removed_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_buildingDamage_mindustry_gen_Bullet_R_float,
	(void *) M_mindustry_entities_bullet_BulletType_shieldDamage_mindustry_gen_Bullet_R_float,
	(void *) M_mindustry_entities_bullet_BulletType_draw_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_drawTrail_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_drawParts_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_drawLight_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_init_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_update_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_updateBulletInterval_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_updateHoming_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_updateWeaving_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_updateTrailEffects_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_updateTrail_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_create_mindustry_gen_Teamc_float_float_float_R_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_R_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_R_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_R_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_mindustry_entities_Mover_R_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_create_mindustry_gen_Bullet_float_float_float_R_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_create_mindustry_gen_Bullet_float_float_float_float_float_R_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_create_mindustry_gen_Bullet_float_float_float_float_R_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_float_java_lang_Object_R_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_float_java_lang_Object_mindustry_entities_Mover_R_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_float_java_lang_Object_mindustry_entities_Mover_float_float_R_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_float_java_lang_Object_mindustry_entities_Mover_float_float_R_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_float_java_lang_Object_mindustry_entities_Mover_float_float_mindustry_gen_Teamc_R_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_createNet_mindustry_game_Team_float_float_float_float_float_float,
	(void *) M_mindustry_entities_bullet_BulletType_lambda$updateHoming$3_mindustry_gen_Bullet_mindustry_gen_Building_R_boolean,
	(void *) M_mindustry_entities_bullet_BulletType_lambda$updateHoming$2_mindustry_gen_Bullet_mindustry_gen_Unit_R_boolean,
	(void *) M_mindustry_entities_bullet_BulletType_lambda$updateHoming$1_mindustry_gen_Bullet_mindustry_gen_Building_R_boolean,
	(void *) M_mindustry_entities_bullet_BulletType_lambda$updateHoming$0_mindustry_gen_Bullet_mindustry_gen_Unit_R_boolean,
	(void *) M_mindustry_entities_bullet_BulletType_lambda$createSplashDamage$0_mindustry_gen_Building,
	(void *) M_mindustry_entities_bullet_BulletType_lambda$hit$0_mindustry_gen_Bullet_float_float,
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
	{ "copy", "()Lmindustry/entities/bullet/BulletType;" },
	{ "estimateDPS", "()F" },
	{ "calculateRange", "()F" },
	{ "continuousDamage", "()F" },
	{ "heals", "()Z" },
	{ "testCollision", "(Lmindustry/gen/Bullet;Lmindustry/gen/Building;)Z" },
	{ "hitTile", "(Lmindustry/gen/Bullet;Lmindustry/gen/Building;FFFZ)V" },
	{ "hitEntity", "(Lmindustry/gen/Bullet;Lmindustry/gen/Hitboxc;F)V" },
	{ "handlePierce", "(Lmindustry/gen/Bullet;FFF)V" },
	{ "damageMultiplier", "(Lmindustry/gen/Bullet;)F" },
	{ "hit", "(Lmindustry/gen/Bullet;)V" },
	{ "hit", "(Lmindustry/gen/Bullet;FF)V" },
	{ "hit", "(Lmindustry/gen/Bullet;FFZ)V" },
	{ "createIncend", "(Lmindustry/gen/Bullet;FF)V" },
	{ "createPuddles", "(Lmindustry/gen/Bullet;FF)V" },
	{ "createSplashDamage", "(Lmindustry/gen/Bullet;FF)V" },
	{ "createFrags", "(Lmindustry/gen/Bullet;FF)V" },
	{ "createUnits", "(Lmindustry/gen/Bullet;FF)V" },
	{ "despawned", "(Lmindustry/gen/Bullet;)V" },
	{ "removed", "(Lmindustry/gen/Bullet;)V" },
	{ "buildingDamage", "(Lmindustry/gen/Bullet;)F" },
	{ "shieldDamage", "(Lmindustry/gen/Bullet;)F" },
	{ "draw", "(Lmindustry/gen/Bullet;)V" },
	{ "drawTrail", "(Lmindustry/gen/Bullet;)V" },
	{ "drawParts", "(Lmindustry/gen/Bullet;)V" },
	{ "drawLight", "(Lmindustry/gen/Bullet;)V" },
	{ "init", "(Lmindustry/gen/Bullet;)V" },
	{ "update", "(Lmindustry/gen/Bullet;)V" },
	{ "updateBulletInterval", "(Lmindustry/gen/Bullet;)V" },
	{ "updateHoming", "(Lmindustry/gen/Bullet;)V" },
	{ "updateWeaving", "(Lmindustry/gen/Bullet;)V" },
	{ "updateTrailEffects", "(Lmindustry/gen/Bullet;)V" },
	{ "updateTrail", "(Lmindustry/gen/Bullet;)V" },
	{ "create", "(Lmindustry/gen/Teamc;FFF)Lmindustry/gen/Bullet;" },
	{ "create", "(Lmindustry/gen/Entityc;Lmindustry/game/Team;FFF)Lmindustry/gen/Bullet;" },
	{ "create", "(Lmindustry/gen/Entityc;Lmindustry/game/Team;FFFF)Lmindustry/gen/Bullet;" },
	{ "create", "(Lmindustry/gen/Entityc;Lmindustry/game/Team;FFFFF)Lmindustry/gen/Bullet;" },
	{ "create", "(Lmindustry/gen/Entityc;Lmindustry/game/Team;FFFFFLmindustry/entities/Mover;)Lmindustry/gen/Bullet;" },
	{ "create", "(Lmindustry/gen/Bullet;FFF)Lmindustry/gen/Bullet;" },
	{ "create", "(Lmindustry/gen/Bullet;FFFFF)Lmindustry/gen/Bullet;" },
	{ "create", "(Lmindustry/gen/Bullet;FFFF)Lmindustry/gen/Bullet;" },
	{ "create", "(Lmindustry/gen/Entityc;Lmindustry/game/Team;FFFFFFLjava/lang/Object;)Lmindustry/gen/Bullet;" },
	{ "create", "(Lmindustry/gen/Entityc;Lmindustry/game/Team;FFFFFFLjava/lang/Object;Lmindustry/entities/Mover;)Lmindustry/gen/Bullet;" },
	{ "create", "(Lmindustry/gen/Entityc;Lmindustry/game/Team;FFFFFFLjava/lang/Object;Lmindustry/entities/Mover;FF)Lmindustry/gen/Bullet;" },
	{ "create", "(Lmindustry/gen/Entityc;Lmindustry/gen/Entityc;Lmindustry/game/Team;FFFFFFLjava/lang/Object;Lmindustry/entities/Mover;FF)Lmindustry/gen/Bullet;" },
	{ "create", "(Lmindustry/gen/Entityc;Lmindustry/gen/Entityc;Lmindustry/game/Team;FFFFFFLjava/lang/Object;Lmindustry/entities/Mover;FFLmindustry/gen/Teamc;)Lmindustry/gen/Bullet;" },
	{ "createNet", "(Lmindustry/game/Team;FFFFFF)V" },
	{ "lambda$updateHoming$3", "(Lmindustry/gen/Bullet;Lmindustry/gen/Building;)Z" },
	{ "lambda$updateHoming$2", "(Lmindustry/gen/Bullet;Lmindustry/gen/Unit;)Z" },
	{ "lambda$updateHoming$1", "(Lmindustry/gen/Bullet;Lmindustry/gen/Building;)Z" },
	{ "lambda$updateHoming$0", "(Lmindustry/gen/Bullet;Lmindustry/gen/Unit;)Z" },
	{ "lambda$createSplashDamage$0", "(Lmindustry/gen/Building;)V" },
	{ "lambda$hit$0", "(Lmindustry/gen/Bullet;FF)V" },
};

static jclass interfaces[] { &class_java_lang_Cloneable, };

static FieldMetadata fields[] {
	{ "bulletDamageEvent", &class_mindustry_game_EventType$UnitDamageEvent, (intptr_t) &SF_mindustry_entities_bullet_BulletType_bulletDamageEvent, "Lmindustry/game/EventType$UnitDamageEvent;", 24 },
	{ "bulletCreateEvent", &class_mindustry_game_EventType$BulletCreateEvent, (intptr_t) &SF_mindustry_entities_bullet_BulletType_bulletCreateEvent, "Lmindustry/game/EventType$BulletCreateEvent;", 24 },
	{ "lifetime", &class_float, offsetof(mindustry_entities_bullet_BulletType, F_lifetime), "F", 1 },
	{ "lifeScaleRandMin", &class_float, offsetof(mindustry_entities_bullet_BulletType, F_lifeScaleRandMin), "F", 1 },
	{ "lifeScaleRandMax", &class_float, offsetof(mindustry_entities_bullet_BulletType, F_lifeScaleRandMax), "F", 1 },
	{ "speed", &class_float, offsetof(mindustry_entities_bullet_BulletType, F_speed), "F", 1 },
	{ "velocityScaleRandMin", &class_float, offsetof(mindustry_entities_bullet_BulletType, F_velocityScaleRandMin), "F", 1 },
	{ "velocityScaleRandMax", &class_float, offsetof(mindustry_entities_bullet_BulletType, F_velocityScaleRandMax), "F", 1 },
	{ "damage", &class_float, offsetof(mindustry_entities_bullet_BulletType, F_damage), "F", 1 },
	{ "hitSize", &class_float, offsetof(mindustry_entities_bullet_BulletType, F_hitSize), "F", 1 },
	{ "drawSize", &class_float, offsetof(mindustry_entities_bullet_BulletType, F_drawSize), "F", 1 },
	{ "angleOffset", &class_float, offsetof(mindustry_entities_bullet_BulletType, F_angleOffset), "F", 1 },
	{ "randomAngleOffset", &class_float, offsetof(mindustry_entities_bullet_BulletType, F_randomAngleOffset), "F", 1 },
	{ "drag", &class_float, offsetof(mindustry_entities_bullet_BulletType, F_drag), "F", 1 },
	{ "accel", &class_float, offsetof(mindustry_entities_bullet_BulletType, F_accel), "F", 1 },
	{ "pierce", &class_boolean, offsetof(mindustry_entities_bullet_BulletType, F_pierce), "Z", 1 },
	{ "pierceBuilding", &class_boolean, offsetof(mindustry_entities_bullet_BulletType, F_pierceBuilding), "Z", 1 },
	{ "pierceCap", &class_int, offsetof(mindustry_entities_bullet_BulletType, F_pierceCap), "I", 1 },
	{ "pierceDamageFactor", &class_float, offsetof(mindustry_entities_bullet_BulletType, F_pierceDamageFactor), "F", 1 },
	{ "maxDamageFraction", &class_float, offsetof(mindustry_entities_bullet_BulletType, F_maxDamageFraction), "F", 1 },
	{ "removeAfterPierce", &class_boolean, offsetof(mindustry_entities_bullet_BulletType, F_removeAfterPierce), "Z", 1 },
	{ "laserAbsorb", &class_boolean, offsetof(mindustry_entities_bullet_BulletType, F_laserAbsorb), "Z", 1 },
	{ "laserBullet", &class_boolean, offsetof(mindustry_entities_bullet_BulletType, F_laserBullet), "Z", 1 },
	{ "optimalLifeFract", &class_float, offsetof(mindustry_entities_bullet_BulletType, F_optimalLifeFract), "F", 1 },
	{ "layer", &class_float, offsetof(mindustry_entities_bullet_BulletType, F_layer), "F", 1 },
	{ "hitEffect", &class_mindustry_entities_Effect, offsetof(mindustry_entities_bullet_BulletType, F_hitEffect), "Lmindustry/entities/Effect;", 1 },
	{ "despawnEffect", &class_mindustry_entities_Effect, offsetof(mindustry_entities_bullet_BulletType, F_despawnEffect), "Lmindustry/entities/Effect;", 1 },
	{ "shootEffect", &class_mindustry_entities_Effect, offsetof(mindustry_entities_bullet_BulletType, F_shootEffect), "Lmindustry/entities/Effect;", 1 },
	{ "shootPattern", &class_mindustry_entities_pattern_ShootPattern, offsetof(mindustry_entities_bullet_BulletType, F_shootPattern), "Lmindustry/entities/pattern/ShootPattern;", 1 },
	{ "chargeEffect", &class_mindustry_entities_Effect, offsetof(mindustry_entities_bullet_BulletType, F_chargeEffect), "Lmindustry/entities/Effect;", 1 },
	{ "smokeEffect", &class_mindustry_entities_Effect, offsetof(mindustry_entities_bullet_BulletType, F_smokeEffect), "Lmindustry/entities/Effect;", 1 },
	{ "shootSound", &class_arc_audio_Sound, offsetof(mindustry_entities_bullet_BulletType, F_shootSound), "Larc/audio/Sound;", 1 },
	{ "hitSound", &class_arc_audio_Sound, offsetof(mindustry_entities_bullet_BulletType, F_hitSound), "Larc/audio/Sound;", 1 },
	{ "despawnSound", &class_arc_audio_Sound, offsetof(mindustry_entities_bullet_BulletType, F_despawnSound), "Larc/audio/Sound;", 1 },
	{ "hitSoundPitch", &class_float, offsetof(mindustry_entities_bullet_BulletType, F_hitSoundPitch), "F", 1 },
	{ "hitSoundPitchRange", &class_float, offsetof(mindustry_entities_bullet_BulletType, F_hitSoundPitchRange), "F", 1 },
	{ "hitSoundVolume", &class_float, offsetof(mindustry_entities_bullet_BulletType, F_hitSoundVolume), "F", 1 },
	{ "inaccuracy", &class_float, offsetof(mindustry_entities_bullet_BulletType, F_inaccuracy), "F", 1 },
	{ "ammoMultiplier", &class_float, offsetof(mindustry_entities_bullet_BulletType, F_ammoMultiplier), "F", 1 },
	{ "reloadMultiplier", &class_float, offsetof(mindustry_entities_bullet_BulletType, F_reloadMultiplier), "F", 1 },
	{ "buildingDamageMultiplier", &class_float, offsetof(mindustry_entities_bullet_BulletType, F_buildingDamageMultiplier), "F", 1 },
	{ "shieldDamageMultiplier", &class_float, offsetof(mindustry_entities_bullet_BulletType, F_shieldDamageMultiplier), "F", 1 },
	{ "recoil", &class_float, offsetof(mindustry_entities_bullet_BulletType, F_recoil), "F", 1 },
	{ "killShooter", &class_boolean, offsetof(mindustry_entities_bullet_BulletType, F_killShooter), "Z", 1 },
	{ "instantDisappear", &class_boolean, offsetof(mindustry_entities_bullet_BulletType, F_instantDisappear), "Z", 1 },
	{ "splashDamage", &class_float, offsetof(mindustry_entities_bullet_BulletType, F_splashDamage), "F", 1 },
	{ "scaledSplashDamage", &class_boolean, offsetof(mindustry_entities_bullet_BulletType, F_scaledSplashDamage), "Z", 1 },
	{ "knockback", &class_float, offsetof(mindustry_entities_bullet_BulletType, F_knockback), "F", 1 },
	{ "impact", &class_boolean, offsetof(mindustry_entities_bullet_BulletType, F_impact), "Z", 1 },
	{ "status", &class_mindustry_type_StatusEffect, offsetof(mindustry_entities_bullet_BulletType, F_status), "Lmindustry/type/StatusEffect;", 1 },
	{ "statusDuration", &class_float, offsetof(mindustry_entities_bullet_BulletType, F_statusDuration), "F", 1 },
	{ "unitSort", &class_mindustry_entities_Units$Sortf, offsetof(mindustry_entities_bullet_BulletType, F_unitSort), "Lmindustry/entities/Units$Sortf;", 1 },
	{ "statusChance", &class_float, offsetof(mindustry_entities_bullet_BulletType, F_statusChance), "F", 1 },
	{ "targetBlocks", &class_boolean, offsetof(mindustry_entities_bullet_BulletType, F_targetBlocks), "Z", 1 },
	{ "targetMissiles", &class_boolean, offsetof(mindustry_entities_bullet_BulletType, F_targetMissiles), "Z", 1 },
	{ "collidesTiles", &class_boolean, offsetof(mindustry_entities_bullet_BulletType, F_collidesTiles), "Z", 1 },
	{ "collidesTeam", &class_boolean, offsetof(mindustry_entities_bullet_BulletType, F_collidesTeam), "Z", 1 },
	{ "collidesAir", &class_boolean, offsetof(mindustry_entities_bullet_BulletType, F_collidesAir), "Z", 1 },
	{ "collidesGround", &class_boolean, offsetof(mindustry_entities_bullet_BulletType, F_collidesGround), "Z", 1 },
	{ "collides", &class_boolean, offsetof(mindustry_entities_bullet_BulletType, F_collides), "Z", 1 },
	{ "collideFloor", &class_boolean, offsetof(mindustry_entities_bullet_BulletType, F_collideFloor), "Z", 1 },
	{ "collideTerrain", &class_boolean, offsetof(mindustry_entities_bullet_BulletType, F_collideTerrain), "Z", 1 },
	{ "keepVelocity", &class_boolean, offsetof(mindustry_entities_bullet_BulletType, F_keepVelocity), "Z", 1 },
	{ "scaleKeepVelocity", &class_boolean, offsetof(mindustry_entities_bullet_BulletType, F_scaleKeepVelocity), "Z", 1 },
	{ "scaleLife", &class_boolean, offsetof(mindustry_entities_bullet_BulletType, F_scaleLife), "Z", 1 },
	{ "hittable", &class_boolean, offsetof(mindustry_entities_bullet_BulletType, F_hittable), "Z", 1 },
	{ "reflectable", &class_boolean, offsetof(mindustry_entities_bullet_BulletType, F_reflectable), "Z", 1 },
	{ "absorbable", &class_boolean, offsetof(mindustry_entities_bullet_BulletType, F_absorbable), "Z", 1 },
	{ "ignoreSpawnAngle", &class_boolean, offsetof(mindustry_entities_bullet_BulletType, F_ignoreSpawnAngle), "Z", 1 },
	{ "createChance", &class_float, offsetof(mindustry_entities_bullet_BulletType, F_createChance), "F", 1 },
	{ "maxRange", &class_float, offsetof(mindustry_entities_bullet_BulletType, F_maxRange), "F", 1 },
	{ "rangeOverride", &class_float, offsetof(mindustry_entities_bullet_BulletType, F_rangeOverride), "F", 1 },
	{ "rangeChange", &class_float, offsetof(mindustry_entities_bullet_BulletType, F_rangeChange), "F", 1 },
	{ "extraRangeMargin", &class_float, offsetof(mindustry_entities_bullet_BulletType, F_extraRangeMargin), "F", 1 },
	{ "range", &class_float, offsetof(mindustry_entities_bullet_BulletType, F_range), "F", 1 },
	{ "minRangeChange", &class_float, offsetof(mindustry_entities_bullet_BulletType, F_minRangeChange), "F", 1 },
	{ "healPercent", &class_float, offsetof(mindustry_entities_bullet_BulletType, F_healPercent), "F", 1 },
	{ "healAmount", &class_float, offsetof(mindustry_entities_bullet_BulletType, F_healAmount), "F", 1 },
	{ "healSound", &class_arc_audio_Sound, offsetof(mindustry_entities_bullet_BulletType, F_healSound), "Larc/audio/Sound;", 1 },
	{ "healSoundVolume", &class_float, offsetof(mindustry_entities_bullet_BulletType, F_healSoundVolume), "F", 1 },
	{ "lifesteal", &class_float, offsetof(mindustry_entities_bullet_BulletType, F_lifesteal), "F", 1 },
	{ "makeFire", &class_boolean, offsetof(mindustry_entities_bullet_BulletType, F_makeFire), "Z", 1 },
	{ "hitUnder", &class_boolean, offsetof(mindustry_entities_bullet_BulletType, F_hitUnder), "Z", 1 },
	{ "despawnHit", &class_boolean, offsetof(mindustry_entities_bullet_BulletType, F_despawnHit), "Z", 1 },
	{ "fragOnHit", &class_boolean, offsetof(mindustry_entities_bullet_BulletType, F_fragOnHit), "Z", 1 },
	{ "fragOnDespawn", &class_boolean, offsetof(mindustry_entities_bullet_BulletType, F_fragOnDespawn), "Z", 1 },
	{ "fragOnAbsorb", &class_boolean, offsetof(mindustry_entities_bullet_BulletType, F_fragOnAbsorb), "Z", 1 },
	{ "pierceArmor", &class_boolean, offsetof(mindustry_entities_bullet_BulletType, F_pierceArmor), "Z", 1 },
	{ "armorMultiplier", &class_float, offsetof(mindustry_entities_bullet_BulletType, F_armorMultiplier), "F", 1 },
	{ "blockArmorMultiplier", &class_float, offsetof(mindustry_entities_bullet_BulletType, F_blockArmorMultiplier), "F", 1 },
	{ "sticky", &class_boolean, offsetof(mindustry_entities_bullet_BulletType, F_sticky), "Z", 1 },
	{ "stickyExtraLifetime", &class_float, offsetof(mindustry_entities_bullet_BulletType, F_stickyExtraLifetime), "F", 1 },
	{ "setDefaults", &class_boolean, offsetof(mindustry_entities_bullet_BulletType, F_setDefaults), "Z", 1 },
	{ "hitShake", &class_float, offsetof(mindustry_entities_bullet_BulletType, F_hitShake), "F", 1 },
	{ "despawnShake", &class_float, offsetof(mindustry_entities_bullet_BulletType, F_despawnShake), "F", 1 },
	{ "fragBullet", &class_mindustry_entities_bullet_BulletType, offsetof(mindustry_entities_bullet_BulletType, F_fragBullet), "Lmindustry/entities/bullet/BulletType;", 1 },
	{ "delayFrags", &class_boolean, offsetof(mindustry_entities_bullet_BulletType, F_delayFrags), "Z", 1 },
	{ "fragRandomSpread", &class_float, offsetof(mindustry_entities_bullet_BulletType, F_fragRandomSpread), "F", 1 },
	{ "fragSpread", &class_float, offsetof(mindustry_entities_bullet_BulletType, F_fragSpread), "F", 1 },
	{ "fragAngle", &class_float, offsetof(mindustry_entities_bullet_BulletType, F_fragAngle), "F", 1 },
	{ "fragBullets", &class_int, offsetof(mindustry_entities_bullet_BulletType, F_fragBullets), "I", 1 },
	{ "fragVelocityMin", &class_float, offsetof(mindustry_entities_bullet_BulletType, F_fragVelocityMin), "F", 1 },
	{ "fragVelocityMax", &class_float, offsetof(mindustry_entities_bullet_BulletType, F_fragVelocityMax), "F", 1 },
	{ "fragLifeMin", &class_float, offsetof(mindustry_entities_bullet_BulletType, F_fragLifeMin), "F", 1 },
	{ "fragLifeMax", &class_float, offsetof(mindustry_entities_bullet_BulletType, F_fragLifeMax), "F", 1 },
	{ "fragOffsetMin", &class_float, offsetof(mindustry_entities_bullet_BulletType, F_fragOffsetMin), "F", 1 },
	{ "fragOffsetMax", &class_float, offsetof(mindustry_entities_bullet_BulletType, F_fragOffsetMax), "F", 1 },
	{ "pierceFragCap", &class_int, offsetof(mindustry_entities_bullet_BulletType, F_pierceFragCap), "I", 1 },
	{ "intervalBullet", &class_mindustry_entities_bullet_BulletType, offsetof(mindustry_entities_bullet_BulletType, F_intervalBullet), "Lmindustry/entities/bullet/BulletType;", 1 },
	{ "bulletInterval", &class_float, offsetof(mindustry_entities_bullet_BulletType, F_bulletInterval), "F", 1 },
	{ "intervalBullets", &class_int, offsetof(mindustry_entities_bullet_BulletType, F_intervalBullets), "I", 1 },
	{ "intervalRandomSpread", &class_float, offsetof(mindustry_entities_bullet_BulletType, F_intervalRandomSpread), "F", 1 },
	{ "intervalSpread", &class_float, offsetof(mindustry_entities_bullet_BulletType, F_intervalSpread), "F", 1 },
	{ "intervalAngle", &class_float, offsetof(mindustry_entities_bullet_BulletType, F_intervalAngle), "F", 1 },
	{ "intervalDelay", &class_float, offsetof(mindustry_entities_bullet_BulletType, F_intervalDelay), "F", 1 },
	{ "underwater", &class_boolean, offsetof(mindustry_entities_bullet_BulletType, F_underwater), "Z", 1 },
	{ "hitColor", &class_arc_graphics_Color, offsetof(mindustry_entities_bullet_BulletType, F_hitColor), "Larc/graphics/Color;", 1 },
	{ "healColor", &class_arc_graphics_Color, offsetof(mindustry_entities_bullet_BulletType, F_healColor), "Larc/graphics/Color;", 1 },
	{ "healEffect", &class_mindustry_entities_Effect, offsetof(mindustry_entities_bullet_BulletType, F_healEffect), "Lmindustry/entities/Effect;", 1 },
	{ "spawnBullets", &class_arc_struct_Seq, offsetof(mindustry_entities_bullet_BulletType, F_spawnBullets), "Larc/struct/Seq;", 1 },
	{ "showStats", &class_boolean, offsetof(mindustry_entities_bullet_BulletType, F_showStats), "Z", 1 },
	{ "spawnBulletRandomSpread", &class_float, offsetof(mindustry_entities_bullet_BulletType, F_spawnBulletRandomSpread), "F", 1 },
	{ "spawnUnit", &class_mindustry_type_UnitType, offsetof(mindustry_entities_bullet_BulletType, F_spawnUnit), "Lmindustry/type/UnitType;", 1 },
	{ "despawnUnit", &class_mindustry_type_UnitType, offsetof(mindustry_entities_bullet_BulletType, F_despawnUnit), "Lmindustry/type/UnitType;", 1 },
	{ "despawnUnitChance", &class_float, offsetof(mindustry_entities_bullet_BulletType, F_despawnUnitChance), "F", 1 },
	{ "despawnUnitCount", &class_int, offsetof(mindustry_entities_bullet_BulletType, F_despawnUnitCount), "I", 1 },
	{ "despawnUnitRadius", &class_float, offsetof(mindustry_entities_bullet_BulletType, F_despawnUnitRadius), "F", 1 },
	{ "faceOutwards", &class_boolean, offsetof(mindustry_entities_bullet_BulletType, F_faceOutwards), "Z", 1 },
	{ "parts", &class_arc_struct_Seq, offsetof(mindustry_entities_bullet_BulletType, F_parts), "Larc/struct/Seq;", 1 },
	{ "trailColor", &class_arc_graphics_Color, offsetof(mindustry_entities_bullet_BulletType, F_trailColor), "Larc/graphics/Color;", 1 },
	{ "trailChance", &class_float, offsetof(mindustry_entities_bullet_BulletType, F_trailChance), "F", 1 },
	{ "trailInterval", &class_float, offsetof(mindustry_entities_bullet_BulletType, F_trailInterval), "F", 1 },
	{ "trailMinVelocity", &class_float, offsetof(mindustry_entities_bullet_BulletType, F_trailMinVelocity), "F", 1 },
	{ "trailEffect", &class_mindustry_entities_Effect, offsetof(mindustry_entities_bullet_BulletType, F_trailEffect), "Lmindustry/entities/Effect;", 1 },
	{ "trailSpread", &class_float, offsetof(mindustry_entities_bullet_BulletType, F_trailSpread), "F", 1 },
	{ "trailParam", &class_float, offsetof(mindustry_entities_bullet_BulletType, F_trailParam), "F", 1 },
	{ "trailRotation", &class_boolean, offsetof(mindustry_entities_bullet_BulletType, F_trailRotation), "Z", 1 },
	{ "trailInterp", &class_arc_math_Interp, offsetof(mindustry_entities_bullet_BulletType, F_trailInterp), "Larc/math/Interp;", 1 },
	{ "trailLength", &class_int, offsetof(mindustry_entities_bullet_BulletType, F_trailLength), "I", 1 },
	{ "trailWidth", &class_float, offsetof(mindustry_entities_bullet_BulletType, F_trailWidth), "F", 1 },
	{ "trailSinMag", &class_float, offsetof(mindustry_entities_bullet_BulletType, F_trailSinMag), "F", 1 },
	{ "trailSinScl", &class_float, offsetof(mindustry_entities_bullet_BulletType, F_trailSinScl), "F", 1 },
	{ "circleShooter", &class_boolean, offsetof(mindustry_entities_bullet_BulletType, F_circleShooter), "Z", 1 },
	{ "circleShooterRadius", &class_float, offsetof(mindustry_entities_bullet_BulletType, F_circleShooterRadius), "F", 1 },
	{ "circleShooterRadiusSmooth", &class_float, offsetof(mindustry_entities_bullet_BulletType, F_circleShooterRadiusSmooth), "F", 1 },
	{ "circleShooterRotateSpeed", &class_float, offsetof(mindustry_entities_bullet_BulletType, F_circleShooterRotateSpeed), "F", 1 },
	{ "splashDamageRadius", &class_float, offsetof(mindustry_entities_bullet_BulletType, F_splashDamageRadius), "F", 1 },
	{ "splashDamagePierce", &class_boolean, offsetof(mindustry_entities_bullet_BulletType, F_splashDamagePierce), "Z", 1 },
	{ "incendAmount", &class_int, offsetof(mindustry_entities_bullet_BulletType, F_incendAmount), "I", 1 },
	{ "incendSpread", &class_float, offsetof(mindustry_entities_bullet_BulletType, F_incendSpread), "F", 1 },
	{ "incendChance", &class_float, offsetof(mindustry_entities_bullet_BulletType, F_incendChance), "F", 1 },
	{ "homingPower", &class_float, offsetof(mindustry_entities_bullet_BulletType, F_homingPower), "F", 1 },
	{ "homingRange", &class_float, offsetof(mindustry_entities_bullet_BulletType, F_homingRange), "F", 1 },
	{ "homingDelay", &class_float, offsetof(mindustry_entities_bullet_BulletType, F_homingDelay), "F", 1 },
	{ "followAimSpeed", &class_float, offsetof(mindustry_entities_bullet_BulletType, F_followAimSpeed), "F", 1 },
	{ "suppressionRange", &class_float, offsetof(mindustry_entities_bullet_BulletType, F_suppressionRange), "F", 1 },
	{ "suppressionDuration", &class_float, offsetof(mindustry_entities_bullet_BulletType, F_suppressionDuration), "F", 1 },
	{ "suppressionEffectChance", &class_float, offsetof(mindustry_entities_bullet_BulletType, F_suppressionEffectChance), "F", 1 },
	{ "suppressColor", &class_arc_graphics_Color, offsetof(mindustry_entities_bullet_BulletType, F_suppressColor), "Larc/graphics/Color;", 1 },
	{ "lightningColor", &class_arc_graphics_Color, offsetof(mindustry_entities_bullet_BulletType, F_lightningColor), "Larc/graphics/Color;", 1 },
	{ "lightning", &class_int, offsetof(mindustry_entities_bullet_BulletType, F_lightning), "I", 1 },
	{ "lightningLength", &class_int, offsetof(mindustry_entities_bullet_BulletType, F_lightningLength), "I", 1 },
	{ "lightningLengthRand", &class_int, offsetof(mindustry_entities_bullet_BulletType, F_lightningLengthRand), "I", 1 },
	{ "lightningDamage", &class_float, offsetof(mindustry_entities_bullet_BulletType, F_lightningDamage), "F", 1 },
	{ "lightningCone", &class_float, offsetof(mindustry_entities_bullet_BulletType, F_lightningCone), "F", 1 },
	{ "lightningAngle", &class_float, offsetof(mindustry_entities_bullet_BulletType, F_lightningAngle), "F", 1 },
	{ "lightningType", &class_mindustry_entities_bullet_BulletType, offsetof(mindustry_entities_bullet_BulletType, F_lightningType), "Lmindustry/entities/bullet/BulletType;", 1 },
	{ "weaveScale", &class_float, offsetof(mindustry_entities_bullet_BulletType, F_weaveScale), "F", 1 },
	{ "weaveMag", &class_float, offsetof(mindustry_entities_bullet_BulletType, F_weaveMag), "F", 1 },
	{ "weaveRandom", &class_boolean, offsetof(mindustry_entities_bullet_BulletType, F_weaveRandom), "Z", 1 },
	{ "rotateSpeed", &class_float, offsetof(mindustry_entities_bullet_BulletType, F_rotateSpeed), "F", 1 },
	{ "puddles", &class_int, offsetof(mindustry_entities_bullet_BulletType, F_puddles), "I", 1 },
	{ "puddleRange", &class_float, offsetof(mindustry_entities_bullet_BulletType, F_puddleRange), "F", 1 },
	{ "puddleAmount", &class_float, offsetof(mindustry_entities_bullet_BulletType, F_puddleAmount), "F", 1 },
	{ "puddleLiquid", &class_mindustry_type_Liquid, offsetof(mindustry_entities_bullet_BulletType, F_puddleLiquid), "Lmindustry/type/Liquid;", 1 },
	{ "displayAmmoMultiplier", &class_boolean, offsetof(mindustry_entities_bullet_BulletType, F_displayAmmoMultiplier), "Z", 1 },
	{ "statLiquidConsumed", &class_float, offsetof(mindustry_entities_bullet_BulletType, F_statLiquidConsumed), "F", 1 },
	{ "lightRadius", &class_float, offsetof(mindustry_entities_bullet_BulletType, F_lightRadius), "F", 1 },
	{ "lightOpacity", &class_float, offsetof(mindustry_entities_bullet_BulletType, F_lightOpacity), "F", 1 },
	{ "lightColor", &class_arc_graphics_Color, offsetof(mindustry_entities_bullet_BulletType, F_lightColor), "Larc/graphics/Color;", 1 },
	{ "cachedDps", &class_float, offsetof(mindustry_entities_bullet_BulletType, F_cachedDps), "F", 4 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_entities_bullet_BulletType_float_float, 0, "(FF)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_entities_bullet_BulletType, 0, "()V", 1 },
	{ "copy", (intptr_t) M_mindustry_entities_bullet_BulletType_copy_R_mindustry_entities_bullet_BulletType, VTABLE_mindustry_entities_bullet_BulletType_copy_R_mindustry_entities_bullet_BulletType, "()Lmindustry/entities/bullet/BulletType;", 1 },
	{ "afterPatch", (intptr_t) M_mindustry_entities_bullet_BulletType_afterPatch, VTABLE_mindustry_entities_bullet_BulletType_afterPatch, "()V", 1 },
	{ "load", (intptr_t) M_mindustry_entities_bullet_BulletType_load, VTABLE_mindustry_entities_bullet_BulletType_load, "()V", 1 },
	{ "estimateDPS", (intptr_t) M_mindustry_entities_bullet_BulletType_estimateDPS_R_float, VTABLE_mindustry_entities_bullet_BulletType_estimateDPS_R_float, "()F", 1 },
	{ "calculateRange", (intptr_t) M_mindustry_entities_bullet_BulletType_calculateRange_R_float, VTABLE_mindustry_entities_bullet_BulletType_calculateRange_R_float, "()F", 4 },
	{ "continuousDamage", (intptr_t) M_mindustry_entities_bullet_BulletType_continuousDamage_R_float, VTABLE_mindustry_entities_bullet_BulletType_continuousDamage_R_float, "()F", 1 },
	{ "heals", (intptr_t) M_mindustry_entities_bullet_BulletType_heals_R_boolean, VTABLE_mindustry_entities_bullet_BulletType_heals_R_boolean, "()Z", 1 },
	{ "testCollision", (intptr_t) M_mindustry_entities_bullet_BulletType_testCollision_mindustry_gen_Bullet_mindustry_gen_Building_R_boolean, VTABLE_mindustry_entities_bullet_BulletType_testCollision_mindustry_gen_Bullet_mindustry_gen_Building_R_boolean, "(Lmindustry/gen/Bullet;Lmindustry/gen/Building;)Z", 1 },
	{ "hitTile", (intptr_t) M_mindustry_entities_bullet_BulletType_hitTile_mindustry_gen_Bullet_mindustry_gen_Building_float_float_float_boolean, VTABLE_mindustry_entities_bullet_BulletType_hitTile_mindustry_gen_Bullet_mindustry_gen_Building_float_float_float_boolean, "(Lmindustry/gen/Bullet;Lmindustry/gen/Building;FFFZ)V", 1 },
	{ "hitEntity", (intptr_t) M_mindustry_entities_bullet_BulletType_hitEntity_mindustry_gen_Bullet_mindustry_gen_Hitboxc_float, VTABLE_mindustry_entities_bullet_BulletType_hitEntity_mindustry_gen_Bullet_mindustry_gen_Hitboxc_float, "(Lmindustry/gen/Bullet;Lmindustry/gen/Hitboxc;F)V", 1 },
	{ "handlePierce", (intptr_t) M_mindustry_entities_bullet_BulletType_handlePierce_mindustry_gen_Bullet_float_float_float, VTABLE_mindustry_entities_bullet_BulletType_handlePierce_mindustry_gen_Bullet_float_float_float, "(Lmindustry/gen/Bullet;FFF)V", 1 },
	{ "damageMultiplier", (intptr_t) M_mindustry_entities_bullet_BulletType_damageMultiplier_mindustry_gen_Bullet_R_float, VTABLE_mindustry_entities_bullet_BulletType_damageMultiplier_mindustry_gen_Bullet_R_float, "(Lmindustry/gen/Bullet;)F", 1 },
	{ "hit", (intptr_t) M_mindustry_entities_bullet_BulletType_hit_mindustry_gen_Bullet, VTABLE_mindustry_entities_bullet_BulletType_hit_mindustry_gen_Bullet, "(Lmindustry/gen/Bullet;)V", 1 },
	{ "hit", (intptr_t) M_mindustry_entities_bullet_BulletType_hit_mindustry_gen_Bullet_float_float, VTABLE_mindustry_entities_bullet_BulletType_hit_mindustry_gen_Bullet_float_float, "(Lmindustry/gen/Bullet;FF)V", 1 },
	{ "hit", (intptr_t) M_mindustry_entities_bullet_BulletType_hit_mindustry_gen_Bullet_float_float_boolean, VTABLE_mindustry_entities_bullet_BulletType_hit_mindustry_gen_Bullet_float_float_boolean, "(Lmindustry/gen/Bullet;FFZ)V", 1 },
	{ "createIncend", (intptr_t) M_mindustry_entities_bullet_BulletType_createIncend_mindustry_gen_Bullet_float_float, VTABLE_mindustry_entities_bullet_BulletType_createIncend_mindustry_gen_Bullet_float_float, "(Lmindustry/gen/Bullet;FF)V", 1 },
	{ "createPuddles", (intptr_t) M_mindustry_entities_bullet_BulletType_createPuddles_mindustry_gen_Bullet_float_float, VTABLE_mindustry_entities_bullet_BulletType_createPuddles_mindustry_gen_Bullet_float_float, "(Lmindustry/gen/Bullet;FF)V", 1 },
	{ "createSplashDamage", (intptr_t) M_mindustry_entities_bullet_BulletType_createSplashDamage_mindustry_gen_Bullet_float_float, VTABLE_mindustry_entities_bullet_BulletType_createSplashDamage_mindustry_gen_Bullet_float_float, "(Lmindustry/gen/Bullet;FF)V", 1 },
	{ "createFrags", (intptr_t) M_mindustry_entities_bullet_BulletType_createFrags_mindustry_gen_Bullet_float_float, VTABLE_mindustry_entities_bullet_BulletType_createFrags_mindustry_gen_Bullet_float_float, "(Lmindustry/gen/Bullet;FF)V", 1 },
	{ "createUnits", (intptr_t) M_mindustry_entities_bullet_BulletType_createUnits_mindustry_gen_Bullet_float_float, VTABLE_mindustry_entities_bullet_BulletType_createUnits_mindustry_gen_Bullet_float_float, "(Lmindustry/gen/Bullet;FF)V", 1 },
	{ "despawned", (intptr_t) M_mindustry_entities_bullet_BulletType_despawned_mindustry_gen_Bullet, VTABLE_mindustry_entities_bullet_BulletType_despawned_mindustry_gen_Bullet, "(Lmindustry/gen/Bullet;)V", 1 },
	{ "removed", (intptr_t) M_mindustry_entities_bullet_BulletType_removed_mindustry_gen_Bullet, VTABLE_mindustry_entities_bullet_BulletType_removed_mindustry_gen_Bullet, "(Lmindustry/gen/Bullet;)V", 1 },
	{ "buildingDamage", (intptr_t) M_mindustry_entities_bullet_BulletType_buildingDamage_mindustry_gen_Bullet_R_float, VTABLE_mindustry_entities_bullet_BulletType_buildingDamage_mindustry_gen_Bullet_R_float, "(Lmindustry/gen/Bullet;)F", 1 },
	{ "shieldDamage", (intptr_t) M_mindustry_entities_bullet_BulletType_shieldDamage_mindustry_gen_Bullet_R_float, VTABLE_mindustry_entities_bullet_BulletType_shieldDamage_mindustry_gen_Bullet_R_float, "(Lmindustry/gen/Bullet;)F", 1 },
	{ "draw", (intptr_t) M_mindustry_entities_bullet_BulletType_draw_mindustry_gen_Bullet, VTABLE_mindustry_entities_bullet_BulletType_draw_mindustry_gen_Bullet, "(Lmindustry/gen/Bullet;)V", 1 },
	{ "drawTrail", (intptr_t) M_mindustry_entities_bullet_BulletType_drawTrail_mindustry_gen_Bullet, VTABLE_mindustry_entities_bullet_BulletType_drawTrail_mindustry_gen_Bullet, "(Lmindustry/gen/Bullet;)V", 1 },
	{ "drawParts", (intptr_t) M_mindustry_entities_bullet_BulletType_drawParts_mindustry_gen_Bullet, VTABLE_mindustry_entities_bullet_BulletType_drawParts_mindustry_gen_Bullet, "(Lmindustry/gen/Bullet;)V", 1 },
	{ "drawLight", (intptr_t) M_mindustry_entities_bullet_BulletType_drawLight_mindustry_gen_Bullet, VTABLE_mindustry_entities_bullet_BulletType_drawLight_mindustry_gen_Bullet, "(Lmindustry/gen/Bullet;)V", 1 },
	{ "init", (intptr_t) M_mindustry_entities_bullet_BulletType_init_mindustry_gen_Bullet, VTABLE_mindustry_entities_bullet_BulletType_init_mindustry_gen_Bullet, "(Lmindustry/gen/Bullet;)V", 1 },
	{ "update", (intptr_t) M_mindustry_entities_bullet_BulletType_update_mindustry_gen_Bullet, VTABLE_mindustry_entities_bullet_BulletType_update_mindustry_gen_Bullet, "(Lmindustry/gen/Bullet;)V", 1 },
	{ "updateBulletInterval", (intptr_t) M_mindustry_entities_bullet_BulletType_updateBulletInterval_mindustry_gen_Bullet, VTABLE_mindustry_entities_bullet_BulletType_updateBulletInterval_mindustry_gen_Bullet, "(Lmindustry/gen/Bullet;)V", 1 },
	{ "updateHoming", (intptr_t) M_mindustry_entities_bullet_BulletType_updateHoming_mindustry_gen_Bullet, VTABLE_mindustry_entities_bullet_BulletType_updateHoming_mindustry_gen_Bullet, "(Lmindustry/gen/Bullet;)V", 1 },
	{ "updateWeaving", (intptr_t) M_mindustry_entities_bullet_BulletType_updateWeaving_mindustry_gen_Bullet, VTABLE_mindustry_entities_bullet_BulletType_updateWeaving_mindustry_gen_Bullet, "(Lmindustry/gen/Bullet;)V", 1 },
	{ "updateTrailEffects", (intptr_t) M_mindustry_entities_bullet_BulletType_updateTrailEffects_mindustry_gen_Bullet, VTABLE_mindustry_entities_bullet_BulletType_updateTrailEffects_mindustry_gen_Bullet, "(Lmindustry/gen/Bullet;)V", 1 },
	{ "updateTrail", (intptr_t) M_mindustry_entities_bullet_BulletType_updateTrail_mindustry_gen_Bullet, VTABLE_mindustry_entities_bullet_BulletType_updateTrail_mindustry_gen_Bullet, "(Lmindustry/gen/Bullet;)V", 1 },
	{ "init", (intptr_t) M_mindustry_entities_bullet_BulletType_init, VTABLE_mindustry_entities_bullet_BulletType_init, "()V", 1 },
	{ "getContentType", (intptr_t) M_mindustry_entities_bullet_BulletType_getContentType_R_mindustry_ctype_ContentType, VTABLE_mindustry_entities_bullet_BulletType_getContentType_R_mindustry_ctype_ContentType, "()Lmindustry/ctype/ContentType;", 1 },
	{ "create", (intptr_t) M_mindustry_entities_bullet_BulletType_create_mindustry_gen_Teamc_float_float_float_R_mindustry_gen_Bullet, VTABLE_mindustry_entities_bullet_BulletType_create_mindustry_gen_Teamc_float_float_float_R_mindustry_gen_Bullet, "(Lmindustry/gen/Teamc;FFF)Lmindustry/gen/Bullet;", 1 },
	{ "create", (intptr_t) M_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_R_mindustry_gen_Bullet, VTABLE_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_R_mindustry_gen_Bullet, "(Lmindustry/gen/Entityc;Lmindustry/game/Team;FFF)Lmindustry/gen/Bullet;", 1 },
	{ "create", (intptr_t) M_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_R_mindustry_gen_Bullet, VTABLE_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_R_mindustry_gen_Bullet, "(Lmindustry/gen/Entityc;Lmindustry/game/Team;FFFF)Lmindustry/gen/Bullet;", 1 },
	{ "create", (intptr_t) M_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_R_mindustry_gen_Bullet, VTABLE_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_R_mindustry_gen_Bullet, "(Lmindustry/gen/Entityc;Lmindustry/game/Team;FFFFF)Lmindustry/gen/Bullet;", 1 },
	{ "create", (intptr_t) M_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_mindustry_entities_Mover_R_mindustry_gen_Bullet, VTABLE_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_mindustry_entities_Mover_R_mindustry_gen_Bullet, "(Lmindustry/gen/Entityc;Lmindustry/game/Team;FFFFFLmindustry/entities/Mover;)Lmindustry/gen/Bullet;", 1 },
	{ "create", (intptr_t) M_mindustry_entities_bullet_BulletType_create_mindustry_gen_Bullet_float_float_float_R_mindustry_gen_Bullet, VTABLE_mindustry_entities_bullet_BulletType_create_mindustry_gen_Bullet_float_float_float_R_mindustry_gen_Bullet, "(Lmindustry/gen/Bullet;FFF)Lmindustry/gen/Bullet;", 1 },
	{ "create", (intptr_t) M_mindustry_entities_bullet_BulletType_create_mindustry_gen_Bullet_float_float_float_float_float_R_mindustry_gen_Bullet, VTABLE_mindustry_entities_bullet_BulletType_create_mindustry_gen_Bullet_float_float_float_float_float_R_mindustry_gen_Bullet, "(Lmindustry/gen/Bullet;FFFFF)Lmindustry/gen/Bullet;", 1 },
	{ "create", (intptr_t) M_mindustry_entities_bullet_BulletType_create_mindustry_gen_Bullet_float_float_float_float_R_mindustry_gen_Bullet, VTABLE_mindustry_entities_bullet_BulletType_create_mindustry_gen_Bullet_float_float_float_float_R_mindustry_gen_Bullet, "(Lmindustry/gen/Bullet;FFFF)Lmindustry/gen/Bullet;", 1 },
	{ "create", (intptr_t) M_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_float_java_lang_Object_R_mindustry_gen_Bullet, VTABLE_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_float_java_lang_Object_R_mindustry_gen_Bullet, "(Lmindustry/gen/Entityc;Lmindustry/game/Team;FFFFFFLjava/lang/Object;)Lmindustry/gen/Bullet;", 1 },
	{ "create", (intptr_t) M_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_float_java_lang_Object_mindustry_entities_Mover_R_mindustry_gen_Bullet, VTABLE_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_float_java_lang_Object_mindustry_entities_Mover_R_mindustry_gen_Bullet, "(Lmindustry/gen/Entityc;Lmindustry/game/Team;FFFFFFLjava/lang/Object;Lmindustry/entities/Mover;)Lmindustry/gen/Bullet;", 1 },
	{ "create", (intptr_t) M_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_float_java_lang_Object_mindustry_entities_Mover_float_float_R_mindustry_gen_Bullet, VTABLE_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_float_java_lang_Object_mindustry_entities_Mover_float_float_R_mindustry_gen_Bullet, "(Lmindustry/gen/Entityc;Lmindustry/game/Team;FFFFFFLjava/lang/Object;Lmindustry/entities/Mover;FF)Lmindustry/gen/Bullet;", 1 },
	{ "create", (intptr_t) M_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_float_java_lang_Object_mindustry_entities_Mover_float_float_R_mindustry_gen_Bullet, VTABLE_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_float_java_lang_Object_mindustry_entities_Mover_float_float_R_mindustry_gen_Bullet, "(Lmindustry/gen/Entityc;Lmindustry/gen/Entityc;Lmindustry/game/Team;FFFFFFLjava/lang/Object;Lmindustry/entities/Mover;FF)Lmindustry/gen/Bullet;", 1 },
	{ "create", (intptr_t) M_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_float_java_lang_Object_mindustry_entities_Mover_float_float_mindustry_gen_Teamc_R_mindustry_gen_Bullet, VTABLE_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_float_java_lang_Object_mindustry_entities_Mover_float_float_mindustry_gen_Teamc_R_mindustry_gen_Bullet, "(Lmindustry/gen/Entityc;Lmindustry/gen/Entityc;Lmindustry/game/Team;FFFFFFLjava/lang/Object;Lmindustry/entities/Mover;FFLmindustry/gen/Teamc;)Lmindustry/gen/Bullet;", 1 },
	{ "createNet", (intptr_t) M_mindustry_entities_bullet_BulletType_createNet_mindustry_game_Team_float_float_float_float_float_float, VTABLE_mindustry_entities_bullet_BulletType_createNet_mindustry_game_Team_float_float_float_float_float_float, "(Lmindustry/game/Team;FFFFFF)V", 1 },
	{ "createBullet", (intptr_t) SM_mindustry_entities_bullet_BulletType_createBullet_mindustry_entities_bullet_BulletType_mindustry_game_Team_float_float_float_float_float_float, 0, "(Lmindustry/entities/bullet/BulletType;Lmindustry/game/Team;FFFFFF)V", 9 },
	{ "lambda$updateHoming$3", (intptr_t) M_mindustry_entities_bullet_BulletType_lambda$updateHoming$3_mindustry_gen_Bullet_mindustry_gen_Building_R_boolean, VTABLE_mindustry_entities_bullet_BulletType_lambda$updateHoming$3_mindustry_gen_Bullet_mindustry_gen_Building_R_boolean, "(Lmindustry/gen/Bullet;Lmindustry/gen/Building;)Z", 4098 },
	{ "lambda$updateHoming$2", (intptr_t) M_mindustry_entities_bullet_BulletType_lambda$updateHoming$2_mindustry_gen_Bullet_mindustry_gen_Unit_R_boolean, VTABLE_mindustry_entities_bullet_BulletType_lambda$updateHoming$2_mindustry_gen_Bullet_mindustry_gen_Unit_R_boolean, "(Lmindustry/gen/Bullet;Lmindustry/gen/Unit;)Z", 4098 },
	{ "lambda$updateHoming$1", (intptr_t) M_mindustry_entities_bullet_BulletType_lambda$updateHoming$1_mindustry_gen_Bullet_mindustry_gen_Building_R_boolean, VTABLE_mindustry_entities_bullet_BulletType_lambda$updateHoming$1_mindustry_gen_Bullet_mindustry_gen_Building_R_boolean, "(Lmindustry/gen/Bullet;Lmindustry/gen/Building;)Z", 4098 },
	{ "lambda$updateHoming$0", (intptr_t) M_mindustry_entities_bullet_BulletType_lambda$updateHoming$0_mindustry_gen_Bullet_mindustry_gen_Unit_R_boolean, VTABLE_mindustry_entities_bullet_BulletType_lambda$updateHoming$0_mindustry_gen_Bullet_mindustry_gen_Unit_R_boolean, "(Lmindustry/gen/Bullet;Lmindustry/gen/Unit;)Z", 4098 },
	{ "lambda$createSplashDamage$2", (intptr_t) SM_mindustry_entities_bullet_BulletType_lambda$createSplashDamage$2_mindustry_gen_Building, 0, "(Lmindustry/gen/Building;)V", 4106 },
	{ "lambda$createSplashDamage$1", (intptr_t) SM_mindustry_entities_bullet_BulletType_lambda$createSplashDamage$1_mindustry_gen_Bullet_mindustry_gen_Building_R_boolean, 0, "(Lmindustry/gen/Bullet;Lmindustry/gen/Building;)Z", 4106 },
	{ "lambda$createSplashDamage$0", (intptr_t) M_mindustry_entities_bullet_BulletType_lambda$createSplashDamage$0_mindustry_gen_Building, VTABLE_mindustry_entities_bullet_BulletType_lambda$createSplashDamage$0_mindustry_gen_Building, "(Lmindustry/gen/Building;)V", 4098 },
	{ "lambda$hit$0", (intptr_t) M_mindustry_entities_bullet_BulletType_lambda$hit$0_mindustry_gen_Bullet_float_float, VTABLE_mindustry_entities_bullet_BulletType_lambda$hit$0_mindustry_gen_Bullet_float_float, "(Lmindustry/gen/Bullet;FF)V", 4098 },
	{ "<clinit>", (intptr_t) clinit_mindustry_entities_bullet_BulletType, 0, "()V", 8 },
};

Class class_mindustry_entities_bullet_BulletType{
		.nativeName = (intptr_t) "mindustry/entities/bullet/BulletType",
		.parentClass = (intptr_t) &class_mindustry_ctype_Content,
		.size = sizeof(mindustry_entities_bullet_BulletType),
		.classVtable = (intptr_t) vtable_mindustry_entities_bullet_BulletType,
		.staticInitializer = (intptr_t) clinit_mindustry_entities_bullet_BulletType,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_entities_bullet_BulletType,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 181,
		.nativeFields = (intptr_t) fields,
		.methodCount = 63,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 77,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_entities_bullet_BulletType = registerClass(&class_mindustry_entities_bullet_BulletType);

}
