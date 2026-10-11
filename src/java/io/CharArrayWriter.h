#ifndef HEADER_java_io_CharArrayWriter
#define HEADER_java_io_CharArrayWriter

#include "Clearwing.h"
#include "java/io/Writer.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_io_CharArrayWriter {
	java_io_Writer parent;
	jref F_buf;
	jint F_count;
} java_io_CharArrayWriter;

extern Class class_java_io_CharArrayWriter;


#define VTABLE_java_io_CharArrayWriter_hashCode_R_int 0
typedef jint (*func_java_io_CharArrayWriter_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_io_CharArrayWriter_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_io_CharArrayWriter_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_io_CharArrayWriter_clone_R_java_lang_Object 2
typedef jobject (*func_java_io_CharArrayWriter_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_io_CharArrayWriter_getClass_R_java_lang_Class 3
typedef jobject (*func_java_io_CharArrayWriter_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_io_CharArrayWriter_toString_R_java_lang_String 4
typedef jobject (*func_java_io_CharArrayWriter_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_io_CharArrayWriter_finalize 5
typedef void (*func_java_io_CharArrayWriter_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_io_CharArrayWriter_notify 6
typedef void (*func_java_io_CharArrayWriter_notify)(jcontext ctx, jobject self);
#define VTABLE_java_io_CharArrayWriter_notifyAll 7
typedef void (*func_java_io_CharArrayWriter_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_io_CharArrayWriter_wait 8
typedef void (*func_java_io_CharArrayWriter_wait)(jcontext ctx, jobject self);
#define VTABLE_java_io_CharArrayWriter_wait_long 9
typedef void (*func_java_io_CharArrayWriter_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_io_CharArrayWriter_wait_long_int 10
typedef void (*func_java_io_CharArrayWriter_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_io_CharArrayWriter_append_char_R_java_lang_Appendable 11
typedef jobject (*func_java_io_CharArrayWriter_append_char_R_java_lang_Appendable)(jcontext ctx, jobject self, jchar param0);
#define VTABLE_java_io_CharArrayWriter_append_java_lang_CharSequence_R_java_lang_Appendable 12
typedef jobject (*func_java_io_CharArrayWriter_append_java_lang_CharSequence_R_java_lang_Appendable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_io_CharArrayWriter_append_java_lang_CharSequence_int_int_R_java_lang_Appendable 13
typedef jobject (*func_java_io_CharArrayWriter_append_java_lang_CharSequence_int_int_R_java_lang_Appendable)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_java_io_CharArrayWriter_close 14
typedef void (*func_java_io_CharArrayWriter_close)(jcontext ctx, jobject self);
#define VTABLE_java_io_CharArrayWriter_flush 15
typedef void (*func_java_io_CharArrayWriter_flush)(jcontext ctx, jobject self);
#define VTABLE_java_io_CharArrayWriter_write_Array1_char 16
typedef void (*func_java_io_CharArrayWriter_write_Array1_char)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_io_CharArrayWriter_write_Array1_char_int_int 17
typedef void (*func_java_io_CharArrayWriter_write_Array1_char_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_java_io_CharArrayWriter_write_int 18
typedef void (*func_java_io_CharArrayWriter_write_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_io_CharArrayWriter_write_java_lang_String 19
typedef void (*func_java_io_CharArrayWriter_write_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_io_CharArrayWriter_write_java_lang_String_int_int 20
typedef void (*func_java_io_CharArrayWriter_write_java_lang_String_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_java_io_CharArrayWriter_append_java_lang_CharSequence_R_java_io_Writer 21
typedef jobject (*func_java_io_CharArrayWriter_append_java_lang_CharSequence_R_java_io_Writer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_io_CharArrayWriter_append_char_R_java_io_Writer 22
typedef jobject (*func_java_io_CharArrayWriter_append_char_R_java_io_Writer)(jcontext ctx, jobject self, jchar param0);
#define VTABLE_java_io_CharArrayWriter_append_java_lang_CharSequence_int_int_R_java_io_Writer 23
typedef jobject (*func_java_io_CharArrayWriter_append_java_lang_CharSequence_int_int_R_java_io_Writer)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_java_io_CharArrayWriter_expand_int 24
typedef void (*func_java_io_CharArrayWriter_expand_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_io_CharArrayWriter_reset 25
typedef void (*func_java_io_CharArrayWriter_reset)(jcontext ctx, jobject self);
#define VTABLE_java_io_CharArrayWriter_size_R_int 26
typedef jint (*func_java_io_CharArrayWriter_size_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_io_CharArrayWriter_toCharArray_R_Array1_char 27
typedef jobject (*func_java_io_CharArrayWriter_toCharArray_R_Array1_char)(jcontext ctx, jobject self);
#define VTABLE_java_io_CharArrayWriter_writeTo_java_io_Writer 28
typedef void (*func_java_io_CharArrayWriter_writeTo_java_io_Writer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_io_CharArrayWriter_append_char_R_java_io_CharArrayWriter 29
typedef jobject (*func_java_io_CharArrayWriter_append_char_R_java_io_CharArrayWriter)(jcontext ctx, jobject self, jchar param0);
#define VTABLE_java_io_CharArrayWriter_append_java_lang_CharSequence_R_java_io_CharArrayWriter 30
typedef jobject (*func_java_io_CharArrayWriter_append_java_lang_CharSequence_R_java_io_CharArrayWriter)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_io_CharArrayWriter_append_java_lang_CharSequence_int_int_R_java_io_CharArrayWriter 31
typedef jobject (*func_java_io_CharArrayWriter_append_java_lang_CharSequence_int_int_R_java_io_CharArrayWriter)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);

void mark_java_io_CharArrayWriter(jobject object, jint mark, jint depth);
void clinit_java_io_CharArrayWriter(jcontext ctx);
void init_java_io_CharArrayWriter(jcontext ctx, jobject self);
void init_java_io_CharArrayWriter_int(jcontext ctx, jobject self, jint param0);
void M_java_io_CharArrayWriter_close(jcontext ctx, jobject self);
void M_java_io_CharArrayWriter_expand_int(jcontext ctx, jobject self, jint param0);
void M_java_io_CharArrayWriter_flush(jcontext ctx, jobject self);
void M_java_io_CharArrayWriter_reset(jcontext ctx, jobject self);
jint M_java_io_CharArrayWriter_size_R_int(jcontext ctx, jobject self);
jobject M_java_io_CharArrayWriter_toCharArray_R_Array1_char(jcontext ctx, jobject self);
jobject M_java_io_CharArrayWriter_toString_R_java_lang_String(jcontext ctx, jobject self);
void M_java_io_CharArrayWriter_write_Array1_char_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
void M_java_io_CharArrayWriter_write_int(jcontext ctx, jobject self, jint param0);
void M_java_io_CharArrayWriter_write_java_lang_String_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
void M_java_io_CharArrayWriter_writeTo_java_io_Writer(jcontext ctx, jobject self, jobject param0);
jobject M_java_io_CharArrayWriter_append_char_R_java_io_CharArrayWriter(jcontext ctx, jobject self, jchar param0);
jobject M_java_io_CharArrayWriter_append_java_lang_CharSequence_R_java_io_CharArrayWriter(jcontext ctx, jobject self, jobject param0);
jobject M_java_io_CharArrayWriter_append_java_lang_CharSequence_int_int_R_java_io_CharArrayWriter(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
jobject M_java_io_CharArrayWriter_append_java_lang_CharSequence_int_int_R_java_io_Writer(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
jobject M_java_io_CharArrayWriter_append_char_R_java_io_Writer(jcontext ctx, jobject self, jchar param0);
jobject M_java_io_CharArrayWriter_append_java_lang_CharSequence_R_java_io_Writer(jcontext ctx, jobject self, jobject param0);
jobject M_java_io_CharArrayWriter_append_java_lang_CharSequence_int_int_R_java_lang_Appendable(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
jobject M_java_io_CharArrayWriter_append_java_lang_CharSequence_R_java_lang_Appendable(jcontext ctx, jobject self, jobject param0);
jobject M_java_io_CharArrayWriter_append_char_R_java_lang_Appendable(jcontext ctx, jobject self, jchar param0);

#ifdef __cplusplus
}
#endif

#endif
