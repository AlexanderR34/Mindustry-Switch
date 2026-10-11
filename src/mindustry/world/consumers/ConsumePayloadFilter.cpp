#include "mindustry/world/consumers/ConsumePayloadFilter.h"
#include "mindustry/ui/MultiReqImage.h"
#include "mindustry/world/Block.h"
#include "mindustry/world/consumers/ConsumePayloadFilter_invoke_arc_func_Boolp_1.h"
#include "mindustry/world/meta/StatValue.h"
#include "arc/func/Boolp.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "mindustry/world/consumers/ConsumePayloadFilter_invoke_arc_func_Boolf_1.h"
#include "arc/func/Cons.h"
#include "mindustry/world/meta/Stat.h"
#include "mindustry/world/consumers/ConsumePayloadFilter.h"
#include "mindustry/core/ContentLoader.h"
#include "arc/struct/Seq.h"
#include "arc/scene/ui/layout/Cell.h"
#include "mindustry/ui/ReqImage.h"
#include "mindustry/type/PayloadSeq.h"
#include "arc/func/Boolf.h"
#include "arc/scene/ui/layout/Stack.h"
#include "mindustry/world/meta/Stats.h"
#include "arc/scene/ui/layout/Table.h"
#include "mindustry/world/meta/StatValues.h"
#include "mindustry/gen/Building.h"
#include "mindustry/world/consumers/ConsumePayloadFilter_invoke_arc_func_Cons_1.h"
#include "arc/scene/Element.h"
#include "java/lang/Object.h"
#include "mindustry/world/consumers/Consume.h"
#include "java/lang/Class.h"
#include "mindustry/Vars.h"

extern "C" {


void mark_mindustry_world_consumers_ConsumePayloadFilter(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_world_consumers_ConsumePayloadFilter *) object;
	if (self->F_fitting)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_fitting)->clazz)->markFunction)((jobject) self->F_fitting, mark, depth + 1);
	if (self->F_filter)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_filter)->clazz)->markFunction)((jobject) self->F_filter, mark, depth + 1);
}

void clinit_mindustry_world_consumers_ConsumePayloadFilter(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_world_consumers_Consume(ctx);
}

void init_mindustry_world_consumers_ConsumePayloadFilter_arc_func_Boolf(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/ConsumePayloadFilter:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_consumers_ConsumePayloadFilter(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(20);
	init_mindustry_world_consumers_Consume(ctx, (frame[0].o));
	LINE_NUMBER(21);
	((mindustry_world_consumers_ConsumePayloadFilter *) NULL_CHECK((frame[0].o)))->F_filter = (jref) (frame[1].o);
	LINE_NUMBER(22);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_blocks_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_blocks_R_arc_struct_Seq])(ctx, sp[1].o);
	sp[1].o = (jobject)((func_arc_struct_Seq_copy_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_copy_R_arc_struct_Seq])(ctx, sp[1].o);
	sp[1].o = (jobject)((func_arc_struct_Seq_as_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_as_R_arc_struct_Seq])(ctx, sp[1].o);
	clinit_mindustry_Vars(ctx);
	sp[2].o = (jobject)SF_mindustry_Vars_content;
	sp[2].o = (jobject)((func_mindustry_core_ContentLoader_units_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_core_ContentLoader_units_R_arc_struct_Seq])(ctx, sp[2].o);
	sp[2].o = (jobject)((func_arc_struct_Seq_as_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_struct_Seq_as_R_arc_struct_Seq])(ctx, sp[2].o);
	sp[1].o = (jobject)((func_arc_struct_Seq_add_arc_struct_Seq_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_add_arc_struct_Seq_R_arc_struct_Seq])(ctx, sp[1].o, sp[2].o);
	sp[2].o = frame[1].o;
	LINE_NUMBER(23);
	sp[1].o = (jobject)((func_arc_struct_Seq_select_arc_func_Boolf_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_select_arc_func_Boolf_R_arc_struct_Seq])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_arc_struct_Seq_toArray_java_lang_Class_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_toArray_java_lang_Class_R_Array1_java_lang_Object])(ctx, sp[1].o, (((jobject) &class_mindustry_ctype_UnlockableContent)));
	((mindustry_world_consumers_ConsumePayloadFilter *) NULL_CHECK(sp[0].o))->F_fitting = (jref) (checkCast(ctx, getArrayClass(&class_mindustry_ctype_UnlockableContent, 1), sp[1].o));
	LINE_NUMBER(24);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_world_consumers_ConsumePayloadFilter_efficiency_mindustry_gen_Building_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/ConsumePayloadFilter:efficiency", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(28);
	sp[0].o = (jobject)((func_mindustry_gen_Building_getPayloads_R_mindustry_type_PayloadSeq) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_getPayloads_R_mindustry_type_PayloadSeq])(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(29);
	sp[0].o = (jobject)((mindustry_world_consumers_ConsumePayloadFilter *) NULL_CHECK((frame[0].o)))->F_fitting;
	frame[3].o = sp[0].o;
	frame[4].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	frame[5].i = (jint(0));
	}
label_2:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_3;
	}
	{
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(30);
	jint temp0 = (jint)((func_mindustry_type_PayloadSeq_contains_mindustry_ctype_UnlockableContent_int_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_type_PayloadSeq_contains_mindustry_ctype_UnlockableContent_int_R_boolean])(ctx, (frame[2].o), (frame[6].o), (jint(1)));
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(31);
	popStackFrame(ctx);
	return (jfloat(1));
	}
label_5:;
	{
	LINE_NUMBER(29);
	INST_IINC(5, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(34);
	popStackFrame(ctx);
	return (jfloat(0));
	}

	popStackFrame(ctx);
}

void M_mindustry_world_consumers_ConsumePayloadFilter_trigger_mindustry_gen_Building(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/ConsumePayloadFilter:trigger", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(39);
	sp[0].o = (jobject)((func_mindustry_gen_Building_getPayloads_R_mindustry_type_PayloadSeq) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_getPayloads_R_mindustry_type_PayloadSeq])(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(40);
	sp[0].o = (jobject)((mindustry_world_consumers_ConsumePayloadFilter *) NULL_CHECK((frame[0].o)))->F_fitting;
	frame[3].o = sp[0].o;
	frame[4].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	frame[5].i = (jint(0));
	}
label_2:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_3;
	}
	{
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(41);
	jint temp0 = (jint)((func_mindustry_type_PayloadSeq_contains_mindustry_ctype_UnlockableContent_int_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_type_PayloadSeq_contains_mindustry_ctype_UnlockableContent_int_R_boolean])(ctx, (frame[2].o), (frame[6].o), (jint(1)));
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(42);
	((func_mindustry_type_PayloadSeq_remove_mindustry_ctype_UnlockableContent) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_type_PayloadSeq_remove_mindustry_ctype_UnlockableContent])(ctx, (frame[2].o), (frame[6].o));
	LINE_NUMBER(43);
	popStackFrame(ctx);
	return;
	}
label_5:;
	{
	LINE_NUMBER(40);
	INST_IINC(5, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(46);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_consumers_ConsumePayloadFilter_display_mindustry_world_meta_Stats(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/ConsumePayloadFilter:display", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(50);
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
	clinit_arc_struct_Seq(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_struct_Seq);
	sp[3].o = (jobject)((mindustry_world_consumers_ConsumePayloadFilter *) NULL_CHECK((frame[0].o)))->F_fitting;
	init_arc_struct_Seq_Array1_java_lang_Object(ctx, sp[2].o, sp[3].o);
	sp[2].o = (jobject)SM_mindustry_world_meta_StatValues_content_arc_struct_Seq_R_mindustry_world_meta_StatValue(ctx, sp[2].o);
	((func_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_world_meta_StatValue) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_world_meta_StatValue])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(51);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_consumers_ConsumePayloadFilter_build_mindustry_gen_Building_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/ConsumePayloadFilter:build", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(55);
	sp[0].o = (jobject)((func_mindustry_gen_Building_getPayloads_R_mindustry_type_PayloadSeq) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_getPayloads_R_mindustry_type_PayloadSeq])(ctx, (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(57);
	clinit_mindustry_ui_MultiReqImage(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_MultiReqImage);
	init_mindustry_ui_MultiReqImage(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(59);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_blocks_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_blocks_R_arc_struct_Seq])(ctx, sp[0].o);
	{ /* InvokeDynamic */
		clinit_mindustry_world_consumers_ConsumePayloadFilter_invoke_arc_func_Boolf_1(ctx);
		auto proxy = (mindustry_world_consumers_ConsumePayloadFilter_invoke_arc_func_Boolf_1 *) gcAlloc(ctx, &class_mindustry_world_consumers_ConsumePayloadFilter_invoke_arc_func_Boolf_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_world_consumers_ConsumePayloadFilter_invoke_arc_func_Cons_1(ctx);
		auto proxy = (mindustry_world_consumers_ConsumePayloadFilter_invoke_arc_func_Cons_1 *) gcAlloc(ctx, &class_mindustry_world_consumers_ConsumePayloadFilter_invoke_arc_func_Cons_1);
		proxy->F_field1 = (jref) (frame[3].o);
		proxy->F_field0 = (jref) (frame[4].o);
		sp[2].o = (jobject) proxy;
	}
	((func_arc_struct_Seq_each_arc_func_Boolf_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_each_arc_func_Boolf_arc_func_Cons])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(64);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, (frame[2].o), (frame[4].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(32.0f)));
	LINE_NUMBER(65);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_world_consumers_ConsumePayloadFilter_lambda$build$1_mindustry_ui_MultiReqImage_mindustry_type_PayloadSeq_mindustry_world_Block(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/ConsumePayloadFilter:lambda$build$1", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_consumers_ConsumePayloadFilter(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(60);
	sp[0].o = frame[0].o;
	clinit_mindustry_ui_ReqImage(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_ReqImage);
	sp[2].o = (jobject)SM_mindustry_world_meta_StatValues_stack_mindustry_ctype_UnlockableContent_int_R_arc_scene_ui_layout_Stack(ctx, (frame[2].o), (jint(1)));
	{ /* InvokeDynamic */
		clinit_mindustry_world_consumers_ConsumePayloadFilter_invoke_arc_func_Boolp_1(ctx);
		auto proxy = (mindustry_world_consumers_ConsumePayloadFilter_invoke_arc_func_Boolp_1 *) gcAlloc(ctx, &class_mindustry_world_consumers_ConsumePayloadFilter_invoke_arc_func_Boolp_1);
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

jbool SM_mindustry_world_consumers_ConsumePayloadFilter_lambda$build$2_mindustry_type_PayloadSeq_mindustry_world_Block_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/ConsumePayloadFilter:lambda$build$2", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_consumers_ConsumePayloadFilter(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(61);
	jint temp0 = (jint)((func_mindustry_type_PayloadSeq_contains_mindustry_ctype_UnlockableContent_int_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_PayloadSeq_contains_mindustry_ctype_UnlockableContent_int_R_boolean])(ctx, (frame[0].o), (frame[1].o), (jint(1)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_consumers_ConsumePayloadFilter_lambda$build$0_mindustry_world_Block_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/ConsumePayloadFilter:lambda$build$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(59);
	sp[0].o = (jobject)((mindustry_world_consumers_ConsumePayloadFilter *) NULL_CHECK((frame[0].o)))->F_filter;
	jint temp0 = (jint)((func_arc_func_Boolf_get_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolf, INDEX_arc_func_Boolf_get_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_world_Block_unlockedNow_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Block_unlockedNow_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_1;
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

void *vtable_mindustry_world_consumers_ConsumePayloadFilter[] {
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
	(void *) M_mindustry_world_consumers_ConsumePayloadFilter_build_mindustry_gen_Building_arc_scene_ui_layout_Table,
	(void *) M_mindustry_world_consumers_ConsumePayloadFilter_trigger_mindustry_gen_Building,
	(void *) M_mindustry_world_consumers_Consume_update_mindustry_gen_Building,
	(void *) M_mindustry_world_consumers_ConsumePayloadFilter_efficiency_mindustry_gen_Building_R_float,
	(void *) M_mindustry_world_consumers_Consume_efficiencyMultiplier_mindustry_gen_Building_R_float,
	(void *) M_mindustry_world_consumers_ConsumePayloadFilter_display_mindustry_world_meta_Stats,
	(void *) M_mindustry_world_consumers_ConsumePayloadFilter_lambda$build$0_mindustry_world_Block_R_boolean,
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
	{ "lambda$build$0", "(Lmindustry/world/Block;)Z" },
};

static FieldMetadata fields[] {
	{ "fitting", getArrayClass(&class_mindustry_ctype_UnlockableContent, 1), offsetof(mindustry_world_consumers_ConsumePayloadFilter, F_fitting), "[Lmindustry/ctype/UnlockableContent;", 20 },
	{ "filter", &class_arc_func_Boolf, offsetof(mindustry_world_consumers_ConsumePayloadFilter, F_filter), "Larc/func/Boolf;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_consumers_ConsumePayloadFilter_arc_func_Boolf, 0, "(Larc/func/Boolf;)V", 1 },
	{ "efficiency", (intptr_t) M_mindustry_world_consumers_ConsumePayloadFilter_efficiency_mindustry_gen_Building_R_float, VTABLE_mindustry_world_consumers_ConsumePayloadFilter_efficiency_mindustry_gen_Building_R_float, "(Lmindustry/gen/Building;)F", 1 },
	{ "trigger", (intptr_t) M_mindustry_world_consumers_ConsumePayloadFilter_trigger_mindustry_gen_Building, VTABLE_mindustry_world_consumers_ConsumePayloadFilter_trigger_mindustry_gen_Building, "(Lmindustry/gen/Building;)V", 1 },
	{ "display", (intptr_t) M_mindustry_world_consumers_ConsumePayloadFilter_display_mindustry_world_meta_Stats, VTABLE_mindustry_world_consumers_ConsumePayloadFilter_display_mindustry_world_meta_Stats, "(Lmindustry/world/meta/Stats;)V", 1 },
	{ "build", (intptr_t) M_mindustry_world_consumers_ConsumePayloadFilter_build_mindustry_gen_Building_arc_scene_ui_layout_Table, VTABLE_mindustry_world_consumers_ConsumePayloadFilter_build_mindustry_gen_Building_arc_scene_ui_layout_Table, "(Lmindustry/gen/Building;Larc/scene/ui/layout/Table;)V", 1 },
	{ "lambda$build$1", (intptr_t) SM_mindustry_world_consumers_ConsumePayloadFilter_lambda$build$1_mindustry_ui_MultiReqImage_mindustry_type_PayloadSeq_mindustry_world_Block, 0, "(Lmindustry/ui/MultiReqImage;Lmindustry/type/PayloadSeq;Lmindustry/world/Block;)V", 4106 },
	{ "lambda$build$2", (intptr_t) SM_mindustry_world_consumers_ConsumePayloadFilter_lambda$build$2_mindustry_type_PayloadSeq_mindustry_world_Block_R_boolean, 0, "(Lmindustry/type/PayloadSeq;Lmindustry/world/Block;)Z", 4106 },
	{ "lambda$build$0", (intptr_t) M_mindustry_world_consumers_ConsumePayloadFilter_lambda$build$0_mindustry_world_Block_R_boolean, VTABLE_mindustry_world_consumers_ConsumePayloadFilter_lambda$build$0_mindustry_world_Block_R_boolean, "(Lmindustry/world/Block;)Z", 4098 },
};

Class class_mindustry_world_consumers_ConsumePayloadFilter{
		.nativeName = (intptr_t) "mindustry/world/consumers/ConsumePayloadFilter",
		.parentClass = (intptr_t) &class_mindustry_world_consumers_Consume,
		.size = sizeof(mindustry_world_consumers_ConsumePayloadFilter),
		.classVtable = (intptr_t) vtable_mindustry_world_consumers_ConsumePayloadFilter,
		.staticInitializer = (intptr_t) clinit_mindustry_world_consumers_ConsumePayloadFilter,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_world_consumers_ConsumePayloadFilter,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 8,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 23,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_consumers_ConsumePayloadFilter = registerClass(&class_mindustry_world_consumers_ConsumePayloadFilter);

}
