#ifndef HEADER_mindustry_game_Saves
#define HEADER_mindustry_game_Saves

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_game_Saves {
	java_lang_Object parent;
	jref F_saves;
	jref F_current;
	jref F_lastSectorSave;
	jbool F_saving;
	jfloat F_time;
	jlong F_totalPlaytime;
	jlong F_lastTimestamp;
} mindustry_game_Saves;

extern Class class_mindustry_game_Saves;

extern jobject SF_mindustry_game_Saves_dateFormat;

#define VTABLE_mindustry_game_Saves_hashCode_R_int 0
typedef jint (*func_mindustry_game_Saves_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Saves_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_game_Saves_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_Saves_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_game_Saves_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Saves_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_game_Saves_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Saves_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_game_Saves_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Saves_finalize 5
typedef void (*func_mindustry_game_Saves_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Saves_notify 6
typedef void (*func_mindustry_game_Saves_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Saves_notifyAll 7
typedef void (*func_mindustry_game_Saves_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Saves_wait 8
typedef void (*func_mindustry_game_Saves_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Saves_wait_long 9
typedef void (*func_mindustry_game_Saves_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_game_Saves_wait_long_int 10
typedef void (*func_mindustry_game_Saves_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_game_Saves_clearOldMegabaseSectors 11
typedef void (*func_mindustry_game_Saves_clearOldMegabaseSectors)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Saves_load 12
typedef void (*func_mindustry_game_Saves_load)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Saves_getLastSector_R_mindustry_game_Saves$SaveSlot 13
typedef jobject (*func_mindustry_game_Saves_getLastSector_R_mindustry_game_Saves$SaveSlot)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Saves_getCurrent_R_mindustry_game_Saves$SaveSlot 14
typedef jobject (*func_mindustry_game_Saves_getCurrent_R_mindustry_game_Saves$SaveSlot)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Saves_update 15
typedef void (*func_mindustry_game_Saves_update)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Saves_getTotalPlaytime_R_long 16
typedef jlong (*func_mindustry_game_Saves_getTotalPlaytime_R_long)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Saves_resetSave 17
typedef void (*func_mindustry_game_Saves_resetSave)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Saves_isSaving_R_boolean 18
typedef jbool (*func_mindustry_game_Saves_isSaving_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Saves_getSectorFile_mindustry_type_Sector_R_arc_files_Fi 19
typedef jobject (*func_mindustry_game_Saves_getSectorFile_mindustry_type_Sector_R_arc_files_Fi)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_Saves_saveSector_mindustry_type_Sector 20
typedef void (*func_mindustry_game_Saves_saveSector_mindustry_type_Sector)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_Saves_addSave_java_lang_String_R_mindustry_game_Saves$SaveSlot 21
typedef jobject (*func_mindustry_game_Saves_addSave_java_lang_String_R_mindustry_game_Saves$SaveSlot)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_Saves_importSave_arc_files_Fi_R_mindustry_game_Saves$SaveSlot 22
typedef jobject (*func_mindustry_game_Saves_importSave_arc_files_Fi_R_mindustry_game_Saves$SaveSlot)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_Saves_getNextSlotFile_R_arc_files_Fi 23
typedef jobject (*func_mindustry_game_Saves_getNextSlotFile_R_arc_files_Fi)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Saves_getSaveSlots_R_arc_struct_Seq 24
typedef jobject (*func_mindustry_game_Saves_getSaveSlots_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Saves_deleteAll 25
typedef void (*func_mindustry_game_Saves_deleteAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Saves_lambda$update$0 26
typedef void (*func_mindustry_game_Saves_lambda$update$0)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Saves_lambda$load$0_arc_struct_Seq_arc_files_Fi 27
typedef void (*func_mindustry_game_Saves_lambda$load$0_arc_struct_Seq_arc_files_Fi)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_game_Saves_lambda$load$1_arc_files_Fi_R_mindustry_game_Saves$SaveSlot 28
typedef jobject (*func_mindustry_game_Saves_lambda$load$1_arc_files_Fi_R_mindustry_game_Saves$SaveSlot)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_Saves_lambda$new$0_mindustry_game_EventType$StateChangeEvent 29
typedef void (*func_mindustry_game_Saves_lambda$new$0_mindustry_game_EventType$StateChangeEvent)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_game_Saves(jobject object, jint mark, jint depth);
void clinit_mindustry_game_Saves(jcontext ctx);
void init_mindustry_game_Saves(jcontext ctx, jobject self);
void M_mindustry_game_Saves_clearOldMegabaseSectors(jcontext ctx, jobject self);
void M_mindustry_game_Saves_load(jcontext ctx, jobject self);
jobject M_mindustry_game_Saves_getLastSector_R_mindustry_game_Saves$SaveSlot(jcontext ctx, jobject self);
jobject M_mindustry_game_Saves_getCurrent_R_mindustry_game_Saves$SaveSlot(jcontext ctx, jobject self);
void M_mindustry_game_Saves_update(jcontext ctx, jobject self);
jlong M_mindustry_game_Saves_getTotalPlaytime_R_long(jcontext ctx, jobject self);
void M_mindustry_game_Saves_resetSave(jcontext ctx, jobject self);
jbool M_mindustry_game_Saves_isSaving_R_boolean(jcontext ctx, jobject self);
jobject M_mindustry_game_Saves_getSectorFile_mindustry_type_Sector_R_arc_files_Fi(jcontext ctx, jobject self, jobject param0);
void M_mindustry_game_Saves_saveSector_mindustry_type_Sector(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_game_Saves_addSave_java_lang_String_R_mindustry_game_Saves$SaveSlot(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_game_Saves_importSave_arc_files_Fi_R_mindustry_game_Saves$SaveSlot(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_game_Saves_getNextSlotFile_R_arc_files_Fi(jcontext ctx, jobject self);
jobject M_mindustry_game_Saves_getSaveSlots_R_arc_struct_Seq(jcontext ctx, jobject self);
void M_mindustry_game_Saves_deleteAll(jcontext ctx, jobject self);
void M_mindustry_game_Saves_lambda$update$0(jcontext ctx, jobject self);
jbool SM_mindustry_game_Saves_lambda$load$3_mindustry_type_Sector_mindustry_type_SectorPreset_R_boolean(jcontext ctx, jobject param0, jobject param1);
jbool SM_mindustry_game_Saves_lambda$load$2_mindustry_game_Saves$SaveSlot_R_boolean(jcontext ctx, jobject param0);
void M_mindustry_game_Saves_lambda$load$0_arc_struct_Seq_arc_files_Fi(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_mindustry_game_Saves_lambda$load$1_arc_files_Fi_R_mindustry_game_Saves$SaveSlot(jcontext ctx, jobject self, jobject param0);
jbool SM_mindustry_game_Saves_lambda$clearOldMegabaseSectors$0_arc_struct_IntSet_mindustry_game_Saves$SaveSlot_R_boolean(jcontext ctx, jobject param0, jobject param1);
void M_mindustry_game_Saves_lambda$new$0_mindustry_game_EventType$StateChangeEvent(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
