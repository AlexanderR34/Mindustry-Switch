#include "arc/audio/Filters.h"
#include "java/lang/Object.h"
#include "arc/audio/Filters_LofiFilter.h"
#include "arc/audio/Filters_EchoFilter.h"
#include "arc/audio/Filters_WaveShaperFilter.h"
#include "arc/audio/Filters_FlangerFilter.h"
#include "arc/audio/Filters_FreeverbFilter.h"
#include "arc/audio/Filters_BassBoostFilter.h"
#include "arc/audio/Filters_RobotizeFilter.h"
#include "arc/audio/Filters_BiquadFilter.h"

extern "C" {

jint SF_arc_audio_Filters_paramWet;

void mark_arc_audio_Filters(jobject object, jint mark, jint depth) {
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
	auto self = (arc_audio_Filters *) object;
}

void clinit_arc_audio_Filters(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_arc_audio_Filters_paramWet = jint(0);
}

void init_arc_audio_Filters(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/audio/Filters:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_audio_Filters(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(5);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_audio_Filters[] {
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

static jclass innerClasses[] {
	&class_arc_audio_Filters$FreeverbFilter,
	&class_arc_audio_Filters$RobotizeFilter,
	&class_arc_audio_Filters$BassBoostFilter,
	&class_arc_audio_Filters$WaveShaperFilter,
	&class_arc_audio_Filters$FlangerFilter,
	&class_arc_audio_Filters$LofiFilter,
	&class_arc_audio_Filters$EchoFilter,
	&class_arc_audio_Filters$BiquadFilter,
};

static FieldMetadata fields[] {
	{ "paramWet", &class_int, (intptr_t) &SF_arc_audio_Filters_paramWet, "I", 25 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_audio_Filters, 0, "()V", 1 },
};

Class class_arc_audio_Filters{
		.nativeName = (intptr_t) "arc/audio/Filters",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_audio_Filters),
		.classVtable = (intptr_t) vtable_arc_audio_Filters,
		.staticInitializer = (intptr_t) clinit_arc_audio_Filters,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_audio_Filters,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 8,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_audio_Filters = registerClass(&class_arc_audio_Filters);

}
