#include "mindustry/entities/abilities/LiquidRegenAbility.h"
#include "arc/math/geom/Vec2.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "mindustry/entities/Puddles.h"
#include "mindustry/gen/Unitc.h"
#include "mindustry/gen/Puddle.h"
#include "mindustry/entities/Effect.h"
#include "mindustry/content/Fx.h"
#include "java/lang/String.h"
#include "mindustry/entities/abilities/Ability.h"
#include "mindustry/entities/abilities/LiquidRegenAbility.h"
#include "arc/util/Tmp.h"
#include "arc/scene/ui/layout/Cell.h"
#include "mindustry/world/Tile.h"
#include "mindustry/gen/Healthc.h"
#include "java/lang/Math.h"
#include "arc/math/Mathf.h"
#include "mindustry/gen/Unit.h"
#include "arc/scene/ui/layout/Table.h"
#include "mindustry/type/Liquid.h"
#include "arc/util/Time.h"
#include "java/lang/CharSequence.h"
#include "mindustry/gen/Posc.h"
#include "arc/util/Strings.h"
#include "java/lang/Object.h"
#include "mindustry/Vars.h"
#include "mindustry/core/World.h"

extern "C" {


void mark_mindustry_entities_abilities_LiquidRegenAbility(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_entities_abilities_LiquidRegenAbility *) object;
	if (self->F_liquid)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_liquid)->clazz)->markFunction)((jobject) self->F_liquid, mark, depth + 1);
	if (self->F_slurpEffect)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_slurpEffect)->clazz)->markFunction)((jobject) self->F_slurpEffect, mark, depth + 1);
}

void clinit_mindustry_entities_abilities_LiquidRegenAbility(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_entities_abilities_Ability(ctx);
}

void init_mindustry_entities_abilities_LiquidRegenAbility(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/abilities/LiquidRegenAbility:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_abilities_LiquidRegenAbility(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(14);
	init_mindustry_entities_abilities_Ability(ctx, (frame[0].o));
	LINE_NUMBER(16);
	((mindustry_entities_abilities_LiquidRegenAbility *) NULL_CHECK((frame[0].o)))->F_slurpSpeed = (jfloat(5.0f));
	LINE_NUMBER(17);
	((mindustry_entities_abilities_LiquidRegenAbility *) NULL_CHECK((frame[0].o)))->F_regenPerSlurp = (jfloat(6.0f));
	LINE_NUMBER(18);
	((mindustry_entities_abilities_LiquidRegenAbility *) NULL_CHECK((frame[0].o)))->F_slurpEffectChance = (jfloat(0.4f));
	LINE_NUMBER(19);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_heal;
	((mindustry_entities_abilities_LiquidRegenAbility *) NULL_CHECK(sp[0].o))->F_slurpEffect = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_abilities_LiquidRegenAbility_addStats_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/abilities/LiquidRegenAbility:addStats", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(23);
	M_mindustry_entities_abilities_Ability_addStats_arc_scene_ui_layout_Table(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(24);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_entities_abilities_LiquidRegenAbility *) NULL_CHECK((frame[0].o)))->F_liquid;
	jint temp0 = (jint)((func_mindustry_type_Liquid_hasEmoji_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_type_Liquid_hasEmoji_R_boolean])(ctx, sp[1].o);
	sp += 1;
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_abilities_LiquidRegenAbility *) NULL_CHECK((frame[0].o)))->F_liquid;
	sp[0].o = (jobject)((func_mindustry_type_Liquid_emoji_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_Liquid_emoji_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	goto label_3;
	}
label_2:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
label_3:;
	{
	sp -= 2;
	sp[2].o = (jobject)((mindustry_entities_abilities_LiquidRegenAbility *) NULL_CHECK((frame[0].o)))->F_liquid;
	sp[2].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[2].o))->F_localizedName;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001[stat]\u0001"_j.string, 2, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(25);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(26);
	sp[0].o = frame[1].o;
	sp[1].o = frame[0].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"slurpheal"_j));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[4].o = (jobject)SM_arc_util_Strings_autoFixed_float_int_R_java_lang_String(ctx, ((jfloat)((mindustry_entities_abilities_LiquidRegenAbility *) NULL_CHECK((frame[0].o)))->F_regenPerSlurp), (jint(2)));
	ARRAY_ACCESS(jobject, sp[3].o, temp0) = sp[4].o;
	sp[1].o = (jobject)((func_mindustry_entities_abilities_LiquidRegenAbility_abilityStat_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_entities_abilities_LiquidRegenAbility_abilityStat_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(27);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_abilities_LiquidRegenAbility_update_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/abilities/LiquidRegenAbility:update", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(34);
	jint temp0 = (jint)((func_mindustry_gen_Unit_damaged_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_damaged_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Unit_isFlying_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_isFlying_R_boolean])(ctx, (frame[1].o));
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(35);
	frame[2].i = (jint(0));
	LINE_NUMBER(36);
	jint temp0 = (jint)((func_mindustry_gen_Unit_tileX_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_tileX_R_int])(ctx, (frame[1].o));
	frame[3].i = temp0;
	jint temp1 = (jint)((func_mindustry_gen_Unit_tileY_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_tileY_R_int])(ctx, (frame[1].o));
	frame[4].i = temp1;
	LINE_NUMBER(37);
	jint temp2 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (jint(((((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_hitSize) / (jfloat(8.0f))) * (jfloat(0.6f))))), (jint(1)));
	frame[5].i = temp2;
	LINE_NUMBER(38);
	frame[6].i = (-(frame[5].i));
	}
label_7:;
	{
	if ((frame[6].i) > (frame[5].i)) goto label_8;
	}
	{
	LINE_NUMBER(39);
	frame[7].i = (-(frame[5].i));
	}
label_10:;
	{
	if ((frame[7].i) > (frame[5].i)) goto label_11;
	}
	{
	LINE_NUMBER(40);
	if ((((frame[6].i) * (frame[6].i)) + ((frame[7].i) * (frame[7].i))) > ((frame[5].i) * (frame[5].i))) goto label_13;
	}
	{
	LINE_NUMBER(42);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tile_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, ((frame[3].i) + (frame[6].i)), ((frame[4].i) + (frame[7].i)));
	frame[8].o = sp[0].o;
	LINE_NUMBER(43);
	if ((frame[8].o) == nullptr) goto label_13;
	}
	{
	LINE_NUMBER(44);
	sp[0].o = (jobject)SM_mindustry_entities_Puddles_get_mindustry_world_Tile_R_mindustry_gen_Puddle(ctx, (frame[8].o));
	frame[9].o = sp[0].o;
	LINE_NUMBER(45);
	if ((frame[9].o) == nullptr) goto label_13;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Puddle *) NULL_CHECK((frame[9].o)))->F_liquid;
	sp[1].o = (jobject)((mindustry_entities_abilities_LiquidRegenAbility *) NULL_CHECK((frame[0].o)))->F_liquid;
	if (sp[0].o != sp[1].o) goto label_13;
	}
	{
	LINE_NUMBER(46);
	jfloat temp0 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, ((jfloat)((mindustry_gen_Puddle *) NULL_CHECK((frame[9].o)))->F_amount), (((jfloat)((mindustry_entities_abilities_LiquidRegenAbility *) NULL_CHECK((frame[0].o)))->F_slurpSpeed) * (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta)));
	frame[10].f = temp0;
	LINE_NUMBER(47);
	sp[0].o = frame[9].o;
	jfloat temp1 = (jfloat)((mindustry_gen_Puddle *) NULL_CHECK(sp[0].o))->F_amount;
	jfloat temp2 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, ((jfloat)((mindustry_gen_Puddle *) NULL_CHECK((frame[9].o)))->F_amount), (((jfloat)((mindustry_entities_abilities_LiquidRegenAbility *) NULL_CHECK((frame[0].o)))->F_slurpSpeed) * (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta)));
	((mindustry_gen_Puddle *) NULL_CHECK(sp[0].o))->F_amount = (temp1 - temp2);
	LINE_NUMBER(48);
	((func_mindustry_gen_Unit_heal_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_heal_float])(ctx, (frame[1].o), ((frame[10].f) * ((jfloat)((mindustry_entities_abilities_LiquidRegenAbility *) NULL_CHECK((frame[0].o)))->F_regenPerSlurp)));
	LINE_NUMBER(49);
	frame[2].i = (jint(1));
	}
label_13:;
	{
	LINE_NUMBER(39);
	INST_IINC(7, 1);
	goto label_10;
	}
label_11:;
	{
	LINE_NUMBER(38);
	INST_IINC(6, 1);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(56);
	if ((frame[2].i) == 0) goto label_1;
	}
	{
	jint temp0 = (jint)SM_arc_math_Mathf_chanceDelta_double_R_boolean(ctx, (jdouble(((jfloat)((mindustry_entities_abilities_LiquidRegenAbility *) NULL_CHECK((frame[0].o)))->F_slurpEffectChance))));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(57);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_random_float_R_float(ctx, (((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_hitSize) / (jfloat(2))));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_rnd_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_rnd_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp0);
	LINE_NUMBER(58);
	sp[0].o = (jobject)((mindustry_entities_abilities_LiquidRegenAbility *) NULL_CHECK((frame[0].o)))->F_slurpEffect;
	jfloat temp1 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_x;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp2 = temp1 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x);
	jfloat temp3 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_y;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	((func_mindustry_entities_Effect_at_float_float_float_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float_java_lang_Object])(ctx, sp[0].o, temp2, (temp3 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y)), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_rotation), (frame[1].o));
	}
label_1:;
	LINE_NUMBER(61);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_entities_abilities_LiquidRegenAbility[] {
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
	(void *) M_mindustry_entities_abilities_LiquidRegenAbility_update_mindustry_gen_Unit,
	(void *) M_mindustry_entities_abilities_Ability_draw_mindustry_gen_Unit,
	(void *) M_mindustry_entities_abilities_Ability_death_mindustry_gen_Unit,
	(void *) M_mindustry_entities_abilities_Ability_created_mindustry_gen_Unit,
	(void *) M_mindustry_entities_abilities_Ability_init_mindustry_type_UnitType,
	(void *) M_mindustry_entities_abilities_Ability_displayBars_mindustry_gen_Unit_arc_scene_ui_layout_Table,
	(void *) M_mindustry_entities_abilities_Ability_display_arc_scene_ui_layout_Table,
	(void *) M_mindustry_entities_abilities_LiquidRegenAbility_addStats_arc_scene_ui_layout_Table,
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
	{ "liquid", &class_mindustry_type_Liquid, offsetof(mindustry_entities_abilities_LiquidRegenAbility, F_liquid), "Lmindustry/type/Liquid;", 1 },
	{ "slurpSpeed", &class_float, offsetof(mindustry_entities_abilities_LiquidRegenAbility, F_slurpSpeed), "F", 1 },
	{ "regenPerSlurp", &class_float, offsetof(mindustry_entities_abilities_LiquidRegenAbility, F_regenPerSlurp), "F", 1 },
	{ "slurpEffectChance", &class_float, offsetof(mindustry_entities_abilities_LiquidRegenAbility, F_slurpEffectChance), "F", 1 },
	{ "slurpEffect", &class_mindustry_entities_Effect, offsetof(mindustry_entities_abilities_LiquidRegenAbility, F_slurpEffect), "Lmindustry/entities/Effect;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_entities_abilities_LiquidRegenAbility, 0, "()V", 1 },
	{ "addStats", (intptr_t) M_mindustry_entities_abilities_LiquidRegenAbility_addStats_arc_scene_ui_layout_Table, VTABLE_mindustry_entities_abilities_LiquidRegenAbility_addStats_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 1 },
	{ "update", (intptr_t) M_mindustry_entities_abilities_LiquidRegenAbility_update_mindustry_gen_Unit, VTABLE_mindustry_entities_abilities_LiquidRegenAbility_update_mindustry_gen_Unit, "(Lmindustry/gen/Unit;)V", 1 },
};

Class class_mindustry_entities_abilities_LiquidRegenAbility{
		.nativeName = (intptr_t) "mindustry/entities/abilities/LiquidRegenAbility",
		.parentClass = (intptr_t) &class_mindustry_entities_abilities_Ability,
		.size = sizeof(mindustry_entities_abilities_LiquidRegenAbility),
		.classVtable = (intptr_t) vtable_mindustry_entities_abilities_LiquidRegenAbility,
		.staticInitializer = (intptr_t) clinit_mindustry_entities_abilities_LiquidRegenAbility,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_entities_abilities_LiquidRegenAbility,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 24,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_entities_abilities_LiquidRegenAbility = registerClass(&class_mindustry_entities_abilities_LiquidRegenAbility);

}
