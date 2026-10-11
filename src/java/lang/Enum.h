#ifndef HEADER_java_lang_Enum
#define HEADER_java_lang_Enum

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/lang/Comparable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_lang_Enum {
	java_lang_Object parent;
	jref F_name;
	jint F_ordinal;
} java_lang_Enum;

extern Class class_java_lang_Enum;


#define VTABLE_java_lang_Enum_hashCode_R_int 0
typedef jint (*func_java_lang_Enum_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Enum_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_lang_Enum_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_Enum_clone_R_java_lang_Object 2
typedef jobject (*func_java_lang_Enum_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Enum_getClass_R_java_lang_Class 3
typedef jobject (*func_java_lang_Enum_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Enum_toString_R_java_lang_String 4
typedef jobject (*func_java_lang_Enum_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Enum_finalize 5
typedef void (*func_java_lang_Enum_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Enum_notify 6
typedef void (*func_java_lang_Enum_notify)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Enum_notifyAll 7
typedef void (*func_java_lang_Enum_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Enum_wait 8
typedef void (*func_java_lang_Enum_wait)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Enum_wait_long 9
typedef void (*func_java_lang_Enum_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_lang_Enum_wait_long_int 10
typedef void (*func_java_lang_Enum_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_lang_Enum_compareTo_java_lang_Object_R_int 11
typedef jint (*func_java_lang_Enum_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_Enum_compareTo_java_lang_Enum_R_int 12
typedef jint (*func_java_lang_Enum_compareTo_java_lang_Enum_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_Enum_name_R_java_lang_String 13
typedef jobject (*func_java_lang_Enum_name_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Enum_ordinal_R_int 14
typedef jint (*func_java_lang_Enum_ordinal_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Enum_getDeclaringClass_R_java_lang_Class 15
typedef jobject (*func_java_lang_Enum_getDeclaringClass_R_java_lang_Class)(jcontext ctx, jobject self);

void mark_java_lang_Enum(jobject object, jint mark, jint depth);
void clinit_java_lang_Enum(jcontext ctx);
void init_java_lang_Enum_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1);
jobject M_java_lang_Enum_clone_R_java_lang_Object(jcontext ctx, jobject self);
void SM_java_lang_Enum_setEnumValues_Array1_java_lang_Object_java_lang_Class(jcontext ctx, jobject param0, jobject param1);
jobject SM_java_lang_Enum_getEnumValues_java_lang_Class_R_Array1_java_lang_Object(jcontext ctx, jobject param0);
jobject SM_java_lang_Enum_valueOf_java_lang_Class_java_lang_String_R_java_lang_Enum(jcontext ctx, jobject param0, jobject param1);
jbool M_java_lang_Enum_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jint M_java_lang_Enum_hashCode_R_int(jcontext ctx, jobject self);
jobject M_java_lang_Enum_toString_R_java_lang_String(jcontext ctx, jobject self);
jint M_java_lang_Enum_compareTo_java_lang_Enum_R_int(jcontext ctx, jobject self, jobject param0);
jobject M_java_lang_Enum_name_R_java_lang_String(jcontext ctx, jobject self);
jint M_java_lang_Enum_ordinal_R_int(jcontext ctx, jobject self);
jobject M_java_lang_Enum_getDeclaringClass_R_java_lang_Class(jcontext ctx, jobject self);
jint M_java_lang_Enum_compareTo_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
