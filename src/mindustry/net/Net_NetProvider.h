#ifndef HEADER_mindustry_net_Net$NetProvider
#define HEADER_mindustry_net_Net$NetProvider

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_net_Net$NetProvider {
	java_lang_Object parent;
} mindustry_net_Net$NetProvider;

extern Class class_mindustry_net_Net$NetProvider;


#define INDEX_mindustry_net_Net$NetProvider_sendAllServer_java_lang_Object_java_lang_Iterable_boolean 0
typedef void (*func_mindustry_net_Net$NetProvider_sendAllServer_java_lang_Object_java_lang_Iterable_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2);
#define INDEX_mindustry_net_Net$NetProvider_sendAllServer_java_lang_Object_boolean 1
typedef void (*func_mindustry_net_Net$NetProvider_sendAllServer_java_lang_Object_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define INDEX_mindustry_net_Net$NetProvider_sendExceptServer_mindustry_net_NetConnection_java_lang_Object_boolean 2
typedef void (*func_mindustry_net_Net$NetProvider_sendExceptServer_mindustry_net_NetConnection_java_lang_Object_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2);
#define INDEX_mindustry_net_Net$NetProvider_connectClient_java_lang_String_int_java_lang_Runnable 3
typedef void (*func_mindustry_net_Net$NetProvider_connectClient_java_lang_String_int_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2);
#define INDEX_mindustry_net_Net$NetProvider_sendClient_java_lang_Object_boolean 4
typedef void (*func_mindustry_net_Net$NetProvider_sendClient_java_lang_Object_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define INDEX_mindustry_net_Net$NetProvider_disconnectClient 5
typedef void (*func_mindustry_net_Net$NetProvider_disconnectClient)(jcontext ctx, jobject self);
#define INDEX_mindustry_net_Net$NetProvider_discoverServers_arc_func_Cons_java_lang_Runnable 6
typedef void (*func_mindustry_net_Net$NetProvider_discoverServers_arc_func_Cons_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define INDEX_mindustry_net_Net$NetProvider_pingHost_java_lang_String_int_arc_func_Cons_arc_func_Cons 7
typedef void (*func_mindustry_net_Net$NetProvider_pingHost_java_lang_String_int_arc_func_Cons_arc_func_Cons)(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jobject param3);
#define INDEX_mindustry_net_Net$NetProvider_hostServer_int 8
typedef void (*func_mindustry_net_Net$NetProvider_hostServer_int)(jcontext ctx, jobject self, jint param0);
#define INDEX_mindustry_net_Net$NetProvider_getConnections_R_java_lang_Iterable 9
typedef jobject (*func_mindustry_net_Net$NetProvider_getConnections_R_java_lang_Iterable)(jcontext ctx, jobject self);
#define INDEX_mindustry_net_Net$NetProvider_closeServer 10
typedef void (*func_mindustry_net_Net$NetProvider_closeServer)(jcontext ctx, jobject self);
#define INDEX_mindustry_net_Net$NetProvider_dispose 11
typedef void (*func_mindustry_net_Net$NetProvider_dispose)(jcontext ctx, jobject self);
#define INDEX_mindustry_net_Net$NetProvider_setConnectFilter_arc_net_Server$ServerConnectFilter 12
typedef void (*func_mindustry_net_Net$NetProvider_setConnectFilter_arc_net_Server$ServerConnectFilter)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_net_Net$NetProvider_getConnectFilter_R_arc_net_Server$ServerConnectFilter 13
typedef jobject (*func_mindustry_net_Net$NetProvider_getConnectFilter_R_arc_net_Server$ServerConnectFilter)(jcontext ctx, jobject self);

void mark_mindustry_net_Net$NetProvider(jobject object, jint mark, jint depth);
void clinit_mindustry_net_Net$NetProvider(jcontext ctx);
void M_mindustry_net_Net$NetProvider_sendAllServer_java_lang_Object_java_lang_Iterable_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2);
void M_mindustry_net_Net$NetProvider_sendAllServer_java_lang_Object_boolean(jcontext ctx, jobject self, jobject param0, jbool param1);
void M_mindustry_net_Net$NetProvider_sendExceptServer_mindustry_net_NetConnection_java_lang_Object_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2);
void M_mindustry_net_Net$NetProvider_dispose(jcontext ctx, jobject self);
void M_mindustry_net_Net$NetProvider_setConnectFilter_arc_net_Server$ServerConnectFilter(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_net_Net$NetProvider_getConnectFilter_R_arc_net_Server$ServerConnectFilter(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
