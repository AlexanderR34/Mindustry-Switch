#include "mindustry/maps/Maps.h"
#include "arc/assets/AssetDescriptor.h"
#include "arc/func/Prov.h"
#include "mindustry/maps/Maps_invoke_arc_func_Boolf_9.h"
#include "mindustry/maps/Maps_invoke_arc_func_Boolf_8.h"
#include "java/util/concurrent/Future.h"
#include "mindustry/maps/Maps_invoke_arc_func_Boolf_7.h"
#include "mindustry/maps/Maps_invoke_arc_func_Boolf_6.h"
#include "java/lang/Runnable.h"
#include "arc/graphics/Pixmap.h"
#include "mindustry/maps/Maps.h"
#include "mindustry/mod/Mods.h"
#include "arc/util/serialization/Json.h"
#include "arc/struct/Seq.h"
#include "mindustry/service/Achievement.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/world/Tile.h"
#include "mindustry/maps/Maps_ShuffleMode.h"
#include "java/io/StringWriter.h"
#include "arc/func/Boolf.h"
#include "mindustry/game/EventType_ClientLoadEvent.h"
#include "arc/Core.h"
#include "java/util/Iterator.h"
#include "arc/util/Log.h"
#include "arc/Files.h"
#include "java/io/DataInputStream.h"
#include "arc/util/Nullable.h"
#include "arc/graphics/Texture.h"
#include "mindustry/maps/Maps_invoke_java_lang_Runnable_9.h"
#include "java/io/BufferedInputStream.h"
#include "java/lang/Object.h"
#include "mindustry/maps/Maps_invoke_java_lang_Runnable_7.h"
#include "mindustry/maps/Maps_invoke_java_lang_Runnable_8.h"
#include "mindustry/maps/Maps_invoke_java_lang_Runnable_6.h"
#include "java/io/DataOutputStream.h"
#include "arc/struct/ObjectSet.h"
#include "arc/struct/ObjectMap.h"
#include "mindustry/world/blocks/storage/CoreBlock.h"
#include "arc/graphics/GLTexture.h"
#include "mindustry/maps/Maps_invoke_java_lang_Runnable_11.h"
#include "mindustry/game/FogControl.h"
#include "mindustry/maps/Maps_invoke_java_lang_Runnable_10.h"
#include "mindustry/maps/Maps_invoke_arc_func_Prov_28.h"
#include "arc/util/serialization/JsonWriter.h"
#include "mindustry/maps/Maps_invoke_arc_func_Prov_27.h"
#include "mindustry/maps/Maps_invoke_arc_func_Prov_29.h"
#include "arc/func/Cons.h"
#include "mindustry/maps/Maps_invoke_arc_func_Cons2_1.h"
#include "arc/struct/ObjectSet_ObjectSetIterator.h"
#include "java/io/IOException.h"
#include "mindustry/game/Gamemode.h"
#include "arc/util/serialization/BaseJsonWriter.h"
#include "java/lang/AutoCloseable.h"
#include "java/lang/annotation/Annotation.h"
#include "java/lang/IllegalArgumentException.h"
#include "mindustry/core/Platform.h"
#include "mindustry/io/JsonIO.h"
#include "mindustry/maps/Maps_invoke_arc_func_Prov_17.h"
#include "mindustry/maps/Maps_invoke_arc_func_Prov_16.h"
#include "mindustry/maps/Maps_invoke_arc_func_Prov_19.h"
#include "java/io/OutputStream.h"
#include "mindustry/maps/Maps_invoke_arc_func_Prov_18.h"
#include "mindustry/maps/Maps_invoke_arc_func_Prov_24.h"
#include "mindustry/maps/Maps_invoke_arc_func_Boolf_11.h"
#include "mindustry/maps/Maps_invoke_arc_func_Prov_23.h"
#include "mindustry/maps/Maps_invoke_arc_func_Boolf_10.h"
#include "mindustry/maps/Maps_invoke_arc_func_Prov_26.h"
#include "mindustry/maps/Maps_invoke_arc_func_Prov_25.h"
#include "mindustry/maps/Maps_invoke_arc_func_Prov_20.h"
#include "mindustry/maps/Maps_invoke_arc_func_Prov_22.h"
#include "mindustry/maps/Maps_invoke_arc_func_Prov_21.h"
#include "mindustry/Vars.h"
#include "mindustry/core/World.h"
#include "mindustry/maps/MapPreviewLoader_MapPreviewParameter.h"
#include "arc/Events.h"
#include "java/io/Writer.h"
#include "java/lang/reflect/Constructor.h"
#include "mindustry/maps/Maps_invoke_arc_func_Prov_15.h"
#include "arc/struct/StringMap.h"
#include "mindustry/core/ContentLoader.h"
#include "arc/struct/IntSet_IntSetIterator.h"
#include "java/lang/Throwable.h"
#include "mindustry/maps/Map.h"
#include "java/lang/Exception.h"
#include "mindustry/maps/Maps_invoke_arc_func_Cons_9.h"
#include "java/lang/reflect/Field.h"
#include "java/util/concurrent/ExecutorService.h"
#include "mindustry/maps/Maps_invoke_arc_func_Cons_8.h"
#include "mindustry/maps/Maps_invoke_arc_func_Cons_7.h"
#include "mindustry/maps/Maps_invoke_arc_func_Cons_6.h"
#include "mindustry/maps/Maps_invoke_arc_func_Cons_5.h"
#include "mindustry/io/MapIO.h"
#include "arc/func/Cons2.h"
#include "arc/assets/AssetManager.h"
#include "java/lang/RuntimeException.h"
#include "arc/assets/loaders/AssetLoader.h"
#include "mindustry/world/Block.h"
#include "mindustry/core/FileTree.h"
#include "arc/assets/loaders/CustomLoader.h"
#include "arc/assets/AssetLoaderParameters.h"
#include "arc/files/Fi.h"
#include "arc/Application.h"
#include "mindustry/world/Tiles.h"
#include "java/io/InputStream.h"
#include "arc/struct/IntSet.h"
#include "java/lang/String.h"
#include "java/io/FilterInputStream.h"
#include "mindustry/maps/Maps_MapProvider.h"
#include "mindustry/world/blocks/environment/Floor.h"
#include "mindustry/maps/filters/ScatterFilter.h"
#include "mindustry/maps/filters/OreFilter.h"
#include "arc/util/UnsafeRunnable.h"
#include "mindustry/core/UI.h"
#include "java/lang/CharSequence.h"
#include "mindustry/game/SpawnGroup.h"
#include "mindustry/content/Blocks.h"
#include "arc/util/Strings.h"
#include "mindustry/mod/Mods_LoadedMod.h"
#include "java/lang/Class.h"

extern "C" {

jobject SF_mindustry_maps_Maps_allFilterTypes;
jobject SF_mindustry_maps_Maps_defaultMapNames;
jobject SF_mindustry_maps_Maps_pvpMaps;
jbool SF_mindustry_maps_Maps_useDefaultFolder;

void mark_mindustry_maps_Maps(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_maps_Maps_allFilterTypes)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_maps_Maps_allFilterTypes)->clazz)->markFunction)((jobject) SF_mindustry_maps_Maps_allFilterTypes, mark, depth + 1);
		if (SF_mindustry_maps_Maps_defaultMapNames)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_maps_Maps_defaultMapNames)->clazz)->markFunction)((jobject) SF_mindustry_maps_Maps_defaultMapNames, mark, depth + 1);
		if (SF_mindustry_maps_Maps_pvpMaps)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_maps_Maps_pvpMaps)->clazz)->markFunction)((jobject) SF_mindustry_maps_Maps_pvpMaps, mark, depth + 1);
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
	auto self = (mindustry_maps_Maps *) object;
	if (self->F_maps)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_maps)->clazz)->markFunction)((jobject) self->F_maps, mark, depth + 1);
	if (self->F_shuffleMode)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_shuffleMode)->clazz)->markFunction)((jobject) self->F_shuffleMode, mark, depth + 1);
	if (self->F_shuffler)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_shuffler)->clazz)->markFunction)((jobject) self->F_shuffler, mark, depth + 1);
	if (self->F_nextMapOverride)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_nextMapOverride)->clazz)->markFunction)((jobject) self->F_nextMapOverride, mark, depth + 1);
	if (self->F_previewList)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_previewList)->clazz)->markFunction)((jobject) self->F_previewList, mark, depth + 1);
}

jobject M_mindustry_maps_Maps_getShuffleMode_R_mindustry_maps_Maps$ShuffleMode(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/Maps:getShuffleMode", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(56);
	sp[0].o = (jobject)((mindustry_maps_Maps *) NULL_CHECK((frame[0].o)))->F_shuffleMode;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_maps_Maps_setShuffleMode_mindustry_maps_Maps$ShuffleMode(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/Maps:setShuffleMode", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(60);
	((mindustry_maps_Maps *) NULL_CHECK((frame[0].o)))->F_shuffleMode = (jref) (frame[1].o);
	LINE_NUMBER(61);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_maps_Maps_setMapProvider_mindustry_maps_Maps$MapProvider(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/Maps:setMapProvider", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(65);
	((mindustry_maps_Maps *) NULL_CHECK((frame[0].o)))->F_shuffler = (jref) (frame[1].o);
	LINE_NUMBER(66);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_maps_Maps_setNextMapOverride_mindustry_maps_Map(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/Maps:setNextMapOverride", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(70);
	((mindustry_maps_Maps *) NULL_CHECK((frame[0].o)))->F_nextMapOverride = (jref) (frame[1].o);
	LINE_NUMBER(71);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_maps_Maps_getNextMap_mindustry_game_Gamemode_mindustry_maps_Map_R_mindustry_maps_Map(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/Maps:getNextMap", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(75);
	sp[0].o = (jobject)((mindustry_maps_Maps *) NULL_CHECK((frame[0].o)))->F_nextMapOverride;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(76);
	sp[0].o = (jobject)((mindustry_maps_Maps *) NULL_CHECK((frame[0].o)))->F_nextMapOverride;
	frame[3].o = sp[0].o;
	LINE_NUMBER(77);
	((mindustry_maps_Maps *) NULL_CHECK((frame[0].o)))->F_nextMapOverride = (jref) (jobject(nullptr));
	LINE_NUMBER(78);
	popStackFrame(ctx);
	return (frame[3].o);
	}
label_1:;
	{
	LINE_NUMBER(81);
	sp[0].o = (jobject)((mindustry_maps_Maps *) NULL_CHECK((frame[0].o)))->F_shuffler;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	sp[0].o = (jobject)((mindustry_maps_Maps *) NULL_CHECK((frame[0].o)))->F_shuffler;
	sp[0].o = (jobject)((func_mindustry_maps_Maps$MapProvider_next_mindustry_game_Gamemode_mindustry_maps_Map_R_mindustry_maps_Map) resolveInterfaceMethod(ctx, &class_mindustry_maps_Maps$MapProvider, INDEX_mindustry_maps_Maps$MapProvider_next_mindustry_game_Gamemode_mindustry_maps_Map_R_mindustry_maps_Map, sp[0].o))(ctx, sp[0].o, (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(82);
	sp[0].o = (jobject)((mindustry_maps_Maps *) NULL_CHECK((frame[0].o)))->F_shuffleMode;
	sp[0].o = (jobject)((func_mindustry_maps_Maps$ShuffleMode_next_mindustry_game_Gamemode_mindustry_maps_Map_R_mindustry_maps_Map) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_maps_Maps$ShuffleMode_next_mindustry_game_Gamemode_mindustry_maps_Map_R_mindustry_maps_Map])(ctx, sp[0].o, (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_maps_Maps_all_R_arc_struct_Seq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/Maps:all", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(87);
	sp[0].o = (jobject)((mindustry_maps_Maps *) NULL_CHECK((frame[0].o)))->F_maps;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_maps_Maps_customMaps_R_arc_struct_Seq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/Maps:customMaps", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(92);
	sp[0].o = (jobject)((mindustry_maps_Maps *) NULL_CHECK((frame[0].o)))->F_maps;
	{ /* InvokeDynamic */
		clinit_mindustry_maps_Maps_invoke_arc_func_Boolf_6(ctx);
		auto proxy = (mindustry_maps_Maps_invoke_arc_func_Boolf_6 *) gcAlloc(ctx, &class_mindustry_maps_Maps_invoke_arc_func_Boolf_6);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_select_arc_func_Boolf_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_select_arc_func_Boolf_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_maps_Maps_defaultMaps_R_arc_struct_Seq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/Maps:defaultMaps", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(97);
	sp[0].o = (jobject)((mindustry_maps_Maps *) NULL_CHECK((frame[0].o)))->F_maps;
	{ /* InvokeDynamic */
		clinit_mindustry_maps_Maps_invoke_arc_func_Boolf_7(ctx);
		auto proxy = (mindustry_maps_Maps_invoke_arc_func_Boolf_7 *) gcAlloc(ctx, &class_mindustry_maps_Maps_invoke_arc_func_Boolf_7);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_select_arc_func_Boolf_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_select_arc_func_Boolf_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_maps_Maps_moddedMaps_R_arc_struct_Seq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/Maps:moddedMaps", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(102);
	sp[0].o = (jobject)((mindustry_maps_Maps *) NULL_CHECK((frame[0].o)))->F_maps;
	{ /* InvokeDynamic */
		clinit_mindustry_maps_Maps_invoke_arc_func_Boolf_8(ctx);
		auto proxy = (mindustry_maps_Maps_invoke_arc_func_Boolf_8 *) gcAlloc(ctx, &class_mindustry_maps_Maps_invoke_arc_func_Boolf_8);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_select_arc_func_Boolf_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_select_arc_func_Boolf_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_maps_Maps_byName_java_lang_String_R_mindustry_maps_Map(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/Maps:byName", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(106);
	sp[0].o = (jobject)((mindustry_maps_Maps *) NULL_CHECK((frame[0].o)))->F_maps;
	{ /* InvokeDynamic */
		clinit_mindustry_maps_Maps_invoke_arc_func_Boolf_9(ctx);
		auto proxy = (mindustry_maps_Maps_invoke_arc_func_Boolf_9 *) gcAlloc(ctx, &class_mindustry_maps_Maps_invoke_arc_func_Boolf_9);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_find_arc_func_Boolf_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_find_arc_func_Boolf_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_maps_Map, sp[0].o));
	}

	popStackFrame(ctx);
}

void init_mindustry_maps_Maps(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/Maps:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_Maps(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(109);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(47);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_maps_Maps *) NULL_CHECK(sp[0].o))->F_maps = (jref) sp[1].o;
	LINE_NUMBER(48);
	sp[0].o = frame[0].o;
	clinit_mindustry_maps_Maps$ShuffleMode(ctx);
	sp[1].o = (jobject)SF_mindustry_maps_Maps$ShuffleMode_all;
	((mindustry_maps_Maps *) NULL_CHECK(sp[0].o))->F_shuffleMode = (jref) sp[1].o;
	LINE_NUMBER(53);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectSet(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectSet);
	init_arc_struct_ObjectSet(ctx, sp[1].o);
	((mindustry_maps_Maps *) NULL_CHECK(sp[0].o))->F_previewList = (jref) sp[1].o;
	LINE_NUMBER(110);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$ClientLoadEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_maps_Maps_invoke_arc_func_Cons_5(ctx);
		auto proxy = (mindustry_maps_Maps_invoke_arc_func_Cons_5 *) gcAlloc(ctx, &class_mindustry_maps_Maps_invoke_arc_func_Cons_5);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(112);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_assets;
	if (sp[0].o == nullptr) goto label_6;
	}
	{
	LINE_NUMBER(113);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_assets;
	sp[0].o = (jobject)((func_arc_assets_AssetManager_getLoader_java_lang_Class_R_arc_assets_loaders_AssetLoader) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_getLoader_java_lang_Class_R_arc_assets_loaders_AssetLoader])(ctx, sp[0].o, (((jobject) &class_mindustry_core_ContentLoader)));
	sp[0].o = checkCast(ctx, &class_arc_assets_loaders_CustomLoader, sp[0].o);
	{ /* InvokeDynamic */
		clinit_mindustry_maps_Maps_invoke_java_lang_Runnable_6(ctx);
		auto proxy = (mindustry_maps_Maps_invoke_java_lang_Runnable_6 *) gcAlloc(ctx, &class_mindustry_maps_Maps_invoke_java_lang_Runnable_6);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((arc_assets_loaders_CustomLoader *) NULL_CHECK(sp[0].o))->F_loaded = (jref) sp[1].o;
	}
label_6:;
	LINE_NUMBER(115);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_maps_Maps_loadInternalMap_java_lang_String_R_mindustry_maps_Map(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/Maps:loadInternalMap", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(122);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_tree;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"maps/\u0001.msav"_j.string, 1, (frame[1].o));
	sp[0].o = (jobject)((func_mindustry_core_FileTree_get_java_lang_String_R_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_FileTree_get_java_lang_String_R_arc_files_Fi])(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(125);
	sp[0].o = (jobject)SM_mindustry_io_MapIO_createMap_arc_files_Fi_boolean_R_mindustry_maps_Map(ctx, (frame[2].o), (jint(0)));
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(126);
	frame[3].o = sp[0].o;
	LINE_NUMBER(127);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_Throwable(ctx, sp[0].o, (frame[3].o));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void M_mindustry_maps_Maps_load(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/Maps:load", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(135);
	clinit_mindustry_maps_Maps(ctx);
	sp[0].o = (jobject)SF_mindustry_maps_Maps_defaultMapNames;
	frame[1].o = sp[0].o;
	frame[2].i = (((jarray) nullCheck(ctx, (frame[1].o)))->length);
	frame[3].i = (jint(0));
	}
label_8:;
	{
	if ((frame[3].i) >= (frame[2].i)) goto label_1;
	}
	{
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i)));
	LINE_NUMBER(136);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_files;
	sp += 1;
	if ((clinit_mindustry_maps_Maps(ctx), (jint)SF_mindustry_maps_Maps_useDefaultFolder) == 0) goto label_10;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"maps/default/"_j));
	goto label_11;
label_10:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"maps/"_j));
label_11:;
	{
	sp -= 2;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001\u0001.msav"_j.string, 2, sp[1].o, (frame[4].o));
	sp[0].o = (jobject)((func_arc_Files_internal_java_lang_String_R_arc_files_Fi) resolveInterfaceMethod(ctx, &class_arc_Files, INDEX_arc_Files_internal_java_lang_String_R_arc_files_Fi, sp[0].o))(ctx, sp[0].o, sp[1].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(137);
	sp[0].o = (jobject)((func_mindustry_maps_Maps_loadMap_arc_files_Fi_boolean_R_mindustry_maps_Map) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_Maps_loadMap_arc_files_Fi_boolean_R_mindustry_maps_Map])(ctx, (frame[0].o), (frame[5].o), (jint(0)));
	LINE_NUMBER(135);
	INST_IINC(3, 1);
	goto label_8;
	}
label_1:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(141);
	goto label_14;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(139);
	frame[1].o = sp[0].o;
	LINE_NUMBER(140);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_Throwable(ctx, sp[0].o, (frame[1].o));
	throwException(ctx, sp[0].o);	}
label_14:;
	{
	LINE_NUMBER(144);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_customMapDirectory;
	{ /* InvokeDynamic */
		clinit_mindustry_maps_Maps_invoke_arc_func_Cons_6(ctx);
		auto proxy = (mindustry_maps_Maps_invoke_arc_func_Cons_6 *) gcAlloc(ctx, &class_mindustry_maps_Maps_invoke_arc_func_Cons_6);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_files_Fi_walk_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_walk_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(156);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_platform;
	sp[0].o = (jobject)((func_mindustry_core_Platform_getWorkshopContent_java_lang_Class_R_arc_struct_Seq) resolveInterfaceMethod(ctx, &class_mindustry_core_Platform, INDEX_mindustry_core_Platform_getWorkshopContent_java_lang_Class_R_arc_struct_Seq, sp[0].o))(ctx, sp[0].o, (((jobject) &class_mindustry_maps_Map)));
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_17:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_18;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_arc_files_Fi, sp[0].o));
	}
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	LINE_NUMBER(159);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = (jobject)SF_mindustry_service_Achievement_downloadMapWorkshop;
	((func_mindustry_service_Achievement_complete) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_service_Achievement_complete])(ctx, sp[0].o);
	LINE_NUMBER(160);
	sp[0].o = (jobject)((func_mindustry_maps_Maps_loadMap_arc_files_Fi_boolean_R_mindustry_maps_Map) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_Maps_loadMap_arc_files_Fi_boolean_R_mindustry_maps_Map])(ctx, (frame[0].o), (frame[2].o), (jint(0)));
	frame[3].o = sp[0].o;
	LINE_NUMBER(161);
	((mindustry_maps_Map *) NULL_CHECK((frame[3].o)))->F_workshop = (jint(1));
	LINE_NUMBER(162);
	sp[0].o = (jobject)((mindustry_maps_Map *) NULL_CHECK((frame[3].o)))->F_tags;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"steamid"_j));
	sp[2].o = (jobject)((func_arc_files_Fi_parent_R_arc_files_Fi) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_files_Fi_parent_R_arc_files_Fi])(ctx, (frame[2].o));
	sp[2].o = (jobject)((func_arc_files_Fi_name_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_files_Fi_name_R_java_lang_String])(ctx, sp[2].o);
	sp[0].o = (jobject)((func_arc_struct_StringMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_StringMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(166);
	goto label_22;
label_6:;
	{
	sp -= 1;
	LINE_NUMBER(163);
	frame[3].o = sp[0].o;
	LINE_NUMBER(164);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"Failed to load workshop map file '@'!"_j));
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = (frame[2].o);
	SM_arc_util_Log_err_java_lang_String_Array1_java_lang_Object(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(165);
	SM_arc_util_Log_err_java_lang_Throwable(ctx, (frame[3].o));
	}
label_22:;
	LINE_NUMBER(167);
	goto label_17;
label_18:;
	{
	LINE_NUMBER(170);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_mods;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"maps"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_maps_Maps_invoke_arc_func_Cons2_1(ctx);
		auto proxy = (mindustry_maps_Maps_invoke_arc_func_Cons2_1 *) gcAlloc(ctx, &class_mindustry_maps_Maps_invoke_arc_func_Cons2_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	((func_mindustry_mod_Mods_listFiles_java_lang_String_arc_func_Cons2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_Mods_listFiles_java_lang_String_arc_func_Cons2])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(179);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_maps_Maps_reload(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/Maps:reload", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(182);
	sp[0].o = (jobject)((mindustry_maps_Maps *) NULL_CHECK((frame[0].o)))->F_maps;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_1:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_mindustry_maps_Map, sp[0].o));
	LINE_NUMBER(183);
	sp[0].o = (jobject)((mindustry_maps_Map *) NULL_CHECK((frame[2].o)))->F_texture;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	LINE_NUMBER(184);
	sp[0].o = (jobject)((mindustry_maps_Map *) NULL_CHECK((frame[2].o)))->F_texture;
	((func_arc_graphics_Texture_dispose) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Texture_dispose])(ctx, sp[0].o);
	LINE_NUMBER(185);
	((mindustry_maps_Map *) NULL_CHECK((frame[2].o)))->F_texture = (jref) (jobject(nullptr));
	}
label_4:;
	LINE_NUMBER(187);
	goto label_1;
label_2:;
	{
	LINE_NUMBER(188);
	sp[0].o = (jobject)((mindustry_maps_Maps *) NULL_CHECK((frame[0].o)))->F_maps;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(189);
	((func_mindustry_maps_Maps_load) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_Maps_load])(ctx, (frame[0].o));
	LINE_NUMBER(190);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_maps_Maps_saveMap_arc_struct_ObjectMap_R_mindustry_maps_Map(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/Maps:saveMap", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(193);
	sp[0].o = (jobject)((func_mindustry_maps_Maps_saveMap_arc_struct_ObjectMap_boolean_R_mindustry_maps_Map) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_Maps_saveMap_arc_struct_ObjectMap_boolean_R_mindustry_maps_Map])(ctx, (frame[0].o), (frame[1].o), (jint(1)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_maps_Maps_saveMap_arc_struct_ObjectMap_boolean_R_mindustry_maps_Map(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[18];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/Maps:saveMap", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(203);
	clinit_arc_struct_StringMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_StringMap);
	init_arc_struct_StringMap_arc_struct_ObjectMap(ctx, sp[0].o, (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(204);
	sp[0].o = (jobject)((func_arc_struct_StringMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_StringMap_get_java_lang_Object_R_java_lang_Object])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"name"_j))));
	frame[4].o = (checkCast(ctx, &class_java_lang_String, sp[0].o));
	LINE_NUMBER(205);
	if ((frame[4].o) != nullptr) goto label_6;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Can't save a map with no name. How did this happen?"_j))));
	throwException(ctx, sp[0].o);	}
label_6:;
	{
	LINE_NUMBER(209);
	sp[0].o = (jobject)((mindustry_maps_Maps *) NULL_CHECK((frame[0].o)))->F_maps;
	{ /* InvokeDynamic */
		clinit_mindustry_maps_Maps_invoke_arc_func_Boolf_10(ctx);
		auto proxy = (mindustry_maps_Maps_invoke_arc_func_Boolf_10 *) gcAlloc(ctx, &class_mindustry_maps_Maps_invoke_arc_func_Boolf_10);
		proxy->F_field0 = (jref) (frame[4].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_find_arc_func_Boolf_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_find_arc_func_Boolf_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	frame[6].o = (checkCast(ctx, &class_mindustry_maps_Map, sp[0].o));
	LINE_NUMBER(211);
	if ((frame[6].o) == nullptr) goto label_8;
	}
	{
	LINE_NUMBER(213);
	sp[0].o = (jobject)((mindustry_maps_Map *) NULL_CHECK((frame[6].o)))->F_texture;
	if (sp[0].o == nullptr) goto label_10;
	}
	{
	LINE_NUMBER(214);
	sp[0].o = (jobject)((mindustry_maps_Map *) NULL_CHECK((frame[6].o)))->F_texture;
	((func_arc_graphics_Texture_dispose) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Texture_dispose])(ctx, sp[0].o);
	LINE_NUMBER(215);
	((mindustry_maps_Map *) NULL_CHECK((frame[6].o)))->F_texture = (jref) (jobject(nullptr));
	}
label_10:;
	{
	LINE_NUMBER(217);
	sp[0].o = (jobject)((mindustry_maps_Maps *) NULL_CHECK((frame[0].o)))->F_maps;
	jint temp0 = (jint)((func_arc_struct_Seq_remove_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_remove_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[6].o));
	LINE_NUMBER(218);
	sp[0].o = (jobject)((mindustry_maps_Map *) NULL_CHECK((frame[6].o)))->F_file;
	frame[5].o = sp[0].o;
	goto label_15;
	}
label_8:;
	{
	LINE_NUMBER(220);
	sp[0].o = (jobject)((func_mindustry_maps_Maps_findFile_java_lang_String_R_arc_files_Fi) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_Maps_findFile_java_lang_String_R_arc_files_Fi])(ctx, (frame[0].o), (frame[4].o));
	frame[5].o = sp[0].o;
	}
label_15:;
	{
	LINE_NUMBER(224);
	clinit_mindustry_maps_Map(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_maps_Map);
	sp[1].o = frame[5].o;
	clinit_mindustry_Vars(ctx);
	sp[2].o = (jobject)SF_mindustry_Vars_world;
	jint temp0 = (jint)((func_mindustry_core_World_width_R_int) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_core_World_width_R_int])(ctx, sp[2].o);
	clinit_mindustry_Vars(ctx);
	sp[2].o = (jobject)SF_mindustry_Vars_world;
	jint temp1 = (jint)((func_mindustry_core_World_height_R_int) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_core_World_height_R_int])(ctx, sp[2].o);
	init_mindustry_maps_Map_arc_files_Fi_int_int_arc_struct_StringMap_boolean(ctx, sp[0].o, sp[1].o, temp0, temp1, (frame[3].o), (jint(1)));
	frame[7].o = sp[0].o;
	LINE_NUMBER(225);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_fogControl;
	((func_mindustry_game_FogControl_resetFog) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_FogControl_resetFog])(ctx, sp[0].o);
	LINE_NUMBER(226);
	SM_mindustry_io_MapIO_writeMap_arc_files_Fi_mindustry_maps_Map_boolean(ctx, (frame[5].o), (frame[7].o), (frame[2].i));
	LINE_NUMBER(228);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_headless) != 0) goto label_19;
	}
	{
	LINE_NUMBER(230);
	sp[0].o = (jobject)((mindustry_maps_Map *) NULL_CHECK((frame[7].o)))->F_teams;
	((func_arc_struct_IntSet_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_clear])(ctx, sp[0].o);
	LINE_NUMBER(231);
	((mindustry_maps_Map *) NULL_CHECK((frame[7].o)))->F_spawns = (jint(0));
	LINE_NUMBER(233);
	frame[8].i = (jint(0));
	}
label_23:;
	{
	if ((frame[8].i) >= ((jint)((mindustry_maps_Map *) NULL_CHECK((frame[7].o)))->F_width)) goto label_24;
	}
	{
	LINE_NUMBER(234);
	frame[9].i = (jint(0));
	}
label_26:;
	{
	if ((frame[9].i) >= ((jint)((mindustry_maps_Map *) NULL_CHECK((frame[7].o)))->F_height)) goto label_27;
	}
	{
	LINE_NUMBER(235);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_rawTile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_rawTile_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, (frame[8].i), (frame[9].i));
	frame[10].o = sp[0].o;
	LINE_NUMBER(237);
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[10].o));
	if ((isInstance(ctx, sp[0].o, &class_mindustry_world_blocks_storage_CoreBlock)) == 0) goto label_30;
	}
	{
	LINE_NUMBER(238);
	sp[0].o = (jobject)((mindustry_maps_Map *) NULL_CHECK((frame[7].o)))->F_teams;
	jint temp0 = (jint)((func_mindustry_world_Tile_getTeamID_R_int) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_mindustry_world_Tile_getTeamID_R_int])(ctx, (frame[10].o));
	jint temp1 = (jint)((func_arc_struct_IntSet_add_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_add_int_R_boolean])(ctx, sp[0].o, temp0);
	}
label_30:;
	{
	LINE_NUMBER(241);
	sp[0].o = (jobject)((func_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[10].o));
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_spawn;
	if (sp[0].o != sp[1].o) goto label_32;
	}
	{
	LINE_NUMBER(242);
	sp[0].o = frame[7].o;
	((mindustry_maps_Map *) NULL_CHECK(sp[0].o))->F_spawns = (((jint)((mindustry_maps_Map *) NULL_CHECK(sp[0].o))->F_spawns) + (jint(1)));
	}
label_32:;
	{
	LINE_NUMBER(234);
	INST_IINC(9, 1);
	goto label_26;
	}
label_27:;
	{
	LINE_NUMBER(233);
	INST_IINC(8, 1);
	goto label_23;
	}
label_24:;
	{
	LINE_NUMBER(247);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_assets;
	sp[1].o = (jobject)((func_mindustry_maps_Map_previewFile_R_arc_files_Fi) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_maps_Map_previewFile_R_arc_files_Fi])(ctx, (frame[7].o));
	sp[1].o = (jobject)((func_arc_files_Fi_path_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_files_Fi_path_R_java_lang_String])(ctx, sp[1].o);
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001.msav"_j.string, 1, sp[1].o);
	jint temp0 = (jint)((func_arc_assets_AssetManager_isLoaded_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_isLoaded_java_lang_String_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_34;
	}
	{
	LINE_NUMBER(248);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_assets;
	sp[1].o = (jobject)((func_mindustry_maps_Map_previewFile_R_arc_files_Fi) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_maps_Map_previewFile_R_arc_files_Fi])(ctx, (frame[7].o));
	sp[1].o = (jobject)((func_arc_files_Fi_path_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_files_Fi_path_R_java_lang_String])(ctx, sp[1].o);
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001.msav"_j.string, 1, sp[1].o);
	((func_arc_assets_AssetManager_unload_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_unload_java_lang_String])(ctx, sp[0].o, sp[1].o);
	}
label_34:;
	{
	LINE_NUMBER(251);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((mindustry_core_World *) NULL_CHECK(sp[0].o))->F_tiles;
	sp[0].o = (jobject)SM_mindustry_io_MapIO_generatePreview_mindustry_world_Tiles_R_arc_graphics_Pixmap(ctx, sp[0].o);
	frame[8].o = sp[0].o;
	LINE_NUMBER(252);
	((func_mindustry_maps_Maps_writeCache_mindustry_maps_Map) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_Maps_writeCache_mindustry_maps_Map])(ctx, (frame[0].o), (frame[7].o));
	LINE_NUMBER(254);
	sp[0].o = frame[7].o;
	clinit_arc_graphics_Texture(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_Texture);
	init_arc_graphics_Texture_arc_graphics_Pixmap(ctx, sp[1].o, (frame[8].o));
	((mindustry_maps_Map *) NULL_CHECK(sp[0].o))->F_texture = (jref) sp[1].o;
	LINE_NUMBER(255);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_mainExecutor;
	{ /* InvokeDynamic */
		clinit_mindustry_maps_Maps_invoke_java_lang_Runnable_7(ctx);
		auto proxy = (mindustry_maps_Maps_invoke_java_lang_Runnable_7 *) gcAlloc(ctx, &class_mindustry_maps_Maps_invoke_java_lang_Runnable_7);
		proxy->F_field1 = (jref) (frame[8].o);
		proxy->F_field0 = (jref) (frame[7].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_java_util_concurrent_ExecutorService_submit_java_lang_Runnable_R_java_util_concurrent_Future) resolveInterfaceMethod(ctx, &class_java_util_concurrent_ExecutorService, INDEX_java_util_concurrent_ExecutorService_submit_java_lang_Runnable_R_java_util_concurrent_Future, sp[0].o))(ctx, sp[0].o, sp[1].o);
	}
label_19:;
	{
	LINE_NUMBER(260);
	sp[0].o = (jobject)((mindustry_maps_Maps *) NULL_CHECK((frame[0].o)))->F_maps;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[7].o));
	LINE_NUMBER(261);
	sp[0].o = (jobject)((mindustry_maps_Maps *) NULL_CHECK((frame[0].o)))->F_maps;
	sp[0].o = (jobject)((func_arc_struct_Seq_sort_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_sort_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(263);
	sp[0].o = frame[7].o;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(265);
	frame[3].o = sp[0].o;
	LINE_NUMBER(266);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_Throwable(ctx, sp[0].o, (frame[3].o));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_mindustry_maps_Maps_importMap_arc_files_Fi_R_mindustry_maps_Map(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/Maps:importMap", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(272);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_arc_files_Fi_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_files_Fi_name_R_java_lang_String])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_mindustry_maps_Maps_findFile_java_lang_String_R_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_maps_Maps_findFile_java_lang_String_R_arc_files_Fi])(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(273);
	((func_arc_files_Fi_copyTo_arc_files_Fi) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_files_Fi_copyTo_arc_files_Fi])(ctx, (frame[1].o), (frame[2].o));
	LINE_NUMBER(275);
	sp[0].o = (jobject)((func_mindustry_maps_Maps_loadMap_arc_files_Fi_boolean_R_mindustry_maps_Map) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_Maps_loadMap_arc_files_Fi_boolean_R_mindustry_maps_Map])(ctx, (frame[0].o), (frame[2].o), (jint(1)));
	frame[3].o = sp[0].o;
	LINE_NUMBER(276);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Exception, (jint(1)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (jobject(nullptr));
	frame[4].o = sp[0].o;
	LINE_NUMBER(278);
	sp[0].o = frame[0].o;
	sp[1].o = frame[3].o;
	{ /* InvokeDynamic */
		clinit_mindustry_maps_Maps_invoke_arc_func_Cons_7(ctx);
		auto proxy = (mindustry_maps_Maps_invoke_arc_func_Cons_7 *) gcAlloc(ctx, &class_mindustry_maps_Maps_invoke_arc_func_Cons_7);
		proxy->F_field2 = (jref) (frame[4].o);
		proxy->F_field1 = (jref) (frame[3].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	((func_mindustry_maps_Maps_createNewPreview_mindustry_maps_Map_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_maps_Maps_createNewPreview_mindustry_maps_Map_arc_func_Cons])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(288);
	if (((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (jint(0)))) == nullptr) goto label_6;
	}
	{
	LINE_NUMBER(289);
	clinit_java_io_IOException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_IOException);
	init_java_io_IOException_java_lang_Throwable(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (jint(0)))));
	throwException(ctx, sp[0].o);	}
label_6:;
	{
	LINE_NUMBER(292);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

void M_mindustry_maps_Maps_tryCatchMapError_arc_util_UnsafeRunnable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/Maps:tryCatchMapError", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(299);
	((func_arc_util_UnsafeRunnable_run) resolveInterfaceMethod(ctx, &class_arc_util_UnsafeRunnable, INDEX_arc_util_UnsafeRunnable_run, (frame[1].o)))(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(310);
	goto label_4;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(300);
	frame[2].o = sp[0].o;
	LINE_NUMBER(301);
	SM_arc_util_Log_err_java_lang_Throwable(ctx, (frame[2].o));
	LINE_NUMBER(303);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"Outdated legacy map format"_j));
	sp[1].o = (jobject)((func_java_lang_Throwable_getMessage_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Throwable_getMessage_R_java_lang_String])(ctx, (frame[2].o));
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_7;
	}
	{
	LINE_NUMBER(304);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	((func_mindustry_core_UI_showErrorMessage_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showErrorMessage_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@editor.errornot"_j))));
	goto label_4;
	}
label_7:;
	{
	LINE_NUMBER(305);
	sp[0].o = (jobject)((func_java_lang_Throwable_getMessage_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Throwable_getMessage_R_java_lang_String])(ctx, (frame[2].o));
	if (sp[0].o == nullptr) goto label_9;
	}
	{
	sp[0].o = (jobject)((func_java_lang_Throwable_getMessage_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Throwable_getMessage_R_java_lang_String])(ctx, (frame[2].o));
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Incorrect header!"_j))));
	if (temp0 == 0) goto label_9;
	}
	{
	LINE_NUMBER(306);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	((func_mindustry_core_UI_showErrorMessage_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showErrorMessage_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@editor.errorheader"_j))));
	goto label_4;
	}
label_9:;
	{
	LINE_NUMBER(308);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	((func_mindustry_core_UI_showException_java_lang_String_java_lang_Throwable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showException_java_lang_String_java_lang_Throwable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@editor.errorload"_j))), (frame[2].o));
	}
label_4:;
	LINE_NUMBER(311);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_maps_Maps_removeMap_mindustry_maps_Map(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/Maps:removeMap", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(315);
	sp[0].o = (jobject)((mindustry_maps_Map *) NULL_CHECK((frame[1].o)))->F_texture;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(316);
	sp[0].o = (jobject)((mindustry_maps_Map *) NULL_CHECK((frame[1].o)))->F_texture;
	((func_arc_graphics_Texture_dispose) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Texture_dispose])(ctx, sp[0].o);
	LINE_NUMBER(317);
	((mindustry_maps_Map *) NULL_CHECK((frame[1].o)))->F_texture = (jref) (jobject(nullptr));
	}
label_1:;
	{
	LINE_NUMBER(320);
	sp[0].o = (jobject)((mindustry_maps_Maps *) NULL_CHECK((frame[0].o)))->F_maps;
	jint temp0 = (jint)((func_arc_struct_Seq_remove_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_remove_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(321);
	sp[0].o = (jobject)((mindustry_maps_Map *) NULL_CHECK((frame[1].o)))->F_file;
	jint temp1 = (jint)((func_arc_files_Fi_delete_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_delete_R_boolean])(ctx, sp[0].o);
	LINE_NUMBER(322);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_maps_Maps_readFilters_java_lang_String_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/Maps:readFilters", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(327);
	if ((frame[1].o) == nullptr) goto label_5;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_0;
	}
label_5:;
	{
	LINE_NUMBER(330);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(332);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_blocks_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_blocks_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_7:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_8;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_mindustry_world_Block, sp[0].o));
	LINE_NUMBER(333);
	jint temp0 = (jint)((func_mindustry_world_Block_isFloor_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_world_Block_isFloor_R_boolean])(ctx, (frame[4].o));
	if (temp0 == 0) goto label_10;
	}
	{
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[4].o)))->F_inEditor) == 0) goto label_10;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[4].o));
	sp[0].o = (jobject)((mindustry_world_blocks_environment_Floor *) NULL_CHECK(sp[0].o))->F_decoration;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	if (sp[0].o == sp[1].o) goto label_10;
	}
	{
	LINE_NUMBER(334);
	clinit_mindustry_maps_filters_ScatterFilter(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_maps_filters_ScatterFilter);
	init_mindustry_maps_filters_ScatterFilter(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(335);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)((func_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[4].o));
	((mindustry_maps_filters_ScatterFilter *) NULL_CHECK(sp[0].o))->F_flooronto = (jref) sp[1].o;
	LINE_NUMBER(336);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)((func_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[4].o));
	sp[1].o = (jobject)((mindustry_world_blocks_environment_Floor *) NULL_CHECK(sp[1].o))->F_decoration;
	((mindustry_maps_filters_ScatterFilter *) NULL_CHECK(sp[0].o))->F_block = (jref) sp[1].o;
	LINE_NUMBER(337);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, (frame[2].o), (frame[5].o));
	}
label_10:;
	LINE_NUMBER(339);
	goto label_7;
label_8:;
	{
	LINE_NUMBER(341);
	((func_mindustry_maps_Maps_addDefaultOres_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_Maps_addDefaultOres_arc_struct_Seq])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(343);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(346);
	sp[0].o = (jobject)SM_mindustry_io_JsonIO_read_java_lang_Class_java_lang_String_R_java_lang_Object(ctx, (((jobject) &class_arc_struct_Seq)), (frame[1].o));
	sp[0].o = checkCast(ctx, &class_arc_struct_Seq, sp[0].o);
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(347);
	frame[2].o = sp[0].o;
	LINE_NUMBER(348);
	((func_java_lang_Throwable_printStackTrace) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Throwable_printStackTrace])(ctx, (frame[2].o));
	LINE_NUMBER(349);
	sp[0].o = (jobject)((func_mindustry_maps_Maps_readFilters_java_lang_String_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_Maps_readFilters_java_lang_String_R_arc_struct_Seq])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8""_j))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_maps_Maps_addDefaultOres_arc_struct_Seq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/Maps:addDefaultOres", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(355);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_blocks_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_blocks_R_arc_struct_Seq])(ctx, sp[0].o);
	{ /* InvokeDynamic */
		clinit_mindustry_maps_Maps_invoke_arc_func_Boolf_11(ctx);
		auto proxy = (mindustry_maps_Maps_invoke_arc_func_Boolf_11 *) gcAlloc(ctx, &class_mindustry_maps_Maps_invoke_arc_func_Boolf_11);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_select_arc_func_Boolf_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_select_arc_func_Boolf_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(356);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[2].o));
	frame[3].o = sp[0].o;
	}
label_2:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_mindustry_world_Block, sp[0].o));
	LINE_NUMBER(357);
	clinit_mindustry_maps_filters_OreFilter(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_maps_filters_OreFilter);
	init_mindustry_maps_filters_OreFilter(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(358);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)((func_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[4].o));
	((mindustry_maps_filters_OreFilter *) NULL_CHECK(sp[0].o))->F_threshold = ((jfloat)((mindustry_world_blocks_environment_Floor *) NULL_CHECK(sp[1].o))->F_oreThreshold);
	LINE_NUMBER(359);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)((func_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[4].o));
	((mindustry_maps_filters_OreFilter *) NULL_CHECK(sp[0].o))->F_scl = ((jfloat)((mindustry_world_blocks_environment_Floor *) NULL_CHECK(sp[1].o))->F_oreScale);
	LINE_NUMBER(360);
	((mindustry_maps_filters_OreFilter *) NULL_CHECK((frame[5].o)))->F_ore = (jref) (frame[4].o);
	LINE_NUMBER(361);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, (frame[1].o), (frame[5].o));
	LINE_NUMBER(362);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(363);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_maps_Maps_writeWaves_arc_struct_Seq_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/Maps:writeWaves", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(366);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"[]"_j));
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(368);
	clinit_java_io_StringWriter(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_StringWriter);
	init_java_io_StringWriter(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(369);
	clinit_mindustry_io_JsonIO(ctx);
	sp[0].o = (jobject)SF_mindustry_io_JsonIO_json;
	clinit_arc_util_serialization_JsonWriter(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_util_serialization_JsonWriter);
	init_arc_util_serialization_JsonWriter_java_io_Writer(ctx, sp[1].o, (frame[2].o));
	((func_arc_util_serialization_Json_setWriter_arc_util_serialization_BaseJsonWriter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Json_setWriter_arc_util_serialization_BaseJsonWriter])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(371);
	clinit_mindustry_io_JsonIO(ctx);
	sp[0].o = (jobject)SF_mindustry_io_JsonIO_json;
	((func_arc_util_serialization_Json_writeArrayStart) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Json_writeArrayStart])(ctx, sp[0].o);
	LINE_NUMBER(372);
	frame[3].i = (jint(0));
	}
label_5:;
	{
	if ((frame[3].i) >= ((jint)((arc_struct_Seq *) NULL_CHECK((frame[1].o)))->F_size)) goto label_6;
	}
	{
	LINE_NUMBER(373);
	clinit_mindustry_io_JsonIO(ctx);
	sp[0].o = (jobject)SF_mindustry_io_JsonIO_json;
	((func_arc_util_serialization_Json_writeObjectStart_java_lang_Class_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Json_writeObjectStart_java_lang_Class_java_lang_Class])(ctx, sp[0].o, (((jobject) &class_mindustry_game_SpawnGroup)), (((jobject) &class_mindustry_game_SpawnGroup)));
	LINE_NUMBER(374);
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[1].o), (frame[3].i));
	sp[0].o = checkCast(ctx, &class_mindustry_game_SpawnGroup, sp[0].o);
	clinit_mindustry_io_JsonIO(ctx);
	sp[1].o = (jobject)SF_mindustry_io_JsonIO_json;
	((func_mindustry_game_SpawnGroup_write_arc_util_serialization_Json) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_SpawnGroup_write_arc_util_serialization_Json])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(375);
	clinit_mindustry_io_JsonIO(ctx);
	sp[0].o = (jobject)SF_mindustry_io_JsonIO_json;
	((func_arc_util_serialization_Json_writeObjectEnd) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Json_writeObjectEnd])(ctx, sp[0].o);
	LINE_NUMBER(372);
	INST_IINC(3, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(377);
	clinit_mindustry_io_JsonIO(ctx);
	sp[0].o = (jobject)SF_mindustry_io_JsonIO_json;
	((func_arc_util_serialization_Json_writeArrayEnd) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Json_writeArrayEnd])(ctx, sp[0].o);
	LINE_NUMBER(378);
	sp[0].o = (jobject)((func_java_io_StringWriter_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_StringWriter_toString_R_java_lang_String])(ctx, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_maps_Maps_readWaves_java_lang_String_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/Maps:readWaves", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(382);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	INST_ACONST_NULL();
	goto label_2;
label_1:;
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"[]"_j))));
	if (temp0 == 0) goto label_3;
	}
	{
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	sp += 1;
	goto label_2;
	}
label_3:;
	{
	clinit_mindustry_io_JsonIO(ctx);
	sp[0].o = (jobject)SF_mindustry_io_JsonIO_json;
	sp[0].o = (jobject)((func_arc_util_serialization_Json_fromJson_java_lang_Class_java_lang_String_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Json_fromJson_java_lang_Class_java_lang_String_R_java_lang_Object])(ctx, sp[0].o, (((jobject) getArrayClass(&class_mindustry_game_SpawnGroup, 1))), (frame[1].o));
	sp[0].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, (checkCast(ctx, getArrayClass(&class_mindustry_game_SpawnGroup, 1), sp[0].o)));
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

void M_mindustry_maps_Maps_loadPreviews(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/Maps:loadPreviews", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(387);
	sp[0].o = (jobject)((mindustry_maps_Maps *) NULL_CHECK((frame[0].o)))->F_maps;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_5:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_mindustry_maps_Map, sp[0].o));
	LINE_NUMBER(389);
	sp[0].o = (jobject)((func_mindustry_maps_Map_previewFile_R_arc_files_Fi) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_maps_Map_previewFile_R_arc_files_Fi])(ctx, (frame[2].o));
	jint temp0 = (jint)((func_arc_files_Fi_exists_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_exists_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_8;
	}
	{
	LINE_NUMBER(391);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_assets;
	clinit_arc_assets_AssetDescriptor(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_assets_AssetDescriptor);
	sp[2].o = (jobject)((func_mindustry_maps_Map_previewFile_R_arc_files_Fi) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_maps_Map_previewFile_R_arc_files_Fi])(ctx, (frame[2].o));
	sp[2].o = (jobject)((func_arc_files_Fi_path_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_files_Fi_path_R_java_lang_String])(ctx, sp[2].o);
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001.msav"_j.string, 1, sp[2].o);
	sp[3].o = ((jobject) &class_arc_graphics_Texture);
	clinit_mindustry_maps_MapPreviewLoader$MapPreviewParameter(ctx);
	sp[4].o = gcAlloc(ctx, &class_mindustry_maps_MapPreviewLoader$MapPreviewParameter);
	init_mindustry_maps_MapPreviewLoader$MapPreviewParameter_mindustry_maps_Map(ctx, sp[4].o, (frame[2].o));
	init_arc_assets_AssetDescriptor_java_lang_String_java_lang_Class_arc_assets_AssetLoaderParameters(ctx, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	sp[0].o = (jobject)((func_arc_assets_AssetManager_load_arc_assets_AssetDescriptor_R_arc_assets_AssetDescriptor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_load_arc_assets_AssetDescriptor_R_arc_assets_AssetDescriptor])(ctx, sp[0].o, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_maps_Maps_invoke_arc_func_Cons_8(ctx);
		auto proxy = (mindustry_maps_Maps_invoke_arc_func_Cons_8 *) gcAlloc(ctx, &class_mindustry_maps_Maps_invoke_arc_func_Cons_8);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[1].o = (jobject) proxy;
	}
	((arc_assets_AssetDescriptor *) NULL_CHECK(sp[0].o))->F_loaded = (jref) sp[1].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(394);
	((func_mindustry_maps_Maps_readCache_mindustry_maps_Map) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_Maps_readCache_mindustry_maps_Map])(ctx, (frame[0].o), (frame[2].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(398);
	goto label_10;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(395);
	frame[3].o = sp[0].o;
	LINE_NUMBER(396);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[3].o));
	LINE_NUMBER(397);
	((func_mindustry_maps_Maps_queueNewPreview_mindustry_maps_Map) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_Maps_queueNewPreview_mindustry_maps_Map])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(398);
	goto label_10;
	}
label_8:;
	{
	LINE_NUMBER(400);
	((func_mindustry_maps_Maps_queueNewPreview_mindustry_maps_Map) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_Maps_queueNewPreview_mindustry_maps_Map])(ctx, (frame[0].o), (frame[2].o));
	}
label_10:;
	LINE_NUMBER(402);
	goto label_5;
label_6:;
	LINE_NUMBER(403);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_maps_Maps_createAllPreviews(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/Maps:createAllPreviews", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(406);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	{ /* InvokeDynamic */
		clinit_mindustry_maps_Maps_invoke_java_lang_Runnable_8(ctx);
		auto proxy = (mindustry_maps_Maps_invoke_java_lang_Runnable_8 *) gcAlloc(ctx, &class_mindustry_maps_Maps_invoke_java_lang_Runnable_8);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_Application_post_java_lang_Runnable) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_post_java_lang_Runnable, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(412);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_maps_Maps_queueNewPreview_mindustry_maps_Map(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/Maps:queueNewPreview", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(415);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	{ /* InvokeDynamic */
		clinit_mindustry_maps_Maps_invoke_java_lang_Runnable_9(ctx);
		auto proxy = (mindustry_maps_Maps_invoke_java_lang_Runnable_9 *) gcAlloc(ctx, &class_mindustry_maps_Maps_invoke_java_lang_Runnable_9);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_Application_post_java_lang_Runnable) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_post_java_lang_Runnable, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(416);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_maps_Maps_createNewPreview_mindustry_maps_Map_arc_func_Cons(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	// Omit/skip preview generation as requested - directly execute fallback/callback if provided
	if (param1) {
		((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, param1))(ctx, param1, nullptr);
	}
}

void M_mindustry_maps_Maps_writeCache_mindustry_maps_Map(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/Maps:writeCache", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(441);
	clinit_java_io_DataOutputStream(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_DataOutputStream);
	sp[1].o = (jobject)((func_mindustry_maps_Map_cacheFile_R_arc_files_Fi) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_maps_Map_cacheFile_R_arc_files_Fi])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_arc_files_Fi_write_boolean_int_R_java_io_OutputStream) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_files_Fi_write_boolean_int_R_java_io_OutputStream])(ctx, sp[1].o, (jint(0)), (8192));
	init_java_io_DataOutputStream_java_io_OutputStream(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(442);
	((func_java_io_DataOutputStream_write_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_DataOutputStream_write_int])(ctx, (frame[2].o), (jint(0)));
	LINE_NUMBER(443);
	((func_java_io_DataOutputStream_writeInt_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_DataOutputStream_writeInt_int])(ctx, (frame[2].o), ((jint)((mindustry_maps_Map *) NULL_CHECK((frame[1].o)))->F_spawns));
	LINE_NUMBER(444);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_maps_Map *) NULL_CHECK((frame[1].o)))->F_teams;
	((func_java_io_DataOutputStream_write_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_write_int])(ctx, sp[0].o, ((jint)((arc_struct_IntSet *) NULL_CHECK(sp[1].o))->F_size));
	LINE_NUMBER(445);
	sp[0].o = (jobject)((mindustry_maps_Map *) NULL_CHECK((frame[1].o)))->F_teams;
	sp[0].o = (jobject)((func_arc_struct_IntSet_iterator_R_arc_struct_IntSet$IntSetIterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_iterator_R_arc_struct_IntSet$IntSetIterator])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_12:;
	{
	LINE_NUMBER(446);
	if (((jint)((arc_struct_IntSet$IntSetIterator *) NULL_CHECK((frame[3].o)))->F_hasNext) == 0) goto label_1;
	}
	{
	LINE_NUMBER(447);
	sp[0].o = frame[2].o;
	jint temp0 = (jint)((func_arc_struct_IntSet$IntSetIterator_next_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_IntSet$IntSetIterator_next_R_int])(ctx, (frame[3].o));
	((func_java_io_DataOutputStream_write_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_write_int])(ctx, sp[0].o, temp0);
	goto label_12;
	}
label_1:;
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(449);
	((func_java_io_DataOutputStream_close) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_DataOutputStream_close])(ctx, (frame[2].o));
	goto label_14;
	}
label_2:;
	LINE_NUMBER(441);
	INST_ASTORE(3);
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	INST_ALOAD(2);
	POP_N(1); // Pop method args
	((func_java_io_DataOutputStream_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_close])(ctx, sp[0].o);
	popExceptionFrame(frameRef);
	goto label_15;
label_6:;
	{
	sp -= 1;
	frame[4].o = sp[0].o;
	((func_java_lang_Throwable_addSuppressed_java_lang_Throwable) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_Throwable_addSuppressed_java_lang_Throwable])(ctx, (frame[3].o), (frame[4].o));
	}
label_15:;
	INST_ALOAD(3);
	INST_ATHROW();
	label_14:;
	LINE_NUMBER(450);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_maps_Maps_readCache_mindustry_maps_Map(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/Maps:readCache", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(453);
	clinit_java_io_DataInputStream(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_DataInputStream);
	sp[1].o = (jobject)((func_mindustry_maps_Map_cacheFile_R_arc_files_Fi) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_maps_Map_cacheFile_R_arc_files_Fi])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_arc_files_Fi_read_int_R_java_io_BufferedInputStream) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_files_Fi_read_int_R_java_io_BufferedInputStream])(ctx, sp[1].o, (8192));
	init_java_io_DataInputStream_java_io_InputStream(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(454);
	jint temp0 = (jint)((func_java_io_DataInputStream_read_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_DataInputStream_read_R_int])(ctx, (frame[2].o));
	LINE_NUMBER(455);
	sp[0].o = frame[1].o;
	jint temp1 = (jint)((func_java_io_DataInputStream_readInt_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_DataInputStream_readInt_R_int])(ctx, (frame[2].o));
	((mindustry_maps_Map *) NULL_CHECK(sp[0].o))->F_spawns = temp1;
	LINE_NUMBER(456);
	jint temp2 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, (frame[2].o));
	frame[3].i = temp2;
	LINE_NUMBER(457);
	frame[4].i = (jint(0));
	}
label_12:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_1;
	}
	{
	LINE_NUMBER(458);
	sp[0].o = (jobject)((mindustry_maps_Map *) NULL_CHECK((frame[1].o)))->F_teams;
	jint temp0 = (jint)((func_java_io_DataInputStream_read_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_DataInputStream_read_R_int])(ctx, (frame[2].o));
	jint temp1 = (jint)((func_arc_struct_IntSet_add_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_add_int_R_boolean])(ctx, sp[0].o, temp0);
	LINE_NUMBER(457);
	INST_IINC(4, 1);
	goto label_12;
	}
label_1:;
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(460);
	((func_java_io_DataInputStream_close) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_DataInputStream_close])(ctx, (frame[2].o));
	goto label_15;
	}
label_2:;
	LINE_NUMBER(453);
	INST_ASTORE(3);
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	INST_ALOAD(2);
	POP_N(1); // Pop method args
	((func_java_io_DataInputStream_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_close])(ctx, sp[0].o);
	popExceptionFrame(frameRef);
	goto label_16;
label_6:;
	{
	sp -= 1;
	frame[4].o = sp[0].o;
	((func_java_lang_Throwable_addSuppressed_java_lang_Throwable) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_Throwable_addSuppressed_java_lang_Throwable])(ctx, (frame[3].o), (frame[4].o));
	}
label_16:;
	INST_ALOAD(3);
	INST_ATHROW();
	label_15:;
	LINE_NUMBER(461);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_maps_Maps_findFile_java_lang_String_R_arc_files_Fi(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/Maps:findFile", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(465);
	sp[0].o = (jobject)SM_arc_util_Strings_sanitizeFilename_java_lang_String_R_java_lang_String(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(466);
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, (frame[2].o));
	if (temp0 == 0) goto label_2;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"blank"_j));
	INST_ASTORE(2);
label_2:;
	{
	LINE_NUMBER(468);
	frame[3].o = (jobject(nullptr));
	LINE_NUMBER(469);
	frame[4].i = (jint(0));
	}
label_4:;
	{
	LINE_NUMBER(471);
	if ((frame[3].o) == nullptr) goto label_5;
	}
	{
	jint temp0 = (jint)((func_arc_files_Fi_exists_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_files_Fi_exists_R_boolean])(ctx, (frame[3].o));
	if (temp0 == 0) goto label_6;
	}
label_5:;
	{
	LINE_NUMBER(472);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_customMapDirectory;
	sp[1].o = frame[2].o;
	sp += 2;
	if ((frame[4].i) != 0) goto label_7;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
	goto label_8;
label_7:;
	INST_ILOAD(4);
	POP_N(1); // Pop string concat args
	(sp++)->o = (jobject)concatStringsRecipe(ctx, u8"_\u0001"_j.string, 1, boxInteger(ctx, sp[0].i));
label_8:;
	{
	sp -= 3;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001\u0001.msav"_j.string, 2, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_files_Fi_child_java_lang_String_R_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_child_java_lang_String_R_arc_files_Fi])(ctx, sp[0].o, sp[1].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(473);
	INST_IINC(4, 1);
	goto label_4;
	}
label_6:;
	{
	LINE_NUMBER(476);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_maps_Maps_loadMap_arc_files_Fi_boolean_R_mindustry_maps_Map(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/Maps:loadMap", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(480);
	sp[0].o = (jobject)SM_mindustry_io_MapIO_createMap_arc_files_Fi_boolean_R_mindustry_maps_Map(ctx, (frame[1].o), (frame[2].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(482);
	sp[0].o = (jobject)((func_mindustry_maps_Map_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_maps_Map_name_R_java_lang_String])(ctx, (frame[3].o));
	if (sp[0].o != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(483);
	clinit_java_io_IOException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_IOException);
	sp[1].o = (jobject)SM_java_lang_String_valueOf_java_lang_Object_R_java_lang_String(ctx, (frame[1].o));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"Map name cannot be empty! File: \u0001"_j.string, 1, sp[1].o);
	init_java_io_IOException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(486);
	sp[0].o = (jobject)((mindustry_maps_Maps *) NULL_CHECK((frame[0].o)))->F_maps;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[3].o));
	LINE_NUMBER(487);
	sp[0].o = (jobject)((mindustry_maps_Maps *) NULL_CHECK((frame[0].o)))->F_maps;
	sp[0].o = (jobject)((func_arc_struct_Seq_sort_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_sort_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(488);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

void M_mindustry_maps_Maps_lambda$createNewPreview$0_mindustry_maps_Map_arc_graphics_Pixmap(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/Maps:lambda$createNewPreview$0", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(426);
	sp[0].o = (jobject)((func_mindustry_maps_Map_previewFile_R_arc_files_Fi) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_maps_Map_previewFile_R_arc_files_Fi])(ctx, (frame[1].o));
	((func_arc_files_Fi_writePng_arc_graphics_Pixmap) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_writePng_arc_graphics_Pixmap])(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(427);
	((func_mindustry_maps_Maps_writeCache_mindustry_maps_Map) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_Maps_writeCache_mindustry_maps_Map])(ctx, (frame[0].o), (frame[1].o));
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(431);
	((func_arc_graphics_Pixmap_dispose) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_graphics_Pixmap_dispose])(ctx, (frame[2].o));
	LINE_NUMBER(432);
	goto label_12;
	}
label_2:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	sp -= 1;
	LINE_NUMBER(428);
	frame[3].o = sp[0].o;
	LINE_NUMBER(429);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(431);
	((func_arc_graphics_Pixmap_dispose) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_graphics_Pixmap_dispose])(ctx, (frame[2].o));
	LINE_NUMBER(432);
	goto label_12;
	}
label_4:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	LINE_NUMBER(431);
	INST_ASTORE(4);
	popExceptionFrame(frameRef);
	{
	((func_arc_graphics_Pixmap_dispose) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_graphics_Pixmap_dispose])(ctx, (frame[2].o));
	LINE_NUMBER(432);
	throwException(ctx, (frame[4].o));	}
label_12:;
	LINE_NUMBER(433);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_maps_Maps_lambda$queueNewPreview$0_mindustry_maps_Map(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/Maps:lambda$queueNewPreview$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(415);
	sp[0].o = (jobject)((mindustry_maps_Maps *) NULL_CHECK((frame[0].o)))->F_previewList;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_add_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_maps_Maps_lambda$createAllPreviews$0(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/Maps:lambda$createAllPreviews$0", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(407);
	sp[0].o = (jobject)((mindustry_maps_Maps *) NULL_CHECK((frame[0].o)))->F_previewList;
	sp[0].o = (jobject)((func_arc_struct_ObjectSet_iterator_R_arc_struct_ObjectSet$ObjectSetIterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_iterator_R_arc_struct_ObjectSet$ObjectSetIterator])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_1:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_mindustry_maps_Map, sp[0].o));
	LINE_NUMBER(408);
	sp[0].o = frame[0].o;
	sp[1].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_maps_Maps_invoke_arc_func_Cons_9(ctx);
		auto proxy = (mindustry_maps_Maps_invoke_arc_func_Cons_9 *) gcAlloc(ctx, &class_mindustry_maps_Maps_invoke_arc_func_Cons_9);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[2].o = (jobject) proxy;
	}
	((func_mindustry_maps_Maps_createNewPreview_mindustry_maps_Map_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_maps_Maps_createNewPreview_mindustry_maps_Map_arc_func_Cons])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(409);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(410);
	sp[0].o = (jobject)((mindustry_maps_Maps *) NULL_CHECK((frame[0].o)))->F_previewList;
	((func_arc_struct_ObjectSet_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_clear])(ctx, sp[0].o);
	runGC(ctx);
	LINE_NUMBER(411);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_maps_Maps_lambda$createAllPreviews$1_mindustry_maps_Map_java_lang_Exception(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/Maps:lambda$createAllPreviews$1", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_Maps(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(408);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	{ /* InvokeDynamic */
		clinit_mindustry_maps_Maps_invoke_java_lang_Runnable_11(ctx);
		auto proxy = (mindustry_maps_Maps_invoke_java_lang_Runnable_11 *) gcAlloc(ctx, &class_mindustry_maps_Maps_invoke_java_lang_Runnable_11);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_Application_post_java_lang_Runnable) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_post_java_lang_Runnable, sp[0].o))(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_maps_Maps_lambda$createAllPreviews$2_mindustry_maps_Map(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/Maps:lambda$createAllPreviews$2", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_Maps(ctx);
	frame[0].o = param0;
	printf("[Maps] lambda$createAllPreviews$2 setting error texture for map %p...\n", frame[0].o); fflush(stdout);
	{
	LINE_NUMBER(408);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_assets;
	sp[1].o = (jobject)((func_arc_assets_AssetManager_get_java_lang_String_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_assets_AssetManager_get_java_lang_String_R_java_lang_Object])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"sprites/error.png"_j))));
	((mindustry_maps_Map *) NULL_CHECK(sp[0].o))->F_texture = (jref) (checkCast(ctx, &class_arc_graphics_Texture, sp[1].o));
	printf("[Maps] lambda$createAllPreviews$2 error texture set.\n"); fflush(stdout);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_maps_Maps_lambda$loadPreviews$0_mindustry_maps_Map_arc_graphics_Texture(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/Maps:lambda$loadPreviews$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_Maps(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(391);
	((mindustry_maps_Map *) NULL_CHECK((frame[0].o)))->F_texture = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_maps_Maps_lambda$addDefaultOres$0_mindustry_world_Block_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/Maps:lambda$addDefaultOres$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_Maps(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(355);
	jint temp0 = (jint)((func_mindustry_world_Block_isOverlay_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Block_isOverlay_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[0].o));
	if (((jint)((mindustry_world_blocks_environment_Floor *) NULL_CHECK(sp[0].o))->F_oreDefault) == 0) goto label_1;
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

void M_mindustry_maps_Maps_lambda$importMap$0_mindustry_maps_Map_Array1_java_lang_Exception_java_lang_Exception(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/Maps:lambda$importMap$0", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(279);
	sp[0].o = (jobject)((mindustry_maps_Maps *) NULL_CHECK((frame[0].o)))->F_maps;
	jint temp0 = (jint)((func_arc_struct_Seq_remove_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_remove_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(281);
	sp[0].o = (jobject)((mindustry_maps_Map *) NULL_CHECK((frame[1].o)))->F_file;
	jint temp0 = (jint)((func_arc_files_Fi_delete_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_delete_R_boolean])(ctx, sp[0].o);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(284);
	goto label_5;
label_2:;
	LINE_NUMBER(282);
	INST_ASTORE(4);
label_5:;
	{
	LINE_NUMBER(285);
	ARRAY_ACCESS(jobject, (frame[2].o), (jint(0))) = (frame[3].o);
	LINE_NUMBER(286);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_maps_Maps_lambda$saveMap$1_mindustry_maps_Map_arc_graphics_Pixmap(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/Maps:lambda$saveMap$1", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_Maps(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(256);
	sp[0].o = (jobject)((func_mindustry_maps_Map_previewFile_R_arc_files_Fi) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_Map_previewFile_R_arc_files_Fi])(ctx, (frame[0].o));
	((func_arc_files_Fi_writePng_arc_graphics_Pixmap) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_writePng_arc_graphics_Pixmap])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(257);
	((func_arc_graphics_Pixmap_dispose) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_graphics_Pixmap_dispose])(ctx, (frame[1].o));
	LINE_NUMBER(258);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_maps_Maps_lambda$saveMap$0_java_lang_String_mindustry_maps_Map_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/Maps:lambda$saveMap$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_Maps(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(209);
	sp[0].o = (jobject)((func_mindustry_maps_Map_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_maps_Map_name_R_java_lang_String])(ctx, (frame[1].o));
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_mindustry_maps_Maps_lambda$load$1_mindustry_mod_Mods$LoadedMod_arc_files_Fi(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/Maps:lambda$load$1", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(172);
	sp[0].o = (jobject)((func_mindustry_maps_Maps_loadMap_arc_files_Fi_boolean_R_mindustry_maps_Map) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_Maps_loadMap_arc_files_Fi_boolean_R_mindustry_maps_Map])(ctx, (frame[0].o), (frame[2].o), (jint(0)));
	frame[3].o = sp[0].o;
	LINE_NUMBER(173);
	((mindustry_maps_Map *) NULL_CHECK((frame[3].o)))->F_mod = (jref) (frame[1].o);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(177);
	goto label_5;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(174);
	frame[3].o = sp[0].o;
	LINE_NUMBER(175);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"Failed to load mod map file '@'!"_j));
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = (frame[2].o);
	SM_arc_util_Log_err_java_lang_String_Array1_java_lang_Object(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(176);
	SM_arc_util_Log_err_java_lang_Throwable(ctx, (frame[3].o));
	}
label_5:;
	LINE_NUMBER(178);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_maps_Maps_lambda$load$0_arc_files_Fi(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/Maps:lambda$load$0", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(146);
	sp[0].o = (jobject)((func_arc_files_Fi_extension_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_files_Fi_extension_R_java_lang_String])(ctx, (frame[1].o));
	jint temp0 = (jint)((func_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"msav"_j))));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(147);
	sp[0].o = (jobject)((func_mindustry_maps_Maps_loadMap_arc_files_Fi_boolean_R_mindustry_maps_Map) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_Maps_loadMap_arc_files_Fi_boolean_R_mindustry_maps_Map])(ctx, (frame[0].o), (frame[1].o), (jint(1)));
	}
label_1:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(152);
	goto label_5;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(149);
	frame[2].o = sp[0].o;
	LINE_NUMBER(150);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"Failed to load custom map file '@'!"_j));
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = (frame[1].o);
	SM_arc_util_Log_err_java_lang_String_Array1_java_lang_Object(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(151);
	SM_arc_util_Log_err_java_lang_Throwable(ctx, (frame[2].o));
	}
label_5:;
	LINE_NUMBER(153);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_maps_Maps_lambda$new$0_mindustry_game_EventType$ClientLoadEvent(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/Maps:lambda$new$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(110);
	sp[0].o = (jobject)((mindustry_maps_Maps *) NULL_CHECK((frame[0].o)))->F_maps;
	sp[0].o = (jobject)((func_arc_struct_Seq_sort_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_sort_R_arc_struct_Seq])(ctx, sp[0].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_maps_Maps_lambda$byName$0_java_lang_String_mindustry_maps_Map_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/Maps:lambda$byName$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_Maps(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(106);
	sp[0].o = (jobject)((func_mindustry_maps_Map_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_maps_Map_name_R_java_lang_String])(ctx, (frame[1].o));
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_maps_Maps_lambda$moddedMaps$0_mindustry_maps_Map_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/Maps:lambda$moddedMaps$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_Maps(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(102);
	sp[0].o = (jobject)((mindustry_maps_Map *) NULL_CHECK((frame[0].o)))->F_mod;
	if (sp[0].o == nullptr) goto label_1;
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

jbool SM_mindustry_maps_Maps_lambda$defaultMaps$0_mindustry_maps_Map_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/Maps:lambda$defaultMaps$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_Maps(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(97);
	if (((jint)((mindustry_maps_Map *) NULL_CHECK((frame[0].o)))->F_custom) != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_maps_Map *) NULL_CHECK((frame[0].o)))->F_mod;
	if (sp[0].o != nullptr) goto label_1;
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

jbool SM_mindustry_maps_Maps_lambda$customMaps$0_mindustry_maps_Map_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/Maps:lambda$customMaps$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_Maps(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(92);
	popStackFrame(ctx);
	return ((jint)((mindustry_maps_Map *) NULL_CHECK((frame[0].o)))->F_custom);
	}

	popStackFrame(ctx);
}

void clinit_mindustry_maps_Maps(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/Maps:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_Maps(ctx);
	{
	LINE_NUMBER(32);
	sp[0].o = (jobject)createArray(ctx, &class_arc_func_Prov, (15));
	jint temp0 = jint(0);
	{ /* InvokeDynamic */
		clinit_mindustry_maps_Maps_invoke_arc_func_Prov_15(ctx);
		auto proxy = (mindustry_maps_Maps_invoke_arc_func_Prov_15 *) gcAlloc(ctx, &class_mindustry_maps_Maps_invoke_arc_func_Prov_15);
		sp[1].o = (jobject) proxy;
	}
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	{ /* InvokeDynamic */
		clinit_mindustry_maps_Maps_invoke_arc_func_Prov_16(ctx);
		auto proxy = (mindustry_maps_Maps_invoke_arc_func_Prov_16 *) gcAlloc(ctx, &class_mindustry_maps_Maps_invoke_arc_func_Prov_16);
		sp[1].o = (jobject) proxy;
	}
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	{ /* InvokeDynamic */
		clinit_mindustry_maps_Maps_invoke_arc_func_Prov_17(ctx);
		auto proxy = (mindustry_maps_Maps_invoke_arc_func_Prov_17 *) gcAlloc(ctx, &class_mindustry_maps_Maps_invoke_arc_func_Prov_17);
		sp[1].o = (jobject) proxy;
	}
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(3);
	{ /* InvokeDynamic */
		clinit_mindustry_maps_Maps_invoke_arc_func_Prov_18(ctx);
		auto proxy = (mindustry_maps_Maps_invoke_arc_func_Prov_18 *) gcAlloc(ctx, &class_mindustry_maps_Maps_invoke_arc_func_Prov_18);
		sp[1].o = (jobject) proxy;
	}
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	jint temp4 = jint(4);
	{ /* InvokeDynamic */
		clinit_mindustry_maps_Maps_invoke_arc_func_Prov_19(ctx);
		auto proxy = (mindustry_maps_Maps_invoke_arc_func_Prov_19 *) gcAlloc(ctx, &class_mindustry_maps_Maps_invoke_arc_func_Prov_19);
		sp[1].o = (jobject) proxy;
	}
	ARRAY_ACCESS(jobject, sp[0].o, temp4) = sp[1].o;
	jint temp5 = jint(5);
	{ /* InvokeDynamic */
		clinit_mindustry_maps_Maps_invoke_arc_func_Prov_20(ctx);
		auto proxy = (mindustry_maps_Maps_invoke_arc_func_Prov_20 *) gcAlloc(ctx, &class_mindustry_maps_Maps_invoke_arc_func_Prov_20);
		sp[1].o = (jobject) proxy;
	}
	ARRAY_ACCESS(jobject, sp[0].o, temp5) = sp[1].o;
	jint temp6 = 6;
	{ /* InvokeDynamic */
		clinit_mindustry_maps_Maps_invoke_arc_func_Prov_21(ctx);
		auto proxy = (mindustry_maps_Maps_invoke_arc_func_Prov_21 *) gcAlloc(ctx, &class_mindustry_maps_Maps_invoke_arc_func_Prov_21);
		sp[1].o = (jobject) proxy;
	}
	ARRAY_ACCESS(jobject, sp[0].o, temp6) = sp[1].o;
	jint temp7 = 7;
	{ /* InvokeDynamic */
		clinit_mindustry_maps_Maps_invoke_arc_func_Prov_22(ctx);
		auto proxy = (mindustry_maps_Maps_invoke_arc_func_Prov_22 *) gcAlloc(ctx, &class_mindustry_maps_Maps_invoke_arc_func_Prov_22);
		sp[1].o = (jobject) proxy;
	}
	ARRAY_ACCESS(jobject, sp[0].o, temp7) = sp[1].o;
	jint temp8 = 8;
	{ /* InvokeDynamic */
		clinit_mindustry_maps_Maps_invoke_arc_func_Prov_23(ctx);
		auto proxy = (mindustry_maps_Maps_invoke_arc_func_Prov_23 *) gcAlloc(ctx, &class_mindustry_maps_Maps_invoke_arc_func_Prov_23);
		sp[1].o = (jobject) proxy;
	}
	ARRAY_ACCESS(jobject, sp[0].o, temp8) = sp[1].o;
	jint temp9 = 9;
	{ /* InvokeDynamic */
		clinit_mindustry_maps_Maps_invoke_arc_func_Prov_24(ctx);
		auto proxy = (mindustry_maps_Maps_invoke_arc_func_Prov_24 *) gcAlloc(ctx, &class_mindustry_maps_Maps_invoke_arc_func_Prov_24);
		sp[1].o = (jobject) proxy;
	}
	ARRAY_ACCESS(jobject, sp[0].o, temp9) = sp[1].o;
	jint temp10 = 10;
	{ /* InvokeDynamic */
		clinit_mindustry_maps_Maps_invoke_arc_func_Prov_25(ctx);
		auto proxy = (mindustry_maps_Maps_invoke_arc_func_Prov_25 *) gcAlloc(ctx, &class_mindustry_maps_Maps_invoke_arc_func_Prov_25);
		sp[1].o = (jobject) proxy;
	}
	ARRAY_ACCESS(jobject, sp[0].o, temp10) = sp[1].o;
	jint temp11 = 11;
	{ /* InvokeDynamic */
		clinit_mindustry_maps_Maps_invoke_arc_func_Prov_26(ctx);
		auto proxy = (mindustry_maps_Maps_invoke_arc_func_Prov_26 *) gcAlloc(ctx, &class_mindustry_maps_Maps_invoke_arc_func_Prov_26);
		sp[1].o = (jobject) proxy;
	}
	ARRAY_ACCESS(jobject, sp[0].o, temp11) = sp[1].o;
	jint temp12 = 12;
	{ /* InvokeDynamic */
		clinit_mindustry_maps_Maps_invoke_arc_func_Prov_27(ctx);
		auto proxy = (mindustry_maps_Maps_invoke_arc_func_Prov_27 *) gcAlloc(ctx, &class_mindustry_maps_Maps_invoke_arc_func_Prov_27);
		sp[1].o = (jobject) proxy;
	}
	ARRAY_ACCESS(jobject, sp[0].o, temp12) = sp[1].o;
	jint temp13 = 13;
	{ /* InvokeDynamic */
		clinit_mindustry_maps_Maps_invoke_arc_func_Prov_28(ctx);
		auto proxy = (mindustry_maps_Maps_invoke_arc_func_Prov_28 *) gcAlloc(ctx, &class_mindustry_maps_Maps_invoke_arc_func_Prov_28);
		sp[1].o = (jobject) proxy;
	}
	ARRAY_ACCESS(jobject, sp[0].o, temp13) = sp[1].o;
	jint temp14 = 14;
	{ /* InvokeDynamic */
		clinit_mindustry_maps_Maps_invoke_arc_func_Prov_29(ctx);
		auto proxy = (mindustry_maps_Maps_invoke_arc_func_Prov_29 *) gcAlloc(ctx, &class_mindustry_maps_Maps_invoke_arc_func_Prov_29);
		sp[1].o = (jobject) proxy;
	}
	ARRAY_ACCESS(jobject, sp[0].o, temp14) = sp[1].o;
	clinit_mindustry_maps_Maps(ctx);
	SF_mindustry_maps_Maps_allFilterTypes = sp[0].o;
	LINE_NUMBER(40);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (18));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"maze"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"fortress"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(2))) = (((jobject) createStringLiteral(ctx, u8"labyrinth"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(3))) = (((jobject) createStringLiteral(ctx, u8"islands"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(4))) = (((jobject) createStringLiteral(ctx, u8"tendrils"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(5))) = (((jobject) createStringLiteral(ctx, u8"caldera"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (6)) = (((jobject) createStringLiteral(ctx, u8"wasteland"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (7)) = (((jobject) createStringLiteral(ctx, u8"shattered"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (8)) = (((jobject) createStringLiteral(ctx, u8"fork"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (9)) = (((jobject) createStringLiteral(ctx, u8"triad"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (10)) = (((jobject) createStringLiteral(ctx, u8"mudFlats"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (11)) = (((jobject) createStringLiteral(ctx, u8"moltenLake"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (12)) = (((jobject) createStringLiteral(ctx, u8"archipelago"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (13)) = (((jobject) createStringLiteral(ctx, u8"debrisField"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (14)) = (((jobject) createStringLiteral(ctx, u8"domain"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (15)) = (((jobject) createStringLiteral(ctx, u8"veins"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (16)) = (((jobject) createStringLiteral(ctx, u8"glacier"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (17)) = (((jobject) createStringLiteral(ctx, u8"passage"_j)));
	clinit_mindustry_maps_Maps(ctx);
	SF_mindustry_maps_Maps_defaultMapNames = sp[0].o;
	LINE_NUMBER(42);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(3)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"veins"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"glacier"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(2))) = (((jobject) createStringLiteral(ctx, u8"passage"_j)));
	clinit_mindustry_maps_Maps(ctx);
	SF_mindustry_maps_Maps_pvpMaps = sp[0].o;
	LINE_NUMBER(44);
	clinit_mindustry_maps_Maps(ctx);
	SF_mindustry_maps_Maps_useDefaultFolder = (jint(1));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_maps_Maps;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field shuffler
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[6]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field nextMapOverride
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[7]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method getNextMap
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[4]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	methods[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

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
}

void *vtable_mindustry_maps_Maps[] {
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
	(void *) M_mindustry_maps_Maps_getShuffleMode_R_mindustry_maps_Maps$ShuffleMode,
	(void *) M_mindustry_maps_Maps_setShuffleMode_mindustry_maps_Maps$ShuffleMode,
	(void *) M_mindustry_maps_Maps_setMapProvider_mindustry_maps_Maps$MapProvider,
	(void *) M_mindustry_maps_Maps_setNextMapOverride_mindustry_maps_Map,
	(void *) M_mindustry_maps_Maps_getNextMap_mindustry_game_Gamemode_mindustry_maps_Map_R_mindustry_maps_Map,
	(void *) M_mindustry_maps_Maps_all_R_arc_struct_Seq,
	(void *) M_mindustry_maps_Maps_customMaps_R_arc_struct_Seq,
	(void *) M_mindustry_maps_Maps_defaultMaps_R_arc_struct_Seq,
	(void *) M_mindustry_maps_Maps_moddedMaps_R_arc_struct_Seq,
	(void *) M_mindustry_maps_Maps_byName_java_lang_String_R_mindustry_maps_Map,
	(void *) M_mindustry_maps_Maps_loadInternalMap_java_lang_String_R_mindustry_maps_Map,
	(void *) M_mindustry_maps_Maps_load,
	(void *) M_mindustry_maps_Maps_reload,
	(void *) M_mindustry_maps_Maps_saveMap_arc_struct_ObjectMap_R_mindustry_maps_Map,
	(void *) M_mindustry_maps_Maps_saveMap_arc_struct_ObjectMap_boolean_R_mindustry_maps_Map,
	(void *) M_mindustry_maps_Maps_importMap_arc_files_Fi_R_mindustry_maps_Map,
	(void *) M_mindustry_maps_Maps_tryCatchMapError_arc_util_UnsafeRunnable,
	(void *) M_mindustry_maps_Maps_removeMap_mindustry_maps_Map,
	(void *) M_mindustry_maps_Maps_readFilters_java_lang_String_R_arc_struct_Seq,
	(void *) M_mindustry_maps_Maps_addDefaultOres_arc_struct_Seq,
	(void *) M_mindustry_maps_Maps_writeWaves_arc_struct_Seq_R_java_lang_String,
	(void *) M_mindustry_maps_Maps_readWaves_java_lang_String_R_arc_struct_Seq,
	(void *) M_mindustry_maps_Maps_loadPreviews,
	(void *) M_mindustry_maps_Maps_createAllPreviews,
	(void *) M_mindustry_maps_Maps_queueNewPreview_mindustry_maps_Map,
	(void *) M_mindustry_maps_Maps_createNewPreview_mindustry_maps_Map_arc_func_Cons,
	(void *) M_mindustry_maps_Maps_writeCache_mindustry_maps_Map,
	(void *) M_mindustry_maps_Maps_readCache_mindustry_maps_Map,
	(void *) M_mindustry_maps_Maps_findFile_java_lang_String_R_arc_files_Fi,
	(void *) M_mindustry_maps_Maps_loadMap_arc_files_Fi_boolean_R_mindustry_maps_Map,
	(void *) M_mindustry_maps_Maps_lambda$createNewPreview$0_mindustry_maps_Map_arc_graphics_Pixmap,
	(void *) M_mindustry_maps_Maps_lambda$queueNewPreview$0_mindustry_maps_Map,
	(void *) M_mindustry_maps_Maps_lambda$createAllPreviews$0,
	(void *) M_mindustry_maps_Maps_lambda$importMap$0_mindustry_maps_Map_Array1_java_lang_Exception_java_lang_Exception,
	(void *) M_mindustry_maps_Maps_lambda$load$1_mindustry_mod_Mods$LoadedMod_arc_files_Fi,
	(void *) M_mindustry_maps_Maps_lambda$load$0_arc_files_Fi,
	(void *) M_mindustry_maps_Maps_lambda$new$0_mindustry_game_EventType$ClientLoadEvent,
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
	{ "getShuffleMode", "()Lmindustry/maps/Maps$ShuffleMode;" },
	{ "setShuffleMode", "(Lmindustry/maps/Maps$ShuffleMode;)V" },
	{ "setMapProvider", "(Lmindustry/maps/Maps$MapProvider;)V" },
	{ "setNextMapOverride", "(Lmindustry/maps/Map;)V" },
	{ "getNextMap", "(Lmindustry/game/Gamemode;Lmindustry/maps/Map;)Lmindustry/maps/Map;" },
	{ "all", "()Larc/struct/Seq;" },
	{ "customMaps", "()Larc/struct/Seq;" },
	{ "defaultMaps", "()Larc/struct/Seq;" },
	{ "moddedMaps", "()Larc/struct/Seq;" },
	{ "byName", "(Ljava/lang/String;)Lmindustry/maps/Map;" },
	{ "loadInternalMap", "(Ljava/lang/String;)Lmindustry/maps/Map;" },
	{ "load", "()V" },
	{ "reload", "()V" },
	{ "saveMap", "(Larc/struct/ObjectMap;)Lmindustry/maps/Map;" },
	{ "saveMap", "(Larc/struct/ObjectMap;Z)Lmindustry/maps/Map;" },
	{ "importMap", "(Larc/files/Fi;)Lmindustry/maps/Map;" },
	{ "tryCatchMapError", "(Larc/util/UnsafeRunnable;)V" },
	{ "removeMap", "(Lmindustry/maps/Map;)V" },
	{ "readFilters", "(Ljava/lang/String;)Larc/struct/Seq;" },
	{ "addDefaultOres", "(Larc/struct/Seq;)V" },
	{ "writeWaves", "(Larc/struct/Seq;)Ljava/lang/String;" },
	{ "readWaves", "(Ljava/lang/String;)Larc/struct/Seq;" },
	{ "loadPreviews", "()V" },
	{ "createAllPreviews", "()V" },
	{ "queueNewPreview", "(Lmindustry/maps/Map;)V" },
	{ "createNewPreview", "(Lmindustry/maps/Map;Larc/func/Cons;)V" },
	{ "writeCache", "(Lmindustry/maps/Map;)V" },
	{ "readCache", "(Lmindustry/maps/Map;)V" },
	{ "findFile", "(Ljava/lang/String;)Larc/files/Fi;" },
	{ "loadMap", "(Larc/files/Fi;Z)Lmindustry/maps/Map;" },
	{ "lambda$createNewPreview$0", "(Lmindustry/maps/Map;Larc/graphics/Pixmap;)V" },
	{ "lambda$queueNewPreview$0", "(Lmindustry/maps/Map;)V" },
	{ "lambda$createAllPreviews$0", "()V" },
	{ "lambda$importMap$0", "(Lmindustry/maps/Map;[Ljava/lang/Exception;Ljava/lang/Exception;)V" },
	{ "lambda$load$1", "(Lmindustry/mod/Mods$LoadedMod;Larc/files/Fi;)V" },
	{ "lambda$load$0", "(Larc/files/Fi;)V" },
	{ "lambda$new$0", "(Lmindustry/game/EventType$ClientLoadEvent;)V" },
};

static jclass innerClasses[] {
	&class_mindustry_maps_Maps$ShuffleMode,
	&class_mindustry_maps_Maps$MapProvider,
};

static FieldMetadata fields[] {
	{ "allFilterTypes", getArrayClass(&class_arc_func_Prov, 1), (intptr_t) &SF_mindustry_maps_Maps_allFilterTypes, "[Larc/func/Prov;", 9 },
	{ "defaultMapNames", getArrayClass(&class_java_lang_String, 1), (intptr_t) &SF_mindustry_maps_Maps_defaultMapNames, "[Ljava/lang/String;", 10 },
	{ "pvpMaps", getArrayClass(&class_java_lang_String, 1), (intptr_t) &SF_mindustry_maps_Maps_pvpMaps, "[Ljava/lang/String;", 10 },
	{ "useDefaultFolder", &class_boolean, (intptr_t) &SF_mindustry_maps_Maps_useDefaultFolder, "Z", 10 },
	{ "maps", &class_arc_struct_Seq, offsetof(mindustry_maps_Maps, F_maps), "Larc/struct/Seq;", 2 },
	{ "shuffleMode", &class_mindustry_maps_Maps$ShuffleMode, offsetof(mindustry_maps_Maps, F_shuffleMode), "Lmindustry/maps/Maps$ShuffleMode;", 2 },
	{ "shuffler", &class_mindustry_maps_Maps$MapProvider, offsetof(mindustry_maps_Maps, F_shuffler), "Lmindustry/maps/Maps$MapProvider;", 2 },
	{ "nextMapOverride", &class_mindustry_maps_Map, offsetof(mindustry_maps_Maps, F_nextMapOverride), "Lmindustry/maps/Map;", 2 },
	{ "previewList", &class_arc_struct_ObjectSet, offsetof(mindustry_maps_Maps, F_previewList), "Larc/struct/ObjectSet;", 2 },
};

static MethodMetadata methods[] {
	{ "getShuffleMode", (intptr_t) M_mindustry_maps_Maps_getShuffleMode_R_mindustry_maps_Maps$ShuffleMode, VTABLE_mindustry_maps_Maps_getShuffleMode_R_mindustry_maps_Maps$ShuffleMode, "()Lmindustry/maps/Maps$ShuffleMode;", 1 },
	{ "setShuffleMode", (intptr_t) M_mindustry_maps_Maps_setShuffleMode_mindustry_maps_Maps$ShuffleMode, VTABLE_mindustry_maps_Maps_setShuffleMode_mindustry_maps_Maps$ShuffleMode, "(Lmindustry/maps/Maps$ShuffleMode;)V", 1 },
	{ "setMapProvider", (intptr_t) M_mindustry_maps_Maps_setMapProvider_mindustry_maps_Maps$MapProvider, VTABLE_mindustry_maps_Maps_setMapProvider_mindustry_maps_Maps$MapProvider, "(Lmindustry/maps/Maps$MapProvider;)V", 1 },
	{ "setNextMapOverride", (intptr_t) M_mindustry_maps_Maps_setNextMapOverride_mindustry_maps_Map, VTABLE_mindustry_maps_Maps_setNextMapOverride_mindustry_maps_Map, "(Lmindustry/maps/Map;)V", 1 },
	{ "getNextMap", (intptr_t) M_mindustry_maps_Maps_getNextMap_mindustry_game_Gamemode_mindustry_maps_Map_R_mindustry_maps_Map, VTABLE_mindustry_maps_Maps_getNextMap_mindustry_game_Gamemode_mindustry_maps_Map_R_mindustry_maps_Map, "(Lmindustry/game/Gamemode;Lmindustry/maps/Map;)Lmindustry/maps/Map;", 1 },
	{ "all", (intptr_t) M_mindustry_maps_Maps_all_R_arc_struct_Seq, VTABLE_mindustry_maps_Maps_all_R_arc_struct_Seq, "()Larc/struct/Seq;", 1 },
	{ "customMaps", (intptr_t) M_mindustry_maps_Maps_customMaps_R_arc_struct_Seq, VTABLE_mindustry_maps_Maps_customMaps_R_arc_struct_Seq, "()Larc/struct/Seq;", 1 },
	{ "defaultMaps", (intptr_t) M_mindustry_maps_Maps_defaultMaps_R_arc_struct_Seq, VTABLE_mindustry_maps_Maps_defaultMaps_R_arc_struct_Seq, "()Larc/struct/Seq;", 1 },
	{ "moddedMaps", (intptr_t) M_mindustry_maps_Maps_moddedMaps_R_arc_struct_Seq, VTABLE_mindustry_maps_Maps_moddedMaps_R_arc_struct_Seq, "()Larc/struct/Seq;", 1 },
	{ "byName", (intptr_t) M_mindustry_maps_Maps_byName_java_lang_String_R_mindustry_maps_Map, VTABLE_mindustry_maps_Maps_byName_java_lang_String_R_mindustry_maps_Map, "(Ljava/lang/String;)Lmindustry/maps/Map;", 1 },
	{ "<init>", (intptr_t) init_mindustry_maps_Maps, 0, "()V", 1 },
	{ "loadInternalMap", (intptr_t) M_mindustry_maps_Maps_loadInternalMap_java_lang_String_R_mindustry_maps_Map, VTABLE_mindustry_maps_Maps_loadInternalMap_java_lang_String_R_mindustry_maps_Map, "(Ljava/lang/String;)Lmindustry/maps/Map;", 1 },
	{ "load", (intptr_t) M_mindustry_maps_Maps_load, VTABLE_mindustry_maps_Maps_load, "()V", 1 },
	{ "reload", (intptr_t) M_mindustry_maps_Maps_reload, VTABLE_mindustry_maps_Maps_reload, "()V", 1 },
	{ "saveMap", (intptr_t) M_mindustry_maps_Maps_saveMap_arc_struct_ObjectMap_R_mindustry_maps_Map, VTABLE_mindustry_maps_Maps_saveMap_arc_struct_ObjectMap_R_mindustry_maps_Map, "(Larc/struct/ObjectMap;)Lmindustry/maps/Map;", 1 },
	{ "saveMap", (intptr_t) M_mindustry_maps_Maps_saveMap_arc_struct_ObjectMap_boolean_R_mindustry_maps_Map, VTABLE_mindustry_maps_Maps_saveMap_arc_struct_ObjectMap_boolean_R_mindustry_maps_Map, "(Larc/struct/ObjectMap;Z)Lmindustry/maps/Map;", 1 },
	{ "importMap", (intptr_t) M_mindustry_maps_Maps_importMap_arc_files_Fi_R_mindustry_maps_Map, VTABLE_mindustry_maps_Maps_importMap_arc_files_Fi_R_mindustry_maps_Map, "(Larc/files/Fi;)Lmindustry/maps/Map;", 1 },
	{ "tryCatchMapError", (intptr_t) M_mindustry_maps_Maps_tryCatchMapError_arc_util_UnsafeRunnable, VTABLE_mindustry_maps_Maps_tryCatchMapError_arc_util_UnsafeRunnable, "(Larc/util/UnsafeRunnable;)V", 1 },
	{ "removeMap", (intptr_t) M_mindustry_maps_Maps_removeMap_mindustry_maps_Map, VTABLE_mindustry_maps_Maps_removeMap_mindustry_maps_Map, "(Lmindustry/maps/Map;)V", 1 },
	{ "readFilters", (intptr_t) M_mindustry_maps_Maps_readFilters_java_lang_String_R_arc_struct_Seq, VTABLE_mindustry_maps_Maps_readFilters_java_lang_String_R_arc_struct_Seq, "(Ljava/lang/String;)Larc/struct/Seq;", 1 },
	{ "addDefaultOres", (intptr_t) M_mindustry_maps_Maps_addDefaultOres_arc_struct_Seq, VTABLE_mindustry_maps_Maps_addDefaultOres_arc_struct_Seq, "(Larc/struct/Seq;)V", 1 },
	{ "writeWaves", (intptr_t) M_mindustry_maps_Maps_writeWaves_arc_struct_Seq_R_java_lang_String, VTABLE_mindustry_maps_Maps_writeWaves_arc_struct_Seq_R_java_lang_String, "(Larc/struct/Seq;)Ljava/lang/String;", 1 },
	{ "readWaves", (intptr_t) M_mindustry_maps_Maps_readWaves_java_lang_String_R_arc_struct_Seq, VTABLE_mindustry_maps_Maps_readWaves_java_lang_String_R_arc_struct_Seq, "(Ljava/lang/String;)Larc/struct/Seq;", 1 },
	{ "loadPreviews", (intptr_t) M_mindustry_maps_Maps_loadPreviews, VTABLE_mindustry_maps_Maps_loadPreviews, "()V", 1 },
	{ "createAllPreviews", (intptr_t) M_mindustry_maps_Maps_createAllPreviews, VTABLE_mindustry_maps_Maps_createAllPreviews, "()V", 2 },
	{ "queueNewPreview", (intptr_t) M_mindustry_maps_Maps_queueNewPreview_mindustry_maps_Map, VTABLE_mindustry_maps_Maps_queueNewPreview_mindustry_maps_Map, "(Lmindustry/maps/Map;)V", 1 },
	{ "createNewPreview", (intptr_t) M_mindustry_maps_Maps_createNewPreview_mindustry_maps_Map_arc_func_Cons, VTABLE_mindustry_maps_Maps_createNewPreview_mindustry_maps_Map_arc_func_Cons, "(Lmindustry/maps/Map;Larc/func/Cons;)V", 2 },
	{ "writeCache", (intptr_t) M_mindustry_maps_Maps_writeCache_mindustry_maps_Map, VTABLE_mindustry_maps_Maps_writeCache_mindustry_maps_Map, "(Lmindustry/maps/Map;)V", 2 },
	{ "readCache", (intptr_t) M_mindustry_maps_Maps_readCache_mindustry_maps_Map, VTABLE_mindustry_maps_Maps_readCache_mindustry_maps_Map, "(Lmindustry/maps/Map;)V", 2 },
	{ "findFile", (intptr_t) M_mindustry_maps_Maps_findFile_java_lang_String_R_arc_files_Fi, VTABLE_mindustry_maps_Maps_findFile_java_lang_String_R_arc_files_Fi, "(Ljava/lang/String;)Larc/files/Fi;", 2 },
	{ "loadMap", (intptr_t) M_mindustry_maps_Maps_loadMap_arc_files_Fi_boolean_R_mindustry_maps_Map, VTABLE_mindustry_maps_Maps_loadMap_arc_files_Fi_boolean_R_mindustry_maps_Map, "(Larc/files/Fi;Z)Lmindustry/maps/Map;", 2 },
	{ "lambda$createNewPreview$0", (intptr_t) M_mindustry_maps_Maps_lambda$createNewPreview$0_mindustry_maps_Map_arc_graphics_Pixmap, VTABLE_mindustry_maps_Maps_lambda$createNewPreview$0_mindustry_maps_Map_arc_graphics_Pixmap, "(Lmindustry/maps/Map;Larc/graphics/Pixmap;)V", 4098 },
	{ "lambda$queueNewPreview$0", (intptr_t) M_mindustry_maps_Maps_lambda$queueNewPreview$0_mindustry_maps_Map, VTABLE_mindustry_maps_Maps_lambda$queueNewPreview$0_mindustry_maps_Map, "(Lmindustry/maps/Map;)V", 4098 },
	{ "lambda$createAllPreviews$0", (intptr_t) M_mindustry_maps_Maps_lambda$createAllPreviews$0, VTABLE_mindustry_maps_Maps_lambda$createAllPreviews$0, "()V", 4098 },
	{ "lambda$createAllPreviews$1", (intptr_t) SM_mindustry_maps_Maps_lambda$createAllPreviews$1_mindustry_maps_Map_java_lang_Exception, 0, "(Lmindustry/maps/Map;Ljava/lang/Exception;)V", 4106 },
	{ "lambda$createAllPreviews$2", (intptr_t) SM_mindustry_maps_Maps_lambda$createAllPreviews$2_mindustry_maps_Map, 0, "(Lmindustry/maps/Map;)V", 4106 },
	{ "lambda$loadPreviews$0", (intptr_t) SM_mindustry_maps_Maps_lambda$loadPreviews$0_mindustry_maps_Map_arc_graphics_Texture, 0, "(Lmindustry/maps/Map;Larc/graphics/Texture;)V", 4106 },
	{ "lambda$addDefaultOres$0", (intptr_t) SM_mindustry_maps_Maps_lambda$addDefaultOres$0_mindustry_world_Block_R_boolean, 0, "(Lmindustry/world/Block;)Z", 4106 },
	{ "lambda$importMap$0", (intptr_t) M_mindustry_maps_Maps_lambda$importMap$0_mindustry_maps_Map_Array1_java_lang_Exception_java_lang_Exception, VTABLE_mindustry_maps_Maps_lambda$importMap$0_mindustry_maps_Map_Array1_java_lang_Exception_java_lang_Exception, "(Lmindustry/maps/Map;[Ljava/lang/Exception;Ljava/lang/Exception;)V", 4098 },
	{ "lambda$saveMap$1", (intptr_t) SM_mindustry_maps_Maps_lambda$saveMap$1_mindustry_maps_Map_arc_graphics_Pixmap, 0, "(Lmindustry/maps/Map;Larc/graphics/Pixmap;)V", 4106 },
	{ "lambda$saveMap$0", (intptr_t) SM_mindustry_maps_Maps_lambda$saveMap$0_java_lang_String_mindustry_maps_Map_R_boolean, 0, "(Ljava/lang/String;Lmindustry/maps/Map;)Z", 4106 },
	{ "lambda$load$1", (intptr_t) M_mindustry_maps_Maps_lambda$load$1_mindustry_mod_Mods$LoadedMod_arc_files_Fi, VTABLE_mindustry_maps_Maps_lambda$load$1_mindustry_mod_Mods$LoadedMod_arc_files_Fi, "(Lmindustry/mod/Mods$LoadedMod;Larc/files/Fi;)V", 4098 },
	{ "lambda$load$0", (intptr_t) M_mindustry_maps_Maps_lambda$load$0_arc_files_Fi, VTABLE_mindustry_maps_Maps_lambda$load$0_arc_files_Fi, "(Larc/files/Fi;)V", 4098 },
	{ "lambda$new$0", (intptr_t) M_mindustry_maps_Maps_lambda$new$0_mindustry_game_EventType$ClientLoadEvent, VTABLE_mindustry_maps_Maps_lambda$new$0_mindustry_game_EventType$ClientLoadEvent, "(Lmindustry/game/EventType$ClientLoadEvent;)V", 4098 },
	{ "lambda$byName$0", (intptr_t) SM_mindustry_maps_Maps_lambda$byName$0_java_lang_String_mindustry_maps_Map_R_boolean, 0, "(Ljava/lang/String;Lmindustry/maps/Map;)Z", 4106 },
	{ "lambda$moddedMaps$0", (intptr_t) SM_mindustry_maps_Maps_lambda$moddedMaps$0_mindustry_maps_Map_R_boolean, 0, "(Lmindustry/maps/Map;)Z", 4106 },
	{ "lambda$defaultMaps$0", (intptr_t) SM_mindustry_maps_Maps_lambda$defaultMaps$0_mindustry_maps_Map_R_boolean, 0, "(Lmindustry/maps/Map;)Z", 4106 },
	{ "lambda$customMaps$0", (intptr_t) SM_mindustry_maps_Maps_lambda$customMaps$0_mindustry_maps_Map_R_boolean, 0, "(Lmindustry/maps/Map;)Z", 4106 },
	{ "<clinit>", (intptr_t) clinit_mindustry_maps_Maps, 0, "()V", 8 },
};

Class class_mindustry_maps_Maps{
		.nativeName = (intptr_t) "mindustry/maps/Maps",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_maps_Maps),
		.classVtable = (intptr_t) vtable_mindustry_maps_Maps,
		.staticInitializer = (intptr_t) clinit_mindustry_maps_Maps,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_maps_Maps,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 2,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 9,
		.nativeFields = (intptr_t) fields,
		.methodCount = 49,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 48,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_maps_Maps = registerClass(&class_mindustry_maps_Maps);

}
