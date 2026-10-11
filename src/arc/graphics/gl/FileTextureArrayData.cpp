#include "arc/graphics/gl/FileTextureArrayData.h"
#include "java/nio/ByteBuffer.h"
#include "arc/graphics/TextureData.h"
#include "java/lang/Object.h"
#include "arc/graphics/Pixmap.h"
#include "arc/Core.h"
#include "java/lang/String.h"
#include "java/nio/Buffer.h"
#include "arc/util/ArcRuntimeException.h"
#include "arc/graphics/TextureArrayData.h"
#include "arc/graphics/gl/FileTextureArrayData.h"
#include "arc/files/Fi.h"
#include "arc/graphics/GL30.h"

extern "C" {


void mark_arc_graphics_gl_FileTextureArrayData(jobject object, jint mark, jint depth) {
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
	auto self = (arc_graphics_gl_FileTextureArrayData *) object;
	if (self->F_textureDatas)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_textureDatas)->clazz)->markFunction)((jobject) self->F_textureDatas, mark, depth + 1);
}

void clinit_arc_graphics_gl_FileTextureArrayData(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_graphics_gl_FileTextureArrayData_boolean_Array1_arc_files_Fi(jcontext ctx, jobject self, jbool param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/FileTextureArrayData:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_gl_FileTextureArrayData(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(16);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(17);
	((arc_graphics_gl_FileTextureArrayData *) NULL_CHECK((frame[0].o)))->F_useMipMaps = (frame[1].i);
	LINE_NUMBER(18);
	((arc_graphics_gl_FileTextureArrayData *) NULL_CHECK((frame[0].o)))->F_depth = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	LINE_NUMBER(19);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_arc_graphics_TextureData, (((jarray) nullCheck(ctx, (frame[2].o)))->length));
	((arc_graphics_gl_FileTextureArrayData *) NULL_CHECK(sp[0].o))->F_textureDatas = (jref) sp[1].o;
	LINE_NUMBER(20);
	frame[3].i = (jint(0));
	}
label_5:;
	{
	if ((frame[3].i) >= (((jarray) nullCheck(ctx, (frame[2].o)))->length)) goto label_6;
	}
	{
	LINE_NUMBER(21);
	sp[0].o = (jobject)((arc_graphics_gl_FileTextureArrayData *) NULL_CHECK((frame[0].o)))->F_textureDatas;
	jint temp0 = frame[3].i;
	sp[1].o = (jobject)SM_arc_graphics_TextureData_load_arc_files_Fi_boolean_R_arc_graphics_TextureData(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[3].i))), (frame[1].i));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(20);
	INST_IINC(3, 1);
	goto label_5;
	}
label_6:;
	LINE_NUMBER(23);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_arc_graphics_gl_FileTextureArrayData_isPrepared_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/FileTextureArrayData:isPrepared", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(27);
	popStackFrame(ctx);
	return ((jint)((arc_graphics_gl_FileTextureArrayData *) NULL_CHECK((frame[0].o)))->F_prepared);
	}

	popStackFrame(ctx);
}

void M_arc_graphics_gl_FileTextureArrayData_prepare(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/FileTextureArrayData:prepare", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(32);
	frame[1].i = (jint(-1));
	LINE_NUMBER(33);
	frame[2].i = (jint(-1));
	LINE_NUMBER(34);
	sp[0].o = (jobject)((arc_graphics_gl_FileTextureArrayData *) NULL_CHECK((frame[0].o)))->F_textureDatas;
	frame[3].o = sp[0].o;
	frame[4].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	frame[5].i = (jint(0));
	}
label_3:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_4;
	}
	{
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(35);
	((func_arc_graphics_TextureData_prepare) resolveInterfaceMethod(ctx, &class_arc_graphics_TextureData, INDEX_arc_graphics_TextureData_prepare, (frame[6].o)))(ctx, (frame[6].o));
	LINE_NUMBER(36);
	if ((frame[1].i) != (jint(-1))) goto label_7;
	}
	{
	LINE_NUMBER(37);
	jint temp0 = (jint)((func_arc_graphics_TextureData_getWidth_R_int) resolveInterfaceMethod(ctx, &class_arc_graphics_TextureData, INDEX_arc_graphics_TextureData_getWidth_R_int, (frame[6].o)))(ctx, (frame[6].o));
	frame[1].i = temp0;
	LINE_NUMBER(38);
	jint temp1 = (jint)((func_arc_graphics_TextureData_getHeight_R_int) resolveInterfaceMethod(ctx, &class_arc_graphics_TextureData, INDEX_arc_graphics_TextureData_getHeight_R_int, (frame[6].o)))(ctx, (frame[6].o));
	frame[2].i = temp1;
	LINE_NUMBER(39);
	goto label_11;
	}
label_7:;
	{
	LINE_NUMBER(41);
	jint temp0 = frame[1].i;
	jint temp1 = (jint)((func_arc_graphics_TextureData_getWidth_R_int) resolveInterfaceMethod(ctx, &class_arc_graphics_TextureData, INDEX_arc_graphics_TextureData_getWidth_R_int, (frame[6].o)))(ctx, (frame[6].o));
	if (temp0 != temp1) goto label_12;
	}
	{
	jint temp0 = frame[2].i;
	jint temp1 = (jint)((func_arc_graphics_TextureData_getHeight_R_int) resolveInterfaceMethod(ctx, &class_arc_graphics_TextureData, INDEX_arc_graphics_TextureData_getHeight_R_int, (frame[6].o)))(ctx, (frame[6].o));
	if (temp0 == temp1) goto label_11;
	}
label_12:;
	{
	LINE_NUMBER(42);
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Error whilst preparing TextureArray: TextureArray Textures must have equal dimensions."_j))));
	throwException(ctx, sp[0].o);	}
label_11:;
	{
	LINE_NUMBER(34);
	INST_IINC(5, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(45);
	((arc_graphics_gl_FileTextureArrayData *) NULL_CHECK((frame[0].o)))->F_prepared = (jint(1));
	LINE_NUMBER(46);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_gl_FileTextureArrayData_consumeTextureArrayData(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/FileTextureArrayData:consumeTextureArrayData", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(50);
	frame[1].i = (jint(0));
	}
label_1:;
	{
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((arc_graphics_gl_FileTextureArrayData *) NULL_CHECK((frame[0].o)))->F_textureDatas;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_2;
	}
	{
	LINE_NUMBER(51);
	sp[0].o = (jobject)((arc_graphics_gl_FileTextureArrayData *) NULL_CHECK((frame[0].o)))->F_textureDatas;
	jint temp0 = (jint)((func_arc_graphics_TextureData_isCustom_R_boolean) resolveInterfaceMethod(ctx, &class_arc_graphics_TextureData, INDEX_arc_graphics_TextureData_isCustom_R_boolean, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)))))(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i))));
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(52);
	sp[0].o = (jobject)((arc_graphics_gl_FileTextureArrayData *) NULL_CHECK((frame[0].o)))->F_textureDatas;
	((func_arc_graphics_TextureData_consumeCustomData_int) resolveInterfaceMethod(ctx, &class_arc_graphics_TextureData, INDEX_arc_graphics_TextureData_consumeCustomData_int, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)))))(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i))), (jint(35866)));
	goto label_6;
	}
label_4:;
	{
	LINE_NUMBER(54);
	sp[0].o = (jobject)((arc_graphics_gl_FileTextureArrayData *) NULL_CHECK((frame[0].o)))->F_textureDatas;
	frame[2].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)));
	LINE_NUMBER(55);
	sp[0].o = (jobject)((func_arc_graphics_TextureData_consumePixmap_R_arc_graphics_Pixmap) resolveInterfaceMethod(ctx, &class_arc_graphics_TextureData, INDEX_arc_graphics_TextureData_consumePixmap_R_arc_graphics_Pixmap, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(56);
	jint temp0 = (jint)((func_arc_graphics_TextureData_disposePixmap_R_boolean) resolveInterfaceMethod(ctx, &class_arc_graphics_TextureData, INDEX_arc_graphics_TextureData_disposePixmap_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	frame[4].i = temp0;
	LINE_NUMBER(57);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl30;
	jint temp1 = jint(35866);
	jint temp2 = jint(0);
	jint temp3 = jint(0);
	jint temp4 = jint(0);
	jint temp5 = frame[1].i;
	jint temp6 = (jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[3].o)))->F_width;
	jint temp7 = (jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[3].o)))->F_height;
	jint temp8 = jint(1);
	jint temp9 = (jint)((func_arc_graphics_Pixmap_getGLInternalFormat_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_graphics_Pixmap_getGLInternalFormat_R_int])(ctx, (frame[3].o));
	jint temp10 = (jint)((func_arc_graphics_Pixmap_getGLType_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_graphics_Pixmap_getGLType_R_int])(ctx, (frame[3].o));
	sp[1].o = (jobject)((arc_graphics_Pixmap *) NULL_CHECK((frame[3].o)))->F_pixels;
	((func_arc_graphics_GL30_glTexSubImage3D_int_int_int_int_int_int_int_int_int_int_java_nio_Buffer) resolveInterfaceMethod(ctx, &class_arc_graphics_GL30, INDEX_arc_graphics_GL30_glTexSubImage3D_int_int_int_int_int_int_int_int_int_int_java_nio_Buffer, sp[0].o))(ctx, sp[0].o, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9, temp10, sp[1].o);
	LINE_NUMBER(58);
	if ((frame[4].i) == 0) goto label_6;
	}
	INST_ALOAD(3);
	POP_N(1); // Pop method args
	((func_arc_graphics_Pixmap_dispose) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Pixmap_dispose])(ctx, sp[0].o);
label_6:;
	{
	LINE_NUMBER(50);
	INST_IINC(1, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(61);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_arc_graphics_gl_FileTextureArrayData_getWidth_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/FileTextureArrayData:getWidth", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(65);
	sp[0].o = (jobject)((arc_graphics_gl_FileTextureArrayData *) NULL_CHECK((frame[0].o)))->F_textureDatas;
	jint temp0 = (jint)((func_arc_graphics_TextureData_getWidth_R_int) resolveInterfaceMethod(ctx, &class_arc_graphics_TextureData, INDEX_arc_graphics_TextureData_getWidth_R_int, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0))))))(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0)))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_arc_graphics_gl_FileTextureArrayData_getHeight_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/FileTextureArrayData:getHeight", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(70);
	sp[0].o = (jobject)((arc_graphics_gl_FileTextureArrayData *) NULL_CHECK((frame[0].o)))->F_textureDatas;
	jint temp0 = (jint)((func_arc_graphics_TextureData_getHeight_R_int) resolveInterfaceMethod(ctx, &class_arc_graphics_TextureData, INDEX_arc_graphics_TextureData_getHeight_R_int, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0))))))(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0)))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_arc_graphics_gl_FileTextureArrayData_getDepth_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/FileTextureArrayData:getDepth", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(75);
	popStackFrame(ctx);
	return ((jint)((arc_graphics_gl_FileTextureArrayData *) NULL_CHECK((frame[0].o)))->F_depth);
	}

	popStackFrame(ctx);
}

jint M_arc_graphics_gl_FileTextureArrayData_getInternalFormat_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/FileTextureArrayData:getInternalFormat", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(80);
	popStackFrame(ctx);
	return (5121);
	}

	popStackFrame(ctx);
}

jint M_arc_graphics_gl_FileTextureArrayData_getGLType_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/FileTextureArrayData:getGLType", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(85);
	popStackFrame(ctx);
	return (6408);
	}

	popStackFrame(ctx);
}

void *vtable_arc_graphics_gl_FileTextureArrayData[] {
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
	(void *) M_arc_graphics_gl_FileTextureArrayData_isPrepared_R_boolean,
	(void *) M_arc_graphics_gl_FileTextureArrayData_prepare,
	(void *) M_arc_graphics_gl_FileTextureArrayData_consumeTextureArrayData,
	(void *) M_arc_graphics_gl_FileTextureArrayData_getWidth_R_int,
	(void *) M_arc_graphics_gl_FileTextureArrayData_getHeight_R_int,
	(void *) M_arc_graphics_gl_FileTextureArrayData_getDepth_R_int,
	(void *) M_arc_graphics_gl_FileTextureArrayData_getInternalFormat_R_int,
	(void *) M_arc_graphics_gl_FileTextureArrayData_getGLType_R_int,
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
	{ "isPrepared", "()Z" },
	{ "prepare", "()V" },
	{ "consumeTextureArrayData", "()V" },
	{ "getWidth", "()I" },
	{ "getHeight", "()I" },
	{ "getDepth", "()I" },
	{ "getInternalFormat", "()I" },
	{ "getGLType", "()I" },
};

static jclass interfaces[] { &class_arc_graphics_TextureArrayData, };

static FieldMetadata fields[] {
	{ "useMipMaps", &class_boolean, offsetof(arc_graphics_gl_FileTextureArrayData, F_useMipMaps), "Z", 0 },
	{ "textureDatas", getArrayClass(&class_arc_graphics_TextureData, 1), offsetof(arc_graphics_gl_FileTextureArrayData, F_textureDatas), "[Larc/graphics/TextureData;", 2 },
	{ "prepared", &class_boolean, offsetof(arc_graphics_gl_FileTextureArrayData, F_prepared), "Z", 2 },
	{ "depth", &class_int, offsetof(arc_graphics_gl_FileTextureArrayData, F_depth), "I", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_graphics_gl_FileTextureArrayData_boolean_Array1_arc_files_Fi, 0, "(Z[Larc/files/Fi;)V", 1 },
	{ "isPrepared", (intptr_t) M_arc_graphics_gl_FileTextureArrayData_isPrepared_R_boolean, VTABLE_arc_graphics_gl_FileTextureArrayData_isPrepared_R_boolean, "()Z", 1 },
	{ "prepare", (intptr_t) M_arc_graphics_gl_FileTextureArrayData_prepare, VTABLE_arc_graphics_gl_FileTextureArrayData_prepare, "()V", 1 },
	{ "consumeTextureArrayData", (intptr_t) M_arc_graphics_gl_FileTextureArrayData_consumeTextureArrayData, VTABLE_arc_graphics_gl_FileTextureArrayData_consumeTextureArrayData, "()V", 1 },
	{ "getWidth", (intptr_t) M_arc_graphics_gl_FileTextureArrayData_getWidth_R_int, VTABLE_arc_graphics_gl_FileTextureArrayData_getWidth_R_int, "()I", 1 },
	{ "getHeight", (intptr_t) M_arc_graphics_gl_FileTextureArrayData_getHeight_R_int, VTABLE_arc_graphics_gl_FileTextureArrayData_getHeight_R_int, "()I", 1 },
	{ "getDepth", (intptr_t) M_arc_graphics_gl_FileTextureArrayData_getDepth_R_int, VTABLE_arc_graphics_gl_FileTextureArrayData_getDepth_R_int, "()I", 1 },
	{ "getInternalFormat", (intptr_t) M_arc_graphics_gl_FileTextureArrayData_getInternalFormat_R_int, VTABLE_arc_graphics_gl_FileTextureArrayData_getInternalFormat_R_int, "()I", 1 },
	{ "getGLType", (intptr_t) M_arc_graphics_gl_FileTextureArrayData_getGLType_R_int, VTABLE_arc_graphics_gl_FileTextureArrayData_getGLType_R_int, "()I", 1 },
};

Class class_arc_graphics_gl_FileTextureArrayData{
		.nativeName = (intptr_t) "arc/graphics/gl/FileTextureArrayData",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_graphics_gl_FileTextureArrayData),
		.classVtable = (intptr_t) vtable_arc_graphics_gl_FileTextureArrayData,
		.staticInitializer = (intptr_t) clinit_arc_graphics_gl_FileTextureArrayData,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_graphics_gl_FileTextureArrayData,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 9,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 19,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_graphics_gl_FileTextureArrayData = registerClass(&class_arc_graphics_gl_FileTextureArrayData);

}
