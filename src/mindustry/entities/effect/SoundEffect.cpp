#include "mindustry/entities/effect/SoundEffect.h"
#include "arc/math/Mathf.h"
#include "mindustry/entities/Effect.h"
#include "java/lang/Object.h"
#include "mindustry/entities/effect/SoundEffect.h"
#include "mindustry/entities/effect/SoundEffect_invoke_java_lang_Runnable_1.h"
#include "mindustry/gen/Sounds.h"
#include "arc/audio/Sound.h"
#include "arc/util/Time.h"
#include "arc/graphics/Color.h"
#include "java/lang/Runnable.h"

extern "C" {


void mark_mindustry_entities_effect_SoundEffect(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_entities_Effect(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_entities_effect_SoundEffect *) object;
	if (self->F_sound)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_sound)->clazz)->markFunction)((jobject) self->F_sound, mark, depth + 1);
	if (self->F_effect)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_effect)->clazz)->markFunction)((jobject) self->F_effect, mark, depth + 1);
}

void clinit_mindustry_entities_effect_SoundEffect(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_entities_Effect(ctx);
}

void init_mindustry_entities_effect_SoundEffect(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/effect/SoundEffect:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_effect_SoundEffect(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(23);
	init_mindustry_entities_Effect(ctx, (frame[0].o));
	LINE_NUMBER(16);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_none;
	((mindustry_entities_effect_SoundEffect *) NULL_CHECK(sp[0].o))->F_sound = (jref) sp[1].o;
	LINE_NUMBER(17);
	((mindustry_entities_effect_SoundEffect *) NULL_CHECK((frame[0].o)))->F_minPitch = (jfloat(0.8f));
	LINE_NUMBER(18);
	((mindustry_entities_effect_SoundEffect *) NULL_CHECK((frame[0].o)))->F_maxPitch = (jfloat(1.2f));
	LINE_NUMBER(19);
	((mindustry_entities_effect_SoundEffect *) NULL_CHECK((frame[0].o)))->F_minVolume = (jfloat(1));
	LINE_NUMBER(20);
	((mindustry_entities_effect_SoundEffect *) NULL_CHECK((frame[0].o)))->F_maxVolume = (jfloat(1));
	LINE_NUMBER(24);
	((mindustry_entities_Effect *) NULL_CHECK((frame[0].o)))->F_startDelay = (jfloat(-1.0f));
	LINE_NUMBER(25);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_entities_effect_SoundEffect_arc_audio_Sound_mindustry_entities_Effect(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/effect/SoundEffect:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_effect_SoundEffect(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(28);
	init_mindustry_entities_effect_SoundEffect(ctx, (frame[0].o));
	LINE_NUMBER(29);
	((mindustry_entities_effect_SoundEffect *) NULL_CHECK((frame[0].o)))->F_sound = (jref) (frame[1].o);
	LINE_NUMBER(30);
	((mindustry_entities_effect_SoundEffect *) NULL_CHECK((frame[0].o)))->F_effect = (jref) (frame[2].o);
	LINE_NUMBER(31);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_effect_SoundEffect_init(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/effect/SoundEffect:init", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(35);
	if ((floatCompare(((jfloat)((mindustry_entities_Effect *) NULL_CHECK((frame[0].o)))->F_startDelay), (jfloat(0)), 1)) >= 0) goto label_1;
	}
	{
	LINE_NUMBER(36);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_entities_effect_SoundEffect *) NULL_CHECK((frame[0].o)))->F_effect;
	((mindustry_entities_Effect *) NULL_CHECK(sp[0].o))->F_startDelay = ((jfloat)((mindustry_entities_Effect *) NULL_CHECK(sp[1].o))->F_startDelay);
	}
label_1:;
	LINE_NUMBER(38);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_effect_SoundEffect_create_float_float_float_arc_graphics_Color_java_lang_Object(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jobject param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/effect/SoundEffect:create", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(42);
	jint temp0 = (jint)((func_mindustry_entities_effect_SoundEffect_shouldCreate_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_effect_SoundEffect_shouldCreate_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(44);
	if ((floatCompare(((jfloat)((mindustry_entities_Effect *) NULL_CHECK((frame[0].o)))->F_startDelay), (jfloat(0)), -1)) <= 0) goto label_2;
	}
	{
	LINE_NUMBER(45);
	jfloat temp0 = (jfloat)((mindustry_entities_Effect *) NULL_CHECK((frame[0].o)))->F_startDelay;
	{ /* InvokeDynamic */
		clinit_mindustry_entities_effect_SoundEffect_invoke_java_lang_Runnable_1(ctx);
		auto proxy = (mindustry_entities_effect_SoundEffect_invoke_java_lang_Runnable_1 *) gcAlloc(ctx, &class_mindustry_entities_effect_SoundEffect_invoke_java_lang_Runnable_1);
		proxy->F_field2 = (frame[2].f);
		proxy->F_field1 = (frame[1].f);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	SM_arc_util_Time_run_float_java_lang_Runnable(ctx, temp0, sp[0].o);
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(47);
	sp[0].o = (jobject)((mindustry_entities_effect_SoundEffect *) NULL_CHECK((frame[0].o)))->F_sound;
	jfloat temp0 = frame[1].f;
	jfloat temp1 = frame[2].f;
	jfloat temp2 = (jfloat)SM_arc_math_Mathf_random_float_float_R_float(ctx, ((jfloat)((mindustry_entities_effect_SoundEffect *) NULL_CHECK((frame[0].o)))->F_minPitch), ((jfloat)((mindustry_entities_effect_SoundEffect *) NULL_CHECK((frame[0].o)))->F_maxPitch));
	jfloat temp3 = (jfloat)SM_arc_math_Mathf_random_float_float_R_float(ctx, ((jfloat)((mindustry_entities_effect_SoundEffect *) NULL_CHECK((frame[0].o)))->F_minVolume), ((jfloat)((mindustry_entities_effect_SoundEffect *) NULL_CHECK((frame[0].o)))->F_maxVolume));
	jint temp4 = (jint)((func_arc_audio_Sound_at_float_float_float_float_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Sound_at_float_float_float_float_R_int])(ctx, sp[0].o, temp0, temp1, temp2, temp3);
	}
label_4:;
	{
	LINE_NUMBER(50);
	sp[0].o = (jobject)((mindustry_entities_effect_SoundEffect *) NULL_CHECK((frame[0].o)))->F_effect;
	((func_mindustry_entities_Effect_create_float_float_float_arc_graphics_Color_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_create_float_float_float_arc_graphics_Color_java_lang_Object])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].o), (frame[5].o));
	LINE_NUMBER(51);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_effect_SoundEffect_lambda$create$0_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/effect/SoundEffect:lambda$create$0", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(45);
	sp[0].o = (jobject)((mindustry_entities_effect_SoundEffect *) NULL_CHECK((frame[0].o)))->F_sound;
	jfloat temp0 = frame[1].f;
	jfloat temp1 = frame[2].f;
	jfloat temp2 = (jfloat)SM_arc_math_Mathf_random_float_float_R_float(ctx, ((jfloat)((mindustry_entities_effect_SoundEffect *) NULL_CHECK((frame[0].o)))->F_minPitch), ((jfloat)((mindustry_entities_effect_SoundEffect *) NULL_CHECK((frame[0].o)))->F_maxPitch));
	jfloat temp3 = (jfloat)SM_arc_math_Mathf_random_float_float_R_float(ctx, ((jfloat)((mindustry_entities_effect_SoundEffect *) NULL_CHECK((frame[0].o)))->F_minVolume), ((jfloat)((mindustry_entities_effect_SoundEffect *) NULL_CHECK((frame[0].o)))->F_maxVolume));
	jint temp4 = (jint)((func_arc_audio_Sound_at_float_float_float_float_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Sound_at_float_float_float_float_R_int])(ctx, sp[0].o, temp0, temp1, temp2, temp3);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_entities_effect_SoundEffect[] {
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
	(void *) M_mindustry_entities_Effect_startDelay_float_R_mindustry_entities_Effect,
	(void *) M_mindustry_entities_effect_SoundEffect_init,
	(void *) M_mindustry_entities_Effect_followParent_boolean_R_mindustry_entities_Effect,
	(void *) M_mindustry_entities_Effect_rotWithParent_boolean_R_mindustry_entities_Effect,
	(void *) M_mindustry_entities_Effect_layer_float_R_mindustry_entities_Effect,
	(void *) M_mindustry_entities_Effect_baseRotation_float_R_mindustry_entities_Effect,
	(void *) M_mindustry_entities_Effect_layer_float_float_R_mindustry_entities_Effect,
	(void *) M_mindustry_entities_Effect_wrap_arc_graphics_Color_R_mindustry_entities_effect_WrapEffect,
	(void *) M_mindustry_entities_Effect_wrap_arc_graphics_Color_float_R_mindustry_entities_effect_WrapEffect,
	(void *) M_mindustry_entities_Effect_at_arc_math_geom_Position,
	(void *) M_mindustry_entities_Effect_at_arc_math_geom_Position_boolean,
	(void *) M_mindustry_entities_Effect_at_arc_math_geom_Position_float,
	(void *) M_mindustry_entities_Effect_at_float_float,
	(void *) M_mindustry_entities_Effect_at_float_float_float,
	(void *) M_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color,
	(void *) M_mindustry_entities_Effect_at_float_float_arc_graphics_Color,
	(void *) M_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color_java_lang_Object,
	(void *) M_mindustry_entities_Effect_at_float_float_float_java_lang_Object,
	(void *) M_mindustry_entities_Effect_shouldCreate_R_boolean,
	(void *) M_mindustry_entities_effect_SoundEffect_create_float_float_float_arc_graphics_Color_java_lang_Object,
	(void *) M_mindustry_entities_Effect_add_float_float_float_arc_graphics_Color_java_lang_Object,
	(void *) M_mindustry_entities_Effect_render_int_arc_graphics_Color_float_float_float_float_float_java_lang_Object_R_float,
	(void *) M_mindustry_entities_Effect_render_mindustry_entities_Effect$EffectContainer,
	(void *) M_mindustry_entities_Effect_lambda$create$0_float_float_float_arc_graphics_Color_java_lang_Object,
	(void *) M_mindustry_entities_effect_SoundEffect_lambda$create$0_float_float,
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
	{ "startDelay", "(F)Lmindustry/entities/Effect;" },
	{ "init", "()V" },
	{ "followParent", "(Z)Lmindustry/entities/Effect;" },
	{ "rotWithParent", "(Z)Lmindustry/entities/Effect;" },
	{ "layer", "(F)Lmindustry/entities/Effect;" },
	{ "baseRotation", "(F)Lmindustry/entities/Effect;" },
	{ "layer", "(FF)Lmindustry/entities/Effect;" },
	{ "wrap", "(Larc/graphics/Color;)Lmindustry/entities/effect/WrapEffect;" },
	{ "wrap", "(Larc/graphics/Color;F)Lmindustry/entities/effect/WrapEffect;" },
	{ "at", "(Larc/math/geom/Position;)V" },
	{ "at", "(Larc/math/geom/Position;Z)V" },
	{ "at", "(Larc/math/geom/Position;F)V" },
	{ "at", "(FF)V" },
	{ "at", "(FFF)V" },
	{ "at", "(FFFLarc/graphics/Color;)V" },
	{ "at", "(FFLarc/graphics/Color;)V" },
	{ "at", "(FFFLarc/graphics/Color;Ljava/lang/Object;)V" },
	{ "at", "(FFFLjava/lang/Object;)V" },
	{ "shouldCreate", "()Z" },
	{ "create", "(FFFLarc/graphics/Color;Ljava/lang/Object;)V" },
	{ "add", "(FFFLarc/graphics/Color;Ljava/lang/Object;)V" },
	{ "render", "(ILarc/graphics/Color;FFFFFLjava/lang/Object;)F" },
	{ "render", "(Lmindustry/entities/Effect$EffectContainer;)V" },
	{ "lambda$create$0", "(FFFLarc/graphics/Color;Ljava/lang/Object;)V" },
	{ "lambda$create$0", "(FF)V" },
};

static FieldMetadata fields[] {
	{ "sound", &class_arc_audio_Sound, offsetof(mindustry_entities_effect_SoundEffect, F_sound), "Larc/audio/Sound;", 1 },
	{ "minPitch", &class_float, offsetof(mindustry_entities_effect_SoundEffect, F_minPitch), "F", 1 },
	{ "maxPitch", &class_float, offsetof(mindustry_entities_effect_SoundEffect, F_maxPitch), "F", 1 },
	{ "minVolume", &class_float, offsetof(mindustry_entities_effect_SoundEffect, F_minVolume), "F", 1 },
	{ "maxVolume", &class_float, offsetof(mindustry_entities_effect_SoundEffect, F_maxVolume), "F", 1 },
	{ "effect", &class_mindustry_entities_Effect, offsetof(mindustry_entities_effect_SoundEffect, F_effect), "Lmindustry/entities/Effect;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_entities_effect_SoundEffect, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_mindustry_entities_effect_SoundEffect_arc_audio_Sound_mindustry_entities_Effect, 0, "(Larc/audio/Sound;Lmindustry/entities/Effect;)V", 1 },
	{ "init", (intptr_t) M_mindustry_entities_effect_SoundEffect_init, VTABLE_mindustry_entities_effect_SoundEffect_init, "()V", 1 },
	{ "create", (intptr_t) M_mindustry_entities_effect_SoundEffect_create_float_float_float_arc_graphics_Color_java_lang_Object, VTABLE_mindustry_entities_effect_SoundEffect_create_float_float_float_arc_graphics_Color_java_lang_Object, "(FFFLarc/graphics/Color;Ljava/lang/Object;)V", 1 },
	{ "lambda$create$0", (intptr_t) M_mindustry_entities_effect_SoundEffect_lambda$create$0_float_float, VTABLE_mindustry_entities_effect_SoundEffect_lambda$create$0_float_float, "(FF)V", 4098 },
};

Class class_mindustry_entities_effect_SoundEffect{
		.nativeName = (intptr_t) "mindustry/entities/effect/SoundEffect",
		.parentClass = (intptr_t) &class_mindustry_entities_Effect,
		.size = sizeof(mindustry_entities_effect_SoundEffect),
		.classVtable = (intptr_t) vtable_mindustry_entities_effect_SoundEffect,
		.staticInitializer = (intptr_t) clinit_mindustry_entities_effect_SoundEffect,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_entities_effect_SoundEffect,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 6,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 36,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_entities_effect_SoundEffect = registerClass(&class_mindustry_entities_effect_SoundEffect);

}
