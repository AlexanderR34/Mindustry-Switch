#ifndef HEADER_mindustry_ui_Fonts
#define HEADER_mindustry_ui_Fonts

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_ui_Fonts {
	java_lang_Object parent;
} mindustry_ui_Fonts;

extern Class class_mindustry_ui_Fonts;

extern jobject SF_mindustry_ui_Fonts_mainFont;
extern jobject SF_mindustry_ui_Fonts_unscaled;
extern jobject SF_mindustry_ui_Fonts_unicodeIcons;
extern jobject SF_mindustry_ui_Fonts_unicodeToName;
extern jobject SF_mindustry_ui_Fonts_stringIcons;
extern jobject SF_mindustry_ui_Fonts_largeIcons;
extern jobject SF_mindustry_ui_Fonts_def;
extern jobject SF_mindustry_ui_Fonts_outline;
extern jobject SF_mindustry_ui_Fonts_icon;
extern jobject SF_mindustry_ui_Fonts_iconLarge;
extern jobject SF_mindustry_ui_Fonts_tech;
extern jobject SF_mindustry_ui_Fonts_logic;
extern jobject SF_mindustry_ui_Fonts_monospace;

#define VTABLE_mindustry_ui_Fonts_hashCode_R_int 0
typedef jint (*func_mindustry_ui_Fonts_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Fonts_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_ui_Fonts_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_Fonts_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_ui_Fonts_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Fonts_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_ui_Fonts_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Fonts_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_ui_Fonts_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Fonts_finalize 5
typedef void (*func_mindustry_ui_Fonts_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Fonts_notify 6
typedef void (*func_mindustry_ui_Fonts_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Fonts_notifyAll 7
typedef void (*func_mindustry_ui_Fonts_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Fonts_wait 8
typedef void (*func_mindustry_ui_Fonts_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Fonts_wait_long 9
typedef void (*func_mindustry_ui_Fonts_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_ui_Fonts_wait_long_int 10
typedef void (*func_mindustry_ui_Fonts_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_mindustry_ui_Fonts(jobject object, jint mark, jint depth);
void clinit_mindustry_ui_Fonts(jcontext ctx);
void init_mindustry_ui_Fonts(jcontext ctx, jobject self);
jint SM_mindustry_ui_Fonts_getUnicode_java_lang_String_R_int(jcontext ctx, jobject param0);
jobject SM_mindustry_ui_Fonts_getUnicodeStr_java_lang_String_R_java_lang_String(jcontext ctx, jobject param0);
jbool SM_mindustry_ui_Fonts_hasUnicodeStr_java_lang_String_R_boolean(jcontext ctx, jobject param0);
void SM_mindustry_ui_Fonts_loadSystemCursors(jcontext ctx);
jint SM_mindustry_ui_Fonts_cursorScale_R_int(jcontext ctx);
void SM_mindustry_ui_Fonts_loadFonts(jcontext ctx);
void SM_mindustry_ui_Fonts_loadExtraFonts(jcontext ctx);
jobject SM_mindustry_ui_Fonts_unicodeToName_int_R_java_lang_String(jcontext ctx, jint param0);
jobject SM_mindustry_ui_Fonts_getLargeIcon_java_lang_String_R_arc_graphics_g2d_TextureRegion(jcontext ctx, jobject param0);
void SM_mindustry_ui_Fonts_registerIcon_java_lang_String_java_lang_String_int_arc_graphics_g2d_TextureRegion(jcontext ctx, jobject param0, jobject param1, jint param2, jobject param3);
void SM_mindustry_ui_Fonts_loadContentIcons(jcontext ctx);
void SM_mindustry_ui_Fonts_loadContentIconsHeadless(jcontext ctx);
void SM_mindustry_ui_Fonts_loadDefaultFont(jcontext ctx);
void SM_mindustry_ui_Fonts_mergeFontAtlas_arc_graphics_g2d_TextureAtlas(jcontext ctx, jobject param0);
jobject SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(jcontext ctx, jobject param0, jchar param1);
jobject SM_mindustry_ui_Fonts_fontParameter_R_arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter(jcontext ctx);
jbool SM_mindustry_ui_Fonts_lambda$mergeFontAtlas$0_arc_graphics_Texture_arc_graphics_g2d_TextureAtlas$AtlasRegion_R_boolean(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_ui_Fonts_lambda$loadDefaultFont$1_arc_graphics_g2d_Font(jcontext ctx, jobject param0);
void SM_mindustry_ui_Fonts_lambda$loadDefaultFont$0_arc_graphics_g2d_Font(jcontext ctx, jobject param0);
jobject SM_mindustry_ui_Fonts_lambda$getLargeIcon$0_java_lang_String_R_arc_graphics_g2d_TextureRegion(jcontext ctx, jobject param0);
jobject SM_mindustry_ui_Fonts_lambda$unicodeToName$0_int_R_java_lang_String(jcontext ctx, jint param0);
void SM_mindustry_ui_Fonts_lambda$loadExtraFonts$1_arc_graphics_g2d_Font(jcontext ctx, jobject param0);
void SM_mindustry_ui_Fonts_lambda$loadExtraFonts$0_arc_graphics_g2d_Font(jcontext ctx, jobject param0);
void SM_mindustry_ui_Fonts_lambda$loadFonts$4_arc_graphics_g2d_Font(jcontext ctx, jobject param0);
void SM_mindustry_ui_Fonts_lambda$loadFonts$3_arc_graphics_g2d_Font(jcontext ctx, jobject param0);
void SM_mindustry_ui_Fonts_lambda$loadFonts$2_arc_graphics_g2d_Font(jcontext ctx, jobject param0);
void SM_mindustry_ui_Fonts_lambda$loadFonts$1_arc_graphics_g2d_Font(jcontext ctx, jobject param0);
void SM_mindustry_ui_Fonts_lambda$loadFonts$0_arc_graphics_g2d_Font(jcontext ctx, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
