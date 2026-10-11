#include "mindustry/world/consumers/ConsumeItemList.h"
#include "mindustry/world/consumers/ConsumeItemFilter.h"
#include "java/lang/Object.h"
#include "mindustry/world/consumers/ConsumeItemList_invoke_arc_func_Boolf_1.h"
#include "arc/struct/ObjectFloatMap.h"
#include "mindustry/world/consumers/Consume.h"
#include "mindustry/world/consumers/ConsumeItemList.h"
#include "mindustry/type/Item.h"
#include "java/lang/Float.h"
#include "arc/func/Boolf.h"
#include "mindustry/gen/Building.h"

extern "C" {


void mark_mindustry_world_consumers_ConsumeItemList(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_world_consumers_ConsumeItemList *) object;
	if (self->F_itemMultipliers)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_itemMultipliers)->clazz)->markFunction)((jobject) self->F_itemMultipliers, mark, depth + 1);
}

void clinit_mindustry_world_consumers_ConsumeItemList(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_world_consumers_ConsumeItemFilter(ctx);
}

void init_mindustry_world_consumers_ConsumeItemList_Array1_mindustry_type_Item(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/ConsumeItemList:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_consumers_ConsumeItemList(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(11);
	init_mindustry_world_consumers_ConsumeItemList(ctx, (frame[0].o));
	LINE_NUMBER(12);
	frame[2].o = (frame[1].o);
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_2:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_3;
	}
	{
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(13);
	sp[0].o = (jobject)((mindustry_world_consumers_ConsumeItemList *) NULL_CHECK((frame[0].o)))->F_itemMultipliers;
	((func_arc_struct_ObjectFloatMap_put_java_lang_Object_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectFloatMap_put_java_lang_Object_float])(ctx, sp[0].o, (frame[5].o), (jfloat(1)));
	LINE_NUMBER(12);
	INST_IINC(4, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(15);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void init_mindustry_world_consumers_ConsumeItemList(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/ConsumeItemList:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_consumers_ConsumeItemList(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(17);
	init_mindustry_world_consumers_ConsumeItemFilter(ctx, (frame[0].o));
	LINE_NUMBER(8);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectFloatMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectFloatMap);
	init_arc_struct_ObjectFloatMap(ctx, sp[1].o);
	((mindustry_world_consumers_ConsumeItemList *) NULL_CHECK(sp[0].o))->F_itemMultipliers = (jref) sp[1].o;
	LINE_NUMBER(18);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_world_consumers_ConsumeItemList_invoke_arc_func_Boolf_1(ctx);
		auto proxy = (mindustry_world_consumers_ConsumeItemList_invoke_arc_func_Boolf_1 *) gcAlloc(ctx, &class_mindustry_world_consumers_ConsumeItemList_invoke_arc_func_Boolf_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((mindustry_world_consumers_ConsumeItemFilter *) NULL_CHECK(sp[0].o))->F_filter = (jref) sp[1].o;
	LINE_NUMBER(19);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_consumers_ConsumeItemList_setMultipliers_Array1_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/ConsumeItemList:setMultipliers", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(23);
	frame[2].i = (jint(0));
	}
label_1:;
	{
	if ((frame[2].i) >= (((jarray) nullCheck(ctx, (frame[1].o)))->length)) goto label_2;
	}
	{
	LINE_NUMBER(24);
	sp[0].o = (jobject)((mindustry_world_consumers_ConsumeItemList *) NULL_CHECK((frame[0].o)))->F_itemMultipliers;
	sp[1].o = checkCast(ctx, &class_mindustry_type_Item, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[2].i))));
	jfloat temp0 = (jfloat)((func_java_lang_Float_floatValue_R_float) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Float, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), ((frame[2].i) + (jint(1))))))))->vtable)[VTABLE_java_lang_Float_floatValue_R_float])(ctx, (checkCast(ctx, &class_java_lang_Float, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), ((frame[2].i) + (jint(1))))))));
	((func_arc_struct_ObjectFloatMap_put_java_lang_Object_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectFloatMap_put_java_lang_Object_float])(ctx, sp[0].o, sp[1].o, temp0);
	LINE_NUMBER(23);
	INST_IINC(2, 2);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(26);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jfloat M_mindustry_world_consumers_ConsumeItemList_efficiencyMultiplier_mindustry_gen_Building_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/ConsumeItemList:efficiencyMultiplier", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(30);
	sp[0].o = (jobject)((func_mindustry_world_consumers_ConsumeItemList_getConsumed_mindustry_gen_Building_R_mindustry_type_Item) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_consumers_ConsumeItemList_getConsumed_mindustry_gen_Building_R_mindustry_type_Item])(ctx, (frame[0].o), (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(31);
	sp[0].o = (jobject)((mindustry_world_consumers_ConsumeItemList *) NULL_CHECK((frame[0].o)))->F_itemMultipliers;
	jfloat temp0 = (jfloat)((func_arc_struct_ObjectFloatMap_get_java_lang_Object_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectFloatMap_get_java_lang_Object_float_R_float])(ctx, sp[0].o, (frame[2].o), (jfloat(1)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_consumers_ConsumeItemList_lambda$new$0_mindustry_type_Item_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/ConsumeItemList:lambda$new$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(18);
	sp[0].o = (jobject)((mindustry_world_consumers_ConsumeItemList *) NULL_CHECK((frame[0].o)))->F_itemMultipliers;
	jint temp0 = (jint)((func_arc_struct_ObjectFloatMap_containsKey_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectFloatMap_containsKey_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_world_consumers_ConsumeItemList[] {
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
	(void *) M_mindustry_world_consumers_ConsumeItemList_efficiencyMultiplier_mindustry_gen_Building_R_float,
	(void *) M_mindustry_world_consumers_ConsumeItemFilter_display_mindustry_world_meta_Stats,
	(void *) M_mindustry_world_consumers_ConsumeItemFilter_getConsumed_mindustry_gen_Building_R_mindustry_type_Item,
	(void *) M_mindustry_world_consumers_ConsumeItemFilter_itemEfficiencyMultiplier_mindustry_type_Item_R_float,
	(void *) M_mindustry_world_consumers_ConsumeItemFilter_lambda$build$0_mindustry_type_Item_R_boolean,
	(void *) M_mindustry_world_consumers_ConsumeItemList_setMultipliers_Array1_java_lang_Object,
	(void *) M_mindustry_world_consumers_ConsumeItemList_lambda$new$0_mindustry_type_Item_R_boolean,
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
	{ "setMultipliers", "([Ljava/lang/Object;)V" },
	{ "lambda$new$0", "(Lmindustry/type/Item;)Z" },
};

static FieldMetadata fields[] {
	{ "itemMultipliers", &class_arc_struct_ObjectFloatMap, offsetof(mindustry_world_consumers_ConsumeItemList, F_itemMultipliers), "Larc/struct/ObjectFloatMap;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_consumers_ConsumeItemList_Array1_mindustry_type_Item, 0, "([Lmindustry/type/Item;)V", 129 },
	{ "<init>", (intptr_t) init_mindustry_world_consumers_ConsumeItemList, 0, "()V", 1 },
	{ "setMultipliers", (intptr_t) M_mindustry_world_consumers_ConsumeItemList_setMultipliers_Array1_java_lang_Object, VTABLE_mindustry_world_consumers_ConsumeItemList_setMultipliers_Array1_java_lang_Object, "([Ljava/lang/Object;)V", 129 },
	{ "efficiencyMultiplier", (intptr_t) M_mindustry_world_consumers_ConsumeItemList_efficiencyMultiplier_mindustry_gen_Building_R_float, VTABLE_mindustry_world_consumers_ConsumeItemList_efficiencyMultiplier_mindustry_gen_Building_R_float, "(Lmindustry/gen/Building;)F", 1 },
	{ "lambda$new$0", (intptr_t) M_mindustry_world_consumers_ConsumeItemList_lambda$new$0_mindustry_type_Item_R_boolean, VTABLE_mindustry_world_consumers_ConsumeItemList_lambda$new$0_mindustry_type_Item_R_boolean, "(Lmindustry/type/Item;)Z", 4098 },
};

Class class_mindustry_world_consumers_ConsumeItemList{
		.nativeName = (intptr_t) "mindustry/world/consumers/ConsumeItemList",
		.parentClass = (intptr_t) &class_mindustry_world_consumers_ConsumeItemFilter,
		.size = sizeof(mindustry_world_consumers_ConsumeItemList),
		.classVtable = (intptr_t) vtable_mindustry_world_consumers_ConsumeItemList,
		.staticInitializer = (intptr_t) clinit_mindustry_world_consumers_ConsumeItemList,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_world_consumers_ConsumeItemList,
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
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 27,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_consumers_ConsumeItemList = registerClass(&class_mindustry_world_consumers_ConsumeItemList);

}
