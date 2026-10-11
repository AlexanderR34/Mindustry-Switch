#ifndef HEADER_java_io_InputStreamReader
#define HEADER_java_io_InputStreamReader

#include "Clearwing.h"
#include "java/io/Reader.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_io_InputStreamReader {
	java_io_Reader parent;
	jref F_internal;
	jref F_enc;
	jref F_cbuffer;
	jint F_cbufferOff;
	jref F_c;
} java_io_InputStreamReader;

extern Class class_java_io_InputStreamReader;


#define VTABLE_java_io_InputStreamReader_hashCode_R_int 0
typedef jint (*func_java_io_InputStreamReader_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_io_InputStreamReader_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_io_InputStreamReader_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_io_InputStreamReader_clone_R_java_lang_Object 2
typedef jobject (*func_java_io_InputStreamReader_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_io_InputStreamReader_getClass_R_java_lang_Class 3
typedef jobject (*func_java_io_InputStreamReader_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_io_InputStreamReader_toString_R_java_lang_String 4
typedef jobject (*func_java_io_InputStreamReader_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_io_InputStreamReader_finalize 5
typedef void (*func_java_io_InputStreamReader_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_io_InputStreamReader_notify 6
typedef void (*func_java_io_InputStreamReader_notify)(jcontext ctx, jobject self);
#define VTABLE_java_io_InputStreamReader_notifyAll 7
typedef void (*func_java_io_InputStreamReader_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_io_InputStreamReader_wait 8
typedef void (*func_java_io_InputStreamReader_wait)(jcontext ctx, jobject self);
#define VTABLE_java_io_InputStreamReader_wait_long 9
typedef void (*func_java_io_InputStreamReader_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_io_InputStreamReader_wait_long_int 10
typedef void (*func_java_io_InputStreamReader_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_io_InputStreamReader_read_java_nio_CharBuffer_R_int 11
typedef jint (*func_java_io_InputStreamReader_read_java_nio_CharBuffer_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_io_InputStreamReader_close 12
typedef void (*func_java_io_InputStreamReader_close)(jcontext ctx, jobject self);
#define VTABLE_java_io_InputStreamReader_mark_int 13
typedef void (*func_java_io_InputStreamReader_mark_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_io_InputStreamReader_markSupported_R_boolean 14
typedef jbool (*func_java_io_InputStreamReader_markSupported_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_io_InputStreamReader_read_R_int 15
typedef jint (*func_java_io_InputStreamReader_read_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_io_InputStreamReader_read_Array1_char_R_int 16
typedef jint (*func_java_io_InputStreamReader_read_Array1_char_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_io_InputStreamReader_read_Array1_char_int_int_R_int 17
typedef jint (*func_java_io_InputStreamReader_read_Array1_char_int_int_R_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_java_io_InputStreamReader_ready_R_boolean 18
typedef jbool (*func_java_io_InputStreamReader_ready_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_io_InputStreamReader_reset 19
typedef void (*func_java_io_InputStreamReader_reset)(jcontext ctx, jobject self);
#define VTABLE_java_io_InputStreamReader_skip_long_R_long 20
typedef jlong (*func_java_io_InputStreamReader_skip_long_R_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_io_InputStreamReader_complete 21
typedef void (*func_java_io_InputStreamReader_complete)(jcontext ctx, jobject self);

void mark_java_io_InputStreamReader(jobject object, jint mark, jint depth);
void clinit_java_io_InputStreamReader(jcontext ctx);
void init_java_io_InputStreamReader_java_io_InputStream(jcontext ctx, jobject self, jobject param0);
void init_java_io_InputStreamReader_java_io_InputStream_java_nio_charset_Charset(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_java_io_InputStreamReader_complete(jcontext ctx, jobject self);
jobject SM_java_io_InputStreamReader_readInputStream_java_io_InputStream_R_Array1_byte(jcontext ctx, jobject param0);
void SM_java_io_InputStreamReader_copy_java_io_InputStream_java_io_OutputStream_int(jcontext ctx, jobject param0, jobject param1, jint param2);
void init_java_io_InputStreamReader_java_io_InputStream_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_java_io_InputStreamReader_close(jcontext ctx, jobject self);
void M_java_io_InputStreamReader_mark_int(jcontext ctx, jobject self, jint param0);
jbool M_java_io_InputStreamReader_markSupported_R_boolean(jcontext ctx, jobject self);
jint M_java_io_InputStreamReader_read_R_int(jcontext ctx, jobject self);
jint M_java_io_InputStreamReader_read_Array1_char_int_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
jbool M_java_io_InputStreamReader_ready_R_boolean(jcontext ctx, jobject self);
void M_java_io_InputStreamReader_reset(jcontext ctx, jobject self);
jlong M_java_io_InputStreamReader_skip_long_R_long(jcontext ctx, jobject self, jlong param0);

#ifdef __cplusplus
}
#endif

#endif
