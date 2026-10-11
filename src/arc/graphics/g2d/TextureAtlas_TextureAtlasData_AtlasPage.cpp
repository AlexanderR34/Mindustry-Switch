#include "arc/graphics/g2d/TextureAtlas_TextureAtlasData_AtlasPage.h"
#include "arc/graphics/g2d/TextureAtlas_TextureAtlasData_AtlasPage.h"
#include "java/lang/Object.h"
#include "arc/graphics/g2d/TextureAtlas_TextureAtlasData.h"
#include "arc/graphics/Texture_TextureFilter.h"
#include "arc/graphics/Texture_TextureWrap.h"
#include "arc/files/Fi.h"
#include "arc/graphics/Texture.h"

extern "C" {


void mark_arc_graphics_g2d_TextureAtlas$TextureAtlasData$AtlasPage(jobject object, jint mark, jint depth) {
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
	auto self = (arc_graphics_g2d_TextureAtlas$TextureAtlasData$AtlasPage *) object;
	if (self->F_textureFile)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_textureFile)->clazz)->markFunction)((jobject) self->F_textureFile, mark, depth + 1);
	if (self->F_minFilter)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_minFilter)->clazz)->markFunction)((jobject) self->F_minFilter, mark, depth + 1);
	if (self->F_magFilter)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_magFilter)->clazz)->markFunction)((jobject) self->F_magFilter, mark, depth + 1);
	if (self->F_uWrap)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_uWrap)->clazz)->markFunction)((jobject) self->F_uWrap, mark, depth + 1);
	if (self->F_vWrap)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_vWrap)->clazz)->markFunction)((jobject) self->F_vWrap, mark, depth + 1);
	if (self->F_texture)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_texture)->clazz)->markFunction)((jobject) self->F_texture, mark, depth + 1);
}

void clinit_arc_graphics_g2d_TextureAtlas$TextureAtlasData$AtlasPage(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_graphics_g2d_TextureAtlas$TextureAtlasData$AtlasPage_arc_files_Fi_int_int_boolean_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureWrap_arc_graphics_Texture$TextureWrap(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jbool param3, jobject param4, jobject param5, jobject param6, jobject param7) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/TextureAtlas$TextureAtlasData$AtlasPage:<init>", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_TextureAtlas$TextureAtlasData$AtlasPage(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	frame[6].o = param5;
	frame[7].o = param6;
	frame[8].o = param7;
	{
	LINE_NUMBER(388);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(389);
	((arc_graphics_g2d_TextureAtlas$TextureAtlasData$AtlasPage *) NULL_CHECK((frame[0].o)))->F_width = (frame[2].i);
	LINE_NUMBER(390);
	((arc_graphics_g2d_TextureAtlas$TextureAtlasData$AtlasPage *) NULL_CHECK((frame[0].o)))->F_height = (frame[3].i);
	LINE_NUMBER(391);
	((arc_graphics_g2d_TextureAtlas$TextureAtlasData$AtlasPage *) NULL_CHECK((frame[0].o)))->F_textureFile = (jref) (frame[1].o);
	LINE_NUMBER(392);
	((arc_graphics_g2d_TextureAtlas$TextureAtlasData$AtlasPage *) NULL_CHECK((frame[0].o)))->F_useMipMaps = (frame[4].i);
	LINE_NUMBER(393);
	((arc_graphics_g2d_TextureAtlas$TextureAtlasData$AtlasPage *) NULL_CHECK((frame[0].o)))->F_minFilter = (jref) (frame[5].o);
	LINE_NUMBER(394);
	((arc_graphics_g2d_TextureAtlas$TextureAtlasData$AtlasPage *) NULL_CHECK((frame[0].o)))->F_magFilter = (jref) (frame[6].o);
	LINE_NUMBER(395);
	((arc_graphics_g2d_TextureAtlas$TextureAtlasData$AtlasPage *) NULL_CHECK((frame[0].o)))->F_uWrap = (jref) (frame[7].o);
	LINE_NUMBER(396);
	((arc_graphics_g2d_TextureAtlas$TextureAtlasData$AtlasPage *) NULL_CHECK((frame[0].o)))->F_vWrap = (jref) (frame[8].o);
	LINE_NUMBER(397);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_graphics_g2d_TextureAtlas$TextureAtlasData$AtlasPage[] {
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

static FieldMetadata fields[] {
	{ "textureFile", &class_arc_files_Fi, offsetof(arc_graphics_g2d_TextureAtlas$TextureAtlasData$AtlasPage, F_textureFile), "Larc/files/Fi;", 17 },
	{ "width", &class_int, offsetof(arc_graphics_g2d_TextureAtlas$TextureAtlasData$AtlasPage, F_width), "I", 17 },
	{ "height", &class_int, offsetof(arc_graphics_g2d_TextureAtlas$TextureAtlasData$AtlasPage, F_height), "I", 17 },
	{ "useMipMaps", &class_boolean, offsetof(arc_graphics_g2d_TextureAtlas$TextureAtlasData$AtlasPage, F_useMipMaps), "Z", 17 },
	{ "minFilter", &class_arc_graphics_Texture$TextureFilter, offsetof(arc_graphics_g2d_TextureAtlas$TextureAtlasData$AtlasPage, F_minFilter), "Larc/graphics/Texture$TextureFilter;", 17 },
	{ "magFilter", &class_arc_graphics_Texture$TextureFilter, offsetof(arc_graphics_g2d_TextureAtlas$TextureAtlasData$AtlasPage, F_magFilter), "Larc/graphics/Texture$TextureFilter;", 17 },
	{ "uWrap", &class_arc_graphics_Texture$TextureWrap, offsetof(arc_graphics_g2d_TextureAtlas$TextureAtlasData$AtlasPage, F_uWrap), "Larc/graphics/Texture$TextureWrap;", 17 },
	{ "vWrap", &class_arc_graphics_Texture$TextureWrap, offsetof(arc_graphics_g2d_TextureAtlas$TextureAtlasData$AtlasPage, F_vWrap), "Larc/graphics/Texture$TextureWrap;", 17 },
	{ "texture", &class_arc_graphics_Texture, offsetof(arc_graphics_g2d_TextureAtlas$TextureAtlasData$AtlasPage, F_texture), "Larc/graphics/Texture;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_graphics_g2d_TextureAtlas$TextureAtlasData$AtlasPage_arc_files_Fi_int_int_boolean_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureWrap_arc_graphics_Texture$TextureWrap, 0, "(Larc/files/Fi;IIZLarc/graphics/Texture$TextureFilter;Larc/graphics/Texture$TextureFilter;Larc/graphics/Texture$TextureWrap;Larc/graphics/Texture$TextureWrap;)V", 1 },
};

Class class_arc_graphics_g2d_TextureAtlas$TextureAtlasData$AtlasPage{
		.nativeName = (intptr_t) "arc/graphics/g2d/TextureAtlas$TextureAtlasData$AtlasPage",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_graphics_g2d_TextureAtlas$TextureAtlasData$AtlasPage),
		.classVtable = (intptr_t) vtable_arc_graphics_g2d_TextureAtlas$TextureAtlasData$AtlasPage,
		.staticInitializer = (intptr_t) clinit_arc_graphics_g2d_TextureAtlas$TextureAtlasData$AtlasPage,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_graphics_g2d_TextureAtlas$TextureAtlasData$AtlasPage,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_graphics_g2d_TextureAtlas$TextureAtlasData,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 9,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_graphics_g2d_TextureAtlas$TextureAtlasData$AtlasPage = registerClass(&class_arc_graphics_g2d_TextureAtlas$TextureAtlasData$AtlasPage);

}

