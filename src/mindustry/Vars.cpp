#include "mindustry/Vars.h"
#include "java/lang/Integer.h"
#include "mindustry/core/Version.h"
#include "arc/graphics/Color.h"
#include "mindustry/Vars_invoke_java_lang_Runnable_3.h"
#include "mindustry/Vars_invoke_java_lang_Runnable_2.h"
#include "java/lang/Runnable.h"
#include "java/io/PrintStream.h"
#include "mindustry/ai/BlockIndexer.h"
#include "mindustry/maps/Maps.h"
#include "mindustry/mod/Mods.h"
#include "java/util/Arrays.h"
#include "arc/util/serialization/Json.h"
#include "arc/struct/Seq.h"
#include "java/lang/reflect/Method.h"
#include "arc/util/OS.h"
#include "mindustry/world/Tile.h"
#include "arc/Settings.h"
#include "java/io/Reader.h"
#include "mindustry/game/EventType_ClientLoadEvent.h"
#include "arc/Core.h"
#include "java/util/Iterator.h"
#include "arc/util/Log.h"
#include "arc/Files.h"
#include "mindustry/input/Binding.h"
#include "mindustry/Vars_invoke_arc_func_Cons_3.h"
#include "arc/util/Time.h"
#include "mindustry/service/GameService.h"
#include "mindustry/mod/DataAssetCache.h"
#include "arc/util/Nullable.h"
#include "mindustry/Vars_invoke_arc_func_Cons_4.h"
#include "mindustry/Vars_invoke_arc_func_Cons_5.h"
#include "java/lang/Object.h"
#include "mindustry/game/Universe.h"
#include "arc/struct/ObjectMap.h"
#include "java/lang/System.h"
#include "mindustry/ui/fragments/ConsoleFragment.h"
#include "java/lang/Boolean.h"
#include "java/nio/charset/Charset.h"
#include "mindustry/game/FogControl.h"
#include "mindustry/graphics/CacheLayer.h"
#include "java/lang/Iterable.h"
#include "arc/func/Cons.h"
#include "mindustry/net/BeControl.h"
#include "mindustry/game/Waves.h"
#include "java/io/IOException.h"
#include "mindustry/core/Control.h"
#include "arc/util/Log_LogLevel.h"
#include "arc/input/KeyBind.h"
#include "arc/scene/ui/layout/Scl.h"
#include "mindustry/Vars_1.h"
#include "mindustry/async/PhysicsProcess.h"
#include "java/lang/annotation/Annotation.h"
#include "arc/assets/Loadable.h"
#include "mindustry/core/Platform.h"
#include "mindustry/io/JsonIO.h"
#include "mindustry/ai/ControlPathfinder.h"
#include "mindustry/game/EventType_ContentInitEvent.h"
#include "mindustry/core/NetServer.h"
#include "mindustry/Vars.h"
#include "mindustry/core/World.h"
#include "mindustry/editor/MapEditor.h"
#include "mindustry/async/AvoidanceProcess.h"
#include "arc/Events.h"
#include "arc/util/ColorCodes.h"
#include "java/io/Writer.h"
#include "mindustry/Vars_invoke_arc_func_Func_1.h"
#include "mindustry/ai/Pathfinder.h"
#include "mindustry/entities/EntityCollisions.h"
#include "java/lang/reflect/Constructor.h"
#include "arc/struct/StringMap.h"
#include "mindustry/core/ContentLoader.h"
#include "mindustry/core/Renderer.h"
#include "arc/util/I18NBundle.h"
#include "mindustry/net/ServerGroup.h"
#include "mindustry/Vars_invoke_arc_util_Log_LogHandler_2.h"
#include "java/lang/Throwable.h"
#include "java/util/Locale.h"
#include "mindustry/Vars_invoke_arc_util_Log_LogHandler_3.h"
#include "mindustry/maps/Map.h"
#include "java/lang/Exception.h"
#include "arc/func/Func.h"
#include "java/util/concurrent/ExecutorService.h"
#include "java/lang/reflect/Field.h"
#include "arc/util/Structs.h"
#include "mindustry/async/AsyncCore.h"
#include "mindustry/logic/GlobalVars.h"
#include "mindustry/core/Logic.h"
#include "mindustry/game/Schematics.h"
#include "mindustry/ai/WaveSpawner.h"
#include "mindustry/net/Net.h"
#include "mindustry/gen/Groups.h"
#include "mindustry/core/FileTree.h"
#include "arc/files/Fi.h"
#include "arc/util/io/PropertiesUtils.h"
#include "arc/Application.h"
#include "java/lang/String.h"
#include "java/lang/Character.h"
#include "java/util/Comparator.h"
#include "java/lang/Math.h"
#include "mindustry/core/NetClient.h"
#include "java/lang/Enum.h"
#include "mindustry/core/UI.h"
#include "java/lang/CharSequence.h"
#include "arc/util/Strings.h"
#include "mindustry/gen/Player.h"
#include "mindustry/ai/BaseRegistry.h"
#include "arc/util/Log_LogHandler.h"
#include "java/lang/Class.h"
#include "java/util/Objects.h"
#include "mindustry/ctype/ContentType.h"
#include "mindustry/core/GameState.h"

extern "C" {

jbool SF_mindustry_Vars_failedToLaunch;
jbool SF_mindustry_Vars_loadLocales;
jbool SF_mindustry_Vars_loadedLogger;
jbool SF_mindustry_Vars_loadedFileLogger;
jobject SF_mindustry_Vars_steamPlayerName;
jint SF_mindustry_Vars_minModGameVersion;
jint SF_mindustry_Vars_minJavaModGameVersion;
jbool SF_mindustry_Vars_showSectorSubmissions;
jbool SF_mindustry_Vars_forceBeServers;
jbool SF_mindustry_Vars_skipModCode;
jobject SF_mindustry_Vars_defaultContentIcons;
jint SF_mindustry_Vars_defaultEnv;
jint SF_mindustry_Vars_darkRadius;
jint SF_mindustry_Vars_maxLoadoutSchematicPad;
jobject SF_mindustry_Vars_schematicBaseStart;
jint SF_mindustry_Vars_bufferSize;
jobject SF_mindustry_Vars_charset;
jobject SF_mindustry_Vars_appName;
jobject SF_mindustry_Vars_ghApi;
jobject SF_mindustry_Vars_discordURL;
jobject SF_mindustry_Vars_modGuideURL;
jobject SF_mindustry_Vars_patchesGuideURL;
jobject SF_mindustry_Vars_serverJsonBeURLs;
jobject SF_mindustry_Vars_serverJsonURLs;
jobject SF_mindustry_Vars_modJsonURLs;
jobject SF_mindustry_Vars_steamBansURLs;
jobject SF_mindustry_Vars_reportIssueURL;
jobject SF_mindustry_Vars_defaultServers;
jobject SF_mindustry_Vars_cachedServers;
jint SF_mindustry_Vars_maxGlErrors;
jint SF_mindustry_Vars_maxBlockSize;
jfloat SF_mindustry_Vars_mineTransferRange;
jint SF_mindustry_Vars_maxPlayerPreviewPlans;
jint SF_mindustry_Vars_maxTextLength;
jint SF_mindustry_Vars_maxPingTextLength;
jint SF_mindustry_Vars_maxNameLength;
jfloat SF_mindustry_Vars_itemSize;
jfloat SF_mindustry_Vars_finalWorldBounds;
jfloat SF_mindustry_Vars_buildingRange;
jfloat SF_mindustry_Vars_unitCollisionRadiusScale;
jfloat SF_mindustry_Vars_itemTransferRange;
jfloat SF_mindustry_Vars_logicItemTransferRange;
jfloat SF_mindustry_Vars_turnDuration;
jfloat SF_mindustry_Vars_baseInvasionChance;
jfloat SF_mindustry_Vars_invasionGracePeriod;
jfloat SF_mindustry_Vars_minArmorDamage;
jint SF_mindustry_Vars_tilesize;
jfloat SF_mindustry_Vars_tilePayload;
jfloat SF_mindustry_Vars_iconXLarge;
jfloat SF_mindustry_Vars_iconLarge;
jfloat SF_mindustry_Vars_iconMed;
jfloat SF_mindustry_Vars_iconSmall;
jfloat SF_mindustry_Vars_macNotchHeight;
jbool SF_mindustry_Vars_updateEditorOnChange;
jobject SF_mindustry_Vars_playerColors;
jobject SF_mindustry_Vars_accessibleIcons;
jint SF_mindustry_Vars_maxTcpSize;
jint SF_mindustry_Vars_port;
jint SF_mindustry_Vars_multicastPort;
jint SF_mindustry_Vars_maxModSubtitleLength;
jobject SF_mindustry_Vars_multicastGroup;
jfloat SF_mindustry_Vars_maxDeltaClient;
jfloat SF_mindustry_Vars_maxDeltaServer;
jbool SF_mindustry_Vars_clientLoaded;
jbool SF_mindustry_Vars_hadSerpuloRemaps;
jint SF_mindustry_Vars_maxTextureSize;
jint SF_mindustry_Vars_maxSchematicSize;
jbool SF_mindustry_Vars_showSectorLandInfo;
jbool SF_mindustry_Vars_checkScreenshotMemory;
jbool SF_mindustry_Vars_confirmExit;
jbool SF_mindustry_Vars_disableUI;
jbool SF_mindustry_Vars_disableSave;
jbool SF_mindustry_Vars_testMobile;
jbool SF_mindustry_Vars_mobile;
jbool SF_mindustry_Vars_ios;
jbool SF_mindustry_Vars_android;
jbool SF_mindustry_Vars_headless;
jbool SF_mindustry_Vars_steam;
jbool SF_mindustry_Vars_clearSectors;
jbool SF_mindustry_Vars_enableLight;
jbool SF_mindustry_Vars_enableDarkness;
jbool SF_mindustry_Vars_debugDrawAvoidance;
jbool SF_mindustry_Vars_loadedServerCache;
jbool SF_mindustry_Vars_fetchedServers;
jobject SF_mindustry_Vars_dataDirectory;
jobject SF_mindustry_Vars_screenshotDirectory;
jobject SF_mindustry_Vars_customMapDirectory;
jobject SF_mindustry_Vars_mapPreviewDirectory;
jobject SF_mindustry_Vars_assetCacheDirectory;
jobject SF_mindustry_Vars_tmpDirectory;
jobject SF_mindustry_Vars_saveDirectory;
jobject SF_mindustry_Vars_modDirectory;
jobject SF_mindustry_Vars_schematicDirectory;
jobject SF_mindustry_Vars_bebuildDirectory;
jobject SF_mindustry_Vars_launchIDFile;
jobject SF_mindustry_Vars_serverCacheFile;
jobject SF_mindustry_Vars_emptyMap;
jobject SF_mindustry_Vars_emptyTile;
jobject SF_mindustry_Vars_mapExtension;
jobject SF_mindustry_Vars_saveExtension;
jobject SF_mindustry_Vars_schematicExtension;
jobject SF_mindustry_Vars_javaPath;
jobject SF_mindustry_Vars_locales;
jobject SF_mindustry_Vars_mainExecutor;
jobject SF_mindustry_Vars_tree;
jobject SF_mindustry_Vars_net;
jobject SF_mindustry_Vars_content;
jobject SF_mindustry_Vars_state;
jobject SF_mindustry_Vars_collisions;
jobject SF_mindustry_Vars_waves;
jobject SF_mindustry_Vars_platform;
jobject SF_mindustry_Vars_mods;
jobject SF_mindustry_Vars_schematics;
jobject SF_mindustry_Vars_becontrol;
jobject SF_mindustry_Vars_asyncCore;
jobject SF_mindustry_Vars_bases;
jobject SF_mindustry_Vars_logicVars;
jobject SF_mindustry_Vars_editor;
jobject SF_mindustry_Vars_avoidance;
jobject SF_mindustry_Vars_unitPhysics;
jobject SF_mindustry_Vars_assetCache;
jobject SF_mindustry_Vars_service;
jobject SF_mindustry_Vars_universe;
jobject SF_mindustry_Vars_world;
jobject SF_mindustry_Vars_maps;
jobject SF_mindustry_Vars_spawner;
jobject SF_mindustry_Vars_indexer;
jobject SF_mindustry_Vars_pathfinder;
jobject SF_mindustry_Vars_controlPath;
jobject SF_mindustry_Vars_fogControl;
jobject SF_mindustry_Vars_control;
jobject SF_mindustry_Vars_logic;
jobject SF_mindustry_Vars_renderer;
jobject SF_mindustry_Vars_ui;
jobject SF_mindustry_Vars_netServer;
jobject SF_mindustry_Vars_netClient;
jobject SF_mindustry_Vars_player;

void mark_mindustry_Vars(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_Vars_steamPlayerName)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_Vars_steamPlayerName)->clazz)->markFunction)((jobject) SF_mindustry_Vars_steamPlayerName, mark, depth + 1);
		if (SF_mindustry_Vars_defaultContentIcons)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_Vars_defaultContentIcons)->clazz)->markFunction)((jobject) SF_mindustry_Vars_defaultContentIcons, mark, depth + 1);
		if (SF_mindustry_Vars_schematicBaseStart)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_Vars_schematicBaseStart)->clazz)->markFunction)((jobject) SF_mindustry_Vars_schematicBaseStart, mark, depth + 1);
		if (SF_mindustry_Vars_charset)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_Vars_charset)->clazz)->markFunction)((jobject) SF_mindustry_Vars_charset, mark, depth + 1);
		if (SF_mindustry_Vars_appName)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_Vars_appName)->clazz)->markFunction)((jobject) SF_mindustry_Vars_appName, mark, depth + 1);
		if (SF_mindustry_Vars_ghApi)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_Vars_ghApi)->clazz)->markFunction)((jobject) SF_mindustry_Vars_ghApi, mark, depth + 1);
		if (SF_mindustry_Vars_discordURL)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_Vars_discordURL)->clazz)->markFunction)((jobject) SF_mindustry_Vars_discordURL, mark, depth + 1);
		if (SF_mindustry_Vars_modGuideURL)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_Vars_modGuideURL)->clazz)->markFunction)((jobject) SF_mindustry_Vars_modGuideURL, mark, depth + 1);
		if (SF_mindustry_Vars_patchesGuideURL)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_Vars_patchesGuideURL)->clazz)->markFunction)((jobject) SF_mindustry_Vars_patchesGuideURL, mark, depth + 1);
		if (SF_mindustry_Vars_serverJsonBeURLs)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_Vars_serverJsonBeURLs)->clazz)->markFunction)((jobject) SF_mindustry_Vars_serverJsonBeURLs, mark, depth + 1);
		if (SF_mindustry_Vars_serverJsonURLs)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_Vars_serverJsonURLs)->clazz)->markFunction)((jobject) SF_mindustry_Vars_serverJsonURLs, mark, depth + 1);
		if (SF_mindustry_Vars_modJsonURLs)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_Vars_modJsonURLs)->clazz)->markFunction)((jobject) SF_mindustry_Vars_modJsonURLs, mark, depth + 1);
		if (SF_mindustry_Vars_steamBansURLs)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_Vars_steamBansURLs)->clazz)->markFunction)((jobject) SF_mindustry_Vars_steamBansURLs, mark, depth + 1);
		if (SF_mindustry_Vars_reportIssueURL)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_Vars_reportIssueURL)->clazz)->markFunction)((jobject) SF_mindustry_Vars_reportIssueURL, mark, depth + 1);
		if (SF_mindustry_Vars_defaultServers)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_Vars_defaultServers)->clazz)->markFunction)((jobject) SF_mindustry_Vars_defaultServers, mark, depth + 1);
		if (SF_mindustry_Vars_cachedServers)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_Vars_cachedServers)->clazz)->markFunction)((jobject) SF_mindustry_Vars_cachedServers, mark, depth + 1);
		if (SF_mindustry_Vars_playerColors)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_Vars_playerColors)->clazz)->markFunction)((jobject) SF_mindustry_Vars_playerColors, mark, depth + 1);
		if (SF_mindustry_Vars_accessibleIcons)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_Vars_accessibleIcons)->clazz)->markFunction)((jobject) SF_mindustry_Vars_accessibleIcons, mark, depth + 1);
		if (SF_mindustry_Vars_multicastGroup)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_Vars_multicastGroup)->clazz)->markFunction)((jobject) SF_mindustry_Vars_multicastGroup, mark, depth + 1);
		if (SF_mindustry_Vars_dataDirectory)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_Vars_dataDirectory)->clazz)->markFunction)((jobject) SF_mindustry_Vars_dataDirectory, mark, depth + 1);
		if (SF_mindustry_Vars_screenshotDirectory)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_Vars_screenshotDirectory)->clazz)->markFunction)((jobject) SF_mindustry_Vars_screenshotDirectory, mark, depth + 1);
		if (SF_mindustry_Vars_customMapDirectory)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_Vars_customMapDirectory)->clazz)->markFunction)((jobject) SF_mindustry_Vars_customMapDirectory, mark, depth + 1);
		if (SF_mindustry_Vars_mapPreviewDirectory)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_Vars_mapPreviewDirectory)->clazz)->markFunction)((jobject) SF_mindustry_Vars_mapPreviewDirectory, mark, depth + 1);
		if (SF_mindustry_Vars_assetCacheDirectory)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_Vars_assetCacheDirectory)->clazz)->markFunction)((jobject) SF_mindustry_Vars_assetCacheDirectory, mark, depth + 1);
		if (SF_mindustry_Vars_tmpDirectory)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_Vars_tmpDirectory)->clazz)->markFunction)((jobject) SF_mindustry_Vars_tmpDirectory, mark, depth + 1);
		if (SF_mindustry_Vars_saveDirectory)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_Vars_saveDirectory)->clazz)->markFunction)((jobject) SF_mindustry_Vars_saveDirectory, mark, depth + 1);
		if (SF_mindustry_Vars_modDirectory)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_Vars_modDirectory)->clazz)->markFunction)((jobject) SF_mindustry_Vars_modDirectory, mark, depth + 1);
		if (SF_mindustry_Vars_schematicDirectory)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_Vars_schematicDirectory)->clazz)->markFunction)((jobject) SF_mindustry_Vars_schematicDirectory, mark, depth + 1);
		if (SF_mindustry_Vars_bebuildDirectory)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_Vars_bebuildDirectory)->clazz)->markFunction)((jobject) SF_mindustry_Vars_bebuildDirectory, mark, depth + 1);
		if (SF_mindustry_Vars_launchIDFile)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_Vars_launchIDFile)->clazz)->markFunction)((jobject) SF_mindustry_Vars_launchIDFile, mark, depth + 1);
		if (SF_mindustry_Vars_serverCacheFile)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_Vars_serverCacheFile)->clazz)->markFunction)((jobject) SF_mindustry_Vars_serverCacheFile, mark, depth + 1);
		if (SF_mindustry_Vars_emptyMap)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_Vars_emptyMap)->clazz)->markFunction)((jobject) SF_mindustry_Vars_emptyMap, mark, depth + 1);
		if (SF_mindustry_Vars_emptyTile)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_Vars_emptyTile)->clazz)->markFunction)((jobject) SF_mindustry_Vars_emptyTile, mark, depth + 1);
		if (SF_mindustry_Vars_mapExtension)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_Vars_mapExtension)->clazz)->markFunction)((jobject) SF_mindustry_Vars_mapExtension, mark, depth + 1);
		if (SF_mindustry_Vars_saveExtension)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_Vars_saveExtension)->clazz)->markFunction)((jobject) SF_mindustry_Vars_saveExtension, mark, depth + 1);
		if (SF_mindustry_Vars_schematicExtension)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_Vars_schematicExtension)->clazz)->markFunction)((jobject) SF_mindustry_Vars_schematicExtension, mark, depth + 1);
		if (SF_mindustry_Vars_javaPath)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_Vars_javaPath)->clazz)->markFunction)((jobject) SF_mindustry_Vars_javaPath, mark, depth + 1);
		if (SF_mindustry_Vars_locales)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_Vars_locales)->clazz)->markFunction)((jobject) SF_mindustry_Vars_locales, mark, depth + 1);
		if (SF_mindustry_Vars_mainExecutor)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_Vars_mainExecutor)->clazz)->markFunction)((jobject) SF_mindustry_Vars_mainExecutor, mark, depth + 1);
		if (SF_mindustry_Vars_tree)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_Vars_tree)->clazz)->markFunction)((jobject) SF_mindustry_Vars_tree, mark, depth + 1);
		if (SF_mindustry_Vars_net)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_Vars_net)->clazz)->markFunction)((jobject) SF_mindustry_Vars_net, mark, depth + 1);
		if (SF_mindustry_Vars_content)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_Vars_content)->clazz)->markFunction)((jobject) SF_mindustry_Vars_content, mark, depth + 1);
		if (SF_mindustry_Vars_state)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_Vars_state)->clazz)->markFunction)((jobject) SF_mindustry_Vars_state, mark, depth + 1);
		if (SF_mindustry_Vars_collisions)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_Vars_collisions)->clazz)->markFunction)((jobject) SF_mindustry_Vars_collisions, mark, depth + 1);
		if (SF_mindustry_Vars_waves)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_Vars_waves)->clazz)->markFunction)((jobject) SF_mindustry_Vars_waves, mark, depth + 1);
		if (SF_mindustry_Vars_platform)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_Vars_platform)->clazz)->markFunction)((jobject) SF_mindustry_Vars_platform, mark, depth + 1);
		if (SF_mindustry_Vars_mods)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_Vars_mods)->clazz)->markFunction)((jobject) SF_mindustry_Vars_mods, mark, depth + 1);
		if (SF_mindustry_Vars_schematics)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_Vars_schematics)->clazz)->markFunction)((jobject) SF_mindustry_Vars_schematics, mark, depth + 1);
		if (SF_mindustry_Vars_becontrol)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_Vars_becontrol)->clazz)->markFunction)((jobject) SF_mindustry_Vars_becontrol, mark, depth + 1);
		if (SF_mindustry_Vars_asyncCore)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_Vars_asyncCore)->clazz)->markFunction)((jobject) SF_mindustry_Vars_asyncCore, mark, depth + 1);
		if (SF_mindustry_Vars_bases)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_Vars_bases)->clazz)->markFunction)((jobject) SF_mindustry_Vars_bases, mark, depth + 1);
		if (SF_mindustry_Vars_logicVars)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_Vars_logicVars)->clazz)->markFunction)((jobject) SF_mindustry_Vars_logicVars, mark, depth + 1);
		if (SF_mindustry_Vars_editor)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_Vars_editor)->clazz)->markFunction)((jobject) SF_mindustry_Vars_editor, mark, depth + 1);
		if (SF_mindustry_Vars_avoidance)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_Vars_avoidance)->clazz)->markFunction)((jobject) SF_mindustry_Vars_avoidance, mark, depth + 1);
		if (SF_mindustry_Vars_unitPhysics)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_Vars_unitPhysics)->clazz)->markFunction)((jobject) SF_mindustry_Vars_unitPhysics, mark, depth + 1);
		if (SF_mindustry_Vars_assetCache)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_Vars_assetCache)->clazz)->markFunction)((jobject) SF_mindustry_Vars_assetCache, mark, depth + 1);
		if (SF_mindustry_Vars_service)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_Vars_service)->clazz)->markFunction)((jobject) SF_mindustry_Vars_service, mark, depth + 1);
		if (SF_mindustry_Vars_universe)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_Vars_universe)->clazz)->markFunction)((jobject) SF_mindustry_Vars_universe, mark, depth + 1);
		if (SF_mindustry_Vars_world)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_Vars_world)->clazz)->markFunction)((jobject) SF_mindustry_Vars_world, mark, depth + 1);
		if (SF_mindustry_Vars_maps)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_Vars_maps)->clazz)->markFunction)((jobject) SF_mindustry_Vars_maps, mark, depth + 1);
		if (SF_mindustry_Vars_spawner)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_Vars_spawner)->clazz)->markFunction)((jobject) SF_mindustry_Vars_spawner, mark, depth + 1);
		if (SF_mindustry_Vars_indexer)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_Vars_indexer)->clazz)->markFunction)((jobject) SF_mindustry_Vars_indexer, mark, depth + 1);
		if (SF_mindustry_Vars_pathfinder)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_Vars_pathfinder)->clazz)->markFunction)((jobject) SF_mindustry_Vars_pathfinder, mark, depth + 1);
		if (SF_mindustry_Vars_controlPath)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_Vars_controlPath)->clazz)->markFunction)((jobject) SF_mindustry_Vars_controlPath, mark, depth + 1);
		if (SF_mindustry_Vars_fogControl)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_Vars_fogControl)->clazz)->markFunction)((jobject) SF_mindustry_Vars_fogControl, mark, depth + 1);
		if (SF_mindustry_Vars_control)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_Vars_control)->clazz)->markFunction)((jobject) SF_mindustry_Vars_control, mark, depth + 1);
		if (SF_mindustry_Vars_logic)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_Vars_logic)->clazz)->markFunction)((jobject) SF_mindustry_Vars_logic, mark, depth + 1);
		if (SF_mindustry_Vars_renderer)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_Vars_renderer)->clazz)->markFunction)((jobject) SF_mindustry_Vars_renderer, mark, depth + 1);
		if (SF_mindustry_Vars_ui)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_Vars_ui)->clazz)->markFunction)((jobject) SF_mindustry_Vars_ui, mark, depth + 1);
		if (SF_mindustry_Vars_netServer)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_Vars_netServer)->clazz)->markFunction)((jobject) SF_mindustry_Vars_netServer, mark, depth + 1);
		if (SF_mindustry_Vars_netClient)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_Vars_netClient)->clazz)->markFunction)((jobject) SF_mindustry_Vars_netClient, mark, depth + 1);
		if (SF_mindustry_Vars_player)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_Vars_player)->clazz)->markFunction)((jobject) SF_mindustry_Vars_player, mark, depth + 1);
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
	auto self = (mindustry_Vars *) object;
}

void init_mindustry_Vars(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/Vars:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_Vars(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(43);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_Vars_loadAsync(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/Vars:loadAsync", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(307);
	SM_mindustry_Vars_loadSettings(ctx);
	LINE_NUMBER(308);
	SM_mindustry_Vars_init(ctx);
	LINE_NUMBER(309);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_Vars_init(jcontext ctx) {
	jtype frame[10];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/Vars:init", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_Vars(ctx);
	{
	LINE_NUMBER(312);
	SM_mindustry_gen_Groups_init(ctx);
	LINE_NUMBER(314);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_loadLocales) == 0) goto label_2;
	}
	{
	LINE_NUMBER(315);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_files;
	sp[0].o = (jobject)((func_arc_Files_internal_java_lang_String_R_arc_files_Fi) resolveInterfaceMethod(ctx, &class_arc_Files, INDEX_arc_Files_internal_java_lang_String_R_arc_files_Fi, sp[0].o))(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"locales"_j))));
	sp[0].o = (jobject)((func_arc_files_Fi_readString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_readString_R_java_lang_String])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_String_split_java_lang_String_R_Array1_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_split_java_lang_String_R_Array1_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"\n"_j))));
	frame[0].o = sp[0].o;
	LINE_NUMBER(316);
	sp[0].o = (jobject)createArray(ctx, &class_java_util_Locale, (((jarray) nullCheck(ctx, (frame[0].o)))->length));
	clinit_mindustry_Vars(ctx);
	SF_mindustry_Vars_locales = sp[0].o;
	LINE_NUMBER(317);
	frame[1].i = (jint(0));
	}
label_6:;
	{
	jint temp0 = frame[1].i;
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_locales;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_7;
	}
	{
	LINE_NUMBER(318);
	frame[2].o = ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[1].i)));
	LINE_NUMBER(319);
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"_"_j))));
	if (temp0 == 0) goto label_10;
	}
	{
	LINE_NUMBER(320);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_locales;
	jint temp0 = frame[1].i;
	clinit_java_util_Locale(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_Locale);
	sp[2].o = (jobject)((func_java_lang_String_split_java_lang_String_R_Array1_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_split_java_lang_String_R_Array1_java_lang_String])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"_"_j))));
	sp[2].o = (jobject)ARRAY_ACCESS(jobject, sp[2].o, (jint(0)));
	sp[3].o = (jobject)((func_java_lang_String_split_java_lang_String_R_Array1_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_split_java_lang_String_R_Array1_java_lang_String])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"_"_j))));
	init_java_util_Locale_java_lang_String_java_lang_String(ctx, sp[1].o, sp[2].o, ((jobject)ARRAY_ACCESS(jobject, sp[3].o, (jint(1)))));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	goto label_12;
	}
label_10:;
	{
	LINE_NUMBER(322);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_locales;
	jint temp0 = frame[1].i;
	clinit_java_util_Locale(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_Locale);
	init_java_util_Locale_java_lang_String(ctx, sp[1].o, (frame[2].o));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	}
label_12:;
	{
	LINE_NUMBER(317);
	INST_IINC(1, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(326);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_locales;
	{ /* InvokeDynamic */
		clinit_mindustry_Vars_invoke_arc_func_Func_1(ctx);
		auto proxy = (mindustry_Vars_invoke_arc_func_Func_1 *) gcAlloc(ctx, &class_mindustry_Vars_invoke_arc_func_Func_1);
		sp[1].o = (jobject) proxy;
	}
	clinit_java_lang_String(ctx);
	sp[2].o = (jobject)SF_java_lang_String_CASE_INSENSITIVE_ORDER;
	sp[1].o = (jobject)SM_arc_util_Structs_comparing_arc_func_Func_java_util_Comparator_R_java_util_Comparator(ctx, sp[1].o, sp[2].o);
	SM_java_util_Arrays_sort_Array1_java_lang_Object_java_util_Comparator(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(327);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_locales;
	sp[0].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, sp[0].o);
	clinit_java_util_Locale(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_Locale);
	init_java_util_Locale_java_lang_String(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"router"_j))));
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_toArray_java_lang_Class_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_toArray_java_lang_Class_R_Array1_java_lang_Object])(ctx, sp[0].o, (((jobject) &class_java_util_Locale)));
	clinit_mindustry_Vars(ctx);
	SF_mindustry_Vars_locales = (checkCast(ctx, getArrayClass(&class_java_util_Locale, 1), sp[0].o));
	}
label_2:;
	{
	LINE_NUMBER(330);
	SM_mindustry_core_Version_init(ctx);
	LINE_NUMBER(331);
	SM_mindustry_graphics_CacheLayer_init(ctx);
	LINE_NUMBER(333);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_headless) != 0) goto label_16;
	}
	{
	LINE_NUMBER(334);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"[Mindustry] Version: @"_j));
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[2].o = (jobject)SM_mindustry_core_Version_buildString_R_java_lang_String(ctx);
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	SM_arc_util_Log_info_java_lang_String_Array1_java_lang_Object(ctx, sp[0].o, sp[1].o);
	}
label_16:;
	{
	LINE_NUMBER(337);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[0].o = (jobject)((func_arc_Settings_getDataDirectory_R_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getDataDirectory_R_arc_files_Fi])(ctx, sp[0].o);
	clinit_mindustry_Vars(ctx);
	SF_mindustry_Vars_dataDirectory = sp[0].o;
	LINE_NUMBER(338);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_dataDirectory;
	sp[0].o = (jobject)((func_arc_files_Fi_child_java_lang_String_R_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_child_java_lang_String_R_arc_files_Fi])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"screenshots/"_j))));
	clinit_mindustry_Vars(ctx);
	SF_mindustry_Vars_screenshotDirectory = sp[0].o;
	LINE_NUMBER(339);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_dataDirectory;
	sp[0].o = (jobject)((func_arc_files_Fi_child_java_lang_String_R_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_child_java_lang_String_R_arc_files_Fi])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"maps/"_j))));
	clinit_mindustry_Vars(ctx);
	SF_mindustry_Vars_customMapDirectory = sp[0].o;
	LINE_NUMBER(340);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_dataDirectory;
	sp[0].o = (jobject)((func_arc_files_Fi_child_java_lang_String_R_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_child_java_lang_String_R_arc_files_Fi])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"previews/"_j))));
	clinit_mindustry_Vars(ctx);
	SF_mindustry_Vars_mapPreviewDirectory = sp[0].o;
	LINE_NUMBER(341);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_dataDirectory;
	sp[0].o = (jobject)((func_arc_files_Fi_child_java_lang_String_R_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_child_java_lang_String_R_arc_files_Fi])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"saves/"_j))));
	clinit_mindustry_Vars(ctx);
	SF_mindustry_Vars_saveDirectory = sp[0].o;
	LINE_NUMBER(342);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_dataDirectory;
	sp[0].o = (jobject)((func_arc_files_Fi_child_java_lang_String_R_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_child_java_lang_String_R_arc_files_Fi])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"tmp/"_j))));
	clinit_mindustry_Vars(ctx);
	SF_mindustry_Vars_tmpDirectory = sp[0].o;
	LINE_NUMBER(343);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_dataDirectory;
	sp[0].o = (jobject)((func_arc_files_Fi_child_java_lang_String_R_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_child_java_lang_String_R_arc_files_Fi])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"mods/"_j))));
	clinit_mindustry_Vars(ctx);
	SF_mindustry_Vars_modDirectory = sp[0].o;
	LINE_NUMBER(344);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_dataDirectory;
	sp[0].o = (jobject)((func_arc_files_Fi_child_java_lang_String_R_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_child_java_lang_String_R_arc_files_Fi])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"assetCache"_j))));
	clinit_mindustry_Vars(ctx);
	SF_mindustry_Vars_assetCacheDirectory = sp[0].o;
	LINE_NUMBER(345);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_dataDirectory;
	sp[0].o = (jobject)((func_arc_files_Fi_child_java_lang_String_R_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_child_java_lang_String_R_arc_files_Fi])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"schematics/"_j))));
	clinit_mindustry_Vars(ctx);
	SF_mindustry_Vars_schematicDirectory = sp[0].o;
	LINE_NUMBER(346);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_dataDirectory;
	sp[0].o = (jobject)((func_arc_files_Fi_child_java_lang_String_R_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_child_java_lang_String_R_arc_files_Fi])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"be_builds/"_j))));
	clinit_mindustry_Vars(ctx);
	SF_mindustry_Vars_bebuildDirectory = sp[0].o;
	LINE_NUMBER(347);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_dataDirectory;
	sp[0].o = (jobject)((func_arc_files_Fi_child_java_lang_String_R_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_child_java_lang_String_R_arc_files_Fi])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"server_list.json"_j))));
	clinit_mindustry_Vars(ctx);
	SF_mindustry_Vars_serverCacheFile = sp[0].o;
	LINE_NUMBER(348);
	clinit_mindustry_maps_Map(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_maps_Map);
	clinit_arc_struct_StringMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_StringMap);
	init_arc_struct_StringMap(ctx, sp[1].o);
	init_mindustry_maps_Map_arc_struct_StringMap(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_Vars(ctx);
	SF_mindustry_Vars_emptyMap = sp[0].o;
	LINE_NUMBER(350);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_tree;
	if (sp[0].o != nullptr) goto label_30;
	}
	{
	clinit_mindustry_core_FileTree(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_core_FileTree);
	init_mindustry_core_FileTree(ctx, sp[0].o);
	clinit_mindustry_Vars(ctx);
	SF_mindustry_Vars_tree = sp[0].o;
	}
label_30:;
	{
	LINE_NUMBER(351);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_mods;
	if (sp[0].o != nullptr) goto label_31;
	}
	{
	clinit_mindustry_mod_Mods(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_mod_Mods);
	init_mindustry_mod_Mods(ctx, sp[0].o);
	clinit_mindustry_Vars(ctx);
	SF_mindustry_Vars_mods = sp[0].o;
	}
label_31:;
	{
	LINE_NUMBER(353);
	clinit_mindustry_core_ContentLoader(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_core_ContentLoader);
	init_mindustry_core_ContentLoader(ctx, sp[0].o);
	clinit_mindustry_Vars(ctx);
	SF_mindustry_Vars_content = sp[0].o;
	LINE_NUMBER(354);
	clinit_mindustry_game_Waves(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_Waves);
	init_mindustry_game_Waves(ctx, sp[0].o);
	clinit_mindustry_Vars(ctx);
	SF_mindustry_Vars_waves = sp[0].o;
	LINE_NUMBER(355);
	clinit_mindustry_entities_EntityCollisions(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_entities_EntityCollisions);
	init_mindustry_entities_EntityCollisions(ctx, sp[0].o);
	clinit_mindustry_Vars(ctx);
	SF_mindustry_Vars_collisions = sp[0].o;
	LINE_NUMBER(356);
	clinit_mindustry_core_World(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_core_World);
	init_mindustry_core_World(ctx, sp[0].o);
	clinit_mindustry_Vars(ctx);
	SF_mindustry_Vars_world = sp[0].o;
	LINE_NUMBER(357);
	clinit_mindustry_game_Universe(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_Universe);
	init_mindustry_game_Universe(ctx, sp[0].o);
	clinit_mindustry_Vars(ctx);
	SF_mindustry_Vars_universe = sp[0].o;
	LINE_NUMBER(358);
	clinit_mindustry_net_BeControl(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_net_BeControl);
	init_mindustry_net_BeControl(ctx, sp[0].o);
	clinit_mindustry_Vars(ctx);
	SF_mindustry_Vars_becontrol = sp[0].o;
	LINE_NUMBER(359);
	clinit_mindustry_async_AsyncCore(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_async_AsyncCore);
	init_mindustry_async_AsyncCore(ctx, sp[0].o);
	clinit_mindustry_Vars(ctx);
	SF_mindustry_Vars_asyncCore = sp[0].o;
	LINE_NUMBER(360);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_headless) != 0) goto label_39;
	}
	{
	clinit_mindustry_editor_MapEditor(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_editor_MapEditor);
	init_mindustry_editor_MapEditor(ctx, sp[0].o);
	clinit_mindustry_Vars(ctx);
	SF_mindustry_Vars_editor = sp[0].o;
	}
label_39:;
	{
	LINE_NUMBER(362);
	clinit_mindustry_maps_Maps(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_maps_Maps);
	init_mindustry_maps_Maps(ctx, sp[0].o);
	clinit_mindustry_Vars(ctx);
	SF_mindustry_Vars_maps = sp[0].o;
	LINE_NUMBER(363);
	clinit_mindustry_ai_WaveSpawner(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ai_WaveSpawner);
	init_mindustry_ai_WaveSpawner(ctx, sp[0].o);
	clinit_mindustry_Vars(ctx);
	SF_mindustry_Vars_spawner = sp[0].o;
	LINE_NUMBER(364);
	clinit_mindustry_ai_BlockIndexer(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ai_BlockIndexer);
	init_mindustry_ai_BlockIndexer(ctx, sp[0].o);
	clinit_mindustry_Vars(ctx);
	SF_mindustry_Vars_indexer = sp[0].o;
	LINE_NUMBER(365);
	clinit_mindustry_ai_Pathfinder(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ai_Pathfinder);
	init_mindustry_ai_Pathfinder(ctx, sp[0].o);
	clinit_mindustry_Vars(ctx);
	SF_mindustry_Vars_pathfinder = sp[0].o;
	LINE_NUMBER(366);
	clinit_mindustry_ai_ControlPathfinder(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ai_ControlPathfinder);
	init_mindustry_ai_ControlPathfinder(ctx, sp[0].o);
	clinit_mindustry_Vars(ctx);
	SF_mindustry_Vars_controlPath = sp[0].o;
	LINE_NUMBER(367);
	clinit_mindustry_game_FogControl(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_FogControl);
	init_mindustry_game_FogControl(ctx, sp[0].o);
	clinit_mindustry_Vars(ctx);
	SF_mindustry_Vars_fogControl = sp[0].o;
	LINE_NUMBER(368);
	clinit_mindustry_ai_BaseRegistry(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ai_BaseRegistry);
	init_mindustry_ai_BaseRegistry(ctx, sp[0].o);
	clinit_mindustry_Vars(ctx);
	SF_mindustry_Vars_bases = sp[0].o;
	LINE_NUMBER(369);
	clinit_mindustry_logic_GlobalVars(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_GlobalVars);
	init_mindustry_logic_GlobalVars(ctx, sp[0].o);
	clinit_mindustry_Vars(ctx);
	SF_mindustry_Vars_logicVars = sp[0].o;
	LINE_NUMBER(370);
	clinit_mindustry_mod_DataAssetCache(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_mod_DataAssetCache);
	init_mindustry_mod_DataAssetCache(ctx, sp[0].o);
	clinit_mindustry_Vars(ctx);
	SF_mindustry_Vars_assetCache = sp[0].o;
	LINE_NUMBER(372);
	clinit_arc_files_Fi(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_files_Fi);
	sp[1].o = (jobject)SM_arc_util_OS_prop_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"java.home"_j))));
	init_arc_files_Fi_java_lang_String(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_files_Fi_child_java_lang_String_R_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_child_java_lang_String_R_arc_files_Fi])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"bin/java"_j))));
	jint temp0 = (jint)((func_arc_files_Fi_exists_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_exists_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_49;
	}
	{
	clinit_arc_files_Fi(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_files_Fi);
	sp[1].o = (jobject)SM_arc_util_OS_prop_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"java.home"_j))));
	init_arc_files_Fi_java_lang_String(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_files_Fi_child_java_lang_String_R_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_child_java_lang_String_R_arc_files_Fi])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"bin/java"_j))));
	sp[0].o = (jobject)((func_arc_files_Fi_absolutePath_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_absolutePath_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	goto label_50;
	}
label_49:;
	{
	LINE_NUMBER(373);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_files;
	sp[0].o = (jobject)((func_arc_Files_local_java_lang_String_R_arc_files_Fi) resolveInterfaceMethod(ctx, &class_arc_Files, INDEX_arc_Files_local_java_lang_String_R_arc_files_Fi, sp[0].o))(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"jre/bin/java"_j))));
	jint temp0 = (jint)((func_arc_files_Fi_exists_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_exists_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_51;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_files;
	sp[0].o = (jobject)((func_arc_Files_local_java_lang_String_R_arc_files_Fi) resolveInterfaceMethod(ctx, &class_arc_Files, INDEX_arc_Files_local_java_lang_String_R_arc_files_Fi, sp[0].o))(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"jre/bin/java"_j))));
	sp[0].o = (jobject)((func_arc_files_Fi_absolutePath_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_absolutePath_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	goto label_50;
	}
label_51:;
	{
	LINE_NUMBER(374);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_files;
	sp[0].o = (jobject)((func_arc_Files_local_java_lang_String_R_arc_files_Fi) resolveInterfaceMethod(ctx, &class_arc_Files, INDEX_arc_Files_local_java_lang_String_R_arc_files_Fi, sp[0].o))(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"jre/bin/java.exe"_j))));
	jint temp0 = (jint)((func_arc_files_Fi_exists_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_exists_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_52;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_files;
	sp[0].o = (jobject)((func_arc_Files_local_java_lang_String_R_arc_files_Fi) resolveInterfaceMethod(ctx, &class_arc_Files, INDEX_arc_Files_local_java_lang_String_R_arc_files_Fi, sp[0].o))(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"jre/bin/java.exe"_j))));
	sp[0].o = (jobject)((func_arc_files_Fi_absolutePath_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_absolutePath_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	goto label_50;
	}
label_52:;
	LINE_NUMBER(375);
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"java"_j));
label_50:;
	{
	sp -= 1;
	clinit_mindustry_Vars(ctx);
	SF_mindustry_Vars_javaPath = sp[0].o;
	LINE_NUMBER(377);
	clinit_mindustry_core_GameState(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_core_GameState);
	init_mindustry_core_GameState(ctx, sp[0].o);
	clinit_mindustry_Vars(ctx);
	SF_mindustry_Vars_state = sp[0].o;
	LINE_NUMBER(379);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	jint temp0 = (jint)((func_arc_Application_isMobile_R_boolean) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_isMobile_R_boolean, sp[0].o))(ctx, sp[0].o);
	if (temp0 != 0) goto label_55;
	}
	clinit_mindustry_Vars(ctx);
	(sp++)->i = SF_mindustry_Vars_testMobile;
	if ((--sp)->i == 0) goto label_56;
label_55:;
	INST_ICONST(1);
	goto label_57;
label_56:;
	INST_ICONST(0);
label_57:;
	{
	sp -= 1;
	clinit_mindustry_Vars(ctx);
	SF_mindustry_Vars_mobile = sp[0].i;
	LINE_NUMBER(380);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	jint temp0 = (jint)((func_arc_Application_isIOS_R_boolean) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_isIOS_R_boolean, sp[0].o))(ctx, sp[0].o);
	clinit_mindustry_Vars(ctx);
	SF_mindustry_Vars_ios = temp0;
	LINE_NUMBER(381);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	jint temp1 = (jint)((func_arc_Application_isAndroid_R_boolean) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_isAndroid_R_boolean, sp[0].o))(ctx, sp[0].o);
	clinit_mindustry_Vars(ctx);
	SF_mindustry_Vars_android = temp1;
	LINE_NUMBER(383);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_becontrol;
	((func_mindustry_net_BeControl_init) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_BeControl_init])(ctx, sp[0].o);
	LINE_NUMBER(385);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_modDirectory;
	jint temp2 = (jint)((func_arc_files_Fi_mkdirs_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_mkdirs_R_boolean])(ctx, sp[0].o);
	LINE_NUMBER(387);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$ContentInitEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_Vars_invoke_arc_func_Cons_3(ctx);
		auto proxy = (mindustry_Vars_invoke_arc_func_Cons_3 *) gcAlloc(ctx, &class_mindustry_Vars_invoke_arc_func_Cons_3);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(391);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_assetCache;
	((func_mindustry_mod_DataAssetCache_load) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataAssetCache_load])(ctx, sp[0].o);
	LINE_NUMBER(392);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_mods;
	((func_mindustry_mod_Mods_load) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_Mods_load])(ctx, sp[0].o);
	LINE_NUMBER(393);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_maps;
	((func_mindustry_maps_Maps_load) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_maps_Maps_load])(ctx, sp[0].o);
	LINE_NUMBER(394);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_Vars_checkLaunch(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/Vars:checkLaunch", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_Vars(ctx);
	{
	LINE_NUMBER(399);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	((func_arc_Settings_setAppName_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_setAppName_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Mindustry"_j))));
	LINE_NUMBER(400);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[0].o = (jobject)((func_arc_Settings_getDataDirectory_R_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getDataDirectory_R_arc_files_Fi])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_files_Fi_child_java_lang_String_R_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_child_java_lang_String_R_arc_files_Fi])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"launchid.dat"_j))));
	clinit_mindustry_Vars(ctx);
	SF_mindustry_Vars_launchIDFile = sp[0].o;
	LINE_NUMBER(402);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_launchIDFile;
	jint temp0 = (jint)((func_arc_files_Fi_exists_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_exists_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(403);
	clinit_mindustry_Vars(ctx);
	SF_mindustry_Vars_failedToLaunch = (jint(1));
	goto label_5;
	}
label_3:;
	{
	LINE_NUMBER(405);
	clinit_mindustry_Vars(ctx);
	SF_mindustry_Vars_failedToLaunch = (jint(0));
	LINE_NUMBER(406);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_launchIDFile;
	((func_arc_files_Fi_writeString_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_writeString_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"go away"_j))));
	}
label_5:;
	LINE_NUMBER(408);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_Vars_finishLaunch(jcontext ctx) {
	jtype frame[3];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/Vars:finishLaunch", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_Vars(ctx);
	{
	LINE_NUMBER(412);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"lastBuild"_j));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (clinit_mindustry_core_Version(ctx), (jint)SF_mindustry_core_Version_build));
	((func_arc_Settings_put_java_lang_String_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_put_java_lang_String_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(413);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"lastBuildString"_j));
	sp[2].o = (jobject)SM_mindustry_core_Version_buildString_R_java_lang_String(ctx);
	((func_arc_Settings_put_java_lang_String_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_put_java_lang_String_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(415);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_launchIDFile;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(416);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_launchIDFile;
	jint temp0 = (jint)((func_arc_files_Fi_delete_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_delete_R_boolean])(ctx, sp[0].o);
	}
label_3:;
	LINE_NUMBER(418);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_Vars_loadLogger(jcontext ctx) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/Vars:loadLogger", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_Vars(ctx);
	{
	LINE_NUMBER(421);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_loadedLogger) == 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(423);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(5)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"[green][D][]"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"[royal][I][]"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(2))) = (((jobject) createStringLiteral(ctx, u8"[yellow][W][]"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(3))) = (((jobject) createStringLiteral(ctx, u8"[scarlet][E][]"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(4))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	frame[0].o = sp[0].o;
	LINE_NUMBER(424);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(5)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"&lc&fb[D]"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"&lb&fb[I]"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(2))) = (((jobject) createStringLiteral(ctx, u8"&ly&fb[W]"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(3))) = (((jobject) createStringLiteral(ctx, u8"&lr&fb[E]"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(4))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	frame[1].o = sp[0].o;
	LINE_NUMBER(426);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(427);
	{ /* InvokeDynamic */
		clinit_mindustry_Vars_invoke_arc_util_Log$LogHandler_2(ctx);
		auto proxy = (mindustry_Vars_invoke_arc_util_Log$LogHandler_2 *) gcAlloc(ctx, &class_mindustry_Vars_invoke_arc_util_Log$LogHandler_2);
		proxy->F_field2 = (jref) (frame[0].o);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[0].o = (jobject) proxy;
	}
	clinit_arc_util_Log(ctx);
	SF_arc_util_Log_logger = sp[0].o;
	LINE_NUMBER(449);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$ClientLoadEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_Vars_invoke_arc_func_Cons_4(ctx);
		auto proxy = (mindustry_Vars_invoke_arc_func_Cons_4 *) gcAlloc(ctx, &class_mindustry_Vars_invoke_arc_func_Cons_4);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(451);
	clinit_mindustry_Vars(ctx);
	SF_mindustry_Vars_loadedLogger = (jint(1));
	LINE_NUMBER(452);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_Vars_loadFileLogger(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/Vars:loadFileLogger", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_Vars(ctx);
	{
	LINE_NUMBER(455);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_loadedFileLogger) == 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(457);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	((func_arc_Settings_setAppName_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_setAppName_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Mindustry"_j))));
	LINE_NUMBER(459);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[0].o = (jobject)((func_arc_Settings_getDataDirectory_R_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getDataDirectory_R_arc_files_Fi])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_files_Fi_child_java_lang_String_R_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_child_java_lang_String_R_arc_files_Fi])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"last_log.txt"_j))));
	SM_mindustry_Vars_loadFileLogger_arc_files_Fi(ctx, sp[0].o);
	LINE_NUMBER(460);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_Vars_loadFileLogger_arc_files_Fi(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/Vars:loadFileLogger", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_Vars(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(463);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_loadedFileLogger) == 0) goto label_5;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_5:;
	{
	LINE_NUMBER(465);
	sp[0].o = (jobject)((func_arc_files_Fi_parent_R_arc_files_Fi) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_files_Fi_parent_R_arc_files_Fi])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_arc_files_Fi_exists_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_exists_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_0;
	}
	{
	LINE_NUMBER(466);
	sp[0].o = (jobject)((func_arc_files_Fi_parent_R_arc_files_Fi) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_files_Fi_parent_R_arc_files_Fi])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_arc_files_Fi_mkdirs_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_mkdirs_R_boolean])(ctx, sp[0].o);
	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(470);
	sp[0].o = (jobject)((func_arc_files_Fi_writer_boolean_R_java_io_Writer) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_files_Fi_writer_boolean_R_java_io_Writer])(ctx, (frame[0].o), (jint(0)));
	frame[1].o = sp[0].o;
	LINE_NUMBER(471);
	clinit_arc_util_Log(ctx);
	sp[0].o = (jobject)SF_arc_util_Log_logger;
	frame[2].o = sp[0].o;
	LINE_NUMBER(472);
	{ /* InvokeDynamic */
		clinit_mindustry_Vars_invoke_arc_util_Log$LogHandler_3(ctx);
		auto proxy = (mindustry_Vars_invoke_arc_util_Log$LogHandler_3 *) gcAlloc(ctx, &class_mindustry_Vars_invoke_arc_util_Log$LogHandler_3);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[0].o = (jobject) proxy;
	}
	clinit_arc_util_Log(ctx);
	SF_arc_util_Log_logger = sp[0].o;
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(486);
	goto label_9;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(483);
	frame[1].o = sp[0].o;
	LINE_NUMBER(485);
	SM_arc_util_Log_err_java_lang_Throwable(ctx, (frame[1].o));
	}
label_9:;
	{
	LINE_NUMBER(488);
	clinit_mindustry_Vars(ctx);
	SF_mindustry_Vars_loadedFileLogger = (jint(1));
	LINE_NUMBER(489);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_Vars_loadSettings(jcontext ctx) {
	jtype frame[13];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/Vars:loadSettings", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_Vars(ctx);
	{
	LINE_NUMBER(492);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	clinit_mindustry_io_JsonIO(ctx);
	sp[1].o = (jobject)SF_mindustry_io_JsonIO_json;
	((func_arc_Settings_setJson_arc_util_serialization_Json) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_setJson_arc_util_serialization_Json])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(493);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	((func_arc_Settings_setAppName_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_setAppName_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Mindustry"_j))));
	LINE_NUMBER(495);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_steam) != 0) goto label_7;
	}
	clinit_mindustry_core_Version(ctx);
	(sp++)->i = SF_mindustry_core_Version_isSteam;
	if ((--sp)->i == 0) goto label_8;
label_7:;
	{
	LINE_NUMBER(496);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_files;
	sp[1].o = (jobject)((func_arc_Files_local_java_lang_String_R_arc_files_Fi) resolveInterfaceMethod(ctx, &class_arc_Files, INDEX_arc_Files_local_java_lang_String_R_arc_files_Fi, sp[1].o))(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"saves/"_j))));
	((func_arc_Settings_setDataDirectory_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_setDataDirectory_arc_files_Fi])(ctx, sp[0].o, sp[1].o);
	}
label_8:;
	{
	LINE_NUMBER(500);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	jint temp0 = (jint)((func_arc_Application_isAndroid_R_boolean) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_isAndroid_R_boolean, sp[0].o))(ctx, sp[0].o);
	clinit_mindustry_Vars(ctx);
	SF_mindustry_Vars_android = temp0;
	LINE_NUMBER(501);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(4)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"locale"_j)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"default"_j)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(2))) = (((jobject) createStringLiteral(ctx, u8"blocksync"_j)));
	jint temp1 = jint(3);
	sp[2].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, (jint(1)));
	ARRAY_ACCESS(jobject, sp[1].o, temp1) = sp[2].o;
	((func_arc_Settings_defaults_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_defaults_Array1_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(502);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	((func_arc_Settings_setAutosave_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_setAutosave_boolean])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(503);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	((func_arc_Settings_load) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_load])(ctx, sp[0].o);
	LINE_NUMBER(506);
	clinit_arc_input_KeyBind(ctx);
	sp[0].o = (jobject)SF_arc_input_KeyBind_all;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[0].o = sp[0].o;
	}
label_13:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[0].o)))(ctx, (frame[0].o));
	if (temp0 == 0) goto label_14;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[0].o)))(ctx, (frame[0].o));
	frame[1].o = (checkCast(ctx, &class_arc_input_KeyBind, sp[0].o));
	LINE_NUMBER(507);
	((func_arc_input_KeyBind_load) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_input_KeyBind_load])(ctx, (frame[1].o));
	LINE_NUMBER(508);
	goto label_13;
	}
label_14:;
	{
	LINE_NUMBER(510);
	SM_mindustry_input_Binding_init(ctx);
	LINE_NUMBER(513);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	jint temp0 = (jint)((func_arc_Settings_getInt_java_lang_String_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getInt_java_lang_String_R_int])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"uiscale"_j))));
	if (temp0 != (jint(5))) goto label_18;
	}
	{
	LINE_NUMBER(514);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"uiscale"_j));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (100));
	((func_arc_Settings_put_java_lang_String_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_put_java_lang_String_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_18:;
	{
	LINE_NUMBER(517);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	jint temp0 = (jint)((func_arc_Settings_getInt_java_lang_String_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getInt_java_lang_String_int_R_int])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"uiscale"_j))), (100));
	jint temp1 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, temp0, (25));
	SM_arc_scene_ui_layout_Scl_setProduct_float(ctx, ((jfloat(temp1)) / (jfloat(100.0f))));
	LINE_NUMBER(519);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_loadLocales) != 0) goto label_0;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_0:;
	goto label_2;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(533);
	frame[0].o = sp[0].o;
	LINE_NUMBER(536);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_files;
	sp[0].o = (jobject)((func_arc_Files_internal_java_lang_String_R_arc_files_Fi) resolveInterfaceMethod(ctx, &class_arc_Files, INDEX_arc_Files_internal_java_lang_String_R_arc_files_Fi, sp[0].o))(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"bundles/bundle"_j))));
	frame[1].o = sp[0].o;
	LINE_NUMBER(538);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[0].o = (jobject)((func_arc_Settings_getString_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getString_java_lang_String_R_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"locale"_j))));
	frame[3].o = sp[0].o;
	LINE_NUMBER(539);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"default"_j))));
	if (temp0 == 0) goto label_30;
	}
	{
	LINE_NUMBER(540);
	sp[0].o = (jobject)SM_java_util_Locale_getDefault_R_java_util_Locale(ctx);
	frame[2].o = sp[0].o;
	goto label_33;
	}
label_30:;
	{
	LINE_NUMBER(543);
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"_"_j))));
	if (temp0 == 0) goto label_34;
	}
	{
	LINE_NUMBER(544);
	sp[0].o = (jobject)((func_java_lang_String_split_java_lang_String_R_Array1_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_split_java_lang_String_R_Array1_java_lang_String])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"_"_j))));
	frame[5].o = sp[0].o;
	LINE_NUMBER(545);
	clinit_java_util_Locale(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Locale);
	init_java_util_Locale_java_lang_String_java_lang_String(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(0)))), ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(1)))));
	frame[4].o = sp[0].o;
	LINE_NUMBER(546);
	goto label_38;
	}
label_34:;
	{
	LINE_NUMBER(547);
	clinit_java_util_Locale(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Locale);
	init_java_util_Locale_java_lang_String(ctx, sp[0].o, (frame[3].o));
	frame[4].o = sp[0].o;
	}
label_38:;
	{
	LINE_NUMBER(550);
	frame[2].o = (frame[4].o);
	}
label_33:;
	{
	LINE_NUMBER(553);
	SM_java_util_Locale_setDefault_java_util_Locale(ctx, (frame[2].o));
	LINE_NUMBER(554);
	sp[0].o = (jobject)SM_arc_util_I18NBundle_createBundle_arc_files_Fi_java_util_Locale_R_arc_util_I18NBundle(ctx, (frame[1].o), (frame[2].o));
	clinit_arc_Core(ctx);
	SF_arc_Core_bundle = sp[0].o;
	LINE_NUMBER(557);
	sp[0].o = (jobject)((func_java_util_Locale_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_util_Locale_toString_R_java_lang_String])(ctx, (frame[2].o));
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"router"_j))));
	if (temp0 == 0) goto label_26;
	}
	{
	LINE_NUMBER(558);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_files;
	sp[0].o = (jobject)((func_arc_Files_internal_java_lang_String_R_arc_files_Fi) resolveInterfaceMethod(ctx, &class_arc_Files, INDEX_arc_Files_internal_java_lang_String_R_arc_files_Fi, sp[0].o))(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"bundles/bundle"_j))));
	sp[0].o = (jobject)SM_arc_util_I18NBundle_createBundle_arc_files_Fi_R_arc_util_I18NBundle(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(559);
	sp[0].o = (jobject)SM_java_lang_Character_toString_char_R_java_lang_String(ctx, (jint(63630)));
	frame[5].o = sp[0].o;
	LINE_NUMBER(560);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[0].o = (jobject)((func_arc_util_I18NBundle_getKeys_R_java_lang_Iterable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_getKeys_R_java_lang_Iterable])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_Iterable_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_lang_Iterable, INDEX_java_lang_Iterable_iterator_R_java_util_Iterator, sp[0].o))(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	}
label_44:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[6].o)))(ctx, (frame[6].o));
	if (temp0 == 0) goto label_26;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o));
	frame[7].o = (checkCast(ctx, &class_java_lang_String, sp[0].o));
	LINE_NUMBER(561);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[0].o = (jobject)((func_arc_util_I18NBundle_getProperties_R_arc_struct_ObjectMap) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_getProperties_R_arc_struct_ObjectMap])(ctx, sp[0].o);
	sp[1].o = frame[7].o;
	sp[2].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, (frame[4].o), (frame[7].o));
	sp[2].o = (jobject)SM_arc_util_Strings_stripColors_java_lang_CharSequence_R_java_lang_String(ctx, sp[2].o);
	sp[2].o = (jobject)((func_java_lang_String_replaceAll_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_String_replaceAll_java_lang_String_java_lang_String_R_java_lang_String])(ctx, sp[2].o, (((jobject) createStringLiteral(ctx, u8"\\S"_j))), (frame[5].o));
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(562);
	goto label_44;
	}
label_26:;
	{
	LINE_NUMBER(566);
	clinit_arc_struct_StringMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_StringMap);
	init_arc_struct_StringMap(ctx, sp[0].o);
	frame[0].o = sp[0].o;
	LINE_NUMBER(567);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_files;
	sp[1].o = (jobject)((func_arc_Files_internal_java_lang_String_R_arc_files_Fi) resolveInterfaceMethod(ctx, &class_arc_Files, INDEX_arc_Files_internal_java_lang_String_R_arc_files_Fi, sp[1].o))(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"bundles/global.properties"_j))));
	sp[1].o = (jobject)((func_arc_files_Fi_reader_java_lang_String_R_java_io_Reader) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_files_Fi_reader_java_lang_String_R_java_io_Reader])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"UTF-8"_j))));
	SM_arc_util_io_PropertiesUtils_load_arc_struct_ObjectMap_java_io_Reader(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(568);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[0].o = (jobject)((func_arc_util_I18NBundle_getProperties_R_arc_struct_ObjectMap) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_getProperties_R_arc_struct_ObjectMap])(ctx, sp[0].o);
	((func_arc_struct_ObjectMap_putAll_arc_struct_ObjectMap) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_putAll_arc_struct_ObjectMap])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(570);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_headless) != 0) goto label_50;
	}
	{
	LINE_NUMBER(571);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	{ /* InvokeDynamic */
		clinit_mindustry_Vars_invoke_java_lang_Runnable_3(ctx);
		auto proxy = (mindustry_Vars_invoke_java_lang_Runnable_3 *) gcAlloc(ctx, &class_mindustry_Vars_invoke_java_lang_Runnable_3);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_Application_post_java_lang_Runnable) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_post_java_lang_Runnable, sp[0].o))(ctx, sp[0].o, sp[1].o);
	}
label_50:;
	LINE_NUMBER(573);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_Vars_lambda$loadSettings$0_arc_files_Fi(jcontext ctx, jobject param0) {
	jtype frame[8];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/Vars:lambda$loadSettings$0", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_Vars(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(531);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"bundle.external"_j));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[4].o = (jobject)((func_arc_files_Fi_absolutePath_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_files_Fi_absolutePath_R_java_lang_String])(ctx, (frame[0].o));
	ARRAY_ACCESS(jobject, sp[3].o, temp0) = sp[4].o;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	((func_mindustry_core_UI_showInfo_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showInfo_java_lang_String])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_Vars_lambda$loadFileLogger$0_arc_util_Log$LogHandler_java_io_Writer_arc_util_Log$LogLevel_java_lang_String(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3) {
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/Vars:lambda$loadFileLogger$0", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_Vars(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(473);
	((func_arc_util_Log$LogHandler_log_arc_util_Log$LogLevel_java_lang_String) resolveInterfaceMethod(ctx, &class_arc_util_Log$LogHandler, INDEX_arc_util_Log$LogHandler_log_arc_util_Log$LogLevel_java_lang_String, (frame[0].o)))(ctx, (frame[0].o), (frame[2].o), (frame[3].o));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(476);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_arc_util_Log$LogLevel_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_Log$LogLevel_name_R_java_lang_String])(ctx, (frame[2].o));
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, sp[1].o, (jint(0)));
	jint temp1 = (jint)SM_java_lang_Character_toUpperCase_char_R_char(ctx, temp0);
	sp[1].o = (jobject)SM_arc_util_Log_removeColors_java_lang_String_R_java_lang_String(ctx, (frame[3].o));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"[\u0001] \u0001\n"_j.string, 2, boxCharacter(ctx, temp1), sp[1].o);
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(477);
	((func_java_io_Writer_flush) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_Writer_flush])(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(481);
	goto label_6;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(478);
	frame[4].o = sp[0].o;
	LINE_NUMBER(479);
	((func_java_io_IOException_printStackTrace) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_io_IOException_printStackTrace])(ctx, (frame[4].o));
	}
label_6:;
	LINE_NUMBER(482);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_Vars_lambda$loadLogger$1_arc_struct_Seq_mindustry_game_EventType$ClientLoadEvent(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/Vars:lambda$loadLogger$1", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_Vars(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(449);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_ui;
	sp[1].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[1].o))->F_consolefrag;
	sp[2].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_Vars_invoke_arc_func_Cons_5(ctx);
		auto proxy = (mindustry_Vars_invoke_arc_func_Cons_5 *) gcAlloc(ctx, &class_mindustry_Vars_invoke_arc_func_Cons_5);
		proxy->F_field0 = (jref) sp[1].o;
		sp[1].o = (jobject) proxy;
	}
	((func_arc_struct_Seq_each_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_each_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_Vars_lambda$loadLogger$0_arc_struct_Seq_Array1_java_lang_String_Array1_java_lang_String_arc_util_Log$LogLevel_java_lang_String(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4) {
	jtype frame[16];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/Vars:lambda$loadLogger$0", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_Vars(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(428);
	sp[0].o = frame[0].o;
	frame[5].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(429);
	frame[6].o = (frame[4].o);
	LINE_NUMBER(430);
	sp[0].o = frame[1].o;
	jint temp0 = (jint)((func_arc_util_Log$LogLevel_ordinal_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_Log$LogLevel_ordinal_R_int])(ctx, (frame[3].o));
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\u0001&fr \u0001"_j.string, 2, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, temp0)), (frame[4].o));
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(0)));
	sp[0].o = (jobject)SM_arc_util_Log_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String(ctx, sp[0].o, sp[1].o);
	frame[7].o = sp[0].o;
	LINE_NUMBER(431);
	clinit_java_lang_System(ctx);
	sp[0].o = (jobject)SF_java_lang_System_out;
	((func_java_io_PrintStream_println_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_PrintStream_println_java_lang_String])(ctx, sp[0].o, (frame[7].o));
	LINE_NUMBER(433);
	sp[0].o = frame[2].o;
	jint temp1 = (jint)((func_arc_util_Log$LogLevel_ordinal_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_Log$LogLevel_ordinal_R_int])(ctx, (frame[3].o));
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\u0001 \u0001"_j.string, 2, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, temp1)), (frame[6].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(435);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_headless) != 0) goto label_11;
	}
	clinit_mindustry_Vars(ctx);
	(sp++)->o = SF_mindustry_Vars_ui;
	if ((--sp)->o == nullptr) goto label_12;
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_consolefrag;
	if (sp[0].o != nullptr) goto label_11;
	}
label_12:;
	{
	LINE_NUMBER(436);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, (frame[0].o), (frame[6].o));
	goto label_13;
	}
label_11:;
	{
	LINE_NUMBER(437);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_headless) != 0) goto label_13;
	}
	{
	LINE_NUMBER(438);
	if ((clinit_arc_util_OS(ctx), (jint)SF_arc_util_OS_isWindows) != 0) goto label_15;
	}
	{
	LINE_NUMBER(439);
	clinit_arc_util_ColorCodes(ctx);
	sp[0].o = (jobject)SF_arc_util_ColorCodes_values;
	frame[8].o = sp[0].o;
	frame[9].i = (((jarray) nullCheck(ctx, (frame[8].o)))->length);
	frame[10].i = (jint(0));
	}
label_19:;
	{
	if ((frame[10].i) >= (frame[9].i)) goto label_15;
	}
	{
	frame[11].o = ((jobject)ARRAY_ACCESS(jobject, (frame[8].o), (frame[10].i)));
	LINE_NUMBER(440);
	sp[0].o = (jobject)((func_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String])(ctx, (frame[6].o), (frame[11].o), (((jobject) createStringLiteral(ctx, u8""_j))));
	frame[6].o = sp[0].o;
	LINE_NUMBER(439);
	INST_IINC(10, 1);
	goto label_19;
	}
label_15:;
	{
	LINE_NUMBER(444);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_consolefrag;
	sp[1].o = (jobject)SM_arc_util_Log_removeColors_java_lang_String_R_java_lang_String(ctx, (frame[6].o));
	((func_mindustry_ui_fragments_ConsoleFragment_addMessage_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_ConsoleFragment_addMessage_java_lang_String])(ctx, sp[0].o, sp[1].o);
	}
label_13:;
	{
	LINE_NUMBER(446);
	monitorExit(ctx, (frame[5].o));
	}
	popExceptionFrame(frameRef);
	goto label_22;
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	frame[12].o = sp[0].o;
	monitorExit(ctx, (frame[5].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(12);
	INST_ATHROW();
	label_22:;
	LINE_NUMBER(447);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_Vars_lambda$init$0_mindustry_game_EventType$ContentInitEvent(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/Vars:lambda$init$0", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_Vars(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(388);
	clinit_mindustry_world_Tile(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_Tile);
	init_mindustry_world_Tile_int_int(ctx, sp[0].o, (32747), (32747));
	clinit_mindustry_Vars(ctx);
	SF_mindustry_Vars_emptyTile = sp[0].o;
	LINE_NUMBER(389);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_mindustry_Vars(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_mindustry_Vars_minModGameVersion = jint(136);
	SF_mindustry_Vars_minJavaModGameVersion = jint(154);
	SF_mindustry_Vars_defaultEnv = jint(233);
	SF_mindustry_Vars_darkRadius = jint(4);
	SF_mindustry_Vars_maxLoadoutSchematicPad = jint(5);
	SF_mindustry_Vars_schematicBaseStart = ((jobject) createStringLiteral(ctx, u8"bXNjaA"_j));
	SF_mindustry_Vars_bufferSize = jint(8192);
	SF_mindustry_Vars_appName = ((jobject) createStringLiteral(ctx, u8"Mindustry"_j));
	SF_mindustry_Vars_ghApi = ((jobject) createStringLiteral(ctx, u8"https://api.github.com"_j));
	SF_mindustry_Vars_discordURL = ((jobject) createStringLiteral(ctx, u8"https://discord.gg/mindustry"_j));
	SF_mindustry_Vars_modGuideURL = ((jobject) createStringLiteral(ctx, u8"https://mindustrygame.github.io/wiki/modding/1-modding/"_j));
	SF_mindustry_Vars_patchesGuideURL = ((jobject) createStringLiteral(ctx, u8"https://mindustrygame.github.io/wiki/datapatches/"_j));
	SF_mindustry_Vars_reportIssueURL = ((jobject) createStringLiteral(ctx, u8"https://github.com/Anuken/Mindustry/issues/new?labels=bug&template=bug_report.md"_j));
	SF_mindustry_Vars_maxGlErrors = jint(100);
	SF_mindustry_Vars_maxBlockSize = jint(16);
	SF_mindustry_Vars_mineTransferRange = jfloat(220.0f);
	SF_mindustry_Vars_maxPlayerPreviewPlans = jint(1000);
	SF_mindustry_Vars_maxTextLength = jint(150);
	SF_mindustry_Vars_maxPingTextLength = jint(40);
	SF_mindustry_Vars_maxNameLength = jint(40);
	SF_mindustry_Vars_itemSize = jfloat(5.0f);
	SF_mindustry_Vars_finalWorldBounds = jfloat(250.0f);
	SF_mindustry_Vars_buildingRange = jfloat(220.0f);
	SF_mindustry_Vars_unitCollisionRadiusScale = jfloat(0.6f);
	SF_mindustry_Vars_itemTransferRange = jfloat(220.0f);
	SF_mindustry_Vars_logicItemTransferRange = jfloat(45.0f);
	SF_mindustry_Vars_turnDuration = jfloat(7200.0f);
	SF_mindustry_Vars_baseInvasionChance = jfloat(1,000000e-02f);
	SF_mindustry_Vars_invasionGracePeriod = jfloat(20.0f);
	SF_mindustry_Vars_minArmorDamage = jfloat(0.1f);
	SF_mindustry_Vars_tilesize = jint(8);
	SF_mindustry_Vars_tilePayload = jfloat(64.0f);
	SF_mindustry_Vars_iconXLarge = jfloat(48.0f);
	SF_mindustry_Vars_iconLarge = jfloat(40.0f);
	SF_mindustry_Vars_iconMed = jfloat(32.0f);
	SF_mindustry_Vars_iconSmall = jfloat(24.0f);
	SF_mindustry_Vars_maxTcpSize = jint(1100);
	SF_mindustry_Vars_port = jint(6567);
	SF_mindustry_Vars_multicastPort = jint(20151);
	SF_mindustry_Vars_maxModSubtitleLength = jint(40);
	SF_mindustry_Vars_multicastGroup = ((jobject) createStringLiteral(ctx, u8"227.2.7.7"_j));
	SF_mindustry_Vars_mapExtension = ((jobject) createStringLiteral(ctx, u8"msav"_j));
	SF_mindustry_Vars_saveExtension = ((jobject) createStringLiteral(ctx, u8"msav"_j));
	SF_mindustry_Vars_schematicExtension = ((jobject) createStringLiteral(ctx, u8"msch"_j));
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/Vars:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_Vars(ctx);
	{
	LINE_NUMBER(45);
	clinit_mindustry_Vars(ctx);
	SF_mindustry_Vars_failedToLaunch = (jint(0));
	LINE_NUMBER(47);
	clinit_mindustry_Vars(ctx);
	SF_mindustry_Vars_loadLocales = (jint(1));
	LINE_NUMBER(49);
	clinit_mindustry_Vars(ctx);
	SF_mindustry_Vars_loadedLogger = (jint(0));
	clinit_mindustry_Vars(ctx);
	SF_mindustry_Vars_loadedFileLogger = (jint(0));
	LINE_NUMBER(51);
	clinit_mindustry_Vars(ctx);
	SF_mindustry_Vars_steamPlayerName = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(57);
	clinit_mindustry_Vars(ctx);
	SF_mindustry_Vars_showSectorSubmissions = (jint(0));
	LINE_NUMBER(59);
	clinit_mindustry_Vars(ctx);
	SF_mindustry_Vars_forceBeServers = (jint(0));
	LINE_NUMBER(61);
	clinit_mindustry_Vars(ctx);
	SF_mindustry_Vars_skipModCode = (jint(0));
	LINE_NUMBER(63);
	sp[0].o = (jobject)createArray(ctx, &class_mindustry_ctype_ContentType, (jint(5)));
	jint temp0 = jint(0);
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_item;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_liquid;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_block;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(3);
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_unit;
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	jint temp4 = jint(4);
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_status;
	ARRAY_ACCESS(jobject, sp[0].o, temp4) = sp[1].o;
	clinit_mindustry_Vars(ctx);
	SF_mindustry_Vars_defaultContentIcons = sp[0].o;
	LINE_NUMBER(75);
	sp[0].o = (jobject)SM_java_nio_charset_Charset_forName_java_lang_String_R_java_nio_charset_Charset(ctx, (((jobject) createStringLiteral(ctx, u8"UTF-8"_j))));
	clinit_mindustry_Vars(ctx);
	SF_mindustry_Vars_charset = sp[0].o;
	LINE_NUMBER(87);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(2)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"https://raw.githubusercontent.com/Anuken/MindustryServerList/master/servers_be.json"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"https://cdn.jsdelivr.net/gh/anuken/mindustryserverlist/servers_be.json"_j)));
	clinit_mindustry_Vars(ctx);
	SF_mindustry_Vars_serverJsonBeURLs = sp[0].o;
	LINE_NUMBER(89);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(2)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"https://raw.githubusercontent.com/Anuken/MindustryServerList/master/servers_v8.json"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"https://cdn.jsdelivr.net/gh/anuken/mindustryserverlist/servers_v8.json"_j)));
	clinit_mindustry_Vars(ctx);
	SF_mindustry_Vars_serverJsonURLs = sp[0].o;
	LINE_NUMBER(91);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(2)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"https://raw.githubusercontent.com/Anuken/MindustryMods/master/mods.json"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"https://cdn.jsdelivr.net/gh/anuken/mindustrymods/mods.json"_j)));
	clinit_mindustry_Vars(ctx);
	SF_mindustry_Vars_modJsonURLs = sp[0].o;
	LINE_NUMBER(93);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(2)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"https://raw.githubusercontent.com/Anuken/MindustrySteamBans/master/data.json"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"https://cdn.jsdelivr.net/gh/anuken/mindustrysteambans/data.json"_j)));
	clinit_mindustry_Vars(ctx);
	SF_mindustry_Vars_steamBansURLs = sp[0].o;
	LINE_NUMBER(97);
	sp[0].o = (jobject)createArray(ctx, &class_mindustry_net_ServerGroup, (jint(0)));
	sp[0].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, sp[0].o);
	clinit_mindustry_Vars(ctx);
	SF_mindustry_Vars_defaultServers = sp[0].o;
	LINE_NUMBER(99);
	sp[0].o = (jobject)createArray(ctx, &class_mindustry_net_ServerGroup, (jint(0)));
	sp[0].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, sp[0].o);
	clinit_mindustry_Vars(ctx);
	SF_mindustry_Vars_cachedServers = sp[0].o;
	LINE_NUMBER(141);
	clinit_mindustry_Vars(ctx);
	SF_mindustry_Vars_macNotchHeight = (jfloat(32.0f));
	LINE_NUMBER(143);
	clinit_mindustry_Vars(ctx);
	SF_mindustry_Vars_updateEditorOnChange = (jint(0));
	LINE_NUMBER(145);
	sp[0].o = (jobject)createArray(ctx, &class_arc_graphics_Color, (16));
	jint temp5 = jint(0);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"82759a"_j));
	LINE_NUMBER(146);
	sp[1].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp5) = sp[1].o;
	jint temp6 = jint(1);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"c0c1c5"_j));
	LINE_NUMBER(147);
	sp[1].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp6) = sp[1].o;
	jint temp7 = jint(2);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"ffffff"_j));
	LINE_NUMBER(148);
	sp[1].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp7) = sp[1].o;
	jint temp8 = jint(3);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"7d2953"_j));
	LINE_NUMBER(149);
	sp[1].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp8) = sp[1].o;
	jint temp9 = jint(4);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"ff074e"_j));
	LINE_NUMBER(150);
	sp[1].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp9) = sp[1].o;
	jint temp10 = jint(5);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"ff072a"_j));
	LINE_NUMBER(151);
	sp[1].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp10) = sp[1].o;
	jint temp11 = 6;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"ff76a6"_j));
	LINE_NUMBER(152);
	sp[1].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp11) = sp[1].o;
	jint temp12 = 7;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"a95238"_j));
	LINE_NUMBER(153);
	sp[1].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp12) = sp[1].o;
	jint temp13 = 8;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"ffa108"_j));
	LINE_NUMBER(154);
	sp[1].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp13) = sp[1].o;
	jint temp14 = 9;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"feeb2c"_j));
	LINE_NUMBER(155);
	sp[1].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp14) = sp[1].o;
	jint temp15 = 10;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"ffcaa8"_j));
	LINE_NUMBER(156);
	sp[1].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp15) = sp[1].o;
	jint temp16 = 11;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"008551"_j));
	LINE_NUMBER(157);
	sp[1].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp16) = sp[1].o;
	jint temp17 = 12;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"00e339"_j));
	LINE_NUMBER(158);
	sp[1].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp17) = sp[1].o;
	jint temp18 = 13;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"423c7b"_j));
	LINE_NUMBER(159);
	sp[1].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp18) = sp[1].o;
	jint temp19 = 14;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"4b5ef1"_j));
	LINE_NUMBER(160);
	sp[1].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp19) = sp[1].o;
	jint temp20 = 15;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"2cabfe"_j));
	LINE_NUMBER(161);
	sp[1].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp20) = sp[1].o;
	clinit_mindustry_Vars(ctx);
	SF_mindustry_Vars_playerColors = sp[0].o;
	LINE_NUMBER(164);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (31));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"effect"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"power"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(2))) = (((jobject) createStringLiteral(ctx, u8"logic"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(3))) = (((jobject) createStringLiteral(ctx, u8"units"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(4))) = (((jobject) createStringLiteral(ctx, u8"liquid"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(5))) = (((jobject) createStringLiteral(ctx, u8"production"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (6)) = (((jobject) createStringLiteral(ctx, u8"defense"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (7)) = (((jobject) createStringLiteral(ctx, u8"turret"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (8)) = (((jobject) createStringLiteral(ctx, u8"distribution"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (9)) = (((jobject) createStringLiteral(ctx, u8"crafting"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (10)) = (((jobject) createStringLiteral(ctx, u8"settings"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (11)) = (((jobject) createStringLiteral(ctx, u8"cancel"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (12)) = (((jobject) createStringLiteral(ctx, u8"zoom"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (13)) = (((jobject) createStringLiteral(ctx, u8"ok"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (14)) = (((jobject) createStringLiteral(ctx, u8"star"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (15)) = (((jobject) createStringLiteral(ctx, u8"home"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (16)) = (((jobject) createStringLiteral(ctx, u8"pencil"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (17)) = (((jobject) createStringLiteral(ctx, u8"up"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (18)) = (((jobject) createStringLiteral(ctx, u8"down"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (19)) = (((jobject) createStringLiteral(ctx, u8"left"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (20)) = (((jobject) createStringLiteral(ctx, u8"right"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (21)) = (((jobject) createStringLiteral(ctx, u8"hammer"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (22)) = (((jobject) createStringLiteral(ctx, u8"warning"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (23)) = (((jobject) createStringLiteral(ctx, u8"tree"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (24)) = (((jobject) createStringLiteral(ctx, u8"admin"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (25)) = (((jobject) createStringLiteral(ctx, u8"map"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (26)) = (((jobject) createStringLiteral(ctx, u8"modePvp"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (27)) = (((jobject) createStringLiteral(ctx, u8"terrain"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (28)) = (((jobject) createStringLiteral(ctx, u8"modeSurvival"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (29)) = (((jobject) createStringLiteral(ctx, u8"commandRally"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (30)) = (((jobject) createStringLiteral(ctx, u8"commandAttack"_j)));
	clinit_mindustry_Vars(ctx);
	SF_mindustry_Vars_accessibleIcons = sp[0].o;
	LINE_NUMBER(181);
	clinit_mindustry_Vars(ctx);
	SF_mindustry_Vars_maxDeltaClient = (jfloat(4.0f));
	clinit_mindustry_Vars(ctx);
	SF_mindustry_Vars_maxDeltaServer = (jfloat(4.0f));
	LINE_NUMBER(183);
	clinit_mindustry_Vars(ctx);
	SF_mindustry_Vars_clientLoaded = (jint(0));
	LINE_NUMBER(185);
	clinit_mindustry_Vars(ctx);
	SF_mindustry_Vars_hadSerpuloRemaps = (jint(0));
	LINE_NUMBER(187);
	clinit_mindustry_Vars(ctx);
	SF_mindustry_Vars_maxTextureSize = (2048);
	LINE_NUMBER(189);
	clinit_mindustry_Vars(ctx);
	SF_mindustry_Vars_maxSchematicSize = (64);
	LINE_NUMBER(191);
	clinit_mindustry_Vars(ctx);
	SF_mindustry_Vars_showSectorLandInfo = (jint(1));
	LINE_NUMBER(193);
	clinit_mindustry_Vars(ctx);
	SF_mindustry_Vars_checkScreenshotMemory = (jint(1));
	LINE_NUMBER(195);
	clinit_mindustry_Vars(ctx);
	SF_mindustry_Vars_confirmExit = (jint(1));
	LINE_NUMBER(213);
	clinit_mindustry_Vars(ctx);
	SF_mindustry_Vars_clearSectors = (jint(0));
	LINE_NUMBER(215);
	clinit_mindustry_Vars(ctx);
	SF_mindustry_Vars_enableLight = (jint(1));
	LINE_NUMBER(218);
	clinit_mindustry_Vars(ctx);
	SF_mindustry_Vars_enableDarkness = (jint(1));
	LINE_NUMBER(220);
	clinit_mindustry_Vars(ctx);
	SF_mindustry_Vars_debugDrawAvoidance = (jint(0));
	LINE_NUMBER(222);
	clinit_mindustry_Vars(ctx);
	SF_mindustry_Vars_loadedServerCache = (jint(0));
	LINE_NUMBER(224);
	clinit_mindustry_Vars(ctx);
	SF_mindustry_Vars_fetchedServers = (jint(0));
	LINE_NUMBER(266);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_executor;
	clinit_mindustry_Vars(ctx);
	SF_mindustry_Vars_mainExecutor = sp[0].o;
	LINE_NUMBER(268);
	clinit_mindustry_core_FileTree(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_core_FileTree);
	init_mindustry_core_FileTree(ctx, sp[0].o);
	clinit_mindustry_Vars(ctx);
	SF_mindustry_Vars_tree = sp[0].o;
	LINE_NUMBER(274);
	clinit_mindustry_Vars$1(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_Vars$1);
	init_mindustry_Vars$1(ctx, sp[0].o);
	clinit_mindustry_Vars(ctx);
	SF_mindustry_Vars_platform = sp[0].o;
	LINE_NUMBER(283);
	clinit_mindustry_async_PhysicsProcess(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_async_PhysicsProcess);
	init_mindustry_async_PhysicsProcess(ctx, sp[0].o);
	clinit_mindustry_Vars(ctx);
	SF_mindustry_Vars_unitPhysics = sp[0].o;
	LINE_NUMBER(285);
	clinit_mindustry_service_GameService(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_service_GameService);
	init_mindustry_service_GameService(ctx, sp[0].o);
	clinit_mindustry_Vars(ctx);
	SF_mindustry_Vars_service = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_Vars;
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

	fields[16]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

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

	fields[28]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[29]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[30]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[31]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[32]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[33]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[34]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[35]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[36]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[37]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[38]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[39]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[40]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[41]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[42]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[43]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[44]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[45]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[46]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[47]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[48]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[49]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[50]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[51]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[52]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[53]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[54]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[55]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[56]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[57]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[58]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[59]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[60]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[61]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[62]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[63]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[64]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[65]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[66]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[67]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[68]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[69]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[70]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[71]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[72]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[73]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[74]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[75]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[76]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[77]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[78]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[79]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[80]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[81]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[82]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[83]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[84]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[85]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[86]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[87]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[88]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[89]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[90]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[91]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[92]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[93]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[94]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[95]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[96]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[97]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[98]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[99]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[100]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[101]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[102]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[103]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[104]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[105]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[106]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[107]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[108]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[109]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[110]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[111]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[112]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[113]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[114]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[115]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[116]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[117]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[118]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[119]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[120]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[121]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[122]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[123]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[124]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[125]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[126]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[127]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[128]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[129]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[130]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[131]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[132]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[133]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[134]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[135]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field player
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[136]->F_annotations = (intptr_t) annotationArray;
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
}

void *vtable_mindustry_Vars[] {
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
	(void *) M_mindustry_Vars_loadAsync,
	(void *) M_arc_assets_Loadable_loadSync,
	(void *) M_arc_assets_Loadable_getName_R_java_lang_String,
	(void *) M_arc_assets_Loadable_getDependencies_R_arc_struct_Seq,
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
	{ "loadAsync", "()V" },
	{ "loadSync", "()V" },
	{ "getName", "()Ljava/lang/String;" },
	{ "getDependencies", "()Larc/struct/Seq;" },
};

static jclass interfaces[] { &class_arc_assets_Loadable, };

static FieldMetadata fields[] {
	{ "failedToLaunch", &class_boolean, (intptr_t) &SF_mindustry_Vars_failedToLaunch, "Z", 9 },
	{ "loadLocales", &class_boolean, (intptr_t) &SF_mindustry_Vars_loadLocales, "Z", 9 },
	{ "loadedLogger", &class_boolean, (intptr_t) &SF_mindustry_Vars_loadedLogger, "Z", 9 },
	{ "loadedFileLogger", &class_boolean, (intptr_t) &SF_mindustry_Vars_loadedFileLogger, "Z", 9 },
	{ "steamPlayerName", &class_java_lang_String, (intptr_t) &SF_mindustry_Vars_steamPlayerName, "Ljava/lang/String;", 9 },
	{ "minModGameVersion", &class_int, (intptr_t) &SF_mindustry_Vars_minModGameVersion, "I", 25 },
	{ "minJavaModGameVersion", &class_int, (intptr_t) &SF_mindustry_Vars_minJavaModGameVersion, "I", 25 },
	{ "showSectorSubmissions", &class_boolean, (intptr_t) &SF_mindustry_Vars_showSectorSubmissions, "Z", 9 },
	{ "forceBeServers", &class_boolean, (intptr_t) &SF_mindustry_Vars_forceBeServers, "Z", 9 },
	{ "skipModCode", &class_boolean, (intptr_t) &SF_mindustry_Vars_skipModCode, "Z", 9 },
	{ "defaultContentIcons", getArrayClass(&class_mindustry_ctype_ContentType, 1), (intptr_t) &SF_mindustry_Vars_defaultContentIcons, "[Lmindustry/ctype/ContentType;", 25 },
	{ "defaultEnv", &class_int, (intptr_t) &SF_mindustry_Vars_defaultEnv, "I", 25 },
	{ "darkRadius", &class_int, (intptr_t) &SF_mindustry_Vars_darkRadius, "I", 25 },
	{ "maxLoadoutSchematicPad", &class_int, (intptr_t) &SF_mindustry_Vars_maxLoadoutSchematicPad, "I", 25 },
	{ "schematicBaseStart", &class_java_lang_String, (intptr_t) &SF_mindustry_Vars_schematicBaseStart, "Ljava/lang/String;", 25 },
	{ "bufferSize", &class_int, (intptr_t) &SF_mindustry_Vars_bufferSize, "I", 25 },
	{ "charset", &class_java_nio_charset_Charset, (intptr_t) &SF_mindustry_Vars_charset, "Ljava/nio/charset/Charset;", 25 },
	{ "appName", &class_java_lang_String, (intptr_t) &SF_mindustry_Vars_appName, "Ljava/lang/String;", 25 },
	{ "ghApi", &class_java_lang_String, (intptr_t) &SF_mindustry_Vars_ghApi, "Ljava/lang/String;", 25 },
	{ "discordURL", &class_java_lang_String, (intptr_t) &SF_mindustry_Vars_discordURL, "Ljava/lang/String;", 25 },
	{ "modGuideURL", &class_java_lang_String, (intptr_t) &SF_mindustry_Vars_modGuideURL, "Ljava/lang/String;", 25 },
	{ "patchesGuideURL", &class_java_lang_String, (intptr_t) &SF_mindustry_Vars_patchesGuideURL, "Ljava/lang/String;", 25 },
	{ "serverJsonBeURLs", getArrayClass(&class_java_lang_String, 1), (intptr_t) &SF_mindustry_Vars_serverJsonBeURLs, "[Ljava/lang/String;", 25 },
	{ "serverJsonURLs", getArrayClass(&class_java_lang_String, 1), (intptr_t) &SF_mindustry_Vars_serverJsonURLs, "[Ljava/lang/String;", 25 },
	{ "modJsonURLs", getArrayClass(&class_java_lang_String, 1), (intptr_t) &SF_mindustry_Vars_modJsonURLs, "[Ljava/lang/String;", 25 },
	{ "steamBansURLs", getArrayClass(&class_java_lang_String, 1), (intptr_t) &SF_mindustry_Vars_steamBansURLs, "[Ljava/lang/String;", 25 },
	{ "reportIssueURL", &class_java_lang_String, (intptr_t) &SF_mindustry_Vars_reportIssueURL, "Ljava/lang/String;", 25 },
	{ "defaultServers", &class_arc_struct_Seq, (intptr_t) &SF_mindustry_Vars_defaultServers, "Larc/struct/Seq;", 25 },
	{ "cachedServers", &class_arc_struct_Seq, (intptr_t) &SF_mindustry_Vars_cachedServers, "Larc/struct/Seq;", 25 },
	{ "maxGlErrors", &class_int, (intptr_t) &SF_mindustry_Vars_maxGlErrors, "I", 25 },
	{ "maxBlockSize", &class_int, (intptr_t) &SF_mindustry_Vars_maxBlockSize, "I", 25 },
	{ "mineTransferRange", &class_float, (intptr_t) &SF_mindustry_Vars_mineTransferRange, "F", 25 },
	{ "maxPlayerPreviewPlans", &class_int, (intptr_t) &SF_mindustry_Vars_maxPlayerPreviewPlans, "I", 25 },
	{ "maxTextLength", &class_int, (intptr_t) &SF_mindustry_Vars_maxTextLength, "I", 25 },
	{ "maxPingTextLength", &class_int, (intptr_t) &SF_mindustry_Vars_maxPingTextLength, "I", 25 },
	{ "maxNameLength", &class_int, (intptr_t) &SF_mindustry_Vars_maxNameLength, "I", 25 },
	{ "itemSize", &class_float, (intptr_t) &SF_mindustry_Vars_itemSize, "F", 25 },
	{ "finalWorldBounds", &class_float, (intptr_t) &SF_mindustry_Vars_finalWorldBounds, "F", 25 },
	{ "buildingRange", &class_float, (intptr_t) &SF_mindustry_Vars_buildingRange, "F", 25 },
	{ "unitCollisionRadiusScale", &class_float, (intptr_t) &SF_mindustry_Vars_unitCollisionRadiusScale, "F", 25 },
	{ "itemTransferRange", &class_float, (intptr_t) &SF_mindustry_Vars_itemTransferRange, "F", 25 },
	{ "logicItemTransferRange", &class_float, (intptr_t) &SF_mindustry_Vars_logicItemTransferRange, "F", 25 },
	{ "turnDuration", &class_float, (intptr_t) &SF_mindustry_Vars_turnDuration, "F", 25 },
	{ "baseInvasionChance", &class_float, (intptr_t) &SF_mindustry_Vars_baseInvasionChance, "F", 25 },
	{ "invasionGracePeriod", &class_float, (intptr_t) &SF_mindustry_Vars_invasionGracePeriod, "F", 25 },
	{ "minArmorDamage", &class_float, (intptr_t) &SF_mindustry_Vars_minArmorDamage, "F", 25 },
	{ "tilesize", &class_int, (intptr_t) &SF_mindustry_Vars_tilesize, "I", 25 },
	{ "tilePayload", &class_float, (intptr_t) &SF_mindustry_Vars_tilePayload, "F", 25 },
	{ "iconXLarge", &class_float, (intptr_t) &SF_mindustry_Vars_iconXLarge, "F", 25 },
	{ "iconLarge", &class_float, (intptr_t) &SF_mindustry_Vars_iconLarge, "F", 25 },
	{ "iconMed", &class_float, (intptr_t) &SF_mindustry_Vars_iconMed, "F", 25 },
	{ "iconSmall", &class_float, (intptr_t) &SF_mindustry_Vars_iconSmall, "F", 25 },
	{ "macNotchHeight", &class_float, (intptr_t) &SF_mindustry_Vars_macNotchHeight, "F", 9 },
	{ "updateEditorOnChange", &class_boolean, (intptr_t) &SF_mindustry_Vars_updateEditorOnChange, "Z", 9 },
	{ "playerColors", getArrayClass(&class_arc_graphics_Color, 1), (intptr_t) &SF_mindustry_Vars_playerColors, "[Larc/graphics/Color;", 25 },
	{ "accessibleIcons", getArrayClass(&class_java_lang_String, 1), (intptr_t) &SF_mindustry_Vars_accessibleIcons, "[Ljava/lang/String;", 25 },
	{ "maxTcpSize", &class_int, (intptr_t) &SF_mindustry_Vars_maxTcpSize, "I", 25 },
	{ "port", &class_int, (intptr_t) &SF_mindustry_Vars_port, "I", 25 },
	{ "multicastPort", &class_int, (intptr_t) &SF_mindustry_Vars_multicastPort, "I", 25 },
	{ "maxModSubtitleLength", &class_int, (intptr_t) &SF_mindustry_Vars_maxModSubtitleLength, "I", 25 },
	{ "multicastGroup", &class_java_lang_String, (intptr_t) &SF_mindustry_Vars_multicastGroup, "Ljava/lang/String;", 25 },
	{ "maxDeltaClient", &class_float, (intptr_t) &SF_mindustry_Vars_maxDeltaClient, "F", 9 },
	{ "maxDeltaServer", &class_float, (intptr_t) &SF_mindustry_Vars_maxDeltaServer, "F", 9 },
	{ "clientLoaded", &class_boolean, (intptr_t) &SF_mindustry_Vars_clientLoaded, "Z", 9 },
	{ "hadSerpuloRemaps", &class_boolean, (intptr_t) &SF_mindustry_Vars_hadSerpuloRemaps, "Z", 9 },
	{ "maxTextureSize", &class_int, (intptr_t) &SF_mindustry_Vars_maxTextureSize, "I", 9 },
	{ "maxSchematicSize", &class_int, (intptr_t) &SF_mindustry_Vars_maxSchematicSize, "I", 9 },
	{ "showSectorLandInfo", &class_boolean, (intptr_t) &SF_mindustry_Vars_showSectorLandInfo, "Z", 9 },
	{ "checkScreenshotMemory", &class_boolean, (intptr_t) &SF_mindustry_Vars_checkScreenshotMemory, "Z", 9 },
	{ "confirmExit", &class_boolean, (intptr_t) &SF_mindustry_Vars_confirmExit, "Z", 9 },
	{ "disableUI", &class_boolean, (intptr_t) &SF_mindustry_Vars_disableUI, "Z", 9 },
	{ "disableSave", &class_boolean, (intptr_t) &SF_mindustry_Vars_disableSave, "Z", 9 },
	{ "testMobile", &class_boolean, (intptr_t) &SF_mindustry_Vars_testMobile, "Z", 9 },
	{ "mobile", &class_boolean, (intptr_t) &SF_mindustry_Vars_mobile, "Z", 9 },
	{ "ios", &class_boolean, (intptr_t) &SF_mindustry_Vars_ios, "Z", 9 },
	{ "android", &class_boolean, (intptr_t) &SF_mindustry_Vars_android, "Z", 9 },
	{ "headless", &class_boolean, (intptr_t) &SF_mindustry_Vars_headless, "Z", 9 },
	{ "steam", &class_boolean, (intptr_t) &SF_mindustry_Vars_steam, "Z", 9 },
	{ "clearSectors", &class_boolean, (intptr_t) &SF_mindustry_Vars_clearSectors, "Z", 9 },
	{ "enableLight", &class_boolean, (intptr_t) &SF_mindustry_Vars_enableLight, "Z", 9 },
	{ "enableDarkness", &class_boolean, (intptr_t) &SF_mindustry_Vars_enableDarkness, "Z", 9 },
	{ "debugDrawAvoidance", &class_boolean, (intptr_t) &SF_mindustry_Vars_debugDrawAvoidance, "Z", 9 },
	{ "loadedServerCache", &class_boolean, (intptr_t) &SF_mindustry_Vars_loadedServerCache, "Z", 9 },
	{ "fetchedServers", &class_boolean, (intptr_t) &SF_mindustry_Vars_fetchedServers, "Z", 9 },
	{ "dataDirectory", &class_arc_files_Fi, (intptr_t) &SF_mindustry_Vars_dataDirectory, "Larc/files/Fi;", 9 },
	{ "screenshotDirectory", &class_arc_files_Fi, (intptr_t) &SF_mindustry_Vars_screenshotDirectory, "Larc/files/Fi;", 9 },
	{ "customMapDirectory", &class_arc_files_Fi, (intptr_t) &SF_mindustry_Vars_customMapDirectory, "Larc/files/Fi;", 9 },
	{ "mapPreviewDirectory", &class_arc_files_Fi, (intptr_t) &SF_mindustry_Vars_mapPreviewDirectory, "Larc/files/Fi;", 9 },
	{ "assetCacheDirectory", &class_arc_files_Fi, (intptr_t) &SF_mindustry_Vars_assetCacheDirectory, "Larc/files/Fi;", 9 },
	{ "tmpDirectory", &class_arc_files_Fi, (intptr_t) &SF_mindustry_Vars_tmpDirectory, "Larc/files/Fi;", 9 },
	{ "saveDirectory", &class_arc_files_Fi, (intptr_t) &SF_mindustry_Vars_saveDirectory, "Larc/files/Fi;", 9 },
	{ "modDirectory", &class_arc_files_Fi, (intptr_t) &SF_mindustry_Vars_modDirectory, "Larc/files/Fi;", 9 },
	{ "schematicDirectory", &class_arc_files_Fi, (intptr_t) &SF_mindustry_Vars_schematicDirectory, "Larc/files/Fi;", 9 },
	{ "bebuildDirectory", &class_arc_files_Fi, (intptr_t) &SF_mindustry_Vars_bebuildDirectory, "Larc/files/Fi;", 9 },
	{ "launchIDFile", &class_arc_files_Fi, (intptr_t) &SF_mindustry_Vars_launchIDFile, "Larc/files/Fi;", 9 },
	{ "serverCacheFile", &class_arc_files_Fi, (intptr_t) &SF_mindustry_Vars_serverCacheFile, "Larc/files/Fi;", 9 },
	{ "emptyMap", &class_mindustry_maps_Map, (intptr_t) &SF_mindustry_Vars_emptyMap, "Lmindustry/maps/Map;", 9 },
	{ "emptyTile", &class_mindustry_world_Tile, (intptr_t) &SF_mindustry_Vars_emptyTile, "Lmindustry/world/Tile;", 9 },
	{ "mapExtension", &class_java_lang_String, (intptr_t) &SF_mindustry_Vars_mapExtension, "Ljava/lang/String;", 25 },
	{ "saveExtension", &class_java_lang_String, (intptr_t) &SF_mindustry_Vars_saveExtension, "Ljava/lang/String;", 25 },
	{ "schematicExtension", &class_java_lang_String, (intptr_t) &SF_mindustry_Vars_schematicExtension, "Ljava/lang/String;", 25 },
	{ "javaPath", &class_java_lang_String, (intptr_t) &SF_mindustry_Vars_javaPath, "Ljava/lang/String;", 9 },
	{ "locales", getArrayClass(&class_java_util_Locale, 1), (intptr_t) &SF_mindustry_Vars_locales, "[Ljava/util/Locale;", 9 },
	{ "mainExecutor", &class_java_util_concurrent_ExecutorService, (intptr_t) &SF_mindustry_Vars_mainExecutor, "Ljava/util/concurrent/ExecutorService;", 9 },
	{ "tree", &class_mindustry_core_FileTree, (intptr_t) &SF_mindustry_Vars_tree, "Lmindustry/core/FileTree;", 9 },
	{ "net", &class_mindustry_net_Net, (intptr_t) &SF_mindustry_Vars_net, "Lmindustry/net/Net;", 9 },
	{ "content", &class_mindustry_core_ContentLoader, (intptr_t) &SF_mindustry_Vars_content, "Lmindustry/core/ContentLoader;", 9 },
	{ "state", &class_mindustry_core_GameState, (intptr_t) &SF_mindustry_Vars_state, "Lmindustry/core/GameState;", 9 },
	{ "collisions", &class_mindustry_entities_EntityCollisions, (intptr_t) &SF_mindustry_Vars_collisions, "Lmindustry/entities/EntityCollisions;", 9 },
	{ "waves", &class_mindustry_game_Waves, (intptr_t) &SF_mindustry_Vars_waves, "Lmindustry/game/Waves;", 9 },
	{ "platform", &class_mindustry_core_Platform, (intptr_t) &SF_mindustry_Vars_platform, "Lmindustry/core/Platform;", 9 },
	{ "mods", &class_mindustry_mod_Mods, (intptr_t) &SF_mindustry_Vars_mods, "Lmindustry/mod/Mods;", 9 },
	{ "schematics", &class_mindustry_game_Schematics, (intptr_t) &SF_mindustry_Vars_schematics, "Lmindustry/game/Schematics;", 9 },
	{ "becontrol", &class_mindustry_net_BeControl, (intptr_t) &SF_mindustry_Vars_becontrol, "Lmindustry/net/BeControl;", 9 },
	{ "asyncCore", &class_mindustry_async_AsyncCore, (intptr_t) &SF_mindustry_Vars_asyncCore, "Lmindustry/async/AsyncCore;", 9 },
	{ "bases", &class_mindustry_ai_BaseRegistry, (intptr_t) &SF_mindustry_Vars_bases, "Lmindustry/ai/BaseRegistry;", 9 },
	{ "logicVars", &class_mindustry_logic_GlobalVars, (intptr_t) &SF_mindustry_Vars_logicVars, "Lmindustry/logic/GlobalVars;", 9 },
	{ "editor", &class_mindustry_editor_MapEditor, (intptr_t) &SF_mindustry_Vars_editor, "Lmindustry/editor/MapEditor;", 9 },
	{ "avoidance", &class_mindustry_async_AvoidanceProcess, (intptr_t) &SF_mindustry_Vars_avoidance, "Lmindustry/async/AvoidanceProcess;", 9 },
	{ "unitPhysics", &class_mindustry_async_PhysicsProcess, (intptr_t) &SF_mindustry_Vars_unitPhysics, "Lmindustry/async/PhysicsProcess;", 9 },
	{ "assetCache", &class_mindustry_mod_DataAssetCache, (intptr_t) &SF_mindustry_Vars_assetCache, "Lmindustry/mod/DataAssetCache;", 9 },
	{ "service", &class_mindustry_service_GameService, (intptr_t) &SF_mindustry_Vars_service, "Lmindustry/service/GameService;", 9 },
	{ "universe", &class_mindustry_game_Universe, (intptr_t) &SF_mindustry_Vars_universe, "Lmindustry/game/Universe;", 9 },
	{ "world", &class_mindustry_core_World, (intptr_t) &SF_mindustry_Vars_world, "Lmindustry/core/World;", 9 },
	{ "maps", &class_mindustry_maps_Maps, (intptr_t) &SF_mindustry_Vars_maps, "Lmindustry/maps/Maps;", 9 },
	{ "spawner", &class_mindustry_ai_WaveSpawner, (intptr_t) &SF_mindustry_Vars_spawner, "Lmindustry/ai/WaveSpawner;", 9 },
	{ "indexer", &class_mindustry_ai_BlockIndexer, (intptr_t) &SF_mindustry_Vars_indexer, "Lmindustry/ai/BlockIndexer;", 9 },
	{ "pathfinder", &class_mindustry_ai_Pathfinder, (intptr_t) &SF_mindustry_Vars_pathfinder, "Lmindustry/ai/Pathfinder;", 9 },
	{ "controlPath", &class_mindustry_ai_ControlPathfinder, (intptr_t) &SF_mindustry_Vars_controlPath, "Lmindustry/ai/ControlPathfinder;", 9 },
	{ "fogControl", &class_mindustry_game_FogControl, (intptr_t) &SF_mindustry_Vars_fogControl, "Lmindustry/game/FogControl;", 9 },
	{ "control", &class_mindustry_core_Control, (intptr_t) &SF_mindustry_Vars_control, "Lmindustry/core/Control;", 9 },
	{ "logic", &class_mindustry_core_Logic, (intptr_t) &SF_mindustry_Vars_logic, "Lmindustry/core/Logic;", 9 },
	{ "renderer", &class_mindustry_core_Renderer, (intptr_t) &SF_mindustry_Vars_renderer, "Lmindustry/core/Renderer;", 9 },
	{ "ui", &class_mindustry_core_UI, (intptr_t) &SF_mindustry_Vars_ui, "Lmindustry/core/UI;", 9 },
	{ "netServer", &class_mindustry_core_NetServer, (intptr_t) &SF_mindustry_Vars_netServer, "Lmindustry/core/NetServer;", 9 },
	{ "netClient", &class_mindustry_core_NetClient, (intptr_t) &SF_mindustry_Vars_netClient, "Lmindustry/core/NetClient;", 9 },
	{ "player", &class_mindustry_gen_Player, (intptr_t) &SF_mindustry_Vars_player, "Lmindustry/gen/Player;", 9 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_Vars, 0, "()V", 1 },
	{ "loadAsync", (intptr_t) M_mindustry_Vars_loadAsync, VTABLE_mindustry_Vars_loadAsync, "()V", 1 },
	{ "init", (intptr_t) SM_mindustry_Vars_init, 0, "()V", 9 },
	{ "checkLaunch", (intptr_t) SM_mindustry_Vars_checkLaunch, 0, "()V", 9 },
	{ "finishLaunch", (intptr_t) SM_mindustry_Vars_finishLaunch, 0, "()V", 9 },
	{ "loadLogger", (intptr_t) SM_mindustry_Vars_loadLogger, 0, "()V", 9 },
	{ "loadFileLogger", (intptr_t) SM_mindustry_Vars_loadFileLogger, 0, "()V", 9 },
	{ "loadFileLogger", (intptr_t) SM_mindustry_Vars_loadFileLogger_arc_files_Fi, 0, "(Larc/files/Fi;)V", 9 },
	{ "loadSettings", (intptr_t) SM_mindustry_Vars_loadSettings, 0, "()V", 9 },
	{ "lambda$loadSettings$0", (intptr_t) SM_mindustry_Vars_lambda$loadSettings$0_arc_files_Fi, 0, "(Larc/files/Fi;)V", 4106 },
	{ "lambda$loadFileLogger$0", (intptr_t) SM_mindustry_Vars_lambda$loadFileLogger$0_arc_util_Log$LogHandler_java_io_Writer_arc_util_Log$LogLevel_java_lang_String, 0, "(Larc/util/Log$LogHandler;Ljava/io/Writer;Larc/util/Log$LogLevel;Ljava/lang/String;)V", 4106 },
	{ "lambda$loadLogger$1", (intptr_t) SM_mindustry_Vars_lambda$loadLogger$1_arc_struct_Seq_mindustry_game_EventType$ClientLoadEvent, 0, "(Larc/struct/Seq;Lmindustry/game/EventType$ClientLoadEvent;)V", 4106 },
	{ "lambda$loadLogger$0", (intptr_t) SM_mindustry_Vars_lambda$loadLogger$0_arc_struct_Seq_Array1_java_lang_String_Array1_java_lang_String_arc_util_Log$LogLevel_java_lang_String, 0, "(Larc/struct/Seq;[Ljava/lang/String;[Ljava/lang/String;Larc/util/Log$LogLevel;Ljava/lang/String;)V", 4106 },
	{ "lambda$init$0", (intptr_t) SM_mindustry_Vars_lambda$init$0_mindustry_game_EventType$ContentInitEvent, 0, "(Lmindustry/game/EventType$ContentInitEvent;)V", 4106 },
	{ "<clinit>", (intptr_t) clinit_mindustry_Vars, 0, "()V", 8 },
};

Class class_mindustry_Vars{
		.nativeName = (intptr_t) "mindustry/Vars",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_Vars),
		.classVtable = (intptr_t) vtable_mindustry_Vars,
		.staticInitializer = (intptr_t) clinit_mindustry_Vars,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_Vars,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 137,
		.nativeFields = (intptr_t) fields,
		.methodCount = 15,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 15,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_Vars = registerClass(&class_mindustry_Vars);

}
