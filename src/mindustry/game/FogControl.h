#ifndef HEADER_mindustry_game_FogControl
#define HEADER_mindustry_game_FogControl

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "mindustry/io/SaveFileReader_CustomChunk.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_game_FogControl {
	java_lang_Object parent;
	volatile jref F_fog;
	jref F_staticEvents;
	jref F_dynamicEventQueue;
	jref F_unitEventQueue;
	jref F_dynamicEvents;
	jref F_staticFogThread;
	jref F_dynamicFogThread;
	jbool F_justLoaded;
	jbool F_loadedStatic;
	jint F_lastEntityUpdateIndex;
} mindustry_game_FogControl;

extern Class class_mindustry_game_FogControl;

extern volatile jint SF_mindustry_game_FogControl_ww;
extern volatile jint SF_mindustry_game_FogControl_wh;
extern jint SF_mindustry_game_FogControl_dynamicUpdateInterval;
extern jobject SF_mindustry_game_FogControl_notifyStatic;
extern jobject SF_mindustry_game_FogControl_notifyDynamic;

#define VTABLE_mindustry_game_FogControl_hashCode_R_int 0
typedef jint (*func_mindustry_game_FogControl_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_FogControl_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_game_FogControl_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_FogControl_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_game_FogControl_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_FogControl_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_game_FogControl_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_FogControl_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_game_FogControl_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_FogControl_finalize 5
typedef void (*func_mindustry_game_FogControl_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_FogControl_notify 6
typedef void (*func_mindustry_game_FogControl_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_FogControl_notifyAll 7
typedef void (*func_mindustry_game_FogControl_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_FogControl_wait 8
typedef void (*func_mindustry_game_FogControl_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_FogControl_wait_long 9
typedef void (*func_mindustry_game_FogControl_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_game_FogControl_wait_long_int 10
typedef void (*func_mindustry_game_FogControl_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_game_FogControl_write_java_io_DataOutput 11
typedef void (*func_mindustry_game_FogControl_write_java_io_DataOutput)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_FogControl_read_java_io_DataInput 12
typedef void (*func_mindustry_game_FogControl_read_java_io_DataInput)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_FogControl_read_java_io_DataInput_int 13
typedef void (*func_mindustry_game_FogControl_read_java_io_DataInput_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_mindustry_game_FogControl_shouldWrite_R_boolean 14
typedef jbool (*func_mindustry_game_FogControl_shouldWrite_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_FogControl_writeNet_R_boolean 15
typedef jbool (*func_mindustry_game_FogControl_writeNet_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_FogControl_getDiscovered_mindustry_game_Team_R_arc_struct_Bits 16
typedef jobject (*func_mindustry_game_FogControl_getDiscovered_mindustry_game_Team_R_arc_struct_Bits)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_FogControl_isDiscovered_mindustry_game_Team_int_int_R_boolean 17
typedef jbool (*func_mindustry_game_FogControl_isDiscovered_mindustry_game_Team_int_int_R_boolean)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_mindustry_game_FogControl_isVisible_mindustry_game_Team_float_float_R_boolean 18
typedef jbool (*func_mindustry_game_FogControl_isVisible_mindustry_game_Team_float_float_R_boolean)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
#define VTABLE_mindustry_game_FogControl_isVisibleTile_mindustry_game_Team_int_int_R_boolean 19
typedef jbool (*func_mindustry_game_FogControl_isVisibleTile_mindustry_game_Team_int_int_R_boolean)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_mindustry_game_FogControl_resetFog 20
typedef void (*func_mindustry_game_FogControl_resetFog)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_FogControl_data_mindustry_game_Team_R_mindustry_game_FogControl$FogData 21
typedef jobject (*func_mindustry_game_FogControl_data_mindustry_game_Team_R_mindustry_game_FogControl$FogData)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_FogControl_stop 22
typedef void (*func_mindustry_game_FogControl_stop)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_FogControl_pushStaticBlocks_boolean 23
typedef void (*func_mindustry_game_FogControl_pushStaticBlocks_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_game_FogControl_pushEvent_long_boolean 24
typedef void (*func_mindustry_game_FogControl_pushEvent_long_boolean)(jcontext ctx, jobject self, jlong param0, jbool param1);
#define VTABLE_mindustry_game_FogControl_forceUpdate_mindustry_game_Team_mindustry_gen_Building 25
typedef void (*func_mindustry_game_FogControl_forceUpdate_mindustry_game_Team_mindustry_gen_Building)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_game_FogControl_update 26
typedef void (*func_mindustry_game_FogControl_update)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_FogControl_updateStatic 27
typedef void (*func_mindustry_game_FogControl_updateStatic)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_FogControl_updateDynamic_arc_struct_Bits 28
typedef void (*func_mindustry_game_FogControl_updateDynamic_arc_struct_Bits)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_FogControl_lambda$new$4_mindustry_game_EventType$UnitDestroyEvent 29
typedef void (*func_mindustry_game_FogControl_lambda$new$4_mindustry_game_EventType$UnitDestroyEvent)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_FogControl_lambda$new$3_mindustry_game_EventType$TilePreChangeEvent 30
typedef void (*func_mindustry_game_FogControl_lambda$new$3_mindustry_game_EventType$TilePreChangeEvent)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_FogControl_lambda$new$2_mindustry_game_EventType$TileChangeEvent 31
typedef void (*func_mindustry_game_FogControl_lambda$new$2_mindustry_game_EventType$TileChangeEvent)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_FogControl_lambda$new$1_mindustry_game_EventType$WorldLoadEvent 32
typedef void (*func_mindustry_game_FogControl_lambda$new$1_mindustry_game_EventType$WorldLoadEvent)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_FogControl_lambda$new$0_mindustry_game_EventType$ResetEvent 33
typedef void (*func_mindustry_game_FogControl_lambda$new$0_mindustry_game_EventType$ResetEvent)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_game_FogControl(jobject object, jint mark, jint depth);
void clinit_mindustry_game_FogControl(jcontext ctx);
void init_mindustry_game_FogControl(jcontext ctx, jobject self);
jobject M_mindustry_game_FogControl_getDiscovered_mindustry_game_Team_R_arc_struct_Bits(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_game_FogControl_isDiscovered_mindustry_game_Team_int_int_R_boolean(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
jbool M_mindustry_game_FogControl_isVisible_mindustry_game_Team_float_float_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
jbool M_mindustry_game_FogControl_isVisibleTile_mindustry_game_Team_int_int_R_boolean(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
void M_mindustry_game_FogControl_resetFog(jcontext ctx, jobject self);
jobject M_mindustry_game_FogControl_data_mindustry_game_Team_R_mindustry_game_FogControl$FogData(jcontext ctx, jobject self, jobject param0);
void M_mindustry_game_FogControl_stop(jcontext ctx, jobject self);
void M_mindustry_game_FogControl_pushStaticBlocks_boolean(jcontext ctx, jobject self, jbool param0);
void M_mindustry_game_FogControl_pushEvent_long_boolean(jcontext ctx, jobject self, jlong param0, jbool param1);
void M_mindustry_game_FogControl_forceUpdate_mindustry_game_Team_mindustry_gen_Building(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_mindustry_game_FogControl_update(jcontext ctx, jobject self);
void M_mindustry_game_FogControl_updateStatic(jcontext ctx, jobject self);
void M_mindustry_game_FogControl_updateDynamic_arc_struct_Bits(jcontext ctx, jobject self, jobject param0);
void M_mindustry_game_FogControl_write_java_io_DataOutput(jcontext ctx, jobject self, jobject param0);
void M_mindustry_game_FogControl_read_java_io_DataInput(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_game_FogControl_shouldWrite_R_boolean(jcontext ctx, jobject self);
void SM_mindustry_game_FogControl_circle_arc_struct_Bits_int_int_int(jcontext ctx, jobject param0, jint param1, jint param2, jint param3);
void SM_mindustry_game_FogControl_hline_arc_struct_Bits_int_int_int(jcontext ctx, jobject param0, jint param1, jint param2, jint param3);
void M_mindustry_game_FogControl_lambda$new$4_mindustry_game_EventType$UnitDestroyEvent(jcontext ctx, jobject self, jobject param0);
void M_mindustry_game_FogControl_lambda$new$3_mindustry_game_EventType$TilePreChangeEvent(jcontext ctx, jobject self, jobject param0);
void M_mindustry_game_FogControl_lambda$new$2_mindustry_game_EventType$TileChangeEvent(jcontext ctx, jobject self, jobject param0);
void M_mindustry_game_FogControl_lambda$new$1_mindustry_game_EventType$WorldLoadEvent(jcontext ctx, jobject self, jobject param0);
void M_mindustry_game_FogControl_lambda$new$0_mindustry_game_EventType$ResetEvent(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
