#ifndef HEADER_mindustry_entities_comp_SyncComp
#define HEADER_mindustry_entities_comp_SyncComp

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "mindustry/gen/Entityc.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_entities_comp_SyncComp {
	java_lang_Object parent;
	jlong F_lastUpdated;
	jlong F_updateSpacing;
} mindustry_entities_comp_SyncComp;

extern Class class_mindustry_entities_comp_SyncComp;


#define VTABLE_mindustry_entities_comp_SyncComp_hashCode_R_int 0
typedef jint (*func_mindustry_entities_comp_SyncComp_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_SyncComp_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_entities_comp_SyncComp_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_SyncComp_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_entities_comp_SyncComp_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_SyncComp_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_entities_comp_SyncComp_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_SyncComp_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_entities_comp_SyncComp_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_SyncComp_finalize 5
typedef void (*func_mindustry_entities_comp_SyncComp_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_SyncComp_notify 6
typedef void (*func_mindustry_entities_comp_SyncComp_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_SyncComp_notifyAll 7
typedef void (*func_mindustry_entities_comp_SyncComp_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_SyncComp_wait 8
typedef void (*func_mindustry_entities_comp_SyncComp_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_SyncComp_wait_long 9
typedef void (*func_mindustry_entities_comp_SyncComp_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_entities_comp_SyncComp_wait_long_int 10
typedef void (*func_mindustry_entities_comp_SyncComp_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_entities_comp_SyncComp_self_R_mindustry_gen_Entityc 11
typedef jobject (*func_mindustry_entities_comp_SyncComp_self_R_mindustry_gen_Entityc)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_SyncComp_as_R_java_lang_Object 12
typedef jobject (*func_mindustry_entities_comp_SyncComp_as_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_SyncComp_isAdded_R_boolean 13
typedef jbool (*func_mindustry_entities_comp_SyncComp_isAdded_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_SyncComp_isLocal_R_boolean 14
typedef jbool (*func_mindustry_entities_comp_SyncComp_isLocal_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_SyncComp_isRemote_R_boolean 15
typedef jbool (*func_mindustry_entities_comp_SyncComp_isRemote_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_SyncComp_serialize_R_boolean 16
typedef jbool (*func_mindustry_entities_comp_SyncComp_serialize_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_SyncComp_classId_R_int 17
typedef jint (*func_mindustry_entities_comp_SyncComp_classId_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_SyncComp_id_R_int 18
typedef jint (*func_mindustry_entities_comp_SyncComp_id_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_SyncComp_add 19
typedef void (*func_mindustry_entities_comp_SyncComp_add)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_SyncComp_afterRead 20
typedef void (*func_mindustry_entities_comp_SyncComp_afterRead)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_SyncComp_afterReadAll 21
typedef void (*func_mindustry_entities_comp_SyncComp_afterReadAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_SyncComp_beforeWrite 22
typedef void (*func_mindustry_entities_comp_SyncComp_beforeWrite)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_SyncComp_id_int 23
typedef void (*func_mindustry_entities_comp_SyncComp_id_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_entities_comp_SyncComp_read_arc_util_io_Reads 24
typedef void (*func_mindustry_entities_comp_SyncComp_read_arc_util_io_Reads)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_SyncComp_remove 25
typedef void (*func_mindustry_entities_comp_SyncComp_remove)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_SyncComp_update 26
typedef void (*func_mindustry_entities_comp_SyncComp_update)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_SyncComp_write_arc_util_io_Writes 27
typedef void (*func_mindustry_entities_comp_SyncComp_write_arc_util_io_Writes)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_SyncComp_snapSync 28
typedef void (*func_mindustry_entities_comp_SyncComp_snapSync)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_SyncComp_snapInterpolation 29
typedef void (*func_mindustry_entities_comp_SyncComp_snapInterpolation)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_SyncComp_readSync_arc_util_io_Reads 30
typedef void (*func_mindustry_entities_comp_SyncComp_readSync_arc_util_io_Reads)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_SyncComp_writeSync_arc_util_io_Writes 31
typedef void (*func_mindustry_entities_comp_SyncComp_writeSync_arc_util_io_Writes)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_SyncComp_readSyncManual_java_nio_FloatBuffer 32
typedef void (*func_mindustry_entities_comp_SyncComp_readSyncManual_java_nio_FloatBuffer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_SyncComp_writeSyncManual_java_nio_FloatBuffer 33
typedef void (*func_mindustry_entities_comp_SyncComp_writeSyncManual_java_nio_FloatBuffer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_SyncComp_afterSync 34
typedef void (*func_mindustry_entities_comp_SyncComp_afterSync)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_SyncComp_interpolate 35
typedef void (*func_mindustry_entities_comp_SyncComp_interpolate)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_SyncComp_isSyncHidden_mindustry_game_Team_R_boolean 36
typedef jbool (*func_mindustry_entities_comp_SyncComp_isSyncHidden_mindustry_game_Team_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_SyncComp_handleSyncHidden 37
typedef void (*func_mindustry_entities_comp_SyncComp_handleSyncHidden)(jcontext ctx, jobject self);

void mark_mindustry_entities_comp_SyncComp(jobject object, jint mark, jint depth);
void clinit_mindustry_entities_comp_SyncComp(jcontext ctx);
void init_mindustry_entities_comp_SyncComp(jcontext ctx, jobject self);
void M_mindustry_entities_comp_SyncComp_snapSync(jcontext ctx, jobject self);
void M_mindustry_entities_comp_SyncComp_snapInterpolation(jcontext ctx, jobject self);
void M_mindustry_entities_comp_SyncComp_readSync_arc_util_io_Reads(jcontext ctx, jobject self, jobject param0);
void M_mindustry_entities_comp_SyncComp_writeSync_arc_util_io_Writes(jcontext ctx, jobject self, jobject param0);
void M_mindustry_entities_comp_SyncComp_readSyncManual_java_nio_FloatBuffer(jcontext ctx, jobject self, jobject param0);
void M_mindustry_entities_comp_SyncComp_writeSyncManual_java_nio_FloatBuffer(jcontext ctx, jobject self, jobject param0);
void M_mindustry_entities_comp_SyncComp_afterSync(jcontext ctx, jobject self);
void M_mindustry_entities_comp_SyncComp_interpolate(jcontext ctx, jobject self);
jbool M_mindustry_entities_comp_SyncComp_isSyncHidden_mindustry_game_Team_R_boolean(jcontext ctx, jobject self, jobject param0);
void M_mindustry_entities_comp_SyncComp_handleSyncHidden(jcontext ctx, jobject self);
void M_mindustry_entities_comp_SyncComp_update(jcontext ctx, jobject self);
void M_mindustry_entities_comp_SyncComp_remove(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
