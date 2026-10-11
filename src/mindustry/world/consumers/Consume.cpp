#include "mindustry/world/consumers/Consume.h"
#include "arc/func/Floatf.h"
#include "java/lang/Object.h"
#include "mindustry/world/Block.h"
#include "mindustry/world/meta/Stats.h"
#include "arc/scene/ui/layout/Table.h"
#include "mindustry/world/consumers/Consume.h"
#include "mindustry/world/consumers/Consume_invoke_arc_func_Floatf_1.h"
#include "mindustry/gen/Building.h"

extern "C" {


void mark_mindustry_world_consumers_Consume(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_world_consumers_Consume *) object;
	if (self->F_multiplier)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_multiplier)->clazz)->markFunction)((jobject) self->F_multiplier, mark, depth + 1);
}

void clinit_mindustry_world_consumers_Consume(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_world_consumers_Consume(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/Consume:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_consumers_Consume(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(10);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(16);
	((mindustry_world_consumers_Consume *) NULL_CHECK((frame[0].o)))->F_update = (jint(1));
	LINE_NUMBER(18);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_world_consumers_Consume_invoke_arc_func_Floatf_1(ctx);
		auto proxy = (mindustry_world_consumers_Consume_invoke_arc_func_Floatf_1 *) gcAlloc(ctx, &class_mindustry_world_consumers_Consume_invoke_arc_func_Floatf_1);
		sp[1].o = (jobject) proxy;
	}
	((mindustry_world_consumers_Consume *) NULL_CHECK(sp[0].o))->F_multiplier = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_consumers_Consume_apply_mindustry_world_Block(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/Consume:apply", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(25);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_world_consumers_Consume_optional_boolean_boolean_R_mindustry_world_consumers_Consume(jcontext ctx, jobject self, jbool param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/Consume:optional", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(28);
	((mindustry_world_consumers_Consume *) NULL_CHECK((frame[0].o)))->F_optional = (frame[1].i);
	LINE_NUMBER(29);
	((mindustry_world_consumers_Consume *) NULL_CHECK((frame[0].o)))->F_booster = (frame[2].i);
	LINE_NUMBER(30);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_consumers_Consume_boost_R_mindustry_world_consumers_Consume(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/Consume:boost", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(34);
	sp[0].o = (jobject)((func_mindustry_world_consumers_Consume_optional_boolean_boolean_R_mindustry_world_consumers_Consume) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_consumers_Consume_optional_boolean_boolean_R_mindustry_world_consumers_Consume])(ctx, (frame[0].o), (jint(1)), (jint(1)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_consumers_Consume_update_boolean_R_mindustry_world_consumers_Consume(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/Consume:update", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(38);
	((mindustry_world_consumers_Consume *) NULL_CHECK((frame[0].o)))->F_update = (frame[1].i);
	LINE_NUMBER(39);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_consumers_Consume_ignore_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/Consume:ignore", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(44);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_mindustry_world_consumers_Consume_build_mindustry_gen_Building_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/Consume:build", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	LINE_NUMBER(47);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_consumers_Consume_trigger_mindustry_gen_Building(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/Consume:trigger", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(50);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_consumers_Consume_update_mindustry_gen_Building(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/Consume:update", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(52);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jfloat M_mindustry_world_consumers_Consume_efficiency_mindustry_gen_Building_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/Consume:efficiency", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(56);
	popStackFrame(ctx);
	return (jfloat(1));
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_world_consumers_Consume_efficiencyMultiplier_mindustry_gen_Building_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/Consume:efficiencyMultiplier", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(61);
	popStackFrame(ctx);
	return (jfloat(1));
	}

	popStackFrame(ctx);
}

void M_mindustry_world_consumers_Consume_display_mindustry_world_meta_Stats(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/Consume:display", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(64);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jfloat SM_mindustry_world_consumers_Consume_lambda$new$0_mindustry_gen_Building_R_float(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/Consume:lambda$new$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_consumers_Consume(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(18);
	popStackFrame(ctx);
	return (jfloat(1));
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_world_consumers_Consume[] {
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
	(void *) M_mindustry_world_consumers_Consume_apply_mindustry_world_Block,
	(void *) M_mindustry_world_consumers_Consume_optional_boolean_boolean_R_mindustry_world_consumers_Consume,
	(void *) M_mindustry_world_consumers_Consume_boost_R_mindustry_world_consumers_Consume,
	(void *) M_mindustry_world_consumers_Consume_update_boolean_R_mindustry_world_consumers_Consume,
	(void *) M_mindustry_world_consumers_Consume_ignore_R_boolean,
	(void *) M_mindustry_world_consumers_Consume_build_mindustry_gen_Building_arc_scene_ui_layout_Table,
	(void *) M_mindustry_world_consumers_Consume_trigger_mindustry_gen_Building,
	(void *) M_mindustry_world_consumers_Consume_update_mindustry_gen_Building,
	(void *) M_mindustry_world_consumers_Consume_efficiency_mindustry_gen_Building_R_float,
	(void *) M_mindustry_world_consumers_Consume_efficiencyMultiplier_mindustry_gen_Building_R_float,
	(void *) M_mindustry_world_consumers_Consume_display_mindustry_world_meta_Stats,
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
};

static FieldMetadata fields[] {
	{ "optional", &class_boolean, offsetof(mindustry_world_consumers_Consume, F_optional), "Z", 1 },
	{ "booster", &class_boolean, offsetof(mindustry_world_consumers_Consume, F_booster), "Z", 1 },
	{ "update", &class_boolean, offsetof(mindustry_world_consumers_Consume, F_update), "Z", 1 },
	{ "multiplier", &class_arc_func_Floatf, offsetof(mindustry_world_consumers_Consume, F_multiplier), "Larc/func/Floatf;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_consumers_Consume, 0, "()V", 1 },
	{ "apply", (intptr_t) M_mindustry_world_consumers_Consume_apply_mindustry_world_Block, VTABLE_mindustry_world_consumers_Consume_apply_mindustry_world_Block, "(Lmindustry/world/Block;)V", 1 },
	{ "optional", (intptr_t) M_mindustry_world_consumers_Consume_optional_boolean_boolean_R_mindustry_world_consumers_Consume, VTABLE_mindustry_world_consumers_Consume_optional_boolean_boolean_R_mindustry_world_consumers_Consume, "(ZZ)Lmindustry/world/consumers/Consume;", 1 },
	{ "boost", (intptr_t) M_mindustry_world_consumers_Consume_boost_R_mindustry_world_consumers_Consume, VTABLE_mindustry_world_consumers_Consume_boost_R_mindustry_world_consumers_Consume, "()Lmindustry/world/consumers/Consume;", 1 },
	{ "update", (intptr_t) M_mindustry_world_consumers_Consume_update_boolean_R_mindustry_world_consumers_Consume, VTABLE_mindustry_world_consumers_Consume_update_boolean_R_mindustry_world_consumers_Consume, "(Z)Lmindustry/world/consumers/Consume;", 1 },
	{ "ignore", (intptr_t) M_mindustry_world_consumers_Consume_ignore_R_boolean, VTABLE_mindustry_world_consumers_Consume_ignore_R_boolean, "()Z", 1 },
	{ "build", (intptr_t) M_mindustry_world_consumers_Consume_build_mindustry_gen_Building_arc_scene_ui_layout_Table, VTABLE_mindustry_world_consumers_Consume_build_mindustry_gen_Building_arc_scene_ui_layout_Table, "(Lmindustry/gen/Building;Larc/scene/ui/layout/Table;)V", 1 },
	{ "trigger", (intptr_t) M_mindustry_world_consumers_Consume_trigger_mindustry_gen_Building, VTABLE_mindustry_world_consumers_Consume_trigger_mindustry_gen_Building, "(Lmindustry/gen/Building;)V", 1 },
	{ "update", (intptr_t) M_mindustry_world_consumers_Consume_update_mindustry_gen_Building, VTABLE_mindustry_world_consumers_Consume_update_mindustry_gen_Building, "(Lmindustry/gen/Building;)V", 1 },
	{ "efficiency", (intptr_t) M_mindustry_world_consumers_Consume_efficiency_mindustry_gen_Building_R_float, VTABLE_mindustry_world_consumers_Consume_efficiency_mindustry_gen_Building_R_float, "(Lmindustry/gen/Building;)F", 1 },
	{ "efficiencyMultiplier", (intptr_t) M_mindustry_world_consumers_Consume_efficiencyMultiplier_mindustry_gen_Building_R_float, VTABLE_mindustry_world_consumers_Consume_efficiencyMultiplier_mindustry_gen_Building_R_float, "(Lmindustry/gen/Building;)F", 1 },
	{ "display", (intptr_t) M_mindustry_world_consumers_Consume_display_mindustry_world_meta_Stats, VTABLE_mindustry_world_consumers_Consume_display_mindustry_world_meta_Stats, "(Lmindustry/world/meta/Stats;)V", 1 },
	{ "lambda$new$0", (intptr_t) SM_mindustry_world_consumers_Consume_lambda$new$0_mindustry_gen_Building_R_float, 0, "(Lmindustry/gen/Building;)F", 4106 },
};

Class class_mindustry_world_consumers_Consume{
		.nativeName = (intptr_t) "mindustry/world/consumers/Consume",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_world_consumers_Consume),
		.classVtable = (intptr_t) vtable_mindustry_world_consumers_Consume,
		.staticInitializer = (intptr_t) clinit_mindustry_world_consumers_Consume,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_world_consumers_Consume,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1057,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 13,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 22,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_consumers_Consume = registerClass(&class_mindustry_world_consumers_Consume);

}
