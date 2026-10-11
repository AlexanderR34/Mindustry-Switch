#ifndef HEADER_mindustry_gen_BufferItemLegacy
#define HEADER_mindustry_gen_BufferItemLegacy

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_gen_BufferItemLegacy {
	java_lang_Object parent;
} mindustry_gen_BufferItemLegacy;

extern Class class_mindustry_gen_BufferItemLegacy;

extern jlong SF_mindustry_gen_BufferItemLegacy_bitMaskItem;
extern jlong SF_mindustry_gen_BufferItemLegacy_bitMaskTime;

#define VTABLE_mindustry_gen_BufferItemLegacy_hashCode_R_int 0
typedef jint (*func_mindustry_gen_BufferItemLegacy_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_BufferItemLegacy_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_gen_BufferItemLegacy_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_BufferItemLegacy_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_gen_BufferItemLegacy_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_BufferItemLegacy_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_gen_BufferItemLegacy_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_BufferItemLegacy_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_gen_BufferItemLegacy_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_BufferItemLegacy_finalize 5
typedef void (*func_mindustry_gen_BufferItemLegacy_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_BufferItemLegacy_notify 6
typedef void (*func_mindustry_gen_BufferItemLegacy_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_BufferItemLegacy_notifyAll 7
typedef void (*func_mindustry_gen_BufferItemLegacy_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_BufferItemLegacy_wait 8
typedef void (*func_mindustry_gen_BufferItemLegacy_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_BufferItemLegacy_wait_long 9
typedef void (*func_mindustry_gen_BufferItemLegacy_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_gen_BufferItemLegacy_wait_long_int 10
typedef void (*func_mindustry_gen_BufferItemLegacy_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_mindustry_gen_BufferItemLegacy(jobject object, jint mark, jint depth);
void clinit_mindustry_gen_BufferItemLegacy(jcontext ctx);
void init_mindustry_gen_BufferItemLegacy(jcontext ctx, jobject self);
jbyte SM_mindustry_gen_BufferItemLegacy_item_long_R_byte(jcontext ctx, jlong param0);
jlong SM_mindustry_gen_BufferItemLegacy_item_long_byte_R_long(jcontext ctx, jlong param0, jbyte param1);
jfloat SM_mindustry_gen_BufferItemLegacy_time_long_R_float(jcontext ctx, jlong param0);
jlong SM_mindustry_gen_BufferItemLegacy_time_long_float_R_long(jcontext ctx, jlong param0, jfloat param1);
jlong SM_mindustry_gen_BufferItemLegacy_get_byte_float_R_long(jcontext ctx, jbyte param0, jfloat param1);

#ifdef __cplusplus
}
#endif

#endif
