#ifndef HEADER_mindustry_net_Administration$IdEncounterInfo
#define HEADER_mindustry_net_Administration$IdEncounterInfo

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_net_Administration$IdEncounterInfo {
	java_lang_Object parent;
	jlong F_initialTime;
	jref F_ids;
} mindustry_net_Administration$IdEncounterInfo;

extern Class class_mindustry_net_Administration$IdEncounterInfo;


#define VTABLE_mindustry_net_Administration$IdEncounterInfo_hashCode_R_int 0
typedef jint (*func_mindustry_net_Administration$IdEncounterInfo_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Administration$IdEncounterInfo_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_net_Administration$IdEncounterInfo_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_net_Administration$IdEncounterInfo_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_net_Administration$IdEncounterInfo_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Administration$IdEncounterInfo_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_net_Administration$IdEncounterInfo_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Administration$IdEncounterInfo_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_net_Administration$IdEncounterInfo_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Administration$IdEncounterInfo_finalize 5
typedef void (*func_mindustry_net_Administration$IdEncounterInfo_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Administration$IdEncounterInfo_notify 6
typedef void (*func_mindustry_net_Administration$IdEncounterInfo_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Administration$IdEncounterInfo_notifyAll 7
typedef void (*func_mindustry_net_Administration$IdEncounterInfo_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Administration$IdEncounterInfo_wait 8
typedef void (*func_mindustry_net_Administration$IdEncounterInfo_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Administration$IdEncounterInfo_wait_long 9
typedef void (*func_mindustry_net_Administration$IdEncounterInfo_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_net_Administration$IdEncounterInfo_wait_long_int 10
typedef void (*func_mindustry_net_Administration$IdEncounterInfo_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_mindustry_net_Administration$IdEncounterInfo(jobject object, jint mark, jint depth);
void clinit_mindustry_net_Administration$IdEncounterInfo(jcontext ctx);
void init_mindustry_net_Administration$IdEncounterInfo(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
