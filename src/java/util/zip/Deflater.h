#ifndef HEADER_java_util_zip_Deflater
#define HEADER_java_util_zip_Deflater

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_zip_Deflater {
	java_lang_Object parent;
	jlong F_address;
	jref F_buf;
	jint F_off;
	jint F_len;
	jint F_level;
	jint F_strategy;
	jbool F_setParams;
	jbool F_finish;
	jbool F_finished;
	jlong F_bytesRead;
	jlong F_bytesWritten;
} java_util_zip_Deflater;

extern Class class_java_util_zip_Deflater;

extern jint SF_java_util_zip_Deflater_DEFLATED;
extern jint SF_java_util_zip_Deflater_NO_COMPRESSION;
extern jint SF_java_util_zip_Deflater_BEST_SPEED;
extern jint SF_java_util_zip_Deflater_BEST_COMPRESSION;
extern jint SF_java_util_zip_Deflater_DEFAULT_COMPRESSION;
extern jint SF_java_util_zip_Deflater_FILTERED;
extern jint SF_java_util_zip_Deflater_HUFFMAN_ONLY;
extern jint SF_java_util_zip_Deflater_DEFAULT_STRATEGY;
extern jint SF_java_util_zip_Deflater_NO_FLUSH;
extern jint SF_java_util_zip_Deflater_SYNC_FLUSH;
extern jint SF_java_util_zip_Deflater_FULL_FLUSH;

#define VTABLE_java_util_zip_Deflater_hashCode_R_int 0
typedef jint (*func_java_util_zip_Deflater_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_Deflater_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_zip_Deflater_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_zip_Deflater_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_zip_Deflater_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_Deflater_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_zip_Deflater_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_Deflater_toString_R_java_lang_String 4
typedef jobject (*func_java_util_zip_Deflater_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_Deflater_finalize 5
typedef void (*func_java_util_zip_Deflater_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_Deflater_notify 6
typedef void (*func_java_util_zip_Deflater_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_Deflater_notifyAll 7
typedef void (*func_java_util_zip_Deflater_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_Deflater_wait 8
typedef void (*func_java_util_zip_Deflater_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_Deflater_wait_long 9
typedef void (*func_java_util_zip_Deflater_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_zip_Deflater_wait_long_int 10
typedef void (*func_java_util_zip_Deflater_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_util_zip_Deflater_setInput_Array1_byte_int_int 11
typedef void (*func_java_util_zip_Deflater_setInput_Array1_byte_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_java_util_zip_Deflater_setInput_Array1_byte 12
typedef void (*func_java_util_zip_Deflater_setInput_Array1_byte)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_zip_Deflater_setDictionary_Array1_byte_int_int 13
typedef void (*func_java_util_zip_Deflater_setDictionary_Array1_byte_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_java_util_zip_Deflater_setDictionary_Array1_byte 14
typedef void (*func_java_util_zip_Deflater_setDictionary_Array1_byte)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_zip_Deflater_setStrategy_int 15
typedef void (*func_java_util_zip_Deflater_setStrategy_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_util_zip_Deflater_setLevel_int 16
typedef void (*func_java_util_zip_Deflater_setLevel_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_util_zip_Deflater_needsInput_R_boolean 17
typedef jbool (*func_java_util_zip_Deflater_needsInput_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_Deflater_finish 18
typedef void (*func_java_util_zip_Deflater_finish)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_Deflater_finished_R_boolean 19
typedef jbool (*func_java_util_zip_Deflater_finished_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_Deflater_deflate_Array1_byte_int_int_R_int 20
typedef jint (*func_java_util_zip_Deflater_deflate_Array1_byte_int_int_R_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_java_util_zip_Deflater_deflate_Array1_byte_R_int 21
typedef jint (*func_java_util_zip_Deflater_deflate_Array1_byte_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_zip_Deflater_deflate_Array1_byte_int_int_int_R_int 22
typedef jint (*func_java_util_zip_Deflater_deflate_Array1_byte_int_int_int_R_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3);
#define VTABLE_java_util_zip_Deflater_getAdler_R_int 23
typedef jint (*func_java_util_zip_Deflater_getAdler_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_Deflater_getTotalIn_R_int 24
typedef jint (*func_java_util_zip_Deflater_getTotalIn_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_Deflater_getBytesRead_R_long 25
typedef jlong (*func_java_util_zip_Deflater_getBytesRead_R_long)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_Deflater_getTotalOut_R_int 26
typedef jint (*func_java_util_zip_Deflater_getTotalOut_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_Deflater_getBytesWritten_R_long 27
typedef jlong (*func_java_util_zip_Deflater_getBytesWritten_R_long)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_Deflater_reset 28
typedef void (*func_java_util_zip_Deflater_reset)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_Deflater_end 29
typedef void (*func_java_util_zip_Deflater_end)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_Deflater_ensureOpen 30
typedef void (*func_java_util_zip_Deflater_ensureOpen)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_Deflater_deflateBytes_long_Array1_byte_int_int_int_R_int 31
typedef jint (*func_java_util_zip_Deflater_deflateBytes_long_Array1_byte_int_int_int_R_int)(jcontext ctx, jobject self, jlong param0, jobject param1, jint param2, jint param3, jint param4);

void mark_java_util_zip_Deflater(jobject object, jint mark, jint depth);
void clinit_java_util_zip_Deflater(jcontext ctx);
void init_java_util_zip_Deflater_int_boolean(jcontext ctx, jobject self, jint param0, jbool param1);
void init_java_util_zip_Deflater_int(jcontext ctx, jobject self, jint param0);
void init_java_util_zip_Deflater(jcontext ctx, jobject self);
void M_java_util_zip_Deflater_setInput_Array1_byte_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
void M_java_util_zip_Deflater_setInput_Array1_byte(jcontext ctx, jobject self, jobject param0);
void M_java_util_zip_Deflater_setDictionary_Array1_byte_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
void M_java_util_zip_Deflater_setDictionary_Array1_byte(jcontext ctx, jobject self, jobject param0);
void M_java_util_zip_Deflater_setStrategy_int(jcontext ctx, jobject self, jint param0);
void M_java_util_zip_Deflater_setLevel_int(jcontext ctx, jobject self, jint param0);
jbool M_java_util_zip_Deflater_needsInput_R_boolean(jcontext ctx, jobject self);
void M_java_util_zip_Deflater_finish(jcontext ctx, jobject self);
jbool M_java_util_zip_Deflater_finished_R_boolean(jcontext ctx, jobject self);
jint M_java_util_zip_Deflater_deflate_Array1_byte_int_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
jint M_java_util_zip_Deflater_deflate_Array1_byte_R_int(jcontext ctx, jobject self, jobject param0);
jint M_java_util_zip_Deflater_deflate_Array1_byte_int_int_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3);
jint M_java_util_zip_Deflater_getAdler_R_int(jcontext ctx, jobject self);
jint M_java_util_zip_Deflater_getTotalIn_R_int(jcontext ctx, jobject self);
jlong M_java_util_zip_Deflater_getBytesRead_R_long(jcontext ctx, jobject self);
jint M_java_util_zip_Deflater_getTotalOut_R_int(jcontext ctx, jobject self);
jlong M_java_util_zip_Deflater_getBytesWritten_R_long(jcontext ctx, jobject self);
void M_java_util_zip_Deflater_reset(jcontext ctx, jobject self);
void M_java_util_zip_Deflater_end(jcontext ctx, jobject self);
void M_java_util_zip_Deflater_finalize(jcontext ctx, jobject self);
void M_java_util_zip_Deflater_ensureOpen(jcontext ctx, jobject self);
jlong SM_java_util_zip_Deflater_init_int_int_boolean_R_long(jcontext ctx, jint param0, jint param1, jbool param2);
jint M_java_util_zip_Deflater_deflateBytes_long_Array1_byte_int_int_int_R_int(jcontext ctx, jobject self, jlong param0, jobject param1, jint param2, jint param3, jint param4);
jint SM_java_util_zip_Deflater_getAdler_long_R_int(jcontext ctx, jlong param0);
void SM_java_util_zip_Deflater_reset_long(jcontext ctx, jlong param0);
void SM_java_util_zip_Deflater_end_long(jcontext ctx, jlong param0);

#ifdef __cplusplus
}
#endif

#endif
