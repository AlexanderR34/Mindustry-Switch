#include "mindustry/game/MapObjectives_UnitCountObjective.h"
#include "java/lang/Integer.h"
#include "arc/Core.h"
#include "mindustry/game/MapObjectives_UnitCountObjective.h"
#include "mindustry/game/Rules.h"
#include "mindustry/game/Teams_TeamData.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "mindustry/type/UnitType.h"
#include "mindustry/game/MapObjectives_MapObjective.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/util/I18NBundle.h"
#include "mindustry/game/MapObjectives.h"
#include "mindustry/content/UnitTypes.h"
#include "mindustry/game/Team.h"
#include "mindustry/Vars.h"
#include "mindustry/core/GameState.h"

extern "C" {


void mark_mindustry_game_MapObjectives$UnitCountObjective(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_game_MapObjectives$MapObjective(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_game_MapObjectives$UnitCountObjective *) object;
	if (self->F_unit)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_unit)->clazz)->markFunction)((jobject) self->F_unit, mark, depth + 1);
}

void clinit_mindustry_game_MapObjectives$UnitCountObjective(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_game_MapObjectives$MapObjective(ctx);
}

void init_mindustry_game_MapObjectives$UnitCountObjective_mindustry_type_UnitType_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapObjectives$UnitCountObjective:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_MapObjectives$UnitCountObjective(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(462);
	init_mindustry_game_MapObjectives$MapObjective(ctx, (frame[0].o));
	LINE_NUMBER(459);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_UnitTypes(ctx);
	sp[1].o = (jobject)SF_mindustry_content_UnitTypes_dagger;
	((mindustry_game_MapObjectives$UnitCountObjective *) NULL_CHECK(sp[0].o))->F_unit = (jref) sp[1].o;
	LINE_NUMBER(460);
	((mindustry_game_MapObjectives$UnitCountObjective *) NULL_CHECK((frame[0].o)))->F_count = (jint(1));
	LINE_NUMBER(463);
	((mindustry_game_MapObjectives$UnitCountObjective *) NULL_CHECK((frame[0].o)))->F_unit = (jref) (frame[1].o);
	LINE_NUMBER(464);
	((mindustry_game_MapObjectives$UnitCountObjective *) NULL_CHECK((frame[0].o)))->F_count = (frame[2].i);
	LINE_NUMBER(465);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_game_MapObjectives$UnitCountObjective(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapObjectives$UnitCountObjective:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_MapObjectives$UnitCountObjective(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(467);
	init_mindustry_game_MapObjectives$MapObjective(ctx, (frame[0].o));
	LINE_NUMBER(459);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_UnitTypes(ctx);
	sp[1].o = (jobject)SF_mindustry_content_UnitTypes_dagger;
	((mindustry_game_MapObjectives$UnitCountObjective *) NULL_CHECK(sp[0].o))->F_unit = (jref) sp[1].o;
	LINE_NUMBER(460);
	((mindustry_game_MapObjectives$UnitCountObjective *) NULL_CHECK((frame[0].o)))->F_count = (jint(1));
	LINE_NUMBER(467);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_game_MapObjectives$UnitCountObjective_update_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapObjectives$UnitCountObjective:update", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(471);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_defaultTeam;
	sp[0].o = (jobject)((func_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData])(ctx, sp[0].o);
	sp[1].o = (jobject)((mindustry_game_MapObjectives$UnitCountObjective *) NULL_CHECK((frame[0].o)))->F_unit;
	jint temp0 = (jint)((func_mindustry_game_Teams$TeamData_countType_mindustry_type_UnitType_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Teams$TeamData_countType_mindustry_type_UnitType_R_int])(ctx, sp[0].o, sp[1].o);
	if (temp0 < ((jint)((mindustry_game_MapObjectives$UnitCountObjective *) NULL_CHECK((frame[0].o)))->F_count)) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_game_MapObjectives$UnitCountObjective_text_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapObjectives$UnitCountObjective:text", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(476);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"objective.buildunit"_j));
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(3)));
	jint temp0 = jint(0);
	jint temp1 = (jint)((mindustry_game_MapObjectives$UnitCountObjective *) NULL_CHECK((frame[0].o)))->F_count;
	clinit_mindustry_Vars(ctx);
	sp[3].o = (jobject)SF_mindustry_Vars_state;
	sp[3].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[3].o))->F_rules;
	sp[3].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[3].o))->F_defaultTeam;
	sp[3].o = (jobject)((func_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData])(ctx, sp[3].o);
	sp[4].o = (jobject)((mindustry_game_MapObjectives$UnitCountObjective *) NULL_CHECK((frame[0].o)))->F_unit;
	jint temp2 = (jint)((func_mindustry_game_Teams$TeamData_countType_mindustry_type_UnitType_R_int) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_mindustry_game_Teams$TeamData_countType_mindustry_type_UnitType_R_int])(ctx, sp[3].o, sp[4].o);
	sp[3].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (temp1 - temp2));
	ARRAY_ACCESS(jobject, sp[2].o, temp0) = sp[3].o;
	jint temp3 = jint(1);
	sp[3].o = (jobject)((mindustry_game_MapObjectives$UnitCountObjective *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[3].o = (jobject)((func_mindustry_type_UnitType_emoji_R_java_lang_String) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_mindustry_type_UnitType_emoji_R_java_lang_String])(ctx, sp[3].o);
	sp[3].o = (jobject)concatStringsRecipe(ctx, u8"\u0001 "_j.string, 1, sp[3].o);
	ARRAY_ACCESS(jobject, sp[2].o, temp3) = sp[3].o;
	jint temp4 = jint(2);
	sp[3].o = (jobject)((mindustry_game_MapObjectives$UnitCountObjective *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[3].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[3].o))->F_localizedName;
	ARRAY_ACCESS(jobject, sp[2].o, temp4) = sp[3].o;
	sp[0].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_game_MapObjectives$UnitCountObjective_validate(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapObjectives$UnitCountObjective:validate", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(481);
	sp[0].o = (jobject)((mindustry_game_MapObjectives$UnitCountObjective *) NULL_CHECK((frame[0].o)))->F_unit;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	clinit_mindustry_content_UnitTypes(ctx);
	sp[1].o = (jobject)SF_mindustry_content_UnitTypes_dagger;
	((mindustry_game_MapObjectives$UnitCountObjective *) NULL_CHECK(sp[0].o))->F_unit = (jref) sp[1].o;
	}
label_1:;
	LINE_NUMBER(482);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_game_MapObjectives$UnitCountObjective_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapObjectives$UnitCountObjective:toString", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(486);
	sp[0].o = (jobject)((mindustry_game_MapObjectives$UnitCountObjective *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)SM_java_lang_String_valueOf_java_lang_Object_R_java_lang_String(ctx, sp[0].o);
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"unitCount: \u0001 x\u0001"_j.string, 2, sp[0].o, boxInteger(ctx, ((jint)((mindustry_game_MapObjectives$UnitCountObjective *) NULL_CHECK((frame[0].o)))->F_count)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_game_MapObjectives$UnitCountObjective[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_mindustry_game_MapObjectives$UnitCountObjective_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_mindustry_game_MapObjectives$UnitCountObjective_update_R_boolean,
	(void *) M_mindustry_game_MapObjectives$MapObjective_reset,
	(void *) M_mindustry_game_MapObjectives$MapObjective_done,
	(void *) M_mindustry_game_MapObjectives$MapObjective_dependencyFinished_R_boolean,
	(void *) M_mindustry_game_MapObjectives$MapObjective_isCompleted_R_boolean,
	(void *) M_mindustry_game_MapObjectives$MapObjective_qualified_R_boolean,
	(void *) M_mindustry_game_MapObjectives$MapObjective_child_mindustry_game_MapObjectives$MapObjective_R_mindustry_game_MapObjectives$MapObjective,
	(void *) M_mindustry_game_MapObjectives$MapObjective_parent_mindustry_game_MapObjectives$MapObjective_R_mindustry_game_MapObjectives$MapObjective,
	(void *) M_mindustry_game_MapObjectives$MapObjective_details_java_lang_String_R_mindustry_game_MapObjectives$MapObjective,
	(void *) M_mindustry_game_MapObjectives$MapObjective_flagsAdded_Array1_java_lang_String_R_mindustry_game_MapObjectives$MapObjective,
	(void *) M_mindustry_game_MapObjectives$MapObjective_flagsRemoved_Array1_java_lang_String_R_mindustry_game_MapObjectives$MapObjective,
	(void *) M_mindustry_game_MapObjectives$MapObjective_markers_Array1_mindustry_game_MapObjectives$ObjectiveMarker_R_mindustry_game_MapObjectives$MapObjective,
	(void *) M_mindustry_game_MapObjectives$UnitCountObjective_text_R_java_lang_String,
	(void *) M_mindustry_game_MapObjectives$MapObjective_details_R_java_lang_String,
	(void *) M_mindustry_game_MapObjectives$MapObjective_typeName_R_java_lang_String,
	(void *) M_mindustry_game_MapObjectives$UnitCountObjective_validate,
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
	{ "update", "()Z" },
	{ "reset", "()V" },
	{ "done", "()V" },
	{ "dependencyFinished", "()Z" },
	{ "isCompleted", "()Z" },
	{ "qualified", "()Z" },
	{ "child", "(Lmindustry/game/MapObjectives$MapObjective;)Lmindustry/game/MapObjectives$MapObjective;" },
	{ "parent", "(Lmindustry/game/MapObjectives$MapObjective;)Lmindustry/game/MapObjectives$MapObjective;" },
	{ "details", "(Ljava/lang/String;)Lmindustry/game/MapObjectives$MapObjective;" },
	{ "flagsAdded", "([Ljava/lang/String;)Lmindustry/game/MapObjectives$MapObjective;" },
	{ "flagsRemoved", "([Ljava/lang/String;)Lmindustry/game/MapObjectives$MapObjective;" },
	{ "markers", "([Lmindustry/game/MapObjectives$ObjectiveMarker;)Lmindustry/game/MapObjectives$MapObjective;" },
	{ "text", "()Ljava/lang/String;" },
	{ "details", "()Ljava/lang/String;" },
	{ "typeName", "()Ljava/lang/String;" },
	{ "validate", "()V" },
};

static FieldMetadata fields[] {
	{ "unit", &class_mindustry_type_UnitType, offsetof(mindustry_game_MapObjectives$UnitCountObjective, F_unit), "Lmindustry/type/UnitType;", 1 },
	{ "count", &class_int, offsetof(mindustry_game_MapObjectives$UnitCountObjective, F_count), "I", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_game_MapObjectives$UnitCountObjective_mindustry_type_UnitType_int, 0, "(Lmindustry/type/UnitType;I)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_game_MapObjectives$UnitCountObjective, 0, "()V", 1 },
	{ "update", (intptr_t) M_mindustry_game_MapObjectives$UnitCountObjective_update_R_boolean, VTABLE_mindustry_game_MapObjectives$UnitCountObjective_update_R_boolean, "()Z", 1 },
	{ "text", (intptr_t) M_mindustry_game_MapObjectives$UnitCountObjective_text_R_java_lang_String, VTABLE_mindustry_game_MapObjectives$UnitCountObjective_text_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "validate", (intptr_t) M_mindustry_game_MapObjectives$UnitCountObjective_validate, VTABLE_mindustry_game_MapObjectives$UnitCountObjective_validate, "()V", 1 },
	{ "toString", (intptr_t) M_mindustry_game_MapObjectives$UnitCountObjective_toString_R_java_lang_String, VTABLE_mindustry_game_MapObjectives$UnitCountObjective_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
};

Class class_mindustry_game_MapObjectives$UnitCountObjective{
		.nativeName = (intptr_t) "mindustry/game/MapObjectives$UnitCountObjective",
		.parentClass = (intptr_t) &class_mindustry_game_MapObjectives$MapObjective,
		.size = sizeof(mindustry_game_MapObjectives$UnitCountObjective),
		.classVtable = (intptr_t) vtable_mindustry_game_MapObjectives$UnitCountObjective,
		.staticInitializer = (intptr_t) clinit_mindustry_game_MapObjectives$UnitCountObjective,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_game_MapObjectives$UnitCountObjective,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_game_MapObjectives,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 27,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_game_MapObjectives$UnitCountObjective = registerClass(&class_mindustry_game_MapObjectives$UnitCountObjective);

}

