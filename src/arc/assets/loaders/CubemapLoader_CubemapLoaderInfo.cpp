#include "arc/assets/loaders/CubemapLoader_CubemapLoaderInfo.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/graphics/CubemapData.h"
#include "arc/assets/loaders/CubemapLoader.h"
#include "arc/graphics/Cubemap.h"

extern "C" {


void mark_arc_assets_loaders_CubemapLoader$CubemapLoaderInfo(jobject object, jint mark, jint depth) {
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
	auto self = (arc_assets_loaders_CubemapLoader$CubemapLoaderInfo *) object;
	if (self->F_filename)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_filename)->clazz)->markFunction)((jobject) self->F_filename, mark, depth + 1);
	if (self->F_data)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_data)->clazz)->markFunction)((jobject) self->F_data, mark, depth + 1);
	if (self->F_cubemap)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_cubemap)->clazz)->markFunction)((jobject) self->F_cubemap, mark, depth + 1);
}

void clinit_arc_assets_loaders_CubemapLoader$CubemapLoaderInfo(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_assets_loaders_CubemapLoader$CubemapLoaderInfo(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/loaders/CubemapLoader$CubemapLoaderInfo:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_assets_loaders_CubemapLoader$CubemapLoaderInfo(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(61);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_assets_loaders_CubemapLoader$CubemapLoaderInfo[] {
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
	{ "filename", &class_java_lang_String, offsetof(arc_assets_loaders_CubemapLoader$CubemapLoaderInfo, F_filename), "Ljava/lang/String;", 0 },
	{ "data", &class_arc_graphics_CubemapData, offsetof(arc_assets_loaders_CubemapLoader$CubemapLoaderInfo, F_data), "Larc/graphics/CubemapData;", 0 },
	{ "cubemap", &class_arc_graphics_Cubemap, offsetof(arc_assets_loaders_CubemapLoader$CubemapLoaderInfo, F_cubemap), "Larc/graphics/Cubemap;", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_assets_loaders_CubemapLoader$CubemapLoaderInfo, 0, "()V", 1 },
};

Class class_arc_assets_loaders_CubemapLoader$CubemapLoaderInfo{
		.nativeName = (intptr_t) "arc/assets/loaders/CubemapLoader$CubemapLoaderInfo",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_assets_loaders_CubemapLoader$CubemapLoaderInfo),
		.classVtable = (intptr_t) vtable_arc_assets_loaders_CubemapLoader$CubemapLoaderInfo,
		.staticInitializer = (intptr_t) clinit_arc_assets_loaders_CubemapLoader$CubemapLoaderInfo,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_assets_loaders_CubemapLoader$CubemapLoaderInfo,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_assets_loaders_CubemapLoader,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_assets_loaders_CubemapLoader$CubemapLoaderInfo = registerClass(&class_arc_assets_loaders_CubemapLoader$CubemapLoaderInfo);

}

