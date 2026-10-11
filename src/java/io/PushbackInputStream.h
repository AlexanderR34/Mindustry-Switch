#ifndef HEADER_java_io_PushbackInputStream
#define HEADER_java_io_PushbackInputStream

#include "Clearwing.h"
#include "java/io/FilterInputStream.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_io_PushbackInputStream {
	java_io_FilterInputStream parent;
	jref F_buf;
	jint F_pos;
} java_io_PushbackInputStream;

extern Class class_java_io_PushbackInputStream;


#define VTABLE_java_io_PushbackInputStream_hashCode_R_int 0
typedef jint (*func_java_io_PushbackInputStream_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_io_PushbackInputStream_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_io_PushbackInputStream_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_io_PushbackInputStream_clone_R_java_lang_Object 2
typedef jobject (*func_java_io_PushbackInputStream_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_io_PushbackInputStream_getClass_R_java_lang_Class 3
typedef jobject (*func_java_io_PushbackInputStream_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_io_PushbackInputStream_toString_R_java_lang_String 4
typedef jobject (*func_java_io_PushbackInputStream_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_io_PushbackInputStream_finalize 5
typedef void (*func_java_io_PushbackInputStream_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_io_PushbackInputStream_notify 6
typedef void (*func_java_io_PushbackInputStream_notify)(jcontext ctx, jobject self);
#define VTABLE_java_io_PushbackInputStream_notifyAll 7
typedef void (*func_java_io_PushbackInputStream_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_io_PushbackInputStream_wait 8
typedef void (*func_java_io_PushbackInputStream_wait)(jcontext ctx, jobject self);
#define VTABLE_java_io_PushbackInputStream_wait_long 9
typedef void (*func_java_io_PushbackInputStream_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_io_PushbackInputStream_wait_long_int 10
typedef void (*func_java_io_PushbackInputStream_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_io_PushbackInputStream_close 11
typedef void (*func_java_io_PushbackInputStream_close)(jcontext ctx, jobject self);
#define VTABLE_java_io_PushbackInputStream_available_R_int 12
typedef jint (*func_java_io_PushbackInputStream_available_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_io_PushbackInputStream_mark_int 13
typedef void (*func_java_io_PushbackInputStream_mark_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_io_PushbackInputStream_markSupported_R_boolean 14
typedef jbool (*func_java_io_PushbackInputStream_markSupported_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_io_PushbackInputStream_read_R_int 15
typedef jint (*func_java_io_PushbackInputStream_read_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_io_PushbackInputStream_read_Array1_byte_R_int 16
typedef jint (*func_java_io_PushbackInputStream_read_Array1_byte_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_io_PushbackInputStream_read_Array1_byte_int_int_R_int 17
typedef jint (*func_java_io_PushbackInputStream_read_Array1_byte_int_int_R_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_java_io_PushbackInputStream_reset 18
typedef void (*func_java_io_PushbackInputStream_reset)(jcontext ctx, jobject self);
#define VTABLE_java_io_PushbackInputStream_skip_long_R_long 19
typedef jlong (*func_java_io_PushbackInputStream_skip_long_R_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_io_PushbackInputStream_streamClosed_R_java_io_IOException 20
typedef jobject (*func_java_io_PushbackInputStream_streamClosed_R_java_io_IOException)(jcontext ctx, jobject self);
#define VTABLE_java_io_PushbackInputStream_unread_Array1_byte 21
typedef void (*func_java_io_PushbackInputStream_unread_Array1_byte)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_io_PushbackInputStream_unread_Array1_byte_int_int 22
typedef void (*func_java_io_PushbackInputStream_unread_Array1_byte_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_java_io_PushbackInputStream_unread_int 23
typedef void (*func_java_io_PushbackInputStream_unread_int)(jcontext ctx, jobject self, jint param0);

void mark_java_io_PushbackInputStream(jobject object, jint mark, jint depth);
void clinit_java_io_PushbackInputStream(jcontext ctx);
void init_java_io_PushbackInputStream_java_io_InputStream(jcontext ctx, jobject self, jobject param0);
void init_java_io_PushbackInputStream_java_io_InputStream_int(jcontext ctx, jobject self, jobject param0, jint param1);
jint M_java_io_PushbackInputStream_available_R_int(jcontext ctx, jobject self);
void M_java_io_PushbackInputStream_close(jcontext ctx, jobject self);
jbool M_java_io_PushbackInputStream_markSupported_R_boolean(jcontext ctx, jobject self);
jint M_java_io_PushbackInputStream_read_R_int(jcontext ctx, jobject self);
jint M_java_io_PushbackInputStream_read_Array1_byte_int_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
jobject M_java_io_PushbackInputStream_streamClosed_R_java_io_IOException(jcontext ctx, jobject self);
jlong M_java_io_PushbackInputStream_skip_long_R_long(jcontext ctx, jobject self, jlong param0);
void M_java_io_PushbackInputStream_unread_Array1_byte(jcontext ctx, jobject self, jobject param0);
void M_java_io_PushbackInputStream_unread_Array1_byte_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
void M_java_io_PushbackInputStream_unread_int(jcontext ctx, jobject self, jint param0);
void M_java_io_PushbackInputStream_mark_int(jcontext ctx, jobject self, jint param0);
void M_java_io_PushbackInputStream_reset(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
