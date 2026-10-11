#ifndef HEADER_arc_util_serialization_Json$JsonSerializable
#define HEADER_arc_util_serialization_Json$JsonSerializable

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_util_serialization_Json$JsonSerializable {
	java_lang_Object parent;
} arc_util_serialization_Json$JsonSerializable;

extern Class class_arc_util_serialization_Json$JsonSerializable;


#define INDEX_arc_util_serialization_Json$JsonSerializable_write_arc_util_serialization_Json 0
typedef void (*func_arc_util_serialization_Json$JsonSerializable_write_arc_util_serialization_Json)(jcontext ctx, jobject self, jobject param0);
#define INDEX_arc_util_serialization_Json$JsonSerializable_read_arc_util_serialization_Json_arc_util_serialization_JsonValue 1
typedef void (*func_arc_util_serialization_Json$JsonSerializable_read_arc_util_serialization_Json_arc_util_serialization_JsonValue)(jcontext ctx, jobject self, jobject param0, jobject param1);

void mark_arc_util_serialization_Json$JsonSerializable(jobject object, jint mark, jint depth);
void clinit_arc_util_serialization_Json$JsonSerializable(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
