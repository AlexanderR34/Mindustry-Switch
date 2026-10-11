#include "mindustry/mod/Mods.h"
#include "java/lang/Integer.h"
#include "mindustry/mod/ContentParser_ParseListener.h"
#include "arc/func/Prov.h"
#include "java/util/concurrent/Future.h"
#include "mindustry/core/Version.h"
#include "java/lang/Runnable.h"
#include "mindustry/mod/Mods_invoke_arc_func_Boolf_37.h"
#include "mindustry/mod/Mods_invoke_arc_func_Boolf_36.h"
#include "mindustry/graphics/MultiPacker.h"
#include "arc/graphics/Pixmap.h"
#include "mindustry/mod/Mods_invoke_arc_func_Boolf_35.h"
#include "mindustry/mod/Mods_invoke_arc_func_Boolf_34.h"
#include "mindustry/mod/Mods.h"
#include "arc/util/serialization/Json.h"
#include "mindustry/mod/Mods_invoke_arc_func_Boolf_39.h"
#include "arc/func/Intf.h"
#include "mindustry/mod/Mods_invoke_arc_func_Boolf_38.h"
#include "arc/struct/Seq.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/mod/Mods_ModMeta.h"
#include "arc/util/OS.h"
#include "arc/Settings.h"
#include "java/io/Reader.h"
#include "mindustry/mod/Mods_invoke_arc_func_Boolf_33.h"
#include "mindustry/mod/Mods_invoke_arc_func_Boolf_32.h"
#include "mindustry/game/EventType_ClientLoadEvent.h"
#include "arc/func/Boolf.h"
#include "mindustry/mod/Mods_invoke_arc_func_Boolf_31.h"
#include "mindustry/mod/Mods_invoke_arc_func_Boolf_30.h"
#include "arc/Core.h"
#include "java/util/Iterator.h"
#include "arc/util/Log.h"
#include "arc/files/ZipFi.h"
#include "arc/Files.h"
#include "arc/util/Time.h"
#include "arc/util/Nullable.h"
#include "arc/graphics/Texture.h"
#include "java/util/concurrent/Callable.h"
#include "mindustry/mod/Mods_invoke_java_util_concurrent_Callable_1.h"
#include "mindustry/mod/Mods_invoke_arc_func_Boolf_26.h"
#include "mindustry/mod/Mods_invoke_arc_func_Boolf_25.h"
#include "java/lang/Object.h"
#include "mindustry/mod/Mods_invoke_arc_func_Boolf_24.h"
#include "mindustry/mod/Mods_invoke_arc_func_Boolf_23.h"
#include "arc/scene/ui/Dialog.h"
#include "mindustry/mod/Mods_invoke_arc_func_Boolf_29.h"
#include "mindustry/mod/Mods_invoke_arc_func_Boolf_28.h"
#include "mindustry/mod/Mods_invoke_arc_func_Boolf_27.h"
#include "arc/graphics/Texture_TextureFilter.h"
#include "mindustry/game/EventType_FileTreeInitEvent.h"
#include "mindustry/type/Publishable.h"
#include "arc/struct/ObjectSet.h"
#include "arc/struct/ObjectMap_Keys.h"
#include "arc/struct/ObjectMap.h"
#include "mindustry/mod/Mods_invoke_arc_func_Boolf_22.h"
#include "mindustry/mod/Mods_invoke_arc_func_Boolf_21.h"
#include "mindustry/mod/Mods_invoke_java_lang_Runnable_18.h"
#include "arc/graphics/GLTexture.h"
#include "mindustry/mod/Mods_invoke_java_lang_Runnable_17.h"
#include "mindustry/mod/Mods_invoke_java_lang_Runnable_16.h"
#include "mindustry/ctype/Content_ModContentInfo.h"
#include "arc/graphics/g2d/TextureAtlas_AtlasRegion.h"
#include "mindustry/mod/Mods_invoke_java_lang_Runnable_15.h"
#include "arc/struct/OrderedMap.h"
#include "java/lang/Boolean.h"
#include "arc/struct/ObjectMap_Entry.h"
#include "mindustry/mod/Mods_invoke_java_lang_Runnable_19.h"
#include "mindustry/mod/Mods_invoke_java_lang_Runnable_10.h"
#include "mindustry/mod/Mods_invoke_java_lang_Runnable_14.h"
#include "mindustry/mod/Mods_invoke_java_lang_Runnable_13.h"
#include "mindustry/mod/Mods_invoke_java_lang_Runnable_12.h"
#include "mindustry/mod/Mods_invoke_java_lang_Runnable_11.h"
#include "mindustry/ui/fragments/LoadingFragment.h"
#include "arc/func/Cons.h"
#include "mindustry/mod/Mods_invoke_arc_func_Intf_3.h"
#include "mindustry/type/ErrorContent.h"
#include "java/io/IOException.h"
#include "mindustry/mod/Mods_invoke_arc_func_Intf_2.h"
#include "arc/struct/OrderedSet.h"
#include "mindustry/mod/Mod.h"
#include "mindustry/mod/Mods_invoke_arc_func_Prov_3.h"
#include "mindustry/mod/Mods_invoke_arc_func_Prov_2.h"
#include "mindustry/mod/ModClassLoader.h"
#include "java/lang/annotation/Annotation.h"
#include "java/lang/IllegalArgumentException.h"
#include "arc/assets/Loadable.h"
#include "mindustry/core/Platform.h"
#include "arc/struct/ObjectMap_Entries.h"
#include "java/lang/Long.h"
#include "arc/graphics/g2d/PixmapRegion.h"
#include "java/util/concurrent/CountDownLatch.h"
#include "mindustry/game/EventType_Trigger.h"
#include "mindustry/mod/Mods_invoke_arc_func_Func_10.h"
#include "mindustry/game/EventType_AtlasPackEvent.h"
#include "mindustry/mod/Mods_invoke_arc_func_Func_11.h"
#include "mindustry/mod/Mods_invoke_arc_func_Func_14.h"
#include "mindustry/mod/Mods_invoke_arc_func_Func_15.h"
#include "mindustry/mod/Mods_invoke_arc_func_Func_12.h"
#include "mindustry/mod/Mods_invoke_arc_func_Func_13.h"
#include "mindustry/Vars.h"
#include "mindustry/ui/dialogs/ModsDialog.h"
#include "java/lang/ClassLoader.h"
#include "arc/Events.h"
#include "arc/struct/ObjectFloatMap.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "mindustry/mod/data/PatchAsset.h"
#include "java/lang/reflect/Constructor.h"
#include "mindustry/mod/Mods_1LoadRun.h"
#include "arc/struct/OrderedSet_OrderedSetIterator.h"
#include "mindustry/mod/Mods_ModResolutionContext.h"
#include "mindustry/mod/Mods_ModDependency.h"
#include "mindustry/core/ContentLoader.h"
#include "arc/util/I18NBundle.h"
#include "mindustry/mod/DataPatcher.h"
#include "java/lang/Throwable.h"
#include "java/util/Locale.h"
#include "java/lang/Exception.h"
#include "java/lang/reflect/Field.h"
#include "java/util/concurrent/ExecutorService.h"
#include "arc/func/Func.h"
#include "mindustry/ai/UnitStance.h"
#include "mindustry/mod/Mods_4.h"
#include "mindustry/mod/Mods_3.h"
#include "arc/util/Structs.h"
#include "mindustry/mod/Mods_2.h"
#include "arc/func/Cons2.h"
#include "mindustry/mod/ContentParser.h"
#include "mindustry/mod/Mods_1.h"
#include "arc/struct/ObjectFloatMap_Entry.h"
#include "java/lang/RuntimeException.h"
#include "arc/graphics/Pixmaps.h"
#include "mindustry/ui/dialogs/ModBrowserDialog.h"
#include "java/lang/InterruptedException.h"
#include "arc/util/serialization/Jval_Jformat.h"
#include "mindustry/core/FileTree.h"
#include "arc/files/Fi.h"
#include "arc/util/io/PropertiesUtils.h"
#include "arc/Application.h"
#include "mindustry/mod/Mods_invoke_arc_func_Cons_22.h"
#include "mindustry/mod/Mods_invoke_arc_func_Cons_23.h"
#include "mindustry/mod/Mods_invoke_arc_func_Cons_20.h"
#include "java/lang/String.h"
#include "mindustry/mod/Mods_invoke_arc_func_Cons_21.h"
#include "mindustry/mod/Mods_invoke_arc_func_Cons_26.h"
#include "java/lang/ClassNotFoundException.h"
#include "mindustry/mod/Mods_invoke_arc_func_Cons_27.h"
#include "mindustry/mod/Mods_invoke_arc_func_Cons_24.h"
#include "java/util/Comparator.h"
#include "mindustry/game/EventType_ModContentLoadEvent.h"
#include "mindustry/mod/Mods_invoke_arc_func_Cons_25.h"
#include "mindustry/mod/Mods_invoke_arc_func_Func_8.h"
#include "mindustry/mod/Mods_invoke_arc_func_Func_9.h"
#include "mindustry/graphics/MultiPacker_PageType.h"
#include "mindustry/mod/Mods_1RegionEntry.h"
#include "mindustry/mod/Mods_ModState.h"
#include "java/lang/Math.h"
#include "arc/graphics/g2d/TextureAtlas.h"
#include "arc/util/serialization/Jval.h"
#include "mindustry/mod/Mods_invoke_arc_func_Cons_19.h"
#include "mindustry/mod/Mods_invoke_arc_func_Cons_17.h"
#include "mindustry/mod/Mods_invoke_arc_func_Cons_18.h"
#include "java/lang/Enum.h"
#include "mindustry/core/UI.h"
#include "java/lang/CharSequence.h"
#include "mindustry/mod/ClassLoaderCloser.h"
#include "mindustry/mod/Mods_invoke_arc_func_Cons_15.h"
#include "mindustry/mod/Mods_LoadedMod.h"
#include "mindustry/mod/Mods_invoke_arc_func_Cons_16.h"
#include "mindustry/ctype/Content.h"
#include "mindustry/mod/Mods_invoke_arc_func_Cons_14.h"
#include "mindustry/mod/Plugin.h"
#include "mindustry/mod/Scripts.h"
#include "mindustry/mod/Mods_invoke_arc_func_Boolf_40.h"
#include "mindustry/mod/Mods_ModLoadException.h"
#include "java/lang/Class.h"
#include "java/util/Objects.h"
#include "mindustry/ctype/ContentType.h"
#include "mindustry/mod/Mods_invoke_arc_func_Boolf_41.h"

extern "C" {

jobject SF_mindustry_mod_Mods_metaFiles;
jobject SF_mindustry_mod_Mods_blacklistedMods;

void mark_mindustry_mod_Mods(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_mod_Mods_metaFiles)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_mod_Mods_metaFiles)->clazz)->markFunction)((jobject) SF_mindustry_mod_Mods_metaFiles, mark, depth + 1);
		if (SF_mindustry_mod_Mods_blacklistedMods)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_mod_Mods_blacklistedMods)->clazz)->markFunction)((jobject) SF_mindustry_mod_Mods_blacklistedMods, mark, depth + 1);
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
	auto self = (mindustry_mod_Mods *) object;
	if (self->F_json)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_json)->clazz)->markFunction)((jobject) self->F_json, mark, depth + 1);
	if (self->F_scripts)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_scripts)->clazz)->markFunction)((jobject) self->F_scripts, mark, depth + 1);
	if (self->F_parser)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_parser)->clazz)->markFunction)((jobject) self->F_parser, mark, depth + 1);
	if (self->F_bundles)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_bundles)->clazz)->markFunction)((jobject) self->F_bundles, mark, depth + 1);
	if (self->F_specialFolders)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_specialFolders)->clazz)->markFunction)((jobject) self->F_specialFolders, mark, depth + 1);
	if (self->F_lastOrderedMods)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lastOrderedMods)->clazz)->markFunction)((jobject) self->F_lastOrderedMods, mark, depth + 1);
	if (self->F_mainLoader)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_mainLoader)->clazz)->markFunction)((jobject) self->F_mainLoader, mark, depth + 1);
	if (self->F_mods)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_mods)->clazz)->markFunction)((jobject) self->F_mods, mark, depth + 1);
	if (self->F_newImports)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_newImports)->clazz)->markFunction)((jobject) self->F_newImports, mark, depth + 1);
	if (self->F_metas)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_metas)->clazz)->markFunction)((jobject) self->F_metas, mark, depth + 1);
}

void init_mindustry_mod_Mods(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/Mods:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_mod_Mods(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(60);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(44);
	sp[0].o = frame[0].o;
	clinit_arc_util_serialization_Json(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_util_serialization_Json);
	init_arc_util_serialization_Json(ctx, sp[1].o);
	((mindustry_mod_Mods *) NULL_CHECK(sp[0].o))->F_json = (jref) sp[1].o;
	LINE_NUMBER(46);
	sp[0].o = frame[0].o;
	clinit_mindustry_mod_ContentParser(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_mod_ContentParser);
	init_mindustry_mod_ContentParser(ctx, sp[1].o);
	((mindustry_mod_Mods *) NULL_CHECK(sp[0].o))->F_parser = (jref) sp[1].o;
	LINE_NUMBER(47);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectMap);
	init_arc_struct_ObjectMap(ctx, sp[1].o);
	((mindustry_mod_Mods *) NULL_CHECK(sp[0].o))->F_bundles = (jref) sp[1].o;
	LINE_NUMBER(48);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(4)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"bundles"_j)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"sprites"_j)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(2))) = (((jobject) createStringLiteral(ctx, u8"sprites-override"_j)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(3))) = (((jobject) createStringLiteral(ctx, u8".git"_j)));
	sp[1].o = (jobject)SM_arc_struct_ObjectSet_with_Array1_java_lang_Object_R_arc_struct_ObjectSet(ctx, sp[1].o);
	((mindustry_mod_Mods *) NULL_CHECK(sp[0].o))->F_specialFolders = (jref) sp[1].o;
	LINE_NUMBER(51);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_mod_Mods *) NULL_CHECK(sp[0].o))->F_lastOrderedMods = (jref) sp[1].o;
	LINE_NUMBER(53);
	sp[0].o = frame[0].o;
	clinit_mindustry_mod_ModClassLoader(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_mod_ModClassLoader);
	sp[2].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	sp[2].o = (jobject)((func_java_lang_Class_getClassLoader_R_java_lang_ClassLoader) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_Class_getClassLoader_R_java_lang_ClassLoader])(ctx, sp[2].o);
	init_mindustry_mod_ModClassLoader_java_lang_ClassLoader(ctx, sp[1].o, sp[2].o);
	((mindustry_mod_Mods *) NULL_CHECK(sp[0].o))->F_mainLoader = (jref) sp[1].o;
	LINE_NUMBER(55);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_mod_Mods *) NULL_CHECK(sp[0].o))->F_mods = (jref) sp[1].o;
	LINE_NUMBER(56);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_mod_Mods *) NULL_CHECK(sp[0].o))->F_newImports = (jref) sp[1].o;
	LINE_NUMBER(57);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectMap);
	init_arc_struct_ObjectMap(ctx, sp[1].o);
	((mindustry_mod_Mods *) NULL_CHECK(sp[0].o))->F_metas = (jref) sp[1].o;
	LINE_NUMBER(61);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$ClientLoadEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_mod_Mods_invoke_arc_func_Cons_14(ctx);
		auto proxy = (mindustry_mod_Mods_invoke_arc_func_Cons_14 *) gcAlloc(ctx, &class_mindustry_mod_Mods_invoke_arc_func_Cons_14);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(62);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_mod_Mods_mainLoader_R_java_lang_ClassLoader(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/Mods:mainLoader", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(66);
	sp[0].o = (jobject)((mindustry_mod_Mods *) NULL_CHECK((frame[0].o)))->F_mainLoader;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_mod_Mods_getConfigFolder_mindustry_mod_Mod_R_arc_files_Fi(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/Mods:getConfigFolder", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(71);
	sp[0].o = (jobject)((mindustry_mod_Mods *) NULL_CHECK((frame[0].o)))->F_metas;
	sp[1].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	frame[2].o = (checkCast(ctx, &class_mindustry_mod_Mods$ModMeta, sp[0].o));
	LINE_NUMBER(72);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Mod is not loaded yet (or missing)!"_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(73);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_modDirectory;
	sp[1].o = (jobject)((mindustry_mod_Mods$ModMeta *) NULL_CHECK((frame[2].o)))->F_name;
	sp[0].o = (jobject)((func_arc_files_Fi_child_java_lang_String_R_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_child_java_lang_String_R_arc_files_Fi])(ctx, sp[0].o, sp[1].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(74);
	jint temp0 = (jint)((func_arc_files_Fi_mkdirs_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_files_Fi_mkdirs_R_boolean])(ctx, (frame[3].o));
	LINE_NUMBER(75);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_mod_Mods_getConfig_mindustry_mod_Mod_R_arc_files_Fi(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/Mods:getConfig", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(81);
	sp[0].o = (jobject)((func_mindustry_mod_Mods_getConfigFolder_mindustry_mod_Mod_R_arc_files_Fi) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_mod_Mods_getConfigFolder_mindustry_mod_Mod_R_arc_files_Fi])(ctx, (frame[0].o), (frame[1].o));
	sp[0].o = (jobject)((func_arc_files_Fi_child_java_lang_String_R_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_child_java_lang_String_R_arc_files_Fi])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"config.json"_j))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_mod_Mods_listFiles_java_lang_String_arc_func_Cons2(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/Mods:listFiles", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(86);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_mod_Mods_invoke_arc_func_Cons_15(ctx);
		auto proxy = (mindustry_mod_Mods_invoke_arc_func_Cons_15 *) gcAlloc(ctx, &class_mindustry_mod_Mods_invoke_arc_func_Cons_15);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_mod_Mods_eachEnabled_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_Mods_eachEnabled_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(96);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_mod_Mods_getMod_java_lang_String_R_mindustry_mod_Mods$LoadedMod(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/Mods:getMod", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(100);
	sp[0].o = (jobject)((mindustry_mod_Mods *) NULL_CHECK((frame[0].o)))->F_mods;
	{ /* InvokeDynamic */
		clinit_mindustry_mod_Mods_invoke_arc_func_Boolf_21(ctx);
		auto proxy = (mindustry_mod_Mods_invoke_arc_func_Boolf_21 *) gcAlloc(ctx, &class_mindustry_mod_Mods_invoke_arc_func_Boolf_21);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_find_arc_func_Boolf_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_find_arc_func_Boolf_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_mod_Mods$LoadedMod, sp[0].o));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_mod_Mods_getMod_java_lang_Class_R_mindustry_mod_Mods$LoadedMod(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/Mods:getMod", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(105);
	sp[0].o = (jobject)((mindustry_mod_Mods *) NULL_CHECK((frame[0].o)))->F_mods;
	{ /* InvokeDynamic */
		clinit_mindustry_mod_Mods_invoke_arc_func_Boolf_22(ctx);
		auto proxy = (mindustry_mod_Mods_invoke_arc_func_Boolf_22 *) gcAlloc(ctx, &class_mindustry_mod_Mods_invoke_arc_func_Boolf_22);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_find_arc_func_Boolf_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_find_arc_func_Boolf_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_mod_Mods$LoadedMod, sp[0].o));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_mod_Mods_importMod_arc_files_Fi_R_mindustry_mod_Mods$LoadedMod(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/Mods:importMod", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(110);
	sp[0].o = (jobject)((func_mindustry_mod_Mods_importMod_arc_files_Fi_boolean_R_mindustry_mod_Mods$LoadedMod) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_mod_Mods_importMod_arc_files_Fi_boolean_R_mindustry_mod_Mods$LoadedMod])(ctx, (frame[0].o), (frame[1].o), (jint(1)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_mod_Mods_importMod_arc_files_Fi_boolean_R_mindustry_mod_Mods$LoadedMod(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/Mods:importMod", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(116);
	sp[0].o = (jobject)((func_arc_files_Fi_nameWithoutExtension_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_files_Fi_nameWithoutExtension_R_java_lang_String])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_String_replace_char_char_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_replace_char_char_R_java_lang_String])(ctx, sp[0].o, (58), (95));
	sp[0].o = (jobject)((func_java_lang_String_replace_char_char_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_replace_char_char_R_java_lang_String])(ctx, sp[0].o, (32), (95));
	frame[3].o = sp[0].o;
	LINE_NUMBER(117);
	frame[4].o = (frame[3].o);
	LINE_NUMBER(119);
	frame[5].i = (jint(1));
	}
label_9:;
	{
	LINE_NUMBER(120);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_modDirectory;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001.zip"_j.string, 1, (frame[4].o));
	sp[0].o = (jobject)((func_arc_files_Fi_child_java_lang_String_R_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_child_java_lang_String_R_arc_files_Fi])(ctx, sp[0].o, sp[1].o);
	jint temp0 = (jint)((func_arc_files_Fi_exists_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_exists_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_10;
	}
	{
	LINE_NUMBER(121);
	sp[0].o = frame[3].o;
	jint temp0 = frame[5].i;
	INST_IINC(5, 1);
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\u0001\u0001"_j.string, 2, sp[0].o, boxInteger(ctx, temp0));
	frame[4].o = sp[0].o;
	goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(124);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_modDirectory;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001.zip"_j.string, 1, (frame[4].o));
	sp[0].o = (jobject)((func_arc_files_Fi_child_java_lang_String_R_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_child_java_lang_String_R_arc_files_Fi])(ctx, sp[0].o, sp[1].o);
	frame[6].o = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(127);
	((func_arc_files_Fi_copyTo_arc_files_Fi) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_files_Fi_copyTo_arc_files_Fi])(ctx, (frame[1].o), (frame[6].o));
	LINE_NUMBER(129);
	sp[0].o = (jobject)((func_mindustry_mod_Mods_loadMod_arc_files_Fi_boolean_boolean_R_mindustry_mod_Mods$LoadedMod) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_mod_Mods_loadMod_arc_files_Fi_boolean_boolean_R_mindustry_mod_Mods$LoadedMod])(ctx, (frame[0].o), (frame[6].o), (jint(1)), (jint(1)));
	frame[7].o = sp[0].o;
	LINE_NUMBER(130);
	sp[0].o = (jobject)((mindustry_mod_Mods *) NULL_CHECK((frame[0].o)))->F_mods;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[7].o));
	LINE_NUMBER(131);
	sp[0].o = (jobject)((mindustry_mod_Mods *) NULL_CHECK((frame[0].o)))->F_newImports;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[7].o));
	LINE_NUMBER(133);
	((mindustry_mod_Mods *) NULL_CHECK((frame[0].o)))->F_lastOrderedMods = (jref) (jobject(nullptr));
	LINE_NUMBER(134);
	((mindustry_mod_Mods *) NULL_CHECK((frame[0].o)))->F_requiresReload = (jint(1));
	LINE_NUMBER(136);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[1].o = (jobject)((mindustry_mod_Mods$LoadedMod *) NULL_CHECK((frame[7].o)))->F_name;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"mod-\u0001-failed"_j.string, 1, sp[1].o);
	sp[2].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, (jint(0)));
	((func_arc_Settings_put_java_lang_String_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_put_java_lang_String_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(137);
	if ((frame[2].i) == 0) goto label_19;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[1].o = (jobject)((mindustry_mod_Mods$LoadedMod *) NULL_CHECK((frame[7].o)))->F_name;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"mod-\u0001-enabled"_j.string, 1, sp[1].o);
	sp[2].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, (jint(1)));
	((func_arc_Settings_put_java_lang_String_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_put_java_lang_String_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_19:;
	{
	LINE_NUMBER(138);
	((func_mindustry_mod_Mods_sortMods) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_mod_Mods_sortMods])(ctx, (frame[0].o));
	LINE_NUMBER(140);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	{ /* InvokeDynamic */
		clinit_mindustry_mod_Mods_invoke_java_lang_Runnable_10(ctx);
		auto proxy = (mindustry_mod_Mods_invoke_java_lang_Runnable_10 *) gcAlloc(ctx, &class_mindustry_mod_Mods_invoke_java_lang_Runnable_10);
		proxy->F_field1 = (jref) (frame[7].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_Application_post_java_lang_Runnable) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_post_java_lang_Runnable, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(142);
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[0].o = (jobject)SF_mindustry_game_EventType$Trigger_importMod;
	SM_arc_Events_fire_java_lang_Enum(ctx, sp[0].o);
	LINE_NUMBER(144);
	sp[0].o = frame[7].o;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(145);
	frame[7].o = sp[0].o;
	LINE_NUMBER(146);
	jint temp0 = (jint)((func_arc_files_Fi_delete_R_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_files_Fi_delete_R_boolean])(ctx, (frame[6].o));
	LINE_NUMBER(147);
	throwException(ctx, (frame[7].o));	}
label_4:;
	{
	sp -= 1;
	LINE_NUMBER(148);
	frame[7].o = sp[0].o;
	LINE_NUMBER(149);
	jint temp0 = (jint)((func_arc_files_Fi_delete_R_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_files_Fi_delete_R_boolean])(ctx, (frame[6].o));
	LINE_NUMBER(150);
	clinit_java_io_IOException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_IOException);
	init_java_io_IOException_java_lang_Throwable(ctx, sp[0].o, (frame[7].o));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void M_mindustry_mod_Mods_loadAsync(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[25];
	auto stack = &frame[16];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/Mods:loadAsync", 25 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(157);
	sp[0].o = (jobject)((mindustry_mod_Mods *) NULL_CHECK((frame[0].o)))->F_mods;
	{ /* InvokeDynamic */
		clinit_mindustry_mod_Mods_invoke_arc_func_Boolf_23(ctx);
		auto proxy = (mindustry_mod_Mods_invoke_arc_func_Boolf_23 *) gcAlloc(ctx, &class_mindustry_mod_Mods_invoke_arc_func_Boolf_23);
		sp[1].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_arc_struct_Seq_contains_arc_func_Boolf_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_arc_func_Boolf_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_9;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_9:;
	{
	LINE_NUMBER(159);
	jlong temp0 = (jlong)SM_arc_util_Time_millis_R_long(ctx);
	frame[1].l = temp0;
	LINE_NUMBER(162);
	clinit_mindustry_graphics_MultiPacker(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_graphics_MultiPacker);
	init_mindustry_graphics_MultiPacker(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(163);
	clinit_arc_struct_ObjectFloatMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_ObjectFloatMap);
	init_arc_struct_ObjectFloatMap(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(164);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(1)));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (jint(0));
	frame[5].o = sp[0].o;
	LINE_NUMBER(166);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(168);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_mod_Mods_invoke_arc_func_Cons_16(ctx);
		auto proxy = (mindustry_mod_Mods_invoke_arc_func_Cons_16 *) gcAlloc(ctx, &class_mindustry_mod_Mods_invoke_arc_func_Cons_16);
		proxy->F_field4 = (jref) (frame[5].o);
		proxy->F_field3 = (jref) (frame[4].o);
		proxy->F_field2 = (jref) (frame[6].o);
		proxy->F_field1 = (jref) (frame[3].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_mod_Mods_eachEnabled_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_Mods_eachEnabled_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(183);
	jint temp1 = (jint)((func_arc_struct_Seq_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_struct_Seq_isEmpty_R_boolean])(ctx, (frame[6].o));
	if (temp1 == 0) goto label_16;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_16:;
	{
	LINE_NUMBER(185);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[6].o));
	frame[7].o = sp[0].o;
	}
label_17:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[7].o)))(ctx, (frame[7].o));
	if (temp0 == 0) goto label_18;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[7].o)))(ctx, (frame[7].o));
	frame[8].o = (checkCast(ctx, &class_java_util_concurrent_Future, sp[0].o));
	}
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	LINE_NUMBER(187);
	sp[0].o = (jobject)((func_java_util_concurrent_Future_get_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_concurrent_Future, INDEX_java_util_concurrent_Future_get_R_java_lang_Object, (frame[8].o)))(ctx, (frame[8].o));
	frame[9].o = (checkCast(ctx, &class_java_lang_Runnable, sp[0].o));
	LINE_NUMBER(188);
	if ((frame[9].o) == nullptr) goto label_5;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(191);
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, (frame[9].o)))(ctx, (frame[9].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(195);
	goto label_5;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(192);
	frame[10].o = sp[0].o;
	LINE_NUMBER(193);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"Failed to fit image into the spritesheet, skipping."_j));
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(0)));
	SM_arc_util_Log_err_java_lang_String_Array1_java_lang_Object(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(194);
	SM_arc_util_Log_err_java_lang_Throwable(ctx, (frame[10].o));
	}
label_5:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(199);
	goto label_22;
label_6:;
	{
	sp -= 1;
	LINE_NUMBER(197);
	frame[9].o = sp[0].o;
	LINE_NUMBER(198);
	SM_arc_util_Log_err_java_lang_Throwable(ctx, (frame[9].o));
	}
label_22:;
	LINE_NUMBER(200);
	goto label_17;
label_18:;
	{
	LINE_NUMBER(202);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"Total sprites: @"_j));
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, ((jint)ARRAY_ACCESS(jint, (frame[5].o), (jint(0)))));
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	SM_arc_util_Log_debug_java_lang_String_Array1_java_lang_Object(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(204);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	jint temp1 = (jint)((func_arc_Settings_getBool_java_lang_String_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getBool_java_lang_String_boolean_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"linear"_j))), (jint(1)));
	if (temp1 == 0) goto label_25;
	}
	clinit_arc_graphics_Texture$TextureFilter(ctx);
	(sp++)->o = SF_arc_graphics_Texture$TextureFilter_linear;
	goto label_26;
label_25:;
	clinit_arc_graphics_Texture$TextureFilter(ctx);
	(sp++)->o = SF_arc_graphics_Texture$TextureFilter_nearest;
label_26:;
	{
	sp -= 1;
	frame[7].o = sp[0].o;
	LINE_NUMBER(219);
	clinit_mindustry_graphics_MultiPacker$PageType(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_MultiPacker$PageType_all;
	sp[0].o = (jobject)createArray(ctx, &class_arc_struct_Seq, (((jarray) nullCheck(ctx, sp[0].o))->length));
	frame[8].o = sp[0].o;
	LINE_NUMBER(220);
	frame[9].i = (jint(0));
	}
label_29:;
	{
	jint temp0 = frame[9].i;
	clinit_mindustry_graphics_MultiPacker$PageType(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_MultiPacker$PageType_all;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_30;
	}
	{
	LINE_NUMBER(221);
	sp[0].o = frame[8].o;
	jint temp0 = frame[9].i;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(220);
	INST_IINC(9, 1);
	goto label_29;
	}
label_30:;
	{
	LINE_NUMBER(224);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, (8));
	jint temp0 = jint(0);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"white"_j));
	LINE_NUMBER(225);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((arc_graphics_g2d_TextureRegion *) NULL_CHECK(sp[1].o))->F_texture;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_mindustry_graphics_MultiPacker$PageType(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_MultiPacker$PageType_main;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"stone1"_j));
	LINE_NUMBER(226);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((arc_graphics_g2d_TextureRegion *) NULL_CHECK(sp[1].o))->F_texture;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(3);
	clinit_mindustry_graphics_MultiPacker$PageType(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_MultiPacker$PageType_environment;
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	jint temp4 = jint(4);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"whiteui"_j));
	LINE_NUMBER(227);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((arc_graphics_g2d_TextureRegion *) NULL_CHECK(sp[1].o))->F_texture;
	ARRAY_ACCESS(jobject, sp[0].o, temp4) = sp[1].o;
	jint temp5 = jint(5);
	clinit_mindustry_graphics_MultiPacker$PageType(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_MultiPacker$PageType_ui;
	ARRAY_ACCESS(jobject, sp[0].o, temp5) = sp[1].o;
	jint temp6 = 6;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"rubble-1-0"_j));
	LINE_NUMBER(228);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((arc_graphics_g2d_TextureRegion *) NULL_CHECK(sp[1].o))->F_texture;
	ARRAY_ACCESS(jobject, sp[0].o, temp6) = sp[1].o;
	jint temp7 = 7;
	clinit_mindustry_graphics_MultiPacker$PageType(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_MultiPacker$PageType_rubble;
	ARRAY_ACCESS(jobject, sp[0].o, temp7) = sp[1].o;
	LINE_NUMBER(224);
	sp[0].o = (jobject)SM_arc_struct_ObjectMap_of_Array1_java_lang_Object_R_arc_struct_ObjectMap(ctx, sp[0].o);
	frame[9].o = sp[0].o;
	LINE_NUMBER(231);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_getRegions_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_getRegions_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[10].o = sp[0].o;
	}
label_39:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[10].o)))(ctx, (frame[10].o));
	if (temp0 == 0) goto label_40;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[10].o)))(ctx, (frame[10].o));
	frame[11].o = (checkCast(ctx, &class_arc_graphics_g2d_TextureAtlas$AtlasRegion, sp[0].o));
	LINE_NUMBER(232);
	sp[0].o = frame[9].o;
	sp[1].o = (jobject)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[11].o)))->F_texture;
	clinit_mindustry_graphics_MultiPacker$PageType(ctx);
	sp[2].o = (jobject)SF_mindustry_graphics_MultiPacker$PageType_main;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[12].o = (checkCast(ctx, &class_mindustry_graphics_MultiPacker$PageType, sp[0].o));
	LINE_NUMBER(234);
	sp[0].o = frame[3].o;
	sp[1].o = frame[12].o;
	sp[2].o = (jobject)((arc_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[11].o)))->F_name;
	jint temp0 = (jint)((func_mindustry_graphics_MultiPacker_has_mindustry_graphics_MultiPacker$PageType_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_MultiPacker_has_mindustry_graphics_MultiPacker$PageType_java_lang_String_R_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o);
	if (temp0 != 0) goto label_43;
	}
	{
	LINE_NUMBER(235);
	sp[0].o = frame[8].o;
	jint temp0 = (jint)((func_mindustry_graphics_MultiPacker$PageType_ordinal_R_int) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_mindustry_graphics_MultiPacker$PageType_ordinal_R_int])(ctx, (frame[12].o));
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, temp0);
	clinit_mindustry_mod_Mods$1RegionEntry(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_mod_Mods$1RegionEntry);
	sp[2].o = frame[0].o;
	sp[3].o = (jobject)((arc_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[11].o)))->F_name;
	clinit_arc_Core(ctx);
	sp[4].o = (jobject)SF_arc_Core_atlas;
	sp[4].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_getPixmap_arc_graphics_g2d_TextureAtlas$AtlasRegion_R_arc_graphics_g2d_PixmapRegion) ((void **) nullCheck(ctx, sp[4].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_getPixmap_arc_graphics_g2d_TextureAtlas$AtlasRegion_R_arc_graphics_g2d_PixmapRegion])(ctx, sp[4].o, (frame[11].o));
	sp[5].o = (jobject)((arc_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[11].o)))->F_splits;
	sp[6].o = (jobject)((arc_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[11].o)))->F_pads;
	init_mindustry_mod_Mods$1RegionEntry_mindustry_mod_Mods_java_lang_String_arc_graphics_g2d_PixmapRegion_Array1_int_Array1_int(ctx, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o, sp[6].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	}
label_43:;
	LINE_NUMBER(237);
	goto label_39;
label_40:;
	{
	LINE_NUMBER(240);
	frame[10].i = (jint(0));
	}
label_45:;
	{
	jint temp0 = frame[10].i;
	clinit_mindustry_graphics_MultiPacker$PageType(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_MultiPacker$PageType_all;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_46;
	}
	{
	LINE_NUMBER(241);
	frame[11].o = ((jobject)ARRAY_ACCESS(jobject, (frame[8].o), (frame[10].i)));
	LINE_NUMBER(242);
	clinit_mindustry_graphics_MultiPacker$PageType(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_MultiPacker$PageType_all;
	frame[12].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[10].i)));
	LINE_NUMBER(244);
	sp[0].o = frame[11].o;
	{ /* InvokeDynamic */
		clinit_mindustry_mod_Mods_invoke_arc_func_Intf_2(ctx);
		auto proxy = (mindustry_mod_Mods_invoke_arc_func_Intf_2 *) gcAlloc(ctx, &class_mindustry_mod_Mods_invoke_arc_func_Intf_2);
		sp[1].o = (jobject) proxy;
	}
	sp[1].o = (jobject)SM_arc_util_Structs_comparingInt_arc_func_Intf_R_java_util_Comparator(ctx, sp[1].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_sort_java_util_Comparator_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_sort_java_util_Comparator_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(246);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[11].o));
	frame[13].o = sp[0].o;
	}
label_51:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[13].o)))(ctx, (frame[13].o));
	if (temp0 == 0) goto label_52;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[13].o)))(ctx, (frame[13].o));
	frame[14].o = (checkCast(ctx, &class_mindustry_mod_Mods$1RegionEntry, sp[0].o));
	LINE_NUMBER(247);
	sp[0].o = frame[3].o;
	sp[1].o = frame[12].o;
	sp[2].o = (jobject)((mindustry_mod_Mods$1RegionEntry *) NULL_CHECK((frame[14].o)))->F_name;
	sp[3].o = (jobject)((mindustry_mod_Mods$1RegionEntry *) NULL_CHECK((frame[14].o)))->F_region;
	sp[4].o = (jobject)((mindustry_mod_Mods$1RegionEntry *) NULL_CHECK((frame[14].o)))->F_splits;
	sp[5].o = (jobject)((mindustry_mod_Mods$1RegionEntry *) NULL_CHECK((frame[14].o)))->F_pads;
	((func_mindustry_graphics_MultiPacker_add_mindustry_graphics_MultiPacker$PageType_java_lang_String_arc_graphics_g2d_PixmapRegion_Array1_int_Array1_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_MultiPacker_add_mindustry_graphics_MultiPacker$PageType_java_lang_String_arc_graphics_g2d_PixmapRegion_Array1_int_Array1_int])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o);
	LINE_NUMBER(248);
	goto label_51;
	}
label_52:;
	{
	LINE_NUMBER(240);
	INST_IINC(10, 1);
	goto label_45;
	}
label_46:;
	{
	LINE_NUMBER(251);
	sp[0].o = (jobject)createArray(ctx, &class_arc_graphics_Pixmap, (jint(1)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (jobject(nullptr));
	frame[10].o = sp[0].o;
	LINE_NUMBER(252);
	sp[0].o = (jobject)createArray(ctx, &class_arc_graphics_Texture, (jint(1)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (jobject(nullptr));
	frame[11].o = sp[0].o;
	LINE_NUMBER(254);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_mod_Mods_invoke_java_lang_Runnable_11(ctx);
		auto proxy = (mindustry_mod_Mods_invoke_java_lang_Runnable_11 *) gcAlloc(ctx, &class_mindustry_mod_Mods_invoke_java_lang_Runnable_11);
		proxy->F_field3 = (jref) (frame[3].o);
		proxy->F_field2 = (jref) (frame[11].o);
		proxy->F_field1 = (jref) (frame[10].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_mod_Mods_waitForMain_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_Mods_waitForMain_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(317);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_getContentMap_R_Array1_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_getContentMap_R_Array1_arc_struct_Seq])(ctx, sp[0].o);
	frame[12].o = sp[0].o;
	frame[13].i = (((jarray) nullCheck(ctx, (frame[12].o)))->length);
	frame[14].i = (jint(0));
	}
label_58:;
	{
	if ((frame[14].i) >= (frame[13].i)) goto label_59;
	}
	{
	frame[15].o = ((jobject)ARRAY_ACCESS(jobject, (frame[12].o), (frame[14].i)));
	LINE_NUMBER(318);
	sp[0].o = frame[15].o;
	{ /* InvokeDynamic */
		clinit_mindustry_mod_Mods_invoke_arc_func_Cons_17(ctx);
		auto proxy = (mindustry_mod_Mods_invoke_arc_func_Cons_17 *) gcAlloc(ctx, &class_mindustry_mod_Mods_invoke_arc_func_Cons_17);
		proxy->F_field0 = (jref) (frame[3].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_struct_Seq_each_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_each_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(317);
	INST_IINC(14, 1);
	goto label_58;
	}
label_59:;
	{
	LINE_NUMBER(329);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_mod_Mods_invoke_java_lang_Runnable_12(ctx);
		auto proxy = (mindustry_mod_Mods_invoke_java_lang_Runnable_12 *) gcAlloc(ctx, &class_mindustry_mod_Mods_invoke_java_lang_Runnable_12);
		proxy->F_field6 = (frame[1].l);
		proxy->F_field5 = (jref) (frame[4].o);
		proxy->F_field4 = (jref) (frame[7].o);
		proxy->F_field3 = (jref) (frame[3].o);
		proxy->F_field2 = (jref) (frame[11].o);
		proxy->F_field1 = (jref) (frame[10].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_mod_Mods_waitForMain_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_Mods_waitForMain_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(360);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_mod_Mods_loadIcons(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/Mods:loadIcons", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(363);
	sp[0].o = (jobject)((mindustry_mod_Mods *) NULL_CHECK((frame[0].o)))->F_mods;
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
	frame[2].o = (checkCast(ctx, &class_mindustry_mod_Mods$LoadedMod, sp[0].o));
	LINE_NUMBER(364);
	((func_mindustry_mod_Mods_loadIcon_mindustry_mod_Mods$LoadedMod) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_mod_Mods_loadIcon_mindustry_mod_Mods$LoadedMod])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(365);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(366);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_mod_Mods_loadIcon_mindustry_mod_Mods$LoadedMod(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/Mods:loadIcon", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(370);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_headless) == 0) goto label_5;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_5:;
	{
	LINE_NUMBER(372);
	sp[0].o = (jobject)((mindustry_mod_Mods$LoadedMod *) NULL_CHECK((frame[1].o)))->F_root;
	sp[0].o = (jobject)((func_arc_files_Fi_child_java_lang_String_R_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_child_java_lang_String_R_arc_files_Fi])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"icon.png"_j))));
	frame[2].o = sp[0].o;
	LINE_NUMBER(373);
	jint temp0 = (jint)((func_arc_files_Fi_exists_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_files_Fi_exists_R_boolean])(ctx, (frame[2].o));
	if (temp0 != 0) goto label_7;
	}
	{
	sp[0].o = (jobject)((mindustry_mod_Mods$LoadedMod *) NULL_CHECK((frame[1].o)))->F_root;
	sp[0].o = (jobject)((func_arc_files_Fi_child_java_lang_String_R_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_child_java_lang_String_R_arc_files_Fi])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"preview.png"_j))));
	frame[2].o = sp[0].o;
	}
label_7:;
	{
	LINE_NUMBER(374);
	jint temp0 = (jint)((func_arc_files_Fi_exists_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_files_Fi_exists_R_boolean])(ctx, (frame[2].o));
	if (temp0 != 0) goto label_0;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(377);
	sp[0].o = frame[1].o;
	clinit_arc_graphics_Texture(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_Texture);
	init_arc_graphics_Texture_arc_files_Fi(ctx, sp[1].o, (frame[2].o));
	((mindustry_mod_Mods$LoadedMod *) NULL_CHECK(sp[0].o))->F_iconTexture = (jref) sp[1].o;
	LINE_NUMBER(378);
	sp[0].o = (jobject)((mindustry_mod_Mods$LoadedMod *) NULL_CHECK((frame[1].o)))->F_iconTexture;
	clinit_arc_graphics_Texture$TextureFilter(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Texture$TextureFilter_linear;
	((func_arc_graphics_Texture_setFilter_arc_graphics_Texture$TextureFilter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Texture_setFilter_arc_graphics_Texture$TextureFilter])(ctx, sp[0].o, sp[1].o);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(381);
	goto label_9;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(379);
	frame[3].o = sp[0].o;
	LINE_NUMBER(380);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"Failed to load icon for mod '@'."_j));
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(2)));
	jint temp0 = jint(0);
	sp[2].o = (jobject)((mindustry_mod_Mods$LoadedMod *) NULL_CHECK((frame[1].o)))->F_name;
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	ARRAY_ACCESS(jobject, sp[1].o, (jint(1))) = (frame[3].o);
	SM_arc_util_Log_err_java_lang_String_Array1_java_lang_Object(ctx, sp[0].o, sp[1].o);
	}
label_9:;
	LINE_NUMBER(382);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_mod_Mods_packSprites_mindustry_graphics_MultiPacker_arc_struct_Seq_mindustry_mod_Mods$LoadedMod_boolean_arc_struct_Seq_arc_struct_ObjectFloatMap(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jbool param3, jobject param4, jobject param5) {
	NULL_CHECK(self);
	jtype frame[24];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/Mods:packSprites", 24 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	frame[6].o = param5;
	{
	LINE_NUMBER(385);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	jint temp0 = (jint)((func_arc_Settings_getBool_java_lang_String_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getBool_java_lang_String_boolean_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"linear"_j))), (jint(1)));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_mod_Mods$LoadedMod *) NULL_CHECK((frame[3].o)))->F_meta;
	if (((jint)((mindustry_mod_Mods$ModMeta *) NULL_CHECK(sp[0].o))->F_pregenerated) != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 1;
	frame[7].i = sp[0].i;
	LINE_NUMBER(386);
	sp[0].o = (jobject)((mindustry_mod_Mods$LoadedMod *) NULL_CHECK((frame[3].o)))->F_meta;
	frame[8].f = ((jfloat)((mindustry_mod_Mods$ModMeta *) NULL_CHECK(sp[0].o))->F_texturescale);
	LINE_NUMBER(388);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[2].o));
	frame[9].o = sp[0].o;
	}
label_5:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[9].o)))(ctx, (frame[9].o));
	if (temp0 == 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[9].o)))(ctx, (frame[9].o));
	frame[10].o = (checkCast(ctx, &class_arc_files_Fi, sp[0].o));
	LINE_NUMBER(390);
	sp[0].o = (jobject)((func_arc_files_Fi_nameWithoutExtension_R_java_lang_String) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_arc_files_Fi_nameWithoutExtension_R_java_lang_String])(ctx, (frame[10].o));
	frame[11].o = sp[0].o;
	LINE_NUMBER(391);
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, (frame[11].o), (((jobject) createStringLiteral(ctx, u8"."_j))));
	if (temp0 == 0) goto label_9;
	}
	{
	sp[0].o = frame[11].o;
	jint temp0 = jint(0);
	jint temp1 = (jint)((func_java_lang_String_indexOf_java_lang_String_R_int) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_java_lang_String_indexOf_java_lang_String_R_int])(ctx, (frame[11].o), (((jobject) createStringLiteral(ctx, u8"."_j))));
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, sp[0].o, temp0, temp1);
	sp += 1;
	goto label_10;
	}
label_9:;
	INST_ALOAD(11);
label_10:;
	{
	sp -= 1;
	frame[12].o = sp[0].o;
	LINE_NUMBER(393);
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, (frame[11].o));
	if (temp0 == 0) goto label_12;
	}
	goto label_5;
label_12:;
	{
	LINE_NUMBER(395);
	if ((frame[4].i) != 0) goto label_13;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	jint temp0 = (jint)((func_arc_graphics_g2d_TextureAtlas_has_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_has_java_lang_String_R_boolean])(ctx, sp[0].o, (frame[12].o));
	if (temp0 != 0) goto label_13;
	}
	{
	LINE_NUMBER(396);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"Sprite '@' in mod '@' attempts to override a non-existent sprite."_j));
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(2)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = (frame[12].o);
	jint temp0 = jint(1);
	sp[2].o = (jobject)((mindustry_mod_Mods$LoadedMod *) NULL_CHECK((frame[3].o)))->F_name;
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	SM_arc_util_Log_warn_java_lang_String_Array1_java_lang_Object(ctx, sp[0].o, sp[1].o);
	}
label_13:;
	{
	LINE_NUMBER(400);
	sp[0].o = frame[5].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_mainExecutor;
	{ /* InvokeDynamic */
		clinit_mindustry_mod_Mods_invoke_java_util_concurrent_Callable_1(ctx);
		auto proxy = (mindustry_mod_Mods_invoke_java_util_concurrent_Callable_1 *) gcAlloc(ctx, &class_mindustry_mod_Mods_invoke_java_util_concurrent_Callable_1);
		proxy->F_field8 = (jref) (frame[6].o);
		proxy->F_field7 = (frame[8].f);
		proxy->F_field6 = (jref) (frame[1].o);
		proxy->F_field5 = (jref) (frame[3].o);
		proxy->F_field4 = (frame[4].i);
		proxy->F_field3 = (jref) (frame[11].o);
		proxy->F_field2 = (frame[7].i);
		proxy->F_field1 = (jref) (frame[10].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[1].o = (jobject)((func_java_util_concurrent_ExecutorService_submit_java_util_concurrent_Callable_R_java_util_concurrent_Future) resolveInterfaceMethod(ctx, &class_java_util_concurrent_ExecutorService, INDEX_java_util_concurrent_ExecutorService_submit_java_util_concurrent_Callable_R_java_util_concurrent_Future, sp[1].o))(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(425);
	goto label_5;
	}
label_6:;
	LINE_NUMBER(426);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_mod_Mods_waitForMain_java_lang_Runnable(jcontext ctx, jobject self, jobject param0) {
}

}
