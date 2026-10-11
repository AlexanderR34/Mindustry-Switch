#include "mindustry/graphics/EnvRenderers_1.h"
#include "java/lang/Object.h"
#include "arc/assets/loaders/TextureLoader_TextureParameter.h"
#include "arc/graphics/Texture_TextureFilter.h"
#include "arc/graphics/Texture_TextureWrap.h"
#include "mindustry/graphics/EnvRenderers_1.h"

extern "C" {


void mark_mindustry_graphics_EnvRenderers$1(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_assets_loaders_TextureLoader$TextureParameter(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_graphics_EnvRenderers$1 *) object;
}

void clinit_mindustry_graphics_EnvRenderers$1(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_assets_loaders_TextureLoader$TextureParameter(ctx);
}

void init_mindustry_graphics_EnvRenderers$1(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/EnvRenderers$1:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_EnvRenderers$1(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(92);
	init_arc_assets_loaders_TextureLoader$TextureParameter(ctx, (frame[0].o));
	LINE_NUMBER(93);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Texture$TextureFilter(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Texture$TextureFilter_linear;
	((arc_assets_loaders_TextureLoader$TextureParameter *) NULL_CHECK(sp[0].o))->F_magFilter = (jref) sp[1].o;
	LINE_NUMBER(94);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Texture$TextureFilter(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Texture$TextureFilter_mipMapLinearLinear;
	((arc_assets_loaders_TextureLoader$TextureParameter *) NULL_CHECK(sp[0].o))->F_minFilter = (jref) sp[1].o;
	LINE_NUMBER(95);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	clinit_arc_graphics_Texture$TextureWrap(ctx);
	sp[2].o = (jobject)SF_arc_graphics_Texture$TextureWrap_repeat;
	((arc_assets_loaders_TextureLoader$TextureParameter *) NULL_CHECK(sp[1].o))->F_wrapV = (jref) sp[2].o;
	((arc_assets_loaders_TextureLoader$TextureParameter *) NULL_CHECK(sp[0].o))->F_wrapU = (jref) sp[2].o;
	LINE_NUMBER(96);
	((arc_assets_loaders_TextureLoader$TextureParameter *) NULL_CHECK((frame[0].o)))->F_genMipMaps = (jint(1));
	LINE_NUMBER(1);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_graphics_EnvRenderers$1[] {
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

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_graphics_EnvRenderers$1, 0, "()V", 0 },
};

Class class_mindustry_graphics_EnvRenderers$1{
		.nativeName = (intptr_t) "mindustry/graphics/EnvRenderers$1",
		.parentClass = (intptr_t) &class_arc_assets_loaders_TextureLoader$TextureParameter,
		.size = sizeof(mindustry_graphics_EnvRenderers$1),
		.classVtable = (intptr_t) vtable_mindustry_graphics_EnvRenderers$1,
		.staticInitializer = (intptr_t) clinit_mindustry_graphics_EnvRenderers$1,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_graphics_EnvRenderers$1,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_mindustry_graphics_EnvRenderers$1 = registerClass(&class_mindustry_graphics_EnvRenderers$1);

}

