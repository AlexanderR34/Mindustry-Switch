#include "mindustry/game/MapObjectives_FlagObjective.h"
#include "mindustry/game/MapObjectives_FlagObjective.h"
#include "mindustry/type/MapLocales.h"
#include "arc/Core.h"
#include "java/lang/reflect/Field.h"
#include "mindustry/game/MapObjectives_Multiline.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/game/Rules.h"
#include "arc/util/Nullable.h"
#include "java/lang/reflect/Constructor.h"
#include "mindustry/game/MapObjectives_MapObjective.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/util/I18NBundle.h"
#include "java/lang/reflect/Method.h"
#include "arc/struct/ObjectSet.h"
#include "mindustry/game/MapObjectives.h"
#include "mindustry/Vars.h"
#include "mindustry/core/GameState.h"

extern "C" {


void mark_mindustry_game_MapObjectives$FlagObjective(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_game_MapObjectives$FlagObjective *) object;
	if (self->F_flag)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_flag)->clazz)->markFunction)((jobject) self->F_flag, mark, depth + 1);
	if (self->F_text)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_text)->clazz)->markFunction)((jobject) self->F_text, mark, depth + 1);
}

void clinit_mindustry_game_MapObjectives$FlagObjective(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_game_MapObjectives$MapObjective(ctx);
}

void init_mindustry_game_MapObjectives$FlagObjective_java_lang_String_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapObjectives$FlagObjective:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_MapObjectives$FlagObjective(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(693);
	init_mindustry_game_MapObjectives$MapObjective(ctx, (frame[0].o));
	LINE_NUMBER(690);
	((mindustry_game_MapObjectives$FlagObjective *) NULL_CHECK((frame[0].o)))->F_flag = (jref) (((jobject) createStringLiteral(ctx, u8"flag"_j)));
	LINE_NUMBER(694);
	((mindustry_game_MapObjectives$FlagObjective *) NULL_CHECK((frame[0].o)))->F_flag = (jref) (frame[1].o);
	LINE_NUMBER(695);
	((mindustry_game_MapObjectives$FlagObjective *) NULL_CHECK((frame[0].o)))->F_text = (jref) (frame[2].o);
	LINE_NUMBER(696);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_game_MapObjectives$FlagObjective(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapObjectives$FlagObjective:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_MapObjectives$FlagObjective(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(698);
	init_mindustry_game_MapObjectives$MapObjective(ctx, (frame[0].o));
	LINE_NUMBER(690);
	((mindustry_game_MapObjectives$FlagObjective *) NULL_CHECK((frame[0].o)))->F_flag = (jref) (((jobject) createStringLiteral(ctx, u8"flag"_j)));
	LINE_NUMBER(698);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_game_MapObjectives$FlagObjective_update_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapObjectives$FlagObjective:update", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(702);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	auto rules = (mindustry_game_Rules *) NULL_CHECK(sp[0].o);
	if (!rules->F_objectiveFlags) {
		clinit_arc_struct_ObjectSet(ctx);
		rules->F_objectiveFlags = (jref)gcAlloc(ctx, &class_arc_struct_ObjectSet);
		init_arc_struct_ObjectSet(ctx, (jobject)rules->F_objectiveFlags);
	}
	sp[0].o = (jobject)rules->F_objectiveFlags;
	sp[1].o = (jobject)((mindustry_game_MapObjectives$FlagObjective *) NULL_CHECK((frame[0].o)))->F_flag;
	jint temp0 = 0;
	if (sp[0].o && sp[1].o) {
		temp0 = (jint)((func_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	}
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_game_MapObjectives$FlagObjective_text_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapObjectives$FlagObjective:text", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(708);
	sp[0].o = (jobject)((mindustry_game_MapObjectives$FlagObjective *) NULL_CHECK((frame[0].o)))->F_text;
	if (sp[0].o != nullptr) goto label_1;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(710);
	sp[0].o = (jobject)((mindustry_game_MapObjectives$FlagObjective *) NULL_CHECK((frame[0].o)))->F_text;
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@"_j))));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(711);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_mapLocales;
	sp[1].o = (jobject)((mindustry_game_MapObjectives$FlagObjective *) NULL_CHECK((frame[0].o)))->F_text;
	sp[1].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, sp[1].o, (jint(1)));
	jint temp0 = (jint)((func_mindustry_type_MapLocales_containsProperty_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_MapLocales_containsProperty_java_lang_String_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_4;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_mapLocales;
	sp[1].o = (jobject)((mindustry_game_MapObjectives$FlagObjective *) NULL_CHECK((frame[0].o)))->F_text;
	sp[1].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, sp[1].o, (jint(1)));
	sp[0].o = (jobject)((func_mindustry_type_MapLocales_getProperty_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_MapLocales_getProperty_java_lang_String_R_java_lang_String])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(712);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = (jobject)((mindustry_game_MapObjectives$FlagObjective *) NULL_CHECK((frame[0].o)))->F_text;
	sp[1].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, sp[1].o, (jint(1)));
	sp[0].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(714);
	sp[0].o = (jobject)((mindustry_game_MapObjectives$FlagObjective *) NULL_CHECK((frame[0].o)))->F_text;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_game_MapObjectives$FlagObjective_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapObjectives$FlagObjective:toString", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(720);
	sp[0].o = (jobject)((mindustry_game_MapObjectives$FlagObjective *) NULL_CHECK((frame[0].o)))->F_flag;
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"flag: \u0001"_j.string, 1, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_game_MapObjectives$FlagObjective;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field text
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[1]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_mindustry_game_MapObjectives$Multiline);
	}

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[1])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method text
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[1]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_game_MapObjectives$FlagObjective[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_mindustry_game_MapObjectives$FlagObjective_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_mindustry_game_MapObjectives$FlagObjective_update_R_boolean,
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
	(void *) M_mindustry_game_MapObjectives$FlagObjective_text_R_java_lang_String,
	(void *) M_mindustry_game_MapObjectives$MapObjective_details_R_java_lang_String,
	(void *) M_mindustry_game_MapObjectives$MapObjective_typeName_R_java_lang_String,
	(void *) M_mindustry_game_MapObjectives$MapObjective_validate,
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
	{ "flag", &class_java_lang_String, offsetof(mindustry_game_MapObjectives$FlagObjective, F_flag), "Ljava/lang/String;", 1 },
	{ "text", &class_java_lang_String, offsetof(mindustry_game_MapObjectives$FlagObjective, F_text), "Ljava/lang/String;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_game_MapObjectives$FlagObjective_java_lang_String_java_lang_String, 0, "(Ljava/lang/String;Ljava/lang/String;)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_game_MapObjectives$FlagObjective, 0, "()V", 1 },
	{ "update", (intptr_t) M_mindustry_game_MapObjectives$FlagObjective_update_R_boolean, VTABLE_mindustry_game_MapObjectives$FlagObjective_update_R_boolean, "()Z", 1 },
	{ "text", (intptr_t) M_mindustry_game_MapObjectives$FlagObjective_text_R_java_lang_String, VTABLE_mindustry_game_MapObjectives$FlagObjective_text_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "toString", (intptr_t) M_mindustry_game_MapObjectives$FlagObjective_toString_R_java_lang_String, VTABLE_mindustry_game_MapObjectives$FlagObjective_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
};

Class class_mindustry_game_MapObjectives$FlagObjective{
		.nativeName = (intptr_t) "mindustry/game/MapObjectives$FlagObjective",
		.parentClass = (intptr_t) &class_mindustry_game_MapObjectives$MapObjective,
		.size = sizeof(mindustry_game_MapObjectives$FlagObjective),
		.classVtable = (intptr_t) vtable_mindustry_game_MapObjectives$FlagObjective,
		.staticInitializer = (intptr_t) clinit_mindustry_game_MapObjectives$FlagObjective,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_game_MapObjectives$FlagObjective,
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
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 27,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_game_MapObjectives$FlagObjective = registerClass(&class_mindustry_game_MapObjectives$FlagObjective);

}

