#ifndef HEADER_java_io_PrintStream
#define HEADER_java_io_PrintStream

#include "Clearwing.h"
#include "java/io/FilterOutputStream.h"
#include "java/lang/Appendable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_io_PrintStream {
	java_io_FilterOutputStream parent;
	jbool F_ioError;
	jref F_formatter;
	jbool F_autoFlush;
	jref F_encoding;
} java_io_PrintStream;

extern Class class_java_io_PrintStream;


#define VTABLE_java_io_PrintStream_hashCode_R_int 0
typedef jint (*func_java_io_PrintStream_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_io_PrintStream_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_io_PrintStream_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_io_PrintStream_clone_R_java_lang_Object 2
typedef jobject (*func_java_io_PrintStream_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_io_PrintStream_getClass_R_java_lang_Class 3
typedef jobject (*func_java_io_PrintStream_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_io_PrintStream_toString_R_java_lang_String 4
typedef jobject (*func_java_io_PrintStream_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_io_PrintStream_finalize 5
typedef void (*func_java_io_PrintStream_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_io_PrintStream_notify 6
typedef void (*func_java_io_PrintStream_notify)(jcontext ctx, jobject self);
#define VTABLE_java_io_PrintStream_notifyAll 7
typedef void (*func_java_io_PrintStream_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_io_PrintStream_wait 8
typedef void (*func_java_io_PrintStream_wait)(jcontext ctx, jobject self);
#define VTABLE_java_io_PrintStream_wait_long 9
typedef void (*func_java_io_PrintStream_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_io_PrintStream_wait_long_int 10
typedef void (*func_java_io_PrintStream_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_io_PrintStream_close 11
typedef void (*func_java_io_PrintStream_close)(jcontext ctx, jobject self);
#define VTABLE_java_io_PrintStream_flush 12
typedef void (*func_java_io_PrintStream_flush)(jcontext ctx, jobject self);
#define VTABLE_java_io_PrintStream_write_Array1_byte 13
typedef void (*func_java_io_PrintStream_write_Array1_byte)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_io_PrintStream_write_Array1_byte_int_int 14
typedef void (*func_java_io_PrintStream_write_Array1_byte_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_java_io_PrintStream_write_int 15
typedef void (*func_java_io_PrintStream_write_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_io_PrintStream_checkError_R_boolean 16
typedef jbool (*func_java_io_PrintStream_checkError_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_io_PrintStream_append_char_R_java_lang_Appendable 17
typedef jobject (*func_java_io_PrintStream_append_char_R_java_lang_Appendable)(jcontext ctx, jobject self, jchar param0);
#define VTABLE_java_io_PrintStream_append_java_lang_CharSequence_R_java_lang_Appendable 18
typedef jobject (*func_java_io_PrintStream_append_java_lang_CharSequence_R_java_lang_Appendable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_io_PrintStream_append_java_lang_CharSequence_int_int_R_java_lang_Appendable 19
typedef jobject (*func_java_io_PrintStream_append_java_lang_CharSequence_int_int_R_java_lang_Appendable)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_java_io_PrintStream_clearError 20
typedef void (*func_java_io_PrintStream_clearError)(jcontext ctx, jobject self);
#define VTABLE_java_io_PrintStream_newline 21
typedef void (*func_java_io_PrintStream_newline)(jcontext ctx, jobject self);
#define VTABLE_java_io_PrintStream_print_Array1_char 22
typedef void (*func_java_io_PrintStream_print_Array1_char)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_io_PrintStream_print_char 23
typedef void (*func_java_io_PrintStream_print_char)(jcontext ctx, jobject self, jchar param0);
#define VTABLE_java_io_PrintStream_print_double 24
typedef void (*func_java_io_PrintStream_print_double)(jcontext ctx, jobject self, jdouble param0);
#define VTABLE_java_io_PrintStream_print_float 25
typedef void (*func_java_io_PrintStream_print_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_java_io_PrintStream_print_int 26
typedef void (*func_java_io_PrintStream_print_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_io_PrintStream_print_long 27
typedef void (*func_java_io_PrintStream_print_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_io_PrintStream_print_java_lang_Object 28
typedef void (*func_java_io_PrintStream_print_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_io_PrintStream_print_java_lang_String 29
typedef void (*func_java_io_PrintStream_print_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_io_PrintStream_print_boolean 30
typedef void (*func_java_io_PrintStream_print_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_java_io_PrintStream_println 31
typedef void (*func_java_io_PrintStream_println)(jcontext ctx, jobject self);
#define VTABLE_java_io_PrintStream_println_Array1_char 32
typedef void (*func_java_io_PrintStream_println_Array1_char)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_io_PrintStream_println_char 33
typedef void (*func_java_io_PrintStream_println_char)(jcontext ctx, jobject self, jchar param0);
#define VTABLE_java_io_PrintStream_println_double 34
typedef void (*func_java_io_PrintStream_println_double)(jcontext ctx, jobject self, jdouble param0);
#define VTABLE_java_io_PrintStream_println_float 35
typedef void (*func_java_io_PrintStream_println_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_java_io_PrintStream_println_int 36
typedef void (*func_java_io_PrintStream_println_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_io_PrintStream_println_long 37
typedef void (*func_java_io_PrintStream_println_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_io_PrintStream_println_java_lang_Object 38
typedef void (*func_java_io_PrintStream_println_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_io_PrintStream_println_java_lang_String 39
typedef void (*func_java_io_PrintStream_println_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_io_PrintStream_println_boolean 40
typedef void (*func_java_io_PrintStream_println_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_java_io_PrintStream_setError 41
typedef void (*func_java_io_PrintStream_setError)(jcontext ctx, jobject self);
#define VTABLE_java_io_PrintStream_printf_java_lang_String_Array1_java_lang_Object_R_java_io_PrintStream 42
typedef jobject (*func_java_io_PrintStream_printf_java_lang_String_Array1_java_lang_Object_R_java_io_PrintStream)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_io_PrintStream_printf_java_util_Locale_java_lang_String_Array1_java_lang_Object_R_java_io_PrintStream 43
typedef jobject (*func_java_io_PrintStream_printf_java_util_Locale_java_lang_String_Array1_java_lang_Object_R_java_io_PrintStream)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_java_io_PrintStream_append_char_R_java_io_PrintStream 44
typedef jobject (*func_java_io_PrintStream_append_char_R_java_io_PrintStream)(jcontext ctx, jobject self, jchar param0);
#define VTABLE_java_io_PrintStream_append_java_lang_CharSequence_R_java_io_PrintStream 45
typedef jobject (*func_java_io_PrintStream_append_java_lang_CharSequence_R_java_io_PrintStream)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_io_PrintStream_append_java_lang_CharSequence_int_int_R_java_io_PrintStream 46
typedef jobject (*func_java_io_PrintStream_append_java_lang_CharSequence_int_int_R_java_io_PrintStream)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);

void mark_java_io_PrintStream(jobject object, jint mark, jint depth);
void clinit_java_io_PrintStream(jcontext ctx);
void init_java_io_PrintStream_java_io_OutputStream(jcontext ctx, jobject self, jobject param0);
void init_java_io_PrintStream_java_io_OutputStream_boolean(jcontext ctx, jobject self, jobject param0, jbool param1);
void init_java_io_PrintStream_java_io_OutputStream_boolean_java_lang_String(jcontext ctx, jobject self, jobject param0, jbool param1, jobject param2);
jbool M_java_io_PrintStream_checkError_R_boolean(jcontext ctx, jobject self);
void M_java_io_PrintStream_clearError(jcontext ctx, jobject self);
void M_java_io_PrintStream_close(jcontext ctx, jobject self);
void M_java_io_PrintStream_flush(jcontext ctx, jobject self);
void M_java_io_PrintStream_newline(jcontext ctx, jobject self);
void M_java_io_PrintStream_print_Array1_char(jcontext ctx, jobject self, jobject param0);
void M_java_io_PrintStream_print_char(jcontext ctx, jobject self, jchar param0);
void M_java_io_PrintStream_print_double(jcontext ctx, jobject self, jdouble param0);
void M_java_io_PrintStream_print_float(jcontext ctx, jobject self, jfloat param0);
void M_java_io_PrintStream_print_int(jcontext ctx, jobject self, jint param0);
void M_java_io_PrintStream_print_long(jcontext ctx, jobject self, jlong param0);
void M_java_io_PrintStream_print_java_lang_Object(jcontext ctx, jobject self, jobject param0);
void M_java_io_PrintStream_print_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_java_io_PrintStream_print_boolean(jcontext ctx, jobject self, jbool param0);
void M_java_io_PrintStream_println(jcontext ctx, jobject self);
void M_java_io_PrintStream_println_Array1_char(jcontext ctx, jobject self, jobject param0);
void M_java_io_PrintStream_println_char(jcontext ctx, jobject self, jchar param0);
void M_java_io_PrintStream_println_double(jcontext ctx, jobject self, jdouble param0);
void M_java_io_PrintStream_println_float(jcontext ctx, jobject self, jfloat param0);
void M_java_io_PrintStream_println_int(jcontext ctx, jobject self, jint param0);
void M_java_io_PrintStream_println_long(jcontext ctx, jobject self, jlong param0);
void M_java_io_PrintStream_println_java_lang_Object(jcontext ctx, jobject self, jobject param0);
void M_java_io_PrintStream_println_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_java_io_PrintStream_println_boolean(jcontext ctx, jobject self, jbool param0);
void M_java_io_PrintStream_setError(jcontext ctx, jobject self);
void M_java_io_PrintStream_write_Array1_byte_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
void M_java_io_PrintStream_write_int(jcontext ctx, jobject self, jint param0);
jobject M_java_io_PrintStream_printf_java_lang_String_Array1_java_lang_Object_R_java_io_PrintStream(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_java_io_PrintStream_printf_java_util_Locale_java_lang_String_Array1_java_lang_Object_R_java_io_PrintStream(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
jobject M_java_io_PrintStream_append_char_R_java_io_PrintStream(jcontext ctx, jobject self, jchar param0);
jobject M_java_io_PrintStream_append_java_lang_CharSequence_R_java_io_PrintStream(jcontext ctx, jobject self, jobject param0);
jobject M_java_io_PrintStream_append_java_lang_CharSequence_int_int_R_java_io_PrintStream(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
jobject M_java_io_PrintStream_append_java_lang_CharSequence_int_int_R_java_lang_Appendable(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
jobject M_java_io_PrintStream_append_java_lang_CharSequence_R_java_lang_Appendable(jcontext ctx, jobject self, jobject param0);
jobject M_java_io_PrintStream_append_char_R_java_lang_Appendable(jcontext ctx, jobject self, jchar param0);

#ifdef __cplusplus
}
#endif

#endif
