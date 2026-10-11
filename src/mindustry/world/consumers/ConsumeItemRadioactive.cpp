#include "mindustry/world/consumers/ConsumeItemRadioactive.h"
#include "mindustry/world/consumers/ConsumeItemFilter.h"
#include "java/lang/Object.h"
#include "mindustry/world/consumers/ConsumeItemRadioactive.h"
#include "mindustry/world/consumers/ConsumeItemRadioactive_invoke_arc_func_Boolf_1.h"
#include "mindustry/world/consumers/ConsumeItemEfficiency.h"
#include "mindustry/world/consumers/Consume.h"
#include "mindustry/type/Item.h"
#include "arc/func/Boolf.h"

extern "C" {


void mark_mindustry_world_consumers_ConsumeItemRadioactive(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_world_consumers_ConsumeItemEfficiency(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_world_consumers_ConsumeItemRadioactive *) object;
}

void clinit_mindustry_world_consumers_ConsumeItemRadioactive(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_world_consumers_ConsumeItemEfficiency(ctx);
}

void init_mindustry_world_consumers_ConsumeItemRadioactive_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/ConsumeItemRadioactive:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_consumers_ConsumeItemRadioactive(ctx);
	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(8);
	init_mindustry_world_consumers_ConsumeItemEfficiency(ctx, (frame[0].o));
	LINE_NUMBER(9);
	((mindustry_world_consumers_ConsumeItemRadioactive *) NULL_CHECK((frame[0].o)))->F_minRadioactivity = (frame[1].f);
	LINE_NUMBER(10);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_world_consumers_ConsumeItemRadioactive_invoke_arc_func_Boolf_1(ctx);
		auto proxy = (mindustry_world_consumers_ConsumeItemRadioactive_invoke_arc_func_Boolf_1 *) gcAlloc(ctx, &class_mindustry_world_consumers_ConsumeItemRadioactive_invoke_arc_func_Boolf_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((mindustry_world_consumers_ConsumeItemFilter *) NULL_CHECK(sp[0].o))->F_filter = (jref) sp[1].o;
	LINE_NUMBER(11);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_world_consumers_ConsumeItemRadioactive(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/ConsumeItemRadioactive:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_consumers_ConsumeItemRadioactive(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(14);
	init_mindustry_world_consumers_ConsumeItemRadioactive_float(ctx, (frame[0].o), (jfloat(0.2f)));
	LINE_NUMBER(15);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_world_consumers_ConsumeItemRadioactive_itemEfficiencyMultiplier_mindustry_type_Item_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/ConsumeItemRadioactive:itemEfficiencyMultiplier", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(19);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_type_Item *) NULL_CHECK((frame[1].o)))->F_radioactivity);
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_consumers_ConsumeItemRadioactive_lambda$new$0_mindustry_type_Item_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/ConsumeItemRadioactive:lambda$new$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(10);
	if ((floatCompare(((jfloat)((mindustry_type_Item *) NULL_CHECK((frame[1].o)))->F_radioactivity), ((jfloat)((mindustry_world_consumers_ConsumeItemRadioactive *) NULL_CHECK((frame[0].o)))->F_minRadioactivity), -1)) < 0) goto label_1;
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

void *vtable_mindustry_world_consumers_ConsumeItemRadioactive[] {
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
	(void *) M_mindustry_world_consumers_ConsumeItemFilter_apply_mindustry_world_Block,
	(void *) M_mindustry_world_consumers_Consume_optional_boolean_boolean_R_mindustry_world_consumers_Consume,
	(void *) M_mindustry_world_consumers_Consume_boost_R_mindustry_world_consumers_Consume,
	(void *) M_mindustry_world_consumers_Consume_update_boolean_R_mindustry_world_consumers_Consume,
	(void *) M_mindustry_world_consumers_Consume_ignore_R_boolean,
	(void *) M_mindustry_world_consumers_ConsumeItemFilter_build_mindustry_gen_Building_arc_scene_ui_layout_Table,
	(void *) M_mindustry_world_consumers_ConsumeItemFilter_trigger_mindustry_gen_Building,
	(void *) M_mindustry_world_consumers_ConsumeItemFilter_update_mindustry_gen_Building,
	(void *) M_mindustry_world_consumers_ConsumeItemFilter_efficiency_mindustry_gen_Building_R_float,
	(void *) M_mindustry_world_consumers_ConsumeItemFilter_efficiencyMultiplier_mindustry_gen_Building_R_float,
	(void *) M_mindustry_world_consumers_ConsumeItemEfficiency_display_mindustry_world_meta_Stats,
	(void *) M_mindustry_world_consumers_ConsumeItemFilter_getConsumed_mindustry_gen_Building_R_mindustry_type_Item,
	(void *) M_mindustry_world_consumers_ConsumeItemRadioactive_itemEfficiencyMultiplier_mindustry_type_Item_R_float,
	(void *) M_mindustry_world_consumers_ConsumeItemFilter_lambda$build$0_mindustry_type_Item_R_boolean,
	(void *) M_mindustry_world_consumers_ConsumeItemRadioactive_lambda$new$0_mindustry_type_Item_R_boolean,
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
	{ "getConsumed", "(Lmindustry/gen/Building;)Lmindustry/type/Item;" },
	{ "itemEfficiencyMultiplier", "(Lmindustry/type/Item;)F" },
	{ "lambda$build$0", "(Lmindustry/type/Item;)Z" },
	{ "lambda$new$0", "(Lmindustry/type/Item;)Z" },
};

static FieldMetadata fields[] {
	{ "minRadioactivity", &class_float, offsetof(mindustry_world_consumers_ConsumeItemRadioactive, F_minRadioactivity), "F", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_consumers_ConsumeItemRadioactive_float, 0, "(F)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_world_consumers_ConsumeItemRadioactive, 0, "()V", 1 },
	{ "itemEfficiencyMultiplier", (intptr_t) M_mindustry_world_consumers_ConsumeItemRadioactive_itemEfficiencyMultiplier_mindustry_type_Item_R_float, VTABLE_mindustry_world_consumers_ConsumeItemRadioactive_itemEfficiencyMultiplier_mindustry_type_Item_R_float, "(Lmindustry/type/Item;)F", 1 },
	{ "lambda$new$0", (intptr_t) M_mindustry_world_consumers_ConsumeItemRadioactive_lambda$new$0_mindustry_type_Item_R_boolean, VTABLE_mindustry_world_consumers_ConsumeItemRadioactive_lambda$new$0_mindustry_type_Item_R_boolean, "(Lmindustry/type/Item;)Z", 4098 },
};

Class class_mindustry_world_consumers_ConsumeItemRadioactive{
		.nativeName = (intptr_t) "mindustry/world/consumers/ConsumeItemRadioactive",
		.parentClass = (intptr_t) &class_mindustry_world_consumers_ConsumeItemEfficiency,
		.size = sizeof(mindustry_world_consumers_ConsumeItemRadioactive),
		.classVtable = (intptr_t) vtable_mindustry_world_consumers_ConsumeItemRadioactive,
		.staticInitializer = (intptr_t) clinit_mindustry_world_consumers_ConsumeItemRadioactive,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_world_consumers_ConsumeItemRadioactive,
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
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 26,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_consumers_ConsumeItemRadioactive = registerClass(&class_mindustry_world_consumers_ConsumeItemRadioactive);

}
