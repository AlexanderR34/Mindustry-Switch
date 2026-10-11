#ifndef HEADER_net_jpountz_util_Native$1
#define HEADER_net_jpountz_util_Native$1

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/io/FilenameFilter.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct net_jpountz_util_Native$1 {
	java_lang_Object parent;
	jref F_searchPattern;
} net_jpountz_util_Native$1;

extern Class class_net_jpountz_util_Native$1;


#define VTABLE_net_jpountz_util_Native$1_hashCode_R_int 0
typedef jint (*func_net_jpountz_util_Native$1_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_net_jpountz_util_Native$1_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_net_jpountz_util_Native$1_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_net_jpountz_util_Native$1_clone_R_java_lang_Object 2
typedef jobject (*func_net_jpountz_util_Native$1_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_net_jpountz_util_Native$1_getClass_R_java_lang_Class 3
typedef jobject (*func_net_jpountz_util_Native$1_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_net_jpountz_util_Native$1_toString_R_java_lang_String 4
typedef jobject (*func_net_jpountz_util_Native$1_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_net_jpountz_util_Native$1_finalize 5
typedef void (*func_net_jpountz_util_Native$1_finalize)(jcontext ctx, jobject self);
#define VTABLE_net_jpountz_util_Native$1_notify 6
typedef void (*func_net_jpountz_util_Native$1_notify)(jcontext ctx, jobject self);
#define VTABLE_net_jpountz_util_Native$1_notifyAll 7
typedef void (*func_net_jpountz_util_Native$1_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_net_jpountz_util_Native$1_wait 8
typedef void (*func_net_jpountz_util_Native$1_wait)(jcontext ctx, jobject self);
#define VTABLE_net_jpountz_util_Native$1_wait_long 9
typedef void (*func_net_jpountz_util_Native$1_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_net_jpountz_util_Native$1_wait_long_int 10
typedef void (*func_net_jpountz_util_Native$1_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_net_jpountz_util_Native$1_accept_java_io_File_java_lang_String_R_boolean 11
typedef jbool (*func_net_jpountz_util_Native$1_accept_java_io_File_java_lang_String_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1);

void mark_net_jpountz_util_Native$1(jobject object, jint mark, jint depth);
void clinit_net_jpountz_util_Native$1(jcontext ctx);
void init_net_jpountz_util_Native$1(jcontext ctx, jobject self);
jbool M_net_jpountz_util_Native$1_accept_java_io_File_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1);

#ifdef __cplusplus
}
#endif

#endif
