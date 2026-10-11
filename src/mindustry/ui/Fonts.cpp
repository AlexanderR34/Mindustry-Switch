#include "mindustry/ui/Fonts.h"
#include "arc/assets/AssetDescriptor.h"
#include "java/lang/Integer.h"
#include "arc/assets/loaders/FileHandleResolver.h"
#include "arc/func/Prov.h"
#include "arc/graphics/g2d/Font.h"
#include "mindustry/ui/Fonts_invoke_arc_func_Cons_14.h"
#include "mindustry/ui/Fonts_invoke_arc_func_Cons_15.h"
#include "mindustry/ui/Fonts_invoke_arc_func_Cons_16.h"
#include "mindustry/ui/Fonts_invoke_arc_func_Cons_17.h"
#include "mindustry/ui/Fonts_invoke_arc_func_Cons_10.h"
#include "mindustry/ui/Fonts_invoke_arc_func_Cons_11.h"
#include "arc/freetype/FreeTypeFontGenerator.h"
#include "arc/math/geom/Rect.h"
#include "mindustry/ui/Fonts_invoke_arc_func_Cons_12.h"
#include "mindustry/ui/Fonts_invoke_arc_func_Cons_13.h"
#include "java/lang/reflect/Constructor.h"
#include "arc/struct/Seq.h"
#include "java/lang/reflect/Method.h"
#include "java/lang/Throwable.h"
#include "java/util/Locale.h"
#include "arc/graphics/g2d/PixmapPacker_Page.h"
#include "arc/func/Boolf.h"
#include "arc/Core.h"
#include "java/lang/reflect/Field.h"
#include "mindustry/gen/Iconc.h"
#include "java/util/Iterator.h"
#include "arc/util/Log.h"
#include "arc/Files.h"
#include "arc/Graphics_Cursor.h"
#include "arc/util/Nullable.h"
#include "arc/graphics/Texture.h"
#include "java/io/BufferedReader.h"
#include "arc/assets/AssetManager.h"
#include "arc/Graphics.h"
#include "java/lang/Object.h"
#include "mindustry/ui/Fonts_9.h"
#include "mindustry/ui/Fonts_8.h"
#include "mindustry/ui/Fonts_10.h"
#include "mindustry/ui/Fonts_7.h"
#include "mindustry/ui/Fonts_11.h"
#include "arc/graphics/Texture_TextureFilter.h"
#include "arc/struct/ObjectSet.h"
#include "java/lang/RuntimeException.h"
#include "arc/struct/ObjectMap.h"
#include "arc/math/geom/Vec2.h"
#include "arc/graphics/GLTexture.h"
#include "arc/graphics/g2d/TextureAtlas_AtlasRegion.h"
#include "arc/assets/loaders/AssetLoader.h"
#include "arc/scene/style/TextureRegionDrawable.h"
#include "mindustry/ui/Fonts_6.h"
#include "mindustry/ui/Fonts_5.h"
#include "arc/assets/AssetLoaderParameters.h"
#include "mindustry/ui/Fonts_4.h"
#include "mindustry/ui/Fonts_3.h"
#include "arc/struct/IntMap.h"
#include "mindustry/ui/Fonts_2.h"
#include "arc/files/Fi.h"
#include "mindustry/ui/Fonts_1.h"
#include "arc/graphics/g2d/Font_Glyph.h"
#include "arc/func/Cons.h"
#include "java/lang/String.h"
#include "java/lang/Character.h"
#include "mindustry/ui/Fonts_invoke_arc_func_Boolf_1.h"
#include "java/io/IOException.h"
#include "arc/scene/style/Drawable.h"
#include "mindustry/ui/Fonts_invoke_arc_assets_loaders_FileHandleResolver_2.h"
#include "mindustry/ui/Fonts_invoke_arc_assets_loaders_FileHandleResolver_3.h"
#include "java/lang/Math.h"
#include "arc/graphics/g2d/TextureAtlas.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "arc/graphics/g2d/Font_FontData.h"
#include "arc/util/Scaling.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/ui/Fonts_invoke_arc_func_Cons_9.h"
#include "mindustry/core/UI.h"
#include "arc/freetype/FreeTypeFontGenerator_FreeTypeFontParameter.h"
#include "arc/graphics/g2d/PixmapRegion.h"
#include "mindustry/ui/Fonts.h"
#include "arc/Graphics_Cursor_SystemCursor.h"
#include "arc/freetype/FreetypeFontLoader_FreeTypeFontLoaderParameter.h"
#include "mindustry/ui/Fonts_invoke_arc_func_Prov_3.h"
#include "mindustry/ui/Fonts_invoke_arc_func_Prov_2.h"
#include "arc/freetype/FreeTypeFontGeneratorLoader.h"
#include "arc/graphics/Gl.h"
#include "arc/graphics/g2d/PixmapPacker.h"
#include "java/lang/Class.h"
#include "mindustry/game/Team.h"
#include "java/util/Objects.h"
#include "arc/struct/ObjectIntMap.h"

extern "C" {

jobject SF_mindustry_ui_Fonts_mainFont;
jobject SF_mindustry_ui_Fonts_unscaled;
jobject SF_mindustry_ui_Fonts_unicodeIcons;
jobject SF_mindustry_ui_Fonts_unicodeToName;
jobject SF_mindustry_ui_Fonts_stringIcons;
jobject SF_mindustry_ui_Fonts_largeIcons;
jobject SF_mindustry_ui_Fonts_def;
jobject SF_mindustry_ui_Fonts_outline;
jobject SF_mindustry_ui_Fonts_icon;
jobject SF_mindustry_ui_Fonts_iconLarge;
jobject SF_mindustry_ui_Fonts_tech;
jobject SF_mindustry_ui_Fonts_logic;
jobject SF_mindustry_ui_Fonts_monospace;

void mark_mindustry_ui_Fonts(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_ui_Fonts_mainFont)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_Fonts_mainFont)->clazz)->markFunction)((jobject) SF_mindustry_ui_Fonts_mainFont, mark, depth + 1);
		if (SF_mindustry_ui_Fonts_unscaled)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_Fonts_unscaled)->clazz)->markFunction)((jobject) SF_mindustry_ui_Fonts_unscaled, mark, depth + 1);
		if (SF_mindustry_ui_Fonts_unicodeIcons)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_Fonts_unicodeIcons)->clazz)->markFunction)((jobject) SF_mindustry_ui_Fonts_unicodeIcons, mark, depth + 1);
		if (SF_mindustry_ui_Fonts_unicodeToName)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_Fonts_unicodeToName)->clazz)->markFunction)((jobject) SF_mindustry_ui_Fonts_unicodeToName, mark, depth + 1);
		if (SF_mindustry_ui_Fonts_stringIcons)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_Fonts_stringIcons)->clazz)->markFunction)((jobject) SF_mindustry_ui_Fonts_stringIcons, mark, depth + 1);
		if (SF_mindustry_ui_Fonts_largeIcons)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_Fonts_largeIcons)->clazz)->markFunction)((jobject) SF_mindustry_ui_Fonts_largeIcons, mark, depth + 1);
		if (SF_mindustry_ui_Fonts_def)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_Fonts_def)->clazz)->markFunction)((jobject) SF_mindustry_ui_Fonts_def, mark, depth + 1);
		if (SF_mindustry_ui_Fonts_outline)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_Fonts_outline)->clazz)->markFunction)((jobject) SF_mindustry_ui_Fonts_outline, mark, depth + 1);
		if (SF_mindustry_ui_Fonts_icon)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_Fonts_icon)->clazz)->markFunction)((jobject) SF_mindustry_ui_Fonts_icon, mark, depth + 1);
		if (SF_mindustry_ui_Fonts_iconLarge)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_Fonts_iconLarge)->clazz)->markFunction)((jobject) SF_mindustry_ui_Fonts_iconLarge, mark, depth + 1);
		if (SF_mindustry_ui_Fonts_tech)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_Fonts_tech)->clazz)->markFunction)((jobject) SF_mindustry_ui_Fonts_tech, mark, depth + 1);
		if (SF_mindustry_ui_Fonts_logic)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_Fonts_logic)->clazz)->markFunction)((jobject) SF_mindustry_ui_Fonts_logic, mark, depth + 1);
		if (SF_mindustry_ui_Fonts_monospace)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_Fonts_monospace)->clazz)->markFunction)((jobject) SF_mindustry_ui_Fonts_monospace, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_ui_Fonts *) object;
}

void init_mindustry_ui_Fonts(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Fonts:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_Fonts(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(29);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint SM_mindustry_ui_Fonts_getUnicode_java_lang_String_R_int(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Fonts:getUnicode", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_Fonts(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(40);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_unicodeIcons;
	jint temp0 = (jint)((func_arc_struct_ObjectIntMap_get_java_lang_Object_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectIntMap_get_java_lang_Object_int_R_int])(ctx, sp[0].o, (frame[0].o), (jint(0)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_ui_Fonts_getUnicodeStr_java_lang_String_R_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Fonts:getUnicodeStr", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_Fonts(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(44);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_stringIcons;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[0].o), (((jobject) createStringLiteral(ctx, u8""_j))));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_java_lang_String, sp[0].o));
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_Fonts_hasUnicodeStr_java_lang_String_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Fonts:hasUnicodeStr", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_Fonts(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(48);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_stringIcons;
	jint temp0 = (jint)((func_arc_struct_ObjectMap_containsKey_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_containsKey_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_Fonts_loadSystemCursors(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Fonts:loadSystemCursors", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_Fonts(ctx);
	{
	LINE_NUMBER(53);
	clinit_arc_Graphics$Cursor$SystemCursor(ctx);
	sp[0].o = (jobject)SF_arc_Graphics$Cursor$SystemCursor_arrow;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_graphics;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"cursor"_j));
	jint temp0 = (jint)SM_mindustry_ui_Fonts_cursorScale_R_int(ctx);
	sp[1].o = (jobject)((func_arc_Graphics_newCursor_java_lang_String_int_R_arc_Graphics$Cursor) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Graphics_newCursor_java_lang_String_int_R_arc_Graphics$Cursor])(ctx, sp[1].o, sp[2].o, temp0);
	((func_arc_Graphics$Cursor$SystemCursor_set_arc_Graphics$Cursor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics$Cursor$SystemCursor_set_arc_Graphics$Cursor])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(54);
	clinit_arc_Graphics$Cursor$SystemCursor(ctx);
	sp[0].o = (jobject)SF_arc_Graphics$Cursor$SystemCursor_hand;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_graphics;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"hand"_j));
	jint temp1 = (jint)SM_mindustry_ui_Fonts_cursorScale_R_int(ctx);
	sp[1].o = (jobject)((func_arc_Graphics_newCursor_java_lang_String_int_R_arc_Graphics$Cursor) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Graphics_newCursor_java_lang_String_int_R_arc_Graphics$Cursor])(ctx, sp[1].o, sp[2].o, temp1);
	((func_arc_Graphics$Cursor$SystemCursor_set_arc_Graphics$Cursor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics$Cursor$SystemCursor_set_arc_Graphics$Cursor])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(55);
	clinit_arc_Graphics$Cursor$SystemCursor(ctx);
	sp[0].o = (jobject)SF_arc_Graphics$Cursor$SystemCursor_ibeam;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_graphics;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"ibeam"_j));
	jint temp2 = (jint)SM_mindustry_ui_Fonts_cursorScale_R_int(ctx);
	sp[1].o = (jobject)((func_arc_Graphics_newCursor_java_lang_String_int_R_arc_Graphics$Cursor) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Graphics_newCursor_java_lang_String_int_R_arc_Graphics$Cursor])(ctx, sp[1].o, sp[2].o, temp2);
	((func_arc_Graphics$Cursor$SystemCursor_set_arc_Graphics$Cursor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics$Cursor$SystemCursor_set_arc_Graphics$Cursor])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(57);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	((func_arc_Graphics_restoreCursor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_restoreCursor])(ctx, sp[0].o);
	LINE_NUMBER(58);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint SM_mindustry_ui_Fonts_cursorScale_R_int(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Fonts:cursorScale", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_Fonts(ctx);
	{
	LINE_NUMBER(61);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_Fonts_loadFonts(jcontext ctx) {
	jtype frame[9];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Fonts:loadFonts", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_Fonts(ctx);
	{
	LINE_NUMBER(65);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_largeIcons;
	((func_arc_struct_ObjectMap_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_clear])(ctx, sp[0].o);
	LINE_NUMBER(66);
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_fontParameter_R_arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter(ctx);
	frame[0].o = sp[0].o;
	LINE_NUMBER(68);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_assets;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"default"_j));
	sp[2].o = ((jobject) &class_arc_graphics_g2d_Font);
	clinit_arc_freetype_FreetypeFontLoader$FreeTypeFontLoaderParameter(ctx);
	sp[3].o = gcAlloc(ctx, &class_arc_freetype_FreetypeFontLoader$FreeTypeFontLoaderParameter);
	init_arc_freetype_FreetypeFontLoader$FreeTypeFontLoaderParameter_java_lang_String_arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter(ctx, sp[3].o, (((jobject) createStringLiteral(ctx, u8"fonts/font.woff"_j))), (frame[0].o));
	sp[0].o = (jobject)((func_arc_assets_AssetManager_load_java_lang_String_java_lang_Class_arc_assets_AssetLoaderParameters_R_arc_assets_AssetDescriptor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_load_java_lang_String_java_lang_Class_arc_assets_AssetLoaderParameters_R_arc_assets_AssetDescriptor])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_Fonts_invoke_arc_func_Cons_9(ctx);
		auto proxy = (mindustry_ui_Fonts_invoke_arc_func_Cons_9 *) gcAlloc(ctx, &class_mindustry_ui_Fonts_invoke_arc_func_Cons_9);
		sp[1].o = (jobject) proxy;
	}
	((arc_assets_AssetDescriptor *) NULL_CHECK(sp[0].o))->F_loaded = (jref) sp[1].o;
	LINE_NUMBER(70);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_assets;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"monospace"_j));
	sp[2].o = ((jobject) &class_arc_graphics_g2d_Font);
	clinit_arc_freetype_FreetypeFontLoader$FreeTypeFontLoaderParameter(ctx);
	sp[3].o = gcAlloc(ctx, &class_arc_freetype_FreetypeFontLoader$FreeTypeFontLoaderParameter);
	sp[4].o = ((jobject) createStringLiteral(ctx, u8"fonts/monospace.woff"_j));
	clinit_mindustry_ui_Fonts$1(ctx);
	sp[5].o = gcAlloc(ctx, &class_mindustry_ui_Fonts$1);
	init_mindustry_ui_Fonts$1(ctx, sp[5].o);
	init_arc_freetype_FreetypeFontLoader$FreeTypeFontLoaderParameter_java_lang_String_arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter(ctx, sp[3].o, sp[4].o, sp[5].o);
	sp[0].o = (jobject)((func_arc_assets_AssetManager_load_java_lang_String_java_lang_Class_arc_assets_AssetLoaderParameters_R_arc_assets_AssetDescriptor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_load_java_lang_String_java_lang_Class_arc_assets_AssetLoaderParameters_R_arc_assets_AssetDescriptor])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_Fonts_invoke_arc_func_Cons_10(ctx);
		auto proxy = (mindustry_ui_Fonts_invoke_arc_func_Cons_10 *) gcAlloc(ctx, &class_mindustry_ui_Fonts_invoke_arc_func_Cons_10);
		sp[1].o = (jobject) proxy;
	}
	((arc_assets_AssetDescriptor *) NULL_CHECK(sp[0].o))->F_loaded = (jref) sp[1].o;
	LINE_NUMBER(78);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_assets;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"icon"_j));
	sp[2].o = ((jobject) &class_arc_graphics_g2d_Font);
	clinit_arc_freetype_FreetypeFontLoader$FreeTypeFontLoaderParameter(ctx);
	sp[3].o = gcAlloc(ctx, &class_arc_freetype_FreetypeFontLoader$FreeTypeFontLoaderParameter);
	sp[4].o = ((jobject) createStringLiteral(ctx, u8"fonts/icon.ttf"_j));
	clinit_mindustry_ui_Fonts$2(ctx);
	sp[5].o = gcAlloc(ctx, &class_mindustry_ui_Fonts$2);
	init_mindustry_ui_Fonts$2(ctx, sp[5].o);
	init_arc_freetype_FreetypeFontLoader$FreeTypeFontLoaderParameter_java_lang_String_arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter(ctx, sp[3].o, sp[4].o, sp[5].o);
	sp[0].o = (jobject)((func_arc_assets_AssetManager_load_java_lang_String_java_lang_Class_arc_assets_AssetLoaderParameters_R_arc_assets_AssetDescriptor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_load_java_lang_String_java_lang_Class_arc_assets_AssetLoaderParameters_R_arc_assets_AssetDescriptor])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_Fonts_invoke_arc_func_Cons_11(ctx);
		auto proxy = (mindustry_ui_Fonts_invoke_arc_func_Cons_11 *) gcAlloc(ctx, &class_mindustry_ui_Fonts_invoke_arc_func_Cons_11);
		sp[1].o = (jobject) proxy;
	}
	((arc_assets_AssetDescriptor *) NULL_CHECK(sp[0].o))->F_loaded = (jref) sp[1].o;
	LINE_NUMBER(84);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_assets;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"iconLarge"_j));
	sp[2].o = ((jobject) &class_arc_graphics_g2d_Font);
	clinit_arc_freetype_FreetypeFontLoader$FreeTypeFontLoaderParameter(ctx);
	sp[3].o = gcAlloc(ctx, &class_arc_freetype_FreetypeFontLoader$FreeTypeFontLoaderParameter);
	sp[4].o = ((jobject) createStringLiteral(ctx, u8"fonts/icon.ttf"_j));
	clinit_mindustry_ui_Fonts$3(ctx);
	sp[5].o = gcAlloc(ctx, &class_mindustry_ui_Fonts$3);
	init_mindustry_ui_Fonts$3(ctx, sp[5].o);
	init_arc_freetype_FreetypeFontLoader$FreeTypeFontLoaderParameter_java_lang_String_arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter(ctx, sp[3].o, sp[4].o, sp[5].o);
	sp[0].o = (jobject)((func_arc_assets_AssetManager_load_java_lang_String_java_lang_Class_arc_assets_AssetLoaderParameters_R_arc_assets_AssetDescriptor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_load_java_lang_String_java_lang_Class_arc_assets_AssetLoaderParameters_R_arc_assets_AssetDescriptor])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_Fonts_invoke_arc_func_Cons_12(ctx);
		auto proxy = (mindustry_ui_Fonts_invoke_arc_func_Cons_12 *) gcAlloc(ctx, &class_mindustry_ui_Fonts_invoke_arc_func_Cons_12);
		sp[1].o = (jobject) proxy;
	}
	((arc_assets_AssetDescriptor *) NULL_CHECK(sp[0].o))->F_loaded = (jref) sp[1].o;
	LINE_NUMBER(92);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_assets;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"logic"_j));
	sp[2].o = ((jobject) &class_arc_graphics_g2d_Font);
	clinit_arc_freetype_FreetypeFontLoader$FreeTypeFontLoaderParameter(ctx);
	sp[3].o = gcAlloc(ctx, &class_arc_freetype_FreetypeFontLoader$FreeTypeFontLoaderParameter);
	sp[4].o = ((jobject) createStringLiteral(ctx, u8"fonts/logic.ttf"_j));
	clinit_mindustry_ui_Fonts$4(ctx);
	sp[5].o = gcAlloc(ctx, &class_mindustry_ui_Fonts$4);
	init_mindustry_ui_Fonts$4(ctx, sp[5].o);
	init_arc_freetype_FreetypeFontLoader$FreeTypeFontLoaderParameter_java_lang_String_arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter(ctx, sp[3].o, sp[4].o, sp[5].o);
	sp[0].o = (jobject)((func_arc_assets_AssetManager_load_java_lang_String_java_lang_Class_arc_assets_AssetLoaderParameters_R_arc_assets_AssetDescriptor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_load_java_lang_String_java_lang_Class_arc_assets_AssetLoaderParameters_R_arc_assets_AssetDescriptor])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_Fonts_invoke_arc_func_Cons_13(ctx);
		auto proxy = (mindustry_ui_Fonts_invoke_arc_func_Cons_13 *) gcAlloc(ctx, &class_mindustry_ui_Fonts_invoke_arc_func_Cons_13);
		sp[1].o = (jobject) proxy;
	}
	((arc_assets_AssetDescriptor *) NULL_CHECK(sp[0].o))->F_loaded = (jref) sp[1].o;
	LINE_NUMBER(99);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_Fonts_loadExtraFonts(jcontext ctx) {
	jtype frame[8];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Fonts:loadExtraFonts", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_Fonts(ctx);
	{
	LINE_NUMBER(103);
	sp[0].o = (jobject)SM_java_util_Locale_getDefault_R_java_util_Locale(ctx);
	sp[0].o = (jobject)((func_java_util_Locale_getLanguage_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Locale_getLanguage_R_java_lang_String])(ctx, sp[0].o);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ja"_j))));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(104);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_assets;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"font_jp"_j));
	sp[2].o = ((jobject) &class_arc_graphics_g2d_Font);
	clinit_arc_freetype_FreetypeFontLoader$FreeTypeFontLoaderParameter(ctx);
	sp[3].o = gcAlloc(ctx, &class_arc_freetype_FreetypeFontLoader$FreeTypeFontLoaderParameter);
	sp[4].o = ((jobject) createStringLiteral(ctx, u8"fonts/font_jp.woff"_j));
	clinit_mindustry_ui_Fonts$5(ctx);
	sp[5].o = gcAlloc(ctx, &class_mindustry_ui_Fonts$5);
	init_mindustry_ui_Fonts$5(ctx, sp[5].o);
	init_arc_freetype_FreetypeFontLoader$FreeTypeFontLoaderParameter_java_lang_String_arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter(ctx, sp[3].o, sp[4].o, sp[5].o);
	sp[0].o = (jobject)((func_arc_assets_AssetManager_load_java_lang_String_java_lang_Class_arc_assets_AssetLoaderParameters_R_arc_assets_AssetDescriptor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_load_java_lang_String_java_lang_Class_arc_assets_AssetLoaderParameters_R_arc_assets_AssetDescriptor])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_Fonts_invoke_arc_func_Cons_14(ctx);
		auto proxy = (mindustry_ui_Fonts_invoke_arc_func_Cons_14 *) gcAlloc(ctx, &class_mindustry_ui_Fonts_invoke_arc_func_Cons_14);
		sp[1].o = (jobject) proxy;
	}
	((arc_assets_AssetDescriptor *) NULL_CHECK(sp[0].o))->F_loaded = (jref) sp[1].o;
	LINE_NUMBER(112);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_assets;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"font_jp_outline"_j));
	sp[2].o = ((jobject) &class_arc_graphics_g2d_Font);
	clinit_arc_freetype_FreetypeFontLoader$FreeTypeFontLoaderParameter(ctx);
	sp[3].o = gcAlloc(ctx, &class_arc_freetype_FreetypeFontLoader$FreeTypeFontLoaderParameter);
	sp[4].o = ((jobject) createStringLiteral(ctx, u8"fonts/font_jp.woff"_j));
	clinit_mindustry_ui_Fonts$6(ctx);
	sp[5].o = gcAlloc(ctx, &class_mindustry_ui_Fonts$6);
	init_mindustry_ui_Fonts$6(ctx, sp[5].o);
	init_arc_freetype_FreetypeFontLoader$FreeTypeFontLoaderParameter_java_lang_String_arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter(ctx, sp[3].o, sp[4].o, sp[5].o);
	sp[0].o = (jobject)((func_arc_assets_AssetManager_load_java_lang_String_java_lang_Class_arc_assets_AssetLoaderParameters_R_arc_assets_AssetDescriptor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_load_java_lang_String_java_lang_Class_arc_assets_AssetLoaderParameters_R_arc_assets_AssetDescriptor])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_Fonts_invoke_arc_func_Cons_15(ctx);
		auto proxy = (mindustry_ui_Fonts_invoke_arc_func_Cons_15 *) gcAlloc(ctx, &class_mindustry_ui_Fonts_invoke_arc_func_Cons_15);
		sp[1].o = (jobject) proxy;
	}
	((arc_assets_AssetDescriptor *) NULL_CHECK(sp[0].o))->F_loaded = (jref) sp[1].o;
	}
label_1:;
	LINE_NUMBER(119);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_mindustry_ui_Fonts_unicodeToName_int_R_java_lang_String(jcontext ctx, jint param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Fonts:unicodeToName", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_Fonts(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(122);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_unicodeToName;
	jint temp0 = frame[0].i;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_Fonts_invoke_arc_func_Prov_2(ctx);
		auto proxy = (mindustry_ui_Fonts_invoke_arc_func_Prov_2 *) gcAlloc(ctx, &class_mindustry_ui_Fonts_invoke_arc_func_Prov_2);
		proxy->F_field0 = (frame[0].i);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_IntMap_get_int_arc_func_Prov_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntMap_get_int_arc_func_Prov_R_java_lang_Object])(ctx, sp[0].o, temp0, sp[1].o);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_java_lang_String, sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_ui_Fonts_getLargeIcon_java_lang_String_R_arc_graphics_g2d_TextureRegion(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Fonts:getLargeIcon", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_Fonts(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(126);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_largeIcons;
	sp[1].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_Fonts_invoke_arc_func_Prov_3(ctx);
		auto proxy = (mindustry_ui_Fonts_invoke_arc_func_Prov_3 *) gcAlloc(ctx, &class_mindustry_ui_Fonts_invoke_arc_func_Prov_3);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_arc_func_Prov_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_arc_func_Prov_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_arc_graphics_g2d_TextureRegion, sp[0].o));
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_Fonts_registerIcon_java_lang_String_java_lang_String_int_arc_graphics_g2d_TextureRegion(jcontext ctx, jobject param0, jobject param1, jint param2, jobject param3) {
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Fonts:registerIcon", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_Fonts(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(138);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData])(ctx, sp[0].o);
	jfloat temp0 = (jfloat)((arc_graphics_g2d_Font$FontData *) NULL_CHECK(sp[0].o))->F_lineHeight;
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData])(ctx, sp[0].o);
	frame[4].i = (jint((temp0 / ((jfloat)((arc_graphics_g2d_Font$FontData *) NULL_CHECK(sp[0].o))->F_scaleY))));
	LINE_NUMBER(140);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_unicodeIcons;
	((func_arc_struct_ObjectIntMap_put_java_lang_Object_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectIntMap_put_java_lang_Object_int])(ctx, sp[0].o, (frame[0].o), (frame[2].i));
	LINE_NUMBER(141);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_stringIcons;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001"_j.string, 1, boxCharacter(ctx, (jchar((frame[2].i)))));
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(142);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_unicodeToName;
	sp[0].o = (jobject)((func_arc_struct_IntMap_put_int_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntMap_put_int_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[2].i), (frame[1].o));
	LINE_NUMBER(144);
	clinit_arc_util_Scaling(ctx);
	sp[0].o = (jobject)SF_arc_util_Scaling_fit;
	sp[0].o = (jobject)((func_arc_util_Scaling_apply_float_float_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_Scaling_apply_float_float_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (jfloat(((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[3].o)))->F_width))), (jfloat(((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[3].o)))->F_height))), (jfloat((frame[4].i))), (jfloat((frame[4].i))));
	frame[5].o = sp[0].o;
	LINE_NUMBER(146);
	clinit_arc_graphics_g2d_Font$Glyph(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_g2d_Font$Glyph);
	init_arc_graphics_g2d_Font$Glyph(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(147);
	((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[6].o)))->F_id = (frame[2].i);
	LINE_NUMBER(148);
	((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[6].o)))->F_srcX = (jint(0));
	LINE_NUMBER(149);
	((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[6].o)))->F_srcY = (jint(0));
	LINE_NUMBER(150);
	((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[6].o)))->F_width = (jint(((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[5].o)))->F_x)));
	LINE_NUMBER(151);
	((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[6].o)))->F_height = (jint(((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[5].o)))->F_y)));
	LINE_NUMBER(152);
	((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[6].o)))->F_u = ((jfloat)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[3].o)))->F_u);
	LINE_NUMBER(153);
	((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[6].o)))->F_v = ((jfloat)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[3].o)))->F_v2);
	LINE_NUMBER(154);
	((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[6].o)))->F_u2 = ((jfloat)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[3].o)))->F_u2);
	LINE_NUMBER(155);
	((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[6].o)))->F_v2 = ((jfloat)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[3].o)))->F_v);
	LINE_NUMBER(156);
	((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[6].o)))->F_xoffset = (((frame[4].i) - ((jint)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[6].o)))->F_width)) / (jint(2)));
	LINE_NUMBER(157);
	((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[6].o)))->F_yoffset = ((((frame[4].i) - ((jint)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[6].o)))->F_height)) / (jint(2))) - (frame[4].i));
	LINE_NUMBER(158);
	((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[6].o)))->F_xadvance = (frame[4].i);
	LINE_NUMBER(159);
	((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[6].o)))->F_kerning = (jref) (jobject(nullptr));
	LINE_NUMBER(160);
	((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[6].o)))->F_fixedWidth = (jint(1));
	LINE_NUMBER(161);
	((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[6].o)))->F_page = (jint(0));
	LINE_NUMBER(162);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData])(ctx, sp[0].o);
	((func_arc_graphics_g2d_Font$FontData_setGlyph_int_arc_graphics_g2d_Font$Glyph) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font$FontData_setGlyph_int_arc_graphics_g2d_Font$Glyph])(ctx, sp[0].o, (frame[2].i), (frame[6].o));
	LINE_NUMBER(163);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_outline;
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData])(ctx, sp[0].o);
	((func_arc_graphics_g2d_Font$FontData_setGlyph_int_arc_graphics_g2d_Font$Glyph) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font$FontData_setGlyph_int_arc_graphics_g2d_Font$Glyph])(ctx, sp[0].o, (frame[2].i), (frame[6].o));
	LINE_NUMBER(164);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_Fonts_loadContentIcons(jcontext ctx) {
	jtype frame[13];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Fonts:loadContentIcons", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_Fonts(ctx);
	{
	LINE_NUMBER(167);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"logo"_j))));
	sp[0].o = (jobject)((arc_graphics_g2d_TextureRegion *) NULL_CHECK(sp[0].o))->F_texture;
	frame[0].o = sp[0].o;
	}
label_11: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_10; }
	}
	{
	LINE_NUMBER(169);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_files;
	sp[0].o = (jobject)((func_arc_Files_internal_java_lang_String_R_arc_files_Fi) resolveInterfaceMethod(ctx, &class_arc_Files, INDEX_arc_Files_internal_java_lang_String_R_arc_files_Fi, sp[0].o))(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"icons/icons.properties"_j))));
	sp[0].o = (jobject)((func_arc_files_Fi_reader_int_R_java_io_BufferedReader) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_reader_int_R_java_io_BufferedReader])(ctx, sp[0].o, (8192));
	frame[1].o = sp[0].o;
	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(171);
	sp[0].o = (jobject)((func_java_io_BufferedReader_readLine_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_BufferedReader_readLine_R_java_lang_String])(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(172);
	sp[0].o = (jobject)((func_java_lang_String_split_java_lang_String_R_Array1_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_split_java_lang_String_R_Array1_java_lang_String])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"="_j))));
	frame[3].o = sp[0].o;
	LINE_NUMBER(173);
	sp[0].o = (jobject)((func_java_lang_String_split_java_lang_String_R_Array1_java_lang_String) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (jint(1)))))->vtable)[VTABLE_java_lang_String_split_java_lang_String_R_Array1_java_lang_String])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (jint(1)))), (((jobject) createStringLiteral(ctx, u8"\\|"_j))));
	frame[4].o = sp[0].o;
	LINE_NUMBER(174);
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (jint(0))));
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (jint(1))));
	LINE_NUMBER(175);
	jint temp0 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_R_int(ctx, (frame[5].o));
	frame[7].i = temp0;
	LINE_NUMBER(176);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[0].o, (frame[6].o));
	frame[8].o = sp[0].o;
	LINE_NUMBER(178);
	sp[0].o = (jobject)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[8].o)))->F_texture;
	if (sp[0].o == (frame[0].o)) goto label_21;
	}
	LINE_NUMBER(179);
	{ popExceptionFrames(frameRef, 1); goto label_0; }
label_21:;
	{
	LINE_NUMBER(182);
	SM_mindustry_ui_Fonts_registerIcon_java_lang_String_java_lang_String_int_arc_graphics_g2d_TextureRegion(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (jint(0)))), (frame[6].o), (frame[7].i), (frame[8].o));
	LINE_NUMBER(183);
	{ popExceptionFrames(frameRef, 1); goto label_0; }
	}
label_1:;
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(184);
	if ((frame[1].o) == nullptr) goto label_9;
	}
	{
	((func_java_io_BufferedReader_close) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_BufferedReader_close])(ctx, (frame[1].o));
	goto label_9;
	}
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(169);
	frame[2].o = sp[0].o;
	if ((frame[1].o) == nullptr) goto label_24;
	}
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	INST_ALOAD(1);
	POP_N(1); // Pop method args
	((func_java_io_BufferedReader_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_BufferedReader_close])(ctx, sp[0].o);
	popExceptionFrame(frameRef);
	goto label_24;
label_6:;
	{
	sp -= 1;
	frame[3].o = sp[0].o;
	((func_java_lang_Throwable_addSuppressed_java_lang_Throwable) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Throwable_addSuppressed_java_lang_Throwable])(ctx, (frame[2].o), (frame[3].o));
	}
label_24:;
	INST_ALOAD(2);
	INST_ATHROW();
	label_9:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(186);
	goto label_25;
label_10:;
	{
	sp -= 1;
	LINE_NUMBER(184);
	frame[1].o = sp[0].o;
	LINE_NUMBER(185);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_Throwable(ctx, sp[0].o, (frame[1].o));
	throwException(ctx, sp[0].o);	}
label_25:;
	{
	LINE_NUMBER(188);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_stringIcons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"alphachan"_j));
	clinit_mindustry_ui_Fonts(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Fonts_stringIcons;
	sp[2].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[2].o, (((jobject) createStringLiteral(ctx, u8"alphaaaa"_j))));
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, (checkCast(ctx, &class_java_lang_String, sp[2].o)));
	LINE_NUMBER(209);
	clinit_mindustry_game_Team(ctx);
	sp[0].o = (jobject)SF_mindustry_game_Team_baseTeams;
	frame[1].o = sp[0].o;
	frame[2].i = (((jarray) nullCheck(ctx, (frame[1].o)))->length);
	frame[3].i = (jint(0));
	}
label_28:;
	{
	if ((frame[3].i) >= (frame[2].i)) goto label_29;
	}
	{
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i)));
	LINE_NUMBER(210);
	sp[0].o = frame[4].o;
	clinit_mindustry_ui_Fonts(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_Fonts_stringIcons;
	sp[2].o = (jobject)((mindustry_game_Team *) NULL_CHECK((frame[4].o)))->F_name;
	sp[1].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[1].o, sp[2].o, (((jobject) createStringLiteral(ctx, u8""_j))));
	((mindustry_game_Team *) NULL_CHECK(sp[0].o))->F_emoji = (jref) (checkCast(ctx, &class_java_lang_String, sp[1].o));
	LINE_NUMBER(209);
	INST_IINC(3, 1);
	goto label_28;
	}
label_29:;
	LINE_NUMBER(212);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_ui_Fonts_loadContentIconsHeadless(jcontext ctx) {
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Fonts:loadContentIconsHeadless", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_Fonts(ctx);
label_11: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_10; }
	}
	{
	LINE_NUMBER(215);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_files;
	sp[0].o = (jobject)((func_arc_Files_internal_java_lang_String_R_arc_files_Fi) resolveInterfaceMethod(ctx, &class_arc_Files, INDEX_arc_Files_internal_java_lang_String_R_arc_files_Fi, sp[0].o))(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"icons/icons.properties"_j))));
	sp[0].o = (jobject)((func_arc_files_Fi_reader_int_R_java_io_BufferedReader) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_reader_int_R_java_io_BufferedReader])(ctx, sp[0].o, (8192));
	frame[0].o = sp[0].o;
	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(217);
	sp[0].o = (jobject)((func_java_io_BufferedReader_readLine_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_BufferedReader_readLine_R_java_lang_String])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(218);
	sp[0].o = (jobject)((func_java_lang_String_split_java_lang_String_R_Array1_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_split_java_lang_String_R_Array1_java_lang_String])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"="_j))));
	frame[2].o = sp[0].o;
	LINE_NUMBER(219);
	sp[0].o = (jobject)((func_java_lang_String_split_java_lang_String_R_Array1_java_lang_String) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (jint(1)))))->vtable)[VTABLE_java_lang_String_split_java_lang_String_R_Array1_java_lang_String])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (jint(1)))), (((jobject) createStringLiteral(ctx, u8"\\|"_j))));
	frame[3].o = sp[0].o;
	LINE_NUMBER(220);
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (jint(0))));
	LINE_NUMBER(221);
	jint temp0 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_R_int(ctx, (frame[4].o));
	frame[5].i = temp0;
	LINE_NUMBER(223);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_unicodeIcons;
	((func_arc_struct_ObjectIntMap_put_java_lang_Object_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectIntMap_put_java_lang_Object_int])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (jint(0)))), (frame[5].i));
	LINE_NUMBER(224);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_stringIcons;
	sp[1].o = (jobject)ARRAY_ACCESS(jobject, (frame[3].o), (jint(0)));
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001"_j.string, 1, boxCharacter(ctx, (jchar((frame[5].i)))));
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(225);
	{ popExceptionFrames(frameRef, 1); goto label_0; }
	}
label_1:;
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(226);
	if ((frame[0].o) == nullptr) goto label_9;
	}
	{
	((func_java_io_BufferedReader_close) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_BufferedReader_close])(ctx, (frame[0].o));
	goto label_9;
	}
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(215);
	frame[1].o = sp[0].o;
	if ((frame[0].o) == nullptr) goto label_20;
	}
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	((func_java_io_BufferedReader_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_BufferedReader_close])(ctx, sp[0].o);
	popExceptionFrame(frameRef);
	goto label_20;
label_6:;
	{
	sp -= 1;
	frame[2].o = sp[0].o;
	((func_java_lang_Throwable_addSuppressed_java_lang_Throwable) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Throwable_addSuppressed_java_lang_Throwable])(ctx, (frame[1].o), (frame[2].o));
	}
label_20:;
	INST_ALOAD(1);
	INST_ATHROW();
	label_9:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(228);
	goto label_21;
label_10:;
	{
	sp -= 1;
	LINE_NUMBER(226);
	frame[0].o = sp[0].o;
	LINE_NUMBER(227);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_Throwable(ctx, sp[0].o, (frame[0].o));
	throwException(ctx, sp[0].o);	}
label_21:;
	{
	LINE_NUMBER(230);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_stringIcons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"alphachan"_j));
	clinit_mindustry_ui_Fonts(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Fonts_stringIcons;
	sp[2].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[2].o, (((jobject) createStringLiteral(ctx, u8"alphaaaa"_j))));
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, (checkCast(ctx, &class_java_lang_String, sp[2].o)));
	LINE_NUMBER(232);
	clinit_mindustry_game_Team(ctx);
	sp[0].o = (jobject)SF_mindustry_game_Team_baseTeams;
	frame[0].o = sp[0].o;
	frame[1].i = (((jarray) nullCheck(ctx, (frame[0].o)))->length);
	frame[2].i = (jint(0));
	}
label_24:;
	{
	if ((frame[2].i) >= (frame[1].i)) goto label_25;
	}
	{
	frame[3].o = ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[2].i)));
	LINE_NUMBER(233);
	sp[0].o = frame[3].o;
	clinit_mindustry_ui_Fonts(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_Fonts_stringIcons;
	sp[2].o = (jobject)((mindustry_game_Team *) NULL_CHECK((frame[3].o)))->F_name;
	sp[1].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[1].o, sp[2].o, (((jobject) createStringLiteral(ctx, u8""_j))));
	((mindustry_game_Team *) NULL_CHECK(sp[0].o))->F_emoji = (jref) (checkCast(ctx, &class_java_lang_String, sp[1].o));
	LINE_NUMBER(232);
	INST_IINC(2, 1);
	goto label_24;
	}
label_25:;
	LINE_NUMBER(235);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_ui_Fonts_loadDefaultFont(jcontext ctx) {
	jtype frame[10];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Fonts:loadDefaultFont", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_Fonts(ctx);
	{
	LINE_NUMBER(239);
	jint temp0 = (jint)SM_arc_graphics_Gl_getInt_int_R_int(ctx, (3379));
	frame[0].i = temp0;
	LINE_NUMBER(241);
	clinit_arc_graphics_g2d_PixmapPacker(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_g2d_PixmapPacker);
	sp[1].o = sp[0].o;
	sp += 2;
	if ((frame[0].i) < (4096)) goto label_2;
	}
	INST_SIPUSH(4096);
	goto label_3;
label_2:;
	INST_SIPUSH(2048);
label_3:;
	{
	sp -= 3;
	init_arc_graphics_g2d_PixmapPacker_int_int_int_boolean(ctx, sp[0].o, sp[2].i, (2048), (jint(2)), (jint(1)));
	clinit_mindustry_core_UI(ctx);
	SF_mindustry_core_UI_packer = sp[0].o;
	LINE_NUMBER(242);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_assets;
	sp[1].o = ((jobject) &class_arc_freetype_FreeTypeFontGenerator);
	clinit_arc_freetype_FreeTypeFontGeneratorLoader(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_freetype_FreeTypeFontGeneratorLoader);
	clinit_arc_Core(ctx);
	sp[3].o = (jobject)SF_arc_Core_files;
	sp[4].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[3].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_Fonts_invoke_arc_assets_loaders_FileHandleResolver_2(ctx);
		auto proxy = (mindustry_ui_Fonts_invoke_arc_assets_loaders_FileHandleResolver_2 *) gcAlloc(ctx, &class_mindustry_ui_Fonts_invoke_arc_assets_loaders_FileHandleResolver_2);
		proxy->F_field0 = (jref) sp[3].o;
		sp[3].o = (jobject) proxy;
	}
	init_arc_freetype_FreeTypeFontGeneratorLoader_arc_assets_loaders_FileHandleResolver(ctx, sp[2].o, sp[3].o);
	((func_arc_assets_AssetManager_setLoader_java_lang_Class_arc_assets_loaders_AssetLoader) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_setLoader_java_lang_Class_arc_assets_loaders_AssetLoader])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(243);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_assets;
	sp[1].o = ((jobject) &class_arc_graphics_g2d_Font);
	sp[2].o = jobject(nullptr);
	clinit_mindustry_ui_Fonts$7(ctx);
	sp[3].o = gcAlloc(ctx, &class_mindustry_ui_Fonts$7);
	clinit_arc_Core(ctx);
	sp[4].o = (jobject)SF_arc_Core_files;
	sp[5].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[4].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_Fonts_invoke_arc_assets_loaders_FileHandleResolver_3(ctx);
		auto proxy = (mindustry_ui_Fonts_invoke_arc_assets_loaders_FileHandleResolver_3 *) gcAlloc(ctx, &class_mindustry_ui_Fonts_invoke_arc_assets_loaders_FileHandleResolver_3);
		proxy->F_field0 = (jref) sp[4].o;
		sp[4].o = (jobject) proxy;
	}
	init_mindustry_ui_Fonts$7_arc_assets_loaders_FileHandleResolver(ctx, sp[3].o, sp[4].o);
	((func_arc_assets_AssetManager_setLoader_java_lang_Class_java_lang_String_arc_assets_loaders_AssetLoader) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_setLoader_java_lang_Class_java_lang_String_arc_assets_loaders_AssetLoader])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(265);
	clinit_mindustry_ui_Fonts$8(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_Fonts$8);
	init_mindustry_ui_Fonts$8(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(271);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_assets;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"outline"_j));
	sp[2].o = ((jobject) &class_arc_graphics_g2d_Font);
	clinit_arc_freetype_FreetypeFontLoader$FreeTypeFontLoaderParameter(ctx);
	sp[3].o = gcAlloc(ctx, &class_arc_freetype_FreetypeFontLoader$FreeTypeFontLoaderParameter);
	init_arc_freetype_FreetypeFontLoader$FreeTypeFontLoaderParameter_java_lang_String_arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter(ctx, sp[3].o, (((jobject) createStringLiteral(ctx, u8"fonts/font.woff"_j))), (frame[1].o));
	sp[0].o = (jobject)((func_arc_assets_AssetManager_load_java_lang_String_java_lang_Class_arc_assets_AssetLoaderParameters_R_arc_assets_AssetDescriptor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_load_java_lang_String_java_lang_Class_arc_assets_AssetLoaderParameters_R_arc_assets_AssetDescriptor])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_Fonts_invoke_arc_func_Cons_16(ctx);
		auto proxy = (mindustry_ui_Fonts_invoke_arc_func_Cons_16 *) gcAlloc(ctx, &class_mindustry_ui_Fonts_invoke_arc_func_Cons_16);
		sp[1].o = (jobject) proxy;
	}
	((arc_assets_AssetDescriptor *) NULL_CHECK(sp[0].o))->F_loaded = (jref) sp[1].o;
	LINE_NUMBER(273);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_assets;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"tech"_j));
	sp[2].o = ((jobject) &class_arc_graphics_g2d_Font);
	clinit_arc_freetype_FreetypeFontLoader$FreeTypeFontLoaderParameter(ctx);
	sp[3].o = gcAlloc(ctx, &class_arc_freetype_FreetypeFontLoader$FreeTypeFontLoaderParameter);
	sp[4].o = ((jobject) createStringLiteral(ctx, u8"fonts/tech.ttf"_j));
	clinit_mindustry_ui_Fonts$9(ctx);
	sp[5].o = gcAlloc(ctx, &class_mindustry_ui_Fonts$9);
	init_mindustry_ui_Fonts$9(ctx, sp[5].o);
	init_arc_freetype_FreetypeFontLoader$FreeTypeFontLoaderParameter_java_lang_String_arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter(ctx, sp[3].o, sp[4].o, sp[5].o);
	sp[0].o = (jobject)((func_arc_assets_AssetManager_load_java_lang_String_java_lang_Class_arc_assets_AssetLoaderParameters_R_arc_assets_AssetDescriptor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_load_java_lang_String_java_lang_Class_arc_assets_AssetLoaderParameters_R_arc_assets_AssetDescriptor])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_Fonts_invoke_arc_func_Cons_17(ctx);
		auto proxy = (mindustry_ui_Fonts_invoke_arc_func_Cons_17 *) gcAlloc(ctx, &class_mindustry_ui_Fonts_invoke_arc_func_Cons_17);
		sp[1].o = (jobject) proxy;
	}
	((arc_assets_AssetDescriptor *) NULL_CHECK(sp[0].o))->F_loaded = (jref) sp[1].o;
	LINE_NUMBER(279);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_Fonts_mergeFontAtlas_arc_graphics_g2d_TextureAtlas(jcontext ctx, jobject param0) {
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Fonts:mergeFontAtlas", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_Fonts(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(286);
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"logo"_j))));
	sp[0].o = (jobject)((arc_graphics_g2d_TextureRegion *) NULL_CHECK(sp[0].o))->F_texture;
	frame[1].o = sp[0].o;
	LINE_NUMBER(288);
	clinit_mindustry_core_UI(ctx);
	sp[0].o = (jobject)SF_mindustry_core_UI_packer;
	sp[0].o = (jobject)((func_arc_graphics_g2d_PixmapPacker_getPages_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_PixmapPacker_getPages_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_first_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_first_R_java_lang_Object])(ctx, sp[0].o);
	frame[2].o = (checkCast(ctx, &class_arc_graphics_g2d_PixmapPacker$Page, sp[0].o));
	LINE_NUMBER(290);
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_getRegions_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_getRegions_R_arc_struct_Seq])(ctx, (frame[0].o));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_Fonts_invoke_arc_func_Boolf_1(ctx);
		auto proxy = (mindustry_ui_Fonts_invoke_arc_func_Boolf_1 *) gcAlloc(ctx, &class_mindustry_ui_Fonts_invoke_arc_func_Boolf_1);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_select_arc_func_Boolf_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_select_arc_func_Boolf_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(291);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[3].o));
	frame[4].o = sp[0].o;
	}
label_4:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	frame[5].o = (checkCast(ctx, &class_arc_graphics_g2d_TextureAtlas$AtlasRegion, sp[0].o));
	LINE_NUMBER(293);
	((func_arc_graphics_g2d_PixmapPacker$Page_setDirty_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_graphics_g2d_PixmapPacker$Page_setDirty_boolean])(ctx, (frame[2].o), (jint(0)));
	LINE_NUMBER(294);
	clinit_mindustry_core_UI(ctx);
	sp[0].o = (jobject)SF_mindustry_core_UI_packer;
	sp[1].o = (jobject)((arc_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[5].o)))->F_name;
	sp[2].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_getPixmap_arc_graphics_g2d_TextureAtlas$AtlasRegion_R_arc_graphics_g2d_PixmapRegion) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_getPixmap_arc_graphics_g2d_TextureAtlas$AtlasRegion_R_arc_graphics_g2d_PixmapRegion])(ctx, (frame[0].o), (frame[5].o));
	sp[3].o = (jobject)((arc_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[5].o)))->F_splits;
	sp[4].o = (jobject)((arc_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[5].o)))->F_pads;
	sp[0].o = (jobject)((func_arc_graphics_g2d_PixmapPacker_pack_java_lang_String_arc_graphics_g2d_PixmapRegion_Array1_int_Array1_int_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_PixmapPacker_pack_java_lang_String_arc_graphics_g2d_PixmapRegion_Array1_int_Array1_int_R_arc_math_geom_Rect])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(297);
	sp[0].o = frame[5].o;
	clinit_mindustry_core_UI(ctx);
	sp[1].o = (jobject)SF_mindustry_core_UI_packer;
	sp[1].o = (jobject)((func_arc_graphics_g2d_PixmapPacker_getPages_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_PixmapPacker_getPages_R_arc_struct_Seq])(ctx, sp[1].o);
	sp[1].o = (jobject)((func_arc_struct_Seq_first_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_first_R_java_lang_Object])(ctx, sp[1].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_PixmapPacker$Page_getTexture_R_arc_graphics_Texture) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_graphics_g2d_PixmapPacker$Page, sp[1].o)))->vtable)[VTABLE_arc_graphics_g2d_PixmapPacker$Page_getTexture_R_arc_graphics_Texture])(ctx, (checkCast(ctx, &class_arc_graphics_g2d_PixmapPacker$Page, sp[1].o)));
	((arc_graphics_g2d_TextureRegion *) NULL_CHECK(sp[0].o))->F_texture = (jref) sp[1].o;
	LINE_NUMBER(299);
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas$AtlasRegion_set_int_int_int_int_R_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas$AtlasRegion_set_int_int_int_int_R_arc_graphics_g2d_TextureRegion])(ctx, (frame[5].o), (jint(((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[6].o)))->F_x))), (jint(((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[6].o)))->F_y))), (jint(((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[6].o)))->F_width))), (jint(((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[6].o)))->F_height))));
	LINE_NUMBER(301);
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_getTextures_R_arc_struct_ObjectSet) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_getTextures_R_arc_struct_ObjectSet])(ctx, (frame[0].o));
	sp[1].o = (jobject)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[5].o)))->F_texture;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_add_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(303);
	((arc_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[5].o)))->F_pixmapRegion = (jref) (jobject(nullptr));
	LINE_NUMBER(304);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(307);
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_getTextures_R_arc_struct_ObjectSet) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_getTextures_R_arc_struct_ObjectSet])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_arc_struct_ObjectSet_remove_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_remove_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(308);
	((func_arc_graphics_Texture_dispose) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_graphics_Texture_dispose])(ctx, (frame[1].o));
	LINE_NUMBER(309);
	((func_arc_graphics_g2d_TextureAtlas_disposePixmap_arc_graphics_Texture) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_disposePixmap_arc_graphics_Texture])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(311);
	((func_arc_graphics_g2d_PixmapPacker$Page_setDirty_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_graphics_g2d_PixmapPacker$Page_setDirty_boolean])(ctx, (frame[2].o), (jint(1)));
	LINE_NUMBER(312);
	sp[0].o = frame[2].o;
	clinit_arc_graphics_Texture$TextureFilter(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Texture$TextureFilter_linear;
	clinit_arc_graphics_Texture$TextureFilter(ctx);
	sp[2].o = (jobject)SF_arc_graphics_Texture$TextureFilter_linear;
	jint temp1 = (jint)((func_arc_graphics_g2d_PixmapPacker$Page_updateTexture_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_PixmapPacker$Page_updateTexture_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter_boolean_R_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o, (jint(0)));
	LINE_NUMBER(313);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(jcontext ctx, jobject param0, jchar param1) {
	jtype frame[15];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Fonts:getGlyph", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_Fonts(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(316);
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font$FontData_getGlyph_char_R_arc_graphics_g2d_Font$Glyph) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font$FontData_getGlyph_char_R_arc_graphics_g2d_Font$Glyph])(ctx, sp[0].o, (frame[1].i));
	frame[2].o = sp[0].o;
	LINE_NUMBER(317);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(318);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"No icon found for glyph: @ (@)"_j));
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(2)));
	jint temp0 = jint(0);
	sp[2].o = (jobject)SM_java_lang_Character_valueOf_char_R_java_lang_Character(ctx, (frame[1].i));
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	jint temp1 = jint(1);
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (frame[1].i));
	ARRAY_ACCESS(jobject, sp[1].o, temp1) = sp[2].o;
	SM_arc_util_Log_warn_java_lang_String_Array1_java_lang_Object(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(319);
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font$FontData_getGlyph_char_R_arc_graphics_g2d_Font$Glyph) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font$FontData_getGlyph_char_R_arc_graphics_g2d_Font$Glyph])(ctx, sp[0].o, (70));
	frame[2].o = sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(321);
	frame[3].o = (frame[2].o);
	LINE_NUMBER(323);
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, ((jint)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[3].o)))->F_width), ((jint)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[3].o)))->F_height));
	frame[4].f = (jfloat(temp0));
	LINE_NUMBER(324);
	clinit_mindustry_ui_Fonts$10(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_Fonts$10);
	clinit_arc_graphics_g2d_TextureRegion(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_g2d_TextureRegion);
	sp[2].o = (jobject)((func_arc_graphics_g2d_Font_getRegion_R_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_Font_getRegion_R_arc_graphics_g2d_TextureRegion])(ctx, (frame[0].o));
	sp[2].o = (jobject)((arc_graphics_g2d_TextureRegion *) NULL_CHECK(sp[2].o))->F_texture;
	init_arc_graphics_g2d_TextureRegion_arc_graphics_Texture_float_float_float_float(ctx, sp[1].o, sp[2].o, ((jfloat)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[3].o)))->F_u), ((jfloat)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[3].o)))->F_v2), ((jfloat)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[3].o)))->F_u2), ((jfloat)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[3].o)))->F_v));
	init_mindustry_ui_Fonts$10_arc_graphics_g2d_TextureRegion_arc_graphics_g2d_Font$Glyph_float(ctx, sp[0].o, sp[1].o, (frame[3].o), (frame[4].f));
	frame[5].o = sp[0].o;
	LINE_NUMBER(353);
	((func_arc_scene_style_TextureRegionDrawable_setMinWidth_float) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_scene_style_TextureRegionDrawable_setMinWidth_float])(ctx, (frame[5].o), (frame[4].f));
	LINE_NUMBER(354);
	((func_arc_scene_style_TextureRegionDrawable_setMinHeight_float) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_scene_style_TextureRegionDrawable_setMinHeight_float])(ctx, (frame[5].o), (frame[4].f));
	LINE_NUMBER(355);
	popStackFrame(ctx);
	return (frame[5].o);
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_ui_Fonts_fontParameter_R_arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Fonts:fontParameter", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_Fonts(ctx);
	{
	LINE_NUMBER(359);
	clinit_mindustry_ui_Fonts$11(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_Fonts$11);
	init_mindustry_ui_Fonts$11(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_Fonts_lambda$mergeFontAtlas$0_arc_graphics_Texture_arc_graphics_g2d_TextureAtlas$AtlasRegion_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Fonts:lambda$mergeFontAtlas$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_Fonts(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(290);
	sp[0].o = (jobject)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[1].o)))->F_texture;
	if (sp[0].o != (frame[0].o)) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void SM_mindustry_ui_Fonts_lambda$loadDefaultFont$1_arc_graphics_g2d_Font(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Fonts:lambda$loadDefaultFont$1", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_Fonts(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(276);
	clinit_mindustry_ui_Fonts(ctx);
	SF_mindustry_ui_Fonts_tech = (frame[0].o);
	LINE_NUMBER(277);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_tech;
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData])(ctx, sp[0].o);
	((arc_graphics_g2d_Font$FontData *) NULL_CHECK(sp[0].o))->F_down = (((jfloat)((arc_graphics_g2d_Font$FontData *) NULL_CHECK(sp[0].o))->F_down) * (jfloat(1.5f)));
	LINE_NUMBER(278);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_Fonts_lambda$loadDefaultFont$0_arc_graphics_g2d_Font(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Fonts:lambda$loadDefaultFont$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_Fonts(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(271);
	clinit_mindustry_ui_Fonts(ctx);
	SF_mindustry_ui_Fonts_outline = (frame[0].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_ui_Fonts_lambda$getLargeIcon$0_java_lang_String_R_arc_graphics_g2d_TextureRegion(jcontext ctx, jobject param0) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Fonts:lambda$getLargeIcon$0", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_Fonts(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(127);
	clinit_arc_graphics_g2d_TextureRegion(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_g2d_TextureRegion);
	init_arc_graphics_g2d_TextureRegion(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(128);
	clinit_mindustry_gen_Iconc(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Iconc_codes;
	jint temp0 = (jint)((func_arc_struct_ObjectIntMap_get_java_lang_Object_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectIntMap_get_java_lang_Object_int_R_int])(ctx, sp[0].o, (frame[0].o), (jint(63700)));
	frame[2].i = temp0;
	LINE_NUMBER(129);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_iconLarge;
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font$FontData_getGlyph_char_R_arc_graphics_g2d_Font$Glyph) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font$FontData_getGlyph_char_R_arc_graphics_g2d_Font$Glyph])(ctx, sp[0].o, (jchar((frame[2].i))));
	frame[3].o = sp[0].o;
	LINE_NUMBER(130);
	if ((frame[3].o) != nullptr) goto label_4;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(131);
	sp[0].o = frame[1].o;
	clinit_mindustry_ui_Fonts(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_Fonts_iconLarge;
	sp[1].o = (jobject)((func_arc_graphics_g2d_Font_getRegion_R_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_Font_getRegion_R_arc_graphics_g2d_TextureRegion])(ctx, sp[1].o);
	sp[1].o = (jobject)((arc_graphics_g2d_TextureRegion *) NULL_CHECK(sp[1].o))->F_texture;
	((func_arc_graphics_g2d_TextureRegion_set_arc_graphics_Texture) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_set_arc_graphics_Texture])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(132);
	((func_arc_graphics_g2d_TextureRegion_set_float_float_float_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_set_float_float_float_float])(ctx, (frame[1].o), ((jfloat)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[3].o)))->F_u), ((jfloat)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[3].o)))->F_v2), ((jfloat)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[3].o)))->F_u2), ((jfloat)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[3].o)))->F_v));
	LINE_NUMBER(133);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_ui_Fonts_lambda$unicodeToName$0_int_R_java_lang_String(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Fonts:lambda$unicodeToName$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_Fonts(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(122);
	clinit_mindustry_gen_Iconc(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Iconc_codeToName;
	sp[0].o = (jobject)((func_arc_struct_IntMap_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntMap_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[0].i));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_java_lang_String, sp[0].o));
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_Fonts_lambda$loadExtraFonts$1_arc_graphics_g2d_Font(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Fonts:lambda$loadExtraFonts$1", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_Fonts(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(117);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_outline;
	sp[0].o = (jobject)((arc_graphics_g2d_Font *) NULL_CHECK(sp[0].o))->F_data;
	sp[1].o = (jobject)((arc_graphics_g2d_Font *) NULL_CHECK((frame[0].o)))->F_data;
	((func_arc_graphics_g2d_Font$FontData_setOverride_arc_graphics_g2d_Font$FontData) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font$FontData_setOverride_arc_graphics_g2d_Font$FontData])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_Fonts_lambda$loadExtraFonts$0_arc_graphics_g2d_Font(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Fonts:lambda$loadExtraFonts$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_Fonts(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(110);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)((arc_graphics_g2d_Font *) NULL_CHECK(sp[0].o))->F_data;
	sp[1].o = (jobject)((arc_graphics_g2d_Font *) NULL_CHECK((frame[0].o)))->F_data;
	((func_arc_graphics_g2d_Font$FontData_setOverride_arc_graphics_g2d_Font$FontData) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font$FontData_setOverride_arc_graphics_g2d_Font$FontData])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_Fonts_lambda$loadFonts$4_arc_graphics_g2d_Font(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Fonts:lambda$loadFonts$4", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_Fonts(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(98);
	clinit_mindustry_ui_Fonts(ctx);
	SF_mindustry_ui_Fonts_logic = (frame[0].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_Fonts_lambda$loadFonts$3_arc_graphics_g2d_Font(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Fonts:lambda$loadFonts$3", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_Fonts(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(90);
	clinit_mindustry_ui_Fonts(ctx);
	SF_mindustry_ui_Fonts_iconLarge = (frame[0].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_Fonts_lambda$loadFonts$2_arc_graphics_g2d_Font(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Fonts:lambda$loadFonts$2", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_Fonts(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(82);
	clinit_mindustry_ui_Fonts(ctx);
	SF_mindustry_ui_Fonts_icon = (frame[0].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_Fonts_lambda$loadFonts$1_arc_graphics_g2d_Font(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Fonts:lambda$loadFonts$1", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_Fonts(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(76);
	clinit_mindustry_ui_Fonts(ctx);
	SF_mindustry_ui_Fonts_monospace = (frame[0].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_Fonts_lambda$loadFonts$0_arc_graphics_g2d_Font(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Fonts:lambda$loadFonts$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_Fonts(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(68);
	clinit_mindustry_ui_Fonts(ctx);
	SF_mindustry_ui_Fonts_def = (frame[0].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_mindustry_ui_Fonts(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_mindustry_ui_Fonts_mainFont = ((jobject) createStringLiteral(ctx, u8"fonts/font.woff"_j));
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Fonts:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_Fonts(ctx);
	{
	LINE_NUMBER(31);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(2)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"iconLarge"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"logic"_j)));
	sp[0].o = (jobject)SM_arc_struct_ObjectSet_with_Array1_java_lang_Object_R_arc_struct_ObjectSet(ctx, sp[0].o);
	clinit_mindustry_ui_Fonts(ctx);
	SF_mindustry_ui_Fonts_unscaled = sp[0].o;
	LINE_NUMBER(32);
	clinit_arc_struct_ObjectIntMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_ObjectIntMap);
	init_arc_struct_ObjectIntMap(ctx, sp[0].o);
	clinit_mindustry_ui_Fonts(ctx);
	SF_mindustry_ui_Fonts_unicodeIcons = sp[0].o;
	LINE_NUMBER(33);
	clinit_arc_struct_IntMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_IntMap);
	init_arc_struct_IntMap(ctx, sp[0].o);
	clinit_mindustry_ui_Fonts(ctx);
	SF_mindustry_ui_Fonts_unicodeToName = sp[0].o;
	LINE_NUMBER(34);
	clinit_arc_struct_ObjectMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_ObjectMap);
	init_arc_struct_ObjectMap(ctx, sp[0].o);
	clinit_mindustry_ui_Fonts(ctx);
	SF_mindustry_ui_Fonts_stringIcons = sp[0].o;
	LINE_NUMBER(35);
	clinit_arc_struct_ObjectMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_ObjectMap);
	init_arc_struct_ObjectMap(ctx, sp[0].o);
	clinit_mindustry_ui_Fonts(ctx);
	SF_mindustry_ui_Fonts_largeIcons = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_ui_Fonts;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[12]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method unicodeToName
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[7]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	methods[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[12]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[13]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[14]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[15]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[16]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[17]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[18]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[19]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[20]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[21]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[22]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[23]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[24]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[25]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[26]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[27]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[28]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_ui_Fonts[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Object_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
};

static VtableEntry vtableEntries[] {
	{ "hashCode", "()I" },
	{ "equals", "(Ljava/lang/Object;)Z" },
	{ "clone", "()Ljava/lang/Object;" },
	{ "getClass", "()Ljava/lang/Class;" },
	{ "toString", "()Ljava/lang/String;" },
	{ "finalize", "()V" },
	{ "notify", "()V" },
	{ "notifyAll", "()V" },
	{ "wait", "()V" },
	{ "wait", "(J)V" },
	{ "wait", "(JI)V" },
};

static FieldMetadata fields[] {
	{ "mainFont", &class_java_lang_String, (intptr_t) &SF_mindustry_ui_Fonts_mainFont, "Ljava/lang/String;", 26 },
	{ "unscaled", &class_arc_struct_ObjectSet, (intptr_t) &SF_mindustry_ui_Fonts_unscaled, "Larc/struct/ObjectSet;", 26 },
	{ "unicodeIcons", &class_arc_struct_ObjectIntMap, (intptr_t) &SF_mindustry_ui_Fonts_unicodeIcons, "Larc/struct/ObjectIntMap;", 10 },
	{ "unicodeToName", &class_arc_struct_IntMap, (intptr_t) &SF_mindustry_ui_Fonts_unicodeToName, "Larc/struct/IntMap;", 10 },
	{ "stringIcons", &class_arc_struct_ObjectMap, (intptr_t) &SF_mindustry_ui_Fonts_stringIcons, "Larc/struct/ObjectMap;", 10 },
	{ "largeIcons", &class_arc_struct_ObjectMap, (intptr_t) &SF_mindustry_ui_Fonts_largeIcons, "Larc/struct/ObjectMap;", 10 },
	{ "def", &class_arc_graphics_g2d_Font, (intptr_t) &SF_mindustry_ui_Fonts_def, "Larc/graphics/g2d/Font;", 9 },
	{ "outline", &class_arc_graphics_g2d_Font, (intptr_t) &SF_mindustry_ui_Fonts_outline, "Larc/graphics/g2d/Font;", 9 },
	{ "icon", &class_arc_graphics_g2d_Font, (intptr_t) &SF_mindustry_ui_Fonts_icon, "Larc/graphics/g2d/Font;", 9 },
	{ "iconLarge", &class_arc_graphics_g2d_Font, (intptr_t) &SF_mindustry_ui_Fonts_iconLarge, "Larc/graphics/g2d/Font;", 9 },
	{ "tech", &class_arc_graphics_g2d_Font, (intptr_t) &SF_mindustry_ui_Fonts_tech, "Larc/graphics/g2d/Font;", 9 },
	{ "logic", &class_arc_graphics_g2d_Font, (intptr_t) &SF_mindustry_ui_Fonts_logic, "Larc/graphics/g2d/Font;", 9 },
	{ "monospace", &class_arc_graphics_g2d_Font, (intptr_t) &SF_mindustry_ui_Fonts_monospace, "Larc/graphics/g2d/Font;", 9 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ui_Fonts, 0, "()V", 1 },
	{ "getUnicode", (intptr_t) SM_mindustry_ui_Fonts_getUnicode_java_lang_String_R_int, 0, "(Ljava/lang/String;)I", 9 },
	{ "getUnicodeStr", (intptr_t) SM_mindustry_ui_Fonts_getUnicodeStr_java_lang_String_R_java_lang_String, 0, "(Ljava/lang/String;)Ljava/lang/String;", 9 },
	{ "hasUnicodeStr", (intptr_t) SM_mindustry_ui_Fonts_hasUnicodeStr_java_lang_String_R_boolean, 0, "(Ljava/lang/String;)Z", 9 },
	{ "loadSystemCursors", (intptr_t) SM_mindustry_ui_Fonts_loadSystemCursors, 0, "()V", 9 },
	{ "cursorScale", (intptr_t) SM_mindustry_ui_Fonts_cursorScale_R_int, 0, "()I", 9 },
	{ "loadFonts", (intptr_t) SM_mindustry_ui_Fonts_loadFonts, 0, "()V", 9 },
	{ "loadExtraFonts", (intptr_t) SM_mindustry_ui_Fonts_loadExtraFonts, 0, "()V", 9 },
	{ "unicodeToName", (intptr_t) SM_mindustry_ui_Fonts_unicodeToName_int_R_java_lang_String, 0, "(I)Ljava/lang/String;", 9 },
	{ "getLargeIcon", (intptr_t) SM_mindustry_ui_Fonts_getLargeIcon_java_lang_String_R_arc_graphics_g2d_TextureRegion, 0, "(Ljava/lang/String;)Larc/graphics/g2d/TextureRegion;", 9 },
	{ "registerIcon", (intptr_t) SM_mindustry_ui_Fonts_registerIcon_java_lang_String_java_lang_String_int_arc_graphics_g2d_TextureRegion, 0, "(Ljava/lang/String;Ljava/lang/String;ILarc/graphics/g2d/TextureRegion;)V", 9 },
	{ "loadContentIcons", (intptr_t) SM_mindustry_ui_Fonts_loadContentIcons, 0, "()V", 9 },
	{ "loadContentIconsHeadless", (intptr_t) SM_mindustry_ui_Fonts_loadContentIconsHeadless, 0, "()V", 9 },
	{ "loadDefaultFont", (intptr_t) SM_mindustry_ui_Fonts_loadDefaultFont, 0, "()V", 9 },
	{ "mergeFontAtlas", (intptr_t) SM_mindustry_ui_Fonts_mergeFontAtlas_arc_graphics_g2d_TextureAtlas, 0, "(Larc/graphics/g2d/TextureAtlas;)V", 9 },
	{ "getGlyph", (intptr_t) SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable, 0, "(Larc/graphics/g2d/Font;C)Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "fontParameter", (intptr_t) SM_mindustry_ui_Fonts_fontParameter_R_arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter, 0, "()Larc/freetype/FreeTypeFontGenerator$FreeTypeFontParameter;", 8 },
	{ "lambda$mergeFontAtlas$0", (intptr_t) SM_mindustry_ui_Fonts_lambda$mergeFontAtlas$0_arc_graphics_Texture_arc_graphics_g2d_TextureAtlas$AtlasRegion_R_boolean, 0, "(Larc/graphics/Texture;Larc/graphics/g2d/TextureAtlas$AtlasRegion;)Z", 4106 },
	{ "lambda$loadDefaultFont$1", (intptr_t) SM_mindustry_ui_Fonts_lambda$loadDefaultFont$1_arc_graphics_g2d_Font, 0, "(Larc/graphics/g2d/Font;)V", 4106 },
	{ "lambda$loadDefaultFont$0", (intptr_t) SM_mindustry_ui_Fonts_lambda$loadDefaultFont$0_arc_graphics_g2d_Font, 0, "(Larc/graphics/g2d/Font;)V", 4106 },
	{ "lambda$getLargeIcon$0", (intptr_t) SM_mindustry_ui_Fonts_lambda$getLargeIcon$0_java_lang_String_R_arc_graphics_g2d_TextureRegion, 0, "(Ljava/lang/String;)Larc/graphics/g2d/TextureRegion;", 4106 },
	{ "lambda$unicodeToName$0", (intptr_t) SM_mindustry_ui_Fonts_lambda$unicodeToName$0_int_R_java_lang_String, 0, "(I)Ljava/lang/String;", 4106 },
	{ "lambda$loadExtraFonts$1", (intptr_t) SM_mindustry_ui_Fonts_lambda$loadExtraFonts$1_arc_graphics_g2d_Font, 0, "(Larc/graphics/g2d/Font;)V", 4106 },
	{ "lambda$loadExtraFonts$0", (intptr_t) SM_mindustry_ui_Fonts_lambda$loadExtraFonts$0_arc_graphics_g2d_Font, 0, "(Larc/graphics/g2d/Font;)V", 4106 },
	{ "lambda$loadFonts$4", (intptr_t) SM_mindustry_ui_Fonts_lambda$loadFonts$4_arc_graphics_g2d_Font, 0, "(Larc/graphics/g2d/Font;)V", 4106 },
	{ "lambda$loadFonts$3", (intptr_t) SM_mindustry_ui_Fonts_lambda$loadFonts$3_arc_graphics_g2d_Font, 0, "(Larc/graphics/g2d/Font;)V", 4106 },
	{ "lambda$loadFonts$2", (intptr_t) SM_mindustry_ui_Fonts_lambda$loadFonts$2_arc_graphics_g2d_Font, 0, "(Larc/graphics/g2d/Font;)V", 4106 },
	{ "lambda$loadFonts$1", (intptr_t) SM_mindustry_ui_Fonts_lambda$loadFonts$1_arc_graphics_g2d_Font, 0, "(Larc/graphics/g2d/Font;)V", 4106 },
	{ "lambda$loadFonts$0", (intptr_t) SM_mindustry_ui_Fonts_lambda$loadFonts$0_arc_graphics_g2d_Font, 0, "(Larc/graphics/g2d/Font;)V", 4106 },
	{ "<clinit>", (intptr_t) clinit_mindustry_ui_Fonts, 0, "()V", 8 },
};

Class class_mindustry_ui_Fonts{
		.nativeName = (intptr_t) "mindustry/ui/Fonts",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_ui_Fonts),
		.classVtable = (intptr_t) vtable_mindustry_ui_Fonts,
		.staticInitializer = (intptr_t) clinit_mindustry_ui_Fonts,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_ui_Fonts,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 13,
		.nativeFields = (intptr_t) fields,
		.methodCount = 30,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_ui_Fonts = registerClass(&class_mindustry_ui_Fonts);

}
