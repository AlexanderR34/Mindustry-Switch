#ifndef HEADER_arc_net_dns_WellKnownNameserverProvider
#define HEADER_arc_net_dns_WellKnownNameserverProvider

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "arc/net/dns/NameserverProvider.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_net_dns_WellKnownNameserverProvider {
	java_lang_Object parent;
	jref F_nameservers;
} arc_net_dns_WellKnownNameserverProvider;

extern Class class_arc_net_dns_WellKnownNameserverProvider;


#define VTABLE_arc_net_dns_WellKnownNameserverProvider_hashCode_R_int 0
typedef jint (*func_arc_net_dns_WellKnownNameserverProvider_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_net_dns_WellKnownNameserverProvider_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_net_dns_WellKnownNameserverProvider_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_net_dns_WellKnownNameserverProvider_clone_R_java_lang_Object 2
typedef jobject (*func_arc_net_dns_WellKnownNameserverProvider_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_net_dns_WellKnownNameserverProvider_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_net_dns_WellKnownNameserverProvider_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_net_dns_WellKnownNameserverProvider_toString_R_java_lang_String 4
typedef jobject (*func_arc_net_dns_WellKnownNameserverProvider_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_net_dns_WellKnownNameserverProvider_finalize 5
typedef void (*func_arc_net_dns_WellKnownNameserverProvider_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_net_dns_WellKnownNameserverProvider_notify 6
typedef void (*func_arc_net_dns_WellKnownNameserverProvider_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_net_dns_WellKnownNameserverProvider_notifyAll 7
typedef void (*func_arc_net_dns_WellKnownNameserverProvider_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_net_dns_WellKnownNameserverProvider_wait 8
typedef void (*func_arc_net_dns_WellKnownNameserverProvider_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_net_dns_WellKnownNameserverProvider_wait_long 9
typedef void (*func_arc_net_dns_WellKnownNameserverProvider_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_net_dns_WellKnownNameserverProvider_wait_long_int 10
typedef void (*func_arc_net_dns_WellKnownNameserverProvider_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_net_dns_WellKnownNameserverProvider_getNameservers_R_arc_struct_Seq 11
typedef jobject (*func_arc_net_dns_WellKnownNameserverProvider_getNameservers_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_arc_net_dns_WellKnownNameserverProvider_isEnabled_R_boolean 12
typedef jbool (*func_arc_net_dns_WellKnownNameserverProvider_isEnabled_R_boolean)(jcontext ctx, jobject self);

void mark_arc_net_dns_WellKnownNameserverProvider(jobject object, jint mark, jint depth);
void clinit_arc_net_dns_WellKnownNameserverProvider(jcontext ctx);
void init_arc_net_dns_WellKnownNameserverProvider(jcontext ctx, jobject self);
jobject M_arc_net_dns_WellKnownNameserverProvider_getNameservers_R_arc_struct_Seq(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
