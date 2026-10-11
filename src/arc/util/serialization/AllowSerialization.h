#ifndef HEADER_arc_util_serialization_AllowSerialization
#define HEADER_arc_util_serialization_AllowSerialization

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_util_serialization_AllowSerialization {
	java_lang_Object parent;
} arc_util_serialization_AllowSerialization;

extern Class class_arc_util_serialization_AllowSerialization;



void mark_arc_util_serialization_AllowSerialization(jobject object, jint mark, jint depth);
void clinit_arc_util_serialization_AllowSerialization(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
