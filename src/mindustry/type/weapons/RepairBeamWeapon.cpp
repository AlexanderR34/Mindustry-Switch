#include "mindustry/type/weapons/RepairBeamWeapon.h"
#include "arc/math/Angles.h"
#include "mindustry/entities/Sized.h"
#include "mindustry/world/blocks/units/RepairTurret.h"
#include "arc/graphics/Color.h"
#include "arc/graphics/g2d/Draw.h"
#include "mindustry/entities/Effect.h"
#include "mindustry/content/Fx.h"
#include "arc/scene/ui/layout/Cell.h"
#include "arc/math/geom/Position.h"
#include "mindustry/gen/Healthc.h"
#include "arc/func/Boolf.h"
#include "mindustry/type/weapons/RepairBeamWeapon_invoke_arc_func_Func_3.h"
#include "arc/math/Mathf.h"
#include "mindustry/type/weapons/RepairBeamWeapon_invoke_arc_func_Func_2.h"
#include "arc/func/Func.h"
#include "arc/Core.h"
#include "arc/math/geom/Geometry_Raycaster.h"
#include "mindustry/gen/Unit.h"
#include "mindustry/gen/Sounds.h"
#include "mindustry/type/weapons/RepairBeamWeapon_invoke_arc_math_geom_Geometry_Raycaster_1.h"
#include "arc/util/Time.h"
#include "mindustry/gen/Building.h"
#include "java/lang/Object.h"
#include "mindustry/entities/Units.h"
#include "mindustry/type/weapons/RepairBeamWeapon_HealBeamMount.h"
#include "mindustry/entities/bullet/BulletType.h"
#include "arc/math/geom/Vec2.h"
#include "mindustry/type/Weapon.h"
#include "arc/graphics/g2d/TextureAtlas_AtlasRegion.h"
#include "mindustry/world/Block.h"
#include "mindustry/world/meta/StatUnit.h"
#include "mindustry/gen/Unitc.h"
#include "mindustry/world/meta/Stat.h"
#include "java/lang/String.h"
#include "mindustry/type/weapons/RepairBeamWeapon_invoke_arc_func_Boolf_2.h"
#include "mindustry/type/weapons/RepairBeamWeapon_invoke_arc_func_Boolf_3.h"
#include "mindustry/entities/units/WeaponMount.h"
#include "arc/graphics/g2d/TextureAtlas.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "mindustry/gen/Teamc.h"
#include "arc/scene/ui/layout/Table.h"
#include "mindustry/type/UnitType.h"
#include "java/lang/CharSequence.h"
#include "mindustry/graphics/Pal.h"
#include "arc/audio/Sound.h"
#include "mindustry/type/weapons/RepairBeamWeapon.h"
#include "mindustry/game/Team.h"
#include "mindustry/core/World.h"
#include "mindustry/Vars.h"

extern "C" {


void mark_mindustry_type_weapons_RepairBeamWeapon(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_type_Weapon(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_type_weapons_RepairBeamWeapon *) object;
	if (self->F_laser)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_laser)->clazz)->markFunction)((jobject) self->F_laser, mark, depth + 1);
	if (self->F_laserEnd)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_laserEnd)->clazz)->markFunction)((jobject) self->F_laserEnd, mark, depth + 1);
	if (self->F_laserTop)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_laserTop)->clazz)->markFunction)((jobject) self->F_laserTop, mark, depth + 1);
	if (self->F_laserTopEnd)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_laserTopEnd)->clazz)->markFunction)((jobject) self->F_laserTopEnd, mark, depth + 1);
	if (self->F_laserColor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_laserColor)->clazz)->markFunction)((jobject) self->F_laserColor, mark, depth + 1);
	if (self->F_laserTopColor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_laserTopColor)->clazz)->markFunction)((jobject) self->F_laserTopColor, mark, depth + 1);
	if (self->F_healColor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_healColor)->clazz)->markFunction)((jobject) self->F_healColor, mark, depth + 1);
	if (self->F_healEffect)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_healEffect)->clazz)->markFunction)((jobject) self->F_healEffect, mark, depth + 1);
}

void clinit_mindustry_type_weapons_RepairBeamWeapon(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_type_Weapon(ctx);
}

void init_mindustry_type_weapons_RepairBeamWeapon_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/weapons/RepairBeamWeapon:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_type_weapons_RepairBeamWeapon(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(46);
	init_mindustry_type_Weapon_java_lang_String(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(28);
	((mindustry_type_weapons_RepairBeamWeapon *) NULL_CHECK((frame[0].o)))->F_targetBuildings = (jint(0));
	((mindustry_type_weapons_RepairBeamWeapon *) NULL_CHECK((frame[0].o)))->F_targetUnits = (jint(1));
	LINE_NUMBER(30);
	((mindustry_type_weapons_RepairBeamWeapon *) NULL_CHECK((frame[0].o)))->F_repairSpeed = (jfloat(0.3f));
	LINE_NUMBER(31);
	((mindustry_type_weapons_RepairBeamWeapon *) NULL_CHECK((frame[0].o)))->F_fractionRepairSpeed = (jfloat(0));
	LINE_NUMBER(32);
	((mindustry_type_weapons_RepairBeamWeapon *) NULL_CHECK((frame[0].o)))->F_beamWidth = (jfloat(1));
	LINE_NUMBER(33);
	((mindustry_type_weapons_RepairBeamWeapon *) NULL_CHECK((frame[0].o)))->F_pulseRadius = (jfloat(6.0f));
	LINE_NUMBER(34);
	((mindustry_type_weapons_RepairBeamWeapon *) NULL_CHECK((frame[0].o)))->F_pulseStroke = (jfloat(2));
	LINE_NUMBER(35);
	((mindustry_type_weapons_RepairBeamWeapon *) NULL_CHECK((frame[0].o)))->F_widthSinMag = (jfloat(0));
	((mindustry_type_weapons_RepairBeamWeapon *) NULL_CHECK((frame[0].o)))->F_widthSinScl = (jfloat(4.0f));
	LINE_NUMBER(36);
	((mindustry_type_weapons_RepairBeamWeapon *) NULL_CHECK((frame[0].o)))->F_recentDamageMultiplier = (jfloat(0.1f));
	LINE_NUMBER(40);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"98ffa9"_j))));
	((mindustry_type_weapons_RepairBeamWeapon *) NULL_CHECK(sp[0].o))->F_laserColor = (jref) sp[1].o;
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_white;
	sp[1].o = (jobject)((func_arc_graphics_Color_cpy_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Color_cpy_R_arc_graphics_Color])(ctx, sp[1].o);
	((mindustry_type_weapons_RepairBeamWeapon *) NULL_CHECK(sp[0].o))->F_laserTopColor = (jref) sp[1].o;
	LINE_NUMBER(42);
	sp[0].o = frame[0].o;
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_heal;
	((mindustry_type_weapons_RepairBeamWeapon *) NULL_CHECK(sp[0].o))->F_healColor = (jref) sp[1].o;
	LINE_NUMBER(43);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_healBlockFull;
	((mindustry_type_weapons_RepairBeamWeapon *) NULL_CHECK(sp[0].o))->F_healEffect = (jref) sp[1].o;
	LINE_NUMBER(54);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_reload = (jfloat(1));
	LINE_NUMBER(55);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_predictTarget = (jint(0));
	LINE_NUMBER(56);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_autoTarget = (jint(1));
	LINE_NUMBER(57);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_controllable = (jint(0));
	LINE_NUMBER(58);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_rotate = (jint(1));
	LINE_NUMBER(59);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_type_weapons_RepairBeamWeapon_invoke_arc_func_Func_2(ctx);
		auto proxy = (mindustry_type_weapons_RepairBeamWeapon_invoke_arc_func_Func_2 *) gcAlloc(ctx, &class_mindustry_type_weapons_RepairBeamWeapon_invoke_arc_func_Func_2);
		sp[1].o = (jobject) proxy;
	}
	((mindustry_type_Weapon *) NULL_CHECK(sp[0].o))->F_mountType = (jref) sp[1].o;
	LINE_NUMBER(60);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_recoil = (jfloat(0));
	LINE_NUMBER(61);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_noAttack = (jint(1));
	LINE_NUMBER(62);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_useAttackRange = (jint(0));
	LINE_NUMBER(63);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_beamHeal;
	((mindustry_type_Weapon *) NULL_CHECK(sp[0].o))->F_activeSound = (jref) sp[1].o;
	LINE_NUMBER(47);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_type_weapons_RepairBeamWeapon(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/weapons/RepairBeamWeapon:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_type_weapons_RepairBeamWeapon(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(49);
	init_mindustry_type_Weapon(ctx, (frame[0].o));
	LINE_NUMBER(28);
	((mindustry_type_weapons_RepairBeamWeapon *) NULL_CHECK((frame[0].o)))->F_targetBuildings = (jint(0));
	((mindustry_type_weapons_RepairBeamWeapon *) NULL_CHECK((frame[0].o)))->F_targetUnits = (jint(1));
	LINE_NUMBER(30);
	((mindustry_type_weapons_RepairBeamWeapon *) NULL_CHECK((frame[0].o)))->F_repairSpeed = (jfloat(0.3f));
	LINE_NUMBER(31);
	((mindustry_type_weapons_RepairBeamWeapon *) NULL_CHECK((frame[0].o)))->F_fractionRepairSpeed = (jfloat(0));
	LINE_NUMBER(32);
	((mindustry_type_weapons_RepairBeamWeapon *) NULL_CHECK((frame[0].o)))->F_beamWidth = (jfloat(1));
	LINE_NUMBER(33);
	((mindustry_type_weapons_RepairBeamWeapon *) NULL_CHECK((frame[0].o)))->F_pulseRadius = (jfloat(6.0f));
	LINE_NUMBER(34);
	((mindustry_type_weapons_RepairBeamWeapon *) NULL_CHECK((frame[0].o)))->F_pulseStroke = (jfloat(2));
	LINE_NUMBER(35);
	((mindustry_type_weapons_RepairBeamWeapon *) NULL_CHECK((frame[0].o)))->F_widthSinMag = (jfloat(0));
	((mindustry_type_weapons_RepairBeamWeapon *) NULL_CHECK((frame[0].o)))->F_widthSinScl = (jfloat(4.0f));
	LINE_NUMBER(36);
	((mindustry_type_weapons_RepairBeamWeapon *) NULL_CHECK((frame[0].o)))->F_recentDamageMultiplier = (jfloat(0.1f));
	LINE_NUMBER(40);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"98ffa9"_j))));
	((mindustry_type_weapons_RepairBeamWeapon *) NULL_CHECK(sp[0].o))->F_laserColor = (jref) sp[1].o;
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_white;
	sp[1].o = (jobject)((func_arc_graphics_Color_cpy_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Color_cpy_R_arc_graphics_Color])(ctx, sp[1].o);
	((mindustry_type_weapons_RepairBeamWeapon *) NULL_CHECK(sp[0].o))->F_laserTopColor = (jref) sp[1].o;
	LINE_NUMBER(42);
	sp[0].o = frame[0].o;
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_heal;
	((mindustry_type_weapons_RepairBeamWeapon *) NULL_CHECK(sp[0].o))->F_healColor = (jref) sp[1].o;
	LINE_NUMBER(43);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_healBlockFull;
	((mindustry_type_weapons_RepairBeamWeapon *) NULL_CHECK(sp[0].o))->F_healEffect = (jref) sp[1].o;
	LINE_NUMBER(54);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_reload = (jfloat(1));
	LINE_NUMBER(55);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_predictTarget = (jint(0));
	LINE_NUMBER(56);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_autoTarget = (jint(1));
	LINE_NUMBER(57);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_controllable = (jint(0));
	LINE_NUMBER(58);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_rotate = (jint(1));
	LINE_NUMBER(59);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_type_weapons_RepairBeamWeapon_invoke_arc_func_Func_3(ctx);
		auto proxy = (mindustry_type_weapons_RepairBeamWeapon_invoke_arc_func_Func_3 *) gcAlloc(ctx, &class_mindustry_type_weapons_RepairBeamWeapon_invoke_arc_func_Func_3);
		sp[1].o = (jobject) proxy;
	}
	((mindustry_type_Weapon *) NULL_CHECK(sp[0].o))->F_mountType = (jref) sp[1].o;
	LINE_NUMBER(60);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_recoil = (jfloat(0));
	LINE_NUMBER(61);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_noAttack = (jint(1));
	LINE_NUMBER(62);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_useAttackRange = (jint(0));
	LINE_NUMBER(63);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_beamHeal;
	((mindustry_type_Weapon *) NULL_CHECK(sp[0].o))->F_activeSound = (jref) sp[1].o;
	LINE_NUMBER(50);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_type_weapons_RepairBeamWeapon_addStats_mindustry_type_UnitType_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/weapons/RepairBeamWeapon:addStats", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(68);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	LINE_NUMBER(69);
	sp[0].o = frame[2].o;
	clinit_mindustry_world_meta_Stat(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_Stat_repairSpeed;
	sp[1].o = (jobject)((func_mindustry_world_meta_Stat_localized_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_meta_Stat_localized_R_java_lang_String])(ctx, sp[1].o);
	sp += 2;
	if (((jint)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_mirror) == 0) goto label_2;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"2x "_j));
	goto label_3;
label_2:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
label_3:;
	{
	sp -= 3;
	jint temp0 = jint((((jfloat)((mindustry_type_weapons_RepairBeamWeapon *) NULL_CHECK((frame[0].o)))->F_repairSpeed) * (jfloat(60.0f))));
	clinit_mindustry_world_meta_StatUnit(ctx);
	sp[3].o = (jobject)SF_mindustry_world_meta_StatUnit_perSecond;
	sp[3].o = (jobject)((func_mindustry_world_meta_StatUnit_localized_R_java_lang_String) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_mindustry_world_meta_StatUnit_localized_R_java_lang_String])(ctx, sp[3].o);
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"[lightgray]\u0001: \u0001[white]\u0001 \u0001"_j.string, 4, sp[1].o, sp[2].o, boxInteger(ctx, temp0), sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(70);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_type_weapons_RepairBeamWeapon_dps_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/weapons/RepairBeamWeapon:dps", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(74);
	popStackFrame(ctx);
	return (jfloat(0));
	}

	popStackFrame(ctx);
}

void M_mindustry_type_weapons_RepairBeamWeapon_load(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/weapons/RepairBeamWeapon:load", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(79);
	M_mindustry_type_Weapon_load(ctx, (frame[0].o));
	LINE_NUMBER(81);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"laser-white"_j))));
	((mindustry_type_weapons_RepairBeamWeapon *) NULL_CHECK(sp[0].o))->F_laser = (jref) sp[1].o;
	LINE_NUMBER(82);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"laser-white-end"_j))));
	((mindustry_type_weapons_RepairBeamWeapon *) NULL_CHECK(sp[0].o))->F_laserEnd = (jref) sp[1].o;
	LINE_NUMBER(83);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"laser-top"_j))));
	((mindustry_type_weapons_RepairBeamWeapon *) NULL_CHECK(sp[0].o))->F_laserTop = (jref) sp[1].o;
	LINE_NUMBER(84);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"laser-top-end"_j))));
	((mindustry_type_weapons_RepairBeamWeapon *) NULL_CHECK(sp[0].o))->F_laserTopEnd = (jref) sp[1].o;
	LINE_NUMBER(85);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_type_weapons_RepairBeamWeapon_findTarget_mindustry_gen_Unit_float_float_float_boolean_boolean_R_mindustry_gen_Teamc(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jbool param4, jbool param5) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/weapons/RepairBeamWeapon:findTarget", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].i = param4;
	frame[6].i = param5;
	{
	LINE_NUMBER(89);
	if (((jint)((mindustry_type_weapons_RepairBeamWeapon *) NULL_CHECK((frame[0].o)))->F_targetUnits) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_team;
	jfloat temp0 = frame[2].f;
	jfloat temp1 = frame[3].f;
	jfloat temp2 = frame[4].f;
	{ /* InvokeDynamic */
		clinit_mindustry_type_weapons_RepairBeamWeapon_invoke_arc_func_Boolf_2(ctx);
		auto proxy = (mindustry_type_weapons_RepairBeamWeapon_invoke_arc_func_Boolf_2 *) gcAlloc(ctx, &class_mindustry_type_weapons_RepairBeamWeapon_invoke_arc_func_Boolf_2);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_entities_Units_closest_mindustry_game_Team_float_float_float_arc_func_Boolf_R_mindustry_gen_Unit(ctx, sp[0].o, temp0, temp1, temp2, sp[1].o);
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ACONST_NULL();
label_2:;
	{
	sp -= 1;
	frame[7].o = sp[0].o;
	LINE_NUMBER(90);
	if ((frame[7].o) != nullptr) goto label_4;
	}
	{
	if (((jint)((mindustry_type_weapons_RepairBeamWeapon *) NULL_CHECK((frame[0].o)))->F_targetBuildings) != 0) goto label_5;
	}
label_4:;
	INST_ALOAD(7);
	popStackFrame(ctx);
	INST_ARETURN();
label_5:;
	{
	LINE_NUMBER(91);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_team;
	jfloat temp0 = frame[2].f;
	jfloat temp1 = frame[3].f;
	jfloat temp2 = frame[4].f;
	{ /* InvokeDynamic */
		clinit_mindustry_type_weapons_RepairBeamWeapon_invoke_arc_func_Boolf_3(ctx);
		auto proxy = (mindustry_type_weapons_RepairBeamWeapon_invoke_arc_func_Boolf_3 *) gcAlloc(ctx, &class_mindustry_type_weapons_RepairBeamWeapon_invoke_arc_func_Boolf_3);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_entities_Units_findAllyTile_mindustry_game_Team_float_float_float_arc_func_Boolf_R_mindustry_gen_Building(ctx, sp[0].o, temp0, temp1, temp2, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_type_weapons_RepairBeamWeapon_checkTarget_mindustry_gen_Unit_mindustry_gen_Teamc_float_float_float_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/weapons/RepairBeamWeapon:checkTarget", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	{
	LINE_NUMBER(96);
	jint temp0 = (jint)((func_arc_math_geom_Position_within_arc_math_geom_Position_float_R_boolean) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_within_arc_math_geom_Position_float_R_boolean, (frame[2].o)))(ctx, (frame[2].o), (frame[1].o), ((frame[5].f) + (((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_hitSize) / (jfloat(2)))));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_mindustry_gen_Teamc_team_R_mindustry_game_Team) resolveInterfaceMethod(ctx, &class_mindustry_gen_Teamc, INDEX_mindustry_gen_Teamc_team_R_mindustry_game_Team, (frame[2].o)))(ctx, (frame[2].o));
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_team;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_gen_Healthc)) == 0) goto label_1;
	}
	{
	frame[6].o = (checkCast(ctx, &class_mindustry_gen_Healthc, (frame[2].o)));
	jint temp0 = (jint)((func_mindustry_gen_Healthc_damaged_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_gen_Healthc, INDEX_mindustry_gen_Healthc_damaged_R_boolean, (frame[6].o)))(ctx, (frame[6].o));
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Healthc_isValid_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_gen_Healthc, INDEX_mindustry_gen_Healthc_isValid_R_boolean, (frame[6].o)))(ctx, (frame[6].o));
	if (temp0 == 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_3;
label_1:;
	INST_ICONST(0);
label_3:;
	if ((--sp)->i != 0) goto label_4;
	INST_ICONST(1);
	goto label_5;
label_4:;
	INST_ICONST(0);
label_5:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_mindustry_type_weapons_RepairBeamWeapon_shoot_mindustry_gen_Unit_mindustry_entities_units_WeaponMount_float_float_float(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/weapons/RepairBeamWeapon:shoot", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	LINE_NUMBER(102);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_type_weapons_RepairBeamWeapon_update_mindustry_gen_Unit_mindustry_entities_units_WeaponMount(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/weapons/RepairBeamWeapon:update", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(106);
	M_mindustry_type_Weapon_update_mindustry_gen_Unit_mindustry_entities_units_WeaponMount(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	LINE_NUMBER(109);
	frame[3].f = (((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_rotation) - (jfloat(90.0f)));
	LINE_NUMBER(110);
	jfloat temp0 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_x;
	jfloat temp1 = (jfloat)SM_arc_math_Angles_trnsx_float_float_float_R_float(ctx, (frame[3].f), ((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_y));
	frame[4].f = (temp0 + temp1);
	LINE_NUMBER(111);
	jfloat temp2 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_y;
	jfloat temp3 = (jfloat)SM_arc_math_Angles_trnsy_float_float_float_R_float(ctx, (frame[3].f), ((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_y));
	frame[5].f = (temp2 + temp3);
	LINE_NUMBER(113);
	frame[6].o = (checkCast(ctx, &class_mindustry_type_weapons_RepairBeamWeapon$HealBeamMount, (frame[2].o)));
	LINE_NUMBER(114);
	frame[7].i = ((jint)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_shoot);
	LINE_NUMBER(116);
	if (((jint)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_autoTarget) != 0) goto label_7;
	}
	{
	LINE_NUMBER(117);
	((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[6].o)))->F_target = (jref) (jobject(nullptr));
	LINE_NUMBER(118);
	if ((frame[7].i) == 0) goto label_10;
	}
	{
	LINE_NUMBER(119);
	sp[0].o = (jobject)((mindustry_type_weapons_RepairBeamWeapon$HealBeamMount *) NULL_CHECK((frame[6].o)))->F_lastEnd;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, ((jfloat)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[6].o)))->F_aimX), ((jfloat)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[6].o)))->F_aimY));
	LINE_NUMBER(121);
	if (((jint)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_rotate) != 0) goto label_10;
	}
	{
	jfloat temp0 = (jfloat)SM_arc_math_Angles_angle_float_float_float_float_R_float(ctx, (frame[4].f), (frame[5].f), ((jfloat)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[6].o)))->F_aimX), ((jfloat)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[6].o)))->F_aimY));
	jint temp1 = (jint)SM_arc_math_Angles_within_float_float_float_R_boolean(ctx, temp0, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_rotation), ((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_shootCone));
	if (temp1 != 0) goto label_10;
	}
	{
	LINE_NUMBER(122);
	frame[7].i = (jint(0));
	}
label_10:;
	{
	LINE_NUMBER(127);
	sp[0].o = (jobject)((mindustry_type_weapons_RepairBeamWeapon$HealBeamMount *) NULL_CHECK((frame[6].o)))->F_lastEnd;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_sub_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_sub_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[4].f), (frame[5].f));
	jfloat temp0 = (jfloat)((func_mindustry_type_weapons_RepairBeamWeapon_range_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_weapons_RepairBeamWeapon_range_R_float])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_limit_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_limit_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp0);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_add_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_add_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[4].f), (frame[5].f));
	LINE_NUMBER(129);
	if (((jint)((mindustry_type_weapons_RepairBeamWeapon *) NULL_CHECK((frame[0].o)))->F_targetBuildings) == 0) goto label_15;
	}
	{
	LINE_NUMBER(131);
	jfloat temp0 = frame[4].f;
	jfloat temp1 = frame[5].f;
	sp[0].o = (jobject)((mindustry_type_weapons_RepairBeamWeapon$HealBeamMount *) NULL_CHECK((frame[6].o)))->F_lastEnd;
	jfloat temp2 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x;
	sp[0].o = (jobject)((mindustry_type_weapons_RepairBeamWeapon$HealBeamMount *) NULL_CHECK((frame[6].o)))->F_lastEnd;
	jfloat temp3 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y;
	{ /* InvokeDynamic */
		clinit_mindustry_type_weapons_RepairBeamWeapon_invoke_arc_math_geom_Geometry$Raycaster_1(ctx);
		auto proxy = (mindustry_type_weapons_RepairBeamWeapon_invoke_arc_math_geom_Geometry$Raycaster_1 *) gcAlloc(ctx, &class_mindustry_type_weapons_RepairBeamWeapon_invoke_arc_math_geom_Geometry$Raycaster_1);
		proxy->F_field1 = (jref) (frame[6].o);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[0].o = (jobject) proxy;
	}
	SM_mindustry_core_World_raycastEachWorld_float_float_float_float_arc_math_geom_Geometry$Raycaster(ctx, temp0, temp1, temp2, temp3, sp[0].o);
	}
label_15:;
	{
	LINE_NUMBER(141);
	if (((jint)((mindustry_type_weapons_RepairBeamWeapon *) NULL_CHECK((frame[0].o)))->F_targetUnits) == 0) goto label_7;
	}
label_7:;
	{
	LINE_NUMBER(146);
	sp[0].o = frame[6].o;
	jfloat temp0 = (jfloat)((mindustry_type_weapons_RepairBeamWeapon$HealBeamMount *) NULL_CHECK((frame[6].o)))->F_strength;
	sp[1].f = temp0;
	sp += 2;
	if (((jint)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_autoTarget) == 0) goto label_17;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_target;
	if (sp[0].o == nullptr) goto label_18;
	}
	INST_ICONST(1);
	goto label_19;
label_18:;
	INST_ICONST(0);
	goto label_19;
label_17:;
	INST_ILOAD(7);
label_19:;
	{
	sp -= 3;
	jint temp0 = (jint)SM_arc_math_Mathf_num_boolean_R_int(ctx, sp[2].i);
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_lerpDelta_float_float_float_R_float(ctx, sp[1].f, (jfloat(temp0)), (jfloat(0.2f)));
	((mindustry_type_weapons_RepairBeamWeapon$HealBeamMount *) NULL_CHECK(sp[0].o))->F_strength = temp1;
	LINE_NUMBER(149);
	if ((frame[7].i) == 0) goto label_21;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_target;
	frame[9].o = sp[0].o;
	if ((isInstance(ctx, (frame[9].o), &class_mindustry_gen_Building)) == 0) goto label_21;
	}
	{
	frame[8].o = (checkCast(ctx, &class_mindustry_gen_Building, (frame[9].o)));
	jint temp0 = (jint)((func_mindustry_gen_Building_damaged_R_boolean) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_mindustry_gen_Building_damaged_R_boolean])(ctx, (frame[8].o));
	if (temp0 == 0) goto label_21;
	}
	{
	sp[0].o = frame[6].o;
	jfloat temp0 = ((jfloat)((mindustry_type_weapons_RepairBeamWeapon$HealBeamMount *) NULL_CHECK(sp[0].o))->F_effectTimer) + (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta);
	((mindustry_type_weapons_RepairBeamWeapon$HealBeamMount *) NULL_CHECK(sp[0].o))->F_effectTimer = temp0;
	if ((floatCompare(temp0, ((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_reload), -1)) < 0) goto label_21;
	}
	{
	LINE_NUMBER(150);
	sp[0].o = (jobject)((mindustry_type_weapons_RepairBeamWeapon *) NULL_CHECK((frame[0].o)))->F_healEffect;
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[8].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[8].o)))->F_y;
	jfloat temp2 = jfloat(0);
	sp[1].o = (jobject)((mindustry_type_weapons_RepairBeamWeapon *) NULL_CHECK((frame[0].o)))->F_healColor;
	sp[2].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[8].o)))->F_block;
	((func_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color_java_lang_Object])(ctx, sp[0].o, temp0, temp1, temp2, sp[1].o, sp[2].o);
	LINE_NUMBER(151);
	((mindustry_type_weapons_RepairBeamWeapon$HealBeamMount *) NULL_CHECK((frame[6].o)))->F_effectTimer = (jfloat(0));
	}
label_21:;
	{
	LINE_NUMBER(154);
	if ((frame[7].i) == 0) goto label_25;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_target;
	frame[9].o = sp[0].o;
	if ((isInstance(ctx, (frame[9].o), &class_mindustry_gen_Healthc)) == 0) goto label_25;
	}
	{
	frame[8].o = (checkCast(ctx, &class_mindustry_gen_Healthc, (frame[9].o)));
	LINE_NUMBER(155);
	jfloat temp0 = (((jfloat)((mindustry_type_weapons_RepairBeamWeapon *) NULL_CHECK((frame[0].o)))->F_repairSpeed) * ((jfloat)((mindustry_type_weapons_RepairBeamWeapon$HealBeamMount *) NULL_CHECK((frame[6].o)))->F_strength)) * (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta);
	jfloat temp1 = (((jfloat)((mindustry_type_weapons_RepairBeamWeapon *) NULL_CHECK((frame[0].o)))->F_fractionRepairSpeed) * ((jfloat)((mindustry_type_weapons_RepairBeamWeapon$HealBeamMount *) NULL_CHECK((frame[6].o)))->F_strength)) * (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta);
	jfloat temp2 = (jfloat)((func_mindustry_gen_Healthc_maxHealth_R_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Healthc, INDEX_mindustry_gen_Healthc_maxHealth_R_float, (frame[8].o)))(ctx, (frame[8].o));
	frame[9].f = (temp0 + ((temp1 * temp2) / (jfloat(100.0f))));
	LINE_NUMBER(156);
	sp[0].o = frame[8].o;
	sp += 1;
	if ((isInstance(ctx, (frame[8].o), &class_mindustry_gen_Building)) == 0) goto label_28;
	}
	{
	frame[10].o = (checkCast(ctx, &class_mindustry_gen_Building, (frame[8].o)));
	jint temp0 = (jint)((func_mindustry_gen_Building_wasRecentlyDamaged_R_boolean) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_mindustry_gen_Building_wasRecentlyDamaged_R_boolean])(ctx, (frame[10].o));
	if (temp0 == 0) goto label_28;
	}
	{
	jfloat temp0 = (jfloat)((mindustry_type_weapons_RepairBeamWeapon *) NULL_CHECK((frame[0].o)))->F_recentDamageMultiplier;
	sp[0].f = temp0;
	sp += 1;
	goto label_30;
	}
label_28:;
	INST_FCONST(1);
label_30:;
	{
	sp -= 2;
	((func_mindustry_gen_Healthc_heal_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Healthc, INDEX_mindustry_gen_Healthc_heal_float, sp[0].o))(ctx, sp[0].o, (sp[1].f * (frame[9].f)));
	}
label_25:;
	LINE_NUMBER(158);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_type_weapons_RepairBeamWeapon_draw_mindustry_gen_Unit_mindustry_entities_units_WeaponMount(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[27];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/weapons/RepairBeamWeapon:draw", 27 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(162);
	M_mindustry_type_Weapon_draw_mindustry_gen_Unit_mindustry_entities_units_WeaponMount(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	LINE_NUMBER(164);
	frame[3].o = (checkCast(ctx, &class_mindustry_type_weapons_RepairBeamWeapon$HealBeamMount, (frame[2].o)));
	LINE_NUMBER(166);
	jint temp0 = (jint)((func_mindustry_gen_Unit_canShoot_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_canShoot_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(168);
	frame[4].f = (((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_rotation) - (jfloat(90.0f)));
	LINE_NUMBER(169);
	jfloat temp0 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_x;
	jfloat temp1 = (jfloat)SM_arc_math_Angles_trnsx_float_float_float_R_float(ctx, (frame[4].f), ((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_y));
	frame[5].f = (temp0 + temp1);
	LINE_NUMBER(170);
	jfloat temp2 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_y;
	jfloat temp3 = (jfloat)SM_arc_math_Angles_trnsy_float_float_float_R_float(ctx, (frame[4].f), ((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_y));
	frame[6].f = (temp2 + temp3);
	LINE_NUMBER(171);
	jfloat temp4 = (jfloat)SM_arc_graphics_g2d_Draw_z_R_float(ctx);
	frame[7].f = temp4;
	LINE_NUMBER(172);
	jfloat temp5 = frame[5].f;
	jfloat temp6 = frame[6].f;
	jfloat temp7 = ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_rotation) + ((jfloat)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_rotation);
	jfloat temp8 = (jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_shootY;
	jint temp9 = (jint)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_id;
	sp[0].o = (jobject)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_target;
	jobject temp10 = sp[0].o;
	sp[0].f = temp5;
	sp[1].f = temp6;
	sp[2].f = temp7;
	sp[3].f = temp8;
	sp[4].i = temp9;
	sp += 5;
	if (temp10 == nullptr) goto label_9;
	}
	{
	if (((jint)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_controllable) == 0) goto label_10;
	}
label_9:;
	INST_ACONST_NULL();
	goto label_11;
label_10:;
	{
	sp[0].o = (jobject)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_target;
	sp[0].o = checkCast(ctx, &class_mindustry_entities_Sized, sp[0].o);
	sp += 1;
	}
label_11:;
	{
	sp -= 6;
	sp[6].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_team;
	jfloat temp0 = (jfloat)((mindustry_type_weapons_RepairBeamWeapon$HealBeamMount *) NULL_CHECK((frame[3].o)))->F_strength;
	jfloat temp1 = (jfloat)((mindustry_type_weapons_RepairBeamWeapon *) NULL_CHECK((frame[0].o)))->F_pulseStroke;
	jfloat temp2 = (jfloat)((mindustry_type_weapons_RepairBeamWeapon *) NULL_CHECK((frame[0].o)))->F_pulseRadius;
	jfloat temp3 = (jfloat)((mindustry_type_weapons_RepairBeamWeapon *) NULL_CHECK((frame[0].o)))->F_beamWidth;
	jfloat temp4 = (jfloat)((mindustry_type_weapons_RepairBeamWeapon *) NULL_CHECK((frame[0].o)))->F_widthSinScl;
	jfloat temp5 = (jfloat)((mindustry_type_weapons_RepairBeamWeapon *) NULL_CHECK((frame[0].o)))->F_widthSinMag;
	LINE_NUMBER(173);
	jfloat temp6 = (jfloat)SM_arc_math_Mathf_absin_float_float_R_float(ctx, temp4, temp5);
	jfloat temp7 = temp3 + temp6;
	sp[7].o = (jobject)((mindustry_type_weapons_RepairBeamWeapon$HealBeamMount *) NULL_CHECK((frame[3].o)))->F_lastEnd;
	sp[8].o = (jobject)((mindustry_type_weapons_RepairBeamWeapon$HealBeamMount *) NULL_CHECK((frame[3].o)))->F_offset;
	sp[9].o = (jobject)((mindustry_type_weapons_RepairBeamWeapon *) NULL_CHECK((frame[0].o)))->F_laserColor;
	sp[10].o = (jobject)((mindustry_type_weapons_RepairBeamWeapon *) NULL_CHECK((frame[0].o)))->F_laserTopColor;
	sp[11].o = (jobject)((mindustry_type_weapons_RepairBeamWeapon *) NULL_CHECK((frame[0].o)))->F_laser;
	sp[12].o = (jobject)((mindustry_type_weapons_RepairBeamWeapon *) NULL_CHECK((frame[0].o)))->F_laserEnd;
	sp[13].o = (jobject)((mindustry_type_weapons_RepairBeamWeapon *) NULL_CHECK((frame[0].o)))->F_laserTop;
	sp[14].o = (jobject)((mindustry_type_weapons_RepairBeamWeapon *) NULL_CHECK((frame[0].o)))->F_laserTopEnd;
	LINE_NUMBER(172);
	SM_mindustry_world_blocks_units_RepairTurret_drawBeam_float_float_float_float_int_mindustry_entities_Sized_mindustry_game_Team_float_float_float_float_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_graphics_Color_arc_graphics_Color_arc_graphics_g2d_TextureRegion_arc_graphics_g2d_TextureRegion_arc_graphics_g2d_TextureRegion_arc_graphics_g2d_TextureRegion(ctx, sp[0].f, sp[1].f, sp[2].f, sp[3].f, sp[4].i, sp[5].o, sp[6].o, temp0, temp1, temp2, temp7, sp[7].o, sp[8].o, sp[9].o, sp[10].o, sp[11].o, sp[12].o, sp[13].o, sp[14].o);
	LINE_NUMBER(175);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (frame[7].f));
	}
label_3:;
	LINE_NUMBER(177);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_type_weapons_RepairBeamWeapon_init(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/weapons/RepairBeamWeapon:init", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(181);
	M_mindustry_type_Weapon_init(ctx, (frame[0].o));
	LINE_NUMBER(182);
	sp[0].o = (jobject)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_bullet;
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_healPercent = ((jfloat)((mindustry_type_weapons_RepairBeamWeapon *) NULL_CHECK((frame[0].o)))->F_fractionRepairSpeed);
	LINE_NUMBER(183);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_type_weapons_RepairBeamWeapon_lambda$update$0_mindustry_gen_Unit_mindustry_type_weapons_RepairBeamWeapon$HealBeamMount_int_int_R_boolean(jcontext ctx, jobject param0, jobject param1, jint param2, jint param3) {
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/weapons/RepairBeamWeapon:lambda$update$0", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_type_weapons_RepairBeamWeapon(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(132);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_build_int_int_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_build_int_int_R_mindustry_gen_Building])(ctx, sp[0].o, (frame[2].i), (frame[3].i));
	frame[4].o = sp[0].o;
	LINE_NUMBER(133);
	if ((frame[4].o) == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[4].o)))->F_team;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_team;
	if (sp[0].o != sp[1].o) goto label_2;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Building_damaged_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_gen_Building_damaged_R_boolean])(ctx, (frame[4].o));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(134);
	((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[1].o)))->F_target = (jref) (frame[4].o);
	LINE_NUMBER(135);
	sp[0].o = (jobject)((mindustry_type_weapons_RepairBeamWeapon$HealBeamMount *) NULL_CHECK((frame[1].o)))->F_lastEnd;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (jfloat(((frame[2].i) * (8)))), (jfloat(((frame[3].i) * (8)))));
	LINE_NUMBER(136);
	popStackFrame(ctx);
	return (jint(1));
	}
label_2:;
	{
	LINE_NUMBER(138);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_type_weapons_RepairBeamWeapon_lambda$findTarget$0_mindustry_gen_Unit_mindustry_gen_Unit_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/weapons/RepairBeamWeapon:lambda$findTarget$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_type_weapons_RepairBeamWeapon(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(89);
	if ((frame[1].o) == (frame[0].o)) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Unit_damaged_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_damaged_R_boolean])(ctx, (frame[1].o));
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

void *vtable_mindustry_type_weapons_RepairBeamWeapon[] {
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
	(void *) M_mindustry_type_weapons_RepairBeamWeapon_addStats_mindustry_type_UnitType_arc_scene_ui_layout_Table,
	(void *) M_mindustry_type_weapons_RepairBeamWeapon_dps_R_float,
	(void *) M_mindustry_type_Weapon_shotsPerSec_R_float,
	(void *) M_mindustry_type_Weapon_drawOutline_mindustry_gen_Unit_mindustry_entities_units_WeaponMount,
	(void *) M_mindustry_type_weapons_RepairBeamWeapon_draw_mindustry_gen_Unit_mindustry_entities_units_WeaponMount,
	(void *) M_mindustry_type_Weapon_range_R_float,
	(void *) M_mindustry_type_weapons_RepairBeamWeapon_update_mindustry_gen_Unit_mindustry_entities_units_WeaponMount,
	(void *) M_mindustry_type_weapons_RepairBeamWeapon_findTarget_mindustry_gen_Unit_float_float_float_boolean_boolean_R_mindustry_gen_Teamc,
	(void *) M_mindustry_type_weapons_RepairBeamWeapon_checkTarget_mindustry_gen_Unit_mindustry_gen_Teamc_float_float_float_R_boolean,
	(void *) M_mindustry_type_Weapon_bulletRotation_mindustry_gen_Unit_mindustry_entities_units_WeaponMount_float_float_R_float,
	(void *) M_mindustry_type_weapons_RepairBeamWeapon_shoot_mindustry_gen_Unit_mindustry_entities_units_WeaponMount_float_float_float,
	(void *) M_mindustry_type_Weapon_bullet_mindustry_gen_Unit_mindustry_entities_units_WeaponMount_float_float_float_mindustry_entities_Mover,
	(void *) M_mindustry_type_Weapon_handleBullet_mindustry_gen_Unit_mindustry_entities_units_WeaponMount_mindustry_gen_Bullet,
	(void *) M_mindustry_type_Weapon_flip,
	(void *) M_mindustry_type_Weapon_copy_R_mindustry_type_Weapon,
	(void *) M_mindustry_type_weapons_RepairBeamWeapon_init,
	(void *) M_mindustry_type_weapons_RepairBeamWeapon_load,
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

static jclass innerClasses[] {
	&class_mindustry_type_weapons_RepairBeamWeapon$HealBeamMount,
};

static FieldMetadata fields[] {
	{ "targetBuildings", &class_boolean, offsetof(mindustry_type_weapons_RepairBeamWeapon, F_targetBuildings), "Z", 1 },
	{ "targetUnits", &class_boolean, offsetof(mindustry_type_weapons_RepairBeamWeapon, F_targetUnits), "Z", 1 },
	{ "repairSpeed", &class_float, offsetof(mindustry_type_weapons_RepairBeamWeapon, F_repairSpeed), "F", 1 },
	{ "fractionRepairSpeed", &class_float, offsetof(mindustry_type_weapons_RepairBeamWeapon, F_fractionRepairSpeed), "F", 1 },
	{ "beamWidth", &class_float, offsetof(mindustry_type_weapons_RepairBeamWeapon, F_beamWidth), "F", 1 },
	{ "pulseRadius", &class_float, offsetof(mindustry_type_weapons_RepairBeamWeapon, F_pulseRadius), "F", 1 },
	{ "pulseStroke", &class_float, offsetof(mindustry_type_weapons_RepairBeamWeapon, F_pulseStroke), "F", 1 },
	{ "widthSinMag", &class_float, offsetof(mindustry_type_weapons_RepairBeamWeapon, F_widthSinMag), "F", 1 },
	{ "widthSinScl", &class_float, offsetof(mindustry_type_weapons_RepairBeamWeapon, F_widthSinScl), "F", 1 },
	{ "recentDamageMultiplier", &class_float, offsetof(mindustry_type_weapons_RepairBeamWeapon, F_recentDamageMultiplier), "F", 1 },
	{ "laser", &class_arc_graphics_g2d_TextureRegion, offsetof(mindustry_type_weapons_RepairBeamWeapon, F_laser), "Larc/graphics/g2d/TextureRegion;", 1 },
	{ "laserEnd", &class_arc_graphics_g2d_TextureRegion, offsetof(mindustry_type_weapons_RepairBeamWeapon, F_laserEnd), "Larc/graphics/g2d/TextureRegion;", 1 },
	{ "laserTop", &class_arc_graphics_g2d_TextureRegion, offsetof(mindustry_type_weapons_RepairBeamWeapon, F_laserTop), "Larc/graphics/g2d/TextureRegion;", 1 },
	{ "laserTopEnd", &class_arc_graphics_g2d_TextureRegion, offsetof(mindustry_type_weapons_RepairBeamWeapon, F_laserTopEnd), "Larc/graphics/g2d/TextureRegion;", 1 },
	{ "laserColor", &class_arc_graphics_Color, offsetof(mindustry_type_weapons_RepairBeamWeapon, F_laserColor), "Larc/graphics/Color;", 1 },
	{ "laserTopColor", &class_arc_graphics_Color, offsetof(mindustry_type_weapons_RepairBeamWeapon, F_laserTopColor), "Larc/graphics/Color;", 1 },
	{ "healColor", &class_arc_graphics_Color, offsetof(mindustry_type_weapons_RepairBeamWeapon, F_healColor), "Larc/graphics/Color;", 1 },
	{ "healEffect", &class_mindustry_entities_Effect, offsetof(mindustry_type_weapons_RepairBeamWeapon, F_healEffect), "Lmindustry/entities/Effect;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_type_weapons_RepairBeamWeapon_java_lang_String, 0, "(Ljava/lang/String;)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_type_weapons_RepairBeamWeapon, 0, "()V", 1 },
	{ "addStats", (intptr_t) M_mindustry_type_weapons_RepairBeamWeapon_addStats_mindustry_type_UnitType_arc_scene_ui_layout_Table, VTABLE_mindustry_type_weapons_RepairBeamWeapon_addStats_mindustry_type_UnitType_arc_scene_ui_layout_Table, "(Lmindustry/type/UnitType;Larc/scene/ui/layout/Table;)V", 1 },
	{ "dps", (intptr_t) M_mindustry_type_weapons_RepairBeamWeapon_dps_R_float, VTABLE_mindustry_type_weapons_RepairBeamWeapon_dps_R_float, "()F", 1 },
	{ "load", (intptr_t) M_mindustry_type_weapons_RepairBeamWeapon_load, VTABLE_mindustry_type_weapons_RepairBeamWeapon_load, "()V", 1 },
	{ "findTarget", (intptr_t) M_mindustry_type_weapons_RepairBeamWeapon_findTarget_mindustry_gen_Unit_float_float_float_boolean_boolean_R_mindustry_gen_Teamc, VTABLE_mindustry_type_weapons_RepairBeamWeapon_findTarget_mindustry_gen_Unit_float_float_float_boolean_boolean_R_mindustry_gen_Teamc, "(Lmindustry/gen/Unit;FFFZZ)Lmindustry/gen/Teamc;", 4 },
	{ "checkTarget", (intptr_t) M_mindustry_type_weapons_RepairBeamWeapon_checkTarget_mindustry_gen_Unit_mindustry_gen_Teamc_float_float_float_R_boolean, VTABLE_mindustry_type_weapons_RepairBeamWeapon_checkTarget_mindustry_gen_Unit_mindustry_gen_Teamc_float_float_float_R_boolean, "(Lmindustry/gen/Unit;Lmindustry/gen/Teamc;FFF)Z", 4 },
	{ "shoot", (intptr_t) M_mindustry_type_weapons_RepairBeamWeapon_shoot_mindustry_gen_Unit_mindustry_entities_units_WeaponMount_float_float_float, VTABLE_mindustry_type_weapons_RepairBeamWeapon_shoot_mindustry_gen_Unit_mindustry_entities_units_WeaponMount_float_float_float, "(Lmindustry/gen/Unit;Lmindustry/entities/units/WeaponMount;FFF)V", 4 },
	{ "update", (intptr_t) M_mindustry_type_weapons_RepairBeamWeapon_update_mindustry_gen_Unit_mindustry_entities_units_WeaponMount, VTABLE_mindustry_type_weapons_RepairBeamWeapon_update_mindustry_gen_Unit_mindustry_entities_units_WeaponMount, "(Lmindustry/gen/Unit;Lmindustry/entities/units/WeaponMount;)V", 1 },
	{ "draw", (intptr_t) M_mindustry_type_weapons_RepairBeamWeapon_draw_mindustry_gen_Unit_mindustry_entities_units_WeaponMount, VTABLE_mindustry_type_weapons_RepairBeamWeapon_draw_mindustry_gen_Unit_mindustry_entities_units_WeaponMount, "(Lmindustry/gen/Unit;Lmindustry/entities/units/WeaponMount;)V", 1 },
	{ "init", (intptr_t) M_mindustry_type_weapons_RepairBeamWeapon_init, VTABLE_mindustry_type_weapons_RepairBeamWeapon_init, "()V", 1 },
	{ "lambda$update$0", (intptr_t) SM_mindustry_type_weapons_RepairBeamWeapon_lambda$update$0_mindustry_gen_Unit_mindustry_type_weapons_RepairBeamWeapon$HealBeamMount_int_int_R_boolean, 0, "(Lmindustry/gen/Unit;Lmindustry/type/weapons/RepairBeamWeapon$HealBeamMount;II)Z", 4106 },
	{ "lambda$findTarget$0", (intptr_t) SM_mindustry_type_weapons_RepairBeamWeapon_lambda$findTarget$0_mindustry_gen_Unit_mindustry_gen_Unit_R_boolean, 0, "(Lmindustry/gen/Unit;Lmindustry/gen/Unit;)Z", 4106 },
};

Class class_mindustry_type_weapons_RepairBeamWeapon{
		.nativeName = (intptr_t) "mindustry/type/weapons/RepairBeamWeapon",
		.parentClass = (intptr_t) &class_mindustry_type_Weapon,
		.size = sizeof(mindustry_type_weapons_RepairBeamWeapon),
		.classVtable = (intptr_t) vtable_mindustry_type_weapons_RepairBeamWeapon,
		.staticInitializer = (intptr_t) clinit_mindustry_type_weapons_RepairBeamWeapon,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_type_weapons_RepairBeamWeapon,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 18,
		.nativeFields = (intptr_t) fields,
		.methodCount = 13,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 31,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_type_weapons_RepairBeamWeapon = registerClass(&class_mindustry_type_weapons_RepairBeamWeapon);

}
