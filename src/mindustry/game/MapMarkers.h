#ifndef HEADER_mindustry_game_MapMarkers
#define HEADER_mindustry_game_MapMarkers

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/lang/Iterable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_game_MapMarkers {
	java_lang_Object parent;
	jref F_map;
	jref F_worldMarkers;
	jref F_mapMarkers;
	jref F_lightMarkers;
} mindustry_game_MapMarkers;

extern Class class_mindustry_game_MapMarkers;


#define VTABLE_mindustry_game_MapMarkers_hashCode_R_int 0
typedef jint (*func_mindustry_game_MapMarkers_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_MapMarkers_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_game_MapMarkers_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_MapMarkers_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_game_MapMarkers_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_MapMarkers_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_game_MapMarkers_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_MapMarkers_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_game_MapMarkers_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_MapMarkers_finalize 5
typedef void (*func_mindustry_game_MapMarkers_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_MapMarkers_notify 6
typedef void (*func_mindustry_game_MapMarkers_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_MapMarkers_notifyAll 7
typedef void (*func_mindustry_game_MapMarkers_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_MapMarkers_wait 8
typedef void (*func_mindustry_game_MapMarkers_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_MapMarkers_wait_long 9
typedef void (*func_mindustry_game_MapMarkers_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_game_MapMarkers_wait_long_int 10
typedef void (*func_mindustry_game_MapMarkers_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_game_MapMarkers_iterator_R_java_util_Iterator 11
typedef jobject (*func_mindustry_game_MapMarkers_iterator_R_java_util_Iterator)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_MapMarkers_forEach_java_util_function_Consumer 12
typedef void (*func_mindustry_game_MapMarkers_forEach_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_MapMarkers_spliterator_R_java_util_Spliterator 13
typedef jobject (*func_mindustry_game_MapMarkers_spliterator_R_java_util_Spliterator)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_MapMarkers_clear 14
typedef void (*func_mindustry_game_MapMarkers_clear)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_MapMarkers_add_int_mindustry_game_MapObjectives$ObjectiveMarker 15
typedef void (*func_mindustry_game_MapMarkers_add_int_mindustry_game_MapObjectives$ObjectiveMarker)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_mindustry_game_MapMarkers_remove_int 16
typedef void (*func_mindustry_game_MapMarkers_remove_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_game_MapMarkers_get_int_R_mindustry_game_MapObjectives$ObjectiveMarker 17
typedef jobject (*func_mindustry_game_MapMarkers_get_int_R_mindustry_game_MapObjectives$ObjectiveMarker)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_game_MapMarkers_has_int_R_boolean 18
typedef jbool (*func_mindustry_game_MapMarkers_has_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_game_MapMarkers_size_R_int 19
typedef jint (*func_mindustry_game_MapMarkers_size_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_MapMarkers_write_java_io_DataOutput 20
typedef void (*func_mindustry_game_MapMarkers_write_java_io_DataOutput)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_MapMarkers_read_java_io_DataInput 21
typedef void (*func_mindustry_game_MapMarkers_read_java_io_DataInput)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_MapMarkers_updateMarker_arc_struct_Seq_mindustry_game_MapObjectives$ObjectiveMarker_boolean_arc_func_Intf_mindustry_game_MapMarkers$MarkerSetter 22
typedef void (*func_mindustry_game_MapMarkers_updateMarker_arc_struct_Seq_mindustry_game_MapObjectives$ObjectiveMarker_boolean_arc_func_Intf_mindustry_game_MapMarkers$MarkerSetter)(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2, jobject param3, jobject param4);
#define VTABLE_mindustry_game_MapMarkers_setMarker_arc_struct_Seq_mindustry_game_MapObjectives$ObjectiveMarker_mindustry_game_MapObjectives$ObjectiveMarker_arc_func_Intf_mindustry_game_MapMarkers$MarkerSetter 23
typedef void (*func_mindustry_game_MapMarkers_setMarker_arc_struct_Seq_mindustry_game_MapObjectives$ObjectiveMarker_mindustry_game_MapObjectives$ObjectiveMarker_arc_func_Intf_mindustry_game_MapMarkers$MarkerSetter)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4);
#define VTABLE_mindustry_game_MapMarkers_remove_arc_struct_Seq_int_mindustry_game_MapMarkers$MarkerSetter 24
typedef void (*func_mindustry_game_MapMarkers_remove_arc_struct_Seq_int_mindustry_game_MapMarkers$MarkerSetter)(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2);

void mark_mindustry_game_MapMarkers(jobject object, jint mark, jint depth);
void clinit_mindustry_game_MapMarkers(jcontext ctx);
void init_mindustry_game_MapMarkers(jcontext ctx, jobject self);
void M_mindustry_game_MapMarkers_clear(jcontext ctx, jobject self);
void M_mindustry_game_MapMarkers_add_int_mindustry_game_MapObjectives$ObjectiveMarker(jcontext ctx, jobject self, jint param0, jobject param1);
void M_mindustry_game_MapMarkers_remove_int(jcontext ctx, jobject self, jint param0);
jobject M_mindustry_game_MapMarkers_get_int_R_mindustry_game_MapObjectives$ObjectiveMarker(jcontext ctx, jobject self, jint param0);
jbool M_mindustry_game_MapMarkers_has_int_R_boolean(jcontext ctx, jobject self, jint param0);
jint M_mindustry_game_MapMarkers_size_R_int(jcontext ctx, jobject self);
void M_mindustry_game_MapMarkers_write_java_io_DataOutput(jcontext ctx, jobject self, jobject param0);
void M_mindustry_game_MapMarkers_read_java_io_DataInput(jcontext ctx, jobject self, jobject param0);
void M_mindustry_game_MapMarkers_updateMarker_arc_struct_Seq_mindustry_game_MapObjectives$ObjectiveMarker_boolean_arc_func_Intf_mindustry_game_MapMarkers$MarkerSetter(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2, jobject param3, jobject param4);
void M_mindustry_game_MapMarkers_setMarker_arc_struct_Seq_mindustry_game_MapObjectives$ObjectiveMarker_mindustry_game_MapObjectives$ObjectiveMarker_arc_func_Intf_mindustry_game_MapMarkers$MarkerSetter(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4);
void M_mindustry_game_MapMarkers_remove_arc_struct_Seq_int_mindustry_game_MapMarkers$MarkerSetter(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2);
jobject M_mindustry_game_MapMarkers_iterator_R_java_util_Iterator(jcontext ctx, jobject self);
void SM_mindustry_game_MapMarkers_lambda$remove$2_mindustry_game_MapObjectives$ObjectiveMarker_int(jcontext ctx, jobject param0, jint param1);
void SM_mindustry_game_MapMarkers_lambda$remove$1_mindustry_game_MapObjectives$ObjectiveMarker_int(jcontext ctx, jobject param0, jint param1);
void SM_mindustry_game_MapMarkers_lambda$remove$0_mindustry_game_MapObjectives$ObjectiveMarker_int(jcontext ctx, jobject param0, jint param1);
void SM_mindustry_game_MapMarkers_lambda$add$5_mindustry_game_MapObjectives$ObjectiveMarker_int(jcontext ctx, jobject param0, jint param1);
jint SM_mindustry_game_MapMarkers_lambda$add$4_mindustry_game_MapObjectives$ObjectiveMarker_R_int(jcontext ctx, jobject param0);
void SM_mindustry_game_MapMarkers_lambda$add$3_mindustry_game_MapObjectives$ObjectiveMarker_int(jcontext ctx, jobject param0, jint param1);
jint SM_mindustry_game_MapMarkers_lambda$add$2_mindustry_game_MapObjectives$ObjectiveMarker_R_int(jcontext ctx, jobject param0);
void SM_mindustry_game_MapMarkers_lambda$add$1_mindustry_game_MapObjectives$ObjectiveMarker_int(jcontext ctx, jobject param0, jint param1);
jint SM_mindustry_game_MapMarkers_lambda$add$0_mindustry_game_MapObjectives$ObjectiveMarker_R_int(jcontext ctx, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
