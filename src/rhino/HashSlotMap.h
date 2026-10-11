#ifndef HEADER_rhino_HashSlotMap
#define HEADER_rhino_HashSlotMap

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "rhino/SlotMap.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_HashSlotMap {
	java_lang_Object parent;
	jref F_map;
} rhino_HashSlotMap;

extern Class class_rhino_HashSlotMap;


#define VTABLE_rhino_HashSlotMap_hashCode_R_int 0
typedef jint (*func_rhino_HashSlotMap_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_HashSlotMap_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_HashSlotMap_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_HashSlotMap_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_HashSlotMap_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_HashSlotMap_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_HashSlotMap_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_HashSlotMap_toString_R_java_lang_String 4
typedef jobject (*func_rhino_HashSlotMap_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_HashSlotMap_finalize 5
typedef void (*func_rhino_HashSlotMap_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_HashSlotMap_notify 6
typedef void (*func_rhino_HashSlotMap_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_HashSlotMap_notifyAll 7
typedef void (*func_rhino_HashSlotMap_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_HashSlotMap_wait 8
typedef void (*func_rhino_HashSlotMap_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_HashSlotMap_wait_long 9
typedef void (*func_rhino_HashSlotMap_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_HashSlotMap_wait_long_int 10
typedef void (*func_rhino_HashSlotMap_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_rhino_HashSlotMap_iterator_R_java_util_Iterator 11
typedef jobject (*func_rhino_HashSlotMap_iterator_R_java_util_Iterator)(jcontext ctx, jobject self);
#define VTABLE_rhino_HashSlotMap_forEach_java_util_function_Consumer 12
typedef void (*func_rhino_HashSlotMap_forEach_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_HashSlotMap_spliterator_R_java_util_Spliterator 13
typedef jobject (*func_rhino_HashSlotMap_spliterator_R_java_util_Spliterator)(jcontext ctx, jobject self);
#define VTABLE_rhino_HashSlotMap_size_R_int 14
typedef jint (*func_rhino_HashSlotMap_size_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_HashSlotMap_isEmpty_R_boolean 15
typedef jbool (*func_rhino_HashSlotMap_isEmpty_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_HashSlotMap_get_java_lang_Object_int_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot 16
typedef jobject (*func_rhino_HashSlotMap_get_java_lang_Object_int_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot)(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2);
#define VTABLE_rhino_HashSlotMap_query_java_lang_Object_int_R_rhino_ScriptableObject$Slot 17
typedef jobject (*func_rhino_HashSlotMap_query_java_lang_Object_int_R_rhino_ScriptableObject$Slot)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_rhino_HashSlotMap_addSlot_rhino_ScriptableObject$Slot 18
typedef void (*func_rhino_HashSlotMap_addSlot_rhino_ScriptableObject$Slot)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_HashSlotMap_remove_java_lang_Object_int 19
typedef void (*func_rhino_HashSlotMap_remove_java_lang_Object_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_rhino_HashSlotMap_createSlot_java_lang_Object_int_java_lang_Object_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot 20
typedef jobject (*func_rhino_HashSlotMap_createSlot_java_lang_Object_int_java_lang_Object_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot)(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jobject param3);

void mark_rhino_HashSlotMap(jobject object, jint mark, jint depth);
void clinit_rhino_HashSlotMap(jcontext ctx);
void init_rhino_HashSlotMap(jcontext ctx, jobject self);
jint M_rhino_HashSlotMap_size_R_int(jcontext ctx, jobject self);
jbool M_rhino_HashSlotMap_isEmpty_R_boolean(jcontext ctx, jobject self);
jobject M_rhino_HashSlotMap_query_java_lang_Object_int_R_rhino_ScriptableObject$Slot(jcontext ctx, jobject self, jobject param0, jint param1);
jobject M_rhino_HashSlotMap_get_java_lang_Object_int_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2);
jobject M_rhino_HashSlotMap_createSlot_java_lang_Object_int_java_lang_Object_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jobject param3);
void M_rhino_HashSlotMap_addSlot_rhino_ScriptableObject$Slot(jcontext ctx, jobject self, jobject param0);
void M_rhino_HashSlotMap_remove_java_lang_Object_int(jcontext ctx, jobject self, jobject param0, jint param1);
jobject M_rhino_HashSlotMap_iterator_R_java_util_Iterator(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
