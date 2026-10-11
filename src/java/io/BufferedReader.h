#ifndef HEADER_java_io_BufferedReader
#define HEADER_java_io_BufferedReader

#include "Clearwing.h"
#include "java/io/Reader.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_io_BufferedReader {
	java_io_Reader parent;
	jref F_in;
	jref F_cb;
	jint F_nChars;
	jint F_nextChar;
	jint F_markedChar;
	jint F_readAheadLimit;
	jbool F_skipLF;
	jbool F_markedSkipLF;
} java_io_BufferedReader;

extern Class class_java_io_BufferedReader;

extern jint SF_java_io_BufferedReader_INVALIDATED;
extern jint SF_java_io_BufferedReader_UNMARKED;
extern jint SF_java_io_BufferedReader_defaultCharBufferSize;
extern jint SF_java_io_BufferedReader_defaultExpectedLineLength;

#define VTABLE_java_io_BufferedReader_hashCode_R_int 0
typedef jint (*func_java_io_BufferedReader_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_io_BufferedReader_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_io_BufferedReader_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_io_BufferedReader_clone_R_java_lang_Object 2
typedef jobject (*func_java_io_BufferedReader_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_io_BufferedReader_getClass_R_java_lang_Class 3
typedef jobject (*func_java_io_BufferedReader_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_io_BufferedReader_toString_R_java_lang_String 4
typedef jobject (*func_java_io_BufferedReader_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_io_BufferedReader_finalize 5
typedef void (*func_java_io_BufferedReader_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_io_BufferedReader_notify 6
typedef void (*func_java_io_BufferedReader_notify)(jcontext ctx, jobject self);
#define VTABLE_java_io_BufferedReader_notifyAll 7
typedef void (*func_java_io_BufferedReader_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_io_BufferedReader_wait 8
typedef void (*func_java_io_BufferedReader_wait)(jcontext ctx, jobject self);
#define VTABLE_java_io_BufferedReader_wait_long 9
typedef void (*func_java_io_BufferedReader_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_io_BufferedReader_wait_long_int 10
typedef void (*func_java_io_BufferedReader_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_io_BufferedReader_read_java_nio_CharBuffer_R_int 11
typedef jint (*func_java_io_BufferedReader_read_java_nio_CharBuffer_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_io_BufferedReader_close 12
typedef void (*func_java_io_BufferedReader_close)(jcontext ctx, jobject self);
#define VTABLE_java_io_BufferedReader_mark_int 13
typedef void (*func_java_io_BufferedReader_mark_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_io_BufferedReader_markSupported_R_boolean 14
typedef jbool (*func_java_io_BufferedReader_markSupported_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_io_BufferedReader_read_R_int 15
typedef jint (*func_java_io_BufferedReader_read_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_io_BufferedReader_read_Array1_char_R_int 16
typedef jint (*func_java_io_BufferedReader_read_Array1_char_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_io_BufferedReader_read_Array1_char_int_int_R_int 17
typedef jint (*func_java_io_BufferedReader_read_Array1_char_int_int_R_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_java_io_BufferedReader_ready_R_boolean 18
typedef jbool (*func_java_io_BufferedReader_ready_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_io_BufferedReader_reset 19
typedef void (*func_java_io_BufferedReader_reset)(jcontext ctx, jobject self);
#define VTABLE_java_io_BufferedReader_skip_long_R_long 20
typedef jlong (*func_java_io_BufferedReader_skip_long_R_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_io_BufferedReader_ensureOpen 21
typedef void (*func_java_io_BufferedReader_ensureOpen)(jcontext ctx, jobject self);
#define VTABLE_java_io_BufferedReader_fill 22
typedef void (*func_java_io_BufferedReader_fill)(jcontext ctx, jobject self);
#define VTABLE_java_io_BufferedReader_read1_Array1_char_int_int_R_int 23
typedef jint (*func_java_io_BufferedReader_read1_Array1_char_int_int_R_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_java_io_BufferedReader_readLine_boolean_R_java_lang_String 24
typedef jobject (*func_java_io_BufferedReader_readLine_boolean_R_java_lang_String)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_java_io_BufferedReader_readLine_R_java_lang_String 25
typedef jobject (*func_java_io_BufferedReader_readLine_R_java_lang_String)(jcontext ctx, jobject self);

void mark_java_io_BufferedReader(jobject object, jint mark, jint depth);
void clinit_java_io_BufferedReader(jcontext ctx);
void init_java_io_BufferedReader_java_io_Reader_int(jcontext ctx, jobject self, jobject param0, jint param1);
void init_java_io_BufferedReader_java_io_Reader(jcontext ctx, jobject self, jobject param0);
void M_java_io_BufferedReader_ensureOpen(jcontext ctx, jobject self);
void M_java_io_BufferedReader_fill(jcontext ctx, jobject self);
jint M_java_io_BufferedReader_read_R_int(jcontext ctx, jobject self);
jint M_java_io_BufferedReader_read1_Array1_char_int_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
jint M_java_io_BufferedReader_read_Array1_char_int_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
jobject M_java_io_BufferedReader_readLine_boolean_R_java_lang_String(jcontext ctx, jobject self, jbool param0);
jobject M_java_io_BufferedReader_readLine_R_java_lang_String(jcontext ctx, jobject self);
jlong M_java_io_BufferedReader_skip_long_R_long(jcontext ctx, jobject self, jlong param0);
jbool M_java_io_BufferedReader_ready_R_boolean(jcontext ctx, jobject self);
jbool M_java_io_BufferedReader_markSupported_R_boolean(jcontext ctx, jobject self);
void M_java_io_BufferedReader_mark_int(jcontext ctx, jobject self, jint param0);
void M_java_io_BufferedReader_reset(jcontext ctx, jobject self);
void M_java_io_BufferedReader_close(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
