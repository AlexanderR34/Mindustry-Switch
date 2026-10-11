#ifndef HEADER_mindustry_io_SaveMeta
#define HEADER_mindustry_io_SaveMeta

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_io_SaveMeta {
	java_lang_Object parent;
	jint F_version;
	jint F_build;
	jlong F_timestamp;
	jlong F_timePlayed;
	jref F_map;
	jint F_wave;
	jref F_rules;
	jref F_tags;
	jref F_mods;
} mindustry_io_SaveMeta;

extern Class class_mindustry_io_SaveMeta;


#define VTABLE_mindustry_io_SaveMeta_hashCode_R_int 0
typedef jint (*func_mindustry_io_SaveMeta_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_SaveMeta_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_io_SaveMeta_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_io_SaveMeta_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_io_SaveMeta_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_SaveMeta_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_io_SaveMeta_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_SaveMeta_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_io_SaveMeta_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_SaveMeta_finalize 5
typedef void (*func_mindustry_io_SaveMeta_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_SaveMeta_notify 6
typedef void (*func_mindustry_io_SaveMeta_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_SaveMeta_notifyAll 7
typedef void (*func_mindustry_io_SaveMeta_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_SaveMeta_wait 8
typedef void (*func_mindustry_io_SaveMeta_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_SaveMeta_wait_long 9
typedef void (*func_mindustry_io_SaveMeta_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_io_SaveMeta_wait_long_int 10
typedef void (*func_mindustry_io_SaveMeta_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_io_SaveMeta_isMap_R_boolean 11
typedef jbool (*func_mindustry_io_SaveMeta_isMap_R_boolean)(jcontext ctx, jobject self);

void mark_mindustry_io_SaveMeta(jobject object, jint mark, jint depth);
void clinit_mindustry_io_SaveMeta(jcontext ctx);
void init_mindustry_io_SaveMeta_int_long_long_int_java_lang_String_int_mindustry_game_Rules_arc_struct_StringMap(jcontext ctx, jobject self, jint param0, jlong param1, jlong param2, jint param3, jobject param4, jint param5, jobject param6, jobject param7);
jbool M_mindustry_io_SaveMeta_isMap_R_boolean(jcontext ctx, jobject self);
jbool SM_mindustry_io_SaveMeta_lambda$new$0_java_lang_String_mindustry_maps_Map_R_boolean(jcontext ctx, jobject param0, jobject param1);

#ifdef __cplusplus
}
#endif

#endif
