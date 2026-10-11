#include "arc/graphics/g2d/TextureAtlas.h"
#include "arc/graphics/Pixmaps.h"
#include "arc/graphics/GLTexture.h"
#include "arc/graphics/TextureData.h"
#include "arc/func/Prov.h"
#include "java/lang/StringBuilder.h"
#include "arc/graphics/g2d/TextureAtlas_AtlasRegion.h"
#include "arc/scene/style/TextureRegionDrawable.h"
#include "arc/graphics/g2d/TextureAtlas_TextureAtlasData.h"
#include "arc/files/Fi.h"
#include "arc/graphics/g2d/TextureAtlas_TextureAtlasData_AtlasPage.h"
#include "arc/scene/style/ScaledNinePatchDrawable.h"
#include "arc/graphics/Pixmap.h"
#include "java/lang/String.h"
#include "arc/struct/Seq.h"
#include "arc/struct/ObjectSet_ObjectSetIterator.h"
#include "arc/scene/style/Drawable.h"
#include "arc/graphics/g2d/TextureAtlas.h"
#include "arc/util/Disposable.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "arc/Core.h"
#include "java/util/Iterator.h"
#include "arc/graphics/g2d/TextureAtlas_TextureAtlasData_Region.h"
#include "arc/Files.h"
#include "arc/graphics/g2d/TextureAtlas_invoke_arc_func_Prov_0.h"
#include "java/lang/IllegalArgumentException.h"
#include "arc/graphics/Texture.h"
#include "arc/struct/ObjectMap_Values.h"
#include "arc/graphics/g2d/PixmapRegion.h"
#include "java/lang/Object.h"
#include "arc/graphics/Texture_TextureFilter.h"
#include "arc/struct/ObjectSet.h"
#include "arc/graphics/Texture_TextureWrap.h"
#include "arc/struct/ObjectMap.h"
#include "arc/graphics/g2d/NinePatch.h"

extern "C" {


void mark_arc_graphics_g2d_TextureAtlas(jobject object, jint mark, jint depth) {
	if (!object) {
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
	auto self = (arc_graphics_g2d_TextureAtlas *) object;
	if (self->F_textures)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_textures)->clazz)->markFunction)((jobject) self->F_textures, mark, depth + 1);
	if (self->F_regions)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_regions)->clazz)->markFunction)((jobject) self->F_regions, mark, depth + 1);
	if (self->F_drawables)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_drawables)->clazz)->markFunction)((jobject) self->F_drawables, mark, depth + 1);
	if (self->F_regionmap)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_regionmap)->clazz)->markFunction)((jobject) self->F_regionmap, mark, depth + 1);
	if (self->F_pixmaps)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_pixmaps)->clazz)->markFunction)((jobject) self->F_pixmaps, mark, depth + 1);
	if (self->F_error)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_error)->clazz)->markFunction)((jobject) self->F_error, mark, depth + 1);
	if (self->F_white)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_white)->clazz)->markFunction)((jobject) self->F_white, mark, depth + 1);
}

void clinit_arc_graphics_g2d_TextureAtlas(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

jobject SM_arc_graphics_g2d_TextureAtlas_blankAtlas_R_arc_graphics_g2d_TextureAtlas(jcontext ctx) {
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/TextureAtlas:blankAtlas", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_TextureAtlas(ctx);
	{
	LINE_NUMBER(33);
	clinit_arc_graphics_g2d_TextureAtlas(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_g2d_TextureAtlas);
	init_arc_graphics_g2d_TextureAtlas(ctx, sp[0].o);
	frame[0].o = sp[0].o;
	LINE_NUMBER(34);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_g2d_TextureAtlas$AtlasRegion(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_g2d_TextureAtlas$AtlasRegion);
	sp[2].o = (jobject)SM_arc_graphics_Pixmaps_blankTextureRegion_R_arc_graphics_g2d_TextureRegion(ctx);
	init_arc_graphics_g2d_TextureAtlas$AtlasRegion_arc_graphics_g2d_TextureRegion(ctx, sp[1].o, sp[2].o);
	((arc_graphics_g2d_TextureAtlas *) NULL_CHECK(sp[0].o))->F_white = (jref) sp[1].o;
	LINE_NUMBER(35);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

void init_arc_graphics_g2d_TextureAtlas(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/TextureAtlas:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_TextureAtlas(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(39);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(23);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectSet(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectSet);
	init_arc_struct_ObjectSet_int(ctx, sp[1].o, (jint(4)));
	((arc_graphics_g2d_TextureAtlas *) NULL_CHECK(sp[0].o))->F_textures = (jref) sp[1].o;
	LINE_NUMBER(24);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq_boolean(ctx, sp[1].o, (jint(0)));
	((arc_graphics_g2d_TextureAtlas *) NULL_CHECK(sp[0].o))->F_regions = (jref) sp[1].o;
	LINE_NUMBER(25);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectMap);
	init_arc_struct_ObjectMap(ctx, sp[1].o);
	((arc_graphics_g2d_TextureAtlas *) NULL_CHECK(sp[0].o))->F_drawables = (jref) sp[1].o;
	LINE_NUMBER(26);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectMap);
	init_arc_struct_ObjectMap(ctx, sp[1].o);
	((arc_graphics_g2d_TextureAtlas *) NULL_CHECK(sp[0].o))->F_regionmap = (jref) sp[1].o;
	LINE_NUMBER(27);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectMap);
	init_arc_struct_ObjectMap(ctx, sp[1].o);
	((arc_graphics_g2d_TextureAtlas *) NULL_CHECK(sp[0].o))->F_pixmaps = (jref) sp[1].o;
	LINE_NUMBER(29);
	((arc_graphics_g2d_TextureAtlas *) NULL_CHECK((frame[0].o)))->F_drawableScale = (jfloat(1));
	LINE_NUMBER(40);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_graphics_g2d_TextureAtlas_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/TextureAtlas:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_TextureAtlas(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(47);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_files;
	sp[1].o = (jobject)((func_arc_Files_internal_java_lang_String_R_arc_files_Fi) resolveInterfaceMethod(ctx, &class_arc_Files, INDEX_arc_Files_internal_java_lang_String_R_arc_files_Fi, sp[1].o))(ctx, sp[1].o, (frame[1].o));
	init_arc_graphics_g2d_TextureAtlas_arc_files_Fi(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(48);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_graphics_g2d_TextureAtlas_arc_files_Fi(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/TextureAtlas:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_TextureAtlas(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(52);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((func_arc_files_Fi_parent_R_arc_files_Fi) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_files_Fi_parent_R_arc_files_Fi])(ctx, (frame[1].o));
	init_arc_graphics_g2d_TextureAtlas_arc_files_Fi_arc_files_Fi(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(53);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_graphics_g2d_TextureAtlas_arc_files_Fi_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/TextureAtlas:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_TextureAtlas(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(60);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((func_arc_files_Fi_parent_R_arc_files_Fi) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_files_Fi_parent_R_arc_files_Fi])(ctx, (frame[1].o));
	init_arc_graphics_g2d_TextureAtlas_arc_files_Fi_arc_files_Fi_boolean(ctx, sp[0].o, sp[1].o, sp[2].o, (frame[2].i));
	LINE_NUMBER(61);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_graphics_g2d_TextureAtlas_arc_files_Fi_arc_files_Fi(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/TextureAtlas:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_TextureAtlas(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(64);
	init_arc_graphics_g2d_TextureAtlas_arc_files_Fi_arc_files_Fi_boolean(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (jint(0)));
	LINE_NUMBER(65);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_graphics_g2d_TextureAtlas_arc_files_Fi_arc_files_Fi_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/TextureAtlas:<init>", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_TextureAtlas(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(69);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_g2d_TextureAtlas$TextureAtlasData(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_g2d_TextureAtlas$TextureAtlasData);
	init_arc_graphics_g2d_TextureAtlas$TextureAtlasData_arc_files_Fi_arc_files_Fi_boolean(ctx, sp[1].o, (frame[1].o), (frame[2].o), (frame[3].i));
	init_arc_graphics_g2d_TextureAtlas_arc_graphics_g2d_TextureAtlas$TextureAtlasData(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(70);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_graphics_g2d_TextureAtlas_arc_graphics_g2d_TextureAtlas$TextureAtlasData(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/TextureAtlas:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_TextureAtlas(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(73);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(23);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectSet(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectSet);
	init_arc_struct_ObjectSet_int(ctx, sp[1].o, (jint(4)));
	((arc_graphics_g2d_TextureAtlas *) NULL_CHECK(sp[0].o))->F_textures = (jref) sp[1].o;
	LINE_NUMBER(24);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq_boolean(ctx, sp[1].o, (jint(0)));
	((arc_graphics_g2d_TextureAtlas *) NULL_CHECK(sp[0].o))->F_regions = (jref) sp[1].o;
	LINE_NUMBER(25);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectMap);
	init_arc_struct_ObjectMap(ctx, sp[1].o);
	((arc_graphics_g2d_TextureAtlas *) NULL_CHECK(sp[0].o))->F_drawables = (jref) sp[1].o;
	LINE_NUMBER(26);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectMap);
	init_arc_struct_ObjectMap(ctx, sp[1].o);
	((arc_graphics_g2d_TextureAtlas *) NULL_CHECK(sp[0].o))->F_regionmap = (jref) sp[1].o;
	LINE_NUMBER(27);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectMap);
	init_arc_struct_ObjectMap(ctx, sp[1].o);
	((arc_graphics_g2d_TextureAtlas *) NULL_CHECK(sp[0].o))->F_pixmaps = (jref) sp[1].o;
	LINE_NUMBER(29);
	((arc_graphics_g2d_TextureAtlas *) NULL_CHECK((frame[0].o)))->F_drawableScale = (jfloat(1));
	LINE_NUMBER(74);
	if ((frame[1].o) == nullptr) goto label_8;
	}
	{
	M_arc_graphics_g2d_TextureAtlas_load_arc_graphics_g2d_TextureAtlas$TextureAtlasData(ctx, (frame[0].o), (frame[1].o));
	}
label_8:;
	LINE_NUMBER(75);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_TextureAtlas_setDrawableScale_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/TextureAtlas:setDrawableScale", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(78);
	((arc_graphics_g2d_TextureAtlas *) NULL_CHECK((frame[0].o)))->F_drawableScale = (frame[1].f);
	LINE_NUMBER(79);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_TextureAtlas_load_arc_graphics_g2d_TextureAtlas$TextureAtlasData(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/TextureAtlas:load", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(82);
	clinit_arc_struct_ObjectMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_ObjectMap);
	init_arc_struct_ObjectMap(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(83);
	sp[0].o = (jobject)((arc_graphics_g2d_TextureAtlas$TextureAtlasData *) NULL_CHECK((frame[1].o)))->F_pages;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_2:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_arc_graphics_g2d_TextureAtlas$TextureAtlasData$AtlasPage, sp[0].o));
	LINE_NUMBER(85);
	sp[0].o = (jobject)((arc_graphics_g2d_TextureAtlas$TextureAtlasData$AtlasPage *) NULL_CHECK((frame[4].o)))->F_texture;
	if (sp[0].o != nullptr) goto label_5;
	}
	{
	LINE_NUMBER(86);
	clinit_arc_graphics_Texture(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Texture);
	sp[1].o = (jobject)((arc_graphics_g2d_TextureAtlas$TextureAtlasData$AtlasPage *) NULL_CHECK((frame[4].o)))->F_textureFile;
	init_arc_graphics_Texture_arc_files_Fi_boolean(ctx, sp[0].o, sp[1].o, ((jint)((arc_graphics_g2d_TextureAtlas$TextureAtlasData$AtlasPage *) NULL_CHECK((frame[4].o)))->F_useMipMaps));
	frame[5].o = sp[0].o;
	LINE_NUMBER(87);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)((arc_graphics_g2d_TextureAtlas$TextureAtlasData$AtlasPage *) NULL_CHECK((frame[4].o)))->F_minFilter;
	sp[2].o = (jobject)((arc_graphics_g2d_TextureAtlas$TextureAtlasData$AtlasPage *) NULL_CHECK((frame[4].o)))->F_magFilter;
	((func_arc_graphics_Texture_setFilter_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Texture_setFilter_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(88);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)((arc_graphics_g2d_TextureAtlas$TextureAtlasData$AtlasPage *) NULL_CHECK((frame[4].o)))->F_uWrap;
	sp[2].o = (jobject)((arc_graphics_g2d_TextureAtlas$TextureAtlasData$AtlasPage *) NULL_CHECK((frame[4].o)))->F_vWrap;
	((func_arc_graphics_Texture_setWrap_arc_graphics_Texture$TextureWrap_arc_graphics_Texture$TextureWrap) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Texture_setWrap_arc_graphics_Texture$TextureWrap_arc_graphics_Texture$TextureWrap])(ctx, sp[0].o, sp[1].o, sp[2].o);
	goto label_9;
	}
label_5:;
	{
	LINE_NUMBER(90);
	sp[0].o = (jobject)((arc_graphics_g2d_TextureAtlas$TextureAtlasData$AtlasPage *) NULL_CHECK((frame[4].o)))->F_texture;
	frame[5].o = sp[0].o;
	LINE_NUMBER(91);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)((arc_graphics_g2d_TextureAtlas$TextureAtlasData$AtlasPage *) NULL_CHECK((frame[4].o)))->F_minFilter;
	sp[2].o = (jobject)((arc_graphics_g2d_TextureAtlas$TextureAtlasData$AtlasPage *) NULL_CHECK((frame[4].o)))->F_magFilter;
	((func_arc_graphics_Texture_setFilter_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Texture_setFilter_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(92);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)((arc_graphics_g2d_TextureAtlas$TextureAtlasData$AtlasPage *) NULL_CHECK((frame[4].o)))->F_uWrap;
	sp[2].o = (jobject)((arc_graphics_g2d_TextureAtlas$TextureAtlasData$AtlasPage *) NULL_CHECK((frame[4].o)))->F_vWrap;
	((func_arc_graphics_Texture_setWrap_arc_graphics_Texture$TextureWrap_arc_graphics_Texture$TextureWrap) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Texture_setWrap_arc_graphics_Texture$TextureWrap_arc_graphics_Texture$TextureWrap])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_9:;
	{
	LINE_NUMBER(94);
	sp[0].o = (jobject)((arc_graphics_g2d_TextureAtlas *) NULL_CHECK((frame[0].o)))->F_textures;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_add_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[5].o));
	LINE_NUMBER(95);
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, (frame[2].o), (frame[4].o), (frame[5].o));
	LINE_NUMBER(96);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(98);
	sp[0].o = (jobject)((arc_graphics_g2d_TextureAtlas$TextureAtlasData *) NULL_CHECK((frame[1].o)))->F_regions;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_14:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_15;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_arc_graphics_g2d_TextureAtlas$TextureAtlasData$Region, sp[0].o));
	LINE_NUMBER(99);
	frame[5].i = ((jint)((arc_graphics_g2d_TextureAtlas$TextureAtlasData$Region *) NULL_CHECK((frame[4].o)))->F_width);
	LINE_NUMBER(100);
	frame[6].i = ((jint)((arc_graphics_g2d_TextureAtlas$TextureAtlasData$Region *) NULL_CHECK((frame[4].o)))->F_height);
	LINE_NUMBER(101);
	clinit_arc_graphics_g2d_TextureAtlas$AtlasRegion(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_g2d_TextureAtlas$AtlasRegion);
	sp[1].o = frame[2].o;
	sp[2].o = (jobject)((arc_graphics_g2d_TextureAtlas$TextureAtlasData$Region *) NULL_CHECK((frame[4].o)))->F_page;
	sp[1].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[1].o, sp[2].o);
	sp[1].o = checkCast(ctx, &class_arc_graphics_Texture, sp[1].o);
	jint temp0 = (jint)((arc_graphics_g2d_TextureAtlas$TextureAtlasData$Region *) NULL_CHECK((frame[4].o)))->F_left;
	jint temp1 = (jint)((arc_graphics_g2d_TextureAtlas$TextureAtlasData$Region *) NULL_CHECK((frame[4].o)))->F_top;
	LINE_NUMBER(102);
	jobject temp2 = sp[1].o;
	sp[1].o = sp[0].o;
	sp[2].o = temp2;
	sp[3].i = temp0;
	sp[4].i = temp1;
	sp += 5;
	if (((jint)((arc_graphics_g2d_TextureAtlas$TextureAtlasData$Region *) NULL_CHECK((frame[4].o)))->F_rotate) == 0) goto label_20;
	}
	INST_ILOAD(6);
	goto label_21;
label_20:;
	INST_ILOAD(5);
label_21:;
	{
	if (((jint)((arc_graphics_g2d_TextureAtlas$TextureAtlasData$Region *) NULL_CHECK((frame[4].o)))->F_rotate) == 0) goto label_22;
	}
	INST_ILOAD(5);
	goto label_23;
label_22:;
	INST_ILOAD(6);
label_23:;
	{
	sp -= 7;
	init_arc_graphics_g2d_TextureAtlas$AtlasRegion_arc_graphics_Texture_int_int_int_int(ctx, sp[0].o, sp[2].o, sp[3].i, sp[4].i, sp[5].i, sp[6].i);
	frame[7].o = sp[0].o;
	LINE_NUMBER(103);
	sp[0].o = frame[7].o;
	sp[1].o = (jobject)((arc_graphics_g2d_TextureAtlas$TextureAtlasData$Region *) NULL_CHECK((frame[4].o)))->F_name;
	((arc_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK(sp[0].o))->F_name = (jref) sp[1].o;
	LINE_NUMBER(104);
	((arc_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[7].o)))->F_offsetX = ((jfloat)((arc_graphics_g2d_TextureAtlas$TextureAtlasData$Region *) NULL_CHECK((frame[4].o)))->F_offsetX);
	LINE_NUMBER(105);
	((arc_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[7].o)))->F_offsetY = ((jfloat)((arc_graphics_g2d_TextureAtlas$TextureAtlasData$Region *) NULL_CHECK((frame[4].o)))->F_offsetY);
	LINE_NUMBER(106);
	((arc_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[7].o)))->F_originalHeight = ((jint)((arc_graphics_g2d_TextureAtlas$TextureAtlasData$Region *) NULL_CHECK((frame[4].o)))->F_originalHeight);
	LINE_NUMBER(107);
	((arc_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[7].o)))->F_originalWidth = ((jint)((arc_graphics_g2d_TextureAtlas$TextureAtlasData$Region *) NULL_CHECK((frame[4].o)))->F_originalWidth);
	LINE_NUMBER(108);
	((arc_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[7].o)))->F_rotate = ((jint)((arc_graphics_g2d_TextureAtlas$TextureAtlasData$Region *) NULL_CHECK((frame[4].o)))->F_rotate);
	LINE_NUMBER(109);
	sp[0].o = frame[7].o;
	sp[1].o = (jobject)((arc_graphics_g2d_TextureAtlas$TextureAtlasData$Region *) NULL_CHECK((frame[4].o)))->F_splits;
	((arc_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK(sp[0].o))->F_splits = (jref) sp[1].o;
	LINE_NUMBER(110);
	sp[0].o = frame[7].o;
	sp[1].o = (jobject)((arc_graphics_g2d_TextureAtlas$TextureAtlasData$Region *) NULL_CHECK((frame[4].o)))->F_pads;
	((arc_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK(sp[0].o))->F_pads = (jref) sp[1].o;
	LINE_NUMBER(111);
	if (((jint)((arc_graphics_g2d_TextureAtlas$TextureAtlasData$Region *) NULL_CHECK((frame[4].o)))->F_flip) == 0) goto label_33;
	}
	{
	((func_arc_graphics_g2d_TextureAtlas$AtlasRegion_flip_boolean_boolean) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas$AtlasRegion_flip_boolean_boolean])(ctx, (frame[7].o), (jint(0)), (jint(1)));
	}
label_33:;
	{
	LINE_NUMBER(112);
	sp[0].o = (jobject)((arc_graphics_g2d_TextureAtlas *) NULL_CHECK((frame[0].o)))->F_regions;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[7].o));
	LINE_NUMBER(113);
	sp[0].o = (jobject)((arc_graphics_g2d_TextureAtlas *) NULL_CHECK((frame[0].o)))->F_regionmap;
	sp[1].o = (jobject)((arc_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[7].o)))->F_name;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, (frame[7].o));
	LINE_NUMBER(114);
	goto label_14;
	}
label_15:;
	{
	LINE_NUMBER(116);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"error"_j))));
	((arc_graphics_g2d_TextureAtlas *) NULL_CHECK(sp[0].o))->F_error = (jref) sp[1].o;
	LINE_NUMBER(117);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_g2d_TextureAtlas_getPixmap_java_lang_String_R_arc_graphics_g2d_PixmapRegion(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/TextureAtlas:getPixmap", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(120);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, (frame[0].o), (frame[1].o));
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_getPixmap_arc_graphics_g2d_TextureAtlas$AtlasRegion_R_arc_graphics_g2d_PixmapRegion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_getPixmap_arc_graphics_g2d_TextureAtlas$AtlasRegion_R_arc_graphics_g2d_PixmapRegion])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_g2d_TextureAtlas_getPixmap_arc_graphics_g2d_TextureAtlas$AtlasRegion_R_arc_graphics_g2d_PixmapRegion(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/TextureAtlas:getPixmap", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(124);
	sp[0].o = (jobject)((arc_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[1].o)))->F_pixmapRegion;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(125);
	sp[0].o = (jobject)((arc_graphics_g2d_TextureAtlas *) NULL_CHECK((frame[0].o)))->F_pixmaps;
	sp[1].o = (jobject)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[1].o)))->F_texture;
	{ /* InvokeDynamic */
		clinit_arc_graphics_g2d_TextureAtlas_invoke_arc_func_Prov_0(ctx);
		auto proxy = (arc_graphics_g2d_TextureAtlas_invoke_arc_func_Prov_0 *) gcAlloc(ctx, &class_arc_graphics_g2d_TextureAtlas_invoke_arc_func_Prov_0);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_arc_func_Prov_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_arc_func_Prov_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[2].o = (checkCast(ctx, &class_arc_graphics_Pixmap, sp[0].o));
	LINE_NUMBER(126);
	sp[0].o = frame[1].o;
	clinit_arc_graphics_g2d_PixmapRegion(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_g2d_PixmapRegion);
	sp[2].o = frame[2].o;
	jint temp0 = (jint)((func_arc_graphics_g2d_TextureAtlas$AtlasRegion_getX_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas$AtlasRegion_getX_R_int])(ctx, (frame[1].o));
	jint temp1 = (jint)((func_arc_graphics_g2d_TextureAtlas$AtlasRegion_getY_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas$AtlasRegion_getY_R_int])(ctx, (frame[1].o));
	init_arc_graphics_g2d_PixmapRegion_arc_graphics_Pixmap_int_int_int_int(ctx, sp[1].o, sp[2].o, temp0, temp1, ((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[1].o)))->F_width), ((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[1].o)))->F_height));
	((arc_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK(sp[0].o))->F_pixmapRegion = (jref) sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(129);
	sp[0].o = (jobject)((arc_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[1].o)))->F_pixmapRegion;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_g2d_TextureAtlas_getPixmap_arc_graphics_g2d_TextureRegion_R_arc_graphics_g2d_PixmapRegion(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/TextureAtlas:getPixmap", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(133);
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_getPixmap_arc_graphics_g2d_TextureAtlas$AtlasRegion_R_arc_graphics_g2d_PixmapRegion) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_getPixmap_arc_graphics_g2d_TextureAtlas$AtlasRegion_R_arc_graphics_g2d_PixmapRegion])(ctx, (frame[0].o), (checkCast(ctx, &class_arc_graphics_g2d_TextureAtlas$AtlasRegion, (frame[1].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_g2d_TextureAtlas_getPixmaps_R_arc_struct_ObjectMap(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/TextureAtlas:getPixmaps", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(137);
	sp[0].o = (jobject)((arc_graphics_g2d_TextureAtlas *) NULL_CHECK((frame[0].o)))->F_pixmaps;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_TextureAtlas_disposePixmap_arc_graphics_Texture(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/TextureAtlas:disposePixmap", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(141);
	sp[0].o = (jobject)((arc_graphics_g2d_TextureAtlas *) NULL_CHECK((frame[0].o)))->F_pixmaps;
	jint temp0 = (jint)((func_arc_struct_ObjectMap_containsKey_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_containsKey_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((arc_graphics_g2d_TextureAtlas *) NULL_CHECK((frame[0].o)))->F_pixmaps;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	jint temp0 = (jint)((func_arc_graphics_Pixmap_isDisposed_R_boolean) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_graphics_Pixmap, sp[0].o)))->vtable)[VTABLE_arc_graphics_Pixmap_isDisposed_R_boolean])(ctx, (checkCast(ctx, &class_arc_graphics_Pixmap, sp[0].o)));
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(142);
	sp[0].o = (jobject)((arc_graphics_g2d_TextureAtlas *) NULL_CHECK((frame[0].o)))->F_pixmaps;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	((func_arc_graphics_Pixmap_dispose) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_graphics_Pixmap, sp[0].o)))->vtable)[VTABLE_arc_graphics_Pixmap_dispose])(ctx, (checkCast(ctx, &class_arc_graphics_Pixmap, sp[0].o)));
	}
label_1:;
	{
	LINE_NUMBER(144);
	sp[0].o = (jobject)((arc_graphics_g2d_TextureAtlas *) NULL_CHECK((frame[0].o)))->F_pixmaps;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_remove_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_remove_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(145);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_g2d_TextureAtlas_addRegion_java_lang_String_arc_graphics_Texture_int_int_int_int_R_arc_graphics_g2d_TextureAtlas$AtlasRegion(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3, jint param4, jint param5) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/TextureAtlas:addRegion", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	frame[6].i = param5;
	{
	LINE_NUMBER(149);
	sp[0].o = (jobject)((arc_graphics_g2d_TextureAtlas *) NULL_CHECK((frame[0].o)))->F_textures;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_add_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(150);
	clinit_arc_graphics_g2d_TextureAtlas$AtlasRegion(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_g2d_TextureAtlas$AtlasRegion);
	init_arc_graphics_g2d_TextureAtlas$AtlasRegion_arc_graphics_Texture_int_int_int_int(ctx, sp[0].o, (frame[2].o), (frame[3].i), (frame[4].i), (frame[5].i), (frame[6].i));
	frame[7].o = sp[0].o;
	LINE_NUMBER(151);
	((arc_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[7].o)))->F_name = (jref) (frame[1].o);
	LINE_NUMBER(152);
	((arc_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[7].o)))->F_originalWidth = (frame[5].i);
	LINE_NUMBER(153);
	((arc_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[7].o)))->F_originalHeight = (frame[6].i);
	LINE_NUMBER(154);
	sp[0].o = (jobject)((arc_graphics_g2d_TextureAtlas *) NULL_CHECK((frame[0].o)))->F_regions;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[7].o));
	LINE_NUMBER(155);
	sp[0].o = (jobject)((arc_graphics_g2d_TextureAtlas *) NULL_CHECK((frame[0].o)))->F_regionmap;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o), (frame[7].o));
	LINE_NUMBER(156);
	popStackFrame(ctx);
	return (frame[7].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_g2d_TextureAtlas_addRegion_java_lang_String_arc_graphics_g2d_TextureRegion_R_arc_graphics_g2d_TextureAtlas$AtlasRegion(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/TextureAtlas:addRegion", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(161);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[2].o)))->F_texture;
	jint temp0 = (jint)((func_arc_graphics_g2d_TextureRegion_getX_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_getX_R_int])(ctx, (frame[2].o));
	jint temp1 = (jint)((func_arc_graphics_g2d_TextureRegion_getY_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_getY_R_int])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_addRegion_java_lang_String_arc_graphics_Texture_int_int_int_int_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_addRegion_java_lang_String_arc_graphics_Texture_int_int_int_int_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, temp1, ((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[2].o)))->F_width), ((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[2].o)))->F_height));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_g2d_TextureAtlas_getRegions_R_arc_struct_Seq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/TextureAtlas:getRegions", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(167);
	sp[0].o = (jobject)((arc_graphics_g2d_TextureAtlas *) NULL_CHECK((frame[0].o)))->F_regions;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_g2d_TextureAtlas_getRegionMap_R_arc_struct_ObjectMap(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/TextureAtlas:getRegionMap", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(172);
	sp[0].o = (jobject)((arc_graphics_g2d_TextureAtlas *) NULL_CHECK((frame[0].o)))->F_regionmap;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_g2d_TextureAtlas_white_R_arc_graphics_g2d_TextureAtlas$AtlasRegion(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/TextureAtlas:white", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(177);
	sp[0].o = (jobject)((arc_graphics_g2d_TextureAtlas *) NULL_CHECK((frame[0].o)))->F_white;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(178);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"white"_j))));
	((arc_graphics_g2d_TextureAtlas *) NULL_CHECK(sp[0].o))->F_white = (jref) sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(180);
	sp[0].o = (jobject)((arc_graphics_g2d_TextureAtlas *) NULL_CHECK((frame[0].o)))->F_white;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_arc_graphics_g2d_TextureAtlas_setErrorRegion_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/TextureAtlas:setErrorRegion", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(185);
	sp[0].o = (jobject)((arc_graphics_g2d_TextureAtlas *) NULL_CHECK((frame[0].o)))->F_error;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	jint temp0 = (jint)((func_arc_graphics_g2d_TextureAtlas_has_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_has_java_lang_String_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	if (temp0 != 0) goto label_2;
	}
label_1:;
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(186);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, (frame[0].o), (frame[1].o));
	((arc_graphics_g2d_TextureAtlas *) NULL_CHECK(sp[0].o))->F_error = (jref) sp[1].o;
	LINE_NUMBER(187);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_arc_graphics_g2d_TextureAtlas_isFound_arc_graphics_g2d_TextureRegion_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/TextureAtlas:isFound", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(191);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((arc_graphics_g2d_TextureAtlas *) NULL_CHECK((frame[0].o)))->F_error;
	if (sp[0].o == sp[1].o) goto label_1;
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

jobject M_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/TextureAtlas:find", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(199);
	sp[0].o = (jobject)((arc_graphics_g2d_TextureAtlas *) NULL_CHECK((frame[0].o)))->F_regionmap;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((arc_graphics_g2d_TextureAtlas *) NULL_CHECK((frame[0].o)))->F_error;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[2].o = (checkCast(ctx, &class_arc_graphics_g2d_TextureAtlas$AtlasRegion, sp[0].o));
	LINE_NUMBER(200);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"error"_j))));
	if (temp0 != 0) goto label_2;
	}
	{
	LINE_NUMBER(201);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"The region \""_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"\" does not exist!"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(202);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_g2d_TextureAtlas_find_java_lang_String_java_lang_String_R_arc_graphics_g2d_TextureRegion(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/TextureAtlas:find", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(206);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, (frame[0].o), (frame[2].o));
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_arc_graphics_g2d_TextureRegion_R_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_arc_graphics_g2d_TextureRegion_R_arc_graphics_g2d_TextureRegion])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_g2d_TextureAtlas_find_java_lang_String_arc_graphics_g2d_TextureRegion_R_arc_graphics_g2d_TextureRegion(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/TextureAtlas:find", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(210);
	sp[0].o = (jobject)((arc_graphics_g2d_TextureAtlas *) NULL_CHECK((frame[0].o)))->F_regionmap;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	frame[3].o = (checkCast(ctx, &class_arc_graphics_g2d_TextureRegion, sp[0].o));
	LINE_NUMBER(211);
	if ((frame[3].o) == nullptr) goto label_2;
	}
	{
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((arc_graphics_g2d_TextureAtlas *) NULL_CHECK((frame[0].o)))->F_error;
	if (sp[0].o != sp[1].o) goto label_3;
	}
label_2:;
	INST_ALOAD(2);
	goto label_4;
label_3:;
	INST_ALOAD(3);
label_4:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jbool M_arc_graphics_g2d_TextureAtlas_has_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/TextureAtlas:has", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(215);
	sp[0].o = (jobject)((arc_graphics_g2d_TextureAtlas *) NULL_CHECK((frame[0].o)))->F_regionmap;
	jint temp0 = (jint)((func_arc_struct_ObjectMap_containsKey_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_containsKey_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_g2d_TextureAtlas_getDrawable_java_lang_String_R_arc_scene_style_Drawable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/TextureAtlas:getDrawable", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(220);
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/TextureAtlas:drawable", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(226);
	sp[0].o = (jobject)((arc_graphics_g2d_TextureAtlas *) NULL_CHECK((frame[0].o)))->F_drawables;
	jint temp0 = (jint)((func_arc_struct_ObjectMap_containsKey_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_containsKey_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(227);
	sp[0].o = (jobject)((arc_graphics_g2d_TextureAtlas *) NULL_CHECK((frame[0].o)))->F_drawables;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_arc_scene_style_Drawable, sp[0].o));
	}
label_1:;
	{
	LINE_NUMBER(230);
	frame[2].o = (jobject(nullptr));
	LINE_NUMBER(232);
	jint temp0 = (jint)((func_arc_graphics_g2d_TextureAtlas_has_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_has_java_lang_String_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(233);
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, (frame[0].o), (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(235);
	sp[0].o = (jobject)((arc_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[3].o)))->F_splits;
	if (sp[0].o == nullptr) goto label_7;
	}
	{
	LINE_NUMBER(236);
	sp[0].o = (jobject)((arc_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[3].o)))->F_splits;
	frame[4].o = sp[0].o;
	LINE_NUMBER(237);
	clinit_arc_graphics_g2d_NinePatch(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_g2d_NinePatch);
	init_arc_graphics_g2d_NinePatch_arc_graphics_g2d_TextureRegion_int_int_int_int(ctx, sp[0].o, (frame[3].o), ((jint)ARRAY_ACCESS(jint, (frame[4].o), (jint(0)))), ((jint)ARRAY_ACCESS(jint, (frame[4].o), (jint(1)))), ((jint)ARRAY_ACCESS(jint, (frame[4].o), (jint(2)))), ((jint)ARRAY_ACCESS(jint, (frame[4].o), (jint(3)))));
	frame[5].o = sp[0].o;
	LINE_NUMBER(238);
	sp[0].o = (jobject)((arc_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[3].o)))->F_pads;
	frame[6].o = sp[0].o;
	LINE_NUMBER(239);
	if ((frame[6].o) == nullptr) goto label_12;
	}
	{
	((func_arc_graphics_g2d_NinePatch_setPadding_float_float_float_float) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_graphics_g2d_NinePatch_setPadding_float_float_float_float])(ctx, (frame[5].o), (jfloat(((jint)ARRAY_ACCESS(jint, (frame[6].o), (jint(0)))))), (jfloat(((jint)ARRAY_ACCESS(jint, (frame[6].o), (jint(1)))))), (jfloat(((jint)ARRAY_ACCESS(jint, (frame[6].o), (jint(2)))))), (jfloat(((jint)ARRAY_ACCESS(jint, (frame[6].o), (jint(3)))))));
	}
label_12:;
	{
	LINE_NUMBER(240);
	clinit_arc_scene_style_ScaledNinePatchDrawable(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_style_ScaledNinePatchDrawable);
	init_arc_scene_style_ScaledNinePatchDrawable_arc_graphics_g2d_NinePatch_float(ctx, sp[0].o, (frame[5].o), ((jfloat)((arc_graphics_g2d_TextureAtlas *) NULL_CHECK((frame[0].o)))->F_drawableScale));
	frame[2].o = sp[0].o;
	LINE_NUMBER(241);
	goto label_4;
	}
label_7:;
	{
	LINE_NUMBER(242);
	clinit_arc_scene_style_TextureRegionDrawable(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_style_TextureRegionDrawable);
	init_arc_scene_style_TextureRegionDrawable_arc_graphics_g2d_TextureRegion_float(ctx, sp[0].o, (frame[3].o), ((jfloat)((arc_graphics_g2d_TextureAtlas *) NULL_CHECK((frame[0].o)))->F_drawableScale));
	frame[2].o = sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(246);
	sp[0].o = (jobject)((arc_graphics_g2d_TextureAtlas *) NULL_CHECK((frame[0].o)))->F_error;
	if (sp[0].o != nullptr) goto label_14;
	}
	INST_ALOAD(2);
	if ((--sp)->o != nullptr) goto label_14;
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"No drawable '"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"' found."_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_14:;
	{
	LINE_NUMBER(247);
	if ((frame[2].o) != nullptr) goto label_15;
	}
	{
	clinit_arc_scene_style_TextureRegionDrawable(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_style_TextureRegionDrawable);
	sp[1].o = (jobject)((arc_graphics_g2d_TextureAtlas *) NULL_CHECK((frame[0].o)))->F_error;
	init_arc_scene_style_TextureRegionDrawable_arc_graphics_g2d_TextureRegion(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	}
label_15:;
	{
	LINE_NUMBER(248);
	sp[0].o = (jobject)((arc_graphics_g2d_TextureAtlas *) NULL_CHECK((frame[0].o)))->F_drawables;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o), (frame[2].o));
	LINE_NUMBER(250);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_g2d_TextureAtlas_getDrawables_R_arc_struct_ObjectMap(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/TextureAtlas:getDrawables", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(254);
	sp[0].o = (jobject)((arc_graphics_g2d_TextureAtlas *) NULL_CHECK((frame[0].o)))->F_drawables;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_g2d_TextureAtlas_createPatch_java_lang_String_R_arc_graphics_g2d_NinePatch(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/TextureAtlas:createPatch", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(264);
	frame[2].i = (jint(0));
	sp[0].o = (jobject)((arc_graphics_g2d_TextureAtlas *) NULL_CHECK((frame[0].o)))->F_regions;
	frame[3].i = ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size);
	}
label_2:;
	{
	if ((frame[2].i) >= (frame[3].i)) goto label_3;
	}
	{
	LINE_NUMBER(265);
	sp[0].o = (jobject)((arc_graphics_g2d_TextureAtlas *) NULL_CHECK((frame[0].o)))->F_regions;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[2].i));
	frame[4].o = (checkCast(ctx, &class_arc_graphics_g2d_TextureAtlas$AtlasRegion, sp[0].o));
	LINE_NUMBER(266);
	sp[0].o = (jobject)((arc_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[4].o)))->F_name;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_6;
	}
	{
	LINE_NUMBER(267);
	sp[0].o = (jobject)((arc_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[4].o)))->F_splits;
	frame[5].o = sp[0].o;
	LINE_NUMBER(268);
	if ((frame[5].o) != nullptr) goto label_9;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Region does not have ninepatch splits: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_9:;
	{
	LINE_NUMBER(269);
	clinit_arc_graphics_g2d_NinePatch(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_g2d_NinePatch);
	init_arc_graphics_g2d_NinePatch_arc_graphics_g2d_TextureRegion_int_int_int_int(ctx, sp[0].o, (frame[4].o), ((jint)ARRAY_ACCESS(jint, (frame[5].o), (jint(0)))), ((jint)ARRAY_ACCESS(jint, (frame[5].o), (jint(1)))), ((jint)ARRAY_ACCESS(jint, (frame[5].o), (jint(2)))), ((jint)ARRAY_ACCESS(jint, (frame[5].o), (jint(3)))));
	frame[6].o = sp[0].o;
	LINE_NUMBER(270);
	sp[0].o = (jobject)((arc_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[4].o)))->F_pads;
	if (sp[0].o == nullptr) goto label_11;
	}
	{
	LINE_NUMBER(271);
	sp[0].o = frame[6].o;
	sp[1].o = (jobject)((arc_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[4].o)))->F_pads;
	jfloat temp0 = jfloat(((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(0)))));
	sp[1].o = (jobject)((arc_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[4].o)))->F_pads;
	jfloat temp1 = jfloat(((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(1)))));
	sp[1].o = (jobject)((arc_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[4].o)))->F_pads;
	jfloat temp2 = jfloat(((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(2)))));
	sp[1].o = (jobject)((arc_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[4].o)))->F_pads;
	((func_arc_graphics_g2d_NinePatch_setPadding_float_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_NinePatch_setPadding_float_float_float_float])(ctx, sp[0].o, temp0, temp1, temp2, (jfloat(((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(3)))))));
	}
label_11:;
	{
	LINE_NUMBER(272);
	popStackFrame(ctx);
	return (frame[6].o);
	}
label_6:;
	{
	LINE_NUMBER(264);
	INST_IINC(2, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(275);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_g2d_TextureAtlas_getTextures_R_arc_struct_ObjectSet(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/TextureAtlas:getTextures", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(280);
	sp[0].o = (jobject)((arc_graphics_g2d_TextureAtlas *) NULL_CHECK((frame[0].o)))->F_textures;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_g2d_TextureAtlas_texture_R_arc_graphics_Texture(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/TextureAtlas:texture", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(285);
	sp[0].o = (jobject)((arc_graphics_g2d_TextureAtlas *) NULL_CHECK((frame[0].o)))->F_textures;
	sp[0].o = (jobject)((func_arc_struct_ObjectSet_first_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_first_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_arc_graphics_Texture, sp[0].o));
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_TextureAtlas_dispose(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/TextureAtlas:dispose", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(293);
	sp[0].o = (jobject)((arc_graphics_g2d_TextureAtlas *) NULL_CHECK((frame[0].o)))->F_textures;
	sp[0].o = (jobject)((func_arc_struct_ObjectSet_iterator_R_arc_struct_ObjectSet$ObjectSetIterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_iterator_R_arc_struct_ObjectSet$ObjectSetIterator])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_1:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_arc_graphics_Texture, sp[0].o));
	LINE_NUMBER(294);
	((func_arc_graphics_Texture_dispose) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_graphics_Texture_dispose])(ctx, (frame[2].o));
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(295);
	sp[0].o = (jobject)((arc_graphics_g2d_TextureAtlas *) NULL_CHECK((frame[0].o)))->F_pixmaps;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_values_R_arc_struct_ObjectMap$Values) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_values_R_arc_struct_ObjectMap$Values])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_ObjectMap$Values_iterator_R_arc_struct_ObjectMap$Values) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap$Values_iterator_R_arc_struct_ObjectMap$Values])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_5:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_arc_graphics_Pixmap, sp[0].o));
	LINE_NUMBER(296);
	jint temp0 = (jint)((func_arc_graphics_Pixmap_isDisposed_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_graphics_Pixmap_isDisposed_R_boolean])(ctx, (frame[2].o));
	if (temp0 != 0) goto label_8;
	}
	{
	LINE_NUMBER(297);
	((func_arc_graphics_Pixmap_dispose) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_graphics_Pixmap_dispose])(ctx, (frame[2].o));
	}
label_8:;
	LINE_NUMBER(296);
	goto label_5;
label_6:;
	{
	LINE_NUMBER(298);
	sp[0].o = (jobject)((arc_graphics_g2d_TextureAtlas *) NULL_CHECK((frame[0].o)))->F_textures;
	((func_arc_struct_ObjectSet_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_clear])(ctx, sp[0].o);
	LINE_NUMBER(299);
	sp[0].o = (jobject)((arc_graphics_g2d_TextureAtlas *) NULL_CHECK((frame[0].o)))->F_pixmaps;
	((func_arc_struct_ObjectMap_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_clear])(ctx, sp[0].o);
	LINE_NUMBER(300);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_arc_graphics_g2d_TextureAtlas_lambda$getPixmap$0_arc_graphics_g2d_TextureAtlas$AtlasRegion_R_arc_graphics_Pixmap(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/TextureAtlas:lambda$getPixmap$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_TextureAtlas(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(125);
	sp[0].o = (jobject)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_texture;
	sp[0].o = (jobject)((func_arc_graphics_Texture_getTextureData_R_arc_graphics_TextureData) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Texture_getTextureData_R_arc_graphics_TextureData])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_graphics_TextureData_getPixmap_R_arc_graphics_Pixmap) resolveInterfaceMethod(ctx, &class_arc_graphics_TextureData, INDEX_arc_graphics_TextureData_getPixmap_R_arc_graphics_Pixmap, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_arc_graphics_g2d_TextureAtlas[] {
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
	(void *) M_arc_graphics_g2d_TextureAtlas_dispose,
	(void *) M_arc_util_Disposable_isDisposed_R_boolean,
	(void *) M_arc_graphics_g2d_TextureAtlas_setDrawableScale_float,
	(void *) M_arc_graphics_g2d_TextureAtlas_load_arc_graphics_g2d_TextureAtlas$TextureAtlasData,
	(void *) M_arc_graphics_g2d_TextureAtlas_getPixmap_java_lang_String_R_arc_graphics_g2d_PixmapRegion,
	(void *) M_arc_graphics_g2d_TextureAtlas_getPixmap_arc_graphics_g2d_TextureAtlas$AtlasRegion_R_arc_graphics_g2d_PixmapRegion,
	(void *) M_arc_graphics_g2d_TextureAtlas_getPixmap_arc_graphics_g2d_TextureRegion_R_arc_graphics_g2d_PixmapRegion,
	(void *) M_arc_graphics_g2d_TextureAtlas_getPixmaps_R_arc_struct_ObjectMap,
	(void *) M_arc_graphics_g2d_TextureAtlas_disposePixmap_arc_graphics_Texture,
	(void *) M_arc_graphics_g2d_TextureAtlas_addRegion_java_lang_String_arc_graphics_Texture_int_int_int_int_R_arc_graphics_g2d_TextureAtlas$AtlasRegion,
	(void *) M_arc_graphics_g2d_TextureAtlas_addRegion_java_lang_String_arc_graphics_g2d_TextureRegion_R_arc_graphics_g2d_TextureAtlas$AtlasRegion,
	(void *) M_arc_graphics_g2d_TextureAtlas_getRegions_R_arc_struct_Seq,
	(void *) M_arc_graphics_g2d_TextureAtlas_getRegionMap_R_arc_struct_ObjectMap,
	(void *) M_arc_graphics_g2d_TextureAtlas_white_R_arc_graphics_g2d_TextureAtlas$AtlasRegion,
	(void *) M_arc_graphics_g2d_TextureAtlas_setErrorRegion_java_lang_String_R_boolean,
	(void *) M_arc_graphics_g2d_TextureAtlas_isFound_arc_graphics_g2d_TextureRegion_R_boolean,
	(void *) M_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion,
	(void *) M_arc_graphics_g2d_TextureAtlas_find_java_lang_String_java_lang_String_R_arc_graphics_g2d_TextureRegion,
	(void *) M_arc_graphics_g2d_TextureAtlas_find_java_lang_String_arc_graphics_g2d_TextureRegion_R_arc_graphics_g2d_TextureRegion,
	(void *) M_arc_graphics_g2d_TextureAtlas_has_java_lang_String_R_boolean,
	(void *) M_arc_graphics_g2d_TextureAtlas_getDrawable_java_lang_String_R_arc_scene_style_Drawable,
	(void *) M_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable,
	(void *) M_arc_graphics_g2d_TextureAtlas_getDrawables_R_arc_struct_ObjectMap,
	(void *) M_arc_graphics_g2d_TextureAtlas_createPatch_java_lang_String_R_arc_graphics_g2d_NinePatch,
	(void *) M_arc_graphics_g2d_TextureAtlas_getTextures_R_arc_struct_ObjectSet,
	(void *) M_arc_graphics_g2d_TextureAtlas_texture_R_arc_graphics_Texture,
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
	{ "dispose", "()V" },
	{ "isDisposed", "()Z" },
	{ "setDrawableScale", "(F)V" },
	{ "load", "(Larc/graphics/g2d/TextureAtlas$TextureAtlasData;)V" },
	{ "getPixmap", "(Ljava/lang/String;)Larc/graphics/g2d/PixmapRegion;" },
	{ "getPixmap", "(Larc/graphics/g2d/TextureAtlas$AtlasRegion;)Larc/graphics/g2d/PixmapRegion;" },
	{ "getPixmap", "(Larc/graphics/g2d/TextureRegion;)Larc/graphics/g2d/PixmapRegion;" },
	{ "getPixmaps", "()Larc/struct/ObjectMap;" },
	{ "disposePixmap", "(Larc/graphics/Texture;)V" },
	{ "addRegion", "(Ljava/lang/String;Larc/graphics/Texture;IIII)Larc/graphics/g2d/TextureAtlas$AtlasRegion;" },
	{ "addRegion", "(Ljava/lang/String;Larc/graphics/g2d/TextureRegion;)Larc/graphics/g2d/TextureAtlas$AtlasRegion;" },
	{ "getRegions", "()Larc/struct/Seq;" },
	{ "getRegionMap", "()Larc/struct/ObjectMap;" },
	{ "white", "()Larc/graphics/g2d/TextureAtlas$AtlasRegion;" },
	{ "setErrorRegion", "(Ljava/lang/String;)Z" },
	{ "isFound", "(Larc/graphics/g2d/TextureRegion;)Z" },
	{ "find", "(Ljava/lang/String;)Larc/graphics/g2d/TextureAtlas$AtlasRegion;" },
	{ "find", "(Ljava/lang/String;Ljava/lang/String;)Larc/graphics/g2d/TextureRegion;" },
	{ "find", "(Ljava/lang/String;Larc/graphics/g2d/TextureRegion;)Larc/graphics/g2d/TextureRegion;" },
	{ "has", "(Ljava/lang/String;)Z" },
	{ "getDrawable", "(Ljava/lang/String;)Larc/scene/style/Drawable;" },
	{ "drawable", "(Ljava/lang/String;)Larc/scene/style/Drawable;" },
	{ "getDrawables", "()Larc/struct/ObjectMap;" },
	{ "createPatch", "(Ljava/lang/String;)Larc/graphics/g2d/NinePatch;" },
	{ "getTextures", "()Larc/struct/ObjectSet;" },
	{ "texture", "()Larc/graphics/Texture;" },
};

static jclass interfaces[] { &class_arc_util_Disposable, };

static jclass innerClasses[] {
	&class_arc_graphics_g2d_TextureAtlas$AtlasRegion,
	&class_arc_graphics_g2d_TextureAtlas$TextureAtlasData,
};

static FieldMetadata fields[] {
	{ "textures", &class_arc_struct_ObjectSet, offsetof(arc_graphics_g2d_TextureAtlas, F_textures), "Larc/struct/ObjectSet;", 18 },
	{ "regions", &class_arc_struct_Seq, offsetof(arc_graphics_g2d_TextureAtlas, F_regions), "Larc/struct/Seq;", 18 },
	{ "drawables", &class_arc_struct_ObjectMap, offsetof(arc_graphics_g2d_TextureAtlas, F_drawables), "Larc/struct/ObjectMap;", 18 },
	{ "regionmap", &class_arc_struct_ObjectMap, offsetof(arc_graphics_g2d_TextureAtlas, F_regionmap), "Larc/struct/ObjectMap;", 18 },
	{ "pixmaps", &class_arc_struct_ObjectMap, offsetof(arc_graphics_g2d_TextureAtlas, F_pixmaps), "Larc/struct/ObjectMap;", 18 },
	{ "error", &class_arc_graphics_g2d_TextureAtlas$AtlasRegion, offsetof(arc_graphics_g2d_TextureAtlas, F_error), "Larc/graphics/g2d/TextureAtlas$AtlasRegion;", 4 },
	{ "white", &class_arc_graphics_g2d_TextureAtlas$AtlasRegion, offsetof(arc_graphics_g2d_TextureAtlas, F_white), "Larc/graphics/g2d/TextureAtlas$AtlasRegion;", 4 },
	{ "drawableScale", &class_float, offsetof(arc_graphics_g2d_TextureAtlas, F_drawableScale), "F", 4 },
};

static MethodMetadata methods[] {
	{ "blankAtlas", (intptr_t) SM_arc_graphics_g2d_TextureAtlas_blankAtlas_R_arc_graphics_g2d_TextureAtlas, 0, "()Larc/graphics/g2d/TextureAtlas;", 9 },
	{ "<init>", (intptr_t) init_arc_graphics_g2d_TextureAtlas, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_arc_graphics_g2d_TextureAtlas_java_lang_String, 0, "(Ljava/lang/String;)V", 1 },
	{ "<init>", (intptr_t) init_arc_graphics_g2d_TextureAtlas_arc_files_Fi, 0, "(Larc/files/Fi;)V", 1 },
	{ "<init>", (intptr_t) init_arc_graphics_g2d_TextureAtlas_arc_files_Fi_boolean, 0, "(Larc/files/Fi;Z)V", 1 },
	{ "<init>", (intptr_t) init_arc_graphics_g2d_TextureAtlas_arc_files_Fi_arc_files_Fi, 0, "(Larc/files/Fi;Larc/files/Fi;)V", 1 },
	{ "<init>", (intptr_t) init_arc_graphics_g2d_TextureAtlas_arc_files_Fi_arc_files_Fi_boolean, 0, "(Larc/files/Fi;Larc/files/Fi;Z)V", 1 },
	{ "<init>", (intptr_t) init_arc_graphics_g2d_TextureAtlas_arc_graphics_g2d_TextureAtlas$TextureAtlasData, 0, "(Larc/graphics/g2d/TextureAtlas$TextureAtlasData;)V", 1 },
	{ "setDrawableScale", (intptr_t) M_arc_graphics_g2d_TextureAtlas_setDrawableScale_float, VTABLE_arc_graphics_g2d_TextureAtlas_setDrawableScale_float, "(F)V", 1 },
	{ "load", (intptr_t) M_arc_graphics_g2d_TextureAtlas_load_arc_graphics_g2d_TextureAtlas$TextureAtlasData, VTABLE_arc_graphics_g2d_TextureAtlas_load_arc_graphics_g2d_TextureAtlas$TextureAtlasData, "(Larc/graphics/g2d/TextureAtlas$TextureAtlasData;)V", 2 },
	{ "getPixmap", (intptr_t) M_arc_graphics_g2d_TextureAtlas_getPixmap_java_lang_String_R_arc_graphics_g2d_PixmapRegion, VTABLE_arc_graphics_g2d_TextureAtlas_getPixmap_java_lang_String_R_arc_graphics_g2d_PixmapRegion, "(Ljava/lang/String;)Larc/graphics/g2d/PixmapRegion;", 1 },
	{ "getPixmap", (intptr_t) M_arc_graphics_g2d_TextureAtlas_getPixmap_arc_graphics_g2d_TextureAtlas$AtlasRegion_R_arc_graphics_g2d_PixmapRegion, VTABLE_arc_graphics_g2d_TextureAtlas_getPixmap_arc_graphics_g2d_TextureAtlas$AtlasRegion_R_arc_graphics_g2d_PixmapRegion, "(Larc/graphics/g2d/TextureAtlas$AtlasRegion;)Larc/graphics/g2d/PixmapRegion;", 1 },
	{ "getPixmap", (intptr_t) M_arc_graphics_g2d_TextureAtlas_getPixmap_arc_graphics_g2d_TextureRegion_R_arc_graphics_g2d_PixmapRegion, VTABLE_arc_graphics_g2d_TextureAtlas_getPixmap_arc_graphics_g2d_TextureRegion_R_arc_graphics_g2d_PixmapRegion, "(Larc/graphics/g2d/TextureRegion;)Larc/graphics/g2d/PixmapRegion;", 1 },
	{ "getPixmaps", (intptr_t) M_arc_graphics_g2d_TextureAtlas_getPixmaps_R_arc_struct_ObjectMap, VTABLE_arc_graphics_g2d_TextureAtlas_getPixmaps_R_arc_struct_ObjectMap, "()Larc/struct/ObjectMap;", 1 },
	{ "disposePixmap", (intptr_t) M_arc_graphics_g2d_TextureAtlas_disposePixmap_arc_graphics_Texture, VTABLE_arc_graphics_g2d_TextureAtlas_disposePixmap_arc_graphics_Texture, "(Larc/graphics/Texture;)V", 1 },
	{ "addRegion", (intptr_t) M_arc_graphics_g2d_TextureAtlas_addRegion_java_lang_String_arc_graphics_Texture_int_int_int_int_R_arc_graphics_g2d_TextureAtlas$AtlasRegion, VTABLE_arc_graphics_g2d_TextureAtlas_addRegion_java_lang_String_arc_graphics_Texture_int_int_int_int_R_arc_graphics_g2d_TextureAtlas$AtlasRegion, "(Ljava/lang/String;Larc/graphics/Texture;IIII)Larc/graphics/g2d/TextureAtlas$AtlasRegion;", 1 },
	{ "addRegion", (intptr_t) M_arc_graphics_g2d_TextureAtlas_addRegion_java_lang_String_arc_graphics_g2d_TextureRegion_R_arc_graphics_g2d_TextureAtlas$AtlasRegion, VTABLE_arc_graphics_g2d_TextureAtlas_addRegion_java_lang_String_arc_graphics_g2d_TextureRegion_R_arc_graphics_g2d_TextureAtlas$AtlasRegion, "(Ljava/lang/String;Larc/graphics/g2d/TextureRegion;)Larc/graphics/g2d/TextureAtlas$AtlasRegion;", 1 },
	{ "getRegions", (intptr_t) M_arc_graphics_g2d_TextureAtlas_getRegions_R_arc_struct_Seq, VTABLE_arc_graphics_g2d_TextureAtlas_getRegions_R_arc_struct_Seq, "()Larc/struct/Seq;", 1 },
	{ "getRegionMap", (intptr_t) M_arc_graphics_g2d_TextureAtlas_getRegionMap_R_arc_struct_ObjectMap, VTABLE_arc_graphics_g2d_TextureAtlas_getRegionMap_R_arc_struct_ObjectMap, "()Larc/struct/ObjectMap;", 1 },
	{ "white", (intptr_t) M_arc_graphics_g2d_TextureAtlas_white_R_arc_graphics_g2d_TextureAtlas$AtlasRegion, VTABLE_arc_graphics_g2d_TextureAtlas_white_R_arc_graphics_g2d_TextureAtlas$AtlasRegion, "()Larc/graphics/g2d/TextureAtlas$AtlasRegion;", 1 },
	{ "setErrorRegion", (intptr_t) M_arc_graphics_g2d_TextureAtlas_setErrorRegion_java_lang_String_R_boolean, VTABLE_arc_graphics_g2d_TextureAtlas_setErrorRegion_java_lang_String_R_boolean, "(Ljava/lang/String;)Z", 1 },
	{ "isFound", (intptr_t) M_arc_graphics_g2d_TextureAtlas_isFound_arc_graphics_g2d_TextureRegion_R_boolean, VTABLE_arc_graphics_g2d_TextureAtlas_isFound_arc_graphics_g2d_TextureRegion_R_boolean, "(Larc/graphics/g2d/TextureRegion;)Z", 1 },
	{ "find", (intptr_t) M_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion, VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion, "(Ljava/lang/String;)Larc/graphics/g2d/TextureAtlas$AtlasRegion;", 1 },
	{ "find", (intptr_t) M_arc_graphics_g2d_TextureAtlas_find_java_lang_String_java_lang_String_R_arc_graphics_g2d_TextureRegion, VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_java_lang_String_R_arc_graphics_g2d_TextureRegion, "(Ljava/lang/String;Ljava/lang/String;)Larc/graphics/g2d/TextureRegion;", 1 },
	{ "find", (intptr_t) M_arc_graphics_g2d_TextureAtlas_find_java_lang_String_arc_graphics_g2d_TextureRegion_R_arc_graphics_g2d_TextureRegion, VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_arc_graphics_g2d_TextureRegion_R_arc_graphics_g2d_TextureRegion, "(Ljava/lang/String;Larc/graphics/g2d/TextureRegion;)Larc/graphics/g2d/TextureRegion;", 1 },
	{ "has", (intptr_t) M_arc_graphics_g2d_TextureAtlas_has_java_lang_String_R_boolean, VTABLE_arc_graphics_g2d_TextureAtlas_has_java_lang_String_R_boolean, "(Ljava/lang/String;)Z", 1 },
	{ "getDrawable", (intptr_t) M_arc_graphics_g2d_TextureAtlas_getDrawable_java_lang_String_R_arc_scene_style_Drawable, VTABLE_arc_graphics_g2d_TextureAtlas_getDrawable_java_lang_String_R_arc_scene_style_Drawable, "(Ljava/lang/String;)Larc/scene/style/Drawable;", 1 },
	{ "drawable", (intptr_t) M_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable, VTABLE_arc_graphics_g2d_TextureAtlas_drawable_java_lang_String_R_arc_scene_style_Drawable, "(Ljava/lang/String;)Larc/scene/style/Drawable;", 1 },
	{ "getDrawables", (intptr_t) M_arc_graphics_g2d_TextureAtlas_getDrawables_R_arc_struct_ObjectMap, VTABLE_arc_graphics_g2d_TextureAtlas_getDrawables_R_arc_struct_ObjectMap, "()Larc/struct/ObjectMap;", 1 },
	{ "createPatch", (intptr_t) M_arc_graphics_g2d_TextureAtlas_createPatch_java_lang_String_R_arc_graphics_g2d_NinePatch, VTABLE_arc_graphics_g2d_TextureAtlas_createPatch_java_lang_String_R_arc_graphics_g2d_NinePatch, "(Ljava/lang/String;)Larc/graphics/g2d/NinePatch;", 1 },
	{ "getTextures", (intptr_t) M_arc_graphics_g2d_TextureAtlas_getTextures_R_arc_struct_ObjectSet, VTABLE_arc_graphics_g2d_TextureAtlas_getTextures_R_arc_struct_ObjectSet, "()Larc/struct/ObjectSet;", 1 },
	{ "texture", (intptr_t) M_arc_graphics_g2d_TextureAtlas_texture_R_arc_graphics_Texture, VTABLE_arc_graphics_g2d_TextureAtlas_texture_R_arc_graphics_Texture, "()Larc/graphics/Texture;", 1 },
	{ "dispose", (intptr_t) M_arc_graphics_g2d_TextureAtlas_dispose, VTABLE_arc_graphics_g2d_TextureAtlas_dispose, "()V", 1 },
	{ "lambda$getPixmap$0", (intptr_t) SM_arc_graphics_g2d_TextureAtlas_lambda$getPixmap$0_arc_graphics_g2d_TextureAtlas$AtlasRegion_R_arc_graphics_Pixmap, 0, "(Larc/graphics/g2d/TextureAtlas$AtlasRegion;)Larc/graphics/Pixmap;", 4106 },
};

Class class_arc_graphics_g2d_TextureAtlas{
		.nativeName = (intptr_t) "arc/graphics/g2d/TextureAtlas",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_graphics_g2d_TextureAtlas),
		.classVtable = (intptr_t) vtable_arc_graphics_g2d_TextureAtlas,
		.staticInitializer = (intptr_t) clinit_arc_graphics_g2d_TextureAtlas,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_graphics_g2d_TextureAtlas,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 2,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 8,
		.nativeFields = (intptr_t) fields,
		.methodCount = 34,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 37,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_graphics_g2d_TextureAtlas = registerClass(&class_arc_graphics_g2d_TextureAtlas);

}
