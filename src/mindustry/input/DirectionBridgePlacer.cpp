#include "mindustry/input/DirectionBridgePlacer.h"
#include "java/lang/Object.h"
#include "mindustry/world/Block.h"
#include "mindustry/input/BridgePlacer.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "mindustry/entities/units/BuildPlan.h"
#include "mindustry/input/DirectionBridgePlacer.h"
#include "mindustry/world/blocks/distribution/DirectionBridge.h"

extern "C" {


void mark_mindustry_input_DirectionBridgePlacer(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_input_DirectionBridgePlacer *) object;
	if (self->F_bridge)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_bridge)->clazz)->markFunction)((jobject) self->F_bridge, mark, depth + 1);
}

void clinit_mindustry_input_DirectionBridgePlacer(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_input_DirectionBridgePlacer_mindustry_world_blocks_distribution_DirectionBridge(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/DirectionBridgePlacer:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_DirectionBridgePlacer(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(53);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(54);
	((mindustry_input_DirectionBridgePlacer *) NULL_CHECK((frame[0].o)))->F_bridge = (jref) (frame[1].o);
	LINE_NUMBER(55);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_input_DirectionBridgePlacer_unlockedNow_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/DirectionBridgePlacer:unlockedNow", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(59);
	sp[0].o = (jobject)((mindustry_input_DirectionBridgePlacer *) NULL_CHECK((frame[0].o)))->F_bridge;
	jint temp0 = (jint)((func_mindustry_world_blocks_distribution_DirectionBridge_unlockedNow_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_distribution_DirectionBridge_unlockedNow_R_boolean])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_input_DirectionBridgePlacer_positionsValid_int_int_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/DirectionBridgePlacer:positionsValid", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(64);
	sp[0].o = (jobject)((mindustry_input_DirectionBridgePlacer *) NULL_CHECK((frame[0].o)))->F_bridge;
	jint temp0 = (jint)((func_mindustry_world_blocks_distribution_DirectionBridge_positionsValid_int_int_int_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_distribution_DirectionBridge_positionsValid_int_int_int_int_R_boolean])(ctx, sp[0].o, (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_mindustry_input_DirectionBridgePlacer_applyToPlans_mindustry_entities_units_BuildPlan_mindustry_entities_units_BuildPlan(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/DirectionBridgePlacer:applyToPlans", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(69);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_input_DirectionBridgePlacer *) NULL_CHECK((frame[0].o)))->F_bridge;
	((mindustry_entities_units_BuildPlan *) NULL_CHECK(sp[0].o))->F_block = (jref) sp[1].o;
	LINE_NUMBER(70);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_input_DirectionBridgePlacer *) NULL_CHECK((frame[0].o)))->F_bridge;
	((mindustry_entities_units_BuildPlan *) NULL_CHECK(sp[0].o))->F_block = (jref) sp[1].o;
	LINE_NUMBER(71);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_input_DirectionBridgePlacer[] {
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
	(void *) M_mindustry_input_DirectionBridgePlacer_unlockedNow_R_boolean,
	(void *) M_mindustry_input_DirectionBridgePlacer_positionsValid_int_int_int_int_R_boolean,
	(void *) M_mindustry_input_DirectionBridgePlacer_applyToPlans_mindustry_entities_units_BuildPlan_mindustry_entities_units_BuildPlan,
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
	{ "unlockedNow", "()Z" },
	{ "positionsValid", "(IIII)Z" },
	{ "applyToPlans", "(Lmindustry/entities/units/BuildPlan;Lmindustry/entities/units/BuildPlan;)V" },
};

static jclass interfaces[] { &class_mindustry_input_BridgePlacer, };

static FieldMetadata fields[] {
	{ "bridge", &class_mindustry_world_blocks_distribution_DirectionBridge, offsetof(mindustry_input_DirectionBridgePlacer, F_bridge), "Lmindustry/world/blocks/distribution/DirectionBridge;", 18 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_input_DirectionBridgePlacer_mindustry_world_blocks_distribution_DirectionBridge, 0, "(Lmindustry/world/blocks/distribution/DirectionBridge;)V", 0 },
	{ "unlockedNow", (intptr_t) M_mindustry_input_DirectionBridgePlacer_unlockedNow_R_boolean, VTABLE_mindustry_input_DirectionBridgePlacer_unlockedNow_R_boolean, "()Z", 1 },
	{ "positionsValid", (intptr_t) M_mindustry_input_DirectionBridgePlacer_positionsValid_int_int_int_int_R_boolean, VTABLE_mindustry_input_DirectionBridgePlacer_positionsValid_int_int_int_int_R_boolean, "(IIII)Z", 1 },
	{ "applyToPlans", (intptr_t) M_mindustry_input_DirectionBridgePlacer_applyToPlans_mindustry_entities_units_BuildPlan_mindustry_entities_units_BuildPlan, VTABLE_mindustry_input_DirectionBridgePlacer_applyToPlans_mindustry_entities_units_BuildPlan_mindustry_entities_units_BuildPlan, "(Lmindustry/entities/units/BuildPlan;Lmindustry/entities/units/BuildPlan;)V", 1 },
};

Class class_mindustry_input_DirectionBridgePlacer{
		.nativeName = (intptr_t) "mindustry/input/DirectionBridgePlacer",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_input_DirectionBridgePlacer),
		.classVtable = (intptr_t) vtable_mindustry_input_DirectionBridgePlacer,
		.staticInitializer = (intptr_t) clinit_mindustry_input_DirectionBridgePlacer,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_input_DirectionBridgePlacer,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 14,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_input_DirectionBridgePlacer = registerClass(&class_mindustry_input_DirectionBridgePlacer);

}
