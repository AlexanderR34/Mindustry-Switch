#include "mindustry/ClientLauncher.h"
#include "arc/ApplicationCore.h"
#include "arc/assets/AssetDescriptor.h"
#include "java/lang/Integer.h"
#include "java/lang/Runnable.h"
#include "arc/graphics/g2d/Draw.h"
#include "mindustry/maps/Maps.h"
#include "mindustry/mod/Mods.h"
#include "arc/util/OS.h"
#include "arc/Settings.h"
#include "arc/graphics/gl/GLVersion.h"
#include "arc/func/Floatp.h"
#include "mindustry/game/EventType_ClientLoadEvent.h"
#include "mindustry/game/EventType_ClientCreateEvent.h"
#include "arc/math/Mathf.h"
#include "arc/Core.h"
#include "arc/util/Log.h"
#include "mindustry/gen/Sounds.h"
#include "mindustry/maps/MapPreviewLoader.h"
#include "arc/Files.h"
#include "arc/util/Time.h"
#include "arc/math/Mat.h"
#include "arc/graphics/Texture.h"
#include "mindustry/graphics/IntelGpuCheck.h"
#include "arc/Graphics.h"
#include "java/lang/Object.h"
#include "mindustry/audio/SoundPriority.h"
#include "arc/scene/ui/Dialog.h"
#include "mindustry/ClientLauncher_invoke_arc_func_Cons_6.h"
#include "mindustry/ClientLauncher_invoke_arc_func_Cons_5.h"
#include "java/lang/System.h"
#include "arc/graphics/GLTexture.h"
#include "mindustry/game/Rules.h"
#include "mindustry/ClientLauncher_invoke_arc_func_Cons_8.h"
#include "mindustry/ClientLauncher.h"
#include "mindustry/ClientLauncher_invoke_arc_func_Cons_7.h"
#include "mindustry/ui/dialogs/LoadDialog.h"
#include "mindustry/ClientLauncher_invoke_arc_func_Cons_9.h"
#include "mindustry/ClientLauncher_invoke_arc_func_Floatp_1.h"
#include "arc/func/Cons.h"
#include "mindustry/core/Control.h"
#include "arc/graphics/g2d/SpriteBatch.h"
#include "mindustry/io/SaveMeta.h"
#include "mindustry/core/Platform.h"
#include "arc/assets/Loadable.h"
#include "mindustry/type/Sector.h"
#include "mindustry/ui/dialogs/EditorMapsDialog.h"
#include "java/lang/Long.h"
#include "mindustry/ui/dialogs/MapListDialog.h"
#include "mindustry/ui/Fonts.h"
#include "mindustry/graphics/LoadRenderer.h"
#include "arc/util/Threads.h"
#include "arc/audio/Sound.h"
#include "mindustry/core/NetServer.h"
#include "arc/graphics/Gl.h"
#include "arc/graphics/Texture_TextureWrap.h"
#include "arc/graphics/g2d/PixmapPacker.h"
#include "mindustry/game/Saves_SaveSlot.h"
#include "mindustry/Vars.h"
#include "arc/assets/loaders/FileHandleResolver.h"
#include "arc/Events.h"
#include "arc/graphics/g2d/Batch.h"
#include "mindustry/gen/Musics.h"
#include "mindustry/core/Renderer.h"
#include "mindustry/core/ContentLoader.h"
#include "mindustry/net/Net_NetProvider.h"
#include "java/lang/Throwable.h"
#include "mindustry/maps/Map.h"
#include "mindustry/game/Saves.h"
#include "mindustry/core/PerfCounter.h"
#include "mindustry/async/AsyncCore.h"
#include "arc/graphics/GL30.h"
#include "arc/assets/AssetManager.h"
#include "mindustry/core/Logic.h"
#include "mindustry/io/SaveIO.h"
#include "arc/audio/Music.h"
#include "mindustry/game/Schematics.h"
#include "mindustry/graphics/NvGpuInfo.h"
#include "mindustry/net/Net.h"
#include "arc/assets/loaders/AssetLoader.h"
#include "mindustry/core/FileTree.h"
#include "mindustry/editor/MapEditorDialog.h"
#include "mindustry/ClientLauncher_invoke_java_lang_Runnable_14.h"
#include "java/lang/Float.h"
#include "mindustry/ClientLauncher_invoke_java_lang_Runnable_15.h"
#include "arc/files/Fi.h"
#include "mindustry/ClientLauncher_invoke_java_lang_Runnable_16.h"
#include "mindustry/ClientLauncher_invoke_java_lang_Runnable_17.h"
#include "arc/Application.h"
#include "mindustry/ClientLauncher_invoke_java_lang_Runnable_18.h"
#include "mindustry/ClientLauncher_invoke_java_lang_Runnable_19.h"
#include "java/lang/String.h"
#include "arc/graphics/g2d/TextureAtlas.h"
#include "java/lang/Runtime.h"
#include "mindustry/ClientLauncher_1.h"
#include "mindustry/ClientLauncher_2.h"
#include "mindustry/ClientLauncher_invoke_java_lang_Runnable_20.h"
#include "mindustry/ClientLauncher_invoke_java_lang_Runnable_21.h"
#include "mindustry/ClientLauncher_invoke_java_lang_Runnable_22.h"
#include "mindustry/core/NetClient.h"
#include "mindustry/ClientLauncher_invoke_java_lang_Runnable_23.h"
#include "mindustry/ClientLauncher_invoke_java_lang_Runnable_24.h"
#include "mindustry/ClientLauncher_invoke_java_lang_Runnable_25.h"
#include "mindustry/ClientLauncher_invoke_java_lang_Runnable_26.h"
#include "mindustry/ClientLauncher_invoke_java_lang_Runnable_27.h"
#include "mindustry/core/UI.h"
#include "arc/util/Strings.h"
#include "mindustry/ctype/Content.h"
#include "arc/ApplicationListener.h"
#include "mindustry/ui/dialogs/SchematicsDialog.h"
#include "mindustry/ai/BaseRegistry.h"
#include "java/lang/Class.h"

extern "C" {

jint SF_mindustry_ClientLauncher_loadingFPS;

void mark_mindustry_ClientLauncher(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_ApplicationCore(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_ClientLauncher *) object;
	if (self->F_loader)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_loader)->clazz)->markFunction)((jobject) self->F_loader, mark, depth + 1);
}

void clinit_mindustry_ClientLauncher(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_ApplicationCore(ctx);
	SF_mindustry_ClientLauncher_loadingFPS = jint(20);
}

void init_mindustry_ClientLauncher(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ClientLauncher:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ClientLauncher(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(31);
	init_arc_ApplicationCore(ctx, (frame[0].o));
	LINE_NUMBER(36);
	((mindustry_ClientLauncher *) NULL_CHECK((frame[0].o)))->F_lastTargetFps = (jlong(-1ll));
	LINE_NUMBER(37);
	((mindustry_ClientLauncher *) NULL_CHECK((frame[0].o)))->F_finished = (jint(0));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ClientLauncher_setup(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ClientLauncher:setup", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(42);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"mindustry.data.dir"_j));
	sp[1].o = (jobject)SM_arc_util_OS_env_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"MINDUSTRY_DATA_DIR"_j))));
	sp[0].o = (jobject)SM_java_lang_System_getProperty_java_lang_String_java_lang_String_R_java_lang_String(ctx, sp[0].o, sp[1].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(43);
	if ((frame[1].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(44);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_files;
	sp[1].o = (jobject)((func_arc_Files_absolute_java_lang_String_R_arc_files_Fi) resolveInterfaceMethod(ctx, &class_arc_Files, INDEX_arc_Files_absolute_java_lang_String_R_arc_files_Fi, sp[1].o))(ctx, sp[1].o, (frame[1].o));
	((func_arc_Settings_setDataDirectory_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_setDataDirectory_arc_files_Fi])(ctx, sp[0].o, sp[1].o);
	}
label_2:;
	{
	LINE_NUMBER(47);
	SM_mindustry_Vars_checkLaunch(ctx);
	LINE_NUMBER(48);
	SM_mindustry_Vars_loadLogger(ctx);
	LINE_NUMBER(50);
	sp[0].o = frame[0].o;
	clinit_mindustry_graphics_LoadRenderer(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_graphics_LoadRenderer);
	init_mindustry_graphics_LoadRenderer(ctx, sp[1].o);
	((mindustry_ClientLauncher *) NULL_CHECK(sp[0].o))->F_loader = (jref) sp[1].o;
	LINE_NUMBER(51);
	clinit_mindustry_game_EventType$ClientCreateEvent(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$ClientCreateEvent);
	init_mindustry_game_EventType$ClientCreateEvent(ctx, sp[0].o);
	SM_arc_Events_fire_java_lang_Object(ctx, sp[0].o);
	LINE_NUMBER(53);
	SM_mindustry_Vars_loadFileLogger(ctx);
	LINE_NUMBER(54);
	clinit_mindustry_Vars(ctx);
	SF_mindustry_Vars_platform = (frame[0].o);
	LINE_NUMBER(55);
	jint temp0 = (jint)SM_arc_graphics_Gl_getInt_int_R_int(ctx, (3379));
	clinit_mindustry_Vars(ctx);
	SF_mindustry_Vars_maxTextureSize = temp0;
	LINE_NUMBER(56);
	sp[0].o = frame[0].o;
	jlong temp1 = (jlong)SM_arc_util_Time_millis_R_long(ctx);
	((mindustry_ClientLauncher *) NULL_CHECK(sp[0].o))->F_beginTime = temp1;
	LINE_NUMBER(59);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"[GL] Version: @"_j));
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp2 = jint(0);
	clinit_arc_Core(ctx);
	sp[2].o = (jobject)SF_arc_Core_graphics;
	sp[2].o = (jobject)((func_arc_Graphics_getGLVersion_R_arc_graphics_gl_GLVersion) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_Graphics_getGLVersion_R_arc_graphics_gl_GLVersion])(ctx, sp[2].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp2) = sp[2].o;
	SM_arc_util_Log_info_java_lang_String_Array1_java_lang_Object(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(60);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"[GL] Max texture size: @"_j));
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp3 = jint(0);
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_maxTextureSize));
	ARRAY_ACCESS(jobject, sp[1].o, temp3) = sp[2].o;
	SM_arc_util_Log_info_java_lang_String_Array1_java_lang_Object(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(61);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"[GL] Using @ API."_j));
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp4 = jint(0);
	clinit_arc_Core(ctx);
	sp[2].o = (jobject)SF_arc_Core_gl30;
	jobject temp5 = sp[2].o;
	sp[2].o = sp[1].o;
	sp[3].i = temp4;
	sp += 4;
	if (temp5 == nullptr) goto label_14;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"OpenGL 3"_j));
	goto label_15;
label_14:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"OpenGL 2"_j));
label_15:;
	{
	sp -= 5;
	ARRAY_ACCESS(jobject, sp[1].o, sp[3].i) = sp[4].o;
	SM_arc_util_Log_info_java_lang_String_Array1_java_lang_Object(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(63);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	sp[0].o = (jobject)((func_arc_Graphics_getGLVersion_R_arc_graphics_gl_GLVersion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_getGLVersion_R_arc_graphics_gl_GLVersion])(ctx, sp[0].o);
	sp[0].o = (jobject)((arc_graphics_gl_GLVersion *) NULL_CHECK(sp[0].o))->F_vendorString;
	SM_mindustry_graphics_IntelGpuCheck_init_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(65);
	jint temp0 = (jint)SM_mindustry_graphics_IntelGpuCheck_wasIntel_R_boolean(ctx);
	frame[2].i = temp0;
	LINE_NUMBER(67);
	if ((frame[2].i) == 0) goto label_19;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp0 = (jint)((func_arc_Graphics_isGL30Available_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_isGL30Available_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_19;
	}
	{
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"[GL] Intel GPU detected on previous launch. Due to memory corruption issues, OpenGL 3 support has been disabled for Intel GPUs. See issue #11041."_j));
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(0)));
	SM_arc_util_Log_warn_java_lang_String_Array1_java_lang_Object(ctx, sp[0].o, sp[1].o);
	}
label_19:;
	{
	LINE_NUMBER(69);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl30;
	if (sp[0].o != nullptr) goto label_20;
	}
	INST_ILOAD(2);
	if ((--sp)->i != 0) goto label_20;
	{
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"[GL] Your device or video drivers do not support OpenGL 3. This will cause performance issues."_j));
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(0)));
	SM_arc_util_Log_warn_java_lang_String_Array1_java_lang_Object(ctx, sp[0].o, sp[1].o);
	}
label_20:;
	{
	LINE_NUMBER(71);
	jint temp0 = (jint)SM_mindustry_graphics_NvGpuInfo_hasMemoryInfo_R_boolean(ctx);
	if (temp0 == 0) goto label_21;
	}
	{
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"[GL] Total available VRAM: @"_j));
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	jint temp1 = (jint)SM_mindustry_graphics_NvGpuInfo_getMaxMemoryKB_R_int(ctx);
	sp[2].o = (jobject)SM_arc_util_Strings_formatByteCount_long_R_java_lang_String(ctx, ((jlong(temp1)) * (jlong(1000ll))));
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	SM_arc_util_Log_info_java_lang_String_Array1_java_lang_Object(ctx, sp[0].o, sp[1].o);
	}
label_21:;
	{
	LINE_NUMBER(73);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_maxTextureSize) >= (4096)) goto label_22;
	}
	{
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"[GL] Your maximum texture size is below the recommended minimum of 4096. This will cause severe performance issues."_j));
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(0)));
	SM_arc_util_Log_warn_java_lang_String_Array1_java_lang_Object(ctx, sp[0].o, sp[1].o);
	}
label_22:;
	{
	LINE_NUMBER(75);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"[JAVA] Version: @"_j));
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	clinit_arc_util_OS(ctx);
	sp[2].o = (jobject)SF_arc_util_OS_javaVersion;
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	SM_arc_util_Log_info_java_lang_String_Array1_java_lang_Object(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(77);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	jint temp1 = (jint)((func_arc_Application_isAndroid_R_boolean) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_isAndroid_R_boolean, sp[0].o))(ctx, sp[0].o);
	if (temp1 == 0) goto label_24;
	}
	{
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"[ANDROID] API level: @"_j));
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	clinit_arc_Core(ctx);
	sp[2].o = (jobject)SF_arc_Core_app;
	jint temp1 = (jint)((func_arc_Application_getVersion_R_int) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_getVersion_R_int, sp[2].o))(ctx, sp[2].o);
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, temp1);
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	SM_arc_util_Log_info_java_lang_String_Array1_java_lang_Object(ctx, sp[0].o, sp[1].o);
	}
label_24:;
	{
	LINE_NUMBER(78);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	jint temp0 = (jint)((func_arc_Application_isIOS_R_boolean) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_isIOS_R_boolean, sp[0].o))(ctx, sp[0].o);
	if (temp0 == 0) goto label_25;
	}
	{
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"[iOS] OS version: @"_j));
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	clinit_arc_Core(ctx);
	sp[2].o = (jobject)SF_arc_Core_app;
	jint temp1 = (jint)((func_arc_Application_getVersion_R_int) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_getVersion_R_int, sp[2].o))(ctx, sp[2].o);
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, temp1);
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	SM_arc_util_Log_info_java_lang_String_Array1_java_lang_Object(ctx, sp[0].o, sp[1].o);
	}
label_25:;
	{
	LINE_NUMBER(80);
	sp[0].o = (jobject)SM_java_lang_Runtime_getRuntime_R_java_lang_Runtime(ctx);
	jlong temp0 = (jlong)((func_java_lang_Runtime_maxMemory_R_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Runtime_maxMemory_R_long])(ctx, sp[0].o);
	frame[3].l = temp0;
	LINE_NUMBER(82);
	if ((clinit_arc_util_OS(ctx), (jint)SF_arc_util_OS_isIos) != 0) goto label_27;
	}
	{
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"[RAM] Available: @"_j));
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[2].o = (jobject)SM_arc_util_Strings_formatByteCount_long_R_java_lang_String(ctx, (frame[3].l));
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	SM_arc_util_Log_info_java_lang_String_Array1_java_lang_Object(ctx, sp[0].o, sp[1].o);
	}
label_27:;
	{
	LINE_NUMBER(84);
	{ /* InvokeDynamic */
		clinit_mindustry_ClientLauncher_invoke_arc_func_Floatp_1(ctx);
		auto proxy = (mindustry_ClientLauncher_invoke_arc_func_Floatp_1 *) gcAlloc(ctx, &class_mindustry_ClientLauncher_invoke_arc_func_Floatp_1);
		sp[0].o = (jobject) proxy;
	}
	SM_arc_util_Time_setDeltaProvider_arc_func_Floatp(ctx, sp[0].o);
	LINE_NUMBER(89);
	SM_mindustry_core_UI_loadColors(ctx);
	LINE_NUMBER(90);
	clinit_arc_graphics_g2d_SpriteBatch(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_g2d_SpriteBatch);
	init_arc_graphics_g2d_SpriteBatch(ctx, sp[0].o);
	clinit_arc_Core(ctx);
	SF_arc_Core_batch = sp[0].o;
	LINE_NUMBER(91);
	clinit_arc_assets_AssetManager(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_assets_AssetManager);
	init_arc_assets_AssetManager(ctx, sp[0].o);
	clinit_arc_Core(ctx);
	SF_arc_Core_assets = sp[0].o;
	LINE_NUMBER(92);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_assets;
	sp[1].o = ((jobject) &class_arc_graphics_Texture);
	sp[2].o = ((jobject) createStringLiteral(ctx, u8".msav"_j));
	clinit_mindustry_maps_MapPreviewLoader(ctx);
	sp[3].o = gcAlloc(ctx, &class_mindustry_maps_MapPreviewLoader);
	init_mindustry_maps_MapPreviewLoader(ctx, sp[3].o);
	((func_arc_assets_AssetManager_setLoader_java_lang_Class_java_lang_String_arc_assets_loaders_AssetLoader) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_setLoader_java_lang_Class_java_lang_String_arc_assets_loaders_AssetLoader])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(94);
	clinit_mindustry_core_FileTree(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_core_FileTree);
	init_mindustry_core_FileTree(ctx, sp[0].o);
	clinit_mindustry_Vars(ctx);
	SF_mindustry_Vars_tree = sp[0].o;
	LINE_NUMBER(95);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_assets;
	sp[1].o = ((jobject) &class_arc_audio_Sound);
	clinit_mindustry_ClientLauncher$1(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_ClientLauncher$1);
	sp[3].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[4].o = (jobject)SF_mindustry_Vars_tree;
	init_mindustry_ClientLauncher$1_mindustry_ClientLauncher_arc_assets_loaders_FileHandleResolver(ctx, sp[2].o, sp[3].o, sp[4].o);
	((func_arc_assets_AssetManager_setLoader_java_lang_Class_arc_assets_loaders_AssetLoader) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_setLoader_java_lang_Class_arc_assets_loaders_AssetLoader])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(114);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_assets;
	sp[1].o = ((jobject) &class_arc_audio_Music);
	clinit_mindustry_ClientLauncher$2(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_ClientLauncher$2);
	sp[3].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[4].o = (jobject)SF_mindustry_Vars_tree;
	init_mindustry_ClientLauncher$2_mindustry_ClientLauncher_arc_assets_loaders_FileHandleResolver(ctx, sp[2].o, sp[3].o, sp[4].o);
	((func_arc_assets_AssetManager_setLoader_java_lang_Class_arc_assets_loaders_AssetLoader) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_setLoader_java_lang_Class_arc_assets_loaders_AssetLoader])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(146);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_assets;
	sp[0].o = (jobject)((func_arc_assets_AssetManager_load_java_lang_String_java_lang_Class_R_arc_assets_AssetDescriptor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_load_java_lang_String_java_lang_Class_R_arc_assets_AssetDescriptor])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"sprites/error.png"_j))), (((jobject) &class_arc_graphics_Texture)));
	LINE_NUMBER(147);
	sp[0].o = (jobject)SM_arc_graphics_g2d_TextureAtlas_blankAtlas_R_arc_graphics_g2d_TextureAtlas(ctx);
	clinit_arc_Core(ctx);
	SF_arc_Core_atlas = sp[0].o;
	LINE_NUMBER(148);
	clinit_mindustry_net_Net(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_net_Net);
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_platform;
	sp[1].o = (jobject)((func_mindustry_core_Platform_getNet_R_mindustry_net_Net$NetProvider) resolveInterfaceMethod(ctx, &class_mindustry_core_Platform, INDEX_mindustry_core_Platform_getNet_R_mindustry_net_Net$NetProvider, sp[1].o))(ctx, sp[1].o);
	init_mindustry_net_Net_mindustry_net_Net$NetProvider(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_Vars(ctx);
	SF_mindustry_Vars_net = sp[0].o;
	LINE_NUMBER(149);
	SM_mindustry_maps_MapPreviewLoader_setupLoaders(ctx);
	LINE_NUMBER(150);
	clinit_mindustry_mod_Mods(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_mod_Mods);
	init_mindustry_mod_Mods(ctx, sp[0].o);
	clinit_mindustry_Vars(ctx);
	SF_mindustry_Vars_mods = sp[0].o;
	LINE_NUMBER(151);
	clinit_mindustry_game_Schematics(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_Schematics);
	init_mindustry_game_Schematics(ctx, sp[0].o);
	clinit_mindustry_Vars(ctx);
	SF_mindustry_Vars_schematics = sp[0].o;
	LINE_NUMBER(153);
	SM_mindustry_ui_Fonts_loadSystemCursors(ctx);
	LINE_NUMBER(155);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_assets;
	clinit_mindustry_Vars(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_Vars);
	init_mindustry_Vars(ctx, sp[1].o);
	sp[0].o = (jobject)((func_arc_assets_AssetManager_load_arc_assets_Loadable_R_arc_assets_AssetDescriptor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_load_arc_assets_Loadable_R_arc_assets_AssetDescriptor])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(157);
	SM_mindustry_ui_Fonts_loadDefaultFont(ctx);
	LINE_NUMBER(160);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_assets;
	clinit_arc_assets_AssetDescriptor(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_assets_AssetDescriptor);
	sp[2].o = sp[1].o;
	sp += 3;
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_maxTextureSize) < (4096)) goto label_46;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"sprites/sprites.aatls"_j));
	goto label_47;
label_46:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"sprites/fallback/sprites.aatls"_j));
label_47:;
	{
	sp -= 4;
	init_arc_assets_AssetDescriptor_java_lang_String_java_lang_Class(ctx, sp[1].o, sp[3].o, (((jobject) &class_arc_graphics_g2d_TextureAtlas)));
	sp[0].o = (jobject)((func_arc_assets_AssetManager_load_arc_assets_AssetDescriptor_R_arc_assets_AssetDescriptor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_load_arc_assets_AssetDescriptor_R_arc_assets_AssetDescriptor])(ctx, sp[0].o, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ClientLauncher_invoke_arc_func_Cons_5(ctx);
		auto proxy = (mindustry_ClientLauncher_invoke_arc_func_Cons_5 *) gcAlloc(ctx, &class_mindustry_ClientLauncher_invoke_arc_func_Cons_5);
		sp[1].o = (jobject) proxy;
	}
	((arc_assets_AssetDescriptor *) NULL_CHECK(sp[0].o))->F_loaded = (jref) sp[1].o;
	LINE_NUMBER(161);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_assets;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"maps"_j));
	sp[2].o = ((jobject) &class_mindustry_maps_Map);
	{ /* InvokeDynamic */
		clinit_mindustry_ClientLauncher_invoke_java_lang_Runnable_14(ctx);
		auto proxy = (mindustry_ClientLauncher_invoke_java_lang_Runnable_14 *) gcAlloc(ctx, &class_mindustry_ClientLauncher_invoke_java_lang_Runnable_14);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_assets_AssetManager_loadRun_java_lang_String_java_lang_Class_java_lang_Runnable_R_arc_assets_AssetDescriptor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_loadRun_java_lang_String_java_lang_Class_java_lang_Runnable_R_arc_assets_AssetDescriptor])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(163);
	SM_mindustry_gen_Musics_load(ctx);
	LINE_NUMBER(164);
	SM_mindustry_gen_Sounds_load(ctx);
	LINE_NUMBER(166);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_assets;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"contentcreate"_j));
	sp[2].o = ((jobject) &class_mindustry_ctype_Content);
	{ /* InvokeDynamic */
		clinit_mindustry_ClientLauncher_invoke_java_lang_Runnable_15(ctx);
		auto proxy = (mindustry_ClientLauncher_invoke_java_lang_Runnable_15 *) gcAlloc(ctx, &class_mindustry_ClientLauncher_invoke_java_lang_Runnable_15);
		sp[3].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ClientLauncher_invoke_java_lang_Runnable_16(ctx);
		auto proxy = (mindustry_ClientLauncher_invoke_java_lang_Runnable_16 *) gcAlloc(ctx, &class_mindustry_ClientLauncher_invoke_java_lang_Runnable_16);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_assets_AssetManager_loadRun_java_lang_String_java_lang_Class_java_lang_Runnable_java_lang_Runnable_R_arc_assets_AssetDescriptor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_loadRun_java_lang_String_java_lang_Class_java_lang_Runnable_java_lang_Runnable_R_arc_assets_AssetDescriptor])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(174);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_assets;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_mods;
	sp[0].o = (jobject)((func_arc_assets_AssetManager_load_arc_assets_Loadable_R_arc_assets_AssetDescriptor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_load_arc_assets_Loadable_R_arc_assets_AssetDescriptor])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(175);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_assets;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"mergeUI"_j));
	sp[2].o = ((jobject) &class_arc_graphics_g2d_PixmapPacker);
	{ /* InvokeDynamic */
		clinit_mindustry_ClientLauncher_invoke_java_lang_Runnable_17(ctx);
		auto proxy = (mindustry_ClientLauncher_invoke_java_lang_Runnable_17 *) gcAlloc(ctx, &class_mindustry_ClientLauncher_invoke_java_lang_Runnable_17);
		sp[3].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ClientLauncher_invoke_java_lang_Runnable_18(ctx);
		auto proxy = (mindustry_ClientLauncher_invoke_java_lang_Runnable_18 *) gcAlloc(ctx, &class_mindustry_ClientLauncher_invoke_java_lang_Runnable_18);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_assets_AssetManager_loadRun_java_lang_String_java_lang_Class_java_lang_Runnable_java_lang_Runnable_R_arc_assets_AssetDescriptor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_loadRun_java_lang_String_java_lang_Class_java_lang_Runnable_java_lang_Runnable_R_arc_assets_AssetDescriptor])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(177);
	sp[0].o = frame[0].o;
	clinit_mindustry_core_Logic(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_core_Logic);
	init_mindustry_core_Logic(ctx, sp[1].o);
	clinit_mindustry_Vars(ctx);
	SF_mindustry_Vars_logic = sp[1].o;
	((func_mindustry_ClientLauncher_add_arc_ApplicationListener) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ClientLauncher_add_arc_ApplicationListener])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(178);
	sp[0].o = frame[0].o;
	clinit_mindustry_core_Control(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_core_Control);
	init_mindustry_core_Control(ctx, sp[1].o);
	clinit_mindustry_Vars(ctx);
	SF_mindustry_Vars_control = sp[1].o;
	((func_mindustry_ClientLauncher_add_arc_ApplicationListener) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ClientLauncher_add_arc_ApplicationListener])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(179);
	sp[0].o = frame[0].o;
	clinit_mindustry_core_Renderer(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_core_Renderer);
	init_mindustry_core_Renderer(ctx, sp[1].o);
	clinit_mindustry_Vars(ctx);
	SF_mindustry_Vars_renderer = sp[1].o;
	((func_mindustry_ClientLauncher_add_arc_ApplicationListener) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ClientLauncher_add_arc_ApplicationListener])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(180);
	sp[0].o = frame[0].o;
	clinit_mindustry_core_UI(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_core_UI);
	init_mindustry_core_UI(ctx, sp[1].o);
	clinit_mindustry_Vars(ctx);
	SF_mindustry_Vars_ui = sp[1].o;
	((func_mindustry_ClientLauncher_add_arc_ApplicationListener) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ClientLauncher_add_arc_ApplicationListener])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(181);
	sp[0].o = frame[0].o;
	clinit_mindustry_core_NetServer(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_core_NetServer);
	init_mindustry_core_NetServer(ctx, sp[1].o);
	clinit_mindustry_Vars(ctx);
	SF_mindustry_Vars_netServer = sp[1].o;
	((func_mindustry_ClientLauncher_add_arc_ApplicationListener) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ClientLauncher_add_arc_ApplicationListener])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(182);
	sp[0].o = frame[0].o;
	clinit_mindustry_core_NetClient(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_core_NetClient);
	init_mindustry_core_NetClient(ctx, sp[1].o);
	clinit_mindustry_Vars(ctx);
	SF_mindustry_Vars_netClient = sp[1].o;
	((func_mindustry_ClientLauncher_add_arc_ApplicationListener) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ClientLauncher_add_arc_ApplicationListener])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(184);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_assets;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_schematics;
	sp[0].o = (jobject)((func_arc_assets_AssetManager_load_arc_assets_Loadable_R_arc_assets_AssetDescriptor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_load_arc_assets_Loadable_R_arc_assets_AssetDescriptor])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(186);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_assets;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"contentinit"_j));
	sp[2].o = ((jobject) &class_mindustry_core_ContentLoader);
	{ /* InvokeDynamic */
		clinit_mindustry_ClientLauncher_invoke_java_lang_Runnable_19(ctx);
		auto proxy = (mindustry_ClientLauncher_invoke_java_lang_Runnable_19 *) gcAlloc(ctx, &class_mindustry_ClientLauncher_invoke_java_lang_Runnable_19);
		sp[3].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ClientLauncher_invoke_java_lang_Runnable_20(ctx);
		auto proxy = (mindustry_ClientLauncher_invoke_java_lang_Runnable_20 *) gcAlloc(ctx, &class_mindustry_ClientLauncher_invoke_java_lang_Runnable_20);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_assets_AssetManager_loadRun_java_lang_String_java_lang_Class_java_lang_Runnable_java_lang_Runnable_R_arc_assets_AssetDescriptor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_loadRun_java_lang_String_java_lang_Class_java_lang_Runnable_java_lang_Runnable_R_arc_assets_AssetDescriptor])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(190);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_assets;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"baseparts"_j));
	sp[2].o = ((jobject) &class_mindustry_ai_BaseRegistry);
	{ /* InvokeDynamic */
		clinit_mindustry_ClientLauncher_invoke_java_lang_Runnable_21(ctx);
		auto proxy = (mindustry_ClientLauncher_invoke_java_lang_Runnable_21 *) gcAlloc(ctx, &class_mindustry_ClientLauncher_invoke_java_lang_Runnable_21);
		sp[3].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ClientLauncher_invoke_java_lang_Runnable_22(ctx);
		auto proxy = (mindustry_ClientLauncher_invoke_java_lang_Runnable_22 *) gcAlloc(ctx, &class_mindustry_ClientLauncher_invoke_java_lang_Runnable_22);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_assets_AssetManager_loadRun_java_lang_String_java_lang_Class_java_lang_Runnable_java_lang_Runnable_R_arc_assets_AssetDescriptor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_loadRun_java_lang_String_java_lang_Class_java_lang_Runnable_java_lang_Runnable_R_arc_assets_AssetDescriptor])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(192);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_assets;
	sp[0].o = (jobject)((func_arc_assets_AssetManager_load_java_lang_String_java_lang_Class_R_arc_assets_AssetDescriptor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_load_java_lang_String_java_lang_Class_R_arc_assets_AssetDescriptor])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"sprites/schematic-background.png"_j))), (((jobject) &class_arc_graphics_Texture)));
	{ /* InvokeDynamic */
		clinit_mindustry_ClientLauncher_invoke_arc_func_Cons_6(ctx);
		auto proxy = (mindustry_ClientLauncher_invoke_arc_func_Cons_6 *) gcAlloc(ctx, &class_mindustry_ClientLauncher_invoke_arc_func_Cons_6);
		sp[1].o = (jobject) proxy;
	}
	((arc_assets_AssetDescriptor *) NULL_CHECK(sp[0].o))->F_loaded = (jref) sp[1].o;
	LINE_NUMBER(193);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ClientLauncher_add_arc_ApplicationListener(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ClientLauncher:add", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(197);
	M_arc_ApplicationCore_add_arc_ApplicationListener(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(200);
	if ((isInstance(ctx, (frame[1].o), &class_arc_assets_Loadable)) == 0) goto label_2;
	}
	{
	frame[2].o = (checkCast(ctx, &class_arc_assets_Loadable, (frame[1].o)));
	LINE_NUMBER(201);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_assets;
	sp[0].o = (jobject)((func_arc_assets_AssetManager_load_arc_assets_Loadable_R_arc_assets_AssetDescriptor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_load_arc_assets_Loadable_R_arc_assets_AssetDescriptor])(ctx, sp[0].o, (frame[2].o));
	}
label_2:;
	LINE_NUMBER(203);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ClientLauncher_resize_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ClientLauncher:resize", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(207);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_assets;
	if (sp[0].o != nullptr) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(209);
	if (((jint)((mindustry_ClientLauncher *) NULL_CHECK((frame[0].o)))->F_finished) != 0) goto label_2;
	}
	{
	LINE_NUMBER(210);
	sp[0].o = (jobject)SM_arc_graphics_g2d_Draw_proj_R_arc_math_Mat(ctx);
	sp[0].o = (jobject)((func_arc_math_Mat_setOrtho_float_float_float_float_R_arc_math_Mat) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Mat_setOrtho_float_float_float_float_R_arc_math_Mat])(ctx, sp[0].o, (jfloat(0)), (jfloat(0)), (jfloat((frame[1].i))), (jfloat((frame[2].i))));
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(212);
	M_arc_ApplicationCore_resize_int_int(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	}
label_4:;
	LINE_NUMBER(214);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ClientLauncher_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ClientLauncher:update", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(218);
	clinit_mindustry_core_PerfCounter(ctx);
	sp[0].o = (jobject)SF_mindustry_core_PerfCounter_update;
	((func_mindustry_core_PerfCounter_begin) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_PerfCounter_begin])(ctx, sp[0].o);
	LINE_NUMBER(220);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_ios) == 0) goto label_2;
	}
	INST_ICONST(0);
	goto label_3;
label_2:;
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	jint temp0 = (jint)((func_arc_Settings_getInt_java_lang_String_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getInt_java_lang_String_int_R_int])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"fpscap"_j))), (120));
	sp[0].i = temp0;
	sp += 1;
	}
label_3:;
	{
	sp -= 1;
	frame[1].i = sp[0].i;
	LINE_NUMBER(221);
	if ((longCompare(((jlong)((mindustry_ClientLauncher *) NULL_CHECK((frame[0].o)))->F_lastTargetFps), (jlong((frame[1].i))))) == 0) goto label_5;
	}
	{
	if ((longCompare(((jlong)((mindustry_ClientLauncher *) NULL_CHECK((frame[0].o)))->F_lastTargetFps), (jlong(-1ll)))) == 0) goto label_5;
	}
	INST_ICONST(1);
	goto label_6;
label_5:;
	INST_ICONST(0);
label_6:;
	{
	sp -= 1;
	frame[2].i = sp[0].i;
	LINE_NUMBER(222);
	if ((frame[1].i) <= 0) goto label_8;
	}
	{
	if ((frame[1].i) > (240)) goto label_8;
	}
	INST_ICONST(1);
	goto label_9;
label_8:;
	INST_ICONST(0);
label_9:;
	{
	sp -= 1;
	frame[3].i = sp[0].i;
	LINE_NUMBER(224);
	((mindustry_ClientLauncher *) NULL_CHECK((frame[0].o)))->F_lastTargetFps = (jlong((frame[1].i)));
	LINE_NUMBER(226);
	if ((frame[3].i) == 0) goto label_12;
	}
	INST_ILOAD(2);
	if ((--sp)->i != 0) goto label_12;
	{
	LINE_NUMBER(227);
	sp[0].o = frame[0].o;
	((mindustry_ClientLauncher *) NULL_CHECK(sp[0].o))->F_nextFrame = (((jlong)((mindustry_ClientLauncher *) NULL_CHECK(sp[0].o))->F_nextFrame) + (jlong(((jint(1000000000)) / (frame[1].i)))));
	goto label_14;
	}
label_12:;
	{
	LINE_NUMBER(229);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)SM_arc_util_Time_nanos_R_long(ctx);
	((mindustry_ClientLauncher *) NULL_CHECK(sp[0].o))->F_nextFrame = temp0;
	}
label_14:;
	{
	LINE_NUMBER(232);
	if (((jint)((mindustry_ClientLauncher *) NULL_CHECK((frame[0].o)))->F_finished) != 0) goto label_15;
	}
	{
	LINE_NUMBER(233);
	sp[0].o = (jobject)((mindustry_ClientLauncher *) NULL_CHECK((frame[0].o)))->F_loader;
	if (sp[0].o == nullptr) goto label_17;
	}
	{
	LINE_NUMBER(234);
	sp[0].o = (jobject)((mindustry_ClientLauncher *) NULL_CHECK((frame[0].o)))->F_loader;
	((func_mindustry_graphics_LoadRenderer_draw) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_LoadRenderer_draw])(ctx, sp[0].o);
	}
label_17:;
	{
	LINE_NUMBER(236);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_assets;
	jint temp0 = (jint)((func_arc_assets_AssetManager_update_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_update_int_R_boolean])(ctx, sp[0].o, (50));
	{
		static int clientFrameCount = 0;
		clientFrameCount++;
		auto mgr = (arc_assets_AssetManager*) SF_arc_Core_assets;
		float progress = mgr ? ((func_arc_assets_AssetManager_getProgress_R_float) ((void **) nullCheck(ctx, (jobject)mgr)->vtable)[VTABLE_arc_assets_AssetManager_getProgress_R_float])(ctx, (jobject)mgr) : 0.0f;
		printf("[ClientLauncher] Loading frame %d: %.1f%% complete (temp0=%d)\n", clientFrameCount, progress * 100.0f, temp0);
		fflush(stdout);
	}
	if (temp0 == 0) goto label_19;
	}
	{
	printf("[ClientLauncher] Asset loading completed! Disposing loader and initializing modules...\n"); fflush(stdout);
	LINE_NUMBER(237);
	sp[0].o = (jobject)((mindustry_ClientLauncher *) NULL_CHECK((frame[0].o)))->F_loader;
	((func_mindustry_graphics_LoadRenderer_dispose) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_LoadRenderer_dispose])(ctx, sp[0].o);
	LINE_NUMBER(238);
	((mindustry_ClientLauncher *) NULL_CHECK((frame[0].o)))->F_loader = (jref) (jobject(nullptr));
	LINE_NUMBER(239);
	SM_mindustry_audio_SoundPriority_init(ctx);
	LINE_NUMBER(240);
	sp[0].o = (jobject)((arc_ApplicationCore *) NULL_CHECK((frame[0].o)))->F_modules;
	frame[4].o = sp[0].o;
	frame[5].i = (((jarray) nullCheck(ctx, (frame[4].o)))->length);
	frame[6].i = (jint(0));
	}
label_24:;
	{
	if ((frame[6].i) >= (frame[5].i)) goto label_25;
	}
	{
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[6].i)));
	printf("[ClientLauncher] Initializing module %d/%d: %s\n", (frame[6].i)+1, frame[5].i, (const char*)((jclass)frame[7].o->clazz)->nativeName); fflush(stdout);
	LINE_NUMBER(241);
	((func_arc_ApplicationListener_init) resolveInterfaceMethod(ctx, &class_arc_ApplicationListener, INDEX_arc_ApplicationListener_init, (frame[7].o)))(ctx, (frame[7].o));
	printf("[ClientLauncher] Module %d/%d initialized successfully!\n", (frame[6].i)+1, frame[5].i); fflush(stdout);
	LINE_NUMBER(240);
	INST_IINC(6, 1);
	goto label_24;
	}
label_25:;
	{
	LINE_NUMBER(243);
	printf("[ClientLauncher] Running mods eachClass...\n"); fflush(stdout);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_mods;
	{ /* InvokeDynamic */
		clinit_mindustry_ClientLauncher_invoke_arc_func_Cons_7(ctx);
		auto proxy = (mindustry_ClientLauncher_invoke_arc_func_Cons_7 *) gcAlloc(ctx, &class_mindustry_ClientLauncher_invoke_arc_func_Cons_7);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_mod_Mods_eachClass_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_Mods_eachClass_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(244);
	((mindustry_ClientLauncher *) NULL_CHECK((frame[0].o)))->F_finished = (jint(1));
	printf("[ClientLauncher] Finished set to 1, firing ClientLoadEvent!\n"); fflush(stdout);
	LINE_NUMBER(245);
	clinit_mindustry_game_EventType$ClientLoadEvent(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$ClientLoadEvent);
	init_mindustry_game_EventType$ClientLoadEvent(ctx, sp[0].o);
	SM_arc_Events_fire_java_lang_Object(ctx, sp[0].o);
	LINE_NUMBER(246);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"Total time to load: @ms"_j));
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	jlong temp1 = (jlong)SM_arc_util_Time_timeSinceMillis_long_R_long(ctx, ((jlong)((mindustry_ClientLauncher *) NULL_CHECK((frame[0].o)))->F_beginTime));
	sp[2].o = (jobject)SM_java_lang_Long_valueOf_long_R_java_lang_Long(ctx, temp1);
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	SM_arc_util_Log_info_java_lang_String_Array1_java_lang_Object(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(247);
	clinit_mindustry_Vars(ctx);
	SF_mindustry_Vars_clientLoaded = (jint(1));
	LINE_NUMBER(248);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_graphics;
	jint temp2 = (jint)((func_arc_Graphics_getWidth_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Graphics_getWidth_R_int])(ctx, sp[1].o);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_graphics;
	jint temp3 = (jint)((func_arc_Graphics_getHeight_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Graphics_getHeight_R_int])(ctx, sp[1].o);
	M_arc_ApplicationCore_resize_int_int(ctx, sp[0].o, temp2, temp3);
	LINE_NUMBER(249);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	{ /* InvokeDynamic */
		clinit_mindustry_ClientLauncher_invoke_java_lang_Runnable_23(ctx);
		auto proxy = (mindustry_ClientLauncher_invoke_java_lang_Runnable_23 *) gcAlloc(ctx, &class_mindustry_ClientLauncher_invoke_java_lang_Runnable_23);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_Application_post_java_lang_Runnable) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_post_java_lang_Runnable, sp[0].o))(ctx, sp[0].o, sp[1].o);
	goto label_19;
	}
label_15:;
	{
	static int appFrameCount = 0;
	if (++appFrameCount % 60 == 0) {
		printf("[ClientLauncher] Main game loop frame %d\n", appFrameCount);
		fflush(stdout);
	}
	LINE_NUMBER(257);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_asyncCore;
	((func_mindustry_async_AsyncCore_begin) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_async_AsyncCore_begin])(ctx, sp[0].o);
	LINE_NUMBER(259);
	M_arc_ApplicationCore_update(ctx, (frame[0].o));
	LINE_NUMBER(261);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_asyncCore;
	((func_mindustry_async_AsyncCore_end) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_async_AsyncCore_end])(ctx, sp[0].o);
	}
label_19:;
	{
	LINE_NUMBER(264);
	if ((frame[3].i) == 0) goto label_36;
	}
	{
	LINE_NUMBER(265);
	jlong temp0 = (jlong)SM_arc_util_Time_nanos_R_long(ctx);
	frame[4].l = temp0;
	LINE_NUMBER(266);
	if ((longCompare(((jlong)((mindustry_ClientLauncher *) NULL_CHECK((frame[0].o)))->F_nextFrame), (frame[4].l))) <= 0) goto label_36;
	}
	{
	LINE_NUMBER(267);
	frame[6].l = (((jlong)((mindustry_ClientLauncher *) NULL_CHECK((frame[0].o)))->F_nextFrame) - (frame[4].l));
	LINE_NUMBER(268);
	SM_arc_util_Threads_sleep_long_int(ctx, ((frame[6].l) / (jlong(1000000ll))), (jint(((frame[6].l) % (jlong(1000000ll))))));
	}
label_36:;
	{
	LINE_NUMBER(272);
	clinit_mindustry_core_PerfCounter(ctx);
	sp[0].o = (jobject)SF_mindustry_core_PerfCounter_update;
	((func_mindustry_core_PerfCounter_end) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_PerfCounter_end])(ctx, sp[0].o);
	LINE_NUMBER(274);
	clinit_mindustry_core_PerfCounter(ctx);
	sp[0].o = (jobject)SF_mindustry_core_PerfCounter_update;
	jlong temp0 = (jlong)((func_mindustry_core_PerfCounter_latestValueNs_R_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_PerfCounter_latestValueNs_R_long])(ctx, sp[0].o);
	frame[4].l = temp0;
	LINE_NUMBER(275);
	clinit_mindustry_core_PerfCounter(ctx);
	sp[0].o = (jobject)SF_mindustry_core_PerfCounter_displayedCounters;
	frame[6].o = sp[0].o;
	frame[7].i = (((jarray) nullCheck(ctx, (frame[6].o)))->length);
	frame[8].i = (jint(0));
	}
label_43:;
	{
	if ((frame[8].i) >= (frame[7].i)) goto label_44;
	}
	{
	frame[9].o = ((jobject)ARRAY_ACCESS(jobject, (frame[6].o), (frame[8].i)));
	LINE_NUMBER(276);
	sp[0].o = frame[9].o;
	clinit_mindustry_core_PerfCounter(ctx);
	sp[1].o = (jobject)SF_mindustry_core_PerfCounter_other;
	if (sp[0].o == sp[1].o) goto label_46;
	}
	{
	jlong temp0 = frame[4].l;
	jlong temp1 = (jlong)((func_mindustry_core_PerfCounter_latestValueNs_R_long) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_mindustry_core_PerfCounter_latestValueNs_R_long])(ctx, (frame[9].o));
	frame[4].l = (temp0 - temp1);
	}
label_46:;
	{
	LINE_NUMBER(275);
	INST_IINC(8, 1);
	goto label_43;
	}
label_44:;
	{
	LINE_NUMBER(278);
	clinit_mindustry_core_PerfCounter(ctx);
	sp[0].o = (jobject)SF_mindustry_core_PerfCounter_other;
	((func_mindustry_core_PerfCounter_add_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_PerfCounter_add_long])(ctx, sp[0].o, (frame[4].l));
	LINE_NUMBER(280);
	clinit_mindustry_core_PerfCounter(ctx);
	sp[0].o = (jobject)SF_mindustry_core_PerfCounter_all;
	frame[6].o = sp[0].o;
	frame[7].i = (((jarray) nullCheck(ctx, (frame[6].o)))->length);
	frame[8].i = (jint(0));
	}
label_48:;
	{
	if ((frame[8].i) >= (frame[7].i)) goto label_49;
	}
	{
	frame[9].o = ((jobject)ARRAY_ACCESS(jobject, (frame[6].o), (frame[8].i)));
	LINE_NUMBER(281);
	((func_mindustry_core_PerfCounter_checkUpdate) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_mindustry_core_PerfCounter_checkUpdate])(ctx, (frame[9].o));
	LINE_NUMBER(280);
	INST_IINC(8, 1);
	goto label_48;
	}
label_49:;
	LINE_NUMBER(283);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ClientLauncher_exit(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ClientLauncher:exit", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(288);
	SM_mindustry_Vars_finishLaunch(ctx);
	LINE_NUMBER(289);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ClientLauncher_init(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ClientLauncher:init", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(293);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)SM_arc_util_Time_nanos_R_long(ctx);
	((mindustry_ClientLauncher *) NULL_CHECK(sp[0].o))->F_nextFrame = temp0;
	LINE_NUMBER(294);
	((func_mindustry_ClientLauncher_setup) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ClientLauncher_setup])(ctx, (frame[0].o));
	LINE_NUMBER(295);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ClientLauncher_resume(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ClientLauncher:resume", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(299);
	if (((jint)((mindustry_ClientLauncher *) NULL_CHECK((frame[0].o)))->F_finished) == 0) goto label_1;
	}
	{
	LINE_NUMBER(300);
	M_arc_ApplicationCore_resume(ctx, (frame[0].o));
	}
label_1:;
	LINE_NUMBER(302);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ClientLauncher_pause(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ClientLauncher:pause", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(308);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_mobile) == 0) goto label_1;
	}
	LINE_NUMBER(309);
	SM_mindustry_Vars_finishLaunch(ctx);
label_1:;
	{
	LINE_NUMBER(311);
	if (((jint)((mindustry_ClientLauncher *) NULL_CHECK((frame[0].o)))->F_finished) == 0) goto label_3;
	}
	{
	LINE_NUMBER(312);
	M_arc_ApplicationCore_pause(ctx, (frame[0].o));
	}
label_3:;
	LINE_NUMBER(314);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ClientLauncher_fileDropped_arc_files_Fi(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ClientLauncher:fileDropped", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(318);
	if ((clinit_arc_util_OS(ctx), (jint)SF_arc_util_OS_isIos) != 0) goto label_1;
	}
	clinit_arc_util_OS(ctx);
	(sp++)->i = SF_arc_util_OS_isAndroid;
	if ((--sp)->i == 0) goto label_2;
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(320);
	jint temp0 = (jint)((func_arc_files_Fi_extEquals_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_files_Fi_extEquals_java_lang_String_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"msav"_j))));
	if (temp0 != 0) goto label_3;
	}
	{
	jint temp0 = (jint)((func_arc_files_Fi_extEquals_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_files_Fi_extEquals_java_lang_String_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"msch"_j))));
	if (temp0 == 0) goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(321);
	SM_mindustry_ClientLauncher_handleFileImport_arc_files_Fi(ctx, (frame[1].o));
	}
label_4:;
	LINE_NUMBER(323);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_ClientLauncher_runOnClientLoad_java_lang_Runnable(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ClientLauncher:runOnClientLoad", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ClientLauncher(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(326);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_clientLoaded) == 0) goto label_1;
	}
	{
	LINE_NUMBER(327);
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, (frame[0].o)))(ctx, (frame[0].o));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(329);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$ClientLoadEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_ClientLauncher_invoke_arc_func_Cons_8(ctx);
		auto proxy = (mindustry_ClientLauncher_invoke_arc_func_Cons_8 *) gcAlloc(ctx, &class_mindustry_ClientLauncher_invoke_arc_func_Cons_8);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	}
label_3:;
	LINE_NUMBER(331);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_ClientLauncher_handleFileImport_arc_files_Fi(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ClientLauncher:handleFileImport", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ClientLauncher(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(335);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	{ /* InvokeDynamic */
		clinit_mindustry_ClientLauncher_invoke_java_lang_Runnable_24(ctx);
		auto proxy = (mindustry_ClientLauncher_invoke_java_lang_Runnable_24 *) gcAlloc(ctx, &class_mindustry_ClientLauncher_invoke_java_lang_Runnable_24);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_Application_post_java_lang_Runnable) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_post_java_lang_Runnable, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(363);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ClientLauncher_lambda$handleFileImport$0_arc_files_Fi(jcontext ctx, jobject param0) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ClientLauncher:lambda$handleFileImport$0", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ClientLauncher(ctx);
	frame[0].o = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(337);
	jint temp0 = (jint)SM_mindustry_game_Schematics_isSchematic_arc_files_Fi_R_boolean(ctx, (frame[0].o));
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(338);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_schematics;
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_SchematicsDialog_show_R_arc_scene_ui_Dialog) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_SchematicsDialog_show_R_arc_scene_ui_Dialog])(ctx, sp[0].o);
	LINE_NUMBER(339);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_schematics;
	((func_mindustry_ui_dialogs_SchematicsDialog_importAndShow_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_SchematicsDialog_importAndShow_arc_files_Fi])(ctx, sp[0].o, (frame[0].o));
	goto label_1;
	}
label_4:;
	{
	LINE_NUMBER(341);
	sp[0].o = (jobject)SM_mindustry_io_SaveIO_getMeta_arc_files_Fi_R_mindustry_io_SaveMeta(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(342);
	jint temp0 = (jint)((func_mindustry_io_SaveMeta_isMap_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_io_SaveMeta_isMap_R_boolean])(ctx, (frame[1].o));
	if (temp0 != 0) goto label_8;
	}
	{
	LINE_NUMBER(343);
	sp[0].o = (jobject)((mindustry_io_SaveMeta *) NULL_CHECK((frame[1].o)))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_sector;
	if (sp[0].o != nullptr) goto label_10;
	}
	{
	LINE_NUMBER(345);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_editor;
	jint temp0 = (jint)((func_mindustry_editor_MapEditorDialog_isShown_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapEditorDialog_isShown_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_12;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_editor;
	((func_mindustry_editor_MapEditorDialog_hide) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapEditorDialog_hide])(ctx, sp[0].o);
	}
label_12:;
	{
	LINE_NUMBER(346);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_maps;
	jint temp0 = (jint)((func_mindustry_ui_dialogs_EditorMapsDialog_isShown_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_EditorMapsDialog_isShown_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_13;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_maps;
	((func_mindustry_ui_dialogs_EditorMapsDialog_hide) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_EditorMapsDialog_hide])(ctx, sp[0].o);
	}
label_13:;
	{
	LINE_NUMBER(348);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_saves;
	sp[0].o = (jobject)((func_mindustry_game_Saves_importSave_arc_files_Fi_R_mindustry_game_Saves$SaveSlot) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Saves_importSave_arc_files_Fi_R_mindustry_game_Saves$SaveSlot])(ctx, sp[0].o, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(349);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_load;
	((func_mindustry_ui_dialogs_LoadDialog_runLoadSave_mindustry_game_Saves$SaveSlot) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_LoadDialog_runLoadSave_mindustry_game_Saves$SaveSlot])(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(350);
	goto label_1;
	}
label_10:;
	{
	LINE_NUMBER(351);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	((func_mindustry_core_UI_showErrorMessage_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showErrorMessage_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@save.nocampaign"_j))));
	goto label_1;
	}
label_8:;
	{
	LINE_NUMBER(354);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_maps;
	jint temp0 = (jint)((func_mindustry_ui_dialogs_EditorMapsDialog_isShown_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_EditorMapsDialog_isShown_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_16;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_maps;
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_EditorMapsDialog_show_R_arc_scene_ui_Dialog) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_EditorMapsDialog_show_R_arc_scene_ui_Dialog])(ctx, sp[0].o);
	}
label_16:;
	{
	LINE_NUMBER(355);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_maps;
	sp[1].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ClientLauncher_invoke_arc_func_Cons_9(ctx);
		auto proxy = (mindustry_ClientLauncher_invoke_arc_func_Cons_9 *) gcAlloc(ctx, &class_mindustry_ClientLauncher_invoke_arc_func_Cons_9);
		sp[2].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_EditorMapsDialog_tryImportMap_arc_files_Fi_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_EditorMapsDialog_tryImportMap_arc_files_Fi_arc_func_Cons])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_1:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(361);
	goto label_17;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(358);
	frame[1].o = sp[0].o;
	LINE_NUMBER(359);
	SM_arc_util_Log_err_java_lang_String_java_lang_Throwable(ctx, (((jobject) createStringLiteral(ctx, u8"Failed to import file"_j))), (frame[1].o));
	LINE_NUMBER(360);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	((func_mindustry_core_UI_showException_java_lang_String_java_lang_Throwable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showException_java_lang_String_java_lang_Throwable])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@save.import.invalid"_j))), (frame[1].o));
	}
label_17:;
	LINE_NUMBER(362);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_ClientLauncher_lambda$handleFileImport$1_mindustry_maps_Map(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ClientLauncher:lambda$handleFileImport$1", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ClientLauncher(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(355);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_maps;
	((func_mindustry_ui_dialogs_EditorMapsDialog_showMap_mindustry_maps_Map) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_EditorMapsDialog_showMap_mindustry_maps_Map])(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ClientLauncher_lambda$runOnClientLoad$0_java_lang_Runnable_mindustry_game_EventType$ClientLoadEvent(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ClientLauncher:lambda$runOnClientLoad$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ClientLauncher(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(329);
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, (frame[0].o)))(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ClientLauncher_lambda$update$0(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ClientLauncher:lambda$update$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(249);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	{ /* InvokeDynamic */
		clinit_mindustry_ClientLauncher_invoke_java_lang_Runnable_25(ctx);
		auto proxy = (mindustry_ClientLauncher_invoke_java_lang_Runnable_25 *) gcAlloc(ctx, &class_mindustry_ClientLauncher_invoke_java_lang_Runnable_25);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_Application_post_java_lang_Runnable) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_post_java_lang_Runnable, sp[0].o))(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ClientLauncher_lambda$update$1(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ClientLauncher:lambda$update$1", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(249);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	{ /* InvokeDynamic */
		clinit_mindustry_ClientLauncher_invoke_java_lang_Runnable_26(ctx);
		auto proxy = (mindustry_ClientLauncher_invoke_java_lang_Runnable_26 *) gcAlloc(ctx, &class_mindustry_ClientLauncher_invoke_java_lang_Runnable_26);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_Application_post_java_lang_Runnable) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_post_java_lang_Runnable, sp[0].o))(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ClientLauncher_lambda$update$2(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ClientLauncher:lambda$update$2", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(249);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	{ /* InvokeDynamic */
		clinit_mindustry_ClientLauncher_invoke_java_lang_Runnable_27(ctx);
		auto proxy = (mindustry_ClientLauncher_invoke_java_lang_Runnable_27 *) gcAlloc(ctx, &class_mindustry_ClientLauncher_invoke_java_lang_Runnable_27);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_Application_post_java_lang_Runnable) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_post_java_lang_Runnable, sp[0].o))(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ClientLauncher_lambda$update$3(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ClientLauncher:lambda$update$3", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(250);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_graphics;
	jint temp0 = (jint)((func_arc_Graphics_getWidth_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Graphics_getWidth_R_int])(ctx, sp[1].o);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_graphics;
	jint temp1 = (jint)((func_arc_Graphics_getHeight_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Graphics_getHeight_R_int])(ctx, sp[1].o);
	M_arc_ApplicationCore_resize_int_int(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(253);
	SM_mindustry_Vars_finishLaunch(ctx);
	LINE_NUMBER(254);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ClientLauncher_lambda$setup$11_arc_graphics_Texture(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ClientLauncher:lambda$setup$11", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ClientLauncher(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(192);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Texture$TextureWrap(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Texture$TextureWrap_repeat;
	((func_arc_graphics_Texture_setWrap_arc_graphics_Texture$TextureWrap) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Texture_setWrap_arc_graphics_Texture$TextureWrap])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ClientLauncher_lambda$setup$10(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ClientLauncher:lambda$setup$10", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ClientLauncher(ctx);
	{
	LINE_NUMBER(190);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_bases;
	((func_mindustry_ai_BaseRegistry_load) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_BaseRegistry_load])(ctx, sp[0].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ClientLauncher_lambda$setup$9(jcontext ctx) {
	FrameInfo frameInfo { "mindustry/ClientLauncher:lambda$setup$9", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

	clinit_mindustry_ClientLauncher(ctx);
	LINE_NUMBER(190);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_ClientLauncher_lambda$setup$8(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ClientLauncher:lambda$setup$8", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ClientLauncher(ctx);
	{
	LINE_NUMBER(187);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	((func_mindustry_core_ContentLoader_load) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_load])(ctx, sp[0].o);
	LINE_NUMBER(188);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_mods;
	((func_mindustry_mod_Mods_loadModPatches) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_Mods_loadModPatches])(ctx, sp[0].o);
	LINE_NUMBER(189);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ClientLauncher_lambda$setup$7(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ClientLauncher:lambda$setup$7", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ClientLauncher(ctx);
	{
	LINE_NUMBER(186);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	((func_mindustry_core_ContentLoader_init) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_init])(ctx, sp[0].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ClientLauncher_lambda$setup$6(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ClientLauncher:lambda$setup$6", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ClientLauncher(ctx);
	{
	LINE_NUMBER(175);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	SM_mindustry_ui_Fonts_mergeFontAtlas_arc_graphics_g2d_TextureAtlas(ctx, sp[0].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ClientLauncher_lambda$setup$5(jcontext ctx) {
	FrameInfo frameInfo { "mindustry/ClientLauncher:lambda$setup$5", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

	clinit_mindustry_ClientLauncher(ctx);
	LINE_NUMBER(175);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_ClientLauncher_lambda$setup$4(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ClientLauncher:lambda$setup$4", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ClientLauncher(ctx);
	{
	LINE_NUMBER(170);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_mods;
	printf("[ClientLauncher] loading mod scripts...\n"); fflush(stdout);
	((func_mindustry_mod_Mods_loadScripts) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_Mods_loadScripts])(ctx, sp[0].o);
	LINE_NUMBER(171);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	printf("[ClientLauncher] creating mod content...\n"); fflush(stdout);
	((func_mindustry_core_ContentLoader_createModContent) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_createModContent])(ctx, sp[0].o);
	printf("[ClientLauncher] mod content created!\n"); fflush(stdout);
	LINE_NUMBER(172);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ClientLauncher_lambda$setup$3(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ClientLauncher:lambda$setup$3", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ClientLauncher(ctx);
	{
	LINE_NUMBER(167);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	printf("[ClientLauncher] starting createBaseContent...\n"); fflush(stdout);
	((func_mindustry_core_ContentLoader_createBaseContent) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_createBaseContent])(ctx, sp[0].o);
	LINE_NUMBER(168);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	printf("[ClientLauncher] loading content colors...\n"); fflush(stdout);
	((func_mindustry_core_ContentLoader_loadColors) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_loadColors])(ctx, sp[0].o);
	printf("[ClientLauncher] content colors loaded!\n"); fflush(stdout);
	LINE_NUMBER(169);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ClientLauncher_lambda$setup$2(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ClientLauncher:lambda$setup$2", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ClientLauncher(ctx);
	{
	LINE_NUMBER(161);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_maps;
	((func_mindustry_maps_Maps_loadPreviews) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_maps_Maps_loadPreviews])(ctx, sp[0].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ClientLauncher_lambda$setup$1_arc_graphics_g2d_TextureAtlas(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ClientLauncher:lambda$setup$1", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ClientLauncher(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(160);
	clinit_arc_Core(ctx);
	SF_arc_Core_atlas = (frame[0].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat SM_mindustry_ClientLauncher_lambda$setup$0_R_float(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ClientLauncher:lambda$setup$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ClientLauncher(ctx);
	{
	LINE_NUMBER(85);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jfloat temp0 = (jfloat)((func_arc_Graphics_getDeltaTime_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_getDeltaTime_R_float])(ctx, sp[0].o);
	frame[0].f = (temp0 * (jfloat(60.0f)));
	LINE_NUMBER(86);
	jint temp1 = (jint)SM_java_lang_Float_isNaN_float_R_boolean(ctx, (frame[0].f));
	if (temp1 != 0) goto label_2;
	}
	{
	jint temp0 = (jint)SM_java_lang_Float_isInfinite_float_R_boolean(ctx, (frame[0].f));
	if (temp0 == 0) goto label_3;
	}
label_2:;
	INST_FCONST(1);
	goto label_4;
label_3:;
	{
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, (frame[0].f), (jfloat(1,000000e-04f)), (clinit_mindustry_Vars(ctx), (jfloat)SF_mindustry_Vars_maxDeltaClient));
	sp[0].f = temp0;
	sp += 1;
	}
label_4:;
	popStackFrame(ctx);
	INST_FRETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_ClientLauncher[] {
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
	(void *) M_mindustry_ClientLauncher_init,
	(void *) M_mindustry_ClientLauncher_resize_int_int,
	(void *) M_mindustry_ClientLauncher_update,
	(void *) M_mindustry_ClientLauncher_pause,
	(void *) M_mindustry_ClientLauncher_resume,
	(void *) M_arc_ApplicationCore_dispose,
	(void *) M_mindustry_ClientLauncher_exit,
	(void *) M_mindustry_ClientLauncher_fileDropped_arc_files_Fi,
	(void *) M_mindustry_ClientLauncher_add_arc_ApplicationListener,
	(void *) M_mindustry_ClientLauncher_setup,
	(void *) M_mindustry_core_Platform_loadJar_arc_files_Fi_java_lang_ClassLoader_R_java_lang_ClassLoader,
	(void *) M_mindustry_core_Platform_updateLobby,
	(void *) M_mindustry_core_Platform_inviteFriends,
	(void *) M_mindustry_core_Platform_publish_mindustry_type_Publishable,
	(void *) M_mindustry_core_Platform_viewListing_mindustry_type_Publishable,
	(void *) M_mindustry_core_Platform_viewListingID_java_lang_String,
	(void *) M_mindustry_core_Platform_getWorkshopContent_java_lang_Class_R_arc_struct_Seq,
	(void *) M_mindustry_core_Platform_openWorkshop,
	(void *) M_mindustry_core_Platform_getNet_R_mindustry_net_Net$NetProvider,
	(void *) M_mindustry_core_Platform_createScripts_R_mindustry_mod_Scripts,
	(void *) M_mindustry_core_Platform_getScriptContext_R_rhino_Context,
	(void *) M_mindustry_core_Platform_updateRPC,
	(void *) M_mindustry_core_Platform_getUUID_R_java_lang_String,
	(void *) M_mindustry_core_Platform_shareFile_arc_files_Fi,
	(void *) M_mindustry_core_Platform_showFileChooser_mindustry_ui_FileChooser$FileChooserParams,
	(void *) M_mindustry_core_Platform_hide,
	(void *) M_mindustry_core_Platform_beginForceLandscape,
	(void *) M_mindustry_core_Platform_endForceLandscape,
	(void *) M_mindustry_ClientLauncher_lambda$update$0,
	(void *) M_mindustry_ClientLauncher_lambda$update$1,
	(void *) M_mindustry_ClientLauncher_lambda$update$2,
	(void *) M_mindustry_ClientLauncher_lambda$update$3,
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
	{ "init", "()V" },
	{ "resize", "(II)V" },
	{ "update", "()V" },
	{ "pause", "()V" },
	{ "resume", "()V" },
	{ "dispose", "()V" },
	{ "exit", "()V" },
	{ "fileDropped", "(Larc/files/Fi;)V" },
	{ "add", "(Larc/ApplicationListener;)V" },
	{ "setup", "()V" },
	{ "loadJar", "(Larc/files/Fi;Ljava/lang/ClassLoader;)Ljava/lang/ClassLoader;" },
	{ "updateLobby", "()V" },
	{ "inviteFriends", "()V" },
	{ "publish", "(Lmindustry/type/Publishable;)V" },
	{ "viewListing", "(Lmindustry/type/Publishable;)V" },
	{ "viewListingID", "(Ljava/lang/String;)V" },
	{ "getWorkshopContent", "(Ljava/lang/Class;)Larc/struct/Seq;" },
	{ "openWorkshop", "()V" },
	{ "getNet", "()Lmindustry/net/Net$NetProvider;" },
	{ "createScripts", "()Lmindustry/mod/Scripts;" },
	{ "getScriptContext", "()Lrhino/Context;" },
	{ "updateRPC", "()V" },
	{ "getUUID", "()Ljava/lang/String;" },
	{ "shareFile", "(Larc/files/Fi;)V" },
	{ "showFileChooser", "(Lmindustry/ui/FileChooser$FileChooserParams;)V" },
	{ "hide", "()V" },
	{ "beginForceLandscape", "()V" },
	{ "endForceLandscape", "()V" },
	{ "lambda$update$0", "()V" },
	{ "lambda$update$1", "()V" },
	{ "lambda$update$2", "()V" },
	{ "lambda$update$3", "()V" },
};

static jclass interfaces[] { &class_mindustry_core_Platform, };

static FieldMetadata fields[] {
	{ "loadingFPS", &class_int, (intptr_t) &SF_mindustry_ClientLauncher_loadingFPS, "I", 26 },
	{ "nextFrame", &class_long, offsetof(mindustry_ClientLauncher, F_nextFrame), "J", 2 },
	{ "beginTime", &class_long, offsetof(mindustry_ClientLauncher, F_beginTime), "J", 2 },
	{ "lastTargetFps", &class_long, offsetof(mindustry_ClientLauncher, F_lastTargetFps), "J", 2 },
	{ "finished", &class_boolean, offsetof(mindustry_ClientLauncher, F_finished), "Z", 2 },
	{ "loader", &class_mindustry_graphics_LoadRenderer, offsetof(mindustry_ClientLauncher, F_loader), "Lmindustry/graphics/LoadRenderer;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ClientLauncher, 0, "()V", 1 },
	{ "setup", (intptr_t) M_mindustry_ClientLauncher_setup, VTABLE_mindustry_ClientLauncher_setup, "()V", 1 },
	{ "add", (intptr_t) M_mindustry_ClientLauncher_add_arc_ApplicationListener, VTABLE_mindustry_ClientLauncher_add_arc_ApplicationListener, "(Larc/ApplicationListener;)V", 1 },
	{ "resize", (intptr_t) M_mindustry_ClientLauncher_resize_int_int, VTABLE_mindustry_ClientLauncher_resize_int_int, "(II)V", 1 },
	{ "update", (intptr_t) M_mindustry_ClientLauncher_update, VTABLE_mindustry_ClientLauncher_update, "()V", 1 },
	{ "exit", (intptr_t) M_mindustry_ClientLauncher_exit, VTABLE_mindustry_ClientLauncher_exit, "()V", 1 },
	{ "init", (intptr_t) M_mindustry_ClientLauncher_init, VTABLE_mindustry_ClientLauncher_init, "()V", 1 },
	{ "resume", (intptr_t) M_mindustry_ClientLauncher_resume, VTABLE_mindustry_ClientLauncher_resume, "()V", 1 },
	{ "pause", (intptr_t) M_mindustry_ClientLauncher_pause, VTABLE_mindustry_ClientLauncher_pause, "()V", 1 },
	{ "fileDropped", (intptr_t) M_mindustry_ClientLauncher_fileDropped_arc_files_Fi, VTABLE_mindustry_ClientLauncher_fileDropped_arc_files_Fi, "(Larc/files/Fi;)V", 1 },
	{ "runOnClientLoad", (intptr_t) SM_mindustry_ClientLauncher_runOnClientLoad_java_lang_Runnable, 0, "(Ljava/lang/Runnable;)V", 9 },
	{ "handleFileImport", (intptr_t) SM_mindustry_ClientLauncher_handleFileImport_arc_files_Fi, 0, "(Larc/files/Fi;)V", 9 },
	{ "lambda$handleFileImport$0", (intptr_t) SM_mindustry_ClientLauncher_lambda$handleFileImport$0_arc_files_Fi, 0, "(Larc/files/Fi;)V", 4106 },
	{ "lambda$handleFileImport$1", (intptr_t) SM_mindustry_ClientLauncher_lambda$handleFileImport$1_mindustry_maps_Map, 0, "(Lmindustry/maps/Map;)V", 4106 },
	{ "lambda$runOnClientLoad$0", (intptr_t) SM_mindustry_ClientLauncher_lambda$runOnClientLoad$0_java_lang_Runnable_mindustry_game_EventType$ClientLoadEvent, 0, "(Ljava/lang/Runnable;Lmindustry/game/EventType$ClientLoadEvent;)V", 4106 },
	{ "lambda$update$0", (intptr_t) M_mindustry_ClientLauncher_lambda$update$0, VTABLE_mindustry_ClientLauncher_lambda$update$0, "()V", 4098 },
	{ "lambda$update$1", (intptr_t) M_mindustry_ClientLauncher_lambda$update$1, VTABLE_mindustry_ClientLauncher_lambda$update$1, "()V", 4098 },
	{ "lambda$update$2", (intptr_t) M_mindustry_ClientLauncher_lambda$update$2, VTABLE_mindustry_ClientLauncher_lambda$update$2, "()V", 4098 },
	{ "lambda$update$3", (intptr_t) M_mindustry_ClientLauncher_lambda$update$3, VTABLE_mindustry_ClientLauncher_lambda$update$3, "()V", 4098 },
	{ "lambda$setup$11", (intptr_t) SM_mindustry_ClientLauncher_lambda$setup$11_arc_graphics_Texture, 0, "(Larc/graphics/Texture;)V", 4106 },
	{ "lambda$setup$10", (intptr_t) SM_mindustry_ClientLauncher_lambda$setup$10, 0, "()V", 4106 },
	{ "lambda$setup$9", (intptr_t) SM_mindustry_ClientLauncher_lambda$setup$9, 0, "()V", 4106 },
	{ "lambda$setup$8", (intptr_t) SM_mindustry_ClientLauncher_lambda$setup$8, 0, "()V", 4106 },
	{ "lambda$setup$7", (intptr_t) SM_mindustry_ClientLauncher_lambda$setup$7, 0, "()V", 4106 },
	{ "lambda$setup$6", (intptr_t) SM_mindustry_ClientLauncher_lambda$setup$6, 0, "()V", 4106 },
	{ "lambda$setup$5", (intptr_t) SM_mindustry_ClientLauncher_lambda$setup$5, 0, "()V", 4106 },
	{ "lambda$setup$4", (intptr_t) SM_mindustry_ClientLauncher_lambda$setup$4, 0, "()V", 4106 },
	{ "lambda$setup$3", (intptr_t) SM_mindustry_ClientLauncher_lambda$setup$3, 0, "()V", 4106 },
	{ "lambda$setup$2", (intptr_t) SM_mindustry_ClientLauncher_lambda$setup$2, 0, "()V", 4106 },
	{ "lambda$setup$1", (intptr_t) SM_mindustry_ClientLauncher_lambda$setup$1_arc_graphics_g2d_TextureAtlas, 0, "(Larc/graphics/g2d/TextureAtlas;)V", 4106 },
	{ "lambda$setup$0", (intptr_t) SM_mindustry_ClientLauncher_lambda$setup$0_R_float, 0, "()F", 4106 },
};

Class class_mindustry_ClientLauncher{
		.nativeName = (intptr_t) "mindustry/ClientLauncher",
		.parentClass = (intptr_t) &class_arc_ApplicationCore,
		.size = sizeof(mindustry_ClientLauncher),
		.classVtable = (intptr_t) vtable_mindustry_ClientLauncher,
		.staticInitializer = (intptr_t) clinit_mindustry_ClientLauncher,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_ClientLauncher,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1057,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 6,
		.nativeFields = (intptr_t) fields,
		.methodCount = 31,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 43,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_ClientLauncher = registerClass(&class_mindustry_ClientLauncher);

}
