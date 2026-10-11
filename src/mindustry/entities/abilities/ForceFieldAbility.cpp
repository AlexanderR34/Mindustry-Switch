#include "mindustry/entities/abilities/ForceFieldAbility.h"
#include "mindustry/entities/abilities/ForceFieldAbility.h"
#include "java/lang/Integer.h"
#include "mindustry/ui/Bar.h"
#include "mindustry/game/Rules.h"
#include "mindustry/gen/Groups.h"
#include "arc/graphics/g2d/Lines.h"
#include "arc/graphics/Color.h"
#include "arc/graphics/g2d/Draw.h"
#include "arc/graphics/g2d/Fill.h"
#include "arc/func/Cons.h"
#include "mindustry/entities/Effect.h"
#include "java/lang/String.h"
#include "mindustry/content/Fx.h"
#include "mindustry/core/Renderer.h"
#include "mindustry/entities/abilities/Ability.h"
#include "arc/util/I18NBundle.h"
#include "arc/scene/ui/layout/Cell.h"
#include "arc/func/Floatp.h"
#include "arc/math/geom/Position.h"
#include "java/lang/Math.h"
#include "arc/math/Mathf.h"
#include "arc/Core.h"
#include "mindustry/gen/Unit.h"
#include "mindustry/gen/Sounds.h"
#include "arc/scene/ui/layout/Table.h"
#include "mindustry/entities/abilities/ForceFieldAbility_invoke_arc_func_Floatp_1.h"
#include "mindustry/entities/abilities/ForceFieldAbility_invoke_arc_func_Cons_1.h"
#include "arc/util/Time.h"
#include "mindustry/type/UnitType.h"
#include "java/lang/CharSequence.h"
#include "arc/util/Strings.h"
#include "mindustry/entities/EntityGroup.h"
#include "arc/math/geom/Intersector.h"
#include "java/lang/Object.h"
#include "mindustry/graphics/Pal.h"
#include "arc/scene/Element.h"
#include "mindustry/gen/Bullet.h"
#include "arc/audio/Sound.h"
#include "mindustry/game/Team.h"
#include "mindustry/entities/bullet/BulletType.h"
#include "mindustry/Vars.h"
#include "mindustry/core/GameState.h"

extern "C" {

jfloat SF_mindustry_entities_abilities_ForceFieldAbility_realRad;
jobject SF_mindustry_entities_abilities_ForceFieldAbility_paramUnit;
jobject SF_mindustry_entities_abilities_ForceFieldAbility_paramField;
jobject SF_mindustry_entities_abilities_ForceFieldAbility_shieldConsumer;

void mark_mindustry_entities_abilities_ForceFieldAbility(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_entities_abilities_ForceFieldAbility_paramUnit)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_entities_abilities_ForceFieldAbility_paramUnit)->clazz)->markFunction)((jobject) SF_mindustry_entities_abilities_ForceFieldAbility_paramUnit, mark, depth + 1);
		if (SF_mindustry_entities_abilities_ForceFieldAbility_paramField)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_entities_abilities_ForceFieldAbility_paramField)->clazz)->markFunction)((jobject) SF_mindustry_entities_abilities_ForceFieldAbility_paramField, mark, depth + 1);
		if (SF_mindustry_entities_abilities_ForceFieldAbility_shieldConsumer)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_entities_abilities_ForceFieldAbility_shieldConsumer)->clazz)->markFunction)((jobject) SF_mindustry_entities_abilities_ForceFieldAbility_shieldConsumer, mark, depth + 1);
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
	auto self = (mindustry_entities_abilities_ForceFieldAbility *) object;
	if (self->F_breakSound)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_breakSound)->clazz)->markFunction)((jobject) self->F_breakSound, mark, depth + 1);
	if (self->F_hitSound)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_hitSound)->clazz)->markFunction)((jobject) self->F_hitSound, mark, depth + 1);
}

void init_mindustry_entities_abilities_ForceFieldAbility_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/abilities/ForceFieldAbility:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_abilities_ForceFieldAbility(ctx);
	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(55);
	init_mindustry_entities_abilities_Ability(ctx, (frame[0].o));
	LINE_NUMBER(22);
	((mindustry_entities_abilities_ForceFieldAbility *) NULL_CHECK((frame[0].o)))->F_radius = (jfloat(60.0f));
	LINE_NUMBER(24);
	((mindustry_entities_abilities_ForceFieldAbility *) NULL_CHECK((frame[0].o)))->F_regen = (jfloat(0.1f));
	LINE_NUMBER(26);
	((mindustry_entities_abilities_ForceFieldAbility *) NULL_CHECK((frame[0].o)))->F_max = (jfloat(200.0f));
	LINE_NUMBER(28);
	((mindustry_entities_abilities_ForceFieldAbility *) NULL_CHECK((frame[0].o)))->F_cooldown = (jfloat(300.0f));
	LINE_NUMBER(30);
	((mindustry_entities_abilities_ForceFieldAbility *) NULL_CHECK((frame[0].o)))->F_sides = (6);
	LINE_NUMBER(32);
	((mindustry_entities_abilities_ForceFieldAbility *) NULL_CHECK((frame[0].o)))->F_rotation = (jfloat(0));
	LINE_NUMBER(34);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_shieldBreakSmall;
	((mindustry_entities_abilities_ForceFieldAbility *) NULL_CHECK(sp[0].o))->F_breakSound = (jref) sp[1].o;
	LINE_NUMBER(35);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_shieldHit;
	((mindustry_entities_abilities_ForceFieldAbility *) NULL_CHECK(sp[0].o))->F_hitSound = (jref) sp[1].o;
	LINE_NUMBER(36);
	((mindustry_entities_abilities_ForceFieldAbility *) NULL_CHECK((frame[0].o)))->F_hitSoundVolume = (jfloat(0.12f));
	LINE_NUMBER(40);
	((mindustry_entities_abilities_ForceFieldAbility *) NULL_CHECK((frame[0].o)))->F_wasBroken = (jint(1));
	LINE_NUMBER(56);
	((mindustry_entities_abilities_ForceFieldAbility *) NULL_CHECK((frame[0].o)))->F_radius = (frame[1].f);
	LINE_NUMBER(57);
	((mindustry_entities_abilities_ForceFieldAbility *) NULL_CHECK((frame[0].o)))->F_regen = (frame[2].f);
	LINE_NUMBER(58);
	((mindustry_entities_abilities_ForceFieldAbility *) NULL_CHECK((frame[0].o)))->F_max = (frame[3].f);
	LINE_NUMBER(59);
	((mindustry_entities_abilities_ForceFieldAbility *) NULL_CHECK((frame[0].o)))->F_cooldown = (frame[4].f);
	LINE_NUMBER(60);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_entities_abilities_ForceFieldAbility_float_float_float_float_int_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jint param4, jfloat param5) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/abilities/ForceFieldAbility:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_abilities_ForceFieldAbility(ctx);
	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].i = param4;
	frame[6].f = param5;
	{
	LINE_NUMBER(62);
	init_mindustry_entities_abilities_Ability(ctx, (frame[0].o));
	LINE_NUMBER(22);
	((mindustry_entities_abilities_ForceFieldAbility *) NULL_CHECK((frame[0].o)))->F_radius = (jfloat(60.0f));
	LINE_NUMBER(24);
	((mindustry_entities_abilities_ForceFieldAbility *) NULL_CHECK((frame[0].o)))->F_regen = (jfloat(0.1f));
	LINE_NUMBER(26);
	((mindustry_entities_abilities_ForceFieldAbility *) NULL_CHECK((frame[0].o)))->F_max = (jfloat(200.0f));
	LINE_NUMBER(28);
	((mindustry_entities_abilities_ForceFieldAbility *) NULL_CHECK((frame[0].o)))->F_cooldown = (jfloat(300.0f));
	LINE_NUMBER(30);
	((mindustry_entities_abilities_ForceFieldAbility *) NULL_CHECK((frame[0].o)))->F_sides = (6);
	LINE_NUMBER(32);
	((mindustry_entities_abilities_ForceFieldAbility *) NULL_CHECK((frame[0].o)))->F_rotation = (jfloat(0));
	LINE_NUMBER(34);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_shieldBreakSmall;
	((mindustry_entities_abilities_ForceFieldAbility *) NULL_CHECK(sp[0].o))->F_breakSound = (jref) sp[1].o;
	LINE_NUMBER(35);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_shieldHit;
	((mindustry_entities_abilities_ForceFieldAbility *) NULL_CHECK(sp[0].o))->F_hitSound = (jref) sp[1].o;
	LINE_NUMBER(36);
	((mindustry_entities_abilities_ForceFieldAbility *) NULL_CHECK((frame[0].o)))->F_hitSoundVolume = (jfloat(0.12f));
	LINE_NUMBER(40);
	((mindustry_entities_abilities_ForceFieldAbility *) NULL_CHECK((frame[0].o)))->F_wasBroken = (jint(1));
	LINE_NUMBER(63);
	((mindustry_entities_abilities_ForceFieldAbility *) NULL_CHECK((frame[0].o)))->F_radius = (frame[1].f);
	LINE_NUMBER(64);
	((mindustry_entities_abilities_ForceFieldAbility *) NULL_CHECK((frame[0].o)))->F_regen = (frame[2].f);
	LINE_NUMBER(65);
	((mindustry_entities_abilities_ForceFieldAbility *) NULL_CHECK((frame[0].o)))->F_max = (frame[3].f);
	LINE_NUMBER(66);
	((mindustry_entities_abilities_ForceFieldAbility *) NULL_CHECK((frame[0].o)))->F_cooldown = (frame[4].f);
	LINE_NUMBER(67);
	((mindustry_entities_abilities_ForceFieldAbility *) NULL_CHECK((frame[0].o)))->F_sides = (frame[5].i);
	LINE_NUMBER(68);
	((mindustry_entities_abilities_ForceFieldAbility *) NULL_CHECK((frame[0].o)))->F_rotation = (frame[6].f);
	LINE_NUMBER(69);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_entities_abilities_ForceFieldAbility(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/abilities/ForceFieldAbility:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_abilities_ForceFieldAbility(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(71);
	init_mindustry_entities_abilities_Ability(ctx, (frame[0].o));
	LINE_NUMBER(22);
	((mindustry_entities_abilities_ForceFieldAbility *) NULL_CHECK((frame[0].o)))->F_radius = (jfloat(60.0f));
	LINE_NUMBER(24);
	((mindustry_entities_abilities_ForceFieldAbility *) NULL_CHECK((frame[0].o)))->F_regen = (jfloat(0.1f));
	LINE_NUMBER(26);
	((mindustry_entities_abilities_ForceFieldAbility *) NULL_CHECK((frame[0].o)))->F_max = (jfloat(200.0f));
	LINE_NUMBER(28);
	((mindustry_entities_abilities_ForceFieldAbility *) NULL_CHECK((frame[0].o)))->F_cooldown = (jfloat(300.0f));
	LINE_NUMBER(30);
	((mindustry_entities_abilities_ForceFieldAbility *) NULL_CHECK((frame[0].o)))->F_sides = (6);
	LINE_NUMBER(32);
	((mindustry_entities_abilities_ForceFieldAbility *) NULL_CHECK((frame[0].o)))->F_rotation = (jfloat(0));
	LINE_NUMBER(34);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_shieldBreakSmall;
	((mindustry_entities_abilities_ForceFieldAbility *) NULL_CHECK(sp[0].o))->F_breakSound = (jref) sp[1].o;
	LINE_NUMBER(35);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_shieldHit;
	((mindustry_entities_abilities_ForceFieldAbility *) NULL_CHECK(sp[0].o))->F_hitSound = (jref) sp[1].o;
	LINE_NUMBER(36);
	((mindustry_entities_abilities_ForceFieldAbility *) NULL_CHECK((frame[0].o)))->F_hitSoundVolume = (jfloat(0.12f));
	LINE_NUMBER(40);
	((mindustry_entities_abilities_ForceFieldAbility *) NULL_CHECK((frame[0].o)))->F_wasBroken = (jint(1));
	LINE_NUMBER(71);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_entities_abilities_ForceFieldAbility_scaledMax_mindustry_gen_Unit_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/abilities/ForceFieldAbility:scaledMax", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(74);
	jfloat temp0 = (jfloat)((mindustry_entities_abilities_ForceFieldAbility *) NULL_CHECK((frame[0].o)))->F_max;
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_team;
	jfloat temp1 = (jfloat)((func_mindustry_game_Rules_unitHealth_mindustry_game_Team_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Rules_unitHealth_mindustry_game_Team_R_float])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return (temp0 * temp1);
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_abilities_ForceFieldAbility_addStats_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/abilities/ForceFieldAbility:addStats", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(79);
	M_mindustry_entities_abilities_Ability_addStats_arc_scene_ui_layout_Table(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(80);
	sp[0].o = frame[1].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"bullet.range"_j));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[4].o = (jobject)SM_arc_util_Strings_autoFixed_float_int_R_java_lang_String(ctx, (((jfloat)((mindustry_entities_abilities_ForceFieldAbility *) NULL_CHECK((frame[0].o)))->F_radius) / (jfloat(8.0f))), (jint(2)));
	ARRAY_ACCESS(jobject, sp[3].o, temp0) = sp[4].o;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(81);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(82);
	sp[0].o = frame[1].o;
	sp[1].o = frame[0].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"shield"_j));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp1 = jint(0);
	sp[4].o = (jobject)SM_arc_util_Strings_autoFixed_float_int_R_java_lang_String(ctx, ((jfloat)((mindustry_entities_abilities_ForceFieldAbility *) NULL_CHECK((frame[0].o)))->F_max), (jint(2)));
	ARRAY_ACCESS(jobject, sp[3].o, temp1) = sp[4].o;
	sp[1].o = (jobject)((func_mindustry_entities_abilities_ForceFieldAbility_abilityStat_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_entities_abilities_ForceFieldAbility_abilityStat_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(83);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(84);
	sp[0].o = frame[1].o;
	sp[1].o = frame[0].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"repairspeed"_j));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp2 = jint(0);
	sp[4].o = (jobject)SM_arc_util_Strings_autoFixed_float_int_R_java_lang_String(ctx, (((jfloat)((mindustry_entities_abilities_ForceFieldAbility *) NULL_CHECK((frame[0].o)))->F_regen) * (jfloat(60.0f))), (jint(2)));
	ARRAY_ACCESS(jobject, sp[3].o, temp2) = sp[4].o;
	sp[1].o = (jobject)((func_mindustry_entities_abilities_ForceFieldAbility_abilityStat_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_entities_abilities_ForceFieldAbility_abilityStat_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(85);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(86);
	sp[0].o = frame[1].o;
	sp[1].o = frame[0].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"cooldown"_j));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp3 = jint(0);
	sp[4].o = (jobject)SM_arc_util_Strings_autoFixed_float_int_R_java_lang_String(ctx, (((jfloat)((mindustry_entities_abilities_ForceFieldAbility *) NULL_CHECK((frame[0].o)))->F_cooldown) / (jfloat(60.0f))), (jint(2)));
	ARRAY_ACCESS(jobject, sp[3].o, temp3) = sp[4].o;
	sp[1].o = (jobject)((func_mindustry_entities_abilities_ForceFieldAbility_abilityStat_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_entities_abilities_ForceFieldAbility_abilityStat_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(87);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_abilities_ForceFieldAbility_update_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/abilities/ForceFieldAbility:update", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(91);
	if ((floatCompare(((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_shield), (jfloat(0)), 1)) > 0) goto label_1;
	}
	{
	if (((jint)((mindustry_entities_abilities_ForceFieldAbility *) NULL_CHECK((frame[0].o)))->F_wasBroken) != 0) goto label_1;
	}
	{
	LINE_NUMBER(92);
	sp[0].o = frame[1].o;
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_shield = (((jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_shield) - (((jfloat)((mindustry_entities_abilities_ForceFieldAbility *) NULL_CHECK((frame[0].o)))->F_cooldown) * ((jfloat)((mindustry_entities_abilities_ForceFieldAbility *) NULL_CHECK((frame[0].o)))->F_regen)));
	LINE_NUMBER(94);
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_shieldBreak;
	jfloat temp0 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_y;
	jfloat temp2 = (jfloat)((mindustry_entities_abilities_ForceFieldAbility *) NULL_CHECK((frame[0].o)))->F_radius;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_type;
	sp[1].o = (jobject)((func_mindustry_type_UnitType_shieldColor_mindustry_gen_Unit_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_type_UnitType_shieldColor_mindustry_gen_Unit_R_arc_graphics_Color])(ctx, sp[1].o, (frame[1].o));
	((func_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color_java_lang_Object])(ctx, sp[0].o, temp0, temp1, temp2, sp[1].o, (frame[0].o));
	LINE_NUMBER(95);
	sp[0].o = (jobject)((mindustry_entities_abilities_ForceFieldAbility *) NULL_CHECK((frame[0].o)))->F_breakSound;
	jint temp3 = (jint)((func_arc_audio_Sound_at_float_float_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Sound_at_float_float_R_int])(ctx, sp[0].o, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_y));
	}
label_1:;
	{
	LINE_NUMBER(98);
	jfloat temp0 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_shield;
	jfloat temp1 = (jfloat)((func_mindustry_entities_abilities_ForceFieldAbility_scaledMax_mindustry_gen_Unit_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_abilities_ForceFieldAbility_scaledMax_mindustry_gen_Unit_R_float])(ctx, (frame[0].o), (frame[1].o));
	if ((floatCompare(temp0, temp1, 1)) >= 0) goto label_5;
	}
	{
	LINE_NUMBER(99);
	sp[0].o = frame[1].o;
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_shield = (((jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_shield) + ((clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta) * ((jfloat)((mindustry_entities_abilities_ForceFieldAbility *) NULL_CHECK((frame[0].o)))->F_regen)));
	}
label_5:;
	{
	LINE_NUMBER(102);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((floatCompare(((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_shield), (jfloat(0)), 1)) > 0) goto label_7;
	}
	INST_ICONST(1);
	goto label_8;
label_7:;
	INST_ICONST(0);
label_8:;
	{
	sp -= 2;
	((mindustry_entities_abilities_ForceFieldAbility *) NULL_CHECK(sp[0].o))->F_wasBroken = sp[1].i;
	LINE_NUMBER(104);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (((jfloat)((mindustry_entities_abilities_ForceFieldAbility *) NULL_CHECK((frame[0].o)))->F_alpha) - ((clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta) / (jfloat(10.0f)))), (jfloat(0)));
	((mindustry_entities_abilities_ForceFieldAbility *) NULL_CHECK(sp[0].o))->F_alpha = temp0;
	LINE_NUMBER(106);
	if ((floatCompare(((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_shield), (jfloat(0)), -1)) <= 0) goto label_11;
	}
	{
	LINE_NUMBER(107);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_lerpDelta_float_float_float_R_float(ctx, ((jfloat)((mindustry_entities_abilities_ForceFieldAbility *) NULL_CHECK((frame[0].o)))->F_radiusScale), (jfloat(1)), (jfloat(0.06f)));
	((mindustry_entities_abilities_ForceFieldAbility *) NULL_CHECK(sp[0].o))->F_radiusScale = temp0;
	LINE_NUMBER(108);
	clinit_mindustry_entities_abilities_ForceFieldAbility(ctx);
	SF_mindustry_entities_abilities_ForceFieldAbility_paramUnit = (frame[1].o);
	LINE_NUMBER(109);
	clinit_mindustry_entities_abilities_ForceFieldAbility(ctx);
	SF_mindustry_entities_abilities_ForceFieldAbility_paramField = (frame[0].o);
	LINE_NUMBER(110);
	((func_mindustry_entities_abilities_ForceFieldAbility_checkRadius_mindustry_gen_Unit) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_abilities_ForceFieldAbility_checkRadius_mindustry_gen_Unit])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(112);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_bullet;
	jfloat temp1 = ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_x) - (clinit_mindustry_entities_abilities_ForceFieldAbility(ctx), (jfloat)SF_mindustry_entities_abilities_ForceFieldAbility_realRad);
	jfloat temp2 = ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_y) - (clinit_mindustry_entities_abilities_ForceFieldAbility(ctx), (jfloat)SF_mindustry_entities_abilities_ForceFieldAbility_realRad);
	jfloat temp3 = (clinit_mindustry_entities_abilities_ForceFieldAbility(ctx), (jfloat)SF_mindustry_entities_abilities_ForceFieldAbility_realRad) * (jfloat(2));
	jfloat temp4 = (clinit_mindustry_entities_abilities_ForceFieldAbility(ctx), (jfloat)SF_mindustry_entities_abilities_ForceFieldAbility_realRad) * (jfloat(2));
	clinit_mindustry_entities_abilities_ForceFieldAbility(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_abilities_ForceFieldAbility_shieldConsumer;
	((func_mindustry_entities_EntityGroup_intersect_float_float_float_float_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_intersect_float_float_float_float_arc_func_Cons])(ctx, sp[0].o, temp1, temp2, temp3, temp4, sp[1].o);
	goto label_17;
	}
label_11:;
	{
	LINE_NUMBER(114);
	((mindustry_entities_abilities_ForceFieldAbility *) NULL_CHECK((frame[0].o)))->F_radiusScale = (jfloat(0));
	}
label_17:;
	LINE_NUMBER(116);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_abilities_ForceFieldAbility_death_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/abilities/ForceFieldAbility:death", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(122);
	if ((floatCompare(((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_shield), (jfloat(0)), -1)) <= 0) goto label_1;
	}
	{
	if (((jint)((mindustry_entities_abilities_ForceFieldAbility *) NULL_CHECK((frame[0].o)))->F_wasBroken) != 0) goto label_1;
	}
	{
	LINE_NUMBER(123);
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_shieldBreak;
	jfloat temp0 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_y;
	jfloat temp2 = (jfloat)((mindustry_entities_abilities_ForceFieldAbility *) NULL_CHECK((frame[0].o)))->F_radius;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_type;
	sp[1].o = (jobject)((func_mindustry_type_UnitType_shieldColor_mindustry_gen_Unit_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_type_UnitType_shieldColor_mindustry_gen_Unit_R_arc_graphics_Color])(ctx, sp[1].o, (frame[1].o));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, ((jint)((mindustry_entities_abilities_ForceFieldAbility *) NULL_CHECK((frame[0].o)))->F_sides));
	((func_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color_java_lang_Object])(ctx, sp[0].o, temp0, temp1, temp2, sp[1].o, sp[2].o);
	LINE_NUMBER(124);
	sp[0].o = (jobject)((mindustry_entities_abilities_ForceFieldAbility *) NULL_CHECK((frame[0].o)))->F_breakSound;
	jint temp3 = (jint)((func_arc_audio_Sound_at_float_float_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Sound_at_float_float_R_int])(ctx, sp[0].o, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_y));
	}
label_1:;
	LINE_NUMBER(126);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_abilities_ForceFieldAbility_draw_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/abilities/ForceFieldAbility:draw", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(130);
	((func_mindustry_entities_abilities_ForceFieldAbility_checkRadius_mindustry_gen_Unit) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_abilities_ForceFieldAbility_checkRadius_mindustry_gen_Unit])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(132);
	if ((floatCompare(((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_shield), (jfloat(0)), -1)) <= 0) goto label_2;
	}
	{
	LINE_NUMBER(133);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_type;
	sp[0].o = (jobject)((func_mindustry_type_UnitType_shieldColor_mindustry_gen_Unit_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_UnitType_shieldColor_mindustry_gen_Unit_R_arc_graphics_Color])(ctx, sp[0].o, (frame[1].o));
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_white;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, ((jfloat)((mindustry_entities_abilities_ForceFieldAbility *) NULL_CHECK((frame[0].o)))->F_alpha));
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color_arc_graphics_Color_float(ctx, sp[0].o, sp[1].o, temp0);
	LINE_NUMBER(135);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	if (((jint)((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_animateShields) == 0) goto label_5;
	}
	{
	LINE_NUMBER(136);
	SM_arc_graphics_g2d_Draw_z_float(ctx, ((jfloat(125.0f)) + ((jfloat(1,000000e-03f)) * ((jfloat)((mindustry_entities_abilities_ForceFieldAbility *) NULL_CHECK((frame[0].o)))->F_alpha))));
	LINE_NUMBER(137);
	SM_arc_graphics_g2d_Fill_poly_float_float_int_float_float(ctx, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_y), ((jint)((mindustry_entities_abilities_ForceFieldAbility *) NULL_CHECK((frame[0].o)))->F_sides), (clinit_mindustry_entities_abilities_ForceFieldAbility(ctx), (jfloat)SF_mindustry_entities_abilities_ForceFieldAbility_realRad), ((jfloat)((mindustry_entities_abilities_ForceFieldAbility *) NULL_CHECK((frame[0].o)))->F_rotation));
	goto label_2;
	}
label_5:;
	{
	LINE_NUMBER(139);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (jfloat(125.0f)));
	LINE_NUMBER(140);
	SM_arc_graphics_g2d_Lines_stroke_float(ctx, (jfloat(1.5f)));
	LINE_NUMBER(141);
	SM_arc_graphics_g2d_Draw_alpha_float(ctx, (jfloat(0.09f)));
	LINE_NUMBER(142);
	SM_arc_graphics_g2d_Fill_poly_float_float_int_float_float(ctx, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_y), ((jint)((mindustry_entities_abilities_ForceFieldAbility *) NULL_CHECK((frame[0].o)))->F_sides), ((jfloat)((mindustry_entities_abilities_ForceFieldAbility *) NULL_CHECK((frame[0].o)))->F_radius), ((jfloat)((mindustry_entities_abilities_ForceFieldAbility *) NULL_CHECK((frame[0].o)))->F_rotation));
	LINE_NUMBER(143);
	SM_arc_graphics_g2d_Draw_alpha_float(ctx, (jfloat(1)));
	LINE_NUMBER(144);
	SM_arc_graphics_g2d_Lines_poly_float_float_int_float_float(ctx, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_y), ((jint)((mindustry_entities_abilities_ForceFieldAbility *) NULL_CHECK((frame[0].o)))->F_sides), ((jfloat)((mindustry_entities_abilities_ForceFieldAbility *) NULL_CHECK((frame[0].o)))->F_radius), ((jfloat)((mindustry_entities_abilities_ForceFieldAbility *) NULL_CHECK((frame[0].o)))->F_rotation));
	}
label_2:;
	LINE_NUMBER(147);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_abilities_ForceFieldAbility_displayBars_mindustry_gen_Unit_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/abilities/ForceFieldAbility:displayBars", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(151);
	sp[0].o = frame[2].o;
	clinit_mindustry_ui_Bar(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_Bar);
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"stat.shieldhealth"_j));
	clinit_mindustry_graphics_Pal(ctx);
	sp[3].o = (jobject)SF_mindustry_graphics_Pal_accent;
	{ /* InvokeDynamic */
		clinit_mindustry_entities_abilities_ForceFieldAbility_invoke_arc_func_Floatp_1(ctx);
		auto proxy = (mindustry_entities_abilities_ForceFieldAbility_invoke_arc_func_Floatp_1 *) gcAlloc(ctx, &class_mindustry_entities_abilities_ForceFieldAbility_invoke_arc_func_Floatp_1);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	init_mindustry_ui_Bar_java_lang_String_arc_graphics_Color_arc_func_Floatp(ctx, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(152);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_abilities_ForceFieldAbility_created_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/abilities/ForceFieldAbility:created", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(156);
	sp[0].o = frame[1].o;
	jfloat temp0 = (jfloat)((func_mindustry_entities_abilities_ForceFieldAbility_scaledMax_mindustry_gen_Unit_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_abilities_ForceFieldAbility_scaledMax_mindustry_gen_Unit_R_float])(ctx, (frame[0].o), (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_shield = temp0;
	LINE_NUMBER(157);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_abilities_ForceFieldAbility_checkRadius_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/abilities/ForceFieldAbility:checkRadius", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(161);
	clinit_mindustry_entities_abilities_ForceFieldAbility(ctx);
	SF_mindustry_entities_abilities_ForceFieldAbility_realRad = (((jfloat)((mindustry_entities_abilities_ForceFieldAbility *) NULL_CHECK((frame[0].o)))->F_radiusScale) * ((jfloat)((mindustry_entities_abilities_ForceFieldAbility *) NULL_CHECK((frame[0].o)))->F_radius));
	LINE_NUMBER(162);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_entities_abilities_ForceFieldAbility_lambda$displayBars$0_mindustry_gen_Unit_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/abilities/ForceFieldAbility:lambda$displayBars$0", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(151);
	jfloat temp0 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_shield;
	jfloat temp1 = (jfloat)((func_mindustry_entities_abilities_ForceFieldAbility_scaledMax_mindustry_gen_Unit_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_abilities_ForceFieldAbility_scaledMax_mindustry_gen_Unit_R_float])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return (temp0 / temp1);
	}

	popStackFrame(ctx);
}

void SM_mindustry_entities_abilities_ForceFieldAbility_lambda$static$0_mindustry_gen_Bullet(jcontext ctx, jobject param0) {
	jtype frame[8];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/abilities/ForceFieldAbility:lambda$static$0", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_abilities_ForceFieldAbility(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(46);
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_team;
	clinit_mindustry_entities_abilities_ForceFieldAbility(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_abilities_ForceFieldAbility_paramUnit;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[1].o))->F_team;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_absorbable) == 0) goto label_1;
	}
	{
	clinit_mindustry_entities_abilities_ForceFieldAbility(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_abilities_ForceFieldAbility_paramField;
	jint temp0 = (jint)((mindustry_entities_abilities_ForceFieldAbility *) NULL_CHECK(sp[0].o))->F_sides;
	clinit_mindustry_entities_abilities_ForceFieldAbility(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_abilities_ForceFieldAbility_paramUnit;
	jfloat temp1 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_x;
	clinit_mindustry_entities_abilities_ForceFieldAbility(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_abilities_ForceFieldAbility_paramUnit;
	jfloat temp2 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_y;
	clinit_mindustry_entities_abilities_ForceFieldAbility(ctx);
	jfloat temp3 = (jfloat)SF_mindustry_entities_abilities_ForceFieldAbility_realRad;
	clinit_mindustry_entities_abilities_ForceFieldAbility(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_abilities_ForceFieldAbility_paramField;
	jfloat temp4 = (jfloat)((mindustry_entities_abilities_ForceFieldAbility *) NULL_CHECK(sp[0].o))->F_rotation;
	jfloat temp5 = (jfloat)((func_mindustry_gen_Bullet_x_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Bullet_x_R_float])(ctx, (frame[0].o));
	jfloat temp6 = (jfloat)((func_mindustry_gen_Bullet_y_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Bullet_y_R_float])(ctx, (frame[0].o));
	jint temp7 = (jint)SM_arc_math_geom_Intersector_isInRegularPolygon_int_float_float_float_float_float_float_R_boolean(ctx, temp0, temp1, temp2, temp3, temp4, temp5, temp6);
	if (temp7 == 0) goto label_1;
	}
	{
	clinit_mindustry_entities_abilities_ForceFieldAbility(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_abilities_ForceFieldAbility_paramUnit;
	if ((floatCompare(((jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_shield), (jfloat(0)), -1)) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(47);
	((func_mindustry_gen_Bullet_absorb) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Bullet_absorb])(ctx, (frame[0].o));
	LINE_NUMBER(48);
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_absorb;
	((func_mindustry_entities_Effect_at_arc_math_geom_Position) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_arc_math_geom_Position])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(49);
	clinit_mindustry_entities_abilities_ForceFieldAbility(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_abilities_ForceFieldAbility_paramField;
	sp[0].o = (jobject)((mindustry_entities_abilities_ForceFieldAbility *) NULL_CHECK(sp[0].o))->F_hitSound;
	jfloat temp0 = (jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_y;
	jfloat temp2 = jfloat(1);
	jfloat temp3 = (jfloat)SM_arc_math_Mathf_range_float_R_float(ctx, (jfloat(0.1f)));
	jfloat temp4 = temp2 + temp3;
	clinit_mindustry_entities_abilities_ForceFieldAbility(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_abilities_ForceFieldAbility_paramField;
	jint temp5 = (jint)((func_arc_audio_Sound_at_float_float_float_float_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Sound_at_float_float_float_float_R_int])(ctx, sp[0].o, temp0, temp1, temp4, ((jfloat)((mindustry_entities_abilities_ForceFieldAbility *) NULL_CHECK(sp[1].o))->F_hitSoundVolume));
	LINE_NUMBER(50);
	clinit_mindustry_entities_abilities_ForceFieldAbility(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_abilities_ForceFieldAbility_paramUnit;
	jfloat temp6 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_shield;
	sp[1].o = (jobject)((func_mindustry_gen_Bullet_type_R_mindustry_entities_bullet_BulletType) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Bullet_type_R_mindustry_entities_bullet_BulletType])(ctx, (frame[0].o));
	jfloat temp7 = (jfloat)((func_mindustry_entities_bullet_BulletType_shieldDamage_mindustry_gen_Bullet_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_entities_bullet_BulletType_shieldDamage_mindustry_gen_Bullet_R_float])(ctx, sp[1].o, (frame[0].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_shield = (temp6 - temp7);
	LINE_NUMBER(51);
	clinit_mindustry_entities_abilities_ForceFieldAbility(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_abilities_ForceFieldAbility_paramField;
	((mindustry_entities_abilities_ForceFieldAbility *) NULL_CHECK(sp[0].o))->F_alpha = (jfloat(1));
	}
label_1:;
	LINE_NUMBER(53);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void clinit_mindustry_entities_abilities_ForceFieldAbility(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_entities_abilities_Ability(ctx);
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/abilities/ForceFieldAbility:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_abilities_ForceFieldAbility(ctx);
	{
	LINE_NUMBER(45);
	{ /* InvokeDynamic */
		clinit_mindustry_entities_abilities_ForceFieldAbility_invoke_arc_func_Cons_1(ctx);
		auto proxy = (mindustry_entities_abilities_ForceFieldAbility_invoke_arc_func_Cons_1 *) gcAlloc(ctx, &class_mindustry_entities_abilities_ForceFieldAbility_invoke_arc_func_Cons_1);
		sp[0].o = (jobject) proxy;
	}
	clinit_mindustry_entities_abilities_ForceFieldAbility(ctx);
	SF_mindustry_entities_abilities_ForceFieldAbility_shieldConsumer = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_entities_abilities_ForceFieldAbility[] {
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
	(void *) M_mindustry_entities_abilities_ForceFieldAbility_update_mindustry_gen_Unit,
	(void *) M_mindustry_entities_abilities_ForceFieldAbility_draw_mindustry_gen_Unit,
	(void *) M_mindustry_entities_abilities_ForceFieldAbility_death_mindustry_gen_Unit,
	(void *) M_mindustry_entities_abilities_ForceFieldAbility_created_mindustry_gen_Unit,
	(void *) M_mindustry_entities_abilities_Ability_init_mindustry_type_UnitType,
	(void *) M_mindustry_entities_abilities_ForceFieldAbility_displayBars_mindustry_gen_Unit_arc_scene_ui_layout_Table,
	(void *) M_mindustry_entities_abilities_Ability_display_arc_scene_ui_layout_Table,
	(void *) M_mindustry_entities_abilities_ForceFieldAbility_addStats_arc_scene_ui_layout_Table,
	(void *) M_mindustry_entities_abilities_Ability_abilityStat_java_lang_String_Array1_java_lang_Object_R_java_lang_String,
	(void *) M_mindustry_entities_abilities_Ability_copy_R_mindustry_entities_abilities_Ability,
	(void *) M_mindustry_entities_abilities_Ability_localized_R_java_lang_String,
	(void *) M_mindustry_entities_abilities_Ability_getBundle_R_java_lang_String,
	(void *) M_mindustry_entities_abilities_Ability_lambda$display$0_arc_scene_ui_layout_Table,
	(void *) M_mindustry_entities_abilities_ForceFieldAbility_scaledMax_mindustry_gen_Unit_R_float,
	(void *) M_mindustry_entities_abilities_ForceFieldAbility_checkRadius_mindustry_gen_Unit,
	(void *) M_mindustry_entities_abilities_ForceFieldAbility_lambda$displayBars$0_mindustry_gen_Unit_R_float,
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
	{ "scaledMax", "(Lmindustry/gen/Unit;)F" },
	{ "checkRadius", "(Lmindustry/gen/Unit;)V" },
	{ "lambda$displayBars$0", "(Lmindustry/gen/Unit;)F" },
};

static FieldMetadata fields[] {
	{ "radius", &class_float, offsetof(mindustry_entities_abilities_ForceFieldAbility, F_radius), "F", 1 },
	{ "regen", &class_float, offsetof(mindustry_entities_abilities_ForceFieldAbility, F_regen), "F", 1 },
	{ "max", &class_float, offsetof(mindustry_entities_abilities_ForceFieldAbility, F_max), "F", 1 },
	{ "cooldown", &class_float, offsetof(mindustry_entities_abilities_ForceFieldAbility, F_cooldown), "F", 1 },
	{ "sides", &class_int, offsetof(mindustry_entities_abilities_ForceFieldAbility, F_sides), "I", 1 },
	{ "rotation", &class_float, offsetof(mindustry_entities_abilities_ForceFieldAbility, F_rotation), "F", 1 },
	{ "breakSound", &class_arc_audio_Sound, offsetof(mindustry_entities_abilities_ForceFieldAbility, F_breakSound), "Larc/audio/Sound;", 1 },
	{ "hitSound", &class_arc_audio_Sound, offsetof(mindustry_entities_abilities_ForceFieldAbility, F_hitSound), "Larc/audio/Sound;", 1 },
	{ "hitSoundVolume", &class_float, offsetof(mindustry_entities_abilities_ForceFieldAbility, F_hitSoundVolume), "F", 1 },
	{ "radiusScale", &class_float, offsetof(mindustry_entities_abilities_ForceFieldAbility, F_radiusScale), "F", 4 },
	{ "alpha", &class_float, offsetof(mindustry_entities_abilities_ForceFieldAbility, F_alpha), "F", 4 },
	{ "wasBroken", &class_boolean, offsetof(mindustry_entities_abilities_ForceFieldAbility, F_wasBroken), "Z", 4 },
	{ "realRad", &class_float, (intptr_t) &SF_mindustry_entities_abilities_ForceFieldAbility_realRad, "F", 10 },
	{ "paramUnit", &class_mindustry_gen_Unit, (intptr_t) &SF_mindustry_entities_abilities_ForceFieldAbility_paramUnit, "Lmindustry/gen/Unit;", 10 },
	{ "paramField", &class_mindustry_entities_abilities_ForceFieldAbility, (intptr_t) &SF_mindustry_entities_abilities_ForceFieldAbility_paramField, "Lmindustry/entities/abilities/ForceFieldAbility;", 10 },
	{ "shieldConsumer", &class_arc_func_Cons, (intptr_t) &SF_mindustry_entities_abilities_ForceFieldAbility_shieldConsumer, "Larc/func/Cons;", 26 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_entities_abilities_ForceFieldAbility_float_float_float_float, 0, "(FFFF)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_entities_abilities_ForceFieldAbility_float_float_float_float_int_float, 0, "(FFFFIF)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_entities_abilities_ForceFieldAbility, 0, "()V", 0 },
	{ "scaledMax", (intptr_t) M_mindustry_entities_abilities_ForceFieldAbility_scaledMax_mindustry_gen_Unit_R_float, VTABLE_mindustry_entities_abilities_ForceFieldAbility_scaledMax_mindustry_gen_Unit_R_float, "(Lmindustry/gen/Unit;)F", 1 },
	{ "addStats", (intptr_t) M_mindustry_entities_abilities_ForceFieldAbility_addStats_arc_scene_ui_layout_Table, VTABLE_mindustry_entities_abilities_ForceFieldAbility_addStats_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 1 },
	{ "update", (intptr_t) M_mindustry_entities_abilities_ForceFieldAbility_update_mindustry_gen_Unit, VTABLE_mindustry_entities_abilities_ForceFieldAbility_update_mindustry_gen_Unit, "(Lmindustry/gen/Unit;)V", 1 },
	{ "death", (intptr_t) M_mindustry_entities_abilities_ForceFieldAbility_death_mindustry_gen_Unit, VTABLE_mindustry_entities_abilities_ForceFieldAbility_death_mindustry_gen_Unit, "(Lmindustry/gen/Unit;)V", 1 },
	{ "draw", (intptr_t) M_mindustry_entities_abilities_ForceFieldAbility_draw_mindustry_gen_Unit, VTABLE_mindustry_entities_abilities_ForceFieldAbility_draw_mindustry_gen_Unit, "(Lmindustry/gen/Unit;)V", 1 },
	{ "displayBars", (intptr_t) M_mindustry_entities_abilities_ForceFieldAbility_displayBars_mindustry_gen_Unit_arc_scene_ui_layout_Table, VTABLE_mindustry_entities_abilities_ForceFieldAbility_displayBars_mindustry_gen_Unit_arc_scene_ui_layout_Table, "(Lmindustry/gen/Unit;Larc/scene/ui/layout/Table;)V", 1 },
	{ "created", (intptr_t) M_mindustry_entities_abilities_ForceFieldAbility_created_mindustry_gen_Unit, VTABLE_mindustry_entities_abilities_ForceFieldAbility_created_mindustry_gen_Unit, "(Lmindustry/gen/Unit;)V", 1 },
	{ "checkRadius", (intptr_t) M_mindustry_entities_abilities_ForceFieldAbility_checkRadius_mindustry_gen_Unit, VTABLE_mindustry_entities_abilities_ForceFieldAbility_checkRadius_mindustry_gen_Unit, "(Lmindustry/gen/Unit;)V", 1 },
	{ "lambda$displayBars$0", (intptr_t) M_mindustry_entities_abilities_ForceFieldAbility_lambda$displayBars$0_mindustry_gen_Unit_R_float, VTABLE_mindustry_entities_abilities_ForceFieldAbility_lambda$displayBars$0_mindustry_gen_Unit_R_float, "(Lmindustry/gen/Unit;)F", 4098 },
	{ "lambda$static$0", (intptr_t) SM_mindustry_entities_abilities_ForceFieldAbility_lambda$static$0_mindustry_gen_Bullet, 0, "(Lmindustry/gen/Bullet;)V", 4106 },
	{ "<clinit>", (intptr_t) clinit_mindustry_entities_abilities_ForceFieldAbility, 0, "()V", 8 },
};

Class class_mindustry_entities_abilities_ForceFieldAbility{
		.nativeName = (intptr_t) "mindustry/entities/abilities/ForceFieldAbility",
		.parentClass = (intptr_t) &class_mindustry_entities_abilities_Ability,
		.size = sizeof(mindustry_entities_abilities_ForceFieldAbility),
		.classVtable = (intptr_t) vtable_mindustry_entities_abilities_ForceFieldAbility,
		.staticInitializer = (intptr_t) clinit_mindustry_entities_abilities_ForceFieldAbility,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_entities_abilities_ForceFieldAbility,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 16,
		.nativeFields = (intptr_t) fields,
		.methodCount = 14,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 27,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_entities_abilities_ForceFieldAbility = registerClass(&class_mindustry_entities_abilities_ForceFieldAbility);

}
