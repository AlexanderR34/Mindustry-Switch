#include "arc/util/ScreenUtils.h"
#include "arc/math/Mathf.h"
#include "arc/Core.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "arc/util/Buffers.h"
#include "arc/graphics/PixmapIO.h"
#include "arc/files/Fi.h"
#include "arc/graphics/Texture.h"
#include "java/nio/ByteBuffer.h"
#include "arc/Graphics.h"
#include "java/lang/Object.h"
#include "arc/graphics/Pixmap.h"
#include "java/nio/Buffer.h"
#include "arc/graphics/Gl.h"
#include "arc/util/ScreenUtils.h"

extern "C" {


void mark_arc_util_ScreenUtils(jobject object, jint mark, jint depth) {
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
	auto self = (arc_util_ScreenUtils *) object;
}

void clinit_arc_util_ScreenUtils(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_util_ScreenUtils(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/ScreenUtils:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_ScreenUtils(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(17);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_util_ScreenUtils_saveScreenshot_arc_files_Fi(jcontext ctx, jobject param0) {
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/ScreenUtils:saveScreenshot", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_ScreenUtils(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(20);
	sp[0].o = frame[0].o;
	jint temp0 = jint(0);
	jint temp1 = jint(0);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_graphics;
	jint temp2 = (jint)((func_arc_Graphics_getWidth_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Graphics_getWidth_R_int])(ctx, sp[1].o);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_graphics;
	jint temp3 = (jint)((func_arc_Graphics_getHeight_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Graphics_getHeight_R_int])(ctx, sp[1].o);
	SM_arc_util_ScreenUtils_saveScreenshot_arc_files_Fi_int_int_int_int(ctx, sp[0].o, temp0, temp1, temp2, temp3);
	LINE_NUMBER(21);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_util_ScreenUtils_saveScreenshot_arc_files_Fi_int_int_int_int(jcontext ctx, jobject param0, jint param1, jint param2, jint param3, jint param4) {
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/ScreenUtils:saveScreenshot", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_ScreenUtils(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	{
	LINE_NUMBER(24);
	sp[0].o = (jobject)SM_arc_util_ScreenUtils_getFrameBufferPixmap_int_int_int_int_boolean_R_arc_graphics_Pixmap(ctx, (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].i), (jint(1)));
	frame[5].o = sp[0].o;
	LINE_NUMBER(25);
	SM_arc_graphics_PixmapIO_writePng_arc_files_Fi_arc_graphics_Pixmap(ctx, (frame[0].o), (frame[5].o));
	LINE_NUMBER(26);
	((func_arc_graphics_Pixmap_dispose) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_graphics_Pixmap_dispose])(ctx, (frame[5].o));
	LINE_NUMBER(27);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_ScreenUtils_getFrameBufferTexture_R_arc_graphics_g2d_TextureRegion(jcontext ctx) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/ScreenUtils:getFrameBufferTexture", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_ScreenUtils(ctx);
	{
	LINE_NUMBER(36);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp0 = (jint)((func_arc_Graphics_getBackBufferWidth_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_getBackBufferWidth_R_int])(ctx, sp[0].o);
	frame[0].i = temp0;
	LINE_NUMBER(37);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp1 = (jint)((func_arc_Graphics_getBackBufferHeight_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_getBackBufferHeight_R_int])(ctx, sp[0].o);
	frame[1].i = temp1;
	LINE_NUMBER(38);
	sp[0].o = (jobject)SM_arc_util_ScreenUtils_getFrameBufferTexture_int_int_int_int_R_arc_graphics_g2d_TextureRegion(ctx, (jint(0)), (jint(0)), (frame[0].i), (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_ScreenUtils_getFrameBufferTexture_int_int_int_int_R_arc_graphics_g2d_TextureRegion(jcontext ctx, jint param0, jint param1, jint param2, jint param3) {
	jtype frame[17];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/ScreenUtils:getFrameBufferTexture", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_ScreenUtils(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(53);
	jint temp0 = (jint)SM_arc_math_Mathf_nextPowerOfTwo_int_R_int(ctx, (frame[2].i));
	frame[4].i = temp0;
	LINE_NUMBER(54);
	jint temp1 = (jint)SM_arc_math_Mathf_nextPowerOfTwo_int_R_int(ctx, (frame[3].i));
	frame[5].i = temp1;
	LINE_NUMBER(56);
	sp[0].o = (jobject)SM_arc_util_ScreenUtils_getFrameBufferPixmap_int_int_int_int_R_arc_graphics_Pixmap(ctx, (frame[0].i), (frame[1].i), (frame[2].i), (frame[3].i));
	frame[6].o = sp[0].o;
	LINE_NUMBER(57);
	clinit_arc_graphics_Pixmap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Pixmap);
	init_arc_graphics_Pixmap_int_int(ctx, sp[0].o, (frame[4].i), (frame[5].i));
	frame[7].o = sp[0].o;
	LINE_NUMBER(58);
	((func_arc_graphics_Pixmap_draw_arc_graphics_Pixmap_int_int) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_graphics_Pixmap_draw_arc_graphics_Pixmap_int_int])(ctx, (frame[7].o), (frame[6].o), (jint(0)), (jint(0)));
	LINE_NUMBER(59);
	clinit_arc_graphics_Texture(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Texture);
	init_arc_graphics_Texture_arc_graphics_Pixmap(ctx, sp[0].o, (frame[7].o));
	frame[8].o = sp[0].o;
	LINE_NUMBER(60);
	clinit_arc_graphics_g2d_TextureRegion(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_g2d_TextureRegion);
	init_arc_graphics_g2d_TextureRegion_arc_graphics_Texture_int_int_int_int(ctx, sp[0].o, (frame[8].o), (jint(0)), (frame[3].i), (frame[2].i), (-(frame[3].i)));
	frame[9].o = sp[0].o;
	LINE_NUMBER(61);
	((func_arc_graphics_Pixmap_dispose) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_graphics_Pixmap_dispose])(ctx, (frame[7].o));
	LINE_NUMBER(62);
	((func_arc_graphics_Pixmap_dispose) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_graphics_Pixmap_dispose])(ctx, (frame[6].o));
	LINE_NUMBER(64);
	popStackFrame(ctx);
	return (frame[9].o);
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_ScreenUtils_getFrameBufferPixmap_int_int_int_int_R_arc_graphics_Pixmap(jcontext ctx, jint param0, jint param1, jint param2, jint param3) {
	jtype frame[13];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/ScreenUtils:getFrameBufferPixmap", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_ScreenUtils(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(68);
	SM_arc_graphics_Gl_pixelStorei_int_int(ctx, (3333), (jint(1)));
	LINE_NUMBER(70);
	clinit_arc_graphics_Pixmap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Pixmap);
	init_arc_graphics_Pixmap_int_int(ctx, sp[0].o, (frame[2].i), (frame[3].i));
	frame[4].o = sp[0].o;
	LINE_NUMBER(71);
	sp[0].o = (jobject)((arc_graphics_Pixmap *) NULL_CHECK((frame[4].o)))->F_pixels;
	frame[5].o = sp[0].o;
	LINE_NUMBER(72);
	SM_arc_graphics_Gl_readPixels_int_int_int_int_int_int_java_nio_Buffer(ctx, (frame[0].i), (frame[1].i), (frame[2].i), (frame[3].i), (6408), (5121), (frame[5].o));
	LINE_NUMBER(74);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_ScreenUtils_getFrameBufferPixmap_int_int_int_int_boolean_R_arc_graphics_Pixmap(jcontext ctx, jint param0, jint param1, jint param2, jint param3, jbool param4) {
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/ScreenUtils:getFrameBufferPixmap", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_ScreenUtils(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	{
	LINE_NUMBER(78);
	sp[0].o = (jobject)SM_arc_util_ScreenUtils_getFrameBufferPixels_int_int_int_int_boolean_R_Array1_byte(ctx, (frame[0].i), (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].i));
	frame[5].o = sp[0].o;
	LINE_NUMBER(79);
	clinit_arc_graphics_Pixmap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Pixmap);
	init_arc_graphics_Pixmap_int_int(ctx, sp[0].o, (frame[2].i), (frame[3].i));
	frame[6].o = sp[0].o;
	LINE_NUMBER(80);
	sp[0].o = frame[5].o;
	jint temp0 = jint(0);
	sp[1].o = (jobject)((arc_graphics_Pixmap *) NULL_CHECK((frame[6].o)))->F_pixels;
	SM_arc_util_Buffers_copy_Array1_byte_int_java_nio_Buffer_int(ctx, sp[0].o, temp0, sp[1].o, (((jarray) nullCheck(ctx, (frame[5].o)))->length));
	LINE_NUMBER(81);
	popStackFrame(ctx);
	return (frame[6].o);
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_ScreenUtils_getFrameBufferPixels_boolean_R_Array1_byte(jcontext ctx, jbool param0) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/ScreenUtils:getFrameBufferPixels", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_ScreenUtils(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(92);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp0 = (jint)((func_arc_Graphics_getBackBufferWidth_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_getBackBufferWidth_R_int])(ctx, sp[0].o);
	frame[1].i = temp0;
	LINE_NUMBER(93);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp1 = (jint)((func_arc_Graphics_getBackBufferHeight_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_getBackBufferHeight_R_int])(ctx, sp[0].o);
	frame[2].i = temp1;
	LINE_NUMBER(94);
	sp[0].o = (jobject)SM_arc_util_ScreenUtils_getFrameBufferPixels_int_int_int_int_boolean_R_Array1_byte(ctx, (jint(0)), (jint(0)), (frame[1].i), (frame[2].i), (frame[0].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_ScreenUtils_getFrameBufferPixels_int_int_int_int_boolean_R_Array1_byte(jcontext ctx, jint param0, jint param1, jint param2, jint param3, jbool param4) {
	jtype frame[17];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/ScreenUtils:getFrameBufferPixels", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_ScreenUtils(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	{
	LINE_NUMBER(107);
	SM_arc_graphics_Gl_pixelStorei_int_int(ctx, (3333), (jint(1)));
	LINE_NUMBER(108);
	sp[0].o = (jobject)SM_arc_util_Buffers_newByteBuffer_int_R_java_nio_ByteBuffer(ctx, (((frame[2].i) * (frame[3].i)) * (jint(4))));
	frame[5].o = sp[0].o;
	LINE_NUMBER(109);
	SM_arc_graphics_Gl_readPixels_int_int_int_int_int_int_java_nio_Buffer(ctx, (frame[0].i), (frame[1].i), (frame[2].i), (frame[3].i), (6408), (5121), (frame[5].o));
	LINE_NUMBER(110);
	frame[6].i = (((frame[2].i) * (frame[3].i)) * (jint(4)));
	LINE_NUMBER(111);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (frame[6].i));
	frame[7].o = sp[0].o;
	LINE_NUMBER(112);
	if ((frame[4].i) == 0) goto label_6;
	}
	{
	LINE_NUMBER(113);
	frame[8].i = ((frame[2].i) * (jint(4)));
	LINE_NUMBER(114);
	frame[9].i = (jint(0));
	}
label_9:;
	{
	if ((frame[9].i) >= (frame[3].i)) goto label_10;
	}
	{
	LINE_NUMBER(115);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_position_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_nio_ByteBuffer_position_int_R_java_nio_Buffer])(ctx, (frame[5].o), ((((frame[3].i) - (frame[9].i)) - (jint(1))) * (frame[8].i)));
	LINE_NUMBER(116);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_get_Array1_byte_int_int_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_nio_ByteBuffer_get_Array1_byte_int_int_R_java_nio_ByteBuffer])(ctx, (frame[5].o), (frame[7].o), ((frame[9].i) * (frame[8].i)), (frame[8].i));
	LINE_NUMBER(114);
	INST_IINC(9, 1);
	goto label_9;
	}
label_10:;
	LINE_NUMBER(118);
	goto label_14;
label_6:;
	{
	LINE_NUMBER(119);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_clear_R_java_nio_Buffer) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_nio_ByteBuffer_clear_R_java_nio_Buffer])(ctx, (frame[5].o));
	LINE_NUMBER(120);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_get_Array1_byte_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_nio_ByteBuffer_get_Array1_byte_R_java_nio_ByteBuffer])(ctx, (frame[5].o), (frame[7].o));
	}
label_14:;
	{
	LINE_NUMBER(122);
	popStackFrame(ctx);
	return (frame[7].o);
	}

	popStackFrame(ctx);
}

void *vtable_arc_util_ScreenUtils[] {
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

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_util_ScreenUtils, 0, "()V", 1 },
	{ "saveScreenshot", (intptr_t) SM_arc_util_ScreenUtils_saveScreenshot_arc_files_Fi, 0, "(Larc/files/Fi;)V", 9 },
	{ "saveScreenshot", (intptr_t) SM_arc_util_ScreenUtils_saveScreenshot_arc_files_Fi_int_int_int_int, 0, "(Larc/files/Fi;IIII)V", 9 },
	{ "getFrameBufferTexture", (intptr_t) SM_arc_util_ScreenUtils_getFrameBufferTexture_R_arc_graphics_g2d_TextureRegion, 0, "()Larc/graphics/g2d/TextureRegion;", 9 },
	{ "getFrameBufferTexture", (intptr_t) SM_arc_util_ScreenUtils_getFrameBufferTexture_int_int_int_int_R_arc_graphics_g2d_TextureRegion, 0, "(IIII)Larc/graphics/g2d/TextureRegion;", 9 },
	{ "getFrameBufferPixmap", (intptr_t) SM_arc_util_ScreenUtils_getFrameBufferPixmap_int_int_int_int_R_arc_graphics_Pixmap, 0, "(IIII)Larc/graphics/Pixmap;", 9 },
	{ "getFrameBufferPixmap", (intptr_t) SM_arc_util_ScreenUtils_getFrameBufferPixmap_int_int_int_int_boolean_R_arc_graphics_Pixmap, 0, "(IIIIZ)Larc/graphics/Pixmap;", 9 },
	{ "getFrameBufferPixels", (intptr_t) SM_arc_util_ScreenUtils_getFrameBufferPixels_boolean_R_Array1_byte, 0, "(Z)[B", 9 },
	{ "getFrameBufferPixels", (intptr_t) SM_arc_util_ScreenUtils_getFrameBufferPixels_int_int_int_int_boolean_R_Array1_byte, 0, "(IIIIZ)[B", 9 },
};

Class class_arc_util_ScreenUtils{
		.nativeName = (intptr_t) "arc/util/ScreenUtils",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_util_ScreenUtils),
		.classVtable = (intptr_t) vtable_arc_util_ScreenUtils,
		.staticInitializer = (intptr_t) clinit_arc_util_ScreenUtils,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_util_ScreenUtils,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 9,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_util_ScreenUtils = registerClass(&class_arc_util_ScreenUtils);

}
