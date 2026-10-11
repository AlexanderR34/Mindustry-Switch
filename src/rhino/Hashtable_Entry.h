#ifndef HEADER_rhino_Hashtable$Entry
#define HEADER_rhino_Hashtable$Entry

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_Hashtable$Entry {
	java_lang_Object parent;
	jref F_key;
	jref F_value;
	jbool F_deleted;
	jref F_next;
	jref F_prev;
	jint F_hashCode;
} rhino_Hashtable$Entry;

extern Class class_rhino_Hashtable$Entry;


#define VTABLE_rhino_Hashtable$Entry_hashCode_R_int 0
typedef jint (*func_rhino_Hashtable$Entry_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_Hashtable$Entry_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_Hashtable$Entry_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_Hashtable$Entry_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_Hashtable$Entry_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_Hashtable$Entry_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_Hashtable$Entry_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_Hashtable$Entry_toString_R_java_lang_String 4
typedef jobject (*func_rhino_Hashtable$Entry_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_Hashtable$Entry_finalize 5
typedef void (*func_rhino_Hashtable$Entry_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_Hashtable$Entry_notify 6
typedef void (*func_rhino_Hashtable$Entry_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_Hashtable$Entry_notifyAll 7
typedef void (*func_rhino_Hashtable$Entry_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_Hashtable$Entry_wait 8
typedef void (*func_rhino_Hashtable$Entry_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_Hashtable$Entry_wait_long 9
typedef void (*func_rhino_Hashtable$Entry_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_Hashtable$Entry_wait_long_int 10
typedef void (*func_rhino_Hashtable$Entry_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_rhino_Hashtable$Entry_key_R_java_lang_Object 11
typedef jobject (*func_rhino_Hashtable$Entry_key_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_Hashtable$Entry_value_R_java_lang_Object 12
typedef jobject (*func_rhino_Hashtable$Entry_value_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_Hashtable$Entry_clear_R_java_lang_Object 13
typedef jobject (*func_rhino_Hashtable$Entry_clear_R_java_lang_Object)(jcontext ctx, jobject self);

void mark_rhino_Hashtable$Entry(jobject object, jint mark, jint depth);
void clinit_rhino_Hashtable$Entry(jcontext ctx);
void init_rhino_Hashtable$Entry(jcontext ctx, jobject self);
void init_rhino_Hashtable$Entry_java_lang_Object_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_rhino_Hashtable$Entry_key_R_java_lang_Object(jcontext ctx, jobject self);
jobject M_rhino_Hashtable$Entry_value_R_java_lang_Object(jcontext ctx, jobject self);
jobject M_rhino_Hashtable$Entry_clear_R_java_lang_Object(jcontext ctx, jobject self);
jint M_rhino_Hashtable$Entry_hashCode_R_int(jcontext ctx, jobject self);
jbool M_rhino_Hashtable$Entry_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
