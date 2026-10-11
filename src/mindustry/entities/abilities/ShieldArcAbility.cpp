#include "mindustry/entities/abilities/ShieldArcAbility.h"
#include "arc/math/Angles.h"
#include "arc/graphics/Color.h"
#include "arc/graphics/g2d/Draw.h"
#include "java/lang/reflect/Constructor.h"
#include "mindustry/entities/Effect.h"
#include "mindustry/content/Fx.h"
#include "mindustry/core/Renderer.h"
#include "mindustry/gen/Entityc.h"
#include "arc/util/Tmp.h"
#include "arc/scene/ui/layout/Cell.h"
#include "java/lang/reflect/Method.h"
#include "arc/func/Floatp.h"
#include "arc/math/geom/Position.h"
#include "arc/math/Mathf.h"
#include "java/lang/reflect/Field.h"
#include "mindustry/gen/Unit.h"
#include "mindustry/gen/Sounds.h"
#include "arc/util/Time.h"
#include "arc/util/Nullable.h"
#include "java/lang/Object.h"
#include "mindustry/gen/Bullet.h"
#include "mindustry/entities/Units.h"
#include "mindustry/entities/bullet/BulletType.h"
#include "arc/math/geom/Vec2.h"
#include "mindustry/ui/Bar.h"
#include "mindustry/game/Rules.h"
#include "mindustry/gen/Groups.h"
#include "arc/graphics/g2d/Lines.h"
#include "mindustry/gen/Velc.h"
#include "mindustry/gen/Unitc.h"
#include "arc/func/Cons.h"
#include "java/lang/String.h"
#include "mindustry/entities/abilities/Ability.h"
#include "mindustry/entities/abilities/ShieldArcAbility.h"
#include "java/lang/Math.h"
#include "mindustry/entities/abilities/ShieldArcAbility_invoke_arc_func_Floatp_1.h"
#include "arc/scene/ui/layout/Table.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/type/UnitType.h"
#include "java/lang/CharSequence.h"
#include "mindustry/entities/abilities/ShieldArcAbility_invoke_arc_func_Cons_3.h"
#include "arc/util/Strings.h"
#include "mindustry/entities/EntityGroup.h"
#include "mindustry/entities/abilities/ShieldArcAbility_invoke_arc_func_Cons_2.h"
#include "mindustry/graphics/Pal.h"
#include "arc/scene/Element.h"
#include "arc/audio/Sound.h"
#include "mindustry/game/Team.h"
#include "mindustry/Vars.h"
#include "mindustry/core/GameState.h"
#include "mindustry/gen/Call.h"

extern "C" {

jobject SF_mindustry_entities_abilities_ShieldArcAbility_paramUnit;
jobject SF_mindustry_entities_abilities_ShieldArcAbility_paramField;
jobject SF_mindustry_entities_abilities_ShieldArcAbility_paramPos;
jobject SF_mindustry_entities_abilities_ShieldArcAbility_shieldConsumer;
jobject SF_mindustry_entities_abilities_ShieldArcAbility_unitConsumer;

void mark_mindustry_entities_abilities_ShieldArcAbility(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_entities_abilities_ShieldArcAbility_paramUnit)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_entities_abilities_ShieldArcAbility_paramUnit)->clazz)->markFunction)((jobject) SF_mindustry_entities_abilities_ShieldArcAbility_paramUnit, mark, depth + 1);
		if (SF_mindustry_entities_abilities_ShieldArcAbility_paramField)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_entities_abilities_ShieldArcAbility_paramField)->clazz)->markFunction)((jobject) SF_mindustry_entities_abilities_ShieldArcAbility_paramField, mark, depth + 1);
		if (SF_mindustry_entities_abilities_ShieldArcAbility_paramPos)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_entities_abilities_ShieldArcAbility_paramPos)->clazz)->markFunction)((jobject) SF_mindustry_entities_abilities_ShieldArcAbility_paramPos, mark, depth + 1);
		if (SF_mindustry_entities_abilities_ShieldArcAbility_shieldConsumer)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_entities_abilities_ShieldArcAbility_shieldConsumer)->clazz)->markFunction)((jobject) SF_mindustry_entities_abilities_ShieldArcAbility_shieldConsumer, mark, depth + 1);
		if (SF_mindustry_entities_abilities_ShieldArcAbility_unitConsumer)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_entities_abilities_ShieldArcAbility_unitConsumer)->clazz)->markFunction)((jobject) SF_mindustry_entities_abilities_ShieldArcAbility_unitConsumer, mark, depth + 1);
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
	auto self = (mindustry_entities_abilities_ShieldArcAbility *) object;
	if (self->F_deflectSound)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_deflectSound)->clazz)->markFunction)((jobject) self->F_deflectSound, mark, depth + 1);
	if (self->F_breakSound)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_breakSound)->clazz)->markFunction)((jobject) self->F_breakSound, mark, depth + 1);
	if (self->F_hitSound)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_hitSound)->clazz)->markFunction)((jobject) self->F_hitSound, mark, depth + 1);
	if (self->F_region)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_region)->clazz)->markFunction)((jobject) self->F_region, mark, depth + 1);
	if (self->F_color)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_color)->clazz)->markFunction)((jobject) self->F_color, mark, depth + 1);
	if (self->F_pushEffect)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_pushEffect)->clazz)->markFunction)((jobject) self->F_pushEffect, mark, depth + 1);
}

void init_mindustry_entities_abilities_ShieldArcAbility(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/abilities/ShieldArcAbility:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_abilities_ShieldArcAbility(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(18);
	init_mindustry_entities_abilities_Ability(ctx, (frame[0].o));
	LINE_NUMBER(120);
	((mindustry_entities_abilities_ShieldArcAbility *) NULL_CHECK((frame[0].o)))->F_radius = (jfloat(60.0f));
	LINE_NUMBER(122);
	((mindustry_entities_abilities_ShieldArcAbility *) NULL_CHECK((frame[0].o)))->F_regen = (jfloat(0.1f));
	LINE_NUMBER(124);
	((mindustry_entities_abilities_ShieldArcAbility *) NULL_CHECK((frame[0].o)))->F_max = (jfloat(200.0f));
	LINE_NUMBER(126);
	((mindustry_entities_abilities_ShieldArcAbility *) NULL_CHECK((frame[0].o)))->F_cooldown = (jfloat(300.0f));
	LINE_NUMBER(128);
	((mindustry_entities_abilities_ShieldArcAbility *) NULL_CHECK((frame[0].o)))->F_angle = (jfloat(80.0f));
	LINE_NUMBER(130);
	((mindustry_entities_abilities_ShieldArcAbility *) NULL_CHECK((frame[0].o)))->F_angleOffset = (jfloat(0));
	((mindustry_entities_abilities_ShieldArcAbility *) NULL_CHECK((frame[0].o)))->F_x = (jfloat(0));
	((mindustry_entities_abilities_ShieldArcAbility *) NULL_CHECK((frame[0].o)))->F_y = (jfloat(0));
	LINE_NUMBER(132);
	((mindustry_entities_abilities_ShieldArcAbility *) NULL_CHECK((frame[0].o)))->F_whenShooting = (jint(1));
	LINE_NUMBER(134);
	((mindustry_entities_abilities_ShieldArcAbility *) NULL_CHECK((frame[0].o)))->F_width = (jfloat(6.0f));
	LINE_NUMBER(136);
	((mindustry_entities_abilities_ShieldArcAbility *) NULL_CHECK((frame[0].o)))->F_chanceDeflect = (jfloat(-1.0f));
	LINE_NUMBER(138);
	((mindustry_entities_abilities_ShieldArcAbility *) NULL_CHECK((frame[0].o)))->F_reflectBuildingDamage = (jfloat(1));
	LINE_NUMBER(140);
	((mindustry_entities_abilities_ShieldArcAbility *) NULL_CHECK((frame[0].o)))->F_reflectVel = (jfloat(1));
	LINE_NUMBER(142);
	((mindustry_entities_abilities_ShieldArcAbility *) NULL_CHECK((frame[0].o)))->F_reflectTime = (jfloat(0.5f));
	LINE_NUMBER(144);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_none;
	((mindustry_entities_abilities_ShieldArcAbility *) NULL_CHECK(sp[0].o))->F_deflectSound = (jref) sp[1].o;
	LINE_NUMBER(145);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_shieldBreakSmall;
	((mindustry_entities_abilities_ShieldArcAbility *) NULL_CHECK(sp[0].o))->F_breakSound = (jref) sp[1].o;
	LINE_NUMBER(146);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_shieldHit;
	((mindustry_entities_abilities_ShieldArcAbility *) NULL_CHECK(sp[0].o))->F_hitSound = (jref) sp[1].o;
	LINE_NUMBER(147);
	((mindustry_entities_abilities_ShieldArcAbility *) NULL_CHECK((frame[0].o)))->F_hitSoundVolume = (jfloat(0.12f));
	LINE_NUMBER(149);
	((mindustry_entities_abilities_ShieldArcAbility *) NULL_CHECK((frame[0].o)))->F_missileUnitMultiplier = (jfloat(2));
	LINE_NUMBER(152);
	((mindustry_entities_abilities_ShieldArcAbility *) NULL_CHECK((frame[0].o)))->F_drawArc = (jint(1));
	LINE_NUMBER(158);
	((mindustry_entities_abilities_ShieldArcAbility *) NULL_CHECK((frame[0].o)))->F_offsetRegion = (jint(0));
	LINE_NUMBER(160);
	((mindustry_entities_abilities_ShieldArcAbility *) NULL_CHECK((frame[0].o)))->F_pushUnits = (jint(1));
	LINE_NUMBER(162);
	((mindustry_entities_abilities_ShieldArcAbility *) NULL_CHECK((frame[0].o)))->F_pushDiffLayer = (jint(1));
	LINE_NUMBER(163);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_circleColorSpark;
	((mindustry_entities_abilities_ShieldArcAbility *) NULL_CHECK(sp[0].o))->F_pushEffect = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_entities_abilities_ShieldArcAbility_scaledMax_mindustry_gen_Unit_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/abilities/ShieldArcAbility:scaledMax", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(169);
	jfloat temp0 = (jfloat)((mindustry_entities_abilities_ShieldArcAbility *) NULL_CHECK((frame[0].o)))->F_max;
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

void M_mindustry_entities_abilities_ShieldArcAbility_addStats_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/abilities/ShieldArcAbility:addStats", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(174);
	M_mindustry_entities_abilities_Ability_addStats_arc_scene_ui_layout_Table(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(175);
	sp[0].o = frame[1].o;
	sp[1].o = frame[0].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"shield"_j));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[4].o = (jobject)SM_arc_util_Strings_autoFixed_float_int_R_java_lang_String(ctx, ((jfloat)((mindustry_entities_abilities_ShieldArcAbility *) NULL_CHECK((frame[0].o)))->F_max), (jint(2)));
	ARRAY_ACCESS(jobject, sp[3].o, temp0) = sp[4].o;
	sp[1].o = (jobject)((func_mindustry_entities_abilities_ShieldArcAbility_abilityStat_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_entities_abilities_ShieldArcAbility_abilityStat_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(176);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(177);
	sp[0].o = frame[1].o;
	sp[1].o = frame[0].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"repairspeed"_j));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp1 = jint(0);
	sp[4].o = (jobject)SM_arc_util_Strings_autoFixed_float_int_R_java_lang_String(ctx, (((jfloat)((mindustry_entities_abilities_ShieldArcAbility *) NULL_CHECK((frame[0].o)))->F_regen) * (jfloat(60.0f))), (jint(2)));
	ARRAY_ACCESS(jobject, sp[3].o, temp1) = sp[4].o;
	sp[1].o = (jobject)((func_mindustry_entities_abilities_ShieldArcAbility_abilityStat_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_entities_abilities_ShieldArcAbility_abilityStat_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(178);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(179);
	sp[0].o = frame[1].o;
	sp[1].o = frame[0].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"cooldown"_j));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp2 = jint(0);
	sp[4].o = (jobject)SM_arc_util_Strings_autoFixed_float_int_R_java_lang_String(ctx, (((jfloat)((mindustry_entities_abilities_ShieldArcAbility *) NULL_CHECK((frame[0].o)))->F_cooldown) / (jfloat(60.0f))), (jint(2)));
	ARRAY_ACCESS(jobject, sp[3].o, temp2) = sp[4].o;
	sp[1].o = (jobject)((func_mindustry_entities_abilities_ShieldArcAbility_abilityStat_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_entities_abilities_ShieldArcAbility_abilityStat_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(180);
	if ((floatCompare(((jfloat)((mindustry_entities_abilities_ShieldArcAbility *) NULL_CHECK((frame[0].o)))->F_chanceDeflect), (jfloat(0)), -1)) <= 0) goto label_7;
	}
	{
	LINE_NUMBER(181);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(182);
	sp[0].o = frame[1].o;
	sp[1].o = frame[0].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"deflectchance"_j));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[4].o = (jobject)SM_arc_util_Strings_autoFixed_float_int_R_java_lang_String(ctx, (((jfloat)((mindustry_entities_abilities_ShieldArcAbility *) NULL_CHECK((frame[0].o)))->F_chanceDeflect) * (jfloat(100.0f))), (jint(2)));
	ARRAY_ACCESS(jobject, sp[3].o, temp0) = sp[4].o;
	sp[1].o = (jobject)((func_mindustry_entities_abilities_ShieldArcAbility_abilityStat_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_entities_abilities_ShieldArcAbility_abilityStat_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	}
label_7:;
	LINE_NUMBER(184);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_abilities_ShieldArcAbility_update_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/abilities/ShieldArcAbility:update", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(189);
	jfloat temp0 = (jfloat)((mindustry_entities_abilities_Ability *) NULL_CHECK((frame[0].o)))->F_data;
	jfloat temp1 = (jfloat)((func_mindustry_entities_abilities_ShieldArcAbility_scaledMax_mindustry_gen_Unit_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_abilities_ShieldArcAbility_scaledMax_mindustry_gen_Unit_R_float])(ctx, (frame[0].o), (frame[1].o));
	if ((floatCompare(temp0, temp1, 1)) >= 0) goto label_1;
	}
	{
	LINE_NUMBER(190);
	sp[0].o = frame[0].o;
	((mindustry_entities_abilities_Ability *) NULL_CHECK(sp[0].o))->F_data = (((jfloat)((mindustry_entities_abilities_Ability *) NULL_CHECK(sp[0].o))->F_data) + ((clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta) * ((jfloat)((mindustry_entities_abilities_ShieldArcAbility *) NULL_CHECK((frame[0].o)))->F_regen)));
	}
label_1:;
	{
	LINE_NUMBER(193);
	if ((floatCompare(((jfloat)((mindustry_entities_abilities_Ability *) NULL_CHECK((frame[0].o)))->F_data), (jfloat(0)), -1)) <= 0) goto label_3;
	}
	{
	if (((jint)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_isShooting) != 0) goto label_4;
	}
	{
	if (((jint)((mindustry_entities_abilities_ShieldArcAbility *) NULL_CHECK((frame[0].o)))->F_whenShooting) != 0) goto label_3;
	}
label_4:;
	INST_ICONST(1);
	goto label_5;
label_3:;
	INST_ICONST(0);
label_5:;
	{
	sp -= 1;
	frame[2].i = sp[0].i;
	LINE_NUMBER(194);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (((jfloat)((mindustry_entities_abilities_ShieldArcAbility *) NULL_CHECK((frame[0].o)))->F_alpha) - ((clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta) / (jfloat(10.0f)))), (jfloat(0)));
	((mindustry_entities_abilities_ShieldArcAbility *) NULL_CHECK(sp[0].o))->F_alpha = temp0;
	LINE_NUMBER(196);
	if ((frame[2].i) == 0) goto label_8;
	}
	{
	LINE_NUMBER(197);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_lerpDelta_float_float_float_R_float(ctx, ((jfloat)((mindustry_entities_abilities_ShieldArcAbility *) NULL_CHECK((frame[0].o)))->F_widthScale), (jfloat(1)), (jfloat(0.06f)));
	((mindustry_entities_abilities_ShieldArcAbility *) NULL_CHECK(sp[0].o))->F_widthScale = temp0;
	LINE_NUMBER(198);
	clinit_mindustry_entities_abilities_ShieldArcAbility(ctx);
	SF_mindustry_entities_abilities_ShieldArcAbility_paramUnit = (frame[1].o);
	LINE_NUMBER(199);
	clinit_mindustry_entities_abilities_ShieldArcAbility(ctx);
	SF_mindustry_entities_abilities_ShieldArcAbility_paramField = (frame[0].o);
	LINE_NUMBER(200);
	clinit_mindustry_entities_abilities_ShieldArcAbility(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_abilities_ShieldArcAbility_paramPos;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, ((jfloat)((mindustry_entities_abilities_ShieldArcAbility *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_entities_abilities_ShieldArcAbility *) NULL_CHECK((frame[0].o)))->F_y));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_rotate_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_rotate_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_rotation) - (jfloat(90.0f))));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_add_arc_math_geom_Position_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_add_arc_math_geom_Position_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(202);
	frame[3].f = (((jfloat)((mindustry_entities_abilities_ShieldArcAbility *) NULL_CHECK((frame[0].o)))->F_radius) + ((jfloat)((mindustry_entities_abilities_ShieldArcAbility *) NULL_CHECK((frame[0].o)))->F_width));
	LINE_NUMBER(203);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_bullet;
	clinit_mindustry_entities_abilities_ShieldArcAbility(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_abilities_ShieldArcAbility_paramPos;
	jfloat temp1 = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x) - (frame[3].f);
	clinit_mindustry_entities_abilities_ShieldArcAbility(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_abilities_ShieldArcAbility_paramPos;
	jfloat temp2 = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y) - (frame[3].f);
	jfloat temp3 = (frame[3].f) * (jfloat(2));
	jfloat temp4 = (frame[3].f) * (jfloat(2));
	clinit_mindustry_entities_abilities_ShieldArcAbility(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_abilities_ShieldArcAbility_shieldConsumer;
	((func_mindustry_entities_EntityGroup_intersect_float_float_float_float_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_intersect_float_float_float_float_arc_func_Cons])(ctx, sp[0].o, temp1, temp2, temp3, temp4, sp[1].o);
	LINE_NUMBER(204);
	clinit_mindustry_entities_abilities_ShieldArcAbility(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_abilities_ShieldArcAbility_paramUnit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_team;
	clinit_mindustry_entities_abilities_ShieldArcAbility(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_abilities_ShieldArcAbility_paramPos;
	jfloat temp5 = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x) - (frame[3].f);
	clinit_mindustry_entities_abilities_ShieldArcAbility(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_abilities_ShieldArcAbility_paramPos;
	jfloat temp6 = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y) - (frame[3].f);
	jfloat temp7 = (frame[3].f) * (jfloat(2));
	jfloat temp8 = (frame[3].f) * (jfloat(2));
	clinit_mindustry_entities_abilities_ShieldArcAbility(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_abilities_ShieldArcAbility_unitConsumer;
	SM_mindustry_entities_Units_nearbyEnemies_mindustry_game_Team_float_float_float_float_arc_func_Cons(ctx, sp[0].o, temp5, temp6, temp7, temp8, sp[1].o);
	LINE_NUMBER(205);
	goto label_17;
	}
label_8:;
	{
	LINE_NUMBER(206);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_lerpDelta_float_float_float_R_float(ctx, ((jfloat)((mindustry_entities_abilities_ShieldArcAbility *) NULL_CHECK((frame[0].o)))->F_widthScale), (jfloat(0)), (jfloat(0.11f)));
	((mindustry_entities_abilities_ShieldArcAbility *) NULL_CHECK(sp[0].o))->F_widthScale = temp0;
	}
label_17:;
	LINE_NUMBER(208);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_abilities_ShieldArcAbility_created_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/abilities/ShieldArcAbility:created", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(212);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_mindustry_entities_abilities_ShieldArcAbility_scaledMax_mindustry_gen_Unit_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_abilities_ShieldArcAbility_scaledMax_mindustry_gen_Unit_R_float])(ctx, (frame[0].o), (frame[1].o));
	((mindustry_entities_abilities_Ability *) NULL_CHECK(sp[0].o))->F_data = temp0;
	LINE_NUMBER(213);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_abilities_ShieldArcAbility_draw_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/abilities/ShieldArcAbility:draw", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(217);
	if ((floatCompare(((jfloat)((mindustry_entities_abilities_ShieldArcAbility *) NULL_CHECK((frame[0].o)))->F_widthScale), (jfloat(1,000000e-03f)), -1)) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(218);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (jfloat(125.0f)));
	LINE_NUMBER(220);
	sp[0].o = (jobject)((mindustry_entities_abilities_ShieldArcAbility *) NULL_CHECK((frame[0].o)))->F_color;
	if (sp[0].o != nullptr) goto label_4;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_type;
	sp[0].o = (jobject)((func_mindustry_type_UnitType_shieldColor_mindustry_gen_Unit_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_UnitType_shieldColor_mindustry_gen_Unit_R_arc_graphics_Color])(ctx, sp[0].o, (frame[1].o));
	sp += 1;
	goto label_5;
	}
label_4:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((mindustry_entities_abilities_ShieldArcAbility *) NULL_CHECK(sp[-1].o))->F_color;
label_5:;
	{
	sp -= 1;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_white;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, ((jfloat)((mindustry_entities_abilities_ShieldArcAbility *) NULL_CHECK((frame[0].o)))->F_alpha));
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color_arc_graphics_Color_float(ctx, sp[0].o, sp[1].o, temp0);
	LINE_NUMBER(221);
	clinit_mindustry_entities_abilities_ShieldArcAbility(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_abilities_ShieldArcAbility_paramPos;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, ((jfloat)((mindustry_entities_abilities_ShieldArcAbility *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_entities_abilities_ShieldArcAbility *) NULL_CHECK((frame[0].o)))->F_y));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_rotate_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_rotate_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_rotation) - (jfloat(90.0f))));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_add_arc_math_geom_Position_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_add_arc_math_geom_Position_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(223);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	if (((jint)((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_animateShields) != 0) goto label_8;
	}
	{
	LINE_NUMBER(224);
	SM_arc_graphics_g2d_Draw_alpha_float(ctx, (jfloat(0.4f)));
	}
label_8:;
	{
	LINE_NUMBER(227);
	sp[0].o = (jobject)((mindustry_entities_abilities_ShieldArcAbility *) NULL_CHECK((frame[0].o)))->F_region;
	if (sp[0].o == nullptr) goto label_10;
	}
	{
	LINE_NUMBER(228);
	if (((jint)((mindustry_entities_abilities_ShieldArcAbility *) NULL_CHECK((frame[0].o)))->F_offsetRegion) == 0) goto label_12;
	}
	INST_ALOAD(2);
	goto label_13;
label_12:;
	{
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_arc_math_geom_Position_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Position_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[1].o));
	sp += 1;
	}
label_13:;
	{
	sp -= 1;
	frame[3].o = sp[0].o;
	LINE_NUMBER(229);
	clinit_arc_graphics_g2d_Draw(ctx);
	SF_arc_graphics_g2d_Draw_yscl = ((jfloat)((mindustry_entities_abilities_ShieldArcAbility *) NULL_CHECK((frame[0].o)))->F_widthScale);
	LINE_NUMBER(230);
	sp[0].o = (jobject)((mindustry_entities_abilities_ShieldArcAbility *) NULL_CHECK((frame[0].o)))->F_region;
	SM_arc_graphics_g2d_Draw_rect_java_lang_String_float_float_float(ctx, sp[0].o, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[3].o)))->F_x), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[3].o)))->F_y), (((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_rotation) - (jfloat(90.0f))));
	LINE_NUMBER(231);
	clinit_arc_graphics_g2d_Draw(ctx);
	SF_arc_graphics_g2d_Draw_yscl = (jfloat(1));
	}
label_10:;
	{
	LINE_NUMBER(234);
	if (((jint)((mindustry_entities_abilities_ShieldArcAbility *) NULL_CHECK((frame[0].o)))->F_drawArc) == 0) goto label_17;
	}
	{
	LINE_NUMBER(235);
	SM_arc_graphics_g2d_Lines_stroke_float(ctx, (((jfloat)((mindustry_entities_abilities_ShieldArcAbility *) NULL_CHECK((frame[0].o)))->F_width) * ((jfloat)((mindustry_entities_abilities_ShieldArcAbility *) NULL_CHECK((frame[0].o)))->F_widthScale)));
	LINE_NUMBER(236);
	SM_arc_graphics_g2d_Lines_arc_float_float_float_float_float(ctx, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[2].o)))->F_x), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[2].o)))->F_y), ((jfloat)((mindustry_entities_abilities_ShieldArcAbility *) NULL_CHECK((frame[0].o)))->F_radius), (((jfloat)((mindustry_entities_abilities_ShieldArcAbility *) NULL_CHECK((frame[0].o)))->F_angle) / (jfloat(360.0f))), ((((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_rotation) + ((jfloat)((mindustry_entities_abilities_ShieldArcAbility *) NULL_CHECK((frame[0].o)))->F_angleOffset)) - (((jfloat)((mindustry_entities_abilities_ShieldArcAbility *) NULL_CHECK((frame[0].o)))->F_angle) / (jfloat(2)))));
	}
label_17:;
	LINE_NUMBER(238);
	SM_arc_graphics_g2d_Draw_reset(ctx);
label_1:;
	LINE_NUMBER(240);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_abilities_ShieldArcAbility_displayBars_mindustry_gen_Unit_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/abilities/ShieldArcAbility:displayBars", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(244);
	sp[0].o = frame[2].o;
	clinit_mindustry_ui_Bar(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_Bar);
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"stat.shieldhealth"_j));
	clinit_mindustry_graphics_Pal(ctx);
	sp[3].o = (jobject)SF_mindustry_graphics_Pal_accent;
	{ /* InvokeDynamic */
		clinit_mindustry_entities_abilities_ShieldArcAbility_invoke_arc_func_Floatp_1(ctx);
		auto proxy = (mindustry_entities_abilities_ShieldArcAbility_invoke_arc_func_Floatp_1 *) gcAlloc(ctx, &class_mindustry_entities_abilities_ShieldArcAbility_invoke_arc_func_Floatp_1);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	init_mindustry_ui_Bar_java_lang_String_arc_graphics_Color_arc_func_Floatp(ctx, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(245);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_entities_abilities_ShieldArcAbility_lambda$displayBars$0_mindustry_gen_Unit_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/abilities/ShieldArcAbility:lambda$displayBars$0", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(244);
	jfloat temp0 = (jfloat)((mindustry_entities_abilities_Ability *) NULL_CHECK((frame[0].o)))->F_data;
	jfloat temp1 = (jfloat)((func_mindustry_entities_abilities_ShieldArcAbility_scaledMax_mindustry_gen_Unit_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_abilities_ShieldArcAbility_scaledMax_mindustry_gen_Unit_R_float])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return (temp0 / temp1);
	}

	popStackFrame(ctx);
}

void SM_mindustry_entities_abilities_ShieldArcAbility_lambda$static$1_mindustry_gen_Unit(jcontext ctx, jobject param0) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/abilities/ShieldArcAbility:lambda$static$1", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_abilities_ShieldArcAbility(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(84);
	clinit_mindustry_entities_abilities_ShieldArcAbility(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_abilities_ShieldArcAbility_paramField;
	if ((floatCompare(((jfloat)((mindustry_entities_abilities_Ability *) NULL_CHECK(sp[0].o))->F_data), (jfloat(0)), -1)) <= 0) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	clinit_mindustry_entities_abilities_ShieldArcAbility(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_abilities_ShieldArcAbility_paramUnit;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[1].o))->F_team;
	jint temp0 = (jint)((func_mindustry_gen_Unit_targetable_mindustry_game_Team_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_targetable_mindustry_game_Team_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	clinit_mindustry_entities_abilities_ShieldArcAbility(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_abilities_ShieldArcAbility_paramPos;
	clinit_mindustry_entities_abilities_ShieldArcAbility(ctx);
	sp[2].o = (jobject)SF_mindustry_entities_abilities_ShieldArcAbility_paramField;
	jfloat temp0 = (jfloat)((mindustry_entities_abilities_ShieldArcAbility *) NULL_CHECK(sp[2].o))->F_radius;
	clinit_mindustry_entities_abilities_ShieldArcAbility(ctx);
	sp[2].o = (jobject)SF_mindustry_entities_abilities_ShieldArcAbility_paramField;
	jfloat temp1 = temp0 - ((jfloat)((mindustry_entities_abilities_ShieldArcAbility *) NULL_CHECK(sp[2].o))->F_width);
	LINE_NUMBER(85);
	jint temp2 = (jint)((func_mindustry_gen_Unit_within_arc_math_geom_Position_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_within_arc_math_geom_Position_float_R_boolean])(ctx, sp[0].o, sp[1].o, temp1);
	if (temp2 == 0) goto label_3;
	}
	{
	clinit_mindustry_entities_abilities_ShieldArcAbility(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_abilities_ShieldArcAbility_paramPos;
	jfloat temp0 = ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x) - ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_deltaX);
	jfloat temp1 = ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y) - ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_deltaY);
	clinit_mindustry_entities_abilities_ShieldArcAbility(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_abilities_ShieldArcAbility_paramField;
	jfloat temp2 = (jfloat)((mindustry_entities_abilities_ShieldArcAbility *) NULL_CHECK(sp[1].o))->F_radius;
	clinit_mindustry_entities_abilities_ShieldArcAbility(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_abilities_ShieldArcAbility_paramField;
	jint temp3 = (jint)((func_arc_math_geom_Vec2_within_float_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_within_float_float_float_R_boolean])(ctx, sp[0].o, temp0, temp1, (temp2 - ((jfloat)((mindustry_entities_abilities_ShieldArcAbility *) NULL_CHECK(sp[1].o))->F_width)));
	if (temp3 != 0) goto label_1;
	}
label_3:;
	{
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	sp[1].o = frame[0].o;
	LINE_NUMBER(86);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_arc_math_geom_Position_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Position_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_add_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_add_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_deltaX), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_deltaY));
	clinit_mindustry_entities_abilities_ShieldArcAbility(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_abilities_ShieldArcAbility_paramPos;
	clinit_mindustry_entities_abilities_ShieldArcAbility(ctx);
	sp[2].o = (jobject)SF_mindustry_entities_abilities_ShieldArcAbility_paramField;
	jfloat temp0 = (jfloat)((mindustry_entities_abilities_ShieldArcAbility *) NULL_CHECK(sp[2].o))->F_radius;
	clinit_mindustry_entities_abilities_ShieldArcAbility(ctx);
	sp[2].o = (jobject)SF_mindustry_entities_abilities_ShieldArcAbility_paramField;
	jint temp1 = (jint)((func_arc_math_geom_Vec2_within_arc_math_geom_Position_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_within_arc_math_geom_Position_float_R_boolean])(ctx, sp[0].o, sp[1].o, (temp0 + ((jfloat)((mindustry_entities_abilities_ShieldArcAbility *) NULL_CHECK(sp[2].o))->F_width)));
	if (temp1 != 0) goto label_5;
	}
	{
	sp[0].o = frame[0].o;
	clinit_mindustry_entities_abilities_ShieldArcAbility(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_abilities_ShieldArcAbility_paramPos;
	clinit_mindustry_entities_abilities_ShieldArcAbility(ctx);
	sp[2].o = (jobject)SF_mindustry_entities_abilities_ShieldArcAbility_paramField;
	jfloat temp0 = (jfloat)((mindustry_entities_abilities_ShieldArcAbility *) NULL_CHECK(sp[2].o))->F_radius;
	clinit_mindustry_entities_abilities_ShieldArcAbility(ctx);
	sp[2].o = (jobject)SF_mindustry_entities_abilities_ShieldArcAbility_paramField;
	jint temp1 = (jint)((func_mindustry_gen_Unit_within_arc_math_geom_Position_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_within_arc_math_geom_Position_float_R_boolean])(ctx, sp[0].o, sp[1].o, (temp0 + ((jfloat)((mindustry_entities_abilities_ShieldArcAbility *) NULL_CHECK(sp[2].o))->F_width)));
	if (temp1 == 0) goto label_1;
	}
label_5:;
	{
	clinit_mindustry_entities_abilities_ShieldArcAbility(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_abilities_ShieldArcAbility_paramPos;
	sp[1].o = frame[0].o;
	LINE_NUMBER(87);
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec2_angleTo_arc_math_geom_Position_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_angleTo_arc_math_geom_Position_R_float])(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_entities_abilities_ShieldArcAbility(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_abilities_ShieldArcAbility_paramUnit;
	jfloat temp1 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_rotation;
	clinit_mindustry_entities_abilities_ShieldArcAbility(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_abilities_ShieldArcAbility_paramField;
	jfloat temp2 = temp1 + ((jfloat)((mindustry_entities_abilities_ShieldArcAbility *) NULL_CHECK(sp[0].o))->F_angleOffset);
	clinit_mindustry_entities_abilities_ShieldArcAbility(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_abilities_ShieldArcAbility_paramField;
	jint temp3 = (jint)SM_arc_math_Angles_within_float_float_float_R_boolean(ctx, temp0, temp2, (((jfloat)((mindustry_entities_abilities_ShieldArcAbility *) NULL_CHECK(sp[0].o))->F_angle) / (jfloat(2))));
	if (temp3 != 0) goto label_7;
	}
	{
	clinit_mindustry_entities_abilities_ShieldArcAbility(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_abilities_ShieldArcAbility_paramPos;
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec2_angleTo_float_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_angleTo_float_float_R_float])(ctx, sp[0].o, (((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x) + ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_deltaX)), (((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y) + ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_deltaY)));
	clinit_mindustry_entities_abilities_ShieldArcAbility(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_abilities_ShieldArcAbility_paramUnit;
	jfloat temp1 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_rotation;
	clinit_mindustry_entities_abilities_ShieldArcAbility(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_abilities_ShieldArcAbility_paramField;
	jfloat temp2 = temp1 + ((jfloat)((mindustry_entities_abilities_ShieldArcAbility *) NULL_CHECK(sp[0].o))->F_angleOffset);
	clinit_mindustry_entities_abilities_ShieldArcAbility(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_abilities_ShieldArcAbility_paramField;
	jint temp3 = (jint)SM_arc_math_Angles_within_float_float_float_R_boolean(ctx, temp0, temp2, (((jfloat)((mindustry_entities_abilities_ShieldArcAbility *) NULL_CHECK(sp[0].o))->F_angle) / (jfloat(2))));
	if (temp3 == 0) goto label_1;
	}
label_7:;
	{
	LINE_NUMBER(89);
	jint temp0 = (jint)((func_mindustry_gen_Unit_isMissile_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Unit_isMissile_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_8;
	}
	{
	clinit_mindustry_entities_abilities_ShieldArcAbility(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_abilities_ShieldArcAbility_paramField;
	if ((floatCompare(((jfloat)((mindustry_entities_abilities_ShieldArcAbility *) NULL_CHECK(sp[0].o))->F_missileUnitMultiplier), (jfloat(0)), -1)) < 0) goto label_8;
	}
	{
	LINE_NUMBER(90);
	SM_mindustry_gen_Call_unitSafeDeath_mindustry_gen_Unit(ctx, (frame[0].o));
	LINE_NUMBER(91);
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_absorb;
	((func_mindustry_entities_Effect_at_arc_math_geom_Position) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_arc_math_geom_Position])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(92);
	clinit_mindustry_entities_abilities_ShieldArcAbility(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_abilities_ShieldArcAbility_paramField;
	sp[0].o = (jobject)((mindustry_entities_abilities_ShieldArcAbility *) NULL_CHECK(sp[0].o))->F_pushEffect;
	jfloat temp0 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y;
	clinit_mindustry_entities_abilities_ShieldArcAbility(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_abilities_ShieldArcAbility_paramUnit;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[1].o))->F_team;
	sp[1].o = (jobject)((mindustry_game_Team *) NULL_CHECK(sp[1].o))->F_color;
	((func_mindustry_entities_Effect_at_float_float_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_arc_graphics_Color])(ctx, sp[0].o, temp0, temp1, sp[1].o);
	LINE_NUMBER(95);
	clinit_mindustry_entities_abilities_ShieldArcAbility(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_abilities_ShieldArcAbility_paramField;
	jfloat temp2 = (jfloat)((mindustry_entities_abilities_Ability *) NULL_CHECK(sp[0].o))->F_data;
	jfloat temp3 = (jfloat)((func_mindustry_gen_Unit_health_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Unit_health_R_float])(ctx, (frame[0].o));
	clinit_mindustry_entities_abilities_ShieldArcAbility(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_abilities_ShieldArcAbility_paramField;
	jfloat temp4 = temp3 * ((jfloat)((mindustry_entities_abilities_ShieldArcAbility *) NULL_CHECK(sp[1].o))->F_missileUnitMultiplier);
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_team;
	jfloat temp5 = (jfloat)((func_mindustry_game_Rules_unitDamage_mindustry_game_Team_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_game_Rules_unitDamage_mindustry_game_Team_R_float])(ctx, sp[1].o, sp[2].o);
	((mindustry_entities_abilities_Ability *) NULL_CHECK(sp[0].o))->F_data = (temp2 - (temp4 * temp5));
	LINE_NUMBER(96);
	clinit_mindustry_entities_abilities_ShieldArcAbility(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_abilities_ShieldArcAbility_paramField;
	((mindustry_entities_abilities_ShieldArcAbility *) NULL_CHECK(sp[0].o))->F_alpha = (jfloat(1));
	goto label_1;
	}
label_8:;
	{
	LINE_NUMBER(98);
	clinit_mindustry_entities_abilities_ShieldArcAbility(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_abilities_ShieldArcAbility_paramField;
	if (((jint)((mindustry_entities_abilities_ShieldArcAbility *) NULL_CHECK(sp[0].o))->F_pushUnits) == 0) goto label_1;
	}
	{
	clinit_mindustry_entities_abilities_ShieldArcAbility(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_abilities_ShieldArcAbility_paramField;
	if (((jint)((mindustry_entities_abilities_ShieldArcAbility *) NULL_CHECK(sp[0].o))->F_pushDiffLayer) != 0) goto label_14;
	}
	{
	clinit_mindustry_entities_abilities_ShieldArcAbility(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_abilities_ShieldArcAbility_paramUnit;
	jint temp0 = (jint)((func_mindustry_gen_Unit_isFlying_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_isFlying_R_boolean])(ctx, sp[0].o);
	jint temp1 = (jint)((func_mindustry_gen_Unit_isFlying_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Unit_isFlying_R_boolean])(ctx, (frame[0].o));
	if (temp0 != temp1) goto label_1;
	}
label_14:;
	{
	LINE_NUMBER(100);
	clinit_mindustry_entities_abilities_ShieldArcAbility(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_abilities_ShieldArcAbility_paramField;
	jfloat temp0 = (jfloat)((mindustry_entities_abilities_ShieldArcAbility *) NULL_CHECK(sp[0].o))->F_radius;
	clinit_mindustry_entities_abilities_ShieldArcAbility(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_abilities_ShieldArcAbility_paramField;
	frame[1].f = (temp0 + ((jfloat)((mindustry_entities_abilities_ShieldArcAbility *) NULL_CHECK(sp[0].o))->F_width));
	LINE_NUMBER(101);
	jfloat temp1 = frame[1].f;
	sp[0].o = frame[0].o;
	clinit_mindustry_entities_abilities_ShieldArcAbility(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_abilities_ShieldArcAbility_paramPos;
	jfloat temp2 = (jfloat)((func_mindustry_gen_Unit_dst_arc_math_geom_Position_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_dst_arc_math_geom_Position_R_float])(ctx, sp[0].o, sp[1].o);
	frame[2].f = (temp1 - temp2);
	LINE_NUMBER(103);
	if ((floatCompare((frame[2].f), (jfloat(0)), -1)) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(105);
	sp[0].o = frame[0].o;
	clinit_mindustry_entities_abilities_ShieldArcAbility(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_abilities_ShieldArcAbility_paramPos;
	jfloat temp0 = (jfloat)((func_mindustry_gen_Unit_angleTo_arc_math_geom_Position_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_angleTo_arc_math_geom_Position_R_float])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_vel;
	jfloat temp1 = (jfloat)((func_arc_math_geom_Vec2_angle_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_angle_R_float])(ctx, sp[0].o);
	jfloat temp2 = (jfloat)SM_arc_math_Angles_angleDist_float_float_R_float(ctx, temp0, temp1);
	if ((floatCompare(temp2, (jfloat(90.0f)), 1)) >= 0) goto label_18;
	}
	{
	LINE_NUMBER(106);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_vel;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_setZero_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_setZero_R_arc_math_geom_Vec2])(ctx, sp[0].o);
	}
label_18:;
	{
	LINE_NUMBER(109);
	sp[0].o = frame[0].o;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	sp[1].o = (jobject)((func_arc_math_geom_Vec2_set_arc_math_geom_Position_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Position_R_arc_math_geom_Vec2])(ctx, sp[1].o, (frame[0].o));
	clinit_mindustry_entities_abilities_ShieldArcAbility(ctx);
	sp[2].o = (jobject)SF_mindustry_entities_abilities_ShieldArcAbility_paramPos;
	sp[1].o = (jobject)((func_arc_math_geom_Vec2_sub_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_sub_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_arc_math_geom_Vec2_setLength_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_setLength_float_R_arc_math_geom_Vec2])(ctx, sp[1].o, ((frame[2].f) + (jfloat(1,000000e-02f))));
	((func_mindustry_gen_Unit_move_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_move_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(111);
	jint temp0 = (jint)SM_arc_math_Mathf_chanceDelta_double_R_boolean(ctx, (jdouble(((jfloat(0.3f)) * (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta)))));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(112);
	clinit_mindustry_entities_abilities_ShieldArcAbility(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_abilities_ShieldArcAbility_paramField;
	sp[0].o = (jobject)((mindustry_entities_abilities_ShieldArcAbility *) NULL_CHECK(sp[0].o))->F_pushEffect;
	jfloat temp0 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y;
	clinit_mindustry_entities_abilities_ShieldArcAbility(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_abilities_ShieldArcAbility_paramUnit;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[1].o))->F_team;
	sp[1].o = (jobject)((mindustry_game_Team *) NULL_CHECK(sp[1].o))->F_color;
	((func_mindustry_entities_Effect_at_float_float_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_arc_graphics_Color])(ctx, sp[0].o, temp0, temp1, sp[1].o);
	}
label_1:;
	LINE_NUMBER(117);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_entities_abilities_ShieldArcAbility_lambda$static$0_mindustry_gen_Bullet(jcontext ctx, jobject param0) {
	jtype frame[18];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/abilities/ShieldArcAbility:lambda$static$0", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_abilities_ShieldArcAbility(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(24);
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_team;
	clinit_mindustry_entities_abilities_ShieldArcAbility(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_abilities_ShieldArcAbility_paramUnit;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[1].o))->F_team;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_absorbable) == 0) goto label_1;
	}
	{
	clinit_mindustry_entities_abilities_ShieldArcAbility(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_abilities_ShieldArcAbility_paramField;
	if ((floatCompare(((jfloat)((mindustry_entities_abilities_Ability *) NULL_CHECK(sp[0].o))->F_data), (jfloat(0)), -1)) <= 0) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	clinit_mindustry_entities_abilities_ShieldArcAbility(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_abilities_ShieldArcAbility_paramPos;
	clinit_mindustry_entities_abilities_ShieldArcAbility(ctx);
	sp[2].o = (jobject)SF_mindustry_entities_abilities_ShieldArcAbility_paramField;
	jfloat temp0 = (jfloat)((mindustry_entities_abilities_ShieldArcAbility *) NULL_CHECK(sp[2].o))->F_radius;
	clinit_mindustry_entities_abilities_ShieldArcAbility(ctx);
	sp[2].o = (jobject)SF_mindustry_entities_abilities_ShieldArcAbility_paramField;
	jfloat temp1 = temp0 - ((jfloat)((mindustry_entities_abilities_ShieldArcAbility *) NULL_CHECK(sp[2].o))->F_width);
	LINE_NUMBER(25);
	jint temp2 = (jint)((func_mindustry_gen_Bullet_within_arc_math_geom_Position_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Bullet_within_arc_math_geom_Position_float_R_boolean])(ctx, sp[0].o, sp[1].o, temp1);
	if (temp2 == 0) goto label_3;
	}
	{
	clinit_mindustry_entities_abilities_ShieldArcAbility(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_abilities_ShieldArcAbility_paramPos;
	jfloat temp0 = ((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_x) - ((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_deltaX);
	jfloat temp1 = ((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_y) - ((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_deltaY);
	clinit_mindustry_entities_abilities_ShieldArcAbility(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_abilities_ShieldArcAbility_paramField;
	jfloat temp2 = (jfloat)((mindustry_entities_abilities_ShieldArcAbility *) NULL_CHECK(sp[1].o))->F_radius;
	clinit_mindustry_entities_abilities_ShieldArcAbility(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_abilities_ShieldArcAbility_paramField;
	jint temp3 = (jint)((func_arc_math_geom_Vec2_within_float_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_within_float_float_float_R_boolean])(ctx, sp[0].o, temp0, temp1, (temp2 - ((jfloat)((mindustry_entities_abilities_ShieldArcAbility *) NULL_CHECK(sp[1].o))->F_width)));
	if (temp3 != 0) goto label_1;
	}
label_3:;
	{
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	sp[1].o = frame[0].o;
	LINE_NUMBER(26);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_arc_math_geom_Position_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Position_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_add_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_add_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, ((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_deltaX), ((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_deltaY));
	clinit_mindustry_entities_abilities_ShieldArcAbility(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_abilities_ShieldArcAbility_paramPos;
	clinit_mindustry_entities_abilities_ShieldArcAbility(ctx);
	sp[2].o = (jobject)SF_mindustry_entities_abilities_ShieldArcAbility_paramField;
	jfloat temp0 = (jfloat)((mindustry_entities_abilities_ShieldArcAbility *) NULL_CHECK(sp[2].o))->F_radius;
	clinit_mindustry_entities_abilities_ShieldArcAbility(ctx);
	sp[2].o = (jobject)SF_mindustry_entities_abilities_ShieldArcAbility_paramField;
	jint temp1 = (jint)((func_arc_math_geom_Vec2_within_arc_math_geom_Position_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_within_arc_math_geom_Position_float_R_boolean])(ctx, sp[0].o, sp[1].o, (temp0 + ((jfloat)((mindustry_entities_abilities_ShieldArcAbility *) NULL_CHECK(sp[2].o))->F_width)));
	if (temp1 != 0) goto label_5;
	}
	{
	sp[0].o = frame[0].o;
	clinit_mindustry_entities_abilities_ShieldArcAbility(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_abilities_ShieldArcAbility_paramPos;
	clinit_mindustry_entities_abilities_ShieldArcAbility(ctx);
	sp[2].o = (jobject)SF_mindustry_entities_abilities_ShieldArcAbility_paramField;
	jfloat temp0 = (jfloat)((mindustry_entities_abilities_ShieldArcAbility *) NULL_CHECK(sp[2].o))->F_radius;
	clinit_mindustry_entities_abilities_ShieldArcAbility(ctx);
	sp[2].o = (jobject)SF_mindustry_entities_abilities_ShieldArcAbility_paramField;
	jint temp1 = (jint)((func_mindustry_gen_Bullet_within_arc_math_geom_Position_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Bullet_within_arc_math_geom_Position_float_R_boolean])(ctx, sp[0].o, sp[1].o, (temp0 + ((jfloat)((mindustry_entities_abilities_ShieldArcAbility *) NULL_CHECK(sp[2].o))->F_width)));
	if (temp1 == 0) goto label_1;
	}
label_5:;
	{
	clinit_mindustry_entities_abilities_ShieldArcAbility(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_abilities_ShieldArcAbility_paramPos;
	sp[1].o = frame[0].o;
	LINE_NUMBER(27);
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec2_angleTo_arc_math_geom_Position_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_angleTo_arc_math_geom_Position_R_float])(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_entities_abilities_ShieldArcAbility(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_abilities_ShieldArcAbility_paramUnit;
	jfloat temp1 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_rotation;
	clinit_mindustry_entities_abilities_ShieldArcAbility(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_abilities_ShieldArcAbility_paramField;
	jfloat temp2 = temp1 + ((jfloat)((mindustry_entities_abilities_ShieldArcAbility *) NULL_CHECK(sp[0].o))->F_angleOffset);
	clinit_mindustry_entities_abilities_ShieldArcAbility(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_abilities_ShieldArcAbility_paramField;
	jint temp3 = (jint)SM_arc_math_Angles_within_float_float_float_R_boolean(ctx, temp0, temp2, (((jfloat)((mindustry_entities_abilities_ShieldArcAbility *) NULL_CHECK(sp[0].o))->F_angle) / (jfloat(2))));
	if (temp3 != 0) goto label_7;
	}
	{
	clinit_mindustry_entities_abilities_ShieldArcAbility(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_abilities_ShieldArcAbility_paramPos;
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec2_angleTo_float_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_angleTo_float_float_R_float])(ctx, sp[0].o, (((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_x) + ((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_deltaX)), (((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_y) + ((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_deltaY)));
	clinit_mindustry_entities_abilities_ShieldArcAbility(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_abilities_ShieldArcAbility_paramUnit;
	jfloat temp1 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_rotation;
	clinit_mindustry_entities_abilities_ShieldArcAbility(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_abilities_ShieldArcAbility_paramField;
	jfloat temp2 = temp1 + ((jfloat)((mindustry_entities_abilities_ShieldArcAbility *) NULL_CHECK(sp[0].o))->F_angleOffset);
	clinit_mindustry_entities_abilities_ShieldArcAbility(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_abilities_ShieldArcAbility_paramField;
	jint temp3 = (jint)SM_arc_math_Angles_within_float_float_float_R_boolean(ctx, temp0, temp2, (((jfloat)((mindustry_entities_abilities_ShieldArcAbility *) NULL_CHECK(sp[0].o))->F_angle) / (jfloat(2))));
	if (temp3 == 0) goto label_1;
	}
label_7:;
	{
	LINE_NUMBER(29);
	clinit_mindustry_entities_abilities_ShieldArcAbility(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_abilities_ShieldArcAbility_paramField;
	if ((floatCompare(((jfloat)((mindustry_entities_abilities_ShieldArcAbility *) NULL_CHECK(sp[0].o))->F_chanceDeflect), (jfloat(0)), -1)) <= 0) goto label_8;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_vel;
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec2_len_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_len_R_float])(ctx, sp[0].o);
	if ((floatCompare(temp0, (jfloat(0.1f)), -1)) < 0) goto label_8;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_reflectable) == 0) goto label_8;
	}
	{
	clinit_mindustry_entities_abilities_ShieldArcAbility(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_abilities_ShieldArcAbility_paramField;
	jint temp0 = (jint)SM_arc_math_Mathf_chance_double_R_boolean(ctx, (jdouble(((jfloat)((mindustry_entities_abilities_ShieldArcAbility *) NULL_CHECK(sp[0].o))->F_chanceDeflect))));
	if (temp0 == 0) goto label_8;
	}
	{
	LINE_NUMBER(32);
	clinit_mindustry_entities_abilities_ShieldArcAbility(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_abilities_ShieldArcAbility_paramField;
	sp[0].o = (jobject)((mindustry_entities_abilities_ShieldArcAbility *) NULL_CHECK(sp[0].o))->F_deflectSound;
	clinit_mindustry_entities_abilities_ShieldArcAbility(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_abilities_ShieldArcAbility_paramPos;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_random_float_float_R_float(ctx, (jfloat(0.9f)), (jfloat(1.1f)));
	jint temp1 = (jint)((func_arc_audio_Sound_at_arc_math_geom_Position_float_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Sound_at_arc_math_geom_Position_float_R_int])(ctx, sp[0].o, sp[1].o, temp0);
	LINE_NUMBER(35);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_vel;
	jfloat temp2 = -((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x);
	sp[1].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_vel;
	((func_mindustry_gen_Bullet_trns_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Bullet_trns_float_float])(ctx, sp[0].o, temp2, (-((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y)));
	LINE_NUMBER(37);
	jfloat temp3 = (jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_x;
	clinit_mindustry_entities_abilities_ShieldArcAbility(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_abilities_ShieldArcAbility_paramPos;
	frame[1].f = (temp3 - ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x));
	jfloat temp4 = (jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_y;
	clinit_mindustry_entities_abilities_ShieldArcAbility(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_abilities_ShieldArcAbility_paramPos;
	frame[2].f = (temp4 - ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y));
	LINE_NUMBER(38);
	jfloat temp5 = (jfloat)SM_arc_math_Mathf_len_float_float_R_float(ctx, (frame[1].f), (frame[2].f));
	frame[3].f = temp5;
	LINE_NUMBER(39);
	if ((floatCompare((frame[3].f), (jfloat(1,000000e-04f)), -1)) <= 0) goto label_15;
	}
	{
	LINE_NUMBER(40);
	frame[1].f = ((frame[1].f) / (frame[3].f));
	LINE_NUMBER(41);
	frame[2].f = ((frame[2].f) / (frame[3].f));
	}
label_15:;
	{
	LINE_NUMBER(44);
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_vel;
	jfloat temp0 = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x) * (frame[1].f);
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_vel;
	frame[4].f = (temp0 + (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y) * (frame[2].f)));
	LINE_NUMBER(45);
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_vel;
	frame[5].f = (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x) - (((jfloat(2)) * (frame[4].f)) * (frame[1].f)));
	LINE_NUMBER(46);
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_vel;
	frame[6].f = (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y) - (((jfloat(2)) * (frame[4].f)) * (frame[2].f)));
	LINE_NUMBER(47);
	frame[7].f = (((frame[5].f) * (frame[1].f)) + ((frame[6].f) * (frame[2].f)));
	LINE_NUMBER(48);
	frame[8].f = ((frame[7].f) * (frame[1].f));
	frame[9].f = ((frame[7].f) * (frame[2].f));
	LINE_NUMBER(49);
	frame[10].f = ((frame[5].f) - (frame[8].f));
	frame[11].f = ((frame[6].f) - (frame[9].f));
	LINE_NUMBER(51);
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_vel;
	jfloat temp1 = frame[8].f;
	jfloat temp2 = frame[10].f;
	clinit_mindustry_entities_abilities_ShieldArcAbility(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_abilities_ShieldArcAbility_paramField;
	jfloat temp3 = temp1 + (temp2 * ((jfloat)((mindustry_entities_abilities_ShieldArcAbility *) NULL_CHECK(sp[1].o))->F_reflectVel));
	jfloat temp4 = frame[9].f;
	jfloat temp5 = frame[11].f;
	clinit_mindustry_entities_abilities_ShieldArcAbility(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_abilities_ShieldArcAbility_paramField;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp3, (temp4 + (temp5 * ((jfloat)((mindustry_entities_abilities_ShieldArcAbility *) NULL_CHECK(sp[1].o))->F_reflectVel))));
	LINE_NUMBER(53);
	sp[0].o = frame[0].o;
	clinit_mindustry_entities_abilities_ShieldArcAbility(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_abilities_ShieldArcAbility_paramUnit;
	((mindustry_gen_Bullet *) NULL_CHECK(sp[0].o))->F_owner = (jref) sp[1].o;
	LINE_NUMBER(54);
	sp[0].o = frame[0].o;
	clinit_mindustry_entities_abilities_ShieldArcAbility(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_abilities_ShieldArcAbility_paramUnit;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[1].o))->F_team;
	((mindustry_gen_Bullet *) NULL_CHECK(sp[0].o))->F_team = (jref) sp[1].o;
	LINE_NUMBER(55);
	sp[0].o = frame[0].o;
	jfloat temp6 = (jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_lifetime;
	clinit_mindustry_entities_abilities_ShieldArcAbility(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_abilities_ShieldArcAbility_paramField;
	((mindustry_gen_Bullet *) NULL_CHECK(sp[0].o))->F_time = (temp6 * ((jfloat)((mindustry_entities_abilities_ShieldArcAbility *) NULL_CHECK(sp[1].o))->F_reflectTime));
	LINE_NUMBER(56);
	clinit_mindustry_entities_abilities_ShieldArcAbility(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_abilities_ShieldArcAbility_paramField;
	if ((floatCompare(((jfloat)((mindustry_entities_abilities_ShieldArcAbility *) NULL_CHECK(sp[0].o))->F_reflectBuildingDamage), (jfloat(0)), -1)) <= 0) goto label_30;
	}
	{
	LINE_NUMBER(57);
	sp[0].o = frame[0].o;
	clinit_mindustry_entities_abilities_ShieldArcAbility(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_abilities_ShieldArcAbility_paramField;
	((mindustry_gen_Bullet *) NULL_CHECK(sp[0].o))->F_buildingDamageMultiplier = ((jfloat)((mindustry_entities_abilities_ShieldArcAbility *) NULL_CHECK(sp[1].o))->F_reflectBuildingDamage);
	}
label_30:;
	LINE_NUMBER(60);
	goto label_32;
label_8:;
	{
	LINE_NUMBER(61);
	((func_mindustry_gen_Bullet_absorb) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Bullet_absorb])(ctx, (frame[0].o));
	LINE_NUMBER(62);
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_absorb;
	((func_mindustry_entities_Effect_at_arc_math_geom_Position) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_arc_math_geom_Position])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(64);
	clinit_mindustry_entities_abilities_ShieldArcAbility(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_abilities_ShieldArcAbility_paramField;
	sp[0].o = (jobject)((mindustry_entities_abilities_ShieldArcAbility *) NULL_CHECK(sp[0].o))->F_hitSound;
	jfloat temp0 = (jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_y;
	jfloat temp2 = jfloat(1);
	jfloat temp3 = (jfloat)SM_arc_math_Mathf_range_float_R_float(ctx, (jfloat(0.1f)));
	jfloat temp4 = temp2 + temp3;
	clinit_mindustry_entities_abilities_ShieldArcAbility(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_abilities_ShieldArcAbility_paramField;
	jint temp5 = (jint)((func_arc_audio_Sound_at_float_float_float_float_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Sound_at_float_float_float_float_R_int])(ctx, sp[0].o, temp0, temp1, temp4, ((jfloat)((mindustry_entities_abilities_ShieldArcAbility *) NULL_CHECK(sp[1].o))->F_hitSoundVolume));
	}
label_32:;
	{
	LINE_NUMBER(68);
	clinit_mindustry_entities_abilities_ShieldArcAbility(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_abilities_ShieldArcAbility_paramField;
	jfloat temp0 = (jfloat)((mindustry_entities_abilities_Ability *) NULL_CHECK(sp[0].o))->F_data;
	jfloat temp1 = (jfloat)((func_mindustry_gen_Bullet_damage_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Bullet_damage_R_float])(ctx, (frame[0].o));
	if ((floatCompare(temp0, temp1, 1)) > 0) goto label_35;
	}
	{
	LINE_NUMBER(69);
	clinit_mindustry_entities_abilities_ShieldArcAbility(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_abilities_ShieldArcAbility_paramField;
	jfloat temp0 = (jfloat)((mindustry_entities_abilities_Ability *) NULL_CHECK(sp[0].o))->F_data;
	clinit_mindustry_entities_abilities_ShieldArcAbility(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_abilities_ShieldArcAbility_paramField;
	jfloat temp1 = (jfloat)((mindustry_entities_abilities_ShieldArcAbility *) NULL_CHECK(sp[1].o))->F_cooldown;
	clinit_mindustry_entities_abilities_ShieldArcAbility(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_abilities_ShieldArcAbility_paramField;
	((mindustry_entities_abilities_Ability *) NULL_CHECK(sp[0].o))->F_data = (temp0 - (temp1 * ((jfloat)((mindustry_entities_abilities_ShieldArcAbility *) NULL_CHECK(sp[1].o))->F_regen)));
	LINE_NUMBER(71);
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_arcShieldBreak;
	clinit_mindustry_entities_abilities_ShieldArcAbility(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_abilities_ShieldArcAbility_paramPos;
	jfloat temp2 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x;
	clinit_mindustry_entities_abilities_ShieldArcAbility(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_abilities_ShieldArcAbility_paramPos;
	jfloat temp3 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y;
	jfloat temp4 = jfloat(0);
	clinit_mindustry_entities_abilities_ShieldArcAbility(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_abilities_ShieldArcAbility_paramField;
	sp[1].o = (jobject)((mindustry_entities_abilities_ShieldArcAbility *) NULL_CHECK(sp[1].o))->F_color;
	jobject temp5 = sp[1].o;
	sp[1].f = temp2;
	sp[2].f = temp3;
	sp[3].f = temp4;
	sp += 4;
	if (temp5 != nullptr) goto label_38;
	}
	{
	clinit_mindustry_entities_abilities_ShieldArcAbility(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_abilities_ShieldArcAbility_paramUnit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type;
	clinit_mindustry_entities_abilities_ShieldArcAbility(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_abilities_ShieldArcAbility_paramUnit;
	sp[0].o = (jobject)((func_mindustry_type_UnitType_shieldColor_mindustry_gen_Unit_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_UnitType_shieldColor_mindustry_gen_Unit_R_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	sp += 1;
	goto label_39;
	}
label_38:;
	clinit_mindustry_entities_abilities_ShieldArcAbility(ctx);
	(sp++)->o = SF_mindustry_entities_abilities_ShieldArcAbility_paramField;
	sp[-1].o = (jobject) ((mindustry_entities_abilities_ShieldArcAbility *) NULL_CHECK(sp[-1].o))->F_color;
label_39:;
	{
	sp -= 5;
	clinit_mindustry_entities_abilities_ShieldArcAbility(ctx);
	sp[5].o = (jobject)SF_mindustry_entities_abilities_ShieldArcAbility_paramUnit;
	((func_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color_java_lang_Object])(ctx, sp[0].o, sp[1].f, sp[2].f, sp[3].f, sp[4].o, sp[5].o);
	LINE_NUMBER(73);
	clinit_mindustry_entities_abilities_ShieldArcAbility(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_abilities_ShieldArcAbility_paramField;
	sp[0].o = (jobject)((mindustry_entities_abilities_ShieldArcAbility *) NULL_CHECK(sp[0].o))->F_breakSound;
	clinit_mindustry_entities_abilities_ShieldArcAbility(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_abilities_ShieldArcAbility_paramPos;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x;
	clinit_mindustry_entities_abilities_ShieldArcAbility(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_abilities_ShieldArcAbility_paramPos;
	jint temp1 = (jint)((func_arc_audio_Sound_at_float_float_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Sound_at_float_float_R_int])(ctx, sp[0].o, temp0, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y));
	}
label_35:;
	{
	LINE_NUMBER(77);
	clinit_mindustry_entities_abilities_ShieldArcAbility(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_abilities_ShieldArcAbility_paramField;
	jfloat temp0 = (jfloat)((mindustry_entities_abilities_Ability *) NULL_CHECK(sp[0].o))->F_data;
	sp[1].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_type;
	jfloat temp1 = (jfloat)((func_mindustry_entities_bullet_BulletType_shieldDamage_mindustry_gen_Bullet_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_entities_bullet_BulletType_shieldDamage_mindustry_gen_Bullet_R_float])(ctx, sp[1].o, (frame[0].o));
	((mindustry_entities_abilities_Ability *) NULL_CHECK(sp[0].o))->F_data = (temp0 - temp1);
	LINE_NUMBER(78);
	clinit_mindustry_entities_abilities_ShieldArcAbility(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_abilities_ShieldArcAbility_paramField;
	((mindustry_entities_abilities_ShieldArcAbility *) NULL_CHECK(sp[0].o))->F_alpha = (jfloat(1));
	}
label_1:;
	LINE_NUMBER(80);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void clinit_mindustry_entities_abilities_ShieldArcAbility(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_entities_abilities_Ability(ctx);
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/abilities/ShieldArcAbility:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_abilities_ShieldArcAbility(ctx);
	{
	LINE_NUMBER(22);
	clinit_arc_math_geom_Vec2(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[0].o);
	clinit_mindustry_entities_abilities_ShieldArcAbility(ctx);
	SF_mindustry_entities_abilities_ShieldArcAbility_paramPos = sp[0].o;
	LINE_NUMBER(23);
	{ /* InvokeDynamic */
		clinit_mindustry_entities_abilities_ShieldArcAbility_invoke_arc_func_Cons_2(ctx);
		auto proxy = (mindustry_entities_abilities_ShieldArcAbility_invoke_arc_func_Cons_2 *) gcAlloc(ctx, &class_mindustry_entities_abilities_ShieldArcAbility_invoke_arc_func_Cons_2);
		sp[0].o = (jobject) proxy;
	}
	clinit_mindustry_entities_abilities_ShieldArcAbility(ctx);
	SF_mindustry_entities_abilities_ShieldArcAbility_shieldConsumer = sp[0].o;
	LINE_NUMBER(82);
	{ /* InvokeDynamic */
		clinit_mindustry_entities_abilities_ShieldArcAbility_invoke_arc_func_Cons_3(ctx);
		auto proxy = (mindustry_entities_abilities_ShieldArcAbility_invoke_arc_func_Cons_3 *) gcAlloc(ctx, &class_mindustry_entities_abilities_ShieldArcAbility_invoke_arc_func_Cons_3);
		sp[0].o = (jobject) proxy;
	}
	clinit_mindustry_entities_abilities_ShieldArcAbility(ctx);
	SF_mindustry_entities_abilities_ShieldArcAbility_unitConsumer = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_entities_abilities_ShieldArcAbility;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[12]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[13]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[14]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[15]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[16]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[17]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[18]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[19]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[20]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[21]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[22]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[23]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[24]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field region
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[25]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field color
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[26]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[27]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[28]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[29]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[30]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[31]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[32]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_entities_abilities_ShieldArcAbility[] {
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
	(void *) M_mindustry_entities_abilities_ShieldArcAbility_update_mindustry_gen_Unit,
	(void *) M_mindustry_entities_abilities_ShieldArcAbility_draw_mindustry_gen_Unit,
	(void *) M_mindustry_entities_abilities_Ability_death_mindustry_gen_Unit,
	(void *) M_mindustry_entities_abilities_ShieldArcAbility_created_mindustry_gen_Unit,
	(void *) M_mindustry_entities_abilities_Ability_init_mindustry_type_UnitType,
	(void *) M_mindustry_entities_abilities_ShieldArcAbility_displayBars_mindustry_gen_Unit_arc_scene_ui_layout_Table,
	(void *) M_mindustry_entities_abilities_Ability_display_arc_scene_ui_layout_Table,
	(void *) M_mindustry_entities_abilities_ShieldArcAbility_addStats_arc_scene_ui_layout_Table,
	(void *) M_mindustry_entities_abilities_Ability_abilityStat_java_lang_String_Array1_java_lang_Object_R_java_lang_String,
	(void *) M_mindustry_entities_abilities_Ability_copy_R_mindustry_entities_abilities_Ability,
	(void *) M_mindustry_entities_abilities_Ability_localized_R_java_lang_String,
	(void *) M_mindustry_entities_abilities_Ability_getBundle_R_java_lang_String,
	(void *) M_mindustry_entities_abilities_Ability_lambda$display$0_arc_scene_ui_layout_Table,
	(void *) M_mindustry_entities_abilities_ShieldArcAbility_scaledMax_mindustry_gen_Unit_R_float,
	(void *) M_mindustry_entities_abilities_ShieldArcAbility_lambda$displayBars$0_mindustry_gen_Unit_R_float,
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
	{ "lambda$displayBars$0", "(Lmindustry/gen/Unit;)F" },
};

static FieldMetadata fields[] {
	{ "paramUnit", &class_mindustry_gen_Unit, (intptr_t) &SF_mindustry_entities_abilities_ShieldArcAbility_paramUnit, "Lmindustry/gen/Unit;", 10 },
	{ "paramField", &class_mindustry_entities_abilities_ShieldArcAbility, (intptr_t) &SF_mindustry_entities_abilities_ShieldArcAbility_paramField, "Lmindustry/entities/abilities/ShieldArcAbility;", 10 },
	{ "paramPos", &class_arc_math_geom_Vec2, (intptr_t) &SF_mindustry_entities_abilities_ShieldArcAbility_paramPos, "Larc/math/geom/Vec2;", 10 },
	{ "shieldConsumer", &class_arc_func_Cons, (intptr_t) &SF_mindustry_entities_abilities_ShieldArcAbility_shieldConsumer, "Larc/func/Cons;", 26 },
	{ "unitConsumer", &class_arc_func_Cons, (intptr_t) &SF_mindustry_entities_abilities_ShieldArcAbility_unitConsumer, "Larc/func/Cons;", 28 },
	{ "radius", &class_float, offsetof(mindustry_entities_abilities_ShieldArcAbility, F_radius), "F", 1 },
	{ "regen", &class_float, offsetof(mindustry_entities_abilities_ShieldArcAbility, F_regen), "F", 1 },
	{ "max", &class_float, offsetof(mindustry_entities_abilities_ShieldArcAbility, F_max), "F", 1 },
	{ "cooldown", &class_float, offsetof(mindustry_entities_abilities_ShieldArcAbility, F_cooldown), "F", 1 },
	{ "angle", &class_float, offsetof(mindustry_entities_abilities_ShieldArcAbility, F_angle), "F", 1 },
	{ "angleOffset", &class_float, offsetof(mindustry_entities_abilities_ShieldArcAbility, F_angleOffset), "F", 1 },
	{ "x", &class_float, offsetof(mindustry_entities_abilities_ShieldArcAbility, F_x), "F", 1 },
	{ "y", &class_float, offsetof(mindustry_entities_abilities_ShieldArcAbility, F_y), "F", 1 },
	{ "whenShooting", &class_boolean, offsetof(mindustry_entities_abilities_ShieldArcAbility, F_whenShooting), "Z", 1 },
	{ "width", &class_float, offsetof(mindustry_entities_abilities_ShieldArcAbility, F_width), "F", 1 },
	{ "chanceDeflect", &class_float, offsetof(mindustry_entities_abilities_ShieldArcAbility, F_chanceDeflect), "F", 1 },
	{ "reflectBuildingDamage", &class_float, offsetof(mindustry_entities_abilities_ShieldArcAbility, F_reflectBuildingDamage), "F", 1 },
	{ "reflectVel", &class_float, offsetof(mindustry_entities_abilities_ShieldArcAbility, F_reflectVel), "F", 1 },
	{ "reflectTime", &class_float, offsetof(mindustry_entities_abilities_ShieldArcAbility, F_reflectTime), "F", 1 },
	{ "deflectSound", &class_arc_audio_Sound, offsetof(mindustry_entities_abilities_ShieldArcAbility, F_deflectSound), "Larc/audio/Sound;", 1 },
	{ "breakSound", &class_arc_audio_Sound, offsetof(mindustry_entities_abilities_ShieldArcAbility, F_breakSound), "Larc/audio/Sound;", 1 },
	{ "hitSound", &class_arc_audio_Sound, offsetof(mindustry_entities_abilities_ShieldArcAbility, F_hitSound), "Larc/audio/Sound;", 1 },
	{ "hitSoundVolume", &class_float, offsetof(mindustry_entities_abilities_ShieldArcAbility, F_hitSoundVolume), "F", 1 },
	{ "missileUnitMultiplier", &class_float, offsetof(mindustry_entities_abilities_ShieldArcAbility, F_missileUnitMultiplier), "F", 1 },
	{ "drawArc", &class_boolean, offsetof(mindustry_entities_abilities_ShieldArcAbility, F_drawArc), "Z", 1 },
	{ "region", &class_java_lang_String, offsetof(mindustry_entities_abilities_ShieldArcAbility, F_region), "Ljava/lang/String;", 1 },
	{ "color", &class_arc_graphics_Color, offsetof(mindustry_entities_abilities_ShieldArcAbility, F_color), "Larc/graphics/Color;", 1 },
	{ "offsetRegion", &class_boolean, offsetof(mindustry_entities_abilities_ShieldArcAbility, F_offsetRegion), "Z", 1 },
	{ "pushUnits", &class_boolean, offsetof(mindustry_entities_abilities_ShieldArcAbility, F_pushUnits), "Z", 1 },
	{ "pushDiffLayer", &class_boolean, offsetof(mindustry_entities_abilities_ShieldArcAbility, F_pushDiffLayer), "Z", 1 },
	{ "pushEffect", &class_mindustry_entities_Effect, offsetof(mindustry_entities_abilities_ShieldArcAbility, F_pushEffect), "Lmindustry/entities/Effect;", 1 },
	{ "widthScale", &class_float, offsetof(mindustry_entities_abilities_ShieldArcAbility, F_widthScale), "F", 4 },
	{ "alpha", &class_float, offsetof(mindustry_entities_abilities_ShieldArcAbility, F_alpha), "F", 4 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_entities_abilities_ShieldArcAbility, 0, "()V", 1 },
	{ "scaledMax", (intptr_t) M_mindustry_entities_abilities_ShieldArcAbility_scaledMax_mindustry_gen_Unit_R_float, VTABLE_mindustry_entities_abilities_ShieldArcAbility_scaledMax_mindustry_gen_Unit_R_float, "(Lmindustry/gen/Unit;)F", 1 },
	{ "addStats", (intptr_t) M_mindustry_entities_abilities_ShieldArcAbility_addStats_arc_scene_ui_layout_Table, VTABLE_mindustry_entities_abilities_ShieldArcAbility_addStats_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 1 },
	{ "update", (intptr_t) M_mindustry_entities_abilities_ShieldArcAbility_update_mindustry_gen_Unit, VTABLE_mindustry_entities_abilities_ShieldArcAbility_update_mindustry_gen_Unit, "(Lmindustry/gen/Unit;)V", 1 },
	{ "created", (intptr_t) M_mindustry_entities_abilities_ShieldArcAbility_created_mindustry_gen_Unit, VTABLE_mindustry_entities_abilities_ShieldArcAbility_created_mindustry_gen_Unit, "(Lmindustry/gen/Unit;)V", 1 },
	{ "draw", (intptr_t) M_mindustry_entities_abilities_ShieldArcAbility_draw_mindustry_gen_Unit, VTABLE_mindustry_entities_abilities_ShieldArcAbility_draw_mindustry_gen_Unit, "(Lmindustry/gen/Unit;)V", 1 },
	{ "displayBars", (intptr_t) M_mindustry_entities_abilities_ShieldArcAbility_displayBars_mindustry_gen_Unit_arc_scene_ui_layout_Table, VTABLE_mindustry_entities_abilities_ShieldArcAbility_displayBars_mindustry_gen_Unit_arc_scene_ui_layout_Table, "(Lmindustry/gen/Unit;Larc/scene/ui/layout/Table;)V", 1 },
	{ "lambda$displayBars$0", (intptr_t) M_mindustry_entities_abilities_ShieldArcAbility_lambda$displayBars$0_mindustry_gen_Unit_R_float, VTABLE_mindustry_entities_abilities_ShieldArcAbility_lambda$displayBars$0_mindustry_gen_Unit_R_float, "(Lmindustry/gen/Unit;)F", 4098 },
	{ "lambda$static$1", (intptr_t) SM_mindustry_entities_abilities_ShieldArcAbility_lambda$static$1_mindustry_gen_Unit, 0, "(Lmindustry/gen/Unit;)V", 4106 },
	{ "lambda$static$0", (intptr_t) SM_mindustry_entities_abilities_ShieldArcAbility_lambda$static$0_mindustry_gen_Bullet, 0, "(Lmindustry/gen/Bullet;)V", 4106 },
	{ "<clinit>", (intptr_t) clinit_mindustry_entities_abilities_ShieldArcAbility, 0, "()V", 8 },
};

Class class_mindustry_entities_abilities_ShieldArcAbility{
		.nativeName = (intptr_t) "mindustry/entities/abilities/ShieldArcAbility",
		.parentClass = (intptr_t) &class_mindustry_entities_abilities_Ability,
		.size = sizeof(mindustry_entities_abilities_ShieldArcAbility),
		.classVtable = (intptr_t) vtable_mindustry_entities_abilities_ShieldArcAbility,
		.staticInitializer = (intptr_t) clinit_mindustry_entities_abilities_ShieldArcAbility,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_entities_abilities_ShieldArcAbility,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 33,
		.nativeFields = (intptr_t) fields,
		.methodCount = 11,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 26,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_entities_abilities_ShieldArcAbility = registerClass(&class_mindustry_entities_abilities_ShieldArcAbility);

}
