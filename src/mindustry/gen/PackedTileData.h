#ifndef HEADER_mindustry_gen_PackedTileData
#define HEADER_mindustry_gen_PackedTileData

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_gen_PackedTileData {
	java_lang_Object parent;
} mindustry_gen_PackedTileData;

extern Class class_mindustry_gen_PackedTileData;

extern jlong SF_mindustry_gen_PackedTileData_bitMaskExtraData;
extern jlong SF_mindustry_gen_PackedTileData_bitMaskData;
extern jlong SF_mindustry_gen_PackedTileData_bitMaskFloorData;
extern jlong SF_mindustry_gen_PackedTileData_bitMaskOverlayData;

#define VTABLE_mindustry_gen_PackedTileData_hashCode_R_int 0
typedef jint (*func_mindustry_gen_PackedTileData_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_PackedTileData_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_gen_PackedTileData_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_PackedTileData_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_gen_PackedTileData_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_PackedTileData_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_gen_PackedTileData_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_PackedTileData_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_gen_PackedTileData_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_PackedTileData_finalize 5
typedef void (*func_mindustry_gen_PackedTileData_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_PackedTileData_notify 6
typedef void (*func_mindustry_gen_PackedTileData_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_PackedTileData_notifyAll 7
typedef void (*func_mindustry_gen_PackedTileData_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_PackedTileData_wait 8
typedef void (*func_mindustry_gen_PackedTileData_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_PackedTileData_wait_long 9
typedef void (*func_mindustry_gen_PackedTileData_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_gen_PackedTileData_wait_long_int 10
typedef void (*func_mindustry_gen_PackedTileData_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_mindustry_gen_PackedTileData(jobject object, jint mark, jint depth);
void clinit_mindustry_gen_PackedTileData(jcontext ctx);
void init_mindustry_gen_PackedTileData(jcontext ctx, jobject self);
jint SM_mindustry_gen_PackedTileData_extraData_long_R_int(jcontext ctx, jlong param0);
jlong SM_mindustry_gen_PackedTileData_extraData_long_int_R_long(jcontext ctx, jlong param0, jint param1);
jbyte SM_mindustry_gen_PackedTileData_data_long_R_byte(jcontext ctx, jlong param0);
jlong SM_mindustry_gen_PackedTileData_data_long_byte_R_long(jcontext ctx, jlong param0, jbyte param1);
jbyte SM_mindustry_gen_PackedTileData_floorData_long_R_byte(jcontext ctx, jlong param0);
jlong SM_mindustry_gen_PackedTileData_floorData_long_byte_R_long(jcontext ctx, jlong param0, jbyte param1);
jbyte SM_mindustry_gen_PackedTileData_overlayData_long_R_byte(jcontext ctx, jlong param0);
jlong SM_mindustry_gen_PackedTileData_overlayData_long_byte_R_long(jcontext ctx, jlong param0, jbyte param1);
jlong SM_mindustry_gen_PackedTileData_get_int_byte_byte_byte_R_long(jcontext ctx, jint param0, jbyte param1, jbyte param2, jbyte param3);

#ifdef __cplusplus
}
#endif

#endif
