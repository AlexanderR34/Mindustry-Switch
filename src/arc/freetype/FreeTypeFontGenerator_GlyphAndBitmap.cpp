#include "arc/freetype/FreeTypeFontGenerator_GlyphAndBitmap.h"
#include "java/lang/Object.h"
#include "arc/freetype/FreeTypeFontGenerator_GlyphAndBitmap.h"
#include "arc/freetype/FreeType_Bitmap.h"
#include "arc/freetype/FreeTypeFontGenerator.h"
#include "arc/graphics/g2d/Font_Glyph.h"

extern "C" {


void mark_arc_freetype_FreeTypeFontGenerator$GlyphAndBitmap(jobject object, jint mark, jint depth) {
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
	auto self = (arc_freetype_FreeTypeFontGenerator$GlyphAndBitmap *) object;
	if (self->F_glyph)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_glyph)->clazz)->markFunction)((jobject) self->F_glyph, mark, depth + 1);
	if (self->F_bitmap)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_bitmap)->clazz)->markFunction)((jobject) self->F_bitmap, mark, depth + 1);
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_arc_freetype_FreeTypeFontGenerator$GlyphAndBitmap(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_freetype_FreeTypeFontGenerator$GlyphAndBitmap_arc_freetype_FreeTypeFontGenerator(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/freetype/FreeTypeFontGenerator$GlyphAndBitmap:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_freetype_FreeTypeFontGenerator$GlyphAndBitmap(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(862);
	((arc_freetype_FreeTypeFontGenerator$GlyphAndBitmap *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_freetype_FreeTypeFontGenerator$GlyphAndBitmap[] {
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
	{ "glyph", &class_arc_graphics_g2d_Font$Glyph, offsetof(arc_freetype_FreeTypeFontGenerator$GlyphAndBitmap, F_glyph), "Larc/graphics/g2d/Font$Glyph;", 1 },
	{ "bitmap", &class_arc_freetype_FreeType$Bitmap, offsetof(arc_freetype_FreeTypeFontGenerator$GlyphAndBitmap, F_bitmap), "Larc/freetype/FreeType$Bitmap;", 1 },
	{ "this$0", &class_arc_freetype_FreeTypeFontGenerator, offsetof(arc_freetype_FreeTypeFontGenerator$GlyphAndBitmap, F_this$0), "Larc/freetype/FreeTypeFontGenerator;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_freetype_FreeTypeFontGenerator$GlyphAndBitmap_arc_freetype_FreeTypeFontGenerator, 0, "(Larc/freetype/FreeTypeFontGenerator;)V", 1 },
};

Class class_arc_freetype_FreeTypeFontGenerator$GlyphAndBitmap{
		.nativeName = (intptr_t) "arc/freetype/FreeTypeFontGenerator$GlyphAndBitmap",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_freetype_FreeTypeFontGenerator$GlyphAndBitmap),
		.classVtable = (intptr_t) vtable_arc_freetype_FreeTypeFontGenerator$GlyphAndBitmap,
		.staticInitializer = (intptr_t) clinit_arc_freetype_FreeTypeFontGenerator$GlyphAndBitmap,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_freetype_FreeTypeFontGenerator$GlyphAndBitmap,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_freetype_FreeTypeFontGenerator,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_freetype_FreeTypeFontGenerator$GlyphAndBitmap = registerClass(&class_arc_freetype_FreeTypeFontGenerator$GlyphAndBitmap);

}

