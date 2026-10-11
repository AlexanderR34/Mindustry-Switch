#ifndef HEADER_java_util_zip_InflaterInputStream
#define HEADER_java_util_zip_InflaterInputStream

#include "Clearwing.h"
#include "java/io/FilterInputStream.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_zip_InflaterInputStream {
	java_io_FilterInputStream parent;
	jref F_inf;
	jref F_buf;
	jint F_len;
	jbool F_closed;
	jbool F_reachEOF;
	jbool F_usesDefaultInflater;
	jref F_singleByteBuf;
	jref F_b;
} java_util_zip_InflaterInputStream;

extern Class class_java_util_zip_InflaterInputStream;


#define VTABLE_java_util_zip_InflaterInputStream_hashCode_R_int 0
typedef jint (*func_java_util_zip_InflaterInputStream_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_InflaterInputStream_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_zip_InflaterInputStream_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_zip_InflaterInputStream_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_zip_InflaterInputStream_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_InflaterInputStream_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_zip_InflaterInputStream_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_InflaterInputStream_toString_R_java_lang_String 4
typedef jobject (*func_java_util_zip_InflaterInputStream_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_InflaterInputStream_finalize 5
typedef void (*func_java_util_zip_InflaterInputStream_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_InflaterInputStream_notify 6
typedef void (*func_java_util_zip_InflaterInputStream_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_InflaterInputStream_notifyAll 7
typedef void (*func_java_util_zip_InflaterInputStream_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_InflaterInputStream_wait 8
typedef void (*func_java_util_zip_InflaterInputStream_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_InflaterInputStream_wait_long 9
typedef void (*func_java_util_zip_InflaterInputStream_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_zip_InflaterInputStream_wait_long_int 10
typedef void (*func_java_util_zip_InflaterInputStream_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_util_zip_InflaterInputStream_close 11
typedef void (*func_java_util_zip_InflaterInputStream_close)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_InflaterInputStream_available_R_int 12
typedef jint (*func_java_util_zip_InflaterInputStream_available_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_InflaterInputStream_mark_int 13
typedef void (*func_java_util_zip_InflaterInputStream_mark_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_util_zip_InflaterInputStream_markSupported_R_boolean 14
typedef jbool (*func_java_util_zip_InflaterInputStream_markSupported_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_InflaterInputStream_read_R_int 15
typedef jint (*func_java_util_zip_InflaterInputStream_read_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_InflaterInputStream_read_Array1_byte_R_int 16
typedef jint (*func_java_util_zip_InflaterInputStream_read_Array1_byte_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_zip_InflaterInputStream_read_Array1_byte_int_int_R_int 17
typedef jint (*func_java_util_zip_InflaterInputStream_read_Array1_byte_int_int_R_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_java_util_zip_InflaterInputStream_reset 18
typedef void (*func_java_util_zip_InflaterInputStream_reset)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_InflaterInputStream_skip_long_R_long 19
typedef jlong (*func_java_util_zip_InflaterInputStream_skip_long_R_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_zip_InflaterInputStream_ensureOpen 20
typedef void (*func_java_util_zip_InflaterInputStream_ensureOpen)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_InflaterInputStream_fill 21
typedef void (*func_java_util_zip_InflaterInputStream_fill)(jcontext ctx, jobject self);

void mark_java_util_zip_InflaterInputStream(jobject object, jint mark, jint depth);
void clinit_java_util_zip_InflaterInputStream(jcontext ctx);
void M_java_util_zip_InflaterInputStream_ensureOpen(jcontext ctx, jobject self);
void init_java_util_zip_InflaterInputStream_java_io_InputStream_java_util_zip_Inflater_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2);
void init_java_util_zip_InflaterInputStream_java_io_InputStream_java_util_zip_Inflater(jcontext ctx, jobject self, jobject param0, jobject param1);
void init_java_util_zip_InflaterInputStream_java_io_InputStream(jcontext ctx, jobject self, jobject param0);
jint M_java_util_zip_InflaterInputStream_read_R_int(jcontext ctx, jobject self);
jint M_java_util_zip_InflaterInputStream_read_Array1_byte_int_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
jint M_java_util_zip_InflaterInputStream_available_R_int(jcontext ctx, jobject self);
jlong M_java_util_zip_InflaterInputStream_skip_long_R_long(jcontext ctx, jobject self, jlong param0);
void M_java_util_zip_InflaterInputStream_close(jcontext ctx, jobject self);
void M_java_util_zip_InflaterInputStream_fill(jcontext ctx, jobject self);
jbool M_java_util_zip_InflaterInputStream_markSupported_R_boolean(jcontext ctx, jobject self);
void M_java_util_zip_InflaterInputStream_mark_int(jcontext ctx, jobject self, jint param0);
void M_java_util_zip_InflaterInputStream_reset(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
