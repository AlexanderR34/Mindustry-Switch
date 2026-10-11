#include "mindustry/game/Saves_SaveSlot.h"
#include "arc/assets/AssetDescriptor.h"
#include "java/util/concurrent/Future.h"
#include "java/lang/Runnable.h"
#include "java/lang/reflect/Constructor.h"
#include "arc/graphics/Pixmap.h"
#include "arc/struct/StringMap.h"
#include "mindustry/mod/Mods.h"
#include "mindustry/core/Renderer.h"
#include "arc/util/I18NBundle.h"
#include "arc/struct/Seq.h"
#include "java/lang/reflect/Method.h"
#include "arc/Settings.h"
#include "mindustry/io/SaveIO_SaveException.h"
#include "java/lang/Throwable.h"
#include "mindustry/maps/Map.h"
#include "java/lang/Exception.h"
#include "arc/Core.h"
#include "java/util/concurrent/ExecutorService.h"
#include "java/lang/reflect/Field.h"
#include "mindustry/game/Saves.h"
#include "arc/util/Log.h"
#include "arc/graphics/Texture.h"
#include "arc/util/Nullable.h"
#include "mindustry/io/SaveOptions.h"
#include "arc/assets/AssetManager.h"
#include "mindustry/core/World_Context.h"
#include "java/lang/Object.h"
#include "mindustry/io/SaveIO.h"
#include "java/text/DateFormat.h"
#include "java/lang/Boolean.h"
#include "mindustry/game/Rules.h"
#include "arc/files/Fi.h"
#include "java/util/Date.h"
#include "java/lang/String.h"
#include "mindustry/world/WorldContext.h"
#include "java/io/IOException.h"
#include "mindustry/graphics/MinimapRenderer.h"
#include "mindustry/io/SaveMeta.h"
#include "mindustry/game/Gamemode.h"
#include "mindustry/game/Saves_SaveSlot_invoke_java_lang_Runnable_1.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/game/Saves_SaveSlot_1.h"
#include "mindustry/type/Sector.h"
#include "mindustry/core/UI.h"
#include "arc/util/Strings.h"
#include "mindustry/game/Saves_SaveSlot.h"
#include "java/lang/Class.h"
#include "mindustry/Vars.h"
#include "mindustry/core/World.h"
#include "mindustry/core/GameState.h"

extern "C" {


void mark_mindustry_game_Saves$SaveSlot(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_game_Saves$SaveSlot *) object;
	if (self->F_file)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_file)->clazz)->markFunction)((jobject) self->F_file, mark, depth + 1);
	if (self->F_meta)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_meta)->clazz)->markFunction)((jobject) self->F_meta, mark, depth + 1);
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_mindustry_game_Saves$SaveSlot(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_game_Saves$SaveSlot_mindustry_game_Saves_arc_files_Fi(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Saves$SaveSlot:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_Saves$SaveSlot(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(310);
	((mindustry_game_Saves$SaveSlot *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(311);
	((mindustry_game_Saves$SaveSlot *) NULL_CHECK((frame[0].o)))->F_file = (jref) (frame[2].o);
	LINE_NUMBER(312);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_game_Saves$SaveSlot_load(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Saves$SaveSlot:load", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(315);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_world;
	sp[1].o = (jobject)((mindustry_core_World *) NULL_CHECK(sp[1].o))->F_context;
	((func_mindustry_game_Saves$SaveSlot_load_mindustry_world_WorldContext) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Saves$SaveSlot_load_mindustry_world_WorldContext])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(316);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_game_Saves$SaveSlot_load_mindustry_world_WorldContext(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Saves$SaveSlot:load", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(320);
	sp[0].o = (jobject)((mindustry_game_Saves$SaveSlot *) NULL_CHECK((frame[0].o)))->F_file;
	SM_mindustry_io_SaveIO_load_arc_files_Fi_mindustry_world_WorldContext(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(321);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_game_Saves$SaveSlot *) NULL_CHECK((frame[0].o)))->F_file;
	sp[1].o = (jobject)SM_mindustry_io_SaveIO_getMeta_arc_files_Fi_R_mindustry_io_SaveMeta(ctx, sp[1].o);
	((mindustry_game_Saves$SaveSlot *) NULL_CHECK(sp[0].o))->F_meta = (jref) sp[1].o;
	LINE_NUMBER(322);
	sp[0].o = (jobject)((mindustry_game_Saves$SaveSlot *) NULL_CHECK((frame[0].o)))->F_this$0;
	((mindustry_game_Saves *) NULL_CHECK(sp[0].o))->F_current = (jref) (frame[0].o);
	LINE_NUMBER(323);
	sp[0].o = (jobject)((mindustry_game_Saves$SaveSlot *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_game_Saves$SaveSlot *) NULL_CHECK((frame[0].o)))->F_meta;
	((mindustry_game_Saves *) NULL_CHECK(sp[0].o))->F_totalPlaytime = ((jlong)((mindustry_io_SaveMeta *) NULL_CHECK(sp[1].o))->F_timePlayed);
	LINE_NUMBER(324);
	((func_mindustry_game_Saves$SaveSlot_savePreview) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_game_Saves$SaveSlot_savePreview])(ctx, (frame[0].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(327);
	goto label_8;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(325);
	frame[2].o = sp[0].o;
	LINE_NUMBER(326);
	clinit_mindustry_io_SaveIO$SaveException(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_io_SaveIO$SaveException);
	init_mindustry_io_SaveIO$SaveException_java_lang_Throwable(ctx, sp[0].o, (frame[2].o));
	throwException(ctx, sp[0].o);	}
label_8:;
	LINE_NUMBER(328);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_game_Saves$SaveSlot_save(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Saves$SaveSlot:save", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(331);
	sp[0].o = (jobject)((mindustry_game_Saves$SaveSlot *) NULL_CHECK((frame[0].o)))->F_this$0;
	frame[1].l = ((jlong)((mindustry_game_Saves *) NULL_CHECK(sp[0].o))->F_totalPlaytime);
	LINE_NUMBER(333);
	sp[0].o = (jobject)((mindustry_game_Saves$SaveSlot *) NULL_CHECK((frame[0].o)))->F_file;
	SM_mindustry_io_SaveIO_save_arc_files_Fi(ctx, sp[0].o);
	LINE_NUMBER(334);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_game_Saves$SaveSlot *) NULL_CHECK((frame[0].o)))->F_file;
	sp[1].o = (jobject)SM_mindustry_io_SaveIO_getMeta_arc_files_Fi_R_mindustry_io_SaveMeta(ctx, sp[1].o);
	((mindustry_game_Saves$SaveSlot *) NULL_CHECK(sp[0].o))->F_meta = (jref) sp[1].o;
	LINE_NUMBER(335);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isGame_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isGame_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(336);
	sp[0].o = (jobject)((mindustry_game_Saves$SaveSlot *) NULL_CHECK((frame[0].o)))->F_this$0;
	((mindustry_game_Saves *) NULL_CHECK(sp[0].o))->F_current = (jref) (frame[0].o);
	}
label_4:;
	{
	LINE_NUMBER(339);
	sp[0].o = (jobject)((mindustry_game_Saves$SaveSlot *) NULL_CHECK((frame[0].o)))->F_this$0;
	((mindustry_game_Saves *) NULL_CHECK(sp[0].o))->F_totalPlaytime = (frame[1].l);
	LINE_NUMBER(340);
	((func_mindustry_game_Saves$SaveSlot_savePreview) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_game_Saves$SaveSlot_savePreview])(ctx, (frame[0].o));
	LINE_NUMBER(341);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_game_Saves$SaveSlot_savePreview(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Saves$SaveSlot:savePreview", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(344);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_assets;
	sp[1].o = (jobject)((func_mindustry_game_Saves$SaveSlot_loadPreviewFile_R_arc_files_Fi) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_game_Saves$SaveSlot_loadPreviewFile_R_arc_files_Fi])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_arc_files_Fi_path_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_files_Fi_path_R_java_lang_String])(ctx, sp[1].o);
	jint temp0 = (jint)((func_arc_assets_AssetManager_isLoaded_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_isLoaded_java_lang_String_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(345);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_assets;
	sp[1].o = (jobject)((func_mindustry_game_Saves$SaveSlot_loadPreviewFile_R_arc_files_Fi) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_game_Saves$SaveSlot_loadPreviewFile_R_arc_files_Fi])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_arc_files_Fi_path_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_files_Fi_path_R_java_lang_String])(ctx, sp[1].o);
	((func_arc_assets_AssetManager_unload_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_unload_java_lang_String])(ctx, sp[0].o, sp[1].o);
	}
label_1:;
	{
	LINE_NUMBER(347);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_mainExecutor;
	{ /* InvokeDynamic */
		clinit_mindustry_game_Saves$SaveSlot_invoke_java_lang_Runnable_1(ctx);
		auto proxy = (mindustry_game_Saves$SaveSlot_invoke_java_lang_Runnable_1 *) gcAlloc(ctx, &class_mindustry_game_Saves$SaveSlot_invoke_java_lang_Runnable_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_java_util_concurrent_ExecutorService_submit_java_lang_Runnable_R_java_util_concurrent_Future) resolveInterfaceMethod(ctx, &class_java_util_concurrent_ExecutorService, INDEX_java_util_concurrent_ExecutorService_submit_java_lang_Runnable_R_java_util_concurrent_Future, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(355);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_game_Saves$SaveSlot_previewTexture_R_arc_graphics_Texture(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Saves$SaveSlot:previewTexture", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(358);
	sp[0].o = (jobject)((func_mindustry_game_Saves$SaveSlot_previewFile_R_arc_files_Fi) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_game_Saves$SaveSlot_previewFile_R_arc_files_Fi])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_arc_files_Fi_exists_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_exists_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(359);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_1:;
	{
	LINE_NUMBER(360);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_assets;
	sp[1].o = (jobject)((func_mindustry_game_Saves$SaveSlot_loadPreviewFile_R_arc_files_Fi) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_game_Saves$SaveSlot_loadPreviewFile_R_arc_files_Fi])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_arc_files_Fi_path_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_files_Fi_path_R_java_lang_String])(ctx, sp[1].o);
	jint temp0 = (jint)((func_arc_assets_AssetManager_isLoaded_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_isLoaded_java_lang_String_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(361);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_assets;
	sp[1].o = (jobject)((func_mindustry_game_Saves$SaveSlot_loadPreviewFile_R_arc_files_Fi) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_game_Saves$SaveSlot_loadPreviewFile_R_arc_files_Fi])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_arc_files_Fi_path_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_files_Fi_path_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_arc_assets_AssetManager_get_java_lang_String_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_get_java_lang_String_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_arc_graphics_Texture, sp[0].o));
	}
label_3:;
	{
	LINE_NUMBER(362);
	if (((jint)((mindustry_game_Saves$SaveSlot *) NULL_CHECK((frame[0].o)))->F_requestedPreview) != 0) goto label_5;
	}
	{
	LINE_NUMBER(363);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_assets;
	clinit_arc_assets_AssetDescriptor(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_assets_AssetDescriptor);
	sp[2].o = (jobject)((func_mindustry_game_Saves$SaveSlot_loadPreviewFile_R_arc_files_Fi) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_game_Saves$SaveSlot_loadPreviewFile_R_arc_files_Fi])(ctx, (frame[0].o));
	init_arc_assets_AssetDescriptor_arc_files_Fi_java_lang_Class(ctx, sp[1].o, sp[2].o, (((jobject) &class_arc_graphics_Texture)));
	sp[0].o = (jobject)((func_arc_assets_AssetManager_load_arc_assets_AssetDescriptor_R_arc_assets_AssetDescriptor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_load_arc_assets_AssetDescriptor_R_arc_assets_AssetDescriptor])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(364);
	((mindustry_game_Saves$SaveSlot *) NULL_CHECK((frame[0].o)))->F_requestedPreview = (jint(1));
	}
label_5:;
	{
	LINE_NUMBER(366);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_game_Saves$SaveSlot_index_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Saves$SaveSlot:index", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(370);
	sp[0].o = (jobject)((mindustry_game_Saves$SaveSlot *) NULL_CHECK((frame[0].o)))->F_file;
	sp[0].o = (jobject)((func_arc_files_Fi_nameWithoutExtension_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_nameWithoutExtension_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_game_Saves$SaveSlot_previewFile_R_arc_files_Fi(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Saves$SaveSlot:previewFile", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(374);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_mapPreviewDirectory;
	sp[1].o = (jobject)((func_mindustry_game_Saves$SaveSlot_index_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_game_Saves$SaveSlot_index_R_java_lang_String])(ctx, (frame[0].o));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"save_slot_\u0001.png"_j.string, 1, sp[1].o);
	sp[0].o = (jobject)((func_arc_files_Fi_child_java_lang_String_R_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_child_java_lang_String_R_arc_files_Fi])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_game_Saves$SaveSlot_loadPreviewFile_R_arc_files_Fi(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Saves$SaveSlot:loadPreviewFile", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(378);
	sp[0].o = (jobject)((func_mindustry_game_Saves$SaveSlot_previewFile_R_arc_files_Fi) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_game_Saves$SaveSlot_previewFile_R_arc_files_Fi])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_mindustry_game_Saves$SaveSlot_previewFile_R_arc_files_Fi) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_game_Saves$SaveSlot_previewFile_R_arc_files_Fi])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_arc_files_Fi_name_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_files_Fi_name_R_java_lang_String])(ctx, sp[1].o);
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001.spreview"_j.string, 1, sp[1].o);
	sp[0].o = (jobject)((func_arc_files_Fi_sibling_java_lang_String_R_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_sibling_java_lang_String_R_arc_files_Fi])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_game_Saves$SaveSlot_isHidden_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Saves$SaveSlot:isHidden", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(382);
	jint temp0 = (jint)((func_mindustry_game_Saves$SaveSlot_isSector_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_game_Saves$SaveSlot_isSector_R_boolean])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_game_Saves$SaveSlot_getPlayTime_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Saves$SaveSlot:getPlayTime", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(386);
	sp[0].o = (jobject)((mindustry_game_Saves$SaveSlot *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_game_Saves *) NULL_CHECK(sp[0].o))->F_current;
	if (sp[0].o != (frame[0].o)) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_game_Saves$SaveSlot *) NULL_CHECK((frame[0].o)))->F_this$0;
	jlong temp0 = (jlong)((mindustry_game_Saves *) NULL_CHECK(sp[0].o))->F_totalPlaytime;
	sp[0].l = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	{
	sp[0].o = (jobject)((mindustry_game_Saves$SaveSlot *) NULL_CHECK((frame[0].o)))->F_meta;
	jlong temp0 = (jlong)((mindustry_io_SaveMeta *) NULL_CHECK(sp[0].o))->F_timePlayed;
	sp[0].l = temp0;
	sp += 1;
	}
label_2:;
	POP_N(1); // Pop method args
	sp->o = (jobject)SM_arc_util_Strings_formatMillis_long_R_java_lang_String(ctx, sp[0].l);
	sp++;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jlong M_mindustry_game_Saves$SaveSlot_getTimestamp_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Saves$SaveSlot:getTimestamp", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(390);
	sp[0].o = (jobject)((mindustry_game_Saves$SaveSlot *) NULL_CHECK((frame[0].o)))->F_meta;
	popStackFrame(ctx);
	return ((jlong)((mindustry_io_SaveMeta *) NULL_CHECK(sp[0].o))->F_timestamp);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_game_Saves$SaveSlot_getDate_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Saves$SaveSlot:getDate", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(394);
	clinit_mindustry_game_Saves(ctx);
	sp[0].o = (jobject)SF_mindustry_game_Saves_dateFormat;
	clinit_java_util_Date(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_Date);
	sp[2].o = (jobject)((mindustry_game_Saves$SaveSlot *) NULL_CHECK((frame[0].o)))->F_meta;
	init_java_util_Date_long(ctx, sp[1].o, ((jlong)((mindustry_io_SaveMeta *) NULL_CHECK(sp[2].o))->F_timestamp));
	sp[0].o = (jobject)((func_java_text_DateFormat_format_java_util_Date_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_text_DateFormat_format_java_util_Date_R_java_lang_String])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_game_Saves$SaveSlot_getMap_R_mindustry_maps_Map(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Saves$SaveSlot:getMap", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(398);
	sp[0].o = (jobject)((mindustry_game_Saves$SaveSlot *) NULL_CHECK((frame[0].o)))->F_meta;
	sp[0].o = (jobject)((mindustry_io_SaveMeta *) NULL_CHECK(sp[0].o))->F_map;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_game_Saves$SaveSlot_cautiousLoad_java_lang_Runnable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Saves$SaveSlot:cautiousLoad", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(402);
	sp[0].o = (jobject)((func_mindustry_game_Saves$SaveSlot_getMods_R_Array1_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_game_Saves$SaveSlot_getMods_R_Array1_java_lang_String])(ctx, (frame[0].o));
	sp[0].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(403);
	sp[0].o = frame[2].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_mods;
	sp[1].o = (jobject)((func_mindustry_mod_Mods_getModStrings_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_mod_Mods_getModStrings_R_arc_struct_Seq])(ctx, sp[1].o);
	jint temp0 = (jint)((func_arc_struct_Seq_removeAll_arc_struct_Seq_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_removeAll_arc_struct_Seq_R_boolean])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(405);
	jint temp1 = (jint)((func_arc_struct_Seq_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_Seq_isEmpty_R_boolean])(ctx, (frame[2].o));
	if (temp1 != 0) goto label_3;
	}
	{
	LINE_NUMBER(406);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@warning"_j));
	clinit_arc_Core(ctx);
	sp[2].o = (jobject)SF_arc_Core_bundle;
	sp[3].o = ((jobject) createStringLiteral(ctx, u8"mod.missing"_j));
	sp[4].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[5].o = (jobject)((func_arc_struct_Seq_toString_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_Seq_toString_java_lang_String_R_java_lang_String])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"\n"_j))));
	ARRAY_ACCESS(jobject, sp[4].o, temp0) = sp[5].o;
	sp[2].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[2].o, sp[3].o, sp[4].o);
	((func_mindustry_core_UI_showConfirm_java_lang_String_java_lang_String_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showConfirm_java_lang_String_java_lang_String_java_lang_Runnable])(ctx, sp[0].o, sp[1].o, sp[2].o, (frame[1].o));
	goto label_5;
	}
label_3:;
	{
	LINE_NUMBER(408);
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, (frame[1].o)))(ctx, (frame[1].o));
	}
label_5:;
	LINE_NUMBER(410);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_game_Saves$SaveSlot_getName_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Saves$SaveSlot:getName", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(413);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[1].o = (jobject)((func_mindustry_game_Saves$SaveSlot_index_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_game_Saves$SaveSlot_index_R_java_lang_String])(ctx, (frame[0].o));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"save-\u0001-name"_j.string, 1, sp[1].o);
	sp[0].o = (jobject)((func_arc_Settings_getString_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getString_java_lang_String_java_lang_String_R_java_lang_String])(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8"untitled"_j))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_game_Saves$SaveSlot_setName_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Saves$SaveSlot:setName", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(417);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[1].o = (jobject)((func_mindustry_game_Saves$SaveSlot_index_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_game_Saves$SaveSlot_index_R_java_lang_String])(ctx, (frame[0].o));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"save-\u0001-name"_j.string, 1, sp[1].o);
	((func_arc_Settings_put_java_lang_String_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_put_java_lang_String_java_lang_Object])(ctx, sp[0].o, sp[1].o, (frame[1].o));
	LINE_NUMBER(418);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_game_Saves$SaveSlot_getMods_R_Array1_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Saves$SaveSlot:getMods", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(421);
	sp[0].o = (jobject)((mindustry_game_Saves$SaveSlot *) NULL_CHECK((frame[0].o)))->F_meta;
	sp[0].o = (jobject)((mindustry_io_SaveMeta *) NULL_CHECK(sp[0].o))->F_mods;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_game_Saves$SaveSlot_getSector_R_mindustry_type_Sector(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Saves$SaveSlot:getSector", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(426);
	sp[0].o = (jobject)((mindustry_game_Saves$SaveSlot *) NULL_CHECK((frame[0].o)))->F_meta;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_game_Saves$SaveSlot *) NULL_CHECK((frame[0].o)))->F_meta;
	sp[0].o = (jobject)((mindustry_io_SaveMeta *) NULL_CHECK(sp[0].o))->F_rules;
	if (sp[0].o != nullptr) goto label_2;
	}
label_1:;
	INST_ACONST_NULL();
	goto label_3;
label_2:;
	{
	sp[0].o = (jobject)((mindustry_game_Saves$SaveSlot *) NULL_CHECK((frame[0].o)))->F_meta;
	sp[0].o = (jobject)((mindustry_io_SaveMeta *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_sector;
	sp += 1;
	}
label_3:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_game_Saves$SaveSlot_isSector_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Saves$SaveSlot:isSector", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(430);
	sp[0].o = (jobject)((func_mindustry_game_Saves$SaveSlot_getSector_R_mindustry_type_Sector) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_game_Saves$SaveSlot_getSector_R_mindustry_type_Sector])(ctx, (frame[0].o));
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

jobject M_mindustry_game_Saves$SaveSlot_mode_R_mindustry_game_Gamemode(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Saves$SaveSlot:mode", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(434);
	sp[0].o = (jobject)((mindustry_game_Saves$SaveSlot *) NULL_CHECK((frame[0].o)))->F_meta;
	sp[0].o = (jobject)((mindustry_io_SaveMeta *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((func_mindustry_game_Rules_mode_R_mindustry_game_Gamemode) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Rules_mode_R_mindustry_game_Gamemode])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_mindustry_game_Saves$SaveSlot_getBuild_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Saves$SaveSlot:getBuild", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(438);
	sp[0].o = (jobject)((mindustry_game_Saves$SaveSlot *) NULL_CHECK((frame[0].o)))->F_meta;
	popStackFrame(ctx);
	return ((jint)((mindustry_io_SaveMeta *) NULL_CHECK(sp[0].o))->F_build);
	}

	popStackFrame(ctx);
}

jint M_mindustry_game_Saves$SaveSlot_getWave_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Saves$SaveSlot:getWave", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(442);
	sp[0].o = (jobject)((mindustry_game_Saves$SaveSlot *) NULL_CHECK((frame[0].o)))->F_meta;
	popStackFrame(ctx);
	return ((jint)((mindustry_io_SaveMeta *) NULL_CHECK(sp[0].o))->F_wave);
	}

	popStackFrame(ctx);
}

jbool M_mindustry_game_Saves$SaveSlot_isAutosave_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Saves$SaveSlot:isAutosave", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(446);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[1].o = (jobject)((func_mindustry_game_Saves$SaveSlot_index_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_game_Saves$SaveSlot_index_R_java_lang_String])(ctx, (frame[0].o));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"save-\u0001-autosave"_j.string, 1, sp[1].o);
	jint temp0 = (jint)((func_arc_Settings_getBool_java_lang_String_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getBool_java_lang_String_boolean_R_boolean])(ctx, sp[0].o, sp[1].o, (jint(1)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_mindustry_game_Saves$SaveSlot_setAutosave_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Saves$SaveSlot:setAutosave", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(450);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[1].o = (jobject)((func_mindustry_game_Saves$SaveSlot_index_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_game_Saves$SaveSlot_index_R_java_lang_String])(ctx, (frame[0].o));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"save-\u0001-autosave"_j.string, 1, sp[1].o);
	sp[2].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, (frame[1].i));
	((func_arc_Settings_put_java_lang_String_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_put_java_lang_String_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(451);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_game_Saves$SaveSlot_isBeingPlayed_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Saves$SaveSlot:isBeingPlayed", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(454);
	sp[0].o = (jobject)((mindustry_game_Saves$SaveSlot *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((func_mindustry_game_Saves_getCurrent_R_mindustry_game_Saves$SaveSlot) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Saves_getCurrent_R_mindustry_game_Saves$SaveSlot])(ctx, sp[0].o);
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

jbool M_mindustry_game_Saves$SaveSlot_hasExternalAssets_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Saves$SaveSlot:hasExternalAssets", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(458);
	sp[0].o = (jobject)((mindustry_game_Saves$SaveSlot *) NULL_CHECK((frame[0].o)))->F_meta;
	sp[0].o = (jobject)((mindustry_io_SaveMeta *) NULL_CHECK(sp[0].o))->F_tags;
	jint temp0 = (jint)((func_arc_struct_StringMap_getBool_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_StringMap_getBool_java_lang_String_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"hasExternalAssets"_j))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_mindustry_game_Saves$SaveSlot_importFile_arc_files_Fi(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Saves$SaveSlot:importFile", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(463);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_game_Saves$SaveSlot *) NULL_CHECK((frame[0].o)))->F_file;
	((func_arc_files_Fi_copyTo_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_copyTo_arc_files_Fi])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(464);
	sp[0].o = (jobject)((func_mindustry_game_Saves$SaveSlot_previewFile_R_arc_files_Fi) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_game_Saves$SaveSlot_previewFile_R_arc_files_Fi])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_arc_files_Fi_exists_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_exists_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(465);
	((mindustry_game_Saves$SaveSlot *) NULL_CHECK((frame[0].o)))->F_requestedPreview = (jint(0));
	LINE_NUMBER(466);
	sp[0].o = (jobject)((func_mindustry_game_Saves$SaveSlot_previewFile_R_arc_files_Fi) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_game_Saves$SaveSlot_previewFile_R_arc_files_Fi])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_arc_files_Fi_delete_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_delete_R_boolean])(ctx, sp[0].o);
	}
label_1:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(470);
	goto label_7;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(468);
	frame[2].o = sp[0].o;
	LINE_NUMBER(469);
	clinit_java_io_IOException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_IOException);
	init_java_io_IOException_java_lang_Throwable(ctx, sp[0].o, (frame[2].o));
	throwException(ctx, sp[0].o);	}
label_7:;
	LINE_NUMBER(471);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_game_Saves$SaveSlot_exportFile_arc_files_Fi(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Saves$SaveSlot:exportFile", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(475);
	jint temp0 = (jint)((func_mindustry_game_Saves$SaveSlot_isBeingPlayed_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_game_Saves$SaveSlot_isBeingPlayed_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_4;
	}
	{
	jint temp0 = (jint)((func_mindustry_game_Saves$SaveSlot_hasExternalAssets_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_game_Saves$SaveSlot_hasExternalAssets_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(476);
	sp[0].o = frame[1].o;
	clinit_mindustry_game_Saves$SaveSlot$1(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_game_Saves$SaveSlot$1);
	init_mindustry_game_Saves$SaveSlot$1_mindustry_game_Saves$SaveSlot(ctx, sp[1].o, (frame[0].o));
	SM_mindustry_io_SaveIO_write_arc_files_Fi_mindustry_io_SaveOptions(ctx, sp[0].o, sp[1].o);
	goto label_1;
	}
label_4:;
	{
	LINE_NUMBER(480);
	sp[0].o = (jobject)((mindustry_game_Saves$SaveSlot *) NULL_CHECK((frame[0].o)))->F_file;
	((func_arc_files_Fi_copyTo_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_copyTo_arc_files_Fi])(ctx, sp[0].o, (frame[1].o));
	}
label_1:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(484);
	goto label_6;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(482);
	frame[2].o = sp[0].o;
	LINE_NUMBER(483);
	clinit_java_io_IOException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_IOException);
	init_java_io_IOException_java_lang_Throwable(ctx, sp[0].o, (frame[2].o));
	throwException(ctx, sp[0].o);	}
label_6:;
	LINE_NUMBER(485);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_game_Saves$SaveSlot_delete(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Saves$SaveSlot:delete", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(488);
	sp[0].o = (jobject)((mindustry_game_Saves$SaveSlot *) NULL_CHECK((frame[0].o)))->F_file;
	sp[0].o = (jobject)SM_mindustry_io_SaveIO_backupFileFor_arc_files_Fi_R_arc_files_Fi(ctx, sp[0].o);
	jint temp0 = (jint)((func_arc_files_Fi_exists_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_exists_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(489);
	sp[0].o = (jobject)((mindustry_game_Saves$SaveSlot *) NULL_CHECK((frame[0].o)))->F_file;
	sp[0].o = (jobject)SM_mindustry_io_SaveIO_backupFileFor_arc_files_Fi_R_arc_files_Fi(ctx, sp[0].o);
	jint temp0 = (jint)((func_arc_files_Fi_delete_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_delete_R_boolean])(ctx, sp[0].o);
	}
label_1:;
	{
	LINE_NUMBER(491);
	sp[0].o = (jobject)((mindustry_game_Saves$SaveSlot *) NULL_CHECK((frame[0].o)))->F_file;
	jint temp0 = (jint)((func_arc_files_Fi_delete_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_delete_R_boolean])(ctx, sp[0].o);
	LINE_NUMBER(492);
	sp[0].o = (jobject)((mindustry_game_Saves$SaveSlot *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_game_Saves *) NULL_CHECK(sp[0].o))->F_saves;
	jint temp1 = (jint)((func_arc_struct_Seq_remove_java_lang_Object_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_remove_java_lang_Object_boolean_R_boolean])(ctx, sp[0].o, (frame[0].o), (jint(1)));
	LINE_NUMBER(493);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_game_Saves$SaveSlot *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_game_Saves *) NULL_CHECK(sp[1].o))->F_current;
	if (sp[0].o != sp[1].o) goto label_5;
	}
	{
	LINE_NUMBER(494);
	sp[0].o = (jobject)((mindustry_game_Saves$SaveSlot *) NULL_CHECK((frame[0].o)))->F_this$0;
	((mindustry_game_Saves *) NULL_CHECK(sp[0].o))->F_current = (jref) (jobject(nullptr));
	}
label_5:;
	{
	LINE_NUMBER(497);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_assets;
	sp[1].o = (jobject)((func_mindustry_game_Saves$SaveSlot_loadPreviewFile_R_arc_files_Fi) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_game_Saves$SaveSlot_loadPreviewFile_R_arc_files_Fi])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_arc_files_Fi_path_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_files_Fi_path_R_java_lang_String])(ctx, sp[1].o);
	jint temp0 = (jint)((func_arc_assets_AssetManager_isLoaded_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_isLoaded_java_lang_String_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_7;
	}
	{
	LINE_NUMBER(498);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_assets;
	sp[1].o = (jobject)((func_mindustry_game_Saves$SaveSlot_loadPreviewFile_R_arc_files_Fi) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_game_Saves$SaveSlot_loadPreviewFile_R_arc_files_Fi])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_arc_files_Fi_path_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_files_Fi_path_R_java_lang_String])(ctx, sp[1].o);
	((func_arc_assets_AssetManager_unload_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_unload_java_lang_String])(ctx, sp[0].o, sp[1].o);
	}
label_7:;
	LINE_NUMBER(500);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_game_Saves$SaveSlot_lambda$savePreview$0(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Saves$SaveSlot:lambda$savePreview$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(349);
	sp[0].o = (jobject)((func_mindustry_game_Saves$SaveSlot_previewFile_R_arc_files_Fi) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_game_Saves$SaveSlot_previewFile_R_arc_files_Fi])(ctx, (frame[0].o));
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_renderer;
	sp[1].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK(sp[1].o))->F_minimap;
	sp[1].o = (jobject)((func_mindustry_graphics_MinimapRenderer_getPixmap_R_arc_graphics_Pixmap) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_graphics_MinimapRenderer_getPixmap_R_arc_graphics_Pixmap])(ctx, sp[1].o);
	((func_arc_files_Fi_writePng_arc_graphics_Pixmap) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_writePng_arc_graphics_Pixmap])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(350);
	((mindustry_game_Saves$SaveSlot *) NULL_CHECK((frame[0].o)))->F_requestedPreview = (jint(0));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(353);
	goto label_5;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(351);
	frame[1].o = sp[0].o;
	LINE_NUMBER(352);
	SM_arc_util_Log_err_java_lang_Throwable(ctx, (frame[1].o));
	}
label_5:;
	LINE_NUMBER(354);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_game_Saves$SaveSlot;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

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

	{ // Method getSector
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[17]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

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
}

void *vtable_mindustry_game_Saves$SaveSlot[] {
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
	(void *) M_mindustry_game_Saves$SaveSlot_load,
	(void *) M_mindustry_game_Saves$SaveSlot_load_mindustry_world_WorldContext,
	(void *) M_mindustry_game_Saves$SaveSlot_save,
	(void *) M_mindustry_game_Saves$SaveSlot_savePreview,
	(void *) M_mindustry_game_Saves$SaveSlot_previewTexture_R_arc_graphics_Texture,
	(void *) M_mindustry_game_Saves$SaveSlot_index_R_java_lang_String,
	(void *) M_mindustry_game_Saves$SaveSlot_previewFile_R_arc_files_Fi,
	(void *) M_mindustry_game_Saves$SaveSlot_loadPreviewFile_R_arc_files_Fi,
	(void *) M_mindustry_game_Saves$SaveSlot_isHidden_R_boolean,
	(void *) M_mindustry_game_Saves$SaveSlot_getPlayTime_R_java_lang_String,
	(void *) M_mindustry_game_Saves$SaveSlot_getTimestamp_R_long,
	(void *) M_mindustry_game_Saves$SaveSlot_getDate_R_java_lang_String,
	(void *) M_mindustry_game_Saves$SaveSlot_getMap_R_mindustry_maps_Map,
	(void *) M_mindustry_game_Saves$SaveSlot_cautiousLoad_java_lang_Runnable,
	(void *) M_mindustry_game_Saves$SaveSlot_getName_R_java_lang_String,
	(void *) M_mindustry_game_Saves$SaveSlot_setName_java_lang_String,
	(void *) M_mindustry_game_Saves$SaveSlot_getMods_R_Array1_java_lang_String,
	(void *) M_mindustry_game_Saves$SaveSlot_getSector_R_mindustry_type_Sector,
	(void *) M_mindustry_game_Saves$SaveSlot_isSector_R_boolean,
	(void *) M_mindustry_game_Saves$SaveSlot_mode_R_mindustry_game_Gamemode,
	(void *) M_mindustry_game_Saves$SaveSlot_getBuild_R_int,
	(void *) M_mindustry_game_Saves$SaveSlot_getWave_R_int,
	(void *) M_mindustry_game_Saves$SaveSlot_isAutosave_R_boolean,
	(void *) M_mindustry_game_Saves$SaveSlot_setAutosave_boolean,
	(void *) M_mindustry_game_Saves$SaveSlot_isBeingPlayed_R_boolean,
	(void *) M_mindustry_game_Saves$SaveSlot_hasExternalAssets_R_boolean,
	(void *) M_mindustry_game_Saves$SaveSlot_importFile_arc_files_Fi,
	(void *) M_mindustry_game_Saves$SaveSlot_exportFile_arc_files_Fi,
	(void *) M_mindustry_game_Saves$SaveSlot_delete,
	(void *) M_mindustry_game_Saves$SaveSlot_lambda$savePreview$0,
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
	{ "load", "()V" },
	{ "load", "(Lmindustry/world/WorldContext;)V" },
	{ "save", "()V" },
	{ "savePreview", "()V" },
	{ "previewTexture", "()Larc/graphics/Texture;" },
	{ "index", "()Ljava/lang/String;" },
	{ "previewFile", "()Larc/files/Fi;" },
	{ "loadPreviewFile", "()Larc/files/Fi;" },
	{ "isHidden", "()Z" },
	{ "getPlayTime", "()Ljava/lang/String;" },
	{ "getTimestamp", "()J" },
	{ "getDate", "()Ljava/lang/String;" },
	{ "getMap", "()Lmindustry/maps/Map;" },
	{ "cautiousLoad", "(Ljava/lang/Runnable;)V" },
	{ "getName", "()Ljava/lang/String;" },
	{ "setName", "(Ljava/lang/String;)V" },
	{ "getMods", "()[Ljava/lang/String;" },
	{ "getSector", "()Lmindustry/type/Sector;" },
	{ "isSector", "()Z" },
	{ "mode", "()Lmindustry/game/Gamemode;" },
	{ "getBuild", "()I" },
	{ "getWave", "()I" },
	{ "isAutosave", "()Z" },
	{ "setAutosave", "(Z)V" },
	{ "isBeingPlayed", "()Z" },
	{ "hasExternalAssets", "()Z" },
	{ "importFile", "(Larc/files/Fi;)V" },
	{ "exportFile", "(Larc/files/Fi;)V" },
	{ "delete", "()V" },
	{ "lambda$savePreview$0", "()V" },
};

static FieldMetadata fields[] {
	{ "file", &class_arc_files_Fi, offsetof(mindustry_game_Saves$SaveSlot, F_file), "Larc/files/Fi;", 1 },
	{ "requestedPreview", &class_boolean, offsetof(mindustry_game_Saves$SaveSlot, F_requestedPreview), "Z", 0 },
	{ "meta", &class_mindustry_io_SaveMeta, offsetof(mindustry_game_Saves$SaveSlot, F_meta), "Lmindustry/io/SaveMeta;", 1 },
	{ "this$0", &class_mindustry_game_Saves, offsetof(mindustry_game_Saves$SaveSlot, F_this$0), "Lmindustry/game/Saves;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_game_Saves$SaveSlot_mindustry_game_Saves_arc_files_Fi, 0, "(Lmindustry/game/Saves;Larc/files/Fi;)V", 1 },
	{ "load", (intptr_t) M_mindustry_game_Saves$SaveSlot_load, VTABLE_mindustry_game_Saves$SaveSlot_load, "()V", 1 },
	{ "load", (intptr_t) M_mindustry_game_Saves$SaveSlot_load_mindustry_world_WorldContext, VTABLE_mindustry_game_Saves$SaveSlot_load_mindustry_world_WorldContext, "(Lmindustry/world/WorldContext;)V", 1 },
	{ "save", (intptr_t) M_mindustry_game_Saves$SaveSlot_save, VTABLE_mindustry_game_Saves$SaveSlot_save, "()V", 1 },
	{ "savePreview", (intptr_t) M_mindustry_game_Saves$SaveSlot_savePreview, VTABLE_mindustry_game_Saves$SaveSlot_savePreview, "()V", 2 },
	{ "previewTexture", (intptr_t) M_mindustry_game_Saves$SaveSlot_previewTexture_R_arc_graphics_Texture, VTABLE_mindustry_game_Saves$SaveSlot_previewTexture_R_arc_graphics_Texture, "()Larc/graphics/Texture;", 1 },
	{ "index", (intptr_t) M_mindustry_game_Saves$SaveSlot_index_R_java_lang_String, VTABLE_mindustry_game_Saves$SaveSlot_index_R_java_lang_String, "()Ljava/lang/String;", 2 },
	{ "previewFile", (intptr_t) M_mindustry_game_Saves$SaveSlot_previewFile_R_arc_files_Fi, VTABLE_mindustry_game_Saves$SaveSlot_previewFile_R_arc_files_Fi, "()Larc/files/Fi;", 2 },
	{ "loadPreviewFile", (intptr_t) M_mindustry_game_Saves$SaveSlot_loadPreviewFile_R_arc_files_Fi, VTABLE_mindustry_game_Saves$SaveSlot_loadPreviewFile_R_arc_files_Fi, "()Larc/files/Fi;", 2 },
	{ "isHidden", (intptr_t) M_mindustry_game_Saves$SaveSlot_isHidden_R_boolean, VTABLE_mindustry_game_Saves$SaveSlot_isHidden_R_boolean, "()Z", 1 },
	{ "getPlayTime", (intptr_t) M_mindustry_game_Saves$SaveSlot_getPlayTime_R_java_lang_String, VTABLE_mindustry_game_Saves$SaveSlot_getPlayTime_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "getTimestamp", (intptr_t) M_mindustry_game_Saves$SaveSlot_getTimestamp_R_long, VTABLE_mindustry_game_Saves$SaveSlot_getTimestamp_R_long, "()J", 1 },
	{ "getDate", (intptr_t) M_mindustry_game_Saves$SaveSlot_getDate_R_java_lang_String, VTABLE_mindustry_game_Saves$SaveSlot_getDate_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "getMap", (intptr_t) M_mindustry_game_Saves$SaveSlot_getMap_R_mindustry_maps_Map, VTABLE_mindustry_game_Saves$SaveSlot_getMap_R_mindustry_maps_Map, "()Lmindustry/maps/Map;", 1 },
	{ "cautiousLoad", (intptr_t) M_mindustry_game_Saves$SaveSlot_cautiousLoad_java_lang_Runnable, VTABLE_mindustry_game_Saves$SaveSlot_cautiousLoad_java_lang_Runnable, "(Ljava/lang/Runnable;)V", 1 },
	{ "getName", (intptr_t) M_mindustry_game_Saves$SaveSlot_getName_R_java_lang_String, VTABLE_mindustry_game_Saves$SaveSlot_getName_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "setName", (intptr_t) M_mindustry_game_Saves$SaveSlot_setName_java_lang_String, VTABLE_mindustry_game_Saves$SaveSlot_setName_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "getMods", (intptr_t) M_mindustry_game_Saves$SaveSlot_getMods_R_Array1_java_lang_String, VTABLE_mindustry_game_Saves$SaveSlot_getMods_R_Array1_java_lang_String, "()[Ljava/lang/String;", 1 },
	{ "getSector", (intptr_t) M_mindustry_game_Saves$SaveSlot_getSector_R_mindustry_type_Sector, VTABLE_mindustry_game_Saves$SaveSlot_getSector_R_mindustry_type_Sector, "()Lmindustry/type/Sector;", 1 },
	{ "isSector", (intptr_t) M_mindustry_game_Saves$SaveSlot_isSector_R_boolean, VTABLE_mindustry_game_Saves$SaveSlot_isSector_R_boolean, "()Z", 1 },
	{ "mode", (intptr_t) M_mindustry_game_Saves$SaveSlot_mode_R_mindustry_game_Gamemode, VTABLE_mindustry_game_Saves$SaveSlot_mode_R_mindustry_game_Gamemode, "()Lmindustry/game/Gamemode;", 1 },
	{ "getBuild", (intptr_t) M_mindustry_game_Saves$SaveSlot_getBuild_R_int, VTABLE_mindustry_game_Saves$SaveSlot_getBuild_R_int, "()I", 1 },
	{ "getWave", (intptr_t) M_mindustry_game_Saves$SaveSlot_getWave_R_int, VTABLE_mindustry_game_Saves$SaveSlot_getWave_R_int, "()I", 1 },
	{ "isAutosave", (intptr_t) M_mindustry_game_Saves$SaveSlot_isAutosave_R_boolean, VTABLE_mindustry_game_Saves$SaveSlot_isAutosave_R_boolean, "()Z", 1 },
	{ "setAutosave", (intptr_t) M_mindustry_game_Saves$SaveSlot_setAutosave_boolean, VTABLE_mindustry_game_Saves$SaveSlot_setAutosave_boolean, "(Z)V", 1 },
	{ "isBeingPlayed", (intptr_t) M_mindustry_game_Saves$SaveSlot_isBeingPlayed_R_boolean, VTABLE_mindustry_game_Saves$SaveSlot_isBeingPlayed_R_boolean, "()Z", 1 },
	{ "hasExternalAssets", (intptr_t) M_mindustry_game_Saves$SaveSlot_hasExternalAssets_R_boolean, VTABLE_mindustry_game_Saves$SaveSlot_hasExternalAssets_R_boolean, "()Z", 1 },
	{ "importFile", (intptr_t) M_mindustry_game_Saves$SaveSlot_importFile_arc_files_Fi, VTABLE_mindustry_game_Saves$SaveSlot_importFile_arc_files_Fi, "(Larc/files/Fi;)V", 1 },
	{ "exportFile", (intptr_t) M_mindustry_game_Saves$SaveSlot_exportFile_arc_files_Fi, VTABLE_mindustry_game_Saves$SaveSlot_exportFile_arc_files_Fi, "(Larc/files/Fi;)V", 1 },
	{ "delete", (intptr_t) M_mindustry_game_Saves$SaveSlot_delete, VTABLE_mindustry_game_Saves$SaveSlot_delete, "()V", 1 },
	{ "lambda$savePreview$0", (intptr_t) M_mindustry_game_Saves$SaveSlot_lambda$savePreview$0, VTABLE_mindustry_game_Saves$SaveSlot_lambda$savePreview$0, "()V", 4098 },
};

Class class_mindustry_game_Saves$SaveSlot{
		.nativeName = (intptr_t) "mindustry/game/Saves$SaveSlot",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_game_Saves$SaveSlot),
		.classVtable = (intptr_t) vtable_mindustry_game_Saves$SaveSlot,
		.staticInitializer = (intptr_t) clinit_mindustry_game_Saves$SaveSlot,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_game_Saves$SaveSlot,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_game_Saves,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 31,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 41,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_game_Saves$SaveSlot = registerClass(&class_mindustry_game_Saves$SaveSlot);

}

