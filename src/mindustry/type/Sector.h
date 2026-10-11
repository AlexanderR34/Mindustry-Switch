#ifndef HEADER_mindustry_type_Sector
#define HEADER_mindustry_type_Sector

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_type_Sector {
	java_lang_Object parent;
	jref F_rect;
	jref F_plane;
	jref F_planet;
	jref F_tile;
	jint F_id;
	jref F_save;
	jref F_preset;
	jref F_shieldTarget;
	jref F_info;
	jfloat F_threat;
	jbool F_generateEnemyBase;
} mindustry_type_Sector;

extern Class class_mindustry_type_Sector;

extern jobject SF_mindustry_type_Sector_threats;
extern jobject SF_mindustry_type_Sector_tmpSeq1;

#define VTABLE_mindustry_type_Sector_hashCode_R_int 0
typedef jint (*func_mindustry_type_Sector_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Sector_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_type_Sector_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_Sector_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_type_Sector_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Sector_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_type_Sector_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Sector_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_type_Sector_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Sector_finalize 5
typedef void (*func_mindustry_type_Sector_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Sector_notify 6
typedef void (*func_mindustry_type_Sector_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Sector_notifyAll 7
typedef void (*func_mindustry_type_Sector_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Sector_wait 8
typedef void (*func_mindustry_type_Sector_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Sector_wait_long 9
typedef void (*func_mindustry_type_Sector_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_type_Sector_wait_long_int 10
typedef void (*func_mindustry_type_Sector_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_type_Sector_near_R_arc_struct_Seq 11
typedef jobject (*func_mindustry_type_Sector_near_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Sector_near_arc_func_Cons 12
typedef void (*func_mindustry_type_Sector_near_arc_func_Cons)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_Sector_isNear_mindustry_type_Sector_R_boolean 13
typedef jbool (*func_mindustry_type_Sector_isNear_mindustry_type_Sector_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_Sector_displayThreat_R_java_lang_String 14
typedef jobject (*func_mindustry_type_Sector_displayThreat_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Sector_unlocked_R_boolean 15
typedef jbool (*func_mindustry_type_Sector_unlocked_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Sector_allowLaunchSchematics_R_boolean 16
typedef jbool (*func_mindustry_type_Sector_allowLaunchSchematics_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Sector_allowLaunchLoadout_R_boolean 17
typedef jbool (*func_mindustry_type_Sector_allowLaunchLoadout_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Sector_saveInfo 18
typedef void (*func_mindustry_type_Sector_saveInfo)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Sector_loadInfo 19
typedef void (*func_mindustry_type_Sector_loadInfo)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Sector_clearInfo 20
typedef void (*func_mindustry_type_Sector_clearInfo)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Sector_isShielded_R_boolean 21
typedef jbool (*func_mindustry_type_Sector_isShielded_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Sector_isAttacked_R_boolean 22
typedef jbool (*func_mindustry_type_Sector_isAttacked_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Sector_hasBase_R_boolean 23
typedef jbool (*func_mindustry_type_Sector_hasBase_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Sector_isFrozen_R_boolean 24
typedef jbool (*func_mindustry_type_Sector_isFrozen_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Sector_hasEnemyBase_R_boolean 25
typedef jbool (*func_mindustry_type_Sector_hasEnemyBase_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Sector_isBeingPlayed_R_boolean 26
typedef jbool (*func_mindustry_type_Sector_isBeingPlayed_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Sector_name_R_java_lang_String 27
typedef jobject (*func_mindustry_type_Sector_name_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Sector_setName_java_lang_String 28
typedef void (*func_mindustry_type_Sector_setName_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_Sector_icon_R_arc_graphics_g2d_TextureRegion 29
typedef jobject (*func_mindustry_type_Sector_icon_R_arc_graphics_g2d_TextureRegion)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Sector_iconChar_R_java_lang_String 30
typedef jobject (*func_mindustry_type_Sector_iconChar_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Sector_isCaptured_R_boolean 31
typedef jbool (*func_mindustry_type_Sector_isCaptured_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Sector_hasSave_R_boolean 32
typedef jbool (*func_mindustry_type_Sector_hasSave_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Sector_locked_R_boolean 33
typedef jbool (*func_mindustry_type_Sector_locked_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Sector_getLight_R_float 34
typedef jfloat (*func_mindustry_type_Sector_getLight_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Sector_getSize_R_int 35
typedef jint (*func_mindustry_type_Sector_getSize_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Sector_removeItems_mindustry_type_ItemSeq 36
typedef void (*func_mindustry_type_Sector_removeItems_mindustry_type_ItemSeq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_Sector_removeItem_mindustry_type_Item_int 37
typedef void (*func_mindustry_type_Sector_removeItem_mindustry_type_Item_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_mindustry_type_Sector_addItems_mindustry_type_ItemSeq 38
typedef void (*func_mindustry_type_Sector_addItems_mindustry_type_ItemSeq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_Sector_items_R_mindustry_type_ItemSeq 39
typedef jobject (*func_mindustry_type_Sector_items_R_mindustry_type_ItemSeq)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Sector_makeRect_R_mindustry_type_Sector$SectorRect 40
typedef jobject (*func_mindustry_type_Sector_makeRect_R_mindustry_type_Sector$SectorRect)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Sector_lambda$addItems$1_mindustry_type_Item_int 41
typedef void (*func_mindustry_type_Sector_lambda$addItems$1_mindustry_type_Item_int)(jcontext ctx, jobject self, jobject param0, jint param1);

void mark_mindustry_type_Sector(jobject object, jint mark, jint depth);
void clinit_mindustry_type_Sector(jcontext ctx);
void init_mindustry_type_Sector_mindustry_type_Planet_mindustry_graphics_g3d_PlanetGrid$Ptile(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_mindustry_type_Sector_near_R_arc_struct_Seq(jcontext ctx, jobject self);
void M_mindustry_type_Sector_near_arc_func_Cons(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_type_Sector_isNear_mindustry_type_Sector_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_type_Sector_displayThreat_R_java_lang_String(jcontext ctx, jobject self);
jbool M_mindustry_type_Sector_unlocked_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_type_Sector_allowLaunchSchematics_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_type_Sector_allowLaunchLoadout_R_boolean(jcontext ctx, jobject self);
void M_mindustry_type_Sector_saveInfo(jcontext ctx, jobject self);
void M_mindustry_type_Sector_loadInfo(jcontext ctx, jobject self);
void M_mindustry_type_Sector_clearInfo(jcontext ctx, jobject self);
jbool M_mindustry_type_Sector_isShielded_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_type_Sector_isAttacked_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_type_Sector_hasBase_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_type_Sector_isFrozen_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_type_Sector_hasEnemyBase_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_type_Sector_isBeingPlayed_R_boolean(jcontext ctx, jobject self);
jobject M_mindustry_type_Sector_name_R_java_lang_String(jcontext ctx, jobject self);
void M_mindustry_type_Sector_setName_java_lang_String(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_type_Sector_icon_R_arc_graphics_g2d_TextureRegion(jcontext ctx, jobject self);
jobject M_mindustry_type_Sector_iconChar_R_java_lang_String(jcontext ctx, jobject self);
jbool M_mindustry_type_Sector_isCaptured_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_type_Sector_hasSave_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_type_Sector_locked_R_boolean(jcontext ctx, jobject self);
jfloat M_mindustry_type_Sector_getLight_R_float(jcontext ctx, jobject self);
jint M_mindustry_type_Sector_getSize_R_int(jcontext ctx, jobject self);
void M_mindustry_type_Sector_removeItems_mindustry_type_ItemSeq(jcontext ctx, jobject self, jobject param0);
void M_mindustry_type_Sector_removeItem_mindustry_type_Item_int(jcontext ctx, jobject self, jobject param0, jint param1);
void M_mindustry_type_Sector_addItems_mindustry_type_ItemSeq(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_type_Sector_items_R_mindustry_type_ItemSeq(jcontext ctx, jobject self);
jobject M_mindustry_type_Sector_toString_R_java_lang_String(jcontext ctx, jobject self);
jobject M_mindustry_type_Sector_makeRect_R_mindustry_type_Sector$SectorRect(jcontext ctx, jobject self);
void M_mindustry_type_Sector_lambda$addItems$1_mindustry_type_Item_int(jcontext ctx, jobject self, jobject param0, jint param1);
void SM_mindustry_type_Sector_lambda$addItems$0_mindustry_world_modules_ItemModule_int_mindustry_type_Item_int(jcontext ctx, jobject param0, jint param1, jobject param2, jint param3);
void SM_mindustry_type_Sector_lambda$removeItems$0_mindustry_type_ItemSeq_mindustry_type_Item_int(jcontext ctx, jobject param0, jobject param1, jint param2);
jbool SM_mindustry_type_Sector_lambda$isShielded$0_mindustry_type_Sector_R_boolean(jcontext ctx, jobject param0);
jbool SM_mindustry_type_Sector_lambda$loadInfo$1_mindustry_ctype_UnlockableContent_R_boolean(jcontext ctx, jobject param0);
jbool SM_mindustry_type_Sector_lambda$loadInfo$0_mindustry_ctype_UnlockableContent_R_boolean(jcontext ctx, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
