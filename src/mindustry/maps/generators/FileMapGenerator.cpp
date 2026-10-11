#include "mindustry/maps/generators/FileMapGenerator.h"
#include "java/lang/reflect/Constructor.h"
#include "mindustry/maps/Maps.h"
#include "mindustry/world/WorldParams.h"
#include "arc/struct/Seq.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/world/Tile.h"
#include "mindustry/maps/generators/FileMapGenerator_1.h"
#include "arc/func/Boolf.h"
#include "mindustry/maps/Map.h"
#include "java/lang/reflect/Field.h"
#include "java/util/Iterator.h"
#include "mindustry/type/Item.h"
#include "arc/util/Nullable.h"
#include "mindustry/world/modules/ItemModule.h"
#include "mindustry/gen/Building.h"
#include "java/lang/Object.h"
#include "mindustry/io/SaveIO.h"
#include "mindustry/game/Schematics.h"
#include "java/lang/RuntimeException.h"
#include "mindustry/maps/generators/WorldGenerator.h"
#include "mindustry/world/blocks/storage/CoreBlock.h"
#include "mindustry/type/SectorPreset.h"
#include "mindustry/ctype/Content_ModContentInfo.h"
#include "arc/func/Intc2.h"
#include "mindustry/world/Block.h"
#include "mindustry/game/Rules.h"
#include "mindustry/core/FileTree.h"
#include "mindustry/world/blocks/storage/CoreBlock_CoreBuild.h"
#include "arc/files/Fi.h"
#include "java/lang/Iterable.h"
#include "mindustry/world/Tiles.h"
#include "java/lang/String.h"
#include "mindustry/world/WorldContext.h"
#include "mindustry/world/blocks/environment/Floor.h"
#include "arc/math/geom/Geometry.h"
#include "java/lang/annotation/Annotation.h"
#include "java/lang/IllegalArgumentException.h"
#include "mindustry/maps/generators/FileMapGenerator_invoke_arc_func_Boolf_1.h"
#include "mindustry/type/Sector.h"
#include "mindustry/maps/generators/FileMapGenerator_invoke_arc_func_Intc2_1.h"
#include "mindustry/content/Blocks.h"
#include "mindustry/maps/generators/FileMapGenerator.h"
#include "mindustry/mod/Mods_LoadedMod.h"
#include "mindustry/type/Planet.h"
#include "java/util/Objects.h"
#include "mindustry/game/Team.h"
#include "mindustry/Vars.h"
#include "mindustry/core/GameState.h"
#include "mindustry/core/World.h"

extern "C" {


void mark_mindustry_maps_generators_FileMapGenerator(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_maps_generators_FileMapGenerator *) object;
	if (self->F_map)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_map)->clazz)->markFunction)((jobject) self->F_map, mark, depth + 1);
	if (self->F_preset)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_preset)->clazz)->markFunction)((jobject) self->F_preset, mark, depth + 1);
}

void clinit_mindustry_maps_generators_FileMapGenerator(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_maps_generators_FileMapGenerator_java_lang_String_mindustry_type_SectorPreset(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/generators/FileMapGenerator:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_generators_FileMapGenerator(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(22);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(23);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_maps;
	if (sp[0].o != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(24);
	((mindustry_maps_generators_FileMapGenerator *) NULL_CHECK((frame[0].o)))->F_map = (jref) (jobject(nullptr));
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(26);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq_int(ctx, sp[0].o, (jint(4)));
	frame[3].o = sp[0].o;
	LINE_NUMBER(29);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((mindustry_type_SectorPreset *) NULL_CHECK((frame[2].o)))->F_planet;
	sp[1].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK(sp[1].o))->F_name;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001/\u0001"_j.string, 2, sp[1].o, (frame[1].o));
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(32);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, (frame[3].o), (frame[1].o));
	LINE_NUMBER(35);
	sp[0].o = (jobject)((mindustry_ctype_Content *) NULL_CHECK((frame[2].o)))->F_minfo;
	sp[0].o = (jobject)((mindustry_ctype_Content$ModContentInfo *) NULL_CHECK(sp[0].o))->F_mod;
	if (sp[0].o == nullptr) goto label_8;
	}
	{
	LINE_NUMBER(36);
	sp[0].o = frame[1].o;
	jint temp0 = jint(1);
	sp[1].o = (jobject)((mindustry_ctype_Content *) NULL_CHECK((frame[2].o)))->F_minfo;
	sp[1].o = (jobject)((mindustry_ctype_Content$ModContentInfo *) NULL_CHECK(sp[1].o))->F_mod;
	sp[1].o = (jobject)((mindustry_mod_Mods$LoadedMod *) NULL_CHECK(sp[1].o))->F_name;
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, sp[0].o, (temp0 + temp1));
	frame[4].o = sp[0].o;
	LINE_NUMBER(39);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((mindustry_type_SectorPreset *) NULL_CHECK((frame[2].o)))->F_planet;
	sp[1].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK(sp[1].o))->F_name;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001/\u0001"_j.string, 2, sp[1].o, (frame[4].o));
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(42);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, (frame[3].o), (frame[4].o));
	}
label_8:;
	{
	LINE_NUMBER(46);
	sp[0].o = frame[3].o;
	{ /* InvokeDynamic */
		clinit_mindustry_maps_generators_FileMapGenerator_invoke_arc_func_Boolf_1(ctx);
		auto proxy = (mindustry_maps_generators_FileMapGenerator_invoke_arc_func_Boolf_1 *) gcAlloc(ctx, &class_mindustry_maps_generators_FileMapGenerator_invoke_arc_func_Boolf_1);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_find_arc_func_Boolf_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_find_arc_func_Boolf_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	frame[4].o = (checkCast(ctx, &class_java_lang_String, sp[0].o));
	LINE_NUMBER(48);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_maps;
	sp += 2;
	if ((frame[4].o) != nullptr) goto label_13;
	}
	{
	sp[0].o = (jobject)((func_arc_struct_Seq_first_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_Seq_first_R_java_lang_Object])(ctx, (frame[3].o));
	sp[0].o = checkCast(ctx, &class_java_lang_String, sp[0].o);
	sp += 1;
	goto label_14;
	}
label_13:;
	INST_ALOAD(4);
label_14:;
	POP_N(2); // Pop method args
	sp->o = (jobject)((func_mindustry_maps_Maps_loadInternalMap_java_lang_String_R_mindustry_maps_Map) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_maps_Maps_loadInternalMap_java_lang_String_R_mindustry_maps_Map])(ctx, sp[0].o, sp[1].o);
	sp++;
	sp -= 2;
	((mindustry_maps_generators_FileMapGenerator *) NULL_CHECK(sp[0].o))->F_map = (jref) sp[1].o;
label_4:;
	{
	LINE_NUMBER(51);
	((mindustry_maps_generators_FileMapGenerator *) NULL_CHECK((frame[0].o)))->F_preset = (jref) (frame[2].o);
	LINE_NUMBER(52);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_maps_generators_FileMapGenerator_mindustry_maps_Map_mindustry_type_SectorPreset(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/generators/FileMapGenerator:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_generators_FileMapGenerator(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(54);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(55);
	((mindustry_maps_generators_FileMapGenerator *) NULL_CHECK((frame[0].o)))->F_map = (jref) (frame[1].o);
	LINE_NUMBER(56);
	((mindustry_maps_generators_FileMapGenerator *) NULL_CHECK((frame[0].o)))->F_preset = (jref) (frame[2].o);
	LINE_NUMBER(57);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_maps_generators_FileMapGenerator_mindustry_type_SectorPreset(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/generators/FileMapGenerator:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_generators_FileMapGenerator(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(61);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_emptyMap;
	init_mindustry_maps_generators_FileMapGenerator_mindustry_maps_Map_mindustry_type_SectorPreset(ctx, sp[0].o, sp[1].o, (frame[1].o));
	LINE_NUMBER(62);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_maps_generators_FileMapGenerator_generate_mindustry_world_Tiles_mindustry_world_WorldParams(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/generators/FileMapGenerator:generate", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(66);
	sp[0].o = (jobject)((mindustry_maps_generators_FileMapGenerator *) NULL_CHECK((frame[0].o)))->F_map;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Generator has null map, cannot be used."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(68);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_sector;
	frame[3].o = sp[0].o;
	if (frame[3].o == nullptr && ((mindustry_maps_generators_FileMapGenerator *)frame[0].o)->F_preset != 0) {
		frame[3].o = (jobject)((mindustry_type_SectorPreset *)((mindustry_maps_generators_FileMapGenerator *)frame[0].o)->F_preset)->F_sector;
	}
	LINE_NUMBER(70);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	((func_mindustry_core_World_setGenerating_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_setGenerating_boolean])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(71);
	sp[0].o = (jobject)((mindustry_maps_generators_FileMapGenerator *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((mindustry_maps_Map *) NULL_CHECK(sp[0].o))->F_file;
	clinit_mindustry_maps_generators_FileMapGenerator$1(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_maps_generators_FileMapGenerator$1);
	sp[2].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[3].o = (jobject)SF_mindustry_Vars_world;
	sp[4].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[3].o);
	sp[4].o = (jobject)((mindustry_maps_generators_FileMapGenerator *) NULL_CHECK((frame[0].o)))->F_map;
	init_mindustry_maps_generators_FileMapGenerator$1_mindustry_maps_generators_FileMapGenerator_mindustry_core_World_mindustry_maps_Map_mindustry_type_Sector(ctx, sp[1].o, sp[2].o, sp[3].o, sp[4].o, (frame[3].o));
	SM_mindustry_io_SaveIO_load_arc_files_Fi_mindustry_world_WorldContext(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(83);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	((func_mindustry_core_World_setGenerating_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_setGenerating_boolean])(ctx, sp[0].o, (jint(1)));
	LINE_NUMBER(86);
	if ((frame[3].o) == nullptr) goto label_6;
	}
	{
	LINE_NUMBER(87);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_sector = (jref) (frame[3].o);
	}
label_6:;
	{
	LINE_NUMBER(90);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = sp[0].o != nullptr ? (jobject)((mindustry_core_World *) sp[0].o)->F_tiles : nullptr;
	if (sp[0].o == nullptr) sp[0].o = frame[1].o;
	frame[1].o = sp[0].o;
	LINE_NUMBER(92);
	frame[4].i = (jint(0));
	LINE_NUMBER(95);
	clinit_mindustry_Vars(ctx);
	{
		jobject stateObj = (jobject)SF_mindustry_Vars_state;
		mindustry_game_Rules *rulesObj = stateObj != nullptr ? (mindustry_game_Rules *)((mindustry_core_GameState *)stateObj)->F_rules : nullptr;
		mindustry_game_Team *teamObj = rulesObj != nullptr ? (mindustry_game_Team *)rulesObj->F_defaultTeam : nullptr;
		if (teamObj == nullptr) {
			clinit_mindustry_game_Team(ctx);
			teamObj = (mindustry_game_Team *)SF_mindustry_game_Team_sharded;
			if (rulesObj != nullptr) {
				rulesObj->F_defaultTeam = (jref)teamObj;
			}
		}

		jobject coreBlock = nullptr;
		if (teamObj != nullptr) {
			jobject coresSeq = (jobject)((func_mindustry_game_Team_cores_R_arc_struct_Seq) ((void **) nullCheck(ctx, (jobject)teamObj)->vtable)[VTABLE_mindustry_game_Team_cores_R_arc_struct_Seq])(ctx, (jobject)teamObj);
			jint hasNoCores = (coresSeq == nullptr) ? 1 : (jint)((func_arc_struct_Seq_isEmpty_R_boolean) ((void **) nullCheck(ctx, coresSeq)->vtable)[VTABLE_arc_struct_Seq_isEmpty_R_boolean])(ctx, coresSeq);
			if (!hasNoCores) {
				jobject coreBuilding = (jobject)((func_mindustry_game_Team_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild) ((void **) nullCheck(ctx, (jobject)teamObj)->vtable)[VTABLE_mindustry_game_Team_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild])(ctx, (jobject)teamObj);
				if (coreBuilding != nullptr) {
					coreBlock = (jobject)((mindustry_gen_Building *)coreBuilding)->F_block;
				}
			}
		}

		if (coreBlock == nullptr) {
			if (frame[3].o != nullptr && ((mindustry_type_Sector *)frame[3].o)->F_planet != 0) {
				coreBlock = (jobject)((mindustry_type_Planet *)((mindustry_type_Sector *)frame[3].o)->F_planet)->F_defaultCore;
			} else if (((mindustry_maps_generators_FileMapGenerator *)frame[0].o)->F_preset != 0 && ((mindustry_type_SectorPreset *)((mindustry_maps_generators_FileMapGenerator *)frame[0].o)->F_preset)->F_planet != 0) {
				coreBlock = (jobject)((mindustry_type_Planet *)((mindustry_type_SectorPreset *)((mindustry_maps_generators_FileMapGenerator *)frame[0].o)->F_preset)->F_planet)->F_defaultCore;
			}
		}

		if (coreBlock == nullptr) {
			clinit_mindustry_content_Blocks(ctx);
			coreBlock = (jobject)SF_mindustry_content_Blocks_coreShard;
		}

		frame[5].o = coreBlock;
	}
	LINE_NUMBER(97);
	if (frame[1].o != nullptr) {
		sp[0].o = (jobject)((func_mindustry_world_Tiles_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tiles_iterator_R_java_util_Iterator])(ctx, (frame[1].o));
		frame[6].o = sp[0].o;
	} else {
		popStackFrame(ctx);
		return;
	}
	}
label_13:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[6].o)))(ctx, (frame[6].o));
	if (temp0 == 0) goto label_14;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o));
	frame[7].o = (checkCast(ctx, &class_mindustry_world_Tile, sp[0].o));
	LINE_NUMBER(99);
	sp[0].o = (jobject)((func_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[7].o));
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_spawn;
	if (sp[0].o != sp[1].o) goto label_16;
	}
	{
	LINE_NUMBER(100);
	frame[8].i = (10);
	LINE_NUMBER(101);
	jint temp0 = (jint)((mindustry_world_Tile *) NULL_CHECK((frame[7].o)))->F_x;
	jint temp1 = (jint)((mindustry_world_Tile *) NULL_CHECK((frame[7].o)))->F_y;
	jint temp2 = (jint)((mindustry_world_Tiles *) NULL_CHECK((frame[1].o)))->F_width;
	jint temp3 = (jint)((mindustry_world_Tiles *) NULL_CHECK((frame[1].o)))->F_height;
	jint temp4 = frame[8].i;
	{ /* InvokeDynamic */
		clinit_mindustry_maps_generators_FileMapGenerator_invoke_arc_func_Intc2_1(ctx);
		auto proxy = (mindustry_maps_generators_FileMapGenerator_invoke_arc_func_Intc2_1 *) gcAlloc(ctx, &class_mindustry_maps_generators_FileMapGenerator_invoke_arc_func_Intc2_1);
		proxy->F_field0 = (jref) (frame[7].o);
		sp[0].o = (jobject) proxy;
	}
	SM_arc_math_geom_Geometry_circle_int_int_int_int_int_arc_func_Intc2(ctx, temp0, temp1, temp2, temp3, temp4, sp[0].o);
	}
label_16:;
	{
	LINE_NUMBER(108);
	if (((jint)((mindustry_world_WorldParams *) NULL_CHECK((frame[2].o)))->F_corePositionOverride) == 0) goto label_19;
	}
	INST_ALOAD(3);
	if ((--sp)->o == nullptr) goto label_19;
	{
	LINE_NUMBER(109);
	jint temp0 = (jint)((func_mindustry_world_Tile_pos_R_int) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_world_Tile_pos_R_int])(ctx, (frame[7].o));
	if (temp0 != ((jint)((mindustry_world_WorldParams *) NULL_CHECK((frame[2].o)))->F_corePositionOverride)) goto label_21;
	}
	{
	LINE_NUMBER(110);
	jint temp0 = (jint)((func_mindustry_type_Sector_allowLaunchLoadout_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_type_Sector_allowLaunchLoadout_R_boolean])(ctx, (frame[3].o));
	if (temp0 == 0) goto label_23;
	}
	{
	LINE_NUMBER(111);
	SM_mindustry_game_Schematics_placeLaunchLoadout_int_int(ctx, ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[7].o)))->F_x), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[7].o)))->F_y));
	goto label_25;
	}
label_23:;
	{
	LINE_NUMBER(114);
	sp[0].o = frame[7].o;
	sp[1].o = frame[5].o;
	clinit_mindustry_Vars(ctx);
	sp[2].o = (jobject)SF_mindustry_Vars_state;
	sp[2].o = sp[2].o != nullptr ? (jobject)((mindustry_core_GameState *)sp[2].o)->F_rules : nullptr;
	sp[2].o = sp[2].o != nullptr ? (jobject)((mindustry_game_Rules *)sp[2].o)->F_defaultTeam : nullptr;
	if (sp[2].o == nullptr) {
		clinit_mindustry_game_Team(ctx);
		sp[2].o = (jobject)SF_mindustry_game_Team_sharded;
	}
	((func_mindustry_world_Tile_setBlock_mindustry_world_Block_mindustry_game_Team_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_setBlock_mindustry_world_Block_mindustry_game_Team_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (jint(0)));
	}
label_25:;
	{
	LINE_NUMBER(116);
	frame[4].i = (jint(1));
	LINE_NUMBER(118);
	sp[0].o = (jobject)((mindustry_maps_generators_FileMapGenerator *) NULL_CHECK((frame[0].o)))->F_preset;
	if (sp[0].o != nullptr && ((jint)((mindustry_type_SectorPreset *) sp[0].o)->F_addStartingItems) != 0) goto label_27;
	}
	{
	sp[0].o = (jobject)((mindustry_maps_generators_FileMapGenerator *) NULL_CHECK((frame[0].o)))->F_preset;
	if (sp[0].o != nullptr && ((mindustry_type_SectorPreset *) sp[0].o)->F_planet != 0 && ((jint)((mindustry_type_Planet *) ((mindustry_type_SectorPreset *) sp[0].o)->F_planet)->F_allowLaunchLoadout) != 0) goto label_28;
	}
label_27:;
	{
	LINE_NUMBER(119);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[7].o)))->F_build;
	if (sp[0].o != nullptr) {
		sp[0].o = (jobject)((mindustry_gen_Building *) sp[0].o)->F_items;
		if (sp[0].o != nullptr) {
			((func_mindustry_world_modules_ItemModule_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_clear])(ctx, sp[0].o);
		}
	}
	LINE_NUMBER(120);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[7].o)))->F_build;
	if (sp[0].o != nullptr) {
		sp[0].o = (jobject)((mindustry_gen_Building *) sp[0].o)->F_items;
		if (sp[0].o != nullptr) {
			clinit_mindustry_Vars(ctx);
			sp[1].o = (jobject)SF_mindustry_Vars_state;
			sp[1].o = sp[1].o != nullptr ? (jobject)((mindustry_core_GameState *)sp[1].o)->F_rules : nullptr;
			sp[1].o = sp[1].o != nullptr ? (jobject)((mindustry_game_Rules *)sp[1].o)->F_loadout : nullptr;
			if (sp[1].o != nullptr) {
				((func_mindustry_world_modules_ItemModule_add_java_lang_Iterable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_add_java_lang_Iterable])(ctx, sp[0].o, sp[1].o);
			}
		}
	}
	goto label_28;
	}
label_21:;
	{
	LINE_NUMBER(122);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[7].o)))->F_build;
	if ((isInstance(ctx, sp[0].o, &class_mindustry_world_blocks_storage_CoreBlock$CoreBuild)) == 0) goto label_28;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_world_Tile_team_R_mindustry_game_Team])(ctx, (frame[7].o));
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = sp[1].o != nullptr ? (jobject)((mindustry_core_GameState *)sp[1].o)->F_rules : nullptr;
	sp[1].o = sp[1].o != nullptr ? (jobject)((mindustry_game_Rules *)sp[1].o)->F_defaultTeam : nullptr;
	if (sp[0].o != sp[1].o) goto label_28;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[7].o)))->F_build;
	jint temp0 = (jint)((func_mindustry_gen_Building_pos_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_pos_R_int])(ctx, sp[0].o);
	if (temp0 == ((jint)((mindustry_world_WorldParams *) NULL_CHECK((frame[2].o)))->F_corePositionOverride)) goto label_28;
	}
	{
	LINE_NUMBER(124);
	((func_mindustry_world_Tile_remove) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_world_Tile_remove])(ctx, (frame[7].o));
	goto label_28;
	}
label_19:;
	{
	LINE_NUMBER(126);
	jint temp0 = (jint)((func_mindustry_world_Tile_isCenter_R_boolean) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_world_Tile_isCenter_R_boolean])(ctx, (frame[7].o));
	if (temp0 == 0) goto label_28;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[7].o));
	if ((isInstance(ctx, sp[0].o, &class_mindustry_world_blocks_storage_CoreBlock)) == 0) goto label_28;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_world_Tile_team_R_mindustry_game_Team])(ctx, (frame[7].o));
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = sp[1].o != nullptr ? (jobject)((mindustry_core_GameState *)sp[1].o)->F_rules : nullptr;
	sp[1].o = sp[1].o != nullptr ? (jobject)((mindustry_game_Rules *)sp[1].o)->F_defaultTeam : nullptr;
	if (sp[0].o != sp[1].o) goto label_28;
	}
	INST_ILOAD(4);
	if ((--sp)->i != 0) goto label_28;
	{
	LINE_NUMBER(127);
	if ((frame[3].o) == nullptr) goto label_32;
	}
	{
	jint temp0 = (jint)((func_mindustry_type_Sector_allowLaunchLoadout_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_type_Sector_allowLaunchLoadout_R_boolean])(ctx, (frame[3].o));
	if (temp0 == 0) goto label_32;
	}
	{
	LINE_NUMBER(128);
	SM_mindustry_game_Schematics_placeLaunchLoadout_int_int(ctx, ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[7].o)))->F_x), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[7].o)))->F_y));
	}
label_32:;
	{
	LINE_NUMBER(130);
	frame[4].i = (jint(1));
	LINE_NUMBER(132);
	sp[0].o = (jobject)((mindustry_maps_generators_FileMapGenerator *) NULL_CHECK((frame[0].o)))->F_preset;
	if (sp[0].o != nullptr && ((jint)((mindustry_type_SectorPreset *) sp[0].o)->F_addStartingItems) != 0) goto label_35;
	}
	{
	sp[0].o = (jobject)((mindustry_maps_generators_FileMapGenerator *) NULL_CHECK((frame[0].o)))->F_preset;
	if (sp[0].o != nullptr && ((mindustry_type_SectorPreset *) sp[0].o)->F_planet != 0 && ((jint)((mindustry_type_Planet *) ((mindustry_type_SectorPreset *) sp[0].o)->F_planet)->F_allowLaunchLoadout) != 0) goto label_28;
	}
label_35:;
	{
	LINE_NUMBER(133);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[7].o)))->F_build;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_items;
	((func_mindustry_world_modules_ItemModule_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_clear])(ctx, sp[0].o);
	LINE_NUMBER(134);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[7].o)))->F_build;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_items;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_loadout;
	((func_mindustry_world_modules_ItemModule_add_java_lang_Iterable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_add_java_lang_Iterable])(ctx, sp[0].o, sp[1].o);
	}
label_28:;
	LINE_NUMBER(137);
	goto label_13;
label_14:;
	{
	LINE_NUMBER(139);
	if ((frame[4].i) != 0) goto label_37;
	}
	{
	LINE_NUMBER(140);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"All maps must have a core."_j))));
	throwException(ctx, sp[0].o);	}
label_37:;
	{
	LINE_NUMBER(143);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_maps_generators_FileMapGenerator *) NULL_CHECK((frame[0].o)))->F_map;
	((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_map = (jref) sp[1].o;
	LINE_NUMBER(144);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_maps_generators_FileMapGenerator_lambda$generate$0_mindustry_world_Tile_int_int(jcontext ctx, jobject param0, jint param1, jint param2) {
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/generators/FileMapGenerator:lambda$generate$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_generators_FileMapGenerator(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(102);
	sp[0].o = (jobject)((func_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[0].o));
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_itemDrop;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(103);
	((func_mindustry_world_Tile_clearOverlay) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Tile_clearOverlay])(ctx, (frame[0].o));
	}
label_1:;
	LINE_NUMBER(105);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_maps_generators_FileMapGenerator_lambda$new$0_java_lang_String_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/generators/FileMapGenerator:lambda$new$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_generators_FileMapGenerator(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(46);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_tree;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"maps/\u0001.msav"_j.string, 1, (frame[0].o));
	sp[0].o = (jobject)((func_mindustry_core_FileTree_get_java_lang_String_R_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_FileTree_get_java_lang_String_R_arc_files_Fi])(ctx, sp[0].o, sp[1].o);
	jint temp0 = (jint)((func_arc_files_Fi_exists_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_exists_R_boolean])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_maps_generators_FileMapGenerator;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	{ // Field map
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[0]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[1])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[2])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_maps_generators_FileMapGenerator[] {
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
	(void *) M_mindustry_maps_generators_FileMapGenerator_generate_mindustry_world_Tiles_mindustry_world_WorldParams,
	(void *) M_mindustry_maps_generators_WorldGenerator_postGenerate_mindustry_world_Tiles,
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
	{ "generate", "(Lmindustry/world/Tiles;Lmindustry/world/WorldParams;)V" },
	{ "postGenerate", "(Lmindustry/world/Tiles;)V" },
};

static jclass interfaces[] { &class_mindustry_maps_generators_WorldGenerator, };

static FieldMetadata fields[] {
	{ "map", &class_mindustry_maps_Map, offsetof(mindustry_maps_generators_FileMapGenerator, F_map), "Lmindustry/maps/Map;", 17 },
	{ "preset", &class_mindustry_type_SectorPreset, offsetof(mindustry_maps_generators_FileMapGenerator, F_preset), "Lmindustry/type/SectorPreset;", 17 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_maps_generators_FileMapGenerator_java_lang_String_mindustry_type_SectorPreset, 0, "(Ljava/lang/String;Lmindustry/type/SectorPreset;)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_maps_generators_FileMapGenerator_mindustry_maps_Map_mindustry_type_SectorPreset, 0, "(Lmindustry/maps/Map;Lmindustry/type/SectorPreset;)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_maps_generators_FileMapGenerator_mindustry_type_SectorPreset, 0, "(Lmindustry/type/SectorPreset;)V", 1 },
	{ "generate", (intptr_t) M_mindustry_maps_generators_FileMapGenerator_generate_mindustry_world_Tiles_mindustry_world_WorldParams, VTABLE_mindustry_maps_generators_FileMapGenerator_generate_mindustry_world_Tiles_mindustry_world_WorldParams, "(Lmindustry/world/Tiles;Lmindustry/world/WorldParams;)V", 1 },
	{ "lambda$generate$0", (intptr_t) SM_mindustry_maps_generators_FileMapGenerator_lambda$generate$0_mindustry_world_Tile_int_int, 0, "(Lmindustry/world/Tile;II)V", 4106 },
	{ "lambda$new$0", (intptr_t) SM_mindustry_maps_generators_FileMapGenerator_lambda$new$0_java_lang_String_R_boolean, 0, "(Ljava/lang/String;)Z", 4106 },
};

Class class_mindustry_maps_generators_FileMapGenerator{
		.nativeName = (intptr_t) "mindustry/maps/generators/FileMapGenerator",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_maps_generators_FileMapGenerator),
		.classVtable = (intptr_t) vtable_mindustry_maps_generators_FileMapGenerator,
		.staticInitializer = (intptr_t) clinit_mindustry_maps_generators_FileMapGenerator,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_maps_generators_FileMapGenerator,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 13,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_maps_generators_FileMapGenerator = registerClass(&class_mindustry_maps_generators_FileMapGenerator);

}
