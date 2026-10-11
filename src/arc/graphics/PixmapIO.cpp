#include "arc/graphics/PixmapIO.h"
#include "java/lang/Exception.h"
#include "java/lang/StringBuilder.h"
#include "java/io/ByteArrayInputStream.h"
#include "arc/graphics/PixmapIO_PngWriter.h"
#include "arc/files/Fi.h"
#include "java/io/OutputStream.h"
#include "java/io/InputStream.h"
#include "java/nio/ByteBuffer.h"
#include "java/lang/Object.h"
#include "arc/graphics/Pixmap.h"
#include "java/lang/String.h"
#include "arc/util/ArcRuntimeException.h"
#include "arc/graphics/PixmapIO_PngReader.h"
#include "java/io/IOException.h"
#include "java/lang/Throwable.h"
#include "java/io/ByteArrayOutputStream.h"

extern "C" {


void mark_arc_graphics_PixmapIO(jobject object, jint mark, jint depth) {
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
	auto self = (arc_graphics_PixmapIO *) object;
}

void clinit_arc_graphics_PixmapIO(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_graphics_PixmapIO(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/PixmapIO:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_PixmapIO(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(16);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_PixmapIO_writePng_arc_files_Fi_arc_graphics_Pixmap(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/PixmapIO:writePng", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_PixmapIO(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	LINE_NUMBER(24);
	clinit_arc_graphics_PixmapIO$PngWriter(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_PixmapIO$PngWriter);
	init_arc_graphics_PixmapIO$PngWriter_int(ctx, sp[0].o, (jint(((jfloat((((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[1].o)))->F_width) * ((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[1].o)))->F_height)))) * (jfloat(1.5f))))));
	frame[2].o = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(26);
	((func_arc_graphics_PixmapIO$PngWriter_setFlipY_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_graphics_PixmapIO$PngWriter_setFlipY_boolean])(ctx, (frame[2].o), (jint(0)));
	LINE_NUMBER(27);
	((func_arc_graphics_PixmapIO$PngWriter_write_arc_files_Fi_arc_graphics_Pixmap) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_graphics_PixmapIO$PngWriter_write_arc_files_Fi_arc_graphics_Pixmap])(ctx, (frame[2].o), (frame[0].o), (frame[1].o));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(29);
	((func_arc_graphics_PixmapIO$PngWriter_dispose) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_graphics_PixmapIO$PngWriter_dispose])(ctx, (frame[2].o));
	LINE_NUMBER(30);
	goto label_5;
	}
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(29);
	frame[3].o = sp[0].o;
	((func_arc_graphics_PixmapIO$PngWriter_dispose) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_graphics_PixmapIO$PngWriter_dispose])(ctx, (frame[2].o));
	LINE_NUMBER(30);
	throwException(ctx, (frame[3].o));	}
label_5:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(33);
	goto label_11;
label_6:;
	{
	sp -= 1;
	LINE_NUMBER(31);
	frame[2].o = sp[0].o;
	LINE_NUMBER(32);
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Error writing PNG: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_arc_util_ArcRuntimeException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, sp[1].o, (frame[2].o));
	throwException(ctx, sp[0].o);	}
label_11:;
	LINE_NUMBER(34);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_arc_graphics_PixmapIO_writePngBytes_arc_graphics_Pixmap_R_Array1_byte(jcontext ctx, jobject param0) {
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/PixmapIO:writePngBytes", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_PixmapIO(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(41);
	clinit_arc_graphics_PixmapIO$PngWriter(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_PixmapIO$PngWriter);
	init_arc_graphics_PixmapIO$PngWriter_int(ctx, sp[0].o, (jint(((jfloat((((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_width) * ((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_height)))) * (jfloat(1.5f))))));
	frame[1].o = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(43);
	((func_arc_graphics_PixmapIO$PngWriter_setFlipY_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_graphics_PixmapIO$PngWriter_setFlipY_boolean])(ctx, (frame[1].o), (jint(0)));
	LINE_NUMBER(44);
	clinit_java_io_ByteArrayOutputStream(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_ByteArrayOutputStream);
	init_java_io_ByteArrayOutputStream(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(45);
	((func_arc_graphics_PixmapIO$PngWriter_write_java_io_OutputStream_arc_graphics_Pixmap) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_graphics_PixmapIO$PngWriter_write_java_io_OutputStream_arc_graphics_Pixmap])(ctx, (frame[1].o), (frame[2].o), (frame[0].o));
	LINE_NUMBER(46);
	sp[0].o = (jobject)((func_java_io_ByteArrayOutputStream_toByteArray_R_Array1_byte) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_ByteArrayOutputStream_toByteArray_R_Array1_byte])(ctx, (frame[2].o));
	frame[3].o = sp[0].o;
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(48);
	((func_arc_graphics_PixmapIO$PngWriter_dispose) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_graphics_PixmapIO$PngWriter_dispose])(ctx, (frame[1].o));
	LINE_NUMBER(46);
	popStackFrame(ctx);
	return (frame[3].o);
	}
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(48);
	INST_ASTORE(4);
	popExceptionFrame(frameRef);
	{
	((func_arc_graphics_PixmapIO$PngWriter_dispose) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_graphics_PixmapIO$PngWriter_dispose])(ctx, (frame[1].o));
	LINE_NUMBER(49);
	throwException(ctx, (frame[4].o));	}

	popStackFrame(ctx);
}

jobject SM_arc_graphics_PixmapIO_readPNG_arc_files_Fi_R_arc_graphics_Pixmap(jcontext ctx, jobject param0) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/PixmapIO:readPNG", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_PixmapIO(ctx);
	frame[0].o = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(55);
	clinit_arc_graphics_PixmapIO$PngReader(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_PixmapIO$PngReader);
	init_arc_graphics_PixmapIO$PngReader(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(56);
	sp[0].o = frame[1].o;
	clinit_java_io_ByteArrayInputStream(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_io_ByteArrayInputStream);
	sp[2].o = (jobject)((func_arc_files_Fi_readBytes_R_Array1_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_files_Fi_readBytes_R_Array1_byte])(ctx, (frame[0].o));
	init_java_io_ByteArrayInputStream_Array1_byte(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_graphics_PixmapIO$PngReader_read_java_io_InputStream_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_PixmapIO$PngReader_read_java_io_InputStream_R_java_nio_ByteBuffer])(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(57);
	clinit_arc_graphics_Pixmap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Pixmap);
	init_arc_graphics_Pixmap_java_nio_ByteBuffer_int_int(ctx, sp[0].o, (frame[2].o), ((jint)((arc_graphics_PixmapIO$PngReader *) NULL_CHECK((frame[1].o)))->F_width), ((jint)((arc_graphics_PixmapIO$PngReader *) NULL_CHECK((frame[1].o)))->F_height));
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(58);
	frame[1].o = sp[0].o;
	LINE_NUMBER(59);
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Error reading PNG: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_arc_util_ArcRuntimeException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, sp[1].o, (frame[1].o));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject SM_arc_graphics_PixmapIO_readPNG_Array1_byte_R_arc_graphics_Pixmap(jcontext ctx, jobject param0) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/PixmapIO:readPNG", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_PixmapIO(ctx);
	frame[0].o = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(66);
	clinit_arc_graphics_PixmapIO$PngReader(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_PixmapIO$PngReader);
	init_arc_graphics_PixmapIO$PngReader(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(67);
	sp[0].o = frame[1].o;
	clinit_java_io_ByteArrayInputStream(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_io_ByteArrayInputStream);
	init_java_io_ByteArrayInputStream_Array1_byte(ctx, sp[1].o, (frame[0].o));
	sp[0].o = (jobject)((func_arc_graphics_PixmapIO$PngReader_read_java_io_InputStream_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_PixmapIO$PngReader_read_java_io_InputStream_R_java_nio_ByteBuffer])(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(68);
	clinit_arc_graphics_Pixmap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Pixmap);
	init_arc_graphics_Pixmap_java_nio_ByteBuffer_int_int(ctx, sp[0].o, (frame[2].o), ((jint)((arc_graphics_PixmapIO$PngReader *) NULL_CHECK((frame[1].o)))->F_width), ((jint)((arc_graphics_PixmapIO$PngReader *) NULL_CHECK((frame[1].o)))->F_height));
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(69);
	frame[1].o = sp[0].o;
	LINE_NUMBER(70);
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	init_arc_util_ArcRuntimeException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Error reading PNG"_j))), (frame[1].o));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void *vtable_arc_graphics_PixmapIO[] {
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

static jclass innerClasses[] {
	&class_arc_graphics_PixmapIO$PngWriter,
	&class_arc_graphics_PixmapIO$PngReader,
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_graphics_PixmapIO, 0, "()V", 1 },
	{ "writePng", (intptr_t) SM_arc_graphics_PixmapIO_writePng_arc_files_Fi_arc_graphics_Pixmap, 0, "(Larc/files/Fi;Larc/graphics/Pixmap;)V", 9 },
	{ "writePngBytes", (intptr_t) SM_arc_graphics_PixmapIO_writePngBytes_arc_graphics_Pixmap_R_Array1_byte, 0, "(Larc/graphics/Pixmap;)[B", 9 },
	{ "readPNG", (intptr_t) SM_arc_graphics_PixmapIO_readPNG_arc_files_Fi_R_arc_graphics_Pixmap, 0, "(Larc/files/Fi;)Larc/graphics/Pixmap;", 9 },
	{ "readPNG", (intptr_t) SM_arc_graphics_PixmapIO_readPNG_Array1_byte_R_arc_graphics_Pixmap, 0, "([B)Larc/graphics/Pixmap;", 9 },
};

Class class_arc_graphics_PixmapIO{
		.nativeName = (intptr_t) "arc/graphics/PixmapIO",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_graphics_PixmapIO),
		.classVtable = (intptr_t) vtable_arc_graphics_PixmapIO,
		.staticInitializer = (intptr_t) clinit_arc_graphics_PixmapIO,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_graphics_PixmapIO,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 2,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_graphics_PixmapIO = registerClass(&class_arc_graphics_PixmapIO);

}
