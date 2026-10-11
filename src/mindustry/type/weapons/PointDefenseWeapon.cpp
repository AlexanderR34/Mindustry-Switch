#include "mindustry/type/weapons/PointDefenseWeapon.h"
#include "mindustry/type/weapons/PointDefenseWeapon.h"
#include "arc/math/geom/Vec2.h"
#include "mindustry/type/Weapon.h"
#include "mindustry/gen/Groups.h"
#include "mindustry/game/Rules.h"
#include "arc/graphics/Color.h"
#include "mindustry/entities/Effect.h"
#include "java/lang/String.h"
#include "mindustry/content/Fx.h"
#include "arc/util/I18NBundle.h"
#include "arc/struct/Seq.h"
#include "arc/scene/ui/layout/Cell.h"
#include "arc/math/geom/Position.h"
#include "mindustry/type/weapons/PointDefenseWeapon_invoke_arc_func_Boolf_1.h"
#include "mindustry/entities/units/WeaponMount.h"
#include "arc/func/Boolf.h"
#include "arc/math/Mathf.h"
#include "arc/func/Floatf.h"
#include "arc/Core.h"
#include "mindustry/gen/Teamc.h"
#include "mindustry/gen/Unit.h"
#include "arc/scene/ui/layout/Table.h"
#include "mindustry/type/weapons/PointDefenseWeapon_invoke_arc_func_Floatf_1.h"
#include "mindustry/type/UnitType.h"
#include "java/lang/CharSequence.h"
#include "mindustry/entities/EntityGroup.h"
#include "java/lang/Object.h"
#include "mindustry/gen/Bullet.h"
#include "arc/audio/Sound.h"
#include "mindustry/game/Team.h"
#include "mindustry/entities/bullet/BulletType.h"
#include "mindustry/Vars.h"
#include "mindustry/core/GameState.h"

extern "C" {


void mark_mindustry_type_weapons_PointDefenseWeapon(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_type_weapons_PointDefenseWeapon *) object;
	if (self->F_color)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_color)->clazz)->markFunction)((jobject) self->F_color, mark, depth + 1);
	if (self->F_beamEffect)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_beamEffect)->clazz)->markFunction)((jobject) self->F_beamEffect, mark, depth + 1);
}

void clinit_mindustry_type_weapons_PointDefenseWeapon(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_type_Weapon(ctx);
}

void init_mindustry_type_weapons_PointDefenseWeapon_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/weapons/PointDefenseWeapon:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_type_weapons_PointDefenseWeapon(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(27);
	init_mindustry_type_Weapon_java_lang_String(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(23);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_white;
	((mindustry_type_weapons_PointDefenseWeapon *) NULL_CHECK(sp[0].o))->F_color = (jref) sp[1].o;
	LINE_NUMBER(24);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_pointBeam;
	((mindustry_type_weapons_PointDefenseWeapon *) NULL_CHECK(sp[0].o))->F_beamEffect = (jref) sp[1].o;
	LINE_NUMBER(34);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_predictTarget = (jint(0));
	LINE_NUMBER(35);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_autoTarget = (jint(1));
	LINE_NUMBER(36);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_controllable = (jint(0));
	LINE_NUMBER(37);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_rotate = (jint(1));
	LINE_NUMBER(38);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_useAttackRange = (jint(0));
	LINE_NUMBER(39);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_targetInterval = (jfloat(10.0f));
	LINE_NUMBER(28);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_type_weapons_PointDefenseWeapon(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/weapons/PointDefenseWeapon:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_type_weapons_PointDefenseWeapon(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(30);
	init_mindustry_type_Weapon(ctx, (frame[0].o));
	LINE_NUMBER(23);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_white;
	((mindustry_type_weapons_PointDefenseWeapon *) NULL_CHECK(sp[0].o))->F_color = (jref) sp[1].o;
	LINE_NUMBER(24);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_pointBeam;
	((mindustry_type_weapons_PointDefenseWeapon *) NULL_CHECK(sp[0].o))->F_beamEffect = (jref) sp[1].o;
	LINE_NUMBER(34);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_predictTarget = (jint(0));
	LINE_NUMBER(35);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_autoTarget = (jint(1));
	LINE_NUMBER(36);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_controllable = (jint(0));
	LINE_NUMBER(37);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_rotate = (jint(1));
	LINE_NUMBER(38);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_useAttackRange = (jint(0));
	LINE_NUMBER(39);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_targetInterval = (jfloat(10.0f));
	LINE_NUMBER(31);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_type_weapons_PointDefenseWeapon_addStats_mindustry_type_UnitType_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/weapons/PointDefenseWeapon:addStats", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(44);
	sp[0].o = frame[2].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"weapon.pointdefense"_j));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(0)));
	sp[1].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(45);
	M_mindustry_type_Weapon_addStats_mindustry_type_UnitType_arc_scene_ui_layout_Table(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	LINE_NUMBER(46);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_type_weapons_PointDefenseWeapon_findTarget_mindustry_gen_Unit_float_float_float_boolean_boolean_R_mindustry_gen_Teamc(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jbool param4, jbool param5) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/weapons/PointDefenseWeapon:findTarget", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].i = param4;
	frame[6].i = param5;
	{
	LINE_NUMBER(50);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_bullet;
	sp[0].o = (jobject)((func_mindustry_entities_EntityGroup_intersect_float_float_float_float_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_intersect_float_float_float_float_R_arc_struct_Seq])(ctx, sp[0].o, ((frame[2].f) - (frame[4].f)), ((frame[3].f) - (frame[4].f)), ((frame[4].f) * (jfloat(2))), ((frame[4].f) * (jfloat(2))));
	{ /* InvokeDynamic */
		clinit_mindustry_type_weapons_PointDefenseWeapon_invoke_arc_func_Boolf_1(ctx);
		auto proxy = (mindustry_type_weapons_PointDefenseWeapon_invoke_arc_func_Boolf_1 *) gcAlloc(ctx, &class_mindustry_type_weapons_PointDefenseWeapon_invoke_arc_func_Boolf_1);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_type_weapons_PointDefenseWeapon_invoke_arc_func_Floatf_1(ctx);
		auto proxy = (mindustry_type_weapons_PointDefenseWeapon_invoke_arc_func_Floatf_1 *) gcAlloc(ctx, &class_mindustry_type_weapons_PointDefenseWeapon_invoke_arc_func_Floatf_1);
		proxy->F_field1 = (frame[3].f);
		proxy->F_field0 = (frame[2].f);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_min_arc_func_Boolf_arc_func_Floatf_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_min_arc_func_Boolf_arc_func_Floatf_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_gen_Teamc, sp[0].o));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_type_weapons_PointDefenseWeapon_checkTarget_mindustry_gen_Unit_mindustry_gen_Teamc_float_float_float_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/weapons/PointDefenseWeapon:checkTarget", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	{
	LINE_NUMBER(55);
	jint temp0 = (jint)((func_arc_math_geom_Position_within_arc_math_geom_Position_float_R_boolean) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_within_arc_math_geom_Position_float_R_boolean, (frame[2].o)))(ctx, (frame[2].o), (frame[1].o), (frame[5].f));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_mindustry_gen_Teamc_team_R_mindustry_game_Team) resolveInterfaceMethod(ctx, &class_mindustry_gen_Teamc, INDEX_mindustry_gen_Teamc_team_R_mindustry_game_Team, (frame[2].o)))(ctx, (frame[2].o));
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_team;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_gen_Bullet)) == 0) goto label_1;
	}
	{
	frame[6].o = (checkCast(ctx, &class_mindustry_gen_Bullet, (frame[2].o)));
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[6].o)))->F_type;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[6].o)))->F_type;
	if (((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_hittable) == 0) goto label_1;
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

void M_mindustry_type_weapons_PointDefenseWeapon_shoot_mindustry_gen_Unit_mindustry_entities_units_WeaponMount_float_float_float(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/weapons/PointDefenseWeapon:shoot", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	{
	LINE_NUMBER(60);
	sp[0].o = (jobject)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_target;
	frame[7].o = sp[0].o;
	if ((isInstance(ctx, (frame[7].o), &class_mindustry_gen_Bullet)) == 0) goto label_1;
	}
	{
	frame[6].o = (checkCast(ctx, &class_mindustry_gen_Bullet, (frame[7].o)));
	goto label_3;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(63);
	sp[0].o = (jobject)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_bullet;
	jfloat temp0 = (jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_damage;
	jfloat temp1 = (jfloat)((func_mindustry_gen_Unit_damageMultiplier_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_damageMultiplier_R_float])(ctx, (frame[1].o));
	jfloat temp2 = temp0 * temp1;
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_team;
	jfloat temp3 = (jfloat)((func_mindustry_game_Rules_unitDamage_mindustry_game_Team_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Rules_unitDamage_mindustry_game_Team_R_float])(ctx, sp[0].o, sp[1].o);
	frame[7].f = (temp2 * temp3);
	LINE_NUMBER(64);
	jfloat temp4 = (jfloat)((func_mindustry_gen_Bullet_damage_R_float) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_gen_Bullet_damage_R_float])(ctx, (frame[6].o));
	if ((floatCompare(temp4, (frame[7].f), -1)) <= 0) goto label_5;
	}
	{
	LINE_NUMBER(65);
	sp[0].o = frame[6].o;
	jfloat temp0 = (jfloat)((func_mindustry_gen_Bullet_damage_R_float) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_gen_Bullet_damage_R_float])(ctx, (frame[6].o));
	((func_mindustry_gen_Bullet_damage_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Bullet_damage_float])(ctx, sp[0].o, (temp0 - (frame[7].f)));
	goto label_7;
	}
label_5:;
	{
	LINE_NUMBER(67);
	((func_mindustry_gen_Bullet_remove) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_gen_Bullet_remove])(ctx, (frame[6].o));
	}
label_7:;
	{
	LINE_NUMBER(70);
	sp[0].o = (jobject)((mindustry_type_weapons_PointDefenseWeapon *) NULL_CHECK((frame[0].o)))->F_beamEffect;
	jfloat temp0 = frame[3].f;
	jfloat temp1 = frame[4].f;
	jfloat temp2 = frame[5].f;
	sp[1].o = (jobject)((mindustry_type_weapons_PointDefenseWeapon *) NULL_CHECK((frame[0].o)))->F_color;
	clinit_arc_math_geom_Vec2(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[2].o);
	sp[2].o = (jobject)((func_arc_math_geom_Vec2_set_arc_math_geom_Position_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Position_R_arc_math_geom_Vec2])(ctx, sp[2].o, (frame[6].o));
	((func_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color_java_lang_Object])(ctx, sp[0].o, temp0, temp1, temp2, sp[1].o, sp[2].o);
	LINE_NUMBER(71);
	sp[0].o = (jobject)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_bullet;
	sp[0].o = (jobject)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_shootEffect;
	jfloat temp3 = frame[3].f;
	jfloat temp4 = frame[4].f;
	jfloat temp5 = frame[5].f;
	sp[1].o = (jobject)((mindustry_type_weapons_PointDefenseWeapon *) NULL_CHECK((frame[0].o)))->F_color;
	((func_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color])(ctx, sp[0].o, temp3, temp4, temp5, sp[1].o);
	LINE_NUMBER(72);
	sp[0].o = (jobject)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_bullet;
	sp[0].o = (jobject)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_hitEffect;
	jfloat temp6 = (jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[6].o)))->F_x;
	jfloat temp7 = (jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[6].o)))->F_y;
	sp[1].o = (jobject)((mindustry_type_weapons_PointDefenseWeapon *) NULL_CHECK((frame[0].o)))->F_color;
	((func_mindustry_entities_Effect_at_float_float_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_arc_graphics_Color])(ctx, sp[0].o, temp6, temp7, sp[1].o);
	LINE_NUMBER(73);
	sp[0].o = (jobject)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_shootSound;
	jfloat temp8 = frame[3].f;
	jfloat temp9 = frame[4].f;
	jfloat temp10 = (jfloat)SM_arc_math_Mathf_random_float_float_R_float(ctx, (jfloat(0.9f)), (jfloat(1.1f)));
	jint temp11 = (jint)((func_arc_audio_Sound_at_float_float_float_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Sound_at_float_float_float_R_int])(ctx, sp[0].o, temp8, temp9, temp10);
	LINE_NUMBER(74);
	((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_recoil = (jfloat(1));
	LINE_NUMBER(75);
	((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_heat = (jfloat(1));
	LINE_NUMBER(76);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat SM_mindustry_type_weapons_PointDefenseWeapon_lambda$findTarget$1_float_float_mindustry_gen_Bullet_R_float(jcontext ctx, jfloat param0, jfloat param1, jobject param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/weapons/PointDefenseWeapon:lambda$findTarget$1", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_type_weapons_PointDefenseWeapon(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(50);
	jfloat temp0 = (jfloat)((func_mindustry_gen_Bullet_dst2_float_float_R_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_gen_Bullet_dst2_float_float_R_float])(ctx, (frame[2].o), (frame[0].f), (frame[1].f));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_type_weapons_PointDefenseWeapon_lambda$findTarget$0_mindustry_gen_Unit_mindustry_gen_Bullet_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/weapons/PointDefenseWeapon:lambda$findTarget$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_type_weapons_PointDefenseWeapon(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(50);
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_team;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_team;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_mindustry_gen_Bullet_type_R_mindustry_entities_bullet_BulletType) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Bullet_type_R_mindustry_entities_bullet_BulletType])(ctx, (frame[1].o));
	if (((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_hittable) == 0) goto label_1;
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

void *vtable_mindustry_type_weapons_PointDefenseWeapon[] {
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
	(void *) M_mindustry_type_weapons_PointDefenseWeapon_addStats_mindustry_type_UnitType_arc_scene_ui_layout_Table,
	(void *) M_mindustry_type_Weapon_dps_R_float,
	(void *) M_mindustry_type_Weapon_shotsPerSec_R_float,
	(void *) M_mindustry_type_Weapon_drawOutline_mindustry_gen_Unit_mindustry_entities_units_WeaponMount,
	(void *) M_mindustry_type_Weapon_draw_mindustry_gen_Unit_mindustry_entities_units_WeaponMount,
	(void *) M_mindustry_type_Weapon_range_R_float,
	(void *) M_mindustry_type_Weapon_update_mindustry_gen_Unit_mindustry_entities_units_WeaponMount,
	(void *) M_mindustry_type_weapons_PointDefenseWeapon_findTarget_mindustry_gen_Unit_float_float_float_boolean_boolean_R_mindustry_gen_Teamc,
	(void *) M_mindustry_type_weapons_PointDefenseWeapon_checkTarget_mindustry_gen_Unit_mindustry_gen_Teamc_float_float_float_R_boolean,
	(void *) M_mindustry_type_Weapon_bulletRotation_mindustry_gen_Unit_mindustry_entities_units_WeaponMount_float_float_R_float,
	(void *) M_mindustry_type_weapons_PointDefenseWeapon_shoot_mindustry_gen_Unit_mindustry_entities_units_WeaponMount_float_float_float,
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

static FieldMetadata fields[] {
	{ "color", &class_arc_graphics_Color, offsetof(mindustry_type_weapons_PointDefenseWeapon, F_color), "Larc/graphics/Color;", 1 },
	{ "beamEffect", &class_mindustry_entities_Effect, offsetof(mindustry_type_weapons_PointDefenseWeapon, F_beamEffect), "Lmindustry/entities/Effect;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_type_weapons_PointDefenseWeapon_java_lang_String, 0, "(Ljava/lang/String;)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_type_weapons_PointDefenseWeapon, 0, "()V", 1 },
	{ "addStats", (intptr_t) M_mindustry_type_weapons_PointDefenseWeapon_addStats_mindustry_type_UnitType_arc_scene_ui_layout_Table, VTABLE_mindustry_type_weapons_PointDefenseWeapon_addStats_mindustry_type_UnitType_arc_scene_ui_layout_Table, "(Lmindustry/type/UnitType;Larc/scene/ui/layout/Table;)V", 1 },
	{ "findTarget", (intptr_t) M_mindustry_type_weapons_PointDefenseWeapon_findTarget_mindustry_gen_Unit_float_float_float_boolean_boolean_R_mindustry_gen_Teamc, VTABLE_mindustry_type_weapons_PointDefenseWeapon_findTarget_mindustry_gen_Unit_float_float_float_boolean_boolean_R_mindustry_gen_Teamc, "(Lmindustry/gen/Unit;FFFZZ)Lmindustry/gen/Teamc;", 4 },
	{ "checkTarget", (intptr_t) M_mindustry_type_weapons_PointDefenseWeapon_checkTarget_mindustry_gen_Unit_mindustry_gen_Teamc_float_float_float_R_boolean, VTABLE_mindustry_type_weapons_PointDefenseWeapon_checkTarget_mindustry_gen_Unit_mindustry_gen_Teamc_float_float_float_R_boolean, "(Lmindustry/gen/Unit;Lmindustry/gen/Teamc;FFF)Z", 4 },
	{ "shoot", (intptr_t) M_mindustry_type_weapons_PointDefenseWeapon_shoot_mindustry_gen_Unit_mindustry_entities_units_WeaponMount_float_float_float, VTABLE_mindustry_type_weapons_PointDefenseWeapon_shoot_mindustry_gen_Unit_mindustry_entities_units_WeaponMount_float_float_float, "(Lmindustry/gen/Unit;Lmindustry/entities/units/WeaponMount;FFF)V", 4 },
	{ "lambda$findTarget$1", (intptr_t) SM_mindustry_type_weapons_PointDefenseWeapon_lambda$findTarget$1_float_float_mindustry_gen_Bullet_R_float, 0, "(FFLmindustry/gen/Bullet;)F", 4106 },
	{ "lambda$findTarget$0", (intptr_t) SM_mindustry_type_weapons_PointDefenseWeapon_lambda$findTarget$0_mindustry_gen_Unit_mindustry_gen_Bullet_R_boolean, 0, "(Lmindustry/gen/Unit;Lmindustry/gen/Bullet;)Z", 4106 },
};

Class class_mindustry_type_weapons_PointDefenseWeapon{
		.nativeName = (intptr_t) "mindustry/type/weapons/PointDefenseWeapon",
		.parentClass = (intptr_t) &class_mindustry_type_Weapon,
		.size = sizeof(mindustry_type_weapons_PointDefenseWeapon),
		.classVtable = (intptr_t) vtable_mindustry_type_weapons_PointDefenseWeapon,
		.staticInitializer = (intptr_t) clinit_mindustry_type_weapons_PointDefenseWeapon,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_type_weapons_PointDefenseWeapon,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 8,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 31,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_type_weapons_PointDefenseWeapon = registerClass(&class_mindustry_type_weapons_PointDefenseWeapon);

}
