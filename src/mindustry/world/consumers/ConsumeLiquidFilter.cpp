#include "mindustry/world/consumers/ConsumeLiquidFilter.h"
#include "mindustry/ui/MultiReqImage.h"
#include "mindustry/world/Block.h"
#include "mindustry/world/consumers/ConsumeLiquidFilter_invoke_arc_func_Cons_3.h"
#include "mindustry/world/consumers/ConsumeLiquidFilter_invoke_arc_func_Cons_2.h"
#include "mindustry/world/meta/StatValue.h"
#include "arc/func/Boolp.h"
#include "mindustry/world/consumers/ConsumeLiquidFilter.h"
#include "java/lang/reflect/Constructor.h"
#include "arc/func/Cons.h"
#include "mindustry/world/meta/Stat.h"
#include "mindustry/core/ContentLoader.h"
#include "arc/struct/Seq.h"
#include "arc/scene/ui/layout/Cell.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/ui/ReqImage.h"
#include "arc/func/Boolf.h"
#include "java/lang/Math.h"
#include "mindustry/world/consumers/ConsumeLiquidFilter_invoke_arc_func_Boolp_1.h"
#include "arc/func/Floatf.h"
#include "java/lang/reflect/Field.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "mindustry/world/meta/Stats.h"
#include "arc/scene/ui/layout/Table.h"
#include "mindustry/type/Liquid.h"
#include "mindustry/world/consumers/ConsumeLiquidFilter_invoke_arc_func_Boolf_5.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/world/consumers/ConsumeLiquidFilter_invoke_arc_func_Boolf_4.h"
#include "mindustry/world/consumers/ConsumeLiquidFilter_invoke_arc_func_Boolf_3.h"
#include "mindustry/world/meta/StatValues.h"
#include "mindustry/world/consumers/ConsumeLiquidBase.h"
#include "arc/util/Nullable.h"
#include "mindustry/gen/Building.h"
#include "arc/scene/Element.h"
#include "java/lang/Object.h"
#include "mindustry/world/consumers/Consume.h"
#include "mindustry/Vars.h"
#include "mindustry/world/modules/LiquidModule.h"

extern "C" {


void mark_mindustry_world_consumers_ConsumeLiquidFilter(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_world_consumers_ConsumeLiquidBase(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_world_consumers_ConsumeLiquidFilter *) object;
	if (self->F_filter)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_filter)->clazz)->markFunction)((jobject) self->F_filter, mark, depth + 1);
}

void clinit_mindustry_world_consumers_ConsumeLiquidFilter(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_world_consumers_ConsumeLiquidBase(ctx);
}

void init_mindustry_world_consumers_ConsumeLiquidFilter_arc_func_Boolf_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/ConsumeLiquidFilter:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_consumers_ConsumeLiquidFilter(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(19);
	init_mindustry_world_consumers_ConsumeLiquidBase_float(ctx, (frame[0].o), (frame[2].f));
	LINE_NUMBER(16);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_world_consumers_ConsumeLiquidFilter_invoke_arc_func_Boolf_3(ctx);
		auto proxy = (mindustry_world_consumers_ConsumeLiquidFilter_invoke_arc_func_Boolf_3 *) gcAlloc(ctx, &class_mindustry_world_consumers_ConsumeLiquidFilter_invoke_arc_func_Boolf_3);
		sp[1].o = (jobject) proxy;
	}
	((mindustry_world_consumers_ConsumeLiquidFilter *) NULL_CHECK(sp[0].o))->F_filter = (jref) sp[1].o;
	LINE_NUMBER(20);
	((mindustry_world_consumers_ConsumeLiquidFilter *) NULL_CHECK((frame[0].o)))->F_filter = (jref) (frame[1].o);
	LINE_NUMBER(21);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_world_consumers_ConsumeLiquidFilter(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/ConsumeLiquidFilter:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_consumers_ConsumeLiquidFilter(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(23);
	init_mindustry_world_consumers_ConsumeLiquidBase(ctx, (frame[0].o));
	LINE_NUMBER(16);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_world_consumers_ConsumeLiquidFilter_invoke_arc_func_Boolf_4(ctx);
		auto proxy = (mindustry_world_consumers_ConsumeLiquidFilter_invoke_arc_func_Boolf_4 *) gcAlloc(ctx, &class_mindustry_world_consumers_ConsumeLiquidFilter_invoke_arc_func_Boolf_4);
		sp[1].o = (jobject) proxy;
	}
	((mindustry_world_consumers_ConsumeLiquidFilter *) NULL_CHECK(sp[0].o))->F_filter = (jref) sp[1].o;
	LINE_NUMBER(24);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_consumers_ConsumeLiquidFilter_apply_mindustry_world_Block(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/ConsumeLiquidFilter:apply", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(28);
	((mindustry_world_Block *) NULL_CHECK((frame[1].o)))->F_hasLiquids = (jint(1));
	LINE_NUMBER(29);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_liquids_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_liquids_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[1].o = (jobject)((mindustry_world_consumers_ConsumeLiquidFilter *) NULL_CHECK((frame[0].o)))->F_filter;
	{ /* InvokeDynamic */
		clinit_mindustry_world_consumers_ConsumeLiquidFilter_invoke_arc_func_Cons_2(ctx);
		auto proxy = (mindustry_world_consumers_ConsumeLiquidFilter_invoke_arc_func_Cons_2 *) gcAlloc(ctx, &class_mindustry_world_consumers_ConsumeLiquidFilter_invoke_arc_func_Cons_2);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[2].o = (jobject) proxy;
	}
	((func_arc_struct_Seq_each_arc_func_Boolf_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_each_arc_func_Boolf_arc_func_Cons])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(32);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_consumers_ConsumeLiquidFilter_build_mindustry_gen_Building_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/ConsumeLiquidFilter:build", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(36);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_liquids_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_liquids_R_arc_struct_Seq])(ctx, sp[0].o);
	{ /* InvokeDynamic */
		clinit_mindustry_world_consumers_ConsumeLiquidFilter_invoke_arc_func_Boolf_5(ctx);
		auto proxy = (mindustry_world_consumers_ConsumeLiquidFilter_invoke_arc_func_Boolf_5 *) gcAlloc(ctx, &class_mindustry_world_consumers_ConsumeLiquidFilter_invoke_arc_func_Boolf_5);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_select_arc_func_Boolf_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_select_arc_func_Boolf_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(37);
	clinit_mindustry_ui_MultiReqImage(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_MultiReqImage);
	init_mindustry_ui_MultiReqImage(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(38);
	sp[0].o = frame[3].o;
	{ /* InvokeDynamic */
		clinit_mindustry_world_consumers_ConsumeLiquidFilter_invoke_arc_func_Cons_3(ctx);
		auto proxy = (mindustry_world_consumers_ConsumeLiquidFilter_invoke_arc_func_Cons_3 *) gcAlloc(ctx, &class_mindustry_world_consumers_ConsumeLiquidFilter_invoke_arc_func_Cons_3);
		proxy->F_field2 = (jref) (frame[1].o);
		proxy->F_field1 = (jref) (frame[4].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_struct_Seq_each_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_each_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(40);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, (frame[2].o), (frame[4].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(32.0f)));
	LINE_NUMBER(41);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_consumers_ConsumeLiquidFilter_update_mindustry_gen_Building(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/ConsumeLiquidFilter:update", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(45);
	sp[0].o = (jobject)((func_mindustry_world_consumers_ConsumeLiquidFilter_getConsumed_mindustry_gen_Building_R_mindustry_type_Liquid) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_consumers_ConsumeLiquidFilter_getConsumed_mindustry_gen_Building_R_mindustry_type_Liquid])(ctx, (frame[0].o), (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(46);
	if ((frame[2].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(47);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_liquids;
	sp[1].o = frame[2].o;
	jfloat temp0 = (jfloat)((mindustry_world_consumers_ConsumeLiquidBase *) NULL_CHECK((frame[0].o)))->F_amount;
	jfloat temp1 = (jfloat)((func_mindustry_gen_Building_edelta_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_edelta_R_float])(ctx, (frame[1].o));
	jfloat temp2 = temp0 * temp1;
	sp[2].o = (jobject)((mindustry_world_consumers_Consume *) NULL_CHECK((frame[0].o)))->F_multiplier;
	jfloat temp3 = (jfloat)((func_arc_func_Floatf_get_java_lang_Object_R_float) resolveInterfaceMethod(ctx, &class_arc_func_Floatf, INDEX_arc_func_Floatf_get_java_lang_Object_R_float, sp[2].o))(ctx, sp[2].o, (frame[1].o));
	((func_mindustry_world_modules_LiquidModule_remove_mindustry_type_Liquid_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_remove_mindustry_type_Liquid_float])(ctx, sp[0].o, sp[1].o, (temp2 * temp3));
	}
label_2:;
	LINE_NUMBER(49);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jfloat M_mindustry_world_consumers_ConsumeLiquidFilter_efficiency_mindustry_gen_Building_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/ConsumeLiquidFilter:efficiency", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(53);
	sp[0].o = (jobject)((func_mindustry_world_consumers_ConsumeLiquidFilter_getConsumed_mindustry_gen_Building_R_mindustry_type_Liquid) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_consumers_ConsumeLiquidFilter_getConsumed_mindustry_gen_Building_R_mindustry_type_Liquid])(ctx, (frame[0].o), (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(54);
	jfloat temp0 = (jfloat)((func_mindustry_gen_Building_edelta_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_edelta_R_float])(ctx, (frame[1].o));
	frame[3].f = temp0;
	LINE_NUMBER(55);
	if ((floatCompare((frame[3].f), (jfloat(1,000000e-08f)), 1)) > 0) goto label_3;
	}
	INST_FCONST(0);
	popStackFrame(ctx);
	INST_FRETURN();
label_3:;
	{
	LINE_NUMBER(56);
	if ((frame[2].o) == nullptr) goto label_4;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_liquids;
	jfloat temp0 = (jfloat)((func_mindustry_world_modules_LiquidModule_get_mindustry_type_Liquid_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_get_mindustry_type_Liquid_R_float])(ctx, sp[0].o, (frame[2].o));
	jfloat temp1 = ((jfloat)((mindustry_world_consumers_ConsumeLiquidBase *) NULL_CHECK((frame[0].o)))->F_amount) * (frame[3].f);
	sp[0].o = (jobject)((mindustry_world_consumers_Consume *) NULL_CHECK((frame[0].o)))->F_multiplier;
	jfloat temp2 = (jfloat)((func_arc_func_Floatf_get_java_lang_Object_R_float) resolveInterfaceMethod(ctx, &class_arc_func_Floatf, INDEX_arc_func_Floatf_get_java_lang_Object_R_float, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	jfloat temp3 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, (temp0 / (temp1 * temp2)), (jfloat(1)));
	sp[0].f = temp3;
	sp += 1;
	goto label_5;
	}
label_4:;
	INST_FCONST(0);
label_5:;
	popStackFrame(ctx);
	INST_FRETURN();

	popStackFrame(ctx);
}

jfloat M_mindustry_world_consumers_ConsumeLiquidFilter_efficiencyMultiplier_mindustry_gen_Building_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/ConsumeLiquidFilter:efficiencyMultiplier", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(61);
	sp[0].o = (jobject)((func_mindustry_world_consumers_ConsumeLiquidFilter_getConsumed_mindustry_gen_Building_R_mindustry_type_Liquid) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_consumers_ConsumeLiquidFilter_getConsumed_mindustry_gen_Building_R_mindustry_type_Liquid])(ctx, (frame[0].o), (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(62);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	INST_FCONST(0);
	goto label_3;
label_2:;
	{
	jfloat temp0 = (jfloat)((func_mindustry_world_consumers_ConsumeLiquidFilter_liquidEfficiencyMultiplier_mindustry_type_Liquid_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_consumers_ConsumeLiquidFilter_liquidEfficiencyMultiplier_mindustry_type_Liquid_R_float])(ctx, (frame[0].o), (frame[2].o));
	sp[0].f = temp0;
	sp += 1;
	}
label_3:;
	popStackFrame(ctx);
	INST_FRETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_world_consumers_ConsumeLiquidFilter_getConsumed_mindustry_gen_Building_R_mindustry_type_Liquid(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/ConsumeLiquidFilter:getConsumed", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(66);
	sp[0].o = (jobject)((mindustry_world_consumers_ConsumeLiquidFilter *) NULL_CHECK((frame[0].o)))->F_filter;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_liquids;
	sp[1].o = (jobject)((func_mindustry_world_modules_LiquidModule_current_R_mindustry_type_Liquid) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_current_R_mindustry_type_Liquid])(ctx, sp[1].o);
	jint temp0 = (jint)((func_arc_func_Boolf_get_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolf, INDEX_arc_func_Boolf_get_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_liquids;
	jfloat temp0 = (jfloat)((func_mindustry_world_modules_LiquidModule_currentAmount_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_currentAmount_R_float])(ctx, sp[0].o);
	if ((floatCompare(temp0, (jfloat(0)), -1)) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(67);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_liquids;
	sp[0].o = (jobject)((func_mindustry_world_modules_LiquidModule_current_R_mindustry_type_Liquid) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_current_R_mindustry_type_Liquid])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(70);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_liquids_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_liquids_R_arc_struct_Seq])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(72);
	frame[3].i = (jint(0));
	}
label_4:;
	{
	if ((frame[3].i) >= ((jint)((arc_struct_Seq *) NULL_CHECK((frame[2].o)))->F_size)) goto label_5;
	}
	{
	LINE_NUMBER(73);
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[2].o), (frame[3].i));
	frame[4].o = (checkCast(ctx, &class_mindustry_type_Liquid, sp[0].o));
	LINE_NUMBER(74);
	sp[0].o = (jobject)((mindustry_world_consumers_ConsumeLiquidFilter *) NULL_CHECK((frame[0].o)))->F_filter;
	jint temp0 = (jint)((func_arc_func_Boolf_get_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolf, INDEX_arc_func_Boolf_get_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, (frame[4].o));
	if (temp0 == 0) goto label_8;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_liquids;
	jfloat temp0 = (jfloat)((func_mindustry_world_modules_LiquidModule_get_mindustry_type_Liquid_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_get_mindustry_type_Liquid_R_float])(ctx, sp[0].o, (frame[4].o));
	if ((floatCompare(temp0, (jfloat(0)), -1)) <= 0) goto label_8;
	}
	{
	LINE_NUMBER(75);
	popStackFrame(ctx);
	return (frame[4].o);
	}
label_8:;
	{
	LINE_NUMBER(72);
	INST_IINC(3, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(78);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

void M_mindustry_world_consumers_ConsumeLiquidFilter_display_mindustry_world_meta_Stats(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/ConsumeLiquidFilter:display", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(83);
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
	sp[2].o = (jobject)((mindustry_world_consumers_ConsumeLiquidFilter *) NULL_CHECK((frame[0].o)))->F_filter;
	sp[2].o = (jobject)SM_mindustry_world_meta_StatValues_liquids_arc_func_Boolf_float_boolean_R_mindustry_world_meta_StatValue(ctx, sp[2].o, (((jfloat)((mindustry_world_consumers_ConsumeLiquidBase *) NULL_CHECK((frame[0].o)))->F_amount) * (jfloat(60.0f))), (jint(1)));
	((func_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_world_meta_StatValue) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_world_meta_StatValue])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(84);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_consumers_ConsumeLiquidFilter_consumes_mindustry_type_Liquid_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/ConsumeLiquidFilter:consumes", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(88);
	sp[0].o = (jobject)((mindustry_world_consumers_ConsumeLiquidFilter *) NULL_CHECK((frame[0].o)))->F_filter;
	jint temp0 = (jint)((func_arc_func_Boolf_get_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolf, INDEX_arc_func_Boolf_get_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_world_consumers_ConsumeLiquidFilter_liquidEfficiencyMultiplier_mindustry_type_Liquid_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/ConsumeLiquidFilter:liquidEfficiencyMultiplier", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(92);
	popStackFrame(ctx);
	return (jfloat(1));
	}

	popStackFrame(ctx);
}

void M_mindustry_world_consumers_ConsumeLiquidFilter_lambda$build$1_mindustry_ui_MultiReqImage_mindustry_gen_Building_mindustry_type_Liquid(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/ConsumeLiquidFilter:lambda$build$1", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(38);
	sp[0].o = frame[1].o;
	clinit_mindustry_ui_ReqImage(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_ReqImage);
	sp[2].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[3].o)))->F_uiIcon;
	{ /* InvokeDynamic */
		clinit_mindustry_world_consumers_ConsumeLiquidFilter_invoke_arc_func_Boolp_1(ctx);
		auto proxy = (mindustry_world_consumers_ConsumeLiquidFilter_invoke_arc_func_Boolp_1 *) gcAlloc(ctx, &class_mindustry_world_consumers_ConsumeLiquidFilter_invoke_arc_func_Boolp_1);
		proxy->F_field2 = (jref) (frame[3].o);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	init_mindustry_ui_ReqImage_arc_graphics_g2d_TextureRegion_arc_func_Boolp(ctx, sp[1].o, sp[2].o, sp[3].o);
	((func_mindustry_ui_MultiReqImage_add_mindustry_ui_ReqImage) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_MultiReqImage_add_mindustry_ui_ReqImage])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_consumers_ConsumeLiquidFilter_lambda$build$2_mindustry_gen_Building_mindustry_type_Liquid_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/ConsumeLiquidFilter:lambda$build$2", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(38);
	sp[0].o = (jobject)((func_mindustry_world_consumers_ConsumeLiquidFilter_getConsumed_mindustry_gen_Building_R_mindustry_type_Liquid) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_consumers_ConsumeLiquidFilter_getConsumed_mindustry_gen_Building_R_mindustry_type_Liquid])(ctx, (frame[0].o), (frame[1].o));
	if (sp[0].o != (frame[2].o)) goto label_1;
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

jbool M_mindustry_world_consumers_ConsumeLiquidFilter_lambda$build$0_mindustry_type_Liquid_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/ConsumeLiquidFilter:lambda$build$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(36);
	jint temp0 = (jint)((func_mindustry_type_Liquid_isHidden_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_type_Liquid_isHidden_R_boolean])(ctx, (frame[1].o));
	if (temp0 != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_world_consumers_ConsumeLiquidFilter *) NULL_CHECK((frame[0].o)))->F_filter;
	jint temp0 = (jint)((func_arc_func_Boolf_get_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolf, INDEX_arc_func_Boolf_get_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, (frame[1].o));
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

void SM_mindustry_world_consumers_ConsumeLiquidFilter_lambda$apply$0_mindustry_world_Block_mindustry_type_Liquid(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/ConsumeLiquidFilter:lambda$apply$0", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_consumers_ConsumeLiquidFilter(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(30);
	jint temp0 = (jint)((mindustry_ctype_Content *) NULL_CHECK((frame[1].o)))->F_id;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_liquidFilter;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_liquidFilter;
	ARRAY_ACCESS(jbyte, sp[0].o, ((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[1].o)))->F_id)) = (jint(1));
	}
label_1:;
	LINE_NUMBER(31);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_world_consumers_ConsumeLiquidFilter_lambda$new$0_mindustry_type_Liquid_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/ConsumeLiquidFilter:lambda$new$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_consumers_ConsumeLiquidFilter(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(16);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_world_consumers_ConsumeLiquidFilter;
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

void *vtable_mindustry_world_consumers_ConsumeLiquidFilter[] {
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
	(void *) M_mindustry_world_consumers_ConsumeLiquidFilter_apply_mindustry_world_Block,
	(void *) M_mindustry_world_consumers_Consume_optional_boolean_boolean_R_mindustry_world_consumers_Consume,
	(void *) M_mindustry_world_consumers_Consume_boost_R_mindustry_world_consumers_Consume,
	(void *) M_mindustry_world_consumers_Consume_update_boolean_R_mindustry_world_consumers_Consume,
	(void *) M_mindustry_world_consumers_Consume_ignore_R_boolean,
	(void *) M_mindustry_world_consumers_ConsumeLiquidFilter_build_mindustry_gen_Building_arc_scene_ui_layout_Table,
	(void *) M_mindustry_world_consumers_Consume_trigger_mindustry_gen_Building,
	(void *) M_mindustry_world_consumers_ConsumeLiquidFilter_update_mindustry_gen_Building,
	(void *) M_mindustry_world_consumers_ConsumeLiquidFilter_efficiency_mindustry_gen_Building_R_float,
	(void *) M_mindustry_world_consumers_ConsumeLiquidFilter_efficiencyMultiplier_mindustry_gen_Building_R_float,
	(void *) M_mindustry_world_consumers_ConsumeLiquidFilter_display_mindustry_world_meta_Stats,
	(void *) M_mindustry_world_consumers_ConsumeLiquidFilter_consumes_mindustry_type_Liquid_R_boolean,
	(void *) M_mindustry_world_consumers_ConsumeLiquidFilter_getConsumed_mindustry_gen_Building_R_mindustry_type_Liquid,
	(void *) M_mindustry_world_consumers_ConsumeLiquidFilter_liquidEfficiencyMultiplier_mindustry_type_Liquid_R_float,
	(void *) M_mindustry_world_consumers_ConsumeLiquidFilter_lambda$build$1_mindustry_ui_MultiReqImage_mindustry_gen_Building_mindustry_type_Liquid,
	(void *) M_mindustry_world_consumers_ConsumeLiquidFilter_lambda$build$2_mindustry_gen_Building_mindustry_type_Liquid_R_boolean,
	(void *) M_mindustry_world_consumers_ConsumeLiquidFilter_lambda$build$0_mindustry_type_Liquid_R_boolean,
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
	{ "consumes", "(Lmindustry/type/Liquid;)Z" },
	{ "getConsumed", "(Lmindustry/gen/Building;)Lmindustry/type/Liquid;" },
	{ "liquidEfficiencyMultiplier", "(Lmindustry/type/Liquid;)F" },
	{ "lambda$build$1", "(Lmindustry/ui/MultiReqImage;Lmindustry/gen/Building;Lmindustry/type/Liquid;)V" },
	{ "lambda$build$2", "(Lmindustry/gen/Building;Lmindustry/type/Liquid;)Z" },
	{ "lambda$build$0", "(Lmindustry/type/Liquid;)Z" },
};

static FieldMetadata fields[] {
	{ "filter", &class_arc_func_Boolf, offsetof(mindustry_world_consumers_ConsumeLiquidFilter, F_filter), "Larc/func/Boolf;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_consumers_ConsumeLiquidFilter_arc_func_Boolf_float, 0, "(Larc/func/Boolf;F)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_world_consumers_ConsumeLiquidFilter, 0, "()V", 1 },
	{ "apply", (intptr_t) M_mindustry_world_consumers_ConsumeLiquidFilter_apply_mindustry_world_Block, VTABLE_mindustry_world_consumers_ConsumeLiquidFilter_apply_mindustry_world_Block, "(Lmindustry/world/Block;)V", 1 },
	{ "build", (intptr_t) M_mindustry_world_consumers_ConsumeLiquidFilter_build_mindustry_gen_Building_arc_scene_ui_layout_Table, VTABLE_mindustry_world_consumers_ConsumeLiquidFilter_build_mindustry_gen_Building_arc_scene_ui_layout_Table, "(Lmindustry/gen/Building;Larc/scene/ui/layout/Table;)V", 1 },
	{ "update", (intptr_t) M_mindustry_world_consumers_ConsumeLiquidFilter_update_mindustry_gen_Building, VTABLE_mindustry_world_consumers_ConsumeLiquidFilter_update_mindustry_gen_Building, "(Lmindustry/gen/Building;)V", 1 },
	{ "efficiency", (intptr_t) M_mindustry_world_consumers_ConsumeLiquidFilter_efficiency_mindustry_gen_Building_R_float, VTABLE_mindustry_world_consumers_ConsumeLiquidFilter_efficiency_mindustry_gen_Building_R_float, "(Lmindustry/gen/Building;)F", 1 },
	{ "efficiencyMultiplier", (intptr_t) M_mindustry_world_consumers_ConsumeLiquidFilter_efficiencyMultiplier_mindustry_gen_Building_R_float, VTABLE_mindustry_world_consumers_ConsumeLiquidFilter_efficiencyMultiplier_mindustry_gen_Building_R_float, "(Lmindustry/gen/Building;)F", 1 },
	{ "getConsumed", (intptr_t) M_mindustry_world_consumers_ConsumeLiquidFilter_getConsumed_mindustry_gen_Building_R_mindustry_type_Liquid, VTABLE_mindustry_world_consumers_ConsumeLiquidFilter_getConsumed_mindustry_gen_Building_R_mindustry_type_Liquid, "(Lmindustry/gen/Building;)Lmindustry/type/Liquid;", 1 },
	{ "display", (intptr_t) M_mindustry_world_consumers_ConsumeLiquidFilter_display_mindustry_world_meta_Stats, VTABLE_mindustry_world_consumers_ConsumeLiquidFilter_display_mindustry_world_meta_Stats, "(Lmindustry/world/meta/Stats;)V", 1 },
	{ "consumes", (intptr_t) M_mindustry_world_consumers_ConsumeLiquidFilter_consumes_mindustry_type_Liquid_R_boolean, VTABLE_mindustry_world_consumers_ConsumeLiquidFilter_consumes_mindustry_type_Liquid_R_boolean, "(Lmindustry/type/Liquid;)Z", 1 },
	{ "liquidEfficiencyMultiplier", (intptr_t) M_mindustry_world_consumers_ConsumeLiquidFilter_liquidEfficiencyMultiplier_mindustry_type_Liquid_R_float, VTABLE_mindustry_world_consumers_ConsumeLiquidFilter_liquidEfficiencyMultiplier_mindustry_type_Liquid_R_float, "(Lmindustry/type/Liquid;)F", 1 },
	{ "lambda$build$1", (intptr_t) M_mindustry_world_consumers_ConsumeLiquidFilter_lambda$build$1_mindustry_ui_MultiReqImage_mindustry_gen_Building_mindustry_type_Liquid, VTABLE_mindustry_world_consumers_ConsumeLiquidFilter_lambda$build$1_mindustry_ui_MultiReqImage_mindustry_gen_Building_mindustry_type_Liquid, "(Lmindustry/ui/MultiReqImage;Lmindustry/gen/Building;Lmindustry/type/Liquid;)V", 4098 },
	{ "lambda$build$2", (intptr_t) M_mindustry_world_consumers_ConsumeLiquidFilter_lambda$build$2_mindustry_gen_Building_mindustry_type_Liquid_R_boolean, VTABLE_mindustry_world_consumers_ConsumeLiquidFilter_lambda$build$2_mindustry_gen_Building_mindustry_type_Liquid_R_boolean, "(Lmindustry/gen/Building;Lmindustry/type/Liquid;)Z", 4098 },
	{ "lambda$build$0", (intptr_t) M_mindustry_world_consumers_ConsumeLiquidFilter_lambda$build$0_mindustry_type_Liquid_R_boolean, VTABLE_mindustry_world_consumers_ConsumeLiquidFilter_lambda$build$0_mindustry_type_Liquid_R_boolean, "(Lmindustry/type/Liquid;)Z", 4098 },
	{ "lambda$apply$0", (intptr_t) SM_mindustry_world_consumers_ConsumeLiquidFilter_lambda$apply$0_mindustry_world_Block_mindustry_type_Liquid, 0, "(Lmindustry/world/Block;Lmindustry/type/Liquid;)V", 4106 },
	{ "lambda$new$0", (intptr_t) SM_mindustry_world_consumers_ConsumeLiquidFilter_lambda$new$0_mindustry_type_Liquid_R_boolean, 0, "(Lmindustry/type/Liquid;)Z", 4106 },
};

Class class_mindustry_world_consumers_ConsumeLiquidFilter{
		.nativeName = (intptr_t) "mindustry/world/consumers/ConsumeLiquidFilter",
		.parentClass = (intptr_t) &class_mindustry_world_consumers_ConsumeLiquidBase,
		.size = sizeof(mindustry_world_consumers_ConsumeLiquidFilter),
		.classVtable = (intptr_t) vtable_mindustry_world_consumers_ConsumeLiquidFilter,
		.staticInitializer = (intptr_t) clinit_mindustry_world_consumers_ConsumeLiquidFilter,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_world_consumers_ConsumeLiquidFilter,
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
		.vtableSize = 28,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_consumers_ConsumeLiquidFilter = registerClass(&class_mindustry_world_consumers_ConsumeLiquidFilter);

}
