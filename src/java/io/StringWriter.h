#ifndef HEADER_java_io_StringWriter
#define HEADER_java_io_StringWriter

#include "Clearwing.h"
#include "java/io/Writer.h"
#include "java/lang/Appendable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_io_StringWriter {
	java_io_Writer parent;
	jref F_buf;
} java_io_StringWriter;

extern Class class_java_io_StringWriter;


#define VTABLE_java_io_StringWriter_hashCode_R_int 0
typedef jint (*func_java_io_StringWriter_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_io_StringWriter_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_io_StringWriter_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_io_StringWriter_clone_R_java_lang_Object 2
typedef jobject (*func_java_io_StringWriter_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_io_StringWriter_getClass_R_java_lang_Class 3
typedef jobject (*func_java_io_StringWriter_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_io_StringWriter_toString_R_java_lang_String 4
typedef jobject (*func_java_io_StringWriter_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_io_StringWriter_finalize 5
typedef void (*func_java_io_StringWriter_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_io_StringWriter_notify 6
typedef void (*func_java_io_StringWriter_notify)(jcontext ctx, jobject self);
#define VTABLE_java_io_StringWriter_notifyAll 7
typedef void (*func_java_io_StringWriter_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_io_StringWriter_wait 8
typedef void (*func_java_io_StringWriter_wait)(jcontext ctx, jobject self);
#define VTABLE_java_io_StringWriter_wait_long 9
typedef void (*func_java_io_StringWriter_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_io_StringWriter_wait_long_int 10
typedef void (*func_java_io_StringWriter_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_io_StringWriter_append_char_R_java_lang_Appendable 11
typedef jobject (*func_java_io_StringWriter_append_char_R_java_lang_Appendable)(jcontext ctx, jobject self, jchar param0);
#define VTABLE_java_io_StringWriter_append_java_lang_CharSequence_R_java_lang_Appendable 12
typedef jobject (*func_java_io_StringWriter_append_java_lang_CharSequence_R_java_lang_Appendable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_io_StringWriter_append_java_lang_CharSequence_int_int_R_java_lang_Appendable 13
typedef jobject (*func_java_io_StringWriter_append_java_lang_CharSequence_int_int_R_java_lang_Appendable)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_java_io_StringWriter_close 14
typedef void (*func_java_io_StringWriter_close)(jcontext ctx, jobject self);
#define VTABLE_java_io_StringWriter_flush 15
typedef void (*func_java_io_StringWriter_flush)(jcontext ctx, jobject self);
#define VTABLE_java_io_StringWriter_write_Array1_char 16
typedef void (*func_java_io_StringWriter_write_Array1_char)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_io_StringWriter_write_Array1_char_int_int 17
typedef void (*func_java_io_StringWriter_write_Array1_char_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_java_io_StringWriter_write_int 18
typedef void (*func_java_io_StringWriter_write_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_io_StringWriter_write_java_lang_String 19
typedef void (*func_java_io_StringWriter_write_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_io_StringWriter_write_java_lang_String_int_int 20
typedef void (*func_java_io_StringWriter_write_java_lang_String_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_java_io_StringWriter_append_java_lang_CharSequence_R_java_io_Writer 21
typedef jobject (*func_java_io_StringWriter_append_java_lang_CharSequence_R_java_io_Writer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_io_StringWriter_append_char_R_java_io_Writer 22
typedef jobject (*func_java_io_StringWriter_append_char_R_java_io_Writer)(jcontext ctx, jobject self, jchar param0);
#define VTABLE_java_io_StringWriter_append_java_lang_CharSequence_int_int_R_java_io_Writer 23
typedef jobject (*func_java_io_StringWriter_append_java_lang_CharSequence_int_int_R_java_io_Writer)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_java_io_StringWriter_getBuffer_R_java_lang_StringBuffer 24
typedef jobject (*func_java_io_StringWriter_getBuffer_R_java_lang_StringBuffer)(jcontext ctx, jobject self);
#define VTABLE_java_io_StringWriter_append_char_R_java_io_StringWriter 25
typedef jobject (*func_java_io_StringWriter_append_char_R_java_io_StringWriter)(jcontext ctx, jobject self, jchar param0);
#define VTABLE_java_io_StringWriter_append_java_lang_CharSequence_R_java_io_StringWriter 26
typedef jobject (*func_java_io_StringWriter_append_java_lang_CharSequence_R_java_io_StringWriter)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_io_StringWriter_append_java_lang_CharSequence_int_int_R_java_io_StringWriter 27
typedef jobject (*func_java_io_StringWriter_append_java_lang_CharSequence_int_int_R_java_io_StringWriter)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);

void mark_java_io_StringWriter(jobject object, jint mark, jint depth);
void clinit_java_io_StringWriter(jcontext ctx);
void init_java_io_StringWriter(jcontext ctx, jobject self);
void init_java_io_StringWriter_int(jcontext ctx, jobject self, jint param0);
void M_java_io_StringWriter_close(jcontext ctx, jobject self);
void M_java_io_StringWriter_flush(jcontext ctx, jobject self);
void M_java_io_StringWriter_write_Array1_char_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
void M_java_io_StringWriter_write_java_lang_String_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
void M_java_io_StringWriter_write_int(jcontext ctx, jobject self, jint param0);
void M_java_io_StringWriter_write_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_java_io_StringWriter_write_Array1_char(jcontext ctx, jobject self, jobject param0);
jobject M_java_io_StringWriter_toString_R_java_lang_String(jcontext ctx, jobject self);
jobject M_java_io_StringWriter_getBuffer_R_java_lang_StringBuffer(jcontext ctx, jobject self);
jobject M_java_io_StringWriter_append_char_R_java_io_StringWriter(jcontext ctx, jobject self, jchar param0);
jobject M_java_io_StringWriter_append_java_lang_CharSequence_R_java_io_StringWriter(jcontext ctx, jobject self, jobject param0);
jobject M_java_io_StringWriter_append_java_lang_CharSequence_int_int_R_java_io_StringWriter(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
jobject M_java_io_StringWriter_append_java_lang_CharSequence_int_int_R_java_io_Writer(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
jobject M_java_io_StringWriter_append_char_R_java_io_Writer(jcontext ctx, jobject self, jchar param0);
jobject M_java_io_StringWriter_append_java_lang_CharSequence_R_java_io_Writer(jcontext ctx, jobject self, jobject param0);
jobject M_java_io_StringWriter_append_java_lang_CharSequence_int_int_R_java_lang_Appendable(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
jobject M_java_io_StringWriter_append_java_lang_CharSequence_R_java_lang_Appendable(jcontext ctx, jobject self, jobject param0);
jobject M_java_io_StringWriter_append_char_R_java_lang_Appendable(jcontext ctx, jobject self, jchar param0);

#ifdef __cplusplus
}
#endif

#endif
