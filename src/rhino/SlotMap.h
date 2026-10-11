#ifndef HEADER_rhino_SlotMap
#define HEADER_rhino_SlotMap

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/lang/Iterable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_SlotMap {
	java_lang_Object parent;
} rhino_SlotMap;

extern Class class_rhino_SlotMap;


#define INDEX_rhino_SlotMap_size_R_int 0
typedef jint (*func_rhino_SlotMap_size_R_int)(jcontext ctx, jobject self);
#define INDEX_rhino_SlotMap_isEmpty_R_boolean 1
typedef jbool (*func_rhino_SlotMap_isEmpty_R_boolean)(jcontext ctx, jobject self);
#define INDEX_rhino_SlotMap_get_java_lang_Object_int_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot 2
typedef jobject (*func_rhino_SlotMap_get_java_lang_Object_int_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot)(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2);
#define INDEX_rhino_SlotMap_query_java_lang_Object_int_R_rhino_ScriptableObject$Slot 3
typedef jobject (*func_rhino_SlotMap_query_java_lang_Object_int_R_rhino_ScriptableObject$Slot)(jcontext ctx, jobject self, jobject param0, jint param1);
#define INDEX_rhino_SlotMap_addSlot_rhino_ScriptableObject$Slot 4
typedef void (*func_rhino_SlotMap_addSlot_rhino_ScriptableObject$Slot)(jcontext ctx, jobject self, jobject param0);
#define INDEX_rhino_SlotMap_remove_java_lang_Object_int 5
typedef void (*func_rhino_SlotMap_remove_java_lang_Object_int)(jcontext ctx, jobject self, jobject param0, jint param1);

void mark_rhino_SlotMap(jobject object, jint mark, jint depth);
void clinit_rhino_SlotMap(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
