#ifndef HEADER_rhino_TopLevel$Builtins
#define HEADER_rhino_TopLevel$Builtins

#include "Clearwing.h"
#include "java/lang/Enum.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_TopLevel$Builtins {
	java_lang_Enum parent;
} rhino_TopLevel$Builtins;

extern Class class_rhino_TopLevel$Builtins;

extern jobject SF_rhino_TopLevel$Builtins_Object;
extern jobject SF_rhino_TopLevel$Builtins_Array;
extern jobject SF_rhino_TopLevel$Builtins_Function;
extern jobject SF_rhino_TopLevel$Builtins_String;
extern jobject SF_rhino_TopLevel$Builtins_Number;
extern jobject SF_rhino_TopLevel$Builtins_Boolean;
extern jobject SF_rhino_TopLevel$Builtins_RegExp;
extern jobject SF_rhino_TopLevel$Builtins_Error;
extern jobject SF_rhino_TopLevel$Builtins_Symbol;
extern jobject SF_rhino_TopLevel$Builtins_GeneratorFunction;
extern jobject SF_rhino_TopLevel$Builtins_$VALUES;

#define VTABLE_rhino_TopLevel$Builtins_hashCode_R_int 0
typedef jint (*func_rhino_TopLevel$Builtins_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_TopLevel$Builtins_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_TopLevel$Builtins_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_TopLevel$Builtins_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_TopLevel$Builtins_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_TopLevel$Builtins_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_TopLevel$Builtins_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_TopLevel$Builtins_toString_R_java_lang_String 4
typedef jobject (*func_rhino_TopLevel$Builtins_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_TopLevel$Builtins_finalize 5
typedef void (*func_rhino_TopLevel$Builtins_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_TopLevel$Builtins_notify 6
typedef void (*func_rhino_TopLevel$Builtins_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_TopLevel$Builtins_notifyAll 7
typedef void (*func_rhino_TopLevel$Builtins_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_TopLevel$Builtins_wait 8
typedef void (*func_rhino_TopLevel$Builtins_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_TopLevel$Builtins_wait_long 9
typedef void (*func_rhino_TopLevel$Builtins_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_TopLevel$Builtins_wait_long_int 10
typedef void (*func_rhino_TopLevel$Builtins_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_rhino_TopLevel$Builtins_compareTo_java_lang_Object_R_int 11
typedef jint (*func_rhino_TopLevel$Builtins_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_TopLevel$Builtins_compareTo_java_lang_Enum_R_int 12
typedef jint (*func_rhino_TopLevel$Builtins_compareTo_java_lang_Enum_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_TopLevel$Builtins_name_R_java_lang_String 13
typedef jobject (*func_rhino_TopLevel$Builtins_name_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_TopLevel$Builtins_ordinal_R_int 14
typedef jint (*func_rhino_TopLevel$Builtins_ordinal_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_TopLevel$Builtins_getDeclaringClass_R_java_lang_Class 15
typedef jobject (*func_rhino_TopLevel$Builtins_getDeclaringClass_R_java_lang_Class)(jcontext ctx, jobject self);

void mark_rhino_TopLevel$Builtins(jobject object, jint mark, jint depth);
void clinit_rhino_TopLevel$Builtins(jcontext ctx);
jobject SM_rhino_TopLevel$Builtins_values_R_Array1_rhino_TopLevel$Builtins(jcontext ctx);
jobject SM_rhino_TopLevel$Builtins_valueOf_java_lang_String_R_rhino_TopLevel$Builtins(jcontext ctx, jobject param0);
void init_rhino_TopLevel$Builtins_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1);

#ifdef __cplusplus
}
#endif

#endif
