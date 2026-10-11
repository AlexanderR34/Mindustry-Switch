#include "mindustry/gen/Sounds_invoke_arc_func_Cons_24.h"
#include "arc/func/Cons.h"
#include "java/lang/Object.h"
#include "mindustry/gen/Sounds_invoke_arc_func_Cons_24.h"
#include "mindustry/gen/Sounds.h"
#include "arc/audio/Sound.h"

extern "C" {


void mark_mindustry_gen_Sounds_invoke_arc_func_Cons_24(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_gen_Sounds_invoke_arc_func_Cons_24 *) object;
}

void clinit_mindustry_gen_Sounds_invoke_arc_func_Cons_24(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void M_mindustry_gen_Sounds_invoke_arc_func_Cons_24_get_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	FrameInfo frameInfo { "mindustry/gen/Sounds_invoke_arc_func_Cons_24:get", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

auto proxy = (mindustry_gen_Sounds_invoke_arc_func_Cons_24 *) self;
	SM_mindustry_gen_Sounds_lambda$load$24_arc_audio_Sound(ctx, param0);
	popStackFrame(ctx);
	return;

	popStackFrame(ctx);
}

void *vtable_mindustry_gen_Sounds_invoke_arc_func_Cons_24[] {
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
	(void *) M_mindustry_gen_Sounds_invoke_arc_func_Cons_24_get_java_lang_Object,
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
	{ "get", "(Ljava/lang/Object;)V" },
};

static jclass interfaces[] { &class_arc_func_Cons, };

static MethodMetadata methods[] {
	{ "get", (intptr_t) M_mindustry_gen_Sounds_invoke_arc_func_Cons_24_get_java_lang_Object, VTABLE_mindustry_gen_Sounds_invoke_arc_func_Cons_24_get_java_lang_Object, "(Ljava/lang/Object;)V", 0 },
};

Class class_mindustry_gen_Sounds_invoke_arc_func_Cons_24{
		.nativeName = (intptr_t) "mindustry/gen/Sounds_invoke_arc_func_Cons_24",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_gen_Sounds_invoke_arc_func_Cons_24),
		.classVtable = (intptr_t) vtable_mindustry_gen_Sounds_invoke_arc_func_Cons_24,
		.staticInitializer = (intptr_t) clinit_mindustry_gen_Sounds_invoke_arc_func_Cons_24,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_gen_Sounds_invoke_arc_func_Cons_24,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 0,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_gen_Sounds_invoke_arc_func_Cons_24 = registerClass(&class_mindustry_gen_Sounds_invoke_arc_func_Cons_24);

}
