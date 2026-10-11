#ifndef HEADER_rhino_BeanProperty
#define HEADER_rhino_BeanProperty

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_BeanProperty {
	java_lang_Object parent;
	jref F_getter;
	jref F_setter;
	jref F_setters;
} rhino_BeanProperty;

extern Class class_rhino_BeanProperty;


#define VTABLE_rhino_BeanProperty_hashCode_R_int 0
typedef jint (*func_rhino_BeanProperty_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_BeanProperty_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_BeanProperty_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_BeanProperty_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_BeanProperty_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_BeanProperty_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_BeanProperty_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_BeanProperty_toString_R_java_lang_String 4
typedef jobject (*func_rhino_BeanProperty_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_BeanProperty_finalize 5
typedef void (*func_rhino_BeanProperty_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_BeanProperty_notify 6
typedef void (*func_rhino_BeanProperty_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_BeanProperty_notifyAll 7
typedef void (*func_rhino_BeanProperty_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_BeanProperty_wait 8
typedef void (*func_rhino_BeanProperty_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_BeanProperty_wait_long 9
typedef void (*func_rhino_BeanProperty_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_BeanProperty_wait_long_int 10
typedef void (*func_rhino_BeanProperty_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_rhino_BeanProperty(jobject object, jint mark, jint depth);
void clinit_rhino_BeanProperty(jcontext ctx);
void init_rhino_BeanProperty_rhino_MemberBox_rhino_MemberBox_rhino_NativeJavaMethod(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);

#ifdef __cplusplus
}
#endif

#endif
