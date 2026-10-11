#ifndef HEADER_mindustry_world_modules_PowerModule
#define HEADER_mindustry_world_modules_PowerModule

#include "Clearwing.h"
#include "mindustry/world/modules/BlockModule.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_world_modules_PowerModule {
	mindustry_world_modules_BlockModule parent;
	jfloat F_status;
	jbool F_init;
	jref F_graph;
	jref F_links;
} mindustry_world_modules_PowerModule;

extern Class class_mindustry_world_modules_PowerModule;


#define VTABLE_mindustry_world_modules_PowerModule_hashCode_R_int 0
typedef jint (*func_mindustry_world_modules_PowerModule_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_modules_PowerModule_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_world_modules_PowerModule_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_modules_PowerModule_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_world_modules_PowerModule_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_modules_PowerModule_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_world_modules_PowerModule_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_modules_PowerModule_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_world_modules_PowerModule_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_modules_PowerModule_finalize 5
typedef void (*func_mindustry_world_modules_PowerModule_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_modules_PowerModule_notify 6
typedef void (*func_mindustry_world_modules_PowerModule_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_modules_PowerModule_notifyAll 7
typedef void (*func_mindustry_world_modules_PowerModule_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_modules_PowerModule_wait 8
typedef void (*func_mindustry_world_modules_PowerModule_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_modules_PowerModule_wait_long 9
typedef void (*func_mindustry_world_modules_PowerModule_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_world_modules_PowerModule_wait_long_int 10
typedef void (*func_mindustry_world_modules_PowerModule_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_world_modules_PowerModule_write_arc_util_io_Writes 11
typedef void (*func_mindustry_world_modules_PowerModule_write_arc_util_io_Writes)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_modules_PowerModule_read_arc_util_io_Reads_boolean 12
typedef void (*func_mindustry_world_modules_PowerModule_read_arc_util_io_Reads_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_mindustry_world_modules_PowerModule_read_arc_util_io_Reads 13
typedef void (*func_mindustry_world_modules_PowerModule_read_arc_util_io_Reads)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_world_modules_PowerModule(jobject object, jint mark, jint depth);
void clinit_mindustry_world_modules_PowerModule(jcontext ctx);
void init_mindustry_world_modules_PowerModule(jcontext ctx, jobject self);
void M_mindustry_world_modules_PowerModule_write_arc_util_io_Writes(jcontext ctx, jobject self, jobject param0);
void M_mindustry_world_modules_PowerModule_read_arc_util_io_Reads(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
