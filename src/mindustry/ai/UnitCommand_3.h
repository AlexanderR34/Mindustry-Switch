#ifndef HEADER_mindustry_ai_UnitCommand$3
#define HEADER_mindustry_ai_UnitCommand$3

#include "Clearwing.h"
#include "mindustry/ai/UnitCommand.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_ai_UnitCommand$3 {
	mindustry_ai_UnitCommand parent;
} mindustry_ai_UnitCommand$3;

extern Class class_mindustry_ai_UnitCommand$3;


#define VTABLE_mindustry_ai_UnitCommand$3_hashCode_R_int 0
typedef jint (*func_mindustry_ai_UnitCommand$3_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_UnitCommand$3_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_ai_UnitCommand$3_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ai_UnitCommand$3_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_ai_UnitCommand$3_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_UnitCommand$3_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_ai_UnitCommand$3_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_UnitCommand$3_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_ai_UnitCommand$3_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_UnitCommand$3_finalize 5
typedef void (*func_mindustry_ai_UnitCommand$3_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_UnitCommand$3_notify 6
typedef void (*func_mindustry_ai_UnitCommand$3_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_UnitCommand$3_notifyAll 7
typedef void (*func_mindustry_ai_UnitCommand$3_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_UnitCommand$3_wait 8
typedef void (*func_mindustry_ai_UnitCommand$3_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_UnitCommand$3_wait_long 9
typedef void (*func_mindustry_ai_UnitCommand$3_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_ai_UnitCommand$3_wait_long_int 10
typedef void (*func_mindustry_ai_UnitCommand$3_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_ai_UnitCommand$3_compareTo_java_lang_Object_R_int 11
typedef jint (*func_mindustry_ai_UnitCommand$3_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ai_UnitCommand$3_getContentType_R_mindustry_ctype_ContentType 12
typedef jobject (*func_mindustry_ai_UnitCommand$3_getContentType_R_mindustry_ctype_ContentType)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_UnitCommand$3_removeContent 13
typedef void (*func_mindustry_ai_UnitCommand$3_removeContent)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_UnitCommand$3_init 14
typedef void (*func_mindustry_ai_UnitCommand$3_init)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_UnitCommand$3_postInit 15
typedef void (*func_mindustry_ai_UnitCommand$3_postInit)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_UnitCommand$3_afterPatch 16
typedef void (*func_mindustry_ai_UnitCommand$3_afterPatch)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_UnitCommand$3_load 17
typedef void (*func_mindustry_ai_UnitCommand$3_load)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_UnitCommand$3_loadIcon 18
typedef void (*func_mindustry_ai_UnitCommand$3_loadIcon)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_UnitCommand$3_hasErrored_R_boolean 19
typedef jbool (*func_mindustry_ai_UnitCommand$3_hasErrored_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_UnitCommand$3_isVanilla_R_boolean 20
typedef jbool (*func_mindustry_ai_UnitCommand$3_isVanilla_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_UnitCommand$3_isModded_R_boolean 21
typedef jbool (*func_mindustry_ai_UnitCommand$3_isModded_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_UnitCommand$3_isPatchContent_R_boolean 22
typedef jbool (*func_mindustry_ai_UnitCommand$3_isPatchContent_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_UnitCommand$3_compareTo_mindustry_ctype_Content_R_int 23
typedef jint (*func_mindustry_ai_UnitCommand$3_compareTo_mindustry_ctype_Content_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ai_UnitCommand$3_localized_R_java_lang_String 24
typedef jobject (*func_mindustry_ai_UnitCommand$3_localized_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_UnitCommand$3_getIcon_R_arc_scene_style_TextureRegionDrawable 25
typedef jobject (*func_mindustry_ai_UnitCommand$3_getIcon_R_arc_scene_style_TextureRegionDrawable)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_UnitCommand$3_getEmoji_R_char 26
typedef jchar (*func_mindustry_ai_UnitCommand$3_getEmoji_R_char)(jcontext ctx, jobject self);

void mark_mindustry_ai_UnitCommand$3(jobject object, jint mark, jint depth);
void clinit_mindustry_ai_UnitCommand$3(jcontext ctx);
void init_mindustry_ai_UnitCommand$3_java_lang_String_java_lang_String_arc_input_KeyBind_arc_func_Func(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3);

#ifdef __cplusplus
}
#endif

#endif
