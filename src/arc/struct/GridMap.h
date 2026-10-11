#ifndef HEADER_arc_struct_GridMap
#define HEADER_arc_struct_GridMap

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_struct_GridMap {
	java_lang_Object parent;
	jref F_map;
} arc_struct_GridMap;

extern Class class_arc_struct_GridMap;


#define VTABLE_arc_struct_GridMap_hashCode_R_int 0
typedef jint (*func_arc_struct_GridMap_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_GridMap_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_struct_GridMap_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_GridMap_clone_R_java_lang_Object 2
typedef jobject (*func_arc_struct_GridMap_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_GridMap_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_struct_GridMap_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_GridMap_toString_R_java_lang_String 4
typedef jobject (*func_arc_struct_GridMap_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_GridMap_finalize 5
typedef void (*func_arc_struct_GridMap_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_GridMap_notify 6
typedef void (*func_arc_struct_GridMap_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_GridMap_notifyAll 7
typedef void (*func_arc_struct_GridMap_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_GridMap_wait 8
typedef void (*func_arc_struct_GridMap_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_GridMap_wait_long 9
typedef void (*func_arc_struct_GridMap_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_struct_GridMap_wait_long_int 10
typedef void (*func_arc_struct_GridMap_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_struct_GridMap_get_int_int_R_java_lang_Object 11
typedef jobject (*func_arc_struct_GridMap_get_int_int_R_java_lang_Object)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_arc_struct_GridMap_get_int_int_java_lang_Object_R_java_lang_Object 12
typedef jobject (*func_arc_struct_GridMap_get_int_int_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
#define VTABLE_arc_struct_GridMap_containsKey_int_int_R_boolean 13
typedef jbool (*func_arc_struct_GridMap_containsKey_int_int_R_boolean)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_arc_struct_GridMap_put_int_int_java_lang_Object 14
typedef void (*func_arc_struct_GridMap_put_int_int_java_lang_Object)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
#define VTABLE_arc_struct_GridMap_remove_int_int 15
typedef void (*func_arc_struct_GridMap_remove_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_arc_struct_GridMap_values_R_arc_struct_LongMap$Values 16
typedef jobject (*func_arc_struct_GridMap_values_R_arc_struct_LongMap$Values)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_GridMap_keys_R_arc_struct_LongMap$Keys 17
typedef jobject (*func_arc_struct_GridMap_keys_R_arc_struct_LongMap$Keys)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_GridMap_clear 18
typedef void (*func_arc_struct_GridMap_clear)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_GridMap_size_R_int 19
typedef jint (*func_arc_struct_GridMap_size_R_int)(jcontext ctx, jobject self);

void mark_arc_struct_GridMap(jobject object, jint mark, jint depth);
void clinit_arc_struct_GridMap(jcontext ctx);
void init_arc_struct_GridMap(jcontext ctx, jobject self);
jlong SM_arc_struct_GridMap_getHash_int_int_R_long(jcontext ctx, jint param0, jint param1);
jobject M_arc_struct_GridMap_get_int_int_R_java_lang_Object(jcontext ctx, jobject self, jint param0, jint param1);
jobject M_arc_struct_GridMap_get_int_int_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
jbool M_arc_struct_GridMap_containsKey_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1);
void M_arc_struct_GridMap_put_int_int_java_lang_Object(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
void M_arc_struct_GridMap_remove_int_int(jcontext ctx, jobject self, jint param0, jint param1);
jobject M_arc_struct_GridMap_values_R_arc_struct_LongMap$Values(jcontext ctx, jobject self);
jobject M_arc_struct_GridMap_keys_R_arc_struct_LongMap$Keys(jcontext ctx, jobject self);
void M_arc_struct_GridMap_clear(jcontext ctx, jobject self);
jint M_arc_struct_GridMap_size_R_int(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
