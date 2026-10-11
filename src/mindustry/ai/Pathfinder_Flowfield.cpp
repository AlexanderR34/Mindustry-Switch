#include "mindustry/ai/Pathfinder_Flowfield.h"
#include "arc/math/Mathf.h"
#include "java/lang/reflect/Field.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/ai/Pathfinder.h"
#include "arc/struct/IntSeq.h"
#include "arc/util/Nullable.h"
#include "java/lang/reflect/Constructor.h"
#include "java/lang/Object.h"
#include "mindustry/ai/Pathfinder_PathCost.h"
#include "mindustry/ai/Pathfinder_Flowfield.h"
#include "arc/struct/Seq.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/world/Tile.h"
#include "mindustry/game/Team.h"
#include "arc/struct/IntQueue.h"
#include "mindustry/Vars.h"

extern "C" {


void mark_mindustry_ai_Pathfinder$Flowfield(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_ai_Pathfinder$Flowfield *) object;
	if (self->F_team)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_team)->clazz)->markFunction)((jobject) self->F_team, mark, depth + 1);
	if (self->F_cost)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_cost)->clazz)->markFunction)((jobject) self->F_cost, mark, depth + 1);
	if (self->F_weights)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_weights)->clazz)->markFunction)((jobject) self->F_weights, mark, depth + 1);
	if (self->F_searches)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_searches)->clazz)->markFunction)((jobject) self->F_searches, mark, depth + 1);
	if (self->F_completeWeights)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_completeWeights)->clazz)->markFunction)((jobject) self->F_completeWeights, mark, depth + 1);
	if (self->F_frontier)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_frontier)->clazz)->markFunction)((jobject) self->F_frontier, mark, depth + 1);
	if (self->F_targets)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_targets)->clazz)->markFunction)((jobject) self->F_targets, mark, depth + 1);
}

void clinit_mindustry_ai_Pathfinder$Flowfield(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_ai_Pathfinder$Flowfield(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/Pathfinder$Flowfield:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_Pathfinder$Flowfield(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(645);
	init_mindustry_ai_Pathfinder$Flowfield_int(ctx, (frame[0].o), (jint(1)));
	LINE_NUMBER(646);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_ai_Pathfinder$Flowfield_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/Pathfinder$Flowfield:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_Pathfinder$Flowfield(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(648);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(614);
	sp[0].o = frame[0].o;
	clinit_mindustry_game_Team(ctx);
	sp[1].o = (jobject)SF_mindustry_game_Team_derelict;
	((mindustry_ai_Pathfinder$Flowfield *) NULL_CHECK(sp[0].o))->F_team = (jref) sp[1].o;
	LINE_NUMBER(616);
	sp[0].o = frame[0].o;
	clinit_mindustry_ai_Pathfinder(ctx);
	sp[1].o = (jobject)SF_mindustry_ai_Pathfinder_costTypes;
	sp[1].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[1].o, (jint(0)));
	((mindustry_ai_Pathfinder$Flowfield *) NULL_CHECK(sp[0].o))->F_cost = (jref) (checkCast(ctx, &class_mindustry_ai_Pathfinder$PathCost, sp[1].o));
	LINE_NUMBER(620);
	((mindustry_ai_Pathfinder$Flowfield *) NULL_CHECK((frame[0].o)))->F_dirty = (jint(0));
	LINE_NUMBER(634);
	sp[0].o = frame[0].o;
	clinit_arc_struct_IntQueue(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_IntQueue);
	init_arc_struct_IntQueue(ctx, sp[1].o);
	((mindustry_ai_Pathfinder$Flowfield *) NULL_CHECK(sp[0].o))->F_frontier = (jref) sp[1].o;
	LINE_NUMBER(636);
	sp[0].o = frame[0].o;
	clinit_arc_struct_IntSeq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_IntSeq);
	init_arc_struct_IntSeq(ctx, sp[1].o);
	((mindustry_ai_Pathfinder$Flowfield *) NULL_CHECK(sp[0].o))->F_targets = (jref) sp[1].o;
	LINE_NUMBER(638);
	((mindustry_ai_Pathfinder$Flowfield *) NULL_CHECK((frame[0].o)))->F_search = (jint(1));
	LINE_NUMBER(649);
	((mindustry_ai_Pathfinder$Flowfield *) NULL_CHECK((frame[0].o)))->F_resolution = (frame[1].i);
	LINE_NUMBER(650);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_arc_math_Mathf_ceil_float_R_int(ctx, ((jfloat((clinit_mindustry_ai_Pathfinder(ctx), (jint)SF_mindustry_ai_Pathfinder_wwidth))) / (jfloat((frame[1].i)))));
	((mindustry_ai_Pathfinder$Flowfield *) NULL_CHECK(sp[0].o))->F_width = temp0;
	LINE_NUMBER(651);
	sp[0].o = frame[0].o;
	jint temp1 = (jint)SM_arc_math_Mathf_ceil_float_R_int(ctx, ((jfloat((clinit_mindustry_ai_Pathfinder(ctx), (jint)SF_mindustry_ai_Pathfinder_wheight))) / (jfloat((frame[1].i)))));
	((mindustry_ai_Pathfinder$Flowfield *) NULL_CHECK(sp[0].o))->F_height = temp1;
	LINE_NUMBER(652);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ai_Pathfinder$Flowfield_setup(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/Pathfinder$Flowfield:setup", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(655);
	frame[1].i = (((jint)((mindustry_ai_Pathfinder$Flowfield *) NULL_CHECK((frame[0].o)))->F_width) * ((jint)((mindustry_ai_Pathfinder$Flowfield *) NULL_CHECK((frame[0].o)))->F_height));
	LINE_NUMBER(657);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (frame[1].i));
	((mindustry_ai_Pathfinder$Flowfield *) NULL_CHECK(sp[0].o))->F_weights = (jref) sp[1].o;
	LINE_NUMBER(658);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_short, (frame[1].i));
	((mindustry_ai_Pathfinder$Flowfield *) NULL_CHECK(sp[0].o))->F_searches = (jref) sp[1].o;
	LINE_NUMBER(659);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (frame[1].i));
	((mindustry_ai_Pathfinder$Flowfield *) NULL_CHECK(sp[0].o))->F_completeWeights = (jref) sp[1].o;
	LINE_NUMBER(660);
	sp[0].o = (jobject)((mindustry_ai_Pathfinder$Flowfield *) NULL_CHECK((frame[0].o)))->F_frontier;
	((func_arc_struct_IntQueue_ensureCapacity_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntQueue_ensureCapacity_int])(ctx, sp[0].o, ((frame[1].i) / (jint(4))));
	LINE_NUMBER(661);
	((mindustry_ai_Pathfinder$Flowfield *) NULL_CHECK((frame[0].o)))->F_initialized = (jint(1));
	LINE_NUMBER(662);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_mindustry_ai_Pathfinder$Flowfield_getCost_Array1_int_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/Pathfinder$Flowfield:getCost", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(665);
	sp[0].o = (jobject)((mindustry_ai_Pathfinder$Flowfield *) NULL_CHECK((frame[0].o)))->F_cost;
	sp[1].o = (jobject)((mindustry_ai_Pathfinder$Flowfield *) NULL_CHECK((frame[0].o)))->F_team;
	jint temp0 = (jint)((func_mindustry_ai_Pathfinder$PathCost_getCost_int_int_R_int) resolveInterfaceMethod(ctx, &class_mindustry_ai_Pathfinder$PathCost, INDEX_mindustry_ai_Pathfinder$PathCost_getCost_int_int_R_int, sp[0].o))(ctx, sp[0].o, ((jint)((mindustry_game_Team *) NULL_CHECK(sp[1].o))->F_id), ((jint)ARRAY_ACCESS(jint, (frame[1].o), (frame[2].i))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ai_Pathfinder$Flowfield_hasTargets_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/Pathfinder$Flowfield:hasTargets", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(669);
	sp[0].o = (jobject)((mindustry_ai_Pathfinder$Flowfield *) NULL_CHECK((frame[0].o)))->F_targets;
	if (((jint)((arc_struct_IntSeq *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_1;
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

jobject M_mindustry_ai_Pathfinder$Flowfield_getNextTile_mindustry_world_Tile_boolean_R_mindustry_world_Tile(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/Pathfinder$Flowfield:getNextTile", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(674);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_pathfinder;
	sp[0].o = (jobject)((func_mindustry_ai_Pathfinder_getTargetTile_mindustry_world_Tile_mindustry_ai_Pathfinder$Flowfield_boolean_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_Pathfinder_getTargetTile_mindustry_world_Tile_mindustry_ai_Pathfinder$Flowfield_boolean_R_mindustry_world_Tile])(ctx, sp[0].o, (frame[1].o), (frame[0].o), (frame[2].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ai_Pathfinder$Flowfield_getNextTile_mindustry_world_Tile_R_mindustry_world_Tile(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/Pathfinder$Flowfield:getNextTile", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(679);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_pathfinder;
	sp[0].o = (jobject)((func_mindustry_ai_Pathfinder_getTargetTile_mindustry_world_Tile_mindustry_ai_Pathfinder$Flowfield_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_Pathfinder_getTargetTile_mindustry_world_Tile_mindustry_ai_Pathfinder$Flowfield_R_mindustry_world_Tile])(ctx, sp[0].o, (frame[1].o), (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ai_Pathfinder$Flowfield_getNextTile_mindustry_world_Tile_int_R_mindustry_world_Tile(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/Pathfinder$Flowfield:getNextTile", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(684);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_pathfinder;
	sp[0].o = (jobject)((func_mindustry_ai_Pathfinder_getTargetTile_mindustry_world_Tile_mindustry_ai_Pathfinder$Flowfield_boolean_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_Pathfinder_getTargetTile_mindustry_world_Tile_mindustry_ai_Pathfinder$Flowfield_boolean_int_R_mindustry_world_Tile])(ctx, sp[0].o, (frame[1].o), (frame[0].o), (jint(1)), (frame[2].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ai_Pathfinder$Flowfield_hasCompleteWeights_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/Pathfinder$Flowfield:hasCompleteWeights", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(688);
	if (((jint)((mindustry_ai_Pathfinder$Flowfield *) NULL_CHECK((frame[0].o)))->F_hasComplete) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_ai_Pathfinder$Flowfield *) NULL_CHECK((frame[0].o)))->F_completeWeights;
	if (sp[0].o == nullptr) goto label_1;
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

void M_mindustry_ai_Pathfinder$Flowfield_updateTargetPositions(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/Pathfinder$Flowfield:updateTargetPositions", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(692);
	sp[0].o = (jobject)((mindustry_ai_Pathfinder$Flowfield *) NULL_CHECK((frame[0].o)))->F_targets;
	((func_arc_struct_IntSeq_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_clear])(ctx, sp[0].o);
	LINE_NUMBER(693);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_ai_Pathfinder$Flowfield *) NULL_CHECK((frame[0].o)))->F_targets;
	((func_mindustry_ai_Pathfinder$Flowfield_getPositions_arc_struct_IntSeq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_Pathfinder$Flowfield_getPositions_arc_struct_IntSeq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(694);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ai_Pathfinder$Flowfield_needsRefresh_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/Pathfinder$Flowfield:needsRefresh", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(698);
	if (((jint)((mindustry_ai_Pathfinder$Flowfield *) NULL_CHECK((frame[0].o)))->F_refreshRate) != 0) goto label_1;
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

jbool M_mindustry_ai_Pathfinder$Flowfield_passable_int_R_boolean(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/Pathfinder$Flowfield:passable", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(702);
	sp[0].o = (jobject)((mindustry_ai_Pathfinder$Flowfield *) NULL_CHECK((frame[0].o)))->F_cost;
	sp[1].o = (jobject)((mindustry_ai_Pathfinder$Flowfield *) NULL_CHECK((frame[0].o)))->F_team;
	jint temp0 = (jint)((mindustry_game_Team *) NULL_CHECK(sp[1].o))->F_id;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_pathfinder;
	sp[1].o = (jobject)((mindustry_ai_Pathfinder *) NULL_CHECK(sp[1].o))->F_tiles;
	jint temp1 = (jint)((func_mindustry_ai_Pathfinder$PathCost_getCost_int_int_R_int) resolveInterfaceMethod(ctx, &class_mindustry_ai_Pathfinder$PathCost, INDEX_mindustry_ai_Pathfinder$PathCost_getCost_int_int_R_int, sp[0].o))(ctx, sp[0].o, temp0, ((jint)ARRAY_ACCESS(jint, sp[1].o, (frame[1].i))));
	frame[2].i = temp1;
	LINE_NUMBER(704);
	if ((frame[2].i) == (jint(-1))) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_ai_Pathfinder$Flowfield *) NULL_CHECK((frame[0].o)))->F_cost;
	clinit_mindustry_ai_Pathfinder(ctx);
	sp[1].o = (jobject)SF_mindustry_ai_Pathfinder_costTypes;
	sp[1].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[1].o, (jint(2)));
	if (sp[0].o != sp[1].o) goto label_3;
	}
	{
	if ((frame[2].i) >= (6000)) goto label_2;
	}
label_3:;
	INST_ICONST(1);
	goto label_4;
label_2:;
	INST_ICONST(0);
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_ai_Pathfinder$Flowfield;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[12]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[13]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[14]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[15]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[1])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method getNextTile
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[3]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Method getNextTile
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[4]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Method getNextTile
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[5]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	methods[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_ai_Pathfinder$Flowfield[] {
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
	(void *) M_mindustry_ai_Pathfinder$Flowfield_setup,
	(void *) M_mindustry_ai_Pathfinder$Flowfield_getCost_Array1_int_int_R_int,
	(void *) M_mindustry_ai_Pathfinder$Flowfield_hasTargets_R_boolean,
	(void *) M_mindustry_ai_Pathfinder$Flowfield_getNextTile_mindustry_world_Tile_boolean_R_mindustry_world_Tile,
	(void *) M_mindustry_ai_Pathfinder$Flowfield_getNextTile_mindustry_world_Tile_R_mindustry_world_Tile,
	(void *) M_mindustry_ai_Pathfinder$Flowfield_getNextTile_mindustry_world_Tile_int_R_mindustry_world_Tile,
	(void *) M_mindustry_ai_Pathfinder$Flowfield_hasCompleteWeights_R_boolean,
	(void *) M_mindustry_ai_Pathfinder$Flowfield_updateTargetPositions,
	(void *) M_mindustry_ai_Pathfinder$Flowfield_needsRefresh_R_boolean,
	(void *) M_mindustry_ai_Pathfinder$Flowfield_passable_int_R_boolean,
	(void *) nullptr,
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
	{ "setup", "()V" },
	{ "getCost", "([II)I" },
	{ "hasTargets", "()Z" },
	{ "getNextTile", "(Lmindustry/world/Tile;Z)Lmindustry/world/Tile;" },
	{ "getNextTile", "(Lmindustry/world/Tile;)Lmindustry/world/Tile;" },
	{ "getNextTile", "(Lmindustry/world/Tile;I)Lmindustry/world/Tile;" },
	{ "hasCompleteWeights", "()Z" },
	{ "updateTargetPositions", "()V" },
	{ "needsRefresh", "()Z" },
	{ "passable", "(I)Z" },
	{ "getPositions", "(Larc/struct/IntSeq;)V" },
};

static FieldMetadata fields[] {
	{ "refreshRate", &class_int, offsetof(mindustry_ai_Pathfinder$Flowfield, F_refreshRate), "I", 4 },
	{ "team", &class_mindustry_game_Team, offsetof(mindustry_ai_Pathfinder$Flowfield, F_team), "Lmindustry/game/Team;", 4 },
	{ "cost", &class_mindustry_ai_Pathfinder$PathCost, offsetof(mindustry_ai_Pathfinder$Flowfield, F_cost), "Lmindustry/ai/Pathfinder$PathCost;", 4 },
	{ "hasComplete", &class_boolean, offsetof(mindustry_ai_Pathfinder$Flowfield, F_hasComplete), "Z", 68 },
	{ "dirty", &class_boolean, offsetof(mindustry_ai_Pathfinder$Flowfield, F_dirty), "Z", 4 },
	{ "weights", getArrayClass(&class_int, 1), offsetof(mindustry_ai_Pathfinder$Flowfield, F_weights), "[I", 1 },
	{ "searches", getArrayClass(&class_short, 1), offsetof(mindustry_ai_Pathfinder$Flowfield, F_searches), "[S", 1 },
	{ "completeWeights", getArrayClass(&class_int, 1), offsetof(mindustry_ai_Pathfinder$Flowfield, F_completeWeights), "[I", 1 },
	{ "resolution", &class_int, offsetof(mindustry_ai_Pathfinder$Flowfield, F_resolution), "I", 17 },
	{ "width", &class_int, offsetof(mindustry_ai_Pathfinder$Flowfield, F_width), "I", 17 },
	{ "height", &class_int, offsetof(mindustry_ai_Pathfinder$Flowfield, F_height), "I", 17 },
	{ "frontier", &class_arc_struct_IntQueue, offsetof(mindustry_ai_Pathfinder$Flowfield, F_frontier), "Larc/struct/IntQueue;", 16 },
	{ "targets", &class_arc_struct_IntSeq, offsetof(mindustry_ai_Pathfinder$Flowfield, F_targets), "Larc/struct/IntSeq;", 16 },
	{ "search", &class_int, offsetof(mindustry_ai_Pathfinder$Flowfield, F_search), "I", 0 },
	{ "lastUpdateTime", &class_long, offsetof(mindustry_ai_Pathfinder$Flowfield, F_lastUpdateTime), "J", 0 },
	{ "initialized", &class_boolean, offsetof(mindustry_ai_Pathfinder$Flowfield, F_initialized), "Z", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ai_Pathfinder$Flowfield, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_mindustry_ai_Pathfinder$Flowfield_int, 0, "(I)V", 1 },
	{ "setup", (intptr_t) M_mindustry_ai_Pathfinder$Flowfield_setup, VTABLE_mindustry_ai_Pathfinder$Flowfield_setup, "()V", 0 },
	{ "getCost", (intptr_t) M_mindustry_ai_Pathfinder$Flowfield_getCost_Array1_int_int_R_int, VTABLE_mindustry_ai_Pathfinder$Flowfield_getCost_Array1_int_int_R_int, "([II)I", 1 },
	{ "hasTargets", (intptr_t) M_mindustry_ai_Pathfinder$Flowfield_hasTargets_R_boolean, VTABLE_mindustry_ai_Pathfinder$Flowfield_hasTargets_R_boolean, "()Z", 1 },
	{ "getNextTile", (intptr_t) M_mindustry_ai_Pathfinder$Flowfield_getNextTile_mindustry_world_Tile_boolean_R_mindustry_world_Tile, VTABLE_mindustry_ai_Pathfinder$Flowfield_getNextTile_mindustry_world_Tile_boolean_R_mindustry_world_Tile, "(Lmindustry/world/Tile;Z)Lmindustry/world/Tile;", 1 },
	{ "getNextTile", (intptr_t) M_mindustry_ai_Pathfinder$Flowfield_getNextTile_mindustry_world_Tile_R_mindustry_world_Tile, VTABLE_mindustry_ai_Pathfinder$Flowfield_getNextTile_mindustry_world_Tile_R_mindustry_world_Tile, "(Lmindustry/world/Tile;)Lmindustry/world/Tile;", 1 },
	{ "getNextTile", (intptr_t) M_mindustry_ai_Pathfinder$Flowfield_getNextTile_mindustry_world_Tile_int_R_mindustry_world_Tile, VTABLE_mindustry_ai_Pathfinder$Flowfield_getNextTile_mindustry_world_Tile_int_R_mindustry_world_Tile, "(Lmindustry/world/Tile;I)Lmindustry/world/Tile;", 1 },
	{ "hasCompleteWeights", (intptr_t) M_mindustry_ai_Pathfinder$Flowfield_hasCompleteWeights_R_boolean, VTABLE_mindustry_ai_Pathfinder$Flowfield_hasCompleteWeights_R_boolean, "()Z", 1 },
	{ "updateTargetPositions", (intptr_t) M_mindustry_ai_Pathfinder$Flowfield_updateTargetPositions, VTABLE_mindustry_ai_Pathfinder$Flowfield_updateTargetPositions, "()V", 1 },
	{ "needsRefresh", (intptr_t) M_mindustry_ai_Pathfinder$Flowfield_needsRefresh_R_boolean, VTABLE_mindustry_ai_Pathfinder$Flowfield_needsRefresh_R_boolean, "()Z", 1 },
	{ "passable", (intptr_t) M_mindustry_ai_Pathfinder$Flowfield_passable_int_R_boolean, VTABLE_mindustry_ai_Pathfinder$Flowfield_passable_int_R_boolean, "(I)Z", 4 },
	{ "getPositions", 0, VTABLE_mindustry_ai_Pathfinder$Flowfield_getPositions_arc_struct_IntSeq, "(Larc/struct/IntSeq;)V", 1028 },
};

Class class_mindustry_ai_Pathfinder$Flowfield{
		.nativeName = (intptr_t) "mindustry/ai/Pathfinder$Flowfield",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_ai_Pathfinder$Flowfield),
		.classVtable = (intptr_t) vtable_mindustry_ai_Pathfinder$Flowfield,
		.staticInitializer = (intptr_t) clinit_mindustry_ai_Pathfinder$Flowfield,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_ai_Pathfinder$Flowfield,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_ai_Pathfinder,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1057,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 16,
		.nativeFields = (intptr_t) fields,
		.methodCount = 13,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 22,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_ai_Pathfinder$Flowfield = registerClass(&class_mindustry_ai_Pathfinder$Flowfield);

}

