#ifndef HEADER_mindustry_mod_DataManager$1
#define HEADER_mindustry_mod_DataManager$1

#include "Clearwing.h"
#include "mindustry/graphics/MultiPacker.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_mod_DataManager$1 {
	mindustry_graphics_MultiPacker parent;
	jref F_val$currentHash;
	jref F_val$serverGeneratedDir;
	jref F_val$images;
	jref F_val$packed;
	jref F_val$imageMap;
	jref F_val$imagePixmaps;
	jref F_val$error;
	jref F_this$0;
} mindustry_mod_DataManager$1;

extern Class class_mindustry_mod_DataManager$1;


#define VTABLE_mindustry_mod_DataManager$1_hashCode_R_int 0
typedef jint (*func_mindustry_mod_DataManager$1_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_DataManager$1_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_mod_DataManager$1_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_DataManager$1_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_mod_DataManager$1_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_DataManager$1_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_mod_DataManager$1_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_DataManager$1_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_mod_DataManager$1_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_DataManager$1_finalize 5
typedef void (*func_mindustry_mod_DataManager$1_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_DataManager$1_notify 6
typedef void (*func_mindustry_mod_DataManager$1_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_DataManager$1_notifyAll 7
typedef void (*func_mindustry_mod_DataManager$1_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_DataManager$1_wait 8
typedef void (*func_mindustry_mod_DataManager$1_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_DataManager$1_wait_long 9
typedef void (*func_mindustry_mod_DataManager$1_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_mod_DataManager$1_wait_long_int 10
typedef void (*func_mindustry_mod_DataManager$1_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_mod_DataManager$1_dispose 11
typedef void (*func_mindustry_mod_DataManager$1_dispose)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_DataManager$1_isDisposed_R_boolean 12
typedef jbool (*func_mindustry_mod_DataManager$1_isDisposed_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_DataManager$1_get_arc_graphics_g2d_TextureRegion_R_arc_graphics_g2d_PixmapRegion 13
typedef jobject (*func_mindustry_mod_DataManager$1_get_arc_graphics_g2d_TextureRegion_R_arc_graphics_g2d_PixmapRegion)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_DataManager$1_get_java_lang_String_R_arc_graphics_g2d_PixmapRegion 14
typedef jobject (*func_mindustry_mod_DataManager$1_get_java_lang_String_R_arc_graphics_g2d_PixmapRegion)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_DataManager$1_getPacked_java_lang_String_R_arc_graphics_g2d_PixmapRegion 15
typedef jobject (*func_mindustry_mod_DataManager$1_getPacked_java_lang_String_R_arc_graphics_g2d_PixmapRegion)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_DataManager$1_printStats 16
typedef void (*func_mindustry_mod_DataManager$1_printStats)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_DataManager$1_registerOutlined_java_lang_String_R_boolean 17
typedef jbool (*func_mindustry_mod_DataManager$1_registerOutlined_java_lang_String_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_DataManager$1_isOutlined_java_lang_String_R_boolean 18
typedef jbool (*func_mindustry_mod_DataManager$1_isOutlined_java_lang_String_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_DataManager$1_has_java_lang_String_R_boolean 19
typedef jbool (*func_mindustry_mod_DataManager$1_has_java_lang_String_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_DataManager$1_has_mindustry_graphics_MultiPacker$PageType_java_lang_String_R_boolean 20
typedef jbool (*func_mindustry_mod_DataManager$1_has_mindustry_graphics_MultiPacker$PageType_java_lang_String_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_mod_DataManager$1_add_mindustry_graphics_MultiPacker$PageType_java_lang_String_arc_graphics_g2d_PixmapRegion 21
typedef void (*func_mindustry_mod_DataManager$1_add_mindustry_graphics_MultiPacker$PageType_java_lang_String_arc_graphics_g2d_PixmapRegion)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_mindustry_mod_DataManager$1_add_mindustry_graphics_MultiPacker$PageType_java_lang_String_arc_graphics_g2d_PixmapRegion_Array1_int_Array1_int 22
typedef void (*func_mindustry_mod_DataManager$1_add_mindustry_graphics_MultiPacker$PageType_java_lang_String_arc_graphics_g2d_PixmapRegion_Array1_int_Array1_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4);
#define VTABLE_mindustry_mod_DataManager$1_add_mindustry_graphics_MultiPacker$PageType_java_lang_String_arc_graphics_Pixmap 23
typedef void (*func_mindustry_mod_DataManager$1_add_mindustry_graphics_MultiPacker$PageType_java_lang_String_arc_graphics_Pixmap)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_mindustry_mod_DataManager$1_flush_arc_graphics_Texture$TextureFilter_arc_graphics_g2d_TextureAtlas_R_arc_graphics_g2d_TextureAtlas 24
typedef jobject (*func_mindustry_mod_DataManager$1_flush_arc_graphics_Texture$TextureFilter_arc_graphics_g2d_TextureAtlas_R_arc_graphics_g2d_TextureAtlas)(jcontext ctx, jobject self, jobject param0, jobject param1);

void mark_mindustry_mod_DataManager$1(jobject object, jint mark, jint depth);
void clinit_mindustry_mod_DataManager$1(jcontext ctx);
void init_mindustry_mod_DataManager$1_mindustry_mod_DataManager_boolean_Array1_java_lang_String_arc_files_Fi_arc_struct_Seq_Array1_int_arc_struct_ObjectMap_arc_struct_ObjectMap_arc_graphics_g2d_PixmapRegion(jcontext ctx, jobject self, jobject param0, jbool param1, jobject param2, jobject param3, jobject param4, jobject param5, jobject param6, jobject param7, jobject param8);
void M_mindustry_mod_DataManager$1_add_mindustry_graphics_MultiPacker$PageType_java_lang_String_arc_graphics_g2d_PixmapRegion_Array1_int_Array1_int(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4);
jbool M_mindustry_mod_DataManager$1_has_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_mod_DataManager$1_has_mindustry_graphics_MultiPacker$PageType_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_mindustry_mod_DataManager$1_get_arc_graphics_g2d_TextureRegion_R_arc_graphics_g2d_PixmapRegion(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_mod_DataManager$1_get_java_lang_String_R_arc_graphics_g2d_PixmapRegion(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
