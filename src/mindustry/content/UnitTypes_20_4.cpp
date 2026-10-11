#include "mindustry/content/UnitTypes_20_4.h"
#include "mindustry/entities/Effect.h"
#include "java/lang/Object.h"
#include "mindustry/type/Weapon.h"
#include "java/lang/String.h"
#include "mindustry/content/Fx.h"
#include "mindustry/gen/Sounds.h"
#include "arc/audio/Sound.h"
#include "mindustry/content/UnitTypes_20_4.h"
#include "mindustry/entities/bullet/BulletType.h"
#include "mindustry/content/UnitTypes_20.h"

extern "C" {


void mark_mindustry_content_UnitTypes$20$4(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_content_UnitTypes$20$4 *) object;
	if (self->F_val$fragBullet)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_val$fragBullet)->clazz)->markFunction)((jobject) self->F_val$fragBullet, mark, depth + 1);
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_mindustry_content_UnitTypes$20$4(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_type_Weapon(ctx);
}

void init_mindustry_content_UnitTypes$20$4_mindustry_content_UnitTypes$20_java_lang_String_mindustry_entities_bullet_BulletType(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/UnitTypes$20$4:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_UnitTypes$20$4(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(1327);
	((mindustry_content_UnitTypes$20$4 *) NULL_CHECK((frame[0].o)))->F_val$fragBullet = (jref) (frame[3].o);
	((mindustry_content_UnitTypes$20$4 *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_mindustry_type_Weapon_java_lang_String(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(1328);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_y = (jfloat(-13.0f));
	LINE_NUMBER(1329);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_x = (jfloat(20.0f));
	LINE_NUMBER(1330);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_reload = (jfloat(12.0f));
	LINE_NUMBER(1331);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_casing1;
	((mindustry_type_Weapon *) NULL_CHECK(sp[0].o))->F_ejectEffect = (jref) sp[1].o;
	LINE_NUMBER(1332);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_rotateSpeed = (jfloat(7.0f));
	LINE_NUMBER(1333);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_shake = (jfloat(1));
	LINE_NUMBER(1334);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_shootCyclone;
	((mindustry_type_Weapon *) NULL_CHECK(sp[0].o))->F_shootSound = (jref) sp[1].o;
	LINE_NUMBER(1335);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_rotate = (jint(1));
	LINE_NUMBER(1336);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_shadow = (jfloat(12.0f));
	LINE_NUMBER(1337);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_shootY = (jfloat(7.25f));
	LINE_NUMBER(1338);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_content_UnitTypes$20$4 *) NULL_CHECK((frame[0].o)))->F_val$fragBullet;
	((mindustry_type_Weapon *) NULL_CHECK(sp[0].o))->F_bullet = (jref) sp[1].o;
	LINE_NUMBER(1327);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_content_UnitTypes$20$4[] {
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
	{ "val$fragBullet", &class_mindustry_entities_bullet_BulletType, offsetof(mindustry_content_UnitTypes$20$4, F_val$fragBullet), "Lmindustry/entities/bullet/BulletType;", 4112 },
	{ "this$0", &class_mindustry_content_UnitTypes$20, offsetof(mindustry_content_UnitTypes$20$4, F_this$0), "Lmindustry/content/UnitTypes$20;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_content_UnitTypes$20$4_mindustry_content_UnitTypes$20_java_lang_String_mindustry_entities_bullet_BulletType, 0, "(Lmindustry/content/UnitTypes$20;Ljava/lang/String;Lmindustry/entities/bullet/BulletType;)V", 0 },
};

Class class_mindustry_content_UnitTypes$20$4{
		.nativeName = (intptr_t) "mindustry/content/UnitTypes$20$4",
		.parentClass = (intptr_t) &class_mindustry_type_Weapon,
		.size = sizeof(mindustry_content_UnitTypes$20$4),
		.classVtable = (intptr_t) vtable_mindustry_content_UnitTypes$20$4,
		.staticInitializer = (intptr_t) clinit_mindustry_content_UnitTypes$20$4,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_content_UnitTypes$20$4,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 31,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_mindustry_content_UnitTypes$20$4 = registerClass(&class_mindustry_content_UnitTypes$20$4);

}

