#include "arc/graphics/g2d/GlyphLayout_GlyphRun.h"
#include "arc/graphics/g2d/GlyphLayout.h"
#include "arc/graphics/g2d/GlyphLayout_GlyphRun.h"
#include "java/lang/Object.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/String.h"
#include "arc/util/pooling/Pool_Poolable.h"
#include "arc/struct/Seq.h"
#include "arc/struct/FloatSeq.h"
#include "arc/graphics/Color.h"
#include "arc/graphics/g2d/Font_Glyph.h"

extern "C" {


void mark_arc_graphics_g2d_GlyphLayout$GlyphRun(jobject object, jint mark, jint depth) {
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
	auto self = (arc_graphics_g2d_GlyphLayout$GlyphRun *) object;
	if (self->F_color)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_color)->clazz)->markFunction)((jobject) self->F_color, mark, depth + 1);
	if (self->F_glyphs)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_glyphs)->clazz)->markFunction)((jobject) self->F_glyphs, mark, depth + 1);
	if (self->F_xAdvances)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_xAdvances)->clazz)->markFunction)((jobject) self->F_xAdvances, mark, depth + 1);
}

void clinit_arc_graphics_g2d_GlyphLayout$GlyphRun(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_graphics_g2d_GlyphLayout$GlyphRun(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/GlyphLayout$GlyphRun:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_GlyphLayout$GlyphRun(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(502);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(503);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_Color);
	init_arc_graphics_Color(ctx, sp[1].o);
	((arc_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK(sp[0].o))->F_color = (jref) sp[1].o;
	LINE_NUMBER(504);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((arc_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK(sp[0].o))->F_glyphs = (jref) sp[1].o;
	LINE_NUMBER(509);
	sp[0].o = frame[0].o;
	clinit_arc_struct_FloatSeq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_FloatSeq);
	init_arc_struct_FloatSeq(ctx, sp[1].o);
	((arc_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK(sp[0].o))->F_xAdvances = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_GlyphLayout$GlyphRun_reset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/GlyphLayout$GlyphRun:reset", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(513);
	sp[0].o = (jobject)((arc_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[0].o)))->F_glyphs;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(514);
	sp[0].o = (jobject)((arc_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[0].o)))->F_xAdvances;
	((func_arc_struct_FloatSeq_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_FloatSeq_clear])(ctx, sp[0].o);
	LINE_NUMBER(515);
	((arc_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[0].o)))->F_width = (jfloat(0));
	LINE_NUMBER(516);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_g2d_GlyphLayout$GlyphRun_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/GlyphLayout$GlyphRun:toString", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(519);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	sp[1].o = (jobject)((arc_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[0].o)))->F_glyphs;
	init_java_lang_StringBuilder_int(ctx, sp[0].o, ((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size));
	frame[1].o = sp[0].o;
	LINE_NUMBER(520);
	sp[0].o = (jobject)((arc_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[0].o)))->F_glyphs;
	frame[2].o = sp[0].o;
	LINE_NUMBER(521);
	frame[3].i = (jint(0));
	frame[4].i = ((jint)((arc_struct_Seq *) NULL_CHECK((frame[2].o)))->F_size);
	}
label_4:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_5;
	}
	{
	LINE_NUMBER(522);
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[2].o), (frame[3].i));
	frame[5].o = (checkCast(ctx, &class_arc_graphics_g2d_Font$Glyph, sp[0].o));
	LINE_NUMBER(523);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[1].o), (jchar(((jint)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[5].o)))->F_id))));
	LINE_NUMBER(521);
	INST_IINC(3, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(525);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8", #"_j))));
	LINE_NUMBER(526);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((arc_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[0].o)))->F_color;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(527);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8", "_j))));
	LINE_NUMBER(528);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, (frame[1].o), ((jfloat)((arc_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[0].o)))->F_x));
	LINE_NUMBER(529);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8", "_j))));
	LINE_NUMBER(530);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, (frame[1].o), ((jfloat)((arc_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[0].o)))->F_y));
	LINE_NUMBER(531);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8", "_j))));
	LINE_NUMBER(532);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, (frame[1].o), ((jfloat)((arc_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[0].o)))->F_width));
	LINE_NUMBER(533);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_arc_graphics_g2d_GlyphLayout$GlyphRun[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_arc_graphics_g2d_GlyphLayout$GlyphRun_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_arc_graphics_g2d_GlyphLayout$GlyphRun_reset,
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
	{ "reset", "()V" },
};

static jclass interfaces[] { &class_arc_util_pooling_Pool$Poolable, };

static FieldMetadata fields[] {
	{ "color", &class_arc_graphics_Color, offsetof(arc_graphics_g2d_GlyphLayout$GlyphRun, F_color), "Larc/graphics/Color;", 17 },
	{ "glyphs", &class_arc_struct_Seq, offsetof(arc_graphics_g2d_GlyphLayout$GlyphRun, F_glyphs), "Larc/struct/Seq;", 1 },
	{ "xAdvances", &class_arc_struct_FloatSeq, offsetof(arc_graphics_g2d_GlyphLayout$GlyphRun, F_xAdvances), "Larc/struct/FloatSeq;", 1 },
	{ "x", &class_float, offsetof(arc_graphics_g2d_GlyphLayout$GlyphRun, F_x), "F", 1 },
	{ "y", &class_float, offsetof(arc_graphics_g2d_GlyphLayout$GlyphRun, F_y), "F", 1 },
	{ "width", &class_float, offsetof(arc_graphics_g2d_GlyphLayout$GlyphRun, F_width), "F", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_graphics_g2d_GlyphLayout$GlyphRun, 0, "()V", 1 },
	{ "reset", (intptr_t) M_arc_graphics_g2d_GlyphLayout$GlyphRun_reset, VTABLE_arc_graphics_g2d_GlyphLayout$GlyphRun_reset, "()V", 1 },
	{ "toString", (intptr_t) M_arc_graphics_g2d_GlyphLayout$GlyphRun_toString_R_java_lang_String, VTABLE_arc_graphics_g2d_GlyphLayout$GlyphRun_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
};

Class class_arc_graphics_g2d_GlyphLayout$GlyphRun{
		.nativeName = (intptr_t) "arc/graphics/g2d/GlyphLayout$GlyphRun",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_graphics_g2d_GlyphLayout$GlyphRun),
		.classVtable = (intptr_t) vtable_arc_graphics_g2d_GlyphLayout$GlyphRun,
		.staticInitializer = (intptr_t) clinit_arc_graphics_g2d_GlyphLayout$GlyphRun,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_graphics_g2d_GlyphLayout$GlyphRun,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_graphics_g2d_GlyphLayout,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 6,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_graphics_g2d_GlyphLayout$GlyphRun = registerClass(&class_arc_graphics_g2d_GlyphLayout$GlyphRun);

}

