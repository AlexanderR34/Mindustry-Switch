#include "mindustry/world/blocks/payloads/PayloadMassDriver.h"
#include "java/lang/Integer.h"
#include "arc/math/geom/Point2.h"
#include "arc/util/Eachable.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "mindustry/world/blocks/payloads/PayloadMassDriver_invoke_arc_func_Cons_1.h"
#include "arc/graphics/Color.h"
#include "arc/graphics/g2d/Draw.h"
#include "mindustry/world/blocks/payloads/PayloadMassDriver_PayloadDriverState.h"
#include "mindustry/entities/Effect.h"
#include "mindustry/entities/Effect_EffectContainer.h"
#include "mindustry/content/Fx.h"
#include "arc/util/Tmp.h"
#include "arc/struct/Seq.h"
#include "mindustry/ctype/MappableContent.h"
#include "mindustry/entities/units/BuildPlan.h"
#include "arc/math/geom/Position.h"
#include "mindustry/world/blocks/payloads/Payload.h"
#include "arc/math/Mathf.h"
#include "mindustry/gen/Sounds.h"
#include "mindustry/world/meta/Stats.h"
#include "arc/math/Interp.h"
#include "arc/util/Time.h"
#include "arc/func/Cons2.h"
#include "mindustry/gen/Building.h"
#include "java/lang/Object.h"
#include "mindustry/world/blocks/payloads/PayloadBlock.h"
#include "mindustry/world/blocks/payloads/PayloadMassDriver.h"
#include "arc/math/geom/Vec2.h"
#include "mindustry/world/Block.h"
#include "mindustry/world/meta/StatUnit.h"
#include "mindustry/world/meta/StatValue.h"
#include "arc/graphics/g2d/Lines.h"
#include "arc/func/Cons.h"
#include "mindustry/world/meta/Stat.h"
#include "java/lang/String.h"
#include "mindustry/core/Control.h"
#include "mindustry/world/blocks/payloads/PayloadMassDriver_invoke_arc_func_Cons2_3.h"
#include "mindustry/world/meta/BlockGroup.h"
#include "mindustry/world/blocks/payloads/PayloadMassDriver_invoke_arc_func_Cons2_2.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "mindustry/ui/fragments/BlockConfigFragment.h"
#include "mindustry/world/meta/StatValues.h"
#include "mindustry/world/blocks/payloads/PayloadMassDriver_PayloadMassDriverData.h"
#include "mindustry/world/blocks/payloads/PayloadMassDriver_PayloadDriverBuild.h"
#include "mindustry/graphics/Pal.h"
#include "arc/audio/Sound.h"
#include "mindustry/ctype/Content.h"
#include "mindustry/graphics/Drawf.h"
#include "java/lang/Class.h"
#include "mindustry/Vars.h"
#include "mindustry/input/InputHandler.h"

extern "C" {


void mark_mindustry_world_blocks_payloads_PayloadMassDriver(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_world_blocks_payloads_PayloadBlock(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_world_blocks_payloads_PayloadMassDriver *) object;
	if (self->F_shootEffect)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_shootEffect)->clazz)->markFunction)((jobject) self->F_shootEffect, mark, depth + 1);
	if (self->F_smokeEffect)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_smokeEffect)->clazz)->markFunction)((jobject) self->F_smokeEffect, mark, depth + 1);
	if (self->F_receiveEffect)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_receiveEffect)->clazz)->markFunction)((jobject) self->F_receiveEffect, mark, depth + 1);
	if (self->F_shootSound)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_shootSound)->clazz)->markFunction)((jobject) self->F_shootSound, mark, depth + 1);
	if (self->F_receiveSound)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_receiveSound)->clazz)->markFunction)((jobject) self->F_receiveSound, mark, depth + 1);
	if (self->F_transferEffect)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_transferEffect)->clazz)->markFunction)((jobject) self->F_transferEffect, mark, depth + 1);
	if (self->F_baseRegion)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_baseRegion)->clazz)->markFunction)((jobject) self->F_baseRegion, mark, depth + 1);
	if (self->F_capRegion)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_capRegion)->clazz)->markFunction)((jobject) self->F_capRegion, mark, depth + 1);
	if (self->F_leftRegion)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_leftRegion)->clazz)->markFunction)((jobject) self->F_leftRegion, mark, depth + 1);
	if (self->F_rightRegion)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_rightRegion)->clazz)->markFunction)((jobject) self->F_rightRegion, mark, depth + 1);
	if (self->F_capOutlineRegion)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_capOutlineRegion)->clazz)->markFunction)((jobject) self->F_capOutlineRegion, mark, depth + 1);
	if (self->F_leftOutlineRegion)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_leftOutlineRegion)->clazz)->markFunction)((jobject) self->F_leftOutlineRegion, mark, depth + 1);
	if (self->F_rightOutlineRegion)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_rightOutlineRegion)->clazz)->markFunction)((jobject) self->F_rightOutlineRegion, mark, depth + 1);
	if (self->F_arrow)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_arrow)->clazz)->markFunction)((jobject) self->F_arrow, mark, depth + 1);
}

void clinit_mindustry_world_blocks_payloads_PayloadMassDriver(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_world_blocks_payloads_PayloadBlock(ctx);
}

void init_mindustry_world_blocks_payloads_PayloadMassDriver_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/PayloadMassDriver:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_payloads_PayloadMassDriver(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(57);
	init_mindustry_world_blocks_payloads_PayloadBlock_java_lang_String(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(24);
	((mindustry_world_blocks_payloads_PayloadMassDriver *) NULL_CHECK((frame[0].o)))->F_range = (jfloat(100.0f));
	LINE_NUMBER(25);
	((mindustry_world_blocks_payloads_PayloadMassDriver *) NULL_CHECK((frame[0].o)))->F_rotateSpeed = (jfloat(5.0f));
	LINE_NUMBER(26);
	((mindustry_world_blocks_payloads_PayloadMassDriver *) NULL_CHECK((frame[0].o)))->F_length = (jfloat(11.125f));
	LINE_NUMBER(27);
	((mindustry_world_blocks_payloads_PayloadMassDriver *) NULL_CHECK((frame[0].o)))->F_knockback = (jfloat(5.0f));
	LINE_NUMBER(28);
	((mindustry_world_blocks_payloads_PayloadMassDriver *) NULL_CHECK((frame[0].o)))->F_reload = (jfloat(30.0f));
	LINE_NUMBER(29);
	((mindustry_world_blocks_payloads_PayloadMassDriver *) NULL_CHECK((frame[0].o)))->F_chargeTime = (jfloat(100.0f));
	LINE_NUMBER(30);
	((mindustry_world_blocks_payloads_PayloadMassDriver *) NULL_CHECK((frame[0].o)))->F_maxPayloadSize = (jfloat(3.0f));
	LINE_NUMBER(31);
	((mindustry_world_blocks_payloads_PayloadMassDriver *) NULL_CHECK((frame[0].o)))->F_grabWidth = (jfloat(8.0f));
	((mindustry_world_blocks_payloads_PayloadMassDriver *) NULL_CHECK((frame[0].o)))->F_grabHeight = (jfloat(2.75f));
	LINE_NUMBER(32);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_shootBig2;
	((mindustry_world_blocks_payloads_PayloadMassDriver *) NULL_CHECK(sp[0].o))->F_shootEffect = (jref) sp[1].o;
	LINE_NUMBER(33);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_shootPayloadDriver;
	((mindustry_world_blocks_payloads_PayloadMassDriver *) NULL_CHECK(sp[0].o))->F_smokeEffect = (jref) sp[1].o;
	LINE_NUMBER(34);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_payloadReceive;
	((mindustry_world_blocks_payloads_PayloadMassDriver *) NULL_CHECK(sp[0].o))->F_receiveEffect = (jref) sp[1].o;
	LINE_NUMBER(35);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_massdriver;
	((mindustry_world_blocks_payloads_PayloadMassDriver *) NULL_CHECK(sp[0].o))->F_shootSound = (jref) sp[1].o;
	LINE_NUMBER(36);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_massdriverReceive;
	((mindustry_world_blocks_payloads_PayloadMassDriver *) NULL_CHECK(sp[0].o))->F_receiveSound = (jref) sp[1].o;
	LINE_NUMBER(37);
	((mindustry_world_blocks_payloads_PayloadMassDriver *) NULL_CHECK((frame[0].o)))->F_shootSoundVolume = (jfloat(0.7f));
	LINE_NUMBER(38);
	((mindustry_world_blocks_payloads_PayloadMassDriver *) NULL_CHECK((frame[0].o)))->F_shake = (jfloat(3.0f));
	LINE_NUMBER(40);
	sp[0].o = frame[0].o;
	clinit_mindustry_entities_Effect(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_entities_Effect);
	jfloat temp0 = jfloat(11.0f);
	jfloat temp1 = jfloat(600.0f);
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_payloads_PayloadMassDriver_invoke_arc_func_Cons_1(ctx);
		auto proxy = (mindustry_world_blocks_payloads_PayloadMassDriver_invoke_arc_func_Cons_1 *) gcAlloc(ctx, &class_mindustry_world_blocks_payloads_PayloadMassDriver_invoke_arc_func_Cons_1);
		sp[2].o = (jobject) proxy;
	}
	init_mindustry_entities_Effect_float_float_arc_func_Cons(ctx, sp[1].o, temp0, temp1, sp[2].o);
	jfloat temp2 = jfloat(89.0f);
	LINE_NUMBER(45);
	sp[1].o = (jobject)((func_mindustry_entities_Effect_layer_float_R_mindustry_entities_Effect) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_entities_Effect_layer_float_R_mindustry_entities_Effect])(ctx, sp[1].o, temp2);
	((mindustry_world_blocks_payloads_PayloadMassDriver *) NULL_CHECK(sp[0].o))->F_transferEffect = (jref) sp[1].o;
	LINE_NUMBER(58);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_update = (jint(1));
	LINE_NUMBER(59);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_solid = (jint(1));
	LINE_NUMBER(60);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_configurable = (jint(1));
	LINE_NUMBER(61);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_hasPower = (jint(1));
	LINE_NUMBER(62);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_outlineIcon = (jint(1));
	LINE_NUMBER(63);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_sync = (jint(1));
	LINE_NUMBER(64);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_rotate = (jint(1));
	LINE_NUMBER(65);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_outputsPayload = (jint(1));
	LINE_NUMBER(66);
	sp[0].o = frame[0].o;
	clinit_mindustry_world_meta_BlockGroup(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_BlockGroup_units;
	((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_group = (jref) sp[1].o;
	LINE_NUMBER(67);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_regionRotated1 = (jint(1));
	LINE_NUMBER(70);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) &class_arc_math_geom_Point2);
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_payloads_PayloadMassDriver_invoke_arc_func_Cons2_2(ctx);
		auto proxy = (mindustry_world_blocks_payloads_PayloadMassDriver_invoke_arc_func_Cons2_2 *) gcAlloc(ctx, &class_mindustry_world_blocks_payloads_PayloadMassDriver_invoke_arc_func_Cons2_2);
		sp[2].o = (jobject) proxy;
	}
	((func_mindustry_world_blocks_payloads_PayloadMassDriver_config_java_lang_Class_arc_func_Cons2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_payloads_PayloadMassDriver_config_java_lang_Class_arc_func_Cons2])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(71);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) &class_java_lang_Integer);
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_payloads_PayloadMassDriver_invoke_arc_func_Cons2_3(ctx);
		auto proxy = (mindustry_world_blocks_payloads_PayloadMassDriver_invoke_arc_func_Cons2_3 *) gcAlloc(ctx, &class_mindustry_world_blocks_payloads_PayloadMassDriver_invoke_arc_func_Cons2_3);
		sp[2].o = (jobject) proxy;
	}
	((func_mindustry_world_blocks_payloads_PayloadMassDriver_config_java_lang_Class_arc_func_Cons2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_payloads_PayloadMassDriver_config_java_lang_Class_arc_func_Cons2])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(72);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_payloads_PayloadMassDriver_init(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/PayloadMassDriver:init", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(76);
	M_mindustry_world_Block_init(ctx, (frame[0].o));
	LINE_NUMBER(77);
	((func_mindustry_world_blocks_payloads_PayloadMassDriver_updateClipRadius_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_payloads_PayloadMassDriver_updateClipRadius_float])(ctx, (frame[0].o), (((jfloat)((mindustry_world_blocks_payloads_PayloadMassDriver *) NULL_CHECK((frame[0].o)))->F_range) + (jfloat(4.0f))));
	LINE_NUMBER(78);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_payloads_PayloadMassDriver_setStats(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/PayloadMassDriver:setStats", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(82);
	M_mindustry_world_Block_setStats(ctx, (frame[0].o));
	LINE_NUMBER(84);
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_stats;
	clinit_mindustry_world_meta_Stat(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_Stat_payloadCapacity;
	jfloat temp0 = (jfloat)((mindustry_world_blocks_payloads_PayloadMassDriver *) NULL_CHECK((frame[0].o)))->F_maxPayloadSize;
	clinit_mindustry_world_meta_StatUnit(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_StatUnit_blocksSquared;
	sp[2].o = (jobject)SM_mindustry_world_meta_StatValues_squared_float_mindustry_world_meta_StatUnit_R_mindustry_world_meta_StatValue(ctx, temp0, sp[2].o);
	((func_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_world_meta_StatValue) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_world_meta_StatValue])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(85);
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_stats;
	clinit_mindustry_world_meta_Stat(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_Stat_reload;
	jfloat temp1 = (jfloat(60.0f)) / (((jfloat)((mindustry_world_blocks_payloads_PayloadMassDriver *) NULL_CHECK((frame[0].o)))->F_chargeTime) + ((jfloat)((mindustry_world_blocks_payloads_PayloadMassDriver *) NULL_CHECK((frame[0].o)))->F_reload));
	clinit_mindustry_world_meta_StatUnit(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_StatUnit_perSecond;
	((func_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_float_mindustry_world_meta_StatUnit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_float_mindustry_world_meta_StatUnit])(ctx, sp[0].o, sp[1].o, temp1, sp[2].o);
	LINE_NUMBER(86);
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_stats;
	clinit_mindustry_world_meta_Stat(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_Stat_shootRange;
	jfloat temp2 = ((jfloat)((mindustry_world_blocks_payloads_PayloadMassDriver *) NULL_CHECK((frame[0].o)))->F_range) / (jfloat(8.0f));
	clinit_mindustry_world_meta_StatUnit(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_StatUnit_blocks;
	((func_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_float_mindustry_world_meta_StatUnit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_float_mindustry_world_meta_StatUnit])(ctx, sp[0].o, sp[1].o, temp2, sp[2].o);
	LINE_NUMBER(87);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_blocks_payloads_PayloadMassDriver_icons_R_Array1_arc_graphics_g2d_TextureRegion(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/PayloadMassDriver:icons", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(91);
	sp[0].o = (jobject)createArray(ctx, &class_arc_graphics_g2d_TextureRegion, (jint(3)));
	jint temp0 = jint(0);
	sp[1].o = (jobject)((mindustry_world_blocks_payloads_PayloadMassDriver *) NULL_CHECK((frame[0].o)))->F_baseRegion;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	sp[1].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock *) NULL_CHECK((frame[0].o)))->F_outRegion;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	sp[1].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_region;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_payloads_PayloadMassDriver_drawPlanRegion_mindustry_entities_units_BuildPlan_arc_util_Eachable(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/PayloadMassDriver:drawPlanRegion", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(96);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadMassDriver *) NULL_CHECK((frame[0].o)))->F_baseRegion;
	jfloat temp0 = (jfloat)((func_mindustry_entities_units_BuildPlan_drawx_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_drawx_R_float])(ctx, (frame[1].o));
	jfloat temp1 = (jfloat)((func_mindustry_entities_units_BuildPlan_drawy_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_drawy_R_float])(ctx, (frame[1].o));
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(97);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock *) NULL_CHECK((frame[0].o)))->F_topRegion;
	jfloat temp2 = (jfloat)((func_mindustry_entities_units_BuildPlan_drawx_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_drawx_R_float])(ctx, (frame[1].o));
	jfloat temp3 = (jfloat)((func_mindustry_entities_units_BuildPlan_drawy_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_drawy_R_float])(ctx, (frame[1].o));
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float(ctx, sp[0].o, temp2, temp3);
	LINE_NUMBER(98);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadBlock *) NULL_CHECK((frame[0].o)))->F_outRegion;
	jfloat temp4 = (jfloat)((func_mindustry_entities_units_BuildPlan_drawx_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_drawx_R_float])(ctx, (frame[1].o));
	jfloat temp5 = (jfloat)((func_mindustry_entities_units_BuildPlan_drawy_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_drawy_R_float])(ctx, (frame[1].o));
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float(ctx, sp[0].o, temp4, temp5, (jfloat((((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_rotation) * (90)))));
	LINE_NUMBER(99);
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_region;
	jfloat temp6 = (jfloat)((func_mindustry_entities_units_BuildPlan_drawx_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_drawx_R_float])(ctx, (frame[1].o));
	jfloat temp7 = (jfloat)((func_mindustry_entities_units_BuildPlan_drawy_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_drawy_R_float])(ctx, (frame[1].o));
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float(ctx, sp[0].o, temp6, temp7);
	LINE_NUMBER(100);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_payloads_PayloadMassDriver_drawPlace_int_int_int_boolean(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jbool param3) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/PayloadMassDriver:drawPlace", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(104);
	M_mindustry_world_Block_drawPlace_int_int_int_boolean(ctx, (frame[0].o), (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].i));
	LINE_NUMBER(106);
	jfloat temp0 = jfloat(((frame[1].i) * (8)));
	jfloat temp1 = jfloat(((frame[2].i) * (8)));
	jfloat temp2 = (jfloat)((mindustry_world_blocks_payloads_PayloadMassDriver *) NULL_CHECK((frame[0].o)))->F_range;
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_accent;
	SM_mindustry_graphics_Drawf_dashCircle_float_float_float_arc_graphics_Color(ctx, temp0, temp1, temp2, sp[0].o);
	LINE_NUMBER(109);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_input;
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK(sp[0].o))->F_config;
	jint temp3 = (jint)((func_mindustry_ui_fragments_BlockConfigFragment_isShown_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_BlockConfigFragment_isShown_R_boolean])(ctx, sp[0].o);
	if (temp3 != 0) goto label_3;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(110);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_input;
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK(sp[0].o))->F_config;
	sp[0].o = (jobject)((func_mindustry_ui_fragments_BlockConfigFragment_getSelected_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_BlockConfigFragment_getSelected_R_mindustry_gen_Building])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(111);
	if ((frame[5].o) == nullptr) goto label_5;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[5].o)))->F_block;
	if (sp[0].o != (frame[0].o)) goto label_5;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Building_within_float_float_float_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_gen_Building_within_float_float_float_R_boolean])(ctx, (frame[5].o), (jfloat(((frame[1].i) * (8)))), (jfloat(((frame[2].i) * (8)))), ((jfloat)((mindustry_world_blocks_payloads_PayloadMassDriver *) NULL_CHECK((frame[0].o)))->F_range));
	if (temp0 != 0) goto label_6;
	}
label_5:;
	popStackFrame(ctx);
	INST_RETURN();
label_6:;
	{
	LINE_NUMBER(114);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_absin_float_float_float_R_float(ctx, (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time), (jfloat(6.0f)), (jfloat(1)));
	frame[6].f = temp0;
	LINE_NUMBER(115);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, ((jfloat(((frame[1].i) * (8)))) + ((jfloat)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_offset)), ((jfloat(((frame[2].i) * (8)))) + ((jfloat)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_offset)));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_sub_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_sub_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[5].o)))->F_x), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[5].o)))->F_y));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_limit_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_limit_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, ((((((jfloat(((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_size))) / (jfloat(2))) + (jfloat(1))) * (jfloat(8.0f))) + (frame[6].f)) + (jfloat(0.5f))));
	LINE_NUMBER(116);
	jfloat temp1 = jfloat(((frame[1].i) * (8)));
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	frame[7].f = (temp1 - ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x));
	jfloat temp2 = jfloat(((frame[2].i) * (8)));
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	frame[8].f = (temp2 - ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y));
	LINE_NUMBER(117);
	jfloat temp3 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[5].o)))->F_x;
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	frame[9].f = (temp3 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x));
	jfloat temp4 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[5].o)))->F_y;
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	frame[10].f = (temp4 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y));
	LINE_NUMBER(118);
	jfloat temp5 = (jfloat)((func_mindustry_gen_Building_dst_float_float_R_float) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_gen_Building_dst_float_float_R_float])(ctx, (frame[5].o), (jfloat(((frame[1].i) * (8)))), (jfloat(((frame[2].i) * (8)))));
	frame[11].i = (jint((temp5 / (jfloat(8.0f)))));
	LINE_NUMBER(120);
	jfloat temp6 = jfloat(4.0f);
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_gray;
	SM_arc_graphics_g2d_Lines_stroke_float_arc_graphics_Color(ctx, temp6, sp[0].o);
	LINE_NUMBER(121);
	SM_arc_graphics_g2d_Lines_dashLine_float_float_float_float_int(ctx, (frame[9].f), (frame[10].f), (frame[7].f), (frame[8].f), (frame[11].i));
	LINE_NUMBER(122);
	jfloat temp7 = jfloat(2);
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_placing;
	SM_arc_graphics_g2d_Lines_stroke_float_arc_graphics_Color(ctx, temp7, sp[0].o);
	LINE_NUMBER(123);
	SM_arc_graphics_g2d_Lines_dashLine_float_float_float_float_int(ctx, (frame[9].f), (frame[10].f), (frame[7].f), (frame[8].f), (frame[11].i));
	LINE_NUMBER(124);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(125);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_payloads_PayloadMassDriver_getRegionsToOutline_arc_struct_Seq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/PayloadMassDriver:getRegionsToOutline", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(129);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_world_blocks_payloads_PayloadMassDriver *) NULL_CHECK((frame[0].o)))->F_leftRegion;
	sp[2].o = (jobject)((mindustry_world_blocks_payloads_PayloadMassDriver *) NULL_CHECK((frame[0].o)))->F_rightRegion;
	sp[3].o = (jobject)((mindustry_world_blocks_payloads_PayloadMassDriver *) NULL_CHECK((frame[0].o)))->F_capRegion;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_java_lang_Object_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_java_lang_Object_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(130);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_world_blocks_payloads_PayloadMassDriver_lambda$new$2_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_java_lang_Integer(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/PayloadMassDriver:lambda$new$2", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_payloads_PayloadMassDriver(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(71);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_java_lang_Integer_intValue_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Integer_intValue_R_int])(ctx, (frame[1].o));
	((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK(sp[0].o))->F_link = temp0;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_world_blocks_payloads_PayloadMassDriver_lambda$new$1_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_arc_math_geom_Point2(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/PayloadMassDriver:lambda$new$1", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_payloads_PayloadMassDriver(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(70);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[1].o)))->F_x;
	jint temp1 = (jint)((func_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_tileX_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_tileX_R_int])(ctx, (frame[0].o));
	jint temp2 = temp0 + temp1;
	jint temp3 = (jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[1].o)))->F_y;
	jint temp4 = (jint)((func_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_tileY_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_tileY_R_int])(ctx, (frame[0].o));
	jint temp5 = (jint)SM_arc_math_geom_Point2_pack_int_int_R_int(ctx, temp2, (temp3 + temp4));
	((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild *) NULL_CHECK(sp[0].o))->F_link = temp5;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_world_blocks_payloads_PayloadMassDriver_lambda$new$0_mindustry_entities_Effect$EffectContainer(jcontext ctx, jobject param0) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/PayloadMassDriver:lambda$new$0", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_payloads_PayloadMassDriver(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(41);
	sp[0].o = (jobject)((mindustry_entities_Effect$EffectContainer *) NULL_CHECK((frame[0].o)))->F_data;
	frame[2].o = sp[0].o;
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadMassDriverData)) == 0) goto label_2;
	}
	{
	frame[1].o = (checkCast(ctx, &class_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadMassDriverData, (frame[2].o)));
	goto label_4;
	}
label_2:;
	popStackFrame(ctx);
	INST_RETURN();
label_4:;
	{
	LINE_NUMBER(42);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, ((jfloat)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadMassDriverData *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadMassDriverData *) NULL_CHECK((frame[1].o)))->F_y));
	jfloat temp0 = (jfloat)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadMassDriverData *) NULL_CHECK((frame[1].o)))->F_ox;
	jfloat temp1 = (jfloat)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadMassDriverData *) NULL_CHECK((frame[1].o)))->F_oy;
	clinit_arc_math_Interp(ctx);
	sp[1].o = (jobject)SF_arc_math_Interp_sineIn;
	jfloat temp2 = (jfloat)((func_mindustry_entities_Effect$EffectContainer_fin_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_Effect$EffectContainer_fin_R_float])(ctx, (frame[0].o));
	jfloat temp3 = (jfloat)((func_arc_math_Interp_apply_float_R_float) resolveInterfaceMethod(ctx, &class_arc_math_Interp, INDEX_arc_math_Interp_apply_float_R_float, sp[1].o))(ctx, sp[1].o, temp2);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_lerp_float_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_lerp_float_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp0, temp1, temp3);
	LINE_NUMBER(43);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadMassDriverData *) NULL_CHECK((frame[1].o)))->F_payload;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp4 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	((func_mindustry_world_blocks_payloads_Payload_set_float_float_float) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_payloads_Payload, INDEX_mindustry_world_blocks_payloads_Payload_set_float_float_float, sp[0].o))(ctx, sp[0].o, temp4, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y), ((jfloat)((mindustry_entities_Effect$EffectContainer *) NULL_CHECK((frame[0].o)))->F_rotation));
	LINE_NUMBER(44);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_PayloadMassDriver$PayloadMassDriverData *) NULL_CHECK((frame[1].o)))->F_payload;
	((func_mindustry_world_blocks_payloads_Payload_draw) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_payloads_Payload, INDEX_mindustry_world_blocks_payloads_Payload_draw, sp[0].o))(ctx, sp[0].o);
	LINE_NUMBER(45);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_world_blocks_payloads_PayloadMassDriver[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_mindustry_ctype_MappableContent_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_mindustry_ctype_Content_compareTo_java_lang_Object_R_int,
	(void *) M_mindustry_world_Block_getContentType_R_mindustry_ctype_ContentType,
	(void *) M_mindustry_ctype_Content_removeContent,
	(void *) M_mindustry_world_blocks_payloads_PayloadMassDriver_init,
	(void *) M_mindustry_world_Block_postInit,
	(void *) M_mindustry_world_Block_afterPatch,
	(void *) M_mindustry_world_blocks_payloads_PayloadBlock_load,
	(void *) M_mindustry_ctype_UnlockableContent_loadIcon,
	(void *) M_mindustry_ctype_Content_hasErrored_R_boolean,
	(void *) M_mindustry_ctype_Content_isVanilla_R_boolean,
	(void *) M_mindustry_ctype_Content_isModded_R_boolean,
	(void *) M_mindustry_ctype_Content_isPatchContent_R_boolean,
	(void *) M_mindustry_ctype_Content_compareTo_mindustry_ctype_Content_R_int,
	(void *) M_mindustry_world_Block_isBanned_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_isOnPlanet_mindustry_type_Planet_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_getLogicId_R_int,
	(void *) M_mindustry_ctype_UnlockableContent_displayDescription_R_java_lang_String,
	(void *) M_mindustry_ctype_UnlockableContent_checkStats,
	(void *) M_mindustry_world_blocks_payloads_PayloadMassDriver_setStats,
	(void *) M_mindustry_ctype_UnlockableContent_computeStats_R_mindustry_world_meta_Stats,
	(void *) M_mindustry_ctype_UnlockableContent_displayExtra_arc_scene_ui_layout_Table,
	(void *) M_mindustry_world_Block_createIcons_mindustry_graphics_MultiPacker,
	(void *) M_mindustry_ctype_UnlockableContent_makeOutline_mindustry_graphics_MultiPacker$PageType_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_boolean_arc_graphics_Color_int,
	(void *) M_mindustry_ctype_UnlockableContent_makeOutline_mindustry_graphics_MultiPacker$PageType_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_boolean_arc_graphics_Color_int_int,
	(void *) M_mindustry_ctype_UnlockableContent_makeOutline_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_java_lang_String_arc_graphics_Color_int,
	(void *) M_mindustry_ctype_UnlockableContent_makeOutline_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_java_lang_String_arc_graphics_Color,
	(void *) M_mindustry_world_Block_researchRequirements_R_Array1_mindustry_type_ItemStack,
	(void *) M_mindustry_ctype_UnlockableContent_emoji_R_java_lang_String,
	(void *) M_mindustry_ctype_UnlockableContent_emojiChar_R_int,
	(void *) M_mindustry_ctype_UnlockableContent_hasEmoji_R_boolean,
	(void *) M_mindustry_world_Block_getDependencies_arc_func_Cons,
	(void *) M_mindustry_ctype_UnlockableContent_onUnlock,
	(void *) M_mindustry_world_Block_isHidden_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_showUnlock_R_boolean,
	(void *) M_mindustry_world_Block_logicVisible_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_unlock,
	(void *) M_mindustry_ctype_UnlockableContent_quietUnlock,
	(void *) M_mindustry_ctype_UnlockableContent_unlockedNowHost_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_unlockedHost_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_unlockedNow_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_unlocked_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_clearUnlock,
	(void *) M_mindustry_ctype_UnlockableContent_locked_R_boolean,
	(void *) M_mindustry_world_Block_sense_mindustry_logic_LAccess_R_double,
	(void *) M_mindustry_world_Block_sense_mindustry_ctype_Content_R_double,
	(void *) M_mindustry_world_Block_senseObject_mindustry_logic_LAccess_R_java_lang_Object,
	(void *) M_mindustry_world_Block_drawBase_mindustry_world_Tile,
	(void *) M_mindustry_world_Block_drawBaseCached_mindustry_world_Tile,
	(void *) M_mindustry_world_Block_drawShadow_mindustry_world_Tile,
	(void *) M_mindustry_world_Block_percentSolid_int_int_R_float,
	(void *) M_mindustry_world_Block_drawEnvironmentLight_mindustry_world_Tile,
	(void *) M_mindustry_world_blocks_payloads_PayloadMassDriver_drawPlace_int_int_int_boolean,
	(void *) M_mindustry_world_Block_drawSideRegion_arc_graphics_g2d_TextureRegion_float_float_int,
	(void *) M_mindustry_world_Block_drawPotentialLinks_int_int,
	(void *) M_mindustry_world_Block_drawPlaceText_java_lang_String_int_int_boolean_R_float,
	(void *) M_mindustry_world_Block_drawPlaceText_java_lang_String_int_int_arc_graphics_Color_boolean_R_float,
	(void *) M_mindustry_world_Block_drawOverlay_float_float_int,
	(void *) M_mindustry_world_Block_displayShadow_mindustry_world_Tile_R_boolean,
	(void *) M_mindustry_world_Block_sumAttribute_mindustry_world_meta_Attribute_int_int_R_float,
	(void *) M_mindustry_world_Block_getDisplayIcon_mindustry_world_Tile_R_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_world_Block_getDisplayName_mindustry_world_Tile_R_java_lang_String,
	(void *) M_mindustry_world_Block_minimapColor_mindustry_world_Tile_R_int,
	(void *) M_mindustry_world_Block_getColor_mindustry_world_Tile_R_arc_graphics_Color,
	(void *) M_mindustry_world_Block_outputsItems_R_boolean,
	(void *) M_mindustry_world_Block_canPlaceOn_mindustry_world_Tile_mindustry_game_Team_int_R_boolean,
	(void *) M_mindustry_world_Block_canBreak_mindustry_world_Tile_R_boolean,
	(void *) M_mindustry_world_Block_rotatedOutput_int_int_R_boolean,
	(void *) M_mindustry_world_Block_rotatedOutput_int_int_mindustry_world_Tile_R_boolean,
	(void *) M_mindustry_world_Block_synthetic_R_boolean,
	(void *) M_mindustry_world_Block_checkForceDark_mindustry_world_Tile_R_boolean,
	(void *) M_mindustry_world_Block_isDarkened_mindustry_world_Tile_R_boolean,
	(void *) M_mindustry_world_Block_addBar_java_lang_String_arc_func_Func,
	(void *) M_mindustry_world_Block_removeBar_java_lang_String,
	(void *) M_mindustry_world_Block_listBars_R_java_lang_Iterable,
	(void *) M_mindustry_world_Block_addLiquidBar_mindustry_type_Liquid,
	(void *) M_mindustry_world_Block_addLiquidBar_arc_func_Func,
	(void *) M_mindustry_world_Block_setBars,
	(void *) M_mindustry_world_Block_consumesItem_mindustry_type_Item_R_boolean,
	(void *) M_mindustry_world_Block_consumesLiquid_mindustry_type_Liquid_R_boolean,
	(void *) M_mindustry_world_Block_canReplace_mindustry_world_Block_R_boolean,
	(void *) M_mindustry_world_Block_getReplacement_mindustry_entities_units_BuildPlan_arc_struct_Seq_R_mindustry_world_Block,
	(void *) M_mindustry_world_Block_changePlacementPath_arc_struct_Seq_int_boolean,
	(void *) M_mindustry_world_Block_changePlacementPath_arc_struct_Seq_int,
	(void *) M_mindustry_world_Block_handlePlacementLine_arc_struct_Seq,
	(void *) M_mindustry_world_Block_configSenseable_R_boolean,
	(void *) M_mindustry_world_Block_nextConfig_R_java_lang_Object,
	(void *) M_mindustry_world_Block_onNewPlan_mindustry_entities_units_BuildPlan,
	(void *) M_mindustry_world_Block_drawPlan_mindustry_entities_units_BuildPlan_arc_util_Eachable_boolean,
	(void *) M_mindustry_world_Block_drawPlan_mindustry_entities_units_BuildPlan_arc_util_Eachable_boolean_float,
	(void *) M_mindustry_world_Block_drawOtherPlayerPlan_mindustry_entities_units_BuildPlan_arc_util_Eachable_float,
	(void *) M_mindustry_world_blocks_payloads_PayloadMassDriver_drawPlanRegion_mindustry_entities_units_BuildPlan_arc_util_Eachable,
	(void *) M_mindustry_world_Block_drawDefaultPlanRegion_mindustry_entities_units_BuildPlan_arc_util_Eachable,
	(void *) M_mindustry_world_Block_getPlanRegion_mindustry_entities_units_BuildPlan_arc_util_Eachable_R_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_world_Block_drawPlanConfig_mindustry_entities_units_BuildPlan_arc_util_Eachable,
	(void *) M_mindustry_world_Block_drawPlanConfigCenter_mindustry_entities_units_BuildPlan_java_lang_Object_java_lang_String_boolean,
	(void *) M_mindustry_world_Block_drawPlanConfigCenter_mindustry_entities_units_BuildPlan_java_lang_Object_java_lang_String,
	(void *) M_mindustry_world_Block_drawPlanConfigTop_mindustry_entities_units_BuildPlan_arc_util_Eachable,
	(void *) M_mindustry_world_Block_planConfigClipSize_R_float,
	(void *) M_mindustry_world_Block_pointConfig_java_lang_Object_arc_func_Cons_R_java_lang_Object,
	(void *) M_mindustry_world_Block_configClear_arc_func_Cons,
	(void *) M_mindustry_world_Block_config_java_lang_Class_arc_func_Cons2,
	(void *) M_mindustry_world_Block_isAccessible_R_boolean,
	(void *) M_mindustry_world_Block_nearbySide_int_int_int_int_arc_math_geom_Point2,
	(void *) M_mindustry_world_Block_getEdges_R_Array1_arc_math_geom_Point2,
	(void *) M_mindustry_world_Block_getInsideEdges_R_Array1_arc_math_geom_Point2,
	(void *) M_mindustry_world_Block_iterateTaken_int_int_arc_func_Intc2,
	(void *) M_mindustry_world_Block_makeIconRegions_R_Array1_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_world_blocks_payloads_PayloadMassDriver_icons_R_Array1_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_world_blocks_payloads_PayloadMassDriver_getRegionsToOutline_arc_struct_Seq,
	(void *) M_mindustry_world_Block_getGeneratedIcons_R_Array1_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_world_Block_resetGeneratedIcons,
	(void *) M_mindustry_world_Block_variantRegions_R_Array1_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_world_Block_hasBuilding_R_boolean,
	(void *) M_mindustry_world_Block_newBuilding_R_mindustry_gen_Building,
	(void *) M_mindustry_world_Block_updateClipRadius_float,
	(void *) M_mindustry_world_Block_bounds_int_int_arc_math_geom_Rect_R_arc_math_geom_Rect,
	(void *) M_mindustry_world_Block_isMultiblock_R_boolean,
	(void *) M_mindustry_world_Block_isVisible_R_boolean,
	(void *) M_mindustry_world_Block_isPlaceable_R_boolean,
	(void *) M_mindustry_world_Block_isOverPlacementLimit_mindustry_game_Team_R_boolean,
	(void *) M_mindustry_world_Block_supportsEnv_int_R_boolean,
	(void *) M_mindustry_world_Block_buildEditorConfig_arc_scene_ui_layout_Table,
	(void *) M_mindustry_world_Block_onPicked_mindustry_world_Tile,
	(void *) M_mindustry_world_Block_getConfig_mindustry_world_Tile_R_java_lang_Object,
	(void *) M_mindustry_world_Block_blockChanged_mindustry_world_Tile,
	(void *) M_mindustry_world_Block_placeBegan_mindustry_world_Tile_mindustry_world_Block,
	(void *) M_mindustry_world_Block_placeBegan_mindustry_world_Tile_mindustry_world_Block_mindustry_gen_Unit,
	(void *) M_mindustry_world_Block_placeEnded_mindustry_world_Tile_mindustry_gen_Unit_int_java_lang_Object,
	(void *) M_mindustry_world_Block_beforePlaceBegan_mindustry_world_Tile_mindustry_world_Block,
	(void *) M_mindustry_world_Block_editorPicked_mindustry_world_Tile,
	(void *) M_mindustry_world_Block_isFloor_R_boolean,
	(void *) M_mindustry_world_Block_isOverlay_R_boolean,
	(void *) M_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor,
	(void *) M_mindustry_world_Block_isAir_R_boolean,
	(void *) M_mindustry_world_Block_canBeBuilt_R_boolean,
	(void *) M_mindustry_world_Block_environmentBuildable_R_boolean,
	(void *) M_mindustry_world_Block_isStatic_R_boolean,
	(void *) M_mindustry_world_Block_findConsumer_arc_func_Boolf_R_mindustry_world_consumers_Consume,
	(void *) M_mindustry_world_Block_hasConsumer_mindustry_world_consumers_Consume_R_boolean,
	(void *) M_mindustry_world_Block_removeConsumer_mindustry_world_consumers_Consume,
	(void *) M_mindustry_world_Block_removeConsumers_arc_func_Boolf,
	(void *) M_mindustry_world_Block_consumeLiquid_mindustry_type_Liquid_float_R_mindustry_world_consumers_ConsumeLiquid,
	(void *) M_mindustry_world_Block_consumeLiquids_Array1_mindustry_type_LiquidStack_R_mindustry_world_consumers_ConsumeLiquids,
	(void *) M_mindustry_world_Block_consumePower_float_R_mindustry_world_consumers_ConsumePower,
	(void *) M_mindustry_world_Block_consumePowerCond_float_arc_func_Boolf_R_mindustry_world_consumers_ConsumePower,
	(void *) M_mindustry_world_Block_consumePowerDynamic_arc_func_Floatf_R_mindustry_world_consumers_ConsumePower,
	(void *) M_mindustry_world_Block_consumePowerDynamic_float_arc_func_Floatf_R_mindustry_world_consumers_ConsumePower,
	(void *) M_mindustry_world_Block_consumePowerBuffered_float_R_mindustry_world_consumers_ConsumePower,
	(void *) M_mindustry_world_Block_consumeItem_mindustry_type_Item_R_mindustry_world_consumers_ConsumeItems,
	(void *) M_mindustry_world_Block_consumeItem_mindustry_type_Item_int_R_mindustry_world_consumers_ConsumeItems,
	(void *) M_mindustry_world_Block_consumeItems_Array1_mindustry_type_ItemStack_R_mindustry_world_consumers_ConsumeItems,
	(void *) M_mindustry_world_Block_consumeCoolant_float_R_mindustry_world_consumers_ConsumeCoolant,
	(void *) M_mindustry_world_Block_consumeCoolant_float_boolean_boolean_R_mindustry_world_consumers_ConsumeCoolant,
	(void *) M_mindustry_world_Block_consume_mindustry_world_consumers_Consume_R_mindustry_world_consumers_Consume,
	(void *) M_mindustry_world_Block_setupRequirements_mindustry_type_Category_Array1_mindustry_type_ItemStack,
	(void *) M_mindustry_world_Block_setupRequirements_mindustry_type_Category_mindustry_world_meta_BuildVisibility_Array1_mindustry_type_ItemStack,
	(void *) M_mindustry_world_Block_requirements_mindustry_type_Category_Array1_mindustry_type_ItemStack_boolean,
	(void *) M_mindustry_world_Block_requirements_mindustry_type_Category_Array1_mindustry_type_ItemStack,
	(void *) M_mindustry_world_Block_requirements_mindustry_type_Category_mindustry_world_meta_BuildVisibility_Array1_mindustry_type_ItemStack,
	(void *) M_mindustry_world_Block_initBuilding,
	(void *) M_mindustry_world_Block_reinitializeConsumers,
	(void *) M_mindustry_world_Block_checkContentArrayCapacity_int_int,
	(void *) M_mindustry_world_Block_planRotation_int_R_int,
	(void *) M_mindustry_world_Block_flipRotation_mindustry_entities_units_BuildPlan_boolean,
	(void *) M_mindustry_world_Block_getPlanConfigs_arc_struct_Seq,
	(void *) M_mindustry_world_Block_lambda$init$3_java_lang_Class_arc_func_Cons2,
	(void *) M_mindustry_world_Block_lambda$initBuilding$1_java_lang_reflect_Constructor_R_mindustry_gen_Building,
	(void *) M_mindustry_world_Block_lambda$setBars$5_mindustry_gen_Building_R_mindustry_ui_Bar,
	(void *) M_mindustry_world_Block_lambda$setBars$8_mindustry_gen_Building_R_float,
	(void *) M_mindustry_world_Block_lambda$setBars$1_boolean_float_mindustry_gen_Building_R_mindustry_ui_Bar,
	(void *) M_mindustry_world_Block_lambda$setBars$4_mindustry_gen_Building_R_float,
	(void *) M_mindustry_world_Block_lambda$addLiquidBar$3_arc_func_Func_mindustry_gen_Building_R_mindustry_ui_Bar,
	(void *) M_mindustry_world_Block_lambda$addLiquidBar$6_arc_func_Func_mindustry_gen_Building_R_float,
	(void *) M_mindustry_world_Block_lambda$addLiquidBar$0_mindustry_type_Liquid_mindustry_gen_Building_R_mindustry_ui_Bar,
	(void *) M_mindustry_world_Block_lambda$addLiquidBar$2_mindustry_gen_Building_mindustry_type_Liquid_R_float,
	(void *) M_mindustry_world_Block_lambda$sumAttribute$0_mindustry_world_meta_Attribute_mindustry_world_Tile_R_float,
	(void *) M_mindustry_world_Block_lambda$drawPotentialLinks$1_int_int_mindustry_gen_Building,
	(void *) M_mindustry_world_Block_lambda$drawPotentialLinks$0_int_int_mindustry_gen_Building,
	(void *) M_mindustry_world_blocks_payloads_PayloadBlock_findFactoryRegion_java_lang_String_R_arc_graphics_g2d_TextureRegion,
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
	{ "compareTo", "(Ljava/lang/Object;)I" },
	{ "getContentType", "()Lmindustry/ctype/ContentType;" },
	{ "removeContent", "()V" },
	{ "init", "()V" },
	{ "postInit", "()V" },
	{ "afterPatch", "()V" },
	{ "load", "()V" },
	{ "loadIcon", "()V" },
	{ "hasErrored", "()Z" },
	{ "isVanilla", "()Z" },
	{ "isModded", "()Z" },
	{ "isPatchContent", "()Z" },
	{ "compareTo", "(Lmindustry/ctype/Content;)I" },
	{ "isBanned", "()Z" },
	{ "isOnPlanet", "(Lmindustry/type/Planet;)Z" },
	{ "getLogicId", "()I" },
	{ "displayDescription", "()Ljava/lang/String;" },
	{ "checkStats", "()V" },
	{ "setStats", "()V" },
	{ "computeStats", "()Lmindustry/world/meta/Stats;" },
	{ "displayExtra", "(Larc/scene/ui/layout/Table;)V" },
	{ "createIcons", "(Lmindustry/graphics/MultiPacker;)V" },
	{ "makeOutline", "(Lmindustry/graphics/MultiPacker$PageType;Lmindustry/graphics/MultiPacker;Larc/graphics/g2d/TextureRegion;ZLarc/graphics/Color;I)V" },
	{ "makeOutline", "(Lmindustry/graphics/MultiPacker$PageType;Lmindustry/graphics/MultiPacker;Larc/graphics/g2d/TextureRegion;ZLarc/graphics/Color;II)V" },
	{ "makeOutline", "(Lmindustry/graphics/MultiPacker;Larc/graphics/g2d/TextureRegion;Ljava/lang/String;Larc/graphics/Color;I)V" },
	{ "makeOutline", "(Lmindustry/graphics/MultiPacker;Larc/graphics/g2d/TextureRegion;Ljava/lang/String;Larc/graphics/Color;)V" },
	{ "researchRequirements", "()[Lmindustry/type/ItemStack;" },
	{ "emoji", "()Ljava/lang/String;" },
	{ "emojiChar", "()I" },
	{ "hasEmoji", "()Z" },
	{ "getDependencies", "(Larc/func/Cons;)V" },
	{ "onUnlock", "()V" },
	{ "isHidden", "()Z" },
	{ "showUnlock", "()Z" },
	{ "logicVisible", "()Z" },
	{ "unlock", "()V" },
	{ "quietUnlock", "()V" },
	{ "unlockedNowHost", "()Z" },
	{ "unlockedHost", "()Z" },
	{ "unlockedNow", "()Z" },
	{ "unlocked", "()Z" },
	{ "clearUnlock", "()V" },
	{ "locked", "()Z" },
	{ "sense", "(Lmindustry/logic/LAccess;)D" },
	{ "sense", "(Lmindustry/ctype/Content;)D" },
	{ "senseObject", "(Lmindustry/logic/LAccess;)Ljava/lang/Object;" },
	{ "drawBase", "(Lmindustry/world/Tile;)V" },
	{ "drawBaseCached", "(Lmindustry/world/Tile;)V" },
	{ "drawShadow", "(Lmindustry/world/Tile;)V" },
	{ "percentSolid", "(II)F" },
	{ "drawEnvironmentLight", "(Lmindustry/world/Tile;)V" },
	{ "drawPlace", "(IIIZ)V" },
	{ "drawSideRegion", "(Larc/graphics/g2d/TextureRegion;FFI)V" },
	{ "drawPotentialLinks", "(II)V" },
	{ "drawPlaceText", "(Ljava/lang/String;IIZ)F" },
	{ "drawPlaceText", "(Ljava/lang/String;IILarc/graphics/Color;Z)F" },
	{ "drawOverlay", "(FFI)V" },
	{ "displayShadow", "(Lmindustry/world/Tile;)Z" },
	{ "sumAttribute", "(Lmindustry/world/meta/Attribute;II)F" },
	{ "getDisplayIcon", "(Lmindustry/world/Tile;)Larc/graphics/g2d/TextureRegion;" },
	{ "getDisplayName", "(Lmindustry/world/Tile;)Ljava/lang/String;" },
	{ "minimapColor", "(Lmindustry/world/Tile;)I" },
	{ "getColor", "(Lmindustry/world/Tile;)Larc/graphics/Color;" },
	{ "outputsItems", "()Z" },
	{ "canPlaceOn", "(Lmindustry/world/Tile;Lmindustry/game/Team;I)Z" },
	{ "canBreak", "(Lmindustry/world/Tile;)Z" },
	{ "rotatedOutput", "(II)Z" },
	{ "rotatedOutput", "(IILmindustry/world/Tile;)Z" },
	{ "synthetic", "()Z" },
	{ "checkForceDark", "(Lmindustry/world/Tile;)Z" },
	{ "isDarkened", "(Lmindustry/world/Tile;)Z" },
	{ "addBar", "(Ljava/lang/String;Larc/func/Func;)V" },
	{ "removeBar", "(Ljava/lang/String;)V" },
	{ "listBars", "()Ljava/lang/Iterable;" },
	{ "addLiquidBar", "(Lmindustry/type/Liquid;)V" },
	{ "addLiquidBar", "(Larc/func/Func;)V" },
	{ "setBars", "()V" },
	{ "consumesItem", "(Lmindustry/type/Item;)Z" },
	{ "consumesLiquid", "(Lmindustry/type/Liquid;)Z" },
	{ "canReplace", "(Lmindustry/world/Block;)Z" },
	{ "getReplacement", "(Lmindustry/entities/units/BuildPlan;Larc/struct/Seq;)Lmindustry/world/Block;" },
	{ "changePlacementPath", "(Larc/struct/Seq;IZ)V" },
	{ "changePlacementPath", "(Larc/struct/Seq;I)V" },
	{ "handlePlacementLine", "(Larc/struct/Seq;)V" },
	{ "configSenseable", "()Z" },
	{ "nextConfig", "()Ljava/lang/Object;" },
	{ "onNewPlan", "(Lmindustry/entities/units/BuildPlan;)V" },
	{ "drawPlan", "(Lmindustry/entities/units/BuildPlan;Larc/util/Eachable;Z)V" },
	{ "drawPlan", "(Lmindustry/entities/units/BuildPlan;Larc/util/Eachable;ZF)V" },
	{ "drawOtherPlayerPlan", "(Lmindustry/entities/units/BuildPlan;Larc/util/Eachable;F)V" },
	{ "drawPlanRegion", "(Lmindustry/entities/units/BuildPlan;Larc/util/Eachable;)V" },
	{ "drawDefaultPlanRegion", "(Lmindustry/entities/units/BuildPlan;Larc/util/Eachable;)V" },
	{ "getPlanRegion", "(Lmindustry/entities/units/BuildPlan;Larc/util/Eachable;)Larc/graphics/g2d/TextureRegion;" },
	{ "drawPlanConfig", "(Lmindustry/entities/units/BuildPlan;Larc/util/Eachable;)V" },
	{ "drawPlanConfigCenter", "(Lmindustry/entities/units/BuildPlan;Ljava/lang/Object;Ljava/lang/String;Z)V" },
	{ "drawPlanConfigCenter", "(Lmindustry/entities/units/BuildPlan;Ljava/lang/Object;Ljava/lang/String;)V" },
	{ "drawPlanConfigTop", "(Lmindustry/entities/units/BuildPlan;Larc/util/Eachable;)V" },
	{ "planConfigClipSize", "()F" },
	{ "pointConfig", "(Ljava/lang/Object;Larc/func/Cons;)Ljava/lang/Object;" },
	{ "configClear", "(Larc/func/Cons;)V" },
	{ "config", "(Ljava/lang/Class;Larc/func/Cons2;)V" },
	{ "isAccessible", "()Z" },
	{ "nearbySide", "(IIIILarc/math/geom/Point2;)V" },
	{ "getEdges", "()[Larc/math/geom/Point2;" },
	{ "getInsideEdges", "()[Larc/math/geom/Point2;" },
	{ "iterateTaken", "(IILarc/func/Intc2;)V" },
	{ "makeIconRegions", "()[Larc/graphics/g2d/TextureRegion;" },
	{ "icons", "()[Larc/graphics/g2d/TextureRegion;" },
	{ "getRegionsToOutline", "(Larc/struct/Seq;)V" },
	{ "getGeneratedIcons", "()[Larc/graphics/g2d/TextureRegion;" },
	{ "resetGeneratedIcons", "()V" },
	{ "variantRegions", "()[Larc/graphics/g2d/TextureRegion;" },
	{ "hasBuilding", "()Z" },
	{ "newBuilding", "()Lmindustry/gen/Building;" },
	{ "updateClipRadius", "(F)V" },
	{ "bounds", "(IILarc/math/geom/Rect;)Larc/math/geom/Rect;" },
	{ "isMultiblock", "()Z" },
	{ "isVisible", "()Z" },
	{ "isPlaceable", "()Z" },
	{ "isOverPlacementLimit", "(Lmindustry/game/Team;)Z" },
	{ "supportsEnv", "(I)Z" },
	{ "buildEditorConfig", "(Larc/scene/ui/layout/Table;)V" },
	{ "onPicked", "(Lmindustry/world/Tile;)V" },
	{ "getConfig", "(Lmindustry/world/Tile;)Ljava/lang/Object;" },
	{ "blockChanged", "(Lmindustry/world/Tile;)V" },
	{ "placeBegan", "(Lmindustry/world/Tile;Lmindustry/world/Block;)V" },
	{ "placeBegan", "(Lmindustry/world/Tile;Lmindustry/world/Block;Lmindustry/gen/Unit;)V" },
	{ "placeEnded", "(Lmindustry/world/Tile;Lmindustry/gen/Unit;ILjava/lang/Object;)V" },
	{ "beforePlaceBegan", "(Lmindustry/world/Tile;Lmindustry/world/Block;)V" },
	{ "editorPicked", "(Lmindustry/world/Tile;)V" },
	{ "isFloor", "()Z" },
	{ "isOverlay", "()Z" },
	{ "asFloor", "()Lmindustry/world/blocks/environment/Floor;" },
	{ "isAir", "()Z" },
	{ "canBeBuilt", "()Z" },
	{ "environmentBuildable", "()Z" },
	{ "isStatic", "()Z" },
	{ "findConsumer", "(Larc/func/Boolf;)Lmindustry/world/consumers/Consume;" },
	{ "hasConsumer", "(Lmindustry/world/consumers/Consume;)Z" },
	{ "removeConsumer", "(Lmindustry/world/consumers/Consume;)V" },
	{ "removeConsumers", "(Larc/func/Boolf;)V" },
	{ "consumeLiquid", "(Lmindustry/type/Liquid;F)Lmindustry/world/consumers/ConsumeLiquid;" },
	{ "consumeLiquids", "([Lmindustry/type/LiquidStack;)Lmindustry/world/consumers/ConsumeLiquids;" },
	{ "consumePower", "(F)Lmindustry/world/consumers/ConsumePower;" },
	{ "consumePowerCond", "(FLarc/func/Boolf;)Lmindustry/world/consumers/ConsumePower;" },
	{ "consumePowerDynamic", "(Larc/func/Floatf;)Lmindustry/world/consumers/ConsumePower;" },
	{ "consumePowerDynamic", "(FLarc/func/Floatf;)Lmindustry/world/consumers/ConsumePower;" },
	{ "consumePowerBuffered", "(F)Lmindustry/world/consumers/ConsumePower;" },
	{ "consumeItem", "(Lmindustry/type/Item;)Lmindustry/world/consumers/ConsumeItems;" },
	{ "consumeItem", "(Lmindustry/type/Item;I)Lmindustry/world/consumers/ConsumeItems;" },
	{ "consumeItems", "([Lmindustry/type/ItemStack;)Lmindustry/world/consumers/ConsumeItems;" },
	{ "consumeCoolant", "(F)Lmindustry/world/consumers/ConsumeCoolant;" },
	{ "consumeCoolant", "(FZZ)Lmindustry/world/consumers/ConsumeCoolant;" },
	{ "consume", "(Lmindustry/world/consumers/Consume;)Lmindustry/world/consumers/Consume;" },
	{ "setupRequirements", "(Lmindustry/type/Category;[Lmindustry/type/ItemStack;)V" },
	{ "setupRequirements", "(Lmindustry/type/Category;Lmindustry/world/meta/BuildVisibility;[Lmindustry/type/ItemStack;)V" },
	{ "requirements", "(Lmindustry/type/Category;[Lmindustry/type/ItemStack;Z)V" },
	{ "requirements", "(Lmindustry/type/Category;[Lmindustry/type/ItemStack;)V" },
	{ "requirements", "(Lmindustry/type/Category;Lmindustry/world/meta/BuildVisibility;[Lmindustry/type/ItemStack;)V" },
	{ "initBuilding", "()V" },
	{ "reinitializeConsumers", "()V" },
	{ "checkContentArrayCapacity", "(II)V" },
	{ "planRotation", "(I)I" },
	{ "flipRotation", "(Lmindustry/entities/units/BuildPlan;Z)V" },
	{ "getPlanConfigs", "(Larc/struct/Seq;)V" },
	{ "lambda$init$3", "(Ljava/lang/Class;Larc/func/Cons2;)V" },
	{ "lambda$initBuilding$1", "(Ljava/lang/reflect/Constructor;)Lmindustry/gen/Building;" },
	{ "lambda$setBars$5", "(Lmindustry/gen/Building;)Lmindustry/ui/Bar;" },
	{ "lambda$setBars$8", "(Lmindustry/gen/Building;)F" },
	{ "lambda$setBars$1", "(ZFLmindustry/gen/Building;)Lmindustry/ui/Bar;" },
	{ "lambda$setBars$4", "(Lmindustry/gen/Building;)F" },
	{ "lambda$addLiquidBar$3", "(Larc/func/Func;Lmindustry/gen/Building;)Lmindustry/ui/Bar;" },
	{ "lambda$addLiquidBar$6", "(Larc/func/Func;Lmindustry/gen/Building;)F" },
	{ "lambda$addLiquidBar$0", "(Lmindustry/type/Liquid;Lmindustry/gen/Building;)Lmindustry/ui/Bar;" },
	{ "lambda$addLiquidBar$2", "(Lmindustry/gen/Building;Lmindustry/type/Liquid;)F" },
	{ "lambda$sumAttribute$0", "(Lmindustry/world/meta/Attribute;Lmindustry/world/Tile;)F" },
	{ "lambda$drawPotentialLinks$1", "(IILmindustry/gen/Building;)V" },
	{ "lambda$drawPotentialLinks$0", "(IILmindustry/gen/Building;)V" },
	{ "findFactoryRegion", "(Ljava/lang/String;)Larc/graphics/g2d/TextureRegion;" },
};

static jclass innerClasses[] {
	&class_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild,
	&class_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadMassDriverData,
	&class_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverState,
};

static FieldMetadata fields[] {
	{ "range", &class_float, offsetof(mindustry_world_blocks_payloads_PayloadMassDriver, F_range), "F", 1 },
	{ "rotateSpeed", &class_float, offsetof(mindustry_world_blocks_payloads_PayloadMassDriver, F_rotateSpeed), "F", 1 },
	{ "length", &class_float, offsetof(mindustry_world_blocks_payloads_PayloadMassDriver, F_length), "F", 1 },
	{ "knockback", &class_float, offsetof(mindustry_world_blocks_payloads_PayloadMassDriver, F_knockback), "F", 1 },
	{ "reload", &class_float, offsetof(mindustry_world_blocks_payloads_PayloadMassDriver, F_reload), "F", 1 },
	{ "chargeTime", &class_float, offsetof(mindustry_world_blocks_payloads_PayloadMassDriver, F_chargeTime), "F", 1 },
	{ "maxPayloadSize", &class_float, offsetof(mindustry_world_blocks_payloads_PayloadMassDriver, F_maxPayloadSize), "F", 1 },
	{ "grabWidth", &class_float, offsetof(mindustry_world_blocks_payloads_PayloadMassDriver, F_grabWidth), "F", 1 },
	{ "grabHeight", &class_float, offsetof(mindustry_world_blocks_payloads_PayloadMassDriver, F_grabHeight), "F", 1 },
	{ "shootEffect", &class_mindustry_entities_Effect, offsetof(mindustry_world_blocks_payloads_PayloadMassDriver, F_shootEffect), "Lmindustry/entities/Effect;", 1 },
	{ "smokeEffect", &class_mindustry_entities_Effect, offsetof(mindustry_world_blocks_payloads_PayloadMassDriver, F_smokeEffect), "Lmindustry/entities/Effect;", 1 },
	{ "receiveEffect", &class_mindustry_entities_Effect, offsetof(mindustry_world_blocks_payloads_PayloadMassDriver, F_receiveEffect), "Lmindustry/entities/Effect;", 1 },
	{ "shootSound", &class_arc_audio_Sound, offsetof(mindustry_world_blocks_payloads_PayloadMassDriver, F_shootSound), "Larc/audio/Sound;", 1 },
	{ "receiveSound", &class_arc_audio_Sound, offsetof(mindustry_world_blocks_payloads_PayloadMassDriver, F_receiveSound), "Larc/audio/Sound;", 1 },
	{ "shootSoundVolume", &class_float, offsetof(mindustry_world_blocks_payloads_PayloadMassDriver, F_shootSoundVolume), "F", 1 },
	{ "shake", &class_float, offsetof(mindustry_world_blocks_payloads_PayloadMassDriver, F_shake), "F", 1 },
	{ "transferEffect", &class_mindustry_entities_Effect, offsetof(mindustry_world_blocks_payloads_PayloadMassDriver, F_transferEffect), "Lmindustry/entities/Effect;", 1 },
	{ "baseRegion", &class_arc_graphics_g2d_TextureRegion, offsetof(mindustry_world_blocks_payloads_PayloadMassDriver, F_baseRegion), "Larc/graphics/g2d/TextureRegion;", 1 },
	{ "capRegion", &class_arc_graphics_g2d_TextureRegion, offsetof(mindustry_world_blocks_payloads_PayloadMassDriver, F_capRegion), "Larc/graphics/g2d/TextureRegion;", 1 },
	{ "leftRegion", &class_arc_graphics_g2d_TextureRegion, offsetof(mindustry_world_blocks_payloads_PayloadMassDriver, F_leftRegion), "Larc/graphics/g2d/TextureRegion;", 1 },
	{ "rightRegion", &class_arc_graphics_g2d_TextureRegion, offsetof(mindustry_world_blocks_payloads_PayloadMassDriver, F_rightRegion), "Larc/graphics/g2d/TextureRegion;", 1 },
	{ "capOutlineRegion", &class_arc_graphics_g2d_TextureRegion, offsetof(mindustry_world_blocks_payloads_PayloadMassDriver, F_capOutlineRegion), "Larc/graphics/g2d/TextureRegion;", 1 },
	{ "leftOutlineRegion", &class_arc_graphics_g2d_TextureRegion, offsetof(mindustry_world_blocks_payloads_PayloadMassDriver, F_leftOutlineRegion), "Larc/graphics/g2d/TextureRegion;", 1 },
	{ "rightOutlineRegion", &class_arc_graphics_g2d_TextureRegion, offsetof(mindustry_world_blocks_payloads_PayloadMassDriver, F_rightOutlineRegion), "Larc/graphics/g2d/TextureRegion;", 1 },
	{ "arrow", &class_arc_graphics_g2d_TextureRegion, offsetof(mindustry_world_blocks_payloads_PayloadMassDriver, F_arrow), "Larc/graphics/g2d/TextureRegion;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_blocks_payloads_PayloadMassDriver_java_lang_String, 0, "(Ljava/lang/String;)V", 1 },
	{ "init", (intptr_t) M_mindustry_world_blocks_payloads_PayloadMassDriver_init, VTABLE_mindustry_world_blocks_payloads_PayloadMassDriver_init, "()V", 1 },
	{ "setStats", (intptr_t) M_mindustry_world_blocks_payloads_PayloadMassDriver_setStats, VTABLE_mindustry_world_blocks_payloads_PayloadMassDriver_setStats, "()V", 1 },
	{ "icons", (intptr_t) M_mindustry_world_blocks_payloads_PayloadMassDriver_icons_R_Array1_arc_graphics_g2d_TextureRegion, VTABLE_mindustry_world_blocks_payloads_PayloadMassDriver_icons_R_Array1_arc_graphics_g2d_TextureRegion, "()[Larc/graphics/g2d/TextureRegion;", 1 },
	{ "drawPlanRegion", (intptr_t) M_mindustry_world_blocks_payloads_PayloadMassDriver_drawPlanRegion_mindustry_entities_units_BuildPlan_arc_util_Eachable, VTABLE_mindustry_world_blocks_payloads_PayloadMassDriver_drawPlanRegion_mindustry_entities_units_BuildPlan_arc_util_Eachable, "(Lmindustry/entities/units/BuildPlan;Larc/util/Eachable;)V", 1 },
	{ "drawPlace", (intptr_t) M_mindustry_world_blocks_payloads_PayloadMassDriver_drawPlace_int_int_int_boolean, VTABLE_mindustry_world_blocks_payloads_PayloadMassDriver_drawPlace_int_int_int_boolean, "(IIIZ)V", 1 },
	{ "getRegionsToOutline", (intptr_t) M_mindustry_world_blocks_payloads_PayloadMassDriver_getRegionsToOutline_arc_struct_Seq, VTABLE_mindustry_world_blocks_payloads_PayloadMassDriver_getRegionsToOutline_arc_struct_Seq, "(Larc/struct/Seq;)V", 1 },
	{ "lambda$new$2", (intptr_t) SM_mindustry_world_blocks_payloads_PayloadMassDriver_lambda$new$2_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_java_lang_Integer, 0, "(Lmindustry/world/blocks/payloads/PayloadMassDriver$PayloadDriverBuild;Ljava/lang/Integer;)V", 4106 },
	{ "lambda$new$1", (intptr_t) SM_mindustry_world_blocks_payloads_PayloadMassDriver_lambda$new$1_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild_arc_math_geom_Point2, 0, "(Lmindustry/world/blocks/payloads/PayloadMassDriver$PayloadDriverBuild;Larc/math/geom/Point2;)V", 4106 },
	{ "lambda$new$0", (intptr_t) SM_mindustry_world_blocks_payloads_PayloadMassDriver_lambda$new$0_mindustry_entities_Effect$EffectContainer, 0, "(Lmindustry/entities/Effect$EffectContainer;)V", 4106 },
};

Class class_mindustry_world_blocks_payloads_PayloadMassDriver{
		.nativeName = (intptr_t) "mindustry/world/blocks/payloads/PayloadMassDriver",
		.parentClass = (intptr_t) &class_mindustry_world_blocks_payloads_PayloadBlock,
		.size = sizeof(mindustry_world_blocks_payloads_PayloadMassDriver),
		.classVtable = (intptr_t) vtable_mindustry_world_blocks_payloads_PayloadMassDriver,
		.staticInitializer = (intptr_t) clinit_mindustry_world_blocks_payloads_PayloadMassDriver,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_world_blocks_payloads_PayloadMassDriver,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 3,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 25,
		.nativeFields = (intptr_t) fields,
		.methodCount = 10,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 190,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_blocks_payloads_PayloadMassDriver = registerClass(&class_mindustry_world_blocks_payloads_PayloadMassDriver);

}
