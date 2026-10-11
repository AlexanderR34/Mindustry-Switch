#include "mindustry/entities/abilities/ShieldRegenFieldAbility.h"
#include "arc/graphics/Color.h"
#include "arc/func/Cons.h"
#include "mindustry/entities/Effect.h"
#include "mindustry/content/Fx.h"
#include "java/lang/String.h"
#include "mindustry/entities/abilities/Ability.h"
#include "arc/util/I18NBundle.h"
#include "arc/scene/ui/layout/Cell.h"
#include "arc/math/geom/Position.h"
#include "mindustry/entities/abilities/ShieldRegenFieldAbility.h"
#include "arc/math/Mathf.h"
#include "java/lang/Math.h"
#include "arc/Core.h"
#include "mindustry/gen/Unit.h"
#include "mindustry/gen/Sounds.h"
#include "arc/scene/ui/layout/Table.h"
#include "arc/util/Time.h"
#include "mindustry/entities/abilities/ShieldRegenFieldAbility_invoke_arc_func_Cons_1.h"
#include "mindustry/type/UnitType.h"
#include "java/lang/CharSequence.h"
#include "arc/util/Strings.h"
#include "java/lang/Object.h"
#include "arc/audio/Sound.h"
#include "mindustry/entities/Units.h"
#include "mindustry/game/Team.h"

extern "C" {


void mark_mindustry_entities_abilities_ShieldRegenFieldAbility(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_entities_abilities_ShieldRegenFieldAbility *) object;
	if (self->F_applyEffect)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_applyEffect)->clazz)->markFunction)((jobject) self->F_applyEffect, mark, depth + 1);
	if (self->F_activeEffect)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_activeEffect)->clazz)->markFunction)((jobject) self->F_activeEffect, mark, depth + 1);
	if (self->F_sound)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_sound)->clazz)->markFunction)((jobject) self->F_sound, mark, depth + 1);
}

void clinit_mindustry_entities_abilities_ShieldRegenFieldAbility(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_entities_abilities_Ability(ctx);
}

void init_mindustry_entities_abilities_ShieldRegenFieldAbility(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/abilities/ShieldRegenFieldAbility:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_abilities_ShieldRegenFieldAbility(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(25);
	init_mindustry_entities_abilities_Ability(ctx, (frame[0].o));
	LINE_NUMBER(15);
	((mindustry_entities_abilities_ShieldRegenFieldAbility *) NULL_CHECK((frame[0].o)))->F_amount = (jfloat(1));
	((mindustry_entities_abilities_ShieldRegenFieldAbility *) NULL_CHECK((frame[0].o)))->F_max = (jfloat(100.0f));
	((mindustry_entities_abilities_ShieldRegenFieldAbility *) NULL_CHECK((frame[0].o)))->F_reload = (jfloat(100.0f));
	((mindustry_entities_abilities_ShieldRegenFieldAbility *) NULL_CHECK((frame[0].o)))->F_range = (jfloat(60.0f));
	LINE_NUMBER(16);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_shieldApply;
	((mindustry_entities_abilities_ShieldRegenFieldAbility *) NULL_CHECK(sp[0].o))->F_applyEffect = (jref) sp[1].o;
	LINE_NUMBER(17);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_shieldWave;
	((mindustry_entities_abilities_ShieldRegenFieldAbility *) NULL_CHECK(sp[0].o))->F_activeEffect = (jref) sp[1].o;
	LINE_NUMBER(18);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_shieldWave;
	((mindustry_entities_abilities_ShieldRegenFieldAbility *) NULL_CHECK(sp[0].o))->F_sound = (jref) sp[1].o;
	LINE_NUMBER(19);
	((mindustry_entities_abilities_ShieldRegenFieldAbility *) NULL_CHECK((frame[0].o)))->F_soundVolume = (jfloat(0.7f));
	LINE_NUMBER(23);
	((mindustry_entities_abilities_ShieldRegenFieldAbility *) NULL_CHECK((frame[0].o)))->F_applied = (jint(0));
	LINE_NUMBER(25);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_entities_abilities_ShieldRegenFieldAbility_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/abilities/ShieldRegenFieldAbility:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_abilities_ShieldRegenFieldAbility(ctx);
	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(27);
	init_mindustry_entities_abilities_Ability(ctx, (frame[0].o));
	LINE_NUMBER(15);
	((mindustry_entities_abilities_ShieldRegenFieldAbility *) NULL_CHECK((frame[0].o)))->F_amount = (jfloat(1));
	((mindustry_entities_abilities_ShieldRegenFieldAbility *) NULL_CHECK((frame[0].o)))->F_max = (jfloat(100.0f));
	((mindustry_entities_abilities_ShieldRegenFieldAbility *) NULL_CHECK((frame[0].o)))->F_reload = (jfloat(100.0f));
	((mindustry_entities_abilities_ShieldRegenFieldAbility *) NULL_CHECK((frame[0].o)))->F_range = (jfloat(60.0f));
	LINE_NUMBER(16);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_shieldApply;
	((mindustry_entities_abilities_ShieldRegenFieldAbility *) NULL_CHECK(sp[0].o))->F_applyEffect = (jref) sp[1].o;
	LINE_NUMBER(17);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_shieldWave;
	((mindustry_entities_abilities_ShieldRegenFieldAbility *) NULL_CHECK(sp[0].o))->F_activeEffect = (jref) sp[1].o;
	LINE_NUMBER(18);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_shieldWave;
	((mindustry_entities_abilities_ShieldRegenFieldAbility *) NULL_CHECK(sp[0].o))->F_sound = (jref) sp[1].o;
	LINE_NUMBER(19);
	((mindustry_entities_abilities_ShieldRegenFieldAbility *) NULL_CHECK((frame[0].o)))->F_soundVolume = (jfloat(0.7f));
	LINE_NUMBER(23);
	((mindustry_entities_abilities_ShieldRegenFieldAbility *) NULL_CHECK((frame[0].o)))->F_applied = (jint(0));
	LINE_NUMBER(28);
	((mindustry_entities_abilities_ShieldRegenFieldAbility *) NULL_CHECK((frame[0].o)))->F_amount = (frame[1].f);
	LINE_NUMBER(29);
	((mindustry_entities_abilities_ShieldRegenFieldAbility *) NULL_CHECK((frame[0].o)))->F_max = (frame[2].f);
	LINE_NUMBER(30);
	((mindustry_entities_abilities_ShieldRegenFieldAbility *) NULL_CHECK((frame[0].o)))->F_reload = (frame[3].f);
	LINE_NUMBER(31);
	((mindustry_entities_abilities_ShieldRegenFieldAbility *) NULL_CHECK((frame[0].o)))->F_range = (frame[4].f);
	LINE_NUMBER(32);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_abilities_ShieldRegenFieldAbility_addStats_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/abilities/ShieldRegenFieldAbility:addStats", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(36);
	M_mindustry_entities_abilities_Ability_addStats_arc_scene_ui_layout_Table(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(37);
	sp[0].o = frame[1].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"bullet.range"_j));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[4].o = (jobject)SM_arc_util_Strings_autoFixed_float_int_R_java_lang_String(ctx, (((jfloat)((mindustry_entities_abilities_ShieldRegenFieldAbility *) NULL_CHECK((frame[0].o)))->F_range) / (jfloat(8.0f))), (jint(2)));
	ARRAY_ACCESS(jobject, sp[3].o, temp0) = sp[4].o;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(38);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(39);
	sp[0].o = frame[1].o;
	sp[1].o = frame[0].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"firingrate"_j));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp1 = jint(0);
	sp[4].o = (jobject)SM_arc_util_Strings_autoFixed_float_int_R_java_lang_String(ctx, ((jfloat(60.0f)) / ((jfloat)((mindustry_entities_abilities_ShieldRegenFieldAbility *) NULL_CHECK((frame[0].o)))->F_reload)), (jint(2)));
	ARRAY_ACCESS(jobject, sp[3].o, temp1) = sp[4].o;
	sp[1].o = (jobject)((func_mindustry_entities_abilities_ShieldRegenFieldAbility_abilityStat_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_entities_abilities_ShieldRegenFieldAbility_abilityStat_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(40);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(41);
	sp[0].o = frame[1].o;
	sp[1].o = frame[0].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"pulseregen"_j));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp2 = jint(0);
	sp[4].o = (jobject)SM_arc_util_Strings_autoFixed_float_int_R_java_lang_String(ctx, ((jfloat)((mindustry_entities_abilities_ShieldRegenFieldAbility *) NULL_CHECK((frame[0].o)))->F_amount), (jint(2)));
	ARRAY_ACCESS(jobject, sp[3].o, temp2) = sp[4].o;
	sp[1].o = (jobject)((func_mindustry_entities_abilities_ShieldRegenFieldAbility_abilityStat_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_entities_abilities_ShieldRegenFieldAbility_abilityStat_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[2].o = frame[0].o;
	sp[3].o = ((jobject) createStringLiteral(ctx, u8"regen"_j));
	sp[4].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp3 = jint(0);
	sp[5].o = (jobject)SM_arc_util_Strings_autoFixed_float_int_R_java_lang_String(ctx, ((((jfloat)((mindustry_entities_abilities_ShieldRegenFieldAbility *) NULL_CHECK((frame[0].o)))->F_amount) * (jfloat(60.0f))) / ((jfloat)((mindustry_entities_abilities_ShieldRegenFieldAbility *) NULL_CHECK((frame[0].o)))->F_reload)), (jint(2)));
	ARRAY_ACCESS(jobject, sp[4].o, temp3) = sp[5].o;
	sp[2].o = (jobject)((func_mindustry_entities_abilities_ShieldRegenFieldAbility_abilityStat_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_entities_abilities_ShieldRegenFieldAbility_abilityStat_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[2].o, sp[3].o, sp[4].o);
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001[lightgray] ~ []\u0001"_j.string, 2, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(42);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(43);
	sp[0].o = frame[1].o;
	sp[1].o = frame[0].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"shield"_j));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp4 = jint(0);
	sp[4].o = (jobject)SM_arc_util_Strings_autoFixed_float_int_R_java_lang_String(ctx, ((jfloat)((mindustry_entities_abilities_ShieldRegenFieldAbility *) NULL_CHECK((frame[0].o)))->F_max), (jint(2)));
	ARRAY_ACCESS(jobject, sp[3].o, temp4) = sp[4].o;
	sp[1].o = (jobject)((func_mindustry_entities_abilities_ShieldRegenFieldAbility_abilityStat_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_entities_abilities_ShieldRegenFieldAbility_abilityStat_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(44);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_abilities_ShieldRegenFieldAbility_update_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/abilities/ShieldRegenFieldAbility:update", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(48);
	sp[0].o = frame[0].o;
	((mindustry_entities_abilities_ShieldRegenFieldAbility *) NULL_CHECK(sp[0].o))->F_timer = (((jfloat)((mindustry_entities_abilities_ShieldRegenFieldAbility *) NULL_CHECK(sp[0].o))->F_timer) + (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta));
	LINE_NUMBER(50);
	if ((floatCompare(((jfloat)((mindustry_entities_abilities_ShieldRegenFieldAbility *) NULL_CHECK((frame[0].o)))->F_timer), ((jfloat)((mindustry_entities_abilities_ShieldRegenFieldAbility *) NULL_CHECK((frame[0].o)))->F_reload), -1)) < 0) goto label_2;
	}
	{
	LINE_NUMBER(51);
	((mindustry_entities_abilities_ShieldRegenFieldAbility *) NULL_CHECK((frame[0].o)))->F_applied = (jint(0));
	LINE_NUMBER(53);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_team;
	jfloat temp0 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_y;
	jfloat temp2 = (jfloat)((mindustry_entities_abilities_ShieldRegenFieldAbility *) NULL_CHECK((frame[0].o)))->F_range;
	{ /* InvokeDynamic */
		clinit_mindustry_entities_abilities_ShieldRegenFieldAbility_invoke_arc_func_Cons_1(ctx);
		auto proxy = (mindustry_entities_abilities_ShieldRegenFieldAbility_invoke_arc_func_Cons_1 *) gcAlloc(ctx, &class_mindustry_entities_abilities_ShieldRegenFieldAbility_invoke_arc_func_Cons_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_mindustry_entities_Units_nearby_mindustry_game_Team_float_float_float_arc_func_Cons(ctx, sp[0].o, temp0, temp1, temp2, sp[1].o);
	LINE_NUMBER(62);
	if (((jint)((mindustry_entities_abilities_ShieldRegenFieldAbility *) NULL_CHECK((frame[0].o)))->F_applied) == 0) goto label_6;
	}
	{
	LINE_NUMBER(63);
	sp[0].o = (jobject)((mindustry_entities_abilities_ShieldRegenFieldAbility *) NULL_CHECK((frame[0].o)))->F_activeEffect;
	jfloat temp0 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_y;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_type;
	sp[1].o = (jobject)((func_mindustry_type_UnitType_shieldColor_mindustry_gen_Unit_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_type_UnitType_shieldColor_mindustry_gen_Unit_R_arc_graphics_Color])(ctx, sp[1].o, (frame[1].o));
	((func_mindustry_entities_Effect_at_float_float_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_arc_graphics_Color])(ctx, sp[0].o, temp0, temp1, sp[1].o);
	LINE_NUMBER(64);
	sp[0].o = (jobject)((mindustry_entities_abilities_ShieldRegenFieldAbility *) NULL_CHECK((frame[0].o)))->F_sound;
	sp[1].o = frame[1].o;
	jfloat temp2 = jfloat(1);
	jfloat temp3 = (jfloat)SM_arc_math_Mathf_range_float_R_float(ctx, (jfloat(0.1f)));
	jint temp4 = (jint)((func_arc_audio_Sound_at_arc_math_geom_Position_float_float_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Sound_at_arc_math_geom_Position_float_float_R_int])(ctx, sp[0].o, sp[1].o, (temp2 + temp3), ((jfloat)((mindustry_entities_abilities_ShieldRegenFieldAbility *) NULL_CHECK((frame[0].o)))->F_soundVolume));
	}
label_6:;
	{
	LINE_NUMBER(67);
	((mindustry_entities_abilities_ShieldRegenFieldAbility *) NULL_CHECK((frame[0].o)))->F_timer = (jfloat(0));
	}
label_2:;
	LINE_NUMBER(69);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_abilities_ShieldRegenFieldAbility_lambda$update$0_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/abilities/ShieldRegenFieldAbility:lambda$update$0", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(54);
	if ((floatCompare(((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_shield), ((jfloat)((mindustry_entities_abilities_ShieldRegenFieldAbility *) NULL_CHECK((frame[0].o)))->F_max), 1)) >= 0) goto label_1;
	}
	{
	LINE_NUMBER(55);
	sp[0].o = frame[1].o;
	jfloat temp0 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, (((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_shield) + ((jfloat)((mindustry_entities_abilities_ShieldRegenFieldAbility *) NULL_CHECK((frame[0].o)))->F_amount)), ((jfloat)((mindustry_entities_abilities_ShieldRegenFieldAbility *) NULL_CHECK((frame[0].o)))->F_max));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_shield = temp0;
	LINE_NUMBER(56);
	((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_shieldAlpha = (jfloat(1));
	LINE_NUMBER(57);
	sp[0].o = (jobject)((mindustry_entities_abilities_ShieldRegenFieldAbility *) NULL_CHECK((frame[0].o)))->F_applyEffect;
	jfloat temp1 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_x;
	jfloat temp2 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_y;
	jfloat temp3 = jfloat(0);
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_type;
	sp[1].o = (jobject)((func_mindustry_type_UnitType_shieldColor_mindustry_gen_Unit_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_type_UnitType_shieldColor_mindustry_gen_Unit_R_arc_graphics_Color])(ctx, sp[1].o, (frame[1].o));
	jobject temp4 = sp[1].o;
	sp[1].f = temp1;
	sp[2].f = temp2;
	sp[3].f = temp3;
	sp[4].o = temp4;
	sp += 5;
	if (((jint)((mindustry_entities_abilities_ShieldRegenFieldAbility *) NULL_CHECK((frame[0].o)))->F_parentizeEffects) == 0) goto label_5;
	}
	INST_ALOAD(1);
	goto label_6;
label_5:;
	INST_ACONST_NULL();
label_6:;
	{
	sp -= 6;
	((func_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color_java_lang_Object])(ctx, sp[0].o, sp[1].f, sp[2].f, sp[3].f, sp[4].o, sp[5].o);
	LINE_NUMBER(58);
	((mindustry_entities_abilities_ShieldRegenFieldAbility *) NULL_CHECK((frame[0].o)))->F_applied = (jint(1));
	}
label_1:;
	LINE_NUMBER(60);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_entities_abilities_ShieldRegenFieldAbility[] {
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
	(void *) M_mindustry_entities_abilities_ShieldRegenFieldAbility_update_mindustry_gen_Unit,
	(void *) M_mindustry_entities_abilities_Ability_draw_mindustry_gen_Unit,
	(void *) M_mindustry_entities_abilities_Ability_death_mindustry_gen_Unit,
	(void *) M_mindustry_entities_abilities_Ability_created_mindustry_gen_Unit,
	(void *) M_mindustry_entities_abilities_Ability_init_mindustry_type_UnitType,
	(void *) M_mindustry_entities_abilities_Ability_displayBars_mindustry_gen_Unit_arc_scene_ui_layout_Table,
	(void *) M_mindustry_entities_abilities_Ability_display_arc_scene_ui_layout_Table,
	(void *) M_mindustry_entities_abilities_ShieldRegenFieldAbility_addStats_arc_scene_ui_layout_Table,
	(void *) M_mindustry_entities_abilities_Ability_abilityStat_java_lang_String_Array1_java_lang_Object_R_java_lang_String,
	(void *) M_mindustry_entities_abilities_Ability_copy_R_mindustry_entities_abilities_Ability,
	(void *) M_mindustry_entities_abilities_Ability_localized_R_java_lang_String,
	(void *) M_mindustry_entities_abilities_Ability_getBundle_R_java_lang_String,
	(void *) M_mindustry_entities_abilities_Ability_lambda$display$0_arc_scene_ui_layout_Table,
	(void *) M_mindustry_entities_abilities_ShieldRegenFieldAbility_lambda$update$0_mindustry_gen_Unit,
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
	{ "lambda$update$0", "(Lmindustry/gen/Unit;)V" },
};

static FieldMetadata fields[] {
	{ "amount", &class_float, offsetof(mindustry_entities_abilities_ShieldRegenFieldAbility, F_amount), "F", 1 },
	{ "max", &class_float, offsetof(mindustry_entities_abilities_ShieldRegenFieldAbility, F_max), "F", 1 },
	{ "reload", &class_float, offsetof(mindustry_entities_abilities_ShieldRegenFieldAbility, F_reload), "F", 1 },
	{ "range", &class_float, offsetof(mindustry_entities_abilities_ShieldRegenFieldAbility, F_range), "F", 1 },
	{ "applyEffect", &class_mindustry_entities_Effect, offsetof(mindustry_entities_abilities_ShieldRegenFieldAbility, F_applyEffect), "Lmindustry/entities/Effect;", 1 },
	{ "activeEffect", &class_mindustry_entities_Effect, offsetof(mindustry_entities_abilities_ShieldRegenFieldAbility, F_activeEffect), "Lmindustry/entities/Effect;", 1 },
	{ "sound", &class_arc_audio_Sound, offsetof(mindustry_entities_abilities_ShieldRegenFieldAbility, F_sound), "Larc/audio/Sound;", 1 },
	{ "soundVolume", &class_float, offsetof(mindustry_entities_abilities_ShieldRegenFieldAbility, F_soundVolume), "F", 1 },
	{ "parentizeEffects", &class_boolean, offsetof(mindustry_entities_abilities_ShieldRegenFieldAbility, F_parentizeEffects), "Z", 1 },
	{ "timer", &class_float, offsetof(mindustry_entities_abilities_ShieldRegenFieldAbility, F_timer), "F", 4 },
	{ "applied", &class_boolean, offsetof(mindustry_entities_abilities_ShieldRegenFieldAbility, F_applied), "Z", 4 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_entities_abilities_ShieldRegenFieldAbility, 0, "()V", 0 },
	{ "<init>", (intptr_t) init_mindustry_entities_abilities_ShieldRegenFieldAbility_float_float_float_float, 0, "(FFFF)V", 1 },
	{ "addStats", (intptr_t) M_mindustry_entities_abilities_ShieldRegenFieldAbility_addStats_arc_scene_ui_layout_Table, VTABLE_mindustry_entities_abilities_ShieldRegenFieldAbility_addStats_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 1 },
	{ "update", (intptr_t) M_mindustry_entities_abilities_ShieldRegenFieldAbility_update_mindustry_gen_Unit, VTABLE_mindustry_entities_abilities_ShieldRegenFieldAbility_update_mindustry_gen_Unit, "(Lmindustry/gen/Unit;)V", 1 },
	{ "lambda$update$0", (intptr_t) M_mindustry_entities_abilities_ShieldRegenFieldAbility_lambda$update$0_mindustry_gen_Unit, VTABLE_mindustry_entities_abilities_ShieldRegenFieldAbility_lambda$update$0_mindustry_gen_Unit, "(Lmindustry/gen/Unit;)V", 4098 },
};

Class class_mindustry_entities_abilities_ShieldRegenFieldAbility{
		.nativeName = (intptr_t) "mindustry/entities/abilities/ShieldRegenFieldAbility",
		.parentClass = (intptr_t) &class_mindustry_entities_abilities_Ability,
		.size = sizeof(mindustry_entities_abilities_ShieldRegenFieldAbility),
		.classVtable = (intptr_t) vtable_mindustry_entities_abilities_ShieldRegenFieldAbility,
		.staticInitializer = (intptr_t) clinit_mindustry_entities_abilities_ShieldRegenFieldAbility,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_entities_abilities_ShieldRegenFieldAbility,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 11,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 25,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_entities_abilities_ShieldRegenFieldAbility = registerClass(&class_mindustry_entities_abilities_ShieldRegenFieldAbility);

}
