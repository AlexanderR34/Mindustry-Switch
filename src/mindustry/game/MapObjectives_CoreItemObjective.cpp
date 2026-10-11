#include "mindustry/game/MapObjectives_CoreItemObjective.h"
#include "java/lang/Integer.h"
#include "arc/Core.h"
#include "mindustry/type/Item.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "mindustry/content/Items.h"
#include "mindustry/game/MapObjectives_MapObjective.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/game/GameStats.h"
#include "arc/util/I18NBundle.h"
#include "mindustry/game/MapObjectives_CoreItemObjective.h"
#include "mindustry/game/MapObjectives.h"
#include "mindustry/Vars.h"
#include "mindustry/core/GameState.h"
#include "arc/struct/ObjectIntMap.h"

extern "C" {


void mark_mindustry_game_MapObjectives$CoreItemObjective(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_game_MapObjectives$CoreItemObjective *) object;
	if (self->F_item)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_item)->clazz)->markFunction)((jobject) self->F_item, mark, depth + 1);
}

void clinit_mindustry_game_MapObjectives$CoreItemObjective(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_game_MapObjectives$MapObjective(ctx);
}

void init_mindustry_game_MapObjectives$CoreItemObjective_mindustry_type_Item_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapObjectives$CoreItemObjective:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_MapObjectives$CoreItemObjective(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(396);
	init_mindustry_game_MapObjectives$MapObjective(ctx, (frame[0].o));
	LINE_NUMBER(393);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Items(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Items_copper;
	((mindustry_game_MapObjectives$CoreItemObjective *) NULL_CHECK(sp[0].o))->F_item = (jref) sp[1].o;
	LINE_NUMBER(394);
	((mindustry_game_MapObjectives$CoreItemObjective *) NULL_CHECK((frame[0].o)))->F_amount = (jint(2));
	LINE_NUMBER(397);
	((mindustry_game_MapObjectives$CoreItemObjective *) NULL_CHECK((frame[0].o)))->F_item = (jref) (frame[1].o);
	LINE_NUMBER(398);
	((mindustry_game_MapObjectives$CoreItemObjective *) NULL_CHECK((frame[0].o)))->F_amount = (frame[2].i);
	LINE_NUMBER(399);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_game_MapObjectives$CoreItemObjective(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapObjectives$CoreItemObjective:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_MapObjectives$CoreItemObjective(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(401);
	init_mindustry_game_MapObjectives$MapObjective(ctx, (frame[0].o));
	LINE_NUMBER(393);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Items(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Items_copper;
	((mindustry_game_MapObjectives$CoreItemObjective *) NULL_CHECK(sp[0].o))->F_item = (jref) sp[1].o;
	LINE_NUMBER(394);
	((mindustry_game_MapObjectives$CoreItemObjective *) NULL_CHECK((frame[0].o)))->F_amount = (jint(2));
	LINE_NUMBER(401);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_game_MapObjectives$CoreItemObjective_update_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapObjectives$CoreItemObjective:update", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(405);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_stats;
	sp[0].o = (jobject)((mindustry_game_GameStats *) NULL_CHECK(sp[0].o))->F_coreItemCount;
	sp[1].o = (jobject)((mindustry_game_MapObjectives$CoreItemObjective *) NULL_CHECK((frame[0].o)))->F_item;
	jint temp0 = (jint)((func_arc_struct_ObjectIntMap_get_java_lang_Object_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectIntMap_get_java_lang_Object_R_int])(ctx, sp[0].o, sp[1].o);
	if (temp0 < ((jint)((mindustry_game_MapObjectives$CoreItemObjective *) NULL_CHECK((frame[0].o)))->F_amount)) goto label_1;
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

jobject M_mindustry_game_MapObjectives$CoreItemObjective_text_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapObjectives$CoreItemObjective:text", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(410);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"objective.coreitem"_j));
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(4)));
	jint temp0 = jint(0);
	clinit_mindustry_Vars(ctx);
	sp[3].o = (jobject)SF_mindustry_Vars_state;
	sp[3].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[3].o))->F_stats;
	sp[3].o = (jobject)((mindustry_game_GameStats *) NULL_CHECK(sp[3].o))->F_coreItemCount;
	sp[4].o = (jobject)((mindustry_game_MapObjectives$CoreItemObjective *) NULL_CHECK((frame[0].o)))->F_item;
	jint temp1 = (jint)((func_arc_struct_ObjectIntMap_get_java_lang_Object_R_int) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_arc_struct_ObjectIntMap_get_java_lang_Object_R_int])(ctx, sp[3].o, sp[4].o);
	sp[3].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, temp1);
	ARRAY_ACCESS(jobject, sp[2].o, temp0) = sp[3].o;
	jint temp2 = jint(1);
	sp[3].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, ((jint)((mindustry_game_MapObjectives$CoreItemObjective *) NULL_CHECK((frame[0].o)))->F_amount));
	ARRAY_ACCESS(jobject, sp[2].o, temp2) = sp[3].o;
	jint temp3 = jint(2);
	sp[3].o = (jobject)((mindustry_game_MapObjectives$CoreItemObjective *) NULL_CHECK((frame[0].o)))->F_item;
	sp[3].o = (jobject)((func_mindustry_type_Item_emoji_R_java_lang_String) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_mindustry_type_Item_emoji_R_java_lang_String])(ctx, sp[3].o);
	sp[3].o = (jobject)concatStringsRecipe(ctx, u8"\u0001 "_j.string, 1, sp[3].o);
	ARRAY_ACCESS(jobject, sp[2].o, temp3) = sp[3].o;
	jint temp4 = jint(3);
	sp[3].o = (jobject)((mindustry_game_MapObjectives$CoreItemObjective *) NULL_CHECK((frame[0].o)))->F_item;
	sp[3].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[3].o))->F_localizedName;
	ARRAY_ACCESS(jobject, sp[2].o, temp4) = sp[3].o;
	sp[0].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_game_MapObjectives$CoreItemObjective_validate(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapObjectives$CoreItemObjective:validate", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(415);
	sp[0].o = (jobject)((mindustry_game_MapObjectives$CoreItemObjective *) NULL_CHECK((frame[0].o)))->F_item;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Items(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Items_copper;
	((mindustry_game_MapObjectives$CoreItemObjective *) NULL_CHECK(sp[0].o))->F_item = (jref) sp[1].o;
	}
label_1:;
	LINE_NUMBER(416);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_game_MapObjectives$CoreItemObjective_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapObjectives$CoreItemObjective:toString", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(420);
	sp[0].o = (jobject)((mindustry_game_MapObjectives$CoreItemObjective *) NULL_CHECK((frame[0].o)))->F_item;
	sp[0].o = (jobject)SM_java_lang_String_valueOf_java_lang_Object_R_java_lang_String(ctx, sp[0].o);
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"coreItem: \u0001 x\u0001"_j.string, 2, sp[0].o, boxInteger(ctx, ((jint)((mindustry_game_MapObjectives$CoreItemObjective *) NULL_CHECK((frame[0].o)))->F_amount)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_game_MapObjectives$CoreItemObjective[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_mindustry_game_MapObjectives$CoreItemObjective_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_mindustry_game_MapObjectives$CoreItemObjective_update_R_boolean,
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
	(void *) M_mindustry_game_MapObjectives$CoreItemObjective_text_R_java_lang_String,
	(void *) M_mindustry_game_MapObjectives$MapObjective_details_R_java_lang_String,
	(void *) M_mindustry_game_MapObjectives$MapObjective_typeName_R_java_lang_String,
	(void *) M_mindustry_game_MapObjectives$CoreItemObjective_validate,
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
	{ "item", &class_mindustry_type_Item, offsetof(mindustry_game_MapObjectives$CoreItemObjective, F_item), "Lmindustry/type/Item;", 1 },
	{ "amount", &class_int, offsetof(mindustry_game_MapObjectives$CoreItemObjective, F_amount), "I", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_game_MapObjectives$CoreItemObjective_mindustry_type_Item_int, 0, "(Lmindustry/type/Item;I)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_game_MapObjectives$CoreItemObjective, 0, "()V", 1 },
	{ "update", (intptr_t) M_mindustry_game_MapObjectives$CoreItemObjective_update_R_boolean, VTABLE_mindustry_game_MapObjectives$CoreItemObjective_update_R_boolean, "()Z", 1 },
	{ "text", (intptr_t) M_mindustry_game_MapObjectives$CoreItemObjective_text_R_java_lang_String, VTABLE_mindustry_game_MapObjectives$CoreItemObjective_text_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "validate", (intptr_t) M_mindustry_game_MapObjectives$CoreItemObjective_validate, VTABLE_mindustry_game_MapObjectives$CoreItemObjective_validate, "()V", 1 },
	{ "toString", (intptr_t) M_mindustry_game_MapObjectives$CoreItemObjective_toString_R_java_lang_String, VTABLE_mindustry_game_MapObjectives$CoreItemObjective_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
};

Class class_mindustry_game_MapObjectives$CoreItemObjective{
		.nativeName = (intptr_t) "mindustry/game/MapObjectives$CoreItemObjective",
		.parentClass = (intptr_t) &class_mindustry_game_MapObjectives$MapObjective,
		.size = sizeof(mindustry_game_MapObjectives$CoreItemObjective),
		.classVtable = (intptr_t) vtable_mindustry_game_MapObjectives$CoreItemObjective,
		.staticInitializer = (intptr_t) clinit_mindustry_game_MapObjectives$CoreItemObjective,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_game_MapObjectives$CoreItemObjective,
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
static bool registered_mindustry_game_MapObjectives$CoreItemObjective = registerClass(&class_mindustry_game_MapObjectives$CoreItemObjective);

}

