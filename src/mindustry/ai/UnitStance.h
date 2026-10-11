#ifndef HEADER_mindustry_ai_UnitStance
#define HEADER_mindustry_ai_UnitStance

#include "Clearwing.h"
#include "mindustry/ctype/MappableContent.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_ai_UnitStance {
	mindustry_ctype_MappableContent parent;
	jref F_icon;
	jref F_keybind;
	jref F_incompatibleCommands;
	jref F_incompatibleStances;
	jbool F_toggle;
	jref F_incompatibleStanceBits;
	jref F_incompatibleCommandBits;
} mindustry_ai_UnitStance;

extern Class class_mindustry_ai_UnitStance;

extern jobject SF_mindustry_ai_UnitStance_stop;
extern jobject SF_mindustry_ai_UnitStance_holdFire;
extern jobject SF_mindustry_ai_UnitStance_pursueTarget;
extern jobject SF_mindustry_ai_UnitStance_patrol;
extern jobject SF_mindustry_ai_UnitStance_ram;
extern jobject SF_mindustry_ai_UnitStance_boost;
extern jobject SF_mindustry_ai_UnitStance_holdPosition;
extern jobject SF_mindustry_ai_UnitStance_mineAuto;

#define VTABLE_mindustry_ai_UnitStance_hashCode_R_int 0
typedef jint (*func_mindustry_ai_UnitStance_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_UnitStance_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_ai_UnitStance_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ai_UnitStance_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_ai_UnitStance_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_UnitStance_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_ai_UnitStance_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_UnitStance_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_ai_UnitStance_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_UnitStance_finalize 5
typedef void (*func_mindustry_ai_UnitStance_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_UnitStance_notify 6
typedef void (*func_mindustry_ai_UnitStance_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_UnitStance_notifyAll 7
typedef void (*func_mindustry_ai_UnitStance_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_UnitStance_wait 8
typedef void (*func_mindustry_ai_UnitStance_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_UnitStance_wait_long 9
typedef void (*func_mindustry_ai_UnitStance_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_ai_UnitStance_wait_long_int 10
typedef void (*func_mindustry_ai_UnitStance_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_ai_UnitStance_compareTo_java_lang_Object_R_int 11
typedef jint (*func_mindustry_ai_UnitStance_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ai_UnitStance_getContentType_R_mindustry_ctype_ContentType 12
typedef jobject (*func_mindustry_ai_UnitStance_getContentType_R_mindustry_ctype_ContentType)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_UnitStance_removeContent 13
typedef void (*func_mindustry_ai_UnitStance_removeContent)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_UnitStance_init 14
typedef void (*func_mindustry_ai_UnitStance_init)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_UnitStance_postInit 15
typedef void (*func_mindustry_ai_UnitStance_postInit)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_UnitStance_afterPatch 16
typedef void (*func_mindustry_ai_UnitStance_afterPatch)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_UnitStance_load 17
typedef void (*func_mindustry_ai_UnitStance_load)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_UnitStance_loadIcon 18
typedef void (*func_mindustry_ai_UnitStance_loadIcon)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_UnitStance_hasErrored_R_boolean 19
typedef jbool (*func_mindustry_ai_UnitStance_hasErrored_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_UnitStance_isVanilla_R_boolean 20
typedef jbool (*func_mindustry_ai_UnitStance_isVanilla_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_UnitStance_isModded_R_boolean 21
typedef jbool (*func_mindustry_ai_UnitStance_isModded_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_UnitStance_isPatchContent_R_boolean 22
typedef jbool (*func_mindustry_ai_UnitStance_isPatchContent_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_UnitStance_compareTo_mindustry_ctype_Content_R_int 23
typedef jint (*func_mindustry_ai_UnitStance_compareTo_mindustry_ctype_Content_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ai_UnitStance_isCompatible_mindustry_ai_UnitCommand_R_boolean 24
typedef jbool (*func_mindustry_ai_UnitStance_isCompatible_mindustry_ai_UnitCommand_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ai_UnitStance_localized_R_java_lang_String 25
typedef jobject (*func_mindustry_ai_UnitStance_localized_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_UnitStance_getIcon_R_arc_scene_style_TextureRegionDrawable 26
typedef jobject (*func_mindustry_ai_UnitStance_getIcon_R_arc_scene_style_TextureRegionDrawable)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_UnitStance_getEmoji_R_char 27
typedef jchar (*func_mindustry_ai_UnitStance_getEmoji_R_char)(jcontext ctx, jobject self);

void mark_mindustry_ai_UnitStance(jobject object, jint mark, jint depth);
void clinit_mindustry_ai_UnitStance(jcontext ctx);
void init_mindustry_ai_UnitStance_java_lang_String_java_lang_String_arc_input_KeyBind_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jbool param3);
void init_mindustry_ai_UnitStance_java_lang_String_java_lang_String_arc_input_KeyBind(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
void M_mindustry_ai_UnitStance_init(jcontext ctx, jobject self);
jbool M_mindustry_ai_UnitStance_isCompatible_mindustry_ai_UnitCommand_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_ai_UnitStance_localized_R_java_lang_String(jcontext ctx, jobject self);
jobject M_mindustry_ai_UnitStance_getIcon_R_arc_scene_style_TextureRegionDrawable(jcontext ctx, jobject self);
jchar M_mindustry_ai_UnitStance_getEmoji_R_char(jcontext ctx, jobject self);
jobject M_mindustry_ai_UnitStance_getContentType_R_mindustry_ctype_ContentType(jcontext ctx, jobject self);
jobject M_mindustry_ai_UnitStance_toString_R_java_lang_String(jcontext ctx, jobject self);
void SM_mindustry_ai_UnitStance_loadAll(jcontext ctx);
void SM_mindustry_ai_UnitStance_loadAfterMods(jcontext ctx);
void SM_mindustry_ai_UnitStance_lambda$loadAll$0_mindustry_ai_UnitCommand(jcontext ctx, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
