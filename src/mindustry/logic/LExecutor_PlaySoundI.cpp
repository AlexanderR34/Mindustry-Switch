#include "mindustry/logic/LExecutor_PlaySoundI.h"
#include "java/lang/Math.h"
#include "arc/audio/Audio.h"
#include "java/lang/Object.h"
#include "arc/Core.h"
#include "mindustry/logic/LVar.h"
#include "mindustry/gen/Sounds.h"
#include "arc/audio/Sound.h"
#include "mindustry/logic/LExecutor_LInstruction.h"
#include "mindustry/logic/LExecutor_PlaySoundI.h"
#include "mindustry/logic/LExecutor.h"
#include "mindustry/core/World.h"

extern "C" {


void mark_mindustry_logic_LExecutor$PlaySoundI(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_logic_LExecutor$PlaySoundI *) object;
	if (self->F_id)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_id)->clazz)->markFunction)((jobject) self->F_id, mark, depth + 1);
	if (self->F_volume)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_volume)->clazz)->markFunction)((jobject) self->F_volume, mark, depth + 1);
	if (self->F_pitch)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_pitch)->clazz)->markFunction)((jobject) self->F_pitch, mark, depth + 1);
	if (self->F_pan)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_pan)->clazz)->markFunction)((jobject) self->F_pan, mark, depth + 1);
	if (self->F_x)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_x)->clazz)->markFunction)((jobject) self->F_x, mark, depth + 1);
	if (self->F_y)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_y)->clazz)->markFunction)((jobject) self->F_y, mark, depth + 1);
	if (self->F_limit)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_limit)->clazz)->markFunction)((jobject) self->F_limit, mark, depth + 1);
}

void clinit_mindustry_logic_LExecutor$PlaySoundI(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_logic_LExecutor$PlaySoundI(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$PlaySoundI:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LExecutor$PlaySoundI(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(2234);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(2235);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_logic_LExecutor$PlaySoundI_boolean_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar(jcontext ctx, jobject self, jbool param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5, jobject param6, jobject param7) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$PlaySoundI:<init>", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LExecutor$PlaySoundI(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	frame[6].o = param5;
	frame[7].o = param6;
	frame[8].o = param7;
	{
	LINE_NUMBER(2237);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(2238);
	((mindustry_logic_LExecutor$PlaySoundI *) NULL_CHECK((frame[0].o)))->F_positional = (frame[1].i);
	LINE_NUMBER(2239);
	((mindustry_logic_LExecutor$PlaySoundI *) NULL_CHECK((frame[0].o)))->F_id = (jref) (frame[2].o);
	LINE_NUMBER(2240);
	((mindustry_logic_LExecutor$PlaySoundI *) NULL_CHECK((frame[0].o)))->F_volume = (jref) (frame[3].o);
	LINE_NUMBER(2241);
	((mindustry_logic_LExecutor$PlaySoundI *) NULL_CHECK((frame[0].o)))->F_pitch = (jref) (frame[4].o);
	LINE_NUMBER(2242);
	((mindustry_logic_LExecutor$PlaySoundI *) NULL_CHECK((frame[0].o)))->F_pan = (jref) (frame[5].o);
	LINE_NUMBER(2243);
	((mindustry_logic_LExecutor$PlaySoundI *) NULL_CHECK((frame[0].o)))->F_x = (jref) (frame[6].o);
	LINE_NUMBER(2244);
	((mindustry_logic_LExecutor$PlaySoundI *) NULL_CHECK((frame[0].o)))->F_y = (jref) (frame[7].o);
	LINE_NUMBER(2245);
	((mindustry_logic_LExecutor$PlaySoundI *) NULL_CHECK((frame[0].o)))->F_limit = (jref) (frame[8].o);
	LINE_NUMBER(2246);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LExecutor$PlaySoundI_run_mindustry_logic_LExecutor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$PlaySoundI:run", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2250);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$PlaySoundI *) NULL_CHECK((frame[0].o)))->F_id;
	jint temp0 = (jint)((func_mindustry_logic_LVar_numi_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_numi_R_int])(ctx, sp[0].o);
	sp[0].o = (jobject)SM_mindustry_gen_Sounds_getSound_int_R_arc_audio_Sound(ctx, temp0);
	frame[2].o = sp[0].o;
	LINE_NUMBER(2251);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	clinit_mindustry_gen_Sounds(ctx);
	(sp++)->o = SF_mindustry_gen_Sounds_none;
	INST_ASTORE(2);
label_2:;
	{
	LINE_NUMBER(2253);
	if (((jint)((mindustry_logic_LExecutor$PlaySoundI *) NULL_CHECK((frame[0].o)))->F_positional) == 0) goto label_3;
	}
	{
	LINE_NUMBER(2254);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_logic_LExecutor$PlaySoundI *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp0 = (jfloat)((func_mindustry_logic_LVar_numf_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LVar_numf_R_float])(ctx, sp[1].o);
	jfloat temp1 = (jfloat)SM_mindustry_core_World_unconv_float_R_float(ctx, temp0);
	sp[1].o = (jobject)((mindustry_logic_LExecutor$PlaySoundI *) NULL_CHECK((frame[0].o)))->F_y;
	jfloat temp2 = (jfloat)((func_mindustry_logic_LVar_numf_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LVar_numf_R_float])(ctx, sp[1].o);
	jfloat temp3 = (jfloat)SM_mindustry_core_World_unconv_float_R_float(ctx, temp2);
	sp[1].o = (jobject)((mindustry_logic_LExecutor$PlaySoundI *) NULL_CHECK((frame[0].o)))->F_pitch;
	jfloat temp4 = (jfloat)((func_mindustry_logic_LVar_numf_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LVar_numf_R_float])(ctx, sp[1].o);
	sp[1].o = (jobject)((mindustry_logic_LExecutor$PlaySoundI *) NULL_CHECK((frame[0].o)))->F_volume;
	jfloat temp5 = (jfloat)((func_mindustry_logic_LVar_numf_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LVar_numf_R_float])(ctx, sp[1].o);
	jfloat temp6 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, temp5, (jfloat(2)));
	sp[1].o = (jobject)((mindustry_logic_LExecutor$PlaySoundI *) NULL_CHECK((frame[0].o)))->F_limit;
	jint temp7 = (jint)((func_mindustry_logic_LVar_bool_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LVar_bool_R_boolean])(ctx, sp[1].o);
	jint temp8 = (jint)((func_arc_audio_Sound_at_float_float_float_float_boolean_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Sound_at_float_float_float_float_boolean_R_int])(ctx, sp[0].o, temp1, temp3, temp4, temp6, temp7);
	goto label_5;
	}
label_3:;
	{
	LINE_NUMBER(2256);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_logic_LExecutor$PlaySoundI *) NULL_CHECK((frame[0].o)))->F_volume;
	jfloat temp0 = (jfloat)((func_mindustry_logic_LVar_numf_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LVar_numf_R_float])(ctx, sp[1].o);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_audio;
	jfloat temp1 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, (temp0 * ((jfloat)((arc_audio_Audio *) NULL_CHECK(sp[1].o))->F_sfxVolume)), (jfloat(2)));
	sp[1].o = (jobject)((mindustry_logic_LExecutor$PlaySoundI *) NULL_CHECK((frame[0].o)))->F_pitch;
	jfloat temp2 = (jfloat)((func_mindustry_logic_LVar_numf_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LVar_numf_R_float])(ctx, sp[1].o);
	sp[1].o = (jobject)((mindustry_logic_LExecutor$PlaySoundI *) NULL_CHECK((frame[0].o)))->F_pan;
	jfloat temp3 = (jfloat)((func_mindustry_logic_LVar_numf_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LVar_numf_R_float])(ctx, sp[1].o);
	jint temp4 = jint(0);
	sp[1].o = (jobject)((mindustry_logic_LExecutor$PlaySoundI *) NULL_CHECK((frame[0].o)))->F_limit;
	jint temp5 = (jint)((func_mindustry_logic_LVar_bool_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LVar_bool_R_boolean])(ctx, sp[1].o);
	jint temp6 = (jint)((func_arc_audio_Sound_play_float_float_float_boolean_boolean_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Sound_play_float_float_float_boolean_boolean_R_int])(ctx, sp[0].o, temp1, temp2, temp3, temp4, temp5);
	}
label_5:;
	LINE_NUMBER(2258);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_logic_LExecutor$PlaySoundI[] {
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
	(void *) M_mindustry_logic_LExecutor$PlaySoundI_run_mindustry_logic_LExecutor,
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
	{ "run", "(Lmindustry/logic/LExecutor;)V" },
};

static jclass interfaces[] { &class_mindustry_logic_LExecutor$LInstruction, };

static FieldMetadata fields[] {
	{ "positional", &class_boolean, offsetof(mindustry_logic_LExecutor$PlaySoundI, F_positional), "Z", 1 },
	{ "id", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$PlaySoundI, F_id), "Lmindustry/logic/LVar;", 1 },
	{ "volume", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$PlaySoundI, F_volume), "Lmindustry/logic/LVar;", 1 },
	{ "pitch", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$PlaySoundI, F_pitch), "Lmindustry/logic/LVar;", 1 },
	{ "pan", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$PlaySoundI, F_pan), "Lmindustry/logic/LVar;", 1 },
	{ "x", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$PlaySoundI, F_x), "Lmindustry/logic/LVar;", 1 },
	{ "y", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$PlaySoundI, F_y), "Lmindustry/logic/LVar;", 1 },
	{ "limit", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$PlaySoundI, F_limit), "Lmindustry/logic/LVar;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_logic_LExecutor$PlaySoundI, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_mindustry_logic_LExecutor$PlaySoundI_boolean_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar, 0, "(ZLmindustry/logic/LVar;Lmindustry/logic/LVar;Lmindustry/logic/LVar;Lmindustry/logic/LVar;Lmindustry/logic/LVar;Lmindustry/logic/LVar;Lmindustry/logic/LVar;)V", 1 },
	{ "run", (intptr_t) M_mindustry_logic_LExecutor$PlaySoundI_run_mindustry_logic_LExecutor, VTABLE_mindustry_logic_LExecutor$PlaySoundI_run_mindustry_logic_LExecutor, "(Lmindustry/logic/LExecutor;)V", 1 },
};

Class class_mindustry_logic_LExecutor$PlaySoundI{
		.nativeName = (intptr_t) "mindustry/logic/LExecutor$PlaySoundI",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_logic_LExecutor$PlaySoundI),
		.classVtable = (intptr_t) vtable_mindustry_logic_LExecutor$PlaySoundI,
		.staticInitializer = (intptr_t) clinit_mindustry_logic_LExecutor$PlaySoundI,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_logic_LExecutor$PlaySoundI,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_logic_LExecutor,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 8,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_logic_LExecutor$PlaySoundI = registerClass(&class_mindustry_logic_LExecutor$PlaySoundI);

}

