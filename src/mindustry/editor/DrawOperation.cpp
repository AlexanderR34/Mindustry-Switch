#include "mindustry/editor/DrawOperation.h"
#include "java/lang/Math.h"
#include "mindustry/editor/DrawOperation_TileOpDataStruct.h"
#include "mindustry/editor/DrawOperation.h"
#include "mindustry/world/Block.h"
#include "arc/struct/LongSeq.h"
#include "java/lang/IllegalArgumentException.h"
#include "mindustry/gen/TileOp.h"
#include "mindustry/gen/Building.h"
#include "java/lang/Runnable.h"
#include "mindustry/editor/DrawOperation_TileOpStruct.h"
#include "arc/func/Cons.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/editor/EditorRenderer.h"
#include "mindustry/core/ContentLoader.h"
#include "mindustry/gen/TileOpData.h"
#include "mindustry/editor/DrawOperation_invoke_java_lang_Runnable_1.h"
#include "mindustry/world/Tile.h"
#include "mindustry/world/blocks/environment/Floor.h"
#include "mindustry/game/Team.h"
#include "mindustry/Vars.h"
#include "mindustry/editor/DrawOperation_invoke_arc_func_Cons_2.h"
#include "mindustry/editor/MapEditor.h"
#include "mindustry/editor/DrawOperation_invoke_arc_func_Cons_3.h"

extern "C" {

jbyte SF_mindustry_editor_DrawOperation_opFloor;
jbyte SF_mindustry_editor_DrawOperation_opBlock;
jbyte SF_mindustry_editor_DrawOperation_opRotation;
jbyte SF_mindustry_editor_DrawOperation_opTeam;
jbyte SF_mindustry_editor_DrawOperation_opOverlay;
jbyte SF_mindustry_editor_DrawOperation_opData;
jbyte SF_mindustry_editor_DrawOperation_opDataExtra;

void mark_mindustry_editor_DrawOperation(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_editor_DrawOperation *) object;
	if (self->F_array)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_array)->clazz)->markFunction)((jobject) self->F_array, mark, depth + 1);
}

void clinit_mindustry_editor_DrawOperation(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_mindustry_editor_DrawOperation_opFloor = jint(0);
	SF_mindustry_editor_DrawOperation_opBlock = jint(1);
	SF_mindustry_editor_DrawOperation_opRotation = jint(2);
	SF_mindustry_editor_DrawOperation_opTeam = jint(3);
	SF_mindustry_editor_DrawOperation_opOverlay = jint(4);
	SF_mindustry_editor_DrawOperation_opData = jint(5);
	SF_mindustry_editor_DrawOperation_opDataExtra = jint(6);
}

void init_mindustry_editor_DrawOperation(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/DrawOperation:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_DrawOperation(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(12);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(22);
	sp[0].o = frame[0].o;
	clinit_arc_struct_LongSeq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_LongSeq);
	init_arc_struct_LongSeq(ctx, sp[1].o);
	((mindustry_editor_DrawOperation *) NULL_CHECK(sp[0].o))->F_array = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_editor_DrawOperation_isEmpty_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/DrawOperation:isEmpty", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(25);
	sp[0].o = (jobject)((mindustry_editor_DrawOperation *) NULL_CHECK((frame[0].o)))->F_array;
	jint temp0 = (jint)((func_arc_struct_LongSeq_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_LongSeq_isEmpty_R_boolean])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_mindustry_editor_DrawOperation_size_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/DrawOperation:size", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(29);
	sp[0].o = (jobject)((mindustry_editor_DrawOperation *) NULL_CHECK((frame[0].o)))->F_array;
	popStackFrame(ctx);
	return ((jint)((arc_struct_LongSeq *) NULL_CHECK(sp[0].o))->F_size);
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_DrawOperation_remove_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/DrawOperation:remove", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(33);
	sp[0].o = (jobject)((mindustry_editor_DrawOperation *) NULL_CHECK((frame[0].o)))->F_array;
	jint temp0 = jint(0);
	sp[1].o = (jobject)((mindustry_editor_DrawOperation *) NULL_CHECK((frame[0].o)))->F_array;
	jint temp1 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, temp0, (((jint)((arc_struct_LongSeq *) NULL_CHECK(sp[1].o))->F_size) - (frame[1].i)));
	sp[0].o = (jobject)((func_arc_struct_LongSeq_setSize_int_R_Array1_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_LongSeq_setSize_int_R_Array1_long])(ctx, sp[0].o, temp1);
	LINE_NUMBER(34);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_DrawOperation_addOperation_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/DrawOperation:addOperation", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(37);
	sp[0].o = (jobject)((mindustry_editor_DrawOperation *) NULL_CHECK((frame[0].o)))->F_array;
	((func_arc_struct_LongSeq_add_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_LongSeq_add_long])(ctx, sp[0].o, (frame[1].l));
	LINE_NUMBER(38);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_DrawOperation_undo(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/DrawOperation:undo", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(41);
	sp[0].o = (jobject)((mindustry_editor_DrawOperation *) NULL_CHECK((frame[0].o)))->F_array;
	frame[1].i = (((jint)((arc_struct_LongSeq *) NULL_CHECK(sp[0].o))->F_size) - (jint(1)));
	}
label_1:;
	INST_ILOAD(1);
	if ((--sp)->i < 0) goto label_2;
	{
	LINE_NUMBER(42);
	((func_mindustry_editor_DrawOperation_updateTile_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_DrawOperation_updateTile_int])(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(41);
	INST_IINC(1, -1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(44);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_editor_DrawOperation_redo(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/DrawOperation:redo", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(47);
	frame[1].i = (jint(0));
	}
label_1:;
	{
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((mindustry_editor_DrawOperation *) NULL_CHECK((frame[0].o)))->F_array;
	if (temp0 >= ((jint)((arc_struct_LongSeq *) NULL_CHECK(sp[0].o))->F_size)) goto label_2;
	}
	{
	LINE_NUMBER(48);
	((func_mindustry_editor_DrawOperation_updateTile_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_DrawOperation_updateTile_int])(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(47);
	INST_IINC(1, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(50);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_editor_DrawOperation_updateTile_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/DrawOperation:updateTile", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(53);
	sp[0].o = (jobject)((mindustry_editor_DrawOperation *) NULL_CHECK((frame[0].o)))->F_array;
	jlong temp0 = (jlong)((func_arc_struct_LongSeq_get_int_R_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_LongSeq_get_int_R_long])(ctx, sp[0].o, (frame[1].i));
	frame[2].l = temp0;
	LINE_NUMBER(54);
	sp[0].o = (jobject)((mindustry_editor_DrawOperation *) NULL_CHECK((frame[0].o)))->F_array;
	jint temp1 = frame[1].i;
	jint temp2 = (jint)SM_mindustry_gen_TileOp_x_long_R_int(ctx, (frame[2].l));
	jint temp3 = (jint)SM_mindustry_gen_TileOp_y_long_R_int(ctx, (frame[2].l));
	jint temp4 = (jint)SM_mindustry_gen_TileOp_type_long_R_int(ctx, (frame[2].l));
	sp[1].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[2].o = (jobject)SF_mindustry_Vars_editor;
	jint temp5 = (jint)SM_mindustry_gen_TileOp_x_long_R_int(ctx, (frame[2].l));
	jint temp6 = (jint)SM_mindustry_gen_TileOp_y_long_R_int(ctx, (frame[2].l));
	sp[2].o = (jobject)((func_mindustry_editor_MapEditor_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_editor_MapEditor_tile_int_int_R_mindustry_world_Tile])(ctx, sp[2].o, temp5, temp6);
	jint temp7 = (jint)SM_mindustry_gen_TileOp_type_long_R_int(ctx, (frame[2].l));
	jint temp8 = (jint)((func_mindustry_editor_DrawOperation_getTile_mindustry_world_Tile_int_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_editor_DrawOperation_getTile_mindustry_world_Tile_int_R_int])(ctx, sp[1].o, sp[2].o, temp7);
	jlong temp9 = (jlong)SM_mindustry_gen_TileOp_get_int_int_int_int_R_long(ctx, temp2, temp3, temp4, temp8);
	((func_arc_struct_LongSeq_set_int_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_LongSeq_set_int_long])(ctx, sp[0].o, temp1, temp9);
	LINE_NUMBER(55);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_editor;
	jint temp10 = (jint)SM_mindustry_gen_TileOp_x_long_R_int(ctx, (frame[2].l));
	jint temp11 = (jint)SM_mindustry_gen_TileOp_y_long_R_int(ctx, (frame[2].l));
	sp[1].o = (jobject)((func_mindustry_editor_MapEditor_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_editor_MapEditor_tile_int_int_R_mindustry_world_Tile])(ctx, sp[1].o, temp10, temp11);
	jint temp12 = (jint)SM_mindustry_gen_TileOp_type_long_R_int(ctx, (frame[2].l));
	jint temp13 = (jint)SM_mindustry_gen_TileOp_value_long_R_int(ctx, (frame[2].l));
	((func_mindustry_editor_DrawOperation_setTile_mindustry_world_Tile_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_DrawOperation_setTile_mindustry_world_Tile_int_int])(ctx, sp[0].o, sp[1].o, temp12, temp13);
	LINE_NUMBER(56);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_mindustry_editor_DrawOperation_getTile_mindustry_world_Tile_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/DrawOperation:getTile", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(59);
	switch((frame[2].i)) {
		case 0: goto label_1;
		case 1: goto label_2;
		case 2: goto label_3;
		case 3: goto label_4;
		case 4: goto label_5;
		case 5: goto label_6;
		case 6: goto label_7;
		default: goto label_8;
	}
	}
label_1:;
	{
	LINE_NUMBER(60);
	jint temp0 = (jint)((func_mindustry_world_Tile_floorID_R_short) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_floorID_R_short])(ctx, (frame[1].o));
	sp[0].i = temp0;
	sp += 1;
	goto label_9;
	}
label_5:;
	{
	LINE_NUMBER(61);
	jint temp0 = (jint)((func_mindustry_world_Tile_overlayID_R_short) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_overlayID_R_short])(ctx, (frame[1].o));
	sp[0].i = temp0;
	sp += 1;
	goto label_9;
	}
label_2:;
	{
	LINE_NUMBER(62);
	jint temp0 = (jint)((func_mindustry_world_Tile_blockID_R_short) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_blockID_R_short])(ctx, (frame[1].o));
	sp[0].i = temp0;
	sp += 1;
	goto label_9;
	}
label_3:;
	{
	LINE_NUMBER(63);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_build;
	if (sp[0].o != nullptr) goto label_10;
	}
	INST_ICONST(0);
	goto label_9;
label_10:;
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_build;
	jint temp0 = jbyte(((jint)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_rotation));
	sp[0].i = temp0;
	sp += 1;
	goto label_9;
	}
label_4:;
	{
	LINE_NUMBER(64);
	jint temp0 = (jint)((func_mindustry_world_Tile_getTeamID_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_getTeamID_R_int])(ctx, (frame[1].o));
	sp[0].i = temp0;
	sp += 1;
	goto label_9;
	}
label_6:;
	{
	LINE_NUMBER(65);
	jint temp0 = (jint)SM_mindustry_gen_TileOpData_get_byte_byte_byte_R_int(ctx, ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_data), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_floorData), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_overlayData));
	sp[0].i = temp0;
	sp += 1;
	goto label_9;
	}
label_7:;
	{
	LINE_NUMBER(66);
	jint temp0 = (jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_extraData;
	sp[0].i = temp0;
	sp += 1;
	goto label_9;
	}
label_8:;
	{
	LINE_NUMBER(67);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Invalid type."_j))));
	throwException(ctx, sp[0].o);	}
label_9:;
	LINE_NUMBER(59);
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_mindustry_editor_DrawOperation_setTile_mindustry_world_Tile_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/DrawOperation:setTile", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(72);
	if ((frame[2].i) == (jint(1))) goto label_1;
	}
	{
	if ((frame[2].i) == (jint(3))) goto label_1;
	}
	{
	if ((frame[2].i) != (jint(2))) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(73);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_DrawOperation_invoke_arc_func_Cons_2(ctx);
		auto proxy = (mindustry_editor_DrawOperation_invoke_arc_func_Cons_2 *) gcAlloc(ctx, &class_mindustry_editor_DrawOperation_invoke_arc_func_Cons_2);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_world_Tile_getLinkedTiles_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_getLinkedTiles_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	goto label_3;
	}
label_2:;
	{
	LINE_NUMBER(78);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	sp[0].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK(sp[0].o))->F_renderer;
	((func_mindustry_editor_EditorRenderer_updateStatic_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_EditorRenderer_updateStatic_int_int])(ctx, sp[0].o, ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_x), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_y));
	}
label_3:;
	{
	LINE_NUMBER(81);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_DrawOperation_invoke_java_lang_Runnable_1(ctx);
		auto proxy = (mindustry_editor_DrawOperation_invoke_java_lang_Runnable_1 *) gcAlloc(ctx, &class_mindustry_editor_DrawOperation_invoke_java_lang_Runnable_1);
		proxy->F_field2 = (jref) (frame[1].o);
		proxy->F_field1 = (frame[3].i);
		proxy->F_field0 = (frame[2].i);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_editor_MapEditor_load_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapEditor_load_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(113);
	if ((frame[2].i) == (jint(1))) goto label_5;
	}
	{
	if ((frame[2].i) == (jint(3))) goto label_5;
	}
	{
	if ((frame[2].i) != (jint(2))) goto label_6;
	}
label_5:;
	{
	LINE_NUMBER(114);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_DrawOperation_invoke_arc_func_Cons_3(ctx);
		auto proxy = (mindustry_editor_DrawOperation_invoke_arc_func_Cons_3 *) gcAlloc(ctx, &class_mindustry_editor_DrawOperation_invoke_arc_func_Cons_3);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_world_Tile_getLinkedTiles_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_getLinkedTiles_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	}
label_6:;
	LINE_NUMBER(119);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_editor_DrawOperation_lambda$setTile$2_mindustry_world_Tile(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/DrawOperation:lambda$setTile$2", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_DrawOperation(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(115);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	sp[0].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK(sp[0].o))->F_renderer;
	((func_mindustry_editor_EditorRenderer_updateBlock_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_EditorRenderer_updateBlock_mindustry_world_Tile])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(116);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	sp[0].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK(sp[0].o))->F_renderer;
	((func_mindustry_editor_EditorRenderer_updateStatic_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_EditorRenderer_updateStatic_int_int])(ctx, sp[0].o, ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_x), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_y));
	LINE_NUMBER(117);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_DrawOperation_lambda$setTile$1_int_int_mindustry_world_Tile(jcontext ctx, jint param0, jint param1, jobject param2) {
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/DrawOperation:lambda$setTile$1", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_DrawOperation(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(82);
	switch((frame[0].i)) {
		case 0: goto label_1;
		case 1: goto label_2;
		case 2: goto label_3;
		case 3: goto label_4;
		case 4: goto label_5;
		case 5: goto label_6;
		case 6: goto label_7;
		default: goto label_8;
	}
	}
label_1:;
	{
	LINE_NUMBER(84);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_block_int_R_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_block_int_R_mindustry_world_Block])(ctx, sp[0].o, (frame[1].i));
	frame[4].o = sp[0].o;
	if ((isInstance(ctx, (frame[4].o), &class_mindustry_world_blocks_environment_Floor)) == 0) goto label_10;
	}
	{
	frame[3].o = (checkCast(ctx, &class_mindustry_world_blocks_environment_Floor, (frame[4].o)));
	LINE_NUMBER(85);
	((func_mindustry_world_Tile_setFloor_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_Tile_setFloor_mindustry_world_blocks_environment_Floor])(ctx, (frame[2].o), (frame[3].o));
	}
label_10:;
	LINE_NUMBER(87);
	goto label_8;
label_5:;
	{
	LINE_NUMBER(89);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_block_int_R_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_block_int_R_mindustry_world_Block])(ctx, sp[0].o, (frame[1].i));
	frame[4].o = sp[0].o;
	if ((isInstance(ctx, (frame[4].o), &class_mindustry_world_blocks_environment_Floor)) == 0) goto label_13;
	}
	{
	frame[3].o = (checkCast(ctx, &class_mindustry_world_blocks_environment_Floor, (frame[4].o)));
	LINE_NUMBER(90);
	((func_mindustry_world_Tile_setOverlay_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_Tile_setOverlay_mindustry_world_Block])(ctx, (frame[2].o), (frame[3].o));
	}
label_13:;
	LINE_NUMBER(92);
	goto label_8;
label_2:;
	{
	LINE_NUMBER(94);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_block_int_R_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_block_int_R_mindustry_world_Block])(ctx, sp[0].o, (frame[1].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(95);
	sp[0].o = frame[2].o;
	sp[1].o = frame[3].o;
	sp[2].o = (jobject)((func_mindustry_world_Tile_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_Tile_team_R_mindustry_game_Team])(ctx, (frame[2].o));
	sp[3].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[2].o)))->F_build;
	sp += 3;
	if (sp[0].o != nullptr) goto label_16;
	}
	INST_ICONST(0);
	goto label_17;
label_16:;
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[2].o)))->F_build;
	jint temp0 = (jint)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_rotation;
	sp[0].i = temp0;
	sp += 1;
	}
label_17:;
	{
	sp -= 4;
	((func_mindustry_world_Tile_setBlock_mindustry_world_Block_mindustry_game_Team_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_setBlock_mindustry_world_Block_mindustry_game_Team_int])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].i);
	LINE_NUMBER(96);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[2].o)))->F_build;
	if (sp[0].o == nullptr) goto label_19;
	}
	{
	LINE_NUMBER(97);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[2].o)))->F_build;
	((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_enabled = (jint(1));
	}
label_19:;
	LINE_NUMBER(99);
	goto label_8;
label_3:;
	{
	LINE_NUMBER(101);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[2].o)))->F_build;
	if (sp[0].o == nullptr) goto label_8;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[2].o)))->F_build;
	((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_rotation = (frame[1].i);
	goto label_8;
	}
label_4:;
	{
	LINE_NUMBER(103);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)SM_mindustry_game_Team_get_int_R_mindustry_game_Team(ctx, (frame[1].i));
	((func_mindustry_world_Tile_setTeam_mindustry_game_Team) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_setTeam_mindustry_game_Team])(ctx, sp[0].o, sp[1].o);
	goto label_8;
	}
label_6:;
	{
	LINE_NUMBER(105);
	sp[0].o = frame[2].o;
	jint temp0 = (jint)SM_mindustry_gen_TileOpData_data_int_R_byte(ctx, (frame[1].i));
	((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_data = temp0;
	LINE_NUMBER(106);
	sp[0].o = frame[2].o;
	jint temp1 = (jint)SM_mindustry_gen_TileOpData_floorData_int_R_byte(ctx, (frame[1].i));
	((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_floorData = temp1;
	LINE_NUMBER(107);
	sp[0].o = frame[2].o;
	jint temp2 = (jint)SM_mindustry_gen_TileOpData_overlayData_int_R_byte(ctx, (frame[1].i));
	((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_overlayData = temp2;
	LINE_NUMBER(108);
	goto label_8;
	}
label_7:;
	{
	LINE_NUMBER(109);
	((mindustry_world_Tile *) NULL_CHECK((frame[2].o)))->F_extraData = (frame[1].i);
	}
label_8:;
	LINE_NUMBER(111);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_editor_DrawOperation_lambda$setTile$0_mindustry_world_Tile(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/DrawOperation:lambda$setTile$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_DrawOperation(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(74);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	sp[0].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK(sp[0].o))->F_renderer;
	((func_mindustry_editor_EditorRenderer_updateBlock_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_EditorRenderer_updateBlock_mindustry_world_Tile])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(75);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	sp[0].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK(sp[0].o))->F_renderer;
	((func_mindustry_editor_EditorRenderer_updateStatic_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_EditorRenderer_updateStatic_int_int])(ctx, sp[0].o, ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_x), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_y));
	LINE_NUMBER(76);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_editor_DrawOperation[] {
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
	(void *) M_mindustry_editor_DrawOperation_isEmpty_R_boolean,
	(void *) M_mindustry_editor_DrawOperation_size_R_int,
	(void *) M_mindustry_editor_DrawOperation_remove_int,
	(void *) M_mindustry_editor_DrawOperation_addOperation_long,
	(void *) M_mindustry_editor_DrawOperation_undo,
	(void *) M_mindustry_editor_DrawOperation_redo,
	(void *) M_mindustry_editor_DrawOperation_updateTile_int,
	(void *) M_mindustry_editor_DrawOperation_getTile_mindustry_world_Tile_int_R_int,
	(void *) M_mindustry_editor_DrawOperation_setTile_mindustry_world_Tile_int_int,
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
	{ "isEmpty", "()Z" },
	{ "size", "()I" },
	{ "remove", "(I)V" },
	{ "addOperation", "(J)V" },
	{ "undo", "()V" },
	{ "redo", "()V" },
	{ "updateTile", "(I)V" },
	{ "getTile", "(Lmindustry/world/Tile;I)I" },
	{ "setTile", "(Lmindustry/world/Tile;II)V" },
};

static jclass innerClasses[] {
	&class_mindustry_editor_DrawOperation$TileOpDataStruct,
	&class_mindustry_editor_DrawOperation$TileOpStruct,
};

static FieldMetadata fields[] {
	{ "opFloor", &class_byte, (intptr_t) &SF_mindustry_editor_DrawOperation_opFloor, "B", 24 },
	{ "opBlock", &class_byte, (intptr_t) &SF_mindustry_editor_DrawOperation_opBlock, "B", 24 },
	{ "opRotation", &class_byte, (intptr_t) &SF_mindustry_editor_DrawOperation_opRotation, "B", 24 },
	{ "opTeam", &class_byte, (intptr_t) &SF_mindustry_editor_DrawOperation_opTeam, "B", 24 },
	{ "opOverlay", &class_byte, (intptr_t) &SF_mindustry_editor_DrawOperation_opOverlay, "B", 24 },
	{ "opData", &class_byte, (intptr_t) &SF_mindustry_editor_DrawOperation_opData, "B", 24 },
	{ "opDataExtra", &class_byte, (intptr_t) &SF_mindustry_editor_DrawOperation_opDataExtra, "B", 24 },
	{ "array", &class_arc_struct_LongSeq, offsetof(mindustry_editor_DrawOperation, F_array), "Larc/struct/LongSeq;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_editor_DrawOperation, 0, "()V", 1 },
	{ "isEmpty", (intptr_t) M_mindustry_editor_DrawOperation_isEmpty_R_boolean, VTABLE_mindustry_editor_DrawOperation_isEmpty_R_boolean, "()Z", 1 },
	{ "size", (intptr_t) M_mindustry_editor_DrawOperation_size_R_int, VTABLE_mindustry_editor_DrawOperation_size_R_int, "()I", 1 },
	{ "remove", (intptr_t) M_mindustry_editor_DrawOperation_remove_int, VTABLE_mindustry_editor_DrawOperation_remove_int, "(I)V", 1 },
	{ "addOperation", (intptr_t) M_mindustry_editor_DrawOperation_addOperation_long, VTABLE_mindustry_editor_DrawOperation_addOperation_long, "(J)V", 1 },
	{ "undo", (intptr_t) M_mindustry_editor_DrawOperation_undo, VTABLE_mindustry_editor_DrawOperation_undo, "()V", 1 },
	{ "redo", (intptr_t) M_mindustry_editor_DrawOperation_redo, VTABLE_mindustry_editor_DrawOperation_redo, "()V", 1 },
	{ "updateTile", (intptr_t) M_mindustry_editor_DrawOperation_updateTile_int, VTABLE_mindustry_editor_DrawOperation_updateTile_int, "(I)V", 2 },
	{ "getTile", (intptr_t) M_mindustry_editor_DrawOperation_getTile_mindustry_world_Tile_int_R_int, VTABLE_mindustry_editor_DrawOperation_getTile_mindustry_world_Tile_int_R_int, "(Lmindustry/world/Tile;I)I", 0 },
	{ "setTile", (intptr_t) M_mindustry_editor_DrawOperation_setTile_mindustry_world_Tile_int_int, VTABLE_mindustry_editor_DrawOperation_setTile_mindustry_world_Tile_int_int, "(Lmindustry/world/Tile;II)V", 0 },
	{ "lambda$setTile$2", (intptr_t) SM_mindustry_editor_DrawOperation_lambda$setTile$2_mindustry_world_Tile, 0, "(Lmindustry/world/Tile;)V", 4106 },
	{ "lambda$setTile$1", (intptr_t) SM_mindustry_editor_DrawOperation_lambda$setTile$1_int_int_mindustry_world_Tile, 0, "(IILmindustry/world/Tile;)V", 4106 },
	{ "lambda$setTile$0", (intptr_t) SM_mindustry_editor_DrawOperation_lambda$setTile$0_mindustry_world_Tile, 0, "(Lmindustry/world/Tile;)V", 4106 },
};

Class class_mindustry_editor_DrawOperation{
		.nativeName = (intptr_t) "mindustry/editor/DrawOperation",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_editor_DrawOperation),
		.classVtable = (intptr_t) vtable_mindustry_editor_DrawOperation,
		.staticInitializer = (intptr_t) clinit_mindustry_editor_DrawOperation,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_editor_DrawOperation,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 2,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 8,
		.nativeFields = (intptr_t) fields,
		.methodCount = 13,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 20,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_editor_DrawOperation = registerClass(&class_mindustry_editor_DrawOperation);

}
