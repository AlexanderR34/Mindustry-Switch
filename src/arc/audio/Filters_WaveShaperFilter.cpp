#include "arc/audio/Filters_WaveShaperFilter.h"
#include "java/lang/Object.h"
#include "arc/audio/AudioFilter.h"
#include "arc/audio/Filters_WaveShaperFilter.h"
#include "arc/audio/Soloud.h"
#include "arc/audio/Filters.h"

extern "C" {


void mark_arc_audio_Filters$WaveShaperFilter(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_audio_AudioFilter(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (arc_audio_Filters$WaveShaperFilter *) object;
}

void clinit_arc_audio_Filters$WaveShaperFilter(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_audio_AudioFilter(ctx);
}

void init_arc_audio_Filters$WaveShaperFilter(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/audio/Filters$WaveShaperFilter:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_audio_Filters$WaveShaperFilter(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(55);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)SM_arc_audio_Soloud_filterWaveShaper_R_long(ctx);
	init_arc_audio_AudioFilter_long(ctx, sp[0].o, temp0);
	LINE_NUMBER(56);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_audio_Filters$WaveShaperFilter_set_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/audio/Filters$WaveShaperFilter:set", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(59);
	SM_arc_audio_Soloud_waveShaperSet_long_float(ctx, ((jlong)((arc_audio_AudioFilter *) NULL_CHECK((frame[0].o)))->F_handle), (frame[1].f));
	LINE_NUMBER(60);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_audio_Filters$WaveShaperFilter[] {
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
	(void *) M_arc_audio_Filters$WaveShaperFilter_set_float,
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
	{ "set", "(F)V" },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_audio_Filters$WaveShaperFilter, 0, "()V", 1 },
	{ "set", (intptr_t) M_arc_audio_Filters$WaveShaperFilter_set_float, VTABLE_arc_audio_Filters$WaveShaperFilter_set_float, "(F)V", 1 },
};

Class class_arc_audio_Filters$WaveShaperFilter{
		.nativeName = (intptr_t) "arc/audio/Filters$WaveShaperFilter",
		.parentClass = (intptr_t) &class_arc_audio_AudioFilter,
		.size = sizeof(arc_audio_Filters$WaveShaperFilter),
		.classVtable = (intptr_t) vtable_arc_audio_Filters$WaveShaperFilter,
		.staticInitializer = (intptr_t) clinit_arc_audio_Filters$WaveShaperFilter,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_audio_Filters$WaveShaperFilter,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_audio_Filters,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_audio_Filters$WaveShaperFilter = registerClass(&class_arc_audio_Filters$WaveShaperFilter);

}

