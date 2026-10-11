#ifndef HEADER_java_io_BufferedInputStream
#define HEADER_java_io_BufferedInputStream

#include "Clearwing.h"
#include "java/io/FilterInputStream.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_io_BufferedInputStream {
	java_io_FilterInputStream parent;
	volatile jref F_buf;
	jint F_count;
	jint F_pos;
	jint F_markpos;
	jint F_marklimit;
} java_io_BufferedInputStream;

extern Class class_java_io_BufferedInputStream;

extern jint SF_java_io_BufferedInputStream_DEFAULT_BUFFER_SIZE;
extern jint SF_java_io_BufferedInputStream_MAX_BUFFER_SIZE;

#define VTABLE_java_io_BufferedInputStream_hashCode_R_int 0
typedef jint (*func_java_io_BufferedInputStream_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_io_BufferedInputStream_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_io_BufferedInputStream_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_io_BufferedInputStream_clone_R_java_lang_Object 2
typedef jobject (*func_java_io_BufferedInputStream_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_io_BufferedInputStream_getClass_R_java_lang_Class 3
typedef jobject (*func_java_io_BufferedInputStream_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_io_BufferedInputStream_toString_R_java_lang_String 4
typedef jobject (*func_java_io_BufferedInputStream_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_io_BufferedInputStream_finalize 5
typedef void (*func_java_io_BufferedInputStream_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_io_BufferedInputStream_notify 6
typedef void (*func_java_io_BufferedInputStream_notify)(jcontext ctx, jobject self);
#define VTABLE_java_io_BufferedInputStream_notifyAll 7
typedef void (*func_java_io_BufferedInputStream_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_io_BufferedInputStream_wait 8
typedef void (*func_java_io_BufferedInputStream_wait)(jcontext ctx, jobject self);
#define VTABLE_java_io_BufferedInputStream_wait_long 9
typedef void (*func_java_io_BufferedInputStream_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_io_BufferedInputStream_wait_long_int 10
typedef void (*func_java_io_BufferedInputStream_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_io_BufferedInputStream_close 11
typedef void (*func_java_io_BufferedInputStream_close)(jcontext ctx, jobject self);
#define VTABLE_java_io_BufferedInputStream_available_R_int 12
typedef jint (*func_java_io_BufferedInputStream_available_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_io_BufferedInputStream_mark_int 13
typedef void (*func_java_io_BufferedInputStream_mark_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_io_BufferedInputStream_markSupported_R_boolean 14
typedef jbool (*func_java_io_BufferedInputStream_markSupported_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_io_BufferedInputStream_read_R_int 15
typedef jint (*func_java_io_BufferedInputStream_read_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_io_BufferedInputStream_read_Array1_byte_R_int 16
typedef jint (*func_java_io_BufferedInputStream_read_Array1_byte_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_io_BufferedInputStream_read_Array1_byte_int_int_R_int 17
typedef jint (*func_java_io_BufferedInputStream_read_Array1_byte_int_int_R_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_java_io_BufferedInputStream_reset 18
typedef void (*func_java_io_BufferedInputStream_reset)(jcontext ctx, jobject self);
#define VTABLE_java_io_BufferedInputStream_skip_long_R_long 19
typedef jlong (*func_java_io_BufferedInputStream_skip_long_R_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_io_BufferedInputStream_getInIfOpen_R_java_io_InputStream 20
typedef jobject (*func_java_io_BufferedInputStream_getInIfOpen_R_java_io_InputStream)(jcontext ctx, jobject self);
#define VTABLE_java_io_BufferedInputStream_getBufIfOpen_R_Array1_byte 21
typedef jobject (*func_java_io_BufferedInputStream_getBufIfOpen_R_Array1_byte)(jcontext ctx, jobject self);
#define VTABLE_java_io_BufferedInputStream_fill 22
typedef void (*func_java_io_BufferedInputStream_fill)(jcontext ctx, jobject self);
#define VTABLE_java_io_BufferedInputStream_read1_Array1_byte_int_int_R_int 23
typedef jint (*func_java_io_BufferedInputStream_read1_Array1_byte_int_int_R_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);

void mark_java_io_BufferedInputStream(jobject object, jint mark, jint depth);
void clinit_java_io_BufferedInputStream(jcontext ctx);
jobject M_java_io_BufferedInputStream_getInIfOpen_R_java_io_InputStream(jcontext ctx, jobject self);
jobject M_java_io_BufferedInputStream_getBufIfOpen_R_Array1_byte(jcontext ctx, jobject self);
void init_java_io_BufferedInputStream_java_io_InputStream(jcontext ctx, jobject self, jobject param0);
void init_java_io_BufferedInputStream_java_io_InputStream_int(jcontext ctx, jobject self, jobject param0, jint param1);
void M_java_io_BufferedInputStream_fill(jcontext ctx, jobject self);
jint M_java_io_BufferedInputStream_read_R_int(jcontext ctx, jobject self);
jint M_java_io_BufferedInputStream_read1_Array1_byte_int_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
jint M_java_io_BufferedInputStream_read_Array1_byte_int_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
jlong M_java_io_BufferedInputStream_skip_long_R_long(jcontext ctx, jobject self, jlong param0);
jint M_java_io_BufferedInputStream_available_R_int(jcontext ctx, jobject self);
void M_java_io_BufferedInputStream_mark_int(jcontext ctx, jobject self, jint param0);
void M_java_io_BufferedInputStream_reset(jcontext ctx, jobject self);
jbool M_java_io_BufferedInputStream_markSupported_R_boolean(jcontext ctx, jobject self);
void M_java_io_BufferedInputStream_close(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
