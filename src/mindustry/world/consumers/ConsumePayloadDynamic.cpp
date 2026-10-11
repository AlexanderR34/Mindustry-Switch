#include "mindustry/world/consumers/ConsumePayloadDynamic.h"
#include "arc/func/Boolp.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "java/lang/Runnable.h"
#include "arc/func/Cons.h"
#include "mindustry/world/consumers/ConsumePayloadDynamic_invoke_arc_func_Boolp_1.h"
#include "mindustry/world/consumers/ConsumePayloadDynamic_invoke_java_lang_Runnable_1.h"
#include "arc/struct/Seq.h"
#include "mindustry/world/consumers/ConsumePayloadDynamic.h"
#include "arc/scene/ui/layout/Cell.h"
#include "mindustry/ui/ReqImage.h"
#include "mindustry/type/PayloadStack.h"
#include "mindustry/type/PayloadSeq.h"
#include "java/lang/Math.h"
#include "arc/func/Floatf.h"
#include "arc/func/Func.h"
#include "arc/scene/ui/layout/Stack.h"
#include "java/util/Iterator.h"
#include "mindustry/world/meta/Stats.h"
#include "arc/scene/Group.h"
#include "arc/scene/ui/layout/Table.h"
#include "mindustry/world/meta/StatValues.h"
#include "mindustry/world/consumers/ConsumePayloadDynamic_invoke_arc_func_Cons_3.h"
#include "mindustry/gen/Building.h"
#include "mindustry/world/consumers/ConsumePayloadDynamic_invoke_arc_func_Cons_2.h"
#include "java/lang/Object.h"
#include "arc/scene/Element.h"
#include "mindustry/world/consumers/Consume.h"

extern "C" {


void mark_mindustry_world_consumers_ConsumePayloadDynamic(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_world_consumers_ConsumePayloadDynamic *) object;
	if (self->F_payloads)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_payloads)->clazz)->markFunction)((jobject) self->F_payloads, mark, depth + 1);
}

void clinit_mindustry_world_consumers_ConsumePayloadDynamic(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_world_consumers_Consume(ctx);
}

void init_mindustry_world_consumers_ConsumePayloadDynamic_arc_func_Func(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/ConsumePayloadDynamic:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_consumers_ConsumePayloadDynamic(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(15);
	init_mindustry_world_consumers_Consume(ctx, (frame[0].o));
	LINE_NUMBER(16);
	((mindustry_world_consumers_ConsumePayloadDynamic *) NULL_CHECK((frame[0].o)))->F_payloads = (jref) (frame[1].o);
	LINE_NUMBER(17);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_world_consumers_ConsumePayloadDynamic_efficiency_mindustry_gen_Building_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/ConsumePayloadDynamic:efficiency", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(21);
	sp[0].o = (jobject)((mindustry_world_consumers_Consume *) NULL_CHECK((frame[0].o)))->F_multiplier;
	jfloat temp0 = (jfloat)((func_arc_func_Floatf_get_java_lang_Object_R_float) resolveInterfaceMethod(ctx, &class_arc_func_Floatf, INDEX_arc_func_Floatf_get_java_lang_Object_R_float, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	frame[2].f = temp0;
	LINE_NUMBER(22);
	sp[0].o = (jobject)((mindustry_world_consumers_ConsumePayloadDynamic *) NULL_CHECK((frame[0].o)))->F_payloads;
	sp[0].o = (jobject)((func_arc_func_Func_get_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Func, INDEX_arc_func_Func_get_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_struct_Seq, sp[0].o)))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (checkCast(ctx, &class_arc_struct_Seq, sp[0].o)));
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
	LINE_NUMBER(23);
	sp[0].o = (jobject)((func_mindustry_gen_Building_getPayloads_R_mindustry_type_PayloadSeq) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_getPayloads_R_mindustry_type_PayloadSeq])(ctx, (frame[1].o));
	sp[1].o = (jobject)((mindustry_type_PayloadStack *) NULL_CHECK((frame[4].o)))->F_item;
	jint temp0 = (jint)SM_java_lang_Math_round_float_R_int(ctx, ((jfloat(((jint)((mindustry_type_PayloadStack *) NULL_CHECK((frame[4].o)))->F_amount))) * (frame[2].f)));
	jint temp1 = (jint)((func_mindustry_type_PayloadSeq_contains_mindustry_ctype_UnlockableContent_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_PayloadSeq_contains_mindustry_ctype_UnlockableContent_int_R_boolean])(ctx, sp[0].o, sp[1].o, temp0);
	if (temp1 != 0) goto label_5;
	}
	{
	LINE_NUMBER(24);
	popStackFrame(ctx);
	return (jfloat(0));
	}
label_5:;
	LINE_NUMBER(26);
	goto label_2;
label_3:;
	{
	LINE_NUMBER(27);
	popStackFrame(ctx);
	return (jfloat(1));
	}

	popStackFrame(ctx);
}

void M_mindustry_world_consumers_ConsumePayloadDynamic_trigger_mindustry_gen_Building(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/ConsumePayloadDynamic:trigger", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(32);
	sp[0].o = (jobject)((mindustry_world_consumers_Consume *) NULL_CHECK((frame[0].o)))->F_multiplier;
	jfloat temp0 = (jfloat)((func_arc_func_Floatf_get_java_lang_Object_R_float) resolveInterfaceMethod(ctx, &class_arc_func_Floatf, INDEX_arc_func_Floatf_get_java_lang_Object_R_float, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	frame[2].f = temp0;
	LINE_NUMBER(33);
	sp[0].o = (jobject)((mindustry_world_consumers_ConsumePayloadDynamic *) NULL_CHECK((frame[0].o)))->F_payloads;
	sp[0].o = (jobject)((func_arc_func_Func_get_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Func, INDEX_arc_func_Func_get_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_struct_Seq, sp[0].o)))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (checkCast(ctx, &class_arc_struct_Seq, sp[0].o)));
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
	LINE_NUMBER(34);
	sp[0].o = (jobject)((func_mindustry_gen_Building_getPayloads_R_mindustry_type_PayloadSeq) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_getPayloads_R_mindustry_type_PayloadSeq])(ctx, (frame[1].o));
	sp[1].o = (jobject)((mindustry_type_PayloadStack *) NULL_CHECK((frame[4].o)))->F_item;
	jint temp0 = (jint)SM_java_lang_Math_round_float_R_int(ctx, ((jfloat(((jint)((mindustry_type_PayloadStack *) NULL_CHECK((frame[4].o)))->F_amount))) * (frame[2].f)));
	((func_mindustry_type_PayloadSeq_remove_mindustry_ctype_UnlockableContent_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_PayloadSeq_remove_mindustry_ctype_UnlockableContent_int])(ctx, sp[0].o, sp[1].o, temp0);
	LINE_NUMBER(35);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(36);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_consumers_ConsumePayloadDynamic_display_mindustry_world_meta_Stats(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/ConsumePayloadDynamic:display", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(41);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_consumers_ConsumePayloadDynamic_build_mindustry_gen_Building_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/ConsumePayloadDynamic:build", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(45);
	sp[0].o = (jobject)createArray(ctx, &class_arc_struct_Seq, (jint(1)));
	jint temp0 = jint(0);
	sp[1].o = (jobject)((mindustry_world_consumers_ConsumePayloadDynamic *) NULL_CHECK((frame[0].o)))->F_payloads;
	sp[1].o = (jobject)((func_arc_func_Func_get_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Func, INDEX_arc_func_Func_get_java_lang_Object_R_java_lang_Object, sp[1].o))(ctx, sp[1].o, (frame[1].o));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = (checkCast(ctx, &class_arc_struct_Seq, sp[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(47);
	sp[0].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_world_consumers_ConsumePayloadDynamic_invoke_arc_func_Cons_2(ctx);
		auto proxy = (mindustry_world_consumers_ConsumePayloadDynamic_invoke_arc_func_Cons_2 *) gcAlloc(ctx, &class_mindustry_world_consumers_ConsumePayloadDynamic_invoke_arc_func_Cons_2);
		proxy->F_field3 = (jref) (frame[1].o);
		proxy->F_field2 = (jref) (frame[3].o);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(57);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_consumers_ConsumePayloadDynamic_rebuild_mindustry_gen_Building_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/ConsumePayloadDynamic:rebuild", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(60);
	sp[0].o = (jobject)((func_mindustry_gen_Building_getPayloads_R_mindustry_type_PayloadSeq) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_getPayloads_R_mindustry_type_PayloadSeq])(ctx, (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(61);
	sp[0].o = (jobject)((mindustry_world_consumers_ConsumePayloadDynamic *) NULL_CHECK((frame[0].o)))->F_payloads;
	sp[0].o = (jobject)((func_arc_func_Func_get_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Func, INDEX_arc_func_Func_get_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	frame[4].o = (checkCast(ctx, &class_arc_struct_Seq, sp[0].o));
	LINE_NUMBER(63);
	((func_arc_scene_ui_layout_Table_clear) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_clear])(ctx, (frame[2].o));
	LINE_NUMBER(64);
	sp[0].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_world_consumers_ConsumePayloadDynamic_invoke_arc_func_Cons_3(ctx);
		auto proxy = (mindustry_world_consumers_ConsumePayloadDynamic_invoke_arc_func_Cons_3 *) gcAlloc(ctx, &class_mindustry_world_consumers_ConsumePayloadDynamic_invoke_arc_func_Cons_3);
		proxy->F_field3 = (jref) (frame[3].o);
		proxy->F_field2 = (jref) (frame[1].o);
		proxy->F_field1 = (jref) (frame[4].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(71);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(72);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_consumers_ConsumePayloadDynamic_lambda$rebuild$0_arc_struct_Seq_mindustry_gen_Building_mindustry_type_PayloadSeq_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/ConsumePayloadDynamic:lambda$rebuild$0", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(65);
	frame[5].i = (jint(0));
	LINE_NUMBER(66);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[1].o));
	frame[6].o = sp[0].o;
	}
label_2:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[6].o)))(ctx, (frame[6].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o));
	frame[7].o = (checkCast(ctx, &class_mindustry_type_PayloadStack, sp[0].o));
	LINE_NUMBER(67);
	sp[0].o = frame[4].o;
	clinit_mindustry_ui_ReqImage(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_ReqImage);
	sp[2].o = (jobject)((mindustry_type_PayloadStack *) NULL_CHECK((frame[7].o)))->F_item;
	jfloat temp0 = jfloat(((jint)((mindustry_type_PayloadStack *) NULL_CHECK((frame[7].o)))->F_amount));
	sp[3].o = (jobject)((mindustry_world_consumers_Consume *) NULL_CHECK((frame[0].o)))->F_multiplier;
	jfloat temp1 = (jfloat)((func_arc_func_Floatf_get_java_lang_Object_R_float) resolveInterfaceMethod(ctx, &class_arc_func_Floatf, INDEX_arc_func_Floatf_get_java_lang_Object_R_float, sp[3].o))(ctx, sp[3].o, (frame[2].o));
	jint temp2 = (jint)SM_java_lang_Math_round_float_R_int(ctx, (temp0 * temp1));
	sp[2].o = (jobject)SM_mindustry_world_meta_StatValues_stack_mindustry_ctype_UnlockableContent_int_R_arc_scene_ui_layout_Stack(ctx, sp[2].o, temp2);
	{ /* InvokeDynamic */
		clinit_mindustry_world_consumers_ConsumePayloadDynamic_invoke_arc_func_Boolp_1(ctx);
		auto proxy = (mindustry_world_consumers_ConsumePayloadDynamic_invoke_arc_func_Boolp_1 *) gcAlloc(ctx, &class_mindustry_world_consumers_ConsumePayloadDynamic_invoke_arc_func_Boolp_1);
		proxy->F_field3 = (jref) (frame[2].o);
		proxy->F_field2 = (jref) (frame[7].o);
		proxy->F_field1 = (jref) (frame[3].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	init_mindustry_ui_ReqImage_arc_scene_Element_arc_func_Boolp(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	jfloat temp3 = jfloat(8.0f);
	LINE_NUMBER(68);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp3);
	LINE_NUMBER(69);
	INST_IINC(5, 1);
	if (((frame[5].i) % (jint(4))) != 0) goto label_7;
	}
	{
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[4].o));
	}
label_7:;
	LINE_NUMBER(70);
	goto label_2;
label_3:;
	LINE_NUMBER(71);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_world_consumers_ConsumePayloadDynamic_lambda$rebuild$1_mindustry_type_PayloadSeq_mindustry_type_PayloadStack_mindustry_gen_Building_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/ConsumePayloadDynamic:lambda$rebuild$1", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(68);
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

void M_mindustry_world_consumers_ConsumePayloadDynamic_lambda$build$0_arc_scene_ui_layout_Table_Array1_arc_struct_Seq_mindustry_gen_Building_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/ConsumePayloadDynamic:lambda$build$0", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(48);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_world_consumers_ConsumePayloadDynamic_invoke_java_lang_Runnable_1(ctx);
		auto proxy = (mindustry_world_consumers_ConsumePayloadDynamic_invoke_java_lang_Runnable_1 *) gcAlloc(ctx, &class_mindustry_world_consumers_ConsumePayloadDynamic_invoke_java_lang_Runnable_1);
		proxy->F_field3 = (jref) (frame[4].o);
		proxy->F_field2 = (jref) (frame[3].o);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_update_java_lang_Runnable_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_update_java_lang_Runnable_R_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(55);
	((func_mindustry_world_consumers_ConsumePayloadDynamic_rebuild_mindustry_gen_Building_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_consumers_ConsumePayloadDynamic_rebuild_mindustry_gen_Building_arc_scene_ui_layout_Table])(ctx, (frame[0].o), (frame[3].o), (frame[4].o));
	LINE_NUMBER(56);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_consumers_ConsumePayloadDynamic_lambda$build$1_Array1_arc_struct_Seq_mindustry_gen_Building_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/ConsumePayloadDynamic:lambda$build$1", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(49);
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0)));
	sp[1].o = (jobject)((mindustry_world_consumers_ConsumePayloadDynamic *) NULL_CHECK((frame[0].o)))->F_payloads;
	sp[1].o = (jobject)((func_arc_func_Func_get_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Func, INDEX_arc_func_Func_get_java_lang_Object_R_java_lang_Object, sp[1].o))(ctx, sp[1].o, (frame[2].o));
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	LINE_NUMBER(50);
	((func_mindustry_world_consumers_ConsumePayloadDynamic_rebuild_mindustry_gen_Building_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_consumers_ConsumePayloadDynamic_rebuild_mindustry_gen_Building_arc_scene_ui_layout_Table])(ctx, (frame[0].o), (frame[2].o), (frame[3].o));
	LINE_NUMBER(51);
	sp[0].o = frame[1].o;
	jint temp0 = jint(0);
	sp[1].o = (jobject)((mindustry_world_consumers_ConsumePayloadDynamic *) NULL_CHECK((frame[0].o)))->F_payloads;
	sp[1].o = (jobject)((func_arc_func_Func_get_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Func, INDEX_arc_func_Func_get_java_lang_Object_R_java_lang_Object, sp[1].o))(ctx, sp[1].o, (frame[2].o));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = (checkCast(ctx, &class_arc_struct_Seq, sp[1].o));
	}
label_1:;
	LINE_NUMBER(53);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_world_consumers_ConsumePayloadDynamic[] {
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
	(void *) M_mindustry_world_consumers_ConsumePayloadDynamic_build_mindustry_gen_Building_arc_scene_ui_layout_Table,
	(void *) M_mindustry_world_consumers_ConsumePayloadDynamic_trigger_mindustry_gen_Building,
	(void *) M_mindustry_world_consumers_Consume_update_mindustry_gen_Building,
	(void *) M_mindustry_world_consumers_ConsumePayloadDynamic_efficiency_mindustry_gen_Building_R_float,
	(void *) M_mindustry_world_consumers_Consume_efficiencyMultiplier_mindustry_gen_Building_R_float,
	(void *) M_mindustry_world_consumers_ConsumePayloadDynamic_display_mindustry_world_meta_Stats,
	(void *) M_mindustry_world_consumers_ConsumePayloadDynamic_rebuild_mindustry_gen_Building_arc_scene_ui_layout_Table,
	(void *) M_mindustry_world_consumers_ConsumePayloadDynamic_lambda$rebuild$0_arc_struct_Seq_mindustry_gen_Building_mindustry_type_PayloadSeq_arc_scene_ui_layout_Table,
	(void *) M_mindustry_world_consumers_ConsumePayloadDynamic_lambda$rebuild$1_mindustry_type_PayloadSeq_mindustry_type_PayloadStack_mindustry_gen_Building_R_boolean,
	(void *) M_mindustry_world_consumers_ConsumePayloadDynamic_lambda$build$0_arc_scene_ui_layout_Table_Array1_arc_struct_Seq_mindustry_gen_Building_arc_scene_ui_layout_Table,
	(void *) M_mindustry_world_consumers_ConsumePayloadDynamic_lambda$build$1_Array1_arc_struct_Seq_mindustry_gen_Building_arc_scene_ui_layout_Table,
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
	{ "rebuild", "(Lmindustry/gen/Building;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$rebuild$0", "(Larc/struct/Seq;Lmindustry/gen/Building;Lmindustry/type/PayloadSeq;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$rebuild$1", "(Lmindustry/type/PayloadSeq;Lmindustry/type/PayloadStack;Lmindustry/gen/Building;)Z" },
	{ "lambda$build$0", "(Larc/scene/ui/layout/Table;[Larc/struct/Seq;Lmindustry/gen/Building;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$build$1", "([Larc/struct/Seq;Lmindustry/gen/Building;Larc/scene/ui/layout/Table;)V" },
};

static FieldMetadata fields[] {
	{ "payloads", &class_arc_func_Func, offsetof(mindustry_world_consumers_ConsumePayloadDynamic, F_payloads), "Larc/func/Func;", 17 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_consumers_ConsumePayloadDynamic_arc_func_Func, 0, "(Larc/func/Func;)V", 1 },
	{ "efficiency", (intptr_t) M_mindustry_world_consumers_ConsumePayloadDynamic_efficiency_mindustry_gen_Building_R_float, VTABLE_mindustry_world_consumers_ConsumePayloadDynamic_efficiency_mindustry_gen_Building_R_float, "(Lmindustry/gen/Building;)F", 1 },
	{ "trigger", (intptr_t) M_mindustry_world_consumers_ConsumePayloadDynamic_trigger_mindustry_gen_Building, VTABLE_mindustry_world_consumers_ConsumePayloadDynamic_trigger_mindustry_gen_Building, "(Lmindustry/gen/Building;)V", 1 },
	{ "display", (intptr_t) M_mindustry_world_consumers_ConsumePayloadDynamic_display_mindustry_world_meta_Stats, VTABLE_mindustry_world_consumers_ConsumePayloadDynamic_display_mindustry_world_meta_Stats, "(Lmindustry/world/meta/Stats;)V", 1 },
	{ "build", (intptr_t) M_mindustry_world_consumers_ConsumePayloadDynamic_build_mindustry_gen_Building_arc_scene_ui_layout_Table, VTABLE_mindustry_world_consumers_ConsumePayloadDynamic_build_mindustry_gen_Building_arc_scene_ui_layout_Table, "(Lmindustry/gen/Building;Larc/scene/ui/layout/Table;)V", 1 },
	{ "rebuild", (intptr_t) M_mindustry_world_consumers_ConsumePayloadDynamic_rebuild_mindustry_gen_Building_arc_scene_ui_layout_Table, VTABLE_mindustry_world_consumers_ConsumePayloadDynamic_rebuild_mindustry_gen_Building_arc_scene_ui_layout_Table, "(Lmindustry/gen/Building;Larc/scene/ui/layout/Table;)V", 2 },
	{ "lambda$rebuild$0", (intptr_t) M_mindustry_world_consumers_ConsumePayloadDynamic_lambda$rebuild$0_arc_struct_Seq_mindustry_gen_Building_mindustry_type_PayloadSeq_arc_scene_ui_layout_Table, VTABLE_mindustry_world_consumers_ConsumePayloadDynamic_lambda$rebuild$0_arc_struct_Seq_mindustry_gen_Building_mindustry_type_PayloadSeq_arc_scene_ui_layout_Table, "(Larc/struct/Seq;Lmindustry/gen/Building;Lmindustry/type/PayloadSeq;Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$rebuild$1", (intptr_t) M_mindustry_world_consumers_ConsumePayloadDynamic_lambda$rebuild$1_mindustry_type_PayloadSeq_mindustry_type_PayloadStack_mindustry_gen_Building_R_boolean, VTABLE_mindustry_world_consumers_ConsumePayloadDynamic_lambda$rebuild$1_mindustry_type_PayloadSeq_mindustry_type_PayloadStack_mindustry_gen_Building_R_boolean, "(Lmindustry/type/PayloadSeq;Lmindustry/type/PayloadStack;Lmindustry/gen/Building;)Z", 4098 },
	{ "lambda$build$0", (intptr_t) M_mindustry_world_consumers_ConsumePayloadDynamic_lambda$build$0_arc_scene_ui_layout_Table_Array1_arc_struct_Seq_mindustry_gen_Building_arc_scene_ui_layout_Table, VTABLE_mindustry_world_consumers_ConsumePayloadDynamic_lambda$build$0_arc_scene_ui_layout_Table_Array1_arc_struct_Seq_mindustry_gen_Building_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;[Larc/struct/Seq;Lmindustry/gen/Building;Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$build$1", (intptr_t) M_mindustry_world_consumers_ConsumePayloadDynamic_lambda$build$1_Array1_arc_struct_Seq_mindustry_gen_Building_arc_scene_ui_layout_Table, VTABLE_mindustry_world_consumers_ConsumePayloadDynamic_lambda$build$1_Array1_arc_struct_Seq_mindustry_gen_Building_arc_scene_ui_layout_Table, "([Larc/struct/Seq;Lmindustry/gen/Building;Larc/scene/ui/layout/Table;)V", 4098 },
};

Class class_mindustry_world_consumers_ConsumePayloadDynamic{
		.nativeName = (intptr_t) "mindustry/world/consumers/ConsumePayloadDynamic",
		.parentClass = (intptr_t) &class_mindustry_world_consumers_Consume,
		.size = sizeof(mindustry_world_consumers_ConsumePayloadDynamic),
		.classVtable = (intptr_t) vtable_mindustry_world_consumers_ConsumePayloadDynamic,
		.staticInitializer = (intptr_t) clinit_mindustry_world_consumers_ConsumePayloadDynamic,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_world_consumers_ConsumePayloadDynamic,
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
		.methodCount = 10,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 27,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_consumers_ConsumePayloadDynamic = registerClass(&class_mindustry_world_consumers_ConsumePayloadDynamic);

}
