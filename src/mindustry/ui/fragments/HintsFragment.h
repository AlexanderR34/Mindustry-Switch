#ifndef HEADER_mindustry_ui_fragments_HintsFragment
#define HEADER_mindustry_ui_fragments_HintsFragment

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_ui_fragments_HintsFragment {
	java_lang_Object parent;
	jref F_hints;
	jref F_current;
	jref F_group;
	jref F_events;
	jref F_placedBlocks;
	jref F_last;
} mindustry_ui_fragments_HintsFragment;

extern Class class_mindustry_ui_fragments_HintsFragment;

extern jobject SF_mindustry_ui_fragments_HintsFragment_isTutorial;
extern jfloat SF_mindustry_ui_fragments_HintsFragment_foutTime;

#define VTABLE_mindustry_ui_fragments_HintsFragment_hashCode_R_int 0
typedef jint (*func_mindustry_ui_fragments_HintsFragment_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_HintsFragment_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_ui_fragments_HintsFragment_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_fragments_HintsFragment_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_ui_fragments_HintsFragment_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_HintsFragment_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_ui_fragments_HintsFragment_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_HintsFragment_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_ui_fragments_HintsFragment_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_HintsFragment_finalize 5
typedef void (*func_mindustry_ui_fragments_HintsFragment_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_HintsFragment_notify 6
typedef void (*func_mindustry_ui_fragments_HintsFragment_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_HintsFragment_notifyAll 7
typedef void (*func_mindustry_ui_fragments_HintsFragment_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_HintsFragment_wait 8
typedef void (*func_mindustry_ui_fragments_HintsFragment_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_HintsFragment_wait_long 9
typedef void (*func_mindustry_ui_fragments_HintsFragment_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_ui_fragments_HintsFragment_wait_long_int 10
typedef void (*func_mindustry_ui_fragments_HintsFragment_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_ui_fragments_HintsFragment_build_arc_scene_Group 11
typedef void (*func_mindustry_ui_fragments_HintsFragment_build_arc_scene_Group)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_fragments_HintsFragment_checkNext 12
typedef void (*func_mindustry_ui_fragments_HintsFragment_checkNext)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_HintsFragment_display_mindustry_ui_fragments_HintsFragment$Hint 13
typedef void (*func_mindustry_ui_fragments_HintsFragment_display_mindustry_ui_fragments_HintsFragment$Hint)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_fragments_HintsFragment_complete 14
typedef void (*func_mindustry_ui_fragments_HintsFragment_complete)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_HintsFragment_hide 15
typedef void (*func_mindustry_ui_fragments_HintsFragment_hide)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_HintsFragment_shown_R_boolean 16
typedef jbool (*func_mindustry_ui_fragments_HintsFragment_shown_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_HintsFragment_lambda$display$0_mindustry_ui_fragments_HintsFragment$Hint_arc_scene_ui_layout_Table 17
typedef void (*func_mindustry_ui_fragments_HintsFragment_lambda$display$0_mindustry_ui_fragments_HintsFragment$Hint_arc_scene_ui_layout_Table)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_ui_fragments_HintsFragment_lambda$display$2 18
typedef void (*func_mindustry_ui_fragments_HintsFragment_lambda$display$2)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_HintsFragment_lambda$build$7_mindustry_game_EventType$BlockBuildBeginEvent 19
typedef void (*func_mindustry_ui_fragments_HintsFragment_lambda$build$7_mindustry_game_EventType$BlockBuildBeginEvent)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_fragments_HintsFragment_lambda$build$6_mindustry_game_EventType$BuildingCommandEvent 20
typedef void (*func_mindustry_ui_fragments_HintsFragment_lambda$build$6_mindustry_game_EventType$BuildingCommandEvent)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_fragments_HintsFragment_lambda$build$5_mindustry_game_EventType$ResetEvent 21
typedef void (*func_mindustry_ui_fragments_HintsFragment_lambda$build$5_mindustry_game_EventType$ResetEvent)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_fragments_HintsFragment_lambda$build$4 22
typedef void (*func_mindustry_ui_fragments_HintsFragment_lambda$build$4)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_HintsFragment_lambda$build$3 23
typedef void (*func_mindustry_ui_fragments_HintsFragment_lambda$build$3)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_HintsFragment_lambda$build$2_mindustry_game_EventType$BlockBuildEndEvent 24
typedef void (*func_mindustry_ui_fragments_HintsFragment_lambda$build$2_mindustry_game_EventType$BlockBuildEndEvent)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_fragments_HintsFragment_lambda$build$1 25
typedef void (*func_mindustry_ui_fragments_HintsFragment_lambda$build$1)(jcontext ctx, jobject self);

void mark_mindustry_ui_fragments_HintsFragment(jobject object, jint mark, jint depth);
void clinit_mindustry_ui_fragments_HintsFragment(jcontext ctx);
void init_mindustry_ui_fragments_HintsFragment(jcontext ctx, jobject self);
void M_mindustry_ui_fragments_HintsFragment_build_arc_scene_Group(jcontext ctx, jobject self, jobject param0);
void M_mindustry_ui_fragments_HintsFragment_checkNext(jcontext ctx, jobject self);
void M_mindustry_ui_fragments_HintsFragment_display_mindustry_ui_fragments_HintsFragment$Hint(jcontext ctx, jobject self, jobject param0);
void M_mindustry_ui_fragments_HintsFragment_complete(jcontext ctx, jobject self);
void M_mindustry_ui_fragments_HintsFragment_hide(jcontext ctx, jobject self);
jbool M_mindustry_ui_fragments_HintsFragment_shown_R_boolean(jcontext ctx, jobject self);
jbool SM_mindustry_ui_fragments_HintsFragment_isSerpulo_R_boolean(jcontext ctx);
void M_mindustry_ui_fragments_HintsFragment_lambda$display$0_mindustry_ui_fragments_HintsFragment$Hint_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_mindustry_ui_fragments_HintsFragment_lambda$display$2(jcontext ctx, jobject self);
void SM_mindustry_ui_fragments_HintsFragment_lambda$display$1_mindustry_ui_fragments_HintsFragment$Hint_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1);
jbool SM_mindustry_ui_fragments_HintsFragment_lambda$checkNext$0_mindustry_ui_fragments_HintsFragment$Hint_R_boolean(jcontext ctx, jobject param0);
void M_mindustry_ui_fragments_HintsFragment_lambda$build$7_mindustry_game_EventType$BlockBuildBeginEvent(jcontext ctx, jobject self, jobject param0);
jbool SM_mindustry_ui_fragments_HintsFragment_lambda$build$8_mindustry_gen_Building_R_boolean(jcontext ctx, jobject param0);
void M_mindustry_ui_fragments_HintsFragment_lambda$build$6_mindustry_game_EventType$BuildingCommandEvent(jcontext ctx, jobject self, jobject param0);
void M_mindustry_ui_fragments_HintsFragment_lambda$build$5_mindustry_game_EventType$ResetEvent(jcontext ctx, jobject self, jobject param0);
void M_mindustry_ui_fragments_HintsFragment_lambda$build$4(jcontext ctx, jobject self);
void M_mindustry_ui_fragments_HintsFragment_lambda$build$3(jcontext ctx, jobject self);
void M_mindustry_ui_fragments_HintsFragment_lambda$build$2_mindustry_game_EventType$BlockBuildEndEvent(jcontext ctx, jobject self, jobject param0);
void M_mindustry_ui_fragments_HintsFragment_lambda$build$1(jcontext ctx, jobject self);
jbool SM_mindustry_ui_fragments_HintsFragment_lambda$build$0_R_boolean(jcontext ctx);
jbool SM_mindustry_ui_fragments_HintsFragment_lambda$static$0_R_boolean(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
