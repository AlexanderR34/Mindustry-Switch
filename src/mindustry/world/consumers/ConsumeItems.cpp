#include "mindustry/world/consumers/ConsumeItems.h"
#include "java/lang/Math.h"
#include "arc/func/Floatf.h"
#include "arc/scene/ui/layout/Stack.h"
#include "mindustry/world/Block.h"
#include "mindustry/world/meta/Stats.h"
#include "arc/scene/ui/layout/Table.h"
#include "mindustry/world/meta/StatValue.h"
#include "mindustry/world/meta/StatValues.h"
#include "arc/func/Boolp.h"
#include "mindustry/type/Item.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "mindustry/world/modules/ItemModule.h"
#include "mindustry/world/consumers/ConsumeItems_invoke_arc_func_Boolp_1.h"
#include "mindustry/gen/Building.h"
#include "arc/func/Cons.h"
#include "java/lang/Object.h"
#include "mindustry/world/meta/Stat.h"
#include "arc/scene/Element.h"
#include "mindustry/type/ItemStack.h"
#include "mindustry/world/consumers/Consume.h"
#include "mindustry/world/consumers/ConsumeItems_invoke_arc_func_Cons_1.h"
#include "arc/scene/ui/layout/Cell.h"
#include "mindustry/ui/ReqImage.h"
#include "mindustry/world/consumers/ConsumeItems.h"

extern "C" {


void mark_mindustry_world_consumers_ConsumeItems(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_world_consumers_ConsumeItems *) object;
	if (self->F_items)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_items)->clazz)->markFunction)((jobject) self->F_items, mark, depth + 1);
}

void clinit_mindustry_world_consumers_ConsumeItems(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_world_consumers_Consume(ctx);
}

void init_mindustry_world_consumers_ConsumeItems_Array1_mindustry_type_ItemStack(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/ConsumeItems:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_consumers_ConsumeItems(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(13);
	init_mindustry_world_consumers_Consume(ctx, (frame[0].o));
	LINE_NUMBER(14);
	((mindustry_world_consumers_ConsumeItems *) NULL_CHECK((frame[0].o)))->F_items = (jref) (frame[1].o);
	LINE_NUMBER(15);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_world_consumers_ConsumeItems(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/ConsumeItems:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_consumers_ConsumeItems(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(19);
	sp[0].o = frame[0].o;
	clinit_mindustry_type_ItemStack(ctx);
	sp[1].o = (jobject)SF_mindustry_type_ItemStack_empty;
	init_mindustry_world_consumers_ConsumeItems_Array1_mindustry_type_ItemStack(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(20);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_consumers_ConsumeItems_apply_mindustry_world_Block(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/ConsumeItems:apply", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(24);
	((mindustry_world_Block *) NULL_CHECK((frame[1].o)))->F_hasItems = (jint(1));
	LINE_NUMBER(25);
	((mindustry_world_Block *) NULL_CHECK((frame[1].o)))->F_acceptsItems = (jint(1));
	LINE_NUMBER(26);
	sp[0].o = (jobject)((mindustry_world_consumers_ConsumeItems *) NULL_CHECK((frame[0].o)))->F_items;
	frame[2].o = sp[0].o;
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_3:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_4;
	}
	{
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(27);
	sp[0].o = (jobject)((mindustry_type_ItemStack *) NULL_CHECK((frame[5].o)))->F_item;
	jint temp0 = (jint)((mindustry_ctype_Content *) NULL_CHECK(sp[0].o))->F_id;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[1].o)))->F_itemFilter;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_6;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[1].o)))->F_itemFilter;
	sp[1].o = (jobject)((mindustry_type_ItemStack *) NULL_CHECK((frame[5].o)))->F_item;
	ARRAY_ACCESS(jbyte, sp[0].o, ((jint)((mindustry_ctype_Content *) NULL_CHECK(sp[1].o))->F_id)) = (jint(1));
	}
label_6:;
	{
	LINE_NUMBER(26);
	INST_IINC(4, 1);
	goto label_3;
	}
label_4:;
	LINE_NUMBER(29);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_consumers_ConsumeItems_build_mindustry_gen_Building_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/ConsumeItems:build", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(33);
	sp[0].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_world_consumers_ConsumeItems_invoke_arc_func_Cons_1(ctx);
		auto proxy = (mindustry_world_consumers_ConsumeItems_invoke_arc_func_Cons_1 *) gcAlloc(ctx, &class_mindustry_world_consumers_ConsumeItems_invoke_arc_func_Cons_1);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(40);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(41);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_consumers_ConsumeItems_trigger_mindustry_gen_Building(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/ConsumeItems:trigger", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(45);
	sp[0].o = (jobject)((mindustry_world_consumers_ConsumeItems *) NULL_CHECK((frame[0].o)))->F_items;
	frame[2].o = sp[0].o;
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_1:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_2;
	}
	{
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(46);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_items;
	sp[1].o = (jobject)((mindustry_type_ItemStack *) NULL_CHECK((frame[5].o)))->F_item;
	jfloat temp0 = jfloat(((jint)((mindustry_type_ItemStack *) NULL_CHECK((frame[5].o)))->F_amount));
	sp[2].o = (jobject)((mindustry_world_consumers_Consume *) NULL_CHECK((frame[0].o)))->F_multiplier;
	jfloat temp1 = (jfloat)((func_arc_func_Floatf_get_java_lang_Object_R_float) resolveInterfaceMethod(ctx, &class_arc_func_Floatf, INDEX_arc_func_Floatf_get_java_lang_Object_R_float, sp[2].o))(ctx, sp[2].o, (frame[1].o));
	jint temp2 = (jint)SM_java_lang_Math_round_float_R_int(ctx, (temp0 * temp1));
	((func_mindustry_world_modules_ItemModule_remove_mindustry_type_Item_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_remove_mindustry_type_Item_int])(ctx, sp[0].o, sp[1].o, temp2);
	LINE_NUMBER(45);
	INST_IINC(4, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(48);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jfloat M_mindustry_world_consumers_ConsumeItems_efficiency_mindustry_gen_Building_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/ConsumeItems:efficiency", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(52);
	jint temp0 = (jint)((func_mindustry_gen_Building_consumeTriggerValid_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_consumeTriggerValid_R_boolean])(ctx, (frame[1].o));
	if (temp0 != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_items;
	sp[1].o = (jobject)((mindustry_world_consumers_ConsumeItems *) NULL_CHECK((frame[0].o)))->F_items;
	sp[2].o = (jobject)((mindustry_world_consumers_Consume *) NULL_CHECK((frame[0].o)))->F_multiplier;
	jfloat temp0 = (jfloat)((func_arc_func_Floatf_get_java_lang_Object_R_float) resolveInterfaceMethod(ctx, &class_arc_func_Floatf, INDEX_arc_func_Floatf_get_java_lang_Object_R_float, sp[2].o))(ctx, sp[2].o, (frame[1].o));
	jint temp1 = (jint)((func_mindustry_world_modules_ItemModule_has_Array1_mindustry_type_ItemStack_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_has_Array1_mindustry_type_ItemStack_float_R_boolean])(ctx, sp[0].o, sp[1].o, temp0);
	if (temp1 == 0) goto label_2;
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

void M_mindustry_world_consumers_ConsumeItems_display_mindustry_world_meta_Stats(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/ConsumeItems:display", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(57);
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
	if ((floatCompare(((jfloat)((mindustry_world_meta_Stats *) NULL_CHECK((frame[1].o)))->F_timePeriod), (jfloat(0)), 1)) >= 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_world_consumers_ConsumeItems *) NULL_CHECK((frame[0].o)))->F_items;
	sp[0].o = (jobject)SM_mindustry_world_meta_StatValues_items_Array1_mindustry_type_ItemStack_R_mindustry_world_meta_StatValue(ctx, sp[0].o);
	sp += 1;
	goto label_4;
	}
label_3:;
	{
	jfloat temp0 = (jfloat)((mindustry_world_meta_Stats *) NULL_CHECK((frame[1].o)))->F_timePeriod;
	sp[0].o = (jobject)((mindustry_world_consumers_ConsumeItems *) NULL_CHECK((frame[0].o)))->F_items;
	sp[0].o = (jobject)SM_mindustry_world_meta_StatValues_items_float_Array1_mindustry_type_ItemStack_R_mindustry_world_meta_StatValue(ctx, temp0, sp[0].o);
	sp += 1;
	}
label_4:;
	{
	sp -= 3;
	((func_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_world_meta_StatValue) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_world_meta_StatValue])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(58);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_consumers_ConsumeItems_lambda$build$0_mindustry_gen_Building_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/ConsumeItems:lambda$build$0", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(34);
	frame[3].i = (jint(0));
	LINE_NUMBER(35);
	sp[0].o = (jobject)((mindustry_world_consumers_ConsumeItems *) NULL_CHECK((frame[0].o)))->F_items;
	frame[4].o = sp[0].o;
	frame[5].i = (((jarray) nullCheck(ctx, (frame[4].o)))->length);
	frame[6].i = (jint(0));
	}
label_4:;
	{
	if ((frame[6].i) >= (frame[5].i)) goto label_5;
	}
	{
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[6].i)));
	LINE_NUMBER(36);
	sp[0].o = frame[2].o;
	clinit_mindustry_ui_ReqImage(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_ReqImage);
	sp[2].o = (jobject)((mindustry_type_ItemStack *) NULL_CHECK((frame[7].o)))->F_item;
	jfloat temp0 = jfloat(((jint)((mindustry_type_ItemStack *) NULL_CHECK((frame[7].o)))->F_amount));
	sp[3].o = (jobject)((mindustry_world_consumers_Consume *) NULL_CHECK((frame[0].o)))->F_multiplier;
	jfloat temp1 = (jfloat)((func_arc_func_Floatf_get_java_lang_Object_R_float) resolveInterfaceMethod(ctx, &class_arc_func_Floatf, INDEX_arc_func_Floatf_get_java_lang_Object_R_float, sp[3].o))(ctx, sp[3].o, (frame[1].o));
	jint temp2 = (jint)SM_java_lang_Math_round_float_R_int(ctx, (temp0 * temp1));
	sp[2].o = (jobject)SM_mindustry_world_meta_StatValues_stack_mindustry_ctype_UnlockableContent_int_R_arc_scene_ui_layout_Stack(ctx, sp[2].o, temp2);
	{ /* InvokeDynamic */
		clinit_mindustry_world_consumers_ConsumeItems_invoke_arc_func_Boolp_1(ctx);
		auto proxy = (mindustry_world_consumers_ConsumeItems_invoke_arc_func_Boolp_1 *) gcAlloc(ctx, &class_mindustry_world_consumers_ConsumeItems_invoke_arc_func_Boolp_1);
		proxy->F_field2 = (jref) (frame[7].o);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	init_mindustry_ui_ReqImage_arc_scene_Element_arc_func_Boolp(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	jfloat temp3 = jfloat(8.0f);
	LINE_NUMBER(37);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp3);
	LINE_NUMBER(38);
	INST_IINC(3, 1);
	if (((frame[3].i) % (jint(4))) != 0) goto label_9;
	}
	{
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	}
label_9:;
	{
	LINE_NUMBER(35);
	INST_IINC(6, 1);
	goto label_4;
	}
label_5:;
	LINE_NUMBER(40);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_world_consumers_ConsumeItems_lambda$build$1_mindustry_gen_Building_mindustry_type_ItemStack_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/ConsumeItems:lambda$build$1", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(37);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_items;
	sp[1].o = (jobject)((mindustry_type_ItemStack *) NULL_CHECK((frame[2].o)))->F_item;
	jfloat temp0 = jfloat(((jint)((mindustry_type_ItemStack *) NULL_CHECK((frame[2].o)))->F_amount));
	sp[2].o = (jobject)((mindustry_world_consumers_Consume *) NULL_CHECK((frame[0].o)))->F_multiplier;
	jfloat temp1 = (jfloat)((func_arc_func_Floatf_get_java_lang_Object_R_float) resolveInterfaceMethod(ctx, &class_arc_func_Floatf, INDEX_arc_func_Floatf_get_java_lang_Object_R_float, sp[2].o))(ctx, sp[2].o, (frame[1].o));
	jint temp2 = (jint)SM_java_lang_Math_round_float_R_int(ctx, (temp0 * temp1));
	jint temp3 = (jint)((func_mindustry_world_modules_ItemModule_has_mindustry_type_Item_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_has_mindustry_type_Item_int_R_boolean])(ctx, sp[0].o, sp[1].o, temp2);
	popStackFrame(ctx);
	return temp3;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_world_consumers_ConsumeItems[] {
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
	(void *) M_mindustry_world_consumers_ConsumeItems_apply_mindustry_world_Block,
	(void *) M_mindustry_world_consumers_Consume_optional_boolean_boolean_R_mindustry_world_consumers_Consume,
	(void *) M_mindustry_world_consumers_Consume_boost_R_mindustry_world_consumers_Consume,
	(void *) M_mindustry_world_consumers_Consume_update_boolean_R_mindustry_world_consumers_Consume,
	(void *) M_mindustry_world_consumers_Consume_ignore_R_boolean,
	(void *) M_mindustry_world_consumers_ConsumeItems_build_mindustry_gen_Building_arc_scene_ui_layout_Table,
	(void *) M_mindustry_world_consumers_ConsumeItems_trigger_mindustry_gen_Building,
	(void *) M_mindustry_world_consumers_Consume_update_mindustry_gen_Building,
	(void *) M_mindustry_world_consumers_ConsumeItems_efficiency_mindustry_gen_Building_R_float,
	(void *) M_mindustry_world_consumers_Consume_efficiencyMultiplier_mindustry_gen_Building_R_float,
	(void *) M_mindustry_world_consumers_ConsumeItems_display_mindustry_world_meta_Stats,
	(void *) M_mindustry_world_consumers_ConsumeItems_lambda$build$0_mindustry_gen_Building_arc_scene_ui_layout_Table,
	(void *) M_mindustry_world_consumers_ConsumeItems_lambda$build$1_mindustry_gen_Building_mindustry_type_ItemStack_R_boolean,
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
	{ "lambda$build$0", "(Lmindustry/gen/Building;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$build$1", "(Lmindustry/gen/Building;Lmindustry/type/ItemStack;)Z" },
};

static FieldMetadata fields[] {
	{ "items", getArrayClass(&class_mindustry_type_ItemStack, 1), offsetof(mindustry_world_consumers_ConsumeItems, F_items), "[Lmindustry/type/ItemStack;", 17 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_consumers_ConsumeItems_Array1_mindustry_type_ItemStack, 0, "([Lmindustry/type/ItemStack;)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_world_consumers_ConsumeItems, 0, "()V", 4 },
	{ "apply", (intptr_t) M_mindustry_world_consumers_ConsumeItems_apply_mindustry_world_Block, VTABLE_mindustry_world_consumers_ConsumeItems_apply_mindustry_world_Block, "(Lmindustry/world/Block;)V", 1 },
	{ "build", (intptr_t) M_mindustry_world_consumers_ConsumeItems_build_mindustry_gen_Building_arc_scene_ui_layout_Table, VTABLE_mindustry_world_consumers_ConsumeItems_build_mindustry_gen_Building_arc_scene_ui_layout_Table, "(Lmindustry/gen/Building;Larc/scene/ui/layout/Table;)V", 1 },
	{ "trigger", (intptr_t) M_mindustry_world_consumers_ConsumeItems_trigger_mindustry_gen_Building, VTABLE_mindustry_world_consumers_ConsumeItems_trigger_mindustry_gen_Building, "(Lmindustry/gen/Building;)V", 1 },
	{ "efficiency", (intptr_t) M_mindustry_world_consumers_ConsumeItems_efficiency_mindustry_gen_Building_R_float, VTABLE_mindustry_world_consumers_ConsumeItems_efficiency_mindustry_gen_Building_R_float, "(Lmindustry/gen/Building;)F", 1 },
	{ "display", (intptr_t) M_mindustry_world_consumers_ConsumeItems_display_mindustry_world_meta_Stats, VTABLE_mindustry_world_consumers_ConsumeItems_display_mindustry_world_meta_Stats, "(Lmindustry/world/meta/Stats;)V", 1 },
	{ "lambda$build$0", (intptr_t) M_mindustry_world_consumers_ConsumeItems_lambda$build$0_mindustry_gen_Building_arc_scene_ui_layout_Table, VTABLE_mindustry_world_consumers_ConsumeItems_lambda$build$0_mindustry_gen_Building_arc_scene_ui_layout_Table, "(Lmindustry/gen/Building;Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$build$1", (intptr_t) M_mindustry_world_consumers_ConsumeItems_lambda$build$1_mindustry_gen_Building_mindustry_type_ItemStack_R_boolean, VTABLE_mindustry_world_consumers_ConsumeItems_lambda$build$1_mindustry_gen_Building_mindustry_type_ItemStack_R_boolean, "(Lmindustry/gen/Building;Lmindustry/type/ItemStack;)Z", 4098 },
};

Class class_mindustry_world_consumers_ConsumeItems{
		.nativeName = (intptr_t) "mindustry/world/consumers/ConsumeItems",
		.parentClass = (intptr_t) &class_mindustry_world_consumers_Consume,
		.size = sizeof(mindustry_world_consumers_ConsumeItems),
		.classVtable = (intptr_t) vtable_mindustry_world_consumers_ConsumeItems,
		.staticInitializer = (intptr_t) clinit_mindustry_world_consumers_ConsumeItems,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_world_consumers_ConsumeItems,
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
		.methodCount = 9,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 24,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_consumers_ConsumeItems = registerClass(&class_mindustry_world_consumers_ConsumeItems);

}
