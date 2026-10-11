#include "mindustry/world/blocks/production/GenericCrafter_GenericCrafterBuild.h"
#include "mindustry/world/blocks/production/GenericCrafter_GenericCrafterBuild.h"
#include "mindustry/world/blocks/production/GenericCrafter.h"
#include "mindustry/type/LiquidStack.h"
#include "mindustry/logic/LAccess.h"
#include "mindustry/ui/Displayable.h"
#include "java/lang/reflect/Constructor.h"
#include "mindustry/entities/Effect.h"
#include "mindustry/world/draw/DrawBlock.h"
#include "java/lang/reflect/Method.h"
#include "arc/math/geom/Position.h"
#include "arc/math/Mathf.h"
#include "java/lang/Math.h"
#include "java/lang/reflect/Field.h"
#include "mindustry/type/Liquid.h"
#include "java/lang/annotation/Annotation.h"
#include "arc/util/Time.h"
#include "mindustry/type/Item.h"
#include "arc/util/Nullable.h"
#include "mindustry/world/modules/ItemModule.h"
#include "mindustry/gen/Building.h"
#include "arc/util/io/Reads.h"
#include "java/lang/Object.h"
#include "mindustry/type/ItemStack.h"
#include "mindustry/world/modules/LiquidModule.h"
#include "arc/util/io/Writes.h"

extern "C" {


void mark_mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_gen_Building(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild *) object;
	if (self->F_outputAccumulator)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_outputAccumulator)->clazz)->markFunction)((jobject) self->F_outputAccumulator, mark, depth + 1);
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_gen_Building(ctx);
}

void init_mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild_mindustry_world_blocks_production_GenericCrafter(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/production/GenericCrafter$GenericCrafterBuild:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(187);
	((mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_mindustry_gen_Building(ctx, (frame[0].o));
	LINE_NUMBER(191);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_world_blocks_production_GenericCrafter *) NULL_CHECK(sp[1].o))->F_outputItems;
	sp += 1;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_production_GenericCrafter *) NULL_CHECK(sp[0].o))->F_outputItems;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) <= 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_production_GenericCrafter *) NULL_CHECK(sp[0].o))->F_outputItems;
	sp[0].o = (jobject) createArray(ctx, &class_float, (((jarray) nullCheck(ctx, sp[0].o))->length));
	sp += 1;
	goto label_3;
	}
label_2:;
	INST_ACONST_NULL();
label_3:;
	{
	sp -= 2;
	((mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild *) NULL_CHECK(sp[0].o))->F_outputAccumulator = (jref) sp[1].o;
	LINE_NUMBER(187);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild_draw(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/production/GenericCrafter$GenericCrafterBuild:draw", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(195);
	sp[0].o = (jobject)((mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_production_GenericCrafter *) NULL_CHECK(sp[0].o))->F_drawer;
	((func_mindustry_world_draw_DrawBlock_draw_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_draw_DrawBlock_draw_mindustry_gen_Building])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(196);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild_drawLight(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/production/GenericCrafter$GenericCrafterBuild:drawLight", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(200);
	M_mindustry_gen_Building_drawLight(ctx, (frame[0].o));
	LINE_NUMBER(201);
	sp[0].o = (jobject)((mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_production_GenericCrafter *) NULL_CHECK(sp[0].o))->F_drawer;
	((func_mindustry_world_draw_DrawBlock_drawLight_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_draw_DrawBlock_drawLight_mindustry_gen_Building])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(202);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild_shouldConsume_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/production/GenericCrafter$GenericCrafterBuild:shouldConsume", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(206);
	sp[0].o = (jobject)((mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_production_GenericCrafter *) NULL_CHECK(sp[0].o))->F_outputItems;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(207);
	sp[0].o = (jobject)((mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_production_GenericCrafter *) NULL_CHECK(sp[0].o))->F_outputItems;
	frame[1].o = sp[0].o;
	frame[2].i = (((jarray) nullCheck(ctx, (frame[1].o)))->length);
	frame[3].i = (jint(0));
	}
label_3:;
	{
	if ((frame[3].i) >= (frame[2].i)) goto label_1;
	}
	{
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i)));
	LINE_NUMBER(208);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	sp[1].o = (jobject)((mindustry_type_ItemStack *) NULL_CHECK((frame[4].o)))->F_item;
	jint temp0 = (jint)((func_mindustry_world_modules_ItemModule_get_mindustry_type_Item_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_get_mindustry_type_Item_R_int])(ctx, sp[0].o, sp[1].o);
	jfloat temp1 = jfloat(temp0);
	jfloat temp2 = (jfloat)((func_mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild_scaleOutput_float_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild_scaleOutput_float_R_float])(ctx, (frame[0].o), (jfloat(((jint)((mindustry_type_ItemStack *) NULL_CHECK((frame[4].o)))->F_amount))));
	jfloat temp3 = temp1 + temp2;
	sp[0].o = (jobject)((mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if ((floatCompare(temp3, (jfloat(((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_itemCapacity))), -1)) <= 0) goto label_5;
	}
	{
	LINE_NUMBER(209);
	popStackFrame(ctx);
	return (jint(0));
	}
label_5:;
	{
	LINE_NUMBER(207);
	INST_IINC(3, 1);
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(214);
	sp[0].o = (jobject)((mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_production_GenericCrafter *) NULL_CHECK(sp[0].o))->F_outputLiquids;
	if (sp[0].o == nullptr) goto label_7;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((mindustry_world_blocks_production_GenericCrafter *) NULL_CHECK(sp[0].o))->F_ignoreLiquidFullness) != 0) goto label_7;
	}
	{
	LINE_NUMBER(215);
	frame[1].i = (jint(1));
	LINE_NUMBER(216);
	sp[0].o = (jobject)((mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_production_GenericCrafter *) NULL_CHECK(sp[0].o))->F_outputLiquids;
	frame[2].o = sp[0].o;
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_10:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_11;
	}
	{
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(217);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_liquids;
	sp[1].o = (jobject)((mindustry_type_LiquidStack *) NULL_CHECK((frame[5].o)))->F_liquid;
	jfloat temp0 = (jfloat)((func_mindustry_world_modules_LiquidModule_get_mindustry_type_Liquid_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_get_mindustry_type_Liquid_R_float])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if ((floatCompare(temp0, (((jfloat)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_liquidCapacity) - (jfloat(1,000000e-03f))), -1)) < 0) goto label_13;
	}
	{
	LINE_NUMBER(218);
	sp[0].o = (jobject)((mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((mindustry_world_blocks_production_GenericCrafter *) NULL_CHECK(sp[0].o))->F_dumpExtraLiquid) != 0) goto label_15;
	}
	{
	LINE_NUMBER(219);
	popStackFrame(ctx);
	return (jint(0));
	}
label_13:;
	{
	LINE_NUMBER(223);
	frame[1].i = (jint(0));
	}
label_15:;
	{
	LINE_NUMBER(216);
	INST_IINC(4, 1);
	goto label_10;
	}
label_11:;
	{
	LINE_NUMBER(228);
	if ((frame[1].i) == 0) goto label_7;
	}
	{
	LINE_NUMBER(229);
	popStackFrame(ctx);
	return (jint(0));
	}
label_7:;
	{
	LINE_NUMBER(233);
	popStackFrame(ctx);
	return ((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_enabled);
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild_updateTile(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/production/GenericCrafter$GenericCrafterBuild:updateTile", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(238);
	if ((floatCompare(((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_efficiency), (jfloat(0)), -1)) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(240);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild *) NULL_CHECK(sp[0].o))->F_progress;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp1 = (jfloat)((func_mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild_getProgressIncrease_float_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild_getProgressIncrease_float_R_float])(ctx, sp[1].o, ((jfloat)((mindustry_world_blocks_production_GenericCrafter *) NULL_CHECK(sp[2].o))->F_craftTime));
	((mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild *) NULL_CHECK(sp[0].o))->F_progress = (temp0 + temp1);
	LINE_NUMBER(241);
	sp[0].o = frame[0].o;
	jfloat temp2 = (jfloat)((mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild *) NULL_CHECK((frame[0].o)))->F_warmup;
	jfloat temp3 = (jfloat)((func_mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild_warmupTarget_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild_warmupTarget_R_float])(ctx, (frame[0].o));
	sp[1].o = (jobject)((mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp4 = (jfloat)SM_arc_math_Mathf_approachDelta_float_float_float_R_float(ctx, temp2, temp3, ((jfloat)((mindustry_world_blocks_production_GenericCrafter *) NULL_CHECK(sp[1].o))->F_warmupSpeed));
	((mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild *) NULL_CHECK(sp[0].o))->F_warmup = temp4;
	LINE_NUMBER(244);
	sp[0].o = (jobject)((mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_production_GenericCrafter *) NULL_CHECK(sp[0].o))->F_outputLiquids;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	LINE_NUMBER(245);
	jfloat temp0 = (jfloat)((func_mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild_getProgressIncrease_float_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild_getProgressIncrease_float_R_float])(ctx, (frame[0].o), (jfloat(1)));
	frame[1].f = temp0;
	LINE_NUMBER(246);
	sp[0].o = (jobject)((mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_production_GenericCrafter *) NULL_CHECK(sp[0].o))->F_outputLiquids;
	frame[2].o = sp[0].o;
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_8:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_5;
	}
	{
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(247);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((mindustry_type_LiquidStack *) NULL_CHECK((frame[5].o)))->F_liquid;
	jfloat temp0 = ((jfloat)((mindustry_type_LiquidStack *) NULL_CHECK((frame[5].o)))->F_amount) * (frame[1].f);
	sp[3].o = (jobject)((mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp1 = (jfloat)((mindustry_world_Block *) NULL_CHECK(sp[3].o))->F_liquidCapacity;
	sp[3].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_liquids;
	sp[4].o = (jobject)((mindustry_type_LiquidStack *) NULL_CHECK((frame[5].o)))->F_liquid;
	jfloat temp2 = (jfloat)((func_mindustry_world_modules_LiquidModule_get_mindustry_type_Liquid_R_float) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_get_mindustry_type_Liquid_R_float])(ctx, sp[3].o, sp[4].o);
	jfloat temp3 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, temp0, (temp1 - temp2));
	((func_mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild_handleLiquid_mindustry_gen_Building_mindustry_type_Liquid_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild_handleLiquid_mindustry_gen_Building_mindustry_type_Liquid_float])(ctx, sp[0].o, sp[1].o, sp[2].o, temp3);
	LINE_NUMBER(246);
	INST_IINC(4, 1);
	goto label_8;
	}
label_5:;
	{
	LINE_NUMBER(251);
	if (((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_wasVisible) == 0) goto label_11;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)SM_arc_math_Mathf_chanceDelta_double_R_boolean(ctx, (jdouble(((jfloat)((mindustry_world_blocks_production_GenericCrafter *) NULL_CHECK(sp[0].o))->F_updateEffectChance))));
	if (temp0 == 0) goto label_11;
	}
	{
	LINE_NUMBER(252);
	sp[0].o = (jobject)((mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_production_GenericCrafter *) NULL_CHECK(sp[0].o))->F_updateEffect;
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	sp[1].o = (jobject)((mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp1 = jfloat(((jint)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_size));
	sp[1].o = (jobject)((mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp2 = (jfloat)SM_arc_math_Mathf_range_float_R_float(ctx, (temp1 * ((jfloat)((mindustry_world_blocks_production_GenericCrafter *) NULL_CHECK(sp[1].o))->F_updateEffectSpread)));
	jfloat temp3 = temp0 + temp2;
	jfloat temp4 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	sp[1].o = (jobject)((mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp5 = jfloat(((jint)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_size));
	sp[1].o = (jobject)((mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp6 = (jfloat)SM_arc_math_Mathf_range_float_R_float(ctx, (temp5 * ((jfloat)((mindustry_world_blocks_production_GenericCrafter *) NULL_CHECK(sp[1].o))->F_updateEffectSpread)));
	((func_mindustry_entities_Effect_at_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float])(ctx, sp[0].o, temp3, (temp4 + temp6));
	goto label_11;
	}
label_1:;
	{
	LINE_NUMBER(255);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild *) NULL_CHECK((frame[0].o)))->F_warmup;
	jfloat temp1 = jfloat(0);
	sp[1].o = (jobject)((mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp2 = (jfloat)SM_arc_math_Mathf_approachDelta_float_float_float_R_float(ctx, temp0, temp1, ((jfloat)((mindustry_world_blocks_production_GenericCrafter *) NULL_CHECK(sp[1].o))->F_warmupSpeed));
	((mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild *) NULL_CHECK(sp[0].o))->F_warmup = temp2;
	}
label_11:;
	{
	LINE_NUMBER(259);
	sp[0].o = frame[0].o;
	((mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild *) NULL_CHECK(sp[0].o))->F_totalProgress = (((jfloat)((mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild *) NULL_CHECK(sp[0].o))->F_totalProgress) + (((jfloat)((mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild *) NULL_CHECK((frame[0].o)))->F_warmup) * (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta)));
	LINE_NUMBER(261);
	if ((floatCompare(((jfloat)((mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild *) NULL_CHECK((frame[0].o)))->F_progress), (jfloat(1)), -1)) < 0) goto label_14;
	}
	{
	LINE_NUMBER(262);
	((func_mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild_craft) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild_craft])(ctx, (frame[0].o));
	}
label_14:;
	{
	LINE_NUMBER(265);
	((func_mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild_dumpOutputs) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild_dumpOutputs])(ctx, (frame[0].o));
	LINE_NUMBER(266);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild_getProgressIncrease_float_R_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/production/GenericCrafter$GenericCrafterBuild:getProgressIncrease", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(270);
	sp[0].o = (jobject)((mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((mindustry_world_blocks_production_GenericCrafter *) NULL_CHECK(sp[0].o))->F_ignoreLiquidFullness) == 0) goto label_1;
	}
	{
	LINE_NUMBER(271);
	jfloat temp0 = (jfloat)M_mindustry_gen_Building_getProgressIncrease_float_R_float(ctx, (frame[0].o), (frame[1].f));
	popStackFrame(ctx);
	return temp0;
	}
label_1:;
	{
	LINE_NUMBER(275);
	frame[2].f = (jfloat(1));
	frame[3].f = (jfloat(1));
	LINE_NUMBER(276);
	sp[0].o = (jobject)((mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_production_GenericCrafter *) NULL_CHECK(sp[0].o))->F_outputLiquids;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	LINE_NUMBER(277);
	frame[3].f = (jfloat(0));
	LINE_NUMBER(278);
	sp[0].o = (jobject)((mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_production_GenericCrafter *) NULL_CHECK(sp[0].o))->F_outputLiquids;
	frame[4].o = sp[0].o;
	frame[5].i = (((jarray) nullCheck(ctx, (frame[4].o)))->length);
	frame[6].i = (jint(0));
	}
label_8:;
	{
	if ((frame[6].i) >= (frame[5].i)) goto label_5;
	}
	{
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[6].i)));
	LINE_NUMBER(279);
	sp[0].o = (jobject)((mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp0 = (jfloat)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_liquidCapacity;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_liquids;
	sp[1].o = (jobject)((mindustry_type_LiquidStack *) NULL_CHECK((frame[7].o)))->F_liquid;
	jfloat temp1 = (jfloat)((func_mindustry_world_modules_LiquidModule_get_mindustry_type_Liquid_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_get_mindustry_type_Liquid_R_float])(ctx, sp[0].o, sp[1].o);
	jfloat temp2 = temp0 - temp1;
	jfloat temp3 = (jfloat)((func_mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild_scaleOutput_float_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild_scaleOutput_float_R_float])(ctx, (frame[0].o), ((jfloat)((mindustry_type_LiquidStack *) NULL_CHECK((frame[7].o)))->F_amount));
	jfloat temp4 = (jfloat)((func_mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild_edelta_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild_edelta_R_float])(ctx, (frame[0].o));
	frame[8].f = (temp2 / (temp3 * temp4));
	LINE_NUMBER(280);
	jfloat temp5 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, (frame[2].f), (frame[8].f));
	frame[2].f = temp5;
	LINE_NUMBER(281);
	jfloat temp6 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (frame[3].f), (frame[8].f));
	frame[3].f = temp6;
	LINE_NUMBER(278);
	INST_IINC(6, 1);
	goto label_8;
	}
label_5:;
	{
	LINE_NUMBER(286);
	jfloat temp0 = (jfloat)M_mindustry_gen_Building_getProgressIncrease_float_R_float(ctx, (frame[0].o), (frame[1].f));
	sp[0].o = (jobject)((mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jobject temp1 = sp[0].o;
	sp[0].f = temp0;
	sp += 1;
	if (((jint)((mindustry_world_blocks_production_GenericCrafter *) NULL_CHECK(temp1))->F_dumpExtraLiquid) == 0) goto label_13;
	}
	{
	jfloat temp0 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, (frame[3].f), (jfloat(1)));
	sp[0].f = temp0;
	sp += 1;
	goto label_14;
	}
label_13:;
	INST_FLOAD(2);
label_14:;
	INST_FMUL();
	popStackFrame(ctx);
	INST_FRETURN();

	popStackFrame(ctx);
}

jfloat M_mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild_warmupTarget_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/production/GenericCrafter$GenericCrafterBuild:warmupTarget", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(290);
	popStackFrame(ctx);
	return (jfloat(1));
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild_warmup_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/production/GenericCrafter$GenericCrafterBuild:warmup", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(295);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild *) NULL_CHECK((frame[0].o)))->F_warmup);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild_totalProgress_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/production/GenericCrafter$GenericCrafterBuild:totalProgress", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(300);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild *) NULL_CHECK((frame[0].o)))->F_totalProgress);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild_scaleOutput_float_R_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/production/GenericCrafter$GenericCrafterBuild:scaleOutput", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(305);
	popStackFrame(ctx);
	return (frame[1].f);
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild_craft(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/production/GenericCrafter$GenericCrafterBuild:craft", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(309);
	((func_mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild_consume) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild_consume])(ctx, (frame[0].o));
	LINE_NUMBER(311);
	sp[0].o = (jobject)((mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_production_GenericCrafter *) NULL_CHECK(sp[0].o))->F_outputItems;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(313);
	sp[0].o = (jobject)((mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild *) NULL_CHECK((frame[0].o)))->F_outputAccumulator;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild *) NULL_CHECK((frame[0].o)))->F_outputAccumulator;
	jint temp0 = ((jarray) nullCheck(ctx, sp[0].o))->length;
	sp[0].o = (jobject)((mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_production_GenericCrafter *) NULL_CHECK(sp[0].o))->F_outputItems;
	if (temp0 == (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_5;
	}
label_4:;
	{
	LINE_NUMBER(314);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_world_blocks_production_GenericCrafter *) NULL_CHECK(sp[1].o))->F_outputItems;
	sp[1].o = (jobject) createArray(ctx, &class_float, (((jarray) nullCheck(ctx, sp[1].o))->length));
	((mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild *) NULL_CHECK(sp[0].o))->F_outputAccumulator = (jref) sp[1].o;
	}
label_5:;
	{
	LINE_NUMBER(316);
	frame[1].i = (jint(0));
	}
label_6:;
	{
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_production_GenericCrafter *) NULL_CHECK(sp[0].o))->F_outputItems;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_2;
	}
	{
	LINE_NUMBER(317);
	sp[0].o = (jobject)((mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_production_GenericCrafter *) NULL_CHECK(sp[0].o))->F_outputItems;
	frame[2].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)));
	LINE_NUMBER(319);
	sp[0].o = (jobject)((mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild *) NULL_CHECK((frame[0].o)))->F_outputAccumulator;
	jint temp0 = frame[1].i;
	jfloat temp3 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp0);
	jfloat temp4 = (jfloat)((func_mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild_scaleOutput_float_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild_scaleOutput_float_R_float])(ctx, (frame[0].o), (jfloat(((jint)((mindustry_type_ItemStack *) NULL_CHECK((frame[2].o)))->F_amount))));
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = (temp3 + temp4);
	LINE_NUMBER(320);
	sp[0].o = (jobject)((mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild *) NULL_CHECK((frame[0].o)))->F_outputAccumulator;
	jint temp5 = (jint)SM_arc_math_Mathf_floor_float_R_int(ctx, ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (frame[1].i))));
	frame[3].i = temp5;
	LINE_NUMBER(321);
	sp[0].o = (jobject)((mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild *) NULL_CHECK((frame[0].o)))->F_outputAccumulator;
	jint temp6 = frame[1].i;
	ARRAY_ACCESS(jfloat, sp[0].o, temp6) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp6)) - (jfloat((frame[3].i))));
	LINE_NUMBER(323);
	frame[4].i = (jint(0));
	}
label_12:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_13;
	}
	{
	LINE_NUMBER(324);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_type_ItemStack *) NULL_CHECK((frame[2].o)))->F_item;
	((func_mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild_offload_mindustry_type_Item) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild_offload_mindustry_type_Item])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(323);
	INST_IINC(4, 1);
	goto label_12;
	}
label_13:;
	{
	LINE_NUMBER(316);
	INST_IINC(1, 1);
	goto label_6;
	}
label_2:;
	{
	LINE_NUMBER(329);
	if (((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_wasVisible) == 0) goto label_16;
	}
	{
	LINE_NUMBER(330);
	sp[0].o = (jobject)((mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_production_GenericCrafter *) NULL_CHECK(sp[0].o))->F_craftEffect;
	((func_mindustry_entities_Effect_at_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float])(ctx, sp[0].o, ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y));
	}
label_16:;
	{
	LINE_NUMBER(332);
	sp[0].o = frame[0].o;
	((mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild *) NULL_CHECK(sp[0].o))->F_progress = (fmodf(((jfloat)((mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild *) NULL_CHECK(sp[0].o))->F_progress), (jfloat(1))));
	LINE_NUMBER(333);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild_dumpOutputs(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/production/GenericCrafter$GenericCrafterBuild:dumpOutputs", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(336);
	sp[0].o = (jobject)((mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_production_GenericCrafter *) NULL_CHECK(sp[0].o))->F_outputItems;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)SM_mindustry_world_blocks_production_GenericCrafter_access$000_mindustry_world_blocks_production_GenericCrafter_R_int(ctx, sp[1].o);
	sp[1].o = (jobject)((mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp1 = (jint)((func_mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild_timer_int_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild_timer_int_float_R_boolean])(ctx, sp[0].o, temp0, ((jfloat(((jint)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_dumpTime))) / ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_timeScale)));
	if (temp1 == 0) goto label_1;
	}
	{
	LINE_NUMBER(337);
	sp[0].o = (jobject)((mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_production_GenericCrafter *) NULL_CHECK(sp[0].o))->F_outputItems;
	frame[1].o = sp[0].o;
	frame[2].i = (((jarray) nullCheck(ctx, (frame[1].o)))->length);
	frame[3].i = (jint(0));
	}
label_3:;
	{
	if ((frame[3].i) >= (frame[2].i)) goto label_1;
	}
	{
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i)));
	LINE_NUMBER(338);
	jint temp0 = jint(1);
	jfloat temp1 = (jfloat)((func_mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild_scaleOutput_float_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild_scaleOutput_float_R_float])(ctx, (frame[0].o), (jfloat(((jint)((mindustry_type_ItemStack *) NULL_CHECK((frame[4].o)))->F_amount))));
	jint temp2 = (jint)SM_arc_math_Mathf_round_float_R_int(ctx, temp1);
	jint temp3 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, temp0, temp2);
	frame[5].i = temp3;
	LINE_NUMBER(339);
	frame[6].i = (jint(0));
	}
label_6:;
	{
	if ((frame[6].i) >= (frame[5].i)) goto label_7;
	}
	{
	LINE_NUMBER(340);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_type_ItemStack *) NULL_CHECK((frame[4].o)))->F_item;
	jint temp0 = (jint)((func_mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild_dump_mindustry_type_Item_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild_dump_mindustry_type_Item_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_9;
	}
	goto label_7;
label_9:;
	{
	LINE_NUMBER(339);
	INST_IINC(6, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(337);
	INST_IINC(3, 1);
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(345);
	sp[0].o = (jobject)((mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_production_GenericCrafter *) NULL_CHECK(sp[0].o))->F_outputLiquids;
	if (sp[0].o == nullptr) goto label_10;
	}
	{
	LINE_NUMBER(346);
	frame[1].i = (jint(0));
	}
label_12:;
	{
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_production_GenericCrafter *) NULL_CHECK(sp[0].o))->F_outputLiquids;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_10;
	}
	{
	LINE_NUMBER(347);
	sp[0].o = (jobject)((mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_production_GenericCrafter *) NULL_CHECK(sp[0].o))->F_liquidOutputDirections;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) <= (frame[1].i)) goto label_14;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_production_GenericCrafter *) NULL_CHECK(sp[0].o))->F_liquidOutputDirections;
	jint temp0 = (jint)ARRAY_ACCESS(jint, sp[0].o, (frame[1].i));
	sp[0].i = temp0;
	sp += 1;
	goto label_15;
	}
label_14:;
	INST_ICONST(-1);
label_15:;
	{
	sp -= 1;
	frame[2].i = sp[0].i;
	LINE_NUMBER(349);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_world_blocks_production_GenericCrafter *) NULL_CHECK(sp[1].o))->F_outputLiquids;
	sp[1].o = (jobject)((mindustry_type_LiquidStack *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[1].i)))))->F_liquid;
	((func_mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild_dumpLiquid_mindustry_type_Liquid_float_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild_dumpLiquid_mindustry_type_Liquid_float_int])(ctx, sp[0].o, sp[1].o, (jfloat(2)), (frame[2].i));
	LINE_NUMBER(346);
	INST_IINC(1, 1);
	goto label_12;
	}
label_10:;
	LINE_NUMBER(352);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jdouble M_mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild_sense_mindustry_logic_LAccess_R_double(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/production/GenericCrafter$GenericCrafterBuild:sense", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(356);
	sp[0].o = frame[1].o;
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_progress;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	jfloat temp0 = (jfloat)((func_mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild_progress_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild_progress_R_float])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return (jdouble(temp0));
	}
label_1:;
	{
	LINE_NUMBER(358);
	sp[0].o = frame[1].o;
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_totalLiquids;
	if (sp[0].o != sp[1].o) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_production_GenericCrafter *) NULL_CHECK(sp[0].o))->F_outputLiquid;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_liquids;
	sp[1].o = (jobject)((mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_world_blocks_production_GenericCrafter *) NULL_CHECK(sp[1].o))->F_outputLiquid;
	sp[1].o = (jobject)((mindustry_type_LiquidStack *) NULL_CHECK(sp[1].o))->F_liquid;
	jfloat temp0 = (jfloat)((func_mindustry_world_modules_LiquidModule_get_mindustry_type_Liquid_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_get_mindustry_type_Liquid_R_float])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return (jdouble(temp0));
	}
label_2:;
	{
	LINE_NUMBER(359);
	jdouble temp0 = (jdouble)M_mindustry_gen_Building_sense_mindustry_logic_LAccess_R_double(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild_progress_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/production/GenericCrafter$GenericCrafterBuild:progress", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(364);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, ((jfloat)((mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild *) NULL_CHECK((frame[0].o)))->F_progress));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild_getMaximumAccepted_mindustry_type_Item_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/production/GenericCrafter$GenericCrafterBuild:getMaximumAccepted", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(369);
	sp[0].o = (jobject)((mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	popStackFrame(ctx);
	return ((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_itemCapacity);
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild_shouldAmbientSound_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/production/GenericCrafter$GenericCrafterBuild:shouldAmbientSound", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(374);
	if ((floatCompare(((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_efficiency), (jfloat(0)), -1)) <= 0) goto label_1;
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

void M_mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild_write_arc_util_io_Writes(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/production/GenericCrafter$GenericCrafterBuild:write", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(379);
	M_mindustry_gen_Building_write_arc_util_io_Writes(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(380);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild *) NULL_CHECK((frame[0].o)))->F_progress));
	LINE_NUMBER(381);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild *) NULL_CHECK((frame[0].o)))->F_warmup));
	LINE_NUMBER(382);
	sp[0].o = (jobject)((mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((mindustry_world_blocks_production_GenericCrafter *) NULL_CHECK(sp[0].o))->F_legacyReadWarmup) == 0) goto label_4;
	}
	{
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), (jfloat(0)));
	}
label_4:;
	LINE_NUMBER(383);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild_read_arc_util_io_Reads_byte(jcontext ctx, jobject self, jobject param0, jbyte param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/production/GenericCrafter$GenericCrafterBuild:read", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(387);
	M_mindustry_gen_Building_read_arc_util_io_Reads_byte(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	LINE_NUMBER(388);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild *) NULL_CHECK(sp[0].o))->F_progress = temp0;
	LINE_NUMBER(389);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild *) NULL_CHECK(sp[0].o))->F_warmup = temp1;
	LINE_NUMBER(390);
	sp[0].o = (jobject)((mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((mindustry_world_blocks_production_GenericCrafter *) NULL_CHECK(sp[0].o))->F_legacyReadWarmup) == 0) goto label_4;
	}
	{
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	}
label_4:;
	LINE_NUMBER(391);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field outputAccumulator
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[3]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[12]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[13]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[14]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[15]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[16]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_mindustry_gen_Building_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_mindustry_gen_Building_hitbox_arc_math_geom_Rect,
	(void *) M_mindustry_gen_Building_getX_R_float,
	(void *) M_mindustry_gen_Building_getY_R_float,
	(void *) M_arc_math_geom_Position_angleTo_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_angleTo_float_float_R_float,
	(void *) M_arc_math_geom_Position_dst2_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_dst_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_dst_float_float_R_float,
	(void *) M_arc_math_geom_Position_dst2_float_float_R_float,
	(void *) M_arc_math_geom_Position_within_arc_math_geom_Position_float_R_boolean,
	(void *) M_arc_math_geom_Position_within_float_float_float_R_boolean,
	(void *) M_mindustry_gen_Building_isValid_R_boolean,
	(void *) M_mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild_shouldAmbientSound_R_boolean,
	(void *) M_mindustry_gen_Building_getAmbientVolume_R_float,
	(void *) M_mindustry_gen_Building_getAmbientSound_R_arc_audio_Sound,
	(void *) M_mindustry_gen_Building_hitSize_R_float,
	(void *) M_mindustry_gen_Building_self_R_mindustry_gen_Entityc,
	(void *) M_mindustry_gen_Building_as_R_java_lang_Object,
	(void *) M_mindustry_gen_Building_isAdded_R_boolean,
	(void *) M_mindustry_gen_Building_isLocal_R_boolean,
	(void *) M_mindustry_gen_Building_isRemote_R_boolean,
	(void *) M_mindustry_gen_Building_serialize_R_boolean,
	(void *) M_mindustry_gen_Building_classId_R_int,
	(void *) M_mindustry_gen_Building_id_R_int,
	(void *) M_mindustry_gen_Building_add,
	(void *) M_mindustry_gen_Building_afterRead,
	(void *) M_mindustry_gen_Building_afterReadAll,
	(void *) M_mindustry_gen_Building_beforeWrite,
	(void *) M_mindustry_gen_Building_id_int,
	(void *) M_mindustry_gen_Building_read_arc_util_io_Reads,
	(void *) M_mindustry_gen_Building_remove,
	(void *) M_mindustry_gen_Building_update,
	(void *) M_mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild_write_arc_util_io_Writes,
	(void *) M_mindustry_gen_Building_floorOn_R_mindustry_world_blocks_environment_Floor,
	(void *) M_mindustry_gen_Building_buildOn_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_onSolid_R_boolean,
	(void *) M_mindustry_gen_Building_x_R_float,
	(void *) M_mindustry_gen_Building_y_R_float,
	(void *) M_mindustry_gen_Building_tileX_R_int,
	(void *) M_mindustry_gen_Building_tileY_R_int,
	(void *) M_mindustry_gen_Building_blockOn_R_mindustry_world_Block,
	(void *) M_mindustry_gen_Building_tileOn_R_mindustry_world_Tile,
	(void *) M_mindustry_gen_Building_set_arc_math_geom_Position,
	(void *) M_mindustry_gen_Building_set_float_float,
	(void *) M_mindustry_gen_Building_trns_arc_math_geom_Position,
	(void *) M_mindustry_gen_Building_trns_float_float,
	(void *) M_mindustry_gen_Building_x_float,
	(void *) M_mindustry_gen_Building_y_float,
	(void *) M_mindustry_gen_Building_damageArmorMult_float_float,
	(void *) M_mindustry_gen_Building_damageArmorMult_float_float_boolean,
	(void *) M_mindustry_gen_Building_damagePierce_float,
	(void *) M_mindustry_gen_Building_damagePierce_float_boolean,
	(void *) M_mindustry_gen_Building_healFract_float,
	(void *) M_mindustry_gen_Building_heal_float,
	(void *) M_mindustry_gen_Building_damaged_R_boolean,
	(void *) M_mindustry_gen_Building_dead_R_boolean,
	(void *) M_mindustry_gen_Building_health_R_float,
	(void *) M_mindustry_gen_Building_healthf_R_float,
	(void *) M_mindustry_gen_Building_hitTime_R_float,
	(void *) M_mindustry_gen_Building_maxHealth_R_float,
	(void *) M_mindustry_gen_Building_clampHealth,
	(void *) M_mindustry_gen_Building_damage_float,
	(void *) M_mindustry_gen_Building_damage_float_boolean,
	(void *) M_mindustry_gen_Building_damageContinuous_float,
	(void *) M_mindustry_gen_Building_damageContinuousArmorMult_float_float,
	(void *) M_mindustry_gen_Building_damageContinuousPierce_float,
	(void *) M_mindustry_gen_Building_dead_boolean,
	(void *) M_mindustry_gen_Building_heal,
	(void *) M_mindustry_gen_Building_health_float,
	(void *) M_mindustry_gen_Building_hitTime_float,
	(void *) M_mindustry_gen_Building_kill,
	(void *) M_mindustry_gen_Building_killed,
	(void *) M_mindustry_gen_Building_maxHealth_float,
	(void *) M_mindustry_gen_Building_inFogTo_mindustry_game_Team_R_boolean,
	(void *) M_mindustry_gen_Building_cheating_R_boolean,
	(void *) M_mindustry_gen_Building_team_R_mindustry_game_Team,
	(void *) M_mindustry_gen_Building_closestCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild,
	(void *) M_mindustry_gen_Building_closestEnemyCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild,
	(void *) M_mindustry_gen_Building_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild,
	(void *) M_mindustry_gen_Building_team_mindustry_game_Team,
	(void *) M_mindustry_gen_Building_timer_R_arc_util_Interval,
	(void *) M_mindustry_gen_Building_timer_int_float_R_boolean,
	(void *) M_mindustry_gen_Building_timer_arc_util_Interval,
	(void *) M_mindustry_gen_Building_control_mindustry_logic_LAccess_double_double_double_double,
	(void *) M_mindustry_gen_Building_control_mindustry_logic_LAccess_java_lang_Object_double_double_double,
	(void *) M_mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild_sense_mindustry_logic_LAccess_R_double,
	(void *) M_mindustry_gen_Building_sense_mindustry_ctype_Content_R_double,
	(void *) M_mindustry_gen_Building_senseObject_mindustry_logic_LAccess_R_java_lang_Object,
	(void *) M_mindustry_gen_Building_setProp_mindustry_logic_LAccess_double,
	(void *) M_mindustry_gen_Building_setProp_mindustry_logic_LAccess_java_lang_Object,
	(void *) M_mindustry_gen_Building_setProp_mindustry_ctype_UnlockableContent_double,
	(void *) M_mindustry_ui_Displayable_displayable_R_boolean,
	(void *) M_mindustry_gen_Building_display_arc_scene_ui_layout_Table,
	(void *) M_mindustry_gen_Building_setIndex__build_int,
	(void *) M_mindustry_gen_Building_back_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_front_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_left_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_right_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_getCommandPosition_R_arc_math_geom_Vec2,
	(void *) M_mindustry_gen_Building_config_R_java_lang_Object,
	(void *) M_mindustry_gen_Building_getPayloads_R_mindustry_type_PayloadSeq,
	(void *) M_mindustry_gen_Building_findClosestEdge_arc_math_geom_Position_arc_func_Boolf_R_mindustry_world_Tile,
	(void *) M_mindustry_gen_Building_getPayload_R_mindustry_world_blocks_payloads_Payload,
	(void *) M_mindustry_gen_Building_takePayload_R_mindustry_world_blocks_payloads_Payload,
	(void *) M_mindustry_gen_Building_onRepaired,
	(void *) M_mindustry_gen_Building_placed,
	(void *) M_mindustry_gen_Building_playerPlaced_java_lang_Object,
	(void *) M_mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild_read_arc_util_io_Reads_byte,
	(void *) M_mindustry_gen_Building_create_mindustry_world_Block_mindustry_game_Team_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_getLiquidDestination_mindustry_gen_Building_mindustry_type_Liquid_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_init_mindustry_world_Tile_mindustry_game_Team_boolean_int_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_nearby_int_int_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_nearby_int_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_getCursor_R_arc_Graphics$Cursor,
	(void *) M_mindustry_gen_Building_getDisplayIcon_R_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_gen_Building_getPowerConnections_arc_struct_Seq_R_arc_struct_Seq,
	(void *) M_mindustry_gen_Building_absorbLasers_R_boolean,
	(void *) M_mindustry_gen_Building_acceptItem_mindustry_gen_Building_mindustry_type_Item_R_boolean,
	(void *) M_mindustry_gen_Building_acceptLiquid_mindustry_gen_Building_mindustry_type_Liquid_R_boolean,
	(void *) M_mindustry_gen_Building_acceptPayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload_R_boolean,
	(void *) M_mindustry_gen_Building_allowDeposit_R_boolean,
	(void *) M_mindustry_gen_Building_allowUpdate_R_boolean,
	(void *) M_mindustry_gen_Building_canBeReplaced_mindustry_world_Block_R_boolean,
	(void *) M_mindustry_gen_Building_canConsume_R_boolean,
	(void *) M_mindustry_gen_Building_canControlSelect_mindustry_gen_Unit_R_boolean,
	(void *) M_mindustry_gen_Building_canDump_mindustry_gen_Building_mindustry_type_Item_R_boolean,
	(void *) M_mindustry_gen_Building_canDumpLiquid_mindustry_gen_Building_mindustry_type_Liquid_R_boolean,
	(void *) M_mindustry_gen_Building_canPickup_R_boolean,
	(void *) M_mindustry_gen_Building_canResupply_R_boolean,
	(void *) M_mindustry_gen_Building_canUnload_R_boolean,
	(void *) M_mindustry_gen_Building_canWithdraw_R_boolean,
	(void *) M_mindustry_gen_Building_checkSolid_R_boolean,
	(void *) M_mindustry_gen_Building_checkSuppression_R_boolean,
	(void *) M_mindustry_gen_Building_collide_mindustry_gen_Bullet_R_boolean,
	(void *) M_mindustry_gen_Building_collision_mindustry_gen_Bullet_R_boolean,
	(void *) M_mindustry_gen_Building_conductsTo_mindustry_gen_Building_R_boolean,
	(void *) M_mindustry_gen_Building_configTapped_R_boolean,
	(void *) M_mindustry_gen_Building_consumeTriggerValid_R_boolean,
	(void *) M_mindustry_gen_Building_dump_R_boolean,
	(void *) M_mindustry_gen_Building_dump_mindustry_type_Item_R_boolean,
	(void *) M_mindustry_gen_Building_dumpAccumulate_R_boolean,
	(void *) M_mindustry_gen_Building_dumpAccumulate_mindustry_type_Item_R_boolean,
	(void *) M_mindustry_gen_Building_dumpPayload_mindustry_world_blocks_payloads_Payload_R_boolean,
	(void *) M_mindustry_gen_Building_inMapArea_R_boolean,
	(void *) M_mindustry_gen_Building_interactable_mindustry_game_Team_R_boolean,
	(void *) M_mindustry_gen_Building_isCommandable_R_boolean,
	(void *) M_mindustry_gen_Building_isDiscovered_mindustry_game_Team_R_boolean,
	(void *) M_mindustry_gen_Building_isHealSuppressed_R_boolean,
	(void *) M_mindustry_gen_Building_isInsulated_R_boolean,
	(void *) M_mindustry_gen_Building_isPayload_R_boolean,
	(void *) M_mindustry_gen_Building_moveForward_mindustry_type_Item_R_boolean,
	(void *) M_mindustry_gen_Building_movePayload_mindustry_world_blocks_payloads_Payload_R_boolean,
	(void *) M_mindustry_gen_Building_onConfigureBuildTapped_mindustry_gen_Building_R_boolean,
	(void *) M_mindustry_gen_Building_onConfigureTapped_float_float_R_boolean,
	(void *) M_mindustry_gen_Building_payloadCheck_int_R_boolean,
	(void *) M_mindustry_gen_Building_productionValid_R_boolean,
	(void *) M_mindustry_gen_Building_put_mindustry_type_Item_R_boolean,
	(void *) M_mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild_shouldConsume_R_boolean,
	(void *) M_mindustry_gen_Building_shouldHideConfigure_mindustry_gen_Player_R_boolean,
	(void *) M_mindustry_gen_Building_shouldShowConfigure_mindustry_gen_Player_R_boolean,
	(void *) M_mindustry_gen_Building_wasRecentlyDamaged_R_boolean,
	(void *) M_mindustry_gen_Building_wasRecentlyHealed_float_R_boolean,
	(void *) M_mindustry_gen_Building_relativeTo_mindustry_gen_Building_R_byte,
	(void *) M_mindustry_gen_Building_relativeTo_int_int_R_byte,
	(void *) M_mindustry_gen_Building_relativeTo_mindustry_world_Tile_R_byte,
	(void *) M_mindustry_gen_Building_relativeToEdge_mindustry_world_Tile_R_byte,
	(void *) M_mindustry_gen_Building_version_R_byte,
	(void *) M_mindustry_gen_Building_ambientVolume_R_float,
	(void *) M_mindustry_gen_Building_calculateHeat_Array1_float_R_float,
	(void *) M_mindustry_gen_Building_calculateHeat_Array1_float_arc_struct_IntSet_R_float,
	(void *) M_mindustry_gen_Building_delta_R_float,
	(void *) M_mindustry_gen_Building_drawrot_R_float,
	(void *) M_mindustry_gen_Building_edelta_R_float,
	(void *) M_mindustry_gen_Building_efficiencyScale_R_float,
	(void *) M_mindustry_gen_Building_fogRadius_R_float,
	(void *) M_mindustry_gen_Building_getDisplayEfficiency_R_float,
	(void *) M_mindustry_gen_Building_getPowerProduction_R_float,
	(void *) M_mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild_getProgressIncrease_float_R_float,
	(void *) M_mindustry_gen_Building_handleDamage_float_R_float,
	(void *) M_mindustry_gen_Building_moveLiquid_mindustry_gen_Building_mindustry_type_Liquid_R_float,
	(void *) M_mindustry_gen_Building_moveLiquidForward_boolean_mindustry_type_Liquid_R_float,
	(void *) M_mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild_progress_R_float,
	(void *) M_mindustry_gen_Building_rotdeg_R_float,
	(void *) M_mindustry_gen_Building_timeScale_R_float,
	(void *) M_mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild_totalProgress_R_float,
	(void *) M_mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild_warmup_R_float,
	(void *) M_mindustry_gen_Building_acceptStack_mindustry_type_Item_int_mindustry_gen_Teamc_R_int,
	(void *) M_mindustry_gen_Building_explosionItemCap_R_int,
	(void *) M_mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild_getMaximumAccepted_mindustry_type_Item_R_int,
	(void *) M_mindustry_gen_Building_moduleBitmask_R_int,
	(void *) M_mindustry_gen_Building_pos_R_int,
	(void *) M_mindustry_gen_Building_removeStack_mindustry_type_Item_int_R_int,
	(void *) M_mindustry_gen_Building_getDisplayName_R_java_lang_String,
	(void *) M_mindustry_gen_Building_floor_R_mindustry_world_blocks_environment_Floor,
	(void *) M_mindustry_gen_Building_status_R_mindustry_world_meta_BlockStatus,
	(void *) M_mindustry_gen_Building_flowItems_R_mindustry_world_modules_ItemModule,
	(void *) M_mindustry_gen_Building_addPlan_boolean,
	(void *) M_mindustry_gen_Building_addPlan_boolean_boolean,
	(void *) M_mindustry_gen_Building_afterDestroyed,
	(void *) M_mindustry_gen_Building_afterPickedUp,
	(void *) M_mindustry_gen_Building_applyBoost_float_float,
	(void *) M_mindustry_gen_Building_applyHealSuppression_float,
	(void *) M_mindustry_gen_Building_applyHealSuppression_float_arc_graphics_Color,
	(void *) M_mindustry_gen_Building_applySlowdown_float_float,
	(void *) M_mindustry_gen_Building_buildConfiguration_arc_scene_ui_layout_Table,
	(void *) M_mindustry_gen_Building_changeTeam_mindustry_game_Team,
	(void *) M_mindustry_gen_Building_changeTeam_mindustry_game_Team_boolean,
	(void *) M_mindustry_gen_Building_checkAllowUpdate,
	(void *) M_mindustry_gen_Building_configure_java_lang_Object,
	(void *) M_mindustry_gen_Building_configureAny_java_lang_Object,
	(void *) M_mindustry_gen_Building_configured_mindustry_gen_Unit_java_lang_Object,
	(void *) M_mindustry_gen_Building_consume,
	(void *) M_mindustry_gen_Building_created,
	(void *) M_mindustry_gen_Building_damage_mindustry_gen_Bullet_mindustry_game_Team_float,
	(void *) M_mindustry_gen_Building_damage_mindustry_game_Team_float,
	(void *) M_mindustry_gen_Building_deselect,
	(void *) M_mindustry_gen_Building_displayBars_arc_scene_ui_layout_Table,
	(void *) M_mindustry_gen_Building_displayConsumption_arc_scene_ui_layout_Table,
	(void *) M_mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild_draw,
	(void *) M_mindustry_gen_Building_drawCached,
	(void *) M_mindustry_gen_Building_drawConfigure,
	(void *) M_mindustry_gen_Building_drawCracks,
	(void *) M_mindustry_gen_Building_drawDisabled,
	(void *) M_mindustry_gen_Building_drawItemSelection_mindustry_ctype_UnlockableContent,
	(void *) M_mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild_drawLight,
	(void *) M_mindustry_gen_Building_drawLiquidLight_mindustry_type_Liquid_float,
	(void *) M_mindustry_gen_Building_drawSelect,
	(void *) M_mindustry_gen_Building_drawStatus,
	(void *) M_mindustry_gen_Building_drawTeam,
	(void *) M_mindustry_gen_Building_drawTeamTop,
	(void *) M_mindustry_gen_Building_dropped,
	(void *) M_mindustry_gen_Building_dumpLiquid_mindustry_type_Liquid,
	(void *) M_mindustry_gen_Building_dumpLiquid_mindustry_type_Liquid_float,
	(void *) M_mindustry_gen_Building_dumpLiquid_mindustry_type_Liquid_float_int,
	(void *) M_mindustry_gen_Building_eachEdge_arc_func_Cons,
	(void *) M_mindustry_gen_Building_getStackOffset_mindustry_type_Item_arc_math_geom_Vec2,
	(void *) M_mindustry_gen_Building_handleItem_mindustry_gen_Building_mindustry_type_Item,
	(void *) M_mindustry_gen_Building_handleLiquid_mindustry_gen_Building_mindustry_type_Liquid_float,
	(void *) M_mindustry_gen_Building_handlePayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload,
	(void *) M_mindustry_gen_Building_handleStack_mindustry_type_Item_int_mindustry_gen_Teamc,
	(void *) M_mindustry_gen_Building_handleString_java_lang_Object,
	(void *) M_mindustry_gen_Building_handleUnitPayload_mindustry_gen_Unit_arc_func_Cons,
	(void *) M_mindustry_gen_Building_healthChanged,
	(void *) M_mindustry_gen_Building_incrementDump_int,
	(void *) M_mindustry_gen_Building_itemTaken_mindustry_type_Item,
	(void *) M_mindustry_gen_Building_noSleep,
	(void *) M_mindustry_gen_Building_offload_mindustry_type_Item,
	(void *) M_mindustry_gen_Building_onCommand_arc_math_geom_Vec2,
	(void *) M_mindustry_gen_Building_onConfigureClosed,
	(void *) M_mindustry_gen_Building_onControlSelect_mindustry_gen_Unit,
	(void *) M_mindustry_gen_Building_onDeconstructed_mindustry_gen_Unit,
	(void *) M_mindustry_gen_Building_onDestroyed,
	(void *) M_mindustry_gen_Building_onNearbyBuildAdded_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_onProximityAdded,
	(void *) M_mindustry_gen_Building_onProximityRemoved,
	(void *) M_mindustry_gen_Building_onProximityUpdate,
	(void *) M_mindustry_gen_Building_onRemoved,
	(void *) M_mindustry_gen_Building_overwrote_arc_struct_Seq,
	(void *) M_mindustry_gen_Building_payloadDraw,
	(void *) M_mindustry_gen_Building_pickedUp,
	(void *) M_mindustry_gen_Building_playDestroySound,
	(void *) M_mindustry_gen_Building_powerGraphRemoved,
	(void *) M_mindustry_gen_Building_produced_mindustry_type_Item,
	(void *) M_mindustry_gen_Building_produced_mindustry_type_Item_int,
	(void *) M_mindustry_gen_Building_puddleOn_mindustry_gen_Puddle,
	(void *) M_mindustry_gen_Building_readAll_arc_util_io_Reads_byte,
	(void *) M_mindustry_gen_Building_readBase_arc_util_io_Reads,
	(void *) M_mindustry_gen_Building_readSync_arc_util_io_Reads_byte,
	(void *) M_mindustry_gen_Building_recache,
	(void *) M_mindustry_gen_Building_recentlyHealed,
	(void *) M_mindustry_gen_Building_removeFromProximity,
	(void *) M_mindustry_gen_Building_sleep,
	(void *) M_mindustry_gen_Building_splashLiquid_mindustry_type_Liquid_float,
	(void *) M_mindustry_gen_Building_tapped,
	(void *) M_mindustry_gen_Building_transferLiquid_mindustry_gen_Building_float_mindustry_type_Liquid,
	(void *) M_mindustry_gen_Building_unitOn_mindustry_gen_Unit,
	(void *) M_mindustry_gen_Building_unitOnAny_mindustry_gen_Unit,
	(void *) M_mindustry_gen_Building_unitRemoved_mindustry_gen_Unit,
	(void *) M_mindustry_gen_Building_updateConsumption,
	(void *) M_mindustry_gen_Building_updateEfficiencyMultiplier,
	(void *) M_mindustry_gen_Building_updateFogVisibility,
	(void *) M_mindustry_gen_Building_updateLastAccess_mindustry_gen_Player,
	(void *) M_mindustry_gen_Building_updatePayload_mindustry_gen_Unit_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_updatePowerGraph,
	(void *) M_mindustry_gen_Building_updateProximity,
	(void *) M_mindustry_gen_Building_updateTableAlign_arc_scene_ui_layout_Table,
	(void *) M_mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild_updateTile,
	(void *) M_mindustry_gen_Building_writeAll_arc_util_io_Writes,
	(void *) M_mindustry_gen_Building_writeBase_arc_util_io_Writes,
	(void *) M_mindustry_gen_Building_writeSync_arc_util_io_Writes,
	(void *) M_mindustry_gen_Building_lambda$splashLiquid$0_mindustry_type_Liquid_float,
	(void *) M_mindustry_gen_Building_lambda$onDeconstructed$0_float_mindustry_world_Tile,
	(void *) M_mindustry_gen_Building_lambda$display$6_java_lang_String_arc_scene_ui_layout_Table,
	(void *) M_mindustry_gen_Building_lambda$display$9_arc_struct_Bits_java_lang_Runnable,
	(void *) M_mindustry_gen_Building_lambda$display$7_arc_scene_ui_layout_Table_java_lang_String,
	(void *) M_mindustry_gen_Building_lambda$display$8_mindustry_type_Liquid_java_lang_String_R_java_lang_CharSequence,
	(void *) M_mindustry_gen_Building_lambda$display$1_arc_scene_ui_layout_Table,
	(void *) M_mindustry_gen_Building_lambda$display$0_arc_scene_ui_layout_Table,
	(void *) M_mindustry_gen_Building_lambda$placed$0_mindustry_gen_Building,
	(void *) M_mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild_warmupTarget_R_float,
	(void *) M_mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild_scaleOutput_float_R_float,
	(void *) M_mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild_craft,
	(void *) M_mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild_dumpOutputs,
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
	{ "hitbox", "(Larc/math/geom/Rect;)V" },
	{ "getX", "()F" },
	{ "getY", "()F" },
	{ "angleTo", "(Larc/math/geom/Position;)F" },
	{ "angleTo", "(FF)F" },
	{ "dst2", "(Larc/math/geom/Position;)F" },
	{ "dst", "(Larc/math/geom/Position;)F" },
	{ "dst", "(FF)F" },
	{ "dst2", "(FF)F" },
	{ "within", "(Larc/math/geom/Position;F)Z" },
	{ "within", "(FFF)Z" },
	{ "isValid", "()Z" },
	{ "shouldAmbientSound", "()Z" },
	{ "getAmbientVolume", "()F" },
	{ "getAmbientSound", "()Larc/audio/Sound;" },
	{ "hitSize", "()F" },
	{ "self", "()Lmindustry/gen/Entityc;" },
	{ "as", "()Ljava/lang/Object;" },
	{ "isAdded", "()Z" },
	{ "isLocal", "()Z" },
	{ "isRemote", "()Z" },
	{ "serialize", "()Z" },
	{ "classId", "()I" },
	{ "id", "()I" },
	{ "add", "()V" },
	{ "afterRead", "()V" },
	{ "afterReadAll", "()V" },
	{ "beforeWrite", "()V" },
	{ "id", "(I)V" },
	{ "read", "(Larc/util/io/Reads;)V" },
	{ "remove", "()V" },
	{ "update", "()V" },
	{ "write", "(Larc/util/io/Writes;)V" },
	{ "floorOn", "()Lmindustry/world/blocks/environment/Floor;" },
	{ "buildOn", "()Lmindustry/gen/Building;" },
	{ "onSolid", "()Z" },
	{ "x", "()F" },
	{ "y", "()F" },
	{ "tileX", "()I" },
	{ "tileY", "()I" },
	{ "blockOn", "()Lmindustry/world/Block;" },
	{ "tileOn", "()Lmindustry/world/Tile;" },
	{ "set", "(Larc/math/geom/Position;)V" },
	{ "set", "(FF)V" },
	{ "trns", "(Larc/math/geom/Position;)V" },
	{ "trns", "(FF)V" },
	{ "x", "(F)V" },
	{ "y", "(F)V" },
	{ "damageArmorMult", "(FF)V" },
	{ "damageArmorMult", "(FFZ)V" },
	{ "damagePierce", "(F)V" },
	{ "damagePierce", "(FZ)V" },
	{ "healFract", "(F)V" },
	{ "heal", "(F)V" },
	{ "damaged", "()Z" },
	{ "dead", "()Z" },
	{ "health", "()F" },
	{ "healthf", "()F" },
	{ "hitTime", "()F" },
	{ "maxHealth", "()F" },
	{ "clampHealth", "()V" },
	{ "damage", "(F)V" },
	{ "damage", "(FZ)V" },
	{ "damageContinuous", "(F)V" },
	{ "damageContinuousArmorMult", "(FF)V" },
	{ "damageContinuousPierce", "(F)V" },
	{ "dead", "(Z)V" },
	{ "heal", "()V" },
	{ "health", "(F)V" },
	{ "hitTime", "(F)V" },
	{ "kill", "()V" },
	{ "killed", "()V" },
	{ "maxHealth", "(F)V" },
	{ "inFogTo", "(Lmindustry/game/Team;)Z" },
	{ "cheating", "()Z" },
	{ "team", "()Lmindustry/game/Team;" },
	{ "closestCore", "()Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;" },
	{ "closestEnemyCore", "()Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;" },
	{ "core", "()Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;" },
	{ "team", "(Lmindustry/game/Team;)V" },
	{ "timer", "()Larc/util/Interval;" },
	{ "timer", "(IF)Z" },
	{ "timer", "(Larc/util/Interval;)V" },
	{ "control", "(Lmindustry/logic/LAccess;DDDD)V" },
	{ "control", "(Lmindustry/logic/LAccess;Ljava/lang/Object;DDD)V" },
	{ "sense", "(Lmindustry/logic/LAccess;)D" },
	{ "sense", "(Lmindustry/ctype/Content;)D" },
	{ "senseObject", "(Lmindustry/logic/LAccess;)Ljava/lang/Object;" },
	{ "setProp", "(Lmindustry/logic/LAccess;D)V" },
	{ "setProp", "(Lmindustry/logic/LAccess;Ljava/lang/Object;)V" },
	{ "setProp", "(Lmindustry/ctype/UnlockableContent;D)V" },
	{ "displayable", "()Z" },
	{ "display", "(Larc/scene/ui/layout/Table;)V" },
	{ "setIndex__build", "(I)V" },
	{ "back", "()Lmindustry/gen/Building;" },
	{ "front", "()Lmindustry/gen/Building;" },
	{ "left", "()Lmindustry/gen/Building;" },
	{ "right", "()Lmindustry/gen/Building;" },
	{ "getCommandPosition", "()Larc/math/geom/Vec2;" },
	{ "config", "()Ljava/lang/Object;" },
	{ "getPayloads", "()Lmindustry/type/PayloadSeq;" },
	{ "findClosestEdge", "(Larc/math/geom/Position;Larc/func/Boolf;)Lmindustry/world/Tile;" },
	{ "getPayload", "()Lmindustry/world/blocks/payloads/Payload;" },
	{ "takePayload", "()Lmindustry/world/blocks/payloads/Payload;" },
	{ "onRepaired", "()V" },
	{ "placed", "()V" },
	{ "playerPlaced", "(Ljava/lang/Object;)V" },
	{ "read", "(Larc/util/io/Reads;B)V" },
	{ "create", "(Lmindustry/world/Block;Lmindustry/game/Team;)Lmindustry/gen/Building;" },
	{ "getLiquidDestination", "(Lmindustry/gen/Building;Lmindustry/type/Liquid;)Lmindustry/gen/Building;" },
	{ "init", "(Lmindustry/world/Tile;Lmindustry/game/Team;ZI)Lmindustry/gen/Building;" },
	{ "nearby", "(II)Lmindustry/gen/Building;" },
	{ "nearby", "(I)Lmindustry/gen/Building;" },
	{ "getCursor", "()Larc/Graphics$Cursor;" },
	{ "getDisplayIcon", "()Larc/graphics/g2d/TextureRegion;" },
	{ "getPowerConnections", "(Larc/struct/Seq;)Larc/struct/Seq;" },
	{ "absorbLasers", "()Z" },
	{ "acceptItem", "(Lmindustry/gen/Building;Lmindustry/type/Item;)Z" },
	{ "acceptLiquid", "(Lmindustry/gen/Building;Lmindustry/type/Liquid;)Z" },
	{ "acceptPayload", "(Lmindustry/gen/Building;Lmindustry/world/blocks/payloads/Payload;)Z" },
	{ "allowDeposit", "()Z" },
	{ "allowUpdate", "()Z" },
	{ "canBeReplaced", "(Lmindustry/world/Block;)Z" },
	{ "canConsume", "()Z" },
	{ "canControlSelect", "(Lmindustry/gen/Unit;)Z" },
	{ "canDump", "(Lmindustry/gen/Building;Lmindustry/type/Item;)Z" },
	{ "canDumpLiquid", "(Lmindustry/gen/Building;Lmindustry/type/Liquid;)Z" },
	{ "canPickup", "()Z" },
	{ "canResupply", "()Z" },
	{ "canUnload", "()Z" },
	{ "canWithdraw", "()Z" },
	{ "checkSolid", "()Z" },
	{ "checkSuppression", "()Z" },
	{ "collide", "(Lmindustry/gen/Bullet;)Z" },
	{ "collision", "(Lmindustry/gen/Bullet;)Z" },
	{ "conductsTo", "(Lmindustry/gen/Building;)Z" },
	{ "configTapped", "()Z" },
	{ "consumeTriggerValid", "()Z" },
	{ "dump", "()Z" },
	{ "dump", "(Lmindustry/type/Item;)Z" },
	{ "dumpAccumulate", "()Z" },
	{ "dumpAccumulate", "(Lmindustry/type/Item;)Z" },
	{ "dumpPayload", "(Lmindustry/world/blocks/payloads/Payload;)Z" },
	{ "inMapArea", "()Z" },
	{ "interactable", "(Lmindustry/game/Team;)Z" },
	{ "isCommandable", "()Z" },
	{ "isDiscovered", "(Lmindustry/game/Team;)Z" },
	{ "isHealSuppressed", "()Z" },
	{ "isInsulated", "()Z" },
	{ "isPayload", "()Z" },
	{ "moveForward", "(Lmindustry/type/Item;)Z" },
	{ "movePayload", "(Lmindustry/world/blocks/payloads/Payload;)Z" },
	{ "onConfigureBuildTapped", "(Lmindustry/gen/Building;)Z" },
	{ "onConfigureTapped", "(FF)Z" },
	{ "payloadCheck", "(I)Z" },
	{ "productionValid", "()Z" },
	{ "put", "(Lmindustry/type/Item;)Z" },
	{ "shouldConsume", "()Z" },
	{ "shouldHideConfigure", "(Lmindustry/gen/Player;)Z" },
	{ "shouldShowConfigure", "(Lmindustry/gen/Player;)Z" },
	{ "wasRecentlyDamaged", "()Z" },
	{ "wasRecentlyHealed", "(F)Z" },
	{ "relativeTo", "(Lmindustry/gen/Building;)B" },
	{ "relativeTo", "(II)B" },
	{ "relativeTo", "(Lmindustry/world/Tile;)B" },
	{ "relativeToEdge", "(Lmindustry/world/Tile;)B" },
	{ "version", "()B" },
	{ "ambientVolume", "()F" },
	{ "calculateHeat", "([F)F" },
	{ "calculateHeat", "([FLarc/struct/IntSet;)F" },
	{ "delta", "()F" },
	{ "drawrot", "()F" },
	{ "edelta", "()F" },
	{ "efficiencyScale", "()F" },
	{ "fogRadius", "()F" },
	{ "getDisplayEfficiency", "()F" },
	{ "getPowerProduction", "()F" },
	{ "getProgressIncrease", "(F)F" },
	{ "handleDamage", "(F)F" },
	{ "moveLiquid", "(Lmindustry/gen/Building;Lmindustry/type/Liquid;)F" },
	{ "moveLiquidForward", "(ZLmindustry/type/Liquid;)F" },
	{ "progress", "()F" },
	{ "rotdeg", "()F" },
	{ "timeScale", "()F" },
	{ "totalProgress", "()F" },
	{ "warmup", "()F" },
	{ "acceptStack", "(Lmindustry/type/Item;ILmindustry/gen/Teamc;)I" },
	{ "explosionItemCap", "()I" },
	{ "getMaximumAccepted", "(Lmindustry/type/Item;)I" },
	{ "moduleBitmask", "()I" },
	{ "pos", "()I" },
	{ "removeStack", "(Lmindustry/type/Item;I)I" },
	{ "getDisplayName", "()Ljava/lang/String;" },
	{ "floor", "()Lmindustry/world/blocks/environment/Floor;" },
	{ "status", "()Lmindustry/world/meta/BlockStatus;" },
	{ "flowItems", "()Lmindustry/world/modules/ItemModule;" },
	{ "addPlan", "(Z)V" },
	{ "addPlan", "(ZZ)V" },
	{ "afterDestroyed", "()V" },
	{ "afterPickedUp", "()V" },
	{ "applyBoost", "(FF)V" },
	{ "applyHealSuppression", "(F)V" },
	{ "applyHealSuppression", "(FLarc/graphics/Color;)V" },
	{ "applySlowdown", "(FF)V" },
	{ "buildConfiguration", "(Larc/scene/ui/layout/Table;)V" },
	{ "changeTeam", "(Lmindustry/game/Team;)V" },
	{ "changeTeam", "(Lmindustry/game/Team;Z)V" },
	{ "checkAllowUpdate", "()V" },
	{ "configure", "(Ljava/lang/Object;)V" },
	{ "configureAny", "(Ljava/lang/Object;)V" },
	{ "configured", "(Lmindustry/gen/Unit;Ljava/lang/Object;)V" },
	{ "consume", "()V" },
	{ "created", "()V" },
	{ "damage", "(Lmindustry/gen/Bullet;Lmindustry/game/Team;F)V" },
	{ "damage", "(Lmindustry/game/Team;F)V" },
	{ "deselect", "()V" },
	{ "displayBars", "(Larc/scene/ui/layout/Table;)V" },
	{ "displayConsumption", "(Larc/scene/ui/layout/Table;)V" },
	{ "draw", "()V" },
	{ "drawCached", "()V" },
	{ "drawConfigure", "()V" },
	{ "drawCracks", "()V" },
	{ "drawDisabled", "()V" },
	{ "drawItemSelection", "(Lmindustry/ctype/UnlockableContent;)V" },
	{ "drawLight", "()V" },
	{ "drawLiquidLight", "(Lmindustry/type/Liquid;F)V" },
	{ "drawSelect", "()V" },
	{ "drawStatus", "()V" },
	{ "drawTeam", "()V" },
	{ "drawTeamTop", "()V" },
	{ "dropped", "()V" },
	{ "dumpLiquid", "(Lmindustry/type/Liquid;)V" },
	{ "dumpLiquid", "(Lmindustry/type/Liquid;F)V" },
	{ "dumpLiquid", "(Lmindustry/type/Liquid;FI)V" },
	{ "eachEdge", "(Larc/func/Cons;)V" },
	{ "getStackOffset", "(Lmindustry/type/Item;Larc/math/geom/Vec2;)V" },
	{ "handleItem", "(Lmindustry/gen/Building;Lmindustry/type/Item;)V" },
	{ "handleLiquid", "(Lmindustry/gen/Building;Lmindustry/type/Liquid;F)V" },
	{ "handlePayload", "(Lmindustry/gen/Building;Lmindustry/world/blocks/payloads/Payload;)V" },
	{ "handleStack", "(Lmindustry/type/Item;ILmindustry/gen/Teamc;)V" },
	{ "handleString", "(Ljava/lang/Object;)V" },
	{ "handleUnitPayload", "(Lmindustry/gen/Unit;Larc/func/Cons;)V" },
	{ "healthChanged", "()V" },
	{ "incrementDump", "(I)V" },
	{ "itemTaken", "(Lmindustry/type/Item;)V" },
	{ "noSleep", "()V" },
	{ "offload", "(Lmindustry/type/Item;)V" },
	{ "onCommand", "(Larc/math/geom/Vec2;)V" },
	{ "onConfigureClosed", "()V" },
	{ "onControlSelect", "(Lmindustry/gen/Unit;)V" },
	{ "onDeconstructed", "(Lmindustry/gen/Unit;)V" },
	{ "onDestroyed", "()V" },
	{ "onNearbyBuildAdded", "(Lmindustry/gen/Building;)V" },
	{ "onProximityAdded", "()V" },
	{ "onProximityRemoved", "()V" },
	{ "onProximityUpdate", "()V" },
	{ "onRemoved", "()V" },
	{ "overwrote", "(Larc/struct/Seq;)V" },
	{ "payloadDraw", "()V" },
	{ "pickedUp", "()V" },
	{ "playDestroySound", "()V" },
	{ "powerGraphRemoved", "()V" },
	{ "produced", "(Lmindustry/type/Item;)V" },
	{ "produced", "(Lmindustry/type/Item;I)V" },
	{ "puddleOn", "(Lmindustry/gen/Puddle;)V" },
	{ "readAll", "(Larc/util/io/Reads;B)V" },
	{ "readBase", "(Larc/util/io/Reads;)V" },
	{ "readSync", "(Larc/util/io/Reads;B)V" },
	{ "recache", "()V" },
	{ "recentlyHealed", "()V" },
	{ "removeFromProximity", "()V" },
	{ "sleep", "()V" },
	{ "splashLiquid", "(Lmindustry/type/Liquid;F)V" },
	{ "tapped", "()V" },
	{ "transferLiquid", "(Lmindustry/gen/Building;FLmindustry/type/Liquid;)V" },
	{ "unitOn", "(Lmindustry/gen/Unit;)V" },
	{ "unitOnAny", "(Lmindustry/gen/Unit;)V" },
	{ "unitRemoved", "(Lmindustry/gen/Unit;)V" },
	{ "updateConsumption", "()V" },
	{ "updateEfficiencyMultiplier", "()V" },
	{ "updateFogVisibility", "()V" },
	{ "updateLastAccess", "(Lmindustry/gen/Player;)V" },
	{ "updatePayload", "(Lmindustry/gen/Unit;Lmindustry/gen/Building;)V" },
	{ "updatePowerGraph", "()V" },
	{ "updateProximity", "()V" },
	{ "updateTableAlign", "(Larc/scene/ui/layout/Table;)V" },
	{ "updateTile", "()V" },
	{ "writeAll", "(Larc/util/io/Writes;)V" },
	{ "writeBase", "(Larc/util/io/Writes;)V" },
	{ "writeSync", "(Larc/util/io/Writes;)V" },
	{ "lambda$splashLiquid$0", "(Lmindustry/type/Liquid;F)V" },
	{ "lambda$onDeconstructed$0", "(FLmindustry/world/Tile;)V" },
	{ "lambda$display$6", "(Ljava/lang/String;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$display$9", "(Larc/struct/Bits;Ljava/lang/Runnable;)V" },
	{ "lambda$display$7", "(Larc/scene/ui/layout/Table;Ljava/lang/String;)V" },
	{ "lambda$display$8", "(Lmindustry/type/Liquid;Ljava/lang/String;)Ljava/lang/CharSequence;" },
	{ "lambda$display$1", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$display$0", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$placed$0", "(Lmindustry/gen/Building;)V" },
	{ "warmupTarget", "()F" },
	{ "scaleOutput", "(F)F" },
	{ "craft", "()V" },
	{ "dumpOutputs", "()V" },
};

static FieldMetadata fields[] {
	{ "progress", &class_float, offsetof(mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild, F_progress), "F", 1 },
	{ "totalProgress", &class_float, offsetof(mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild, F_totalProgress), "F", 1 },
	{ "warmup", &class_float, offsetof(mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild, F_warmup), "F", 1 },
	{ "outputAccumulator", getArrayClass(&class_float, 1), offsetof(mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild, F_outputAccumulator), "[F", 1 },
	{ "this$0", &class_mindustry_world_blocks_production_GenericCrafter, offsetof(mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild, F_this$0), "Lmindustry/world/blocks/production/GenericCrafter;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild_mindustry_world_blocks_production_GenericCrafter, 0, "(Lmindustry/world/blocks/production/GenericCrafter;)V", 1 },
	{ "draw", (intptr_t) M_mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild_draw, VTABLE_mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild_draw, "()V", 1 },
	{ "drawLight", (intptr_t) M_mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild_drawLight, VTABLE_mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild_drawLight, "()V", 1 },
	{ "shouldConsume", (intptr_t) M_mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild_shouldConsume_R_boolean, VTABLE_mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild_shouldConsume_R_boolean, "()Z", 1 },
	{ "updateTile", (intptr_t) M_mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild_updateTile, VTABLE_mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild_updateTile, "()V", 1 },
	{ "getProgressIncrease", (intptr_t) M_mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild_getProgressIncrease_float_R_float, VTABLE_mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild_getProgressIncrease_float_R_float, "(F)F", 1 },
	{ "warmupTarget", (intptr_t) M_mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild_warmupTarget_R_float, VTABLE_mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild_warmupTarget_R_float, "()F", 1 },
	{ "warmup", (intptr_t) M_mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild_warmup_R_float, VTABLE_mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild_warmup_R_float, "()F", 1 },
	{ "totalProgress", (intptr_t) M_mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild_totalProgress_R_float, VTABLE_mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild_totalProgress_R_float, "()F", 1 },
	{ "scaleOutput", (intptr_t) M_mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild_scaleOutput_float_R_float, VTABLE_mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild_scaleOutput_float_R_float, "(F)F", 1 },
	{ "craft", (intptr_t) M_mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild_craft, VTABLE_mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild_craft, "()V", 1 },
	{ "dumpOutputs", (intptr_t) M_mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild_dumpOutputs, VTABLE_mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild_dumpOutputs, "()V", 1 },
	{ "sense", (intptr_t) M_mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild_sense_mindustry_logic_LAccess_R_double, VTABLE_mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild_sense_mindustry_logic_LAccess_R_double, "(Lmindustry/logic/LAccess;)D", 1 },
	{ "progress", (intptr_t) M_mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild_progress_R_float, VTABLE_mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild_progress_R_float, "()F", 1 },
	{ "getMaximumAccepted", (intptr_t) M_mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild_getMaximumAccepted_mindustry_type_Item_R_int, VTABLE_mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild_getMaximumAccepted_mindustry_type_Item_R_int, "(Lmindustry/type/Item;)I", 1 },
	{ "shouldAmbientSound", (intptr_t) M_mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild_shouldAmbientSound_R_boolean, VTABLE_mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild_shouldAmbientSound_R_boolean, "()Z", 1 },
	{ "write", (intptr_t) M_mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild_write_arc_util_io_Writes, VTABLE_mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild_write_arc_util_io_Writes, "(Larc/util/io/Writes;)V", 1 },
	{ "read", (intptr_t) M_mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild_read_arc_util_io_Reads_byte, VTABLE_mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild_read_arc_util_io_Reads_byte, "(Larc/util/io/Reads;B)V", 1 },
};

Class class_mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild{
		.nativeName = (intptr_t) "mindustry/world/blocks/production/GenericCrafter$GenericCrafterBuild",
		.parentClass = (intptr_t) &class_mindustry_gen_Building,
		.size = sizeof(mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild),
		.classVtable = (intptr_t) vtable_mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild,
		.staticInitializer = (intptr_t) clinit_mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_world_blocks_production_GenericCrafter,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 18,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 314,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild = registerClass(&class_mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild);

}

