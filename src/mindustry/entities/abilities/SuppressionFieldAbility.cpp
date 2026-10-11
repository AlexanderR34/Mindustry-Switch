#include "mindustry/entities/abilities/SuppressionFieldAbility.h"
#include "arc/math/geom/Vec2.h"
#include "arc/math/Rand.h"
#include "arc/math/Angles.h"
#include "arc/graphics/g2d/Lines.h"
#include "arc/graphics/Color.h"
#include "arc/graphics/g2d/Draw.h"
#include "arc/graphics/g2d/Fill.h"
#include "java/lang/String.h"
#include "mindustry/entities/abilities/Ability.h"
#include "arc/util/I18NBundle.h"
#include "arc/util/Tmp.h"
#include "arc/scene/ui/layout/Cell.h"
#include "arc/math/geom/Position.h"
#include "arc/math/Mathf.h"
#include "arc/Core.h"
#include "mindustry/gen/Unit.h"
#include "arc/math/Interp.h"
#include "arc/scene/ui/layout/Table.h"
#include "arc/util/Time.h"
#include "mindustry/entities/Damage.h"
#include "mindustry/type/UnitType.h"
#include "java/lang/CharSequence.h"
#include "arc/util/Strings.h"
#include "mindustry/graphics/Pal.h"
#include "java/lang/Object.h"
#include "mindustry/entities/abilities/SuppressionFieldAbility.h"
#include "mindustry/entities/abilities/SuppressionFieldAbility_invoke_arc_math_Interp_1.h"
#include "mindustry/game/Team.h"

extern "C" {

jobject SF_mindustry_entities_abilities_SuppressionFieldAbility_rand;

void mark_mindustry_entities_abilities_SuppressionFieldAbility(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_entities_abilities_SuppressionFieldAbility_rand)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_entities_abilities_SuppressionFieldAbility_rand)->clazz)->markFunction)((jobject) SF_mindustry_entities_abilities_SuppressionFieldAbility_rand, mark, depth + 1);
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
	auto self = (mindustry_entities_abilities_SuppressionFieldAbility *) object;
	if (self->F_color)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_color)->clazz)->markFunction)((jobject) self->F_color, mark, depth + 1);
	if (self->F_particleInterp)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_particleInterp)->clazz)->markFunction)((jobject) self->F_particleInterp, mark, depth + 1);
	if (self->F_particleColor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_particleColor)->clazz)->markFunction)((jobject) self->F_particleColor, mark, depth + 1);
	if (self->F_effectColor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_effectColor)->clazz)->markFunction)((jobject) self->F_effectColor, mark, depth + 1);
}

void init_mindustry_entities_abilities_SuppressionFieldAbility(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/abilities/SuppressionFieldAbility:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_abilities_SuppressionFieldAbility(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(16);
	init_mindustry_entities_abilities_Ability(ctx, (frame[0].o));
	LINE_NUMBER(19);
	((mindustry_entities_abilities_SuppressionFieldAbility *) NULL_CHECK((frame[0].o)))->F_reload = (jfloat(90.0f));
	LINE_NUMBER(20);
	((mindustry_entities_abilities_SuppressionFieldAbility *) NULL_CHECK((frame[0].o)))->F_maxDelay = (jfloat(90.0f));
	LINE_NUMBER(21);
	((mindustry_entities_abilities_SuppressionFieldAbility *) NULL_CHECK((frame[0].o)))->F_range = (jfloat(200.0f));
	LINE_NUMBER(23);
	((mindustry_entities_abilities_SuppressionFieldAbility *) NULL_CHECK((frame[0].o)))->F_orbRadius = (jfloat(4.1f));
	((mindustry_entities_abilities_SuppressionFieldAbility *) NULL_CHECK((frame[0].o)))->F_orbMidScl = (jfloat(0.33f));
	((mindustry_entities_abilities_SuppressionFieldAbility *) NULL_CHECK((frame[0].o)))->F_orbSinScl = (jfloat(8.0f));
	((mindustry_entities_abilities_SuppressionFieldAbility *) NULL_CHECK((frame[0].o)))->F_orbSinMag = (jfloat(1));
	LINE_NUMBER(24);
	sp[0].o = frame[0].o;
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_suppress;
	((mindustry_entities_abilities_SuppressionFieldAbility *) NULL_CHECK(sp[0].o))->F_color = (jref) sp[1].o;
	LINE_NUMBER(25);
	((mindustry_entities_abilities_SuppressionFieldAbility *) NULL_CHECK((frame[0].o)))->F_layer = (jfloat(110.0f));
	LINE_NUMBER(27);
	((mindustry_entities_abilities_SuppressionFieldAbility *) NULL_CHECK((frame[0].o)))->F_x = (jfloat(0));
	((mindustry_entities_abilities_SuppressionFieldAbility *) NULL_CHECK((frame[0].o)))->F_y = (jfloat(0));
	LINE_NUMBER(28);
	((mindustry_entities_abilities_SuppressionFieldAbility *) NULL_CHECK((frame[0].o)))->F_particles = (15);
	LINE_NUMBER(29);
	((mindustry_entities_abilities_SuppressionFieldAbility *) NULL_CHECK((frame[0].o)))->F_particleSize = (jfloat(4.0f));
	LINE_NUMBER(30);
	((mindustry_entities_abilities_SuppressionFieldAbility *) NULL_CHECK((frame[0].o)))->F_particleLen = (jfloat(7.0f));
	LINE_NUMBER(31);
	((mindustry_entities_abilities_SuppressionFieldAbility *) NULL_CHECK((frame[0].o)))->F_rotateScl = (jfloat(3.0f));
	LINE_NUMBER(32);
	((mindustry_entities_abilities_SuppressionFieldAbility *) NULL_CHECK((frame[0].o)))->F_particleLife = (jfloat(110.0f));
	LINE_NUMBER(33);
	((mindustry_entities_abilities_SuppressionFieldAbility *) NULL_CHECK((frame[0].o)))->F_active = (jint(1));
	LINE_NUMBER(34);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_entities_abilities_SuppressionFieldAbility_invoke_arc_math_Interp_1(ctx);
		auto proxy = (mindustry_entities_abilities_SuppressionFieldAbility_invoke_arc_math_Interp_1 *) gcAlloc(ctx, &class_mindustry_entities_abilities_SuppressionFieldAbility_invoke_arc_math_Interp_1);
		sp[1].o = (jobject) proxy;
	}
	((mindustry_entities_abilities_SuppressionFieldAbility *) NULL_CHECK(sp[0].o))->F_particleInterp = (jref) sp[1].o;
	LINE_NUMBER(35);
	sp[0].o = frame[0].o;
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_sap;
	sp[1].o = (jobject)((func_arc_graphics_Color_cpy_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Color_cpy_R_arc_graphics_Color])(ctx, sp[1].o);
	((mindustry_entities_abilities_SuppressionFieldAbility *) NULL_CHECK(sp[0].o))->F_particleColor = (jref) sp[1].o;
	LINE_NUMBER(36);
	sp[0].o = frame[0].o;
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_sapBullet;
	((mindustry_entities_abilities_SuppressionFieldAbility *) NULL_CHECK(sp[0].o))->F_effectColor = (jref) sp[1].o;
	LINE_NUMBER(38);
	((mindustry_entities_abilities_SuppressionFieldAbility *) NULL_CHECK((frame[0].o)))->F_applyParticleChance = (jfloat(13.0f));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_abilities_SuppressionFieldAbility_init_mindustry_type_UnitType(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/abilities/SuppressionFieldAbility:init", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(44);
	if (((jint)((mindustry_entities_abilities_SuppressionFieldAbility *) NULL_CHECK((frame[0].o)))->F_active) != 0) goto label_1;
	}
	{
	((mindustry_entities_abilities_Ability *) NULL_CHECK((frame[0].o)))->F_display = (jint(0));
	}
label_1:;
	LINE_NUMBER(45);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_abilities_SuppressionFieldAbility_addStats_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/abilities/SuppressionFieldAbility:addStats", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(49);
	M_mindustry_entities_abilities_Ability_addStats_arc_scene_ui_layout_Table(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(50);
	sp[0].o = frame[1].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"bullet.range"_j));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[4].o = (jobject)SM_arc_util_Strings_autoFixed_float_int_R_java_lang_String(ctx, (((jfloat)((mindustry_entities_abilities_SuppressionFieldAbility *) NULL_CHECK((frame[0].o)))->F_range) / (jfloat(8.0f))), (jint(2)));
	ARRAY_ACCESS(jobject, sp[3].o, temp0) = sp[4].o;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(51);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(52);
	sp[0].o = frame[1].o;
	sp[1].o = frame[0].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"duration"_j));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp1 = jint(0);
	sp[4].o = (jobject)SM_arc_util_Strings_autoFixed_float_int_R_java_lang_String(ctx, (((jfloat)((mindustry_entities_abilities_SuppressionFieldAbility *) NULL_CHECK((frame[0].o)))->F_reload) / (jfloat(60.0f))), (jint(2)));
	ARRAY_ACCESS(jobject, sp[3].o, temp1) = sp[4].o;
	sp[1].o = (jobject)((func_mindustry_entities_abilities_SuppressionFieldAbility_abilityStat_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_entities_abilities_SuppressionFieldAbility_abilityStat_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(53);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_abilities_SuppressionFieldAbility_update_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/abilities/SuppressionFieldAbility:update", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(57);
	if (((jint)((mindustry_entities_abilities_SuppressionFieldAbility *) NULL_CHECK((frame[0].o)))->F_active) != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(59);
	sp[0].o = frame[0].o;
	jfloat temp0 = ((jfloat)((mindustry_entities_abilities_SuppressionFieldAbility *) NULL_CHECK(sp[0].o))->F_timer) + (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta);
	((mindustry_entities_abilities_SuppressionFieldAbility *) NULL_CHECK(sp[0].o))->F_timer = temp0;
	if ((floatCompare(temp0, ((jfloat)((mindustry_entities_abilities_SuppressionFieldAbility *) NULL_CHECK((frame[0].o)))->F_maxDelay), -1)) < 0) goto label_2;
	}
	{
	LINE_NUMBER(60);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, ((jfloat)((mindustry_entities_abilities_SuppressionFieldAbility *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_entities_abilities_SuppressionFieldAbility *) NULL_CHECK((frame[0].o)))->F_y));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_rotate_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_rotate_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_rotation) - (jfloat(90.0f))));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_add_arc_math_geom_Position_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_add_arc_math_geom_Position_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(61);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_team;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp1 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y;
	jfloat temp2 = (jfloat)((mindustry_entities_abilities_SuppressionFieldAbility *) NULL_CHECK((frame[0].o)))->F_range;
	jfloat temp3 = (jfloat)((mindustry_entities_abilities_SuppressionFieldAbility *) NULL_CHECK((frame[0].o)))->F_reload;
	jfloat temp4 = (jfloat)((mindustry_entities_abilities_SuppressionFieldAbility *) NULL_CHECK((frame[0].o)))->F_maxDelay;
	jfloat temp5 = (jfloat)((mindustry_entities_abilities_SuppressionFieldAbility *) NULL_CHECK((frame[0].o)))->F_applyParticleChance;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_entities_abilities_SuppressionFieldAbility *) NULL_CHECK((frame[0].o)))->F_effectColor;
	SM_mindustry_entities_Damage_applySuppression_mindustry_game_Team_float_float_float_float_float_float_arc_math_geom_Position_arc_graphics_Color(ctx, sp[0].o, temp0, temp1, temp2, temp3, temp4, temp5, sp[1].o, sp[2].o);
	LINE_NUMBER(62);
	((mindustry_entities_abilities_SuppressionFieldAbility *) NULL_CHECK((frame[0].o)))->F_timer = (jfloat(0));
	}
label_2:;
	LINE_NUMBER(64);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_abilities_SuppressionFieldAbility_draw_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/abilities/SuppressionFieldAbility:draw", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(68);
	SM_arc_graphics_g2d_Draw_z_float(ctx, ((jfloat)((mindustry_entities_abilities_SuppressionFieldAbility *) NULL_CHECK((frame[0].o)))->F_layer));
	LINE_NUMBER(70);
	jfloat temp0 = (jfloat)((mindustry_entities_abilities_SuppressionFieldAbility *) NULL_CHECK((frame[0].o)))->F_orbRadius;
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_absin_float_float_R_float(ctx, ((jfloat)((mindustry_entities_abilities_SuppressionFieldAbility *) NULL_CHECK((frame[0].o)))->F_orbSinScl), ((jfloat)((mindustry_entities_abilities_SuppressionFieldAbility *) NULL_CHECK((frame[0].o)))->F_orbSinMag));
	frame[2].f = (temp0 + temp1);
	LINE_NUMBER(71);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, ((jfloat)((mindustry_entities_abilities_SuppressionFieldAbility *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_entities_abilities_SuppressionFieldAbility *) NULL_CHECK((frame[0].o)))->F_y));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_rotate_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_rotate_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_rotation) - (jfloat(90.0f))));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_add_arc_math_geom_Position_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_add_arc_math_geom_Position_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(72);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	frame[3].f = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	frame[4].f = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y);
	LINE_NUMBER(74);
	frame[5].f = ((clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time) / ((jfloat)((mindustry_entities_abilities_SuppressionFieldAbility *) NULL_CHECK((frame[0].o)))->F_particleLife));
	LINE_NUMBER(75);
	clinit_mindustry_entities_abilities_SuppressionFieldAbility(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_abilities_SuppressionFieldAbility_rand;
	jint temp2 = (jint)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_id;
	jint temp3 = (jint)((func_java_lang_Object_hashCode_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_hashCode_R_int])(ctx, (frame[0].o));
	((func_arc_math_Rand_setSeed_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_setSeed_long])(ctx, sp[0].o, (jlong((temp2 + temp3))));
	LINE_NUMBER(76);
	sp[0].o = (jobject)((mindustry_entities_abilities_SuppressionFieldAbility *) NULL_CHECK((frame[0].o)))->F_particleColor;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(77);
	frame[6].i = (jint(0));
	}
label_9:;
	{
	if ((frame[6].i) >= ((jint)((mindustry_entities_abilities_SuppressionFieldAbility *) NULL_CHECK((frame[0].o)))->F_particles)) goto label_10;
	}
	{
	LINE_NUMBER(78);
	clinit_mindustry_entities_abilities_SuppressionFieldAbility(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_abilities_SuppressionFieldAbility_rand;
	jfloat temp0 = (jfloat)((func_arc_math_Rand_random_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_random_float_R_float])(ctx, sp[0].o, (jfloat(1)));
	frame[7].f = (fmodf((temp0 + (frame[5].f)), (jfloat(1))));
	frame[8].f = ((jfloat(1)) - (frame[7].f));
	LINE_NUMBER(79);
	clinit_mindustry_entities_abilities_SuppressionFieldAbility(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_abilities_SuppressionFieldAbility_rand;
	jfloat temp1 = (jfloat)((func_arc_math_Rand_random_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_random_float_R_float])(ctx, sp[0].o, (jfloat(360.0f)));
	frame[9].f = (temp1 + (fmodf((((clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time) / ((jfloat)((mindustry_entities_abilities_SuppressionFieldAbility *) NULL_CHECK((frame[0].o)))->F_rotateScl)) + ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_rotation)), (jfloat(360.0f)))));
	LINE_NUMBER(80);
	jfloat temp2 = (jfloat)((mindustry_entities_abilities_SuppressionFieldAbility *) NULL_CHECK((frame[0].o)))->F_particleLen;
	sp[0].o = (jobject)((mindustry_entities_abilities_SuppressionFieldAbility *) NULL_CHECK((frame[0].o)))->F_particleInterp;
	jfloat temp3 = (jfloat)((func_arc_math_Interp_apply_float_R_float) resolveInterfaceMethod(ctx, &class_arc_math_Interp, INDEX_arc_math_Interp_apply_float_R_float, sp[0].o))(ctx, sp[0].o, (frame[8].f));
	frame[10].f = (temp2 * temp3);
	LINE_NUMBER(81);
	jfloat temp4 = frame[3].f;
	jfloat temp5 = frame[9].f;
	jfloat temp6 = frame[10].f;
	LINE_NUMBER(82);
	jfloat temp7 = (jfloat)SM_arc_math_Angles_trnsx_float_float_R_float(ctx, temp5, temp6);
	jfloat temp8 = temp4 + temp7;
	jfloat temp9 = frame[4].f;
	jfloat temp10 = frame[9].f;
	jfloat temp11 = frame[10].f;
	LINE_NUMBER(83);
	jfloat temp12 = (jfloat)SM_arc_math_Angles_trnsy_float_float_R_float(ctx, temp10, temp11);
	jfloat temp13 = temp9 + temp12;
	jfloat temp14 = (jfloat)((mindustry_entities_abilities_SuppressionFieldAbility *) NULL_CHECK((frame[0].o)))->F_particleSize;
	jfloat temp15 = frame[7].f;
	LINE_NUMBER(84);
	jfloat temp16 = (jfloat)SM_arc_math_Mathf_slope_float_R_float(ctx, temp15);
	jfloat temp17 = temp14 * temp16;
	LINE_NUMBER(81);
	SM_arc_graphics_g2d_Fill_circle_float_float_float(ctx, temp8, temp13, temp17);
	LINE_NUMBER(77);
	INST_IINC(6, 1);
	goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(88);
	SM_arc_graphics_g2d_Lines_stroke_float(ctx, (jfloat(2)));
	LINE_NUMBER(90);
	sp[0].o = (jobject)((mindustry_entities_abilities_SuppressionFieldAbility *) NULL_CHECK((frame[0].o)))->F_color;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(91);
	SM_arc_graphics_g2d_Lines_circle_float_float_float(ctx, (frame[3].f), (frame[4].f), (frame[2].f));
	LINE_NUMBER(93);
	sp[0].o = (jobject)((mindustry_entities_abilities_SuppressionFieldAbility *) NULL_CHECK((frame[0].o)))->F_color;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(94);
	SM_arc_graphics_g2d_Fill_circle_float_float_float(ctx, (frame[3].f), (frame[4].f), ((frame[2].f) * ((jfloat)((mindustry_entities_abilities_SuppressionFieldAbility *) NULL_CHECK((frame[0].o)))->F_orbMidScl)));
	LINE_NUMBER(96);
	if (((jint)((mindustry_entities_abilities_SuppressionFieldAbility *) NULL_CHECK((frame[0].o)))->F_active) == 0) goto label_26;
	}
label_26:;
	{
	LINE_NUMBER(100);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(101);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat SM_mindustry_entities_abilities_SuppressionFieldAbility_lambda$new$0_float_R_float(jcontext ctx, jfloat param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/abilities/SuppressionFieldAbility:lambda$new$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_abilities_SuppressionFieldAbility(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(34);
	clinit_arc_math_Interp(ctx);
	sp[0].o = (jobject)SF_arc_math_Interp_circleOut;
	clinit_arc_math_Interp(ctx);
	sp[1].o = (jobject)SF_arc_math_Interp_slope;
	jfloat temp0 = (jfloat)((func_arc_math_Interp_apply_float_R_float) resolveInterfaceMethod(ctx, &class_arc_math_Interp, INDEX_arc_math_Interp_apply_float_R_float, sp[1].o))(ctx, sp[1].o, (frame[0].f));
	jfloat temp1 = (jfloat)((func_arc_math_Interp_apply_float_R_float) resolveInterfaceMethod(ctx, &class_arc_math_Interp, INDEX_arc_math_Interp_apply_float_R_float, sp[0].o))(ctx, sp[0].o, temp0);
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

void clinit_mindustry_entities_abilities_SuppressionFieldAbility(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_entities_abilities_Ability(ctx);
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/abilities/SuppressionFieldAbility:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_abilities_SuppressionFieldAbility(ctx);
	{
	LINE_NUMBER(17);
	clinit_arc_math_Rand(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_Rand);
	init_arc_math_Rand(ctx, sp[0].o);
	clinit_mindustry_entities_abilities_SuppressionFieldAbility(ctx);
	SF_mindustry_entities_abilities_SuppressionFieldAbility_rand = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_entities_abilities_SuppressionFieldAbility[] {
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
	(void *) M_mindustry_entities_abilities_SuppressionFieldAbility_update_mindustry_gen_Unit,
	(void *) M_mindustry_entities_abilities_SuppressionFieldAbility_draw_mindustry_gen_Unit,
	(void *) M_mindustry_entities_abilities_Ability_death_mindustry_gen_Unit,
	(void *) M_mindustry_entities_abilities_Ability_created_mindustry_gen_Unit,
	(void *) M_mindustry_entities_abilities_SuppressionFieldAbility_init_mindustry_type_UnitType,
	(void *) M_mindustry_entities_abilities_Ability_displayBars_mindustry_gen_Unit_arc_scene_ui_layout_Table,
	(void *) M_mindustry_entities_abilities_Ability_display_arc_scene_ui_layout_Table,
	(void *) M_mindustry_entities_abilities_SuppressionFieldAbility_addStats_arc_scene_ui_layout_Table,
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
	{ "rand", &class_arc_math_Rand, (intptr_t) &SF_mindustry_entities_abilities_SuppressionFieldAbility_rand, "Larc/math/Rand;", 12 },
	{ "reload", &class_float, offsetof(mindustry_entities_abilities_SuppressionFieldAbility, F_reload), "F", 1 },
	{ "maxDelay", &class_float, offsetof(mindustry_entities_abilities_SuppressionFieldAbility, F_maxDelay), "F", 1 },
	{ "range", &class_float, offsetof(mindustry_entities_abilities_SuppressionFieldAbility, F_range), "F", 1 },
	{ "orbRadius", &class_float, offsetof(mindustry_entities_abilities_SuppressionFieldAbility, F_orbRadius), "F", 1 },
	{ "orbMidScl", &class_float, offsetof(mindustry_entities_abilities_SuppressionFieldAbility, F_orbMidScl), "F", 1 },
	{ "orbSinScl", &class_float, offsetof(mindustry_entities_abilities_SuppressionFieldAbility, F_orbSinScl), "F", 1 },
	{ "orbSinMag", &class_float, offsetof(mindustry_entities_abilities_SuppressionFieldAbility, F_orbSinMag), "F", 1 },
	{ "color", &class_arc_graphics_Color, offsetof(mindustry_entities_abilities_SuppressionFieldAbility, F_color), "Larc/graphics/Color;", 1 },
	{ "layer", &class_float, offsetof(mindustry_entities_abilities_SuppressionFieldAbility, F_layer), "F", 1 },
	{ "x", &class_float, offsetof(mindustry_entities_abilities_SuppressionFieldAbility, F_x), "F", 1 },
	{ "y", &class_float, offsetof(mindustry_entities_abilities_SuppressionFieldAbility, F_y), "F", 1 },
	{ "particles", &class_int, offsetof(mindustry_entities_abilities_SuppressionFieldAbility, F_particles), "I", 1 },
	{ "particleSize", &class_float, offsetof(mindustry_entities_abilities_SuppressionFieldAbility, F_particleSize), "F", 1 },
	{ "particleLen", &class_float, offsetof(mindustry_entities_abilities_SuppressionFieldAbility, F_particleLen), "F", 1 },
	{ "rotateScl", &class_float, offsetof(mindustry_entities_abilities_SuppressionFieldAbility, F_rotateScl), "F", 1 },
	{ "particleLife", &class_float, offsetof(mindustry_entities_abilities_SuppressionFieldAbility, F_particleLife), "F", 1 },
	{ "active", &class_boolean, offsetof(mindustry_entities_abilities_SuppressionFieldAbility, F_active), "Z", 1 },
	{ "particleInterp", &class_arc_math_Interp, offsetof(mindustry_entities_abilities_SuppressionFieldAbility, F_particleInterp), "Larc/math/Interp;", 1 },
	{ "particleColor", &class_arc_graphics_Color, offsetof(mindustry_entities_abilities_SuppressionFieldAbility, F_particleColor), "Larc/graphics/Color;", 1 },
	{ "effectColor", &class_arc_graphics_Color, offsetof(mindustry_entities_abilities_SuppressionFieldAbility, F_effectColor), "Larc/graphics/Color;", 1 },
	{ "applyParticleChance", &class_float, offsetof(mindustry_entities_abilities_SuppressionFieldAbility, F_applyParticleChance), "F", 1 },
	{ "timer", &class_float, offsetof(mindustry_entities_abilities_SuppressionFieldAbility, F_timer), "F", 4 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_entities_abilities_SuppressionFieldAbility, 0, "()V", 1 },
	{ "init", (intptr_t) M_mindustry_entities_abilities_SuppressionFieldAbility_init_mindustry_type_UnitType, VTABLE_mindustry_entities_abilities_SuppressionFieldAbility_init_mindustry_type_UnitType, "(Lmindustry/type/UnitType;)V", 1 },
	{ "addStats", (intptr_t) M_mindustry_entities_abilities_SuppressionFieldAbility_addStats_arc_scene_ui_layout_Table, VTABLE_mindustry_entities_abilities_SuppressionFieldAbility_addStats_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 1 },
	{ "update", (intptr_t) M_mindustry_entities_abilities_SuppressionFieldAbility_update_mindustry_gen_Unit, VTABLE_mindustry_entities_abilities_SuppressionFieldAbility_update_mindustry_gen_Unit, "(Lmindustry/gen/Unit;)V", 1 },
	{ "draw", (intptr_t) M_mindustry_entities_abilities_SuppressionFieldAbility_draw_mindustry_gen_Unit, VTABLE_mindustry_entities_abilities_SuppressionFieldAbility_draw_mindustry_gen_Unit, "(Lmindustry/gen/Unit;)V", 1 },
	{ "lambda$new$0", (intptr_t) SM_mindustry_entities_abilities_SuppressionFieldAbility_lambda$new$0_float_R_float, 0, "(F)F", 4106 },
	{ "<clinit>", (intptr_t) clinit_mindustry_entities_abilities_SuppressionFieldAbility, 0, "()V", 8 },
};

Class class_mindustry_entities_abilities_SuppressionFieldAbility{
		.nativeName = (intptr_t) "mindustry/entities/abilities/SuppressionFieldAbility",
		.parentClass = (intptr_t) &class_mindustry_entities_abilities_Ability,
		.size = sizeof(mindustry_entities_abilities_SuppressionFieldAbility),
		.classVtable = (intptr_t) vtable_mindustry_entities_abilities_SuppressionFieldAbility,
		.staticInitializer = (intptr_t) clinit_mindustry_entities_abilities_SuppressionFieldAbility,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_entities_abilities_SuppressionFieldAbility,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 23,
		.nativeFields = (intptr_t) fields,
		.methodCount = 7,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 24,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_entities_abilities_SuppressionFieldAbility = registerClass(&class_mindustry_entities_abilities_SuppressionFieldAbility);

}
