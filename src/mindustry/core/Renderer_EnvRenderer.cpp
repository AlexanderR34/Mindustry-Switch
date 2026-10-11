#include "mindustry/core/Renderer_EnvRenderer.h"
#include "java/lang/Object.h"
#include "mindustry/core/Renderer.h"
#include "mindustry/core/Renderer_EnvRenderer.h"
#include "java/lang/Runnable.h"

extern "C" {


void mark_mindustry_core_Renderer$EnvRenderer(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_core_Renderer$EnvRenderer *) object;
	if (self->F_renderer)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_renderer)->clazz)->markFunction)((jobject) self->F_renderer, mark, depth + 1);
}

void clinit_mindustry_core_Renderer$EnvRenderer(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_core_Renderer$EnvRenderer_int_java_lang_Runnable(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Renderer$EnvRenderer:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_Renderer$EnvRenderer(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(646);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(647);
	((mindustry_core_Renderer$EnvRenderer *) NULL_CHECK((frame[0].o)))->F_env = (frame[1].i);
	LINE_NUMBER(648);
	((mindustry_core_Renderer$EnvRenderer *) NULL_CHECK((frame[0].o)))->F_renderer = (jref) (frame[2].o);
	LINE_NUMBER(649);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_core_Renderer$EnvRenderer[] {
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
	{ "env", &class_int, offsetof(mindustry_core_Renderer$EnvRenderer, F_env), "I", 17 },
	{ "renderer", &class_java_lang_Runnable, offsetof(mindustry_core_Renderer$EnvRenderer, F_renderer), "Ljava/lang/Runnable;", 17 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_core_Renderer$EnvRenderer_int_java_lang_Runnable, 0, "(ILjava/lang/Runnable;)V", 1 },
};

Class class_mindustry_core_Renderer$EnvRenderer{
		.nativeName = (intptr_t) "mindustry/core/Renderer$EnvRenderer",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_core_Renderer$EnvRenderer),
		.classVtable = (intptr_t) vtable_mindustry_core_Renderer$EnvRenderer,
		.staticInitializer = (intptr_t) clinit_mindustry_core_Renderer$EnvRenderer,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_core_Renderer$EnvRenderer,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_core_Renderer,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_core_Renderer$EnvRenderer = registerClass(&class_mindustry_core_Renderer$EnvRenderer);

}

