#ifndef HEADER_rhino_NativeObject$EntrySet$1$1
#define HEADER_rhino_NativeObject$EntrySet$1$1

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/util/Map_Entry.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_NativeObject$EntrySet$1$1 {
	java_lang_Object parent;
	jref F_val$ekey;
	jref F_val$value;
	jref F_this$2;
} rhino_NativeObject$EntrySet$1$1;

extern Class class_rhino_NativeObject$EntrySet$1$1;


#define VTABLE_rhino_NativeObject$EntrySet$1$1_hashCode_R_int 0
typedef jint (*func_rhino_NativeObject$EntrySet$1$1_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeObject$EntrySet$1$1_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_NativeObject$EntrySet$1$1_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeObject$EntrySet$1$1_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_NativeObject$EntrySet$1$1_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeObject$EntrySet$1$1_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_NativeObject$EntrySet$1$1_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeObject$EntrySet$1$1_toString_R_java_lang_String 4
typedef jobject (*func_rhino_NativeObject$EntrySet$1$1_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeObject$EntrySet$1$1_finalize 5
typedef void (*func_rhino_NativeObject$EntrySet$1$1_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeObject$EntrySet$1$1_notify 6
typedef void (*func_rhino_NativeObject$EntrySet$1$1_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeObject$EntrySet$1$1_notifyAll 7
typedef void (*func_rhino_NativeObject$EntrySet$1$1_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeObject$EntrySet$1$1_wait 8
typedef void (*func_rhino_NativeObject$EntrySet$1$1_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeObject$EntrySet$1$1_wait_long 9
typedef void (*func_rhino_NativeObject$EntrySet$1$1_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_NativeObject$EntrySet$1$1_wait_long_int 10
typedef void (*func_rhino_NativeObject$EntrySet$1$1_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_rhino_NativeObject$EntrySet$1$1_getKey_R_java_lang_Object 11
typedef jobject (*func_rhino_NativeObject$EntrySet$1$1_getKey_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeObject$EntrySet$1$1_getValue_R_java_lang_Object 12
typedef jobject (*func_rhino_NativeObject$EntrySet$1$1_getValue_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeObject$EntrySet$1$1_setValue_java_lang_Object_R_java_lang_Object 13
typedef jobject (*func_rhino_NativeObject$EntrySet$1$1_setValue_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);

void mark_rhino_NativeObject$EntrySet$1$1(jobject object, jint mark, jint depth);
void clinit_rhino_NativeObject$EntrySet$1$1(jcontext ctx);
void init_rhino_NativeObject$EntrySet$1$1_rhino_NativeObject$EntrySet$1_java_lang_Object_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
jobject M_rhino_NativeObject$EntrySet$1$1_getKey_R_java_lang_Object(jcontext ctx, jobject self);
jobject M_rhino_NativeObject$EntrySet$1$1_getValue_R_java_lang_Object(jcontext ctx, jobject self);
jobject M_rhino_NativeObject$EntrySet$1$1_setValue_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0);
jbool M_rhino_NativeObject$EntrySet$1$1_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jint M_rhino_NativeObject$EntrySet$1$1_hashCode_R_int(jcontext ctx, jobject self);
jobject M_rhino_NativeObject$EntrySet$1$1_toString_R_java_lang_String(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
