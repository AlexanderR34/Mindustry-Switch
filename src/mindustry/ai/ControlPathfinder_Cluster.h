#ifndef HEADER_mindustry_ai_ControlPathfinder$Cluster
#define HEADER_mindustry_ai_ControlPathfinder$Cluster

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_ai_ControlPathfinder$Cluster {
	java_lang_Object parent;
	jref F_portals;
	jref F_portalConnections;
} mindustry_ai_ControlPathfinder$Cluster;

extern Class class_mindustry_ai_ControlPathfinder$Cluster;


#define VTABLE_mindustry_ai_ControlPathfinder$Cluster_hashCode_R_int 0
typedef jint (*func_mindustry_ai_ControlPathfinder$Cluster_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_ControlPathfinder$Cluster_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_ai_ControlPathfinder$Cluster_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ai_ControlPathfinder$Cluster_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_ai_ControlPathfinder$Cluster_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_ControlPathfinder$Cluster_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_ai_ControlPathfinder$Cluster_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_ControlPathfinder$Cluster_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_ai_ControlPathfinder$Cluster_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_ControlPathfinder$Cluster_finalize 5
typedef void (*func_mindustry_ai_ControlPathfinder$Cluster_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_ControlPathfinder$Cluster_notify 6
typedef void (*func_mindustry_ai_ControlPathfinder$Cluster_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_ControlPathfinder$Cluster_notifyAll 7
typedef void (*func_mindustry_ai_ControlPathfinder$Cluster_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_ControlPathfinder$Cluster_wait 8
typedef void (*func_mindustry_ai_ControlPathfinder$Cluster_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_ControlPathfinder$Cluster_wait_long 9
typedef void (*func_mindustry_ai_ControlPathfinder$Cluster_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_ai_ControlPathfinder$Cluster_wait_long_int 10
typedef void (*func_mindustry_ai_ControlPathfinder$Cluster_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_mindustry_ai_ControlPathfinder$Cluster(jobject object, jint mark, jint depth);
void clinit_mindustry_ai_ControlPathfinder$Cluster(jcontext ctx);
void init_mindustry_ai_ControlPathfinder$Cluster(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
