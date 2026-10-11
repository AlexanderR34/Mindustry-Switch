#include "arc/graphics/gl/SpriteIndices_1.h"
#include "java/lang/Object.h"
#include "arc/util/Disposable.h"
#include "arc/graphics/gl/IndexBufferObject.h"
#include "arc/graphics/gl/SpriteIndices_1.h"

extern "C" {


void mark_arc_graphics_gl_SpriteIndices$1(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_graphics_gl_IndexBufferObject(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (arc_graphics_gl_SpriteIndices$1 *) object;
}

void clinit_arc_graphics_gl_SpriteIndices$1(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_graphics_gl_IndexBufferObject(ctx);
}

void init_arc_graphics_gl_SpriteIndices$1_boolean_int(jcontext ctx, jobject self, jbool param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/SpriteIndices$1:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_gl_SpriteIndices$1(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(21);
	init_arc_graphics_gl_IndexBufferObject_boolean_int(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_gl_SpriteIndices$1_dispose(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/SpriteIndices$1:dispose", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(25);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_arc_graphics_gl_SpriteIndices$1[] {
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
	(void *) M_arc_graphics_gl_SpriteIndices$1_dispose,
	(void *) M_arc_util_Disposable_isDisposed_R_boolean,
	(void *) M_arc_graphics_gl_IndexBufferObject_size_R_int,
	(void *) M_arc_graphics_gl_IndexBufferObject_max_R_int,
	(void *) M_arc_graphics_gl_IndexBufferObject_set_Array1_short_int_int,
	(void *) M_arc_graphics_gl_IndexBufferObject_set_java_nio_ShortBuffer,
	(void *) M_arc_graphics_gl_IndexBufferObject_update_int_Array1_short_int_int,
	(void *) M_arc_graphics_gl_IndexBufferObject_buffer_R_java_nio_ShortBuffer,
	(void *) M_arc_graphics_gl_IndexBufferObject_bind,
	(void *) M_arc_graphics_gl_IndexBufferObject_unbind,
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
	{ "dispose", "()V" },
	{ "isDisposed", "()Z" },
	{ "size", "()I" },
	{ "max", "()I" },
	{ "set", "([SII)V" },
	{ "set", "(Ljava/nio/ShortBuffer;)V" },
	{ "update", "(I[SII)V" },
	{ "buffer", "()Ljava/nio/ShortBuffer;" },
	{ "bind", "()V" },
	{ "unbind", "()V" },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_graphics_gl_SpriteIndices$1_boolean_int, 0, "(ZI)V", 0 },
	{ "dispose", (intptr_t) M_arc_graphics_gl_SpriteIndices$1_dispose, VTABLE_arc_graphics_gl_SpriteIndices$1_dispose, "()V", 1 },
};

Class class_arc_graphics_gl_SpriteIndices$1{
		.nativeName = (intptr_t) "arc/graphics/gl/SpriteIndices$1",
		.parentClass = (intptr_t) &class_arc_graphics_gl_IndexBufferObject,
		.size = sizeof(arc_graphics_gl_SpriteIndices$1),
		.classVtable = (intptr_t) vtable_arc_graphics_gl_SpriteIndices$1,
		.staticInitializer = (intptr_t) clinit_arc_graphics_gl_SpriteIndices$1,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_graphics_gl_SpriteIndices$1,
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
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 21,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_arc_graphics_gl_SpriteIndices$1 = registerClass(&class_arc_graphics_gl_SpriteIndices$1);

}

