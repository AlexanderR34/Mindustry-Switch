#ifndef HEADER_rhino_MemberBox
#define HEADER_rhino_MemberBox

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_MemberBox {
	java_lang_Object parent;
	jref F_memberObject;
	jref F_argTypes;
	jref F_delegateTo;
	jbool F_vararg;
} rhino_MemberBox;

extern Class class_rhino_MemberBox;


#define VTABLE_rhino_MemberBox_hashCode_R_int 0
typedef jint (*func_rhino_MemberBox_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_MemberBox_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_MemberBox_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_MemberBox_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_MemberBox_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_MemberBox_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_MemberBox_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_MemberBox_toString_R_java_lang_String 4
typedef jobject (*func_rhino_MemberBox_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_MemberBox_finalize 5
typedef void (*func_rhino_MemberBox_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_MemberBox_notify 6
typedef void (*func_rhino_MemberBox_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_MemberBox_notifyAll 7
typedef void (*func_rhino_MemberBox_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_MemberBox_wait 8
typedef void (*func_rhino_MemberBox_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_MemberBox_wait_long 9
typedef void (*func_rhino_MemberBox_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_MemberBox_wait_long_int 10
typedef void (*func_rhino_MemberBox_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_rhino_MemberBox_init_java_lang_reflect_Method 11
typedef void (*func_rhino_MemberBox_init_java_lang_reflect_Method)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_MemberBox_init_java_lang_reflect_Constructor 12
typedef void (*func_rhino_MemberBox_init_java_lang_reflect_Constructor)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_MemberBox_method_R_java_lang_reflect_Method 13
typedef jobject (*func_rhino_MemberBox_method_R_java_lang_reflect_Method)(jcontext ctx, jobject self);
#define VTABLE_rhino_MemberBox_ctor_R_java_lang_reflect_Constructor 14
typedef jobject (*func_rhino_MemberBox_ctor_R_java_lang_reflect_Constructor)(jcontext ctx, jobject self);
#define VTABLE_rhino_MemberBox_member_R_java_lang_reflect_Member 15
typedef jobject (*func_rhino_MemberBox_member_R_java_lang_reflect_Member)(jcontext ctx, jobject self);
#define VTABLE_rhino_MemberBox_isMethod_R_boolean 16
typedef jbool (*func_rhino_MemberBox_isMethod_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_MemberBox_isCtor_R_boolean 17
typedef jbool (*func_rhino_MemberBox_isCtor_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_MemberBox_isStatic_R_boolean 18
typedef jbool (*func_rhino_MemberBox_isStatic_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_MemberBox_isPublic_R_boolean 19
typedef jbool (*func_rhino_MemberBox_isPublic_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_MemberBox_getName_R_java_lang_String 20
typedef jobject (*func_rhino_MemberBox_getName_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_MemberBox_getDeclaringClass_R_java_lang_Class 21
typedef jobject (*func_rhino_MemberBox_getDeclaringClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_MemberBox_toJavaDeclaration_R_java_lang_String 22
typedef jobject (*func_rhino_MemberBox_toJavaDeclaration_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_MemberBox_invoke_java_lang_Object_Array1_java_lang_Object_R_java_lang_Object 23
typedef jobject (*func_rhino_MemberBox_invoke_java_lang_Object_Array1_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_MemberBox_newInstance_Array1_java_lang_Object_R_java_lang_Object 24
typedef jobject (*func_rhino_MemberBox_newInstance_Array1_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);

void mark_rhino_MemberBox(jobject object, jint mark, jint depth);
void clinit_rhino_MemberBox(jcontext ctx);
void init_rhino_MemberBox_java_lang_reflect_Method(jcontext ctx, jobject self, jobject param0);
void init_rhino_MemberBox_java_lang_reflect_Constructor(jcontext ctx, jobject self, jobject param0);
void M_rhino_MemberBox_init_java_lang_reflect_Method(jcontext ctx, jobject self, jobject param0);
void M_rhino_MemberBox_init_java_lang_reflect_Constructor(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_MemberBox_method_R_java_lang_reflect_Method(jcontext ctx, jobject self);
jobject M_rhino_MemberBox_ctor_R_java_lang_reflect_Constructor(jcontext ctx, jobject self);
jobject M_rhino_MemberBox_member_R_java_lang_reflect_Member(jcontext ctx, jobject self);
jbool M_rhino_MemberBox_isMethod_R_boolean(jcontext ctx, jobject self);
jbool M_rhino_MemberBox_isCtor_R_boolean(jcontext ctx, jobject self);
jbool M_rhino_MemberBox_isStatic_R_boolean(jcontext ctx, jobject self);
jbool M_rhino_MemberBox_isPublic_R_boolean(jcontext ctx, jobject self);
jobject M_rhino_MemberBox_getName_R_java_lang_String(jcontext ctx, jobject self);
jobject M_rhino_MemberBox_getDeclaringClass_R_java_lang_Class(jcontext ctx, jobject self);
jobject M_rhino_MemberBox_toJavaDeclaration_R_java_lang_String(jcontext ctx, jobject self);
jobject M_rhino_MemberBox_toString_R_java_lang_String(jcontext ctx, jobject self);
jobject M_rhino_MemberBox_invoke_java_lang_Object_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_rhino_MemberBox_newInstance_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0);
jobject SM_rhino_MemberBox_searchAccessibleMethod_java_lang_reflect_Method_Array1_java_lang_Class_R_java_lang_reflect_Method(jcontext ctx, jobject param0, jobject param1);

#ifdef __cplusplus
}
#endif

#endif
