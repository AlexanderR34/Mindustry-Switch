#ifndef HEADER_mindustry_type_TeamEntry
#define HEADER_mindustry_type_TeamEntry

#include "Clearwing.h"
#include "mindustry/ctype/UnlockableContent.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_type_TeamEntry {
	mindustry_ctype_UnlockableContent parent;
	jref F_team;
} mindustry_type_TeamEntry;

extern Class class_mindustry_type_TeamEntry;


#define VTABLE_mindustry_type_TeamEntry_hashCode_R_int 0
typedef jint (*func_mindustry_type_TeamEntry_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_TeamEntry_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_type_TeamEntry_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_TeamEntry_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_type_TeamEntry_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_TeamEntry_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_type_TeamEntry_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_TeamEntry_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_type_TeamEntry_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_TeamEntry_finalize 5
typedef void (*func_mindustry_type_TeamEntry_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_TeamEntry_notify 6
typedef void (*func_mindustry_type_TeamEntry_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_TeamEntry_notifyAll 7
typedef void (*func_mindustry_type_TeamEntry_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_TeamEntry_wait 8
typedef void (*func_mindustry_type_TeamEntry_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_TeamEntry_wait_long 9
typedef void (*func_mindustry_type_TeamEntry_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_type_TeamEntry_wait_long_int 10
typedef void (*func_mindustry_type_TeamEntry_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_type_TeamEntry_compareTo_java_lang_Object_R_int 11
typedef jint (*func_mindustry_type_TeamEntry_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_TeamEntry_getContentType_R_mindustry_ctype_ContentType 12
typedef jobject (*func_mindustry_type_TeamEntry_getContentType_R_mindustry_ctype_ContentType)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_TeamEntry_removeContent 13
typedef void (*func_mindustry_type_TeamEntry_removeContent)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_TeamEntry_init 14
typedef void (*func_mindustry_type_TeamEntry_init)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_TeamEntry_postInit 15
typedef void (*func_mindustry_type_TeamEntry_postInit)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_TeamEntry_afterPatch 16
typedef void (*func_mindustry_type_TeamEntry_afterPatch)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_TeamEntry_load 17
typedef void (*func_mindustry_type_TeamEntry_load)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_TeamEntry_loadIcon 18
typedef void (*func_mindustry_type_TeamEntry_loadIcon)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_TeamEntry_hasErrored_R_boolean 19
typedef jbool (*func_mindustry_type_TeamEntry_hasErrored_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_TeamEntry_isVanilla_R_boolean 20
typedef jbool (*func_mindustry_type_TeamEntry_isVanilla_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_TeamEntry_isModded_R_boolean 21
typedef jbool (*func_mindustry_type_TeamEntry_isModded_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_TeamEntry_isPatchContent_R_boolean 22
typedef jbool (*func_mindustry_type_TeamEntry_isPatchContent_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_TeamEntry_compareTo_mindustry_ctype_Content_R_int 23
typedef jint (*func_mindustry_type_TeamEntry_compareTo_mindustry_ctype_Content_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_TeamEntry_isBanned_R_boolean 24
typedef jbool (*func_mindustry_type_TeamEntry_isBanned_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_TeamEntry_isOnPlanet_mindustry_type_Planet_R_boolean 25
typedef jbool (*func_mindustry_type_TeamEntry_isOnPlanet_mindustry_type_Planet_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_TeamEntry_getLogicId_R_int 26
typedef jint (*func_mindustry_type_TeamEntry_getLogicId_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_TeamEntry_displayDescription_R_java_lang_String 27
typedef jobject (*func_mindustry_type_TeamEntry_displayDescription_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_TeamEntry_checkStats 28
typedef void (*func_mindustry_type_TeamEntry_checkStats)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_TeamEntry_setStats 29
typedef void (*func_mindustry_type_TeamEntry_setStats)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_TeamEntry_computeStats_R_mindustry_world_meta_Stats 30
typedef jobject (*func_mindustry_type_TeamEntry_computeStats_R_mindustry_world_meta_Stats)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_TeamEntry_displayExtra_arc_scene_ui_layout_Table 31
typedef void (*func_mindustry_type_TeamEntry_displayExtra_arc_scene_ui_layout_Table)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_TeamEntry_createIcons_mindustry_graphics_MultiPacker 32
typedef void (*func_mindustry_type_TeamEntry_createIcons_mindustry_graphics_MultiPacker)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_TeamEntry_makeOutline_mindustry_graphics_MultiPacker$PageType_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_boolean_arc_graphics_Color_int 33
typedef void (*func_mindustry_type_TeamEntry_makeOutline_mindustry_graphics_MultiPacker$PageType_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_boolean_arc_graphics_Color_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jbool param3, jobject param4, jint param5);
#define VTABLE_mindustry_type_TeamEntry_makeOutline_mindustry_graphics_MultiPacker$PageType_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_boolean_arc_graphics_Color_int_int 34
typedef void (*func_mindustry_type_TeamEntry_makeOutline_mindustry_graphics_MultiPacker$PageType_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_boolean_arc_graphics_Color_int_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jbool param3, jobject param4, jint param5, jint param6);
#define VTABLE_mindustry_type_TeamEntry_makeOutline_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_java_lang_String_arc_graphics_Color_int 35
typedef void (*func_mindustry_type_TeamEntry_makeOutline_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_java_lang_String_arc_graphics_Color_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jint param4);
#define VTABLE_mindustry_type_TeamEntry_makeOutline_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_java_lang_String_arc_graphics_Color 36
typedef void (*func_mindustry_type_TeamEntry_makeOutline_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_java_lang_String_arc_graphics_Color)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3);
#define VTABLE_mindustry_type_TeamEntry_researchRequirements_R_Array1_mindustry_type_ItemStack 37
typedef jobject (*func_mindustry_type_TeamEntry_researchRequirements_R_Array1_mindustry_type_ItemStack)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_TeamEntry_emoji_R_java_lang_String 38
typedef jobject (*func_mindustry_type_TeamEntry_emoji_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_TeamEntry_emojiChar_R_int 39
typedef jint (*func_mindustry_type_TeamEntry_emojiChar_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_TeamEntry_hasEmoji_R_boolean 40
typedef jbool (*func_mindustry_type_TeamEntry_hasEmoji_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_TeamEntry_getDependencies_arc_func_Cons 41
typedef void (*func_mindustry_type_TeamEntry_getDependencies_arc_func_Cons)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_TeamEntry_onUnlock 42
typedef void (*func_mindustry_type_TeamEntry_onUnlock)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_TeamEntry_isHidden_R_boolean 43
typedef jbool (*func_mindustry_type_TeamEntry_isHidden_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_TeamEntry_showUnlock_R_boolean 44
typedef jbool (*func_mindustry_type_TeamEntry_showUnlock_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_TeamEntry_logicVisible_R_boolean 45
typedef jbool (*func_mindustry_type_TeamEntry_logicVisible_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_TeamEntry_unlock 46
typedef void (*func_mindustry_type_TeamEntry_unlock)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_TeamEntry_quietUnlock 47
typedef void (*func_mindustry_type_TeamEntry_quietUnlock)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_TeamEntry_unlockedNowHost_R_boolean 48
typedef jbool (*func_mindustry_type_TeamEntry_unlockedNowHost_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_TeamEntry_unlockedHost_R_boolean 49
typedef jbool (*func_mindustry_type_TeamEntry_unlockedHost_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_TeamEntry_unlockedNow_R_boolean 50
typedef jbool (*func_mindustry_type_TeamEntry_unlockedNow_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_TeamEntry_unlocked_R_boolean 51
typedef jbool (*func_mindustry_type_TeamEntry_unlocked_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_TeamEntry_clearUnlock 52
typedef void (*func_mindustry_type_TeamEntry_clearUnlock)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_TeamEntry_locked_R_boolean 53
typedef jbool (*func_mindustry_type_TeamEntry_locked_R_boolean)(jcontext ctx, jobject self);

void mark_mindustry_type_TeamEntry(jobject object, jint mark, jint depth);
void clinit_mindustry_type_TeamEntry(jcontext ctx);
void init_mindustry_type_TeamEntry_java_lang_String_mindustry_game_Team(jcontext ctx, jobject self, jobject param0, jobject param1);
void init_mindustry_type_TeamEntry_mindustry_game_Team(jcontext ctx, jobject self, jobject param0);
void M_mindustry_type_TeamEntry_displayExtra_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_type_TeamEntry_getContentType_R_mindustry_ctype_ContentType(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
