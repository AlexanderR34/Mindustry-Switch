#include "mindustry/world/Tile.h"
#include "arc/func/Prov.h"
#include "arc/Events.h"
#include "mindustry/world/Tile_invoke_mindustry_world_modules_ItemModule_ItemCalculator_1.h"
#include "arc/math/geom/Point2.h"
#include "arc/math/geom/Rect.h"
#include "mindustry/ai/Pathfinder.h"
#include "arc/graphics/Color.h"
#include "java/lang/reflect/Constructor.h"
#include "mindustry/ai/BlockIndexer.h"
#include "arc/scene/ui/Image.h"
#include "mindustry/world/modules/ItemModule_ItemCalculator.h"
#include "mindustry/core/ContentLoader.h"
#include "mindustry/core/Renderer.h"
#include "arc/struct/Seq.h"
#include "java/lang/reflect/Method.h"
#include "arc/scene/ui/layout/Cell.h"
#include "mindustry/world/Tile.h"
#include "mindustry/world/modules/PowerModule.h"
#include "arc/math/geom/Position.h"
#include "arc/math/Mathf.h"
#include "java/lang/reflect/Field.h"
#include "mindustry/world/blocks/power/PowerGraph.h"
#include "java/util/Iterator.h"
#include "mindustry/type/Liquid.h"
#include "mindustry/world/modules/LiquidModule_LiquidCalculator.h"
#include "mindustry/type/Item.h"
#include "arc/util/Nullable.h"
#include "mindustry/world/modules/ItemModule.h"
#include "mindustry/gen/Building.h"
#include "mindustry/game/EventType_TileFloorChangeEvent.h"
#include "java/lang/Object.h"
#include "mindustry/graphics/FloorRenderer.h"
#include "arc/struct/ObjectSet.h"
#include "mindustry/world/modules/LiquidModule.h"
#include "arc/func/Intc2.h"
#include "mindustry/world/Block.h"
#include "java/lang/Float.h"
#include "mindustry/world/Tile_PackedTileDataStruct.h"
#include "mindustry/graphics/BlockRenderer.h"
#include "arc/struct/IntSeq.h"
#include "mindustry/ui/Displayable.h"
#include "mindustry/world/Tiles.h"
#include "arc/func/Cons.h"
#include "arc/struct/IntSet.h"
#include "java/lang/String.h"
#include "mindustry/game/EventType_TilePreChangeEvent.h"
#include "mindustry/game/EventType_TileOverlayChangeEvent.h"
#include "arc/struct/ObjectSet_ObjectSetIterator.h"
#include "mindustry/graphics/MinimapRenderer.h"
#include "mindustry/world/blocks/environment/Floor.h"
#include "arc/math/geom/Geometry.h"
#include "mindustry/world/blocks/environment/OverlayFloor.h"
#include "java/lang/Math.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "mindustry/world/Edges.h"
#include "arc/math/geom/QuadTree_QuadTreeObject.h"
#include "arc/util/Scaling.h"
#include "arc/scene/ui/layout/Table.h"
#include "mindustry/world/Tile_invoke_arc_func_Intc2_1.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/game/EventType_TileChangeEvent.h"
#include "mindustry/world/Tile_invoke_arc_func_Prov_3.h"
#include "mindustry/world/Tile_invoke_arc_func_Prov_2.h"
#include "mindustry/content/Blocks.h"
#include "arc/scene/Element.h"
#include "mindustry/game/Teams.h"
#include "mindustry/gen/PackedTileData.h"
#include "mindustry/world/Tile_invoke_arc_func_Cons_3.h"
#include "mindustry/world/Tile_invoke_arc_func_Cons_4.h"
#include "mindustry/world/Tile_invoke_arc_func_Cons_5.h"
#include "mindustry/game/Team.h"
#include "java/util/Objects.h"
#include "java/lang/Class.h"
#include "mindustry/Vars.h"
#include "mindustry/core/World.h"
#include "mindustry/world/Tile_invoke_mindustry_world_modules_LiquidModule_LiquidCalculator_1.h"
#include "mindustry/core/GameState.h"
#include "mindustry/gen/Call.h"

extern "C" {

jobject SF_mindustry_world_Tile_tileChange;
jobject SF_mindustry_world_Tile_preChange;
jobject SF_mindustry_world_Tile_floorChange;
jobject SF_mindustry_world_Tile_overlayChange;
jobject SF_mindustry_world_Tile_tileSet;
jobject SF_mindustry_world_Tile_staleGraphs;

void mark_mindustry_world_Tile(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_world_Tile_tileChange)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_Tile_tileChange)->clazz)->markFunction)((jobject) SF_mindustry_world_Tile_tileChange, mark, depth + 1);
		if (SF_mindustry_world_Tile_preChange)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_Tile_preChange)->clazz)->markFunction)((jobject) SF_mindustry_world_Tile_preChange, mark, depth + 1);
		if (SF_mindustry_world_Tile_floorChange)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_Tile_floorChange)->clazz)->markFunction)((jobject) SF_mindustry_world_Tile_floorChange, mark, depth + 1);
		if (SF_mindustry_world_Tile_overlayChange)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_Tile_overlayChange)->clazz)->markFunction)((jobject) SF_mindustry_world_Tile_overlayChange, mark, depth + 1);
		if (SF_mindustry_world_Tile_tileSet)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_Tile_tileSet)->clazz)->markFunction)((jobject) SF_mindustry_world_Tile_tileSet, mark, depth + 1);
		if (SF_mindustry_world_Tile_staleGraphs)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_Tile_staleGraphs)->clazz)->markFunction)((jobject) SF_mindustry_world_Tile_staleGraphs, mark, depth + 1);
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
	auto self = (mindustry_world_Tile *) object;
	if (self->F_build)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_build)->clazz)->markFunction)((jobject) self->F_build, mark, depth + 1);
	if (self->F_block)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_block)->clazz)->markFunction)((jobject) self->F_block, mark, depth + 1);
	if (self->F_floor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_floor)->clazz)->markFunction)((jobject) self->F_floor, mark, depth + 1);
	if (self->F_overlay)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_overlay)->clazz)->markFunction)((jobject) self->F_overlay, mark, depth + 1);
}

void init_mindustry_world_Tile_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tile:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_Tile(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(50);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(48);
	((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_changing = (jint(0));
	LINE_NUMBER(51);
	((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_x = (jshort((frame[1].i)));
	LINE_NUMBER(52);
	((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_y = (jshort((frame[2].i)));
	LINE_NUMBER(53);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp[2].o = frame[0].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_air;
	sp[3].o = checkCast(ctx, &class_mindustry_world_blocks_environment_Floor, sp[3].o);
	((mindustry_world_Tile *) NULL_CHECK(sp[2].o))->F_overlay = (jref) sp[3].o;
	((mindustry_world_Tile *) NULL_CHECK(sp[1].o))->F_floor = (jref) sp[3].o;
	((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_block = (jref) sp[3].o;
	LINE_NUMBER(54);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_world_Tile_int_int_mindustry_world_Block_mindustry_world_Block_mindustry_world_Block(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jobject param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tile:<init>", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_Tile(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(56);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(48);
	((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_changing = (jint(0));
	LINE_NUMBER(57);
	((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_x = (jshort((frame[1].i)));
	LINE_NUMBER(58);
	((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_y = (jshort((frame[2].i)));
	LINE_NUMBER(59);
	((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_floor = (jref) (checkCast(ctx, &class_mindustry_world_blocks_environment_Floor, (frame[3].o)));
	LINE_NUMBER(60);
	((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_overlay = (jref) (checkCast(ctx, &class_mindustry_world_blocks_environment_Floor, (frame[4].o)));
	LINE_NUMBER(61);
	((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_block = (jref) (frame[5].o);
	LINE_NUMBER(64);
	sp[0].o = frame[0].o;
	clinit_mindustry_game_Team(ctx);
	sp[1].o = (jobject)SF_mindustry_game_Team_derelict;
	sp[2].o = frame[5].o;
	sp[3].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[2].o);
	{ /* InvokeDynamic */
		clinit_mindustry_world_Tile_invoke_arc_func_Prov_2(ctx);
		auto proxy = (mindustry_world_Tile_invoke_arc_func_Prov_2 *) gcAlloc(ctx, &class_mindustry_world_Tile_invoke_arc_func_Prov_2);
		proxy->F_field0 = (jref) sp[2].o;
		sp[2].o = (jobject) proxy;
	}
	((func_mindustry_world_Tile_changeBuild_mindustry_game_Team_arc_func_Prov_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_changeBuild_mindustry_game_Team_arc_func_Prov_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (jint(0)));
	LINE_NUMBER(65);
	((func_mindustry_world_Tile_changed) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Tile_changed])(ctx, (frame[0].o));
	LINE_NUMBER(66);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_world_Tile_int_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tile:<init>", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_Tile(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(69);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	jint temp1 = frame[2].i;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_block_int_R_mindustry_world_Block) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_block_int_R_mindustry_world_Block])(ctx, sp[1].o, (frame[3].i));
	clinit_mindustry_Vars(ctx);
	sp[2].o = (jobject)SF_mindustry_Vars_content;
	sp[2].o = (jobject)((func_mindustry_core_ContentLoader_block_int_R_mindustry_world_Block) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_core_ContentLoader_block_int_R_mindustry_world_Block])(ctx, sp[2].o, (frame[4].i));
	clinit_mindustry_Vars(ctx);
	sp[3].o = (jobject)SF_mindustry_Vars_content;
	sp[3].o = (jobject)((func_mindustry_core_ContentLoader_block_int_R_mindustry_world_Block) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_mindustry_core_ContentLoader_block_int_R_mindustry_world_Block])(ctx, sp[3].o, (frame[5].i));
	init_mindustry_world_Tile_int_int_mindustry_world_Block_mindustry_world_Block_mindustry_world_Block(ctx, sp[0].o, temp0, temp1, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(70);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_mindustry_world_Tile_pos_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tile:pos", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(74);
	jint temp0 = (jint)SM_arc_math_geom_Point2_pack_int_int_R_int(ctx, ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_x), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_y));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_mindustry_world_Tile_array_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tile:array", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(79);
	jint temp0 = (jint)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_x;
	jint temp1 = (jint)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_y;
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((mindustry_core_World *) NULL_CHECK(sp[0].o))->F_tiles;
	popStackFrame(ctx);
	return (temp0 + (temp1 * ((jint)((mindustry_world_Tiles *) NULL_CHECK(sp[0].o))->F_width)));
	}

	popStackFrame(ctx);
}

jbyte M_mindustry_world_Tile_relativeTo_mindustry_world_Tile_R_byte(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tile:relativeTo", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(83);
	jint temp0 = (jint)((func_mindustry_world_Tile_relativeTo_int_int_R_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Tile_relativeTo_int_int_R_byte])(ctx, (frame[0].o), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_x), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_y));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbyte M_mindustry_world_Tile_relativeTo_int_int_R_byte(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tile:relativeTo", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(88);
	if (((jint)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_x) != (frame[1].i)) goto label_1;
	}
	{
	if (((jint)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_y) != ((frame[2].i) - (jint(1)))) goto label_1;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(89);
	if (((jint)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_x) != (frame[1].i)) goto label_2;
	}
	{
	if (((jint)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_y) != ((frame[2].i) + (jint(1)))) goto label_2;
	}
	INST_ICONST(3);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(90);
	if (((jint)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_x) != ((frame[1].i) - (jint(1)))) goto label_3;
	}
	{
	if (((jint)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_y) != (frame[2].i)) goto label_3;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(91);
	if (((jint)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_x) != ((frame[1].i) + (jint(1)))) goto label_4;
	}
	{
	if (((jint)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_y) != (frame[2].i)) goto label_4;
	}
	INST_ICONST(2);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
	{
	LINE_NUMBER(92);
	popStackFrame(ctx);
	return (jint(-1));
	}

	popStackFrame(ctx);
}

jbyte SM_mindustry_world_Tile_relativeTo_int_int_int_int_R_byte(jcontext ctx, jint param0, jint param1, jint param2, jint param3) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tile:relativeTo", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_Tile(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(96);
	if ((frame[0].i) != (frame[2].i)) goto label_1;
	}
	{
	if ((frame[1].i) != ((frame[3].i) - (jint(1)))) goto label_1;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(97);
	if ((frame[0].i) != (frame[2].i)) goto label_2;
	}
	{
	if ((frame[1].i) != ((frame[3].i) + (jint(1)))) goto label_2;
	}
	INST_ICONST(3);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(98);
	if ((frame[0].i) != ((frame[2].i) - (jint(1)))) goto label_3;
	}
	{
	if ((frame[1].i) != (frame[3].i)) goto label_3;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(99);
	if ((frame[0].i) != ((frame[2].i) + (jint(1)))) goto label_4;
	}
	{
	if ((frame[1].i) != (frame[3].i)) goto label_4;
	}
	INST_ICONST(2);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
	{
	LINE_NUMBER(100);
	popStackFrame(ctx);
	return (jint(-1));
	}

	popStackFrame(ctx);
}

jint SM_mindustry_world_Tile_relativeTo_float_float_float_float_R_int(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tile:relativeTo", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_Tile(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	{
	LINE_NUMBER(104);
	jfloat temp0 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, ((frame[0].f) - (frame[2].f)));
	jfloat temp1 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, ((frame[1].f) - (frame[3].f)));
	if ((floatCompare(temp0, temp1, -1)) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(105);
	if ((floatCompare((frame[0].f), ((frame[2].f) - (jfloat(1))), 1)) > 0) goto label_3;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(106);
	if ((floatCompare((frame[0].f), ((frame[2].f) + (jfloat(1))), -1)) < 0) goto label_4;
	}
	INST_ICONST(2);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(108);
	if ((floatCompare((frame[1].f), ((frame[3].f) - (jfloat(1))), 1)) > 0) goto label_5;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(109);
	if ((floatCompare((frame[1].f), ((frame[3].f) + (jfloat(1))), -1)) < 0) goto label_4;
	}
	INST_ICONST(3);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
	{
	LINE_NUMBER(111);
	popStackFrame(ctx);
	return (jint(-1));
	}

	popStackFrame(ctx);
}

jbyte M_mindustry_world_Tile_absoluteRelativeTo_int_int_R_byte(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tile:absoluteRelativeTo", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(117);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_block;
	if ((((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size) % (jint(2))) != (jint(1))) goto label_1;
	}
	{
	LINE_NUMBER(118);
	jint temp0 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, (((jint)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_x) - (frame[1].i)));
	jint temp1 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, (((jint)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_y) - (frame[2].i)));
	if (temp0 <= temp1) goto label_3;
	}
	{
	LINE_NUMBER(119);
	if (((jint)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_x) > ((frame[1].i) - (jint(1)))) goto label_5;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(120);
	if (((jint)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_x) < ((frame[1].i) + (jint(1)))) goto label_6;
	}
	INST_ICONST(2);
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(122);
	if (((jint)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_y) > ((frame[2].i) - (jint(1)))) goto label_7;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_7:;
	{
	LINE_NUMBER(123);
	if (((jint)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_y) < ((frame[2].i) + (jint(1)))) goto label_6;
	}
	INST_ICONST(3);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(126);
	jfloat temp0 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, ((jfloat((((jint)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_x) - (frame[1].i)))) + (jfloat(0.5f))));
	jfloat temp1 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, ((jfloat((((jint)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_y) - (frame[2].i)))) + (jfloat(0.5f))));
	if ((floatCompare(temp0, temp1, -1)) <= 0) goto label_8;
	}
	{
	LINE_NUMBER(127);
	if ((floatCompare(((jfloat(((jint)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_x))) + (jfloat(0.5f))), (jfloat(((frame[1].i) - (jint(1))))), 1)) > 0) goto label_10;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_10:;
	{
	LINE_NUMBER(128);
	if ((floatCompare(((jfloat(((jint)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_x))) + (jfloat(0.5f))), (jfloat(((frame[1].i) + (jint(1))))), -1)) < 0) goto label_6;
	}
	INST_ICONST(2);
	popStackFrame(ctx);
	INST_IRETURN();
label_8:;
	{
	LINE_NUMBER(130);
	if ((floatCompare(((jfloat(((jint)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_y))) + (jfloat(0.5f))), (jfloat(((frame[2].i) - (jint(1))))), 1)) > 0) goto label_11;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_11:;
	{
	LINE_NUMBER(131);
	if ((floatCompare(((jfloat(((jint)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_y))) + (jfloat(0.5f))), (jfloat(((frame[2].i) + (jint(1))))), -1)) < 0) goto label_6;
	}
	INST_ICONST(3);
	popStackFrame(ctx);
	INST_IRETURN();
label_6:;
	{
	LINE_NUMBER(135);
	popStackFrame(ctx);
	return (jint(-1));
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_world_Tile_getFlammability_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tile:getFlammability", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(143);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_block;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	LINE_NUMBER(144);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_floor;
	sp[0].o = (jobject)((mindustry_world_blocks_environment_Floor *) NULL_CHECK(sp[0].o))->F_liquidDrop;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_floor;
	sp[0].o = (jobject)((mindustry_world_blocks_environment_Floor *) NULL_CHECK(sp[0].o))->F_liquidDrop;
	popStackFrame(ctx);
	return ((jfloat)((mindustry_type_Liquid *) NULL_CHECK(sp[0].o))->F_flammability);
	}
label_3:;
	{
	LINE_NUMBER(145);
	popStackFrame(ctx);
	return (jfloat(0));
	}
label_1:;
	{
	LINE_NUMBER(146);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_build;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	LINE_NUMBER(147);
	frame[1].f = (jfloat(0));
	LINE_NUMBER(149);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_hasItems) == 0) goto label_7;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_build;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_items;
	jint temp0 = (jint)((func_mindustry_world_modules_ItemModule_total_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_total_R_int])(ctx, sp[0].o);
	if (temp0 <= 0) goto label_7;
	}
	{
	LINE_NUMBER(150);
	jfloat temp0 = frame[1].f;
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_build;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_items;
	{ /* InvokeDynamic */
		clinit_mindustry_world_Tile_invoke_mindustry_world_modules_ItemModule$ItemCalculator_1(ctx);
		auto proxy = (mindustry_world_Tile_invoke_mindustry_world_modules_ItemModule$ItemCalculator_1 *) gcAlloc(ctx, &class_mindustry_world_Tile_invoke_mindustry_world_modules_ItemModule$ItemCalculator_1);
		sp[1].o = (jobject) proxy;
	}
	jfloat temp1 = (jfloat)((func_mindustry_world_modules_ItemModule_sum_mindustry_world_modules_ItemModule$ItemCalculator_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_sum_mindustry_world_modules_ItemModule$ItemCalculator_R_float])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_block;
	jint temp2 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, ((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_itemCapacity), (jint(1)));
	jfloat temp3 = temp1 / (jfloat(temp2));
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_block;
	jfloat temp4 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, ((jfloat(((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_itemCapacity))) / (jfloat(2.4f))), (jfloat(1)), (jfloat(3.0f)));
	frame[1].f = (temp0 + (temp3 * temp4));
	}
label_7:;
	{
	LINE_NUMBER(153);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_hasLiquids) == 0) goto label_9;
	}
	{
	LINE_NUMBER(154);
	jfloat temp0 = frame[1].f;
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_build;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_liquids;
	{ /* InvokeDynamic */
		clinit_mindustry_world_Tile_invoke_mindustry_world_modules_LiquidModule$LiquidCalculator_1(ctx);
		auto proxy = (mindustry_world_Tile_invoke_mindustry_world_modules_LiquidModule$LiquidCalculator_1 *) gcAlloc(ctx, &class_mindustry_world_Tile_invoke_mindustry_world_modules_LiquidModule$LiquidCalculator_1);
		sp[1].o = (jobject) proxy;
	}
	jfloat temp1 = (jfloat)((func_mindustry_world_modules_LiquidModule_sum_mindustry_world_modules_LiquidModule$LiquidCalculator_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_sum_mindustry_world_modules_LiquidModule$LiquidCalculator_R_float])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_block;
	jfloat temp2 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((jfloat)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_liquidCapacity), (jfloat(1)));
	jfloat temp3 = temp1 / temp2;
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_block;
	jfloat temp4 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, (((jfloat)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_liquidCapacity) / (jfloat(30.0f))), (jfloat(1)), (jfloat(2)));
	frame[1].f = (temp0 + (temp3 * temp4));
	}
label_9:;
	{
	LINE_NUMBER(157);
	popStackFrame(ctx);
	return (frame[1].f);
	}
label_4:;
	{
	LINE_NUMBER(159);
	popStackFrame(ctx);
	return (jfloat(0));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_Tile_inMapArea_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tile:inMapArea", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(163);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp0 = (jint)((func_mindustry_core_World_isInMapArea_int_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_isInMapArea_int_int_R_boolean])(ctx, sp[0].o, ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_x), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_y));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_world_Tile_worldx_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tile:worldx", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(167);
	popStackFrame(ctx);
	return (jfloat((((jint)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_x) * (8))));
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_world_Tile_worldy_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tile:worldy", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(171);
	popStackFrame(ctx);
	return (jfloat((((jint)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_y) * (8))));
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_world_Tile_drawx_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tile:drawx", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(176);
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[0].o));
	jfloat temp0 = (jfloat)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_offset;
	jfloat temp1 = (jfloat)((func_mindustry_world_Tile_worldx_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Tile_worldx_R_float])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return (temp0 + temp1);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_world_Tile_drawy_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tile:drawy", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(180);
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[0].o));
	jfloat temp0 = (jfloat)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_offset;
	jfloat temp1 = (jfloat)((func_mindustry_world_Tile_worldy_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Tile_worldy_R_float])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return (temp0 + temp1);
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_Tile_isDarkened_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tile:isDarkened", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(184);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_block;
	jint temp0 = (jint)((func_mindustry_world_Block_isDarkened_mindustry_world_Tile_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_isDarkened_mindustry_world_Tile_R_boolean])(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tile:floor", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(188);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_floor;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_Tile_block_R_mindustry_world_Block(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tile:block", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(192);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_block;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tile:overlay", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(196);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_overlay;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_Tile_updateBlockReference_mindustry_world_Block(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tile:updateBlockReference", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(201);
	((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_block = (jref) (frame[1].o);
	LINE_NUMBER(202);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_Tile_cblock_R_mindustry_world_Block(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tile:cblock", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(206);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_block;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_Tile_team_R_mindustry_game_Team(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tile:team", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(210);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_build;
	if (sp[0].o != nullptr) goto label_1;
	}
	clinit_mindustry_game_Team(ctx);
	(sp++)->o = SF_mindustry_game_Team_derelict;
	goto label_2;
label_1:;
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_build;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_team;
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_Tile_setTeam_mindustry_game_Team(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tile:setTeam", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(215);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_build;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(216);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_build;
	((func_mindustry_gen_Building_team_mindustry_game_Team) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_team_mindustry_game_Team])(ctx, sp[0].o, (frame[1].o));
	}
label_1:;
	LINE_NUMBER(218);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_world_Tile_isCenter_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tile:isCenter", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(221);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_build;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_build;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_tile;
	if (sp[0].o != (frame[0].o)) goto label_2;
	}
label_1:;
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint M_mindustry_world_Tile_centerX_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tile:centerX", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(225);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_build;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	jint temp0 = (jint)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_x;
	sp[0].i = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_build;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_tile;
	jint temp0 = (jint)((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_x;
	sp[0].i = temp0;
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint M_mindustry_world_Tile_centerY_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tile:centerY", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(229);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_build;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	jint temp0 = (jint)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_y;
	sp[0].i = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_build;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_tile;
	jint temp0 = (jint)((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_y;
	sp[0].i = temp0;
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint M_mindustry_world_Tile_getTeamID_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tile:getTeamID", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(233);
	sp[0].o = (jobject)((func_mindustry_world_Tile_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Tile_team_R_mindustry_game_Team])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return ((jint)((mindustry_game_Team *) NULL_CHECK(sp[0].o))->F_id);
	}

	popStackFrame(ctx);
}

void M_mindustry_world_Tile_setBlock_mindustry_world_Block_mindustry_game_Team_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tile:setBlock", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(237);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[2].o;
	jint temp0 = frame[3].i;
	sp[3].o = frame[1].o;
	sp[4].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[3].o);
	{ /* InvokeDynamic */
		clinit_mindustry_world_Tile_invoke_arc_func_Prov_3(ctx);
		auto proxy = (mindustry_world_Tile_invoke_arc_func_Prov_3 *) gcAlloc(ctx, &class_mindustry_world_Tile_invoke_arc_func_Prov_3);
		proxy->F_field0 = (jref) sp[3].o;
		sp[3].o = (jobject) proxy;
	}
	((func_mindustry_world_Tile_setBlock_mindustry_world_Block_mindustry_game_Team_int_arc_func_Prov) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_setBlock_mindustry_world_Block_mindustry_game_Team_int_arc_func_Prov])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, sp[3].o);
	LINE_NUMBER(238);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_Tile_setBlock_mindustry_world_Block_mindustry_game_Team_int_arc_func_Prov(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[19];
	auto stack = &frame[14];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tile:setBlock", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(241);
	((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_changing = (jint(1));
	LINE_NUMBER(243);
	jint temp0 = (jint)((func_mindustry_world_Block_isStatic_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Block_isStatic_R_boolean])(ctx, (frame[1].o));
	if (temp0 != 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_block;
	jint temp0 = (jint)((func_mindustry_world_Block_isStatic_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_isStatic_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
label_2:;
	{
	LINE_NUMBER(244);
	((func_mindustry_world_Tile_recache) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Tile_recache])(ctx, (frame[0].o));
	LINE_NUMBER(245);
	((func_mindustry_world_Tile_recacheWall) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Tile_recacheWall])(ctx, (frame[0].o));
	}
label_3:;
	{
	LINE_NUMBER(248);
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[1].o)))->F_forceTeam;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[1].o)))->F_forceTeam;
	frame[2].o = sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(250);
	((func_mindustry_world_Tile_preChanged) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Tile_preChanged])(ctx, (frame[0].o));
	LINE_NUMBER(252);
	((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_block = (jref) (frame[1].o);
	LINE_NUMBER(253);
	sp[0].o = frame[0].o;
	sp[1].o = frame[2].o;
	sp[2].o = frame[4].o;
	jint temp0 = (jint)SM_arc_math_Mathf_mod_int_int_R_int(ctx, (frame[3].i), (jint(4)));
	((func_mindustry_world_Tile_changeBuild_mindustry_game_Team_arc_func_Prov_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_changeBuild_mindustry_game_Team_arc_func_Prov_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (jbyte(temp0)));
	LINE_NUMBER(255);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_build;
	if (sp[0].o == nullptr) goto label_9;
	}
	{
	LINE_NUMBER(256);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_build;
	((func_mindustry_gen_Building_team_mindustry_game_Team) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_team_mindustry_game_Team])(ctx, sp[0].o, (frame[2].o));
	}
label_9:;
	{
	LINE_NUMBER(260);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_block;
	jint temp0 = (jint)((func_mindustry_world_Block_isMultiblock_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_isMultiblock_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_11;
	}
	{
	LINE_NUMBER(261);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_block;
	frame[5].i = ((-(((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size) - (jint(1)))) / (jint(2)));
	LINE_NUMBER(262);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_build;
	frame[6].o = sp[0].o;
	LINE_NUMBER(263);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_block;
	frame[7].o = sp[0].o;
	LINE_NUMBER(266);
	frame[8].i = (jint(0));
	}
label_16:;
	{
	if ((frame[8].i) >= (jint(2))) goto label_17;
	}
	{
	LINE_NUMBER(267);
	frame[9].i = (jint(0));
	}
label_19:;
	{
	if ((frame[9].i) >= ((jint)((mindustry_world_Block *) NULL_CHECK((frame[7].o)))->F_size)) goto label_20;
	}
	{
	LINE_NUMBER(268);
	frame[10].i = (jint(0));
	}
label_22:;
	{
	if ((frame[10].i) >= ((jint)((mindustry_world_Block *) NULL_CHECK((frame[7].o)))->F_size)) goto label_23;
	}
	{
	LINE_NUMBER(269);
	frame[11].i = (((frame[9].i) + (frame[5].i)) + ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_x));
	LINE_NUMBER(270);
	frame[12].i = (((frame[10].i) + (frame[5].i)) + ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_y));
	LINE_NUMBER(271);
	if ((frame[11].i) != ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_x)) goto label_27;
	}
	{
	if ((frame[12].i) == ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_y)) goto label_28;
	}
label_27:;
	{
	LINE_NUMBER(272);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tile_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, (frame[11].i), (frame[12].i));
	frame[13].o = sp[0].o;
	LINE_NUMBER(274);
	if ((frame[13].o) == nullptr) goto label_28;
	}
	{
	LINE_NUMBER(275);
	if ((frame[8].i) != 0) goto label_31;
	}
	{
	LINE_NUMBER(278);
	sp[0].o = frame[13].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	((func_mindustry_world_Tile_setBlock_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_setBlock_mindustry_world_Block])(ctx, sp[0].o, sp[1].o);
	goto label_28;
	}
label_31:;
	{
	LINE_NUMBER(282);
	((mindustry_world_Tile *) NULL_CHECK((frame[13].o)))->F_build = (jref) (frame[6].o);
	LINE_NUMBER(283);
	((mindustry_world_Tile *) NULL_CHECK((frame[13].o)))->F_block = (jref) (frame[7].o);
	}
label_28:;
	{
	LINE_NUMBER(268);
	INST_IINC(10, 1);
	goto label_22;
	}
label_23:;
	{
	LINE_NUMBER(267);
	INST_IINC(9, 1);
	goto label_19;
	}
label_20:;
	{
	LINE_NUMBER(266);
	INST_IINC(8, 1);
	goto label_16;
	}
label_17:;
	{
	LINE_NUMBER(291);
	((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_build = (jref) (frame[6].o);
	LINE_NUMBER(292);
	((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_block = (jref) (frame[7].o);
	}
label_11:;
	{
	LINE_NUMBER(295);
	((func_mindustry_world_Tile_changed) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Tile_changed])(ctx, (frame[0].o));
	LINE_NUMBER(296);
	((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_changing = (jint(0));
	LINE_NUMBER(298);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_block;
	((func_mindustry_world_Block_blockChanged_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_blockChanged_mindustry_world_Tile])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(299);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_Tile_setBlock_mindustry_world_Block_mindustry_game_Team(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tile:setBlock", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(302);
	((func_mindustry_world_Tile_setBlock_mindustry_world_Block_mindustry_game_Team_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Tile_setBlock_mindustry_world_Block_mindustry_game_Team_int])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (jint(0)));
	LINE_NUMBER(303);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_Tile_setBlock_mindustry_world_Block(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tile:setBlock", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(306);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_mindustry_game_Team(ctx);
	sp[2].o = (jobject)SF_mindustry_game_Team_derelict;
	((func_mindustry_world_Tile_setBlock_mindustry_world_Block_mindustry_game_Team_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_setBlock_mindustry_world_Block_mindustry_game_Team_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (jint(0)));
	LINE_NUMBER(307);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_Tile_setFloor_mindustry_world_blocks_environment_Floor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tile:setFloor", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(310);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_floor;
	if (sp[0].o != (frame[1].o)) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(312);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_floor;
	frame[2].o = sp[0].o;
	LINE_NUMBER(313);
	((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_floor = (jref) (frame[1].o);
	LINE_NUMBER(315);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_headless) != 0) goto label_4;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp0 = (jint)((func_mindustry_core_World_isGenerating_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_isGenerating_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_4;
	}
	{
	jint temp0 = (jint)((func_mindustry_world_Tile_isEditorTile_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Tile_isEditorTile_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_4;
	}
	{
	LINE_NUMBER(316);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_blocks;
	((func_mindustry_graphics_BlockRenderer_removeFloorIndex_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_BlockRenderer_removeFloorIndex_mindustry_world_Tile])(ctx, sp[0].o, (frame[0].o));
	}
label_4:;
	{
	LINE_NUMBER(319);
	((func_mindustry_world_Tile_recache) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Tile_recache])(ctx, (frame[0].o));
	LINE_NUMBER(320);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_build;
	if (sp[0].o == nullptr) goto label_7;
	}
	{
	LINE_NUMBER(321);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_build;
	((func_mindustry_gen_Building_onProximityUpdate) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_onProximityUpdate])(ctx, sp[0].o);
	}
label_7:;
	{
	LINE_NUMBER(323);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp0 = (jint)((func_mindustry_core_World_isGenerating_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_isGenerating_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_9;
	}
	clinit_mindustry_Vars(ctx);
	(sp++)->o = SF_mindustry_Vars_pathfinder;
	if ((--sp)->o == nullptr) goto label_9;
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isEditor_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isEditor_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_9;
	}
	{
	LINE_NUMBER(324);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_pathfinder;
	((func_mindustry_ai_Pathfinder_updateTile_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_Pathfinder_updateTile_mindustry_world_Tile])(ctx, sp[0].o, (frame[0].o));
	}
label_9:;
	{
	LINE_NUMBER(327);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp0 = (jint)((func_mindustry_core_World_isGenerating_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_isGenerating_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_11;
	}
	{
	LINE_NUMBER(328);
	clinit_mindustry_world_Tile(ctx);
	sp[0].o = (jobject)SF_mindustry_world_Tile_floorChange;
	sp[0].o = (jobject)((func_mindustry_game_EventType$TileFloorChangeEvent_set_mindustry_world_Tile_mindustry_world_blocks_environment_Floor_mindustry_world_blocks_environment_Floor_R_mindustry_game_EventType$TileFloorChangeEvent) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_EventType$TileFloorChangeEvent_set_mindustry_world_Tile_mindustry_world_blocks_environment_Floor_mindustry_world_blocks_environment_Floor_R_mindustry_game_EventType$TileFloorChangeEvent])(ctx, sp[0].o, (frame[0].o), (frame[2].o), (frame[1].o));
	SM_arc_Events_fire_java_lang_Object(ctx, sp[0].o);
	}
label_11:;
	{
	LINE_NUMBER(331);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_floor;
	if (sp[0].o == (frame[2].o)) goto label_13;
	}
	{
	LINE_NUMBER(332);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_floor;
	((func_mindustry_world_blocks_environment_Floor_floorChanged_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_environment_Floor_floorChanged_mindustry_world_Tile])(ctx, sp[0].o, (frame[0].o));
	}
label_13:;
	LINE_NUMBER(334);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_world_Tile_isEditorTile_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tile:isEditorTile", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(337);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_mindustry_world_Tile_setAir(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tile:setAir", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(342);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	((func_mindustry_world_Tile_setBlock_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_setBlock_mindustry_world_Block])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(343);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_Tile_circle_int_arc_func_Intc2(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tile:circle", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(346);
	jint temp0 = (jint)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_x;
	jint temp1 = (jint)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_y;
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp2 = (jint)((func_mindustry_core_World_width_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_width_R_int])(ctx, sp[0].o);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp3 = (jint)((func_mindustry_core_World_height_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_height_R_int])(ctx, sp[0].o);
	SM_arc_math_geom_Geometry_circle_int_int_int_int_int_arc_func_Intc2(ctx, temp0, temp1, temp2, temp3, (frame[1].i), (frame[2].o));
	LINE_NUMBER(347);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_Tile_circle_int_arc_func_Cons(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tile:circle", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(350);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	{ /* InvokeDynamic */
		clinit_mindustry_world_Tile_invoke_arc_func_Intc2_1(ctx);
		auto proxy = (mindustry_world_Tile_invoke_arc_func_Intc2_1 *) gcAlloc(ctx, &class_mindustry_world_Tile_invoke_arc_func_Intc2_1);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_world_Tile_circle_int_arc_func_Intc2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_circle_int_arc_func_Intc2])(ctx, sp[0].o, temp0, sp[1].o);
	LINE_NUMBER(351);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_Tile_getFloorColor_R_arc_graphics_Color(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tile:getFloorColor", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(354);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_floor;
	sp[0].o = (jobject)((func_mindustry_world_blocks_environment_Floor_getColor_mindustry_world_Tile_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_environment_Floor_getColor_mindustry_world_Tile_R_arc_graphics_Color])(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_Tile_recacheWall(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tile:recacheWall", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(358);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_headless) != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp0 = (jint)((func_mindustry_core_World_isGenerating_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_isGenerating_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(359);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_blocks;
	((func_mindustry_graphics_BlockRenderer_recacheWall_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_BlockRenderer_recacheWall_mindustry_world_Tile])(ctx, sp[0].o, (frame[0].o));
	}
label_1:;
	LINE_NUMBER(361);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_Tile_recache(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tile:recache", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(364);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_headless) != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp0 = (jint)((func_mindustry_core_World_isGenerating_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_isGenerating_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(365);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_blocks;
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK(sp[0].o))->F_floor;
	((func_mindustry_graphics_FloorRenderer_recacheTile_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_FloorRenderer_recacheTile_mindustry_world_Tile])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(366);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_minimap;
	((func_mindustry_graphics_MinimapRenderer_update_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_MinimapRenderer_update_mindustry_world_Tile])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(367);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_blocks;
	((func_mindustry_graphics_BlockRenderer_invalidateTile_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_BlockRenderer_invalidateTile_mindustry_world_Tile])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(368);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_blocks;
	((func_mindustry_graphics_BlockRenderer_addFloorIndex_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_BlockRenderer_addFloorIndex_mindustry_world_Tile])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(370);
	frame[1].i = (jint(0));
	}
label_7:;
	{
	if ((frame[1].i) >= (8)) goto label_1;
	}
	{
	LINE_NUMBER(371);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp0 = (jint)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_x;
	clinit_arc_math_geom_Geometry(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Geometry_d8;
	jint temp1 = temp0 + ((jint)((arc_math_geom_Point2 *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[1].i)))))->F_x);
	jint temp2 = (jint)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_y;
	clinit_arc_math_geom_Geometry(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Geometry_d8;
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tile_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, temp1, (temp2 + ((jint)((arc_math_geom_Point2 *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[1].i)))))->F_y)));
	frame[2].o = sp[0].o;
	LINE_NUMBER(372);
	if ((frame[2].o) == nullptr) goto label_10;
	}
	{
	LINE_NUMBER(373);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_blocks;
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK(sp[0].o))->F_floor;
	((func_mindustry_graphics_FloorRenderer_recacheTile_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_FloorRenderer_recacheTile_mindustry_world_Tile])(ctx, sp[0].o, (frame[2].o));
	}
label_10:;
	{
	LINE_NUMBER(370);
	INST_IINC(1, 1);
	goto label_7;
	}
label_1:;
	LINE_NUMBER(377);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_Tile_remove(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tile:remove", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(381);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	((func_mindustry_world_Tile_setBlock_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_setBlock_mindustry_world_Block])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(382);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_Tile_removeNet(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tile:removeNet", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(386);
	SM_mindustry_gen_Call_removeTile_mindustry_world_Tile(ctx, (frame[0].o));
	LINE_NUMBER(387);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_Tile_setNet_mindustry_world_Block(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tile:setNet", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(391);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_mindustry_game_Team(ctx);
	sp[2].o = (jobject)SF_mindustry_game_Team_derelict;
	SM_mindustry_gen_Call_setTile_mindustry_world_Tile_mindustry_world_Block_mindustry_game_Team_int(ctx, sp[0].o, sp[1].o, sp[2].o, (jint(0)));
	LINE_NUMBER(392);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_Tile_setNet_mindustry_world_Block_mindustry_game_Team_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tile:setNet", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(396);
	SM_mindustry_gen_Call_setTile_mindustry_world_Tile_mindustry_world_Block_mindustry_game_Team_int(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].i));
	LINE_NUMBER(397);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_Tile_setFloorNet_mindustry_world_Block_mindustry_world_Block(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tile:setFloorNet", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(401);
	SM_mindustry_gen_Call_setFloor_mindustry_world_Tile_mindustry_world_Block_mindustry_world_Block(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	LINE_NUMBER(402);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_Tile_setFloorNet_mindustry_world_Block(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tile:setFloorNet", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(406);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Blocks_air;
	((func_mindustry_world_Tile_setFloorNet_mindustry_world_Block_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_setFloorNet_mindustry_world_Block_mindustry_world_Block])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(407);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_Tile_setOverlayNet_mindustry_world_Block(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tile:setOverlayNet", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(411);
	SM_mindustry_gen_Call_setOverlay_mindustry_world_Tile_mindustry_world_Block(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(412);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jshort M_mindustry_world_Tile_overlayID_R_short(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tile:overlayID", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(415);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_overlay;
	popStackFrame(ctx);
	return ((jint)((mindustry_ctype_Content *) NULL_CHECK(sp[0].o))->F_id);
	}

	popStackFrame(ctx);
}

jshort M_mindustry_world_Tile_blockID_R_short(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tile:blockID", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(419);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_block;
	popStackFrame(ctx);
	return ((jint)((mindustry_ctype_Content *) NULL_CHECK(sp[0].o))->F_id);
	}

	popStackFrame(ctx);
}

jshort M_mindustry_world_Tile_floorID_R_short(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tile:floorID", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(423);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_floor;
	popStackFrame(ctx);
	return ((jint)((mindustry_ctype_Content *) NULL_CHECK(sp[0].o))->F_id);
	}

	popStackFrame(ctx);
}

void M_mindustry_world_Tile_setOverlay_mindustry_world_Block(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tile:setOverlay", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(427);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_overlay;
	if (sp[0].o != (frame[1].o)) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(429);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_overlay;
	frame[2].o = sp[0].o;
	LINE_NUMBER(431);
	((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_overlay = (jref) (checkCast(ctx, &class_mindustry_world_blocks_environment_Floor, (frame[1].o)));
	LINE_NUMBER(433);
	((func_mindustry_world_Tile_recache) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Tile_recache])(ctx, (frame[0].o));
	LINE_NUMBER(435);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp0 = (jint)((func_mindustry_core_World_isGenerating_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_isGenerating_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_5;
	}
	{
	LINE_NUMBER(436);
	clinit_mindustry_world_Tile(ctx);
	sp[0].o = (jobject)SF_mindustry_world_Tile_overlayChange;
	sp[1].o = frame[0].o;
	sp[2].o = frame[2].o;
	sp[3].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_overlay;
	sp[0].o = (jobject)((func_mindustry_game_EventType$TileOverlayChangeEvent_set_mindustry_world_Tile_mindustry_world_blocks_environment_Floor_mindustry_world_blocks_environment_Floor_R_mindustry_game_EventType$TileOverlayChangeEvent) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_EventType$TileOverlayChangeEvent_set_mindustry_world_Tile_mindustry_world_blocks_environment_Floor_mindustry_world_blocks_environment_Floor_R_mindustry_game_EventType$TileOverlayChangeEvent])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	SM_arc_Events_fire_java_lang_Object(ctx, sp[0].o);
	}
label_5:;
	{
	LINE_NUMBER(439);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp0 = (jint)((func_mindustry_core_World_isGenerating_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_isGenerating_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_7;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_build;
	if (sp[0].o == nullptr) goto label_7;
	}
	{
	LINE_NUMBER(440);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_build;
	((func_mindustry_gen_Building_onProximityUpdate) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_onProximityUpdate])(ctx, sp[0].o);
	}
label_7:;
	LINE_NUMBER(442);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_Tile_setOverlayQuiet_mindustry_world_Block(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tile:setOverlayQuiet", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(446);
	((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_overlay = (jref) (checkCast(ctx, &class_mindustry_world_blocks_environment_Floor, (frame[1].o)));
	LINE_NUMBER(447);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_Tile_clearOverlay(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tile:clearOverlay", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(450);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	((func_mindustry_world_Tile_setOverlay_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_setOverlay_mindustry_world_Block])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(451);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_Tile_passable_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tile:passable", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(454);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_floor;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_solid) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_block;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	if (sp[0].o == sp[1].o) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_solidifes) != 0) goto label_2;
	}
label_1:;
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_solid) == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_destructible) != 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_update) == 0) goto label_2;
	}
label_3:;
	INST_ICONST(1);
	goto label_4;
label_2:;
	INST_ICONST(0);
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_world_Tile_synthetic_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tile:synthetic", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(459);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_update) != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_destructible) == 0) goto label_2;
	}
label_1:;
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_world_Tile_solid_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tile:solid", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(463);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_solid) != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_floor;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_solid) != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_build;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_build;
	jint temp0 = (jint)((func_mindustry_gen_Building_checkSolid_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_checkSolid_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_2;
	}
label_1:;
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_world_Tile_breakable_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tile:breakable", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(467);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_destructible) != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_breakable) != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_update) == 0) goto label_2;
	}
label_1:;
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_world_Tile_dangerous_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tile:dangerous", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(472);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_solid) != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_floor;
	jint temp0 = (jint)((func_mindustry_world_blocks_environment_Floor_isDeep_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_environment_Floor_isDeep_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_floor;
	jint temp0 = (jint)((func_mindustry_world_blocks_environment_Floor_damages_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_environment_Floor_damages_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
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

jbool M_mindustry_world_Tile_isDeep_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tile:isDeep", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(476);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_block;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_floor;
	jint temp0 = (jint)((func_mindustry_world_blocks_environment_Floor_isDeep_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_environment_Floor_isDeep_R_boolean])(ctx, sp[0].o);
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

void M_mindustry_world_Tile_getLinkedTiles_arc_func_Cons(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tile:getLinkedTiles", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(484);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_block;
	jint temp0 = (jint)((func_mindustry_world_Block_isMultiblock_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_isMultiblock_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(485);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_block;
	frame[2].i = ((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_block;
	frame[3].i = ((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_sizeOffset);
	LINE_NUMBER(486);
	frame[4].i = (jint(0));
	}
label_5:;
	{
	if ((frame[4].i) >= (frame[2].i)) goto label_6;
	}
	{
	LINE_NUMBER(487);
	frame[5].i = (jint(0));
	}
label_8:;
	{
	if ((frame[5].i) >= (frame[2].i)) goto label_9;
	}
	{
	LINE_NUMBER(488);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tile_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, ((((jint)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_x) + (frame[4].i)) + (frame[3].i)), ((((jint)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_y) + (frame[5].i)) + (frame[3].i)));
	frame[6].o = sp[0].o;
	LINE_NUMBER(489);
	if ((frame[6].o) == nullptr) goto label_12;
	}
	{
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o), (frame[6].o));
	}
label_12:;
	{
	LINE_NUMBER(487);
	INST_IINC(5, 1);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(486);
	INST_IINC(4, 1);
	goto label_5;
	}
label_6:;
	LINE_NUMBER(492);
	goto label_13;
label_1:;
	{
	LINE_NUMBER(493);
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o), (frame[0].o));
	}
label_13:;
	LINE_NUMBER(495);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_world_Tile_getLinkedTiles_arc_struct_Seq_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tile:getLinkedTiles", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(502);
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, (frame[1].o));
	LINE_NUMBER(503);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_world_Tile_invoke_arc_func_Cons_3(ctx);
		auto proxy = (mindustry_world_Tile_invoke_arc_func_Cons_3 *) gcAlloc(ctx, &class_mindustry_world_Tile_invoke_arc_func_Cons_3);
		proxy->F_field0 = (jref) sp[1].o;
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_world_Tile_getLinkedTiles_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_getLinkedTiles_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(504);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_Tile_getLinkedTilesAs_mindustry_world_Block_arc_struct_Seq_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tile:getLinkedTilesAs", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(512);
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, (frame[2].o));
	LINE_NUMBER(513);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[2].o;
	sp[3].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[2].o);
	{ /* InvokeDynamic */
		clinit_mindustry_world_Tile_invoke_arc_func_Cons_4(ctx);
		auto proxy = (mindustry_world_Tile_invoke_arc_func_Cons_4 *) gcAlloc(ctx, &class_mindustry_world_Tile_invoke_arc_func_Cons_4);
		proxy->F_field0 = (jref) sp[2].o;
		sp[2].o = (jobject) proxy;
	}
	((func_mindustry_world_Tile_getLinkedTilesAs_mindustry_world_Block_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_getLinkedTilesAs_mindustry_world_Block_arc_func_Cons])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(514);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

void M_mindustry_world_Tile_getLinkedTilesAs_mindustry_world_Block_arc_func_Cons(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tile:getLinkedTilesAs", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(522);
	jint temp0 = (jint)((func_mindustry_world_Block_isMultiblock_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Block_isMultiblock_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(523);
	frame[3].i = ((jint)((mindustry_world_Block *) NULL_CHECK((frame[1].o)))->F_size);
	frame[4].i = ((jint)((mindustry_world_Block *) NULL_CHECK((frame[1].o)))->F_sizeOffset);
	LINE_NUMBER(524);
	frame[5].i = (jint(0));
	}
label_5:;
	{
	if ((frame[5].i) >= (frame[3].i)) goto label_6;
	}
	{
	LINE_NUMBER(525);
	frame[6].i = (jint(0));
	}
label_8:;
	{
	if ((frame[6].i) >= (frame[3].i)) goto label_9;
	}
	{
	LINE_NUMBER(526);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tile_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, ((((jint)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_x) + (frame[5].i)) + (frame[4].i)), ((((jint)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_y) + (frame[6].i)) + (frame[4].i)));
	frame[7].o = sp[0].o;
	LINE_NUMBER(527);
	if ((frame[7].o) == nullptr) goto label_12;
	}
	{
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o), (frame[7].o));
	}
label_12:;
	{
	LINE_NUMBER(525);
	INST_IINC(6, 1);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(524);
	INST_IINC(5, 1);
	goto label_5;
	}
label_6:;
	LINE_NUMBER(530);
	goto label_13;
label_1:;
	{
	LINE_NUMBER(531);
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o), (frame[0].o));
	}
label_13:;
	LINE_NUMBER(533);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_world_Tile_getHitbox_arc_math_geom_Rect_R_arc_math_geom_Rect(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tile:getHitbox", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(536);
	sp[0].o = frame[1].o;
	jfloat temp0 = (jfloat)((func_mindustry_world_Tile_drawx_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Tile_drawx_R_float])(ctx, (frame[0].o));
	jfloat temp1 = (jfloat)((func_mindustry_world_Tile_drawy_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Tile_drawy_R_float])(ctx, (frame[0].o));
	sp[1].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_block;
	jfloat temp2 = jfloat((((jint)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_size) * (8)));
	sp[1].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_block;
	sp[0].o = (jobject)((func_arc_math_geom_Rect_setCentered_float_float_float_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_setCentered_float_float_float_float_R_arc_math_geom_Rect])(ctx, sp[0].o, temp0, temp1, temp2, (jfloat((((jint)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_size) * (8)))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_Tile_getBounds_arc_math_geom_Rect_R_arc_math_geom_Rect(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tile:getBounds", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(540);
	sp[0].o = (jobject)((func_arc_math_geom_Rect_set_float_float_float_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_math_geom_Rect_set_float_float_float_float_R_arc_math_geom_Rect])(ctx, (frame[1].o), ((jfloat((((jint)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_x) * (8)))) - (jfloat(4.0f))), ((jfloat((((jint)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_y) * (8)))) - (jfloat(4.0f))), (jfloat(8.0f)), (jfloat(8.0f)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_Tile_hitbox_arc_math_geom_Rect(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tile:hitbox", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(545);
	sp[0].o = (jobject)((func_mindustry_world_Tile_getHitbox_arc_math_geom_Rect_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Tile_getHitbox_arc_math_geom_Rect_R_arc_math_geom_Rect])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(546);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_Tile_nearby_arc_math_geom_Point2_R_mindustry_world_Tile(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tile:nearby", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(549);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tile_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, (((jint)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_x) + ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[1].o)))->F_x)), (((jint)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_y) + ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[1].o)))->F_y)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_Tile_nearby_int_int_R_mindustry_world_Tile(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tile:nearby", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(553);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tile_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, (((jint)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_x) + (frame[1].i)), (((jint)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_y) + (frame[2].i)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_Tile_nearby_int_R_mindustry_world_Tile(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tile:nearby", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(557);
	switch((frame[1].i)) {
		case 0: goto label_1;
		case 1: goto label_2;
		case 2: goto label_3;
		case 3: goto label_4;
		default: goto label_5;
	}
	}
label_1:;
	{
	LINE_NUMBER(558);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tile_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, (((jint)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_x) + (jint(1))), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_y));
	sp += 1;
	goto label_6;
	}
label_2:;
	{
	LINE_NUMBER(559);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tile_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_x), (((jint)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_y) + (jint(1))));
	sp += 1;
	goto label_6;
	}
label_3:;
	{
	LINE_NUMBER(560);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tile_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, (((jint)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_x) - (jint(1))), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_y));
	sp += 1;
	goto label_6;
	}
label_4:;
	{
	LINE_NUMBER(561);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tile_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_x), (((jint)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_y) - (jint(1))));
	sp += 1;
	goto label_6;
	}
label_5:;
	LINE_NUMBER(562);
	INST_ACONST_NULL();
label_6:;
	LINE_NUMBER(557);
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_world_Tile_nearbyBuild_int_R_mindustry_gen_Building(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tile:nearbyBuild", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(567);
	switch((frame[1].i)) {
		case 0: goto label_1;
		case 1: goto label_2;
		case 2: goto label_3;
		case 3: goto label_4;
		default: goto label_5;
	}
	}
label_1:;
	{
	LINE_NUMBER(568);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_build_int_int_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_build_int_int_R_mindustry_gen_Building])(ctx, sp[0].o, (((jint)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_x) + (jint(1))), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_y));
	sp += 1;
	goto label_6;
	}
label_2:;
	{
	LINE_NUMBER(569);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_build_int_int_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_build_int_int_R_mindustry_gen_Building])(ctx, sp[0].o, ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_x), (((jint)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_y) + (jint(1))));
	sp += 1;
	goto label_6;
	}
label_3:;
	{
	LINE_NUMBER(570);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_build_int_int_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_build_int_int_R_mindustry_gen_Building])(ctx, sp[0].o, (((jint)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_x) - (jint(1))), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_y));
	sp += 1;
	goto label_6;
	}
label_4:;
	{
	LINE_NUMBER(571);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_build_int_int_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_build_int_int_R_mindustry_gen_Building])(ctx, sp[0].o, ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_x), (((jint)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_y) - (jint(1))));
	sp += 1;
	goto label_6;
	}
label_5:;
	LINE_NUMBER(572);
	INST_ACONST_NULL();
label_6:;
	LINE_NUMBER(567);
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_world_Tile_interactable_mindustry_game_Team_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tile:interactable", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(577);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_teams;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((func_mindustry_world_Tile_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Tile_team_R_mindustry_game_Team])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_mindustry_game_Teams_canInteract_mindustry_game_Team_mindustry_game_Team_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Teams_canInteract_mindustry_game_Team_mindustry_game_Team_R_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_Tile_drop_R_mindustry_type_Item(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tile:drop", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(581);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_overlay;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_overlay;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_itemDrop;
	if (sp[0].o != nullptr) goto label_2;
	}
label_1:;
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_floor;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_itemDrop;
	sp += 1;
	goto label_3;
	}
label_2:;
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_overlay;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_itemDrop;
	sp += 1;
	}
label_3:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_world_Tile_wallDrop_R_mindustry_type_Item(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tile:wallDrop", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(585);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_solid) == 0) goto label_1;
	}
	{
	LINE_NUMBER(586);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_block;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_itemDrop;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_block;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_itemDrop;
	sp += 1;
	goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(587);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_overlay;
	if (((jint)((mindustry_world_blocks_environment_Floor *) NULL_CHECK(sp[0].o))->F_wallOre) == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_block;
	jint temp0 = (jint)((func_mindustry_world_Block_synthetic_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_synthetic_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_overlay;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_itemDrop;
	sp += 1;
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(588);
	sp[0].o = jobject(nullptr);
	sp += 1;
	goto label_4;
	}
label_1:;
	INST_ACONST_NULL();
label_4:;
	LINE_NUMBER(585);
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_world_Tile_shouldSaveData_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tile:shouldSaveData", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(592);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_floor;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_saveData) != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_overlay;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_saveData) != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_saveData) == 0) goto label_2;
	}
label_1:;
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint M_mindustry_world_Tile_staticDarkness_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tile:staticDarkness", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(596);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_solid) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_fillsTile) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_block;
	jint temp0 = (jint)((func_mindustry_world_Block_synthetic_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_synthetic_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	jint temp0 = (jint)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_data;
	sp[0].i = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_world_Tile_legSolid_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tile:legSolid", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(601);
	jint temp0 = (jint)((func_mindustry_world_Tile_staticDarkness_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Tile_staticDarkness_R_int])(ctx, (frame[0].o));
	if (temp0 >= (jint(2))) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_floor;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_solid) == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_block;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	if (sp[0].o != sp[1].o) goto label_2;
	}
label_1:;
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_world_Tile_adjacentTo_mindustry_world_Tile_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tile:adjacentTo", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(606);
	jint temp0 = (jint)((func_mindustry_world_Tile_relativeTo_mindustry_world_Tile_R_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Tile_relativeTo_mindustry_world_Tile_R_byte])(ctx, (frame[0].o), (frame[1].o));
	if (temp0 == (jint(-1))) goto label_1;
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

void M_mindustry_world_Tile_preChanged(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tile:preChanged", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(610);
	((func_mindustry_world_Tile_firePreChanged) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Tile_firePreChanged])(ctx, (frame[0].o));
	LINE_NUMBER(612);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_build;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(614);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_build;
	((func_mindustry_gen_Building_onRemoved) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_onRemoved])(ctx, sp[0].o);
	LINE_NUMBER(615);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_build;
	((func_mindustry_gen_Building_removeFromProximity) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_removeFromProximity])(ctx, sp[0].o);
	LINE_NUMBER(618);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_build;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_block;
	jint temp0 = (jint)((func_mindustry_world_Block_isMultiblock_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_isMultiblock_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(619);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_build;
	jint temp0 = (jint)((func_mindustry_gen_Building_tileX_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_tileX_R_int])(ctx, sp[0].o);
	frame[1].i = temp0;
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_build;
	jint temp1 = (jint)((func_mindustry_gen_Building_tileY_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_tileY_R_int])(ctx, sp[0].o);
	frame[2].i = temp1;
	LINE_NUMBER(620);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_build;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_block;
	frame[3].i = ((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size);
	LINE_NUMBER(621);
	frame[4].i = ((-((frame[3].i) - (jint(1)))) / (jint(2)));
	LINE_NUMBER(622);
	frame[5].i = ((-((frame[3].i) - (jint(1)))) / (jint(2)));
	LINE_NUMBER(623);
	frame[6].i = (jint(0));
	}
label_12:;
	{
	if ((frame[6].i) >= (frame[3].i)) goto label_2;
	}
	{
	LINE_NUMBER(624);
	frame[7].i = (jint(0));
	}
label_14:;
	{
	if ((frame[7].i) >= (frame[3].i)) goto label_15;
	}
	{
	LINE_NUMBER(625);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tile_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, (((frame[1].i) + (frame[6].i)) + (frame[4].i)), (((frame[2].i) + (frame[7].i)) + (frame[5].i)));
	frame[8].o = sp[0].o;
	LINE_NUMBER(626);
	if ((frame[8].o) == nullptr) goto label_18;
	}
	{
	LINE_NUMBER(628);
	if ((frame[8].o) == (frame[0].o)) goto label_18;
	}
	{
	LINE_NUMBER(630);
	((func_mindustry_world_Tile_firePreChanged) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_mindustry_world_Tile_firePreChanged])(ctx, (frame[8].o));
	LINE_NUMBER(632);
	((mindustry_world_Tile *) NULL_CHECK((frame[8].o)))->F_build = (jref) (jobject(nullptr));
	LINE_NUMBER(633);
	sp[0].o = frame[8].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_block = (jref) sp[1].o;
	LINE_NUMBER(636);
	((func_mindustry_world_Tile_fireChanged) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_mindustry_world_Tile_fireChanged])(ctx, (frame[8].o));
	}
label_18:;
	{
	LINE_NUMBER(624);
	INST_IINC(7, 1);
	goto label_14;
	}
label_15:;
	{
	LINE_NUMBER(623);
	INST_IINC(6, 1);
	goto label_12;
	}
label_2:;
	LINE_NUMBER(643);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_Tile_changeBuild_mindustry_game_Team_arc_func_Prov_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tile:changeBuild", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(646);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_build;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(647);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_build;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_block;
	frame[4].i = ((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size);
	LINE_NUMBER(648);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_build;
	((func_mindustry_gen_Building_remove) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_remove])(ctx, sp[0].o);
	LINE_NUMBER(649);
	((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_build = (jref) (jobject(nullptr));
	LINE_NUMBER(652);
	clinit_mindustry_world_Tile(ctx);
	sp[0].o = (jobject)SF_mindustry_world_Tile_tileSet;
	((func_arc_struct_ObjectSet_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_clear])(ctx, sp[0].o);
	LINE_NUMBER(654);
	sp[0].o = (jobject)SM_mindustry_world_Edges_getEdges_int_R_Array1_arc_math_geom_Point2(ctx, (frame[4].i));
	frame[5].o = sp[0].o;
	frame[6].i = (((jarray) nullCheck(ctx, (frame[5].o)))->length);
	frame[7].i = (jint(0));
	}
label_7:;
	{
	if ((frame[7].i) >= (frame[6].i)) goto label_8;
	}
	{
	frame[8].o = ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[7].i)));
	LINE_NUMBER(655);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_build_int_int_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_build_int_int_R_mindustry_gen_Building])(ctx, sp[0].o, (((jint)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_x) + ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[8].o)))->F_x)), (((jint)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_y) + ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[8].o)))->F_y)));
	frame[9].o = sp[0].o;
	LINE_NUMBER(656);
	if ((frame[9].o) == nullptr) goto label_11;
	}
	{
	LINE_NUMBER(657);
	clinit_mindustry_world_Tile(ctx);
	sp[0].o = (jobject)SF_mindustry_world_Tile_tileSet;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_add_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[9].o));
	}
label_11:;
	{
	LINE_NUMBER(654);
	INST_IINC(7, 1);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(662);
	clinit_mindustry_world_Tile(ctx);
	sp[0].o = (jobject)SF_mindustry_world_Tile_tileSet;
	sp[0].o = (jobject)((func_arc_struct_ObjectSet_iterator_R_arc_struct_ObjectSet$ObjectSetIterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_iterator_R_arc_struct_ObjectSet$ObjectSetIterator])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	}
label_13:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[5].o)))(ctx, (frame[5].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o));
	frame[6].o = (checkCast(ctx, &class_mindustry_gen_Building, sp[0].o));
	LINE_NUMBER(663);
	((func_mindustry_gen_Building_updateProximity) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_gen_Building_updateProximity])(ctx, (frame[6].o));
	LINE_NUMBER(664);
	goto label_13;
	}
label_1:;
	{
	LINE_NUMBER(667);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_block;
	jint temp0 = (jint)((func_mindustry_world_Block_hasBuilding_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_hasBuilding_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_16;
	}
	{
	LINE_NUMBER(668);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_arc_func_Prov_get_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Prov, INDEX_arc_func_Prov_get_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	sp[1].o = checkCast(ctx, &class_mindustry_gen_Building, sp[1].o);
	sp[2].o = frame[0].o;
	sp[3].o = frame[1].o;
	sp[4].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_block;
	sp += 4;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_update) == 0) goto label_18;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isEditor_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isEditor_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_18;
	}
	INST_ICONST(1);
	goto label_19;
label_18:;
	INST_ICONST(0);
label_19:;
	{
	sp -= 5;
	sp[1].o = (jobject)((func_mindustry_gen_Building_init_mindustry_world_Tile_mindustry_game_Team_boolean_int_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Building_init_mindustry_world_Tile_mindustry_game_Team_boolean_int_R_mindustry_gen_Building])(ctx, sp[1].o, sp[2].o, sp[3].o, sp[4].i, (frame[3].i));
	((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_build = (jref) sp[1].o;
	}
label_16:;
	LINE_NUMBER(670);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_Tile_changed(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tile:changed", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(673);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp0 = (jint)((func_mindustry_core_World_isGenerating_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_isGenerating_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(674);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_build;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(675);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_build;
	((func_mindustry_gen_Building_updateProximity) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_updateProximity])(ctx, sp[0].o);
	goto label_1;
	}
label_3:;
	{
	LINE_NUMBER(678);
	clinit_arc_math_geom_Geometry(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Geometry_d4;
	frame[1].o = sp[0].o;
	frame[2].i = (((jarray) nullCheck(ctx, (frame[1].o)))->length);
	frame[3].i = (jint(0));
	}
label_5:;
	{
	if ((frame[3].i) >= (frame[2].i)) goto label_1;
	}
	{
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i)));
	LINE_NUMBER(679);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_build_int_int_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_build_int_int_R_mindustry_gen_Building])(ctx, sp[0].o, (((jint)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_x) + ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[4].o)))->F_x)), (((jint)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_y) + ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[4].o)))->F_y)));
	frame[5].o = sp[0].o;
	LINE_NUMBER(680);
	if ((frame[5].o) == nullptr) goto label_8;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[5].o)))->F_tile;
	if (((jint)((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_changing) != 0) goto label_8;
	}
	{
	LINE_NUMBER(681);
	((func_mindustry_gen_Building_onProximityUpdate) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_gen_Building_onProximityUpdate])(ctx, (frame[5].o));
	}
label_8:;
	{
	LINE_NUMBER(678);
	INST_IINC(3, 1);
	goto label_5;
	}
label_1:;
	{
	LINE_NUMBER(687);
	((func_mindustry_world_Tile_fireChanged) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Tile_fireChanged])(ctx, (frame[0].o));
	LINE_NUMBER(690);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_block;
	jint temp0 = (jint)((func_mindustry_world_Block_isStatic_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_isStatic_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_11;
	}
	{
	LINE_NUMBER(691);
	((func_mindustry_world_Tile_recache) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Tile_recache])(ctx, (frame[0].o));
	}
label_11:;
	LINE_NUMBER(693);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_Tile_fireChanged(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tile:fireChanged", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(696);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp0 = (jint)((func_mindustry_core_World_isGenerating_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_isGenerating_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(697);
	clinit_mindustry_world_Tile(ctx);
	sp[0].o = (jobject)SF_mindustry_world_Tile_tileChange;
	sp[0].o = (jobject)((func_mindustry_game_EventType$TileChangeEvent_set_mindustry_world_Tile_R_mindustry_game_EventType$TileChangeEvent) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_EventType$TileChangeEvent_set_mindustry_world_Tile_R_mindustry_game_EventType$TileChangeEvent])(ctx, sp[0].o, (frame[0].o));
	SM_arc_Events_fire_java_lang_Object(ctx, sp[0].o);
	}
label_1:;
	LINE_NUMBER(699);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_Tile_firePreChanged(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tile:firePreChanged", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(702);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp0 = (jint)((func_mindustry_core_World_isGenerating_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_isGenerating_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(703);
	clinit_mindustry_world_Tile(ctx);
	sp[0].o = (jobject)SF_mindustry_world_Tile_preChange;
	sp[0].o = (jobject)((func_mindustry_game_EventType$TilePreChangeEvent_set_mindustry_world_Tile_R_mindustry_game_EventType$TilePreChangeEvent) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_EventType$TilePreChangeEvent_set_mindustry_world_Tile_R_mindustry_game_EventType$TilePreChangeEvent])(ctx, sp[0].o, (frame[0].o));
	SM_arc_Events_fire_java_lang_Object(ctx, sp[0].o);
	}
label_1:;
	LINE_NUMBER(705);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jlong M_mindustry_world_Tile_getPackedData_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tile:getPackedData", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(709);
	jlong temp0 = (jlong)SM_mindustry_gen_PackedTileData_get_int_byte_byte_byte_R_long(ctx, ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_extraData), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_data), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_floorData), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_overlayData));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_Tile_setPackedData_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tile:setPackedData", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(714);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_mindustry_gen_PackedTileData_extraData_long_R_int(ctx, (frame[1].l));
	((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_extraData = temp0;
	LINE_NUMBER(715);
	sp[0].o = frame[0].o;
	jint temp1 = (jint)SM_mindustry_gen_PackedTileData_data_long_R_byte(ctx, (frame[1].l));
	((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_data = temp1;
	LINE_NUMBER(716);
	sp[0].o = frame[0].o;
	jint temp2 = (jint)SM_mindustry_gen_PackedTileData_floorData_long_R_byte(ctx, (frame[1].l));
	((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_floorData = temp2;
	LINE_NUMBER(717);
	sp[0].o = frame[0].o;
	jint temp3 = (jint)SM_mindustry_gen_PackedTileData_overlayData_long_R_byte(ctx, (frame[1].l));
	((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_overlayData = temp3;
	LINE_NUMBER(718);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_Tile_display_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tile:display", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(724);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_block;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_itemDrop;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_block;
	sp += 1;
	goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(725);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_overlay;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_itemDrop;
	if (sp[0].o != nullptr) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_wallDrop_R_mindustry_type_Item) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Tile_wallDrop_R_mindustry_type_Item])(ctx, (frame[0].o));
	if (sp[0].o == nullptr) goto label_4;
	}
label_3:;
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_overlay;
	sp += 1;
	goto label_2;
	}
label_4:;
	{
	LINE_NUMBER(726);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_floor;
	sp += 1;
	}
label_2:;
	{
	sp -= 1;
	frame[2].o = sp[0].o;
	LINE_NUMBER(728);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_world_Tile_invoke_arc_func_Cons_5(ctx);
		auto proxy = (mindustry_world_Tile_invoke_arc_func_Cons_5 *) gcAlloc(ctx, &class_mindustry_world_Tile_invoke_arc_func_Cons_5);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(732);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(733);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_Tile_displayable_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tile:displayable", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(737);
	sp[0].o = (jobject)((func_mindustry_world_Tile_drop_R_mindustry_type_Item) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Tile_drop_R_mindustry_type_Item])(ctx, (frame[0].o));
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_block;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	if (sp[0].o == sp[1].o) goto label_2;
	}
label_1:;
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_wallDrop_R_mindustry_type_Item) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Tile_wallDrop_R_mindustry_type_Item])(ctx, (frame[0].o));
	if (sp[0].o != nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[0].o));
	sp[0].o = (jobject)((mindustry_world_blocks_environment_Floor *) NULL_CHECK(sp[0].o))->F_liquidDrop;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_block;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	if (sp[0].o != sp[1].o) goto label_3;
	}
label_2:;
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jfloat M_mindustry_world_Tile_getX_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tile:getX", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(742);
	jfloat temp0 = (jfloat)((func_mindustry_world_Tile_drawx_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Tile_drawx_R_float])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_world_Tile_getY_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tile:getY", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(747);
	jfloat temp0 = (jfloat)((func_mindustry_world_Tile_drawy_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Tile_drawy_R_float])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_Tile_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tile:toString", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(752);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_floor;
	sp[0].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK(sp[0].o))->F_name;
	sp[1].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_block;
	sp[1].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK(sp[1].o))->F_name;
	sp[2].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_overlay;
	sp[2].o = (jobject)SM_java_lang_String_valueOf_java_lang_Object_R_java_lang_String(ctx, sp[2].o);
	jint temp0 = (jint)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_x;
	jint temp1 = (jint)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_y;
	sp[3].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_build;
	jobject temp2 = sp[3].o;
	sp[3].i = temp0;
	sp[4].i = temp1;
	sp += 5;
	if (temp2 != nullptr) goto label_1;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"null"_j));
	goto label_2;
label_1:;
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_build;
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_Class_getSimpleName_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_getSimpleName_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	}
label_2:;
	{
	sp -= 6;
	sp[6].o = (jobject)((func_mindustry_world_Tile_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Tile_team_R_mindustry_game_Team])(ctx, (frame[0].o));
	sp[6].o = (jobject)SM_java_lang_String_valueOf_java_lang_Object_R_java_lang_String(ctx, sp[6].o);
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\u0001:\u0001:\u0001[\u0001,\u0001] entity=\u0001:\u0001"_j.string, 7, sp[0].o, sp[1].o, sp[2].o, boxShort(ctx, sp[3].i), boxShort(ctx, sp[4].i), sp[5].o, sp[6].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_mindustry_world_Tile_setTileBlocks_mindustry_world_Block_mindustry_game_Team_Array1_int(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tile:setTileBlocks", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_Tile(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(760);
	if ((frame[0].o) == nullptr) goto label_1;
	}
	INST_ALOAD(2);
	if ((--sp)->o != nullptr) goto label_2;
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(761);
	frame[3].o = (frame[2].o);
	frame[4].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	frame[5].i = (jint(0));
	}
label_3:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_4;
	}
	{
	frame[6].i = ((jint)ARRAY_ACCESS(jint, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(762);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tile_int_R_mindustry_world_Tile])(ctx, sp[0].o, (frame[6].i));
	frame[7].o = sp[0].o;
	LINE_NUMBER(763);
	if ((frame[7].o) == nullptr) goto label_7;
	}
	{
	LINE_NUMBER(764);
	((func_mindustry_world_Tile_setBlock_mindustry_world_Block_mindustry_game_Team_int) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_world_Tile_setBlock_mindustry_world_Block_mindustry_game_Team_int])(ctx, (frame[7].o), (frame[0].o), (frame[1].o), (jint(0)));
	}
label_7:;
	{
	LINE_NUMBER(761);
	INST_IINC(5, 1);
	goto label_3;
	}
label_4:;
	LINE_NUMBER(767);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_world_Tile_setTileFloors_mindustry_world_Block_Array1_int(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[10];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tile:setTileFloors", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_Tile(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(772);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	{
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_world_blocks_environment_Floor)) == 0) goto label_1;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_world_blocks_environment_Floor, (frame[0].o)));
	goto label_3;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(773);
	frame[3].o = (frame[1].o);
	frame[4].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	frame[5].i = (jint(0));
	}
label_4:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_5;
	}
	{
	frame[6].i = ((jint)ARRAY_ACCESS(jint, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(774);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tile_int_R_mindustry_world_Tile])(ctx, sp[0].o, (frame[6].i));
	frame[7].o = sp[0].o;
	LINE_NUMBER(775);
	if ((frame[7].o) == nullptr) goto label_8;
	}
	{
	LINE_NUMBER(776);
	((func_mindustry_world_Tile_setFloor_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_world_Tile_setFloor_mindustry_world_blocks_environment_Floor])(ctx, (frame[7].o), (frame[2].o));
	}
label_8:;
	{
	LINE_NUMBER(773);
	INST_IINC(5, 1);
	goto label_4;
	}
label_5:;
	LINE_NUMBER(779);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_world_Tile_setTileOverlays_mindustry_world_Block_Array1_int(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[10];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tile:setTileOverlays", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_Tile(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(784);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	{
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_world_blocks_environment_OverlayFloor)) == 0) goto label_1;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_world_blocks_environment_OverlayFloor, (frame[0].o)));
	goto label_3;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(785);
	frame[3].o = (frame[1].o);
	frame[4].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	frame[5].i = (jint(0));
	}
label_4:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_5;
	}
	{
	frame[6].i = ((jint)ARRAY_ACCESS(jint, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(786);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tile_int_R_mindustry_world_Tile])(ctx, sp[0].o, (frame[6].i));
	frame[7].o = sp[0].o;
	LINE_NUMBER(787);
	if ((frame[7].o) == nullptr) goto label_8;
	}
	{
	LINE_NUMBER(788);
	((func_mindustry_world_Tile_setOverlay_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_world_Tile_setOverlay_mindustry_world_Block])(ctx, (frame[7].o), (frame[2].o));
	}
label_8:;
	{
	LINE_NUMBER(785);
	INST_IINC(5, 1);
	goto label_4;
	}
label_5:;
	LINE_NUMBER(791);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_world_Tile_fillTileBlocks_int_int_int_int_mindustry_world_Block_mindustry_game_Team(jcontext ctx, jint param0, jint param1, jint param2, jint param3, jobject param4, jobject param5) {
	jtype frame[13];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tile:fillTileBlocks", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_Tile(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].o = param4;
	frame[5].o = param5;
	{
	LINE_NUMBER(796);
	frame[6].i = (frame[0].i);
	}
label_1:;
	{
	if ((frame[6].i) > (frame[2].i)) goto label_2;
	}
	{
	LINE_NUMBER(797);
	frame[7].i = (frame[1].i);
	}
label_4:;
	{
	if ((frame[7].i) > (frame[3].i)) goto label_5;
	}
	{
	LINE_NUMBER(798);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tile_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, (frame[6].i), (frame[7].i));
	frame[8].o = sp[0].o;
	LINE_NUMBER(799);
	if ((frame[8].o) != nullptr) goto label_8;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_8:;
	{
	LINE_NUMBER(800);
	((func_mindustry_world_Tile_setBlock_mindustry_world_Block_mindustry_game_Team_int) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_mindustry_world_Tile_setBlock_mindustry_world_Block_mindustry_game_Team_int])(ctx, (frame[8].o), (frame[4].o), (frame[5].o), (jint(0)));
	LINE_NUMBER(797);
	INST_IINC(7, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(796);
	INST_IINC(6, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(803);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_world_Tile_fillTileFloors_int_int_int_int_mindustry_world_Block(jcontext ctx, jint param0, jint param1, jint param2, jint param3, jobject param4) {
	jtype frame[12];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tile:fillTileFloors", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_Tile(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(808);
	if ((isInstance(ctx, (frame[4].o), &class_mindustry_world_blocks_environment_Floor)) == 0) goto label_1;
	}
	{
	frame[5].o = (checkCast(ctx, &class_mindustry_world_blocks_environment_Floor, (frame[4].o)));
	goto label_3;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(809);
	frame[6].i = (frame[0].i);
	}
label_4:;
	{
	if ((frame[6].i) > (frame[2].i)) goto label_5;
	}
	{
	LINE_NUMBER(810);
	frame[7].i = (frame[1].i);
	}
label_7:;
	{
	if ((frame[7].i) > (frame[3].i)) goto label_8;
	}
	{
	LINE_NUMBER(811);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tile_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, (frame[6].i), (frame[7].i));
	frame[8].o = sp[0].o;
	LINE_NUMBER(812);
	if ((frame[8].o) != nullptr) goto label_11;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_11:;
	{
	LINE_NUMBER(813);
	((func_mindustry_world_Tile_setFloor_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_mindustry_world_Tile_setFloor_mindustry_world_blocks_environment_Floor])(ctx, (frame[8].o), (frame[5].o));
	LINE_NUMBER(810);
	INST_IINC(7, 1);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(809);
	INST_IINC(6, 1);
	goto label_4;
	}
label_5:;
	LINE_NUMBER(816);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_world_Tile_fillTileOverlays_int_int_int_int_mindustry_world_Block(jcontext ctx, jint param0, jint param1, jint param2, jint param3, jobject param4) {
	jtype frame[12];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tile:fillTileOverlays", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_Tile(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(821);
	if ((isInstance(ctx, (frame[4].o), &class_mindustry_world_blocks_environment_OverlayFloor)) == 0) goto label_1;
	}
	{
	frame[5].o = (checkCast(ctx, &class_mindustry_world_blocks_environment_OverlayFloor, (frame[4].o)));
	goto label_3;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(822);
	frame[6].i = (frame[0].i);
	}
label_4:;
	{
	if ((frame[6].i) > (frame[2].i)) goto label_5;
	}
	{
	LINE_NUMBER(823);
	frame[7].i = (frame[1].i);
	}
label_7:;
	{
	if ((frame[7].i) > (frame[3].i)) goto label_8;
	}
	{
	LINE_NUMBER(824);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tile_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, (frame[6].i), (frame[7].i));
	frame[8].o = sp[0].o;
	LINE_NUMBER(825);
	if ((frame[8].o) != nullptr) goto label_11;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_11:;
	{
	LINE_NUMBER(826);
	((func_mindustry_world_Tile_setOverlay_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_mindustry_world_Tile_setOverlay_mindustry_world_Block])(ctx, (frame[8].o), (frame[5].o));
	LINE_NUMBER(823);
	INST_IINC(7, 1);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(822);
	INST_IINC(6, 1);
	goto label_4;
	}
label_5:;
	LINE_NUMBER(829);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_world_Tile_setFloor_mindustry_world_Tile_mindustry_world_Block_mindustry_world_Block(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tile:setFloor", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_Tile(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(833);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[1].o));
	((func_mindustry_world_Tile_setFloor_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_setFloor_mindustry_world_blocks_environment_Floor])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(834);
	((func_mindustry_world_Tile_setOverlay_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Tile_setOverlay_mindustry_world_Block])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(835);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_world_Tile_setOverlay_mindustry_world_Tile_mindustry_world_Block(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tile:setOverlay", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_Tile(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(839);
	((func_mindustry_world_Tile_setOverlay_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Tile_setOverlay_mindustry_world_Block])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(840);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_world_Tile_removeTile_mindustry_world_Tile(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tile:removeTile", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_Tile(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(844);
	((func_mindustry_world_Tile_remove) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Tile_remove])(ctx, (frame[0].o));
	LINE_NUMBER(845);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_world_Tile_setTile_mindustry_world_Tile_mindustry_world_Block_mindustry_game_Team_int(jcontext ctx, jobject param0, jobject param1, jobject param2, jint param3) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tile:setTile", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_Tile(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(849);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(850);
	((func_mindustry_world_Tile_setBlock_mindustry_world_Block_mindustry_game_Team_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Tile_setBlock_mindustry_world_Block_mindustry_game_Team_int])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].i));
	LINE_NUMBER(851);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_world_Tile_setTeam_mindustry_gen_Building_mindustry_game_Team(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tile:setTeam", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_Tile(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(855);
	if ((frame[0].o) == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(856);
	((func_mindustry_gen_Building_changeTeam_mindustry_game_Team) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_changeTeam_mindustry_game_Team])(ctx, (frame[0].o), (frame[1].o));
	}
label_1:;
	LINE_NUMBER(858);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_world_Tile_setTeams_Array1_int_mindustry_game_Team(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[13];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tile:setTeams", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_Tile(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(862);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(864);
	clinit_mindustry_world_Tile(ctx);
	sp[0].o = (jobject)SF_mindustry_world_Tile_staleGraphs;
	((func_arc_struct_IntSet_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_clear])(ctx, sp[0].o);
	LINE_NUMBER(865);
	clinit_mindustry_world_Tile(ctx);
	sp[0].o = (jobject)SF_mindustry_world_Tile_tileSet;
	((func_arc_struct_ObjectSet_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_clear])(ctx, sp[0].o);
	LINE_NUMBER(867);
	frame[2].o = (frame[0].o);
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_4:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_5;
	}
	{
	frame[5].i = ((jint)ARRAY_ACCESS(jint, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(868);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_build_int_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_build_int_R_mindustry_gen_Building])(ctx, sp[0].o, (frame[5].i));
	frame[6].o = sp[0].o;
	LINE_NUMBER(869);
	if ((frame[6].o) == nullptr) goto label_8;
	}
	{
	LINE_NUMBER(870);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[6].o)))->F_power;
	frame[7].o = sp[0].o;
	LINE_NUMBER(871);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[6].o)))->F_power;
	if (sp[0].o == nullptr) goto label_11;
	}
	{
	LINE_NUMBER(872);
	clinit_mindustry_world_Tile(ctx);
	sp[0].o = (jobject)SF_mindustry_world_Tile_staleGraphs;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[6].o)))->F_power;
	sp[1].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[1].o))->F_graph;
	jint temp0 = (jint)((func_mindustry_world_blocks_power_PowerGraph_getID_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_blocks_power_PowerGraph_getID_R_int])(ctx, sp[1].o);
	jint temp1 = (jint)((func_arc_struct_IntSet_add_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_add_int_R_boolean])(ctx, sp[0].o, temp0);
	LINE_NUMBER(874);
	frame[8].i = (jint(0));
	}
label_14:;
	{
	jint temp0 = frame[8].i;
	sp[0].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK((frame[7].o)))->F_links;
	if (temp0 >= ((jint)((arc_struct_IntSeq *) NULL_CHECK(sp[0].o))->F_size)) goto label_11;
	}
	{
	LINE_NUMBER(875);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[1].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK((frame[7].o)))->F_links;
	sp[1].o = (jobject)((arc_struct_IntSeq *) NULL_CHECK(sp[1].o))->F_items;
	sp[0].o = (jobject)((func_mindustry_core_World_build_int_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_build_int_R_mindustry_gen_Building])(ctx, sp[0].o, ((jint)ARRAY_ACCESS(jint, sp[1].o, (frame[8].i))));
	frame[9].o = sp[0].o;
	LINE_NUMBER(876);
	if ((frame[9].o) == nullptr) goto label_17;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[9].o)))->F_power;
	if (sp[0].o == nullptr) goto label_17;
	}
	{
	LINE_NUMBER(877);
	clinit_mindustry_world_Tile(ctx);
	sp[0].o = (jobject)SF_mindustry_world_Tile_tileSet;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_add_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[9].o));
	LINE_NUMBER(878);
	clinit_mindustry_world_Tile(ctx);
	sp[0].o = (jobject)SF_mindustry_world_Tile_staleGraphs;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[9].o)))->F_power;
	sp[1].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[1].o))->F_graph;
	jint temp1 = (jint)((func_mindustry_world_blocks_power_PowerGraph_getID_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_blocks_power_PowerGraph_getID_R_int])(ctx, sp[1].o);
	jint temp2 = (jint)((func_arc_struct_IntSet_add_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_add_int_R_boolean])(ctx, sp[0].o, temp1);
	}
label_17:;
	{
	LINE_NUMBER(874);
	INST_IINC(8, 1);
	goto label_14;
	}
label_11:;
	{
	LINE_NUMBER(882);
	((func_mindustry_gen_Building_changeTeam_mindustry_game_Team_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_gen_Building_changeTeam_mindustry_game_Team_boolean])(ctx, (frame[6].o), (frame[1].o), (jint(0)));
	}
label_8:;
	{
	LINE_NUMBER(867);
	INST_IINC(4, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(886);
	clinit_mindustry_world_Tile(ctx);
	sp[0].o = (jobject)SF_mindustry_world_Tile_tileSet;
	sp[0].o = (jobject)((func_arc_struct_ObjectSet_iterator_R_arc_struct_ObjectSet$ObjectSetIterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_iterator_R_arc_struct_ObjectSet$ObjectSetIterator])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_20:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_21;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_mindustry_gen_Building, sp[0].o));
	LINE_NUMBER(887);
	SM_mindustry_world_Tile_reflowPower_mindustry_game_Team_mindustry_gen_Building(ctx, (frame[1].o), (frame[3].o));
	LINE_NUMBER(888);
	goto label_20;
	}
label_21:;
	{
	LINE_NUMBER(891);
	frame[2].o = (frame[0].o);
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_24:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_25;
	}
	{
	frame[5].i = ((jint)ARRAY_ACCESS(jint, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(892);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_build_int_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_build_int_R_mindustry_gen_Building])(ctx, sp[0].o, (frame[5].i));
	frame[6].o = sp[0].o;
	LINE_NUMBER(893);
	SM_mindustry_world_Tile_reflowPower_mindustry_game_Team_mindustry_gen_Building(ctx, (frame[1].o), (frame[6].o));
	LINE_NUMBER(891);
	INST_IINC(4, 1);
	goto label_24;
	}
label_25:;
	LINE_NUMBER(895);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_world_Tile_reflowPower_mindustry_game_Team_mindustry_gen_Building(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tile:reflowPower", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_Tile(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(898);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_power;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	clinit_mindustry_world_Tile(ctx);
	sp[0].o = (jobject)SF_mindustry_world_Tile_staleGraphs;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_power;
	sp[1].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[1].o))->F_graph;
	jint temp0 = (jint)((func_mindustry_world_blocks_power_PowerGraph_getID_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_blocks_power_PowerGraph_getID_R_int])(ctx, sp[1].o);
	jint temp1 = (jint)((func_arc_struct_IntSet_contains_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_contains_int_R_boolean])(ctx, sp[0].o, temp0);
	if (temp1 == 0) goto label_1;
	}
	{
	LINE_NUMBER(899);
	frame[2].i = (jint(0));
	}
label_3:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_power;
	sp[0].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[0].o))->F_links;
	if (temp0 >= ((jint)((arc_struct_IntSeq *) NULL_CHECK(sp[0].o))->F_size)) goto label_4;
	}
	{
	LINE_NUMBER(900);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_power;
	sp[1].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[1].o))->F_links;
	sp[1].o = (jobject)((arc_struct_IntSeq *) NULL_CHECK(sp[1].o))->F_items;
	sp[0].o = (jobject)((func_mindustry_core_World_build_int_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_build_int_R_mindustry_gen_Building])(ctx, sp[0].o, ((jint)ARRAY_ACCESS(jint, sp[1].o, (frame[2].i))));
	frame[3].o = sp[0].o;
	LINE_NUMBER(903);
	if ((frame[3].o) == nullptr) goto label_7;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[3].o)))->F_team;
	if (sp[0].o == (frame[0].o)) goto label_7;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[3].o)))->F_power;
	if (sp[0].o == nullptr) goto label_7;
	}
	{
	clinit_mindustry_world_Tile(ctx);
	sp[0].o = (jobject)SF_mindustry_world_Tile_staleGraphs;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[3].o)))->F_power;
	sp[1].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[1].o))->F_graph;
	jint temp0 = (jint)((func_mindustry_world_blocks_power_PowerGraph_getID_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_blocks_power_PowerGraph_getID_R_int])(ctx, sp[1].o);
	jint temp1 = (jint)((func_arc_struct_IntSet_contains_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_contains_int_R_boolean])(ctx, sp[0].o, temp0);
	if (temp1 == 0) goto label_7;
	}
	{
	LINE_NUMBER(904);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_power;
	sp[0].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[0].o))->F_links;
	jint temp0 = (jint)((func_arc_struct_IntSeq_removeIndex_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_removeIndex_int_R_int])(ctx, sp[0].o, (frame[2].i));
	LINE_NUMBER(905);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[3].o)))->F_power;
	sp[0].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[0].o))->F_links;
	jint temp1 = (jint)((func_mindustry_gen_Building_pos_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_pos_R_int])(ctx, (frame[1].o));
	jint temp2 = (jint)((func_arc_struct_IntSeq_removeValue_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_removeValue_int_R_boolean])(ctx, sp[0].o, temp1);
	LINE_NUMBER(907);
	clinit_mindustry_world_blocks_power_PowerGraph(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_blocks_power_PowerGraph);
	init_mindustry_world_blocks_power_PowerGraph(ctx, sp[0].o);
	((func_mindustry_world_blocks_power_PowerGraph_reflow_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_power_PowerGraph_reflow_mindustry_gen_Building])(ctx, sp[0].o, (frame[3].o));
	LINE_NUMBER(909);
	INST_IINC(2, -1);
	}
label_7:;
	{
	LINE_NUMBER(899);
	INST_IINC(2, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(912);
	clinit_mindustry_world_blocks_power_PowerGraph(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_blocks_power_PowerGraph);
	init_mindustry_world_blocks_power_PowerGraph(ctx, sp[0].o);
	((func_mindustry_world_blocks_power_PowerGraph_reflow_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_power_PowerGraph_reflow_mindustry_gen_Building])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(914);
	((func_mindustry_gen_Building_updatePowerGraph) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_updatePowerGraph])(ctx, (frame[1].o));
	}
label_1:;
	LINE_NUMBER(916);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_world_Tile_buildDestroyed_mindustry_gen_Building(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tile:buildDestroyed", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_Tile(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(920);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(921);
	((func_mindustry_gen_Building_killed) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_killed])(ctx, (frame[0].o));
	LINE_NUMBER(922);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_world_Tile_buildHealthUpdate_arc_struct_IntSeq(jcontext ctx, jobject param0) {
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tile:buildHealthUpdate", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_Tile(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(926);
	frame[1].i = (jint(0));
	}
label_1:;
	{
	if ((frame[1].i) >= ((jint)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_size)) goto label_2;
	}
	{
	LINE_NUMBER(927);
	sp[0].o = (jobject)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_items;
	frame[2].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[1].i)));
	LINE_NUMBER(928);
	sp[0].o = (jobject)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_items;
	jfloat temp0 = (jfloat)SM_java_lang_Float_intBitsToFloat_int_R_float(ctx, ((jint)ARRAY_ACCESS(jint, sp[0].o, ((frame[1].i) + (jint(1))))));
	frame[3].f = temp0;
	LINE_NUMBER(929);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_build_int_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_build_int_R_mindustry_gen_Building])(ctx, sp[0].o, (frame[2].i));
	frame[4].o = sp[0].o;
	LINE_NUMBER(930);
	if ((frame[4].o) == nullptr) goto label_7;
	}
	{
	if ((floatCompare(((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[4].o)))->F_health), (frame[3].f), -1)) == 0) goto label_7;
	}
	{
	LINE_NUMBER(931);
	((mindustry_gen_Building *) NULL_CHECK((frame[4].o)))->F_health = (frame[3].f);
	LINE_NUMBER(932);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_indexer;
	((func_mindustry_ai_BlockIndexer_notifyHealthChanged_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_BlockIndexer_notifyHealthChanged_mindustry_gen_Building])(ctx, sp[0].o, (frame[4].o));
	}
label_7:;
	{
	LINE_NUMBER(926);
	INST_IINC(1, 2);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(935);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_Tile_lambda$display$0_mindustry_world_Block_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tile:lambda$display$0", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(729);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	LINE_NUMBER(730);
	sp[0].o = frame[2].o;
	clinit_arc_scene_ui_Image(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_ui_Image);
	sp[2].o = (jobject)((func_mindustry_world_Block_getDisplayIcon_mindustry_world_Tile_R_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Block_getDisplayIcon_mindustry_world_Tile_R_arc_graphics_g2d_TextureRegion])(ctx, (frame[1].o), (frame[0].o));
	init_arc_scene_ui_Image_arc_graphics_g2d_TextureRegion(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	clinit_arc_util_Scaling(ctx);
	sp[1].o = (jobject)SF_arc_util_Scaling_fit;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_scaling_arc_util_Scaling_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_scaling_arc_util_Scaling_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(32.0f)));
	LINE_NUMBER(731);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((func_mindustry_world_Block_getDisplayName_mindustry_world_Tile_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Block_getDisplayName_mindustry_world_Tile_R_java_lang_String])(ctx, (frame[1].o), (frame[0].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_labelWrap_java_lang_String_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_labelWrap_java_lang_String_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(190.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(5.0f)));
	LINE_NUMBER(732);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_world_Tile_lambda$circle$0_arc_func_Cons_int_int(jcontext ctx, jobject param0, jint param1, jint param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tile:lambda$circle$0", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_Tile(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(350);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_world;
	sp[1].o = (jobject)((func_mindustry_core_World_rawTile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_World_rawTile_int_int_R_mindustry_world_Tile])(ctx, sp[1].o, (frame[1].i), (frame[2].i));
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat SM_mindustry_world_Tile_lambda$getFlammability$1_mindustry_type_Liquid_float_R_float(jcontext ctx, jobject param0, jfloat param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tile:lambda$getFlammability$1", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_Tile(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(154);
	popStackFrame(ctx);
	return ((((jfloat)((mindustry_type_Liquid *) NULL_CHECK((frame[0].o)))->F_flammability) * (frame[1].f)) / (jfloat(1.6f)));
	}

	popStackFrame(ctx);
}

jfloat SM_mindustry_world_Tile_lambda$getFlammability$0_mindustry_type_Item_int_R_float(jcontext ctx, jobject param0, jint param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tile:lambda$getFlammability$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_Tile(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(150);
	popStackFrame(ctx);
	return (((jfloat)((mindustry_type_Item *) NULL_CHECK((frame[0].o)))->F_flammability) * (jfloat((frame[1].i))));
	}

	popStackFrame(ctx);
}

void clinit_mindustry_world_Tile(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Tile:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_Tile(ctx);
	{
	LINE_NUMBER(26);
	clinit_mindustry_game_EventType$TileChangeEvent(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$TileChangeEvent);
	init_mindustry_game_EventType$TileChangeEvent(ctx, sp[0].o);
	clinit_mindustry_world_Tile(ctx);
	SF_mindustry_world_Tile_tileChange = sp[0].o;
	LINE_NUMBER(27);
	clinit_mindustry_game_EventType$TilePreChangeEvent(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$TilePreChangeEvent);
	init_mindustry_game_EventType$TilePreChangeEvent(ctx, sp[0].o);
	clinit_mindustry_world_Tile(ctx);
	SF_mindustry_world_Tile_preChange = sp[0].o;
	LINE_NUMBER(28);
	clinit_mindustry_game_EventType$TileFloorChangeEvent(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$TileFloorChangeEvent);
	init_mindustry_game_EventType$TileFloorChangeEvent(ctx, sp[0].o);
	clinit_mindustry_world_Tile(ctx);
	SF_mindustry_world_Tile_floorChange = sp[0].o;
	LINE_NUMBER(29);
	clinit_mindustry_game_EventType$TileOverlayChangeEvent(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$TileOverlayChangeEvent);
	init_mindustry_game_EventType$TileOverlayChangeEvent(ctx, sp[0].o);
	clinit_mindustry_world_Tile(ctx);
	SF_mindustry_world_Tile_overlayChange = sp[0].o;
	LINE_NUMBER(31);
	clinit_arc_struct_ObjectSet(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_ObjectSet);
	init_arc_struct_ObjectSet(ctx, sp[0].o);
	clinit_mindustry_world_Tile(ctx);
	SF_mindustry_world_Tile_tileSet = sp[0].o;
	LINE_NUMBER(32);
	clinit_arc_struct_IntSet(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_IntSet);
	init_arc_struct_IntSet(ctx, sp[0].o);
	clinit_mindustry_world_Tile(ctx);
	SF_mindustry_world_Tile_staleGraphs = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_world_Tile;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field build
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[10]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[12]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[13]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[14]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[15]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[16]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[1])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[2])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

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

	methods[17]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[18]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[19]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[20]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[21]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[22]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[23]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[24]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[25]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[26]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[27]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[28]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[29]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[30]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[31]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[32]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[33]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[34]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[35]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[36]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[37]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[38]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[39]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[40]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[41]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[42]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[43]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[44]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[45]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[46]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[47]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[48]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[49]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[50]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[51]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[52]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[53]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[54]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[55]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[56]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[57]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[58]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[59]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[60]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[61]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[62]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method nearby
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[63]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Method nearby
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[64]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Method nearby
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[65]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Method nearbyBuild
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[66]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	methods[67]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method drop
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[68]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Method wallDrop
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[69]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	methods[70]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[71]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[72]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[73]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[74]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[75]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[76]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[77]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[78]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[79]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[80]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[81]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[82]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[83]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[84]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[85]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[86]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[87]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[88]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[89]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[90]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[91]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[92]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[93]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[94]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[95]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[96]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[97]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[98]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[99]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[100]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[101]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[102]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[103]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[104]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[105]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_world_Tile[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_mindustry_world_Tile_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_mindustry_world_Tile_getX_R_float,
	(void *) M_mindustry_world_Tile_getY_R_float,
	(void *) M_arc_math_geom_Position_angleTo_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_angleTo_float_float_R_float,
	(void *) M_arc_math_geom_Position_dst2_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_dst_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_dst_float_float_R_float,
	(void *) M_arc_math_geom_Position_dst2_float_float_R_float,
	(void *) M_arc_math_geom_Position_within_arc_math_geom_Position_float_R_boolean,
	(void *) M_arc_math_geom_Position_within_float_float_float_R_boolean,
	(void *) M_mindustry_world_Tile_hitbox_arc_math_geom_Rect,
	(void *) M_mindustry_world_Tile_displayable_R_boolean,
	(void *) M_mindustry_world_Tile_display_arc_scene_ui_layout_Table,
	(void *) M_mindustry_world_Tile_pos_R_int,
	(void *) M_mindustry_world_Tile_array_R_int,
	(void *) M_mindustry_world_Tile_relativeTo_mindustry_world_Tile_R_byte,
	(void *) M_mindustry_world_Tile_relativeTo_int_int_R_byte,
	(void *) M_mindustry_world_Tile_absoluteRelativeTo_int_int_R_byte,
	(void *) M_mindustry_world_Tile_getFlammability_R_float,
	(void *) M_mindustry_world_Tile_inMapArea_R_boolean,
	(void *) M_mindustry_world_Tile_worldx_R_float,
	(void *) M_mindustry_world_Tile_worldy_R_float,
	(void *) M_mindustry_world_Tile_drawx_R_float,
	(void *) M_mindustry_world_Tile_drawy_R_float,
	(void *) M_mindustry_world_Tile_isDarkened_R_boolean,
	(void *) M_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor,
	(void *) M_mindustry_world_Tile_block_R_mindustry_world_Block,
	(void *) M_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor,
	(void *) M_mindustry_world_Tile_updateBlockReference_mindustry_world_Block,
	(void *) M_mindustry_world_Tile_cblock_R_mindustry_world_Block,
	(void *) M_mindustry_world_Tile_team_R_mindustry_game_Team,
	(void *) M_mindustry_world_Tile_setTeam_mindustry_game_Team,
	(void *) M_mindustry_world_Tile_isCenter_R_boolean,
	(void *) M_mindustry_world_Tile_centerX_R_int,
	(void *) M_mindustry_world_Tile_centerY_R_int,
	(void *) M_mindustry_world_Tile_getTeamID_R_int,
	(void *) M_mindustry_world_Tile_setBlock_mindustry_world_Block_mindustry_game_Team_int,
	(void *) M_mindustry_world_Tile_setBlock_mindustry_world_Block_mindustry_game_Team_int_arc_func_Prov,
	(void *) M_mindustry_world_Tile_setBlock_mindustry_world_Block_mindustry_game_Team,
	(void *) M_mindustry_world_Tile_setBlock_mindustry_world_Block,
	(void *) M_mindustry_world_Tile_setFloor_mindustry_world_blocks_environment_Floor,
	(void *) M_mindustry_world_Tile_isEditorTile_R_boolean,
	(void *) M_mindustry_world_Tile_setAir,
	(void *) M_mindustry_world_Tile_circle_int_arc_func_Intc2,
	(void *) M_mindustry_world_Tile_circle_int_arc_func_Cons,
	(void *) M_mindustry_world_Tile_getFloorColor_R_arc_graphics_Color,
	(void *) M_mindustry_world_Tile_recacheWall,
	(void *) M_mindustry_world_Tile_recache,
	(void *) M_mindustry_world_Tile_remove,
	(void *) M_mindustry_world_Tile_removeNet,
	(void *) M_mindustry_world_Tile_setNet_mindustry_world_Block,
	(void *) M_mindustry_world_Tile_setNet_mindustry_world_Block_mindustry_game_Team_int,
	(void *) M_mindustry_world_Tile_setFloorNet_mindustry_world_Block_mindustry_world_Block,
	(void *) M_mindustry_world_Tile_setFloorNet_mindustry_world_Block,
	(void *) M_mindustry_world_Tile_setOverlayNet_mindustry_world_Block,
	(void *) M_mindustry_world_Tile_overlayID_R_short,
	(void *) M_mindustry_world_Tile_blockID_R_short,
	(void *) M_mindustry_world_Tile_floorID_R_short,
	(void *) M_mindustry_world_Tile_setOverlay_mindustry_world_Block,
	(void *) M_mindustry_world_Tile_setOverlayQuiet_mindustry_world_Block,
	(void *) M_mindustry_world_Tile_clearOverlay,
	(void *) M_mindustry_world_Tile_passable_R_boolean,
	(void *) M_mindustry_world_Tile_synthetic_R_boolean,
	(void *) M_mindustry_world_Tile_solid_R_boolean,
	(void *) M_mindustry_world_Tile_breakable_R_boolean,
	(void *) M_mindustry_world_Tile_dangerous_R_boolean,
	(void *) M_mindustry_world_Tile_isDeep_R_boolean,
	(void *) M_mindustry_world_Tile_getLinkedTiles_arc_func_Cons,
	(void *) M_mindustry_world_Tile_getLinkedTiles_arc_struct_Seq_R_arc_struct_Seq,
	(void *) M_mindustry_world_Tile_getLinkedTilesAs_mindustry_world_Block_arc_struct_Seq_R_arc_struct_Seq,
	(void *) M_mindustry_world_Tile_getLinkedTilesAs_mindustry_world_Block_arc_func_Cons,
	(void *) M_mindustry_world_Tile_getHitbox_arc_math_geom_Rect_R_arc_math_geom_Rect,
	(void *) M_mindustry_world_Tile_getBounds_arc_math_geom_Rect_R_arc_math_geom_Rect,
	(void *) M_mindustry_world_Tile_nearby_arc_math_geom_Point2_R_mindustry_world_Tile,
	(void *) M_mindustry_world_Tile_nearby_int_int_R_mindustry_world_Tile,
	(void *) M_mindustry_world_Tile_nearby_int_R_mindustry_world_Tile,
	(void *) M_mindustry_world_Tile_nearbyBuild_int_R_mindustry_gen_Building,
	(void *) M_mindustry_world_Tile_interactable_mindustry_game_Team_R_boolean,
	(void *) M_mindustry_world_Tile_drop_R_mindustry_type_Item,
	(void *) M_mindustry_world_Tile_wallDrop_R_mindustry_type_Item,
	(void *) M_mindustry_world_Tile_shouldSaveData_R_boolean,
	(void *) M_mindustry_world_Tile_staticDarkness_R_int,
	(void *) M_mindustry_world_Tile_legSolid_R_boolean,
	(void *) M_mindustry_world_Tile_adjacentTo_mindustry_world_Tile_R_boolean,
	(void *) M_mindustry_world_Tile_preChanged,
	(void *) M_mindustry_world_Tile_changeBuild_mindustry_game_Team_arc_func_Prov_int,
	(void *) M_mindustry_world_Tile_changed,
	(void *) M_mindustry_world_Tile_fireChanged,
	(void *) M_mindustry_world_Tile_firePreChanged,
	(void *) M_mindustry_world_Tile_getPackedData_R_long,
	(void *) M_mindustry_world_Tile_setPackedData_long,
	(void *) M_mindustry_world_Tile_lambda$display$0_mindustry_world_Block_arc_scene_ui_layout_Table,
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
	{ "hitbox", "(Larc/math/geom/Rect;)V" },
	{ "displayable", "()Z" },
	{ "display", "(Larc/scene/ui/layout/Table;)V" },
	{ "pos", "()I" },
	{ "array", "()I" },
	{ "relativeTo", "(Lmindustry/world/Tile;)B" },
	{ "relativeTo", "(II)B" },
	{ "absoluteRelativeTo", "(II)B" },
	{ "getFlammability", "()F" },
	{ "inMapArea", "()Z" },
	{ "worldx", "()F" },
	{ "worldy", "()F" },
	{ "drawx", "()F" },
	{ "drawy", "()F" },
	{ "isDarkened", "()Z" },
	{ "floor", "()Lmindustry/world/blocks/environment/Floor;" },
	{ "block", "()Lmindustry/world/Block;" },
	{ "overlay", "()Lmindustry/world/blocks/environment/Floor;" },
	{ "updateBlockReference", "(Lmindustry/world/Block;)V" },
	{ "cblock", "()Lmindustry/world/Block;" },
	{ "team", "()Lmindustry/game/Team;" },
	{ "setTeam", "(Lmindustry/game/Team;)V" },
	{ "isCenter", "()Z" },
	{ "centerX", "()I" },
	{ "centerY", "()I" },
	{ "getTeamID", "()I" },
	{ "setBlock", "(Lmindustry/world/Block;Lmindustry/game/Team;I)V" },
	{ "setBlock", "(Lmindustry/world/Block;Lmindustry/game/Team;ILarc/func/Prov;)V" },
	{ "setBlock", "(Lmindustry/world/Block;Lmindustry/game/Team;)V" },
	{ "setBlock", "(Lmindustry/world/Block;)V" },
	{ "setFloor", "(Lmindustry/world/blocks/environment/Floor;)V" },
	{ "isEditorTile", "()Z" },
	{ "setAir", "()V" },
	{ "circle", "(ILarc/func/Intc2;)V" },
	{ "circle", "(ILarc/func/Cons;)V" },
	{ "getFloorColor", "()Larc/graphics/Color;" },
	{ "recacheWall", "()V" },
	{ "recache", "()V" },
	{ "remove", "()V" },
	{ "removeNet", "()V" },
	{ "setNet", "(Lmindustry/world/Block;)V" },
	{ "setNet", "(Lmindustry/world/Block;Lmindustry/game/Team;I)V" },
	{ "setFloorNet", "(Lmindustry/world/Block;Lmindustry/world/Block;)V" },
	{ "setFloorNet", "(Lmindustry/world/Block;)V" },
	{ "setOverlayNet", "(Lmindustry/world/Block;)V" },
	{ "overlayID", "()S" },
	{ "blockID", "()S" },
	{ "floorID", "()S" },
	{ "setOverlay", "(Lmindustry/world/Block;)V" },
	{ "setOverlayQuiet", "(Lmindustry/world/Block;)V" },
	{ "clearOverlay", "()V" },
	{ "passable", "()Z" },
	{ "synthetic", "()Z" },
	{ "solid", "()Z" },
	{ "breakable", "()Z" },
	{ "dangerous", "()Z" },
	{ "isDeep", "()Z" },
	{ "getLinkedTiles", "(Larc/func/Cons;)V" },
	{ "getLinkedTiles", "(Larc/struct/Seq;)Larc/struct/Seq;" },
	{ "getLinkedTilesAs", "(Lmindustry/world/Block;Larc/struct/Seq;)Larc/struct/Seq;" },
	{ "getLinkedTilesAs", "(Lmindustry/world/Block;Larc/func/Cons;)V" },
	{ "getHitbox", "(Larc/math/geom/Rect;)Larc/math/geom/Rect;" },
	{ "getBounds", "(Larc/math/geom/Rect;)Larc/math/geom/Rect;" },
	{ "nearby", "(Larc/math/geom/Point2;)Lmindustry/world/Tile;" },
	{ "nearby", "(II)Lmindustry/world/Tile;" },
	{ "nearby", "(I)Lmindustry/world/Tile;" },
	{ "nearbyBuild", "(I)Lmindustry/gen/Building;" },
	{ "interactable", "(Lmindustry/game/Team;)Z" },
	{ "drop", "()Lmindustry/type/Item;" },
	{ "wallDrop", "()Lmindustry/type/Item;" },
	{ "shouldSaveData", "()Z" },
	{ "staticDarkness", "()I" },
	{ "legSolid", "()Z" },
	{ "adjacentTo", "(Lmindustry/world/Tile;)Z" },
	{ "preChanged", "()V" },
	{ "changeBuild", "(Lmindustry/game/Team;Larc/func/Prov;I)V" },
	{ "changed", "()V" },
	{ "fireChanged", "()V" },
	{ "firePreChanged", "()V" },
	{ "getPackedData", "()J" },
	{ "setPackedData", "(J)V" },
	{ "lambda$display$0", "(Lmindustry/world/Block;Larc/scene/ui/layout/Table;)V" },
};

static jclass interfaces[] { &class_arc_math_geom_Position, &class_arc_math_geom_QuadTree$QuadTreeObject, &class_mindustry_ui_Displayable, };

static jclass innerClasses[] {
	&class_mindustry_world_Tile$PackedTileDataStruct,
};

static FieldMetadata fields[] {
	{ "tileChange", &class_mindustry_game_EventType$TileChangeEvent, (intptr_t) &SF_mindustry_world_Tile_tileChange, "Lmindustry/game/EventType$TileChangeEvent;", 26 },
	{ "preChange", &class_mindustry_game_EventType$TilePreChangeEvent, (intptr_t) &SF_mindustry_world_Tile_preChange, "Lmindustry/game/EventType$TilePreChangeEvent;", 26 },
	{ "floorChange", &class_mindustry_game_EventType$TileFloorChangeEvent, (intptr_t) &SF_mindustry_world_Tile_floorChange, "Lmindustry/game/EventType$TileFloorChangeEvent;", 26 },
	{ "overlayChange", &class_mindustry_game_EventType$TileOverlayChangeEvent, (intptr_t) &SF_mindustry_world_Tile_overlayChange, "Lmindustry/game/EventType$TileOverlayChangeEvent;", 26 },
	{ "tileSet", &class_arc_struct_ObjectSet, (intptr_t) &SF_mindustry_world_Tile_tileSet, "Larc/struct/ObjectSet;", 26 },
	{ "staleGraphs", &class_arc_struct_IntSet, (intptr_t) &SF_mindustry_world_Tile_staleGraphs, "Larc/struct/IntSet;", 26 },
	{ "data", &class_byte, offsetof(mindustry_world_Tile, F_data), "B", 1 },
	{ "floorData", &class_byte, offsetof(mindustry_world_Tile, F_floorData), "B", 1 },
	{ "overlayData", &class_byte, offsetof(mindustry_world_Tile, F_overlayData), "B", 1 },
	{ "extraData", &class_int, offsetof(mindustry_world_Tile, F_extraData), "I", 1 },
	{ "build", &class_mindustry_gen_Building, offsetof(mindustry_world_Tile, F_build), "Lmindustry/gen/Building;", 1 },
	{ "x", &class_short, offsetof(mindustry_world_Tile, F_x), "S", 1 },
	{ "y", &class_short, offsetof(mindustry_world_Tile, F_y), "S", 1 },
	{ "block", &class_mindustry_world_Block, offsetof(mindustry_world_Tile, F_block), "Lmindustry/world/Block;", 4 },
	{ "floor", &class_mindustry_world_blocks_environment_Floor, offsetof(mindustry_world_Tile, F_floor), "Lmindustry/world/blocks/environment/Floor;", 4 },
	{ "overlay", &class_mindustry_world_blocks_environment_Floor, offsetof(mindustry_world_Tile, F_overlay), "Lmindustry/world/blocks/environment/Floor;", 4 },
	{ "changing", &class_boolean, offsetof(mindustry_world_Tile, F_changing), "Z", 4 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_Tile_int_int, 0, "(II)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_world_Tile_int_int_mindustry_world_Block_mindustry_world_Block_mindustry_world_Block, 0, "(IILmindustry/world/Block;Lmindustry/world/Block;Lmindustry/world/Block;)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_world_Tile_int_int_int_int_int, 0, "(IIIII)V", 1 },
	{ "pos", (intptr_t) M_mindustry_world_Tile_pos_R_int, VTABLE_mindustry_world_Tile_pos_R_int, "()I", 1 },
	{ "array", (intptr_t) M_mindustry_world_Tile_array_R_int, VTABLE_mindustry_world_Tile_array_R_int, "()I", 1 },
	{ "relativeTo", (intptr_t) M_mindustry_world_Tile_relativeTo_mindustry_world_Tile_R_byte, VTABLE_mindustry_world_Tile_relativeTo_mindustry_world_Tile_R_byte, "(Lmindustry/world/Tile;)B", 1 },
	{ "relativeTo", (intptr_t) M_mindustry_world_Tile_relativeTo_int_int_R_byte, VTABLE_mindustry_world_Tile_relativeTo_int_int_R_byte, "(II)B", 1 },
	{ "relativeTo", (intptr_t) SM_mindustry_world_Tile_relativeTo_int_int_int_int_R_byte, 0, "(IIII)B", 9 },
	{ "relativeTo", (intptr_t) SM_mindustry_world_Tile_relativeTo_float_float_float_float_R_int, 0, "(FFFF)I", 9 },
	{ "absoluteRelativeTo", (intptr_t) M_mindustry_world_Tile_absoluteRelativeTo_int_int_R_byte, VTABLE_mindustry_world_Tile_absoluteRelativeTo_int_int_R_byte, "(II)B", 1 },
	{ "getFlammability", (intptr_t) M_mindustry_world_Tile_getFlammability_R_float, VTABLE_mindustry_world_Tile_getFlammability_R_float, "()F", 1 },
	{ "inMapArea", (intptr_t) M_mindustry_world_Tile_inMapArea_R_boolean, VTABLE_mindustry_world_Tile_inMapArea_R_boolean, "()Z", 1 },
	{ "worldx", (intptr_t) M_mindustry_world_Tile_worldx_R_float, VTABLE_mindustry_world_Tile_worldx_R_float, "()F", 1 },
	{ "worldy", (intptr_t) M_mindustry_world_Tile_worldy_R_float, VTABLE_mindustry_world_Tile_worldy_R_float, "()F", 1 },
	{ "drawx", (intptr_t) M_mindustry_world_Tile_drawx_R_float, VTABLE_mindustry_world_Tile_drawx_R_float, "()F", 1 },
	{ "drawy", (intptr_t) M_mindustry_world_Tile_drawy_R_float, VTABLE_mindustry_world_Tile_drawy_R_float, "()F", 1 },
	{ "isDarkened", (intptr_t) M_mindustry_world_Tile_isDarkened_R_boolean, VTABLE_mindustry_world_Tile_isDarkened_R_boolean, "()Z", 1 },
	{ "floor", (intptr_t) M_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor, VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor, "()Lmindustry/world/blocks/environment/Floor;", 1 },
	{ "block", (intptr_t) M_mindustry_world_Tile_block_R_mindustry_world_Block, VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block, "()Lmindustry/world/Block;", 1 },
	{ "overlay", (intptr_t) M_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor, VTABLE_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor, "()Lmindustry/world/blocks/environment/Floor;", 1 },
	{ "updateBlockReference", (intptr_t) M_mindustry_world_Tile_updateBlockReference_mindustry_world_Block, VTABLE_mindustry_world_Tile_updateBlockReference_mindustry_world_Block, "(Lmindustry/world/Block;)V", 1 },
	{ "cblock", (intptr_t) M_mindustry_world_Tile_cblock_R_mindustry_world_Block, VTABLE_mindustry_world_Tile_cblock_R_mindustry_world_Block, "()Lmindustry/world/Block;", 1 },
	{ "team", (intptr_t) M_mindustry_world_Tile_team_R_mindustry_game_Team, VTABLE_mindustry_world_Tile_team_R_mindustry_game_Team, "()Lmindustry/game/Team;", 1 },
	{ "setTeam", (intptr_t) M_mindustry_world_Tile_setTeam_mindustry_game_Team, VTABLE_mindustry_world_Tile_setTeam_mindustry_game_Team, "(Lmindustry/game/Team;)V", 1 },
	{ "isCenter", (intptr_t) M_mindustry_world_Tile_isCenter_R_boolean, VTABLE_mindustry_world_Tile_isCenter_R_boolean, "()Z", 1 },
	{ "centerX", (intptr_t) M_mindustry_world_Tile_centerX_R_int, VTABLE_mindustry_world_Tile_centerX_R_int, "()I", 1 },
	{ "centerY", (intptr_t) M_mindustry_world_Tile_centerY_R_int, VTABLE_mindustry_world_Tile_centerY_R_int, "()I", 1 },
	{ "getTeamID", (intptr_t) M_mindustry_world_Tile_getTeamID_R_int, VTABLE_mindustry_world_Tile_getTeamID_R_int, "()I", 1 },
	{ "setBlock", (intptr_t) M_mindustry_world_Tile_setBlock_mindustry_world_Block_mindustry_game_Team_int, VTABLE_mindustry_world_Tile_setBlock_mindustry_world_Block_mindustry_game_Team_int, "(Lmindustry/world/Block;Lmindustry/game/Team;I)V", 1 },
	{ "setBlock", (intptr_t) M_mindustry_world_Tile_setBlock_mindustry_world_Block_mindustry_game_Team_int_arc_func_Prov, VTABLE_mindustry_world_Tile_setBlock_mindustry_world_Block_mindustry_game_Team_int_arc_func_Prov, "(Lmindustry/world/Block;Lmindustry/game/Team;ILarc/func/Prov;)V", 1 },
	{ "setBlock", (intptr_t) M_mindustry_world_Tile_setBlock_mindustry_world_Block_mindustry_game_Team, VTABLE_mindustry_world_Tile_setBlock_mindustry_world_Block_mindustry_game_Team, "(Lmindustry/world/Block;Lmindustry/game/Team;)V", 1 },
	{ "setBlock", (intptr_t) M_mindustry_world_Tile_setBlock_mindustry_world_Block, VTABLE_mindustry_world_Tile_setBlock_mindustry_world_Block, "(Lmindustry/world/Block;)V", 1 },
	{ "setFloor", (intptr_t) M_mindustry_world_Tile_setFloor_mindustry_world_blocks_environment_Floor, VTABLE_mindustry_world_Tile_setFloor_mindustry_world_blocks_environment_Floor, "(Lmindustry/world/blocks/environment/Floor;)V", 1 },
	{ "isEditorTile", (intptr_t) M_mindustry_world_Tile_isEditorTile_R_boolean, VTABLE_mindustry_world_Tile_isEditorTile_R_boolean, "()Z", 1 },
	{ "setAir", (intptr_t) M_mindustry_world_Tile_setAir, VTABLE_mindustry_world_Tile_setAir, "()V", 1 },
	{ "circle", (intptr_t) M_mindustry_world_Tile_circle_int_arc_func_Intc2, VTABLE_mindustry_world_Tile_circle_int_arc_func_Intc2, "(ILarc/func/Intc2;)V", 1 },
	{ "circle", (intptr_t) M_mindustry_world_Tile_circle_int_arc_func_Cons, VTABLE_mindustry_world_Tile_circle_int_arc_func_Cons, "(ILarc/func/Cons;)V", 1 },
	{ "getFloorColor", (intptr_t) M_mindustry_world_Tile_getFloorColor_R_arc_graphics_Color, VTABLE_mindustry_world_Tile_getFloorColor_R_arc_graphics_Color, "()Larc/graphics/Color;", 1 },
	{ "recacheWall", (intptr_t) M_mindustry_world_Tile_recacheWall, VTABLE_mindustry_world_Tile_recacheWall, "()V", 1 },
	{ "recache", (intptr_t) M_mindustry_world_Tile_recache, VTABLE_mindustry_world_Tile_recache, "()V", 1 },
	{ "remove", (intptr_t) M_mindustry_world_Tile_remove, VTABLE_mindustry_world_Tile_remove, "()V", 1 },
	{ "removeNet", (intptr_t) M_mindustry_world_Tile_removeNet, VTABLE_mindustry_world_Tile_removeNet, "()V", 1 },
	{ "setNet", (intptr_t) M_mindustry_world_Tile_setNet_mindustry_world_Block, VTABLE_mindustry_world_Tile_setNet_mindustry_world_Block, "(Lmindustry/world/Block;)V", 1 },
	{ "setNet", (intptr_t) M_mindustry_world_Tile_setNet_mindustry_world_Block_mindustry_game_Team_int, VTABLE_mindustry_world_Tile_setNet_mindustry_world_Block_mindustry_game_Team_int, "(Lmindustry/world/Block;Lmindustry/game/Team;I)V", 1 },
	{ "setFloorNet", (intptr_t) M_mindustry_world_Tile_setFloorNet_mindustry_world_Block_mindustry_world_Block, VTABLE_mindustry_world_Tile_setFloorNet_mindustry_world_Block_mindustry_world_Block, "(Lmindustry/world/Block;Lmindustry/world/Block;)V", 1 },
	{ "setFloorNet", (intptr_t) M_mindustry_world_Tile_setFloorNet_mindustry_world_Block, VTABLE_mindustry_world_Tile_setFloorNet_mindustry_world_Block, "(Lmindustry/world/Block;)V", 1 },
	{ "setOverlayNet", (intptr_t) M_mindustry_world_Tile_setOverlayNet_mindustry_world_Block, VTABLE_mindustry_world_Tile_setOverlayNet_mindustry_world_Block, "(Lmindustry/world/Block;)V", 1 },
	{ "overlayID", (intptr_t) M_mindustry_world_Tile_overlayID_R_short, VTABLE_mindustry_world_Tile_overlayID_R_short, "()S", 1 },
	{ "blockID", (intptr_t) M_mindustry_world_Tile_blockID_R_short, VTABLE_mindustry_world_Tile_blockID_R_short, "()S", 1 },
	{ "floorID", (intptr_t) M_mindustry_world_Tile_floorID_R_short, VTABLE_mindustry_world_Tile_floorID_R_short, "()S", 1 },
	{ "setOverlay", (intptr_t) M_mindustry_world_Tile_setOverlay_mindustry_world_Block, VTABLE_mindustry_world_Tile_setOverlay_mindustry_world_Block, "(Lmindustry/world/Block;)V", 1 },
	{ "setOverlayQuiet", (intptr_t) M_mindustry_world_Tile_setOverlayQuiet_mindustry_world_Block, VTABLE_mindustry_world_Tile_setOverlayQuiet_mindustry_world_Block, "(Lmindustry/world/Block;)V", 1 },
	{ "clearOverlay", (intptr_t) M_mindustry_world_Tile_clearOverlay, VTABLE_mindustry_world_Tile_clearOverlay, "()V", 1 },
	{ "passable", (intptr_t) M_mindustry_world_Tile_passable_R_boolean, VTABLE_mindustry_world_Tile_passable_R_boolean, "()Z", 1 },
	{ "synthetic", (intptr_t) M_mindustry_world_Tile_synthetic_R_boolean, VTABLE_mindustry_world_Tile_synthetic_R_boolean, "()Z", 1 },
	{ "solid", (intptr_t) M_mindustry_world_Tile_solid_R_boolean, VTABLE_mindustry_world_Tile_solid_R_boolean, "()Z", 1 },
	{ "breakable", (intptr_t) M_mindustry_world_Tile_breakable_R_boolean, VTABLE_mindustry_world_Tile_breakable_R_boolean, "()Z", 1 },
	{ "dangerous", (intptr_t) M_mindustry_world_Tile_dangerous_R_boolean, VTABLE_mindustry_world_Tile_dangerous_R_boolean, "()Z", 1 },
	{ "isDeep", (intptr_t) M_mindustry_world_Tile_isDeep_R_boolean, VTABLE_mindustry_world_Tile_isDeep_R_boolean, "()Z", 1 },
	{ "getLinkedTiles", (intptr_t) M_mindustry_world_Tile_getLinkedTiles_arc_func_Cons, VTABLE_mindustry_world_Tile_getLinkedTiles_arc_func_Cons, "(Larc/func/Cons;)V", 1 },
	{ "getLinkedTiles", (intptr_t) M_mindustry_world_Tile_getLinkedTiles_arc_struct_Seq_R_arc_struct_Seq, VTABLE_mindustry_world_Tile_getLinkedTiles_arc_struct_Seq_R_arc_struct_Seq, "(Larc/struct/Seq;)Larc/struct/Seq;", 1 },
	{ "getLinkedTilesAs", (intptr_t) M_mindustry_world_Tile_getLinkedTilesAs_mindustry_world_Block_arc_struct_Seq_R_arc_struct_Seq, VTABLE_mindustry_world_Tile_getLinkedTilesAs_mindustry_world_Block_arc_struct_Seq_R_arc_struct_Seq, "(Lmindustry/world/Block;Larc/struct/Seq;)Larc/struct/Seq;", 1 },
	{ "getLinkedTilesAs", (intptr_t) M_mindustry_world_Tile_getLinkedTilesAs_mindustry_world_Block_arc_func_Cons, VTABLE_mindustry_world_Tile_getLinkedTilesAs_mindustry_world_Block_arc_func_Cons, "(Lmindustry/world/Block;Larc/func/Cons;)V", 1 },
	{ "getHitbox", (intptr_t) M_mindustry_world_Tile_getHitbox_arc_math_geom_Rect_R_arc_math_geom_Rect, VTABLE_mindustry_world_Tile_getHitbox_arc_math_geom_Rect_R_arc_math_geom_Rect, "(Larc/math/geom/Rect;)Larc/math/geom/Rect;", 1 },
	{ "getBounds", (intptr_t) M_mindustry_world_Tile_getBounds_arc_math_geom_Rect_R_arc_math_geom_Rect, VTABLE_mindustry_world_Tile_getBounds_arc_math_geom_Rect_R_arc_math_geom_Rect, "(Larc/math/geom/Rect;)Larc/math/geom/Rect;", 1 },
	{ "hitbox", (intptr_t) M_mindustry_world_Tile_hitbox_arc_math_geom_Rect, VTABLE_mindustry_world_Tile_hitbox_arc_math_geom_Rect, "(Larc/math/geom/Rect;)V", 1 },
	{ "nearby", (intptr_t) M_mindustry_world_Tile_nearby_arc_math_geom_Point2_R_mindustry_world_Tile, VTABLE_mindustry_world_Tile_nearby_arc_math_geom_Point2_R_mindustry_world_Tile, "(Larc/math/geom/Point2;)Lmindustry/world/Tile;", 1 },
	{ "nearby", (intptr_t) M_mindustry_world_Tile_nearby_int_int_R_mindustry_world_Tile, VTABLE_mindustry_world_Tile_nearby_int_int_R_mindustry_world_Tile, "(II)Lmindustry/world/Tile;", 1 },
	{ "nearby", (intptr_t) M_mindustry_world_Tile_nearby_int_R_mindustry_world_Tile, VTABLE_mindustry_world_Tile_nearby_int_R_mindustry_world_Tile, "(I)Lmindustry/world/Tile;", 1 },
	{ "nearbyBuild", (intptr_t) M_mindustry_world_Tile_nearbyBuild_int_R_mindustry_gen_Building, VTABLE_mindustry_world_Tile_nearbyBuild_int_R_mindustry_gen_Building, "(I)Lmindustry/gen/Building;", 1 },
	{ "interactable", (intptr_t) M_mindustry_world_Tile_interactable_mindustry_game_Team_R_boolean, VTABLE_mindustry_world_Tile_interactable_mindustry_game_Team_R_boolean, "(Lmindustry/game/Team;)Z", 1 },
	{ "drop", (intptr_t) M_mindustry_world_Tile_drop_R_mindustry_type_Item, VTABLE_mindustry_world_Tile_drop_R_mindustry_type_Item, "()Lmindustry/type/Item;", 1 },
	{ "wallDrop", (intptr_t) M_mindustry_world_Tile_wallDrop_R_mindustry_type_Item, VTABLE_mindustry_world_Tile_wallDrop_R_mindustry_type_Item, "()Lmindustry/type/Item;", 1 },
	{ "shouldSaveData", (intptr_t) M_mindustry_world_Tile_shouldSaveData_R_boolean, VTABLE_mindustry_world_Tile_shouldSaveData_R_boolean, "()Z", 1 },
	{ "staticDarkness", (intptr_t) M_mindustry_world_Tile_staticDarkness_R_int, VTABLE_mindustry_world_Tile_staticDarkness_R_int, "()I", 1 },
	{ "legSolid", (intptr_t) M_mindustry_world_Tile_legSolid_R_boolean, VTABLE_mindustry_world_Tile_legSolid_R_boolean, "()Z", 1 },
	{ "adjacentTo", (intptr_t) M_mindustry_world_Tile_adjacentTo_mindustry_world_Tile_R_boolean, VTABLE_mindustry_world_Tile_adjacentTo_mindustry_world_Tile_R_boolean, "(Lmindustry/world/Tile;)Z", 1 },
	{ "preChanged", (intptr_t) M_mindustry_world_Tile_preChanged, VTABLE_mindustry_world_Tile_preChanged, "()V", 4 },
	{ "changeBuild", (intptr_t) M_mindustry_world_Tile_changeBuild_mindustry_game_Team_arc_func_Prov_int, VTABLE_mindustry_world_Tile_changeBuild_mindustry_game_Team_arc_func_Prov_int, "(Lmindustry/game/Team;Larc/func/Prov;I)V", 4 },
	{ "changed", (intptr_t) M_mindustry_world_Tile_changed, VTABLE_mindustry_world_Tile_changed, "()V", 4 },
	{ "fireChanged", (intptr_t) M_mindustry_world_Tile_fireChanged, VTABLE_mindustry_world_Tile_fireChanged, "()V", 4 },
	{ "firePreChanged", (intptr_t) M_mindustry_world_Tile_firePreChanged, VTABLE_mindustry_world_Tile_firePreChanged, "()V", 4 },
	{ "getPackedData", (intptr_t) M_mindustry_world_Tile_getPackedData_R_long, VTABLE_mindustry_world_Tile_getPackedData_R_long, "()J", 1 },
	{ "setPackedData", (intptr_t) M_mindustry_world_Tile_setPackedData_long, VTABLE_mindustry_world_Tile_setPackedData_long, "(J)V", 1 },
	{ "display", (intptr_t) M_mindustry_world_Tile_display_arc_scene_ui_layout_Table, VTABLE_mindustry_world_Tile_display_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 1 },
	{ "displayable", (intptr_t) M_mindustry_world_Tile_displayable_R_boolean, VTABLE_mindustry_world_Tile_displayable_R_boolean, "()Z", 1 },
	{ "getX", (intptr_t) M_mindustry_world_Tile_getX_R_float, VTABLE_mindustry_world_Tile_getX_R_float, "()F", 1 },
	{ "getY", (intptr_t) M_mindustry_world_Tile_getY_R_float, VTABLE_mindustry_world_Tile_getY_R_float, "()F", 1 },
	{ "toString", (intptr_t) M_mindustry_world_Tile_toString_R_java_lang_String, VTABLE_mindustry_world_Tile_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "setTileBlocks", (intptr_t) SM_mindustry_world_Tile_setTileBlocks_mindustry_world_Block_mindustry_game_Team_Array1_int, 0, "(Lmindustry/world/Block;Lmindustry/game/Team;[I)V", 9 },
	{ "setTileFloors", (intptr_t) SM_mindustry_world_Tile_setTileFloors_mindustry_world_Block_Array1_int, 0, "(Lmindustry/world/Block;[I)V", 9 },
	{ "setTileOverlays", (intptr_t) SM_mindustry_world_Tile_setTileOverlays_mindustry_world_Block_Array1_int, 0, "(Lmindustry/world/Block;[I)V", 9 },
	{ "fillTileBlocks", (intptr_t) SM_mindustry_world_Tile_fillTileBlocks_int_int_int_int_mindustry_world_Block_mindustry_game_Team, 0, "(IIIILmindustry/world/Block;Lmindustry/game/Team;)V", 9 },
	{ "fillTileFloors", (intptr_t) SM_mindustry_world_Tile_fillTileFloors_int_int_int_int_mindustry_world_Block, 0, "(IIIILmindustry/world/Block;)V", 9 },
	{ "fillTileOverlays", (intptr_t) SM_mindustry_world_Tile_fillTileOverlays_int_int_int_int_mindustry_world_Block, 0, "(IIIILmindustry/world/Block;)V", 9 },
	{ "setFloor", (intptr_t) SM_mindustry_world_Tile_setFloor_mindustry_world_Tile_mindustry_world_Block_mindustry_world_Block, 0, "(Lmindustry/world/Tile;Lmindustry/world/Block;Lmindustry/world/Block;)V", 9 },
	{ "setOverlay", (intptr_t) SM_mindustry_world_Tile_setOverlay_mindustry_world_Tile_mindustry_world_Block, 0, "(Lmindustry/world/Tile;Lmindustry/world/Block;)V", 9 },
	{ "removeTile", (intptr_t) SM_mindustry_world_Tile_removeTile_mindustry_world_Tile, 0, "(Lmindustry/world/Tile;)V", 9 },
	{ "setTile", (intptr_t) SM_mindustry_world_Tile_setTile_mindustry_world_Tile_mindustry_world_Block_mindustry_game_Team_int, 0, "(Lmindustry/world/Tile;Lmindustry/world/Block;Lmindustry/game/Team;I)V", 9 },
	{ "setTeam", (intptr_t) SM_mindustry_world_Tile_setTeam_mindustry_gen_Building_mindustry_game_Team, 0, "(Lmindustry/gen/Building;Lmindustry/game/Team;)V", 9 },
	{ "setTeams", (intptr_t) SM_mindustry_world_Tile_setTeams_Array1_int_mindustry_game_Team, 0, "([ILmindustry/game/Team;)V", 9 },
	{ "reflowPower", (intptr_t) SM_mindustry_world_Tile_reflowPower_mindustry_game_Team_mindustry_gen_Building, 0, "(Lmindustry/game/Team;Lmindustry/gen/Building;)V", 10 },
	{ "buildDestroyed", (intptr_t) SM_mindustry_world_Tile_buildDestroyed_mindustry_gen_Building, 0, "(Lmindustry/gen/Building;)V", 9 },
	{ "buildHealthUpdate", (intptr_t) SM_mindustry_world_Tile_buildHealthUpdate_arc_struct_IntSeq, 0, "(Larc/struct/IntSeq;)V", 9 },
	{ "lambda$display$0", (intptr_t) M_mindustry_world_Tile_lambda$display$0_mindustry_world_Block_arc_scene_ui_layout_Table, VTABLE_mindustry_world_Tile_lambda$display$0_mindustry_world_Block_arc_scene_ui_layout_Table, "(Lmindustry/world/Block;Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$circle$0", (intptr_t) SM_mindustry_world_Tile_lambda$circle$0_arc_func_Cons_int_int, 0, "(Larc/func/Cons;II)V", 4106 },
	{ "lambda$getFlammability$1", (intptr_t) SM_mindustry_world_Tile_lambda$getFlammability$1_mindustry_type_Liquid_float_R_float, 0, "(Lmindustry/type/Liquid;F)F", 4106 },
	{ "lambda$getFlammability$0", (intptr_t) SM_mindustry_world_Tile_lambda$getFlammability$0_mindustry_type_Item_int_R_float, 0, "(Lmindustry/type/Item;I)F", 4106 },
	{ "<clinit>", (intptr_t) clinit_mindustry_world_Tile, 0, "()V", 8 },
};

Class class_mindustry_world_Tile{
		.nativeName = (intptr_t) "mindustry/world/Tile",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_world_Tile),
		.classVtable = (intptr_t) vtable_mindustry_world_Tile,
		.staticInitializer = (intptr_t) clinit_mindustry_world_Tile,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_world_Tile,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 3,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 17,
		.nativeFields = (intptr_t) fields,
		.methodCount = 109,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 103,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_Tile = registerClass(&class_mindustry_world_Tile);

}
