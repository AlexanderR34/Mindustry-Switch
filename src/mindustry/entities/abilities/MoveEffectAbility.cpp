#include "mindustry/entities/abilities/MoveEffectAbility.h"
#include "arc/math/Mathf.h"
#include "arc/math/geom/Vec2.h"
#include "mindustry/gen/Teamc.h"
#include "mindustry/gen/Unit.h"
#include "arc/util/Time.h"
#include "arc/graphics/Color.h"
#include "mindustry/entities/Effect.h"
#include "java/lang/Object.h"
#include "mindustry/content/Fx.h"
#include "mindustry/gen/Player.h"
#include "mindustry/entities/abilities/Ability.h"
#include "arc/util/Tmp.h"
#include "mindustry/game/Team.h"
#include "mindustry/entities/abilities/MoveEffectAbility.h"
#include "mindustry/Vars.h"

extern "C" {


void mark_mindustry_entities_abilities_MoveEffectAbility(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_entities_abilities_Ability(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_entities_abilities_MoveEffectAbility *) object;
	if (self->F_color)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_color)->clazz)->markFunction)((jobject) self->F_color, mark, depth + 1);
	if (self->F_effect)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_effect)->clazz)->markFunction)((jobject) self->F_effect, mark, depth + 1);
}

void clinit_mindustry_entities_abilities_MoveEffectAbility(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_entities_abilities_Ability(ctx);
}

void init_mindustry_entities_abilities_MoveEffectAbility_float_float_arc_graphics_Color_mindustry_entities_Effect_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jobject param2, jobject param3, jfloat param4) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/abilities/MoveEffectAbility:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_abilities_MoveEffectAbility(ctx);
	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].f = param4;
	{
	LINE_NUMBER(25);
	init_mindustry_entities_abilities_Ability(ctx, (frame[0].o));
	LINE_NUMBER(12);
	((mindustry_entities_abilities_MoveEffectAbility *) NULL_CHECK((frame[0].o)))->F_minVelocity = (jfloat(0.08f));
	LINE_NUMBER(13);
	((mindustry_entities_abilities_MoveEffectAbility *) NULL_CHECK((frame[0].o)))->F_interval = (jfloat(3.0f));
	((mindustry_entities_abilities_MoveEffectAbility *) NULL_CHECK((frame[0].o)))->F_chance = (jfloat(0));
	LINE_NUMBER(14);
	((mindustry_entities_abilities_MoveEffectAbility *) NULL_CHECK((frame[0].o)))->F_amount = (jint(1));
	LINE_NUMBER(16);
	((mindustry_entities_abilities_MoveEffectAbility *) NULL_CHECK((frame[0].o)))->F_rotateEffect = (jint(0));
	LINE_NUMBER(17);
	((mindustry_entities_abilities_MoveEffectAbility *) NULL_CHECK((frame[0].o)))->F_effectParam = (jfloat(3.0f));
	LINE_NUMBER(18);
	((mindustry_entities_abilities_MoveEffectAbility *) NULL_CHECK((frame[0].o)))->F_teamColor = (jint(0));
	LINE_NUMBER(20);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_white;
	((mindustry_entities_abilities_MoveEffectAbility *) NULL_CHECK(sp[0].o))->F_color = (jref) sp[1].o;
	LINE_NUMBER(21);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_missileTrail;
	((mindustry_entities_abilities_MoveEffectAbility *) NULL_CHECK(sp[0].o))->F_effect = (jref) sp[1].o;
	LINE_NUMBER(26);
	((mindustry_entities_abilities_MoveEffectAbility *) NULL_CHECK((frame[0].o)))->F_x = (frame[1].f);
	LINE_NUMBER(27);
	((mindustry_entities_abilities_MoveEffectAbility *) NULL_CHECK((frame[0].o)))->F_y = (frame[2].f);
	LINE_NUMBER(28);
	((mindustry_entities_abilities_MoveEffectAbility *) NULL_CHECK((frame[0].o)))->F_color = (jref) (frame[3].o);
	LINE_NUMBER(29);
	((mindustry_entities_abilities_MoveEffectAbility *) NULL_CHECK((frame[0].o)))->F_effect = (jref) (frame[4].o);
	LINE_NUMBER(30);
	((mindustry_entities_abilities_MoveEffectAbility *) NULL_CHECK((frame[0].o)))->F_interval = (frame[5].f);
	LINE_NUMBER(31);
	((mindustry_entities_abilities_Ability *) NULL_CHECK((frame[0].o)))->F_display = (jint(0));
	LINE_NUMBER(32);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_entities_abilities_MoveEffectAbility(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/abilities/MoveEffectAbility:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_abilities_MoveEffectAbility(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(34);
	init_mindustry_entities_abilities_Ability(ctx, (frame[0].o));
	LINE_NUMBER(12);
	((mindustry_entities_abilities_MoveEffectAbility *) NULL_CHECK((frame[0].o)))->F_minVelocity = (jfloat(0.08f));
	LINE_NUMBER(13);
	((mindustry_entities_abilities_MoveEffectAbility *) NULL_CHECK((frame[0].o)))->F_interval = (jfloat(3.0f));
	((mindustry_entities_abilities_MoveEffectAbility *) NULL_CHECK((frame[0].o)))->F_chance = (jfloat(0));
	LINE_NUMBER(14);
	((mindustry_entities_abilities_MoveEffectAbility *) NULL_CHECK((frame[0].o)))->F_amount = (jint(1));
	LINE_NUMBER(16);
	((mindustry_entities_abilities_MoveEffectAbility *) NULL_CHECK((frame[0].o)))->F_rotateEffect = (jint(0));
	LINE_NUMBER(17);
	((mindustry_entities_abilities_MoveEffectAbility *) NULL_CHECK((frame[0].o)))->F_effectParam = (jfloat(3.0f));
	LINE_NUMBER(18);
	((mindustry_entities_abilities_MoveEffectAbility *) NULL_CHECK((frame[0].o)))->F_teamColor = (jint(0));
	LINE_NUMBER(20);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_white;
	((mindustry_entities_abilities_MoveEffectAbility *) NULL_CHECK(sp[0].o))->F_color = (jref) sp[1].o;
	LINE_NUMBER(21);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_missileTrail;
	((mindustry_entities_abilities_MoveEffectAbility *) NULL_CHECK(sp[0].o))->F_effect = (jref) sp[1].o;
	LINE_NUMBER(35);
	((mindustry_entities_abilities_Ability *) NULL_CHECK((frame[0].o)))->F_display = (jint(0));
	LINE_NUMBER(36);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_abilities_MoveEffectAbility_update_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/abilities/MoveEffectAbility:update", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(40);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_headless) == 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(42);
	sp[0].o = frame[0].o;
	((mindustry_entities_abilities_MoveEffectAbility *) NULL_CHECK(sp[0].o))->F_counter = (((jfloat)((mindustry_entities_abilities_MoveEffectAbility *) NULL_CHECK(sp[0].o))->F_counter) + (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta));
	LINE_NUMBER(43);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_vel;
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec2_len2_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_len2_R_float])(ctx, sp[0].o);
	if ((floatCompare(temp0, (((jfloat)((mindustry_entities_abilities_MoveEffectAbility *) NULL_CHECK((frame[0].o)))->F_minVelocity) * ((jfloat)((mindustry_entities_abilities_MoveEffectAbility *) NULL_CHECK((frame[0].o)))->F_minVelocity)), -1)) < 0) goto label_3;
	}
	{
	if ((floatCompare(((jfloat)((mindustry_entities_abilities_MoveEffectAbility *) NULL_CHECK((frame[0].o)))->F_counter), ((jfloat)((mindustry_entities_abilities_MoveEffectAbility *) NULL_CHECK((frame[0].o)))->F_interval), -1)) >= 0) goto label_4;
	}
	{
	if ((floatCompare(((jfloat)((mindustry_entities_abilities_MoveEffectAbility *) NULL_CHECK((frame[0].o)))->F_chance), (jfloat(0)), -1)) <= 0) goto label_3;
	}
	{
	jint temp0 = (jint)SM_arc_math_Mathf_chanceDelta_double_R_boolean(ctx, (jdouble(((jfloat)((mindustry_entities_abilities_MoveEffectAbility *) NULL_CHECK((frame[0].o)))->F_chance))));
	if (temp0 == 0) goto label_3;
	}
label_4:;
	{
	sp[0].o = frame[1].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	sp[1].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[1].o);
	jint temp0 = (jint)((func_mindustry_gen_Unit_inFogTo_mindustry_game_Team_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_inFogTo_mindustry_game_Team_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_3;
	}
	{
	LINE_NUMBER(44);
	if ((floatCompare(((jfloat)((mindustry_entities_abilities_MoveEffectAbility *) NULL_CHECK((frame[0].o)))->F_rangeLengthMax), (jfloat(0)), -1)) <= 0) goto label_6;
	}
	{
	LINE_NUMBER(45);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_trns_float_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_trns_float_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_rotation) - (jfloat(90.0f))), ((jfloat)((mindustry_entities_abilities_MoveEffectAbility *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_entities_abilities_MoveEffectAbility *) NULL_CHECK((frame[0].o)))->F_y));
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v2;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_random_float_float_R_float(ctx, ((jfloat)((mindustry_entities_abilities_MoveEffectAbility *) NULL_CHECK((frame[0].o)))->F_rangeLengthMin), ((jfloat)((mindustry_entities_abilities_MoveEffectAbility *) NULL_CHECK((frame[0].o)))->F_rangeLengthMax));
	sp[1].o = (jobject)((func_arc_math_geom_Vec2_rnd_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_rnd_float_R_arc_math_geom_Vec2])(ctx, sp[1].o, temp0);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_add_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_add_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	goto label_8;
	}
label_6:;
	{
	LINE_NUMBER(47);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp0 = ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_rotation) - (jfloat(90.0f));
	jfloat temp1 = (jfloat)((mindustry_entities_abilities_MoveEffectAbility *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp2 = (jfloat)SM_arc_math_Mathf_range_float_R_float(ctx, ((jfloat)((mindustry_entities_abilities_MoveEffectAbility *) NULL_CHECK((frame[0].o)))->F_rangeX));
	jfloat temp3 = temp1 + temp2;
	jfloat temp4 = (jfloat)((mindustry_entities_abilities_MoveEffectAbility *) NULL_CHECK((frame[0].o)))->F_y;
	jfloat temp5 = (jfloat)SM_arc_math_Mathf_range_float_R_float(ctx, ((jfloat)((mindustry_entities_abilities_MoveEffectAbility *) NULL_CHECK((frame[0].o)))->F_rangeY));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_trns_float_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_trns_float_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp0, temp3, (temp4 + temp5));
	}
label_8:;
	{
	LINE_NUMBER(50);
	sp[0].o = frame[0].o;
	((mindustry_entities_abilities_MoveEffectAbility *) NULL_CHECK(sp[0].o))->F_counter = (fmodf(((jfloat)((mindustry_entities_abilities_MoveEffectAbility *) NULL_CHECK(sp[0].o))->F_counter), ((jfloat)((mindustry_entities_abilities_MoveEffectAbility *) NULL_CHECK((frame[0].o)))->F_interval)));
	LINE_NUMBER(51);
	frame[2].i = (jint(0));
	}
label_10:;
	{
	if ((frame[2].i) >= ((jint)((mindustry_entities_abilities_MoveEffectAbility *) NULL_CHECK((frame[0].o)))->F_amount)) goto label_3;
	}
	{
	LINE_NUMBER(52);
	sp[0].o = (jobject)((mindustry_entities_abilities_MoveEffectAbility *) NULL_CHECK((frame[0].o)))->F_effect;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp0 = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x) + ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_x);
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp1 = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y) + ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_y);
	sp[1].f = temp0;
	sp[2].f = temp1;
	sp += 3;
	if (((jint)((mindustry_entities_abilities_MoveEffectAbility *) NULL_CHECK((frame[0].o)))->F_rotateEffect) == 0) goto label_12;
	}
	{
	jfloat temp0 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_rotation;
	sp[0].f = temp0;
	sp += 1;
	goto label_13;
	}
label_12:;
	INST_ALOAD(0);
	sp[-1].f = ((mindustry_entities_abilities_MoveEffectAbility *) NULL_CHECK(sp[-1].o))->F_effectParam;
label_13:;
	{
	sp -= 1;
	jfloat temp0 = sp[0].f + ((jfloat)((mindustry_entities_abilities_MoveEffectAbility *) NULL_CHECK((frame[0].o)))->F_rotation);
	sp[0].f = temp0;
	sp += 1;
	if (((jint)((mindustry_entities_abilities_MoveEffectAbility *) NULL_CHECK((frame[0].o)))->F_teamColor) == 0) goto label_14;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_team;
	sp[0].o = (jobject)((mindustry_game_Team *) NULL_CHECK(sp[0].o))->F_color;
	sp += 1;
	goto label_15;
	}
label_14:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((mindustry_entities_abilities_MoveEffectAbility *) NULL_CHECK(sp[-1].o))->F_color;
label_15:;
	{
	if (((jint)((mindustry_entities_abilities_MoveEffectAbility *) NULL_CHECK((frame[0].o)))->F_parentizeEffects) == 0) goto label_16;
	}
	INST_ALOAD(1);
	goto label_17;
label_16:;
	INST_ACONST_NULL();
label_17:;
	{
	sp -= 6;
	((func_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color_java_lang_Object])(ctx, sp[0].o, sp[1].f, sp[2].f, sp[3].f, sp[4].o, sp[5].o);
	LINE_NUMBER(51);
	INST_IINC(2, 1);
	goto label_10;
	}
label_3:;
	LINE_NUMBER(55);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_entities_abilities_MoveEffectAbility[] {
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
	(void *) M_mindustry_entities_abilities_MoveEffectAbility_update_mindustry_gen_Unit,
	(void *) M_mindustry_entities_abilities_Ability_draw_mindustry_gen_Unit,
	(void *) M_mindustry_entities_abilities_Ability_death_mindustry_gen_Unit,
	(void *) M_mindustry_entities_abilities_Ability_created_mindustry_gen_Unit,
	(void *) M_mindustry_entities_abilities_Ability_init_mindustry_type_UnitType,
	(void *) M_mindustry_entities_abilities_Ability_displayBars_mindustry_gen_Unit_arc_scene_ui_layout_Table,
	(void *) M_mindustry_entities_abilities_Ability_display_arc_scene_ui_layout_Table,
	(void *) M_mindustry_entities_abilities_Ability_addStats_arc_scene_ui_layout_Table,
	(void *) M_mindustry_entities_abilities_Ability_abilityStat_java_lang_String_Array1_java_lang_Object_R_java_lang_String,
	(void *) M_mindustry_entities_abilities_Ability_copy_R_mindustry_entities_abilities_Ability,
	(void *) M_mindustry_entities_abilities_Ability_localized_R_java_lang_String,
	(void *) M_mindustry_entities_abilities_Ability_getBundle_R_java_lang_String,
	(void *) M_mindustry_entities_abilities_Ability_lambda$display$0_arc_scene_ui_layout_Table,
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
	{ "update", "(Lmindustry/gen/Unit;)V" },
	{ "draw", "(Lmindustry/gen/Unit;)V" },
	{ "death", "(Lmindustry/gen/Unit;)V" },
	{ "created", "(Lmindustry/gen/Unit;)V" },
	{ "init", "(Lmindustry/type/UnitType;)V" },
	{ "displayBars", "(Lmindustry/gen/Unit;Larc/scene/ui/layout/Table;)V" },
	{ "display", "(Larc/scene/ui/layout/Table;)V" },
	{ "addStats", "(Larc/scene/ui/layout/Table;)V" },
	{ "abilityStat", "(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;" },
	{ "copy", "()Lmindustry/entities/abilities/Ability;" },
	{ "localized", "()Ljava/lang/String;" },
	{ "getBundle", "()Ljava/lang/String;" },
	{ "lambda$display$0", "(Larc/scene/ui/layout/Table;)V" },
};

static FieldMetadata fields[] {
	{ "minVelocity", &class_float, offsetof(mindustry_entities_abilities_MoveEffectAbility, F_minVelocity), "F", 1 },
	{ "interval", &class_float, offsetof(mindustry_entities_abilities_MoveEffectAbility, F_interval), "F", 1 },
	{ "chance", &class_float, offsetof(mindustry_entities_abilities_MoveEffectAbility, F_chance), "F", 1 },
	{ "amount", &class_int, offsetof(mindustry_entities_abilities_MoveEffectAbility, F_amount), "I", 1 },
	{ "x", &class_float, offsetof(mindustry_entities_abilities_MoveEffectAbility, F_x), "F", 1 },
	{ "y", &class_float, offsetof(mindustry_entities_abilities_MoveEffectAbility, F_y), "F", 1 },
	{ "rotation", &class_float, offsetof(mindustry_entities_abilities_MoveEffectAbility, F_rotation), "F", 1 },
	{ "rangeX", &class_float, offsetof(mindustry_entities_abilities_MoveEffectAbility, F_rangeX), "F", 1 },
	{ "rangeY", &class_float, offsetof(mindustry_entities_abilities_MoveEffectAbility, F_rangeY), "F", 1 },
	{ "rangeLengthMin", &class_float, offsetof(mindustry_entities_abilities_MoveEffectAbility, F_rangeLengthMin), "F", 1 },
	{ "rangeLengthMax", &class_float, offsetof(mindustry_entities_abilities_MoveEffectAbility, F_rangeLengthMax), "F", 1 },
	{ "rotateEffect", &class_boolean, offsetof(mindustry_entities_abilities_MoveEffectAbility, F_rotateEffect), "Z", 1 },
	{ "effectParam", &class_float, offsetof(mindustry_entities_abilities_MoveEffectAbility, F_effectParam), "F", 1 },
	{ "teamColor", &class_boolean, offsetof(mindustry_entities_abilities_MoveEffectAbility, F_teamColor), "Z", 1 },
	{ "parentizeEffects", &class_boolean, offsetof(mindustry_entities_abilities_MoveEffectAbility, F_parentizeEffects), "Z", 1 },
	{ "color", &class_arc_graphics_Color, offsetof(mindustry_entities_abilities_MoveEffectAbility, F_color), "Larc/graphics/Color;", 1 },
	{ "effect", &class_mindustry_entities_Effect, offsetof(mindustry_entities_abilities_MoveEffectAbility, F_effect), "Lmindustry/entities/Effect;", 1 },
	{ "counter", &class_float, offsetof(mindustry_entities_abilities_MoveEffectAbility, F_counter), "F", 4 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_entities_abilities_MoveEffectAbility_float_float_arc_graphics_Color_mindustry_entities_Effect_float, 0, "(FFLarc/graphics/Color;Lmindustry/entities/Effect;F)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_entities_abilities_MoveEffectAbility, 0, "()V", 1 },
	{ "update", (intptr_t) M_mindustry_entities_abilities_MoveEffectAbility_update_mindustry_gen_Unit, VTABLE_mindustry_entities_abilities_MoveEffectAbility_update_mindustry_gen_Unit, "(Lmindustry/gen/Unit;)V", 1 },
};

Class class_mindustry_entities_abilities_MoveEffectAbility{
		.nativeName = (intptr_t) "mindustry/entities/abilities/MoveEffectAbility",
		.parentClass = (intptr_t) &class_mindustry_entities_abilities_Ability,
		.size = sizeof(mindustry_entities_abilities_MoveEffectAbility),
		.classVtable = (intptr_t) vtable_mindustry_entities_abilities_MoveEffectAbility,
		.staticInitializer = (intptr_t) clinit_mindustry_entities_abilities_MoveEffectAbility,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_entities_abilities_MoveEffectAbility,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 18,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 24,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_entities_abilities_MoveEffectAbility = registerClass(&class_mindustry_entities_abilities_MoveEffectAbility);

}
