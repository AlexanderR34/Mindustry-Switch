#include "arc/assets/loaders/TextureLoader_TextureLoaderInfo.h"
#include "arc/graphics/TextureData.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/assets/loaders/TextureLoader.h"
#include "arc/graphics/Texture.h"

extern "C" {


void mark_arc_assets_loaders_TextureLoader$TextureLoaderInfo(jobject object, jint mark, jint depth) {
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
	auto self = (arc_assets_loaders_TextureLoader$TextureLoaderInfo *) object;
	if (self->F_filename)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_filename)->clazz)->markFunction)((jobject) self->F_filename, mark, depth + 1);
	if (self->F_data)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_data)->clazz)->markFunction)((jobject) self->F_data, mark, depth + 1);
	if (self->F_texture)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_texture)->clazz)->markFunction)((jobject) self->F_texture, mark, depth + 1);
}

void clinit_arc_assets_loaders_TextureLoader$TextureLoaderInfo(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_assets_loaders_TextureLoader$TextureLoaderInfo(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/loaders/TextureLoader$TextureLoaderInfo:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_assets_loaders_TextureLoader$TextureLoaderInfo(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(64);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_assets_loaders_TextureLoader$TextureLoaderInfo[] {
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
	{ "filename", &class_java_lang_String, offsetof(arc_assets_loaders_TextureLoader$TextureLoaderInfo, F_filename), "Ljava/lang/String;", 0 },
	{ "data", &class_arc_graphics_TextureData, offsetof(arc_assets_loaders_TextureLoader$TextureLoaderInfo, F_data), "Larc/graphics/TextureData;", 0 },
	{ "texture", &class_arc_graphics_Texture, offsetof(arc_assets_loaders_TextureLoader$TextureLoaderInfo, F_texture), "Larc/graphics/Texture;", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_assets_loaders_TextureLoader$TextureLoaderInfo, 0, "()V", 1 },
};

Class class_arc_assets_loaders_TextureLoader$TextureLoaderInfo{
		.nativeName = (intptr_t) "arc/assets/loaders/TextureLoader$TextureLoaderInfo",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_assets_loaders_TextureLoader$TextureLoaderInfo),
		.classVtable = (intptr_t) vtable_arc_assets_loaders_TextureLoader$TextureLoaderInfo,
		.staticInitializer = (intptr_t) clinit_arc_assets_loaders_TextureLoader$TextureLoaderInfo,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_assets_loaders_TextureLoader$TextureLoaderInfo,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_assets_loaders_TextureLoader,
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
static bool registered_arc_assets_loaders_TextureLoader$TextureLoaderInfo = registerClass(&class_arc_assets_loaders_TextureLoader$TextureLoaderInfo);

}

