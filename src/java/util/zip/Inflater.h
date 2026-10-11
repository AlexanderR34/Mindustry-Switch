#ifndef HEADER_java_util_zip_Inflater
#define HEADER_java_util_zip_Inflater

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_zip_Inflater {
	java_lang_Object parent;
	jlong F_address;
	jref F_buf;
	jint F_off;
	jint F_len;
	jbool F_finished;
	jlong F_bytesRead;
	jlong F_bytesWritten;
} java_util_zip_Inflater;

extern Class class_java_util_zip_Inflater;

extern jobject SF_java_util_zip_Inflater_defaultBuf;

#define VTABLE_java_util_zip_Inflater_hashCode_R_int 0
typedef jint (*func_java_util_zip_Inflater_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_Inflater_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_zip_Inflater_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_zip_Inflater_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_zip_Inflater_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_Inflater_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_zip_Inflater_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_Inflater_toString_R_java_lang_String 4
typedef jobject (*func_java_util_zip_Inflater_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_Inflater_finalize 5
typedef void (*func_java_util_zip_Inflater_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_Inflater_notify 6
typedef void (*func_java_util_zip_Inflater_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_Inflater_notifyAll 7
typedef void (*func_java_util_zip_Inflater_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_Inflater_wait 8
typedef void (*func_java_util_zip_Inflater_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_Inflater_wait_long 9
typedef void (*func_java_util_zip_Inflater_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_zip_Inflater_wait_long_int 10
typedef void (*func_java_util_zip_Inflater_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_util_zip_Inflater_setInput_Array1_byte_int_int 11
typedef void (*func_java_util_zip_Inflater_setInput_Array1_byte_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_java_util_zip_Inflater_setInput_Array1_byte 12
typedef void (*func_java_util_zip_Inflater_setInput_Array1_byte)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_zip_Inflater_setDictionary_Array1_byte_int_int 13
typedef void (*func_java_util_zip_Inflater_setDictionary_Array1_byte_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_java_util_zip_Inflater_setDictionary_Array1_byte 14
typedef void (*func_java_util_zip_Inflater_setDictionary_Array1_byte)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_zip_Inflater_getRemaining_R_int 15
typedef jint (*func_java_util_zip_Inflater_getRemaining_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_Inflater_needsInput_R_boolean 16
typedef jbool (*func_java_util_zip_Inflater_needsInput_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_Inflater_needsDictionary_R_boolean 17
typedef jbool (*func_java_util_zip_Inflater_needsDictionary_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_Inflater_finished_R_boolean 18
typedef jbool (*func_java_util_zip_Inflater_finished_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_Inflater_inflate_Array1_byte_int_int_R_int 19
typedef jint (*func_java_util_zip_Inflater_inflate_Array1_byte_int_int_R_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_java_util_zip_Inflater_inflate_Array1_byte_R_int 20
typedef jint (*func_java_util_zip_Inflater_inflate_Array1_byte_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_zip_Inflater_getAdler_R_int 21
typedef jint (*func_java_util_zip_Inflater_getAdler_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_Inflater_getTotalIn_R_int 22
typedef jint (*func_java_util_zip_Inflater_getTotalIn_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_Inflater_getBytesRead_R_long 23
typedef jlong (*func_java_util_zip_Inflater_getBytesRead_R_long)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_Inflater_getTotalOut_R_int 24
typedef jint (*func_java_util_zip_Inflater_getTotalOut_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_Inflater_getBytesWritten_R_long 25
typedef jlong (*func_java_util_zip_Inflater_getBytesWritten_R_long)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_Inflater_reset 26
typedef void (*func_java_util_zip_Inflater_reset)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_Inflater_end 27
typedef void (*func_java_util_zip_Inflater_end)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_Inflater_ensureOpen 28
typedef void (*func_java_util_zip_Inflater_ensureOpen)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_Inflater_ended_R_boolean 29
typedef jbool (*func_java_util_zip_Inflater_ended_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_Inflater_inflateBytes_long_Array1_byte_int_int_R_int 30
typedef jint (*func_java_util_zip_Inflater_inflateBytes_long_Array1_byte_int_int_R_int)(jcontext ctx, jobject self, jlong param0, jobject param1, jint param2, jint param3);

void mark_java_util_zip_Inflater(jobject object, jint mark, jint depth);
void clinit_java_util_zip_Inflater(jcontext ctx);
void init_java_util_zip_Inflater_boolean(jcontext ctx, jobject self, jbool param0);
void init_java_util_zip_Inflater(jcontext ctx, jobject self);
void M_java_util_zip_Inflater_setInput_Array1_byte_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
void M_java_util_zip_Inflater_setInput_Array1_byte(jcontext ctx, jobject self, jobject param0);
void M_java_util_zip_Inflater_setDictionary_Array1_byte_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
void M_java_util_zip_Inflater_setDictionary_Array1_byte(jcontext ctx, jobject self, jobject param0);
jint M_java_util_zip_Inflater_getRemaining_R_int(jcontext ctx, jobject self);
jbool M_java_util_zip_Inflater_needsInput_R_boolean(jcontext ctx, jobject self);
jbool M_java_util_zip_Inflater_needsDictionary_R_boolean(jcontext ctx, jobject self);
jbool M_java_util_zip_Inflater_finished_R_boolean(jcontext ctx, jobject self);
jint M_java_util_zip_Inflater_inflate_Array1_byte_int_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
jint M_java_util_zip_Inflater_inflate_Array1_byte_R_int(jcontext ctx, jobject self, jobject param0);
jint M_java_util_zip_Inflater_getAdler_R_int(jcontext ctx, jobject self);
jint M_java_util_zip_Inflater_getTotalIn_R_int(jcontext ctx, jobject self);
jlong M_java_util_zip_Inflater_getBytesRead_R_long(jcontext ctx, jobject self);
jint M_java_util_zip_Inflater_getTotalOut_R_int(jcontext ctx, jobject self);
jlong M_java_util_zip_Inflater_getBytesWritten_R_long(jcontext ctx, jobject self);
void M_java_util_zip_Inflater_reset(jcontext ctx, jobject self);
void M_java_util_zip_Inflater_end(jcontext ctx, jobject self);
void M_java_util_zip_Inflater_finalize(jcontext ctx, jobject self);
void M_java_util_zip_Inflater_ensureOpen(jcontext ctx, jobject self);
jbool M_java_util_zip_Inflater_ended_R_boolean(jcontext ctx, jobject self);
jlong SM_java_util_zip_Inflater_init_boolean_R_long(jcontext ctx, jbool param0);
jint M_java_util_zip_Inflater_inflateBytes_long_Array1_byte_int_int_R_int(jcontext ctx, jobject self, jlong param0, jobject param1, jint param2, jint param3);
jint SM_java_util_zip_Inflater_getAdler_long_R_int(jcontext ctx, jlong param0);
void SM_java_util_zip_Inflater_reset_long(jcontext ctx, jlong param0);
void SM_java_util_zip_Inflater_end_long(jcontext ctx, jlong param0);

#ifdef __cplusplus
}
#endif

#endif
