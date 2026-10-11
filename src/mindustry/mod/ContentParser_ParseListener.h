#ifndef HEADER_mindustry_mod_ContentParser$ParseListener
#define HEADER_mindustry_mod_ContentParser$ParseListener

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_mod_ContentParser$ParseListener {
	java_lang_Object parent;
} mindustry_mod_ContentParser$ParseListener;

extern Class class_mindustry_mod_ContentParser$ParseListener;


#define INDEX_mindustry_mod_ContentParser$ParseListener_parsed_java_lang_Class_arc_util_serialization_JsonValue_java_lang_Object 0
typedef void (*func_mindustry_mod_ContentParser$ParseListener_parsed_java_lang_Class_arc_util_serialization_JsonValue_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);

void mark_mindustry_mod_ContentParser$ParseListener(jobject object, jint mark, jint depth);
void clinit_mindustry_mod_ContentParser$ParseListener(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
