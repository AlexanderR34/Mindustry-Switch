#ifndef HEADER_mindustry_graphics_NvGpuInfo
#define HEADER_mindustry_graphics_NvGpuInfo

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_graphics_NvGpuInfo {
	java_lang_Object parent;
} mindustry_graphics_NvGpuInfo;

extern Class class_mindustry_graphics_NvGpuInfo;

extern jint SF_mindustry_graphics_NvGpuInfo_GL_GPU_MEM_INFO_TOTAL_AVAILABLE_MEM_NVX;
extern jint SF_mindustry_graphics_NvGpuInfo_GL_GPU_MEM_INFO_CURRENT_AVAILABLE_MEM_NVX;
extern jbool SF_mindustry_graphics_NvGpuInfo_supported;
extern jbool SF_mindustry_graphics_NvGpuInfo_initialized;

#define VTABLE_mindustry_graphics_NvGpuInfo_hashCode_R_int 0
typedef jint (*func_mindustry_graphics_NvGpuInfo_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_NvGpuInfo_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_graphics_NvGpuInfo_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_graphics_NvGpuInfo_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_graphics_NvGpuInfo_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_NvGpuInfo_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_graphics_NvGpuInfo_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_NvGpuInfo_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_graphics_NvGpuInfo_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_NvGpuInfo_finalize 5
typedef void (*func_mindustry_graphics_NvGpuInfo_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_NvGpuInfo_notify 6
typedef void (*func_mindustry_graphics_NvGpuInfo_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_NvGpuInfo_notifyAll 7
typedef void (*func_mindustry_graphics_NvGpuInfo_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_NvGpuInfo_wait 8
typedef void (*func_mindustry_graphics_NvGpuInfo_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_NvGpuInfo_wait_long 9
typedef void (*func_mindustry_graphics_NvGpuInfo_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_graphics_NvGpuInfo_wait_long_int 10
typedef void (*func_mindustry_graphics_NvGpuInfo_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_mindustry_graphics_NvGpuInfo(jobject object, jint mark, jint depth);
void clinit_mindustry_graphics_NvGpuInfo(jcontext ctx);
void init_mindustry_graphics_NvGpuInfo(jcontext ctx, jobject self);
jint SM_mindustry_graphics_NvGpuInfo_getMaxMemoryKB_R_int(jcontext ctx);
jint SM_mindustry_graphics_NvGpuInfo_getAvailableMemoryKB_R_int(jcontext ctx);
jbool SM_mindustry_graphics_NvGpuInfo_hasMemoryInfo_R_boolean(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
