#ifndef HEADER_java_io_PrintWriter
#define HEADER_java_io_PrintWriter

#include "Clearwing.h"
#include "java/io/Writer.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_io_PrintWriter {
	java_io_Writer parent;
	jref F_out;
	jbool F_autoFlush;
	jbool F_trouble;
	jref F_psOut;
} java_io_PrintWriter;

extern Class class_java_io_PrintWriter;


#define VTABLE_java_io_PrintWriter_hashCode_R_int 0
typedef jint (*func_java_io_PrintWriter_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_io_PrintWriter_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_io_PrintWriter_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_io_PrintWriter_clone_R_java_lang_Object 2
typedef jobject (*func_java_io_PrintWriter_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_io_PrintWriter_getClass_R_java_lang_Class 3
typedef jobject (*func_java_io_PrintWriter_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_io_PrintWriter_toString_R_java_lang_String 4
typedef jobject (*func_java_io_PrintWriter_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_io_PrintWriter_finalize 5
typedef void (*func_java_io_PrintWriter_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_io_PrintWriter_notify 6
typedef void (*func_java_io_PrintWriter_notify)(jcontext ctx, jobject self);
#define VTABLE_java_io_PrintWriter_notifyAll 7
typedef void (*func_java_io_PrintWriter_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_io_PrintWriter_wait 8
typedef void (*func_java_io_PrintWriter_wait)(jcontext ctx, jobject self);
#define VTABLE_java_io_PrintWriter_wait_long 9
typedef void (*func_java_io_PrintWriter_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_io_PrintWriter_wait_long_int 10
typedef void (*func_java_io_PrintWriter_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_io_PrintWriter_append_char_R_java_lang_Appendable 11
typedef jobject (*func_java_io_PrintWriter_append_char_R_java_lang_Appendable)(jcontext ctx, jobject self, jchar param0);
#define VTABLE_java_io_PrintWriter_append_java_lang_CharSequence_R_java_lang_Appendable 12
typedef jobject (*func_java_io_PrintWriter_append_java_lang_CharSequence_R_java_lang_Appendable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_io_PrintWriter_append_java_lang_CharSequence_int_int_R_java_lang_Appendable 13
typedef jobject (*func_java_io_PrintWriter_append_java_lang_CharSequence_int_int_R_java_lang_Appendable)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_java_io_PrintWriter_close 14
typedef void (*func_java_io_PrintWriter_close)(jcontext ctx, jobject self);
#define VTABLE_java_io_PrintWriter_flush 15
typedef void (*func_java_io_PrintWriter_flush)(jcontext ctx, jobject self);
#define VTABLE_java_io_PrintWriter_write_Array1_char 16
typedef void (*func_java_io_PrintWriter_write_Array1_char)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_io_PrintWriter_write_Array1_char_int_int 17
typedef void (*func_java_io_PrintWriter_write_Array1_char_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_java_io_PrintWriter_write_int 18
typedef void (*func_java_io_PrintWriter_write_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_io_PrintWriter_write_java_lang_String 19
typedef void (*func_java_io_PrintWriter_write_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_io_PrintWriter_write_java_lang_String_int_int 20
typedef void (*func_java_io_PrintWriter_write_java_lang_String_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_java_io_PrintWriter_append_java_lang_CharSequence_R_java_io_Writer 21
typedef jobject (*func_java_io_PrintWriter_append_java_lang_CharSequence_R_java_io_Writer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_io_PrintWriter_append_char_R_java_io_Writer 22
typedef jobject (*func_java_io_PrintWriter_append_char_R_java_io_Writer)(jcontext ctx, jobject self, jchar param0);
#define VTABLE_java_io_PrintWriter_append_java_lang_CharSequence_int_int_R_java_io_Writer 23
typedef jobject (*func_java_io_PrintWriter_append_java_lang_CharSequence_int_int_R_java_io_Writer)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_java_io_PrintWriter_ensureOpen 24
typedef void (*func_java_io_PrintWriter_ensureOpen)(jcontext ctx, jobject self);
#define VTABLE_java_io_PrintWriter_checkError_R_boolean 25
typedef jbool (*func_java_io_PrintWriter_checkError_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_io_PrintWriter_setError 26
typedef void (*func_java_io_PrintWriter_setError)(jcontext ctx, jobject self);
#define VTABLE_java_io_PrintWriter_newLine 27
typedef void (*func_java_io_PrintWriter_newLine)(jcontext ctx, jobject self);
#define VTABLE_java_io_PrintWriter_print_boolean 28
typedef void (*func_java_io_PrintWriter_print_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_java_io_PrintWriter_print_char 29
typedef void (*func_java_io_PrintWriter_print_char)(jcontext ctx, jobject self, jchar param0);
#define VTABLE_java_io_PrintWriter_print_int 30
typedef void (*func_java_io_PrintWriter_print_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_io_PrintWriter_print_long 31
typedef void (*func_java_io_PrintWriter_print_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_io_PrintWriter_print_float 32
typedef void (*func_java_io_PrintWriter_print_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_java_io_PrintWriter_print_double 33
typedef void (*func_java_io_PrintWriter_print_double)(jcontext ctx, jobject self, jdouble param0);
#define VTABLE_java_io_PrintWriter_print_Array1_char 34
typedef void (*func_java_io_PrintWriter_print_Array1_char)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_io_PrintWriter_print_java_lang_String 35
typedef void (*func_java_io_PrintWriter_print_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_io_PrintWriter_print_java_lang_Object 36
typedef void (*func_java_io_PrintWriter_print_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_io_PrintWriter_println 37
typedef void (*func_java_io_PrintWriter_println)(jcontext ctx, jobject self);
#define VTABLE_java_io_PrintWriter_println_boolean 38
typedef void (*func_java_io_PrintWriter_println_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_java_io_PrintWriter_println_char 39
typedef void (*func_java_io_PrintWriter_println_char)(jcontext ctx, jobject self, jchar param0);
#define VTABLE_java_io_PrintWriter_println_int 40
typedef void (*func_java_io_PrintWriter_println_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_io_PrintWriter_println_long 41
typedef void (*func_java_io_PrintWriter_println_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_io_PrintWriter_println_float 42
typedef void (*func_java_io_PrintWriter_println_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_java_io_PrintWriter_println_double 43
typedef void (*func_java_io_PrintWriter_println_double)(jcontext ctx, jobject self, jdouble param0);
#define VTABLE_java_io_PrintWriter_println_Array1_char 44
typedef void (*func_java_io_PrintWriter_println_Array1_char)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_io_PrintWriter_println_java_lang_String 45
typedef void (*func_java_io_PrintWriter_println_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_io_PrintWriter_println_java_lang_Object 46
typedef void (*func_java_io_PrintWriter_println_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_io_PrintWriter_append_java_lang_CharSequence_R_java_io_PrintWriter 47
typedef jobject (*func_java_io_PrintWriter_append_java_lang_CharSequence_R_java_io_PrintWriter)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_io_PrintWriter_append_java_lang_CharSequence_int_int_R_java_io_PrintWriter 48
typedef jobject (*func_java_io_PrintWriter_append_java_lang_CharSequence_int_int_R_java_io_PrintWriter)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_java_io_PrintWriter_append_char_R_java_io_PrintWriter 49
typedef jobject (*func_java_io_PrintWriter_append_char_R_java_io_PrintWriter)(jcontext ctx, jobject self, jchar param0);

void mark_java_io_PrintWriter(jobject object, jint mark, jint depth);
void clinit_java_io_PrintWriter(jcontext ctx);
void init_java_io_PrintWriter_java_io_Writer(jcontext ctx, jobject self, jobject param0);
void init_java_io_PrintWriter_java_io_Writer_boolean(jcontext ctx, jobject self, jobject param0, jbool param1);
void init_java_io_PrintWriter_java_io_OutputStream(jcontext ctx, jobject self, jobject param0);
void init_java_io_PrintWriter_java_io_OutputStream_boolean(jcontext ctx, jobject self, jobject param0, jbool param1);
void M_java_io_PrintWriter_ensureOpen(jcontext ctx, jobject self);
void M_java_io_PrintWriter_flush(jcontext ctx, jobject self);
void M_java_io_PrintWriter_close(jcontext ctx, jobject self);
jbool M_java_io_PrintWriter_checkError_R_boolean(jcontext ctx, jobject self);
void M_java_io_PrintWriter_setError(jcontext ctx, jobject self);
void M_java_io_PrintWriter_write_int(jcontext ctx, jobject self, jint param0);
void M_java_io_PrintWriter_write_Array1_char_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
void M_java_io_PrintWriter_write_Array1_char(jcontext ctx, jobject self, jobject param0);
void M_java_io_PrintWriter_write_java_lang_String_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
void M_java_io_PrintWriter_write_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_java_io_PrintWriter_newLine(jcontext ctx, jobject self);
void M_java_io_PrintWriter_print_boolean(jcontext ctx, jobject self, jbool param0);
void M_java_io_PrintWriter_print_char(jcontext ctx, jobject self, jchar param0);
void M_java_io_PrintWriter_print_int(jcontext ctx, jobject self, jint param0);
void M_java_io_PrintWriter_print_long(jcontext ctx, jobject self, jlong param0);
void M_java_io_PrintWriter_print_float(jcontext ctx, jobject self, jfloat param0);
void M_java_io_PrintWriter_print_double(jcontext ctx, jobject self, jdouble param0);
void M_java_io_PrintWriter_print_Array1_char(jcontext ctx, jobject self, jobject param0);
void M_java_io_PrintWriter_print_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_java_io_PrintWriter_print_java_lang_Object(jcontext ctx, jobject self, jobject param0);
void M_java_io_PrintWriter_println(jcontext ctx, jobject self);
void M_java_io_PrintWriter_println_boolean(jcontext ctx, jobject self, jbool param0);
void M_java_io_PrintWriter_println_char(jcontext ctx, jobject self, jchar param0);
void M_java_io_PrintWriter_println_int(jcontext ctx, jobject self, jint param0);
void M_java_io_PrintWriter_println_long(jcontext ctx, jobject self, jlong param0);
void M_java_io_PrintWriter_println_float(jcontext ctx, jobject self, jfloat param0);
void M_java_io_PrintWriter_println_double(jcontext ctx, jobject self, jdouble param0);
void M_java_io_PrintWriter_println_Array1_char(jcontext ctx, jobject self, jobject param0);
void M_java_io_PrintWriter_println_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_java_io_PrintWriter_println_java_lang_Object(jcontext ctx, jobject self, jobject param0);
jobject M_java_io_PrintWriter_append_java_lang_CharSequence_R_java_io_PrintWriter(jcontext ctx, jobject self, jobject param0);
jobject M_java_io_PrintWriter_append_java_lang_CharSequence_int_int_R_java_io_PrintWriter(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
jobject M_java_io_PrintWriter_append_char_R_java_io_PrintWriter(jcontext ctx, jobject self, jchar param0);
jobject M_java_io_PrintWriter_append_java_lang_CharSequence_int_int_R_java_io_Writer(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
jobject M_java_io_PrintWriter_append_char_R_java_io_Writer(jcontext ctx, jobject self, jchar param0);
jobject M_java_io_PrintWriter_append_java_lang_CharSequence_R_java_io_Writer(jcontext ctx, jobject self, jobject param0);
jobject M_java_io_PrintWriter_append_java_lang_CharSequence_int_int_R_java_lang_Appendable(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
jobject M_java_io_PrintWriter_append_java_lang_CharSequence_R_java_lang_Appendable(jcontext ctx, jobject self, jobject param0);
jobject M_java_io_PrintWriter_append_char_R_java_lang_Appendable(jcontext ctx, jobject self, jchar param0);

#ifdef __cplusplus
}
#endif

#endif
