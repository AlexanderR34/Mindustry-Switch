#ifndef HEADER_java_io_Reader
#define HEADER_java_io_Reader

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/lang/Readable.h"
#include "java/io/Closeable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_io_Reader {
	java_lang_Object parent;
	jref F_lock;
} java_io_Reader;

extern Class class_java_io_Reader;


#define VTABLE_java_io_Reader_hashCode_R_int 0
typedef jint (*func_java_io_Reader_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_io_Reader_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_io_Reader_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_io_Reader_clone_R_java_lang_Object 2
typedef jobject (*func_java_io_Reader_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_io_Reader_getClass_R_java_lang_Class 3
typedef jobject (*func_java_io_Reader_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_io_Reader_toString_R_java_lang_String 4
typedef jobject (*func_java_io_Reader_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_io_Reader_finalize 5
typedef void (*func_java_io_Reader_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_io_Reader_notify 6
typedef void (*func_java_io_Reader_notify)(jcontext ctx, jobject self);
#define VTABLE_java_io_Reader_notifyAll 7
typedef void (*func_java_io_Reader_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_io_Reader_wait 8
typedef void (*func_java_io_Reader_wait)(jcontext ctx, jobject self);
#define VTABLE_java_io_Reader_wait_long 9
typedef void (*func_java_io_Reader_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_io_Reader_wait_long_int 10
typedef void (*func_java_io_Reader_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_io_Reader_read_java_nio_CharBuffer_R_int 11
typedef jint (*func_java_io_Reader_read_java_nio_CharBuffer_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_io_Reader_close 12
typedef void (*func_java_io_Reader_close)(jcontext ctx, jobject self);
#define VTABLE_java_io_Reader_mark_int 13
typedef void (*func_java_io_Reader_mark_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_io_Reader_markSupported_R_boolean 14
typedef jbool (*func_java_io_Reader_markSupported_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_io_Reader_read_R_int 15
typedef jint (*func_java_io_Reader_read_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_io_Reader_read_Array1_char_R_int 16
typedef jint (*func_java_io_Reader_read_Array1_char_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_io_Reader_read_Array1_char_int_int_R_int 17
typedef jint (*func_java_io_Reader_read_Array1_char_int_int_R_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_java_io_Reader_ready_R_boolean 18
typedef jbool (*func_java_io_Reader_ready_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_io_Reader_reset 19
typedef void (*func_java_io_Reader_reset)(jcontext ctx, jobject self);
#define VTABLE_java_io_Reader_skip_long_R_long 20
typedef jlong (*func_java_io_Reader_skip_long_R_long)(jcontext ctx, jobject self, jlong param0);

void mark_java_io_Reader(jobject object, jint mark, jint depth);
void clinit_java_io_Reader(jcontext ctx);
void init_java_io_Reader(jcontext ctx, jobject self);
void init_java_io_Reader_java_lang_Object(jcontext ctx, jobject self, jobject param0);
void M_java_io_Reader_mark_int(jcontext ctx, jobject self, jint param0);
jbool M_java_io_Reader_markSupported_R_boolean(jcontext ctx, jobject self);
jint M_java_io_Reader_read_R_int(jcontext ctx, jobject self);
jint M_java_io_Reader_read_Array1_char_R_int(jcontext ctx, jobject self, jobject param0);
jint M_java_io_Reader_read_java_nio_CharBuffer_R_int(jcontext ctx, jobject self, jobject param0);
jbool M_java_io_Reader_ready_R_boolean(jcontext ctx, jobject self);
void M_java_io_Reader_reset(jcontext ctx, jobject self);
jlong M_java_io_Reader_skip_long_R_long(jcontext ctx, jobject self, jlong param0);

#ifdef __cplusplus
}
#endif

#endif
