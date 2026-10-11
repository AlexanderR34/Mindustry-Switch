#ifndef HEADER_java_util_Objects
#define HEADER_java_util_Objects

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_Objects {
	java_lang_Object parent;
} java_util_Objects;

extern Class class_java_util_Objects;


#define VTABLE_java_util_Objects_hashCode_R_int 0
typedef jint (*func_java_util_Objects_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_Objects_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_Objects_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Objects_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_Objects_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_Objects_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_Objects_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_Objects_toString_R_java_lang_String 4
typedef jobject (*func_java_util_Objects_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_Objects_finalize 5
typedef void (*func_java_util_Objects_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_Objects_notify 6
typedef void (*func_java_util_Objects_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_Objects_notifyAll 7
typedef void (*func_java_util_Objects_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_Objects_wait 8
typedef void (*func_java_util_Objects_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_Objects_wait_long 9
typedef void (*func_java_util_Objects_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_Objects_wait_long_int 10
typedef void (*func_java_util_Objects_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_java_util_Objects(jobject object, jint mark, jint depth);
void clinit_java_util_Objects(jcontext ctx);
void init_java_util_Objects(jcontext ctx, jobject self);
jbool SM_java_util_Objects_equals_java_lang_Object_java_lang_Object_R_boolean(jcontext ctx, jobject param0, jobject param1);
jbool SM_java_util_Objects_deepEquals_java_lang_Object_java_lang_Object_R_boolean(jcontext ctx, jobject param0, jobject param1);
jint SM_java_util_Objects_hashCode_java_lang_Object_R_int(jcontext ctx, jobject param0);
jint SM_java_util_Objects_hash_Array1_java_lang_Object_R_int(jcontext ctx, jobject param0);
jobject SM_java_util_Objects_toString_java_lang_Object_R_java_lang_String(jcontext ctx, jobject param0);
jobject SM_java_util_Objects_toString_java_lang_Object_java_lang_String_R_java_lang_String(jcontext ctx, jobject param0, jobject param1);
jint SM_java_util_Objects_compare_java_lang_Object_java_lang_Object_java_util_Comparator_R_int(jcontext ctx, jobject param0, jobject param1, jobject param2);
jobject SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject param0);
jobject SM_java_util_Objects_requireNonNull_java_lang_Object_java_lang_String_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1);
jbool SM_java_util_Objects_isNull_java_lang_Object_R_boolean(jcontext ctx, jobject param0);
jbool SM_java_util_Objects_nonNull_java_lang_Object_R_boolean(jcontext ctx, jobject param0);
jobject SM_java_util_Objects_requireNonNull_java_lang_Object_java_util_function_Supplier_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1);

#ifdef __cplusplus
}
#endif

#endif
