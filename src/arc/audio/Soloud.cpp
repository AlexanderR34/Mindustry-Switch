#include "arc/audio/Soloud.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"

extern "C" {


void mark_arc_audio_Soloud(jobject object, jint mark, jint depth) {
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
	auto self = (arc_audio_Soloud *) object;
}

void clinit_arc_audio_Soloud(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_audio_Soloud(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/audio/Soloud:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_audio_Soloud(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(4);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_audio_Soloud[] {
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

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_audio_Soloud, 0, "()V", 1 },
	{ "init", (intptr_t) SM_arc_audio_Soloud_init, 0, "()V", 264 },
	{ "deinit", (intptr_t) SM_arc_audio_Soloud_deinit, 0, "()V", 264 },
	{ "backendString", (intptr_t) SM_arc_audio_Soloud_backendString_R_java_lang_String, 0, "()Ljava/lang/String;", 264 },
	{ "backendId", (intptr_t) SM_arc_audio_Soloud_backendId_R_int, 0, "()I", 264 },
	{ "backendChannels", (intptr_t) SM_arc_audio_Soloud_backendChannels_R_int, 0, "()I", 264 },
	{ "backendSamplerate", (intptr_t) SM_arc_audio_Soloud_backendSamplerate_R_int, 0, "()I", 264 },
	{ "backendBufferSize", (intptr_t) SM_arc_audio_Soloud_backendBufferSize_R_int, 0, "()I", 264 },
	{ "version", (intptr_t) SM_arc_audio_Soloud_version_R_int, 0, "()I", 264 },
	{ "activeVoiceCount", (intptr_t) SM_arc_audio_Soloud_activeVoiceCount_R_int, 0, "()I", 264 },
	{ "stopAll", (intptr_t) SM_arc_audio_Soloud_stopAll, 0, "()V", 264 },
	{ "pauseAll", (intptr_t) SM_arc_audio_Soloud_pauseAll_boolean, 0, "(Z)V", 264 },
	{ "biquadSet", (intptr_t) SM_arc_audio_Soloud_biquadSet_long_int_float_float, 0, "(JIFF)V", 264 },
	{ "echoSet", (intptr_t) SM_arc_audio_Soloud_echoSet_long_float_float_float, 0, "(JFFF)V", 264 },
	{ "lofiSet", (intptr_t) SM_arc_audio_Soloud_lofiSet_long_float_float, 0, "(JFF)V", 264 },
	{ "flangerSet", (intptr_t) SM_arc_audio_Soloud_flangerSet_long_float_float, 0, "(JFF)V", 264 },
	{ "waveShaperSet", (intptr_t) SM_arc_audio_Soloud_waveShaperSet_long_float, 0, "(JF)V", 264 },
	{ "bassBoostSet", (intptr_t) SM_arc_audio_Soloud_bassBoostSet_long_float, 0, "(JF)V", 264 },
	{ "robotizeSet", (intptr_t) SM_arc_audio_Soloud_robotizeSet_long_float_int, 0, "(JFI)V", 264 },
	{ "freeverbSet", (intptr_t) SM_arc_audio_Soloud_freeverbSet_long_float_float_float_float, 0, "(JFFFF)V", 264 },
	{ "filterBiquad", (intptr_t) SM_arc_audio_Soloud_filterBiquad_R_long, 0, "()J", 264 },
	{ "filterEcho", (intptr_t) SM_arc_audio_Soloud_filterEcho_R_long, 0, "()J", 264 },
	{ "filterLofi", (intptr_t) SM_arc_audio_Soloud_filterLofi_R_long, 0, "()J", 264 },
	{ "filterFlanger", (intptr_t) SM_arc_audio_Soloud_filterFlanger_R_long, 0, "()J", 264 },
	{ "filterBassBoost", (intptr_t) SM_arc_audio_Soloud_filterBassBoost_R_long, 0, "()J", 264 },
	{ "filterWaveShaper", (intptr_t) SM_arc_audio_Soloud_filterWaveShaper_R_long, 0, "()J", 264 },
	{ "filterRobotize", (intptr_t) SM_arc_audio_Soloud_filterRobotize_R_long, 0, "()J", 264 },
	{ "filterFreeverb", (intptr_t) SM_arc_audio_Soloud_filterFreeverb_R_long, 0, "()J", 264 },
	{ "setGlobalFilter", (intptr_t) SM_arc_audio_Soloud_setGlobalFilter_int_long, 0, "(IJ)V", 264 },
	{ "filterFade", (intptr_t) SM_arc_audio_Soloud_filterFade_int_int_int_float_float, 0, "(IIIFF)V", 264 },
	{ "filterSet", (intptr_t) SM_arc_audio_Soloud_filterSet_int_int_int_float, 0, "(IIIF)V", 264 },
	{ "busNew", (intptr_t) SM_arc_audio_Soloud_busNew_R_long, 0, "()J", 264 },
	{ "idSeek", (intptr_t) SM_arc_audio_Soloud_idSeek_int_float, 0, "(IF)V", 264 },
	{ "idVolume", (intptr_t) SM_arc_audio_Soloud_idVolume_int_float, 0, "(IF)V", 264 },
	{ "idGetVolume", (intptr_t) SM_arc_audio_Soloud_idGetVolume_int_R_float, 0, "(I)F", 264 },
	{ "idPan", (intptr_t) SM_arc_audio_Soloud_idPan_int_float, 0, "(IF)V", 264 },
	{ "idPitch", (intptr_t) SM_arc_audio_Soloud_idPitch_int_float, 0, "(IF)V", 264 },
	{ "idPause", (intptr_t) SM_arc_audio_Soloud_idPause_int_boolean, 0, "(IZ)V", 264 },
	{ "idGetPause", (intptr_t) SM_arc_audio_Soloud_idGetPause_int_R_boolean, 0, "(I)Z", 264 },
	{ "idProtected", (intptr_t) SM_arc_audio_Soloud_idProtected_int_boolean, 0, "(IZ)V", 264 },
	{ "idStop", (intptr_t) SM_arc_audio_Soloud_idStop_int, 0, "(I)V", 264 },
	{ "idLooping", (intptr_t) SM_arc_audio_Soloud_idLooping_int_boolean, 0, "(IZ)V", 264 },
	{ "idGetLooping", (intptr_t) SM_arc_audio_Soloud_idGetLooping_int_R_boolean, 0, "(I)Z", 264 },
	{ "idPosition", (intptr_t) SM_arc_audio_Soloud_idPosition_int_R_float, 0, "(I)F", 264 },
	{ "idValid", (intptr_t) SM_arc_audio_Soloud_idValid_int_R_boolean, 0, "(I)Z", 264 },
	{ "wavLoadBytes", (intptr_t) SM_arc_audio_Soloud_wavLoadBytes_Array1_byte_int_R_long, 0, "([BI)J", 264 },
	{ "wavLoadFile", (intptr_t) SM_arc_audio_Soloud_wavLoadFile_java_lang_String_R_long, 0, "(Ljava/lang/String;)J", 264 },
	{ "streamLoadBytes", (intptr_t) SM_arc_audio_Soloud_streamLoadBytes_Array1_byte_int_R_long, 0, "([BI)J", 264 },
	{ "streamLoadFile", (intptr_t) SM_arc_audio_Soloud_streamLoadFile_java_lang_String_R_long, 0, "(Ljava/lang/String;)J", 264 },
	{ "streamLength", (intptr_t) SM_arc_audio_Soloud_streamLength_long_R_double, 0, "(J)D", 264 },
	{ "wavLength", (intptr_t) SM_arc_audio_Soloud_wavLength_long_R_double, 0, "(J)D", 264 },
	{ "sourceDestroy", (intptr_t) SM_arc_audio_Soloud_sourceDestroy_long, 0, "(J)V", 264 },
	{ "sourceInaudible", (intptr_t) SM_arc_audio_Soloud_sourceInaudible_long_boolean_boolean, 0, "(JZZ)V", 264 },
	{ "sourcePlay", (intptr_t) SM_arc_audio_Soloud_sourcePlay_long_R_int, 0, "(J)I", 264 },
	{ "sourceCount", (intptr_t) SM_arc_audio_Soloud_sourceCount_long_R_int, 0, "(J)I", 264 },
	{ "sourcePlay", (intptr_t) SM_arc_audio_Soloud_sourcePlay_long_float_float_float_boolean_R_int, 0, "(JFFFZ)I", 264 },
	{ "sourcePlayBus", (intptr_t) SM_arc_audio_Soloud_sourcePlayBus_long_long_float_float_float_boolean_R_int, 0, "(JJFFFZ)I", 264 },
	{ "sourcePriority", (intptr_t) SM_arc_audio_Soloud_sourcePriority_long_float, 0, "(JF)V", 264 },
	{ "sourceMinConcurrentInterrupt", (intptr_t) SM_arc_audio_Soloud_sourceMinConcurrentInterrupt_long_float, 0, "(JF)V", 264 },
	{ "sourceMaxConcurrent", (intptr_t) SM_arc_audio_Soloud_sourceMaxConcurrent_long_int, 0, "(JI)V", 264 },
	{ "sourceConcurrentGroup", (intptr_t) SM_arc_audio_Soloud_sourceConcurrentGroup_long_int, 0, "(JI)V", 264 },
	{ "sourceLoop", (intptr_t) SM_arc_audio_Soloud_sourceLoop_long_boolean, 0, "(JZ)V", 264 },
	{ "sourceSingleInstance", (intptr_t) SM_arc_audio_Soloud_sourceSingleInstance_long_boolean, 0, "(JZ)V", 264 },
	{ "sourceStop", (intptr_t) SM_arc_audio_Soloud_sourceStop_long, 0, "(J)V", 264 },
	{ "sourceFilter", (intptr_t) SM_arc_audio_Soloud_sourceFilter_long_int_long, 0, "(JIJ)V", 264 },
	{ "pauseDevice", (intptr_t) SM_arc_audio_Soloud_pauseDevice_R_int, 0, "()I", 264 },
	{ "resumeDevice", (intptr_t) SM_arc_audio_Soloud_resumeDevice_R_int, 0, "()I", 264 },
};

Class class_arc_audio_Soloud{
		.nativeName = (intptr_t) "arc/audio/Soloud",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_audio_Soloud),
		.classVtable = (intptr_t) vtable_arc_audio_Soloud,
		.staticInitializer = (intptr_t) clinit_arc_audio_Soloud,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_audio_Soloud,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 67,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_audio_Soloud = registerClass(&class_arc_audio_Soloud);

}
