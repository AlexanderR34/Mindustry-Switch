#ifndef HEADER_mindustry_io_JsonIO$6
#define HEADER_mindustry_io_JsonIO$6

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "arc/util/serialization/Json_Serializer.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_io_JsonIO$6 {
	java_lang_Object parent;
} mindustry_io_JsonIO$6;

extern Class class_mindustry_io_JsonIO$6;


#define VTABLE_mindustry_io_JsonIO$6_hashCode_R_int 0
typedef jint (*func_mindustry_io_JsonIO$6_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_JsonIO$6_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_io_JsonIO$6_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_io_JsonIO$6_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_io_JsonIO$6_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_JsonIO$6_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_io_JsonIO$6_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_JsonIO$6_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_io_JsonIO$6_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_JsonIO$6_finalize 5
typedef void (*func_mindustry_io_JsonIO$6_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_JsonIO$6_notify 6
typedef void (*func_mindustry_io_JsonIO$6_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_JsonIO$6_notifyAll 7
typedef void (*func_mindustry_io_JsonIO$6_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_JsonIO$6_wait 8
typedef void (*func_mindustry_io_JsonIO$6_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_JsonIO$6_wait_long 9
typedef void (*func_mindustry_io_JsonIO$6_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_io_JsonIO$6_wait_long_int 10
typedef void (*func_mindustry_io_JsonIO$6_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_io_JsonIO$6_write_arc_util_serialization_Json_java_lang_Object_java_lang_Class 11
typedef void (*func_mindustry_io_JsonIO$6_write_arc_util_serialization_Json_java_lang_Object_java_lang_Class)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_mindustry_io_JsonIO$6_read_arc_util_serialization_Json_arc_util_serialization_JsonValue_java_lang_Class_R_java_lang_Object 12
typedef jobject (*func_mindustry_io_JsonIO$6_read_arc_util_serialization_Json_arc_util_serialization_JsonValue_java_lang_Class_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_mindustry_io_JsonIO$6_write_arc_util_serialization_Json_mindustry_type_Liquid_java_lang_Class 13
typedef void (*func_mindustry_io_JsonIO$6_write_arc_util_serialization_Json_mindustry_type_Liquid_java_lang_Class)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_mindustry_io_JsonIO$6_read_arc_util_serialization_Json_arc_util_serialization_JsonValue_java_lang_Class_R_mindustry_type_Liquid 14
typedef jobject (*func_mindustry_io_JsonIO$6_read_arc_util_serialization_Json_arc_util_serialization_JsonValue_java_lang_Class_R_mindustry_type_Liquid)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);

void mark_mindustry_io_JsonIO$6(jobject object, jint mark, jint depth);
void clinit_mindustry_io_JsonIO$6(jcontext ctx);
void init_mindustry_io_JsonIO$6(jcontext ctx, jobject self);
void M_mindustry_io_JsonIO$6_write_arc_util_serialization_Json_mindustry_type_Liquid_java_lang_Class(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
jobject M_mindustry_io_JsonIO$6_read_arc_util_serialization_Json_arc_util_serialization_JsonValue_java_lang_Class_R_mindustry_type_Liquid(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
jobject M_mindustry_io_JsonIO$6_read_arc_util_serialization_Json_arc_util_serialization_JsonValue_java_lang_Class_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
void M_mindustry_io_JsonIO$6_write_arc_util_serialization_Json_java_lang_Object_java_lang_Class(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);

#ifdef __cplusplus
}
#endif

#endif
