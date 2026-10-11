#include "mindustry/content/UnitTypes_43_1.h"
#include "mindustry/type/Weapon.h"
#include "mindustry/content/UnitTypes_43_1.h"
#include "mindustry/gen/Sounds.h"
#include "mindustry/entities/part/DrawPart.h"
#include "arc/graphics/Color.h"
#include "mindustry/content/UnitTypes_43.h"
#include "mindustry/content/UnitTypes_43_1_1.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/content/UnitTypes_43_1_2.h"
#include "mindustry/content/UnitTypes_43_1_3.h"
#include "arc/audio/Sound.h"
#include "mindustry/content/UnitTypes_43_1_4.h"
#include "mindustry/content/UnitTypes_43_1_5.h"
#include "mindustry/content/UnitTypes_43_1_6.h"
#include "arc/struct/Seq.h"
#include "mindustry/entities/bullet/BulletType.h"

extern "C" {


void mark_mindustry_content_UnitTypes$43$1(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_content_UnitTypes$43$1 *) object;
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_mindustry_content_UnitTypes$43$1(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_type_Weapon(ctx);
}

void init_mindustry_content_UnitTypes$43$1_mindustry_content_UnitTypes$43_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/UnitTypes$43$1:<init>", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_UnitTypes$43$1(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(2987);
	((mindustry_content_UnitTypes$43$1 *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_mindustry_type_Weapon_java_lang_String(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(2988);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_shootConquer;
	((mindustry_type_Weapon *) NULL_CHECK(sp[0].o))->F_shootSound = (jref) sp[1].o;
	LINE_NUMBER(2989);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_layerOffset = (jfloat(0.1f));
	LINE_NUMBER(2990);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_reload = (jfloat(100.0f));
	LINE_NUMBER(2991);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_shootY = (jfloat(32.5f));
	LINE_NUMBER(2992);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_shake = (jfloat(5.0f));
	LINE_NUMBER(2993);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_recoil = (jfloat(5.0f));
	LINE_NUMBER(2994);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_rotate = (jint(1));
	LINE_NUMBER(2995);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_rotateSpeed = (jfloat(0.6f));
	LINE_NUMBER(2996);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_mirror = (jint(0));
	LINE_NUMBER(2997);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_x = (jfloat(0));
	LINE_NUMBER(2998);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_y = (jfloat(-2.0f));
	LINE_NUMBER(2999);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_shadow = (jfloat(50.0f));
	LINE_NUMBER(3000);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"f9350f"_j))));
	((mindustry_type_Weapon *) NULL_CHECK(sp[0].o))->F_heatColor = (jref) sp[1].o;
	LINE_NUMBER(3001);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_shootWarmupSpeed = (jfloat(0.06f));
	LINE_NUMBER(3002);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_cooldownTime = (jfloat(110.0f));
	LINE_NUMBER(3003);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"f9350f"_j))));
	((mindustry_type_Weapon *) NULL_CHECK(sp[0].o))->F_heatColor = (jref) sp[1].o;
	LINE_NUMBER(3004);
	((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_minWarmup = (jfloat(0.9f));
	LINE_NUMBER(3006);
	sp[0].o = (jobject)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_parts;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_entities_part_DrawPart, (jint(4)));
	jint temp0 = jint(0);
	clinit_mindustry_content_UnitTypes$43$1$1(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_content_UnitTypes$43$1$1);
	init_mindustry_content_UnitTypes$43$1$1_mindustry_content_UnitTypes$43$1_java_lang_String(ctx, sp[2].o, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"-glow"_j))));
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	jint temp1 = jint(1);
	clinit_mindustry_content_UnitTypes$43$1$2(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_content_UnitTypes$43$1$2);
	init_mindustry_content_UnitTypes$43$1$2_mindustry_content_UnitTypes$43$1_java_lang_String(ctx, sp[2].o, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"-sides"_j))));
	ARRAY_ACCESS(jobject, sp[1].o, temp1) = sp[2].o;
	jint temp2 = jint(2);
	clinit_mindustry_content_UnitTypes$43$1$3(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_content_UnitTypes$43$1$3);
	init_mindustry_content_UnitTypes$43$1$3_mindustry_content_UnitTypes$43$1_java_lang_String(ctx, sp[2].o, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"-sinks"_j))));
	ARRAY_ACCESS(jobject, sp[1].o, temp2) = sp[2].o;
	jint temp3 = jint(3);
	clinit_mindustry_content_UnitTypes$43$1$4(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_content_UnitTypes$43$1$4);
	init_mindustry_content_UnitTypes$43$1$4_mindustry_content_UnitTypes$43$1_java_lang_String(ctx, sp[2].o, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"-sinks-heat"_j))));
	ARRAY_ACCESS(jobject, sp[1].o, temp3) = sp[2].o;
	sp[0].o = (jobject)((func_arc_struct_Seq_addAll_Array1_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_addAll_Array1_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(3046);
	frame[3].i = (jint(1));
	}
label_20:;
	{
	if ((frame[3].i) > (jint(3))) goto label_21;
	}
	{
	LINE_NUMBER(3047);
	frame[4].i = (frame[3].i);
	LINE_NUMBER(3048);
	sp[0].o = (jobject)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_parts;
	clinit_mindustry_content_UnitTypes$43$1$5(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_content_UnitTypes$43$1$5);
	init_mindustry_content_UnitTypes$43$1$5_mindustry_content_UnitTypes$43$1_java_lang_String_int(ctx, sp[1].o, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"-blade"_j))), (frame[4].i));
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(3046);
	INST_IINC(3, 1);
	goto label_20;
	}
label_21:;
	{
	LINE_NUMBER(3062);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_UnitTypes$43$1$6(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_content_UnitTypes$43$1$6);
	init_mindustry_content_UnitTypes$43$1$6_mindustry_content_UnitTypes$43$1_float_float(ctx, sp[1].o, (frame[0].o), (jfloat(8.0f)), (jfloat(360.0f)));
	((mindustry_type_Weapon *) NULL_CHECK(sp[0].o))->F_bullet = (jref) sp[1].o;
	LINE_NUMBER(2987);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_content_UnitTypes$43$1[] {
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
	{ "this$0", &class_mindustry_content_UnitTypes$43, offsetof(mindustry_content_UnitTypes$43$1, F_this$0), "Lmindustry/content/UnitTypes$43;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_content_UnitTypes$43$1_mindustry_content_UnitTypes$43_java_lang_String, 0, "(Lmindustry/content/UnitTypes$43;Ljava/lang/String;)V", 0 },
};

Class class_mindustry_content_UnitTypes$43$1{
		.nativeName = (intptr_t) "mindustry/content/UnitTypes$43$1",
		.parentClass = (intptr_t) &class_mindustry_type_Weapon,
		.size = sizeof(mindustry_content_UnitTypes$43$1),
		.classVtable = (intptr_t) vtable_mindustry_content_UnitTypes$43$1,
		.staticInitializer = (intptr_t) clinit_mindustry_content_UnitTypes$43$1,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_content_UnitTypes$43$1,
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
static bool registered_mindustry_content_UnitTypes$43$1 = registerClass(&class_mindustry_content_UnitTypes$43$1);

}

