#ifndef HEADER_mindustry_world_blocks_storage_Unloader$ContainerStat
#define HEADER_mindustry_world_blocks_storage_Unloader$ContainerStat

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "arc/util/pooling/Pool_Poolable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_world_blocks_storage_Unloader$ContainerStat {
	java_lang_Object parent;
	jref F_building;
	jfloat F_loadFactor;
	jbool F_canLoad;
	jbool F_canUnload;
	jbool F_notStorage;
	jint F_lastUsed;
} mindustry_world_blocks_storage_Unloader$ContainerStat;

extern Class class_mindustry_world_blocks_storage_Unloader$ContainerStat;


#define VTABLE_mindustry_world_blocks_storage_Unloader$ContainerStat_hashCode_R_int 0
typedef jint (*func_mindustry_world_blocks_storage_Unloader$ContainerStat_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_blocks_storage_Unloader$ContainerStat_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_world_blocks_storage_Unloader$ContainerStat_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_blocks_storage_Unloader$ContainerStat_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_world_blocks_storage_Unloader$ContainerStat_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_blocks_storage_Unloader$ContainerStat_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_world_blocks_storage_Unloader$ContainerStat_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_blocks_storage_Unloader$ContainerStat_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_world_blocks_storage_Unloader$ContainerStat_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_blocks_storage_Unloader$ContainerStat_finalize 5
typedef void (*func_mindustry_world_blocks_storage_Unloader$ContainerStat_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_blocks_storage_Unloader$ContainerStat_notify 6
typedef void (*func_mindustry_world_blocks_storage_Unloader$ContainerStat_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_blocks_storage_Unloader$ContainerStat_notifyAll 7
typedef void (*func_mindustry_world_blocks_storage_Unloader$ContainerStat_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_blocks_storage_Unloader$ContainerStat_wait 8
typedef void (*func_mindustry_world_blocks_storage_Unloader$ContainerStat_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_blocks_storage_Unloader$ContainerStat_wait_long 9
typedef void (*func_mindustry_world_blocks_storage_Unloader$ContainerStat_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_world_blocks_storage_Unloader$ContainerStat_wait_long_int 10
typedef void (*func_mindustry_world_blocks_storage_Unloader$ContainerStat_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_world_blocks_storage_Unloader$ContainerStat_reset 11
typedef void (*func_mindustry_world_blocks_storage_Unloader$ContainerStat_reset)(jcontext ctx, jobject self);

void mark_mindustry_world_blocks_storage_Unloader$ContainerStat(jobject object, jint mark, jint depth);
void clinit_mindustry_world_blocks_storage_Unloader$ContainerStat(jcontext ctx);
void init_mindustry_world_blocks_storage_Unloader$ContainerStat(jcontext ctx, jobject self);
void M_mindustry_world_blocks_storage_Unloader$ContainerStat_reset(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
