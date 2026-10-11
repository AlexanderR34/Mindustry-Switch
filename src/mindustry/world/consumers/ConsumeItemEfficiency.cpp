#include "mindustry/world/consumers/ConsumeItemEfficiency.h"
#include "mindustry/world/consumers/ConsumeItemFilter.h"
#include "arc/func/Floatf.h"
#include "java/lang/reflect/Field.h"
#include "mindustry/world/meta/Stats.h"
#include "arc/struct/ObjectFloatMap.h"
#include "mindustry/world/meta/StatValue.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/world/meta/StatValues.h"
#include "arc/util/Nullable.h"
#include "java/lang/reflect/Constructor.h"
#include "mindustry/world/meta/Stat.h"
#include "java/lang/Object.h"
#include "mindustry/world/consumers/ConsumeItemEfficiency.h"
#include "mindustry/world/consumers/Consume.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/world/consumers/ConsumeItemEfficiency_invoke_arc_func_Floatf_1.h"
#include "arc/func/Boolf.h"

extern "C" {


void mark_mindustry_world_consumers_ConsumeItemEfficiency(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_world_consumers_ConsumeItemFilter(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_world_consumers_ConsumeItemEfficiency *) object;
	if (self->F_itemDurationMultipliers)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_itemDurationMultipliers)->clazz)->markFunction)((jobject) self->F_itemDurationMultipliers, mark, depth + 1);
}

void clinit_mindustry_world_consumers_ConsumeItemEfficiency(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_world_consumers_ConsumeItemFilter(ctx);
}

void init_mindustry_world_consumers_ConsumeItemEfficiency_arc_func_Boolf(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/ConsumeItemEfficiency:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_consumers_ConsumeItemEfficiency(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(14);
	init_mindustry_world_consumers_ConsumeItemFilter_arc_func_Boolf(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(15);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_world_consumers_ConsumeItemEfficiency(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/ConsumeItemEfficiency:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_consumers_ConsumeItemEfficiency(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(17);
	init_mindustry_world_consumers_ConsumeItemFilter(ctx, (frame[0].o));
	LINE_NUMBER(18);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_consumers_ConsumeItemEfficiency_display_mindustry_world_meta_Stats(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/ConsumeItemEfficiency:display", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(22);
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
		clinit_mindustry_world_consumers_ConsumeItemEfficiency_invoke_arc_func_Floatf_1(ctx);
		auto proxy = (mindustry_world_consumers_ConsumeItemEfficiency_invoke_arc_func_Floatf_1 *) gcAlloc(ctx, &class_mindustry_world_consumers_ConsumeItemEfficiency_invoke_arc_func_Floatf_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	jfloat temp0 = (jfloat)((mindustry_world_meta_Stats *) NULL_CHECK((frame[1].o)))->F_timePeriod;
	sp[3].o = (jobject)((mindustry_world_consumers_ConsumeItemFilter *) NULL_CHECK((frame[0].o)))->F_filter;
	sp[4].o = (jobject)((mindustry_world_consumers_ConsumeItemEfficiency *) NULL_CHECK((frame[0].o)))->F_itemDurationMultipliers;
	sp[2].o = (jobject)SM_mindustry_world_meta_StatValues_itemEffMultiplier_arc_func_Floatf_float_arc_func_Boolf_arc_struct_ObjectFloatMap_R_mindustry_world_meta_StatValue(ctx, sp[2].o, temp0, sp[3].o, sp[4].o);
	((func_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_world_meta_StatValue) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_world_meta_StatValue])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(23);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_world_consumers_ConsumeItemEfficiency;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	{ // Field itemDurationMultipliers
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[0]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[1])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_world_consumers_ConsumeItemEfficiency[] {
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
	(void *) M_mindustry_world_consumers_ConsumeItemFilter_itemEfficiencyMultiplier_mindustry_type_Item_R_float,
	(void *) M_mindustry_world_consumers_ConsumeItemFilter_lambda$build$0_mindustry_type_Item_R_boolean,
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
};

static FieldMetadata fields[] {
	{ "itemDurationMultipliers", &class_arc_struct_ObjectFloatMap, offsetof(mindustry_world_consumers_ConsumeItemEfficiency, F_itemDurationMultipliers), "Larc/struct/ObjectFloatMap;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_consumers_ConsumeItemEfficiency_arc_func_Boolf, 0, "(Larc/func/Boolf;)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_world_consumers_ConsumeItemEfficiency, 0, "()V", 1 },
	{ "display", (intptr_t) M_mindustry_world_consumers_ConsumeItemEfficiency_display_mindustry_world_meta_Stats, VTABLE_mindustry_world_consumers_ConsumeItemEfficiency_display_mindustry_world_meta_Stats, "(Lmindustry/world/meta/Stats;)V", 1 },
};

Class class_mindustry_world_consumers_ConsumeItemEfficiency{
		.nativeName = (intptr_t) "mindustry/world/consumers/ConsumeItemEfficiency",
		.parentClass = (intptr_t) &class_mindustry_world_consumers_ConsumeItemFilter,
		.size = sizeof(mindustry_world_consumers_ConsumeItemEfficiency),
		.classVtable = (intptr_t) vtable_mindustry_world_consumers_ConsumeItemEfficiency,
		.staticInitializer = (intptr_t) clinit_mindustry_world_consumers_ConsumeItemEfficiency,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_world_consumers_ConsumeItemEfficiency,
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
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 25,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_consumers_ConsumeItemEfficiency = registerClass(&class_mindustry_world_consumers_ConsumeItemEfficiency);

}
