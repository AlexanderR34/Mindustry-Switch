#include "mindustry/gen/PowerGraphUpdater.h"
#include "mindustry/gen/IndexableEntity__powerGraph.h"
#include "mindustry/gen/PowerGraphUpdaterc.h"
#include "mindustry/world/blocks/power/PowerGraph.h"
#include "mindustry/gen/Groups.h"
#include "mindustry/gen/PowerGraphUpdater.h"
#include "mindustry/gen/Unitc.h"
#include "mindustry/entities/units/UnitController.h"
#include "arc/util/io/Reads.h"
#include "mindustry/entities/EntityGroup.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/gen/Player.h"
#include "mindustry/gen/Entityc.h"
#include "mindustry/Vars.h"
#include "arc/util/io/Writes.h"

extern "C" {


void mark_mindustry_gen_PowerGraphUpdater(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_gen_PowerGraphUpdater *) object;
	if (self->F_graph)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_graph)->clazz)->markFunction)((jobject) self->F_graph, mark, depth + 1);
}

void clinit_mindustry_gen_PowerGraphUpdater(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_gen_PowerGraphUpdater(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/PowerGraphUpdater:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_PowerGraphUpdater(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(87);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(83);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_mindustry_entities_EntityGroup_nextId_R_int(ctx);
	((mindustry_gen_PowerGraphUpdater *) NULL_CHECK(sp[0].o))->F_id = temp0;
	LINE_NUMBER(85);
	((mindustry_gen_PowerGraphUpdater *) NULL_CHECK((frame[0].o)))->F_index__powerGraph = (jint(-1));
	LINE_NUMBER(88);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_mindustry_gen_PowerGraphUpdater_classId_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/PowerGraphUpdater:classId", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(92);
	popStackFrame(ctx);
	return (42);
	}

	popStackFrame(ctx);
}

jint M_mindustry_gen_PowerGraphUpdater_id_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/PowerGraphUpdater:id", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(97);
	popStackFrame(ctx);
	return ((jint)((mindustry_gen_PowerGraphUpdater *) NULL_CHECK((frame[0].o)))->F_id);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_PowerGraphUpdater_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/PowerGraphUpdater:toString", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(102);
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"PowerGraphUpdater#\u0001"_j.string, 1, boxInteger(ctx, ((jint)((mindustry_gen_PowerGraphUpdater *) NULL_CHECK((frame[0].o)))->F_id)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_PowerGraphUpdater_graph_R_mindustry_world_blocks_power_PowerGraph(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/PowerGraphUpdater:graph", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(107);
	sp[0].o = (jobject)((mindustry_gen_PowerGraphUpdater *) NULL_CHECK((frame[0].o)))->F_graph;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_PowerGraphUpdater_graph_mindustry_world_blocks_power_PowerGraph(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/PowerGraphUpdater:graph", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(112);
	((mindustry_gen_PowerGraphUpdater *) NULL_CHECK((frame[0].o)))->F_graph = (jref) (frame[1].o);
	LINE_NUMBER(113);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_PowerGraphUpdater_id_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/PowerGraphUpdater:id", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(117);
	((mindustry_gen_PowerGraphUpdater *) NULL_CHECK((frame[0].o)))->F_id = (frame[1].i);
	LINE_NUMBER(118);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_PowerGraphUpdater_setIndex__powerGraph_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/PowerGraphUpdater:setIndex__powerGraph", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(122);
	((mindustry_gen_PowerGraphUpdater *) NULL_CHECK((frame[0].o)))->F_index__powerGraph = (frame[1].i);
	LINE_NUMBER(123);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_PowerGraphUpdater_self_R_mindustry_gen_Entityc(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/PowerGraphUpdater:self", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(127);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_PowerGraphUpdater_as_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/PowerGraphUpdater:as", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(132);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_PowerGraphUpdater_isAdded_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/PowerGraphUpdater:isAdded", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(137);
	popStackFrame(ctx);
	return ((jint)((mindustry_gen_PowerGraphUpdater *) NULL_CHECK((frame[0].o)))->F_added);
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_PowerGraphUpdater_isLocal_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/PowerGraphUpdater:isLocal", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(142);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	frame[2].o = (frame[0].o);
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_gen_Unitc)) == 0) goto label_2;
	}
	{
	frame[1].o = (checkCast(ctx, &class_mindustry_gen_Unitc, (frame[2].o)));
	sp[0].o = (jobject)((func_mindustry_gen_Unitc_controller_R_mindustry_entities_units_UnitController) resolveInterfaceMethod(ctx, &class_mindustry_gen_Unitc, INDEX_mindustry_gen_Unitc_controller_R_mindustry_entities_units_UnitController, (frame[1].o)))(ctx, (frame[1].o));
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	if (sp[0].o != sp[1].o) goto label_2;
	}
label_1:;
	INST_ICONST(1);
	goto label_4;
label_2:;
	INST_ICONST(0);
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_gen_PowerGraphUpdater_isRemote_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/PowerGraphUpdater:isRemote", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(147);
	frame[2].o = (frame[0].o);
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_gen_Unitc)) == 0) goto label_1;
	}
	{
	frame[1].o = (checkCast(ctx, &class_mindustry_gen_Unitc, (frame[2].o)));
	jint temp0 = (jint)((func_mindustry_gen_Unitc_isPlayer_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_gen_Unitc, INDEX_mindustry_gen_Unitc_isPlayer_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_PowerGraphUpdater_isLocal_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_PowerGraphUpdater_isLocal_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_3;
label_1:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_gen_PowerGraphUpdater_serialize_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/PowerGraphUpdater:serialize", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(151);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_gen_PowerGraphUpdater_create_R_mindustry_gen_PowerGraphUpdater(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/PowerGraphUpdater:create", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_PowerGraphUpdater(ctx);
	{
	LINE_NUMBER(155);
	clinit_mindustry_gen_PowerGraphUpdater(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_PowerGraphUpdater);
	init_mindustry_gen_PowerGraphUpdater(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_PowerGraphUpdater_add(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/PowerGraphUpdater:add", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(159);
	if (((jint)((mindustry_gen_PowerGraphUpdater *) NULL_CHECK((frame[0].o)))->F_added) != (jint(1))) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(160);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Groups(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Groups_powerGraph;
	jint temp0 = (jint)((func_mindustry_entities_EntityGroup_addIndex_mindustry_gen_Entityc_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_addIndex_mindustry_gen_Entityc_R_int])(ctx, sp[1].o, (frame[0].o));
	((mindustry_gen_PowerGraphUpdater *) NULL_CHECK(sp[0].o))->F_index__powerGraph = temp0;
	LINE_NUMBER(162);
	((mindustry_gen_PowerGraphUpdater *) NULL_CHECK((frame[0].o)))->F_added = (jint(1));
	LINE_NUMBER(163);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_PowerGraphUpdater_afterRead(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/PowerGraphUpdater:afterRead", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(167);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_PowerGraphUpdater_afterReadAll(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/PowerGraphUpdater:afterReadAll", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(171);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_PowerGraphUpdater_beforeWrite(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/PowerGraphUpdater:beforeWrite", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(175);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_PowerGraphUpdater_read_arc_util_io_Reads(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/PowerGraphUpdater:read", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(179);
	((func_mindustry_gen_PowerGraphUpdater_afterRead) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_PowerGraphUpdater_afterRead])(ctx, (frame[0].o));
	LINE_NUMBER(180);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_PowerGraphUpdater_remove(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/PowerGraphUpdater:remove", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(183);
	if (((jint)((mindustry_gen_PowerGraphUpdater *) NULL_CHECK((frame[0].o)))->F_added) != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(184);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_powerGraph;
	((func_mindustry_entities_EntityGroup_removeIndex_mindustry_gen_Entityc_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_removeIndex_mindustry_gen_Entityc_int])(ctx, sp[0].o, (frame[0].o), ((jint)((mindustry_gen_PowerGraphUpdater *) NULL_CHECK((frame[0].o)))->F_index__powerGraph));
	LINE_NUMBER(185);
	((mindustry_gen_PowerGraphUpdater *) NULL_CHECK((frame[0].o)))->F_index__powerGraph = (jint(-1));
	LINE_NUMBER(187);
	((mindustry_gen_PowerGraphUpdater *) NULL_CHECK((frame[0].o)))->F_added = (jint(0));
	LINE_NUMBER(188);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_PowerGraphUpdater_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/PowerGraphUpdater:update", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(196);
	sp[0].o = (jobject)((mindustry_gen_PowerGraphUpdater *) NULL_CHECK((frame[0].o)))->F_graph;
	((func_mindustry_world_blocks_power_PowerGraph_update) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_power_PowerGraph_update])(ctx, sp[0].o);
	LINE_NUMBER(198);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_PowerGraphUpdater_write_arc_util_io_Writes(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/PowerGraphUpdater:write", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(202);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_gen_PowerGraphUpdater[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_mindustry_gen_PowerGraphUpdater_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_mindustry_gen_PowerGraphUpdater_self_R_mindustry_gen_Entityc,
	(void *) M_mindustry_gen_PowerGraphUpdater_as_R_java_lang_Object,
	(void *) M_mindustry_gen_PowerGraphUpdater_isAdded_R_boolean,
	(void *) M_mindustry_gen_PowerGraphUpdater_isLocal_R_boolean,
	(void *) M_mindustry_gen_PowerGraphUpdater_isRemote_R_boolean,
	(void *) M_mindustry_gen_PowerGraphUpdater_serialize_R_boolean,
	(void *) M_mindustry_gen_PowerGraphUpdater_classId_R_int,
	(void *) M_mindustry_gen_PowerGraphUpdater_id_R_int,
	(void *) M_mindustry_gen_PowerGraphUpdater_add,
	(void *) M_mindustry_gen_PowerGraphUpdater_afterRead,
	(void *) M_mindustry_gen_PowerGraphUpdater_afterReadAll,
	(void *) M_mindustry_gen_PowerGraphUpdater_beforeWrite,
	(void *) M_mindustry_gen_PowerGraphUpdater_id_int,
	(void *) M_mindustry_gen_PowerGraphUpdater_read_arc_util_io_Reads,
	(void *) M_mindustry_gen_PowerGraphUpdater_remove,
	(void *) M_mindustry_gen_PowerGraphUpdater_update,
	(void *) M_mindustry_gen_PowerGraphUpdater_write_arc_util_io_Writes,
	(void *) M_mindustry_gen_PowerGraphUpdater_setIndex__powerGraph_int,
	(void *) M_mindustry_gen_PowerGraphUpdater_graph_R_mindustry_world_blocks_power_PowerGraph,
	(void *) M_mindustry_gen_PowerGraphUpdater_graph_mindustry_world_blocks_power_PowerGraph,
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
	{ "self", "()Lmindustry/gen/Entityc;" },
	{ "as", "()Ljava/lang/Object;" },
	{ "isAdded", "()Z" },
	{ "isLocal", "()Z" },
	{ "isRemote", "()Z" },
	{ "serialize", "()Z" },
	{ "classId", "()I" },
	{ "id", "()I" },
	{ "add", "()V" },
	{ "afterRead", "()V" },
	{ "afterReadAll", "()V" },
	{ "beforeWrite", "()V" },
	{ "id", "(I)V" },
	{ "read", "(Larc/util/io/Reads;)V" },
	{ "remove", "()V" },
	{ "update", "()V" },
	{ "write", "(Larc/util/io/Writes;)V" },
	{ "setIndex__powerGraph", "(I)V" },
	{ "graph", "()Lmindustry/world/blocks/power/PowerGraph;" },
	{ "graph", "(Lmindustry/world/blocks/power/PowerGraph;)V" },
};

static jclass interfaces[] { &class_mindustry_gen_Entityc, &class_mindustry_gen_IndexableEntity__powerGraph, &class_mindustry_gen_PowerGraphUpdaterc, };

static FieldMetadata fields[] {
	{ "added", &class_boolean, offsetof(mindustry_gen_PowerGraphUpdater, F_added), "Z", 132 },
	{ "graph", &class_mindustry_world_blocks_power_PowerGraph, offsetof(mindustry_gen_PowerGraphUpdater, F_graph), "Lmindustry/world/blocks/power/PowerGraph;", 129 },
	{ "id", &class_int, offsetof(mindustry_gen_PowerGraphUpdater, F_id), "I", 129 },
	{ "index__powerGraph", &class_int, offsetof(mindustry_gen_PowerGraphUpdater, F_index__powerGraph), "I", 132 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_gen_PowerGraphUpdater, 0, "()V", 4 },
	{ "classId", (intptr_t) M_mindustry_gen_PowerGraphUpdater_classId_R_int, VTABLE_mindustry_gen_PowerGraphUpdater_classId_R_int, "()I", 1 },
	{ "id", (intptr_t) M_mindustry_gen_PowerGraphUpdater_id_R_int, VTABLE_mindustry_gen_PowerGraphUpdater_id_R_int, "()I", 1 },
	{ "toString", (intptr_t) M_mindustry_gen_PowerGraphUpdater_toString_R_java_lang_String, VTABLE_mindustry_gen_PowerGraphUpdater_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "graph", (intptr_t) M_mindustry_gen_PowerGraphUpdater_graph_R_mindustry_world_blocks_power_PowerGraph, VTABLE_mindustry_gen_PowerGraphUpdater_graph_R_mindustry_world_blocks_power_PowerGraph, "()Lmindustry/world/blocks/power/PowerGraph;", 1 },
	{ "graph", (intptr_t) M_mindustry_gen_PowerGraphUpdater_graph_mindustry_world_blocks_power_PowerGraph, VTABLE_mindustry_gen_PowerGraphUpdater_graph_mindustry_world_blocks_power_PowerGraph, "(Lmindustry/world/blocks/power/PowerGraph;)V", 1 },
	{ "id", (intptr_t) M_mindustry_gen_PowerGraphUpdater_id_int, VTABLE_mindustry_gen_PowerGraphUpdater_id_int, "(I)V", 1 },
	{ "setIndex__powerGraph", (intptr_t) M_mindustry_gen_PowerGraphUpdater_setIndex__powerGraph_int, VTABLE_mindustry_gen_PowerGraphUpdater_setIndex__powerGraph_int, "(I)V", 1 },
	{ "self", (intptr_t) M_mindustry_gen_PowerGraphUpdater_self_R_mindustry_gen_Entityc, VTABLE_mindustry_gen_PowerGraphUpdater_self_R_mindustry_gen_Entityc, "()Lmindustry/gen/Entityc;", 1 },
	{ "as", (intptr_t) M_mindustry_gen_PowerGraphUpdater_as_R_java_lang_Object, VTABLE_mindustry_gen_PowerGraphUpdater_as_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "isAdded", (intptr_t) M_mindustry_gen_PowerGraphUpdater_isAdded_R_boolean, VTABLE_mindustry_gen_PowerGraphUpdater_isAdded_R_boolean, "()Z", 1 },
	{ "isLocal", (intptr_t) M_mindustry_gen_PowerGraphUpdater_isLocal_R_boolean, VTABLE_mindustry_gen_PowerGraphUpdater_isLocal_R_boolean, "()Z", 1 },
	{ "isRemote", (intptr_t) M_mindustry_gen_PowerGraphUpdater_isRemote_R_boolean, VTABLE_mindustry_gen_PowerGraphUpdater_isRemote_R_boolean, "()Z", 1 },
	{ "serialize", (intptr_t) M_mindustry_gen_PowerGraphUpdater_serialize_R_boolean, VTABLE_mindustry_gen_PowerGraphUpdater_serialize_R_boolean, "()Z", 1 },
	{ "create", (intptr_t) SM_mindustry_gen_PowerGraphUpdater_create_R_mindustry_gen_PowerGraphUpdater, 0, "()Lmindustry/gen/PowerGraphUpdater;", 9 },
	{ "add", (intptr_t) M_mindustry_gen_PowerGraphUpdater_add, VTABLE_mindustry_gen_PowerGraphUpdater_add, "()V", 1 },
	{ "afterRead", (intptr_t) M_mindustry_gen_PowerGraphUpdater_afterRead, VTABLE_mindustry_gen_PowerGraphUpdater_afterRead, "()V", 1 },
	{ "afterReadAll", (intptr_t) M_mindustry_gen_PowerGraphUpdater_afterReadAll, VTABLE_mindustry_gen_PowerGraphUpdater_afterReadAll, "()V", 1 },
	{ "beforeWrite", (intptr_t) M_mindustry_gen_PowerGraphUpdater_beforeWrite, VTABLE_mindustry_gen_PowerGraphUpdater_beforeWrite, "()V", 1 },
	{ "read", (intptr_t) M_mindustry_gen_PowerGraphUpdater_read_arc_util_io_Reads, VTABLE_mindustry_gen_PowerGraphUpdater_read_arc_util_io_Reads, "(Larc/util/io/Reads;)V", 1 },
	{ "remove", (intptr_t) M_mindustry_gen_PowerGraphUpdater_remove, VTABLE_mindustry_gen_PowerGraphUpdater_remove, "()V", 1 },
	{ "update", (intptr_t) M_mindustry_gen_PowerGraphUpdater_update, VTABLE_mindustry_gen_PowerGraphUpdater_update, "()V", 1 },
	{ "write", (intptr_t) M_mindustry_gen_PowerGraphUpdater_write_arc_util_io_Writes, VTABLE_mindustry_gen_PowerGraphUpdater_write_arc_util_io_Writes, "(Larc/util/io/Writes;)V", 1 },
};

Class class_mindustry_gen_PowerGraphUpdater{
		.nativeName = (intptr_t) "mindustry/gen/PowerGraphUpdater",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_gen_PowerGraphUpdater),
		.classVtable = (intptr_t) vtable_mindustry_gen_PowerGraphUpdater,
		.staticInitializer = (intptr_t) clinit_mindustry_gen_PowerGraphUpdater,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_gen_PowerGraphUpdater,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 3,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 23,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 31,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_gen_PowerGraphUpdater = registerClass(&class_mindustry_gen_PowerGraphUpdater);

}
