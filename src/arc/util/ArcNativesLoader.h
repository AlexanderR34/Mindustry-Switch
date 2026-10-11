#ifndef HEADER_arc_util_ArcNativesLoader
#define HEADER_arc_util_ArcNativesLoader

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_util_ArcNativesLoader {
	java_lang_Object parent;
} arc_util_ArcNativesLoader;

extern Class class_arc_util_ArcNativesLoader;

extern jbool SF_arc_util_ArcNativesLoader_disableNativesLoading;
extern jbool SF_arc_util_ArcNativesLoader_loaded;

#define VTABLE_arc_util_ArcNativesLoader_hashCode_R_int 0
typedef jint (*func_arc_util_ArcNativesLoader_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_util_ArcNativesLoader_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_util_ArcNativesLoader_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_ArcNativesLoader_clone_R_java_lang_Object 2
typedef jobject (*func_arc_util_ArcNativesLoader_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_util_ArcNativesLoader_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_util_ArcNativesLoader_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_util_ArcNativesLoader_toString_R_java_lang_String 4
typedef jobject (*func_arc_util_ArcNativesLoader_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_util_ArcNativesLoader_finalize 5
typedef void (*func_arc_util_ArcNativesLoader_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_util_ArcNativesLoader_notify 6
typedef void (*func_arc_util_ArcNativesLoader_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_util_ArcNativesLoader_notifyAll 7
typedef void (*func_arc_util_ArcNativesLoader_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_util_ArcNativesLoader_wait 8
typedef void (*func_arc_util_ArcNativesLoader_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_util_ArcNativesLoader_wait_long 9
typedef void (*func_arc_util_ArcNativesLoader_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_util_ArcNativesLoader_wait_long_int 10
typedef void (*func_arc_util_ArcNativesLoader_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_arc_util_ArcNativesLoader(jobject object, jint mark, jint depth);
void clinit_arc_util_ArcNativesLoader(jcontext ctx);
void init_arc_util_ArcNativesLoader(jcontext ctx, jobject self);
void SM_arc_util_ArcNativesLoader_load(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
