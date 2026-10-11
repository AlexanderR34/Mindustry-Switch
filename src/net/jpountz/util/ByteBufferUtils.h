#ifndef HEADER_net_jpountz_util_ByteBufferUtils
#define HEADER_net_jpountz_util_ByteBufferUtils

#include "Clearwing.h"
#include "java/lang/Enum.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct net_jpountz_util_ByteBufferUtils {
	java_lang_Enum parent;
} net_jpountz_util_ByteBufferUtils;

extern Class class_net_jpountz_util_ByteBufferUtils;

extern jobject SF_net_jpountz_util_ByteBufferUtils_$VALUES;
extern jbool SF_net_jpountz_util_ByteBufferUtils_$assertionsDisabled;

#define VTABLE_net_jpountz_util_ByteBufferUtils_hashCode_R_int 0
typedef jint (*func_net_jpountz_util_ByteBufferUtils_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_net_jpountz_util_ByteBufferUtils_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_net_jpountz_util_ByteBufferUtils_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_net_jpountz_util_ByteBufferUtils_clone_R_java_lang_Object 2
typedef jobject (*func_net_jpountz_util_ByteBufferUtils_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_net_jpountz_util_ByteBufferUtils_getClass_R_java_lang_Class 3
typedef jobject (*func_net_jpountz_util_ByteBufferUtils_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_net_jpountz_util_ByteBufferUtils_toString_R_java_lang_String 4
typedef jobject (*func_net_jpountz_util_ByteBufferUtils_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_net_jpountz_util_ByteBufferUtils_finalize 5
typedef void (*func_net_jpountz_util_ByteBufferUtils_finalize)(jcontext ctx, jobject self);
#define VTABLE_net_jpountz_util_ByteBufferUtils_notify 6
typedef void (*func_net_jpountz_util_ByteBufferUtils_notify)(jcontext ctx, jobject self);
#define VTABLE_net_jpountz_util_ByteBufferUtils_notifyAll 7
typedef void (*func_net_jpountz_util_ByteBufferUtils_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_net_jpountz_util_ByteBufferUtils_wait 8
typedef void (*func_net_jpountz_util_ByteBufferUtils_wait)(jcontext ctx, jobject self);
#define VTABLE_net_jpountz_util_ByteBufferUtils_wait_long 9
typedef void (*func_net_jpountz_util_ByteBufferUtils_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_net_jpountz_util_ByteBufferUtils_wait_long_int 10
typedef void (*func_net_jpountz_util_ByteBufferUtils_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_net_jpountz_util_ByteBufferUtils_compareTo_java_lang_Object_R_int 11
typedef jint (*func_net_jpountz_util_ByteBufferUtils_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_net_jpountz_util_ByteBufferUtils_compareTo_java_lang_Enum_R_int 12
typedef jint (*func_net_jpountz_util_ByteBufferUtils_compareTo_java_lang_Enum_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_net_jpountz_util_ByteBufferUtils_name_R_java_lang_String 13
typedef jobject (*func_net_jpountz_util_ByteBufferUtils_name_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_net_jpountz_util_ByteBufferUtils_ordinal_R_int 14
typedef jint (*func_net_jpountz_util_ByteBufferUtils_ordinal_R_int)(jcontext ctx, jobject self);
#define VTABLE_net_jpountz_util_ByteBufferUtils_getDeclaringClass_R_java_lang_Class 15
typedef jobject (*func_net_jpountz_util_ByteBufferUtils_getDeclaringClass_R_java_lang_Class)(jcontext ctx, jobject self);

void mark_net_jpountz_util_ByteBufferUtils(jobject object, jint mark, jint depth);
void clinit_net_jpountz_util_ByteBufferUtils(jcontext ctx);
jobject SM_net_jpountz_util_ByteBufferUtils_values_R_Array1_net_jpountz_util_ByteBufferUtils(jcontext ctx);
jobject SM_net_jpountz_util_ByteBufferUtils_valueOf_java_lang_String_R_net_jpountz_util_ByteBufferUtils(jcontext ctx, jobject param0);
void init_net_jpountz_util_ByteBufferUtils_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1);
void SM_net_jpountz_util_ByteBufferUtils_checkRange_java_nio_ByteBuffer_int_int(jcontext ctx, jobject param0, jint param1, jint param2);
void SM_net_jpountz_util_ByteBufferUtils_checkRange_java_nio_ByteBuffer_int(jcontext ctx, jobject param0, jint param1);
jobject SM_net_jpountz_util_ByteBufferUtils_inLittleEndianOrder_java_nio_ByteBuffer_R_java_nio_ByteBuffer(jcontext ctx, jobject param0);
jobject SM_net_jpountz_util_ByteBufferUtils_inNativeByteOrder_java_nio_ByteBuffer_R_java_nio_ByteBuffer(jcontext ctx, jobject param0);
jbyte SM_net_jpountz_util_ByteBufferUtils_readByte_java_nio_ByteBuffer_int_R_byte(jcontext ctx, jobject param0, jint param1);
void SM_net_jpountz_util_ByteBufferUtils_writeInt_java_nio_ByteBuffer_int_int(jcontext ctx, jobject param0, jint param1, jint param2);
jint SM_net_jpountz_util_ByteBufferUtils_readInt_java_nio_ByteBuffer_int_R_int(jcontext ctx, jobject param0, jint param1);
jint SM_net_jpountz_util_ByteBufferUtils_readIntLE_java_nio_ByteBuffer_int_R_int(jcontext ctx, jobject param0, jint param1);
void SM_net_jpountz_util_ByteBufferUtils_writeLong_java_nio_ByteBuffer_int_long(jcontext ctx, jobject param0, jint param1, jlong param2);
jlong SM_net_jpountz_util_ByteBufferUtils_readLong_java_nio_ByteBuffer_int_R_long(jcontext ctx, jobject param0, jint param1);
jlong SM_net_jpountz_util_ByteBufferUtils_readLongLE_java_nio_ByteBuffer_int_R_long(jcontext ctx, jobject param0, jint param1);
void SM_net_jpountz_util_ByteBufferUtils_writeByte_java_nio_ByteBuffer_int_int(jcontext ctx, jobject param0, jint param1, jint param2);
void SM_net_jpountz_util_ByteBufferUtils_writeShortLE_java_nio_ByteBuffer_int_int(jcontext ctx, jobject param0, jint param1, jint param2);
void SM_net_jpountz_util_ByteBufferUtils_checkNotReadOnly_java_nio_ByteBuffer(jcontext ctx, jobject param0);
jint SM_net_jpountz_util_ByteBufferUtils_readShortLE_java_nio_ByteBuffer_int_R_int(jcontext ctx, jobject param0, jint param1);

#ifdef __cplusplus
}
#endif

#endif
