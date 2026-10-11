#include "arc/audio/RandomSound.h"
#include "java/lang/Object.h"
#include "arc/util/Disposable.h"
#include "arc/audio/Sound.h"
#include "arc/audio/RandomSound.h"
#include "arc/util/Structs.h"
#include "arc/audio/AudioBus.h"
#include "arc/files/Fi.h"
#include "arc/audio/AudioSource.h"

extern "C" {


void mark_arc_audio_RandomSound(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_audio_Sound(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (arc_audio_RandomSound *) object;
	if (self->F_sounds)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_sounds)->clazz)->markFunction)((jobject) self->F_sounds, mark, depth + 1);
}

void clinit_arc_audio_RandomSound(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_audio_Sound(ctx);
}

void init_arc_audio_RandomSound_Array1_arc_audio_Sound(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/audio/RandomSound:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_audio_RandomSound(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(10);
	init_arc_audio_Sound(ctx, (frame[0].o));
	LINE_NUMBER(8);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_arc_audio_Sound, (jint(0)));
	((arc_audio_RandomSound *) NULL_CHECK(sp[0].o))->F_sounds = (jref) sp[1].o;
	LINE_NUMBER(11);
	((arc_audio_RandomSound *) NULL_CHECK((frame[0].o)))->F_sounds = (jref) (frame[1].o);
	LINE_NUMBER(12);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_audio_RandomSound(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/audio/RandomSound:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_audio_RandomSound(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(14);
	init_arc_audio_Sound(ctx, (frame[0].o));
	LINE_NUMBER(8);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_arc_audio_Sound, (jint(0)));
	((arc_audio_RandomSound *) NULL_CHECK(sp[0].o))->F_sounds = (jref) sp[1].o;
	LINE_NUMBER(15);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_audio_RandomSound_load_arc_files_Fi(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/audio/RandomSound:load", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(18);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_arc_audio_RandomSound_play_float_float_float_boolean_boolean_arc_audio_AudioBus_R_int(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jbool param3, jbool param4, jobject param5) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/audio/RandomSound:play", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	frame[6].o = param5;
	{
	LINE_NUMBER(22);
	sp[0].o = (jobject)((arc_audio_RandomSound *) NULL_CHECK((frame[0].o)))->F_sounds;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(23);
	sp[0].o = (jobject)((arc_audio_RandomSound *) NULL_CHECK((frame[0].o)))->F_sounds;
	sp[0].o = (jobject)SM_arc_util_Structs_random_Array1_java_lang_Object_R_java_lang_Object(ctx, sp[0].o);
	jint temp0 = (jint)((func_arc_audio_Sound_play_float_float_float_boolean_boolean_arc_audio_AudioBus_R_int) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_audio_Sound, sp[0].o)))->vtable)[VTABLE_arc_audio_Sound_play_float_float_float_boolean_boolean_arc_audio_AudioBus_R_int])(ctx, (checkCast(ctx, &class_arc_audio_Sound, sp[0].o)), (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].i), (frame[5].i), (frame[6].o));
	popStackFrame(ctx);
	return temp0;
	}
label_1:;
	{
	LINE_NUMBER(25);
	popStackFrame(ctx);
	return (jint(-1));
	}

	popStackFrame(ctx);
}

void *vtable_arc_audio_RandomSound[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_arc_audio_Sound_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_arc_audio_AudioSource_dispose,
	(void *) M_arc_util_Disposable_isDisposed_R_boolean,
	(void *) M_arc_audio_AudioSource_valid_R_boolean,
	(void *) M_arc_audio_AudioSource_setFilter_int_arc_audio_AudioFilter,
	(void *) M_arc_audio_AudioSource_setFilter_arc_audio_AudioFilter,
	(void *) M_arc_audio_AudioSource_setParamsAfterLoad,
	(void *) M_arc_audio_AudioSource_setPriority_float,
	(void *) M_arc_audio_AudioSource_setMaxConcurrent_int,
	(void *) M_arc_audio_AudioSource_setConcurrentGroup_int,
	(void *) M_arc_audio_AudioSource_setMinConcurrentInterrupt_float,
	(void *) M_arc_audio_AudioSource_setMinConcurrentInterruptFraction_float_float,
	(void *) M_arc_audio_AudioSource_countPlaying_R_int,
	(void *) M_arc_audio_AudioSource_setSingleInstance_boolean,
	(void *) M_arc_audio_AudioSource_stop,
	(void *) M_arc_audio_Sound_getLength_R_float,
	(void *) M_arc_audio_Sound_isLazy_R_boolean,
	(void *) M_arc_audio_Sound_load_Array1_byte_boolean,
	(void *) M_arc_audio_RandomSound_load_arc_files_Fi,
	(void *) M_arc_audio_Sound_loadLazy_arc_files_Fi,
	(void *) M_arc_audio_Sound_checkLazyLoad_java_lang_Runnable,
	(void *) M_arc_audio_RandomSound_play_float_float_float_boolean_boolean_arc_audio_AudioBus_R_int,
	(void *) M_arc_audio_Sound_play_float_float_float_boolean_boolean_R_int,
	(void *) M_arc_audio_Sound_setBus_arc_audio_AudioBus,
	(void *) M_arc_audio_Sound_calcPan_float_float_R_float,
	(void *) M_arc_audio_Sound_calcVolume_float_float_R_float,
	(void *) M_arc_audio_Sound_calcFalloff_float_float_R_float,
	(void *) M_arc_audio_Sound_at_float_float_float_R_int,
	(void *) M_arc_audio_Sound_at_float_float_float_float_boolean_R_int,
	(void *) M_arc_audio_Sound_at_float_float_float_float_arc_audio_AudioBus_R_int,
	(void *) M_arc_audio_Sound_at_arc_math_geom_Position_float_float_R_int,
	(void *) M_arc_audio_Sound_at_float_float_float_float_R_int,
	(void *) M_arc_audio_Sound_at_float_float_R_int,
	(void *) M_arc_audio_Sound_at_arc_math_geom_Position_R_int,
	(void *) M_arc_audio_Sound_at_arc_math_geom_Position_float_R_int,
	(void *) M_arc_audio_Sound_play_R_int,
	(void *) M_arc_audio_Sound_play_arc_audio_AudioBus_R_int,
	(void *) M_arc_audio_Sound_play_float_R_int,
	(void *) M_arc_audio_Sound_play_float_float_float_boolean_R_int,
	(void *) M_arc_audio_Sound_play_float_float_float_R_int,
	(void *) M_arc_audio_Sound_loop_R_int,
	(void *) M_arc_audio_Sound_loop_float_R_int,
	(void *) M_arc_audio_Sound_loop_float_float_float_R_int,
	(void *) M_arc_audio_Sound_setMinInterval_long,
	(void *) M_arc_audio_Sound_setFalloffOffset_float,
	(void *) M_arc_audio_Sound_lambda$play$0_boolean_float_float_float_boolean_arc_audio_AudioBus,
	(void *) M_arc_audio_Sound_lambda$checkLazyLoad$0_java_lang_Runnable,
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
	{ "valid", "()Z" },
	{ "setFilter", "(ILarc/audio/AudioFilter;)V" },
	{ "setFilter", "(Larc/audio/AudioFilter;)V" },
	{ "setParamsAfterLoad", "()V" },
	{ "setPriority", "(F)V" },
	{ "setMaxConcurrent", "(I)V" },
	{ "setConcurrentGroup", "(I)V" },
	{ "setMinConcurrentInterrupt", "(F)V" },
	{ "setMinConcurrentInterruptFraction", "(FF)V" },
	{ "countPlaying", "()I" },
	{ "setSingleInstance", "(Z)V" },
	{ "stop", "()V" },
	{ "getLength", "()F" },
	{ "isLazy", "()Z" },
	{ "load", "([BZ)V" },
	{ "load", "(Larc/files/Fi;)V" },
	{ "loadLazy", "(Larc/files/Fi;)V" },
	{ "checkLazyLoad", "(Ljava/lang/Runnable;)V" },
	{ "play", "(FFFZZLarc/audio/AudioBus;)I" },
	{ "play", "(FFFZZ)I" },
	{ "setBus", "(Larc/audio/AudioBus;)V" },
	{ "calcPan", "(FF)F" },
	{ "calcVolume", "(FF)F" },
	{ "calcFalloff", "(FF)F" },
	{ "at", "(FFF)I" },
	{ "at", "(FFFFZ)I" },
	{ "at", "(FFFFLarc/audio/AudioBus;)I" },
	{ "at", "(Larc/math/geom/Position;FF)I" },
	{ "at", "(FFFF)I" },
	{ "at", "(FF)I" },
	{ "at", "(Larc/math/geom/Position;)I" },
	{ "at", "(Larc/math/geom/Position;F)I" },
	{ "play", "()I" },
	{ "play", "(Larc/audio/AudioBus;)I" },
	{ "play", "(F)I" },
	{ "play", "(FFFZ)I" },
	{ "play", "(FFF)I" },
	{ "loop", "()I" },
	{ "loop", "(F)I" },
	{ "loop", "(FFF)I" },
	{ "setMinInterval", "(J)V" },
	{ "setFalloffOffset", "(F)V" },
	{ "lambda$play$0", "(ZFFFZLarc/audio/AudioBus;)V" },
	{ "lambda$checkLazyLoad$0", "(Ljava/lang/Runnable;)V" },
};

static FieldMetadata fields[] {
	{ "sounds", getArrayClass(&class_arc_audio_Sound, 1), offsetof(arc_audio_RandomSound, F_sounds), "[Larc/audio/Sound;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_audio_RandomSound_Array1_arc_audio_Sound, 0, "([Larc/audio/Sound;)V", 129 },
	{ "<init>", (intptr_t) init_arc_audio_RandomSound, 0, "()V", 1 },
	{ "load", (intptr_t) M_arc_audio_RandomSound_load_arc_files_Fi, VTABLE_arc_audio_RandomSound_load_arc_files_Fi, "(Larc/files/Fi;)V", 1 },
	{ "play", (intptr_t) M_arc_audio_RandomSound_play_float_float_float_boolean_boolean_arc_audio_AudioBus_R_int, VTABLE_arc_audio_RandomSound_play_float_float_float_boolean_boolean_arc_audio_AudioBus_R_int, "(FFFZZLarc/audio/AudioBus;)I", 1 },
};

Class class_arc_audio_RandomSound{
		.nativeName = (intptr_t) "arc/audio/RandomSound",
		.parentClass = (intptr_t) &class_arc_audio_Sound,
		.size = sizeof(arc_audio_RandomSound),
		.classVtable = (intptr_t) vtable_arc_audio_RandomSound,
		.staticInitializer = (intptr_t) clinit_arc_audio_RandomSound,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_audio_RandomSound,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 57,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_audio_RandomSound = registerClass(&class_arc_audio_RandomSound);

}
