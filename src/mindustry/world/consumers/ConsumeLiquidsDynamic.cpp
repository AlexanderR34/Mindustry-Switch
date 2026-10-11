#include "mindustry/world/consumers/ConsumeLiquidsDynamic.h"
#include "mindustry/world/consumers/ConsumeLiquidsDynamic_invoke_arc_func_Cons_1.h"
#include "java/lang/Math.h"
#include "arc/func/Floatf.h"
#include "arc/func/Func.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "mindustry/world/Block.h"
#include "arc/scene/Group.h"
#include "arc/scene/ui/layout/Table.h"
#include "mindustry/type/Liquid.h"
#include "arc/func/Boolp.h"
#include "mindustry/type/LiquidStack.h"
#include "mindustry/world/consumers/ConsumeLiquidsDynamic_invoke_arc_func_Boolp_1.h"
#include "mindustry/world/consumers/ConsumeLiquidsDynamic_invoke_java_lang_Runnable_1.h"
#include "mindustry/gen/Building.h"
#include "java/lang/Runnable.h"
#include "arc/func/Cons.h"
#include "java/lang/Object.h"
#include "arc/scene/Element.h"
#include "mindustry/world/consumers/Consume.h"
#include "mindustry/world/consumers/ConsumeLiquidsDynamic.h"
#include "arc/scene/ui/layout/Cell.h"
#include "mindustry/ui/ReqImage.h"
#include "mindustry/world/modules/LiquidModule.h"

extern "C" {


void mark_mindustry_world_consumers_ConsumeLiquidsDynamic(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_world_consumers_ConsumeLiquidsDynamic *) object;
	if (self->F_liquids)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_liquids)->clazz)->markFunction)((jobject) self->F_liquids, mark, depth + 1);
}

void clinit_mindustry_world_consumers_ConsumeLiquidsDynamic(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_world_consumers_Consume(ctx);
}

void init_mindustry_world_consumers_ConsumeLiquidsDynamic_arc_func_Func(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/ConsumeLiquidsDynamic:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_consumers_ConsumeLiquidsDynamic(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(15);
	init_mindustry_world_consumers_Consume(ctx, (frame[0].o));
	LINE_NUMBER(16);
	((mindustry_world_consumers_ConsumeLiquidsDynamic *) NULL_CHECK((frame[0].o)))->F_liquids = (jref) (frame[1].o);
	LINE_NUMBER(17);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_consumers_ConsumeLiquidsDynamic_apply_mindustry_world_Block(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/ConsumeLiquidsDynamic:apply", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(21);
	((mindustry_world_Block *) NULL_CHECK((frame[1].o)))->F_hasLiquids = (jint(1));
	LINE_NUMBER(22);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_consumers_ConsumeLiquidsDynamic_build_mindustry_gen_Building_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/ConsumeLiquidsDynamic:build", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(26);
	sp[0].o = (jobject)createArray(ctx, getArrayClass(&class_mindustry_type_LiquidStack, 1), (jint(1)));
	jint temp0 = jint(0);
	sp[1].o = (jobject)((mindustry_world_consumers_ConsumeLiquidsDynamic *) NULL_CHECK((frame[0].o)))->F_liquids;
	sp[1].o = (jobject)((func_arc_func_Func_get_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Func, INDEX_arc_func_Func_get_java_lang_Object_R_java_lang_Object, sp[1].o))(ctx, sp[1].o, (frame[1].o));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = (checkCast(ctx, getArrayClass(&class_mindustry_type_LiquidStack, 1), sp[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(28);
	sp[0].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_world_consumers_ConsumeLiquidsDynamic_invoke_arc_func_Cons_1(ctx);
		auto proxy = (mindustry_world_consumers_ConsumeLiquidsDynamic_invoke_arc_func_Cons_1 *) gcAlloc(ctx, &class_mindustry_world_consumers_ConsumeLiquidsDynamic_invoke_arc_func_Cons_1);
		proxy->F_field3 = (jref) (frame[1].o);
		proxy->F_field2 = (jref) (frame[3].o);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(38);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_consumers_ConsumeLiquidsDynamic_rebuild_mindustry_gen_Building_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/ConsumeLiquidsDynamic:rebuild", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(41);
	((func_arc_scene_ui_layout_Table_clear) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_clear])(ctx, (frame[2].o));
	LINE_NUMBER(42);
	frame[3].i = (jint(0));
	LINE_NUMBER(44);
	sp[0].o = (jobject)((mindustry_world_consumers_ConsumeLiquidsDynamic *) NULL_CHECK((frame[0].o)))->F_liquids;
	sp[0].o = (jobject)((func_arc_func_Func_get_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Func, INDEX_arc_func_Func_get_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	frame[4].o = (checkCast(ctx, getArrayClass(&class_mindustry_type_LiquidStack, 1), sp[0].o));
	frame[5].i = (((jarray) nullCheck(ctx, (frame[4].o)))->length);
	frame[6].i = (jint(0));
	}
label_3:;
	{
	if ((frame[6].i) >= (frame[5].i)) goto label_4;
	}
	{
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[6].i)));
	LINE_NUMBER(45);
	sp[0].o = frame[2].o;
	clinit_mindustry_ui_ReqImage(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_ReqImage);
	sp[2].o = (jobject)((mindustry_type_LiquidStack *) NULL_CHECK((frame[7].o)))->F_liquid;
	sp[2].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[2].o))->F_uiIcon;
	{ /* InvokeDynamic */
		clinit_mindustry_world_consumers_ConsumeLiquidsDynamic_invoke_arc_func_Boolp_1(ctx);
		auto proxy = (mindustry_world_consumers_ConsumeLiquidsDynamic_invoke_arc_func_Boolp_1 *) gcAlloc(ctx, &class_mindustry_world_consumers_ConsumeLiquidsDynamic_invoke_arc_func_Boolp_1);
		proxy->F_field1 = (jref) (frame[7].o);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[3].o = (jobject) proxy;
	}
	init_mindustry_ui_ReqImage_arc_graphics_g2d_TextureRegion_arc_func_Boolp(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	jfloat temp0 = jfloat(32.0f);
	LINE_NUMBER(46);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(8.0f)));
	LINE_NUMBER(47);
	INST_IINC(3, 1);
	if (((frame[3].i) % (jint(4))) != 0) goto label_8;
	}
	{
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	}
label_8:;
	{
	LINE_NUMBER(44);
	INST_IINC(6, 1);
	goto label_3;
	}
label_4:;
	LINE_NUMBER(49);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_consumers_ConsumeLiquidsDynamic_update_mindustry_gen_Building(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/ConsumeLiquidsDynamic:update", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(53);
	sp[0].o = (jobject)((mindustry_world_consumers_Consume *) NULL_CHECK((frame[0].o)))->F_multiplier;
	jfloat temp0 = (jfloat)((func_arc_func_Floatf_get_java_lang_Object_R_float) resolveInterfaceMethod(ctx, &class_arc_func_Floatf, INDEX_arc_func_Floatf_get_java_lang_Object_R_float, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	frame[2].f = temp0;
	LINE_NUMBER(54);
	sp[0].o = (jobject)((mindustry_world_consumers_ConsumeLiquidsDynamic *) NULL_CHECK((frame[0].o)))->F_liquids;
	sp[0].o = (jobject)((func_arc_func_Func_get_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Func, INDEX_arc_func_Func_get_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	frame[3].o = (checkCast(ctx, getArrayClass(&class_mindustry_type_LiquidStack, 1), sp[0].o));
	frame[4].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	frame[5].i = (jint(0));
	}
label_2:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_3;
	}
	{
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(55);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_liquids;
	sp[1].o = (jobject)((mindustry_type_LiquidStack *) NULL_CHECK((frame[6].o)))->F_liquid;
	jfloat temp0 = (jfloat)((mindustry_type_LiquidStack *) NULL_CHECK((frame[6].o)))->F_amount;
	jfloat temp1 = (jfloat)((func_mindustry_gen_Building_edelta_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_edelta_R_float])(ctx, (frame[1].o));
	((func_mindustry_world_modules_LiquidModule_remove_mindustry_type_Liquid_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_remove_mindustry_type_Liquid_float])(ctx, sp[0].o, sp[1].o, ((temp0 * temp1) * (frame[2].f)));
	LINE_NUMBER(54);
	INST_IINC(5, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(57);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jfloat M_mindustry_world_consumers_ConsumeLiquidsDynamic_efficiency_mindustry_gen_Building_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/ConsumeLiquidsDynamic:efficiency", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(61);
	jfloat temp0 = (jfloat)((func_mindustry_gen_Building_edelta_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_edelta_R_float])(ctx, (frame[1].o));
	frame[2].f = temp0;
	LINE_NUMBER(62);
	if ((floatCompare((frame[2].f), (jfloat(1,000000e-08f)), 1)) > 0) goto label_2;
	}
	INST_FCONST(0);
	popStackFrame(ctx);
	INST_FRETURN();
label_2:;
	{
	LINE_NUMBER(63);
	frame[3].f = (jfloat(1));
	LINE_NUMBER(64);
	sp[0].o = (jobject)((mindustry_world_consumers_ConsumeLiquidsDynamic *) NULL_CHECK((frame[0].o)))->F_liquids;
	sp[0].o = (jobject)((func_arc_func_Func_get_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Func, INDEX_arc_func_Func_get_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	frame[4].o = (checkCast(ctx, getArrayClass(&class_mindustry_type_LiquidStack, 1), sp[0].o));
	frame[5].i = (((jarray) nullCheck(ctx, (frame[4].o)))->length);
	frame[6].i = (jint(0));
	}
label_4:;
	{
	if ((frame[6].i) >= (frame[5].i)) goto label_5;
	}
	{
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[6].i)));
	LINE_NUMBER(65);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_liquids;
	sp[1].o = (jobject)((mindustry_type_LiquidStack *) NULL_CHECK((frame[7].o)))->F_liquid;
	jfloat temp0 = (jfloat)((func_mindustry_world_modules_LiquidModule_get_mindustry_type_Liquid_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_get_mindustry_type_Liquid_R_float])(ctx, sp[0].o, sp[1].o);
	jfloat temp1 = ((jfloat)((mindustry_type_LiquidStack *) NULL_CHECK((frame[7].o)))->F_amount) * (frame[2].f);
	sp[0].o = (jobject)((mindustry_world_consumers_Consume *) NULL_CHECK((frame[0].o)))->F_multiplier;
	jfloat temp2 = (jfloat)((func_arc_func_Floatf_get_java_lang_Object_R_float) resolveInterfaceMethod(ctx, &class_arc_func_Floatf, INDEX_arc_func_Floatf_get_java_lang_Object_R_float, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	jfloat temp3 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, (temp0 / (temp1 * temp2)), (frame[3].f));
	frame[3].f = temp3;
	LINE_NUMBER(64);
	INST_IINC(6, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(67);
	popStackFrame(ctx);
	return (frame[3].f);
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_world_consumers_ConsumeLiquidsDynamic_lambda$rebuild$0_mindustry_gen_Building_mindustry_type_LiquidStack_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/ConsumeLiquidsDynamic:lambda$rebuild$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_consumers_ConsumeLiquidsDynamic(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(46);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_liquids;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_liquids;
	sp[1].o = (jobject)((mindustry_type_LiquidStack *) NULL_CHECK((frame[1].o)))->F_liquid;
	jfloat temp0 = (jfloat)((func_mindustry_world_modules_LiquidModule_get_mindustry_type_Liquid_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_get_mindustry_type_Liquid_R_float])(ctx, sp[0].o, sp[1].o);
	if ((floatCompare(temp0, (jfloat(0)), -1)) <= 0) goto label_1;
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

void M_mindustry_world_consumers_ConsumeLiquidsDynamic_lambda$build$0_arc_scene_ui_layout_Table_Array2_mindustry_type_LiquidStack_mindustry_gen_Building_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/ConsumeLiquidsDynamic:lambda$build$0", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(29);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_world_consumers_ConsumeLiquidsDynamic_invoke_java_lang_Runnable_1(ctx);
		auto proxy = (mindustry_world_consumers_ConsumeLiquidsDynamic_invoke_java_lang_Runnable_1 *) gcAlloc(ctx, &class_mindustry_world_consumers_ConsumeLiquidsDynamic_invoke_java_lang_Runnable_1);
		proxy->F_field3 = (jref) (frame[4].o);
		proxy->F_field2 = (jref) (frame[3].o);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_update_java_lang_Runnable_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_update_java_lang_Runnable_R_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(36);
	((func_mindustry_world_consumers_ConsumeLiquidsDynamic_rebuild_mindustry_gen_Building_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_consumers_ConsumeLiquidsDynamic_rebuild_mindustry_gen_Building_arc_scene_ui_layout_Table])(ctx, (frame[0].o), (frame[3].o), (frame[4].o));
	LINE_NUMBER(37);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_consumers_ConsumeLiquidsDynamic_lambda$build$1_Array2_mindustry_type_LiquidStack_mindustry_gen_Building_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/ConsumeLiquidsDynamic:lambda$build$1", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(30);
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0)));
	sp[1].o = (jobject)((mindustry_world_consumers_ConsumeLiquidsDynamic *) NULL_CHECK((frame[0].o)))->F_liquids;
	sp[1].o = (jobject)((func_arc_func_Func_get_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Func, INDEX_arc_func_Func_get_java_lang_Object_R_java_lang_Object, sp[1].o))(ctx, sp[1].o, (frame[2].o));
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	LINE_NUMBER(31);
	((func_mindustry_world_consumers_ConsumeLiquidsDynamic_rebuild_mindustry_gen_Building_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_consumers_ConsumeLiquidsDynamic_rebuild_mindustry_gen_Building_arc_scene_ui_layout_Table])(ctx, (frame[0].o), (frame[2].o), (frame[3].o));
	LINE_NUMBER(32);
	sp[0].o = frame[1].o;
	jint temp0 = jint(0);
	sp[1].o = (jobject)((mindustry_world_consumers_ConsumeLiquidsDynamic *) NULL_CHECK((frame[0].o)))->F_liquids;
	sp[1].o = (jobject)((func_arc_func_Func_get_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Func, INDEX_arc_func_Func_get_java_lang_Object_R_java_lang_Object, sp[1].o))(ctx, sp[1].o, (frame[2].o));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = (checkCast(ctx, getArrayClass(&class_mindustry_type_LiquidStack, 1), sp[1].o));
	}
label_1:;
	LINE_NUMBER(34);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_world_consumers_ConsumeLiquidsDynamic[] {
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
	(void *) M_mindustry_world_consumers_ConsumeLiquidsDynamic_apply_mindustry_world_Block,
	(void *) M_mindustry_world_consumers_Consume_optional_boolean_boolean_R_mindustry_world_consumers_Consume,
	(void *) M_mindustry_world_consumers_Consume_boost_R_mindustry_world_consumers_Consume,
	(void *) M_mindustry_world_consumers_Consume_update_boolean_R_mindustry_world_consumers_Consume,
	(void *) M_mindustry_world_consumers_Consume_ignore_R_boolean,
	(void *) M_mindustry_world_consumers_ConsumeLiquidsDynamic_build_mindustry_gen_Building_arc_scene_ui_layout_Table,
	(void *) M_mindustry_world_consumers_Consume_trigger_mindustry_gen_Building,
	(void *) M_mindustry_world_consumers_ConsumeLiquidsDynamic_update_mindustry_gen_Building,
	(void *) M_mindustry_world_consumers_ConsumeLiquidsDynamic_efficiency_mindustry_gen_Building_R_float,
	(void *) M_mindustry_world_consumers_Consume_efficiencyMultiplier_mindustry_gen_Building_R_float,
	(void *) M_mindustry_world_consumers_Consume_display_mindustry_world_meta_Stats,
	(void *) M_mindustry_world_consumers_ConsumeLiquidsDynamic_rebuild_mindustry_gen_Building_arc_scene_ui_layout_Table,
	(void *) M_mindustry_world_consumers_ConsumeLiquidsDynamic_lambda$build$0_arc_scene_ui_layout_Table_Array2_mindustry_type_LiquidStack_mindustry_gen_Building_arc_scene_ui_layout_Table,
	(void *) M_mindustry_world_consumers_ConsumeLiquidsDynamic_lambda$build$1_Array2_mindustry_type_LiquidStack_mindustry_gen_Building_arc_scene_ui_layout_Table,
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
	{ "lambda$build$0", "(Larc/scene/ui/layout/Table;[[Lmindustry/type/LiquidStack;Lmindustry/gen/Building;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$build$1", "([[Lmindustry/type/LiquidStack;Lmindustry/gen/Building;Larc/scene/ui/layout/Table;)V" },
};

static FieldMetadata fields[] {
	{ "liquids", &class_arc_func_Func, offsetof(mindustry_world_consumers_ConsumeLiquidsDynamic, F_liquids), "Larc/func/Func;", 17 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_consumers_ConsumeLiquidsDynamic_arc_func_Func, 0, "(Larc/func/Func;)V", 1 },
	{ "apply", (intptr_t) M_mindustry_world_consumers_ConsumeLiquidsDynamic_apply_mindustry_world_Block, VTABLE_mindustry_world_consumers_ConsumeLiquidsDynamic_apply_mindustry_world_Block, "(Lmindustry/world/Block;)V", 1 },
	{ "build", (intptr_t) M_mindustry_world_consumers_ConsumeLiquidsDynamic_build_mindustry_gen_Building_arc_scene_ui_layout_Table, VTABLE_mindustry_world_consumers_ConsumeLiquidsDynamic_build_mindustry_gen_Building_arc_scene_ui_layout_Table, "(Lmindustry/gen/Building;Larc/scene/ui/layout/Table;)V", 1 },
	{ "rebuild", (intptr_t) M_mindustry_world_consumers_ConsumeLiquidsDynamic_rebuild_mindustry_gen_Building_arc_scene_ui_layout_Table, VTABLE_mindustry_world_consumers_ConsumeLiquidsDynamic_rebuild_mindustry_gen_Building_arc_scene_ui_layout_Table, "(Lmindustry/gen/Building;Larc/scene/ui/layout/Table;)V", 2 },
	{ "update", (intptr_t) M_mindustry_world_consumers_ConsumeLiquidsDynamic_update_mindustry_gen_Building, VTABLE_mindustry_world_consumers_ConsumeLiquidsDynamic_update_mindustry_gen_Building, "(Lmindustry/gen/Building;)V", 1 },
	{ "efficiency", (intptr_t) M_mindustry_world_consumers_ConsumeLiquidsDynamic_efficiency_mindustry_gen_Building_R_float, VTABLE_mindustry_world_consumers_ConsumeLiquidsDynamic_efficiency_mindustry_gen_Building_R_float, "(Lmindustry/gen/Building;)F", 1 },
	{ "lambda$rebuild$0", (intptr_t) SM_mindustry_world_consumers_ConsumeLiquidsDynamic_lambda$rebuild$0_mindustry_gen_Building_mindustry_type_LiquidStack_R_boolean, 0, "(Lmindustry/gen/Building;Lmindustry/type/LiquidStack;)Z", 4106 },
	{ "lambda$build$0", (intptr_t) M_mindustry_world_consumers_ConsumeLiquidsDynamic_lambda$build$0_arc_scene_ui_layout_Table_Array2_mindustry_type_LiquidStack_mindustry_gen_Building_arc_scene_ui_layout_Table, VTABLE_mindustry_world_consumers_ConsumeLiquidsDynamic_lambda$build$0_arc_scene_ui_layout_Table_Array2_mindustry_type_LiquidStack_mindustry_gen_Building_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;[[Lmindustry/type/LiquidStack;Lmindustry/gen/Building;Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$build$1", (intptr_t) M_mindustry_world_consumers_ConsumeLiquidsDynamic_lambda$build$1_Array2_mindustry_type_LiquidStack_mindustry_gen_Building_arc_scene_ui_layout_Table, VTABLE_mindustry_world_consumers_ConsumeLiquidsDynamic_lambda$build$1_Array2_mindustry_type_LiquidStack_mindustry_gen_Building_arc_scene_ui_layout_Table, "([[Lmindustry/type/LiquidStack;Lmindustry/gen/Building;Larc/scene/ui/layout/Table;)V", 4098 },
};

Class class_mindustry_world_consumers_ConsumeLiquidsDynamic{
		.nativeName = (intptr_t) "mindustry/world/consumers/ConsumeLiquidsDynamic",
		.parentClass = (intptr_t) &class_mindustry_world_consumers_Consume,
		.size = sizeof(mindustry_world_consumers_ConsumeLiquidsDynamic),
		.classVtable = (intptr_t) vtable_mindustry_world_consumers_ConsumeLiquidsDynamic,
		.staticInitializer = (intptr_t) clinit_mindustry_world_consumers_ConsumeLiquidsDynamic,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_world_consumers_ConsumeLiquidsDynamic,
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
		.vtableSize = 25,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_consumers_ConsumeLiquidsDynamic = registerClass(&class_mindustry_world_consumers_ConsumeLiquidsDynamic);

}
