#ifndef HEADER_rhino_module_provider_ParsedContentType
#define HEADER_rhino_module_provider_ParsedContentType

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_module_provider_ParsedContentType {
	java_lang_Object parent;
	jref F_contentType;
	jref F_encoding;
} rhino_module_provider_ParsedContentType;

extern Class class_rhino_module_provider_ParsedContentType;


#define VTABLE_rhino_module_provider_ParsedContentType_hashCode_R_int 0
typedef jint (*func_rhino_module_provider_ParsedContentType_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_module_provider_ParsedContentType_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_module_provider_ParsedContentType_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_module_provider_ParsedContentType_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_module_provider_ParsedContentType_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_module_provider_ParsedContentType_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_module_provider_ParsedContentType_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_module_provider_ParsedContentType_toString_R_java_lang_String 4
typedef jobject (*func_rhino_module_provider_ParsedContentType_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_module_provider_ParsedContentType_finalize 5
typedef void (*func_rhino_module_provider_ParsedContentType_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_module_provider_ParsedContentType_notify 6
typedef void (*func_rhino_module_provider_ParsedContentType_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_module_provider_ParsedContentType_notifyAll 7
typedef void (*func_rhino_module_provider_ParsedContentType_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_module_provider_ParsedContentType_wait 8
typedef void (*func_rhino_module_provider_ParsedContentType_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_module_provider_ParsedContentType_wait_long 9
typedef void (*func_rhino_module_provider_ParsedContentType_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_module_provider_ParsedContentType_wait_long_int 10
typedef void (*func_rhino_module_provider_ParsedContentType_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_rhino_module_provider_ParsedContentType_getContentType_R_java_lang_String 11
typedef jobject (*func_rhino_module_provider_ParsedContentType_getContentType_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_module_provider_ParsedContentType_getEncoding_R_java_lang_String 12
typedef jobject (*func_rhino_module_provider_ParsedContentType_getEncoding_R_java_lang_String)(jcontext ctx, jobject self);

void mark_rhino_module_provider_ParsedContentType(jobject object, jint mark, jint depth);
void clinit_rhino_module_provider_ParsedContentType(jcontext ctx);
void init_rhino_module_provider_ParsedContentType_java_lang_String(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_module_provider_ParsedContentType_getContentType_R_java_lang_String(jcontext ctx, jobject self);
jobject M_rhino_module_provider_ParsedContentType_getEncoding_R_java_lang_String(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
