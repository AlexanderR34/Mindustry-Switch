#include "arc/freetype/FreeType_Glyph.h"
#include "arc/util/Disposable.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/Object.h"
#include "arc/freetype/FreeType_Glyph.h"
#include "java/lang/String.h"
#include "arc/freetype/FreeType_Bitmap.h"
#include "arc/util/ArcRuntimeException.h"
#include "arc/freetype/FreeType_Stroker.h"
#include "arc/freetype/FreeType.h"
#include "arc/freetype/FreeType_Pointer.h"

extern "C" {


void mark_arc_freetype_FreeType$Glyph(jobject object, jint mark, jint depth) {
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
	auto self = (arc_freetype_FreeType$Glyph *) object;
}

void clinit_arc_freetype_FreeType$Glyph(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_freetype_FreeType$Pointer(ctx);
}

void init_arc_freetype_FreeType$Glyph_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/freetype/FreeType$Glyph:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_freetype_FreeType$Glyph(ctx);
	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(584);
	init_arc_freetype_FreeType$Pointer_long(ctx, (frame[0].o), (frame[1].l));
	LINE_NUMBER(585);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_freetype_FreeType$Glyph_dispose(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/freetype/FreeType$Glyph:dispose", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(624);
	SM_arc_freetype_FreeType$Glyph_done_long(ctx, ((jlong)((arc_freetype_FreeType$Pointer *) NULL_CHECK((frame[0].o)))->F_address));
	LINE_NUMBER(625);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_freetype_FreeType$Glyph_strokeBorder_arc_freetype_FreeType$Stroker_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/freetype/FreeType$Glyph:strokeBorder", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(628);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)SM_arc_freetype_FreeType$Glyph_strokeBorder_long_long_boolean_R_long(ctx, ((jlong)((arc_freetype_FreeType$Pointer *) NULL_CHECK((frame[0].o)))->F_address), ((jlong)((arc_freetype_FreeType$Pointer *) NULL_CHECK((frame[1].o)))->F_address), (frame[2].i));
	((arc_freetype_FreeType$Pointer *) NULL_CHECK(sp[0].o))->F_address = temp0;
	LINE_NUMBER(629);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_freetype_FreeType$Glyph_toBitmap_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/freetype/FreeType$Glyph:toBitmap", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(632);
	jlong temp0 = (jlong)SM_arc_freetype_FreeType$Glyph_toBitmap_long_int_R_long(ctx, ((jlong)((arc_freetype_FreeType$Pointer *) NULL_CHECK((frame[0].o)))->F_address), (frame[1].i));
	frame[2].l = temp0;
	LINE_NUMBER(633);
	if ((longCompare((frame[2].l), (jlong(0)))) != 0) goto label_2;
	}
	{
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Couldn't render glyph, FreeType error code: "_j))));
	jint temp0 = (jint)SM_arc_freetype_FreeType_getLastErrorCode_R_int(ctx);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, temp0);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(634);
	((arc_freetype_FreeType$Pointer *) NULL_CHECK((frame[0].o)))->F_address = (frame[2].l);
	LINE_NUMBER(635);
	((arc_freetype_FreeType$Glyph *) NULL_CHECK((frame[0].o)))->F_rendered = (jint(1));
	LINE_NUMBER(636);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_freetype_FreeType$Glyph_getBitmap_R_arc_freetype_FreeType$Bitmap(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/freetype/FreeType$Glyph:getBitmap", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(639);
	if (((jint)((arc_freetype_FreeType$Glyph *) NULL_CHECK((frame[0].o)))->F_rendered) != 0) goto label_1;
	}
	{
	LINE_NUMBER(640);
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Glyph is not yet rendered"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(642);
	clinit_arc_freetype_FreeType$Bitmap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_freetype_FreeType$Bitmap);
	jlong temp0 = (jlong)SM_arc_freetype_FreeType$Glyph_getBitmap_long_R_long(ctx, ((jlong)((arc_freetype_FreeType$Pointer *) NULL_CHECK((frame[0].o)))->F_address));
	init_arc_freetype_FreeType$Bitmap_long(ctx, sp[0].o, temp0);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_arc_freetype_FreeType$Glyph_getLeft_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/freetype/FreeType$Glyph:getLeft", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(646);
	if (((jint)((arc_freetype_FreeType$Glyph *) NULL_CHECK((frame[0].o)))->F_rendered) != 0) goto label_1;
	}
	{
	LINE_NUMBER(647);
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Glyph is not yet rendered"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(649);
	jint temp0 = (jint)SM_arc_freetype_FreeType$Glyph_getLeft_long_R_int(ctx, ((jlong)((arc_freetype_FreeType$Pointer *) NULL_CHECK((frame[0].o)))->F_address));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_arc_freetype_FreeType$Glyph_getTop_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/freetype/FreeType$Glyph:getTop", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(653);
	if (((jint)((arc_freetype_FreeType$Glyph *) NULL_CHECK((frame[0].o)))->F_rendered) != 0) goto label_1;
	}
	{
	LINE_NUMBER(654);
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Glyph is not yet rendered"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(656);
	jint temp0 = (jint)SM_arc_freetype_FreeType$Glyph_getTop_long_R_int(ctx, ((jlong)((arc_freetype_FreeType$Pointer *) NULL_CHECK((frame[0].o)))->F_address));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void *vtable_arc_freetype_FreeType$Glyph[] {
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
	(void *) M_arc_freetype_FreeType$Glyph_dispose,
	(void *) M_arc_util_Disposable_isDisposed_R_boolean,
	(void *) M_arc_freetype_FreeType$Glyph_strokeBorder_arc_freetype_FreeType$Stroker_boolean,
	(void *) M_arc_freetype_FreeType$Glyph_toBitmap_int,
	(void *) M_arc_freetype_FreeType$Glyph_getBitmap_R_arc_freetype_FreeType$Bitmap,
	(void *) M_arc_freetype_FreeType$Glyph_getLeft_R_int,
	(void *) M_arc_freetype_FreeType$Glyph_getTop_R_int,
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
	{ "strokeBorder", "(Larc/freetype/FreeType$Stroker;Z)V" },
	{ "toBitmap", "(I)V" },
	{ "getBitmap", "()Larc/freetype/FreeType$Bitmap;" },
	{ "getLeft", "()I" },
	{ "getTop", "()I" },
};

static jclass interfaces[] { &class_arc_util_Disposable, };

static FieldMetadata fields[] {
	{ "rendered", &class_boolean, offsetof(arc_freetype_FreeType$Glyph, F_rendered), "Z", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_freetype_FreeType$Glyph_long, 0, "(J)V", 0 },
	{ "done", (intptr_t) SM_arc_freetype_FreeType$Glyph_done_long, 0, "(J)V", 266 },
	{ "strokeBorder", (intptr_t) SM_arc_freetype_FreeType$Glyph_strokeBorder_long_long_boolean_R_long, 0, "(JJZ)J", 266 },
	{ "toBitmap", (intptr_t) SM_arc_freetype_FreeType$Glyph_toBitmap_long_int_R_long, 0, "(JI)J", 266 },
	{ "getBitmap", (intptr_t) SM_arc_freetype_FreeType$Glyph_getBitmap_long_R_long, 0, "(J)J", 266 },
	{ "getLeft", (intptr_t) SM_arc_freetype_FreeType$Glyph_getLeft_long_R_int, 0, "(J)I", 266 },
	{ "getTop", (intptr_t) SM_arc_freetype_FreeType$Glyph_getTop_long_R_int, 0, "(J)I", 266 },
	{ "dispose", (intptr_t) M_arc_freetype_FreeType$Glyph_dispose, VTABLE_arc_freetype_FreeType$Glyph_dispose, "()V", 1 },
	{ "strokeBorder", (intptr_t) M_arc_freetype_FreeType$Glyph_strokeBorder_arc_freetype_FreeType$Stroker_boolean, VTABLE_arc_freetype_FreeType$Glyph_strokeBorder_arc_freetype_FreeType$Stroker_boolean, "(Larc/freetype/FreeType$Stroker;Z)V", 1 },
	{ "toBitmap", (intptr_t) M_arc_freetype_FreeType$Glyph_toBitmap_int, VTABLE_arc_freetype_FreeType$Glyph_toBitmap_int, "(I)V", 1 },
	{ "getBitmap", (intptr_t) M_arc_freetype_FreeType$Glyph_getBitmap_R_arc_freetype_FreeType$Bitmap, VTABLE_arc_freetype_FreeType$Glyph_getBitmap_R_arc_freetype_FreeType$Bitmap, "()Larc/freetype/FreeType$Bitmap;", 1 },
	{ "getLeft", (intptr_t) M_arc_freetype_FreeType$Glyph_getLeft_R_int, VTABLE_arc_freetype_FreeType$Glyph_getLeft_R_int, "()I", 1 },
	{ "getTop", (intptr_t) M_arc_freetype_FreeType$Glyph_getTop_R_int, VTABLE_arc_freetype_FreeType$Glyph_getTop_R_int, "()I", 1 },
};

Class class_arc_freetype_FreeType$Glyph{
		.nativeName = (intptr_t) "arc/freetype/FreeType$Glyph",
		.parentClass = (intptr_t) &class_arc_freetype_FreeType$Pointer,
		.size = sizeof(arc_freetype_FreeType$Glyph),
		.classVtable = (intptr_t) vtable_arc_freetype_FreeType$Glyph,
		.staticInitializer = (intptr_t) clinit_arc_freetype_FreeType$Glyph,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_freetype_FreeType$Glyph,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_freetype_FreeType,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 13,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 18,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_freetype_FreeType$Glyph = registerClass(&class_arc_freetype_FreeType$Glyph);

}

