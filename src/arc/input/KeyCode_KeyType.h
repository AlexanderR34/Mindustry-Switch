#ifndef HEADER_arc_input_KeyCode$KeyType
#define HEADER_arc_input_KeyCode$KeyType

#include "Clearwing.h"
#include "java/lang/Enum.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_input_KeyCode$KeyType {
	java_lang_Enum parent;
} arc_input_KeyCode$KeyType;

extern Class class_arc_input_KeyCode$KeyType;

extern jobject SF_arc_input_KeyCode$KeyType_key;
extern jobject SF_arc_input_KeyCode$KeyType_mouse;
extern jobject SF_arc_input_KeyCode$KeyType_controller;
extern jobject SF_arc_input_KeyCode$KeyType_scroll;
extern jobject SF_arc_input_KeyCode$KeyType_$VALUES;

#define VTABLE_arc_input_KeyCode$KeyType_hashCode_R_int 0
typedef jint (*func_arc_input_KeyCode$KeyType_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_input_KeyCode$KeyType_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_input_KeyCode$KeyType_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_input_KeyCode$KeyType_clone_R_java_lang_Object 2
typedef jobject (*func_arc_input_KeyCode$KeyType_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_input_KeyCode$KeyType_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_input_KeyCode$KeyType_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_input_KeyCode$KeyType_toString_R_java_lang_String 4
typedef jobject (*func_arc_input_KeyCode$KeyType_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_input_KeyCode$KeyType_finalize 5
typedef void (*func_arc_input_KeyCode$KeyType_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_input_KeyCode$KeyType_notify 6
typedef void (*func_arc_input_KeyCode$KeyType_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_input_KeyCode$KeyType_notifyAll 7
typedef void (*func_arc_input_KeyCode$KeyType_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_input_KeyCode$KeyType_wait 8
typedef void (*func_arc_input_KeyCode$KeyType_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_input_KeyCode$KeyType_wait_long 9
typedef void (*func_arc_input_KeyCode$KeyType_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_input_KeyCode$KeyType_wait_long_int 10
typedef void (*func_arc_input_KeyCode$KeyType_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_input_KeyCode$KeyType_compareTo_java_lang_Object_R_int 11
typedef jint (*func_arc_input_KeyCode$KeyType_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_input_KeyCode$KeyType_compareTo_java_lang_Enum_R_int 12
typedef jint (*func_arc_input_KeyCode$KeyType_compareTo_java_lang_Enum_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_input_KeyCode$KeyType_name_R_java_lang_String 13
typedef jobject (*func_arc_input_KeyCode$KeyType_name_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_input_KeyCode$KeyType_ordinal_R_int 14
typedef jint (*func_arc_input_KeyCode$KeyType_ordinal_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_input_KeyCode$KeyType_getDeclaringClass_R_java_lang_Class 15
typedef jobject (*func_arc_input_KeyCode$KeyType_getDeclaringClass_R_java_lang_Class)(jcontext ctx, jobject self);

void mark_arc_input_KeyCode$KeyType(jobject object, jint mark, jint depth);
void clinit_arc_input_KeyCode$KeyType(jcontext ctx);
jobject SM_arc_input_KeyCode$KeyType_values_R_Array1_arc_input_KeyCode$KeyType(jcontext ctx);
jobject SM_arc_input_KeyCode$KeyType_valueOf_java_lang_String_R_arc_input_KeyCode$KeyType(jcontext ctx, jobject param0);
void init_arc_input_KeyCode$KeyType_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1);
jobject SM_arc_input_KeyCode$KeyType_$values_R_Array1_arc_input_KeyCode$KeyType(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
