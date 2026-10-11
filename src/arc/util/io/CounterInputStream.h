#ifndef HEADER_arc_util_io_CounterInputStream
#define HEADER_arc_util_io_CounterInputStream

#include "Clearwing.h"
#include "java/io/FilterInputStream.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_util_io_CounterInputStream {
	java_io_FilterInputStream parent;
	jint F_count;
} arc_util_io_CounterInputStream;

extern Class class_arc_util_io_CounterInputStream;


#define VTABLE_arc_util_io_CounterInputStream_hashCode_R_int 0
typedef jint (*func_arc_util_io_CounterInputStream_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_util_io_CounterInputStream_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_util_io_CounterInputStream_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_io_CounterInputStream_clone_R_java_lang_Object 2
typedef jobject (*func_arc_util_io_CounterInputStream_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_util_io_CounterInputStream_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_util_io_CounterInputStream_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_util_io_CounterInputStream_toString_R_java_lang_String 4
typedef jobject (*func_arc_util_io_CounterInputStream_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_util_io_CounterInputStream_finalize 5
typedef void (*func_arc_util_io_CounterInputStream_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_util_io_CounterInputStream_notify 6
typedef void (*func_arc_util_io_CounterInputStream_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_util_io_CounterInputStream_notifyAll 7
typedef void (*func_arc_util_io_CounterInputStream_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_util_io_CounterInputStream_wait 8
typedef void (*func_arc_util_io_CounterInputStream_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_util_io_CounterInputStream_wait_long 9
typedef void (*func_arc_util_io_CounterInputStream_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_util_io_CounterInputStream_wait_long_int 10
typedef void (*func_arc_util_io_CounterInputStream_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_util_io_CounterInputStream_close 11
typedef void (*func_arc_util_io_CounterInputStream_close)(jcontext ctx, jobject self);
#define VTABLE_arc_util_io_CounterInputStream_available_R_int 12
typedef jint (*func_arc_util_io_CounterInputStream_available_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_util_io_CounterInputStream_mark_int 13
typedef void (*func_arc_util_io_CounterInputStream_mark_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_util_io_CounterInputStream_markSupported_R_boolean 14
typedef jbool (*func_arc_util_io_CounterInputStream_markSupported_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_util_io_CounterInputStream_read_R_int 15
typedef jint (*func_arc_util_io_CounterInputStream_read_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_util_io_CounterInputStream_read_Array1_byte_R_int 16
typedef jint (*func_arc_util_io_CounterInputStream_read_Array1_byte_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_io_CounterInputStream_read_Array1_byte_int_int_R_int 17
typedef jint (*func_arc_util_io_CounterInputStream_read_Array1_byte_int_int_R_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_arc_util_io_CounterInputStream_reset 18
typedef void (*func_arc_util_io_CounterInputStream_reset)(jcontext ctx, jobject self);
#define VTABLE_arc_util_io_CounterInputStream_skip_long_R_long 19
typedef jlong (*func_arc_util_io_CounterInputStream_skip_long_R_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_util_io_CounterInputStream_resetCount 20
typedef void (*func_arc_util_io_CounterInputStream_resetCount)(jcontext ctx, jobject self);

void mark_arc_util_io_CounterInputStream(jobject object, jint mark, jint depth);
void clinit_arc_util_io_CounterInputStream(jcontext ctx);
void init_arc_util_io_CounterInputStream_java_io_InputStream(jcontext ctx, jobject self, jobject param0);
void M_arc_util_io_CounterInputStream_resetCount(jcontext ctx, jobject self);
jlong M_arc_util_io_CounterInputStream_skip_long_R_long(jcontext ctx, jobject self, jlong param0);
jint M_arc_util_io_CounterInputStream_read_R_int(jcontext ctx, jobject self);
jint M_arc_util_io_CounterInputStream_read_Array1_byte_int_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);

#ifdef __cplusplus
}
#endif

#endif
