#ifndef HEADER_net_jpountz_lz4_LZ4Utils
#define HEADER_net_jpountz_lz4_LZ4Utils

#include "Clearwing.h"
#include "java/lang/Enum.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct net_jpountz_lz4_LZ4Utils {
	java_lang_Enum parent;
} net_jpountz_lz4_LZ4Utils;

extern Class class_net_jpountz_lz4_LZ4Utils;

extern jint SF_net_jpountz_lz4_LZ4Utils_MAX_INPUT_SIZE;
extern jobject SF_net_jpountz_lz4_LZ4Utils_$VALUES;

#define VTABLE_net_jpountz_lz4_LZ4Utils_hashCode_R_int 0
typedef jint (*func_net_jpountz_lz4_LZ4Utils_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_net_jpountz_lz4_LZ4Utils_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_net_jpountz_lz4_LZ4Utils_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_net_jpountz_lz4_LZ4Utils_clone_R_java_lang_Object 2
typedef jobject (*func_net_jpountz_lz4_LZ4Utils_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_net_jpountz_lz4_LZ4Utils_getClass_R_java_lang_Class 3
typedef jobject (*func_net_jpountz_lz4_LZ4Utils_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_net_jpountz_lz4_LZ4Utils_toString_R_java_lang_String 4
typedef jobject (*func_net_jpountz_lz4_LZ4Utils_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_net_jpountz_lz4_LZ4Utils_finalize 5
typedef void (*func_net_jpountz_lz4_LZ4Utils_finalize)(jcontext ctx, jobject self);
#define VTABLE_net_jpountz_lz4_LZ4Utils_notify 6
typedef void (*func_net_jpountz_lz4_LZ4Utils_notify)(jcontext ctx, jobject self);
#define VTABLE_net_jpountz_lz4_LZ4Utils_notifyAll 7
typedef void (*func_net_jpountz_lz4_LZ4Utils_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_net_jpountz_lz4_LZ4Utils_wait 8
typedef void (*func_net_jpountz_lz4_LZ4Utils_wait)(jcontext ctx, jobject self);
#define VTABLE_net_jpountz_lz4_LZ4Utils_wait_long 9
typedef void (*func_net_jpountz_lz4_LZ4Utils_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_net_jpountz_lz4_LZ4Utils_wait_long_int 10
typedef void (*func_net_jpountz_lz4_LZ4Utils_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_net_jpountz_lz4_LZ4Utils_compareTo_java_lang_Object_R_int 11
typedef jint (*func_net_jpountz_lz4_LZ4Utils_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_net_jpountz_lz4_LZ4Utils_compareTo_java_lang_Enum_R_int 12
typedef jint (*func_net_jpountz_lz4_LZ4Utils_compareTo_java_lang_Enum_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_net_jpountz_lz4_LZ4Utils_name_R_java_lang_String 13
typedef jobject (*func_net_jpountz_lz4_LZ4Utils_name_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_net_jpountz_lz4_LZ4Utils_ordinal_R_int 14
typedef jint (*func_net_jpountz_lz4_LZ4Utils_ordinal_R_int)(jcontext ctx, jobject self);
#define VTABLE_net_jpountz_lz4_LZ4Utils_getDeclaringClass_R_java_lang_Class 15
typedef jobject (*func_net_jpountz_lz4_LZ4Utils_getDeclaringClass_R_java_lang_Class)(jcontext ctx, jobject self);

void mark_net_jpountz_lz4_LZ4Utils(jobject object, jint mark, jint depth);
void clinit_net_jpountz_lz4_LZ4Utils(jcontext ctx);
jobject SM_net_jpountz_lz4_LZ4Utils_values_R_Array1_net_jpountz_lz4_LZ4Utils(jcontext ctx);
jobject SM_net_jpountz_lz4_LZ4Utils_valueOf_java_lang_String_R_net_jpountz_lz4_LZ4Utils(jcontext ctx, jobject param0);
void init_net_jpountz_lz4_LZ4Utils_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1);
jint SM_net_jpountz_lz4_LZ4Utils_maxCompressedLength_int_R_int(jcontext ctx, jint param0);
jbool SM_net_jpountz_lz4_LZ4Utils_notEnoughSpace_int_int_R_boolean(jcontext ctx, jint param0, jint param1);
jint SM_net_jpountz_lz4_LZ4Utils_lengthOfEncodedInteger_int_R_int(jcontext ctx, jint param0);
jint SM_net_jpountz_lz4_LZ4Utils_sequenceLength_int_int_R_int(jcontext ctx, jint param0, jint param1);
jint SM_net_jpountz_lz4_LZ4Utils_hash_int_R_int(jcontext ctx, jint param0);
jint SM_net_jpountz_lz4_LZ4Utils_hash64k_int_R_int(jcontext ctx, jint param0);
jint SM_net_jpountz_lz4_LZ4Utils_hashHC_int_R_int(jcontext ctx, jint param0);
void SM_net_jpountz_lz4_LZ4Utils_zero_Array1_byte_int_int(jcontext ctx, jobject param0, jint param1, jint param2);
void SM_net_jpountz_lz4_LZ4Utils_zero_java_nio_ByteBuffer_int_int(jcontext ctx, jobject param0, jint param1, jint param2);
void SM_net_jpountz_lz4_LZ4Utils_copyTo_net_jpountz_lz4_LZ4Utils$Match_net_jpountz_lz4_LZ4Utils$Match(jcontext ctx, jobject param0, jobject param1);

#ifdef __cplusplus
}
#endif

#endif
