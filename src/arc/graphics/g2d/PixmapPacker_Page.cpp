#include "arc/graphics/g2d/PixmapPacker_Page.h"
#include "arc/graphics/TextureData.h"
#include "arc/graphics/GLTexture.h"
#include "arc/struct/OrderedMap.h"
#include "arc/graphics/Color.h"
#include "arc/graphics/Texture.h"
#include "java/lang/Object.h"
#include "arc/graphics/Pixmap.h"
#include "arc/struct/Seq.h"
#include "arc/graphics/Texture_TextureFilter.h"
#include "arc/graphics/g2d/PixmapPacker.h"
#include "arc/graphics/g2d/PixmapPacker_Page.h"
#include "arc/graphics/g2d/PixmapPacker_Page_1.h"
#include "arc/graphics/gl/PixmapTextureData.h"

extern "C" {


void mark_arc_graphics_g2d_PixmapPacker$Page(jobject object, jint mark, jint depth) {
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
	auto self = (arc_graphics_g2d_PixmapPacker$Page *) object;
	if (self->F_addedRects)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_addedRects)->clazz)->markFunction)((jobject) self->F_addedRects, mark, depth + 1);
	if (self->F_rects)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_rects)->clazz)->markFunction)((jobject) self->F_rects, mark, depth + 1);
	if (self->F_image)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_image)->clazz)->markFunction)((jobject) self->F_image, mark, depth + 1);
	if (self->F_texture)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_texture)->clazz)->markFunction)((jobject) self->F_texture, mark, depth + 1);
}

void clinit_arc_graphics_g2d_PixmapPacker$Page(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_graphics_g2d_PixmapPacker$Page_arc_graphics_g2d_PixmapPacker(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/PixmapPacker$Page:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_PixmapPacker$Page(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(634);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(627);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((arc_graphics_g2d_PixmapPacker$Page *) NULL_CHECK(sp[0].o))->F_addedRects = (jref) sp[1].o;
	LINE_NUMBER(628);
	sp[0].o = frame[0].o;
	clinit_arc_struct_OrderedMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_OrderedMap);
	init_arc_struct_OrderedMap(ctx, sp[1].o);
	((arc_graphics_g2d_PixmapPacker$Page *) NULL_CHECK(sp[0].o))->F_rects = (jref) sp[1].o;
	LINE_NUMBER(635);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Pixmap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_Pixmap);
	init_arc_graphics_Pixmap_int_int(ctx, sp[1].o, ((jint)((arc_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[1].o)))->F_pageWidth), ((jint)((arc_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[1].o)))->F_pageHeight));
	((arc_graphics_g2d_PixmapPacker$Page *) NULL_CHECK(sp[0].o))->F_image = (jref) sp[1].o;
	LINE_NUMBER(636);
	sp[0].o = (jobject)((func_arc_graphics_g2d_PixmapPacker_getTransparentColor_R_arc_graphics_Color) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_graphics_g2d_PixmapPacker_getTransparentColor_R_arc_graphics_Color])(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(637);
	jint temp0 = (jint)((func_arc_graphics_Color_rgba_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_graphics_Color_rgba_R_int])(ctx, (frame[2].o));
	if (temp0 == 0) goto label_6;
	}
	{
	LINE_NUMBER(638);
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapPacker$Page *) NULL_CHECK((frame[0].o)))->F_image;
	((func_arc_graphics_Pixmap_fill_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Pixmap_fill_arc_graphics_Color])(ctx, sp[0].o, (frame[2].o));
	}
label_6:;
	LINE_NUMBER(640);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void init_arc_graphics_g2d_PixmapPacker$Page_arc_graphics_Pixmap(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/PixmapPacker$Page:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_PixmapPacker$Page(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(642);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(627);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((arc_graphics_g2d_PixmapPacker$Page *) NULL_CHECK(sp[0].o))->F_addedRects = (jref) sp[1].o;
	LINE_NUMBER(628);
	sp[0].o = frame[0].o;
	clinit_arc_struct_OrderedMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_OrderedMap);
	init_arc_struct_OrderedMap(ctx, sp[1].o);
	((arc_graphics_g2d_PixmapPacker$Page *) NULL_CHECK(sp[0].o))->F_rects = (jref) sp[1].o;
	LINE_NUMBER(643);
	((arc_graphics_g2d_PixmapPacker$Page *) NULL_CHECK((frame[0].o)))->F_image = (jref) (frame[1].o);
	LINE_NUMBER(644);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_PixmapPacker$Page_setDirty_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/PixmapPacker$Page:setDirty", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(647);
	((arc_graphics_g2d_PixmapPacker$Page *) NULL_CHECK((frame[0].o)))->F_dirty = (frame[1].i);
	LINE_NUMBER(648);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_g2d_PixmapPacker$Page_getPixmap_R_arc_graphics_Pixmap(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/PixmapPacker$Page:getPixmap", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(651);
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapPacker$Page *) NULL_CHECK((frame[0].o)))->F_image;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_g2d_PixmapPacker$Page_getRects_R_arc_struct_OrderedMap(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/PixmapPacker$Page:getRects", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(655);
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapPacker$Page *) NULL_CHECK((frame[0].o)))->F_rects;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_g2d_PixmapPacker$Page_getTexture_R_arc_graphics_Texture(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/PixmapPacker$Page:getTexture", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(663);
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapPacker$Page *) NULL_CHECK((frame[0].o)))->F_texture;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_arc_graphics_g2d_PixmapPacker$Page_updateTexture_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter_boolean_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/PixmapPacker$Page:updateTexture", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(672);
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapPacker$Page *) NULL_CHECK((frame[0].o)))->F_texture;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(673);
	if (((jint)((arc_graphics_g2d_PixmapPacker$Page *) NULL_CHECK((frame[0].o)))->F_dirty) != 0) goto label_3;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(674);
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapPacker$Page *) NULL_CHECK((frame[0].o)))->F_texture;
	sp[1].o = (jobject)((arc_graphics_g2d_PixmapPacker$Page *) NULL_CHECK((frame[0].o)))->F_texture;
	sp[1].o = (jobject)((func_arc_graphics_Texture_getTextureData_R_arc_graphics_TextureData) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Texture_getTextureData_R_arc_graphics_TextureData])(ctx, sp[1].o);
	((func_arc_graphics_Texture_load_arc_graphics_TextureData) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Texture_load_arc_graphics_TextureData])(ctx, sp[0].o, sp[1].o);
	goto label_4;
	}
label_1:;
	{
	LINE_NUMBER(676);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_g2d_PixmapPacker$Page$1(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_g2d_PixmapPacker$Page$1);
	sp[2].o = frame[0].o;
	clinit_arc_graphics_gl_PixmapTextureData(ctx);
	sp[3].o = gcAlloc(ctx, &class_arc_graphics_gl_PixmapTextureData);
	sp[4].o = (jobject)((arc_graphics_g2d_PixmapPacker$Page *) NULL_CHECK((frame[0].o)))->F_image;
	init_arc_graphics_gl_PixmapTextureData_arc_graphics_Pixmap_boolean_boolean(ctx, sp[3].o, sp[4].o, (frame[3].i), (jint(0)));
	init_arc_graphics_g2d_PixmapPacker$Page$1_arc_graphics_g2d_PixmapPacker$Page_arc_graphics_TextureData(ctx, sp[1].o, sp[2].o, sp[3].o);
	((arc_graphics_g2d_PixmapPacker$Page *) NULL_CHECK(sp[0].o))->F_texture = (jref) sp[1].o;
	LINE_NUMBER(683);
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapPacker$Page *) NULL_CHECK((frame[0].o)))->F_texture;
	((func_arc_graphics_Texture_setFilter_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Texture_setFilter_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter])(ctx, sp[0].o, (frame[1].o), (frame[2].o));
	}
label_4:;
	{
	LINE_NUMBER(685);
	((arc_graphics_g2d_PixmapPacker$Page *) NULL_CHECK((frame[0].o)))->F_dirty = (jint(0));
	LINE_NUMBER(686);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void *vtable_arc_graphics_g2d_PixmapPacker$Page[] {
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
	(void *) M_arc_graphics_g2d_PixmapPacker$Page_setDirty_boolean,
	(void *) M_arc_graphics_g2d_PixmapPacker$Page_getPixmap_R_arc_graphics_Pixmap,
	(void *) M_arc_graphics_g2d_PixmapPacker$Page_getRects_R_arc_struct_OrderedMap,
	(void *) M_arc_graphics_g2d_PixmapPacker$Page_getTexture_R_arc_graphics_Texture,
	(void *) M_arc_graphics_g2d_PixmapPacker$Page_updateTexture_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter_boolean_R_boolean,
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
	{ "setDirty", "(Z)V" },
	{ "getPixmap", "()Larc/graphics/Pixmap;" },
	{ "getRects", "()Larc/struct/OrderedMap;" },
	{ "getTexture", "()Larc/graphics/Texture;" },
	{ "updateTexture", "(Larc/graphics/Texture$TextureFilter;Larc/graphics/Texture$TextureFilter;Z)Z" },
};

static FieldMetadata fields[] {
	{ "addedRects", &class_arc_struct_Seq, offsetof(arc_graphics_g2d_PixmapPacker$Page, F_addedRects), "Larc/struct/Seq;", 17 },
	{ "rects", &class_arc_struct_OrderedMap, offsetof(arc_graphics_g2d_PixmapPacker$Page, F_rects), "Larc/struct/OrderedMap;", 1 },
	{ "image", &class_arc_graphics_Pixmap, offsetof(arc_graphics_g2d_PixmapPacker$Page, F_image), "Larc/graphics/Pixmap;", 1 },
	{ "texture", &class_arc_graphics_Texture, offsetof(arc_graphics_g2d_PixmapPacker$Page, F_texture), "Larc/graphics/Texture;", 1 },
	{ "dirty", &class_boolean, offsetof(arc_graphics_g2d_PixmapPacker$Page, F_dirty), "Z", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_graphics_g2d_PixmapPacker$Page_arc_graphics_g2d_PixmapPacker, 0, "(Larc/graphics/g2d/PixmapPacker;)V", 1 },
	{ "<init>", (intptr_t) init_arc_graphics_g2d_PixmapPacker$Page_arc_graphics_Pixmap, 0, "(Larc/graphics/Pixmap;)V", 1 },
	{ "setDirty", (intptr_t) M_arc_graphics_g2d_PixmapPacker$Page_setDirty_boolean, VTABLE_arc_graphics_g2d_PixmapPacker$Page_setDirty_boolean, "(Z)V", 1 },
	{ "getPixmap", (intptr_t) M_arc_graphics_g2d_PixmapPacker$Page_getPixmap_R_arc_graphics_Pixmap, VTABLE_arc_graphics_g2d_PixmapPacker$Page_getPixmap_R_arc_graphics_Pixmap, "()Larc/graphics/Pixmap;", 1 },
	{ "getRects", (intptr_t) M_arc_graphics_g2d_PixmapPacker$Page_getRects_R_arc_struct_OrderedMap, VTABLE_arc_graphics_g2d_PixmapPacker$Page_getRects_R_arc_struct_OrderedMap, "()Larc/struct/OrderedMap;", 1 },
	{ "getTexture", (intptr_t) M_arc_graphics_g2d_PixmapPacker$Page_getTexture_R_arc_graphics_Texture, VTABLE_arc_graphics_g2d_PixmapPacker$Page_getTexture_R_arc_graphics_Texture, "()Larc/graphics/Texture;", 1 },
	{ "updateTexture", (intptr_t) M_arc_graphics_g2d_PixmapPacker$Page_updateTexture_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter_boolean_R_boolean, VTABLE_arc_graphics_g2d_PixmapPacker$Page_updateTexture_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter_boolean_R_boolean, "(Larc/graphics/Texture$TextureFilter;Larc/graphics/Texture$TextureFilter;Z)Z", 1 },
};

Class class_arc_graphics_g2d_PixmapPacker$Page{
		.nativeName = (intptr_t) "arc/graphics/g2d/PixmapPacker$Page",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_graphics_g2d_PixmapPacker$Page),
		.classVtable = (intptr_t) vtable_arc_graphics_g2d_PixmapPacker$Page,
		.staticInitializer = (intptr_t) clinit_arc_graphics_g2d_PixmapPacker$Page,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_graphics_g2d_PixmapPacker$Page,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_graphics_g2d_PixmapPacker,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 7,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_graphics_g2d_PixmapPacker$Page = registerClass(&class_arc_graphics_g2d_PixmapPacker$Page);

}

