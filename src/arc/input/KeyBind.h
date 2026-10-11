#ifndef HEADER_arc_input_KeyBind
#define HEADER_arc_input_KeyBind

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_input_KeyBind {
	java_lang_Object parent;
	jref F_name;
	jref F_defaultValue;
	jref F_category;
	jref F_value;
} arc_input_KeyBind;

extern Class class_arc_input_KeyBind;

extern jobject SF_arc_input_KeyBind_all;

#define VTABLE_arc_input_KeyBind_hashCode_R_int 0
typedef jint (*func_arc_input_KeyBind_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_input_KeyBind_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_input_KeyBind_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_input_KeyBind_clone_R_java_lang_Object 2
typedef jobject (*func_arc_input_KeyBind_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_input_KeyBind_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_input_KeyBind_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_input_KeyBind_toString_R_java_lang_String 4
typedef jobject (*func_arc_input_KeyBind_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_input_KeyBind_finalize 5
typedef void (*func_arc_input_KeyBind_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_input_KeyBind_notify 6
typedef void (*func_arc_input_KeyBind_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_input_KeyBind_notifyAll 7
typedef void (*func_arc_input_KeyBind_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_input_KeyBind_wait 8
typedef void (*func_arc_input_KeyBind_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_input_KeyBind_wait_long 9
typedef void (*func_arc_input_KeyBind_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_input_KeyBind_wait_long_int 10
typedef void (*func_arc_input_KeyBind_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_input_KeyBind_save 11
typedef void (*func_arc_input_KeyBind_save)(jcontext ctx, jobject self);
#define VTABLE_arc_input_KeyBind_load 12
typedef void (*func_arc_input_KeyBind_load)(jcontext ctx, jobject self);
#define VTABLE_arc_input_KeyBind_resetToDefault 13
typedef void (*func_arc_input_KeyBind_resetToDefault)(jcontext ctx, jobject self);
#define VTABLE_arc_input_KeyBind_unset 14
typedef void (*func_arc_input_KeyBind_unset)(jcontext ctx, jobject self);
#define VTABLE_arc_input_KeyBind_isDefault_R_boolean 15
typedef jbool (*func_arc_input_KeyBind_isDefault_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_input_KeyBind_isUnset_R_boolean 16
typedef jbool (*func_arc_input_KeyBind_isUnset_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_input_KeyBind_settingsKey_R_java_lang_String 17
typedef jobject (*func_arc_input_KeyBind_settingsKey_R_java_lang_String)(jcontext ctx, jobject self);

void mark_arc_input_KeyBind(jobject object, jint mark, jint depth);
void clinit_arc_input_KeyBind(jcontext ctx);
jobject SM_arc_input_KeyBind_add_java_lang_String_arc_input_KeyBind$KeybindValue_java_lang_String_R_arc_input_KeyBind(jcontext ctx, jobject param0, jobject param1, jobject param2);
jobject SM_arc_input_KeyBind_add_java_lang_String_arc_input_KeyBind$KeybindValue_R_arc_input_KeyBind(jcontext ctx, jobject param0, jobject param1);
void SM_arc_input_KeyBind_resetAll(jcontext ctx);
void init_arc_input_KeyBind_java_lang_String_arc_input_KeyBind$KeybindValue_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
void M_arc_input_KeyBind_save(jcontext ctx, jobject self);
void M_arc_input_KeyBind_load(jcontext ctx, jobject self);
void M_arc_input_KeyBind_resetToDefault(jcontext ctx, jobject self);
void M_arc_input_KeyBind_unset(jcontext ctx, jobject self);
jbool M_arc_input_KeyBind_isDefault_R_boolean(jcontext ctx, jobject self);
jbool M_arc_input_KeyBind_isUnset_R_boolean(jcontext ctx, jobject self);
jobject M_arc_input_KeyBind_settingsKey_R_java_lang_String(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
