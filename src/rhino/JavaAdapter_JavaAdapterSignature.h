#ifndef HEADER_rhino_JavaAdapter$JavaAdapterSignature
#define HEADER_rhino_JavaAdapter$JavaAdapterSignature

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_JavaAdapter$JavaAdapterSignature {
	java_lang_Object parent;
	jref F_superClass;
	jref F_interfaces;
	jref F_names;
} rhino_JavaAdapter$JavaAdapterSignature;

extern Class class_rhino_JavaAdapter$JavaAdapterSignature;


#define VTABLE_rhino_JavaAdapter$JavaAdapterSignature_hashCode_R_int 0
typedef jint (*func_rhino_JavaAdapter$JavaAdapterSignature_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_JavaAdapter$JavaAdapterSignature_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_JavaAdapter$JavaAdapterSignature_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_JavaAdapter$JavaAdapterSignature_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_JavaAdapter$JavaAdapterSignature_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_JavaAdapter$JavaAdapterSignature_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_JavaAdapter$JavaAdapterSignature_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_JavaAdapter$JavaAdapterSignature_toString_R_java_lang_String 4
typedef jobject (*func_rhino_JavaAdapter$JavaAdapterSignature_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_JavaAdapter$JavaAdapterSignature_finalize 5
typedef void (*func_rhino_JavaAdapter$JavaAdapterSignature_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_JavaAdapter$JavaAdapterSignature_notify 6
typedef void (*func_rhino_JavaAdapter$JavaAdapterSignature_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_JavaAdapter$JavaAdapterSignature_notifyAll 7
typedef void (*func_rhino_JavaAdapter$JavaAdapterSignature_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_JavaAdapter$JavaAdapterSignature_wait 8
typedef void (*func_rhino_JavaAdapter$JavaAdapterSignature_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_JavaAdapter$JavaAdapterSignature_wait_long 9
typedef void (*func_rhino_JavaAdapter$JavaAdapterSignature_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_JavaAdapter$JavaAdapterSignature_wait_long_int 10
typedef void (*func_rhino_JavaAdapter$JavaAdapterSignature_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_rhino_JavaAdapter$JavaAdapterSignature(jobject object, jint mark, jint depth);
void clinit_rhino_JavaAdapter$JavaAdapterSignature(jcontext ctx);
void init_rhino_JavaAdapter$JavaAdapterSignature_java_lang_Class_Array1_java_lang_Class_rhino_ObjToIntMap(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
jbool M_rhino_JavaAdapter$JavaAdapterSignature_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jint M_rhino_JavaAdapter$JavaAdapterSignature_hashCode_R_int(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
