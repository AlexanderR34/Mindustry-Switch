#include "mindustry/ai/BlockIndexer.h"
#include "arc/func/Prov.h"
#include "arc/Events.h"
#include "mindustry/ai/BlockIndexer_invoke_arc_func_Boolf_3.h"
#include "mindustry/ai/BlockIndexer_invoke_arc_func_Boolf_2.h"
#include "mindustry/logic/Ranged.h"
#include "mindustry/ai/BlockIndexer_invoke_arc_func_Prov_2.h"
#include "arc/math/geom/Rect.h"
#include "mindustry/ai/BlockIndexer_invoke_arc_func_Prov_3.h"
#include "mindustry/entities/Units_BuildingPriorityf.h"
#include "java/lang/reflect/Constructor.h"
#include "mindustry/entities/UnitSorts.h"
#include "mindustry/ai/BlockIndexer.h"
#include "mindustry/core/ContentLoader.h"
#include "arc/struct/Seq.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/world/Tile.h"
#include "arc/math/geom/Position.h"
#include "arc/func/Boolf.h"
#include "arc/math/Mathf.h"
#include "java/lang/reflect/Field.h"
#include "java/util/Iterator.h"
#include "mindustry/gen/Unit.h"
#include "arc/math/geom/QuadTree.h"
#include "mindustry/type/Item.h"
#include "arc/struct/Queue.h"
#include "arc/util/Nullable.h"
#include "mindustry/gen/Building.h"
#include "mindustry/game/EventType_TileFloorChangeEvent.h"
#include "mindustry/gen/Posc.h"
#include "mindustry/ai/BlockIndexer_TurretQuadtree.h"
#include "java/lang/Object.h"
#include "arc/struct/ObjectMap.h"
#include "arc/struct/EnumSet.h"
#include "mindustry/world/Block.h"
#include "mindustry/game/Rules.h"
#include "java/lang/Iterable.h"
#include "arc/struct/IntSeq.h"
#include "mindustry/world/Tiles.h"
#include "arc/func/Cons.h"
#include "mindustry/ai/BlockIndexer_invoke_arc_func_Cons_14.h"
#include "mindustry/ai/BlockIndexer_invoke_arc_func_Cons_15.h"
#include "mindustry/game/EventType_TilePreChangeEvent.h"
#include "mindustry/game/EventType_WorldLoadEvent.h"
#include "mindustry/world/blocks/environment/Floor.h"
#include "mindustry/world/meta/BlockFlag.h"
#include "mindustry/game/Rules_TeamRule.h"
#include "arc/math/geom/Geometry.h"
#include "mindustry/gen/Teamc.h"
#include "arc/math/geom/QuadTree_QuadTreeObject.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/game/Teams_TeamData.h"
#include "mindustry/game/EventType_TileChangeEvent.h"
#include "mindustry/ai/BlockIndexer_invoke_arc_func_Cons_10.h"
#include "mindustry/ai/BlockIndexer_invoke_arc_func_Cons_11.h"
#include "mindustry/ai/BlockIndexer_invoke_arc_func_Cons_12.h"
#include "mindustry/ai/BlockIndexer_invoke_arc_func_Cons_13.h"
#include "java/lang/Enum.h"
#include "mindustry/ai/BlockIndexer_invoke_arc_func_Cons_8.h"
#include "mindustry/content/Blocks.h"
#include "mindustry/game/Teams.h"
#include "mindustry/ai/BlockIndexer_invoke_arc_func_Cons_9.h"
#include "mindustry/ai/types/PrebuildAI.h"
#include "mindustry/game/Team.h"
#include "java/lang/Class.h"
#include "arc/struct/ObjectIntMap.h"
#include "mindustry/Vars.h"
#include "mindustry/core/GameState.h"
#include "mindustry/core/World.h"

extern "C" {

jint SF_mindustry_ai_BlockIndexer_quadrantSize;
jobject SF_mindustry_ai_BlockIndexer_rect;
jbool SF_mindustry_ai_BlockIndexer_returnBool;

void mark_mindustry_ai_BlockIndexer(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_ai_BlockIndexer_rect)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ai_BlockIndexer_rect)->clazz)->markFunction)((jobject) SF_mindustry_ai_BlockIndexer_rect, mark, depth + 1);
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
	auto self = (mindustry_ai_BlockIndexer *) object;
	if (self->F_ores)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_ores)->clazz)->markFunction)((jobject) self->F_ores, mark, depth + 1);
	if (self->F_wallOres)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_wallOres)->clazz)->markFunction)((jobject) self->F_wallOres, mark, depth + 1);
	if (self->F_damagedTiles)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_damagedTiles)->clazz)->markFunction)((jobject) self->F_damagedTiles, mark, depth + 1);
	if (self->F_allPresentOres)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_allPresentOres)->clazz)->markFunction)((jobject) self->F_allPresentOres, mark, depth + 1);
	if (self->F_allOres)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_allOres)->clazz)->markFunction)((jobject) self->F_allOres, mark, depth + 1);
	if (self->F_allWallOres)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_allWallOres)->clazz)->markFunction)((jobject) self->F_allWallOres, mark, depth + 1);
	if (self->F_activeTeams)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_activeTeams)->clazz)->markFunction)((jobject) self->F_activeTeams, mark, depth + 1);
	if (self->F_flagMap)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_flagMap)->clazz)->markFunction)((jobject) self->F_flagMap, mark, depth + 1);
	if (self->F_blocksPresent)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_blocksPresent)->clazz)->markFunction)((jobject) self->F_blocksPresent, mark, depth + 1);
	if (self->F_breturnArray)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_breturnArray)->clazz)->markFunction)((jobject) self->F_breturnArray, mark, depth + 1);
	if (self->F_floorMap)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_floorMap)->clazz)->markFunction)((jobject) self->F_floorMap, mark, depth + 1);
}

void init_mindustry_ai_BlockIndexer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/BlockIndexer:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_BlockIndexer(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(53);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(37);
	sp[0].o = frame[0].o;
	clinit_mindustry_game_Team(ctx);
	sp[1].o = (jobject)SF_mindustry_game_Team_all;
	sp[1].o = (jobject)createArray(ctx, &class_arc_struct_Seq, (((jarray) nullCheck(ctx, sp[1].o))->length));
	((mindustry_ai_BlockIndexer *) NULL_CHECK(sp[0].o))->F_damagedTiles = (jref) sp[1].o;
	LINE_NUMBER(39);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_ai_BlockIndexer *) NULL_CHECK(sp[0].o))->F_allPresentOres = (jref) sp[1].o;
	LINE_NUMBER(41);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectIntMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectIntMap);
	init_arc_struct_ObjectIntMap(ctx, sp[1].o);
	((mindustry_ai_BlockIndexer *) NULL_CHECK(sp[0].o))->F_allOres = (jref) sp[1].o;
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectIntMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectIntMap);
	init_arc_struct_ObjectIntMap(ctx, sp[1].o);
	((mindustry_ai_BlockIndexer *) NULL_CHECK(sp[0].o))->F_allWallOres = (jref) sp[1].o;
	LINE_NUMBER(43);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq_java_lang_Class(ctx, sp[1].o, (((jobject) &class_mindustry_game_Team)));
	((mindustry_ai_BlockIndexer *) NULL_CHECK(sp[0].o))->F_activeTeams = (jref) sp[1].o;
	LINE_NUMBER(45);
	sp[0].o = frame[0].o;
	clinit_mindustry_game_Team(ctx);
	sp[1].o = (jobject)SF_mindustry_game_Team_all;
	jint temp0 = ((jarray) nullCheck(ctx, sp[1].o))->length;
	clinit_mindustry_world_meta_BlockFlag(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_BlockFlag_all;
	sp[1].o = (jobject)createMultiArray(ctx, &class_arc_struct_Seq, {temp0, (((jarray) nullCheck(ctx, sp[1].o))->length)});
	((mindustry_ai_BlockIndexer *) NULL_CHECK(sp[0].o))->F_flagMap = (jref) sp[1].o;
	LINE_NUMBER(49);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq_java_lang_Class(ctx, sp[1].o, (((jobject) &class_mindustry_gen_Building)));
	((mindustry_ai_BlockIndexer *) NULL_CHECK(sp[0].o))->F_breturnArray = (jref) sp[1].o;
	LINE_NUMBER(54);
	((func_mindustry_ai_BlockIndexer_clearFlags) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_BlockIndexer_clearFlags])(ctx, (frame[0].o));
	LINE_NUMBER(56);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$TilePreChangeEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_ai_BlockIndexer_invoke_arc_func_Cons_8(ctx);
		auto proxy = (mindustry_ai_BlockIndexer_invoke_arc_func_Cons_8 *) gcAlloc(ctx, &class_mindustry_ai_BlockIndexer_invoke_arc_func_Cons_8);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(60);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$TileChangeEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_ai_BlockIndexer_invoke_arc_func_Cons_9(ctx);
		auto proxy = (mindustry_ai_BlockIndexer_invoke_arc_func_Cons_9 *) gcAlloc(ctx, &class_mindustry_ai_BlockIndexer_invoke_arc_func_Cons_9);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(64);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$TileFloorChangeEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_ai_BlockIndexer_invoke_arc_func_Cons_10(ctx);
		auto proxy = (mindustry_ai_BlockIndexer_invoke_arc_func_Cons_10 *) gcAlloc(ctx, &class_mindustry_ai_BlockIndexer_invoke_arc_func_Cons_10);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(69);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$WorldLoadEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_ai_BlockIndexer_invoke_arc_func_Cons_11(ctx);
		auto proxy = (mindustry_ai_BlockIndexer_invoke_arc_func_Cons_11 *) gcAlloc(ctx, &class_mindustry_ai_BlockIndexer_invoke_arc_func_Cons_11);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(128);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ai_BlockIndexer_getAllPresentOres_R_arc_struct_Seq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/BlockIndexer:getAllPresentOres", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(131);
	sp[0].o = (jobject)((mindustry_ai_BlockIndexer *) NULL_CHECK((frame[0].o)))->F_allPresentOres;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_ai_BlockIndexer_updatePresentOres(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/BlockIndexer:updatePresentOres", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(135);
	sp[0].o = (jobject)((mindustry_ai_BlockIndexer *) NULL_CHECK((frame[0].o)))->F_allPresentOres;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(136);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_items_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_items_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_2:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_mindustry_type_Item, sp[0].o));
	LINE_NUMBER(137);
	jint temp0 = (jint)((func_mindustry_ai_BlockIndexer_hasOre_mindustry_type_Item_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_BlockIndexer_hasOre_mindustry_type_Item_R_boolean])(ctx, (frame[0].o), (frame[2].o));
	if (temp0 != 0) goto label_5;
	}
	{
	jint temp0 = (jint)((func_mindustry_ai_BlockIndexer_hasWallOre_mindustry_type_Item_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_BlockIndexer_hasWallOre_mindustry_type_Item_R_boolean])(ctx, (frame[0].o), (frame[2].o));
	if (temp0 == 0) goto label_6;
	}
label_5:;
	{
	LINE_NUMBER(138);
	sp[0].o = (jobject)((mindustry_ai_BlockIndexer *) NULL_CHECK((frame[0].o)))->F_allPresentOres;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[2].o));
	}
label_6:;
	LINE_NUMBER(140);
	goto label_2;
label_3:;
	LINE_NUMBER(141);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ai_BlockIndexer_removeFloorIndex_mindustry_world_Tile_mindustry_world_blocks_environment_Floor(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/BlockIndexer:removeFloorIndex", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(144);
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[2].o)))->F_flags;
	if (((jint)((arc_struct_EnumSet *) NULL_CHECK(sp[0].o))->F_size) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_ai_BlockIndexer *) NULL_CHECK((frame[0].o)))->F_floorMap;
	if (sp[0].o != nullptr) goto label_2;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(146);
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[2].o)))->F_flags;
	sp[0].o = (jobject)((arc_struct_EnumSet *) NULL_CHECK(sp[0].o))->F_array;
	frame[3].o = (checkCast(ctx, getArrayClass(&class_mindustry_world_meta_BlockFlag, 1), sp[0].o));
	frame[4].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	frame[5].i = (jint(0));
	}
label_3:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_4;
	}
	{
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(147);
	sp[0].o = (jobject)((func_mindustry_ai_BlockIndexer_getFlaggedFloors_mindustry_world_meta_BlockFlag_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_BlockIndexer_getFlaggedFloors_mindustry_world_meta_BlockFlag_R_arc_struct_Seq])(ctx, (frame[0].o), (frame[6].o));
	jint temp0 = (jint)((func_arc_struct_Seq_remove_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_remove_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(146);
	INST_IINC(5, 1);
	goto label_3;
	}
label_4:;
	LINE_NUMBER(149);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ai_BlockIndexer_addFloorIndex_mindustry_world_Tile_mindustry_world_blocks_environment_Floor(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/BlockIndexer:addFloorIndex", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(152);
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[2].o)))->F_flags;
	if (((jint)((arc_struct_EnumSet *) NULL_CHECK(sp[0].o))->F_size) == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_world_blocks_environment_Floor_shouldIndex_mindustry_world_Tile_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_blocks_environment_Floor_shouldIndex_mindustry_world_Tile_R_boolean])(ctx, (frame[2].o), (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_ai_BlockIndexer *) NULL_CHECK((frame[0].o)))->F_floorMap;
	if (sp[0].o != nullptr) goto label_2;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(154);
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[2].o)))->F_flags;
	sp[0].o = (jobject)((arc_struct_EnumSet *) NULL_CHECK(sp[0].o))->F_array;
	frame[3].o = (checkCast(ctx, getArrayClass(&class_mindustry_world_meta_BlockFlag, 1), sp[0].o));
	frame[4].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	frame[5].i = (jint(0));
	}
label_3:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_4;
	}
	{
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(155);
	sp[0].o = (jobject)((func_mindustry_ai_BlockIndexer_getFlaggedFloors_mindustry_world_meta_BlockFlag_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_BlockIndexer_getFlaggedFloors_mindustry_world_meta_BlockFlag_R_arc_struct_Seq])(ctx, (frame[0].o), (frame[6].o));
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(154);
	INST_IINC(5, 1);
	goto label_3;
	}
label_4:;
	LINE_NUMBER(157);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_ai_BlockIndexer_getFlaggedFloors_mindustry_world_meta_BlockFlag_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/BlockIndexer:getFlaggedFloors", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(160);
	sp[0].o = (jobject)((mindustry_ai_BlockIndexer *) NULL_CHECK((frame[0].o)))->F_floorMap;
	jint temp0 = (jint)((func_mindustry_world_meta_BlockFlag_ordinal_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_meta_BlockFlag_ordinal_R_int])(ctx, (frame[1].o));
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, temp0)) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(161);
	sp[0].o = (jobject)((mindustry_ai_BlockIndexer *) NULL_CHECK((frame[0].o)))->F_floorMap;
	jint temp0 = (jint)((func_mindustry_world_meta_BlockFlag_ordinal_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_meta_BlockFlag_ordinal_R_int])(ctx, (frame[1].o));
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq_boolean(ctx, sp[1].o, (jint(0)));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(163);
	sp[0].o = (jobject)((mindustry_ai_BlockIndexer *) NULL_CHECK((frame[0].o)))->F_floorMap;
	jint temp0 = (jint)((func_mindustry_world_meta_BlockFlag_ordinal_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_meta_BlockFlag_ordinal_R_int])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, temp0));
	}

	popStackFrame(ctx);
}

void M_mindustry_ai_BlockIndexer_removeIndex_mindustry_world_Tile(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/BlockIndexer:removeIndex", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(167);
	sp[0].o = (jobject)((func_mindustry_world_Tile_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_team_R_mindustry_game_Team])(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(168);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_build;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	jint temp0 = (jint)((func_mindustry_world_Tile_isCenter_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_isCenter_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(169);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_build;
	frame[3].o = sp[0].o;
	LINE_NUMBER(170);
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[1].o));
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_flags;
	frame[4].o = sp[0].o;
	LINE_NUMBER(171);
	sp[0].o = (jobject)((func_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData])(ctx, (frame[2].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(173);
	if (((jint)((arc_struct_EnumSet *) NULL_CHECK((frame[4].o)))->F_size) <= 0) goto label_7;
	}
	{
	LINE_NUMBER(174);
	sp[0].o = (jobject)((arc_struct_EnumSet *) NULL_CHECK((frame[4].o)))->F_array;
	frame[6].o = (checkCast(ctx, getArrayClass(&class_mindustry_world_meta_BlockFlag, 1), sp[0].o));
	frame[7].i = (((jarray) nullCheck(ctx, (frame[6].o)))->length);
	frame[8].i = (jint(0));
	}
label_9:;
	{
	if ((frame[8].i) >= (frame[7].i)) goto label_7;
	}
	{
	frame[9].o = ((jobject)ARRAY_ACCESS(jobject, (frame[6].o), (frame[8].i)));
	LINE_NUMBER(175);
	sp[0].o = (jobject)((func_mindustry_ai_BlockIndexer_getFlagged_mindustry_game_Team_R_Array1_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_BlockIndexer_getFlagged_mindustry_game_Team_R_Array1_arc_struct_Seq])(ctx, (frame[0].o), (frame[2].o));
	jint temp0 = (jint)((func_mindustry_world_meta_BlockFlag_ordinal_R_int) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_mindustry_world_meta_BlockFlag_ordinal_R_int])(ctx, (frame[9].o));
	jint temp1 = (jint)((func_arc_struct_Seq_remove_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, temp0)))->vtable)[VTABLE_arc_struct_Seq_remove_java_lang_Object_R_boolean])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, temp0)), (frame[3].o));
	LINE_NUMBER(174);
	INST_IINC(8, 1);
	goto label_9;
	}
label_7:;
	{
	LINE_NUMBER(180);
	frame[6].i = (((jint)((mindustry_gen_Building *) NULL_CHECK((frame[3].o)))->F_indexerBuildIndex) & (jint(65535)));
	LINE_NUMBER(183);
	jint temp0 = frame[6].i;
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[5].o)))->F_buildings;
	if (temp0 >= ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_13;
	}
	{
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[5].o)))->F_buildings;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[6].i));
	if (sp[0].o != (frame[3].o)) goto label_13;
	}
	{
	LINE_NUMBER(184);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[5].o)))->F_buildings;
	sp[0].o = (jobject)((func_arc_struct_Seq_remove_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_remove_int_R_java_lang_Object])(ctx, sp[0].o, (frame[6].i));
	LINE_NUMBER(186);
	jint temp0 = frame[6].i;
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[5].o)))->F_buildings;
	if (temp0 >= ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_16;
	}
	{
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[5].o)))->F_buildings;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[6].i));
	((mindustry_gen_Building *) NULL_CHECK((checkCast(ctx, &class_mindustry_gen_Building, sp[0].o))))->F_indexerBuildIndex = (jshort((frame[6].i)));
	goto label_16;
	}
label_13:;
	{
	LINE_NUMBER(188);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[5].o)))->F_buildings;
	jint temp0 = (jint)((func_arc_struct_Seq_indexOf_java_lang_Object_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_indexOf_java_lang_Object_R_int])(ctx, sp[0].o, (frame[3].o));
	frame[7].i = temp0;
	LINE_NUMBER(189);
	if ((frame[7].i) == (jint(-1))) goto label_16;
	}
	{
	LINE_NUMBER(190);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[5].o)))->F_buildings;
	sp[0].o = (jobject)((func_arc_struct_Seq_remove_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_remove_int_R_java_lang_Object])(ctx, sp[0].o, (frame[7].i));
	LINE_NUMBER(192);
	jint temp0 = frame[7].i;
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[5].o)))->F_buildings;
	if (temp0 >= ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_16;
	}
	{
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[5].o)))->F_buildings;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[7].i));
	((mindustry_gen_Building *) NULL_CHECK((checkCast(ctx, &class_mindustry_gen_Building, sp[0].o))))->F_indexerBuildIndex = (jshort((frame[7].i)));
	}
label_16:;
	{
	LINE_NUMBER(198);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[5].o)))->F_buildingTypes;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[3].o)))->F_block;
	{ /* InvokeDynamic */
		clinit_mindustry_ai_BlockIndexer_invoke_arc_func_Prov_2(ctx);
		auto proxy = (mindustry_ai_BlockIndexer_invoke_arc_func_Prov_2 *) gcAlloc(ctx, &class_mindustry_ai_BlockIndexer_invoke_arc_func_Prov_2);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_arc_func_Prov_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_arc_func_Prov_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[6].o = (checkCast(ctx, &class_arc_struct_Seq, sp[0].o));
	LINE_NUMBER(199);
	frame[7].i = (((jint)((mindustry_gen_Building *) NULL_CHECK((frame[3].o)))->F_indexerBuildTypeIndex) & (jint(65535)));
	LINE_NUMBER(202);
	if ((frame[7].i) >= ((jint)((arc_struct_Seq *) NULL_CHECK((frame[6].o)))->F_size)) goto label_22;
	}
	{
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[6].o), (frame[7].i));
	if (sp[0].o != (frame[3].o)) goto label_22;
	}
	{
	LINE_NUMBER(203);
	sp[0].o = (jobject)((func_arc_struct_Seq_remove_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_struct_Seq_remove_int_R_java_lang_Object])(ctx, (frame[6].o), (frame[7].i));
	LINE_NUMBER(205);
	if ((frame[7].i) >= ((jint)((arc_struct_Seq *) NULL_CHECK((frame[6].o)))->F_size)) goto label_25;
	}
	{
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[6].o), (frame[7].i));
	((mindustry_gen_Building *) NULL_CHECK((checkCast(ctx, &class_mindustry_gen_Building, sp[0].o))))->F_indexerBuildTypeIndex = (jshort((frame[7].i)));
	goto label_25;
	}
label_22:;
	{
	LINE_NUMBER(207);
	jint temp0 = (jint)((func_arc_struct_Seq_indexOf_java_lang_Object_R_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_struct_Seq_indexOf_java_lang_Object_R_int])(ctx, (frame[6].o), (frame[3].o));
	frame[8].i = temp0;
	LINE_NUMBER(208);
	if ((frame[8].i) == (jint(-1))) goto label_25;
	}
	{
	LINE_NUMBER(209);
	sp[0].o = (jobject)((func_arc_struct_Seq_remove_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_struct_Seq_remove_int_R_java_lang_Object])(ctx, (frame[6].o), (frame[8].i));
	LINE_NUMBER(211);
	if ((frame[8].i) >= ((jint)((arc_struct_Seq *) NULL_CHECK((frame[6].o)))->F_size)) goto label_25;
	}
	{
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[6].o), (frame[8].i));
	((mindustry_gen_Building *) NULL_CHECK((checkCast(ctx, &class_mindustry_gen_Building, sp[0].o))))->F_indexerBuildTypeIndex = (jshort((frame[8].i)));
	}
label_25:;
	{
	LINE_NUMBER(216);
	sp[0].o = frame[5].o;
	jint temp0 = (jint)((mindustry_game_Teams$TeamData *) NULL_CHECK(sp[0].o))->F_unitCap;
	sp[1].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[1].o));
	((mindustry_game_Teams$TeamData *) NULL_CHECK(sp[0].o))->F_unitCap = (temp0 - ((jint)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_unitCapModifier));
	LINE_NUMBER(218);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[5].o)))->F_buildingTree;
	if (sp[0].o == nullptr) goto label_30;
	}
	{
	LINE_NUMBER(219);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[5].o)))->F_buildingTree;
	jint temp0 = (jint)((func_arc_math_geom_QuadTree_remove_arc_math_geom_QuadTree$QuadTreeObject_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_QuadTree_remove_arc_math_geom_QuadTree$QuadTreeObject_R_boolean])(ctx, sp[0].o, (frame[3].o));
	}
label_30:;
	{
	LINE_NUMBER(222);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[5].o)))->F_turretTree;
	if (sp[0].o == nullptr) goto label_32;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[3].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_attacks) == 0) goto label_32;
	}
	{
	LINE_NUMBER(223);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[5].o)))->F_turretTree;
	jint temp0 = (jint)((func_arc_math_geom_QuadTree_remove_arc_math_geom_QuadTree$QuadTreeObject_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_QuadTree_remove_arc_math_geom_QuadTree$QuadTreeObject_R_boolean])(ctx, sp[0].o, (frame[3].o));
	}
label_32:;
	{
	LINE_NUMBER(227);
	if (((jint)((mindustry_gen_Building *) NULL_CHECK((frame[3].o)))->F_wasDamaged) == 0) goto label_34;
	}
	{
	sp[0].o = (jobject)((mindustry_ai_BlockIndexer *) NULL_CHECK((frame[0].o)))->F_damagedTiles;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((mindustry_game_Team *) NULL_CHECK((frame[2].o)))->F_id))) == nullptr) goto label_34;
	}
	{
	LINE_NUMBER(228);
	sp[0].o = (jobject)((mindustry_ai_BlockIndexer *) NULL_CHECK((frame[0].o)))->F_damagedTiles;
	jint temp0 = (jint)((func_arc_struct_Seq_remove_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((mindustry_game_Team *) NULL_CHECK((frame[2].o)))->F_id))))->vtable)[VTABLE_arc_struct_Seq_remove_java_lang_Object_R_boolean])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((mindustry_game_Team *) NULL_CHECK((frame[2].o)))->F_id))), (frame[3].o));
	}
label_34:;
	{
	LINE_NUMBER(231);
	((mindustry_gen_Building *) NULL_CHECK((frame[3].o)))->F_wasDamaged = (jint(0));
	}
label_2:;
	LINE_NUMBER(233);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ai_BlockIndexer_addIndex_mindustry_world_Tile(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/BlockIndexer:addIndex", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(236);
	((func_mindustry_ai_BlockIndexer_process_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_BlockIndexer_process_mindustry_world_Tile])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(238);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ai_BlockIndexer_invoke_arc_func_Cons_12(ctx);
		auto proxy = (mindustry_ai_BlockIndexer_invoke_arc_func_Cons_12 *) gcAlloc(ctx, &class_mindustry_ai_BlockIndexer_invoke_arc_func_Cons_12);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_world_Tile_getLinkedTiles_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_getLinkedTiles_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(273);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ai_BlockIndexer_isBlockPresent_mindustry_world_Block_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/BlockIndexer:isBlockPresent", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(277);
	sp[0].o = (jobject)((mindustry_ai_BlockIndexer *) NULL_CHECK((frame[0].o)))->F_blocksPresent;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	jint temp0 = (jint)((mindustry_ctype_Content *) NULL_CHECK((frame[1].o)))->F_id;
	sp[0].o = (jobject)((mindustry_ai_BlockIndexer *) NULL_CHECK((frame[0].o)))->F_blocksPresent;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_ai_BlockIndexer *) NULL_CHECK((frame[0].o)))->F_blocksPresent;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, ((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[1].o)))->F_id))) == 0) goto label_1;
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

void M_mindustry_ai_BlockIndexer_clearFlags(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/BlockIndexer:clearFlags", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(281);
	frame[1].i = (jint(0));
	}
label_1:;
	{
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((mindustry_ai_BlockIndexer *) NULL_CHECK((frame[0].o)))->F_flagMap;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_2;
	}
	{
	LINE_NUMBER(282);
	frame[2].i = (jint(0));
	}
label_4:;
	{
	jint temp0 = frame[2].i;
	clinit_mindustry_world_meta_BlockFlag(ctx);
	sp[0].o = (jobject)SF_mindustry_world_meta_BlockFlag_all;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_5;
	}
	{
	LINE_NUMBER(283);
	sp[0].o = (jobject)((mindustry_ai_BlockIndexer *) NULL_CHECK((frame[0].o)))->F_flagMap;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i));
	jint temp0 = frame[2].i;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(282);
	INST_IINC(2, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(281);
	INST_IINC(1, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(286);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_ai_BlockIndexer_getFlagged_mindustry_game_Team_R_Array1_arc_struct_Seq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/BlockIndexer:getFlagged", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(289);
	sp[0].o = (jobject)((mindustry_ai_BlockIndexer *) NULL_CHECK((frame[0].o)))->F_flagMap;
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((mindustry_game_Team *) NULL_CHECK((frame[1].o)))->F_id)));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ai_BlockIndexer_hasOre_mindustry_type_Item_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/BlockIndexer:hasOre", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(294);
	sp[0].o = (jobject)((mindustry_ai_BlockIndexer *) NULL_CHECK((frame[0].o)))->F_allOres;
	jint temp0 = (jint)((func_arc_struct_ObjectIntMap_get_java_lang_Object_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectIntMap_get_java_lang_Object_R_int])(ctx, sp[0].o, (frame[1].o));
	if (temp0 <= 0) goto label_1;
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

jbool M_mindustry_ai_BlockIndexer_hasWallOre_mindustry_type_Item_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/BlockIndexer:hasWallOre", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(299);
	sp[0].o = (jobject)((mindustry_ai_BlockIndexer *) NULL_CHECK((frame[0].o)))->F_allWallOres;
	jint temp0 = (jint)((func_arc_struct_ObjectIntMap_get_java_lang_Object_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectIntMap_get_java_lang_Object_R_int])(ctx, sp[0].o, (frame[1].o));
	if (temp0 <= 0) goto label_1;
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

jobject M_mindustry_ai_BlockIndexer_getDamaged_mindustry_game_Team_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/BlockIndexer:getDamaged", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(304);
	sp[0].o = (jobject)((mindustry_ai_BlockIndexer *) NULL_CHECK((frame[0].o)))->F_damagedTiles;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((mindustry_game_Team *) NULL_CHECK((frame[1].o)))->F_id))) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(305);
	sp[0].o = (jobject)((mindustry_ai_BlockIndexer *) NULL_CHECK((frame[0].o)))->F_damagedTiles;
	jint temp0 = (jint)((mindustry_game_Team *) NULL_CHECK((frame[1].o)))->F_id;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq_boolean(ctx, sp[1].o, (jint(0)));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	popStackFrame(ctx);
	return sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(308);
	sp[0].o = (jobject)((mindustry_ai_BlockIndexer *) NULL_CHECK((frame[0].o)))->F_damagedTiles;
	frame[2].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((mindustry_game_Team *) NULL_CHECK((frame[1].o)))->F_id)));
	LINE_NUMBER(309);
	sp[0].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ai_BlockIndexer_invoke_arc_func_Boolf_2(ctx);
		auto proxy = (mindustry_ai_BlockIndexer_invoke_arc_func_Boolf_2 *) gcAlloc(ctx, &class_mindustry_ai_BlockIndexer_invoke_arc_func_Boolf_2);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_removeAll_arc_func_Boolf_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_removeAll_arc_func_Boolf_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(311);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ai_BlockIndexer_getFlagged_mindustry_game_Team_mindustry_world_meta_BlockFlag_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/BlockIndexer:getFlagged", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(316);
	sp[0].o = (jobject)((mindustry_ai_BlockIndexer *) NULL_CHECK((frame[0].o)))->F_flagMap;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((mindustry_game_Team *) NULL_CHECK((frame[1].o)))->F_id));
	jint temp0 = (jint)((func_mindustry_world_meta_BlockFlag_ordinal_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_meta_BlockFlag_ordinal_R_int])(ctx, (frame[2].o));
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, temp0));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ai_BlockIndexer_findClosestFlag_float_float_mindustry_game_Team_mindustry_world_meta_BlockFlag_R_mindustry_gen_Building(jcontext ctx, jobject self, jfloat param0, jfloat param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/BlockIndexer:findClosestFlag", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(321);
	jfloat temp0 = frame[1].f;
	jfloat temp1 = frame[2].f;
	sp[0].o = (jobject)((func_mindustry_ai_BlockIndexer_getFlagged_mindustry_game_Team_mindustry_world_meta_BlockFlag_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_BlockIndexer_getFlagged_mindustry_game_Team_mindustry_world_meta_BlockFlag_R_arc_struct_Seq])(ctx, (frame[0].o), (frame[3].o), (frame[4].o));
	sp[0].o = (jobject)SM_arc_math_geom_Geometry_findClosest_float_float_java_lang_Iterable_R_arc_math_geom_Position(ctx, temp0, temp1, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_gen_Building, sp[0].o));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ai_BlockIndexer_eachBlock_mindustry_gen_Teamc_float_arc_func_Boolf_arc_func_Cons_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/BlockIndexer:eachBlock", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(325);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_mindustry_gen_Teamc_team_R_mindustry_game_Team) resolveInterfaceMethod(ctx, &class_mindustry_gen_Teamc, INDEX_mindustry_gen_Teamc_team_R_mindustry_game_Team, (frame[1].o)))(ctx, (frame[1].o));
	jfloat temp0 = (jfloat)((func_mindustry_gen_Posc_getX_R_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Posc, INDEX_mindustry_gen_Posc_getX_R_float, (frame[1].o)))(ctx, (frame[1].o));
	jfloat temp1 = (jfloat)((func_mindustry_gen_Posc_getY_R_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Posc, INDEX_mindustry_gen_Posc_getY_R_float, (frame[1].o)))(ctx, (frame[1].o));
	jint temp2 = (jint)((func_mindustry_ai_BlockIndexer_eachBlock_mindustry_game_Team_float_float_float_arc_func_Boolf_arc_func_Cons_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_BlockIndexer_eachBlock_mindustry_game_Team_float_float_float_arc_func_Boolf_arc_func_Cons_R_boolean])(ctx, sp[0].o, sp[1].o, temp0, temp1, (frame[2].f), (frame[3].o), (frame[4].o));
	popStackFrame(ctx);
	return temp2;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ai_BlockIndexer_eachBlock_mindustry_game_Team_float_float_float_arc_func_Boolf_arc_func_Cons_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jobject param4, jobject param5) {
	NULL_CHECK(self);
	jtype frame[20];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/BlockIndexer:eachBlock", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].o = param4;
	frame[6].o = param5;
	{
	LINE_NUMBER(330);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(331);
	clinit_mindustry_ai_BlockIndexer(ctx);
	SF_mindustry_ai_BlockIndexer_returnBool = (jint(0));
	LINE_NUMBER(333);
	sp[0].o = frame[0].o;
	jfloat temp0 = frame[2].f;
	jfloat temp1 = frame[3].f;
	jfloat temp2 = frame[4].f;
	{ /* InvokeDynamic */
		clinit_mindustry_ai_BlockIndexer_invoke_arc_func_Cons_13(ctx);
		auto proxy = (mindustry_ai_BlockIndexer_invoke_arc_func_Cons_13 *) gcAlloc(ctx, &class_mindustry_ai_BlockIndexer_invoke_arc_func_Cons_13);
		proxy->F_field1 = (jref) (frame[6].o);
		proxy->F_field0 = (jref) (frame[5].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_ai_BlockIndexer_allBuildings_float_float_float_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_BlockIndexer_allBuildings_float_float_float_arc_func_Cons])(ctx, sp[0].o, temp0, temp1, temp2, sp[1].o);
	LINE_NUMBER(339);
	popStackFrame(ctx);
	return (clinit_mindustry_ai_BlockIndexer(ctx), (jint)SF_mindustry_ai_BlockIndexer_returnBool);
	}
label_1:;
	{
	LINE_NUMBER(341);
	sp[0].o = (jobject)((mindustry_ai_BlockIndexer *) NULL_CHECK((frame[0].o)))->F_breturnArray;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(343);
	sp[0].o = (jobject)((func_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData])(ctx, (frame[1].o));
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK(sp[0].o))->F_buildingTree;
	frame[7].o = sp[0].o;
	LINE_NUMBER(344);
	if ((frame[7].o) != nullptr) goto label_7;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_7:;
	{
	LINE_NUMBER(345);
	sp[0].o = frame[7].o;
	jfloat temp0 = (frame[2].f) - (frame[4].f);
	jfloat temp1 = (frame[3].f) - (frame[4].f);
	jfloat temp2 = (frame[4].f) * (jfloat(2));
	jfloat temp3 = (frame[4].f) * (jfloat(2));
	{ /* InvokeDynamic */
		clinit_mindustry_ai_BlockIndexer_invoke_arc_func_Cons_14(ctx);
		auto proxy = (mindustry_ai_BlockIndexer_invoke_arc_func_Cons_14 *) gcAlloc(ctx, &class_mindustry_ai_BlockIndexer_invoke_arc_func_Cons_14);
		proxy->F_field4 = (jref) (frame[5].o);
		proxy->F_field3 = (frame[4].f);
		proxy->F_field2 = (frame[3].f);
		proxy->F_field1 = (frame[2].f);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_math_geom_QuadTree_intersect_float_float_float_float_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_QuadTree_intersect_float_float_float_float_arc_func_Cons])(ctx, sp[0].o, temp0, temp1, temp2, temp3, sp[1].o);
	LINE_NUMBER(352);
	sp[0].o = (jobject)((mindustry_ai_BlockIndexer *) NULL_CHECK((frame[0].o)))->F_breturnArray;
	frame[7].i = ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size);
	LINE_NUMBER(353);
	sp[0].o = (jobject)((mindustry_ai_BlockIndexer *) NULL_CHECK((frame[0].o)))->F_breturnArray;
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_items;
	frame[8].o = (checkCast(ctx, getArrayClass(&class_mindustry_gen_Building, 1), sp[0].o));
	LINE_NUMBER(354);
	frame[9].i = (jint(0));
	}
label_11:;
	{
	if ((frame[9].i) >= (frame[7].i)) goto label_12;
	}
	{
	LINE_NUMBER(355);
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o), ((jobject)ARRAY_ACCESS(jobject, (frame[8].o), (frame[9].i))));
	LINE_NUMBER(356);
	ARRAY_ACCESS(jobject, (frame[8].o), (frame[9].i)) = (jobject(nullptr));
	LINE_NUMBER(354);
	INST_IINC(9, 1);
	goto label_11;
	}
label_12:;
	{
	LINE_NUMBER(358);
	sp[0].o = (jobject)((mindustry_ai_BlockIndexer *) NULL_CHECK((frame[0].o)))->F_breturnArray;
	((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size = (jint(0));
	LINE_NUMBER(360);
	if ((frame[7].i) <= 0) goto label_17;
	}
	INST_ICONST(1);
	goto label_18;
label_17:;
	INST_ICONST(0);
label_18:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_ai_BlockIndexer_eachBlock_mindustry_game_Team_arc_math_geom_Rect_arc_func_Boolf_arc_func_Cons_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/BlockIndexer:eachBlock", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(365);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(367);
	sp[0].o = (jobject)((mindustry_ai_BlockIndexer *) NULL_CHECK((frame[0].o)))->F_breturnArray;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(369);
	sp[0].o = (jobject)((func_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData])(ctx, (frame[1].o));
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK(sp[0].o))->F_buildingTree;
	frame[5].o = sp[0].o;
	LINE_NUMBER(370);
	if ((frame[5].o) != nullptr) goto label_4;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
	{
	LINE_NUMBER(371);
	sp[0].o = frame[5].o;
	sp[1].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ai_BlockIndexer_invoke_arc_func_Cons_15(ctx);
		auto proxy = (mindustry_ai_BlockIndexer_invoke_arc_func_Cons_15 *) gcAlloc(ctx, &class_mindustry_ai_BlockIndexer_invoke_arc_func_Cons_15);
		proxy->F_field1 = (jref) (frame[3].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	((func_arc_math_geom_QuadTree_intersect_arc_math_geom_Rect_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_QuadTree_intersect_arc_math_geom_Rect_arc_func_Cons])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(377);
	sp[0].o = (jobject)((mindustry_ai_BlockIndexer *) NULL_CHECK((frame[0].o)))->F_breturnArray;
	frame[6].i = ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size);
	LINE_NUMBER(378);
	sp[0].o = (jobject)((mindustry_ai_BlockIndexer *) NULL_CHECK((frame[0].o)))->F_breturnArray;
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_items;
	frame[7].o = (checkCast(ctx, getArrayClass(&class_mindustry_gen_Building, 1), sp[0].o));
	LINE_NUMBER(379);
	frame[8].i = (jint(0));
	}
label_8:;
	{
	if ((frame[8].i) >= (frame[6].i)) goto label_9;
	}
	{
	LINE_NUMBER(380);
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o), ((jobject)ARRAY_ACCESS(jobject, (frame[7].o), (frame[8].i))));
	LINE_NUMBER(381);
	ARRAY_ACCESS(jobject, (frame[7].o), (frame[8].i)) = (jobject(nullptr));
	LINE_NUMBER(379);
	INST_IINC(8, 1);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(383);
	sp[0].o = (jobject)((mindustry_ai_BlockIndexer *) NULL_CHECK((frame[0].o)))->F_breturnArray;
	((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size = (jint(0));
	LINE_NUMBER(385);
	if ((frame[6].i) <= 0) goto label_14;
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

jobject M_mindustry_ai_BlockIndexer_getEnemy_mindustry_game_Team_mindustry_world_meta_BlockFlag_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/BlockIndexer:getEnemy", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(390);
	sp[0].o = (jobject)((mindustry_ai_BlockIndexer *) NULL_CHECK((frame[0].o)))->F_breturnArray;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(391);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_teams;
	sp[0].o = (jobject)((mindustry_game_Teams *) NULL_CHECK(sp[0].o))->F_present;
	frame[3].o = sp[0].o;
	LINE_NUMBER(393);
	jint temp0 = (jint)((func_arc_struct_Seq_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_Seq_isEmpty_R_boolean])(ctx, (frame[3].o));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(394);
	clinit_mindustry_game_Team(ctx);
	sp[0].o = (jobject)SF_mindustry_game_Team_all;
	frame[4].o = sp[0].o;
	frame[5].i = (((jarray) nullCheck(ctx, (frame[4].o)))->length);
	frame[6].i = (jint(0));
	}
label_5:;
	{
	if ((frame[6].i) >= (frame[5].i)) goto label_6;
	}
	{
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[6].i)));
	LINE_NUMBER(395);
	if ((frame[7].o) == (frame[1].o)) goto label_8;
	}
	{
	sp[0].o = frame[7].o;
	clinit_mindustry_game_Team(ctx);
	sp[1].o = (jobject)SF_mindustry_game_Team_derelict;
	if (sp[0].o != sp[1].o) goto label_9;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_coreCapture) != 0) goto label_9;
	}
	goto label_8;
label_9:;
	{
	LINE_NUMBER(396);
	sp[0].o = (jobject)((func_mindustry_ai_BlockIndexer_getFlagged_mindustry_game_Team_R_Array1_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_BlockIndexer_getFlagged_mindustry_game_Team_R_Array1_arc_struct_Seq])(ctx, (frame[0].o), (frame[7].o));
	jint temp0 = (jint)((func_mindustry_world_meta_BlockFlag_ordinal_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_meta_BlockFlag_ordinal_R_int])(ctx, (frame[2].o));
	frame[8].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, temp0));
	LINE_NUMBER(397);
	if ((frame[8].o) == nullptr) goto label_8;
	}
	{
	LINE_NUMBER(398);
	sp[0].o = (jobject)((mindustry_ai_BlockIndexer *) NULL_CHECK((frame[0].o)))->F_breturnArray;
	sp[0].o = (jobject)((func_arc_struct_Seq_addAll_arc_struct_Seq_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_addAll_arc_struct_Seq_R_arc_struct_Seq])(ctx, sp[0].o, (frame[8].o));
	}
label_8:;
	{
	LINE_NUMBER(394);
	INST_IINC(6, 1);
	goto label_5;
	}
label_6:;
	goto label_12;
label_3:;
	{
	LINE_NUMBER(402);
	frame[4].i = (jint(0));
	}
label_13:;
	{
	if ((frame[4].i) >= ((jint)((arc_struct_Seq *) NULL_CHECK((frame[3].o)))->F_size)) goto label_12;
	}
	{
	LINE_NUMBER(403);
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK((frame[3].o)))->F_items;
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (checkCast(ctx, getArrayClass(&class_mindustry_game_Teams$TeamData, 1), sp[0].o)), (frame[4].i)))))->F_team;
	frame[5].o = sp[0].o;
	LINE_NUMBER(404);
	if ((frame[5].o) == (frame[1].o)) goto label_16;
	}
	{
	sp[0].o = frame[5].o;
	clinit_mindustry_game_Team(ctx);
	sp[1].o = (jobject)SF_mindustry_game_Team_derelict;
	if (sp[0].o != sp[1].o) goto label_17;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_coreCapture) != 0) goto label_17;
	}
	goto label_16;
label_17:;
	{
	LINE_NUMBER(405);
	sp[0].o = (jobject)((func_mindustry_ai_BlockIndexer_getFlagged_mindustry_game_Team_R_Array1_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_BlockIndexer_getFlagged_mindustry_game_Team_R_Array1_arc_struct_Seq])(ctx, (frame[0].o), (frame[5].o));
	jint temp0 = (jint)((func_mindustry_world_meta_BlockFlag_ordinal_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_meta_BlockFlag_ordinal_R_int])(ctx, (frame[2].o));
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, temp0));
	LINE_NUMBER(406);
	if ((frame[6].o) == nullptr) goto label_16;
	}
	{
	LINE_NUMBER(407);
	sp[0].o = (jobject)((mindustry_ai_BlockIndexer *) NULL_CHECK((frame[0].o)))->F_breturnArray;
	sp[0].o = (jobject)((func_arc_struct_Seq_addAll_arc_struct_Seq_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_addAll_arc_struct_Seq_R_arc_struct_Seq])(ctx, sp[0].o, (frame[6].o));
	}
label_16:;
	{
	LINE_NUMBER(402);
	INST_IINC(4, 1);
	goto label_13;
	}
label_12:;
	{
	LINE_NUMBER(412);
	sp[0].o = (jobject)((mindustry_ai_BlockIndexer *) NULL_CHECK((frame[0].o)))->F_breturnArray;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_ai_BlockIndexer_notifyHealthChanged_mindustry_gen_Building(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/BlockIndexer:notifyHealthChanged", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(416);
	jint temp0 = (jint)((func_mindustry_gen_Building_damaged_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_damaged_R_boolean])(ctx, (frame[1].o));
	frame[2].i = temp0;
	LINE_NUMBER(418);
	if (((jint)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_wasDamaged) == (frame[2].i)) goto label_2;
	}
	{
	LINE_NUMBER(419);
	sp[0].o = (jobject)((mindustry_ai_BlockIndexer *) NULL_CHECK((frame[0].o)))->F_damagedTiles;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_team;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((mindustry_game_Team *) NULL_CHECK(sp[1].o))->F_id))) != nullptr) goto label_4;
	}
	{
	LINE_NUMBER(420);
	sp[0].o = (jobject)((mindustry_ai_BlockIndexer *) NULL_CHECK((frame[0].o)))->F_damagedTiles;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_team;
	jint temp0 = (jint)((mindustry_game_Team *) NULL_CHECK(sp[1].o))->F_id;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq_boolean(ctx, sp[1].o, (jint(0)));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	}
label_4:;
	{
	LINE_NUMBER(423);
	if ((frame[2].i) == 0) goto label_6;
	}
	{
	LINE_NUMBER(425);
	sp[0].o = (jobject)((mindustry_ai_BlockIndexer *) NULL_CHECK((frame[0].o)))->F_damagedTiles;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_team;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((mindustry_game_Team *) NULL_CHECK(sp[1].o))->F_id))))->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((mindustry_game_Team *) NULL_CHECK(sp[1].o))->F_id))), (frame[1].o));
	goto label_8;
	}
label_6:;
	{
	LINE_NUMBER(428);
	sp[0].o = (jobject)((mindustry_ai_BlockIndexer *) NULL_CHECK((frame[0].o)))->F_damagedTiles;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_team;
	jint temp0 = (jint)((func_arc_struct_Seq_remove_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((mindustry_game_Team *) NULL_CHECK(sp[1].o))->F_id))))->vtable)[VTABLE_arc_struct_Seq_remove_java_lang_Object_R_boolean])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((mindustry_game_Team *) NULL_CHECK(sp[1].o))->F_id))), (frame[1].o));
	}
label_8:;
	{
	LINE_NUMBER(431);
	((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_wasDamaged = (frame[2].i);
	}
label_2:;
	LINE_NUMBER(433);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ai_BlockIndexer_allBuildings_float_float_float_arc_func_Cons(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/BlockIndexer:allBuildings", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(436);
	sp[0].o = (jobject)((mindustry_ai_BlockIndexer *) NULL_CHECK((frame[0].o)))->F_breturnArray;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(437);
	frame[5].i = (jint(0));
	}
label_2:;
	{
	jint temp0 = frame[5].i;
	sp[0].o = (jobject)((mindustry_ai_BlockIndexer *) NULL_CHECK((frame[0].o)))->F_activeTeams;
	if (temp0 >= ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_3;
	}
	{
	LINE_NUMBER(438);
	sp[0].o = (jobject)((mindustry_ai_BlockIndexer *) NULL_CHECK((frame[0].o)))->F_activeTeams;
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_items;
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (checkCast(ctx, getArrayClass(&class_mindustry_game_Team, 1), sp[0].o)), (frame[5].i)));
	LINE_NUMBER(439);
	sp[0].o = (jobject)((func_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData])(ctx, (frame[6].o));
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK(sp[0].o))->F_buildingTree;
	frame[7].o = sp[0].o;
	LINE_NUMBER(440);
	if ((frame[7].o) != nullptr) goto label_7;
	}
	goto label_8;
label_7:;
	{
	LINE_NUMBER(441);
	sp[0].o = frame[7].o;
	jfloat temp0 = (frame[1].f) - (frame[3].f);
	jfloat temp1 = (frame[2].f) - (frame[3].f);
	jfloat temp2 = (frame[3].f) * (jfloat(2));
	jfloat temp3 = (frame[3].f) * (jfloat(2));
	sp[1].o = (jobject)((mindustry_ai_BlockIndexer *) NULL_CHECK((frame[0].o)))->F_breturnArray;
	((func_arc_math_geom_QuadTree_intersect_float_float_float_float_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_QuadTree_intersect_float_float_float_float_arc_struct_Seq])(ctx, sp[0].o, temp0, temp1, temp2, temp3, sp[1].o);
	}
label_8:;
	{
	LINE_NUMBER(437);
	INST_IINC(5, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(444);
	sp[0].o = (jobject)((mindustry_ai_BlockIndexer *) NULL_CHECK((frame[0].o)))->F_breturnArray;
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_items;
	frame[5].o = (checkCast(ctx, getArrayClass(&class_mindustry_gen_Building, 1), sp[0].o));
	LINE_NUMBER(445);
	sp[0].o = (jobject)((mindustry_ai_BlockIndexer *) NULL_CHECK((frame[0].o)))->F_breturnArray;
	frame[6].i = ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size);
	LINE_NUMBER(446);
	frame[7].i = (jint(0));
	}
label_11:;
	{
	if ((frame[7].i) >= (frame[6].i)) goto label_12;
	}
	{
	LINE_NUMBER(447);
	frame[8].o = ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[7].i)));
	LINE_NUMBER(448);
	if ((frame[8].o) == nullptr) goto label_15;
	}
	{
	sp[0].o = frame[8].o;
	jfloat temp0 = frame[1].f;
	jfloat temp1 = frame[2].f;
	jfloat temp2 = frame[3].f;
	jfloat temp3 = (jfloat)((func_mindustry_gen_Building_hitSize_R_float) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_mindustry_gen_Building_hitSize_R_float])(ctx, (frame[8].o));
	jint temp4 = (jint)((func_mindustry_gen_Building_within_float_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_within_float_float_float_R_boolean])(ctx, sp[0].o, temp0, temp1, (temp2 + (temp3 / (jfloat(2)))));
	if (temp4 == 0) goto label_15;
	}
	{
	LINE_NUMBER(449);
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o), (frame[8].o));
	}
label_15:;
	{
	LINE_NUMBER(451);
	ARRAY_ACCESS(jobject, (frame[5].o), (frame[7].i)) = (jobject(nullptr));
	LINE_NUMBER(446);
	INST_IINC(7, 1);
	goto label_11;
	}
label_12:;
	{
	LINE_NUMBER(453);
	sp[0].o = (jobject)((mindustry_ai_BlockIndexer *) NULL_CHECK((frame[0].o)))->F_breturnArray;
	((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size = (jint(0));
	LINE_NUMBER(454);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ai_BlockIndexer_findEnemyTile_mindustry_game_Team_float_float_float_mindustry_entities_Units$BuildingPriorityf_arc_func_Boolf_R_mindustry_gen_Building(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jobject param4, jobject param5) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/BlockIndexer:findEnemyTile", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].o = param4;
	frame[6].o = param5;
	{
	LINE_NUMBER(457);
	sp[0].o = (jobject)((func_mindustry_ai_BlockIndexer_findEnemyTile_mindustry_game_Team_float_float_float_mindustry_entities_Units$BuildingPriorityf_arc_func_Boolf_mindustry_game_Team_R_mindustry_gen_Building) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_BlockIndexer_findEnemyTile_mindustry_game_Team_float_float_float_mindustry_entities_Units$BuildingPriorityf_arc_func_Boolf_mindustry_game_Team_R_mindustry_gen_Building])(ctx, (frame[0].o), (frame[1].o), (frame[2].f), (frame[3].f), (frame[4].f), (frame[5].o), (frame[6].o), (jobject(nullptr)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ai_BlockIndexer_findEnemyTile_mindustry_game_Team_float_float_float_mindustry_entities_Units$BuildingPriorityf_arc_func_Boolf_mindustry_game_Team_R_mindustry_gen_Building(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jobject param4, jobject param5, jobject param6) {
	NULL_CHECK(self);
	jtype frame[22];
	auto stack = &frame[14];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/BlockIndexer:findEnemyTile", 22 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].o = param4;
	frame[6].o = param5;
	frame[7].o = param6;
	{
	LINE_NUMBER(461);
	frame[8].o = (jobject(nullptr));
	LINE_NUMBER(462);
	frame[9].f = (jfloat(0));
	LINE_NUMBER(464);
	frame[10].i = (jint(0));
	}
label_3:;
	{
	jint temp0 = frame[10].i;
	sp[0].o = (jobject)((mindustry_ai_BlockIndexer *) NULL_CHECK((frame[0].o)))->F_activeTeams;
	if (temp0 >= ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_4;
	}
	{
	LINE_NUMBER(465);
	sp[0].o = (jobject)((mindustry_ai_BlockIndexer *) NULL_CHECK((frame[0].o)))->F_activeTeams;
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_items;
	frame[11].o = ((jobject)ARRAY_ACCESS(jobject, (checkCast(ctx, getArrayClass(&class_mindustry_game_Team, 1), sp[0].o)), (frame[10].i)));
	LINE_NUMBER(466);
	if ((frame[11].o) == (frame[1].o)) goto label_7;
	}
	{
	sp[0].o = frame[11].o;
	clinit_mindustry_game_Team(ctx);
	sp[1].o = (jobject)SF_mindustry_game_Team_derelict;
	if (sp[0].o != sp[1].o) goto label_8;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_coreCapture) != 0) goto label_8;
	}
	goto label_7;
label_8:;
	{
	LINE_NUMBER(468);
	sp[0].o = frame[0].o;
	sp[1].o = frame[11].o;
	jfloat temp0 = frame[2].f;
	jfloat temp1 = frame[3].f;
	jfloat temp2 = frame[4].f;
	{ /* InvokeDynamic */
		clinit_mindustry_ai_BlockIndexer_invoke_arc_func_Boolf_3(ctx);
		auto proxy = (mindustry_ai_BlockIndexer_invoke_arc_func_Boolf_3 *) gcAlloc(ctx, &class_mindustry_ai_BlockIndexer_invoke_arc_func_Boolf_3);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[6].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_ai_BlockIndexer_findTile_mindustry_game_Team_float_float_float_arc_func_Boolf_boolean_mindustry_game_Team_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_BlockIndexer_findTile_mindustry_game_Team_float_float_float_arc_func_Boolf_boolean_mindustry_game_Team_R_mindustry_gen_Building])(ctx, sp[0].o, sp[1].o, temp0, temp1, temp2, sp[2].o, (jint(1)), (frame[7].o));
	frame[12].o = sp[0].o;
	LINE_NUMBER(469);
	if ((frame[12].o) != nullptr) goto label_10;
	}
	goto label_7;
label_10:;
	{
	LINE_NUMBER(472);
	jfloat temp0 = (jfloat)((func_mindustry_gen_Building_dst_float_float_R_float) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_mindustry_gen_Building_dst_float_float_R_float])(ctx, (frame[12].o), (frame[2].f), (frame[3].f));
	jfloat temp1 = (jfloat)((func_mindustry_gen_Building_hitSize_R_float) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_mindustry_gen_Building_hitSize_R_float])(ctx, (frame[12].o));
	frame[13].f = (temp0 - (temp1 / (jfloat(2))));
	LINE_NUMBER(473);
	if ((frame[8].o) == nullptr) goto label_12;
	}
	{
	if ((floatCompare((frame[13].f), (frame[9].f), 1)) >= 0) goto label_13;
	}
	{
	sp[0].o = frame[5].o;
	sp[1].o = frame[12].o;
	LINE_NUMBER(475);
	jfloat temp0 = (jfloat)((func_mindustry_entities_Units$BuildingPriorityf_priority_mindustry_gen_Building_R_float) resolveInterfaceMethod(ctx, &class_mindustry_entities_Units$BuildingPriorityf, INDEX_mindustry_entities_Units$BuildingPriorityf_priority_mindustry_gen_Building_R_float, sp[0].o))(ctx, sp[0].o, sp[1].o);
	jfloat temp1 = (jfloat)((func_mindustry_entities_Units$BuildingPriorityf_priority_mindustry_gen_Building_R_float) resolveInterfaceMethod(ctx, &class_mindustry_entities_Units$BuildingPriorityf, INDEX_mindustry_entities_Units$BuildingPriorityf_priority_mindustry_gen_Building_R_float, (frame[5].o)))(ctx, (frame[5].o), (frame[8].o));
	if ((floatCompare(temp0, temp1, -1)) >= 0) goto label_12;
	}
label_13:;
	{
	sp[0].o = frame[5].o;
	sp[1].o = frame[12].o;
	LINE_NUMBER(477);
	jfloat temp0 = (jfloat)((func_mindustry_entities_Units$BuildingPriorityf_priority_mindustry_gen_Building_R_float) resolveInterfaceMethod(ctx, &class_mindustry_entities_Units$BuildingPriorityf, INDEX_mindustry_entities_Units$BuildingPriorityf_priority_mindustry_gen_Building_R_float, sp[0].o))(ctx, sp[0].o, sp[1].o);
	jfloat temp1 = (jfloat)((func_mindustry_entities_Units$BuildingPriorityf_priority_mindustry_gen_Building_R_float) resolveInterfaceMethod(ctx, &class_mindustry_entities_Units$BuildingPriorityf, INDEX_mindustry_entities_Units$BuildingPriorityf_priority_mindustry_gen_Building_R_float, (frame[5].o)))(ctx, (frame[5].o), (frame[8].o));
	if ((floatCompare(temp0, temp1, -1)) <= 0) goto label_7;
	}
label_12:;
	{
	LINE_NUMBER(478);
	frame[8].o = (frame[12].o);
	LINE_NUMBER(479);
	frame[9].f = (frame[13].f);
	}
label_7:;
	{
	LINE_NUMBER(464);
	INST_IINC(10, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(483);
	popStackFrame(ctx);
	return (frame[8].o);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ai_BlockIndexer_findEnemyTile_mindustry_game_Team_float_float_float_arc_func_Boolf_R_mindustry_gen_Building(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/BlockIndexer:findEnemyTile", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(487);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jfloat temp0 = frame[2].f;
	jfloat temp1 = frame[3].f;
	jfloat temp2 = frame[4].f;
	clinit_mindustry_entities_UnitSorts(ctx);
	sp[2].o = (jobject)SF_mindustry_entities_UnitSorts_buildingDefault;
	sp[0].o = (jobject)((func_mindustry_ai_BlockIndexer_findEnemyTile_mindustry_game_Team_float_float_float_mindustry_entities_Units$BuildingPriorityf_arc_func_Boolf_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_BlockIndexer_findEnemyTile_mindustry_game_Team_float_float_float_mindustry_entities_Units$BuildingPriorityf_arc_func_Boolf_R_mindustry_gen_Building])(ctx, sp[0].o, sp[1].o, temp0, temp1, temp2, sp[2].o, (frame[5].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ai_BlockIndexer_findTile_mindustry_game_Team_float_float_float_arc_func_Boolf_R_mindustry_gen_Building(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/BlockIndexer:findTile", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(491);
	sp[0].o = (jobject)((func_mindustry_ai_BlockIndexer_findTile_mindustry_game_Team_float_float_float_arc_func_Boolf_boolean_R_mindustry_gen_Building) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_BlockIndexer_findTile_mindustry_game_Team_float_float_float_arc_func_Boolf_boolean_R_mindustry_gen_Building])(ctx, (frame[0].o), (frame[1].o), (frame[2].f), (frame[3].f), (frame[4].f), (frame[5].o), (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ai_BlockIndexer_findTile_mindustry_game_Team_float_float_float_arc_func_Boolf_boolean_R_mindustry_gen_Building(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jobject param4, jbool param5) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/BlockIndexer:findTile", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].o = param4;
	frame[6].i = param5;
	{
	LINE_NUMBER(495);
	sp[0].o = (jobject)((func_mindustry_ai_BlockIndexer_findTile_mindustry_game_Team_float_float_float_arc_func_Boolf_boolean_mindustry_game_Team_R_mindustry_gen_Building) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_BlockIndexer_findTile_mindustry_game_Team_float_float_float_arc_func_Boolf_boolean_mindustry_game_Team_R_mindustry_gen_Building])(ctx, (frame[0].o), (frame[1].o), (frame[2].f), (frame[3].f), (frame[4].f), (frame[5].o), (frame[6].i), (jobject(nullptr)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ai_BlockIndexer_findTile_mindustry_game_Team_float_float_float_arc_func_Boolf_boolean_mindustry_game_Team_R_mindustry_gen_Building(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jobject param4, jbool param5, jobject param6) {
	NULL_CHECK(self);
	jtype frame[20];
	auto stack = &frame[14];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/BlockIndexer:findTile", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].o = param4;
	frame[6].i = param5;
	frame[7].o = param6;
	{
	LINE_NUMBER(499);
	frame[8].o = (jobject(nullptr));
	LINE_NUMBER(500);
	frame[9].f = (jfloat(0));
	LINE_NUMBER(501);
	sp[0].o = (jobject)((func_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData])(ctx, (frame[1].o));
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK(sp[0].o))->F_buildingTree;
	frame[10].o = sp[0].o;
	LINE_NUMBER(502);
	if ((frame[10].o) != nullptr) goto label_4;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_4:;
	{
	LINE_NUMBER(504);
	sp[0].o = (jobject)((mindustry_ai_BlockIndexer *) NULL_CHECK((frame[0].o)))->F_breturnArray;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(505);
	sp[0].o = frame[10].o;
	clinit_mindustry_ai_BlockIndexer(ctx);
	sp[1].o = (jobject)SF_mindustry_ai_BlockIndexer_rect;
	sp[1].o = (jobject)((func_arc_math_geom_Rect_setCentered_float_float_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Rect_setCentered_float_float_float_R_arc_math_geom_Rect])(ctx, sp[1].o, (frame[2].f), (frame[3].f), ((frame[4].f) * (jfloat(2))));
	sp[2].o = (jobject)((mindustry_ai_BlockIndexer *) NULL_CHECK((frame[0].o)))->F_breturnArray;
	((func_arc_math_geom_QuadTree_intersect_arc_math_geom_Rect_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_QuadTree_intersect_arc_math_geom_Rect_arc_struct_Seq])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(507);
	frame[11].i = (jint(0));
	}
label_7:;
	{
	jint temp0 = frame[11].i;
	sp[0].o = (jobject)((mindustry_ai_BlockIndexer *) NULL_CHECK((frame[0].o)))->F_breturnArray;
	if (temp0 >= ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_8;
	}
	{
	LINE_NUMBER(508);
	sp[0].o = (jobject)((mindustry_ai_BlockIndexer *) NULL_CHECK((frame[0].o)))->F_breturnArray;
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_items;
	frame[12].o = ((jobject)ARRAY_ACCESS(jobject, (checkCast(ctx, getArrayClass(&class_mindustry_gen_Building, 1), sp[0].o)), (frame[11].i)));
	LINE_NUMBER(510);
	jint temp0 = (jint)((func_arc_func_Boolf_get_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolf, INDEX_arc_func_Boolf_get_java_lang_Object_R_boolean, (frame[5].o)))(ctx, (frame[5].o), (frame[12].o));
	if (temp0 == 0) goto label_11;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[12].o)))->F_team;
	if (sp[0].o == (frame[7].o)) goto label_12;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[12].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_targetable) != 0) goto label_12;
	}
	goto label_11;
label_12:;
	{
	LINE_NUMBER(512);
	jfloat temp0 = (jfloat)((func_mindustry_gen_Building_dst_float_float_R_float) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_mindustry_gen_Building_dst_float_float_R_float])(ctx, (frame[12].o), (frame[2].f), (frame[3].f));
	jfloat temp1 = (jfloat)((func_mindustry_gen_Building_hitSize_R_float) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_mindustry_gen_Building_hitSize_R_float])(ctx, (frame[12].o));
	frame[13].f = (temp0 - (temp1 / (jfloat(2))));
	LINE_NUMBER(513);
	if ((floatCompare((frame[13].f), (frame[4].f), 1)) >= 0) goto label_11;
	}
	INST_ALOAD(8);
	if ((--sp)->o == nullptr) goto label_14;
	{
	if ((floatCompare((frame[13].f), (frame[9].f), 1)) >= 0) goto label_15;
	}
	INST_ILOAD(6);
	if ((--sp)->i == 0) goto label_14;
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[8].o)))->F_block;
	jfloat temp0 = (jfloat)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_priority;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[12].o)))->F_block;
	if ((floatCompare(temp0, ((jfloat)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_priority), 1)) <= 0) goto label_14;
	}
label_15:;
	INST_ILOAD(6);
	if ((--sp)->i == 0) goto label_11;
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[8].o)))->F_block;
	jfloat temp0 = (jfloat)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_priority;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[12].o)))->F_block;
	if ((floatCompare(temp0, ((jfloat)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_priority), 1)) >= 0) goto label_11;
	}
label_14:;
	{
	LINE_NUMBER(518);
	frame[9].f = (frame[13].f);
	LINE_NUMBER(519);
	frame[8].o = (frame[12].o);
	}
label_11:;
	{
	LINE_NUMBER(507);
	INST_IINC(11, 1);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(523);
	popStackFrame(ctx);
	return (frame[8].o);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ai_BlockIndexer_findClosestOre_float_float_mindustry_type_Item_R_mindustry_world_Tile(jcontext ctx, jobject self, jfloat param0, jfloat param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/BlockIndexer:findClosestOre", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(528);
	jint temp0 = (jint)((mindustry_ctype_Content *) NULL_CHECK((frame[3].o)))->F_id;
	sp[0].o = (jobject)((mindustry_ai_BlockIndexer *) NULL_CHECK((frame[0].o)))->F_ores;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_ai_BlockIndexer *) NULL_CHECK((frame[0].o)))->F_ores;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[3].o)))->F_id))) == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(529);
	frame[4].f = (jfloat(0));
	LINE_NUMBER(530);
	frame[5].o = (jobject(nullptr));
	LINE_NUMBER(531);
	frame[6].i = (jint(0));
	}
label_5:;
	{
	if ((frame[6].i) >= ((jint)((mindustry_ai_BlockIndexer *) NULL_CHECK((frame[0].o)))->F_quadWidth)) goto label_6;
	}
	{
	LINE_NUMBER(532);
	frame[7].i = (jint(0));
	}
label_8:;
	{
	if ((frame[7].i) >= ((jint)((mindustry_ai_BlockIndexer *) NULL_CHECK((frame[0].o)))->F_quadHeight)) goto label_9;
	}
	{
	LINE_NUMBER(533);
	sp[0].o = (jobject)((mindustry_ai_BlockIndexer *) NULL_CHECK((frame[0].o)))->F_ores;
	frame[8].o = ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[3].o)))->F_id))), (frame[6].i))), (frame[7].i)));
	LINE_NUMBER(534);
	if ((frame[8].o) == nullptr) goto label_12;
	}
	{
	if (((jint)((arc_struct_IntSeq *) NULL_CHECK((frame[8].o)))->F_size) <= 0) goto label_12;
	}
	{
	LINE_NUMBER(535);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp0 = (jint)((func_arc_struct_IntSeq_first_R_int) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_arc_struct_IntSeq_first_R_int])(ctx, (frame[8].o));
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tile_int_R_mindustry_world_Tile])(ctx, sp[0].o, temp0);
	frame[9].o = sp[0].o;
	LINE_NUMBER(536);
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[9].o));
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	if (sp[0].o != sp[1].o) goto label_12;
	}
	{
	LINE_NUMBER(537);
	jfloat temp0 = frame[1].f;
	jfloat temp1 = frame[2].f;
	jfloat temp2 = (jfloat)((func_mindustry_world_Tile_worldx_R_float) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_mindustry_world_Tile_worldx_R_float])(ctx, (frame[9].o));
	jfloat temp3 = (jfloat)((func_mindustry_world_Tile_worldy_R_float) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_mindustry_world_Tile_worldy_R_float])(ctx, (frame[9].o));
	jfloat temp4 = (jfloat)SM_arc_math_Mathf_dst2_float_float_float_float_R_float(ctx, temp0, temp1, temp2, temp3);
	frame[10].f = temp4;
	LINE_NUMBER(538);
	if ((frame[5].o) == nullptr) goto label_17;
	}
	{
	if ((floatCompare((frame[10].f), (frame[4].f), 1)) >= 0) goto label_12;
	}
label_17:;
	{
	LINE_NUMBER(539);
	frame[5].o = (frame[9].o);
	LINE_NUMBER(540);
	frame[4].f = (frame[10].f);
	}
label_12:;
	{
	LINE_NUMBER(532);
	INST_IINC(7, 1);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(531);
	INST_IINC(6, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(546);
	popStackFrame(ctx);
	return (frame[5].o);
	}
label_1:;
	{
	LINE_NUMBER(549);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ai_BlockIndexer_findClosestWallOre_float_float_mindustry_type_Item_R_mindustry_world_Tile(jcontext ctx, jobject self, jfloat param0, jfloat param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/BlockIndexer:findClosestWallOre", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(555);
	jint temp0 = (jint)((mindustry_ctype_Content *) NULL_CHECK((frame[3].o)))->F_id;
	sp[0].o = (jobject)((mindustry_ai_BlockIndexer *) NULL_CHECK((frame[0].o)))->F_wallOres;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_ai_BlockIndexer *) NULL_CHECK((frame[0].o)))->F_wallOres;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[3].o)))->F_id))) == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(556);
	frame[4].f = (jfloat(0));
	LINE_NUMBER(557);
	frame[5].o = (jobject(nullptr));
	LINE_NUMBER(558);
	frame[6].i = (jint(0));
	}
label_5:;
	{
	if ((frame[6].i) >= ((jint)((mindustry_ai_BlockIndexer *) NULL_CHECK((frame[0].o)))->F_quadWidth)) goto label_6;
	}
	{
	LINE_NUMBER(559);
	frame[7].i = (jint(0));
	}
label_8:;
	{
	if ((frame[7].i) >= ((jint)((mindustry_ai_BlockIndexer *) NULL_CHECK((frame[0].o)))->F_quadHeight)) goto label_9;
	}
	{
	LINE_NUMBER(560);
	sp[0].o = (jobject)((mindustry_ai_BlockIndexer *) NULL_CHECK((frame[0].o)))->F_wallOres;
	frame[8].o = ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[3].o)))->F_id))), (frame[6].i))), (frame[7].i)));
	LINE_NUMBER(561);
	if ((frame[8].o) == nullptr) goto label_12;
	}
	{
	if (((jint)((arc_struct_IntSeq *) NULL_CHECK((frame[8].o)))->F_size) <= 0) goto label_12;
	}
	{
	LINE_NUMBER(562);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp0 = (jint)((func_arc_struct_IntSeq_first_R_int) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_arc_struct_IntSeq_first_R_int])(ctx, (frame[8].o));
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tile_int_R_mindustry_world_Tile])(ctx, sp[0].o, temp0);
	frame[9].o = sp[0].o;
	LINE_NUMBER(563);
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[9].o));
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	if (sp[0].o == sp[1].o) goto label_12;
	}
	{
	LINE_NUMBER(564);
	jfloat temp0 = frame[1].f;
	jfloat temp1 = frame[2].f;
	jfloat temp2 = (jfloat)((func_mindustry_world_Tile_worldx_R_float) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_mindustry_world_Tile_worldx_R_float])(ctx, (frame[9].o));
	jfloat temp3 = (jfloat)((func_mindustry_world_Tile_worldy_R_float) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_mindustry_world_Tile_worldy_R_float])(ctx, (frame[9].o));
	jfloat temp4 = (jfloat)SM_arc_math_Mathf_dst2_float_float_float_float_R_float(ctx, temp0, temp1, temp2, temp3);
	frame[10].f = temp4;
	LINE_NUMBER(565);
	if ((frame[5].o) == nullptr) goto label_17;
	}
	{
	if ((floatCompare((frame[10].f), (frame[4].f), 1)) >= 0) goto label_12;
	}
label_17:;
	{
	LINE_NUMBER(566);
	frame[5].o = (frame[9].o);
	LINE_NUMBER(567);
	frame[4].f = (frame[10].f);
	}
label_12:;
	{
	LINE_NUMBER(559);
	INST_IINC(7, 1);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(558);
	INST_IINC(6, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(573);
	popStackFrame(ctx);
	return (frame[5].o);
	}
label_1:;
	{
	LINE_NUMBER(576);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ai_BlockIndexer_findClosestOre_mindustry_gen_Unit_mindustry_type_Item_R_mindustry_world_Tile(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/BlockIndexer:findClosestOre", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(581);
	sp[0].o = (jobject)((func_mindustry_ai_BlockIndexer_findClosestOre_float_float_mindustry_type_Item_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_BlockIndexer_findClosestOre_float_float_mindustry_type_Item_R_mindustry_world_Tile])(ctx, (frame[0].o), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_y), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ai_BlockIndexer_findClosestWallOre_mindustry_gen_Unit_mindustry_type_Item_R_mindustry_world_Tile(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/BlockIndexer:findClosestWallOre", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(586);
	sp[0].o = (jobject)((func_mindustry_ai_BlockIndexer_findClosestWallOre_float_float_mindustry_type_Item_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_BlockIndexer_findClosestWallOre_float_float_mindustry_type_Item_R_mindustry_world_Tile])(ctx, (frame[0].o), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_y), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_ai_BlockIndexer_process_mindustry_world_Tile(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[18];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/BlockIndexer:process", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(590);
	sp[0].o = (jobject)((func_mindustry_world_Tile_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_team_R_mindustry_game_Team])(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(592);
	jint temp0 = (jint)((func_mindustry_world_Tile_isCenter_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_isCenter_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_build;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(593);
	sp[0].o = (jobject)((func_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData])(ctx, (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(595);
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[1].o));
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_flags;
	if (((jint)((arc_struct_EnumSet *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_5;
	}
	{
	jint temp0 = (jint)((func_mindustry_world_Tile_isCenter_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_isCenter_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(596);
	sp[0].o = (jobject)((func_mindustry_ai_BlockIndexer_getFlagged_mindustry_game_Team_R_Array1_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_BlockIndexer_getFlagged_mindustry_game_Team_R_Array1_arc_struct_Seq])(ctx, (frame[0].o), (frame[2].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(598);
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[1].o));
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_flags;
	sp[0].o = (jobject)((arc_struct_EnumSet *) NULL_CHECK(sp[0].o))->F_array;
	frame[5].o = (checkCast(ctx, getArrayClass(&class_mindustry_world_meta_BlockFlag, 1), sp[0].o));
	frame[6].i = (((jarray) nullCheck(ctx, (frame[5].o)))->length);
	frame[7].i = (jint(0));
	}
label_8:;
	{
	if ((frame[7].i) >= (frame[6].i)) goto label_5;
	}
	{
	frame[8].o = ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[7].i)));
	LINE_NUMBER(599);
	sp[0].o = frame[4].o;
	jint temp0 = (jint)((func_mindustry_world_meta_BlockFlag_ordinal_R_int) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_mindustry_world_meta_BlockFlag_ordinal_R_int])(ctx, (frame[8].o));
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, temp0);
	sp[1].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_build;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(598);
	INST_IINC(7, 1);
	goto label_8;
	}
label_5:;
	{
	LINE_NUMBER(603);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[3].o)))->F_buildingTypes;
	sp[1].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[1].o));
	{ /* InvokeDynamic */
		clinit_mindustry_ai_BlockIndexer_invoke_arc_func_Prov_3(ctx);
		auto proxy = (mindustry_ai_BlockIndexer_invoke_arc_func_Prov_3 *) gcAlloc(ctx, &class_mindustry_ai_BlockIndexer_invoke_arc_func_Prov_3);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_arc_func_Prov_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_arc_func_Prov_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[4].o = (checkCast(ctx, &class_arc_struct_Seq, sp[0].o));
	LINE_NUMBER(606);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[3].o)))->F_buildings;
	sp[1].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_build;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(607);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_build;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(610);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_build;
	sp[1].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[3].o)))->F_buildings;
	((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_indexerBuildIndex = (jshort((((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size) - (jint(1)))));
	LINE_NUMBER(611);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_build;
	((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_indexerBuildTypeIndex = (jshort((((jint)((arc_struct_Seq *) NULL_CHECK((frame[4].o)))->F_size) - (jint(1)))));
	LINE_NUMBER(614);
	sp[0].o = frame[3].o;
	jint temp0 = (jint)((mindustry_game_Teams$TeamData *) NULL_CHECK(sp[0].o))->F_unitCap;
	sp[1].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[1].o));
	((mindustry_game_Teams$TeamData *) NULL_CHECK(sp[0].o))->F_unitCap = (temp0 + ((jint)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_unitCapModifier));
	LINE_NUMBER(616);
	sp[0].o = (jobject)((mindustry_ai_BlockIndexer *) NULL_CHECK((frame[0].o)))->F_activeTeams;
	jint temp1 = (jint)((func_arc_struct_Seq_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[2].o));
	if (temp1 != 0) goto label_17;
	}
	{
	LINE_NUMBER(617);
	sp[0].o = (jobject)((mindustry_ai_BlockIndexer *) NULL_CHECK((frame[0].o)))->F_activeTeams;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[2].o));
	}
label_17:;
	{
	LINE_NUMBER(621);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[3].o)))->F_buildingTree;
	if (sp[0].o != nullptr) goto label_19;
	}
	{
	LINE_NUMBER(622);
	sp[0].o = frame[3].o;
	clinit_arc_math_geom_QuadTree(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_QuadTree);
	clinit_arc_math_geom_Rect(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_math_geom_Rect);
	jfloat temp0 = jfloat(0);
	jfloat temp1 = jfloat(0);
	clinit_mindustry_Vars(ctx);
	sp[3].o = (jobject)SF_mindustry_Vars_world;
	jint temp2 = (jint)((func_mindustry_core_World_unitWidth_R_int) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_mindustry_core_World_unitWidth_R_int])(ctx, sp[3].o);
	jfloat temp3 = jfloat(temp2);
	clinit_mindustry_Vars(ctx);
	sp[3].o = (jobject)SF_mindustry_Vars_world;
	jint temp4 = (jint)((func_mindustry_core_World_unitHeight_R_int) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_mindustry_core_World_unitHeight_R_int])(ctx, sp[3].o);
	init_arc_math_geom_Rect_float_float_float_float(ctx, sp[2].o, temp0, temp1, temp3, (jfloat(temp4)));
	init_arc_math_geom_QuadTree_arc_math_geom_Rect(ctx, sp[1].o, sp[2].o);
	((mindustry_game_Teams$TeamData *) NULL_CHECK(sp[0].o))->F_buildingTree = (jref) sp[1].o;
	}
label_19:;
	{
	LINE_NUMBER(624);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[3].o)))->F_buildingTree;
	sp[1].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_build;
	((func_arc_math_geom_QuadTree_insert_arc_math_geom_QuadTree$QuadTreeObject) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_QuadTree_insert_arc_math_geom_QuadTree$QuadTreeObject])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(626);
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[1].o));
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_attacks) == 0) goto label_22;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_build;
	if ((isInstance(ctx, sp[0].o, &class_mindustry_logic_Ranged)) == 0) goto label_22;
	}
	{
	LINE_NUMBER(627);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[3].o)))->F_turretTree;
	if (sp[0].o != nullptr) goto label_24;
	}
	{
	LINE_NUMBER(628);
	sp[0].o = frame[3].o;
	clinit_mindustry_ai_BlockIndexer$TurretQuadtree(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ai_BlockIndexer$TurretQuadtree);
	clinit_arc_math_geom_Rect(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_math_geom_Rect);
	jfloat temp0 = jfloat(0);
	jfloat temp1 = jfloat(0);
	clinit_mindustry_Vars(ctx);
	sp[3].o = (jobject)SF_mindustry_Vars_world;
	jint temp2 = (jint)((func_mindustry_core_World_unitWidth_R_int) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_mindustry_core_World_unitWidth_R_int])(ctx, sp[3].o);
	jfloat temp3 = jfloat(temp2);
	clinit_mindustry_Vars(ctx);
	sp[3].o = (jobject)SF_mindustry_Vars_world;
	jint temp4 = (jint)((func_mindustry_core_World_unitHeight_R_int) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_mindustry_core_World_unitHeight_R_int])(ctx, sp[3].o);
	init_arc_math_geom_Rect_float_float_float_float(ctx, sp[2].o, temp0, temp1, temp3, (jfloat(temp4)));
	init_mindustry_ai_BlockIndexer$TurretQuadtree_arc_math_geom_Rect(ctx, sp[1].o, sp[2].o);
	((mindustry_game_Teams$TeamData *) NULL_CHECK(sp[0].o))->F_turretTree = (jref) sp[1].o;
	}
label_24:;
	{
	LINE_NUMBER(631);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[3].o)))->F_turretTree;
	sp[1].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_build;
	((func_arc_math_geom_QuadTree_insert_arc_math_geom_QuadTree$QuadTreeObject) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_QuadTree_insert_arc_math_geom_QuadTree$QuadTreeObject])(ctx, sp[0].o, sp[1].o);
	}
label_22:;
	{
	LINE_NUMBER(634);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_build;
	((func_mindustry_ai_BlockIndexer_notifyHealthChanged_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_BlockIndexer_notifyHealthChanged_mindustry_gen_Building])(ctx, sp[0].o, sp[1].o);
	}
label_2:;
	{
	LINE_NUMBER(637);
	sp[0].o = (jobject)((mindustry_ai_BlockIndexer *) NULL_CHECK((frame[0].o)))->F_blocksPresent;
	if (sp[0].o == nullptr) goto label_26;
	}
	{
	LINE_NUMBER(638);
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[1].o));
	jint temp0 = (jint)((func_mindustry_world_Block_isStatic_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_isStatic_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_28;
	}
	{
	LINE_NUMBER(639);
	sp[0].o = (jobject)((mindustry_ai_BlockIndexer *) NULL_CHECK((frame[0].o)))->F_blocksPresent;
	jint temp0 = (jint)((func_mindustry_world_Tile_floorID_R_short) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_floorID_R_short])(ctx, (frame[1].o));
	ARRAY_ACCESS(jbyte, sp[0].o, temp0) = (jint(1));
	LINE_NUMBER(640);
	sp[0].o = (jobject)((mindustry_ai_BlockIndexer *) NULL_CHECK((frame[0].o)))->F_blocksPresent;
	jint temp1 = (jint)((func_mindustry_world_Tile_overlayID_R_short) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_overlayID_R_short])(ctx, (frame[1].o));
	ARRAY_ACCESS(jbyte, sp[0].o, temp1) = (jint(1));
	}
label_28:;
	{
	LINE_NUMBER(643);
	jint temp0 = (jint)((func_mindustry_world_Tile_blockID_R_short) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_blockID_R_short])(ctx, (frame[1].o));
	sp[0].o = (jobject)((mindustry_ai_BlockIndexer *) NULL_CHECK((frame[0].o)))->F_blocksPresent;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_26;
	}
	{
	sp[0].o = (jobject)((mindustry_ai_BlockIndexer *) NULL_CHECK((frame[0].o)))->F_blocksPresent;
	jint temp0 = (jint)((func_mindustry_world_Tile_blockID_R_short) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_blockID_R_short])(ctx, (frame[1].o));
	ARRAY_ACCESS(jbyte, sp[0].o, temp0) = (jint(1));
	}
label_26:;
	LINE_NUMBER(646);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_mindustry_ai_BlockIndexer_lambda$process$0_R_arc_struct_Seq(jcontext ctx) {
	jtype frame[3];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/BlockIndexer:lambda$process$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_BlockIndexer(ctx);
	{
	LINE_NUMBER(603);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq_boolean(ctx, sp[0].o, (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_ai_BlockIndexer_lambda$findEnemyTile$0_arc_func_Boolf_mindustry_game_Team_mindustry_gen_Building_R_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/BlockIndexer:lambda$findEnemyTile$0", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_BlockIndexer(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(468);
	jint temp0 = (jint)((func_arc_func_Boolf_get_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolf, INDEX_arc_func_Boolf_get_java_lang_Object_R_boolean, (frame[0].o)))(ctx, (frame[0].o), (frame[2].o));
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Building_isDiscovered_mindustry_game_Team_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_gen_Building_isDiscovered_mindustry_game_Team_R_boolean])(ctx, (frame[2].o), (frame[1].o));
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

void M_mindustry_ai_BlockIndexer_lambda$eachBlock$2_arc_func_Boolf_mindustry_gen_Building(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/BlockIndexer:lambda$eachBlock$2", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(372);
	jint temp0 = (jint)((func_arc_func_Boolf_get_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolf, INDEX_arc_func_Boolf_get_java_lang_Object_R_boolean, (frame[1].o)))(ctx, (frame[1].o), (frame[2].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[2].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_privileged) != 0) goto label_1;
	}
	{
	LINE_NUMBER(373);
	sp[0].o = (jobject)((mindustry_ai_BlockIndexer *) NULL_CHECK((frame[0].o)))->F_breturnArray;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[2].o));
	}
label_1:;
	LINE_NUMBER(375);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ai_BlockIndexer_lambda$eachBlock$1_float_float_float_arc_func_Boolf_mindustry_gen_Building(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jobject param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/BlockIndexer:lambda$eachBlock$1", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(346);
	sp[0].o = frame[5].o;
	jfloat temp0 = frame[1].f;
	jfloat temp1 = frame[2].f;
	jfloat temp2 = frame[3].f;
	jfloat temp3 = (jfloat)((func_mindustry_gen_Building_hitSize_R_float) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_gen_Building_hitSize_R_float])(ctx, (frame[5].o));
	jint temp4 = (jint)((func_mindustry_gen_Building_within_float_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_within_float_float_float_R_boolean])(ctx, sp[0].o, temp0, temp1, (temp2 + (temp3 / (jfloat(2)))));
	if (temp4 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_arc_func_Boolf_get_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolf, INDEX_arc_func_Boolf_get_java_lang_Object_R_boolean, (frame[4].o)))(ctx, (frame[4].o), (frame[5].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[5].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_privileged) != 0) goto label_1;
	}
	{
	LINE_NUMBER(347);
	sp[0].o = (jobject)((mindustry_ai_BlockIndexer *) NULL_CHECK((frame[0].o)))->F_breturnArray;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[5].o));
	}
label_1:;
	LINE_NUMBER(349);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_ai_BlockIndexer_lambda$eachBlock$0_arc_func_Boolf_arc_func_Cons_mindustry_gen_Building(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/BlockIndexer:lambda$eachBlock$0", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_BlockIndexer(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(334);
	jint temp0 = (jint)((func_arc_func_Boolf_get_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolf, INDEX_arc_func_Boolf_get_java_lang_Object_R_boolean, (frame[0].o)))(ctx, (frame[0].o), (frame[2].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[2].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_privileged) != 0) goto label_1;
	}
	{
	LINE_NUMBER(335);
	clinit_mindustry_ai_BlockIndexer(ctx);
	SF_mindustry_ai_BlockIndexer_returnBool = (jint(1));
	LINE_NUMBER(336);
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o), (frame[2].o));
	}
label_1:;
	LINE_NUMBER(338);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_ai_BlockIndexer_lambda$getDamaged$0_mindustry_gen_Building_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/BlockIndexer:lambda$getDamaged$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_BlockIndexer(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(309);
	jint temp0 = (jint)((func_mindustry_gen_Building_damaged_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_damaged_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
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

void M_mindustry_ai_BlockIndexer_lambda$addIndex$0_mindustry_world_Tile(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/BlockIndexer:lambda$addIndex$0", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(239);
	sp[0].o = (jobject)((func_mindustry_world_Tile_drop_R_mindustry_type_Item) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_drop_R_mindustry_type_Item])(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	sp[0].o = (jobject)((func_mindustry_world_Tile_wallDrop_R_mindustry_type_Item) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_wallDrop_R_mindustry_type_Item])(ctx, (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(240);
	if ((frame[2].o) != nullptr) goto label_3;
	}
	INST_ALOAD(3);
	if ((--sp)->o != nullptr) goto label_3;
	popStackFrame(ctx);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(241);
	frame[4].i = (((jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_x) / (20));
	frame[5].i = (((jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_y) / (20));
	LINE_NUMBER(242);
	jint temp0 = (jint)((func_mindustry_world_Tile_pos_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_pos_R_int])(ctx, (frame[1].o));
	frame[6].i = temp0;
	LINE_NUMBER(244);
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[1].o));
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	if (sp[0].o != sp[1].o) goto label_7;
	}
	{
	LINE_NUMBER(245);
	if ((frame[2].o) == nullptr) goto label_9;
	}
	{
	sp[0].o = (jobject)((mindustry_ai_BlockIndexer *) NULL_CHECK((frame[0].o)))->F_ores;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) <= ((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[2].o)))->F_id)) goto label_9;
	}
	{
	LINE_NUMBER(246);
	sp[0].o = (jobject)((mindustry_ai_BlockIndexer *) NULL_CHECK((frame[0].o)))->F_ores;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[2].o)))->F_id))) != nullptr) goto label_11;
	}
	{
	sp[0].o = (jobject)((mindustry_ai_BlockIndexer *) NULL_CHECK((frame[0].o)))->F_ores;
	jint temp0 = (jint)((mindustry_ctype_Content *) NULL_CHECK((frame[2].o)))->F_id;
	sp[1].o = (jobject)createMultiArray(ctx, &class_arc_struct_IntSeq, {((jint)((mindustry_ai_BlockIndexer *) NULL_CHECK((frame[0].o)))->F_quadWidth), ((jint)((mindustry_ai_BlockIndexer *) NULL_CHECK((frame[0].o)))->F_quadHeight)});
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	}
label_11:;
	{
	LINE_NUMBER(247);
	sp[0].o = (jobject)((mindustry_ai_BlockIndexer *) NULL_CHECK((frame[0].o)))->F_ores;
	if (((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[2].o)))->F_id))), (frame[4].i))), (frame[5].i))) != nullptr) goto label_12;
	}
	{
	sp[0].o = (jobject)((mindustry_ai_BlockIndexer *) NULL_CHECK((frame[0].o)))->F_ores;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[2].o)))->F_id))), (frame[4].i));
	jint temp0 = frame[5].i;
	clinit_arc_struct_IntSeq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_IntSeq);
	init_arc_struct_IntSeq_boolean_int(ctx, sp[1].o, (jint(0)), (16));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	}
label_12:;
	{
	LINE_NUMBER(248);
	sp[0].o = (jobject)((mindustry_ai_BlockIndexer *) NULL_CHECK((frame[0].o)))->F_ores;
	jint temp0 = (jint)((func_arc_struct_IntSeq_addUnique_int_R_boolean) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[2].o)))->F_id))), (frame[4].i))), (frame[5].i))))->vtable)[VTABLE_arc_struct_IntSeq_addUnique_int_R_boolean])(ctx, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[2].o)))->F_id))), (frame[4].i))), (frame[5].i))), (frame[6].i));
	if (temp0 == 0) goto label_9;
	}
	{
	LINE_NUMBER(249);
	sp[0].o = (jobject)((mindustry_ai_BlockIndexer *) NULL_CHECK((frame[0].o)))->F_allOres;
	jint temp0 = (jint)((func_arc_struct_ObjectIntMap_increment_java_lang_Object_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectIntMap_increment_java_lang_Object_R_int])(ctx, sp[0].o, (frame[2].o));
	frame[7].i = temp0;
	LINE_NUMBER(250);
	if ((frame[7].i) != 0) goto label_9;
	}
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	((func_mindustry_ai_BlockIndexer_updatePresentOres) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_BlockIndexer_updatePresentOres])(ctx, sp[0].o);
label_9:;
	{
	LINE_NUMBER(253);
	if ((frame[3].o) == nullptr) goto label_15;
	}
	{
	sp[0].o = (jobject)((mindustry_ai_BlockIndexer *) NULL_CHECK((frame[0].o)))->F_wallOres;
	if (sp[0].o == nullptr) goto label_15;
	}
	{
	sp[0].o = (jobject)((mindustry_ai_BlockIndexer *) NULL_CHECK((frame[0].o)))->F_wallOres;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[3].o)))->F_id))) == nullptr) goto label_15;
	}
	{
	sp[0].o = (jobject)((mindustry_ai_BlockIndexer *) NULL_CHECK((frame[0].o)))->F_wallOres;
	if (((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[3].o)))->F_id))), (frame[4].i))), (frame[5].i))) == nullptr) goto label_15;
	}
	{
	sp[0].o = (jobject)((mindustry_ai_BlockIndexer *) NULL_CHECK((frame[0].o)))->F_wallOres;
	jint temp0 = (jint)((func_arc_struct_IntSeq_removeValue_int_R_boolean) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[3].o)))->F_id))), (frame[4].i))), (frame[5].i))))->vtable)[VTABLE_arc_struct_IntSeq_removeValue_int_R_boolean])(ctx, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[3].o)))->F_id))), (frame[4].i))), (frame[5].i))), (frame[6].i));
	if (temp0 == 0) goto label_15;
	}
	{
	LINE_NUMBER(254);
	sp[0].o = (jobject)((mindustry_ai_BlockIndexer *) NULL_CHECK((frame[0].o)))->F_allWallOres;
	jint temp0 = (jint)((func_arc_struct_ObjectIntMap_increment_java_lang_Object_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectIntMap_increment_java_lang_Object_int_R_int])(ctx, sp[0].o, (frame[3].o), (jint(-1)));
	frame[7].i = temp0;
	LINE_NUMBER(255);
	if ((frame[7].i) != (jint(1))) goto label_18;
	}
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	((func_mindustry_ai_BlockIndexer_updatePresentOres) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_BlockIndexer_updatePresentOres])(ctx, sp[0].o);
label_18:;
	LINE_NUMBER(256);
	goto label_15;
label_7:;
	{
	LINE_NUMBER(258);
	if ((frame[3].o) == nullptr) goto label_19;
	}
	{
	sp[0].o = (jobject)((mindustry_ai_BlockIndexer *) NULL_CHECK((frame[0].o)))->F_wallOres;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) <= ((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[3].o)))->F_id)) goto label_19;
	}
	{
	LINE_NUMBER(259);
	sp[0].o = (jobject)((mindustry_ai_BlockIndexer *) NULL_CHECK((frame[0].o)))->F_wallOres;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[3].o)))->F_id))) != nullptr) goto label_21;
	}
	{
	sp[0].o = (jobject)((mindustry_ai_BlockIndexer *) NULL_CHECK((frame[0].o)))->F_wallOres;
	jint temp0 = (jint)((mindustry_ctype_Content *) NULL_CHECK((frame[3].o)))->F_id;
	sp[1].o = (jobject)createMultiArray(ctx, &class_arc_struct_IntSeq, {((jint)((mindustry_ai_BlockIndexer *) NULL_CHECK((frame[0].o)))->F_quadWidth), ((jint)((mindustry_ai_BlockIndexer *) NULL_CHECK((frame[0].o)))->F_quadHeight)});
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	}
label_21:;
	{
	LINE_NUMBER(260);
	sp[0].o = (jobject)((mindustry_ai_BlockIndexer *) NULL_CHECK((frame[0].o)))->F_wallOres;
	if (((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[3].o)))->F_id))), (frame[4].i))), (frame[5].i))) != nullptr) goto label_22;
	}
	{
	sp[0].o = (jobject)((mindustry_ai_BlockIndexer *) NULL_CHECK((frame[0].o)))->F_wallOres;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[3].o)))->F_id))), (frame[4].i));
	jint temp0 = frame[5].i;
	clinit_arc_struct_IntSeq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_IntSeq);
	init_arc_struct_IntSeq_boolean_int(ctx, sp[1].o, (jint(0)), (16));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	}
label_22:;
	{
	LINE_NUMBER(261);
	sp[0].o = (jobject)((mindustry_ai_BlockIndexer *) NULL_CHECK((frame[0].o)))->F_wallOres;
	jint temp0 = (jint)((func_arc_struct_IntSeq_addUnique_int_R_boolean) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[3].o)))->F_id))), (frame[4].i))), (frame[5].i))))->vtable)[VTABLE_arc_struct_IntSeq_addUnique_int_R_boolean])(ctx, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[3].o)))->F_id))), (frame[4].i))), (frame[5].i))), (frame[6].i));
	if (temp0 == 0) goto label_19;
	}
	{
	LINE_NUMBER(262);
	sp[0].o = (jobject)((mindustry_ai_BlockIndexer *) NULL_CHECK((frame[0].o)))->F_allWallOres;
	jint temp0 = (jint)((func_arc_struct_ObjectIntMap_increment_java_lang_Object_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectIntMap_increment_java_lang_Object_R_int])(ctx, sp[0].o, (frame[3].o));
	frame[7].i = temp0;
	LINE_NUMBER(263);
	if ((frame[7].i) != 0) goto label_19;
	}
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	((func_mindustry_ai_BlockIndexer_updatePresentOres) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_BlockIndexer_updatePresentOres])(ctx, sp[0].o);
label_19:;
	{
	LINE_NUMBER(267);
	if ((frame[2].o) == nullptr) goto label_15;
	}
	{
	sp[0].o = (jobject)((mindustry_ai_BlockIndexer *) NULL_CHECK((frame[0].o)))->F_ores;
	if (sp[0].o == nullptr) goto label_15;
	}
	{
	jint temp0 = (jint)((mindustry_ctype_Content *) NULL_CHECK((frame[2].o)))->F_id;
	sp[0].o = (jobject)((mindustry_ai_BlockIndexer *) NULL_CHECK((frame[0].o)))->F_ores;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_15;
	}
	{
	sp[0].o = (jobject)((mindustry_ai_BlockIndexer *) NULL_CHECK((frame[0].o)))->F_ores;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[2].o)))->F_id))) == nullptr) goto label_15;
	}
	{
	sp[0].o = (jobject)((mindustry_ai_BlockIndexer *) NULL_CHECK((frame[0].o)))->F_ores;
	if (((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[2].o)))->F_id))), (frame[4].i))), (frame[5].i))) == nullptr) goto label_15;
	}
	{
	sp[0].o = (jobject)((mindustry_ai_BlockIndexer *) NULL_CHECK((frame[0].o)))->F_ores;
	jint temp0 = (jint)((func_arc_struct_IntSeq_removeValue_int_R_boolean) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[2].o)))->F_id))), (frame[4].i))), (frame[5].i))))->vtable)[VTABLE_arc_struct_IntSeq_removeValue_int_R_boolean])(ctx, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[2].o)))->F_id))), (frame[4].i))), (frame[5].i))), (frame[6].i));
	if (temp0 == 0) goto label_15;
	}
	{
	LINE_NUMBER(268);
	sp[0].o = (jobject)((mindustry_ai_BlockIndexer *) NULL_CHECK((frame[0].o)))->F_allOres;
	jint temp0 = (jint)((func_arc_struct_ObjectIntMap_increment_java_lang_Object_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectIntMap_increment_java_lang_Object_int_R_int])(ctx, sp[0].o, (frame[2].o), (jint(-1)));
	frame[7].i = temp0;
	LINE_NUMBER(269);
	if ((frame[7].i) != (jint(1))) goto label_15;
	}
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	((func_mindustry_ai_BlockIndexer_updatePresentOres) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_BlockIndexer_updatePresentOres])(ctx, sp[0].o);
label_15:;
	LINE_NUMBER(272);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_mindustry_ai_BlockIndexer_lambda$removeIndex$0_R_arc_struct_Seq(jcontext ctx) {
	jtype frame[3];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/BlockIndexer:lambda$removeIndex$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_BlockIndexer(ctx);
	{
	LINE_NUMBER(198);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq_boolean(ctx, sp[0].o, (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_ai_BlockIndexer_lambda$new$3_mindustry_game_EventType$WorldLoadEvent(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/BlockIndexer:lambda$new$3", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(70);
	sp[0].o = frame[0].o;
	clinit_mindustry_game_Team(ctx);
	sp[1].o = (jobject)SF_mindustry_game_Team_all;
	sp[1].o = (jobject)createArray(ctx, &class_arc_struct_Seq, (((jarray) nullCheck(ctx, sp[1].o))->length));
	((mindustry_ai_BlockIndexer *) NULL_CHECK(sp[0].o))->F_damagedTiles = (jref) sp[1].o;
	LINE_NUMBER(71);
	sp[0].o = frame[0].o;
	clinit_mindustry_game_Team(ctx);
	sp[1].o = (jobject)SF_mindustry_game_Team_all;
	jint temp0 = ((jarray) nullCheck(ctx, sp[1].o))->length;
	clinit_mindustry_world_meta_BlockFlag(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_BlockFlag_all;
	sp[1].o = (jobject)createMultiArray(ctx, &class_arc_struct_Seq, {temp0, (((jarray) nullCheck(ctx, sp[1].o))->length)});
	((mindustry_ai_BlockIndexer *) NULL_CHECK(sp[0].o))->F_flagMap = (jref) sp[1].o;
	LINE_NUMBER(72);
	sp[0].o = frame[0].o;
	clinit_mindustry_world_meta_BlockFlag(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_BlockFlag_all;
	sp[1].o = (jobject)createArray(ctx, &class_arc_struct_Seq, (((jarray) nullCheck(ctx, sp[1].o))->length));
	((mindustry_ai_BlockIndexer *) NULL_CHECK(sp[0].o))->F_floorMap = (jref) sp[1].o;
	LINE_NUMBER(73);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq_java_lang_Class(ctx, sp[1].o, (((jobject) &class_mindustry_game_Team)));
	((mindustry_ai_BlockIndexer *) NULL_CHECK(sp[0].o))->F_activeTeams = (jref) sp[1].o;
	LINE_NUMBER(75);
	((func_mindustry_ai_BlockIndexer_clearFlags) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_BlockIndexer_clearFlags])(ctx, (frame[0].o));
	LINE_NUMBER(77);
	sp[0].o = (jobject)((mindustry_ai_BlockIndexer *) NULL_CHECK((frame[0].o)))->F_allOres;
	((func_arc_struct_ObjectIntMap_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectIntMap_clear])(ctx, sp[0].o);
	LINE_NUMBER(78);
	sp[0].o = (jobject)((mindustry_ai_BlockIndexer *) NULL_CHECK((frame[0].o)))->F_allWallOres;
	((func_arc_struct_ObjectIntMap_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectIntMap_clear])(ctx, sp[0].o);
	LINE_NUMBER(79);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_items_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_items_R_arc_struct_Seq])(ctx, sp[1].o);
	sp[1].o = (jobject)createArray(ctx, getArrayClass(&class_arc_struct_IntSeq, 2), ((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size));
	((mindustry_ai_BlockIndexer *) NULL_CHECK(sp[0].o))->F_ores = (jref) sp[1].o;
	LINE_NUMBER(80);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_items_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_items_R_arc_struct_Seq])(ctx, sp[1].o);
	sp[1].o = (jobject)createArray(ctx, getArrayClass(&class_arc_struct_IntSeq, 2), ((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size));
	((mindustry_ai_BlockIndexer *) NULL_CHECK(sp[0].o))->F_wallOres = (jref) sp[1].o;
	LINE_NUMBER(81);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_world;
	jint temp1 = (jint)((func_mindustry_core_World_width_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_World_width_R_int])(ctx, sp[1].o);
	jint temp2 = (jint)SM_arc_math_Mathf_ceil_float_R_int(ctx, ((jfloat(temp1)) / (jfloat(20.0f))));
	((mindustry_ai_BlockIndexer *) NULL_CHECK(sp[0].o))->F_quadWidth = temp2;
	LINE_NUMBER(82);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_world;
	jint temp3 = (jint)((func_mindustry_core_World_height_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_World_height_R_int])(ctx, sp[1].o);
	jint temp4 = (jint)SM_arc_math_Mathf_ceil_float_R_int(ctx, ((jfloat(temp3)) / (jfloat(20.0f))));
	((mindustry_ai_BlockIndexer *) NULL_CHECK(sp[0].o))->F_quadHeight = temp4;
	LINE_NUMBER(83);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_blocks_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_blocks_R_arc_struct_Seq])(ctx, sp[1].o);
	sp[1].o = (jobject) createArray(ctx, &class_boolean, ((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size));
	((mindustry_ai_BlockIndexer *) NULL_CHECK(sp[0].o))->F_blocksPresent = (jref) sp[1].o;
	LINE_NUMBER(86);
	clinit_mindustry_game_Team(ctx);
	sp[0].o = (jobject)SF_mindustry_game_Team_all;
	frame[2].o = sp[0].o;
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_15:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_16;
	}
	{
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(87);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_teams;
	sp[0].o = (jobject)((func_mindustry_game_Teams_get_mindustry_game_Team_R_mindustry_game_Teams$TeamData) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Teams_get_mindustry_game_Team_R_mindustry_game_Teams$TeamData])(ctx, sp[0].o, (frame[5].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(88);
	if ((frame[6].o) == nullptr) goto label_19;
	}
	{
	LINE_NUMBER(89);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[6].o)))->F_buildingTree;
	if (sp[0].o == nullptr) goto label_21;
	}
	{
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[6].o)))->F_buildingTree;
	((func_arc_math_geom_QuadTree_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_QuadTree_clear])(ctx, sp[0].o);
	}
label_21:;
	{
	LINE_NUMBER(90);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[6].o)))->F_turretTree;
	if (sp[0].o == nullptr) goto label_19;
	}
	{
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[6].o)))->F_turretTree;
	((func_arc_math_geom_QuadTree_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_QuadTree_clear])(ctx, sp[0].o);
	}
label_19:;
	{
	LINE_NUMBER(86);
	INST_IINC(4, 1);
	goto label_15;
	}
label_16:;
	{
	LINE_NUMBER(94);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((mindustry_core_World *) NULL_CHECK(sp[0].o))->F_tiles;
	sp[0].o = (jobject)((func_mindustry_world_Tiles_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tiles_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_22:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_23;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_mindustry_world_Tile, sp[0].o));
	LINE_NUMBER(95);
	((func_mindustry_ai_BlockIndexer_process_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_BlockIndexer_process_mindustry_world_Tile])(ctx, (frame[0].o), (frame[3].o));
	LINE_NUMBER(97);
	sp[0].o = frame[0].o;
	sp[1].o = frame[3].o;
	sp[2].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[3].o));
	((func_mindustry_ai_BlockIndexer_addFloorIndex_mindustry_world_Tile_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_BlockIndexer_addFloorIndex_mindustry_world_Tile_mindustry_world_blocks_environment_Floor])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(100);
	frame[5].i = (((jint)((mindustry_world_Tile *) NULL_CHECK((frame[3].o)))->F_x) / (20));
	frame[6].i = (((jint)((mindustry_world_Tile *) NULL_CHECK((frame[3].o)))->F_y) / (20));
	LINE_NUMBER(101);
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[3].o));
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	if (sp[0].o != sp[1].o) goto label_29;
	}
	{
	LINE_NUMBER(102);
	sp[0].o = (jobject)((func_mindustry_world_Tile_drop_R_mindustry_type_Item) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_world_Tile_drop_R_mindustry_type_Item])(ctx, (frame[3].o));
	frame[4].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_32;
	}
	{
	sp[0].o = (jobject)((mindustry_ai_BlockIndexer *) NULL_CHECK((frame[0].o)))->F_ores;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) <= ((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[4].o)))->F_id)) goto label_32;
	}
	{
	LINE_NUMBER(104);
	sp[0].o = (jobject)((mindustry_ai_BlockIndexer *) NULL_CHECK((frame[0].o)))->F_ores;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[4].o)))->F_id))) != nullptr) goto label_34;
	}
	{
	sp[0].o = (jobject)((mindustry_ai_BlockIndexer *) NULL_CHECK((frame[0].o)))->F_ores;
	jint temp0 = (jint)((mindustry_ctype_Content *) NULL_CHECK((frame[4].o)))->F_id;
	sp[1].o = (jobject)createMultiArray(ctx, &class_arc_struct_IntSeq, {((jint)((mindustry_ai_BlockIndexer *) NULL_CHECK((frame[0].o)))->F_quadWidth), ((jint)((mindustry_ai_BlockIndexer *) NULL_CHECK((frame[0].o)))->F_quadHeight)});
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	}
label_34:;
	{
	LINE_NUMBER(105);
	sp[0].o = (jobject)((mindustry_ai_BlockIndexer *) NULL_CHECK((frame[0].o)))->F_ores;
	if (((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[4].o)))->F_id))), (frame[5].i))), (frame[6].i))) != nullptr) goto label_35;
	}
	{
	sp[0].o = (jobject)((mindustry_ai_BlockIndexer *) NULL_CHECK((frame[0].o)))->F_ores;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[4].o)))->F_id))), (frame[5].i));
	jint temp0 = frame[6].i;
	clinit_arc_struct_IntSeq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_IntSeq);
	init_arc_struct_IntSeq_boolean_int(ctx, sp[1].o, (jint(0)), (16));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	}
label_35:;
	{
	LINE_NUMBER(106);
	sp[0].o = (jobject)((mindustry_ai_BlockIndexer *) NULL_CHECK((frame[0].o)))->F_ores;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[4].o)))->F_id))), (frame[5].i))), (frame[6].i));
	jint temp0 = (jint)((func_mindustry_world_Tile_pos_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_world_Tile_pos_R_int])(ctx, (frame[3].o));
	((func_arc_struct_IntSeq_add_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_add_int])(ctx, sp[0].o, temp0);
	LINE_NUMBER(107);
	sp[0].o = (jobject)((mindustry_ai_BlockIndexer *) NULL_CHECK((frame[0].o)))->F_allOres;
	jint temp1 = (jint)((func_arc_struct_ObjectIntMap_increment_java_lang_Object_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectIntMap_increment_java_lang_Object_R_int])(ctx, sp[0].o, (frame[4].o));
	goto label_32;
	}
label_29:;
	{
	LINE_NUMBER(109);
	sp[0].o = (jobject)((func_mindustry_world_Tile_wallDrop_R_mindustry_type_Item) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_world_Tile_wallDrop_R_mindustry_type_Item])(ctx, (frame[3].o));
	frame[4].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_32;
	}
	{
	sp[0].o = (jobject)((mindustry_ai_BlockIndexer *) NULL_CHECK((frame[0].o)))->F_wallOres;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) <= ((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[4].o)))->F_id)) goto label_32;
	}
	{
	LINE_NUMBER(111);
	sp[0].o = (jobject)((mindustry_ai_BlockIndexer *) NULL_CHECK((frame[0].o)))->F_wallOres;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[4].o)))->F_id))) != nullptr) goto label_39;
	}
	{
	sp[0].o = (jobject)((mindustry_ai_BlockIndexer *) NULL_CHECK((frame[0].o)))->F_wallOres;
	jint temp0 = (jint)((mindustry_ctype_Content *) NULL_CHECK((frame[4].o)))->F_id;
	sp[1].o = (jobject)createMultiArray(ctx, &class_arc_struct_IntSeq, {((jint)((mindustry_ai_BlockIndexer *) NULL_CHECK((frame[0].o)))->F_quadWidth), ((jint)((mindustry_ai_BlockIndexer *) NULL_CHECK((frame[0].o)))->F_quadHeight)});
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	}
label_39:;
	{
	LINE_NUMBER(112);
	sp[0].o = (jobject)((mindustry_ai_BlockIndexer *) NULL_CHECK((frame[0].o)))->F_wallOres;
	if (((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[4].o)))->F_id))), (frame[5].i))), (frame[6].i))) != nullptr) goto label_40;
	}
	{
	sp[0].o = (jobject)((mindustry_ai_BlockIndexer *) NULL_CHECK((frame[0].o)))->F_wallOres;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[4].o)))->F_id))), (frame[5].i));
	jint temp0 = frame[6].i;
	clinit_arc_struct_IntSeq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_IntSeq);
	init_arc_struct_IntSeq_boolean_int(ctx, sp[1].o, (jint(0)), (16));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	}
label_40:;
	{
	LINE_NUMBER(113);
	sp[0].o = (jobject)((mindustry_ai_BlockIndexer *) NULL_CHECK((frame[0].o)))->F_wallOres;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[4].o)))->F_id))), (frame[5].i))), (frame[6].i));
	jint temp0 = (jint)((func_mindustry_world_Tile_pos_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_world_Tile_pos_R_int])(ctx, (frame[3].o));
	((func_arc_struct_IntSeq_add_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_add_int])(ctx, sp[0].o, temp0);
	LINE_NUMBER(114);
	sp[0].o = (jobject)((mindustry_ai_BlockIndexer *) NULL_CHECK((frame[0].o)))->F_allWallOres;
	jint temp1 = (jint)((func_arc_struct_ObjectIntMap_increment_java_lang_Object_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectIntMap_increment_java_lang_Object_R_int])(ctx, sp[0].o, (frame[4].o));
	}
label_32:;
	LINE_NUMBER(116);
	goto label_22;
label_23:;
	{
	LINE_NUMBER(118);
	((func_mindustry_ai_BlockIndexer_updatePresentOres) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_BlockIndexer_updatePresentOres])(ctx, (frame[0].o));
	LINE_NUMBER(120);
	clinit_mindustry_game_Team(ctx);
	sp[0].o = (jobject)SF_mindustry_game_Team_all;
	frame[2].o = sp[0].o;
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_45:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_46;
	}
	{
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(121);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_teams;
	sp[0].o = (jobject)((func_mindustry_game_Teams_get_mindustry_game_Team_R_mindustry_game_Teams$TeamData) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Teams_get_mindustry_game_Team_R_mindustry_game_Teams$TeamData])(ctx, sp[0].o, (frame[5].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(123);
	sp[0].o = (jobject)((func_mindustry_game_Team_rules_R_mindustry_game_Rules$TeamRule) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_game_Team_rules_R_mindustry_game_Rules$TeamRule])(ctx, (frame[5].o));
	if (((jint)((mindustry_game_Rules$TeamRule *) NULL_CHECK(sp[0].o))->F_prebuildAi) == 0) goto label_49;
	}
	{
	jint temp0 = (jint)((func_mindustry_game_Teams$TeamData_hasCore_R_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_game_Teams$TeamData_hasCore_R_boolean])(ctx, (frame[6].o));
	if (temp0 == 0) goto label_49;
	}
	{
	LINE_NUMBER(124);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[6].o)))->F_plans;
	SM_mindustry_ai_types_PrebuildAI_sortPlans_arc_struct_Queue(ctx, sp[0].o);
	}
label_49:;
	{
	LINE_NUMBER(120);
	INST_IINC(4, 1);
	goto label_45;
	}
label_46:;
	LINE_NUMBER(127);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ai_BlockIndexer_lambda$new$2_mindustry_game_EventType$TileFloorChangeEvent(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/BlockIndexer:lambda$new$2", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(65);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_game_EventType$TileFloorChangeEvent *) NULL_CHECK((frame[1].o)))->F_tile;
	sp[2].o = (jobject)((mindustry_game_EventType$TileFloorChangeEvent *) NULL_CHECK((frame[1].o)))->F_previous;
	((func_mindustry_ai_BlockIndexer_removeFloorIndex_mindustry_world_Tile_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_BlockIndexer_removeFloorIndex_mindustry_world_Tile_mindustry_world_blocks_environment_Floor])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(66);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_game_EventType$TileFloorChangeEvent *) NULL_CHECK((frame[1].o)))->F_tile;
	sp[2].o = (jobject)((mindustry_game_EventType$TileFloorChangeEvent *) NULL_CHECK((frame[1].o)))->F_floor;
	((func_mindustry_ai_BlockIndexer_addFloorIndex_mindustry_world_Tile_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_BlockIndexer_addFloorIndex_mindustry_world_Tile_mindustry_world_blocks_environment_Floor])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(67);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ai_BlockIndexer_lambda$new$1_mindustry_game_EventType$TileChangeEvent(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/BlockIndexer:lambda$new$1", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(61);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_game_EventType$TileChangeEvent *) NULL_CHECK((frame[1].o)))->F_tile;
	((func_mindustry_ai_BlockIndexer_addIndex_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_BlockIndexer_addIndex_mindustry_world_Tile])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(62);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ai_BlockIndexer_lambda$new$0_mindustry_game_EventType$TilePreChangeEvent(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/BlockIndexer:lambda$new$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(57);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_game_EventType$TilePreChangeEvent *) NULL_CHECK((frame[1].o)))->F_tile;
	((func_mindustry_ai_BlockIndexer_removeIndex_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_BlockIndexer_removeIndex_mindustry_world_Tile])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(58);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_mindustry_ai_BlockIndexer(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_mindustry_ai_BlockIndexer_quadrantSize = jint(20);
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/BlockIndexer:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_BlockIndexer(ctx);
	{
	LINE_NUMBER(29);
	clinit_arc_math_geom_Rect(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Rect);
	init_arc_math_geom_Rect(ctx, sp[0].o);
	clinit_mindustry_ai_BlockIndexer(ctx);
	SF_mindustry_ai_BlockIndexer_rect = sp[0].o;
	LINE_NUMBER(30);
	clinit_mindustry_ai_BlockIndexer(ctx);
	SF_mindustry_ai_BlockIndexer_returnBool = (jint(0));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_ai_BlockIndexer;
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

	fields[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[12]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[13]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[14]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[15]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

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

	{ // Method findClosestFlag
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[14]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

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
}

void *vtable_mindustry_ai_BlockIndexer[] {
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
	(void *) M_mindustry_ai_BlockIndexer_getAllPresentOres_R_arc_struct_Seq,
	(void *) M_mindustry_ai_BlockIndexer_updatePresentOres,
	(void *) M_mindustry_ai_BlockIndexer_removeFloorIndex_mindustry_world_Tile_mindustry_world_blocks_environment_Floor,
	(void *) M_mindustry_ai_BlockIndexer_addFloorIndex_mindustry_world_Tile_mindustry_world_blocks_environment_Floor,
	(void *) M_mindustry_ai_BlockIndexer_getFlaggedFloors_mindustry_world_meta_BlockFlag_R_arc_struct_Seq,
	(void *) M_mindustry_ai_BlockIndexer_removeIndex_mindustry_world_Tile,
	(void *) M_mindustry_ai_BlockIndexer_addIndex_mindustry_world_Tile,
	(void *) M_mindustry_ai_BlockIndexer_isBlockPresent_mindustry_world_Block_R_boolean,
	(void *) M_mindustry_ai_BlockIndexer_clearFlags,
	(void *) M_mindustry_ai_BlockIndexer_getFlagged_mindustry_game_Team_R_Array1_arc_struct_Seq,
	(void *) M_mindustry_ai_BlockIndexer_hasOre_mindustry_type_Item_R_boolean,
	(void *) M_mindustry_ai_BlockIndexer_hasWallOre_mindustry_type_Item_R_boolean,
	(void *) M_mindustry_ai_BlockIndexer_getDamaged_mindustry_game_Team_R_arc_struct_Seq,
	(void *) M_mindustry_ai_BlockIndexer_getFlagged_mindustry_game_Team_mindustry_world_meta_BlockFlag_R_arc_struct_Seq,
	(void *) M_mindustry_ai_BlockIndexer_findClosestFlag_float_float_mindustry_game_Team_mindustry_world_meta_BlockFlag_R_mindustry_gen_Building,
	(void *) M_mindustry_ai_BlockIndexer_eachBlock_mindustry_gen_Teamc_float_arc_func_Boolf_arc_func_Cons_R_boolean,
	(void *) M_mindustry_ai_BlockIndexer_eachBlock_mindustry_game_Team_float_float_float_arc_func_Boolf_arc_func_Cons_R_boolean,
	(void *) M_mindustry_ai_BlockIndexer_eachBlock_mindustry_game_Team_arc_math_geom_Rect_arc_func_Boolf_arc_func_Cons_R_boolean,
	(void *) M_mindustry_ai_BlockIndexer_getEnemy_mindustry_game_Team_mindustry_world_meta_BlockFlag_R_arc_struct_Seq,
	(void *) M_mindustry_ai_BlockIndexer_notifyHealthChanged_mindustry_gen_Building,
	(void *) M_mindustry_ai_BlockIndexer_allBuildings_float_float_float_arc_func_Cons,
	(void *) M_mindustry_ai_BlockIndexer_findEnemyTile_mindustry_game_Team_float_float_float_mindustry_entities_Units$BuildingPriorityf_arc_func_Boolf_R_mindustry_gen_Building,
	(void *) M_mindustry_ai_BlockIndexer_findEnemyTile_mindustry_game_Team_float_float_float_mindustry_entities_Units$BuildingPriorityf_arc_func_Boolf_mindustry_game_Team_R_mindustry_gen_Building,
	(void *) M_mindustry_ai_BlockIndexer_findEnemyTile_mindustry_game_Team_float_float_float_arc_func_Boolf_R_mindustry_gen_Building,
	(void *) M_mindustry_ai_BlockIndexer_findTile_mindustry_game_Team_float_float_float_arc_func_Boolf_R_mindustry_gen_Building,
	(void *) M_mindustry_ai_BlockIndexer_findTile_mindustry_game_Team_float_float_float_arc_func_Boolf_boolean_R_mindustry_gen_Building,
	(void *) M_mindustry_ai_BlockIndexer_findTile_mindustry_game_Team_float_float_float_arc_func_Boolf_boolean_mindustry_game_Team_R_mindustry_gen_Building,
	(void *) M_mindustry_ai_BlockIndexer_findClosestOre_float_float_mindustry_type_Item_R_mindustry_world_Tile,
	(void *) M_mindustry_ai_BlockIndexer_findClosestWallOre_float_float_mindustry_type_Item_R_mindustry_world_Tile,
	(void *) M_mindustry_ai_BlockIndexer_findClosestOre_mindustry_gen_Unit_mindustry_type_Item_R_mindustry_world_Tile,
	(void *) M_mindustry_ai_BlockIndexer_findClosestWallOre_mindustry_gen_Unit_mindustry_type_Item_R_mindustry_world_Tile,
	(void *) M_mindustry_ai_BlockIndexer_process_mindustry_world_Tile,
	(void *) M_mindustry_ai_BlockIndexer_lambda$eachBlock$2_arc_func_Boolf_mindustry_gen_Building,
	(void *) M_mindustry_ai_BlockIndexer_lambda$eachBlock$1_float_float_float_arc_func_Boolf_mindustry_gen_Building,
	(void *) M_mindustry_ai_BlockIndexer_lambda$addIndex$0_mindustry_world_Tile,
	(void *) M_mindustry_ai_BlockIndexer_lambda$new$3_mindustry_game_EventType$WorldLoadEvent,
	(void *) M_mindustry_ai_BlockIndexer_lambda$new$2_mindustry_game_EventType$TileFloorChangeEvent,
	(void *) M_mindustry_ai_BlockIndexer_lambda$new$1_mindustry_game_EventType$TileChangeEvent,
	(void *) M_mindustry_ai_BlockIndexer_lambda$new$0_mindustry_game_EventType$TilePreChangeEvent,
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
	{ "getAllPresentOres", "()Larc/struct/Seq;" },
	{ "updatePresentOres", "()V" },
	{ "removeFloorIndex", "(Lmindustry/world/Tile;Lmindustry/world/blocks/environment/Floor;)V" },
	{ "addFloorIndex", "(Lmindustry/world/Tile;Lmindustry/world/blocks/environment/Floor;)V" },
	{ "getFlaggedFloors", "(Lmindustry/world/meta/BlockFlag;)Larc/struct/Seq;" },
	{ "removeIndex", "(Lmindustry/world/Tile;)V" },
	{ "addIndex", "(Lmindustry/world/Tile;)V" },
	{ "isBlockPresent", "(Lmindustry/world/Block;)Z" },
	{ "clearFlags", "()V" },
	{ "getFlagged", "(Lmindustry/game/Team;)[Larc/struct/Seq;" },
	{ "hasOre", "(Lmindustry/type/Item;)Z" },
	{ "hasWallOre", "(Lmindustry/type/Item;)Z" },
	{ "getDamaged", "(Lmindustry/game/Team;)Larc/struct/Seq;" },
	{ "getFlagged", "(Lmindustry/game/Team;Lmindustry/world/meta/BlockFlag;)Larc/struct/Seq;" },
	{ "findClosestFlag", "(FFLmindustry/game/Team;Lmindustry/world/meta/BlockFlag;)Lmindustry/gen/Building;" },
	{ "eachBlock", "(Lmindustry/gen/Teamc;FLarc/func/Boolf;Larc/func/Cons;)Z" },
	{ "eachBlock", "(Lmindustry/game/Team;FFFLarc/func/Boolf;Larc/func/Cons;)Z" },
	{ "eachBlock", "(Lmindustry/game/Team;Larc/math/geom/Rect;Larc/func/Boolf;Larc/func/Cons;)Z" },
	{ "getEnemy", "(Lmindustry/game/Team;Lmindustry/world/meta/BlockFlag;)Larc/struct/Seq;" },
	{ "notifyHealthChanged", "(Lmindustry/gen/Building;)V" },
	{ "allBuildings", "(FFFLarc/func/Cons;)V" },
	{ "findEnemyTile", "(Lmindustry/game/Team;FFFLmindustry/entities/Units$BuildingPriorityf;Larc/func/Boolf;)Lmindustry/gen/Building;" },
	{ "findEnemyTile", "(Lmindustry/game/Team;FFFLmindustry/entities/Units$BuildingPriorityf;Larc/func/Boolf;Lmindustry/game/Team;)Lmindustry/gen/Building;" },
	{ "findEnemyTile", "(Lmindustry/game/Team;FFFLarc/func/Boolf;)Lmindustry/gen/Building;" },
	{ "findTile", "(Lmindustry/game/Team;FFFLarc/func/Boolf;)Lmindustry/gen/Building;" },
	{ "findTile", "(Lmindustry/game/Team;FFFLarc/func/Boolf;Z)Lmindustry/gen/Building;" },
	{ "findTile", "(Lmindustry/game/Team;FFFLarc/func/Boolf;ZLmindustry/game/Team;)Lmindustry/gen/Building;" },
	{ "findClosestOre", "(FFLmindustry/type/Item;)Lmindustry/world/Tile;" },
	{ "findClosestWallOre", "(FFLmindustry/type/Item;)Lmindustry/world/Tile;" },
	{ "findClosestOre", "(Lmindustry/gen/Unit;Lmindustry/type/Item;)Lmindustry/world/Tile;" },
	{ "findClosestWallOre", "(Lmindustry/gen/Unit;Lmindustry/type/Item;)Lmindustry/world/Tile;" },
	{ "process", "(Lmindustry/world/Tile;)V" },
	{ "lambda$eachBlock$2", "(Larc/func/Boolf;Lmindustry/gen/Building;)V" },
	{ "lambda$eachBlock$1", "(FFFLarc/func/Boolf;Lmindustry/gen/Building;)V" },
	{ "lambda$addIndex$0", "(Lmindustry/world/Tile;)V" },
	{ "lambda$new$3", "(Lmindustry/game/EventType$WorldLoadEvent;)V" },
	{ "lambda$new$2", "(Lmindustry/game/EventType$TileFloorChangeEvent;)V" },
	{ "lambda$new$1", "(Lmindustry/game/EventType$TileChangeEvent;)V" },
	{ "lambda$new$0", "(Lmindustry/game/EventType$TilePreChangeEvent;)V" },
};

static jclass innerClasses[] {
	&class_mindustry_ai_BlockIndexer$TurretQuadtree,
};

static FieldMetadata fields[] {
	{ "quadrantSize", &class_int, (intptr_t) &SF_mindustry_ai_BlockIndexer_quadrantSize, "I", 26 },
	{ "rect", &class_arc_math_geom_Rect, (intptr_t) &SF_mindustry_ai_BlockIndexer_rect, "Larc/math/geom/Rect;", 26 },
	{ "returnBool", &class_boolean, (intptr_t) &SF_mindustry_ai_BlockIndexer_returnBool, "Z", 10 },
	{ "quadWidth", &class_int, offsetof(mindustry_ai_BlockIndexer, F_quadWidth), "I", 2 },
	{ "quadHeight", &class_int, offsetof(mindustry_ai_BlockIndexer, F_quadHeight), "I", 2 },
	{ "ores", getArrayClass(&class_arc_struct_IntSeq, 3), offsetof(mindustry_ai_BlockIndexer, F_ores), "[[[Larc/struct/IntSeq;", 2 },
	{ "wallOres", getArrayClass(&class_arc_struct_IntSeq, 3), offsetof(mindustry_ai_BlockIndexer, F_wallOres), "[[[Larc/struct/IntSeq;", 2 },
	{ "damagedTiles", getArrayClass(&class_arc_struct_Seq, 1), offsetof(mindustry_ai_BlockIndexer, F_damagedTiles), "[Larc/struct/Seq;", 2 },
	{ "allPresentOres", &class_arc_struct_Seq, offsetof(mindustry_ai_BlockIndexer, F_allPresentOres), "Larc/struct/Seq;", 2 },
	{ "allOres", &class_arc_struct_ObjectIntMap, offsetof(mindustry_ai_BlockIndexer, F_allOres), "Larc/struct/ObjectIntMap;", 2 },
	{ "allWallOres", &class_arc_struct_ObjectIntMap, offsetof(mindustry_ai_BlockIndexer, F_allWallOres), "Larc/struct/ObjectIntMap;", 2 },
	{ "activeTeams", &class_arc_struct_Seq, offsetof(mindustry_ai_BlockIndexer, F_activeTeams), "Larc/struct/Seq;", 2 },
	{ "flagMap", getArrayClass(&class_arc_struct_Seq, 2), offsetof(mindustry_ai_BlockIndexer, F_flagMap), "[[Larc/struct/Seq;", 2 },
	{ "blocksPresent", getArrayClass(&class_boolean, 1), offsetof(mindustry_ai_BlockIndexer, F_blocksPresent), "[Z", 2 },
	{ "breturnArray", &class_arc_struct_Seq, offsetof(mindustry_ai_BlockIndexer, F_breturnArray), "Larc/struct/Seq;", 2 },
	{ "floorMap", getArrayClass(&class_arc_struct_Seq, 1), offsetof(mindustry_ai_BlockIndexer, F_floorMap), "[Larc/struct/Seq;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ai_BlockIndexer, 0, "()V", 1 },
	{ "getAllPresentOres", (intptr_t) M_mindustry_ai_BlockIndexer_getAllPresentOres_R_arc_struct_Seq, VTABLE_mindustry_ai_BlockIndexer_getAllPresentOres_R_arc_struct_Seq, "()Larc/struct/Seq;", 1 },
	{ "updatePresentOres", (intptr_t) M_mindustry_ai_BlockIndexer_updatePresentOres, VTABLE_mindustry_ai_BlockIndexer_updatePresentOres, "()V", 2 },
	{ "removeFloorIndex", (intptr_t) M_mindustry_ai_BlockIndexer_removeFloorIndex_mindustry_world_Tile_mindustry_world_blocks_environment_Floor, VTABLE_mindustry_ai_BlockIndexer_removeFloorIndex_mindustry_world_Tile_mindustry_world_blocks_environment_Floor, "(Lmindustry/world/Tile;Lmindustry/world/blocks/environment/Floor;)V", 2 },
	{ "addFloorIndex", (intptr_t) M_mindustry_ai_BlockIndexer_addFloorIndex_mindustry_world_Tile_mindustry_world_blocks_environment_Floor, VTABLE_mindustry_ai_BlockIndexer_addFloorIndex_mindustry_world_Tile_mindustry_world_blocks_environment_Floor, "(Lmindustry/world/Tile;Lmindustry/world/blocks/environment/Floor;)V", 2 },
	{ "getFlaggedFloors", (intptr_t) M_mindustry_ai_BlockIndexer_getFlaggedFloors_mindustry_world_meta_BlockFlag_R_arc_struct_Seq, VTABLE_mindustry_ai_BlockIndexer_getFlaggedFloors_mindustry_world_meta_BlockFlag_R_arc_struct_Seq, "(Lmindustry/world/meta/BlockFlag;)Larc/struct/Seq;", 1 },
	{ "removeIndex", (intptr_t) M_mindustry_ai_BlockIndexer_removeIndex_mindustry_world_Tile, VTABLE_mindustry_ai_BlockIndexer_removeIndex_mindustry_world_Tile, "(Lmindustry/world/Tile;)V", 1 },
	{ "addIndex", (intptr_t) M_mindustry_ai_BlockIndexer_addIndex_mindustry_world_Tile, VTABLE_mindustry_ai_BlockIndexer_addIndex_mindustry_world_Tile, "(Lmindustry/world/Tile;)V", 1 },
	{ "isBlockPresent", (intptr_t) M_mindustry_ai_BlockIndexer_isBlockPresent_mindustry_world_Block_R_boolean, VTABLE_mindustry_ai_BlockIndexer_isBlockPresent_mindustry_world_Block_R_boolean, "(Lmindustry/world/Block;)Z", 1 },
	{ "clearFlags", (intptr_t) M_mindustry_ai_BlockIndexer_clearFlags, VTABLE_mindustry_ai_BlockIndexer_clearFlags, "()V", 2 },
	{ "getFlagged", (intptr_t) M_mindustry_ai_BlockIndexer_getFlagged_mindustry_game_Team_R_Array1_arc_struct_Seq, VTABLE_mindustry_ai_BlockIndexer_getFlagged_mindustry_game_Team_R_Array1_arc_struct_Seq, "(Lmindustry/game/Team;)[Larc/struct/Seq;", 2 },
	{ "hasOre", (intptr_t) M_mindustry_ai_BlockIndexer_hasOre_mindustry_type_Item_R_boolean, VTABLE_mindustry_ai_BlockIndexer_hasOre_mindustry_type_Item_R_boolean, "(Lmindustry/type/Item;)Z", 1 },
	{ "hasWallOre", (intptr_t) M_mindustry_ai_BlockIndexer_hasWallOre_mindustry_type_Item_R_boolean, VTABLE_mindustry_ai_BlockIndexer_hasWallOre_mindustry_type_Item_R_boolean, "(Lmindustry/type/Item;)Z", 1 },
	{ "getDamaged", (intptr_t) M_mindustry_ai_BlockIndexer_getDamaged_mindustry_game_Team_R_arc_struct_Seq, VTABLE_mindustry_ai_BlockIndexer_getDamaged_mindustry_game_Team_R_arc_struct_Seq, "(Lmindustry/game/Team;)Larc/struct/Seq;", 1 },
	{ "getFlagged", (intptr_t) M_mindustry_ai_BlockIndexer_getFlagged_mindustry_game_Team_mindustry_world_meta_BlockFlag_R_arc_struct_Seq, VTABLE_mindustry_ai_BlockIndexer_getFlagged_mindustry_game_Team_mindustry_world_meta_BlockFlag_R_arc_struct_Seq, "(Lmindustry/game/Team;Lmindustry/world/meta/BlockFlag;)Larc/struct/Seq;", 1 },
	{ "findClosestFlag", (intptr_t) M_mindustry_ai_BlockIndexer_findClosestFlag_float_float_mindustry_game_Team_mindustry_world_meta_BlockFlag_R_mindustry_gen_Building, VTABLE_mindustry_ai_BlockIndexer_findClosestFlag_float_float_mindustry_game_Team_mindustry_world_meta_BlockFlag_R_mindustry_gen_Building, "(FFLmindustry/game/Team;Lmindustry/world/meta/BlockFlag;)Lmindustry/gen/Building;", 1 },
	{ "eachBlock", (intptr_t) M_mindustry_ai_BlockIndexer_eachBlock_mindustry_gen_Teamc_float_arc_func_Boolf_arc_func_Cons_R_boolean, VTABLE_mindustry_ai_BlockIndexer_eachBlock_mindustry_gen_Teamc_float_arc_func_Boolf_arc_func_Cons_R_boolean, "(Lmindustry/gen/Teamc;FLarc/func/Boolf;Larc/func/Cons;)Z", 1 },
	{ "eachBlock", (intptr_t) M_mindustry_ai_BlockIndexer_eachBlock_mindustry_game_Team_float_float_float_arc_func_Boolf_arc_func_Cons_R_boolean, VTABLE_mindustry_ai_BlockIndexer_eachBlock_mindustry_game_Team_float_float_float_arc_func_Boolf_arc_func_Cons_R_boolean, "(Lmindustry/game/Team;FFFLarc/func/Boolf;Larc/func/Cons;)Z", 1 },
	{ "eachBlock", (intptr_t) M_mindustry_ai_BlockIndexer_eachBlock_mindustry_game_Team_arc_math_geom_Rect_arc_func_Boolf_arc_func_Cons_R_boolean, VTABLE_mindustry_ai_BlockIndexer_eachBlock_mindustry_game_Team_arc_math_geom_Rect_arc_func_Boolf_arc_func_Cons_R_boolean, "(Lmindustry/game/Team;Larc/math/geom/Rect;Larc/func/Boolf;Larc/func/Cons;)Z", 1 },
	{ "getEnemy", (intptr_t) M_mindustry_ai_BlockIndexer_getEnemy_mindustry_game_Team_mindustry_world_meta_BlockFlag_R_arc_struct_Seq, VTABLE_mindustry_ai_BlockIndexer_getEnemy_mindustry_game_Team_mindustry_world_meta_BlockFlag_R_arc_struct_Seq, "(Lmindustry/game/Team;Lmindustry/world/meta/BlockFlag;)Larc/struct/Seq;", 1 },
	{ "notifyHealthChanged", (intptr_t) M_mindustry_ai_BlockIndexer_notifyHealthChanged_mindustry_gen_Building, VTABLE_mindustry_ai_BlockIndexer_notifyHealthChanged_mindustry_gen_Building, "(Lmindustry/gen/Building;)V", 1 },
	{ "allBuildings", (intptr_t) M_mindustry_ai_BlockIndexer_allBuildings_float_float_float_arc_func_Cons, VTABLE_mindustry_ai_BlockIndexer_allBuildings_float_float_float_arc_func_Cons, "(FFFLarc/func/Cons;)V", 1 },
	{ "findEnemyTile", (intptr_t) M_mindustry_ai_BlockIndexer_findEnemyTile_mindustry_game_Team_float_float_float_mindustry_entities_Units$BuildingPriorityf_arc_func_Boolf_R_mindustry_gen_Building, VTABLE_mindustry_ai_BlockIndexer_findEnemyTile_mindustry_game_Team_float_float_float_mindustry_entities_Units$BuildingPriorityf_arc_func_Boolf_R_mindustry_gen_Building, "(Lmindustry/game/Team;FFFLmindustry/entities/Units$BuildingPriorityf;Larc/func/Boolf;)Lmindustry/gen/Building;", 1 },
	{ "findEnemyTile", (intptr_t) M_mindustry_ai_BlockIndexer_findEnemyTile_mindustry_game_Team_float_float_float_mindustry_entities_Units$BuildingPriorityf_arc_func_Boolf_mindustry_game_Team_R_mindustry_gen_Building, VTABLE_mindustry_ai_BlockIndexer_findEnemyTile_mindustry_game_Team_float_float_float_mindustry_entities_Units$BuildingPriorityf_arc_func_Boolf_mindustry_game_Team_R_mindustry_gen_Building, "(Lmindustry/game/Team;FFFLmindustry/entities/Units$BuildingPriorityf;Larc/func/Boolf;Lmindustry/game/Team;)Lmindustry/gen/Building;", 1 },
	{ "findEnemyTile", (intptr_t) M_mindustry_ai_BlockIndexer_findEnemyTile_mindustry_game_Team_float_float_float_arc_func_Boolf_R_mindustry_gen_Building, VTABLE_mindustry_ai_BlockIndexer_findEnemyTile_mindustry_game_Team_float_float_float_arc_func_Boolf_R_mindustry_gen_Building, "(Lmindustry/game/Team;FFFLarc/func/Boolf;)Lmindustry/gen/Building;", 1 },
	{ "findTile", (intptr_t) M_mindustry_ai_BlockIndexer_findTile_mindustry_game_Team_float_float_float_arc_func_Boolf_R_mindustry_gen_Building, VTABLE_mindustry_ai_BlockIndexer_findTile_mindustry_game_Team_float_float_float_arc_func_Boolf_R_mindustry_gen_Building, "(Lmindustry/game/Team;FFFLarc/func/Boolf;)Lmindustry/gen/Building;", 1 },
	{ "findTile", (intptr_t) M_mindustry_ai_BlockIndexer_findTile_mindustry_game_Team_float_float_float_arc_func_Boolf_boolean_R_mindustry_gen_Building, VTABLE_mindustry_ai_BlockIndexer_findTile_mindustry_game_Team_float_float_float_arc_func_Boolf_boolean_R_mindustry_gen_Building, "(Lmindustry/game/Team;FFFLarc/func/Boolf;Z)Lmindustry/gen/Building;", 1 },
	{ "findTile", (intptr_t) M_mindustry_ai_BlockIndexer_findTile_mindustry_game_Team_float_float_float_arc_func_Boolf_boolean_mindustry_game_Team_R_mindustry_gen_Building, VTABLE_mindustry_ai_BlockIndexer_findTile_mindustry_game_Team_float_float_float_arc_func_Boolf_boolean_mindustry_game_Team_R_mindustry_gen_Building, "(Lmindustry/game/Team;FFFLarc/func/Boolf;ZLmindustry/game/Team;)Lmindustry/gen/Building;", 1 },
	{ "findClosestOre", (intptr_t) M_mindustry_ai_BlockIndexer_findClosestOre_float_float_mindustry_type_Item_R_mindustry_world_Tile, VTABLE_mindustry_ai_BlockIndexer_findClosestOre_float_float_mindustry_type_Item_R_mindustry_world_Tile, "(FFLmindustry/type/Item;)Lmindustry/world/Tile;", 1 },
	{ "findClosestWallOre", (intptr_t) M_mindustry_ai_BlockIndexer_findClosestWallOre_float_float_mindustry_type_Item_R_mindustry_world_Tile, VTABLE_mindustry_ai_BlockIndexer_findClosestWallOre_float_float_mindustry_type_Item_R_mindustry_world_Tile, "(FFLmindustry/type/Item;)Lmindustry/world/Tile;", 1 },
	{ "findClosestOre", (intptr_t) M_mindustry_ai_BlockIndexer_findClosestOre_mindustry_gen_Unit_mindustry_type_Item_R_mindustry_world_Tile, VTABLE_mindustry_ai_BlockIndexer_findClosestOre_mindustry_gen_Unit_mindustry_type_Item_R_mindustry_world_Tile, "(Lmindustry/gen/Unit;Lmindustry/type/Item;)Lmindustry/world/Tile;", 1 },
	{ "findClosestWallOre", (intptr_t) M_mindustry_ai_BlockIndexer_findClosestWallOre_mindustry_gen_Unit_mindustry_type_Item_R_mindustry_world_Tile, VTABLE_mindustry_ai_BlockIndexer_findClosestWallOre_mindustry_gen_Unit_mindustry_type_Item_R_mindustry_world_Tile, "(Lmindustry/gen/Unit;Lmindustry/type/Item;)Lmindustry/world/Tile;", 1 },
	{ "process", (intptr_t) M_mindustry_ai_BlockIndexer_process_mindustry_world_Tile, VTABLE_mindustry_ai_BlockIndexer_process_mindustry_world_Tile, "(Lmindustry/world/Tile;)V", 2 },
	{ "lambda$process$0", (intptr_t) SM_mindustry_ai_BlockIndexer_lambda$process$0_R_arc_struct_Seq, 0, "()Larc/struct/Seq;", 4106 },
	{ "lambda$findEnemyTile$0", (intptr_t) SM_mindustry_ai_BlockIndexer_lambda$findEnemyTile$0_arc_func_Boolf_mindustry_game_Team_mindustry_gen_Building_R_boolean, 0, "(Larc/func/Boolf;Lmindustry/game/Team;Lmindustry/gen/Building;)Z", 4106 },
	{ "lambda$eachBlock$2", (intptr_t) M_mindustry_ai_BlockIndexer_lambda$eachBlock$2_arc_func_Boolf_mindustry_gen_Building, VTABLE_mindustry_ai_BlockIndexer_lambda$eachBlock$2_arc_func_Boolf_mindustry_gen_Building, "(Larc/func/Boolf;Lmindustry/gen/Building;)V", 4098 },
	{ "lambda$eachBlock$1", (intptr_t) M_mindustry_ai_BlockIndexer_lambda$eachBlock$1_float_float_float_arc_func_Boolf_mindustry_gen_Building, VTABLE_mindustry_ai_BlockIndexer_lambda$eachBlock$1_float_float_float_arc_func_Boolf_mindustry_gen_Building, "(FFFLarc/func/Boolf;Lmindustry/gen/Building;)V", 4098 },
	{ "lambda$eachBlock$0", (intptr_t) SM_mindustry_ai_BlockIndexer_lambda$eachBlock$0_arc_func_Boolf_arc_func_Cons_mindustry_gen_Building, 0, "(Larc/func/Boolf;Larc/func/Cons;Lmindustry/gen/Building;)V", 4106 },
	{ "lambda$getDamaged$0", (intptr_t) SM_mindustry_ai_BlockIndexer_lambda$getDamaged$0_mindustry_gen_Building_R_boolean, 0, "(Lmindustry/gen/Building;)Z", 4106 },
	{ "lambda$addIndex$0", (intptr_t) M_mindustry_ai_BlockIndexer_lambda$addIndex$0_mindustry_world_Tile, VTABLE_mindustry_ai_BlockIndexer_lambda$addIndex$0_mindustry_world_Tile, "(Lmindustry/world/Tile;)V", 4098 },
	{ "lambda$removeIndex$0", (intptr_t) SM_mindustry_ai_BlockIndexer_lambda$removeIndex$0_R_arc_struct_Seq, 0, "()Larc/struct/Seq;", 4106 },
	{ "lambda$new$3", (intptr_t) M_mindustry_ai_BlockIndexer_lambda$new$3_mindustry_game_EventType$WorldLoadEvent, VTABLE_mindustry_ai_BlockIndexer_lambda$new$3_mindustry_game_EventType$WorldLoadEvent, "(Lmindustry/game/EventType$WorldLoadEvent;)V", 4098 },
	{ "lambda$new$2", (intptr_t) M_mindustry_ai_BlockIndexer_lambda$new$2_mindustry_game_EventType$TileFloorChangeEvent, VTABLE_mindustry_ai_BlockIndexer_lambda$new$2_mindustry_game_EventType$TileFloorChangeEvent, "(Lmindustry/game/EventType$TileFloorChangeEvent;)V", 4098 },
	{ "lambda$new$1", (intptr_t) M_mindustry_ai_BlockIndexer_lambda$new$1_mindustry_game_EventType$TileChangeEvent, VTABLE_mindustry_ai_BlockIndexer_lambda$new$1_mindustry_game_EventType$TileChangeEvent, "(Lmindustry/game/EventType$TileChangeEvent;)V", 4098 },
	{ "lambda$new$0", (intptr_t) M_mindustry_ai_BlockIndexer_lambda$new$0_mindustry_game_EventType$TilePreChangeEvent, VTABLE_mindustry_ai_BlockIndexer_lambda$new$0_mindustry_game_EventType$TilePreChangeEvent, "(Lmindustry/game/EventType$TilePreChangeEvent;)V", 4098 },
	{ "<clinit>", (intptr_t) clinit_mindustry_ai_BlockIndexer, 0, "()V", 8 },
};

Class class_mindustry_ai_BlockIndexer{
		.nativeName = (intptr_t) "mindustry/ai/BlockIndexer",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_ai_BlockIndexer),
		.classVtable = (intptr_t) vtable_mindustry_ai_BlockIndexer,
		.staticInitializer = (intptr_t) clinit_mindustry_ai_BlockIndexer,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_ai_BlockIndexer,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 16,
		.nativeFields = (intptr_t) fields,
		.methodCount = 46,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 50,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_ai_BlockIndexer = registerClass(&class_mindustry_ai_BlockIndexer);

}
