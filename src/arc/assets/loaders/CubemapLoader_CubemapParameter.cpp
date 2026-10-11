#include "arc/assets/loaders/CubemapLoader_CubemapParameter.h"
#include "java/lang/Object.h"
#include "arc/graphics/CubemapData.h"
#include "arc/assets/loaders/CubemapLoader_CubemapParameter.h"
#include "arc/graphics/Texture_TextureFilter.h"
#include "arc/assets/loaders/CubemapLoader.h"
#include "arc/assets/AssetLoaderParameters.h"
#include "arc/graphics/Texture_TextureWrap.h"
#include "arc/graphics/Pixmap_Format.h"
#include "arc/graphics/Cubemap.h"

extern "C" {


void mark_arc_assets_loaders_CubemapLoader$CubemapParameter(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_assets_AssetLoaderParameters(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (arc_assets_loaders_CubemapLoader$CubemapParameter *) object;
	if (self->F_format)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_format)->clazz)->markFunction)((jobject) self->F_format, mark, depth + 1);
	if (self->F_cubemap)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_cubemap)->clazz)->markFunction)((jobject) self->F_cubemap, mark, depth + 1);
	if (self->F_cubemapData)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_cubemapData)->clazz)->markFunction)((jobject) self->F_cubemapData, mark, depth + 1);
	if (self->F_minFilter)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_minFilter)->clazz)->markFunction)((jobject) self->F_minFilter, mark, depth + 1);
	if (self->F_magFilter)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_magFilter)->clazz)->markFunction)((jobject) self->F_magFilter, mark, depth + 1);
	if (self->F_wrapU)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_wrapU)->clazz)->markFunction)((jobject) self->F_wrapU, mark, depth + 1);
	if (self->F_wrapV)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_wrapV)->clazz)->markFunction)((jobject) self->F_wrapV, mark, depth + 1);
}

void clinit_arc_assets_loaders_CubemapLoader$CubemapParameter(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_assets_AssetLoaderParameters(ctx);
}

void init_arc_assets_loaders_CubemapLoader$CubemapParameter(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/loaders/CubemapLoader$CubemapParameter:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_assets_loaders_CubemapLoader$CubemapParameter(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(67);
	init_arc_assets_AssetLoaderParameters(ctx, (frame[0].o));
	LINE_NUMBER(69);
	((arc_assets_loaders_CubemapLoader$CubemapParameter *) NULL_CHECK((frame[0].o)))->F_format = (jref) (jobject(nullptr));
	LINE_NUMBER(71);
	((arc_assets_loaders_CubemapLoader$CubemapParameter *) NULL_CHECK((frame[0].o)))->F_cubemap = (jref) (jobject(nullptr));
	LINE_NUMBER(73);
	((arc_assets_loaders_CubemapLoader$CubemapParameter *) NULL_CHECK((frame[0].o)))->F_cubemapData = (jref) (jobject(nullptr));
	LINE_NUMBER(74);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Texture$TextureFilter(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Texture$TextureFilter_nearest;
	((arc_assets_loaders_CubemapLoader$CubemapParameter *) NULL_CHECK(sp[0].o))->F_minFilter = (jref) sp[1].o;
	LINE_NUMBER(75);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Texture$TextureFilter(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Texture$TextureFilter_nearest;
	((arc_assets_loaders_CubemapLoader$CubemapParameter *) NULL_CHECK(sp[0].o))->F_magFilter = (jref) sp[1].o;
	LINE_NUMBER(76);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Texture$TextureWrap(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Texture$TextureWrap_clampToEdge;
	((arc_assets_loaders_CubemapLoader$CubemapParameter *) NULL_CHECK(sp[0].o))->F_wrapU = (jref) sp[1].o;
	LINE_NUMBER(77);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Texture$TextureWrap(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Texture$TextureWrap_clampToEdge;
	((arc_assets_loaders_CubemapLoader$CubemapParameter *) NULL_CHECK(sp[0].o))->F_wrapV = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_assets_loaders_CubemapLoader$CubemapParameter[] {
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
	{ "format", &class_arc_graphics_Pixmap$Format, offsetof(arc_assets_loaders_CubemapLoader$CubemapParameter, F_format), "Larc/graphics/Pixmap$Format;", 1 },
	{ "cubemap", &class_arc_graphics_Cubemap, offsetof(arc_assets_loaders_CubemapLoader$CubemapParameter, F_cubemap), "Larc/graphics/Cubemap;", 1 },
	{ "cubemapData", &class_arc_graphics_CubemapData, offsetof(arc_assets_loaders_CubemapLoader$CubemapParameter, F_cubemapData), "Larc/graphics/CubemapData;", 1 },
	{ "minFilter", &class_arc_graphics_Texture$TextureFilter, offsetof(arc_assets_loaders_CubemapLoader$CubemapParameter, F_minFilter), "Larc/graphics/Texture$TextureFilter;", 1 },
	{ "magFilter", &class_arc_graphics_Texture$TextureFilter, offsetof(arc_assets_loaders_CubemapLoader$CubemapParameter, F_magFilter), "Larc/graphics/Texture$TextureFilter;", 1 },
	{ "wrapU", &class_arc_graphics_Texture$TextureWrap, offsetof(arc_assets_loaders_CubemapLoader$CubemapParameter, F_wrapU), "Larc/graphics/Texture$TextureWrap;", 1 },
	{ "wrapV", &class_arc_graphics_Texture$TextureWrap, offsetof(arc_assets_loaders_CubemapLoader$CubemapParameter, F_wrapV), "Larc/graphics/Texture$TextureWrap;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_assets_loaders_CubemapLoader$CubemapParameter, 0, "()V", 1 },
};

Class class_arc_assets_loaders_CubemapLoader$CubemapParameter{
		.nativeName = (intptr_t) "arc/assets/loaders/CubemapLoader$CubemapParameter",
		.parentClass = (intptr_t) &class_arc_assets_AssetLoaderParameters,
		.size = sizeof(arc_assets_loaders_CubemapLoader$CubemapParameter),
		.classVtable = (intptr_t) vtable_arc_assets_loaders_CubemapLoader$CubemapParameter,
		.staticInitializer = (intptr_t) clinit_arc_assets_loaders_CubemapLoader$CubemapParameter,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_assets_loaders_CubemapLoader$CubemapParameter,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_assets_loaders_CubemapLoader,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 7,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_assets_loaders_CubemapLoader$CubemapParameter = registerClass(&class_arc_assets_loaders_CubemapLoader$CubemapParameter);

}

