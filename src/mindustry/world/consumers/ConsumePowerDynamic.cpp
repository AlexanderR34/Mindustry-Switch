#include "mindustry/world/consumers/ConsumePowerDynamic.h"
#include "mindustry/world/consumers/ConsumePower.h"
#include "mindustry/world/consumers/ConsumePowerDynamic.h"
#include "arc/func/Floatf.h"
#include "java/lang/Object.h"
#include "mindustry/world/meta/Stat.h"
#include "mindustry/world/meta/Stats.h"
#include "mindustry/world/meta/StatUnit.h"
#include "mindustry/world/consumers/Consume.h"
#include "mindustry/gen/Building.h"

extern "C" {


void mark_mindustry_world_consumers_ConsumePowerDynamic(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_world_consumers_ConsumePower(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_world_consumers_ConsumePowerDynamic *) object;
	if (self->F_usage)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_usage)->clazz)->markFunction)((jobject) self->F_usage, mark, depth + 1);
}

void clinit_mindustry_world_consumers_ConsumePowerDynamic(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_world_consumers_ConsumePower(ctx);
}

void init_mindustry_world_consumers_ConsumePowerDynamic_arc_func_Floatf(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/ConsumePowerDynamic:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_consumers_ConsumePowerDynamic(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(13);
	init_mindustry_world_consumers_ConsumePower_float_float_boolean(ctx, (frame[0].o), (jfloat(0)), (jfloat(0)), (jint(0)));
	LINE_NUMBER(14);
	((mindustry_world_consumers_ConsumePowerDynamic *) NULL_CHECK((frame[0].o)))->F_usage = (jref) (frame[1].o);
	LINE_NUMBER(15);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_world_consumers_ConsumePowerDynamic_float_arc_func_Floatf(jcontext ctx, jobject self, jfloat param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/ConsumePowerDynamic:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_consumers_ConsumePowerDynamic(ctx);
	frame[0].o = self;
	frame[1].f = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(18);
	init_mindustry_world_consumers_ConsumePower_float_float_boolean(ctx, (frame[0].o), (jfloat(0)), (jfloat(0)), (jint(0)));
	LINE_NUMBER(19);
	((mindustry_world_consumers_ConsumePowerDynamic *) NULL_CHECK((frame[0].o)))->F_displayedPowerUsage = (frame[1].f);
	LINE_NUMBER(20);
	((mindustry_world_consumers_ConsumePowerDynamic *) NULL_CHECK((frame[0].o)))->F_usage = (jref) (frame[2].o);
	LINE_NUMBER(21);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_world_consumers_ConsumePowerDynamic_requestedPower_mindustry_gen_Building_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/ConsumePowerDynamic:requestedPower", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(25);
	sp[0].o = (jobject)((mindustry_world_consumers_ConsumePowerDynamic *) NULL_CHECK((frame[0].o)))->F_usage;
	jfloat temp0 = (jfloat)((func_arc_func_Floatf_get_java_lang_Object_R_float) resolveInterfaceMethod(ctx, &class_arc_func_Floatf, INDEX_arc_func_Floatf_get_java_lang_Object_R_float, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_consumers_ConsumePowerDynamic_display_mindustry_world_meta_Stats(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/ConsumePowerDynamic:display", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(30);
	if ((floatCompare(((jfloat)((mindustry_world_consumers_ConsumePowerDynamic *) NULL_CHECK((frame[0].o)))->F_displayedPowerUsage), (jfloat(0)), -1)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(31);
	sp[0].o = frame[1].o;
	clinit_mindustry_world_meta_Stat(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_Stat_powerUse;
	jfloat temp0 = ((jfloat)((mindustry_world_consumers_ConsumePowerDynamic *) NULL_CHECK((frame[0].o)))->F_displayedPowerUsage) * (jfloat(60.0f));
	clinit_mindustry_world_meta_StatUnit(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_StatUnit_powerSecond;
	((func_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_float_mindustry_world_meta_StatUnit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_float_mindustry_world_meta_StatUnit])(ctx, sp[0].o, sp[1].o, temp0, sp[2].o);
	}
label_1:;
	LINE_NUMBER(33);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_world_consumers_ConsumePowerDynamic[] {
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
	(void *) M_mindustry_world_consumers_ConsumePowerDynamic_display_mindustry_world_meta_Stats,
	(void *) M_mindustry_world_consumers_ConsumePowerDynamic_requestedPower_mindustry_gen_Building_R_float,
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
	{ "usage", &class_arc_func_Floatf, offsetof(mindustry_world_consumers_ConsumePowerDynamic, F_usage), "Larc/func/Floatf;", 18 },
	{ "displayedPowerUsage", &class_float, offsetof(mindustry_world_consumers_ConsumePowerDynamic, F_displayedPowerUsage), "F", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_consumers_ConsumePowerDynamic_arc_func_Floatf, 0, "(Larc/func/Floatf;)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_world_consumers_ConsumePowerDynamic_float_arc_func_Floatf, 0, "(FLarc/func/Floatf;)V", 1 },
	{ "requestedPower", (intptr_t) M_mindustry_world_consumers_ConsumePowerDynamic_requestedPower_mindustry_gen_Building_R_float, VTABLE_mindustry_world_consumers_ConsumePowerDynamic_requestedPower_mindustry_gen_Building_R_float, "(Lmindustry/gen/Building;)F", 1 },
	{ "display", (intptr_t) M_mindustry_world_consumers_ConsumePowerDynamic_display_mindustry_world_meta_Stats, VTABLE_mindustry_world_consumers_ConsumePowerDynamic_display_mindustry_world_meta_Stats, "(Lmindustry/world/meta/Stats;)V", 1 },
};

Class class_mindustry_world_consumers_ConsumePowerDynamic{
		.nativeName = (intptr_t) "mindustry/world/consumers/ConsumePowerDynamic",
		.parentClass = (intptr_t) &class_mindustry_world_consumers_ConsumePower,
		.size = sizeof(mindustry_world_consumers_ConsumePowerDynamic),
		.classVtable = (intptr_t) vtable_mindustry_world_consumers_ConsumePowerDynamic,
		.staticInitializer = (intptr_t) clinit_mindustry_world_consumers_ConsumePowerDynamic,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_world_consumers_ConsumePowerDynamic,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 23,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_consumers_ConsumePowerDynamic = registerClass(&class_mindustry_world_consumers_ConsumePowerDynamic);

}
