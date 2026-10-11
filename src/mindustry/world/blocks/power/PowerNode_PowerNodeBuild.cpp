#include "mindustry/world/blocks/power/PowerNode_PowerNodeBuild.h"
#include "mindustry/world/blocks/power/PowerNode_PowerNodeBuild_invoke_arc_func_Cons_2.h"
#include "mindustry/net/Net.h"
#include "java/lang/Integer.h"
#include "mindustry/world/blocks/power/PowerNode_PowerNodeBuild_invoke_arc_func_Cons_3.h"
#include "mindustry/world/Block.h"
#include "arc/graphics/g2d/Lines.h"
#include "arc/math/geom/Point2.h"
#include "arc/struct/IntSeq.h"
#include "arc/graphics/Color.h"
#include "mindustry/ui/Displayable.h"
#include "arc/graphics/g2d/Draw.h"
#include "arc/func/Cons.h"
#include "arc/func/Intc.h"
#include "mindustry/core/Renderer.h"
#include "arc/struct/Seq.h"
#include "mindustry/world/Tile.h"
#include "mindustry/world/blocks/power/PowerNode_PowerNodeBuild.h"
#include "mindustry/world/modules/PowerModule.h"
#include "arc/math/geom/Position.h"
#include "arc/math/Mathf.h"
#include "mindustry/world/blocks/power/PowerGraph.h"
#include "arc/util/Time.h"
#include "mindustry/gen/Building.h"
#include "java/lang/Object.h"
#include "mindustry/graphics/Pal.h"
#include "mindustry/world/blocks/power/PowerNode.h"
#include "mindustry/world/blocks/power/PowerNode_PowerNodeBuild_invoke_arc_func_Intc_1.h"
#include "mindustry/graphics/Drawf.h"
#include "mindustry/game/Team.h"
#include "java/lang/Class.h"
#include "mindustry/Vars.h"
#include "mindustry/core/World.h"

extern "C" {


void mark_mindustry_world_blocks_power_PowerNode$PowerNodeBuild(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_world_blocks_power_PowerNode$PowerNodeBuild *) object;
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_mindustry_world_blocks_power_PowerNode$PowerNodeBuild(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_gen_Building(ctx);
}

void init_mindustry_world_blocks_power_PowerNode$PowerNodeBuild_mindustry_world_blocks_power_PowerNode(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/PowerNode$PowerNodeBuild:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_power_PowerNode$PowerNodeBuild(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(389);
	((mindustry_world_blocks_power_PowerNode$PowerNodeBuild *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_mindustry_gen_Building(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_power_PowerNode$PowerNodeBuild_created(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/PowerNode$PowerNodeBuild:created", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(393);
	sp[0].o = (jobject)((mindustry_world_blocks_power_PowerNode$PowerNodeBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((mindustry_world_blocks_power_PowerNode *) NULL_CHECK(sp[0].o))->F_autolink) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_power_PowerNode$PowerNodeBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if ((floatCompare(((jfloat)((mindustry_world_blocks_power_PowerNode *) NULL_CHECK(sp[0].o))->F_laserRange), (clinit_mindustry_world_blocks_power_PowerNode(ctx), (jfloat)SF_mindustry_world_blocks_power_PowerNode_maxRange), -1)) <= 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_power_PowerNode$PowerNodeBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	clinit_mindustry_world_blocks_power_PowerNode(ctx);
	SF_mindustry_world_blocks_power_PowerNode_maxRange = ((jfloat)((mindustry_world_blocks_power_PowerNode *) NULL_CHECK(sp[0].o))->F_laserRange);
	}
label_1:;
	{
	LINE_NUMBER(395);
	M_mindustry_gen_Building_created(ctx, (frame[0].o));
	LINE_NUMBER(396);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_power_PowerNode$PowerNodeBuild_placed(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/PowerNode$PowerNodeBuild:placed", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(401);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_power;
	sp[0].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[0].o))->F_links;
	if (((jint)((arc_struct_IntSeq *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_2;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(403);
	sp[0].o = (jobject)((mindustry_world_blocks_power_PowerNode$PowerNodeBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	sp[2].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_power_PowerNode$PowerNodeBuild_invoke_arc_func_Cons_2(ctx);
		auto proxy = (mindustry_world_blocks_power_PowerNode$PowerNodeBuild_invoke_arc_func_Cons_2 *) gcAlloc(ctx, &class_mindustry_world_blocks_power_PowerNode$PowerNodeBuild_invoke_arc_func_Cons_2);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	((func_mindustry_world_blocks_power_PowerNode_getPotentialLinks_mindustry_world_Tile_mindustry_game_Team_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_power_PowerNode_getPotentialLinks_mindustry_world_Tile_mindustry_game_Team_arc_func_Cons])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(409);
	M_mindustry_gen_Building_placed(ctx, (frame[0].o));
	LINE_NUMBER(410);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_power_PowerNode$PowerNodeBuild_dropped(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/PowerNode$PowerNodeBuild:dropped", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(414);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_power;
	sp[0].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[0].o))->F_links;
	((func_arc_struct_IntSeq_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_clear])(ctx, sp[0].o);
	LINE_NUMBER(415);
	((func_mindustry_world_blocks_power_PowerNode$PowerNodeBuild_updatePowerGraph) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_power_PowerNode$PowerNodeBuild_updatePowerGraph])(ctx, (frame[0].o));
	LINE_NUMBER(416);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_power_PowerNode$PowerNodeBuild_onConfigureBuildTapped_mindustry_gen_Building_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/PowerNode$PowerNodeBuild:onConfigureBuildTapped", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(420);
	sp[0].o = (jobject)((mindustry_world_blocks_power_PowerNode$PowerNodeBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)((func_mindustry_world_blocks_power_PowerNode_linkValid_mindustry_gen_Building_mindustry_gen_Building_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_power_PowerNode_linkValid_mindustry_gen_Building_mindustry_gen_Building_R_boolean])(ctx, sp[0].o, (frame[0].o), (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(421);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_mindustry_gen_Building_pos_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_pos_R_int])(ctx, (frame[1].o));
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, temp0);
	((func_mindustry_world_blocks_power_PowerNode$PowerNodeBuild_configure_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_power_PowerNode$PowerNodeBuild_configure_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(422);
	popStackFrame(ctx);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(425);
	if ((frame[0].o) != (frame[1].o)) goto label_4;
	}
	{
	LINE_NUMBER(426);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_power;
	sp[0].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[0].o))->F_links;
	if (((jint)((arc_struct_IntSeq *) NULL_CHECK(sp[0].o))->F_size) != 0) goto label_6;
	}
	{
	LINE_NUMBER(427);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(428);
	sp[0].o = (jobject)((mindustry_world_blocks_power_PowerNode$PowerNodeBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	sp[2].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_power_PowerNode$PowerNodeBuild_invoke_arc_func_Cons_3(ctx);
		auto proxy = (mindustry_world_blocks_power_PowerNode$PowerNodeBuild_invoke_arc_func_Cons_3 *) gcAlloc(ctx, &class_mindustry_world_blocks_power_PowerNode$PowerNodeBuild_invoke_arc_func_Cons_3);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	((func_mindustry_world_blocks_power_PowerNode_getPotentialLinks_mindustry_world_Tile_mindustry_game_Team_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_power_PowerNode_getPotentialLinks_mindustry_world_Tile_mindustry_game_Team_arc_func_Cons])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(433);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_arc_struct_Seq_toArray_java_lang_Class_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_Seq_toArray_java_lang_Class_R_Array1_java_lang_Object])(ctx, (frame[2].o), (((jobject) &class_arc_math_geom_Point2)));
	((func_mindustry_world_blocks_power_PowerNode$PowerNodeBuild_configure_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_power_PowerNode$PowerNodeBuild_configure_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(434);
	goto label_11;
	}
label_6:;
	{
	LINE_NUMBER(435);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_arc_math_geom_Point2, (jint(0)));
	((func_mindustry_world_blocks_power_PowerNode$PowerNodeBuild_configure_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_power_PowerNode$PowerNodeBuild_configure_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	}
label_11:;
	{
	LINE_NUMBER(437);
	((func_mindustry_world_blocks_power_PowerNode$PowerNodeBuild_deselect) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_power_PowerNode$PowerNodeBuild_deselect])(ctx, (frame[0].o));
	LINE_NUMBER(438);
	popStackFrame(ctx);
	return (jint(0));
	}
label_4:;
	{
	LINE_NUMBER(441);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_power_PowerNode$PowerNodeBuild_drawSelect(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/PowerNode$PowerNodeBuild:drawSelect", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(446);
	M_mindustry_gen_Building_drawSelect(ctx, (frame[0].o));
	LINE_NUMBER(448);
	sp[0].o = (jobject)((mindustry_world_blocks_power_PowerNode$PowerNodeBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((mindustry_world_blocks_power_PowerNode *) NULL_CHECK(sp[0].o))->F_drawRange) != 0) goto label_2;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(450);
	SM_arc_graphics_g2d_Lines_stroke_float(ctx, (jfloat(1)));
	LINE_NUMBER(452);
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_accent;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(453);
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	sp[0].o = (jobject)((mindustry_world_blocks_power_PowerNode$PowerNodeBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	SM_mindustry_graphics_Drawf_circles_float_float_float(ctx, temp0, temp1, (((jfloat)((mindustry_world_blocks_power_PowerNode *) NULL_CHECK(sp[0].o))->F_laserRange) * (jfloat(8.0f))));
	LINE_NUMBER(454);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(455);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_power_PowerNode$PowerNodeBuild_drawConfigure(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/PowerNode$PowerNodeBuild:drawConfigure", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(460);
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, sp[0].o);
	jfloat temp2 = ((jfloat((((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size) * (8)))) / (jfloat(2))) + (jfloat(1));
	jfloat temp3 = (jfloat)SM_arc_math_Mathf_absin_float_float_float_R_float(ctx, (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time), (jfloat(4.0f)), (jfloat(1)));
	SM_mindustry_graphics_Drawf_circles_float_float_float(ctx, temp0, temp1, (temp2 + temp3));
	LINE_NUMBER(462);
	sp[0].o = (jobject)((mindustry_world_blocks_power_PowerNode$PowerNodeBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((mindustry_world_blocks_power_PowerNode *) NULL_CHECK(sp[0].o))->F_drawRange) == 0) goto label_2;
	}
	{
	LINE_NUMBER(463);
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	sp[0].o = (jobject)((mindustry_world_blocks_power_PowerNode$PowerNodeBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	SM_mindustry_graphics_Drawf_circles_float_float_float(ctx, temp0, temp1, (((jfloat)((mindustry_world_blocks_power_PowerNode *) NULL_CHECK(sp[0].o))->F_laserRange) * (jfloat(8.0f))));
	LINE_NUMBER(465);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	jfloat temp2 = jfloat(((jint)((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_x));
	sp[0].o = (jobject)((mindustry_world_blocks_power_PowerNode$PowerNodeBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	frame[1].i = (jint(((temp2 - ((jfloat)((mindustry_world_blocks_power_PowerNode *) NULL_CHECK(sp[0].o))->F_laserRange)) - (jfloat(2)))));
	}
label_5:;
	{
	jfloat temp0 = jfloat((frame[1].i));
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	jfloat temp1 = jfloat(((jint)((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_x));
	sp[0].o = (jobject)((mindustry_world_blocks_power_PowerNode$PowerNodeBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if ((floatCompare(temp0, ((temp1 + ((jfloat)((mindustry_world_blocks_power_PowerNode *) NULL_CHECK(sp[0].o))->F_laserRange)) + (jfloat(2))), 1)) > 0) goto label_6;
	}
	{
	LINE_NUMBER(466);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	jfloat temp0 = jfloat(((jint)((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_y));
	sp[0].o = (jobject)((mindustry_world_blocks_power_PowerNode$PowerNodeBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	frame[2].i = (jint(((temp0 - ((jfloat)((mindustry_world_blocks_power_PowerNode *) NULL_CHECK(sp[0].o))->F_laserRange)) - (jfloat(2)))));
	}
label_8:;
	{
	jfloat temp0 = jfloat((frame[2].i));
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	jfloat temp1 = jfloat(((jint)((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_y));
	sp[0].o = (jobject)((mindustry_world_blocks_power_PowerNode$PowerNodeBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if ((floatCompare(temp0, ((temp1 + ((jfloat)((mindustry_world_blocks_power_PowerNode *) NULL_CHECK(sp[0].o))->F_laserRange)) + (jfloat(2))), 1)) > 0) goto label_9;
	}
	{
	LINE_NUMBER(467);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_build_int_int_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_build_int_int_R_mindustry_gen_Building])(ctx, sp[0].o, (frame[1].i), (frame[2].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(469);
	if ((frame[3].o) == (frame[0].o)) goto label_12;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_power_PowerNode$PowerNodeBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)((func_mindustry_world_blocks_power_PowerNode_linkValid_mindustry_gen_Building_mindustry_gen_Building_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_power_PowerNode_linkValid_mindustry_gen_Building_mindustry_gen_Building_boolean_R_boolean])(ctx, sp[0].o, (frame[0].o), (frame[3].o), (jint(0)));
	if (temp0 == 0) goto label_12;
	}
	{
	LINE_NUMBER(470);
	jint temp0 = (jint)((func_mindustry_world_blocks_power_PowerNode$PowerNodeBuild_linked_mindustry_gen_Building_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_power_PowerNode$PowerNodeBuild_linked_mindustry_gen_Building_R_boolean])(ctx, (frame[0].o), (frame[3].o));
	frame[4].i = temp0;
	LINE_NUMBER(472);
	if ((frame[4].i) == 0) goto label_12;
	}
	{
	LINE_NUMBER(473);
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[3].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[3].o)))->F_y;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[3].o)))->F_block;
	jfloat temp2 = ((jfloat((((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size) * (8)))) / (jfloat(2))) + (jfloat(1));
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_place;
	SM_mindustry_graphics_Drawf_square_float_float_float_arc_graphics_Color(ctx, temp0, temp1, temp2, sp[0].o);
	}
label_12:;
	{
	LINE_NUMBER(466);
	INST_IINC(2, 1);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(465);
	INST_IINC(1, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(479);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	goto label_16;
	}
label_2:;
	{
	LINE_NUMBER(481);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_power;
	sp[0].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[0].o))->F_links;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_power_PowerNode$PowerNodeBuild_invoke_arc_func_Intc_1(ctx);
		auto proxy = (mindustry_world_blocks_power_PowerNode$PowerNodeBuild_invoke_arc_func_Intc_1 *) gcAlloc(ctx, &class_mindustry_world_blocks_power_PowerNode$PowerNodeBuild_invoke_arc_func_Intc_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_struct_IntSeq_each_arc_func_Intc) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_each_arc_func_Intc])(ctx, sp[0].o, sp[1].o);
	}
label_16:;
	LINE_NUMBER(488);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_power_PowerNode$PowerNodeBuild_drawCached(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/PowerNode$PowerNodeBuild:drawCached", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(492);
	M_mindustry_gen_Building_draw(ctx, (frame[0].o));
	LINE_NUMBER(493);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_power_PowerNode$PowerNodeBuild_draw(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/PowerNode$PowerNodeBuild:draw", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(497);
	jint temp0 = (jint)SM_arc_math_Mathf_zero_float_R_boolean(ctx, (clinit_mindustry_core_Renderer(ctx), (jfloat)SF_mindustry_core_Renderer_laserOpacity));
	if (temp0 != 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_world_blocks_power_PowerNode$PowerNodeBuild_isPayload_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_power_PowerNode$PowerNodeBuild_isPayload_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	clinit_mindustry_game_Team(ctx);
	sp[1].o = (jobject)SF_mindustry_game_Team_derelict;
	if (sp[0].o != sp[1].o) goto label_2;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(499);
	sp[0].o = (jobject)((mindustry_world_blocks_power_PowerNode$PowerNodeBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	SM_arc_graphics_g2d_Draw_z_float(ctx, ((jfloat)((mindustry_world_blocks_power_PowerNode *) NULL_CHECK(sp[0].o))->F_powerLayer));
	LINE_NUMBER(500);
	sp[0].o = (jobject)((mindustry_world_blocks_power_PowerNode$PowerNodeBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_power;
	sp[1].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[1].o))->F_graph;
	jfloat temp0 = (jfloat)((func_mindustry_world_blocks_power_PowerGraph_getSatisfaction_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_blocks_power_PowerGraph_getSatisfaction_R_float])(ctx, sp[1].o);
	((func_mindustry_world_blocks_power_PowerNode_setupColor_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_power_PowerNode_setupColor_float])(ctx, sp[0].o, temp0);
	LINE_NUMBER(502);
	frame[1].i = (jint(0));
	}
label_5:;
	{
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_power;
	sp[0].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[0].o))->F_links;
	if (temp0 >= ((jint)((arc_struct_IntSeq *) NULL_CHECK(sp[0].o))->F_size)) goto label_6;
	}
	{
	LINE_NUMBER(503);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_power;
	sp[1].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[1].o))->F_links;
	jint temp0 = (jint)((func_arc_struct_IntSeq_get_int_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_IntSeq_get_int_R_int])(ctx, sp[1].o, (frame[1].i));
	sp[0].o = (jobject)((func_mindustry_core_World_build_int_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_build_int_R_mindustry_gen_Building])(ctx, sp[0].o, temp0);
	frame[2].o = sp[0].o;
	LINE_NUMBER(505);
	sp[0].o = (jobject)((mindustry_world_blocks_power_PowerNode$PowerNodeBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp1 = (jint)((func_mindustry_world_blocks_power_PowerNode_linkValid_mindustry_gen_Building_mindustry_gen_Building_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_power_PowerNode_linkValid_mindustry_gen_Building_mindustry_gen_Building_R_boolean])(ctx, sp[0].o, (frame[0].o), (frame[2].o));
	if (temp1 != 0) goto label_9;
	}
	goto label_10;
label_9:;
	{
	LINE_NUMBER(507);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[2].o)))->F_block;
	if ((isInstance(ctx, sp[0].o, &class_mindustry_world_blocks_power_PowerNode)) == 0) goto label_11;
	}
	{
	if (((jint)((mindustry_gen_Building *) NULL_CHECK((frame[2].o)))->F_id) < ((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_id)) goto label_11;
	}
	goto label_10;
label_11:;
	{
	LINE_NUMBER(509);
	sp[0].o = (jobject)((mindustry_world_blocks_power_PowerNode$PowerNodeBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	jfloat temp2 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[2].o)))->F_x;
	jfloat temp3 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[2].o)))->F_y;
	sp[1].o = (jobject)((mindustry_world_blocks_power_PowerNode$PowerNodeBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp4 = (jint)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_size;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[2].o)))->F_block;
	((func_mindustry_world_blocks_power_PowerNode_drawLaser_float_float_float_float_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_power_PowerNode_drawLaser_float_float_float_float_int_int])(ctx, sp[0].o, temp0, temp1, temp2, temp3, temp4, ((jint)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_size));
	}
label_10:;
	{
	LINE_NUMBER(502);
	INST_IINC(1, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(512);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(513);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_power_PowerNode$PowerNodeBuild_linked_mindustry_gen_Building_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/PowerNode$PowerNodeBuild:linked", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(516);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_power;
	sp[0].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[0].o))->F_links;
	jint temp0 = (jint)((func_mindustry_gen_Building_pos_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_pos_R_int])(ctx, (frame[1].o));
	jint temp1 = (jint)((func_arc_struct_IntSeq_contains_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_contains_int_R_boolean])(ctx, sp[0].o, temp0);
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_blocks_power_PowerNode$PowerNodeBuild_config_R_Array1_arc_math_geom_Point2(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/PowerNode$PowerNodeBuild:config", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(521);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_power;
	sp[0].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[0].o))->F_links;
	sp[0].o = (jobject)createArray(ctx, &class_arc_math_geom_Point2, ((jint)((arc_struct_IntSeq *) NULL_CHECK(sp[0].o))->F_size));
	frame[1].o = sp[0].o;
	LINE_NUMBER(522);
	frame[2].i = (jint(0));
	}
label_2:;
	{
	if ((frame[2].i) >= (((jarray) nullCheck(ctx, (frame[1].o)))->length)) goto label_3;
	}
	{
	LINE_NUMBER(523);
	sp[0].o = frame[1].o;
	jint temp0 = frame[2].i;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_power;
	sp[1].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[1].o))->F_links;
	jint temp1 = (jint)((func_arc_struct_IntSeq_get_int_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_IntSeq_get_int_R_int])(ctx, sp[1].o, (frame[2].i));
	sp[1].o = (jobject)SM_arc_math_geom_Point2_unpack_int_R_arc_math_geom_Point2(ctx, temp1);
	sp[2].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	jint temp2 = (jint)((mindustry_world_Tile *) NULL_CHECK(sp[2].o))->F_x;
	sp[2].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	sp[1].o = (jobject)((func_arc_math_geom_Point2_sub_int_int_R_arc_math_geom_Point2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Point2_sub_int_int_R_arc_math_geom_Point2])(ctx, sp[1].o, temp2, ((jint)((mindustry_world_Tile *) NULL_CHECK(sp[2].o))->F_y));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(522);
	INST_IINC(2, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(525);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_blocks_power_PowerNode$PowerNodeBuild_config_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/PowerNode$PowerNodeBuild:config", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(389);
	sp[0].o = (jobject)((func_mindustry_world_blocks_power_PowerNode$PowerNodeBuild_config_R_Array1_arc_math_geom_Point2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_power_PowerNode$PowerNodeBuild_config_R_Array1_arc_math_geom_Point2])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_power_PowerNode$PowerNodeBuild_lambda$drawConfigure$0_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/PowerNode$PowerNodeBuild:lambda$drawConfigure$0", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(482);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_build_int_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_build_int_R_mindustry_gen_Building])(ctx, sp[0].o, (frame[1].i));
	frame[2].o = sp[0].o;
	LINE_NUMBER(483);
	if ((frame[2].o) == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_power_PowerNode$PowerNodeBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)((func_mindustry_world_blocks_power_PowerNode_linkValid_mindustry_gen_Building_mindustry_gen_Building_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_power_PowerNode_linkValid_mindustry_gen_Building_mindustry_gen_Building_boolean_R_boolean])(ctx, sp[0].o, (frame[0].o), (frame[2].o), (jint(0)));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(484);
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[2].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[2].o)))->F_y;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[2].o)))->F_block;
	jfloat temp2 = ((jfloat((((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size) * (8)))) / (jfloat(2))) + (jfloat(1));
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_place;
	SM_mindustry_graphics_Drawf_square_float_float_float_arc_graphics_Color(ctx, temp0, temp1, temp2, sp[0].o);
	}
label_2:;
	LINE_NUMBER(486);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_power_PowerNode$PowerNodeBuild_lambda$onConfigureBuildTapped$0_arc_struct_Seq_mindustry_gen_Building(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/PowerNode$PowerNodeBuild:lambda$onConfigureBuildTapped$0", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(429);
	jint temp0 = (jint)SM_mindustry_world_blocks_power_PowerNode_insulated_mindustry_gen_Building_mindustry_gen_Building_R_boolean(ctx, (frame[0].o), (frame[2].o));
	if (temp0 != 0) goto label_1;
	}
	{
	jint temp0 = (jint)((arc_struct_Seq *) NULL_CHECK((frame[1].o)))->F_size;
	sp[0].o = (jobject)((mindustry_world_blocks_power_PowerNode$PowerNodeBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (temp0 >= ((jint)((mindustry_world_blocks_power_PowerNode *) NULL_CHECK(sp[0].o))->F_maxNodes)) goto label_1;
	}
	{
	LINE_NUMBER(430);
	sp[0].o = frame[1].o;
	clinit_arc_math_geom_Point2(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Point2);
	jint temp0 = (jint)((func_mindustry_gen_Building_tileX_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_gen_Building_tileX_R_int])(ctx, (frame[2].o));
	sp[2].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	jint temp1 = temp0 - ((jint)((mindustry_world_Tile *) NULL_CHECK(sp[2].o))->F_x);
	jint temp2 = (jint)((func_mindustry_gen_Building_tileY_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_gen_Building_tileY_R_int])(ctx, (frame[2].o));
	sp[2].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	init_arc_math_geom_Point2_int_int(ctx, sp[1].o, temp1, (temp2 - ((jint)((mindustry_world_Tile *) NULL_CHECK(sp[2].o))->F_y)));
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	}
label_1:;
	LINE_NUMBER(432);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_power_PowerNode$PowerNodeBuild_lambda$placed$0_mindustry_gen_Building(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/PowerNode$PowerNodeBuild:lambda$placed$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(404);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_power;
	sp[0].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[0].o))->F_links;
	jint temp0 = (jint)((func_mindustry_gen_Building_pos_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_pos_R_int])(ctx, (frame[1].o));
	jint temp1 = (jint)((func_arc_struct_IntSeq_contains_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_contains_int_R_boolean])(ctx, sp[0].o, temp0);
	if (temp1 != 0) goto label_1;
	}
	{
	LINE_NUMBER(405);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_mindustry_gen_Building_pos_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_pos_R_int])(ctx, (frame[1].o));
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, temp0);
	((func_mindustry_world_blocks_power_PowerNode$PowerNodeBuild_configureAny_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_power_PowerNode$PowerNodeBuild_configureAny_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	}
label_1:;
	LINE_NUMBER(407);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_world_blocks_power_PowerNode$PowerNodeBuild[] {
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
	(void *) M_mindustry_gen_Building_write_arc_util_io_Writes,
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
	(void *) M_mindustry_world_blocks_power_PowerNode$PowerNodeBuild_config_R_java_lang_Object,
	(void *) M_mindustry_gen_Building_getPayloads_R_mindustry_type_PayloadSeq,
	(void *) M_mindustry_gen_Building_findClosestEdge_arc_math_geom_Position_arc_func_Boolf_R_mindustry_world_Tile,
	(void *) M_mindustry_gen_Building_getPayload_R_mindustry_world_blocks_payloads_Payload,
	(void *) M_mindustry_gen_Building_takePayload_R_mindustry_world_blocks_payloads_Payload,
	(void *) M_mindustry_gen_Building_onRepaired,
	(void *) M_mindustry_world_blocks_power_PowerNode$PowerNodeBuild_placed,
	(void *) M_mindustry_gen_Building_playerPlaced_java_lang_Object,
	(void *) M_mindustry_gen_Building_read_arc_util_io_Reads_byte,
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
	(void *) M_mindustry_world_blocks_power_PowerNode$PowerNodeBuild_onConfigureBuildTapped_mindustry_gen_Building_R_boolean,
	(void *) M_mindustry_gen_Building_onConfigureTapped_float_float_R_boolean,
	(void *) M_mindustry_gen_Building_payloadCheck_int_R_boolean,
	(void *) M_mindustry_gen_Building_productionValid_R_boolean,
	(void *) M_mindustry_gen_Building_put_mindustry_type_Item_R_boolean,
	(void *) M_mindustry_gen_Building_shouldConsume_R_boolean,
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
	(void *) M_mindustry_world_blocks_power_PowerNode$PowerNodeBuild_created,
	(void *) M_mindustry_gen_Building_damage_mindustry_gen_Bullet_mindustry_game_Team_float,
	(void *) M_mindustry_gen_Building_damage_mindustry_game_Team_float,
	(void *) M_mindustry_gen_Building_deselect,
	(void *) M_mindustry_gen_Building_displayBars_arc_scene_ui_layout_Table,
	(void *) M_mindustry_gen_Building_displayConsumption_arc_scene_ui_layout_Table,
	(void *) M_mindustry_world_blocks_power_PowerNode$PowerNodeBuild_draw,
	(void *) M_mindustry_world_blocks_power_PowerNode$PowerNodeBuild_drawCached,
	(void *) M_mindustry_world_blocks_power_PowerNode$PowerNodeBuild_drawConfigure,
	(void *) M_mindustry_gen_Building_drawCracks,
	(void *) M_mindustry_gen_Building_drawDisabled,
	(void *) M_mindustry_gen_Building_drawItemSelection_mindustry_ctype_UnlockableContent,
	(void *) M_mindustry_gen_Building_drawLight,
	(void *) M_mindustry_gen_Building_drawLiquidLight_mindustry_type_Liquid_float,
	(void *) M_mindustry_world_blocks_power_PowerNode$PowerNodeBuild_drawSelect,
	(void *) M_mindustry_gen_Building_drawStatus,
	(void *) M_mindustry_gen_Building_drawTeam,
	(void *) M_mindustry_gen_Building_drawTeamTop,
	(void *) M_mindustry_world_blocks_power_PowerNode$PowerNodeBuild_dropped,
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
	(void *) M_mindustry_gen_Building_updateTile,
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
	(void *) M_mindustry_world_blocks_power_PowerNode$PowerNodeBuild_lambda$placed$0_mindustry_gen_Building,
	(void *) M_mindustry_world_blocks_power_PowerNode$PowerNodeBuild_linked_mindustry_gen_Building_R_boolean,
	(void *) M_mindustry_world_blocks_power_PowerNode$PowerNodeBuild_config_R_Array1_arc_math_geom_Point2,
	(void *) M_mindustry_world_blocks_power_PowerNode$PowerNodeBuild_lambda$drawConfigure$0_int,
	(void *) M_mindustry_world_blocks_power_PowerNode$PowerNodeBuild_lambda$onConfigureBuildTapped$0_arc_struct_Seq_mindustry_gen_Building,
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
	{ "linked", "(Lmindustry/gen/Building;)Z" },
	{ "config", "()[Larc/math/geom/Point2;" },
	{ "lambda$drawConfigure$0", "(I)V" },
	{ "lambda$onConfigureBuildTapped$0", "(Larc/struct/Seq;Lmindustry/gen/Building;)V" },
};

static FieldMetadata fields[] {
	{ "this$0", &class_mindustry_world_blocks_power_PowerNode, offsetof(mindustry_world_blocks_power_PowerNode$PowerNodeBuild, F_this$0), "Lmindustry/world/blocks/power/PowerNode;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_blocks_power_PowerNode$PowerNodeBuild_mindustry_world_blocks_power_PowerNode, 0, "(Lmindustry/world/blocks/power/PowerNode;)V", 1 },
	{ "created", (intptr_t) M_mindustry_world_blocks_power_PowerNode$PowerNodeBuild_created, VTABLE_mindustry_world_blocks_power_PowerNode$PowerNodeBuild_created, "()V", 1 },
	{ "placed", (intptr_t) M_mindustry_world_blocks_power_PowerNode$PowerNodeBuild_placed, VTABLE_mindustry_world_blocks_power_PowerNode$PowerNodeBuild_placed, "()V", 1 },
	{ "dropped", (intptr_t) M_mindustry_world_blocks_power_PowerNode$PowerNodeBuild_dropped, VTABLE_mindustry_world_blocks_power_PowerNode$PowerNodeBuild_dropped, "()V", 1 },
	{ "onConfigureBuildTapped", (intptr_t) M_mindustry_world_blocks_power_PowerNode$PowerNodeBuild_onConfigureBuildTapped_mindustry_gen_Building_R_boolean, VTABLE_mindustry_world_blocks_power_PowerNode$PowerNodeBuild_onConfigureBuildTapped_mindustry_gen_Building_R_boolean, "(Lmindustry/gen/Building;)Z", 1 },
	{ "drawSelect", (intptr_t) M_mindustry_world_blocks_power_PowerNode$PowerNodeBuild_drawSelect, VTABLE_mindustry_world_blocks_power_PowerNode$PowerNodeBuild_drawSelect, "()V", 1 },
	{ "drawConfigure", (intptr_t) M_mindustry_world_blocks_power_PowerNode$PowerNodeBuild_drawConfigure, VTABLE_mindustry_world_blocks_power_PowerNode$PowerNodeBuild_drawConfigure, "()V", 1 },
	{ "drawCached", (intptr_t) M_mindustry_world_blocks_power_PowerNode$PowerNodeBuild_drawCached, VTABLE_mindustry_world_blocks_power_PowerNode$PowerNodeBuild_drawCached, "()V", 1 },
	{ "draw", (intptr_t) M_mindustry_world_blocks_power_PowerNode$PowerNodeBuild_draw, VTABLE_mindustry_world_blocks_power_PowerNode$PowerNodeBuild_draw, "()V", 1 },
	{ "linked", (intptr_t) M_mindustry_world_blocks_power_PowerNode$PowerNodeBuild_linked_mindustry_gen_Building_R_boolean, VTABLE_mindustry_world_blocks_power_PowerNode$PowerNodeBuild_linked_mindustry_gen_Building_R_boolean, "(Lmindustry/gen/Building;)Z", 4 },
	{ "config", (intptr_t) M_mindustry_world_blocks_power_PowerNode$PowerNodeBuild_config_R_Array1_arc_math_geom_Point2, VTABLE_mindustry_world_blocks_power_PowerNode$PowerNodeBuild_config_R_Array1_arc_math_geom_Point2, "()[Larc/math/geom/Point2;", 1 },
	{ "config", (intptr_t) M_mindustry_world_blocks_power_PowerNode$PowerNodeBuild_config_R_java_lang_Object, VTABLE_mindustry_world_blocks_power_PowerNode$PowerNodeBuild_config_R_java_lang_Object, "()Ljava/lang/Object;", 4161 },
	{ "lambda$drawConfigure$0", (intptr_t) M_mindustry_world_blocks_power_PowerNode$PowerNodeBuild_lambda$drawConfigure$0_int, VTABLE_mindustry_world_blocks_power_PowerNode$PowerNodeBuild_lambda$drawConfigure$0_int, "(I)V", 4098 },
	{ "lambda$onConfigureBuildTapped$0", (intptr_t) M_mindustry_world_blocks_power_PowerNode$PowerNodeBuild_lambda$onConfigureBuildTapped$0_arc_struct_Seq_mindustry_gen_Building, VTABLE_mindustry_world_blocks_power_PowerNode$PowerNodeBuild_lambda$onConfigureBuildTapped$0_arc_struct_Seq_mindustry_gen_Building, "(Larc/struct/Seq;Lmindustry/gen/Building;)V", 4098 },
	{ "lambda$placed$0", (intptr_t) M_mindustry_world_blocks_power_PowerNode$PowerNodeBuild_lambda$placed$0_mindustry_gen_Building, VTABLE_mindustry_world_blocks_power_PowerNode$PowerNodeBuild_lambda$placed$0_mindustry_gen_Building, "(Lmindustry/gen/Building;)V", 4098 },
};

Class class_mindustry_world_blocks_power_PowerNode$PowerNodeBuild{
		.nativeName = (intptr_t) "mindustry/world/blocks/power/PowerNode$PowerNodeBuild",
		.parentClass = (intptr_t) &class_mindustry_gen_Building,
		.size = sizeof(mindustry_world_blocks_power_PowerNode$PowerNodeBuild),
		.classVtable = (intptr_t) vtable_mindustry_world_blocks_power_PowerNode$PowerNodeBuild,
		.staticInitializer = (intptr_t) clinit_mindustry_world_blocks_power_PowerNode$PowerNodeBuild,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_world_blocks_power_PowerNode$PowerNodeBuild,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_world_blocks_power_PowerNode,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 15,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 314,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_blocks_power_PowerNode$PowerNodeBuild = registerClass(&class_mindustry_world_blocks_power_PowerNode$PowerNodeBuild);

}

