#ifndef HEADER_mindustry_world_blocks_Attributes
#define HEADER_mindustry_world_blocks_Attributes

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "arc/util/serialization/Json_JsonSerializable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_world_blocks_Attributes {
	java_lang_Object parent;
	jref F_arr;
} mindustry_world_blocks_Attributes;

extern Class class_mindustry_world_blocks_Attributes;


#define VTABLE_mindustry_world_blocks_Attributes_hashCode_R_int 0
typedef jint (*func_mindustry_world_blocks_Attributes_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_blocks_Attributes_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_world_blocks_Attributes_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_blocks_Attributes_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_world_blocks_Attributes_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_blocks_Attributes_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_world_blocks_Attributes_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_blocks_Attributes_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_world_blocks_Attributes_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_blocks_Attributes_finalize 5
typedef void (*func_mindustry_world_blocks_Attributes_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_blocks_Attributes_notify 6
typedef void (*func_mindustry_world_blocks_Attributes_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_blocks_Attributes_notifyAll 7
typedef void (*func_mindustry_world_blocks_Attributes_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_blocks_Attributes_wait 8
typedef void (*func_mindustry_world_blocks_Attributes_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_blocks_Attributes_wait_long 9
typedef void (*func_mindustry_world_blocks_Attributes_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_world_blocks_Attributes_wait_long_int 10
typedef void (*func_mindustry_world_blocks_Attributes_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_world_blocks_Attributes_write_arc_util_serialization_Json 11
typedef void (*func_mindustry_world_blocks_Attributes_write_arc_util_serialization_Json)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_blocks_Attributes_read_arc_util_serialization_Json_arc_util_serialization_JsonValue 12
typedef void (*func_mindustry_world_blocks_Attributes_read_arc_util_serialization_Json_arc_util_serialization_JsonValue)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_world_blocks_Attributes_clear 13
typedef void (*func_mindustry_world_blocks_Attributes_clear)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_blocks_Attributes_get_mindustry_world_meta_Attribute_R_float 14
typedef jfloat (*func_mindustry_world_blocks_Attributes_get_mindustry_world_meta_Attribute_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_blocks_Attributes_set_mindustry_world_meta_Attribute_float 15
typedef void (*func_mindustry_world_blocks_Attributes_set_mindustry_world_meta_Attribute_float)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_mindustry_world_blocks_Attributes_add_mindustry_world_blocks_Attributes 16
typedef void (*func_mindustry_world_blocks_Attributes_add_mindustry_world_blocks_Attributes)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_blocks_Attributes_add_mindustry_world_blocks_Attributes_float 17
typedef void (*func_mindustry_world_blocks_Attributes_add_mindustry_world_blocks_Attributes_float)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_mindustry_world_blocks_Attributes_check 18
typedef void (*func_mindustry_world_blocks_Attributes_check)(jcontext ctx, jobject self);

void mark_mindustry_world_blocks_Attributes(jobject object, jint mark, jint depth);
void clinit_mindustry_world_blocks_Attributes(jcontext ctx);
void init_mindustry_world_blocks_Attributes(jcontext ctx, jobject self);
void M_mindustry_world_blocks_Attributes_clear(jcontext ctx, jobject self);
jfloat M_mindustry_world_blocks_Attributes_get_mindustry_world_meta_Attribute_R_float(jcontext ctx, jobject self, jobject param0);
void M_mindustry_world_blocks_Attributes_set_mindustry_world_meta_Attribute_float(jcontext ctx, jobject self, jobject param0, jfloat param1);
void M_mindustry_world_blocks_Attributes_add_mindustry_world_blocks_Attributes(jcontext ctx, jobject self, jobject param0);
void M_mindustry_world_blocks_Attributes_add_mindustry_world_blocks_Attributes_float(jcontext ctx, jobject self, jobject param0, jfloat param1);
void M_mindustry_world_blocks_Attributes_write_arc_util_serialization_Json(jcontext ctx, jobject self, jobject param0);
void M_mindustry_world_blocks_Attributes_read_arc_util_serialization_Json_arc_util_serialization_JsonValue(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_mindustry_world_blocks_Attributes_check(jcontext ctx, jobject self);
jobject M_mindustry_world_blocks_Attributes_toString_R_java_lang_String(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
