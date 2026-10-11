#ifndef HEADER_mindustry_net_Administration$ActionFilter
#define HEADER_mindustry_net_Administration$ActionFilter

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_net_Administration$ActionFilter {
	java_lang_Object parent;
} mindustry_net_Administration$ActionFilter;

extern Class class_mindustry_net_Administration$ActionFilter;


#define INDEX_mindustry_net_Administration$ActionFilter_allow_mindustry_net_Administration$PlayerAction_R_boolean 0
typedef jbool (*func_mindustry_net_Administration$ActionFilter_allow_mindustry_net_Administration$PlayerAction_R_boolean)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_net_Administration$ActionFilter(jobject object, jint mark, jint depth);
void clinit_mindustry_net_Administration$ActionFilter(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
