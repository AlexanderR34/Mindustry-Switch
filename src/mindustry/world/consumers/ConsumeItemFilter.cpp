#include "mindustry/world/consumers/ConsumeItemFilter.h"
#include "mindustry/ui/MultiReqImage.h"
#include "mindustry/world/consumers/ConsumeItemFilter_invoke_arc_func_Boolf_5.h"
#include "mindustry/world/Block.h"
#include "mindustry/world/consumers/ConsumeItemFilter_invoke_arc_func_Boolp_1.h"
#include "mindustry/world/meta/StatValue.h"
#include "arc/func/Boolp.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "java/lang/reflect/Constructor.h"
#include "arc/func/Cons.h"
#include "mindustry/world/meta/Stat.h"
#include "mindustry/core/ContentLoader.h"
#include "arc/struct/Seq.h"
#include "arc/scene/ui/layout/Cell.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/ui/ReqImage.h"
#include "arc/func/Boolf.h"
#include "mindustry/world/consumers/ConsumeItemFilter.h"
#include "java/lang/reflect/Field.h"
#include "arc/scene/ui/layout/Stack.h"
#include "mindustry/world/meta/Stats.h"
#include "arc/scene/ui/layout/Table.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/world/meta/StatValues.h"
#include "mindustry/type/Item.h"
#include "arc/util/Nullable.h"
#include "mindustry/world/modules/ItemModule.h"
#include "mindustry/gen/Building.h"
#include "arc/scene/Element.h"
#include "java/lang/Object.h"
#include "mindustry/world/consumers/Consume.h"
#include "mindustry/world/consumers/ConsumeItemFilter_invoke_arc_func_Boolf_3.h"
#include "mindustry/world/consumers/ConsumeItemFilter_invoke_arc_func_Cons_2.h"
#include "mindustry/world/consumers/ConsumeItemFilter_invoke_arc_func_Boolf_4.h"
#include "mindustry/Vars.h"
#include "mindustry/world/consumers/ConsumeItemFilter_invoke_arc_func_Cons_3.h"

extern "C" {


void mark_mindustry_world_consumers_ConsumeItemFilter(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_world_consumers_ConsumeItemFilter *) object;
	if (self->F_filter)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_filter)->clazz)->markFunction)((jobject) self->F_filter, mark, depth + 1);
}

void clinit_mindustry_world_consumers_ConsumeItemFilter(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_world_consumers_Consume(ctx);
}

void init_mindustry_world_consumers_ConsumeItemFilter_arc_func_Boolf(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/ConsumeItemFilter:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_consumers_ConsumeItemFilter(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(17);
	init_mindustry_world_consumers_Consume(ctx, (frame[0].o));
	LINE_NUMBER(15);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_world_consumers_ConsumeItemFilter_invoke_arc_func_Boolf_3(ctx);
		auto proxy = (mindustry_world_consumers_ConsumeItemFilter_invoke_arc_func_Boolf_3 *) gcAlloc(ctx, &class_mindustry_world_consumers_ConsumeItemFilter_invoke_arc_func_Boolf_3);
		sp[1].o = (jobject) proxy;
	}
	((mindustry_world_consumers_ConsumeItemFilter *) NULL_CHECK(sp[0].o))->F_filter = (jref) sp[1].o;
	LINE_NUMBER(18);
	((mindustry_world_consumers_ConsumeItemFilter *) NULL_CHECK((frame[0].o)))->F_filter = (jref) (frame[1].o);
	LINE_NUMBER(19);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_world_consumers_ConsumeItemFilter(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/ConsumeItemFilter:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_consumers_ConsumeItemFilter(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(21);
	init_mindustry_world_consumers_Consume(ctx, (frame[0].o));
	LINE_NUMBER(15);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_world_consumers_ConsumeItemFilter_invoke_arc_func_Boolf_4(ctx);
		auto proxy = (mindustry_world_consumers_ConsumeItemFilter_invoke_arc_func_Boolf_4 *) gcAlloc(ctx, &class_mindustry_world_consumers_ConsumeItemFilter_invoke_arc_func_Boolf_4);
		sp[1].o = (jobject) proxy;
	}
	((mindustry_world_consumers_ConsumeItemFilter *) NULL_CHECK(sp[0].o))->F_filter = (jref) sp[1].o;
	LINE_NUMBER(22);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_consumers_ConsumeItemFilter_apply_mindustry_world_Block(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/ConsumeItemFilter:apply", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(26);
	((mindustry_world_Block *) NULL_CHECK((frame[1].o)))->F_hasItems = (jint(1));
	LINE_NUMBER(27);
	((mindustry_world_Block *) NULL_CHECK((frame[1].o)))->F_acceptsItems = (jint(1));
	LINE_NUMBER(28);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_items_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_items_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[1].o = (jobject)((mindustry_world_consumers_ConsumeItemFilter *) NULL_CHECK((frame[0].o)))->F_filter;
	{ /* InvokeDynamic */
		clinit_mindustry_world_consumers_ConsumeItemFilter_invoke_arc_func_Cons_2(ctx);
		auto proxy = (mindustry_world_consumers_ConsumeItemFilter_invoke_arc_func_Cons_2 *) gcAlloc(ctx, &class_mindustry_world_consumers_ConsumeItemFilter_invoke_arc_func_Cons_2);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[2].o = (jobject) proxy;
	}
	((func_arc_struct_Seq_each_arc_func_Boolf_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_each_arc_func_Boolf_arc_func_Cons])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(33);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_consumers_ConsumeItemFilter_build_mindustry_gen_Building_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/ConsumeItemFilter:build", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(37);
	clinit_mindustry_ui_MultiReqImage(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_MultiReqImage);
	init_mindustry_ui_MultiReqImage(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(38);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_items_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_items_R_arc_struct_Seq])(ctx, sp[0].o);
	{ /* InvokeDynamic */
		clinit_mindustry_world_consumers_ConsumeItemFilter_invoke_arc_func_Boolf_5(ctx);
		auto proxy = (mindustry_world_consumers_ConsumeItemFilter_invoke_arc_func_Boolf_5 *) gcAlloc(ctx, &class_mindustry_world_consumers_ConsumeItemFilter_invoke_arc_func_Boolf_5);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_world_consumers_ConsumeItemFilter_invoke_arc_func_Cons_3(ctx);
		auto proxy = (mindustry_world_consumers_ConsumeItemFilter_invoke_arc_func_Cons_3 *) gcAlloc(ctx, &class_mindustry_world_consumers_ConsumeItemFilter_invoke_arc_func_Cons_3);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[3].o);
		sp[2].o = (jobject) proxy;
	}
	((func_arc_struct_Seq_each_arc_func_Boolf_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_each_arc_func_Boolf_arc_func_Cons])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(41);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, (frame[2].o), (frame[3].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(32.0f)));
	LINE_NUMBER(42);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_consumers_ConsumeItemFilter_update_mindustry_gen_Building(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/ConsumeItemFilter:update", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(46);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_consumers_ConsumeItemFilter_trigger_mindustry_gen_Building(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/ConsumeItemFilter:trigger", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(50);
	sp[0].o = (jobject)((func_mindustry_world_consumers_ConsumeItemFilter_getConsumed_mindustry_gen_Building_R_mindustry_type_Item) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_consumers_ConsumeItemFilter_getConsumed_mindustry_gen_Building_R_mindustry_type_Item])(ctx, (frame[0].o), (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(51);
	if ((frame[2].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(52);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_items;
	((func_mindustry_world_modules_ItemModule_remove_mindustry_type_Item_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_remove_mindustry_type_Item_int])(ctx, sp[0].o, (frame[2].o), (jint(1)));
	}
label_2:;
	LINE_NUMBER(54);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jfloat M_mindustry_world_consumers_ConsumeItemFilter_efficiency_mindustry_gen_Building_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/ConsumeItemFilter:efficiency", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(58);
	jint temp0 = (jint)((func_mindustry_gen_Building_consumeTriggerValid_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_consumeTriggerValid_R_boolean])(ctx, (frame[1].o));
	if (temp0 != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_consumers_ConsumeItemFilter_getConsumed_mindustry_gen_Building_R_mindustry_type_Item) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_consumers_ConsumeItemFilter_getConsumed_mindustry_gen_Building_R_mindustry_type_Item])(ctx, (frame[0].o), (frame[1].o));
	if (sp[0].o == nullptr) goto label_2;
	}
label_1:;
	INST_FCONST(1);
	goto label_3;
label_2:;
	INST_FCONST(0);
label_3:;
	popStackFrame(ctx);
	INST_FRETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_world_consumers_ConsumeItemFilter_getConsumed_mindustry_gen_Building_R_mindustry_type_Item(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/ConsumeItemFilter:getConsumed", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(62);
	frame[2].i = (jint(0));
	}
label_1:;
	{
	jint temp0 = frame[2].i;
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_items_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_items_R_arc_struct_Seq])(ctx, sp[0].o);
	if (temp0 >= ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_2;
	}
	{
	LINE_NUMBER(63);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_item_int_R_mindustry_type_Item) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_item_int_R_mindustry_type_Item])(ctx, sp[0].o, (frame[2].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(64);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_items;
	jint temp0 = (jint)((func_mindustry_world_modules_ItemModule_has_mindustry_type_Item_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_has_mindustry_type_Item_R_boolean])(ctx, sp[0].o, (frame[3].o));
	if (temp0 == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((mindustry_world_consumers_ConsumeItemFilter *) NULL_CHECK((frame[0].o)))->F_filter;
	jint temp0 = (jint)((func_arc_func_Boolf_get_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolf, INDEX_arc_func_Boolf_get_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, (frame[3].o));
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(65);
	popStackFrame(ctx);
	return (frame[3].o);
	}
label_5:;
	{
	LINE_NUMBER(62);
	INST_IINC(2, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(68);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

void M_mindustry_world_consumers_ConsumeItemFilter_display_mindustry_world_meta_Stats(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/ConsumeItemFilter:display", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(73);
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
	jfloat temp0 = (jfloat)((mindustry_world_meta_Stats *) NULL_CHECK((frame[1].o)))->F_timePeriod;
	sp[2].o = (jobject)((mindustry_world_consumers_ConsumeItemFilter *) NULL_CHECK((frame[0].o)))->F_filter;
	sp[2].o = (jobject)SM_mindustry_world_meta_StatValues_items_float_arc_func_Boolf_R_mindustry_world_meta_StatValue(ctx, temp0, sp[2].o);
	((func_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_world_meta_StatValue) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_world_meta_StatValue])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(74);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_world_consumers_ConsumeItemFilter_efficiencyMultiplier_mindustry_gen_Building_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/ConsumeItemFilter:efficiencyMultiplier", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(78);
	sp[0].o = (jobject)((func_mindustry_world_consumers_ConsumeItemFilter_getConsumed_mindustry_gen_Building_R_mindustry_type_Item) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_consumers_ConsumeItemFilter_getConsumed_mindustry_gen_Building_R_mindustry_type_Item])(ctx, (frame[0].o), (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(79);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	INST_FCONST(0);
	goto label_3;
label_2:;
	{
	jfloat temp0 = (jfloat)((func_mindustry_world_consumers_ConsumeItemFilter_itemEfficiencyMultiplier_mindustry_type_Item_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_consumers_ConsumeItemFilter_itemEfficiencyMultiplier_mindustry_type_Item_R_float])(ctx, (frame[0].o), (frame[2].o));
	sp[0].f = temp0;
	sp += 1;
	}
label_3:;
	popStackFrame(ctx);
	INST_FRETURN();

	popStackFrame(ctx);
}

jfloat M_mindustry_world_consumers_ConsumeItemFilter_itemEfficiencyMultiplier_mindustry_type_Item_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/ConsumeItemFilter:itemEfficiencyMultiplier", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(83);
	popStackFrame(ctx);
	return (jfloat(1));
	}

	popStackFrame(ctx);
}

void SM_mindustry_world_consumers_ConsumeItemFilter_lambda$build$1_mindustry_ui_MultiReqImage_mindustry_gen_Building_mindustry_type_Item(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/ConsumeItemFilter:lambda$build$1", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_consumers_ConsumeItemFilter(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(38);
	sp[0].o = frame[0].o;
	clinit_mindustry_ui_ReqImage(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_ReqImage);
	sp[2].o = (jobject)SM_mindustry_world_meta_StatValues_stack_mindustry_ctype_UnlockableContent_int_R_arc_scene_ui_layout_Stack(ctx, (frame[2].o), (jint(1)));
	{ /* InvokeDynamic */
		clinit_mindustry_world_consumers_ConsumeItemFilter_invoke_arc_func_Boolp_1(ctx);
		auto proxy = (mindustry_world_consumers_ConsumeItemFilter_invoke_arc_func_Boolp_1 *) gcAlloc(ctx, &class_mindustry_world_consumers_ConsumeItemFilter_invoke_arc_func_Boolp_1);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[3].o = (jobject) proxy;
	}
	init_mindustry_ui_ReqImage_arc_scene_Element_arc_func_Boolp(ctx, sp[1].o, sp[2].o, sp[3].o);
	((func_mindustry_ui_MultiReqImage_add_mindustry_ui_ReqImage) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_MultiReqImage_add_mindustry_ui_ReqImage])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_world_consumers_ConsumeItemFilter_lambda$build$2_mindustry_gen_Building_mindustry_type_Item_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/ConsumeItemFilter:lambda$build$2", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_consumers_ConsumeItemFilter(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(39);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = (jint)((func_mindustry_world_modules_ItemModule_has_mindustry_type_Item_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_has_mindustry_type_Item_R_boolean])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_consumers_ConsumeItemFilter_lambda$build$0_mindustry_type_Item_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/ConsumeItemFilter:lambda$build$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(38);
	sp[0].o = (jobject)((mindustry_world_consumers_ConsumeItemFilter *) NULL_CHECK((frame[0].o)))->F_filter;
	jint temp0 = (jint)((func_arc_func_Boolf_get_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolf, INDEX_arc_func_Boolf_get_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_type_Item_unlockedNow_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_type_Item_unlockedNow_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	if (((jint)((mindustry_type_Item *) NULL_CHECK((frame[1].o)))->F_hidden) != 0) goto label_1;
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

void SM_mindustry_world_consumers_ConsumeItemFilter_lambda$apply$0_mindustry_world_Block_mindustry_type_Item(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/ConsumeItemFilter:lambda$apply$0", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_consumers_ConsumeItemFilter(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(29);
	jint temp0 = (jint)((mindustry_ctype_Content *) NULL_CHECK((frame[1].o)))->F_id;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_itemFilter;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_1;
	}
	{
	LINE_NUMBER(30);
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_itemFilter;
	ARRAY_ACCESS(jbyte, sp[0].o, ((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[1].o)))->F_id)) = (jint(1));
	}
label_1:;
	LINE_NUMBER(32);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_world_consumers_ConsumeItemFilter_lambda$new$0_mindustry_type_Item_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/ConsumeItemFilter:lambda$new$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_consumers_ConsumeItemFilter(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(15);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_world_consumers_ConsumeItemFilter;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[1])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method getConsumed
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[5]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	methods[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[12]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[13]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_world_consumers_ConsumeItemFilter[] {
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
	(void *) M_mindustry_world_consumers_ConsumeItemFilter_display_mindustry_world_meta_Stats,
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
	{ "filter", &class_arc_func_Boolf, offsetof(mindustry_world_consumers_ConsumeItemFilter, F_filter), "Larc/func/Boolf;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_consumers_ConsumeItemFilter_arc_func_Boolf, 0, "(Larc/func/Boolf;)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_world_consumers_ConsumeItemFilter, 0, "()V", 1 },
	{ "apply", (intptr_t) M_mindustry_world_consumers_ConsumeItemFilter_apply_mindustry_world_Block, VTABLE_mindustry_world_consumers_ConsumeItemFilter_apply_mindustry_world_Block, "(Lmindustry/world/Block;)V", 1 },
	{ "build", (intptr_t) M_mindustry_world_consumers_ConsumeItemFilter_build_mindustry_gen_Building_arc_scene_ui_layout_Table, VTABLE_mindustry_world_consumers_ConsumeItemFilter_build_mindustry_gen_Building_arc_scene_ui_layout_Table, "(Lmindustry/gen/Building;Larc/scene/ui/layout/Table;)V", 1 },
	{ "update", (intptr_t) M_mindustry_world_consumers_ConsumeItemFilter_update_mindustry_gen_Building, VTABLE_mindustry_world_consumers_ConsumeItemFilter_update_mindustry_gen_Building, "(Lmindustry/gen/Building;)V", 1 },
	{ "trigger", (intptr_t) M_mindustry_world_consumers_ConsumeItemFilter_trigger_mindustry_gen_Building, VTABLE_mindustry_world_consumers_ConsumeItemFilter_trigger_mindustry_gen_Building, "(Lmindustry/gen/Building;)V", 1 },
	{ "efficiency", (intptr_t) M_mindustry_world_consumers_ConsumeItemFilter_efficiency_mindustry_gen_Building_R_float, VTABLE_mindustry_world_consumers_ConsumeItemFilter_efficiency_mindustry_gen_Building_R_float, "(Lmindustry/gen/Building;)F", 1 },
	{ "getConsumed", (intptr_t) M_mindustry_world_consumers_ConsumeItemFilter_getConsumed_mindustry_gen_Building_R_mindustry_type_Item, VTABLE_mindustry_world_consumers_ConsumeItemFilter_getConsumed_mindustry_gen_Building_R_mindustry_type_Item, "(Lmindustry/gen/Building;)Lmindustry/type/Item;", 1 },
	{ "display", (intptr_t) M_mindustry_world_consumers_ConsumeItemFilter_display_mindustry_world_meta_Stats, VTABLE_mindustry_world_consumers_ConsumeItemFilter_display_mindustry_world_meta_Stats, "(Lmindustry/world/meta/Stats;)V", 1 },
	{ "efficiencyMultiplier", (intptr_t) M_mindustry_world_consumers_ConsumeItemFilter_efficiencyMultiplier_mindustry_gen_Building_R_float, VTABLE_mindustry_world_consumers_ConsumeItemFilter_efficiencyMultiplier_mindustry_gen_Building_R_float, "(Lmindustry/gen/Building;)F", 1 },
	{ "itemEfficiencyMultiplier", (intptr_t) M_mindustry_world_consumers_ConsumeItemFilter_itemEfficiencyMultiplier_mindustry_type_Item_R_float, VTABLE_mindustry_world_consumers_ConsumeItemFilter_itemEfficiencyMultiplier_mindustry_type_Item_R_float, "(Lmindustry/type/Item;)F", 1 },
	{ "lambda$build$1", (intptr_t) SM_mindustry_world_consumers_ConsumeItemFilter_lambda$build$1_mindustry_ui_MultiReqImage_mindustry_gen_Building_mindustry_type_Item, 0, "(Lmindustry/ui/MultiReqImage;Lmindustry/gen/Building;Lmindustry/type/Item;)V", 4106 },
	{ "lambda$build$2", (intptr_t) SM_mindustry_world_consumers_ConsumeItemFilter_lambda$build$2_mindustry_gen_Building_mindustry_type_Item_R_boolean, 0, "(Lmindustry/gen/Building;Lmindustry/type/Item;)Z", 4106 },
	{ "lambda$build$0", (intptr_t) M_mindustry_world_consumers_ConsumeItemFilter_lambda$build$0_mindustry_type_Item_R_boolean, VTABLE_mindustry_world_consumers_ConsumeItemFilter_lambda$build$0_mindustry_type_Item_R_boolean, "(Lmindustry/type/Item;)Z", 4098 },
	{ "lambda$apply$0", (intptr_t) SM_mindustry_world_consumers_ConsumeItemFilter_lambda$apply$0_mindustry_world_Block_mindustry_type_Item, 0, "(Lmindustry/world/Block;Lmindustry/type/Item;)V", 4106 },
	{ "lambda$new$0", (intptr_t) SM_mindustry_world_consumers_ConsumeItemFilter_lambda$new$0_mindustry_type_Item_R_boolean, 0, "(Lmindustry/type/Item;)Z", 4106 },
};

Class class_mindustry_world_consumers_ConsumeItemFilter{
		.nativeName = (intptr_t) "mindustry/world/consumers/ConsumeItemFilter",
		.parentClass = (intptr_t) &class_mindustry_world_consumers_Consume,
		.size = sizeof(mindustry_world_consumers_ConsumeItemFilter),
		.classVtable = (intptr_t) vtable_mindustry_world_consumers_ConsumeItemFilter,
		.staticInitializer = (intptr_t) clinit_mindustry_world_consumers_ConsumeItemFilter,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_world_consumers_ConsumeItemFilter,
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
		.methodCount = 16,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 25,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_consumers_ConsumeItemFilter = registerClass(&class_mindustry_world_consumers_ConsumeItemFilter);

}
