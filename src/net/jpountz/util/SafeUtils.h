#ifndef HEADER_net_jpountz_util_SafeUtils
#define HEADER_net_jpountz_util_SafeUtils

#include "Clearwing.h"
#include "java/lang/Enum.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct net_jpountz_util_SafeUtils {
	java_lang_Enum parent;
} net_jpountz_util_SafeUtils;

extern Class class_net_jpountz_util_SafeUtils;

extern jobject SF_net_jpountz_util_SafeUtils_$VALUES;

#define VTABLE_net_jpountz_util_SafeUtils_hashCode_R_int 0
typedef jint (*func_net_jpountz_util_SafeUtils_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_net_jpountz_util_SafeUtils_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_net_jpountz_util_SafeUtils_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_net_jpountz_util_SafeUtils_clone_R_java_lang_Object 2
typedef jobject (*func_net_jpountz_util_SafeUtils_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_net_jpountz_util_SafeUtils_getClass_R_java_lang_Class 3
typedef jobject (*func_net_jpountz_util_SafeUtils_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_net_jpountz_util_SafeUtils_toString_R_java_lang_String 4
typedef jobject (*func_net_jpountz_util_SafeUtils_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_net_jpountz_util_SafeUtils_finalize 5
typedef void (*func_net_jpountz_util_SafeUtils_finalize)(jcontext ctx, jobject self);
#define VTABLE_net_jpountz_util_SafeUtils_notify 6
typedef void (*func_net_jpountz_util_SafeUtils_notify)(jcontext ctx, jobject self);
#define VTABLE_net_jpountz_util_SafeUtils_notifyAll 7
typedef void (*func_net_jpountz_util_SafeUtils_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_net_jpountz_util_SafeUtils_wait 8
typedef void (*func_net_jpountz_util_SafeUtils_wait)(jcontext ctx, jobject self);
#define VTABLE_net_jpountz_util_SafeUtils_wait_long 9
typedef void (*func_net_jpountz_util_SafeUtils_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_net_jpountz_util_SafeUtils_wait_long_int 10
typedef void (*func_net_jpountz_util_SafeUtils_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_net_jpountz_util_SafeUtils_compareTo_java_lang_Object_R_int 11
typedef jint (*func_net_jpountz_util_SafeUtils_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_net_jpountz_util_SafeUtils_compareTo_java_lang_Enum_R_int 12
typedef jint (*func_net_jpountz_util_SafeUtils_compareTo_java_lang_Enum_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_net_jpountz_util_SafeUtils_name_R_java_lang_String 13
typedef jobject (*func_net_jpountz_util_SafeUtils_name_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_net_jpountz_util_SafeUtils_ordinal_R_int 14
typedef jint (*func_net_jpountz_util_SafeUtils_ordinal_R_int)(jcontext ctx, jobject self);
#define VTABLE_net_jpountz_util_SafeUtils_getDeclaringClass_R_java_lang_Class 15
typedef jobject (*func_net_jpountz_util_SafeUtils_getDeclaringClass_R_java_lang_Class)(jcontext ctx, jobject self);

void mark_net_jpountz_util_SafeUtils(jobject object, jint mark, jint depth);
void clinit_net_jpountz_util_SafeUtils(jcontext ctx);
jobject SM_net_jpountz_util_SafeUtils_values_R_Array1_net_jpountz_util_SafeUtils(jcontext ctx);
jobject SM_net_jpountz_util_SafeUtils_valueOf_java_lang_String_R_net_jpountz_util_SafeUtils(jcontext ctx, jobject param0);
void init_net_jpountz_util_SafeUtils_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1);
void SM_net_jpountz_util_SafeUtils_checkRange_Array1_byte_int(jcontext ctx, jobject param0, jint param1);
void SM_net_jpountz_util_SafeUtils_checkRange_Array1_byte_int_int(jcontext ctx, jobject param0, jint param1, jint param2);
void SM_net_jpountz_util_SafeUtils_checkLength_int(jcontext ctx, jint param0);
jbyte SM_net_jpountz_util_SafeUtils_readByte_Array1_byte_int_R_byte(jcontext ctx, jobject param0, jint param1);
jint SM_net_jpountz_util_SafeUtils_readIntBE_Array1_byte_int_R_int(jcontext ctx, jobject param0, jint param1);
jint SM_net_jpountz_util_SafeUtils_readIntLE_Array1_byte_int_R_int(jcontext ctx, jobject param0, jint param1);
jint SM_net_jpountz_util_SafeUtils_readInt_Array1_byte_int_R_int(jcontext ctx, jobject param0, jint param1);
jlong SM_net_jpountz_util_SafeUtils_readLongLE_Array1_byte_int_R_long(jcontext ctx, jobject param0, jint param1);
void SM_net_jpountz_util_SafeUtils_writeShortLE_Array1_byte_int_int(jcontext ctx, jobject param0, jint param1, jint param2);
void SM_net_jpountz_util_SafeUtils_writeInt_Array1_int_int_int(jcontext ctx, jobject param0, jint param1, jint param2);
jint SM_net_jpountz_util_SafeUtils_readInt_Array1_int_int_R_int(jcontext ctx, jobject param0, jint param1);
void SM_net_jpountz_util_SafeUtils_writeByte_Array1_byte_int_int(jcontext ctx, jobject param0, jint param1, jint param2);
void SM_net_jpountz_util_SafeUtils_writeShort_Array1_short_int_int(jcontext ctx, jobject param0, jint param1, jint param2);
jint SM_net_jpountz_util_SafeUtils_readShortLE_Array1_byte_int_R_int(jcontext ctx, jobject param0, jint param1);
jint SM_net_jpountz_util_SafeUtils_readShort_Array1_short_int_R_int(jcontext ctx, jobject param0, jint param1);

#ifdef __cplusplus
}
#endif

#endif
