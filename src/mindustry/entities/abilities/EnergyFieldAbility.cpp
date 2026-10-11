#include "mindustry/entities/abilities/EnergyFieldAbility.h"
#include "java/lang/Integer.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "arc/graphics/Color.h"
#include "mindustry/entities/abilities/EnergyFieldAbility_invoke_arc_func_Floatf_1.h"
#include "arc/graphics/g2d/Draw.h"
#include "mindustry/entities/Effect.h"
#include "mindustry/content/Fx.h"
#include "arc/util/I18NBundle.h"
#include "arc/util/Tmp.h"
#include "arc/struct/Seq.h"
#include "arc/scene/ui/layout/Cell.h"
#include "mindustry/gen/Healthc.h"
#include "arc/math/geom/Position.h"
#include "arc/math/Mathf.h"
#include "mindustry/entities/abilities/EnergyFieldAbility_invoke_arc_func_Cons_5.h"
#include "arc/func/Floatf.h"
#include "arc/Core.h"
#include "mindustry/gen/Unit.h"
#include "mindustry/gen/Sounds.h"
#include "mindustry/entities/abilities/EnergyFieldAbility_invoke_arc_func_Cons_4.h"
#include "mindustry/entities/abilities/EnergyFieldAbility_invoke_arc_func_Cons_3.h"
#include "arc/util/Time.h"
#include "mindustry/entities/Damage.h"
#include "arc/scene/ui/Label.h"
#include "mindustry/gen/Building.h"
#include "mindustry/gen/Posc.h"
#include "mindustry/entities/abilities/EnergyFieldAbility.h"
#include "java/lang/Object.h"
#include "mindustry/entities/Units.h"
#include "arc/math/geom/Vec2.h"
#include "mindustry/world/Block.h"
#include "mindustry/game/Rules.h"
#include "arc/graphics/g2d/Lines.h"
#include "java/lang/Float.h"
#include "arc/graphics/g2d/Fill.h"
#include "mindustry/gen/Unitc.h"
#include "arc/func/Cons.h"
#include "mindustry/content/StatusEffects.h"
#include "java/lang/String.h"
#include "mindustry/entities/abilities/Ability.h"
#include "java/lang/Math.h"
#include "mindustry/gen/Teamc.h"
#include "arc/scene/ui/layout/Table.h"
#include "mindustry/type/StatusEffect.h"
#include "mindustry/world/meta/StatValues.h"
#include "mindustry/type/UnitType.h"
#include "java/lang/CharSequence.h"
#include "arc/util/Strings.h"
#include "mindustry/graphics/Pal.h"
#include "arc/scene/Element.h"
#include "arc/audio/Sound.h"
#include "mindustry/graphics/Drawf.h"
#include "mindustry/gen/Statusc.h"
#include "mindustry/game/Team.h"
#include "mindustry/Vars.h"
#include "mindustry/core/GameState.h"

extern "C" {

jobject SF_mindustry_entities_abilities_EnergyFieldAbility_all;

void mark_mindustry_entities_abilities_EnergyFieldAbility(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_entities_abilities_EnergyFieldAbility_all)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_entities_abilities_EnergyFieldAbility_all)->clazz)->markFunction)((jobject) SF_mindustry_entities_abilities_EnergyFieldAbility_all, mark, depth + 1);
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
	auto self = (mindustry_entities_abilities_EnergyFieldAbility *) object;
	if (self->F_healEffect)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_healEffect)->clazz)->markFunction)((jobject) self->F_healEffect, mark, depth + 1);
	if (self->F_hitEffect)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_hitEffect)->clazz)->markFunction)((jobject) self->F_hitEffect, mark, depth + 1);
	if (self->F_damageEffect)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_damageEffect)->clazz)->markFunction)((jobject) self->F_damageEffect, mark, depth + 1);
	if (self->F_status)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_status)->clazz)->markFunction)((jobject) self->F_status, mark, depth + 1);
	if (self->F_shootSound)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_shootSound)->clazz)->markFunction)((jobject) self->F_shootSound, mark, depth + 1);
	if (self->F_color)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_color)->clazz)->markFunction)((jobject) self->F_color, mark, depth + 1);
}

void init_mindustry_entities_abilities_EnergyFieldAbility(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/abilities/EnergyFieldAbility:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_abilities_EnergyFieldAbility(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(46);
	init_mindustry_entities_abilities_Ability(ctx, (frame[0].o));
	LINE_NUMBER(24);
	((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK((frame[0].o)))->F_damage = (jfloat(1));
	((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK((frame[0].o)))->F_reload = (jfloat(100.0f));
	((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK((frame[0].o)))->F_range = (jfloat(60.0f));
	LINE_NUMBER(25);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_heal;
	((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK(sp[0].o))->F_healEffect = (jref) sp[1].o;
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_hitLaserBlast;
	((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK(sp[0].o))->F_hitEffect = (jref) sp[1].o;
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_chainLightning;
	((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK(sp[0].o))->F_damageEffect = (jref) sp[1].o;
	LINE_NUMBER(26);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_StatusEffects(ctx);
	sp[1].o = (jobject)SF_mindustry_content_StatusEffects_electrified;
	((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK(sp[0].o))->F_status = (jref) sp[1].o;
	LINE_NUMBER(27);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_shootEnergyField;
	((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK(sp[0].o))->F_shootSound = (jref) sp[1].o;
	LINE_NUMBER(28);
	((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK((frame[0].o)))->F_statusDuration = (jfloat(360.0f));
	LINE_NUMBER(30);
	((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK((frame[0].o)))->F_targetGround = (jint(1));
	((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK((frame[0].o)))->F_targetAir = (jint(1));
	((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK((frame[0].o)))->F_hitBuildings = (jint(1));
	((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK((frame[0].o)))->F_hitUnits = (jint(1));
	LINE_NUMBER(31);
	((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK((frame[0].o)))->F_maxTargets = (25);
	LINE_NUMBER(32);
	((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK((frame[0].o)))->F_healPercent = (jfloat(3.0f));
	LINE_NUMBER(34);
	((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK((frame[0].o)))->F_sameTypeHealMult = (jfloat(1));
	LINE_NUMBER(35);
	((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK((frame[0].o)))->F_displayHeal = (jint(1));
	LINE_NUMBER(37);
	((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK((frame[0].o)))->F_layer = (jfloat(99.999f));
	((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK((frame[0].o)))->F_blinkScl = (jfloat(20.0f));
	((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK((frame[0].o)))->F_blinkSize = (jfloat(0.1f));
	LINE_NUMBER(38);
	((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK((frame[0].o)))->F_effectRadius = (jfloat(5.0f));
	((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK((frame[0].o)))->F_sectorRad = (jfloat(0.14f));
	((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK((frame[0].o)))->F_rotateSpeed = (jfloat(0.5f));
	LINE_NUMBER(39);
	((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK((frame[0].o)))->F_sectors = (jint(5));
	LINE_NUMBER(40);
	sp[0].o = frame[0].o;
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_heal;
	((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK(sp[0].o))->F_color = (jref) sp[1].o;
	LINE_NUMBER(41);
	((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK((frame[0].o)))->F_useAmmo = (jint(1));
	LINE_NUMBER(44);
	((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK((frame[0].o)))->F_anyNearby = (jint(0));
	LINE_NUMBER(46);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_entities_abilities_EnergyFieldAbility_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/abilities/EnergyFieldAbility:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_abilities_EnergyFieldAbility(ctx);
	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(48);
	init_mindustry_entities_abilities_Ability(ctx, (frame[0].o));
	LINE_NUMBER(24);
	((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK((frame[0].o)))->F_damage = (jfloat(1));
	((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK((frame[0].o)))->F_reload = (jfloat(100.0f));
	((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK((frame[0].o)))->F_range = (jfloat(60.0f));
	LINE_NUMBER(25);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_heal;
	((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK(sp[0].o))->F_healEffect = (jref) sp[1].o;
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_hitLaserBlast;
	((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK(sp[0].o))->F_hitEffect = (jref) sp[1].o;
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_chainLightning;
	((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK(sp[0].o))->F_damageEffect = (jref) sp[1].o;
	LINE_NUMBER(26);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_StatusEffects(ctx);
	sp[1].o = (jobject)SF_mindustry_content_StatusEffects_electrified;
	((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK(sp[0].o))->F_status = (jref) sp[1].o;
	LINE_NUMBER(27);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_shootEnergyField;
	((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK(sp[0].o))->F_shootSound = (jref) sp[1].o;
	LINE_NUMBER(28);
	((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK((frame[0].o)))->F_statusDuration = (jfloat(360.0f));
	LINE_NUMBER(30);
	((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK((frame[0].o)))->F_targetGround = (jint(1));
	((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK((frame[0].o)))->F_targetAir = (jint(1));
	((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK((frame[0].o)))->F_hitBuildings = (jint(1));
	((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK((frame[0].o)))->F_hitUnits = (jint(1));
	LINE_NUMBER(31);
	((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK((frame[0].o)))->F_maxTargets = (25);
	LINE_NUMBER(32);
	((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK((frame[0].o)))->F_healPercent = (jfloat(3.0f));
	LINE_NUMBER(34);
	((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK((frame[0].o)))->F_sameTypeHealMult = (jfloat(1));
	LINE_NUMBER(35);
	((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK((frame[0].o)))->F_displayHeal = (jint(1));
	LINE_NUMBER(37);
	((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK((frame[0].o)))->F_layer = (jfloat(99.999f));
	((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK((frame[0].o)))->F_blinkScl = (jfloat(20.0f));
	((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK((frame[0].o)))->F_blinkSize = (jfloat(0.1f));
	LINE_NUMBER(38);
	((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK((frame[0].o)))->F_effectRadius = (jfloat(5.0f));
	((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK((frame[0].o)))->F_sectorRad = (jfloat(0.14f));
	((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK((frame[0].o)))->F_rotateSpeed = (jfloat(0.5f));
	LINE_NUMBER(39);
	((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK((frame[0].o)))->F_sectors = (jint(5));
	LINE_NUMBER(40);
	sp[0].o = frame[0].o;
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_heal;
	((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK(sp[0].o))->F_color = (jref) sp[1].o;
	LINE_NUMBER(41);
	((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK((frame[0].o)))->F_useAmmo = (jint(1));
	LINE_NUMBER(44);
	((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK((frame[0].o)))->F_anyNearby = (jint(0));
	LINE_NUMBER(49);
	((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK((frame[0].o)))->F_damage = (frame[1].f);
	LINE_NUMBER(50);
	((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK((frame[0].o)))->F_reload = (frame[2].f);
	LINE_NUMBER(51);
	((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK((frame[0].o)))->F_range = (frame[3].f);
	LINE_NUMBER(52);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_abilities_EnergyFieldAbility_addStats_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/abilities/EnergyFieldAbility:addStats", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(56);
	if (((jint)((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK((frame[0].o)))->F_displayHeal) == 0) goto label_1;
	}
	{
	LINE_NUMBER(57);
	sp[0].o = frame[1].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[2].o = (jobject)((func_mindustry_entities_abilities_EnergyFieldAbility_getBundle_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_abilities_EnergyFieldAbility_getBundle_R_java_lang_String])(ctx, (frame[0].o));
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001.healdescription"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_wrap_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_wrap_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(350.0f)));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(59);
	sp[0].o = frame[1].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[2].o = (jobject)((func_mindustry_entities_abilities_EnergyFieldAbility_getBundle_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_abilities_EnergyFieldAbility_getBundle_R_java_lang_String])(ctx, (frame[0].o));
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001.description"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_wrap_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_wrap_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(350.0f)));
	}
label_3:;
	{
	LINE_NUMBER(61);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(63);
	sp[0].o = frame[1].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"bullet.range"_j));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[4].o = (jobject)SM_arc_util_Strings_autoFixed_float_int_R_java_lang_String(ctx, (((jfloat)((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK((frame[0].o)))->F_range) / (jfloat(8.0f))), (jint(2)));
	ARRAY_ACCESS(jobject, sp[3].o, temp0) = sp[4].o;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(64);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(65);
	sp[0].o = frame[1].o;
	sp[1].o = frame[0].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"firingrate"_j));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp1 = jint(0);
	sp[4].o = (jobject)SM_arc_util_Strings_autoFixed_float_int_R_java_lang_String(ctx, ((jfloat(60.0f)) / ((jfloat)((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK((frame[0].o)))->F_reload)), (jint(2)));
	ARRAY_ACCESS(jobject, sp[3].o, temp1) = sp[4].o;
	sp[1].o = (jobject)((func_mindustry_entities_abilities_EnergyFieldAbility_abilityStat_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_entities_abilities_EnergyFieldAbility_abilityStat_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(66);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(67);
	sp[0].o = frame[1].o;
	sp[1].o = frame[0].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"maxtargets"_j));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp2 = jint(0);
	sp[4].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, ((jint)((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK((frame[0].o)))->F_maxTargets));
	ARRAY_ACCESS(jobject, sp[3].o, temp2) = sp[4].o;
	sp[1].o = (jobject)((func_mindustry_entities_abilities_EnergyFieldAbility_abilityStat_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_entities_abilities_EnergyFieldAbility_abilityStat_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(68);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(69);
	sp[0].o = frame[1].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"bullet.damage"_j));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp3 = jint(0);
	sp[4].o = (jobject)SM_java_lang_Float_valueOf_float_R_java_lang_Float(ctx, ((jfloat)((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK((frame[0].o)))->F_damage));
	ARRAY_ACCESS(jobject, sp[3].o, temp3) = sp[4].o;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(70);
	sp[0].o = (jobject)((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK((frame[0].o)))->F_status;
	clinit_mindustry_content_StatusEffects(ctx);
	sp[1].o = (jobject)SF_mindustry_content_StatusEffects_none;
	if (sp[0].o == sp[1].o) goto label_12;
	}
	{
	LINE_NUMBER(71);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(72);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK((frame[0].o)))->F_status;
	jint temp0 = (jint)((func_mindustry_type_StatusEffect_hasEmoji_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_type_StatusEffect_hasEmoji_R_boolean])(ctx, sp[1].o);
	sp += 1;
	if (temp0 == 0) goto label_15;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK((frame[0].o)))->F_status;
	sp[0].o = (jobject)((func_mindustry_type_StatusEffect_emoji_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_StatusEffect_emoji_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	goto label_16;
	}
label_15:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
label_16:;
	{
	sp -= 2;
	sp[2].o = (jobject)((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK((frame[0].o)))->F_status;
	sp[2].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[2].o))->F_localizedName;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001[stat]\u0001"_j.string, 2, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_entities_abilities_EnergyFieldAbility_invoke_arc_func_Cons_3(ctx);
		auto proxy = (mindustry_entities_abilities_EnergyFieldAbility_invoke_arc_func_Cons_3 *) gcAlloc(ctx, &class_mindustry_entities_abilities_EnergyFieldAbility_invoke_arc_func_Cons_3);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_with_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_with_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	}
label_12:;
	{
	LINE_NUMBER(74);
	if (((jint)((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK((frame[0].o)))->F_displayHeal) == 0) goto label_17;
	}
	{
	LINE_NUMBER(75);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(76);
	sp[0].o = frame[1].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"bullet.healpercent"_j));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[4].o = (jobject)SM_arc_util_Strings_autoFixed_float_int_R_java_lang_String(ctx, ((jfloat)((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK((frame[0].o)))->F_healPercent), (jint(2)));
	ARRAY_ACCESS(jobject, sp[3].o, temp0) = sp[4].o;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(77);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(78);
	sp[0].o = frame[1].o;
	sp[1].o = frame[0].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"sametypehealmultiplier"_j));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp1 = jint(0);
	sp[4].o = sp[3].o;
	sp[5].i = temp1;
	sp += 6;
	if ((floatCompare(((jfloat)((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK((frame[0].o)))->F_sameTypeHealMult), (jfloat(1)), 1)) >= 0) goto label_22;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"[negstat]"_j));
	goto label_23;
label_22:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
label_23:;
	{
	sp -= 7;
	sp[4].o = (jobject)SM_arc_util_Strings_autoFixed_float_int_R_java_lang_String(ctx, (((jfloat)((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK((frame[0].o)))->F_sameTypeHealMult) * (jfloat(100.0f))), (jint(2)));
	sp[4].o = (jobject)concatStringsRecipe(ctx, u8"\u0001\u0001"_j.string, 2, sp[6].o, sp[4].o);
	ARRAY_ACCESS(jobject, sp[3].o, sp[5].i) = sp[4].o;
	sp[1].o = (jobject)((func_mindustry_entities_abilities_EnergyFieldAbility_abilityStat_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_entities_abilities_EnergyFieldAbility_abilityStat_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	}
label_17:;
	LINE_NUMBER(80);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_abilities_EnergyFieldAbility_draw_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/abilities/EnergyFieldAbility:draw", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(84);
	M_mindustry_entities_abilities_Ability_draw_mindustry_gen_Unit(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(86);
	SM_arc_graphics_g2d_Draw_z_float(ctx, ((jfloat)((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK((frame[0].o)))->F_layer));
	LINE_NUMBER(87);
	sp[0].o = (jobject)((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK((frame[0].o)))->F_color;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(88);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_trns_float_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_trns_float_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_rotation) - (jfloat(90.0f))), ((jfloat)((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK((frame[0].o)))->F_y));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_add_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_add_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_y));
	LINE_NUMBER(89);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	frame[2].f = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	frame[3].f = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y);
	LINE_NUMBER(90);
	jfloat temp0 = (jfloat)((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK((frame[0].o)))->F_effectRadius;
	jfloat temp1 = jfloat(1);
	jfloat temp2 = (jfloat)SM_arc_math_Mathf_absin_float_float_R_float(ctx, ((jfloat)((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK((frame[0].o)))->F_blinkScl), ((jfloat)((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK((frame[0].o)))->F_blinkSize));
	frame[4].f = (temp0 * (temp1 + temp2));
	LINE_NUMBER(92);
	SM_arc_graphics_g2d_Fill_circle_float_float_float(ctx, (frame[2].f), (frame[3].f), (frame[4].f));
	LINE_NUMBER(93);
	SM_arc_graphics_g2d_Draw_color(ctx);
	LINE_NUMBER(94);
	SM_arc_graphics_g2d_Fill_circle_float_float_float(ctx, (frame[2].f), (frame[3].f), ((frame[4].f) / (jfloat(2))));
	LINE_NUMBER(96);
	jfloat temp3 = jfloat(0.7f);
	jfloat temp4 = (jfloat)SM_arc_math_Mathf_absin_float_float_R_float(ctx, ((jfloat)((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK((frame[0].o)))->F_blinkScl), (jfloat(0.7f)));
	jfloat temp5 = temp3 + temp4;
	sp[0].o = (jobject)((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK((frame[0].o)))->F_color;
	SM_arc_graphics_g2d_Lines_stroke_float_arc_graphics_Color(ctx, temp5, sp[0].o);
	LINE_NUMBER(98);
	frame[5].i = (jint(0));
	}
label_12:;
	{
	if ((frame[5].i) >= ((jint)((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK((frame[0].o)))->F_sectors)) goto label_13;
	}
	{
	LINE_NUMBER(99);
	frame[6].f = ((((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_rotation) + (((jfloat((frame[5].i))) * (jfloat(360.0f))) / (jfloat(((jint)((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK((frame[0].o)))->F_sectors))))) - ((clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time) * ((jfloat)((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK((frame[0].o)))->F_rotateSpeed)));
	LINE_NUMBER(100);
	SM_arc_graphics_g2d_Lines_arc_float_float_float_float_float(ctx, (frame[2].f), (frame[3].f), ((frame[4].f) + (jfloat(3.0f))), ((jfloat)((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK((frame[0].o)))->F_sectorRad), (frame[6].f));
	LINE_NUMBER(98);
	INST_IINC(5, 1);
	goto label_12;
	}
label_13:;
	{
	LINE_NUMBER(103);
	jfloat temp0 = (jfloat)SM_arc_graphics_g2d_Lines_getStroke_R_float(ctx);
	SM_arc_graphics_g2d_Lines_stroke_float(ctx, (temp0 * ((jfloat)((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK((frame[0].o)))->F_curStroke)));
	LINE_NUMBER(105);
	if ((floatCompare(((jfloat)((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK((frame[0].o)))->F_curStroke), (jfloat(0)), -1)) <= 0) goto label_18;
	}
	{
	LINE_NUMBER(106);
	frame[5].i = (jint(0));
	}
label_20:;
	{
	if ((frame[5].i) >= ((jint)((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK((frame[0].o)))->F_sectors)) goto label_18;
	}
	{
	LINE_NUMBER(107);
	frame[6].f = ((((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_rotation) + (((jfloat((frame[5].i))) * (jfloat(360.0f))) / (jfloat(((jint)((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK((frame[0].o)))->F_sectors))))) + ((clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time) * ((jfloat)((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK((frame[0].o)))->F_rotateSpeed)));
	LINE_NUMBER(108);
	SM_arc_graphics_g2d_Lines_arc_float_float_float_float_float(ctx, (frame[2].f), (frame[3].f), ((jfloat)((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK((frame[0].o)))->F_range), ((jfloat)((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK((frame[0].o)))->F_sectorRad), (frame[6].f));
	LINE_NUMBER(106);
	INST_IINC(5, 1);
	goto label_20;
	}
label_18:;
	{
	LINE_NUMBER(112);
	jfloat temp0 = frame[2].f;
	jfloat temp1 = frame[3].f;
	jfloat temp2 = ((jfloat)((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK((frame[0].o)))->F_range) * (jfloat(1.5f));
	sp[0].o = (jobject)((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK((frame[0].o)))->F_color;
	SM_mindustry_graphics_Drawf_light_float_float_float_arc_graphics_Color_float(ctx, temp0, temp1, temp2, sp[0].o, (((jfloat)((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK((frame[0].o)))->F_curStroke) * (jfloat(0.8f))));
	LINE_NUMBER(114);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(115);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_abilities_EnergyFieldAbility_update_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/abilities/EnergyFieldAbility:update", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(120);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK((frame[0].o)))->F_curStroke;
	sp[1].f = temp0;
	sp += 2;
	if (((jint)((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK((frame[0].o)))->F_anyNearby) == 0) goto label_1;
	}
	INST_FCONST(1);
	goto label_2;
label_1:;
	INST_FCONST(0);
label_2:;
	{
	sp -= 3;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_lerpDelta_float_float_float_R_float(ctx, sp[1].f, sp[2].f, (jfloat(0.09f)));
	((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK(sp[0].o))->F_curStroke = temp0;
	LINE_NUMBER(122);
	sp[0].o = frame[0].o;
	jfloat temp1 = ((jfloat)((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK(sp[0].o))->F_timer) + (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta);
	((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK(sp[0].o))->F_timer = temp1;
	if ((floatCompare(temp1, ((jfloat)((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK((frame[0].o)))->F_reload), -1)) < 0) goto label_4;
	}
	{
	LINE_NUMBER(123);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_trns_float_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_trns_float_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_rotation) - (jfloat(90.0f))), ((jfloat)((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK((frame[0].o)))->F_y));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_add_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_add_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_y));
	LINE_NUMBER(124);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	frame[2].f = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	frame[3].f = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y);
	LINE_NUMBER(125);
	((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK((frame[0].o)))->F_anyNearby = (jint(0));
	LINE_NUMBER(127);
	clinit_mindustry_entities_abilities_EnergyFieldAbility(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_abilities_EnergyFieldAbility_all;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(129);
	if (((jint)((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK((frame[0].o)))->F_hitUnits) == 0) goto label_11;
	}
	{
	LINE_NUMBER(130);
	sp[0].o = jobject(nullptr);
	jfloat temp0 = frame[2].f;
	jfloat temp1 = frame[3].f;
	jfloat temp2 = (jfloat)((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK((frame[0].o)))->F_range;
	{ /* InvokeDynamic */
		clinit_mindustry_entities_abilities_EnergyFieldAbility_invoke_arc_func_Cons_4(ctx);
		auto proxy = (mindustry_entities_abilities_EnergyFieldAbility_invoke_arc_func_Cons_4 *) gcAlloc(ctx, &class_mindustry_entities_abilities_EnergyFieldAbility_invoke_arc_func_Cons_4);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_mindustry_entities_Units_nearby_mindustry_game_Team_float_float_float_arc_func_Cons(ctx, sp[0].o, temp0, temp1, temp2, sp[1].o);
	}
label_11:;
	{
	LINE_NUMBER(137);
	if (((jint)((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK((frame[0].o)))->F_hitBuildings) == 0) goto label_13;
	}
	{
	if (((jint)((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK((frame[0].o)))->F_targetGround) == 0) goto label_13;
	}
	{
	LINE_NUMBER(138);
	jfloat temp0 = frame[2].f;
	jfloat temp1 = frame[3].f;
	jfloat temp2 = (jfloat)((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK((frame[0].o)))->F_range;
	{ /* InvokeDynamic */
		clinit_mindustry_entities_abilities_EnergyFieldAbility_invoke_arc_func_Cons_5(ctx);
		auto proxy = (mindustry_entities_abilities_EnergyFieldAbility_invoke_arc_func_Cons_5 *) gcAlloc(ctx, &class_mindustry_entities_abilities_EnergyFieldAbility_invoke_arc_func_Cons_5);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[0].o = (jobject) proxy;
	}
	SM_mindustry_entities_Units_nearbyBuildings_float_float_float_arc_func_Cons(ctx, temp0, temp1, temp2, sp[0].o);
	}
label_13:;
	{
	LINE_NUMBER(145);
	clinit_mindustry_entities_abilities_EnergyFieldAbility(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_abilities_EnergyFieldAbility_all;
	{ /* InvokeDynamic */
		clinit_mindustry_entities_abilities_EnergyFieldAbility_invoke_arc_func_Floatf_1(ctx);
		auto proxy = (mindustry_entities_abilities_EnergyFieldAbility_invoke_arc_func_Floatf_1 *) gcAlloc(ctx, &class_mindustry_entities_abilities_EnergyFieldAbility_invoke_arc_func_Floatf_1);
		proxy->F_field1 = (frame[3].f);
		proxy->F_field0 = (frame[2].f);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_sort_arc_func_Floatf_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_sort_arc_func_Floatf_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(146);
	clinit_mindustry_entities_abilities_EnergyFieldAbility(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_abilities_EnergyFieldAbility_all;
	jint temp0 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size), ((jint)((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK((frame[0].o)))->F_maxTargets));
	frame[4].i = temp0;
	LINE_NUMBER(147);
	jfloat temp1 = (jfloat)((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK((frame[0].o)))->F_damage;
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_team;
	jfloat temp2 = (jfloat)((func_mindustry_game_Rules_unitDamage_mindustry_game_Team_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Rules_unitDamage_mindustry_game_Team_R_float])(ctx, sp[0].o, sp[1].o);
	frame[5].f = ((temp1 * temp2) * ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_damageMultiplier));
	LINE_NUMBER(149);
	frame[6].i = (jint(0));
	}
label_18:;
	{
	if ((frame[6].i) >= (frame[4].i)) goto label_19;
	}
	{
	LINE_NUMBER(150);
	clinit_mindustry_entities_abilities_EnergyFieldAbility(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_abilities_EnergyFieldAbility_all;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[6].i));
	frame[7].o = (checkCast(ctx, &class_mindustry_gen_Healthc, sp[0].o));
	LINE_NUMBER(153);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_team;
	jfloat temp0 = frame[2].f;
	jfloat temp1 = frame[3].f;
	jfloat temp2 = (jfloat)((func_mindustry_gen_Posc_getX_R_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Posc, INDEX_mindustry_gen_Posc_getX_R_float, (frame[7].o)))(ctx, (frame[7].o));
	jfloat temp3 = (jfloat)((func_mindustry_gen_Posc_getY_R_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Posc, INDEX_mindustry_gen_Posc_getY_R_float, (frame[7].o)))(ctx, (frame[7].o));
	sp[0].o = (jobject)SM_mindustry_entities_Damage_findAbsorber_mindustry_game_Team_float_float_float_float_R_mindustry_gen_Building(ctx, sp[0].o, temp0, temp1, temp2, temp3);
	frame[8].o = sp[0].o;
	LINE_NUMBER(154);
	if ((frame[8].o) == nullptr) goto label_23;
	}
	{
	LINE_NUMBER(155);
	frame[7].o = (frame[8].o);
	}
label_23:;
	{
	LINE_NUMBER(158);
	sp[0].o = (jobject)((func_mindustry_gen_Teamc_team_R_mindustry_game_Team) resolveInterfaceMethod(ctx, &class_mindustry_gen_Teamc, INDEX_mindustry_gen_Teamc_team_R_mindustry_game_Team, (checkCast(ctx, &class_mindustry_gen_Teamc, (frame[7].o)))))(ctx, (checkCast(ctx, &class_mindustry_gen_Teamc, (frame[7].o))));
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_team;
	if (sp[0].o != sp[1].o) goto label_25;
	}
	{
	LINE_NUMBER(159);
	jint temp0 = (jint)((func_mindustry_gen_Healthc_damaged_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_gen_Healthc, INDEX_mindustry_gen_Healthc_damaged_R_boolean, (frame[7].o)))(ctx, (frame[7].o));
	if (temp0 == 0) goto label_27;
	}
	{
	LINE_NUMBER(160);
	((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK((frame[0].o)))->F_anyNearby = (jint(1));
	LINE_NUMBER(161);
	if ((isInstance(ctx, (frame[7].o), &class_mindustry_gen_Unit)) == 0) goto label_30;
	}
	{
	frame[10].o = (checkCast(ctx, &class_mindustry_gen_Unit, (frame[7].o)));
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[10].o)))->F_type;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_type;
	if (sp[0].o != sp[1].o) goto label_30;
	}
	{
	jfloat temp0 = (jfloat)((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK((frame[0].o)))->F_sameTypeHealMult;
	sp[0].f = temp0;
	sp += 1;
	goto label_32;
	}
label_30:;
	INST_FCONST(1);
label_32:;
	{
	sp -= 1;
	frame[9].f = sp[0].f;
	LINE_NUMBER(162);
	sp[0].o = frame[7].o;
	jfloat temp0 = ((jfloat)((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK((frame[0].o)))->F_healPercent) / (jfloat(100.0f));
	jfloat temp1 = (jfloat)((func_mindustry_gen_Healthc_maxHealth_R_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Healthc, INDEX_mindustry_gen_Healthc_maxHealth_R_float, (frame[7].o)))(ctx, (frame[7].o));
	((func_mindustry_gen_Healthc_heal_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Healthc, INDEX_mindustry_gen_Healthc_heal_float, sp[0].o))(ctx, sp[0].o, ((temp0 * temp1) * (frame[9].f)));
	LINE_NUMBER(163);
	sp[0].o = (jobject)((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK((frame[0].o)))->F_healEffect;
	((func_mindustry_entities_Effect_at_arc_math_geom_Position) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_arc_math_geom_Position])(ctx, sp[0].o, (frame[7].o));
	LINE_NUMBER(164);
	sp[0].o = (jobject)((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK((frame[0].o)))->F_damageEffect;
	jfloat temp2 = frame[2].f;
	jfloat temp3 = frame[3].f;
	jfloat temp4 = jfloat(0);
	sp[1].o = (jobject)((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK((frame[0].o)))->F_color;
	((func_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color_java_lang_Object])(ctx, sp[0].o, temp2, temp3, temp4, sp[1].o, (frame[7].o));
	LINE_NUMBER(165);
	sp[0].o = (jobject)((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK((frame[0].o)))->F_hitEffect;
	jfloat temp5 = frame[2].f;
	jfloat temp6 = frame[3].f;
	jfloat temp7 = (jfloat)((func_mindustry_gen_Unit_angleTo_arc_math_geom_Position_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_angleTo_arc_math_geom_Position_R_float])(ctx, (frame[1].o), (frame[7].o));
	sp[1].o = (jobject)((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK((frame[0].o)))->F_color;
	((func_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color])(ctx, sp[0].o, temp5, temp6, temp7, sp[1].o);
	LINE_NUMBER(167);
	if ((isInstance(ctx, (frame[7].o), &class_mindustry_gen_Building)) == 0) goto label_38;
	}
	{
	frame[10].o = (checkCast(ctx, &class_mindustry_gen_Building, (frame[7].o)));
	LINE_NUMBER(168);
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_healBlockFull;
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[10].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[10].o)))->F_y;
	jfloat temp2 = jfloat(0);
	sp[1].o = (jobject)((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK((frame[0].o)))->F_color;
	sp[2].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[10].o)))->F_block;
	((func_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color_java_lang_Object])(ctx, sp[0].o, temp0, temp1, temp2, sp[1].o, sp[2].o);
	}
label_38:;
	LINE_NUMBER(170);
	goto label_27;
label_25:;
	{
	LINE_NUMBER(172);
	((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK((frame[0].o)))->F_anyNearby = (jint(1));
	LINE_NUMBER(173);
	if ((isInstance(ctx, (frame[7].o), &class_mindustry_gen_Building)) == 0) goto label_41;
	}
	{
	frame[9].o = (checkCast(ctx, &class_mindustry_gen_Building, (frame[7].o)));
	LINE_NUMBER(174);
	sp[0].o = frame[9].o;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_team;
	((func_mindustry_gen_Building_damage_mindustry_game_Team_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_damage_mindustry_game_Team_float])(ctx, sp[0].o, sp[1].o, (frame[5].f));
	goto label_43;
	}
label_41:;
	{
	LINE_NUMBER(176);
	((func_mindustry_gen_Healthc_damage_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Healthc, INDEX_mindustry_gen_Healthc_damage_float, (frame[7].o)))(ctx, (frame[7].o), (frame[5].f));
	}
label_43:;
	{
	LINE_NUMBER(178);
	if ((isInstance(ctx, (frame[7].o), &class_mindustry_gen_Statusc)) == 0) goto label_44;
	}
	{
	frame[9].o = (checkCast(ctx, &class_mindustry_gen_Statusc, (frame[7].o)));
	LINE_NUMBER(179);
	sp[0].o = frame[9].o;
	sp[1].o = (jobject)((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK((frame[0].o)))->F_status;
	((func_mindustry_gen_Statusc_apply_mindustry_type_StatusEffect_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Statusc, INDEX_mindustry_gen_Statusc_apply_mindustry_type_StatusEffect_float, sp[0].o))(ctx, sp[0].o, sp[1].o, ((jfloat)((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK((frame[0].o)))->F_statusDuration));
	}
label_44:;
	{
	LINE_NUMBER(181);
	sp[0].o = (jobject)((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK((frame[0].o)))->F_hitEffect;
	jfloat temp0 = (jfloat)((func_mindustry_gen_Posc_x_R_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Posc, INDEX_mindustry_gen_Posc_x_R_float, (frame[7].o)))(ctx, (frame[7].o));
	jfloat temp1 = (jfloat)((func_mindustry_gen_Posc_y_R_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Posc, INDEX_mindustry_gen_Posc_y_R_float, (frame[7].o)))(ctx, (frame[7].o));
	jfloat temp2 = (jfloat)((func_mindustry_gen_Unit_angleTo_arc_math_geom_Position_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_angleTo_arc_math_geom_Position_R_float])(ctx, (frame[1].o), (frame[7].o));
	sp[1].o = (jobject)((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK((frame[0].o)))->F_color;
	((func_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color])(ctx, sp[0].o, temp0, temp1, temp2, sp[1].o);
	LINE_NUMBER(182);
	sp[0].o = (jobject)((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK((frame[0].o)))->F_damageEffect;
	jfloat temp3 = frame[2].f;
	jfloat temp4 = frame[3].f;
	jfloat temp5 = jfloat(0);
	sp[1].o = (jobject)((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK((frame[0].o)))->F_color;
	((func_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color_java_lang_Object])(ctx, sp[0].o, temp3, temp4, temp5, sp[1].o, (frame[7].o));
	LINE_NUMBER(183);
	sp[0].o = (jobject)((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK((frame[0].o)))->F_hitEffect;
	jfloat temp6 = frame[2].f;
	jfloat temp7 = frame[3].f;
	jfloat temp8 = (jfloat)((func_mindustry_gen_Unit_angleTo_arc_math_geom_Position_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_angleTo_arc_math_geom_Position_R_float])(ctx, (frame[1].o), (frame[7].o));
	sp[1].o = (jobject)((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK((frame[0].o)))->F_color;
	((func_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color])(ctx, sp[0].o, temp6, temp7, temp8, sp[1].o);
	}
label_27:;
	{
	LINE_NUMBER(149);
	INST_IINC(6, 1);
	goto label_18;
	}
label_19:;
	{
	LINE_NUMBER(187);
	if (((jint)((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK((frame[0].o)))->F_anyNearby) == 0) goto label_48;
	}
	{
	LINE_NUMBER(188);
	sp[0].o = (jobject)((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK((frame[0].o)))->F_shootSound;
	sp[1].o = frame[1].o;
	jfloat temp0 = jfloat(1);
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_range_float_R_float(ctx, (jfloat(0.1f)));
	jint temp2 = (jint)((func_arc_audio_Sound_at_arc_math_geom_Position_float_float_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Sound_at_arc_math_geom_Position_float_float_R_int])(ctx, sp[0].o, sp[1].o, (temp0 + temp1), (jfloat(1)));
	}
label_48:;
	{
	LINE_NUMBER(191);
	((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK((frame[0].o)))->F_timer = (jfloat(0));
	}
label_4:;
	LINE_NUMBER(193);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jfloat SM_mindustry_entities_abilities_EnergyFieldAbility_lambda$update$2_float_float_mindustry_gen_Healthc_R_float(jcontext ctx, jfloat param0, jfloat param1, jobject param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/abilities/EnergyFieldAbility:lambda$update$2", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_abilities_EnergyFieldAbility(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(145);
	jfloat temp0 = (jfloat)((func_arc_math_geom_Position_dst2_float_float_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_dst2_float_float_R_float, (frame[2].o)))(ctx, (frame[2].o), (frame[0].f), (frame[1].f));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void SM_mindustry_entities_abilities_EnergyFieldAbility_lambda$update$1_mindustry_gen_Unit_mindustry_gen_Building(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/abilities/EnergyFieldAbility:lambda$update$1", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_abilities_EnergyFieldAbility(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(139);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_team;
	clinit_mindustry_game_Team(ctx);
	sp[1].o = (jobject)SF_mindustry_game_Team_derelict;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_coreCapture) == 0) goto label_2;
	}
label_1:;
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_team;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_team;
	if (sp[0].o == sp[1].o) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_targetable) != 0) goto label_4;
	}
label_3:;
	{
	jint temp0 = (jint)((func_mindustry_gen_Building_damaged_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_damaged_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_2;
	}
label_4:;
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_privileged) != 0) goto label_2;
	}
	{
	LINE_NUMBER(140);
	clinit_mindustry_entities_abilities_EnergyFieldAbility(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_abilities_EnergyFieldAbility_all;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[1].o));
	}
label_2:;
	LINE_NUMBER(142);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_abilities_EnergyFieldAbility_lambda$update$0_mindustry_gen_Unit_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/abilities/EnergyFieldAbility:lambda$update$0", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(131);
	if ((frame[2].o) == (frame[1].o)) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Unit_checkTarget_boolean_boolean_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_gen_Unit_checkTarget_boolean_boolean_R_boolean])(ctx, (frame[2].o), ((jint)((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK((frame[0].o)))->F_targetAir), ((jint)((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK((frame[0].o)))->F_targetGround));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_team;
	jint temp0 = (jint)((func_mindustry_gen_Unit_targetable_mindustry_game_Team_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_targetable_mindustry_game_Team_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[2].o)))->F_team;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_team;
	if (sp[0].o != sp[1].o) goto label_2;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Unit_damaged_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_gen_Unit_damaged_R_boolean])(ctx, (frame[2].o));
	if (temp0 == 0) goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(132);
	clinit_mindustry_entities_abilities_EnergyFieldAbility(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_abilities_EnergyFieldAbility_all;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[2].o));
	}
label_1:;
	LINE_NUMBER(134);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_abilities_EnergyFieldAbility_lambda$addStats$0_arc_scene_ui_Label(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/abilities/EnergyFieldAbility:lambda$addStats$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(72);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK((frame[0].o)))->F_status;
	sp[0].o = (jobject)SM_mindustry_world_meta_StatValues_withTooltip_arc_scene_Element_mindustry_ctype_UnlockableContent_R_arc_scene_Element(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_mindustry_entities_abilities_EnergyFieldAbility(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_entities_abilities_Ability(ctx);
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/abilities/EnergyFieldAbility:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_abilities_EnergyFieldAbility(ctx);
	{
	LINE_NUMBER(22);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	clinit_mindustry_entities_abilities_EnergyFieldAbility(ctx);
	SF_mindustry_entities_abilities_EnergyFieldAbility_all = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_entities_abilities_EnergyFieldAbility[] {
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
	(void *) M_mindustry_entities_abilities_EnergyFieldAbility_update_mindustry_gen_Unit,
	(void *) M_mindustry_entities_abilities_EnergyFieldAbility_draw_mindustry_gen_Unit,
	(void *) M_mindustry_entities_abilities_Ability_death_mindustry_gen_Unit,
	(void *) M_mindustry_entities_abilities_Ability_created_mindustry_gen_Unit,
	(void *) M_mindustry_entities_abilities_Ability_init_mindustry_type_UnitType,
	(void *) M_mindustry_entities_abilities_Ability_displayBars_mindustry_gen_Unit_arc_scene_ui_layout_Table,
	(void *) M_mindustry_entities_abilities_Ability_display_arc_scene_ui_layout_Table,
	(void *) M_mindustry_entities_abilities_EnergyFieldAbility_addStats_arc_scene_ui_layout_Table,
	(void *) M_mindustry_entities_abilities_Ability_abilityStat_java_lang_String_Array1_java_lang_Object_R_java_lang_String,
	(void *) M_mindustry_entities_abilities_Ability_copy_R_mindustry_entities_abilities_Ability,
	(void *) M_mindustry_entities_abilities_Ability_localized_R_java_lang_String,
	(void *) M_mindustry_entities_abilities_Ability_getBundle_R_java_lang_String,
	(void *) M_mindustry_entities_abilities_Ability_lambda$display$0_arc_scene_ui_layout_Table,
	(void *) M_mindustry_entities_abilities_EnergyFieldAbility_lambda$update$0_mindustry_gen_Unit_mindustry_gen_Unit,
	(void *) M_mindustry_entities_abilities_EnergyFieldAbility_lambda$addStats$0_arc_scene_ui_Label,
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
	{ "lambda$update$0", "(Lmindustry/gen/Unit;Lmindustry/gen/Unit;)V" },
	{ "lambda$addStats$0", "(Larc/scene/ui/Label;)V" },
};

static FieldMetadata fields[] {
	{ "all", &class_arc_struct_Seq, (intptr_t) &SF_mindustry_entities_abilities_EnergyFieldAbility_all, "Larc/struct/Seq;", 26 },
	{ "damage", &class_float, offsetof(mindustry_entities_abilities_EnergyFieldAbility, F_damage), "F", 1 },
	{ "reload", &class_float, offsetof(mindustry_entities_abilities_EnergyFieldAbility, F_reload), "F", 1 },
	{ "range", &class_float, offsetof(mindustry_entities_abilities_EnergyFieldAbility, F_range), "F", 1 },
	{ "healEffect", &class_mindustry_entities_Effect, offsetof(mindustry_entities_abilities_EnergyFieldAbility, F_healEffect), "Lmindustry/entities/Effect;", 1 },
	{ "hitEffect", &class_mindustry_entities_Effect, offsetof(mindustry_entities_abilities_EnergyFieldAbility, F_hitEffect), "Lmindustry/entities/Effect;", 1 },
	{ "damageEffect", &class_mindustry_entities_Effect, offsetof(mindustry_entities_abilities_EnergyFieldAbility, F_damageEffect), "Lmindustry/entities/Effect;", 1 },
	{ "status", &class_mindustry_type_StatusEffect, offsetof(mindustry_entities_abilities_EnergyFieldAbility, F_status), "Lmindustry/type/StatusEffect;", 1 },
	{ "shootSound", &class_arc_audio_Sound, offsetof(mindustry_entities_abilities_EnergyFieldAbility, F_shootSound), "Larc/audio/Sound;", 1 },
	{ "statusDuration", &class_float, offsetof(mindustry_entities_abilities_EnergyFieldAbility, F_statusDuration), "F", 1 },
	{ "x", &class_float, offsetof(mindustry_entities_abilities_EnergyFieldAbility, F_x), "F", 1 },
	{ "y", &class_float, offsetof(mindustry_entities_abilities_EnergyFieldAbility, F_y), "F", 1 },
	{ "targetGround", &class_boolean, offsetof(mindustry_entities_abilities_EnergyFieldAbility, F_targetGround), "Z", 1 },
	{ "targetAir", &class_boolean, offsetof(mindustry_entities_abilities_EnergyFieldAbility, F_targetAir), "Z", 1 },
	{ "hitBuildings", &class_boolean, offsetof(mindustry_entities_abilities_EnergyFieldAbility, F_hitBuildings), "Z", 1 },
	{ "hitUnits", &class_boolean, offsetof(mindustry_entities_abilities_EnergyFieldAbility, F_hitUnits), "Z", 1 },
	{ "maxTargets", &class_int, offsetof(mindustry_entities_abilities_EnergyFieldAbility, F_maxTargets), "I", 1 },
	{ "healPercent", &class_float, offsetof(mindustry_entities_abilities_EnergyFieldAbility, F_healPercent), "F", 1 },
	{ "sameTypeHealMult", &class_float, offsetof(mindustry_entities_abilities_EnergyFieldAbility, F_sameTypeHealMult), "F", 1 },
	{ "displayHeal", &class_boolean, offsetof(mindustry_entities_abilities_EnergyFieldAbility, F_displayHeal), "Z", 1 },
	{ "layer", &class_float, offsetof(mindustry_entities_abilities_EnergyFieldAbility, F_layer), "F", 1 },
	{ "blinkScl", &class_float, offsetof(mindustry_entities_abilities_EnergyFieldAbility, F_blinkScl), "F", 1 },
	{ "blinkSize", &class_float, offsetof(mindustry_entities_abilities_EnergyFieldAbility, F_blinkSize), "F", 1 },
	{ "effectRadius", &class_float, offsetof(mindustry_entities_abilities_EnergyFieldAbility, F_effectRadius), "F", 1 },
	{ "sectorRad", &class_float, offsetof(mindustry_entities_abilities_EnergyFieldAbility, F_sectorRad), "F", 1 },
	{ "rotateSpeed", &class_float, offsetof(mindustry_entities_abilities_EnergyFieldAbility, F_rotateSpeed), "F", 1 },
	{ "sectors", &class_int, offsetof(mindustry_entities_abilities_EnergyFieldAbility, F_sectors), "I", 1 },
	{ "color", &class_arc_graphics_Color, offsetof(mindustry_entities_abilities_EnergyFieldAbility, F_color), "Larc/graphics/Color;", 1 },
	{ "useAmmo", &class_boolean, offsetof(mindustry_entities_abilities_EnergyFieldAbility, F_useAmmo), "Z", 1 },
	{ "timer", &class_float, offsetof(mindustry_entities_abilities_EnergyFieldAbility, F_timer), "F", 4 },
	{ "curStroke", &class_float, offsetof(mindustry_entities_abilities_EnergyFieldAbility, F_curStroke), "F", 4 },
	{ "anyNearby", &class_boolean, offsetof(mindustry_entities_abilities_EnergyFieldAbility, F_anyNearby), "Z", 4 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_entities_abilities_EnergyFieldAbility, 0, "()V", 0 },
	{ "<init>", (intptr_t) init_mindustry_entities_abilities_EnergyFieldAbility_float_float_float, 0, "(FFF)V", 1 },
	{ "addStats", (intptr_t) M_mindustry_entities_abilities_EnergyFieldAbility_addStats_arc_scene_ui_layout_Table, VTABLE_mindustry_entities_abilities_EnergyFieldAbility_addStats_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 1 },
	{ "draw", (intptr_t) M_mindustry_entities_abilities_EnergyFieldAbility_draw_mindustry_gen_Unit, VTABLE_mindustry_entities_abilities_EnergyFieldAbility_draw_mindustry_gen_Unit, "(Lmindustry/gen/Unit;)V", 1 },
	{ "update", (intptr_t) M_mindustry_entities_abilities_EnergyFieldAbility_update_mindustry_gen_Unit, VTABLE_mindustry_entities_abilities_EnergyFieldAbility_update_mindustry_gen_Unit, "(Lmindustry/gen/Unit;)V", 1 },
	{ "lambda$update$2", (intptr_t) SM_mindustry_entities_abilities_EnergyFieldAbility_lambda$update$2_float_float_mindustry_gen_Healthc_R_float, 0, "(FFLmindustry/gen/Healthc;)F", 4106 },
	{ "lambda$update$1", (intptr_t) SM_mindustry_entities_abilities_EnergyFieldAbility_lambda$update$1_mindustry_gen_Unit_mindustry_gen_Building, 0, "(Lmindustry/gen/Unit;Lmindustry/gen/Building;)V", 4106 },
	{ "lambda$update$0", (intptr_t) M_mindustry_entities_abilities_EnergyFieldAbility_lambda$update$0_mindustry_gen_Unit_mindustry_gen_Unit, VTABLE_mindustry_entities_abilities_EnergyFieldAbility_lambda$update$0_mindustry_gen_Unit_mindustry_gen_Unit, "(Lmindustry/gen/Unit;Lmindustry/gen/Unit;)V", 4098 },
	{ "lambda$addStats$0", (intptr_t) M_mindustry_entities_abilities_EnergyFieldAbility_lambda$addStats$0_arc_scene_ui_Label, VTABLE_mindustry_entities_abilities_EnergyFieldAbility_lambda$addStats$0_arc_scene_ui_Label, "(Larc/scene/ui/Label;)V", 4098 },
	{ "<clinit>", (intptr_t) clinit_mindustry_entities_abilities_EnergyFieldAbility, 0, "()V", 8 },
};

Class class_mindustry_entities_abilities_EnergyFieldAbility{
		.nativeName = (intptr_t) "mindustry/entities/abilities/EnergyFieldAbility",
		.parentClass = (intptr_t) &class_mindustry_entities_abilities_Ability,
		.size = sizeof(mindustry_entities_abilities_EnergyFieldAbility),
		.classVtable = (intptr_t) vtable_mindustry_entities_abilities_EnergyFieldAbility,
		.staticInitializer = (intptr_t) clinit_mindustry_entities_abilities_EnergyFieldAbility,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_entities_abilities_EnergyFieldAbility,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 32,
		.nativeFields = (intptr_t) fields,
		.methodCount = 10,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 26,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_entities_abilities_EnergyFieldAbility = registerClass(&class_mindustry_entities_abilities_EnergyFieldAbility);

}
