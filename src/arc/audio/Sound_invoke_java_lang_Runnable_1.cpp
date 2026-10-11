#include "arc/audio/Sound_invoke_java_lang_Runnable_1.h"
#include "java/lang/Object.h"
#include "arc/audio/Sound.h"
#include "arc/audio/AudioBus.h"
#include "arc/audio/Sound_invoke_java_lang_Runnable_1.h"
#include "java/lang/Runnable.h"

extern "C" {


void mark_arc_audio_Sound_invoke_java_lang_Runnable_1(jobject object, jint mark, jint depth) {
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
	auto self = (arc_audio_Sound_invoke_java_lang_Runnable_1 *) object;
	if (self->F_field0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field0)->clazz)->markFunction)((jobject) self->F_field0, mark, depth + 1);
	if (self->F_field6)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field6)->clazz)->markFunction)((jobject) self->F_field6, mark, depth + 1);
}

void clinit_arc_audio_Sound_invoke_java_lang_Runnable_1(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void M_arc_audio_Sound_invoke_java_lang_Runnable_1_run(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	FrameInfo frameInfo { "arc/audio/Sound_invoke_java_lang_Runnable_1:run", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

auto proxy = (arc_audio_Sound_invoke_java_lang_Runnable_1 *) self;
	M_arc_audio_Sound_lambda$play$0_boolean_float_float_float_boolean_arc_audio_AudioBus(ctx, (jobject) proxy->F_field0, proxy->F_field1, proxy->F_field2, proxy->F_field3, proxy->F_field4, proxy->F_field5, (jobject) proxy->F_field6);
	popStackFrame(ctx);
	return;

	popStackFrame(ctx);
}

void *vtable_arc_audio_Sound_invoke_java_lang_Runnable_1[] {
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
	(void *) M_arc_audio_Sound_invoke_java_lang_Runnable_1_run,
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
	{ "run", "()V" },
};

static jclass interfaces[] { &class_java_lang_Runnable, };

static FieldMetadata fields[] {
	{ "field0", &class_arc_audio_Sound, offsetof(arc_audio_Sound_invoke_java_lang_Runnable_1, F_field0), "Larc/audio/Sound;", 0 },
	{ "field1", &class_boolean, offsetof(arc_audio_Sound_invoke_java_lang_Runnable_1, F_field1), "Z", 0 },
	{ "field2", &class_float, offsetof(arc_audio_Sound_invoke_java_lang_Runnable_1, F_field2), "F", 0 },
	{ "field3", &class_float, offsetof(arc_audio_Sound_invoke_java_lang_Runnable_1, F_field3), "F", 0 },
	{ "field4", &class_float, offsetof(arc_audio_Sound_invoke_java_lang_Runnable_1, F_field4), "F", 0 },
	{ "field5", &class_boolean, offsetof(arc_audio_Sound_invoke_java_lang_Runnable_1, F_field5), "Z", 0 },
	{ "field6", &class_arc_audio_AudioBus, offsetof(arc_audio_Sound_invoke_java_lang_Runnable_1, F_field6), "Larc/audio/AudioBus;", 0 },
};

static MethodMetadata methods[] {
	{ "run", (intptr_t) M_arc_audio_Sound_invoke_java_lang_Runnable_1_run, VTABLE_arc_audio_Sound_invoke_java_lang_Runnable_1_run, "()V", 0 },
};

Class class_arc_audio_Sound_invoke_java_lang_Runnable_1{
		.nativeName = (intptr_t) "arc/audio/Sound_invoke_java_lang_Runnable_1",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_audio_Sound_invoke_java_lang_Runnable_1),
		.classVtable = (intptr_t) vtable_arc_audio_Sound_invoke_java_lang_Runnable_1,
		.staticInitializer = (intptr_t) clinit_arc_audio_Sound_invoke_java_lang_Runnable_1,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_audio_Sound_invoke_java_lang_Runnable_1,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 0,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 7,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_audio_Sound_invoke_java_lang_Runnable_1 = registerClass(&class_arc_audio_Sound_invoke_java_lang_Runnable_1);

}
