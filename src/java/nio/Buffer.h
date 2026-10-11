#ifndef HEADER_java_nio_Buffer
#define HEADER_java_nio_Buffer

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_nio_Buffer {
	java_lang_Object parent;
	jint F_mark;
	jint F_position;
	jint F_limit;
	jint F_capacity;
	jlong F_address;
} java_nio_Buffer;

extern Class class_java_nio_Buffer;

extern jint SF_java_nio_Buffer_SPLITERATOR_CHARACTERISTICS;

#define VTABLE_java_nio_Buffer_hashCode_R_int 0
typedef jint (*func_java_nio_Buffer_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_Buffer_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_nio_Buffer_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_nio_Buffer_clone_R_java_lang_Object 2
typedef jobject (*func_java_nio_Buffer_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_nio_Buffer_getClass_R_java_lang_Class 3
typedef jobject (*func_java_nio_Buffer_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_nio_Buffer_toString_R_java_lang_String 4
typedef jobject (*func_java_nio_Buffer_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_nio_Buffer_finalize 5
typedef void (*func_java_nio_Buffer_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_nio_Buffer_notify 6
typedef void (*func_java_nio_Buffer_notify)(jcontext ctx, jobject self);
#define VTABLE_java_nio_Buffer_notifyAll 7
typedef void (*func_java_nio_Buffer_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_nio_Buffer_wait 8
typedef void (*func_java_nio_Buffer_wait)(jcontext ctx, jobject self);
#define VTABLE_java_nio_Buffer_wait_long 9
typedef void (*func_java_nio_Buffer_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_nio_Buffer_wait_long_int 10
typedef void (*func_java_nio_Buffer_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_nio_Buffer_capacity_R_int 11
typedef jint (*func_java_nio_Buffer_capacity_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_Buffer_position_R_int 12
typedef jint (*func_java_nio_Buffer_position_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_Buffer_position_int_R_java_nio_Buffer 13
typedef jobject (*func_java_nio_Buffer_position_int_R_java_nio_Buffer)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_nio_Buffer_limit_R_int 14
typedef jint (*func_java_nio_Buffer_limit_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_Buffer_limit_int_R_java_nio_Buffer 15
typedef jobject (*func_java_nio_Buffer_limit_int_R_java_nio_Buffer)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_nio_Buffer_mark_R_java_nio_Buffer 16
typedef jobject (*func_java_nio_Buffer_mark_R_java_nio_Buffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_Buffer_reset_R_java_nio_Buffer 17
typedef jobject (*func_java_nio_Buffer_reset_R_java_nio_Buffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_Buffer_clear_R_java_nio_Buffer 18
typedef jobject (*func_java_nio_Buffer_clear_R_java_nio_Buffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_Buffer_flip_R_java_nio_Buffer 19
typedef jobject (*func_java_nio_Buffer_flip_R_java_nio_Buffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_Buffer_rewind_R_java_nio_Buffer 20
typedef jobject (*func_java_nio_Buffer_rewind_R_java_nio_Buffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_Buffer_remaining_R_int 21
typedef jint (*func_java_nio_Buffer_remaining_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_Buffer_hasRemaining_R_boolean 22
typedef jbool (*func_java_nio_Buffer_hasRemaining_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_nio_Buffer_isReadOnly_R_boolean 23
typedef jbool (*func_java_nio_Buffer_isReadOnly_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_nio_Buffer_hasArray_R_boolean 24
typedef jbool (*func_java_nio_Buffer_hasArray_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_nio_Buffer_array_R_java_lang_Object 25
typedef jobject (*func_java_nio_Buffer_array_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_nio_Buffer_arrayOffset_R_int 26
typedef jint (*func_java_nio_Buffer_arrayOffset_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_Buffer_isDirect_R_boolean 27
typedef jbool (*func_java_nio_Buffer_isDirect_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_nio_Buffer_nextGetIndex_R_int 28
typedef jint (*func_java_nio_Buffer_nextGetIndex_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_Buffer_nextGetIndex_int_R_int 29
typedef jint (*func_java_nio_Buffer_nextGetIndex_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_nio_Buffer_nextPutIndex_R_int 30
typedef jint (*func_java_nio_Buffer_nextPutIndex_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_Buffer_nextPutIndex_int_R_int 31
typedef jint (*func_java_nio_Buffer_nextPutIndex_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_nio_Buffer_checkIndex_int_R_int 32
typedef jint (*func_java_nio_Buffer_checkIndex_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_nio_Buffer_checkIndex_int_int_R_int 33
typedef jint (*func_java_nio_Buffer_checkIndex_int_int_R_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_java_nio_Buffer_markValue_R_int 34
typedef jint (*func_java_nio_Buffer_markValue_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_Buffer_truncate 35
typedef void (*func_java_nio_Buffer_truncate)(jcontext ctx, jobject self);
#define VTABLE_java_nio_Buffer_discardMark 36
typedef void (*func_java_nio_Buffer_discardMark)(jcontext ctx, jobject self);

void mark_java_nio_Buffer(jobject object, jint mark, jint depth);
void clinit_java_nio_Buffer(jcontext ctx);
void init_java_nio_Buffer_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
jint M_java_nio_Buffer_capacity_R_int(jcontext ctx, jobject self);
jint M_java_nio_Buffer_position_R_int(jcontext ctx, jobject self);
jobject M_java_nio_Buffer_position_int_R_java_nio_Buffer(jcontext ctx, jobject self, jint param0);
jint M_java_nio_Buffer_limit_R_int(jcontext ctx, jobject self);
jobject M_java_nio_Buffer_limit_int_R_java_nio_Buffer(jcontext ctx, jobject self, jint param0);
jobject M_java_nio_Buffer_mark_R_java_nio_Buffer(jcontext ctx, jobject self);
jobject M_java_nio_Buffer_reset_R_java_nio_Buffer(jcontext ctx, jobject self);
jobject M_java_nio_Buffer_clear_R_java_nio_Buffer(jcontext ctx, jobject self);
jobject M_java_nio_Buffer_flip_R_java_nio_Buffer(jcontext ctx, jobject self);
jobject M_java_nio_Buffer_rewind_R_java_nio_Buffer(jcontext ctx, jobject self);
jint M_java_nio_Buffer_remaining_R_int(jcontext ctx, jobject self);
jbool M_java_nio_Buffer_hasRemaining_R_boolean(jcontext ctx, jobject self);
jint M_java_nio_Buffer_nextGetIndex_R_int(jcontext ctx, jobject self);
jint M_java_nio_Buffer_nextGetIndex_int_R_int(jcontext ctx, jobject self, jint param0);
jint M_java_nio_Buffer_nextPutIndex_R_int(jcontext ctx, jobject self);
jint M_java_nio_Buffer_nextPutIndex_int_R_int(jcontext ctx, jobject self, jint param0);
jint M_java_nio_Buffer_checkIndex_int_R_int(jcontext ctx, jobject self, jint param0);
jint M_java_nio_Buffer_checkIndex_int_int_R_int(jcontext ctx, jobject self, jint param0, jint param1);
jint M_java_nio_Buffer_markValue_R_int(jcontext ctx, jobject self);
void M_java_nio_Buffer_truncate(jcontext ctx, jobject self);
void M_java_nio_Buffer_discardMark(jcontext ctx, jobject self);
void SM_java_nio_Buffer_checkBounds_int_int_int(jcontext ctx, jint param0, jint param1, jint param2);

#ifdef __cplusplus
}
#endif

#endif
