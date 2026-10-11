#ifndef HEADER_arc_util_io_Reads
#define HEADER_arc_util_io_Reads

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/io/Closeable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_util_io_Reads {
	java_lang_Object parent;
	jref F_bytearr;
	jref F_chararr;
	jref F_input;
} arc_util_io_Reads;

extern Class class_arc_util_io_Reads;


#define VTABLE_arc_util_io_Reads_hashCode_R_int 0
typedef jint (*func_arc_util_io_Reads_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_util_io_Reads_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_util_io_Reads_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_io_Reads_clone_R_java_lang_Object 2
typedef jobject (*func_arc_util_io_Reads_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_util_io_Reads_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_util_io_Reads_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_util_io_Reads_toString_R_java_lang_String 4
typedef jobject (*func_arc_util_io_Reads_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_util_io_Reads_finalize 5
typedef void (*func_arc_util_io_Reads_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_util_io_Reads_notify 6
typedef void (*func_arc_util_io_Reads_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_util_io_Reads_notifyAll 7
typedef void (*func_arc_util_io_Reads_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_util_io_Reads_wait 8
typedef void (*func_arc_util_io_Reads_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_util_io_Reads_wait_long 9
typedef void (*func_arc_util_io_Reads_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_util_io_Reads_wait_long_int 10
typedef void (*func_arc_util_io_Reads_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_util_io_Reads_close 11
typedef void (*func_arc_util_io_Reads_close)(jcontext ctx, jobject self);
#define VTABLE_arc_util_io_Reads_checkEOF_R_int 12
typedef jint (*func_arc_util_io_Reads_checkEOF_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_util_io_Reads_l_R_long 13
typedef jlong (*func_arc_util_io_Reads_l_R_long)(jcontext ctx, jobject self);
#define VTABLE_arc_util_io_Reads_i_R_int 14
typedef jint (*func_arc_util_io_Reads_i_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_util_io_Reads_s_R_short 15
typedef jshort (*func_arc_util_io_Reads_s_R_short)(jcontext ctx, jobject self);
#define VTABLE_arc_util_io_Reads_us_R_int 16
typedef jint (*func_arc_util_io_Reads_us_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_util_io_Reads_b_R_byte 17
typedef jbyte (*func_arc_util_io_Reads_b_R_byte)(jcontext ctx, jobject self);
#define VTABLE_arc_util_io_Reads_b_int_R_Array1_byte 18
typedef jobject (*func_arc_util_io_Reads_b_int_R_Array1_byte)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_util_io_Reads_b_Array1_byte_R_Array1_byte 19
typedef jobject (*func_arc_util_io_Reads_b_Array1_byte_R_Array1_byte)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_io_Reads_b_Array1_byte_int_int_R_Array1_byte 20
typedef jobject (*func_arc_util_io_Reads_b_Array1_byte_int_int_R_Array1_byte)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_arc_util_io_Reads_ub_R_int 21
typedef jint (*func_arc_util_io_Reads_ub_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_util_io_Reads_bool_R_boolean 22
typedef jbool (*func_arc_util_io_Reads_bool_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_util_io_Reads_f_R_float 23
typedef jfloat (*func_arc_util_io_Reads_f_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_util_io_Reads_d_R_double 24
typedef jdouble (*func_arc_util_io_Reads_d_R_double)(jcontext ctx, jobject self);
#define VTABLE_arc_util_io_Reads_str_R_java_lang_String 25
typedef jobject (*func_arc_util_io_Reads_str_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_util_io_Reads_skip_int 26
typedef void (*func_arc_util_io_Reads_skip_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_util_io_Reads_str_int_R_java_lang_String 27
typedef jobject (*func_arc_util_io_Reads_str_int_R_java_lang_String)(jcontext ctx, jobject self, jint param0);

void mark_arc_util_io_Reads(jobject object, jint mark, jint depth);
void clinit_arc_util_io_Reads(jcontext ctx);
void init_arc_util_io_Reads_java_io_DataInput(jcontext ctx, jobject self, jobject param0);
jobject SM_arc_util_io_Reads_get_java_io_DataInput_R_arc_util_io_Reads(jcontext ctx, jobject param0);
jint M_arc_util_io_Reads_checkEOF_R_int(jcontext ctx, jobject self);
jlong M_arc_util_io_Reads_l_R_long(jcontext ctx, jobject self);
jint M_arc_util_io_Reads_i_R_int(jcontext ctx, jobject self);
jshort M_arc_util_io_Reads_s_R_short(jcontext ctx, jobject self);
jint M_arc_util_io_Reads_us_R_int(jcontext ctx, jobject self);
jbyte M_arc_util_io_Reads_b_R_byte(jcontext ctx, jobject self);
jobject M_arc_util_io_Reads_b_int_R_Array1_byte(jcontext ctx, jobject self, jint param0);
jobject M_arc_util_io_Reads_b_Array1_byte_R_Array1_byte(jcontext ctx, jobject self, jobject param0);
jobject M_arc_util_io_Reads_b_Array1_byte_int_int_R_Array1_byte(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
jint M_arc_util_io_Reads_ub_R_int(jcontext ctx, jobject self);
jbool M_arc_util_io_Reads_bool_R_boolean(jcontext ctx, jobject self);
jfloat M_arc_util_io_Reads_f_R_float(jcontext ctx, jobject self);
jdouble M_arc_util_io_Reads_d_R_double(jcontext ctx, jobject self);
jobject M_arc_util_io_Reads_str_R_java_lang_String(jcontext ctx, jobject self);
void M_arc_util_io_Reads_skip_int(jcontext ctx, jobject self, jint param0);
jobject M_arc_util_io_Reads_str_int_R_java_lang_String(jcontext ctx, jobject self, jint param0);
void M_arc_util_io_Reads_close(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
