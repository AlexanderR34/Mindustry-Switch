#include "mindustry/world/blocks/payloads/PayloadDeconstructor_PayloadDeconstructorBuild.h"
#include "arc/math/Angles.h"
#include "mindustry/logic/LAccess.h"
#include "arc/graphics/Color.h"
#include "arc/graphics/g2d/Draw.h"
#include "java/lang/Runnable.h"
#include "java/lang/reflect/Constructor.h"
#include "mindustry/entities/Effect.h"
#include "mindustry/content/Fx.h"
#include "mindustry/world/blocks/payloads/BuildPayload.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/world/Tile.h"
#include "arc/math/geom/Position.h"
#include "mindustry/world/blocks/payloads/Payload.h"
#include "arc/math/Mathf.h"
#include "java/lang/reflect/Field.h"
#include "mindustry/gen/Unit.h"
#include "arc/math/Interp.h"
#include "mindustry/type/Liquid.h"
#include "mindustry/world/blocks/payloads/PayloadDeconstructor_PayloadDeconstructorBuild_invoke_arc_func_Cons_1.h"
#include "arc/util/Time.h"
#include "mindustry/type/Item.h"
#include "arc/util/Nullable.h"
#include "mindustry/world/modules/ItemModule.h"
#include "mindustry/gen/Building.h"
#include "java/lang/Object.h"
#include "mindustry/world/blocks/payloads/PayloadDeconstructor.h"
#include "mindustry/world/blocks/payloads/PayloadBlock.h"
#include "mindustry/world/modules/LiquidModule.h"
#include "arc/util/io/Writes.h"
#include "arc/math/geom/Vec2.h"
#include "mindustry/world/Block.h"
#include "arc/scene/style/TextureRegionDrawable.h"
#include "mindustry/game/Rules.h"
#include "arc/graphics/g2d/Lines.h"
#include "mindustry/world/blocks/payloads/UnitPayload.h"
#include "mindustry/entities/Puddles.h"
#include "mindustry/ui/Displayable.h"
#include "mindustry/world/blocks/payloads/PayloadDeconstructor_PayloadDeconstructorBuild_invoke_java_lang_Runnable_1.h"
#include "arc/func/Cons.h"
#include "arc/math/Interp_ExpOut.h"
#include "java/lang/Math.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "mindustry/gen/Icon.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/type/UnitType.h"
#include "mindustry/world/blocks/payloads/PayloadDeconstructor_PayloadDeconstructorBuild.h"
#include "arc/util/io/Reads.h"
#include "mindustry/graphics/Pal.h"
#include "mindustry/type/ItemStack.h"
#include "mindustry/ctype/Content.h"
#include "mindustry/world/blocks/payloads/PayloadBlock_PayloadBlockBuild.h"
#include "mindustry/graphics/Drawf.h"
#include "mindustry/game/Team.h"
#include "mindustry/Vars.h"
#include "mindustry/core/GameState.h"

extern "C" {

jfloat SF_mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild_overlayDuration;

void mark_mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild *) object;
	if (self->F_deconstructing)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_deconstructing)->clazz)->markFunction)((jobject) self->F_deconstructing, mark, depth + 1);
	if (self->F_accum)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_accum)->clazz)->markFunction)((jobject) self->F_accum, mark, depth + 1);
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild(ctx);
	SF_mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild_overlayDuration = jfloat(40.0f);
}

void init_mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild_mindustry_world_blocks_payloads_PayloadDeconstructor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/PayloadDeconstructor$PayloadDeconstructorBuild:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(59);
	((mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_mindustry_world_blocks_payloads_PayloadBlock(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(65);
	((mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild *) NULL_CHECK((frame[0].o)))->F_overlayTime = (jfloat(0));
	LINE_NUMBER(59);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild_draw(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/PayloadDeconstructor$PayloadDeconstructorBuild:draw", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(69);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_region;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float(ctx, sp[0].o, ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y));
	LINE_NUMBER(72);
	frame[1].i = (jint(0));
	}
label_2:;
	{
	if ((frame[1].i) >= (jint(4))) goto label_3;
	}
	{
	LINE_NUMBER(73);
	jint temp0 = (jint)((func_mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild_blends_int_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild_blends_int_R_boolean])(ctx, (frame[0].o), (frame[1].i));
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(74);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock *) NULL_CHECK(sp[0].o))->F_inRegion;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float(ctx, sp[0].o, ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y), (jfloat((((frame[1].i) * (90)) - (180)))));
	}
label_5:;
	{
	LINE_NUMBER(72);
	INST_IINC(1, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(78);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (jfloat(35.0f)));
	LINE_NUMBER(79);
	((func_mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild_drawPayload) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild_drawPayload])(ctx, (frame[0].o));
	LINE_NUMBER(80);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild *) NULL_CHECK((frame[0].o)))->F_deconstructing;
	if (sp[0].o == nullptr) goto label_9;
	}
	{
	LINE_NUMBER(81);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild *) NULL_CHECK((frame[0].o)))->F_deconstructing;
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	sp[1].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_payVector;
	jfloat temp1 = temp0 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x);
	jfloat temp2 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	sp[1].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_payVector;
	((func_mindustry_world_blocks_payloads_Payload_set_float_float_float) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_payloads_Payload, INDEX_mindustry_world_blocks_payloads_Payload_set_float_float_float, sp[0].o))(ctx, sp[0].o, temp1, (temp2 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y)), ((jfloat)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_payRotation));
	LINE_NUMBER(83);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (jfloat(35.0f)));
	LINE_NUMBER(84);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild *) NULL_CHECK((frame[0].o)))->F_deconstructing;
	((func_mindustry_world_blocks_payloads_Payload_drawShadow_float) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_payloads_Payload, INDEX_mindustry_world_blocks_payloads_Payload_drawShadow_float, sp[0].o))(ctx, sp[0].o, ((jfloat(1)) - ((jfloat)((mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild *) NULL_CHECK((frame[0].o)))->F_progress)));
	LINE_NUMBER(87);
	jfloat temp3 = jfloat(35.0f);
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild_invoke_java_lang_Runnable_1(ctx);
		auto proxy = (mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild_invoke_java_lang_Runnable_1 *) gcAlloc(ctx, &class_mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild_invoke_java_lang_Runnable_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	SM_arc_graphics_g2d_Draw_draw_float_java_lang_Runnable(ctx, temp3, sp[0].o);
	}
label_9:;
	{
	LINE_NUMBER(99);
	if ((floatCompare(((jfloat)((mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild *) NULL_CHECK((frame[0].o)))->F_overlayTime), (jfloat(0)), -1)) <= 0) goto label_14;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild *) NULL_CHECK((frame[0].o)))->F_deconstructing;
	if (sp[0].o != nullptr) goto label_14;
	}
	{
	LINE_NUMBER(100);
	jfloat temp0 = (jfloat)SM_arc_graphics_g2d_Draw_z_R_float(ctx);
	frame[1].f = temp0;
	LINE_NUMBER(101);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (jfloat(92.0f)));
	LINE_NUMBER(102);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_warning;
	sp[0].o = (jobject)((func_arc_scene_style_TextureRegionDrawable_getRegion_R_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_style_TextureRegionDrawable_getRegion_R_arc_graphics_g2d_TextureRegion])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(103);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Color_scarlet;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(104);
	jfloat temp1 = jfloat(0.8f);
	clinit_arc_math_Interp(ctx);
	sp[0].o = (jobject)SF_arc_math_Interp_exp5Out;
	jfloat temp2 = (jfloat)((func_arc_math_Interp$ExpOut_apply_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Interp$ExpOut_apply_float_R_float])(ctx, sp[0].o, ((jfloat)((mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild *) NULL_CHECK((frame[0].o)))->F_overlayTime));
	SM_arc_graphics_g2d_Draw_alpha_float(ctx, (temp1 * temp2));
	LINE_NUMBER(106);
	frame[3].f = (jfloat(8.0f));
	LINE_NUMBER(107);
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float_float(ctx, (frame[2].o), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y), (frame[3].f), (frame[3].f));
	LINE_NUMBER(109);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(111);
	sp[0].o = frame[0].o;
	jfloat temp3 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (((jfloat)((mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild *) NULL_CHECK((frame[0].o)))->F_overlayTime) - ((clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta) / (jfloat(40.0f)))), (jfloat(0)));
	((mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild *) NULL_CHECK(sp[0].o))->F_overlayTime = temp3;
	LINE_NUMBER(112);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (frame[1].f));
	}
label_14:;
	{
	LINE_NUMBER(115);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock *) NULL_CHECK(sp[0].o))->F_topRegion;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float(ctx, sp[0].o, ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y));
	LINE_NUMBER(116);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild_acceptUnitPayload_mindustry_gen_Unit_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/PayloadDeconstructor$PayloadDeconstructorBuild:acceptUnitPayload", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(120);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_payload;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild *) NULL_CHECK((frame[0].o)))->F_deconstructing;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_allowedInPayloads) == 0) goto label_1;
	}
	{
	if (((jint)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_spawnedByCore) != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_type;
	LINE_NUMBER(121);
	sp[0].o = (jobject)((func_mindustry_type_UnitType_getTotalRequirements_R_Array1_mindustry_type_ItemStack) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_UnitType_getTotalRequirements_R_Array1_mindustry_type_ItemStack])(ctx, sp[0].o);
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) <= 0) goto label_1;
	}
	{
	jfloat temp0 = ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_hitSize) / (jfloat(8.0f));
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if ((floatCompare(temp0, ((jfloat)((mindustry_world_blocks_payloads_PayloadDeconstructor *) NULL_CHECK(sp[0].o))->F_maxPayloadSize), 1)) > 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_3;
label_1:;
	INST_ICONST(0);
label_3:;
	LINE_NUMBER(120);
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild_handlePayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/PayloadDeconstructor$PayloadDeconstructorBuild:handlePayload", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(126);
	M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_handlePayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	LINE_NUMBER(127);
	((mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild *) NULL_CHECK((frame[0].o)))->F_accum = (jref) (jobject(nullptr));
	LINE_NUMBER(128);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild_acceptPayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/PayloadDeconstructor$PayloadDeconstructorBuild:acceptPayload", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(132);
	frame[3].i = (jint(0));
	LINE_NUMBER(135);
	if ((frame[1].o) == (frame[0].o)) goto label_2;
	}
	{
	LINE_NUMBER(136);
	sp[0].o = (jobject)((func_mindustry_world_blocks_payloads_Payload_requirements_R_Array1_mindustry_type_ItemStack) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_payloads_Payload, INDEX_mindustry_world_blocks_payloads_Payload_requirements_R_Array1_mindustry_type_ItemStack, (frame[2].o)))(ctx, (frame[2].o));
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
	LINE_NUMBER(137);
	jfloat temp0 = jfloat(((jint)((mindustry_type_ItemStack *) NULL_CHECK((frame[7].o)))->F_amount));
	sp[0].f = temp0;
	sp += 1;
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_world_blocks_payloads_BuildPayload)) == 0) goto label_7;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	jfloat temp0 = (jfloat)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_buildCostMultiplier;
	sp[0].f = temp0;
	sp += 1;
	goto label_8;
	}
label_7:;
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	jfloat temp0 = (jfloat)((func_mindustry_game_Rules_unitCost_mindustry_game_Team_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Rules_unitCost_mindustry_game_Team_R_float])(ctx, sp[0].o, sp[1].o);
	sp[0].f = temp0;
	sp += 1;
	}
label_8:;
	{
	sp -= 2;
	frame[8].f = (sp[0].f * sp[1].f);
	LINE_NUMBER(138);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	sp[1].o = (jobject)((mindustry_type_ItemStack *) NULL_CHECK((frame[7].o)))->F_item;
	jint temp0 = (jint)((func_mindustry_world_modules_ItemModule_get_mindustry_type_Item_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_get_mindustry_type_Item_R_int])(ctx, sp[0].o, sp[1].o);
	jfloat temp1 = (jfloat(temp0)) + (frame[8].f);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if ((floatCompare(temp1, (jfloat(((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_itemCapacity))), -1)) < 0) goto label_10;
	}
	INST_ICONST(1);
	INST_ISTORE(3);
label_10:;
	{
	LINE_NUMBER(141);
	jfloat temp0 = frame[8].f;
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if ((floatCompare(temp0, (jfloat(((jint)((mindustry_world_blocks_payloads_PayloadDeconstructor *) NULL_CHECK(sp[0].o))->F_itemBuffer))), -1)) < 0) goto label_11;
	}
	{
	LINE_NUMBER(142);
	frame[3].i = (jint(0));
	LINE_NUMBER(143);
	goto label_5;
	}
label_11:;
	{
	LINE_NUMBER(136);
	INST_IINC(6, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(147);
	if ((frame[3].i) == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild *) NULL_CHECK((frame[0].o)))->F_deconstructing;
	if (sp[0].o != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(148);
	((mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild *) NULL_CHECK((frame[0].o)))->F_overlayTime = (jfloat(2.5f));
	}
label_2:;
	{
	LINE_NUMBER(152);
	if ((frame[3].i) != 0) goto label_15;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild *) NULL_CHECK((frame[0].o)))->F_deconstructing;
	if (sp[0].o != nullptr) goto label_15;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_payload;
	if (sp[0].o != nullptr) goto label_15;
	}
	{
	jint temp0 = (jint)M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_acceptPayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload_R_boolean(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	if (temp0 == 0) goto label_15;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_blocks_payloads_Payload_requirements_R_Array1_mindustry_type_ItemStack) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_payloads_Payload, INDEX_mindustry_world_blocks_payloads_Payload_requirements_R_Array1_mindustry_type_ItemStack, (frame[2].o)))(ctx, (frame[2].o));
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) <= 0) goto label_15;
	}
	{
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)((func_mindustry_world_blocks_payloads_Payload_fits_float_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_payloads_Payload, INDEX_mindustry_world_blocks_payloads_Payload_fits_float_R_boolean, sp[0].o))(ctx, sp[0].o, ((jfloat)((mindustry_world_blocks_payloads_PayloadDeconstructor *) NULL_CHECK(sp[1].o))->F_maxPayloadSize));
	if (temp0 == 0) goto label_15;
	}
	INST_ICONST(1);
	goto label_16;
label_15:;
	INST_ICONST(0);
label_16:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild_updateTile(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/PayloadDeconstructor$PayloadDeconstructorBuild:updateTile", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(156);
	M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_updateTile(ctx, (frame[0].o));
	LINE_NUMBER(157);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = (jint)((func_mindustry_world_modules_ItemModule_total_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_total_R_int])(ctx, sp[0].o);
	if (temp0 <= 0) goto label_2;
	}
	{
	LINE_NUMBER(158);
	frame[1].i = (jint(0));
	}
label_4:;
	{
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (temp0 >= ((jint)((mindustry_world_blocks_payloads_PayloadDeconstructor *) NULL_CHECK(sp[0].o))->F_dumpRate)) goto label_2;
	}
	{
	LINE_NUMBER(159);
	jint temp0 = (jint)((func_mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild_dumpAccumulate_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild_dumpAccumulate_R_boolean])(ctx, (frame[0].o));
	LINE_NUMBER(158);
	INST_IINC(1, 1);
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(163);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild *) NULL_CHECK((frame[0].o)))->F_deconstructing;
	if (sp[0].o != nullptr) goto label_7;
	}
	{
	LINE_NUMBER(164);
	((mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild *) NULL_CHECK((frame[0].o)))->F_progress = (jfloat(0));
	}
label_7:;
	{
	LINE_NUMBER(167);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_payRotation;
	jfloat temp1 = jfloat(90.0f);
	sp[1].o = (jobject)((mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp2 = (jfloat)((mindustry_world_blocks_payloads_PayloadBlock *) NULL_CHECK(sp[1].o))->F_payloadRotateSpeed;
	jfloat temp3 = (jfloat)((func_mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild_edelta_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild_edelta_R_float])(ctx, (frame[0].o));
	jfloat temp4 = (jfloat)SM_arc_math_Angles_moveToward_float_float_float_R_float(ctx, temp0, temp1, (temp2 * temp3));
	((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK(sp[0].o))->F_payRotation = temp4;
	LINE_NUMBER(169);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild *) NULL_CHECK((frame[0].o)))->F_deconstructing;
	if (sp[0].o == nullptr) goto label_10;
	}
	{
	LINE_NUMBER(170);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild *) NULL_CHECK((frame[0].o)))->F_deconstructing;
	sp[0].o = (jobject)((func_mindustry_world_blocks_payloads_Payload_requirements_R_Array1_mindustry_type_ItemStack) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_payloads_Payload, INDEX_mindustry_world_blocks_payloads_Payload_requirements_R_Array1_mindustry_type_ItemStack, sp[0].o))(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(171);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild *) NULL_CHECK((frame[0].o)))->F_accum;
	if (sp[0].o == nullptr) goto label_13;
	}
	{
	jint temp0 = ((jarray) nullCheck(ctx, (frame[1].o)))->length;
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild *) NULL_CHECK((frame[0].o)))->F_accum;
	if (temp0 == (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_14;
	}
label_13:;
	{
	LINE_NUMBER(172);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_float, (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	((mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild *) NULL_CHECK(sp[0].o))->F_accum = (jref) sp[1].o;
	}
label_14:;
	{
	LINE_NUMBER(176);
	frame[2].i = (jint(1));
	LINE_NUMBER(177);
	frame[3].o = (frame[1].o);
	frame[4].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	frame[5].i = (jint(0));
	}
label_16:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_17;
	}
	{
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(178);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	sp[1].o = (jobject)((mindustry_type_ItemStack *) NULL_CHECK((frame[6].o)))->F_item;
	jint temp0 = (jint)((func_mindustry_world_modules_ItemModule_get_mindustry_type_Item_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_get_mindustry_type_Item_R_int])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (temp0 < ((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_itemCapacity)) goto label_19;
	}
	{
	LINE_NUMBER(179);
	frame[2].i = (jint(0));
	LINE_NUMBER(180);
	goto label_17;
	}
label_19:;
	{
	LINE_NUMBER(177);
	INST_IINC(5, 1);
	goto label_16;
	}
label_17:;
	{
	LINE_NUMBER(185);
	if ((frame[2].i) == 0) goto label_22;
	}
	{
	LINE_NUMBER(186);
	jfloat temp0 = (jfloat)((func_mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild_edelta_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild_edelta_R_float])(ctx, (frame[0].o));
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp1 = temp0 * ((jfloat)((mindustry_world_blocks_payloads_PayloadDeconstructor *) NULL_CHECK(sp[0].o))->F_deconstructSpeed);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild *) NULL_CHECK((frame[0].o)))->F_deconstructing;
	jfloat temp2 = (jfloat)((func_mindustry_world_blocks_payloads_Payload_buildTime_R_float) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_payloads_Payload, INDEX_mindustry_world_blocks_payloads_Payload_buildTime_R_float, sp[0].o))(ctx, sp[0].o);
	frame[3].f = (temp1 / temp2);
	LINE_NUMBER(187);
	jfloat temp3 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, (frame[3].f), ((jfloat(1)) - ((jfloat)((mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild *) NULL_CHECK((frame[0].o)))->F_progress)));
	frame[4].f = temp3;
	LINE_NUMBER(190);
	if ((floatCompare(((jfloat)((mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild *) NULL_CHECK((frame[0].o)))->F_progress), (jfloat(0)), -1)) != 0) goto label_26;
	}
	{
	if ((floatCompare((frame[3].f), (jfloat(0)), -1)) <= 0) goto label_26;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild *) NULL_CHECK((frame[0].o)))->F_deconstructing;
	frame[6].o = sp[0].o;
	if ((isInstance(ctx, (frame[6].o), &class_mindustry_world_blocks_payloads_BuildPayload)) == 0) goto label_26;
	}
	{
	frame[5].o = (checkCast(ctx, &class_mindustry_world_blocks_payloads_BuildPayload, (frame[6].o)));
	LINE_NUMBER(191);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_BuildPayload *) NULL_CHECK((frame[5].o)))->F_build;
	frame[6].o = sp[0].o;
	LINE_NUMBER(193);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[6].o)))->F_liquids;
	if (sp[0].o == nullptr) goto label_26;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[6].o)))->F_liquids;
	jfloat temp0 = (jfloat)((func_mindustry_world_modules_LiquidModule_currentAmount_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_currentAmount_R_float])(ctx, sp[0].o);
	if ((floatCompare(temp0, (jfloat(0)), -1)) <= 0) goto label_26;
	}
	{
	LINE_NUMBER(194);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[6].o)))->F_liquids;
	jfloat temp0 = (jfloat)((func_mindustry_world_modules_LiquidModule_currentAmount_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_currentAmount_R_float])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	jint temp1 = (jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	frame[7].f = ((temp0 / (jfloat((temp1 * ((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size))))) * (jfloat(2)));
	LINE_NUMBER(195);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild_invoke_arc_func_Cons_1(ctx);
		auto proxy = (mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild_invoke_arc_func_Cons_1 *) gcAlloc(ctx, &class_mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild_invoke_arc_func_Cons_1);
		proxy->F_field1 = (frame[7].f);
		proxy->F_field0 = (jref) (frame[6].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_world_Tile_getLinkedTiles_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_getLinkedTiles_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	}
label_26:;
	{
	LINE_NUMBER(199);
	sp[0].o = frame[0].o;
	((mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild *) NULL_CHECK(sp[0].o))->F_progress = (((jfloat)((mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild *) NULL_CHECK(sp[0].o))->F_progress) + (frame[3].f));
	LINE_NUMBER(200);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild *) NULL_CHECK(sp[0].o))->F_time;
	jfloat temp1 = (jfloat)((func_mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild_edelta_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild_edelta_R_float])(ctx, (frame[0].o));
	((mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild *) NULL_CHECK(sp[0].o))->F_time = (temp0 + temp1);
	LINE_NUMBER(202);
	frame[5].i = (jint(0));
	}
label_33:;
	{
	if ((frame[5].i) >= (((jarray) nullCheck(ctx, (frame[1].o)))->length)) goto label_22;
	}
	{
	LINE_NUMBER(203);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild *) NULL_CHECK((frame[0].o)))->F_accum;
	jint temp0 = frame[5].i;
	jfloat temp3 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp0);
	jfloat temp4 = jfloat(((jint)((mindustry_type_ItemStack *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[5].i)))))->F_amount));
	sp[1].o = (jobject)((mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild *) NULL_CHECK((frame[0].o)))->F_deconstructing;
	jobject temp5 = sp[1].o;
	sp[1].i = temp0;
	sp[2].f = temp3;
	sp[3].f = temp4;
	sp += 4;
	if ((isInstance(ctx, temp5, &class_mindustry_world_blocks_payloads_BuildPayload)) == 0) goto label_35;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	jfloat temp0 = (jfloat)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_buildCostMultiplier;
	sp[0].f = temp0;
	sp += 1;
	goto label_36;
	}
label_35:;
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	jfloat temp0 = (jfloat)((func_mindustry_game_Rules_unitCost_mindustry_game_Team_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Rules_unitCost_mindustry_game_Team_R_float])(ctx, sp[0].o, sp[1].o);
	sp[0].f = temp0;
	sp += 1;
	}
label_36:;
	{
	sp -= 5;
	ARRAY_ACCESS(jfloat, sp[0].o, sp[1].i) = (sp[2].f + ((sp[3].f * sp[4].f) * (frame[4].f)));
	LINE_NUMBER(202);
	INST_IINC(5, 1);
	goto label_33;
	}
label_22:;
	{
	LINE_NUMBER(207);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild *) NULL_CHECK((frame[0].o)))->F_speedScl;
	sp[1].f = temp0;
	sp += 2;
	if ((frame[2].i) == 0) goto label_38;
	}
	INST_FCONST(1);
	goto label_39;
label_38:;
	INST_FCONST(0);
label_39:;
	{
	sp -= 3;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_lerpDelta_float_float_float_R_float(ctx, sp[1].f, sp[2].f, (jfloat(0.1f)));
	((mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild *) NULL_CHECK(sp[0].o))->F_speedScl = temp0;
	LINE_NUMBER(210);
	frame[3].i = (jint(0));
	}
label_41:;
	{
	if ((frame[3].i) >= (((jarray) nullCheck(ctx, (frame[1].o)))->length)) goto label_42;
	}
	{
	LINE_NUMBER(211);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild *) NULL_CHECK((frame[0].o)))->F_accum;
	jint temp0 = jint(((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (frame[3].i))));
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp1 = (jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_itemCapacity;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	sp[1].o = (jobject)((mindustry_type_ItemStack *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i)))))->F_item;
	jint temp2 = (jint)((func_mindustry_world_modules_ItemModule_get_mindustry_type_Item_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_get_mindustry_type_Item_R_int])(ctx, sp[0].o, sp[1].o);
	jint temp3 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp0, (temp1 - temp2));
	frame[4].i = temp3;
	LINE_NUMBER(212);
	if ((frame[4].i) <= 0) goto label_45;
	}
	{
	LINE_NUMBER(213);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	sp[1].o = (jobject)((mindustry_type_ItemStack *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i)))))->F_item;
	((func_mindustry_world_modules_ItemModule_add_mindustry_type_Item_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_add_mindustry_type_Item_int])(ctx, sp[0].o, sp[1].o, (frame[4].i));
	LINE_NUMBER(214);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild *) NULL_CHECK((frame[0].o)))->F_accum;
	jint temp0 = frame[3].i;
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp0)) - (jfloat((frame[4].i))));
	}
label_45:;
	{
	LINE_NUMBER(210);
	INST_IINC(3, 1);
	goto label_41;
	}
label_42:;
	{
	LINE_NUMBER(219);
	if ((floatCompare(((jfloat)((mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild *) NULL_CHECK((frame[0].o)))->F_progress), (jfloat(1)), -1)) < 0) goto label_48;
	}
	{
	LINE_NUMBER(220);
	frame[2].i = (jint(1));
	LINE_NUMBER(222);
	frame[3].i = (jint(0));
	}
label_51:;
	{
	if ((frame[3].i) >= (((jarray) nullCheck(ctx, (frame[1].o)))->length)) goto label_52;
	}
	{
	LINE_NUMBER(223);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild *) NULL_CHECK((frame[0].o)))->F_accum;
	jint temp0 = (jint)SM_arc_math_Mathf_equal_float_float_float_R_boolean(ctx, ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (frame[3].i))), (jfloat(1)), (jfloat(1,000000e-04f)));
	if (temp0 == 0) goto label_54;
	}
	{
	LINE_NUMBER(224);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = (jint)((func_mindustry_world_modules_ItemModule_total_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_total_R_int])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (temp0 >= ((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_itemCapacity)) goto label_56;
	}
	{
	LINE_NUMBER(225);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	sp[1].o = (jobject)((mindustry_type_ItemStack *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i)))))->F_item;
	((func_mindustry_world_modules_ItemModule_add_mindustry_type_Item_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_add_mindustry_type_Item_int])(ctx, sp[0].o, sp[1].o, (jint(1)));
	LINE_NUMBER(226);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild *) NULL_CHECK((frame[0].o)))->F_accum;
	ARRAY_ACCESS(jfloat, sp[0].o, (frame[3].i)) = (jfloat(0));
	goto label_54;
	}
label_56:;
	{
	LINE_NUMBER(228);
	frame[2].i = (jint(0));
	LINE_NUMBER(229);
	goto label_52;
	}
label_54:;
	{
	LINE_NUMBER(222);
	INST_IINC(3, 1);
	goto label_51;
	}
label_52:;
	{
	LINE_NUMBER(234);
	if ((frame[2].i) == 0) goto label_48;
	}
	{
	LINE_NUMBER(235);
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_breakBlock;
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	sp[1].o = (jobject)((mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild *) NULL_CHECK((frame[0].o)))->F_deconstructing;
	jfloat temp2 = (jfloat)((func_mindustry_world_blocks_payloads_Payload_size_R_float) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_payloads_Payload, INDEX_mindustry_world_blocks_payloads_Payload_size_R_float, sp[1].o))(ctx, sp[1].o);
	((func_mindustry_entities_Effect_at_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float])(ctx, sp[0].o, temp0, temp1, (temp2 / (jfloat(8.0f))));
	LINE_NUMBER(237);
	((mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild *) NULL_CHECK((frame[0].o)))->F_deconstructing = (jref) (jobject(nullptr));
	LINE_NUMBER(238);
	((mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild *) NULL_CHECK((frame[0].o)))->F_accum = (jref) (jobject(nullptr));
	}
label_48:;
	LINE_NUMBER(241);
	goto label_63;
label_10:;
	{
	jint temp0 = (jint)((func_mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild_moveInPayload_boolean_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild_moveInPayload_boolean_R_boolean])(ctx, (frame[0].o), (jint(0)));
	if (temp0 == 0) goto label_63;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_payload;
	if (sp[0].o == nullptr) goto label_63;
	}
	{
	LINE_NUMBER(242);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_payload;
	sp[1].o = (jobject)((func_mindustry_world_blocks_payloads_Payload_requirements_R_Array1_mindustry_type_ItemStack) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_payloads_Payload, INDEX_mindustry_world_blocks_payloads_Payload_requirements_R_Array1_mindustry_type_ItemStack, sp[1].o))(ctx, sp[1].o);
	sp[1].o = (jobject) createArray(ctx, &class_float, (((jarray) nullCheck(ctx, sp[1].o))->length));
	((mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild *) NULL_CHECK(sp[0].o))->F_accum = (jref) sp[1].o;
	LINE_NUMBER(243);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_payload;
	((mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild *) NULL_CHECK(sp[0].o))->F_deconstructing = (jref) sp[1].o;
	LINE_NUMBER(244);
	((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_payload = (jref) (jobject(nullptr));
	LINE_NUMBER(245);
	((mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild *) NULL_CHECK((frame[0].o)))->F_progress = (jfloat(0));
	}
label_63:;
	LINE_NUMBER(247);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jdouble M_mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild_sense_mindustry_ctype_Content_R_double(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/PayloadDeconstructor$PayloadDeconstructorBuild:sense", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(251);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild *) NULL_CHECK((frame[0].o)))->F_deconstructing;
	frame[3].o = sp[0].o;
	if ((isInstance(ctx, (frame[3].o), &class_mindustry_world_blocks_payloads_UnitPayload)) == 0) goto label_1;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_world_blocks_payloads_UnitPayload, (frame[3].o)));
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_UnitPayload *) NULL_CHECK((frame[2].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type;
	if (sp[0].o != (frame[1].o)) goto label_3;
	}
	INST_DCONST(1);
	goto label_4;
label_3:;
	INST_DCONST(0);
label_4:;
	popStackFrame(ctx);
	INST_DRETURN();
label_1:;
	{
	LINE_NUMBER(252);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild *) NULL_CHECK((frame[0].o)))->F_deconstructing;
	frame[3].o = sp[0].o;
	if ((isInstance(ctx, (frame[3].o), &class_mindustry_world_blocks_payloads_BuildPayload)) == 0) goto label_5;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_world_blocks_payloads_BuildPayload, (frame[3].o)));
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_BuildPayload *) NULL_CHECK((frame[2].o)))->F_build;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_block;
	if (sp[0].o != (frame[1].o)) goto label_7;
	}
	INST_DCONST(1);
	goto label_8;
label_7:;
	INST_DCONST(0);
label_8:;
	popStackFrame(ctx);
	INST_DRETURN();
label_5:;
	{
	LINE_NUMBER(253);
	jdouble temp0 = (jdouble)M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_sense_mindustry_ctype_Content_R_double(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jdouble M_mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild_sense_mindustry_logic_LAccess_R_double(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/PayloadDeconstructor$PayloadDeconstructorBuild:sense", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(258);
	sp[0].o = frame[1].o;
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_progress;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	popStackFrame(ctx);
	return (jdouble(((jfloat)((mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild *) NULL_CHECK((frame[0].o)))->F_progress)));
	}
label_1:;
	{
	LINE_NUMBER(259);
	jdouble temp0 = (jdouble)M_mindustry_gen_Building_sense_mindustry_logic_LAccess_R_double(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild_shouldConsume_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/PayloadDeconstructor$PayloadDeconstructorBuild:shouldConsume", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(264);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild *) NULL_CHECK((frame[0].o)))->F_deconstructing;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	if (((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_enabled) == 0) goto label_1;
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

void M_mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild_write_arc_util_io_Writes(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/PayloadDeconstructor$PayloadDeconstructorBuild:write", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(269);
	M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_write_arc_util_io_Writes(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(271);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild *) NULL_CHECK((frame[0].o)))->F_progress));
	LINE_NUMBER(272);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild *) NULL_CHECK((frame[0].o)))->F_accum;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(273);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild *) NULL_CHECK((frame[0].o)))->F_accum;
	((func_arc_util_io_Writes_s_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_s_int])(ctx, sp[0].o, (((jarray) nullCheck(ctx, sp[1].o))->length));
	LINE_NUMBER(274);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild *) NULL_CHECK((frame[0].o)))->F_accum;
	frame[2].o = sp[0].o;
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_6:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_7;
	}
	{
	frame[5].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(275);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), (frame[5].f));
	LINE_NUMBER(274);
	INST_IINC(4, 1);
	goto label_6;
	}
label_7:;
	goto label_10;
label_3:;
	{
	LINE_NUMBER(278);
	((func_arc_util_io_Writes_s_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_s_int])(ctx, (frame[1].o), (jint(0)));
	}
label_10:;
	{
	LINE_NUMBER(280);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild *) NULL_CHECK((frame[0].o)))->F_deconstructing;
	SM_mindustry_world_blocks_payloads_Payload_write_mindustry_world_blocks_payloads_Payload_arc_util_io_Writes(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(281);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild_read_arc_util_io_Reads_byte(jcontext ctx, jobject self, jobject param0, jbyte param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/PayloadDeconstructor$PayloadDeconstructorBuild:read", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(285);
	M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_read_arc_util_io_Reads_byte(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	LINE_NUMBER(287);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild *) NULL_CHECK(sp[0].o))->F_progress = temp0;
	LINE_NUMBER(288);
	jint temp1 = (jint)((func_arc_util_io_Reads_s_R_short) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_s_R_short])(ctx, (frame[1].o));
	frame[3].i = temp1;
	LINE_NUMBER(289);
	if ((frame[3].i) <= 0) goto label_4;
	}
	{
	LINE_NUMBER(290);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_float, (frame[3].i));
	((mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild *) NULL_CHECK(sp[0].o))->F_accum = (jref) sp[1].o;
	LINE_NUMBER(291);
	frame[4].i = (jint(0));
	}
label_7:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_4;
	}
	{
	LINE_NUMBER(292);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild *) NULL_CHECK((frame[0].o)))->F_accum;
	jint temp0 = frame[4].i;
	jfloat temp1 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = temp1;
	LINE_NUMBER(291);
	INST_IINC(4, 1);
	goto label_7;
	}
label_4:;
	{
	LINE_NUMBER(295);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_world_blocks_payloads_Payload_read_arc_util_io_Reads_R_mindustry_world_blocks_payloads_Payload(ctx, (frame[1].o));
	((mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild *) NULL_CHECK(sp[0].o))->F_deconstructing = (jref) sp[1].o;
	LINE_NUMBER(296);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild_lambda$updateTile$0_mindustry_gen_Building_float_mindustry_world_Tile(jcontext ctx, jobject param0, jfloat param1, jobject param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/PayloadDeconstructor$PayloadDeconstructorBuild:lambda$updateTile$0", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(195);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_liquids;
	sp[1].o = (jobject)((func_mindustry_world_modules_LiquidModule_current_R_mindustry_type_Liquid) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_current_R_mindustry_type_Liquid])(ctx, sp[1].o);
	SM_mindustry_entities_Puddles_deposit_mindustry_world_Tile_mindustry_type_Liquid_float(ctx, sp[0].o, sp[1].o, (frame[1].f));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild_lambda$draw$0(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/PayloadDeconstructor$PayloadDeconstructorBuild:lambda$draw$0", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(88);
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild *) NULL_CHECK((frame[0].o)))->F_deconstructing;
	sp[0].o = (jobject)((func_mindustry_world_blocks_payloads_Payload_icon_R_arc_graphics_g2d_TextureRegion) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_payloads_Payload, INDEX_mindustry_world_blocks_payloads_Payload_icon_R_arc_graphics_g2d_TextureRegion, sp[0].o))(ctx, sp[0].o);
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_remove;
	sp[2].o = (jobject)((mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild *) NULL_CHECK((frame[0].o)))->F_deconstructing;
	jobject temp2 = sp[0].o;
	sp[0].f = temp0;
	jobject temp3 = sp[1].o;
	sp[1].f = temp1;
	jobject temp4 = sp[2].o;
	sp[2].o = temp2;
	sp[3].o = temp3;
	sp += 4;
	if ((isInstance(ctx, temp4, &class_mindustry_world_blocks_payloads_BuildPayload)) == 0) goto label_1;
	}
	INST_FCONST(0);
	goto label_2;
label_1:;
	{
	jfloat temp0 = ((jfloat)((mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild *) NULL_CHECK((frame[0].o)))->F_payRotation) - (jfloat(90.0f));
	sp[0].f = temp0;
	sp += 1;
	}
label_2:;
	{
	sp -= 5;
	SM_mindustry_graphics_Drawf_construct_float_float_arc_graphics_g2d_TextureRegion_arc_graphics_Color_float_float_float_float(ctx, sp[0].f, sp[1].f, sp[2].o, sp[3].o, sp[4].f, ((jfloat(1)) - ((jfloat)((mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild *) NULL_CHECK((frame[0].o)))->F_progress)), ((jfloat(1)) - ((jfloat)((mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild *) NULL_CHECK((frame[0].o)))->F_progress)), ((jfloat)((mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild *) NULL_CHECK((frame[0].o)))->F_time));
	LINE_NUMBER(89);
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_remove;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(90);
	SM_arc_graphics_g2d_Draw_alpha_float(ctx, (jfloat(1)));
	LINE_NUMBER(92);
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild *) NULL_CHECK((frame[0].o)))->F_time;
	jfloat temp2 = jfloat(20.0f);
	jfloat temp3 = jfloat(4.0f);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	jfloat temp4 = (jfloat)SM_arc_math_Mathf_sin_float_float_float_R_float(ctx, temp1, temp2, ((temp3 * (jfloat(((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size)))) - (jfloat(3.0f))));
	jfloat temp5 = temp0 + temp4;
	jfloat temp6 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	jfloat temp7 = jfloat(90.0f);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	SM_arc_graphics_g2d_Lines_lineAngleCenter_float_float_float_float(ctx, temp5, temp6, temp7, ((jfloat((((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size) * (8)))) - (jfloat(6.0f))));
	LINE_NUMBER(94);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(95);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	{ // Field deconstructing
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[0]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field accum
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[1]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

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
}

void *vtable_mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild[] {
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
	(void *) M_mindustry_gen_Building_shouldAmbientSound_R_boolean,
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
	(void *) M_mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild_write_arc_util_io_Writes,
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
	(void *) M_mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild_sense_mindustry_logic_LAccess_R_double,
	(void *) M_mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild_sense_mindustry_ctype_Content_R_double,
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
	(void *) M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_getPayload_R_mindustry_world_blocks_payloads_Payload,
	(void *) M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_takePayload_R_mindustry_world_blocks_payloads_Payload,
	(void *) M_mindustry_gen_Building_onRepaired,
	(void *) M_mindustry_gen_Building_placed,
	(void *) M_mindustry_gen_Building_playerPlaced_java_lang_Object,
	(void *) M_mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild_read_arc_util_io_Reads_byte,
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
	(void *) M_mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild_acceptPayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload_R_boolean,
	(void *) M_mindustry_gen_Building_allowDeposit_R_boolean,
	(void *) M_mindustry_gen_Building_allowUpdate_R_boolean,
	(void *) M_mindustry_gen_Building_canBeReplaced_mindustry_world_Block_R_boolean,
	(void *) M_mindustry_gen_Building_canConsume_R_boolean,
	(void *) M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_canControlSelect_mindustry_gen_Unit_R_boolean,
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
	(void *) M_mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild_shouldConsume_R_boolean,
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
	(void *) M_mindustry_gen_Building_getProgressIncrease_float_R_float,
	(void *) M_mindustry_gen_Building_handleDamage_float_R_float,
	(void *) M_mindustry_gen_Building_moveLiquid_mindustry_gen_Building_mindustry_type_Liquid_R_float,
	(void *) M_mindustry_gen_Building_moveLiquidForward_boolean_mindustry_type_Liquid_R_float,
	(void *) M_mindustry_gen_Building_progress_R_float,
	(void *) M_mindustry_gen_Building_rotdeg_R_float,
	(void *) M_mindustry_gen_Building_timeScale_R_float,
	(void *) M_mindustry_gen_Building_totalProgress_R_float,
	(void *) M_mindustry_gen_Building_warmup_R_float,
	(void *) M_mindustry_gen_Building_acceptStack_mindustry_type_Item_int_mindustry_gen_Teamc_R_int,
	(void *) M_mindustry_gen_Building_explosionItemCap_R_int,
	(void *) M_mindustry_gen_Building_getMaximumAccepted_mindustry_type_Item_R_int,
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
	(void *) M_mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild_draw,
	(void *) M_mindustry_gen_Building_drawCached,
	(void *) M_mindustry_gen_Building_drawConfigure,
	(void *) M_mindustry_gen_Building_drawCracks,
	(void *) M_mindustry_gen_Building_drawDisabled,
	(void *) M_mindustry_gen_Building_drawItemSelection_mindustry_ctype_UnlockableContent,
	(void *) M_mindustry_gen_Building_drawLight,
	(void *) M_mindustry_gen_Building_drawLiquidLight_mindustry_type_Liquid_float,
	(void *) M_mindustry_gen_Building_drawSelect,
	(void *) M_mindustry_gen_Building_drawStatus,
	(void *) M_mindustry_gen_Building_drawTeam,
	(void *) M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_drawTeamTop,
	(void *) M_mindustry_gen_Building_dropped,
	(void *) M_mindustry_gen_Building_dumpLiquid_mindustry_type_Liquid,
	(void *) M_mindustry_gen_Building_dumpLiquid_mindustry_type_Liquid_float,
	(void *) M_mindustry_gen_Building_dumpLiquid_mindustry_type_Liquid_float_int,
	(void *) M_mindustry_gen_Building_eachEdge_arc_func_Cons,
	(void *) M_mindustry_gen_Building_getStackOffset_mindustry_type_Item_arc_math_geom_Vec2,
	(void *) M_mindustry_gen_Building_handleItem_mindustry_gen_Building_mindustry_type_Item,
	(void *) M_mindustry_gen_Building_handleLiquid_mindustry_gen_Building_mindustry_type_Liquid_float,
	(void *) M_mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild_handlePayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload,
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
	(void *) M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_onControlSelect_mindustry_gen_Unit,
	(void *) M_mindustry_gen_Building_onDeconstructed_mindustry_gen_Unit,
	(void *) M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_onDestroyed,
	(void *) M_mindustry_gen_Building_onNearbyBuildAdded_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_onProximityAdded,
	(void *) M_mindustry_gen_Building_onProximityRemoved,
	(void *) M_mindustry_gen_Building_onProximityUpdate,
	(void *) M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_onRemoved,
	(void *) M_mindustry_gen_Building_overwrote_arc_struct_Seq,
	(void *) M_mindustry_gen_Building_payloadDraw,
	(void *) M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_pickedUp,
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
	(void *) M_mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild_updateTile,
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
	(void *) M_mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild_acceptUnitPayload_mindustry_gen_Unit_R_boolean,
	(void *) M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_blends_int_R_boolean,
	(void *) M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_updatePayload,
	(void *) M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_moveInPayload_R_boolean,
	(void *) M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_moveInPayload_boolean_R_boolean,
	(void *) M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_moveOutPayload,
	(void *) M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_dumpPayload,
	(void *) M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_hasArrived_R_boolean,
	(void *) M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_drawPayload,
	(void *) M_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild_lambda$onControlSelect$0_mindustry_world_blocks_payloads_Payload,
	(void *) M_mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild_lambda$draw$0,
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
	{ "acceptUnitPayload", "(Lmindustry/gen/Unit;)Z" },
	{ "blends", "(I)Z" },
	{ "updatePayload", "()V" },
	{ "moveInPayload", "()Z" },
	{ "moveInPayload", "(Z)Z" },
	{ "moveOutPayload", "()V" },
	{ "dumpPayload", "()V" },
	{ "hasArrived", "()Z" },
	{ "drawPayload", "()V" },
	{ "lambda$onControlSelect$0", "(Lmindustry/world/blocks/payloads/Payload;)V" },
	{ "lambda$draw$0", "()V" },
};

static FieldMetadata fields[] {
	{ "deconstructing", &class_mindustry_world_blocks_payloads_Payload, offsetof(mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild, F_deconstructing), "Lmindustry/world/blocks/payloads/Payload;", 1 },
	{ "accum", getArrayClass(&class_float, 1), offsetof(mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild, F_accum), "[F", 1 },
	{ "progress", &class_float, offsetof(mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild, F_progress), "F", 1 },
	{ "time", &class_float, offsetof(mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild, F_time), "F", 1 },
	{ "speedScl", &class_float, offsetof(mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild, F_speedScl), "F", 1 },
	{ "overlayDuration", &class_float, (intptr_t) &SF_mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild_overlayDuration, "F", 25 },
	{ "overlayTime", &class_float, offsetof(mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild, F_overlayTime), "F", 1 },
	{ "this$0", &class_mindustry_world_blocks_payloads_PayloadDeconstructor, offsetof(mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild, F_this$0), "Lmindustry/world/blocks/payloads/PayloadDeconstructor;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild_mindustry_world_blocks_payloads_PayloadDeconstructor, 0, "(Lmindustry/world/blocks/payloads/PayloadDeconstructor;)V", 1 },
	{ "draw", (intptr_t) M_mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild_draw, VTABLE_mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild_draw, "()V", 1 },
	{ "acceptUnitPayload", (intptr_t) M_mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild_acceptUnitPayload_mindustry_gen_Unit_R_boolean, VTABLE_mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild_acceptUnitPayload_mindustry_gen_Unit_R_boolean, "(Lmindustry/gen/Unit;)Z", 1 },
	{ "handlePayload", (intptr_t) M_mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild_handlePayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload, VTABLE_mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild_handlePayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload, "(Lmindustry/gen/Building;Lmindustry/world/blocks/payloads/Payload;)V", 1 },
	{ "acceptPayload", (intptr_t) M_mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild_acceptPayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload_R_boolean, VTABLE_mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild_acceptPayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload_R_boolean, "(Lmindustry/gen/Building;Lmindustry/world/blocks/payloads/Payload;)Z", 1 },
	{ "updateTile", (intptr_t) M_mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild_updateTile, VTABLE_mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild_updateTile, "()V", 1 },
	{ "sense", (intptr_t) M_mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild_sense_mindustry_ctype_Content_R_double, VTABLE_mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild_sense_mindustry_ctype_Content_R_double, "(Lmindustry/ctype/Content;)D", 1 },
	{ "sense", (intptr_t) M_mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild_sense_mindustry_logic_LAccess_R_double, VTABLE_mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild_sense_mindustry_logic_LAccess_R_double, "(Lmindustry/logic/LAccess;)D", 1 },
	{ "shouldConsume", (intptr_t) M_mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild_shouldConsume_R_boolean, VTABLE_mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild_shouldConsume_R_boolean, "()Z", 1 },
	{ "write", (intptr_t) M_mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild_write_arc_util_io_Writes, VTABLE_mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild_write_arc_util_io_Writes, "(Larc/util/io/Writes;)V", 1 },
	{ "read", (intptr_t) M_mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild_read_arc_util_io_Reads_byte, VTABLE_mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild_read_arc_util_io_Reads_byte, "(Larc/util/io/Reads;B)V", 1 },
	{ "lambda$updateTile$0", (intptr_t) SM_mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild_lambda$updateTile$0_mindustry_gen_Building_float_mindustry_world_Tile, 0, "(Lmindustry/gen/Building;FLmindustry/world/Tile;)V", 4106 },
	{ "lambda$draw$0", (intptr_t) M_mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild_lambda$draw$0, VTABLE_mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild_lambda$draw$0, "()V", 4098 },
};

Class class_mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild{
		.nativeName = (intptr_t) "mindustry/world/blocks/payloads/PayloadDeconstructor$PayloadDeconstructorBuild",
		.parentClass = (intptr_t) &class_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild,
		.size = sizeof(mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild),
		.classVtable = (intptr_t) vtable_mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild,
		.staticInitializer = (intptr_t) clinit_mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_world_blocks_payloads_PayloadDeconstructor,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 8,
		.nativeFields = (intptr_t) fields,
		.methodCount = 13,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 321,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild = registerClass(&class_mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild);

}

