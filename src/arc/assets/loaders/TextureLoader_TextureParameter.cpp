#include "arc/assets/loaders/TextureLoader_TextureParameter.h"
#include "arc/graphics/TextureData.h"
#include "java/lang/Object.h"
#include "arc/assets/loaders/TextureLoader_TextureParameter.h"
#include "arc/assets/loaders/TextureLoader.h"
#include "arc/graphics/Texture_TextureFilter.h"
#include "arc/assets/AssetLoaderParameters.h"
#include "arc/graphics/Texture_TextureWrap.h"
#include "arc/graphics/Texture.h"

extern "C" {


void mark_arc_assets_loaders_TextureLoader$TextureParameter(jobject object, jint mark, jint depth) {
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
	auto self = (arc_assets_loaders_TextureLoader$TextureParameter *) object;
	if (self->F_texture)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_texture)->clazz)->markFunction)((jobject) self->F_texture, mark, depth + 1);
	if (self->F_textureData)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_textureData)->clazz)->markFunction)((jobject) self->F_textureData, mark, depth + 1);
	if (self->F_minFilter)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_minFilter)->clazz)->markFunction)((jobject) self->F_minFilter, mark, depth + 1);
	if (self->F_magFilter)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_magFilter)->clazz)->markFunction)((jobject) self->F_magFilter, mark, depth + 1);
	if (self->F_wrapU)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_wrapU)->clazz)->markFunction)((jobject) self->F_wrapU, mark, depth + 1);
	if (self->F_wrapV)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_wrapV)->clazz)->markFunction)((jobject) self->F_wrapV, mark, depth + 1);
}

void clinit_arc_assets_loaders_TextureLoader$TextureParameter(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_assets_AssetLoaderParameters(ctx);
}

void init_arc_assets_loaders_TextureLoader$TextureParameter(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/loaders/TextureLoader$TextureParameter:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_assets_loaders_TextureLoader$TextureParameter(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(82);
	init_arc_assets_AssetLoaderParameters(ctx, (frame[0].o));
	LINE_NUMBER(72);
	((arc_assets_loaders_TextureLoader$TextureParameter *) NULL_CHECK((frame[0].o)))->F_genMipMaps = (jint(0));
	LINE_NUMBER(74);
	((arc_assets_loaders_TextureLoader$TextureParameter *) NULL_CHECK((frame[0].o)))->F_texture = (jref) (jobject(nullptr));
	LINE_NUMBER(76);
	((arc_assets_loaders_TextureLoader$TextureParameter *) NULL_CHECK((frame[0].o)))->F_textureData = (jref) (jobject(nullptr));
	LINE_NUMBER(77);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Texture$TextureFilter(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Texture$TextureFilter_nearest;
	((arc_assets_loaders_TextureLoader$TextureParameter *) NULL_CHECK(sp[0].o))->F_minFilter = (jref) sp[1].o;
	LINE_NUMBER(78);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Texture$TextureFilter(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Texture$TextureFilter_nearest;
	((arc_assets_loaders_TextureLoader$TextureParameter *) NULL_CHECK(sp[0].o))->F_magFilter = (jref) sp[1].o;
	LINE_NUMBER(79);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Texture$TextureWrap(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Texture$TextureWrap_clampToEdge;
	((arc_assets_loaders_TextureLoader$TextureParameter *) NULL_CHECK(sp[0].o))->F_wrapU = (jref) sp[1].o;
	LINE_NUMBER(80);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Texture$TextureWrap(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Texture$TextureWrap_clampToEdge;
	((arc_assets_loaders_TextureLoader$TextureParameter *) NULL_CHECK(sp[0].o))->F_wrapV = (jref) sp[1].o;
	LINE_NUMBER(83);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_assets_loaders_TextureLoader$TextureParameter[] {
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
	{ "genMipMaps", &class_boolean, offsetof(arc_assets_loaders_TextureLoader$TextureParameter, F_genMipMaps), "Z", 1 },
	{ "texture", &class_arc_graphics_Texture, offsetof(arc_assets_loaders_TextureLoader$TextureParameter, F_texture), "Larc/graphics/Texture;", 1 },
	{ "textureData", &class_arc_graphics_TextureData, offsetof(arc_assets_loaders_TextureLoader$TextureParameter, F_textureData), "Larc/graphics/TextureData;", 1 },
	{ "minFilter", &class_arc_graphics_Texture$TextureFilter, offsetof(arc_assets_loaders_TextureLoader$TextureParameter, F_minFilter), "Larc/graphics/Texture$TextureFilter;", 1 },
	{ "magFilter", &class_arc_graphics_Texture$TextureFilter, offsetof(arc_assets_loaders_TextureLoader$TextureParameter, F_magFilter), "Larc/graphics/Texture$TextureFilter;", 1 },
	{ "wrapU", &class_arc_graphics_Texture$TextureWrap, offsetof(arc_assets_loaders_TextureLoader$TextureParameter, F_wrapU), "Larc/graphics/Texture$TextureWrap;", 1 },
	{ "wrapV", &class_arc_graphics_Texture$TextureWrap, offsetof(arc_assets_loaders_TextureLoader$TextureParameter, F_wrapV), "Larc/graphics/Texture$TextureWrap;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_assets_loaders_TextureLoader$TextureParameter, 0, "()V", 1 },
};

Class class_arc_assets_loaders_TextureLoader$TextureParameter{
		.nativeName = (intptr_t) "arc/assets/loaders/TextureLoader$TextureParameter",
		.parentClass = (intptr_t) &class_arc_assets_AssetLoaderParameters,
		.size = sizeof(arc_assets_loaders_TextureLoader$TextureParameter),
		.classVtable = (intptr_t) vtable_arc_assets_loaders_TextureLoader$TextureParameter,
		.staticInitializer = (intptr_t) clinit_arc_assets_loaders_TextureLoader$TextureParameter,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_assets_loaders_TextureLoader$TextureParameter,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_assets_loaders_TextureLoader,
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
static bool registered_arc_assets_loaders_TextureLoader$TextureParameter = registerClass(&class_arc_assets_loaders_TextureLoader$TextureParameter);

}

