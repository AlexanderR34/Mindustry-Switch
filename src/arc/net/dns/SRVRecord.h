#ifndef HEADER_arc_net_dns_SRVRecord
#define HEADER_arc_net_dns_SRVRecord

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/lang/Comparable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_net_dns_SRVRecord {
	java_lang_Object parent;
	jlong F_ttl;
	jint F_priority;
	jint F_weight;
	jint F_port;
	jref F_target;
} arc_net_dns_SRVRecord;

extern Class class_arc_net_dns_SRVRecord;


#define VTABLE_arc_net_dns_SRVRecord_hashCode_R_int 0
typedef jint (*func_arc_net_dns_SRVRecord_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_net_dns_SRVRecord_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_net_dns_SRVRecord_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_net_dns_SRVRecord_clone_R_java_lang_Object 2
typedef jobject (*func_arc_net_dns_SRVRecord_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_net_dns_SRVRecord_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_net_dns_SRVRecord_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_net_dns_SRVRecord_toString_R_java_lang_String 4
typedef jobject (*func_arc_net_dns_SRVRecord_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_net_dns_SRVRecord_finalize 5
typedef void (*func_arc_net_dns_SRVRecord_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_net_dns_SRVRecord_notify 6
typedef void (*func_arc_net_dns_SRVRecord_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_net_dns_SRVRecord_notifyAll 7
typedef void (*func_arc_net_dns_SRVRecord_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_net_dns_SRVRecord_wait 8
typedef void (*func_arc_net_dns_SRVRecord_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_net_dns_SRVRecord_wait_long 9
typedef void (*func_arc_net_dns_SRVRecord_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_net_dns_SRVRecord_wait_long_int 10
typedef void (*func_arc_net_dns_SRVRecord_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_net_dns_SRVRecord_compareTo_java_lang_Object_R_int 11
typedef jint (*func_arc_net_dns_SRVRecord_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_net_dns_SRVRecord_compareTo_arc_net_dns_SRVRecord_R_int 12
typedef jint (*func_arc_net_dns_SRVRecord_compareTo_arc_net_dns_SRVRecord_R_int)(jcontext ctx, jobject self, jobject param0);

void mark_arc_net_dns_SRVRecord(jobject object, jint mark, jint depth);
void clinit_arc_net_dns_SRVRecord(jcontext ctx);
void init_arc_net_dns_SRVRecord_long_int_int_int_java_lang_String(jcontext ctx, jobject self, jlong param0, jint param1, jint param2, jint param3, jobject param4);
jobject M_arc_net_dns_SRVRecord_toString_R_java_lang_String(jcontext ctx, jobject self);
jint M_arc_net_dns_SRVRecord_compareTo_arc_net_dns_SRVRecord_R_int(jcontext ctx, jobject self, jobject param0);
jint M_arc_net_dns_SRVRecord_compareTo_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
