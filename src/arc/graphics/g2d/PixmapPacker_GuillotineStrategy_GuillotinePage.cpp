#include "arc/graphics/g2d/PixmapPacker_GuillotineStrategy_GuillotinePage.h"
#include "arc/graphics/g2d/PixmapPacker_GuillotineStrategy_Node.h"
#include "arc/graphics/Pixmap.h"
#include "java/lang/Object.h"
#include "arc/graphics/g2d/PixmapPacker_GuillotineStrategy_GuillotinePage.h"
#include "arc/math/geom/Rect.h"
#include "arc/graphics/g2d/PixmapPacker.h"
#include "arc/graphics/g2d/PixmapPacker_GuillotineStrategy.h"
#include "arc/graphics/g2d/PixmapPacker_Page.h"

extern "C" {


void mark_arc_graphics_g2d_PixmapPacker$GuillotineStrategy$GuillotinePage(jobject object, jint mark, jint depth) {
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
	auto self = (arc_graphics_g2d_PixmapPacker$GuillotineStrategy$GuillotinePage *) object;
	if (self->F_root)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_root)->clazz)->markFunction)((jobject) self->F_root, mark, depth + 1);
}

void clinit_arc_graphics_g2d_PixmapPacker$GuillotineStrategy$GuillotinePage(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_graphics_g2d_PixmapPacker$Page(ctx);
}

void init_arc_graphics_g2d_PixmapPacker$GuillotineStrategy$GuillotinePage_arc_graphics_g2d_PixmapPacker(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/PixmapPacker$GuillotineStrategy$GuillotinePage:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_PixmapPacker$GuillotineStrategy$GuillotinePage(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(786);
	init_arc_graphics_g2d_PixmapPacker$Page_arc_graphics_g2d_PixmapPacker(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(787);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_g2d_PixmapPacker$GuillotineStrategy$Node(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_g2d_PixmapPacker$GuillotineStrategy$Node);
	init_arc_graphics_g2d_PixmapPacker$GuillotineStrategy$Node(ctx, sp[1].o);
	((arc_graphics_g2d_PixmapPacker$GuillotineStrategy$GuillotinePage *) NULL_CHECK(sp[0].o))->F_root = (jref) sp[1].o;
	LINE_NUMBER(788);
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapPacker$GuillotineStrategy$GuillotinePage *) NULL_CHECK((frame[0].o)))->F_root;
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK(sp[0].o))->F_rect;
	((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_x = (jfloat(((jint)((arc_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[1].o)))->F_padding)));
	LINE_NUMBER(789);
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapPacker$GuillotineStrategy$GuillotinePage *) NULL_CHECK((frame[0].o)))->F_root;
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK(sp[0].o))->F_rect;
	((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_y = (jfloat(((jint)((arc_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[1].o)))->F_padding)));
	LINE_NUMBER(790);
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapPacker$GuillotineStrategy$GuillotinePage *) NULL_CHECK((frame[0].o)))->F_root;
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK(sp[0].o))->F_rect;
	((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_width = (jfloat((((jint)((arc_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[1].o)))->F_pageWidth) - (((jint)((arc_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[1].o)))->F_padding) * (jint(2))))));
	LINE_NUMBER(791);
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapPacker$GuillotineStrategy$GuillotinePage *) NULL_CHECK((frame[0].o)))->F_root;
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK(sp[0].o))->F_rect;
	((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_height = (jfloat((((jint)((arc_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[1].o)))->F_pageHeight) - (((jint)((arc_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[1].o)))->F_padding) * (jint(2))))));
	LINE_NUMBER(792);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_graphics_g2d_PixmapPacker$GuillotineStrategy$GuillotinePage_arc_graphics_g2d_PixmapPacker_arc_graphics_Pixmap(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/PixmapPacker$GuillotineStrategy$GuillotinePage:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_PixmapPacker$GuillotineStrategy$GuillotinePage(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(795);
	init_arc_graphics_g2d_PixmapPacker$Page_arc_graphics_Pixmap(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(796);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_g2d_PixmapPacker$GuillotineStrategy$Node(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_g2d_PixmapPacker$GuillotineStrategy$Node);
	init_arc_graphics_g2d_PixmapPacker$GuillotineStrategy$Node(ctx, sp[1].o);
	((arc_graphics_g2d_PixmapPacker$GuillotineStrategy$GuillotinePage *) NULL_CHECK(sp[0].o))->F_root = (jref) sp[1].o;
	LINE_NUMBER(797);
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapPacker$GuillotineStrategy$GuillotinePage *) NULL_CHECK((frame[0].o)))->F_root;
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK(sp[0].o))->F_rect;
	((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_x = (jfloat(((jint)((arc_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[1].o)))->F_padding)));
	LINE_NUMBER(798);
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapPacker$GuillotineStrategy$GuillotinePage *) NULL_CHECK((frame[0].o)))->F_root;
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK(sp[0].o))->F_rect;
	((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_y = (jfloat(((jint)((arc_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[1].o)))->F_padding)));
	LINE_NUMBER(799);
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapPacker$GuillotineStrategy$GuillotinePage *) NULL_CHECK((frame[0].o)))->F_root;
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK(sp[0].o))->F_rect;
	((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_width = (jfloat((((jint)((arc_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[1].o)))->F_pageWidth) - (((jint)((arc_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[1].o)))->F_padding) * (jint(2))))));
	LINE_NUMBER(800);
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapPacker$GuillotineStrategy$GuillotinePage *) NULL_CHECK((frame[0].o)))->F_root;
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK(sp[0].o))->F_rect;
	((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_height = (jfloat((((jint)((arc_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[1].o)))->F_pageHeight) - (((jint)((arc_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[1].o)))->F_padding) * (jint(2))))));
	LINE_NUMBER(801);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_graphics_g2d_PixmapPacker$GuillotineStrategy$GuillotinePage[] {
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
	{ "root", &class_arc_graphics_g2d_PixmapPacker$GuillotineStrategy$Node, offsetof(arc_graphics_g2d_PixmapPacker$GuillotineStrategy$GuillotinePage, F_root), "Larc/graphics/g2d/PixmapPacker$GuillotineStrategy$Node;", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_graphics_g2d_PixmapPacker$GuillotineStrategy$GuillotinePage_arc_graphics_g2d_PixmapPacker, 0, "(Larc/graphics/g2d/PixmapPacker;)V", 1 },
	{ "<init>", (intptr_t) init_arc_graphics_g2d_PixmapPacker$GuillotineStrategy$GuillotinePage_arc_graphics_g2d_PixmapPacker_arc_graphics_Pixmap, 0, "(Larc/graphics/g2d/PixmapPacker;Larc/graphics/Pixmap;)V", 1 },
};

Class class_arc_graphics_g2d_PixmapPacker$GuillotineStrategy$GuillotinePage{
		.nativeName = (intptr_t) "arc/graphics/g2d/PixmapPacker$GuillotineStrategy$GuillotinePage",
		.parentClass = (intptr_t) &class_arc_graphics_g2d_PixmapPacker$Page,
		.size = sizeof(arc_graphics_g2d_PixmapPacker$GuillotineStrategy$GuillotinePage),
		.classVtable = (intptr_t) vtable_arc_graphics_g2d_PixmapPacker$GuillotineStrategy$GuillotinePage,
		.staticInitializer = (intptr_t) clinit_arc_graphics_g2d_PixmapPacker$GuillotineStrategy$GuillotinePage,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_graphics_g2d_PixmapPacker$GuillotineStrategy$GuillotinePage,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_graphics_g2d_PixmapPacker$GuillotineStrategy,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_graphics_g2d_PixmapPacker$GuillotineStrategy$GuillotinePage = registerClass(&class_arc_graphics_g2d_PixmapPacker$GuillotineStrategy$GuillotinePage);

}

