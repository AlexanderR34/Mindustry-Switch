#include "mindustry/entities/comp/ShieldComp.h"
#include "java/lang/Math.h"
#include "mindustry/gen/Unit.h"
#include "mindustry/game/Rules.h"
#include "arc/util/Time.h"
#include "java/lang/Float.h"
#include "mindustry/entities/Damage.h"
#include "arc/graphics/Color.h"
#include "mindustry/type/UnitType.h"
#include "mindustry/gen/Posc.h"
#include "mindustry/entities/Effect.h"
#include "java/lang/Object.h"
#include "mindustry/entities/comp/ShieldComp.h"
#include "mindustry/content/Fx.h"
#include "mindustry/gen/Entityc.h"
#include "mindustry/gen/Healthc.h"
#include "mindustry/game/Team.h"
#include "arc/math/geom/Position.h"
#include "mindustry/Vars.h"
#include "mindustry/core/GameState.h"

extern "C" {


void mark_mindustry_entities_comp_ShieldComp(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_entities_comp_ShieldComp *) object;
	if (self->F_team)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_team)->clazz)->markFunction)((jobject) self->F_team, mark, depth + 1);
	if (self->F_type)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_type)->clazz)->markFunction)((jobject) self->F_type, mark, depth + 1);
}

void clinit_mindustry_entities_comp_ShieldComp(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_entities_comp_ShieldComp(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/ShieldComp:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_comp_ShieldComp(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(13);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(24);
	((mindustry_entities_comp_ShieldComp *) NULL_CHECK((frame[0].o)))->F_shieldAlpha = (jfloat(0));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_ShieldComp_damage_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/ShieldComp:damage", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(30);
	sp[0].o = frame[0].o;
	jfloat temp0 = frame[1].f;
	sp[1].f = temp0;
	sp += 2;
	if ((floatCompare(((jfloat)((mindustry_entities_comp_ShieldComp *) NULL_CHECK((frame[0].o)))->F_armorOverride), (jfloat(0)), -1)) < 0) goto label_1;
	}
	{
	jfloat temp0 = (jfloat)((mindustry_entities_comp_ShieldComp *) NULL_CHECK((frame[0].o)))->F_armorOverride;
	sp[0].f = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ALOAD(0);
	sp[-1].f = ((mindustry_entities_comp_ShieldComp *) NULL_CHECK(sp[-1].o))->F_armor;
label_2:;
	{
	sp -= 3;
	jfloat temp0 = (jfloat)SM_mindustry_entities_Damage_applyArmor_float_float_R_float(ctx, sp[1].f, sp[2].f);
	jfloat temp1 = temp0 / ((jfloat)((mindustry_entities_comp_ShieldComp *) NULL_CHECK((frame[0].o)))->F_healthMultiplier);
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[2].o = (jobject)((mindustry_entities_comp_ShieldComp *) NULL_CHECK((frame[0].o)))->F_team;
	jfloat temp2 = (jfloat)((func_mindustry_game_Rules_unitHealth_mindustry_game_Team_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_game_Rules_unitHealth_mindustry_game_Team_R_float])(ctx, sp[1].o, sp[2].o);
	((func_mindustry_entities_comp_ShieldComp_rawDamage_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_comp_ShieldComp_rawDamage_float])(ctx, sp[0].o, (temp1 / temp2));
	LINE_NUMBER(31);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_ShieldComp_damagePierce_float_boolean(jcontext ctx, jobject self, jfloat param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/ShieldComp:damagePierce", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(36);
	frame[3].f = ((jfloat)((mindustry_entities_comp_ShieldComp *) NULL_CHECK((frame[0].o)))->F_hitTime);
	LINE_NUMBER(38);
	sp[0].o = frame[0].o;
	jfloat temp0 = (frame[1].f) / ((jfloat)((mindustry_entities_comp_ShieldComp *) NULL_CHECK((frame[0].o)))->F_healthMultiplier);
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[2].o = (jobject)((mindustry_entities_comp_ShieldComp *) NULL_CHECK((frame[0].o)))->F_team;
	jfloat temp1 = (jfloat)((func_mindustry_game_Rules_unitHealth_mindustry_game_Team_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_game_Rules_unitHealth_mindustry_game_Team_R_float])(ctx, sp[1].o, sp[2].o);
	((func_mindustry_entities_comp_ShieldComp_rawDamage_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_comp_ShieldComp_rawDamage_float])(ctx, sp[0].o, (temp0 / temp1));
	LINE_NUMBER(40);
	if ((frame[2].i) != 0) goto label_3;
	}
	{
	LINE_NUMBER(41);
	((mindustry_entities_comp_ShieldComp *) NULL_CHECK((frame[0].o)))->F_hitTime = (frame[3].f);
	}
label_3:;
	LINE_NUMBER(43);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_ShieldComp_damageArmorMult_float_float_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/ShieldComp:damageArmorMult", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(48);
	frame[4].f = ((jfloat)((mindustry_entities_comp_ShieldComp *) NULL_CHECK((frame[0].o)))->F_hitTime);
	LINE_NUMBER(50);
	sp[0].o = frame[0].o;
	jfloat temp0 = frame[1].f;
	sp[1].f = temp0;
	sp += 2;
	if ((floatCompare(((jfloat)((mindustry_entities_comp_ShieldComp *) NULL_CHECK((frame[0].o)))->F_armorOverride), (jfloat(0)), -1)) < 0) goto label_2;
	}
	{
	jfloat temp0 = ((jfloat)((mindustry_entities_comp_ShieldComp *) NULL_CHECK((frame[0].o)))->F_armorOverride) * (frame[2].f);
	sp[0].f = temp0;
	sp += 1;
	goto label_3;
	}
label_2:;
	{
	jfloat temp0 = ((jfloat)((mindustry_entities_comp_ShieldComp *) NULL_CHECK((frame[0].o)))->F_armor) * (frame[2].f);
	sp[0].f = temp0;
	sp += 1;
	}
label_3:;
	{
	sp -= 3;
	jfloat temp0 = (jfloat)SM_mindustry_entities_Damage_applyArmor_float_float_R_float(ctx, sp[1].f, sp[2].f);
	jfloat temp1 = temp0 / ((jfloat)((mindustry_entities_comp_ShieldComp *) NULL_CHECK((frame[0].o)))->F_healthMultiplier);
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[2].o = (jobject)((mindustry_entities_comp_ShieldComp *) NULL_CHECK((frame[0].o)))->F_team;
	jfloat temp2 = (jfloat)((func_mindustry_game_Rules_unitHealth_mindustry_game_Team_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_game_Rules_unitHealth_mindustry_game_Team_R_float])(ctx, sp[1].o, sp[2].o);
	((func_mindustry_entities_comp_ShieldComp_rawDamage_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_comp_ShieldComp_rawDamage_float])(ctx, sp[0].o, (temp1 / temp2));
	LINE_NUMBER(52);
	if ((frame[3].i) != 0) goto label_5;
	}
	{
	LINE_NUMBER(53);
	((mindustry_entities_comp_ShieldComp *) NULL_CHECK((frame[0].o)))->F_hitTime = (frame[4].f);
	}
label_5:;
	LINE_NUMBER(55);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_ShieldComp_rawDamage_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/ShieldComp:rawDamage", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(58);
	if ((floatCompare(((jfloat)((mindustry_entities_comp_ShieldComp *) NULL_CHECK((frame[0].o)))->F_shield), (jfloat(1,000000e-04f)), -1)) <= 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 1;
	frame[2].i = sp[0].i;
	LINE_NUMBER(60);
	jint temp0 = (jint)SM_java_lang_Float_isNaN_float_R_boolean(ctx, ((jfloat)((mindustry_entities_comp_ShieldComp *) NULL_CHECK((frame[0].o)))->F_health));
	if (temp0 == 0) goto label_4;
	}
	{
	((mindustry_entities_comp_ShieldComp *) NULL_CHECK((frame[0].o)))->F_health = (jfloat(0));
	}
label_4:;
	{
	LINE_NUMBER(62);
	if ((frame[2].i) == 0) goto label_5;
	}
	{
	LINE_NUMBER(63);
	((mindustry_entities_comp_ShieldComp *) NULL_CHECK((frame[0].o)))->F_shieldAlpha = (jfloat(1));
	}
label_5:;
	{
	LINE_NUMBER(66);
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((jfloat)((mindustry_entities_comp_ShieldComp *) NULL_CHECK((frame[0].o)))->F_shield), (jfloat(0)));
	jfloat temp1 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, temp0, (frame[1].f));
	frame[3].f = temp1;
	LINE_NUMBER(67);
	sp[0].o = frame[0].o;
	((mindustry_entities_comp_ShieldComp *) NULL_CHECK(sp[0].o))->F_shield = (((jfloat)((mindustry_entities_comp_ShieldComp *) NULL_CHECK(sp[0].o))->F_shield) - (frame[3].f));
	LINE_NUMBER(68);
	((mindustry_entities_comp_ShieldComp *) NULL_CHECK((frame[0].o)))->F_hitTime = (jfloat(1));
	LINE_NUMBER(69);
	frame[1].f = ((frame[1].f) - (frame[3].f));
	LINE_NUMBER(71);
	if ((floatCompare((frame[1].f), (jfloat(0)), -1)) <= 0) goto label_11;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_ShieldComp *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_killable) == 0) goto label_11;
	}
	{
	LINE_NUMBER(72);
	sp[0].o = frame[0].o;
	((mindustry_entities_comp_ShieldComp *) NULL_CHECK(sp[0].o))->F_health = (((jfloat)((mindustry_entities_comp_ShieldComp *) NULL_CHECK(sp[0].o))->F_health) - (frame[1].f));
	LINE_NUMBER(73);
	if ((floatCompare(((jfloat)((mindustry_entities_comp_ShieldComp *) NULL_CHECK((frame[0].o)))->F_health), (jfloat(0)), 1)) > 0) goto label_14;
	}
	{
	if (((jint)((mindustry_entities_comp_ShieldComp *) NULL_CHECK((frame[0].o)))->F_dead) != 0) goto label_14;
	}
	{
	LINE_NUMBER(74);
	((func_mindustry_entities_comp_ShieldComp_kill) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_ShieldComp_kill])(ctx, (frame[0].o));
	}
label_14:;
	{
	LINE_NUMBER(77);
	if ((frame[2].i) == 0) goto label_11;
	}
	{
	if ((floatCompare(((jfloat)((mindustry_entities_comp_ShieldComp *) NULL_CHECK((frame[0].o)))->F_shield), (jfloat(1,000000e-04f)), 1)) > 0) goto label_11;
	}
	{
	LINE_NUMBER(78);
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_unitShieldBreak;
	jfloat temp0 = (jfloat)((mindustry_entities_comp_ShieldComp *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_entities_comp_ShieldComp *) NULL_CHECK((frame[0].o)))->F_y;
	jfloat temp2 = jfloat(0);
	sp[1].o = (jobject)((mindustry_entities_comp_ShieldComp *) NULL_CHECK((frame[0].o)))->F_type;
	sp[2].o = (jobject)((func_mindustry_entities_comp_ShieldComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_ShieldComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_mindustry_type_UnitType_shieldColor_mindustry_gen_Unit_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_type_UnitType_shieldColor_mindustry_gen_Unit_R_arc_graphics_Color])(ctx, sp[1].o, (checkCast(ctx, &class_mindustry_gen_Unit, sp[2].o)));
	((func_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color_java_lang_Object])(ctx, sp[0].o, temp0, temp1, temp2, sp[1].o, (frame[0].o));
	}
label_11:;
	LINE_NUMBER(81);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_ShieldComp_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/ShieldComp:update", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(85);
	sp[0].o = frame[0].o;
	((mindustry_entities_comp_ShieldComp *) NULL_CHECK(sp[0].o))->F_shieldAlpha = (((jfloat)((mindustry_entities_comp_ShieldComp *) NULL_CHECK(sp[0].o))->F_shieldAlpha) - ((clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta) / (jfloat(15.0f))));
	LINE_NUMBER(86);
	if ((floatCompare(((jfloat)((mindustry_entities_comp_ShieldComp *) NULL_CHECK((frame[0].o)))->F_shieldAlpha), (jfloat(0)), 1)) >= 0) goto label_2;
	}
	{
	((mindustry_entities_comp_ShieldComp *) NULL_CHECK((frame[0].o)))->F_shieldAlpha = (jfloat(0));
	}
label_2:;
	LINE_NUMBER(87);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_entities_comp_ShieldComp[] {
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
	(void *) M_mindustry_entities_comp_ShieldComp_update,
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
	(void *) M_mindustry_entities_comp_ShieldComp_damageArmorMult_float_float_boolean,
	(void *) nullptr,
	(void *) M_mindustry_entities_comp_ShieldComp_damagePierce_float_boolean,
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
	(void *) M_mindustry_entities_comp_ShieldComp_damage_float,
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
	(void *) M_mindustry_entities_comp_ShieldComp_rawDamage_float,
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
	{ "damageArmorMult", "(FF)V" },
	{ "damageArmorMult", "(FFZ)V" },
	{ "damagePierce", "(F)V" },
	{ "damagePierce", "(FZ)V" },
	{ "healFract", "(F)V" },
	{ "heal", "(F)V" },
	{ "damaged", "()Z" },
	{ "dead", "()Z" },
	{ "isValid", "()Z" },
	{ "health", "()F" },
	{ "healthf", "()F" },
	{ "hitTime", "()F" },
	{ "maxHealth", "()F" },
	{ "clampHealth", "()V" },
	{ "damage", "(F)V" },
	{ "damage", "(FZ)V" },
	{ "damageContinuous", "(F)V" },
	{ "damageContinuousArmorMult", "(FF)V" },
	{ "damageContinuousPierce", "(F)V" },
	{ "dead", "(Z)V" },
	{ "heal", "()V" },
	{ "health", "(F)V" },
	{ "hitTime", "(F)V" },
	{ "kill", "()V" },
	{ "killed", "()V" },
	{ "maxHealth", "(F)V" },
	{ "rawDamage", "(F)V" },
};

static jclass interfaces[] { &class_mindustry_gen_Healthc, &class_mindustry_gen_Posc, };

static FieldMetadata fields[] {
	{ "health", &class_float, offsetof(mindustry_entities_comp_ShieldComp, F_health), "F", 0 },
	{ "hitTime", &class_float, offsetof(mindustry_entities_comp_ShieldComp, F_hitTime), "F", 0 },
	{ "x", &class_float, offsetof(mindustry_entities_comp_ShieldComp, F_x), "F", 0 },
	{ "y", &class_float, offsetof(mindustry_entities_comp_ShieldComp, F_y), "F", 0 },
	{ "healthMultiplier", &class_float, offsetof(mindustry_entities_comp_ShieldComp, F_healthMultiplier), "F", 0 },
	{ "armorOverride", &class_float, offsetof(mindustry_entities_comp_ShieldComp, F_armorOverride), "F", 0 },
	{ "dead", &class_boolean, offsetof(mindustry_entities_comp_ShieldComp, F_dead), "Z", 0 },
	{ "team", &class_mindustry_game_Team, offsetof(mindustry_entities_comp_ShieldComp, F_team), "Lmindustry/game/Team;", 0 },
	{ "type", &class_mindustry_type_UnitType, offsetof(mindustry_entities_comp_ShieldComp, F_type), "Lmindustry/type/UnitType;", 0 },
	{ "shield", &class_float, offsetof(mindustry_entities_comp_ShieldComp, F_shield), "F", 0 },
	{ "armor", &class_float, offsetof(mindustry_entities_comp_ShieldComp, F_armor), "F", 128 },
	{ "shieldAlpha", &class_float, offsetof(mindustry_entities_comp_ShieldComp, F_shieldAlpha), "F", 128 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_entities_comp_ShieldComp, 0, "()V", 0 },
	{ "damage", (intptr_t) M_mindustry_entities_comp_ShieldComp_damage_float, VTABLE_mindustry_entities_comp_ShieldComp_damage_float, "(F)V", 1 },
	{ "damagePierce", (intptr_t) M_mindustry_entities_comp_ShieldComp_damagePierce_float_boolean, VTABLE_mindustry_entities_comp_ShieldComp_damagePierce_float_boolean, "(FZ)V", 1 },
	{ "damageArmorMult", (intptr_t) M_mindustry_entities_comp_ShieldComp_damageArmorMult_float_float_boolean, VTABLE_mindustry_entities_comp_ShieldComp_damageArmorMult_float_float_boolean, "(FFZ)V", 1 },
	{ "rawDamage", (intptr_t) M_mindustry_entities_comp_ShieldComp_rawDamage_float, VTABLE_mindustry_entities_comp_ShieldComp_rawDamage_float, "(F)V", 4 },
	{ "update", (intptr_t) M_mindustry_entities_comp_ShieldComp_update, VTABLE_mindustry_entities_comp_ShieldComp_update, "()V", 1 },
};

Class class_mindustry_entities_comp_ShieldComp{
		.nativeName = (intptr_t) "mindustry/entities/comp/ShieldComp",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_entities_comp_ShieldComp),
		.classVtable = (intptr_t) vtable_mindustry_entities_comp_ShieldComp,
		.staticInitializer = (intptr_t) clinit_mindustry_entities_comp_ShieldComp,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_entities_comp_ShieldComp,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1056,
		.interfaceCount = 2,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 12,
		.nativeFields = (intptr_t) fields,
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 80,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_entities_comp_ShieldComp = registerClass(&class_mindustry_entities_comp_ShieldComp);

}
