#include "mindustry/game/Saves.h"
#include "java/lang/Integer.h"
#include "arc/func/Prov.h"
#include "arc/Events.h"
#include "java/util/concurrent/Future.h"
#include "java/lang/reflect/Constructor.h"
#include "java/lang/Runnable.h"
#include "mindustry/game/Saves_invoke_arc_func_Boolf_5.h"
#include "mindustry/game/Saves_invoke_arc_func_Boolf_4.h"
#include "arc/struct/StringMap.h"
#include "mindustry/core/ContentLoader.h"
#include "mindustry/io/SavePreviewLoader.h"
#include "arc/struct/Seq.h"
#include "java/lang/reflect/Method.h"
#include "arc/Settings.h"
#include "mindustry/game/Saves_invoke_arc_func_Boolf_3.h"
#include "mindustry/game/SectorInfo.h"
#include "java/lang/Throwable.h"
#include "arc/func/Boolf.h"
#include "java/lang/Exception.h"
#include "arc/Core.h"
#include "java/lang/reflect/Field.h"
#include "java/util/concurrent/ExecutorService.h"
#include "mindustry/game/Saves.h"
#include "java/util/Iterator.h"
#include "arc/util/Log.h"
#include "mindustry/game/Saves_invoke_java_lang_Runnable_1.h"
#include "mindustry/game/Saves_invoke_arc_func_Cons_2.h"
#include "arc/util/Time.h"
#include "mindustry/game/Saves_invoke_arc_func_Cons_3.h"
#include "arc/graphics/Texture.h"
#include "arc/util/Nullable.h"
#include "java/util/concurrent/Callable.h"
#include "arc/assets/AssetManager.h"
#include "arc/scene/Scene.h"
#include "java/lang/Object.h"
#include "mindustry/io/SaveIO.h"
#include "mindustry/content/Planets.h"
#include "arc/struct/ObjectSet.h"
#include "mindustry/game/Saves_invoke_arc_func_Prov_1.h"
#include "arc/struct/ObjectMap.h"
#include "mindustry/type/SectorPreset.h"
#include "mindustry/game/Saves_1Remap.h"
#include "java/text/DateFormat.h"
#include "arc/assets/loaders/AssetLoader.h"
#include "mindustry/game/Rules.h"
#include "mindustry/game/CampaignStats.h"
#include "arc/util/Timer_Task.h"
#include "arc/files/Fi.h"
#include "mindustry/core/GameState_State.h"
#include "arc/func/Cons.h"
#include "arc/struct/IntSet.h"
#include "java/lang/String.h"
#include "java/text/SimpleDateFormat.h"
#include "mindustry/io/SaveMeta.h"
#include "mindustry/game/EventType_StateChangeEvent.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/game/Saves_invoke_java_util_concurrent_Callable_1.h"
#include "mindustry/type/Sector.h"
#include "java/lang/CharSequence.h"
#include "mindustry/type/Planet.h"
#include "mindustry/game/Saves_SaveSlot.h"
#include "java/lang/Class.h"
#include "mindustry/Vars.h"
#include "mindustry/core/GameState.h"

extern "C" {

jobject SF_mindustry_game_Saves_dateFormat;

void mark_mindustry_game_Saves(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_game_Saves_dateFormat)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_game_Saves_dateFormat)->clazz)->markFunction)((jobject) SF_mindustry_game_Saves_dateFormat, mark, depth + 1);
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
	auto self = (mindustry_game_Saves *) object;
	if (self->F_saves)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_saves)->clazz)->markFunction)((jobject) self->F_saves, mark, depth + 1);
	if (self->F_current)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_current)->clazz)->markFunction)((jobject) self->F_current, mark, depth + 1);
	if (self->F_lastSectorSave)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lastSectorSave)->clazz)->markFunction)((jobject) self->F_lastSectorSave, mark, depth + 1);
}

void init_mindustry_game_Saves(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Saves:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_Saves(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(38);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(29);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_game_Saves *) NULL_CHECK(sp[0].o))->F_saves = (jref) sp[1].o;
	LINE_NUMBER(39);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_assets;
	sp[1].o = ((jobject) &class_arc_graphics_Texture);
	sp[2].o = ((jobject) createStringLiteral(ctx, u8".spreview"_j));
	clinit_mindustry_io_SavePreviewLoader(ctx);
	sp[3].o = gcAlloc(ctx, &class_mindustry_io_SavePreviewLoader);
	init_mindustry_io_SavePreviewLoader(ctx, sp[3].o);
	((func_arc_assets_AssetManager_setLoader_java_lang_Class_java_lang_String_arc_assets_loaders_AssetLoader) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_setLoader_java_lang_Class_java_lang_String_arc_assets_loaders_AssetLoader])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(41);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$StateChangeEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_game_Saves_invoke_arc_func_Cons_2(ctx);
		auto proxy = (mindustry_game_Saves_invoke_arc_func_Cons_2 *) gcAlloc(ctx, &class_mindustry_game_Saves_invoke_arc_func_Cons_2);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(48);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_game_Saves_clearOldMegabaseSectors(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Saves:clearOldMegabaseSectors", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(51);
	sp[0].o = (jobject) createArray(ctx, &class_int, (13));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (27);
	ARRAY_ACCESS(jint, sp[0].o, (jint(1))) = (245);
	ARRAY_ACCESS(jint, sp[0].o, (jint(2))) = (244);
	ARRAY_ACCESS(jint, sp[0].o, (jint(3))) = (243);
	ARRAY_ACCESS(jint, sp[0].o, (jint(4))) = (242);
	ARRAY_ACCESS(jint, sp[0].o, (jint(5))) = (247);
	ARRAY_ACCESS(jint, sp[0].o, (6)) = (246);
	ARRAY_ACCESS(jint, sp[0].o, (7)) = (237);
	ARRAY_ACCESS(jint, sp[0].o, (8)) = (150);
	ARRAY_ACCESS(jint, sp[0].o, (9)) = (157);
	ARRAY_ACCESS(jint, sp[0].o, (10)) = (138);
	ARRAY_ACCESS(jint, sp[0].o, (11)) = (251);
	ARRAY_ACCESS(jint, sp[0].o, (12)) = (103);
	sp[0].o = (jobject)SM_arc_struct_IntSet_with_Array1_int_R_arc_struct_IntSet(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(54);
	sp[0].o = (jobject)((mindustry_game_Saves *) NULL_CHECK((frame[0].o)))->F_saves;
	{ /* InvokeDynamic */
		clinit_mindustry_game_Saves_invoke_arc_func_Boolf_3(ctx);
		auto proxy = (mindustry_game_Saves_invoke_arc_func_Boolf_3 *) gcAlloc(ctx, &class_mindustry_game_Saves_invoke_arc_func_Boolf_3);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_removeAll_arc_func_Boolf_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_removeAll_arc_func_Boolf_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(62);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_game_Saves_load(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[21];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Saves:load", 21 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(65);
	sp[0].o = (jobject)((mindustry_game_Saves *) NULL_CHECK((frame[0].o)))->F_saves;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(68);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(70);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_saveDirectory;
	{ /* InvokeDynamic */
		clinit_mindustry_game_Saves_invoke_arc_func_Cons_3(ctx);
		auto proxy = (mindustry_game_Saves_invoke_arc_func_Cons_3 *) gcAlloc(ctx, &class_mindustry_game_Saves_invoke_arc_func_Cons_3);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_files_Fi_walk_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_walk_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(80);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	}
label_16:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_17;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_java_util_concurrent_Future, sp[0].o));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(82);
	sp[0].o = (jobject)((mindustry_game_Saves *) NULL_CHECK((frame[0].o)))->F_saves;
	sp[1].o = (jobject)((func_java_util_concurrent_Future_get_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_concurrent_Future, INDEX_java_util_concurrent_Future_get_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_game_Saves$SaveSlot, sp[1].o)));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(85);
	goto label_18;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(83);
	frame[4].o = sp[0].o;
	LINE_NUMBER(84);
	SM_arc_util_Log_err_java_lang_Throwable(ctx, (frame[4].o));
	}
label_18:;
	LINE_NUMBER(86);
	goto label_16;
label_17:;
	{
	LINE_NUMBER(88);
	((func_mindustry_game_Saves_clearOldMegabaseSectors) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_game_Saves_clearOldMegabaseSectors])(ctx, (frame[0].o));
	LINE_NUMBER(90);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_game_Saves *) NULL_CHECK((frame[0].o)))->F_saves;
	{ /* InvokeDynamic */
		clinit_mindustry_game_Saves_invoke_arc_func_Boolf_4(ctx);
		auto proxy = (mindustry_game_Saves_invoke_arc_func_Boolf_4 *) gcAlloc(ctx, &class_mindustry_game_Saves_invoke_arc_func_Boolf_4);
		sp[2].o = (jobject) proxy;
	}
	sp[1].o = (jobject)((func_arc_struct_Seq_find_arc_func_Boolf_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_find_arc_func_Boolf_R_java_lang_Object])(ctx, sp[1].o, sp[2].o);
	((mindustry_game_Saves *) NULL_CHECK(sp[0].o))->F_lastSectorSave = (jref) (checkCast(ctx, &class_mindustry_game_Saves$SaveSlot, sp[1].o));
	LINE_NUMBER(116);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(117);
	clinit_arc_struct_ObjectSet(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_ObjectSet);
	init_arc_struct_ObjectSet(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(120);
	sp[0].o = (jobject)((mindustry_game_Saves *) NULL_CHECK((frame[0].o)))->F_saves;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	}
label_24:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 == 0) goto label_25;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	frame[5].o = (checkCast(ctx, &class_mindustry_game_Saves$SaveSlot, sp[0].o));
	LINE_NUMBER(121);
	sp[0].o = (jobject)((func_mindustry_game_Saves$SaveSlot_getSector_R_mindustry_type_Sector) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_game_Saves$SaveSlot_getSector_R_mindustry_type_Sector])(ctx, (frame[5].o));
	if (sp[0].o == nullptr) goto label_27;
	}
	{
	LINE_NUMBER(122);
	sp[0].o = (jobject)((func_mindustry_game_Saves$SaveSlot_getSector_R_mindustry_type_Sector) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_game_Saves$SaveSlot_getSector_R_mindustry_type_Sector])(ctx, (frame[5].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(124);
	sp[0].o = (jobject)((mindustry_game_Saves$SaveSlot *) NULL_CHECK((frame[5].o)))->F_meta;
	sp[0].o = (jobject)((mindustry_io_SaveMeta *) NULL_CHECK(sp[0].o))->F_tags;
	sp[0].o = (jobject)((func_arc_struct_StringMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_StringMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"sectorPreset"_j))));
	frame[7].o = (checkCast(ctx, &class_java_lang_String, sp[0].o));
	LINE_NUMBER(125);
	frame[8].o = (jobject(nullptr));
	LINE_NUMBER(127);
	if ((frame[7].o) == nullptr) goto label_32;
	}
	{
	LINE_NUMBER(128);
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, (frame[7].o));
	if (temp0 != 0) goto label_34;
	}
	{
	LINE_NUMBER(129);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_sector_java_lang_String_R_mindustry_type_SectorPreset) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_sector_java_lang_String_R_mindustry_type_SectorPreset])(ctx, sp[0].o, (frame[7].o));
	frame[9].o = sp[0].o;
	LINE_NUMBER(131);
	if ((frame[9].o) == nullptr) goto label_37;
	}
	{
	sp[0].o = (jobject)((mindustry_type_SectorPreset *) NULL_CHECK((frame[9].o)))->F_sector;
	if (sp[0].o == (frame[6].o)) goto label_37;
	}
	{
	if (((jint)((mindustry_type_SectorPreset *) NULL_CHECK((frame[9].o)))->F_requireUnlock) == 0) goto label_37;
	}
	{
	LINE_NUMBER(132);
	sp[0].o = (jobject)((mindustry_type_SectorPreset *) NULL_CHECK((frame[9].o)))->F_sector;
	frame[8].o = sp[0].o;
	}
label_37:;
	LINE_NUMBER(134);
	goto label_34;
label_32:;
	{
	LINE_NUMBER(136);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_sectors_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_sectors_R_arc_struct_Seq])(ctx, sp[0].o);
	{ /* InvokeDynamic */
		clinit_mindustry_game_Saves_invoke_arc_func_Boolf_5(ctx);
		auto proxy = (mindustry_game_Saves_invoke_arc_func_Boolf_5 *) gcAlloc(ctx, &class_mindustry_game_Saves_invoke_arc_func_Boolf_5);
		proxy->F_field0 = (jref) (frame[6].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_find_arc_func_Boolf_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_find_arc_func_Boolf_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	frame[9].o = (checkCast(ctx, &class_mindustry_type_SectorPreset, sp[0].o));
	LINE_NUMBER(137);
	if ((frame[9].o) == nullptr) goto label_34;
	}
	{
	sp[0].o = (jobject)((mindustry_type_SectorPreset *) NULL_CHECK((frame[9].o)))->F_sector;
	if (sp[0].o == (frame[6].o)) goto label_34;
	}
	{
	if (((jint)((mindustry_type_SectorPreset *) NULL_CHECK((frame[9].o)))->F_requireUnlock) == 0) goto label_34;
	}
	{
	LINE_NUMBER(138);
	sp[0].o = (jobject)((mindustry_type_SectorPreset *) NULL_CHECK((frame[9].o)))->F_sector;
	frame[8].o = sp[0].o;
	}
label_34:;
	{
	LINE_NUMBER(142);
	if ((frame[8].o) == nullptr) goto label_41;
	}
	{
	LINE_NUMBER(144);
	sp[0].o = (jobject)((mindustry_game_Saves$SaveSlot *) NULL_CHECK((frame[5].o)))->F_file;
	sp[1].o = (jobject)((func_mindustry_game_Saves_getSectorFile_mindustry_type_Sector_R_arc_files_Fi) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_game_Saves_getSectorFile_mindustry_type_Sector_R_arc_files_Fi])(ctx, (frame[0].o), (frame[8].o));
	jint temp0 = (jint)((func_arc_files_Fi_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_43;
	}
	{
	LINE_NUMBER(145);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"Remapping sector: @ -> @ (@)"_j));
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(3)));
	jint temp0 = jint(0);
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, ((jint)((mindustry_type_Sector *) NULL_CHECK((frame[6].o)))->F_id));
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	jint temp1 = jint(1);
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, ((jint)((mindustry_type_Sector *) NULL_CHECK((frame[8].o)))->F_id));
	ARRAY_ACCESS(jobject, sp[1].o, temp1) = sp[2].o;
	jint temp2 = jint(2);
	sp[2].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[8].o)))->F_preset;
	ARRAY_ACCESS(jobject, sp[1].o, temp2) = sp[2].o;
	SM_arc_util_Log_info_java_lang_String_Array1_java_lang_Object(ctx, sp[0].o, sp[1].o);
	}
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	LINE_NUMBER(148);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[1].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[6].o)))->F_planet;
	sp[1].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK(sp[1].o))->F_name;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-s-\u0001-info"_j.string, 2, sp[1].o, boxInteger(ctx, ((jint)((mindustry_type_Sector *) NULL_CHECK((frame[6].o)))->F_id)));
	sp[2].o = ((jobject) &class_mindustry_game_SectorInfo);
	{ /* InvokeDynamic */
		clinit_mindustry_game_Saves_invoke_arc_func_Prov_1(ctx);
		auto proxy = (mindustry_game_Saves_invoke_arc_func_Prov_1 *) gcAlloc(ctx, &class_mindustry_game_Saves_invoke_arc_func_Prov_1);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_Settings_getJson_java_lang_String_java_lang_Class_arc_func_Prov_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getJson_java_lang_String_java_lang_Class_arc_func_Prov_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	frame[9].o = (checkCast(ctx, &class_mindustry_game_SectorInfo, sp[0].o));
	LINE_NUMBER(149);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_saveDirectory;
	sp[1].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[6].o)))->F_planet;
	sp[1].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK(sp[1].o))->F_name;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"remap_\u0001_\u0001.msav"_j.string, 2, sp[1].o, boxInteger(ctx, ((jint)((mindustry_type_Sector *) NULL_CHECK((frame[6].o)))->F_id)));
	sp[0].o = (jobject)((func_arc_files_Fi_child_java_lang_String_R_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_child_java_lang_String_R_arc_files_Fi])(ctx, sp[0].o, sp[1].o);
	frame[10].o = sp[0].o;
	LINE_NUMBER(150);
	sp[0].o = (jobject)((mindustry_game_Saves$SaveSlot *) NULL_CHECK((frame[5].o)))->F_file;
	((func_arc_files_Fi_moveTo_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_moveTo_arc_files_Fi])(ctx, sp[0].o, (frame[10].o));
	LINE_NUMBER(152);
	sp[0].o = frame[2].o;
	clinit_mindustry_game_Saves$1Remap(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_game_Saves$1Remap);
	sp[2].o = frame[0].o;
	sp[3].o = frame[5].o;
	sp[4].o = frame[10].o;
	sp[5].o = frame[6].o;
	sp[6].o = frame[9].o;
	sp[7].o = (jobject)((func_mindustry_game_Saves_getSectorFile_mindustry_type_Sector_R_arc_files_Fi) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_game_Saves_getSectorFile_mindustry_type_Sector_R_arc_files_Fi])(ctx, (frame[0].o), (frame[8].o));
	init_mindustry_game_Saves$1Remap_mindustry_game_Saves_mindustry_game_Saves$SaveSlot_arc_files_Fi_mindustry_type_Sector_mindustry_game_SectorInfo_arc_files_Fi_mindustry_type_Sector(ctx, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o, sp[6].o, sp[7].o, (frame[8].o));
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(153);
	jint temp0 = (jint)((func_arc_struct_ObjectSet_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_ObjectSet_add_java_lang_Object_R_boolean])(ctx, (frame[3].o), (frame[8].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(156);
	goto label_43;
label_6:;
	{
	sp -= 1;
	LINE_NUMBER(154);
	frame[9].o = sp[0].o;
	LINE_NUMBER(155);
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"Failed to move sector files when remapping: \u0001 -> \u0001"_j.string, 2, boxInteger(ctx, ((jint)((mindustry_type_Sector *) NULL_CHECK((frame[6].o)))->F_id)), boxInteger(ctx, ((jint)((mindustry_type_Sector *) NULL_CHECK((frame[8].o)))->F_id)));
	SM_arc_util_Log_err_java_lang_String_java_lang_Throwable(ctx, sp[0].o, (frame[9].o));
	}
label_43:;
	{
	LINE_NUMBER(159);
	((mindustry_type_Sector *) NULL_CHECK((frame[8].o)))->F_save = (jref) (frame[5].o);
	LINE_NUMBER(160);
	sp[0].o = (jobject)((mindustry_game_Saves$SaveSlot *) NULL_CHECK((frame[5].o)))->F_meta;
	sp[0].o = (jobject)((mindustry_io_SaveMeta *) NULL_CHECK(sp[0].o))->F_rules;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_sector = (jref) (frame[8].o);
	goto label_27;
	}
label_41:;
	{
	LINE_NUMBER(163);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[6].o)))->F_save;
	if (sp[0].o == nullptr) goto label_51;
	}
	{
	LINE_NUMBER(164);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"Sector @ has two corresponding saves: @ and @"_j));
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(3)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = (frame[6].o);
	jint temp0 = jint(1);
	sp[2].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[6].o)))->F_save;
	sp[2].o = (jobject)((mindustry_game_Saves$SaveSlot *) NULL_CHECK(sp[2].o))->F_file;
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	jint temp1 = jint(2);
	sp[2].o = (jobject)((mindustry_game_Saves$SaveSlot *) NULL_CHECK((frame[5].o)))->F_file;
	ARRAY_ACCESS(jobject, sp[1].o, temp1) = sp[2].o;
	SM_arc_util_Log_warn_java_lang_String_Array1_java_lang_Object(ctx, sp[0].o, sp[1].o);
	}
label_51:;
	{
	LINE_NUMBER(166);
	((mindustry_type_Sector *) NULL_CHECK((frame[6].o)))->F_save = (jref) (frame[5].o);
	}
label_27:;
	LINE_NUMBER(169);
	goto label_24;
label_25:;
	{
	LINE_NUMBER(172);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[2].o));
	frame[4].o = sp[0].o;
	}
label_53:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 == 0) goto label_54;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	frame[5].o = (checkCast(ctx, &class_mindustry_game_Saves$1Remap, sp[0].o));
	LINE_NUMBER(173);
	sp[0].o = (jobject)((mindustry_game_Saves$1Remap *) NULL_CHECK((frame[5].o)))->F_sourceSector;
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_planet;
	clinit_mindustry_content_Planets(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Planets_serpulo;
	if (sp[0].o != sp[1].o) goto label_56;
	}
	INST_ICONST(1);
	clinit_mindustry_Vars(ctx);
	SF_mindustry_Vars_hadSerpuloRemaps = (--sp)->i;
label_56:;
	{
	LINE_NUMBER(174);
	sp[0].o = (jobject)((mindustry_game_Saves$1Remap *) NULL_CHECK((frame[5].o)))->F_destSector;
	frame[6].o = sp[0].o;
	LINE_NUMBER(177);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[1].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[6].o)))->F_planet;
	sp[1].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK(sp[1].o))->F_name;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-s-\u0001-info"_j.string, 2, sp[1].o, boxInteger(ctx, ((jint)((mindustry_type_Sector *) NULL_CHECK((frame[6].o)))->F_id)));
	sp[2].o = (jobject)((mindustry_game_Saves$1Remap *) NULL_CHECK((frame[5].o)))->F_sourceInfo;
	((func_arc_Settings_putJson_java_lang_String_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_putJson_java_lang_String_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(178);
	((func_mindustry_type_Sector_loadInfo) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_type_Sector_loadInfo])(ctx, (frame[6].o));
	LINE_NUMBER(180);
	sp[0].o = frame[6].o;
	sp[1].o = (jobject)((mindustry_game_Saves$1Remap *) NULL_CHECK((frame[5].o)))->F_slot;
	((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_save = (jref) sp[1].o;
	}
label_11: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_10; }
	}
	{
	LINE_NUMBER(183);
	sp[0].o = (jobject)((mindustry_game_Saves$1Remap *) NULL_CHECK((frame[5].o)))->F_sourceFile;
	sp[1].o = (jobject)((mindustry_game_Saves$1Remap *) NULL_CHECK((frame[5].o)))->F_destFile;
	((func_arc_files_Fi_moveTo_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_moveTo_arc_files_Fi])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(184);
	sp[0].o = (jobject)((mindustry_game_Saves$1Remap *) NULL_CHECK((frame[5].o)))->F_slot;
	sp[1].o = (jobject)((mindustry_game_Saves$1Remap *) NULL_CHECK((frame[5].o)))->F_destFile;
	((mindustry_game_Saves$SaveSlot *) NULL_CHECK(sp[0].o))->F_file = (jref) sp[1].o;
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(187);
	goto label_61;
label_10:;
	{
	sp -= 1;
	LINE_NUMBER(185);
	frame[7].o = sp[0].o;
	LINE_NUMBER(186);
	sp[0].o = (jobject)((mindustry_game_Saves$1Remap *) NULL_CHECK((frame[5].o)))->F_sourceSector;
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"Failed to move back sector files when remapping: \u0001 -> \u0001"_j.string, 2, boxInteger(ctx, ((jint)((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_id)), boxInteger(ctx, ((jint)((mindustry_type_Sector *) NULL_CHECK((frame[6].o)))->F_id)));
	SM_arc_util_Log_err_java_lang_String_java_lang_Throwable(ctx, sp[0].o, (frame[7].o));
	}
label_61:;
	{
	LINE_NUMBER(190);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((mindustry_game_Saves$1Remap *) NULL_CHECK((frame[5].o)))->F_sourceSector;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_63;
	}
	{
	LINE_NUMBER(191);
	sp[0].o = (jobject)((mindustry_game_Saves$1Remap *) NULL_CHECK((frame[5].o)))->F_sourceSector;
	((func_mindustry_type_Sector_clearInfo) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_Sector_clearInfo])(ctx, sp[0].o);
	}
label_63:;
	LINE_NUMBER(193);
	goto label_53;
label_54:;
	LINE_NUMBER(194);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_game_Saves_getLastSector_R_mindustry_game_Saves$SaveSlot(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Saves:getLastSector", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(197);
	sp[0].o = (jobject)((mindustry_game_Saves *) NULL_CHECK((frame[0].o)))->F_lastSectorSave;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_game_Saves_getCurrent_R_mindustry_game_Saves$SaveSlot(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Saves:getCurrent", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(201);
	sp[0].o = (jobject)((mindustry_game_Saves *) NULL_CHECK((frame[0].o)))->F_current;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_game_Saves_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Saves:update", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(205);
	sp[0].o = (jobject)((mindustry_game_Saves *) NULL_CHECK((frame[0].o)))->F_current;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isGame_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isGame_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_5;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	LINE_NUMBER(206);
	jint temp0 = (jint)((func_mindustry_core_GameState_isPaused_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isPaused_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_7;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	jint temp0 = (jint)((func_arc_scene_Scene_hasDialog_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_hasDialog_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_5;
	}
label_7:;
	{
	LINE_NUMBER(207);
	if ((longCompare(((jlong)((mindustry_game_Saves *) NULL_CHECK((frame[0].o)))->F_lastTimestamp), (jlong(0)))) == 0) goto label_8;
	}
	{
	LINE_NUMBER(208);
	jlong temp0 = (jlong)SM_arc_util_Time_timeSinceMillis_long_R_long(ctx, ((jlong)((mindustry_game_Saves *) NULL_CHECK((frame[0].o)))->F_lastTimestamp));
	frame[1].l = temp0;
	LINE_NUMBER(209);
	sp[0].o = frame[0].o;
	((mindustry_game_Saves *) NULL_CHECK(sp[0].o))->F_totalPlaytime = (((jlong)((mindustry_game_Saves *) NULL_CHECK(sp[0].o))->F_totalPlaytime) + (frame[1].l));
	LINE_NUMBER(210);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp1 = (jint)((func_mindustry_core_GameState_isCampaign_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isCampaign_R_boolean])(ctx, sp[0].o);
	if (temp1 == 0) goto label_8;
	}
	{
	LINE_NUMBER(211);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((func_mindustry_core_GameState_getPlanet_R_mindustry_type_Planet) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_getPlanet_R_mindustry_type_Planet])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_mindustry_type_Planet_stats_R_mindustry_game_CampaignStats) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_Planet_stats_R_mindustry_game_CampaignStats])(ctx, sp[0].o);
	((mindustry_game_CampaignStats *) NULL_CHECK(sp[0].o))->F_playtime = (((jlong)((mindustry_game_CampaignStats *) NULL_CHECK(sp[0].o))->F_playtime) + (frame[1].l));
	}
label_8:;
	{
	LINE_NUMBER(214);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)SM_arc_util_Time_millis_R_long(ctx);
	((mindustry_game_Saves *) NULL_CHECK(sp[0].o))->F_lastTimestamp = temp0;
	}
label_5:;
	{
	LINE_NUMBER(217);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isGame_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isGame_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_13;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	if (((jint)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_gameOver) != 0) goto label_13;
	}
	{
	sp[0].o = (jobject)((mindustry_game_Saves *) NULL_CHECK((frame[0].o)))->F_current;
	if (sp[0].o == nullptr) goto label_13;
	}
	{
	sp[0].o = (jobject)((mindustry_game_Saves *) NULL_CHECK((frame[0].o)))->F_current;
	jint temp0 = (jint)((func_mindustry_game_Saves$SaveSlot_isAutosave_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Saves$SaveSlot_isAutosave_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_13;
	}
	{
	LINE_NUMBER(218);
	sp[0].o = frame[0].o;
	((mindustry_game_Saves *) NULL_CHECK(sp[0].o))->F_time = (((jfloat)((mindustry_game_Saves *) NULL_CHECK(sp[0].o))->F_time) + (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta));
	LINE_NUMBER(219);
	jfloat temp0 = (jfloat)((mindustry_game_Saves *) NULL_CHECK((frame[0].o)))->F_time;
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	jint temp1 = (jint)((func_arc_Settings_getInt_java_lang_String_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getInt_java_lang_String_R_int])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"saveinterval"_j))));
	if ((floatCompare(temp0, (jfloat((temp1 * (60)))), -1)) <= 0) goto label_16;
	}
	clinit_mindustry_Vars(ctx);
	(sp++)->i = SF_mindustry_Vars_disableSave;
	if ((--sp)->i != 0) goto label_16;
	{
	LINE_NUMBER(220);
	((mindustry_game_Saves *) NULL_CHECK((frame[0].o)))->F_saving = (jint(1));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(223);
	sp[0].o = (jobject)((mindustry_game_Saves *) NULL_CHECK((frame[0].o)))->F_current;
	((func_mindustry_game_Saves$SaveSlot_save) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Saves$SaveSlot_save])(ctx, sp[0].o);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(226);
	goto label_18;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(224);
	frame[1].o = sp[0].o;
	LINE_NUMBER(225);
	SM_arc_util_Log_err_java_lang_Throwable(ctx, (frame[1].o));
	}
label_18:;
	{
	LINE_NUMBER(228);
	jfloat temp0 = jfloat(3.0f);
	{ /* InvokeDynamic */
		clinit_mindustry_game_Saves_invoke_java_lang_Runnable_1(ctx);
		auto proxy = (mindustry_game_Saves_invoke_java_lang_Runnable_1 *) gcAlloc(ctx, &class_mindustry_game_Saves_invoke_java_lang_Runnable_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_util_Time_runTask_float_java_lang_Runnable_R_arc_util_Timer$Task(ctx, temp0, sp[0].o);
	LINE_NUMBER(230);
	((mindustry_game_Saves *) NULL_CHECK((frame[0].o)))->F_time = (jfloat(0));
	goto label_16;
	}
label_13:;
	{
	LINE_NUMBER(233);
	((mindustry_game_Saves *) NULL_CHECK((frame[0].o)))->F_time = (jfloat(0));
	}
label_16:;
	LINE_NUMBER(235);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jlong M_mindustry_game_Saves_getTotalPlaytime_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Saves:getTotalPlaytime", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(238);
	popStackFrame(ctx);
	return ((jlong)((mindustry_game_Saves *) NULL_CHECK((frame[0].o)))->F_totalPlaytime);
	}

	popStackFrame(ctx);
}

void M_mindustry_game_Saves_resetSave(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Saves:resetSave", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(242);
	((mindustry_game_Saves *) NULL_CHECK((frame[0].o)))->F_current = (jref) (jobject(nullptr));
	LINE_NUMBER(243);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_game_Saves_isSaving_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Saves:isSaving", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(246);
	popStackFrame(ctx);
	return ((jint)((mindustry_game_Saves *) NULL_CHECK((frame[0].o)))->F_saving);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_game_Saves_getSectorFile_mindustry_type_Sector_R_arc_files_Fi(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Saves:getSectorFile", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(250);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_saveDirectory;
	sp[1].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_planet;
	sp[1].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK(sp[1].o))->F_name;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"sector-\u0001-\u0001.msav"_j.string, 2, sp[1].o, boxInteger(ctx, ((jint)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_id)));
	sp[0].o = (jobject)((func_arc_files_Fi_child_java_lang_String_R_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_child_java_lang_String_R_arc_files_Fi])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_game_Saves_saveSector_mindustry_type_Sector(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Saves:saveSector", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(254);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_save;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(255);
	sp[0].o = frame[1].o;
	clinit_mindustry_game_Saves$SaveSlot(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_game_Saves$SaveSlot);
	sp[2].o = frame[0].o;
	sp[3].o = (jobject)((func_mindustry_game_Saves_getSectorFile_mindustry_type_Sector_R_arc_files_Fi) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_game_Saves_getSectorFile_mindustry_type_Sector_R_arc_files_Fi])(ctx, (frame[0].o), (frame[1].o));
	init_mindustry_game_Saves$SaveSlot_mindustry_game_Saves_arc_files_Fi(ctx, sp[1].o, sp[2].o, sp[3].o);
	((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_save = (jref) sp[1].o;
	LINE_NUMBER(256);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_save;
	sp[1].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_save;
	sp[1].o = (jobject)((mindustry_game_Saves$SaveSlot *) NULL_CHECK(sp[1].o))->F_file;
	sp[1].o = (jobject)((func_arc_files_Fi_nameWithoutExtension_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_files_Fi_nameWithoutExtension_R_java_lang_String])(ctx, sp[1].o);
	((func_mindustry_game_Saves$SaveSlot_setName_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Saves$SaveSlot_setName_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(257);
	sp[0].o = (jobject)((mindustry_game_Saves *) NULL_CHECK((frame[0].o)))->F_saves;
	sp[1].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_save;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	}
label_1:;
	{
	LINE_NUMBER(259);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_save;
	((func_mindustry_game_Saves$SaveSlot_setAutosave_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Saves$SaveSlot_setAutosave_boolean])(ctx, sp[0].o, (jint(1)));
	LINE_NUMBER(260);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_save;
	((func_mindustry_game_Saves$SaveSlot_save) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Saves$SaveSlot_save])(ctx, sp[0].o);
	LINE_NUMBER(261);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_save;
	((mindustry_game_Saves *) NULL_CHECK(sp[0].o))->F_lastSectorSave = (jref) sp[1].o;
	LINE_NUMBER(262);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"last-sector-save"_j));
	sp[2].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_save;
	sp[2].o = (jobject)((func_mindustry_game_Saves$SaveSlot_getName_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_game_Saves$SaveSlot_getName_R_java_lang_String])(ctx, sp[2].o);
	((func_arc_Settings_put_java_lang_String_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_put_java_lang_String_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(263);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_game_Saves_addSave_java_lang_String_R_mindustry_game_Saves$SaveSlot(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Saves:addSave", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(266);
	clinit_mindustry_game_Saves$SaveSlot(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_Saves$SaveSlot);
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((func_mindustry_game_Saves_getNextSlotFile_R_arc_files_Fi) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_game_Saves_getNextSlotFile_R_arc_files_Fi])(ctx, (frame[0].o));
	init_mindustry_game_Saves$SaveSlot_mindustry_game_Saves_arc_files_Fi(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(267);
	((func_mindustry_game_Saves$SaveSlot_setName_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_game_Saves$SaveSlot_setName_java_lang_String])(ctx, (frame[2].o), (frame[1].o));
	LINE_NUMBER(268);
	sp[0].o = (jobject)((mindustry_game_Saves *) NULL_CHECK((frame[0].o)))->F_saves;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(269);
	((func_mindustry_game_Saves$SaveSlot_save) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_game_Saves$SaveSlot_save])(ctx, (frame[2].o));
	LINE_NUMBER(270);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_game_Saves_importSave_arc_files_Fi_R_mindustry_game_Saves$SaveSlot(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Saves:importSave", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(274);
	clinit_mindustry_game_Saves$SaveSlot(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_Saves$SaveSlot);
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((func_mindustry_game_Saves_getNextSlotFile_R_arc_files_Fi) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_game_Saves_getNextSlotFile_R_arc_files_Fi])(ctx, (frame[0].o));
	init_mindustry_game_Saves$SaveSlot_mindustry_game_Saves_arc_files_Fi(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(275);
	((func_mindustry_game_Saves$SaveSlot_importFile_arc_files_Fi) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_game_Saves$SaveSlot_importFile_arc_files_Fi])(ctx, (frame[2].o), (frame[1].o));
	LINE_NUMBER(276);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((func_arc_files_Fi_nameWithoutExtension_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_files_Fi_nameWithoutExtension_R_java_lang_String])(ctx, (frame[1].o));
	((func_mindustry_game_Saves$SaveSlot_setName_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Saves$SaveSlot_setName_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(278);
	sp[0].o = (jobject)((mindustry_game_Saves *) NULL_CHECK((frame[0].o)))->F_saves;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(279);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_game_Saves$SaveSlot *) NULL_CHECK((frame[2].o)))->F_file;
	sp[1].o = (jobject)SM_mindustry_io_SaveIO_getMeta_arc_files_Fi_R_mindustry_io_SaveMeta(ctx, sp[1].o);
	((mindustry_game_Saves$SaveSlot *) NULL_CHECK(sp[0].o))->F_meta = (jref) sp[1].o;
	LINE_NUMBER(280);
	((mindustry_game_Saves *) NULL_CHECK((frame[0].o)))->F_current = (jref) (frame[2].o);
	LINE_NUMBER(281);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_game_Saves_getNextSlotFile_R_arc_files_Fi(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Saves:getNextSlotFile", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(285);
	frame[1].i = (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(287);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_saveDirectory;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001.msav"_j.string, 1, boxInteger(ctx, (frame[1].i)));
	sp[0].o = (jobject)((func_arc_files_Fi_child_java_lang_String_R_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_child_java_lang_String_R_arc_files_Fi])(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	jint temp0 = (jint)((func_arc_files_Fi_exists_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_exists_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(288);
	INST_IINC(1, 1);
	goto label_1;
	}
label_3:;
	{
	LINE_NUMBER(290);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_game_Saves_getSaveSlots_R_arc_struct_Seq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Saves:getSaveSlots", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(294);
	sp[0].o = (jobject)((mindustry_game_Saves *) NULL_CHECK((frame[0].o)))->F_saves;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_game_Saves_deleteAll(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Saves:deleteAll", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(298);
	sp[0].o = (jobject)((mindustry_game_Saves *) NULL_CHECK((frame[0].o)))->F_saves;
	sp[0].o = (jobject)((func_arc_struct_Seq_copy_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_copy_R_arc_struct_Seq])(ctx, sp[0].o);
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
	frame[2].o = (checkCast(ctx, &class_mindustry_game_Saves$SaveSlot, sp[0].o));
	LINE_NUMBER(299);
	jint temp0 = (jint)((func_mindustry_game_Saves$SaveSlot_isSector_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_game_Saves$SaveSlot_isSector_R_boolean])(ctx, (frame[2].o));
	if (temp0 != 0) goto label_4;
	}
	{
	LINE_NUMBER(300);
	((func_mindustry_game_Saves$SaveSlot_delete) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_game_Saves$SaveSlot_delete])(ctx, (frame[2].o));
	}
label_4:;
	LINE_NUMBER(302);
	goto label_1;
label_2:;
	LINE_NUMBER(303);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_game_Saves_lambda$update$0(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Saves:lambda$update$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(228);
	((mindustry_game_Saves *) NULL_CHECK((frame[0].o)))->F_saving = (jint(0));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_game_Saves_lambda$load$3_mindustry_type_Sector_mindustry_type_SectorPreset_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Saves:lambda$load$3", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_Saves(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(136);
	sp[0].o = (jobject)((mindustry_type_SectorPreset *) NULL_CHECK((frame[1].o)))->F_planet;
	sp[1].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_planet;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	if (((jint)((mindustry_type_SectorPreset *) NULL_CHECK((frame[1].o)))->F_originalPosition) != ((jint)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_id)) goto label_1;
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

jbool SM_mindustry_game_Saves_lambda$load$2_mindustry_game_Saves$SaveSlot_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Saves:lambda$load$2", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_Saves(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(90);
	jint temp0 = (jint)((func_mindustry_game_Saves$SaveSlot_isSector_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_game_Saves$SaveSlot_isSector_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_mindustry_game_Saves$SaveSlot_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_game_Saves$SaveSlot_getName_R_java_lang_String])(ctx, (frame[0].o));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_settings;
	sp[1].o = (jobject)((func_arc_Settings_getString_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Settings_getString_java_lang_String_java_lang_String_R_java_lang_String])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"last-sector-save"_j))), (((jobject) createStringLiteral(ctx, u8"<none>"_j))));
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
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

void M_mindustry_game_Saves_lambda$load$0_arc_struct_Seq_arc_files_Fi(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Saves:lambda$load$0", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(71);
	sp[0].o = (jobject)((func_arc_files_Fi_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_files_Fi_name_R_java_lang_String])(ctx, (frame[2].o));
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"backup"_j))));
	if (temp0 != 0) goto label_1;
	}
	{
	jint temp0 = (jint)SM_mindustry_io_SaveIO_isSaveValid_arc_files_Fi_R_boolean(ctx, (frame[2].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(72);
	sp[0].o = frame[1].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_mainExecutor;
	{ /* InvokeDynamic */
		clinit_mindustry_game_Saves_invoke_java_util_concurrent_Callable_1(ctx);
		auto proxy = (mindustry_game_Saves_invoke_java_util_concurrent_Callable_1 *) gcAlloc(ctx, &class_mindustry_game_Saves_invoke_java_util_concurrent_Callable_1);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[1].o = (jobject)((func_java_util_concurrent_ExecutorService_submit_java_util_concurrent_Callable_R_java_util_concurrent_Future) resolveInterfaceMethod(ctx, &class_java_util_concurrent_ExecutorService, INDEX_java_util_concurrent_ExecutorService_submit_java_util_concurrent_Callable_R_java_util_concurrent_Future, sp[1].o))(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	}
label_1:;
	LINE_NUMBER(78);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_game_Saves_lambda$load$1_arc_files_Fi_R_mindustry_game_Saves$SaveSlot(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Saves:lambda$load$1", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(73);
	clinit_mindustry_game_Saves$SaveSlot(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_Saves$SaveSlot);
	init_mindustry_game_Saves$SaveSlot_mindustry_game_Saves_arc_files_Fi(ctx, sp[0].o, (frame[0].o), (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(74);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)SM_mindustry_io_SaveIO_getMeta_arc_files_Fi_R_mindustry_io_SaveMeta(ctx, (frame[1].o));
	((mindustry_game_Saves$SaveSlot *) NULL_CHECK(sp[0].o))->F_meta = (jref) sp[1].o;
	LINE_NUMBER(75);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_game_Saves_lambda$clearOldMegabaseSectors$0_arc_struct_IntSet_mindustry_game_Saves$SaveSlot_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Saves:lambda$clearOldMegabaseSectors$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_Saves(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(55);
	sp[0].o = (jobject)((func_mindustry_game_Saves$SaveSlot_getSector_R_mindustry_type_Sector) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_game_Saves$SaveSlot_getSector_R_mindustry_type_Sector])(ctx, (frame[1].o));
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_mindustry_game_Saves$SaveSlot_getSector_R_mindustry_type_Sector) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_game_Saves$SaveSlot_getSector_R_mindustry_type_Sector])(ctx, (frame[1].o));
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_planet;
	clinit_mindustry_content_Planets(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Planets_serpulo;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_mindustry_game_Saves$SaveSlot_getSector_R_mindustry_type_Sector) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_game_Saves$SaveSlot_getSector_R_mindustry_type_Sector])(ctx, (frame[1].o));
	jint temp0 = (jint)((func_arc_struct_IntSet_contains_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_contains_int_R_boolean])(ctx, sp[0].o, ((jint)((mindustry_type_Sector *) NULL_CHECK(sp[1].o))->F_id));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_game_Saves$SaveSlot *) NULL_CHECK((frame[1].o)))->F_meta;
	if (((jint)((mindustry_io_SaveMeta *) NULL_CHECK(sp[0].o))->F_build) >= (157)) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_game_Saves$SaveSlot *) NULL_CHECK((frame[1].o)))->F_meta;
	if (((jint)((mindustry_io_SaveMeta *) NULL_CHECK(sp[0].o))->F_build) <= (146)) goto label_1;
	}
	{
	LINE_NUMBER(56);
	sp[0].o = (jobject)((func_mindustry_game_Saves$SaveSlot_getSector_R_mindustry_type_Sector) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_game_Saves$SaveSlot_getSector_R_mindustry_type_Sector])(ctx, (frame[1].o));
	((func_mindustry_type_Sector_clearInfo) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_Sector_clearInfo])(ctx, sp[0].o);
	LINE_NUMBER(57);
	sp[0].o = (jobject)((mindustry_game_Saves$SaveSlot *) NULL_CHECK((frame[1].o)))->F_file;
	jint temp0 = (jint)((func_arc_files_Fi_delete_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_delete_R_boolean])(ctx, sp[0].o);
	LINE_NUMBER(58);
	popStackFrame(ctx);
	return (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(60);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_mindustry_game_Saves_lambda$new$0_mindustry_game_EventType$StateChangeEvent(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Saves:lambda$new$0", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(42);
	sp[0].o = (jobject)((mindustry_game_EventType$StateChangeEvent *) NULL_CHECK((frame[1].o)))->F_to;
	clinit_mindustry_core_GameState$State(ctx);
	sp[1].o = (jobject)SF_mindustry_core_GameState$State_menu;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	LINE_NUMBER(43);
	((mindustry_game_Saves *) NULL_CHECK((frame[0].o)))->F_totalPlaytime = (jlong(0));
	LINE_NUMBER(44);
	((mindustry_game_Saves *) NULL_CHECK((frame[0].o)))->F_lastTimestamp = (jlong(0));
	LINE_NUMBER(45);
	((mindustry_game_Saves *) NULL_CHECK((frame[0].o)))->F_current = (jref) (jobject(nullptr));
	}
label_1:;
	LINE_NUMBER(47);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void clinit_mindustry_game_Saves(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Saves:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_Saves(ctx);
	{
	LINE_NUMBER(27);
	sp[0].o = (jobject)SM_java_text_DateFormat_getDateTimeInstance_R_java_text_DateFormat(ctx);
	clinit_mindustry_game_Saves(ctx);
	SF_mindustry_game_Saves_dateFormat = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_game_Saves;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field current
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[2]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field lastSectorSave
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[3]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method getLastSector
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[2]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Method getCurrent
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[3]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

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
}

void *vtable_mindustry_game_Saves[] {
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
	(void *) M_mindustry_game_Saves_clearOldMegabaseSectors,
	(void *) M_mindustry_game_Saves_load,
	(void *) M_mindustry_game_Saves_getLastSector_R_mindustry_game_Saves$SaveSlot,
	(void *) M_mindustry_game_Saves_getCurrent_R_mindustry_game_Saves$SaveSlot,
	(void *) M_mindustry_game_Saves_update,
	(void *) M_mindustry_game_Saves_getTotalPlaytime_R_long,
	(void *) M_mindustry_game_Saves_resetSave,
	(void *) M_mindustry_game_Saves_isSaving_R_boolean,
	(void *) M_mindustry_game_Saves_getSectorFile_mindustry_type_Sector_R_arc_files_Fi,
	(void *) M_mindustry_game_Saves_saveSector_mindustry_type_Sector,
	(void *) M_mindustry_game_Saves_addSave_java_lang_String_R_mindustry_game_Saves$SaveSlot,
	(void *) M_mindustry_game_Saves_importSave_arc_files_Fi_R_mindustry_game_Saves$SaveSlot,
	(void *) M_mindustry_game_Saves_getNextSlotFile_R_arc_files_Fi,
	(void *) M_mindustry_game_Saves_getSaveSlots_R_arc_struct_Seq,
	(void *) M_mindustry_game_Saves_deleteAll,
	(void *) M_mindustry_game_Saves_lambda$update$0,
	(void *) M_mindustry_game_Saves_lambda$load$0_arc_struct_Seq_arc_files_Fi,
	(void *) M_mindustry_game_Saves_lambda$load$1_arc_files_Fi_R_mindustry_game_Saves$SaveSlot,
	(void *) M_mindustry_game_Saves_lambda$new$0_mindustry_game_EventType$StateChangeEvent,
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
	{ "clearOldMegabaseSectors", "()V" },
	{ "load", "()V" },
	{ "getLastSector", "()Lmindustry/game/Saves$SaveSlot;" },
	{ "getCurrent", "()Lmindustry/game/Saves$SaveSlot;" },
	{ "update", "()V" },
	{ "getTotalPlaytime", "()J" },
	{ "resetSave", "()V" },
	{ "isSaving", "()Z" },
	{ "getSectorFile", "(Lmindustry/type/Sector;)Larc/files/Fi;" },
	{ "saveSector", "(Lmindustry/type/Sector;)V" },
	{ "addSave", "(Ljava/lang/String;)Lmindustry/game/Saves$SaveSlot;" },
	{ "importSave", "(Larc/files/Fi;)Lmindustry/game/Saves$SaveSlot;" },
	{ "getNextSlotFile", "()Larc/files/Fi;" },
	{ "getSaveSlots", "()Larc/struct/Seq;" },
	{ "deleteAll", "()V" },
	{ "lambda$update$0", "()V" },
	{ "lambda$load$0", "(Larc/struct/Seq;Larc/files/Fi;)V" },
	{ "lambda$load$1", "(Larc/files/Fi;)Lmindustry/game/Saves$SaveSlot;" },
	{ "lambda$new$0", "(Lmindustry/game/EventType$StateChangeEvent;)V" },
};

static jclass innerClasses[] {
	&class_mindustry_game_Saves$SaveSlot,
};

static FieldMetadata fields[] {
	{ "dateFormat", &class_java_text_DateFormat, (intptr_t) &SF_mindustry_game_Saves_dateFormat, "Ljava/text/DateFormat;", 26 },
	{ "saves", &class_arc_struct_Seq, offsetof(mindustry_game_Saves, F_saves), "Larc/struct/Seq;", 0 },
	{ "current", &class_mindustry_game_Saves$SaveSlot, offsetof(mindustry_game_Saves, F_current), "Lmindustry/game/Saves$SaveSlot;", 0 },
	{ "lastSectorSave", &class_mindustry_game_Saves$SaveSlot, offsetof(mindustry_game_Saves, F_lastSectorSave), "Lmindustry/game/Saves$SaveSlot;", 2 },
	{ "saving", &class_boolean, offsetof(mindustry_game_Saves, F_saving), "Z", 2 },
	{ "time", &class_float, offsetof(mindustry_game_Saves, F_time), "F", 2 },
	{ "totalPlaytime", &class_long, offsetof(mindustry_game_Saves, F_totalPlaytime), "J", 0 },
	{ "lastTimestamp", &class_long, offsetof(mindustry_game_Saves, F_lastTimestamp), "J", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_game_Saves, 0, "()V", 1 },
	{ "clearOldMegabaseSectors", (intptr_t) M_mindustry_game_Saves_clearOldMegabaseSectors, VTABLE_mindustry_game_Saves_clearOldMegabaseSectors, "()V", 2 },
	{ "load", (intptr_t) M_mindustry_game_Saves_load, VTABLE_mindustry_game_Saves_load, "()V", 1 },
	{ "getLastSector", (intptr_t) M_mindustry_game_Saves_getLastSector_R_mindustry_game_Saves$SaveSlot, VTABLE_mindustry_game_Saves_getLastSector_R_mindustry_game_Saves$SaveSlot, "()Lmindustry/game/Saves$SaveSlot;", 1 },
	{ "getCurrent", (intptr_t) M_mindustry_game_Saves_getCurrent_R_mindustry_game_Saves$SaveSlot, VTABLE_mindustry_game_Saves_getCurrent_R_mindustry_game_Saves$SaveSlot, "()Lmindustry/game/Saves$SaveSlot;", 1 },
	{ "update", (intptr_t) M_mindustry_game_Saves_update, VTABLE_mindustry_game_Saves_update, "()V", 1 },
	{ "getTotalPlaytime", (intptr_t) M_mindustry_game_Saves_getTotalPlaytime_R_long, VTABLE_mindustry_game_Saves_getTotalPlaytime_R_long, "()J", 1 },
	{ "resetSave", (intptr_t) M_mindustry_game_Saves_resetSave, VTABLE_mindustry_game_Saves_resetSave, "()V", 1 },
	{ "isSaving", (intptr_t) M_mindustry_game_Saves_isSaving_R_boolean, VTABLE_mindustry_game_Saves_isSaving_R_boolean, "()Z", 1 },
	{ "getSectorFile", (intptr_t) M_mindustry_game_Saves_getSectorFile_mindustry_type_Sector_R_arc_files_Fi, VTABLE_mindustry_game_Saves_getSectorFile_mindustry_type_Sector_R_arc_files_Fi, "(Lmindustry/type/Sector;)Larc/files/Fi;", 1 },
	{ "saveSector", (intptr_t) M_mindustry_game_Saves_saveSector_mindustry_type_Sector, VTABLE_mindustry_game_Saves_saveSector_mindustry_type_Sector, "(Lmindustry/type/Sector;)V", 1 },
	{ "addSave", (intptr_t) M_mindustry_game_Saves_addSave_java_lang_String_R_mindustry_game_Saves$SaveSlot, VTABLE_mindustry_game_Saves_addSave_java_lang_String_R_mindustry_game_Saves$SaveSlot, "(Ljava/lang/String;)Lmindustry/game/Saves$SaveSlot;", 1 },
	{ "importSave", (intptr_t) M_mindustry_game_Saves_importSave_arc_files_Fi_R_mindustry_game_Saves$SaveSlot, VTABLE_mindustry_game_Saves_importSave_arc_files_Fi_R_mindustry_game_Saves$SaveSlot, "(Larc/files/Fi;)Lmindustry/game/Saves$SaveSlot;", 1 },
	{ "getNextSlotFile", (intptr_t) M_mindustry_game_Saves_getNextSlotFile_R_arc_files_Fi, VTABLE_mindustry_game_Saves_getNextSlotFile_R_arc_files_Fi, "()Larc/files/Fi;", 1 },
	{ "getSaveSlots", (intptr_t) M_mindustry_game_Saves_getSaveSlots_R_arc_struct_Seq, VTABLE_mindustry_game_Saves_getSaveSlots_R_arc_struct_Seq, "()Larc/struct/Seq;", 1 },
	{ "deleteAll", (intptr_t) M_mindustry_game_Saves_deleteAll, VTABLE_mindustry_game_Saves_deleteAll, "()V", 1 },
	{ "lambda$update$0", (intptr_t) M_mindustry_game_Saves_lambda$update$0, VTABLE_mindustry_game_Saves_lambda$update$0, "()V", 4098 },
	{ "lambda$load$3", (intptr_t) SM_mindustry_game_Saves_lambda$load$3_mindustry_type_Sector_mindustry_type_SectorPreset_R_boolean, 0, "(Lmindustry/type/Sector;Lmindustry/type/SectorPreset;)Z", 4106 },
	{ "lambda$load$2", (intptr_t) SM_mindustry_game_Saves_lambda$load$2_mindustry_game_Saves$SaveSlot_R_boolean, 0, "(Lmindustry/game/Saves$SaveSlot;)Z", 4106 },
	{ "lambda$load$0", (intptr_t) M_mindustry_game_Saves_lambda$load$0_arc_struct_Seq_arc_files_Fi, VTABLE_mindustry_game_Saves_lambda$load$0_arc_struct_Seq_arc_files_Fi, "(Larc/struct/Seq;Larc/files/Fi;)V", 4098 },
	{ "lambda$load$1", (intptr_t) M_mindustry_game_Saves_lambda$load$1_arc_files_Fi_R_mindustry_game_Saves$SaveSlot, VTABLE_mindustry_game_Saves_lambda$load$1_arc_files_Fi_R_mindustry_game_Saves$SaveSlot, "(Larc/files/Fi;)Lmindustry/game/Saves$SaveSlot;", 4098 },
	{ "lambda$clearOldMegabaseSectors$0", (intptr_t) SM_mindustry_game_Saves_lambda$clearOldMegabaseSectors$0_arc_struct_IntSet_mindustry_game_Saves$SaveSlot_R_boolean, 0, "(Larc/struct/IntSet;Lmindustry/game/Saves$SaveSlot;)Z", 4106 },
	{ "lambda$new$0", (intptr_t) M_mindustry_game_Saves_lambda$new$0_mindustry_game_EventType$StateChangeEvent, VTABLE_mindustry_game_Saves_lambda$new$0_mindustry_game_EventType$StateChangeEvent, "(Lmindustry/game/EventType$StateChangeEvent;)V", 4098 },
	{ "<clinit>", (intptr_t) clinit_mindustry_game_Saves, 0, "()V", 8 },
};

Class class_mindustry_game_Saves{
		.nativeName = (intptr_t) "mindustry/game/Saves",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_game_Saves),
		.classVtable = (intptr_t) vtable_mindustry_game_Saves,
		.staticInitializer = (intptr_t) clinit_mindustry_game_Saves,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_game_Saves,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 8,
		.nativeFields = (intptr_t) fields,
		.methodCount = 24,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 30,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_game_Saves = registerClass(&class_mindustry_game_Saves);

}
