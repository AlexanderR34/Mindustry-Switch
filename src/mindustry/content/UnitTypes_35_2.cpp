#include "mindustry/content/UnitTypes_35_2.h"
#include "mindustry/content/UnitTypes_35.h"
#include "mindustry/content/StatusEffects.h"
#include "java/lang/Object.h"
#include "mindustry/type/Weapon.h"
#include "java/lang/String.h"
#include "mindustry/gen/Sounds.h"
#include "arc/audio/Sound.h"
#include "mindustry/content/UnitTypes_35_2.h"
#include "mindustry/type/StatusEffect.h"
#include "arc/struct/ObjectSet.h"
#include "mindustry/entities/bullet/BulletType.h"
#include "mindustry/content/UnitTypes_35_2_1.h"

extern "C" {


void mark_mindustry_content_UnitTypes$35$2(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_content_UnitTypes$35$2 *) object;
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_mindustry_content_UnitTypes$35$2(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_type_Weapon(ctx);
}

void init_mindustry_content_UnitTypes$35$2_mindustry_content_UnitTypes$35_java_lang_String_float_float(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/UnitTypes$35$2:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_UnitTypes$35$2(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(2432);
	((mindustry_content_UnitTypes$35$2 *) NULL_CHECK((frame[0].o)))->F_val$sign = (frame[3].f);
	((mindustry_content_UnitTypes$35$2 *) NULL_CHECK((frame[0].o)))->F_val$mountY = (frame[4].f);
	((mindustry_content_UnitTypes$35$2 *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_mindustry_type_Weapon_java_lang_String(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(2433);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_shadow = (jfloat(20.0f));
	LINE_NUMBER(2434);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_controllable = (jint(0));
	LINE_NUMBER(2435);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_autoTarget = (jint(1));
	LINE_NUMBER(2436);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_mirror = (jint(0));
	LINE_NUMBER(2437);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_shake = (jfloat(3.0f));
	LINE_NUMBER(2438);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_shootY = (jfloat(7.0f));
	LINE_NUMBER(2439);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_rotate = (jint(1));
	LINE_NUMBER(2440);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_x = ((jfloat(21.0f)) * ((jfloat)((mindustry_content_UnitTypes$35$2 *) NULL_CHECK((frame[0].o)))->F_val$sign));
	LINE_NUMBER(2441);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_y = ((jfloat)((mindustry_content_UnitTypes$35$2 *) NULL_CHECK((frame[0].o)))->F_val$mountY);
	LINE_NUMBER(2443);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_targetInterval = (jfloat(20.0f));
	LINE_NUMBER(2444);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_targetSwitchInterval = (jfloat(35.0f));
	LINE_NUMBER(2446);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_rotateSpeed = (jfloat(3.5f));
	LINE_NUMBER(2447);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_reload = (jfloat(170.0f));
	LINE_NUMBER(2448);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_recoil = (jfloat(1));
	LINE_NUMBER(2449);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_beamPlasmaSmall;
	((mindustry_type_Weapon *) NULL_CHECK(sp[0].o))->F_shootSound = (jref) sp[1].o;
	LINE_NUMBER(2450);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_shootBeamPlasmaSmall;
	((mindustry_type_Weapon *) NULL_CHECK(sp[0].o))->F_initialShootSound = (jref) sp[1].o;
	LINE_NUMBER(2451);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_continuous = (jint(1));
	LINE_NUMBER(2452);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_cooldownTime = ((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_reload);
	LINE_NUMBER(2453);
	sp[0].o = (jobject)((mindustry_content_UnitTypes$35$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_immunities;
	clinit_mindustry_content_StatusEffects(ctx);
	sp[1].o = (jobject)SF_mindustry_content_StatusEffects_burning;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_add_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(2455);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_UnitTypes$35$2$1(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_content_UnitTypes$35$2$1);
	init_mindustry_content_UnitTypes$35$2$1_mindustry_content_UnitTypes$35$2(ctx, sp[1].o, (frame[0].o));
	((mindustry_type_Weapon *) NULL_CHECK(sp[0].o))->F_bullet = (jref) sp[1].o;
	LINE_NUMBER(2432);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_content_UnitTypes$35$2[] {
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

static FieldMetadata fields[] {
	{ "val$sign", &class_float, offsetof(mindustry_content_UnitTypes$35$2, F_val$sign), "F", 4112 },
	{ "val$mountY", &class_float, offsetof(mindustry_content_UnitTypes$35$2, F_val$mountY), "F", 4112 },
	{ "this$0", &class_mindustry_content_UnitTypes$35, offsetof(mindustry_content_UnitTypes$35$2, F_this$0), "Lmindustry/content/UnitTypes$35;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_content_UnitTypes$35$2_mindustry_content_UnitTypes$35_java_lang_String_float_float, 0, "(Lmindustry/content/UnitTypes$35;Ljava/lang/String;FF)V", 0 },
};

Class class_mindustry_content_UnitTypes$35$2{
		.nativeName = (intptr_t) "mindustry/content/UnitTypes$35$2",
		.parentClass = (intptr_t) &class_mindustry_type_Weapon,
		.size = sizeof(mindustry_content_UnitTypes$35$2),
		.classVtable = (intptr_t) vtable_mindustry_content_UnitTypes$35$2,
		.staticInitializer = (intptr_t) clinit_mindustry_content_UnitTypes$35$2,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_content_UnitTypes$35$2,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 31,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_mindustry_content_UnitTypes$35$2 = registerClass(&class_mindustry_content_UnitTypes$35$2);

}

