#include "mindustry/entities/abilities/LiquidExplodeAbility.h"
#include "java/lang/Math.h"
#include "arc/math/Mathf.h"
#include "mindustry/gen/Unit.h"
#include "mindustry/type/Liquid.h"
#include "arc/scene/ui/layout/Table.h"
#include "arc/util/noise/Simplex.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "mindustry/entities/Puddles.h"
#include "java/lang/CharSequence.h"
#include "mindustry/gen/Posc.h"
#include "mindustry/entities/abilities/LiquidExplodeAbility.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/entities/abilities/Ability.h"
#include "arc/scene/ui/layout/Cell.h"
#include "mindustry/world/Tile.h"
#include "mindustry/content/Liquids.h"
#include "mindustry/Vars.h"
#include "mindustry/core/World.h"

extern "C" {


void mark_mindustry_entities_abilities_LiquidExplodeAbility(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_entities_abilities_LiquidExplodeAbility *) object;
	if (self->F_liquid)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_liquid)->clazz)->markFunction)((jobject) self->F_liquid, mark, depth + 1);
}

void clinit_mindustry_entities_abilities_LiquidExplodeAbility(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_entities_abilities_Ability(ctx);
}

void init_mindustry_entities_abilities_LiquidExplodeAbility(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/abilities/LiquidExplodeAbility:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_abilities_LiquidExplodeAbility(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(14);
	init_mindustry_entities_abilities_Ability(ctx, (frame[0].o));
	LINE_NUMBER(15);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Liquids(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Liquids_water;
	((mindustry_entities_abilities_LiquidExplodeAbility *) NULL_CHECK(sp[0].o))->F_liquid = (jref) sp[1].o;
	LINE_NUMBER(16);
	((mindustry_entities_abilities_LiquidExplodeAbility *) NULL_CHECK((frame[0].o)))->F_amount = (jfloat(120.0f));
	LINE_NUMBER(17);
	((mindustry_entities_abilities_LiquidExplodeAbility *) NULL_CHECK((frame[0].o)))->F_radAmountScale = (jfloat(5.0f));
	((mindustry_entities_abilities_LiquidExplodeAbility *) NULL_CHECK((frame[0].o)))->F_radScale = (jfloat(1));
	LINE_NUMBER(18);
	((mindustry_entities_abilities_LiquidExplodeAbility *) NULL_CHECK((frame[0].o)))->F_noiseMag = (jfloat(6.5f));
	((mindustry_entities_abilities_LiquidExplodeAbility *) NULL_CHECK((frame[0].o)))->F_noiseScl = (jfloat(5.0f));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_abilities_LiquidExplodeAbility_addStats_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/abilities/LiquidExplodeAbility:addStats", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(22);
	M_mindustry_entities_abilities_Ability_addStats_arc_scene_ui_layout_Table(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(23);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_entities_abilities_LiquidExplodeAbility *) NULL_CHECK((frame[0].o)))->F_liquid;
	jint temp0 = (jint)((func_mindustry_type_Liquid_hasEmoji_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_type_Liquid_hasEmoji_R_boolean])(ctx, sp[1].o);
	sp += 1;
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_abilities_LiquidExplodeAbility *) NULL_CHECK((frame[0].o)))->F_liquid;
	sp[0].o = (jobject)((func_mindustry_type_Liquid_emoji_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_Liquid_emoji_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	goto label_3;
	}
label_2:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
label_3:;
	{
	sp -= 2;
	sp[2].o = (jobject)((mindustry_entities_abilities_LiquidExplodeAbility *) NULL_CHECK((frame[0].o)))->F_liquid;
	sp[2].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[2].o))->F_localizedName;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001[stat]\u0001"_j.string, 2, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(24);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_abilities_LiquidExplodeAbility_death_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[23];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/abilities/LiquidExplodeAbility:death", 23 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(29);
	jint temp0 = (jint)((func_mindustry_gen_Unit_tileX_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_tileX_R_int])(ctx, (frame[1].o));
	frame[2].i = temp0;
	jint temp1 = (jint)((func_mindustry_gen_Unit_tileY_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_tileY_R_int])(ctx, (frame[1].o));
	frame[3].i = temp1;
	LINE_NUMBER(30);
	jint temp2 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (jint(((((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_hitSize) / (jfloat(8.0f))) * ((jfloat)((mindustry_entities_abilities_LiquidExplodeAbility *) NULL_CHECK((frame[0].o)))->F_radScale)))), (jint(1)));
	frame[4].i = temp2;
	LINE_NUMBER(31);
	frame[5].f = (((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_hitSize) / ((jfloat)((mindustry_entities_abilities_LiquidExplodeAbility *) NULL_CHECK((frame[0].o)))->F_noiseMag));
	LINE_NUMBER(32);
	frame[6].i = (-(frame[4].i));
	}
label_5:;
	{
	if ((frame[6].i) > (frame[4].i)) goto label_6;
	}
	{
	LINE_NUMBER(33);
	frame[7].i = (-(frame[4].i));
	}
label_8:;
	{
	if ((frame[7].i) > (frame[4].i)) goto label_9;
	}
	{
	LINE_NUMBER(34);
	jfloat temp0 = jfloat((((frame[6].i) * (frame[6].i)) + ((frame[7].i) * (frame[7].i))));
	jfloat temp1 = jfloat(((frame[4].i) * (frame[4].i)));
	jfloat temp2 = (jfloat)SM_arc_util_noise_Simplex_noise2d_int_double_double_double_double_double_R_float(ctx, (jint(0)), (jdouble(2.0)), (jdouble(0.5)), (jdouble(((jfloat(1)) / ((jfloat)((mindustry_entities_abilities_LiquidExplodeAbility *) NULL_CHECK((frame[0].o)))->F_noiseScl)))), (jdouble(((frame[6].i) + (frame[2].i)))), (jdouble(((frame[7].i) + (frame[3].i)))));
	if ((floatCompare(temp0, (temp1 - ((temp2 * (frame[5].f)) * (frame[5].f))), 1)) > 0) goto label_11;
	}
	{
	LINE_NUMBER(35);
	jfloat temp0 = jfloat(1);
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_dst_float_float_R_float(ctx, (jfloat((frame[6].i))), (jfloat((frame[7].i))));
	frame[8].f = ((temp0 - (temp1 / (jfloat((frame[4].i))))) * ((jfloat)((mindustry_entities_abilities_LiquidExplodeAbility *) NULL_CHECK((frame[0].o)))->F_radAmountScale));
	LINE_NUMBER(37);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tile_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, ((frame[2].i) + (frame[6].i)), ((frame[3].i) + (frame[7].i)));
	frame[9].o = sp[0].o;
	LINE_NUMBER(38);
	if ((frame[9].o) == nullptr) goto label_11;
	}
	{
	LINE_NUMBER(39);
	sp[0].o = frame[9].o;
	sp[1].o = (jobject)((mindustry_entities_abilities_LiquidExplodeAbility *) NULL_CHECK((frame[0].o)))->F_liquid;
	SM_mindustry_entities_Puddles_deposit_mindustry_world_Tile_mindustry_type_Liquid_float(ctx, sp[0].o, sp[1].o, (((jfloat)((mindustry_entities_abilities_LiquidExplodeAbility *) NULL_CHECK((frame[0].o)))->F_amount) * (frame[8].f)));
	}
label_11:;
	{
	LINE_NUMBER(33);
	INST_IINC(7, 1);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(32);
	INST_IINC(6, 1);
	goto label_5;
	}
label_6:;
	LINE_NUMBER(44);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_entities_abilities_LiquidExplodeAbility[] {
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
	(void *) M_mindustry_entities_abilities_Ability_update_mindustry_gen_Unit,
	(void *) M_mindustry_entities_abilities_Ability_draw_mindustry_gen_Unit,
	(void *) M_mindustry_entities_abilities_LiquidExplodeAbility_death_mindustry_gen_Unit,
	(void *) M_mindustry_entities_abilities_Ability_created_mindustry_gen_Unit,
	(void *) M_mindustry_entities_abilities_Ability_init_mindustry_type_UnitType,
	(void *) M_mindustry_entities_abilities_Ability_displayBars_mindustry_gen_Unit_arc_scene_ui_layout_Table,
	(void *) M_mindustry_entities_abilities_Ability_display_arc_scene_ui_layout_Table,
	(void *) M_mindustry_entities_abilities_LiquidExplodeAbility_addStats_arc_scene_ui_layout_Table,
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
	{ "liquid", &class_mindustry_type_Liquid, offsetof(mindustry_entities_abilities_LiquidExplodeAbility, F_liquid), "Lmindustry/type/Liquid;", 1 },
	{ "amount", &class_float, offsetof(mindustry_entities_abilities_LiquidExplodeAbility, F_amount), "F", 1 },
	{ "radAmountScale", &class_float, offsetof(mindustry_entities_abilities_LiquidExplodeAbility, F_radAmountScale), "F", 1 },
	{ "radScale", &class_float, offsetof(mindustry_entities_abilities_LiquidExplodeAbility, F_radScale), "F", 1 },
	{ "noiseMag", &class_float, offsetof(mindustry_entities_abilities_LiquidExplodeAbility, F_noiseMag), "F", 1 },
	{ "noiseScl", &class_float, offsetof(mindustry_entities_abilities_LiquidExplodeAbility, F_noiseScl), "F", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_entities_abilities_LiquidExplodeAbility, 0, "()V", 1 },
	{ "addStats", (intptr_t) M_mindustry_entities_abilities_LiquidExplodeAbility_addStats_arc_scene_ui_layout_Table, VTABLE_mindustry_entities_abilities_LiquidExplodeAbility_addStats_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 1 },
	{ "death", (intptr_t) M_mindustry_entities_abilities_LiquidExplodeAbility_death_mindustry_gen_Unit, VTABLE_mindustry_entities_abilities_LiquidExplodeAbility_death_mindustry_gen_Unit, "(Lmindustry/gen/Unit;)V", 1 },
};

Class class_mindustry_entities_abilities_LiquidExplodeAbility{
		.nativeName = (intptr_t) "mindustry/entities/abilities/LiquidExplodeAbility",
		.parentClass = (intptr_t) &class_mindustry_entities_abilities_Ability,
		.size = sizeof(mindustry_entities_abilities_LiquidExplodeAbility),
		.classVtable = (intptr_t) vtable_mindustry_entities_abilities_LiquidExplodeAbility,
		.staticInitializer = (intptr_t) clinit_mindustry_entities_abilities_LiquidExplodeAbility,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_entities_abilities_LiquidExplodeAbility,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 6,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 24,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_entities_abilities_LiquidExplodeAbility = registerClass(&class_mindustry_entities_abilities_LiquidExplodeAbility);

}
