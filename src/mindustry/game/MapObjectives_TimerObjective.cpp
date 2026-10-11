#include "mindustry/game/MapObjectives_TimerObjective.h"
#include "java/lang/StringBuilder.h"
#include "mindustry/type/MapLocales.h"
#include "arc/Core.h"
#include "java/lang/reflect/Field.h"
#include "mindustry/game/MapObjectives_Multiline.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/game/Rules.h"
#include "java/lang/IllegalArgumentException.h"
#include "mindustry/game/MapObjectives_Second.h"
#include "arc/util/Time.h"
#include "arc/util/Nullable.h"
#include "java/lang/reflect/Constructor.h"
#include "mindustry/game/MapObjectives_MapObjective.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/util/I18NBundle.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/game/MapObjectives_TimerObjective.h"
#include "mindustry/game/MapObjectives.h"
#include "mindustry/Vars.h"
#include "mindustry/core/GameState.h"

extern "C" {


void mark_mindustry_game_MapObjectives$TimerObjective(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_game_MapObjectives$TimerObjective *) object;
	if (self->F_text)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_text)->clazz)->markFunction)((jobject) self->F_text, mark, depth + 1);
}

void clinit_mindustry_game_MapObjectives$TimerObjective(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_game_MapObjectives$MapObjective(ctx);
}

void init_mindustry_game_MapObjectives$TimerObjective_java_lang_String_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapObjectives$TimerObjective:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_MapObjectives$TimerObjective(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(522);
	init_mindustry_game_MapObjectives$MapObjective(ctx, (frame[0].o));
	LINE_NUMBER(518);
	((mindustry_game_MapObjectives$TimerObjective *) NULL_CHECK((frame[0].o)))->F_duration = (jfloat(1800.0f));
	LINE_NUMBER(523);
	((mindustry_game_MapObjectives$TimerObjective *) NULL_CHECK((frame[0].o)))->F_text = (jref) (frame[1].o);
	LINE_NUMBER(524);
	((mindustry_game_MapObjectives$TimerObjective *) NULL_CHECK((frame[0].o)))->F_duration = (frame[2].f);
	LINE_NUMBER(525);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_game_MapObjectives$TimerObjective(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapObjectives$TimerObjective:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_MapObjectives$TimerObjective(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(527);
	init_mindustry_game_MapObjectives$MapObjective(ctx, (frame[0].o));
	LINE_NUMBER(518);
	((mindustry_game_MapObjectives$TimerObjective *) NULL_CHECK((frame[0].o)))->F_duration = (jfloat(1800.0f));
	LINE_NUMBER(528);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_game_MapObjectives$TimerObjective_update_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapObjectives$TimerObjective:update", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(532);
	sp[0].o = frame[0].o;
	jfloat temp0 = ((jfloat)((mindustry_game_MapObjectives$TimerObjective *) NULL_CHECK(sp[0].o))->F_countup) + (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta);
	((mindustry_game_MapObjectives$TimerObjective *) NULL_CHECK(sp[0].o))->F_countup = temp0;
	jfloat temp3 = (jfloat)((mindustry_game_MapObjectives$TimerObjective *) NULL_CHECK((frame[0].o)))->F_duration;
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if ((floatCompare(temp0, (temp3 * ((jfloat)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_objectiveTimerMultiplier)), -1)) < 0) goto label_1;
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

void M_mindustry_game_MapObjectives$TimerObjective_reset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapObjectives$TimerObjective:reset", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(537);
	((mindustry_game_MapObjectives$TimerObjective *) NULL_CHECK((frame[0].o)))->F_countup = (jfloat(0));
	LINE_NUMBER(538);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_game_MapObjectives$TimerObjective_text_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapObjectives$TimerObjective:text", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(543);
	sp[0].o = (jobject)((mindustry_game_MapObjectives$TimerObjective *) NULL_CHECK((frame[0].o)))->F_text;
	if (sp[0].o == nullptr) goto label_9;
	}
	{
	LINE_NUMBER(544);
	jfloat temp0 = (jfloat)((mindustry_game_MapObjectives$TimerObjective *) NULL_CHECK((frame[0].o)))->F_duration;
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	frame[1].i = (jint((((temp0 * ((jfloat)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_objectiveTimerMultiplier)) - ((jfloat)((mindustry_game_MapObjectives$TimerObjective *) NULL_CHECK((frame[0].o)))->F_countup)) / (jfloat(60.0f)))));
	LINE_NUMBER(545);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(547);
	frame[3].i = ((frame[1].i) / (60));
	LINE_NUMBER(548);
	frame[4].i = ((frame[1].i) % (60));
	LINE_NUMBER(549);
	if ((frame[3].i) <= 0) goto label_15;
	}
	{
	LINE_NUMBER(550);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, (frame[2].o), (frame[3].i));
	LINE_NUMBER(551);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8":"_j))));
	LINE_NUMBER(552);
	if ((frame[4].i) >= (10)) goto label_15;
	}
	{
	LINE_NUMBER(553);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"0"_j))));
	}
label_15:;
	{
	LINE_NUMBER(556);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, (frame[2].o), (frame[4].i));
	LINE_NUMBER(558);
	sp[0].o = (jobject)((mindustry_game_MapObjectives$TimerObjective *) NULL_CHECK((frame[0].o)))->F_text;
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@"_j))));
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(559);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_mapLocales;
	sp[1].o = (jobject)((mindustry_game_MapObjectives$TimerObjective *) NULL_CHECK((frame[0].o)))->F_text;
	sp[1].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, sp[1].o, (jint(1)));
	jint temp0 = (jint)((func_mindustry_type_MapLocales_containsProperty_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_MapLocales_containsProperty_java_lang_String_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_22;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_IllegalArgumentException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(561);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_mapLocales;
	sp[1].o = (jobject)((mindustry_game_MapObjectives$TimerObjective *) NULL_CHECK((frame[0].o)))->F_text;
	sp[1].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, sp[1].o, (jint(1)));
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[3].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[2].o));
	ARRAY_ACCESS(jobject, sp[2].o, temp0) = sp[3].o;
	sp[0].o = (jobject)((func_mindustry_type_MapLocales_getFormatted_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_MapLocales_getFormatted_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(562);
	frame[5].o = sp[0].o;
	LINE_NUMBER(564);
	((mindustry_game_MapObjectives$TimerObjective *) NULL_CHECK((frame[0].o)))->F_text = (jref) (((jobject) createStringLiteral(ctx, u8""_j)));
	}
label_22:;
	{
	LINE_NUMBER(568);
	sp[0].o = (jobject)((mindustry_game_MapObjectives$TimerObjective *) NULL_CHECK((frame[0].o)))->F_text;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@objective.enemyescelating"_j))));
	if (temp0 == 0) goto label_24;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"@objective.enemyescalating"_j));
	goto label_25;
label_24:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((mindustry_game_MapObjectives$TimerObjective *) NULL_CHECK(sp[-1].o))->F_text;
label_25:;
	{
	sp -= 1;
	frame[5].o = sp[0].o;
	LINE_NUMBER(569);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, (frame[5].o), (jint(1)));
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[3].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[2].o));
	ARRAY_ACCESS(jobject, sp[2].o, temp0) = sp[3].o;
	sp[0].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_4:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_IllegalArgumentException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	LINE_NUMBER(572);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = (jobject)((mindustry_game_MapObjectives$TimerObjective *) NULL_CHECK((frame[0].o)))->F_text;
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[3].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[2].o));
	ARRAY_ACCESS(jobject, sp[2].o, temp0) = sp[3].o;
	sp[0].o = (jobject)((func_arc_util_I18NBundle_formatString_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_formatString_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_6:;
	{
	sp -= 1;
	LINE_NUMBER(573);
	frame[5].o = sp[0].o;
	LINE_NUMBER(575);
	((mindustry_game_MapObjectives$TimerObjective *) NULL_CHECK((frame[0].o)))->F_text = (jref) (((jobject) createStringLiteral(ctx, u8""_j)));
	}
label_9:;
	{
	LINE_NUMBER(581);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_game_MapObjectives$TimerObjective_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapObjectives$TimerObjective:toString", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(586);
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"timer: \u0001"_j.string, 1, boxFloat(ctx, ((jfloat)((mindustry_game_MapObjectives$TimerObjective *) NULL_CHECK((frame[0].o)))->F_duration)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_game_MapObjectives$TimerObjective;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	{ // Field text
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[0]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_mindustry_game_MapObjectives$Multiline);
	}

	{ // Field duration
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[1]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_mindustry_game_MapObjectives$Second);
	}

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[1])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method text
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[2]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_game_MapObjectives$TimerObjective[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_mindustry_game_MapObjectives$TimerObjective_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_mindustry_game_MapObjectives$TimerObjective_update_R_boolean,
	(void *) M_mindustry_game_MapObjectives$TimerObjective_reset,
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
	(void *) M_mindustry_game_MapObjectives$TimerObjective_text_R_java_lang_String,
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
	{ "text", &class_java_lang_String, offsetof(mindustry_game_MapObjectives$TimerObjective, F_text), "Ljava/lang/String;", 1 },
	{ "duration", &class_float, offsetof(mindustry_game_MapObjectives$TimerObjective, F_duration), "F", 1 },
	{ "countup", &class_float, offsetof(mindustry_game_MapObjectives$TimerObjective, F_countup), "F", 4 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_game_MapObjectives$TimerObjective_java_lang_String_float, 0, "(Ljava/lang/String;F)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_game_MapObjectives$TimerObjective, 0, "()V", 1 },
	{ "update", (intptr_t) M_mindustry_game_MapObjectives$TimerObjective_update_R_boolean, VTABLE_mindustry_game_MapObjectives$TimerObjective_update_R_boolean, "()Z", 1 },
	{ "reset", (intptr_t) M_mindustry_game_MapObjectives$TimerObjective_reset, VTABLE_mindustry_game_MapObjectives$TimerObjective_reset, "()V", 1 },
	{ "text", (intptr_t) M_mindustry_game_MapObjectives$TimerObjective_text_R_java_lang_String, VTABLE_mindustry_game_MapObjectives$TimerObjective_text_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "toString", (intptr_t) M_mindustry_game_MapObjectives$TimerObjective_toString_R_java_lang_String, VTABLE_mindustry_game_MapObjectives$TimerObjective_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
};

Class class_mindustry_game_MapObjectives$TimerObjective{
		.nativeName = (intptr_t) "mindustry/game/MapObjectives$TimerObjective",
		.parentClass = (intptr_t) &class_mindustry_game_MapObjectives$MapObjective,
		.size = sizeof(mindustry_game_MapObjectives$TimerObjective),
		.classVtable = (intptr_t) vtable_mindustry_game_MapObjectives$TimerObjective,
		.staticInitializer = (intptr_t) clinit_mindustry_game_MapObjectives$TimerObjective,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_game_MapObjectives$TimerObjective,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_game_MapObjectives,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 27,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_game_MapObjectives$TimerObjective = registerClass(&class_mindustry_game_MapObjectives$TimerObjective);

}

