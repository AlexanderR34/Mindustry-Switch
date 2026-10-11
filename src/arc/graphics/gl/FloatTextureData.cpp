#include "arc/graphics/gl/FloatTextureData.h"
#include "arc/graphics/TextureData.h"
#include "arc/Core.h"
#include "java/nio/FloatBuffer.h"
#include "arc/graphics/gl/FloatTextureData.h"
#include "arc/util/Buffers.h"
#include "java/lang/Enum.h"
#include "arc/Application.h"
#include "arc/graphics/Pixmap_Format.h"
#include "arc/Graphics.h"
#include "java/lang/Object.h"
#include "arc/graphics/Pixmap.h"
#include "java/lang/String.h"
#include "java/nio/Buffer.h"
#include "arc/util/ArcRuntimeException.h"
#include "arc/graphics/Gl.h"
#include "arc/graphics/gl/GLVersion.h"
#include "arc/graphics/gl/GLVersion_GlType.h"

extern "C" {


void mark_arc_graphics_gl_FloatTextureData(jobject object, jint mark, jint depth) {
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
	auto self = (arc_graphics_gl_FloatTextureData *) object;
	if (self->F_buffer)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_buffer)->clazz)->markFunction)((jobject) self->F_buffer, mark, depth + 1);
}

void clinit_arc_graphics_gl_FloatTextureData(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_graphics_gl_FloatTextureData_int_int_int_int_int_boolean(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4, jbool param5) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/FloatTextureData:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_gl_FloatTextureData(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	frame[6].i = param5;
	{
	LINE_NUMBER(26);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(23);
	((arc_graphics_gl_FloatTextureData *) NULL_CHECK((frame[0].o)))->F_isPrepared = (jint(0));
	LINE_NUMBER(27);
	((arc_graphics_gl_FloatTextureData *) NULL_CHECK((frame[0].o)))->F_width = (frame[1].i);
	LINE_NUMBER(28);
	((arc_graphics_gl_FloatTextureData *) NULL_CHECK((frame[0].o)))->F_height = (frame[2].i);
	LINE_NUMBER(29);
	((arc_graphics_gl_FloatTextureData *) NULL_CHECK((frame[0].o)))->F_internalFormat = (frame[3].i);
	LINE_NUMBER(30);
	((arc_graphics_gl_FloatTextureData *) NULL_CHECK((frame[0].o)))->F_format = (frame[4].i);
	LINE_NUMBER(31);
	((arc_graphics_gl_FloatTextureData *) NULL_CHECK((frame[0].o)))->F_type = (frame[5].i);
	LINE_NUMBER(32);
	((arc_graphics_gl_FloatTextureData *) NULL_CHECK((frame[0].o)))->F_isGpuOnly = (frame[6].i);
	LINE_NUMBER(33);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_graphics_gl_FloatTextureData_isCustom_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/FloatTextureData:isCustom", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(37);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_arc_graphics_gl_FloatTextureData_isPrepared_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/FloatTextureData:isPrepared", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(42);
	popStackFrame(ctx);
	return ((jint)((arc_graphics_gl_FloatTextureData *) NULL_CHECK((frame[0].o)))->F_isPrepared);
	}

	popStackFrame(ctx);
}

void M_arc_graphics_gl_FloatTextureData_prepare(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/FloatTextureData:prepare", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(47);
	if (((jint)((arc_graphics_gl_FloatTextureData *) NULL_CHECK((frame[0].o)))->F_isPrepared) == 0) goto label_1;
	}
	{
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Already prepared"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(48);
	if (((jint)((arc_graphics_gl_FloatTextureData *) NULL_CHECK((frame[0].o)))->F_isGpuOnly) != 0) goto label_2;
	}
	{
	LINE_NUMBER(49);
	frame[1].i = (jint(4));
	LINE_NUMBER(50);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	sp[0].o = (jobject)((func_arc_Graphics_getGLVersion_R_arc_graphics_gl_GLVersion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_getGLVersion_R_arc_graphics_gl_GLVersion])(ctx, sp[0].o);
	sp[0].o = (jobject)((arc_graphics_gl_GLVersion *) NULL_CHECK(sp[0].o))->F_type;
	clinit_arc_graphics_gl_GLVersion$GlType(ctx);
	sp[1].o = (jobject)SF_arc_graphics_gl_GLVersion$GlType_OpenGL;
	jint temp0 = (jint)((func_arc_graphics_gl_GLVersion$GlType_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_GLVersion$GlType_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(51);
	if (((jint)((arc_graphics_gl_FloatTextureData *) NULL_CHECK((frame[0].o)))->F_internalFormat) == (jint(34842))) goto label_7;
	}
	{
	if (((jint)((arc_graphics_gl_FloatTextureData *) NULL_CHECK((frame[0].o)))->F_internalFormat) != (jint(34836))) goto label_8;
	}
label_7:;
	INST_ICONST(4);
	INST_ISTORE(1);
label_8:;
	{
	LINE_NUMBER(52);
	if (((jint)((arc_graphics_gl_FloatTextureData *) NULL_CHECK((frame[0].o)))->F_internalFormat) == (jint(34843))) goto label_9;
	}
	{
	if (((jint)((arc_graphics_gl_FloatTextureData *) NULL_CHECK((frame[0].o)))->F_internalFormat) != (jint(34837))) goto label_10;
	}
label_9:;
	INST_ICONST(3);
	INST_ISTORE(1);
label_10:;
	{
	LINE_NUMBER(53);
	if (((jint)((arc_graphics_gl_FloatTextureData *) NULL_CHECK((frame[0].o)))->F_internalFormat) == (jint(33327))) goto label_11;
	}
	{
	if (((jint)((arc_graphics_gl_FloatTextureData *) NULL_CHECK((frame[0].o)))->F_internalFormat) != (jint(33328))) goto label_12;
	}
label_11:;
	INST_ICONST(2);
	INST_ISTORE(1);
label_12:;
	{
	LINE_NUMBER(54);
	if (((jint)((arc_graphics_gl_FloatTextureData *) NULL_CHECK((frame[0].o)))->F_internalFormat) == (jint(33325))) goto label_13;
	}
	{
	if (((jint)((arc_graphics_gl_FloatTextureData *) NULL_CHECK((frame[0].o)))->F_internalFormat) != (jint(33326))) goto label_5;
	}
label_13:;
	INST_ICONST(1);
	INST_ISTORE(1);
label_5:;
	{
	LINE_NUMBER(56);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_arc_util_Buffers_newFloatBuffer_int_R_java_nio_FloatBuffer(ctx, ((((jint)((arc_graphics_gl_FloatTextureData *) NULL_CHECK((frame[0].o)))->F_width) * ((jint)((arc_graphics_gl_FloatTextureData *) NULL_CHECK((frame[0].o)))->F_height)) * (frame[1].i)));
	((arc_graphics_gl_FloatTextureData *) NULL_CHECK(sp[0].o))->F_buffer = (jref) sp[1].o;
	}
label_2:;
	{
	LINE_NUMBER(58);
	((arc_graphics_gl_FloatTextureData *) NULL_CHECK((frame[0].o)))->F_isPrepared = (jint(1));
	LINE_NUMBER(59);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_gl_FloatTextureData_consumeCustomData_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/FloatTextureData:consumeCustomData", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(63);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	jint temp0 = (jint)((func_arc_Application_isAndroid_R_boolean) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_isAndroid_R_boolean, sp[0].o))(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	jint temp0 = (jint)((func_arc_Application_isIOS_R_boolean) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_isIOS_R_boolean, sp[0].o))(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	jint temp0 = (jint)((func_arc_Application_isWeb_R_boolean) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_isWeb_R_boolean, sp[0].o))(ctx, sp[0].o);
	if (temp0 == 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(65);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp0 = (jint)((func_arc_Graphics_supportsExtension_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_supportsExtension_java_lang_String_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"OES_texture_float"_j))));
	if (temp0 != 0) goto label_3;
	}
	{
	LINE_NUMBER(66);
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Extension OES_texture_float not supported!"_j))));
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(70);
	jint temp0 = frame[1].i;
	jint temp1 = jint(0);
	jint temp2 = 6408;
	jint temp3 = (jint)((arc_graphics_gl_FloatTextureData *) NULL_CHECK((frame[0].o)))->F_width;
	jint temp4 = (jint)((arc_graphics_gl_FloatTextureData *) NULL_CHECK((frame[0].o)))->F_height;
	jint temp5 = jint(0);
	jint temp6 = 6408;
	jint temp7 = 5126;
	sp[0].o = (jobject)((arc_graphics_gl_FloatTextureData *) NULL_CHECK((frame[0].o)))->F_buffer;
	SM_arc_graphics_Gl_texImage2D_int_int_int_int_int_int_int_int_java_nio_Buffer(ctx, temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, sp[0].o);
	goto label_5;
	}
label_2:;
	{
	LINE_NUMBER(73);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp0 = (jint)((func_arc_Graphics_isGL30Available_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_isGL30Available_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_6;
	}
	{
	LINE_NUMBER(74);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp0 = (jint)((func_arc_Graphics_supportsExtension_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_supportsExtension_java_lang_String_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"GL_ARB_texture_float"_j))));
	if (temp0 != 0) goto label_6;
	}
	{
	LINE_NUMBER(75);
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Extension GL_ARB_texture_float not supported!"_j))));
	throwException(ctx, sp[0].o);	}
label_6:;
	{
	LINE_NUMBER(79);
	jint temp0 = frame[1].i;
	jint temp1 = jint(0);
	jint temp2 = (jint)((arc_graphics_gl_FloatTextureData *) NULL_CHECK((frame[0].o)))->F_internalFormat;
	jint temp3 = (jint)((arc_graphics_gl_FloatTextureData *) NULL_CHECK((frame[0].o)))->F_width;
	jint temp4 = (jint)((arc_graphics_gl_FloatTextureData *) NULL_CHECK((frame[0].o)))->F_height;
	jint temp5 = jint(0);
	jint temp6 = (jint)((arc_graphics_gl_FloatTextureData *) NULL_CHECK((frame[0].o)))->F_format;
	jint temp7 = 5126;
	sp[0].o = (jobject)((arc_graphics_gl_FloatTextureData *) NULL_CHECK((frame[0].o)))->F_buffer;
	SM_arc_graphics_Gl_texImage2D_int_int_int_int_int_int_int_int_java_nio_Buffer(ctx, temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, sp[0].o);
	}
label_5:;
	LINE_NUMBER(81);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_arc_graphics_gl_FloatTextureData_consumePixmap_R_arc_graphics_Pixmap(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/FloatTextureData:consumePixmap", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(85);
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"This TextureData implementation does not return a Pixmap"_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jbool M_arc_graphics_gl_FloatTextureData_disposePixmap_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/FloatTextureData:disposePixmap", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(90);
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"This TextureData implementation does not return a Pixmap"_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jint M_arc_graphics_gl_FloatTextureData_getWidth_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/FloatTextureData:getWidth", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(95);
	popStackFrame(ctx);
	return ((jint)((arc_graphics_gl_FloatTextureData *) NULL_CHECK((frame[0].o)))->F_width);
	}

	popStackFrame(ctx);
}

jint M_arc_graphics_gl_FloatTextureData_getHeight_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/FloatTextureData:getHeight", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(100);
	popStackFrame(ctx);
	return ((jint)((arc_graphics_gl_FloatTextureData *) NULL_CHECK((frame[0].o)))->F_height);
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_gl_FloatTextureData_getFormat_R_arc_graphics_Pixmap$Format(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/FloatTextureData:getFormat", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(105);
	clinit_arc_graphics_Pixmap$Format(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Pixmap$Format_rgba8888;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_arc_graphics_gl_FloatTextureData_useMipMaps_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/FloatTextureData:useMipMaps", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(110);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_gl_FloatTextureData_getBuffer_R_java_nio_FloatBuffer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/FloatTextureData:getBuffer", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(114);
	sp[0].o = (jobject)((arc_graphics_gl_FloatTextureData *) NULL_CHECK((frame[0].o)))->F_buffer;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_arc_graphics_gl_FloatTextureData[] {
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
	(void *) M_arc_graphics_gl_FloatTextureData_isCustom_R_boolean,
	(void *) M_arc_graphics_gl_FloatTextureData_isPrepared_R_boolean,
	(void *) M_arc_graphics_gl_FloatTextureData_prepare,
	(void *) M_arc_graphics_gl_FloatTextureData_consumePixmap_R_arc_graphics_Pixmap,
	(void *) M_arc_graphics_TextureData_getPixmap_R_arc_graphics_Pixmap,
	(void *) M_arc_graphics_gl_FloatTextureData_disposePixmap_R_boolean,
	(void *) M_arc_graphics_gl_FloatTextureData_consumeCustomData_int,
	(void *) M_arc_graphics_gl_FloatTextureData_getWidth_R_int,
	(void *) M_arc_graphics_gl_FloatTextureData_getHeight_R_int,
	(void *) M_arc_graphics_gl_FloatTextureData_getFormat_R_arc_graphics_Pixmap$Format,
	(void *) M_arc_graphics_gl_FloatTextureData_useMipMaps_R_boolean,
	(void *) M_arc_graphics_gl_FloatTextureData_getBuffer_R_java_nio_FloatBuffer,
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
	{ "getBuffer", "()Ljava/nio/FloatBuffer;" },
};

static jclass interfaces[] { &class_arc_graphics_TextureData, };

static FieldMetadata fields[] {
	{ "width", &class_int, offsetof(arc_graphics_gl_FloatTextureData, F_width), "I", 0 },
	{ "height", &class_int, offsetof(arc_graphics_gl_FloatTextureData, F_height), "I", 0 },
	{ "internalFormat", &class_int, offsetof(arc_graphics_gl_FloatTextureData, F_internalFormat), "I", 0 },
	{ "format", &class_int, offsetof(arc_graphics_gl_FloatTextureData, F_format), "I", 0 },
	{ "type", &class_int, offsetof(arc_graphics_gl_FloatTextureData, F_type), "I", 0 },
	{ "isGpuOnly", &class_boolean, offsetof(arc_graphics_gl_FloatTextureData, F_isGpuOnly), "Z", 0 },
	{ "isPrepared", &class_boolean, offsetof(arc_graphics_gl_FloatTextureData, F_isPrepared), "Z", 0 },
	{ "buffer", &class_java_nio_FloatBuffer, offsetof(arc_graphics_gl_FloatTextureData, F_buffer), "Ljava/nio/FloatBuffer;", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_graphics_gl_FloatTextureData_int_int_int_int_int_boolean, 0, "(IIIIIZ)V", 1 },
	{ "isCustom", (intptr_t) M_arc_graphics_gl_FloatTextureData_isCustom_R_boolean, VTABLE_arc_graphics_gl_FloatTextureData_isCustom_R_boolean, "()Z", 1 },
	{ "isPrepared", (intptr_t) M_arc_graphics_gl_FloatTextureData_isPrepared_R_boolean, VTABLE_arc_graphics_gl_FloatTextureData_isPrepared_R_boolean, "()Z", 1 },
	{ "prepare", (intptr_t) M_arc_graphics_gl_FloatTextureData_prepare, VTABLE_arc_graphics_gl_FloatTextureData_prepare, "()V", 1 },
	{ "consumeCustomData", (intptr_t) M_arc_graphics_gl_FloatTextureData_consumeCustomData_int, VTABLE_arc_graphics_gl_FloatTextureData_consumeCustomData_int, "(I)V", 1 },
	{ "consumePixmap", (intptr_t) M_arc_graphics_gl_FloatTextureData_consumePixmap_R_arc_graphics_Pixmap, VTABLE_arc_graphics_gl_FloatTextureData_consumePixmap_R_arc_graphics_Pixmap, "()Larc/graphics/Pixmap;", 1 },
	{ "disposePixmap", (intptr_t) M_arc_graphics_gl_FloatTextureData_disposePixmap_R_boolean, VTABLE_arc_graphics_gl_FloatTextureData_disposePixmap_R_boolean, "()Z", 1 },
	{ "getWidth", (intptr_t) M_arc_graphics_gl_FloatTextureData_getWidth_R_int, VTABLE_arc_graphics_gl_FloatTextureData_getWidth_R_int, "()I", 1 },
	{ "getHeight", (intptr_t) M_arc_graphics_gl_FloatTextureData_getHeight_R_int, VTABLE_arc_graphics_gl_FloatTextureData_getHeight_R_int, "()I", 1 },
	{ "getFormat", (intptr_t) M_arc_graphics_gl_FloatTextureData_getFormat_R_arc_graphics_Pixmap$Format, VTABLE_arc_graphics_gl_FloatTextureData_getFormat_R_arc_graphics_Pixmap$Format, "()Larc/graphics/Pixmap$Format;", 1 },
	{ "useMipMaps", (intptr_t) M_arc_graphics_gl_FloatTextureData_useMipMaps_R_boolean, VTABLE_arc_graphics_gl_FloatTextureData_useMipMaps_R_boolean, "()Z", 1 },
	{ "getBuffer", (intptr_t) M_arc_graphics_gl_FloatTextureData_getBuffer_R_java_nio_FloatBuffer, VTABLE_arc_graphics_gl_FloatTextureData_getBuffer_R_java_nio_FloatBuffer, "()Ljava/nio/FloatBuffer;", 1 },
};

Class class_arc_graphics_gl_FloatTextureData{
		.nativeName = (intptr_t) "arc/graphics/gl/FloatTextureData",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_graphics_gl_FloatTextureData),
		.classVtable = (intptr_t) vtable_arc_graphics_gl_FloatTextureData,
		.staticInitializer = (intptr_t) clinit_arc_graphics_gl_FloatTextureData,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_graphics_gl_FloatTextureData,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 8,
		.nativeFields = (intptr_t) fields,
		.methodCount = 12,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 23,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_graphics_gl_FloatTextureData = registerClass(&class_arc_graphics_gl_FloatTextureData);

}
