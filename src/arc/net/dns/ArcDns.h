#ifndef HEADER_arc_net_dns_ArcDns
#define HEADER_arc_net_dns_ArcDns

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_net_dns_ArcDns {
	java_lang_Object parent;
} arc_net_dns_ArcDns;

extern Class class_arc_net_dns_ArcDns;

extern jint SF_arc_net_dns_ArcDns_dnsResolverPort;
extern jobject SF_arc_net_dns_ArcDns_nameservers;
extern jobject SF_arc_net_dns_ArcDns_nameserverProviders;

#define VTABLE_arc_net_dns_ArcDns_hashCode_R_int 0
typedef jint (*func_arc_net_dns_ArcDns_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_net_dns_ArcDns_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_net_dns_ArcDns_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_net_dns_ArcDns_clone_R_java_lang_Object 2
typedef jobject (*func_arc_net_dns_ArcDns_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_net_dns_ArcDns_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_net_dns_ArcDns_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_net_dns_ArcDns_toString_R_java_lang_String 4
typedef jobject (*func_arc_net_dns_ArcDns_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_net_dns_ArcDns_finalize 5
typedef void (*func_arc_net_dns_ArcDns_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_net_dns_ArcDns_notify 6
typedef void (*func_arc_net_dns_ArcDns_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_net_dns_ArcDns_notifyAll 7
typedef void (*func_arc_net_dns_ArcDns_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_net_dns_ArcDns_wait 8
typedef void (*func_arc_net_dns_ArcDns_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_net_dns_ArcDns_wait_long 9
typedef void (*func_arc_net_dns_ArcDns_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_net_dns_ArcDns_wait_long_int 10
typedef void (*func_arc_net_dns_ArcDns_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_arc_net_dns_ArcDns(jobject object, jint mark, jint depth);
void clinit_arc_net_dns_ArcDns(jcontext ctx);
void init_arc_net_dns_ArcDns(jcontext ctx, jobject self);
jobject SM_arc_net_dns_ArcDns_getNameserverProviders_R_arc_struct_Seq(jcontext ctx);
void SM_arc_net_dns_ArcDns_setNameserverProviders_arc_struct_Seq(jcontext ctx, jobject param0);
jobject SM_arc_net_dns_ArcDns_getNameservers_R_arc_struct_Seq(jcontext ctx);
void SM_arc_net_dns_ArcDns_refreshNameservers(jcontext ctx);
jobject SM_arc_net_dns_ArcDns_getSrvRecords_java_lang_String_R_arc_struct_Seq(jcontext ctx, jobject param0);
jobject SM_arc_net_dns_ArcDns_getSrvRecords_java_lang_String_java_net_InetSocketAddress_R_arc_struct_Seq(jcontext ctx, jobject param0, jobject param1);

#ifdef __cplusplus
}
#endif

#endif
