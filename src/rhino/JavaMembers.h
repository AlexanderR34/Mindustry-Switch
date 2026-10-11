#ifndef HEADER_rhino_JavaMembers
#define HEADER_rhino_JavaMembers

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_JavaMembers {
	java_lang_Object parent;
	jref F_cl;
	jref F_members;
	jref F_fieldAndMethods;
	jref F_staticMembers;
	jref F_staticFieldAndMethods;
	jref F_ctors;
} rhino_JavaMembers;

extern Class class_rhino_JavaMembers;


#define VTABLE_rhino_JavaMembers_hashCode_R_int 0
typedef jint (*func_rhino_JavaMembers_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_JavaMembers_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_JavaMembers_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_JavaMembers_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_JavaMembers_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_JavaMembers_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_JavaMembers_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_JavaMembers_toString_R_java_lang_String 4
typedef jobject (*func_rhino_JavaMembers_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_JavaMembers_finalize 5
typedef void (*func_rhino_JavaMembers_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_JavaMembers_notify 6
typedef void (*func_rhino_JavaMembers_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_JavaMembers_notifyAll 7
typedef void (*func_rhino_JavaMembers_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_JavaMembers_wait 8
typedef void (*func_rhino_JavaMembers_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_JavaMembers_wait_long 9
typedef void (*func_rhino_JavaMembers_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_JavaMembers_wait_long_int 10
typedef void (*func_rhino_JavaMembers_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_rhino_JavaMembers_has_java_lang_String_boolean_R_boolean 11
typedef jbool (*func_rhino_JavaMembers_has_java_lang_String_boolean_R_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_rhino_JavaMembers_get_rhino_Scriptable_java_lang_String_java_lang_Object_boolean_R_java_lang_Object 12
typedef jobject (*func_rhino_JavaMembers_get_rhino_Scriptable_java_lang_String_java_lang_Object_boolean_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jbool param3);
#define VTABLE_rhino_JavaMembers_put_rhino_Scriptable_java_lang_String_java_lang_Object_java_lang_Object_boolean 13
typedef void (*func_rhino_JavaMembers_put_rhino_Scriptable_java_lang_String_java_lang_Object_java_lang_Object_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jbool param4);
#define VTABLE_rhino_JavaMembers_getIds_boolean_R_Array1_java_lang_Object 14
typedef jobject (*func_rhino_JavaMembers_getIds_boolean_R_Array1_java_lang_Object)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_rhino_JavaMembers_findExplicitFunction_java_lang_String_boolean_R_rhino_MemberBox 15
typedef jobject (*func_rhino_JavaMembers_findExplicitFunction_java_lang_String_boolean_R_rhino_MemberBox)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_rhino_JavaMembers_getExplicitFunction_rhino_Scriptable_java_lang_String_java_lang_Object_boolean_R_java_lang_Object 16
typedef jobject (*func_rhino_JavaMembers_getExplicitFunction_rhino_Scriptable_java_lang_String_java_lang_Object_boolean_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jbool param3);
#define VTABLE_rhino_JavaMembers_reflect_rhino_Scriptable_boolean_boolean 17
typedef void (*func_rhino_JavaMembers_reflect_rhino_Scriptable_boolean_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1, jbool param2);
#define VTABLE_rhino_JavaMembers_getAccessibleConstructors_boolean_R_Array1_java_lang_reflect_Constructor 18
typedef jobject (*func_rhino_JavaMembers_getAccessibleConstructors_boolean_R_Array1_java_lang_reflect_Constructor)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_rhino_JavaMembers_getAccessibleFields_boolean_boolean_R_Array1_java_lang_reflect_Field 19
typedef jobject (*func_rhino_JavaMembers_getAccessibleFields_boolean_boolean_R_Array1_java_lang_reflect_Field)(jcontext ctx, jobject self, jbool param0, jbool param1);
#define VTABLE_rhino_JavaMembers_findGetter_boolean_java_util_Map_java_lang_String_java_lang_String_R_rhino_MemberBox 20
typedef jobject (*func_rhino_JavaMembers_findGetter_boolean_java_util_Map_java_lang_String_java_lang_String_R_rhino_MemberBox)(jcontext ctx, jobject self, jbool param0, jobject param1, jobject param2, jobject param3);
#define VTABLE_rhino_JavaMembers_getFieldAndMethodsObjects_rhino_Scriptable_java_lang_Object_boolean_R_java_util_Map 21
typedef jobject (*func_rhino_JavaMembers_getFieldAndMethodsObjects_rhino_Scriptable_java_lang_Object_boolean_R_java_util_Map)(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2);
#define VTABLE_rhino_JavaMembers_reportMemberNotFound_java_lang_String_R_java_lang_RuntimeException 22
typedef jobject (*func_rhino_JavaMembers_reportMemberNotFound_java_lang_String_R_java_lang_RuntimeException)(jcontext ctx, jobject self, jobject param0);

void mark_rhino_JavaMembers(jobject object, jint mark, jint depth);
void clinit_rhino_JavaMembers(jcontext ctx);
void init_rhino_JavaMembers_rhino_Scriptable_java_lang_Class(jcontext ctx, jobject self, jobject param0, jobject param1);
void init_rhino_JavaMembers_rhino_Scriptable_java_lang_Class_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2);
jbool M_rhino_JavaMembers_has_java_lang_String_boolean_R_boolean(jcontext ctx, jobject self, jobject param0, jbool param1);
jobject M_rhino_JavaMembers_get_rhino_Scriptable_java_lang_String_java_lang_Object_boolean_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jbool param3);
void M_rhino_JavaMembers_put_rhino_Scriptable_java_lang_String_java_lang_Object_java_lang_Object_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jbool param4);
jobject M_rhino_JavaMembers_getIds_boolean_R_Array1_java_lang_Object(jcontext ctx, jobject self, jbool param0);
jobject SM_rhino_JavaMembers_javaSignature_java_lang_Class_R_java_lang_String(jcontext ctx, jobject param0);
jobject SM_rhino_JavaMembers_liveConnectSignature_Array1_java_lang_Class_R_java_lang_String(jcontext ctx, jobject param0);
jobject M_rhino_JavaMembers_findExplicitFunction_java_lang_String_boolean_R_rhino_MemberBox(jcontext ctx, jobject self, jobject param0, jbool param1);
jobject M_rhino_JavaMembers_getExplicitFunction_rhino_Scriptable_java_lang_String_java_lang_Object_boolean_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jbool param3);
jobject SM_rhino_JavaMembers_discoverAccessibleMethods_java_lang_Class_boolean_boolean_R_Array1_java_lang_reflect_Method(jcontext ctx, jobject param0, jbool param1, jbool param2);
void SM_rhino_JavaMembers_discoverAccessibleMethods_java_lang_Class_java_util_Map_boolean_boolean(jcontext ctx, jobject param0, jobject param1, jbool param2, jbool param3);
void M_rhino_JavaMembers_reflect_rhino_Scriptable_boolean_boolean(jcontext ctx, jobject self, jobject param0, jbool param1, jbool param2);
jobject M_rhino_JavaMembers_getAccessibleConstructors_boolean_R_Array1_java_lang_reflect_Constructor(jcontext ctx, jobject self, jbool param0);
jobject M_rhino_JavaMembers_getAccessibleFields_boolean_boolean_R_Array1_java_lang_reflect_Field(jcontext ctx, jobject self, jbool param0, jbool param1);
jobject M_rhino_JavaMembers_findGetter_boolean_java_util_Map_java_lang_String_java_lang_String_R_rhino_MemberBox(jcontext ctx, jobject self, jbool param0, jobject param1, jobject param2, jobject param3);
jobject SM_rhino_JavaMembers_extractGetMethod_Array1_rhino_MemberBox_boolean_R_rhino_MemberBox(jcontext ctx, jobject param0, jbool param1);
jobject SM_rhino_JavaMembers_extractSetMethod_java_lang_Class_Array1_rhino_MemberBox_boolean_R_rhino_MemberBox(jcontext ctx, jobject param0, jobject param1, jbool param2);
jobject SM_rhino_JavaMembers_extractSetMethod_Array1_rhino_MemberBox_boolean_R_rhino_MemberBox(jcontext ctx, jobject param0, jbool param1);
jobject M_rhino_JavaMembers_getFieldAndMethodsObjects_rhino_Scriptable_java_lang_Object_boolean_R_java_util_Map(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2);
jobject SM_rhino_JavaMembers_lookupClass_rhino_Scriptable_java_lang_Class_java_lang_Class_boolean_R_rhino_JavaMembers(jcontext ctx, jobject param0, jobject param1, jobject param2, jbool param3);
jobject M_rhino_JavaMembers_reportMemberNotFound_java_lang_String_R_java_lang_RuntimeException(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
