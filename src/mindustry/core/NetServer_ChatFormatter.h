#ifndef HEADER_mindustry_core_NetServer$ChatFormatter
#define HEADER_mindustry_core_NetServer$ChatFormatter

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_core_NetServer$ChatFormatter {
	java_lang_Object parent;
} mindustry_core_NetServer$ChatFormatter;

extern Class class_mindustry_core_NetServer$ChatFormatter;


#define INDEX_mindustry_core_NetServer$ChatFormatter_format_mindustry_gen_Player_java_lang_String_R_java_lang_String 0
typedef jobject (*func_mindustry_core_NetServer$ChatFormatter_format_mindustry_gen_Player_java_lang_String_R_java_lang_String)(jcontext ctx, jobject self, jobject param0, jobject param1);

void mark_mindustry_core_NetServer$ChatFormatter(jobject object, jint mark, jint depth);
void clinit_mindustry_core_NetServer$ChatFormatter(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
