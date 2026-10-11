#include "mindustry/entities/abilities/RegenAbility.h"
#include "mindustry/entities/abilities/RegenAbility.h"
#include "arc/util/Strings.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/gen/Unit.h"
#include "arc/scene/ui/layout/Table.h"
#include "mindustry/entities/abilities/Ability.h"
#include "arc/scene/ui/layout/Cell.h"
#include "arc/util/Time.h"
#include "mindustry/gen/Healthc.h"
#include "java/lang/CharSequence.h"

extern "C" {


void mark_mindustry_entities_abilities_RegenAbility(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_entities_abilities_RegenAbility *) object;
}

void clinit_mindustry_entities_abilities_RegenAbility(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_entities_abilities_Ability(ctx);
}

void init_mindustry_entities_abilities_RegenAbility(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/abilities/RegenAbility:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_abilities_RegenAbility(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(7);
	init_mindustry_entities_abilities_Ability(ctx, (frame[0].o));
	LINE_NUMBER(9);
	((mindustry_entities_abilities_RegenAbility *) NULL_CHECK((frame[0].o)))->F_percentAmount = (jfloat(0));
	LINE_NUMBER(11);
	((mindustry_entities_abilities_RegenAbility *) NULL_CHECK((frame[0].o)))->F_amount = (jfloat(0));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_abilities_RegenAbility_addStats_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/abilities/RegenAbility:addStats", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(15);
	M_mindustry_entities_abilities_Ability_addStats_arc_scene_ui_layout_Table(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(17);
	if ((floatCompare(((jfloat)((mindustry_entities_abilities_RegenAbility *) NULL_CHECK((frame[0].o)))->F_amount), (jfloat(1,000000e-03f)), -1)) < 0) goto label_2;
	}
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	{
	sp -= 1;
	frame[2].i = sp[0].i;
	LINE_NUMBER(18);
	if ((floatCompare(((jfloat)((mindustry_entities_abilities_RegenAbility *) NULL_CHECK((frame[0].o)))->F_percentAmount), (jfloat(1,000000e-03f)), -1)) < 0) goto label_5;
	}
	INST_ICONST(1);
	goto label_6;
label_5:;
	INST_ICONST(0);
label_6:;
	{
	sp -= 1;
	frame[3].i = sp[0].i;
	LINE_NUMBER(20);
	if ((frame[2].i) != 0) goto label_8;
	}
	INST_ILOAD(3);
	if ((--sp)->i == 0) goto label_9;
label_8:;
	{
	LINE_NUMBER(21);
	sp[0].o = frame[1].o;
	sp[1].o = frame[0].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"regen"_j));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	LINE_NUMBER(22);
	sp[4].o = sp[3].o;
	sp[5].i = temp0;
	sp += 6;
	if ((frame[2].i) == 0) goto label_11;
	}
	{
	sp[0].o = (jobject)SM_arc_util_Strings_autoFixed_float_int_R_java_lang_String(ctx, (((jfloat)((mindustry_entities_abilities_RegenAbility *) NULL_CHECK((frame[0].o)))->F_amount) * (jfloat(60.0f))), (jint(2)));
	sp += 1;
	if ((frame[3].i) == 0) goto label_12;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8" [lightgray]+[stat] "_j));
	goto label_13;
label_12:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
label_13:;
	POP_N(2); // Pop string concat args
	(sp++)->o = (jobject)concatStringsRecipe(ctx, u8"\u0001\u0001"_j.string, 2, sp[0].o, sp[1].o);
	goto label_14;
label_11:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
label_14:;
	{
	LINE_NUMBER(23);
	if ((frame[3].i) == 0) goto label_15;
	}
	{
	sp[0].o = (jobject)SM_arc_util_Strings_autoFixed_float_int_R_java_lang_String(ctx, (((jfloat)((mindustry_entities_abilities_RegenAbility *) NULL_CHECK((frame[0].o)))->F_percentAmount) * (jfloat(60.0f))), (jint(2)));
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\u0001%"_j.string, 1, sp[0].o);
	sp += 1;
	goto label_16;
	}
label_15:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
label_16:;
	{
	sp -= 8;
	sp[4].o = (jobject)concatStringsRecipe(ctx, u8"\u0001\u0001"_j.string, 2, sp[6].o, sp[7].o);
	ARRAY_ACCESS(jobject, sp[3].o, sp[5].i) = sp[4].o;
	LINE_NUMBER(21);
	sp[1].o = (jobject)((func_mindustry_entities_abilities_RegenAbility_abilityStat_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_entities_abilities_RegenAbility_abilityStat_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	}
label_9:;
	LINE_NUMBER(26);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_abilities_RegenAbility_update_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/abilities/RegenAbility:update", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(30);
	((func_mindustry_gen_Unit_heal_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_heal_float])(ctx, (frame[1].o), ((((((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_maxHealth) * ((jfloat)((mindustry_entities_abilities_RegenAbility *) NULL_CHECK((frame[0].o)))->F_percentAmount)) / (jfloat(100.0f))) + ((jfloat)((mindustry_entities_abilities_RegenAbility *) NULL_CHECK((frame[0].o)))->F_amount)) * (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta)));
	LINE_NUMBER(31);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_entities_abilities_RegenAbility[] {
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
	(void *) M_mindustry_entities_abilities_RegenAbility_update_mindustry_gen_Unit,
	(void *) M_mindustry_entities_abilities_Ability_draw_mindustry_gen_Unit,
	(void *) M_mindustry_entities_abilities_Ability_death_mindustry_gen_Unit,
	(void *) M_mindustry_entities_abilities_Ability_created_mindustry_gen_Unit,
	(void *) M_mindustry_entities_abilities_Ability_init_mindustry_type_UnitType,
	(void *) M_mindustry_entities_abilities_Ability_displayBars_mindustry_gen_Unit_arc_scene_ui_layout_Table,
	(void *) M_mindustry_entities_abilities_Ability_display_arc_scene_ui_layout_Table,
	(void *) M_mindustry_entities_abilities_RegenAbility_addStats_arc_scene_ui_layout_Table,
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
	{ "percentAmount", &class_float, offsetof(mindustry_entities_abilities_RegenAbility, F_percentAmount), "F", 1 },
	{ "amount", &class_float, offsetof(mindustry_entities_abilities_RegenAbility, F_amount), "F", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_entities_abilities_RegenAbility, 0, "()V", 1 },
	{ "addStats", (intptr_t) M_mindustry_entities_abilities_RegenAbility_addStats_arc_scene_ui_layout_Table, VTABLE_mindustry_entities_abilities_RegenAbility_addStats_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 1 },
	{ "update", (intptr_t) M_mindustry_entities_abilities_RegenAbility_update_mindustry_gen_Unit, VTABLE_mindustry_entities_abilities_RegenAbility_update_mindustry_gen_Unit, "(Lmindustry/gen/Unit;)V", 1 },
};

Class class_mindustry_entities_abilities_RegenAbility{
		.nativeName = (intptr_t) "mindustry/entities/abilities/RegenAbility",
		.parentClass = (intptr_t) &class_mindustry_entities_abilities_Ability,
		.size = sizeof(mindustry_entities_abilities_RegenAbility),
		.classVtable = (intptr_t) vtable_mindustry_entities_abilities_RegenAbility,
		.staticInitializer = (intptr_t) clinit_mindustry_entities_abilities_RegenAbility,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_entities_abilities_RegenAbility,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 24,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_entities_abilities_RegenAbility = registerClass(&class_mindustry_entities_abilities_RegenAbility);

}
