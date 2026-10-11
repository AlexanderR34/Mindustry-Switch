#ifndef HEADER_mindustry_type_ItemSeq
#define HEADER_mindustry_type_ItemSeq

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/lang/Iterable.h"
#include "arc/util/serialization/Json_JsonSerializable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_type_ItemSeq {
	java_lang_Object parent;
	jref F_values;
	jint F_total;
} mindustry_type_ItemSeq;

extern Class class_mindustry_type_ItemSeq;


#define VTABLE_mindustry_type_ItemSeq_hashCode_R_int 0
typedef jint (*func_mindustry_type_ItemSeq_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_ItemSeq_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_type_ItemSeq_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_ItemSeq_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_type_ItemSeq_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_ItemSeq_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_type_ItemSeq_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_ItemSeq_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_type_ItemSeq_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_ItemSeq_finalize 5
typedef void (*func_mindustry_type_ItemSeq_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_ItemSeq_notify 6
typedef void (*func_mindustry_type_ItemSeq_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_ItemSeq_notifyAll 7
typedef void (*func_mindustry_type_ItemSeq_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_ItemSeq_wait 8
typedef void (*func_mindustry_type_ItemSeq_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_ItemSeq_wait_long 9
typedef void (*func_mindustry_type_ItemSeq_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_type_ItemSeq_wait_long_int 10
typedef void (*func_mindustry_type_ItemSeq_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_type_ItemSeq_iterator_R_java_util_Iterator 11
typedef jobject (*func_mindustry_type_ItemSeq_iterator_R_java_util_Iterator)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_ItemSeq_forEach_java_util_function_Consumer 12
typedef void (*func_mindustry_type_ItemSeq_forEach_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_ItemSeq_spliterator_R_java_util_Spliterator 13
typedef jobject (*func_mindustry_type_ItemSeq_spliterator_R_java_util_Spliterator)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_ItemSeq_write_arc_util_serialization_Json 14
typedef void (*func_mindustry_type_ItemSeq_write_arc_util_serialization_Json)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_ItemSeq_read_arc_util_serialization_Json_arc_util_serialization_JsonValue 15
typedef void (*func_mindustry_type_ItemSeq_read_arc_util_serialization_Json_arc_util_serialization_JsonValue)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_type_ItemSeq_checkNegative 16
typedef void (*func_mindustry_type_ItemSeq_checkNegative)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_ItemSeq_copy_R_mindustry_type_ItemSeq 17
typedef jobject (*func_mindustry_type_ItemSeq_copy_R_mindustry_type_ItemSeq)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_ItemSeq_each_mindustry_world_modules_ItemModule$ItemConsumer 18
typedef void (*func_mindustry_type_ItemSeq_each_mindustry_world_modules_ItemModule$ItemConsumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_ItemSeq_clear 19
typedef void (*func_mindustry_type_ItemSeq_clear)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_ItemSeq_toSeq_R_arc_struct_Seq 20
typedef jobject (*func_mindustry_type_ItemSeq_toSeq_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_ItemSeq_toArray_R_Array1_mindustry_type_ItemStack 21
typedef jobject (*func_mindustry_type_ItemSeq_toArray_R_Array1_mindustry_type_ItemStack)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_ItemSeq_min_int 22
typedef void (*func_mindustry_type_ItemSeq_min_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_type_ItemSeq_has_mindustry_type_Item_R_boolean 23
typedef jbool (*func_mindustry_type_ItemSeq_has_mindustry_type_Item_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_ItemSeq_has_mindustry_type_ItemSeq_R_boolean 24
typedef jbool (*func_mindustry_type_ItemSeq_has_mindustry_type_ItemSeq_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_ItemSeq_has_mindustry_type_Item_int_R_boolean 25
typedef jbool (*func_mindustry_type_ItemSeq_has_mindustry_type_Item_int_R_boolean)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_mindustry_type_ItemSeq_get_mindustry_type_Item_R_int 26
typedef jint (*func_mindustry_type_ItemSeq_get_mindustry_type_Item_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_ItemSeq_set_mindustry_type_Item_int 27
typedef void (*func_mindustry_type_ItemSeq_set_mindustry_type_Item_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_mindustry_type_ItemSeq_add_mindustry_world_modules_ItemModule 28
typedef void (*func_mindustry_type_ItemSeq_add_mindustry_world_modules_ItemModule)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_ItemSeq_add_Array1_mindustry_type_ItemStack 29
typedef void (*func_mindustry_type_ItemSeq_add_Array1_mindustry_type_ItemStack)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_ItemSeq_add_mindustry_type_ItemSeq 30
typedef void (*func_mindustry_type_ItemSeq_add_mindustry_type_ItemSeq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_ItemSeq_add_mindustry_type_ItemStack 31
typedef void (*func_mindustry_type_ItemSeq_add_mindustry_type_ItemStack)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_ItemSeq_add_mindustry_type_Item 32
typedef void (*func_mindustry_type_ItemSeq_add_mindustry_type_Item)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_ItemSeq_add_mindustry_type_Item_int 33
typedef void (*func_mindustry_type_ItemSeq_add_mindustry_type_Item_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_mindustry_type_ItemSeq_remove_mindustry_type_ItemStack 34
typedef void (*func_mindustry_type_ItemSeq_remove_mindustry_type_ItemStack)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_ItemSeq_remove_mindustry_type_Item 35
typedef void (*func_mindustry_type_ItemSeq_remove_mindustry_type_Item)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_ItemSeq_remove_mindustry_type_Item_int 36
typedef void (*func_mindustry_type_ItemSeq_remove_mindustry_type_Item_int)(jcontext ctx, jobject self, jobject param0, jint param1);

void mark_mindustry_type_ItemSeq(jobject object, jint mark, jint depth);
void clinit_mindustry_type_ItemSeq(jcontext ctx);
void init_mindustry_type_ItemSeq(jcontext ctx, jobject self);
void init_mindustry_type_ItemSeq_arc_struct_Seq(jcontext ctx, jobject self, jobject param0);
void M_mindustry_type_ItemSeq_checkNegative(jcontext ctx, jobject self);
jobject M_mindustry_type_ItemSeq_copy_R_mindustry_type_ItemSeq(jcontext ctx, jobject self);
void M_mindustry_type_ItemSeq_each_mindustry_world_modules_ItemModule$ItemConsumer(jcontext ctx, jobject self, jobject param0);
void M_mindustry_type_ItemSeq_clear(jcontext ctx, jobject self);
jobject M_mindustry_type_ItemSeq_toSeq_R_arc_struct_Seq(jcontext ctx, jobject self);
jobject M_mindustry_type_ItemSeq_toArray_R_Array1_mindustry_type_ItemStack(jcontext ctx, jobject self);
void M_mindustry_type_ItemSeq_min_int(jcontext ctx, jobject self, jint param0);
jbool M_mindustry_type_ItemSeq_has_mindustry_type_Item_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_type_ItemSeq_has_mindustry_type_ItemSeq_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_type_ItemSeq_has_mindustry_type_Item_int_R_boolean(jcontext ctx, jobject self, jobject param0, jint param1);
jint M_mindustry_type_ItemSeq_get_mindustry_type_Item_R_int(jcontext ctx, jobject self, jobject param0);
void M_mindustry_type_ItemSeq_set_mindustry_type_Item_int(jcontext ctx, jobject self, jobject param0, jint param1);
void M_mindustry_type_ItemSeq_add_mindustry_world_modules_ItemModule(jcontext ctx, jobject self, jobject param0);
void M_mindustry_type_ItemSeq_add_Array1_mindustry_type_ItemStack(jcontext ctx, jobject self, jobject param0);
void M_mindustry_type_ItemSeq_add_mindustry_type_ItemSeq(jcontext ctx, jobject self, jobject param0);
void M_mindustry_type_ItemSeq_add_mindustry_type_ItemStack(jcontext ctx, jobject self, jobject param0);
void M_mindustry_type_ItemSeq_add_mindustry_type_Item(jcontext ctx, jobject self, jobject param0);
void M_mindustry_type_ItemSeq_add_mindustry_type_Item_int(jcontext ctx, jobject self, jobject param0, jint param1);
void M_mindustry_type_ItemSeq_remove_mindustry_type_ItemStack(jcontext ctx, jobject self, jobject param0);
void M_mindustry_type_ItemSeq_remove_mindustry_type_Item(jcontext ctx, jobject self, jobject param0);
void M_mindustry_type_ItemSeq_remove_mindustry_type_Item_int(jcontext ctx, jobject self, jobject param0, jint param1);
void M_mindustry_type_ItemSeq_write_arc_util_serialization_Json(jcontext ctx, jobject self, jobject param0);
void M_mindustry_type_ItemSeq_read_arc_util_serialization_Json_arc_util_serialization_JsonValue(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_mindustry_type_ItemSeq_toString_R_java_lang_String(jcontext ctx, jobject self);
jobject M_mindustry_type_ItemSeq_iterator_R_java_util_Iterator(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
