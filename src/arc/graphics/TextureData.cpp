#include "arc/graphics/TextureData.h"
#include "arc/graphics/TextureData.h"
#include "java/lang/Object.h"
#include "arc/graphics/Pixmap.h"
#include "arc/files/Fi.h"
#include "arc/graphics/Pixmap_Format.h"
#include "arc/graphics/gl/FileTextureData.h"

extern "C" {


void mark_arc_graphics_TextureData(jobject object, jint mark, jint depth) {
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
	auto self = (arc_graphics_TextureData *) object;
}

void clinit_arc_graphics_TextureData(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

jobject M_arc_graphics_TextureData_getPixmap_R_arc_graphics_Pixmap(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/TextureData:getPixmap", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(45);
	jint temp0 = (jint)((func_arc_graphics_TextureData_isPrepared_R_boolean) resolveInterfaceMethod(ctx, &class_arc_graphics_TextureData, INDEX_arc_graphics_TextureData_isPrepared_R_boolean, (frame[0].o)))(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(46);
	((func_arc_graphics_TextureData_prepare) resolveInterfaceMethod(ctx, &class_arc_graphics_TextureData, INDEX_arc_graphics_TextureData_prepare, (frame[0].o)))(ctx, (frame[0].o));
	}
label_1:;
	{
	LINE_NUMBER(48);
	sp[0].o = (jobject)((func_arc_graphics_TextureData_consumePixmap_R_arc_graphics_Pixmap) resolveInterfaceMethod(ctx, &class_arc_graphics_TextureData, INDEX_arc_graphics_TextureData_consumePixmap_R_arc_graphics_Pixmap, (frame[0].o)))(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_graphics_TextureData_load_arc_files_Fi_boolean_R_arc_graphics_TextureData(jcontext ctx, jobject param0, jbool param1) {
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/TextureData:load", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_TextureData(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(73);
	clinit_arc_graphics_gl_FileTextureData(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_gl_FileTextureData);
	sp[1].o = frame[0].o;
	clinit_arc_graphics_Pixmap(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_graphics_Pixmap);
	init_arc_graphics_Pixmap_arc_files_Fi(ctx, sp[2].o, (frame[0].o));
	init_arc_graphics_gl_FileTextureData_arc_files_Fi_arc_graphics_Pixmap_boolean(ctx, sp[0].o, sp[1].o, sp[2].o, (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_arc_graphics_TextureData[] {
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
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_arc_graphics_TextureData_getPixmap_R_arc_graphics_Pixmap,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
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

static MethodMetadata methods[] {
	{ "isCustom", 0, INDEX_arc_graphics_TextureData_isCustom_R_boolean, "()Z", 1025 },
	{ "isPrepared", 0, INDEX_arc_graphics_TextureData_isPrepared_R_boolean, "()Z", 1025 },
	{ "prepare", 0, INDEX_arc_graphics_TextureData_prepare, "()V", 1025 },
	{ "consumePixmap", 0, INDEX_arc_graphics_TextureData_consumePixmap_R_arc_graphics_Pixmap, "()Larc/graphics/Pixmap;", 1025 },
	{ "getPixmap", (intptr_t) M_arc_graphics_TextureData_getPixmap_R_arc_graphics_Pixmap, INDEX_arc_graphics_TextureData_getPixmap_R_arc_graphics_Pixmap, "()Larc/graphics/Pixmap;", 1 },
	{ "disposePixmap", 0, INDEX_arc_graphics_TextureData_disposePixmap_R_boolean, "()Z", 1025 },
	{ "consumeCustomData", 0, INDEX_arc_graphics_TextureData_consumeCustomData_int, "(I)V", 1025 },
	{ "getWidth", 0, INDEX_arc_graphics_TextureData_getWidth_R_int, "()I", 1025 },
	{ "getHeight", 0, INDEX_arc_graphics_TextureData_getHeight_R_int, "()I", 1025 },
	{ "getFormat", 0, INDEX_arc_graphics_TextureData_getFormat_R_arc_graphics_Pixmap$Format, "()Larc/graphics/Pixmap$Format;", 1025 },
	{ "useMipMaps", 0, INDEX_arc_graphics_TextureData_useMipMaps_R_boolean, "()Z", 1025 },
	{ "load", (intptr_t) SM_arc_graphics_TextureData_load_arc_files_Fi_boolean_R_arc_graphics_TextureData, 0, "(Larc/files/Fi;Z)Larc/graphics/TextureData;", 9 },
};

Class class_arc_graphics_TextureData{
		.nativeName = (intptr_t) "arc/graphics/TextureData",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_graphics_TextureData),
		.classVtable = (intptr_t) vtable_arc_graphics_TextureData,
		.staticInitializer = (intptr_t) clinit_arc_graphics_TextureData,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_graphics_TextureData,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1537,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 12,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 22,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_graphics_TextureData = registerClass(&class_arc_graphics_TextureData);

}
