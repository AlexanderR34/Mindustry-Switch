#include "mindustry/entities/effect/SeqEffect.h"
#include "java/lang/Math.h"
#include "mindustry/entities/Effect.h"
#include "mindustry/entities/Effect_EffectContainer.h"
#include "java/lang/Object.h"
#include "mindustry/entities/effect/SeqEffect.h"
#include "arc/graphics/Color.h"

extern "C" {


void mark_mindustry_entities_effect_SeqEffect(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_entities_effect_SeqEffect *) object;
	if (self->F_effects)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_effects)->clazz)->markFunction)((jobject) self->F_effects, mark, depth + 1);
}

void clinit_mindustry_entities_effect_SeqEffect(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_entities_Effect(ctx);
}

void init_mindustry_entities_effect_SeqEffect(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/effect/SeqEffect:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_effect_SeqEffect(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(13);
	init_mindustry_entities_Effect(ctx, (frame[0].o));
	LINE_NUMBER(11);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_entities_Effect, (jint(0)));
	((mindustry_entities_effect_SeqEffect *) NULL_CHECK(sp[0].o))->F_effects = (jref) sp[1].o;
	LINE_NUMBER(14);
	((mindustry_entities_Effect *) NULL_CHECK((frame[0].o)))->F_clip = (jfloat(100.0f));
	LINE_NUMBER(15);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_entities_effect_SeqEffect_Array1_mindustry_entities_Effect(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/effect/SeqEffect:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_effect_SeqEffect(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(18);
	init_mindustry_entities_effect_SeqEffect(ctx, (frame[0].o));
	LINE_NUMBER(19);
	((mindustry_entities_effect_SeqEffect *) NULL_CHECK((frame[0].o)))->F_effects = (jref) (frame[1].o);
	LINE_NUMBER(20);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_effect_SeqEffect_init(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/effect/SeqEffect:init", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(24);
	((mindustry_entities_Effect *) NULL_CHECK((frame[0].o)))->F_lifetime = (jfloat(0));
	LINE_NUMBER(25);
	sp[0].o = (jobject)((mindustry_entities_effect_SeqEffect *) NULL_CHECK((frame[0].o)))->F_effects;
	frame[1].o = sp[0].o;
	frame[2].i = (((jarray) nullCheck(ctx, (frame[1].o)))->length);
	frame[3].i = (jint(0));
	}
label_2:;
	{
	if ((frame[3].i) >= (frame[2].i)) goto label_3;
	}
	{
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i)));
	LINE_NUMBER(26);
	((func_mindustry_entities_Effect_init) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_entities_Effect_init])(ctx, (frame[4].o));
	LINE_NUMBER(27);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((jfloat)((mindustry_entities_Effect *) NULL_CHECK((frame[0].o)))->F_clip), ((jfloat)((mindustry_entities_Effect *) NULL_CHECK((frame[4].o)))->F_clip));
	((mindustry_entities_Effect *) NULL_CHECK(sp[0].o))->F_clip = temp0;
	LINE_NUMBER(28);
	sp[0].o = frame[0].o;
	((mindustry_entities_Effect *) NULL_CHECK(sp[0].o))->F_lifetime = (((jfloat)((mindustry_entities_Effect *) NULL_CHECK(sp[0].o))->F_lifetime) + ((jfloat)((mindustry_entities_Effect *) NULL_CHECK((frame[4].o)))->F_lifetime));
	LINE_NUMBER(25);
	INST_IINC(3, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(30);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_effect_SeqEffect_render_mindustry_entities_Effect$EffectContainer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/effect/SeqEffect:render", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(34);
	sp[0].o = (jobject)((func_mindustry_entities_Effect$EffectContainer_inner_R_mindustry_entities_Effect$EffectContainer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_entities_Effect$EffectContainer_inner_R_mindustry_entities_Effect$EffectContainer])(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(35);
	frame[3].f = ((jfloat)((mindustry_entities_Effect$EffectContainer *) NULL_CHECK((frame[1].o)))->F_time);
	frame[4].f = (jfloat(0));
	LINE_NUMBER(36);
	frame[5].i = (jint(0));
	}
label_4:;
	{
	jint temp0 = frame[5].i;
	sp[0].o = (jobject)((mindustry_entities_effect_SeqEffect *) NULL_CHECK((frame[0].o)))->F_effects;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_5;
	}
	{
	LINE_NUMBER(37);
	sp[0].o = (jobject)((mindustry_entities_effect_SeqEffect *) NULL_CHECK((frame[0].o)))->F_effects;
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[5].i)));
	LINE_NUMBER(38);
	if ((floatCompare((frame[3].f), (((jfloat)((mindustry_entities_Effect *) NULL_CHECK((frame[6].o)))->F_lifetime) + (frame[4].f)), 1)) > 0) goto label_8;
	}
	{
	LINE_NUMBER(39);
	sp[0].o = frame[2].o;
	jint temp0 = ((jint)((mindustry_entities_Effect$EffectContainer *) NULL_CHECK((frame[1].o)))->F_id) + (frame[5].i);
	sp[1].o = (jobject)((mindustry_entities_Effect$EffectContainer *) NULL_CHECK((frame[1].o)))->F_color;
	jfloat temp1 = (frame[3].f) - (frame[4].f);
	jfloat temp2 = (jfloat)((mindustry_entities_Effect *) NULL_CHECK((frame[6].o)))->F_lifetime;
	jfloat temp3 = (jfloat)((mindustry_entities_Effect$EffectContainer *) NULL_CHECK((frame[1].o)))->F_rotation;
	jfloat temp4 = (jfloat)((mindustry_entities_Effect$EffectContainer *) NULL_CHECK((frame[1].o)))->F_x;
	jfloat temp5 = (jfloat)((mindustry_entities_Effect$EffectContainer *) NULL_CHECK((frame[1].o)))->F_y;
	sp[2].o = (jobject)((mindustry_entities_Effect$EffectContainer *) NULL_CHECK((frame[1].o)))->F_data;
	((func_mindustry_entities_Effect$EffectContainer_set_int_arc_graphics_Color_float_float_float_float_float_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect$EffectContainer_set_int_arc_graphics_Color_float_float_float_float_float_java_lang_Object])(ctx, sp[0].o, temp0, sp[1].o, temp1, temp2, temp3, temp4, temp5, sp[2].o);
	LINE_NUMBER(40);
	((func_mindustry_entities_Effect_render_mindustry_entities_Effect$EffectContainer) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_entities_Effect_render_mindustry_entities_Effect$EffectContainer])(ctx, (frame[6].o), (frame[2].o));
	LINE_NUMBER(41);
	sp[0].o = frame[0].o;
	jfloat temp6 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((jfloat)((mindustry_entities_Effect *) NULL_CHECK((frame[0].o)))->F_clip), ((jfloat)((mindustry_entities_Effect *) NULL_CHECK((frame[6].o)))->F_clip));
	((mindustry_entities_Effect *) NULL_CHECK(sp[0].o))->F_clip = temp6;
	LINE_NUMBER(42);
	goto label_5;
	}
label_8:;
	{
	LINE_NUMBER(44);
	frame[4].f = ((frame[4].f) + ((jfloat)((mindustry_entities_Effect *) NULL_CHECK((frame[6].o)))->F_lifetime));
	LINE_NUMBER(36);
	INST_IINC(5, 1);
	goto label_4;
	}
label_5:;
	LINE_NUMBER(46);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_entities_effect_SeqEffect[] {
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
	(void *) M_mindustry_entities_effect_SeqEffect_init,
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
	(void *) M_mindustry_entities_Effect_create_float_float_float_arc_graphics_Color_java_lang_Object,
	(void *) M_mindustry_entities_Effect_add_float_float_float_arc_graphics_Color_java_lang_Object,
	(void *) M_mindustry_entities_Effect_render_int_arc_graphics_Color_float_float_float_float_float_java_lang_Object_R_float,
	(void *) M_mindustry_entities_effect_SeqEffect_render_mindustry_entities_Effect$EffectContainer,
	(void *) M_mindustry_entities_Effect_lambda$create$0_float_float_float_arc_graphics_Color_java_lang_Object,
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
};

static FieldMetadata fields[] {
	{ "effects", getArrayClass(&class_mindustry_entities_Effect, 1), offsetof(mindustry_entities_effect_SeqEffect, F_effects), "[Lmindustry/entities/Effect;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_entities_effect_SeqEffect, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_mindustry_entities_effect_SeqEffect_Array1_mindustry_entities_Effect, 0, "([Lmindustry/entities/Effect;)V", 129 },
	{ "init", (intptr_t) M_mindustry_entities_effect_SeqEffect_init, VTABLE_mindustry_entities_effect_SeqEffect_init, "()V", 1 },
	{ "render", (intptr_t) M_mindustry_entities_effect_SeqEffect_render_mindustry_entities_Effect$EffectContainer, VTABLE_mindustry_entities_effect_SeqEffect_render_mindustry_entities_Effect$EffectContainer, "(Lmindustry/entities/Effect$EffectContainer;)V", 1 },
};

Class class_mindustry_entities_effect_SeqEffect{
		.nativeName = (intptr_t) "mindustry/entities/effect/SeqEffect",
		.parentClass = (intptr_t) &class_mindustry_entities_Effect,
		.size = sizeof(mindustry_entities_effect_SeqEffect),
		.classVtable = (intptr_t) vtable_mindustry_entities_effect_SeqEffect,
		.staticInitializer = (intptr_t) clinit_mindustry_entities_effect_SeqEffect,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_entities_effect_SeqEffect,
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
		.vtableSize = 35,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_entities_effect_SeqEffect = registerClass(&class_mindustry_entities_effect_SeqEffect);

}
