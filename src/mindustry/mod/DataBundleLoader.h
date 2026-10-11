#ifndef HEADER_mindustry_mod_DataBundleLoader
#define HEADER_mindustry_mod_DataBundleLoader

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_mod_DataBundleLoader {
	java_lang_Object parent;
	jref F_originalProperties;
} mindustry_mod_DataBundleLoader;

extern Class class_mindustry_mod_DataBundleLoader;


#define VTABLE_mindustry_mod_DataBundleLoader_hashCode_R_int 0
typedef jint (*func_mindustry_mod_DataBundleLoader_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_DataBundleLoader_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_mod_DataBundleLoader_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_DataBundleLoader_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_mod_DataBundleLoader_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_DataBundleLoader_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_mod_DataBundleLoader_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_DataBundleLoader_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_mod_DataBundleLoader_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_DataBundleLoader_finalize 5
typedef void (*func_mindustry_mod_DataBundleLoader_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_DataBundleLoader_notify 6
typedef void (*func_mindustry_mod_DataBundleLoader_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_DataBundleLoader_notifyAll 7
typedef void (*func_mindustry_mod_DataBundleLoader_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_DataBundleLoader_wait 8
typedef void (*func_mindustry_mod_DataBundleLoader_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_DataBundleLoader_wait_long 9
typedef void (*func_mindustry_mod_DataBundleLoader_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_mod_DataBundleLoader_wait_long_int 10
typedef void (*func_mindustry_mod_DataBundleLoader_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_mod_DataBundleLoader_load_arc_struct_Seq 11
typedef void (*func_mindustry_mod_DataBundleLoader_load_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_DataBundleLoader_unload 12
typedef void (*func_mindustry_mod_DataBundleLoader_unload)(jcontext ctx, jobject self);

void mark_mindustry_mod_DataBundleLoader(jobject object, jint mark, jint depth);
void clinit_mindustry_mod_DataBundleLoader(jcontext ctx);
void init_mindustry_mod_DataBundleLoader(jcontext ctx, jobject self);
void M_mindustry_mod_DataBundleLoader_load_arc_struct_Seq(jcontext ctx, jobject self, jobject param0);
void M_mindustry_mod_DataBundleLoader_unload(jcontext ctx, jobject self);
void SM_mindustry_mod_DataBundleLoader_lambda$unload$0_arc_util_I18NBundle_arc_struct_ObjectMap(jcontext ctx, jobject param0, jobject param1);

#ifdef __cplusplus
}
#endif

#endif
