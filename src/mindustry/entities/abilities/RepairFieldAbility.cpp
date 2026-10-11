#include "mindustry/entities/abilities/RepairFieldAbility.h"
#include "java/lang/Integer.h"
#include "mindustry/entities/abilities/RepairFieldAbility_invoke_arc_func_Cons_1.h"
#include "mindustry/entities/abilities/RepairFieldAbility_invoke_arc_func_Floatf_1.h"
#include "mindustry/entities/abilities/RepairFieldAbility.h"
#include "arc/func/Cons.h"
#include "mindustry/entities/Effect.h"
#include "mindustry/content/Fx.h"
#include "java/lang/String.h"
#include "mindustry/entities/abilities/Ability.h"
#include "arc/util/I18NBundle.h"
#include "arc/struct/Seq.h"
#include "arc/scene/ui/layout/Cell.h"
#include "mindustry/gen/Healthc.h"
#include "arc/math/geom/Position.h"
#include "java/lang/Math.h"
#include "arc/math/Mathf.h"
#include "arc/func/Floatf.h"
#include "arc/Core.h"
#include "mindustry/gen/Unit.h"
#include "mindustry/gen/Sounds.h"
#include "arc/scene/ui/layout/Table.h"
#include "arc/util/Time.h"
#include "mindustry/type/UnitType.h"
#include "java/lang/CharSequence.h"
#include "arc/util/Strings.h"
#include "java/lang/Object.h"
#include "arc/audio/Sound.h"
#include "mindustry/entities/Units.h"
#include "mindustry/game/Team.h"

extern "C" {

jobject SF_mindustry_entities_abilities_RepairFieldAbility_targets;

void mark_mindustry_entities_abilities_RepairFieldAbility(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_entities_abilities_RepairFieldAbility_targets)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_entities_abilities_RepairFieldAbility_targets)->clazz)->markFunction)((jobject) SF_mindustry_entities_abilities_RepairFieldAbility_targets, mark, depth + 1);
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
	auto self = (mindustry_entities_abilities_RepairFieldAbility *) object;
	if (self->F_healEffect)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_healEffect)->clazz)->markFunction)((jobject) self->F_healEffect, mark, depth + 1);
	if (self->F_activeEffect)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_activeEffect)->clazz)->markFunction)((jobject) self->F_activeEffect, mark, depth + 1);
	if (self->F_sound)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_sound)->clazz)->markFunction)((jobject) self->F_sound, mark, depth + 1);
}

void init_mindustry_entities_abilities_RepairFieldAbility(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/abilities/RepairFieldAbility:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_abilities_RepairFieldAbility(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(47);
	init_mindustry_entities_abilities_Ability(ctx, (frame[0].o));
	LINE_NUMBER(17);
	((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK((frame[0].o)))->F_amount = (jfloat(1));
	((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK((frame[0].o)))->F_reload = (jfloat(100.0f));
	((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK((frame[0].o)))->F_range = (jfloat(60.0f));
	((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK((frame[0].o)))->F_healPercent = (jfloat(0));
	LINE_NUMBER(18);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_heal;
	((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK(sp[0].o))->F_healEffect = (jref) sp[1].o;
	LINE_NUMBER(19);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_healWaveDynamic;
	((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK(sp[0].o))->F_activeEffect = (jref) sp[1].o;
	LINE_NUMBER(20);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_healWave;
	((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK(sp[0].o))->F_sound = (jref) sp[1].o;
	LINE_NUMBER(21);
	((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK((frame[0].o)))->F_soundVolume = (jfloat(0.5f));
	LINE_NUMBER(22);
	((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK((frame[0].o)))->F_parentizeEffects = (jint(0));
	LINE_NUMBER(24);
	((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK((frame[0].o)))->F_sameTypeHealMult = (jfloat(1));
	LINE_NUMBER(26);
	((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK((frame[0].o)))->F_maxTargets = (jint(-1));
	LINE_NUMBER(29);
	((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK((frame[0].o)))->F_smartHeal = (jint(0));
	LINE_NUMBER(31);
	((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK((frame[0].o)))->F_smartHealPercent = (jfloat(0));
	LINE_NUMBER(33);
	((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK((frame[0].o)))->F_smartHealStrength = (jfloat(1));
	LINE_NUMBER(35);
	((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK((frame[0].o)))->F_smartDowntime = (jfloat(480.0f));
	LINE_NUMBER(37);
	((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK((frame[0].o)))->F_smartInterval = (jfloat(20.0f));
	LINE_NUMBER(39);
	((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK((frame[0].o)))->F_randDesync = (jfloat(-1.0f));
	LINE_NUMBER(47);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_entities_abilities_RepairFieldAbility_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/abilities/RepairFieldAbility:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_abilities_RepairFieldAbility(ctx);
	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(49);
	init_mindustry_entities_abilities_Ability(ctx, (frame[0].o));
	LINE_NUMBER(17);
	((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK((frame[0].o)))->F_amount = (jfloat(1));
	((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK((frame[0].o)))->F_reload = (jfloat(100.0f));
	((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK((frame[0].o)))->F_range = (jfloat(60.0f));
	((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK((frame[0].o)))->F_healPercent = (jfloat(0));
	LINE_NUMBER(18);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_heal;
	((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK(sp[0].o))->F_healEffect = (jref) sp[1].o;
	LINE_NUMBER(19);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_healWaveDynamic;
	((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK(sp[0].o))->F_activeEffect = (jref) sp[1].o;
	LINE_NUMBER(20);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_healWave;
	((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK(sp[0].o))->F_sound = (jref) sp[1].o;
	LINE_NUMBER(21);
	((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK((frame[0].o)))->F_soundVolume = (jfloat(0.5f));
	LINE_NUMBER(22);
	((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK((frame[0].o)))->F_parentizeEffects = (jint(0));
	LINE_NUMBER(24);
	((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK((frame[0].o)))->F_sameTypeHealMult = (jfloat(1));
	LINE_NUMBER(26);
	((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK((frame[0].o)))->F_maxTargets = (jint(-1));
	LINE_NUMBER(29);
	((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK((frame[0].o)))->F_smartHeal = (jint(0));
	LINE_NUMBER(31);
	((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK((frame[0].o)))->F_smartHealPercent = (jfloat(0));
	LINE_NUMBER(33);
	((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK((frame[0].o)))->F_smartHealStrength = (jfloat(1));
	LINE_NUMBER(35);
	((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK((frame[0].o)))->F_smartDowntime = (jfloat(480.0f));
	LINE_NUMBER(37);
	((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK((frame[0].o)))->F_smartInterval = (jfloat(20.0f));
	LINE_NUMBER(39);
	((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK((frame[0].o)))->F_randDesync = (jfloat(-1.0f));
	LINE_NUMBER(50);
	((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK((frame[0].o)))->F_amount = (frame[1].f);
	LINE_NUMBER(51);
	((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK((frame[0].o)))->F_reload = (frame[2].f);
	LINE_NUMBER(52);
	((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK((frame[0].o)))->F_range = (frame[3].f);
	LINE_NUMBER(53);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_entities_abilities_RepairFieldAbility_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/abilities/RepairFieldAbility:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_abilities_RepairFieldAbility(ctx);
	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(54);
	init_mindustry_entities_abilities_Ability(ctx, (frame[0].o));
	LINE_NUMBER(17);
	((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK((frame[0].o)))->F_amount = (jfloat(1));
	((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK((frame[0].o)))->F_reload = (jfloat(100.0f));
	((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK((frame[0].o)))->F_range = (jfloat(60.0f));
	((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK((frame[0].o)))->F_healPercent = (jfloat(0));
	LINE_NUMBER(18);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_heal;
	((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK(sp[0].o))->F_healEffect = (jref) sp[1].o;
	LINE_NUMBER(19);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_healWaveDynamic;
	((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK(sp[0].o))->F_activeEffect = (jref) sp[1].o;
	LINE_NUMBER(20);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_healWave;
	((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK(sp[0].o))->F_sound = (jref) sp[1].o;
	LINE_NUMBER(21);
	((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK((frame[0].o)))->F_soundVolume = (jfloat(0.5f));
	LINE_NUMBER(22);
	((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK((frame[0].o)))->F_parentizeEffects = (jint(0));
	LINE_NUMBER(24);
	((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK((frame[0].o)))->F_sameTypeHealMult = (jfloat(1));
	LINE_NUMBER(26);
	((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK((frame[0].o)))->F_maxTargets = (jint(-1));
	LINE_NUMBER(29);
	((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK((frame[0].o)))->F_smartHeal = (jint(0));
	LINE_NUMBER(31);
	((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK((frame[0].o)))->F_smartHealPercent = (jfloat(0));
	LINE_NUMBER(33);
	((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK((frame[0].o)))->F_smartHealStrength = (jfloat(1));
	LINE_NUMBER(35);
	((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK((frame[0].o)))->F_smartDowntime = (jfloat(480.0f));
	LINE_NUMBER(37);
	((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK((frame[0].o)))->F_smartInterval = (jfloat(20.0f));
	LINE_NUMBER(39);
	((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK((frame[0].o)))->F_randDesync = (jfloat(-1.0f));
	LINE_NUMBER(55);
	((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK((frame[0].o)))->F_amount = (frame[1].f);
	LINE_NUMBER(56);
	((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK((frame[0].o)))->F_reload = (frame[2].f);
	LINE_NUMBER(57);
	((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK((frame[0].o)))->F_range = (frame[3].f);
	LINE_NUMBER(58);
	((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK((frame[0].o)))->F_healPercent = (frame[4].f);
	LINE_NUMBER(59);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_abilities_RepairFieldAbility_addStats_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/abilities/RepairFieldAbility:addStats", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(63);
	M_mindustry_entities_abilities_Ability_addStats_arc_scene_ui_layout_Table(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(64);
	sp[0].o = frame[1].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"bullet.range"_j));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[4].o = (jobject)SM_arc_util_Strings_autoFixed_float_int_R_java_lang_String(ctx, (((jfloat)((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK((frame[0].o)))->F_range) / (jfloat(8.0f))), (jint(2)));
	ARRAY_ACCESS(jobject, sp[3].o, temp0) = sp[4].o;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(65);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(66);
	sp[0].o = frame[1].o;
	sp[1].o = frame[0].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"firingrate"_j));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp1 = jint(0);
	sp[4].o = (jobject)SM_arc_util_Strings_autoFixed_float_int_R_java_lang_String(ctx, ((jfloat(60.0f)) / ((jfloat)((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK((frame[0].o)))->F_reload)), (jint(2)));
	ARRAY_ACCESS(jobject, sp[3].o, temp1) = sp[4].o;
	sp[1].o = (jobject)((func_mindustry_entities_abilities_RepairFieldAbility_abilityStat_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_entities_abilities_RepairFieldAbility_abilityStat_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(67);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(68);
	if ((floatCompare(((jfloat)((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK((frame[0].o)))->F_amount), (jfloat(0)), -1)) <= 0) goto label_6;
	}
	{
	LINE_NUMBER(69);
	sp[0].o = frame[1].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"bullet.healamount"_j));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[4].o = (jobject)SM_arc_util_Strings_autoFixed_float_int_R_java_lang_String(ctx, ((jfloat)((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK((frame[0].o)))->F_amount), (jint(2)));
	ARRAY_ACCESS(jobject, sp[3].o, temp0) = sp[4].o;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[2].o = frame[0].o;
	sp[3].o = ((jobject) createStringLiteral(ctx, u8"repairspeed"_j));
	sp[4].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp1 = jint(0);
	sp[5].o = (jobject)SM_arc_util_Strings_autoFixed_float_int_R_java_lang_String(ctx, ((((jfloat)((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK((frame[0].o)))->F_amount) * (jfloat(60.0f))) / ((jfloat)((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK((frame[0].o)))->F_reload)), (jint(2)));
	ARRAY_ACCESS(jobject, sp[4].o, temp1) = sp[5].o;
	sp[2].o = (jobject)((func_mindustry_entities_abilities_RepairFieldAbility_abilityStat_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_entities_abilities_RepairFieldAbility_abilityStat_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[2].o, sp[3].o, sp[4].o);
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001[lightgray] ~ []\u0001"_j.string, 2, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(70);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	}
label_6:;
	{
	LINE_NUMBER(72);
	if ((floatCompare(((jfloat)((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK((frame[0].o)))->F_healPercent), (jfloat(0)), -1)) <= 0) goto label_9;
	}
	{
	LINE_NUMBER(73);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(74);
	sp[0].o = frame[1].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"bullet.healpercent"_j));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[4].o = (jobject)SM_arc_util_Strings_autoFixed_float_int_R_java_lang_String(ctx, ((jfloat)((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK((frame[0].o)))->F_healPercent), (jint(2)));
	ARRAY_ACCESS(jobject, sp[3].o, temp0) = sp[4].o;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[2].o = frame[0].o;
	sp[3].o = ((jobject) createStringLiteral(ctx, u8"repairspeed"_j));
	sp[4].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp1 = jint(0);
	sp[5].o = (jobject)SM_arc_util_Strings_autoFixed_float_int_R_java_lang_String(ctx, ((((jfloat)((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK((frame[0].o)))->F_healPercent) * (jfloat(60.0f))) / ((jfloat)((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK((frame[0].o)))->F_reload)), (jint(2)));
	sp[5].o = (jobject)concatStringsRecipe(ctx, u8"\u0001%"_j.string, 1, sp[5].o);
	ARRAY_ACCESS(jobject, sp[4].o, temp1) = sp[5].o;
	sp[2].o = (jobject)((func_mindustry_entities_abilities_RepairFieldAbility_abilityStat_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_entities_abilities_RepairFieldAbility_abilityStat_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[2].o, sp[3].o, sp[4].o);
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001[lightgray] ~ []\u0001"_j.string, 2, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	}
label_9:;
	{
	LINE_NUMBER(76);
	if ((floatCompare(((jfloat)((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK((frame[0].o)))->F_sameTypeHealMult), (jfloat(1)), -1)) == 0) goto label_12;
	}
	{
	LINE_NUMBER(77);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(78);
	sp[0].o = frame[1].o;
	sp[1].o = frame[0].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"sametypehealmultiplier"_j));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[4].o = sp[3].o;
	sp[5].i = temp0;
	sp += 6;
	if ((floatCompare(((jfloat)((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK((frame[0].o)))->F_sameTypeHealMult), (jfloat(1)), 1)) >= 0) goto label_15;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"[negstat]"_j));
	goto label_16;
label_15:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
label_16:;
	{
	sp -= 7;
	sp[4].o = (jobject)SM_arc_util_Strings_autoFixed_float_int_R_java_lang_String(ctx, (((jfloat)((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK((frame[0].o)))->F_sameTypeHealMult) * (jfloat(100.0f))), (jint(2)));
	sp[4].o = (jobject)concatStringsRecipe(ctx, u8"\u0001\u0001"_j.string, 2, sp[6].o, sp[4].o);
	ARRAY_ACCESS(jobject, sp[3].o, sp[5].i) = sp[4].o;
	sp[1].o = (jobject)((func_mindustry_entities_abilities_RepairFieldAbility_abilityStat_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_entities_abilities_RepairFieldAbility_abilityStat_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	}
label_12:;
	{
	LINE_NUMBER(80);
	if (((jint)((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK((frame[0].o)))->F_maxTargets) <= 0) goto label_17;
	}
	{
	LINE_NUMBER(81);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(82);
	sp[0].o = frame[1].o;
	sp[1].o = frame[0].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"maxtargets"_j));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[4].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, ((jint)((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK((frame[0].o)))->F_maxTargets));
	ARRAY_ACCESS(jobject, sp[3].o, temp0) = sp[4].o;
	sp[1].o = (jobject)((func_mindustry_entities_abilities_RepairFieldAbility_abilityStat_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_entities_abilities_RepairFieldAbility_abilityStat_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	}
label_17:;
	LINE_NUMBER(84);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_abilities_RepairFieldAbility_update_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[19];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/abilities/RepairFieldAbility:update", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(88);
	sp[0].o = frame[0].o;
	((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK(sp[0].o))->F_healTimer = (((jfloat)((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK(sp[0].o))->F_healTimer) + (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta));
	LINE_NUMBER(89);
	sp[0].o = frame[0].o;
	sp += 1;
	if (((jint)((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK((frame[0].o)))->F_smartHeal) == 0) goto label_2;
	}
	{
	if ((floatCompare(((jfloat)((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK((frame[0].o)))->F_healthChange), ((jfloat)((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK((frame[0].o)))->F_healthMissing), -1)) < 0) goto label_2;
	}
	{
	if ((floatCompare(((jfloat)((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK((frame[0].o)))->F_healthMissing), (jfloat(0)), -1)) <= 0) goto label_2;
	}
	{
	jfloat temp0 = ((jfloat)((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK((frame[0].o)))->F_downTimer) + (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta);
	sp[0].f = temp0;
	sp += 1;
	goto label_3;
	}
label_2:;
	INST_FCONST(0);
label_3:;
	{
	sp -= 2;
	((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK(sp[0].o))->F_downTimer = sp[1].f;
	LINE_NUMBER(91);
	if ((floatCompare(((jfloat)((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK((frame[0].o)))->F_healTimer), ((jfloat)((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK((frame[0].o)))->F_reload), -1)) < 0) goto label_5;
	}
	{
	LINE_NUMBER(92);
	clinit_mindustry_entities_abilities_RepairFieldAbility(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_abilities_RepairFieldAbility_targets;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(93);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp0 = jint(0);
	((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK(sp[1].o))->F_healNow = temp0;
	((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK(sp[0].o))->F_hasHealed = temp0;
	LINE_NUMBER(94);
	((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK((frame[0].o)))->F_healthChange = ((jfloat)((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK((frame[0].o)))->F_healthMissing);
	LINE_NUMBER(95);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp[2].o = frame[0].o;
	jfloat temp3 = jfloat(0);
	((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK(sp[2].o))->F_sumTypeMult = temp3;
	((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK(sp[1].o))->F_sumMaxHealth = temp3;
	((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK(sp[0].o))->F_healthMissing = temp3;
	LINE_NUMBER(97);
	if (((jint)((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK((frame[0].o)))->F_maxTargets) < 0) goto label_11;
	}
	INST_ICONST(1);
	goto label_12;
label_11:;
	INST_ICONST(0);
label_12:;
	{
	sp -= 1;
	frame[2].i = sp[0].i;
	LINE_NUMBER(98);
	frame[3].f = (((jfloat)((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK((frame[0].o)))->F_healPercent) / (jfloat(100.0f)));
	LINE_NUMBER(100);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_team;
	jfloat temp0 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_y;
	jfloat temp2 = (jfloat)((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK((frame[0].o)))->F_range;
	{ /* InvokeDynamic */
		clinit_mindustry_entities_abilities_RepairFieldAbility_invoke_arc_func_Cons_1(ctx);
		auto proxy = (mindustry_entities_abilities_RepairFieldAbility_invoke_arc_func_Cons_1 *) gcAlloc(ctx, &class_mindustry_entities_abilities_RepairFieldAbility_invoke_arc_func_Cons_1);
		proxy->F_field2 = (jref) (frame[1].o);
		proxy->F_field1 = (frame[2].i);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_mindustry_entities_Units_nearby_mindustry_game_Team_float_float_float_arc_func_Cons(ctx, sp[0].o, temp0, temp1, temp2, sp[1].o);
	LINE_NUMBER(115);
	clinit_mindustry_entities_abilities_RepairFieldAbility(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_abilities_RepairFieldAbility_targets;
	frame[4].i = ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size);
	LINE_NUMBER(118);
	frame[5].f = (((jfloat)((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK((frame[0].o)))->F_amount) + (((frame[3].f) * ((jfloat)((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK((frame[0].o)))->F_sumMaxHealth)) * (((jfloat)((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK((frame[0].o)))->F_sumTypeMult) / (jfloat((frame[4].i))))));
	LINE_NUMBER(119);
	jfloat temp3 = ((jfloat)((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK((frame[0].o)))->F_healthMissing) * (jfloat(0.7f));
	jfloat temp4 = (jfloat)((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK((frame[0].o)))->F_healthMissing;
	sp[0].f = temp3;
	sp[1].f = temp4;
	sp += 2;
	if ((frame[2].i) == 0) goto label_18;
	}
	{
	jint temp0 = (jint)((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK((frame[0].o)))->F_maxTargets;
	sp[0].i = temp0;
	sp += 1;
	goto label_19;
	}
label_18:;
	INST_ILOAD(4);
label_19:;
	{
	sp -= 3;
	frame[6].f = (((sp[0].f + ((sp[1].f / (jfloat(sp[2].i))) * (jfloat(0.3f)))) / ((jfloat)((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK((frame[0].o)))->F_smartHealStrength)) / (frame[5].f));
	LINE_NUMBER(121);
	if ((floatCompare((frame[6].f), (jfloat(1)), -1)) >= 0) goto label_21;
	}
	{
	if (((jint)((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK((frame[0].o)))->F_smartHeal) == 0) goto label_21;
	}
	{
	if (((jint)((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK((frame[0].o)))->F_healNow) != 0) goto label_21;
	}
	{
	if ((floatCompare(((jfloat)((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK((frame[0].o)))->F_downTimer), ((jfloat)((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK((frame[0].o)))->F_smartDowntime), -1)) < 0) goto label_22;
	}
label_21:;
	{
	LINE_NUMBER(124);
	if ((frame[2].i) == 0) goto label_23;
	}
	{
	LINE_NUMBER(125);
	if ((floatCompare(((jfloat)((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK((frame[0].o)))->F_sameTypeHealMult), (jfloat(1)), 1)) >= 0) goto label_25;
	}
	INST_ICONST(1);
	goto label_26;
label_25:;
	INST_ICONST(0);
label_26:;
	{
	sp -= 1;
	frame[7].i = sp[0].i;
	LINE_NUMBER(126);
	clinit_mindustry_entities_abilities_RepairFieldAbility(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_abilities_RepairFieldAbility_targets;
	{ /* InvokeDynamic */
		clinit_mindustry_entities_abilities_RepairFieldAbility_invoke_arc_func_Floatf_1(ctx);
		auto proxy = (mindustry_entities_abilities_RepairFieldAbility_invoke_arc_func_Floatf_1 *) gcAlloc(ctx, &class_mindustry_entities_abilities_RepairFieldAbility_invoke_arc_func_Floatf_1);
		proxy->F_field1 = (frame[7].i);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_sort_arc_func_Floatf_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_sort_arc_func_Floatf_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	}
label_23:;
	{
	LINE_NUMBER(129);
	if ((frame[2].i) == 0) goto label_28;
	}
	{
	jint temp0 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, (frame[4].i), ((jint)((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK((frame[0].o)))->F_maxTargets));
	sp[0].i = temp0;
	sp += 1;
	goto label_29;
	}
label_28:;
	INST_ILOAD(4);
label_29:;
	{
	sp -= 1;
	frame[7].i = sp[0].i;
	LINE_NUMBER(130);
	frame[8].i = (jint(0));
	}
label_31:;
	{
	if ((frame[8].i) >= (frame[7].i)) goto label_32;
	}
	{
	LINE_NUMBER(131);
	clinit_mindustry_entities_abilities_RepairFieldAbility(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_abilities_RepairFieldAbility_targets;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[8].i));
	frame[9].o = (checkCast(ctx, &class_mindustry_gen_Unit, sp[0].o));
	LINE_NUMBER(132);
	jint temp0 = (jint)((func_mindustry_gen_Unit_damaged_R_boolean) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_mindustry_gen_Unit_damaged_R_boolean])(ctx, (frame[9].o));
	if (temp0 == 0) goto label_35;
	}
	{
	LINE_NUMBER(133);
	jfloat temp0 = (jfloat)((func_mindustry_gen_Unit_maxHealth_R_float) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_mindustry_gen_Unit_maxHealth_R_float])(ctx, (frame[9].o));
	frame[10].f = temp0;
	LINE_NUMBER(134);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_type;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[9].o)))->F_type;
	if (sp[0].o != sp[1].o) goto label_38;
	}
	{
	jfloat temp0 = (jfloat)((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK((frame[0].o)))->F_sameTypeHealMult;
	sp[0].f = temp0;
	sp += 1;
	goto label_39;
	}
label_38:;
	INST_FCONST(1);
label_39:;
	{
	sp -= 1;
	frame[11].f = sp[0].f;
	LINE_NUMBER(135);
	((func_mindustry_gen_Unit_heal_float) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_mindustry_gen_Unit_heal_float])(ctx, (frame[9].o), ((((jfloat)((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK((frame[0].o)))->F_amount) + ((frame[3].f) * (frame[10].f))) * (frame[11].f)));
	LINE_NUMBER(136);
	sp[0].o = (jobject)((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK((frame[0].o)))->F_healEffect;
	((func_mindustry_entities_Effect_at_arc_math_geom_Position_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_arc_math_geom_Position_boolean])(ctx, sp[0].o, (frame[9].o), ((jint)((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK((frame[0].o)))->F_parentizeEffects));
	LINE_NUMBER(137);
	((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK((frame[0].o)))->F_hasHealed = (jint(1));
	}
label_35:;
	{
	LINE_NUMBER(130);
	INST_IINC(8, 1);
	goto label_31;
	}
label_32:;
	{
	LINE_NUMBER(140);
	if (((jint)((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK((frame[0].o)))->F_hasHealed) == 0) goto label_43;
	}
	{
	LINE_NUMBER(141);
	((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK((frame[0].o)))->F_healTimer = (jfloat(0));
	LINE_NUMBER(142);
	sp[0].o = (jobject)((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK((frame[0].o)))->F_activeEffect;
	((func_mindustry_entities_Effect_at_arc_math_geom_Position_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_arc_math_geom_Position_float])(ctx, sp[0].o, (frame[1].o), ((jfloat)((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK((frame[0].o)))->F_range));
	LINE_NUMBER(143);
	sp[0].o = (jobject)((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK((frame[0].o)))->F_sound;
	sp[1].o = frame[1].o;
	jfloat temp0 = jfloat(1);
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_range_float_R_float(ctx, (jfloat(0.1f)));
	jint temp2 = (jint)((func_arc_audio_Sound_at_arc_math_geom_Position_float_float_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Sound_at_arc_math_geom_Position_float_float_R_int])(ctx, sp[0].o, sp[1].o, (temp0 + temp1), ((jfloat)((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK((frame[0].o)))->F_soundVolume));
	}
label_43:;
	LINE_NUMBER(147);
	goto label_5;
label_22:;
	{
	if (((jint)((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK((frame[0].o)))->F_smartHeal) == 0) goto label_47;
	}
	INST_ILOAD(4);
	if ((--sp)->i <= 0) goto label_47;
	{
	LINE_NUMBER(148);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((floatCompare(((jfloat)((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK((frame[0].o)))->F_reload), ((jfloat(2)) * ((jfloat)((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK((frame[0].o)))->F_smartInterval)), -1)) < 0) goto label_49;
	}
	{
	jfloat temp0 = ((jfloat)((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK((frame[0].o)))->F_reload) - ((jfloat)((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK((frame[0].o)))->F_smartInterval);
	sp[0].f = temp0;
	sp += 1;
	goto label_50;
	}
label_49:;
	INST_ALOAD(0);
	sp[-1].f = ((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK(sp[-1].o))->F_smartInterval;
label_50:;
	sp -= 2;
	((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK(sp[0].o))->F_healTimer = sp[1].f;
	goto label_5;
label_47:;
	{
	LINE_NUMBER(149);
	if ((floatCompare(((jfloat)((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK((frame[0].o)))->F_randDesync), (jfloat(0)), -1)) <= 0) goto label_51;
	}
	{
	LINE_NUMBER(150);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_random_float_R_float(ctx, ((jfloat)((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK((frame[0].o)))->F_randDesync));
	((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK(sp[0].o))->F_healTimer = (temp0 * ((jfloat)((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK((frame[0].o)))->F_reload));
	goto label_5;
	}
label_51:;
	{
	LINE_NUMBER(152);
	((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK((frame[0].o)))->F_healTimer = (jfloat(0));
	}
label_5:;
	LINE_NUMBER(155);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jfloat SM_mindustry_entities_abilities_RepairFieldAbility_lambda$update$1_mindustry_gen_Unit_boolean_mindustry_gen_Unit_R_float(jcontext ctx, jobject param0, jbool param1, jobject param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/abilities/RepairFieldAbility:lambda$update$1", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_abilities_RepairFieldAbility(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(126);
	jfloat temp0 = (jfloat)((func_mindustry_gen_Unit_dst2_float_float_R_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_gen_Unit_dst2_float_float_R_float])(ctx, (frame[2].o), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y));
	sp[0].f = temp0;
	sp += 1;
	if ((frame[1].i) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_mindustry_gen_Unit_type_R_mindustry_type_UnitType) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_gen_Unit_type_R_mindustry_type_UnitType])(ctx, (frame[2].o));
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	(sp++)->f = jfloat(6400.0f);
	goto label_2;
label_1:;
	INST_FCONST(0);
label_2:;
	INST_FADD();
	popStackFrame(ctx);
	INST_FRETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_abilities_RepairFieldAbility_lambda$update$0_boolean_mindustry_gen_Unit_mindustry_gen_Unit(jcontext ctx, jobject self, jbool param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/abilities/RepairFieldAbility:lambda$update$0", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(102);
	if ((frame[1].i) == 0) goto label_1;
	}
	{
	clinit_mindustry_entities_abilities_RepairFieldAbility(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_abilities_RepairFieldAbility_targets;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) < (((jint)((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK((frame[0].o)))->F_maxTargets) + (jint(2)))) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(104);
	jint temp0 = (jint)((func_mindustry_gen_Unit_damaged_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_gen_Unit_damaged_R_boolean])(ctx, (frame[3].o));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(105);
	clinit_mindustry_entities_abilities_RepairFieldAbility(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_abilities_RepairFieldAbility_targets;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[3].o));
	LINE_NUMBER(106);
	if (((jint)((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK((frame[0].o)))->F_smartHeal) == 0) goto label_2;
	}
	{
	LINE_NUMBER(107);
	jfloat temp0 = (jfloat)((func_mindustry_gen_Unit_maxHealth_R_float) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_gen_Unit_maxHealth_R_float])(ctx, (frame[3].o));
	frame[4].f = temp0;
	LINE_NUMBER(108);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK(sp[0].o))->F_healthMissing;
	jfloat temp2 = frame[4].f;
	jfloat temp3 = (jfloat)((func_mindustry_gen_Unit_health_R_float) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_gen_Unit_health_R_float])(ctx, (frame[3].o));
	((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK(sp[0].o))->F_healthMissing = (temp1 + (temp2 - temp3));
	LINE_NUMBER(109);
	sp[0].o = frame[0].o;
	((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK(sp[0].o))->F_sumMaxHealth = (((jfloat)((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK(sp[0].o))->F_sumMaxHealth) + (frame[4].f));
	LINE_NUMBER(110);
	sp[0].o = frame[0].o;
	jfloat temp4 = (jfloat)((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK(sp[0].o))->F_sumTypeMult;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[2].o)))->F_type;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[3].o)))->F_type;
	jobject temp5 = sp[1].o;
	sp[1].f = temp4;
	sp += 2;
	if (temp5 != sp[0].o) goto label_9;
	}
	{
	jfloat temp0 = (jfloat)((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK((frame[0].o)))->F_sameTypeHealMult;
	sp[0].f = temp0;
	sp += 1;
	goto label_10;
	}
label_9:;
	INST_FCONST(1);
label_10:;
	{
	sp -= 3;
	((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK(sp[0].o))->F_sumTypeMult = (sp[1].f + sp[2].f);
	LINE_NUMBER(111);
	jfloat temp0 = (jfloat)((func_mindustry_gen_Unit_healthf_R_float) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_gen_Unit_healthf_R_float])(ctx, (frame[3].o));
	if ((floatCompare(temp0, ((jfloat)((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK((frame[0].o)))->F_smartHealPercent), 1)) >= 0) goto label_2;
	}
	{
	((mindustry_entities_abilities_RepairFieldAbility *) NULL_CHECK((frame[0].o)))->F_healNow = (jint(1));
	}
label_2:;
	LINE_NUMBER(114);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void clinit_mindustry_entities_abilities_RepairFieldAbility(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_entities_abilities_Ability(ctx);
	jtype frame[3];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/abilities/RepairFieldAbility:<clinit>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_abilities_RepairFieldAbility(ctx);
	{
	LINE_NUMBER(42);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq_int(ctx, sp[0].o, (50));
	clinit_mindustry_entities_abilities_RepairFieldAbility(ctx);
	SF_mindustry_entities_abilities_RepairFieldAbility_targets = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_entities_abilities_RepairFieldAbility[] {
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
	(void *) M_mindustry_entities_abilities_RepairFieldAbility_update_mindustry_gen_Unit,
	(void *) M_mindustry_entities_abilities_Ability_draw_mindustry_gen_Unit,
	(void *) M_mindustry_entities_abilities_Ability_death_mindustry_gen_Unit,
	(void *) M_mindustry_entities_abilities_Ability_created_mindustry_gen_Unit,
	(void *) M_mindustry_entities_abilities_Ability_init_mindustry_type_UnitType,
	(void *) M_mindustry_entities_abilities_Ability_displayBars_mindustry_gen_Unit_arc_scene_ui_layout_Table,
	(void *) M_mindustry_entities_abilities_Ability_display_arc_scene_ui_layout_Table,
	(void *) M_mindustry_entities_abilities_RepairFieldAbility_addStats_arc_scene_ui_layout_Table,
	(void *) M_mindustry_entities_abilities_Ability_abilityStat_java_lang_String_Array1_java_lang_Object_R_java_lang_String,
	(void *) M_mindustry_entities_abilities_Ability_copy_R_mindustry_entities_abilities_Ability,
	(void *) M_mindustry_entities_abilities_Ability_localized_R_java_lang_String,
	(void *) M_mindustry_entities_abilities_Ability_getBundle_R_java_lang_String,
	(void *) M_mindustry_entities_abilities_Ability_lambda$display$0_arc_scene_ui_layout_Table,
	(void *) M_mindustry_entities_abilities_RepairFieldAbility_lambda$update$0_boolean_mindustry_gen_Unit_mindustry_gen_Unit,
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
	{ "lambda$update$0", "(ZLmindustry/gen/Unit;Lmindustry/gen/Unit;)V" },
};

static FieldMetadata fields[] {
	{ "amount", &class_float, offsetof(mindustry_entities_abilities_RepairFieldAbility, F_amount), "F", 1 },
	{ "reload", &class_float, offsetof(mindustry_entities_abilities_RepairFieldAbility, F_reload), "F", 1 },
	{ "range", &class_float, offsetof(mindustry_entities_abilities_RepairFieldAbility, F_range), "F", 1 },
	{ "healPercent", &class_float, offsetof(mindustry_entities_abilities_RepairFieldAbility, F_healPercent), "F", 1 },
	{ "healEffect", &class_mindustry_entities_Effect, offsetof(mindustry_entities_abilities_RepairFieldAbility, F_healEffect), "Lmindustry/entities/Effect;", 1 },
	{ "activeEffect", &class_mindustry_entities_Effect, offsetof(mindustry_entities_abilities_RepairFieldAbility, F_activeEffect), "Lmindustry/entities/Effect;", 1 },
	{ "sound", &class_arc_audio_Sound, offsetof(mindustry_entities_abilities_RepairFieldAbility, F_sound), "Larc/audio/Sound;", 1 },
	{ "soundVolume", &class_float, offsetof(mindustry_entities_abilities_RepairFieldAbility, F_soundVolume), "F", 1 },
	{ "parentizeEffects", &class_boolean, offsetof(mindustry_entities_abilities_RepairFieldAbility, F_parentizeEffects), "Z", 1 },
	{ "sameTypeHealMult", &class_float, offsetof(mindustry_entities_abilities_RepairFieldAbility, F_sameTypeHealMult), "F", 1 },
	{ "maxTargets", &class_int, offsetof(mindustry_entities_abilities_RepairFieldAbility, F_maxTargets), "I", 1 },
	{ "smartHeal", &class_boolean, offsetof(mindustry_entities_abilities_RepairFieldAbility, F_smartHeal), "Z", 1 },
	{ "smartHealPercent", &class_float, offsetof(mindustry_entities_abilities_RepairFieldAbility, F_smartHealPercent), "F", 1 },
	{ "smartHealStrength", &class_float, offsetof(mindustry_entities_abilities_RepairFieldAbility, F_smartHealStrength), "F", 1 },
	{ "smartDowntime", &class_float, offsetof(mindustry_entities_abilities_RepairFieldAbility, F_smartDowntime), "F", 1 },
	{ "smartInterval", &class_float, offsetof(mindustry_entities_abilities_RepairFieldAbility, F_smartInterval), "F", 1 },
	{ "randDesync", &class_float, offsetof(mindustry_entities_abilities_RepairFieldAbility, F_randDesync), "F", 1 },
	{ "targets", &class_arc_struct_Seq, (intptr_t) &SF_mindustry_entities_abilities_RepairFieldAbility_targets, "Larc/struct/Seq;", 12 },
	{ "healTimer", &class_float, offsetof(mindustry_entities_abilities_RepairFieldAbility, F_healTimer), "F", 4 },
	{ "downTimer", &class_float, offsetof(mindustry_entities_abilities_RepairFieldAbility, F_downTimer), "F", 4 },
	{ "healthMissing", &class_float, offsetof(mindustry_entities_abilities_RepairFieldAbility, F_healthMissing), "F", 4 },
	{ "sumMaxHealth", &class_float, offsetof(mindustry_entities_abilities_RepairFieldAbility, F_sumMaxHealth), "F", 4 },
	{ "sumTypeMult", &class_float, offsetof(mindustry_entities_abilities_RepairFieldAbility, F_sumTypeMult), "F", 4 },
	{ "healthChange", &class_float, offsetof(mindustry_entities_abilities_RepairFieldAbility, F_healthChange), "F", 4 },
	{ "hasHealed", &class_boolean, offsetof(mindustry_entities_abilities_RepairFieldAbility, F_hasHealed), "Z", 4 },
	{ "healNow", &class_boolean, offsetof(mindustry_entities_abilities_RepairFieldAbility, F_healNow), "Z", 4 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_entities_abilities_RepairFieldAbility, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_mindustry_entities_abilities_RepairFieldAbility_float_float_float, 0, "(FFF)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_entities_abilities_RepairFieldAbility_float_float_float_float, 0, "(FFFF)V", 1 },
	{ "addStats", (intptr_t) M_mindustry_entities_abilities_RepairFieldAbility_addStats_arc_scene_ui_layout_Table, VTABLE_mindustry_entities_abilities_RepairFieldAbility_addStats_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 1 },
	{ "update", (intptr_t) M_mindustry_entities_abilities_RepairFieldAbility_update_mindustry_gen_Unit, VTABLE_mindustry_entities_abilities_RepairFieldAbility_update_mindustry_gen_Unit, "(Lmindustry/gen/Unit;)V", 1 },
	{ "lambda$update$1", (intptr_t) SM_mindustry_entities_abilities_RepairFieldAbility_lambda$update$1_mindustry_gen_Unit_boolean_mindustry_gen_Unit_R_float, 0, "(Lmindustry/gen/Unit;ZLmindustry/gen/Unit;)F", 4106 },
	{ "lambda$update$0", (intptr_t) M_mindustry_entities_abilities_RepairFieldAbility_lambda$update$0_boolean_mindustry_gen_Unit_mindustry_gen_Unit, VTABLE_mindustry_entities_abilities_RepairFieldAbility_lambda$update$0_boolean_mindustry_gen_Unit_mindustry_gen_Unit, "(ZLmindustry/gen/Unit;Lmindustry/gen/Unit;)V", 4098 },
	{ "<clinit>", (intptr_t) clinit_mindustry_entities_abilities_RepairFieldAbility, 0, "()V", 8 },
};

Class class_mindustry_entities_abilities_RepairFieldAbility{
		.nativeName = (intptr_t) "mindustry/entities/abilities/RepairFieldAbility",
		.parentClass = (intptr_t) &class_mindustry_entities_abilities_Ability,
		.size = sizeof(mindustry_entities_abilities_RepairFieldAbility),
		.classVtable = (intptr_t) vtable_mindustry_entities_abilities_RepairFieldAbility,
		.staticInitializer = (intptr_t) clinit_mindustry_entities_abilities_RepairFieldAbility,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_entities_abilities_RepairFieldAbility,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 26,
		.nativeFields = (intptr_t) fields,
		.methodCount = 8,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 25,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_entities_abilities_RepairFieldAbility = registerClass(&class_mindustry_entities_abilities_RepairFieldAbility);

}
