#include "arc/graphics/gl/PixmapTextureData.h"
#include "arc/graphics/TextureData.h"
#include "java/lang/Object.h"
#include "arc/graphics/Pixmap.h"
#include "java/lang/String.h"
#include "arc/util/ArcRuntimeException.h"
#include "arc/graphics/gl/PixmapTextureData.h"
#include "arc/graphics/Pixmap_Format.h"

extern "C" {


void mark_arc_graphics_gl_PixmapTextureData(jobject object, jint mark, jint depth) {
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
	auto self = (arc_graphics_gl_PixmapTextureData *) object;
	if (self->F_pixmap)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_pixmap)->clazz)->markFunction)((jobject) self->F_pixmap, mark, depth + 1);
}

void clinit_arc_graphics_gl_PixmapTextureData(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_graphics_gl_PixmapTextureData_arc_graphics_Pixmap_boolean_boolean(jcontext ctx, jobject self, jobject param0, jbool param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/PixmapTextureData:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_gl_PixmapTextureData(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(13);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(14);
	((arc_graphics_gl_PixmapTextureData *) NULL_CHECK((frame[0].o)))->F_pixmap = (jref) (frame[1].o);
	LINE_NUMBER(15);
	((arc_graphics_gl_PixmapTextureData *) NULL_CHECK((frame[0].o)))->F_useMipMaps = (frame[2].i);
	LINE_NUMBER(16);
	((arc_graphics_gl_PixmapTextureData *) NULL_CHECK((frame[0].o)))->F_disposePixmap = (frame[3].i);
	LINE_NUMBER(17);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_graphics_gl_PixmapTextureData_disposePixmap_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/PixmapTextureData:disposePixmap", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(21);
	popStackFrame(ctx);
	return ((jint)((arc_graphics_gl_PixmapTextureData *) NULL_CHECK((frame[0].o)))->F_disposePixmap);
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_gl_PixmapTextureData_consumePixmap_R_arc_graphics_Pixmap(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/PixmapTextureData:consumePixmap", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(26);
	sp[0].o = (jobject)((arc_graphics_gl_PixmapTextureData *) NULL_CHECK((frame[0].o)))->F_pixmap;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_arc_graphics_gl_PixmapTextureData_getWidth_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/PixmapTextureData:getWidth", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(31);
	sp[0].o = (jobject)((arc_graphics_gl_PixmapTextureData *) NULL_CHECK((frame[0].o)))->F_pixmap;
	popStackFrame(ctx);
	return ((jint)((arc_graphics_Pixmap *) NULL_CHECK(sp[0].o))->F_width);
	}

	popStackFrame(ctx);
}

jint M_arc_graphics_gl_PixmapTextureData_getHeight_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/PixmapTextureData:getHeight", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(36);
	sp[0].o = (jobject)((arc_graphics_gl_PixmapTextureData *) NULL_CHECK((frame[0].o)))->F_pixmap;
	popStackFrame(ctx);
	return ((jint)((arc_graphics_Pixmap *) NULL_CHECK(sp[0].o))->F_height);
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_gl_PixmapTextureData_getFormat_R_arc_graphics_Pixmap$Format(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/PixmapTextureData:getFormat", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(41);
	clinit_arc_graphics_Pixmap$Format(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Pixmap$Format_rgba8888;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_arc_graphics_gl_PixmapTextureData_useMipMaps_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/PixmapTextureData:useMipMaps", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(46);
	popStackFrame(ctx);
	return ((jint)((arc_graphics_gl_PixmapTextureData *) NULL_CHECK((frame[0].o)))->F_useMipMaps);
	}

	popStackFrame(ctx);
}

jbool M_arc_graphics_gl_PixmapTextureData_isCustom_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/PixmapTextureData:isCustom", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(51);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_arc_graphics_gl_PixmapTextureData_consumeCustomData_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/PixmapTextureData:consumeCustomData", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(56);
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"This TextureData implementation does not upload data itself"_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jbool M_arc_graphics_gl_PixmapTextureData_isPrepared_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/PixmapTextureData:isPrepared", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(61);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void M_arc_graphics_gl_PixmapTextureData_prepare(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/PixmapTextureData:prepare", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(66);
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"prepare() must not be called on a PixmapTextureData instance as it is already prepared."_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void *vtable_arc_graphics_gl_PixmapTextureData[] {
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
	(void *) M_arc_graphics_gl_PixmapTextureData_isCustom_R_boolean,
	(void *) M_arc_graphics_gl_PixmapTextureData_isPrepared_R_boolean,
	(void *) M_arc_graphics_gl_PixmapTextureData_prepare,
	(void *) M_arc_graphics_gl_PixmapTextureData_consumePixmap_R_arc_graphics_Pixmap,
	(void *) M_arc_graphics_TextureData_getPixmap_R_arc_graphics_Pixmap,
	(void *) M_arc_graphics_gl_PixmapTextureData_disposePixmap_R_boolean,
	(void *) M_arc_graphics_gl_PixmapTextureData_consumeCustomData_int,
	(void *) M_arc_graphics_gl_PixmapTextureData_getWidth_R_int,
	(void *) M_arc_graphics_gl_PixmapTextureData_getHeight_R_int,
	(void *) M_arc_graphics_gl_PixmapTextureData_getFormat_R_arc_graphics_Pixmap$Format,
	(void *) M_arc_graphics_gl_PixmapTextureData_useMipMaps_R_boolean,
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
	{ "isCustom", "()Z" },
	{ "isPrepared", "()Z" },
	{ "prepare", "()V" },
	{ "consumePixmap", "()Larc/graphics/Pixmap;" },
	{ "getPixmap", "()Larc/graphics/Pixmap;" },
	{ "disposePixmap", "()Z" },
	{ "consumeCustomData", "(I)V" },
	{ "getWidth", "()I" },
	{ "getHeight", "()I" },
	{ "getFormat", "()Larc/graphics/Pixmap$Format;" },
	{ "useMipMaps", "()Z" },
};

static jclass interfaces[] { &class_arc_graphics_TextureData, };

static FieldMetadata fields[] {
	{ "pixmap", &class_arc_graphics_Pixmap, offsetof(arc_graphics_gl_PixmapTextureData, F_pixmap), "Larc/graphics/Pixmap;", 16 },
	{ "useMipMaps", &class_boolean, offsetof(arc_graphics_gl_PixmapTextureData, F_useMipMaps), "Z", 16 },
	{ "disposePixmap", &class_boolean, offsetof(arc_graphics_gl_PixmapTextureData, F_disposePixmap), "Z", 16 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_graphics_gl_PixmapTextureData_arc_graphics_Pixmap_boolean_boolean, 0, "(Larc/graphics/Pixmap;ZZ)V", 1 },
	{ "disposePixmap", (intptr_t) M_arc_graphics_gl_PixmapTextureData_disposePixmap_R_boolean, VTABLE_arc_graphics_gl_PixmapTextureData_disposePixmap_R_boolean, "()Z", 1 },
	{ "consumePixmap", (intptr_t) M_arc_graphics_gl_PixmapTextureData_consumePixmap_R_arc_graphics_Pixmap, VTABLE_arc_graphics_gl_PixmapTextureData_consumePixmap_R_arc_graphics_Pixmap, "()Larc/graphics/Pixmap;", 1 },
	{ "getWidth", (intptr_t) M_arc_graphics_gl_PixmapTextureData_getWidth_R_int, VTABLE_arc_graphics_gl_PixmapTextureData_getWidth_R_int, "()I", 1 },
	{ "getHeight", (intptr_t) M_arc_graphics_gl_PixmapTextureData_getHeight_R_int, VTABLE_arc_graphics_gl_PixmapTextureData_getHeight_R_int, "()I", 1 },
	{ "getFormat", (intptr_t) M_arc_graphics_gl_PixmapTextureData_getFormat_R_arc_graphics_Pixmap$Format, VTABLE_arc_graphics_gl_PixmapTextureData_getFormat_R_arc_graphics_Pixmap$Format, "()Larc/graphics/Pixmap$Format;", 1 },
	{ "useMipMaps", (intptr_t) M_arc_graphics_gl_PixmapTextureData_useMipMaps_R_boolean, VTABLE_arc_graphics_gl_PixmapTextureData_useMipMaps_R_boolean, "()Z", 1 },
	{ "isCustom", (intptr_t) M_arc_graphics_gl_PixmapTextureData_isCustom_R_boolean, VTABLE_arc_graphics_gl_PixmapTextureData_isCustom_R_boolean, "()Z", 1 },
	{ "consumeCustomData", (intptr_t) M_arc_graphics_gl_PixmapTextureData_consumeCustomData_int, VTABLE_arc_graphics_gl_PixmapTextureData_consumeCustomData_int, "(I)V", 1 },
	{ "isPrepared", (intptr_t) M_arc_graphics_gl_PixmapTextureData_isPrepared_R_boolean, VTABLE_arc_graphics_gl_PixmapTextureData_isPrepared_R_boolean, "()Z", 1 },
	{ "prepare", (intptr_t) M_arc_graphics_gl_PixmapTextureData_prepare, VTABLE_arc_graphics_gl_PixmapTextureData_prepare, "()V", 1 },
};

Class class_arc_graphics_gl_PixmapTextureData{
		.nativeName = (intptr_t) "arc/graphics/gl/PixmapTextureData",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_graphics_gl_PixmapTextureData),
		.classVtable = (intptr_t) vtable_arc_graphics_gl_PixmapTextureData,
		.staticInitializer = (intptr_t) clinit_arc_graphics_gl_PixmapTextureData,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_graphics_gl_PixmapTextureData,
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
		.methodCount = 11,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 22,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_graphics_gl_PixmapTextureData = registerClass(&class_arc_graphics_gl_PixmapTextureData);

}
