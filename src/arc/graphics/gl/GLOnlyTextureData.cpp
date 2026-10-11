#include "arc/graphics/gl/GLOnlyTextureData.h"
#include "arc/graphics/TextureData.h"
#include "java/lang/Object.h"
#include "arc/graphics/Pixmap.h"
#include "java/lang/String.h"
#include "java/nio/Buffer.h"
#include "arc/util/ArcRuntimeException.h"
#include "arc/graphics/gl/GLOnlyTextureData.h"
#include "arc/graphics/Gl.h"
#include "arc/graphics/Pixmap_Format.h"

extern "C" {


void mark_arc_graphics_gl_GLOnlyTextureData(jobject object, jint mark, jint depth) {
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
	auto self = (arc_graphics_gl_GLOnlyTextureData *) object;
}

void clinit_arc_graphics_gl_GLOnlyTextureData(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_graphics_gl_GLOnlyTextureData_int_int_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/GLOnlyTextureData:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_gl_GLOnlyTextureData(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	frame[6].i = param5;
	{
	LINE_NUMBER(36);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(16);
	((arc_graphics_gl_GLOnlyTextureData *) NULL_CHECK((frame[0].o)))->F_isPrepared = (jint(0));
	LINE_NUMBER(37);
	((arc_graphics_gl_GLOnlyTextureData *) NULL_CHECK((frame[0].o)))->F_width = (frame[1].i);
	LINE_NUMBER(38);
	((arc_graphics_gl_GLOnlyTextureData *) NULL_CHECK((frame[0].o)))->F_height = (frame[2].i);
	LINE_NUMBER(39);
	((arc_graphics_gl_GLOnlyTextureData *) NULL_CHECK((frame[0].o)))->F_mipLevel = (frame[3].i);
	LINE_NUMBER(40);
	((arc_graphics_gl_GLOnlyTextureData *) NULL_CHECK((frame[0].o)))->F_internalFormat = (frame[4].i);
	LINE_NUMBER(41);
	((arc_graphics_gl_GLOnlyTextureData *) NULL_CHECK((frame[0].o)))->F_format = (frame[5].i);
	LINE_NUMBER(42);
	((arc_graphics_gl_GLOnlyTextureData *) NULL_CHECK((frame[0].o)))->F_type = (frame[6].i);
	LINE_NUMBER(43);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_graphics_gl_GLOnlyTextureData_isCustom_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/GLOnlyTextureData:isCustom", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(47);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_arc_graphics_gl_GLOnlyTextureData_isPrepared_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/GLOnlyTextureData:isPrepared", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(52);
	popStackFrame(ctx);
	return ((jint)((arc_graphics_gl_GLOnlyTextureData *) NULL_CHECK((frame[0].o)))->F_isPrepared);
	}

	popStackFrame(ctx);
}

void M_arc_graphics_gl_GLOnlyTextureData_prepare(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/GLOnlyTextureData:prepare", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(57);
	if (((jint)((arc_graphics_gl_GLOnlyTextureData *) NULL_CHECK((frame[0].o)))->F_isPrepared) == 0) goto label_1;
	}
	{
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Already prepared"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(58);
	((arc_graphics_gl_GLOnlyTextureData *) NULL_CHECK((frame[0].o)))->F_isPrepared = (jint(1));
	LINE_NUMBER(59);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_gl_GLOnlyTextureData_consumeCustomData_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/GLOnlyTextureData:consumeCustomData", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(63);
	SM_arc_graphics_Gl_texImage2D_int_int_int_int_int_int_int_int_java_nio_Buffer(ctx, (frame[1].i), ((jint)((arc_graphics_gl_GLOnlyTextureData *) NULL_CHECK((frame[0].o)))->F_mipLevel), ((jint)((arc_graphics_gl_GLOnlyTextureData *) NULL_CHECK((frame[0].o)))->F_internalFormat), ((jint)((arc_graphics_gl_GLOnlyTextureData *) NULL_CHECK((frame[0].o)))->F_width), ((jint)((arc_graphics_gl_GLOnlyTextureData *) NULL_CHECK((frame[0].o)))->F_height), (jint(0)), ((jint)((arc_graphics_gl_GLOnlyTextureData *) NULL_CHECK((frame[0].o)))->F_format), ((jint)((arc_graphics_gl_GLOnlyTextureData *) NULL_CHECK((frame[0].o)))->F_type), (jobject(nullptr)));
	LINE_NUMBER(64);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_gl_GLOnlyTextureData_consumePixmap_R_arc_graphics_Pixmap(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/GLOnlyTextureData:consumePixmap", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(68);
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"This TextureData implementation does not return a Pixmap"_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jbool M_arc_graphics_gl_GLOnlyTextureData_disposePixmap_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/GLOnlyTextureData:disposePixmap", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(73);
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"This TextureData implementation does not return a Pixmap"_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jint M_arc_graphics_gl_GLOnlyTextureData_getWidth_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/GLOnlyTextureData:getWidth", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(78);
	popStackFrame(ctx);
	return ((jint)((arc_graphics_gl_GLOnlyTextureData *) NULL_CHECK((frame[0].o)))->F_width);
	}

	popStackFrame(ctx);
}

jint M_arc_graphics_gl_GLOnlyTextureData_getHeight_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/GLOnlyTextureData:getHeight", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(83);
	popStackFrame(ctx);
	return ((jint)((arc_graphics_gl_GLOnlyTextureData *) NULL_CHECK((frame[0].o)))->F_height);
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_gl_GLOnlyTextureData_getFormat_R_arc_graphics_Pixmap$Format(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/GLOnlyTextureData:getFormat", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(88);
	clinit_arc_graphics_Pixmap$Format(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Pixmap$Format_rgba8888;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_arc_graphics_gl_GLOnlyTextureData_useMipMaps_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/GLOnlyTextureData:useMipMaps", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(93);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void *vtable_arc_graphics_gl_GLOnlyTextureData[] {
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
	(void *) M_arc_graphics_gl_GLOnlyTextureData_isCustom_R_boolean,
	(void *) M_arc_graphics_gl_GLOnlyTextureData_isPrepared_R_boolean,
	(void *) M_arc_graphics_gl_GLOnlyTextureData_prepare,
	(void *) M_arc_graphics_gl_GLOnlyTextureData_consumePixmap_R_arc_graphics_Pixmap,
	(void *) M_arc_graphics_TextureData_getPixmap_R_arc_graphics_Pixmap,
	(void *) M_arc_graphics_gl_GLOnlyTextureData_disposePixmap_R_boolean,
	(void *) M_arc_graphics_gl_GLOnlyTextureData_consumeCustomData_int,
	(void *) M_arc_graphics_gl_GLOnlyTextureData_getWidth_R_int,
	(void *) M_arc_graphics_gl_GLOnlyTextureData_getHeight_R_int,
	(void *) M_arc_graphics_gl_GLOnlyTextureData_getFormat_R_arc_graphics_Pixmap$Format,
	(void *) M_arc_graphics_gl_GLOnlyTextureData_useMipMaps_R_boolean,
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
	{ "width", &class_int, offsetof(arc_graphics_gl_GLOnlyTextureData, F_width), "I", 0 },
	{ "height", &class_int, offsetof(arc_graphics_gl_GLOnlyTextureData, F_height), "I", 0 },
	{ "isPrepared", &class_boolean, offsetof(arc_graphics_gl_GLOnlyTextureData, F_isPrepared), "Z", 0 },
	{ "mipLevel", &class_int, offsetof(arc_graphics_gl_GLOnlyTextureData, F_mipLevel), "I", 0 },
	{ "internalFormat", &class_int, offsetof(arc_graphics_gl_GLOnlyTextureData, F_internalFormat), "I", 0 },
	{ "format", &class_int, offsetof(arc_graphics_gl_GLOnlyTextureData, F_format), "I", 0 },
	{ "type", &class_int, offsetof(arc_graphics_gl_GLOnlyTextureData, F_type), "I", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_graphics_gl_GLOnlyTextureData_int_int_int_int_int_int, 0, "(IIIIII)V", 1 },
	{ "isCustom", (intptr_t) M_arc_graphics_gl_GLOnlyTextureData_isCustom_R_boolean, VTABLE_arc_graphics_gl_GLOnlyTextureData_isCustom_R_boolean, "()Z", 1 },
	{ "isPrepared", (intptr_t) M_arc_graphics_gl_GLOnlyTextureData_isPrepared_R_boolean, VTABLE_arc_graphics_gl_GLOnlyTextureData_isPrepared_R_boolean, "()Z", 1 },
	{ "prepare", (intptr_t) M_arc_graphics_gl_GLOnlyTextureData_prepare, VTABLE_arc_graphics_gl_GLOnlyTextureData_prepare, "()V", 1 },
	{ "consumeCustomData", (intptr_t) M_arc_graphics_gl_GLOnlyTextureData_consumeCustomData_int, VTABLE_arc_graphics_gl_GLOnlyTextureData_consumeCustomData_int, "(I)V", 1 },
	{ "consumePixmap", (intptr_t) M_arc_graphics_gl_GLOnlyTextureData_consumePixmap_R_arc_graphics_Pixmap, VTABLE_arc_graphics_gl_GLOnlyTextureData_consumePixmap_R_arc_graphics_Pixmap, "()Larc/graphics/Pixmap;", 1 },
	{ "disposePixmap", (intptr_t) M_arc_graphics_gl_GLOnlyTextureData_disposePixmap_R_boolean, VTABLE_arc_graphics_gl_GLOnlyTextureData_disposePixmap_R_boolean, "()Z", 1 },
	{ "getWidth", (intptr_t) M_arc_graphics_gl_GLOnlyTextureData_getWidth_R_int, VTABLE_arc_graphics_gl_GLOnlyTextureData_getWidth_R_int, "()I", 1 },
	{ "getHeight", (intptr_t) M_arc_graphics_gl_GLOnlyTextureData_getHeight_R_int, VTABLE_arc_graphics_gl_GLOnlyTextureData_getHeight_R_int, "()I", 1 },
	{ "getFormat", (intptr_t) M_arc_graphics_gl_GLOnlyTextureData_getFormat_R_arc_graphics_Pixmap$Format, VTABLE_arc_graphics_gl_GLOnlyTextureData_getFormat_R_arc_graphics_Pixmap$Format, "()Larc/graphics/Pixmap$Format;", 1 },
	{ "useMipMaps", (intptr_t) M_arc_graphics_gl_GLOnlyTextureData_useMipMaps_R_boolean, VTABLE_arc_graphics_gl_GLOnlyTextureData_useMipMaps_R_boolean, "()Z", 1 },
};

Class class_arc_graphics_gl_GLOnlyTextureData{
		.nativeName = (intptr_t) "arc/graphics/gl/GLOnlyTextureData",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_graphics_gl_GLOnlyTextureData),
		.classVtable = (intptr_t) vtable_arc_graphics_gl_GLOnlyTextureData,
		.staticInitializer = (intptr_t) clinit_arc_graphics_gl_GLOnlyTextureData,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_graphics_gl_GLOnlyTextureData,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 7,
		.nativeFields = (intptr_t) fields,
		.methodCount = 11,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 22,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_graphics_gl_GLOnlyTextureData = registerClass(&class_arc_graphics_gl_GLOnlyTextureData);

}
