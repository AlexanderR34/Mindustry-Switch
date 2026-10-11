#ifndef HEADER_arc_util_serialization_Json$Serializer
#define HEADER_arc_util_serialization_Json$Serializer

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_util_serialization_Json$Serializer {
	java_lang_Object parent;
} arc_util_serialization_Json$Serializer;

extern Class class_arc_util_serialization_Json$Serializer;


#define INDEX_arc_util_serialization_Json$Serializer_write_arc_util_serialization_Json_java_lang_Object_java_lang_Class 0
typedef void (*func_arc_util_serialization_Json$Serializer_write_arc_util_serialization_Json_java_lang_Object_java_lang_Class)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define INDEX_arc_util_serialization_Json$Serializer_read_arc_util_serialization_Json_arc_util_serialization_JsonValue_java_lang_Class_R_java_lang_Object 1
typedef jobject (*func_arc_util_serialization_Json$Serializer_read_arc_util_serialization_Json_arc_util_serialization_JsonValue_java_lang_Class_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);

void mark_arc_util_serialization_Json$Serializer(jobject object, jint mark, jint depth);
void clinit_arc_util_serialization_Json$Serializer(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
