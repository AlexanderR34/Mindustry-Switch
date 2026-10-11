#include "mindustry/entities/comp/WeaponsComp.h"
#include "arc/math/geom/Vec2.h"
#include "mindustry/gen/Teamc.h"
#include "arc/func/Func.h"
#include "mindustry/type/Weapon.h"
#include "mindustry/gen/Unit.h"
#include "mindustry/audio/SoundLoop.h"
#include "mindustry/gen/Rotc.h"
#include "mindustry/gen/Velc.h"
#include "mindustry/type/UnitType.h"
#include "mindustry/gen/Posc.h"
#include "java/lang/Object.h"
#include "mindustry/gen/Bullet.h"
#include "mindustry/gen/Entityc.h"
#include "mindustry/gen/Statusc.h"
#include "arc/util/Tmp.h"
#include "arc/struct/Seq.h"
#include "mindustry/entities/comp/WeaponsComp.h"
#include "arc/math/geom/Position.h"
#include "mindustry/entities/units/WeaponMount.h"

extern "C" {


void mark_mindustry_entities_comp_WeaponsComp(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_entities_comp_WeaponsComp *) object;
	if (self->F_type)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_type)->clazz)->markFunction)((jobject) self->F_type, mark, depth + 1);
	if (self->F_mounts)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_mounts)->clazz)->markFunction)((jobject) self->F_mounts, mark, depth + 1);
}

void clinit_mindustry_entities_comp_WeaponsComp(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_entities_comp_WeaponsComp(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/WeaponsComp:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_comp_WeaponsComp(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(11);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(17);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_entities_units_WeaponMount, (jint(0)));
	((mindustry_entities_comp_WeaponsComp *) NULL_CHECK(sp[0].o))->F_mounts = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_WeaponsComp_setWeaponRotation_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/WeaponsComp:setWeaponRotation", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(23);
	sp[0].o = (jobject)((mindustry_entities_comp_WeaponsComp *) NULL_CHECK((frame[0].o)))->F_mounts;
	frame[2].o = sp[0].o;
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_1:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_2;
	}
	{
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(24);
	((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[5].o)))->F_rotation = (frame[1].f);
	LINE_NUMBER(23);
	INST_IINC(4, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(26);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_WeaponsComp_setupWeapons_mindustry_type_UnitType(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/WeaponsComp:setupWeapons", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(29);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[1].o)))->F_weapons;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_entities_units_WeaponMount, ((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size));
	((mindustry_entities_comp_WeaponsComp *) NULL_CHECK(sp[0].o))->F_mounts = (jref) sp[1].o;
	LINE_NUMBER(30);
	frame[2].i = (jint(0));
	}
label_2:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((mindustry_entities_comp_WeaponsComp *) NULL_CHECK((frame[0].o)))->F_mounts;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_3;
	}
	{
	LINE_NUMBER(31);
	sp[0].o = (jobject)((mindustry_entities_comp_WeaponsComp *) NULL_CHECK((frame[0].o)))->F_mounts;
	jint temp0 = frame[2].i;
	sp[1].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[1].o)))->F_weapons;
	sp[1].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[1].o, (frame[2].i));
	sp[1].o = (jobject)((mindustry_type_Weapon *) NULL_CHECK((checkCast(ctx, &class_mindustry_type_Weapon, sp[1].o))))->F_mountType;
	sp[2].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[1].o)))->F_weapons;
	sp[2].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[2].o, (frame[2].i));
	sp[1].o = (jobject)((func_arc_func_Func_get_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Func, INDEX_arc_func_Func_get_java_lang_Object_R_java_lang_Object, sp[1].o))(ctx, sp[1].o, (checkCast(ctx, &class_mindustry_type_Weapon, sp[2].o)));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = (checkCast(ctx, &class_mindustry_entities_units_WeaponMount, sp[1].o));
	LINE_NUMBER(30);
	INST_IINC(2, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(33);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_WeaponsComp_controlWeapons_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/WeaponsComp:controlWeapons", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(36);
	((func_mindustry_entities_comp_WeaponsComp_controlWeapons_boolean_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_WeaponsComp_controlWeapons_boolean_boolean])(ctx, (frame[0].o), (frame[1].i), (frame[1].i));
	LINE_NUMBER(37);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_WeaponsComp_controlWeapons_boolean_boolean(jcontext ctx, jobject self, jbool param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/WeaponsComp:controlWeapons", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(40);
	sp[0].o = (jobject)((mindustry_entities_comp_WeaponsComp *) NULL_CHECK((frame[0].o)))->F_mounts;
	frame[3].o = sp[0].o;
	frame[4].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	frame[5].i = (jint(0));
	}
label_1:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_2;
	}
	{
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(41);
	sp[0].o = (jobject)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[6].o)))->F_weapon;
	if (((jint)((mindustry_type_Weapon *) NULL_CHECK(sp[0].o))->F_controllable) == 0) goto label_4;
	}
	{
	LINE_NUMBER(42);
	((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[6].o)))->F_rotate = (frame[1].i);
	LINE_NUMBER(43);
	((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[6].o)))->F_shoot = (frame[2].i);
	}
label_4:;
	{
	LINE_NUMBER(40);
	INST_IINC(5, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(46);
	((mindustry_entities_comp_WeaponsComp *) NULL_CHECK((frame[0].o)))->F_isRotate = (frame[1].i);
	LINE_NUMBER(47);
	((mindustry_entities_comp_WeaponsComp *) NULL_CHECK((frame[0].o)))->F_isShooting = (frame[2].i);
	LINE_NUMBER(48);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_WeaponsComp_aim_arc_math_geom_Position(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/WeaponsComp:aim", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(51);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_math_geom_Position_getX_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getX_R_float, (frame[1].o)))(ctx, (frame[1].o));
	jfloat temp1 = (jfloat)((func_arc_math_geom_Position_getY_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getY_R_float, (frame[1].o)))(ctx, (frame[1].o));
	((func_mindustry_entities_comp_WeaponsComp_aim_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_comp_WeaponsComp_aim_float_float])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(52);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_WeaponsComp_aim_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/WeaponsComp:aim", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(56);
	((func_mindustry_entities_comp_WeaponsComp_aim_float_float_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_WeaponsComp_aim_float_float_boolean])(ctx, (frame[0].o), (frame[1].f), (frame[2].f), (jint(0)));
	LINE_NUMBER(57);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_WeaponsComp_aim_float_float_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/WeaponsComp:aim", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(61);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[1].f), (frame[2].f));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_sub_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_sub_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, ((jfloat)((mindustry_entities_comp_WeaponsComp *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_entities_comp_WeaponsComp *) NULL_CHECK((frame[0].o)))->F_y));
	LINE_NUMBER(62);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec2_len_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_len_R_float])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_entities_comp_WeaponsComp *) NULL_CHECK((frame[0].o)))->F_type;
	if ((floatCompare(temp0, ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_aimDst), 1)) >= 0) goto label_2;
	}
	{
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	sp[1].o = (jobject)((mindustry_entities_comp_WeaponsComp *) NULL_CHECK((frame[0].o)))->F_type;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_setLength_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_setLength_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_aimDst));
	}
label_2:;
	{
	LINE_NUMBER(64);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	frame[1].f = (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x) + ((jfloat)((mindustry_entities_comp_WeaponsComp *) NULL_CHECK((frame[0].o)))->F_x));
	LINE_NUMBER(65);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	frame[2].f = (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y) + ((jfloat)((mindustry_entities_comp_WeaponsComp *) NULL_CHECK((frame[0].o)))->F_y));
	LINE_NUMBER(67);
	sp[0].o = (jobject)((mindustry_entities_comp_WeaponsComp *) NULL_CHECK((frame[0].o)))->F_mounts;
	frame[4].o = sp[0].o;
	frame[5].i = (((jarray) nullCheck(ctx, (frame[4].o)))->length);
	frame[6].i = (jint(0));
	}
label_5:;
	{
	if ((frame[6].i) >= (frame[5].i)) goto label_6;
	}
	{
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[6].i)));
	LINE_NUMBER(68);
	sp[0].o = (jobject)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[7].o)))->F_weapon;
	if (((jint)((mindustry_type_Weapon *) NULL_CHECK(sp[0].o))->F_controllable) == 0) goto label_8;
	}
	{
	LINE_NUMBER(69);
	if ((frame[3].i) == 0) goto label_10;
	}
	{
	((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[7].o)))->F_target = (jref) (jobject(nullptr));
	}
label_10:;
	{
	LINE_NUMBER(70);
	((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[7].o)))->F_aimX = (frame[1].f);
	LINE_NUMBER(71);
	((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[7].o)))->F_aimY = (frame[2].f);
	}
label_8:;
	{
	LINE_NUMBER(67);
	INST_IINC(6, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(75);
	((mindustry_entities_comp_WeaponsComp *) NULL_CHECK((frame[0].o)))->F_aimX = (frame[1].f);
	LINE_NUMBER(76);
	((mindustry_entities_comp_WeaponsComp *) NULL_CHECK((frame[0].o)))->F_aimY = (frame[2].f);
	LINE_NUMBER(77);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_entities_comp_WeaponsComp_canShoot_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/WeaponsComp:canShoot", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(80);
	if (((jint)((mindustry_entities_comp_WeaponsComp *) NULL_CHECK((frame[0].o)))->F_disarmed) != 0) goto label_1;
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

void M_mindustry_entities_comp_WeaponsComp_remove(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/WeaponsComp:remove", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(85);
	sp[0].o = (jobject)((mindustry_entities_comp_WeaponsComp *) NULL_CHECK((frame[0].o)))->F_mounts;
	frame[1].o = sp[0].o;
	frame[2].i = (((jarray) nullCheck(ctx, (frame[1].o)))->length);
	frame[3].i = (jint(0));
	}
label_1:;
	{
	if ((frame[3].i) >= (frame[2].i)) goto label_2;
	}
	{
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i)));
	LINE_NUMBER(86);
	sp[0].o = (jobject)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[4].o)))->F_weapon;
	if (((jint)((mindustry_type_Weapon *) NULL_CHECK(sp[0].o))->F_continuous) == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[4].o)))->F_bullet;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[4].o)))->F_bullet;
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK(sp[0].o))->F_owner;
	sp[1].o = (jobject)((func_mindustry_entities_comp_WeaponsComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_WeaponsComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	if (sp[0].o != sp[1].o) goto label_4;
	}
	{
	LINE_NUMBER(87);
	sp[0].o = (jobject)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[4].o)))->F_bullet;
	sp[1].o = (jobject)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[4].o)))->F_bullet;
	((mindustry_gen_Bullet *) NULL_CHECK(sp[0].o))->F_time = (((jfloat)((mindustry_gen_Bullet *) NULL_CHECK(sp[1].o))->F_lifetime) - (jfloat(10.0f)));
	LINE_NUMBER(88);
	((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[4].o)))->F_bullet = (jref) (jobject(nullptr));
	}
label_4:;
	{
	LINE_NUMBER(91);
	sp[0].o = (jobject)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[4].o)))->F_sound;
	if (sp[0].o == nullptr) goto label_7;
	}
	{
	LINE_NUMBER(92);
	sp[0].o = (jobject)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[4].o)))->F_sound;
	((func_mindustry_audio_SoundLoop_stop) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_audio_SoundLoop_stop])(ctx, sp[0].o);
	}
label_7:;
	{
	LINE_NUMBER(85);
	INST_IINC(3, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(95);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_WeaponsComp_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/WeaponsComp:update", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(100);
	sp[0].o = (jobject)((mindustry_entities_comp_WeaponsComp *) NULL_CHECK((frame[0].o)))->F_mounts;
	frame[1].o = sp[0].o;
	frame[2].i = (((jarray) nullCheck(ctx, (frame[1].o)))->length);
	frame[3].i = (jint(0));
	}
label_1:;
	{
	if ((frame[3].i) >= (frame[2].i)) goto label_2;
	}
	{
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i)));
	LINE_NUMBER(101);
	sp[0].o = (jobject)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[4].o)))->F_weapon;
	sp[1].o = (jobject)((func_mindustry_entities_comp_WeaponsComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_WeaponsComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	((func_mindustry_type_Weapon_update_mindustry_gen_Unit_mindustry_entities_units_WeaponMount) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_Weapon_update_mindustry_gen_Unit_mindustry_entities_units_WeaponMount])(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_gen_Unit, sp[1].o)), (frame[4].o));
	LINE_NUMBER(100);
	INST_IINC(3, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(103);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_entities_comp_WeaponsComp[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Object_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_entities_comp_WeaponsComp_remove,
	(void *) M_mindustry_entities_comp_WeaponsComp_update,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_arc_math_geom_Position_angleTo_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_angleTo_float_float_R_float,
	(void *) M_arc_math_geom_Position_dst2_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_dst_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_dst_float_float_R_float,
	(void *) M_arc_math_geom_Position_dst2_float_float_R_float,
	(void *) M_arc_math_geom_Position_within_arc_math_geom_Position_float_R_boolean,
	(void *) M_arc_math_geom_Position_within_float_float_float_R_boolean,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_entities_comp_WeaponsComp_setWeaponRotation_float,
	(void *) M_mindustry_entities_comp_WeaponsComp_setupWeapons_mindustry_type_UnitType,
	(void *) M_mindustry_entities_comp_WeaponsComp_controlWeapons_boolean,
	(void *) M_mindustry_entities_comp_WeaponsComp_controlWeapons_boolean_boolean,
	(void *) M_mindustry_entities_comp_WeaponsComp_aim_arc_math_geom_Position,
	(void *) M_mindustry_entities_comp_WeaponsComp_aim_float_float,
	(void *) M_mindustry_entities_comp_WeaponsComp_aim_float_float_boolean,
	(void *) M_mindustry_entities_comp_WeaponsComp_canShoot_R_boolean,
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
	{ "self", "()Lmindustry/gen/Entityc;" },
	{ "as", "()Ljava/lang/Object;" },
	{ "isAdded", "()Z" },
	{ "isLocal", "()Z" },
	{ "isRemote", "()Z" },
	{ "serialize", "()Z" },
	{ "classId", "()I" },
	{ "id", "()I" },
	{ "add", "()V" },
	{ "afterRead", "()V" },
	{ "afterReadAll", "()V" },
	{ "beforeWrite", "()V" },
	{ "id", "(I)V" },
	{ "read", "(Larc/util/io/Reads;)V" },
	{ "remove", "()V" },
	{ "update", "()V" },
	{ "write", "(Larc/util/io/Writes;)V" },
	{ "getX", "()F" },
	{ "getY", "()F" },
	{ "angleTo", "(Larc/math/geom/Position;)F" },
	{ "angleTo", "(FF)F" },
	{ "dst2", "(Larc/math/geom/Position;)F" },
	{ "dst", "(Larc/math/geom/Position;)F" },
	{ "dst", "(FF)F" },
	{ "dst2", "(FF)F" },
	{ "within", "(Larc/math/geom/Position;F)Z" },
	{ "within", "(FFF)Z" },
	{ "floorOn", "()Lmindustry/world/blocks/environment/Floor;" },
	{ "buildOn", "()Lmindustry/gen/Building;" },
	{ "onSolid", "()Z" },
	{ "x", "()F" },
	{ "y", "()F" },
	{ "tileX", "()I" },
	{ "tileY", "()I" },
	{ "blockOn", "()Lmindustry/world/Block;" },
	{ "tileOn", "()Lmindustry/world/Tile;" },
	{ "set", "(Larc/math/geom/Position;)V" },
	{ "set", "(FF)V" },
	{ "trns", "(Larc/math/geom/Position;)V" },
	{ "trns", "(FF)V" },
	{ "x", "(F)V" },
	{ "y", "(F)V" },
	{ "inFogTo", "(Lmindustry/game/Team;)Z" },
	{ "cheating", "()Z" },
	{ "team", "()Lmindustry/game/Team;" },
	{ "closestCore", "()Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;" },
	{ "closestEnemyCore", "()Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;" },
	{ "core", "()Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;" },
	{ "team", "(Lmindustry/game/Team;)V" },
	{ "rotation", "()F" },
	{ "rotation", "(F)V" },
	{ "solidity", "()Lmindustry/entities/EntityCollisions$SolidPred;" },
	{ "canPassOn", "()Z" },
	{ "canPass", "(II)Z" },
	{ "vel", "()Larc/math/geom/Vec2;" },
	{ "ignoreSolids", "()Z" },
	{ "moving", "()Z" },
	{ "drag", "()F" },
	{ "drag", "(F)V" },
	{ "move", "(Larc/math/geom/Vec2;)V" },
	{ "move", "(FF)V" },
	{ "vel", "(Larc/math/geom/Vec2;)V" },
	{ "velAddNet", "(Larc/math/geom/Vec2;)V" },
	{ "velAddNet", "(FF)V" },
	{ "applyDynamicStatus", "()Lmindustry/entities/units/StatusEntry;" },
	{ "apply", "(Lmindustry/type/StatusEffect;F)V" },
	{ "apply", "(Lmindustry/type/StatusEffect;)V" },
	{ "unapply", "(Lmindustry/type/StatusEffect;)V" },
	{ "statusDamageMultiplier", "(F)V" },
	{ "statusReloadMultiplier", "(F)V" },
	{ "statusArmor", "(F)V" },
	{ "statusBuildSpeed", "(F)V" },
	{ "statusDrag", "(F)V" },
	{ "statusMaxHealth", "(F)V" },
	{ "statusSpeed", "(F)V" },
	{ "statusColor", "()Larc/graphics/Color;" },
	{ "statusBits", "()Larc/struct/Bits;" },
	{ "disarmed", "()Z" },
	{ "hasEffect", "(Lmindustry/type/StatusEffect;)Z" },
	{ "isBoss", "()Z" },
	{ "isGrounded", "()Z" },
	{ "isImmune", "(Lmindustry/type/StatusEffect;)Z" },
	{ "armorOverride", "()F" },
	{ "buildSpeedMultiplier", "()F" },
	{ "damageMultiplier", "()F" },
	{ "dragMultiplier", "()F" },
	{ "getDuration", "(Lmindustry/type/StatusEffect;)F" },
	{ "healthMultiplier", "()F" },
	{ "reloadMultiplier", "()F" },
	{ "speedMultiplier", "()F" },
	{ "armorOverride", "(F)V" },
	{ "buildSpeedMultiplier", "(F)V" },
	{ "clearStatuses", "()V" },
	{ "damageMultiplier", "(F)V" },
	{ "disarmed", "(Z)V" },
	{ "dragMultiplier", "(F)V" },
	{ "draw", "()V" },
	{ "healthMultiplier", "(F)V" },
	{ "reloadMultiplier", "(F)V" },
	{ "setDuration", "(Lmindustry/type/StatusEffect;F)V" },
	{ "speedMultiplier", "(F)V" },
	{ "setWeaponRotation", "(F)V" },
	{ "setupWeapons", "(Lmindustry/type/UnitType;)V" },
	{ "controlWeapons", "(Z)V" },
	{ "controlWeapons", "(ZZ)V" },
	{ "aim", "(Larc/math/geom/Position;)V" },
	{ "aim", "(FF)V" },
	{ "aim", "(FFZ)V" },
	{ "canShoot", "()Z" },
};

static jclass interfaces[] { &class_mindustry_gen_Teamc, &class_mindustry_gen_Posc, &class_mindustry_gen_Rotc, &class_mindustry_gen_Velc, &class_mindustry_gen_Statusc, };

static FieldMetadata fields[] {
	{ "x", &class_float, offsetof(mindustry_entities_comp_WeaponsComp, F_x), "F", 0 },
	{ "y", &class_float, offsetof(mindustry_entities_comp_WeaponsComp, F_y), "F", 0 },
	{ "disarmed", &class_boolean, offsetof(mindustry_entities_comp_WeaponsComp, F_disarmed), "Z", 0 },
	{ "type", &class_mindustry_type_UnitType, offsetof(mindustry_entities_comp_WeaponsComp, F_type), "Lmindustry/type/UnitType;", 0 },
	{ "mounts", getArrayClass(&class_mindustry_entities_units_WeaponMount, 1), offsetof(mindustry_entities_comp_WeaponsComp, F_mounts), "[Lmindustry/entities/units/WeaponMount;", 0 },
	{ "isRotate", &class_boolean, offsetof(mindustry_entities_comp_WeaponsComp, F_isRotate), "Z", 128 },
	{ "aimX", &class_float, offsetof(mindustry_entities_comp_WeaponsComp, F_aimX), "F", 0 },
	{ "aimY", &class_float, offsetof(mindustry_entities_comp_WeaponsComp, F_aimY), "F", 0 },
	{ "isShooting", &class_boolean, offsetof(mindustry_entities_comp_WeaponsComp, F_isShooting), "Z", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_entities_comp_WeaponsComp, 0, "()V", 0 },
	{ "setWeaponRotation", (intptr_t) M_mindustry_entities_comp_WeaponsComp_setWeaponRotation_float, VTABLE_mindustry_entities_comp_WeaponsComp_setWeaponRotation_float, "(F)V", 0 },
	{ "setupWeapons", (intptr_t) M_mindustry_entities_comp_WeaponsComp_setupWeapons_mindustry_type_UnitType, VTABLE_mindustry_entities_comp_WeaponsComp_setupWeapons_mindustry_type_UnitType, "(Lmindustry/type/UnitType;)V", 0 },
	{ "controlWeapons", (intptr_t) M_mindustry_entities_comp_WeaponsComp_controlWeapons_boolean, VTABLE_mindustry_entities_comp_WeaponsComp_controlWeapons_boolean, "(Z)V", 0 },
	{ "controlWeapons", (intptr_t) M_mindustry_entities_comp_WeaponsComp_controlWeapons_boolean_boolean, VTABLE_mindustry_entities_comp_WeaponsComp_controlWeapons_boolean_boolean, "(ZZ)V", 0 },
	{ "aim", (intptr_t) M_mindustry_entities_comp_WeaponsComp_aim_arc_math_geom_Position, VTABLE_mindustry_entities_comp_WeaponsComp_aim_arc_math_geom_Position, "(Larc/math/geom/Position;)V", 0 },
	{ "aim", (intptr_t) M_mindustry_entities_comp_WeaponsComp_aim_float_float, VTABLE_mindustry_entities_comp_WeaponsComp_aim_float_float, "(FF)V", 0 },
	{ "aim", (intptr_t) M_mindustry_entities_comp_WeaponsComp_aim_float_float_boolean, VTABLE_mindustry_entities_comp_WeaponsComp_aim_float_float_boolean, "(FFZ)V", 0 },
	{ "canShoot", (intptr_t) M_mindustry_entities_comp_WeaponsComp_canShoot_R_boolean, VTABLE_mindustry_entities_comp_WeaponsComp_canShoot_R_boolean, "()Z", 0 },
	{ "remove", (intptr_t) M_mindustry_entities_comp_WeaponsComp_remove, VTABLE_mindustry_entities_comp_WeaponsComp_remove, "()V", 1 },
	{ "update", (intptr_t) M_mindustry_entities_comp_WeaponsComp_update, VTABLE_mindustry_entities_comp_WeaponsComp_update, "()V", 1 },
};

Class class_mindustry_entities_comp_WeaponsComp{
		.nativeName = (intptr_t) "mindustry/entities/comp/WeaponsComp",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_entities_comp_WeaponsComp),
		.classVtable = (intptr_t) vtable_mindustry_entities_comp_WeaponsComp,
		.staticInitializer = (intptr_t) clinit_mindustry_entities_comp_WeaponsComp,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_entities_comp_WeaponsComp,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1056,
		.interfaceCount = 5,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 9,
		.nativeFields = (intptr_t) fields,
		.methodCount = 11,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 120,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_entities_comp_WeaponsComp = registerClass(&class_mindustry_entities_comp_WeaponsComp);

}
