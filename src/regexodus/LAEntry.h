#ifndef HEADER_regexodus_LAEntry
#define HEADER_regexodus_LAEntry

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/io/Serializable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct regexodus_LAEntry {
	java_lang_Object parent;
	jint F_index;
	jref F_top;
	jref F_actual;
} regexodus_LAEntry;

extern Class class_regexodus_LAEntry;

extern jlong SF_regexodus_LAEntry_serialVersionUID;

#define VTABLE_regexodus_LAEntry_hashCode_R_int 0
typedef jint (*func_regexodus_LAEntry_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_regexodus_LAEntry_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_regexodus_LAEntry_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_regexodus_LAEntry_clone_R_java_lang_Object 2
typedef jobject (*func_regexodus_LAEntry_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_regexodus_LAEntry_getClass_R_java_lang_Class 3
typedef jobject (*func_regexodus_LAEntry_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_regexodus_LAEntry_toString_R_java_lang_String 4
typedef jobject (*func_regexodus_LAEntry_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_regexodus_LAEntry_finalize 5
typedef void (*func_regexodus_LAEntry_finalize)(jcontext ctx, jobject self);
#define VTABLE_regexodus_LAEntry_notify 6
typedef void (*func_regexodus_LAEntry_notify)(jcontext ctx, jobject self);
#define VTABLE_regexodus_LAEntry_notifyAll 7
typedef void (*func_regexodus_LAEntry_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_regexodus_LAEntry_wait 8
typedef void (*func_regexodus_LAEntry_wait)(jcontext ctx, jobject self);
#define VTABLE_regexodus_LAEntry_wait_long 9
typedef void (*func_regexodus_LAEntry_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_regexodus_LAEntry_wait_long_int 10
typedef void (*func_regexodus_LAEntry_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_regexodus_LAEntry(jobject object, jint mark, jint depth);
void clinit_regexodus_LAEntry(jcontext ctx);
void init_regexodus_LAEntry(jcontext ctx, jobject self);
jbool M_regexodus_LAEntry_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jint M_regexodus_LAEntry_hashCode_R_int(jcontext ctx, jobject self);
jobject M_regexodus_LAEntry_toString_R_java_lang_String(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
