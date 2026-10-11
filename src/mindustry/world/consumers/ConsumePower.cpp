#include "mindustry/world/consumers/ConsumePower.h"
#include "mindustry/world/consumers/ConsumePower.h"
#include "mindustry/world/meta/Stat.h"
#include "java/lang/Object.h"
#include "mindustry/world/Block.h"
#include "mindustry/world/meta/Stats.h"
#include "mindustry/world/meta/StatUnit.h"
#include "mindustry/world/consumers/Consume.h"
#include "mindustry/world/modules/PowerModule.h"
#include "mindustry/gen/Building.h"

extern "C" {


void mark_mindustry_world_consumers_ConsumePower(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_world_consumers_Consume(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_world_consumers_ConsumePower *) object;
}

void clinit_mindustry_world_consumers_ConsumePower(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_world_consumers_Consume(ctx);
}

void init_mindustry_world_consumers_ConsumePower_float_float_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/ConsumePower:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_consumers_ConsumePower(ctx);
	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(16);
	init_mindustry_world_consumers_Consume(ctx, (frame[0].o));
	LINE_NUMBER(17);
	((mindustry_world_consumers_ConsumePower *) NULL_CHECK((frame[0].o)))->F_usage = (frame[1].f);
	LINE_NUMBER(18);
	((mindustry_world_consumers_ConsumePower *) NULL_CHECK((frame[0].o)))->F_capacity = (frame[2].f);
	LINE_NUMBER(19);
	((mindustry_world_consumers_ConsumePower *) NULL_CHECK((frame[0].o)))->F_buffered = (frame[3].i);
	LINE_NUMBER(20);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_world_consumers_ConsumePower(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/ConsumePower:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_consumers_ConsumePower(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(23);
	init_mindustry_world_consumers_ConsumePower_float_float_boolean(ctx, (frame[0].o), (jfloat(0)), (jfloat(0)), (jint(0)));
	LINE_NUMBER(24);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_consumers_ConsumePower_apply_mindustry_world_Block(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/ConsumePower:apply", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(28);
	((mindustry_world_Block *) NULL_CHECK((frame[1].o)))->F_hasPower = (jint(1));
	LINE_NUMBER(29);
	((mindustry_world_Block *) NULL_CHECK((frame[1].o)))->F_consPower = (jref) (frame[0].o);
	LINE_NUMBER(30);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_consumers_ConsumePower_ignore_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/ConsumePower:ignore", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(34);
	popStackFrame(ctx);
	return ((jint)((mindustry_world_consumers_ConsumePower *) NULL_CHECK((frame[0].o)))->F_buffered);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_world_consumers_ConsumePower_efficiency_mindustry_gen_Building_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/ConsumePower:efficiency", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(39);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_power;
	popStackFrame(ctx);
	return ((jfloat)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[0].o))->F_status);
	}

	popStackFrame(ctx);
}

void M_mindustry_world_consumers_ConsumePower_display_mindustry_world_meta_Stats(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/ConsumePower:display", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(44);
	if (((jint)((mindustry_world_consumers_ConsumePower *) NULL_CHECK((frame[0].o)))->F_buffered) == 0) goto label_1;
	}
	{
	LINE_NUMBER(45);
	sp[0].o = frame[1].o;
	clinit_mindustry_world_meta_Stat(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_Stat_powerCapacity;
	jfloat temp0 = (jfloat)((mindustry_world_consumers_ConsumePower *) NULL_CHECK((frame[0].o)))->F_capacity;
	clinit_mindustry_world_meta_StatUnit(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_StatUnit_none;
	((func_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_float_mindustry_world_meta_StatUnit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_float_mindustry_world_meta_StatUnit])(ctx, sp[0].o, sp[1].o, temp0, sp[2].o);
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(46);
	if ((floatCompare(((jfloat)((mindustry_world_consumers_ConsumePower *) NULL_CHECK((frame[0].o)))->F_usage), (jfloat(0)), -1)) <= 0) goto label_3;
	}
	{
	LINE_NUMBER(47);
	sp[0].o = frame[1].o;
	clinit_mindustry_world_meta_Stat(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_Stat_powerUse;
	jfloat temp0 = ((jfloat)((mindustry_world_consumers_ConsumePower *) NULL_CHECK((frame[0].o)))->F_usage) * (jfloat(60.0f));
	clinit_mindustry_world_meta_StatUnit(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_StatUnit_powerSecond;
	((func_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_float_mindustry_world_meta_StatUnit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_float_mindustry_world_meta_StatUnit])(ctx, sp[0].o, sp[1].o, temp0, sp[2].o);
	}
label_3:;
	LINE_NUMBER(49);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jfloat M_mindustry_world_consumers_ConsumePower_requestedPower_mindustry_gen_Building_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/ConsumePower:requestedPower", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(57);
	if (((jint)((mindustry_world_consumers_ConsumePower *) NULL_CHECK((frame[0].o)))->F_buffered) == 0) goto label_1;
	}
	{
	LINE_NUMBER(58);
	jfloat temp0 = jfloat(1);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_power;
	jfloat temp1 = (temp0 - ((jfloat)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[0].o))->F_status)) * ((jfloat)((mindustry_world_consumers_ConsumePower *) NULL_CHECK((frame[0].o)))->F_capacity);
	sp[0].f = temp1;
	sp += 1;
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(59);
	jfloat temp0 = (jfloat)((mindustry_world_consumers_ConsumePower *) NULL_CHECK((frame[0].o)))->F_usage;
	jint temp1 = (jint)((func_mindustry_gen_Building_shouldConsume_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_shouldConsume_R_boolean])(ctx, (frame[1].o));
	sp[0].f = temp0;
	sp += 1;
	if (temp1 == 0) goto label_4;
	}
	INST_FCONST(1);
	goto label_5;
label_4:;
	INST_FCONST(0);
label_5:;
	INST_FMUL();
label_3:;
	LINE_NUMBER(57);
	popStackFrame(ctx);
	INST_FRETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_world_consumers_ConsumePower[] {
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
	(void *) M_mindustry_world_consumers_ConsumePower_apply_mindustry_world_Block,
	(void *) M_mindustry_world_consumers_Consume_optional_boolean_boolean_R_mindustry_world_consumers_Consume,
	(void *) M_mindustry_world_consumers_Consume_boost_R_mindustry_world_consumers_Consume,
	(void *) M_mindustry_world_consumers_Consume_update_boolean_R_mindustry_world_consumers_Consume,
	(void *) M_mindustry_world_consumers_ConsumePower_ignore_R_boolean,
	(void *) M_mindustry_world_consumers_Consume_build_mindustry_gen_Building_arc_scene_ui_layout_Table,
	(void *) M_mindustry_world_consumers_Consume_trigger_mindustry_gen_Building,
	(void *) M_mindustry_world_consumers_Consume_update_mindustry_gen_Building,
	(void *) M_mindustry_world_consumers_ConsumePower_efficiency_mindustry_gen_Building_R_float,
	(void *) M_mindustry_world_consumers_Consume_efficiencyMultiplier_mindustry_gen_Building_R_float,
	(void *) M_mindustry_world_consumers_ConsumePower_display_mindustry_world_meta_Stats,
	(void *) M_mindustry_world_consumers_ConsumePower_requestedPower_mindustry_gen_Building_R_float,
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
	{ "apply", "(Lmindustry/world/Block;)V" },
	{ "optional", "(ZZ)Lmindustry/world/consumers/Consume;" },
	{ "boost", "()Lmindustry/world/consumers/Consume;" },
	{ "update", "(Z)Lmindustry/world/consumers/Consume;" },
	{ "ignore", "()Z" },
	{ "build", "(Lmindustry/gen/Building;Larc/scene/ui/layout/Table;)V" },
	{ "trigger", "(Lmindustry/gen/Building;)V" },
	{ "update", "(Lmindustry/gen/Building;)V" },
	{ "efficiency", "(Lmindustry/gen/Building;)F" },
	{ "efficiencyMultiplier", "(Lmindustry/gen/Building;)F" },
	{ "display", "(Lmindustry/world/meta/Stats;)V" },
	{ "requestedPower", "(Lmindustry/gen/Building;)F" },
};

static FieldMetadata fields[] {
	{ "usage", &class_float, offsetof(mindustry_world_consumers_ConsumePower, F_usage), "F", 1 },
	{ "capacity", &class_float, offsetof(mindustry_world_consumers_ConsumePower, F_capacity), "F", 1 },
	{ "buffered", &class_boolean, offsetof(mindustry_world_consumers_ConsumePower, F_buffered), "Z", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_consumers_ConsumePower_float_float_boolean, 0, "(FFZ)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_world_consumers_ConsumePower, 0, "()V", 4 },
	{ "apply", (intptr_t) M_mindustry_world_consumers_ConsumePower_apply_mindustry_world_Block, VTABLE_mindustry_world_consumers_ConsumePower_apply_mindustry_world_Block, "(Lmindustry/world/Block;)V", 1 },
	{ "ignore", (intptr_t) M_mindustry_world_consumers_ConsumePower_ignore_R_boolean, VTABLE_mindustry_world_consumers_ConsumePower_ignore_R_boolean, "()Z", 1 },
	{ "efficiency", (intptr_t) M_mindustry_world_consumers_ConsumePower_efficiency_mindustry_gen_Building_R_float, VTABLE_mindustry_world_consumers_ConsumePower_efficiency_mindustry_gen_Building_R_float, "(Lmindustry/gen/Building;)F", 1 },
	{ "display", (intptr_t) M_mindustry_world_consumers_ConsumePower_display_mindustry_world_meta_Stats, VTABLE_mindustry_world_consumers_ConsumePower_display_mindustry_world_meta_Stats, "(Lmindustry/world/meta/Stats;)V", 1 },
	{ "requestedPower", (intptr_t) M_mindustry_world_consumers_ConsumePower_requestedPower_mindustry_gen_Building_R_float, VTABLE_mindustry_world_consumers_ConsumePower_requestedPower_mindustry_gen_Building_R_float, "(Lmindustry/gen/Building;)F", 1 },
};

Class class_mindustry_world_consumers_ConsumePower{
		.nativeName = (intptr_t) "mindustry/world/consumers/ConsumePower",
		.parentClass = (intptr_t) &class_mindustry_world_consumers_Consume,
		.size = sizeof(mindustry_world_consumers_ConsumePower),
		.classVtable = (intptr_t) vtable_mindustry_world_consumers_ConsumePower,
		.staticInitializer = (intptr_t) clinit_mindustry_world_consumers_ConsumePower,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_world_consumers_ConsumePower,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 7,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 23,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_consumers_ConsumePower = registerClass(&class_mindustry_world_consumers_ConsumePower);

}
