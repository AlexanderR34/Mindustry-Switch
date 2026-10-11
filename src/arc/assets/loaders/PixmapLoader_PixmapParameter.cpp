#include "arc/assets/loaders/PixmapLoader_PixmapParameter.h"
#include "java/lang/Object.h"
#include "arc/assets/loaders/PixmapLoader.h"
#include "arc/assets/AssetLoaderParameters.h"

extern "C" {


void mark_arc_assets_loaders_PixmapLoader$PixmapParameter(jobject object, jint mark, jint depth) {
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
	auto self = (arc_assets_loaders_PixmapLoader$PixmapParameter *) object;
}

void clinit_arc_assets_loaders_PixmapLoader$PixmapParameter(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_assets_AssetLoaderParameters(ctx);
}

void init_arc_assets_loaders_PixmapLoader$PixmapParameter(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/loaders/PixmapLoader$PixmapParameter:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_assets_loaders_PixmapLoader$PixmapParameter(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(39);
	init_arc_assets_AssetLoaderParameters(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_assets_loaders_PixmapLoader$PixmapParameter[] {
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
	{ "<init>", (intptr_t) init_arc_assets_loaders_PixmapLoader$PixmapParameter, 0, "()V", 1 },
};

Class class_arc_assets_loaders_PixmapLoader$PixmapParameter{
		.nativeName = (intptr_t) "arc/assets/loaders/PixmapLoader$PixmapParameter",
		.parentClass = (intptr_t) &class_arc_assets_AssetLoaderParameters,
		.size = sizeof(arc_assets_loaders_PixmapLoader$PixmapParameter),
		.classVtable = (intptr_t) vtable_arc_assets_loaders_PixmapLoader$PixmapParameter,
		.staticInitializer = (intptr_t) clinit_arc_assets_loaders_PixmapLoader$PixmapParameter,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_assets_loaders_PixmapLoader$PixmapParameter,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_assets_loaders_PixmapLoader,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_assets_loaders_PixmapLoader$PixmapParameter = registerClass(&class_arc_assets_loaders_PixmapLoader$PixmapParameter);

}

