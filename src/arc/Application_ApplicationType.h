#ifndef HEADER_arc_Application$ApplicationType
#define HEADER_arc_Application$ApplicationType

#include "Clearwing.h"
#include "java/lang/Enum.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_Application$ApplicationType {
	java_lang_Enum parent;
} arc_Application$ApplicationType;

extern Class class_arc_Application$ApplicationType;

extern jobject SF_arc_Application$ApplicationType_android;
extern jobject SF_arc_Application$ApplicationType_desktop;
extern jobject SF_arc_Application$ApplicationType_headless;
extern jobject SF_arc_Application$ApplicationType_web;
extern jobject SF_arc_Application$ApplicationType_iOS;
extern jobject SF_arc_Application$ApplicationType_$VALUES;

#define VTABLE_arc_Application$ApplicationType_hashCode_R_int 0
typedef jint (*func_arc_Application$ApplicationType_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_Application$ApplicationType_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_Application$ApplicationType_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_Application$ApplicationType_clone_R_java_lang_Object 2
typedef jobject (*func_arc_Application$ApplicationType_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_Application$ApplicationType_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_Application$ApplicationType_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_Application$ApplicationType_toString_R_java_lang_String 4
typedef jobject (*func_arc_Application$ApplicationType_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_Application$ApplicationType_finalize 5
typedef void (*func_arc_Application$ApplicationType_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_Application$ApplicationType_notify 6
typedef void (*func_arc_Application$ApplicationType_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_Application$ApplicationType_notifyAll 7
typedef void (*func_arc_Application$ApplicationType_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_Application$ApplicationType_wait 8
typedef void (*func_arc_Application$ApplicationType_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_Application$ApplicationType_wait_long 9
typedef void (*func_arc_Application$ApplicationType_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_Application$ApplicationType_wait_long_int 10
typedef void (*func_arc_Application$ApplicationType_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_Application$ApplicationType_compareTo_java_lang_Object_R_int 11
typedef jint (*func_arc_Application$ApplicationType_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_Application$ApplicationType_compareTo_java_lang_Enum_R_int 12
typedef jint (*func_arc_Application$ApplicationType_compareTo_java_lang_Enum_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_Application$ApplicationType_name_R_java_lang_String 13
typedef jobject (*func_arc_Application$ApplicationType_name_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_Application$ApplicationType_ordinal_R_int 14
typedef jint (*func_arc_Application$ApplicationType_ordinal_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_Application$ApplicationType_getDeclaringClass_R_java_lang_Class 15
typedef jobject (*func_arc_Application$ApplicationType_getDeclaringClass_R_java_lang_Class)(jcontext ctx, jobject self);

void mark_arc_Application$ApplicationType(jobject object, jint mark, jint depth);
void clinit_arc_Application$ApplicationType(jcontext ctx);
jobject SM_arc_Application$ApplicationType_values_R_Array1_arc_Application$ApplicationType(jcontext ctx);
jobject SM_arc_Application$ApplicationType_valueOf_java_lang_String_R_arc_Application$ApplicationType(jcontext ctx, jobject param0);
void init_arc_Application$ApplicationType_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1);
jobject SM_arc_Application$ApplicationType_$values_R_Array1_arc_Application$ApplicationType(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
