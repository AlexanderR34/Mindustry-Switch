#ifndef HEADER_rhino_ScriptableObject$GetterSlot
#define HEADER_rhino_ScriptableObject$GetterSlot

#include "Clearwing.h"
#include "rhino/ScriptableObject_Slot.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_ScriptableObject$GetterSlot {
	rhino_ScriptableObject$Slot parent;
	jref F_getter;
	jref F_setter;
} rhino_ScriptableObject$GetterSlot;

extern Class class_rhino_ScriptableObject$GetterSlot;


#define VTABLE_rhino_ScriptableObject$GetterSlot_hashCode_R_int 0
typedef jint (*func_rhino_ScriptableObject$GetterSlot_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ScriptableObject$GetterSlot_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_ScriptableObject$GetterSlot_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ScriptableObject$GetterSlot_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_ScriptableObject$GetterSlot_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_ScriptableObject$GetterSlot_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_ScriptableObject$GetterSlot_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_ScriptableObject$GetterSlot_toString_R_java_lang_String 4
typedef jobject (*func_rhino_ScriptableObject$GetterSlot_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_ScriptableObject$GetterSlot_finalize 5
typedef void (*func_rhino_ScriptableObject$GetterSlot_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_ScriptableObject$GetterSlot_notify 6
typedef void (*func_rhino_ScriptableObject$GetterSlot_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_ScriptableObject$GetterSlot_notifyAll 7
typedef void (*func_rhino_ScriptableObject$GetterSlot_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_ScriptableObject$GetterSlot_wait 8
typedef void (*func_rhino_ScriptableObject$GetterSlot_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_ScriptableObject$GetterSlot_wait_long 9
typedef void (*func_rhino_ScriptableObject$GetterSlot_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_ScriptableObject$GetterSlot_wait_long_int 10
typedef void (*func_rhino_ScriptableObject$GetterSlot_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_rhino_ScriptableObject$GetterSlot_setValue_java_lang_Object_rhino_Scriptable_rhino_Scriptable_R_boolean 11
typedef jbool (*func_rhino_ScriptableObject$GetterSlot_setValue_java_lang_Object_rhino_Scriptable_rhino_Scriptable_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_rhino_ScriptableObject$GetterSlot_getValue_rhino_Scriptable_R_java_lang_Object 12
typedef jobject (*func_rhino_ScriptableObject$GetterSlot_getValue_rhino_Scriptable_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ScriptableObject$GetterSlot_getAttributes_R_int 13
typedef jint (*func_rhino_ScriptableObject$GetterSlot_getAttributes_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ScriptableObject$GetterSlot_setAttributes_int 14
typedef void (*func_rhino_ScriptableObject$GetterSlot_setAttributes_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ScriptableObject$GetterSlot_getPropertyDescriptor_rhino_Context_rhino_Scriptable_R_rhino_ScriptableObject 15
typedef jobject (*func_rhino_ScriptableObject$GetterSlot_getPropertyDescriptor_rhino_Context_rhino_Scriptable_R_rhino_ScriptableObject)(jcontext ctx, jobject self, jobject param0, jobject param1);

void mark_rhino_ScriptableObject$GetterSlot(jobject object, jint mark, jint depth);
void clinit_rhino_ScriptableObject$GetterSlot(jcontext ctx);
void init_rhino_ScriptableObject$GetterSlot_java_lang_Object_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
jobject M_rhino_ScriptableObject$GetterSlot_getPropertyDescriptor_rhino_Context_rhino_Scriptable_R_rhino_ScriptableObject(jcontext ctx, jobject self, jobject param0, jobject param1);
jbool M_rhino_ScriptableObject$GetterSlot_setValue_java_lang_Object_rhino_Scriptable_rhino_Scriptable_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
jobject M_rhino_ScriptableObject$GetterSlot_getValue_rhino_Scriptable_R_java_lang_Object(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
