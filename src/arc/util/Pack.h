#ifndef HEADER_arc_util_Pack
#define HEADER_arc_util_Pack

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_util_Pack {
	java_lang_Object parent;
} arc_util_Pack;

extern Class class_arc_util_Pack;


#define VTABLE_arc_util_Pack_hashCode_R_int 0
typedef jint (*func_arc_util_Pack_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Pack_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_util_Pack_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_Pack_clone_R_java_lang_Object 2
typedef jobject (*func_arc_util_Pack_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Pack_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_util_Pack_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Pack_toString_R_java_lang_String 4
typedef jobject (*func_arc_util_Pack_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Pack_finalize 5
typedef void (*func_arc_util_Pack_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Pack_notify 6
typedef void (*func_arc_util_Pack_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Pack_notifyAll 7
typedef void (*func_arc_util_Pack_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Pack_wait 8
typedef void (*func_arc_util_Pack_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Pack_wait_long 9
typedef void (*func_arc_util_Pack_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_util_Pack_wait_long_int 10
typedef void (*func_arc_util_Pack_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_arc_util_Pack(jobject object, jint mark, jint depth);
void clinit_arc_util_Pack(jcontext ctx);
void init_arc_util_Pack(jcontext ctx, jobject self);
jfloat SM_arc_util_Pack_packUv_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1);
jint SM_arc_util_Pack_u_byte_R_int(jcontext ctx, jbyte param0);
jint SM_arc_util_Pack_u_short_R_int(jcontext ctx, jshort param0);
jlong SM_arc_util_Pack_u_int_R_long(jcontext ctx, jint param0);
jbyte SM_arc_util_Pack_byteValue_boolean_R_byte(jcontext ctx, jbool param0);
jint SM_arc_util_Pack_shortInt_short_short_R_int(jcontext ctx, jshort param0, jshort param1);
jlong SM_arc_util_Pack_longInt_int_int_R_long(jcontext ctx, jint param0, jint param1);
jbyte SM_arc_util_Pack_byteByte_byte_byte_R_byte(jcontext ctx, jbyte param0, jbyte param1);
jbyte SM_arc_util_Pack_leftByte_byte_R_byte(jcontext ctx, jbyte param0);
jbyte SM_arc_util_Pack_rightByte_byte_R_byte(jcontext ctx, jbyte param0);
jshort SM_arc_util_Pack_leftShort_int_R_short(jcontext ctx, jint param0);
jshort SM_arc_util_Pack_rightShort_int_R_short(jcontext ctx, jint param0);
jint SM_arc_util_Pack_leftInt_long_R_int(jcontext ctx, jlong param0);
jint SM_arc_util_Pack_rightInt_long_R_int(jcontext ctx, jlong param0);
jbyte SM_arc_util_Pack_leftByte_short_R_byte(jcontext ctx, jshort param0);
jbyte SM_arc_util_Pack_rightByte_short_R_byte(jcontext ctx, jshort param0);
jshort SM_arc_util_Pack_shortByte_byte_byte_R_short(jcontext ctx, jbyte param0, jbyte param1);
jobject SM_arc_util_Pack_bytes_int_Array1_byte_R_Array1_byte(jcontext ctx, jint param0, jobject param1);
jobject SM_arc_util_Pack_shorts_long_Array1_short_R_Array1_short(jcontext ctx, jlong param0, jobject param1);
jlong SM_arc_util_Pack_longShorts_Array1_short_R_long(jcontext ctx, jobject param0);
jint SM_arc_util_Pack_intBytes_byte_byte_byte_byte_R_int(jcontext ctx, jbyte param0, jbyte param1, jbyte param2, jbyte param3);
jint SM_arc_util_Pack_intBytes_Array1_byte_R_int(jcontext ctx, jobject param0);
jint SM_arc_util_Pack_bitmask_int_int_boolean_R_int(jcontext ctx, jint param0, jint param1, jbool param2);

#ifdef __cplusplus
}
#endif

#endif
