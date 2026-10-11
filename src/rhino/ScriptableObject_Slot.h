#ifndef HEADER_rhino_ScriptableObject$Slot
#define HEADER_rhino_ScriptableObject$Slot

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_ScriptableObject$Slot {
	java_lang_Object parent;
	jref F_name;
	jint F_indexOrHash;
	jshort F_attributes;
	jref F_value;
	jref F_next;
	jref F_orderedNext;
} rhino_ScriptableObject$Slot;

extern Class class_rhino_ScriptableObject$Slot;


#define VTABLE_rhino_ScriptableObject$Slot_hashCode_R_int 0
typedef jint (*func_rhino_ScriptableObject$Slot_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ScriptableObject$Slot_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_ScriptableObject$Slot_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ScriptableObject$Slot_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_ScriptableObject$Slot_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_ScriptableObject$Slot_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_ScriptableObject$Slot_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_ScriptableObject$Slot_toString_R_java_lang_String 4
typedef jobject (*func_rhino_ScriptableObject$Slot_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_ScriptableObject$Slot_finalize 5
typedef void (*func_rhino_ScriptableObject$Slot_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_ScriptableObject$Slot_notify 6
typedef void (*func_rhino_ScriptableObject$Slot_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_ScriptableObject$Slot_notifyAll 7
typedef void (*func_rhino_ScriptableObject$Slot_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_ScriptableObject$Slot_wait 8
typedef void (*func_rhino_ScriptableObject$Slot_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_ScriptableObject$Slot_wait_long 9
typedef void (*func_rhino_ScriptableObject$Slot_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_ScriptableObject$Slot_wait_long_int 10
typedef void (*func_rhino_ScriptableObject$Slot_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_rhino_ScriptableObject$Slot_setValue_java_lang_Object_rhino_Scriptable_rhino_Scriptable_R_boolean 11
typedef jbool (*func_rhino_ScriptableObject$Slot_setValue_java_lang_Object_rhino_Scriptable_rhino_Scriptable_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_rhino_ScriptableObject$Slot_getValue_rhino_Scriptable_R_java_lang_Object 12
typedef jobject (*func_rhino_ScriptableObject$Slot_getValue_rhino_Scriptable_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ScriptableObject$Slot_getAttributes_R_int 13
typedef jint (*func_rhino_ScriptableObject$Slot_getAttributes_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ScriptableObject$Slot_setAttributes_int 14
typedef void (*func_rhino_ScriptableObject$Slot_setAttributes_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ScriptableObject$Slot_getPropertyDescriptor_rhino_Context_rhino_Scriptable_R_rhino_ScriptableObject 15
typedef jobject (*func_rhino_ScriptableObject$Slot_getPropertyDescriptor_rhino_Context_rhino_Scriptable_R_rhino_ScriptableObject)(jcontext ctx, jobject self, jobject param0, jobject param1);

void mark_rhino_ScriptableObject$Slot(jobject object, jint mark, jint depth);
void clinit_rhino_ScriptableObject$Slot(jcontext ctx);
void init_rhino_ScriptableObject$Slot_java_lang_Object_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
jbool M_rhino_ScriptableObject$Slot_setValue_java_lang_Object_rhino_Scriptable_rhino_Scriptable_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
jobject M_rhino_ScriptableObject$Slot_getValue_rhino_Scriptable_R_java_lang_Object(jcontext ctx, jobject self, jobject param0);
jint M_rhino_ScriptableObject$Slot_getAttributes_R_int(jcontext ctx, jobject self);
void M_rhino_ScriptableObject$Slot_setAttributes_int(jcontext ctx, jobject self, jint param0);
jobject M_rhino_ScriptableObject$Slot_getPropertyDescriptor_rhino_Context_rhino_Scriptable_R_rhino_ScriptableObject(jcontext ctx, jobject self, jobject param0, jobject param1);

#ifdef __cplusplus
}
#endif

#endif
