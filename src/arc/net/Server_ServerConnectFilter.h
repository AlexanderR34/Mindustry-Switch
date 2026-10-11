#ifndef HEADER_arc_net_Server$ServerConnectFilter
#define HEADER_arc_net_Server$ServerConnectFilter

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_net_Server$ServerConnectFilter {
	java_lang_Object parent;
} arc_net_Server$ServerConnectFilter;

extern Class class_arc_net_Server$ServerConnectFilter;


#define INDEX_arc_net_Server$ServerConnectFilter_accept_java_lang_String_R_boolean 0
typedef jbool (*func_arc_net_Server$ServerConnectFilter_accept_java_lang_String_R_boolean)(jcontext ctx, jobject self, jobject param0);

void mark_arc_net_Server$ServerConnectFilter(jobject object, jint mark, jint depth);
void clinit_arc_net_Server$ServerConnectFilter(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
