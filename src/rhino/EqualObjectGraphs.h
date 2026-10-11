#ifndef HEADER_rhino_EqualObjectGraphs
#define HEADER_rhino_EqualObjectGraphs

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_EqualObjectGraphs {
	java_lang_Object parent;
	jref F_knownEquals;
	jref F_currentlyCompared;
} rhino_EqualObjectGraphs;

extern Class class_rhino_EqualObjectGraphs;

extern jobject SF_rhino_EqualObjectGraphs_instance;
extern jbool SF_rhino_EqualObjectGraphs_$assertionsDisabled;

#define VTABLE_rhino_EqualObjectGraphs_hashCode_R_int 0
typedef jint (*func_rhino_EqualObjectGraphs_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_EqualObjectGraphs_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_EqualObjectGraphs_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_EqualObjectGraphs_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_EqualObjectGraphs_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_EqualObjectGraphs_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_EqualObjectGraphs_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_EqualObjectGraphs_toString_R_java_lang_String 4
typedef jobject (*func_rhino_EqualObjectGraphs_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_EqualObjectGraphs_finalize 5
typedef void (*func_rhino_EqualObjectGraphs_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_EqualObjectGraphs_notify 6
typedef void (*func_rhino_EqualObjectGraphs_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_EqualObjectGraphs_notifyAll 7
typedef void (*func_rhino_EqualObjectGraphs_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_EqualObjectGraphs_wait 8
typedef void (*func_rhino_EqualObjectGraphs_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_EqualObjectGraphs_wait_long 9
typedef void (*func_rhino_EqualObjectGraphs_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_EqualObjectGraphs_wait_long_int 10
typedef void (*func_rhino_EqualObjectGraphs_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_rhino_EqualObjectGraphs_equalGraphs_java_lang_Object_java_lang_Object_R_boolean 11
typedef jbool (*func_rhino_EqualObjectGraphs_equalGraphs_java_lang_Object_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_EqualObjectGraphs_equalGraphsNoMemo_java_lang_Object_java_lang_Object_R_boolean 12
typedef jbool (*func_rhino_EqualObjectGraphs_equalGraphsNoMemo_java_lang_Object_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_EqualObjectGraphs_equalScriptables_rhino_Scriptable_rhino_Scriptable_R_boolean 13
typedef jbool (*func_rhino_EqualObjectGraphs_equalScriptables_rhino_Scriptable_rhino_Scriptable_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_EqualObjectGraphs_equalObjectArrays_Array1_java_lang_Object_Array1_java_lang_Object_R_boolean 14
typedef jbool (*func_rhino_EqualObjectGraphs_equalObjectArrays_Array1_java_lang_Object_Array1_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_EqualObjectGraphs_equalLists_java_util_List_java_util_List_R_boolean 15
typedef jbool (*func_rhino_EqualObjectGraphs_equalLists_java_util_List_java_util_List_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_EqualObjectGraphs_equalMaps_java_util_Map_java_util_Map_R_boolean 16
typedef jbool (*func_rhino_EqualObjectGraphs_equalMaps_java_util_Map_java_util_Map_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_EqualObjectGraphs_equalSets_java_util_Set_java_util_Set_R_boolean 17
typedef jbool (*func_rhino_EqualObjectGraphs_equalSets_java_util_Set_java_util_Set_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1);

void mark_rhino_EqualObjectGraphs(jobject object, jint mark, jint depth);
void clinit_rhino_EqualObjectGraphs(jcontext ctx);
void init_rhino_EqualObjectGraphs(jcontext ctx, jobject self);
jobject SM_rhino_EqualObjectGraphs_withThreadLocal_rhino_EqualObjectGraphs$Func_R_java_lang_Object(jcontext ctx, jobject param0);
jbool M_rhino_EqualObjectGraphs_equalGraphs_java_lang_Object_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1);
jbool M_rhino_EqualObjectGraphs_equalGraphsNoMemo_java_lang_Object_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1);
jbool M_rhino_EqualObjectGraphs_equalScriptables_rhino_Scriptable_rhino_Scriptable_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1);
jbool M_rhino_EqualObjectGraphs_equalObjectArrays_Array1_java_lang_Object_Array1_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1);
jbool M_rhino_EqualObjectGraphs_equalLists_java_util_List_java_util_List_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1);
jbool M_rhino_EqualObjectGraphs_equalMaps_java_util_Map_java_util_Map_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject SM_rhino_EqualObjectGraphs_sortedEntries_java_util_Map_R_java_util_Iterator(jcontext ctx, jobject param0);
jbool M_rhino_EqualObjectGraphs_equalSets_java_util_Set_java_util_Set_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject SM_rhino_EqualObjectGraphs_sortedSet_java_util_Set_R_Array1_java_lang_Object(jcontext ctx, jobject param0);
jbool SM_rhino_EqualObjectGraphs_equalInterpretedFunctions_rhino_InterpretedFunction_rhino_InterpretedFunction_R_boolean(jcontext ctx, jobject param0, jobject param1);
jobject SM_rhino_EqualObjectGraphs_getSortedIds_rhino_Scriptable_R_Array1_java_lang_Object(jcontext ctx, jobject param0);
jobject SM_rhino_EqualObjectGraphs_getSymbolName_rhino_Symbol_R_java_lang_String(jcontext ctx, jobject param0);
jobject SM_rhino_EqualObjectGraphs_getIds_rhino_Scriptable_R_Array1_java_lang_Object(jcontext ctx, jobject param0);
jobject SM_rhino_EqualObjectGraphs_getValue_rhino_Scriptable_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1);
jint SM_rhino_EqualObjectGraphs_lambda$getSortedIds$0_java_lang_Object_java_lang_Object_R_int(jcontext ctx, jobject param0, jobject param1);

#ifdef __cplusplus
}
#endif

#endif
