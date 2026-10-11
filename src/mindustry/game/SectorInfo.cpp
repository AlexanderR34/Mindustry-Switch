#include "mindustry/game/SectorInfo.h"
#include "arc/func/Prov.h"
#include "mindustry/game/SectorInfo_ExportStat.h"
#include "arc/struct/ObjectFloatMap.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "java/lang/reflect/Constructor.h"
#include "mindustry/ai/BlockIndexer.h"
#include "mindustry/core/ContentLoader.h"
#include "java/util/Arrays.h"
#include "arc/struct/Seq.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/game/SectorInfo.h"
#include "mindustry/game/SectorInfo_invoke_arc_func_Boolf_1.h"
#include "arc/func/Boolf.h"
#include "mindustry/game/SectorInfo_invoke_arc_func_Prov_10.h"
#include "mindustry/game/SectorInfo_invoke_arc_func_Prov_11.h"
#include "mindustry/game/SectorInfo_invoke_arc_func_Cons2_9.h"
#include "arc/math/Mathf.h"
#include "mindustry/maps/Map.h"
#include "arc/func/Floatf.h"
#include "mindustry/game/SectorInfo_invoke_arc_func_Cons2_7.h"
#include "java/lang/reflect/Field.h"
#include "java/util/Iterator.h"
#include "mindustry/game/SectorInfo_invoke_arc_func_Cons2_8.h"
#include "mindustry/gen/Unit.h"
#include "arc/util/Structs.h"
#include "mindustry/type/Item.h"
#include "arc/util/Nullable.h"
#include "arc/util/Interval.h"
#include "arc/func/Cons2.h"
#include "mindustry/world/modules/ItemModule.h"
#include "mindustry/gen/Building.h"
#include "java/lang/Object.h"
#include "mindustry/ai/WaveSpawner.h"
#include "arc/struct/ObjectMap.h"
#include "mindustry/type/SectorPreset.h"
#include "mindustry/type/ItemSeq.h"
#include "mindustry/game/SectorInfo_invoke_arc_func_Floatf_2.h"
#include "mindustry/game/SectorInfo_invoke_arc_func_Floatf_3.h"
#include "mindustry/net/Net.h"
#include "mindustry/world/Block.h"
#include "arc/math/WindowedMean.h"
#include "mindustry/maps/generators/PlanetGenerator.h"
#include "mindustry/game/SectorInfo_invoke_arc_func_Cons2_10.h"
#include "mindustry/game/Rules.h"
#include "mindustry/game/SectorInfo_invoke_arc_func_Cons2_11.h"
#include "mindustry/world/blocks/storage/CoreBlock_CoreBuild.h"
#include "mindustry/game/SectorInfo_invoke_arc_func_Cons_2.h"
#include "arc/func/Cons.h"
#include "java/lang/String.h"
#include "mindustry/game/SectorInfo_invoke_arc_func_Cons_3.h"
#include "mindustry/game/SectorInfo_invoke_arc_func_Cons2_6.h"
#include "mindustry/world/meta/BlockFlag.h"
#include "mindustry/game/SectorInfo_invoke_mindustry_world_modules_ItemModule_ItemConsumer_1.h"
#include "java/lang/Math.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/game/Teams_TeamData.h"
#include "mindustry/type/Sector.h"
#include "mindustry/type/UnitType.h"
#include "mindustry/world/modules/ItemModule_ItemConsumer.h"
#include "mindustry/content/Blocks.h"
#include "mindustry/maps/generators/FileMapGenerator.h"
#include "mindustry/type/ItemStack.h"
#include "mindustry/type/Planet.h"
#include "mindustry/game/SectorInfo_invoke_arc_func_Prov_9.h"
#include "mindustry/game/SectorInfo_invoke_arc_func_Prov_8.h"
#include "mindustry/game/Team.h"
#include "mindustry/Vars.h"
#include "mindustry/game/SectorInfo_invoke_arc_func_Prov_7.h"
#include "mindustry/core/GameState.h"
#include "mindustry/core/World.h"
#include "mindustry/game/SectorInfo_invoke_arc_func_Prov_6.h"

extern "C" {

jint SF_mindustry_game_SectorInfo_valueWindow;
jfloat SF_mindustry_game_SectorInfo_refreshPeriod;
jfloat SF_mindustry_game_SectorInfo_returnf;

void mark_mindustry_game_SectorInfo(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_game_SectorInfo *) object;
	if (self->F_production)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_production)->clazz)->markFunction)((jobject) self->F_production, mark, depth + 1);
	if (self->F_rawProduction)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_rawProduction)->clazz)->markFunction)((jobject) self->F_rawProduction, mark, depth + 1);
	if (self->F_export)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_export)->clazz)->markFunction)((jobject) self->F_export, mark, depth + 1);
	if (self->F_imports)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_imports)->clazz)->markFunction)((jobject) self->F_imports, mark, depth + 1);
	if (self->F_items)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_items)->clazz)->markFunction)((jobject) self->F_items, mark, depth + 1);
	if (self->F_bestCoreType)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_bestCoreType)->clazz)->markFunction)((jobject) self->F_bestCoreType, mark, depth + 1);
	if (self->F_lastPresetName)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lastPresetName)->clazz)->markFunction)((jobject) self->F_lastPresetName, mark, depth + 1);
	if (self->F_origin)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_origin)->clazz)->markFunction)((jobject) self->F_origin, mark, depth + 1);
	if (self->F_destination)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_destination)->clazz)->markFunction)((jobject) self->F_destination, mark, depth + 1);
	if (self->F_resources)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_resources)->clazz)->markFunction)((jobject) self->F_resources, mark, depth + 1);
	if (self->F_name)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_name)->clazz)->markFunction)((jobject) self->F_name, mark, depth + 1);
	if (self->F_icon)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_icon)->clazz)->markFunction)((jobject) self->F_icon, mark, depth + 1);
	if (self->F_contentIcon)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_contentIcon)->clazz)->markFunction)((jobject) self->F_contentIcon, mark, depth + 1);
	if (self->F_importCooldownTimers)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_importCooldownTimers)->clazz)->markFunction)((jobject) self->F_importCooldownTimers, mark, depth + 1);
	if (self->F_importRateCache)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_importRateCache)->clazz)->markFunction)((jobject) self->F_importRateCache, mark, depth + 1);
	if (self->F_lastImported)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lastImported)->clazz)->markFunction)((jobject) self->F_lastImported, mark, depth + 1);
	if (self->F_time)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_time)->clazz)->markFunction)((jobject) self->F_time, mark, depth + 1);
	if (self->F_coreDeltas)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_coreDeltas)->clazz)->markFunction)((jobject) self->F_coreDeltas, mark, depth + 1);
	if (self->F_productionDeltas)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_productionDeltas)->clazz)->markFunction)((jobject) self->F_productionDeltas, mark, depth + 1);
}

void clinit_mindustry_game_SectorInfo(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_mindustry_game_SectorInfo_valueWindow = jint(60);
	SF_mindustry_game_SectorInfo_refreshPeriod = jfloat(60.0f);
}

void init_mindustry_game_SectorInfo(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/SectorInfo:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_SectorInfo(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(19);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(27);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectMap);
	init_arc_struct_ObjectMap(ctx, sp[1].o);
	((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_production = (jref) sp[1].o;
	LINE_NUMBER(29);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectMap);
	init_arc_struct_ObjectMap(ctx, sp[1].o);
	((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_rawProduction = (jref) sp[1].o;
	LINE_NUMBER(31);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectMap);
	init_arc_struct_ObjectMap(ctx, sp[1].o);
	((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_export = (jref) sp[1].o;
	LINE_NUMBER(34);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectMap);
	init_arc_struct_ObjectMap(ctx, sp[1].o);
	((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_imports = (jref) sp[1].o;
	LINE_NUMBER(36);
	sp[0].o = frame[0].o;
	clinit_mindustry_type_ItemSeq(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_type_ItemSeq);
	init_mindustry_type_ItemSeq(ctx, sp[1].o);
	((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_items = (jref) sp[1].o;
	LINE_NUMBER(38);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_coreShard;
	((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_bestCoreType = (jref) sp[1].o;
	LINE_NUMBER(40);
	((mindustry_game_SectorInfo *) NULL_CHECK((frame[0].o)))->F_storageCapacity = (jint(0));
	LINE_NUMBER(42);
	((mindustry_game_SectorInfo *) NULL_CHECK((frame[0].o)))->F_hasCore = (jint(1));
	LINE_NUMBER(48);
	((mindustry_game_SectorInfo *) NULL_CHECK((frame[0].o)))->F_wasCaptured = (jint(0));
	LINE_NUMBER(54);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_resources = (jref) sp[1].o;
	LINE_NUMBER(56);
	((mindustry_game_SectorInfo *) NULL_CHECK((frame[0].o)))->F_waves = (jint(1));
	LINE_NUMBER(58);
	((mindustry_game_SectorInfo *) NULL_CHECK((frame[0].o)))->F_attack = (jint(0));
	LINE_NUMBER(60);
	((mindustry_game_SectorInfo *) NULL_CHECK((frame[0].o)))->F_hasSpawns = (jint(1));
	LINE_NUMBER(64);
	((mindustry_game_SectorInfo *) NULL_CHECK((frame[0].o)))->F_wave = (jint(1));
	((mindustry_game_SectorInfo *) NULL_CHECK((frame[0].o)))->F_winWave = (jint(-1));
	LINE_NUMBER(66);
	((mindustry_game_SectorInfo *) NULL_CHECK((frame[0].o)))->F_waveSpacing = (jfloat(7200.0f));
	LINE_NUMBER(80);
	((mindustry_game_SectorInfo *) NULL_CHECK((frame[0].o)))->F_waveVersion = (jint(-1));
	LINE_NUMBER(82);
	((mindustry_game_SectorInfo *) NULL_CHECK((frame[0].o)))->F_shown = (jint(0));
	LINE_NUMBER(84);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectFloatMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectFloatMap);
	init_arc_struct_ObjectFloatMap(ctx, sp[1].o);
	((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_importCooldownTimers = (jref) sp[1].o;
	LINE_NUMBER(88);
	sp[0].o = frame[0].o;
	clinit_mindustry_type_ItemSeq(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_type_ItemSeq);
	init_mindustry_type_ItemSeq(ctx, sp[1].o);
	((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_lastImported = (jref) sp[1].o;
	LINE_NUMBER(91);
	sp[0].o = frame[0].o;
	clinit_arc_util_Interval(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_util_Interval);
	init_arc_util_Interval(ctx, sp[1].o);
	((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_time = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_game_SectorInfo_sectorDataMatches_mindustry_type_Sector_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/SectorInfo:sectorDataMatches", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(99);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_preset;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_preset;
	sp[0].o = (jobject)((mindustry_type_SectorPreset *) NULL_CHECK(sp[0].o))->F_generator;
	sp[0].o = (jobject)((mindustry_maps_generators_FileMapGenerator *) NULL_CHECK(sp[0].o))->F_map;
	if (((jint)((mindustry_maps_Map *) NULL_CHECK(sp[0].o))->F_width) != ((jint)((mindustry_game_SectorInfo *) NULL_CHECK((frame[0].o)))->F_lastWidth)) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_preset;
	sp[0].o = (jobject)((mindustry_type_SectorPreset *) NULL_CHECK(sp[0].o))->F_generator;
	sp[0].o = (jobject)((mindustry_maps_generators_FileMapGenerator *) NULL_CHECK(sp[0].o))->F_map;
	if (((jint)((mindustry_maps_Map *) NULL_CHECK(sp[0].o))->F_height) == ((jint)((mindustry_game_SectorInfo *) NULL_CHECK((frame[0].o)))->F_lastHeight)) goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(100);
	popStackFrame(ctx);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(102);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_preset;
	if (sp[0].o != nullptr) goto label_3;
	}
	INST_ACONST_NULL();
	goto label_4;
label_3:;
	{
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_preset;
	sp[0].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK(sp[0].o))->F_name;
	sp += 1;
	}
label_4:;
	{
	sp -= 1;
	sp[1].o = (jobject)((mindustry_game_SectorInfo *) NULL_CHECK((frame[0].o)))->F_lastPresetName;
	jint temp0 = (jint)SM_arc_util_Structs_eq_java_lang_Object_java_lang_Object_R_boolean(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_mindustry_game_SectorInfo_handleCoreItem_mindustry_type_Item_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/SectorInfo:handleCoreItem", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(107);
	sp[0].o = (jobject)((mindustry_game_SectorInfo *) NULL_CHECK((frame[0].o)))->F_coreDeltas;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_items_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_items_R_arc_struct_Seq])(ctx, sp[1].o);
	sp[1].o = (jobject) createArray(ctx, &class_int, ((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size));
	((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_coreDeltas = (jref) sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(108);
	sp[0].o = (jobject)((mindustry_game_SectorInfo *) NULL_CHECK((frame[0].o)))->F_coreDeltas;
	jint temp0 = (jint)((mindustry_ctype_Content *) NULL_CHECK((frame[1].o)))->F_id;
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (((jint)ARRAY_ACCESS(jint, sp[0].o, temp0)) + (frame[2].i));
	LINE_NUMBER(109);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_game_SectorInfo_handleProduction_mindustry_type_Item_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/SectorInfo:handleProduction", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(113);
	sp[0].o = (jobject)((mindustry_game_SectorInfo *) NULL_CHECK((frame[0].o)))->F_productionDeltas;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_items_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_items_R_arc_struct_Seq])(ctx, sp[1].o);
	sp[1].o = (jobject) createArray(ctx, &class_int, ((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size));
	((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_productionDeltas = (jref) sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(114);
	sp[0].o = (jobject)((mindustry_game_SectorInfo *) NULL_CHECK((frame[0].o)))->F_productionDeltas;
	jint temp0 = (jint)((mindustry_ctype_Content *) NULL_CHECK((frame[1].o)))->F_id;
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (((jint)ARRAY_ACCESS(jint, sp[0].o, temp0)) + (frame[2].i));
	LINE_NUMBER(115);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_game_SectorInfo_handleItemExport_mindustry_type_ItemStack(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/SectorInfo:handleItemExport", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(119);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_type_ItemStack *) NULL_CHECK((frame[1].o)))->F_item;
	((func_mindustry_game_SectorInfo_handleItemExport_mindustry_type_Item_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_SectorInfo_handleItemExport_mindustry_type_Item_int])(ctx, sp[0].o, sp[1].o, ((jint)((mindustry_type_ItemStack *) NULL_CHECK((frame[1].o)))->F_amount));
	LINE_NUMBER(120);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_game_SectorInfo_handleItemExport_mindustry_type_Item_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/SectorInfo:handleItemExport", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(124);
	sp[0].o = (jobject)((mindustry_game_SectorInfo *) NULL_CHECK((frame[0].o)))->F_export;
	sp[1].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_game_SectorInfo_invoke_arc_func_Prov_6(ctx);
		auto proxy = (mindustry_game_SectorInfo_invoke_arc_func_Prov_6 *) gcAlloc(ctx, &class_mindustry_game_SectorInfo_invoke_arc_func_Prov_6);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_arc_func_Prov_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_arc_func_Prov_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp[0].o = checkCast(ctx, &class_mindustry_game_SectorInfo$ExportStat, sp[0].o);
	((mindustry_game_SectorInfo$ExportStat *) NULL_CHECK(sp[0].o))->F_counter = (((jfloat)((mindustry_game_SectorInfo$ExportStat *) NULL_CHECK(sp[0].o))->F_counter) + (jfloat((frame[2].i))));
	LINE_NUMBER(125);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_game_SectorInfo_handleItemImport_mindustry_type_Item_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/SectorInfo:handleItemImport", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(129);
	sp[0].o = (jobject)((mindustry_game_SectorInfo *) NULL_CHECK((frame[0].o)))->F_imports;
	sp[1].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_game_SectorInfo_invoke_arc_func_Prov_7(ctx);
		auto proxy = (mindustry_game_SectorInfo_invoke_arc_func_Prov_7 *) gcAlloc(ctx, &class_mindustry_game_SectorInfo_invoke_arc_func_Prov_7);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_arc_func_Prov_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_arc_func_Prov_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp[0].o = checkCast(ctx, &class_mindustry_game_SectorInfo$ExportStat, sp[0].o);
	((mindustry_game_SectorInfo$ExportStat *) NULL_CHECK(sp[0].o))->F_counter = (((jfloat)((mindustry_game_SectorInfo$ExportStat *) NULL_CHECK(sp[0].o))->F_counter) + (jfloat((frame[2].i))));
	LINE_NUMBER(130);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_game_SectorInfo_getExport_mindustry_type_Item_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/SectorInfo:getExport", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(133);
	sp[0].o = (jobject)((mindustry_game_SectorInfo *) NULL_CHECK((frame[0].o)))->F_export;
	sp[1].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_game_SectorInfo_invoke_arc_func_Prov_8(ctx);
		auto proxy = (mindustry_game_SectorInfo_invoke_arc_func_Prov_8 *) gcAlloc(ctx, &class_mindustry_game_SectorInfo_invoke_arc_func_Prov_8);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_arc_func_Prov_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_arc_func_Prov_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_game_SectorInfo$ExportStat *) NULL_CHECK((checkCast(ctx, &class_mindustry_game_SectorInfo$ExportStat, sp[0].o))))->F_mean);
	}

	popStackFrame(ctx);
}

jbool M_mindustry_game_SectorInfo_hasExport_mindustry_type_Item_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/SectorInfo:hasExport", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(137);
	sp[0].o = (jobject)((mindustry_game_SectorInfo *) NULL_CHECK((frame[0].o)))->F_export;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_mindustry_game_SectorInfo$ExportStat, sp[0].o));
	LINE_NUMBER(138);
	if ((frame[2].o) == nullptr) goto label_2;
	}
	{
	if ((floatCompare(((jfloat)((mindustry_game_SectorInfo$ExportStat *) NULL_CHECK((frame[2].o)))->F_mean), (jfloat(0)), -1)) <= 0) goto label_2;
	}
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_mindustry_game_SectorInfo_refreshImportRates_mindustry_type_Planet(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/SectorInfo:refreshImportRates", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(142);
	sp[0].o = (jobject)((mindustry_game_SectorInfo *) NULL_CHECK((frame[0].o)))->F_importRateCache;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_game_SectorInfo *) NULL_CHECK((frame[0].o)))->F_importRateCache;
	jint temp0 = ((jarray) nullCheck(ctx, sp[0].o))->length;
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_items_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_items_R_arc_struct_Seq])(ctx, sp[0].o);
	if (temp0 == ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(143);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_items_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_items_R_arc_struct_Seq])(ctx, sp[1].o);
	sp[1].o = (jobject) createArray(ctx, &class_float, ((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size));
	((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_importRateCache = (jref) sp[1].o;
	goto label_3;
	}
label_2:;
	{
	LINE_NUMBER(145);
	sp[0].o = (jobject)((mindustry_game_SectorInfo *) NULL_CHECK((frame[0].o)))->F_importRateCache;
	SM_java_util_Arrays_fill_Array1_float_float(ctx, sp[0].o, (jfloat(0)));
	}
label_3:;
	{
	LINE_NUMBER(147);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_game_SectorInfo_invoke_arc_func_Cons_2(ctx);
		auto proxy = (mindustry_game_SectorInfo_invoke_arc_func_Cons_2 *) gcAlloc(ctx, &class_mindustry_game_SectorInfo_invoke_arc_func_Cons_2);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	((func_mindustry_game_SectorInfo_eachImport_mindustry_type_Planet_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_SectorInfo_eachImport_mindustry_type_Planet_arc_func_Cons])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(150);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_game_SectorInfo_getImportRates_mindustry_type_Planet_R_Array1_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/SectorInfo:getImportRates", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(153);
	sp[0].o = (jobject)((mindustry_game_SectorInfo *) NULL_CHECK((frame[0].o)))->F_importRateCache;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(154);
	((func_mindustry_game_SectorInfo_refreshImportRates_mindustry_type_Planet) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_game_SectorInfo_refreshImportRates_mindustry_type_Planet])(ctx, (frame[0].o), (frame[1].o));
	}
label_1:;
	{
	LINE_NUMBER(156);
	sp[0].o = (jobject)((mindustry_game_SectorInfo *) NULL_CHECK((frame[0].o)))->F_importRateCache;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_game_SectorInfo_getImportRate_mindustry_type_Planet_mindustry_type_Item_R_float(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/SectorInfo:getImportRate", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(161);
	sp[0].o = (jobject)((func_mindustry_game_SectorInfo_getImportRates_mindustry_type_Planet_R_Array1_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_game_SectorInfo_getImportRates_mindustry_type_Planet_R_Array1_float])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, ((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[2].o)))->F_id)));
	}

	popStackFrame(ctx);
}

void M_mindustry_game_SectorInfo_write(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/SectorInfo:write", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(167);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_waveTeam;
	sp[0].o = (jobject)((func_mindustry_game_Team_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild])(ctx, sp[0].o);
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(168);
	((mindustry_game_SectorInfo *) NULL_CHECK((frame[0].o)))->F_attack = (jint(1));
	LINE_NUMBER(169);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_sector;
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_planet;
	if (((jint)((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_allowWaves) != 0) goto label_1;
	}
	{
	LINE_NUMBER(170);
	((mindustry_game_SectorInfo *) NULL_CHECK((frame[0].o)))->F_winWave = (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(175);
	if (((jint)((mindustry_game_SectorInfo *) NULL_CHECK((frame[0].o)))->F_winWave) > 0) goto label_5;
	}
	{
	if (((jint)((mindustry_game_SectorInfo *) NULL_CHECK((frame[0].o)))->F_attack) != 0) goto label_5;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_sector;
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_planet;
	if (((jint)((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_allowWaves) == 0) goto label_5;
	}
	{
	LINE_NUMBER(176);
	((mindustry_game_SectorInfo *) NULL_CHECK((frame[0].o)))->F_winWave = (30);
	}
label_5:;
	{
	LINE_NUMBER(179);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_sector;
	if (sp[0].o == nullptr) goto label_7;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_sector;
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_preset;
	if (sp[0].o == nullptr) goto label_7;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_sector;
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_preset;
	if (((jint)((mindustry_type_SectorPreset *) NULL_CHECK(sp[0].o))->F_captureWave) <= 0) goto label_7;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_sector;
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_planet;
	if (((jint)((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_allowWaves) != 0) goto label_7;
	}
	{
	LINE_NUMBER(180);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_sector;
	sp[1].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[1].o))->F_preset;
	((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_winWave = ((jint)((mindustry_type_SectorPreset *) NULL_CHECK(sp[1].o))->F_captureWave);
	}
label_7:;
	{
	LINE_NUMBER(183);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_wave = ((jint)((mindustry_game_SectorInfo *) NULL_CHECK((frame[0].o)))->F_wave);
	LINE_NUMBER(184);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_waves = ((jint)((mindustry_game_SectorInfo *) NULL_CHECK((frame[0].o)))->F_waves);
	LINE_NUMBER(185);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_waveSpacing = ((jfloat)((mindustry_game_SectorInfo *) NULL_CHECK((frame[0].o)))->F_waveSpacing);
	LINE_NUMBER(186);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_winWave = ((jint)((mindustry_game_SectorInfo *) NULL_CHECK((frame[0].o)))->F_winWave);
	LINE_NUMBER(187);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_attackMode = ((jint)((mindustry_game_SectorInfo *) NULL_CHECK((frame[0].o)))->F_attack);
	LINE_NUMBER(189);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_defaultTeam;
	sp[0].o = (jobject)((func_mindustry_game_Team_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(190);
	if ((frame[1].o) == nullptr) goto label_15;
	}
	{
	LINE_NUMBER(191);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_items;
	((func_mindustry_world_modules_ItemModule_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_clear])(ctx, sp[0].o);
	LINE_NUMBER(192);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_items;
	sp[1].o = (jobject)((mindustry_game_SectorInfo *) NULL_CHECK((frame[0].o)))->F_items;
	((func_mindustry_world_modules_ItemModule_add_mindustry_type_ItemSeq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_add_mindustry_type_ItemSeq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(194);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_items;
	{ /* InvokeDynamic */
		clinit_mindustry_game_SectorInfo_invoke_mindustry_world_modules_ItemModule$ItemConsumer_1(ctx);
		auto proxy = (mindustry_game_SectorInfo_invoke_mindustry_world_modules_ItemModule$ItemConsumer_1 *) gcAlloc(ctx, &class_mindustry_game_SectorInfo_invoke_mindustry_world_modules_ItemModule$ItemConsumer_1);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_world_modules_ItemModule_each_mindustry_world_modules_ItemModule$ItemConsumer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_each_mindustry_world_modules_ItemModule$ItemConsumer])(ctx, sp[0].o, sp[1].o);
	}
label_15:;
	LINE_NUMBER(196);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_game_SectorInfo_prepare_mindustry_type_Sector(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/SectorInfo:prepare", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(201);
	sp[0].o = (jobject)((mindustry_game_SectorInfo *) NULL_CHECK((frame[0].o)))->F_items;
	((func_mindustry_type_ItemSeq_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_ItemSeq_clear])(ctx, sp[0].o);
	LINE_NUMBER(203);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_defaultTeam;
	sp[0].o = (jobject)((func_mindustry_game_Team_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(205);
	if ((frame[2].o) == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(206);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[2].o)))->F_items;
	frame[3].o = sp[0].o;
	LINE_NUMBER(207);
	frame[4].i = (jint(0));
	}
label_6:;
	{
	jint temp0 = frame[4].i;
	jint temp1 = (jint)((func_mindustry_world_modules_ItemModule_length_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_world_modules_ItemModule_length_R_int])(ctx, (frame[3].o));
	if (temp0 >= temp1) goto label_7;
	}
	{
	LINE_NUMBER(208);
	sp[0].o = (jobject)((mindustry_game_SectorInfo *) NULL_CHECK((frame[0].o)))->F_items;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_item_int_R_mindustry_type_Item) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_item_int_R_mindustry_type_Item])(ctx, sp[1].o, (frame[4].i));
	jint temp0 = (jint)((func_mindustry_world_modules_ItemModule_get_int_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_world_modules_ItemModule_get_int_R_int])(ctx, (frame[3].o), (frame[4].i));
	((func_mindustry_type_ItemSeq_set_mindustry_type_Item_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_ItemSeq_set_mindustry_type_Item_int])(ctx, sp[0].o, sp[1].o, temp0);
	LINE_NUMBER(207);
	INST_IINC(4, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(212);
	if (((jint)((mindustry_game_SectorInfo *) NULL_CHECK((frame[0].o)))->F_spawnPosition) != 0) goto label_3;
	}
	{
	LINE_NUMBER(213);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_mindustry_world_blocks_storage_CoreBlock$CoreBuild_pos_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_blocks_storage_CoreBlock$CoreBuild_pos_R_int])(ctx, (frame[2].o));
	((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_spawnPosition = temp0;
	}
label_3:;
	{
	LINE_NUMBER(217);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_waveSpacing = ((jfloat)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_waveSpacing);
	LINE_NUMBER(218);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_wave = ((jint)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_wave);
	LINE_NUMBER(219);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_winWave = ((jint)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_winWave);
	LINE_NUMBER(220);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_waves = ((jint)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_waves);
	LINE_NUMBER(221);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_attack = ((jint)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_attackMode);
	LINE_NUMBER(222);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[2].o) == nullptr) goto label_16;
	}
	INST_ICONST(1);
	goto label_17;
label_16:;
	INST_ICONST(0);
label_17:;
	{
	sp -= 2;
	((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_hasCore = sp[1].i;
	LINE_NUMBER(223);
	sp[0].o = frame[0].o;
	sp += 1;
	if (((jint)((mindustry_game_SectorInfo *) NULL_CHECK((frame[0].o)))->F_hasCore) != 0) goto label_19;
	}
	clinit_mindustry_content_Blocks(ctx);
	(sp++)->o = SF_mindustry_content_Blocks_air;
	goto label_20;
label_19:;
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_defaultTeam;
	sp[0].o = (jobject)((func_mindustry_game_Team_cores_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_cores_R_arc_struct_Seq])(ctx, sp[0].o);
	{ /* InvokeDynamic */
		clinit_mindustry_game_SectorInfo_invoke_arc_func_Floatf_2(ctx);
		auto proxy = (mindustry_game_SectorInfo_invoke_arc_func_Floatf_2 *) gcAlloc(ctx, &class_mindustry_game_SectorInfo_invoke_arc_func_Floatf_2);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_max_arc_func_Floatf_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_max_arc_func_Floatf_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((checkCast(ctx, &class_mindustry_world_blocks_storage_CoreBlock$CoreBuild, sp[0].o))))->F_block;
	sp += 1;
	}
label_20:;
	{
	sp -= 2;
	((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_bestCoreType = (jref) sp[1].o;
	LINE_NUMBER(224);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[2].o) == nullptr) goto label_22;
	}
	{
	jint temp0 = (jint)((mindustry_world_blocks_storage_CoreBlock$CoreBuild *) NULL_CHECK((frame[2].o)))->F_storageCapacity;
	sp[0].i = temp0;
	sp += 1;
	goto label_23;
	}
label_22:;
	INST_ICONST(0);
label_23:;
	{
	sp -= 2;
	((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_storageCapacity = sp[1].i;
	LINE_NUMBER(225);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_spawner;
	jint temp0 = (jint)((func_mindustry_ai_WaveSpawner_countSpawns_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_ai_WaveSpawner_countSpawns_R_int])(ctx, sp[1].o);
	sp += 1;
	if (temp0 <= 0) goto label_25;
	}
	INST_ICONST(1);
	goto label_26;
label_25:;
	INST_ICONST(0);
label_26:;
	{
	sp -= 2;
	((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_hasSpawns = sp[1].i;
	LINE_NUMBER(226);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_preset;
	sp += 1;
	if (sp[0].o != nullptr) goto label_28;
	}
	INST_ACONST_NULL();
	goto label_29;
label_28:;
	{
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_preset;
	sp[0].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK(sp[0].o))->F_name;
	sp += 1;
	}
label_29:;
	{
	sp -= 2;
	((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_lastPresetName = (jref) sp[1].o;
	LINE_NUMBER(227);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_world;
	jint temp0 = (jint)((func_mindustry_core_World_width_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_World_width_R_int])(ctx, sp[1].o);
	((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_lastWidth = temp0;
	LINE_NUMBER(228);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_world;
	jint temp1 = (jint)((func_mindustry_core_World_height_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_World_height_R_int])(ctx, sp[1].o);
	((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_lastHeight = temp1;
	LINE_NUMBER(230);
	((mindustry_game_SectorInfo *) NULL_CHECK((frame[0].o)))->F_lightCoverage = (jfloat(0));
	LINE_NUMBER(231);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_defaultTeam;
	sp[0].o = (jobject)((func_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK(sp[0].o))->F_buildings;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_34:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_35;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_mindustry_gen_Building, sp[0].o));
	LINE_NUMBER(232);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[4].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_emitLight) == 0) goto label_37;
	}
	{
	LINE_NUMBER(233);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_lightCoverage;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[4].o)))->F_block;
	((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_lightCoverage = (temp0 + (((jfloat)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_lightRadius) * ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[4].o)))->F_efficiency)));
	}
label_37:;
	LINE_NUMBER(235);
	goto label_34;
label_35:;
	{
	LINE_NUMBER(237);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_lightCoverage;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_defaultTeam;
	sp[1].o = (jobject)((func_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData])(ctx, sp[1].o);
	sp[1].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK(sp[1].o))->F_units;
	{ /* InvokeDynamic */
		clinit_mindustry_game_SectorInfo_invoke_arc_func_Floatf_3(ctx);
		auto proxy = (mindustry_game_SectorInfo_invoke_arc_func_Floatf_3 *) gcAlloc(ctx, &class_mindustry_game_SectorInfo_invoke_arc_func_Floatf_3);
		sp[2].o = (jobject) proxy;
	}
	jfloat temp1 = (jfloat)((func_arc_struct_Seq_sumf_arc_func_Floatf_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_sumf_arc_func_Floatf_R_float])(ctx, sp[1].o, sp[2].o);
	((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_lightCoverage = (temp0 + temp1);
	LINE_NUMBER(240);
	sp[0].o = (jobject)((mindustry_game_SectorInfo *) NULL_CHECK((frame[0].o)))->F_production;
	{ /* InvokeDynamic */
		clinit_mindustry_game_SectorInfo_invoke_arc_func_Cons2_6(ctx);
		auto proxy = (mindustry_game_SectorInfo_invoke_arc_func_Cons2_6 *) gcAlloc(ctx, &class_mindustry_game_SectorInfo_invoke_arc_func_Cons2_6);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_struct_ObjectMap_each_arc_func_Cons2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_each_arc_func_Cons2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(244);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_indexer;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_defaultTeam;
	clinit_mindustry_world_meta_BlockFlag(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_BlockFlag_launchPad;
	sp[0].o = (jobject)((func_mindustry_ai_BlockIndexer_getFlagged_mindustry_game_Team_mindustry_world_meta_BlockFlag_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_BlockIndexer_getFlagged_mindustry_game_Team_mindustry_world_meta_BlockFlag_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(247);
	if (((jint)((arc_struct_Seq *) NULL_CHECK((frame[3].o)))->F_size) == 0) goto label_42;
	}
	{
	sp[0].o = frame[3].o;
	{ /* InvokeDynamic */
		clinit_mindustry_game_SectorInfo_invoke_arc_func_Boolf_1(ctx);
		auto proxy = (mindustry_game_SectorInfo_invoke_arc_func_Boolf_1 *) gcAlloc(ctx, &class_mindustry_game_SectorInfo_invoke_arc_func_Boolf_1);
		sp[1].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_arc_struct_Seq_contains_arc_func_Boolf_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_arc_func_Boolf_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_43;
	}
label_42:;
	{
	LINE_NUMBER(248);
	sp[0].o = (jobject)((mindustry_game_SectorInfo *) NULL_CHECK((frame[0].o)))->F_export;
	((func_arc_struct_ObjectMap_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_clear])(ctx, sp[0].o);
	}
label_43:;
	{
	LINE_NUMBER(251);
	((func_mindustry_type_Sector_saveInfo) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_type_Sector_saveInfo])(ctx, (frame[1].o));
	LINE_NUMBER(253);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_planet;
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_generator;
	if (sp[0].o == nullptr) goto label_45;
	}
	{
	LINE_NUMBER(254);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_planet;
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_generator;
	((func_mindustry_maps_generators_PlanetGenerator_beforeSaveWrite_mindustry_type_Sector) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_maps_generators_PlanetGenerator_beforeSaveWrite_mindustry_type_Sector])(ctx, sp[0].o, (frame[1].o));
	}
label_45:;
	LINE_NUMBER(256);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_game_SectorInfo_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/SectorInfo:update", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(262);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	if (!frame[0].o) {
		popStackFrame(ctx);
		INST_RETURN();
	}
	auto infoSelf = (mindustry_game_SectorInfo *) frame[0].o;
	if (!infoSelf->F_time) {
		clinit_arc_util_Interval(ctx);
		auto it = gcAlloc(ctx, &class_arc_util_Interval);
		init_arc_util_Interval(ctx, it);
		infoSelf->F_time = (jref) it;
	}
	if (!infoSelf->F_export) {
		clinit_arc_struct_ObjectMap(ctx);
		auto om = gcAlloc(ctx, &class_arc_struct_ObjectMap);
		init_arc_struct_ObjectMap(ctx, om);
		infoSelf->F_export = (jref) om;
	}
	if (!infoSelf->F_imports) {
		clinit_arc_struct_ObjectMap(ctx);
		auto om = gcAlloc(ctx, &class_arc_struct_ObjectMap);
		init_arc_struct_ObjectMap(ctx, om);
		infoSelf->F_imports = (jref) om;
	}
	if (!infoSelf->F_production) {
		clinit_arc_struct_ObjectMap(ctx);
		auto om = gcAlloc(ctx, &class_arc_struct_ObjectMap);
		init_arc_struct_ObjectMap(ctx, om);
		infoSelf->F_production = (jref) om;
	}
	if (!infoSelf->F_rawProduction) {
		clinit_arc_struct_ObjectMap(ctx);
		auto om = gcAlloc(ctx, &class_arc_struct_ObjectMap);
		init_arc_struct_ObjectMap(ctx, om);
		infoSelf->F_rawProduction = (jref) om;
	}
	{
	LINE_NUMBER(265);
	sp[0].o = (jobject)infoSelf->F_time;
	jint temp0 = (jint)((func_arc_util_Interval_get_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_Interval_get_float_R_boolean])(ctx, sp[0].o, (jfloat(60.0f)));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(267);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_game_SectorInfo *) NULL_CHECK((frame[0].o)))->F_export;
	((func_mindustry_game_SectorInfo_updateStats_arc_struct_ObjectMap) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_SectorInfo_updateStats_arc_struct_ObjectMap])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(268);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_game_SectorInfo *) NULL_CHECK((frame[0].o)))->F_imports;
	((func_mindustry_game_SectorInfo_updateStats_arc_struct_ObjectMap) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_SectorInfo_updateStats_arc_struct_ObjectMap])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(270);
	sp[0].o = (jobject)((mindustry_game_SectorInfo *) NULL_CHECK((frame[0].o)))->F_coreDeltas;
	if (sp[0].o != nullptr) goto label_6;
	}
	{
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_items_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_items_R_arc_struct_Seq])(ctx, sp[1].o);
	sp[1].o = (jobject) createArray(ctx, &class_int, ((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size));
	((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_coreDeltas = (jref) sp[1].o;
	}
label_6:;
	{
	LINE_NUMBER(271);
	sp[0].o = (jobject)((mindustry_game_SectorInfo *) NULL_CHECK((frame[0].o)))->F_productionDeltas;
	if (sp[0].o != nullptr) goto label_7;
	}
	{
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_items_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_items_R_arc_struct_Seq])(ctx, sp[1].o);
	sp[1].o = (jobject) createArray(ctx, &class_int, ((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size));
	((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_productionDeltas = (jref) sp[1].o;
	}
label_7:;
	{
	LINE_NUMBER(274);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_items_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_items_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_8:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_9;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_mindustry_type_Item, sp[0].o));
	LINE_NUMBER(275);
	sp[0].o = frame[0].o;
	sp[1].o = frame[2].o;
	sp[2].o = (jobject)((mindustry_game_SectorInfo *) NULL_CHECK((frame[0].o)))->F_production;
	sp[3].o = (jobject)((mindustry_game_SectorInfo *) NULL_CHECK((frame[0].o)))->F_coreDeltas;
	((func_mindustry_game_SectorInfo_updateDelta_mindustry_type_Item_arc_struct_ObjectMap_Array1_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_SectorInfo_updateDelta_mindustry_type_Item_arc_struct_ObjectMap_Array1_int])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(276);
	sp[0].o = frame[0].o;
	sp[1].o = frame[2].o;
	sp[2].o = (jobject)((mindustry_game_SectorInfo *) NULL_CHECK((frame[0].o)))->F_rawProduction;
	sp[3].o = (jobject)((mindustry_game_SectorInfo *) NULL_CHECK((frame[0].o)))->F_productionDeltas;
	((func_mindustry_game_SectorInfo_updateDelta_mindustry_type_Item_arc_struct_ObjectMap_Array1_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_SectorInfo_updateDelta_mindustry_type_Item_arc_struct_ObjectMap_Array1_int])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(279);
	sp[0].o = (jobject)((mindustry_game_SectorInfo *) NULL_CHECK((frame[0].o)))->F_production;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[2].o));
	sp[0].o = checkCast(ctx, &class_mindustry_game_SectorInfo$ExportStat, sp[0].o);
	sp[1].o = (jobject)((mindustry_game_SectorInfo *) NULL_CHECK((frame[0].o)))->F_production;
	sp[1].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[1].o, (frame[2].o));
	jfloat temp0 = (jfloat)((mindustry_game_SectorInfo$ExportStat *) NULL_CHECK((checkCast(ctx, &class_mindustry_game_SectorInfo$ExportStat, sp[1].o))))->F_mean;
	sp[1].o = (jobject)((mindustry_game_SectorInfo *) NULL_CHECK((frame[0].o)))->F_rawProduction;
	sp[1].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[1].o, (frame[2].o));
	jfloat temp1 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, temp0, ((jfloat)((mindustry_game_SectorInfo$ExportStat *) NULL_CHECK((checkCast(ctx, &class_mindustry_game_SectorInfo$ExportStat, sp[1].o))))->F_mean));
	((mindustry_game_SectorInfo$ExportStat *) NULL_CHECK(sp[0].o))->F_mean = temp1;
	LINE_NUMBER(281);
	sp[0].o = (jobject)((mindustry_game_SectorInfo *) NULL_CHECK((frame[0].o)))->F_export;
	jint temp2 = (jint)((func_arc_struct_ObjectMap_containsKey_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_containsKey_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[2].o));
	if (temp2 == 0) goto label_14;
	}
	{
	LINE_NUMBER(283);
	sp[0].o = (jobject)((mindustry_game_SectorInfo *) NULL_CHECK((frame[0].o)))->F_export;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[2].o));
	sp[0].o = checkCast(ctx, &class_mindustry_game_SectorInfo$ExportStat, sp[0].o);
	sp[1].o = (jobject)((mindustry_game_SectorInfo *) NULL_CHECK((frame[0].o)))->F_export;
	sp[1].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[1].o, (frame[2].o));
	jfloat temp0 = (jfloat)((mindustry_game_SectorInfo$ExportStat *) NULL_CHECK((checkCast(ctx, &class_mindustry_game_SectorInfo$ExportStat, sp[1].o))))->F_mean;
	sp[1].o = (jobject)((mindustry_game_SectorInfo *) NULL_CHECK((frame[0].o)))->F_rawProduction;
	sp[1].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[1].o, (frame[2].o));
	jfloat temp1 = (jfloat)((mindustry_game_SectorInfo$ExportStat *) NULL_CHECK((checkCast(ctx, &class_mindustry_game_SectorInfo$ExportStat, sp[1].o))))->F_mean;
	sp[1].o = (jobject)((mindustry_game_SectorInfo *) NULL_CHECK((frame[0].o)))->F_production;
	sp[1].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[1].o, (frame[2].o));
	jfloat temp2 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (-((jfloat)((mindustry_game_SectorInfo$ExportStat *) NULL_CHECK((checkCast(ctx, &class_mindustry_game_SectorInfo$ExportStat, sp[1].o))))->F_mean)), (jfloat(0)));
	jfloat temp3 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, temp0, (temp1 + temp2));
	((mindustry_game_SectorInfo$ExportStat *) NULL_CHECK(sp[0].o))->F_mean = temp3;
	}
label_14:;
	{
	LINE_NUMBER(286);
	sp[0].o = (jobject)((mindustry_game_SectorInfo *) NULL_CHECK((frame[0].o)))->F_imports;
	jint temp0 = (jint)((func_arc_struct_ObjectMap_containsKey_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_containsKey_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[2].o));
	if (temp0 == 0) goto label_16;
	}
	{
	LINE_NUMBER(288);
	sp[0].o = (jobject)((mindustry_game_SectorInfo *) NULL_CHECK((frame[0].o)))->F_imports;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[2].o));
	sp[0].o = checkCast(ctx, &class_mindustry_game_SectorInfo$ExportStat, sp[0].o);
	sp[1].o = (jobject)((mindustry_game_SectorInfo *) NULL_CHECK((frame[0].o)))->F_imports;
	sp[1].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[1].o, (frame[2].o));
	jfloat temp0 = (jfloat)((mindustry_game_SectorInfo$ExportStat *) NULL_CHECK((checkCast(ctx, &class_mindustry_game_SectorInfo$ExportStat, sp[1].o))))->F_mean;
	sp[1].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[2].o = (jobject)SF_mindustry_Vars_state;
	sp[2].o = (jobject)((func_mindustry_core_GameState_getPlanet_R_mindustry_type_Planet) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_core_GameState_getPlanet_R_mindustry_type_Planet])(ctx, sp[2].o);
	jfloat temp1 = (jfloat)((func_mindustry_game_SectorInfo_getImportRate_mindustry_type_Planet_mindustry_type_Item_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_game_SectorInfo_getImportRate_mindustry_type_Planet_mindustry_type_Item_R_float])(ctx, sp[1].o, sp[2].o, (frame[2].o));
	jfloat temp2 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, temp0, temp1);
	((mindustry_game_SectorInfo$ExportStat *) NULL_CHECK(sp[0].o))->F_mean = temp2;
	}
label_16:;
	LINE_NUMBER(290);
	goto label_8;
label_9:;
	{
	LINE_NUMBER(292);
	sp[0].o = (jobject)((mindustry_game_SectorInfo *) NULL_CHECK((frame[0].o)))->F_coreDeltas;
	SM_java_util_Arrays_fill_Array1_int_int(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(293);
	sp[0].o = (jobject)((mindustry_game_SectorInfo *) NULL_CHECK((frame[0].o)))->F_productionDeltas;
	SM_java_util_Arrays_fill_Array1_int_int(ctx, sp[0].o, (jint(0)));
	}
label_2:;
	LINE_NUMBER(295);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_game_SectorInfo_updateStats_arc_struct_ObjectMap(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/SectorInfo:updateStats", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(298);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_game_SectorInfo_invoke_arc_func_Cons2_7(ctx);
		auto proxy = (mindustry_game_SectorInfo_invoke_arc_func_Cons2_7 *) gcAlloc(ctx, &class_mindustry_game_SectorInfo_invoke_arc_func_Cons2_7);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_struct_ObjectMap_each_arc_func_Cons2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_each_arc_func_Cons2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(309);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_game_SectorInfo_updateDelta_mindustry_type_Item_arc_struct_ObjectMap_Array1_int(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/SectorInfo:updateDelta", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(312);
	sp[0].o = frame[2].o;
	sp[1].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_game_SectorInfo_invoke_arc_func_Prov_9(ctx);
		auto proxy = (mindustry_game_SectorInfo_invoke_arc_func_Prov_9 *) gcAlloc(ctx, &class_mindustry_game_SectorInfo_invoke_arc_func_Prov_9);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_arc_func_Prov_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_arc_func_Prov_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[4].o = (checkCast(ctx, &class_mindustry_game_SectorInfo$ExportStat, sp[0].o));
	LINE_NUMBER(313);
	if (((jint)((mindustry_game_SectorInfo$ExportStat *) NULL_CHECK((frame[4].o)))->F_loaded) != 0) goto label_2;
	}
	{
	LINE_NUMBER(314);
	sp[0].o = (jobject)((mindustry_game_SectorInfo$ExportStat *) NULL_CHECK((frame[4].o)))->F_means;
	((func_arc_math_WindowedMean_fill_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_WindowedMean_fill_float])(ctx, sp[0].o, ((jfloat)((mindustry_game_SectorInfo$ExportStat *) NULL_CHECK((frame[4].o)))->F_mean));
	LINE_NUMBER(315);
	((mindustry_game_SectorInfo$ExportStat *) NULL_CHECK((frame[4].o)))->F_loaded = (jint(1));
	}
label_2:;
	{
	LINE_NUMBER(319);
	sp[0].o = (jobject)((mindustry_game_SectorInfo$ExportStat *) NULL_CHECK((frame[4].o)))->F_means;
	((func_arc_math_WindowedMean_add_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_WindowedMean_add_float])(ctx, sp[0].o, (jfloat(((jint)ARRAY_ACCESS(jint, (frame[3].o), ((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[1].o)))->F_id))))));
	LINE_NUMBER(320);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((mindustry_game_SectorInfo$ExportStat *) NULL_CHECK((frame[4].o)))->F_means;
	jfloat temp0 = (jfloat)((func_arc_math_WindowedMean_rawMean_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_WindowedMean_rawMean_R_float])(ctx, sp[1].o);
	((mindustry_game_SectorInfo$ExportStat *) NULL_CHECK(sp[0].o))->F_mean = temp0;
	LINE_NUMBER(321);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_game_SectorInfo_exportRates_R_arc_struct_ObjectFloatMap(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/SectorInfo:exportRates", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(324);
	clinit_arc_struct_ObjectFloatMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_ObjectFloatMap);
	init_arc_struct_ObjectFloatMap(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(325);
	sp[0].o = (jobject)((mindustry_game_SectorInfo *) NULL_CHECK((frame[0].o)))->F_export;
	{ /* InvokeDynamic */
		clinit_mindustry_game_SectorInfo_invoke_arc_func_Cons2_8(ctx);
		auto proxy = (mindustry_game_SectorInfo_invoke_arc_func_Cons2_8 *) gcAlloc(ctx, &class_mindustry_game_SectorInfo_invoke_arc_func_Cons2_8);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_struct_ObjectMap_each_arc_func_Cons2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_each_arc_func_Cons2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(326);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jbool M_mindustry_game_SectorInfo_anyExports_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/SectorInfo:anyExports", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(330);
	sp[0].o = (jobject)((mindustry_game_SectorInfo *) NULL_CHECK((frame[0].o)))->F_export;
	if (((jint)((arc_struct_ObjectMap *) NULL_CHECK(sp[0].o))->F_size) != 0) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(331);
	clinit_mindustry_game_SectorInfo(ctx);
	SF_mindustry_game_SectorInfo_returnf = (jfloat(0));
	LINE_NUMBER(332);
	sp[0].o = (jobject)((mindustry_game_SectorInfo *) NULL_CHECK((frame[0].o)))->F_export;
	{ /* InvokeDynamic */
		clinit_mindustry_game_SectorInfo_invoke_arc_func_Cons2_9(ctx);
		auto proxy = (mindustry_game_SectorInfo_invoke_arc_func_Cons2_9 *) gcAlloc(ctx, &class_mindustry_game_SectorInfo_invoke_arc_func_Cons2_9);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_struct_ObjectMap_each_arc_func_Cons2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_each_arc_func_Cons2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(333);
	if ((floatCompare((clinit_mindustry_game_SectorInfo(ctx), (jfloat)SF_mindustry_game_SectorInfo_returnf), (jfloat(1,000000e-02f)), -1)) < 0) goto label_4;
	}
	INST_ICONST(1);
	goto label_5;
label_4:;
	INST_ICONST(0);
label_5:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_game_SectorInfo_importStats_mindustry_type_Planet_R_arc_struct_ObjectMap(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/SectorInfo:importStats", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(339);
	clinit_arc_struct_ObjectMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_ObjectMap);
	init_arc_struct_ObjectMap(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(340);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_game_SectorInfo_invoke_arc_func_Cons_3(ctx);
		auto proxy = (mindustry_game_SectorInfo_invoke_arc_func_Cons_3 *) gcAlloc(ctx, &class_mindustry_game_SectorInfo_invoke_arc_func_Cons_3);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[2].o = (jobject) proxy;
	}
	((func_mindustry_game_SectorInfo_eachImport_mindustry_type_Planet_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_SectorInfo_eachImport_mindustry_type_Planet_arc_func_Cons])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(341);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

void M_mindustry_game_SectorInfo_eachImport_mindustry_type_Planet_arc_func_Cons(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/SectorInfo:eachImport", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(346);
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[1].o)))->F_sectors;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_1:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_mindustry_type_Sector, sp[0].o));
	LINE_NUMBER(347);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[4].o)))->F_info;
	sp[0].o = (jobject)((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_destination;
	frame[5].o = sp[0].o;
	LINE_NUMBER(348);
	jint temp0 = (jint)((func_mindustry_type_Sector_hasBase_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_type_Sector_hasBase_R_boolean])(ctx, (frame[4].o));
	if (temp0 == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[4].o)))->F_info;
	if (sp[0].o == (frame[0].o)) goto label_5;
	}
	INST_ALOAD(5);
	if ((--sp)->o == nullptr) goto label_5;
	{
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[5].o)))->F_info;
	if (sp[0].o != (frame[0].o)) goto label_5;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[4].o)))->F_info;
	jint temp0 = (jint)((func_mindustry_game_SectorInfo_anyExports_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_SectorInfo_anyExports_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(349);
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o), (frame[4].o));
	}
label_5:;
	LINE_NUMBER(351);
	goto label_1;
label_2:;
	LINE_NUMBER(352);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_game_SectorInfo_lambda$importStats$0_arc_struct_ObjectMap_mindustry_type_Sector(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/SectorInfo:lambda$importStats$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_SectorInfo(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(340);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_info;
	sp[0].o = (jobject)((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_export;
	{ /* InvokeDynamic */
		clinit_mindustry_game_SectorInfo_invoke_arc_func_Cons2_10(ctx);
		auto proxy = (mindustry_game_SectorInfo_invoke_arc_func_Cons2_10 *) gcAlloc(ctx, &class_mindustry_game_SectorInfo_invoke_arc_func_Cons2_10);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_struct_ObjectMap_each_arc_func_Cons2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_each_arc_func_Cons2])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_game_SectorInfo_lambda$importStats$1_arc_struct_ObjectMap_mindustry_type_Item_mindustry_game_SectorInfo$ExportStat(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/SectorInfo:lambda$importStats$1", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_SectorInfo(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(340);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_game_SectorInfo_invoke_arc_func_Prov_10(ctx);
		auto proxy = (mindustry_game_SectorInfo_invoke_arc_func_Prov_10 *) gcAlloc(ctx, &class_mindustry_game_SectorInfo_invoke_arc_func_Prov_10);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_arc_func_Prov_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_arc_func_Prov_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp[0].o = checkCast(ctx, &class_mindustry_game_SectorInfo$ExportStat, sp[0].o);
	((mindustry_game_SectorInfo$ExportStat *) NULL_CHECK(sp[0].o))->F_mean = (((jfloat)((mindustry_game_SectorInfo$ExportStat *) NULL_CHECK(sp[0].o))->F_mean) + ((jfloat)((mindustry_game_SectorInfo$ExportStat *) NULL_CHECK((frame[2].o)))->F_mean));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_game_SectorInfo_lambda$anyExports$0_mindustry_type_Item_mindustry_game_SectorInfo$ExportStat(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/SectorInfo:lambda$anyExports$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_SectorInfo(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(332);
	clinit_mindustry_game_SectorInfo(ctx);
	SF_mindustry_game_SectorInfo_returnf = ((clinit_mindustry_game_SectorInfo(ctx), (jfloat)SF_mindustry_game_SectorInfo_returnf) + ((jfloat)((mindustry_game_SectorInfo$ExportStat *) NULL_CHECK((frame[1].o)))->F_mean));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_game_SectorInfo_lambda$exportRates$0_arc_struct_ObjectFloatMap_mindustry_type_Item_mindustry_game_SectorInfo$ExportStat(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/SectorInfo:lambda$exportRates$0", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_SectorInfo(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(325);
	((func_arc_struct_ObjectFloatMap_put_java_lang_Object_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ObjectFloatMap_put_java_lang_Object_float])(ctx, (frame[0].o), (frame[1].o), ((jfloat)((mindustry_game_SectorInfo$ExportStat *) NULL_CHECK((frame[2].o)))->F_mean));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_game_SectorInfo_lambda$updateStats$0_mindustry_type_Item_mindustry_game_SectorInfo$ExportStat(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/SectorInfo:lambda$updateStats$0", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_SectorInfo(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(300);
	if (((jint)((mindustry_game_SectorInfo$ExportStat *) NULL_CHECK((frame[1].o)))->F_loaded) != 0) goto label_1;
	}
	{
	LINE_NUMBER(301);
	sp[0].o = (jobject)((mindustry_game_SectorInfo$ExportStat *) NULL_CHECK((frame[1].o)))->F_means;
	((func_arc_math_WindowedMean_fill_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_WindowedMean_fill_float])(ctx, sp[0].o, ((jfloat)((mindustry_game_SectorInfo$ExportStat *) NULL_CHECK((frame[1].o)))->F_mean));
	LINE_NUMBER(302);
	((mindustry_game_SectorInfo$ExportStat *) NULL_CHECK((frame[1].o)))->F_loaded = (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(305);
	sp[0].o = (jobject)((mindustry_game_SectorInfo$ExportStat *) NULL_CHECK((frame[1].o)))->F_means;
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((jfloat)((mindustry_game_SectorInfo$ExportStat *) NULL_CHECK((frame[1].o)))->F_counter), (jfloat(0)));
	((func_arc_math_WindowedMean_add_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_WindowedMean_add_float])(ctx, sp[0].o, temp0);
	LINE_NUMBER(306);
	((mindustry_game_SectorInfo$ExportStat *) NULL_CHECK((frame[1].o)))->F_counter = (jfloat(0));
	LINE_NUMBER(307);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_game_SectorInfo$ExportStat *) NULL_CHECK((frame[1].o)))->F_means;
	jfloat temp1 = (jfloat)((func_arc_math_WindowedMean_rawMean_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_WindowedMean_rawMean_R_float])(ctx, sp[1].o);
	((mindustry_game_SectorInfo$ExportStat *) NULL_CHECK(sp[0].o))->F_mean = temp1;
	LINE_NUMBER(308);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_game_SectorInfo_lambda$prepare$3_mindustry_gen_Building_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/SectorInfo:lambda$prepare$3", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_SectorInfo(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(247);
	if ((floatCompare(((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_efficiency), (jfloat(0)), -1)) <= 0) goto label_1;
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

void M_mindustry_game_SectorInfo_lambda$prepare$2_mindustry_type_Item_mindustry_game_SectorInfo$ExportStat(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/SectorInfo:lambda$prepare$2", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(241);
	sp[0].o = frame[2].o;
	jfloat temp0 = (jfloat)((mindustry_game_SectorInfo$ExportStat *) NULL_CHECK((frame[2].o)))->F_mean;
	sp[1].o = (jobject)((mindustry_game_SectorInfo *) NULL_CHECK((frame[0].o)))->F_rawProduction;
	sp[2].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_game_SectorInfo_invoke_arc_func_Prov_11(ctx);
		auto proxy = (mindustry_game_SectorInfo_invoke_arc_func_Prov_11 *) gcAlloc(ctx, &class_mindustry_game_SectorInfo_invoke_arc_func_Prov_11);
		sp[3].o = (jobject) proxy;
	}
	sp[1].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_arc_func_Prov_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_arc_func_Prov_R_java_lang_Object])(ctx, sp[1].o, sp[2].o, sp[3].o);
	jfloat temp1 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, temp0, ((jfloat)((mindustry_game_SectorInfo$ExportStat *) NULL_CHECK((checkCast(ctx, &class_mindustry_game_SectorInfo$ExportStat, sp[1].o))))->F_mean));
	((mindustry_game_SectorInfo$ExportStat *) NULL_CHECK(sp[0].o))->F_mean = temp1;
	LINE_NUMBER(242);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat SM_mindustry_game_SectorInfo_lambda$prepare$1_mindustry_gen_Unit_R_float(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/SectorInfo:lambda$prepare$1", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_SectorInfo(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(237);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	popStackFrame(ctx);
	return (((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_lightRadius) / (jfloat(2)));
	}

	popStackFrame(ctx);
}

jfloat SM_mindustry_game_SectorInfo_lambda$prepare$0_mindustry_world_blocks_storage_CoreBlock$CoreBuild_R_float(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/SectorInfo:lambda$prepare$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_SectorInfo(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(223);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	popStackFrame(ctx);
	return (jfloat(((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size)));
	}

	popStackFrame(ctx);
}

void SM_mindustry_game_SectorInfo_lambda$write$0_mindustry_world_blocks_storage_CoreBlock$CoreBuild_mindustry_type_Item_int(jcontext ctx, jobject param0, jobject param1, jint param2) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/SectorInfo:lambda$write$0", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_SectorInfo(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(194);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	sp[1].o = frame[1].o;
	jint temp0 = (jint)SM_arc_math_Mathf_clamp_int_int_int_R_int(ctx, (frame[2].i), (jint(0)), ((jint)((mindustry_world_blocks_storage_CoreBlock$CoreBuild *) NULL_CHECK((frame[0].o)))->F_storageCapacity));
	((func_mindustry_world_modules_ItemModule_set_mindustry_type_Item_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_set_mindustry_type_Item_int])(ctx, sp[0].o, sp[1].o, temp0);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_game_SectorInfo_lambda$refreshImportRates$0_mindustry_type_Sector(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/SectorInfo:lambda$refreshImportRates$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(147);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_info;
	sp[0].o = (jobject)((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_export;
	{ /* InvokeDynamic */
		clinit_mindustry_game_SectorInfo_invoke_arc_func_Cons2_11(ctx);
		auto proxy = (mindustry_game_SectorInfo_invoke_arc_func_Cons2_11 *) gcAlloc(ctx, &class_mindustry_game_SectorInfo_invoke_arc_func_Cons2_11);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_struct_ObjectMap_each_arc_func_Cons2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_each_arc_func_Cons2])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_game_SectorInfo_lambda$refreshImportRates$1_mindustry_type_Item_mindustry_game_SectorInfo$ExportStat(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/SectorInfo:lambda$refreshImportRates$1", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(148);
	sp[0].o = (jobject)((mindustry_game_SectorInfo *) NULL_CHECK((frame[0].o)))->F_importRateCache;
	jint temp0 = (jint)((mindustry_ctype_Content *) NULL_CHECK((frame[1].o)))->F_id;
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp0)) + ((jfloat)((mindustry_game_SectorInfo$ExportStat *) NULL_CHECK((frame[2].o)))->F_mean));
	LINE_NUMBER(149);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_game_SectorInfo;
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

	{ // Field lastPresetName
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[11]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[12]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[13]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[14]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field origin
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[15]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field destination
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[16]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[17]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[18]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[19]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[20]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[21]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[22]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[23]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[24]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[25]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[26]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[27]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field name
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[28]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field icon
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[29]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field contentIcon
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[30]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[31]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[32]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[33]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field importRateCache
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[34]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[35]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[36]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field coreDeltas
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[37]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field productionDeltas
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[38]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

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
}

void *vtable_mindustry_game_SectorInfo[] {
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
	(void *) M_mindustry_game_SectorInfo_sectorDataMatches_mindustry_type_Sector_R_boolean,
	(void *) M_mindustry_game_SectorInfo_handleCoreItem_mindustry_type_Item_int,
	(void *) M_mindustry_game_SectorInfo_handleProduction_mindustry_type_Item_int,
	(void *) M_mindustry_game_SectorInfo_handleItemExport_mindustry_type_ItemStack,
	(void *) M_mindustry_game_SectorInfo_handleItemExport_mindustry_type_Item_int,
	(void *) M_mindustry_game_SectorInfo_handleItemImport_mindustry_type_Item_int,
	(void *) M_mindustry_game_SectorInfo_getExport_mindustry_type_Item_R_float,
	(void *) M_mindustry_game_SectorInfo_hasExport_mindustry_type_Item_R_boolean,
	(void *) M_mindustry_game_SectorInfo_refreshImportRates_mindustry_type_Planet,
	(void *) M_mindustry_game_SectorInfo_getImportRates_mindustry_type_Planet_R_Array1_float,
	(void *) M_mindustry_game_SectorInfo_getImportRate_mindustry_type_Planet_mindustry_type_Item_R_float,
	(void *) M_mindustry_game_SectorInfo_write,
	(void *) M_mindustry_game_SectorInfo_prepare_mindustry_type_Sector,
	(void *) M_mindustry_game_SectorInfo_update,
	(void *) M_mindustry_game_SectorInfo_updateStats_arc_struct_ObjectMap,
	(void *) M_mindustry_game_SectorInfo_updateDelta_mindustry_type_Item_arc_struct_ObjectMap_Array1_int,
	(void *) M_mindustry_game_SectorInfo_exportRates_R_arc_struct_ObjectFloatMap,
	(void *) M_mindustry_game_SectorInfo_anyExports_R_boolean,
	(void *) M_mindustry_game_SectorInfo_importStats_mindustry_type_Planet_R_arc_struct_ObjectMap,
	(void *) M_mindustry_game_SectorInfo_eachImport_mindustry_type_Planet_arc_func_Cons,
	(void *) M_mindustry_game_SectorInfo_lambda$prepare$2_mindustry_type_Item_mindustry_game_SectorInfo$ExportStat,
	(void *) M_mindustry_game_SectorInfo_lambda$refreshImportRates$0_mindustry_type_Sector,
	(void *) M_mindustry_game_SectorInfo_lambda$refreshImportRates$1_mindustry_type_Item_mindustry_game_SectorInfo$ExportStat,
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
	{ "sectorDataMatches", "(Lmindustry/type/Sector;)Z" },
	{ "handleCoreItem", "(Lmindustry/type/Item;I)V" },
	{ "handleProduction", "(Lmindustry/type/Item;I)V" },
	{ "handleItemExport", "(Lmindustry/type/ItemStack;)V" },
	{ "handleItemExport", "(Lmindustry/type/Item;I)V" },
	{ "handleItemImport", "(Lmindustry/type/Item;I)V" },
	{ "getExport", "(Lmindustry/type/Item;)F" },
	{ "hasExport", "(Lmindustry/type/Item;)Z" },
	{ "refreshImportRates", "(Lmindustry/type/Planet;)V" },
	{ "getImportRates", "(Lmindustry/type/Planet;)[F" },
	{ "getImportRate", "(Lmindustry/type/Planet;Lmindustry/type/Item;)F" },
	{ "write", "()V" },
	{ "prepare", "(Lmindustry/type/Sector;)V" },
	{ "update", "()V" },
	{ "updateStats", "(Larc/struct/ObjectMap;)V" },
	{ "updateDelta", "(Lmindustry/type/Item;Larc/struct/ObjectMap;[I)V" },
	{ "exportRates", "()Larc/struct/ObjectFloatMap;" },
	{ "anyExports", "()Z" },
	{ "importStats", "(Lmindustry/type/Planet;)Larc/struct/ObjectMap;" },
	{ "eachImport", "(Lmindustry/type/Planet;Larc/func/Cons;)V" },
	{ "lambda$prepare$2", "(Lmindustry/type/Item;Lmindustry/game/SectorInfo$ExportStat;)V" },
	{ "lambda$refreshImportRates$0", "(Lmindustry/type/Sector;)V" },
	{ "lambda$refreshImportRates$1", "(Lmindustry/type/Item;Lmindustry/game/SectorInfo$ExportStat;)V" },
};

static jclass innerClasses[] {
	&class_mindustry_game_SectorInfo$ExportStat,
};

static FieldMetadata fields[] {
	{ "valueWindow", &class_int, (intptr_t) &SF_mindustry_game_SectorInfo_valueWindow, "I", 26 },
	{ "refreshPeriod", &class_float, (intptr_t) &SF_mindustry_game_SectorInfo_refreshPeriod, "F", 26 },
	{ "returnf", &class_float, (intptr_t) &SF_mindustry_game_SectorInfo_returnf, "F", 10 },
	{ "production", &class_arc_struct_ObjectMap, offsetof(mindustry_game_SectorInfo, F_production), "Larc/struct/ObjectMap;", 1 },
	{ "rawProduction", &class_arc_struct_ObjectMap, offsetof(mindustry_game_SectorInfo, F_rawProduction), "Larc/struct/ObjectMap;", 1 },
	{ "export", &class_arc_struct_ObjectMap, offsetof(mindustry_game_SectorInfo, F_export), "Larc/struct/ObjectMap;", 1 },
	{ "imports", &class_arc_struct_ObjectMap, offsetof(mindustry_game_SectorInfo, F_imports), "Larc/struct/ObjectMap;", 1 },
	{ "items", &class_mindustry_type_ItemSeq, offsetof(mindustry_game_SectorInfo, F_items), "Lmindustry/type/ItemSeq;", 1 },
	{ "bestCoreType", &class_mindustry_world_Block, offsetof(mindustry_game_SectorInfo, F_bestCoreType), "Lmindustry/world/Block;", 1 },
	{ "storageCapacity", &class_int, offsetof(mindustry_game_SectorInfo, F_storageCapacity), "I", 1 },
	{ "hasCore", &class_boolean, offsetof(mindustry_game_SectorInfo, F_hasCore), "Z", 1 },
	{ "lastPresetName", &class_java_lang_String, offsetof(mindustry_game_SectorInfo, F_lastPresetName), "Ljava/lang/String;", 1 },
	{ "lastWidth", &class_int, offsetof(mindustry_game_SectorInfo, F_lastWidth), "I", 1 },
	{ "lastHeight", &class_int, offsetof(mindustry_game_SectorInfo, F_lastHeight), "I", 1 },
	{ "wasCaptured", &class_boolean, offsetof(mindustry_game_SectorInfo, F_wasCaptured), "Z", 1 },
	{ "origin", &class_mindustry_type_Sector, offsetof(mindustry_game_SectorInfo, F_origin), "Lmindustry/type/Sector;", 1 },
	{ "destination", &class_mindustry_type_Sector, offsetof(mindustry_game_SectorInfo, F_destination), "Lmindustry/type/Sector;", 1 },
	{ "resources", &class_arc_struct_Seq, offsetof(mindustry_game_SectorInfo, F_resources), "Larc/struct/Seq;", 1 },
	{ "waves", &class_boolean, offsetof(mindustry_game_SectorInfo, F_waves), "Z", 1 },
	{ "attack", &class_boolean, offsetof(mindustry_game_SectorInfo, F_attack), "Z", 1 },
	{ "hasSpawns", &class_boolean, offsetof(mindustry_game_SectorInfo, F_hasSpawns), "Z", 1 },
	{ "attempts", &class_int, offsetof(mindustry_game_SectorInfo, F_attempts), "I", 1 },
	{ "wave", &class_int, offsetof(mindustry_game_SectorInfo, F_wave), "I", 1 },
	{ "winWave", &class_int, offsetof(mindustry_game_SectorInfo, F_winWave), "I", 1 },
	{ "waveSpacing", &class_float, offsetof(mindustry_game_SectorInfo, F_waveSpacing), "F", 1 },
	{ "spawnPosition", &class_int, offsetof(mindustry_game_SectorInfo, F_spawnPosition), "I", 1 },
	{ "minutesCaptured", &class_float, offsetof(mindustry_game_SectorInfo, F_minutesCaptured), "F", 1 },
	{ "lightCoverage", &class_float, offsetof(mindustry_game_SectorInfo, F_lightCoverage), "F", 1 },
	{ "name", &class_java_lang_String, offsetof(mindustry_game_SectorInfo, F_name), "Ljava/lang/String;", 1 },
	{ "icon", &class_java_lang_String, offsetof(mindustry_game_SectorInfo, F_icon), "Ljava/lang/String;", 1 },
	{ "contentIcon", &class_mindustry_ctype_UnlockableContent, offsetof(mindustry_game_SectorInfo, F_contentIcon), "Lmindustry/ctype/UnlockableContent;", 1 },
	{ "waveVersion", &class_int, offsetof(mindustry_game_SectorInfo, F_waveVersion), "I", 1 },
	{ "shown", &class_boolean, offsetof(mindustry_game_SectorInfo, F_shown), "Z", 1 },
	{ "importCooldownTimers", &class_arc_struct_ObjectFloatMap, offsetof(mindustry_game_SectorInfo, F_importCooldownTimers), "Larc/struct/ObjectFloatMap;", 1 },
	{ "importRateCache", getArrayClass(&class_float, 1), offsetof(mindustry_game_SectorInfo, F_importRateCache), "[F", 129 },
	{ "lastImported", &class_mindustry_type_ItemSeq, offsetof(mindustry_game_SectorInfo, F_lastImported), "Lmindustry/type/ItemSeq;", 129 },
	{ "time", &class_arc_util_Interval, offsetof(mindustry_game_SectorInfo, F_time), "Larc/util/Interval;", 130 },
	{ "coreDeltas", getArrayClass(&class_int, 1), offsetof(mindustry_game_SectorInfo, F_coreDeltas), "[I", 130 },
	{ "productionDeltas", getArrayClass(&class_int, 1), offsetof(mindustry_game_SectorInfo, F_productionDeltas), "[I", 130 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_game_SectorInfo, 0, "()V", 1 },
	{ "sectorDataMatches", (intptr_t) M_mindustry_game_SectorInfo_sectorDataMatches_mindustry_type_Sector_R_boolean, VTABLE_mindustry_game_SectorInfo_sectorDataMatches_mindustry_type_Sector_R_boolean, "(Lmindustry/type/Sector;)Z", 1 },
	{ "handleCoreItem", (intptr_t) M_mindustry_game_SectorInfo_handleCoreItem_mindustry_type_Item_int, VTABLE_mindustry_game_SectorInfo_handleCoreItem_mindustry_type_Item_int, "(Lmindustry/type/Item;I)V", 1 },
	{ "handleProduction", (intptr_t) M_mindustry_game_SectorInfo_handleProduction_mindustry_type_Item_int, VTABLE_mindustry_game_SectorInfo_handleProduction_mindustry_type_Item_int, "(Lmindustry/type/Item;I)V", 1 },
	{ "handleItemExport", (intptr_t) M_mindustry_game_SectorInfo_handleItemExport_mindustry_type_ItemStack, VTABLE_mindustry_game_SectorInfo_handleItemExport_mindustry_type_ItemStack, "(Lmindustry/type/ItemStack;)V", 1 },
	{ "handleItemExport", (intptr_t) M_mindustry_game_SectorInfo_handleItemExport_mindustry_type_Item_int, VTABLE_mindustry_game_SectorInfo_handleItemExport_mindustry_type_Item_int, "(Lmindustry/type/Item;I)V", 1 },
	{ "handleItemImport", (intptr_t) M_mindustry_game_SectorInfo_handleItemImport_mindustry_type_Item_int, VTABLE_mindustry_game_SectorInfo_handleItemImport_mindustry_type_Item_int, "(Lmindustry/type/Item;I)V", 1 },
	{ "getExport", (intptr_t) M_mindustry_game_SectorInfo_getExport_mindustry_type_Item_R_float, VTABLE_mindustry_game_SectorInfo_getExport_mindustry_type_Item_R_float, "(Lmindustry/type/Item;)F", 1 },
	{ "hasExport", (intptr_t) M_mindustry_game_SectorInfo_hasExport_mindustry_type_Item_R_boolean, VTABLE_mindustry_game_SectorInfo_hasExport_mindustry_type_Item_R_boolean, "(Lmindustry/type/Item;)Z", 1 },
	{ "refreshImportRates", (intptr_t) M_mindustry_game_SectorInfo_refreshImportRates_mindustry_type_Planet, VTABLE_mindustry_game_SectorInfo_refreshImportRates_mindustry_type_Planet, "(Lmindustry/type/Planet;)V", 1 },
	{ "getImportRates", (intptr_t) M_mindustry_game_SectorInfo_getImportRates_mindustry_type_Planet_R_Array1_float, VTABLE_mindustry_game_SectorInfo_getImportRates_mindustry_type_Planet_R_Array1_float, "(Lmindustry/type/Planet;)[F", 1 },
	{ "getImportRate", (intptr_t) M_mindustry_game_SectorInfo_getImportRate_mindustry_type_Planet_mindustry_type_Item_R_float, VTABLE_mindustry_game_SectorInfo_getImportRate_mindustry_type_Planet_mindustry_type_Item_R_float, "(Lmindustry/type/Planet;Lmindustry/type/Item;)F", 1 },
	{ "write", (intptr_t) M_mindustry_game_SectorInfo_write, VTABLE_mindustry_game_SectorInfo_write, "()V", 1 },
	{ "prepare", (intptr_t) M_mindustry_game_SectorInfo_prepare_mindustry_type_Sector, VTABLE_mindustry_game_SectorInfo_prepare_mindustry_type_Sector, "(Lmindustry/type/Sector;)V", 1 },
	{ "update", (intptr_t) M_mindustry_game_SectorInfo_update, VTABLE_mindustry_game_SectorInfo_update, "()V", 1 },
	{ "updateStats", (intptr_t) M_mindustry_game_SectorInfo_updateStats_arc_struct_ObjectMap, VTABLE_mindustry_game_SectorInfo_updateStats_arc_struct_ObjectMap, "(Larc/struct/ObjectMap;)V", 0 },
	{ "updateDelta", (intptr_t) M_mindustry_game_SectorInfo_updateDelta_mindustry_type_Item_arc_struct_ObjectMap_Array1_int, VTABLE_mindustry_game_SectorInfo_updateDelta_mindustry_type_Item_arc_struct_ObjectMap_Array1_int, "(Lmindustry/type/Item;Larc/struct/ObjectMap;[I)V", 0 },
	{ "exportRates", (intptr_t) M_mindustry_game_SectorInfo_exportRates_R_arc_struct_ObjectFloatMap, VTABLE_mindustry_game_SectorInfo_exportRates_R_arc_struct_ObjectFloatMap, "()Larc/struct/ObjectFloatMap;", 1 },
	{ "anyExports", (intptr_t) M_mindustry_game_SectorInfo_anyExports_R_boolean, VTABLE_mindustry_game_SectorInfo_anyExports_R_boolean, "()Z", 1 },
	{ "importStats", (intptr_t) M_mindustry_game_SectorInfo_importStats_mindustry_type_Planet_R_arc_struct_ObjectMap, VTABLE_mindustry_game_SectorInfo_importStats_mindustry_type_Planet_R_arc_struct_ObjectMap, "(Lmindustry/type/Planet;)Larc/struct/ObjectMap;", 1 },
	{ "eachImport", (intptr_t) M_mindustry_game_SectorInfo_eachImport_mindustry_type_Planet_arc_func_Cons, VTABLE_mindustry_game_SectorInfo_eachImport_mindustry_type_Planet_arc_func_Cons, "(Lmindustry/type/Planet;Larc/func/Cons;)V", 1 },
	{ "lambda$importStats$0", (intptr_t) SM_mindustry_game_SectorInfo_lambda$importStats$0_arc_struct_ObjectMap_mindustry_type_Sector, 0, "(Larc/struct/ObjectMap;Lmindustry/type/Sector;)V", 4106 },
	{ "lambda$importStats$1", (intptr_t) SM_mindustry_game_SectorInfo_lambda$importStats$1_arc_struct_ObjectMap_mindustry_type_Item_mindustry_game_SectorInfo$ExportStat, 0, "(Larc/struct/ObjectMap;Lmindustry/type/Item;Lmindustry/game/SectorInfo$ExportStat;)V", 4106 },
	{ "lambda$anyExports$0", (intptr_t) SM_mindustry_game_SectorInfo_lambda$anyExports$0_mindustry_type_Item_mindustry_game_SectorInfo$ExportStat, 0, "(Lmindustry/type/Item;Lmindustry/game/SectorInfo$ExportStat;)V", 4106 },
	{ "lambda$exportRates$0", (intptr_t) SM_mindustry_game_SectorInfo_lambda$exportRates$0_arc_struct_ObjectFloatMap_mindustry_type_Item_mindustry_game_SectorInfo$ExportStat, 0, "(Larc/struct/ObjectFloatMap;Lmindustry/type/Item;Lmindustry/game/SectorInfo$ExportStat;)V", 4106 },
	{ "lambda$updateStats$0", (intptr_t) SM_mindustry_game_SectorInfo_lambda$updateStats$0_mindustry_type_Item_mindustry_game_SectorInfo$ExportStat, 0, "(Lmindustry/type/Item;Lmindustry/game/SectorInfo$ExportStat;)V", 4106 },
	{ "lambda$prepare$3", (intptr_t) SM_mindustry_game_SectorInfo_lambda$prepare$3_mindustry_gen_Building_R_boolean, 0, "(Lmindustry/gen/Building;)Z", 4106 },
	{ "lambda$prepare$2", (intptr_t) M_mindustry_game_SectorInfo_lambda$prepare$2_mindustry_type_Item_mindustry_game_SectorInfo$ExportStat, VTABLE_mindustry_game_SectorInfo_lambda$prepare$2_mindustry_type_Item_mindustry_game_SectorInfo$ExportStat, "(Lmindustry/type/Item;Lmindustry/game/SectorInfo$ExportStat;)V", 4098 },
	{ "lambda$prepare$1", (intptr_t) SM_mindustry_game_SectorInfo_lambda$prepare$1_mindustry_gen_Unit_R_float, 0, "(Lmindustry/gen/Unit;)F", 4106 },
	{ "lambda$prepare$0", (intptr_t) SM_mindustry_game_SectorInfo_lambda$prepare$0_mindustry_world_blocks_storage_CoreBlock$CoreBuild_R_float, 0, "(Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;)F", 4106 },
	{ "lambda$write$0", (intptr_t) SM_mindustry_game_SectorInfo_lambda$write$0_mindustry_world_blocks_storage_CoreBlock$CoreBuild_mindustry_type_Item_int, 0, "(Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;Lmindustry/type/Item;I)V", 4106 },
	{ "lambda$refreshImportRates$0", (intptr_t) M_mindustry_game_SectorInfo_lambda$refreshImportRates$0_mindustry_type_Sector, VTABLE_mindustry_game_SectorInfo_lambda$refreshImportRates$0_mindustry_type_Sector, "(Lmindustry/type/Sector;)V", 4098 },
	{ "lambda$refreshImportRates$1", (intptr_t) M_mindustry_game_SectorInfo_lambda$refreshImportRates$1_mindustry_type_Item_mindustry_game_SectorInfo$ExportStat, VTABLE_mindustry_game_SectorInfo_lambda$refreshImportRates$1_mindustry_type_Item_mindustry_game_SectorInfo$ExportStat, "(Lmindustry/type/Item;Lmindustry/game/SectorInfo$ExportStat;)V", 4098 },
};

Class class_mindustry_game_SectorInfo{
		.nativeName = (intptr_t) "mindustry/game/SectorInfo",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_game_SectorInfo),
		.classVtable = (intptr_t) vtable_mindustry_game_SectorInfo,
		.staticInitializer = (intptr_t) clinit_mindustry_game_SectorInfo,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_game_SectorInfo,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 39,
		.nativeFields = (intptr_t) fields,
		.methodCount = 33,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 34,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_game_SectorInfo = registerClass(&class_mindustry_game_SectorInfo);

}
