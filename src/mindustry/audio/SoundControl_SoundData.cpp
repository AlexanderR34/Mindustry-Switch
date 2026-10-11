#include "mindustry/audio/SoundControl_SoundData.h"
#include "java/lang/Object.h"
#include "mindustry/audio/SoundControl_SoundData.h"
#include "java/lang/AssertionError.h"
#include "arc/audio/Sound.h"
#include "java/lang/Cloneable.h"
#include "java/lang/CloneNotSupportedException.h"
#include "mindustry/audio/SoundControl.h"

extern "C" {


void mark_mindustry_audio_SoundControl$SoundData(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_audio_SoundControl$SoundData *) object;
	if (self->F_sound)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_sound)->clazz)->markFunction)((jobject) self->F_sound, mark, depth + 1);
}

void clinit_mindustry_audio_SoundControl$SoundData(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_audio_SoundControl$SoundData(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/audio/SoundControl$SoundData:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_audio_SoundControl$SoundData(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(471);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_audio_SoundControl$SoundData_clone_R_mindustry_audio_SoundControl$SoundData(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/audio/SoundControl$SoundData:clone", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_CloneNotSupportedException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(483);
	sp[0].o = (jobject)M_java_lang_Object_clone_R_java_lang_Object(ctx, (frame[0].o));
	sp[0].o = checkCast(ctx, &class_mindustry_audio_SoundControl$SoundData, sp[0].o);
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(484);
	frame[1].o = sp[0].o;
	LINE_NUMBER(485);
	clinit_java_lang_AssertionError(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_AssertionError);
	init_java_lang_AssertionError_java_lang_Object(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"death"_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_mindustry_audio_SoundControl$SoundData_clone_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/audio/SoundControl$SoundData:clone", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(471);
	sp[0].o = (jobject)((func_mindustry_audio_SoundControl$SoundData_clone_R_mindustry_audio_SoundControl$SoundData) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_audio_SoundControl$SoundData_clone_R_mindustry_audio_SoundControl$SoundData])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_audio_SoundControl$SoundData[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_mindustry_audio_SoundControl$SoundData_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Object_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_mindustry_audio_SoundControl$SoundData_clone_R_mindustry_audio_SoundControl$SoundData,
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
	{ "clone", "()Lmindustry/audio/SoundControl$SoundData;" },
};

static jclass interfaces[] { &class_java_lang_Cloneable, };

static FieldMetadata fields[] {
	{ "volume", &class_float, offsetof(mindustry_audio_SoundControl$SoundData, F_volume), "F", 0 },
	{ "pitch", &class_float, offsetof(mindustry_audio_SoundControl$SoundData, F_pitch), "F", 0 },
	{ "total", &class_float, offsetof(mindustry_audio_SoundControl$SoundData, F_total), "F", 0 },
	{ "sumX", &class_float, offsetof(mindustry_audio_SoundControl$SoundData, F_sumX), "F", 0 },
	{ "sumY", &class_float, offsetof(mindustry_audio_SoundControl$SoundData, F_sumY), "F", 0 },
	{ "soundID", &class_int, offsetof(mindustry_audio_SoundControl$SoundData, F_soundID), "I", 0 },
	{ "curVolume", &class_float, offsetof(mindustry_audio_SoundControl$SoundData, F_curVolume), "F", 0 },
	{ "totalVolume", &class_float, offsetof(mindustry_audio_SoundControl$SoundData, F_totalVolume), "F", 0 },
	{ "sound", &class_arc_audio_Sound, offsetof(mindustry_audio_SoundControl$SoundData, F_sound), "Larc/audio/Sound;", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_audio_SoundControl$SoundData, 0, "()V", 4 },
	{ "clone", (intptr_t) M_mindustry_audio_SoundControl$SoundData_clone_R_mindustry_audio_SoundControl$SoundData, VTABLE_mindustry_audio_SoundControl$SoundData_clone_R_mindustry_audio_SoundControl$SoundData, "()Lmindustry/audio/SoundControl$SoundData;", 1 },
	{ "clone", (intptr_t) M_mindustry_audio_SoundControl$SoundData_clone_R_java_lang_Object, VTABLE_mindustry_audio_SoundControl$SoundData_clone_R_java_lang_Object, "()Ljava/lang/Object;", 4161 },
};

Class class_mindustry_audio_SoundControl$SoundData{
		.nativeName = (intptr_t) "mindustry/audio/SoundControl$SoundData",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_audio_SoundControl$SoundData),
		.classVtable = (intptr_t) vtable_mindustry_audio_SoundControl$SoundData,
		.staticInitializer = (intptr_t) clinit_mindustry_audio_SoundControl$SoundData,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_audio_SoundControl$SoundData,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_audio_SoundControl,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 9,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_audio_SoundControl$SoundData = registerClass(&class_mindustry_audio_SoundControl$SoundData);

}

