#ifndef HEADER_mindustry_io_JsonIO$1
#define HEADER_mindustry_io_JsonIO$1

#include "Clearwing.h"
#include "arc/util/serialization/Json.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_io_JsonIO$1 {
	arc_util_serialization_Json parent;
} mindustry_io_JsonIO$1;

extern Class class_mindustry_io_JsonIO$1;


#define VTABLE_mindustry_io_JsonIO$1_hashCode_R_int 0
typedef jint (*func_mindustry_io_JsonIO$1_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_JsonIO$1_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_io_JsonIO$1_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_io_JsonIO$1_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_io_JsonIO$1_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_JsonIO$1_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_io_JsonIO$1_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_JsonIO$1_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_io_JsonIO$1_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_JsonIO$1_finalize 5
typedef void (*func_mindustry_io_JsonIO$1_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_JsonIO$1_notify 6
typedef void (*func_mindustry_io_JsonIO$1_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_JsonIO$1_notifyAll 7
typedef void (*func_mindustry_io_JsonIO$1_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_JsonIO$1_wait 8
typedef void (*func_mindustry_io_JsonIO$1_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_JsonIO$1_wait_long 9
typedef void (*func_mindustry_io_JsonIO$1_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_io_JsonIO$1_wait_long_int 10
typedef void (*func_mindustry_io_JsonIO$1_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_io_JsonIO$1_getIgnoreUnknownFields_R_boolean 11
typedef jbool (*func_mindustry_io_JsonIO$1_getIgnoreUnknownFields_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_JsonIO$1_setIgnoreUnknownFields_boolean 12
typedef void (*func_mindustry_io_JsonIO$1_setIgnoreUnknownFields_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_io_JsonIO$1_setIgnoreDeprecated_boolean 13
typedef void (*func_mindustry_io_JsonIO$1_setIgnoreDeprecated_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_io_JsonIO$1_setReadDeprecated_boolean 14
typedef void (*func_mindustry_io_JsonIO$1_setReadDeprecated_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_io_JsonIO$1_setOutputType_arc_util_serialization_JsonWriter$OutputType 15
typedef void (*func_mindustry_io_JsonIO$1_setOutputType_arc_util_serialization_JsonWriter$OutputType)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_io_JsonIO$1_setQuoteLongValues_boolean 16
typedef void (*func_mindustry_io_JsonIO$1_setQuoteLongValues_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_io_JsonIO$1_setEnumNames_boolean 17
typedef void (*func_mindustry_io_JsonIO$1_setEnumNames_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_io_JsonIO$1_addClassTag_java_lang_String_java_lang_Class 18
typedef void (*func_mindustry_io_JsonIO$1_addClassTag_java_lang_String_java_lang_Class)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_io_JsonIO$1_getClass_java_lang_String_R_java_lang_Class 19
typedef jobject (*func_mindustry_io_JsonIO$1_getClass_java_lang_String_R_java_lang_Class)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_io_JsonIO$1_getTag_java_lang_Class_R_java_lang_String 20
typedef jobject (*func_mindustry_io_JsonIO$1_getTag_java_lang_Class_R_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_io_JsonIO$1_setTypeName_java_lang_String 21
typedef void (*func_mindustry_io_JsonIO$1_setTypeName_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_io_JsonIO$1_setDefaultSerializer_arc_util_serialization_Json$Serializer 22
typedef void (*func_mindustry_io_JsonIO$1_setDefaultSerializer_arc_util_serialization_Json$Serializer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_io_JsonIO$1_setSerializer_java_lang_Class_arc_util_serialization_Json$Serializer 23
typedef void (*func_mindustry_io_JsonIO$1_setSerializer_java_lang_Class_arc_util_serialization_Json$Serializer)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_io_JsonIO$1_getSerializer_java_lang_Class_R_arc_util_serialization_Json$Serializer 24
typedef jobject (*func_mindustry_io_JsonIO$1_getSerializer_java_lang_Class_R_arc_util_serialization_Json$Serializer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_io_JsonIO$1_setUsePrototypes_boolean 25
typedef void (*func_mindustry_io_JsonIO$1_setUsePrototypes_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_io_JsonIO$1_setElementType_java_lang_Class_java_lang_String_java_lang_Class 26
typedef void (*func_mindustry_io_JsonIO$1_setElementType_java_lang_Class_java_lang_String_java_lang_Class)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_mindustry_io_JsonIO$1_getFields_java_lang_Class_R_arc_struct_OrderedMap 27
typedef jobject (*func_mindustry_io_JsonIO$1_getFields_java_lang_Class_R_arc_struct_OrderedMap)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_io_JsonIO$1_toJson_java_lang_Object_R_java_lang_String 28
typedef jobject (*func_mindustry_io_JsonIO$1_toJson_java_lang_Object_R_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_io_JsonIO$1_toJson_java_lang_Object_java_lang_Class_R_java_lang_String 29
typedef jobject (*func_mindustry_io_JsonIO$1_toJson_java_lang_Object_java_lang_Class_R_java_lang_String)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_io_JsonIO$1_toUBJson_java_lang_Object_java_lang_Class_java_io_OutputStream 30
typedef void (*func_mindustry_io_JsonIO$1_toUBJson_java_lang_Object_java_lang_Class_java_io_OutputStream)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_mindustry_io_JsonIO$1_toJson_java_lang_Object_java_lang_Class_java_lang_Class_R_java_lang_String 31
typedef jobject (*func_mindustry_io_JsonIO$1_toJson_java_lang_Object_java_lang_Class_java_lang_Class_R_java_lang_String)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_mindustry_io_JsonIO$1_toJson_java_lang_Object_arc_files_Fi 32
typedef void (*func_mindustry_io_JsonIO$1_toJson_java_lang_Object_arc_files_Fi)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_io_JsonIO$1_toJson_java_lang_Object_java_lang_Class_arc_files_Fi 33
typedef void (*func_mindustry_io_JsonIO$1_toJson_java_lang_Object_java_lang_Class_arc_files_Fi)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_mindustry_io_JsonIO$1_toJson_java_lang_Object_java_lang_Class_java_lang_Class_arc_files_Fi 34
typedef void (*func_mindustry_io_JsonIO$1_toJson_java_lang_Object_java_lang_Class_java_lang_Class_arc_files_Fi)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3);
#define VTABLE_mindustry_io_JsonIO$1_toJson_java_lang_Object_java_io_Writer 35
typedef void (*func_mindustry_io_JsonIO$1_toJson_java_lang_Object_java_io_Writer)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_io_JsonIO$1_toJson_java_lang_Object_java_lang_Class_java_io_Writer 36
typedef void (*func_mindustry_io_JsonIO$1_toJson_java_lang_Object_java_lang_Class_java_io_Writer)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_mindustry_io_JsonIO$1_toJson_java_lang_Object_java_lang_Class_java_lang_Class_java_io_Writer 37
typedef void (*func_mindustry_io_JsonIO$1_toJson_java_lang_Object_java_lang_Class_java_lang_Class_java_io_Writer)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3);
#define VTABLE_mindustry_io_JsonIO$1_getWriter_R_arc_util_serialization_BaseJsonWriter 38
typedef jobject (*func_mindustry_io_JsonIO$1_getWriter_R_arc_util_serialization_BaseJsonWriter)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_JsonIO$1_setWriter_arc_util_serialization_BaseJsonWriter 39
typedef void (*func_mindustry_io_JsonIO$1_setWriter_arc_util_serialization_BaseJsonWriter)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_io_JsonIO$1_writeFields_java_lang_Object 40
typedef void (*func_mindustry_io_JsonIO$1_writeFields_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_io_JsonIO$1_getDefaultValues_java_lang_Class_R_Array1_java_lang_Object 41
typedef jobject (*func_mindustry_io_JsonIO$1_getDefaultValues_java_lang_Class_R_Array1_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_io_JsonIO$1_writeField_java_lang_Object_java_lang_String 42
typedef void (*func_mindustry_io_JsonIO$1_writeField_java_lang_Object_java_lang_String)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_io_JsonIO$1_writeField_java_lang_Object_java_lang_String_java_lang_Class 43
typedef void (*func_mindustry_io_JsonIO$1_writeField_java_lang_Object_java_lang_String_java_lang_Class)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_mindustry_io_JsonIO$1_writeField_java_lang_Object_java_lang_String_java_lang_String 44
typedef void (*func_mindustry_io_JsonIO$1_writeField_java_lang_Object_java_lang_String_java_lang_String)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_mindustry_io_JsonIO$1_writeField_java_lang_Object_java_lang_String_java_lang_String_java_lang_Class 45
typedef void (*func_mindustry_io_JsonIO$1_writeField_java_lang_Object_java_lang_String_java_lang_String_java_lang_Class)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3);
#define VTABLE_mindustry_io_JsonIO$1_writeValue_java_lang_String_java_lang_Object 46
typedef void (*func_mindustry_io_JsonIO$1_writeValue_java_lang_String_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_io_JsonIO$1_writeValue_java_lang_String_java_lang_Object_java_lang_Class 47
typedef void (*func_mindustry_io_JsonIO$1_writeValue_java_lang_String_java_lang_Object_java_lang_Class)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_mindustry_io_JsonIO$1_writeValue_java_lang_String_java_lang_Object_java_lang_Class_java_lang_Class 48
typedef void (*func_mindustry_io_JsonIO$1_writeValue_java_lang_String_java_lang_Object_java_lang_Class_java_lang_Class)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3);
#define VTABLE_mindustry_io_JsonIO$1_writeValue_java_lang_Object 49
typedef void (*func_mindustry_io_JsonIO$1_writeValue_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_io_JsonIO$1_writeValue_java_lang_Object_java_lang_Class 50
typedef void (*func_mindustry_io_JsonIO$1_writeValue_java_lang_Object_java_lang_Class)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_io_JsonIO$1_writeValue_java_lang_Object_java_lang_Class_java_lang_Class 51
typedef void (*func_mindustry_io_JsonIO$1_writeValue_java_lang_Object_java_lang_Class_java_lang_Class)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_mindustry_io_JsonIO$1_writeObjectStart_java_lang_String 52
typedef void (*func_mindustry_io_JsonIO$1_writeObjectStart_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_io_JsonIO$1_writeObjectStart_java_lang_String_java_lang_Class_java_lang_Class 53
typedef void (*func_mindustry_io_JsonIO$1_writeObjectStart_java_lang_String_java_lang_Class_java_lang_Class)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_mindustry_io_JsonIO$1_writeObjectStart 54
typedef void (*func_mindustry_io_JsonIO$1_writeObjectStart)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_JsonIO$1_writeObjectStart_java_lang_Class_java_lang_Class 55
typedef void (*func_mindustry_io_JsonIO$1_writeObjectStart_java_lang_Class_java_lang_Class)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_io_JsonIO$1_writeObjectEnd 56
typedef void (*func_mindustry_io_JsonIO$1_writeObjectEnd)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_JsonIO$1_writeArrayStart_java_lang_String 57
typedef void (*func_mindustry_io_JsonIO$1_writeArrayStart_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_io_JsonIO$1_writeArrayStart 58
typedef void (*func_mindustry_io_JsonIO$1_writeArrayStart)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_JsonIO$1_writeArrayEnd 59
typedef void (*func_mindustry_io_JsonIO$1_writeArrayEnd)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_JsonIO$1_writeType_java_lang_Class 60
typedef void (*func_mindustry_io_JsonIO$1_writeType_java_lang_Class)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_io_JsonIO$1_fromJson_java_lang_Class_java_io_Reader_R_java_lang_Object 61
typedef jobject (*func_mindustry_io_JsonIO$1_fromJson_java_lang_Class_java_io_Reader_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_io_JsonIO$1_fromJson_java_lang_Class_java_lang_Class_java_io_Reader_R_java_lang_Object 62
typedef jobject (*func_mindustry_io_JsonIO$1_fromJson_java_lang_Class_java_lang_Class_java_io_Reader_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_mindustry_io_JsonIO$1_fromJson_java_lang_Class_java_io_InputStream_R_java_lang_Object 63
typedef jobject (*func_mindustry_io_JsonIO$1_fromJson_java_lang_Class_java_io_InputStream_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_io_JsonIO$1_fromJson_java_lang_Class_java_lang_Class_java_io_InputStream_R_java_lang_Object 64
typedef jobject (*func_mindustry_io_JsonIO$1_fromJson_java_lang_Class_java_lang_Class_java_io_InputStream_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_mindustry_io_JsonIO$1_fromJson_java_lang_Class_arc_files_Fi_R_java_lang_Object 65
typedef jobject (*func_mindustry_io_JsonIO$1_fromJson_java_lang_Class_arc_files_Fi_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_io_JsonIO$1_fromJson_java_lang_Class_java_lang_Class_arc_files_Fi_R_java_lang_Object 66
typedef jobject (*func_mindustry_io_JsonIO$1_fromJson_java_lang_Class_java_lang_Class_arc_files_Fi_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_mindustry_io_JsonIO$1_fromJson_java_lang_Class_Array1_char_int_int_R_java_lang_Object 67
typedef jobject (*func_mindustry_io_JsonIO$1_fromJson_java_lang_Class_Array1_char_int_int_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3);
#define VTABLE_mindustry_io_JsonIO$1_fromJson_java_lang_Class_java_lang_Class_Array1_char_int_int_R_java_lang_Object 68
typedef jobject (*func_mindustry_io_JsonIO$1_fromJson_java_lang_Class_java_lang_Class_Array1_char_int_int_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jint param3, jint param4);
#define VTABLE_mindustry_io_JsonIO$1_fromJson_java_lang_Class_java_lang_String_R_java_lang_Object 69
typedef jobject (*func_mindustry_io_JsonIO$1_fromJson_java_lang_Class_java_lang_String_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_io_JsonIO$1_fromJson_java_lang_Class_java_lang_Class_java_lang_String_R_java_lang_Object 70
typedef jobject (*func_mindustry_io_JsonIO$1_fromJson_java_lang_Class_java_lang_Class_java_lang_String_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_mindustry_io_JsonIO$1_readField_java_lang_Object_java_lang_String_arc_util_serialization_JsonValue 71
typedef void (*func_mindustry_io_JsonIO$1_readField_java_lang_Object_java_lang_String_arc_util_serialization_JsonValue)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_mindustry_io_JsonIO$1_readField_java_lang_Object_java_lang_String_java_lang_Class_arc_util_serialization_JsonValue 72
typedef void (*func_mindustry_io_JsonIO$1_readField_java_lang_Object_java_lang_String_java_lang_Class_arc_util_serialization_JsonValue)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3);
#define VTABLE_mindustry_io_JsonIO$1_readField_java_lang_Object_java_lang_String_java_lang_String_arc_util_serialization_JsonValue 73
typedef void (*func_mindustry_io_JsonIO$1_readField_java_lang_Object_java_lang_String_java_lang_String_arc_util_serialization_JsonValue)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3);
#define VTABLE_mindustry_io_JsonIO$1_readField_java_lang_Object_java_lang_String_java_lang_String_java_lang_Class_arc_util_serialization_JsonValue 74
typedef void (*func_mindustry_io_JsonIO$1_readField_java_lang_Object_java_lang_String_java_lang_String_java_lang_Class_arc_util_serialization_JsonValue)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4);
#define VTABLE_mindustry_io_JsonIO$1_readField_java_lang_Object_java_lang_reflect_Field_java_lang_String_java_lang_Class_arc_util_serialization_JsonValue 75
typedef void (*func_mindustry_io_JsonIO$1_readField_java_lang_Object_java_lang_reflect_Field_java_lang_String_java_lang_Class_arc_util_serialization_JsonValue)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4);
#define VTABLE_mindustry_io_JsonIO$1_readFields_java_lang_Object_arc_util_serialization_JsonValue 76
typedef void (*func_mindustry_io_JsonIO$1_readFields_java_lang_Object_arc_util_serialization_JsonValue)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_io_JsonIO$1_ignoreUnknownField_java_lang_Class_java_lang_String_R_boolean 77
typedef jbool (*func_mindustry_io_JsonIO$1_ignoreUnknownField_java_lang_Class_java_lang_String_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_io_JsonIO$1_readValue_java_lang_String_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object 78
typedef jobject (*func_mindustry_io_JsonIO$1_readValue_java_lang_String_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_mindustry_io_JsonIO$1_readValue_java_lang_String_java_lang_Class_java_lang_Object_arc_util_serialization_JsonValue_R_java_lang_Object 79
typedef jobject (*func_mindustry_io_JsonIO$1_readValue_java_lang_String_java_lang_Class_java_lang_Object_arc_util_serialization_JsonValue_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3);
#define VTABLE_mindustry_io_JsonIO$1_readValue_java_lang_String_java_lang_Class_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object 80
typedef jobject (*func_mindustry_io_JsonIO$1_readValue_java_lang_String_java_lang_Class_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3);
#define VTABLE_mindustry_io_JsonIO$1_readValue_java_lang_String_java_lang_Class_java_lang_Class_java_lang_Object_arc_util_serialization_JsonValue_R_java_lang_Object 81
typedef jobject (*func_mindustry_io_JsonIO$1_readValue_java_lang_String_java_lang_Class_java_lang_Class_java_lang_Object_arc_util_serialization_JsonValue_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4);
#define VTABLE_mindustry_io_JsonIO$1_readValue_java_lang_Class_java_lang_Class_java_lang_Object_arc_util_serialization_JsonValue_R_java_lang_Object 82
typedef jobject (*func_mindustry_io_JsonIO$1_readValue_java_lang_Class_java_lang_Class_java_lang_Object_arc_util_serialization_JsonValue_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3);
#define VTABLE_mindustry_io_JsonIO$1_readValue_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object 83
typedef jobject (*func_mindustry_io_JsonIO$1_readValue_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_io_JsonIO$1_readValue_java_lang_Class_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object 84
typedef jobject (*func_mindustry_io_JsonIO$1_readValue_java_lang_Class_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_mindustry_io_JsonIO$1_readValue_java_lang_Class_java_lang_Class_arc_util_serialization_JsonValue_java_lang_Class_R_java_lang_Object 85
typedef jobject (*func_mindustry_io_JsonIO$1_readValue_java_lang_Class_java_lang_Class_arc_util_serialization_JsonValue_java_lang_Class_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3);
#define VTABLE_mindustry_io_JsonIO$1_copyFields_java_lang_Object_java_lang_Object 86
typedef void (*func_mindustry_io_JsonIO$1_copyFields_java_lang_Object_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_io_JsonIO$1_copyFields_java_lang_Object_java_lang_Object_boolean 87
typedef void (*func_mindustry_io_JsonIO$1_copyFields_java_lang_Object_java_lang_Object_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2);
#define VTABLE_mindustry_io_JsonIO$1_resolveClass_java_lang_String_R_java_lang_Class 88
typedef jobject (*func_mindustry_io_JsonIO$1_resolveClass_java_lang_String_R_java_lang_Class)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_io_JsonIO$1_convertToString_java_lang_Enum_R_java_lang_String 89
typedef jobject (*func_mindustry_io_JsonIO$1_convertToString_java_lang_Enum_R_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_io_JsonIO$1_convertToString_java_lang_Object_R_java_lang_String 90
typedef jobject (*func_mindustry_io_JsonIO$1_convertToString_java_lang_Object_R_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_io_JsonIO$1_newInstance_java_lang_Class_R_java_lang_Object 91
typedef jobject (*func_mindustry_io_JsonIO$1_newInstance_java_lang_Class_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_io_JsonIO$1_prettyPrint_java_lang_Object_R_java_lang_String 92
typedef jobject (*func_mindustry_io_JsonIO$1_prettyPrint_java_lang_Object_R_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_io_JsonIO$1_prettyPrint_java_lang_String_R_java_lang_String 93
typedef jobject (*func_mindustry_io_JsonIO$1_prettyPrint_java_lang_String_R_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_io_JsonIO$1_prettyPrint_java_lang_Object_int_R_java_lang_String 94
typedef jobject (*func_mindustry_io_JsonIO$1_prettyPrint_java_lang_Object_int_R_java_lang_String)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_mindustry_io_JsonIO$1_prettyPrint_java_lang_String_int_R_java_lang_String 95
typedef jobject (*func_mindustry_io_JsonIO$1_prettyPrint_java_lang_String_int_R_java_lang_String)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_mindustry_io_JsonIO$1_prettyPrint_java_lang_Object_arc_util_serialization_JsonValue$PrettyPrintSettings_R_java_lang_String 96
typedef jobject (*func_mindustry_io_JsonIO$1_prettyPrint_java_lang_Object_arc_util_serialization_JsonValue$PrettyPrintSettings_R_java_lang_String)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_io_JsonIO$1_prettyPrint_java_lang_String_arc_util_serialization_JsonValue$PrettyPrintSettings_R_java_lang_String 97
typedef jobject (*func_mindustry_io_JsonIO$1_prettyPrint_java_lang_String_arc_util_serialization_JsonValue$PrettyPrintSettings_R_java_lang_String)(jcontext ctx, jobject self, jobject param0, jobject param1);

void mark_mindustry_io_JsonIO$1(jobject object, jint mark, jint depth);
void clinit_mindustry_io_JsonIO$1(jcontext ctx);
void init_mindustry_io_JsonIO$1(jcontext ctx, jobject self);
void M_mindustry_io_JsonIO$1_writeValue_java_lang_Object_java_lang_Class_java_lang_Class(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
jobject M_mindustry_io_JsonIO$1_convertToString_java_lang_Object_R_java_lang_String(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
