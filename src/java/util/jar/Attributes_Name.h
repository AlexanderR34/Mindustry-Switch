#ifndef HEADER_java_util_jar_Attributes$Name
#define HEADER_java_util_jar_Attributes$Name

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_jar_Attributes$Name {
	java_lang_Object parent;
	jref F_name;
} java_util_jar_Attributes$Name;

extern Class class_java_util_jar_Attributes$Name;

extern jobject SF_java_util_jar_Attributes$Name_CLASS_PATH;
extern jobject SF_java_util_jar_Attributes$Name_MANIFEST_VERSION;
extern jobject SF_java_util_jar_Attributes$Name_MAIN_CLASS;
extern jobject SF_java_util_jar_Attributes$Name_SIGNATURE_VERSION;
extern jobject SF_java_util_jar_Attributes$Name_CONTENT_TYPE;
extern jobject SF_java_util_jar_Attributes$Name_SEALED;
extern jobject SF_java_util_jar_Attributes$Name_IMPLEMENTATION_TITLE;
extern jobject SF_java_util_jar_Attributes$Name_IMPLEMENTATION_VERSION;
extern jobject SF_java_util_jar_Attributes$Name_IMPLEMENTATION_VENDOR;
extern jobject SF_java_util_jar_Attributes$Name_SPECIFICATION_TITLE;
extern jobject SF_java_util_jar_Attributes$Name_SPECIFICATION_VERSION;
extern jobject SF_java_util_jar_Attributes$Name_SPECIFICATION_VENDOR;
extern jobject SF_java_util_jar_Attributes$Name_EXTENSION_LIST;
extern jobject SF_java_util_jar_Attributes$Name_EXTENSION_NAME;
extern jobject SF_java_util_jar_Attributes$Name_EXTENSION_INSTALLATION;
extern jobject SF_java_util_jar_Attributes$Name_IMPLEMENTATION_VENDOR_ID;
extern jobject SF_java_util_jar_Attributes$Name_IMPLEMENTATION_URL;
extern jobject SF_java_util_jar_Attributes$Name_NAME;

#define VTABLE_java_util_jar_Attributes$Name_hashCode_R_int 0
typedef jint (*func_java_util_jar_Attributes$Name_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_jar_Attributes$Name_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_jar_Attributes$Name_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_jar_Attributes$Name_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_jar_Attributes$Name_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_jar_Attributes$Name_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_jar_Attributes$Name_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_jar_Attributes$Name_toString_R_java_lang_String 4
typedef jobject (*func_java_util_jar_Attributes$Name_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_jar_Attributes$Name_finalize 5
typedef void (*func_java_util_jar_Attributes$Name_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_jar_Attributes$Name_notify 6
typedef void (*func_java_util_jar_Attributes$Name_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_jar_Attributes$Name_notifyAll 7
typedef void (*func_java_util_jar_Attributes$Name_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_jar_Attributes$Name_wait 8
typedef void (*func_java_util_jar_Attributes$Name_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_jar_Attributes$Name_wait_long 9
typedef void (*func_java_util_jar_Attributes$Name_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_jar_Attributes$Name_wait_long_int 10
typedef void (*func_java_util_jar_Attributes$Name_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_util_jar_Attributes$Name_getName_R_java_lang_String 11
typedef jobject (*func_java_util_jar_Attributes$Name_getName_R_java_lang_String)(jcontext ctx, jobject self);

void mark_java_util_jar_Attributes$Name(jobject object, jint mark, jint depth);
void clinit_java_util_jar_Attributes$Name(jcontext ctx);
void init_java_util_jar_Attributes$Name_java_lang_String(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_jar_Attributes$Name_getName_R_java_lang_String(jcontext ctx, jobject self);
jbool M_java_util_jar_Attributes$Name_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jint M_java_util_jar_Attributes$Name_hashCode_R_int(jcontext ctx, jobject self);
jobject M_java_util_jar_Attributes$Name_toString_R_java_lang_String(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
