#ifndef HEADER_java_net_InetAddress$InetAddressHolder
#define HEADER_java_net_InetAddress$InetAddressHolder

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_net_InetAddress$InetAddressHolder {
	java_lang_Object parent;
	jref F_originalHostName;
	jref F_hostName;
	jint F_address;
	jint F_family;
} java_net_InetAddress$InetAddressHolder;

extern Class class_java_net_InetAddress$InetAddressHolder;


#define VTABLE_java_net_InetAddress$InetAddressHolder_hashCode_R_int 0
typedef jint (*func_java_net_InetAddress$InetAddressHolder_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_net_InetAddress$InetAddressHolder_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_net_InetAddress$InetAddressHolder_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_net_InetAddress$InetAddressHolder_clone_R_java_lang_Object 2
typedef jobject (*func_java_net_InetAddress$InetAddressHolder_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_net_InetAddress$InetAddressHolder_getClass_R_java_lang_Class 3
typedef jobject (*func_java_net_InetAddress$InetAddressHolder_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_net_InetAddress$InetAddressHolder_toString_R_java_lang_String 4
typedef jobject (*func_java_net_InetAddress$InetAddressHolder_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_net_InetAddress$InetAddressHolder_finalize 5
typedef void (*func_java_net_InetAddress$InetAddressHolder_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_net_InetAddress$InetAddressHolder_notify 6
typedef void (*func_java_net_InetAddress$InetAddressHolder_notify)(jcontext ctx, jobject self);
#define VTABLE_java_net_InetAddress$InetAddressHolder_notifyAll 7
typedef void (*func_java_net_InetAddress$InetAddressHolder_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_net_InetAddress$InetAddressHolder_wait 8
typedef void (*func_java_net_InetAddress$InetAddressHolder_wait)(jcontext ctx, jobject self);
#define VTABLE_java_net_InetAddress$InetAddressHolder_wait_long 9
typedef void (*func_java_net_InetAddress$InetAddressHolder_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_net_InetAddress$InetAddressHolder_wait_long_int 10
typedef void (*func_java_net_InetAddress$InetAddressHolder_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_net_InetAddress$InetAddressHolder_init_java_lang_String_int 11
typedef void (*func_java_net_InetAddress$InetAddressHolder_init_java_lang_String_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_java_net_InetAddress$InetAddressHolder_getHostName_R_java_lang_String 12
typedef jobject (*func_java_net_InetAddress$InetAddressHolder_getHostName_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_net_InetAddress$InetAddressHolder_getOriginalHostName_R_java_lang_String 13
typedef jobject (*func_java_net_InetAddress$InetAddressHolder_getOriginalHostName_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_net_InetAddress$InetAddressHolder_getAddress_R_int 14
typedef jint (*func_java_net_InetAddress$InetAddressHolder_getAddress_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_net_InetAddress$InetAddressHolder_getFamily_R_int 15
typedef jint (*func_java_net_InetAddress$InetAddressHolder_getFamily_R_int)(jcontext ctx, jobject self);

void mark_java_net_InetAddress$InetAddressHolder(jobject object, jint mark, jint depth);
void clinit_java_net_InetAddress$InetAddressHolder(jcontext ctx);
void init_java_net_InetAddress$InetAddressHolder(jcontext ctx, jobject self);
void init_java_net_InetAddress$InetAddressHolder_java_lang_String_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
void M_java_net_InetAddress$InetAddressHolder_init_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1);
jobject M_java_net_InetAddress$InetAddressHolder_getHostName_R_java_lang_String(jcontext ctx, jobject self);
jobject M_java_net_InetAddress$InetAddressHolder_getOriginalHostName_R_java_lang_String(jcontext ctx, jobject self);
jint M_java_net_InetAddress$InetAddressHolder_getAddress_R_int(jcontext ctx, jobject self);
jint M_java_net_InetAddress$InetAddressHolder_getFamily_R_int(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
