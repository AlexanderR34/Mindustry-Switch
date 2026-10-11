#include "mindustry/game/MapObjectives_MapObjective.h"
#include "arc/util/serialization/AllowSerialization.h"
#include "mindustry/game/MapObjectives_Multiline.h"
#include "mindustry/game/Rules.h"
#include "mindustry/logic/LExecutor.h"
#include "java/lang/reflect/Constructor.h"
#include "mindustry/game/MapObjectives_LogicCode.h"
#include "mindustry/game/MapObjectives_MapObjective.h"
#include "java/lang/String.h"
#include "arc/util/I18NBundle.h"
#include "arc/struct/Seq.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/game/MapObjectives_ObjectiveMarker.h"
#include "java/lang/reflect/Field.h"
#include "arc/Core.h"
#include "java/util/Iterator.h"
#include "java/lang/annotation/Annotation.h"
#include "arc/util/Nullable.h"
#include "java/lang/CharSequence.h"
#include "mindustry/game/MapObjectives_Unordered.h"
#include "java/lang/Object.h"
#include "arc/struct/ObjectSet.h"
#include "mindustry/game/MapObjectives.h"
#include "java/lang/Class.h"
#include "mindustry/Vars.h"
#include "mindustry/core/GameState.h"

extern "C" {


void mark_mindustry_game_MapObjectives$MapObjective(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_game_MapObjectives$MapObjective *) object;
	if (self->F_details)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_details)->clazz)->markFunction)((jobject) self->F_details, mark, depth + 1);
	if (self->F_completionLogicCode)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_completionLogicCode)->clazz)->markFunction)((jobject) self->F_completionLogicCode, mark, depth + 1);
	if (self->F_flagsAdded)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_flagsAdded)->clazz)->markFunction)((jobject) self->F_flagsAdded, mark, depth + 1);
	if (self->F_flagsRemoved)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_flagsRemoved)->clazz)->markFunction)((jobject) self->F_flagsRemoved, mark, depth + 1);
	if (self->F_markers)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_markers)->clazz)->markFunction)((jobject) self->F_markers, mark, depth + 1);
	if (self->F_parents)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_parents)->clazz)->markFunction)((jobject) self->F_parents, mark, depth + 1);
	if (self->F_children)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_children)->clazz)->markFunction)((jobject) self->F_children, mark, depth + 1);
}

void clinit_mindustry_game_MapObjectives$MapObjective(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_game_MapObjectives$MapObjective(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapObjectives$MapObjective:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_MapObjectives$MapObjective(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(180);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(184);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(0)));
	((mindustry_game_MapObjectives$MapObjective *) NULL_CHECK(sp[0].o))->F_flagsAdded = (jref) sp[1].o;
	LINE_NUMBER(185);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(0)));
	((mindustry_game_MapObjectives$MapObjective *) NULL_CHECK(sp[0].o))->F_flagsRemoved = (jref) sp[1].o;
	LINE_NUMBER(186);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_game_MapObjectives$ObjectiveMarker, (jint(0)));
	((mindustry_game_MapObjectives$MapObjective *) NULL_CHECK(sp[0].o))->F_markers = (jref) sp[1].o;
	LINE_NUMBER(189);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq_int(ctx, sp[1].o, (jint(2)));
	((mindustry_game_MapObjectives$MapObjective *) NULL_CHECK(sp[0].o))->F_parents = (jref) sp[1].o;
	LINE_NUMBER(191);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq_int(ctx, sp[1].o, (jint(2)));
	((mindustry_game_MapObjectives$MapObjective *) NULL_CHECK(sp[0].o))->F_children = (jref) sp[1].o;
	LINE_NUMBER(194);
	((mindustry_game_MapObjectives$MapObjective *) NULL_CHECK((frame[0].o)))->F_editorX = (-999);
	((mindustry_game_MapObjectives$MapObjective *) NULL_CHECK((frame[0].o)))->F_editorY = (-999);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_game_MapObjectives$MapObjective_reset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapObjectives$MapObjective:reset", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(205);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_game_MapObjectives$MapObjective_done(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapObjectives$MapObjective:done", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(209);
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
	sp[1].o = (jobject)((mindustry_game_MapObjectives$MapObjective *) NULL_CHECK((frame[0].o)))->F_flagsRemoved;
	if (sp[0].o && sp[1].o) {
		((func_arc_struct_ObjectSet_removeAll_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_removeAll_Array1_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	}
	LINE_NUMBER(210);
	sp[1].o = (jobject)((mindustry_game_MapObjectives$MapObjective *) NULL_CHECK((frame[0].o)))->F_flagsAdded;
	if (sp[0].o && sp[1].o) {
		jint temp0 = (jint)((func_arc_struct_ObjectSet_addAll_Array1_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_addAll_Array1_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	}
	LINE_NUMBER(211);
	((mindustry_game_MapObjectives$MapObjective *) NULL_CHECK((frame[0].o)))->F_completed = (jint(1));
	LINE_NUMBER(213);
	sp[0].o = (jobject)((mindustry_game_MapObjectives$MapObjective *) NULL_CHECK((frame[0].o)))->F_completionLogicCode;
	SM_mindustry_logic_LExecutor_runLogicScript_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(214);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_game_MapObjectives$MapObjective_dependencyFinished_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapObjectives$MapObjective:dependencyFinished", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	if (!frame[0].o) {
		popStackFrame(ctx);
		return 1;
	}
	{
	LINE_NUMBER(218);
	auto objSelf = (mindustry_game_MapObjectives$MapObjective *) frame[0].o;
	if (objSelf->F_depFinished != 0) {
		popStackFrame(ctx);
		return 1;
	}
	if (!objSelf->F_parents || ((arc_struct_Seq *) objSelf->F_parents)->F_size == 0) {
		objSelf->F_depFinished = 1;
		popStackFrame(ctx);
		return 1;
	}
	}
	{
	LINE_NUMBER(220);
	sp[0].o = (jobject)((mindustry_game_MapObjectives$MapObjective *) NULL_CHECK((frame[0].o)))->F_parents;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_2:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_mindustry_game_MapObjectives$MapObjective, sp[0].o));
	LINE_NUMBER(221);
	jint temp0 = (jint)((func_mindustry_game_MapObjectives$MapObjective_isCompleted_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_game_MapObjectives$MapObjective_isCompleted_R_boolean])(ctx, (frame[2].o));
	if (temp0 != 0) goto label_5;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_5:;
	LINE_NUMBER(222);
	goto label_2;
label_3:;
	{
	LINE_NUMBER(224);
	sp[0].o = frame[0].o;
	jint temp0 = jint(1);
	((mindustry_game_MapObjectives$MapObjective *) NULL_CHECK(sp[0].o))->F_depFinished = temp0;
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_game_MapObjectives$MapObjective_isCompleted_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapObjectives$MapObjective:isCompleted", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(229);
	popStackFrame(ctx);
	return ((jint)((mindustry_game_MapObjectives$MapObjective *) NULL_CHECK((frame[0].o)))->F_completed);
	}

	popStackFrame(ctx);
}

jbool M_mindustry_game_MapObjectives$MapObjective_qualified_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapObjectives$MapObjective:qualified", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(234);
	if (((jint)((mindustry_game_MapObjectives$MapObjective *) NULL_CHECK((frame[0].o)))->F_completed) != 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_game_MapObjectives$MapObjective_dependencyFinished_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_game_MapObjectives$MapObjective_dependencyFinished_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
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

jobject M_mindustry_game_MapObjectives$MapObjective_child_mindustry_game_MapObjectives$MapObjective_R_mindustry_game_MapObjectives$MapObjective(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapObjectives$MapObjective:child", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	if (!frame[0].o || !frame[1].o) {
		popStackFrame(ctx);
		return frame[0].o;
	}
	{
	LINE_NUMBER(239);
	auto childObj = (mindustry_game_MapObjectives$MapObjective *) frame[1].o;
	auto parentObj = (mindustry_game_MapObjectives$MapObjective *) frame[0].o;
	if (!childObj->F_parents) {
		clinit_arc_struct_Seq(ctx);
		childObj->F_parents = (jref) gcAlloc(ctx, &class_arc_struct_Seq);
		init_arc_struct_Seq_int(ctx, (jobject) childObj->F_parents, 2);
	}
	if (!parentObj->F_children) {
		clinit_arc_struct_Seq(ctx);
		parentObj->F_children = (jref) gcAlloc(ctx, &class_arc_struct_Seq);
		init_arc_struct_Seq_int(ctx, (jobject) parentObj->F_children, 2);
	}
	sp[0].o = (jobject)childObj->F_parents;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(240);
	sp[0].o = (jobject)parentObj->F_children;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(241);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_game_MapObjectives$MapObjective_parent_mindustry_game_MapObjectives$MapObjective_R_mindustry_game_MapObjectives$MapObjective(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapObjectives$MapObjective:parent", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	if (!frame[0].o || !frame[1].o) {
		popStackFrame(ctx);
		return frame[0].o;
	}
	{
	LINE_NUMBER(246);
	auto childObj = (mindustry_game_MapObjectives$MapObjective *) frame[0].o;
	if (!childObj->F_parents) {
		clinit_arc_struct_Seq(ctx);
		childObj->F_parents = (jref) gcAlloc(ctx, &class_arc_struct_Seq);
		init_arc_struct_Seq_int(ctx, (jobject) childObj->F_parents, 2);
	}
	sp[0].o = (jobject)childObj->F_parents;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(247);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_game_MapObjectives$MapObjective_details_java_lang_String_R_mindustry_game_MapObjectives$MapObjective(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapObjectives$MapObjective:details", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(252);
	((mindustry_game_MapObjectives$MapObjective *) NULL_CHECK((frame[0].o)))->F_details = (jref) (frame[1].o);
	LINE_NUMBER(253);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_game_MapObjectives$MapObjective_flagsAdded_Array1_java_lang_String_R_mindustry_game_MapObjectives$MapObjective(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapObjectives$MapObjective:flagsAdded", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(258);
	((mindustry_game_MapObjectives$MapObjective *) NULL_CHECK((frame[0].o)))->F_flagsAdded = (jref) (frame[1].o);
	LINE_NUMBER(259);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_game_MapObjectives$MapObjective_flagsRemoved_Array1_java_lang_String_R_mindustry_game_MapObjectives$MapObjective(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapObjectives$MapObjective:flagsRemoved", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(264);
	((mindustry_game_MapObjectives$MapObjective *) NULL_CHECK((frame[0].o)))->F_flagsRemoved = (jref) (frame[1].o);
	LINE_NUMBER(265);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_game_MapObjectives$MapObjective_markers_Array1_mindustry_game_MapObjectives$ObjectiveMarker_R_mindustry_game_MapObjectives$MapObjective(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapObjectives$MapObjective:markers", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(270);
	((mindustry_game_MapObjectives$MapObjective *) NULL_CHECK((frame[0].o)))->F_markers = (jref) (frame[1].o);
	LINE_NUMBER(271);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_game_MapObjectives$MapObjective_text_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapObjectives$MapObjective:text", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(276);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_game_MapObjectives$MapObjective_details_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapObjectives$MapObjective:details", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(281);
	sp[0].o = (jobject)((mindustry_game_MapObjectives$MapObjective *) NULL_CHECK((frame[0].o)))->F_details;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_game_MapObjectives$MapObjective_typeName_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapObjectives$MapObjective:typeName", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(286);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_lang_Class_getSimpleName_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_getSimpleName_R_java_lang_String])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Objective"_j))), (((jobject) createStringLiteral(ctx, u8""_j))));
	frame[1].o = sp[0].o;
	LINE_NUMBER(287);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	if (sp[0].o != nullptr) goto label_2;
	}
	INST_ALOAD(1);
	goto label_3;
label_2:;
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = (jobject)((func_java_lang_String_toLowerCase_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_toLowerCase_R_java_lang_String])(ctx, (frame[1].o));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"objective.\u0001.name"_j.string, 1, sp[1].o);
	sp[0].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_java_lang_String_R_java_lang_String])(ctx, sp[0].o, sp[1].o, (frame[1].o));
	sp += 1;
	}
label_3:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

void M_mindustry_game_MapObjectives$MapObjective_validate(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapObjectives$MapObjective:validate", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(293);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_game_MapObjectives$MapObjective;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field details
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 2);
		fields[1]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
		annotations[1] = gcAlloc(ctx, &class_mindustry_game_MapObjectives$Multiline);
	}

	{ // Field completionLogicCode
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 2);
		fields[2]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
		annotations[1] = gcAlloc(ctx, &class_mindustry_game_MapObjectives$LogicCode);
	}

	{ // Field flagsAdded
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[3]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_mindustry_game_MapObjectives$Unordered);
	}

	{ // Field flagsRemoved
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[4]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_mindustry_game_MapObjectives$Unordered);
	}

	fields[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method text
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[12]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Method details
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[13]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	methods[14]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[15]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_game_MapObjectives$MapObjective[] {
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
	(void *) nullptr,
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
	(void *) M_mindustry_game_MapObjectives$MapObjective_text_R_java_lang_String,
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

static jclass interfaces[] { &class_arc_util_serialization_AllowSerialization, };

static FieldMetadata fields[] {
	{ "hidden", &class_boolean, offsetof(mindustry_game_MapObjectives$MapObjective, F_hidden), "Z", 1 },
	{ "details", &class_java_lang_String, offsetof(mindustry_game_MapObjectives$MapObjective, F_details), "Ljava/lang/String;", 1 },
	{ "completionLogicCode", &class_java_lang_String, offsetof(mindustry_game_MapObjectives$MapObjective, F_completionLogicCode), "Ljava/lang/String;", 1 },
	{ "flagsAdded", getArrayClass(&class_java_lang_String, 1), offsetof(mindustry_game_MapObjectives$MapObjective, F_flagsAdded), "[Ljava/lang/String;", 1 },
	{ "flagsRemoved", getArrayClass(&class_java_lang_String, 1), offsetof(mindustry_game_MapObjectives$MapObjective, F_flagsRemoved), "[Ljava/lang/String;", 1 },
	{ "markers", getArrayClass(&class_mindustry_game_MapObjectives$ObjectiveMarker, 1), offsetof(mindustry_game_MapObjectives$MapObjective, F_markers), "[Lmindustry/game/MapObjectives$ObjectiveMarker;", 1 },
	{ "parents", &class_arc_struct_Seq, offsetof(mindustry_game_MapObjectives$MapObjective, F_parents), "Larc/struct/Seq;", 129 },
	{ "children", &class_arc_struct_Seq, offsetof(mindustry_game_MapObjectives$MapObjective, F_children), "Larc/struct/Seq;", 146 },
	{ "editorX", &class_int, offsetof(mindustry_game_MapObjectives$MapObjective, F_editorX), "I", 129 },
	{ "editorY", &class_int, offsetof(mindustry_game_MapObjectives$MapObjective, F_editorY), "I", 129 },
	{ "completed", &class_boolean, offsetof(mindustry_game_MapObjectives$MapObjective, F_completed), "Z", 2 },
	{ "depFinished", &class_boolean, offsetof(mindustry_game_MapObjectives$MapObjective, F_depFinished), "Z", 130 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_game_MapObjectives$MapObjective, 0, "()V", 1 },
	{ "update", 0, VTABLE_mindustry_game_MapObjectives$MapObjective_update_R_boolean, "()Z", 1025 },
	{ "reset", (intptr_t) M_mindustry_game_MapObjectives$MapObjective_reset, VTABLE_mindustry_game_MapObjectives$MapObjective_reset, "()V", 1 },
	{ "done", (intptr_t) M_mindustry_game_MapObjectives$MapObjective_done, VTABLE_mindustry_game_MapObjectives$MapObjective_done, "()V", 1 },
	{ "dependencyFinished", (intptr_t) M_mindustry_game_MapObjectives$MapObjective_dependencyFinished_R_boolean, VTABLE_mindustry_game_MapObjectives$MapObjective_dependencyFinished_R_boolean, "()Z", 17 },
	{ "isCompleted", (intptr_t) M_mindustry_game_MapObjectives$MapObjective_isCompleted_R_boolean, VTABLE_mindustry_game_MapObjectives$MapObjective_isCompleted_R_boolean, "()Z", 17 },
	{ "qualified", (intptr_t) M_mindustry_game_MapObjectives$MapObjective_qualified_R_boolean, VTABLE_mindustry_game_MapObjectives$MapObjective_qualified_R_boolean, "()Z", 1 },
	{ "child", (intptr_t) M_mindustry_game_MapObjectives$MapObjective_child_mindustry_game_MapObjectives$MapObjective_R_mindustry_game_MapObjectives$MapObjective, VTABLE_mindustry_game_MapObjectives$MapObjective_child_mindustry_game_MapObjectives$MapObjective_R_mindustry_game_MapObjectives$MapObjective, "(Lmindustry/game/MapObjectives$MapObjective;)Lmindustry/game/MapObjectives$MapObjective;", 1 },
	{ "parent", (intptr_t) M_mindustry_game_MapObjectives$MapObjective_parent_mindustry_game_MapObjectives$MapObjective_R_mindustry_game_MapObjectives$MapObjective, VTABLE_mindustry_game_MapObjectives$MapObjective_parent_mindustry_game_MapObjectives$MapObjective_R_mindustry_game_MapObjectives$MapObjective, "(Lmindustry/game/MapObjectives$MapObjective;)Lmindustry/game/MapObjectives$MapObjective;", 1 },
	{ "details", (intptr_t) M_mindustry_game_MapObjectives$MapObjective_details_java_lang_String_R_mindustry_game_MapObjectives$MapObjective, VTABLE_mindustry_game_MapObjectives$MapObjective_details_java_lang_String_R_mindustry_game_MapObjectives$MapObjective, "(Ljava/lang/String;)Lmindustry/game/MapObjectives$MapObjective;", 1 },
	{ "flagsAdded", (intptr_t) M_mindustry_game_MapObjectives$MapObjective_flagsAdded_Array1_java_lang_String_R_mindustry_game_MapObjectives$MapObjective, VTABLE_mindustry_game_MapObjectives$MapObjective_flagsAdded_Array1_java_lang_String_R_mindustry_game_MapObjectives$MapObjective, "([Ljava/lang/String;)Lmindustry/game/MapObjectives$MapObjective;", 129 },
	{ "flagsRemoved", (intptr_t) M_mindustry_game_MapObjectives$MapObjective_flagsRemoved_Array1_java_lang_String_R_mindustry_game_MapObjectives$MapObjective, VTABLE_mindustry_game_MapObjectives$MapObjective_flagsRemoved_Array1_java_lang_String_R_mindustry_game_MapObjectives$MapObjective, "([Ljava/lang/String;)Lmindustry/game/MapObjectives$MapObjective;", 129 },
	{ "markers", (intptr_t) M_mindustry_game_MapObjectives$MapObjective_markers_Array1_mindustry_game_MapObjectives$ObjectiveMarker_R_mindustry_game_MapObjectives$MapObjective, VTABLE_mindustry_game_MapObjectives$MapObjective_markers_Array1_mindustry_game_MapObjectives$ObjectiveMarker_R_mindustry_game_MapObjectives$MapObjective, "([Lmindustry/game/MapObjectives$ObjectiveMarker;)Lmindustry/game/MapObjectives$MapObjective;", 129 },
	{ "text", (intptr_t) M_mindustry_game_MapObjectives$MapObjective_text_R_java_lang_String, VTABLE_mindustry_game_MapObjectives$MapObjective_text_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "details", (intptr_t) M_mindustry_game_MapObjectives$MapObjective_details_R_java_lang_String, VTABLE_mindustry_game_MapObjectives$MapObjective_details_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "typeName", (intptr_t) M_mindustry_game_MapObjectives$MapObjective_typeName_R_java_lang_String, VTABLE_mindustry_game_MapObjectives$MapObjective_typeName_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "validate", (intptr_t) M_mindustry_game_MapObjectives$MapObjective_validate, VTABLE_mindustry_game_MapObjectives$MapObjective_validate, "()V", 1 },
};

Class class_mindustry_game_MapObjectives$MapObjective{
		.nativeName = (intptr_t) "mindustry/game/MapObjectives$MapObjective",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_game_MapObjectives$MapObjective),
		.classVtable = (intptr_t) vtable_mindustry_game_MapObjectives$MapObjective,
		.staticInitializer = (intptr_t) clinit_mindustry_game_MapObjectives$MapObjective,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_game_MapObjectives$MapObjective,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_game_MapObjectives,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1057,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 12,
		.nativeFields = (intptr_t) fields,
		.methodCount = 17,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 27,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_game_MapObjectives$MapObjective = registerClass(&class_mindustry_game_MapObjectives$MapObjective);

}

