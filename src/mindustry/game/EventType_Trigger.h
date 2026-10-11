#ifndef HEADER_mindustry_game_EventType$Trigger
#define HEADER_mindustry_game_EventType$Trigger

#include "Clearwing.h"
#include "java/lang/Enum.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_game_EventType$Trigger {
	java_lang_Enum parent;
} mindustry_game_EventType$Trigger;

extern Class class_mindustry_game_EventType$Trigger;

extern jobject SF_mindustry_game_EventType$Trigger_shock;
extern jobject SF_mindustry_game_EventType$Trigger_cannotUpgrade;
extern jobject SF_mindustry_game_EventType$Trigger_fireCreate;
extern jobject SF_mindustry_game_EventType$Trigger_openConsole;
extern jobject SF_mindustry_game_EventType$Trigger_blastFreeze;
extern jobject SF_mindustry_game_EventType$Trigger_impactPower;
extern jobject SF_mindustry_game_EventType$Trigger_blastGenerator;
extern jobject SF_mindustry_game_EventType$Trigger_shockwaveTowerUse;
extern jobject SF_mindustry_game_EventType$Trigger_forceProjectorBreak;
extern jobject SF_mindustry_game_EventType$Trigger_thoriumReactorOverheat;
extern jobject SF_mindustry_game_EventType$Trigger_neoplasmReact;
extern jobject SF_mindustry_game_EventType$Trigger_fireExtinguish;
extern jobject SF_mindustry_game_EventType$Trigger_acceleratorUse;
extern jobject SF_mindustry_game_EventType$Trigger_newGame;
extern jobject SF_mindustry_game_EventType$Trigger_tutorialComplete;
extern jobject SF_mindustry_game_EventType$Trigger_flameAmmo;
extern jobject SF_mindustry_game_EventType$Trigger_resupplyTurret;
extern jobject SF_mindustry_game_EventType$Trigger_turretCool;
extern jobject SF_mindustry_game_EventType$Trigger_enablePixelation;
extern jobject SF_mindustry_game_EventType$Trigger_exclusionDeath;
extern jobject SF_mindustry_game_EventType$Trigger_suicideBomb;
extern jobject SF_mindustry_game_EventType$Trigger_openWiki;
extern jobject SF_mindustry_game_EventType$Trigger_teamCoreDamage;
extern jobject SF_mindustry_game_EventType$Trigger_socketConfigChanged;
extern jobject SF_mindustry_game_EventType$Trigger_update;
extern jobject SF_mindustry_game_EventType$Trigger_beforeGameUpdate;
extern jobject SF_mindustry_game_EventType$Trigger_afterGameUpdate;
extern jobject SF_mindustry_game_EventType$Trigger_unitCommandChange;
extern jobject SF_mindustry_game_EventType$Trigger_unitCommandPosition;
extern jobject SF_mindustry_game_EventType$Trigger_unitCommandAttack;
extern jobject SF_mindustry_game_EventType$Trigger_unitCommandBoost;
extern jobject SF_mindustry_game_EventType$Trigger_importMod;
extern jobject SF_mindustry_game_EventType$Trigger_draw;
extern jobject SF_mindustry_game_EventType$Trigger_drawOver;
extern jobject SF_mindustry_game_EventType$Trigger_preDraw;
extern jobject SF_mindustry_game_EventType$Trigger_postDraw;
extern jobject SF_mindustry_game_EventType$Trigger_uiDrawBegin;
extern jobject SF_mindustry_game_EventType$Trigger_uiDrawEnd;
extern jobject SF_mindustry_game_EventType$Trigger_universeDrawBegin;
extern jobject SF_mindustry_game_EventType$Trigger_universeDraw;
extern jobject SF_mindustry_game_EventType$Trigger_universeDrawEnd;
extern jobject SF_mindustry_game_EventType$Trigger_$VALUES;

#define VTABLE_mindustry_game_EventType$Trigger_hashCode_R_int 0
typedef jint (*func_mindustry_game_EventType$Trigger_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_EventType$Trigger_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_game_EventType$Trigger_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_EventType$Trigger_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_game_EventType$Trigger_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_EventType$Trigger_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_game_EventType$Trigger_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_EventType$Trigger_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_game_EventType$Trigger_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_EventType$Trigger_finalize 5
typedef void (*func_mindustry_game_EventType$Trigger_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_EventType$Trigger_notify 6
typedef void (*func_mindustry_game_EventType$Trigger_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_EventType$Trigger_notifyAll 7
typedef void (*func_mindustry_game_EventType$Trigger_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_EventType$Trigger_wait 8
typedef void (*func_mindustry_game_EventType$Trigger_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_EventType$Trigger_wait_long 9
typedef void (*func_mindustry_game_EventType$Trigger_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_game_EventType$Trigger_wait_long_int 10
typedef void (*func_mindustry_game_EventType$Trigger_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_game_EventType$Trigger_compareTo_java_lang_Object_R_int 11
typedef jint (*func_mindustry_game_EventType$Trigger_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_EventType$Trigger_compareTo_java_lang_Enum_R_int 12
typedef jint (*func_mindustry_game_EventType$Trigger_compareTo_java_lang_Enum_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_EventType$Trigger_name_R_java_lang_String 13
typedef jobject (*func_mindustry_game_EventType$Trigger_name_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_EventType$Trigger_ordinal_R_int 14
typedef jint (*func_mindustry_game_EventType$Trigger_ordinal_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_EventType$Trigger_getDeclaringClass_R_java_lang_Class 15
typedef jobject (*func_mindustry_game_EventType$Trigger_getDeclaringClass_R_java_lang_Class)(jcontext ctx, jobject self);

void mark_mindustry_game_EventType$Trigger(jobject object, jint mark, jint depth);
void clinit_mindustry_game_EventType$Trigger(jcontext ctx);
jobject SM_mindustry_game_EventType$Trigger_values_R_Array1_mindustry_game_EventType$Trigger(jcontext ctx);
jobject SM_mindustry_game_EventType$Trigger_valueOf_java_lang_String_R_mindustry_game_EventType$Trigger(jcontext ctx, jobject param0);
void init_mindustry_game_EventType$Trigger_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1);
jobject SM_mindustry_game_EventType$Trigger_$values_R_Array1_mindustry_game_EventType$Trigger(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
