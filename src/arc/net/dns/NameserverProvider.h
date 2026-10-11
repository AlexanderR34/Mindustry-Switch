#ifndef HEADER_arc_net_dns_NameserverProvider
#define HEADER_arc_net_dns_NameserverProvider

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_net_dns_NameserverProvider {
	java_lang_Object parent;
} arc_net_dns_NameserverProvider;

extern Class class_arc_net_dns_NameserverProvider;


#define INDEX_arc_net_dns_NameserverProvider_getNameservers_R_arc_struct_Seq 0
typedef jobject (*func_arc_net_dns_NameserverProvider_getNameservers_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define INDEX_arc_net_dns_NameserverProvider_isEnabled_R_boolean 1
typedef jbool (*func_arc_net_dns_NameserverProvider_isEnabled_R_boolean)(jcontext ctx, jobject self);

void mark_arc_net_dns_NameserverProvider(jobject object, jint mark, jint depth);
void clinit_arc_net_dns_NameserverProvider(jcontext ctx);
jbool M_arc_net_dns_NameserverProvider_isEnabled_R_boolean(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
