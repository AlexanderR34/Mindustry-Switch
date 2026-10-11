#include "arc/flabel/FGlyph.h"
#include "arc/graphics/g2d/GlyphLayout_GlyphRun.h"
#include "java/lang/Object.h"
#include "arc/util/pooling/Pool_Poolable.h"
#include "arc/flabel/FGlyph.h"
#include "arc/graphics/Color.h"
#include "arc/graphics/g2d/Font_Glyph.h"

extern "C" {


void mark_arc_flabel_FGlyph(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_graphics_g2d_Font$Glyph(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (arc_flabel_FGlyph *) object;
	if (self->F_run)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_run)->clazz)->markFunction)((jobject) self->F_run, mark, depth + 1);
	if (self->F_color)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_color)->clazz)->markFunction)((jobject) self->F_color, mark, depth + 1);
}

void clinit_arc_flabel_FGlyph(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_graphics_g2d_Font$Glyph(ctx);
}

void init_arc_flabel_FGlyph(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/flabel/FGlyph:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_flabel_FGlyph(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(9);
	init_arc_graphics_g2d_Font$Glyph(ctx, (frame[0].o));
	LINE_NUMBER(11);
	((arc_flabel_FGlyph *) NULL_CHECK((frame[0].o)))->F_run = (jref) (jobject(nullptr));
	LINE_NUMBER(13);
	((arc_flabel_FGlyph *) NULL_CHECK((frame[0].o)))->F_internalIndex = (jint(-1));
	LINE_NUMBER(15);
	((arc_flabel_FGlyph *) NULL_CHECK((frame[0].o)))->F_color = (jref) (jobject(nullptr));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_flabel_FGlyph_set_arc_graphics_g2d_Font$Glyph(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/flabel/FGlyph:set", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(18);
	((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[0].o)))->F_id = ((jint)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[1].o)))->F_id);
	LINE_NUMBER(19);
	((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[0].o)))->F_srcX = ((jint)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[1].o)))->F_srcX);
	LINE_NUMBER(20);
	((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[0].o)))->F_srcY = ((jint)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[1].o)))->F_srcY);
	LINE_NUMBER(21);
	((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[0].o)))->F_width = ((jint)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[1].o)))->F_width);
	LINE_NUMBER(22);
	((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[0].o)))->F_height = ((jint)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[1].o)))->F_height);
	LINE_NUMBER(23);
	((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[0].o)))->F_u = ((jfloat)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[1].o)))->F_u);
	LINE_NUMBER(24);
	((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[0].o)))->F_v = ((jfloat)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[1].o)))->F_v);
	LINE_NUMBER(25);
	((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[0].o)))->F_u2 = ((jfloat)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[1].o)))->F_u2);
	LINE_NUMBER(26);
	((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[0].o)))->F_v2 = ((jfloat)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[1].o)))->F_v2);
	LINE_NUMBER(27);
	((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[0].o)))->F_xoffset = ((jint)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[1].o)))->F_xoffset);
	LINE_NUMBER(28);
	((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[0].o)))->F_yoffset = ((jint)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[1].o)))->F_yoffset);
	LINE_NUMBER(29);
	((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[0].o)))->F_xadvance = ((jint)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[1].o)))->F_xadvance);
	LINE_NUMBER(30);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[1].o)))->F_kerning;
	((arc_graphics_g2d_Font$Glyph *) NULL_CHECK(sp[0].o))->F_kerning = (jref) sp[1].o;
	LINE_NUMBER(31);
	((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[0].o)))->F_fixedWidth = ((jint)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[1].o)))->F_fixedWidth);
	LINE_NUMBER(33);
	((arc_flabel_FGlyph *) NULL_CHECK((frame[0].o)))->F_run = (jref) (jobject(nullptr));
	LINE_NUMBER(34);
	((arc_flabel_FGlyph *) NULL_CHECK((frame[0].o)))->F_internalIndex = (jint(-1));
	LINE_NUMBER(35);
	((arc_flabel_FGlyph *) NULL_CHECK((frame[0].o)))->F_color = (jref) (jobject(nullptr));
	LINE_NUMBER(36);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_flabel_FGlyph_reset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/flabel/FGlyph:reset", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(40);
	((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[0].o)))->F_id = (jint(0));
	LINE_NUMBER(41);
	((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[0].o)))->F_srcX = (jint(0));
	LINE_NUMBER(42);
	((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[0].o)))->F_srcY = (jint(0));
	LINE_NUMBER(43);
	((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[0].o)))->F_width = (jint(0));
	LINE_NUMBER(44);
	((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[0].o)))->F_height = (jint(0));
	LINE_NUMBER(45);
	((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[0].o)))->F_u = (jfloat(0));
	LINE_NUMBER(46);
	((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[0].o)))->F_v = (jfloat(0));
	LINE_NUMBER(47);
	((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[0].o)))->F_u2 = (jfloat(0));
	LINE_NUMBER(48);
	((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[0].o)))->F_v2 = (jfloat(0));
	LINE_NUMBER(49);
	((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[0].o)))->F_xoffset = (jint(0));
	LINE_NUMBER(50);
	((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[0].o)))->F_yoffset = (jint(0));
	LINE_NUMBER(51);
	((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[0].o)))->F_xadvance = (jint(0));
	LINE_NUMBER(52);
	((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[0].o)))->F_kerning = (jref) (jobject(nullptr));
	LINE_NUMBER(53);
	((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[0].o)))->F_fixedWidth = (jint(0));
	LINE_NUMBER(55);
	((arc_flabel_FGlyph *) NULL_CHECK((frame[0].o)))->F_run = (jref) (jobject(nullptr));
	LINE_NUMBER(56);
	((arc_flabel_FGlyph *) NULL_CHECK((frame[0].o)))->F_internalIndex = (jint(-1));
	LINE_NUMBER(57);
	((arc_flabel_FGlyph *) NULL_CHECK((frame[0].o)))->F_color = (jref) (jobject(nullptr));
	LINE_NUMBER(58);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_flabel_FGlyph[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_arc_graphics_g2d_Font$Glyph_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_arc_graphics_g2d_Font$Glyph_getKerning_char_R_int,
	(void *) M_arc_graphics_g2d_Font$Glyph_setKerning_int_int,
	(void *) M_arc_flabel_FGlyph_reset,
	(void *) M_arc_flabel_FGlyph_set_arc_graphics_g2d_Font$Glyph,
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
	{ "getKerning", "(C)I" },
	{ "setKerning", "(II)V" },
	{ "reset", "()V" },
	{ "set", "(Larc/graphics/g2d/Font$Glyph;)V" },
};

static jclass interfaces[] { &class_arc_util_pooling_Pool$Poolable, };

static FieldMetadata fields[] {
	{ "run", &class_arc_graphics_g2d_GlyphLayout$GlyphRun, offsetof(arc_flabel_FGlyph, F_run), "Larc/graphics/g2d/GlyphLayout$GlyphRun;", 1 },
	{ "internalIndex", &class_int, offsetof(arc_flabel_FGlyph, F_internalIndex), "I", 0 },
	{ "color", &class_arc_graphics_Color, offsetof(arc_flabel_FGlyph, F_color), "Larc/graphics/Color;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_flabel_FGlyph, 0, "()V", 1 },
	{ "set", (intptr_t) M_arc_flabel_FGlyph_set_arc_graphics_g2d_Font$Glyph, VTABLE_arc_flabel_FGlyph_set_arc_graphics_g2d_Font$Glyph, "(Larc/graphics/g2d/Font$Glyph;)V", 1 },
	{ "reset", (intptr_t) M_arc_flabel_FGlyph_reset, VTABLE_arc_flabel_FGlyph_reset, "()V", 1 },
};

Class class_arc_flabel_FGlyph{
		.nativeName = (intptr_t) "arc/flabel/FGlyph",
		.parentClass = (intptr_t) &class_arc_graphics_g2d_Font$Glyph,
		.size = sizeof(arc_flabel_FGlyph),
		.classVtable = (intptr_t) vtable_arc_flabel_FGlyph,
		.staticInitializer = (intptr_t) clinit_arc_flabel_FGlyph,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_flabel_FGlyph,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 15,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_flabel_FGlyph = registerClass(&class_arc_flabel_FGlyph);

}
