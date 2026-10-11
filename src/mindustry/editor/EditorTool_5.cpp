#include "mindustry/editor/EditorTool_5.h"
#include "mindustry/world/Block.h"
#include "mindustry/editor/EditorTool_5_invoke_arc_func_Boolf_11.h"
#include "mindustry/editor/EditorTool.h"
#include "mindustry/editor/EditorTool_5_invoke_arc_func_Boolf_10.h"
#include "mindustry/editor/EditorTool_5_invoke_arc_func_Boolf_13.h"
#include "mindustry/editor/EditorTool_5_invoke_arc_func_Boolf_12.h"
#include "mindustry/editor/EditorTool_5_invoke_arc_func_Cons_14.h"
#include "mindustry/editor/EditorTool_5_invoke_arc_func_Boolf_15.h"
#include "mindustry/editor/EditorTool_5_invoke_arc_func_Cons_13.h"
#include "mindustry/editor/EditorTool_5_invoke_arc_func_Boolf_14.h"
#include "arc/math/geom/Point2.h"
#include "mindustry/editor/EditorTool_5_invoke_arc_func_Cons_12.h"
#include "mindustry/editor/EditorTool_5_invoke_arc_func_Cons_11.h"
#include "arc/struct/IntSeq.h"
#include "mindustry/editor/EditorTool_5_invoke_arc_func_Cons_10.h"
#include "mindustry/gen/TileOp.h"
#include "arc/input/KeyCode.h"
#include "mindustry/world/Tiles.h"
#include "arc/func/Cons.h"
#include "java/lang/String.h"
#include "mindustry/editor/EditorTool_5.h"
#include "mindustry/editor/EditorTool_5_invoke_arc_func_Boolf_9.h"
#include "mindustry/world/Tile.h"
#include "mindustry/world/blocks/environment/Floor.h"
#include "java/lang/Throwable.h"
#include "arc/func/Boolf.h"
#include "mindustry/editor/EditorTool_5_invoke_arc_func_Boolf_8.h"
#include "arc/math/geom/Geometry.h"
#include "mindustry/world/blocks/environment/OverlayFloor.h"
#include "mindustry/gen/Unit.h"
#include "arc/struct/Bits.h"
#include "arc/util/Structs.h"
#include "java/lang/Enum.h"
#include "java/lang/OutOfMemoryError.h"
#include "mindustry/editor/EditorTool_5_invoke_arc_func_Cons_9.h"
#include "mindustry/content/Blocks.h"
#include "java/lang/Object.h"
#include "mindustry/editor/EditorRenderer.h"
#include "mindustry/editor/EditorTool_5_invoke_arc_func_Cons_17.h"
#include "mindustry/editor/EditorTool_5_invoke_arc_func_Cons_16.h"
#include "mindustry/gen/TileOpData.h"
#include "mindustry/editor/EditorTool_5_invoke_arc_func_Cons_15.h"
#include "mindustry/game/Team.h"
#include "mindustry/Vars.h"
#include "mindustry/core/World.h"
#include "mindustry/editor/MapEditor.h"
#include "java/lang/System.h"

extern "C" {


void mark_mindustry_editor_EditorTool$5(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_editor_EditorTool(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_editor_EditorTool$5 *) object;
	if (self->F_stack)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_stack)->clazz)->markFunction)((jobject) self->F_stack, mark, depth + 1);
}

void clinit_mindustry_editor_EditorTool$5(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_editor_EditorTool(ctx);
}

void init_mindustry_editor_EditorTool$5_java_lang_String_int_arc_input_KeyCode_Array1_java_lang_String(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/EditorTool$5:<init>", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_EditorTool$5(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(97);
	init_mindustry_editor_EditorTool_java_lang_String_int_arc_input_KeyCode_Array1_java_lang_String(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].o), (frame[4].o));
	LINE_NUMBER(99);
	((mindustry_editor_EditorTool *) NULL_CHECK((frame[0].o)))->F_edit = (jint(1));
	LINE_NUMBER(102);
	sp[0].o = frame[0].o;
	clinit_arc_struct_IntSeq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_IntSeq);
	init_arc_struct_IntSeq(ctx, sp[1].o);
	((mindustry_editor_EditorTool$5 *) NULL_CHECK(sp[0].o))->F_stack = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_EditorTool$5_touched_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/EditorTool$5:touched", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(106);
	jint temp0 = frame[1].i;
	jint temp1 = frame[2].i;
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	jint temp2 = (jint)((func_mindustry_editor_MapEditor_width_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapEditor_width_R_int])(ctx, sp[0].o);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	jint temp3 = (jint)((func_mindustry_editor_MapEditor_height_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapEditor_height_R_int])(ctx, sp[0].o);
	jint temp4 = (jint)SM_arc_util_Structs_inBounds_int_int_int_int_R_boolean(ctx, temp0, temp1, temp2, temp3);
	if (temp4 != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(107);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	sp[0].o = (jobject)((func_mindustry_editor_MapEditor_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapEditor_tile_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, (frame[1].i), (frame[2].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(109);
	if ((frame[3].o) != nullptr) goto label_3;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(111);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	sp[0].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK(sp[0].o))->F_drawBlock;
	jint temp0 = (jint)((func_mindustry_world_Block_isMultiblock_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_isMultiblock_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_4;
	}
	{
	if (((jint)((mindustry_editor_EditorTool *) NULL_CHECK((frame[0].o)))->F_mode) == 0) goto label_5;
	}
	{
	if (((jint)((mindustry_editor_EditorTool *) NULL_CHECK((frame[0].o)))->F_mode) != (jint(-1))) goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(113);
	clinit_mindustry_editor_EditorTool$5(ctx);
	sp[0].o = (jobject)SF_mindustry_editor_EditorTool_pencil;
	((func_mindustry_editor_EditorTool_touched_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_EditorTool_touched_int_int])(ctx, sp[0].o, (frame[1].i), (frame[2].i));
	LINE_NUMBER(114);
	popStackFrame(ctx);
	return;
	}
label_4:;
	{
	LINE_NUMBER(118);
	if (((jint)((mindustry_editor_EditorTool *) NULL_CHECK((frame[0].o)))->F_mode) == 0) goto label_7;
	}
	{
	if (((jint)((mindustry_editor_EditorTool *) NULL_CHECK((frame[0].o)))->F_mode) != (jint(-1))) goto label_8;
	}
label_7:;
	{
	LINE_NUMBER(120);
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[3].o));
	jint temp0 = (jint)((func_mindustry_world_Block_isMultiblock_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_isMultiblock_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_9;
	}
	LINE_NUMBER(121);
	popStackFrame(ctx);
	INST_RETURN();
label_9:;
	{
	LINE_NUMBER(127);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	sp[0].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK(sp[0].o))->F_drawBlock;
	jint temp0 = (jint)((func_mindustry_world_Block_isOverlay_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_isOverlay_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_11;
	}
	{
	LINE_NUMBER(128);
	sp[0].o = (jobject)((func_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[3].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(129);
	sp[0].o = frame[6].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_editor;
	sp[1].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK(sp[1].o))->F_drawBlock;
	if (sp[0].o != sp[1].o) goto label_14;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_14:;
	{
	LINE_NUMBER(130);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_EditorTool$5_invoke_arc_func_Boolf_8(ctx);
		auto proxy = (mindustry_editor_EditorTool$5_invoke_arc_func_Boolf_8 *) gcAlloc(ctx, &class_mindustry_editor_EditorTool$5_invoke_arc_func_Boolf_8);
		proxy->F_field0 = (jref) (frame[6].o);
		sp[0].o = (jobject) proxy;
	}
	frame[4].o = sp[0].o;
	LINE_NUMBER(131);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_EditorTool$5_invoke_arc_func_Cons_9(ctx);
		auto proxy = (mindustry_editor_EditorTool$5_invoke_arc_func_Cons_9 *) gcAlloc(ctx, &class_mindustry_editor_EditorTool$5_invoke_arc_func_Cons_9);
		sp[0].o = (jobject) proxy;
	}
	frame[5].o = sp[0].o;
	LINE_NUMBER(132);
	goto label_17;
	}
label_11:;
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	sp[0].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK(sp[0].o))->F_drawBlock;
	jint temp0 = (jint)((func_mindustry_world_Block_isFloor_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_isFloor_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_18;
	}
	{
	LINE_NUMBER(133);
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[3].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(134);
	sp[0].o = frame[6].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_editor;
	sp[1].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK(sp[1].o))->F_drawBlock;
	if (sp[0].o != sp[1].o) goto label_21;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_21:;
	{
	LINE_NUMBER(135);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_EditorTool$5_invoke_arc_func_Boolf_9(ctx);
		auto proxy = (mindustry_editor_EditorTool$5_invoke_arc_func_Boolf_9 *) gcAlloc(ctx, &class_mindustry_editor_EditorTool$5_invoke_arc_func_Boolf_9);
		proxy->F_field0 = (jref) (frame[6].o);
		sp[0].o = (jobject) proxy;
	}
	frame[4].o = sp[0].o;
	LINE_NUMBER(136);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_EditorTool$5_invoke_arc_func_Cons_10(ctx);
		auto proxy = (mindustry_editor_EditorTool$5_invoke_arc_func_Cons_10 *) gcAlloc(ctx, &class_mindustry_editor_EditorTool$5_invoke_arc_func_Cons_10);
		sp[0].o = (jobject) proxy;
	}
	frame[5].o = sp[0].o;
	LINE_NUMBER(142);
	goto label_17;
	}
label_18:;
	{
	LINE_NUMBER(143);
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[3].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(144);
	sp[0].o = frame[6].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_editor;
	sp[1].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK(sp[1].o))->F_drawBlock;
	if (sp[0].o != sp[1].o) goto label_25;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_25:;
	{
	LINE_NUMBER(145);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_EditorTool$5_invoke_arc_func_Boolf_10(ctx);
		auto proxy = (mindustry_editor_EditorTool$5_invoke_arc_func_Boolf_10 *) gcAlloc(ctx, &class_mindustry_editor_EditorTool$5_invoke_arc_func_Boolf_10);
		proxy->F_field0 = (jref) (frame[6].o);
		sp[0].o = (jobject) proxy;
	}
	frame[4].o = sp[0].o;
	LINE_NUMBER(146);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_EditorTool$5_invoke_arc_func_Cons_11(ctx);
		auto proxy = (mindustry_editor_EditorTool$5_invoke_arc_func_Cons_11 *) gcAlloc(ctx, &class_mindustry_editor_EditorTool$5_invoke_arc_func_Cons_11);
		sp[0].o = (jobject) proxy;
	}
	frame[5].o = sp[0].o;
	}
label_17:;
	{
	LINE_NUMBER(149);
	frame[6].o = (frame[5].o);
	LINE_NUMBER(150);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_EditorTool$5_invoke_arc_func_Cons_12(ctx);
		auto proxy = (mindustry_editor_EditorTool$5_invoke_arc_func_Cons_12 *) gcAlloc(ctx, &class_mindustry_editor_EditorTool$5_invoke_arc_func_Cons_12);
		proxy->F_field0 = (jref) (frame[6].o);
		sp[0].o = (jobject) proxy;
	}
	frame[5].o = sp[0].o;
	LINE_NUMBER(165);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	jint temp1 = frame[2].i;
	sp[1].i = temp0;
	sp[2].i = temp1;
	sp += 3;
	if (((jint)((mindustry_editor_EditorTool *) NULL_CHECK((frame[0].o)))->F_mode) != 0) goto label_29;
	}
	INST_ICONST(1);
	goto label_30;
label_29:;
	INST_ICONST(0);
label_30:;
	{
	sp -= 4;
	((func_mindustry_editor_EditorTool$5_fill_int_int_boolean_arc_func_Boolf_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_EditorTool$5_fill_int_int_boolean_arc_func_Boolf_arc_func_Cons])(ctx, sp[0].o, sp[1].i, sp[2].i, sp[3].i, (frame[4].o), (frame[5].o));
	LINE_NUMBER(166);
	goto label_32;
	}
label_8:;
	{
	if (((jint)((mindustry_editor_EditorTool *) NULL_CHECK((frame[0].o)))->F_mode) != (jint(1))) goto label_33;
	}
	{
	LINE_NUMBER(169);
	jint temp0 = (jint)((func_mindustry_world_Tile_synthetic_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_world_Tile_synthetic_R_boolean])(ctx, (frame[3].o));
	if (temp0 == 0) goto label_32;
	}
	{
	LINE_NUMBER(170);
	sp[0].o = (jobject)((func_mindustry_world_Tile_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_world_Tile_team_R_mindustry_game_Team])(ctx, (frame[3].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(171);
	sp[0].o = frame[4].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_editor;
	sp[1].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK(sp[1].o))->F_drawTeam;
	if (sp[0].o != sp[1].o) goto label_37;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_37:;
	{
	LINE_NUMBER(172);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	jint temp1 = frame[2].i;
	jint temp2 = jint(1);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_EditorTool$5_invoke_arc_func_Boolf_11(ctx);
		auto proxy = (mindustry_editor_EditorTool$5_invoke_arc_func_Boolf_11 *) gcAlloc(ctx, &class_mindustry_editor_EditorTool$5_invoke_arc_func_Boolf_11);
		proxy->F_field0 = (jref) (frame[4].o);
		sp[1].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_editor_EditorTool$5_invoke_arc_func_Cons_13(ctx);
		auto proxy = (mindustry_editor_EditorTool$5_invoke_arc_func_Cons_13 *) gcAlloc(ctx, &class_mindustry_editor_EditorTool$5_invoke_arc_func_Cons_13);
		sp[2].o = (jobject) proxy;
	}
	((func_mindustry_editor_EditorTool$5_fill_int_int_boolean_arc_func_Boolf_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_EditorTool$5_fill_int_int_boolean_arc_func_Boolf_arc_func_Cons])(ctx, sp[0].o, temp0, temp1, temp2, sp[1].o, sp[2].o);
	LINE_NUMBER(173);
	goto label_32;
	}
label_33:;
	{
	LINE_NUMBER(174);
	if (((jint)((mindustry_editor_EditorTool *) NULL_CHECK((frame[0].o)))->F_mode) != (jint(2))) goto label_39;
	}
	{
	LINE_NUMBER(178);
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[3].o));
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	if (sp[0].o == sp[1].o) goto label_41;
	}
	{
	LINE_NUMBER(179);
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[3].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(180);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_EditorTool$5_invoke_arc_func_Boolf_12(ctx);
		auto proxy = (mindustry_editor_EditorTool$5_invoke_arc_func_Boolf_12 *) gcAlloc(ctx, &class_mindustry_editor_EditorTool$5_invoke_arc_func_Boolf_12);
		proxy->F_field0 = (jref) (frame[6].o);
		sp[0].o = (jobject) proxy;
	}
	frame[4].o = sp[0].o;
	LINE_NUMBER(181);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_EditorTool$5_invoke_arc_func_Cons_14(ctx);
		auto proxy = (mindustry_editor_EditorTool$5_invoke_arc_func_Cons_14 *) gcAlloc(ctx, &class_mindustry_editor_EditorTool$5_invoke_arc_func_Cons_14);
		sp[0].o = (jobject) proxy;
	}
	frame[5].o = sp[0].o;
	LINE_NUMBER(182);
	goto label_46;
	}
label_41:;
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[3].o));
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	if (sp[0].o == sp[1].o) goto label_47;
	}
	{
	LINE_NUMBER(183);
	sp[0].o = (jobject)((func_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[3].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(184);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_EditorTool$5_invoke_arc_func_Boolf_13(ctx);
		auto proxy = (mindustry_editor_EditorTool$5_invoke_arc_func_Boolf_13 *) gcAlloc(ctx, &class_mindustry_editor_EditorTool$5_invoke_arc_func_Boolf_13);
		proxy->F_field0 = (jref) (frame[6].o);
		sp[0].o = (jobject) proxy;
	}
	frame[4].o = sp[0].o;
	LINE_NUMBER(185);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_EditorTool$5_invoke_arc_func_Cons_15(ctx);
		auto proxy = (mindustry_editor_EditorTool$5_invoke_arc_func_Cons_15 *) gcAlloc(ctx, &class_mindustry_editor_EditorTool$5_invoke_arc_func_Cons_15);
		sp[0].o = (jobject) proxy;
	}
	frame[5].o = sp[0].o;
	LINE_NUMBER(186);
	goto label_46;
	}
label_47:;
	{
	LINE_NUMBER(188);
	frame[4].o = (jobject(nullptr));
	LINE_NUMBER(189);
	frame[5].o = (jobject(nullptr));
	}
label_46:;
	{
	LINE_NUMBER(192);
	if ((frame[5].o) == nullptr) goto label_53;
	}
	{
	LINE_NUMBER(193);
	((func_mindustry_editor_EditorTool$5_fill_int_int_boolean_arc_func_Boolf_arc_func_Cons) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_EditorTool$5_fill_int_int_boolean_arc_func_Boolf_arc_func_Cons])(ctx, (frame[0].o), (frame[1].i), (frame[2].i), (jint(0)), (frame[4].o), (frame[5].o));
	}
label_53:;
	LINE_NUMBER(195);
	goto label_32;
label_39:;
	{
	if (((jint)((mindustry_editor_EditorTool *) NULL_CHECK((frame[0].o)))->F_mode) != (jint(3))) goto label_55;
	}
	{
	LINE_NUMBER(196);
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[3].o));
	jint temp0 = (jint)((func_mindustry_world_Block_isStatic_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_isStatic_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_57;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[3].o));
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_cliff;
	if (sp[0].o != sp[1].o) goto label_58;
	}
label_57:;
	popStackFrame(ctx);
	INST_RETURN();
label_58:;
	{
	LINE_NUMBER(197);
	clinit_arc_struct_Bits(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Bits);
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_editor;
	jint temp0 = (jint)((func_mindustry_editor_MapEditor_width_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_editor_MapEditor_width_R_int])(ctx, sp[1].o);
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_editor;
	jint temp1 = (jint)((func_mindustry_editor_MapEditor_height_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_editor_MapEditor_height_R_int])(ctx, sp[1].o);
	init_arc_struct_Bits_int(ctx, sp[0].o, (temp0 * temp1));
	frame[4].o = sp[0].o;
	LINE_NUMBER(198);
	sp[0].o = frame[0].o;
	jint temp2 = frame[1].i;
	jint temp3 = frame[2].i;
	jint temp4 = jint(0);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_EditorTool$5_invoke_arc_func_Boolf_14(ctx);
		auto proxy = (mindustry_editor_EditorTool$5_invoke_arc_func_Boolf_14 *) gcAlloc(ctx, &class_mindustry_editor_EditorTool$5_invoke_arc_func_Boolf_14);
		sp[1].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_editor_EditorTool$5_invoke_arc_func_Cons_16(ctx);
		auto proxy = (mindustry_editor_EditorTool$5_invoke_arc_func_Cons_16 *) gcAlloc(ctx, &class_mindustry_editor_EditorTool$5_invoke_arc_func_Cons_16);
		proxy->F_field0 = (jref) (frame[4].o);
		sp[2].o = (jobject) proxy;
	}
	((func_mindustry_editor_EditorTool$5_fill_int_int_boolean_arc_func_Boolf_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_EditorTool$5_fill_int_int_boolean_arc_func_Boolf_arc_func_Cons])(ctx, sp[0].o, temp2, temp3, temp4, sp[1].o, sp[2].o);
	LINE_NUMBER(216);
	goto label_32;
	}
label_55:;
	{
	if (((jint)((mindustry_editor_EditorTool *) NULL_CHECK((frame[0].o)))->F_mode) != (jint(4))) goto label_32;
	}
	{
	LINE_NUMBER(217);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	sp[0].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK(sp[0].o))->F_drawBlock;
	frame[5].o = sp[0].o;
	if ((isInstance(ctx, (frame[5].o), &class_mindustry_world_blocks_environment_Floor)) == 0) goto label_32;
	}
	{
	frame[4].o = (checkCast(ctx, &class_mindustry_world_blocks_environment_Floor, (frame[5].o)));
	if (((jint)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[4].o)))->F_isLiquid) != 0) goto label_32;
	}
	{
	LINE_NUMBER(218);
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[3].o));
	if (((jint)((mindustry_world_blocks_environment_Floor *) NULL_CHECK(sp[0].o))->F_isLiquid) != 0) goto label_64;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_64:;
	{
	LINE_NUMBER(220);
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[3].o));
	frame[5].o = sp[0].o;
	sp[0].o = (jobject)((func_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[3].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(224);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_EditorTool$5_invoke_arc_func_Boolf_15(ctx);
		auto proxy = (mindustry_editor_EditorTool$5_invoke_arc_func_Boolf_15 *) gcAlloc(ctx, &class_mindustry_editor_EditorTool$5_invoke_arc_func_Boolf_15);
		proxy->F_field1 = (jref) (frame[6].o);
		proxy->F_field0 = (jref) (frame[5].o);
		sp[0].o = (jobject) proxy;
	}
	frame[7].o = sp[0].o;
	LINE_NUMBER(225);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_EditorTool$5_invoke_arc_func_Cons_17(ctx);
		auto proxy = (mindustry_editor_EditorTool$5_invoke_arc_func_Cons_17 *) gcAlloc(ctx, &class_mindustry_editor_EditorTool$5_invoke_arc_func_Cons_17);
		sp[0].o = (jobject) proxy;
	}
	frame[8].o = sp[0].o;
	LINE_NUMBER(231);
	((func_mindustry_editor_EditorTool$5_fill_int_int_boolean_arc_func_Boolf_arc_func_Cons) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_EditorTool$5_fill_int_int_boolean_arc_func_Boolf_arc_func_Cons])(ctx, (frame[0].o), (frame[1].i), (frame[2].i), (jint(0)), (frame[7].o), (frame[8].o));
	}
label_32:;
	LINE_NUMBER(234);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_editor_EditorTool$5_fill_int_int_boolean_arc_func_Boolf_arc_func_Cons(jcontext ctx, jobject self, jint param0, jint param1, jbool param2, jobject param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/EditorTool$5:fill", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(237);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	jint temp0 = (jint)((func_mindustry_editor_MapEditor_width_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapEditor_width_R_int])(ctx, sp[0].o);
	frame[6].i = temp0;
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	jint temp1 = (jint)((func_mindustry_editor_MapEditor_height_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapEditor_height_R_int])(ctx, sp[0].o);
	frame[7].i = temp1;
	LINE_NUMBER(239);
	if ((frame[3].i) == 0) goto label_7;
	}
	{
	LINE_NUMBER(241);
	frame[8].i = (jint(0));
	}
label_9:;
	{
	if ((frame[8].i) >= (frame[6].i)) goto label_10;
	}
	{
	LINE_NUMBER(242);
	frame[9].i = (jint(0));
	}
label_12:;
	{
	if ((frame[9].i) >= (frame[7].i)) goto label_13;
	}
	{
	LINE_NUMBER(243);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	sp[0].o = (jobject)((func_mindustry_editor_MapEditor_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapEditor_tile_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, (frame[8].i), (frame[9].i));
	frame[10].o = sp[0].o;
	LINE_NUMBER(244);
	jint temp0 = (jint)((func_arc_func_Boolf_get_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolf, INDEX_arc_func_Boolf_get_java_lang_Object_R_boolean, (frame[4].o)))(ctx, (frame[4].o), (frame[10].o));
	if (temp0 == 0) goto label_16;
	}
	{
	LINE_NUMBER(245);
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o), (frame[10].o));
	}
label_16:;
	{
	LINE_NUMBER(242);
	INST_IINC(9, 1);
	goto label_12;
	}
label_13:;
	{
	LINE_NUMBER(241);
	INST_IINC(8, 1);
	goto label_9;
	}
label_10:;
	goto label_18;
label_7:;
	{
	LINE_NUMBER(254);
	sp[0].o = (jobject)((mindustry_editor_EditorTool$5 *) NULL_CHECK((frame[0].o)))->F_stack;
	((func_arc_struct_IntSeq_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_clear])(ctx, sp[0].o);
	LINE_NUMBER(255);
	sp[0].o = (jobject)((mindustry_editor_EditorTool$5 *) NULL_CHECK((frame[0].o)))->F_stack;
	jint temp0 = (jint)SM_arc_math_geom_Point2_pack_int_int_R_int(ctx, (frame[1].i), (frame[2].i));
	((func_arc_struct_IntSeq_add_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_add_int])(ctx, sp[0].o, temp0);
	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_OutOfMemoryError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(258);
	sp[0].o = (jobject)((mindustry_editor_EditorTool$5 *) NULL_CHECK((frame[0].o)))->F_stack;
	if (((jint)((arc_struct_IntSeq *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_20;
	}
	{
	sp[0].o = (jobject)((mindustry_editor_EditorTool$5 *) NULL_CHECK((frame[0].o)))->F_stack;
	if (((jint)((arc_struct_IntSeq *) NULL_CHECK(sp[0].o))->F_size) >= ((frame[6].i) * (frame[7].i))) goto label_20;
	}
	{
	LINE_NUMBER(259);
	sp[0].o = (jobject)((mindustry_editor_EditorTool$5 *) NULL_CHECK((frame[0].o)))->F_stack;
	jint temp0 = (jint)((func_arc_struct_IntSeq_pop_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_pop_R_int])(ctx, sp[0].o);
	frame[9].i = temp0;
	LINE_NUMBER(260);
	jint temp1 = (jint)SM_arc_math_geom_Point2_x_int_R_short(ctx, (frame[9].i));
	frame[1].i = temp1;
	LINE_NUMBER(261);
	jint temp2 = (jint)SM_arc_math_geom_Point2_y_int_R_short(ctx, (frame[9].i));
	frame[2].i = temp2;
	LINE_NUMBER(263);
	frame[8].i = (frame[1].i);
	}
label_25:;
	{
	LINE_NUMBER(264);
	if ((frame[8].i) < 0) goto label_26;
	}
	{
	sp[0].o = frame[4].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_editor;
	sp[1].o = (jobject)((func_mindustry_editor_MapEditor_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_editor_MapEditor_tile_int_int_R_mindustry_world_Tile])(ctx, sp[1].o, (frame[8].i), (frame[2].i));
	jint temp0 = (jint)((func_arc_func_Boolf_get_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolf, INDEX_arc_func_Boolf_get_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_26;
	}
	INST_IINC(8, -1);
	goto label_25;
label_26:;
	{
	LINE_NUMBER(265);
	INST_IINC(8, 1);
	LINE_NUMBER(266);
	frame[10].i = (jint(0));
	frame[11].i = (jint(0));
	}
label_29:;
	{
	LINE_NUMBER(267);
	if ((frame[8].i) >= (frame[6].i)) goto label_30;
	}
	{
	sp[0].o = frame[4].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_editor;
	sp[1].o = (jobject)((func_mindustry_editor_MapEditor_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_editor_MapEditor_tile_int_int_R_mindustry_world_Tile])(ctx, sp[1].o, (frame[8].i), (frame[2].i));
	jint temp0 = (jint)((func_arc_func_Boolf_get_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolf, INDEX_arc_func_Boolf_get_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_30;
	}
	{
	LINE_NUMBER(268);
	sp[0].o = frame[5].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_editor;
	sp[1].o = (jobject)((func_mindustry_editor_MapEditor_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_editor_MapEditor_tile_int_int_R_mindustry_world_Tile])(ctx, sp[1].o, (frame[8].i), (frame[2].i));
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(270);
	if ((frame[10].i) != 0) goto label_33;
	}
	INST_ILOAD(2);
	if ((--sp)->i <= 0) goto label_33;
	{
	sp[0].o = frame[4].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_editor;
	sp[1].o = (jobject)((func_mindustry_editor_MapEditor_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_editor_MapEditor_tile_int_int_R_mindustry_world_Tile])(ctx, sp[1].o, (frame[8].i), ((frame[2].i) - (jint(1))));
	jint temp0 = (jint)((func_arc_func_Boolf_get_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolf, INDEX_arc_func_Boolf_get_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_33;
	}
	{
	LINE_NUMBER(271);
	sp[0].o = (jobject)((mindustry_editor_EditorTool$5 *) NULL_CHECK((frame[0].o)))->F_stack;
	jint temp0 = (jint)SM_arc_math_geom_Point2_pack_int_int_R_int(ctx, (frame[8].i), ((frame[2].i) - (jint(1))));
	((func_arc_struct_IntSeq_add_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_add_int])(ctx, sp[0].o, temp0);
	LINE_NUMBER(272);
	frame[10].i = (jint(1));
	goto label_36;
	}
label_33:;
	{
	LINE_NUMBER(273);
	if ((frame[10].i) == 0) goto label_36;
	}
	{
	sp[0].o = frame[4].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_editor;
	sp[1].o = (jobject)((func_mindustry_editor_MapEditor_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_editor_MapEditor_tile_int_int_R_mindustry_world_Tile])(ctx, sp[1].o, (frame[8].i), ((frame[2].i) - (jint(1))));
	jint temp0 = (jint)((func_arc_func_Boolf_get_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolf, INDEX_arc_func_Boolf_get_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_36;
	}
	{
	LINE_NUMBER(274);
	frame[10].i = (jint(0));
	}
label_36:;
	{
	LINE_NUMBER(277);
	if ((frame[11].i) != 0) goto label_38;
	}
	{
	if ((frame[2].i) >= ((frame[7].i) - (jint(1)))) goto label_38;
	}
	{
	sp[0].o = frame[4].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_editor;
	sp[1].o = (jobject)((func_mindustry_editor_MapEditor_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_editor_MapEditor_tile_int_int_R_mindustry_world_Tile])(ctx, sp[1].o, (frame[8].i), ((frame[2].i) + (jint(1))));
	jint temp0 = (jint)((func_arc_func_Boolf_get_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolf, INDEX_arc_func_Boolf_get_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_38;
	}
	{
	LINE_NUMBER(278);
	sp[0].o = (jobject)((mindustry_editor_EditorTool$5 *) NULL_CHECK((frame[0].o)))->F_stack;
	jint temp0 = (jint)SM_arc_math_geom_Point2_pack_int_int_R_int(ctx, (frame[8].i), ((frame[2].i) + (jint(1))));
	((func_arc_struct_IntSeq_add_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_add_int])(ctx, sp[0].o, temp0);
	LINE_NUMBER(279);
	frame[11].i = (jint(1));
	goto label_41;
	}
label_38:;
	{
	LINE_NUMBER(280);
	if ((frame[11].i) == 0) goto label_41;
	}
	{
	if ((frame[2].i) >= ((frame[7].i) - (jint(1)))) goto label_41;
	}
	{
	sp[0].o = frame[4].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_editor;
	sp[1].o = (jobject)((func_mindustry_editor_MapEditor_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_editor_MapEditor_tile_int_int_R_mindustry_world_Tile])(ctx, sp[1].o, (frame[8].i), ((frame[2].i) + (jint(1))));
	jint temp0 = (jint)((func_arc_func_Boolf_get_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolf, INDEX_arc_func_Boolf_get_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_41;
	}
	{
	LINE_NUMBER(281);
	frame[11].i = (jint(0));
	}
label_41:;
	{
	LINE_NUMBER(283);
	INST_IINC(8, 1);
	goto label_29;
	}
label_30:;
	LINE_NUMBER(285);
	{ popExceptionFrames(frameRef, 1); goto label_0; }
label_20:;
	{
	LINE_NUMBER(286);
	sp[0].o = (jobject)((mindustry_editor_EditorTool$5 *) NULL_CHECK((frame[0].o)))->F_stack;
	((func_arc_struct_IntSeq_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_clear])(ctx, sp[0].o);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(293);
	goto label_18;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(287);
	frame[9].o = sp[0].o;
	LINE_NUMBER(289);
	((mindustry_editor_EditorTool$5 *) NULL_CHECK((frame[0].o)))->F_stack = (jref) (jobject(nullptr));
	LINE_NUMBER(290);
	SM_java_lang_System_gc(ctx);
	LINE_NUMBER(291);
	((func_java_lang_OutOfMemoryError_printStackTrace) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_java_lang_OutOfMemoryError_printStackTrace])(ctx, (frame[9].o));
	LINE_NUMBER(292);
	sp[0].o = frame[0].o;
	clinit_arc_struct_IntSeq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_IntSeq);
	init_arc_struct_IntSeq(ctx, sp[1].o);
	((mindustry_editor_EditorTool$5 *) NULL_CHECK(sp[0].o))->F_stack = (jref) sp[1].o;
	}
label_18:;
	LINE_NUMBER(295);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_editor_EditorTool$5_lambda$touched$16_mindustry_world_Tile(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/EditorTool$5:lambda$touched$16", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_EditorTool$5(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(226);
	sp[0].o = (jobject)((func_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[0].o));
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_editor;
	sp[1].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK(sp[1].o))->F_drawBlock;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	LINE_NUMBER(227);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_editor;
	sp[1].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK(sp[1].o))->F_drawBlock;
	sp[1].o = (jobject)((func_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor])(ctx, sp[1].o);
	((func_mindustry_world_Tile_setOverlay_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_setOverlay_mindustry_world_Block])(ctx, sp[0].o, sp[1].o);
	}
label_1:;
	LINE_NUMBER(229);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_editor_EditorTool$5_lambda$touched$15_mindustry_world_Block_mindustry_world_Block_mindustry_world_Tile_R_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/EditorTool$5:lambda$touched$15", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_EditorTool$5(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(224);
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[2].o));
	if (sp[0].o != (frame[0].o)) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[2].o));
	if (sp[0].o != (frame[1].o)) goto label_1;
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

void SM_mindustry_editor_EditorTool$5_lambda$touched$14_arc_struct_Bits_mindustry_world_Tile(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/EditorTool$5:lambda$touched$14", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_EditorTool$5(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(199);
	frame[2].i = (jint(0));
	LINE_NUMBER(200);
	frame[3].i = (jint(0));
	}
label_2:;
	{
	if ((frame[3].i) >= (8)) goto label_3;
	}
	{
	LINE_NUMBER(201);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((mindustry_core_World *) NULL_CHECK(sp[0].o))->F_tiles;
	jint temp0 = (jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_x;
	clinit_arc_math_geom_Geometry(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Geometry_d8;
	jint temp1 = temp0 + ((jint)((arc_math_geom_Point2 *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[3].i)))))->F_x);
	jint temp2 = (jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_y;
	clinit_arc_math_geom_Geometry(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Geometry_d8;
	sp[0].o = (jobject)((func_mindustry_world_Tiles_get_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tiles_get_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, temp1, (temp2 + ((jint)((arc_math_geom_Point2 *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[3].i)))))->F_y)));
	frame[4].o = sp[0].o;
	LINE_NUMBER(202);
	if ((frame[4].o) == nullptr) goto label_6;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[4].o));
	jint temp0 = (jint)((func_mindustry_world_Block_isStatic_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_isStatic_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_6;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_mindustry_world_Tile_array_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_world_Tile_array_R_int])(ctx, (frame[4].o));
	jint temp1 = (jint)((func_arc_struct_Bits_get_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Bits_get_int_R_boolean])(ctx, sp[0].o, temp0);
	if (temp1 != 0) goto label_6;
	}
	{
	LINE_NUMBER(203);
	frame[2].i = ((frame[2].i) | ((jint(1)) << (frame[3].i)));
	}
label_6:;
	{
	LINE_NUMBER(200);
	INST_IINC(3, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(207);
	if ((frame[2].i) == 0) goto label_8;
	}
	{
	LINE_NUMBER(208);
	sp[0].o = frame[1].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_cliff;
	((func_mindustry_world_Tile_setBlock_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_setBlock_mindustry_world_Block])(ctx, sp[0].o, sp[1].o);
	goto label_10;
	}
label_8:;
	{
	LINE_NUMBER(210);
	sp[0].o = frame[1].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	((func_mindustry_world_Tile_setBlock_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_setBlock_mindustry_world_Block])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(211);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_mindustry_world_Tile_array_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_array_R_int])(ctx, (frame[1].o));
	((func_arc_struct_Bits_set_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Bits_set_int])(ctx, sp[0].o, temp0);
	}
label_10:;
	{
	LINE_NUMBER(214);
	((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_data = (jbyte((frame[2].i)));
	LINE_NUMBER(215);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_editor_EditorTool$5_lambda$touched$13_mindustry_world_Tile_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/EditorTool$5:lambda$touched$13", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_EditorTool$5(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(198);
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_mindustry_world_Block_isStatic_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_isStatic_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[0].o));
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_cliff;
	if (sp[0].o == sp[1].o) goto label_1;
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

void SM_mindustry_editor_EditorTool$5_lambda$touched$12_mindustry_world_Tile(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/EditorTool$5:lambda$touched$12", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_EditorTool$5(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(185);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	((func_mindustry_world_Tile_setOverlay_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_setOverlay_mindustry_world_Block])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_editor_EditorTool$5_lambda$touched$11_mindustry_world_Block_mindustry_world_Tile_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/EditorTool$5:lambda$touched$11", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_EditorTool$5(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(184);
	sp[0].o = (jobject)((func_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[1].o));
	if (sp[0].o != (frame[0].o)) goto label_1;
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

void SM_mindustry_editor_EditorTool$5_lambda$touched$10_mindustry_world_Tile(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/EditorTool$5:lambda$touched$10", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_EditorTool$5(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(181);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	((func_mindustry_world_Tile_setBlock_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_setBlock_mindustry_world_Block])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_editor_EditorTool$5_lambda$touched$9_mindustry_world_Block_mindustry_world_Tile_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/EditorTool$5:lambda$touched$9", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_EditorTool$5(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(180);
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[1].o));
	if (sp[0].o != (frame[0].o)) goto label_1;
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

void SM_mindustry_editor_EditorTool$5_lambda$touched$8_mindustry_world_Tile(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/EditorTool$5:lambda$touched$8", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_EditorTool$5(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(172);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_editor;
	sp[1].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK(sp[1].o))->F_drawTeam;
	((func_mindustry_world_Tile_setTeam_mindustry_game_Team) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_setTeam_mindustry_game_Team])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_editor_EditorTool$5_lambda$touched$7_mindustry_game_Team_mindustry_world_Tile_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/EditorTool$5:lambda$touched$7", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_EditorTool$5(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(172);
	jint temp0 = (jint)((func_mindustry_world_Tile_getTeamID_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_getTeamID_R_int])(ctx, (frame[1].o));
	if (temp0 != ((jint)((mindustry_game_Team *) NULL_CHECK((frame[0].o)))->F_id)) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_world_Tile_synthetic_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_synthetic_R_boolean])(ctx, (frame[1].o));
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

void SM_mindustry_editor_EditorTool$5_lambda$touched$6_arc_func_Cons_mindustry_world_Tile(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[9];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/EditorTool$5:lambda$touched$6", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_EditorTool$5(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(151);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	sp[0].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK(sp[0].o))->F_drawBlock;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_saveData) == 0) goto label_1;
	}
	{
	LINE_NUMBER(152);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	jint temp0 = (jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_x;
	jint temp1 = (jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_y;
	jint temp2 = jint(5);
	jint temp3 = (jint)SM_mindustry_gen_TileOpData_get_byte_byte_byte_R_int(ctx, ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_data), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_floorData), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_overlayData));
	jlong temp4 = (jlong)SM_mindustry_gen_TileOp_get_int_int_int_int_R_long(ctx, temp0, temp1, temp2, temp3);
	((func_mindustry_editor_MapEditor_addTileOp_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapEditor_addTileOp_long])(ctx, sp[0].o, temp4);
	LINE_NUMBER(153);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	jlong temp5 = (jlong)SM_mindustry_gen_TileOp_get_int_int_int_int_R_long(ctx, ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_x), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_y), (6), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_extraData));
	((func_mindustry_editor_MapEditor_addTileOp_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapEditor_addTileOp_long])(ctx, sp[0].o, temp5);
	}
label_1:;
	{
	LINE_NUMBER(156);
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, (frame[0].o)))(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(158);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	sp[0].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK(sp[0].o))->F_drawBlock;
	jint temp0 = (jint)((func_mindustry_world_Block_synthetic_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_synthetic_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_5;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	sp[0].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK(sp[0].o))->F_drawBlock;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_saveConfig) == 0) goto label_5;
	}
	{
	LINE_NUMBER(159);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	sp[0].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK(sp[0].o))->F_drawBlock;
	sp[1].o = frame[1].o;
	sp[2].o = jobject(nullptr);
	clinit_mindustry_Vars(ctx);
	sp[3].o = (jobject)SF_mindustry_Vars_editor;
	jint temp0 = (jint)((mindustry_editor_MapEditor *) NULL_CHECK(sp[3].o))->F_rotation;
	clinit_mindustry_Vars(ctx);
	sp[3].o = (jobject)SF_mindustry_Vars_editor;
	sp[3].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK(sp[3].o))->F_drawBlock;
	sp[3].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[3].o))->F_lastConfig;
	((func_mindustry_world_Block_placeEnded_mindustry_world_Tile_mindustry_gen_Unit_int_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_placeEnded_mindustry_world_Tile_mindustry_gen_Unit_int_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, sp[3].o);
	LINE_NUMBER(160);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	sp[0].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK(sp[0].o))->F_renderer;
	((func_mindustry_editor_EditorRenderer_updateStatic_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_EditorRenderer_updateStatic_int_int])(ctx, sp[0].o, ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_x), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_y));
	}
label_5:;
	LINE_NUMBER(162);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_editor_EditorTool$5_lambda$touched$5_mindustry_world_Tile(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/EditorTool$5:lambda$touched$5", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_EditorTool$5(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(146);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_editor;
	sp[1].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK(sp[1].o))->F_drawBlock;
	clinit_mindustry_Vars(ctx);
	sp[2].o = (jobject)SF_mindustry_Vars_editor;
	sp[2].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK(sp[2].o))->F_drawTeam;
	((func_mindustry_world_Tile_setBlock_mindustry_world_Block_mindustry_game_Team) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_setBlock_mindustry_world_Block_mindustry_game_Team])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_editor_EditorTool$5_lambda$touched$4_mindustry_world_Block_mindustry_world_Tile_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/EditorTool$5:lambda$touched$4", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_EditorTool$5(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(145);
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[1].o));
	if (sp[0].o != (frame[0].o)) goto label_1;
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

void SM_mindustry_editor_EditorTool$5_lambda$touched$3_mindustry_world_Tile(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/EditorTool$5:lambda$touched$3", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_EditorTool$5(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(137);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_editor;
	sp[1].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK(sp[1].o))->F_drawBlock;
	sp[1].o = (jobject)((func_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor])(ctx, sp[1].o);
	((func_mindustry_world_Tile_setFloor_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_setFloor_mindustry_world_blocks_environment_Floor])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(138);
	sp[0].o = (jobject)((func_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[0].o));
	if ((isInstance(ctx, sp[0].o, &class_mindustry_world_blocks_environment_OverlayFloor)) != 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[0].o));
	if (((jint)((mindustry_world_blocks_environment_Floor *) NULL_CHECK(sp[0].o))->F_supportsOverlay) != 0) goto label_2;
	}
	{
	LINE_NUMBER(139);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	((func_mindustry_world_Tile_setOverlay_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_setOverlay_mindustry_world_Block])(ctx, sp[0].o, sp[1].o);
	}
label_2:;
	LINE_NUMBER(141);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_editor_EditorTool$5_lambda$touched$2_mindustry_world_Block_mindustry_world_Tile_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/EditorTool$5:lambda$touched$2", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_EditorTool$5(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(135);
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[1].o));
	if (sp[0].o != (frame[0].o)) goto label_1;
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

void SM_mindustry_editor_EditorTool$5_lambda$touched$1_mindustry_world_Tile(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/EditorTool$5:lambda$touched$1", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_EditorTool$5(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(131);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_editor;
	sp[1].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK(sp[1].o))->F_drawBlock;
	((func_mindustry_world_Tile_setOverlay_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_setOverlay_mindustry_world_Block])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_editor_EditorTool$5_lambda$touched$0_mindustry_world_Block_mindustry_world_Tile_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/EditorTool$5:lambda$touched$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_EditorTool$5(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(130);
	sp[0].o = (jobject)((func_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[1].o));
	if (sp[0].o != (frame[0].o)) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[1].o));
	jint temp0 = (jint)((func_mindustry_world_blocks_environment_Floor_hasSurface_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_environment_Floor_hasSurface_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[1].o));
	if (((jint)((mindustry_world_blocks_environment_Floor *) NULL_CHECK(sp[0].o))->F_needsSurface) != 0) goto label_1;
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

void *vtable_mindustry_editor_EditorTool$5[] {
	(void *) M_java_lang_Enum_hashCode_R_int,
	(void *) M_java_lang_Enum_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Enum_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Enum_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_lang_Enum_compareTo_java_lang_Object_R_int,
	(void *) M_java_lang_Enum_compareTo_java_lang_Enum_R_int,
	(void *) M_java_lang_Enum_name_R_java_lang_String,
	(void *) M_java_lang_Enum_ordinal_R_int,
	(void *) M_java_lang_Enum_getDeclaringClass_R_java_lang_Class,
	(void *) M_mindustry_editor_EditorTool$5_touched_int_int,
	(void *) M_mindustry_editor_EditorTool_touchedLine_int_int_int_int,
	(void *) M_mindustry_editor_EditorTool$5_fill_int_int_boolean_arc_func_Boolf_arc_func_Cons,
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
	{ "compareTo", "(Ljava/lang/Enum;)I" },
	{ "name", "()Ljava/lang/String;" },
	{ "ordinal", "()I" },
	{ "getDeclaringClass", "()Ljava/lang/Class;" },
	{ "touched", "(II)V" },
	{ "touchedLine", "(IIII)V" },
	{ "fill", "(IIZLarc/func/Boolf;Larc/func/Cons;)V" },
};

static FieldMetadata fields[] {
	{ "stack", &class_arc_struct_IntSeq, offsetof(mindustry_editor_EditorTool$5, F_stack), "Larc/struct/IntSeq;", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_editor_EditorTool$5_java_lang_String_int_arc_input_KeyCode_Array1_java_lang_String, 0, "(Ljava/lang/String;ILarc/input/KeyCode;[Ljava/lang/String;)V", 130 },
	{ "touched", (intptr_t) M_mindustry_editor_EditorTool$5_touched_int_int, VTABLE_mindustry_editor_EditorTool$5_touched_int_int, "(II)V", 1 },
	{ "fill", (intptr_t) M_mindustry_editor_EditorTool$5_fill_int_int_boolean_arc_func_Boolf_arc_func_Cons, VTABLE_mindustry_editor_EditorTool$5_fill_int_int_boolean_arc_func_Boolf_arc_func_Cons, "(IIZLarc/func/Boolf;Larc/func/Cons;)V", 0 },
	{ "lambda$touched$16", (intptr_t) SM_mindustry_editor_EditorTool$5_lambda$touched$16_mindustry_world_Tile, 0, "(Lmindustry/world/Tile;)V", 4106 },
	{ "lambda$touched$15", (intptr_t) SM_mindustry_editor_EditorTool$5_lambda$touched$15_mindustry_world_Block_mindustry_world_Block_mindustry_world_Tile_R_boolean, 0, "(Lmindustry/world/Block;Lmindustry/world/Block;Lmindustry/world/Tile;)Z", 4106 },
	{ "lambda$touched$14", (intptr_t) SM_mindustry_editor_EditorTool$5_lambda$touched$14_arc_struct_Bits_mindustry_world_Tile, 0, "(Larc/struct/Bits;Lmindustry/world/Tile;)V", 4106 },
	{ "lambda$touched$13", (intptr_t) SM_mindustry_editor_EditorTool$5_lambda$touched$13_mindustry_world_Tile_R_boolean, 0, "(Lmindustry/world/Tile;)Z", 4106 },
	{ "lambda$touched$12", (intptr_t) SM_mindustry_editor_EditorTool$5_lambda$touched$12_mindustry_world_Tile, 0, "(Lmindustry/world/Tile;)V", 4106 },
	{ "lambda$touched$11", (intptr_t) SM_mindustry_editor_EditorTool$5_lambda$touched$11_mindustry_world_Block_mindustry_world_Tile_R_boolean, 0, "(Lmindustry/world/Block;Lmindustry/world/Tile;)Z", 4106 },
	{ "lambda$touched$10", (intptr_t) SM_mindustry_editor_EditorTool$5_lambda$touched$10_mindustry_world_Tile, 0, "(Lmindustry/world/Tile;)V", 4106 },
	{ "lambda$touched$9", (intptr_t) SM_mindustry_editor_EditorTool$5_lambda$touched$9_mindustry_world_Block_mindustry_world_Tile_R_boolean, 0, "(Lmindustry/world/Block;Lmindustry/world/Tile;)Z", 4106 },
	{ "lambda$touched$8", (intptr_t) SM_mindustry_editor_EditorTool$5_lambda$touched$8_mindustry_world_Tile, 0, "(Lmindustry/world/Tile;)V", 4106 },
	{ "lambda$touched$7", (intptr_t) SM_mindustry_editor_EditorTool$5_lambda$touched$7_mindustry_game_Team_mindustry_world_Tile_R_boolean, 0, "(Lmindustry/game/Team;Lmindustry/world/Tile;)Z", 4106 },
	{ "lambda$touched$6", (intptr_t) SM_mindustry_editor_EditorTool$5_lambda$touched$6_arc_func_Cons_mindustry_world_Tile, 0, "(Larc/func/Cons;Lmindustry/world/Tile;)V", 4106 },
	{ "lambda$touched$5", (intptr_t) SM_mindustry_editor_EditorTool$5_lambda$touched$5_mindustry_world_Tile, 0, "(Lmindustry/world/Tile;)V", 4106 },
	{ "lambda$touched$4", (intptr_t) SM_mindustry_editor_EditorTool$5_lambda$touched$4_mindustry_world_Block_mindustry_world_Tile_R_boolean, 0, "(Lmindustry/world/Block;Lmindustry/world/Tile;)Z", 4106 },
	{ "lambda$touched$3", (intptr_t) SM_mindustry_editor_EditorTool$5_lambda$touched$3_mindustry_world_Tile, 0, "(Lmindustry/world/Tile;)V", 4106 },
	{ "lambda$touched$2", (intptr_t) SM_mindustry_editor_EditorTool$5_lambda$touched$2_mindustry_world_Block_mindustry_world_Tile_R_boolean, 0, "(Lmindustry/world/Block;Lmindustry/world/Tile;)Z", 4106 },
	{ "lambda$touched$1", (intptr_t) SM_mindustry_editor_EditorTool$5_lambda$touched$1_mindustry_world_Tile, 0, "(Lmindustry/world/Tile;)V", 4106 },
	{ "lambda$touched$0", (intptr_t) SM_mindustry_editor_EditorTool$5_lambda$touched$0_mindustry_world_Block_mindustry_world_Tile_R_boolean, 0, "(Lmindustry/world/Block;Lmindustry/world/Tile;)Z", 4106 },
};

Class class_mindustry_editor_EditorTool$5{
		.nativeName = (intptr_t) "mindustry/editor/EditorTool$5",
		.parentClass = (intptr_t) &class_mindustry_editor_EditorTool,
		.size = sizeof(mindustry_editor_EditorTool$5),
		.classVtable = (intptr_t) vtable_mindustry_editor_EditorTool$5,
		.staticInitializer = (intptr_t) clinit_mindustry_editor_EditorTool$5,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_editor_EditorTool$5,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 16440,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 20,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 19,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_mindustry_editor_EditorTool$5 = registerClass(&class_mindustry_editor_EditorTool$5);

}

