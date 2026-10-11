#ifndef HEADER_mindustry_world_Tiles
#define HEADER_mindustry_world_Tiles

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/lang/Iterable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_world_Tiles {
	java_lang_Object parent;
	jint F_width;
	jint F_height;
	jref F_array;
	jref F_puddles;
	jref F_fires;
	jref F_tmpFloorState;
	jref F_tmpBlockState;
} mindustry_world_Tiles;

extern Class class_mindustry_world_Tiles;


#define VTABLE_mindustry_world_Tiles_hashCode_R_int 0
typedef jint (*func_mindustry_world_Tiles_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Tiles_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_world_Tiles_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_Tiles_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_world_Tiles_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Tiles_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_world_Tiles_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Tiles_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_world_Tiles_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Tiles_finalize 5
typedef void (*func_mindustry_world_Tiles_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Tiles_notify 6
typedef void (*func_mindustry_world_Tiles_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Tiles_notifyAll 7
typedef void (*func_mindustry_world_Tiles_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Tiles_wait 8
typedef void (*func_mindustry_world_Tiles_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Tiles_wait_long 9
typedef void (*func_mindustry_world_Tiles_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_world_Tiles_wait_long_int 10
typedef void (*func_mindustry_world_Tiles_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_world_Tiles_iterator_R_java_util_Iterator 11
typedef jobject (*func_mindustry_world_Tiles_iterator_R_java_util_Iterator)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Tiles_forEach_java_util_function_Consumer 12
typedef void (*func_mindustry_world_Tiles_forEach_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_Tiles_spliterator_R_java_util_Spliterator 13
typedef jobject (*func_mindustry_world_Tiles_spliterator_R_java_util_Spliterator)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Tiles_getTmpFloorState_int_R_long 14
typedef jlong (*func_mindustry_world_Tiles_getTmpFloorState_int_R_long)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_world_Tiles_setTmpFloorState_int_long 15
typedef void (*func_mindustry_world_Tiles_setTmpFloorState_int_long)(jcontext ctx, jobject self, jint param0, jlong param1);
#define VTABLE_mindustry_world_Tiles_getTmpBlockState_int_R_long 16
typedef jlong (*func_mindustry_world_Tiles_getTmpBlockState_int_R_long)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_world_Tiles_setTmpBlockState_int_long 17
typedef void (*func_mindustry_world_Tiles_setTmpBlockState_int_long)(jcontext ctx, jobject self, jint param0, jlong param1);
#define VTABLE_mindustry_world_Tiles_getPuddle_int_R_mindustry_gen_Puddle 18
typedef jobject (*func_mindustry_world_Tiles_getPuddle_int_R_mindustry_gen_Puddle)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_world_Tiles_setPuddle_int_mindustry_gen_Puddle 19
typedef void (*func_mindustry_world_Tiles_setPuddle_int_mindustry_gen_Puddle)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_mindustry_world_Tiles_getFire_int_R_mindustry_gen_Fire 20
typedef jobject (*func_mindustry_world_Tiles_getFire_int_R_mindustry_gen_Fire)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_world_Tiles_setFire_int_mindustry_gen_Fire 21
typedef void (*func_mindustry_world_Tiles_setFire_int_mindustry_gen_Fire)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_mindustry_world_Tiles_each_arc_func_Intc2 22
typedef void (*func_mindustry_world_Tiles_each_arc_func_Intc2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_Tiles_fill 23
typedef void (*func_mindustry_world_Tiles_fill)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Tiles_set_int_int_mindustry_world_Tile 24
typedef void (*func_mindustry_world_Tiles_set_int_int_mindustry_world_Tile)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
#define VTABLE_mindustry_world_Tiles_seti_int_mindustry_world_Tile 25
typedef void (*func_mindustry_world_Tiles_seti_int_mindustry_world_Tile)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_mindustry_world_Tiles_in_int_int_R_boolean 26
typedef jbool (*func_mindustry_world_Tiles_in_int_int_R_boolean)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_mindustry_world_Tiles_get_int_int_R_mindustry_world_Tile 27
typedef jobject (*func_mindustry_world_Tiles_get_int_int_R_mindustry_world_Tile)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_mindustry_world_Tiles_getn_int_int_R_mindustry_world_Tile 28
typedef jobject (*func_mindustry_world_Tiles_getn_int_int_R_mindustry_world_Tile)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_mindustry_world_Tiles_getc_int_int_R_mindustry_world_Tile 29
typedef jobject (*func_mindustry_world_Tiles_getc_int_int_R_mindustry_world_Tile)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_mindustry_world_Tiles_geti_int_R_mindustry_world_Tile 30
typedef jobject (*func_mindustry_world_Tiles_geti_int_R_mindustry_world_Tile)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_world_Tiles_getp_int_R_mindustry_world_Tile 31
typedef jobject (*func_mindustry_world_Tiles_getp_int_R_mindustry_world_Tile)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_world_Tiles_eachTile_arc_func_Cons 32
typedef void (*func_mindustry_world_Tiles_eachTile_arc_func_Cons)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_world_Tiles(jobject object, jint mark, jint depth);
void clinit_mindustry_world_Tiles(jcontext ctx);
void init_mindustry_world_Tiles_int_int(jcontext ctx, jobject self, jint param0, jint param1);
jlong M_mindustry_world_Tiles_getTmpFloorState_int_R_long(jcontext ctx, jobject self, jint param0);
void M_mindustry_world_Tiles_setTmpFloorState_int_long(jcontext ctx, jobject self, jint param0, jlong param1);
jlong M_mindustry_world_Tiles_getTmpBlockState_int_R_long(jcontext ctx, jobject self, jint param0);
void M_mindustry_world_Tiles_setTmpBlockState_int_long(jcontext ctx, jobject self, jint param0, jlong param1);
jobject M_mindustry_world_Tiles_getPuddle_int_R_mindustry_gen_Puddle(jcontext ctx, jobject self, jint param0);
void M_mindustry_world_Tiles_setPuddle_int_mindustry_gen_Puddle(jcontext ctx, jobject self, jint param0, jobject param1);
jobject M_mindustry_world_Tiles_getFire_int_R_mindustry_gen_Fire(jcontext ctx, jobject self, jint param0);
void M_mindustry_world_Tiles_setFire_int_mindustry_gen_Fire(jcontext ctx, jobject self, jint param0, jobject param1);
void M_mindustry_world_Tiles_each_arc_func_Intc2(jcontext ctx, jobject self, jobject param0);
void M_mindustry_world_Tiles_fill(jcontext ctx, jobject self);
void M_mindustry_world_Tiles_set_int_int_mindustry_world_Tile(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
void M_mindustry_world_Tiles_seti_int_mindustry_world_Tile(jcontext ctx, jobject self, jint param0, jobject param1);
jbool M_mindustry_world_Tiles_in_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1);
jobject M_mindustry_world_Tiles_get_int_int_R_mindustry_world_Tile(jcontext ctx, jobject self, jint param0, jint param1);
jobject M_mindustry_world_Tiles_getn_int_int_R_mindustry_world_Tile(jcontext ctx, jobject self, jint param0, jint param1);
jobject M_mindustry_world_Tiles_getc_int_int_R_mindustry_world_Tile(jcontext ctx, jobject self, jint param0, jint param1);
jobject M_mindustry_world_Tiles_geti_int_R_mindustry_world_Tile(jcontext ctx, jobject self, jint param0);
jobject M_mindustry_world_Tiles_getp_int_R_mindustry_world_Tile(jcontext ctx, jobject self, jint param0);
void M_mindustry_world_Tiles_eachTile_arc_func_Cons(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_world_Tiles_iterator_R_java_util_Iterator(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
