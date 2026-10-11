#ifndef HEADER_arc_util_io_Writes
#define HEADER_arc_util_io_Writes

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/io/Closeable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_util_io_Writes {
	java_lang_Object parent;
	jref F_output;
} arc_util_io_Writes;

extern Class class_arc_util_io_Writes;


#define VTABLE_arc_util_io_Writes_hashCode_R_int 0
typedef jint (*func_arc_util_io_Writes_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_util_io_Writes_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_util_io_Writes_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_io_Writes_clone_R_java_lang_Object 2
typedef jobject (*func_arc_util_io_Writes_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_util_io_Writes_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_util_io_Writes_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_util_io_Writes_toString_R_java_lang_String 4
typedef jobject (*func_arc_util_io_Writes_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_util_io_Writes_finalize 5
typedef void (*func_arc_util_io_Writes_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_util_io_Writes_notify 6
typedef void (*func_arc_util_io_Writes_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_util_io_Writes_notifyAll 7
typedef void (*func_arc_util_io_Writes_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_util_io_Writes_wait 8
typedef void (*func_arc_util_io_Writes_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_util_io_Writes_wait_long 9
typedef void (*func_arc_util_io_Writes_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_util_io_Writes_wait_long_int 10
typedef void (*func_arc_util_io_Writes_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_util_io_Writes_close 11
typedef void (*func_arc_util_io_Writes_close)(jcontext ctx, jobject self);
#define VTABLE_arc_util_io_Writes_l_long 12
typedef void (*func_arc_util_io_Writes_l_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_util_io_Writes_i_int 13
typedef void (*func_arc_util_io_Writes_i_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_util_io_Writes_b_int 14
typedef void (*func_arc_util_io_Writes_b_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_util_io_Writes_b_Array1_byte_int_int 15
typedef void (*func_arc_util_io_Writes_b_Array1_byte_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_arc_util_io_Writes_b_Array1_byte 16
typedef void (*func_arc_util_io_Writes_b_Array1_byte)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_io_Writes_bool_boolean 17
typedef void (*func_arc_util_io_Writes_bool_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_arc_util_io_Writes_s_int 18
typedef void (*func_arc_util_io_Writes_s_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_util_io_Writes_f_float 19
typedef void (*func_arc_util_io_Writes_f_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_util_io_Writes_d_double 20
typedef void (*func_arc_util_io_Writes_d_double)(jcontext ctx, jobject self, jdouble param0);
#define VTABLE_arc_util_io_Writes_str_java_lang_String 21
typedef void (*func_arc_util_io_Writes_str_java_lang_String)(jcontext ctx, jobject self, jobject param0);

void mark_arc_util_io_Writes(jobject object, jint mark, jint depth);
void clinit_arc_util_io_Writes(jcontext ctx);
void init_arc_util_io_Writes_java_io_DataOutput(jcontext ctx, jobject self, jobject param0);
jobject SM_arc_util_io_Writes_get_java_io_DataOutput_R_arc_util_io_Writes(jcontext ctx, jobject param0);
void M_arc_util_io_Writes_l_long(jcontext ctx, jobject self, jlong param0);
void M_arc_util_io_Writes_i_int(jcontext ctx, jobject self, jint param0);
void M_arc_util_io_Writes_b_int(jcontext ctx, jobject self, jint param0);
void M_arc_util_io_Writes_b_Array1_byte_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
void M_arc_util_io_Writes_b_Array1_byte(jcontext ctx, jobject self, jobject param0);
void M_arc_util_io_Writes_bool_boolean(jcontext ctx, jobject self, jbool param0);
void M_arc_util_io_Writes_s_int(jcontext ctx, jobject self, jint param0);
void M_arc_util_io_Writes_f_float(jcontext ctx, jobject self, jfloat param0);
void M_arc_util_io_Writes_d_double(jcontext ctx, jobject self, jdouble param0);
void M_arc_util_io_Writes_str_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_arc_util_io_Writes_close(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
