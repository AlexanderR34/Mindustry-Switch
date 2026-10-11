#ifndef HEADER_arc_util_serialization_BaseJsonReader
#define HEADER_arc_util_serialization_BaseJsonReader

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_util_serialization_BaseJsonReader {
	java_lang_Object parent;
} arc_util_serialization_BaseJsonReader;

extern Class class_arc_util_serialization_BaseJsonReader;


#define INDEX_arc_util_serialization_BaseJsonReader_parse_java_io_InputStream_R_arc_util_serialization_JsonValue 0
typedef jobject (*func_arc_util_serialization_BaseJsonReader_parse_java_io_InputStream_R_arc_util_serialization_JsonValue)(jcontext ctx, jobject self, jobject param0);
#define INDEX_arc_util_serialization_BaseJsonReader_parse_arc_files_Fi_R_arc_util_serialization_JsonValue 1
typedef jobject (*func_arc_util_serialization_BaseJsonReader_parse_arc_files_Fi_R_arc_util_serialization_JsonValue)(jcontext ctx, jobject self, jobject param0);

void mark_arc_util_serialization_BaseJsonReader(jobject object, jint mark, jint depth);
void clinit_arc_util_serialization_BaseJsonReader(jcontext ctx);
jobject M_arc_util_serialization_BaseJsonReader_parse_arc_files_Fi_R_arc_util_serialization_JsonValue(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
