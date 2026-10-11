#ifndef HEADER_mindustry_world_modules_BlockModule
#define HEADER_mindustry_world_modules_BlockModule

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_world_modules_BlockModule {
	java_lang_Object parent;
} mindustry_world_modules_BlockModule;

extern Class class_mindustry_world_modules_BlockModule;


#define VTABLE_mindustry_world_modules_BlockModule_hashCode_R_int 0
typedef jint (*func_mindustry_world_modules_BlockModule_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_modules_BlockModule_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_world_modules_BlockModule_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_modules_BlockModule_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_world_modules_BlockModule_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_modules_BlockModule_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_world_modules_BlockModule_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_modules_BlockModule_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_world_modules_BlockModule_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_modules_BlockModule_finalize 5
typedef void (*func_mindustry_world_modules_BlockModule_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_modules_BlockModule_notify 6
typedef void (*func_mindustry_world_modules_BlockModule_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_modules_BlockModule_notifyAll 7
typedef void (*func_mindustry_world_modules_BlockModule_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_modules_BlockModule_wait 8
typedef void (*func_mindustry_world_modules_BlockModule_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_modules_BlockModule_wait_long 9
typedef void (*func_mindustry_world_modules_BlockModule_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_world_modules_BlockModule_wait_long_int 10
typedef void (*func_mindustry_world_modules_BlockModule_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_world_modules_BlockModule_write_arc_util_io_Writes 11
typedef void (*func_mindustry_world_modules_BlockModule_write_arc_util_io_Writes)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_modules_BlockModule_read_arc_util_io_Reads_boolean 12
typedef void (*func_mindustry_world_modules_BlockModule_read_arc_util_io_Reads_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_mindustry_world_modules_BlockModule_read_arc_util_io_Reads 13
typedef void (*func_mindustry_world_modules_BlockModule_read_arc_util_io_Reads)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_world_modules_BlockModule(jobject object, jint mark, jint depth);
void clinit_mindustry_world_modules_BlockModule(jcontext ctx);
void init_mindustry_world_modules_BlockModule(jcontext ctx, jobject self);
void M_mindustry_world_modules_BlockModule_read_arc_util_io_Reads_boolean(jcontext ctx, jobject self, jobject param0, jbool param1);
void M_mindustry_world_modules_BlockModule_read_arc_util_io_Reads(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
