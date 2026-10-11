#include "mindustry/world/blocks/power/PowerGraph.h"
#include "arc/math/Mathf.h"
#include "java/lang/Math.h"
#include "mindustry/world/blocks/power/PowerGraph.h"
#include "java/lang/reflect/Field.h"
#include "arc/math/WindowedMean.h"
#include "mindustry/world/Block.h"
#include "java/util/Iterator.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/gen/PowerGraphUpdater.h"
#include "arc/util/Time.h"
#include "java/lang/Float.h"
#include "arc/struct/Queue.h"
#include "arc/util/Nullable.h"
#include "mindustry/gen/Building.h"
#include "java/lang/reflect/Constructor.h"
#include "mindustry/world/consumers/ConsumePower.h"
#include "arc/struct/IntSet.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/struct/Seq.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/world/modules/PowerModule.h"
#include "java/lang/Class.h"

extern "C" {

jobject SF_mindustry_world_blocks_power_PowerGraph_queue;
jobject SF_mindustry_world_blocks_power_PowerGraph_outArray1;
jobject SF_mindustry_world_blocks_power_PowerGraph_outArray2;
jobject SF_mindustry_world_blocks_power_PowerGraph_closedSet;
jint SF_mindustry_world_blocks_power_PowerGraph_lastGraphID;

void mark_mindustry_world_blocks_power_PowerGraph(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_world_blocks_power_PowerGraph_queue)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_blocks_power_PowerGraph_queue)->clazz)->markFunction)((jobject) SF_mindustry_world_blocks_power_PowerGraph_queue, mark, depth + 1);
		if (SF_mindustry_world_blocks_power_PowerGraph_outArray1)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_blocks_power_PowerGraph_outArray1)->clazz)->markFunction)((jobject) SF_mindustry_world_blocks_power_PowerGraph_outArray1, mark, depth + 1);
		if (SF_mindustry_world_blocks_power_PowerGraph_outArray2)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_blocks_power_PowerGraph_outArray2)->clazz)->markFunction)((jobject) SF_mindustry_world_blocks_power_PowerGraph_outArray2, mark, depth + 1);
		if (SF_mindustry_world_blocks_power_PowerGraph_closedSet)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_blocks_power_PowerGraph_closedSet)->clazz)->markFunction)((jobject) SF_mindustry_world_blocks_power_PowerGraph_closedSet, mark, depth + 1);
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
	auto self = (mindustry_world_blocks_power_PowerGraph *) object;
	if (self->F_producers)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_producers)->clazz)->markFunction)((jobject) self->F_producers, mark, depth + 1);
	if (self->F_consumers)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_consumers)->clazz)->markFunction)((jobject) self->F_consumers, mark, depth + 1);
	if (self->F_batteries)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_batteries)->clazz)->markFunction)((jobject) self->F_batteries, mark, depth + 1);
	if (self->F_all)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_all)->clazz)->markFunction)((jobject) self->F_all, mark, depth + 1);
	if (self->F_entity)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_entity)->clazz)->markFunction)((jobject) self->F_entity, mark, depth + 1);
	if (self->F_powerBalance)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_powerBalance)->clazz)->markFunction)((jobject) self->F_powerBalance, mark, depth + 1);
}

void init_mindustry_world_blocks_power_PowerGraph(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/PowerGraph:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_power_PowerGraph(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(30);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(15);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq_boolean_int_java_lang_Class(ctx, sp[1].o, (jint(0)), (16), (((jobject) &class_mindustry_gen_Building)));
	((mindustry_world_blocks_power_PowerGraph *) NULL_CHECK(sp[0].o))->F_producers = (jref) sp[1].o;
	LINE_NUMBER(16);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq_boolean_int_java_lang_Class(ctx, sp[1].o, (jint(0)), (16), (((jobject) &class_mindustry_gen_Building)));
	((mindustry_world_blocks_power_PowerGraph *) NULL_CHECK(sp[0].o))->F_consumers = (jref) sp[1].o;
	LINE_NUMBER(17);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq_boolean_int_java_lang_Class(ctx, sp[1].o, (jint(0)), (16), (((jobject) &class_mindustry_gen_Building)));
	((mindustry_world_blocks_power_PowerGraph *) NULL_CHECK(sp[0].o))->F_batteries = (jref) sp[1].o;
	LINE_NUMBER(18);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq_boolean_int_java_lang_Class(ctx, sp[1].o, (jint(0)), (16), (((jobject) &class_mindustry_gen_Building)));
	((mindustry_world_blocks_power_PowerGraph *) NULL_CHECK(sp[0].o))->F_all = (jref) sp[1].o;
	LINE_NUMBER(21);
	sp[0].o = frame[0].o;
	clinit_arc_math_WindowedMean(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_WindowedMean);
	init_arc_math_WindowedMean_int(ctx, sp[1].o, (60));
	((mindustry_world_blocks_power_PowerGraph *) NULL_CHECK(sp[0].o))->F_powerBalance = (jref) sp[1].o;
	LINE_NUMBER(25);
	((mindustry_world_blocks_power_PowerGraph *) NULL_CHECK((frame[0].o)))->F_energyDelta = (jfloat(0));
	LINE_NUMBER(31);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_gen_PowerGraphUpdater_create_R_mindustry_gen_PowerGraphUpdater(ctx);
	((mindustry_world_blocks_power_PowerGraph *) NULL_CHECK(sp[0].o))->F_entity = (jref) sp[1].o;
	LINE_NUMBER(32);
	sp[0].o = (jobject)((mindustry_world_blocks_power_PowerGraph *) NULL_CHECK((frame[0].o)))->F_entity;
	((mindustry_gen_PowerGraphUpdater *) NULL_CHECK(sp[0].o))->F_graph = (jref) (frame[0].o);
	LINE_NUMBER(33);
	sp[0].o = frame[0].o;
	clinit_mindustry_world_blocks_power_PowerGraph(ctx);
	jint temp0 = (jint)SF_mindustry_world_blocks_power_PowerGraph_lastGraphID;
	clinit_mindustry_world_blocks_power_PowerGraph(ctx);
	SF_mindustry_world_blocks_power_PowerGraph_lastGraphID = (temp0 + (jint(1)));
	((mindustry_world_blocks_power_PowerGraph *) NULL_CHECK(sp[0].o))->F_graphID = temp0;
	LINE_NUMBER(34);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_world_blocks_power_PowerGraph_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/PowerGraph:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_power_PowerGraph(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(36);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(15);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq_boolean_int_java_lang_Class(ctx, sp[1].o, (jint(0)), (16), (((jobject) &class_mindustry_gen_Building)));
	((mindustry_world_blocks_power_PowerGraph *) NULL_CHECK(sp[0].o))->F_producers = (jref) sp[1].o;
	LINE_NUMBER(16);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq_boolean_int_java_lang_Class(ctx, sp[1].o, (jint(0)), (16), (((jobject) &class_mindustry_gen_Building)));
	((mindustry_world_blocks_power_PowerGraph *) NULL_CHECK(sp[0].o))->F_consumers = (jref) sp[1].o;
	LINE_NUMBER(17);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq_boolean_int_java_lang_Class(ctx, sp[1].o, (jint(0)), (16), (((jobject) &class_mindustry_gen_Building)));
	((mindustry_world_blocks_power_PowerGraph *) NULL_CHECK(sp[0].o))->F_batteries = (jref) sp[1].o;
	LINE_NUMBER(18);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq_boolean_int_java_lang_Class(ctx, sp[1].o, (jint(0)), (16), (((jobject) &class_mindustry_gen_Building)));
	((mindustry_world_blocks_power_PowerGraph *) NULL_CHECK(sp[0].o))->F_all = (jref) sp[1].o;
	LINE_NUMBER(21);
	sp[0].o = frame[0].o;
	clinit_arc_math_WindowedMean(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_WindowedMean);
	init_arc_math_WindowedMean_int(ctx, sp[1].o, (60));
	((mindustry_world_blocks_power_PowerGraph *) NULL_CHECK(sp[0].o))->F_powerBalance = (jref) sp[1].o;
	LINE_NUMBER(25);
	((mindustry_world_blocks_power_PowerGraph *) NULL_CHECK((frame[0].o)))->F_energyDelta = (jfloat(0));
	LINE_NUMBER(37);
	((mindustry_world_blocks_power_PowerGraph *) NULL_CHECK((frame[0].o)))->F_entity = (jref) (jobject(nullptr));
	LINE_NUMBER(38);
	sp[0].o = frame[0].o;
	clinit_mindustry_world_blocks_power_PowerGraph(ctx);
	jint temp0 = (jint)SF_mindustry_world_blocks_power_PowerGraph_lastGraphID;
	clinit_mindustry_world_blocks_power_PowerGraph(ctx);
	SF_mindustry_world_blocks_power_PowerGraph_lastGraphID = (temp0 + (jint(1)));
	((mindustry_world_blocks_power_PowerGraph *) NULL_CHECK(sp[0].o))->F_graphID = temp0;
	LINE_NUMBER(39);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_mindustry_world_blocks_power_PowerGraph_getID_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/PowerGraph:getID", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(42);
	popStackFrame(ctx);
	return ((jint)((mindustry_world_blocks_power_PowerGraph *) NULL_CHECK((frame[0].o)))->F_graphID);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_world_blocks_power_PowerGraph_getLastScaledPowerIn_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/PowerGraph:getLastScaledPowerIn", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(46);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_world_blocks_power_PowerGraph *) NULL_CHECK((frame[0].o)))->F_lastScaledPowerIn);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_world_blocks_power_PowerGraph_getLastScaledPowerOut_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/PowerGraph:getLastScaledPowerOut", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(50);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_world_blocks_power_PowerGraph *) NULL_CHECK((frame[0].o)))->F_lastScaledPowerOut);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_world_blocks_power_PowerGraph_getLastCapacity_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/PowerGraph:getLastCapacity", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(54);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_world_blocks_power_PowerGraph *) NULL_CHECK((frame[0].o)))->F_lastCapacity);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_world_blocks_power_PowerGraph_getPowerBalance_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/PowerGraph:getPowerBalance", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(58);
	sp[0].o = (jobject)((mindustry_world_blocks_power_PowerGraph *) NULL_CHECK((frame[0].o)))->F_powerBalance;
	jfloat temp0 = (jfloat)((func_arc_math_WindowedMean_rawMean_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_WindowedMean_rawMean_R_float])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_power_PowerGraph_hasPowerBalanceSamples_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/PowerGraph:hasPowerBalanceSamples", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(62);
	sp[0].o = (jobject)((mindustry_world_blocks_power_PowerGraph *) NULL_CHECK((frame[0].o)))->F_powerBalance;
	jint temp0 = (jint)((func_arc_math_WindowedMean_hasEnoughData_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_WindowedMean_hasEnoughData_R_boolean])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_world_blocks_power_PowerGraph_getLastPowerNeeded_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/PowerGraph:getLastPowerNeeded", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(66);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_world_blocks_power_PowerGraph *) NULL_CHECK((frame[0].o)))->F_lastPowerNeeded);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_world_blocks_power_PowerGraph_getLastPowerProduced_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/PowerGraph:getLastPowerProduced", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(70);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_world_blocks_power_PowerGraph *) NULL_CHECK((frame[0].o)))->F_lastPowerProduced);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_world_blocks_power_PowerGraph_getLastPowerStored_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/PowerGraph:getLastPowerStored", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(74);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_world_blocks_power_PowerGraph *) NULL_CHECK((frame[0].o)))->F_lastPowerStored);
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_power_PowerGraph_transferPower_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/PowerGraph:transferPower", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(78);
	if ((floatCompare((frame[1].f), (jfloat(0)), -1)) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(79);
	jfloat temp0 = (jfloat)((func_mindustry_world_blocks_power_PowerGraph_chargeBatteries_float_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_power_PowerGraph_chargeBatteries_float_R_float])(ctx, (frame[0].o), (frame[1].f));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(81);
	jfloat temp0 = (jfloat)((func_mindustry_world_blocks_power_PowerGraph_useBatteries_float_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_power_PowerGraph_useBatteries_float_R_float])(ctx, (frame[0].o), (-(frame[1].f)));
	}
label_3:;
	{
	LINE_NUMBER(83);
	sp[0].o = frame[0].o;
	((mindustry_world_blocks_power_PowerGraph *) NULL_CHECK(sp[0].o))->F_energyDelta = (((jfloat)((mindustry_world_blocks_power_PowerGraph *) NULL_CHECK(sp[0].o))->F_energyDelta) + (frame[1].f));
	LINE_NUMBER(84);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_world_blocks_power_PowerGraph_getSatisfaction_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/PowerGraph:getSatisfaction", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(87);
	jint temp0 = (jint)SM_arc_math_Mathf_zero_float_R_boolean(ctx, ((jfloat)((mindustry_world_blocks_power_PowerGraph *) NULL_CHECK((frame[0].o)))->F_lastPowerProduced));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(88);
	popStackFrame(ctx);
	return (jfloat(0));
	}
label_1:;
	{
	LINE_NUMBER(89);
	jint temp0 = (jint)SM_arc_math_Mathf_zero_float_R_boolean(ctx, ((jfloat)((mindustry_world_blocks_power_PowerGraph *) NULL_CHECK((frame[0].o)))->F_lastPowerNeeded));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(90);
	popStackFrame(ctx);
	return (jfloat(1));
	}
label_3:;
	{
	LINE_NUMBER(92);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, (((jfloat)((mindustry_world_blocks_power_PowerGraph *) NULL_CHECK((frame[0].o)))->F_lastPowerProduced) / ((jfloat)((mindustry_world_blocks_power_PowerGraph *) NULL_CHECK((frame[0].o)))->F_lastPowerNeeded)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_world_blocks_power_PowerGraph_getPowerProduced_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/PowerGraph:getPowerProduced", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(96);
	frame[1].f = (jfloat(0));
	LINE_NUMBER(97);
	sp[0].o = (jobject)((mindustry_world_blocks_power_PowerGraph *) NULL_CHECK((frame[0].o)))->F_producers;
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_items;
	frame[2].o = (checkCast(ctx, getArrayClass(&class_mindustry_gen_Building, 1), sp[0].o));
	LINE_NUMBER(98);
	frame[3].i = (jint(0));
	}
label_3:;
	{
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((mindustry_world_blocks_power_PowerGraph *) NULL_CHECK((frame[0].o)))->F_producers;
	if (temp0 >= ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_4;
	}
	{
	LINE_NUMBER(99);
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[3].i)));
	LINE_NUMBER(100);
	jfloat temp0 = frame[1].f;
	jfloat temp1 = (jfloat)((func_mindustry_gen_Building_getPowerProduction_R_float) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_gen_Building_getPowerProduction_R_float])(ctx, (frame[4].o));
	jfloat temp2 = (jfloat)((func_mindustry_gen_Building_delta_R_float) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_gen_Building_delta_R_float])(ctx, (frame[4].o));
	frame[1].f = (temp0 + (temp1 * temp2));
	LINE_NUMBER(98);
	INST_IINC(3, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(102);
	popStackFrame(ctx);
	return (frame[1].f);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_world_blocks_power_PowerGraph_getPowerNeeded_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/PowerGraph:getPowerNeeded", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(106);
	frame[1].f = (jfloat(0));
	LINE_NUMBER(107);
	sp[0].o = (jobject)((mindustry_world_blocks_power_PowerGraph *) NULL_CHECK((frame[0].o)))->F_consumers;
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_items;
	frame[2].o = (checkCast(ctx, getArrayClass(&class_mindustry_gen_Building, 1), sp[0].o));
	LINE_NUMBER(108);
	frame[3].i = (jint(0));
	}
label_3:;
	{
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((mindustry_world_blocks_power_PowerGraph *) NULL_CHECK((frame[0].o)))->F_consumers;
	if (temp0 >= ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_4;
	}
	{
	LINE_NUMBER(109);
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[3].i)));
	LINE_NUMBER(110);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[4].o)))->F_block;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_consPower;
	frame[5].o = sp[0].o;
	LINE_NUMBER(111);
	if (((jint)((mindustry_gen_Building *) NULL_CHECK((frame[4].o)))->F_shouldConsumePower) == 0) goto label_8;
	}
	{
	LINE_NUMBER(112);
	jfloat temp0 = frame[1].f;
	jfloat temp1 = (jfloat)((func_mindustry_world_consumers_ConsumePower_requestedPower_mindustry_gen_Building_R_float) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_world_consumers_ConsumePower_requestedPower_mindustry_gen_Building_R_float])(ctx, (frame[5].o), (frame[4].o));
	jfloat temp2 = (jfloat)((func_mindustry_gen_Building_delta_R_float) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_gen_Building_delta_R_float])(ctx, (frame[4].o));
	frame[1].f = (temp0 + (temp1 * temp2));
	}
label_8:;
	{
	LINE_NUMBER(108);
	INST_IINC(3, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(115);
	popStackFrame(ctx);
	return (frame[1].f);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_world_blocks_power_PowerGraph_getBatteryStored_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/PowerGraph:getBatteryStored", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(119);
	frame[1].f = (jfloat(0));
	LINE_NUMBER(120);
	sp[0].o = (jobject)((mindustry_world_blocks_power_PowerGraph *) NULL_CHECK((frame[0].o)))->F_batteries;
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_items;
	frame[2].o = (checkCast(ctx, getArrayClass(&class_mindustry_gen_Building, 1), sp[0].o));
	LINE_NUMBER(121);
	frame[3].i = (jint(0));
	}
label_3:;
	{
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((mindustry_world_blocks_power_PowerGraph *) NULL_CHECK((frame[0].o)))->F_batteries;
	if (temp0 >= ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_4;
	}
	{
	LINE_NUMBER(122);
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[3].i)));
	LINE_NUMBER(123);
	if (((jint)((mindustry_gen_Building *) NULL_CHECK((frame[4].o)))->F_enabled) == 0) goto label_7;
	}
	{
	LINE_NUMBER(124);
	jfloat temp0 = frame[1].f;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[4].o)))->F_power;
	jfloat temp1 = (jfloat)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[0].o))->F_status;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[4].o)))->F_block;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_consPower;
	frame[1].f = (temp0 + (temp1 * ((jfloat)((mindustry_world_consumers_ConsumePower *) NULL_CHECK(sp[0].o))->F_capacity)));
	}
label_7:;
	{
	LINE_NUMBER(121);
	INST_IINC(3, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(127);
	popStackFrame(ctx);
	return (frame[1].f);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_world_blocks_power_PowerGraph_getBatteryCapacity_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/PowerGraph:getBatteryCapacity", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(131);
	frame[1].f = (jfloat(0));
	LINE_NUMBER(132);
	sp[0].o = (jobject)((mindustry_world_blocks_power_PowerGraph *) NULL_CHECK((frame[0].o)))->F_batteries;
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_items;
	frame[2].o = (checkCast(ctx, getArrayClass(&class_mindustry_gen_Building, 1), sp[0].o));
	LINE_NUMBER(133);
	frame[3].i = (jint(0));
	}
label_3:;
	{
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((mindustry_world_blocks_power_PowerGraph *) NULL_CHECK((frame[0].o)))->F_batteries;
	if (temp0 >= ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_4;
	}
	{
	LINE_NUMBER(134);
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[3].i)));
	LINE_NUMBER(135);
	if (((jint)((mindustry_gen_Building *) NULL_CHECK((frame[4].o)))->F_enabled) == 0) goto label_7;
	}
	{
	LINE_NUMBER(136);
	jfloat temp0 = frame[1].f;
	jfloat temp1 = jfloat(1);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[4].o)))->F_power;
	jfloat temp2 = temp1 - ((jfloat)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[0].o))->F_status);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[4].o)))->F_block;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_consPower;
	frame[1].f = (temp0 + (temp2 * ((jfloat)((mindustry_world_consumers_ConsumePower *) NULL_CHECK(sp[0].o))->F_capacity)));
	}
label_7:;
	{
	LINE_NUMBER(133);
	INST_IINC(3, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(139);
	popStackFrame(ctx);
	return (frame[1].f);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_world_blocks_power_PowerGraph_getTotalBatteryCapacity_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/PowerGraph:getTotalBatteryCapacity", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(143);
	frame[1].f = (jfloat(0));
	LINE_NUMBER(144);
	sp[0].o = (jobject)((mindustry_world_blocks_power_PowerGraph *) NULL_CHECK((frame[0].o)))->F_batteries;
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_items;
	frame[2].o = (checkCast(ctx, getArrayClass(&class_mindustry_gen_Building, 1), sp[0].o));
	LINE_NUMBER(145);
	frame[3].i = (jint(0));
	}
label_3:;
	{
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((mindustry_world_blocks_power_PowerGraph *) NULL_CHECK((frame[0].o)))->F_batteries;
	if (temp0 >= ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_4;
	}
	{
	LINE_NUMBER(146);
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[3].i)));
	LINE_NUMBER(147);
	if (((jint)((mindustry_gen_Building *) NULL_CHECK((frame[4].o)))->F_enabled) == 0) goto label_7;
	}
	{
	LINE_NUMBER(148);
	jfloat temp0 = frame[1].f;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[4].o)))->F_block;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_consPower;
	frame[1].f = (temp0 + ((jfloat)((mindustry_world_consumers_ConsumePower *) NULL_CHECK(sp[0].o))->F_capacity));
	}
label_7:;
	{
	LINE_NUMBER(145);
	INST_IINC(3, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(151);
	popStackFrame(ctx);
	return (frame[1].f);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_world_blocks_power_PowerGraph_useBatteries_float_R_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/PowerGraph:useBatteries", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(155);
	jfloat temp0 = (jfloat)((func_mindustry_world_blocks_power_PowerGraph_getBatteryStored_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_power_PowerGraph_getBatteryStored_R_float])(ctx, (frame[0].o));
	frame[2].f = temp0;
	LINE_NUMBER(156);
	jint temp1 = (jint)SM_arc_math_Mathf_equal_float_float_R_boolean(ctx, (frame[2].f), (jfloat(0)));
	if (temp1 == 0) goto label_2;
	}
	INST_FCONST(0);
	popStackFrame(ctx);
	INST_FRETURN();
label_2:;
	{
	LINE_NUMBER(158);
	jfloat temp0 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, (frame[2].f), (frame[1].f));
	frame[3].f = temp0;
	LINE_NUMBER(159);
	jfloat temp1 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, (jfloat(1)), ((frame[1].f) / (frame[2].f)));
	frame[4].f = temp1;
	LINE_NUMBER(160);
	sp[0].o = (jobject)((mindustry_world_blocks_power_PowerGraph *) NULL_CHECK((frame[0].o)))->F_batteries;
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_items;
	frame[5].o = (checkCast(ctx, getArrayClass(&class_mindustry_gen_Building, 1), sp[0].o));
	LINE_NUMBER(161);
	frame[6].i = (jint(0));
	}
label_6:;
	{
	jint temp0 = frame[6].i;
	sp[0].o = (jobject)((mindustry_world_blocks_power_PowerGraph *) NULL_CHECK((frame[0].o)))->F_batteries;
	if (temp0 >= ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_7;
	}
	{
	LINE_NUMBER(162);
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[6].i)));
	LINE_NUMBER(163);
	if (((jint)((mindustry_gen_Building *) NULL_CHECK((frame[7].o)))->F_enabled) == 0) goto label_10;
	}
	{
	LINE_NUMBER(164);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[7].o)))->F_power;
	((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[0].o))->F_status = (((jfloat)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[0].o))->F_status) * ((jfloat(1)) - (frame[4].f)));
	}
label_10:;
	{
	LINE_NUMBER(161);
	INST_IINC(6, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(167);
	popStackFrame(ctx);
	return (frame[3].f);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_world_blocks_power_PowerGraph_chargeBatteries_float_R_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/PowerGraph:chargeBatteries", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(171);
	jfloat temp0 = (jfloat)((func_mindustry_world_blocks_power_PowerGraph_getBatteryCapacity_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_power_PowerGraph_getBatteryCapacity_R_float])(ctx, (frame[0].o));
	frame[2].f = temp0;
	LINE_NUMBER(173);
	jfloat temp1 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, ((frame[1].f) / (frame[2].f)), (jfloat(1)));
	frame[3].f = temp1;
	LINE_NUMBER(174);
	jint temp2 = (jint)SM_arc_math_Mathf_equal_float_float_R_boolean(ctx, (frame[2].f), (jfloat(0)));
	if (temp2 == 0) goto label_3;
	}
	INST_FCONST(0);
	popStackFrame(ctx);
	INST_FRETURN();
label_3:;
	{
	LINE_NUMBER(176);
	sp[0].o = (jobject)((mindustry_world_blocks_power_PowerGraph *) NULL_CHECK((frame[0].o)))->F_batteries;
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_items;
	frame[4].o = (checkCast(ctx, getArrayClass(&class_mindustry_gen_Building, 1), sp[0].o));
	LINE_NUMBER(177);
	frame[5].i = (jint(0));
	}
label_5:;
	{
	jint temp0 = frame[5].i;
	sp[0].o = (jobject)((mindustry_world_blocks_power_PowerGraph *) NULL_CHECK((frame[0].o)))->F_batteries;
	if (temp0 >= ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_6;
	}
	{
	LINE_NUMBER(178);
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[5].i)));
	LINE_NUMBER(180);
	if (((jint)((mindustry_gen_Building *) NULL_CHECK((frame[6].o)))->F_enabled) == 0) goto label_9;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[6].o)))->F_block;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_consPower;
	if ((floatCompare(((jfloat)((mindustry_world_consumers_ConsumePower *) NULL_CHECK(sp[0].o))->F_capacity), (jfloat(0)), -1)) <= 0) goto label_9;
	}
	{
	LINE_NUMBER(181);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[6].o)))->F_power;
	jfloat temp0 = (jfloat)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[0].o))->F_status;
	jfloat temp1 = jfloat(1);
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[6].o)))->F_power;
	((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[0].o))->F_status = (temp0 + ((temp1 - ((jfloat)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[1].o))->F_status)) * (frame[3].f)));
	}
label_9:;
	{
	LINE_NUMBER(177);
	INST_IINC(5, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(184);
	jfloat temp0 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, (frame[1].f), (frame[2].f));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_power_PowerGraph_distributePower_float_float_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/PowerGraph:distributePower", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(189);
	jint temp0 = (jint)SM_arc_math_Mathf_zero_float_R_boolean(ctx, (frame[1].f));
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)SM_arc_math_Mathf_zero_float_R_boolean(ctx, (frame[2].f));
	if (temp0 == 0) goto label_1;
	}
	INST_ILOAD(3);
	if ((--sp)->i != 0) goto label_1;
	{
	jint temp0 = (jint)SM_arc_math_Mathf_zero_float_R_boolean(ctx, ((jfloat)((mindustry_world_blocks_power_PowerGraph *) NULL_CHECK((frame[0].o)))->F_lastPowerStored));
	if (temp0 == 0) goto label_1;
	}
	INST_FCONST(0);
	goto label_2;
label_1:;
	{
	jint temp0 = (jint)SM_arc_math_Mathf_zero_float_R_boolean(ctx, (frame[1].f));
	if (temp0 == 0) goto label_3;
	}
	INST_FCONST(1);
	goto label_2;
label_3:;
	{
	jfloat temp0 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, (jfloat(1)), ((frame[2].f) / (frame[1].f)));
	sp[0].f = temp0;
	sp += 1;
	}
label_2:;
	{
	sp -= 1;
	frame[4].f = sp[0].f;
	LINE_NUMBER(190);
	sp[0].o = (jobject)((mindustry_world_blocks_power_PowerGraph *) NULL_CHECK((frame[0].o)))->F_consumers;
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_items;
	frame[5].o = (checkCast(ctx, getArrayClass(&class_mindustry_gen_Building, 1), sp[0].o));
	LINE_NUMBER(191);
	frame[6].i = (jint(0));
	}
label_6:;
	{
	jint temp0 = frame[6].i;
	sp[0].o = (jobject)((mindustry_world_blocks_power_PowerGraph *) NULL_CHECK((frame[0].o)))->F_consumers;
	if (temp0 >= ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_7;
	}
	{
	LINE_NUMBER(192);
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[6].i)));
	LINE_NUMBER(194);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[7].o)))->F_block;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_consPower;
	frame[8].o = sp[0].o;
	LINE_NUMBER(195);
	if (((jint)((mindustry_world_consumers_ConsumePower *) NULL_CHECK((frame[8].o)))->F_buffered) == 0) goto label_11;
	}
	{
	LINE_NUMBER(196);
	jint temp0 = (jint)SM_arc_math_Mathf_zero_float_R_boolean(ctx, ((jfloat)((mindustry_world_consumers_ConsumePower *) NULL_CHECK((frame[8].o)))->F_capacity));
	if (temp0 != 0) goto label_13;
	}
	{
	LINE_NUMBER(198);
	jfloat temp0 = (jfloat)((func_mindustry_world_consumers_ConsumePower_requestedPower_mindustry_gen_Building_R_float) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_mindustry_world_consumers_ConsumePower_requestedPower_mindustry_gen_Building_R_float])(ctx, (frame[8].o), (frame[7].o));
	jfloat temp1 = temp0 * (frame[4].f);
	jfloat temp2 = (jfloat)((func_mindustry_gen_Building_delta_R_float) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_gen_Building_delta_R_float])(ctx, (frame[7].o));
	frame[9].f = (temp1 * temp2);
	LINE_NUMBER(199);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[7].o)))->F_power;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[7].o)))->F_power;
	jfloat temp3 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, (((jfloat)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[1].o))->F_status) + ((frame[9].f) / ((jfloat)((mindustry_world_consumers_ConsumePower *) NULL_CHECK((frame[8].o)))->F_capacity))));
	((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[0].o))->F_status = temp3;
	LINE_NUMBER(200);
	goto label_13;
	}
label_11:;
	{
	LINE_NUMBER(203);
	if (((jint)((mindustry_gen_Building *) NULL_CHECK((frame[7].o)))->F_shouldConsumePower) == 0) goto label_17;
	}
	{
	LINE_NUMBER(204);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[7].o)))->F_power;
	((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[0].o))->F_status = (frame[4].f);
	goto label_13;
	}
label_17:;
	{
	LINE_NUMBER(206);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[7].o)))->F_power;
	jfloat temp0 = jfloat(1);
	jfloat temp1 = frame[2].f;
	jfloat temp2 = frame[1].f;
	jfloat temp3 = (jfloat)((mindustry_world_consumers_ConsumePower *) NULL_CHECK((frame[8].o)))->F_usage;
	jfloat temp4 = (jfloat)((func_mindustry_gen_Building_delta_R_float) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_gen_Building_delta_R_float])(ctx, (frame[7].o));
	jfloat temp5 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, temp0, (temp1 / (temp2 + (temp3 * temp4))));
	((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[0].o))->F_status = temp5;
	LINE_NUMBER(208);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[7].o)))->F_power;
	jint temp6 = (jint)SM_java_lang_Float_isNaN_float_R_boolean(ctx, ((jfloat)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[0].o))->F_status));
	if (temp6 == 0) goto label_13;
	}
	{
	LINE_NUMBER(209);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[7].o)))->F_power;
	((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[0].o))->F_status = (jfloat(0));
	}
label_13:;
	{
	LINE_NUMBER(191);
	INST_IINC(6, 1);
	goto label_6;
	}
label_7:;
	LINE_NUMBER(214);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_power_PowerGraph_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/PowerGraph:update", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(217);
	sp[0].o = (jobject)((mindustry_world_blocks_power_PowerGraph *) NULL_CHECK((frame[0].o)))->F_consumers;
	jint temp0 = (jint)((func_arc_struct_Seq_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_power_PowerGraph *) NULL_CHECK((frame[0].o)))->F_consumers;
	sp[0].o = (jobject)((func_arc_struct_Seq_first_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_first_R_java_lang_Object])(ctx, sp[0].o);
	jint temp0 = (jint)((func_mindustry_gen_Building_cheating_R_boolean) ((void **) nullCheck(ctx, (checkCast(ctx, &class_mindustry_gen_Building, sp[0].o)))->vtable)[VTABLE_mindustry_gen_Building_cheating_R_boolean])(ctx, (checkCast(ctx, &class_mindustry_gen_Building, sp[0].o)));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(219);
	sp[0].o = (jobject)((mindustry_world_blocks_power_PowerGraph *) NULL_CHECK((frame[0].o)))->F_consumers;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_3:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_mindustry_gen_Building, sp[0].o));
	LINE_NUMBER(220);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[2].o)))->F_power;
	((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[0].o))->F_status = (jfloat(1));
	LINE_NUMBER(221);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(223);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jfloat temp0 = jfloat(1);
	((mindustry_world_blocks_power_PowerGraph *) NULL_CHECK(sp[1].o))->F_lastPowerProduced = temp0;
	((mindustry_world_blocks_power_PowerGraph *) NULL_CHECK(sp[0].o))->F_lastPowerNeeded = temp0;
	LINE_NUMBER(224);
	popStackFrame(ctx);
	return;
	}
label_1:;
	{
	LINE_NUMBER(227);
	jfloat temp0 = (jfloat)((func_mindustry_world_blocks_power_PowerGraph_getPowerNeeded_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_power_PowerGraph_getPowerNeeded_R_float])(ctx, (frame[0].o));
	frame[1].f = temp0;
	LINE_NUMBER(228);
	jfloat temp1 = (jfloat)((func_mindustry_world_blocks_power_PowerGraph_getPowerProduced_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_power_PowerGraph_getPowerProduced_R_float])(ctx, (frame[0].o));
	frame[2].f = temp1;
	LINE_NUMBER(230);
	((mindustry_world_blocks_power_PowerGraph *) NULL_CHECK((frame[0].o)))->F_lastPowerNeeded = (frame[1].f);
	LINE_NUMBER(231);
	((mindustry_world_blocks_power_PowerGraph *) NULL_CHECK((frame[0].o)))->F_lastPowerProduced = (frame[2].f);
	LINE_NUMBER(233);
	((mindustry_world_blocks_power_PowerGraph *) NULL_CHECK((frame[0].o)))->F_lastScaledPowerIn = (((frame[2].f) + ((jfloat)((mindustry_world_blocks_power_PowerGraph *) NULL_CHECK((frame[0].o)))->F_energyDelta)) / (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta));
	LINE_NUMBER(234);
	((mindustry_world_blocks_power_PowerGraph *) NULL_CHECK((frame[0].o)))->F_lastScaledPowerOut = ((frame[1].f) / (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta));
	LINE_NUMBER(235);
	sp[0].o = frame[0].o;
	jfloat temp2 = (jfloat)((func_mindustry_world_blocks_power_PowerGraph_getTotalBatteryCapacity_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_power_PowerGraph_getTotalBatteryCapacity_R_float])(ctx, (frame[0].o));
	((mindustry_world_blocks_power_PowerGraph *) NULL_CHECK(sp[0].o))->F_lastCapacity = temp2;
	LINE_NUMBER(236);
	sp[0].o = frame[0].o;
	jfloat temp3 = (jfloat)((func_mindustry_world_blocks_power_PowerGraph_getBatteryStored_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_power_PowerGraph_getBatteryStored_R_float])(ctx, (frame[0].o));
	((mindustry_world_blocks_power_PowerGraph *) NULL_CHECK(sp[0].o))->F_lastPowerStored = temp3;
	LINE_NUMBER(238);
	sp[0].o = (jobject)((mindustry_world_blocks_power_PowerGraph *) NULL_CHECK((frame[0].o)))->F_powerBalance;
	((func_arc_math_WindowedMean_add_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_WindowedMean_add_float])(ctx, sp[0].o, (((((jfloat)((mindustry_world_blocks_power_PowerGraph *) NULL_CHECK((frame[0].o)))->F_lastPowerProduced) - ((jfloat)((mindustry_world_blocks_power_PowerGraph *) NULL_CHECK((frame[0].o)))->F_lastPowerNeeded)) + ((jfloat)((mindustry_world_blocks_power_PowerGraph *) NULL_CHECK((frame[0].o)))->F_energyDelta)) / (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta)));
	LINE_NUMBER(239);
	((mindustry_world_blocks_power_PowerGraph *) NULL_CHECK((frame[0].o)))->F_energyDelta = (jfloat(0));
	LINE_NUMBER(241);
	sp[0].o = (jobject)((mindustry_world_blocks_power_PowerGraph *) NULL_CHECK((frame[0].o)))->F_consumers;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) != 0) goto label_18;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_power_PowerGraph *) NULL_CHECK((frame[0].o)))->F_producers;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) != 0) goto label_18;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_power_PowerGraph *) NULL_CHECK((frame[0].o)))->F_batteries;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) == 0) goto label_19;
	}
label_18:;
	{
	LINE_NUMBER(242);
	frame[3].i = (jint(0));
	LINE_NUMBER(244);
	jint temp0 = (jint)SM_arc_math_Mathf_equal_float_float_R_boolean(ctx, (frame[1].f), (frame[2].f));
	if (temp0 != 0) goto label_21;
	}
	{
	LINE_NUMBER(245);
	if ((floatCompare((frame[1].f), (frame[2].f), -1)) <= 0) goto label_23;
	}
	{
	LINE_NUMBER(246);
	jfloat temp0 = (jfloat)((func_mindustry_world_blocks_power_PowerGraph_useBatteries_float_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_power_PowerGraph_useBatteries_float_R_float])(ctx, (frame[0].o), ((frame[1].f) - (frame[2].f)));
	frame[4].f = temp0;
	LINE_NUMBER(247);
	frame[2].f = ((frame[2].f) + (frame[4].f));
	LINE_NUMBER(248);
	sp[0].o = frame[0].o;
	((mindustry_world_blocks_power_PowerGraph *) NULL_CHECK(sp[0].o))->F_lastPowerProduced = (((jfloat)((mindustry_world_blocks_power_PowerGraph *) NULL_CHECK(sp[0].o))->F_lastPowerProduced) + (frame[4].f));
	LINE_NUMBER(249);
	goto label_21;
	}
label_23:;
	{
	if ((floatCompare((frame[2].f), (frame[1].f), -1)) <= 0) goto label_21;
	}
	{
	LINE_NUMBER(250);
	frame[3].i = (jint(1));
	LINE_NUMBER(251);
	jfloat temp0 = frame[2].f;
	jfloat temp1 = (jfloat)((func_mindustry_world_blocks_power_PowerGraph_chargeBatteries_float_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_power_PowerGraph_chargeBatteries_float_R_float])(ctx, (frame[0].o), ((frame[2].f) - (frame[1].f)));
	frame[2].f = (temp0 - temp1);
	}
label_21:;
	{
	LINE_NUMBER(255);
	((func_mindustry_world_blocks_power_PowerGraph_distributePower_float_float_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_power_PowerGraph_distributePower_float_float_boolean])(ctx, (frame[0].o), (frame[1].f), (frame[2].f), (frame[3].i));
	}
label_19:;
	LINE_NUMBER(257);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_power_PowerGraph_addGraph_mindustry_world_blocks_power_PowerGraph(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/PowerGraph:addGraph", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(260);
	if ((frame[1].o) != (frame[0].o)) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(263);
	sp[0].o = (jobject)((mindustry_world_blocks_power_PowerGraph *) NULL_CHECK((frame[1].o)))->F_all;
	jint temp0 = (jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size;
	sp[0].o = (jobject)((mindustry_world_blocks_power_PowerGraph *) NULL_CHECK((frame[0].o)))->F_all;
	if (temp0 <= ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_2;
	}
	{
	LINE_NUMBER(264);
	((func_mindustry_world_blocks_power_PowerGraph_addGraph_mindustry_world_blocks_power_PowerGraph) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_blocks_power_PowerGraph_addGraph_mindustry_world_blocks_power_PowerGraph])(ctx, (frame[1].o), (frame[0].o));
	LINE_NUMBER(265);
	popStackFrame(ctx);
	return;
	}
label_2:;
	{
	LINE_NUMBER(269);
	sp[0].o = (jobject)((mindustry_world_blocks_power_PowerGraph *) NULL_CHECK((frame[1].o)))->F_entity;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_power_PowerGraph *) NULL_CHECK((frame[1].o)))->F_entity;
	((func_mindustry_gen_PowerGraphUpdater_remove) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_PowerGraphUpdater_remove])(ctx, sp[0].o);
	}
label_5:;
	{
	LINE_NUMBER(271);
	sp[0].o = (jobject)((mindustry_world_blocks_power_PowerGraph *) NULL_CHECK((frame[1].o)))->F_all;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_6:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_7;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_mindustry_gen_Building, sp[0].o));
	LINE_NUMBER(272);
	((func_mindustry_world_blocks_power_PowerGraph_add_mindustry_gen_Building) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_power_PowerGraph_add_mindustry_gen_Building])(ctx, (frame[0].o), (frame[3].o));
	LINE_NUMBER(273);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(274);
	((func_mindustry_world_blocks_power_PowerGraph_checkAdd) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_power_PowerGraph_checkAdd])(ctx, (frame[0].o));
	LINE_NUMBER(275);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_power_PowerGraph_add_mindustry_gen_Building(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/PowerGraph:add", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(278);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_power;
	if (sp[0].o != nullptr) goto label_2;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(280);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_power;
	sp[0].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[0].o))->F_graph;
	if (sp[0].o != (frame[0].o)) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_power;
	if (((jint)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[0].o))->F_init) != 0) goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(282);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_power;
	sp[0].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[0].o))->F_graph;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_power;
	sp[0].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[0].o))->F_graph;
	if (sp[0].o == (frame[0].o)) goto label_5;
	}
	{
	LINE_NUMBER(283);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_power;
	sp[0].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[0].o))->F_graph;
	sp[0].o = (jobject)((mindustry_world_blocks_power_PowerGraph *) NULL_CHECK(sp[0].o))->F_entity;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_power;
	sp[0].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[0].o))->F_graph;
	sp[0].o = (jobject)((mindustry_world_blocks_power_PowerGraph *) NULL_CHECK(sp[0].o))->F_entity;
	((func_mindustry_gen_PowerGraphUpdater_remove) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_PowerGraphUpdater_remove])(ctx, sp[0].o);
	}
label_5:;
	{
	LINE_NUMBER(286);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_power;
	((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[0].o))->F_graph = (jref) (frame[0].o);
	LINE_NUMBER(287);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_power;
	((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[0].o))->F_init = (jint(1));
	LINE_NUMBER(288);
	sp[0].o = (jobject)((mindustry_world_blocks_power_PowerGraph *) NULL_CHECK((frame[0].o)))->F_all;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(290);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_outputsPower) == 0) goto label_10;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_consumesPower) == 0) goto label_10;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_block;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_consPower;
	if (((jint)((mindustry_world_consumers_ConsumePower *) NULL_CHECK(sp[0].o))->F_buffered) != 0) goto label_10;
	}
	{
	LINE_NUMBER(291);
	sp[0].o = (jobject)((mindustry_world_blocks_power_PowerGraph *) NULL_CHECK((frame[0].o)))->F_producers;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(292);
	sp[0].o = (jobject)((mindustry_world_blocks_power_PowerGraph *) NULL_CHECK((frame[0].o)))->F_consumers;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[1].o));
	goto label_4;
	}
label_10:;
	{
	LINE_NUMBER(293);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_outputsPower) == 0) goto label_13;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_consumesPower) == 0) goto label_13;
	}
	{
	LINE_NUMBER(294);
	sp[0].o = (jobject)((mindustry_world_blocks_power_PowerGraph *) NULL_CHECK((frame[0].o)))->F_batteries;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[1].o));
	goto label_4;
	}
label_13:;
	{
	LINE_NUMBER(295);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_outputsPower) == 0) goto label_15;
	}
	{
	LINE_NUMBER(296);
	sp[0].o = (jobject)((mindustry_world_blocks_power_PowerGraph *) NULL_CHECK((frame[0].o)))->F_producers;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[1].o));
	goto label_4;
	}
label_15:;
	{
	LINE_NUMBER(297);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_consumesPower) == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_block;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_consPower;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	LINE_NUMBER(298);
	sp[0].o = (jobject)((mindustry_world_blocks_power_PowerGraph *) NULL_CHECK((frame[0].o)))->F_consumers;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[1].o));
	}
label_4:;
	LINE_NUMBER(301);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_power_PowerGraph_checkAdd(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/PowerGraph:checkAdd", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(304);
	sp[0].o = (jobject)((mindustry_world_blocks_power_PowerGraph *) NULL_CHECK((frame[0].o)))->F_entity;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_power_PowerGraph *) NULL_CHECK((frame[0].o)))->F_entity;
	((func_mindustry_gen_PowerGraphUpdater_add) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_PowerGraphUpdater_add])(ctx, sp[0].o);
	}
label_1:;
	LINE_NUMBER(305);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_power_PowerGraph_clear(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/PowerGraph:clear", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(308);
	sp[0].o = (jobject)((mindustry_world_blocks_power_PowerGraph *) NULL_CHECK((frame[0].o)))->F_all;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(309);
	sp[0].o = (jobject)((mindustry_world_blocks_power_PowerGraph *) NULL_CHECK((frame[0].o)))->F_producers;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(310);
	sp[0].o = (jobject)((mindustry_world_blocks_power_PowerGraph *) NULL_CHECK((frame[0].o)))->F_consumers;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(311);
	sp[0].o = (jobject)((mindustry_world_blocks_power_PowerGraph *) NULL_CHECK((frame[0].o)))->F_batteries;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(313);
	sp[0].o = (jobject)((mindustry_world_blocks_power_PowerGraph *) NULL_CHECK((frame[0].o)))->F_entity;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_power_PowerGraph *) NULL_CHECK((frame[0].o)))->F_entity;
	((func_mindustry_gen_PowerGraphUpdater_remove) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_PowerGraphUpdater_remove])(ctx, sp[0].o);
	}
label_5:;
	LINE_NUMBER(314);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_power_PowerGraph_reflow_mindustry_gen_Building(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/PowerGraph:reflow", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(317);
	clinit_mindustry_world_blocks_power_PowerGraph(ctx);
	sp[0].o = (jobject)SF_mindustry_world_blocks_power_PowerGraph_queue;
	((func_arc_struct_Queue_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Queue_clear])(ctx, sp[0].o);
	LINE_NUMBER(318);
	clinit_mindustry_world_blocks_power_PowerGraph(ctx);
	sp[0].o = (jobject)SF_mindustry_world_blocks_power_PowerGraph_queue;
	((func_arc_struct_Queue_addLast_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Queue_addLast_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(319);
	clinit_mindustry_world_blocks_power_PowerGraph(ctx);
	sp[0].o = (jobject)SF_mindustry_world_blocks_power_PowerGraph_closedSet;
	((func_arc_struct_IntSet_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_clear])(ctx, sp[0].o);
	}
label_3:;
	{
	LINE_NUMBER(320);
	clinit_mindustry_world_blocks_power_PowerGraph(ctx);
	sp[0].o = (jobject)SF_mindustry_world_blocks_power_PowerGraph_queue;
	if (((jint)((arc_struct_Queue *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_4;
	}
	{
	LINE_NUMBER(321);
	clinit_mindustry_world_blocks_power_PowerGraph(ctx);
	sp[0].o = (jobject)SF_mindustry_world_blocks_power_PowerGraph_queue;
	sp[0].o = (jobject)((func_arc_struct_Queue_removeFirst_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Queue_removeFirst_R_java_lang_Object])(ctx, sp[0].o);
	frame[2].o = (checkCast(ctx, &class_mindustry_gen_Building, sp[0].o));
	LINE_NUMBER(322);
	((func_mindustry_world_blocks_power_PowerGraph_add_mindustry_gen_Building) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_power_PowerGraph_add_mindustry_gen_Building])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(323);
	((func_mindustry_world_blocks_power_PowerGraph_checkAdd) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_power_PowerGraph_checkAdd])(ctx, (frame[0].o));
	LINE_NUMBER(324);
	sp[0].o = frame[2].o;
	clinit_mindustry_world_blocks_power_PowerGraph(ctx);
	sp[1].o = (jobject)SF_mindustry_world_blocks_power_PowerGraph_outArray2;
	sp[0].o = (jobject)((func_mindustry_gen_Building_getPowerConnections_arc_struct_Seq_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_getPowerConnections_arc_struct_Seq_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_9:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_10;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_mindustry_gen_Building, sp[0].o));
	LINE_NUMBER(325);
	clinit_mindustry_world_blocks_power_PowerGraph(ctx);
	sp[0].o = (jobject)SF_mindustry_world_blocks_power_PowerGraph_closedSet;
	jint temp0 = (jint)((func_mindustry_gen_Building_pos_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_gen_Building_pos_R_int])(ctx, (frame[4].o));
	jint temp1 = (jint)((func_arc_struct_IntSet_add_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_add_int_R_boolean])(ctx, sp[0].o, temp0);
	if (temp1 == 0) goto label_12;
	}
	{
	LINE_NUMBER(326);
	clinit_mindustry_world_blocks_power_PowerGraph(ctx);
	sp[0].o = (jobject)SF_mindustry_world_blocks_power_PowerGraph_queue;
	((func_arc_struct_Queue_addLast_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Queue_addLast_java_lang_Object])(ctx, sp[0].o, (frame[4].o));
	}
label_12:;
	LINE_NUMBER(328);
	goto label_9;
label_10:;
	LINE_NUMBER(329);
	goto label_3;
label_4:;
	LINE_NUMBER(330);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_power_PowerGraph_removeList_mindustry_gen_Building(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/PowerGraph:removeList", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(334);
	sp[0].o = (jobject)((mindustry_world_blocks_power_PowerGraph *) NULL_CHECK((frame[0].o)))->F_all;
	jint temp0 = (jint)((func_arc_struct_Seq_remove_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_remove_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(335);
	sp[0].o = (jobject)((mindustry_world_blocks_power_PowerGraph *) NULL_CHECK((frame[0].o)))->F_producers;
	jint temp1 = (jint)((func_arc_struct_Seq_remove_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_remove_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(336);
	sp[0].o = (jobject)((mindustry_world_blocks_power_PowerGraph *) NULL_CHECK((frame[0].o)))->F_consumers;
	jint temp2 = (jint)((func_arc_struct_Seq_remove_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_remove_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(337);
	sp[0].o = (jobject)((mindustry_world_blocks_power_PowerGraph *) NULL_CHECK((frame[0].o)))->F_batteries;
	jint temp3 = (jint)((func_arc_struct_Seq_remove_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_remove_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(338);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_power_PowerGraph_remove_mindustry_gen_Building(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/PowerGraph:remove", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(345);
	sp[0].o = frame[1].o;
	clinit_mindustry_world_blocks_power_PowerGraph(ctx);
	sp[1].o = (jobject)SF_mindustry_world_blocks_power_PowerGraph_outArray1;
	sp[0].o = (jobject)((func_mindustry_gen_Building_getPowerConnections_arc_struct_Seq_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_getPowerConnections_arc_struct_Seq_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_1:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_mindustry_gen_Building, sp[0].o));
	LINE_NUMBER(347);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[3].o)))->F_power;
	sp[0].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[0].o))->F_graph;
	if (sp[0].o == (frame[0].o)) goto label_4;
	}
	goto label_1;
label_4:;
	{
	LINE_NUMBER(350);
	clinit_mindustry_world_blocks_power_PowerGraph(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_blocks_power_PowerGraph);
	init_mindustry_world_blocks_power_PowerGraph(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(351);
	((func_mindustry_world_blocks_power_PowerGraph_checkAdd) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_world_blocks_power_PowerGraph_checkAdd])(ctx, (frame[4].o));
	LINE_NUMBER(352);
	((func_mindustry_world_blocks_power_PowerGraph_add_mindustry_gen_Building) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_world_blocks_power_PowerGraph_add_mindustry_gen_Building])(ctx, (frame[4].o), (frame[3].o));
	LINE_NUMBER(354);
	clinit_mindustry_world_blocks_power_PowerGraph(ctx);
	sp[0].o = (jobject)SF_mindustry_world_blocks_power_PowerGraph_queue;
	((func_arc_struct_Queue_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Queue_clear])(ctx, sp[0].o);
	LINE_NUMBER(355);
	clinit_mindustry_world_blocks_power_PowerGraph(ctx);
	sp[0].o = (jobject)SF_mindustry_world_blocks_power_PowerGraph_queue;
	((func_arc_struct_Queue_addLast_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Queue_addLast_java_lang_Object])(ctx, sp[0].o, (frame[3].o));
	}
label_9:;
	{
	LINE_NUMBER(356);
	clinit_mindustry_world_blocks_power_PowerGraph(ctx);
	sp[0].o = (jobject)SF_mindustry_world_blocks_power_PowerGraph_queue;
	if (((jint)((arc_struct_Queue *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_10;
	}
	{
	LINE_NUMBER(358);
	clinit_mindustry_world_blocks_power_PowerGraph(ctx);
	sp[0].o = (jobject)SF_mindustry_world_blocks_power_PowerGraph_queue;
	sp[0].o = (jobject)((func_arc_struct_Queue_removeFirst_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Queue_removeFirst_R_java_lang_Object])(ctx, sp[0].o);
	frame[5].o = (checkCast(ctx, &class_mindustry_gen_Building, sp[0].o));
	LINE_NUMBER(360);
	((func_mindustry_world_blocks_power_PowerGraph_add_mindustry_gen_Building) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_world_blocks_power_PowerGraph_add_mindustry_gen_Building])(ctx, (frame[4].o), (frame[5].o));
	LINE_NUMBER(362);
	sp[0].o = frame[5].o;
	clinit_mindustry_world_blocks_power_PowerGraph(ctx);
	sp[1].o = (jobject)SF_mindustry_world_blocks_power_PowerGraph_outArray2;
	sp[0].o = (jobject)((func_mindustry_gen_Building_getPowerConnections_arc_struct_Seq_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_getPowerConnections_arc_struct_Seq_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	}
label_14:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[6].o)))(ctx, (frame[6].o));
	if (temp0 == 0) goto label_15;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o));
	frame[7].o = (checkCast(ctx, &class_mindustry_gen_Building, sp[0].o));
	LINE_NUMBER(365);
	if ((frame[7].o) == (frame[1].o)) goto label_17;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[7].o)))->F_power;
	sp[0].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[0].o))->F_graph;
	if (sp[0].o == (frame[4].o)) goto label_17;
	}
	{
	LINE_NUMBER(366);
	((func_mindustry_world_blocks_power_PowerGraph_add_mindustry_gen_Building) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_world_blocks_power_PowerGraph_add_mindustry_gen_Building])(ctx, (frame[4].o), (frame[7].o));
	LINE_NUMBER(367);
	clinit_mindustry_world_blocks_power_PowerGraph(ctx);
	sp[0].o = (jobject)SF_mindustry_world_blocks_power_PowerGraph_queue;
	((func_arc_struct_Queue_addLast_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Queue_addLast_java_lang_Object])(ctx, sp[0].o, (frame[7].o));
	}
label_17:;
	LINE_NUMBER(369);
	goto label_14;
label_15:;
	LINE_NUMBER(370);
	goto label_9;
label_10:;
	{
	LINE_NUMBER(372);
	((func_mindustry_world_blocks_power_PowerGraph_update) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_world_blocks_power_PowerGraph_update])(ctx, (frame[4].o));
	LINE_NUMBER(373);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(376);
	sp[0].o = (jobject)((mindustry_world_blocks_power_PowerGraph *) NULL_CHECK((frame[0].o)))->F_entity;
	if (sp[0].o == nullptr) goto label_21;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_power_PowerGraph *) NULL_CHECK((frame[0].o)))->F_entity;
	((func_mindustry_gen_PowerGraphUpdater_remove) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_PowerGraphUpdater_remove])(ctx, sp[0].o);
	}
label_21:;
	LINE_NUMBER(377);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_world_blocks_power_PowerGraph_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/PowerGraph:toString", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(381);
	sp[0].o = (jobject)((mindustry_world_blocks_power_PowerGraph *) NULL_CHECK((frame[0].o)))->F_producers;
	sp[0].o = (jobject)SM_java_lang_String_valueOf_java_lang_Object_R_java_lang_String(ctx, sp[0].o);
	sp[1].o = (jobject)((mindustry_world_blocks_power_PowerGraph *) NULL_CHECK((frame[0].o)))->F_consumers;
	sp[1].o = (jobject)SM_java_lang_String_valueOf_java_lang_Object_R_java_lang_String(ctx, sp[1].o);
	sp[2].o = (jobject)((mindustry_world_blocks_power_PowerGraph *) NULL_CHECK((frame[0].o)))->F_batteries;
	sp[2].o = (jobject)SM_java_lang_String_valueOf_java_lang_Object_R_java_lang_String(ctx, sp[2].o);
	sp[3].o = (jobject)((mindustry_world_blocks_power_PowerGraph *) NULL_CHECK((frame[0].o)))->F_all;
	sp[3].o = (jobject)SM_java_lang_String_valueOf_java_lang_Object_R_java_lang_String(ctx, sp[3].o);
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"PowerGraph{producers=\u0001, consumers=\u0001, batteries=\u0001, all=\u0001, graphID=\u0001}"_j.string, 5, sp[0].o, sp[1].o, sp[2].o, sp[3].o, boxInteger(ctx, ((jint)((mindustry_world_blocks_power_PowerGraph *) NULL_CHECK((frame[0].o)))->F_graphID)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_mindustry_world_blocks_power_PowerGraph(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/PowerGraph:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_power_PowerGraph(ctx);
	{
	LINE_NUMBER(9);
	clinit_arc_struct_Queue(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Queue);
	init_arc_struct_Queue(ctx, sp[0].o);
	clinit_mindustry_world_blocks_power_PowerGraph(ctx);
	SF_mindustry_world_blocks_power_PowerGraph_queue = sp[0].o;
	LINE_NUMBER(10);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	clinit_mindustry_world_blocks_power_PowerGraph(ctx);
	SF_mindustry_world_blocks_power_PowerGraph_outArray1 = sp[0].o;
	LINE_NUMBER(11);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	clinit_mindustry_world_blocks_power_PowerGraph(ctx);
	SF_mindustry_world_blocks_power_PowerGraph_outArray2 = sp[0].o;
	LINE_NUMBER(12);
	clinit_arc_struct_IntSet(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_IntSet);
	init_arc_struct_IntSet(ctx, sp[0].o);
	clinit_mindustry_world_blocks_power_PowerGraph(ctx);
	SF_mindustry_world_blocks_power_PowerGraph_closedSet = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_world_blocks_power_PowerGraph;
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

	{ // Field entity
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[8]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[12]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[13]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[14]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[15]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[16]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[17]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[18]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[1])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

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

	methods[12]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[13]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[14]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[15]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[16]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[17]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[18]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[19]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[20]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[21]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[22]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[23]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[24]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[25]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[26]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[27]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[28]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_world_blocks_power_PowerGraph[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_mindustry_world_blocks_power_PowerGraph_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_mindustry_world_blocks_power_PowerGraph_getID_R_int,
	(void *) M_mindustry_world_blocks_power_PowerGraph_getLastScaledPowerIn_R_float,
	(void *) M_mindustry_world_blocks_power_PowerGraph_getLastScaledPowerOut_R_float,
	(void *) M_mindustry_world_blocks_power_PowerGraph_getLastCapacity_R_float,
	(void *) M_mindustry_world_blocks_power_PowerGraph_getPowerBalance_R_float,
	(void *) M_mindustry_world_blocks_power_PowerGraph_hasPowerBalanceSamples_R_boolean,
	(void *) M_mindustry_world_blocks_power_PowerGraph_getLastPowerNeeded_R_float,
	(void *) M_mindustry_world_blocks_power_PowerGraph_getLastPowerProduced_R_float,
	(void *) M_mindustry_world_blocks_power_PowerGraph_getLastPowerStored_R_float,
	(void *) M_mindustry_world_blocks_power_PowerGraph_transferPower_float,
	(void *) M_mindustry_world_blocks_power_PowerGraph_getSatisfaction_R_float,
	(void *) M_mindustry_world_blocks_power_PowerGraph_getPowerProduced_R_float,
	(void *) M_mindustry_world_blocks_power_PowerGraph_getPowerNeeded_R_float,
	(void *) M_mindustry_world_blocks_power_PowerGraph_getBatteryStored_R_float,
	(void *) M_mindustry_world_blocks_power_PowerGraph_getBatteryCapacity_R_float,
	(void *) M_mindustry_world_blocks_power_PowerGraph_getTotalBatteryCapacity_R_float,
	(void *) M_mindustry_world_blocks_power_PowerGraph_useBatteries_float_R_float,
	(void *) M_mindustry_world_blocks_power_PowerGraph_chargeBatteries_float_R_float,
	(void *) M_mindustry_world_blocks_power_PowerGraph_distributePower_float_float_boolean,
	(void *) M_mindustry_world_blocks_power_PowerGraph_update,
	(void *) M_mindustry_world_blocks_power_PowerGraph_addGraph_mindustry_world_blocks_power_PowerGraph,
	(void *) M_mindustry_world_blocks_power_PowerGraph_add_mindustry_gen_Building,
	(void *) M_mindustry_world_blocks_power_PowerGraph_checkAdd,
	(void *) M_mindustry_world_blocks_power_PowerGraph_clear,
	(void *) M_mindustry_world_blocks_power_PowerGraph_reflow_mindustry_gen_Building,
	(void *) M_mindustry_world_blocks_power_PowerGraph_removeList_mindustry_gen_Building,
	(void *) M_mindustry_world_blocks_power_PowerGraph_remove_mindustry_gen_Building,
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
	{ "getID", "()I" },
	{ "getLastScaledPowerIn", "()F" },
	{ "getLastScaledPowerOut", "()F" },
	{ "getLastCapacity", "()F" },
	{ "getPowerBalance", "()F" },
	{ "hasPowerBalanceSamples", "()Z" },
	{ "getLastPowerNeeded", "()F" },
	{ "getLastPowerProduced", "()F" },
	{ "getLastPowerStored", "()F" },
	{ "transferPower", "(F)V" },
	{ "getSatisfaction", "()F" },
	{ "getPowerProduced", "()F" },
	{ "getPowerNeeded", "()F" },
	{ "getBatteryStored", "()F" },
	{ "getBatteryCapacity", "()F" },
	{ "getTotalBatteryCapacity", "()F" },
	{ "useBatteries", "(F)F" },
	{ "chargeBatteries", "(F)F" },
	{ "distributePower", "(FFZ)V" },
	{ "update", "()V" },
	{ "addGraph", "(Lmindustry/world/blocks/power/PowerGraph;)V" },
	{ "add", "(Lmindustry/gen/Building;)V" },
	{ "checkAdd", "()V" },
	{ "clear", "()V" },
	{ "reflow", "(Lmindustry/gen/Building;)V" },
	{ "removeList", "(Lmindustry/gen/Building;)V" },
	{ "remove", "(Lmindustry/gen/Building;)V" },
};

static FieldMetadata fields[] {
	{ "queue", &class_arc_struct_Queue, (intptr_t) &SF_mindustry_world_blocks_power_PowerGraph_queue, "Larc/struct/Queue;", 26 },
	{ "outArray1", &class_arc_struct_Seq, (intptr_t) &SF_mindustry_world_blocks_power_PowerGraph_outArray1, "Larc/struct/Seq;", 26 },
	{ "outArray2", &class_arc_struct_Seq, (intptr_t) &SF_mindustry_world_blocks_power_PowerGraph_outArray2, "Larc/struct/Seq;", 26 },
	{ "closedSet", &class_arc_struct_IntSet, (intptr_t) &SF_mindustry_world_blocks_power_PowerGraph_closedSet, "Larc/struct/IntSet;", 26 },
	{ "producers", &class_arc_struct_Seq, offsetof(mindustry_world_blocks_power_PowerGraph, F_producers), "Larc/struct/Seq;", 17 },
	{ "consumers", &class_arc_struct_Seq, offsetof(mindustry_world_blocks_power_PowerGraph, F_consumers), "Larc/struct/Seq;", 17 },
	{ "batteries", &class_arc_struct_Seq, offsetof(mindustry_world_blocks_power_PowerGraph, F_batteries), "Larc/struct/Seq;", 17 },
	{ "all", &class_arc_struct_Seq, offsetof(mindustry_world_blocks_power_PowerGraph, F_all), "Larc/struct/Seq;", 17 },
	{ "entity", &class_mindustry_gen_PowerGraphUpdater, offsetof(mindustry_world_blocks_power_PowerGraph, F_entity), "Lmindustry/gen/PowerGraphUpdater;", 18 },
	{ "powerBalance", &class_arc_math_WindowedMean, offsetof(mindustry_world_blocks_power_PowerGraph, F_powerBalance), "Larc/math/WindowedMean;", 18 },
	{ "lastPowerProduced", &class_float, offsetof(mindustry_world_blocks_power_PowerGraph, F_lastPowerProduced), "F", 2 },
	{ "lastPowerNeeded", &class_float, offsetof(mindustry_world_blocks_power_PowerGraph, F_lastPowerNeeded), "F", 2 },
	{ "lastPowerStored", &class_float, offsetof(mindustry_world_blocks_power_PowerGraph, F_lastPowerStored), "F", 2 },
	{ "lastScaledPowerIn", &class_float, offsetof(mindustry_world_blocks_power_PowerGraph, F_lastScaledPowerIn), "F", 2 },
	{ "lastScaledPowerOut", &class_float, offsetof(mindustry_world_blocks_power_PowerGraph, F_lastScaledPowerOut), "F", 2 },
	{ "lastCapacity", &class_float, offsetof(mindustry_world_blocks_power_PowerGraph, F_lastCapacity), "F", 2 },
	{ "energyDelta", &class_float, offsetof(mindustry_world_blocks_power_PowerGraph, F_energyDelta), "F", 2 },
	{ "graphID", &class_int, offsetof(mindustry_world_blocks_power_PowerGraph, F_graphID), "I", 18 },
	{ "lastGraphID", &class_int, (intptr_t) &SF_mindustry_world_blocks_power_PowerGraph_lastGraphID, "I", 10 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_blocks_power_PowerGraph, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_mindustry_world_blocks_power_PowerGraph_boolean, 0, "(Z)V", 1 },
	{ "getID", (intptr_t) M_mindustry_world_blocks_power_PowerGraph_getID_R_int, VTABLE_mindustry_world_blocks_power_PowerGraph_getID_R_int, "()I", 1 },
	{ "getLastScaledPowerIn", (intptr_t) M_mindustry_world_blocks_power_PowerGraph_getLastScaledPowerIn_R_float, VTABLE_mindustry_world_blocks_power_PowerGraph_getLastScaledPowerIn_R_float, "()F", 1 },
	{ "getLastScaledPowerOut", (intptr_t) M_mindustry_world_blocks_power_PowerGraph_getLastScaledPowerOut_R_float, VTABLE_mindustry_world_blocks_power_PowerGraph_getLastScaledPowerOut_R_float, "()F", 1 },
	{ "getLastCapacity", (intptr_t) M_mindustry_world_blocks_power_PowerGraph_getLastCapacity_R_float, VTABLE_mindustry_world_blocks_power_PowerGraph_getLastCapacity_R_float, "()F", 1 },
	{ "getPowerBalance", (intptr_t) M_mindustry_world_blocks_power_PowerGraph_getPowerBalance_R_float, VTABLE_mindustry_world_blocks_power_PowerGraph_getPowerBalance_R_float, "()F", 1 },
	{ "hasPowerBalanceSamples", (intptr_t) M_mindustry_world_blocks_power_PowerGraph_hasPowerBalanceSamples_R_boolean, VTABLE_mindustry_world_blocks_power_PowerGraph_hasPowerBalanceSamples_R_boolean, "()Z", 1 },
	{ "getLastPowerNeeded", (intptr_t) M_mindustry_world_blocks_power_PowerGraph_getLastPowerNeeded_R_float, VTABLE_mindustry_world_blocks_power_PowerGraph_getLastPowerNeeded_R_float, "()F", 1 },
	{ "getLastPowerProduced", (intptr_t) M_mindustry_world_blocks_power_PowerGraph_getLastPowerProduced_R_float, VTABLE_mindustry_world_blocks_power_PowerGraph_getLastPowerProduced_R_float, "()F", 1 },
	{ "getLastPowerStored", (intptr_t) M_mindustry_world_blocks_power_PowerGraph_getLastPowerStored_R_float, VTABLE_mindustry_world_blocks_power_PowerGraph_getLastPowerStored_R_float, "()F", 1 },
	{ "transferPower", (intptr_t) M_mindustry_world_blocks_power_PowerGraph_transferPower_float, VTABLE_mindustry_world_blocks_power_PowerGraph_transferPower_float, "(F)V", 1 },
	{ "getSatisfaction", (intptr_t) M_mindustry_world_blocks_power_PowerGraph_getSatisfaction_R_float, VTABLE_mindustry_world_blocks_power_PowerGraph_getSatisfaction_R_float, "()F", 1 },
	{ "getPowerProduced", (intptr_t) M_mindustry_world_blocks_power_PowerGraph_getPowerProduced_R_float, VTABLE_mindustry_world_blocks_power_PowerGraph_getPowerProduced_R_float, "()F", 1 },
	{ "getPowerNeeded", (intptr_t) M_mindustry_world_blocks_power_PowerGraph_getPowerNeeded_R_float, VTABLE_mindustry_world_blocks_power_PowerGraph_getPowerNeeded_R_float, "()F", 1 },
	{ "getBatteryStored", (intptr_t) M_mindustry_world_blocks_power_PowerGraph_getBatteryStored_R_float, VTABLE_mindustry_world_blocks_power_PowerGraph_getBatteryStored_R_float, "()F", 1 },
	{ "getBatteryCapacity", (intptr_t) M_mindustry_world_blocks_power_PowerGraph_getBatteryCapacity_R_float, VTABLE_mindustry_world_blocks_power_PowerGraph_getBatteryCapacity_R_float, "()F", 1 },
	{ "getTotalBatteryCapacity", (intptr_t) M_mindustry_world_blocks_power_PowerGraph_getTotalBatteryCapacity_R_float, VTABLE_mindustry_world_blocks_power_PowerGraph_getTotalBatteryCapacity_R_float, "()F", 1 },
	{ "useBatteries", (intptr_t) M_mindustry_world_blocks_power_PowerGraph_useBatteries_float_R_float, VTABLE_mindustry_world_blocks_power_PowerGraph_useBatteries_float_R_float, "(F)F", 1 },
	{ "chargeBatteries", (intptr_t) M_mindustry_world_blocks_power_PowerGraph_chargeBatteries_float_R_float, VTABLE_mindustry_world_blocks_power_PowerGraph_chargeBatteries_float_R_float, "(F)F", 1 },
	{ "distributePower", (intptr_t) M_mindustry_world_blocks_power_PowerGraph_distributePower_float_float_boolean, VTABLE_mindustry_world_blocks_power_PowerGraph_distributePower_float_float_boolean, "(FFZ)V", 1 },
	{ "update", (intptr_t) M_mindustry_world_blocks_power_PowerGraph_update, VTABLE_mindustry_world_blocks_power_PowerGraph_update, "()V", 1 },
	{ "addGraph", (intptr_t) M_mindustry_world_blocks_power_PowerGraph_addGraph_mindustry_world_blocks_power_PowerGraph, VTABLE_mindustry_world_blocks_power_PowerGraph_addGraph_mindustry_world_blocks_power_PowerGraph, "(Lmindustry/world/blocks/power/PowerGraph;)V", 1 },
	{ "add", (intptr_t) M_mindustry_world_blocks_power_PowerGraph_add_mindustry_gen_Building, VTABLE_mindustry_world_blocks_power_PowerGraph_add_mindustry_gen_Building, "(Lmindustry/gen/Building;)V", 1 },
	{ "checkAdd", (intptr_t) M_mindustry_world_blocks_power_PowerGraph_checkAdd, VTABLE_mindustry_world_blocks_power_PowerGraph_checkAdd, "()V", 1 },
	{ "clear", (intptr_t) M_mindustry_world_blocks_power_PowerGraph_clear, VTABLE_mindustry_world_blocks_power_PowerGraph_clear, "()V", 1 },
	{ "reflow", (intptr_t) M_mindustry_world_blocks_power_PowerGraph_reflow_mindustry_gen_Building, VTABLE_mindustry_world_blocks_power_PowerGraph_reflow_mindustry_gen_Building, "(Lmindustry/gen/Building;)V", 1 },
	{ "removeList", (intptr_t) M_mindustry_world_blocks_power_PowerGraph_removeList_mindustry_gen_Building, VTABLE_mindustry_world_blocks_power_PowerGraph_removeList_mindustry_gen_Building, "(Lmindustry/gen/Building;)V", 1 },
	{ "remove", (intptr_t) M_mindustry_world_blocks_power_PowerGraph_remove_mindustry_gen_Building, VTABLE_mindustry_world_blocks_power_PowerGraph_remove_mindustry_gen_Building, "(Lmindustry/gen/Building;)V", 1 },
	{ "toString", (intptr_t) M_mindustry_world_blocks_power_PowerGraph_toString_R_java_lang_String, VTABLE_mindustry_world_blocks_power_PowerGraph_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "<clinit>", (intptr_t) clinit_mindustry_world_blocks_power_PowerGraph, 0, "()V", 8 },
};

Class class_mindustry_world_blocks_power_PowerGraph{
		.nativeName = (intptr_t) "mindustry/world/blocks/power/PowerGraph",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_world_blocks_power_PowerGraph),
		.classVtable = (intptr_t) vtable_mindustry_world_blocks_power_PowerGraph,
		.staticInitializer = (intptr_t) clinit_mindustry_world_blocks_power_PowerGraph,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_world_blocks_power_PowerGraph,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 19,
		.nativeFields = (intptr_t) fields,
		.methodCount = 31,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 38,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_blocks_power_PowerGraph = registerClass(&class_mindustry_world_blocks_power_PowerGraph);

}
