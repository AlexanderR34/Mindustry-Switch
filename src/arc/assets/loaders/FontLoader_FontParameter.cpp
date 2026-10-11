#include "arc/assets/loaders/FontLoader_FontParameter.h"
#include "arc/assets/loaders/FontLoader.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/graphics/g2d/Font_FontData.h"
#include "arc/graphics/Texture_TextureFilter.h"
#include "arc/assets/AssetLoaderParameters.h"
#include "arc/assets/loaders/FontLoader_FontParameter.h"

extern "C" {


void mark_arc_assets_loaders_FontLoader$FontParameter(jobject object, jint mark, jint depth) {
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
	auto self = (arc_assets_loaders_FontLoader$FontParameter *) object;
	if (self->F_minFilter)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_minFilter)->clazz)->markFunction)((jobject) self->F_minFilter, mark, depth + 1);
	if (self->F_magFilter)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_magFilter)->clazz)->markFunction)((jobject) self->F_magFilter, mark, depth + 1);
	if (self->F_fontData)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_fontData)->clazz)->markFunction)((jobject) self->F_fontData, mark, depth + 1);
	if (self->F_atlasName)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_atlasName)->clazz)->markFunction)((jobject) self->F_atlasName, mark, depth + 1);
}

void clinit_arc_assets_loaders_FontLoader$FontParameter(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_assets_AssetLoaderParameters(ctx);
}

void init_arc_assets_loaders_FontLoader$FontParameter(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/loaders/FontLoader$FontParameter:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_assets_loaders_FontLoader$FontParameter(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(92);
	init_arc_assets_AssetLoaderParameters(ctx, (frame[0].o));
	LINE_NUMBER(94);
	((arc_assets_loaders_FontLoader$FontParameter *) NULL_CHECK((frame[0].o)))->F_flip = (jint(0));
	LINE_NUMBER(97);
	((arc_assets_loaders_FontLoader$FontParameter *) NULL_CHECK((frame[0].o)))->F_genMipMaps = (jint(0));
	LINE_NUMBER(100);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Texture$TextureFilter(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Texture$TextureFilter_nearest;
	((arc_assets_loaders_FontLoader$FontParameter *) NULL_CHECK(sp[0].o))->F_minFilter = (jref) sp[1].o;
	LINE_NUMBER(103);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Texture$TextureFilter(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Texture$TextureFilter_nearest;
	((arc_assets_loaders_FontLoader$FontParameter *) NULL_CHECK(sp[0].o))->F_magFilter = (jref) sp[1].o;
	LINE_NUMBER(106);
	((arc_assets_loaders_FontLoader$FontParameter *) NULL_CHECK((frame[0].o)))->F_fontData = (jref) (jobject(nullptr));
	LINE_NUMBER(112);
	((arc_assets_loaders_FontLoader$FontParameter *) NULL_CHECK((frame[0].o)))->F_atlasName = (jref) (jobject(nullptr));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_assets_loaders_FontLoader$FontParameter[] {
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
	{ "flip", &class_boolean, offsetof(arc_assets_loaders_FontLoader$FontParameter, F_flip), "Z", 1 },
	{ "genMipMaps", &class_boolean, offsetof(arc_assets_loaders_FontLoader$FontParameter, F_genMipMaps), "Z", 1 },
	{ "minFilter", &class_arc_graphics_Texture$TextureFilter, offsetof(arc_assets_loaders_FontLoader$FontParameter, F_minFilter), "Larc/graphics/Texture$TextureFilter;", 1 },
	{ "magFilter", &class_arc_graphics_Texture$TextureFilter, offsetof(arc_assets_loaders_FontLoader$FontParameter, F_magFilter), "Larc/graphics/Texture$TextureFilter;", 1 },
	{ "fontData", &class_arc_graphics_g2d_Font$FontData, offsetof(arc_assets_loaders_FontLoader$FontParameter, F_fontData), "Larc/graphics/g2d/Font$FontData;", 1 },
	{ "atlasName", &class_java_lang_String, offsetof(arc_assets_loaders_FontLoader$FontParameter, F_atlasName), "Ljava/lang/String;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_assets_loaders_FontLoader$FontParameter, 0, "()V", 1 },
};

Class class_arc_assets_loaders_FontLoader$FontParameter{
		.nativeName = (intptr_t) "arc/assets/loaders/FontLoader$FontParameter",
		.parentClass = (intptr_t) &class_arc_assets_AssetLoaderParameters,
		.size = sizeof(arc_assets_loaders_FontLoader$FontParameter),
		.classVtable = (intptr_t) vtable_arc_assets_loaders_FontLoader$FontParameter,
		.staticInitializer = (intptr_t) clinit_arc_assets_loaders_FontLoader$FontParameter,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_assets_loaders_FontLoader$FontParameter,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_assets_loaders_FontLoader,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 6,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_assets_loaders_FontLoader$FontParameter = registerClass(&class_arc_assets_loaders_FontLoader$FontParameter);

}

