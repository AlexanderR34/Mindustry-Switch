#ifndef HEADER_java_io_Writer
#define HEADER_java_io_Writer

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/lang/Appendable.h"
#include "java/io/Closeable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_io_Writer {
	java_lang_Object parent;
	jref F_lock;
} java_io_Writer;

extern Class class_java_io_Writer;


#define VTABLE_java_io_Writer_hashCode_R_int 0
typedef jint (*func_java_io_Writer_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_io_Writer_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_io_Writer_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_io_Writer_clone_R_java_lang_Object 2
typedef jobject (*func_java_io_Writer_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_io_Writer_getClass_R_java_lang_Class 3
typedef jobject (*func_java_io_Writer_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_io_Writer_toString_R_java_lang_String 4
typedef jobject (*func_java_io_Writer_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_io_Writer_finalize 5
typedef void (*func_java_io_Writer_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_io_Writer_notify 6
typedef void (*func_java_io_Writer_notify)(jcontext ctx, jobject self);
#define VTABLE_java_io_Writer_notifyAll 7
typedef void (*func_java_io_Writer_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_io_Writer_wait 8
typedef void (*func_java_io_Writer_wait)(jcontext ctx, jobject self);
#define VTABLE_java_io_Writer_wait_long 9
typedef void (*func_java_io_Writer_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_io_Writer_wait_long_int 10
typedef void (*func_java_io_Writer_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_io_Writer_append_char_R_java_lang_Appendable 11
typedef jobject (*func_java_io_Writer_append_char_R_java_lang_Appendable)(jcontext ctx, jobject self, jchar param0);
#define VTABLE_java_io_Writer_append_java_lang_CharSequence_R_java_lang_Appendable 12
typedef jobject (*func_java_io_Writer_append_java_lang_CharSequence_R_java_lang_Appendable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_io_Writer_append_java_lang_CharSequence_int_int_R_java_lang_Appendable 13
typedef jobject (*func_java_io_Writer_append_java_lang_CharSequence_int_int_R_java_lang_Appendable)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_java_io_Writer_close 14
typedef void (*func_java_io_Writer_close)(jcontext ctx, jobject self);
#define VTABLE_java_io_Writer_flush 15
typedef void (*func_java_io_Writer_flush)(jcontext ctx, jobject self);
#define VTABLE_java_io_Writer_write_Array1_char 16
typedef void (*func_java_io_Writer_write_Array1_char)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_io_Writer_write_Array1_char_int_int 17
typedef void (*func_java_io_Writer_write_Array1_char_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_java_io_Writer_write_int 18
typedef void (*func_java_io_Writer_write_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_io_Writer_write_java_lang_String 19
typedef void (*func_java_io_Writer_write_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_io_Writer_write_java_lang_String_int_int 20
typedef void (*func_java_io_Writer_write_java_lang_String_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_java_io_Writer_append_java_lang_CharSequence_R_java_io_Writer 21
typedef jobject (*func_java_io_Writer_append_java_lang_CharSequence_R_java_io_Writer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_io_Writer_append_char_R_java_io_Writer 22
typedef jobject (*func_java_io_Writer_append_char_R_java_io_Writer)(jcontext ctx, jobject self, jchar param0);
#define VTABLE_java_io_Writer_append_java_lang_CharSequence_int_int_R_java_io_Writer 23
typedef jobject (*func_java_io_Writer_append_java_lang_CharSequence_int_int_R_java_io_Writer)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);

void mark_java_io_Writer(jobject object, jint mark, jint depth);
void clinit_java_io_Writer(jcontext ctx);
void init_java_io_Writer(jcontext ctx, jobject self);
void init_java_io_Writer_java_lang_Object(jcontext ctx, jobject self, jobject param0);
void M_java_io_Writer_write_Array1_char(jcontext ctx, jobject self, jobject param0);
void M_java_io_Writer_write_int(jcontext ctx, jobject self, jint param0);
void M_java_io_Writer_write_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_java_io_Writer_write_java_lang_String_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
jobject M_java_io_Writer_append_java_lang_CharSequence_R_java_io_Writer(jcontext ctx, jobject self, jobject param0);
jobject M_java_io_Writer_append_char_R_java_io_Writer(jcontext ctx, jobject self, jchar param0);
jobject M_java_io_Writer_append_java_lang_CharSequence_int_int_R_java_io_Writer(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
jobject M_java_io_Writer_append_java_lang_CharSequence_int_int_R_java_lang_Appendable(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
jobject M_java_io_Writer_append_java_lang_CharSequence_R_java_lang_Appendable(jcontext ctx, jobject self, jobject param0);
jobject M_java_io_Writer_append_char_R_java_lang_Appendable(jcontext ctx, jobject self, jchar param0);

#ifdef __cplusplus
}
#endif

#endif
