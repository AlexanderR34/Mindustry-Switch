#ifndef HEADER_mindustry_core_PerfCounter
#define HEADER_mindustry_core_PerfCounter

#include "Clearwing.h"
#include "java/lang/Enum.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_core_PerfCounter {
	java_lang_Enum parent;
	jlong F_lastUpdateFrame;
	jlong F_valueRefreshTime;
	jfloat F_refreshValue;
	jlong F_beginTime;
	jlong F_partValue;
	jbool F_began;
	jref F_mean;
} mindustry_core_PerfCounter;

extern Class class_mindustry_core_PerfCounter;

extern jobject SF_mindustry_core_PerfCounter_frame;
extern jobject SF_mindustry_core_PerfCounter_update;
extern jobject SF_mindustry_core_PerfCounter_other;
extern jobject SF_mindustry_core_PerfCounter_stateUpdate;
extern jobject SF_mindustry_core_PerfCounter_entityMisc;
extern jobject SF_mindustry_core_PerfCounter_entityUpdate;
extern jobject SF_mindustry_core_PerfCounter_buildingUpdate;
extern jobject SF_mindustry_core_PerfCounter_powerUpdate;
extern jobject SF_mindustry_core_PerfCounter_unitUpdate;
extern jobject SF_mindustry_core_PerfCounter_unitPhysicsAsync;
extern jobject SF_mindustry_core_PerfCounter_unitPhysicsWait;
extern jobject SF_mindustry_core_PerfCounter_bulletUpdate;
extern jobject SF_mindustry_core_PerfCounter_ui;
extern jobject SF_mindustry_core_PerfCounter_render;
extern jobject SF_mindustry_core_PerfCounter_all;
extern jobject SF_mindustry_core_PerfCounter_displayedCounters;
extern jint SF_mindustry_core_PerfCounter_meanWindow;
extern jint SF_mindustry_core_PerfCounter_refreshTimeMillis;
extern jobject SF_mindustry_core_PerfCounter_$VALUES;

#define VTABLE_mindustry_core_PerfCounter_hashCode_R_int 0
typedef jint (*func_mindustry_core_PerfCounter_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_PerfCounter_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_core_PerfCounter_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_PerfCounter_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_core_PerfCounter_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_PerfCounter_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_core_PerfCounter_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_PerfCounter_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_core_PerfCounter_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_PerfCounter_finalize 5
typedef void (*func_mindustry_core_PerfCounter_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_PerfCounter_notify 6
typedef void (*func_mindustry_core_PerfCounter_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_PerfCounter_notifyAll 7
typedef void (*func_mindustry_core_PerfCounter_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_PerfCounter_wait 8
typedef void (*func_mindustry_core_PerfCounter_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_PerfCounter_wait_long 9
typedef void (*func_mindustry_core_PerfCounter_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_core_PerfCounter_wait_long_int 10
typedef void (*func_mindustry_core_PerfCounter_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_core_PerfCounter_compareTo_java_lang_Object_R_int 11
typedef jint (*func_mindustry_core_PerfCounter_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_PerfCounter_compareTo_java_lang_Enum_R_int 12
typedef jint (*func_mindustry_core_PerfCounter_compareTo_java_lang_Enum_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_PerfCounter_name_R_java_lang_String 13
typedef jobject (*func_mindustry_core_PerfCounter_name_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_PerfCounter_ordinal_R_int 14
typedef jint (*func_mindustry_core_PerfCounter_ordinal_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_PerfCounter_getDeclaringClass_R_java_lang_Class 15
typedef jobject (*func_mindustry_core_PerfCounter_getDeclaringClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_PerfCounter_add_long 16
typedef void (*func_mindustry_core_PerfCounter_add_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_core_PerfCounter_begin 17
typedef void (*func_mindustry_core_PerfCounter_begin)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_PerfCounter_end 18
typedef void (*func_mindustry_core_PerfCounter_end)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_PerfCounter_end_long 19
typedef void (*func_mindustry_core_PerfCounter_end_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_core_PerfCounter_checkUpdate 20
typedef void (*func_mindustry_core_PerfCounter_checkUpdate)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_PerfCounter_beginPart 21
typedef void (*func_mindustry_core_PerfCounter_beginPart)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_PerfCounter_endPart 22
typedef void (*func_mindustry_core_PerfCounter_endPart)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_PerfCounter_finishParts 23
typedef void (*func_mindustry_core_PerfCounter_finishParts)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_PerfCounter_valueMs_R_float 24
typedef jfloat (*func_mindustry_core_PerfCounter_valueMs_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_PerfCounter_latestValueNs_R_long 25
typedef jlong (*func_mindustry_core_PerfCounter_latestValueNs_R_long)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_PerfCounter_rawValueMs_R_float 26
typedef jfloat (*func_mindustry_core_PerfCounter_rawValueMs_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_PerfCounter_rawValueNs_R_long 27
typedef jlong (*func_mindustry_core_PerfCounter_rawValueNs_R_long)(jcontext ctx, jobject self);

void mark_mindustry_core_PerfCounter(jobject object, jint mark, jint depth);
void clinit_mindustry_core_PerfCounter(jcontext ctx);
jobject SM_mindustry_core_PerfCounter_values_R_Array1_mindustry_core_PerfCounter(jcontext ctx);
jobject SM_mindustry_core_PerfCounter_valueOf_java_lang_String_R_mindustry_core_PerfCounter(jcontext ctx, jobject param0);
void init_mindustry_core_PerfCounter_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1);
void M_mindustry_core_PerfCounter_add_long(jcontext ctx, jobject self, jlong param0);
void M_mindustry_core_PerfCounter_begin(jcontext ctx, jobject self);
void M_mindustry_core_PerfCounter_end(jcontext ctx, jobject self);
void M_mindustry_core_PerfCounter_end_long(jcontext ctx, jobject self, jlong param0);
void M_mindustry_core_PerfCounter_checkUpdate(jcontext ctx, jobject self);
void M_mindustry_core_PerfCounter_beginPart(jcontext ctx, jobject self);
void M_mindustry_core_PerfCounter_endPart(jcontext ctx, jobject self);
void M_mindustry_core_PerfCounter_finishParts(jcontext ctx, jobject self);
jfloat M_mindustry_core_PerfCounter_valueMs_R_float(jcontext ctx, jobject self);
jlong M_mindustry_core_PerfCounter_latestValueNs_R_long(jcontext ctx, jobject self);
jfloat M_mindustry_core_PerfCounter_rawValueMs_R_float(jcontext ctx, jobject self);
jlong M_mindustry_core_PerfCounter_rawValueNs_R_long(jcontext ctx, jobject self);
jobject SM_mindustry_core_PerfCounter_$values_R_Array1_mindustry_core_PerfCounter(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
