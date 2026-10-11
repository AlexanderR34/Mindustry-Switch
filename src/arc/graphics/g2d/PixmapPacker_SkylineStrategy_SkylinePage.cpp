#include "arc/graphics/g2d/PixmapPacker_SkylineStrategy_SkylinePage.h"
#include "arc/graphics/g2d/PixmapPacker_SkylineStrategy.h"
#include "arc/graphics/g2d/PixmapPacker_SkylineStrategy_SkylinePage_Row.h"
#include "java/lang/Object.h"
#include "arc/struct/Seq.h"
#include "arc/graphics/g2d/PixmapPacker.h"
#include "arc/graphics/g2d/PixmapPacker_Page.h"
#include "arc/graphics/g2d/PixmapPacker_SkylineStrategy_SkylinePage.h"

extern "C" {


void mark_arc_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_graphics_g2d_PixmapPacker$Page(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (arc_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage *) object;
	if (self->F_rows)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_rows)->clazz)->markFunction)((jobject) self->F_rows, mark, depth + 1);
}

void clinit_arc_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_graphics_g2d_PixmapPacker$Page(ctx);
}

void init_arc_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage_arc_graphics_g2d_PixmapPacker(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/PixmapPacker$SkylineStrategy$SkylinePage:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(870);
	init_arc_graphics_g2d_PixmapPacker$Page_arc_graphics_g2d_PixmapPacker(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(867);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((arc_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage *) NULL_CHECK(sp[0].o))->F_rows = (jref) sp[1].o;
	LINE_NUMBER(872);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage[] {
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

static jclass innerClasses[] {
	&class_arc_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage$Row,
};

static FieldMetadata fields[] {
	{ "rows", &class_arc_struct_Seq, offsetof(arc_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage, F_rows), "Larc/struct/Seq;", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage_arc_graphics_g2d_PixmapPacker, 0, "(Larc/graphics/g2d/PixmapPacker;)V", 1 },
};

Class class_arc_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage{
		.nativeName = (intptr_t) "arc/graphics/g2d/PixmapPacker$SkylineStrategy$SkylinePage",
		.parentClass = (intptr_t) &class_arc_graphics_g2d_PixmapPacker$Page,
		.size = sizeof(arc_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage),
		.classVtable = (intptr_t) vtable_arc_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage,
		.staticInitializer = (intptr_t) clinit_arc_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_graphics_g2d_PixmapPacker$SkylineStrategy,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage = registerClass(&class_arc_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage);

}

