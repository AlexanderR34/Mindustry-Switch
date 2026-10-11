#ifndef HEADER_mindustry_entities_GroupDefs
#define HEADER_mindustry_entities_GroupDefs

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_entities_GroupDefs {
	java_lang_Object parent;
	jref F_all;
	jref F_effect;
	jref F_player;
	jref F_bullet;
	jref F_unit;
	jref F_build;
	jref F_sync;
	jref F_draw;
	jref F_weather;
	jref F_powerGraph;
} mindustry_entities_GroupDefs;

extern Class class_mindustry_entities_GroupDefs;


#define VTABLE_mindustry_entities_GroupDefs_hashCode_R_int 0
typedef jint (*func_mindustry_entities_GroupDefs_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_GroupDefs_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_entities_GroupDefs_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_GroupDefs_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_entities_GroupDefs_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_GroupDefs_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_entities_GroupDefs_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_GroupDefs_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_entities_GroupDefs_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_GroupDefs_finalize 5
typedef void (*func_mindustry_entities_GroupDefs_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_GroupDefs_notify 6
typedef void (*func_mindustry_entities_GroupDefs_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_GroupDefs_notifyAll 7
typedef void (*func_mindustry_entities_GroupDefs_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_GroupDefs_wait 8
typedef void (*func_mindustry_entities_GroupDefs_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_GroupDefs_wait_long 9
typedef void (*func_mindustry_entities_GroupDefs_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_entities_GroupDefs_wait_long_int 10
typedef void (*func_mindustry_entities_GroupDefs_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_mindustry_entities_GroupDefs(jobject object, jint mark, jint depth);
void clinit_mindustry_entities_GroupDefs(jcontext ctx);
void init_mindustry_entities_GroupDefs(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
