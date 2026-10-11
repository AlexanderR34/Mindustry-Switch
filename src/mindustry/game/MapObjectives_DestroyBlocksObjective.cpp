#include "mindustry/game/MapObjectives_DestroyBlocksObjective.h"
#include "java/lang/Integer.h"
#include "arc/Core.h"
#include "java/lang/reflect/Field.h"
#include "mindustry/world/Block.h"
#include "mindustry/game/MapObjectives_Synthetic.h"
#include "java/lang/annotation/Annotation.h"
#include "arc/math/geom/Point2.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "mindustry/gen/Building.h"
#include "java/lang/reflect/Constructor.h"
#include "mindustry/game/MapObjectives_DestroyBlocksObjective.h"
#include "mindustry/game/MapObjectives_Unordered.h"
#include "mindustry/content/Blocks.h"
#include "mindustry/game/MapObjectives_MapObjective.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/util/Arrays.h"
#include "arc/util/I18NBundle.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/game/MapObjectives.h"
#include "mindustry/game/Team.h"
#include "mindustry/Vars.h"
#include "mindustry/core/World.h"

extern "C" {


void mark_mindustry_game_MapObjectives$DestroyBlocksObjective(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_game_MapObjectives$DestroyBlocksObjective *) object;
	if (self->F_positions)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_positions)->clazz)->markFunction)((jobject) self->F_positions, mark, depth + 1);
	if (self->F_team)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_team)->clazz)->markFunction)((jobject) self->F_team, mark, depth + 1);
	if (self->F_block)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_block)->clazz)->markFunction)((jobject) self->F_block, mark, depth + 1);
}

void clinit_mindustry_game_MapObjectives$DestroyBlocksObjective(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_game_MapObjectives$MapObjective(ctx);
}

void init_mindustry_game_MapObjectives$DestroyBlocksObjective_mindustry_world_Block_mindustry_game_Team_Array1_arc_math_geom_Point2(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapObjectives$DestroyBlocksObjective:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_MapObjectives$DestroyBlocksObjective(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(630);
	init_mindustry_game_MapObjectives$MapObjective(ctx, (frame[0].o));
	LINE_NUMBER(626);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_arc_math_geom_Point2, (jint(0)));
	((mindustry_game_MapObjectives$DestroyBlocksObjective *) NULL_CHECK(sp[0].o))->F_positions = (jref) sp[1].o;
	LINE_NUMBER(627);
	sp[0].o = frame[0].o;
	clinit_mindustry_game_Team(ctx);
	sp[1].o = (jobject)SF_mindustry_game_Team_crux;
	((mindustry_game_MapObjectives$DestroyBlocksObjective *) NULL_CHECK(sp[0].o))->F_team = (jref) sp[1].o;
	LINE_NUMBER(628);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_router;
	((mindustry_game_MapObjectives$DestroyBlocksObjective *) NULL_CHECK(sp[0].o))->F_block = (jref) sp[1].o;
	LINE_NUMBER(631);
	((mindustry_game_MapObjectives$DestroyBlocksObjective *) NULL_CHECK((frame[0].o)))->F_block = (jref) (frame[1].o);
	LINE_NUMBER(632);
	((mindustry_game_MapObjectives$DestroyBlocksObjective *) NULL_CHECK((frame[0].o)))->F_team = (jref) (frame[2].o);
	LINE_NUMBER(633);
	((mindustry_game_MapObjectives$DestroyBlocksObjective *) NULL_CHECK((frame[0].o)))->F_positions = (jref) (frame[3].o);
	LINE_NUMBER(634);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_game_MapObjectives$DestroyBlocksObjective(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapObjectives$DestroyBlocksObjective:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_MapObjectives$DestroyBlocksObjective(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(636);
	init_mindustry_game_MapObjectives$MapObjective(ctx, (frame[0].o));
	LINE_NUMBER(626);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_arc_math_geom_Point2, (jint(0)));
	((mindustry_game_MapObjectives$DestroyBlocksObjective *) NULL_CHECK(sp[0].o))->F_positions = (jref) sp[1].o;
	LINE_NUMBER(627);
	sp[0].o = frame[0].o;
	clinit_mindustry_game_Team(ctx);
	sp[1].o = (jobject)SF_mindustry_game_Team_crux;
	((mindustry_game_MapObjectives$DestroyBlocksObjective *) NULL_CHECK(sp[0].o))->F_team = (jref) sp[1].o;
	LINE_NUMBER(628);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_router;
	((mindustry_game_MapObjectives$DestroyBlocksObjective *) NULL_CHECK(sp[0].o))->F_block = (jref) sp[1].o;
	LINE_NUMBER(636);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_mindustry_game_MapObjectives$DestroyBlocksObjective_progress_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapObjectives$DestroyBlocksObjective:progress", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(639);
	frame[1].i = (jint(0));
	LINE_NUMBER(640);
	sp[0].o = (jobject)((mindustry_game_MapObjectives$DestroyBlocksObjective *) NULL_CHECK((frame[0].o)))->F_positions;
	frame[2].o = sp[0].o;
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_2:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_3;
	}
	{
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(641);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_build_int_int_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_build_int_int_R_mindustry_gen_Building])(ctx, sp[0].o, ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[5].o)))->F_x), ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[5].o)))->F_y));
	frame[6].o = sp[0].o;
	LINE_NUMBER(642);
	if ((frame[6].o) == nullptr) goto label_6;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[6].o)))->F_team;
	sp[1].o = (jobject)((mindustry_game_MapObjectives$DestroyBlocksObjective *) NULL_CHECK((frame[0].o)))->F_team;
	if (sp[0].o != sp[1].o) goto label_6;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[6].o)))->F_block;
	sp[1].o = (jobject)((mindustry_game_MapObjectives$DestroyBlocksObjective *) NULL_CHECK((frame[0].o)))->F_block;
	if (sp[0].o == sp[1].o) goto label_7;
	}
label_6:;
	LINE_NUMBER(643);
	INST_IINC(1, 1);
label_7:;
	{
	LINE_NUMBER(640);
	INST_IINC(4, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(646);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

jbool M_mindustry_game_MapObjectives$DestroyBlocksObjective_update_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapObjectives$DestroyBlocksObjective:update", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(651);
	jint temp0 = (jint)((func_mindustry_game_MapObjectives$DestroyBlocksObjective_progress_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_game_MapObjectives$DestroyBlocksObjective_progress_R_int])(ctx, (frame[0].o));
	sp[0].o = (jobject)((mindustry_game_MapObjectives$DestroyBlocksObjective *) NULL_CHECK((frame[0].o)))->F_positions;
	if (temp0 < (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_1;
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

jobject M_mindustry_game_MapObjectives$DestroyBlocksObjective_text_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapObjectives$DestroyBlocksObjective:text", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(656);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"objective.destroyblocks"_j));
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(4)));
	jint temp0 = jint(0);
	jint temp1 = (jint)((func_mindustry_game_MapObjectives$DestroyBlocksObjective_progress_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_game_MapObjectives$DestroyBlocksObjective_progress_R_int])(ctx, (frame[0].o));
	sp[3].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, temp1);
	ARRAY_ACCESS(jobject, sp[2].o, temp0) = sp[3].o;
	jint temp2 = jint(1);
	sp[3].o = (jobject)((mindustry_game_MapObjectives$DestroyBlocksObjective *) NULL_CHECK((frame[0].o)))->F_positions;
	sp[3].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (((jarray) nullCheck(ctx, sp[3].o))->length));
	ARRAY_ACCESS(jobject, sp[2].o, temp2) = sp[3].o;
	jint temp3 = jint(2);
	sp[3].o = (jobject)((mindustry_game_MapObjectives$DestroyBlocksObjective *) NULL_CHECK((frame[0].o)))->F_block;
	sp[3].o = (jobject)((func_mindustry_world_Block_emoji_R_java_lang_String) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_mindustry_world_Block_emoji_R_java_lang_String])(ctx, sp[3].o);
	sp[3].o = (jobject)concatStringsRecipe(ctx, u8"\u0001 "_j.string, 1, sp[3].o);
	ARRAY_ACCESS(jobject, sp[2].o, temp3) = sp[3].o;
	jint temp4 = jint(3);
	sp[3].o = (jobject)((mindustry_game_MapObjectives$DestroyBlocksObjective *) NULL_CHECK((frame[0].o)))->F_block;
	sp[3].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[3].o))->F_localizedName;
	ARRAY_ACCESS(jobject, sp[2].o, temp4) = sp[3].o;
	sp[0].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_game_MapObjectives$DestroyBlocksObjective_validate(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapObjectives$DestroyBlocksObjective:validate", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(661);
	sp[0].o = (jobject)((mindustry_game_MapObjectives$DestroyBlocksObjective *) NULL_CHECK((frame[0].o)))->F_block;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_router;
	((mindustry_game_MapObjectives$DestroyBlocksObjective *) NULL_CHECK(sp[0].o))->F_block = (jref) sp[1].o;
	}
label_1:;
	LINE_NUMBER(662);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_game_MapObjectives$DestroyBlocksObjective_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapObjectives$DestroyBlocksObjective:toString", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(666);
	sp[0].o = (jobject)((mindustry_game_MapObjectives$DestroyBlocksObjective *) NULL_CHECK((frame[0].o)))->F_block;
	sp[0].o = (jobject)SM_java_lang_String_valueOf_java_lang_Object_R_java_lang_String(ctx, sp[0].o);
	sp[1].o = (jobject)((mindustry_game_MapObjectives$DestroyBlocksObjective *) NULL_CHECK((frame[0].o)))->F_team;
	sp[1].o = (jobject)SM_java_lang_String_valueOf_java_lang_Object_R_java_lang_String(ctx, sp[1].o);
	sp[2].o = (jobject)((mindustry_game_MapObjectives$DestroyBlocksObjective *) NULL_CHECK((frame[0].o)))->F_positions;
	sp[2].o = (jobject)SM_java_util_Arrays_toString_Array1_java_lang_Object_R_java_lang_String(ctx, sp[2].o);
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"destroyBlocks: \u0001:\u0001 \u0001"_j.string, 3, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_game_MapObjectives$DestroyBlocksObjective;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	{ // Field positions
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[0]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_mindustry_game_MapObjectives$Unordered);
	}

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field block
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[2]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_mindustry_game_MapObjectives$Synthetic);
	}

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[1])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_game_MapObjectives$DestroyBlocksObjective[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_mindustry_game_MapObjectives$DestroyBlocksObjective_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_mindustry_game_MapObjectives$DestroyBlocksObjective_update_R_boolean,
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
	(void *) M_mindustry_game_MapObjectives$DestroyBlocksObjective_text_R_java_lang_String,
	(void *) M_mindustry_game_MapObjectives$MapObjective_details_R_java_lang_String,
	(void *) M_mindustry_game_MapObjectives$MapObjective_typeName_R_java_lang_String,
	(void *) M_mindustry_game_MapObjectives$DestroyBlocksObjective_validate,
	(void *) M_mindustry_game_MapObjectives$DestroyBlocksObjective_progress_R_int,
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
	{ "progress", "()I" },
};

static FieldMetadata fields[] {
	{ "positions", getArrayClass(&class_arc_math_geom_Point2, 1), offsetof(mindustry_game_MapObjectives$DestroyBlocksObjective, F_positions), "[Larc/math/geom/Point2;", 1 },
	{ "team", &class_mindustry_game_Team, offsetof(mindustry_game_MapObjectives$DestroyBlocksObjective, F_team), "Lmindustry/game/Team;", 1 },
	{ "block", &class_mindustry_world_Block, offsetof(mindustry_game_MapObjectives$DestroyBlocksObjective, F_block), "Lmindustry/world/Block;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_game_MapObjectives$DestroyBlocksObjective_mindustry_world_Block_mindustry_game_Team_Array1_arc_math_geom_Point2, 0, "(Lmindustry/world/Block;Lmindustry/game/Team;[Larc/math/geom/Point2;)V", 129 },
	{ "<init>", (intptr_t) init_mindustry_game_MapObjectives$DestroyBlocksObjective, 0, "()V", 1 },
	{ "progress", (intptr_t) M_mindustry_game_MapObjectives$DestroyBlocksObjective_progress_R_int, VTABLE_mindustry_game_MapObjectives$DestroyBlocksObjective_progress_R_int, "()I", 1 },
	{ "update", (intptr_t) M_mindustry_game_MapObjectives$DestroyBlocksObjective_update_R_boolean, VTABLE_mindustry_game_MapObjectives$DestroyBlocksObjective_update_R_boolean, "()Z", 1 },
	{ "text", (intptr_t) M_mindustry_game_MapObjectives$DestroyBlocksObjective_text_R_java_lang_String, VTABLE_mindustry_game_MapObjectives$DestroyBlocksObjective_text_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "validate", (intptr_t) M_mindustry_game_MapObjectives$DestroyBlocksObjective_validate, VTABLE_mindustry_game_MapObjectives$DestroyBlocksObjective_validate, "()V", 1 },
	{ "toString", (intptr_t) M_mindustry_game_MapObjectives$DestroyBlocksObjective_toString_R_java_lang_String, VTABLE_mindustry_game_MapObjectives$DestroyBlocksObjective_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
};

Class class_mindustry_game_MapObjectives$DestroyBlocksObjective{
		.nativeName = (intptr_t) "mindustry/game/MapObjectives$DestroyBlocksObjective",
		.parentClass = (intptr_t) &class_mindustry_game_MapObjectives$MapObjective,
		.size = sizeof(mindustry_game_MapObjectives$DestroyBlocksObjective),
		.classVtable = (intptr_t) vtable_mindustry_game_MapObjectives$DestroyBlocksObjective,
		.staticInitializer = (intptr_t) clinit_mindustry_game_MapObjectives$DestroyBlocksObjective,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_game_MapObjectives$DestroyBlocksObjective,
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
		.methodCount = 7,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 28,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_game_MapObjectives$DestroyBlocksObjective = registerClass(&class_mindustry_game_MapObjectives$DestroyBlocksObjective);

}

