#ifndef HEADER_java_io_StringReader
#define HEADER_java_io_StringReader

#include "Clearwing.h"
#include "java/io/Reader.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_io_StringReader {
	java_io_Reader parent;
	jref F_str;
	jint F_markpos;
	jint F_pos;
	jint F_count;
} java_io_StringReader;

extern Class class_java_io_StringReader;


#define VTABLE_java_io_StringReader_hashCode_R_int 0
typedef jint (*func_java_io_StringReader_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_io_StringReader_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_io_StringReader_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_io_StringReader_clone_R_java_lang_Object 2
typedef jobject (*func_java_io_StringReader_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_io_StringReader_getClass_R_java_lang_Class 3
typedef jobject (*func_java_io_StringReader_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_io_StringReader_toString_R_java_lang_String 4
typedef jobject (*func_java_io_StringReader_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_io_StringReader_finalize 5
typedef void (*func_java_io_StringReader_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_io_StringReader_notify 6
typedef void (*func_java_io_StringReader_notify)(jcontext ctx, jobject self);
#define VTABLE_java_io_StringReader_notifyAll 7
typedef void (*func_java_io_StringReader_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_io_StringReader_wait 8
typedef void (*func_java_io_StringReader_wait)(jcontext ctx, jobject self);
#define VTABLE_java_io_StringReader_wait_long 9
typedef void (*func_java_io_StringReader_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_io_StringReader_wait_long_int 10
typedef void (*func_java_io_StringReader_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_io_StringReader_read_java_nio_CharBuffer_R_int 11
typedef jint (*func_java_io_StringReader_read_java_nio_CharBuffer_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_io_StringReader_close 12
typedef void (*func_java_io_StringReader_close)(jcontext ctx, jobject self);
#define VTABLE_java_io_StringReader_mark_int 13
typedef void (*func_java_io_StringReader_mark_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_io_StringReader_markSupported_R_boolean 14
typedef jbool (*func_java_io_StringReader_markSupported_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_io_StringReader_read_R_int 15
typedef jint (*func_java_io_StringReader_read_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_io_StringReader_read_Array1_char_R_int 16
typedef jint (*func_java_io_StringReader_read_Array1_char_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_io_StringReader_read_Array1_char_int_int_R_int 17
typedef jint (*func_java_io_StringReader_read_Array1_char_int_int_R_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_java_io_StringReader_ready_R_boolean 18
typedef jbool (*func_java_io_StringReader_ready_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_io_StringReader_reset 19
typedef void (*func_java_io_StringReader_reset)(jcontext ctx, jobject self);
#define VTABLE_java_io_StringReader_skip_long_R_long 20
typedef jlong (*func_java_io_StringReader_skip_long_R_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_io_StringReader_isClosed_R_boolean 21
typedef jbool (*func_java_io_StringReader_isClosed_R_boolean)(jcontext ctx, jobject self);

void mark_java_io_StringReader(jobject object, jint mark, jint depth);
void clinit_java_io_StringReader(jcontext ctx);
void init_java_io_StringReader_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_java_io_StringReader_close(jcontext ctx, jobject self);
jbool M_java_io_StringReader_isClosed_R_boolean(jcontext ctx, jobject self);
void M_java_io_StringReader_mark_int(jcontext ctx, jobject self, jint param0);
jbool M_java_io_StringReader_markSupported_R_boolean(jcontext ctx, jobject self);
jint M_java_io_StringReader_read_R_int(jcontext ctx, jobject self);
jint M_java_io_StringReader_read_Array1_char_int_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
jbool M_java_io_StringReader_ready_R_boolean(jcontext ctx, jobject self);
void M_java_io_StringReader_reset(jcontext ctx, jobject self);
jlong M_java_io_StringReader_skip_long_R_long(jcontext ctx, jobject self, jlong param0);

#ifdef __cplusplus
}
#endif

#endif
