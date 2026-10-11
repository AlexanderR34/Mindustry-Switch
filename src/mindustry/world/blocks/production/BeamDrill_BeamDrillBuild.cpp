#include "mindustry/world/blocks/production/BeamDrill_BeamDrillBuild.h"
#include "arc/math/geom/Vec2.h"
#include "mindustry/world/Block.h"
#include "mindustry/world/blocks/production/BeamDrill.h"
#include "arc/math/Rand.h"
#include "arc/math/Angles.h"
#include "mindustry/world/blocks/production/BeamDrill_BeamDrillBuild.h"
#include "arc/graphics/g2d/Lines.h"
#include "arc/math/geom/Point2.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "arc/graphics/Color.h"
#include "mindustry/ui/Displayable.h"
#include "arc/graphics/g2d/Draw.h"
#include "java/lang/reflect/Constructor.h"
#include "arc/util/Tmp.h"
#include "arc/struct/Seq.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/world/Tile.h"
#include "arc/math/geom/Position.h"
#include "arc/math/geom/Geometry.h"
#include "arc/graphics/Blending.h"
#include "arc/math/Mathf.h"
#include "java/lang/Math.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "java/lang/reflect/Field.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/graphics/Lod.h"
#include "arc/util/Time.h"
#include "mindustry/type/Item.h"
#include "arc/util/Nullable.h"
#include "mindustry/world/modules/ItemModule.h"
#include "mindustry/gen/Building.h"
#include "arc/util/io/Reads.h"
#include "java/lang/Object.h"
#include "mindustry/graphics/Drawf.h"
#include "mindustry/Vars.h"
#include "mindustry/core/World.h"
#include "arc/util/io/Writes.h"

extern "C" {

static inline mindustry_world_blocks_production_BeamDrill* getBeamDrill(jcontext ctx, jobject self) {
	if (!self) return nullptr;
	auto b = (mindustry_world_blocks_production_BeamDrill$BeamDrillBuild *) self;
	if (!b->F_this$0) {
		b->F_this$0 = (jref)((mindustry_gen_Building *) self)->F_block;
	}
	auto bd = (mindustry_world_blocks_production_BeamDrill *) b->F_this$0;
	if (bd) {
		jint sz = ((mindustry_world_Block *) bd)->F_size;
		if (sz <= 0) sz = 1;
		if (!b->F_facing) b->F_facing = (jref)createArray(ctx, &class_mindustry_world_Tile, sz);
		if (!b->F_lasers) b->F_lasers = (jref)createArray(ctx, &class_arc_math_geom_Point2, sz);
	}
	return bd;
}

void mark_mindustry_world_blocks_production_BeamDrill$BeamDrillBuild(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_world_blocks_production_BeamDrill$BeamDrillBuild *) object;
	if (self->F_facing)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_facing)->clazz)->markFunction)((jobject) self->F_facing, mark, depth + 1);
	if (self->F_lasers)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lasers)->clazz)->markFunction)((jobject) self->F_lasers, mark, depth + 1);
	if (self->F_lastItem)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lastItem)->clazz)->markFunction)((jobject) self->F_lastItem, mark, depth + 1);
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_mindustry_world_blocks_production_BeamDrill$BeamDrillBuild(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_gen_Building(ctx);
}

void init_mindustry_world_blocks_production_BeamDrill$BeamDrillBuild_mindustry_world_blocks_production_BeamDrill(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/production/BeamDrill$BeamDrillBuild:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_production_BeamDrill$BeamDrillBuild(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(220);
	((mindustry_world_blocks_production_BeamDrill$BeamDrillBuild *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_mindustry_gen_Building(ctx, (frame[0].o));
	LINE_NUMBER(221);
	getBeamDrill(ctx, self);
	LINE_NUMBER(220);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_production_BeamDrill$BeamDrillBuild_drawSelect(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	getBeamDrill(ctx, self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/production/BeamDrill$BeamDrillBuild:drawSelect", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(233);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_world_blocks_production_BeamDrill$BeamDrillBuild *) NULL_CHECK((frame[0].o)))->F_lastItem;
	((func_mindustry_world_blocks_production_BeamDrill$BeamDrillBuild_drawItemSelection_mindustry_ctype_UnlockableContent) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_production_BeamDrill$BeamDrillBuild_drawItemSelection_mindustry_ctype_UnlockableContent])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(234);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_production_BeamDrill$BeamDrillBuild_updateTile(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	auto bd = getBeamDrill(ctx, self);
	if (!bd) return;
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/production/BeamDrill$BeamDrillBuild:updateTile", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(238);
	M_mindustry_gen_Building_updateTile(ctx, (frame[0].o));
	LINE_NUMBER(240);
	sp[0].o = (jobject)((mindustry_world_blocks_production_BeamDrill$BeamDrillBuild *) NULL_CHECK((frame[0].o)))->F_lasers;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0)))) != nullptr) goto label_2;
	}
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	((func_mindustry_world_blocks_production_BeamDrill$BeamDrillBuild_updateLasers) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_production_BeamDrill$BeamDrillBuild_updateLasers])(ctx, sp[0].o);
label_2:;
	{
	LINE_NUMBER(242);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_world_blocks_production_BeamDrill$BeamDrillBuild *) NULL_CHECK((frame[0].o)))->F_warmup;
	sp[1].f = temp0;
	sp += 2;
	if ((floatCompare(((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_efficiency), (jfloat(0)), -1)) <= 0) goto label_3;
	}
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	{
	sp -= 3;
	jint temp0 = (jint)SM_arc_math_Mathf_num_boolean_R_int(ctx, sp[2].i);
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_approachDelta_float_float_float_R_float(ctx, sp[1].f, (jfloat(temp0)), (jfloat(0.016666668f)));
	((mindustry_world_blocks_production_BeamDrill$BeamDrillBuild *) NULL_CHECK(sp[0].o))->F_warmup = temp1;
	LINE_NUMBER(244);
	((func_mindustry_world_blocks_production_BeamDrill$BeamDrillBuild_updateFacing) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_production_BeamDrill$BeamDrillBuild_updateFacing])(ctx, (frame[0].o));
	LINE_NUMBER(246);
	jfloat temp2 = jfloat(1);
	sp[0].o = (jobject)((mindustry_world_blocks_production_BeamDrill$BeamDrillBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp3 = (jfloat)SM_arc_math_Mathf_lerp_float_float_float_R_float(ctx, temp2, ((jfloat)((mindustry_world_blocks_production_BeamDrill *) NULL_CHECK(sp[0].o))->F_optionalBoostIntensity), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_optionalEfficiency));
	frame[1].f = temp3;
	LINE_NUMBER(247);
	sp[0].o = (jobject)((mindustry_world_blocks_production_BeamDrill$BeamDrillBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_world_blocks_production_BeamDrill$BeamDrillBuild *) NULL_CHECK((frame[0].o)))->F_lastItem;
	jfloat temp4 = (jfloat)((func_mindustry_world_blocks_production_BeamDrill_getDrillTime_mindustry_type_Item_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_production_BeamDrill_getDrillTime_mindustry_type_Item_R_float])(ctx, sp[0].o, sp[1].o);
	frame[2].f = temp4;
	LINE_NUMBER(248);
	sp[0].o = frame[0].o;
	jfloat temp5 = (jfloat)SM_arc_math_Mathf_lerpDelta_float_float_float_R_float(ctx, ((jfloat)((mindustry_world_blocks_production_BeamDrill$BeamDrillBuild *) NULL_CHECK((frame[0].o)))->F_boostWarmup), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_optionalEfficiency), (jfloat(0.1f)));
	((mindustry_world_blocks_production_BeamDrill$BeamDrillBuild *) NULL_CHECK(sp[0].o))->F_boostWarmup = temp5;
	LINE_NUMBER(249);
	((mindustry_world_blocks_production_BeamDrill$BeamDrillBuild *) NULL_CHECK((frame[0].o)))->F_lastDrillSpeed = (((((jfloat(((jint)((mindustry_world_blocks_production_BeamDrill$BeamDrillBuild *) NULL_CHECK((frame[0].o)))->F_facingAmount))) * (frame[1].f)) * ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_timeScale)) / (frame[2].f)) * ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_efficiency));
	LINE_NUMBER(251);
	sp[0].o = frame[0].o;
	jfloat temp6 = (jfloat)((mindustry_world_blocks_production_BeamDrill$BeamDrillBuild *) NULL_CHECK(sp[0].o))->F_time;
	jfloat temp7 = (jfloat)((func_mindustry_world_blocks_production_BeamDrill$BeamDrillBuild_edelta_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_production_BeamDrill$BeamDrillBuild_edelta_R_float])(ctx, (frame[0].o));
	((mindustry_world_blocks_production_BeamDrill$BeamDrillBuild *) NULL_CHECK(sp[0].o))->F_time = (temp6 + (temp7 * (frame[1].f)));
	LINE_NUMBER(253);
	if ((floatCompare(((jfloat)((mindustry_world_blocks_production_BeamDrill$BeamDrillBuild *) NULL_CHECK((frame[0].o)))->F_time), (frame[2].f), -1)) < 0) goto label_12;
	}
	{
	LINE_NUMBER(254);
	sp[0].o = (jobject)((mindustry_world_blocks_production_BeamDrill$BeamDrillBuild *) NULL_CHECK((frame[0].o)))->F_facing;
	frame[3].o = sp[0].o;
	frame[4].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	frame[5].i = (jint(0));
	}
label_14:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_15;
	}
	{
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(255);
	if ((frame[6].o) != nullptr) goto label_17;
	}
	INST_ACONST_NULL();
	goto label_18;
label_17:;
	INST_ALOAD(6);
	POP_N(1); // Pop method args
	sp->o = (jobject)((func_mindustry_world_Tile_wallDrop_R_mindustry_type_Item) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_wallDrop_R_mindustry_type_Item])(ctx, sp[0].o);
	sp++;
label_18:;
	{
	sp -= 1;
	frame[7].o = sp[0].o;
	LINE_NUMBER(256);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = (jint)((func_mindustry_world_modules_ItemModule_total_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_total_R_int])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_world_blocks_production_BeamDrill$BeamDrillBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (temp0 >= ((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_itemCapacity)) goto label_20;
	}
	INST_ALOAD(7);
	if ((--sp)->o == nullptr) goto label_20;
	{
	LINE_NUMBER(257);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	((func_mindustry_world_modules_ItemModule_add_mindustry_type_Item_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_add_mindustry_type_Item_int])(ctx, sp[0].o, (frame[7].o), (jint(1)));
	LINE_NUMBER(258);
	((func_mindustry_world_blocks_production_BeamDrill$BeamDrillBuild_produced_mindustry_type_Item) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_production_BeamDrill$BeamDrillBuild_produced_mindustry_type_Item])(ctx, (frame[0].o), (frame[7].o));
	}
label_20:;
	{
	LINE_NUMBER(254);
	INST_IINC(5, 1);
	goto label_14;
	}
label_15:;
	{
	LINE_NUMBER(261);
	sp[0].o = frame[0].o;
	((mindustry_world_blocks_production_BeamDrill$BeamDrillBuild *) NULL_CHECK(sp[0].o))->F_time = (fmodf(((jfloat)((mindustry_world_blocks_production_BeamDrill$BeamDrillBuild *) NULL_CHECK(sp[0].o))->F_time), (frame[2].f)));
	}
label_12:;
	{
	LINE_NUMBER(264);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_world_blocks_production_BeamDrill$BeamDrillBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)SM_mindustry_world_blocks_production_BeamDrill_access$000_mindustry_world_blocks_production_BeamDrill_R_int(ctx, sp[1].o);
	sp[1].o = (jobject)((mindustry_world_blocks_production_BeamDrill$BeamDrillBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp1 = (jint)((func_mindustry_world_blocks_production_BeamDrill$BeamDrillBuild_timer_int_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_production_BeamDrill$BeamDrillBuild_timer_int_float_R_boolean])(ctx, sp[0].o, temp0, ((jfloat(((jint)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_dumpTime))) / ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_timeScale)));
	if (temp1 == 0) goto label_23;
	}
	{
	LINE_NUMBER(265);
	jint temp0 = (jint)((func_mindustry_world_blocks_production_BeamDrill$BeamDrillBuild_dump_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_production_BeamDrill$BeamDrillBuild_dump_R_boolean])(ctx, (frame[0].o));
	}
label_23:;
	LINE_NUMBER(267);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_production_BeamDrill$BeamDrillBuild_shouldConsume_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	getBeamDrill(ctx, self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/production/BeamDrill$BeamDrillBuild:shouldConsume", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(271);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = (jint)((func_mindustry_world_modules_ItemModule_total_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_total_R_int])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_world_blocks_production_BeamDrill$BeamDrillBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (temp0 >= ((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_itemCapacity)) goto label_1;
	}
	{
	if (((jint)((mindustry_world_blocks_production_BeamDrill$BeamDrillBuild *) NULL_CHECK((frame[0].o)))->F_facingAmount) <= 0) goto label_1;
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

void M_mindustry_world_blocks_production_BeamDrill$BeamDrillBuild_draw(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	auto bd = getBeamDrill(ctx, self);
	if (!bd) return;
	jtype frame[26];
	auto stack = &frame[19];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/production/BeamDrill$BeamDrillBuild:draw", 26 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(276);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_region;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float(ctx, sp[0].o, ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y));
	LINE_NUMBER(277);
	sp[0].o = (jobject)((mindustry_world_blocks_production_BeamDrill$BeamDrillBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_production_BeamDrill *) NULL_CHECK(sp[0].o))->F_topRegion;
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	jfloat temp2 = (jfloat)((func_mindustry_world_blocks_production_BeamDrill$BeamDrillBuild_rotdeg_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_production_BeamDrill$BeamDrillBuild_rotdeg_R_float])(ctx, (frame[0].o));
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float(ctx, sp[0].o, temp0, temp1, temp2);
	LINE_NUMBER(279);
	jint temp3 = (jint)((func_mindustry_world_blocks_production_BeamDrill$BeamDrillBuild_isPayload_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_production_BeamDrill$BeamDrillBuild_isPayload_R_boolean])(ctx, (frame[0].o));
	if (temp3 == 0) goto label_3;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(281);
	sp[0].o = (jobject)SM_arc_math_geom_Geometry_d4_int_R_arc_math_geom_Point2(ctx, ((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_rotation));
	frame[1].o = sp[0].o;
	LINE_NUMBER(282);
	jint temp0 = (jint)SM_arc_math_geom_Geometry_d4x_int_R_int(ctx, (((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_rotation) + (jint(1))));
	frame[2].i = temp0;
	jint temp1 = (jint)SM_arc_math_geom_Geometry_d4y_int_R_int(ctx, (((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_rotation) + (jint(1))));
	frame[3].i = temp1;
	LINE_NUMBER(284);
	frame[4].i = (jint(0));
	}
label_7:;
	{
	jint temp0 = frame[4].i;
	sp[0].o = (jobject)((mindustry_world_blocks_production_BeamDrill$BeamDrillBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (temp0 >= ((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size)) goto label_8;
	}
	{
	LINE_NUMBER(285);
	sp[0].o = (jobject)((mindustry_world_blocks_production_BeamDrill$BeamDrillBuild *) NULL_CHECK((frame[0].o)))->F_facing;
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[4].i)));
	LINE_NUMBER(286);
	if ((frame[5].o) == nullptr) goto label_11;
	}
	{
	LINE_NUMBER(287);
	sp[0].o = (jobject)((func_mindustry_world_Tile_wallDrop_R_mindustry_type_Item) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_world_Tile_wallDrop_R_mindustry_type_Item])(ctx, (frame[5].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(289);
	if ((frame[6].o) != nullptr) goto label_14;
	}
	goto label_11;
label_14:;
	{
	LINE_NUMBER(290);
	sp[0].o = (jobject)((mindustry_world_blocks_production_BeamDrill$BeamDrillBuild *) NULL_CHECK((frame[0].o)))->F_lasers;
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[4].i)));
	LINE_NUMBER(291);
	jfloat temp0 = (jfloat)((func_mindustry_world_Tile_worldx_R_float) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_world_Tile_worldx_R_float])(ctx, (frame[5].o));
	frame[8].f = (temp0 - (((jfloat(((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[1].o)))->F_x))) / (jfloat(2))) * (jfloat(8.0f))));
	jfloat temp1 = (jfloat)((func_mindustry_world_Tile_worldy_R_float) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_world_Tile_worldy_R_float])(ctx, (frame[5].o));
	frame[9].f = (temp1 - (((jfloat(((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[1].o)))->F_y))) / (jfloat(2))) * (jfloat(8.0f))));
	LINE_NUMBER(293);
	sp[0].o = (jobject)((mindustry_world_blocks_production_BeamDrill$BeamDrillBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp2 = (jfloat)((mindustry_world_blocks_production_BeamDrill *) NULL_CHECK(sp[0].o))->F_laserWidth;
	jfloat temp3 = ((clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time) + (jfloat(((frame[4].i) * (jint(5)))))) + (jfloat(((((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_id) % (9)) * (9))));
	sp[0].o = (jobject)((mindustry_world_blocks_production_BeamDrill$BeamDrillBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp4 = (jfloat)((mindustry_world_blocks_production_BeamDrill *) NULL_CHECK(sp[0].o))->F_glowScl;
	sp[0].o = (jobject)((mindustry_world_blocks_production_BeamDrill$BeamDrillBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp5 = (jfloat)SM_arc_math_Mathf_absin_float_float_float_R_float(ctx, temp3, temp4, ((jfloat)((mindustry_world_blocks_production_BeamDrill *) NULL_CHECK(sp[0].o))->F_pulseIntensity));
	frame[10].f = ((temp2 + temp5) * ((jfloat)((mindustry_world_blocks_production_BeamDrill$BeamDrillBuild *) NULL_CHECK((frame[0].o)))->F_warmup));
	LINE_NUMBER(295);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (jfloat(69.0f)));
	LINE_NUMBER(296);
	sp[0].o = (jobject)((mindustry_world_blocks_production_BeamDrill$BeamDrillBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_production_BeamDrill *) NULL_CHECK(sp[0].o))->F_glowColor;
	jfloat temp6 = ((clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time) + (jfloat(((frame[4].i) * (jint(5)))))) + (jfloat((((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_id) * (9))));
	sp[1].o = (jobject)((mindustry_world_blocks_production_BeamDrill$BeamDrillBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp7 = (jfloat)((mindustry_world_blocks_production_BeamDrill *) NULL_CHECK(sp[1].o))->F_glowScl;
	sp[1].o = (jobject)((mindustry_world_blocks_production_BeamDrill$BeamDrillBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp8 = (jfloat)SM_arc_math_Mathf_absin_float_float_float_R_float(ctx, temp6, temp7, ((jfloat)((mindustry_world_blocks_production_BeamDrill *) NULL_CHECK(sp[1].o))->F_glowIntensity));
	SM_arc_graphics_g2d_Draw_mixcol_arc_graphics_Color_float(ctx, sp[0].o, temp8);
	LINE_NUMBER(297);
	jint temp9 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, (((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[7].o)))->F_x) - ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[5].o)))->F_x)));
	jint temp10 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, (((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[7].o)))->F_y) - ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[5].o)))->F_y)));
	if ((temp9 + temp10) != 0) goto label_21;
	}
	{
	LINE_NUMBER(298);
	SM_arc_graphics_g2d_Draw_scl_float(ctx, (frame[10].f));
	LINE_NUMBER(300);
	if ((floatCompare(((jfloat)((mindustry_world_blocks_production_BeamDrill$BeamDrillBuild *) NULL_CHECK((frame[0].o)))->F_boostWarmup), (jfloat(0.99f)), 1)) >= 0) goto label_24;
	}
	{
	LINE_NUMBER(301);
	SM_arc_graphics_g2d_Draw_alpha_float(ctx, ((jfloat(1)) - ((jfloat)((mindustry_world_blocks_production_BeamDrill$BeamDrillBuild *) NULL_CHECK((frame[0].o)))->F_boostWarmup)));
	LINE_NUMBER(302);
	sp[0].o = (jobject)((mindustry_world_blocks_production_BeamDrill$BeamDrillBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_production_BeamDrill *) NULL_CHECK(sp[0].o))->F_laserCenter;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float(ctx, sp[0].o, (frame[8].f), (frame[9].f));
	}
label_24:;
	{
	LINE_NUMBER(305);
	if ((floatCompare(((jfloat)((mindustry_world_blocks_production_BeamDrill$BeamDrillBuild *) NULL_CHECK((frame[0].o)))->F_boostWarmup), (jfloat(1,000000e-02f)), -1)) <= 0) goto label_27;
	}
	{
	LINE_NUMBER(306);
	SM_arc_graphics_g2d_Draw_alpha_float(ctx, ((jfloat)((mindustry_world_blocks_production_BeamDrill$BeamDrillBuild *) NULL_CHECK((frame[0].o)))->F_boostWarmup));
	LINE_NUMBER(307);
	sp[0].o = (jobject)((mindustry_world_blocks_production_BeamDrill$BeamDrillBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_production_BeamDrill *) NULL_CHECK(sp[0].o))->F_laserCenterBoost;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float(ctx, sp[0].o, (frame[8].f), (frame[9].f));
	}
label_27:;
	{
	LINE_NUMBER(310);
	SM_arc_graphics_g2d_Draw_scl(ctx);
	goto label_30;
	}
label_21:;
	{
	LINE_NUMBER(312);
	frame[11].f = (((jfloat(((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[7].o)))->F_x))) - ((jfloat(((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[1].o)))->F_x))) / (jfloat(2)))) * (jfloat(8.0f)));
	frame[12].f = (((jfloat(((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[7].o)))->F_y))) - ((jfloat(((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[1].o)))->F_y))) / (jfloat(2)))) * (jfloat(8.0f)));
	LINE_NUMBER(314);
	if ((floatCompare(((jfloat)((mindustry_world_blocks_production_BeamDrill$BeamDrillBuild *) NULL_CHECK((frame[0].o)))->F_boostWarmup), (jfloat(0.99f)), 1)) >= 0) goto label_33;
	}
	{
	LINE_NUMBER(315);
	SM_arc_graphics_g2d_Draw_alpha_float(ctx, ((jfloat(1)) - ((jfloat)((mindustry_world_blocks_production_BeamDrill$BeamDrillBuild *) NULL_CHECK((frame[0].o)))->F_boostWarmup)));
	LINE_NUMBER(316);
	sp[0].o = (jobject)((mindustry_world_blocks_production_BeamDrill$BeamDrillBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_production_BeamDrill *) NULL_CHECK(sp[0].o))->F_laser;
	sp[1].o = (jobject)((mindustry_world_blocks_production_BeamDrill$BeamDrillBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_world_blocks_production_BeamDrill *) NULL_CHECK(sp[1].o))->F_laserEnd;
	SM_mindustry_graphics_Drawf_laser_arc_graphics_g2d_TextureRegion_arc_graphics_g2d_TextureRegion_float_float_float_float_float(ctx, sp[0].o, sp[1].o, (frame[11].f), (frame[12].f), (frame[8].f), (frame[9].f), (frame[10].f));
	}
label_33:;
	{
	LINE_NUMBER(319);
	if ((floatCompare(((jfloat)((mindustry_world_blocks_production_BeamDrill$BeamDrillBuild *) NULL_CHECK((frame[0].o)))->F_boostWarmup), (jfloat(1,000000e-03f)), -1)) <= 0) goto label_30;
	}
	{
	LINE_NUMBER(320);
	SM_arc_graphics_g2d_Draw_alpha_float(ctx, ((jfloat)((mindustry_world_blocks_production_BeamDrill$BeamDrillBuild *) NULL_CHECK((frame[0].o)))->F_boostWarmup));
	LINE_NUMBER(321);
	sp[0].o = (jobject)((mindustry_world_blocks_production_BeamDrill$BeamDrillBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_production_BeamDrill *) NULL_CHECK(sp[0].o))->F_laserBoost;
	sp[1].o = (jobject)((mindustry_world_blocks_production_BeamDrill$BeamDrillBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_world_blocks_production_BeamDrill *) NULL_CHECK(sp[1].o))->F_laserEndBoost;
	SM_mindustry_graphics_Drawf_laser_arc_graphics_g2d_TextureRegion_arc_graphics_g2d_TextureRegion_float_float_float_float_float(ctx, sp[0].o, sp[1].o, (frame[11].f), (frame[12].f), (frame[8].f), (frame[9].f), (frame[10].f));
	}
label_30:;
	{
	LINE_NUMBER(324);
	SM_arc_graphics_g2d_Draw_color(ctx);
	LINE_NUMBER(325);
	SM_arc_graphics_g2d_Draw_mixcol(ctx);
	LINE_NUMBER(327);
	if ((clinit_mindustry_graphics_Lod(ctx), (jint)SF_mindustry_graphics_Lod_l2) == 0) goto label_11;
	}
	{
	LINE_NUMBER(328);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (jfloat(110.0f)));
	LINE_NUMBER(329);
	SM_arc_graphics_g2d_Lines_stroke_float(ctx, ((jfloat)((mindustry_world_blocks_production_BeamDrill$BeamDrillBuild *) NULL_CHECK((frame[0].o)))->F_warmup));
	LINE_NUMBER(330);
	sp[0].o = (jobject)((mindustry_world_blocks_production_BeamDrill$BeamDrillBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_production_BeamDrill *) NULL_CHECK(sp[0].o))->F_rand;
	((func_arc_math_Rand_setState_long_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_setState_long_long])(ctx, sp[0].o, (jlong((frame[4].i))), (jlong(((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_id))));
	LINE_NUMBER(331);
	sp[0].o = (jobject)((mindustry_type_Item *) NULL_CHECK((frame[6].o)))->F_color;
	frame[11].o = sp[0].o;
	LINE_NUMBER(332);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_c3;
	sp[1].o = (jobject)((mindustry_world_blocks_production_BeamDrill$BeamDrillBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_world_blocks_production_BeamDrill *) NULL_CHECK(sp[1].o))->F_sparkColor;
	sp[0].o = (jobject)((func_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	sp[1].o = (jobject)((mindustry_world_blocks_production_BeamDrill$BeamDrillBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_world_blocks_production_BeamDrill *) NULL_CHECK(sp[1].o))->F_boostHeatColor;
	sp[0].o = (jobject)((func_arc_graphics_Color_lerp_arc_graphics_Color_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_lerp_arc_graphics_Color_float_R_arc_graphics_Color])(ctx, sp[0].o, sp[1].o, ((jfloat)((mindustry_world_blocks_production_BeamDrill$BeamDrillBuild *) NULL_CHECK((frame[0].o)))->F_boostWarmup));
	frame[12].o = sp[0].o;
	LINE_NUMBER(333);
	frame[13].i = (jint(0));
	}
label_46:;
	{
	jint temp0 = frame[13].i;
	sp[0].o = (jobject)((mindustry_world_blocks_production_BeamDrill$BeamDrillBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (temp0 >= ((jint)((mindustry_world_blocks_production_BeamDrill *) NULL_CHECK(sp[0].o))->F_sparks)) goto label_47;
	}
	{
	LINE_NUMBER(334);
	clinit_arc_util_Time(ctx);
	jfloat temp0 = (jfloat)SF_arc_util_Time_time;
	sp[0].o = (jobject)((mindustry_world_blocks_production_BeamDrill$BeamDrillBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp1 = temp0 / ((jfloat)((mindustry_world_blocks_production_BeamDrill *) NULL_CHECK(sp[0].o))->F_sparkLife);
	sp[0].o = (jobject)((mindustry_world_blocks_production_BeamDrill$BeamDrillBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_production_BeamDrill *) NULL_CHECK(sp[0].o))->F_rand;
	sp[1].o = (jobject)((mindustry_world_blocks_production_BeamDrill$BeamDrillBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp2 = (jfloat)((func_arc_math_Rand_random_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_random_float_R_float])(ctx, sp[0].o, (((jfloat)((mindustry_world_blocks_production_BeamDrill *) NULL_CHECK(sp[1].o))->F_sparkRecurrence) + (jfloat(1))));
	jfloat temp3 = temp1 + temp2;
	sp[0].o = (jobject)((mindustry_world_blocks_production_BeamDrill$BeamDrillBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	frame[14].f = (fmodf(temp3, ((jfloat)((mindustry_world_blocks_production_BeamDrill *) NULL_CHECK(sp[0].o))->F_sparkRecurrence)));
	LINE_NUMBER(335);
	sp[0].o = (jobject)((mindustry_world_blocks_production_BeamDrill$BeamDrillBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_production_BeamDrill *) NULL_CHECK(sp[0].o))->F_rand;
	jfloat temp4 = (jfloat)((func_arc_math_Rand_range_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_range_float_R_float])(ctx, sp[0].o, (jfloat(2)));
	frame[15].f = temp4;
	LINE_NUMBER(336);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	sp[1].o = (jobject)((mindustry_world_blocks_production_BeamDrill$BeamDrillBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (((jfloat)((mindustry_world_blocks_production_BeamDrill *) NULL_CHECK(sp[1].o))->F_sparkRange) * (frame[14].f)), (jfloat(0)));
	jfloat temp5 = (jfloat)((func_mindustry_world_blocks_production_BeamDrill$BeamDrillBuild_rotdeg_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_production_BeamDrill$BeamDrillBuild_rotdeg_R_float])(ctx, (frame[0].o));
	sp[1].o = (jobject)((mindustry_world_blocks_production_BeamDrill$BeamDrillBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_world_blocks_production_BeamDrill *) NULL_CHECK(sp[1].o))->F_rand;
	sp[2].o = (jobject)((mindustry_world_blocks_production_BeamDrill$BeamDrillBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp6 = (jfloat)((func_arc_math_Rand_range_float_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_Rand_range_float_R_float])(ctx, sp[1].o, ((jfloat)((mindustry_world_blocks_production_BeamDrill *) NULL_CHECK(sp[2].o))->F_sparkSpread));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_rotate_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_rotate_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (temp5 + temp6));
	LINE_NUMBER(338);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_c1;
	sp[0].o = (jobject)((func_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[0].o, (frame[12].o));
	sp[0].o = (jobject)((func_arc_graphics_Color_lerp_arc_graphics_Color_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_lerp_arc_graphics_Color_float_R_arc_graphics_Color])(ctx, sp[0].o, (frame[11].o), (frame[14].f));
	frame[16].o = sp[0].o;
	LINE_NUMBER(339);
	SM_arc_graphics_g2d_Draw_color_float_float_float_float(ctx, ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[16].o)))->F_r), ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[16].o)))->F_g), ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[16].o)))->F_b), (((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[16].o)))->F_a) * (clinit_mindustry_graphics_Lod(ctx), (jfloat)SF_mindustry_graphics_Lod_alpha2)));
	LINE_NUMBER(340);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	frame[17].f = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	frame[18].f = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y);
	LINE_NUMBER(341);
	if ((floatCompare((frame[14].f), (jfloat(1)), 1)) > 0) goto label_56;
	}
	{
	jfloat temp0 = ((frame[8].f) + (frame[17].f)) + ((frame[15].f) * (jfloat((frame[2].i))));
	jfloat temp1 = ((frame[9].f) + (frame[18].f)) + ((frame[15].f) * (jfloat((frame[3].i))));
	jfloat temp2 = (jfloat)SM_arc_math_Angles_angle_float_float_R_float(ctx, (frame[17].f), (frame[18].f));
	jfloat temp3 = (jfloat)SM_arc_math_Mathf_slope_float_R_float(ctx, (frame[14].f));
	sp[0].o = (jobject)((mindustry_world_blocks_production_BeamDrill$BeamDrillBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	SM_arc_graphics_g2d_Lines_lineAngle_float_float_float_float(ctx, temp0, temp1, temp2, (temp3 * ((jfloat)((mindustry_world_blocks_production_BeamDrill *) NULL_CHECK(sp[0].o))->F_sparkSize)));
	}
label_56:;
	{
	LINE_NUMBER(333);
	INST_IINC(13, 1);
	goto label_46;
	}
label_47:;
	LINE_NUMBER(343);
	SM_arc_graphics_g2d_Draw_reset(ctx);
label_11:;
	{
	LINE_NUMBER(284);
	INST_IINC(4, 1);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(348);
	sp[0].o = (jobject)((mindustry_world_blocks_production_BeamDrill$BeamDrillBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_production_BeamDrill *) NULL_CHECK(sp[0].o))->F_glowRegion;
	jint temp0 = (jint)((func_arc_graphics_g2d_TextureRegion_found_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_found_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_57;
	}
	{
	LINE_NUMBER(349);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (jfloat(31.0f)));
	LINE_NUMBER(350);
	clinit_arc_graphics_Blending(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Blending_additive;
	SM_arc_graphics_g2d_Draw_blend_arc_graphics_Blending(ctx, sp[0].o);
	LINE_NUMBER(351);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_c1;
	sp[1].o = (jobject)((mindustry_world_blocks_production_BeamDrill$BeamDrillBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_world_blocks_production_BeamDrill *) NULL_CHECK(sp[1].o))->F_heatColor;
	sp[0].o = (jobject)((func_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	sp[1].o = (jobject)((mindustry_world_blocks_production_BeamDrill$BeamDrillBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_world_blocks_production_BeamDrill *) NULL_CHECK(sp[1].o))->F_boostHeatColor;
	sp[0].o = (jobject)((func_arc_graphics_Color_lerp_arc_graphics_Color_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_lerp_arc_graphics_Color_float_R_arc_graphics_Color])(ctx, sp[0].o, sp[1].o, ((jfloat)((mindustry_world_blocks_production_BeamDrill$BeamDrillBuild *) NULL_CHECK((frame[0].o)))->F_boostWarmup));
	jfloat temp0 = (jfloat)((mindustry_world_blocks_production_BeamDrill$BeamDrillBuild *) NULL_CHECK((frame[0].o)))->F_warmup;
	sp[1].o = (jobject)((mindustry_world_blocks_production_BeamDrill$BeamDrillBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_world_blocks_production_BeamDrill *) NULL_CHECK(sp[1].o))->F_heatColor;
	jfloat temp1 = (jfloat)((arc_graphics_Color *) NULL_CHECK(sp[1].o))->F_a;
	jfloat temp2 = jfloat(1);
	sp[1].o = (jobject)((mindustry_world_blocks_production_BeamDrill$BeamDrillBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp3 = temp2 - ((jfloat)((mindustry_world_blocks_production_BeamDrill *) NULL_CHECK(sp[1].o))->F_heatPulse);
	sp[1].o = (jobject)((mindustry_world_blocks_production_BeamDrill$BeamDrillBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp4 = (jfloat)((mindustry_world_blocks_production_BeamDrill *) NULL_CHECK(sp[1].o))->F_heatPulseScl;
	sp[1].o = (jobject)((mindustry_world_blocks_production_BeamDrill$BeamDrillBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp5 = (jfloat)SM_arc_math_Mathf_absin_float_float_R_float(ctx, temp4, ((jfloat)((mindustry_world_blocks_production_BeamDrill *) NULL_CHECK(sp[1].o))->F_heatPulse));
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color_float(ctx, sp[0].o, (temp0 * (temp1 * (temp3 + temp5))));
	LINE_NUMBER(352);
	sp[0].o = (jobject)((mindustry_world_blocks_production_BeamDrill$BeamDrillBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_production_BeamDrill *) NULL_CHECK(sp[0].o))->F_glowRegion;
	jfloat temp6 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp7 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	jfloat temp8 = (jfloat)((func_mindustry_world_blocks_production_BeamDrill$BeamDrillBuild_rotdeg_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_production_BeamDrill$BeamDrillBuild_rotdeg_R_float])(ctx, (frame[0].o));
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float(ctx, sp[0].o, temp6, temp7, temp8);
	LINE_NUMBER(353);
	SM_arc_graphics_g2d_Draw_blend(ctx);
	LINE_NUMBER(354);
	SM_arc_graphics_g2d_Draw_color(ctx);
	}
label_57:;
	{
	LINE_NUMBER(357);
	SM_arc_graphics_g2d_Draw_blend(ctx);
	LINE_NUMBER(358);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(359);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_production_BeamDrill$BeamDrillBuild_onProximityUpdate(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	auto bd = getBeamDrill(ctx, self);
	if (!bd) return;
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/production/BeamDrill$BeamDrillBuild:onProximityUpdate", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(364);
	((func_mindustry_world_blocks_production_BeamDrill$BeamDrillBuild_updateLasers) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_production_BeamDrill$BeamDrillBuild_updateLasers])(ctx, (frame[0].o));
	LINE_NUMBER(365);
	((func_mindustry_world_blocks_production_BeamDrill$BeamDrillBuild_updateFacing) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_production_BeamDrill$BeamDrillBuild_updateFacing])(ctx, (frame[0].o));
	LINE_NUMBER(366);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_production_BeamDrill$BeamDrillBuild_updateLasers(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	auto bd = getBeamDrill(ctx, self);
	if (!bd) return;
	jtype frame[9];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/production/BeamDrill$BeamDrillBuild:updateLasers", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(369);
	frame[1].i = (jint(0));
	}
label_1:;
	{
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)getBeamDrill(ctx, frame[0].o);
	if (!sp[0].o || temp0 >= ((jint)((mindustry_world_Block *) sp[0].o)->F_size)) goto label_2;
	}
	{
	LINE_NUMBER(370);
	sp[0].o = (jobject)((mindustry_world_blocks_production_BeamDrill$BeamDrillBuild *) NULL_CHECK((frame[0].o)))->F_lasers;
	if (sp[0].o && ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i))) != nullptr) goto label_4;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_production_BeamDrill$BeamDrillBuild *) NULL_CHECK((frame[0].o)))->F_lasers;
	if (sp[0].o) {
		jint temp0 = frame[1].i;
		clinit_arc_math_geom_Point2(ctx);
		sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Point2);
		init_arc_math_geom_Point2(ctx, sp[1].o);
		ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	}
	}
label_4:;
	{
	LINE_NUMBER(371);
	sp[0].o = (jobject)getBeamDrill(ctx, frame[0].o);
	if (sp[0].o) {
		jint temp0 = (jint)((func_mindustry_world_blocks_production_BeamDrill$BeamDrillBuild_tileX_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_production_BeamDrill$BeamDrillBuild_tileX_R_int])(ctx, (frame[0].o));
		jint temp1 = (jint)((func_mindustry_world_blocks_production_BeamDrill$BeamDrillBuild_tileY_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_production_BeamDrill$BeamDrillBuild_tileY_R_int])(ctx, (frame[0].o));
		jint temp2 = (jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_rotation;
		jint temp3 = frame[1].i;
		sp[1].o = (jobject)((mindustry_world_blocks_production_BeamDrill$BeamDrillBuild *) NULL_CHECK((frame[0].o)))->F_lasers;
		if (sp[1].o && ARRAY_ACCESS(jobject, sp[1].o, (frame[1].i))) {
			((func_mindustry_world_blocks_production_BeamDrill_nearbySide_int_int_int_int_arc_math_geom_Point2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_production_BeamDrill_nearbySide_int_int_int_int_arc_math_geom_Point2])(ctx, sp[0].o, temp0, temp1, temp2, temp3, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[1].i))));
		}
	}
	LINE_NUMBER(369);
	INST_IINC(1, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(373);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_production_BeamDrill$BeamDrillBuild_updateFacing(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	auto bd = getBeamDrill(ctx, self);
	if (!bd) return;
	jtype frame[15];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/production/BeamDrill$BeamDrillBuild:updateFacing", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(376);
	((mindustry_world_blocks_production_BeamDrill$BeamDrillBuild *) NULL_CHECK((frame[0].o)))->F_lastItem = (jref) (jobject(nullptr));
	LINE_NUMBER(377);
	frame[1].i = (jint(0));
	LINE_NUMBER(378);
	jint temp0 = (jint)SM_arc_math_geom_Geometry_d4x_int_R_int(ctx, ((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_rotation));
	frame[2].i = temp0;
	jint temp1 = (jint)SM_arc_math_geom_Geometry_d4y_int_R_int(ctx, ((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_rotation));
	frame[3].i = temp1;
	LINE_NUMBER(379);
	((mindustry_world_blocks_production_BeamDrill$BeamDrillBuild *) NULL_CHECK((frame[0].o)))->F_facingAmount = (jint(0));
	LINE_NUMBER(382);
	frame[4].i = (jint(0));
	}
label_6:;
	{
	jint temp0 = frame[4].i;
	sp[0].o = (jobject)getBeamDrill(ctx, frame[0].o);
	if (!sp[0].o || temp0 >= ((jint)((mindustry_world_Block *) sp[0].o)->F_size)) goto label_7;
	}
	{
	LINE_NUMBER(383);
	sp[0].o = (jobject)((mindustry_world_blocks_production_BeamDrill$BeamDrillBuild *) NULL_CHECK((frame[0].o)))->F_lasers;
	frame[5].o = sp[0].o ? ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[4].i))) : nullptr;
	LINE_NUMBER(384);
	frame[6].o = (jobject(nullptr));
	LINE_NUMBER(385);
	frame[7].i = (jint(0));
	if (!frame[5].o) goto label_12;
	}
label_11:;
	{
	jint temp0 = frame[7].i;
	sp[0].o = (jobject)getBeamDrill(ctx, frame[0].o);
	if (!sp[0].o || temp0 >= ((jint)((mindustry_world_blocks_production_BeamDrill *) sp[0].o)->F_range)) goto label_12;
	}
	{
	LINE_NUMBER(386);
	frame[8].i = (((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[5].o)))->F_x) + ((frame[2].i) * (frame[7].i)));
	frame[9].i = (((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[5].o)))->F_y) + ((frame[3].i) * (frame[7].i)));
	LINE_NUMBER(387);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tile_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, (frame[8].i), (frame[9].i));
	frame[10].o = sp[0].o;
	LINE_NUMBER(388);
	if ((frame[10].o) == nullptr) goto label_17;
	}
	{
	LINE_NUMBER(389);
	jint temp0 = (jint)((func_mindustry_world_Tile_solid_R_boolean) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_mindustry_world_Tile_solid_R_boolean])(ctx, (frame[10].o));
	if (temp0 == 0) goto label_17;
	}
	{
	LINE_NUMBER(390);
	sp[0].o = (jobject)((func_mindustry_world_Tile_wallDrop_R_mindustry_type_Item) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_mindustry_world_Tile_wallDrop_R_mindustry_type_Item])(ctx, (frame[10].o));
	frame[11].o = sp[0].o;
	LINE_NUMBER(391);
	if ((frame[11].o) == nullptr) goto label_12;
	}
	{
	jint temp0 = (jint)((mindustry_type_Item *) NULL_CHECK((frame[11].o)))->F_hardness;
	sp[0].o = (jobject)getBeamDrill(ctx, frame[0].o);
	if (temp0 > ((jint)((mindustry_world_blocks_production_BeamDrill *) NULL_CHECK(sp[0].o))->F_tier)) goto label_12;
	}
	{
	sp[0].o = (jobject)getBeamDrill(ctx, frame[0].o);
	sp[0].o = (jobject)((mindustry_world_blocks_production_BeamDrill *) NULL_CHECK(sp[0].o))->F_blockedItems;
	if (sp[0].o == nullptr) goto label_21;
	}
	{
	sp[0].o = (jobject)getBeamDrill(ctx, frame[0].o);
	sp[0].o = (jobject)((mindustry_world_blocks_production_BeamDrill *) NULL_CHECK(sp[0].o))->F_blockedItems;
	jint temp0 = (jint)((func_arc_struct_Seq_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[11].o));
	if (temp0 != 0) goto label_12;
	}
label_21:;
	{
	LINE_NUMBER(392);
	sp[0].o = frame[0].o;
	((mindustry_world_blocks_production_BeamDrill$BeamDrillBuild *) NULL_CHECK(sp[0].o))->F_facingAmount = (((jint)((mindustry_world_blocks_production_BeamDrill$BeamDrillBuild *) NULL_CHECK(sp[0].o))->F_facingAmount) + (jint(1)));
	LINE_NUMBER(393);
	sp[0].o = (jobject)((mindustry_world_blocks_production_BeamDrill$BeamDrillBuild *) NULL_CHECK((frame[0].o)))->F_lastItem;
	if (sp[0].o == (frame[11].o)) goto label_23;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_production_BeamDrill$BeamDrillBuild *) NULL_CHECK((frame[0].o)))->F_lastItem;
	if (sp[0].o == nullptr) goto label_23;
	}
	{
	LINE_NUMBER(394);
	frame[1].i = (jint(1));
	}
label_23:;
	{
	LINE_NUMBER(396);
	((mindustry_world_blocks_production_BeamDrill$BeamDrillBuild *) NULL_CHECK((frame[0].o)))->F_lastItem = (jref) (frame[11].o);
	LINE_NUMBER(397);
	frame[6].o = (frame[10].o);
	goto label_12;
	}
label_17:;
	{
	LINE_NUMBER(385);
	INST_IINC(7, 1);
	goto label_11;
	}
label_12:;
	{
	LINE_NUMBER(404);
	sp[0].o = (jobject)((mindustry_world_blocks_production_BeamDrill$BeamDrillBuild *) NULL_CHECK((frame[0].o)))->F_facing;
	if (sp[0].o) {
		ARRAY_ACCESS(jobject, sp[0].o, (frame[4].i)) = (frame[6].o);
	}
	LINE_NUMBER(382);
	INST_IINC(4, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(408);
	if ((frame[1].i) == 0) goto label_27;
	}
	{
	LINE_NUMBER(409);
	((mindustry_world_blocks_production_BeamDrill$BeamDrillBuild *) NULL_CHECK((frame[0].o)))->F_lastItem = (jref) (jobject(nullptr));
	}
label_27:;
	LINE_NUMBER(411);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbyte M_mindustry_world_blocks_production_BeamDrill$BeamDrillBuild_version_R_byte(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/production/BeamDrill$BeamDrillBuild:version", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(415);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_production_BeamDrill$BeamDrillBuild_write_arc_util_io_Writes(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/production/BeamDrill$BeamDrillBuild:write", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(420);
	M_mindustry_gen_Building_write_arc_util_io_Writes(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(421);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_world_blocks_production_BeamDrill$BeamDrillBuild *) NULL_CHECK((frame[0].o)))->F_time));
	LINE_NUMBER(422);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_world_blocks_production_BeamDrill$BeamDrillBuild *) NULL_CHECK((frame[0].o)))->F_warmup));
	LINE_NUMBER(423);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_production_BeamDrill$BeamDrillBuild_read_arc_util_io_Reads_byte(jcontext ctx, jobject self, jobject param0, jbyte param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/production/BeamDrill$BeamDrillBuild:read", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(427);
	M_mindustry_gen_Building_read_arc_util_io_Reads_byte(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	LINE_NUMBER(428);
	if ((frame[2].i) < (jint(1))) goto label_2;
	}
	{
	LINE_NUMBER(429);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_world_blocks_production_BeamDrill$BeamDrillBuild *) NULL_CHECK(sp[0].o))->F_time = temp0;
	LINE_NUMBER(430);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_world_blocks_production_BeamDrill$BeamDrillBuild *) NULL_CHECK(sp[0].o))->F_warmup = temp1;
	}
label_2:;
	LINE_NUMBER(432);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_world_blocks_production_BeamDrill$BeamDrillBuild;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field lastItem
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[2]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

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
}

void *vtable_mindustry_world_blocks_production_BeamDrill$BeamDrillBuild[] {
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
	(void *) M_mindustry_world_blocks_production_BeamDrill$BeamDrillBuild_write_arc_util_io_Writes,
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
	(void *) M_mindustry_gen_Building_sense_mindustry_logic_LAccess_R_double,
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
	(void *) M_mindustry_world_blocks_production_BeamDrill$BeamDrillBuild_read_arc_util_io_Reads_byte,
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
	(void *) M_mindustry_world_blocks_production_BeamDrill$BeamDrillBuild_shouldConsume_R_boolean,
	(void *) M_mindustry_gen_Building_shouldHideConfigure_mindustry_gen_Player_R_boolean,
	(void *) M_mindustry_gen_Building_shouldShowConfigure_mindustry_gen_Player_R_boolean,
	(void *) M_mindustry_gen_Building_wasRecentlyDamaged_R_boolean,
	(void *) M_mindustry_gen_Building_wasRecentlyHealed_float_R_boolean,
	(void *) M_mindustry_gen_Building_relativeTo_mindustry_gen_Building_R_byte,
	(void *) M_mindustry_gen_Building_relativeTo_int_int_R_byte,
	(void *) M_mindustry_gen_Building_relativeTo_mindustry_world_Tile_R_byte,
	(void *) M_mindustry_gen_Building_relativeToEdge_mindustry_world_Tile_R_byte,
	(void *) M_mindustry_world_blocks_production_BeamDrill$BeamDrillBuild_version_R_byte,
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
	(void *) M_mindustry_world_blocks_production_BeamDrill$BeamDrillBuild_draw,
	(void *) M_mindustry_gen_Building_drawCached,
	(void *) M_mindustry_gen_Building_drawConfigure,
	(void *) M_mindustry_gen_Building_drawCracks,
	(void *) M_mindustry_gen_Building_drawDisabled,
	(void *) M_mindustry_gen_Building_drawItemSelection_mindustry_ctype_UnlockableContent,
	(void *) M_mindustry_gen_Building_drawLight,
	(void *) M_mindustry_gen_Building_drawLiquidLight_mindustry_type_Liquid_float,
	(void *) M_mindustry_world_blocks_production_BeamDrill$BeamDrillBuild_drawSelect,
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
	(void *) M_mindustry_world_blocks_production_BeamDrill$BeamDrillBuild_onProximityUpdate,
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
	(void *) M_mindustry_world_blocks_production_BeamDrill$BeamDrillBuild_updateTile,
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
	(void *) M_mindustry_world_blocks_production_BeamDrill$BeamDrillBuild_updateLasers,
	(void *) M_mindustry_world_blocks_production_BeamDrill$BeamDrillBuild_updateFacing,
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
	{ "updateLasers", "()V" },
	{ "updateFacing", "()V" },
};

static FieldMetadata fields[] {
	{ "facing", getArrayClass(&class_mindustry_world_Tile, 1), offsetof(mindustry_world_blocks_production_BeamDrill$BeamDrillBuild, F_facing), "[Lmindustry/world/Tile;", 1 },
	{ "lasers", getArrayClass(&class_arc_math_geom_Point2, 1), offsetof(mindustry_world_blocks_production_BeamDrill$BeamDrillBuild, F_lasers), "[Larc/math/geom/Point2;", 1 },
	{ "lastItem", &class_mindustry_type_Item, offsetof(mindustry_world_blocks_production_BeamDrill$BeamDrillBuild, F_lastItem), "Lmindustry/type/Item;", 1 },
	{ "time", &class_float, offsetof(mindustry_world_blocks_production_BeamDrill$BeamDrillBuild, F_time), "F", 1 },
	{ "warmup", &class_float, offsetof(mindustry_world_blocks_production_BeamDrill$BeamDrillBuild, F_warmup), "F", 1 },
	{ "boostWarmup", &class_float, offsetof(mindustry_world_blocks_production_BeamDrill$BeamDrillBuild, F_boostWarmup), "F", 1 },
	{ "lastDrillSpeed", &class_float, offsetof(mindustry_world_blocks_production_BeamDrill$BeamDrillBuild, F_lastDrillSpeed), "F", 1 },
	{ "facingAmount", &class_int, offsetof(mindustry_world_blocks_production_BeamDrill$BeamDrillBuild, F_facingAmount), "I", 1 },
	{ "this$0", &class_mindustry_world_blocks_production_BeamDrill, offsetof(mindustry_world_blocks_production_BeamDrill$BeamDrillBuild, F_this$0), "Lmindustry/world/blocks/production/BeamDrill;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_blocks_production_BeamDrill$BeamDrillBuild_mindustry_world_blocks_production_BeamDrill, 0, "(Lmindustry/world/blocks/production/BeamDrill;)V", 1 },
	{ "drawSelect", (intptr_t) M_mindustry_world_blocks_production_BeamDrill$BeamDrillBuild_drawSelect, VTABLE_mindustry_world_blocks_production_BeamDrill$BeamDrillBuild_drawSelect, "()V", 1 },
	{ "updateTile", (intptr_t) M_mindustry_world_blocks_production_BeamDrill$BeamDrillBuild_updateTile, VTABLE_mindustry_world_blocks_production_BeamDrill$BeamDrillBuild_updateTile, "()V", 1 },
	{ "shouldConsume", (intptr_t) M_mindustry_world_blocks_production_BeamDrill$BeamDrillBuild_shouldConsume_R_boolean, VTABLE_mindustry_world_blocks_production_BeamDrill$BeamDrillBuild_shouldConsume_R_boolean, "()Z", 1 },
	{ "draw", (intptr_t) M_mindustry_world_blocks_production_BeamDrill$BeamDrillBuild_draw, VTABLE_mindustry_world_blocks_production_BeamDrill$BeamDrillBuild_draw, "()V", 1 },
	{ "onProximityUpdate", (intptr_t) M_mindustry_world_blocks_production_BeamDrill$BeamDrillBuild_onProximityUpdate, VTABLE_mindustry_world_blocks_production_BeamDrill$BeamDrillBuild_onProximityUpdate, "()V", 1 },
	{ "updateLasers", (intptr_t) M_mindustry_world_blocks_production_BeamDrill$BeamDrillBuild_updateLasers, VTABLE_mindustry_world_blocks_production_BeamDrill$BeamDrillBuild_updateLasers, "()V", 4 },
	{ "updateFacing", (intptr_t) M_mindustry_world_blocks_production_BeamDrill$BeamDrillBuild_updateFacing, VTABLE_mindustry_world_blocks_production_BeamDrill$BeamDrillBuild_updateFacing, "()V", 4 },
	{ "version", (intptr_t) M_mindustry_world_blocks_production_BeamDrill$BeamDrillBuild_version_R_byte, VTABLE_mindustry_world_blocks_production_BeamDrill$BeamDrillBuild_version_R_byte, "()B", 1 },
	{ "write", (intptr_t) M_mindustry_world_blocks_production_BeamDrill$BeamDrillBuild_write_arc_util_io_Writes, VTABLE_mindustry_world_blocks_production_BeamDrill$BeamDrillBuild_write_arc_util_io_Writes, "(Larc/util/io/Writes;)V", 1 },
	{ "read", (intptr_t) M_mindustry_world_blocks_production_BeamDrill$BeamDrillBuild_read_arc_util_io_Reads_byte, VTABLE_mindustry_world_blocks_production_BeamDrill$BeamDrillBuild_read_arc_util_io_Reads_byte, "(Larc/util/io/Reads;B)V", 1 },
};

Class class_mindustry_world_blocks_production_BeamDrill$BeamDrillBuild{
		.nativeName = (intptr_t) "mindustry/world/blocks/production/BeamDrill$BeamDrillBuild",
		.parentClass = (intptr_t) &class_mindustry_gen_Building,
		.size = sizeof(mindustry_world_blocks_production_BeamDrill$BeamDrillBuild),
		.classVtable = (intptr_t) vtable_mindustry_world_blocks_production_BeamDrill$BeamDrillBuild,
		.staticInitializer = (intptr_t) clinit_mindustry_world_blocks_production_BeamDrill$BeamDrillBuild,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_world_blocks_production_BeamDrill$BeamDrillBuild,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_world_blocks_production_BeamDrill,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 9,
		.nativeFields = (intptr_t) fields,
		.methodCount = 11,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 312,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_blocks_production_BeamDrill$BeamDrillBuild = registerClass(&class_mindustry_world_blocks_production_BeamDrill$BeamDrillBuild);

}

