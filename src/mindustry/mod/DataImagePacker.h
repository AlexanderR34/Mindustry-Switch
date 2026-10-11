#ifndef HEADER_mindustry_mod_DataImagePacker
#define HEADER_mindustry_mod_DataImagePacker

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_mod_DataImagePacker {
	java_lang_Object parent;
	jref F_patchAtlas;
	jref F_serverImages;
	jref F_textureExecutor;
} mindustry_mod_DataImagePacker;

extern Class class_mindustry_mod_DataImagePacker;

extern jobject SF_mindustry_mod_DataImagePacker_regionPrefix;
extern jobject SF_mindustry_mod_DataImagePacker_serverRegionPrefix;

#define VTABLE_mindustry_mod_DataImagePacker_hashCode_R_int 0
typedef jint (*func_mindustry_mod_DataImagePacker_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_DataImagePacker_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_mod_DataImagePacker_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_DataImagePacker_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_mod_DataImagePacker_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_DataImagePacker_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_mod_DataImagePacker_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_DataImagePacker_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_mod_DataImagePacker_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_DataImagePacker_finalize 5
typedef void (*func_mindustry_mod_DataImagePacker_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_DataImagePacker_notify 6
typedef void (*func_mindustry_mod_DataImagePacker_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_DataImagePacker_notifyAll 7
typedef void (*func_mindustry_mod_DataImagePacker_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_DataImagePacker_wait 8
typedef void (*func_mindustry_mod_DataImagePacker_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_DataImagePacker_wait_long 9
typedef void (*func_mindustry_mod_DataImagePacker_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_mod_DataImagePacker_wait_long_int 10
typedef void (*func_mindustry_mod_DataImagePacker_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_mod_DataImagePacker_pack_arc_struct_Seq 11
typedef void (*func_mindustry_mod_DataImagePacker_pack_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_DataImagePacker_unload 12
typedef void (*func_mindustry_mod_DataImagePacker_unload)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_DataImagePacker_addTexture_java_lang_String_Array1_byte 13
typedef void (*func_mindustry_mod_DataImagePacker_addTexture_java_lang_String_Array1_byte)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_mod_DataImagePacker_removeTexture_java_lang_String 14
typedef void (*func_mindustry_mod_DataImagePacker_removeTexture_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_DataImagePacker_removeTextureQueued_java_lang_String 15
typedef void (*func_mindustry_mod_DataImagePacker_removeTextureQueued_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_DataImagePacker_printStats_arc_graphics_g2d_PixmapPacker_arc_graphics_g2d_PixmapPacker 16
typedef void (*func_mindustry_mod_DataImagePacker_printStats_arc_graphics_g2d_PixmapPacker_arc_graphics_g2d_PixmapPacker)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_mod_DataImagePacker_lambda$removeTextureQueued$0_java_lang_String 17
typedef void (*func_mindustry_mod_DataImagePacker_lambda$removeTextureQueued$0_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_DataImagePacker_lambda$removeTextureQueued$1_java_lang_String 18
typedef void (*func_mindustry_mod_DataImagePacker_lambda$removeTextureQueued$1_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_DataImagePacker_lambda$addTexture$0_Array1_byte_java_lang_String 19
typedef void (*func_mindustry_mod_DataImagePacker_lambda$addTexture$0_Array1_byte_java_lang_String)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_mod_DataImagePacker_lambda$addTexture$1_java_lang_String_arc_graphics_Pixmap 20
typedef void (*func_mindustry_mod_DataImagePacker_lambda$addTexture$1_java_lang_String_arc_graphics_Pixmap)(jcontext ctx, jobject self, jobject param0, jobject param1);

void mark_mindustry_mod_DataImagePacker(jobject object, jint mark, jint depth);
void clinit_mindustry_mod_DataImagePacker(jcontext ctx);
void init_mindustry_mod_DataImagePacker(jcontext ctx, jobject self);
void M_mindustry_mod_DataImagePacker_pack_arc_struct_Seq(jcontext ctx, jobject self, jobject param0);
void M_mindustry_mod_DataImagePacker_unload(jcontext ctx, jobject self);
void M_mindustry_mod_DataImagePacker_addTexture_java_lang_String_Array1_byte(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_mindustry_mod_DataImagePacker_removeTexture_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_mindustry_mod_DataImagePacker_removeTextureQueued_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_mindustry_mod_DataImagePacker_printStats_arc_graphics_g2d_PixmapPacker_arc_graphics_g2d_PixmapPacker(jcontext ctx, jobject self, jobject param0, jobject param1);
jint SM_mindustry_mod_DataImagePacker_lambda$printStats$0_arc_graphics_g2d_PixmapPacker$Page_R_int(jcontext ctx, jobject param0);
void M_mindustry_mod_DataImagePacker_lambda$removeTextureQueued$0_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_mindustry_mod_DataImagePacker_lambda$removeTextureQueued$1_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_mindustry_mod_DataImagePacker_lambda$addTexture$0_Array1_byte_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_mindustry_mod_DataImagePacker_lambda$addTexture$1_java_lang_String_arc_graphics_Pixmap(jcontext ctx, jobject self, jobject param0, jobject param1);
void SM_mindustry_mod_DataImagePacker_lambda$unload$0_java_lang_String_arc_graphics_Texture(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_mod_DataImagePacker_lambda$pack$2_mindustry_mod_data_ImageAsset_boolean_java_util_concurrent_atomic_AtomicBoolean_arc_graphics_g2d_PixmapPacker_arc_graphics_g2d_PixmapPacker(jcontext ctx, jobject param0, jbool param1, jobject param2, jobject param3, jobject param4);
jbool SM_mindustry_mod_DataImagePacker_lambda$pack$1_mindustry_mod_data_ImageAsset_R_boolean(jcontext ctx, jobject param0);
void SM_mindustry_mod_DataImagePacker_lambda$pack$0_mindustry_mod_data_ImageAsset_java_util_concurrent_atomic_AtomicInteger_java_util_concurrent_atomic_AtomicInteger(jcontext ctx, jobject param0, jobject param1, jobject param2);

#ifdef __cplusplus
}
#endif

#endif
