#ifndef HEADER_mindustry_game_MapObjectives
#define HEADER_mindustry_game_MapObjectives

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/lang/Iterable.h"
#include "arc/util/Eachable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_game_MapObjectives {
	java_lang_Object parent;
	jref F_all;
} mindustry_game_MapObjectives;

extern Class class_mindustry_game_MapObjectives;

extern jobject SF_mindustry_game_MapObjectives_allObjectiveTypes;
extern jobject SF_mindustry_game_MapObjectives_allMarkerTypes;
extern jobject SF_mindustry_game_MapObjectives_markerNameToType;
extern jobject SF_mindustry_game_MapObjectives_allMarkerTypeNames;

#define VTABLE_mindustry_game_MapObjectives_hashCode_R_int 0
typedef jint (*func_mindustry_game_MapObjectives_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_MapObjectives_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_game_MapObjectives_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_MapObjectives_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_game_MapObjectives_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_MapObjectives_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_game_MapObjectives_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_MapObjectives_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_game_MapObjectives_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_MapObjectives_finalize 5
typedef void (*func_mindustry_game_MapObjectives_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_MapObjectives_notify 6
typedef void (*func_mindustry_game_MapObjectives_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_MapObjectives_notifyAll 7
typedef void (*func_mindustry_game_MapObjectives_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_MapObjectives_wait 8
typedef void (*func_mindustry_game_MapObjectives_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_MapObjectives_wait_long 9
typedef void (*func_mindustry_game_MapObjectives_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_game_MapObjectives_wait_long_int 10
typedef void (*func_mindustry_game_MapObjectives_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_game_MapObjectives_iterator_R_java_util_Iterator 11
typedef jobject (*func_mindustry_game_MapObjectives_iterator_R_java_util_Iterator)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_MapObjectives_forEach_java_util_function_Consumer 12
typedef void (*func_mindustry_game_MapObjectives_forEach_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_MapObjectives_spliterator_R_java_util_Spliterator 13
typedef jobject (*func_mindustry_game_MapObjectives_spliterator_R_java_util_Spliterator)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_MapObjectives_each_arc_func_Cons 14
typedef void (*func_mindustry_game_MapObjectives_each_arc_func_Cons)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_MapObjectives_add_Array1_mindustry_game_MapObjectives$MapObjective 15
typedef void (*func_mindustry_game_MapObjectives_add_Array1_mindustry_game_MapObjectives$MapObjective)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_MapObjectives_flatten_mindustry_game_MapObjectives$MapObjective 16
typedef void (*func_mindustry_game_MapObjectives_flatten_mindustry_game_MapObjectives$MapObjective)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_MapObjectives_update 17
typedef void (*func_mindustry_game_MapObjectives_update)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_MapObjectives_get_int_R_mindustry_game_MapObjectives$MapObjective 18
typedef jobject (*func_mindustry_game_MapObjectives_get_int_R_mindustry_game_MapObjectives$MapObjective)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_game_MapObjectives_any_R_boolean 19
typedef jbool (*func_mindustry_game_MapObjectives_any_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_MapObjectives_clear 20
typedef void (*func_mindustry_game_MapObjectives_clear)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_MapObjectives_eachRunning_arc_func_Cons 21
typedef void (*func_mindustry_game_MapObjectives_eachRunning_arc_func_Cons)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_MapObjectives_eachRunning_arc_func_Boolf_arc_func_Cons 22
typedef void (*func_mindustry_game_MapObjectives_eachRunning_arc_func_Boolf_arc_func_Cons)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_game_MapObjectives_lambda$update$0_mindustry_game_MapObjectives$MapObjective 23
typedef void (*func_mindustry_game_MapObjectives_lambda$update$0_mindustry_game_MapObjectives$MapObjective)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_game_MapObjectives(jobject object, jint mark, jint depth);
void clinit_mindustry_game_MapObjectives(jcontext ctx);
void SM_mindustry_game_MapObjectives_registerObjective_Array1_arc_func_Prov(jcontext ctx, jobject param0);
void SM_mindustry_game_MapObjectives_registerMarker_Array1_arc_func_Prov(jcontext ctx, jobject param0);
void SM_mindustry_game_MapObjectives_registerLegacyMarker_java_lang_String_arc_func_Prov(jcontext ctx, jobject param0, jobject param1);
void init_mindustry_game_MapObjectives_arc_struct_Seq(jcontext ctx, jobject self, jobject param0);
void init_mindustry_game_MapObjectives(jcontext ctx, jobject self);
void M_mindustry_game_MapObjectives_add_Array1_mindustry_game_MapObjectives$MapObjective(jcontext ctx, jobject self, jobject param0);
void M_mindustry_game_MapObjectives_flatten_mindustry_game_MapObjectives$MapObjective(jcontext ctx, jobject self, jobject param0);
void M_mindustry_game_MapObjectives_update(jcontext ctx, jobject self);
jobject M_mindustry_game_MapObjectives_get_int_R_mindustry_game_MapObjectives$MapObjective(jcontext ctx, jobject self, jint param0);
jbool M_mindustry_game_MapObjectives_any_R_boolean(jcontext ctx, jobject self);
void M_mindustry_game_MapObjectives_clear(jcontext ctx, jobject self);
void M_mindustry_game_MapObjectives_eachRunning_arc_func_Cons(jcontext ctx, jobject self, jobject param0);
void M_mindustry_game_MapObjectives_eachRunning_arc_func_Boolf_arc_func_Cons(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_mindustry_game_MapObjectives_iterator_R_java_util_Iterator(jcontext ctx, jobject self);
void M_mindustry_game_MapObjectives_each_arc_func_Cons(jcontext ctx, jobject self, jobject param0);
void SM_mindustry_game_MapObjectives_lookupRegion_java_lang_Object_arc_graphics_g2d_TextureRegion(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_game_MapObjectives_prepareTexture_mindustry_game_MapObjectives$ObjectiveMarker_java_lang_Object(jcontext ctx, jobject param0, jobject param1);
jbool SM_mindustry_game_MapObjectives_lambda$eachRunning$0_arc_func_Boolf_mindustry_game_MapObjectives$MapObjective_R_boolean(jcontext ctx, jobject param0, jobject param1);
void M_mindustry_game_MapObjectives_lambda$update$0_mindustry_game_MapObjectives$MapObjective(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
