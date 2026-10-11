#include "mindustry/type/weapons/PointDefenseBulletWeapon.h"
#include "arc/func/Floatf.h"
#include "mindustry/type/weapons/PointDefenseBulletWeapon.h"
#include "mindustry/gen/Teamc.h"
#include "mindustry/type/Weapon.h"
#include "mindustry/type/weapons/PointDefenseBulletWeapon_invoke_arc_func_Boolf_1.h"
#include "mindustry/gen/Unit.h"
#include "mindustry/gen/Groups.h"
#include "mindustry/entities/EntityGroup.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/gen/Bullet.h"
#include "mindustry/type/weapons/PointDefenseBulletWeapon_invoke_arc_func_Floatf_1.h"
#include "arc/struct/Seq.h"
#include "arc/math/geom/Position.h"
#include "mindustry/game/Team.h"
#include "mindustry/entities/bullet/BulletType.h"
#include "mindustry/entities/units/WeaponMount.h"
#include "arc/func/Boolf.h"

extern "C" {


void mark_mindustry_type_weapons_PointDefenseBulletWeapon(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_type_weapons_PointDefenseBulletWeapon *) object;
}

void clinit_mindustry_type_weapons_PointDefenseBulletWeapon(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_type_Weapon(ctx);
}

void init_mindustry_type_weapons_PointDefenseBulletWeapon_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/weapons/PointDefenseBulletWeapon:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_type_weapons_PointDefenseBulletWeapon(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(12);
	init_mindustry_type_Weapon_java_lang_String(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(9);
	((mindustry_type_weapons_PointDefenseBulletWeapon *) NULL_CHECK((frame[0].o)))->F_damageTargetWeight = (jfloat(10.0f));
	LINE_NUMBER(19);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_autoTarget = (jint(1));
	LINE_NUMBER(20);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_controllable = (jint(0));
	LINE_NUMBER(21);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_rotate = (jint(1));
	LINE_NUMBER(22);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_useAttackRange = (jint(0));
	LINE_NUMBER(23);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jfloat temp0 = jfloat(5.0f);
	((mindustry_type_Weapon *) NULL_CHECK(sp[1].o))->F_targetSwitchInterval = temp0;
	((mindustry_type_Weapon *) NULL_CHECK(sp[0].o))->F_targetInterval = temp0;
	LINE_NUMBER(13);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_type_weapons_PointDefenseBulletWeapon(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/weapons/PointDefenseBulletWeapon:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_type_weapons_PointDefenseBulletWeapon(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(15);
	init_mindustry_type_Weapon(ctx, (frame[0].o));
	LINE_NUMBER(9);
	((mindustry_type_weapons_PointDefenseBulletWeapon *) NULL_CHECK((frame[0].o)))->F_damageTargetWeight = (jfloat(10.0f));
	LINE_NUMBER(19);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_autoTarget = (jint(1));
	LINE_NUMBER(20);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_controllable = (jint(0));
	LINE_NUMBER(21);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_rotate = (jint(1));
	LINE_NUMBER(22);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_useAttackRange = (jint(0));
	LINE_NUMBER(23);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jfloat temp0 = jfloat(5.0f);
	((mindustry_type_Weapon *) NULL_CHECK(sp[1].o))->F_targetSwitchInterval = temp0;
	((mindustry_type_Weapon *) NULL_CHECK(sp[0].o))->F_targetInterval = temp0;
	LINE_NUMBER(16);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_type_weapons_PointDefenseBulletWeapon_findTarget_mindustry_gen_Unit_float_float_float_boolean_boolean_R_mindustry_gen_Teamc(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jbool param4, jbool param5) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/weapons/PointDefenseBulletWeapon:findTarget", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].i = param4;
	frame[6].i = param5;
	{
	LINE_NUMBER(28);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_bullet;
	sp[0].o = (jobject)((func_mindustry_entities_EntityGroup_intersect_float_float_float_float_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_intersect_float_float_float_float_R_arc_struct_Seq])(ctx, sp[0].o, ((frame[2].f) - (frame[4].f)), ((frame[3].f) - (frame[4].f)), ((frame[4].f) * (jfloat(2))), ((frame[4].f) * (jfloat(2))));
	{ /* InvokeDynamic */
		clinit_mindustry_type_weapons_PointDefenseBulletWeapon_invoke_arc_func_Boolf_1(ctx);
		auto proxy = (mindustry_type_weapons_PointDefenseBulletWeapon_invoke_arc_func_Boolf_1 *) gcAlloc(ctx, &class_mindustry_type_weapons_PointDefenseBulletWeapon_invoke_arc_func_Boolf_1);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_type_weapons_PointDefenseBulletWeapon_invoke_arc_func_Floatf_1(ctx);
		auto proxy = (mindustry_type_weapons_PointDefenseBulletWeapon_invoke_arc_func_Floatf_1 *) gcAlloc(ctx, &class_mindustry_type_weapons_PointDefenseBulletWeapon_invoke_arc_func_Floatf_1);
		proxy->F_field2 = (frame[3].f);
		proxy->F_field1 = (frame[2].f);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_min_arc_func_Boolf_arc_func_Floatf_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_min_arc_func_Boolf_arc_func_Floatf_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_gen_Teamc, sp[0].o));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_type_weapons_PointDefenseBulletWeapon_checkTarget_mindustry_gen_Unit_mindustry_gen_Teamc_float_float_float_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/weapons/PointDefenseBulletWeapon:checkTarget", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	{
	LINE_NUMBER(33);
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

void M_mindustry_type_weapons_PointDefenseBulletWeapon_handleBullet_mindustry_gen_Unit_mindustry_entities_units_WeaponMount_mindustry_gen_Bullet(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/weapons/PointDefenseBulletWeapon:handleBullet", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(38);
	M_mindustry_type_Weapon_handleBullet_mindustry_gen_Unit_mindustry_entities_units_WeaponMount_mindustry_gen_Bullet(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o));
	LINE_NUMBER(40);
	sp[0].o = (jobject)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_target;
	frame[5].o = sp[0].o;
	if ((isInstance(ctx, (frame[5].o), &class_mindustry_gen_Bullet)) == 0) goto label_2;
	}
	{
	frame[4].o = (checkCast(ctx, &class_mindustry_gen_Bullet, (frame[5].o)));
	LINE_NUMBER(41);
	((mindustry_gen_Bullet *) NULL_CHECK((frame[3].o)))->F_data = (jref) (frame[4].o);
	}
label_2:;
	LINE_NUMBER(43);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jfloat M_mindustry_type_weapons_PointDefenseBulletWeapon_lambda$findTarget$1_float_float_mindustry_gen_Bullet_R_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/weapons/PointDefenseBulletWeapon:lambda$findTarget$1", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(28);
	jfloat temp0 = (jfloat)((func_mindustry_gen_Bullet_dst2_float_float_R_float) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_gen_Bullet_dst2_float_float_R_float])(ctx, (frame[3].o), (frame[1].f), (frame[2].f));
	popStackFrame(ctx);
	return (temp0 - (((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[3].o)))->F_damage) * ((jfloat)((mindustry_type_weapons_PointDefenseBulletWeapon *) NULL_CHECK((frame[0].o)))->F_damageTargetWeight)));
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_type_weapons_PointDefenseBulletWeapon_lambda$findTarget$0_mindustry_gen_Unit_mindustry_gen_Bullet_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/weapons/PointDefenseBulletWeapon:lambda$findTarget$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_type_weapons_PointDefenseBulletWeapon(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(28);
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_team;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_team;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_mindustry_gen_Bullet_type_R_mindustry_entities_bullet_BulletType) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Bullet_type_R_mindustry_entities_bullet_BulletType])(ctx, (frame[1].o));
	if (((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_hittable) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_type;
	if (((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_collidesAir) == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_type;
	if (((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_collidesTiles) == 0) goto label_1;
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

void *vtable_mindustry_type_weapons_PointDefenseBulletWeapon[] {
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
	(void *) M_mindustry_type_weapons_PointDefenseBulletWeapon_findTarget_mindustry_gen_Unit_float_float_float_boolean_boolean_R_mindustry_gen_Teamc,
	(void *) M_mindustry_type_weapons_PointDefenseBulletWeapon_checkTarget_mindustry_gen_Unit_mindustry_gen_Teamc_float_float_float_R_boolean,
	(void *) M_mindustry_type_Weapon_bulletRotation_mindustry_gen_Unit_mindustry_entities_units_WeaponMount_float_float_R_float,
	(void *) M_mindustry_type_Weapon_shoot_mindustry_gen_Unit_mindustry_entities_units_WeaponMount_float_float_float,
	(void *) M_mindustry_type_Weapon_bullet_mindustry_gen_Unit_mindustry_entities_units_WeaponMount_float_float_float_mindustry_entities_Mover,
	(void *) M_mindustry_type_weapons_PointDefenseBulletWeapon_handleBullet_mindustry_gen_Unit_mindustry_entities_units_WeaponMount_mindustry_gen_Bullet,
	(void *) M_mindustry_type_Weapon_flip,
	(void *) M_mindustry_type_Weapon_copy_R_mindustry_type_Weapon,
	(void *) M_mindustry_type_Weapon_init,
	(void *) M_mindustry_type_Weapon_load,
	(void *) M_mindustry_type_Weapon_lambda$shoot$0_mindustry_entities_units_WeaponMount_mindustry_gen_Unit_float_float_float_float_mindustry_entities_Mover,
	(void *) M_mindustry_type_Weapon_lambda$shoot$1_mindustry_entities_units_WeaponMount_int_mindustry_gen_Unit_float_float_float_mindustry_entities_Mover,
	(void *) M_mindustry_type_weapons_PointDefenseBulletWeapon_lambda$findTarget$1_float_float_mindustry_gen_Bullet_R_float,
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
	{ "lambda$findTarget$1", "(FFLmindustry/gen/Bullet;)F" },
};

static FieldMetadata fields[] {
	{ "damageTargetWeight", &class_float, offsetof(mindustry_type_weapons_PointDefenseBulletWeapon, F_damageTargetWeight), "F", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_type_weapons_PointDefenseBulletWeapon_java_lang_String, 0, "(Ljava/lang/String;)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_type_weapons_PointDefenseBulletWeapon, 0, "()V", 1 },
	{ "findTarget", (intptr_t) M_mindustry_type_weapons_PointDefenseBulletWeapon_findTarget_mindustry_gen_Unit_float_float_float_boolean_boolean_R_mindustry_gen_Teamc, VTABLE_mindustry_type_weapons_PointDefenseBulletWeapon_findTarget_mindustry_gen_Unit_float_float_float_boolean_boolean_R_mindustry_gen_Teamc, "(Lmindustry/gen/Unit;FFFZZ)Lmindustry/gen/Teamc;", 4 },
	{ "checkTarget", (intptr_t) M_mindustry_type_weapons_PointDefenseBulletWeapon_checkTarget_mindustry_gen_Unit_mindustry_gen_Teamc_float_float_float_R_boolean, VTABLE_mindustry_type_weapons_PointDefenseBulletWeapon_checkTarget_mindustry_gen_Unit_mindustry_gen_Teamc_float_float_float_R_boolean, "(Lmindustry/gen/Unit;Lmindustry/gen/Teamc;FFF)Z", 4 },
	{ "handleBullet", (intptr_t) M_mindustry_type_weapons_PointDefenseBulletWeapon_handleBullet_mindustry_gen_Unit_mindustry_entities_units_WeaponMount_mindustry_gen_Bullet, VTABLE_mindustry_type_weapons_PointDefenseBulletWeapon_handleBullet_mindustry_gen_Unit_mindustry_entities_units_WeaponMount_mindustry_gen_Bullet, "(Lmindustry/gen/Unit;Lmindustry/entities/units/WeaponMount;Lmindustry/gen/Bullet;)V", 4 },
	{ "lambda$findTarget$1", (intptr_t) M_mindustry_type_weapons_PointDefenseBulletWeapon_lambda$findTarget$1_float_float_mindustry_gen_Bullet_R_float, VTABLE_mindustry_type_weapons_PointDefenseBulletWeapon_lambda$findTarget$1_float_float_mindustry_gen_Bullet_R_float, "(FFLmindustry/gen/Bullet;)F", 4098 },
	{ "lambda$findTarget$0", (intptr_t) SM_mindustry_type_weapons_PointDefenseBulletWeapon_lambda$findTarget$0_mindustry_gen_Unit_mindustry_gen_Bullet_R_boolean, 0, "(Lmindustry/gen/Unit;Lmindustry/gen/Bullet;)Z", 4106 },
};

Class class_mindustry_type_weapons_PointDefenseBulletWeapon{
		.nativeName = (intptr_t) "mindustry/type/weapons/PointDefenseBulletWeapon",
		.parentClass = (intptr_t) &class_mindustry_type_Weapon,
		.size = sizeof(mindustry_type_weapons_PointDefenseBulletWeapon),
		.classVtable = (intptr_t) vtable_mindustry_type_weapons_PointDefenseBulletWeapon,
		.staticInitializer = (intptr_t) clinit_mindustry_type_weapons_PointDefenseBulletWeapon,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_type_weapons_PointDefenseBulletWeapon,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 7,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 32,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_type_weapons_PointDefenseBulletWeapon = registerClass(&class_mindustry_type_weapons_PointDefenseBulletWeapon);

}
