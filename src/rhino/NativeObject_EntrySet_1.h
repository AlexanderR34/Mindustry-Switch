#ifndef HEADER_rhino_NativeObject$EntrySet$1
#define HEADER_rhino_NativeObject$EntrySet$1

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/util/Iterator.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_NativeObject$EntrySet$1 {
	java_lang_Object parent;
	jref F_ids;
	jref F_key;
	jint F_index;
	jref F_this$1;
} rhino_NativeObject$EntrySet$1;

extern Class class_rhino_NativeObject$EntrySet$1;


#define VTABLE_rhino_NativeObject$EntrySet$1_hashCode_R_int 0
typedef jint (*func_rhino_NativeObject$EntrySet$1_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeObject$EntrySet$1_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_NativeObject$EntrySet$1_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeObject$EntrySet$1_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_NativeObject$EntrySet$1_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeObject$EntrySet$1_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_NativeObject$EntrySet$1_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeObject$EntrySet$1_toString_R_java_lang_String 4
typedef jobject (*func_rhino_NativeObject$EntrySet$1_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeObject$EntrySet$1_finalize 5
typedef void (*func_rhino_NativeObject$EntrySet$1_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeObject$EntrySet$1_notify 6
typedef void (*func_rhino_NativeObject$EntrySet$1_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeObject$EntrySet$1_notifyAll 7
typedef void (*func_rhino_NativeObject$EntrySet$1_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeObject$EntrySet$1_wait 8
typedef void (*func_rhino_NativeObject$EntrySet$1_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeObject$EntrySet$1_wait_long 9
typedef void (*func_rhino_NativeObject$EntrySet$1_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_NativeObject$EntrySet$1_wait_long_int 10
typedef void (*func_rhino_NativeObject$EntrySet$1_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_rhino_NativeObject$EntrySet$1_hasNext_R_boolean 11
typedef jbool (*func_rhino_NativeObject$EntrySet$1_hasNext_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeObject$EntrySet$1_next_R_java_lang_Object 12
typedef jobject (*func_rhino_NativeObject$EntrySet$1_next_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeObject$EntrySet$1_remove 13
typedef void (*func_rhino_NativeObject$EntrySet$1_remove)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeObject$EntrySet$1_forEachRemaining_java_util_function_Consumer 14
typedef void (*func_rhino_NativeObject$EntrySet$1_forEachRemaining_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeObject$EntrySet$1_next_R_java_util_Map$Entry 15
typedef jobject (*func_rhino_NativeObject$EntrySet$1_next_R_java_util_Map$Entry)(jcontext ctx, jobject self);

void mark_rhino_NativeObject$EntrySet$1(jobject object, jint mark, jint depth);
void clinit_rhino_NativeObject$EntrySet$1(jcontext ctx);
void init_rhino_NativeObject$EntrySet$1_rhino_NativeObject$EntrySet(jcontext ctx, jobject self, jobject param0);
jbool M_rhino_NativeObject$EntrySet$1_hasNext_R_boolean(jcontext ctx, jobject self);
jobject M_rhino_NativeObject$EntrySet$1_next_R_java_util_Map$Entry(jcontext ctx, jobject self);
void M_rhino_NativeObject$EntrySet$1_remove(jcontext ctx, jobject self);
jobject M_rhino_NativeObject$EntrySet$1_next_R_java_lang_Object(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
