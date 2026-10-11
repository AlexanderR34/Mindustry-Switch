#include "mindustry/content/UnitTypes_58_1.h"
#include "mindustry/graphics/Pal.h"
#include "java/lang/Object.h"
#include "mindustry/type/Weapon.h"
#include "mindustry/content/UnitTypes_58.h"
#include "mindustry/content/UnitTypes_58_1_1.h"
#include "mindustry/content/UnitTypes_58_1.h"
#include "mindustry/type/weapons/RepairBeamWeapon.h"
#include "arc/graphics/Color.h"
#include "mindustry/entities/bullet/BulletType.h"

extern "C" {


void mark_mindustry_content_UnitTypes$58$1(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_type_weapons_RepairBeamWeapon(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_content_UnitTypes$58$1 *) object;
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_mindustry_content_UnitTypes$58$1(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_type_weapons_RepairBeamWeapon(ctx);
}

void init_mindustry_content_UnitTypes$58$1_mindustry_content_UnitTypes$58(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/UnitTypes$58$1:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_UnitTypes$58$1(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(4541);
	((mindustry_content_UnitTypes$58$1 *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_mindustry_type_weapons_RepairBeamWeapon(ctx, (frame[0].o));
	LINE_NUMBER(4542);
	((mindustry_type_weapons_RepairBeamWeapon *) NULL_CHECK((frame[0].o)))->F_widthSinMag = (jfloat(0.11f));
	LINE_NUMBER(4543);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_reload = (jfloat(20.0f));
	LINE_NUMBER(4544);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_x = (jfloat(4.75f));
	LINE_NUMBER(4545);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_y = (jfloat(4.75f));
	LINE_NUMBER(4546);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_rotate = (jint(0));
	LINE_NUMBER(4547);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_shootY = (jfloat(0));
	LINE_NUMBER(4548);
	((mindustry_type_weapons_RepairBeamWeapon *) NULL_CHECK((frame[0].o)))->F_beamWidth = (jfloat(0.7f));
	LINE_NUMBER(4549);
	sp[0].o = (jobject)((mindustry_content_UnitTypes$58$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_aimDst = (jfloat(0));
	LINE_NUMBER(4550);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_shootCone = (jfloat(40.0f));
	LINE_NUMBER(4551);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_mirror = (jint(1));
	LINE_NUMBER(4553);
	((mindustry_type_weapons_RepairBeamWeapon *) NULL_CHECK((frame[0].o)))->F_repairSpeed = (jfloat(1.8f));
	LINE_NUMBER(4554);
	((mindustry_type_weapons_RepairBeamWeapon *) NULL_CHECK((frame[0].o)))->F_fractionRepairSpeed = (jfloat(0.03f));
	LINE_NUMBER(4556);
	((mindustry_type_weapons_RepairBeamWeapon *) NULL_CHECK((frame[0].o)))->F_targetUnits = (jint(0));
	LINE_NUMBER(4557);
	((mindustry_type_weapons_RepairBeamWeapon *) NULL_CHECK((frame[0].o)))->F_targetBuildings = (jint(1));
	LINE_NUMBER(4558);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_autoTarget = (jint(0));
	LINE_NUMBER(4559);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_controllable = (jint(1));
	LINE_NUMBER(4560);
	sp[0].o = frame[0].o;
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_accent;
	((mindustry_type_weapons_RepairBeamWeapon *) NULL_CHECK(sp[0].o))->F_laserColor = (jref) sp[1].o;
	LINE_NUMBER(4561);
	sp[0].o = frame[0].o;
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_accent;
	((mindustry_type_weapons_RepairBeamWeapon *) NULL_CHECK(sp[0].o))->F_healColor = (jref) sp[1].o;
	LINE_NUMBER(4563);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_UnitTypes$58$1$1(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_content_UnitTypes$58$1$1);
	init_mindustry_content_UnitTypes$58$1$1_mindustry_content_UnitTypes$58$1(ctx, sp[1].o, (frame[0].o));
	((mindustry_type_Weapon *) NULL_CHECK(sp[0].o))->F_bullet = (jref) sp[1].o;
	LINE_NUMBER(4541);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_content_UnitTypes$58$1[] {
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

static FieldMetadata fields[] {
	{ "this$0", &class_mindustry_content_UnitTypes$58, offsetof(mindustry_content_UnitTypes$58$1, F_this$0), "Lmindustry/content/UnitTypes$58;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_content_UnitTypes$58$1_mindustry_content_UnitTypes$58, 0, "(Lmindustry/content/UnitTypes$58;)V", 0 },
};

Class class_mindustry_content_UnitTypes$58$1{
		.nativeName = (intptr_t) "mindustry/content/UnitTypes$58$1",
		.parentClass = (intptr_t) &class_mindustry_type_weapons_RepairBeamWeapon,
		.size = sizeof(mindustry_content_UnitTypes$58$1),
		.classVtable = (intptr_t) vtable_mindustry_content_UnitTypes$58$1,
		.staticInitializer = (intptr_t) clinit_mindustry_content_UnitTypes$58$1,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_content_UnitTypes$58$1,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 31,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_mindustry_content_UnitTypes$58$1 = registerClass(&class_mindustry_content_UnitTypes$58$1);

}

