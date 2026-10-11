#ifndef HEADER_mindustry_logic_CutsceneAction
#define HEADER_mindustry_logic_CutsceneAction

#include "Clearwing.h"
#include "java/lang/Enum.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_logic_CutsceneAction {
	java_lang_Enum parent;
} mindustry_logic_CutsceneAction;

extern Class class_mindustry_logic_CutsceneAction;

extern jobject SF_mindustry_logic_CutsceneAction_active;
extern jobject SF_mindustry_logic_CutsceneAction_pan;
extern jobject SF_mindustry_logic_CutsceneAction_zoom;
extern jobject SF_mindustry_logic_CutsceneAction_stop;
extern jobject SF_mindustry_logic_CutsceneAction_shake;
extern jobject SF_mindustry_logic_CutsceneAction_getHud;
extern jobject SF_mindustry_logic_CutsceneAction_setHud;
extern jobject SF_mindustry_logic_CutsceneAction_all;
extern jobject SF_mindustry_logic_CutsceneAction_$VALUES;

#define VTABLE_mindustry_logic_CutsceneAction_hashCode_R_int 0
typedef jint (*func_mindustry_logic_CutsceneAction_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_CutsceneAction_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_logic_CutsceneAction_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_CutsceneAction_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_logic_CutsceneAction_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_CutsceneAction_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_logic_CutsceneAction_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_CutsceneAction_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_logic_CutsceneAction_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_CutsceneAction_finalize 5
typedef void (*func_mindustry_logic_CutsceneAction_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_CutsceneAction_notify 6
typedef void (*func_mindustry_logic_CutsceneAction_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_CutsceneAction_notifyAll 7
typedef void (*func_mindustry_logic_CutsceneAction_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_CutsceneAction_wait 8
typedef void (*func_mindustry_logic_CutsceneAction_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_CutsceneAction_wait_long 9
typedef void (*func_mindustry_logic_CutsceneAction_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_logic_CutsceneAction_wait_long_int 10
typedef void (*func_mindustry_logic_CutsceneAction_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_logic_CutsceneAction_compareTo_java_lang_Object_R_int 11
typedef jint (*func_mindustry_logic_CutsceneAction_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_CutsceneAction_compareTo_java_lang_Enum_R_int 12
typedef jint (*func_mindustry_logic_CutsceneAction_compareTo_java_lang_Enum_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_CutsceneAction_name_R_java_lang_String 13
typedef jobject (*func_mindustry_logic_CutsceneAction_name_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_CutsceneAction_ordinal_R_int 14
typedef jint (*func_mindustry_logic_CutsceneAction_ordinal_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_CutsceneAction_getDeclaringClass_R_java_lang_Class 15
typedef jobject (*func_mindustry_logic_CutsceneAction_getDeclaringClass_R_java_lang_Class)(jcontext ctx, jobject self);

void mark_mindustry_logic_CutsceneAction(jobject object, jint mark, jint depth);
void clinit_mindustry_logic_CutsceneAction(jcontext ctx);
jobject SM_mindustry_logic_CutsceneAction_values_R_Array1_mindustry_logic_CutsceneAction(jcontext ctx);
jobject SM_mindustry_logic_CutsceneAction_valueOf_java_lang_String_R_mindustry_logic_CutsceneAction(jcontext ctx, jobject param0);
void init_mindustry_logic_CutsceneAction_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1);
jobject SM_mindustry_logic_CutsceneAction_$values_R_Array1_mindustry_logic_CutsceneAction(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
