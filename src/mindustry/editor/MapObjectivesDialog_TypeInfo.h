#ifndef HEADER_mindustry_editor_MapObjectivesDialog$TypeInfo
#define HEADER_mindustry_editor_MapObjectivesDialog$TypeInfo

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_editor_MapObjectivesDialog$TypeInfo {
	java_lang_Object parent;
	jref F_raw;
	jref F_element;
	jref F_key;
} mindustry_editor_MapObjectivesDialog$TypeInfo;

extern Class class_mindustry_editor_MapObjectivesDialog$TypeInfo;


#define VTABLE_mindustry_editor_MapObjectivesDialog$TypeInfo_hashCode_R_int 0
typedef jint (*func_mindustry_editor_MapObjectivesDialog$TypeInfo_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_MapObjectivesDialog$TypeInfo_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_editor_MapObjectivesDialog$TypeInfo_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_editor_MapObjectivesDialog$TypeInfo_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_editor_MapObjectivesDialog$TypeInfo_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_MapObjectivesDialog$TypeInfo_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_editor_MapObjectivesDialog$TypeInfo_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_MapObjectivesDialog$TypeInfo_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_editor_MapObjectivesDialog$TypeInfo_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_MapObjectivesDialog$TypeInfo_finalize 5
typedef void (*func_mindustry_editor_MapObjectivesDialog$TypeInfo_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_MapObjectivesDialog$TypeInfo_notify 6
typedef void (*func_mindustry_editor_MapObjectivesDialog$TypeInfo_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_MapObjectivesDialog$TypeInfo_notifyAll 7
typedef void (*func_mindustry_editor_MapObjectivesDialog$TypeInfo_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_MapObjectivesDialog$TypeInfo_wait 8
typedef void (*func_mindustry_editor_MapObjectivesDialog$TypeInfo_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_MapObjectivesDialog$TypeInfo_wait_long 9
typedef void (*func_mindustry_editor_MapObjectivesDialog$TypeInfo_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_editor_MapObjectivesDialog$TypeInfo_wait_long_int 10
typedef void (*func_mindustry_editor_MapObjectivesDialog$TypeInfo_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_mindustry_editor_MapObjectivesDialog$TypeInfo(jobject object, jint mark, jint depth);
void clinit_mindustry_editor_MapObjectivesDialog$TypeInfo(jcontext ctx);
void init_mindustry_editor_MapObjectivesDialog$TypeInfo_java_lang_reflect_Field(jcontext ctx, jobject self, jobject param0);
void init_mindustry_editor_MapObjectivesDialog$TypeInfo_java_lang_Class(jcontext ctx, jobject self, jobject param0);
void init_mindustry_editor_MapObjectivesDialog$TypeInfo_java_lang_Class_mindustry_editor_MapObjectivesDialog$TypeInfo(jcontext ctx, jobject self, jobject param0, jobject param1);
void init_mindustry_editor_MapObjectivesDialog$TypeInfo_java_lang_Class_java_lang_reflect_Type(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject SM_mindustry_editor_MapObjectivesDialog$TypeInfo_getParam_java_lang_reflect_Type_int_R_mindustry_editor_MapObjectivesDialog$TypeInfo(jcontext ctx, jobject param0, jint param1);
jobject SM_mindustry_editor_MapObjectivesDialog$TypeInfo_raw_java_lang_reflect_Type_R_java_lang_Class(jcontext ctx, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
