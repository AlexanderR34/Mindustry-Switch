#ifndef HEADER_mindustry_gen_PackTile
#define HEADER_mindustry_gen_PackTile

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_gen_PackTile {
	java_lang_Object parent;
} mindustry_gen_PackTile;

extern Class class_mindustry_gen_PackTile;

extern jlong SF_mindustry_gen_PackTile_bitMaskBlock;
extern jlong SF_mindustry_gen_PackTile_bitMaskFloor;
extern jlong SF_mindustry_gen_PackTile_bitMaskOverlay;

#define VTABLE_mindustry_gen_PackTile_hashCode_R_int 0
typedef jint (*func_mindustry_gen_PackTile_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_PackTile_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_gen_PackTile_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_PackTile_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_gen_PackTile_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_PackTile_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_gen_PackTile_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_PackTile_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_gen_PackTile_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_PackTile_finalize 5
typedef void (*func_mindustry_gen_PackTile_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_PackTile_notify 6
typedef void (*func_mindustry_gen_PackTile_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_PackTile_notifyAll 7
typedef void (*func_mindustry_gen_PackTile_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_PackTile_wait 8
typedef void (*func_mindustry_gen_PackTile_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_PackTile_wait_long 9
typedef void (*func_mindustry_gen_PackTile_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_gen_PackTile_wait_long_int 10
typedef void (*func_mindustry_gen_PackTile_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_mindustry_gen_PackTile(jobject object, jint mark, jint depth);
void clinit_mindustry_gen_PackTile(jcontext ctx);
void init_mindustry_gen_PackTile(jcontext ctx, jobject self);
jshort SM_mindustry_gen_PackTile_block_long_R_short(jcontext ctx, jlong param0);
jlong SM_mindustry_gen_PackTile_block_long_short_R_long(jcontext ctx, jlong param0, jshort param1);
jshort SM_mindustry_gen_PackTile_floor_long_R_short(jcontext ctx, jlong param0);
jlong SM_mindustry_gen_PackTile_floor_long_short_R_long(jcontext ctx, jlong param0, jshort param1);
jshort SM_mindustry_gen_PackTile_overlay_long_R_short(jcontext ctx, jlong param0);
jlong SM_mindustry_gen_PackTile_overlay_long_short_R_long(jcontext ctx, jlong param0, jshort param1);
jlong SM_mindustry_gen_PackTile_get_short_short_short_R_long(jcontext ctx, jshort param0, jshort param1, jshort param2);

#ifdef __cplusplus
}
#endif

#endif
