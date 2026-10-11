#include "mindustry/world/consumers/ConsumeLiquidFlammable.h"
#include "arc/func/Floatf.h"
#include "mindustry/world/consumers/ConsumeLiquidFlammable_invoke_arc_func_Boolf_1.h"
#include "mindustry/world/meta/Stats.h"
#include "mindustry/type/Liquid.h"
#include "mindustry/world/meta/StatValue.h"
#include "mindustry/world/meta/StatValues.h"
#include "mindustry/world/consumers/ConsumeLiquidFilter.h"
#include "mindustry/world/consumers/ConsumeLiquidFlammable.h"
#include "mindustry/world/meta/Stat.h"
#include "java/lang/Object.h"
#include "mindustry/world/consumers/Consume.h"
#include "mindustry/world/consumers/ConsumeLiquidFlammable_invoke_arc_func_Floatf_1.h"
#include "arc/func/Boolf.h"

extern "C" {


void mark_mindustry_world_consumers_ConsumeLiquidFlammable(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_world_consumers_ConsumeLiquidFilter(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_world_consumers_ConsumeLiquidFlammable *) object;
}

void clinit_mindustry_world_consumers_ConsumeLiquidFlammable(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_world_consumers_ConsumeLiquidFilter(ctx);
}

void init_mindustry_world_consumers_ConsumeLiquidFlammable_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/ConsumeLiquidFlammable:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_consumers_ConsumeLiquidFlammable(ctx);
	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(9);
	init_mindustry_world_consumers_ConsumeLiquidFilter(ctx, (frame[0].o));
	LINE_NUMBER(10);
	((mindustry_world_consumers_ConsumeLiquidBase *) NULL_CHECK((frame[0].o)))->F_amount = (frame[2].f);
	LINE_NUMBER(11);
	((mindustry_world_consumers_ConsumeLiquidFlammable *) NULL_CHECK((frame[0].o)))->F_minFlammability = (frame[1].f);
	LINE_NUMBER(12);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_world_consumers_ConsumeLiquidFlammable_invoke_arc_func_Boolf_1(ctx);
		auto proxy = (mindustry_world_consumers_ConsumeLiquidFlammable_invoke_arc_func_Boolf_1 *) gcAlloc(ctx, &class_mindustry_world_consumers_ConsumeLiquidFlammable_invoke_arc_func_Boolf_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((mindustry_world_consumers_ConsumeLiquidFilter *) NULL_CHECK(sp[0].o))->F_filter = (jref) sp[1].o;
	LINE_NUMBER(13);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_world_consumers_ConsumeLiquidFlammable_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/ConsumeLiquidFlammable:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_consumers_ConsumeLiquidFlammable(ctx);
	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(16);
	init_mindustry_world_consumers_ConsumeLiquidFlammable_float_float(ctx, (frame[0].o), (jfloat(0.2f)), (frame[1].f));
	LINE_NUMBER(17);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_world_consumers_ConsumeLiquidFlammable(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/ConsumeLiquidFlammable:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_consumers_ConsumeLiquidFlammable(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(20);
	init_mindustry_world_consumers_ConsumeLiquidFlammable_float(ctx, (frame[0].o), (jfloat(0.2f)));
	LINE_NUMBER(21);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_consumers_ConsumeLiquidFlammable_display_mindustry_world_meta_Stats(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/ConsumeLiquidFlammable:display", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(25);
	sp[0].o = frame[1].o;
	sp += 1;
	if (((jint)((mindustry_world_consumers_Consume *) NULL_CHECK((frame[0].o)))->F_booster) == 0) goto label_1;
	}
	clinit_mindustry_world_meta_Stat(ctx);
	(sp++)->o = SF_mindustry_world_meta_Stat_booster;
	goto label_2;
label_1:;
	clinit_mindustry_world_meta_Stat(ctx);
	(sp++)->o = SF_mindustry_world_meta_Stat_input;
label_2:;
	{
	sp -= 2;
	{ /* InvokeDynamic */
		clinit_mindustry_world_consumers_ConsumeLiquidFlammable_invoke_arc_func_Floatf_1(ctx);
		auto proxy = (mindustry_world_consumers_ConsumeLiquidFlammable_invoke_arc_func_Floatf_1 *) gcAlloc(ctx, &class_mindustry_world_consumers_ConsumeLiquidFlammable_invoke_arc_func_Floatf_1);
		sp[2].o = (jobject) proxy;
	}
	jfloat temp0 = ((jfloat)((mindustry_world_consumers_ConsumeLiquidBase *) NULL_CHECK((frame[0].o)))->F_amount) * (jfloat(60.0f));
	sp[3].o = (jobject)((mindustry_world_consumers_ConsumeLiquidFilter *) NULL_CHECK((frame[0].o)))->F_filter;
	sp[2].o = (jobject)SM_mindustry_world_meta_StatValues_liquidEffMultiplier_arc_func_Floatf_float_arc_func_Boolf_R_mindustry_world_meta_StatValue(ctx, sp[2].o, temp0, sp[3].o);
	((func_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_world_meta_StatValue) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_world_meta_StatValue])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(26);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_world_consumers_ConsumeLiquidFlammable_liquidEfficiencyMultiplier_mindustry_type_Liquid_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/ConsumeLiquidFlammable:liquidEfficiencyMultiplier", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(30);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_type_Liquid *) NULL_CHECK((frame[1].o)))->F_flammability);
	}

	popStackFrame(ctx);
}

jfloat SM_mindustry_world_consumers_ConsumeLiquidFlammable_lambda$display$0_mindustry_type_Liquid_R_float(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/ConsumeLiquidFlammable:lambda$display$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_consumers_ConsumeLiquidFlammable(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(25);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_type_Liquid *) NULL_CHECK((frame[0].o)))->F_flammability);
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_consumers_ConsumeLiquidFlammable_lambda$new$0_mindustry_type_Liquid_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/ConsumeLiquidFlammable:lambda$new$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(12);
	if ((floatCompare(((jfloat)((mindustry_type_Liquid *) NULL_CHECK((frame[1].o)))->F_flammability), ((jfloat)((mindustry_world_consumers_ConsumeLiquidFlammable *) NULL_CHECK((frame[0].o)))->F_minFlammability), -1)) < 0) goto label_1;
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

void *vtable_mindustry_world_consumers_ConsumeLiquidFlammable[] {
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
	(void *) M_mindustry_world_consumers_ConsumeLiquidFilter_apply_mindustry_world_Block,
	(void *) M_mindustry_world_consumers_Consume_optional_boolean_boolean_R_mindustry_world_consumers_Consume,
	(void *) M_mindustry_world_consumers_Consume_boost_R_mindustry_world_consumers_Consume,
	(void *) M_mindustry_world_consumers_Consume_update_boolean_R_mindustry_world_consumers_Consume,
	(void *) M_mindustry_world_consumers_Consume_ignore_R_boolean,
	(void *) M_mindustry_world_consumers_ConsumeLiquidFilter_build_mindustry_gen_Building_arc_scene_ui_layout_Table,
	(void *) M_mindustry_world_consumers_Consume_trigger_mindustry_gen_Building,
	(void *) M_mindustry_world_consumers_ConsumeLiquidFilter_update_mindustry_gen_Building,
	(void *) M_mindustry_world_consumers_ConsumeLiquidFilter_efficiency_mindustry_gen_Building_R_float,
	(void *) M_mindustry_world_consumers_ConsumeLiquidFilter_efficiencyMultiplier_mindustry_gen_Building_R_float,
	(void *) M_mindustry_world_consumers_ConsumeLiquidFlammable_display_mindustry_world_meta_Stats,
	(void *) M_mindustry_world_consumers_ConsumeLiquidFilter_consumes_mindustry_type_Liquid_R_boolean,
	(void *) M_mindustry_world_consumers_ConsumeLiquidFilter_getConsumed_mindustry_gen_Building_R_mindustry_type_Liquid,
	(void *) M_mindustry_world_consumers_ConsumeLiquidFlammable_liquidEfficiencyMultiplier_mindustry_type_Liquid_R_float,
	(void *) M_mindustry_world_consumers_ConsumeLiquidFilter_lambda$build$1_mindustry_ui_MultiReqImage_mindustry_gen_Building_mindustry_type_Liquid,
	(void *) M_mindustry_world_consumers_ConsumeLiquidFilter_lambda$build$2_mindustry_gen_Building_mindustry_type_Liquid_R_boolean,
	(void *) M_mindustry_world_consumers_ConsumeLiquidFilter_lambda$build$0_mindustry_type_Liquid_R_boolean,
	(void *) M_mindustry_world_consumers_ConsumeLiquidFlammable_lambda$new$0_mindustry_type_Liquid_R_boolean,
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
	{ "consumes", "(Lmindustry/type/Liquid;)Z" },
	{ "getConsumed", "(Lmindustry/gen/Building;)Lmindustry/type/Liquid;" },
	{ "liquidEfficiencyMultiplier", "(Lmindustry/type/Liquid;)F" },
	{ "lambda$build$1", "(Lmindustry/ui/MultiReqImage;Lmindustry/gen/Building;Lmindustry/type/Liquid;)V" },
	{ "lambda$build$2", "(Lmindustry/gen/Building;Lmindustry/type/Liquid;)Z" },
	{ "lambda$build$0", "(Lmindustry/type/Liquid;)Z" },
	{ "lambda$new$0", "(Lmindustry/type/Liquid;)Z" },
};

static FieldMetadata fields[] {
	{ "minFlammability", &class_float, offsetof(mindustry_world_consumers_ConsumeLiquidFlammable, F_minFlammability), "F", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_consumers_ConsumeLiquidFlammable_float_float, 0, "(FF)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_world_consumers_ConsumeLiquidFlammable_float, 0, "(F)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_world_consumers_ConsumeLiquidFlammable, 0, "()V", 1 },
	{ "display", (intptr_t) M_mindustry_world_consumers_ConsumeLiquidFlammable_display_mindustry_world_meta_Stats, VTABLE_mindustry_world_consumers_ConsumeLiquidFlammable_display_mindustry_world_meta_Stats, "(Lmindustry/world/meta/Stats;)V", 1 },
	{ "liquidEfficiencyMultiplier", (intptr_t) M_mindustry_world_consumers_ConsumeLiquidFlammable_liquidEfficiencyMultiplier_mindustry_type_Liquid_R_float, VTABLE_mindustry_world_consumers_ConsumeLiquidFlammable_liquidEfficiencyMultiplier_mindustry_type_Liquid_R_float, "(Lmindustry/type/Liquid;)F", 1 },
	{ "lambda$display$0", (intptr_t) SM_mindustry_world_consumers_ConsumeLiquidFlammable_lambda$display$0_mindustry_type_Liquid_R_float, 0, "(Lmindustry/type/Liquid;)F", 4106 },
	{ "lambda$new$0", (intptr_t) M_mindustry_world_consumers_ConsumeLiquidFlammable_lambda$new$0_mindustry_type_Liquid_R_boolean, VTABLE_mindustry_world_consumers_ConsumeLiquidFlammable_lambda$new$0_mindustry_type_Liquid_R_boolean, "(Lmindustry/type/Liquid;)Z", 4098 },
};

Class class_mindustry_world_consumers_ConsumeLiquidFlammable{
		.nativeName = (intptr_t) "mindustry/world/consumers/ConsumeLiquidFlammable",
		.parentClass = (intptr_t) &class_mindustry_world_consumers_ConsumeLiquidFilter,
		.size = sizeof(mindustry_world_consumers_ConsumeLiquidFlammable),
		.classVtable = (intptr_t) vtable_mindustry_world_consumers_ConsumeLiquidFlammable,
		.staticInitializer = (intptr_t) clinit_mindustry_world_consumers_ConsumeLiquidFlammable,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_world_consumers_ConsumeLiquidFlammable,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 7,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 29,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_consumers_ConsumeLiquidFlammable = registerClass(&class_mindustry_world_consumers_ConsumeLiquidFlammable);

}
