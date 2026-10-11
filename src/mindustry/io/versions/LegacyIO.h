#ifndef HEADER_mindustry_io_versions_LegacyIO
#define HEADER_mindustry_io_versions_LegacyIO

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_io_versions_LegacyIO {
	java_lang_Object parent;
} mindustry_io_versions_LegacyIO;

extern Class class_mindustry_io_versions_LegacyIO;

extern jobject SF_mindustry_io_versions_LegacyIO_unitMap;

#define VTABLE_mindustry_io_versions_LegacyIO_hashCode_R_int 0
typedef jint (*func_mindustry_io_versions_LegacyIO_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_versions_LegacyIO_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_io_versions_LegacyIO_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_io_versions_LegacyIO_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_io_versions_LegacyIO_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_versions_LegacyIO_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_io_versions_LegacyIO_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_versions_LegacyIO_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_io_versions_LegacyIO_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_versions_LegacyIO_finalize 5
typedef void (*func_mindustry_io_versions_LegacyIO_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_versions_LegacyIO_notify 6
typedef void (*func_mindustry_io_versions_LegacyIO_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_versions_LegacyIO_notifyAll 7
typedef void (*func_mindustry_io_versions_LegacyIO_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_versions_LegacyIO_wait 8
typedef void (*func_mindustry_io_versions_LegacyIO_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_versions_LegacyIO_wait_long 9
typedef void (*func_mindustry_io_versions_LegacyIO_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_io_versions_LegacyIO_wait_long_int 10
typedef void (*func_mindustry_io_versions_LegacyIO_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_mindustry_io_versions_LegacyIO(jobject object, jint mark, jint depth);
void clinit_mindustry_io_versions_LegacyIO(jcontext ctx);
void init_mindustry_io_versions_LegacyIO(jcontext ctx, jobject self);
jobject SM_mindustry_io_versions_LegacyIO_readServers_R_arc_struct_Seq(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
