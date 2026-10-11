#include "arc/audio/AudioBus.h"
#include "arc/audio/Audio.h"
#include "arc/Core.h"
#include "java/lang/Object.h"
#include "arc/util/Disposable.h"
#include "arc/audio/AudioFilter.h"
#include "arc/audio/AudioBus.h"
#include "arc/audio/Soloud.h"
#include "arc/audio/AudioSource.h"

extern "C" {


void mark_arc_audio_AudioBus(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_audio_AudioSource(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (arc_audio_AudioBus *) object;
}

void clinit_arc_audio_AudioBus(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_audio_AudioSource(ctx);
}

void init_arc_audio_AudioBus(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/audio/AudioBus:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_audio_AudioBus(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(11);
	init_arc_audio_AudioSource(ctx, (frame[0].o));
	LINE_NUMBER(12);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_audio;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_audio;
	if (((jint)((arc_audio_Audio *) NULL_CHECK(sp[0].o))->F_initialized) == 0) goto label_2;
	}
	{
	LINE_NUMBER(13);
	sp[0].o = (jobject)((func_arc_audio_AudioBus_init_R_arc_audio_AudioBus) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_audio_AudioBus_init_R_arc_audio_AudioBus])(ctx, (frame[0].o));
	}
label_2:;
	LINE_NUMBER(15);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_audio_AudioBus_setFilter_int_arc_audio_AudioFilter(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/audio/AudioBus:setFilter", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(19);
	if ((longCompare(((jlong)((arc_audio_AudioSource *) NULL_CHECK((frame[0].o)))->F_handle), (jlong(0)))) != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(20);
	jlong temp0 = (jlong)((arc_audio_AudioSource *) NULL_CHECK((frame[0].o)))->F_handle;
	jint temp1 = frame[1].i;
	sp[0].l = temp0;
	sp[1].i = temp1;
	sp += 2;
	if ((frame[2].o) != nullptr) goto label_2;
	}
	INST_LCONST(0);
	goto label_3;
label_2:;
	INST_ALOAD(2);
	sp[-1].l = ((arc_audio_AudioFilter *) NULL_CHECK(sp[-1].o))->F_handle;
label_3:;
	{
	sp -= 3;
	SM_arc_audio_Soloud_sourceFilter_long_int_long(ctx, sp[0].l, sp[1].i, sp[2].l);
	LINE_NUMBER(21);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_audio_AudioBus_init_R_arc_audio_AudioBus(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/audio/AudioBus:init", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(24);
	if ((longCompare(((jlong)((arc_audio_AudioSource *) NULL_CHECK((frame[0].o)))->F_handle), (jlong(0)))) == 0) goto label_1;
	}
	INST_ALOAD(0);
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(25);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)SM_arc_audio_Soloud_busNew_R_long(ctx);
	((arc_audio_AudioSource *) NULL_CHECK(sp[0].o))->F_handle = temp0;
	LINE_NUMBER(26);
	sp[0].o = frame[0].o;
	jint temp1 = (jint)SM_arc_audio_Soloud_sourcePlay_long_R_int(ctx, ((jlong)((arc_audio_AudioSource *) NULL_CHECK((frame[0].o)))->F_handle));
	((arc_audio_AudioBus *) NULL_CHECK(sp[0].o))->F_id = temp1;
	LINE_NUMBER(27);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jbool M_arc_audio_AudioBus_playing_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/audio/AudioBus:playing", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(31);
	if ((longCompare(((jlong)((arc_audio_AudioSource *) NULL_CHECK((frame[0].o)))->F_handle), (jlong(0)))) == 0) goto label_1;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_audio;
	jint temp0 = (jint)((func_arc_audio_Audio_isPlaying_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Audio_isPlaying_int_R_boolean])(ctx, sp[0].o, ((jint)((arc_audio_AudioBus *) NULL_CHECK((frame[0].o)))->F_id));
	if (temp0 == 0) goto label_1;
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

void M_arc_audio_AudioBus_play(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/audio/AudioBus:play", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(35);
	if ((longCompare(((jlong)((arc_audio_AudioSource *) NULL_CHECK((frame[0].o)))->F_handle), (jlong(0)))) == 0) goto label_1;
	}
	{
	jint temp0 = (jint)SM_arc_audio_Soloud_idValid_int_R_boolean(ctx, ((jint)((arc_audio_AudioBus *) NULL_CHECK((frame[0].o)))->F_id));
	if (temp0 == 0) goto label_2;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(36);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_arc_audio_Soloud_sourcePlay_long_R_int(ctx, ((jlong)((arc_audio_AudioSource *) NULL_CHECK((frame[0].o)))->F_handle));
	((arc_audio_AudioBus *) NULL_CHECK(sp[0].o))->F_id = temp0;
	LINE_NUMBER(37);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_audio_AudioBus_stop(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/audio/AudioBus:stop", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(41);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_audio;
	((func_arc_audio_Audio_stop_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Audio_stop_int])(ctx, sp[0].o, ((jint)((arc_audio_AudioBus *) NULL_CHECK((frame[0].o)))->F_id));
	LINE_NUMBER(42);
	((arc_audio_AudioBus *) NULL_CHECK((frame[0].o)))->F_id = (jint(0));
	LINE_NUMBER(43);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_arc_audio_AudioBus_getLength_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/audio/AudioBus:getLength", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(47);
	popStackFrame(ctx);
	return (jfloat(0));
	}

	popStackFrame(ctx);
}

void M_arc_audio_AudioBus_fadeFilterParam_int_int_float_float(jcontext ctx, jobject self, jint param0, jint param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/audio/AudioBus:fadeFilterParam", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(51);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_audio;
	((func_arc_audio_Audio_fadeFilterParam_int_int_int_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Audio_fadeFilterParam_int_int_int_float_float])(ctx, sp[0].o, ((jint)((arc_audio_AudioBus *) NULL_CHECK((frame[0].o)))->F_id), (frame[1].i), (frame[2].i), (frame[3].f), (frame[4].f));
	LINE_NUMBER(52);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_audio_AudioBus_setFilterParam_int_int_float(jcontext ctx, jobject self, jint param0, jint param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/audio/AudioBus:setFilterParam", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(55);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_audio;
	((func_arc_audio_Audio_setFilterParam_int_int_int_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Audio_setFilterParam_int_int_int_float])(ctx, sp[0].o, ((jint)((arc_audio_AudioBus *) NULL_CHECK((frame[0].o)))->F_id), (frame[1].i), (frame[2].i), (frame[3].f));
	LINE_NUMBER(56);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_audio_AudioBus_setVolume_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/audio/AudioBus:setVolume", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(59);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_audio;
	((func_arc_audio_Audio_setVolume_int_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Audio_setVolume_int_float])(ctx, sp[0].o, ((jint)((arc_audio_AudioBus *) NULL_CHECK((frame[0].o)))->F_id), (frame[1].f));
	LINE_NUMBER(60);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_audio_AudioBus[] {
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
	(void *) M_arc_audio_AudioSource_dispose,
	(void *) M_arc_util_Disposable_isDisposed_R_boolean,
	(void *) M_arc_audio_AudioSource_valid_R_boolean,
	(void *) M_arc_audio_AudioBus_setFilter_int_arc_audio_AudioFilter,
	(void *) M_arc_audio_AudioSource_setFilter_arc_audio_AudioFilter,
	(void *) M_arc_audio_AudioSource_setParamsAfterLoad,
	(void *) M_arc_audio_AudioSource_setPriority_float,
	(void *) M_arc_audio_AudioSource_setMaxConcurrent_int,
	(void *) M_arc_audio_AudioSource_setConcurrentGroup_int,
	(void *) M_arc_audio_AudioSource_setMinConcurrentInterrupt_float,
	(void *) M_arc_audio_AudioSource_setMinConcurrentInterruptFraction_float_float,
	(void *) M_arc_audio_AudioSource_countPlaying_R_int,
	(void *) M_arc_audio_AudioSource_setSingleInstance_boolean,
	(void *) M_arc_audio_AudioBus_stop,
	(void *) M_arc_audio_AudioBus_getLength_R_float,
	(void *) M_arc_audio_AudioSource_isLazy_R_boolean,
	(void *) M_arc_audio_AudioBus_init_R_arc_audio_AudioBus,
	(void *) M_arc_audio_AudioBus_playing_R_boolean,
	(void *) M_arc_audio_AudioBus_play,
	(void *) M_arc_audio_AudioBus_fadeFilterParam_int_int_float_float,
	(void *) M_arc_audio_AudioBus_setFilterParam_int_int_float,
	(void *) M_arc_audio_AudioBus_setVolume_float,
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
	{ "init", "()Larc/audio/AudioBus;" },
	{ "playing", "()Z" },
	{ "play", "()V" },
	{ "fadeFilterParam", "(IIFF)V" },
	{ "setFilterParam", "(IIF)V" },
	{ "setVolume", "(F)V" },
};

static FieldMetadata fields[] {
	{ "id", &class_int, offsetof(arc_audio_AudioBus, F_id), "I", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_audio_AudioBus, 0, "()V", 1 },
	{ "setFilter", (intptr_t) M_arc_audio_AudioBus_setFilter_int_arc_audio_AudioFilter, VTABLE_arc_audio_AudioBus_setFilter_int_arc_audio_AudioFilter, "(ILarc/audio/AudioFilter;)V", 1 },
	{ "init", (intptr_t) M_arc_audio_AudioBus_init_R_arc_audio_AudioBus, VTABLE_arc_audio_AudioBus_init_R_arc_audio_AudioBus, "()Larc/audio/AudioBus;", 0 },
	{ "playing", (intptr_t) M_arc_audio_AudioBus_playing_R_boolean, VTABLE_arc_audio_AudioBus_playing_R_boolean, "()Z", 1 },
	{ "play", (intptr_t) M_arc_audio_AudioBus_play, VTABLE_arc_audio_AudioBus_play, "()V", 1 },
	{ "stop", (intptr_t) M_arc_audio_AudioBus_stop, VTABLE_arc_audio_AudioBus_stop, "()V", 1 },
	{ "getLength", (intptr_t) M_arc_audio_AudioBus_getLength_R_float, VTABLE_arc_audio_AudioBus_getLength_R_float, "()F", 1 },
	{ "fadeFilterParam", (intptr_t) M_arc_audio_AudioBus_fadeFilterParam_int_int_float_float, VTABLE_arc_audio_AudioBus_fadeFilterParam_int_int_float_float, "(IIFF)V", 1 },
	{ "setFilterParam", (intptr_t) M_arc_audio_AudioBus_setFilterParam_int_int_float, VTABLE_arc_audio_AudioBus_setFilterParam_int_int_float, "(IIF)V", 1 },
	{ "setVolume", (intptr_t) M_arc_audio_AudioBus_setVolume_float, VTABLE_arc_audio_AudioBus_setVolume_float, "(F)V", 1 },
};

Class class_arc_audio_AudioBus{
		.nativeName = (intptr_t) "arc/audio/AudioBus",
		.parentClass = (intptr_t) &class_arc_audio_AudioSource,
		.size = sizeof(arc_audio_AudioBus),
		.classVtable = (intptr_t) vtable_arc_audio_AudioBus,
		.staticInitializer = (intptr_t) clinit_arc_audio_AudioBus,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_audio_AudioBus,
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
		.methodCount = 10,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 33,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_audio_AudioBus = registerClass(&class_arc_audio_AudioBus);

}
