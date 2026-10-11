#include "arc/graphics/g2d/SpriteCache_Cache.h"
#include "arc/graphics/g2d/SpriteCache.h"
#include "java/lang/Object.h"
#include "arc/graphics/g2d/SpriteCache_Cache.h"
#include "arc/graphics/Texture.h"

extern "C" {


void mark_arc_graphics_g2d_SpriteCache$Cache(jobject object, jint mark, jint depth) {
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
	auto self = (arc_graphics_g2d_SpriteCache$Cache *) object;
	if (self->F_textures)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_textures)->clazz)->markFunction)((jobject) self->F_textures, mark, depth + 1);
	if (self->F_counts)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_counts)->clazz)->markFunction)((jobject) self->F_counts, mark, depth + 1);
}

void clinit_arc_graphics_g2d_SpriteCache$Cache(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_graphics_g2d_SpriteCache$Cache_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/SpriteCache$Cache:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_SpriteCache$Cache(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(621);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(622);
	((arc_graphics_g2d_SpriteCache$Cache *) NULL_CHECK((frame[0].o)))->F_id = (frame[1].i);
	LINE_NUMBER(623);
	((arc_graphics_g2d_SpriteCache$Cache *) NULL_CHECK((frame[0].o)))->F_offset = (frame[2].i);
	LINE_NUMBER(624);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_graphics_g2d_SpriteCache$Cache[] {
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
	{ "id", &class_int, offsetof(arc_graphics_g2d_SpriteCache$Cache, F_id), "I", 16 },
	{ "offset", &class_int, offsetof(arc_graphics_g2d_SpriteCache$Cache, F_offset), "I", 16 },
	{ "maxCount", &class_int, offsetof(arc_graphics_g2d_SpriteCache$Cache, F_maxCount), "I", 0 },
	{ "textureCount", &class_int, offsetof(arc_graphics_g2d_SpriteCache$Cache, F_textureCount), "I", 0 },
	{ "textures", getArrayClass(&class_arc_graphics_Texture, 1), offsetof(arc_graphics_g2d_SpriteCache$Cache, F_textures), "[Larc/graphics/Texture;", 0 },
	{ "counts", getArrayClass(&class_int, 1), offsetof(arc_graphics_g2d_SpriteCache$Cache, F_counts), "[I", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_graphics_g2d_SpriteCache$Cache_int_int, 0, "(II)V", 1 },
};

Class class_arc_graphics_g2d_SpriteCache$Cache{
		.nativeName = (intptr_t) "arc/graphics/g2d/SpriteCache$Cache",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_graphics_g2d_SpriteCache$Cache),
		.classVtable = (intptr_t) vtable_arc_graphics_g2d_SpriteCache$Cache,
		.staticInitializer = (intptr_t) clinit_arc_graphics_g2d_SpriteCache$Cache,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_graphics_g2d_SpriteCache$Cache,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_graphics_g2d_SpriteCache,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
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
static bool registered_arc_graphics_g2d_SpriteCache$Cache = registerClass(&class_arc_graphics_g2d_SpriteCache$Cache);

}

