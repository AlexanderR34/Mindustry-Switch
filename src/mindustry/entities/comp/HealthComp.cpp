#include "mindustry/entities/comp/HealthComp.h"
#include "mindustry/gen/Posc.h"
#include "java/lang/Math.h"
#include "java/lang/Object.h"
#include "mindustry/gen/Entityc.h"
#include "mindustry/entities/comp/HealthComp.h"
#include "arc/util/Time.h"
#include "java/lang/Float.h"
#include "arc/math/geom/Position.h"

extern "C" {

jfloat SF_mindustry_entities_comp_HealthComp_hitDuration;

void mark_mindustry_entities_comp_HealthComp(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_entities_comp_HealthComp *) object;
}

void clinit_mindustry_entities_comp_HealthComp(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_mindustry_entities_comp_HealthComp_hitDuration = jfloat(9.0f);
}

void init_mindustry_entities_comp_HealthComp(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/HealthComp:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_comp_HealthComp(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(8);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(13);
	((mindustry_entities_comp_HealthComp *) NULL_CHECK((frame[0].o)))->F_maxHealth = (jfloat(1));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_entities_comp_HealthComp_isValid_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/HealthComp:isValid", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(17);
	if (((jint)((mindustry_entities_comp_HealthComp *) NULL_CHECK((frame[0].o)))->F_dead) != 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_entities_comp_HealthComp_isAdded_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_HealthComp_isAdded_R_boolean])(ctx, (frame[0].o));
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

jfloat M_mindustry_entities_comp_HealthComp_healthf_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/HealthComp:healthf", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(21);
	popStackFrame(ctx);
	return (((jfloat)((mindustry_entities_comp_HealthComp *) NULL_CHECK((frame[0].o)))->F_health) / ((jfloat)((mindustry_entities_comp_HealthComp *) NULL_CHECK((frame[0].o)))->F_maxHealth));
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_HealthComp_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/HealthComp:update", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(26);
	sp[0].o = frame[0].o;
	((mindustry_entities_comp_HealthComp *) NULL_CHECK(sp[0].o))->F_hitTime = (((jfloat)((mindustry_entities_comp_HealthComp *) NULL_CHECK(sp[0].o))->F_hitTime) - ((clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta) / (jfloat(9.0f))));
	LINE_NUMBER(27);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_HealthComp_killed(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/HealthComp:killed", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(31);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_HealthComp_kill(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/HealthComp:kill", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(34);
	if (((jint)((mindustry_entities_comp_HealthComp *) NULL_CHECK((frame[0].o)))->F_dead) == 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(36);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, ((jfloat)((mindustry_entities_comp_HealthComp *) NULL_CHECK((frame[0].o)))->F_health), (jfloat(0)));
	((mindustry_entities_comp_HealthComp *) NULL_CHECK(sp[0].o))->F_health = temp0;
	LINE_NUMBER(37);
	((mindustry_entities_comp_HealthComp *) NULL_CHECK((frame[0].o)))->F_dead = (jint(1));
	LINE_NUMBER(38);
	((func_mindustry_entities_comp_HealthComp_killed) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_HealthComp_killed])(ctx, (frame[0].o));
	LINE_NUMBER(39);
	((func_mindustry_entities_comp_HealthComp_remove) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_HealthComp_remove])(ctx, (frame[0].o));
	LINE_NUMBER(40);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_HealthComp_heal(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/HealthComp:heal", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(43);
	((mindustry_entities_comp_HealthComp *) NULL_CHECK((frame[0].o)))->F_dead = (jint(0));
	LINE_NUMBER(44);
	((mindustry_entities_comp_HealthComp *) NULL_CHECK((frame[0].o)))->F_health = ((jfloat)((mindustry_entities_comp_HealthComp *) NULL_CHECK((frame[0].o)))->F_maxHealth);
	LINE_NUMBER(45);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_entities_comp_HealthComp_damaged_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/HealthComp:damaged", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(48);
	if ((floatCompare(((jfloat)((mindustry_entities_comp_HealthComp *) NULL_CHECK((frame[0].o)))->F_health), (((jfloat)((mindustry_entities_comp_HealthComp *) NULL_CHECK((frame[0].o)))->F_maxHealth) - (jfloat(1,000000e-03f))), 1)) >= 0) goto label_1;
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

void M_mindustry_entities_comp_HealthComp_damagePierce_float_boolean(jcontext ctx, jobject self, jfloat param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/HealthComp:damagePierce", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(53);
	((func_mindustry_entities_comp_HealthComp_damage_float_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_HealthComp_damage_float_boolean])(ctx, (frame[0].o), (frame[1].f), (frame[2].i));
	LINE_NUMBER(54);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_HealthComp_damagePierce_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/HealthComp:damagePierce", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(58);
	((func_mindustry_entities_comp_HealthComp_damagePierce_float_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_HealthComp_damagePierce_float_boolean])(ctx, (frame[0].o), (frame[1].f), (jint(1)));
	LINE_NUMBER(59);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_HealthComp_damageArmorMult_float_float_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/HealthComp:damageArmorMult", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(63);
	((func_mindustry_entities_comp_HealthComp_damage_float_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_HealthComp_damage_float_boolean])(ctx, (frame[0].o), (frame[1].f), (frame[3].i));
	LINE_NUMBER(64);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_HealthComp_damageArmorMult_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/HealthComp:damageArmorMult", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(68);
	((func_mindustry_entities_comp_HealthComp_damageArmorMult_float_float_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_HealthComp_damageArmorMult_float_float_boolean])(ctx, (frame[0].o), (frame[1].f), (frame[2].f), (jint(1)));
	LINE_NUMBER(69);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_HealthComp_damage_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/HealthComp:damage", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(72);
	jint temp0 = (jint)SM_java_lang_Float_isNaN_float_R_boolean(ctx, ((jfloat)((mindustry_entities_comp_HealthComp *) NULL_CHECK((frame[0].o)))->F_health));
	if (temp0 == 0) goto label_1;
	}
	{
	((mindustry_entities_comp_HealthComp *) NULL_CHECK((frame[0].o)))->F_health = (jfloat(0));
	}
label_1:;
	{
	LINE_NUMBER(74);
	sp[0].o = frame[0].o;
	((mindustry_entities_comp_HealthComp *) NULL_CHECK(sp[0].o))->F_health = (((jfloat)((mindustry_entities_comp_HealthComp *) NULL_CHECK(sp[0].o))->F_health) - (frame[1].f));
	LINE_NUMBER(75);
	((mindustry_entities_comp_HealthComp *) NULL_CHECK((frame[0].o)))->F_hitTime = (jfloat(1));
	LINE_NUMBER(76);
	if ((floatCompare(((jfloat)((mindustry_entities_comp_HealthComp *) NULL_CHECK((frame[0].o)))->F_health), (jfloat(0)), 1)) > 0) goto label_4;
	}
	{
	if (((jint)((mindustry_entities_comp_HealthComp *) NULL_CHECK((frame[0].o)))->F_dead) != 0) goto label_4;
	}
	{
	LINE_NUMBER(77);
	((func_mindustry_entities_comp_HealthComp_kill) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_HealthComp_kill])(ctx, (frame[0].o));
	}
label_4:;
	LINE_NUMBER(79);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_HealthComp_damage_float_boolean(jcontext ctx, jobject self, jfloat param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/HealthComp:damage", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(82);
	frame[3].f = ((jfloat)((mindustry_entities_comp_HealthComp *) NULL_CHECK((frame[0].o)))->F_hitTime);
	LINE_NUMBER(84);
	((func_mindustry_entities_comp_HealthComp_damage_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_HealthComp_damage_float])(ctx, (frame[0].o), (frame[1].f));
	LINE_NUMBER(86);
	if ((frame[2].i) != 0) goto label_3;
	}
	{
	LINE_NUMBER(87);
	((mindustry_entities_comp_HealthComp *) NULL_CHECK((frame[0].o)))->F_hitTime = (frame[3].f);
	}
label_3:;
	LINE_NUMBER(89);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_HealthComp_damageContinuous_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/HealthComp:damageContinuous", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(92);
	sp[0].o = frame[0].o;
	jfloat temp0 = (frame[1].f) * (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta);
	sp[1].f = temp0;
	sp += 2;
	if ((floatCompare(((jfloat)((mindustry_entities_comp_HealthComp *) NULL_CHECK((frame[0].o)))->F_hitTime), (jfloat(-1.0f)), 1)) > 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 3;
	((func_mindustry_entities_comp_HealthComp_damage_float_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_comp_HealthComp_damage_float_boolean])(ctx, sp[0].o, sp[1].f, sp[2].i);
	LINE_NUMBER(93);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_HealthComp_damageContinuousPierce_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/HealthComp:damageContinuousPierce", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(96);
	sp[0].o = frame[0].o;
	jfloat temp0 = (frame[1].f) * (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta);
	sp[1].f = temp0;
	sp += 2;
	if ((floatCompare(((jfloat)((mindustry_entities_comp_HealthComp *) NULL_CHECK((frame[0].o)))->F_hitTime), (jfloat(-11.0f)), 1)) > 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 3;
	((func_mindustry_entities_comp_HealthComp_damagePierce_float_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_comp_HealthComp_damagePierce_float_boolean])(ctx, sp[0].o, sp[1].f, sp[2].i);
	LINE_NUMBER(97);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_HealthComp_damageContinuousArmorMult_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/HealthComp:damageContinuousArmorMult", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(100);
	sp[0].o = frame[0].o;
	jfloat temp0 = (frame[1].f) * (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta);
	jfloat temp1 = frame[2].f;
	sp[1].f = temp0;
	sp[2].f = temp1;
	sp += 3;
	if ((floatCompare(((jfloat)((mindustry_entities_comp_HealthComp *) NULL_CHECK((frame[0].o)))->F_hitTime), (jfloat(-11.0f)), 1)) > 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 4;
	((func_mindustry_entities_comp_HealthComp_damageArmorMult_float_float_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_comp_HealthComp_damageArmorMult_float_float_boolean])(ctx, sp[0].o, sp[1].f, sp[2].f, sp[3].i);
	LINE_NUMBER(101);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_HealthComp_clampHealth(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/HealthComp:clampHealth", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(104);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, ((jfloat)((mindustry_entities_comp_HealthComp *) NULL_CHECK((frame[0].o)))->F_health), ((jfloat)((mindustry_entities_comp_HealthComp *) NULL_CHECK((frame[0].o)))->F_maxHealth));
	((mindustry_entities_comp_HealthComp *) NULL_CHECK(sp[0].o))->F_health = temp0;
	LINE_NUMBER(105);
	jint temp1 = (jint)SM_java_lang_Float_isNaN_float_R_boolean(ctx, ((jfloat)((mindustry_entities_comp_HealthComp *) NULL_CHECK((frame[0].o)))->F_health));
	if (temp1 == 0) goto label_2;
	}
	{
	((mindustry_entities_comp_HealthComp *) NULL_CHECK((frame[0].o)))->F_health = (jfloat(0));
	}
label_2:;
	LINE_NUMBER(106);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_HealthComp_heal_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/HealthComp:heal", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(110);
	sp[0].o = frame[0].o;
	((mindustry_entities_comp_HealthComp *) NULL_CHECK(sp[0].o))->F_health = (((jfloat)((mindustry_entities_comp_HealthComp *) NULL_CHECK(sp[0].o))->F_health) + (frame[1].f));
	LINE_NUMBER(111);
	((func_mindustry_entities_comp_HealthComp_clampHealth) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_HealthComp_clampHealth])(ctx, (frame[0].o));
	LINE_NUMBER(112);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_HealthComp_healFract_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/HealthComp:healFract", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(116);
	((func_mindustry_entities_comp_HealthComp_heal_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_HealthComp_heal_float])(ctx, (frame[0].o), ((frame[1].f) * ((jfloat)((mindustry_entities_comp_HealthComp *) NULL_CHECK((frame[0].o)))->F_maxHealth)));
	LINE_NUMBER(117);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_entities_comp_HealthComp[] {
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
	(void *) nullptr,
	(void *) M_mindustry_entities_comp_HealthComp_update,
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
	(void *) M_mindustry_entities_comp_HealthComp_isValid_R_boolean,
	(void *) M_mindustry_entities_comp_HealthComp_healthf_R_float,
	(void *) M_mindustry_entities_comp_HealthComp_killed,
	(void *) M_mindustry_entities_comp_HealthComp_kill,
	(void *) M_mindustry_entities_comp_HealthComp_heal,
	(void *) M_mindustry_entities_comp_HealthComp_damaged_R_boolean,
	(void *) M_mindustry_entities_comp_HealthComp_damagePierce_float_boolean,
	(void *) M_mindustry_entities_comp_HealthComp_damagePierce_float,
	(void *) M_mindustry_entities_comp_HealthComp_damageArmorMult_float_float_boolean,
	(void *) M_mindustry_entities_comp_HealthComp_damageArmorMult_float_float,
	(void *) M_mindustry_entities_comp_HealthComp_damage_float,
	(void *) M_mindustry_entities_comp_HealthComp_damage_float_boolean,
	(void *) M_mindustry_entities_comp_HealthComp_damageContinuous_float,
	(void *) M_mindustry_entities_comp_HealthComp_damageContinuousPierce_float,
	(void *) M_mindustry_entities_comp_HealthComp_damageContinuousArmorMult_float_float,
	(void *) M_mindustry_entities_comp_HealthComp_clampHealth,
	(void *) M_mindustry_entities_comp_HealthComp_heal_float,
	(void *) M_mindustry_entities_comp_HealthComp_healFract_float,
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
	{ "isValid", "()Z" },
	{ "healthf", "()F" },
	{ "killed", "()V" },
	{ "kill", "()V" },
	{ "heal", "()V" },
	{ "damaged", "()Z" },
	{ "damagePierce", "(FZ)V" },
	{ "damagePierce", "(F)V" },
	{ "damageArmorMult", "(FFZ)V" },
	{ "damageArmorMult", "(FF)V" },
	{ "damage", "(F)V" },
	{ "damage", "(FZ)V" },
	{ "damageContinuous", "(F)V" },
	{ "damageContinuousPierce", "(F)V" },
	{ "damageContinuousArmorMult", "(FF)V" },
	{ "clampHealth", "()V" },
	{ "heal", "(F)V" },
	{ "healFract", "(F)V" },
};

static jclass interfaces[] { &class_mindustry_gen_Entityc, &class_mindustry_gen_Posc, };

static FieldMetadata fields[] {
	{ "hitDuration", &class_float, (intptr_t) &SF_mindustry_entities_comp_HealthComp_hitDuration, "F", 24 },
	{ "health", &class_float, offsetof(mindustry_entities_comp_HealthComp, F_health), "F", 0 },
	{ "hitTime", &class_float, offsetof(mindustry_entities_comp_HealthComp, F_hitTime), "F", 128 },
	{ "maxHealth", &class_float, offsetof(mindustry_entities_comp_HealthComp, F_maxHealth), "F", 128 },
	{ "dead", &class_boolean, offsetof(mindustry_entities_comp_HealthComp, F_dead), "Z", 128 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_entities_comp_HealthComp, 0, "()V", 0 },
	{ "isValid", (intptr_t) M_mindustry_entities_comp_HealthComp_isValid_R_boolean, VTABLE_mindustry_entities_comp_HealthComp_isValid_R_boolean, "()Z", 0 },
	{ "healthf", (intptr_t) M_mindustry_entities_comp_HealthComp_healthf_R_float, VTABLE_mindustry_entities_comp_HealthComp_healthf_R_float, "()F", 0 },
	{ "update", (intptr_t) M_mindustry_entities_comp_HealthComp_update, VTABLE_mindustry_entities_comp_HealthComp_update, "()V", 1 },
	{ "killed", (intptr_t) M_mindustry_entities_comp_HealthComp_killed, VTABLE_mindustry_entities_comp_HealthComp_killed, "()V", 0 },
	{ "kill", (intptr_t) M_mindustry_entities_comp_HealthComp_kill, VTABLE_mindustry_entities_comp_HealthComp_kill, "()V", 0 },
	{ "heal", (intptr_t) M_mindustry_entities_comp_HealthComp_heal, VTABLE_mindustry_entities_comp_HealthComp_heal, "()V", 0 },
	{ "damaged", (intptr_t) M_mindustry_entities_comp_HealthComp_damaged_R_boolean, VTABLE_mindustry_entities_comp_HealthComp_damaged_R_boolean, "()Z", 0 },
	{ "damagePierce", (intptr_t) M_mindustry_entities_comp_HealthComp_damagePierce_float_boolean, VTABLE_mindustry_entities_comp_HealthComp_damagePierce_float_boolean, "(FZ)V", 0 },
	{ "damagePierce", (intptr_t) M_mindustry_entities_comp_HealthComp_damagePierce_float, VTABLE_mindustry_entities_comp_HealthComp_damagePierce_float, "(F)V", 0 },
	{ "damageArmorMult", (intptr_t) M_mindustry_entities_comp_HealthComp_damageArmorMult_float_float_boolean, VTABLE_mindustry_entities_comp_HealthComp_damageArmorMult_float_float_boolean, "(FFZ)V", 0 },
	{ "damageArmorMult", (intptr_t) M_mindustry_entities_comp_HealthComp_damageArmorMult_float_float, VTABLE_mindustry_entities_comp_HealthComp_damageArmorMult_float_float, "(FF)V", 0 },
	{ "damage", (intptr_t) M_mindustry_entities_comp_HealthComp_damage_float, VTABLE_mindustry_entities_comp_HealthComp_damage_float, "(F)V", 0 },
	{ "damage", (intptr_t) M_mindustry_entities_comp_HealthComp_damage_float_boolean, VTABLE_mindustry_entities_comp_HealthComp_damage_float_boolean, "(FZ)V", 0 },
	{ "damageContinuous", (intptr_t) M_mindustry_entities_comp_HealthComp_damageContinuous_float, VTABLE_mindustry_entities_comp_HealthComp_damageContinuous_float, "(F)V", 0 },
	{ "damageContinuousPierce", (intptr_t) M_mindustry_entities_comp_HealthComp_damageContinuousPierce_float, VTABLE_mindustry_entities_comp_HealthComp_damageContinuousPierce_float, "(F)V", 0 },
	{ "damageContinuousArmorMult", (intptr_t) M_mindustry_entities_comp_HealthComp_damageContinuousArmorMult_float_float, VTABLE_mindustry_entities_comp_HealthComp_damageContinuousArmorMult_float_float, "(FF)V", 0 },
	{ "clampHealth", (intptr_t) M_mindustry_entities_comp_HealthComp_clampHealth, VTABLE_mindustry_entities_comp_HealthComp_clampHealth, "()V", 0 },
	{ "heal", (intptr_t) M_mindustry_entities_comp_HealthComp_heal_float, VTABLE_mindustry_entities_comp_HealthComp_heal_float, "(F)V", 0 },
	{ "healFract", (intptr_t) M_mindustry_entities_comp_HealthComp_healFract_float, VTABLE_mindustry_entities_comp_HealthComp_healFract_float, "(F)V", 0 },
};

Class class_mindustry_entities_comp_HealthComp{
		.nativeName = (intptr_t) "mindustry/entities/comp/HealthComp",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_entities_comp_HealthComp),
		.classVtable = (intptr_t) vtable_mindustry_entities_comp_HealthComp,
		.staticInitializer = (intptr_t) clinit_mindustry_entities_comp_HealthComp,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_entities_comp_HealthComp,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1056,
		.interfaceCount = 2,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 20,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 71,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_entities_comp_HealthComp = registerClass(&class_mindustry_entities_comp_HealthComp);

}
