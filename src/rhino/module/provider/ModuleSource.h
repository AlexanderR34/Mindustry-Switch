#ifndef HEADER_rhino_module_provider_ModuleSource
#define HEADER_rhino_module_provider_ModuleSource

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_module_provider_ModuleSource {
	java_lang_Object parent;
	jref F_reader;
	jref F_uri;
	jref F_base;
	jref F_validator;
} rhino_module_provider_ModuleSource;

extern Class class_rhino_module_provider_ModuleSource;


#define VTABLE_rhino_module_provider_ModuleSource_hashCode_R_int 0
typedef jint (*func_rhino_module_provider_ModuleSource_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_module_provider_ModuleSource_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_module_provider_ModuleSource_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_module_provider_ModuleSource_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_module_provider_ModuleSource_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_module_provider_ModuleSource_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_module_provider_ModuleSource_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_module_provider_ModuleSource_toString_R_java_lang_String 4
typedef jobject (*func_rhino_module_provider_ModuleSource_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_module_provider_ModuleSource_finalize 5
typedef void (*func_rhino_module_provider_ModuleSource_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_module_provider_ModuleSource_notify 6
typedef void (*func_rhino_module_provider_ModuleSource_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_module_provider_ModuleSource_notifyAll 7
typedef void (*func_rhino_module_provider_ModuleSource_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_module_provider_ModuleSource_wait 8
typedef void (*func_rhino_module_provider_ModuleSource_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_module_provider_ModuleSource_wait_long 9
typedef void (*func_rhino_module_provider_ModuleSource_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_module_provider_ModuleSource_wait_long_int 10
typedef void (*func_rhino_module_provider_ModuleSource_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_rhino_module_provider_ModuleSource_getReader_R_java_io_Reader 11
typedef jobject (*func_rhino_module_provider_ModuleSource_getReader_R_java_io_Reader)(jcontext ctx, jobject self);
#define VTABLE_rhino_module_provider_ModuleSource_getUri_R_java_net_URI 12
typedef jobject (*func_rhino_module_provider_ModuleSource_getUri_R_java_net_URI)(jcontext ctx, jobject self);
#define VTABLE_rhino_module_provider_ModuleSource_getBase_R_java_net_URI 13
typedef jobject (*func_rhino_module_provider_ModuleSource_getBase_R_java_net_URI)(jcontext ctx, jobject self);
#define VTABLE_rhino_module_provider_ModuleSource_getValidator_R_java_lang_Object 14
typedef jobject (*func_rhino_module_provider_ModuleSource_getValidator_R_java_lang_Object)(jcontext ctx, jobject self);

void mark_rhino_module_provider_ModuleSource(jobject object, jint mark, jint depth);
void clinit_rhino_module_provider_ModuleSource(jcontext ctx);
void init_rhino_module_provider_ModuleSource_java_io_Reader_java_net_URI_java_net_URI_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3);
jobject M_rhino_module_provider_ModuleSource_getReader_R_java_io_Reader(jcontext ctx, jobject self);
jobject M_rhino_module_provider_ModuleSource_getUri_R_java_net_URI(jcontext ctx, jobject self);
jobject M_rhino_module_provider_ModuleSource_getBase_R_java_net_URI(jcontext ctx, jobject self);
jobject M_rhino_module_provider_ModuleSource_getValidator_R_java_lang_Object(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
