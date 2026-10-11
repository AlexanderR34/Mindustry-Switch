#include "mindustry/world/consumers/ConsumePowerCondition.h"
#include "mindustry/world/consumers/ConsumePower.h"
#include "java/lang/Object.h"
#include "mindustry/world/consumers/Consume.h"
#include "arc/func/Boolf.h"
#include "mindustry/world/consumers/ConsumePowerCondition.h"
#include "mindustry/gen/Building.h"

extern "C" {


void mark_mindustry_world_consumers_ConsumePowerCondition(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_world_consumers_ConsumePowerCondition *) object;
	if (self->F_consume)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_consume)->clazz)->markFunction)((jobject) self->F_consume, mark, depth + 1);
}

void clinit_mindustry_world_consumers_ConsumePowerCondition(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_world_consumers_ConsumePower(ctx);
}

void init_mindustry_world_consumers_ConsumePowerCondition_float_arc_func_Boolf(jcontext ctx, jobject self, jfloat param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/ConsumePowerCondition:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_consumers_ConsumePowerCondition(ctx);
	frame[0].o = self;
	frame[1].f = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(11);
	init_mindustry_world_consumers_ConsumePower_float_float_boolean(ctx, (frame[0].o), (frame[1].f), (jfloat(0)), (jint(0)));
	LINE_NUMBER(12);
	((mindustry_world_consumers_ConsumePowerCondition *) NULL_CHECK((frame[0].o)))->F_consume = (jref) (frame[2].o);
	LINE_NUMBER(13);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_world_consumers_ConsumePowerCondition_requestedPower_mindustry_gen_Building_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/ConsumePowerCondition:requestedPower", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(17);
	sp[0].o = (jobject)((mindustry_world_consumers_ConsumePowerCondition *) NULL_CHECK((frame[0].o)))->F_consume;
	jint temp0 = (jint)((func_arc_func_Boolf_get_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolf, INDEX_arc_func_Boolf_get_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	jfloat temp0 = (jfloat)((mindustry_world_consumers_ConsumePower *) NULL_CHECK((frame[0].o)))->F_usage;
	sp[0].f = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_FCONST(0);
label_2:;
	popStackFrame(ctx);
	INST_FRETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_world_consumers_ConsumePowerCondition[] {
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
	(void *) M_mindustry_world_consumers_ConsumePowerCondition_requestedPower_mindustry_gen_Building_R_float,
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
	{ "consume", &class_arc_func_Boolf, offsetof(mindustry_world_consumers_ConsumePowerCondition, F_consume), "Larc/func/Boolf;", 18 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_consumers_ConsumePowerCondition_float_arc_func_Boolf, 0, "(FLarc/func/Boolf;)V", 1 },
	{ "requestedPower", (intptr_t) M_mindustry_world_consumers_ConsumePowerCondition_requestedPower_mindustry_gen_Building_R_float, VTABLE_mindustry_world_consumers_ConsumePowerCondition_requestedPower_mindustry_gen_Building_R_float, "(Lmindustry/gen/Building;)F", 1 },
};

Class class_mindustry_world_consumers_ConsumePowerCondition{
		.nativeName = (intptr_t) "mindustry/world/consumers/ConsumePowerCondition",
		.parentClass = (intptr_t) &class_mindustry_world_consumers_ConsumePower,
		.size = sizeof(mindustry_world_consumers_ConsumePowerCondition),
		.classVtable = (intptr_t) vtable_mindustry_world_consumers_ConsumePowerCondition,
		.staticInitializer = (intptr_t) clinit_mindustry_world_consumers_ConsumePowerCondition,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_world_consumers_ConsumePowerCondition,
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
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 23,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_consumers_ConsumePowerCondition = registerClass(&class_mindustry_world_consumers_ConsumePowerCondition);

}
