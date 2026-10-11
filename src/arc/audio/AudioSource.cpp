#include "arc/audio/AudioSource.h"
#include "java/lang/Math.h"
#include "arc/audio/Audio.h"
#include "java/lang/Object.h"
#include "arc/util/Disposable.h"
#include "arc/Core.h"
#include "arc/audio/AudioFilter.h"
#include "arc/audio/Soloud.h"
#include "arc/audio/AudioSource.h"

extern "C" {


void mark_arc_audio_AudioSource(jobject object, jint mark, jint depth) {
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
	auto self = (arc_audio_AudioSource *) object;
}

void clinit_arc_audio_AudioSource(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_audio_AudioSource(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/audio/AudioSource:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_audio_AudioSource(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(8);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_audio_AudioSource_valid_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/audio/AudioSource:valid", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(16);
	if ((longCompare(((jlong)((arc_audio_AudioSource *) NULL_CHECK((frame[0].o)))->F_handle), (jlong(0)))) == 0) goto label_1;
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

void M_arc_audio_AudioSource_setFilter_int_arc_audio_AudioFilter(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/audio/AudioSource:setFilter", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(20);
	if ((longCompare(((jlong)((arc_audio_AudioSource *) NULL_CHECK((frame[0].o)))->F_handle), (jlong(0)))) != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(21);
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
	LINE_NUMBER(22);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_audio_AudioSource_setFilter_arc_audio_AudioFilter(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/audio/AudioSource:setFilter", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(25);
	((func_arc_audio_AudioSource_setFilter_int_arc_audio_AudioFilter) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_audio_AudioSource_setFilter_int_arc_audio_AudioFilter])(ctx, (frame[0].o), (jint(0)), (frame[1].o));
	LINE_NUMBER(26);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_audio_AudioSource_setParamsAfterLoad(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/audio/AudioSource:setParamsAfterLoad", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(29);
	if ((floatCompare(((jfloat)((arc_audio_AudioSource *) NULL_CHECK((frame[0].o)))->F_priority), (jfloat(0)), -1)) == 0) goto label_1;
	}
	{
	((func_arc_audio_AudioSource_setPriority_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_audio_AudioSource_setPriority_float])(ctx, (frame[0].o), ((jfloat)((arc_audio_AudioSource *) NULL_CHECK((frame[0].o)))->F_priority));
	}
label_1:;
	{
	LINE_NUMBER(30);
	if (((jint)((arc_audio_AudioSource *) NULL_CHECK((frame[0].o)))->F_maxConcurrent) == 0) goto label_2;
	}
	{
	((func_arc_audio_AudioSource_setMaxConcurrent_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_audio_AudioSource_setMaxConcurrent_int])(ctx, (frame[0].o), ((jint)((arc_audio_AudioSource *) NULL_CHECK((frame[0].o)))->F_maxConcurrent));
	}
label_2:;
	{
	LINE_NUMBER(31);
	if (((jint)((arc_audio_AudioSource *) NULL_CHECK((frame[0].o)))->F_concurrentGroup) == 0) goto label_3;
	}
	{
	((func_arc_audio_AudioSource_setConcurrentGroup_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_audio_AudioSource_setConcurrentGroup_int])(ctx, (frame[0].o), ((jint)((arc_audio_AudioSource *) NULL_CHECK((frame[0].o)))->F_concurrentGroup));
	}
label_3:;
	{
	LINE_NUMBER(32);
	if ((floatCompare(((jfloat)((arc_audio_AudioSource *) NULL_CHECK((frame[0].o)))->F_minInterruptFraction), (jfloat(0)), -1)) == 0) goto label_4;
	}
	{
	LINE_NUMBER(33);
	((func_arc_audio_AudioSource_setMinConcurrentInterruptFraction_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_audio_AudioSource_setMinConcurrentInterruptFraction_float_float])(ctx, (frame[0].o), ((jfloat)((arc_audio_AudioSource *) NULL_CHECK((frame[0].o)))->F_minInterruptAbsolute), ((jfloat)((arc_audio_AudioSource *) NULL_CHECK((frame[0].o)))->F_minInterruptFraction));
	goto label_6;
	}
label_4:;
	{
	LINE_NUMBER(34);
	if ((floatCompare(((jfloat)((arc_audio_AudioSource *) NULL_CHECK((frame[0].o)))->F_minInterruptAbsolute), (jfloat(0)), -1)) == 0) goto label_6;
	}
	{
	LINE_NUMBER(35);
	((func_arc_audio_AudioSource_setMinConcurrentInterrupt_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_audio_AudioSource_setMinConcurrentInterrupt_float])(ctx, (frame[0].o), ((jfloat)((arc_audio_AudioSource *) NULL_CHECK((frame[0].o)))->F_minInterruptAbsolute));
	}
label_6:;
	LINE_NUMBER(37);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_audio_AudioSource_setPriority_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/audio/AudioSource:setPriority", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(41);
	((arc_audio_AudioSource *) NULL_CHECK((frame[0].o)))->F_priority = (frame[1].f);
	LINE_NUMBER(42);
	if ((longCompare(((jlong)((arc_audio_AudioSource *) NULL_CHECK((frame[0].o)))->F_handle), (jlong(0)))) != 0) goto label_2;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(43);
	SM_arc_audio_Soloud_sourcePriority_long_float(ctx, ((jlong)((arc_audio_AudioSource *) NULL_CHECK((frame[0].o)))->F_handle), (frame[1].f));
	LINE_NUMBER(44);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_audio_AudioSource_setMaxConcurrent_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/audio/AudioSource:setMaxConcurrent", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(48);
	((arc_audio_AudioSource *) NULL_CHECK((frame[0].o)))->F_maxConcurrent = (frame[1].i);
	LINE_NUMBER(49);
	if ((longCompare(((jlong)((arc_audio_AudioSource *) NULL_CHECK((frame[0].o)))->F_handle), (jlong(0)))) != 0) goto label_2;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(50);
	SM_arc_audio_Soloud_sourceMaxConcurrent_long_int(ctx, ((jlong)((arc_audio_AudioSource *) NULL_CHECK((frame[0].o)))->F_handle), (frame[1].i));
	LINE_NUMBER(51);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_audio_AudioSource_setConcurrentGroup_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/audio/AudioSource:setConcurrentGroup", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(55);
	((arc_audio_AudioSource *) NULL_CHECK((frame[0].o)))->F_concurrentGroup = (frame[1].i);
	LINE_NUMBER(56);
	if ((longCompare(((jlong)((arc_audio_AudioSource *) NULL_CHECK((frame[0].o)))->F_handle), (jlong(0)))) != 0) goto label_2;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(57);
	SM_arc_audio_Soloud_sourceConcurrentGroup_long_int(ctx, ((jlong)((arc_audio_AudioSource *) NULL_CHECK((frame[0].o)))->F_handle), (frame[1].i));
	LINE_NUMBER(58);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_audio_AudioSource_setMinConcurrentInterrupt_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/audio/AudioSource:setMinConcurrentInterrupt", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(62);
	((arc_audio_AudioSource *) NULL_CHECK((frame[0].o)))->F_minInterruptAbsolute = (frame[1].f);
	LINE_NUMBER(63);
	((arc_audio_AudioSource *) NULL_CHECK((frame[0].o)))->F_minInterruptFraction = (jfloat(0));
	LINE_NUMBER(64);
	if ((longCompare(((jlong)((arc_audio_AudioSource *) NULL_CHECK((frame[0].o)))->F_handle), (jlong(0)))) != 0) goto label_3;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(65);
	SM_arc_audio_Soloud_sourceMinConcurrentInterrupt_long_float(ctx, ((jlong)((arc_audio_AudioSource *) NULL_CHECK((frame[0].o)))->F_handle), (frame[1].f));
	LINE_NUMBER(66);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_audio_AudioSource_setMinConcurrentInterruptFraction_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/audio/AudioSource:setMinConcurrentInterruptFraction", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(70);
	((arc_audio_AudioSource *) NULL_CHECK((frame[0].o)))->F_minInterruptFraction = (frame[2].f);
	LINE_NUMBER(71);
	((arc_audio_AudioSource *) NULL_CHECK((frame[0].o)))->F_minInterruptAbsolute = (frame[1].f);
	LINE_NUMBER(72);
	if ((longCompare(((jlong)((arc_audio_AudioSource *) NULL_CHECK((frame[0].o)))->F_handle), (jlong(0)))) != 0) goto label_3;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(73);
	jlong temp0 = (jlong)((arc_audio_AudioSource *) NULL_CHECK((frame[0].o)))->F_handle;
	jfloat temp1 = frame[1].f;
	jfloat temp2 = (jfloat)((func_arc_audio_AudioSource_getLength_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_audio_AudioSource_getLength_R_float])(ctx, (frame[0].o));
	jfloat temp3 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, temp1, (temp2 * (frame[2].f)));
	SM_arc_audio_Soloud_sourceMinConcurrentInterrupt_long_float(ctx, temp0, temp3);
	LINE_NUMBER(74);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_arc_audio_AudioSource_countPlaying_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/audio/AudioSource:countPlaying", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(78);
	if ((longCompare(((jlong)((arc_audio_AudioSource *) NULL_CHECK((frame[0].o)))->F_handle), (jlong(0)))) != 0) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(79);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_audio;
	jint temp0 = (jint)((func_arc_audio_Audio_countPlaying_arc_audio_AudioSource_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Audio_countPlaying_arc_audio_AudioSource_R_int])(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_arc_audio_AudioSource_setSingleInstance_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/audio/AudioSource:setSingleInstance", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(83);
	if ((longCompare(((jlong)((arc_audio_AudioSource *) NULL_CHECK((frame[0].o)))->F_handle), (jlong(0)))) == 0) goto label_1;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_audio;
	if (((jint)((arc_audio_Audio *) NULL_CHECK(sp[0].o))->F_initialized) != 0) goto label_2;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(84);
	SM_arc_audio_Soloud_sourceSingleInstance_long_boolean(ctx, ((jlong)((arc_audio_AudioSource *) NULL_CHECK((frame[0].o)))->F_handle), (frame[1].i));
	LINE_NUMBER(85);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_audio_AudioSource_stop(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/audio/AudioSource:stop", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(88);
	if ((longCompare(((jlong)((arc_audio_AudioSource *) NULL_CHECK((frame[0].o)))->F_handle), (jlong(0)))) != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(89);
	SM_arc_audio_Soloud_sourceStop_long(ctx, ((jlong)((arc_audio_AudioSource *) NULL_CHECK((frame[0].o)))->F_handle));
	LINE_NUMBER(90);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_audio_AudioSource_isLazy_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/audio/AudioSource:isLazy", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(96);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_arc_audio_AudioSource_dispose(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/audio/AudioSource:dispose", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(101);
	if ((longCompare(((jlong)((arc_audio_AudioSource *) NULL_CHECK((frame[0].o)))->F_handle), (jlong(0)))) == 0) goto label_1;
	}
	{
	SM_arc_audio_Soloud_sourceDestroy_long(ctx, ((jlong)((arc_audio_AudioSource *) NULL_CHECK((frame[0].o)))->F_handle));
	}
label_1:;
	{
	LINE_NUMBER(102);
	((arc_audio_AudioSource *) NULL_CHECK((frame[0].o)))->F_handle = (jlong(0));
	LINE_NUMBER(103);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_audio_AudioSource[] {
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
	(void *) nullptr,
	(void *) M_arc_audio_AudioSource_isLazy_R_boolean,
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
};

static jclass interfaces[] { &class_arc_util_Disposable, };

static FieldMetadata fields[] {
	{ "handle", &class_long, offsetof(arc_audio_AudioSource, F_handle), "J", 4 },
	{ "maxConcurrent", &class_int, offsetof(arc_audio_AudioSource, F_maxConcurrent), "I", 4 },
	{ "concurrentGroup", &class_int, offsetof(arc_audio_AudioSource, F_concurrentGroup), "I", 4 },
	{ "minInterruptAbsolute", &class_float, offsetof(arc_audio_AudioSource, F_minInterruptAbsolute), "F", 4 },
	{ "minInterruptFraction", &class_float, offsetof(arc_audio_AudioSource, F_minInterruptFraction), "F", 4 },
	{ "priority", &class_float, offsetof(arc_audio_AudioSource, F_priority), "F", 4 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_audio_AudioSource, 0, "()V", 1 },
	{ "valid", (intptr_t) M_arc_audio_AudioSource_valid_R_boolean, VTABLE_arc_audio_AudioSource_valid_R_boolean, "()Z", 1 },
	{ "setFilter", (intptr_t) M_arc_audio_AudioSource_setFilter_int_arc_audio_AudioFilter, VTABLE_arc_audio_AudioSource_setFilter_int_arc_audio_AudioFilter, "(ILarc/audio/AudioFilter;)V", 1 },
	{ "setFilter", (intptr_t) M_arc_audio_AudioSource_setFilter_arc_audio_AudioFilter, VTABLE_arc_audio_AudioSource_setFilter_arc_audio_AudioFilter, "(Larc/audio/AudioFilter;)V", 1 },
	{ "setParamsAfterLoad", (intptr_t) M_arc_audio_AudioSource_setParamsAfterLoad, VTABLE_arc_audio_AudioSource_setParamsAfterLoad, "()V", 4 },
	{ "setPriority", (intptr_t) M_arc_audio_AudioSource_setPriority_float, VTABLE_arc_audio_AudioSource_setPriority_float, "(F)V", 1 },
	{ "setMaxConcurrent", (intptr_t) M_arc_audio_AudioSource_setMaxConcurrent_int, VTABLE_arc_audio_AudioSource_setMaxConcurrent_int, "(I)V", 1 },
	{ "setConcurrentGroup", (intptr_t) M_arc_audio_AudioSource_setConcurrentGroup_int, VTABLE_arc_audio_AudioSource_setConcurrentGroup_int, "(I)V", 1 },
	{ "setMinConcurrentInterrupt", (intptr_t) M_arc_audio_AudioSource_setMinConcurrentInterrupt_float, VTABLE_arc_audio_AudioSource_setMinConcurrentInterrupt_float, "(F)V", 1 },
	{ "setMinConcurrentInterruptFraction", (intptr_t) M_arc_audio_AudioSource_setMinConcurrentInterruptFraction_float_float, VTABLE_arc_audio_AudioSource_setMinConcurrentInterruptFraction_float_float, "(FF)V", 1 },
	{ "countPlaying", (intptr_t) M_arc_audio_AudioSource_countPlaying_R_int, VTABLE_arc_audio_AudioSource_countPlaying_R_int, "()I", 1 },
	{ "setSingleInstance", (intptr_t) M_arc_audio_AudioSource_setSingleInstance_boolean, VTABLE_arc_audio_AudioSource_setSingleInstance_boolean, "(Z)V", 1 },
	{ "stop", (intptr_t) M_arc_audio_AudioSource_stop, VTABLE_arc_audio_AudioSource_stop, "()V", 1 },
	{ "getLength", 0, VTABLE_arc_audio_AudioSource_getLength_R_float, "()F", 1025 },
	{ "isLazy", (intptr_t) M_arc_audio_AudioSource_isLazy_R_boolean, VTABLE_arc_audio_AudioSource_isLazy_R_boolean, "()Z", 1 },
	{ "dispose", (intptr_t) M_arc_audio_AudioSource_dispose, VTABLE_arc_audio_AudioSource_dispose, "()V", 1 },
};

Class class_arc_audio_AudioSource{
		.nativeName = (intptr_t) "arc/audio/AudioSource",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_audio_AudioSource),
		.classVtable = (intptr_t) vtable_arc_audio_AudioSource,
		.staticInitializer = (intptr_t) clinit_arc_audio_AudioSource,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_audio_AudioSource,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1057,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 6,
		.nativeFields = (intptr_t) fields,
		.methodCount = 16,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 27,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_audio_AudioSource = registerClass(&class_arc_audio_AudioSource);

}
