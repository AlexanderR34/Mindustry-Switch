#include "mindustry/entities/abilities/StatusFieldAbility.h"
#include "arc/math/Angles.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "arc/graphics/Color.h"
#include "arc/func/Cons.h"
#include "mindustry/entities/Effect.h"
#include "mindustry/content/Fx.h"
#include "java/lang/String.h"
#include "mindustry/entities/abilities/Ability.h"
#include "arc/util/I18NBundle.h"
#include "arc/scene/ui/layout/Cell.h"
#include "arc/math/geom/Position.h"
#include "mindustry/entities/abilities/StatusFieldAbility.h"
#include "arc/Core.h"
#include "mindustry/gen/Unit.h"
#include "arc/scene/ui/layout/Table.h"
#include "mindustry/type/StatusEffect.h"
#include "arc/util/Time.h"
#include "java/lang/CharSequence.h"
#include "arc/util/Strings.h"
#include "mindustry/graphics/Pal.h"
#include "java/lang/Object.h"
#include "mindustry/gen/Statusc.h"
#include "mindustry/entities/Units.h"
#include "mindustry/entities/abilities/StatusFieldAbility_invoke_arc_func_Cons_1.h"
#include "mindustry/game/Team.h"

extern "C" {


void mark_mindustry_entities_abilities_StatusFieldAbility(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_entities_abilities_StatusFieldAbility *) object;
	if (self->F_effect)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_effect)->clazz)->markFunction)((jobject) self->F_effect, mark, depth + 1);
	if (self->F_applyEffect)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_applyEffect)->clazz)->markFunction)((jobject) self->F_applyEffect, mark, depth + 1);
	if (self->F_activeEffect)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_activeEffect)->clazz)->markFunction)((jobject) self->F_activeEffect, mark, depth + 1);
	if (self->F_color)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_color)->clazz)->markFunction)((jobject) self->F_color, mark, depth + 1);
}

void clinit_mindustry_entities_abilities_StatusFieldAbility(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_entities_abilities_Ability(ctx);
}

void init_mindustry_entities_abilities_StatusFieldAbility(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/abilities/StatusFieldAbility:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_abilities_StatusFieldAbility(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(28);
	init_mindustry_entities_abilities_Ability(ctx, (frame[0].o));
	LINE_NUMBER(18);
	((mindustry_entities_abilities_StatusFieldAbility *) NULL_CHECK((frame[0].o)))->F_duration = (jfloat(60.0f));
	((mindustry_entities_abilities_StatusFieldAbility *) NULL_CHECK((frame[0].o)))->F_reload = (jfloat(100.0f));
	((mindustry_entities_abilities_StatusFieldAbility *) NULL_CHECK((frame[0].o)))->F_range = (jfloat(20.0f));
	LINE_NUMBER(19);
	((mindustry_entities_abilities_StatusFieldAbility *) NULL_CHECK((frame[0].o)))->F_onShoot = (jint(0));
	LINE_NUMBER(20);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_none;
	((mindustry_entities_abilities_StatusFieldAbility *) NULL_CHECK(sp[0].o))->F_applyEffect = (jref) sp[1].o;
	LINE_NUMBER(21);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_overdriveWave;
	((mindustry_entities_abilities_StatusFieldAbility *) NULL_CHECK(sp[0].o))->F_activeEffect = (jref) sp[1].o;
	LINE_NUMBER(23);
	((mindustry_entities_abilities_StatusFieldAbility *) NULL_CHECK((frame[0].o)))->F_effectSizeParam = (jint(1));
	LINE_NUMBER(24);
	sp[0].o = frame[0].o;
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_accent;
	((mindustry_entities_abilities_StatusFieldAbility *) NULL_CHECK(sp[0].o))->F_color = (jref) sp[1].o;
	LINE_NUMBER(28);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_entities_abilities_StatusFieldAbility_mindustry_type_StatusEffect_float_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/abilities/StatusFieldAbility:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_abilities_StatusFieldAbility(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(30);
	init_mindustry_entities_abilities_Ability(ctx, (frame[0].o));
	LINE_NUMBER(18);
	((mindustry_entities_abilities_StatusFieldAbility *) NULL_CHECK((frame[0].o)))->F_duration = (jfloat(60.0f));
	((mindustry_entities_abilities_StatusFieldAbility *) NULL_CHECK((frame[0].o)))->F_reload = (jfloat(100.0f));
	((mindustry_entities_abilities_StatusFieldAbility *) NULL_CHECK((frame[0].o)))->F_range = (jfloat(20.0f));
	LINE_NUMBER(19);
	((mindustry_entities_abilities_StatusFieldAbility *) NULL_CHECK((frame[0].o)))->F_onShoot = (jint(0));
	LINE_NUMBER(20);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_none;
	((mindustry_entities_abilities_StatusFieldAbility *) NULL_CHECK(sp[0].o))->F_applyEffect = (jref) sp[1].o;
	LINE_NUMBER(21);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_overdriveWave;
	((mindustry_entities_abilities_StatusFieldAbility *) NULL_CHECK(sp[0].o))->F_activeEffect = (jref) sp[1].o;
	LINE_NUMBER(23);
	((mindustry_entities_abilities_StatusFieldAbility *) NULL_CHECK((frame[0].o)))->F_effectSizeParam = (jint(1));
	LINE_NUMBER(24);
	sp[0].o = frame[0].o;
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_accent;
	((mindustry_entities_abilities_StatusFieldAbility *) NULL_CHECK(sp[0].o))->F_color = (jref) sp[1].o;
	LINE_NUMBER(31);
	((mindustry_entities_abilities_StatusFieldAbility *) NULL_CHECK((frame[0].o)))->F_duration = (frame[2].f);
	LINE_NUMBER(32);
	((mindustry_entities_abilities_StatusFieldAbility *) NULL_CHECK((frame[0].o)))->F_reload = (frame[3].f);
	LINE_NUMBER(33);
	((mindustry_entities_abilities_StatusFieldAbility *) NULL_CHECK((frame[0].o)))->F_range = (frame[4].f);
	LINE_NUMBER(34);
	((mindustry_entities_abilities_StatusFieldAbility *) NULL_CHECK((frame[0].o)))->F_effect = (jref) (frame[1].o);
	LINE_NUMBER(35);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_abilities_StatusFieldAbility_addStats_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/abilities/StatusFieldAbility:addStats", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(39);
	M_mindustry_entities_abilities_Ability_addStats_arc_scene_ui_layout_Table(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(40);
	sp[0].o = frame[1].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"bullet.range"_j));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[4].o = (jobject)SM_arc_util_Strings_autoFixed_float_int_R_java_lang_String(ctx, (((jfloat)((mindustry_entities_abilities_StatusFieldAbility *) NULL_CHECK((frame[0].o)))->F_range) / (jfloat(8.0f))), (jint(2)));
	ARRAY_ACCESS(jobject, sp[3].o, temp0) = sp[4].o;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(41);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(42);
	sp[0].o = frame[1].o;
	sp[1].o = frame[0].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"firingrate"_j));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp1 = jint(0);
	sp[4].o = (jobject)SM_arc_util_Strings_autoFixed_float_int_R_java_lang_String(ctx, ((jfloat(60.0f)) / ((jfloat)((mindustry_entities_abilities_StatusFieldAbility *) NULL_CHECK((frame[0].o)))->F_reload)), (jint(2)));
	ARRAY_ACCESS(jobject, sp[3].o, temp1) = sp[4].o;
	sp[1].o = (jobject)((func_mindustry_entities_abilities_StatusFieldAbility_abilityStat_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_entities_abilities_StatusFieldAbility_abilityStat_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(43);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(44);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_entities_abilities_StatusFieldAbility *) NULL_CHECK((frame[0].o)))->F_effect;
	jint temp2 = (jint)((func_mindustry_type_StatusEffect_hasEmoji_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_type_StatusEffect_hasEmoji_R_boolean])(ctx, sp[1].o);
	sp += 1;
	if (temp2 == 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_abilities_StatusFieldAbility *) NULL_CHECK((frame[0].o)))->F_effect;
	sp[0].o = (jobject)((func_mindustry_type_StatusEffect_emoji_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_StatusEffect_emoji_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	goto label_7;
	}
label_6:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
label_7:;
	{
	sp -= 2;
	sp[2].o = (jobject)((mindustry_entities_abilities_StatusFieldAbility *) NULL_CHECK((frame[0].o)))->F_effect;
	sp[2].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[2].o))->F_localizedName;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001[stat]\u0001"_j.string, 2, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(45);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_abilities_StatusFieldAbility_update_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/abilities/StatusFieldAbility:update", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(49);
	sp[0].o = frame[0].o;
	((mindustry_entities_abilities_StatusFieldAbility *) NULL_CHECK(sp[0].o))->F_timer = (((jfloat)((mindustry_entities_abilities_StatusFieldAbility *) NULL_CHECK(sp[0].o))->F_timer) + (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta));
	LINE_NUMBER(51);
	if ((floatCompare(((jfloat)((mindustry_entities_abilities_StatusFieldAbility *) NULL_CHECK((frame[0].o)))->F_timer), ((jfloat)((mindustry_entities_abilities_StatusFieldAbility *) NULL_CHECK((frame[0].o)))->F_reload), -1)) < 0) goto label_2;
	}
	{
	if (((jint)((mindustry_entities_abilities_StatusFieldAbility *) NULL_CHECK((frame[0].o)))->F_onShoot) == 0) goto label_3;
	}
	{
	if (((jint)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_isShooting) == 0) goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(52);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_team;
	jfloat temp0 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_y;
	jfloat temp2 = (jfloat)((mindustry_entities_abilities_StatusFieldAbility *) NULL_CHECK((frame[0].o)))->F_range;
	{ /* InvokeDynamic */
		clinit_mindustry_entities_abilities_StatusFieldAbility_invoke_arc_func_Cons_1(ctx);
		auto proxy = (mindustry_entities_abilities_StatusFieldAbility_invoke_arc_func_Cons_1 *) gcAlloc(ctx, &class_mindustry_entities_abilities_StatusFieldAbility_invoke_arc_func_Cons_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_mindustry_entities_Units_nearby_mindustry_game_Team_float_float_float_arc_func_Cons(ctx, sp[0].o, temp0, temp1, temp2, sp[1].o);
	LINE_NUMBER(57);
	jfloat temp3 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_x;
	jfloat temp4 = (jfloat)SM_arc_math_Angles_trnsx_float_float_float_R_float(ctx, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_rotation), ((jfloat)((mindustry_entities_abilities_StatusFieldAbility *) NULL_CHECK((frame[0].o)))->F_effectY), ((jfloat)((mindustry_entities_abilities_StatusFieldAbility *) NULL_CHECK((frame[0].o)))->F_effectX));
	frame[2].f = (temp3 + temp4);
	jfloat temp5 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_y;
	jfloat temp6 = (jfloat)SM_arc_math_Angles_trnsy_float_float_float_R_float(ctx, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_rotation), ((jfloat)((mindustry_entities_abilities_StatusFieldAbility *) NULL_CHECK((frame[0].o)))->F_effectY), ((jfloat)((mindustry_entities_abilities_StatusFieldAbility *) NULL_CHECK((frame[0].o)))->F_effectX));
	frame[3].f = (temp5 + temp6);
	LINE_NUMBER(58);
	sp[0].o = (jobject)((mindustry_entities_abilities_StatusFieldAbility *) NULL_CHECK((frame[0].o)))->F_activeEffect;
	jfloat temp7 = frame[2].f;
	jfloat temp8 = frame[3].f;
	sp[1].f = temp7;
	sp[2].f = temp8;
	sp += 3;
	if (((jint)((mindustry_entities_abilities_StatusFieldAbility *) NULL_CHECK((frame[0].o)))->F_effectSizeParam) == 0) goto label_7;
	}
	{
	jfloat temp0 = (jfloat)((mindustry_entities_abilities_StatusFieldAbility *) NULL_CHECK((frame[0].o)))->F_range;
	sp[0].f = temp0;
	sp += 1;
	goto label_8;
	}
label_7:;
	INST_ALOAD(1);
	sp[-1].f = ((mindustry_gen_Unit *) NULL_CHECK(sp[-1].o))->F_rotation;
label_8:;
	{
	sp[0].o = (jobject)((mindustry_entities_abilities_StatusFieldAbility *) NULL_CHECK((frame[0].o)))->F_color;
	sp += 1;
	if (((jint)((mindustry_entities_abilities_StatusFieldAbility *) NULL_CHECK((frame[0].o)))->F_parentizeEffects) == 0) goto label_9;
	}
	INST_ALOAD(1);
	goto label_10;
label_9:;
	INST_ACONST_NULL();
label_10:;
	{
	sp -= 6;
	((func_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color_java_lang_Object])(ctx, sp[0].o, sp[1].f, sp[2].f, sp[3].f, sp[4].o, sp[5].o);
	LINE_NUMBER(60);
	((mindustry_entities_abilities_StatusFieldAbility *) NULL_CHECK((frame[0].o)))->F_timer = (jfloat(0));
	}
label_2:;
	LINE_NUMBER(62);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_abilities_StatusFieldAbility_lambda$update$0_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/abilities/StatusFieldAbility:lambda$update$0", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(53);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_entities_abilities_StatusFieldAbility *) NULL_CHECK((frame[0].o)))->F_effect;
	((func_mindustry_gen_Unit_apply_mindustry_type_StatusEffect_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_apply_mindustry_type_StatusEffect_float])(ctx, sp[0].o, sp[1].o, ((jfloat)((mindustry_entities_abilities_StatusFieldAbility *) NULL_CHECK((frame[0].o)))->F_duration));
	LINE_NUMBER(54);
	sp[0].o = (jobject)((mindustry_entities_abilities_StatusFieldAbility *) NULL_CHECK((frame[0].o)))->F_applyEffect;
	((func_mindustry_entities_Effect_at_arc_math_geom_Position_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_arc_math_geom_Position_boolean])(ctx, sp[0].o, (frame[1].o), ((jint)((mindustry_entities_abilities_StatusFieldAbility *) NULL_CHECK((frame[0].o)))->F_parentizeEffects));
	LINE_NUMBER(55);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_entities_abilities_StatusFieldAbility[] {
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
	(void *) M_mindustry_entities_abilities_StatusFieldAbility_update_mindustry_gen_Unit,
	(void *) M_mindustry_entities_abilities_Ability_draw_mindustry_gen_Unit,
	(void *) M_mindustry_entities_abilities_Ability_death_mindustry_gen_Unit,
	(void *) M_mindustry_entities_abilities_Ability_created_mindustry_gen_Unit,
	(void *) M_mindustry_entities_abilities_Ability_init_mindustry_type_UnitType,
	(void *) M_mindustry_entities_abilities_Ability_displayBars_mindustry_gen_Unit_arc_scene_ui_layout_Table,
	(void *) M_mindustry_entities_abilities_Ability_display_arc_scene_ui_layout_Table,
	(void *) M_mindustry_entities_abilities_StatusFieldAbility_addStats_arc_scene_ui_layout_Table,
	(void *) M_mindustry_entities_abilities_Ability_abilityStat_java_lang_String_Array1_java_lang_Object_R_java_lang_String,
	(void *) M_mindustry_entities_abilities_Ability_copy_R_mindustry_entities_abilities_Ability,
	(void *) M_mindustry_entities_abilities_Ability_localized_R_java_lang_String,
	(void *) M_mindustry_entities_abilities_Ability_getBundle_R_java_lang_String,
	(void *) M_mindustry_entities_abilities_Ability_lambda$display$0_arc_scene_ui_layout_Table,
	(void *) M_mindustry_entities_abilities_StatusFieldAbility_lambda$update$0_mindustry_gen_Unit,
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
	{ "effect", &class_mindustry_type_StatusEffect, offsetof(mindustry_entities_abilities_StatusFieldAbility, F_effect), "Lmindustry/type/StatusEffect;", 1 },
	{ "duration", &class_float, offsetof(mindustry_entities_abilities_StatusFieldAbility, F_duration), "F", 1 },
	{ "reload", &class_float, offsetof(mindustry_entities_abilities_StatusFieldAbility, F_reload), "F", 1 },
	{ "range", &class_float, offsetof(mindustry_entities_abilities_StatusFieldAbility, F_range), "F", 1 },
	{ "onShoot", &class_boolean, offsetof(mindustry_entities_abilities_StatusFieldAbility, F_onShoot), "Z", 1 },
	{ "applyEffect", &class_mindustry_entities_Effect, offsetof(mindustry_entities_abilities_StatusFieldAbility, F_applyEffect), "Lmindustry/entities/Effect;", 1 },
	{ "activeEffect", &class_mindustry_entities_Effect, offsetof(mindustry_entities_abilities_StatusFieldAbility, F_activeEffect), "Lmindustry/entities/Effect;", 1 },
	{ "effectX", &class_float, offsetof(mindustry_entities_abilities_StatusFieldAbility, F_effectX), "F", 1 },
	{ "effectY", &class_float, offsetof(mindustry_entities_abilities_StatusFieldAbility, F_effectY), "F", 1 },
	{ "parentizeEffects", &class_boolean, offsetof(mindustry_entities_abilities_StatusFieldAbility, F_parentizeEffects), "Z", 1 },
	{ "effectSizeParam", &class_boolean, offsetof(mindustry_entities_abilities_StatusFieldAbility, F_effectSizeParam), "Z", 1 },
	{ "color", &class_arc_graphics_Color, offsetof(mindustry_entities_abilities_StatusFieldAbility, F_color), "Larc/graphics/Color;", 1 },
	{ "timer", &class_float, offsetof(mindustry_entities_abilities_StatusFieldAbility, F_timer), "F", 4 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_entities_abilities_StatusFieldAbility, 0, "()V", 0 },
	{ "<init>", (intptr_t) init_mindustry_entities_abilities_StatusFieldAbility_mindustry_type_StatusEffect_float_float_float, 0, "(Lmindustry/type/StatusEffect;FFF)V", 1 },
	{ "addStats", (intptr_t) M_mindustry_entities_abilities_StatusFieldAbility_addStats_arc_scene_ui_layout_Table, VTABLE_mindustry_entities_abilities_StatusFieldAbility_addStats_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 1 },
	{ "update", (intptr_t) M_mindustry_entities_abilities_StatusFieldAbility_update_mindustry_gen_Unit, VTABLE_mindustry_entities_abilities_StatusFieldAbility_update_mindustry_gen_Unit, "(Lmindustry/gen/Unit;)V", 1 },
	{ "lambda$update$0", (intptr_t) M_mindustry_entities_abilities_StatusFieldAbility_lambda$update$0_mindustry_gen_Unit, VTABLE_mindustry_entities_abilities_StatusFieldAbility_lambda$update$0_mindustry_gen_Unit, "(Lmindustry/gen/Unit;)V", 4098 },
};

Class class_mindustry_entities_abilities_StatusFieldAbility{
		.nativeName = (intptr_t) "mindustry/entities/abilities/StatusFieldAbility",
		.parentClass = (intptr_t) &class_mindustry_entities_abilities_Ability,
		.size = sizeof(mindustry_entities_abilities_StatusFieldAbility),
		.classVtable = (intptr_t) vtable_mindustry_entities_abilities_StatusFieldAbility,
		.staticInitializer = (intptr_t) clinit_mindustry_entities_abilities_StatusFieldAbility,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_entities_abilities_StatusFieldAbility,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 13,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 25,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_entities_abilities_StatusFieldAbility = registerClass(&class_mindustry_entities_abilities_StatusFieldAbility);

}
