#include "arc/assets/loaders/TextureAtlasLoader_TextureAtlasParameter.h"
#include "java/lang/Object.h"
#include "arc/assets/AssetLoaderParameters.h"
#include "arc/assets/AssetLoaderParameters_LoadedCallback.h"
#include "arc/assets/loaders/TextureAtlasLoader.h"
#include "arc/assets/loaders/TextureAtlasLoader_TextureAtlasParameter.h"

extern "C" {


void mark_arc_assets_loaders_TextureAtlasLoader$TextureAtlasParameter(jobject object, jint mark, jint depth) {
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
	auto self = (arc_assets_loaders_TextureAtlasLoader$TextureAtlasParameter *) object;
}

void clinit_arc_assets_loaders_TextureAtlasLoader$TextureAtlasParameter(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_assets_AssetLoaderParameters(ctx);
}

void init_arc_assets_loaders_TextureAtlasLoader$TextureAtlasParameter(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/loaders/TextureAtlasLoader$TextureAtlasParameter:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_assets_loaders_TextureAtlasLoader$TextureAtlasParameter(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(61);
	init_arc_assets_AssetLoaderParameters(ctx, (frame[0].o));
	LINE_NUMBER(59);
	((arc_assets_loaders_TextureAtlasLoader$TextureAtlasParameter *) NULL_CHECK((frame[0].o)))->F_flip = (jint(0));
	LINE_NUMBER(62);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_assets_loaders_TextureAtlasLoader$TextureAtlasParameter_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/loaders/TextureAtlasLoader$TextureAtlasParameter:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_assets_loaders_TextureAtlasLoader$TextureAtlasParameter(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(64);
	init_arc_assets_AssetLoaderParameters(ctx, (frame[0].o));
	LINE_NUMBER(59);
	((arc_assets_loaders_TextureAtlasLoader$TextureAtlasParameter *) NULL_CHECK((frame[0].o)))->F_flip = (jint(0));
	LINE_NUMBER(65);
	((arc_assets_loaders_TextureAtlasLoader$TextureAtlasParameter *) NULL_CHECK((frame[0].o)))->F_flip = (frame[1].i);
	LINE_NUMBER(66);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_assets_loaders_TextureAtlasLoader$TextureAtlasParameter_arc_assets_AssetLoaderParameters$LoadedCallback(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/loaders/TextureAtlasLoader$TextureAtlasParameter:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_assets_loaders_TextureAtlasLoader$TextureAtlasParameter(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(69);
	init_arc_assets_AssetLoaderParameters_arc_assets_AssetLoaderParameters$LoadedCallback(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(59);
	((arc_assets_loaders_TextureAtlasLoader$TextureAtlasParameter *) NULL_CHECK((frame[0].o)))->F_flip = (jint(0));
	LINE_NUMBER(70);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_assets_loaders_TextureAtlasLoader$TextureAtlasParameter[] {
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
	{ "flip", &class_boolean, offsetof(arc_assets_loaders_TextureAtlasLoader$TextureAtlasParameter, F_flip), "Z", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_assets_loaders_TextureAtlasLoader$TextureAtlasParameter, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_arc_assets_loaders_TextureAtlasLoader$TextureAtlasParameter_boolean, 0, "(Z)V", 1 },
	{ "<init>", (intptr_t) init_arc_assets_loaders_TextureAtlasLoader$TextureAtlasParameter_arc_assets_AssetLoaderParameters$LoadedCallback, 0, "(Larc/assets/AssetLoaderParameters$LoadedCallback;)V", 1 },
};

Class class_arc_assets_loaders_TextureAtlasLoader$TextureAtlasParameter{
		.nativeName = (intptr_t) "arc/assets/loaders/TextureAtlasLoader$TextureAtlasParameter",
		.parentClass = (intptr_t) &class_arc_assets_AssetLoaderParameters,
		.size = sizeof(arc_assets_loaders_TextureAtlasLoader$TextureAtlasParameter),
		.classVtable = (intptr_t) vtable_arc_assets_loaders_TextureAtlasLoader$TextureAtlasParameter,
		.staticInitializer = (intptr_t) clinit_arc_assets_loaders_TextureAtlasLoader$TextureAtlasParameter,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_assets_loaders_TextureAtlasLoader$TextureAtlasParameter,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_assets_loaders_TextureAtlasLoader,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_assets_loaders_TextureAtlasLoader$TextureAtlasParameter = registerClass(&class_arc_assets_loaders_TextureAtlasLoader$TextureAtlasParameter);

}

