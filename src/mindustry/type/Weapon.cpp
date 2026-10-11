#include "mindustry/type/Weapon.h"
#include "mindustry/content/Bullets.h"
#include "arc/math/Angles.h"
#include "mindustry/entities/Sized.h"
#include "arc/graphics/Color.h"
#include "arc/graphics/g2d/Draw.h"
#include "java/lang/Runnable.h"
#include "java/lang/reflect/Constructor.h"
#include "mindustry/entities/Effect.h"
#include "mindustry/content/Fx.h"
#include "mindustry/gen/Entityc.h"
#include "arc/util/Tmp.h"
#include "arc/struct/Seq.h"
#include "arc/scene/ui/layout/Cell.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/entities/Predict.h"
#include "mindustry/entities/Mover.h"
#include "mindustry/type/Weapon_invoke_arc_func_Func_1.h"
#include "arc/math/geom/Position.h"
#include "java/lang/Throwable.h"
#include "arc/func/Boolf.h"
#include "arc/graphics/Blending.h"
#include "arc/math/Mathf.h"
#include "arc/func/Func.h"
#include "arc/Core.h"
#include "java/lang/reflect/Field.h"
#include "mindustry/gen/Unit.h"
#include "java/util/Iterator.h"
#include "mindustry/gen/Sounds.h"
#include "java/lang/Cloneable.h"
#include "arc/util/Time.h"
#include "arc/util/Nullable.h"
#include "mindustry/entities/units/UnitController.h"
#include "mindustry/gen/Building.h"
#include "mindustry/gen/Posc.h"
#include "java/lang/Object.h"
#include "mindustry/gen/Bullet.h"
#include "mindustry/entities/Units.h"
#include "mindustry/gen/Hitboxc.h"
#include "java/lang/RuntimeException.h"
#include "mindustry/entities/bullet/BulletType.h"
#include "arc/struct/ObjectMap.h"
#include "arc/math/geom/Vec2.h"
#include "mindustry/type/Weapon.h"
#include "arc/graphics/g2d/TextureAtlas_AtlasRegion.h"
#include "mindustry/world/Block.h"
#include "mindustry/world/meta/StatUnit.h"
#include "mindustry/world/meta/StatValue.h"
#include "mindustry/audio/SoundLoop.h"
#include "mindustry/type/Weapon_invoke_mindustry_entities_pattern_ShootPattern_BulletHandler_1.h"
#include "mindustry/gen/Unitc.h"
#include "mindustry/content/StatusEffects.h"
#include "mindustry/world/meta/Stat.h"
#include "java/lang/String.h"
#include "mindustry/core/Control.h"
#include "mindustry/entities/units/WeaponMount.h"
#include "mindustry/entities/pattern/ShootPattern_BulletHandler.h"
#include "mindustry/ai/types/MissileAI.h"
#include "java/lang/Math.h"
#include "arc/graphics/g2d/TextureAtlas.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "mindustry/gen/Teamc.h"
#include "mindustry/entities/part/DrawPart_PartParams.h"
#include "arc/scene/ui/layout/Table.h"
#include "mindustry/type/Weapon_invoke_arc_func_Boolf_2.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/type/Weapon_invoke_arc_func_Boolf_3.h"
#include "mindustry/type/StatusEffect.h"
#include "mindustry/world/meta/StatValues.h"
#include "mindustry/entities/part/DrawPart.h"
#include "java/lang/CloneNotSupportedException.h"
#include "mindustry/type/UnitType.h"
#include "java/lang/CharSequence.h"
#include "arc/util/Strings.h"
#include "mindustry/graphics/Pal.h"
#include "arc/audio/Sound.h"
#include "mindustry/graphics/Drawf.h"
#include "mindustry/gen/Statusc.h"
#include "java/lang/Class.h"
#include "mindustry/game/Team.h"
#include "mindustry/type/Weapon_invoke_java_lang_Runnable_2.h"
#include "mindustry/entities/pattern/ShootPattern.h"
#include "mindustry/Vars.h"
#include "mindustry/audio/SoundControl.h"
#include "mindustry/type/Weapon_invoke_java_lang_Runnable_3.h"

extern "C" {


void mark_mindustry_type_Weapon(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_type_Weapon *) object;
	if (self->F_name)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_name)->clazz)->markFunction)((jobject) self->F_name, mark, depth + 1);
	if (self->F_bullet)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_bullet)->clazz)->markFunction)((jobject) self->F_bullet, mark, depth + 1);
	if (self->F_ejectEffect)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_ejectEffect)->clazz)->markFunction)((jobject) self->F_ejectEffect, mark, depth + 1);
	if (self->F_shoot)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_shoot)->clazz)->markFunction)((jobject) self->F_shoot, mark, depth + 1);
	if (self->F_activeSound)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_activeSound)->clazz)->markFunction)((jobject) self->F_activeSound, mark, depth + 1);
	if (self->F_shootSound)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_shootSound)->clazz)->markFunction)((jobject) self->F_shootSound, mark, depth + 1);
	if (self->F_initialShootSound)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_initialShootSound)->clazz)->markFunction)((jobject) self->F_initialShootSound, mark, depth + 1);
	if (self->F_chargeSound)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_chargeSound)->clazz)->markFunction)((jobject) self->F_chargeSound, mark, depth + 1);
	if (self->F_region)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_region)->clazz)->markFunction)((jobject) self->F_region, mark, depth + 1);
	if (self->F_heatRegion)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_heatRegion)->clazz)->markFunction)((jobject) self->F_heatRegion, mark, depth + 1);
	if (self->F_cellRegion)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_cellRegion)->clazz)->markFunction)((jobject) self->F_cellRegion, mark, depth + 1);
	if (self->F_outlineRegion)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_outlineRegion)->clazz)->markFunction)((jobject) self->F_outlineRegion, mark, depth + 1);
	if (self->F_heatColor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_heatColor)->clazz)->markFunction)((jobject) self->F_heatColor, mark, depth + 1);
	if (self->F_shootStatus)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_shootStatus)->clazz)->markFunction)((jobject) self->F_shootStatus, mark, depth + 1);
	if (self->F_mountType)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_mountType)->clazz)->markFunction)((jobject) self->F_mountType, mark, depth + 1);
	if (self->F_shootOnDeathEffect)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_shootOnDeathEffect)->clazz)->markFunction)((jobject) self->F_shootOnDeathEffect, mark, depth + 1);
	if (self->F_parts)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_parts)->clazz)->markFunction)((jobject) self->F_parts, mark, depth + 1);
}

void clinit_mindustry_type_Weapon(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_type_Weapon_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Weapon:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_type_Weapon(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(169);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(33);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Bullets(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Bullets_placeholder;
	((mindustry_type_Weapon *) NULL_CHECK(sp[0].o))->F_bullet = (jref) sp[1].o;
	LINE_NUMBER(35);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_none;
	((mindustry_type_Weapon *) NULL_CHECK(sp[0].o))->F_ejectEffect = (jref) sp[1].o;
	LINE_NUMBER(37);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_display = (jint(1));
	LINE_NUMBER(39);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_mirror = (jint(1));
	LINE_NUMBER(41);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_flipSprite = (jint(0));
	LINE_NUMBER(43);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_alternate = (jint(1));
	LINE_NUMBER(45);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_rotate = (jint(0));
	LINE_NUMBER(47);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_showStatSprite = (jint(1));
	LINE_NUMBER(49);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_baseRotation = (jfloat(0));
	LINE_NUMBER(51);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_top = (jint(1));
	LINE_NUMBER(57);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_aimChangeSpeed = (jfloat(std::numeric_limits<float>::infinity()));
	LINE_NUMBER(59);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_controllable = (jint(1));
	LINE_NUMBER(61);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_aiControllable = (jint(1));
	LINE_NUMBER(63);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_alwaysShooting = (jint(0));
	LINE_NUMBER(65);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_autoTarget = (jint(0));
	LINE_NUMBER(67);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_predictTarget = (jint(1));
	LINE_NUMBER(69);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_useAttackRange = (jint(1));
	LINE_NUMBER(71);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_targetInterval = (jfloat(40.0f));
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_targetSwitchInterval = (jfloat(70.0f));
	LINE_NUMBER(73);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_rotateSpeed = (jfloat(20.0f));
	LINE_NUMBER(75);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_reload = (jfloat(1));
	LINE_NUMBER(77);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_inaccuracy = (jfloat(0));
	LINE_NUMBER(79);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_shake = (jfloat(0));
	LINE_NUMBER(81);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_recoil = (jfloat(1.5f));
	LINE_NUMBER(83);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_recoils = (jint(-1));
	LINE_NUMBER(85);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_recoilTime = (jfloat(-1.0f));
	LINE_NUMBER(87);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_recoilPow = (jfloat(1.8f));
	LINE_NUMBER(89);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_cooldownTime = (jfloat(20.0f));
	LINE_NUMBER(91);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_shootX = (jfloat(0));
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_shootY = (jfloat(3.0f));
	LINE_NUMBER(93);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_x = (jfloat(5.0f));
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_y = (jfloat(0));
	LINE_NUMBER(95);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_xRand = (jfloat(0));
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_yRand = (jfloat(0));
	LINE_NUMBER(97);
	sp[0].o = frame[0].o;
	clinit_mindustry_entities_pattern_ShootPattern(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_entities_pattern_ShootPattern);
	init_mindustry_entities_pattern_ShootPattern(ctx, sp[1].o);
	((mindustry_type_Weapon *) NULL_CHECK(sp[0].o))->F_shoot = (jref) sp[1].o;
	LINE_NUMBER(99);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_shadow = (jfloat(-1.0f));
	LINE_NUMBER(101);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_velocityRnd = (jfloat(0));
	LINE_NUMBER(103);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_extraVelocity = (jfloat(0));
	LINE_NUMBER(105);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_lifeRnd = (jfloat(0));
	LINE_NUMBER(107);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_extraLife = (jfloat(0));
	LINE_NUMBER(109);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_shootCone = (jfloat(5.0f));
	LINE_NUMBER(111);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_rotationLimit = (jfloat(361.0f));
	LINE_NUMBER(113);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_minWarmup = (jfloat(0));
	LINE_NUMBER(115);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_shootWarmupSpeed = (jfloat(0.1f));
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_smoothReloadSpeed = (jfloat(0.15f));
	LINE_NUMBER(117);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_linearWarmup = (jint(0));
	LINE_NUMBER(119);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_soundPitchMin = (jfloat(0.8f));
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_soundPitchMax = (jfloat(1));
	LINE_NUMBER(121);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_ignoreRotation = (jint(0));
	LINE_NUMBER(123);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_noAttack = (jint(0));
	LINE_NUMBER(125);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_minShootVelocity = (jfloat(-1.0f));
	LINE_NUMBER(127);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_maxShootVelocity = (jfloat(-1.0f));
	LINE_NUMBER(131);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_otherSide = (jint(-1));
	LINE_NUMBER(133);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_layerOffset = (jfloat(0));
	LINE_NUMBER(135);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_none;
	((mindustry_type_Weapon *) NULL_CHECK(sp[0].o))->F_activeSound = (jref) sp[1].o;
	LINE_NUMBER(137);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_activeSoundVolume = (jfloat(1));
	LINE_NUMBER(139);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_shoot;
	((mindustry_type_Weapon *) NULL_CHECK(sp[0].o))->F_shootSound = (jref) sp[1].o;
	LINE_NUMBER(141);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_shootSoundVolume = (jfloat(1));
	LINE_NUMBER(143);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_none;
	((mindustry_type_Weapon *) NULL_CHECK(sp[0].o))->F_initialShootSound = (jref) sp[1].o;
	LINE_NUMBER(145);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_none;
	((mindustry_type_Weapon *) NULL_CHECK(sp[0].o))->F_chargeSound = (jref) sp[1].o;
	LINE_NUMBER(155);
	sp[0].o = frame[0].o;
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_turretHeat;
	((mindustry_type_Weapon *) NULL_CHECK(sp[0].o))->F_heatColor = (jref) sp[1].o;
	LINE_NUMBER(157);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_StatusEffects(ctx);
	sp[1].o = (jobject)SF_mindustry_content_StatusEffects_none;
	((mindustry_type_Weapon *) NULL_CHECK(sp[0].o))->F_shootStatus = (jref) sp[1].o;
	LINE_NUMBER(159);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_type_Weapon_invoke_arc_func_Func_1(ctx);
		auto proxy = (mindustry_type_Weapon_invoke_arc_func_Func_1 *) gcAlloc(ctx, &class_mindustry_type_Weapon_invoke_arc_func_Func_1);
		sp[1].o = (jobject) proxy;
	}
	((mindustry_type_Weapon *) NULL_CHECK(sp[0].o))->F_mountType = (jref) sp[1].o;
	LINE_NUMBER(161);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_shootStatusDuration = (jfloat(300.0f));
	LINE_NUMBER(163);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_shootOnDeath = (jint(0));
	LINE_NUMBER(165);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_shootOnDeathEffect = (jref) (jobject(nullptr));
	LINE_NUMBER(167);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq_java_lang_Class(ctx, sp[1].o, (((jobject) &class_mindustry_entities_part_DrawPart)));
	((mindustry_type_Weapon *) NULL_CHECK(sp[0].o))->F_parts = (jref) sp[1].o;
	LINE_NUMBER(170);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_name = (jref) (frame[1].o);
	LINE_NUMBER(171);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_type_Weapon(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Weapon:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_type_Weapon(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(174);
	init_mindustry_type_Weapon_java_lang_String(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8""_j))));
	LINE_NUMBER(175);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_type_Weapon_hasStats_mindustry_type_UnitType_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Weapon:hasStats", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(178);
	popStackFrame(ctx);
	return ((jint)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_display);
	}

	popStackFrame(ctx);
}

void M_mindustry_type_Weapon_addStats_mindustry_type_UnitType_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Weapon:addStats", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(182);
	if ((floatCompare(((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_inaccuracy), (jfloat(0)), -1)) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(183);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	LINE_NUMBER(184);
	sp[0].o = frame[2].o;
	clinit_mindustry_world_meta_Stat(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_Stat_inaccuracy;
	sp[1].o = (jobject)((func_mindustry_world_meta_Stat_localized_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_meta_Stat_localized_R_java_lang_String])(ctx, sp[1].o);
	jint temp0 = jint(((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_inaccuracy));
	clinit_mindustry_world_meta_StatUnit(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_StatUnit_degrees;
	sp[2].o = (jobject)((func_mindustry_world_meta_StatUnit_localized_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_world_meta_StatUnit_localized_R_java_lang_String])(ctx, sp[2].o);
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"[lightgray]\u0001: [white]\u0001 \u0001"_j.string, 3, sp[1].o, boxInteger(ctx, temp0), sp[2].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	}
label_1:;
	{
	LINE_NUMBER(186);
	if (((jint)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_alwaysContinuous) != 0) goto label_4;
	}
	{
	if ((floatCompare(((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_reload), (jfloat(0)), -1)) <= 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_bullet;
	if (((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_killShooter) != 0) goto label_4;
	}
	{
	LINE_NUMBER(187);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	LINE_NUMBER(188);
	sp[0].o = frame[2].o;
	clinit_mindustry_world_meta_Stat(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_Stat_reload;
	sp[1].o = (jobject)((func_mindustry_world_meta_Stat_localized_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_meta_Stat_localized_R_java_lang_String])(ctx, sp[1].o);
	sp += 2;
	if (((jint)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_mirror) == 0) goto label_7;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"2x "_j));
	goto label_8;
label_7:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
label_8:;
	{
	sp -= 3;
	jfloat temp0 = (jfloat(60.0f)) / ((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_reload);
	sp[3].o = (jobject)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_shoot;
	sp[3].o = (jobject)SM_arc_util_Strings_autoFixed_float_int_R_java_lang_String(ctx, (temp0 * (jfloat(((jint)((mindustry_entities_pattern_ShootPattern *) NULL_CHECK(sp[3].o))->F_shots)))), (jint(2)));
	clinit_mindustry_world_meta_StatUnit(ctx);
	sp[4].o = (jobject)SF_mindustry_world_meta_StatUnit_perSecond;
	sp[4].o = (jobject)((func_mindustry_world_meta_StatUnit_localized_R_java_lang_String) ((void **) nullCheck(ctx, sp[4].o)->vtable)[VTABLE_mindustry_world_meta_StatUnit_localized_R_java_lang_String])(ctx, sp[4].o);
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"[lightgray]\u0001: \u0001[white]\u0001 \u0001"_j.string, 4, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	}
label_4:;
	{
	LINE_NUMBER(191);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(2)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (frame[1].o);
	jint temp0 = jint(1);
	sp[1].o = (jobject)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_bullet;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	sp[0].o = (jobject)SM_arc_struct_ObjectMap_of_Array1_java_lang_Object_R_arc_struct_ObjectMap(ctx, sp[0].o);
	sp[0].o = (jobject)SM_mindustry_world_meta_StatValues_ammo_arc_struct_ObjectMap_R_mindustry_world_meta_StatValue(ctx, sp[0].o);
	((func_mindustry_world_meta_StatValue_display_arc_scene_ui_layout_Table) resolveInterfaceMethod(ctx, &class_mindustry_world_meta_StatValue, INDEX_mindustry_world_meta_StatValue_display_arc_scene_ui_layout_Table, sp[0].o))(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(192);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_type_Weapon_dps_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Weapon:dps", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(195);
	sp[0].o = (jobject)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_bullet;
	jfloat temp0 = (jfloat)((func_mindustry_entities_bullet_BulletType_estimateDPS_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_bullet_BulletType_estimateDPS_R_float])(ctx, sp[0].o);
	jfloat temp1 = temp0 / ((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_reload);
	sp[0].o = (jobject)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_shoot;
	popStackFrame(ctx);
	return ((temp1 * (jfloat(((jint)((mindustry_entities_pattern_ShootPattern *) NULL_CHECK(sp[0].o))->F_shots)))) * (jfloat(60.0f)));
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_type_Weapon_shotsPerSec_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Weapon:shotsPerSec", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(199);
	sp[0].o = (jobject)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_shoot;
	popStackFrame(ctx);
	return (((jfloat(((jint)((mindustry_entities_pattern_ShootPattern *) NULL_CHECK(sp[0].o))->F_shots))) * (jfloat(60.0f))) / ((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_reload));
	}

	popStackFrame(ctx);
}

void M_mindustry_type_Weapon_drawOutline_mindustry_gen_Unit_mindustry_entities_units_WeaponMount(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Weapon:drawOutline", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(204);
	sp[0].o = (jobject)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_outlineRegion;
	jint temp0 = (jint)((func_arc_graphics_g2d_TextureRegion_found_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_found_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(207);
	frame[3].f = (((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_rotation) - (jfloat(90.0f)));
	LINE_NUMBER(208);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_pow_float_float_R_float(ctx, ((jfloat)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_recoil), ((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_recoilPow));
	frame[4].f = (temp0 * ((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_recoil));
	LINE_NUMBER(209);
	jfloat temp1 = frame[3].f;
	sp[0].f = temp1;
	sp += 1;
	if (((jint)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_rotate) == 0) goto label_4;
	}
	{
	jfloat temp0 = (jfloat)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_rotation;
	sp[0].f = temp0;
	sp += 1;
	goto label_5;
	}
label_4:;
	INST_ALOAD(0);
	sp[-1].f = ((mindustry_type_Weapon *) NULL_CHECK(sp[-1].o))->F_baseRotation;
label_5:;
	{
	sp -= 2;
	frame[5].f = (sp[0].f + sp[1].f);
	LINE_NUMBER(210);
	jfloat temp0 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_x;
	jfloat temp1 = (jfloat)SM_arc_math_Angles_trnsx_float_float_float_R_float(ctx, (frame[3].f), ((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_y));
	jfloat temp2 = temp0 + temp1;
	jfloat temp3 = (jfloat)SM_arc_math_Angles_trnsx_float_float_float_R_float(ctx, (frame[5].f), (jfloat(0)), (-(frame[4].f)));
	frame[6].f = (temp2 + temp3);
	LINE_NUMBER(211);
	jfloat temp4 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_y;
	jfloat temp5 = (jfloat)SM_arc_math_Angles_trnsy_float_float_float_R_float(ctx, (frame[3].f), ((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_y));
	jfloat temp6 = temp4 + temp5;
	jfloat temp7 = (jfloat)SM_arc_math_Angles_trnsy_float_float_float_R_float(ctx, (frame[5].f), (jfloat(0)), (-(frame[4].f)));
	frame[7].f = (temp6 + temp7);
	LINE_NUMBER(213);
	jint temp8 = (jint)SM_arc_math_Mathf_sign_boolean_R_int(ctx, ((jint)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_flipSprite));
	clinit_arc_graphics_g2d_Draw(ctx);
	SF_arc_graphics_g2d_Draw_xscl = (jfloat((-temp8)));
	LINE_NUMBER(214);
	sp[0].o = (jobject)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_outlineRegion;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float(ctx, sp[0].o, (frame[6].f), (frame[7].f), (frame[5].f));
	LINE_NUMBER(215);
	clinit_arc_graphics_g2d_Draw(ctx);
	SF_arc_graphics_g2d_Draw_xscl = (jfloat(1));
	LINE_NUMBER(216);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_type_Weapon_draw_mindustry_gen_Unit_mindustry_entities_units_WeaponMount(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[23];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Weapon:draw", 23 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(220);
	jfloat temp0 = (jfloat)SM_arc_graphics_g2d_Draw_z_R_float(ctx);
	frame[3].f = temp0;
	LINE_NUMBER(221);
	SM_arc_graphics_g2d_Draw_z_float(ctx, ((frame[3].f) + ((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_layerOffset)));
	LINE_NUMBER(224);
	frame[4].f = (((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_rotation) - (jfloat(90.0f)));
	LINE_NUMBER(225);
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_pow_float_float_R_float(ctx, ((jfloat)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_recoil), ((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_recoilPow));
	frame[5].f = (temp1 * ((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_recoil));
	LINE_NUMBER(226);
	jfloat temp2 = frame[4].f;
	sp[0].f = temp2;
	sp += 1;
	if (((jint)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_rotate) == 0) goto label_5;
	}
	{
	jfloat temp0 = (jfloat)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_rotation;
	sp[0].f = temp0;
	sp += 1;
	goto label_6;
	}
label_5:;
	INST_ALOAD(0);
	sp[-1].f = ((mindustry_type_Weapon *) NULL_CHECK(sp[-1].o))->F_baseRotation;
label_6:;
	{
	sp -= 2;
	frame[6].f = (sp[0].f + sp[1].f);
	LINE_NUMBER(227);
	jfloat temp0 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_x;
	jfloat temp1 = (jfloat)SM_arc_math_Angles_trnsx_float_float_float_R_float(ctx, (frame[4].f), ((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_y));
	jfloat temp2 = temp0 + temp1;
	jfloat temp3 = (jfloat)SM_arc_math_Angles_trnsx_float_float_float_R_float(ctx, (frame[6].f), (jfloat(0)), (-(frame[5].f)));
	frame[7].f = (temp2 + temp3);
	LINE_NUMBER(228);
	jfloat temp4 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_y;
	jfloat temp5 = (jfloat)SM_arc_math_Angles_trnsy_float_float_float_R_float(ctx, (frame[4].f), ((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_y));
	jfloat temp6 = temp4 + temp5;
	jfloat temp7 = (jfloat)SM_arc_math_Angles_trnsy_float_float_float_R_float(ctx, (frame[6].f), (jfloat(0)), (-(frame[5].f)));
	frame[8].f = (temp6 + temp7);
	LINE_NUMBER(230);
	if ((floatCompare(((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_shadow), (jfloat(0)), -1)) <= 0) goto label_10;
	}
	{
	LINE_NUMBER(231);
	SM_mindustry_graphics_Drawf_shadow_float_float_float(ctx, (frame[7].f), (frame[8].f), ((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_shadow));
	}
label_10:;
	{
	LINE_NUMBER(234);
	if (((jint)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_top) == 0) goto label_12;
	}
	{
	LINE_NUMBER(235);
	((func_mindustry_type_Weapon_drawOutline_mindustry_gen_Unit_mindustry_entities_units_WeaponMount) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_Weapon_drawOutline_mindustry_gen_Unit_mindustry_entities_units_WeaponMount])(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	}
label_12:;
	{
	LINE_NUMBER(238);
	sp[0].o = (jobject)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_parts;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_14;
	}
	{
	LINE_NUMBER(239);
	clinit_mindustry_entities_part_DrawPart(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_part_DrawPart_params;
	sp[0].o = (jobject)((func_mindustry_entities_part_DrawPart$PartParams_set_float_float_float_float_float_float_float_float_float_R_mindustry_entities_part_DrawPart$PartParams) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_part_DrawPart$PartParams_set_float_float_float_float_float_float_float_float_float_R_mindustry_entities_part_DrawPart$PartParams])(ctx, sp[0].o, ((jfloat)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_warmup), (((jfloat)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_reload) / ((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_reload)), ((jfloat)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_smoothReload), ((jfloat)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_heat), ((jfloat)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_recoil), ((jfloat)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_charge), (frame[7].f), (frame[8].f), ((frame[6].f) + (jfloat(90.0f))));
	LINE_NUMBER(240);
	clinit_mindustry_entities_part_DrawPart(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_part_DrawPart_params;
	sp += 1;
	if (((jint)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_flipSprite) == 0) goto label_17;
	}
	INST_ICONST(-1);
	goto label_18;
label_17:;
	INST_ICONST(1);
label_18:;
	{
	sp -= 2;
	((mindustry_entities_part_DrawPart$PartParams *) NULL_CHECK(sp[0].o))->F_sideMultiplier = sp[1].i;
	LINE_NUMBER(242);
	frame[9].i = (jint(0));
	}
label_20:;
	{
	jint temp0 = frame[9].i;
	sp[0].o = (jobject)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_parts;
	if (temp0 >= ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_14;
	}
	{
	LINE_NUMBER(243);
	sp[0].o = (jobject)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_parts;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[9].i));
	frame[10].o = (checkCast(ctx, &class_mindustry_entities_part_DrawPart, sp[0].o));
	LINE_NUMBER(244);
	clinit_mindustry_entities_part_DrawPart(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_part_DrawPart_params;
	sp += 1;
	if (((jint)((mindustry_entities_part_DrawPart *) NULL_CHECK((frame[10].o)))->F_recoilIndex) < 0) goto label_23;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_recoils;
	if (sp[0].o == nullptr) goto label_23;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_recoils;
	jfloat temp0 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, ((jint)((mindustry_entities_part_DrawPart *) NULL_CHECK((frame[10].o)))->F_recoilIndex));
	sp[0].f = temp0;
	sp += 1;
	goto label_24;
	}
label_23:;
	INST_ALOAD(2);
	sp[-1].f = ((mindustry_entities_units_WeaponMount *) NULL_CHECK(sp[-1].o))->F_recoil;
label_24:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_mindustry_entities_part_DrawPart$PartParams_setRecoil_float_R_mindustry_entities_part_DrawPart$PartParams) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_part_DrawPart$PartParams_setRecoil_float_R_mindustry_entities_part_DrawPart$PartParams])(ctx, sp[0].o, sp[1].f);
	LINE_NUMBER(245);
	if (((jint)((mindustry_entities_part_DrawPart *) NULL_CHECK((frame[10].o)))->F_under) == 0) goto label_26;
	}
	{
	LINE_NUMBER(246);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_type;
	((func_mindustry_type_UnitType_applyColor_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_UnitType_applyColor_mindustry_gen_Unit])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(247);
	sp[0].o = frame[10].o;
	clinit_mindustry_entities_part_DrawPart(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_part_DrawPart_params;
	((func_mindustry_entities_part_DrawPart_draw_mindustry_entities_part_DrawPart$PartParams) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_part_DrawPart_draw_mindustry_entities_part_DrawPart$PartParams])(ctx, sp[0].o, sp[1].o);
	}
label_26:;
	{
	LINE_NUMBER(242);
	INST_IINC(9, 1);
	goto label_20;
	}
label_14:;
	{
	LINE_NUMBER(252);
	frame[9].f = (clinit_arc_graphics_g2d_Draw(ctx), (jfloat)SF_arc_graphics_g2d_Draw_xscl);
	LINE_NUMBER(254);
	clinit_arc_graphics_g2d_Draw(ctx);
	jfloat temp0 = (jfloat)SF_arc_graphics_g2d_Draw_xscl;
	jint temp1 = (jint)SM_arc_math_Mathf_sign_boolean_R_int(ctx, ((jint)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_flipSprite));
	clinit_arc_graphics_g2d_Draw(ctx);
	SF_arc_graphics_g2d_Draw_xscl = (temp0 * (jfloat((-temp1))));
	LINE_NUMBER(257);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_type;
	((func_mindustry_type_UnitType_applyColor_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_UnitType_applyColor_mindustry_gen_Unit])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(259);
	sp[0].o = (jobject)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_region;
	jint temp2 = (jint)((func_arc_graphics_g2d_TextureRegion_found_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_found_R_boolean])(ctx, sp[0].o);
	if (temp2 == 0) goto label_32;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_region;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float(ctx, sp[0].o, (frame[7].f), (frame[8].f), (frame[6].f));
	}
label_32:;
	{
	LINE_NUMBER(261);
	sp[0].o = (jobject)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_cellRegion;
	jint temp0 = (jint)((func_arc_graphics_g2d_TextureRegion_found_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_found_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_33;
	}
	{
	LINE_NUMBER(262);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_type;
	sp[0].o = (jobject)((func_mindustry_type_UnitType_cellColor_mindustry_gen_Unit_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_UnitType_cellColor_mindustry_gen_Unit_R_arc_graphics_Color])(ctx, sp[0].o, (frame[1].o));
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(263);
	sp[0].o = (jobject)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_cellRegion;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float(ctx, sp[0].o, (frame[7].f), (frame[8].f), (frame[6].f));
	LINE_NUMBER(264);
	SM_arc_graphics_g2d_Draw_color(ctx);
	}
label_33:;
	{
	LINE_NUMBER(267);
	sp[0].o = (jobject)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_heatRegion;
	jint temp0 = (jint)((func_arc_graphics_g2d_TextureRegion_found_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_found_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_37;
	}
	{
	if ((floatCompare(((jfloat)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_heat), (jfloat(0)), -1)) <= 0) goto label_37;
	}
	{
	LINE_NUMBER(268);
	sp[0].o = (jobject)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_heatColor;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color_float(ctx, sp[0].o, ((jfloat)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_heat));
	LINE_NUMBER(269);
	clinit_arc_graphics_Blending(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Blending_additive;
	SM_arc_graphics_g2d_Draw_blend_arc_graphics_Blending(ctx, sp[0].o);
	LINE_NUMBER(270);
	sp[0].o = (jobject)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_heatRegion;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float(ctx, sp[0].o, (frame[7].f), (frame[8].f), (frame[6].f));
	LINE_NUMBER(271);
	SM_arc_graphics_g2d_Draw_blend(ctx);
	LINE_NUMBER(272);
	SM_arc_graphics_g2d_Draw_color(ctx);
	}
label_37:;
	{
	LINE_NUMBER(275);
	clinit_arc_graphics_g2d_Draw(ctx);
	SF_arc_graphics_g2d_Draw_xscl = (frame[9].f);
	LINE_NUMBER(277);
	sp[0].o = (jobject)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_parts;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_44;
	}
	{
	LINE_NUMBER(279);
	frame[10].i = (jint(0));
	}
label_46:;
	{
	jint temp0 = frame[10].i;
	sp[0].o = (jobject)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_parts;
	if (temp0 >= ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_44;
	}
	{
	LINE_NUMBER(280);
	sp[0].o = (jobject)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_parts;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[10].i));
	frame[11].o = (checkCast(ctx, &class_mindustry_entities_part_DrawPart, sp[0].o));
	LINE_NUMBER(281);
	clinit_mindustry_entities_part_DrawPart(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_part_DrawPart_params;
	sp += 1;
	if (((jint)((mindustry_entities_part_DrawPart *) NULL_CHECK((frame[11].o)))->F_recoilIndex) < 0) goto label_49;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_recoils;
	if (sp[0].o == nullptr) goto label_49;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_recoils;
	jfloat temp0 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, ((jint)((mindustry_entities_part_DrawPart *) NULL_CHECK((frame[11].o)))->F_recoilIndex));
	sp[0].f = temp0;
	sp += 1;
	goto label_50;
	}
label_49:;
	INST_ALOAD(2);
	sp[-1].f = ((mindustry_entities_units_WeaponMount *) NULL_CHECK(sp[-1].o))->F_recoil;
label_50:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_mindustry_entities_part_DrawPart$PartParams_setRecoil_float_R_mindustry_entities_part_DrawPart$PartParams) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_part_DrawPart$PartParams_setRecoil_float_R_mindustry_entities_part_DrawPart$PartParams])(ctx, sp[0].o, sp[1].f);
	LINE_NUMBER(282);
	if (((jint)((mindustry_entities_part_DrawPart *) NULL_CHECK((frame[11].o)))->F_under) != 0) goto label_52;
	}
	{
	LINE_NUMBER(283);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_type;
	((func_mindustry_type_UnitType_applyColor_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_UnitType_applyColor_mindustry_gen_Unit])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(284);
	sp[0].o = frame[11].o;
	clinit_mindustry_entities_part_DrawPart(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_part_DrawPart_params;
	((func_mindustry_entities_part_DrawPart_draw_mindustry_entities_part_DrawPart$PartParams) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_part_DrawPart_draw_mindustry_entities_part_DrawPart$PartParams])(ctx, sp[0].o, sp[1].o);
	}
label_52:;
	{
	LINE_NUMBER(279);
	INST_IINC(10, 1);
	goto label_46;
	}
label_44:;
	{
	LINE_NUMBER(289);
	clinit_arc_graphics_g2d_Draw(ctx);
	SF_arc_graphics_g2d_Draw_xscl = (jfloat(1));
	LINE_NUMBER(291);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (frame[3].f));
	LINE_NUMBER(292);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_type_Weapon_range_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Weapon:range", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(295);
	sp[0].o = (jobject)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_bullet;
	popStackFrame(ctx);
	return ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_range);
	}

	popStackFrame(ctx);
}

void M_mindustry_type_Weapon_update_mindustry_gen_Unit_mindustry_entities_units_WeaponMount(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[23];
	auto stack = &frame[15];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Weapon:update", 23 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(299);
	jint temp0 = (jint)((func_mindustry_gen_Unit_canShoot_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_canShoot_R_boolean])(ctx, (frame[1].o));
	frame[3].i = temp0;
	LINE_NUMBER(300);
	frame[4].f = ((jfloat)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_reload);
	LINE_NUMBER(301);
	sp[0].o = frame[2].o;
	jfloat temp1 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (((jfloat)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_reload) - ((clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta) * ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_reloadMultiplier))), (jfloat(0)));
	((mindustry_entities_units_WeaponMount *) NULL_CHECK(sp[0].o))->F_reload = temp1;
	LINE_NUMBER(302);
	sp[0].o = frame[2].o;
	jfloat temp2 = (jfloat)SM_arc_math_Mathf_approachDelta_float_float_float_R_float(ctx, ((jfloat)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_recoil), (jfloat(0)), (((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_reloadMultiplier) / ((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_recoilTime)));
	((mindustry_entities_units_WeaponMount *) NULL_CHECK(sp[0].o))->F_recoil = temp2;
	LINE_NUMBER(303);
	if (((jint)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_recoils) <= 0) goto label_5;
	}
	{
	LINE_NUMBER(304);
	sp[0].o = (jobject)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_recoils;
	if (sp[0].o != nullptr) goto label_7;
	}
	{
	sp[0].o = frame[2].o;
	sp[1].o = (jobject) createArray(ctx, &class_float, ((jint)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_recoils));
	((mindustry_entities_units_WeaponMount *) NULL_CHECK(sp[0].o))->F_recoils = (jref) sp[1].o;
	}
label_7:;
	{
	LINE_NUMBER(305);
	frame[5].i = (jint(0));
	}
label_8:;
	{
	if ((frame[5].i) >= ((jint)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_recoils)) goto label_5;
	}
	{
	LINE_NUMBER(306);
	sp[0].o = (jobject)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_recoils;
	jint temp0 = frame[5].i;
	sp[1].o = (jobject)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_recoils;
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_approachDelta_float_float_float_R_float(ctx, ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (frame[5].i))), (jfloat(0)), (((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_reloadMultiplier) / ((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_recoilTime)));
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = temp1;
	LINE_NUMBER(305);
	INST_IINC(5, 1);
	goto label_8;
	}
label_5:;
	{
	LINE_NUMBER(309);
	sp[0].o = frame[2].o;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_lerpDelta_float_float_float_R_float(ctx, ((jfloat)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_smoothReload), (((jfloat)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_reload) / ((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_reload)), ((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_smoothReloadSpeed));
	((mindustry_entities_units_WeaponMount *) NULL_CHECK(sp[0].o))->F_smoothReload = temp0;
	LINE_NUMBER(310);
	sp[0].o = frame[2].o;
	sp += 1;
	if (((jint)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_charging) == 0) goto label_12;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_shoot;
	if ((floatCompare(((jfloat)((mindustry_entities_pattern_ShootPattern *) NULL_CHECK(sp[0].o))->F_firstShotDelay), (jfloat(0)), -1)) <= 0) goto label_12;
	}
	{
	jfloat temp0 = (jfloat)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_charge;
	jfloat temp1 = jfloat(1);
	jfloat temp2 = jfloat(1);
	sp[0].o = (jobject)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_shoot;
	jfloat temp3 = (jfloat)SM_arc_math_Mathf_approachDelta_float_float_float_R_float(ctx, temp0, temp1, (temp2 / ((jfloat)((mindustry_entities_pattern_ShootPattern *) NULL_CHECK(sp[0].o))->F_firstShotDelay)));
	sp[0].f = temp3;
	sp += 1;
	goto label_13;
	}
label_12:;
	INST_FCONST(0);
label_13:;
	{
	sp -= 2;
	((mindustry_entities_units_WeaponMount *) NULL_CHECK(sp[0].o))->F_charge = sp[1].f;
	LINE_NUMBER(312);
	if ((frame[3].i) == 0) goto label_15;
	}
	{
	if (((jint)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_shoot) != 0) goto label_16;
	}
label_15:;
	{
	if (((jint)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_continuous) == 0) goto label_17;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_bullet;
	if (sp[0].o != nullptr) goto label_16;
	}
label_17:;
	{
	if (((jint)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_charging) == 0) goto label_18;
	}
label_16:;
	INST_FCONST(1);
	goto label_19;
label_18:;
	INST_FCONST(0);
label_19:;
	{
	sp -= 1;
	frame[5].f = sp[0].f;
	LINE_NUMBER(313);
	if (((jint)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_linearWarmup) == 0) goto label_21;
	}
	{
	LINE_NUMBER(314);
	sp[0].o = frame[2].o;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_approachDelta_float_float_float_R_float(ctx, ((jfloat)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_warmup), (frame[5].f), ((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_shootWarmupSpeed));
	((mindustry_entities_units_WeaponMount *) NULL_CHECK(sp[0].o))->F_warmup = temp0;
	goto label_23;
	}
label_21:;
	{
	LINE_NUMBER(316);
	sp[0].o = frame[2].o;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_lerpDelta_float_float_float_R_float(ctx, ((jfloat)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_warmup), (frame[5].f), ((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_shootWarmupSpeed));
	((mindustry_entities_units_WeaponMount *) NULL_CHECK(sp[0].o))->F_warmup = temp0;
	}
label_23:;
	{
	LINE_NUMBER(320);
	jfloat temp0 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_x;
	jfloat temp1 = (jfloat)SM_arc_math_Angles_trnsx_float_float_float_R_float(ctx, (((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_rotation) - (jfloat(90.0f))), ((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_y));
	frame[6].f = (temp0 + temp1);
	LINE_NUMBER(321);
	jfloat temp2 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_y;
	jfloat temp3 = (jfloat)SM_arc_math_Angles_trnsy_float_float_float_R_float(ctx, (((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_rotation) - (jfloat(90.0f))), ((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_y));
	frame[7].f = (temp2 + temp3);
	LINE_NUMBER(324);
	if (((jint)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_controllable) != 0) goto label_26;
	}
	{
	if (((jint)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_autoTarget) == 0) goto label_26;
	}
	{
	LINE_NUMBER(325);
	sp[0].o = frame[2].o;
	jfloat temp0 = ((jfloat)((mindustry_entities_units_WeaponMount *) NULL_CHECK(sp[0].o))->F_retarget) - (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta);
	((mindustry_entities_units_WeaponMount *) NULL_CHECK(sp[0].o))->F_retarget = temp0;
	if ((floatCompare(temp0, (jfloat(0)), 1)) > 0) goto label_28;
	}
	{
	LINE_NUMBER(326);
	sp[0].o = frame[2].o;
	sp[1].o = frame[0].o;
	sp[2].o = frame[1].o;
	jfloat temp0 = frame[6].f;
	jfloat temp1 = frame[7].f;
	sp[3].o = (jobject)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_bullet;
	jfloat temp2 = (jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[3].o))->F_range;
	sp[3].o = (jobject)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_bullet;
	jint temp3 = (jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[3].o))->F_collidesAir;
	sp[3].o = (jobject)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_bullet;
	sp[1].o = (jobject)((func_mindustry_type_Weapon_findTarget_mindustry_gen_Unit_float_float_float_boolean_boolean_R_mindustry_gen_Teamc) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_type_Weapon_findTarget_mindustry_gen_Unit_float_float_float_boolean_boolean_R_mindustry_gen_Teamc])(ctx, sp[1].o, sp[2].o, temp0, temp1, temp2, temp3, ((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[3].o))->F_collidesGround));
	((mindustry_entities_units_WeaponMount *) NULL_CHECK(sp[0].o))->F_target = (jref) sp[1].o;
	LINE_NUMBER(327);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_target;
	sp += 1;
	if (sp[0].o != nullptr) goto label_31;
	}
	{
	jfloat temp0 = (jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_targetInterval;
	sp[0].f = temp0;
	sp += 1;
	goto label_32;
	}
label_31:;
	INST_ALOAD(0);
	sp[-1].f = ((mindustry_type_Weapon *) NULL_CHECK(sp[-1].o))->F_targetSwitchInterval;
label_32:;
	sp -= 2;
	((mindustry_entities_units_WeaponMount *) NULL_CHECK(sp[0].o))->F_retarget = sp[1].f;
label_28:;
	{
	LINE_NUMBER(330);
	sp[0].o = (jobject)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_target;
	if (sp[0].o == nullptr) goto label_33;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_target;
	jfloat temp0 = frame[6].f;
	jfloat temp1 = frame[7].f;
	sp[3].o = (jobject)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_bullet;
	jint temp2 = (jint)((func_mindustry_type_Weapon_checkTarget_mindustry_gen_Unit_mindustry_gen_Teamc_float_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_Weapon_checkTarget_mindustry_gen_Unit_mindustry_gen_Teamc_float_float_float_R_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, temp1, ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[3].o))->F_range));
	if (temp2 == 0) goto label_33;
	}
	{
	LINE_NUMBER(331);
	((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_target = (jref) (jobject(nullptr));
	}
label_33:;
	{
	LINE_NUMBER(334);
	frame[8].i = (jint(0));
	LINE_NUMBER(336);
	sp[0].o = (jobject)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_target;
	if (sp[0].o == nullptr) goto label_36;
	}
	{
	LINE_NUMBER(337);
	sp[0].o = (jobject)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_target;
	jfloat temp0 = frame[6].f;
	jfloat temp1 = frame[7].f;
	sp[1].o = (jobject)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_bullet;
	jfloat temp2 = (jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[1].o))->F_range;
	jfloat temp3 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, ((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_shootY));
	jfloat temp4 = temp2 + temp3;
	sp[1].o = (jobject)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_target;
	frame[10].o = sp[1].o;
	sp[1].f = temp0;
	sp[2].f = temp1;
	sp[3].f = temp4;
	sp += 4;
	if ((isInstance(ctx, (frame[10].o), &class_mindustry_entities_Sized)) == 0) goto label_38;
	}
	{
	frame[9].o = (checkCast(ctx, &class_mindustry_entities_Sized, (frame[10].o)));
	jfloat temp0 = (jfloat)((func_mindustry_entities_Sized_hitSize_R_float) resolveInterfaceMethod(ctx, &class_mindustry_entities_Sized, INDEX_mindustry_entities_Sized_hitSize_R_float, (frame[9].o)))(ctx, (frame[9].o));
	jfloat temp1 = temp0 / (jfloat(2));
	sp[0].f = temp1;
	sp += 1;
	goto label_40;
	}
label_38:;
	INST_FCONST(0);
label_40:;
	{
	sp -= 5;
	jint temp0 = (jint)((func_arc_math_geom_Position_within_float_float_float_R_boolean) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_within_float_float_float_R_boolean, sp[0].o))(ctx, sp[0].o, sp[1].f, sp[2].f, (sp[3].f + sp[4].f));
	if (temp0 == 0) goto label_41;
	}
	INST_ILOAD(3);
	if ((--sp)->i == 0) goto label_41;
	INST_ICONST(1);
	goto label_42;
label_41:;
	INST_ICONST(0);
label_42:;
	{
	sp -= 1;
	frame[8].i = sp[0].i;
	LINE_NUMBER(339);
	if (((jint)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_predictTarget) == 0) goto label_44;
	}
	{
	LINE_NUMBER(340);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_target;
	sp[2].o = (jobject)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_bullet;
	sp[0].o = (jobject)SM_mindustry_entities_Predict_intercept_arc_math_geom_Position_arc_math_geom_Position_mindustry_entities_bullet_BulletType_R_arc_math_geom_Vec2(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[9].o = sp[0].o;
	LINE_NUMBER(341);
	((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_aimX = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[9].o)))->F_x);
	LINE_NUMBER(342);
	((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_aimY = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[9].o)))->F_y);
	LINE_NUMBER(343);
	goto label_36;
	}
label_44:;
	{
	LINE_NUMBER(344);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_target;
	jfloat temp0 = (jfloat)((func_mindustry_gen_Posc_x_R_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Posc, INDEX_mindustry_gen_Posc_x_R_float, sp[1].o))(ctx, sp[1].o);
	((mindustry_entities_units_WeaponMount *) NULL_CHECK(sp[0].o))->F_aimX = temp0;
	LINE_NUMBER(345);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_target;
	jfloat temp1 = (jfloat)((func_mindustry_gen_Posc_y_R_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Posc, INDEX_mindustry_gen_Posc_y_R_float, sp[1].o))(ctx, sp[1].o);
	((mindustry_entities_units_WeaponMount *) NULL_CHECK(sp[0].o))->F_aimY = temp1;
	}
label_36:;
	{
	LINE_NUMBER(349);
	sp[0].o = frame[2].o;
	sp[1].o = frame[2].o;
	jint temp0 = frame[8].i;
	((mindustry_entities_units_WeaponMount *) NULL_CHECK(sp[1].o))->F_rotate = temp0;
	((mindustry_entities_units_WeaponMount *) NULL_CHECK(sp[0].o))->F_shoot = temp0;
	}
label_26:;
	{
	LINE_NUMBER(356);
	if (((jint)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_rotate) == 0) goto label_50;
	}
	{
	if (((jint)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_rotate) != 0) goto label_51;
	}
	{
	if (((jint)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_shoot) == 0) goto label_50;
	}
label_51:;
	INST_ILOAD(3);
	if ((--sp)->i == 0) goto label_50;
	{
	LINE_NUMBER(357);
	jfloat temp0 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_x;
	jfloat temp1 = (jfloat)SM_arc_math_Angles_trnsx_float_float_float_R_float(ctx, (((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_rotation) - (jfloat(90.0f))), ((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_y));
	frame[8].f = (temp0 + temp1);
	LINE_NUMBER(358);
	jfloat temp2 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_y;
	jfloat temp3 = (jfloat)SM_arc_math_Angles_trnsy_float_float_float_R_float(ctx, (((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_rotation) - (jfloat(90.0f))), ((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_y));
	frame[9].f = (temp2 + temp3);
	LINE_NUMBER(360);
	sp[0].o = frame[2].o;
	jfloat temp4 = (jfloat)SM_arc_math_Angles_angle_float_float_float_float_R_float(ctx, (frame[8].f), (frame[9].f), ((jfloat)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_aimX), ((jfloat)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_aimY));
	((mindustry_entities_units_WeaponMount *) NULL_CHECK(sp[0].o))->F_targetRotation = (temp4 - ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_rotation));
	LINE_NUMBER(361);
	sp[0].o = frame[2].o;
	jfloat temp5 = (jfloat)SM_arc_math_Angles_moveToward_float_float_float_R_float(ctx, ((jfloat)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_rotation), ((jfloat)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_targetRotation), (((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_rotateSpeed) * (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta)));
	((mindustry_entities_units_WeaponMount *) NULL_CHECK(sp[0].o))->F_rotation = temp5;
	LINE_NUMBER(362);
	if ((floatCompare(((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_rotationLimit), (jfloat(360.0f)), 1)) >= 0) goto label_57;
	}
	{
	LINE_NUMBER(363);
	jfloat temp0 = (jfloat)SM_arc_math_Angles_angleDist_float_float_R_float(ctx, ((jfloat)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_rotation), ((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_baseRotation));
	frame[10].f = temp0;
	LINE_NUMBER(364);
	if ((floatCompare((frame[10].f), (((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_rotationLimit) / (jfloat(2))), -1)) <= 0) goto label_57;
	}
	{
	LINE_NUMBER(365);
	sp[0].o = frame[2].o;
	jfloat temp0 = (jfloat)SM_arc_math_Angles_moveToward_float_float_float_R_float(ctx, ((jfloat)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_rotation), ((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_baseRotation), ((frame[10].f) - (((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_rotationLimit) / (jfloat(2)))));
	((mindustry_entities_units_WeaponMount *) NULL_CHECK(sp[0].o))->F_rotation = temp0;
	}
label_57:;
	LINE_NUMBER(368);
	goto label_61;
label_50:;
	{
	if (((jint)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_rotate) != 0) goto label_61;
	}
	{
	LINE_NUMBER(369);
	((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_rotation = ((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_baseRotation);
	LINE_NUMBER(370);
	sp[0].o = frame[2].o;
	jfloat temp0 = (jfloat)((func_mindustry_gen_Unit_angleTo_float_float_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_angleTo_float_float_R_float])(ctx, (frame[1].o), ((jfloat)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_aimX), ((jfloat)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_aimY));
	((mindustry_entities_units_WeaponMount *) NULL_CHECK(sp[0].o))->F_targetRotation = temp0;
	}
label_61:;
	{
	LINE_NUMBER(374);
	jfloat temp0 = ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_rotation) - (jfloat(90.0f));
	sp[0].f = temp0;
	sp += 1;
	if (((jint)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_rotate) == 0) goto label_64;
	}
	{
	jfloat temp0 = (jfloat)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_rotation;
	sp[0].f = temp0;
	sp += 1;
	goto label_65;
	}
label_64:;
	INST_ALOAD(0);
	sp[-1].f = ((mindustry_type_Weapon *) NULL_CHECK(sp[-1].o))->F_baseRotation;
label_65:;
	{
	sp -= 2;
	frame[8].f = (sp[0].f + sp[1].f);
	LINE_NUMBER(375);
	jfloat temp0 = frame[6].f;
	jfloat temp1 = (jfloat)SM_arc_math_Angles_trnsx_float_float_float_R_float(ctx, (frame[8].f), ((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_shootX), ((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_shootY));
	frame[9].f = (temp0 + temp1);
	LINE_NUMBER(376);
	jfloat temp2 = frame[7].f;
	jfloat temp3 = (jfloat)SM_arc_math_Angles_trnsy_float_float_float_R_float(ctx, (frame[8].f), ((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_shootX), ((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_shootY));
	frame[10].f = (temp2 + temp3);
	LINE_NUMBER(377);
	jfloat temp4 = (jfloat)((func_mindustry_type_Weapon_bulletRotation_mindustry_gen_Unit_mindustry_entities_units_WeaponMount_float_float_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_Weapon_bulletRotation_mindustry_gen_Unit_mindustry_entities_units_WeaponMount_float_float_R_float])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[9].f), (frame[10].f));
	frame[11].f = temp4;
	LINE_NUMBER(379);
	if (((jint)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_alwaysShooting) == 0) goto label_70;
	}
	{
	((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_shoot = (jint(1));
	}
label_70:;
	{
	LINE_NUMBER(382);
	if (((jint)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_continuous) == 0) goto label_71;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_bullet;
	if (sp[0].o == nullptr) goto label_71;
	}
	{
	LINE_NUMBER(383);
	sp[0].o = (jobject)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_bullet;
	jint temp0 = (jint)((func_mindustry_gen_Bullet_isAdded_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Bullet_isAdded_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_73;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_bullet;
	jfloat temp0 = (jfloat)((mindustry_gen_Bullet *) NULL_CHECK(sp[0].o))->F_time;
	sp[0].o = (jobject)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_bullet;
	if ((floatCompare(temp0, ((jfloat)((mindustry_gen_Bullet *) NULL_CHECK(sp[0].o))->F_lifetime), -1)) >= 0) goto label_73;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_bullet;
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK(sp[0].o))->F_type;
	sp[1].o = (jobject)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_bullet;
	if (sp[0].o == sp[1].o) goto label_74;
	}
label_73:;
	{
	LINE_NUMBER(384);
	((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_bullet = (jref) (jobject(nullptr));
	goto label_75;
	}
label_74:;
	{
	LINE_NUMBER(386);
	sp[0].o = (jobject)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_bullet;
	((func_mindustry_gen_Bullet_rotation_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Bullet_rotation_float])(ctx, sp[0].o, ((frame[8].f) + (jfloat(90.0f))));
	LINE_NUMBER(387);
	sp[0].o = (jobject)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_bullet;
	((func_mindustry_gen_Bullet_set_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Bullet_set_float_float])(ctx, sp[0].o, (frame[9].f), (frame[10].f));
	LINE_NUMBER(388);
	((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_reload = ((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_reload);
	LINE_NUMBER(389);
	((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_recoil = (jfloat(1));
	LINE_NUMBER(390);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_vel;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	sp[2].o = (jobject)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_bullet;
	jfloat temp0 = (jfloat)((func_mindustry_gen_Bullet_rotation_R_float) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_gen_Bullet_rotation_R_float])(ctx, sp[2].o);
	jfloat temp1 = temp0 + (jfloat(180.0f));
	sp[2].o = (jobject)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_bullet;
	sp[2].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK(sp[2].o))->F_type;
	sp[1].o = (jobject)((func_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2])(ctx, sp[1].o, temp1, (((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[2].o))->F_recoil) * (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta)));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_add_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_add_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(391);
	sp[0].o = (jobject)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_shootSound;
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_none;
	if (sp[0].o == sp[1].o) goto label_81;
	}
	clinit_mindustry_Vars(ctx);
	(sp++)->i = SF_mindustry_Vars_headless;
	if ((--sp)->i != 0) goto label_81;
	{
	LINE_NUMBER(392);
	sp[0].o = (jobject)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_sound;
	if (sp[0].o != nullptr) goto label_83;
	}
	{
	sp[0].o = frame[2].o;
	clinit_mindustry_audio_SoundLoop(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_audio_SoundLoop);
	sp[2].o = (jobject)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_shootSound;
	init_mindustry_audio_SoundLoop_arc_audio_Sound_float(ctx, sp[1].o, sp[2].o, (jfloat(1)));
	((mindustry_entities_units_WeaponMount *) NULL_CHECK(sp[0].o))->F_sound = (jref) sp[1].o;
	}
label_83:;
	{
	LINE_NUMBER(393);
	sp[0].o = (jobject)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_sound;
	((func_mindustry_audio_SoundLoop_update_float_float_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_audio_SoundLoop_update_float_float_boolean])(ctx, sp[0].o, (frame[9].f), (frame[10].f), (jint(1)));
	}
label_81:;
	{
	LINE_NUMBER(397);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_dst_float_float_float_float_R_float(ctx, (frame[9].f), (frame[10].f), ((jfloat)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_aimX), ((jfloat)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_aimY));
	jfloat temp1 = (jfloat)((func_mindustry_type_Weapon_range_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_Weapon_range_R_float])(ctx, (frame[0].o));
	jfloat temp2 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, temp0, temp1);
	frame[12].f = temp2;
	LINE_NUMBER(399);
	jfloat temp3 = frame[9].f;
	jfloat temp4 = frame[10].f;
	sp[0].o = (jobject)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_bullet;
	jfloat temp5 = (jfloat)((mindustry_gen_Bullet *) NULL_CHECK(sp[0].o))->F_aimX;
	sp[0].o = (jobject)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_bullet;
	jfloat temp6 = (jfloat)SM_arc_math_Mathf_dst_float_float_float_float_R_float(ctx, temp3, temp4, temp5, ((jfloat)((mindustry_gen_Bullet *) NULL_CHECK(sp[0].o))->F_aimY));
	frame[13].f = temp6;
	LINE_NUMBER(401);
	jfloat temp7 = (jfloat)SM_arc_math_Mathf_approachDelta_float_float_float_R_float(ctx, (frame[13].f), (frame[12].f), ((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_aimChangeSpeed));
	frame[14].f = temp7;
	LINE_NUMBER(403);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp8 = frame[11].f;
	sp[1].o = frame[2].o;
	jfloat temp9 = frame[14].f;
	((mindustry_entities_units_WeaponMount *) NULL_CHECK(sp[1].o))->F_lastLength = temp9;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp8, temp9);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_add_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_add_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[9].f), (frame[10].f));
	LINE_NUMBER(405);
	sp[0].o = (jobject)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_bullet;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	((mindustry_gen_Bullet *) NULL_CHECK(sp[0].o))->F_aimX = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x);
	LINE_NUMBER(406);
	sp[0].o = (jobject)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_bullet;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	((mindustry_gen_Bullet *) NULL_CHECK(sp[0].o))->F_aimY = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y);
	LINE_NUMBER(408);
	if (((jint)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_alwaysContinuous) == 0) goto label_90;
	}
	{
	if (((jint)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_shoot) == 0) goto label_90;
	}
	{
	LINE_NUMBER(409);
	sp[0].o = (jobject)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_bullet;
	sp[1].o = (jobject)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_bullet;
	jfloat temp0 = (jfloat)((mindustry_gen_Bullet *) NULL_CHECK(sp[1].o))->F_lifetime;
	sp[1].o = (jobject)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_bullet;
	sp[1].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK(sp[1].o))->F_type;
	((mindustry_gen_Bullet *) NULL_CHECK(sp[0].o))->F_time = ((temp0 * ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[1].o))->F_optimalLifeFract)) * ((jfloat)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_warmup));
	LINE_NUMBER(410);
	sp[0].o = (jobject)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_bullet;
	((mindustry_gen_Bullet *) NULL_CHECK(sp[0].o))->F_keepAlive = (jint(1));
	LINE_NUMBER(412);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_shootStatus;
	((func_mindustry_gen_Unit_apply_mindustry_type_StatusEffect_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_apply_mindustry_type_StatusEffect_float])(ctx, sp[0].o, sp[1].o, ((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_shootStatusDuration));
	}
label_90:;
	LINE_NUMBER(414);
	goto label_75;
label_71:;
	{
	LINE_NUMBER(417);
	sp[0].o = frame[2].o;
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (((jfloat)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_heat) - (((clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta) * ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_reloadMultiplier)) / ((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_cooldownTime))), (jfloat(0)));
	((mindustry_entities_units_WeaponMount *) NULL_CHECK(sp[0].o))->F_heat = temp0;
	LINE_NUMBER(419);
	sp[0].o = (jobject)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_sound;
	if (sp[0].o == nullptr) goto label_75;
	}
	{
	LINE_NUMBER(420);
	sp[0].o = (jobject)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_sound;
	((func_mindustry_audio_SoundLoop_update_float_float_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_audio_SoundLoop_update_float_float_boolean])(ctx, sp[0].o, (frame[9].f), (frame[10].f), (jint(0)));
	}
label_75:;
	{
	LINE_NUMBER(425);
	frame[12].i = ((jint)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_side);
	LINE_NUMBER(426);
	if (((jint)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_otherSide) < 0) goto label_97;
	}
	{
	if (((jint)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_alternate) == 0) goto label_97;
	}
	{
	if (((jint)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_side) != ((jint)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_flipSprite)) goto label_97;
	}
	{
	jint temp0 = (jint)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_otherSide;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_mounts;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_97;
	}
	{
	if ((floatCompare(((jfloat)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_reload), (((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_reload) / (jfloat(2))), 1)) > 0) goto label_97;
	}
	{
	if ((floatCompare((frame[4].f), (((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_reload) / (jfloat(2))), -1)) <= 0) goto label_97;
	}
	{
	LINE_NUMBER(427);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_mounts;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_otherSide));
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_mounts;
	sp += 1;
	if (((jint)((mindustry_entities_units_WeaponMount *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_otherSide)))))->F_side) != 0) goto label_99;
	}
	INST_ICONST(1);
	goto label_100;
label_99:;
	INST_ICONST(0);
label_100:;
	{
	sp -= 2;
	((mindustry_entities_units_WeaponMount *) NULL_CHECK(sp[0].o))->F_side = sp[1].i;
	LINE_NUMBER(428);
	sp[0].o = frame[2].o;
	sp += 1;
	if (((jint)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_side) != 0) goto label_102;
	}
	INST_ICONST(1);
	goto label_103;
label_102:;
	INST_ICONST(0);
label_103:;
	sp -= 2;
	((mindustry_entities_units_WeaponMount *) NULL_CHECK(sp[0].o))->F_side = sp[1].i;
label_97:;
	{
	LINE_NUMBER(431);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_headless) != 0) goto label_104;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_activeSound;
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_none;
	if (sp[0].o == sp[1].o) goto label_104;
	}
	{
	if (((jint)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_shoot) == 0) goto label_104;
	}
	INST_ILOAD(3);
	if ((--sp)->i == 0) goto label_104;
	{
	if ((floatCompare(((jfloat)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_warmup), ((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_minWarmup), -1)) < 0) goto label_104;
	}
	{
	LINE_NUMBER(432);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_sound;
	sp[1].o = (jobject)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_activeSound;
	((func_mindustry_audio_SoundControl_loop_arc_audio_Sound_arc_math_geom_Position_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_audio_SoundControl_loop_arc_audio_Sound_arc_math_geom_Position_float])(ctx, sp[0].o, sp[1].o, (frame[1].o), ((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_activeSoundVolume));
	}
label_104:;
	{
	LINE_NUMBER(435);
	jint temp0 = (jint)((func_mindustry_gen_Unit_isRemote_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_isRemote_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_106;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_vel;
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec2_len_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_len_R_float])(ctx, sp[0].o);
	sp[0].f = temp0;
	sp += 1;
	goto label_107;
	}
label_106:;
	{
	jfloat temp0 = (jfloat)((func_mindustry_gen_Unit_deltaLen_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_deltaLen_R_float])(ctx, (frame[1].o));
	jfloat temp1 = temp0 / (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta);
	sp[0].f = temp1;
	sp += 1;
	}
label_107:;
	{
	sp -= 1;
	frame[13].f = sp[0].f;
	LINE_NUMBER(438);
	if (((jint)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_shoot) == 0) goto label_109;
	}
	INST_ILOAD(3);
	if ((--sp)->i == 0) goto label_109;
	{
	sp[0].o = (jobject)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_bullet;
	if (((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_killShooter) == 0) goto label_110;
	}
	{
	if (((jint)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_totalShots) > 0) goto label_109;
	}
label_110:;
	{
	if (((jint)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_alternate) == 0) goto label_111;
	}
	{
	if ((frame[12].i) != ((jint)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_flipSprite)) goto label_109;
	}
label_111:;
	{
	if ((floatCompare(((jfloat)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_warmup), ((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_minWarmup), -1)) < 0) goto label_109;
	}
	{
	if ((floatCompare((frame[13].f), ((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_minShootVelocity), -1)) < 0) goto label_109;
	}
	{
	if ((floatCompare(((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_maxShootVelocity), (jfloat(-1.0f)), -1)) == 0) goto label_112;
	}
	{
	if ((floatCompare((frame[13].f), ((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_maxShootVelocity), 1)) > 0) goto label_109;
	}
label_112:;
	{
	if ((floatCompare(((jfloat)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_reload), (jfloat(1,000000e-04f)), 1)) <= 0) goto label_113;
	}
	{
	if (((jint)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_alwaysContinuous) == 0) goto label_109;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_bullet;
	if (sp[0].o != nullptr) goto label_109;
	}
label_113:;
	{
	if (((jint)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_alwaysShooting) != 0) goto label_114;
	}
	{
	LINE_NUMBER(445);
	if (((jint)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_rotate) == 0) goto label_116;
	}
	{
	jfloat temp0 = (jfloat)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_rotation;
	sp[0].f = temp0;
	sp += 1;
	goto label_117;
	}
label_116:;
	{
	jfloat temp0 = ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_rotation) + ((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_baseRotation);
	sp[0].f = temp0;
	sp += 1;
	}
label_117:;
	{
	sp -= 1;
	jint temp0 = (jint)SM_arc_math_Angles_within_float_float_float_R_boolean(ctx, sp[0].f, ((jfloat)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_targetRotation), ((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_shootCone));
	if (temp0 == 0) goto label_109;
	}
label_114:;
	{
	LINE_NUMBER(447);
	((func_mindustry_type_Weapon_shoot_mindustry_gen_Unit_mindustry_entities_units_WeaponMount_float_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_Weapon_shoot_mindustry_gen_Unit_mindustry_entities_units_WeaponMount_float_float_float])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[9].f), (frame[10].f), (frame[11].f));
	LINE_NUMBER(449);
	((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_reload = ((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_reload);
	}
label_109:;
	LINE_NUMBER(451);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_type_Weapon_findTarget_mindustry_gen_Unit_float_float_float_boolean_boolean_R_mindustry_gen_Teamc(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jbool param4, jbool param5) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Weapon:findTarget", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].i = param4;
	frame[6].i = param5;
	{
	LINE_NUMBER(454);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_team;
	jfloat temp0 = frame[2].f;
	jfloat temp1 = frame[3].f;
	jfloat temp2 = frame[4].f;
	jfloat temp3 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, ((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_shootY));
	jfloat temp4 = temp2 + temp3;
	{ /* InvokeDynamic */
		clinit_mindustry_type_Weapon_invoke_arc_func_Boolf_2(ctx);
		auto proxy = (mindustry_type_Weapon_invoke_arc_func_Boolf_2 *) gcAlloc(ctx, &class_mindustry_type_Weapon_invoke_arc_func_Boolf_2);
		proxy->F_field1 = (frame[6].i);
		proxy->F_field0 = (frame[5].i);
		sp[1].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_type_Weapon_invoke_arc_func_Boolf_3(ctx);
		auto proxy = (mindustry_type_Weapon_invoke_arc_func_Boolf_3 *) gcAlloc(ctx, &class_mindustry_type_Weapon_invoke_arc_func_Boolf_3);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (frame[6].i);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_entities_Units_closestTarget_mindustry_game_Team_float_float_float_arc_func_Boolf_arc_func_Boolf_R_mindustry_gen_Teamc(ctx, sp[0].o, temp0, temp1, temp4, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_type_Weapon_checkTarget_mindustry_gen_Unit_mindustry_gen_Teamc_float_float_float_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Weapon:checkTarget", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	{
	LINE_NUMBER(458);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_team;
	jfloat temp0 = frame[3].f;
	jfloat temp1 = frame[4].f;
	jfloat temp2 = frame[5].f;
	jfloat temp3 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, ((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_shootY));
	jint temp4 = (jint)SM_mindustry_entities_Units_invalidateTarget_mindustry_gen_Posc_mindustry_game_Team_float_float_float_R_boolean(ctx, sp[0].o, sp[1].o, temp0, temp1, (temp2 + temp3));
	popStackFrame(ctx);
	return temp4;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_type_Weapon_bulletRotation_mindustry_gen_Unit_mindustry_entities_units_WeaponMount_float_float_R_float(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Weapon:bulletRotation", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(462);
	if (((jint)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_rotate) == 0) goto label_1;
	}
	{
	jfloat temp0 = ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_rotation) + ((jfloat)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_rotation);
	sp[0].f = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	{
	jfloat temp0 = (jfloat)SM_arc_math_Angles_angle_float_float_float_float_R_float(ctx, (frame[3].f), (frame[4].f), ((jfloat)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_aimX), ((jfloat)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_aimY));
	jfloat temp1 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_rotation;
	jfloat temp2 = (jfloat)((func_mindustry_gen_Unit_angleTo_float_float_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_angleTo_float_float_R_float])(ctx, (frame[1].o), ((jfloat)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_aimX), ((jfloat)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_aimY));
	jfloat temp3 = (temp0 + (temp1 - temp2)) + ((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_baseRotation);
	sp[0].f = temp3;
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_FRETURN();

	popStackFrame(ctx);
}

void M_mindustry_type_Weapon_shoot_mindustry_gen_Unit_mindustry_entities_units_WeaponMount_float_float_float(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Weapon:shoot", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	{
	LINE_NUMBER(466);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_shootStatus;
	((func_mindustry_gen_Unit_apply_mindustry_type_StatusEffect_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_apply_mindustry_type_StatusEffect_float])(ctx, sp[0].o, sp[1].o, ((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_shootStatusDuration));
	LINE_NUMBER(468);
	sp[0].o = (jobject)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_shoot;
	if ((floatCompare(((jfloat)((mindustry_entities_pattern_ShootPattern *) NULL_CHECK(sp[0].o))->F_firstShotDelay), (jfloat(0)), -1)) <= 0) goto label_2;
	}
	{
	LINE_NUMBER(469);
	((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_charging = (jint(1));
	LINE_NUMBER(470);
	sp[0].o = (jobject)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_chargeSound;
	jfloat temp0 = frame[3].f;
	jfloat temp1 = frame[4].f;
	jfloat temp2 = (jfloat)SM_arc_math_Mathf_random_float_float_R_float(ctx, ((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_soundPitchMin), ((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_soundPitchMax));
	jint temp3 = (jint)((func_arc_audio_Sound_at_float_float_float_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Sound_at_float_float_float_R_int])(ctx, sp[0].o, temp0, temp1, temp2);
	LINE_NUMBER(471);
	sp[0].o = (jobject)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_bullet;
	sp[0].o = (jobject)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_chargeEffect;
	jfloat temp4 = frame[3].f;
	jfloat temp5 = frame[4].f;
	jfloat temp6 = frame[5].f;
	sp[1].o = (jobject)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_bullet;
	jobject temp7 = sp[1].o;
	sp[1].f = temp4;
	sp[2].f = temp5;
	sp[3].f = temp6;
	sp += 4;
	if (((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK(temp7))->F_keepVelocity) != 0) goto label_6;
	}
	{
	if (((jint)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_parentizeEffects) == 0) goto label_7;
	}
label_6:;
	INST_ALOAD(1);
	goto label_8;
label_7:;
	INST_ACONST_NULL();
label_8:;
	POP_N(5); // Pop method args
	((func_mindustry_entities_Effect_at_float_float_float_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float_java_lang_Object])(ctx, sp[0].o, sp[1].f, sp[2].f, sp[3].f, sp[4].o);
label_2:;
	{
	LINE_NUMBER(474);
	sp[0].o = (jobject)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_shoot;
	jint temp0 = (jint)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_barrelCounter;
	{ /* InvokeDynamic */
		clinit_mindustry_type_Weapon_invoke_mindustry_entities_pattern_ShootPattern$BulletHandler_1(ctx);
		auto proxy = (mindustry_type_Weapon_invoke_mindustry_entities_pattern_ShootPattern$BulletHandler_1 *) gcAlloc(ctx, &class_mindustry_type_Weapon_invoke_mindustry_entities_pattern_ShootPattern$BulletHandler_1);
		proxy->F_field2 = (jref) (frame[1].o);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_type_Weapon_invoke_java_lang_Runnable_2(ctx);
		auto proxy = (mindustry_type_Weapon_invoke_java_lang_Runnable_2 *) gcAlloc(ctx, &class_mindustry_type_Weapon_invoke_java_lang_Runnable_2);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[2].o = (jobject) proxy;
	}
	((func_mindustry_entities_pattern_ShootPattern_shoot_int_mindustry_entities_pattern_ShootPattern$BulletHandler_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_pattern_ShootPattern_shoot_int_mindustry_entities_pattern_ShootPattern$BulletHandler_java_lang_Runnable])(ctx, sp[0].o, temp0, sp[1].o, sp[2].o);
	LINE_NUMBER(491);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_type_Weapon_bullet_mindustry_gen_Unit_mindustry_entities_units_WeaponMount_float_float_float_mindustry_entities_Mover(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4, jobject param5) {
	NULL_CHECK(self);
	jtype frame[37];
	auto stack = &frame[21];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Weapon:bullet", 37 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	frame[6].o = param5;
	{
	LINE_NUMBER(494);
	jint temp0 = (jint)((func_mindustry_gen_Unit_isAdded_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_isAdded_R_boolean])(ctx, (frame[1].o));
	if (temp0 != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(496);
	((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_charging = (jint(0));
	LINE_NUMBER(498);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_range_float_R_float(ctx, ((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_xRand));
	frame[7].f = temp0;
	LINE_NUMBER(499);
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_range_float_R_float(ctx, ((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_yRand));
	frame[8].f = temp1;
	LINE_NUMBER(500);
	jfloat temp2 = ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_rotation) - (jfloat(90.0f));
	sp[0].f = temp2;
	sp += 1;
	if (((jint)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_rotate) == 0) goto label_5;
	}
	{
	jfloat temp0 = (jfloat)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_rotation;
	sp[0].f = temp0;
	sp += 1;
	goto label_6;
	}
label_5:;
	INST_ALOAD(0);
	sp[-1].f = ((mindustry_type_Weapon *) NULL_CHECK(sp[-1].o))->F_baseRotation;
label_6:;
	{
	sp -= 2;
	frame[9].f = (sp[0].f + sp[1].f);
	LINE_NUMBER(501);
	jfloat temp0 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_x;
	jfloat temp1 = (jfloat)SM_arc_math_Angles_trnsx_float_float_float_R_float(ctx, (((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_rotation) - (jfloat(90.0f))), ((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_y));
	frame[10].f = (temp0 + temp1);
	LINE_NUMBER(502);
	jfloat temp2 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_y;
	jfloat temp3 = (jfloat)SM_arc_math_Angles_trnsy_float_float_float_R_float(ctx, (((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_rotation) - (jfloat(90.0f))), ((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_y));
	frame[11].f = (temp2 + temp3);
	LINE_NUMBER(503);
	jfloat temp4 = frame[10].f;
	jfloat temp5 = (jfloat)SM_arc_math_Angles_trnsx_float_float_float_R_float(ctx, (frame[9].f), ((((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_shootX) + (frame[3].f)) + (frame[7].f)), ((((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_shootY) + (frame[4].f)) + (frame[8].f)));
	frame[12].f = (temp4 + temp5);
	LINE_NUMBER(504);
	jfloat temp6 = frame[11].f;
	jfloat temp7 = (jfloat)SM_arc_math_Angles_trnsy_float_float_float_R_float(ctx, (frame[9].f), ((((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_shootX) + (frame[3].f)) + (frame[7].f)), ((((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_shootY) + (frame[4].f)) + (frame[8].f)));
	frame[13].f = (temp6 + temp7);
	LINE_NUMBER(505);
	jfloat temp8 = (jfloat)((func_mindustry_type_Weapon_bulletRotation_mindustry_gen_Unit_mindustry_entities_units_WeaponMount_float_float_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_Weapon_bulletRotation_mindustry_gen_Unit_mindustry_entities_units_WeaponMount_float_float_R_float])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[12].f), (frame[13].f));
	frame[14].f = (temp8 + (frame[5].f));
	LINE_NUMBER(506);
	jfloat temp9 = (jfloat(1)) - ((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_lifeRnd);
	jfloat temp10 = (jfloat)SM_arc_math_Mathf_random_float_R_float(ctx, ((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_lifeRnd));
	frame[15].f = ((temp9 + temp10) + ((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_extraLife));
	LINE_NUMBER(507);
	sp[0].o = (jobject)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_bullet;
	if (((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_scaleLife) == 0) goto label_14;
	}
	{
	jfloat temp0 = frame[15].f;
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_dst_float_float_float_float_R_float(ctx, (frame[12].f), (frame[13].f), ((jfloat)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_aimX), ((jfloat)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_aimY));
	sp[0].o = (jobject)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_bullet;
	jfloat temp2 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, (temp1 / ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_range)));
	jfloat temp3 = temp0 * temp2;
	sp[0].f = temp3;
	sp += 1;
	goto label_15;
	}
label_14:;
	INST_FLOAD(15);
label_15:;
	{
	sp -= 1;
	frame[16].f = sp[0].f;
	LINE_NUMBER(508);
	jfloat temp0 = frame[14].f;
	jfloat temp1 = (jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_inaccuracy;
	sp[0].o = (jobject)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_bullet;
	jfloat temp2 = (jfloat)SM_arc_math_Mathf_range_float_R_float(ctx, (temp1 + ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_inaccuracy)));
	frame[17].f = (temp0 + temp2);
	LINE_NUMBER(510);
	sp[0].o = (jobject)((func_mindustry_gen_Unit_controller_R_mindustry_entities_units_UnitController) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_controller_R_mindustry_entities_units_UnitController])(ctx, (frame[1].o));
	frame[20].o = sp[0].o;
	if ((isInstance(ctx, (frame[20].o), &class_mindustry_ai_types_MissileAI)) == 0) goto label_18;
	}
	{
	frame[19].o = (checkCast(ctx, &class_mindustry_ai_types_MissileAI, (frame[20].o)));
	sp[0].o = (jobject)((mindustry_ai_types_MissileAI *) NULL_CHECK((frame[19].o)))->F_shooter;
	sp += 1;
	goto label_20;
	}
label_18:;
	INST_ALOAD(1);
label_20:;
	{
	sp -= 1;
	frame[18].o = sp[0].o;
	LINE_NUMBER(511);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_bullet;
	sp[2].o = frame[1].o;
	sp[3].o = frame[18].o;
	sp[4].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_team;
	jfloat temp0 = frame[12].f;
	jfloat temp1 = frame[13].f;
	jfloat temp2 = frame[17].f;
	jfloat temp3 = jfloat(-1.0f);
	jfloat temp4 = (jfloat(1)) - ((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_velocityRnd);
	jfloat temp5 = (jfloat)SM_arc_math_Mathf_random_float_R_float(ctx, ((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_velocityRnd));
	jfloat temp6 = (temp4 + temp5) + ((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_extraVelocity);
	jfloat temp7 = frame[16].f;
	sp[5].o = jobject(nullptr);
	sp[6].o = frame[6].o;
	jfloat temp8 = (jfloat)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_aimX;
	jfloat temp9 = (jfloat)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_aimY;
	sp[7].o = (jobject)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_target;
	sp[1].o = (jobject)((func_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_float_java_lang_Object_mindustry_entities_Mover_float_float_mindustry_gen_Teamc_R_mindustry_gen_Bullet) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_float_java_lang_Object_mindustry_entities_Mover_float_float_mindustry_gen_Teamc_R_mindustry_gen_Bullet])(ctx, sp[1].o, sp[2].o, sp[3].o, sp[4].o, temp0, temp1, temp2, temp3, temp6, temp7, sp[5].o, sp[6].o, temp8, temp9, sp[7].o);
	((mindustry_entities_units_WeaponMount *) NULL_CHECK(sp[0].o))->F_bullet = (jref) sp[1].o;
	LINE_NUMBER(512);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[2].o;
	sp[3].o = (jobject)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_bullet;
	((func_mindustry_type_Weapon_handleBullet_mindustry_gen_Unit_mindustry_entities_units_WeaponMount_mindustry_gen_Bullet) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_Weapon_handleBullet_mindustry_gen_Unit_mindustry_entities_units_WeaponMount_mindustry_gen_Bullet])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(514);
	if (((jint)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_continuous) != 0) goto label_24;
	}
	{
	LINE_NUMBER(515);
	sp[0].o = (jobject)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_shootSound;
	jfloat temp0 = frame[12].f;
	jfloat temp1 = frame[13].f;
	jfloat temp2 = (jfloat)SM_arc_math_Mathf_random_float_float_R_float(ctx, ((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_soundPitchMin), ((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_soundPitchMax));
	jint temp3 = (jint)((func_arc_audio_Sound_at_float_float_float_float_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Sound_at_float_float_float_float_R_int])(ctx, sp[0].o, temp0, temp1, temp2, ((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_shootSoundVolume));
	goto label_26;
	}
label_24:;
	{
	LINE_NUMBER(517);
	sp[0].o = (jobject)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_initialShootSound;
	jfloat temp0 = frame[12].f;
	jfloat temp1 = frame[13].f;
	jfloat temp2 = (jfloat)SM_arc_math_Mathf_random_float_float_R_float(ctx, ((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_soundPitchMin), ((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_soundPitchMax));
	jint temp3 = (jint)((func_arc_audio_Sound_at_float_float_float_float_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Sound_at_float_float_float_float_R_int])(ctx, sp[0].o, temp0, temp1, temp2, ((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_shootSoundVolume));
	}
label_26:;
	{
	LINE_NUMBER(520);
	if (((jint)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_allowShootEffects) == 0) goto label_27;
	}
	{
	LINE_NUMBER(521);
	sp[0].o = (jobject)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_ejectEffect;
	jfloat temp0 = frame[10].f;
	jfloat temp1 = frame[11].f;
	jfloat temp2 = frame[17].f;
	jint temp3 = (jint)SM_arc_math_Mathf_sign_float_R_int(ctx, ((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_x));
	((func_mindustry_entities_Effect_at_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float])(ctx, sp[0].o, temp0, temp1, (temp2 * (jfloat(temp3))));
	LINE_NUMBER(522);
	sp[0].o = (jobject)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_bullet;
	sp[0].o = (jobject)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_shootEffect;
	jfloat temp4 = frame[12].f;
	jfloat temp5 = frame[13].f;
	jfloat temp6 = frame[17].f;
	sp[1].o = (jobject)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_bullet;
	sp[1].o = (jobject)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[1].o))->F_hitColor;
	((func_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color_java_lang_Object])(ctx, sp[0].o, temp4, temp5, temp6, sp[1].o, (frame[1].o));
	LINE_NUMBER(523);
	sp[0].o = (jobject)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_bullet;
	sp[0].o = (jobject)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_smokeEffect;
	jfloat temp7 = frame[12].f;
	jfloat temp8 = frame[13].f;
	jfloat temp9 = frame[17].f;
	sp[1].o = (jobject)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_bullet;
	sp[1].o = (jobject)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[1].o))->F_hitColor;
	((func_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color_java_lang_Object])(ctx, sp[0].o, temp7, temp8, temp9, sp[1].o, (frame[1].o));
	}
label_27:;
	{
	LINE_NUMBER(526);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_vel;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp0 = (frame[14].f) + (jfloat(180.0f));
	sp[2].o = (jobject)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_bullet;
	sp[1].o = (jobject)((func_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2])(ctx, sp[1].o, temp0, ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[2].o))->F_recoil));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_add_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_add_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(527);
	SM_mindustry_entities_Effect_shake_float_float_float_float(ctx, ((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_shake), ((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_shake), (frame[12].f), (frame[13].f));
	LINE_NUMBER(528);
	((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_recoil = (jfloat(1));
	LINE_NUMBER(529);
	if (((jint)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_recoils) <= 0) goto label_34;
	}
	{
	LINE_NUMBER(530);
	sp[0].o = (jobject)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_recoils;
	ARRAY_ACCESS(jfloat, sp[0].o, (((jint)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_barrelCounter) % ((jint)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_recoils))) = (jfloat(1));
	}
label_34:;
	{
	LINE_NUMBER(532);
	((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_heat = (jfloat(1));
	LINE_NUMBER(533);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_type_Weapon_handleBullet_mindustry_gen_Unit_mindustry_entities_units_WeaponMount_mindustry_gen_Bullet(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Weapon:handleBullet", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(537);
	if (((jint)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_continuous) == 0) goto label_1;
	}
	{
	LINE_NUMBER(539);
	jfloat temp0 = ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_rotation) - (jfloat(90.0f));
	sp[0].f = temp0;
	sp += 1;
	if (((jint)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_rotate) == 0) goto label_3;
	}
	{
	jfloat temp0 = (jfloat)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_rotation;
	sp[0].f = temp0;
	sp += 1;
	goto label_4;
	}
label_3:;
	INST_ALOAD(0);
	sp[-1].f = ((mindustry_type_Weapon *) NULL_CHECK(sp[-1].o))->F_baseRotation;
label_4:;
	{
	sp -= 2;
	frame[4].f = (sp[0].f + sp[1].f);
	LINE_NUMBER(540);
	jfloat temp0 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_x;
	jfloat temp1 = (jfloat)SM_arc_math_Angles_trnsx_float_float_float_R_float(ctx, (((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_rotation) - (jfloat(90.0f))), ((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_y));
	frame[5].f = (temp0 + temp1);
	LINE_NUMBER(541);
	jfloat temp2 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_y;
	jfloat temp3 = (jfloat)SM_arc_math_Angles_trnsy_float_float_float_R_float(ctx, (((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_rotation) - (jfloat(90.0f))), ((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_y));
	frame[6].f = (temp2 + temp3);
	LINE_NUMBER(542);
	jfloat temp4 = frame[5].f;
	jfloat temp5 = (jfloat)SM_arc_math_Angles_trnsx_float_float_float_R_float(ctx, (frame[4].f), ((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_shootX), ((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_shootY));
	frame[7].f = (temp4 + temp5);
	LINE_NUMBER(543);
	jfloat temp6 = frame[6].f;
	jfloat temp7 = (jfloat)SM_arc_math_Angles_trnsy_float_float_float_R_float(ctx, (frame[4].f), ((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_shootX), ((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_shootY));
	frame[8].f = (temp6 + temp7);
	LINE_NUMBER(545);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp8 = (jfloat)((func_mindustry_type_Weapon_bulletRotation_mindustry_gen_Unit_mindustry_entities_units_WeaponMount_float_float_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_Weapon_bulletRotation_mindustry_gen_Unit_mindustry_entities_units_WeaponMount_float_float_R_float])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[7].f), (frame[8].f));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp8, (((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_shootY) + ((jfloat)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_lastLength)));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_add_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_add_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[7].f), (frame[8].f));
	LINE_NUMBER(546);
	sp[0].o = frame[3].o;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	((mindustry_gen_Bullet *) NULL_CHECK(sp[0].o))->F_aimX = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x);
	LINE_NUMBER(547);
	sp[0].o = frame[3].o;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	((mindustry_gen_Bullet *) NULL_CHECK(sp[0].o))->F_aimY = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y);
	}
label_1:;
	LINE_NUMBER(549);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_type_Weapon_flip(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Weapon:flip", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(552);
	sp[0].o = frame[0].o;
	((mindustry_type_Weapon *) NULL_CHECK(sp[0].o))->F_x = (((jfloat)((mindustry_type_Weapon *) NULL_CHECK(sp[0].o))->F_x) * (jfloat(-1.0f)));
	LINE_NUMBER(553);
	sp[0].o = frame[0].o;
	((mindustry_type_Weapon *) NULL_CHECK(sp[0].o))->F_shootX = (((jfloat)((mindustry_type_Weapon *) NULL_CHECK(sp[0].o))->F_shootX) * (jfloat(-1.0f)));
	LINE_NUMBER(554);
	sp[0].o = frame[0].o;
	((mindustry_type_Weapon *) NULL_CHECK(sp[0].o))->F_baseRotation = (((jfloat)((mindustry_type_Weapon *) NULL_CHECK(sp[0].o))->F_baseRotation) * (jfloat(-1.0f)));
	LINE_NUMBER(555);
	sp[0].o = frame[0].o;
	sp += 1;
	if (((jint)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_flipSprite) != 0) goto label_4;
	}
	INST_ICONST(1);
	goto label_5;
label_4:;
	INST_ICONST(0);
label_5:;
	{
	sp -= 2;
	((mindustry_type_Weapon *) NULL_CHECK(sp[0].o))->F_flipSprite = sp[1].i;
	LINE_NUMBER(556);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_shoot;
	sp[1].o = (jobject)((func_mindustry_entities_pattern_ShootPattern_copy_R_mindustry_entities_pattern_ShootPattern) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_entities_pattern_ShootPattern_copy_R_mindustry_entities_pattern_ShootPattern])(ctx, sp[1].o);
	((mindustry_type_Weapon *) NULL_CHECK(sp[0].o))->F_shoot = (jref) sp[1].o;
	LINE_NUMBER(557);
	sp[0].o = (jobject)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_shoot;
	((func_mindustry_entities_pattern_ShootPattern_flip) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_pattern_ShootPattern_flip])(ctx, sp[0].o);
	LINE_NUMBER(558);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_type_Weapon_copy_R_mindustry_type_Weapon(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Weapon:copy", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_CloneNotSupportedException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(562);
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, (frame[0].o));
	sp[0].o = checkCast(ctx, &class_mindustry_type_Weapon, sp[0].o);
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(563);
	frame[1].o = sp[0].o;
	LINE_NUMBER(564);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"very good language design"_j))), (frame[1].o));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void M_mindustry_type_Weapon_init(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Weapon:init", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(570);
	if (((jint)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_alwaysContinuous) == 0) goto label_1;
	}
	{
	LINE_NUMBER(571);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_continuous = (jint(1));
	}
label_1:;
	LINE_NUMBER(573);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_type_Weapon_load(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Weapon:load", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(576);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_name;
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	((mindustry_type_Weapon *) NULL_CHECK(sp[0].o))->F_region = (jref) sp[1].o;
	LINE_NUMBER(577);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-heat"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	((mindustry_type_Weapon *) NULL_CHECK(sp[0].o))->F_heatRegion = (jref) sp[1].o;
	LINE_NUMBER(578);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-cell"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	((mindustry_type_Weapon *) NULL_CHECK(sp[0].o))->F_cellRegion = (jref) sp[1].o;
	LINE_NUMBER(579);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-outline"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	((mindustry_type_Weapon *) NULL_CHECK(sp[0].o))->F_outlineRegion = (jref) sp[1].o;
	LINE_NUMBER(581);
	sp[0].o = (jobject)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_parts;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_5:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_mindustry_entities_part_DrawPart, sp[0].o));
	LINE_NUMBER(582);
	((mindustry_entities_part_DrawPart *) NULL_CHECK((frame[2].o)))->F_turretShading = (jint(0));
	LINE_NUMBER(583);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_name;
	((func_mindustry_entities_part_DrawPart_load_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_part_DrawPart_load_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(584);
	goto label_5;
	}
label_6:;
	LINE_NUMBER(585);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_type_Weapon_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Weapon:toString", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(589);
	sp[0].o = (jobject)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_name;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_name;
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_2;
	}
label_1:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"Weapon"_j));
	goto label_3;
label_2:;
	{
	sp[0].o = (jobject)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_name;
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"Weapon: \u0001"_j.string, 1, sp[0].o);
	sp += 1;
	}
label_3:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

void SM_mindustry_type_Weapon_lambda$shoot$2_mindustry_entities_units_WeaponMount(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Weapon:lambda$shoot$2", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_type_Weapon(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(490);
	sp[0].o = frame[0].o;
	((mindustry_entities_units_WeaponMount *) NULL_CHECK(sp[0].o))->F_barrelCounter = (((jint)((mindustry_entities_units_WeaponMount *) NULL_CHECK(sp[0].o))->F_barrelCounter) + (jint(1)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_type_Weapon_lambda$shoot$0_mindustry_entities_units_WeaponMount_mindustry_gen_Unit_float_float_float_float_mindustry_entities_Mover(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jobject param6) {
	NULL_CHECK(self);
	jtype frame[18];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Weapon:lambda$shoot$0", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	frame[6].f = param5;
	frame[7].o = param6;
	{
	LINE_NUMBER(476);
	sp[0].o = frame[1].o;
	((mindustry_entities_units_WeaponMount *) NULL_CHECK(sp[0].o))->F_totalShots = (((jint)((mindustry_entities_units_WeaponMount *) NULL_CHECK(sp[0].o))->F_totalShots) + (jint(1)));
	LINE_NUMBER(477);
	frame[8].i = ((jint)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[1].o)))->F_barrelCounter);
	LINE_NUMBER(479);
	if ((floatCompare((frame[6].f), (jfloat(0)), -1)) <= 0) goto label_3;
	}
	{
	LINE_NUMBER(480);
	jfloat temp0 = frame[6].f;
	{ /* InvokeDynamic */
		clinit_mindustry_type_Weapon_invoke_java_lang_Runnable_3(ctx);
		auto proxy = (mindustry_type_Weapon_invoke_java_lang_Runnable_3 *) gcAlloc(ctx, &class_mindustry_type_Weapon_invoke_java_lang_Runnable_3);
		proxy->F_field7 = (jref) (frame[7].o);
		proxy->F_field6 = (frame[5].f);
		proxy->F_field5 = (frame[4].f);
		proxy->F_field4 = (frame[3].f);
		proxy->F_field3 = (jref) (frame[2].o);
		proxy->F_field2 = (frame[8].i);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	SM_arc_util_Time_run_float_java_lang_Runnable(ctx, temp0, sp[0].o);
	goto label_5;
	}
label_3:;
	{
	LINE_NUMBER(488);
	((func_mindustry_type_Weapon_bullet_mindustry_gen_Unit_mindustry_entities_units_WeaponMount_float_float_float_mindustry_entities_Mover) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_Weapon_bullet_mindustry_gen_Unit_mindustry_entities_units_WeaponMount_float_float_float_mindustry_entities_Mover])(ctx, (frame[0].o), (frame[2].o), (frame[1].o), (frame[3].f), (frame[4].f), (frame[5].f), (frame[7].o));
	}
label_5:;
	LINE_NUMBER(490);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_type_Weapon_lambda$shoot$1_mindustry_entities_units_WeaponMount_int_mindustry_gen_Unit_float_float_float_mindustry_entities_Mover(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jfloat param3, jfloat param4, jfloat param5, jobject param6) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Weapon:lambda$shoot$1", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	frame[6].f = param5;
	frame[7].o = param6;
	{
	LINE_NUMBER(482);
	frame[8].i = ((jint)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[1].o)))->F_barrelCounter);
	LINE_NUMBER(483);
	((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[1].o)))->F_barrelCounter = (frame[2].i);
	LINE_NUMBER(484);
	((func_mindustry_type_Weapon_bullet_mindustry_gen_Unit_mindustry_entities_units_WeaponMount_float_float_float_mindustry_entities_Mover) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_Weapon_bullet_mindustry_gen_Unit_mindustry_entities_units_WeaponMount_float_float_float_mindustry_entities_Mover])(ctx, (frame[0].o), (frame[3].o), (frame[1].o), (frame[4].f), (frame[5].f), (frame[6].f), (frame[7].o));
	LINE_NUMBER(485);
	((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[1].o)))->F_barrelCounter = (frame[8].i);
	LINE_NUMBER(486);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_type_Weapon_lambda$findTarget$1_boolean_mindustry_gen_Unit_mindustry_gen_Building_R_boolean(jcontext ctx, jbool param0, jobject param1, jobject param2) {
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Weapon:lambda$findTarget$1", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_type_Weapon(ctx);
	frame[0].i = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(454);
	if ((frame[0].i) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_targetUnderBlocks) != 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[2].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_underBullets) != 0) goto label_1;
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

jbool SM_mindustry_type_Weapon_lambda$findTarget$0_boolean_boolean_mindustry_gen_Unit_R_boolean(jcontext ctx, jbool param0, jbool param1, jobject param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Weapon:lambda$findTarget$0", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_type_Weapon(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(454);
	jint temp0 = (jint)((func_mindustry_gen_Unit_checkTarget_boolean_boolean_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_gen_Unit_checkTarget_boolean_boolean_R_boolean])(ctx, (frame[2].o), (frame[0].i), (frame[1].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_type_Weapon;
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

	{ // Field shootOnDeathEffect
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[73]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[74]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

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
}

void *vtable_mindustry_type_Weapon[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_mindustry_type_Weapon_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_mindustry_type_Weapon_hasStats_mindustry_type_UnitType_R_boolean,
	(void *) M_mindustry_type_Weapon_addStats_mindustry_type_UnitType_arc_scene_ui_layout_Table,
	(void *) M_mindustry_type_Weapon_dps_R_float,
	(void *) M_mindustry_type_Weapon_shotsPerSec_R_float,
	(void *) M_mindustry_type_Weapon_drawOutline_mindustry_gen_Unit_mindustry_entities_units_WeaponMount,
	(void *) M_mindustry_type_Weapon_draw_mindustry_gen_Unit_mindustry_entities_units_WeaponMount,
	(void *) M_mindustry_type_Weapon_range_R_float,
	(void *) M_mindustry_type_Weapon_update_mindustry_gen_Unit_mindustry_entities_units_WeaponMount,
	(void *) M_mindustry_type_Weapon_findTarget_mindustry_gen_Unit_float_float_float_boolean_boolean_R_mindustry_gen_Teamc,
	(void *) M_mindustry_type_Weapon_checkTarget_mindustry_gen_Unit_mindustry_gen_Teamc_float_float_float_R_boolean,
	(void *) M_mindustry_type_Weapon_bulletRotation_mindustry_gen_Unit_mindustry_entities_units_WeaponMount_float_float_R_float,
	(void *) M_mindustry_type_Weapon_shoot_mindustry_gen_Unit_mindustry_entities_units_WeaponMount_float_float_float,
	(void *) M_mindustry_type_Weapon_bullet_mindustry_gen_Unit_mindustry_entities_units_WeaponMount_float_float_float_mindustry_entities_Mover,
	(void *) M_mindustry_type_Weapon_handleBullet_mindustry_gen_Unit_mindustry_entities_units_WeaponMount_mindustry_gen_Bullet,
	(void *) M_mindustry_type_Weapon_flip,
	(void *) M_mindustry_type_Weapon_copy_R_mindustry_type_Weapon,
	(void *) M_mindustry_type_Weapon_init,
	(void *) M_mindustry_type_Weapon_load,
	(void *) M_mindustry_type_Weapon_lambda$shoot$0_mindustry_entities_units_WeaponMount_mindustry_gen_Unit_float_float_float_float_mindustry_entities_Mover,
	(void *) M_mindustry_type_Weapon_lambda$shoot$1_mindustry_entities_units_WeaponMount_int_mindustry_gen_Unit_float_float_float_mindustry_entities_Mover,
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
	{ "hasStats", "(Lmindustry/type/UnitType;)Z" },
	{ "addStats", "(Lmindustry/type/UnitType;Larc/scene/ui/layout/Table;)V" },
	{ "dps", "()F" },
	{ "shotsPerSec", "()F" },
	{ "drawOutline", "(Lmindustry/gen/Unit;Lmindustry/entities/units/WeaponMount;)V" },
	{ "draw", "(Lmindustry/gen/Unit;Lmindustry/entities/units/WeaponMount;)V" },
	{ "range", "()F" },
	{ "update", "(Lmindustry/gen/Unit;Lmindustry/entities/units/WeaponMount;)V" },
	{ "findTarget", "(Lmindustry/gen/Unit;FFFZZ)Lmindustry/gen/Teamc;" },
	{ "checkTarget", "(Lmindustry/gen/Unit;Lmindustry/gen/Teamc;FFF)Z" },
	{ "bulletRotation", "(Lmindustry/gen/Unit;Lmindustry/entities/units/WeaponMount;FF)F" },
	{ "shoot", "(Lmindustry/gen/Unit;Lmindustry/entities/units/WeaponMount;FFF)V" },
	{ "bullet", "(Lmindustry/gen/Unit;Lmindustry/entities/units/WeaponMount;FFFLmindustry/entities/Mover;)V" },
	{ "handleBullet", "(Lmindustry/gen/Unit;Lmindustry/entities/units/WeaponMount;Lmindustry/gen/Bullet;)V" },
	{ "flip", "()V" },
	{ "copy", "()Lmindustry/type/Weapon;" },
	{ "init", "()V" },
	{ "load", "()V" },
	{ "lambda$shoot$0", "(Lmindustry/entities/units/WeaponMount;Lmindustry/gen/Unit;FFFFLmindustry/entities/Mover;)V" },
	{ "lambda$shoot$1", "(Lmindustry/entities/units/WeaponMount;ILmindustry/gen/Unit;FFFLmindustry/entities/Mover;)V" },
};

static jclass interfaces[] { &class_java_lang_Cloneable, };

static FieldMetadata fields[] {
	{ "name", &class_java_lang_String, offsetof(mindustry_type_Weapon, F_name), "Ljava/lang/String;", 1 },
	{ "bullet", &class_mindustry_entities_bullet_BulletType, offsetof(mindustry_type_Weapon, F_bullet), "Lmindustry/entities/bullet/BulletType;", 1 },
	{ "ejectEffect", &class_mindustry_entities_Effect, offsetof(mindustry_type_Weapon, F_ejectEffect), "Lmindustry/entities/Effect;", 1 },
	{ "display", &class_boolean, offsetof(mindustry_type_Weapon, F_display), "Z", 1 },
	{ "mirror", &class_boolean, offsetof(mindustry_type_Weapon, F_mirror), "Z", 1 },
	{ "flipSprite", &class_boolean, offsetof(mindustry_type_Weapon, F_flipSprite), "Z", 1 },
	{ "alternate", &class_boolean, offsetof(mindustry_type_Weapon, F_alternate), "Z", 1 },
	{ "rotate", &class_boolean, offsetof(mindustry_type_Weapon, F_rotate), "Z", 1 },
	{ "showStatSprite", &class_boolean, offsetof(mindustry_type_Weapon, F_showStatSprite), "Z", 1 },
	{ "baseRotation", &class_float, offsetof(mindustry_type_Weapon, F_baseRotation), "F", 1 },
	{ "top", &class_boolean, offsetof(mindustry_type_Weapon, F_top), "Z", 1 },
	{ "continuous", &class_boolean, offsetof(mindustry_type_Weapon, F_continuous), "Z", 1 },
	{ "alwaysContinuous", &class_boolean, offsetof(mindustry_type_Weapon, F_alwaysContinuous), "Z", 1 },
	{ "aimChangeSpeed", &class_float, offsetof(mindustry_type_Weapon, F_aimChangeSpeed), "F", 1 },
	{ "controllable", &class_boolean, offsetof(mindustry_type_Weapon, F_controllable), "Z", 1 },
	{ "aiControllable", &class_boolean, offsetof(mindustry_type_Weapon, F_aiControllable), "Z", 1 },
	{ "alwaysShooting", &class_boolean, offsetof(mindustry_type_Weapon, F_alwaysShooting), "Z", 1 },
	{ "autoTarget", &class_boolean, offsetof(mindustry_type_Weapon, F_autoTarget), "Z", 1 },
	{ "predictTarget", &class_boolean, offsetof(mindustry_type_Weapon, F_predictTarget), "Z", 1 },
	{ "useAttackRange", &class_boolean, offsetof(mindustry_type_Weapon, F_useAttackRange), "Z", 1 },
	{ "targetInterval", &class_float, offsetof(mindustry_type_Weapon, F_targetInterval), "F", 1 },
	{ "targetSwitchInterval", &class_float, offsetof(mindustry_type_Weapon, F_targetSwitchInterval), "F", 1 },
	{ "rotateSpeed", &class_float, offsetof(mindustry_type_Weapon, F_rotateSpeed), "F", 1 },
	{ "reload", &class_float, offsetof(mindustry_type_Weapon, F_reload), "F", 1 },
	{ "inaccuracy", &class_float, offsetof(mindustry_type_Weapon, F_inaccuracy), "F", 1 },
	{ "shake", &class_float, offsetof(mindustry_type_Weapon, F_shake), "F", 1 },
	{ "recoil", &class_float, offsetof(mindustry_type_Weapon, F_recoil), "F", 1 },
	{ "recoils", &class_int, offsetof(mindustry_type_Weapon, F_recoils), "I", 1 },
	{ "recoilTime", &class_float, offsetof(mindustry_type_Weapon, F_recoilTime), "F", 1 },
	{ "recoilPow", &class_float, offsetof(mindustry_type_Weapon, F_recoilPow), "F", 1 },
	{ "cooldownTime", &class_float, offsetof(mindustry_type_Weapon, F_cooldownTime), "F", 1 },
	{ "shootX", &class_float, offsetof(mindustry_type_Weapon, F_shootX), "F", 1 },
	{ "shootY", &class_float, offsetof(mindustry_type_Weapon, F_shootY), "F", 1 },
	{ "x", &class_float, offsetof(mindustry_type_Weapon, F_x), "F", 1 },
	{ "y", &class_float, offsetof(mindustry_type_Weapon, F_y), "F", 1 },
	{ "xRand", &class_float, offsetof(mindustry_type_Weapon, F_xRand), "F", 1 },
	{ "yRand", &class_float, offsetof(mindustry_type_Weapon, F_yRand), "F", 1 },
	{ "shoot", &class_mindustry_entities_pattern_ShootPattern, offsetof(mindustry_type_Weapon, F_shoot), "Lmindustry/entities/pattern/ShootPattern;", 1 },
	{ "shadow", &class_float, offsetof(mindustry_type_Weapon, F_shadow), "F", 1 },
	{ "velocityRnd", &class_float, offsetof(mindustry_type_Weapon, F_velocityRnd), "F", 1 },
	{ "extraVelocity", &class_float, offsetof(mindustry_type_Weapon, F_extraVelocity), "F", 1 },
	{ "lifeRnd", &class_float, offsetof(mindustry_type_Weapon, F_lifeRnd), "F", 1 },
	{ "extraLife", &class_float, offsetof(mindustry_type_Weapon, F_extraLife), "F", 1 },
	{ "shootCone", &class_float, offsetof(mindustry_type_Weapon, F_shootCone), "F", 1 },
	{ "rotationLimit", &class_float, offsetof(mindustry_type_Weapon, F_rotationLimit), "F", 1 },
	{ "minWarmup", &class_float, offsetof(mindustry_type_Weapon, F_minWarmup), "F", 1 },
	{ "shootWarmupSpeed", &class_float, offsetof(mindustry_type_Weapon, F_shootWarmupSpeed), "F", 1 },
	{ "smoothReloadSpeed", &class_float, offsetof(mindustry_type_Weapon, F_smoothReloadSpeed), "F", 1 },
	{ "linearWarmup", &class_boolean, offsetof(mindustry_type_Weapon, F_linearWarmup), "Z", 1 },
	{ "soundPitchMin", &class_float, offsetof(mindustry_type_Weapon, F_soundPitchMin), "F", 1 },
	{ "soundPitchMax", &class_float, offsetof(mindustry_type_Weapon, F_soundPitchMax), "F", 1 },
	{ "ignoreRotation", &class_boolean, offsetof(mindustry_type_Weapon, F_ignoreRotation), "Z", 1 },
	{ "noAttack", &class_boolean, offsetof(mindustry_type_Weapon, F_noAttack), "Z", 1 },
	{ "minShootVelocity", &class_float, offsetof(mindustry_type_Weapon, F_minShootVelocity), "F", 1 },
	{ "maxShootVelocity", &class_float, offsetof(mindustry_type_Weapon, F_maxShootVelocity), "F", 1 },
	{ "parentizeEffects", &class_boolean, offsetof(mindustry_type_Weapon, F_parentizeEffects), "Z", 1 },
	{ "otherSide", &class_int, offsetof(mindustry_type_Weapon, F_otherSide), "I", 1 },
	{ "layerOffset", &class_float, offsetof(mindustry_type_Weapon, F_layerOffset), "F", 1 },
	{ "activeSound", &class_arc_audio_Sound, offsetof(mindustry_type_Weapon, F_activeSound), "Larc/audio/Sound;", 1 },
	{ "activeSoundVolume", &class_float, offsetof(mindustry_type_Weapon, F_activeSoundVolume), "F", 1 },
	{ "shootSound", &class_arc_audio_Sound, offsetof(mindustry_type_Weapon, F_shootSound), "Larc/audio/Sound;", 1 },
	{ "shootSoundVolume", &class_float, offsetof(mindustry_type_Weapon, F_shootSoundVolume), "F", 1 },
	{ "initialShootSound", &class_arc_audio_Sound, offsetof(mindustry_type_Weapon, F_initialShootSound), "Larc/audio/Sound;", 1 },
	{ "chargeSound", &class_arc_audio_Sound, offsetof(mindustry_type_Weapon, F_chargeSound), "Larc/audio/Sound;", 1 },
	{ "region", &class_arc_graphics_g2d_TextureRegion, offsetof(mindustry_type_Weapon, F_region), "Larc/graphics/g2d/TextureRegion;", 1 },
	{ "heatRegion", &class_arc_graphics_g2d_TextureRegion, offsetof(mindustry_type_Weapon, F_heatRegion), "Larc/graphics/g2d/TextureRegion;", 1 },
	{ "cellRegion", &class_arc_graphics_g2d_TextureRegion, offsetof(mindustry_type_Weapon, F_cellRegion), "Larc/graphics/g2d/TextureRegion;", 1 },
	{ "outlineRegion", &class_arc_graphics_g2d_TextureRegion, offsetof(mindustry_type_Weapon, F_outlineRegion), "Larc/graphics/g2d/TextureRegion;", 1 },
	{ "heatColor", &class_arc_graphics_Color, offsetof(mindustry_type_Weapon, F_heatColor), "Larc/graphics/Color;", 1 },
	{ "shootStatus", &class_mindustry_type_StatusEffect, offsetof(mindustry_type_Weapon, F_shootStatus), "Lmindustry/type/StatusEffect;", 1 },
	{ "mountType", &class_arc_func_Func, offsetof(mindustry_type_Weapon, F_mountType), "Larc/func/Func;", 1 },
	{ "shootStatusDuration", &class_float, offsetof(mindustry_type_Weapon, F_shootStatusDuration), "F", 1 },
	{ "shootOnDeath", &class_boolean, offsetof(mindustry_type_Weapon, F_shootOnDeath), "Z", 1 },
	{ "shootOnDeathEffect", &class_mindustry_entities_Effect, offsetof(mindustry_type_Weapon, F_shootOnDeathEffect), "Lmindustry/entities/Effect;", 1 },
	{ "parts", &class_arc_struct_Seq, offsetof(mindustry_type_Weapon, F_parts), "Larc/struct/Seq;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_type_Weapon_java_lang_String, 0, "(Ljava/lang/String;)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_type_Weapon, 0, "()V", 1 },
	{ "hasStats", (intptr_t) M_mindustry_type_Weapon_hasStats_mindustry_type_UnitType_R_boolean, VTABLE_mindustry_type_Weapon_hasStats_mindustry_type_UnitType_R_boolean, "(Lmindustry/type/UnitType;)Z", 1 },
	{ "addStats", (intptr_t) M_mindustry_type_Weapon_addStats_mindustry_type_UnitType_arc_scene_ui_layout_Table, VTABLE_mindustry_type_Weapon_addStats_mindustry_type_UnitType_arc_scene_ui_layout_Table, "(Lmindustry/type/UnitType;Larc/scene/ui/layout/Table;)V", 1 },
	{ "dps", (intptr_t) M_mindustry_type_Weapon_dps_R_float, VTABLE_mindustry_type_Weapon_dps_R_float, "()F", 1 },
	{ "shotsPerSec", (intptr_t) M_mindustry_type_Weapon_shotsPerSec_R_float, VTABLE_mindustry_type_Weapon_shotsPerSec_R_float, "()F", 1 },
	{ "drawOutline", (intptr_t) M_mindustry_type_Weapon_drawOutline_mindustry_gen_Unit_mindustry_entities_units_WeaponMount, VTABLE_mindustry_type_Weapon_drawOutline_mindustry_gen_Unit_mindustry_entities_units_WeaponMount, "(Lmindustry/gen/Unit;Lmindustry/entities/units/WeaponMount;)V", 1 },
	{ "draw", (intptr_t) M_mindustry_type_Weapon_draw_mindustry_gen_Unit_mindustry_entities_units_WeaponMount, VTABLE_mindustry_type_Weapon_draw_mindustry_gen_Unit_mindustry_entities_units_WeaponMount, "(Lmindustry/gen/Unit;Lmindustry/entities/units/WeaponMount;)V", 1 },
	{ "range", (intptr_t) M_mindustry_type_Weapon_range_R_float, VTABLE_mindustry_type_Weapon_range_R_float, "()F", 1 },
	{ "update", (intptr_t) M_mindustry_type_Weapon_update_mindustry_gen_Unit_mindustry_entities_units_WeaponMount, VTABLE_mindustry_type_Weapon_update_mindustry_gen_Unit_mindustry_entities_units_WeaponMount, "(Lmindustry/gen/Unit;Lmindustry/entities/units/WeaponMount;)V", 1 },
	{ "findTarget", (intptr_t) M_mindustry_type_Weapon_findTarget_mindustry_gen_Unit_float_float_float_boolean_boolean_R_mindustry_gen_Teamc, VTABLE_mindustry_type_Weapon_findTarget_mindustry_gen_Unit_float_float_float_boolean_boolean_R_mindustry_gen_Teamc, "(Lmindustry/gen/Unit;FFFZZ)Lmindustry/gen/Teamc;", 4 },
	{ "checkTarget", (intptr_t) M_mindustry_type_Weapon_checkTarget_mindustry_gen_Unit_mindustry_gen_Teamc_float_float_float_R_boolean, VTABLE_mindustry_type_Weapon_checkTarget_mindustry_gen_Unit_mindustry_gen_Teamc_float_float_float_R_boolean, "(Lmindustry/gen/Unit;Lmindustry/gen/Teamc;FFF)Z", 4 },
	{ "bulletRotation", (intptr_t) M_mindustry_type_Weapon_bulletRotation_mindustry_gen_Unit_mindustry_entities_units_WeaponMount_float_float_R_float, VTABLE_mindustry_type_Weapon_bulletRotation_mindustry_gen_Unit_mindustry_entities_units_WeaponMount_float_float_R_float, "(Lmindustry/gen/Unit;Lmindustry/entities/units/WeaponMount;FF)F", 4 },
	{ "shoot", (intptr_t) M_mindustry_type_Weapon_shoot_mindustry_gen_Unit_mindustry_entities_units_WeaponMount_float_float_float, VTABLE_mindustry_type_Weapon_shoot_mindustry_gen_Unit_mindustry_entities_units_WeaponMount_float_float_float, "(Lmindustry/gen/Unit;Lmindustry/entities/units/WeaponMount;FFF)V", 4 },
	{ "bullet", (intptr_t) M_mindustry_type_Weapon_bullet_mindustry_gen_Unit_mindustry_entities_units_WeaponMount_float_float_float_mindustry_entities_Mover, VTABLE_mindustry_type_Weapon_bullet_mindustry_gen_Unit_mindustry_entities_units_WeaponMount_float_float_float_mindustry_entities_Mover, "(Lmindustry/gen/Unit;Lmindustry/entities/units/WeaponMount;FFFLmindustry/entities/Mover;)V", 4 },
	{ "handleBullet", (intptr_t) M_mindustry_type_Weapon_handleBullet_mindustry_gen_Unit_mindustry_entities_units_WeaponMount_mindustry_gen_Bullet, VTABLE_mindustry_type_Weapon_handleBullet_mindustry_gen_Unit_mindustry_entities_units_WeaponMount_mindustry_gen_Bullet, "(Lmindustry/gen/Unit;Lmindustry/entities/units/WeaponMount;Lmindustry/gen/Bullet;)V", 4 },
	{ "flip", (intptr_t) M_mindustry_type_Weapon_flip, VTABLE_mindustry_type_Weapon_flip, "()V", 1 },
	{ "copy", (intptr_t) M_mindustry_type_Weapon_copy_R_mindustry_type_Weapon, VTABLE_mindustry_type_Weapon_copy_R_mindustry_type_Weapon, "()Lmindustry/type/Weapon;", 1 },
	{ "init", (intptr_t) M_mindustry_type_Weapon_init, VTABLE_mindustry_type_Weapon_init, "()V", 1 },
	{ "load", (intptr_t) M_mindustry_type_Weapon_load, VTABLE_mindustry_type_Weapon_load, "()V", 1 },
	{ "toString", (intptr_t) M_mindustry_type_Weapon_toString_R_java_lang_String, VTABLE_mindustry_type_Weapon_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "lambda$shoot$2", (intptr_t) SM_mindustry_type_Weapon_lambda$shoot$2_mindustry_entities_units_WeaponMount, 0, "(Lmindustry/entities/units/WeaponMount;)V", 4106 },
	{ "lambda$shoot$0", (intptr_t) M_mindustry_type_Weapon_lambda$shoot$0_mindustry_entities_units_WeaponMount_mindustry_gen_Unit_float_float_float_float_mindustry_entities_Mover, VTABLE_mindustry_type_Weapon_lambda$shoot$0_mindustry_entities_units_WeaponMount_mindustry_gen_Unit_float_float_float_float_mindustry_entities_Mover, "(Lmindustry/entities/units/WeaponMount;Lmindustry/gen/Unit;FFFFLmindustry/entities/Mover;)V", 4098 },
	{ "lambda$shoot$1", (intptr_t) M_mindustry_type_Weapon_lambda$shoot$1_mindustry_entities_units_WeaponMount_int_mindustry_gen_Unit_float_float_float_mindustry_entities_Mover, VTABLE_mindustry_type_Weapon_lambda$shoot$1_mindustry_entities_units_WeaponMount_int_mindustry_gen_Unit_float_float_float_mindustry_entities_Mover, "(Lmindustry/entities/units/WeaponMount;ILmindustry/gen/Unit;FFFLmindustry/entities/Mover;)V", 4098 },
	{ "lambda$findTarget$1", (intptr_t) SM_mindustry_type_Weapon_lambda$findTarget$1_boolean_mindustry_gen_Unit_mindustry_gen_Building_R_boolean, 0, "(ZLmindustry/gen/Unit;Lmindustry/gen/Building;)Z", 4106 },
	{ "lambda$findTarget$0", (intptr_t) SM_mindustry_type_Weapon_lambda$findTarget$0_boolean_boolean_mindustry_gen_Unit_R_boolean, 0, "(ZZLmindustry/gen/Unit;)Z", 4106 },
};

Class class_mindustry_type_Weapon{
		.nativeName = (intptr_t) "mindustry/type/Weapon",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_type_Weapon),
		.classVtable = (intptr_t) vtable_mindustry_type_Weapon,
		.staticInitializer = (intptr_t) clinit_mindustry_type_Weapon,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_type_Weapon,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 75,
		.nativeFields = (intptr_t) fields,
		.methodCount = 26,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 31,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_type_Weapon = registerClass(&class_mindustry_type_Weapon);

}
