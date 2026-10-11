#include "mindustry/world/blocks/distribution/ItemBridge_ItemBridgeBuild.h"
#include "java/lang/Integer.h"
#include "arc/math/geom/Vec2.h"
#include "mindustry/world/blocks/distribution/ItemBridge.h"
#include "mindustry/world/Block.h"
#include "arc/graphics/g2d/Lines.h"
#include "arc/math/geom/Point2.h"
#include "arc/struct/IntSeq.h"
#include "arc/graphics/Color.h"
#include "mindustry/ui/Displayable.h"
#include "mindustry/world/blocks/distribution/ItemBridge_ItemBridgeBuild_invoke_arc_func_Intc_1.h"
#include "arc/graphics/g2d/Draw.h"
#include "arc/func/Intc.h"
#include "mindustry/world/blocks/distribution/ItemBridge_ItemBridgeBuild.h"
#include "mindustry/core/Renderer.h"
#include "arc/util/Tmp.h"
#include "arc/struct/Seq.h"
#include "mindustry/world/Tile.h"
#include "arc/math/geom/Position.h"
#include "arc/math/geom/Geometry.h"
#include "java/lang/Math.h"
#include "arc/math/Mathf.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "mindustry/world/Edges.h"
#include "mindustry/type/Liquid.h"
#include "mindustry/graphics/Lod.h"
#include "arc/util/Time.h"
#include "mindustry/type/Item.h"
#include "mindustry/world/modules/ItemModule.h"
#include "mindustry/gen/Building.h"
#include "arc/util/io/Reads.h"
#include "java/lang/Object.h"
#include "mindustry/graphics/Pal.h"
#include "mindustry/graphics/Drawf.h"
#include "mindustry/game/Team.h"
#include "mindustry/Vars.h"
#include "mindustry/core/World.h"
#include "mindustry/world/modules/LiquidModule.h"
#include "arc/util/io/Writes.h"

extern "C" {


void mark_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild *) object;
	if (self->F_incoming)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_incoming)->clazz)->markFunction)((jobject) self->F_incoming, mark, depth + 1);
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_gen_Building(ctx);
}

void init_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_mindustry_world_blocks_distribution_ItemBridge(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/ItemBridge$ItemBridgeBuild:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(210);
	((mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_mindustry_gen_Building(ctx, (frame[0].o));
	LINE_NUMBER(211);
	((mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild *) NULL_CHECK((frame[0].o)))->F_link = (jint(-1));
	LINE_NUMBER(212);
	sp[0].o = frame[0].o;
	clinit_arc_struct_IntSeq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_IntSeq);
	init_arc_struct_IntSeq_boolean_int(ctx, sp[1].o, (jint(0)), (jint(4)));
	((mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild *) NULL_CHECK(sp[0].o))->F_incoming = (jref) sp[1].o;
	LINE_NUMBER(214);
	((mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild *) NULL_CHECK((frame[0].o)))->F_time = (jfloat(-8.0f));
	LINE_NUMBER(210);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_pickedUp(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/ItemBridge$ItemBridgeBuild:pickedUp", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(220);
	((mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild *) NULL_CHECK((frame[0].o)))->F_link = (jint(-1));
	LINE_NUMBER(221);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_playerPlaced_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/ItemBridge$ItemBridgeBuild:playerPlaced", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(225);
	M_mindustry_gen_Building_playerPlaced_java_lang_Object(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(227);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	jint temp0 = (jint)((mindustry_world_Tile *) NULL_CHECK(sp[1].o))->F_x;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	sp[0].o = (jobject)((func_mindustry_world_blocks_distribution_ItemBridge_findLink_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_distribution_ItemBridge_findLink_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, temp0, ((jint)((mindustry_world_Tile *) NULL_CHECK(sp[1].o))->F_y));
	frame[2].o = sp[0].o;
	LINE_NUMBER(228);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	jint temp1 = (jint)((func_mindustry_world_blocks_distribution_ItemBridge_linkValid_mindustry_world_Tile_mindustry_world_Tile_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_distribution_ItemBridge_linkValid_mindustry_world_Tile_mindustry_world_Tile_R_boolean])(ctx, sp[0].o, sp[1].o, (frame[2].o));
	if (temp1 == 0) goto label_3;
	}
	{
	jint temp0 = (jint)((mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild *) NULL_CHECK((frame[0].o)))->F_link;
	jint temp1 = (jint)((func_mindustry_world_Tile_pos_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_Tile_pos_R_int])(ctx, (frame[2].o));
	if (temp0 == temp1) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_proximity;
	sp[1].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[2].o)))->F_build;
	jint temp0 = (jint)((func_arc_struct_Seq_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_3;
	}
	{
	LINE_NUMBER(229);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[2].o)))->F_build;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	jint temp0 = (jint)((func_mindustry_world_Tile_pos_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_Tile_pos_R_int])(ctx, sp[1].o);
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, temp0);
	((func_mindustry_gen_Building_configure_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_configure_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	}
label_3:;
	{
	LINE_NUMBER(232);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	((mindustry_world_blocks_distribution_ItemBridge *) NULL_CHECK(sp[0].o))->F_lastBuild = (jref) (frame[0].o);
	LINE_NUMBER(233);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_drawSelect(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/ItemBridge$ItemBridgeBuild:drawSelect", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(237);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	clinit_mindustry_Vars(ctx);
	sp[2].o = (jobject)SF_mindustry_Vars_world;
	sp[2].o = (jobject)((func_mindustry_core_World_tile_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_core_World_tile_int_R_mindustry_world_Tile])(ctx, sp[2].o, ((jint)((mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild *) NULL_CHECK((frame[0].o)))->F_link));
	jint temp0 = (jint)((func_mindustry_world_blocks_distribution_ItemBridge_linkValid_mindustry_world_Tile_mindustry_world_Tile_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_distribution_ItemBridge_linkValid_mindustry_world_Tile_mindustry_world_Tile_R_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(238);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_world;
	sp[1].o = (jobject)((func_mindustry_core_World_tile_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_World_tile_int_R_mindustry_world_Tile])(ctx, sp[1].o, ((jint)((mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild *) NULL_CHECK((frame[0].o)))->F_link));
	((func_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_drawInput_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_drawInput_mindustry_world_Tile])(ctx, sp[0].o, sp[1].o);
	}
label_1:;
	{
	LINE_NUMBER(241);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild *) NULL_CHECK((frame[0].o)))->F_incoming;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_invoke_arc_func_Intc_1(ctx);
		auto proxy = (mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_invoke_arc_func_Intc_1 *) gcAlloc(ctx, &class_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_invoke_arc_func_Intc_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_struct_IntSeq_each_arc_func_Intc) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_each_arc_func_Intc])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(243);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(244);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_drawInput_mindustry_world_Tile(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[18];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/ItemBridge$ItemBridgeBuild:drawInput", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(247);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	jint temp0 = (jint)((func_mindustry_world_blocks_distribution_ItemBridge_linkValid_mindustry_world_Tile_mindustry_world_Tile_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_distribution_ItemBridge_linkValid_mindustry_world_Tile_mindustry_world_Tile_boolean_R_boolean])(ctx, sp[0].o, sp[1].o, (frame[1].o), (jint(0)));
	if (temp0 != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(248);
	jint temp0 = (jint)((func_mindustry_world_Tile_pos_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_pos_R_int])(ctx, (frame[1].o));
	if (temp0 != ((jint)((mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild *) NULL_CHECK((frame[0].o)))->F_link)) goto label_2;
	}
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	{
	sp -= 1;
	frame[2].i = sp[0].i;
	LINE_NUMBER(250);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v2;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	jfloat temp0 = (jfloat)((func_mindustry_world_Tile_angleTo_arc_math_geom_Position_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_Tile_angleTo_arc_math_geom_Position_R_float])(ctx, sp[1].o, (frame[1].o));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp0, (jfloat(2)));
	LINE_NUMBER(251);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	jfloat temp1 = (jfloat)((func_mindustry_world_Tile_drawx_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_drawx_R_float])(ctx, sp[0].o);
	frame[3].f = temp1;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	jfloat temp2 = (jfloat)((func_mindustry_world_Tile_drawy_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_drawy_R_float])(ctx, sp[0].o);
	frame[4].f = temp2;
	LINE_NUMBER(252);
	jfloat temp3 = (jfloat)((func_mindustry_world_Tile_drawx_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_drawx_R_float])(ctx, (frame[1].o));
	frame[5].f = temp3;
	jfloat temp4 = (jfloat)((func_mindustry_world_Tile_drawy_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_drawy_R_float])(ctx, (frame[1].o));
	frame[6].f = temp4;
	LINE_NUMBER(253);
	if ((frame[2].i) == 0) goto label_10;
	}
	INST_BIPUSH(100);
	goto label_11;
label_10:;
	INST_ICONST(0);
label_11:;
	{
	sp -= 1;
	jfloat temp0 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, ((jfloat(sp[0].i)) - (fmodf(((clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time) * (jfloat(2))), (jfloat(100.0f))))));
	frame[7].f = (temp0 / (jfloat(100.0f)));
	LINE_NUMBER(254);
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_lerp_float_float_float_R_float(ctx, (frame[5].f), (frame[3].f), (frame[7].f));
	frame[8].f = temp1;
	LINE_NUMBER(255);
	jfloat temp2 = (jfloat)SM_arc_math_Mathf_lerp_float_float_float_R_float(ctx, (frame[6].f), (frame[4].f), (frame[7].f));
	frame[9].f = temp2;
	LINE_NUMBER(257);
	if ((frame[2].i) == 0) goto label_15;
	}
	INST_ALOAD(1);
	goto label_16;
label_15:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((mindustry_gen_Building *) NULL_CHECK(sp[-1].o))->F_tile;
label_16:;
	{
	sp -= 1;
	frame[10].o = sp[0].o;
	LINE_NUMBER(258);
	if ((frame[2].i) == 0) goto label_18;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	sp += 1;
	goto label_19;
	}
label_18:;
	INST_ALOAD(1);
label_19:;
	{
	sp -= 1;
	jint temp0 = (jint)((func_mindustry_world_Tile_absoluteRelativeTo_int_int_R_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_absoluteRelativeTo_int_int_R_byte])(ctx, sp[0].o, ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[10].o)))->F_x), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[10].o)))->F_y));
	frame[11].i = temp0;
	LINE_NUMBER(261);
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_gray;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(262);
	SM_arc_graphics_g2d_Lines_stroke_float(ctx, (jfloat(2.5f)));
	LINE_NUMBER(263);
	SM_arc_graphics_g2d_Lines_square_float_float_float_float(ctx, (frame[5].f), (frame[6].f), (jfloat(2)), (jfloat(45.0f)));
	LINE_NUMBER(264);
	SM_arc_graphics_g2d_Lines_stroke_float(ctx, (jfloat(2.5f)));
	LINE_NUMBER(265);
	jfloat temp1 = frame[3].f;
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v2;
	jfloat temp2 = temp1 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x);
	jfloat temp3 = frame[4].f;
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v2;
	jfloat temp4 = temp3 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y);
	jfloat temp5 = frame[5].f;
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v2;
	jfloat temp6 = temp5 - ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x);
	jfloat temp7 = frame[6].f;
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v2;
	SM_arc_graphics_g2d_Lines_line_float_float_float_float(ctx, temp2, temp4, temp6, (temp7 - ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y)));
	LINE_NUMBER(267);
	if ((frame[2].i) == 0) goto label_26;
	}
	clinit_mindustry_graphics_Pal(ctx);
	(sp++)->o = SF_mindustry_graphics_Pal_place;
	goto label_27;
label_26:;
	clinit_mindustry_graphics_Pal(ctx);
	(sp++)->o = SF_mindustry_graphics_Pal_accent;
label_27:;
	{
	sp -= 1;
	jfloat temp0 = (jfloat)((func_arc_graphics_Color_toFloatBits_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_toFloatBits_R_float])(ctx, sp[0].o);
	frame[12].f = temp0;
	LINE_NUMBER(270);
	SM_arc_graphics_g2d_Draw_color_float(ctx, (frame[12].f));
	LINE_NUMBER(271);
	SM_arc_graphics_g2d_Lines_stroke_float(ctx, (jfloat(1)));
	LINE_NUMBER(272);
	jfloat temp1 = frame[3].f;
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v2;
	jfloat temp2 = temp1 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x);
	jfloat temp3 = frame[4].f;
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v2;
	jfloat temp4 = temp3 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y);
	jfloat temp5 = frame[5].f;
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v2;
	jfloat temp6 = temp5 - ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x);
	jfloat temp7 = frame[6].f;
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v2;
	SM_arc_graphics_g2d_Lines_line_float_float_float_float(ctx, temp2, temp4, temp6, (temp7 - ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y)));
	LINE_NUMBER(274);
	SM_arc_graphics_g2d_Lines_square_float_float_float_float(ctx, (frame[5].f), (frame[6].f), (jfloat(2)), (jfloat(45.0f)));
	LINE_NUMBER(275);
	SM_arc_graphics_g2d_Draw_mixcol_float(ctx, (frame[12].f));
	LINE_NUMBER(276);
	SM_arc_graphics_g2d_Draw_color(ctx);
	LINE_NUMBER(277);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_ItemBridge *) NULL_CHECK(sp[0].o))->F_arrowRegion;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float(ctx, sp[0].o, (frame[8].f), (frame[9].f), (jfloat(((frame[11].i) * (90)))));
	LINE_NUMBER(278);
	SM_arc_graphics_g2d_Draw_mixcol(ctx);
	LINE_NUMBER(279);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_drawConfigure(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/ItemBridge$ItemBridgeBuild:drawConfigure", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(283);
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, sp[0].o);
	jfloat temp2 = ((jfloat((((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size) * (8)))) / (jfloat(2))) + (jfloat(2));
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_accent;
	SM_mindustry_graphics_Drawf_select_float_float_float_arc_graphics_Color(ctx, temp0, temp1, temp2, sp[0].o);
	LINE_NUMBER(285);
	frame[1].i = (jint(1));
	}
label_2:;
	{
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (temp0 > ((jint)((mindustry_world_blocks_distribution_ItemBridge *) NULL_CHECK(sp[0].o))->F_range)) goto label_3;
	}
	{
	LINE_NUMBER(286);
	frame[2].i = (jint(0));
	}
label_5:;
	{
	if ((frame[2].i) >= (jint(4))) goto label_6;
	}
	{
	LINE_NUMBER(287);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	clinit_arc_math_geom_Geometry(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Geometry_d4;
	jint temp0 = ((jint)((arc_math_geom_Point2 *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[2].i)))))->F_x) * (frame[1].i);
	clinit_arc_math_geom_Geometry(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Geometry_d4;
	sp[0].o = (jobject)((func_mindustry_world_Tile_nearby_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_nearby_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, temp0, (((jint)((arc_math_geom_Point2 *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[2].i)))))->F_y) * (frame[1].i)));
	frame[3].o = sp[0].o;
	LINE_NUMBER(288);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	jint temp1 = (jint)((func_mindustry_world_blocks_distribution_ItemBridge_linkValid_mindustry_world_Tile_mindustry_world_Tile_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_distribution_ItemBridge_linkValid_mindustry_world_Tile_mindustry_world_Tile_R_boolean])(ctx, sp[0].o, sp[1].o, (frame[3].o));
	if (temp1 == 0) goto label_9;
	}
	{
	LINE_NUMBER(289);
	jint temp0 = (jint)((func_mindustry_world_Tile_pos_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_world_Tile_pos_R_int])(ctx, (frame[3].o));
	if (temp0 != ((jint)((mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild *) NULL_CHECK((frame[0].o)))->F_link)) goto label_11;
	}
	INST_ICONST(1);
	goto label_12;
label_11:;
	INST_ICONST(0);
label_12:;
	{
	sp -= 1;
	frame[4].i = sp[0].i;
	LINE_NUMBER(291);
	jfloat temp0 = (jfloat)((func_mindustry_world_Tile_drawx_R_float) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_world_Tile_drawx_R_float])(ctx, (frame[3].o));
	jfloat temp1 = (jfloat)((func_mindustry_world_Tile_drawy_R_float) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_world_Tile_drawy_R_float])(ctx, (frame[3].o));
	sp[0].o = frame[3].o;
	LINE_NUMBER(292);
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, sp[0].o);
	jfloat temp2 = ((jfloat((((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size) * (8)))) / (jfloat(2))) + (jfloat(2));
	sp[0].f = temp0;
	sp[1].f = temp1;
	sp[2].f = temp2;
	sp += 3;
	if ((frame[4].i) == 0) goto label_15;
	}
	INST_FCONST(0);
	goto label_16;
label_15:;
	{
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_absin_float_float_float_R_float(ctx, (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time), (jfloat(4.0f)), (jfloat(1)));
	sp[0].f = temp0;
	sp += 1;
	}
label_16:;
	{
	sp -= 2;
	jfloat temp0 = sp[0].f + sp[1].f;
	sp[0].f = temp0;
	sp += 1;
	if ((frame[4].i) == 0) goto label_17;
	}
	clinit_mindustry_graphics_Pal(ctx);
	(sp++)->o = SF_mindustry_graphics_Pal_place;
	goto label_18;
label_17:;
	clinit_mindustry_graphics_Pal(ctx);
	(sp++)->o = SF_mindustry_graphics_Pal_breakInvalid;
label_18:;
	LINE_NUMBER(291);
	POP_N(4); // Pop method args
	SM_mindustry_graphics_Drawf_select_float_float_float_arc_graphics_Color(ctx, sp[0].f, sp[1].f, sp[2].f, sp[3].o);
label_9:;
	{
	LINE_NUMBER(286);
	INST_IINC(2, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(285);
	INST_IINC(1, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(296);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_onConfigureBuildTapped_mindustry_gen_Building_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/ItemBridge$ItemBridgeBuild:onConfigureBuildTapped", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(301);
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild)) == 0) goto label_1;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild, (frame[1].o)));
	jint temp0 = (jint)((mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild *) NULL_CHECK((frame[2].o)))->F_link;
	jint temp1 = (jint)((func_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_pos_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_pos_R_int])(ctx, (frame[0].o));
	if (temp0 != temp1) goto label_1;
	}
	{
	LINE_NUMBER(302);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_mindustry_gen_Building_pos_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_pos_R_int])(ctx, (frame[1].o));
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, temp0);
	((func_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_configure_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_configure_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(303);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (jint(-1)));
	((func_mindustry_gen_Building_configure_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_configure_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(304);
	popStackFrame(ctx);
	return (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(307);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	sp[2].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_tile;
	jint temp0 = (jint)((func_mindustry_world_blocks_distribution_ItemBridge_linkValid_mindustry_world_Tile_mindustry_world_Tile_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_distribution_ItemBridge_linkValid_mindustry_world_Tile_mindustry_world_Tile_R_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o);
	if (temp0 == 0) goto label_6;
	}
	{
	LINE_NUMBER(308);
	jint temp0 = (jint)((mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild *) NULL_CHECK((frame[0].o)))->F_link;
	jint temp1 = (jint)((func_mindustry_gen_Building_pos_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_pos_R_int])(ctx, (frame[1].o));
	if (temp0 != temp1) goto label_8;
	}
	{
	LINE_NUMBER(309);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (jint(-1)));
	((func_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_configure_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_configure_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	goto label_10;
	}
label_8:;
	{
	LINE_NUMBER(311);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_mindustry_gen_Building_pos_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_pos_R_int])(ctx, (frame[1].o));
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, temp0);
	((func_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_configure_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_configure_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	}
label_10:;
	{
	LINE_NUMBER(313);
	popStackFrame(ctx);
	return (jint(0));
	}
label_6:;
	{
	LINE_NUMBER(315);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_checkIncoming(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/ItemBridge$ItemBridgeBuild:checkIncoming", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(319);
	frame[1].i = (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(320);
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild *) NULL_CHECK((frame[0].o)))->F_incoming;
	if (temp0 >= ((jint)((arc_struct_IntSeq *) NULL_CHECK(sp[0].o))->F_size)) goto label_2;
	}
	{
	LINE_NUMBER(321);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild *) NULL_CHECK((frame[0].o)))->F_incoming;
	sp[0].o = (jobject)((arc_struct_IntSeq *) NULL_CHECK(sp[0].o))->F_items;
	frame[2].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[1].i)));
	LINE_NUMBER(322);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tile_int_R_mindustry_world_Tile])(ctx, sp[0].o, (frame[2].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(323);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	jint temp0 = (jint)((func_mindustry_world_blocks_distribution_ItemBridge_linkValid_mindustry_world_Tile_mindustry_world_Tile_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_distribution_ItemBridge_linkValid_mindustry_world_Tile_mindustry_world_Tile_boolean_R_boolean])(ctx, sp[0].o, sp[1].o, (frame[3].o), (jint(0)));
	if (temp0 == 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[3].o)))->F_build;
	jint temp0 = (jint)((mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild *) NULL_CHECK((checkCast(ctx, &class_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild, sp[0].o))))->F_link;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	jint temp1 = (jint)((func_mindustry_world_Tile_pos_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_pos_R_int])(ctx, sp[0].o);
	if (temp0 == temp1) goto label_7;
	}
label_6:;
	{
	LINE_NUMBER(324);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild *) NULL_CHECK((frame[0].o)))->F_incoming;
	jint temp0 = (jint)((func_arc_struct_IntSeq_removeIndex_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_removeIndex_int_R_int])(ctx, sp[0].o, (frame[1].i));
	LINE_NUMBER(325);
	INST_IINC(1, -1);
	}
label_7:;
	{
	LINE_NUMBER(327);
	INST_IINC(1, 1);
	LINE_NUMBER(328);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(329);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_updateTile(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/ItemBridge$ItemBridgeBuild:updateTile", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(333);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)((func_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_timer_int_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_timer_int_float_R_boolean])(ctx, sp[0].o, ((jint)((mindustry_world_blocks_distribution_ItemBridge *) NULL_CHECK(sp[1].o))->F_timerCheckMoved), (jfloat(30.0f)));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(334);
	((mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild *) NULL_CHECK((frame[0].o)))->F_wasMoved = ((jint)((mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild *) NULL_CHECK((frame[0].o)))->F_moved);
	LINE_NUMBER(335);
	((mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild *) NULL_CHECK((frame[0].o)))->F_moved = (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(339);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild *) NULL_CHECK((frame[0].o)))->F_timeSpeed;
	sp[1].f = temp0;
	sp += 2;
	if (((jint)((mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild *) NULL_CHECK((frame[0].o)))->F_wasMoved) == 0) goto label_4;
	}
	INST_FCONST(1);
	goto label_5;
label_4:;
	INST_FCONST(0);
label_5:;
	{
	sp -= 3;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_approachDelta_float_float_float_R_float(ctx, sp[1].f, sp[2].f, (jfloat(0.016666668f)));
	((mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild *) NULL_CHECK(sp[0].o))->F_timeSpeed = temp0;
	LINE_NUMBER(341);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)((mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild *) NULL_CHECK(sp[0].o))->F_time;
	jfloat temp2 = (jfloat)((mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild *) NULL_CHECK((frame[0].o)))->F_timeSpeed;
	jfloat temp3 = (jfloat)((func_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_delta_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_delta_R_float])(ctx, (frame[0].o));
	((mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild *) NULL_CHECK(sp[0].o))->F_time = (temp1 + (temp2 * temp3));
	LINE_NUMBER(343);
	((func_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_checkIncoming) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_checkIncoming])(ctx, (frame[0].o));
	LINE_NUMBER(345);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tile_int_R_mindustry_world_Tile])(ctx, sp[0].o, ((jint)((mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild *) NULL_CHECK((frame[0].o)))->F_link));
	frame[1].o = sp[0].o;
	LINE_NUMBER(346);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[2].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	jint temp4 = (jint)((func_mindustry_world_blocks_distribution_ItemBridge_linkValid_mindustry_world_Tile_mindustry_world_Tile_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_blocks_distribution_ItemBridge_linkValid_mindustry_world_Tile_mindustry_world_Tile_R_boolean])(ctx, sp[1].o, sp[2].o, (frame[1].o));
	((mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild *) NULL_CHECK(sp[0].o))->F_hadValidLink = temp4;
	LINE_NUMBER(348);
	if (((jint)((mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild *) NULL_CHECK((frame[0].o)))->F_hadValidLink) != 0) goto label_11;
	}
	{
	LINE_NUMBER(349);
	((func_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_doDump) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_doDump])(ctx, (frame[0].o));
	LINE_NUMBER(350);
	((mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild *) NULL_CHECK((frame[0].o)))->F_warmup = (jfloat(0));
	goto label_14;
	}
label_11:;
	{
	LINE_NUMBER(352);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_build;
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild *) NULL_CHECK((checkCast(ctx, &class_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild, sp[0].o))))->F_incoming;
	frame[2].o = sp[0].o;
	LINE_NUMBER(353);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	jint temp0 = (jint)((func_mindustry_world_Tile_pos_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_pos_R_int])(ctx, sp[0].o);
	frame[3].i = temp0;
	LINE_NUMBER(354);
	jint temp1 = (jint)((func_arc_struct_IntSeq_contains_int_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_IntSeq_contains_int_R_boolean])(ctx, (frame[2].o), (frame[3].i));
	if (temp1 != 0) goto label_17;
	}
	{
	LINE_NUMBER(355);
	((func_arc_struct_IntSeq_add_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_IntSeq_add_int])(ctx, (frame[2].o), (frame[3].i));
	}
label_17:;
	{
	LINE_NUMBER(358);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_approachDelta_float_float_float_R_float(ctx, ((jfloat)((mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild *) NULL_CHECK((frame[0].o)))->F_warmup), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_efficiency), (jfloat(0.033333335f)));
	((mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild *) NULL_CHECK(sp[0].o))->F_warmup = temp0;
	LINE_NUMBER(359);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_build;
	((func_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_updateTransport_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_updateTransport_mindustry_gen_Building])(ctx, sp[0].o, sp[1].o);
	}
label_14:;
	LINE_NUMBER(361);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_doDump(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/ItemBridge$ItemBridgeBuild:doDump", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(365);
	jint temp0 = (jint)((func_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_dumpAccumulate_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_dumpAccumulate_R_boolean])(ctx, (frame[0].o));
	LINE_NUMBER(366);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_updateTransport_mindustry_gen_Building(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/ItemBridge$ItemBridgeBuild:updateTransport", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(369);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild *) NULL_CHECK(sp[0].o))->F_transportCounter;
	jfloat temp1 = (jfloat)((func_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_edelta_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_edelta_R_float])(ctx, (frame[0].o));
	((mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild *) NULL_CHECK(sp[0].o))->F_transportCounter = (temp0 + temp1);
	}
label_1:;
	{
	LINE_NUMBER(370);
	jfloat temp0 = (jfloat)((mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild *) NULL_CHECK((frame[0].o)))->F_transportCounter;
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if ((floatCompare(temp0, ((jfloat)((mindustry_world_blocks_distribution_ItemBridge *) NULL_CHECK(sp[0].o))->F_transportTime), -1)) < 0) goto label_2;
	}
	{
	LINE_NUMBER(371);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	sp[0].o = (jobject)((func_mindustry_world_modules_ItemModule_take_R_mindustry_type_Item) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_take_R_mindustry_type_Item])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(372);
	if ((frame[2].o) == nullptr) goto label_5;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Building_acceptItem_mindustry_gen_Building_mindustry_type_Item_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_acceptItem_mindustry_gen_Building_mindustry_type_Item_R_boolean])(ctx, (frame[1].o), (frame[0].o), (frame[2].o));
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(373);
	((func_mindustry_gen_Building_handleItem_mindustry_gen_Building_mindustry_type_Item) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_handleItem_mindustry_gen_Building_mindustry_type_Item])(ctx, (frame[1].o), (frame[0].o), (frame[2].o));
	LINE_NUMBER(374);
	((mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild *) NULL_CHECK((frame[0].o)))->F_moved = (jint(1));
	goto label_8;
	}
label_5:;
	{
	LINE_NUMBER(375);
	if ((frame[2].o) == nullptr) goto label_8;
	}
	{
	LINE_NUMBER(376);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	((func_mindustry_world_modules_ItemModule_add_mindustry_type_Item_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_add_mindustry_type_Item_int])(ctx, sp[0].o, (frame[2].o), (jint(1)));
	LINE_NUMBER(377);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	((func_mindustry_world_modules_ItemModule_undoFlow_mindustry_type_Item) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_undoFlow_mindustry_type_Item])(ctx, sp[0].o, (frame[2].o));
	}
label_8:;
	{
	LINE_NUMBER(379);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild *) NULL_CHECK(sp[0].o))->F_transportCounter;
	sp[1].o = (jobject)((mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	((mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild *) NULL_CHECK(sp[0].o))->F_transportCounter = (temp0 - ((jfloat)((mindustry_world_blocks_distribution_ItemBridge *) NULL_CHECK(sp[1].o))->F_transportTime));
	LINE_NUMBER(380);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(381);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_draw(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/ItemBridge$ItemBridgeBuild:draw", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(385);
	M_mindustry_gen_Building_draw(ctx, (frame[0].o));
	LINE_NUMBER(387);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (jfloat(70.0f)));
	LINE_NUMBER(389);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tile_int_R_mindustry_world_Tile])(ctx, sp[0].o, ((jint)((mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild *) NULL_CHECK((frame[0].o)))->F_link));
	frame[1].o = sp[0].o;
	LINE_NUMBER(390);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	jint temp0 = (jint)((func_mindustry_world_blocks_distribution_ItemBridge_linkValid_mindustry_world_Tile_mindustry_world_Tile_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_distribution_ItemBridge_linkValid_mindustry_world_Tile_mindustry_world_Tile_R_boolean])(ctx, sp[0].o, sp[1].o, (frame[1].o));
	if (temp0 != 0) goto label_4;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_4:;
	{
	LINE_NUMBER(392);
	jint temp0 = (jint)SM_arc_math_Mathf_zero_float_R_boolean(ctx, (clinit_mindustry_core_Renderer(ctx), (jfloat)SF_mindustry_core_Renderer_bridgeOpacity));
	if (temp0 == 0) goto label_5;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_5:;
	{
	LINE_NUMBER(394);
	jint temp0 = (jint)((func_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_relativeTo_int_int_R_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_relativeTo_int_int_R_byte])(ctx, (frame[0].o), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_x), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_y));
	frame[2].i = temp0;
	LINE_NUMBER(396);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((mindustry_world_blocks_distribution_ItemBridge *) NULL_CHECK(sp[0].o))->F_pulse) == 0) goto label_7;
	}
	{
	LINE_NUMBER(397);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Color_white;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_black;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_absin_float_float_float_R_float(ctx, (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time), (jfloat(6.0f)), (jfloat(0.07f)));
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color_arc_graphics_Color_float(ctx, sp[0].o, sp[1].o, temp0);
	}
label_7:;
	{
	LINE_NUMBER(400);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_hasPower) == 0) goto label_9;
	}
	{
	jfloat temp0 = (jfloat)((mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild *) NULL_CHECK((frame[0].o)))->F_warmup;
	sp[0].f = temp0;
	sp += 1;
	goto label_10;
	}
label_9:;
	INST_FCONST(1);
label_10:;
	{
	sp -= 1;
	frame[3].f = sp[0].f;
	LINE_NUMBER(402);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((mindustry_world_blocks_distribution_ItemBridge *) NULL_CHECK(sp[0].o))->F_fadeIn) == 0) goto label_12;
	}
	{
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (frame[3].f), (jfloat(0.25f)));
	sp[0].f = temp0;
	sp += 1;
	goto label_13;
	}
label_12:;
	INST_FCONST(1);
label_13:;
	{
	sp -= 1;
	SM_arc_graphics_g2d_Draw_alpha_float(ctx, (sp[0].f * (clinit_mindustry_core_Renderer(ctx), (jfloat)SF_mindustry_core_Renderer_bridgeOpacity)));
	LINE_NUMBER(404);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_ItemBridge *) NULL_CHECK(sp[0].o))->F_endRegion;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float(ctx, sp[0].o, ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y), (jfloat((((frame[2].i) * (90)) + (90)))));
	LINE_NUMBER(405);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_ItemBridge *) NULL_CHECK(sp[0].o))->F_endRegion;
	jfloat temp0 = (jfloat)((func_mindustry_world_Tile_drawx_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_drawx_R_float])(ctx, (frame[1].o));
	jfloat temp1 = (jfloat)((func_mindustry_world_Tile_drawy_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_drawy_R_float])(ctx, (frame[1].o));
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float(ctx, sp[0].o, temp0, temp1, (jfloat((((frame[2].i) * (90)) + (270)))));
	LINE_NUMBER(407);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	SM_arc_graphics_g2d_Lines_stroke_float(ctx, ((jfloat)((mindustry_world_blocks_distribution_ItemBridge *) NULL_CHECK(sp[0].o))->F_bridgeWidth));
	LINE_NUMBER(409);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y));
	jfloat temp2 = (jfloat)((func_mindustry_world_Tile_worldx_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_worldx_R_float])(ctx, (frame[1].o));
	jfloat temp3 = (jfloat)((func_mindustry_world_Tile_worldy_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_worldy_R_float])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_sub_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_sub_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp2, temp3);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_setLength_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_setLength_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (jfloat(4.0f)));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_scl_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_scl_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (jfloat(-1.0f)));
	LINE_NUMBER(411);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_ItemBridge *) NULL_CHECK(sp[0].o))->F_bridgeRegion;
	jfloat temp4 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp5 = temp4 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x);
	jfloat temp6 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp7 = temp6 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y);
	sp[1].o = frame[1].o;
	LINE_NUMBER(414);
	jfloat temp8 = (jfloat)((func_mindustry_world_Tile_worldx_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_Tile_worldx_R_float])(ctx, sp[1].o);
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp9 = temp8 - ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x);
	sp[1].o = frame[1].o;
	LINE_NUMBER(415);
	jfloat temp10 = (jfloat)((func_mindustry_world_Tile_worldy_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_Tile_worldy_R_float])(ctx, sp[1].o);
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp11 = temp10 - ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y);
	jint temp12 = jint(0);
	LINE_NUMBER(411);
	SM_arc_graphics_g2d_Lines_line_arc_graphics_g2d_TextureRegion_float_float_float_float_boolean(ctx, sp[0].o, temp5, temp7, temp9, temp11, temp12);
	LINE_NUMBER(417);
	jint temp13 = (jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_x;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	jint temp14 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, (temp13 - ((jint)((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_x)));
	jint temp15 = (jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_y;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	jint temp16 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, (temp15 - ((jint)((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_y)));
	jint temp17 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, temp14, temp16);
	frame[4].i = (temp17 - (jint(1)));
	LINE_NUMBER(419);
	SM_arc_graphics_g2d_Draw_color(ctx);
	LINE_NUMBER(421);
	if ((clinit_mindustry_graphics_Lod(ctx), (jint)SF_mindustry_graphics_Lod_l1) == 0) goto label_25;
	}
	{
	LINE_NUMBER(422);
	jfloat temp0 = jfloat(((frame[4].i) * (8)));
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	frame[5].i = (jint((temp0 / ((jfloat)((mindustry_world_blocks_distribution_ItemBridge *) NULL_CHECK(sp[0].o))->F_arrowSpacing))));
	jint temp1 = (jint)SM_arc_math_geom_Geometry_d4x_int_R_int(ctx, (frame[2].i));
	frame[6].i = temp1;
	jint temp2 = (jint)SM_arc_math_geom_Geometry_d4y_int_R_int(ctx, (frame[2].i));
	frame[7].i = temp2;
	LINE_NUMBER(424);
	frame[8].i = (jint(0));
	}
label_30:;
	{
	if ((frame[8].i) >= (frame[5].i)) goto label_25;
	}
	{
	LINE_NUMBER(425);
	jfloat temp0 = jfloat((frame[8].i));
	jfloat temp1 = (jfloat)((mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild *) NULL_CHECK((frame[0].o)))->F_time;
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp2 = temp0 - (temp1 / ((jfloat)((mindustry_world_blocks_distribution_ItemBridge *) NULL_CHECK(sp[0].o))->F_arrowTimeScl));
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp3 = (jfloat)SM_arc_math_Mathf_absin_float_float_float_R_float(ctx, temp2, ((jfloat)((mindustry_world_blocks_distribution_ItemBridge *) NULL_CHECK(sp[0].o))->F_arrowPeriod), (jfloat(1)));
	SM_arc_graphics_g2d_Draw_alpha_float(ctx, (((temp3 * (frame[3].f)) * (clinit_mindustry_core_Renderer(ctx), (jfloat)SF_mindustry_core_Renderer_bridgeOpacity)) * (clinit_mindustry_graphics_Lod(ctx), (jfloat)SF_mindustry_graphics_Lod_alpha1)));
	LINE_NUMBER(426);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_ItemBridge *) NULL_CHECK(sp[0].o))->F_arrowRegion;
	jfloat temp4 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp5 = jfloat((frame[6].i));
	jfloat temp6 = jfloat(4.0f);
	jfloat temp7 = jfloat((frame[8].i));
	sp[1].o = (jobject)((mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp8 = temp6 + (temp7 * ((jfloat)((mindustry_world_blocks_distribution_ItemBridge *) NULL_CHECK(sp[1].o))->F_arrowSpacing));
	sp[1].o = (jobject)((mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp9 = temp4 + (temp5 * (temp8 + ((jfloat)((mindustry_world_blocks_distribution_ItemBridge *) NULL_CHECK(sp[1].o))->F_arrowOffset)));
	jfloat temp10 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	jfloat temp11 = jfloat((frame[7].i));
	jfloat temp12 = jfloat(4.0f);
	jfloat temp13 = jfloat((frame[8].i));
	sp[1].o = (jobject)((mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp14 = temp12 + (temp13 * ((jfloat)((mindustry_world_blocks_distribution_ItemBridge *) NULL_CHECK(sp[1].o))->F_arrowSpacing));
	sp[1].o = (jobject)((mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float(ctx, sp[0].o, temp9, (temp10 + (temp11 * (temp14 + ((jfloat)((mindustry_world_blocks_distribution_ItemBridge *) NULL_CHECK(sp[1].o))->F_arrowOffset)))), ((jfloat((frame[2].i))) * (jfloat(90.0f))));
	LINE_NUMBER(424);
	INST_IINC(8, 1);
	goto label_30;
	}
label_25:;
	{
	LINE_NUMBER(433);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(434);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_acceptItem_mindustry_gen_Building_mindustry_type_Item_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/ItemBridge$ItemBridgeBuild:acceptItem", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(438);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_hasItems) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_team;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = (jint)((func_mindustry_world_modules_ItemModule_total_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_total_R_int])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (temp0 >= ((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_itemCapacity)) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_mindustry_Vars(ctx);
	sp[2].o = (jobject)SF_mindustry_Vars_world;
	sp[2].o = (jobject)((func_mindustry_core_World_tile_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_core_World_tile_int_R_mindustry_world_Tile])(ctx, sp[2].o, ((jint)((mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild *) NULL_CHECK((frame[0].o)))->F_link));
	jint temp0 = (jint)((func_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_checkAccept_mindustry_gen_Building_mindustry_world_Tile_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_checkAccept_mindustry_gen_Building_mindustry_world_Tile_R_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o);
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((mindustry_world_blocks_distribution_ItemBridge *) NULL_CHECK(sp[0].o))->F_noAcceptDisabled) == 0) goto label_2;
	}
	{
	if (((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_enabled) == 0) goto label_1;
	}
label_2:;
	INST_ICONST(1);
	goto label_3;
label_1:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_canDumpLiquid_mindustry_gen_Building_mindustry_type_Liquid_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/ItemBridge$ItemBridgeBuild:canDumpLiquid", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(443);
	jint temp0 = (jint)((func_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_checkDump_mindustry_gen_Building_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_checkDump_mindustry_gen_Building_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_acceptLiquid_mindustry_gen_Building_mindustry_type_Liquid_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/ItemBridge$ItemBridgeBuild:acceptLiquid", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(448);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_hasLiquids) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_team;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((mindustry_world_blocks_distribution_ItemBridge *) NULL_CHECK(sp[0].o))->F_noAcceptDisabled) == 0) goto label_2;
	}
	{
	if (((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_enabled) == 0) goto label_1;
	}
label_2:;
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_liquids;
	LINE_NUMBER(450);
	sp[0].o = (jobject)((func_mindustry_world_modules_LiquidModule_current_R_mindustry_type_Liquid) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_current_R_mindustry_type_Liquid])(ctx, sp[0].o);
	if (sp[0].o == (frame[2].o)) goto label_4;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_liquids;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_liquids;
	sp[1].o = (jobject)((func_mindustry_world_modules_LiquidModule_current_R_mindustry_type_Liquid) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_current_R_mindustry_type_Liquid])(ctx, sp[1].o);
	jfloat temp0 = (jfloat)((func_mindustry_world_modules_LiquidModule_get_mindustry_type_Liquid_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_get_mindustry_type_Liquid_R_float])(ctx, sp[0].o, sp[1].o);
	if ((floatCompare(temp0, (jfloat(0.2f)), 1)) >= 0) goto label_1;
	}
label_4:;
	{
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_mindustry_Vars(ctx);
	sp[2].o = (jobject)SF_mindustry_Vars_world;
	jint temp0 = (jint)((mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild *) NULL_CHECK((frame[0].o)))->F_link;
	LINE_NUMBER(451);
	sp[2].o = (jobject)((func_mindustry_core_World_tile_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_core_World_tile_int_R_mindustry_world_Tile])(ctx, sp[2].o, temp0);
	jint temp1 = (jint)((func_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_checkAccept_mindustry_gen_Building_mindustry_world_Tile_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_checkAccept_mindustry_gen_Building_mindustry_world_Tile_R_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o);
	if (temp1 == 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_6;
label_1:;
	INST_ICONST(0);
label_6:;
	LINE_NUMBER(448);
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_checkAccept_mindustry_gen_Building_mindustry_world_Tile_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/ItemBridge$ItemBridgeBuild:checkAccept", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(455);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_linked_mindustry_gen_Building_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_linked_mindustry_gen_Building_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	if (temp0 == 0) goto label_2;
	}
label_1:;
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(457);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	jint temp0 = (jint)((func_mindustry_world_blocks_distribution_ItemBridge_linkValid_mindustry_world_Tile_mindustry_world_Tile_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_distribution_ItemBridge_linkValid_mindustry_world_Tile_mindustry_world_Tile_R_boolean])(ctx, sp[0].o, sp[1].o, (frame[2].o));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(458);
	jint temp0 = (jint)((func_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_relativeTo_mindustry_world_Tile_R_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_relativeTo_mindustry_world_Tile_R_byte])(ctx, (frame[0].o), (frame[2].o));
	frame[3].i = temp0;
	LINE_NUMBER(459);
	sp[0].o = (jobject)SM_mindustry_world_Edges_getFacingEdge_mindustry_gen_Building_mindustry_gen_Building_R_mindustry_world_Tile(ctx, (frame[1].o), (frame[0].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(460);
	if ((frame[4].o) != nullptr) goto label_7;
	}
	INST_ICONST(-1);
	goto label_8;
label_7:;
	{
	jint temp0 = (jint)((func_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_relativeTo_mindustry_world_Tile_R_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_relativeTo_mindustry_world_Tile_R_byte])(ctx, (frame[0].o), (frame[4].o));
	sp[0].i = temp0;
	sp += 1;
	}
label_8:;
	{
	sp -= 1;
	frame[5].i = sp[0].i;
	LINE_NUMBER(471);
	if ((frame[3].i) == (frame[5].i)) goto label_10;
	}
	INST_ICONST(1);
	goto label_11;
label_10:;
	INST_ICONST(0);
label_11:;
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(474);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_linked_mindustry_gen_Building_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/ItemBridge$ItemBridgeBuild:linked", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(478);
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild)) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_tile;
	sp[2].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	jint temp0 = (jint)((func_mindustry_world_blocks_distribution_ItemBridge_linkValid_mindustry_world_Tile_mindustry_world_Tile_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_distribution_ItemBridge_linkValid_mindustry_world_Tile_mindustry_world_Tile_R_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o);
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild *) NULL_CHECK((checkCast(ctx, &class_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild, (frame[1].o)))))->F_link;
	jint temp1 = (jint)((func_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_pos_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_pos_R_int])(ctx, (frame[0].o));
	if (temp0 != temp1) goto label_1;
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

jbool M_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_canDump_mindustry_gen_Building_mindustry_type_Item_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/ItemBridge$ItemBridgeBuild:canDump", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(483);
	jint temp0 = (jint)((func_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_checkDump_mindustry_gen_Building_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_checkDump_mindustry_gen_Building_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_checkDump_mindustry_gen_Building_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/ItemBridge$ItemBridgeBuild:checkDump", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(487);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tile_int_R_mindustry_world_Tile])(ctx, sp[0].o, ((jint)((mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild *) NULL_CHECK((frame[0].o)))->F_link));
	frame[2].o = sp[0].o;
	LINE_NUMBER(488);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	jint temp0 = (jint)((func_mindustry_world_blocks_distribution_ItemBridge_linkValid_mindustry_world_Tile_mindustry_world_Tile_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_distribution_ItemBridge_linkValid_mindustry_world_Tile_mindustry_world_Tile_R_boolean])(ctx, sp[0].o, sp[1].o, (frame[2].o));
	if (temp0 != 0) goto label_2;
	}
	{
	LINE_NUMBER(489);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_tile;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	sp[0].o = (jobject)SM_mindustry_world_Edges_getFacingEdge_mindustry_world_Tile_mindustry_world_Tile_R_mindustry_world_Tile(ctx, sp[0].o, sp[1].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(490);
	jint temp0 = (jint)((func_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_relativeTo_int_int_R_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_relativeTo_int_int_R_byte])(ctx, (frame[0].o), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[3].o)))->F_x), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[3].o)))->F_y));
	frame[4].i = temp0;
	LINE_NUMBER(492);
	frame[5].i = (jint(0));
	}
label_6:;
	{
	jint temp0 = frame[5].i;
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild *) NULL_CHECK((frame[0].o)))->F_incoming;
	if (temp0 >= ((jint)((arc_struct_IntSeq *) NULL_CHECK(sp[0].o))->F_size)) goto label_7;
	}
	{
	LINE_NUMBER(493);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild *) NULL_CHECK((frame[0].o)))->F_incoming;
	sp[0].o = (jobject)((arc_struct_IntSeq *) NULL_CHECK(sp[0].o))->F_items;
	frame[6].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[5].i)));
	LINE_NUMBER(494);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_arc_math_geom_Point2_x_int_R_short(ctx, (frame[6].i));
	jint temp1 = (jint)SM_arc_math_geom_Point2_y_int_R_short(ctx, (frame[6].i));
	jint temp2 = (jint)((func_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_relativeTo_int_int_R_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_relativeTo_int_int_R_byte])(ctx, sp[0].o, temp0, temp1);
	if (temp2 != (frame[4].i)) goto label_10;
	}
	{
	LINE_NUMBER(495);
	popStackFrame(ctx);
	return (jint(0));
	}
label_10:;
	{
	LINE_NUMBER(492);
	INST_IINC(5, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(498);
	popStackFrame(ctx);
	return (jint(1));
	}
label_2:;
	{
	LINE_NUMBER(501);
	jint temp0 = (jint)((func_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_relativeTo_int_int_R_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_relativeTo_int_int_R_byte])(ctx, (frame[0].o), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[2].o)))->F_x), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[2].o)))->F_y));
	frame[3].i = temp0;
	LINE_NUMBER(502);
	sp[0].o = frame[0].o;
	jint temp1 = (jint)((func_mindustry_gen_Building_tileX_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_tileX_R_int])(ctx, (frame[1].o));
	jint temp2 = (jint)((func_mindustry_gen_Building_tileY_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_tileY_R_int])(ctx, (frame[1].o));
	jint temp3 = (jint)((func_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_relativeTo_int_int_R_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_relativeTo_int_int_R_byte])(ctx, sp[0].o, temp1, temp2);
	frame[4].i = temp3;
	LINE_NUMBER(504);
	if ((frame[3].i) == (frame[4].i)) goto label_14;
	}
	INST_ICONST(1);
	goto label_15;
label_14:;
	INST_ICONST(0);
label_15:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_shouldConsume_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/ItemBridge$ItemBridgeBuild:shouldConsume", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(509);
	if (((jint)((mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild *) NULL_CHECK((frame[0].o)))->F_hadValidLink) == 0) goto label_1;
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

jobject M_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_config_R_arc_math_geom_Point2(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/ItemBridge$ItemBridgeBuild:config", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(514);
	sp[0].o = (jobject)SM_arc_math_geom_Point2_unpack_int_R_arc_math_geom_Point2(ctx, ((jint)((mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild *) NULL_CHECK((frame[0].o)))->F_link));
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	jint temp0 = (jint)((mindustry_world_Tile *) NULL_CHECK(sp[1].o))->F_x;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	sp[0].o = (jobject)((func_arc_math_geom_Point2_sub_int_int_R_arc_math_geom_Point2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Point2_sub_int_int_R_arc_math_geom_Point2])(ctx, sp[0].o, temp0, ((jint)((mindustry_world_Tile *) NULL_CHECK(sp[1].o))->F_y));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbyte M_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_version_R_byte(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/ItemBridge$ItemBridgeBuild:version", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(519);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_write_arc_util_io_Writes(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/ItemBridge$ItemBridgeBuild:write", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(524);
	M_mindustry_gen_Building_write_arc_util_io_Writes(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(525);
	((func_arc_util_io_Writes_i_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_i_int])(ctx, (frame[1].o), ((jint)((mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild *) NULL_CHECK((frame[0].o)))->F_link));
	LINE_NUMBER(526);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild *) NULL_CHECK((frame[0].o)))->F_warmup));
	LINE_NUMBER(527);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild *) NULL_CHECK((frame[0].o)))->F_incoming;
	((func_arc_util_io_Writes_b_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_b_int])(ctx, sp[0].o, ((jint)((arc_struct_IntSeq *) NULL_CHECK(sp[1].o))->F_size));
	LINE_NUMBER(529);
	frame[2].i = (jint(0));
	}
label_5:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild *) NULL_CHECK((frame[0].o)))->F_incoming;
	if (temp0 >= ((jint)((arc_struct_IntSeq *) NULL_CHECK(sp[0].o))->F_size)) goto label_6;
	}
	{
	LINE_NUMBER(530);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild *) NULL_CHECK((frame[0].o)))->F_incoming;
	sp[1].o = (jobject)((arc_struct_IntSeq *) NULL_CHECK(sp[1].o))->F_items;
	((func_arc_util_io_Writes_i_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_i_int])(ctx, sp[0].o, ((jint)ARRAY_ACCESS(jint, sp[1].o, (frame[2].i))));
	LINE_NUMBER(529);
	INST_IINC(2, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(533);
	sp[0].o = frame[1].o;
	sp += 1;
	if (((jint)((mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild *) NULL_CHECK((frame[0].o)))->F_wasMoved) != 0) goto label_9;
	}
	{
	if (((jint)((mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild *) NULL_CHECK((frame[0].o)))->F_moved) == 0) goto label_10;
	}
label_9:;
	INST_ICONST(1);
	goto label_11;
label_10:;
	INST_ICONST(0);
label_11:;
	{
	sp -= 2;
	((func_arc_util_io_Writes_bool_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_bool_boolean])(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(534);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_read_arc_util_io_Reads_byte(jcontext ctx, jobject self, jobject param0, jbyte param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/ItemBridge$ItemBridgeBuild:read", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(538);
	M_mindustry_gen_Building_read_arc_util_io_Reads_byte(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	LINE_NUMBER(539);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_arc_util_io_Reads_i_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_i_R_int])(ctx, (frame[1].o));
	((mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild *) NULL_CHECK(sp[0].o))->F_link = temp0;
	LINE_NUMBER(540);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild *) NULL_CHECK(sp[0].o))->F_warmup = temp1;
	LINE_NUMBER(541);
	jint temp2 = (jint)((func_arc_util_io_Reads_b_R_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_b_R_byte])(ctx, (frame[1].o));
	frame[3].i = temp2;
	LINE_NUMBER(542);
	frame[4].i = (jint(0));
	}
label_5:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_6;
	}
	{
	LINE_NUMBER(543);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild *) NULL_CHECK((frame[0].o)))->F_incoming;
	jint temp0 = (jint)((func_arc_util_io_Reads_i_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_i_R_int])(ctx, (frame[1].o));
	((func_arc_struct_IntSeq_add_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_add_int])(ctx, sp[0].o, temp0);
	LINE_NUMBER(542);
	INST_IINC(4, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(546);
	if ((frame[2].i) < (jint(1))) goto label_9;
	}
	{
	LINE_NUMBER(547);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, (frame[1].o));
	((mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild *) NULL_CHECK(sp[1].o))->F_moved = temp0;
	((mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild *) NULL_CHECK(sp[0].o))->F_wasMoved = temp0;
	}
label_9:;
	LINE_NUMBER(549);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_config_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/ItemBridge$ItemBridgeBuild:config", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(210);
	sp[0].o = (jobject)((func_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_config_R_arc_math_geom_Point2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_config_R_arc_math_geom_Point2])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_lambda$drawSelect$0_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/ItemBridge$ItemBridgeBuild:lambda$drawSelect$0", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(241);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_world;
	sp[1].o = (jobject)((func_mindustry_core_World_tile_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_World_tile_int_R_mindustry_world_Tile])(ctx, sp[1].o, (frame[1].i));
	((func_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_drawInput_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_drawInput_mindustry_world_Tile])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild[] {
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
	(void *) M_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_write_arc_util_io_Writes,
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
	(void *) M_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_config_R_java_lang_Object,
	(void *) M_mindustry_gen_Building_getPayloads_R_mindustry_type_PayloadSeq,
	(void *) M_mindustry_gen_Building_findClosestEdge_arc_math_geom_Position_arc_func_Boolf_R_mindustry_world_Tile,
	(void *) M_mindustry_gen_Building_getPayload_R_mindustry_world_blocks_payloads_Payload,
	(void *) M_mindustry_gen_Building_takePayload_R_mindustry_world_blocks_payloads_Payload,
	(void *) M_mindustry_gen_Building_onRepaired,
	(void *) M_mindustry_gen_Building_placed,
	(void *) M_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_playerPlaced_java_lang_Object,
	(void *) M_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_read_arc_util_io_Reads_byte,
	(void *) M_mindustry_gen_Building_create_mindustry_world_Block_mindustry_game_Team_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_getLiquidDestination_mindustry_gen_Building_mindustry_type_Liquid_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_init_mindustry_world_Tile_mindustry_game_Team_boolean_int_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_nearby_int_int_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_nearby_int_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_getCursor_R_arc_Graphics$Cursor,
	(void *) M_mindustry_gen_Building_getDisplayIcon_R_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_gen_Building_getPowerConnections_arc_struct_Seq_R_arc_struct_Seq,
	(void *) M_mindustry_gen_Building_absorbLasers_R_boolean,
	(void *) M_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_acceptItem_mindustry_gen_Building_mindustry_type_Item_R_boolean,
	(void *) M_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_acceptLiquid_mindustry_gen_Building_mindustry_type_Liquid_R_boolean,
	(void *) M_mindustry_gen_Building_acceptPayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload_R_boolean,
	(void *) M_mindustry_gen_Building_allowDeposit_R_boolean,
	(void *) M_mindustry_gen_Building_allowUpdate_R_boolean,
	(void *) M_mindustry_gen_Building_canBeReplaced_mindustry_world_Block_R_boolean,
	(void *) M_mindustry_gen_Building_canConsume_R_boolean,
	(void *) M_mindustry_gen_Building_canControlSelect_mindustry_gen_Unit_R_boolean,
	(void *) M_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_canDump_mindustry_gen_Building_mindustry_type_Item_R_boolean,
	(void *) M_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_canDumpLiquid_mindustry_gen_Building_mindustry_type_Liquid_R_boolean,
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
	(void *) M_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_onConfigureBuildTapped_mindustry_gen_Building_R_boolean,
	(void *) M_mindustry_gen_Building_onConfigureTapped_float_float_R_boolean,
	(void *) M_mindustry_gen_Building_payloadCheck_int_R_boolean,
	(void *) M_mindustry_gen_Building_productionValid_R_boolean,
	(void *) M_mindustry_gen_Building_put_mindustry_type_Item_R_boolean,
	(void *) M_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_shouldConsume_R_boolean,
	(void *) M_mindustry_gen_Building_shouldHideConfigure_mindustry_gen_Player_R_boolean,
	(void *) M_mindustry_gen_Building_shouldShowConfigure_mindustry_gen_Player_R_boolean,
	(void *) M_mindustry_gen_Building_wasRecentlyDamaged_R_boolean,
	(void *) M_mindustry_gen_Building_wasRecentlyHealed_float_R_boolean,
	(void *) M_mindustry_gen_Building_relativeTo_mindustry_gen_Building_R_byte,
	(void *) M_mindustry_gen_Building_relativeTo_int_int_R_byte,
	(void *) M_mindustry_gen_Building_relativeTo_mindustry_world_Tile_R_byte,
	(void *) M_mindustry_gen_Building_relativeToEdge_mindustry_world_Tile_R_byte,
	(void *) M_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_version_R_byte,
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
	(void *) M_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_draw,
	(void *) M_mindustry_gen_Building_drawCached,
	(void *) M_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_drawConfigure,
	(void *) M_mindustry_gen_Building_drawCracks,
	(void *) M_mindustry_gen_Building_drawDisabled,
	(void *) M_mindustry_gen_Building_drawItemSelection_mindustry_ctype_UnlockableContent,
	(void *) M_mindustry_gen_Building_drawLight,
	(void *) M_mindustry_gen_Building_drawLiquidLight_mindustry_type_Liquid_float,
	(void *) M_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_drawSelect,
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
	(void *) M_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_pickedUp,
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
	(void *) M_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_updateTile,
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
	(void *) M_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_drawInput_mindustry_world_Tile,
	(void *) M_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_checkIncoming,
	(void *) M_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_doDump,
	(void *) M_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_updateTransport_mindustry_gen_Building,
	(void *) M_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_checkAccept_mindustry_gen_Building_mindustry_world_Tile_R_boolean,
	(void *) M_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_linked_mindustry_gen_Building_R_boolean,
	(void *) M_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_checkDump_mindustry_gen_Building_R_boolean,
	(void *) M_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_config_R_arc_math_geom_Point2,
	(void *) M_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_lambda$drawSelect$0_int,
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
	{ "drawInput", "(Lmindustry/world/Tile;)V" },
	{ "checkIncoming", "()V" },
	{ "doDump", "()V" },
	{ "updateTransport", "(Lmindustry/gen/Building;)V" },
	{ "checkAccept", "(Lmindustry/gen/Building;Lmindustry/world/Tile;)Z" },
	{ "linked", "(Lmindustry/gen/Building;)Z" },
	{ "checkDump", "(Lmindustry/gen/Building;)Z" },
	{ "config", "()Larc/math/geom/Point2;" },
	{ "lambda$drawSelect$0", "(I)V" },
};

static FieldMetadata fields[] {
	{ "link", &class_int, offsetof(mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild, F_link), "I", 1 },
	{ "incoming", &class_arc_struct_IntSeq, offsetof(mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild, F_incoming), "Larc/struct/IntSeq;", 1 },
	{ "warmup", &class_float, offsetof(mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild, F_warmup), "F", 1 },
	{ "time", &class_float, offsetof(mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild, F_time), "F", 1 },
	{ "timeSpeed", &class_float, offsetof(mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild, F_timeSpeed), "F", 1 },
	{ "wasMoved", &class_boolean, offsetof(mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild, F_wasMoved), "Z", 1 },
	{ "moved", &class_boolean, offsetof(mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild, F_moved), "Z", 1 },
	{ "hadValidLink", &class_boolean, offsetof(mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild, F_hadValidLink), "Z", 1 },
	{ "transportCounter", &class_float, offsetof(mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild, F_transportCounter), "F", 1 },
	{ "this$0", &class_mindustry_world_blocks_distribution_ItemBridge, offsetof(mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild, F_this$0), "Lmindustry/world/blocks/distribution/ItemBridge;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_mindustry_world_blocks_distribution_ItemBridge, 0, "(Lmindustry/world/blocks/distribution/ItemBridge;)V", 1 },
	{ "pickedUp", (intptr_t) M_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_pickedUp, VTABLE_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_pickedUp, "()V", 1 },
	{ "playerPlaced", (intptr_t) M_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_playerPlaced_java_lang_Object, VTABLE_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_playerPlaced_java_lang_Object, "(Ljava/lang/Object;)V", 1 },
	{ "drawSelect", (intptr_t) M_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_drawSelect, VTABLE_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_drawSelect, "()V", 1 },
	{ "drawInput", (intptr_t) M_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_drawInput_mindustry_world_Tile, VTABLE_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_drawInput_mindustry_world_Tile, "(Lmindustry/world/Tile;)V", 2 },
	{ "drawConfigure", (intptr_t) M_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_drawConfigure, VTABLE_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_drawConfigure, "()V", 1 },
	{ "onConfigureBuildTapped", (intptr_t) M_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_onConfigureBuildTapped_mindustry_gen_Building_R_boolean, VTABLE_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_onConfigureBuildTapped_mindustry_gen_Building_R_boolean, "(Lmindustry/gen/Building;)Z", 1 },
	{ "checkIncoming", (intptr_t) M_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_checkIncoming, VTABLE_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_checkIncoming, "()V", 1 },
	{ "updateTile", (intptr_t) M_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_updateTile, VTABLE_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_updateTile, "()V", 1 },
	{ "doDump", (intptr_t) M_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_doDump, VTABLE_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_doDump, "()V", 1 },
	{ "updateTransport", (intptr_t) M_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_updateTransport_mindustry_gen_Building, VTABLE_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_updateTransport_mindustry_gen_Building, "(Lmindustry/gen/Building;)V", 1 },
	{ "draw", (intptr_t) M_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_draw, VTABLE_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_draw, "()V", 1 },
	{ "acceptItem", (intptr_t) M_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_acceptItem_mindustry_gen_Building_mindustry_type_Item_R_boolean, VTABLE_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_acceptItem_mindustry_gen_Building_mindustry_type_Item_R_boolean, "(Lmindustry/gen/Building;Lmindustry/type/Item;)Z", 1 },
	{ "canDumpLiquid", (intptr_t) M_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_canDumpLiquid_mindustry_gen_Building_mindustry_type_Liquid_R_boolean, VTABLE_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_canDumpLiquid_mindustry_gen_Building_mindustry_type_Liquid_R_boolean, "(Lmindustry/gen/Building;Lmindustry/type/Liquid;)Z", 1 },
	{ "acceptLiquid", (intptr_t) M_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_acceptLiquid_mindustry_gen_Building_mindustry_type_Liquid_R_boolean, VTABLE_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_acceptLiquid_mindustry_gen_Building_mindustry_type_Liquid_R_boolean, "(Lmindustry/gen/Building;Lmindustry/type/Liquid;)Z", 1 },
	{ "checkAccept", (intptr_t) M_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_checkAccept_mindustry_gen_Building_mindustry_world_Tile_R_boolean, VTABLE_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_checkAccept_mindustry_gen_Building_mindustry_world_Tile_R_boolean, "(Lmindustry/gen/Building;Lmindustry/world/Tile;)Z", 4 },
	{ "linked", (intptr_t) M_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_linked_mindustry_gen_Building_R_boolean, VTABLE_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_linked_mindustry_gen_Building_R_boolean, "(Lmindustry/gen/Building;)Z", 4 },
	{ "canDump", (intptr_t) M_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_canDump_mindustry_gen_Building_mindustry_type_Item_R_boolean, VTABLE_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_canDump_mindustry_gen_Building_mindustry_type_Item_R_boolean, "(Lmindustry/gen/Building;Lmindustry/type/Item;)Z", 1 },
	{ "checkDump", (intptr_t) M_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_checkDump_mindustry_gen_Building_R_boolean, VTABLE_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_checkDump_mindustry_gen_Building_R_boolean, "(Lmindustry/gen/Building;)Z", 4 },
	{ "shouldConsume", (intptr_t) M_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_shouldConsume_R_boolean, VTABLE_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_shouldConsume_R_boolean, "()Z", 1 },
	{ "config", (intptr_t) M_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_config_R_arc_math_geom_Point2, VTABLE_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_config_R_arc_math_geom_Point2, "()Larc/math/geom/Point2;", 1 },
	{ "version", (intptr_t) M_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_version_R_byte, VTABLE_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_version_R_byte, "()B", 1 },
	{ "write", (intptr_t) M_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_write_arc_util_io_Writes, VTABLE_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_write_arc_util_io_Writes, "(Larc/util/io/Writes;)V", 1 },
	{ "read", (intptr_t) M_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_read_arc_util_io_Reads_byte, VTABLE_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_read_arc_util_io_Reads_byte, "(Larc/util/io/Reads;B)V", 1 },
	{ "config", (intptr_t) M_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_config_R_java_lang_Object, VTABLE_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_config_R_java_lang_Object, "()Ljava/lang/Object;", 4161 },
	{ "lambda$drawSelect$0", (intptr_t) M_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_lambda$drawSelect$0_int, VTABLE_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild_lambda$drawSelect$0_int, "(I)V", 4098 },
};

Class class_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild{
		.nativeName = (intptr_t) "mindustry/world/blocks/distribution/ItemBridge$ItemBridgeBuild",
		.parentClass = (intptr_t) &class_mindustry_gen_Building,
		.size = sizeof(mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild),
		.classVtable = (intptr_t) vtable_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild,
		.staticInitializer = (intptr_t) clinit_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_world_blocks_distribution_ItemBridge,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 10,
		.nativeFields = (intptr_t) fields,
		.methodCount = 26,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 319,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild = registerClass(&class_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild);

}

