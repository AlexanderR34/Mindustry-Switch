#ifndef HEADER_mindustry_ai_UnitCommand$2
#define HEADER_mindustry_ai_UnitCommand$2

#include "Clearwing.h"
#include "mindustry/ai/UnitCommand.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_ai_UnitCommand$2 {
	mindustry_ai_UnitCommand parent;
} mindustry_ai_UnitCommand$2;

extern Class class_mindustry_ai_UnitCommand$2;


#define VTABLE_mindustry_ai_UnitCommand$2_hashCode_R_int 0
typedef jint (*func_mindustry_ai_UnitCommand$2_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_UnitCommand$2_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_ai_UnitCommand$2_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ai_UnitCommand$2_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_ai_UnitCommand$2_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_UnitCommand$2_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_ai_UnitCommand$2_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_UnitCommand$2_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_ai_UnitCommand$2_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_UnitCommand$2_finalize 5
typedef void (*func_mindustry_ai_UnitCommand$2_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_UnitCommand$2_notify 6
typedef void (*func_mindustry_ai_UnitCommand$2_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_UnitCommand$2_notifyAll 7
typedef void (*func_mindustry_ai_UnitCommand$2_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_UnitCommand$2_wait 8
typedef void (*func_mindustry_ai_UnitCommand$2_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_UnitCommand$2_wait_long 9
typedef void (*func_mindustry_ai_UnitCommand$2_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_ai_UnitCommand$2_wait_long_int 10
typedef void (*func_mindustry_ai_UnitCommand$2_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_ai_UnitCommand$2_compareTo_java_lang_Object_R_int 11
typedef jint (*func_mindustry_ai_UnitCommand$2_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ai_UnitCommand$2_getContentType_R_mindustry_ctype_ContentType 12
typedef jobject (*func_mindustry_ai_UnitCommand$2_getContentType_R_mindustry_ctype_ContentType)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_UnitCommand$2_removeContent 13
typedef void (*func_mindustry_ai_UnitCommand$2_removeContent)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_UnitCommand$2_init 14
typedef void (*func_mindustry_ai_UnitCommand$2_init)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_UnitCommand$2_postInit 15
typedef void (*func_mindustry_ai_UnitCommand$2_postInit)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_UnitCommand$2_afterPatch 16
typedef void (*func_mindustry_ai_UnitCommand$2_afterPatch)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_UnitCommand$2_load 17
typedef void (*func_mindustry_ai_UnitCommand$2_load)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_UnitCommand$2_loadIcon 18
typedef void (*func_mindustry_ai_UnitCommand$2_loadIcon)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_UnitCommand$2_hasErrored_R_boolean 19
typedef jbool (*func_mindustry_ai_UnitCommand$2_hasErrored_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_UnitCommand$2_isVanilla_R_boolean 20
typedef jbool (*func_mindustry_ai_UnitCommand$2_isVanilla_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_UnitCommand$2_isModded_R_boolean 21
typedef jbool (*func_mindustry_ai_UnitCommand$2_isModded_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_UnitCommand$2_isPatchContent_R_boolean 22
typedef jbool (*func_mindustry_ai_UnitCommand$2_isPatchContent_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_UnitCommand$2_compareTo_mindustry_ctype_Content_R_int 23
typedef jint (*func_mindustry_ai_UnitCommand$2_compareTo_mindustry_ctype_Content_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ai_UnitCommand$2_localized_R_java_lang_String 24
typedef jobject (*func_mindustry_ai_UnitCommand$2_localized_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_UnitCommand$2_getIcon_R_arc_scene_style_TextureRegionDrawable 25
typedef jobject (*func_mindustry_ai_UnitCommand$2_getIcon_R_arc_scene_style_TextureRegionDrawable)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_UnitCommand$2_getEmoji_R_char 26
typedef jchar (*func_mindustry_ai_UnitCommand$2_getEmoji_R_char)(jcontext ctx, jobject self);

void mark_mindustry_ai_UnitCommand$2(jobject object, jint mark, jint depth);
void clinit_mindustry_ai_UnitCommand$2(jcontext ctx);
void init_mindustry_ai_UnitCommand$2_java_lang_String_java_lang_String_arc_input_KeyBind_arc_func_Func(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3);

#ifdef __cplusplus
}
#endif

#endif
