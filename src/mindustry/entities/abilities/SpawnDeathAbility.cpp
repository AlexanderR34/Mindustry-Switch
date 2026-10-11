#include "mindustry/entities/abilities/SpawnDeathAbility.h"
#include "arc/math/Mathf.h"
#include "java/lang/Integer.h"
#include "mindustry/net/Net.h"
#include "arc/math/geom/Vec2.h"
#include "mindustry/gen/Unit.h"
#include "arc/scene/ui/layout/Table.h"
#include "mindustry/entities/abilities/SpawnDeathAbility.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "mindustry/type/UnitType.h"
#include "java/lang/CharSequence.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/entities/abilities/Ability.h"
#include "arc/util/Tmp.h"
#include "arc/scene/ui/layout/Cell.h"
#include "mindustry/game/Team.h"
#include "mindustry/Vars.h"

extern "C" {


void mark_mindustry_entities_abilities_SpawnDeathAbility(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_entities_abilities_SpawnDeathAbility *) object;
	if (self->F_unit)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_unit)->clazz)->markFunction)((jobject) self->F_unit, mark, depth + 1);
}

void clinit_mindustry_entities_abilities_SpawnDeathAbility(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_entities_abilities_Ability(ctx);
}

void init_mindustry_entities_abilities_SpawnDeathAbility_mindustry_type_UnitType_int_float(jcontext ctx, jobject self, jobject param0, jint param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/abilities/SpawnDeathAbility:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_abilities_SpawnDeathAbility(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(19);
	init_mindustry_entities_abilities_Ability(ctx, (frame[0].o));
	LINE_NUMBER(13);
	((mindustry_entities_abilities_SpawnDeathAbility *) NULL_CHECK((frame[0].o)))->F_amount = (jint(1));
	((mindustry_entities_abilities_SpawnDeathAbility *) NULL_CHECK((frame[0].o)))->F_randAmount = (jint(0));
	LINE_NUMBER(15);
	((mindustry_entities_abilities_SpawnDeathAbility *) NULL_CHECK((frame[0].o)))->F_spread = (jfloat(8.0f));
	LINE_NUMBER(17);
	((mindustry_entities_abilities_SpawnDeathAbility *) NULL_CHECK((frame[0].o)))->F_faceOutwards = (jint(1));
	LINE_NUMBER(20);
	((mindustry_entities_abilities_SpawnDeathAbility *) NULL_CHECK((frame[0].o)))->F_unit = (jref) (frame[1].o);
	LINE_NUMBER(21);
	((mindustry_entities_abilities_SpawnDeathAbility *) NULL_CHECK((frame[0].o)))->F_amount = (frame[2].i);
	LINE_NUMBER(22);
	((mindustry_entities_abilities_SpawnDeathAbility *) NULL_CHECK((frame[0].o)))->F_spread = (frame[3].f);
	LINE_NUMBER(23);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_entities_abilities_SpawnDeathAbility(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/abilities/SpawnDeathAbility:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_abilities_SpawnDeathAbility(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(25);
	init_mindustry_entities_abilities_Ability(ctx, (frame[0].o));
	LINE_NUMBER(13);
	((mindustry_entities_abilities_SpawnDeathAbility *) NULL_CHECK((frame[0].o)))->F_amount = (jint(1));
	((mindustry_entities_abilities_SpawnDeathAbility *) NULL_CHECK((frame[0].o)))->F_randAmount = (jint(0));
	LINE_NUMBER(15);
	((mindustry_entities_abilities_SpawnDeathAbility *) NULL_CHECK((frame[0].o)))->F_spread = (jfloat(8.0f));
	LINE_NUMBER(17);
	((mindustry_entities_abilities_SpawnDeathAbility *) NULL_CHECK((frame[0].o)))->F_faceOutwards = (jint(1));
	LINE_NUMBER(26);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_abilities_SpawnDeathAbility_addStats_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/abilities/SpawnDeathAbility:addStats", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(30);
	M_mindustry_entities_abilities_Ability_addStats_arc_scene_ui_layout_Table(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(31);
	sp[0].o = frame[1].o;
	sp += 1;
	if (((jint)((mindustry_entities_abilities_SpawnDeathAbility *) NULL_CHECK((frame[0].o)))->F_randAmount) <= 0) goto label_2;
	}
	{
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\u0001x-\u0001"_j.string, 2, boxInteger(ctx, ((jint)((mindustry_entities_abilities_SpawnDeathAbility *) NULL_CHECK((frame[0].o)))->F_amount)), boxInteger(ctx, (((jint)((mindustry_entities_abilities_SpawnDeathAbility *) NULL_CHECK((frame[0].o)))->F_amount) + ((jint)((mindustry_entities_abilities_SpawnDeathAbility *) NULL_CHECK((frame[0].o)))->F_randAmount))));
	sp += 1;
	goto label_3;
	}
label_2:;
	{
	sp[0].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, ((jint)((mindustry_entities_abilities_SpawnDeathAbility *) NULL_CHECK((frame[0].o)))->F_amount));
	sp += 1;
	}
label_3:;
	{
	sp -= 1;
	sp[0].o = (jobject)SM_java_lang_String_valueOf_java_lang_Object_R_java_lang_String(ctx, sp[0].o);
	sp[1].o = (jobject)((mindustry_entities_abilities_SpawnDeathAbility *) NULL_CHECK((frame[0].o)))->F_unit;
	jint temp0 = (jint)((func_mindustry_type_UnitType_hasEmoji_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_type_UnitType_hasEmoji_R_boolean])(ctx, sp[1].o);
	sp += 1;
	if (temp0 == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_abilities_SpawnDeathAbility *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((func_mindustry_type_UnitType_emoji_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_UnitType_emoji_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	goto label_5;
	}
label_4:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
label_5:;
	{
	sp -= 3;
	sp[3].o = (jobject)((mindustry_entities_abilities_SpawnDeathAbility *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[3].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[3].o))->F_localizedName;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"[stat]\u0001x[] \u0001[stat]\u0001"_j.string, 3, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(32);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_abilities_SpawnDeathAbility_death_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/abilities/SpawnDeathAbility:death", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(36);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(37);
	jint temp0 = (jint)((mindustry_entities_abilities_SpawnDeathAbility *) NULL_CHECK((frame[0].o)))->F_amount;
	jint temp1 = (jint)SM_arc_math_Mathf_random_int_R_int(ctx, ((jint)((mindustry_entities_abilities_SpawnDeathAbility *) NULL_CHECK((frame[0].o)))->F_randAmount));
	frame[2].i = (temp0 + temp1);
	LINE_NUMBER(38);
	frame[3].i = (jint(0));
	}
label_4:;
	{
	if ((frame[3].i) >= (frame[2].i)) goto label_1;
	}
	{
	LINE_NUMBER(39);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_random_float_R_float(ctx, ((jfloat)((mindustry_entities_abilities_SpawnDeathAbility *) NULL_CHECK((frame[0].o)))->F_spread));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_rnd_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_rnd_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp0);
	LINE_NUMBER(40);
	sp[0].o = (jobject)((mindustry_entities_abilities_SpawnDeathAbility *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_team;
	jfloat temp1 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_x;
	clinit_arc_util_Tmp(ctx);
	sp[2].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp2 = temp1 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[2].o))->F_x);
	jfloat temp3 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_y;
	clinit_arc_util_Tmp(ctx);
	sp[2].o = (jobject)SF_arc_util_Tmp_v1;
	sp[0].o = (jobject)((func_mindustry_type_UnitType_spawn_mindustry_game_Team_float_float_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_UnitType_spawn_mindustry_game_Team_float_float_R_mindustry_gen_Unit])(ctx, sp[0].o, sp[1].o, temp2, (temp3 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[2].o))->F_y)));
	frame[4].o = sp[0].o;
	LINE_NUMBER(42);
	sp[0].o = frame[4].o;
	sp += 1;
	if (((jint)((mindustry_entities_abilities_SpawnDeathAbility *) NULL_CHECK((frame[0].o)))->F_faceOutwards) == 0) goto label_8;
	}
	{
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec2_angle_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_angle_R_float])(ctx, sp[0].o);
	sp[0].f = temp0;
	sp += 1;
	goto label_9;
	}
label_8:;
	{
	jfloat temp0 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_rotation;
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_range_float_R_float(ctx, (jfloat(5.0f)));
	jfloat temp2 = temp0 + temp1;
	sp[0].f = temp2;
	sp += 1;
	}
label_9:;
	{
	sp -= 2;
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_rotation = sp[1].f;
	LINE_NUMBER(38);
	INST_IINC(3, 1);
	goto label_4;
	}
label_1:;
	LINE_NUMBER(45);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_entities_abilities_SpawnDeathAbility[] {
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
	(void *) M_mindustry_entities_abilities_SpawnDeathAbility_death_mindustry_gen_Unit,
	(void *) M_mindustry_entities_abilities_Ability_created_mindustry_gen_Unit,
	(void *) M_mindustry_entities_abilities_Ability_init_mindustry_type_UnitType,
	(void *) M_mindustry_entities_abilities_Ability_displayBars_mindustry_gen_Unit_arc_scene_ui_layout_Table,
	(void *) M_mindustry_entities_abilities_Ability_display_arc_scene_ui_layout_Table,
	(void *) M_mindustry_entities_abilities_SpawnDeathAbility_addStats_arc_scene_ui_layout_Table,
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
	{ "unit", &class_mindustry_type_UnitType, offsetof(mindustry_entities_abilities_SpawnDeathAbility, F_unit), "Lmindustry/type/UnitType;", 1 },
	{ "amount", &class_int, offsetof(mindustry_entities_abilities_SpawnDeathAbility, F_amount), "I", 1 },
	{ "randAmount", &class_int, offsetof(mindustry_entities_abilities_SpawnDeathAbility, F_randAmount), "I", 1 },
	{ "spread", &class_float, offsetof(mindustry_entities_abilities_SpawnDeathAbility, F_spread), "F", 1 },
	{ "faceOutwards", &class_boolean, offsetof(mindustry_entities_abilities_SpawnDeathAbility, F_faceOutwards), "Z", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_entities_abilities_SpawnDeathAbility_mindustry_type_UnitType_int_float, 0, "(Lmindustry/type/UnitType;IF)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_entities_abilities_SpawnDeathAbility, 0, "()V", 1 },
	{ "addStats", (intptr_t) M_mindustry_entities_abilities_SpawnDeathAbility_addStats_arc_scene_ui_layout_Table, VTABLE_mindustry_entities_abilities_SpawnDeathAbility_addStats_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 1 },
	{ "death", (intptr_t) M_mindustry_entities_abilities_SpawnDeathAbility_death_mindustry_gen_Unit, VTABLE_mindustry_entities_abilities_SpawnDeathAbility_death_mindustry_gen_Unit, "(Lmindustry/gen/Unit;)V", 1 },
};

Class class_mindustry_entities_abilities_SpawnDeathAbility{
		.nativeName = (intptr_t) "mindustry/entities/abilities/SpawnDeathAbility",
		.parentClass = (intptr_t) &class_mindustry_entities_abilities_Ability,
		.size = sizeof(mindustry_entities_abilities_SpawnDeathAbility),
		.classVtable = (intptr_t) vtable_mindustry_entities_abilities_SpawnDeathAbility,
		.staticInitializer = (intptr_t) clinit_mindustry_entities_abilities_SpawnDeathAbility,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_entities_abilities_SpawnDeathAbility,
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
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 24,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_entities_abilities_SpawnDeathAbility = registerClass(&class_mindustry_entities_abilities_SpawnDeathAbility);

}
