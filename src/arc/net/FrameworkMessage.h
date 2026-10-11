#ifndef HEADER_arc_net_FrameworkMessage
#define HEADER_arc_net_FrameworkMessage

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_net_FrameworkMessage {
	java_lang_Object parent;
} arc_net_FrameworkMessage;

extern Class class_arc_net_FrameworkMessage;

extern jobject SF_arc_net_FrameworkMessage_keepAlive;
extern jobject SF_arc_net_FrameworkMessage_discoverHost;


void mark_arc_net_FrameworkMessage(jobject object, jint mark, jint depth);
void clinit_arc_net_FrameworkMessage(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
