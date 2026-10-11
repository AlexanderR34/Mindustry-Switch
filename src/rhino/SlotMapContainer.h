#ifndef HEADER_rhino_SlotMapContainer
#define HEADER_rhino_SlotMapContainer

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "rhino/SlotMap.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_SlotMapContainer {
	java_lang_Object parent;
	jref F_map;
} rhino_SlotMapContainer;

extern Class class_rhino_SlotMapContainer;

extern jint SF_rhino_SlotMapContainer_LARGE_HASH_SIZE;

#define VTABLE_rhino_SlotMapContainer_hashCode_R_int 0
typedef jint (*func_rhino_SlotMapContainer_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_SlotMapContainer_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_SlotMapContainer_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_SlotMapContainer_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_SlotMapContainer_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_SlotMapContainer_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_SlotMapContainer_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_SlotMapContainer_toString_R_java_lang_String 4
typedef jobject (*func_rhino_SlotMapContainer_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_SlotMapContainer_finalize 5
typedef void (*func_rhino_SlotMapContainer_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_SlotMapContainer_notify 6
typedef void (*func_rhino_SlotMapContainer_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_SlotMapContainer_notifyAll 7
typedef void (*func_rhino_SlotMapContainer_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_SlotMapContainer_wait 8
typedef void (*func_rhino_SlotMapContainer_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_SlotMapContainer_wait_long 9
typedef void (*func_rhino_SlotMapContainer_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_SlotMapContainer_wait_long_int 10
typedef void (*func_rhino_SlotMapContainer_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_rhino_SlotMapContainer_iterator_R_java_util_Iterator 11
typedef jobject (*func_rhino_SlotMapContainer_iterator_R_java_util_Iterator)(jcontext ctx, jobject self);
#define VTABLE_rhino_SlotMapContainer_forEach_java_util_function_Consumer 12
typedef void (*func_rhino_SlotMapContainer_forEach_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_SlotMapContainer_spliterator_R_java_util_Spliterator 13
typedef jobject (*func_rhino_SlotMapContainer_spliterator_R_java_util_Spliterator)(jcontext ctx, jobject self);
#define VTABLE_rhino_SlotMapContainer_size_R_int 14
typedef jint (*func_rhino_SlotMapContainer_size_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_SlotMapContainer_isEmpty_R_boolean 15
typedef jbool (*func_rhino_SlotMapContainer_isEmpty_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_SlotMapContainer_get_java_lang_Object_int_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot 16
typedef jobject (*func_rhino_SlotMapContainer_get_java_lang_Object_int_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot)(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2);
#define VTABLE_rhino_SlotMapContainer_query_java_lang_Object_int_R_rhino_ScriptableObject$Slot 17
typedef jobject (*func_rhino_SlotMapContainer_query_java_lang_Object_int_R_rhino_ScriptableObject$Slot)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_rhino_SlotMapContainer_addSlot_rhino_ScriptableObject$Slot 18
typedef void (*func_rhino_SlotMapContainer_addSlot_rhino_ScriptableObject$Slot)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_SlotMapContainer_remove_java_lang_Object_int 19
typedef void (*func_rhino_SlotMapContainer_remove_java_lang_Object_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_rhino_SlotMapContainer_dirtySize_R_int 20
typedef jint (*func_rhino_SlotMapContainer_dirtySize_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_SlotMapContainer_readLock_R_long 21
typedef jlong (*func_rhino_SlotMapContainer_readLock_R_long)(jcontext ctx, jobject self);
#define VTABLE_rhino_SlotMapContainer_unlockRead_long 22
typedef void (*func_rhino_SlotMapContainer_unlockRead_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_SlotMapContainer_checkMapSize 23
typedef void (*func_rhino_SlotMapContainer_checkMapSize)(jcontext ctx, jobject self);

void mark_rhino_SlotMapContainer(jobject object, jint mark, jint depth);
void clinit_rhino_SlotMapContainer(jcontext ctx);
void init_rhino_SlotMapContainer_int(jcontext ctx, jobject self, jint param0);
jint M_rhino_SlotMapContainer_size_R_int(jcontext ctx, jobject self);
jint M_rhino_SlotMapContainer_dirtySize_R_int(jcontext ctx, jobject self);
jbool M_rhino_SlotMapContainer_isEmpty_R_boolean(jcontext ctx, jobject self);
jobject M_rhino_SlotMapContainer_get_java_lang_Object_int_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2);
jobject M_rhino_SlotMapContainer_query_java_lang_Object_int_R_rhino_ScriptableObject$Slot(jcontext ctx, jobject self, jobject param0, jint param1);
void M_rhino_SlotMapContainer_addSlot_rhino_ScriptableObject$Slot(jcontext ctx, jobject self, jobject param0);
void M_rhino_SlotMapContainer_remove_java_lang_Object_int(jcontext ctx, jobject self, jobject param0, jint param1);
jobject M_rhino_SlotMapContainer_iterator_R_java_util_Iterator(jcontext ctx, jobject self);
jlong M_rhino_SlotMapContainer_readLock_R_long(jcontext ctx, jobject self);
void M_rhino_SlotMapContainer_unlockRead_long(jcontext ctx, jobject self, jlong param0);
void M_rhino_SlotMapContainer_checkMapSize(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
