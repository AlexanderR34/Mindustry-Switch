#ifndef HEADER_arc_assets_AssetDescriptor
#define HEADER_arc_assets_AssetDescriptor

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_assets_AssetDescriptor {
	java_lang_Object parent;
	jref F_fileName;
	jref F_type;
	jref F_params;
	jref F_file;
	jref F_loaded;
	jref F_errored;
} arc_assets_AssetDescriptor;

extern Class class_arc_assets_AssetDescriptor;


#define VTABLE_arc_assets_AssetDescriptor_hashCode_R_int 0
typedef jint (*func_arc_assets_AssetDescriptor_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_assets_AssetDescriptor_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_assets_AssetDescriptor_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_assets_AssetDescriptor_clone_R_java_lang_Object 2
typedef jobject (*func_arc_assets_AssetDescriptor_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_assets_AssetDescriptor_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_assets_AssetDescriptor_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_assets_AssetDescriptor_toString_R_java_lang_String 4
typedef jobject (*func_arc_assets_AssetDescriptor_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_assets_AssetDescriptor_finalize 5
typedef void (*func_arc_assets_AssetDescriptor_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_assets_AssetDescriptor_notify 6
typedef void (*func_arc_assets_AssetDescriptor_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_assets_AssetDescriptor_notifyAll 7
typedef void (*func_arc_assets_AssetDescriptor_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_assets_AssetDescriptor_wait 8
typedef void (*func_arc_assets_AssetDescriptor_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_assets_AssetDescriptor_wait_long 9
typedef void (*func_arc_assets_AssetDescriptor_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_assets_AssetDescriptor_wait_long_int 10
typedef void (*func_arc_assets_AssetDescriptor_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_arc_assets_AssetDescriptor(jobject object, jint mark, jint depth);
void clinit_arc_assets_AssetDescriptor(jcontext ctx);
void init_arc_assets_AssetDescriptor_java_lang_Class(jcontext ctx, jobject self, jobject param0);
void init_arc_assets_AssetDescriptor_java_lang_String_java_lang_Class(jcontext ctx, jobject self, jobject param0, jobject param1);
void init_arc_assets_AssetDescriptor_arc_files_Fi_java_lang_Class(jcontext ctx, jobject self, jobject param0, jobject param1);
void init_arc_assets_AssetDescriptor_java_lang_String_java_lang_Class_arc_assets_AssetLoaderParameters(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
void init_arc_assets_AssetDescriptor_arc_files_Fi_java_lang_Class_arc_assets_AssetLoaderParameters(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
jobject M_arc_assets_AssetDescriptor_toString_R_java_lang_String(jcontext ctx, jobject self);
void SM_arc_assets_AssetDescriptor_lambda$new$0_java_lang_Object(jcontext ctx, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
