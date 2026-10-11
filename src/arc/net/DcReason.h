#ifndef HEADER_arc_net_DcReason
#define HEADER_arc_net_DcReason

#include "Clearwing.h"
#include "java/lang/Enum.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_net_DcReason {
	java_lang_Enum parent;
} arc_net_DcReason;

extern Class class_arc_net_DcReason;

extern jobject SF_arc_net_DcReason_timeout;
extern jobject SF_arc_net_DcReason_closed;
extern jobject SF_arc_net_DcReason_error;
extern jobject SF_arc_net_DcReason_$VALUES;

#define VTABLE_arc_net_DcReason_hashCode_R_int 0
typedef jint (*func_arc_net_DcReason_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_net_DcReason_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_net_DcReason_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_net_DcReason_clone_R_java_lang_Object 2
typedef jobject (*func_arc_net_DcReason_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_net_DcReason_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_net_DcReason_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_net_DcReason_toString_R_java_lang_String 4
typedef jobject (*func_arc_net_DcReason_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_net_DcReason_finalize 5
typedef void (*func_arc_net_DcReason_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_net_DcReason_notify 6
typedef void (*func_arc_net_DcReason_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_net_DcReason_notifyAll 7
typedef void (*func_arc_net_DcReason_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_net_DcReason_wait 8
typedef void (*func_arc_net_DcReason_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_net_DcReason_wait_long 9
typedef void (*func_arc_net_DcReason_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_net_DcReason_wait_long_int 10
typedef void (*func_arc_net_DcReason_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_net_DcReason_compareTo_java_lang_Object_R_int 11
typedef jint (*func_arc_net_DcReason_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_net_DcReason_compareTo_java_lang_Enum_R_int 12
typedef jint (*func_arc_net_DcReason_compareTo_java_lang_Enum_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_net_DcReason_name_R_java_lang_String 13
typedef jobject (*func_arc_net_DcReason_name_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_net_DcReason_ordinal_R_int 14
typedef jint (*func_arc_net_DcReason_ordinal_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_net_DcReason_getDeclaringClass_R_java_lang_Class 15
typedef jobject (*func_arc_net_DcReason_getDeclaringClass_R_java_lang_Class)(jcontext ctx, jobject self);

void mark_arc_net_DcReason(jobject object, jint mark, jint depth);
void clinit_arc_net_DcReason(jcontext ctx);
jobject SM_arc_net_DcReason_values_R_Array1_arc_net_DcReason(jcontext ctx);
jobject SM_arc_net_DcReason_valueOf_java_lang_String_R_arc_net_DcReason(jcontext ctx, jobject param0);
void init_arc_net_DcReason_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1);
jobject SM_arc_net_DcReason_$values_R_Array1_arc_net_DcReason(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
