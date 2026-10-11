#include "arc/graphics/gl/FileTextureData.h"
#include "arc/graphics/TextureData.h"
#include "java/lang/Object.h"
#include "arc/graphics/Pixmap.h"
#include "java/lang/String.h"
#include "arc/util/ArcRuntimeException.h"
#include "arc/files/Fi.h"
#include "arc/graphics/gl/FileTextureData.h"
#include "arc/graphics/Pixmap_Format.h"

extern "C" {


void mark_arc_graphics_gl_FileTextureData(jobject object, jint mark, jint depth) {
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
	auto self = (arc_graphics_gl_FileTextureData *) object;
	if (self->F_file)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_file)->clazz)->markFunction)((jobject) self->F_file, mark, depth + 1);
	if (self->F_pixmap)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_pixmap)->clazz)->markFunction)((jobject) self->F_pixmap, mark, depth + 1);
}

void clinit_arc_graphics_gl_FileTextureData(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_graphics_gl_FileTextureData_arc_files_Fi_arc_graphics_Pixmap_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/FileTextureData:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_gl_FileTextureData(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(16);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(10);
	((arc_graphics_gl_FileTextureData *) NULL_CHECK((frame[0].o)))->F_width = (jint(0));
	LINE_NUMBER(11);
	((arc_graphics_gl_FileTextureData *) NULL_CHECK((frame[0].o)))->F_height = (jint(0));
	LINE_NUMBER(14);
	((arc_graphics_gl_FileTextureData *) NULL_CHECK((frame[0].o)))->F_isPrepared = (jint(0));
	LINE_NUMBER(17);
	((arc_graphics_gl_FileTextureData *) NULL_CHECK((frame[0].o)))->F_file = (jref) (frame[1].o);
	LINE_NUMBER(18);
	((arc_graphics_gl_FileTextureData *) NULL_CHECK((frame[0].o)))->F_pixmap = (jref) (frame[2].o);
	LINE_NUMBER(19);
	((arc_graphics_gl_FileTextureData *) NULL_CHECK((frame[0].o)))->F_useMipMaps = (frame[3].i);
	LINE_NUMBER(20);
	sp[0].o = (jobject)((arc_graphics_gl_FileTextureData *) NULL_CHECK((frame[0].o)))->F_pixmap;
	if (sp[0].o == nullptr) goto label_8;
	}
	{
	LINE_NUMBER(21);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_graphics_gl_FileTextureData *) NULL_CHECK((frame[0].o)))->F_pixmap;
	((arc_graphics_gl_FileTextureData *) NULL_CHECK(sp[0].o))->F_width = ((jint)((arc_graphics_Pixmap *) NULL_CHECK(sp[1].o))->F_width);
	LINE_NUMBER(22);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_graphics_gl_FileTextureData *) NULL_CHECK((frame[0].o)))->F_pixmap;
	((arc_graphics_gl_FileTextureData *) NULL_CHECK(sp[0].o))->F_height = ((jint)((arc_graphics_Pixmap *) NULL_CHECK(sp[1].o))->F_height);
	}
label_8:;
	LINE_NUMBER(24);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_arc_graphics_gl_FileTextureData_isPrepared_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/FileTextureData:isPrepared", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(28);
	popStackFrame(ctx);
	return ((jint)((arc_graphics_gl_FileTextureData *) NULL_CHECK((frame[0].o)))->F_isPrepared);
	}

	popStackFrame(ctx);
}

void M_arc_graphics_gl_FileTextureData_prepare(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/FileTextureData:prepare", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(33);
	if (((jint)((arc_graphics_gl_FileTextureData *) NULL_CHECK((frame[0].o)))->F_isPrepared) == 0) goto label_1;
	}
	{
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Already prepared"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(34);
	sp[0].o = (jobject)((arc_graphics_gl_FileTextureData *) NULL_CHECK((frame[0].o)))->F_pixmap;
	if (sp[0].o != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(35);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Pixmap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_Pixmap);
	sp[2].o = (jobject)((arc_graphics_gl_FileTextureData *) NULL_CHECK((frame[0].o)))->F_file;
	init_arc_graphics_Pixmap_arc_files_Fi(ctx, sp[1].o, sp[2].o);
	((arc_graphics_gl_FileTextureData *) NULL_CHECK(sp[0].o))->F_pixmap = (jref) sp[1].o;
	LINE_NUMBER(36);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_graphics_gl_FileTextureData *) NULL_CHECK((frame[0].o)))->F_pixmap;
	((arc_graphics_gl_FileTextureData *) NULL_CHECK(sp[0].o))->F_width = ((jint)((arc_graphics_Pixmap *) NULL_CHECK(sp[1].o))->F_width);
	LINE_NUMBER(37);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_graphics_gl_FileTextureData *) NULL_CHECK((frame[0].o)))->F_pixmap;
	((arc_graphics_gl_FileTextureData *) NULL_CHECK(sp[0].o))->F_height = ((jint)((arc_graphics_Pixmap *) NULL_CHECK(sp[1].o))->F_height);
	}
label_2:;
	{
	LINE_NUMBER(39);
	((arc_graphics_gl_FileTextureData *) NULL_CHECK((frame[0].o)))->F_isPrepared = (jint(1));
	LINE_NUMBER(40);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_gl_FileTextureData_consumePixmap_R_arc_graphics_Pixmap(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/FileTextureData:consumePixmap", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(44);
	if (((jint)((arc_graphics_gl_FileTextureData *) NULL_CHECK((frame[0].o)))->F_isPrepared) != 0) goto label_1;
	}
	{
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Call prepare() before calling getPixmap()"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(45);
	((arc_graphics_gl_FileTextureData *) NULL_CHECK((frame[0].o)))->F_isPrepared = (jint(0));
	LINE_NUMBER(46);
	sp[0].o = (jobject)((arc_graphics_gl_FileTextureData *) NULL_CHECK((frame[0].o)))->F_pixmap;
	frame[1].o = sp[0].o;
	LINE_NUMBER(47);
	((arc_graphics_gl_FileTextureData *) NULL_CHECK((frame[0].o)))->F_pixmap = (jref) (jobject(nullptr));
	LINE_NUMBER(48);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jbool M_arc_graphics_gl_FileTextureData_disposePixmap_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/FileTextureData:disposePixmap", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(53);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jint M_arc_graphics_gl_FileTextureData_getWidth_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/FileTextureData:getWidth", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(58);
	popStackFrame(ctx);
	return ((jint)((arc_graphics_gl_FileTextureData *) NULL_CHECK((frame[0].o)))->F_width);
	}

	popStackFrame(ctx);
}

jint M_arc_graphics_gl_FileTextureData_getHeight_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/FileTextureData:getHeight", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(63);
	popStackFrame(ctx);
	return ((jint)((arc_graphics_gl_FileTextureData *) NULL_CHECK((frame[0].o)))->F_height);
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_gl_FileTextureData_getFormat_R_arc_graphics_Pixmap$Format(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/FileTextureData:getFormat", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(68);
	clinit_arc_graphics_Pixmap$Format(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Pixmap$Format_rgba8888;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_arc_graphics_gl_FileTextureData_useMipMaps_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/FileTextureData:useMipMaps", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(73);
	popStackFrame(ctx);
	return ((jint)((arc_graphics_gl_FileTextureData *) NULL_CHECK((frame[0].o)))->F_useMipMaps);
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_gl_FileTextureData_getFileHandle_R_arc_files_Fi(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/FileTextureData:getFileHandle", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(77);
	sp[0].o = (jobject)((arc_graphics_gl_FileTextureData *) NULL_CHECK((frame[0].o)))->F_file;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_arc_graphics_gl_FileTextureData_isCustom_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/FileTextureData:isCustom", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(82);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_arc_graphics_gl_FileTextureData_consumeCustomData_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/FileTextureData:consumeCustomData", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(87);
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"This TextureData implementation does not upload data itself"_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_gl_FileTextureData_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/FileTextureData:toString", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(91);
	sp[0].o = (jobject)((arc_graphics_gl_FileTextureData *) NULL_CHECK((frame[0].o)))->F_file;
	sp[0].o = (jobject)((func_arc_files_Fi_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_arc_graphics_gl_FileTextureData[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_arc_graphics_gl_FileTextureData_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_arc_graphics_gl_FileTextureData_isCustom_R_boolean,
	(void *) M_arc_graphics_gl_FileTextureData_isPrepared_R_boolean,
	(void *) M_arc_graphics_gl_FileTextureData_prepare,
	(void *) M_arc_graphics_gl_FileTextureData_consumePixmap_R_arc_graphics_Pixmap,
	(void *) M_arc_graphics_TextureData_getPixmap_R_arc_graphics_Pixmap,
	(void *) M_arc_graphics_gl_FileTextureData_disposePixmap_R_boolean,
	(void *) M_arc_graphics_gl_FileTextureData_consumeCustomData_int,
	(void *) M_arc_graphics_gl_FileTextureData_getWidth_R_int,
	(void *) M_arc_graphics_gl_FileTextureData_getHeight_R_int,
	(void *) M_arc_graphics_gl_FileTextureData_getFormat_R_arc_graphics_Pixmap$Format,
	(void *) M_arc_graphics_gl_FileTextureData_useMipMaps_R_boolean,
	(void *) M_arc_graphics_gl_FileTextureData_getFileHandle_R_arc_files_Fi,
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
	{ "getFileHandle", "()Larc/files/Fi;" },
};

static jclass interfaces[] { &class_arc_graphics_TextureData, };

static FieldMetadata fields[] {
	{ "file", &class_arc_files_Fi, offsetof(arc_graphics_gl_FileTextureData, F_file), "Larc/files/Fi;", 16 },
	{ "width", &class_int, offsetof(arc_graphics_gl_FileTextureData, F_width), "I", 0 },
	{ "height", &class_int, offsetof(arc_graphics_gl_FileTextureData, F_height), "I", 0 },
	{ "pixmap", &class_arc_graphics_Pixmap, offsetof(arc_graphics_gl_FileTextureData, F_pixmap), "Larc/graphics/Pixmap;", 0 },
	{ "useMipMaps", &class_boolean, offsetof(arc_graphics_gl_FileTextureData, F_useMipMaps), "Z", 0 },
	{ "isPrepared", &class_boolean, offsetof(arc_graphics_gl_FileTextureData, F_isPrepared), "Z", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_graphics_gl_FileTextureData_arc_files_Fi_arc_graphics_Pixmap_boolean, 0, "(Larc/files/Fi;Larc/graphics/Pixmap;Z)V", 1 },
	{ "isPrepared", (intptr_t) M_arc_graphics_gl_FileTextureData_isPrepared_R_boolean, VTABLE_arc_graphics_gl_FileTextureData_isPrepared_R_boolean, "()Z", 1 },
	{ "prepare", (intptr_t) M_arc_graphics_gl_FileTextureData_prepare, VTABLE_arc_graphics_gl_FileTextureData_prepare, "()V", 1 },
	{ "consumePixmap", (intptr_t) M_arc_graphics_gl_FileTextureData_consumePixmap_R_arc_graphics_Pixmap, VTABLE_arc_graphics_gl_FileTextureData_consumePixmap_R_arc_graphics_Pixmap, "()Larc/graphics/Pixmap;", 1 },
	{ "disposePixmap", (intptr_t) M_arc_graphics_gl_FileTextureData_disposePixmap_R_boolean, VTABLE_arc_graphics_gl_FileTextureData_disposePixmap_R_boolean, "()Z", 1 },
	{ "getWidth", (intptr_t) M_arc_graphics_gl_FileTextureData_getWidth_R_int, VTABLE_arc_graphics_gl_FileTextureData_getWidth_R_int, "()I", 1 },
	{ "getHeight", (intptr_t) M_arc_graphics_gl_FileTextureData_getHeight_R_int, VTABLE_arc_graphics_gl_FileTextureData_getHeight_R_int, "()I", 1 },
	{ "getFormat", (intptr_t) M_arc_graphics_gl_FileTextureData_getFormat_R_arc_graphics_Pixmap$Format, VTABLE_arc_graphics_gl_FileTextureData_getFormat_R_arc_graphics_Pixmap$Format, "()Larc/graphics/Pixmap$Format;", 1 },
	{ "useMipMaps", (intptr_t) M_arc_graphics_gl_FileTextureData_useMipMaps_R_boolean, VTABLE_arc_graphics_gl_FileTextureData_useMipMaps_R_boolean, "()Z", 1 },
	{ "getFileHandle", (intptr_t) M_arc_graphics_gl_FileTextureData_getFileHandle_R_arc_files_Fi, VTABLE_arc_graphics_gl_FileTextureData_getFileHandle_R_arc_files_Fi, "()Larc/files/Fi;", 1 },
	{ "isCustom", (intptr_t) M_arc_graphics_gl_FileTextureData_isCustom_R_boolean, VTABLE_arc_graphics_gl_FileTextureData_isCustom_R_boolean, "()Z", 1 },
	{ "consumeCustomData", (intptr_t) M_arc_graphics_gl_FileTextureData_consumeCustomData_int, VTABLE_arc_graphics_gl_FileTextureData_consumeCustomData_int, "(I)V", 1 },
	{ "toString", (intptr_t) M_arc_graphics_gl_FileTextureData_toString_R_java_lang_String, VTABLE_arc_graphics_gl_FileTextureData_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
};

Class class_arc_graphics_gl_FileTextureData{
		.nativeName = (intptr_t) "arc/graphics/gl/FileTextureData",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_graphics_gl_FileTextureData),
		.classVtable = (intptr_t) vtable_arc_graphics_gl_FileTextureData,
		.staticInitializer = (intptr_t) clinit_arc_graphics_gl_FileTextureData,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_graphics_gl_FileTextureData,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 6,
		.nativeFields = (intptr_t) fields,
		.methodCount = 13,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 23,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_graphics_gl_FileTextureData = registerClass(&class_arc_graphics_gl_FileTextureData);

}
