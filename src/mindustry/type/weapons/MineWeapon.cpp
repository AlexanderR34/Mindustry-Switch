#include "mindustry/type/weapons/MineWeapon.h"
#include "arc/math/Mathf.h"
#include "mindustry/type/Weapon.h"
#include "mindustry/gen/Unit.h"
#include "arc/math/Angles.h"
#include "mindustry/gen/Minerc.h"
#include "arc/util/Time.h"
#include "mindustry/type/UnitType.h"
#include "arc/graphics/g2d/Draw.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/type/weapons/MineWeapon.h"
#include "mindustry/world/Tile.h"
#include "mindustry/entities/bullet/BulletType.h"
#include "mindustry/entities/units/WeaponMount.h"

extern "C" {


void mark_mindustry_type_weapons_MineWeapon(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_type_weapons_MineWeapon *) object;
}

void clinit_mindustry_type_weapons_MineWeapon(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_type_Weapon(ctx);
}

void init_mindustry_type_weapons_MineWeapon(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/weapons/MineWeapon:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_type_weapons_MineWeapon(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(13);
	init_mindustry_type_Weapon(ctx, (frame[0].o));
	LINE_NUMBER(21);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_rotate = (jint(1));
	LINE_NUMBER(22);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_noAttack = (jint(1));
	LINE_NUMBER(23);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_predictTarget = (jint(0));
	LINE_NUMBER(24);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_display = (jint(0));
	LINE_NUMBER(25);
	sp[0].o = frame[0].o;
	clinit_mindustry_entities_bullet_BulletType(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_entities_bullet_BulletType);
	init_mindustry_entities_bullet_BulletType(ctx, sp[1].o);
	((mindustry_type_Weapon *) NULL_CHECK(sp[0].o))->F_bullet = (jref) sp[1].o;
	LINE_NUMBER(26);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_useAttackRange = (jint(0));
	LINE_NUMBER(14);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_type_weapons_MineWeapon_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/weapons/MineWeapon:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_type_weapons_MineWeapon(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(17);
	init_mindustry_type_Weapon_java_lang_String(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(21);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_rotate = (jint(1));
	LINE_NUMBER(22);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_noAttack = (jint(1));
	LINE_NUMBER(23);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_predictTarget = (jint(0));
	LINE_NUMBER(24);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_display = (jint(0));
	LINE_NUMBER(25);
	sp[0].o = frame[0].o;
	clinit_mindustry_entities_bullet_BulletType(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_entities_bullet_BulletType);
	init_mindustry_entities_bullet_BulletType(ctx, sp[1].o);
	((mindustry_type_Weapon *) NULL_CHECK(sp[0].o))->F_bullet = (jref) sp[1].o;
	LINE_NUMBER(26);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_useAttackRange = (jint(0));
	LINE_NUMBER(18);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_type_weapons_MineWeapon_update_mindustry_gen_Unit_mindustry_entities_units_WeaponMount(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/weapons/MineWeapon:update", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(31);
	((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_shoot = (jint(0));
	LINE_NUMBER(32);
	((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_rotate = (jint(1));
	LINE_NUMBER(35);
	jint temp0 = (jint)((func_mindustry_gen_Unit_mining_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_mining_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(36);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((func_mindustry_gen_Unit_mineTile_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_mineTile_R_mindustry_world_Tile])(ctx, (frame[1].o));
	jfloat temp0 = (jfloat)((func_mindustry_world_Tile_drawx_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_Tile_drawx_R_float])(ctx, sp[1].o);
	((mindustry_entities_units_WeaponMount *) NULL_CHECK(sp[0].o))->F_aimX = temp0;
	LINE_NUMBER(37);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((func_mindustry_gen_Unit_mineTile_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_mineTile_R_mindustry_world_Tile])(ctx, (frame[1].o));
	jfloat temp1 = (jfloat)((func_mindustry_world_Tile_drawy_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_Tile_drawy_R_float])(ctx, sp[1].o);
	((mindustry_entities_units_WeaponMount *) NULL_CHECK(sp[0].o))->F_aimY = temp1;
	goto label_6;
	}
label_3:;
	{
	LINE_NUMBER(40);
	frame[3].f = ((((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_rotation) - (jfloat(90.0f))) + ((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_baseRotation));
	LINE_NUMBER(41);
	sp[0].o = frame[2].o;
	jfloat temp0 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_x;
	jfloat temp1 = (jfloat)SM_arc_math_Angles_trnsx_float_float_float_R_float(ctx, (((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_rotation) - (jfloat(90.0f))), ((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_y));
	jfloat temp2 = temp0 + temp1;
	jfloat temp3 = (jfloat)SM_arc_math_Angles_trnsx_float_float_float_R_float(ctx, (frame[3].f), ((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_shootX), ((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_shootY));
	((mindustry_entities_units_WeaponMount *) NULL_CHECK(sp[0].o))->F_aimX = (temp2 + temp3);
	LINE_NUMBER(42);
	sp[0].o = frame[2].o;
	jfloat temp4 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_y;
	jfloat temp5 = (jfloat)SM_arc_math_Angles_trnsy_float_float_float_R_float(ctx, (((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_rotation) - (jfloat(90.0f))), ((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_y));
	jfloat temp6 = temp4 + temp5;
	jfloat temp7 = (jfloat)SM_arc_math_Angles_trnsy_float_float_float_R_float(ctx, (frame[3].f), ((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_shootX), ((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_shootY));
	((mindustry_entities_units_WeaponMount *) NULL_CHECK(sp[0].o))->F_aimY = (temp6 + temp7);
	}
label_6:;
	{
	LINE_NUMBER(45);
	M_mindustry_type_Weapon_update_mindustry_gen_Unit_mindustry_entities_units_WeaponMount(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	LINE_NUMBER(46);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_type_weapons_MineWeapon_draw_mindustry_gen_Unit_mindustry_entities_units_WeaponMount(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/weapons/MineWeapon:draw", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(50);
	M_mindustry_type_Weapon_draw_mindustry_gen_Unit_mindustry_entities_units_WeaponMount(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	LINE_NUMBER(52);
	jint temp0 = (jint)((func_mindustry_gen_Unit_mining_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_mining_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(54);
	jfloat temp0 = (jfloat)SM_arc_graphics_g2d_Draw_z_R_float(ctx);
	frame[3].f = temp0;
	LINE_NUMBER(55);
	frame[4].f = (((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_rotation) - (jfloat(90.0f)));
	LINE_NUMBER(56);
	jfloat temp1 = frame[4].f;
	sp[0].f = temp1;
	sp += 1;
	if (((jint)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_rotate) == 0) goto label_6;
	}
	{
	jfloat temp0 = (jfloat)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_rotation;
	sp[0].f = temp0;
	sp += 1;
	goto label_7;
	}
label_6:;
	INST_FCONST(0);
label_7:;
	{
	sp -= 2;
	frame[5].f = (sp[0].f + sp[1].f);
	LINE_NUMBER(57);
	jfloat temp0 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_x;
	jfloat temp1 = (jfloat)SM_arc_math_Angles_trnsx_float_float_float_R_float(ctx, (frame[4].f), ((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_y));
	jfloat temp2 = temp0 + temp1;
	jfloat temp3 = (jfloat)SM_arc_math_Angles_trnsx_float_float_float_R_float(ctx, (frame[5].f), (jfloat(0)), (-((jfloat)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_recoil)));
	frame[6].f = (temp2 + temp3);
	LINE_NUMBER(58);
	jfloat temp4 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_y;
	jfloat temp5 = (jfloat)SM_arc_math_Angles_trnsy_float_float_float_R_float(ctx, (frame[4].f), ((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_y));
	jfloat temp6 = temp4 + temp5;
	jfloat temp7 = (jfloat)SM_arc_math_Angles_trnsy_float_float_float_R_float(ctx, (frame[5].f), (jfloat(0)), (-((jfloat)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[2].o)))->F_recoil)));
	frame[7].f = (temp6 + temp7);
	LINE_NUMBER(59);
	jfloat temp8 = (jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_shootY;
	jfloat temp9 = (jfloat)SM_arc_math_Mathf_absin_float_float_float_R_float(ctx, (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time), (jfloat(1.1f)), (jfloat(0.5f)));
	frame[8].f = (temp8 + temp9);
	LINE_NUMBER(60);
	jfloat temp10 = frame[6].f;
	jfloat temp11 = (jfloat)SM_arc_math_Angles_trnsx_float_float_float_R_float(ctx, (frame[5].f), ((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_shootX), (frame[8].f));
	frame[9].f = (temp10 + temp11);
	LINE_NUMBER(61);
	jfloat temp12 = frame[7].f;
	jfloat temp13 = (jfloat)SM_arc_math_Angles_trnsy_float_float_float_R_float(ctx, (frame[5].f), ((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_shootX), (frame[8].f));
	frame[10].f = (temp12 + temp13);
	LINE_NUMBER(63);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_type;
	((func_mindustry_type_UnitType_drawMiningBeam_mindustry_gen_Unit_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_UnitType_drawMiningBeam_mindustry_gen_Unit_float_float])(ctx, sp[0].o, (frame[1].o), (frame[9].f), (frame[10].f));
	LINE_NUMBER(64);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (frame[3].f));
	}
label_2:;
	LINE_NUMBER(66);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_type_weapons_MineWeapon[] {
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
	(void *) M_mindustry_type_weapons_MineWeapon_draw_mindustry_gen_Unit_mindustry_entities_units_WeaponMount,
	(void *) M_mindustry_type_Weapon_range_R_float,
	(void *) M_mindustry_type_weapons_MineWeapon_update_mindustry_gen_Unit_mindustry_entities_units_WeaponMount,
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

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_type_weapons_MineWeapon, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_mindustry_type_weapons_MineWeapon_java_lang_String, 0, "(Ljava/lang/String;)V", 1 },
	{ "update", (intptr_t) M_mindustry_type_weapons_MineWeapon_update_mindustry_gen_Unit_mindustry_entities_units_WeaponMount, VTABLE_mindustry_type_weapons_MineWeapon_update_mindustry_gen_Unit_mindustry_entities_units_WeaponMount, "(Lmindustry/gen/Unit;Lmindustry/entities/units/WeaponMount;)V", 1 },
	{ "draw", (intptr_t) M_mindustry_type_weapons_MineWeapon_draw_mindustry_gen_Unit_mindustry_entities_units_WeaponMount, VTABLE_mindustry_type_weapons_MineWeapon_draw_mindustry_gen_Unit_mindustry_entities_units_WeaponMount, "(Lmindustry/gen/Unit;Lmindustry/entities/units/WeaponMount;)V", 1 },
};

Class class_mindustry_type_weapons_MineWeapon{
		.nativeName = (intptr_t) "mindustry/type/weapons/MineWeapon",
		.parentClass = (intptr_t) &class_mindustry_type_Weapon,
		.size = sizeof(mindustry_type_weapons_MineWeapon),
		.classVtable = (intptr_t) vtable_mindustry_type_weapons_MineWeapon,
		.staticInitializer = (intptr_t) clinit_mindustry_type_weapons_MineWeapon,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_type_weapons_MineWeapon,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 31,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_type_weapons_MineWeapon = registerClass(&class_mindustry_type_weapons_MineWeapon);

}
