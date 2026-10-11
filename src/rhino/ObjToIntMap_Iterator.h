#ifndef HEADER_rhino_ObjToIntMap$Iterator
#define HEADER_rhino_ObjToIntMap$Iterator

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_ObjToIntMap$Iterator {
	java_lang_Object parent;
	jref F_master;
	jint F_cursor;
	jint F_remaining;
	jref F_keys;
	jref F_values;
} rhino_ObjToIntMap$Iterator;

extern Class class_rhino_ObjToIntMap$Iterator;


#define VTABLE_rhino_ObjToIntMap$Iterator_hashCode_R_int 0
typedef jint (*func_rhino_ObjToIntMap$Iterator_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ObjToIntMap$Iterator_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_ObjToIntMap$Iterator_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ObjToIntMap$Iterator_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_ObjToIntMap$Iterator_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_ObjToIntMap$Iterator_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_ObjToIntMap$Iterator_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_ObjToIntMap$Iterator_toString_R_java_lang_String 4
typedef jobject (*func_rhino_ObjToIntMap$Iterator_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_ObjToIntMap$Iterator_finalize 5
typedef void (*func_rhino_ObjToIntMap$Iterator_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_ObjToIntMap$Iterator_notify 6
typedef void (*func_rhino_ObjToIntMap$Iterator_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_ObjToIntMap$Iterator_notifyAll 7
typedef void (*func_rhino_ObjToIntMap$Iterator_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_ObjToIntMap$Iterator_wait 8
typedef void (*func_rhino_ObjToIntMap$Iterator_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_ObjToIntMap$Iterator_wait_long 9
typedef void (*func_rhino_ObjToIntMap$Iterator_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_ObjToIntMap$Iterator_wait_long_int 10
typedef void (*func_rhino_ObjToIntMap$Iterator_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_rhino_ObjToIntMap$Iterator_init_Array1_java_lang_Object_Array1_int_int 11
typedef void (*func_rhino_ObjToIntMap$Iterator_init_Array1_java_lang_Object_Array1_int_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2);
#define VTABLE_rhino_ObjToIntMap$Iterator_start 12
typedef void (*func_rhino_ObjToIntMap$Iterator_start)(jcontext ctx, jobject self);
#define VTABLE_rhino_ObjToIntMap$Iterator_done_R_boolean 13
typedef jbool (*func_rhino_ObjToIntMap$Iterator_done_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_ObjToIntMap$Iterator_next 14
typedef void (*func_rhino_ObjToIntMap$Iterator_next)(jcontext ctx, jobject self);
#define VTABLE_rhino_ObjToIntMap$Iterator_getKey_R_java_lang_Object 15
typedef jobject (*func_rhino_ObjToIntMap$Iterator_getKey_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_ObjToIntMap$Iterator_getValue_R_int 16
typedef jint (*func_rhino_ObjToIntMap$Iterator_getValue_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ObjToIntMap$Iterator_setValue_int 17
typedef void (*func_rhino_ObjToIntMap$Iterator_setValue_int)(jcontext ctx, jobject self, jint param0);

void mark_rhino_ObjToIntMap$Iterator(jobject object, jint mark, jint depth);
void clinit_rhino_ObjToIntMap$Iterator(jcontext ctx);
void init_rhino_ObjToIntMap$Iterator_rhino_ObjToIntMap(jcontext ctx, jobject self, jobject param0);
void M_rhino_ObjToIntMap$Iterator_init_Array1_java_lang_Object_Array1_int_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2);
void M_rhino_ObjToIntMap$Iterator_start(jcontext ctx, jobject self);
jbool M_rhino_ObjToIntMap$Iterator_done_R_boolean(jcontext ctx, jobject self);
void M_rhino_ObjToIntMap$Iterator_next(jcontext ctx, jobject self);
jobject M_rhino_ObjToIntMap$Iterator_getKey_R_java_lang_Object(jcontext ctx, jobject self);
jint M_rhino_ObjToIntMap$Iterator_getValue_R_int(jcontext ctx, jobject self);
void M_rhino_ObjToIntMap$Iterator_setValue_int(jcontext ctx, jobject self, jint param0);

#ifdef __cplusplus
}
#endif

#endif
