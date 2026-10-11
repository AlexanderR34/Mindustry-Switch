#include "mindustry/entities/effect/MultiEffect.h"
#include "mindustry/entities/Effect.h"
#include "java/lang/Object.h"
#include "mindustry/entities/effect/MultiEffect.h"
#include "arc/graphics/Color.h"

extern "C" {


void mark_mindustry_entities_effect_MultiEffect(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_entities_effect_MultiEffect *) object;
	if (self->F_effects)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_effects)->clazz)->markFunction)((jobject) self->F_effects, mark, depth + 1);
}

void clinit_mindustry_entities_effect_MultiEffect(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_entities_Effect(ctx);
}

void init_mindustry_entities_effect_MultiEffect(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/effect/MultiEffect:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_effect_MultiEffect(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(10);
	init_mindustry_entities_Effect(ctx, (frame[0].o));
	LINE_NUMBER(8);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_entities_Effect, (jint(0)));
	((mindustry_entities_effect_MultiEffect *) NULL_CHECK(sp[0].o))->F_effects = (jref) sp[1].o;
	LINE_NUMBER(11);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_entities_effect_MultiEffect_Array1_mindustry_entities_Effect(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/effect/MultiEffect:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_effect_MultiEffect(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(13);
	init_mindustry_entities_Effect(ctx, (frame[0].o));
	LINE_NUMBER(8);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_entities_Effect, (jint(0)));
	((mindustry_entities_effect_MultiEffect *) NULL_CHECK(sp[0].o))->F_effects = (jref) sp[1].o;
	LINE_NUMBER(14);
	((mindustry_entities_effect_MultiEffect *) NULL_CHECK((frame[0].o)))->F_effects = (jref) (frame[1].o);
	LINE_NUMBER(15);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_effect_MultiEffect_create_float_float_float_arc_graphics_Color_java_lang_Object(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jobject param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/effect/MultiEffect:create", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(19);
	jint temp0 = (jint)((func_mindustry_entities_effect_MultiEffect_shouldCreate_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_effect_MultiEffect_shouldCreate_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(21);
	sp[0].o = (jobject)((mindustry_entities_effect_MultiEffect *) NULL_CHECK((frame[0].o)))->F_effects;
	frame[6].o = sp[0].o;
	frame[7].i = (((jarray) nullCheck(ctx, (frame[6].o)))->length);
	frame[8].i = (jint(0));
	}
label_2:;
	{
	if ((frame[8].i) >= (frame[7].i)) goto label_3;
	}
	{
	frame[9].o = ((jobject)ARRAY_ACCESS(jobject, (frame[6].o), (frame[8].i)));
	LINE_NUMBER(22);
	((func_mindustry_entities_Effect_create_float_float_float_arc_graphics_Color_java_lang_Object) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_mindustry_entities_Effect_create_float_float_float_arc_graphics_Color_java_lang_Object])(ctx, (frame[9].o), (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].o), (frame[5].o));
	LINE_NUMBER(21);
	INST_IINC(8, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(24);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_entities_effect_MultiEffect[] {
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
	(void *) M_mindustry_entities_Effect_init,
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
	(void *) M_mindustry_entities_effect_MultiEffect_create_float_float_float_arc_graphics_Color_java_lang_Object,
	(void *) M_mindustry_entities_Effect_add_float_float_float_arc_graphics_Color_java_lang_Object,
	(void *) M_mindustry_entities_Effect_render_int_arc_graphics_Color_float_float_float_float_float_java_lang_Object_R_float,
	(void *) M_mindustry_entities_Effect_render_mindustry_entities_Effect$EffectContainer,
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
	{ "effects", getArrayClass(&class_mindustry_entities_Effect, 1), offsetof(mindustry_entities_effect_MultiEffect, F_effects), "[Lmindustry/entities/Effect;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_entities_effect_MultiEffect, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_mindustry_entities_effect_MultiEffect_Array1_mindustry_entities_Effect, 0, "([Lmindustry/entities/Effect;)V", 129 },
	{ "create", (intptr_t) M_mindustry_entities_effect_MultiEffect_create_float_float_float_arc_graphics_Color_java_lang_Object, VTABLE_mindustry_entities_effect_MultiEffect_create_float_float_float_arc_graphics_Color_java_lang_Object, "(FFFLarc/graphics/Color;Ljava/lang/Object;)V", 1 },
};

Class class_mindustry_entities_effect_MultiEffect{
		.nativeName = (intptr_t) "mindustry/entities/effect/MultiEffect",
		.parentClass = (intptr_t) &class_mindustry_entities_Effect,
		.size = sizeof(mindustry_entities_effect_MultiEffect),
		.classVtable = (intptr_t) vtable_mindustry_entities_effect_MultiEffect,
		.staticInitializer = (intptr_t) clinit_mindustry_entities_effect_MultiEffect,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_entities_effect_MultiEffect,
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
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 35,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_entities_effect_MultiEffect = registerClass(&class_mindustry_entities_effect_MultiEffect);

}
