#ifndef HEADER_arc_assets_AssetLoadingTask
#define HEADER_arc_assets_AssetLoadingTask

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/util/concurrent/Callable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_assets_AssetLoadingTask {
	java_lang_Object parent;
	jref F_assetDesc;
	jref F_loader;
	jref F_executor;
	jlong F_startTime;
	jref F_manager;
	volatile jbool F_asyncDone;
	volatile jbool F_dependenciesLoaded;
	volatile jref F_dependencies;
	volatile jref F_depsFuture;
	volatile jref F_loadFuture;
	volatile jref F_asset;
	jint F_ticks;
	volatile jbool F_cancel;
} arc_assets_AssetLoadingTask;

extern Class class_arc_assets_AssetLoadingTask;


#define VTABLE_arc_assets_AssetLoadingTask_hashCode_R_int 0
typedef jint (*func_arc_assets_AssetLoadingTask_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_assets_AssetLoadingTask_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_assets_AssetLoadingTask_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_assets_AssetLoadingTask_clone_R_java_lang_Object 2
typedef jobject (*func_arc_assets_AssetLoadingTask_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_assets_AssetLoadingTask_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_assets_AssetLoadingTask_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_assets_AssetLoadingTask_toString_R_java_lang_String 4
typedef jobject (*func_arc_assets_AssetLoadingTask_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_assets_AssetLoadingTask_finalize 5
typedef void (*func_arc_assets_AssetLoadingTask_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_assets_AssetLoadingTask_notify 6
typedef void (*func_arc_assets_AssetLoadingTask_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_assets_AssetLoadingTask_notifyAll 7
typedef void (*func_arc_assets_AssetLoadingTask_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_assets_AssetLoadingTask_wait 8
typedef void (*func_arc_assets_AssetLoadingTask_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_assets_AssetLoadingTask_wait_long 9
typedef void (*func_arc_assets_AssetLoadingTask_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_assets_AssetLoadingTask_wait_long_int 10
typedef void (*func_arc_assets_AssetLoadingTask_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_assets_AssetLoadingTask_call_R_java_lang_Object 11
typedef jobject (*func_arc_assets_AssetLoadingTask_call_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_assets_AssetLoadingTask_call_R_java_lang_Void 12
typedef jobject (*func_arc_assets_AssetLoadingTask_call_R_java_lang_Void)(jcontext ctx, jobject self);
#define VTABLE_arc_assets_AssetLoadingTask_update_R_boolean 13
typedef jbool (*func_arc_assets_AssetLoadingTask_update_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_assets_AssetLoadingTask_handleSyncLoader 14
typedef void (*func_arc_assets_AssetLoadingTask_handleSyncLoader)(jcontext ctx, jobject self);
#define VTABLE_arc_assets_AssetLoadingTask_handleAsyncLoader 15
typedef void (*func_arc_assets_AssetLoadingTask_handleAsyncLoader)(jcontext ctx, jobject self);
#define VTABLE_arc_assets_AssetLoadingTask_resolve_arc_assets_loaders_AssetLoader_arc_assets_AssetDescriptor_R_arc_files_Fi 16
typedef jobject (*func_arc_assets_AssetLoadingTask_resolve_arc_assets_loaders_AssetLoader_arc_assets_AssetDescriptor_R_arc_files_Fi)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_assets_AssetLoadingTask_getAsset_R_java_lang_Object 17
typedef jobject (*func_arc_assets_AssetLoadingTask_getAsset_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_assets_AssetLoadingTask_removeDuplicates_arc_struct_Seq 18
typedef void (*func_arc_assets_AssetLoadingTask_removeDuplicates_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0);

void mark_arc_assets_AssetLoadingTask(jobject object, jint mark, jint depth);
void clinit_arc_assets_AssetLoadingTask(jcontext ctx);
void init_arc_assets_AssetLoadingTask_arc_assets_AssetManager_arc_assets_AssetDescriptor_arc_assets_loaders_AssetLoader_java_util_concurrent_ExecutorService(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3);
jobject M_arc_assets_AssetLoadingTask_call_R_java_lang_Void(jcontext ctx, jobject self);
jbool M_arc_assets_AssetLoadingTask_update_R_boolean(jcontext ctx, jobject self);
void M_arc_assets_AssetLoadingTask_handleSyncLoader(jcontext ctx, jobject self);
void M_arc_assets_AssetLoadingTask_handleAsyncLoader(jcontext ctx, jobject self);
jobject M_arc_assets_AssetLoadingTask_resolve_arc_assets_loaders_AssetLoader_arc_assets_AssetDescriptor_R_arc_files_Fi(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_arc_assets_AssetLoadingTask_getAsset_R_java_lang_Object(jcontext ctx, jobject self);
void M_arc_assets_AssetLoadingTask_removeDuplicates_arc_struct_Seq(jcontext ctx, jobject self, jobject param0);
jobject M_arc_assets_AssetLoadingTask_call_R_java_lang_Object(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
