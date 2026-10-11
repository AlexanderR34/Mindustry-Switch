#include "arc/graphics/gl/GLFrameBuffer_FrameBufferTextureAttachmentSpec.h"
#include "java/lang/Object.h"
#include "arc/graphics/gl/GLFrameBuffer.h"
#include "arc/graphics/gl/GLFrameBuffer_FrameBufferTextureAttachmentSpec.h"

extern "C" {


void mark_arc_graphics_gl_GLFrameBuffer$FrameBufferTextureAttachmentSpec(jobject object, jint mark, jint depth) {
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
	auto self = (arc_graphics_gl_GLFrameBuffer$FrameBufferTextureAttachmentSpec *) object;
}

void clinit_arc_graphics_gl_GLFrameBuffer$FrameBufferTextureAttachmentSpec(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_graphics_gl_GLFrameBuffer$FrameBufferTextureAttachmentSpec_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/GLFrameBuffer$FrameBufferTextureAttachmentSpec:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_gl_GLFrameBuffer$FrameBufferTextureAttachmentSpec(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(409);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(410);
	((arc_graphics_gl_GLFrameBuffer$FrameBufferTextureAttachmentSpec *) NULL_CHECK((frame[0].o)))->F_internalFormat = (frame[1].i);
	LINE_NUMBER(411);
	((arc_graphics_gl_GLFrameBuffer$FrameBufferTextureAttachmentSpec *) NULL_CHECK((frame[0].o)))->F_format = (frame[2].i);
	LINE_NUMBER(412);
	((arc_graphics_gl_GLFrameBuffer$FrameBufferTextureAttachmentSpec *) NULL_CHECK((frame[0].o)))->F_type = (frame[3].i);
	LINE_NUMBER(413);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_graphics_gl_GLFrameBuffer$FrameBufferTextureAttachmentSpec_isColorTexture_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/GLFrameBuffer$FrameBufferTextureAttachmentSpec:isColorTexture", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(416);
	if (((jint)((arc_graphics_gl_GLFrameBuffer$FrameBufferTextureAttachmentSpec *) NULL_CHECK((frame[0].o)))->F_isDepth) != 0) goto label_1;
	}
	{
	if (((jint)((arc_graphics_gl_GLFrameBuffer$FrameBufferTextureAttachmentSpec *) NULL_CHECK((frame[0].o)))->F_isStencil) != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void *vtable_arc_graphics_gl_GLFrameBuffer$FrameBufferTextureAttachmentSpec[] {
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
	(void *) M_arc_graphics_gl_GLFrameBuffer$FrameBufferTextureAttachmentSpec_isColorTexture_R_boolean,
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
	{ "isColorTexture", "()Z" },
};

static FieldMetadata fields[] {
	{ "internalFormat", &class_int, offsetof(arc_graphics_gl_GLFrameBuffer$FrameBufferTextureAttachmentSpec, F_internalFormat), "I", 0 },
	{ "format", &class_int, offsetof(arc_graphics_gl_GLFrameBuffer$FrameBufferTextureAttachmentSpec, F_format), "I", 0 },
	{ "type", &class_int, offsetof(arc_graphics_gl_GLFrameBuffer$FrameBufferTextureAttachmentSpec, F_type), "I", 0 },
	{ "isFloat", &class_boolean, offsetof(arc_graphics_gl_GLFrameBuffer$FrameBufferTextureAttachmentSpec, F_isFloat), "Z", 0 },
	{ "isGpuOnly", &class_boolean, offsetof(arc_graphics_gl_GLFrameBuffer$FrameBufferTextureAttachmentSpec, F_isGpuOnly), "Z", 0 },
	{ "isDepth", &class_boolean, offsetof(arc_graphics_gl_GLFrameBuffer$FrameBufferTextureAttachmentSpec, F_isDepth), "Z", 0 },
	{ "isStencil", &class_boolean, offsetof(arc_graphics_gl_GLFrameBuffer$FrameBufferTextureAttachmentSpec, F_isStencil), "Z", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_graphics_gl_GLFrameBuffer$FrameBufferTextureAttachmentSpec_int_int_int, 0, "(III)V", 1 },
	{ "isColorTexture", (intptr_t) M_arc_graphics_gl_GLFrameBuffer$FrameBufferTextureAttachmentSpec_isColorTexture_R_boolean, VTABLE_arc_graphics_gl_GLFrameBuffer$FrameBufferTextureAttachmentSpec_isColorTexture_R_boolean, "()Z", 1 },
};

Class class_arc_graphics_gl_GLFrameBuffer$FrameBufferTextureAttachmentSpec{
		.nativeName = (intptr_t) "arc/graphics/gl/GLFrameBuffer$FrameBufferTextureAttachmentSpec",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_graphics_gl_GLFrameBuffer$FrameBufferTextureAttachmentSpec),
		.classVtable = (intptr_t) vtable_arc_graphics_gl_GLFrameBuffer$FrameBufferTextureAttachmentSpec,
		.staticInitializer = (intptr_t) clinit_arc_graphics_gl_GLFrameBuffer$FrameBufferTextureAttachmentSpec,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_graphics_gl_GLFrameBuffer$FrameBufferTextureAttachmentSpec,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_graphics_gl_GLFrameBuffer,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 7,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_graphics_gl_GLFrameBuffer$FrameBufferTextureAttachmentSpec = registerClass(&class_arc_graphics_gl_GLFrameBuffer$FrameBufferTextureAttachmentSpec);

}

