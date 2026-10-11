#ifndef HEADER_rhino_UintMap
#define HEADER_rhino_UintMap

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_UintMap {
	java_lang_Object parent;
	jref F_keys;
	jref F_values;
	jint F_power;
	jint F_keyCount;
	jint F_occupiedCount;
	jint F_ivaluesShift;
} rhino_UintMap;

extern Class class_rhino_UintMap;

extern jint SF_rhino_UintMap_A;
extern jint SF_rhino_UintMap_EMPTY;
extern jint SF_rhino_UintMap_DELETED;
extern jbool SF_rhino_UintMap_check;

#define VTABLE_rhino_UintMap_hashCode_R_int 0
typedef jint (*func_rhino_UintMap_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_UintMap_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_UintMap_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_UintMap_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_UintMap_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_UintMap_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_UintMap_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_UintMap_toString_R_java_lang_String 4
typedef jobject (*func_rhino_UintMap_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_UintMap_finalize 5
typedef void (*func_rhino_UintMap_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_UintMap_notify 6
typedef void (*func_rhino_UintMap_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_UintMap_notifyAll 7
typedef void (*func_rhino_UintMap_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_UintMap_wait 8
typedef void (*func_rhino_UintMap_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_UintMap_wait_long 9
typedef void (*func_rhino_UintMap_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_UintMap_wait_long_int 10
typedef void (*func_rhino_UintMap_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_rhino_UintMap_isEmpty_R_boolean 11
typedef jbool (*func_rhino_UintMap_isEmpty_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_UintMap_size_R_int 12
typedef jint (*func_rhino_UintMap_size_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_UintMap_has_int_R_boolean 13
typedef jbool (*func_rhino_UintMap_has_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_UintMap_getObject_int_R_java_lang_Object 14
typedef jobject (*func_rhino_UintMap_getObject_int_R_java_lang_Object)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_UintMap_getInt_int_int_R_int 15
typedef jint (*func_rhino_UintMap_getInt_int_int_R_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_rhino_UintMap_getExistingInt_int_R_int 16
typedef jint (*func_rhino_UintMap_getExistingInt_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_UintMap_put_int_java_lang_Object 17
typedef void (*func_rhino_UintMap_put_int_java_lang_Object)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_rhino_UintMap_put_int_int 18
typedef void (*func_rhino_UintMap_put_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_rhino_UintMap_remove_int 19
typedef void (*func_rhino_UintMap_remove_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_UintMap_clear 20
typedef void (*func_rhino_UintMap_clear)(jcontext ctx, jobject self);
#define VTABLE_rhino_UintMap_getKeys_R_Array1_int 21
typedef jobject (*func_rhino_UintMap_getKeys_R_Array1_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_UintMap_findIndex_int_R_int 22
typedef jint (*func_rhino_UintMap_findIndex_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_UintMap_insertNewKey_int_R_int 23
typedef jint (*func_rhino_UintMap_insertNewKey_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_UintMap_rehashTable_boolean 24
typedef void (*func_rhino_UintMap_rehashTable_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_rhino_UintMap_ensureIndex_int_boolean_R_int 25
typedef jint (*func_rhino_UintMap_ensureIndex_int_boolean_R_int)(jcontext ctx, jobject self, jint param0, jbool param1);

void mark_rhino_UintMap(jobject object, jint mark, jint depth);
void clinit_rhino_UintMap(jcontext ctx);
void init_rhino_UintMap(jcontext ctx, jobject self);
void init_rhino_UintMap_int(jcontext ctx, jobject self, jint param0);
jbool M_rhino_UintMap_isEmpty_R_boolean(jcontext ctx, jobject self);
jint M_rhino_UintMap_size_R_int(jcontext ctx, jobject self);
jbool M_rhino_UintMap_has_int_R_boolean(jcontext ctx, jobject self, jint param0);
jobject M_rhino_UintMap_getObject_int_R_java_lang_Object(jcontext ctx, jobject self, jint param0);
jint M_rhino_UintMap_getInt_int_int_R_int(jcontext ctx, jobject self, jint param0, jint param1);
jint M_rhino_UintMap_getExistingInt_int_R_int(jcontext ctx, jobject self, jint param0);
void M_rhino_UintMap_put_int_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1);
void M_rhino_UintMap_put_int_int(jcontext ctx, jobject self, jint param0, jint param1);
void M_rhino_UintMap_remove_int(jcontext ctx, jobject self, jint param0);
void M_rhino_UintMap_clear(jcontext ctx, jobject self);
jobject M_rhino_UintMap_getKeys_R_Array1_int(jcontext ctx, jobject self);
jint SM_rhino_UintMap_tableLookupStep_int_int_int_R_int(jcontext ctx, jint param0, jint param1, jint param2);
jint M_rhino_UintMap_findIndex_int_R_int(jcontext ctx, jobject self, jint param0);
jint M_rhino_UintMap_insertNewKey_int_R_int(jcontext ctx, jobject self, jint param0);
void M_rhino_UintMap_rehashTable_boolean(jcontext ctx, jobject self, jbool param0);
jint M_rhino_UintMap_ensureIndex_int_boolean_R_int(jcontext ctx, jobject self, jint param0, jbool param1);

#ifdef __cplusplus
}
#endif

#endif
