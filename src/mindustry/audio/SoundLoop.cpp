#include "mindustry/audio/SoundLoop.h"
#include "arc/math/Mathf.h"
#include "arc/audio/Audio.h"
#include "java/lang/Object.h"
#include "arc/Core.h"
#include "arc/audio/Sound.h"
#include "mindustry/audio/SoundLoop.h"
#include "arc/util/Time.h"

extern "C" {

jfloat SF_mindustry_audio_SoundLoop_fadeSpeed;

void mark_mindustry_audio_SoundLoop(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_audio_SoundLoop *) object;
	if (self->F_sound)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_sound)->clazz)->markFunction)((jobject) self->F_sound, mark, depth + 1);
}

void clinit_mindustry_audio_SoundLoop(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_mindustry_audio_SoundLoop_fadeSpeed = jfloat(0.05f);
}

void init_mindustry_audio_SoundLoop_arc_audio_Sound_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/audio/SoundLoop:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_audio_SoundLoop(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(16);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(13);
	((mindustry_audio_SoundLoop *) NULL_CHECK((frame[0].o)))->F_id = (jint(-1));
	LINE_NUMBER(17);
	((mindustry_audio_SoundLoop *) NULL_CHECK((frame[0].o)))->F_sound = (jref) (frame[1].o);
	LINE_NUMBER(18);
	((mindustry_audio_SoundLoop *) NULL_CHECK((frame[0].o)))->F_baseVolume = (frame[2].f);
	LINE_NUMBER(19);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_audio_SoundLoop_update_float_float_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/audio/SoundLoop:update", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(22);
	((func_mindustry_audio_SoundLoop_update_float_float_boolean_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_audio_SoundLoop_update_float_float_boolean_float])(ctx, (frame[0].o), (frame[1].f), (frame[2].f), (frame[3].i), (jfloat(1)));
	LINE_NUMBER(23);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_audio_SoundLoop_update_float_float_boolean_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jbool param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/audio/SoundLoop:update", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].i = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(26);
	if ((floatCompare(((jfloat)((mindustry_audio_SoundLoop *) NULL_CHECK((frame[0].o)))->F_baseVolume), (jfloat(0)), 1)) > 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(28);
	if (((jint)((mindustry_audio_SoundLoop *) NULL_CHECK((frame[0].o)))->F_id) >= 0) goto label_2;
	}
	{
	LINE_NUMBER(29);
	if ((frame[3].i) == 0) goto label_4;
	}
	{
	LINE_NUMBER(30);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_audio_SoundLoop *) NULL_CHECK((frame[0].o)))->F_sound;
	sp[2].o = (jobject)((mindustry_audio_SoundLoop *) NULL_CHECK((frame[0].o)))->F_sound;
	jfloat temp0 = (jfloat)((func_arc_audio_Sound_calcVolume_float_float_R_float) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_audio_Sound_calcVolume_float_float_R_float])(ctx, sp[2].o, (frame[1].f), (frame[2].f));
	jfloat temp1 = ((temp0 * ((jfloat)((mindustry_audio_SoundLoop *) NULL_CHECK((frame[0].o)))->F_volume)) * ((jfloat)((mindustry_audio_SoundLoop *) NULL_CHECK((frame[0].o)))->F_baseVolume)) * (frame[4].f);
	jfloat temp2 = jfloat(1);
	sp[2].o = (jobject)((mindustry_audio_SoundLoop *) NULL_CHECK((frame[0].o)))->F_sound;
	jfloat temp3 = (jfloat)((func_arc_audio_Sound_calcPan_float_float_R_float) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_audio_Sound_calcPan_float_float_R_float])(ctx, sp[2].o, (frame[1].f), (frame[2].f));
	jint temp4 = (jint)((func_arc_audio_Sound_loop_float_float_float_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_audio_Sound_loop_float_float_float_R_int])(ctx, sp[1].o, temp1, temp2, temp3);
	((mindustry_audio_SoundLoop *) NULL_CHECK(sp[0].o))->F_id = temp4;
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(34);
	if ((frame[3].i) == 0) goto label_6;
	}
	{
	LINE_NUMBER(35);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, (((jfloat)((mindustry_audio_SoundLoop *) NULL_CHECK((frame[0].o)))->F_volume) + ((jfloat(0.05f)) * (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta))));
	((mindustry_audio_SoundLoop *) NULL_CHECK(sp[0].o))->F_volume = temp0;
	goto label_8;
	}
label_6:;
	{
	LINE_NUMBER(37);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, (((jfloat)((mindustry_audio_SoundLoop *) NULL_CHECK((frame[0].o)))->F_volume) - ((jfloat(0.05f)) * (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta))));
	((mindustry_audio_SoundLoop *) NULL_CHECK(sp[0].o))->F_volume = temp0;
	LINE_NUMBER(38);
	if ((floatCompare(((jfloat)((mindustry_audio_SoundLoop *) NULL_CHECK((frame[0].o)))->F_volume), (jfloat(1,000000e-03f)), 1)) > 0) goto label_8;
	}
	{
	LINE_NUMBER(39);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_audio;
	((func_arc_audio_Audio_stop_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Audio_stop_int])(ctx, sp[0].o, ((jint)((mindustry_audio_SoundLoop *) NULL_CHECK((frame[0].o)))->F_id));
	LINE_NUMBER(40);
	((mindustry_audio_SoundLoop *) NULL_CHECK((frame[0].o)))->F_id = (jint(-1));
	LINE_NUMBER(41);
	popStackFrame(ctx);
	return;
	}
label_8:;
	{
	LINE_NUMBER(45);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_audio;
	jint temp0 = (jint)((mindustry_audio_SoundLoop *) NULL_CHECK((frame[0].o)))->F_id;
	sp[1].o = (jobject)((mindustry_audio_SoundLoop *) NULL_CHECK((frame[0].o)))->F_sound;
	jfloat temp1 = (jfloat)((func_arc_audio_Sound_calcPan_float_float_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_audio_Sound_calcPan_float_float_R_float])(ctx, sp[1].o, (frame[1].f), (frame[2].f));
	sp[1].o = (jobject)((mindustry_audio_SoundLoop *) NULL_CHECK((frame[0].o)))->F_sound;
	jfloat temp2 = (jfloat)((func_arc_audio_Sound_calcVolume_float_float_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_audio_Sound_calcVolume_float_float_R_float])(ctx, sp[1].o, (frame[1].f), (frame[2].f));
	((func_arc_audio_Audio_set_int_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Audio_set_int_float_float])(ctx, sp[0].o, temp0, temp1, (((temp2 * ((jfloat)((mindustry_audio_SoundLoop *) NULL_CHECK((frame[0].o)))->F_volume)) * ((jfloat)((mindustry_audio_SoundLoop *) NULL_CHECK((frame[0].o)))->F_baseVolume)) * (frame[4].f)));
	}
label_4:;
	LINE_NUMBER(47);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_audio_SoundLoop_stop(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/audio/SoundLoop:stop", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(50);
	if (((jint)((mindustry_audio_SoundLoop *) NULL_CHECK((frame[0].o)))->F_id) == (jint(-1))) goto label_1;
	}
	{
	LINE_NUMBER(51);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_audio;
	((func_arc_audio_Audio_stop_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Audio_stop_int])(ctx, sp[0].o, ((jint)((mindustry_audio_SoundLoop *) NULL_CHECK((frame[0].o)))->F_id));
	LINE_NUMBER(52);
	((mindustry_audio_SoundLoop *) NULL_CHECK((frame[0].o)))->F_id = (jint(-1));
	LINE_NUMBER(53);
	((mindustry_audio_SoundLoop *) NULL_CHECK((frame[0].o)))->F_volume = (jfloat(0));
	}
label_1:;
	LINE_NUMBER(55);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_audio_SoundLoop[] {
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
	(void *) M_mindustry_audio_SoundLoop_update_float_float_boolean,
	(void *) M_mindustry_audio_SoundLoop_update_float_float_boolean_float,
	(void *) M_mindustry_audio_SoundLoop_stop,
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
	{ "update", "(FFZ)V" },
	{ "update", "(FFZF)V" },
	{ "stop", "()V" },
};

static FieldMetadata fields[] {
	{ "fadeSpeed", &class_float, (intptr_t) &SF_mindustry_audio_SoundLoop_fadeSpeed, "F", 26 },
	{ "sound", &class_arc_audio_Sound, offsetof(mindustry_audio_SoundLoop, F_sound), "Larc/audio/Sound;", 18 },
	{ "id", &class_int, offsetof(mindustry_audio_SoundLoop, F_id), "I", 2 },
	{ "volume", &class_float, offsetof(mindustry_audio_SoundLoop, F_volume), "F", 2 },
	{ "baseVolume", &class_float, offsetof(mindustry_audio_SoundLoop, F_baseVolume), "F", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_audio_SoundLoop_arc_audio_Sound_float, 0, "(Larc/audio/Sound;F)V", 1 },
	{ "update", (intptr_t) M_mindustry_audio_SoundLoop_update_float_float_boolean, VTABLE_mindustry_audio_SoundLoop_update_float_float_boolean, "(FFZ)V", 1 },
	{ "update", (intptr_t) M_mindustry_audio_SoundLoop_update_float_float_boolean_float, VTABLE_mindustry_audio_SoundLoop_update_float_float_boolean_float, "(FFZF)V", 1 },
	{ "stop", (intptr_t) M_mindustry_audio_SoundLoop_stop, VTABLE_mindustry_audio_SoundLoop_stop, "()V", 1 },
};

Class class_mindustry_audio_SoundLoop{
		.nativeName = (intptr_t) "mindustry/audio/SoundLoop",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_audio_SoundLoop),
		.classVtable = (intptr_t) vtable_mindustry_audio_SoundLoop,
		.staticInitializer = (intptr_t) clinit_mindustry_audio_SoundLoop,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_audio_SoundLoop,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 14,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_audio_SoundLoop = registerClass(&class_mindustry_audio_SoundLoop);

}
