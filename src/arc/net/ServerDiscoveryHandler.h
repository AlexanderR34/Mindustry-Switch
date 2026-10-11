#ifndef HEADER_arc_net_ServerDiscoveryHandler
#define HEADER_arc_net_ServerDiscoveryHandler

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_net_ServerDiscoveryHandler {
	java_lang_Object parent;
} arc_net_ServerDiscoveryHandler;

extern Class class_arc_net_ServerDiscoveryHandler;


#define INDEX_arc_net_ServerDiscoveryHandler_onDiscoverReceived_java_net_InetAddress_arc_net_ServerDiscoveryHandler$ReponseHandler 0
typedef void (*func_arc_net_ServerDiscoveryHandler_onDiscoverReceived_java_net_InetAddress_arc_net_ServerDiscoveryHandler$ReponseHandler)(jcontext ctx, jobject self, jobject param0, jobject param1);

void mark_arc_net_ServerDiscoveryHandler(jobject object, jint mark, jint depth);
void clinit_arc_net_ServerDiscoveryHandler(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
