#include "mindustry/world/consumers/ConsumePayloads.h"
#include "mindustry/world/meta/StatValue.h"
#include "arc/func/Boolp.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "arc/func/Cons.h"
#include "mindustry/world/meta/Stat.h"
#include "java/lang/String.h"
#include "arc/struct/Seq.h"
#include "arc/scene/ui/layout/Cell.h"
#include "mindustry/ui/ReqImage.h"
#include "mindustry/type/PayloadStack.h"
#include "mindustry/type/PayloadSeq.h"
#include "java/lang/Math.h"
#include "arc/func/Floatf.h"
#include "arc/scene/ui/layout/Stack.h"
#include "java/util/Iterator.h"
#include "mindustry/world/meta/Stats.h"
#include "arc/scene/ui/layout/Table.h"
#include "mindustry/world/meta/StatValues.h"
#include "mindustry/world/consumers/ConsumePayloads.h"
#include "mindustry/gen/Building.h"
#include "java/lang/CharSequence.h"
#include "java/lang/Object.h"
#include "arc/scene/Element.h"
#include "mindustry/world/consumers/ConsumePayloads_invoke_arc_func_Cons_1.h"
#include "mindustry/world/consumers/Consume.h"
#include "mindustry/world/consumers/ConsumePayloads_invoke_mindustry_world_meta_StatValue_1.h"
#include "mindustry/world/consumers/ConsumePayloads_invoke_arc_func_Boolp_1.h"

extern "C" {


void mark_mindustry_world_consumers_ConsumePayloads(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_world_consumers_ConsumePayloads *) object;
	if (self->F_payloads)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_payloads)->clazz)->markFunction)((jobject) self->F_payloads, mark, depth + 1);
}

void clinit_mindustry_world_consumers_ConsumePayloads(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_world_consumers_Consume(ctx);
}

void init_mindustry_world_consumers_ConsumePayloads_arc_struct_Seq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/ConsumePayloads:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_consumers_ConsumePayloads(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(13);
	init_mindustry_world_consumers_Consume(ctx, (frame[0].o));
	LINE_NUMBER(14);
	((mindustry_world_consumers_ConsumePayloads *) NULL_CHECK((frame[0].o)))->F_payloads = (jref) (frame[1].o);
	LINE_NUMBER(15);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_world_consumers_ConsumePayloads_efficiency_mindustry_gen_Building_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/ConsumePayloads:efficiency", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(19);
	sp[0].o = (jobject)((mindustry_world_consumers_Consume *) NULL_CHECK((frame[0].o)))->F_multiplier;
	jfloat temp0 = (jfloat)((func_arc_func_Floatf_get_java_lang_Object_R_float) resolveInterfaceMethod(ctx, &class_arc_func_Floatf, INDEX_arc_func_Floatf_get_java_lang_Object_R_float, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	frame[2].f = temp0;
	LINE_NUMBER(20);
	sp[0].o = (jobject)((mindustry_world_consumers_ConsumePayloads *) NULL_CHECK((frame[0].o)))->F_payloads;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_2:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_mindustry_type_PayloadStack, sp[0].o));
	LINE_NUMBER(21);
	sp[0].o = (jobject)((func_mindustry_gen_Building_getPayloads_R_mindustry_type_PayloadSeq) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_getPayloads_R_mindustry_type_PayloadSeq])(ctx, (frame[1].o));
	sp[1].o = (jobject)((mindustry_type_PayloadStack *) NULL_CHECK((frame[4].o)))->F_item;
	jint temp0 = (jint)SM_java_lang_Math_round_float_R_int(ctx, ((jfloat(((jint)((mindustry_type_PayloadStack *) NULL_CHECK((frame[4].o)))->F_amount))) * (frame[2].f)));
	jint temp1 = (jint)((func_mindustry_type_PayloadSeq_contains_mindustry_ctype_UnlockableContent_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_PayloadSeq_contains_mindustry_ctype_UnlockableContent_int_R_boolean])(ctx, sp[0].o, sp[1].o, temp0);
	if (temp1 != 0) goto label_5;
	}
	{
	LINE_NUMBER(22);
	popStackFrame(ctx);
	return (jfloat(0));
	}
label_5:;
	LINE_NUMBER(24);
	goto label_2;
label_3:;
	{
	LINE_NUMBER(25);
	popStackFrame(ctx);
	return (jfloat(1));
	}

	popStackFrame(ctx);
}

void M_mindustry_world_consumers_ConsumePayloads_trigger_mindustry_gen_Building(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/ConsumePayloads:trigger", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(30);
	sp[0].o = (jobject)((mindustry_world_consumers_Consume *) NULL_CHECK((frame[0].o)))->F_multiplier;
	jfloat temp0 = (jfloat)((func_arc_func_Floatf_get_java_lang_Object_R_float) resolveInterfaceMethod(ctx, &class_arc_func_Floatf, INDEX_arc_func_Floatf_get_java_lang_Object_R_float, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	frame[2].f = temp0;
	LINE_NUMBER(31);
	sp[0].o = (jobject)((mindustry_world_consumers_ConsumePayloads *) NULL_CHECK((frame[0].o)))->F_payloads;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_2:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_mindustry_type_PayloadStack, sp[0].o));
	LINE_NUMBER(32);
	sp[0].o = (jobject)((func_mindustry_gen_Building_getPayloads_R_mindustry_type_PayloadSeq) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_getPayloads_R_mindustry_type_PayloadSeq])(ctx, (frame[1].o));
	sp[1].o = (jobject)((mindustry_type_PayloadStack *) NULL_CHECK((frame[4].o)))->F_item;
	jint temp0 = (jint)SM_java_lang_Math_round_float_R_int(ctx, ((jfloat(((jint)((mindustry_type_PayloadStack *) NULL_CHECK((frame[4].o)))->F_amount))) * (frame[2].f)));
	((func_mindustry_type_PayloadSeq_remove_mindustry_ctype_UnlockableContent_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_PayloadSeq_remove_mindustry_ctype_UnlockableContent_int])(ctx, sp[0].o, sp[1].o, temp0);
	LINE_NUMBER(33);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(34);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_consumers_ConsumePayloads_display_mindustry_world_meta_Stats(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/ConsumePayloads:display", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(39);
	sp[0].o = (jobject)((mindustry_world_consumers_ConsumePayloads *) NULL_CHECK((frame[0].o)))->F_payloads;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_1:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_mindustry_type_PayloadStack, sp[0].o));
	LINE_NUMBER(40);
	sp[0].o = frame[1].o;
	clinit_mindustry_world_meta_Stat(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_Stat_input;
	{ /* InvokeDynamic */
		clinit_mindustry_world_consumers_ConsumePayloads_invoke_mindustry_world_meta_StatValue_1(ctx);
		auto proxy = (mindustry_world_consumers_ConsumePayloads_invoke_mindustry_world_meta_StatValue_1 *) gcAlloc(ctx, &class_mindustry_world_consumers_ConsumePayloads_invoke_mindustry_world_meta_StatValue_1);
		proxy->F_field0 = (jref) (frame[3].o);
		sp[2].o = (jobject) proxy;
	}
	((func_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_world_meta_StatValue) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_world_meta_StatValue])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(44);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(45);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_consumers_ConsumePayloads_build_mindustry_gen_Building_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/ConsumePayloads:build", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(49);
	sp[0].o = (jobject)((func_mindustry_gen_Building_getPayloads_R_mindustry_type_PayloadSeq) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_getPayloads_R_mindustry_type_PayloadSeq])(ctx, (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(51);
	sp[0].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_world_consumers_ConsumePayloads_invoke_arc_func_Cons_1(ctx);
		auto proxy = (mindustry_world_consumers_ConsumePayloads_invoke_arc_func_Cons_1 *) gcAlloc(ctx, &class_mindustry_world_consumers_ConsumePayloads_invoke_arc_func_Cons_1);
		proxy->F_field2 = (jref) (frame[3].o);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(58);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(59);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_consumers_ConsumePayloads_lambda$build$0_mindustry_gen_Building_mindustry_type_PayloadSeq_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/ConsumePayloads:lambda$build$0", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(52);
	frame[4].i = (jint(0));
	LINE_NUMBER(53);
	sp[0].o = (jobject)((mindustry_world_consumers_ConsumePayloads *) NULL_CHECK((frame[0].o)))->F_payloads;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	}
label_2:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[5].o)))(ctx, (frame[5].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o));
	frame[6].o = (checkCast(ctx, &class_mindustry_type_PayloadStack, sp[0].o));
	LINE_NUMBER(54);
	sp[0].o = frame[3].o;
	clinit_mindustry_ui_ReqImage(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_ReqImage);
	sp[2].o = (jobject)((mindustry_type_PayloadStack *) NULL_CHECK((frame[6].o)))->F_item;
	jfloat temp0 = jfloat(((jint)((mindustry_type_PayloadStack *) NULL_CHECK((frame[6].o)))->F_amount));
	sp[3].o = (jobject)((mindustry_world_consumers_Consume *) NULL_CHECK((frame[0].o)))->F_multiplier;
	jfloat temp1 = (jfloat)((func_arc_func_Floatf_get_java_lang_Object_R_float) resolveInterfaceMethod(ctx, &class_arc_func_Floatf, INDEX_arc_func_Floatf_get_java_lang_Object_R_float, sp[3].o))(ctx, sp[3].o, (frame[1].o));
	jint temp2 = (jint)SM_java_lang_Math_round_float_R_int(ctx, (temp0 * temp1));
	sp[2].o = (jobject)SM_mindustry_world_meta_StatValues_stack_mindustry_ctype_UnlockableContent_int_R_arc_scene_ui_layout_Stack(ctx, sp[2].o, temp2);
	{ /* InvokeDynamic */
		clinit_mindustry_world_consumers_ConsumePayloads_invoke_arc_func_Boolp_1(ctx);
		auto proxy = (mindustry_world_consumers_ConsumePayloads_invoke_arc_func_Boolp_1 *) gcAlloc(ctx, &class_mindustry_world_consumers_ConsumePayloads_invoke_arc_func_Boolp_1);
		proxy->F_field3 = (jref) (frame[1].o);
		proxy->F_field2 = (jref) (frame[6].o);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	init_mindustry_ui_ReqImage_arc_scene_Element_arc_func_Boolp(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	jfloat temp3 = jfloat(8.0f);
	LINE_NUMBER(55);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp3);
	LINE_NUMBER(56);
	INST_IINC(4, 1);
	if (((frame[4].i) % (jint(4))) != 0) goto label_7;
	}
	{
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[3].o));
	}
label_7:;
	LINE_NUMBER(57);
	goto label_2;
label_3:;
	LINE_NUMBER(58);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_world_consumers_ConsumePayloads_lambda$build$1_mindustry_type_PayloadSeq_mindustry_type_PayloadStack_mindustry_gen_Building_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/ConsumePayloads:lambda$build$1", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(55);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_type_PayloadStack *) NULL_CHECK((frame[2].o)))->F_item;
	jfloat temp0 = jfloat(((jint)((mindustry_type_PayloadStack *) NULL_CHECK((frame[2].o)))->F_amount));
	sp[2].o = (jobject)((mindustry_world_consumers_Consume *) NULL_CHECK((frame[0].o)))->F_multiplier;
	jfloat temp1 = (jfloat)((func_arc_func_Floatf_get_java_lang_Object_R_float) resolveInterfaceMethod(ctx, &class_arc_func_Floatf, INDEX_arc_func_Floatf_get_java_lang_Object_R_float, sp[2].o))(ctx, sp[2].o, (frame[3].o));
	jint temp2 = (jint)SM_java_lang_Math_round_float_R_int(ctx, (temp0 * temp1));
	jint temp3 = (jint)((func_mindustry_type_PayloadSeq_contains_mindustry_ctype_UnlockableContent_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_PayloadSeq_contains_mindustry_ctype_UnlockableContent_int_R_boolean])(ctx, sp[0].o, sp[1].o, temp2);
	popStackFrame(ctx);
	return temp3;
	}

	popStackFrame(ctx);
}

void SM_mindustry_world_consumers_ConsumePayloads_lambda$display$0_mindustry_type_PayloadStack_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/ConsumePayloads:lambda$display$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_consumers_ConsumePayloads(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(41);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)SM_mindustry_world_meta_StatValues_stack_mindustry_type_PayloadStack_R_arc_scene_ui_layout_Stack(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(42);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_type_PayloadStack *) NULL_CHECK((frame[0].o)))->F_item;
	sp[1].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[1].o))->F_localizedName;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	LINE_NUMBER(43);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_world_consumers_ConsumePayloads[] {
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
	(void *) M_mindustry_world_consumers_ConsumePayloads_build_mindustry_gen_Building_arc_scene_ui_layout_Table,
	(void *) M_mindustry_world_consumers_ConsumePayloads_trigger_mindustry_gen_Building,
	(void *) M_mindustry_world_consumers_Consume_update_mindustry_gen_Building,
	(void *) M_mindustry_world_consumers_ConsumePayloads_efficiency_mindustry_gen_Building_R_float,
	(void *) M_mindustry_world_consumers_Consume_efficiencyMultiplier_mindustry_gen_Building_R_float,
	(void *) M_mindustry_world_consumers_ConsumePayloads_display_mindustry_world_meta_Stats,
	(void *) M_mindustry_world_consumers_ConsumePayloads_lambda$build$0_mindustry_gen_Building_mindustry_type_PayloadSeq_arc_scene_ui_layout_Table,
	(void *) M_mindustry_world_consumers_ConsumePayloads_lambda$build$1_mindustry_type_PayloadSeq_mindustry_type_PayloadStack_mindustry_gen_Building_R_boolean,
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
	{ "lambda$build$0", "(Lmindustry/gen/Building;Lmindustry/type/PayloadSeq;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$build$1", "(Lmindustry/type/PayloadSeq;Lmindustry/type/PayloadStack;Lmindustry/gen/Building;)Z" },
};

static FieldMetadata fields[] {
	{ "payloads", &class_arc_struct_Seq, offsetof(mindustry_world_consumers_ConsumePayloads, F_payloads), "Larc/struct/Seq;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_consumers_ConsumePayloads_arc_struct_Seq, 0, "(Larc/struct/Seq;)V", 1 },
	{ "efficiency", (intptr_t) M_mindustry_world_consumers_ConsumePayloads_efficiency_mindustry_gen_Building_R_float, VTABLE_mindustry_world_consumers_ConsumePayloads_efficiency_mindustry_gen_Building_R_float, "(Lmindustry/gen/Building;)F", 1 },
	{ "trigger", (intptr_t) M_mindustry_world_consumers_ConsumePayloads_trigger_mindustry_gen_Building, VTABLE_mindustry_world_consumers_ConsumePayloads_trigger_mindustry_gen_Building, "(Lmindustry/gen/Building;)V", 1 },
	{ "display", (intptr_t) M_mindustry_world_consumers_ConsumePayloads_display_mindustry_world_meta_Stats, VTABLE_mindustry_world_consumers_ConsumePayloads_display_mindustry_world_meta_Stats, "(Lmindustry/world/meta/Stats;)V", 1 },
	{ "build", (intptr_t) M_mindustry_world_consumers_ConsumePayloads_build_mindustry_gen_Building_arc_scene_ui_layout_Table, VTABLE_mindustry_world_consumers_ConsumePayloads_build_mindustry_gen_Building_arc_scene_ui_layout_Table, "(Lmindustry/gen/Building;Larc/scene/ui/layout/Table;)V", 1 },
	{ "lambda$build$0", (intptr_t) M_mindustry_world_consumers_ConsumePayloads_lambda$build$0_mindustry_gen_Building_mindustry_type_PayloadSeq_arc_scene_ui_layout_Table, VTABLE_mindustry_world_consumers_ConsumePayloads_lambda$build$0_mindustry_gen_Building_mindustry_type_PayloadSeq_arc_scene_ui_layout_Table, "(Lmindustry/gen/Building;Lmindustry/type/PayloadSeq;Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$build$1", (intptr_t) M_mindustry_world_consumers_ConsumePayloads_lambda$build$1_mindustry_type_PayloadSeq_mindustry_type_PayloadStack_mindustry_gen_Building_R_boolean, VTABLE_mindustry_world_consumers_ConsumePayloads_lambda$build$1_mindustry_type_PayloadSeq_mindustry_type_PayloadStack_mindustry_gen_Building_R_boolean, "(Lmindustry/type/PayloadSeq;Lmindustry/type/PayloadStack;Lmindustry/gen/Building;)Z", 4098 },
	{ "lambda$display$0", (intptr_t) SM_mindustry_world_consumers_ConsumePayloads_lambda$display$0_mindustry_type_PayloadStack_arc_scene_ui_layout_Table, 0, "(Lmindustry/type/PayloadStack;Larc/scene/ui/layout/Table;)V", 4106 },
};

Class class_mindustry_world_consumers_ConsumePayloads{
		.nativeName = (intptr_t) "mindustry/world/consumers/ConsumePayloads",
		.parentClass = (intptr_t) &class_mindustry_world_consumers_Consume,
		.size = sizeof(mindustry_world_consumers_ConsumePayloads),
		.classVtable = (intptr_t) vtable_mindustry_world_consumers_ConsumePayloads,
		.staticInitializer = (intptr_t) clinit_mindustry_world_consumers_ConsumePayloads,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_world_consumers_ConsumePayloads,
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
		.methodCount = 8,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 24,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_consumers_ConsumePayloads = registerClass(&class_mindustry_world_consumers_ConsumePayloads);

}
