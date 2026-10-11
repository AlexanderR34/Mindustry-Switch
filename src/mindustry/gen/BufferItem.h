#ifndef HEADER_mindustry_gen_BufferItem
#define HEADER_mindustry_gen_BufferItem

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_gen_BufferItem {
	java_lang_Object parent;
} mindustry_gen_BufferItem;

extern Class class_mindustry_gen_BufferItem;

extern jlong SF_mindustry_gen_BufferItem_bitMaskItem;
extern jlong SF_mindustry_gen_BufferItem_bitMaskTime;

#define VTABLE_mindustry_gen_BufferItem_hashCode_R_int 0
typedef jint (*func_mindustry_gen_BufferItem_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_BufferItem_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_gen_BufferItem_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_BufferItem_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_gen_BufferItem_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_BufferItem_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_gen_BufferItem_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_BufferItem_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_gen_BufferItem_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_BufferItem_finalize 5
typedef void (*func_mindustry_gen_BufferItem_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_BufferItem_notify 6
typedef void (*func_mindustry_gen_BufferItem_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_BufferItem_notifyAll 7
typedef void (*func_mindustry_gen_BufferItem_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_BufferItem_wait 8
typedef void (*func_mindustry_gen_BufferItem_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_BufferItem_wait_long 9
typedef void (*func_mindustry_gen_BufferItem_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_gen_BufferItem_wait_long_int 10
typedef void (*func_mindustry_gen_BufferItem_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_mindustry_gen_BufferItem(jobject object, jint mark, jint depth);
void clinit_mindustry_gen_BufferItem(jcontext ctx);
void init_mindustry_gen_BufferItem(jcontext ctx, jobject self);
jshort SM_mindustry_gen_BufferItem_item_long_R_short(jcontext ctx, jlong param0);
jlong SM_mindustry_gen_BufferItem_item_long_short_R_long(jcontext ctx, jlong param0, jshort param1);
jfloat SM_mindustry_gen_BufferItem_time_long_R_float(jcontext ctx, jlong param0);
jlong SM_mindustry_gen_BufferItem_time_long_float_R_long(jcontext ctx, jlong param0, jfloat param1);
jlong SM_mindustry_gen_BufferItem_get_short_float_R_long(jcontext ctx, jshort param0, jfloat param1);

#ifdef __cplusplus
}
#endif

#endif
