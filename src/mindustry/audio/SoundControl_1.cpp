#include "mindustry/audio/SoundControl_1.h"
#include "java/lang/Object.h"
#include "mindustry/audio/SoundControl_1.h"
#include "mindustry/audio/SoundControl.h"
#include "arc/audio/Filters_BiquadFilter.h"

extern "C" {


void mark_mindustry_audio_SoundControl$1(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_audio_Filters$BiquadFilter(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_audio_SoundControl$1 *) object;
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_mindustry_audio_SoundControl$1(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_audio_Filters$BiquadFilter(ctx);
}

void init_mindustry_audio_SoundControl$1_mindustry_audio_SoundControl(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/audio/SoundControl$1:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_audio_SoundControl$1(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(46);
	((mindustry_audio_SoundControl$1 *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_arc_audio_Filters$BiquadFilter(ctx, (frame[0].o));
	LINE_NUMBER(47);
	((func_mindustry_audio_SoundControl$1_set_int_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_audio_SoundControl$1_set_int_float_float])(ctx, (frame[0].o), (jint(0)), (jfloat(500.0f)), (jfloat(1)));
	LINE_NUMBER(46);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_audio_SoundControl$1[] {
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
	(void *) M_arc_audio_Filters$BiquadFilter_set_int_float_float,
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
	{ "set", "(IFF)V" },
};

static FieldMetadata fields[] {
	{ "this$0", &class_mindustry_audio_SoundControl, offsetof(mindustry_audio_SoundControl$1, F_this$0), "Lmindustry/audio/SoundControl;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_audio_SoundControl$1_mindustry_audio_SoundControl, 0, "(Lmindustry/audio/SoundControl;)V", 0 },
};

Class class_mindustry_audio_SoundControl$1{
		.nativeName = (intptr_t) "mindustry/audio/SoundControl$1",
		.parentClass = (intptr_t) &class_arc_audio_Filters$BiquadFilter,
		.size = sizeof(mindustry_audio_SoundControl$1),
		.classVtable = (intptr_t) vtable_mindustry_audio_SoundControl$1,
		.staticInitializer = (intptr_t) clinit_mindustry_audio_SoundControl$1,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_audio_SoundControl$1,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_mindustry_audio_SoundControl$1 = registerClass(&class_mindustry_audio_SoundControl$1);

}

