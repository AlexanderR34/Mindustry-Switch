#ifndef HEADER_java_io_ByteArrayInputStream
#define HEADER_java_io_ByteArrayInputStream

#include "Clearwing.h"
#include "java/io/InputStream.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_io_ByteArrayInputStream {
	java_io_InputStream parent;
	jref F_buf;
	jint F_pos;
	jint F_mark;
	jint F_count;
} java_io_ByteArrayInputStream;

extern Class class_java_io_ByteArrayInputStream;


#define VTABLE_java_io_ByteArrayInputStream_hashCode_R_int 0
typedef jint (*func_java_io_ByteArrayInputStream_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_io_ByteArrayInputStream_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_io_ByteArrayInputStream_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_io_ByteArrayInputStream_clone_R_java_lang_Object 2
typedef jobject (*func_java_io_ByteArrayInputStream_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_io_ByteArrayInputStream_getClass_R_java_lang_Class 3
typedef jobject (*func_java_io_ByteArrayInputStream_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_io_ByteArrayInputStream_toString_R_java_lang_String 4
typedef jobject (*func_java_io_ByteArrayInputStream_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_io_ByteArrayInputStream_finalize 5
typedef void (*func_java_io_ByteArrayInputStream_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_io_ByteArrayInputStream_notify 6
typedef void (*func_java_io_ByteArrayInputStream_notify)(jcontext ctx, jobject self);
#define VTABLE_java_io_ByteArrayInputStream_notifyAll 7
typedef void (*func_java_io_ByteArrayInputStream_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_io_ByteArrayInputStream_wait 8
typedef void (*func_java_io_ByteArrayInputStream_wait)(jcontext ctx, jobject self);
#define VTABLE_java_io_ByteArrayInputStream_wait_long 9
typedef void (*func_java_io_ByteArrayInputStream_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_io_ByteArrayInputStream_wait_long_int 10
typedef void (*func_java_io_ByteArrayInputStream_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_io_ByteArrayInputStream_close 11
typedef void (*func_java_io_ByteArrayInputStream_close)(jcontext ctx, jobject self);
#define VTABLE_java_io_ByteArrayInputStream_available_R_int 12
typedef jint (*func_java_io_ByteArrayInputStream_available_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_io_ByteArrayInputStream_mark_int 13
typedef void (*func_java_io_ByteArrayInputStream_mark_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_io_ByteArrayInputStream_markSupported_R_boolean 14
typedef jbool (*func_java_io_ByteArrayInputStream_markSupported_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_io_ByteArrayInputStream_read_R_int 15
typedef jint (*func_java_io_ByteArrayInputStream_read_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_io_ByteArrayInputStream_read_Array1_byte_R_int 16
typedef jint (*func_java_io_ByteArrayInputStream_read_Array1_byte_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_io_ByteArrayInputStream_read_Array1_byte_int_int_R_int 17
typedef jint (*func_java_io_ByteArrayInputStream_read_Array1_byte_int_int_R_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_java_io_ByteArrayInputStream_reset 18
typedef void (*func_java_io_ByteArrayInputStream_reset)(jcontext ctx, jobject self);
#define VTABLE_java_io_ByteArrayInputStream_skip_long_R_long 19
typedef jlong (*func_java_io_ByteArrayInputStream_skip_long_R_long)(jcontext ctx, jobject self, jlong param0);

void mark_java_io_ByteArrayInputStream(jobject object, jint mark, jint depth);
void clinit_java_io_ByteArrayInputStream(jcontext ctx);
void init_java_io_ByteArrayInputStream_Array1_byte(jcontext ctx, jobject self, jobject param0);
void init_java_io_ByteArrayInputStream_Array1_byte_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
jint M_java_io_ByteArrayInputStream_available_R_int(jcontext ctx, jobject self);
void M_java_io_ByteArrayInputStream_close(jcontext ctx, jobject self);
void M_java_io_ByteArrayInputStream_mark_int(jcontext ctx, jobject self, jint param0);
jbool M_java_io_ByteArrayInputStream_markSupported_R_boolean(jcontext ctx, jobject self);
jint M_java_io_ByteArrayInputStream_read_R_int(jcontext ctx, jobject self);
jint M_java_io_ByteArrayInputStream_read_Array1_byte_int_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
void M_java_io_ByteArrayInputStream_reset(jcontext ctx, jobject self);
jlong M_java_io_ByteArrayInputStream_skip_long_R_long(jcontext ctx, jobject self, jlong param0);

#ifdef __cplusplus
}
#endif

#endif
