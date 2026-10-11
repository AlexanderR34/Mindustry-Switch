#include "arc/graphics/Pixmap.h"
#include "arc/func/IntIntf.h"
#include "arc/func/Intc2.h"
#include "java/lang/StringBuilder.h"
#include "arc/files/Fi.h"
#include "arc/graphics/Color.h"
#include "arc/Application.h"
#include "java/nio/ByteBuffer.h"
#include "arc/util/ArcNativesLoader.h"
#include "java/io/InputStream.h"
#include "arc/graphics/Pixmap.h"
#include "java/lang/String.h"
#include "java/nio/Buffer.h"
#include "arc/util/OS.h"
#include "java/lang/Throwable.h"
#include "java/lang/Math.h"
#include "arc/math/Mathf.h"
#include "java/lang/Exception.h"
#include "arc/util/Disposable.h"
#include "arc/Core.h"
#include "arc/util/Java16Buffers.h"
#include "arc/util/UnsafeBuffers.h"
#include "arc/Files.h"
#include "arc/util/Buffers.h"
#include "java/io/ByteArrayInputStream.h"
#include "arc/graphics/Pixmap_Format.h"
#include "java/lang/CharSequence.h"
#include "arc/graphics/g2d/PixmapRegion.h"
#include "java/lang/Object.h"
#include "arc/util/ArcRuntimeException.h"
#include "java/lang/IllegalStateException.h"
#include "arc/graphics/PixmapIO_PngReader.h"

extern "C" {

jbool SF_arc_graphics_Pixmap_supportsBufferCopy;

void mark_arc_graphics_Pixmap(jobject object, jint mark, jint depth) {
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
	auto self = (arc_graphics_Pixmap *) object;
	if (self->F_pixels)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_pixels)->clazz)->markFunction)((jobject) self->F_pixels, mark, depth + 1);
}

void init_arc_graphics_Pixmap_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Pixmap:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Pixmap(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(54);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(55);
	M_arc_graphics_Pixmap_load_int_int(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	LINE_NUMBER(56);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_graphics_Pixmap_Array1_byte(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Pixmap:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Pixmap(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(60);
	init_arc_graphics_Pixmap_Array1_byte_int_int(ctx, (frame[0].o), (frame[1].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	LINE_NUMBER(61);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_graphics_Pixmap_Array1_byte_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Pixmap:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Pixmap(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(67);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(68);
	M_arc_graphics_Pixmap_load_Array1_byte_int_int_java_lang_String(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].i), (jobject(nullptr)));
	LINE_NUMBER(69);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_graphics_Pixmap_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Pixmap:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Pixmap(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(72);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_files;
	sp += 1;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)SM_arc_files_Fi_get_java_lang_String_R_arc_files_Fi(ctx, (frame[1].o));
	sp += 1;
	goto label_2;
	}
label_1:;
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_files;
	sp[0].o = (jobject)((func_arc_Files_internal_java_lang_String_R_arc_files_Fi) resolveInterfaceMethod(ctx, &class_arc_Files, INDEX_arc_Files_internal_java_lang_String_R_arc_files_Fi, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	sp += 1;
	}
label_2:;
	{
	sp -= 2;
	init_arc_graphics_Pixmap_arc_files_Fi(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(73);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_graphics_Pixmap_arc_files_Fi(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Pixmap:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Pixmap(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(79);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(80);
	sp[0].o = (jobject)((func_arc_files_Fi_readBytes_R_Array1_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_files_Fi_readBytes_R_Array1_byte])(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(81);
	sp[0].o = frame[0].o;
	sp[1].o = frame[2].o;
	jint temp0 = jint(0);
	jint temp1 = ((jarray) nullCheck(ctx, (frame[2].o)))->length;
	sp[2].o = (jobject)((func_arc_files_Fi_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_files_Fi_toString_R_java_lang_String])(ctx, (frame[1].o));
	M_arc_graphics_Pixmap_load_Array1_byte_int_int_java_lang_String(ctx, sp[0].o, sp[1].o, temp0, temp1, sp[2].o);
	LINE_NUMBER(82);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_graphics_Pixmap_java_nio_ByteBuffer_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Pixmap:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Pixmap(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(85);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(86);
	jint temp0 = (jint)((func_java_nio_ByteBuffer_isDirect_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_ByteBuffer_isDirect_R_boolean])(ctx, (frame[1].o));
	if (temp0 != 0) goto label_2;
	}
	{
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Pixmaps may only use direct/native ByteBuffers!"_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(88);
	((arc_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_width = (frame[2].i);
	LINE_NUMBER(89);
	((arc_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_height = (frame[3].i);
	LINE_NUMBER(90);
	((arc_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_pixels = (jref) (frame[1].o);
	LINE_NUMBER(91);
	((arc_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_handle = (jlong(-1ll));
	LINE_NUMBER(93);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_position_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_ByteBuffer_position_int_R_java_nio_Buffer])(ctx, (frame[1].o), (jint(0)));
	jint temp0 = (jint)((func_java_nio_ByteBuffer_capacity_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_ByteBuffer_capacity_R_int])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_nio_Buffer_limit_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_Buffer_limit_int_R_java_nio_Buffer])(ctx, sp[0].o, temp0);
	LINE_NUMBER(94);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_Pixmap_copy_R_arc_graphics_Pixmap(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Pixmap:copy", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(98);
	clinit_arc_graphics_Pixmap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Pixmap);
	init_arc_graphics_Pixmap_int_int(ctx, sp[0].o, ((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_width), ((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_height));
	frame[1].o = sp[0].o;
	LINE_NUMBER(99);
	sp[0].o = (jobject)((arc_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_pixels;
	jint temp0 = jint(0);
	sp[1].o = (jobject)((arc_graphics_Pixmap *) NULL_CHECK((frame[1].o)))->F_pixels;
	jint temp1 = jint(0);
	sp[2].o = (jobject)((arc_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_pixels;
	jint temp2 = (jint)((func_java_nio_ByteBuffer_capacity_R_int) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_nio_ByteBuffer_capacity_R_int])(ctx, sp[2].o);
	SM_arc_graphics_Pixmap_copyMem_java_nio_ByteBuffer_int_java_nio_ByteBuffer_int_int(ctx, sp[0].o, temp0, sp[1].o, temp1, temp2);
	LINE_NUMBER(100);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

void M_arc_graphics_Pixmap_each_arc_func_Intc2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Pixmap:each", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(105);
	frame[2].i = (jint(0));
	}
label_1:;
	{
	if ((frame[2].i) >= ((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_height)) goto label_2;
	}
	{
	LINE_NUMBER(106);
	frame[3].i = (jint(0));
	}
label_4:;
	{
	if ((frame[3].i) >= ((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_width)) goto label_5;
	}
	{
	LINE_NUMBER(107);
	((func_arc_func_Intc2_get_int_int) resolveInterfaceMethod(ctx, &class_arc_func_Intc2, INDEX_arc_func_Intc2_get_int_int, (frame[1].o)))(ctx, (frame[1].o), (frame[3].i), (frame[2].i));
	LINE_NUMBER(106);
	INST_IINC(3, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(105);
	INST_IINC(2, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(110);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_graphics_Pixmap_replace_arc_func_IntIntf(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Pixmap:replace", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(113);
	frame[2].i = (jint(0));
	}
label_1:;
	{
	if ((frame[2].i) >= ((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_height)) goto label_2;
	}
	{
	LINE_NUMBER(114);
	frame[3].i = (jint(0));
	}
label_4:;
	{
	if ((frame[3].i) >= ((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_width)) goto label_5;
	}
	{
	LINE_NUMBER(115);
	sp[0].o = frame[0].o;
	jint temp0 = frame[3].i;
	jint temp1 = frame[2].i;
	sp[1].o = frame[1].o;
	jint temp2 = (jint)((func_arc_graphics_Pixmap_getRaw_int_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_Pixmap_getRaw_int_int_R_int])(ctx, (frame[0].o), (frame[3].i), (frame[2].i));
	jint temp3 = (jint)((func_arc_func_IntIntf_get_int_R_int) resolveInterfaceMethod(ctx, &class_arc_func_IntIntf, INDEX_arc_func_IntIntf_get_int_R_int, sp[1].o))(ctx, sp[1].o, temp2);
	((func_arc_graphics_Pixmap_setRaw_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Pixmap_setRaw_int_int_int])(ctx, sp[0].o, temp0, temp1, temp3);
	LINE_NUMBER(114);
	INST_IINC(3, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(113);
	INST_IINC(2, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(118);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_graphics_Pixmap_fill_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Pixmap:fill", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(122);
	frame[2].i = ((((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_width) * ((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_height)) * (jint(4)));
	LINE_NUMBER(123);
	frame[3].i = (jint(0));
	}
label_2:;
	{
	if ((frame[3].i) >= (frame[2].i)) goto label_3;
	}
	{
	LINE_NUMBER(124);
	sp[0].o = (jobject)((arc_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_pixels;
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_putInt_int_int_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_putInt_int_int_R_java_nio_ByteBuffer])(ctx, sp[0].o, (frame[3].i), (frame[1].i));
	LINE_NUMBER(123);
	INST_IINC(3, 4);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(126);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_graphics_Pixmap_fill_arc_graphics_Color(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Pixmap:fill", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(130);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_arc_graphics_Color_rgba_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_graphics_Color_rgba_R_int])(ctx, (frame[1].o));
	((func_arc_graphics_Pixmap_fill_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Pixmap_fill_int])(ctx, sp[0].o, temp0);
	LINE_NUMBER(131);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_graphics_Pixmap_in_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Pixmap:in", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(135);
	if ((frame[1].i) < 0) goto label_1;
	}
	INST_ILOAD(2);
	if ((--sp)->i < 0) goto label_1;
	{
	if ((frame[1].i) >= ((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_width)) goto label_1;
	}
	{
	if ((frame[2].i) >= ((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_height)) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject M_arc_graphics_Pixmap_crop_int_int_int_int_R_arc_graphics_Pixmap(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Pixmap:crop", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(139);
	jint temp0 = (jint)((func_arc_graphics_Pixmap_isDisposed_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_Pixmap_isDisposed_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"input is disposed."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(140);
	clinit_arc_graphics_Pixmap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Pixmap);
	init_arc_graphics_Pixmap_int_int(ctx, sp[0].o, (frame[3].i), (frame[4].i));
	frame[5].o = sp[0].o;
	LINE_NUMBER(141);
	((func_arc_graphics_Pixmap_draw_arc_graphics_Pixmap_int_int_int_int_int_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_graphics_Pixmap_draw_arc_graphics_Pixmap_int_int_int_int_int_int])(ctx, (frame[5].o), (frame[0].o), (jint(0)), (jint(0)), (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].i));
	LINE_NUMBER(142);
	popStackFrame(ctx);
	return (frame[5].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_Pixmap_flipY_R_arc_graphics_Pixmap(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Pixmap:flipY", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(147);
	clinit_arc_graphics_Pixmap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Pixmap);
	init_arc_graphics_Pixmap_int_int(ctx, sp[0].o, ((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_width), ((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_height));
	frame[1].o = sp[0].o;
	LINE_NUMBER(150);
	frame[2].i = (jint(0));
	}
label_2:;
	{
	if ((frame[2].i) >= ((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_height)) goto label_3;
	}
	{
	LINE_NUMBER(151);
	frame[3].i = (jint(0));
	}
label_5:;
	{
	if ((frame[3].i) >= ((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_width)) goto label_6;
	}
	{
	LINE_NUMBER(152);
	sp[0].o = frame[1].o;
	jint temp0 = frame[3].i;
	jint temp1 = (((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_height) - (jint(1))) - (frame[2].i);
	jint temp2 = (jint)((func_arc_graphics_Pixmap_getRaw_int_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_Pixmap_getRaw_int_int_R_int])(ctx, (frame[0].o), (frame[3].i), (frame[2].i));
	((func_arc_graphics_Pixmap_setRaw_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Pixmap_setRaw_int_int_int])(ctx, sp[0].o, temp0, temp1, temp2);
	LINE_NUMBER(151);
	INST_IINC(3, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(150);
	INST_IINC(2, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(156);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_Pixmap_flipX_R_arc_graphics_Pixmap(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Pixmap:flipX", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(161);
	clinit_arc_graphics_Pixmap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Pixmap);
	init_arc_graphics_Pixmap_int_int(ctx, sp[0].o, ((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_width), ((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_height));
	frame[1].o = sp[0].o;
	LINE_NUMBER(163);
	frame[2].i = (jint(0));
	}
label_2:;
	{
	if ((frame[2].i) >= ((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_height)) goto label_3;
	}
	{
	LINE_NUMBER(164);
	frame[3].i = (jint(0));
	}
label_5:;
	{
	if ((frame[3].i) >= ((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_width)) goto label_6;
	}
	{
	LINE_NUMBER(165);
	sp[0].o = frame[1].o;
	jint temp0 = (((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_width) - (jint(1))) - (frame[3].i);
	jint temp1 = frame[2].i;
	jint temp2 = (jint)((func_arc_graphics_Pixmap_getRaw_int_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_Pixmap_getRaw_int_int_R_int])(ctx, (frame[0].o), (frame[3].i), (frame[2].i));
	((func_arc_graphics_Pixmap_set_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Pixmap_set_int_int_int])(ctx, sp[0].o, temp0, temp1, temp2);
	LINE_NUMBER(164);
	INST_IINC(3, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(163);
	INST_IINC(2, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(169);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_Pixmap_outline_arc_graphics_Color_int_R_arc_graphics_Pixmap(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Pixmap:outline", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(174);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_arc_graphics_Color_rgba_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_graphics_Color_rgba_R_int])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_graphics_Pixmap_outline_int_int_R_arc_graphics_Pixmap) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Pixmap_outline_int_int_R_arc_graphics_Pixmap])(ctx, sp[0].o, temp0, (frame[2].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_Pixmap_outline_int_int_R_arc_graphics_Pixmap(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Pixmap:outline", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(179);
	sp[0].o = (jobject)((func_arc_graphics_Pixmap_copy_R_arc_graphics_Pixmap) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_Pixmap_copy_R_arc_graphics_Pixmap])(ctx, (frame[0].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(182);
	frame[4].i = (jint(0));
	}
label_2:;
	{
	if ((frame[4].i) >= ((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_height)) goto label_3;
	}
	{
	LINE_NUMBER(183);
	frame[5].i = (jint(0));
	}
label_5:;
	{
	if ((frame[5].i) >= ((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_width)) goto label_6;
	}
	{
	LINE_NUMBER(184);
	jint temp0 = (jint)((func_arc_graphics_Pixmap_getA_int_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_Pixmap_getA_int_int_R_int])(ctx, (frame[0].o), (frame[5].i), (frame[4].i));
	if (temp0 != 0) goto label_8;
	}
	{
	LINE_NUMBER(185);
	frame[6].i = (jint(0));
	LINE_NUMBER(187);
	frame[7].i = (-(frame[2].i));
	}
label_11:;
	{
	if ((frame[7].i) > (frame[2].i)) goto label_12;
	}
	{
	LINE_NUMBER(188);
	frame[8].i = (-(frame[2].i));
	}
label_14:;
	{
	if ((frame[8].i) > (frame[2].i)) goto label_15;
	}
	{
	LINE_NUMBER(189);
	if ((((frame[7].i) * (frame[7].i)) + ((frame[8].i) * (frame[8].i))) > ((frame[2].i) * (frame[2].i))) goto label_17;
	}
	{
	jint temp0 = (jint)((func_arc_graphics_Pixmap_get_int_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_Pixmap_get_int_int_R_int])(ctx, (frame[0].o), ((frame[5].i) + (frame[7].i)), ((frame[4].i) + (frame[8].i)));
	jint temp1 = (jint)SM_arc_graphics_Pixmap_empty_int_R_boolean(ctx, temp0);
	if (temp1 != 0) goto label_17;
	}
	{
	LINE_NUMBER(190);
	frame[6].i = (jint(1));
	LINE_NUMBER(191);
	goto label_12;
	}
label_17:;
	{
	LINE_NUMBER(188);
	INST_IINC(8, 1);
	goto label_14;
	}
label_15:;
	{
	LINE_NUMBER(187);
	INST_IINC(7, 1);
	goto label_11;
	}
label_12:;
	{
	LINE_NUMBER(195);
	if ((frame[6].i) == 0) goto label_8;
	}
	{
	LINE_NUMBER(196);
	((func_arc_graphics_Pixmap_setRaw_int_int_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_graphics_Pixmap_setRaw_int_int_int])(ctx, (frame[3].o), (frame[5].i), (frame[4].i), (frame[1].i));
	}
label_8:;
	{
	LINE_NUMBER(183);
	INST_IINC(5, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(182);
	INST_IINC(4, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(201);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

void M_arc_graphics_Pixmap_drawLine_int_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[18];
	auto stack = &frame[14];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Pixmap:drawLine", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(206);
	frame[6].i = (frame[1].i);
	jint temp0 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, ((frame[3].i) - (frame[6].i)));
	frame[7].i = temp0;
	if ((frame[6].i) >= (frame[3].i)) goto label_3;
	}
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(-1);
label_4:;
	{
	sp -= 1;
	frame[8].i = sp[0].i;
	LINE_NUMBER(207);
	frame[9].i = (frame[2].i);
	jint temp0 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, ((frame[4].i) - (frame[9].i)));
	frame[10].i = temp0;
	if ((frame[9].i) >= (frame[4].i)) goto label_8;
	}
	INST_ICONST(1);
	goto label_9;
label_8:;
	INST_ICONST(-1);
label_9:;
	{
	sp -= 1;
	frame[11].i = sp[0].i;
	LINE_NUMBER(208);
	frame[13].i = ((frame[7].i) - (frame[10].i));
	}
label_11:;
	{
	LINE_NUMBER(211);
	((func_arc_graphics_Pixmap_set_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_Pixmap_set_int_int_int])(ctx, (frame[0].o), (frame[6].i), (frame[9].i), (frame[5].i));
	LINE_NUMBER(212);
	if ((frame[6].i) != (frame[3].i)) goto label_13;
	}
	{
	if ((frame[9].i) != (frame[4].i)) goto label_13;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_13:;
	{
	LINE_NUMBER(214);
	frame[12].i = ((jint(2)) * (frame[13].i));
	LINE_NUMBER(215);
	if ((frame[12].i) <= (-(frame[10].i))) goto label_15;
	}
	{
	LINE_NUMBER(216);
	frame[13].i = ((frame[13].i) - (frame[10].i));
	LINE_NUMBER(217);
	frame[6].i = ((frame[6].i) + (frame[8].i));
	}
label_15:;
	{
	LINE_NUMBER(220);
	if ((frame[12].i) >= (frame[7].i)) goto label_11;
	}
	{
	LINE_NUMBER(221);
	frame[13].i = ((frame[13].i) + (frame[7].i));
	LINE_NUMBER(222);
	frame[9].i = ((frame[9].i) + (frame[11].i));
	goto label_11;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_Pixmap_drawRect_int_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Pixmap:drawRect", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(229);
	((func_arc_graphics_Pixmap_hline_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_Pixmap_hline_int_int_int_int])(ctx, (frame[0].o), (frame[1].i), (((frame[1].i) + (frame[3].i)) - (jint(1))), (frame[2].i), (frame[5].i));
	LINE_NUMBER(230);
	((func_arc_graphics_Pixmap_hline_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_Pixmap_hline_int_int_int_int])(ctx, (frame[0].o), (frame[1].i), (((frame[1].i) + (frame[3].i)) - (jint(1))), (((frame[2].i) + (frame[4].i)) - (jint(1))), (frame[5].i));
	LINE_NUMBER(231);
	((func_arc_graphics_Pixmap_vline_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_Pixmap_vline_int_int_int_int])(ctx, (frame[0].o), (frame[2].i), (((frame[2].i) + (frame[4].i)) - (jint(1))), (frame[1].i), (frame[5].i));
	LINE_NUMBER(232);
	((func_arc_graphics_Pixmap_vline_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_Pixmap_vline_int_int_int_int])(ctx, (frame[0].o), (frame[2].i), (((frame[2].i) + (frame[4].i)) - (jint(1))), (((frame[1].i) + (frame[3].i)) - (jint(1))), (frame[5].i));
	LINE_NUMBER(233);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_Pixmap_circlePoints_int_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Pixmap:circlePoints", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(236);
	if ((frame[3].i) != 0) goto label_1;
	}
	{
	LINE_NUMBER(237);
	((func_arc_graphics_Pixmap_set_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_Pixmap_set_int_int_int])(ctx, (frame[0].o), (frame[1].i), ((frame[2].i) + (frame[4].i)), (frame[5].i));
	LINE_NUMBER(238);
	((func_arc_graphics_Pixmap_set_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_Pixmap_set_int_int_int])(ctx, (frame[0].o), (frame[1].i), ((frame[2].i) - (frame[4].i)), (frame[5].i));
	LINE_NUMBER(239);
	((func_arc_graphics_Pixmap_set_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_Pixmap_set_int_int_int])(ctx, (frame[0].o), ((frame[1].i) + (frame[4].i)), (frame[2].i), (frame[5].i));
	LINE_NUMBER(240);
	((func_arc_graphics_Pixmap_set_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_Pixmap_set_int_int_int])(ctx, (frame[0].o), ((frame[1].i) - (frame[4].i)), (frame[2].i), (frame[5].i));
	goto label_6;
	}
label_1:;
	{
	LINE_NUMBER(241);
	if ((frame[3].i) != (frame[4].i)) goto label_7;
	}
	{
	LINE_NUMBER(242);
	((func_arc_graphics_Pixmap_set_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_Pixmap_set_int_int_int])(ctx, (frame[0].o), ((frame[1].i) + (frame[3].i)), ((frame[2].i) + (frame[4].i)), (frame[5].i));
	LINE_NUMBER(243);
	((func_arc_graphics_Pixmap_set_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_Pixmap_set_int_int_int])(ctx, (frame[0].o), ((frame[1].i) - (frame[3].i)), ((frame[2].i) + (frame[4].i)), (frame[5].i));
	LINE_NUMBER(244);
	((func_arc_graphics_Pixmap_set_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_Pixmap_set_int_int_int])(ctx, (frame[0].o), ((frame[1].i) + (frame[3].i)), ((frame[2].i) - (frame[4].i)), (frame[5].i));
	LINE_NUMBER(245);
	((func_arc_graphics_Pixmap_set_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_Pixmap_set_int_int_int])(ctx, (frame[0].o), ((frame[1].i) - (frame[3].i)), ((frame[2].i) - (frame[4].i)), (frame[5].i));
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(246);
	if ((frame[3].i) >= (frame[4].i)) goto label_6;
	}
	{
	LINE_NUMBER(247);
	((func_arc_graphics_Pixmap_set_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_Pixmap_set_int_int_int])(ctx, (frame[0].o), ((frame[1].i) + (frame[3].i)), ((frame[2].i) + (frame[4].i)), (frame[5].i));
	LINE_NUMBER(248);
	((func_arc_graphics_Pixmap_set_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_Pixmap_set_int_int_int])(ctx, (frame[0].o), ((frame[1].i) - (frame[3].i)), ((frame[2].i) + (frame[4].i)), (frame[5].i));
	LINE_NUMBER(249);
	((func_arc_graphics_Pixmap_set_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_Pixmap_set_int_int_int])(ctx, (frame[0].o), ((frame[1].i) + (frame[3].i)), ((frame[2].i) - (frame[4].i)), (frame[5].i));
	LINE_NUMBER(250);
	((func_arc_graphics_Pixmap_set_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_Pixmap_set_int_int_int])(ctx, (frame[0].o), ((frame[1].i) - (frame[3].i)), ((frame[2].i) - (frame[4].i)), (frame[5].i));
	LINE_NUMBER(251);
	((func_arc_graphics_Pixmap_set_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_Pixmap_set_int_int_int])(ctx, (frame[0].o), ((frame[1].i) + (frame[4].i)), ((frame[2].i) + (frame[3].i)), (frame[5].i));
	LINE_NUMBER(252);
	((func_arc_graphics_Pixmap_set_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_Pixmap_set_int_int_int])(ctx, (frame[0].o), ((frame[1].i) - (frame[4].i)), ((frame[2].i) + (frame[3].i)), (frame[5].i));
	LINE_NUMBER(253);
	((func_arc_graphics_Pixmap_set_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_Pixmap_set_int_int_int])(ctx, (frame[0].o), ((frame[1].i) + (frame[4].i)), ((frame[2].i) - (frame[3].i)), (frame[5].i));
	LINE_NUMBER(254);
	((func_arc_graphics_Pixmap_set_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_Pixmap_set_int_int_int])(ctx, (frame[0].o), ((frame[1].i) - (frame[4].i)), ((frame[2].i) - (frame[3].i)), (frame[5].i));
	}
label_6:;
	LINE_NUMBER(256);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_graphics_Pixmap_drawCircle_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Pixmap:drawCircle", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(259);
	frame[5].i = (jint(0));
	LINE_NUMBER(260);
	frame[6].i = (frame[3].i);
	LINE_NUMBER(261);
	frame[7].i = (((jint(5)) - ((frame[3].i) * (jint(4)))) / (jint(4)));
	LINE_NUMBER(263);
	((func_arc_graphics_Pixmap_circlePoints_int_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_Pixmap_circlePoints_int_int_int_int_int])(ctx, (frame[0].o), (frame[1].i), (frame[2].i), (frame[5].i), (frame[6].i), (frame[4].i));
	}
label_4:;
	{
	LINE_NUMBER(264);
	if ((frame[5].i) >= (frame[6].i)) goto label_5;
	}
	{
	LINE_NUMBER(265);
	INST_IINC(5, 1);
	LINE_NUMBER(266);
	if ((frame[7].i) >= 0) goto label_8;
	}
	{
	LINE_NUMBER(267);
	frame[7].i = ((frame[7].i) + (((jint(2)) * (frame[5].i)) + (jint(1))));
	goto label_10;
	}
label_8:;
	{
	LINE_NUMBER(269);
	INST_IINC(6, -1);
	LINE_NUMBER(270);
	frame[7].i = ((frame[7].i) + (((jint(2)) * ((frame[5].i) - (frame[6].i))) + (jint(1))));
	}
label_10:;
	{
	LINE_NUMBER(272);
	((func_arc_graphics_Pixmap_circlePoints_int_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_Pixmap_circlePoints_int_int_int_int_int])(ctx, (frame[0].o), (frame[1].i), (frame[2].i), (frame[5].i), (frame[6].i), (frame[4].i));
	goto label_4;
	}
label_5:;
	LINE_NUMBER(274);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_graphics_Pixmap_draw_arc_graphics_g2d_PixmapRegion(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Pixmap:draw", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(277);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_graphics_g2d_PixmapRegion *) NULL_CHECK((frame[1].o)))->F_pixmap;
	((func_arc_graphics_Pixmap_draw_arc_graphics_Pixmap_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Pixmap_draw_arc_graphics_Pixmap_int_int_int_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, ((jint)((arc_graphics_g2d_PixmapRegion *) NULL_CHECK((frame[1].o)))->F_x), ((jint)((arc_graphics_g2d_PixmapRegion *) NULL_CHECK((frame[1].o)))->F_y), ((jint)((arc_graphics_g2d_PixmapRegion *) NULL_CHECK((frame[1].o)))->F_width), ((jint)((arc_graphics_g2d_PixmapRegion *) NULL_CHECK((frame[1].o)))->F_height), (jint(0)), (jint(0)), ((jint)((arc_graphics_g2d_PixmapRegion *) NULL_CHECK((frame[1].o)))->F_width), ((jint)((arc_graphics_g2d_PixmapRegion *) NULL_CHECK((frame[1].o)))->F_height));
	LINE_NUMBER(278);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_Pixmap_draw_arc_graphics_g2d_PixmapRegion_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Pixmap:draw", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(281);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_graphics_g2d_PixmapRegion *) NULL_CHECK((frame[1].o)))->F_pixmap;
	((func_arc_graphics_Pixmap_draw_arc_graphics_Pixmap_int_int_int_int_int_int_int_int_boolean_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Pixmap_draw_arc_graphics_Pixmap_int_int_int_int_int_int_int_int_boolean_boolean])(ctx, sp[0].o, sp[1].o, ((jint)((arc_graphics_g2d_PixmapRegion *) NULL_CHECK((frame[1].o)))->F_x), ((jint)((arc_graphics_g2d_PixmapRegion *) NULL_CHECK((frame[1].o)))->F_y), ((jint)((arc_graphics_g2d_PixmapRegion *) NULL_CHECK((frame[1].o)))->F_width), ((jint)((arc_graphics_g2d_PixmapRegion *) NULL_CHECK((frame[1].o)))->F_height), (jint(0)), (jint(0)), ((jint)((arc_graphics_g2d_PixmapRegion *) NULL_CHECK((frame[1].o)))->F_width), ((jint)((arc_graphics_g2d_PixmapRegion *) NULL_CHECK((frame[1].o)))->F_height), (jint(0)), (frame[2].i));
	LINE_NUMBER(282);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_Pixmap_draw_arc_graphics_g2d_PixmapRegion_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Pixmap:draw", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(285);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_graphics_g2d_PixmapRegion *) NULL_CHECK((frame[1].o)))->F_pixmap;
	((func_arc_graphics_Pixmap_draw_arc_graphics_Pixmap_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Pixmap_draw_arc_graphics_Pixmap_int_int_int_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, ((jint)((arc_graphics_g2d_PixmapRegion *) NULL_CHECK((frame[1].o)))->F_x), ((jint)((arc_graphics_g2d_PixmapRegion *) NULL_CHECK((frame[1].o)))->F_y), ((jint)((arc_graphics_g2d_PixmapRegion *) NULL_CHECK((frame[1].o)))->F_width), ((jint)((arc_graphics_g2d_PixmapRegion *) NULL_CHECK((frame[1].o)))->F_height), (frame[2].i), (frame[3].i), ((jint)((arc_graphics_g2d_PixmapRegion *) NULL_CHECK((frame[1].o)))->F_width), ((jint)((arc_graphics_g2d_PixmapRegion *) NULL_CHECK((frame[1].o)))->F_height));
	LINE_NUMBER(286);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_Pixmap_draw_arc_graphics_g2d_PixmapRegion_int_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Pixmap:draw", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(289);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_graphics_g2d_PixmapRegion *) NULL_CHECK((frame[1].o)))->F_pixmap;
	((func_arc_graphics_Pixmap_draw_arc_graphics_Pixmap_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Pixmap_draw_arc_graphics_Pixmap_int_int_int_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, ((jint)((arc_graphics_g2d_PixmapRegion *) NULL_CHECK((frame[1].o)))->F_x), ((jint)((arc_graphics_g2d_PixmapRegion *) NULL_CHECK((frame[1].o)))->F_y), ((jint)((arc_graphics_g2d_PixmapRegion *) NULL_CHECK((frame[1].o)))->F_width), ((jint)((arc_graphics_g2d_PixmapRegion *) NULL_CHECK((frame[1].o)))->F_height), (frame[2].i), (frame[3].i), (frame[4].i), (frame[5].i));
	LINE_NUMBER(290);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_Pixmap_draw_arc_graphics_g2d_PixmapRegion_int_int_int_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Pixmap:draw", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	frame[6].i = param5;
	frame[7].i = param6;
	{
	LINE_NUMBER(293);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_graphics_g2d_PixmapRegion *) NULL_CHECK((frame[1].o)))->F_pixmap;
	((func_arc_graphics_Pixmap_draw_arc_graphics_Pixmap_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Pixmap_draw_arc_graphics_Pixmap_int_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, (frame[2].i), (frame[3].i), (((jint)((arc_graphics_g2d_PixmapRegion *) NULL_CHECK((frame[1].o)))->F_x) + (frame[4].i)), (((jint)((arc_graphics_g2d_PixmapRegion *) NULL_CHECK((frame[1].o)))->F_y) + (frame[5].i)), (frame[6].i), (frame[7].i));
	LINE_NUMBER(294);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_Pixmap_draw_arc_graphics_g2d_PixmapRegion_int_int_int_int_int_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jint param8) {
	NULL_CHECK(self);
	jtype frame[20];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Pixmap:draw", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	frame[6].i = param5;
	frame[7].i = param6;
	frame[8].i = param7;
	frame[9].i = param8;
	{
	LINE_NUMBER(297);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_graphics_g2d_PixmapRegion *) NULL_CHECK((frame[1].o)))->F_pixmap;
	((func_arc_graphics_Pixmap_draw_arc_graphics_Pixmap_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Pixmap_draw_arc_graphics_Pixmap_int_int_int_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, (((jint)((arc_graphics_g2d_PixmapRegion *) NULL_CHECK((frame[1].o)))->F_x) + (frame[2].i)), (((jint)((arc_graphics_g2d_PixmapRegion *) NULL_CHECK((frame[1].o)))->F_y) + (frame[3].i)), (frame[4].i), (frame[5].i), (frame[6].i), (frame[7].i), (frame[8].i), (frame[9].i));
	LINE_NUMBER(298);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_Pixmap_draw_arc_graphics_Pixmap_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Pixmap:draw", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(301);
	((func_arc_graphics_Pixmap_draw_arc_graphics_Pixmap_int_int_int_int_int_int_int_int_boolean_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_Pixmap_draw_arc_graphics_Pixmap_int_int_int_int_int_int_int_int_boolean_boolean])(ctx, (frame[0].o), (frame[1].o), (jint(0)), (jint(0)), ((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[1].o)))->F_width), ((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[1].o)))->F_height), (jint(0)), (jint(0)), ((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[1].o)))->F_width), ((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[1].o)))->F_height), (jint(0)), (frame[2].i));
	LINE_NUMBER(302);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_Pixmap_draw_arc_graphics_Pixmap(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Pixmap:draw", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(305);
	((func_arc_graphics_Pixmap_draw_arc_graphics_Pixmap_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_Pixmap_draw_arc_graphics_Pixmap_int_int])(ctx, (frame[0].o), (frame[1].o), (jint(0)), (jint(0)));
	LINE_NUMBER(306);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_Pixmap_draw_arc_graphics_Pixmap_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Pixmap:draw", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(315);
	((func_arc_graphics_Pixmap_draw_arc_graphics_Pixmap_int_int_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_Pixmap_draw_arc_graphics_Pixmap_int_int_int_int_int_int])(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].i), (jint(0)), (jint(0)), ((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[1].o)))->F_width), ((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[1].o)))->F_height));
	LINE_NUMBER(316);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_Pixmap_draw_arc_graphics_Pixmap_int_int_boolean(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jbool param3) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Pixmap:draw", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(325);
	((func_arc_graphics_Pixmap_draw_arc_graphics_Pixmap_int_int_int_int_int_int_int_int_boolean_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_Pixmap_draw_arc_graphics_Pixmap_int_int_int_int_int_int_int_int_boolean_boolean])(ctx, (frame[0].o), (frame[1].o), (jint(0)), (jint(0)), ((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[1].o)))->F_width), ((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[1].o)))->F_height), (frame[2].i), (frame[3].i), ((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[1].o)))->F_width), ((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[1].o)))->F_height), (jint(0)), (frame[4].i));
	LINE_NUMBER(326);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_Pixmap_draw_arc_graphics_Pixmap_int_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Pixmap:draw", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(331);
	((func_arc_graphics_Pixmap_draw_arc_graphics_Pixmap_int_int_int_int_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_Pixmap_draw_arc_graphics_Pixmap_int_int_int_int_boolean])(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].i), (frame[4].i), (frame[5].i), (jint(0)));
	LINE_NUMBER(332);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_Pixmap_draw_arc_graphics_Pixmap_int_int_int_int_boolean(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4, jbool param5) {
	NULL_CHECK(self);
	jtype frame[18];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Pixmap:draw", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	frame[6].i = param5;
	{
	LINE_NUMBER(336);
	((func_arc_graphics_Pixmap_draw_arc_graphics_Pixmap_int_int_int_int_int_int_int_int_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_Pixmap_draw_arc_graphics_Pixmap_int_int_int_int_int_int_int_int_boolean])(ctx, (frame[0].o), (frame[1].o), (jint(0)), (jint(0)), ((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[1].o)))->F_width), ((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[1].o)))->F_height), (frame[2].i), (frame[3].i), (frame[4].i), (frame[5].i), (frame[6].i));
	LINE_NUMBER(337);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_Pixmap_draw_arc_graphics_Pixmap_int_int_int_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6) {
	NULL_CHECK(self);
	jtype frame[18];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Pixmap:draw", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	frame[6].i = param5;
	frame[7].i = param6;
	{
	LINE_NUMBER(341);
	((func_arc_graphics_Pixmap_draw_arc_graphics_Pixmap_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_Pixmap_draw_arc_graphics_Pixmap_int_int_int_int_int_int_int_int])(ctx, (frame[0].o), (frame[1].o), (frame[4].i), (frame[5].i), (frame[6].i), (frame[7].i), (frame[2].i), (frame[3].i), (frame[6].i), (frame[7].i));
	LINE_NUMBER(342);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_Pixmap_draw_arc_graphics_Pixmap_int_int_int_int_int_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jint param8) {
	NULL_CHECK(self);
	jtype frame[21];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Pixmap:draw", 21 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	frame[6].i = param5;
	frame[7].i = param6;
	frame[8].i = param7;
	frame[9].i = param8;
	{
	LINE_NUMBER(349);
	((func_arc_graphics_Pixmap_draw_arc_graphics_Pixmap_int_int_int_int_int_int_int_int_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_Pixmap_draw_arc_graphics_Pixmap_int_int_int_int_int_int_int_int_boolean])(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].i), (frame[4].i), (frame[5].i), (frame[6].i), (frame[7].i), (frame[8].i), (frame[9].i), (jint(0)));
	LINE_NUMBER(350);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_Pixmap_draw_arc_graphics_Pixmap_int_int_int_int_int_int_int_int_boolean(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jint param8, jbool param9) {
	NULL_CHECK(self);
	jtype frame[23];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Pixmap:draw", 23 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	frame[6].i = param5;
	frame[7].i = param6;
	frame[8].i = param7;
	frame[9].i = param8;
	frame[10].i = param9;
	{
	LINE_NUMBER(357);
	((func_arc_graphics_Pixmap_draw_arc_graphics_Pixmap_int_int_int_int_int_int_int_int_boolean_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_Pixmap_draw_arc_graphics_Pixmap_int_int_int_int_int_int_int_int_boolean_boolean])(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].i), (frame[4].i), (frame[5].i), (frame[6].i), (frame[7].i), (frame[8].i), (frame[9].i), (frame[10].i), (jint(0)));
	LINE_NUMBER(358);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_Pixmap_draw_arc_graphics_Pixmap_int_int_int_int_int_int_int_int_boolean_boolean(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jint param8, jbool param9, jbool param10) {
	NULL_CHECK(self);
	jtype frame[51];
	auto stack = &frame[44];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Pixmap:draw", 51 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	frame[6].i = param5;
	frame[7].i = param6;
	frame[8].i = param7;
	frame[9].i = param8;
	frame[10].i = param9;
	frame[11].i = param10;
	{
	LINE_NUMBER(374);
	frame[12].i = ((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_width);
	frame[13].i = ((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_height);
	frame[14].i = ((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[1].o)))->F_width);
	frame[15].i = ((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[1].o)))->F_height);
	LINE_NUMBER(377);
	if ((frame[4].i) == 0) goto label_5;
	}
	INST_ILOAD(5);
	if ((--sp)->i == 0) goto label_5;
	INST_ILOAD(8);
	if ((--sp)->i == 0) goto label_5;
	INST_ILOAD(9);
	if ((--sp)->i != 0) goto label_6;
label_5:;
	LINE_NUMBER(378);
	popStackFrame(ctx);
	INST_RETURN();
label_6:;
	{
	LINE_NUMBER(381);
	if ((frame[4].i) != (frame[8].i)) goto label_7;
	}
	{
	if ((frame[5].i) != (frame[9].i)) goto label_7;
	}
	{
	LINE_NUMBER(385);
	frame[18].i = (frame[3].i);
	frame[19].i = (frame[7].i);
	LINE_NUMBER(387);
	if ((frame[11].i) == 0) goto label_11;
	}
label_12:;
	{
	LINE_NUMBER(388);
	if ((frame[18].i) >= ((frame[3].i) + (frame[5].i))) goto label_13;
	}
	{
	LINE_NUMBER(389);
	if ((frame[18].i) < 0) goto label_15;
	}
	INST_ILOAD(19);
	if ((--sp)->i >= 0) goto label_16;
	goto label_15;
label_16:;
	{
	LINE_NUMBER(390);
	if ((frame[18].i) >= (frame[15].i)) goto label_13;
	}
	{
	if ((frame[19].i) < (frame[13].i)) goto label_17;
	}
	goto label_13;
label_17:;
	{
	LINE_NUMBER(392);
	frame[16].i = (frame[2].i);
	frame[17].i = (frame[6].i);
	}
label_19:;
	{
	if ((frame[16].i) >= ((frame[2].i) + (frame[4].i))) goto label_15;
	}
	{
	LINE_NUMBER(393);
	if ((frame[16].i) < 0) goto label_21;
	}
	INST_ILOAD(17);
	if ((--sp)->i >= 0) goto label_22;
	goto label_21;
label_22:;
	{
	LINE_NUMBER(394);
	if ((frame[16].i) >= (frame[14].i)) goto label_15;
	}
	{
	if ((frame[17].i) < (frame[12].i)) goto label_23;
	}
	goto label_15;
label_23:;
	{
	LINE_NUMBER(395);
	sp[0].o = frame[0].o;
	jint temp0 = frame[17].i;
	jint temp1 = frame[19].i;
	jint temp2 = (jint)((func_arc_graphics_Pixmap_getRaw_int_int_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_graphics_Pixmap_getRaw_int_int_R_int])(ctx, (frame[1].o), (frame[16].i), (frame[18].i));
	jint temp3 = (jint)((func_arc_graphics_Pixmap_getRaw_int_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_Pixmap_getRaw_int_int_R_int])(ctx, (frame[0].o), (frame[17].i), (frame[19].i));
	jint temp4 = (jint)SM_arc_graphics_Pixmap_blend_int_int_R_int(ctx, temp2, temp3);
	((func_arc_graphics_Pixmap_setRaw_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Pixmap_setRaw_int_int_int])(ctx, sp[0].o, temp0, temp1, temp4);
	}
label_21:;
	{
	LINE_NUMBER(392);
	INST_IINC(16, 1);
	INST_IINC(17, 1);
	goto label_19;
	}
label_15:;
	{
	LINE_NUMBER(388);
	INST_IINC(18, 1);
	INST_IINC(19, 1);
	goto label_12;
	}
label_11:;
	{
	LINE_NUMBER(398);
	sp[0].o = (jobject)((arc_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_pixels;
	sp[1].o = (jobject)((arc_graphics_Pixmap *) NULL_CHECK((frame[1].o)))->F_pixels;
	if (sp[0].o == sp[1].o) goto label_24;
	}
	{
	LINE_NUMBER(399);
	sp[0].o = (jobject)((arc_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_pixels;
	frame[20].o = sp[0].o;
	sp[0].o = (jobject)((arc_graphics_Pixmap *) NULL_CHECK((frame[1].o)))->F_pixels;
	frame[21].o = sp[0].o;
	LINE_NUMBER(401);
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (frame[7].i), (jint(0)));
	frame[22].i = temp0;
	LINE_NUMBER(402);
	jint temp1 = frame[7].i;
	jint temp2 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, (frame[9].i), (frame[15].i));
	jint temp3 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, (temp1 + temp2), (frame[13].i));
	jint temp4 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp3, (((frame[7].i) - (frame[3].i)) + (frame[15].i)));
	frame[23].i = temp4;
	LINE_NUMBER(403);
	jint temp5 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (frame[6].i), (jint(0)));
	frame[24].i = temp5;
	LINE_NUMBER(404);
	jint temp6 = frame[6].i;
	jint temp7 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, (frame[8].i), (frame[14].i));
	jint temp8 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, (temp6 + temp7), (frame[12].i));
	jint temp9 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp8, (((frame[6].i) - (frame[2].i)) + (frame[14].i)));
	frame[25].i = temp9;
	LINE_NUMBER(405);
	frame[26].i = ((frame[7].i) - (frame[3].i));
	LINE_NUMBER(406);
	jint temp10 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (frame[2].i), (-(frame[6].i)));
	jint temp11 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, temp10, (jint(0)));
	frame[27].i = temp11;
	LINE_NUMBER(407);
	frame[28].i = (((frame[25].i) - (frame[24].i)) * (jint(4)));
	}
label_34:;
	{
	LINE_NUMBER(409);
	if ((frame[22].i) >= (frame[23].i)) goto label_35;
	}
	{
	LINE_NUMBER(410);
	SM_arc_graphics_Pixmap_copyMem_java_nio_ByteBuffer_int_java_nio_ByteBuffer_int_int(ctx, (frame[21].o), (((((frame[22].i) - (frame[26].i)) * (frame[14].i)) + (frame[27].i)) * (jint(4))), (frame[20].o), ((((frame[22].i) * (frame[12].i)) + (frame[24].i)) * (jint(4))), (frame[28].i));
	LINE_NUMBER(417);
	INST_IINC(22, 1);
	goto label_34;
	}
label_35:;
	LINE_NUMBER(419);
	goto label_13;
label_24:;
	{
	LINE_NUMBER(420);
	if ((frame[18].i) >= ((frame[3].i) + (frame[5].i))) goto label_13;
	}
	{
	LINE_NUMBER(421);
	if ((frame[18].i) < 0) goto label_39;
	}
	INST_ILOAD(19);
	if ((--sp)->i >= 0) goto label_40;
	goto label_39;
label_40:;
	{
	LINE_NUMBER(422);
	if ((frame[18].i) >= (frame[15].i)) goto label_13;
	}
	{
	if ((frame[19].i) < (frame[13].i)) goto label_41;
	}
	goto label_13;
label_41:;
	{
	LINE_NUMBER(424);
	frame[16].i = (frame[2].i);
	frame[17].i = (frame[6].i);
	}
label_43:;
	{
	if ((frame[16].i) >= ((frame[2].i) + (frame[4].i))) goto label_39;
	}
	{
	LINE_NUMBER(425);
	if ((frame[16].i) < 0) goto label_45;
	}
	INST_ILOAD(17);
	if ((--sp)->i >= 0) goto label_46;
	goto label_45;
label_46:;
	{
	LINE_NUMBER(426);
	if ((frame[16].i) >= (frame[14].i)) goto label_39;
	}
	{
	if ((frame[17].i) < (frame[12].i)) goto label_47;
	}
	goto label_39;
label_47:;
	{
	LINE_NUMBER(427);
	sp[0].o = frame[0].o;
	jint temp0 = frame[17].i;
	jint temp1 = frame[19].i;
	jint temp2 = (jint)((func_arc_graphics_Pixmap_getRaw_int_int_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_graphics_Pixmap_getRaw_int_int_R_int])(ctx, (frame[1].o), (frame[16].i), (frame[18].i));
	((func_arc_graphics_Pixmap_setRaw_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Pixmap_setRaw_int_int_int])(ctx, sp[0].o, temp0, temp1, temp2);
	}
label_45:;
	{
	LINE_NUMBER(424);
	INST_IINC(16, 1);
	INST_IINC(17, 1);
	goto label_43;
	}
label_39:;
	{
	LINE_NUMBER(420);
	INST_IINC(18, 1);
	INST_IINC(19, 1);
	goto label_24;
	}
label_13:;
	LINE_NUMBER(431);
	goto label_48;
label_7:;
	{
	LINE_NUMBER(432);
	if ((frame[10].i) == 0) goto label_49;
	}
	{
	LINE_NUMBER(434);
	frame[16].f = (((jfloat((frame[4].i))) - (jfloat(1))) / (jfloat((frame[8].i))));
	LINE_NUMBER(435);
	frame[17].f = (((jfloat((frame[5].i))) - (jfloat(1))) / (jfloat((frame[9].i))));
	LINE_NUMBER(436);
	jint temp0 = (jint)SM_arc_math_Mathf_round_float_R_int(ctx, (frame[16].f));
	jint temp1 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, temp0, (jint(1)));
	frame[18].i = temp1;
	jint temp2 = (jint)SM_arc_math_Mathf_round_float_R_int(ctx, (frame[17].f));
	jint temp3 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, temp2, (jint(1)));
	frame[19].i = temp3;
	LINE_NUMBER(438);
	frame[22].i = ((jint(4)) * (frame[14].i));
	LINE_NUMBER(439);
	frame[27].i = (jint(0));
	LINE_NUMBER(440);
	sp[0].o = (jobject)((arc_graphics_Pixmap *) NULL_CHECK((frame[1].o)))->F_pixels;
	frame[29].o = sp[0].o;
	}
label_57:;
	{
	LINE_NUMBER(442);
	if ((frame[27].i) >= (frame[9].i)) goto label_58;
	}
	{
	LINE_NUMBER(443);
	frame[26].i = ((jint(((jfloat((frame[27].i))) * (frame[17].f)))) + (frame[3].i));
	LINE_NUMBER(444);
	frame[24].i = ((frame[27].i) + (frame[7].i));
	LINE_NUMBER(445);
	frame[21].f = ((((frame[17].f) * (jfloat((frame[27].i)))) + (jfloat((frame[3].i)))) - (jfloat((frame[26].i))));
	LINE_NUMBER(446);
	if ((frame[26].i) < 0) goto label_63;
	}
	INST_ILOAD(24);
	if ((--sp)->i >= 0) goto label_64;
	goto label_63;
label_64:;
	{
	LINE_NUMBER(447);
	if ((frame[26].i) >= (frame[15].i)) goto label_58;
	}
	{
	if ((frame[24].i) < (frame[13].i)) goto label_65;
	}
	goto label_58;
label_65:;
	{
	LINE_NUMBER(449);
	frame[28].i = (jint(0));
	}
label_66:;
	{
	if ((frame[28].i) >= (frame[8].i)) goto label_63;
	}
	{
	LINE_NUMBER(450);
	frame[25].i = ((jint(((jfloat((frame[28].i))) * (frame[16].f)))) + (frame[2].i));
	LINE_NUMBER(451);
	frame[23].i = ((frame[28].i) + (frame[6].i));
	LINE_NUMBER(452);
	frame[20].f = ((((frame[16].f) * (jfloat((frame[28].i)))) + (jfloat((frame[2].i)))) - (jfloat((frame[25].i))));
	LINE_NUMBER(453);
	if ((frame[25].i) < 0) goto label_71;
	}
	INST_ILOAD(23);
	if ((--sp)->i >= 0) goto label_72;
	goto label_71;
label_72:;
	{
	LINE_NUMBER(454);
	if ((frame[25].i) >= (frame[14].i)) goto label_63;
	}
	{
	if ((frame[23].i) < (frame[12].i)) goto label_73;
	}
	goto label_63;
label_73:;
	{
	LINE_NUMBER(457);
	frame[30].i = (((frame[25].i) + ((frame[26].i) * (frame[14].i))) * (jint(4)));
	LINE_NUMBER(458);
	jint temp0 = (jint)((func_java_nio_ByteBuffer_getInt_int_R_int) ((void **) nullCheck(ctx, (frame[29].o))->vtable)[VTABLE_java_nio_ByteBuffer_getInt_int_R_int])(ctx, (frame[29].o), (frame[30].i));
	frame[31].i = temp0;
	LINE_NUMBER(459);
	if (((frame[25].i) + (frame[18].i)) >= (frame[4].i)) goto label_76;
	}
	{
	jint temp0 = (jint)((func_java_nio_ByteBuffer_getInt_int_R_int) ((void **) nullCheck(ctx, (frame[29].o))->vtable)[VTABLE_java_nio_ByteBuffer_getInt_int_R_int])(ctx, (frame[29].o), ((frame[30].i) + ((jint(4)) * (frame[18].i))));
	sp[0].i = temp0;
	sp += 1;
	goto label_77;
	}
label_76:;
	INST_ILOAD(31);
label_77:;
	{
	sp -= 1;
	frame[32].i = sp[0].i;
	LINE_NUMBER(460);
	if (((frame[26].i) + (frame[19].i)) >= (frame[5].i)) goto label_79;
	}
	{
	jint temp0 = (jint)((func_java_nio_ByteBuffer_getInt_int_R_int) ((void **) nullCheck(ctx, (frame[29].o))->vtable)[VTABLE_java_nio_ByteBuffer_getInt_int_R_int])(ctx, (frame[29].o), ((frame[30].i) + ((frame[22].i) * (frame[19].i))));
	sp[0].i = temp0;
	sp += 1;
	goto label_80;
	}
label_79:;
	INST_ILOAD(31);
label_80:;
	{
	sp -= 1;
	frame[33].i = sp[0].i;
	LINE_NUMBER(461);
	if (((frame[25].i) + (frame[18].i)) >= (frame[4].i)) goto label_82;
	}
	{
	if (((frame[26].i) + (frame[19].i)) >= (frame[5].i)) goto label_82;
	}
	{
	jint temp0 = (jint)((func_java_nio_ByteBuffer_getInt_int_R_int) ((void **) nullCheck(ctx, (frame[29].o))->vtable)[VTABLE_java_nio_ByteBuffer_getInt_int_R_int])(ctx, (frame[29].o), (((frame[30].i) + ((jint(4)) * (frame[18].i))) + ((frame[22].i) * (frame[19].i))));
	sp[0].i = temp0;
	sp += 1;
	goto label_83;
	}
label_82:;
	INST_ILOAD(31);
label_83:;
	{
	sp -= 1;
	frame[34].i = sp[0].i;
	LINE_NUMBER(463);
	frame[35].f = (((jfloat(1)) - (frame[20].f)) * ((jfloat(1)) - (frame[21].f)));
	LINE_NUMBER(464);
	frame[36].f = ((frame[20].f) * ((jfloat(1)) - (frame[21].f)));
	LINE_NUMBER(465);
	frame[37].f = (((jfloat(1)) - (frame[20].f)) * (frame[21].f));
	LINE_NUMBER(466);
	frame[38].f = ((frame[20].f) * (frame[21].f));
	LINE_NUMBER(468);
	frame[39].i = ((jint((((((jfloat((bit_cast<jint>(bit_cast<uint32_t>(((frame[31].i) & (jint(-16777216)))) >> (24))))) * (frame[35].f)) + ((jfloat((bit_cast<jint>(bit_cast<uint32_t>(((frame[32].i) & (jint(-16777216)))) >> (24))))) * (frame[36].f))) + ((jfloat((bit_cast<jint>(bit_cast<uint32_t>(((frame[33].i) & (jint(-16777216)))) >> (24))))) * (frame[37].f))) + ((jfloat((bit_cast<jint>(bit_cast<uint32_t>(((frame[34].i) & (jint(-16777216)))) >> (24))))) * (frame[38].f))))) & (255));
	LINE_NUMBER(469);
	frame[40].i = ((jint((((((jfloat((bit_cast<jint>(bit_cast<uint32_t>(((frame[31].i) & (jint(16711680)))) >> (16))))) * (frame[35].f)) + ((jfloat((bit_cast<jint>(bit_cast<uint32_t>(((frame[32].i) & (jint(16711680)))) >> (16))))) * (frame[36].f))) + ((jfloat((bit_cast<jint>(bit_cast<uint32_t>(((frame[33].i) & (jint(16711680)))) >> (16))))) * (frame[37].f))) + ((jfloat((bit_cast<jint>(bit_cast<uint32_t>(((frame[34].i) & (jint(16711680)))) >> (16))))) * (frame[38].f))))) & (255));
	LINE_NUMBER(470);
	frame[41].i = ((jint((((((jfloat((bit_cast<jint>(bit_cast<uint32_t>(((frame[31].i) & (jint(65280)))) >> (8))))) * (frame[35].f)) + ((jfloat((bit_cast<jint>(bit_cast<uint32_t>(((frame[32].i) & (jint(65280)))) >> (8))))) * (frame[36].f))) + ((jfloat((bit_cast<jint>(bit_cast<uint32_t>(((frame[33].i) & (jint(65280)))) >> (8))))) * (frame[37].f))) + ((jfloat((bit_cast<jint>(bit_cast<uint32_t>(((frame[34].i) & (jint(65280)))) >> (8))))) * (frame[38].f))))) & (255));
	LINE_NUMBER(471);
	frame[42].i = ((jint((((((jfloat(((frame[31].i) & (255)))) * (frame[35].f)) + ((jfloat(((frame[32].i) & (255)))) * (frame[36].f))) + ((jfloat(((frame[33].i) & (255)))) * (frame[37].f))) + ((jfloat(((frame[34].i) & (255)))) * (frame[38].f))))) & (255));
	LINE_NUMBER(472);
	frame[43].i = (((((frame[39].i) << (24)) | ((frame[40].i) << (16))) | ((frame[41].i) << (8))) | (frame[42].i));
	LINE_NUMBER(474);
	sp[0].o = frame[0].o;
	jint temp0 = frame[23].i;
	jint temp1 = frame[24].i;
	sp[1].i = temp0;
	sp[2].i = temp1;
	sp += 3;
	if ((frame[11].i) != 0) goto label_94;
	}
	INST_ILOAD(43);
	goto label_95;
label_94:;
	{
	jint temp0 = frame[43].i;
	jint temp1 = (jint)((func_arc_graphics_Pixmap_getRaw_int_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_Pixmap_getRaw_int_int_R_int])(ctx, (frame[0].o), (frame[23].i), (frame[24].i));
	jint temp2 = (jint)SM_arc_graphics_Pixmap_blend_int_int_R_int(ctx, temp0, temp1);
	sp[0].i = temp2;
	sp += 1;
	}
label_95:;
	POP_N(4); // Pop method args
	((func_arc_graphics_Pixmap_setRaw_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Pixmap_setRaw_int_int_int])(ctx, sp[0].o, sp[1].i, sp[2].i, sp[3].i);
label_71:;
	{
	LINE_NUMBER(449);
	INST_IINC(28, 1);
	goto label_66;
	}
label_63:;
	{
	LINE_NUMBER(442);
	INST_IINC(27, 1);
	goto label_57;
	}
label_58:;
	LINE_NUMBER(477);
	goto label_48;
label_49:;
	{
	LINE_NUMBER(479);
	frame[16].i = ((((frame[4].i) << (16)) / (frame[8].i)) + (jint(1)));
	LINE_NUMBER(480);
	frame[17].i = ((((frame[5].i) << (16)) / (frame[9].i)) + (jint(1)));
	LINE_NUMBER(483);
	frame[22].i = (jint(0));
	}
label_98:;
	{
	if ((frame[22].i) >= (frame[9].i)) goto label_48;
	}
	{
	LINE_NUMBER(484);
	frame[21].i = ((((frame[22].i) * (frame[17].i)) >> (16)) + (frame[3].i));
	LINE_NUMBER(485);
	frame[19].i = ((frame[22].i) + (frame[7].i));
	LINE_NUMBER(486);
	if ((frame[21].i) < 0) goto label_102;
	}
	INST_ILOAD(19);
	if ((--sp)->i >= 0) goto label_103;
	goto label_102;
label_103:;
	{
	LINE_NUMBER(487);
	if ((frame[21].i) >= (frame[15].i)) goto label_48;
	}
	{
	if ((frame[19].i) < (frame[13].i)) goto label_104;
	}
	goto label_48;
label_104:;
	{
	LINE_NUMBER(489);
	frame[23].i = (jint(0));
	}
label_105:;
	{
	if ((frame[23].i) >= (frame[8].i)) goto label_102;
	}
	{
	LINE_NUMBER(490);
	frame[20].i = ((((frame[23].i) * (frame[16].i)) >> (16)) + (frame[2].i));
	LINE_NUMBER(491);
	frame[18].i = ((frame[23].i) + (frame[6].i));
	LINE_NUMBER(492);
	if ((frame[20].i) < 0) goto label_109;
	}
	INST_ILOAD(18);
	if ((--sp)->i >= 0) goto label_110;
	goto label_109;
label_110:;
	{
	LINE_NUMBER(493);
	if ((frame[20].i) >= (frame[14].i)) goto label_102;
	}
	{
	if ((frame[18].i) < (frame[12].i)) goto label_111;
	}
	goto label_102;
label_111:;
	{
	LINE_NUMBER(495);
	sp[0].o = frame[0].o;
	jint temp0 = frame[18].i;
	jint temp1 = frame[19].i;
	sp[1].i = temp0;
	sp[2].i = temp1;
	sp += 3;
	if ((frame[11].i) != 0) goto label_112;
	}
	{
	jint temp0 = (jint)((func_arc_graphics_Pixmap_getRaw_int_int_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_graphics_Pixmap_getRaw_int_int_R_int])(ctx, (frame[1].o), (frame[20].i), (frame[21].i));
	sp[0].i = temp0;
	sp += 1;
	goto label_113;
	}
label_112:;
	{
	jint temp0 = (jint)((func_arc_graphics_Pixmap_getRaw_int_int_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_graphics_Pixmap_getRaw_int_int_R_int])(ctx, (frame[1].o), (frame[20].i), (frame[21].i));
	jint temp1 = (jint)((func_arc_graphics_Pixmap_getRaw_int_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_Pixmap_getRaw_int_int_R_int])(ctx, (frame[0].o), (frame[18].i), (frame[19].i));
	jint temp2 = (jint)SM_arc_graphics_Pixmap_blend_int_int_R_int(ctx, temp0, temp1);
	sp[0].i = temp2;
	sp += 1;
	}
label_113:;
	POP_N(4); // Pop method args
	((func_arc_graphics_Pixmap_setRaw_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Pixmap_setRaw_int_int_int])(ctx, sp[0].o, sp[1].i, sp[2].i, sp[3].i);
label_109:;
	{
	LINE_NUMBER(489);
	INST_IINC(23, 1);
	goto label_105;
	}
label_102:;
	{
	LINE_NUMBER(483);
	INST_IINC(22, 1);
	goto label_98;
	}
label_48:;
	LINE_NUMBER(500);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_graphics_Pixmap_fillRect_int_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Pixmap:fillRect", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(511);
	frame[6].i = (((frame[1].i) + (frame[3].i)) - (jint(1)));
	LINE_NUMBER(512);
	frame[7].i = (((frame[2].i) + (frame[4].i)) - (jint(1)));
	LINE_NUMBER(514);
	if ((frame[1].i) < ((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_width)) goto label_3;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(515);
	if ((frame[2].i) < ((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_height)) goto label_4;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_4:;
	{
	LINE_NUMBER(516);
	if ((frame[6].i) >= 0) goto label_5;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_5:;
	{
	LINE_NUMBER(517);
	if ((frame[7].i) >= 0) goto label_6;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_6:;
	{
	LINE_NUMBER(518);
	if ((frame[1].i) >= 0) goto label_7;
	}
	INST_ICONST(0);
	INST_ISTORE(1);
label_7:;
	{
	LINE_NUMBER(519);
	if ((frame[2].i) >= 0) goto label_8;
	}
	INST_ICONST(0);
	INST_ISTORE(2);
label_8:;
	{
	LINE_NUMBER(520);
	if ((frame[6].i) < ((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_width)) goto label_9;
	}
	{
	frame[6].i = (((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_width) - (jint(1)));
	}
label_9:;
	{
	LINE_NUMBER(521);
	if ((frame[7].i) < ((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_height)) goto label_10;
	}
	{
	frame[7].i = (((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_height) - (jint(1)));
	}
label_10:;
	LINE_NUMBER(523);
	INST_IINC(7, 1);
label_11:;
	{
	LINE_NUMBER(524);
	if ((frame[2].i) == (frame[7].i)) goto label_12;
	}
	{
	LINE_NUMBER(525);
	((func_arc_graphics_Pixmap_hline_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_Pixmap_hline_int_int_int_int])(ctx, (frame[0].o), (frame[1].i), (frame[6].i), (frame[2].i), (frame[5].i));
	LINE_NUMBER(526);
	INST_IINC(2, 1);
	goto label_11;
	}
label_12:;
	LINE_NUMBER(528);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_graphics_Pixmap_fillCircle_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Pixmap:fillCircle", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(535);
	frame[5].i = ((jint(1)) - (frame[3].i));
	LINE_NUMBER(536);
	frame[6].i = (jint(1));
	LINE_NUMBER(537);
	frame[7].i = ((-2) * (frame[3].i));
	LINE_NUMBER(538);
	frame[8].i = (jint(0));
	LINE_NUMBER(539);
	frame[9].i = (frame[3].i);
	LINE_NUMBER(541);
	((func_arc_graphics_Pixmap_hline_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_Pixmap_hline_int_int_int_int])(ctx, (frame[0].o), (frame[1].i), (frame[1].i), ((frame[2].i) + (frame[3].i)), (frame[4].i));
	LINE_NUMBER(542);
	((func_arc_graphics_Pixmap_hline_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_Pixmap_hline_int_int_int_int])(ctx, (frame[0].o), (frame[1].i), (frame[1].i), ((frame[2].i) - (frame[3].i)), (frame[4].i));
	LINE_NUMBER(543);
	((func_arc_graphics_Pixmap_hline_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_Pixmap_hline_int_int_int_int])(ctx, (frame[0].o), ((frame[1].i) - (frame[3].i)), ((frame[1].i) + (frame[3].i)), (frame[2].i), (frame[4].i));
	}
label_8:;
	{
	LINE_NUMBER(545);
	if ((frame[8].i) >= (frame[9].i)) goto label_9;
	}
	{
	LINE_NUMBER(546);
	if ((frame[5].i) < 0) goto label_11;
	}
	{
	LINE_NUMBER(547);
	INST_IINC(9, -1);
	LINE_NUMBER(548);
	INST_IINC(7, 2);
	LINE_NUMBER(549);
	frame[5].i = ((frame[5].i) + (frame[7].i));
	}
label_11:;
	{
	LINE_NUMBER(551);
	INST_IINC(8, 1);
	LINE_NUMBER(552);
	INST_IINC(6, 2);
	LINE_NUMBER(553);
	frame[5].i = ((frame[5].i) + (frame[6].i));
	LINE_NUMBER(554);
	((func_arc_graphics_Pixmap_hline_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_Pixmap_hline_int_int_int_int])(ctx, (frame[0].o), ((frame[1].i) - (frame[8].i)), ((frame[1].i) + (frame[8].i)), ((frame[2].i) + (frame[9].i)), (frame[4].i));
	LINE_NUMBER(555);
	((func_arc_graphics_Pixmap_hline_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_Pixmap_hline_int_int_int_int])(ctx, (frame[0].o), ((frame[1].i) - (frame[8].i)), ((frame[1].i) + (frame[8].i)), ((frame[2].i) - (frame[9].i)), (frame[4].i));
	LINE_NUMBER(556);
	((func_arc_graphics_Pixmap_hline_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_Pixmap_hline_int_int_int_int])(ctx, (frame[0].o), ((frame[1].i) - (frame[9].i)), ((frame[1].i) + (frame[9].i)), ((frame[2].i) + (frame[8].i)), (frame[4].i));
	LINE_NUMBER(557);
	((func_arc_graphics_Pixmap_hline_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_Pixmap_hline_int_int_int_int])(ctx, (frame[0].o), ((frame[1].i) - (frame[9].i)), ((frame[1].i) + (frame[9].i)), ((frame[2].i) - (frame[8].i)), (frame[4].i));
	goto label_8;
	}
label_9:;
	LINE_NUMBER(559);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_arc_graphics_Pixmap_get_int_int_R_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Pixmap:get", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(563);
	jint temp0 = (jint)((func_arc_graphics_Pixmap_in_int_int_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_Pixmap_in_int_int_R_boolean])(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((arc_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_pixels;
	jint temp0 = (jint)((func_java_nio_ByteBuffer_getInt_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_getInt_int_R_int])(ctx, sp[0].o, (((frame[1].i) + ((frame[2].i) * ((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_width))) * (jint(4))));
	sp[0].i = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint M_arc_graphics_Pixmap_getClamp_int_int_R_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Pixmap:getClamp", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(568);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, (frame[1].i), (((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_width) - (jint(1))));
	jint temp1 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, temp0, (jint(0)));
	jint temp2 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, (frame[2].i), (((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_height) - (jint(1))));
	jint temp3 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, temp2, (jint(0)));
	jint temp4 = (jint)((func_arc_graphics_Pixmap_getRaw_int_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Pixmap_getRaw_int_int_R_int])(ctx, sp[0].o, temp1, temp3);
	popStackFrame(ctx);
	return temp4;
	}

	popStackFrame(ctx);
}

jint M_arc_graphics_Pixmap_getRaw_int_int_R_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Pixmap:getRaw", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(573);
	sp[0].o = (jobject)((arc_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_pixels;
	jint temp0 = (jint)((func_java_nio_ByteBuffer_getInt_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_getInt_int_R_int])(ctx, sp[0].o, (((frame[1].i) + ((frame[2].i) * ((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_width))) * (jint(4))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_arc_graphics_Pixmap_getA_int_int_R_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Pixmap:getA", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(578);
	sp[0].o = (jobject)((arc_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_pixels;
	jint temp0 = (jint)((func_java_nio_ByteBuffer_get_int_R_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_get_int_R_byte])(ctx, sp[0].o, ((((frame[1].i) + ((frame[2].i) * ((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_width))) * (jint(4))) + (jint(3))));
	popStackFrame(ctx);
	return (temp0 & (255));
	}

	popStackFrame(ctx);
}

jbool M_arc_graphics_Pixmap_empty_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Pixmap:empty", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(583);
	sp[0].o = (jobject)((arc_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_pixels;
	jint temp0 = (jint)((func_java_nio_ByteBuffer_get_int_R_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_get_int_R_byte])(ctx, sp[0].o, ((((frame[1].i) + ((frame[2].i) * ((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_width))) * (jint(4))) + (jint(3))));
	if (temp0 != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint M_arc_graphics_Pixmap_getWidth_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Pixmap:getWidth", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(588);
	popStackFrame(ctx);
	return ((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_width);
	}

	popStackFrame(ctx);
}

jint M_arc_graphics_Pixmap_getHeight_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Pixmap:getHeight", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(593);
	popStackFrame(ctx);
	return ((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_height);
	}

	popStackFrame(ctx);
}

void M_arc_graphics_Pixmap_dispose(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Pixmap:dispose", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(599);
	if ((longCompare(((jlong)((arc_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_handle), (jlong(0)))) > 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(600);
	SM_arc_graphics_Pixmap_free_long(ctx, ((jlong)((arc_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_handle));
	LINE_NUMBER(601);
	((arc_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_handle = (jlong(0));
	LINE_NUMBER(602);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_graphics_Pixmap_isDisposed_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Pixmap:isDisposed", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(606);
	if ((longCompare(((jlong)((arc_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_handle), (jlong(0)))) != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_arc_graphics_Pixmap_set_int_int_arc_graphics_Color(jcontext ctx, jobject self, jint param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Pixmap:set", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(610);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	jint temp1 = frame[2].i;
	jint temp2 = (jint)((func_arc_graphics_Color_rgba_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_graphics_Color_rgba_R_int])(ctx, (frame[3].o));
	((func_arc_graphics_Pixmap_set_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Pixmap_set_int_int_int])(ctx, sp[0].o, temp0, temp1, temp2);
	LINE_NUMBER(611);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_Pixmap_set_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Pixmap:set", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(618);
	jint temp0 = (jint)((func_arc_graphics_Pixmap_in_int_int_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_Pixmap_in_int_int_R_boolean])(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(619);
	sp[0].o = (jobject)((arc_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_pixels;
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_putInt_int_int_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_putInt_int_int_R_java_nio_ByteBuffer])(ctx, sp[0].o, (((frame[1].i) + ((frame[2].i) * ((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_width))) * (jint(4))), (frame[3].i));
	}
label_1:;
	LINE_NUMBER(621);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_graphics_Pixmap_setRaw_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Pixmap:setRaw", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(628);
	sp[0].o = (jobject)((arc_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_pixels;
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_putInt_int_int_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_putInt_int_int_R_java_nio_ByteBuffer])(ctx, sp[0].o, (((frame[1].i) + ((frame[2].i) * ((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_width))) * (jint(4))), (frame[3].i));
	LINE_NUMBER(629);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_arc_graphics_Pixmap_getGLFormat_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Pixmap:getGLFormat", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(637);
	popStackFrame(ctx);
	return (6408);
	}

	popStackFrame(ctx);
}

jint M_arc_graphics_Pixmap_getGLInternalFormat_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Pixmap:getGLInternalFormat", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(646);
	popStackFrame(ctx);
	return (6408);
	}

	popStackFrame(ctx);
}

jint M_arc_graphics_Pixmap_getGLType_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Pixmap:getGLType", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(655);
	popStackFrame(ctx);
	return (5121);
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_Pixmap_getPixels_R_java_nio_ByteBuffer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Pixmap:getPixels", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(660);
	if ((longCompare(((jlong)((arc_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_handle), (jlong(0)))) != 0) goto label_1;
	}
	{
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Pixmap already disposed"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(661);
	sp[0].o = (jobject)((arc_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_pixels;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_Pixmap_hline_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Pixmap:hline", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(665);
	if ((frame[3].i) < 0) goto label_1;
	}
	{
	if ((frame[3].i) < ((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_height)) goto label_2;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(668);
	if ((frame[1].i) <= (frame[2].i)) goto label_3;
	}
	{
	LINE_NUMBER(669);
	frame[5].i = (frame[1].i);
	LINE_NUMBER(670);
	frame[1].i = (frame[2].i);
	LINE_NUMBER(671);
	frame[2].i = (frame[5].i);
	}
label_3:;
	{
	LINE_NUMBER(674);
	if ((frame[1].i) < ((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_width)) goto label_7;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_7:;
	{
	LINE_NUMBER(675);
	if ((frame[2].i) >= 0) goto label_8;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_8:;
	{
	LINE_NUMBER(677);
	if ((frame[1].i) >= 0) goto label_9;
	}
	INST_ICONST(0);
	INST_ISTORE(1);
label_9:;
	{
	LINE_NUMBER(678);
	if ((frame[2].i) < ((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_width)) goto label_10;
	}
	{
	frame[2].i = (((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_width) - (jint(1)));
	}
label_10:;
	LINE_NUMBER(679);
	INST_IINC(2, 1);
label_11:;
	{
	LINE_NUMBER(681);
	if ((frame[1].i) == (frame[2].i)) goto label_12;
	}
	{
	LINE_NUMBER(682);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	INST_IINC(1, 1);
	((func_arc_graphics_Pixmap_setRaw_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Pixmap_setRaw_int_int_int])(ctx, sp[0].o, temp0, (frame[3].i), (frame[4].i));
	goto label_11;
	}
label_12:;
	LINE_NUMBER(684);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_graphics_Pixmap_vline_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Pixmap:vline", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(687);
	if ((frame[3].i) < 0) goto label_1;
	}
	{
	if ((frame[3].i) < ((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_width)) goto label_2;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(690);
	if ((frame[1].i) <= (frame[2].i)) goto label_3;
	}
	{
	LINE_NUMBER(691);
	frame[5].i = (frame[1].i);
	LINE_NUMBER(692);
	frame[1].i = (frame[2].i);
	LINE_NUMBER(693);
	frame[2].i = (frame[5].i);
	}
label_3:;
	{
	LINE_NUMBER(696);
	if ((frame[1].i) < ((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_height)) goto label_7;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_7:;
	{
	LINE_NUMBER(697);
	if ((frame[2].i) >= 0) goto label_8;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_8:;
	{
	LINE_NUMBER(699);
	if ((frame[1].i) >= 0) goto label_9;
	}
	INST_ICONST(0);
	INST_ISTORE(1);
label_9:;
	{
	LINE_NUMBER(700);
	if ((frame[2].i) < ((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_height)) goto label_10;
	}
	{
	frame[2].i = (((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_height) - (jint(1)));
	}
label_10:;
	LINE_NUMBER(701);
	INST_IINC(2, 1);
label_11:;
	{
	LINE_NUMBER(703);
	if ((frame[1].i) == (frame[2].i)) goto label_12;
	}
	{
	LINE_NUMBER(704);
	sp[0].o = frame[0].o;
	jint temp0 = frame[3].i;
	jint temp1 = frame[1].i;
	INST_IINC(1, 1);
	((func_arc_graphics_Pixmap_setRaw_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Pixmap_setRaw_int_int_int])(ctx, sp[0].o, temp0, temp1, (frame[4].i));
	goto label_11;
	}
label_12:;
	LINE_NUMBER(706);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint SM_arc_graphics_Pixmap_blend_int_int_R_int(jcontext ctx, jint param0, jint param1) {
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Pixmap:blend", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Pixmap(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(710);
	frame[2].i = ((frame[0].i) & (255));
	LINE_NUMBER(711);
	if ((frame[2].i) != 0) goto label_2;
	}
	INST_ILOAD(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(713);
	frame[3].i = ((frame[1].i) & (255));
	LINE_NUMBER(714);
	if ((frame[3].i) != 0) goto label_4;
	}
	INST_ILOAD(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
	{
	LINE_NUMBER(715);
	frame[4].i = ((bit_cast<jint>(bit_cast<uint32_t>((frame[1].i)) >> (8))) & (255));
	LINE_NUMBER(716);
	frame[5].i = ((bit_cast<jint>(bit_cast<uint32_t>((frame[1].i)) >> (16))) & (255));
	LINE_NUMBER(717);
	frame[6].i = ((bit_cast<jint>(bit_cast<uint32_t>((frame[1].i)) >> (24))) & (255));
	LINE_NUMBER(719);
	frame[3].i = ((frame[3].i) - (((frame[3].i) * (frame[2].i)) / (255)));
	LINE_NUMBER(720);
	frame[7].i = ((frame[3].i) + (frame[2].i));
	LINE_NUMBER(721);
	frame[6].i = ((((frame[6].i) * (frame[3].i)) + (((bit_cast<jint>(bit_cast<uint32_t>((frame[0].i)) >> (24))) & (255)) * (frame[2].i))) / (frame[7].i));
	LINE_NUMBER(722);
	frame[5].i = ((((frame[5].i) * (frame[3].i)) + (((bit_cast<jint>(bit_cast<uint32_t>((frame[0].i)) >> (16))) & (255)) * (frame[2].i))) / (frame[7].i));
	LINE_NUMBER(723);
	frame[4].i = ((((frame[4].i) * (frame[3].i)) + (((bit_cast<jint>(bit_cast<uint32_t>((frame[0].i)) >> (8))) & (255)) * (frame[2].i))) / (frame[7].i));
	LINE_NUMBER(724);
	popStackFrame(ctx);
	return (((((frame[6].i) << (24)) | ((frame[5].i) << (16))) | ((frame[4].i) << (8))) | (frame[7].i));
	}

	popStackFrame(ctx);
}

jbool SM_arc_graphics_Pixmap_empty_int_R_boolean(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Pixmap:empty", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Pixmap(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(728);
	if (((frame[0].i) & (255)) != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_arc_graphics_Pixmap_load_Array1_byte_int_int_java_lang_String(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Pixmap:load", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(733);
	if ((clinit_arc_util_ArcNativesLoader(ctx), (jint)SF_arc_util_ArcNativesLoader_loaded) == 0) goto label_9;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_arc_util_ArcRuntimeException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(736);
	sp[0].o = (jobject) createArray(ctx, &class_long, (jint(3)));
	frame[5].o = sp[0].o;
	LINE_NUMBER(737);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_arc_graphics_Pixmap_loadJni_Array1_long_Array1_byte_int_int_R_java_nio_ByteBuffer(ctx, (frame[5].o), (frame[1].o), (frame[2].i), (frame[3].i));
	((arc_graphics_Pixmap *) NULL_CHECK(sp[0].o))->F_pixels = (jref) sp[1].o;
	LINE_NUMBER(738);
	sp[0].o = (jobject)((arc_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_pixels;
	if (sp[0].o != nullptr) goto label_12;
	}
	{
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Error loading pixmap from image data: "_j))));
	sp[2].o = (jobject)SM_arc_graphics_Pixmap_getFailureReason_R_java_lang_String(ctx);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	jobject temp0 = sp[1].o;
	sp[1].o = sp[0].o;
	sp[2].o = temp0;
	sp += 3;
	if ((frame[4].o) != nullptr) goto label_14;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
	goto label_15;
label_14:;
	{
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" ("_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[4].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8")"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	}
label_15:;
	{
	sp -= 4;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, sp[3].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_12:;
	{
	LINE_NUMBER(740);
	((arc_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_handle = ((jlong)ARRAY_ACCESS(jlong, (frame[5].o), (jint(0))));
	LINE_NUMBER(741);
	((arc_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_width = (jint(((jlong)ARRAY_ACCESS(jlong, (frame[5].o), (jint(1))))));
	LINE_NUMBER(742);
	((arc_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_height = (jint(((jlong)ARRAY_ACCESS(jlong, (frame[5].o), (jint(2))))));
	LINE_NUMBER(743);
	sp[0].o = (jobject)((arc_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_pixels;
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_position_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_position_int_R_java_nio_Buffer])(ctx, sp[0].o, (jint(0)));
	sp[1].o = (jobject)((arc_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_pixels;
	jint temp0 = (jint)((func_java_nio_ByteBuffer_capacity_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_nio_ByteBuffer_capacity_R_int])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_nio_Buffer_limit_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_Buffer_limit_int_R_java_nio_Buffer])(ctx, sp[0].o, temp0);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(755);
	goto label_19;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(744);
	frame[5].o = sp[0].o;
	LINE_NUMBER(746);
	sp[0].o = (jobject)((func_arc_util_ArcRuntimeException_getMessage_R_java_lang_String) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_util_ArcRuntimeException_getMessage_R_java_lang_String])(ctx, (frame[5].o));
	if (sp[0].o == nullptr) goto label_21;
	}
	{
	sp[0].o = (jobject)((func_arc_util_ArcRuntimeException_getMessage_R_java_lang_String) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_util_ArcRuntimeException_getMessage_R_java_lang_String])(ctx, (frame[5].o));
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Corrupt JPEG"_j))));
	if (temp0 == 0) goto label_21;
	}
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	LINE_NUMBER(748);
	M_arc_graphics_Pixmap_loadJava_Array1_byte_int_int_java_lang_String(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].i), (frame[4].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(749);
	popStackFrame(ctx);
	INST_RETURN();
label_6:;
	LINE_NUMBER(750);
	INST_ASTORE(6);
label_21:;
	{
	LINE_NUMBER(754);
	throwException(ctx, (frame[5].o));	}
label_9:;
	{
	LINE_NUMBER(757);
	M_arc_graphics_Pixmap_loadJava_Array1_byte_int_int_java_lang_String(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].i), (frame[4].o));
	}
label_19:;
	LINE_NUMBER(759);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_graphics_Pixmap_loadJava_Array1_byte_int_int_java_lang_String(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Pixmap:loadJava", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].o = param3;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(764);
	clinit_arc_graphics_PixmapIO$PngReader(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_PixmapIO$PngReader);
	init_arc_graphics_PixmapIO$PngReader(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(765);
	sp[0].o = frame[0].o;
	sp[1].o = frame[5].o;
	clinit_java_io_ByteArrayInputStream(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_io_ByteArrayInputStream);
	init_java_io_ByteArrayInputStream_Array1_byte_int_int(ctx, sp[2].o, (frame[1].o), (frame[2].i), (frame[3].i));
	sp[1].o = (jobject)((func_arc_graphics_PixmapIO$PngReader_read_java_io_InputStream_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_PixmapIO$PngReader_read_java_io_InputStream_R_java_nio_ByteBuffer])(ctx, sp[1].o, sp[2].o);
	((arc_graphics_Pixmap *) NULL_CHECK(sp[0].o))->F_pixels = (jref) sp[1].o;
	LINE_NUMBER(766);
	((arc_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_width = ((jint)((arc_graphics_PixmapIO$PngReader *) NULL_CHECK((frame[5].o)))->F_width);
	LINE_NUMBER(767);
	((arc_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_height = ((jint)((arc_graphics_PixmapIO$PngReader *) NULL_CHECK((frame[5].o)))->F_height);
	LINE_NUMBER(768);
	((arc_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_handle = (jlong(-1ll));
	LINE_NUMBER(769);
	sp[0].o = (jobject)((arc_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_pixels;
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_position_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_position_int_R_java_nio_Buffer])(ctx, sp[0].o, (jint(0)));
	sp[1].o = (jobject)((arc_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_pixels;
	jint temp0 = (jint)((func_java_nio_ByteBuffer_capacity_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_nio_ByteBuffer_capacity_R_int])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_nio_Buffer_limit_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_Buffer_limit_int_R_java_nio_Buffer])(ctx, sp[0].o, temp0);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(772);
	goto label_9;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(770);
	frame[5].o = sp[0].o;
	LINE_NUMBER(771);
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Failed to load PNG data"_j))));
	jobject temp0 = sp[1].o;
	sp[1].o = sp[0].o;
	sp[2].o = temp0;
	sp += 3;
	if ((frame[4].o) != nullptr) goto label_11;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
	goto label_12;
label_11:;
	{
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" ("_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[4].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8")"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	}
label_12:;
	{
	sp -= 4;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, sp[3].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_arc_util_ArcRuntimeException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, sp[1].o, (frame[5].o));
	throwException(ctx, sp[0].o);	}
label_9:;
	LINE_NUMBER(773);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_graphics_Pixmap_load_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Pixmap:load", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(777);
	if ((clinit_arc_util_ArcNativesLoader(ctx), (jint)SF_arc_util_ArcNativesLoader_loaded) == 0) goto label_1;
	}
	{
	LINE_NUMBER(778);
	sp[0].o = (jobject) createArray(ctx, &class_long, (jint(3)));
	frame[3].o = sp[0].o;
	LINE_NUMBER(779);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_arc_graphics_Pixmap_createJni_Array1_long_int_int_R_java_nio_ByteBuffer(ctx, (frame[3].o), (frame[1].i), (frame[2].i));
	((arc_graphics_Pixmap *) NULL_CHECK(sp[0].o))->F_pixels = (jref) sp[1].o;
	LINE_NUMBER(780);
	sp[0].o = (jobject)((arc_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_pixels;
	if (sp[0].o != nullptr) goto label_5;
	}
	{
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Error creating pixmap (out of memory?)"_j))));
	throwException(ctx, sp[0].o);	}
label_5:;
	{
	LINE_NUMBER(781);
	sp[0].o = (jobject)((arc_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_pixels;
	sp[1].o = (jobject)((arc_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_pixels;
	jint temp0 = (jint)((func_java_nio_ByteBuffer_capacity_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_nio_ByteBuffer_capacity_R_int])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_limit_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_limit_int_R_java_nio_Buffer])(ctx, sp[0].o, temp0);
	LINE_NUMBER(783);
	((arc_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_handle = ((jlong)ARRAY_ACCESS(jlong, (frame[3].o), (jint(0))));
	LINE_NUMBER(784);
	((arc_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_width = (jint(((jlong)ARRAY_ACCESS(jlong, (frame[3].o), (jint(1))))));
	LINE_NUMBER(785);
	((arc_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_height = (jint(((jlong)ARRAY_ACCESS(jlong, (frame[3].o), (jint(2))))));
	LINE_NUMBER(786);
	goto label_10;
	}
label_1:;
	{
	LINE_NUMBER(788);
	((arc_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_handle = (jlong(-1ll));
	LINE_NUMBER(789);
	((arc_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_width = (frame[1].i);
	LINE_NUMBER(790);
	((arc_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_height = (frame[2].i);
	LINE_NUMBER(791);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_nio_ByteBuffer_allocateDirect_int_R_java_nio_ByteBuffer(ctx, (((frame[1].i) * (frame[2].i)) * (jint(4))));
	((arc_graphics_Pixmap *) NULL_CHECK(sp[0].o))->F_pixels = (jref) sp[1].o;
	}
label_10:;
	LINE_NUMBER(793);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_arc_graphics_Pixmap_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Pixmap:toString", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(797);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Pixmap:"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_width));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"x"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_height));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Pixmap_copyMem_java_nio_ByteBuffer_int_java_nio_ByteBuffer_int_int(jcontext ctx, jobject param0, jint param1, jobject param2, jint param3, jint param4) {
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Pixmap:copyMem", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Pixmap(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	{
	LINE_NUMBER(824);
	if ((clinit_arc_graphics_Pixmap(ctx), (jint)SF_arc_graphics_Pixmap_supportsBufferCopy) == 0) goto label_1;
	}
	{
	LINE_NUMBER(825);
	SM_arc_util_Java16Buffers_copy_java_nio_ByteBuffer_int_java_nio_ByteBuffer_int_int(ctx, (frame[0].o), (frame[1].i), (frame[2].o), (frame[3].i), (frame[4].i));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(827);
	if ((clinit_arc_util_OS(ctx), (jint)SF_arc_util_OS_isIos) != 0) goto label_4;
	}
	clinit_arc_util_UnsafeBuffers(ctx);
	(sp++)->i = SF_arc_util_UnsafeBuffers_failed;
	if ((--sp)->i != 0) goto label_4;
	{
	LINE_NUMBER(828);
	SM_arc_util_UnsafeBuffers_copy_java_nio_Buffer_int_java_nio_Buffer_int_int(ctx, (frame[0].o), (frame[1].i), (frame[2].o), (frame[3].i), (frame[4].i));
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(830);
	SM_arc_util_Buffers_copyJni_java_nio_Buffer_int_java_nio_Buffer_int_int(ctx, (frame[0].o), (frame[1].i), (frame[2].o), (frame[3].i), (frame[4].i));
	}
label_3:;
	LINE_NUMBER(833);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void clinit_arc_graphics_Pixmap(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Pixmap:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Pixmap(ctx);
	{
	LINE_NUMBER(32);
	if ((clinit_arc_util_OS(ctx), (jint)SF_arc_util_OS_javaVersionNumber) >= (16)) goto label_1;
	}
	clinit_arc_util_OS(ctx);
	(sp++)->i = SF_arc_util_OS_isAndroid;
	if ((--sp)->i == 0) goto label_2;
	clinit_arc_Core(ctx);
	(sp++)->o = SF_arc_Core_app;
	if ((--sp)->o == nullptr) goto label_2;
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	jint temp0 = (jint)((func_arc_Application_getVersion_R_int) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_getVersion_R_int, sp[0].o))(ctx, sp[0].o);
	if (temp0 < (35)) goto label_2;
	}
label_1:;
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	{
	sp -= 1;
	clinit_arc_graphics_Pixmap(ctx);
	SF_arc_graphics_Pixmap_supportsBufferCopy = sp[0].i;
	LINE_NUMBER(48);
	if ((clinit_arc_graphics_Pixmap(ctx), (jint)SF_arc_graphics_Pixmap_supportsBufferCopy) != 0) goto label_5;
	}
	clinit_arc_util_OS(ctx);
	(sp++)->i = SF_arc_util_OS_isIos;
	if ((--sp)->i != 0) goto label_5;
	LINE_NUMBER(49);
	SM_arc_util_UnsafeBuffers_checkInit(ctx);
label_5:;
	LINE_NUMBER(51);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_arc_graphics_Pixmap[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_arc_graphics_Pixmap_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_arc_graphics_Pixmap_dispose,
	(void *) M_arc_graphics_Pixmap_isDisposed_R_boolean,
	(void *) M_arc_graphics_Pixmap_copy_R_arc_graphics_Pixmap,
	(void *) M_arc_graphics_Pixmap_each_arc_func_Intc2,
	(void *) M_arc_graphics_Pixmap_replace_arc_func_IntIntf,
	(void *) M_arc_graphics_Pixmap_fill_int,
	(void *) M_arc_graphics_Pixmap_fill_arc_graphics_Color,
	(void *) M_arc_graphics_Pixmap_in_int_int_R_boolean,
	(void *) M_arc_graphics_Pixmap_crop_int_int_int_int_R_arc_graphics_Pixmap,
	(void *) M_arc_graphics_Pixmap_flipY_R_arc_graphics_Pixmap,
	(void *) M_arc_graphics_Pixmap_flipX_R_arc_graphics_Pixmap,
	(void *) M_arc_graphics_Pixmap_outline_arc_graphics_Color_int_R_arc_graphics_Pixmap,
	(void *) M_arc_graphics_Pixmap_outline_int_int_R_arc_graphics_Pixmap,
	(void *) M_arc_graphics_Pixmap_drawLine_int_int_int_int_int,
	(void *) M_arc_graphics_Pixmap_drawRect_int_int_int_int_int,
	(void *) M_arc_graphics_Pixmap_circlePoints_int_int_int_int_int,
	(void *) M_arc_graphics_Pixmap_drawCircle_int_int_int_int,
	(void *) M_arc_graphics_Pixmap_draw_arc_graphics_g2d_PixmapRegion,
	(void *) M_arc_graphics_Pixmap_draw_arc_graphics_g2d_PixmapRegion_boolean,
	(void *) M_arc_graphics_Pixmap_draw_arc_graphics_g2d_PixmapRegion_int_int,
	(void *) M_arc_graphics_Pixmap_draw_arc_graphics_g2d_PixmapRegion_int_int_int_int,
	(void *) M_arc_graphics_Pixmap_draw_arc_graphics_g2d_PixmapRegion_int_int_int_int_int_int,
	(void *) M_arc_graphics_Pixmap_draw_arc_graphics_g2d_PixmapRegion_int_int_int_int_int_int_int_int,
	(void *) M_arc_graphics_Pixmap_draw_arc_graphics_Pixmap_boolean,
	(void *) M_arc_graphics_Pixmap_draw_arc_graphics_Pixmap,
	(void *) M_arc_graphics_Pixmap_draw_arc_graphics_Pixmap_int_int,
	(void *) M_arc_graphics_Pixmap_draw_arc_graphics_Pixmap_int_int_boolean,
	(void *) M_arc_graphics_Pixmap_draw_arc_graphics_Pixmap_int_int_int_int,
	(void *) M_arc_graphics_Pixmap_draw_arc_graphics_Pixmap_int_int_int_int_boolean,
	(void *) M_arc_graphics_Pixmap_draw_arc_graphics_Pixmap_int_int_int_int_int_int,
	(void *) M_arc_graphics_Pixmap_draw_arc_graphics_Pixmap_int_int_int_int_int_int_int_int,
	(void *) M_arc_graphics_Pixmap_draw_arc_graphics_Pixmap_int_int_int_int_int_int_int_int_boolean,
	(void *) M_arc_graphics_Pixmap_draw_arc_graphics_Pixmap_int_int_int_int_int_int_int_int_boolean_boolean,
	(void *) M_arc_graphics_Pixmap_fillRect_int_int_int_int_int,
	(void *) M_arc_graphics_Pixmap_fillCircle_int_int_int_int,
	(void *) M_arc_graphics_Pixmap_get_int_int_R_int,
	(void *) M_arc_graphics_Pixmap_getClamp_int_int_R_int,
	(void *) M_arc_graphics_Pixmap_getRaw_int_int_R_int,
	(void *) M_arc_graphics_Pixmap_getA_int_int_R_int,
	(void *) M_arc_graphics_Pixmap_empty_int_int_R_boolean,
	(void *) M_arc_graphics_Pixmap_getWidth_R_int,
	(void *) M_arc_graphics_Pixmap_getHeight_R_int,
	(void *) M_arc_graphics_Pixmap_set_int_int_arc_graphics_Color,
	(void *) M_arc_graphics_Pixmap_set_int_int_int,
	(void *) M_arc_graphics_Pixmap_setRaw_int_int_int,
	(void *) M_arc_graphics_Pixmap_getGLFormat_R_int,
	(void *) M_arc_graphics_Pixmap_getGLInternalFormat_R_int,
	(void *) M_arc_graphics_Pixmap_getGLType_R_int,
	(void *) M_arc_graphics_Pixmap_getPixels_R_java_nio_ByteBuffer,
	(void *) M_arc_graphics_Pixmap_hline_int_int_int_int,
	(void *) M_arc_graphics_Pixmap_vline_int_int_int_int,
	(void *) M_arc_graphics_Pixmap_load_Array1_byte_int_int_java_lang_String,
	(void *) M_arc_graphics_Pixmap_loadJava_Array1_byte_int_int_java_lang_String,
	(void *) M_arc_graphics_Pixmap_load_int_int,
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
	{ "copy", "()Larc/graphics/Pixmap;" },
	{ "each", "(Larc/func/Intc2;)V" },
	{ "replace", "(Larc/func/IntIntf;)V" },
	{ "fill", "(I)V" },
	{ "fill", "(Larc/graphics/Color;)V" },
	{ "in", "(II)Z" },
	{ "crop", "(IIII)Larc/graphics/Pixmap;" },
	{ "flipY", "()Larc/graphics/Pixmap;" },
	{ "flipX", "()Larc/graphics/Pixmap;" },
	{ "outline", "(Larc/graphics/Color;I)Larc/graphics/Pixmap;" },
	{ "outline", "(II)Larc/graphics/Pixmap;" },
	{ "drawLine", "(IIIII)V" },
	{ "drawRect", "(IIIII)V" },
	{ "circlePoints", "(IIIII)V" },
	{ "drawCircle", "(IIII)V" },
	{ "draw", "(Larc/graphics/g2d/PixmapRegion;)V" },
	{ "draw", "(Larc/graphics/g2d/PixmapRegion;Z)V" },
	{ "draw", "(Larc/graphics/g2d/PixmapRegion;II)V" },
	{ "draw", "(Larc/graphics/g2d/PixmapRegion;IIII)V" },
	{ "draw", "(Larc/graphics/g2d/PixmapRegion;IIIIII)V" },
	{ "draw", "(Larc/graphics/g2d/PixmapRegion;IIIIIIII)V" },
	{ "draw", "(Larc/graphics/Pixmap;Z)V" },
	{ "draw", "(Larc/graphics/Pixmap;)V" },
	{ "draw", "(Larc/graphics/Pixmap;II)V" },
	{ "draw", "(Larc/graphics/Pixmap;IIZ)V" },
	{ "draw", "(Larc/graphics/Pixmap;IIII)V" },
	{ "draw", "(Larc/graphics/Pixmap;IIIIZ)V" },
	{ "draw", "(Larc/graphics/Pixmap;IIIIII)V" },
	{ "draw", "(Larc/graphics/Pixmap;IIIIIIII)V" },
	{ "draw", "(Larc/graphics/Pixmap;IIIIIIIIZ)V" },
	{ "draw", "(Larc/graphics/Pixmap;IIIIIIIIZZ)V" },
	{ "fillRect", "(IIIII)V" },
	{ "fillCircle", "(IIII)V" },
	{ "get", "(II)I" },
	{ "getClamp", "(II)I" },
	{ "getRaw", "(II)I" },
	{ "getA", "(II)I" },
	{ "empty", "(II)Z" },
	{ "getWidth", "()I" },
	{ "getHeight", "()I" },
	{ "set", "(IILarc/graphics/Color;)V" },
	{ "set", "(III)V" },
	{ "setRaw", "(III)V" },
	{ "getGLFormat", "()I" },
	{ "getGLInternalFormat", "()I" },
	{ "getGLType", "()I" },
	{ "getPixels", "()Ljava/nio/ByteBuffer;" },
	{ "hline", "(IIII)V" },
	{ "vline", "(IIII)V" },
	{ "load", "([BIILjava/lang/String;)V" },
	{ "loadJava", "([BIILjava/lang/String;)V" },
	{ "load", "(II)V" },
};

static jclass interfaces[] { &class_arc_util_Disposable, };

static jclass innerClasses[] {
	&class_arc_graphics_Pixmap$Format,
};

static FieldMetadata fields[] {
	{ "supportsBufferCopy", &class_boolean, (intptr_t) &SF_arc_graphics_Pixmap_supportsBufferCopy, "Z", 26 },
	{ "width", &class_int, offsetof(arc_graphics_Pixmap, F_width), "I", 1 },
	{ "height", &class_int, offsetof(arc_graphics_Pixmap, F_height), "I", 1 },
	{ "pixels", &class_java_nio_ByteBuffer, offsetof(arc_graphics_Pixmap, F_pixels), "Ljava/nio/ByteBuffer;", 1 },
	{ "handle", &class_long, offsetof(arc_graphics_Pixmap, F_handle), "J", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_graphics_Pixmap_int_int, 0, "(II)V", 1 },
	{ "<init>", (intptr_t) init_arc_graphics_Pixmap_Array1_byte, 0, "([B)V", 1 },
	{ "<init>", (intptr_t) init_arc_graphics_Pixmap_Array1_byte_int_int, 0, "([BII)V", 1 },
	{ "<init>", (intptr_t) init_arc_graphics_Pixmap_java_lang_String, 0, "(Ljava/lang/String;)V", 1 },
	{ "<init>", (intptr_t) init_arc_graphics_Pixmap_arc_files_Fi, 0, "(Larc/files/Fi;)V", 1 },
	{ "<init>", (intptr_t) init_arc_graphics_Pixmap_java_nio_ByteBuffer_int_int, 0, "(Ljava/nio/ByteBuffer;II)V", 1 },
	{ "copy", (intptr_t) M_arc_graphics_Pixmap_copy_R_arc_graphics_Pixmap, VTABLE_arc_graphics_Pixmap_copy_R_arc_graphics_Pixmap, "()Larc/graphics/Pixmap;", 1 },
	{ "each", (intptr_t) M_arc_graphics_Pixmap_each_arc_func_Intc2, VTABLE_arc_graphics_Pixmap_each_arc_func_Intc2, "(Larc/func/Intc2;)V", 1 },
	{ "replace", (intptr_t) M_arc_graphics_Pixmap_replace_arc_func_IntIntf, VTABLE_arc_graphics_Pixmap_replace_arc_func_IntIntf, "(Larc/func/IntIntf;)V", 1 },
	{ "fill", (intptr_t) M_arc_graphics_Pixmap_fill_int, VTABLE_arc_graphics_Pixmap_fill_int, "(I)V", 1 },
	{ "fill", (intptr_t) M_arc_graphics_Pixmap_fill_arc_graphics_Color, VTABLE_arc_graphics_Pixmap_fill_arc_graphics_Color, "(Larc/graphics/Color;)V", 1 },
	{ "in", (intptr_t) M_arc_graphics_Pixmap_in_int_int_R_boolean, VTABLE_arc_graphics_Pixmap_in_int_int_R_boolean, "(II)Z", 1 },
	{ "crop", (intptr_t) M_arc_graphics_Pixmap_crop_int_int_int_int_R_arc_graphics_Pixmap, VTABLE_arc_graphics_Pixmap_crop_int_int_int_int_R_arc_graphics_Pixmap, "(IIII)Larc/graphics/Pixmap;", 1 },
	{ "flipY", (intptr_t) M_arc_graphics_Pixmap_flipY_R_arc_graphics_Pixmap, VTABLE_arc_graphics_Pixmap_flipY_R_arc_graphics_Pixmap, "()Larc/graphics/Pixmap;", 1 },
	{ "flipX", (intptr_t) M_arc_graphics_Pixmap_flipX_R_arc_graphics_Pixmap, VTABLE_arc_graphics_Pixmap_flipX_R_arc_graphics_Pixmap, "()Larc/graphics/Pixmap;", 1 },
	{ "outline", (intptr_t) M_arc_graphics_Pixmap_outline_arc_graphics_Color_int_R_arc_graphics_Pixmap, VTABLE_arc_graphics_Pixmap_outline_arc_graphics_Color_int_R_arc_graphics_Pixmap, "(Larc/graphics/Color;I)Larc/graphics/Pixmap;", 1 },
	{ "outline", (intptr_t) M_arc_graphics_Pixmap_outline_int_int_R_arc_graphics_Pixmap, VTABLE_arc_graphics_Pixmap_outline_int_int_R_arc_graphics_Pixmap, "(II)Larc/graphics/Pixmap;", 1 },
	{ "drawLine", (intptr_t) M_arc_graphics_Pixmap_drawLine_int_int_int_int_int, VTABLE_arc_graphics_Pixmap_drawLine_int_int_int_int_int, "(IIIII)V", 1 },
	{ "drawRect", (intptr_t) M_arc_graphics_Pixmap_drawRect_int_int_int_int_int, VTABLE_arc_graphics_Pixmap_drawRect_int_int_int_int_int, "(IIIII)V", 1 },
	{ "circlePoints", (intptr_t) M_arc_graphics_Pixmap_circlePoints_int_int_int_int_int, VTABLE_arc_graphics_Pixmap_circlePoints_int_int_int_int_int, "(IIIII)V", 0 },
	{ "drawCircle", (intptr_t) M_arc_graphics_Pixmap_drawCircle_int_int_int_int, VTABLE_arc_graphics_Pixmap_drawCircle_int_int_int_int, "(IIII)V", 1 },
	{ "draw", (intptr_t) M_arc_graphics_Pixmap_draw_arc_graphics_g2d_PixmapRegion, VTABLE_arc_graphics_Pixmap_draw_arc_graphics_g2d_PixmapRegion, "(Larc/graphics/g2d/PixmapRegion;)V", 1 },
	{ "draw", (intptr_t) M_arc_graphics_Pixmap_draw_arc_graphics_g2d_PixmapRegion_boolean, VTABLE_arc_graphics_Pixmap_draw_arc_graphics_g2d_PixmapRegion_boolean, "(Larc/graphics/g2d/PixmapRegion;Z)V", 1 },
	{ "draw", (intptr_t) M_arc_graphics_Pixmap_draw_arc_graphics_g2d_PixmapRegion_int_int, VTABLE_arc_graphics_Pixmap_draw_arc_graphics_g2d_PixmapRegion_int_int, "(Larc/graphics/g2d/PixmapRegion;II)V", 1 },
	{ "draw", (intptr_t) M_arc_graphics_Pixmap_draw_arc_graphics_g2d_PixmapRegion_int_int_int_int, VTABLE_arc_graphics_Pixmap_draw_arc_graphics_g2d_PixmapRegion_int_int_int_int, "(Larc/graphics/g2d/PixmapRegion;IIII)V", 1 },
	{ "draw", (intptr_t) M_arc_graphics_Pixmap_draw_arc_graphics_g2d_PixmapRegion_int_int_int_int_int_int, VTABLE_arc_graphics_Pixmap_draw_arc_graphics_g2d_PixmapRegion_int_int_int_int_int_int, "(Larc/graphics/g2d/PixmapRegion;IIIIII)V", 1 },
	{ "draw", (intptr_t) M_arc_graphics_Pixmap_draw_arc_graphics_g2d_PixmapRegion_int_int_int_int_int_int_int_int, VTABLE_arc_graphics_Pixmap_draw_arc_graphics_g2d_PixmapRegion_int_int_int_int_int_int_int_int, "(Larc/graphics/g2d/PixmapRegion;IIIIIIII)V", 1 },
	{ "draw", (intptr_t) M_arc_graphics_Pixmap_draw_arc_graphics_Pixmap_boolean, VTABLE_arc_graphics_Pixmap_draw_arc_graphics_Pixmap_boolean, "(Larc/graphics/Pixmap;Z)V", 1 },
	{ "draw", (intptr_t) M_arc_graphics_Pixmap_draw_arc_graphics_Pixmap, VTABLE_arc_graphics_Pixmap_draw_arc_graphics_Pixmap, "(Larc/graphics/Pixmap;)V", 1 },
	{ "draw", (intptr_t) M_arc_graphics_Pixmap_draw_arc_graphics_Pixmap_int_int, VTABLE_arc_graphics_Pixmap_draw_arc_graphics_Pixmap_int_int, "(Larc/graphics/Pixmap;II)V", 1 },
	{ "draw", (intptr_t) M_arc_graphics_Pixmap_draw_arc_graphics_Pixmap_int_int_boolean, VTABLE_arc_graphics_Pixmap_draw_arc_graphics_Pixmap_int_int_boolean, "(Larc/graphics/Pixmap;IIZ)V", 1 },
	{ "draw", (intptr_t) M_arc_graphics_Pixmap_draw_arc_graphics_Pixmap_int_int_int_int, VTABLE_arc_graphics_Pixmap_draw_arc_graphics_Pixmap_int_int_int_int, "(Larc/graphics/Pixmap;IIII)V", 1 },
	{ "draw", (intptr_t) M_arc_graphics_Pixmap_draw_arc_graphics_Pixmap_int_int_int_int_boolean, VTABLE_arc_graphics_Pixmap_draw_arc_graphics_Pixmap_int_int_int_int_boolean, "(Larc/graphics/Pixmap;IIIIZ)V", 1 },
	{ "draw", (intptr_t) M_arc_graphics_Pixmap_draw_arc_graphics_Pixmap_int_int_int_int_int_int, VTABLE_arc_graphics_Pixmap_draw_arc_graphics_Pixmap_int_int_int_int_int_int, "(Larc/graphics/Pixmap;IIIIII)V", 1 },
	{ "draw", (intptr_t) M_arc_graphics_Pixmap_draw_arc_graphics_Pixmap_int_int_int_int_int_int_int_int, VTABLE_arc_graphics_Pixmap_draw_arc_graphics_Pixmap_int_int_int_int_int_int_int_int, "(Larc/graphics/Pixmap;IIIIIIII)V", 1 },
	{ "draw", (intptr_t) M_arc_graphics_Pixmap_draw_arc_graphics_Pixmap_int_int_int_int_int_int_int_int_boolean, VTABLE_arc_graphics_Pixmap_draw_arc_graphics_Pixmap_int_int_int_int_int_int_int_int_boolean, "(Larc/graphics/Pixmap;IIIIIIIIZ)V", 1 },
	{ "draw", (intptr_t) M_arc_graphics_Pixmap_draw_arc_graphics_Pixmap_int_int_int_int_int_int_int_int_boolean_boolean, VTABLE_arc_graphics_Pixmap_draw_arc_graphics_Pixmap_int_int_int_int_int_int_int_int_boolean_boolean, "(Larc/graphics/Pixmap;IIIIIIIIZZ)V", 1 },
	{ "fillRect", (intptr_t) M_arc_graphics_Pixmap_fillRect_int_int_int_int_int, VTABLE_arc_graphics_Pixmap_fillRect_int_int_int_int_int, "(IIIII)V", 1 },
	{ "fillCircle", (intptr_t) M_arc_graphics_Pixmap_fillCircle_int_int_int_int, VTABLE_arc_graphics_Pixmap_fillCircle_int_int_int_int, "(IIII)V", 1 },
	{ "get", (intptr_t) M_arc_graphics_Pixmap_get_int_int_R_int, VTABLE_arc_graphics_Pixmap_get_int_int_R_int, "(II)I", 1 },
	{ "getClamp", (intptr_t) M_arc_graphics_Pixmap_getClamp_int_int_R_int, VTABLE_arc_graphics_Pixmap_getClamp_int_int_R_int, "(II)I", 1 },
	{ "getRaw", (intptr_t) M_arc_graphics_Pixmap_getRaw_int_int_R_int, VTABLE_arc_graphics_Pixmap_getRaw_int_int_R_int, "(II)I", 1 },
	{ "getA", (intptr_t) M_arc_graphics_Pixmap_getA_int_int_R_int, VTABLE_arc_graphics_Pixmap_getA_int_int_R_int, "(II)I", 1 },
	{ "empty", (intptr_t) M_arc_graphics_Pixmap_empty_int_int_R_boolean, VTABLE_arc_graphics_Pixmap_empty_int_int_R_boolean, "(II)Z", 1 },
	{ "getWidth", (intptr_t) M_arc_graphics_Pixmap_getWidth_R_int, VTABLE_arc_graphics_Pixmap_getWidth_R_int, "()I", 1 },
	{ "getHeight", (intptr_t) M_arc_graphics_Pixmap_getHeight_R_int, VTABLE_arc_graphics_Pixmap_getHeight_R_int, "()I", 1 },
	{ "dispose", (intptr_t) M_arc_graphics_Pixmap_dispose, VTABLE_arc_graphics_Pixmap_dispose, "()V", 1 },
	{ "isDisposed", (intptr_t) M_arc_graphics_Pixmap_isDisposed_R_boolean, VTABLE_arc_graphics_Pixmap_isDisposed_R_boolean, "()Z", 1 },
	{ "set", (intptr_t) M_arc_graphics_Pixmap_set_int_int_arc_graphics_Color, VTABLE_arc_graphics_Pixmap_set_int_int_arc_graphics_Color, "(IILarc/graphics/Color;)V", 1 },
	{ "set", (intptr_t) M_arc_graphics_Pixmap_set_int_int_int, VTABLE_arc_graphics_Pixmap_set_int_int_int, "(III)V", 1 },
	{ "setRaw", (intptr_t) M_arc_graphics_Pixmap_setRaw_int_int_int, VTABLE_arc_graphics_Pixmap_setRaw_int_int_int, "(III)V", 1 },
	{ "getGLFormat", (intptr_t) M_arc_graphics_Pixmap_getGLFormat_R_int, VTABLE_arc_graphics_Pixmap_getGLFormat_R_int, "()I", 1 },
	{ "getGLInternalFormat", (intptr_t) M_arc_graphics_Pixmap_getGLInternalFormat_R_int, VTABLE_arc_graphics_Pixmap_getGLInternalFormat_R_int, "()I", 1 },
	{ "getGLType", (intptr_t) M_arc_graphics_Pixmap_getGLType_R_int, VTABLE_arc_graphics_Pixmap_getGLType_R_int, "()I", 1 },
	{ "getPixels", (intptr_t) M_arc_graphics_Pixmap_getPixels_R_java_nio_ByteBuffer, VTABLE_arc_graphics_Pixmap_getPixels_R_java_nio_ByteBuffer, "()Ljava/nio/ByteBuffer;", 1 },
	{ "hline", (intptr_t) M_arc_graphics_Pixmap_hline_int_int_int_int, VTABLE_arc_graphics_Pixmap_hline_int_int_int_int, "(IIII)V", 0 },
	{ "vline", (intptr_t) M_arc_graphics_Pixmap_vline_int_int_int_int, VTABLE_arc_graphics_Pixmap_vline_int_int_int_int, "(IIII)V", 0 },
	{ "blend", (intptr_t) SM_arc_graphics_Pixmap_blend_int_int_R_int, 0, "(II)I", 9 },
	{ "empty", (intptr_t) SM_arc_graphics_Pixmap_empty_int_R_boolean, 0, "(I)Z", 9 },
	{ "load", (intptr_t) M_arc_graphics_Pixmap_load_Array1_byte_int_int_java_lang_String, VTABLE_arc_graphics_Pixmap_load_Array1_byte_int_int_java_lang_String, "([BIILjava/lang/String;)V", 2 },
	{ "loadJava", (intptr_t) M_arc_graphics_Pixmap_loadJava_Array1_byte_int_int_java_lang_String, VTABLE_arc_graphics_Pixmap_loadJava_Array1_byte_int_int_java_lang_String, "([BIILjava/lang/String;)V", 2 },
	{ "load", (intptr_t) M_arc_graphics_Pixmap_load_int_int, VTABLE_arc_graphics_Pixmap_load_int_int, "(II)V", 2 },
	{ "toString", (intptr_t) M_arc_graphics_Pixmap_toString_R_java_lang_String, VTABLE_arc_graphics_Pixmap_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "copyMem", (intptr_t) SM_arc_graphics_Pixmap_copyMem_java_nio_ByteBuffer_int_java_nio_ByteBuffer_int_int, 0, "(Ljava/nio/ByteBuffer;ILjava/nio/ByteBuffer;II)V", 8 },
	{ "loadJni", (intptr_t) SM_arc_graphics_Pixmap_loadJni_Array1_long_Array1_byte_int_int_R_java_nio_ByteBuffer, 0, "([J[BII)Ljava/nio/ByteBuffer;", 264 },
	{ "createJni", (intptr_t) SM_arc_graphics_Pixmap_createJni_Array1_long_int_int_R_java_nio_ByteBuffer, 0, "([JII)Ljava/nio/ByteBuffer;", 264 },
	{ "free", (intptr_t) SM_arc_graphics_Pixmap_free_long, 0, "(J)V", 264 },
	{ "getFailureReason", (intptr_t) SM_arc_graphics_Pixmap_getFailureReason_R_java_lang_String, 0, "()Ljava/lang/String;", 264 },
	{ "<clinit>", (intptr_t) clinit_arc_graphics_Pixmap, 0, "()V", 8 },
};

Class class_arc_graphics_Pixmap{
		.nativeName = (intptr_t) "arc/graphics/Pixmap",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_graphics_Pixmap),
		.classVtable = (intptr_t) vtable_arc_graphics_Pixmap,
		.staticInitializer = (intptr_t) clinit_arc_graphics_Pixmap,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_graphics_Pixmap,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 69,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 65,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_graphics_Pixmap = registerClass(&class_arc_graphics_Pixmap);

}
