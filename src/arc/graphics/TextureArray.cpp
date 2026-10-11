#include "arc/graphics/TextureArray.h"
#include "arc/graphics/GLTexture.h"
#include "arc/Core.h"
#include "arc/util/Disposable.h"
#include "arc/graphics/TextureArrayData.h"
#include "arc/Files.h"
#include "arc/graphics/gl/FileTextureArrayData.h"
#include "arc/files/Fi.h"
#include "arc/graphics/GL30.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/nio/Buffer.h"
#include "arc/util/ArcRuntimeException.h"
#include "arc/graphics/Texture_TextureFilter.h"
#include "arc/graphics/TextureArray.h"
#include "arc/graphics/Gl.h"
#include "arc/graphics/Texture_TextureWrap.h"

extern "C" {


void mark_arc_graphics_TextureArray(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_graphics_GLTexture(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (arc_graphics_TextureArray *) object;
	if (self->F_data)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_data)->clazz)->markFunction)((jobject) self->F_data, mark, depth + 1);
}

void clinit_arc_graphics_TextureArray(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_graphics_GLTexture(ctx);
}

void init_arc_graphics_TextureArray_Array1_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/TextureArray:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_TextureArray(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(16);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_arc_graphics_TextureArray_getInternalHandles_Array1_java_lang_String_R_Array1_arc_files_Fi(ctx, (frame[1].o));
	init_arc_graphics_TextureArray_Array1_arc_files_Fi(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(17);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_graphics_TextureArray_Array1_arc_files_Fi(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/TextureArray:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_TextureArray(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(20);
	init_arc_graphics_TextureArray_boolean_Array1_arc_files_Fi(ctx, (frame[0].o), (jint(0)), (frame[1].o));
	LINE_NUMBER(21);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_graphics_TextureArray_boolean_Array1_arc_files_Fi(jcontext ctx, jobject self, jbool param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/TextureArray:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_TextureArray(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(24);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_gl_FileTextureArrayData(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_gl_FileTextureArrayData);
	init_arc_graphics_gl_FileTextureArrayData_boolean_Array1_arc_files_Fi(ctx, sp[1].o, (frame[1].i), (frame[2].o));
	init_arc_graphics_TextureArray_arc_graphics_TextureArrayData(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(25);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_graphics_TextureArray_arc_graphics_TextureArrayData(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/TextureArray:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_TextureArray(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(28);
	sp[0].o = frame[0].o;
	jint temp0 = jint(35866);
	jint temp1 = (jint)SM_arc_graphics_Gl_genTexture_R_int(ctx);
	init_arc_graphics_GLTexture_int_int(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(30);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl30;
	if (sp[0].o != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(31);
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"TextureArray requires a device running with GLES 3.0 compatibilty"_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(34);
	M_arc_graphics_TextureArray_load_arc_graphics_TextureArrayData(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(35);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_arc_graphics_TextureArray_getInternalHandles_Array1_java_lang_String_R_Array1_arc_files_Fi(jcontext ctx, jobject param0) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/TextureArray:getInternalHandles", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_TextureArray(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(38);
	sp[0].o = (jobject)createArray(ctx, &class_arc_files_Fi, (((jarray) nullCheck(ctx, (frame[0].o)))->length));
	frame[1].o = sp[0].o;
	LINE_NUMBER(39);
	frame[2].i = (jint(0));
	}
label_2:;
	{
	if ((frame[2].i) >= (((jarray) nullCheck(ctx, (frame[0].o)))->length)) goto label_3;
	}
	{
	LINE_NUMBER(40);
	sp[0].o = frame[1].o;
	jint temp0 = frame[2].i;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_files;
	sp[1].o = (jobject)((func_arc_Files_internal_java_lang_String_R_arc_files_Fi) resolveInterfaceMethod(ctx, &class_arc_Files, INDEX_arc_Files_internal_java_lang_String_R_arc_files_Fi, sp[1].o))(ctx, sp[1].o, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[2].i))));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(39);
	INST_IINC(2, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(42);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

void M_arc_graphics_TextureArray_load_arc_graphics_TextureArrayData(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/TextureArray:load", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(46);
	((arc_graphics_TextureArray *) NULL_CHECK((frame[0].o)))->F_data = (jref) (frame[1].o);
	LINE_NUMBER(47);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_arc_graphics_TextureArrayData_getWidth_R_int) resolveInterfaceMethod(ctx, &class_arc_graphics_TextureArrayData, INDEX_arc_graphics_TextureArrayData_getWidth_R_int, (frame[1].o)))(ctx, (frame[1].o));
	((arc_graphics_GLTexture *) NULL_CHECK(sp[0].o))->F_width = temp0;
	LINE_NUMBER(48);
	sp[0].o = frame[0].o;
	jint temp1 = (jint)((func_arc_graphics_TextureArrayData_getHeight_R_int) resolveInterfaceMethod(ctx, &class_arc_graphics_TextureArrayData, INDEX_arc_graphics_TextureArrayData_getHeight_R_int, (frame[1].o)))(ctx, (frame[1].o));
	((arc_graphics_GLTexture *) NULL_CHECK(sp[0].o))->F_height = temp1;
	LINE_NUMBER(50);
	((func_arc_graphics_TextureArray_bind) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_TextureArray_bind])(ctx, (frame[0].o));
	LINE_NUMBER(51);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl30;
	jint temp2 = jint(35866);
	jint temp3 = jint(0);
	jint temp4 = (jint)((func_arc_graphics_TextureArrayData_getInternalFormat_R_int) resolveInterfaceMethod(ctx, &class_arc_graphics_TextureArrayData, INDEX_arc_graphics_TextureArrayData_getInternalFormat_R_int, (frame[1].o)))(ctx, (frame[1].o));
	jint temp5 = (jint)((func_arc_graphics_TextureArrayData_getWidth_R_int) resolveInterfaceMethod(ctx, &class_arc_graphics_TextureArrayData, INDEX_arc_graphics_TextureArrayData_getWidth_R_int, (frame[1].o)))(ctx, (frame[1].o));
	jint temp6 = (jint)((func_arc_graphics_TextureArrayData_getHeight_R_int) resolveInterfaceMethod(ctx, &class_arc_graphics_TextureArrayData, INDEX_arc_graphics_TextureArrayData_getHeight_R_int, (frame[1].o)))(ctx, (frame[1].o));
	jint temp7 = (jint)((func_arc_graphics_TextureArrayData_getDepth_R_int) resolveInterfaceMethod(ctx, &class_arc_graphics_TextureArrayData, INDEX_arc_graphics_TextureArrayData_getDepth_R_int, (frame[1].o)))(ctx, (frame[1].o));
	jint temp8 = jint(0);
	jint temp9 = (jint)((func_arc_graphics_TextureArrayData_getInternalFormat_R_int) resolveInterfaceMethod(ctx, &class_arc_graphics_TextureArrayData, INDEX_arc_graphics_TextureArrayData_getInternalFormat_R_int, (frame[1].o)))(ctx, (frame[1].o));
	jint temp10 = (jint)((func_arc_graphics_TextureArrayData_getGLType_R_int) resolveInterfaceMethod(ctx, &class_arc_graphics_TextureArrayData, INDEX_arc_graphics_TextureArrayData_getGLType_R_int, (frame[1].o)))(ctx, (frame[1].o));
	((func_arc_graphics_GL30_glTexImage3D_int_int_int_int_int_int_int_int_int_java_nio_Buffer) resolveInterfaceMethod(ctx, &class_arc_graphics_GL30, INDEX_arc_graphics_GL30_glTexImage3D_int_int_int_int_int_int_int_int_int_java_nio_Buffer, sp[0].o))(ctx, sp[0].o, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9, temp10, (jobject(nullptr)));
	LINE_NUMBER(53);
	jint temp11 = (jint)((func_arc_graphics_TextureArrayData_isPrepared_R_boolean) resolveInterfaceMethod(ctx, &class_arc_graphics_TextureArrayData, INDEX_arc_graphics_TextureArrayData_isPrepared_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp11 != 0) goto label_6;
	}
	INST_ALOAD(1);
	POP_N(1); // Pop method args
	((func_arc_graphics_TextureArrayData_prepare) resolveInterfaceMethod(ctx, &class_arc_graphics_TextureArrayData, INDEX_arc_graphics_TextureArrayData_prepare, sp[0].o))(ctx, sp[0].o);
label_6:;
	{
	LINE_NUMBER(55);
	((func_arc_graphics_TextureArrayData_consumeTextureArrayData) resolveInterfaceMethod(ctx, &class_arc_graphics_TextureArrayData, INDEX_arc_graphics_TextureArrayData_consumeTextureArrayData, (frame[1].o)))(ctx, (frame[1].o));
	LINE_NUMBER(57);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_graphics_GLTexture *) NULL_CHECK((frame[0].o)))->F_minFilter;
	sp[2].o = (jobject)((arc_graphics_GLTexture *) NULL_CHECK((frame[0].o)))->F_magFilter;
	((func_arc_graphics_TextureArray_setFilter_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_TextureArray_setFilter_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(58);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_graphics_GLTexture *) NULL_CHECK((frame[0].o)))->F_uWrap;
	sp[2].o = (jobject)((arc_graphics_GLTexture *) NULL_CHECK((frame[0].o)))->F_vWrap;
	((func_arc_graphics_TextureArray_setWrap_arc_graphics_Texture$TextureWrap_arc_graphics_Texture$TextureWrap) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_TextureArray_setWrap_arc_graphics_Texture$TextureWrap_arc_graphics_Texture$TextureWrap])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(59);
	SM_arc_graphics_Gl_bindTexture_int_int(ctx, ((jint)((arc_graphics_GLTexture *) NULL_CHECK((frame[0].o)))->F_glTarget), (jint(0)));
	LINE_NUMBER(60);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_arc_graphics_TextureArray_getDepth_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/TextureArray:getDepth", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(64);
	sp[0].o = (jobject)((arc_graphics_TextureArray *) NULL_CHECK((frame[0].o)))->F_data;
	jint temp0 = (jint)((func_arc_graphics_TextureArrayData_getDepth_R_int) resolveInterfaceMethod(ctx, &class_arc_graphics_TextureArrayData, INDEX_arc_graphics_TextureArrayData_getDepth_R_int, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void *vtable_arc_graphics_TextureArray[] {
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
	(void *) M_arc_graphics_GLTexture_dispose,
	(void *) M_arc_util_Disposable_isDisposed_R_boolean,
	(void *) M_arc_graphics_TextureArray_getDepth_R_int,
	(void *) M_arc_graphics_GLTexture_bind,
	(void *) M_arc_graphics_GLTexture_bind_int,
	(void *) M_arc_graphics_GLTexture_getMinFilter_R_arc_graphics_Texture$TextureFilter,
	(void *) M_arc_graphics_GLTexture_getMagFilter_R_arc_graphics_Texture$TextureFilter,
	(void *) M_arc_graphics_GLTexture_getUWrap_R_arc_graphics_Texture$TextureWrap,
	(void *) M_arc_graphics_GLTexture_getVWrap_R_arc_graphics_Texture$TextureWrap,
	(void *) M_arc_graphics_GLTexture_getTextureObjectHandle_R_int,
	(void *) M_arc_graphics_GLTexture_unsafeSetWrap_arc_graphics_Texture$TextureWrap_arc_graphics_Texture$TextureWrap,
	(void *) M_arc_graphics_GLTexture_unsafeSetWrap_arc_graphics_Texture$TextureWrap_arc_graphics_Texture$TextureWrap_boolean,
	(void *) M_arc_graphics_GLTexture_setWrap_arc_graphics_Texture$TextureWrap,
	(void *) M_arc_graphics_GLTexture_setWrap_arc_graphics_Texture$TextureWrap_arc_graphics_Texture$TextureWrap,
	(void *) M_arc_graphics_GLTexture_unsafeSetFilter_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter,
	(void *) M_arc_graphics_GLTexture_unsafeSetFilter_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter_boolean,
	(void *) M_arc_graphics_GLTexture_setFilter_arc_graphics_Texture$TextureFilter,
	(void *) M_arc_graphics_GLTexture_setFilter_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter,
	(void *) M_arc_graphics_TextureArray_load_arc_graphics_TextureArrayData,
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
	{ "getDepth", "()I" },
	{ "bind", "()V" },
	{ "bind", "(I)V" },
	{ "getMinFilter", "()Larc/graphics/Texture$TextureFilter;" },
	{ "getMagFilter", "()Larc/graphics/Texture$TextureFilter;" },
	{ "getUWrap", "()Larc/graphics/Texture$TextureWrap;" },
	{ "getVWrap", "()Larc/graphics/Texture$TextureWrap;" },
	{ "getTextureObjectHandle", "()I" },
	{ "unsafeSetWrap", "(Larc/graphics/Texture$TextureWrap;Larc/graphics/Texture$TextureWrap;)V" },
	{ "unsafeSetWrap", "(Larc/graphics/Texture$TextureWrap;Larc/graphics/Texture$TextureWrap;Z)V" },
	{ "setWrap", "(Larc/graphics/Texture$TextureWrap;)V" },
	{ "setWrap", "(Larc/graphics/Texture$TextureWrap;Larc/graphics/Texture$TextureWrap;)V" },
	{ "unsafeSetFilter", "(Larc/graphics/Texture$TextureFilter;Larc/graphics/Texture$TextureFilter;)V" },
	{ "unsafeSetFilter", "(Larc/graphics/Texture$TextureFilter;Larc/graphics/Texture$TextureFilter;Z)V" },
	{ "setFilter", "(Larc/graphics/Texture$TextureFilter;)V" },
	{ "setFilter", "(Larc/graphics/Texture$TextureFilter;Larc/graphics/Texture$TextureFilter;)V" },
	{ "load", "(Larc/graphics/TextureArrayData;)V" },
};

static FieldMetadata fields[] {
	{ "data", &class_arc_graphics_TextureArrayData, offsetof(arc_graphics_TextureArray, F_data), "Larc/graphics/TextureArrayData;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_graphics_TextureArray_Array1_java_lang_String, 0, "([Ljava/lang/String;)V", 129 },
	{ "<init>", (intptr_t) init_arc_graphics_TextureArray_Array1_arc_files_Fi, 0, "([Larc/files/Fi;)V", 129 },
	{ "<init>", (intptr_t) init_arc_graphics_TextureArray_boolean_Array1_arc_files_Fi, 0, "(Z[Larc/files/Fi;)V", 129 },
	{ "<init>", (intptr_t) init_arc_graphics_TextureArray_arc_graphics_TextureArrayData, 0, "(Larc/graphics/TextureArrayData;)V", 1 },
	{ "getInternalHandles", (intptr_t) SM_arc_graphics_TextureArray_getInternalHandles_Array1_java_lang_String_R_Array1_arc_files_Fi, 0, "([Ljava/lang/String;)[Larc/files/Fi;", 138 },
	{ "load", (intptr_t) M_arc_graphics_TextureArray_load_arc_graphics_TextureArrayData, VTABLE_arc_graphics_TextureArray_load_arc_graphics_TextureArrayData, "(Larc/graphics/TextureArrayData;)V", 2 },
	{ "getDepth", (intptr_t) M_arc_graphics_TextureArray_getDepth_R_int, VTABLE_arc_graphics_TextureArray_getDepth_R_int, "()I", 1 },
};

Class class_arc_graphics_TextureArray{
		.nativeName = (intptr_t) "arc/graphics/TextureArray",
		.parentClass = (intptr_t) &class_arc_graphics_GLTexture,
		.size = sizeof(arc_graphics_TextureArray),
		.classVtable = (intptr_t) vtable_arc_graphics_TextureArray,
		.staticInitializer = (intptr_t) clinit_arc_graphics_TextureArray,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_graphics_TextureArray,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 7,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 30,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_graphics_TextureArray = registerClass(&class_arc_graphics_TextureArray);

}
