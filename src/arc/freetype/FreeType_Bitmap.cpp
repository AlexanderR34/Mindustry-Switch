#include "arc/freetype/FreeType_Bitmap.h"
#include "java/nio/ByteBuffer.h"
#include "java/lang/Math.h"
#include "arc/graphics/Pixmap.h"
#include "java/lang/Object.h"
#include "arc/freetype/FreeType_Bitmap.h"
#include "java/nio/IntBuffer.h"
#include "arc/util/Buffers.h"
#include "arc/graphics/Color.h"
#include "arc/freetype/FreeType.h"
#include "arc/freetype/FreeType_Pointer.h"

extern "C" {


void mark_arc_freetype_FreeType$Bitmap(jobject object, jint mark, jint depth) {
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
	auto self = (arc_freetype_FreeType$Bitmap *) object;
}

void clinit_arc_freetype_FreeType$Bitmap(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_freetype_FreeType$Pointer(ctx);
}

void init_arc_freetype_FreeType$Bitmap_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/freetype/FreeType$Bitmap:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_freetype_FreeType$Bitmap(ctx);
	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(663);
	init_arc_freetype_FreeType$Pointer_long(ctx, (frame[0].o), (frame[1].l));
	LINE_NUMBER(664);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_arc_freetype_FreeType$Bitmap_getRows_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/freetype/FreeType$Bitmap:getRows", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(692);
	jint temp0 = (jint)SM_arc_freetype_FreeType$Bitmap_getRows_long_R_int(ctx, ((jlong)((arc_freetype_FreeType$Pointer *) NULL_CHECK((frame[0].o)))->F_address));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_arc_freetype_FreeType$Bitmap_getWidth_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/freetype/FreeType$Bitmap:getWidth", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(696);
	jint temp0 = (jint)SM_arc_freetype_FreeType$Bitmap_getWidth_long_R_int(ctx, ((jlong)((arc_freetype_FreeType$Pointer *) NULL_CHECK((frame[0].o)))->F_address));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_arc_freetype_FreeType$Bitmap_getPitch_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/freetype/FreeType$Bitmap:getPitch", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(700);
	jint temp0 = (jint)SM_arc_freetype_FreeType$Bitmap_getPitch_long_R_int(ctx, ((jlong)((arc_freetype_FreeType$Pointer *) NULL_CHECK((frame[0].o)))->F_address));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_arc_freetype_FreeType$Bitmap_getBuffer_R_java_nio_ByteBuffer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/freetype/FreeType$Bitmap:getBuffer", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(705);
	jint temp0 = (jint)((func_arc_freetype_FreeType$Bitmap_getRows_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_freetype_FreeType$Bitmap_getRows_R_int])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(711);
	sp[0].o = (jobject)SM_arc_util_Buffers_newByteBuffer_int_R_java_nio_ByteBuffer(ctx, (jint(1)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(712);
	sp[0].o = (jobject)SM_arc_freetype_FreeType$Bitmap_getBuffer_long_R_java_nio_ByteBuffer(ctx, ((jlong)((arc_freetype_FreeType$Pointer *) NULL_CHECK((frame[0].o)))->F_address));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_freetype_FreeType$Bitmap_getPixmap_arc_graphics_Color_float_R_arc_graphics_Pixmap(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[27];
	auto stack = &frame[19];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/freetype/FreeType$Bitmap:getPixmap", 27 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(717);
	jint temp0 = (jint)((func_arc_freetype_FreeType$Bitmap_getWidth_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_freetype_FreeType$Bitmap_getWidth_R_int])(ctx, (frame[0].o));
	frame[3].i = temp0;
	jint temp1 = (jint)((func_arc_freetype_FreeType$Bitmap_getRows_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_freetype_FreeType$Bitmap_getRows_R_int])(ctx, (frame[0].o));
	frame[4].i = temp1;
	LINE_NUMBER(718);
	sp[0].o = (jobject)((func_arc_freetype_FreeType$Bitmap_getBuffer_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_freetype_FreeType$Bitmap_getBuffer_R_java_nio_ByteBuffer])(ctx, (frame[0].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(720);
	jint temp2 = (jint)((func_arc_freetype_FreeType$Bitmap_getPixelMode_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_freetype_FreeType$Bitmap_getPixelMode_R_int])(ctx, (frame[0].o));
	frame[7].i = temp2;
	LINE_NUMBER(721);
	jint temp3 = (jint)((func_arc_freetype_FreeType$Bitmap_getPitch_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_freetype_FreeType$Bitmap_getPitch_R_int])(ctx, (frame[0].o));
	jint temp4 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, temp3);
	frame[8].i = temp4;
	LINE_NUMBER(723);
	clinit_arc_graphics_Pixmap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Pixmap);
	init_arc_graphics_Pixmap_int_int(ctx, sp[0].o, (frame[3].i), (frame[4].i));
	frame[6].o = sp[0].o;
	LINE_NUMBER(724);
	jint temp5 = (jint)((func_arc_graphics_Color_rgba8888_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_graphics_Color_rgba8888_R_int])(ctx, (frame[1].o));
	frame[9].i = temp5;
	LINE_NUMBER(725);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (frame[8].i));
	frame[10].o = sp[0].o;
	LINE_NUMBER(726);
	sp[0].o = (jobject) createArray(ctx, &class_int, (frame[3].i));
	frame[11].o = sp[0].o;
	LINE_NUMBER(727);
	sp[0].o = (jobject)((arc_graphics_Pixmap *) NULL_CHECK((frame[6].o)))->F_pixels;
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_asIntBuffer_R_java_nio_IntBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_asIntBuffer_R_java_nio_IntBuffer])(ctx, sp[0].o);
	frame[12].o = sp[0].o;
	LINE_NUMBER(728);
	if ((frame[7].i) != (clinit_arc_freetype_FreeType(ctx), (jint)SF_arc_freetype_FreeType_FT_PIXEL_MODE_MONO)) goto label_11;
	}
	{
	LINE_NUMBER(730);
	frame[13].i = (jint(0));
	}
label_13:;
	{
	if ((frame[13].i) >= (frame[4].i)) goto label_14;
	}
	{
	LINE_NUMBER(731);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_get_Array1_byte_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_nio_ByteBuffer_get_Array1_byte_R_java_nio_ByteBuffer])(ctx, (frame[5].o), (frame[10].o));
	LINE_NUMBER(732);
	frame[14].i = (jint(0));
	frame[15].i = (jint(0));
	}
label_18:;
	{
	if ((frame[15].i) >= (frame[3].i)) goto label_19;
	}
	{
	LINE_NUMBER(733);
	frame[16].i = ((jint)ARRAY_ACCESS(jbyte, (frame[10].o), (frame[14].i)));
	LINE_NUMBER(734);
	frame[17].i = (jint(0));
	jint temp0 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, (8), ((frame[3].i) - (frame[15].i)));
	frame[18].i = temp0;
	}
label_23:;
	{
	if ((frame[17].i) >= (frame[18].i)) goto label_24;
	}
	{
	LINE_NUMBER(735);
	if (((frame[16].i) & ((jint(1)) << ((7) - (frame[17].i)))) == 0) goto label_26;
	}
	{
	LINE_NUMBER(736);
	ARRAY_ACCESS(jint, (frame[11].o), ((frame[15].i) + (frame[17].i))) = (frame[9].i);
	goto label_28;
	}
label_26:;
	{
	LINE_NUMBER(738);
	ARRAY_ACCESS(jint, (frame[11].o), ((frame[15].i) + (frame[17].i))) = (jint(0));
	}
label_28:;
	{
	LINE_NUMBER(734);
	INST_IINC(17, 1);
	goto label_23;
	}
label_24:;
	{
	LINE_NUMBER(732);
	INST_IINC(14, 1);
	INST_IINC(15, 8);
	goto label_18;
	}
label_19:;
	{
	LINE_NUMBER(741);
	sp[0].o = (jobject)((func_java_nio_IntBuffer_put_Array1_int_R_java_nio_IntBuffer) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_java_nio_IntBuffer_put_Array1_int_R_java_nio_IntBuffer])(ctx, (frame[12].o), (frame[11].o));
	LINE_NUMBER(730);
	INST_IINC(13, 1);
	goto label_13;
	}
label_14:;
	goto label_30;
label_11:;
	{
	LINE_NUMBER(745);
	frame[13].i = ((frame[9].i) & (-256));
	LINE_NUMBER(746);
	frame[14].i = ((frame[9].i) & (255));
	LINE_NUMBER(747);
	frame[15].i = (jint(0));
	}
label_33:;
	{
	if ((frame[15].i) >= (frame[4].i)) goto label_30;
	}
	{
	LINE_NUMBER(748);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_get_Array1_byte_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_nio_ByteBuffer_get_Array1_byte_R_java_nio_ByteBuffer])(ctx, (frame[5].o), (frame[10].o));
	LINE_NUMBER(749);
	frame[16].i = (jint(0));
	}
label_36:;
	{
	if ((frame[16].i) >= (frame[3].i)) goto label_37;
	}
	{
	LINE_NUMBER(753);
	frame[17].i = (((jint)ARRAY_ACCESS(jbyte, (frame[10].o), (frame[16].i))) & (255));
	LINE_NUMBER(754);
	if ((frame[17].i) != 0) goto label_40;
	}
	{
	LINE_NUMBER(755);
	ARRAY_ACCESS(jint, (frame[11].o), (frame[16].i)) = (frame[13].i);
	goto label_42;
	}
label_40:;
	{
	LINE_NUMBER(756);
	if ((frame[17].i) != (255)) goto label_43;
	}
	{
	LINE_NUMBER(757);
	ARRAY_ACCESS(jint, (frame[11].o), (frame[16].i)) = ((frame[13].i) | (frame[14].i));
	goto label_42;
	}
label_43:;
	{
	LINE_NUMBER(759);
	sp[0].o = frame[11].o;
	jint temp0 = frame[16].i;
	jint temp1 = frame[13].i;
	jfloat temp2 = jfloat((frame[14].i));
	jdouble temp3 = (jdouble)SM_java_lang_Math_pow_double_double_R_double(ctx, (jdouble(((jfloat((frame[17].i))) / (jfloat(255.0f))))), (jdouble((frame[2].f))));
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (temp1 | (jint((temp2 * (jfloat(temp3))))));
	}
label_42:;
	{
	LINE_NUMBER(749);
	INST_IINC(16, 1);
	goto label_36;
	}
label_37:;
	{
	LINE_NUMBER(761);
	sp[0].o = (jobject)((func_java_nio_IntBuffer_put_Array1_int_R_java_nio_IntBuffer) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_java_nio_IntBuffer_put_Array1_int_R_java_nio_IntBuffer])(ctx, (frame[12].o), (frame[11].o));
	LINE_NUMBER(747);
	INST_IINC(15, 1);
	goto label_33;
	}
label_30:;
	{
	LINE_NUMBER(765);
	popStackFrame(ctx);
	return (frame[6].o);
	}

	popStackFrame(ctx);
}

jint M_arc_freetype_FreeType$Bitmap_getNumGray_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/freetype/FreeType$Bitmap:getNumGray", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(769);
	jint temp0 = (jint)SM_arc_freetype_FreeType$Bitmap_getNumGray_long_R_int(ctx, ((jlong)((arc_freetype_FreeType$Pointer *) NULL_CHECK((frame[0].o)))->F_address));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_arc_freetype_FreeType$Bitmap_getPixelMode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/freetype/FreeType$Bitmap:getPixelMode", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(773);
	jint temp0 = (jint)SM_arc_freetype_FreeType$Bitmap_getPixelMode_long_R_int(ctx, ((jlong)((arc_freetype_FreeType$Pointer *) NULL_CHECK((frame[0].o)))->F_address));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void *vtable_arc_freetype_FreeType$Bitmap[] {
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
	(void *) M_arc_freetype_FreeType$Bitmap_getRows_R_int,
	(void *) M_arc_freetype_FreeType$Bitmap_getWidth_R_int,
	(void *) M_arc_freetype_FreeType$Bitmap_getPitch_R_int,
	(void *) M_arc_freetype_FreeType$Bitmap_getBuffer_R_java_nio_ByteBuffer,
	(void *) M_arc_freetype_FreeType$Bitmap_getPixmap_arc_graphics_Color_float_R_arc_graphics_Pixmap,
	(void *) M_arc_freetype_FreeType$Bitmap_getNumGray_R_int,
	(void *) M_arc_freetype_FreeType$Bitmap_getPixelMode_R_int,
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
	{ "getRows", "()I" },
	{ "getWidth", "()I" },
	{ "getPitch", "()I" },
	{ "getBuffer", "()Ljava/nio/ByteBuffer;" },
	{ "getPixmap", "(Larc/graphics/Color;F)Larc/graphics/Pixmap;" },
	{ "getNumGray", "()I" },
	{ "getPixelMode", "()I" },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_freetype_FreeType$Bitmap_long, 0, "(J)V", 0 },
	{ "getRows", (intptr_t) SM_arc_freetype_FreeType$Bitmap_getRows_long_R_int, 0, "(J)I", 266 },
	{ "getWidth", (intptr_t) SM_arc_freetype_FreeType$Bitmap_getWidth_long_R_int, 0, "(J)I", 266 },
	{ "getPitch", (intptr_t) SM_arc_freetype_FreeType$Bitmap_getPitch_long_R_int, 0, "(J)I", 266 },
	{ "getBuffer", (intptr_t) SM_arc_freetype_FreeType$Bitmap_getBuffer_long_R_java_nio_ByteBuffer, 0, "(J)Ljava/nio/ByteBuffer;", 266 },
	{ "getNumGray", (intptr_t) SM_arc_freetype_FreeType$Bitmap_getNumGray_long_R_int, 0, "(J)I", 266 },
	{ "getPixelMode", (intptr_t) SM_arc_freetype_FreeType$Bitmap_getPixelMode_long_R_int, 0, "(J)I", 266 },
	{ "getRows", (intptr_t) M_arc_freetype_FreeType$Bitmap_getRows_R_int, VTABLE_arc_freetype_FreeType$Bitmap_getRows_R_int, "()I", 1 },
	{ "getWidth", (intptr_t) M_arc_freetype_FreeType$Bitmap_getWidth_R_int, VTABLE_arc_freetype_FreeType$Bitmap_getWidth_R_int, "()I", 1 },
	{ "getPitch", (intptr_t) M_arc_freetype_FreeType$Bitmap_getPitch_R_int, VTABLE_arc_freetype_FreeType$Bitmap_getPitch_R_int, "()I", 1 },
	{ "getBuffer", (intptr_t) M_arc_freetype_FreeType$Bitmap_getBuffer_R_java_nio_ByteBuffer, VTABLE_arc_freetype_FreeType$Bitmap_getBuffer_R_java_nio_ByteBuffer, "()Ljava/nio/ByteBuffer;", 1 },
	{ "getPixmap", (intptr_t) M_arc_freetype_FreeType$Bitmap_getPixmap_arc_graphics_Color_float_R_arc_graphics_Pixmap, VTABLE_arc_freetype_FreeType$Bitmap_getPixmap_arc_graphics_Color_float_R_arc_graphics_Pixmap, "(Larc/graphics/Color;F)Larc/graphics/Pixmap;", 1 },
	{ "getNumGray", (intptr_t) M_arc_freetype_FreeType$Bitmap_getNumGray_R_int, VTABLE_arc_freetype_FreeType$Bitmap_getNumGray_R_int, "()I", 1 },
	{ "getPixelMode", (intptr_t) M_arc_freetype_FreeType$Bitmap_getPixelMode_R_int, VTABLE_arc_freetype_FreeType$Bitmap_getPixelMode_R_int, "()I", 1 },
};

Class class_arc_freetype_FreeType$Bitmap{
		.nativeName = (intptr_t) "arc/freetype/FreeType$Bitmap",
		.parentClass = (intptr_t) &class_arc_freetype_FreeType$Pointer,
		.size = sizeof(arc_freetype_FreeType$Bitmap),
		.classVtable = (intptr_t) vtable_arc_freetype_FreeType$Bitmap,
		.staticInitializer = (intptr_t) clinit_arc_freetype_FreeType$Bitmap,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_freetype_FreeType$Bitmap,
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
		.methodCount = 14,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 18,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_freetype_FreeType$Bitmap = registerClass(&class_arc_freetype_FreeType$Bitmap);

}

