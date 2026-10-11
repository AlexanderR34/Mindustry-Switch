#include "arc/graphics/g2d/TextureAtlas_TextureAtlasData_Region.h"
#include "arc/graphics/g2d/TextureAtlas_TextureAtlasData_AtlasPage.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/graphics/g2d/TextureAtlas_TextureAtlasData.h"

extern "C" {


void mark_arc_graphics_g2d_TextureAtlas$TextureAtlasData$Region(jobject object, jint mark, jint depth) {
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
	auto self = (arc_graphics_g2d_TextureAtlas$TextureAtlasData$Region *) object;
	if (self->F_page)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_page)->clazz)->markFunction)((jobject) self->F_page, mark, depth + 1);
	if (self->F_name)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_name)->clazz)->markFunction)((jobject) self->F_name, mark, depth + 1);
	if (self->F_splits)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_splits)->clazz)->markFunction)((jobject) self->F_splits, mark, depth + 1);
	if (self->F_pads)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_pads)->clazz)->markFunction)((jobject) self->F_pads, mark, depth + 1);
}

void clinit_arc_graphics_g2d_TextureAtlas$TextureAtlasData$Region(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_graphics_g2d_TextureAtlas$TextureAtlasData$Region(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/TextureAtlas$TextureAtlasData$Region:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_TextureAtlas$TextureAtlasData$Region(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(400);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_graphics_g2d_TextureAtlas$TextureAtlasData$Region[] {
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
	{ "page", &class_arc_graphics_g2d_TextureAtlas$TextureAtlasData$AtlasPage, offsetof(arc_graphics_g2d_TextureAtlas$TextureAtlasData$Region, F_page), "Larc/graphics/g2d/TextureAtlas$TextureAtlasData$AtlasPage;", 1 },
	{ "name", &class_java_lang_String, offsetof(arc_graphics_g2d_TextureAtlas$TextureAtlasData$Region, F_name), "Ljava/lang/String;", 1 },
	{ "offsetX", &class_float, offsetof(arc_graphics_g2d_TextureAtlas$TextureAtlasData$Region, F_offsetX), "F", 1 },
	{ "offsetY", &class_float, offsetof(arc_graphics_g2d_TextureAtlas$TextureAtlasData$Region, F_offsetY), "F", 1 },
	{ "originalWidth", &class_int, offsetof(arc_graphics_g2d_TextureAtlas$TextureAtlasData$Region, F_originalWidth), "I", 1 },
	{ "originalHeight", &class_int, offsetof(arc_graphics_g2d_TextureAtlas$TextureAtlasData$Region, F_originalHeight), "I", 1 },
	{ "rotate", &class_boolean, offsetof(arc_graphics_g2d_TextureAtlas$TextureAtlasData$Region, F_rotate), "Z", 1 },
	{ "left", &class_int, offsetof(arc_graphics_g2d_TextureAtlas$TextureAtlasData$Region, F_left), "I", 1 },
	{ "top", &class_int, offsetof(arc_graphics_g2d_TextureAtlas$TextureAtlasData$Region, F_top), "I", 1 },
	{ "width", &class_int, offsetof(arc_graphics_g2d_TextureAtlas$TextureAtlasData$Region, F_width), "I", 1 },
	{ "height", &class_int, offsetof(arc_graphics_g2d_TextureAtlas$TextureAtlasData$Region, F_height), "I", 1 },
	{ "flip", &class_boolean, offsetof(arc_graphics_g2d_TextureAtlas$TextureAtlasData$Region, F_flip), "Z", 1 },
	{ "splits", getArrayClass(&class_int, 1), offsetof(arc_graphics_g2d_TextureAtlas$TextureAtlasData$Region, F_splits), "[I", 1 },
	{ "pads", getArrayClass(&class_int, 1), offsetof(arc_graphics_g2d_TextureAtlas$TextureAtlasData$Region, F_pads), "[I", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_graphics_g2d_TextureAtlas$TextureAtlasData$Region, 0, "()V", 1 },
};

Class class_arc_graphics_g2d_TextureAtlas$TextureAtlasData$Region{
		.nativeName = (intptr_t) "arc/graphics/g2d/TextureAtlas$TextureAtlasData$Region",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_graphics_g2d_TextureAtlas$TextureAtlasData$Region),
		.classVtable = (intptr_t) vtable_arc_graphics_g2d_TextureAtlas$TextureAtlasData$Region,
		.staticInitializer = (intptr_t) clinit_arc_graphics_g2d_TextureAtlas$TextureAtlasData$Region,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_graphics_g2d_TextureAtlas$TextureAtlasData$Region,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_graphics_g2d_TextureAtlas$TextureAtlasData,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 14,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_graphics_g2d_TextureAtlas$TextureAtlasData$Region = registerClass(&class_arc_graphics_g2d_TextureAtlas$TextureAtlasData$Region);

}

