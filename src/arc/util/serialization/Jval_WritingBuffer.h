#ifndef HEADER_arc_util_serialization_Jval$WritingBuffer
#define HEADER_arc_util_serialization_Jval$WritingBuffer

#include "Clearwing.h"
#include "java/io/Writer.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_util_serialization_Jval$WritingBuffer {
	java_io_Writer parent;
	jref F_writer;
	jref F_buffer;
	jint F_fill;
} arc_util_serialization_Jval$WritingBuffer;

extern Class class_arc_util_serialization_Jval$WritingBuffer;


#define VTABLE_arc_util_serialization_Jval$WritingBuffer_hashCode_R_int 0
typedef jint (*func_arc_util_serialization_Jval$WritingBuffer_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_Jval$WritingBuffer_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_util_serialization_Jval$WritingBuffer_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_serialization_Jval$WritingBuffer_clone_R_java_lang_Object 2
typedef jobject (*func_arc_util_serialization_Jval$WritingBuffer_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_Jval$WritingBuffer_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_util_serialization_Jval$WritingBuffer_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_Jval$WritingBuffer_toString_R_java_lang_String 4
typedef jobject (*func_arc_util_serialization_Jval$WritingBuffer_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_Jval$WritingBuffer_finalize 5
typedef void (*func_arc_util_serialization_Jval$WritingBuffer_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_Jval$WritingBuffer_notify 6
typedef void (*func_arc_util_serialization_Jval$WritingBuffer_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_Jval$WritingBuffer_notifyAll 7
typedef void (*func_arc_util_serialization_Jval$WritingBuffer_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_Jval$WritingBuffer_wait 8
typedef void (*func_arc_util_serialization_Jval$WritingBuffer_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_Jval$WritingBuffer_wait_long 9
typedef void (*func_arc_util_serialization_Jval$WritingBuffer_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_util_serialization_Jval$WritingBuffer_wait_long_int 10
typedef void (*func_arc_util_serialization_Jval$WritingBuffer_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_util_serialization_Jval$WritingBuffer_append_char_R_java_lang_Appendable 11
typedef jobject (*func_arc_util_serialization_Jval$WritingBuffer_append_char_R_java_lang_Appendable)(jcontext ctx, jobject self, jchar param0);
#define VTABLE_arc_util_serialization_Jval$WritingBuffer_append_java_lang_CharSequence_R_java_lang_Appendable 12
typedef jobject (*func_arc_util_serialization_Jval$WritingBuffer_append_java_lang_CharSequence_R_java_lang_Appendable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_serialization_Jval$WritingBuffer_append_java_lang_CharSequence_int_int_R_java_lang_Appendable 13
typedef jobject (*func_arc_util_serialization_Jval$WritingBuffer_append_java_lang_CharSequence_int_int_R_java_lang_Appendable)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_arc_util_serialization_Jval$WritingBuffer_close 14
typedef void (*func_arc_util_serialization_Jval$WritingBuffer_close)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_Jval$WritingBuffer_flush 15
typedef void (*func_arc_util_serialization_Jval$WritingBuffer_flush)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_Jval$WritingBuffer_write_Array1_char 16
typedef void (*func_arc_util_serialization_Jval$WritingBuffer_write_Array1_char)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_serialization_Jval$WritingBuffer_write_Array1_char_int_int 17
typedef void (*func_arc_util_serialization_Jval$WritingBuffer_write_Array1_char_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_arc_util_serialization_Jval$WritingBuffer_write_int 18
typedef void (*func_arc_util_serialization_Jval$WritingBuffer_write_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_util_serialization_Jval$WritingBuffer_write_java_lang_String 19
typedef void (*func_arc_util_serialization_Jval$WritingBuffer_write_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_serialization_Jval$WritingBuffer_write_java_lang_String_int_int 20
typedef void (*func_arc_util_serialization_Jval$WritingBuffer_write_java_lang_String_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_arc_util_serialization_Jval$WritingBuffer_append_java_lang_CharSequence_R_java_io_Writer 21
typedef jobject (*func_arc_util_serialization_Jval$WritingBuffer_append_java_lang_CharSequence_R_java_io_Writer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_serialization_Jval$WritingBuffer_append_char_R_java_io_Writer 22
typedef jobject (*func_arc_util_serialization_Jval$WritingBuffer_append_char_R_java_io_Writer)(jcontext ctx, jobject self, jchar param0);
#define VTABLE_arc_util_serialization_Jval$WritingBuffer_append_java_lang_CharSequence_int_int_R_java_io_Writer 23
typedef jobject (*func_arc_util_serialization_Jval$WritingBuffer_append_java_lang_CharSequence_int_int_R_java_io_Writer)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);

void mark_arc_util_serialization_Jval$WritingBuffer(jobject object, jint mark, jint depth);
void clinit_arc_util_serialization_Jval$WritingBuffer(jcontext ctx);
void init_arc_util_serialization_Jval$WritingBuffer_java_io_Writer_int(jcontext ctx, jobject self, jobject param0, jint param1);
void M_arc_util_serialization_Jval$WritingBuffer_write_int(jcontext ctx, jobject self, jint param0);
void M_arc_util_serialization_Jval$WritingBuffer_write_Array1_char_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
void M_arc_util_serialization_Jval$WritingBuffer_write_java_lang_String_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
void M_arc_util_serialization_Jval$WritingBuffer_flush(jcontext ctx, jobject self);
void M_arc_util_serialization_Jval$WritingBuffer_close(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
