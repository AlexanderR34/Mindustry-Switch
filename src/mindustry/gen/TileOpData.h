#ifndef HEADER_mindustry_gen_TileOpData
#define HEADER_mindustry_gen_TileOpData

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_gen_TileOpData {
	java_lang_Object parent;
} mindustry_gen_TileOpData;

extern Class class_mindustry_gen_TileOpData;

extern jint SF_mindustry_gen_TileOpData_bitMaskData;
extern jint SF_mindustry_gen_TileOpData_bitMaskFloorData;
extern jint SF_mindustry_gen_TileOpData_bitMaskOverlayData;

#define VTABLE_mindustry_gen_TileOpData_hashCode_R_int 0
typedef jint (*func_mindustry_gen_TileOpData_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TileOpData_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_gen_TileOpData_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_TileOpData_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_gen_TileOpData_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TileOpData_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_gen_TileOpData_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TileOpData_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_gen_TileOpData_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TileOpData_finalize 5
typedef void (*func_mindustry_gen_TileOpData_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TileOpData_notify 6
typedef void (*func_mindustry_gen_TileOpData_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TileOpData_notifyAll 7
typedef void (*func_mindustry_gen_TileOpData_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TileOpData_wait 8
typedef void (*func_mindustry_gen_TileOpData_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TileOpData_wait_long 9
typedef void (*func_mindustry_gen_TileOpData_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_gen_TileOpData_wait_long_int 10
typedef void (*func_mindustry_gen_TileOpData_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_mindustry_gen_TileOpData(jobject object, jint mark, jint depth);
void clinit_mindustry_gen_TileOpData(jcontext ctx);
void init_mindustry_gen_TileOpData(jcontext ctx, jobject self);
jbyte SM_mindustry_gen_TileOpData_data_int_R_byte(jcontext ctx, jint param0);
jint SM_mindustry_gen_TileOpData_data_int_byte_R_int(jcontext ctx, jint param0, jbyte param1);
jbyte SM_mindustry_gen_TileOpData_floorData_int_R_byte(jcontext ctx, jint param0);
jint SM_mindustry_gen_TileOpData_floorData_int_byte_R_int(jcontext ctx, jint param0, jbyte param1);
jbyte SM_mindustry_gen_TileOpData_overlayData_int_R_byte(jcontext ctx, jint param0);
jint SM_mindustry_gen_TileOpData_overlayData_int_byte_R_int(jcontext ctx, jint param0, jbyte param1);
jint SM_mindustry_gen_TileOpData_get_byte_byte_byte_R_int(jcontext ctx, jbyte param0, jbyte param1, jbyte param2);

#ifdef __cplusplus
}
#endif

#endif
