#ifndef HEADER_mindustry_Vars
#define HEADER_mindustry_Vars

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "arc/assets/Loadable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_Vars {
	java_lang_Object parent;
} mindustry_Vars;

extern Class class_mindustry_Vars;

extern jbool SF_mindustry_Vars_failedToLaunch;
extern jbool SF_mindustry_Vars_loadLocales;
extern jbool SF_mindustry_Vars_loadedLogger;
extern jbool SF_mindustry_Vars_loadedFileLogger;
extern jobject SF_mindustry_Vars_steamPlayerName;
extern jint SF_mindustry_Vars_minModGameVersion;
extern jint SF_mindustry_Vars_minJavaModGameVersion;
extern jbool SF_mindustry_Vars_showSectorSubmissions;
extern jbool SF_mindustry_Vars_forceBeServers;
extern jbool SF_mindustry_Vars_skipModCode;
extern jobject SF_mindustry_Vars_defaultContentIcons;
extern jint SF_mindustry_Vars_defaultEnv;
extern jint SF_mindustry_Vars_darkRadius;
extern jint SF_mindustry_Vars_maxLoadoutSchematicPad;
extern jobject SF_mindustry_Vars_schematicBaseStart;
extern jint SF_mindustry_Vars_bufferSize;
extern jobject SF_mindustry_Vars_charset;
extern jobject SF_mindustry_Vars_appName;
extern jobject SF_mindustry_Vars_ghApi;
extern jobject SF_mindustry_Vars_discordURL;
extern jobject SF_mindustry_Vars_modGuideURL;
extern jobject SF_mindustry_Vars_patchesGuideURL;
extern jobject SF_mindustry_Vars_serverJsonBeURLs;
extern jobject SF_mindustry_Vars_serverJsonURLs;
extern jobject SF_mindustry_Vars_modJsonURLs;
extern jobject SF_mindustry_Vars_steamBansURLs;
extern jobject SF_mindustry_Vars_reportIssueURL;
extern jobject SF_mindustry_Vars_defaultServers;
extern jobject SF_mindustry_Vars_cachedServers;
extern jint SF_mindustry_Vars_maxGlErrors;
extern jint SF_mindustry_Vars_maxBlockSize;
extern jfloat SF_mindustry_Vars_mineTransferRange;
extern jint SF_mindustry_Vars_maxPlayerPreviewPlans;
extern jint SF_mindustry_Vars_maxTextLength;
extern jint SF_mindustry_Vars_maxPingTextLength;
extern jint SF_mindustry_Vars_maxNameLength;
extern jfloat SF_mindustry_Vars_itemSize;
extern jfloat SF_mindustry_Vars_finalWorldBounds;
extern jfloat SF_mindustry_Vars_buildingRange;
extern jfloat SF_mindustry_Vars_unitCollisionRadiusScale;
extern jfloat SF_mindustry_Vars_itemTransferRange;
extern jfloat SF_mindustry_Vars_logicItemTransferRange;
extern jfloat SF_mindustry_Vars_turnDuration;
extern jfloat SF_mindustry_Vars_baseInvasionChance;
extern jfloat SF_mindustry_Vars_invasionGracePeriod;
extern jfloat SF_mindustry_Vars_minArmorDamage;
extern jint SF_mindustry_Vars_tilesize;
extern jfloat SF_mindustry_Vars_tilePayload;
extern jfloat SF_mindustry_Vars_iconXLarge;
extern jfloat SF_mindustry_Vars_iconLarge;
extern jfloat SF_mindustry_Vars_iconMed;
extern jfloat SF_mindustry_Vars_iconSmall;
extern jfloat SF_mindustry_Vars_macNotchHeight;
extern jbool SF_mindustry_Vars_updateEditorOnChange;
extern jobject SF_mindustry_Vars_playerColors;
extern jobject SF_mindustry_Vars_accessibleIcons;
extern jint SF_mindustry_Vars_maxTcpSize;
extern jint SF_mindustry_Vars_port;
extern jint SF_mindustry_Vars_multicastPort;
extern jint SF_mindustry_Vars_maxModSubtitleLength;
extern jobject SF_mindustry_Vars_multicastGroup;
extern jfloat SF_mindustry_Vars_maxDeltaClient;
extern jfloat SF_mindustry_Vars_maxDeltaServer;
extern jbool SF_mindustry_Vars_clientLoaded;
extern jbool SF_mindustry_Vars_hadSerpuloRemaps;
extern jint SF_mindustry_Vars_maxTextureSize;
extern jint SF_mindustry_Vars_maxSchematicSize;
extern jbool SF_mindustry_Vars_showSectorLandInfo;
extern jbool SF_mindustry_Vars_checkScreenshotMemory;
extern jbool SF_mindustry_Vars_confirmExit;
extern jbool SF_mindustry_Vars_disableUI;
extern jbool SF_mindustry_Vars_disableSave;
extern jbool SF_mindustry_Vars_testMobile;
extern jbool SF_mindustry_Vars_mobile;
extern jbool SF_mindustry_Vars_ios;
extern jbool SF_mindustry_Vars_android;
extern jbool SF_mindustry_Vars_headless;
extern jbool SF_mindustry_Vars_steam;
extern jbool SF_mindustry_Vars_clearSectors;
extern jbool SF_mindustry_Vars_enableLight;
extern jbool SF_mindustry_Vars_enableDarkness;
extern jbool SF_mindustry_Vars_debugDrawAvoidance;
extern jbool SF_mindustry_Vars_loadedServerCache;
extern jbool SF_mindustry_Vars_fetchedServers;
extern jobject SF_mindustry_Vars_dataDirectory;
extern jobject SF_mindustry_Vars_screenshotDirectory;
extern jobject SF_mindustry_Vars_customMapDirectory;
extern jobject SF_mindustry_Vars_mapPreviewDirectory;
extern jobject SF_mindustry_Vars_assetCacheDirectory;
extern jobject SF_mindustry_Vars_tmpDirectory;
extern jobject SF_mindustry_Vars_saveDirectory;
extern jobject SF_mindustry_Vars_modDirectory;
extern jobject SF_mindustry_Vars_schematicDirectory;
extern jobject SF_mindustry_Vars_bebuildDirectory;
extern jobject SF_mindustry_Vars_launchIDFile;
extern jobject SF_mindustry_Vars_serverCacheFile;
extern jobject SF_mindustry_Vars_emptyMap;
extern jobject SF_mindustry_Vars_emptyTile;
extern jobject SF_mindustry_Vars_mapExtension;
extern jobject SF_mindustry_Vars_saveExtension;
extern jobject SF_mindustry_Vars_schematicExtension;
extern jobject SF_mindustry_Vars_javaPath;
extern jobject SF_mindustry_Vars_locales;
extern jobject SF_mindustry_Vars_mainExecutor;
extern jobject SF_mindustry_Vars_tree;
extern jobject SF_mindustry_Vars_net;
extern jobject SF_mindustry_Vars_content;
extern jobject SF_mindustry_Vars_state;
extern jobject SF_mindustry_Vars_collisions;
extern jobject SF_mindustry_Vars_waves;
extern jobject SF_mindustry_Vars_platform;
extern jobject SF_mindustry_Vars_mods;
extern jobject SF_mindustry_Vars_schematics;
extern jobject SF_mindustry_Vars_becontrol;
extern jobject SF_mindustry_Vars_asyncCore;
extern jobject SF_mindustry_Vars_bases;
extern jobject SF_mindustry_Vars_logicVars;
extern jobject SF_mindustry_Vars_editor;
extern jobject SF_mindustry_Vars_avoidance;
extern jobject SF_mindustry_Vars_unitPhysics;
extern jobject SF_mindustry_Vars_assetCache;
extern jobject SF_mindustry_Vars_service;
extern jobject SF_mindustry_Vars_universe;
extern jobject SF_mindustry_Vars_world;
extern jobject SF_mindustry_Vars_maps;
extern jobject SF_mindustry_Vars_spawner;
extern jobject SF_mindustry_Vars_indexer;
extern jobject SF_mindustry_Vars_pathfinder;
extern jobject SF_mindustry_Vars_controlPath;
extern jobject SF_mindustry_Vars_fogControl;
extern jobject SF_mindustry_Vars_control;
extern jobject SF_mindustry_Vars_logic;
extern jobject SF_mindustry_Vars_renderer;
extern jobject SF_mindustry_Vars_ui;
extern jobject SF_mindustry_Vars_netServer;
extern jobject SF_mindustry_Vars_netClient;
extern jobject SF_mindustry_Vars_player;

#define VTABLE_mindustry_Vars_hashCode_R_int 0
typedef jint (*func_mindustry_Vars_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_Vars_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_Vars_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_Vars_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_Vars_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_Vars_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_Vars_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_Vars_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_Vars_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_Vars_finalize 5
typedef void (*func_mindustry_Vars_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_Vars_notify 6
typedef void (*func_mindustry_Vars_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_Vars_notifyAll 7
typedef void (*func_mindustry_Vars_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_Vars_wait 8
typedef void (*func_mindustry_Vars_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_Vars_wait_long 9
typedef void (*func_mindustry_Vars_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_Vars_wait_long_int 10
typedef void (*func_mindustry_Vars_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_Vars_loadAsync 11
typedef void (*func_mindustry_Vars_loadAsync)(jcontext ctx, jobject self);
#define VTABLE_mindustry_Vars_loadSync 12
typedef void (*func_mindustry_Vars_loadSync)(jcontext ctx, jobject self);
#define VTABLE_mindustry_Vars_getName_R_java_lang_String 13
typedef jobject (*func_mindustry_Vars_getName_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_Vars_getDependencies_R_arc_struct_Seq 14
typedef jobject (*func_mindustry_Vars_getDependencies_R_arc_struct_Seq)(jcontext ctx, jobject self);

void mark_mindustry_Vars(jobject object, jint mark, jint depth);
void clinit_mindustry_Vars(jcontext ctx);
void init_mindustry_Vars(jcontext ctx, jobject self);
void M_mindustry_Vars_loadAsync(jcontext ctx, jobject self);
void SM_mindustry_Vars_init(jcontext ctx);
void SM_mindustry_Vars_checkLaunch(jcontext ctx);
void SM_mindustry_Vars_finishLaunch(jcontext ctx);
void SM_mindustry_Vars_loadLogger(jcontext ctx);
void SM_mindustry_Vars_loadFileLogger(jcontext ctx);
void SM_mindustry_Vars_loadFileLogger_arc_files_Fi(jcontext ctx, jobject param0);
void SM_mindustry_Vars_loadSettings(jcontext ctx);
void SM_mindustry_Vars_lambda$loadSettings$0_arc_files_Fi(jcontext ctx, jobject param0);
void SM_mindustry_Vars_lambda$loadFileLogger$0_arc_util_Log$LogHandler_java_io_Writer_arc_util_Log$LogLevel_java_lang_String(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3);
void SM_mindustry_Vars_lambda$loadLogger$1_arc_struct_Seq_mindustry_game_EventType$ClientLoadEvent(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_Vars_lambda$loadLogger$0_arc_struct_Seq_Array1_java_lang_String_Array1_java_lang_String_arc_util_Log$LogLevel_java_lang_String(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4);
void SM_mindustry_Vars_lambda$init$0_mindustry_game_EventType$ContentInitEvent(jcontext ctx, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
