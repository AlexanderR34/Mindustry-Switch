#ifndef HEADER_mindustry_type_Publishable
#define HEADER_mindustry_type_Publishable

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_type_Publishable {
	java_lang_Object parent;
} mindustry_type_Publishable;

extern Class class_mindustry_type_Publishable;


#define INDEX_mindustry_type_Publishable_getSteamID_R_java_lang_String 0
typedef jobject (*func_mindustry_type_Publishable_getSteamID_R_java_lang_String)(jcontext ctx, jobject self);
#define INDEX_mindustry_type_Publishable_addSteamID_java_lang_String 1
typedef void (*func_mindustry_type_Publishable_addSteamID_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_type_Publishable_removeSteamID 2
typedef void (*func_mindustry_type_Publishable_removeSteamID)(jcontext ctx, jobject self);
#define INDEX_mindustry_type_Publishable_steamTitle_R_java_lang_String 3
typedef jobject (*func_mindustry_type_Publishable_steamTitle_R_java_lang_String)(jcontext ctx, jobject self);
#define INDEX_mindustry_type_Publishable_steamDescription_R_java_lang_String 4
typedef jobject (*func_mindustry_type_Publishable_steamDescription_R_java_lang_String)(jcontext ctx, jobject self);
#define INDEX_mindustry_type_Publishable_steamTag_R_java_lang_String 5
typedef jobject (*func_mindustry_type_Publishable_steamTag_R_java_lang_String)(jcontext ctx, jobject self);
#define INDEX_mindustry_type_Publishable_createSteamFolder_java_lang_String_R_arc_files_Fi 6
typedef jobject (*func_mindustry_type_Publishable_createSteamFolder_java_lang_String_R_arc_files_Fi)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_type_Publishable_createSteamPreview_java_lang_String_R_arc_files_Fi 7
typedef jobject (*func_mindustry_type_Publishable_createSteamPreview_java_lang_String_R_arc_files_Fi)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_type_Publishable_extraTags_R_arc_struct_Seq 8
typedef jobject (*func_mindustry_type_Publishable_extraTags_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define INDEX_mindustry_type_Publishable_hasSteamID_R_boolean 9
typedef jbool (*func_mindustry_type_Publishable_hasSteamID_R_boolean)(jcontext ctx, jobject self);
#define INDEX_mindustry_type_Publishable_prePublish_R_boolean 10
typedef jbool (*func_mindustry_type_Publishable_prePublish_R_boolean)(jcontext ctx, jobject self);

void mark_mindustry_type_Publishable(jobject object, jint mark, jint depth);
void clinit_mindustry_type_Publishable(jcontext ctx);
jobject M_mindustry_type_Publishable_extraTags_R_arc_struct_Seq(jcontext ctx, jobject self);
jbool M_mindustry_type_Publishable_hasSteamID_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_type_Publishable_prePublish_R_boolean(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
