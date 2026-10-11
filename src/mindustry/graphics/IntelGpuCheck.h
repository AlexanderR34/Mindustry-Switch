#ifndef HEADER_mindustry_graphics_IntelGpuCheck
#define HEADER_mindustry_graphics_IntelGpuCheck

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_graphics_IntelGpuCheck {
	java_lang_Object parent;
} mindustry_graphics_IntelGpuCheck;

extern Class class_mindustry_graphics_IntelGpuCheck;

extern jbool SF_mindustry_graphics_IntelGpuCheck_wasIntel;
extern jbool SF_mindustry_graphics_IntelGpuCheck_checkedLastLaunch;

#define VTABLE_mindustry_graphics_IntelGpuCheck_hashCode_R_int 0
typedef jint (*func_mindustry_graphics_IntelGpuCheck_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_IntelGpuCheck_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_graphics_IntelGpuCheck_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_graphics_IntelGpuCheck_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_graphics_IntelGpuCheck_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_IntelGpuCheck_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_graphics_IntelGpuCheck_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_IntelGpuCheck_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_graphics_IntelGpuCheck_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_IntelGpuCheck_finalize 5
typedef void (*func_mindustry_graphics_IntelGpuCheck_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_IntelGpuCheck_notify 6
typedef void (*func_mindustry_graphics_IntelGpuCheck_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_IntelGpuCheck_notifyAll 7
typedef void (*func_mindustry_graphics_IntelGpuCheck_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_IntelGpuCheck_wait 8
typedef void (*func_mindustry_graphics_IntelGpuCheck_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_IntelGpuCheck_wait_long 9
typedef void (*func_mindustry_graphics_IntelGpuCheck_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_graphics_IntelGpuCheck_wait_long_int 10
typedef void (*func_mindustry_graphics_IntelGpuCheck_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_mindustry_graphics_IntelGpuCheck(jobject object, jint mark, jint depth);
void clinit_mindustry_graphics_IntelGpuCheck(jcontext ctx);
void init_mindustry_graphics_IntelGpuCheck(jcontext ctx, jobject self);
void SM_mindustry_graphics_IntelGpuCheck_init_java_lang_String(jcontext ctx, jobject param0);
jbool SM_mindustry_graphics_IntelGpuCheck_wasIntel_R_boolean(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
