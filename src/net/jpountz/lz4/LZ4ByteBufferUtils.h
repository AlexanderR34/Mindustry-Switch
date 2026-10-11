#ifndef HEADER_net_jpountz_lz4_LZ4ByteBufferUtils
#define HEADER_net_jpountz_lz4_LZ4ByteBufferUtils

#include "Clearwing.h"
#include "java/lang/Enum.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct net_jpountz_lz4_LZ4ByteBufferUtils {
	java_lang_Enum parent;
} net_jpountz_lz4_LZ4ByteBufferUtils;

extern Class class_net_jpountz_lz4_LZ4ByteBufferUtils;

extern jobject SF_net_jpountz_lz4_LZ4ByteBufferUtils_$VALUES;
extern jbool SF_net_jpountz_lz4_LZ4ByteBufferUtils_$assertionsDisabled;

#define VTABLE_net_jpountz_lz4_LZ4ByteBufferUtils_hashCode_R_int 0
typedef jint (*func_net_jpountz_lz4_LZ4ByteBufferUtils_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_net_jpountz_lz4_LZ4ByteBufferUtils_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_net_jpountz_lz4_LZ4ByteBufferUtils_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_net_jpountz_lz4_LZ4ByteBufferUtils_clone_R_java_lang_Object 2
typedef jobject (*func_net_jpountz_lz4_LZ4ByteBufferUtils_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_net_jpountz_lz4_LZ4ByteBufferUtils_getClass_R_java_lang_Class 3
typedef jobject (*func_net_jpountz_lz4_LZ4ByteBufferUtils_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_net_jpountz_lz4_LZ4ByteBufferUtils_toString_R_java_lang_String 4
typedef jobject (*func_net_jpountz_lz4_LZ4ByteBufferUtils_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_net_jpountz_lz4_LZ4ByteBufferUtils_finalize 5
typedef void (*func_net_jpountz_lz4_LZ4ByteBufferUtils_finalize)(jcontext ctx, jobject self);
#define VTABLE_net_jpountz_lz4_LZ4ByteBufferUtils_notify 6
typedef void (*func_net_jpountz_lz4_LZ4ByteBufferUtils_notify)(jcontext ctx, jobject self);
#define VTABLE_net_jpountz_lz4_LZ4ByteBufferUtils_notifyAll 7
typedef void (*func_net_jpountz_lz4_LZ4ByteBufferUtils_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_net_jpountz_lz4_LZ4ByteBufferUtils_wait 8
typedef void (*func_net_jpountz_lz4_LZ4ByteBufferUtils_wait)(jcontext ctx, jobject self);
#define VTABLE_net_jpountz_lz4_LZ4ByteBufferUtils_wait_long 9
typedef void (*func_net_jpountz_lz4_LZ4ByteBufferUtils_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_net_jpountz_lz4_LZ4ByteBufferUtils_wait_long_int 10
typedef void (*func_net_jpountz_lz4_LZ4ByteBufferUtils_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_net_jpountz_lz4_LZ4ByteBufferUtils_compareTo_java_lang_Object_R_int 11
typedef jint (*func_net_jpountz_lz4_LZ4ByteBufferUtils_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_net_jpountz_lz4_LZ4ByteBufferUtils_compareTo_java_lang_Enum_R_int 12
typedef jint (*func_net_jpountz_lz4_LZ4ByteBufferUtils_compareTo_java_lang_Enum_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_net_jpountz_lz4_LZ4ByteBufferUtils_name_R_java_lang_String 13
typedef jobject (*func_net_jpountz_lz4_LZ4ByteBufferUtils_name_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_net_jpountz_lz4_LZ4ByteBufferUtils_ordinal_R_int 14
typedef jint (*func_net_jpountz_lz4_LZ4ByteBufferUtils_ordinal_R_int)(jcontext ctx, jobject self);
#define VTABLE_net_jpountz_lz4_LZ4ByteBufferUtils_getDeclaringClass_R_java_lang_Class 15
typedef jobject (*func_net_jpountz_lz4_LZ4ByteBufferUtils_getDeclaringClass_R_java_lang_Class)(jcontext ctx, jobject self);

void mark_net_jpountz_lz4_LZ4ByteBufferUtils(jobject object, jint mark, jint depth);
void clinit_net_jpountz_lz4_LZ4ByteBufferUtils(jcontext ctx);
jobject SM_net_jpountz_lz4_LZ4ByteBufferUtils_values_R_Array1_net_jpountz_lz4_LZ4ByteBufferUtils(jcontext ctx);
jobject SM_net_jpountz_lz4_LZ4ByteBufferUtils_valueOf_java_lang_String_R_net_jpountz_lz4_LZ4ByteBufferUtils(jcontext ctx, jobject param0);
void init_net_jpountz_lz4_LZ4ByteBufferUtils_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1);
jint SM_net_jpountz_lz4_LZ4ByteBufferUtils_hash_java_nio_ByteBuffer_int_R_int(jcontext ctx, jobject param0, jint param1);
jint SM_net_jpountz_lz4_LZ4ByteBufferUtils_hash64k_java_nio_ByteBuffer_int_R_int(jcontext ctx, jobject param0, jint param1);
jbool SM_net_jpountz_lz4_LZ4ByteBufferUtils_readIntEquals_java_nio_ByteBuffer_int_int_R_boolean(jcontext ctx, jobject param0, jint param1, jint param2);
void SM_net_jpountz_lz4_LZ4ByteBufferUtils_safeIncrementalCopy_java_nio_ByteBuffer_int_int_int(jcontext ctx, jobject param0, jint param1, jint param2, jint param3);
void SM_net_jpountz_lz4_LZ4ByteBufferUtils_wildIncrementalCopy_java_nio_ByteBuffer_int_int_int(jcontext ctx, jobject param0, jint param1, jint param2, jint param3);
jint SM_net_jpountz_lz4_LZ4ByteBufferUtils_commonBytes_java_nio_ByteBuffer_int_int_int_R_int(jcontext ctx, jobject param0, jint param1, jint param2, jint param3);
jint SM_net_jpountz_lz4_LZ4ByteBufferUtils_commonBytesBackward_java_nio_ByteBuffer_int_int_int_int_R_int(jcontext ctx, jobject param0, jint param1, jint param2, jint param3, jint param4);
void SM_net_jpountz_lz4_LZ4ByteBufferUtils_safeArraycopy_java_nio_ByteBuffer_int_java_nio_ByteBuffer_int_int(jcontext ctx, jobject param0, jint param1, jobject param2, jint param3, jint param4);
void SM_net_jpountz_lz4_LZ4ByteBufferUtils_wildArraycopy_java_nio_ByteBuffer_int_java_nio_ByteBuffer_int_int(jcontext ctx, jobject param0, jint param1, jobject param2, jint param3, jint param4);
jint SM_net_jpountz_lz4_LZ4ByteBufferUtils_encodeSequence_java_nio_ByteBuffer_int_int_int_int_java_nio_ByteBuffer_int_int_R_int(jcontext ctx, jobject param0, jint param1, jint param2, jint param3, jint param4, jobject param5, jint param6, jint param7);
jint SM_net_jpountz_lz4_LZ4ByteBufferUtils_lastLiterals_java_nio_ByteBuffer_int_int_java_nio_ByteBuffer_int_int_R_int(jcontext ctx, jobject param0, jint param1, jint param2, jobject param3, jint param4, jint param5);
jint SM_net_jpountz_lz4_LZ4ByteBufferUtils_writeLen_int_java_nio_ByteBuffer_int_R_int(jcontext ctx, jint param0, jobject param1, jint param2);
void SM_net_jpountz_lz4_LZ4ByteBufferUtils_copyTo_net_jpountz_lz4_LZ4ByteBufferUtils$Match_net_jpountz_lz4_LZ4ByteBufferUtils$Match(jcontext ctx, jobject param0, jobject param1);

#ifdef __cplusplus
}
#endif

#endif
