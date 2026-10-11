#include "arc/freetype/FreeType_GlyphSlot.h"
#include "arc/freetype/FreeType_GlyphMetrics.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/freetype/FreeType_Glyph.h"
#include "arc/freetype/FreeType_Bitmap.h"
#include "arc/util/ArcRuntimeException.h"
#include "arc/freetype/FreeType.h"
#include "arc/freetype/FreeType_GlyphSlot.h"
#include "arc/freetype/FreeType_Pointer.h"

extern "C" {


void mark_arc_freetype_FreeType$GlyphSlot(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_freetype_FreeType$Pointer(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (arc_freetype_FreeType$GlyphSlot *) object;
}

void clinit_arc_freetype_FreeType$GlyphSlot(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_freetype_FreeType$Pointer(ctx);
}

void init_arc_freetype_FreeType$GlyphSlot_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/freetype/FreeType$GlyphSlot:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_freetype_FreeType$GlyphSlot(ctx);
	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(479);
	init_arc_freetype_FreeType$Pointer_long(ctx, (frame[0].o), (frame[1].l));
	LINE_NUMBER(480);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_freetype_FreeType$GlyphSlot_getMetrics_R_arc_freetype_FreeType$GlyphMetrics(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/freetype/FreeType$GlyphSlot:getMetrics", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(534);
	clinit_arc_freetype_FreeType$GlyphMetrics(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_freetype_FreeType$GlyphMetrics);
	jlong temp0 = (jlong)SM_arc_freetype_FreeType$GlyphSlot_getMetrics_long_R_long(ctx, ((jlong)((arc_freetype_FreeType$Pointer *) NULL_CHECK((frame[0].o)))->F_address));
	init_arc_freetype_FreeType$GlyphMetrics_long(ctx, sp[0].o, temp0);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_arc_freetype_FreeType$GlyphSlot_getLinearHoriAdvance_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/freetype/FreeType$GlyphSlot:getLinearHoriAdvance", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(538);
	jint temp0 = (jint)SM_arc_freetype_FreeType$GlyphSlot_getLinearHoriAdvance_long_R_int(ctx, ((jlong)((arc_freetype_FreeType$Pointer *) NULL_CHECK((frame[0].o)))->F_address));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_arc_freetype_FreeType$GlyphSlot_getLinearVertAdvance_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/freetype/FreeType$GlyphSlot:getLinearVertAdvance", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(542);
	jint temp0 = (jint)SM_arc_freetype_FreeType$GlyphSlot_getLinearVertAdvance_long_R_int(ctx, ((jlong)((arc_freetype_FreeType$Pointer *) NULL_CHECK((frame[0].o)))->F_address));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_arc_freetype_FreeType$GlyphSlot_getAdvanceX_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/freetype/FreeType$GlyphSlot:getAdvanceX", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(546);
	jint temp0 = (jint)SM_arc_freetype_FreeType$GlyphSlot_getAdvanceX_long_R_int(ctx, ((jlong)((arc_freetype_FreeType$Pointer *) NULL_CHECK((frame[0].o)))->F_address));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_arc_freetype_FreeType$GlyphSlot_getAdvanceY_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/freetype/FreeType$GlyphSlot:getAdvanceY", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(550);
	jint temp0 = (jint)SM_arc_freetype_FreeType$GlyphSlot_getAdvanceY_long_R_int(ctx, ((jlong)((arc_freetype_FreeType$Pointer *) NULL_CHECK((frame[0].o)))->F_address));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_arc_freetype_FreeType$GlyphSlot_getFormat_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/freetype/FreeType$GlyphSlot:getFormat", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(554);
	jint temp0 = (jint)SM_arc_freetype_FreeType$GlyphSlot_getFormat_long_R_int(ctx, ((jlong)((arc_freetype_FreeType$Pointer *) NULL_CHECK((frame[0].o)))->F_address));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_arc_freetype_FreeType$GlyphSlot_getBitmap_R_arc_freetype_FreeType$Bitmap(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/freetype/FreeType$GlyphSlot:getBitmap", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(558);
	clinit_arc_freetype_FreeType$Bitmap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_freetype_FreeType$Bitmap);
	jlong temp0 = (jlong)SM_arc_freetype_FreeType$GlyphSlot_getBitmap_long_R_long(ctx, ((jlong)((arc_freetype_FreeType$Pointer *) NULL_CHECK((frame[0].o)))->F_address));
	init_arc_freetype_FreeType$Bitmap_long(ctx, sp[0].o, temp0);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_arc_freetype_FreeType$GlyphSlot_getBitmapLeft_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/freetype/FreeType$GlyphSlot:getBitmapLeft", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(562);
	jint temp0 = (jint)SM_arc_freetype_FreeType$GlyphSlot_getBitmapLeft_long_R_int(ctx, ((jlong)((arc_freetype_FreeType$Pointer *) NULL_CHECK((frame[0].o)))->F_address));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_arc_freetype_FreeType$GlyphSlot_getBitmapTop_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/freetype/FreeType$GlyphSlot:getBitmapTop", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(566);
	jint temp0 = (jint)SM_arc_freetype_FreeType$GlyphSlot_getBitmapTop_long_R_int(ctx, ((jlong)((arc_freetype_FreeType$Pointer *) NULL_CHECK((frame[0].o)))->F_address));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_arc_freetype_FreeType$GlyphSlot_renderGlyph_int_R_boolean(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/freetype/FreeType$GlyphSlot:renderGlyph", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(570);
	jint temp0 = (jint)SM_arc_freetype_FreeType$GlyphSlot_renderGlyph_long_int_R_boolean(ctx, ((jlong)((arc_freetype_FreeType$Pointer *) NULL_CHECK((frame[0].o)))->F_address), (frame[1].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_arc_freetype_FreeType$GlyphSlot_getGlyph_R_arc_freetype_FreeType$Glyph(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/freetype/FreeType$GlyphSlot:getGlyph", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(574);
	jlong temp0 = (jlong)SM_arc_freetype_FreeType$GlyphSlot_getGlyph_long_R_long(ctx, ((jlong)((arc_freetype_FreeType$Pointer *) NULL_CHECK((frame[0].o)))->F_address));
	frame[1].l = temp0;
	LINE_NUMBER(575);
	if ((longCompare((frame[1].l), (jlong(0)))) != 0) goto label_2;
	}
	{
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Couldn't get glyph, FreeType error code: "_j))));
	jint temp0 = (jint)SM_arc_freetype_FreeType_getLastErrorCode_R_int(ctx);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, temp0);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(576);
	clinit_arc_freetype_FreeType$Glyph(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_freetype_FreeType$Glyph);
	init_arc_freetype_FreeType$Glyph_long(ctx, sp[0].o, (frame[1].l));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_arc_freetype_FreeType$GlyphSlot[] {
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
	(void *) M_arc_freetype_FreeType$GlyphSlot_getMetrics_R_arc_freetype_FreeType$GlyphMetrics,
	(void *) M_arc_freetype_FreeType$GlyphSlot_getLinearHoriAdvance_R_int,
	(void *) M_arc_freetype_FreeType$GlyphSlot_getLinearVertAdvance_R_int,
	(void *) M_arc_freetype_FreeType$GlyphSlot_getAdvanceX_R_int,
	(void *) M_arc_freetype_FreeType$GlyphSlot_getAdvanceY_R_int,
	(void *) M_arc_freetype_FreeType$GlyphSlot_getFormat_R_int,
	(void *) M_arc_freetype_FreeType$GlyphSlot_getBitmap_R_arc_freetype_FreeType$Bitmap,
	(void *) M_arc_freetype_FreeType$GlyphSlot_getBitmapLeft_R_int,
	(void *) M_arc_freetype_FreeType$GlyphSlot_getBitmapTop_R_int,
	(void *) M_arc_freetype_FreeType$GlyphSlot_renderGlyph_int_R_boolean,
	(void *) M_arc_freetype_FreeType$GlyphSlot_getGlyph_R_arc_freetype_FreeType$Glyph,
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
	{ "getMetrics", "()Larc/freetype/FreeType$GlyphMetrics;" },
	{ "getLinearHoriAdvance", "()I" },
	{ "getLinearVertAdvance", "()I" },
	{ "getAdvanceX", "()I" },
	{ "getAdvanceY", "()I" },
	{ "getFormat", "()I" },
	{ "getBitmap", "()Larc/freetype/FreeType$Bitmap;" },
	{ "getBitmapLeft", "()I" },
	{ "getBitmapTop", "()I" },
	{ "renderGlyph", "(I)Z" },
	{ "getGlyph", "()Larc/freetype/FreeType$Glyph;" },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_freetype_FreeType$GlyphSlot_long, 0, "(J)V", 0 },
	{ "getMetrics", (intptr_t) SM_arc_freetype_FreeType$GlyphSlot_getMetrics_long_R_long, 0, "(J)J", 266 },
	{ "getLinearHoriAdvance", (intptr_t) SM_arc_freetype_FreeType$GlyphSlot_getLinearHoriAdvance_long_R_int, 0, "(J)I", 266 },
	{ "getLinearVertAdvance", (intptr_t) SM_arc_freetype_FreeType$GlyphSlot_getLinearVertAdvance_long_R_int, 0, "(J)I", 266 },
	{ "getAdvanceX", (intptr_t) SM_arc_freetype_FreeType$GlyphSlot_getAdvanceX_long_R_int, 0, "(J)I", 266 },
	{ "getAdvanceY", (intptr_t) SM_arc_freetype_FreeType$GlyphSlot_getAdvanceY_long_R_int, 0, "(J)I", 266 },
	{ "getFormat", (intptr_t) SM_arc_freetype_FreeType$GlyphSlot_getFormat_long_R_int, 0, "(J)I", 266 },
	{ "getBitmap", (intptr_t) SM_arc_freetype_FreeType$GlyphSlot_getBitmap_long_R_long, 0, "(J)J", 266 },
	{ "getBitmapLeft", (intptr_t) SM_arc_freetype_FreeType$GlyphSlot_getBitmapLeft_long_R_int, 0, "(J)I", 266 },
	{ "getBitmapTop", (intptr_t) SM_arc_freetype_FreeType$GlyphSlot_getBitmapTop_long_R_int, 0, "(J)I", 266 },
	{ "renderGlyph", (intptr_t) SM_arc_freetype_FreeType$GlyphSlot_renderGlyph_long_int_R_boolean, 0, "(JI)Z", 266 },
	{ "getGlyph", (intptr_t) SM_arc_freetype_FreeType$GlyphSlot_getGlyph_long_R_long, 0, "(J)J", 266 },
	{ "getMetrics", (intptr_t) M_arc_freetype_FreeType$GlyphSlot_getMetrics_R_arc_freetype_FreeType$GlyphMetrics, VTABLE_arc_freetype_FreeType$GlyphSlot_getMetrics_R_arc_freetype_FreeType$GlyphMetrics, "()Larc/freetype/FreeType$GlyphMetrics;", 1 },
	{ "getLinearHoriAdvance", (intptr_t) M_arc_freetype_FreeType$GlyphSlot_getLinearHoriAdvance_R_int, VTABLE_arc_freetype_FreeType$GlyphSlot_getLinearHoriAdvance_R_int, "()I", 1 },
	{ "getLinearVertAdvance", (intptr_t) M_arc_freetype_FreeType$GlyphSlot_getLinearVertAdvance_R_int, VTABLE_arc_freetype_FreeType$GlyphSlot_getLinearVertAdvance_R_int, "()I", 1 },
	{ "getAdvanceX", (intptr_t) M_arc_freetype_FreeType$GlyphSlot_getAdvanceX_R_int, VTABLE_arc_freetype_FreeType$GlyphSlot_getAdvanceX_R_int, "()I", 1 },
	{ "getAdvanceY", (intptr_t) M_arc_freetype_FreeType$GlyphSlot_getAdvanceY_R_int, VTABLE_arc_freetype_FreeType$GlyphSlot_getAdvanceY_R_int, "()I", 1 },
	{ "getFormat", (intptr_t) M_arc_freetype_FreeType$GlyphSlot_getFormat_R_int, VTABLE_arc_freetype_FreeType$GlyphSlot_getFormat_R_int, "()I", 1 },
	{ "getBitmap", (intptr_t) M_arc_freetype_FreeType$GlyphSlot_getBitmap_R_arc_freetype_FreeType$Bitmap, VTABLE_arc_freetype_FreeType$GlyphSlot_getBitmap_R_arc_freetype_FreeType$Bitmap, "()Larc/freetype/FreeType$Bitmap;", 1 },
	{ "getBitmapLeft", (intptr_t) M_arc_freetype_FreeType$GlyphSlot_getBitmapLeft_R_int, VTABLE_arc_freetype_FreeType$GlyphSlot_getBitmapLeft_R_int, "()I", 1 },
	{ "getBitmapTop", (intptr_t) M_arc_freetype_FreeType$GlyphSlot_getBitmapTop_R_int, VTABLE_arc_freetype_FreeType$GlyphSlot_getBitmapTop_R_int, "()I", 1 },
	{ "renderGlyph", (intptr_t) M_arc_freetype_FreeType$GlyphSlot_renderGlyph_int_R_boolean, VTABLE_arc_freetype_FreeType$GlyphSlot_renderGlyph_int_R_boolean, "(I)Z", 1 },
	{ "getGlyph", (intptr_t) M_arc_freetype_FreeType$GlyphSlot_getGlyph_R_arc_freetype_FreeType$Glyph, VTABLE_arc_freetype_FreeType$GlyphSlot_getGlyph_R_arc_freetype_FreeType$Glyph, "()Larc/freetype/FreeType$Glyph;", 1 },
};

Class class_arc_freetype_FreeType$GlyphSlot{
		.nativeName = (intptr_t) "arc/freetype/FreeType$GlyphSlot",
		.parentClass = (intptr_t) &class_arc_freetype_FreeType$Pointer,
		.size = sizeof(arc_freetype_FreeType$GlyphSlot),
		.classVtable = (intptr_t) vtable_arc_freetype_FreeType$GlyphSlot,
		.staticInitializer = (intptr_t) clinit_arc_freetype_FreeType$GlyphSlot,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_freetype_FreeType$GlyphSlot,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_freetype_FreeType,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 23,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 22,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_freetype_FreeType$GlyphSlot = registerClass(&class_arc_freetype_FreeType$GlyphSlot);

}

