#include "arc/graphics/g2d/PixmapPacker_Page_1.h"
#include "arc/graphics/TextureData.h"
#include "arc/graphics/GLTexture.h"
#include "arc/graphics/Pixmap.h"
#include "java/lang/Object.h"
#include "arc/graphics/Texture.h"
#include "arc/graphics/g2d/PixmapPacker_Page_1.h"
#include "arc/graphics/g2d/PixmapPacker_Page.h"

extern "C" {


void mark_arc_graphics_g2d_PixmapPacker$Page$1(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_graphics_Texture(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (arc_graphics_g2d_PixmapPacker$Page$1 *) object;
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_arc_graphics_g2d_PixmapPacker$Page$1(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_graphics_Texture(ctx);
}

void init_arc_graphics_g2d_PixmapPacker$Page$1_arc_graphics_g2d_PixmapPacker$Page_arc_graphics_TextureData(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/PixmapPacker$Page$1:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_PixmapPacker$Page$1(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(676);
	((arc_graphics_g2d_PixmapPacker$Page$1 *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_arc_graphics_Texture_arc_graphics_TextureData(ctx, (frame[0].o), (frame[2].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_PixmapPacker$Page$1_dispose(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/PixmapPacker$Page$1:dispose", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(679);
	M_arc_graphics_GLTexture_dispose(ctx, (frame[0].o));
	LINE_NUMBER(680);
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapPacker$Page$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapPacker$Page *) NULL_CHECK(sp[0].o))->F_image;
	((func_arc_graphics_Pixmap_dispose) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Pixmap_dispose])(ctx, sp[0].o);
	LINE_NUMBER(681);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_graphics_g2d_PixmapPacker$Page$1[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_arc_graphics_Texture_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_arc_graphics_g2d_PixmapPacker$Page$1_dispose,
	(void *) M_arc_graphics_Texture_isDisposed_R_boolean,
	(void *) M_arc_graphics_Texture_getDepth_R_int,
	(void *) M_arc_graphics_GLTexture_bind,
	(void *) M_arc_graphics_GLTexture_bind_int,
	(void *) M_arc_graphics_GLTexture_getMinFilter_R_arc_graphics_Texture$TextureFilter,
	(void *) M_arc_graphics_GLTexture_getMagFilter_R_arc_graphics_Texture$TextureFilter,
	(void *) M_arc_graphics_GLTexture_getUWrap_R_arc_graphics_Texture$TextureWrap,
	(void *) M_arc_graphics_GLTexture_getVWrap_R_arc_graphics_Texture$TextureWrap,
	(void *) M_arc_graphics_GLTexture_getTextureObjectHandle_R_int,
	(void *) M_arc_graphics_GLTexture_unsafeSetWrap_arc_graphics_Texture$TextureWrap_arc_graphics_Texture$TextureWrap,
	(void *) M_arc_graphics_GLTexture_unsafeSetWrap_arc_graphics_Texture$TextureWrap_arc_graphics_Texture$TextureWrap_boolean,
	(void *) M_arc_graphics_GLTexture_setWrap_arc_graphics_Texture$TextureWrap,
	(void *) M_arc_graphics_GLTexture_setWrap_arc_graphics_Texture$TextureWrap_arc_graphics_Texture$TextureWrap,
	(void *) M_arc_graphics_GLTexture_unsafeSetFilter_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter,
	(void *) M_arc_graphics_GLTexture_unsafeSetFilter_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter_boolean,
	(void *) M_arc_graphics_GLTexture_setFilter_arc_graphics_Texture$TextureFilter,
	(void *) M_arc_graphics_GLTexture_setFilter_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter,
	(void *) M_arc_graphics_Texture_load_arc_graphics_TextureData,
	(void *) M_arc_graphics_Texture_draw_arc_graphics_Pixmap,
	(void *) M_arc_graphics_Texture_draw_arc_graphics_Pixmap_int_int,
	(void *) M_arc_graphics_Texture_getTextureData_R_arc_graphics_TextureData,
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
	{ "getDepth", "()I" },
	{ "bind", "()V" },
	{ "bind", "(I)V" },
	{ "getMinFilter", "()Larc/graphics/Texture$TextureFilter;" },
	{ "getMagFilter", "()Larc/graphics/Texture$TextureFilter;" },
	{ "getUWrap", "()Larc/graphics/Texture$TextureWrap;" },
	{ "getVWrap", "()Larc/graphics/Texture$TextureWrap;" },
	{ "getTextureObjectHandle", "()I" },
	{ "unsafeSetWrap", "(Larc/graphics/Texture$TextureWrap;Larc/graphics/Texture$TextureWrap;)V" },
	{ "unsafeSetWrap", "(Larc/graphics/Texture$TextureWrap;Larc/graphics/Texture$TextureWrap;Z)V" },
	{ "setWrap", "(Larc/graphics/Texture$TextureWrap;)V" },
	{ "setWrap", "(Larc/graphics/Texture$TextureWrap;Larc/graphics/Texture$TextureWrap;)V" },
	{ "unsafeSetFilter", "(Larc/graphics/Texture$TextureFilter;Larc/graphics/Texture$TextureFilter;)V" },
	{ "unsafeSetFilter", "(Larc/graphics/Texture$TextureFilter;Larc/graphics/Texture$TextureFilter;Z)V" },
	{ "setFilter", "(Larc/graphics/Texture$TextureFilter;)V" },
	{ "setFilter", "(Larc/graphics/Texture$TextureFilter;Larc/graphics/Texture$TextureFilter;)V" },
	{ "load", "(Larc/graphics/TextureData;)V" },
	{ "draw", "(Larc/graphics/Pixmap;)V" },
	{ "draw", "(Larc/graphics/Pixmap;II)V" },
	{ "getTextureData", "()Larc/graphics/TextureData;" },
};

static FieldMetadata fields[] {
	{ "this$0", &class_arc_graphics_g2d_PixmapPacker$Page, offsetof(arc_graphics_g2d_PixmapPacker$Page$1, F_this$0), "Larc/graphics/g2d/PixmapPacker$Page;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_graphics_g2d_PixmapPacker$Page$1_arc_graphics_g2d_PixmapPacker$Page_arc_graphics_TextureData, 0, "(Larc/graphics/g2d/PixmapPacker$Page;Larc/graphics/TextureData;)V", 0 },
	{ "dispose", (intptr_t) M_arc_graphics_g2d_PixmapPacker$Page$1_dispose, VTABLE_arc_graphics_g2d_PixmapPacker$Page$1_dispose, "()V", 1 },
};

Class class_arc_graphics_g2d_PixmapPacker$Page$1{
		.nativeName = (intptr_t) "arc/graphics/g2d/PixmapPacker$Page$1",
		.parentClass = (intptr_t) &class_arc_graphics_Texture,
		.size = sizeof(arc_graphics_g2d_PixmapPacker$Page$1),
		.classVtable = (intptr_t) vtable_arc_graphics_g2d_PixmapPacker$Page$1,
		.staticInitializer = (intptr_t) clinit_arc_graphics_g2d_PixmapPacker$Page$1,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_graphics_g2d_PixmapPacker$Page$1,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 33,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_arc_graphics_g2d_PixmapPacker$Page$1 = registerClass(&class_arc_graphics_g2d_PixmapPacker$Page$1);

}

