#ifndef HEADER_java_util_UUID
#define HEADER_java_util_UUID

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/io/Serializable.h"
#include "java/lang/Comparable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_UUID {
	java_lang_Object parent;
	jlong F_mostSigBits;
	jlong F_leastSigBits;
} java_util_UUID;

extern Class class_java_util_UUID;

extern jlong SF_java_util_UUID_serialVersionUID;
extern jobject SF_java_util_UUID_random;
extern jbool SF_java_util_UUID_$assertionsDisabled;

#define VTABLE_java_util_UUID_hashCode_R_int 0
typedef jint (*func_java_util_UUID_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_UUID_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_UUID_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_UUID_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_UUID_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_UUID_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_UUID_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_UUID_toString_R_java_lang_String 4
typedef jobject (*func_java_util_UUID_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_UUID_finalize 5
typedef void (*func_java_util_UUID_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_UUID_notify 6
typedef void (*func_java_util_UUID_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_UUID_notifyAll 7
typedef void (*func_java_util_UUID_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_UUID_wait 8
typedef void (*func_java_util_UUID_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_UUID_wait_long 9
typedef void (*func_java_util_UUID_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_UUID_wait_long_int 10
typedef void (*func_java_util_UUID_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_util_UUID_compareTo_java_lang_Object_R_int 11
typedef jint (*func_java_util_UUID_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_UUID_getLeastSignificantBits_R_long 12
typedef jlong (*func_java_util_UUID_getLeastSignificantBits_R_long)(jcontext ctx, jobject self);
#define VTABLE_java_util_UUID_getMostSignificantBits_R_long 13
typedef jlong (*func_java_util_UUID_getMostSignificantBits_R_long)(jcontext ctx, jobject self);
#define VTABLE_java_util_UUID_version_R_int 14
typedef jint (*func_java_util_UUID_version_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_UUID_variant_R_int 15
typedef jint (*func_java_util_UUID_variant_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_UUID_timestamp_R_long 16
typedef jlong (*func_java_util_UUID_timestamp_R_long)(jcontext ctx, jobject self);
#define VTABLE_java_util_UUID_clockSequence_R_int 17
typedef jint (*func_java_util_UUID_clockSequence_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_UUID_node_R_long 18
typedef jlong (*func_java_util_UUID_node_R_long)(jcontext ctx, jobject self);
#define VTABLE_java_util_UUID_compareTo_java_util_UUID_R_int 19
typedef jint (*func_java_util_UUID_compareTo_java_util_UUID_R_int)(jcontext ctx, jobject self, jobject param0);

void mark_java_util_UUID(jobject object, jint mark, jint depth);
void clinit_java_util_UUID(jcontext ctx);
void init_java_util_UUID_Array1_byte(jcontext ctx, jobject self, jobject param0);
void init_java_util_UUID_long_long(jcontext ctx, jobject self, jlong param0, jlong param1);
jobject SM_java_util_UUID_randomUUID_R_java_util_UUID(jcontext ctx);
jobject SM_java_util_UUID_nameUUIDFromBytes_Array1_byte_R_java_util_UUID(jcontext ctx, jobject param0);
jobject SM_java_util_UUID_fromString_java_lang_String_R_java_util_UUID(jcontext ctx, jobject param0);
jlong M_java_util_UUID_getLeastSignificantBits_R_long(jcontext ctx, jobject self);
jlong M_java_util_UUID_getMostSignificantBits_R_long(jcontext ctx, jobject self);
jint M_java_util_UUID_version_R_int(jcontext ctx, jobject self);
jint M_java_util_UUID_variant_R_int(jcontext ctx, jobject self);
jlong M_java_util_UUID_timestamp_R_long(jcontext ctx, jobject self);
jint M_java_util_UUID_clockSequence_R_int(jcontext ctx, jobject self);
jlong M_java_util_UUID_node_R_long(jcontext ctx, jobject self);
jobject M_java_util_UUID_toString_R_java_lang_String(jcontext ctx, jobject self);
jobject SM_java_util_UUID_digits_long_int_R_java_lang_String(jcontext ctx, jlong param0, jint param1);
jint M_java_util_UUID_hashCode_R_int(jcontext ctx, jobject self);
jbool M_java_util_UUID_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jint M_java_util_UUID_compareTo_java_util_UUID_R_int(jcontext ctx, jobject self, jobject param0);
jint M_java_util_UUID_compareTo_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
