#ifndef HEADER_arc_net_ServerDiscoveryHandler$ReponseHandler
#define HEADER_arc_net_ServerDiscoveryHandler$ReponseHandler

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_net_ServerDiscoveryHandler$ReponseHandler {
	java_lang_Object parent;
} arc_net_ServerDiscoveryHandler$ReponseHandler;

extern Class class_arc_net_ServerDiscoveryHandler$ReponseHandler;


#define INDEX_arc_net_ServerDiscoveryHandler$ReponseHandler_respond_java_nio_ByteBuffer 0
typedef void (*func_arc_net_ServerDiscoveryHandler$ReponseHandler_respond_java_nio_ByteBuffer)(jcontext ctx, jobject self, jobject param0);

void mark_arc_net_ServerDiscoveryHandler$ReponseHandler(jobject object, jint mark, jint depth);
void clinit_arc_net_ServerDiscoveryHandler$ReponseHandler(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
