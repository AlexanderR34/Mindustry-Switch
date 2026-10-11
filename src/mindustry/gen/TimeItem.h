#ifndef HEADER_mindustry_gen_TimeItem
#define HEADER_mindustry_gen_TimeItem

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_gen_TimeItem {
	java_lang_Object parent;
} mindustry_gen_TimeItem;

extern Class class_mindustry_gen_TimeItem;

extern jlong SF_mindustry_gen_TimeItem_bitMaskData;
extern jlong SF_mindustry_gen_TimeItem_bitMaskItem;
extern jlong SF_mindustry_gen_TimeItem_bitMaskTime;

#define VTABLE_mindustry_gen_TimeItem_hashCode_R_int 0
typedef jint (*func_mindustry_gen_TimeItem_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimeItem_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_gen_TimeItem_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_TimeItem_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_gen_TimeItem_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimeItem_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_gen_TimeItem_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimeItem_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_gen_TimeItem_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimeItem_finalize 5
typedef void (*func_mindustry_gen_TimeItem_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimeItem_notify 6
typedef void (*func_mindustry_gen_TimeItem_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimeItem_notifyAll 7
typedef void (*func_mindustry_gen_TimeItem_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimeItem_wait 8
typedef void (*func_mindustry_gen_TimeItem_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimeItem_wait_long 9
typedef void (*func_mindustry_gen_TimeItem_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_gen_TimeItem_wait_long_int 10
typedef void (*func_mindustry_gen_TimeItem_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_mindustry_gen_TimeItem(jobject object, jint mark, jint depth);
void clinit_mindustry_gen_TimeItem(jcontext ctx);
void init_mindustry_gen_TimeItem(jcontext ctx, jobject self);
jshort SM_mindustry_gen_TimeItem_data_long_R_short(jcontext ctx, jlong param0);
jlong SM_mindustry_gen_TimeItem_data_long_short_R_long(jcontext ctx, jlong param0, jshort param1);
jshort SM_mindustry_gen_TimeItem_item_long_R_short(jcontext ctx, jlong param0);
jlong SM_mindustry_gen_TimeItem_item_long_short_R_long(jcontext ctx, jlong param0, jshort param1);
jfloat SM_mindustry_gen_TimeItem_time_long_R_float(jcontext ctx, jlong param0);
jlong SM_mindustry_gen_TimeItem_time_long_float_R_long(jcontext ctx, jlong param0, jfloat param1);
jlong SM_mindustry_gen_TimeItem_get_short_short_float_R_long(jcontext ctx, jshort param0, jshort param1, jfloat param2);

#ifdef __cplusplus
}
#endif

#endif
