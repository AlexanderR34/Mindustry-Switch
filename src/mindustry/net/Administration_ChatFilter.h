#ifndef HEADER_mindustry_net_Administration$ChatFilter
#define HEADER_mindustry_net_Administration$ChatFilter

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_net_Administration$ChatFilter {
	java_lang_Object parent;
} mindustry_net_Administration$ChatFilter;

extern Class class_mindustry_net_Administration$ChatFilter;


#define INDEX_mindustry_net_Administration$ChatFilter_filter_mindustry_gen_Player_java_lang_String_R_java_lang_String 0
typedef jobject (*func_mindustry_net_Administration$ChatFilter_filter_mindustry_gen_Player_java_lang_String_R_java_lang_String)(jcontext ctx, jobject self, jobject param0, jobject param1);

void mark_mindustry_net_Administration$ChatFilter(jobject object, jint mark, jint depth);
void clinit_mindustry_net_Administration$ChatFilter(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
