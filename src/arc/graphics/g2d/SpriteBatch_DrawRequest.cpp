#include "arc/graphics/g2d/SpriteBatch_DrawRequest.h"
#include "java/lang/Object.h"
#include "arc/graphics/g2d/SpriteBatch.h"
#include "arc/graphics/Texture.h"
#include "arc/graphics/Blending.h"
#include "java/lang/Runnable.h"

extern "C" {


void mark_arc_graphics_g2d_SpriteBatch$DrawRequest(jobject object, jint mark, jint depth) {
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
	auto self = (arc_graphics_g2d_SpriteBatch$DrawRequest *) object;
	if (self->F_texture)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_texture)->clazz)->markFunction)((jobject) self->F_texture, mark, depth + 1);
	if (self->F_blending)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_blending)->clazz)->markFunction)((jobject) self->F_blending, mark, depth + 1);
	if (self->F_run)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_run)->clazz)->markFunction)((jobject) self->F_run, mark, depth + 1);
}

void clinit_arc_graphics_g2d_SpriteBatch$DrawRequest(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_graphics_g2d_SpriteBatch$DrawRequest(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/SpriteBatch$DrawRequest:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_SpriteBatch$DrawRequest(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(50);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_graphics_g2d_SpriteBatch$DrawRequest[] {
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
	{ "verticesOffset", &class_int, offsetof(arc_graphics_g2d_SpriteBatch$DrawRequest, F_verticesOffset), "I", 0 },
	{ "verticesLength", &class_int, offsetof(arc_graphics_g2d_SpriteBatch$DrawRequest, F_verticesLength), "I", 0 },
	{ "texture", &class_arc_graphics_Texture, offsetof(arc_graphics_g2d_SpriteBatch$DrawRequest, F_texture), "Larc/graphics/Texture;", 0 },
	{ "blending", &class_arc_graphics_Blending, offsetof(arc_graphics_g2d_SpriteBatch$DrawRequest, F_blending), "Larc/graphics/Blending;", 0 },
	{ "run", &class_java_lang_Runnable, offsetof(arc_graphics_g2d_SpriteBatch$DrawRequest, F_run), "Ljava/lang/Runnable;", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_graphics_g2d_SpriteBatch$DrawRequest, 0, "()V", 4 },
};

Class class_arc_graphics_g2d_SpriteBatch$DrawRequest{
		.nativeName = (intptr_t) "arc/graphics/g2d/SpriteBatch$DrawRequest",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_graphics_g2d_SpriteBatch$DrawRequest),
		.classVtable = (intptr_t) vtable_arc_graphics_g2d_SpriteBatch$DrawRequest,
		.staticInitializer = (intptr_t) clinit_arc_graphics_g2d_SpriteBatch$DrawRequest,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_graphics_g2d_SpriteBatch$DrawRequest,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_graphics_g2d_SpriteBatch,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_graphics_g2d_SpriteBatch$DrawRequest = registerClass(&class_arc_graphics_g2d_SpriteBatch$DrawRequest);

}

