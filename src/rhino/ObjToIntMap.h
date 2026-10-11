#ifndef HEADER_rhino_ObjToIntMap
#define HEADER_rhino_ObjToIntMap

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_ObjToIntMap {
	java_lang_Object parent;
	jref F_keys;
	jref F_values;
	jint F_power;
	jint F_keyCount;
	jint F_occupiedCount;
} rhino_ObjToIntMap;

extern Class class_rhino_ObjToIntMap;

extern jint SF_rhino_ObjToIntMap_A;
extern jobject SF_rhino_ObjToIntMap_DELETED;
extern jbool SF_rhino_ObjToIntMap_check;

#define VTABLE_rhino_ObjToIntMap_hashCode_R_int 0
typedef jint (*func_rhino_ObjToIntMap_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ObjToIntMap_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_ObjToIntMap_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ObjToIntMap_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_ObjToIntMap_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_ObjToIntMap_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_ObjToIntMap_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_ObjToIntMap_toString_R_java_lang_String 4
typedef jobject (*func_rhino_ObjToIntMap_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_ObjToIntMap_finalize 5
typedef void (*func_rhino_ObjToIntMap_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_ObjToIntMap_notify 6
typedef void (*func_rhino_ObjToIntMap_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_ObjToIntMap_notifyAll 7
typedef void (*func_rhino_ObjToIntMap_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_ObjToIntMap_wait 8
typedef void (*func_rhino_ObjToIntMap_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_ObjToIntMap_wait_long 9
typedef void (*func_rhino_ObjToIntMap_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_ObjToIntMap_wait_long_int 10
typedef void (*func_rhino_ObjToIntMap_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_rhino_ObjToIntMap_isEmpty_R_boolean 11
typedef jbool (*func_rhino_ObjToIntMap_isEmpty_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_ObjToIntMap_size_R_int 12
typedef jint (*func_rhino_ObjToIntMap_size_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ObjToIntMap_has_java_lang_Object_R_boolean 13
typedef jbool (*func_rhino_ObjToIntMap_has_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ObjToIntMap_get_java_lang_Object_int_R_int 14
typedef jint (*func_rhino_ObjToIntMap_get_java_lang_Object_int_R_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_rhino_ObjToIntMap_getExisting_java_lang_Object_R_int 15
typedef jint (*func_rhino_ObjToIntMap_getExisting_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ObjToIntMap_put_java_lang_Object_int 16
typedef void (*func_rhino_ObjToIntMap_put_java_lang_Object_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_rhino_ObjToIntMap_intern_java_lang_Object_R_java_lang_Object 17
typedef jobject (*func_rhino_ObjToIntMap_intern_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ObjToIntMap_remove_java_lang_Object 18
typedef void (*func_rhino_ObjToIntMap_remove_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ObjToIntMap_clear 19
typedef void (*func_rhino_ObjToIntMap_clear)(jcontext ctx, jobject self);
#define VTABLE_rhino_ObjToIntMap_newIterator_R_rhino_ObjToIntMap$Iterator 20
typedef jobject (*func_rhino_ObjToIntMap_newIterator_R_rhino_ObjToIntMap$Iterator)(jcontext ctx, jobject self);
#define VTABLE_rhino_ObjToIntMap_initIterator_rhino_ObjToIntMap$Iterator 21
typedef void (*func_rhino_ObjToIntMap_initIterator_rhino_ObjToIntMap$Iterator)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ObjToIntMap_getKeys_R_Array1_java_lang_Object 22
typedef jobject (*func_rhino_ObjToIntMap_getKeys_R_Array1_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_ObjToIntMap_getKeys_Array1_java_lang_Object_int 23
typedef void (*func_rhino_ObjToIntMap_getKeys_Array1_java_lang_Object_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_rhino_ObjToIntMap_findIndex_java_lang_Object_R_int 24
typedef jint (*func_rhino_ObjToIntMap_findIndex_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ObjToIntMap_insertNewKey_java_lang_Object_int_R_int 25
typedef jint (*func_rhino_ObjToIntMap_insertNewKey_java_lang_Object_int_R_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_rhino_ObjToIntMap_rehashTable 26
typedef void (*func_rhino_ObjToIntMap_rehashTable)(jcontext ctx, jobject self);
#define VTABLE_rhino_ObjToIntMap_ensureIndex_java_lang_Object_R_int 27
typedef jint (*func_rhino_ObjToIntMap_ensureIndex_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);

void mark_rhino_ObjToIntMap(jobject object, jint mark, jint depth);
void clinit_rhino_ObjToIntMap(jcontext ctx);
void init_rhino_ObjToIntMap(jcontext ctx, jobject self);
void init_rhino_ObjToIntMap_int(jcontext ctx, jobject self, jint param0);
jbool M_rhino_ObjToIntMap_isEmpty_R_boolean(jcontext ctx, jobject self);
jint M_rhino_ObjToIntMap_size_R_int(jcontext ctx, jobject self);
jbool M_rhino_ObjToIntMap_has_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jint M_rhino_ObjToIntMap_get_java_lang_Object_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1);
jint M_rhino_ObjToIntMap_getExisting_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0);
void M_rhino_ObjToIntMap_put_java_lang_Object_int(jcontext ctx, jobject self, jobject param0, jint param1);
jobject M_rhino_ObjToIntMap_intern_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0);
void M_rhino_ObjToIntMap_remove_java_lang_Object(jcontext ctx, jobject self, jobject param0);
void M_rhino_ObjToIntMap_clear(jcontext ctx, jobject self);
jobject M_rhino_ObjToIntMap_newIterator_R_rhino_ObjToIntMap$Iterator(jcontext ctx, jobject self);
void M_rhino_ObjToIntMap_initIterator_rhino_ObjToIntMap$Iterator(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_ObjToIntMap_getKeys_R_Array1_java_lang_Object(jcontext ctx, jobject self);
void M_rhino_ObjToIntMap_getKeys_Array1_java_lang_Object_int(jcontext ctx, jobject self, jobject param0, jint param1);
jint SM_rhino_ObjToIntMap_tableLookupStep_int_int_int_R_int(jcontext ctx, jint param0, jint param1, jint param2);
jint M_rhino_ObjToIntMap_findIndex_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0);
jint M_rhino_ObjToIntMap_insertNewKey_java_lang_Object_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1);
void M_rhino_ObjToIntMap_rehashTable(jcontext ctx, jobject self);
jint M_rhino_ObjToIntMap_ensureIndex_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0);
jobject SM_rhino_ObjToIntMap_access$000_R_java_lang_Object(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
