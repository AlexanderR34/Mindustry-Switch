#ifndef HEADER_mindustry_mod_ContentParser$TypeParser
#define HEADER_mindustry_mod_ContentParser$TypeParser

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_mod_ContentParser$TypeParser {
	java_lang_Object parent;
} mindustry_mod_ContentParser$TypeParser;

extern Class class_mindustry_mod_ContentParser$TypeParser;


#define INDEX_mindustry_mod_ContentParser$TypeParser_parse_java_lang_String_java_lang_String_arc_util_serialization_JsonValue_R_mindustry_ctype_Content 0
typedef jobject (*func_mindustry_mod_ContentParser$TypeParser_parse_java_lang_String_java_lang_String_arc_util_serialization_JsonValue_R_mindustry_ctype_Content)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);

void mark_mindustry_mod_ContentParser$TypeParser(jobject object, jint mark, jint depth);
void clinit_mindustry_mod_ContentParser$TypeParser(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
