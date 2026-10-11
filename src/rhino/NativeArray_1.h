#ifndef HEADER_rhino_NativeArray$1
#define HEADER_rhino_NativeArray$1

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/util/ListIterator.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_NativeArray$1 {
	java_lang_Object parent;
	jint F_cursor;
	jint F_val$start;
	jint F_val$len;
	jref F_this$0;
} rhino_NativeArray$1;

extern Class class_rhino_NativeArray$1;


#define VTABLE_rhino_NativeArray$1_hashCode_R_int 0
typedef jint (*func_rhino_NativeArray$1_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeArray$1_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_NativeArray$1_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeArray$1_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_NativeArray$1_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeArray$1_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_NativeArray$1_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeArray$1_toString_R_java_lang_String 4
typedef jobject (*func_rhino_NativeArray$1_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeArray$1_finalize 5
typedef void (*func_rhino_NativeArray$1_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeArray$1_notify 6
typedef void (*func_rhino_NativeArray$1_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeArray$1_notifyAll 7
typedef void (*func_rhino_NativeArray$1_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeArray$1_wait 8
typedef void (*func_rhino_NativeArray$1_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeArray$1_wait_long 9
typedef void (*func_rhino_NativeArray$1_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_NativeArray$1_wait_long_int 10
typedef void (*func_rhino_NativeArray$1_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_rhino_NativeArray$1_hasNext_R_boolean 11
typedef jbool (*func_rhino_NativeArray$1_hasNext_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeArray$1_next_R_java_lang_Object 12
typedef jobject (*func_rhino_NativeArray$1_next_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeArray$1_remove 13
typedef void (*func_rhino_NativeArray$1_remove)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeArray$1_forEachRemaining_java_util_function_Consumer 14
typedef void (*func_rhino_NativeArray$1_forEachRemaining_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeArray$1_add_java_lang_Object 15
typedef void (*func_rhino_NativeArray$1_add_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeArray$1_hasPrevious_R_boolean 16
typedef jbool (*func_rhino_NativeArray$1_hasPrevious_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeArray$1_nextIndex_R_int 17
typedef jint (*func_rhino_NativeArray$1_nextIndex_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeArray$1_previous_R_java_lang_Object 18
typedef jobject (*func_rhino_NativeArray$1_previous_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeArray$1_previousIndex_R_int 19
typedef jint (*func_rhino_NativeArray$1_previousIndex_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeArray$1_set_java_lang_Object 20
typedef void (*func_rhino_NativeArray$1_set_java_lang_Object)(jcontext ctx, jobject self, jobject param0);

void mark_rhino_NativeArray$1(jobject object, jint mark, jint depth);
void clinit_rhino_NativeArray$1(jcontext ctx);
void init_rhino_NativeArray$1_rhino_NativeArray_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
jbool M_rhino_NativeArray$1_hasNext_R_boolean(jcontext ctx, jobject self);
jobject M_rhino_NativeArray$1_next_R_java_lang_Object(jcontext ctx, jobject self);
jbool M_rhino_NativeArray$1_hasPrevious_R_boolean(jcontext ctx, jobject self);
jobject M_rhino_NativeArray$1_previous_R_java_lang_Object(jcontext ctx, jobject self);
jint M_rhino_NativeArray$1_nextIndex_R_int(jcontext ctx, jobject self);
jint M_rhino_NativeArray$1_previousIndex_R_int(jcontext ctx, jobject self);
void M_rhino_NativeArray$1_remove(jcontext ctx, jobject self);
void M_rhino_NativeArray$1_add_java_lang_Object(jcontext ctx, jobject self, jobject param0);
void M_rhino_NativeArray$1_set_java_lang_Object(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
