#ifndef HEADER_arc_net_dns_JndiContextNameserverProvider$Inner
#define HEADER_arc_net_dns_JndiContextNameserverProvider$Inner

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "arc/net/dns/NameserverProvider.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_net_dns_JndiContextNameserverProvider$Inner {
	java_lang_Object parent;
} arc_net_dns_JndiContextNameserverProvider$Inner;

extern Class class_arc_net_dns_JndiContextNameserverProvider$Inner;


#define VTABLE_arc_net_dns_JndiContextNameserverProvider$Inner_hashCode_R_int 0
typedef jint (*func_arc_net_dns_JndiContextNameserverProvider$Inner_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_net_dns_JndiContextNameserverProvider$Inner_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_net_dns_JndiContextNameserverProvider$Inner_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_net_dns_JndiContextNameserverProvider$Inner_clone_R_java_lang_Object 2
typedef jobject (*func_arc_net_dns_JndiContextNameserverProvider$Inner_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_net_dns_JndiContextNameserverProvider$Inner_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_net_dns_JndiContextNameserverProvider$Inner_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_net_dns_JndiContextNameserverProvider$Inner_toString_R_java_lang_String 4
typedef jobject (*func_arc_net_dns_JndiContextNameserverProvider$Inner_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_net_dns_JndiContextNameserverProvider$Inner_finalize 5
typedef void (*func_arc_net_dns_JndiContextNameserverProvider$Inner_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_net_dns_JndiContextNameserverProvider$Inner_notify 6
typedef void (*func_arc_net_dns_JndiContextNameserverProvider$Inner_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_net_dns_JndiContextNameserverProvider$Inner_notifyAll 7
typedef void (*func_arc_net_dns_JndiContextNameserverProvider$Inner_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_net_dns_JndiContextNameserverProvider$Inner_wait 8
typedef void (*func_arc_net_dns_JndiContextNameserverProvider$Inner_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_net_dns_JndiContextNameserverProvider$Inner_wait_long 9
typedef void (*func_arc_net_dns_JndiContextNameserverProvider$Inner_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_net_dns_JndiContextNameserverProvider$Inner_wait_long_int 10
typedef void (*func_arc_net_dns_JndiContextNameserverProvider$Inner_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_net_dns_JndiContextNameserverProvider$Inner_getNameservers_R_arc_struct_Seq 11
typedef jobject (*func_arc_net_dns_JndiContextNameserverProvider$Inner_getNameservers_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_arc_net_dns_JndiContextNameserverProvider$Inner_isEnabled_R_boolean 12
typedef jbool (*func_arc_net_dns_JndiContextNameserverProvider$Inner_isEnabled_R_boolean)(jcontext ctx, jobject self);

void mark_arc_net_dns_JndiContextNameserverProvider$Inner(jobject object, jint mark, jint depth);
void clinit_arc_net_dns_JndiContextNameserverProvider$Inner(jcontext ctx);
void init_arc_net_dns_JndiContextNameserverProvider$Inner(jcontext ctx, jobject self);
jobject M_arc_net_dns_JndiContextNameserverProvider$Inner_getNameservers_R_arc_struct_Seq(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
