#include "mindustry/entities/effect/WrapEffect.h"
#include "mindustry/entities/Effect.h"
#include "mindustry/entities/Effect_EffectContainer.h"
#include "java/lang/Object.h"
#include "mindustry/content/Fx.h"
#include "mindustry/entities/effect/WrapEffect.h"
#include "arc/graphics/Color.h"

extern "C" {


void mark_mindustry_entities_effect_WrapEffect(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_entities_effect_WrapEffect *) object;
	if (self->F_effect)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_effect)->clazz)->markFunction)((jobject) self->F_effect, mark, depth + 1);
	if (self->F_color)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_color)->clazz)->markFunction)((jobject) self->F_color, mark, depth + 1);
}

void clinit_mindustry_entities_effect_WrapEffect(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_entities_Effect(ctx);
}

void init_mindustry_entities_effect_WrapEffect(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/effect/WrapEffect:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_effect_WrapEffect(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(13);
	init_mindustry_entities_Effect(ctx, (frame[0].o));
	LINE_NUMBER(9);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_none;
	((mindustry_entities_effect_WrapEffect *) NULL_CHECK(sp[0].o))->F_effect = (jref) sp[1].o;
	LINE_NUMBER(10);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_white;
	sp[1].o = (jobject)((func_arc_graphics_Color_cpy_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Color_cpy_R_arc_graphics_Color])(ctx, sp[1].o);
	((mindustry_entities_effect_WrapEffect *) NULL_CHECK(sp[0].o))->F_color = (jref) sp[1].o;
	LINE_NUMBER(14);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_entities_effect_WrapEffect_mindustry_entities_Effect_arc_graphics_Color(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/effect/WrapEffect:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_effect_WrapEffect(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(16);
	init_mindustry_entities_Effect(ctx, (frame[0].o));
	LINE_NUMBER(9);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_none;
	((mindustry_entities_effect_WrapEffect *) NULL_CHECK(sp[0].o))->F_effect = (jref) sp[1].o;
	LINE_NUMBER(10);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_white;
	sp[1].o = (jobject)((func_arc_graphics_Color_cpy_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Color_cpy_R_arc_graphics_Color])(ctx, sp[1].o);
	((mindustry_entities_effect_WrapEffect *) NULL_CHECK(sp[0].o))->F_color = (jref) sp[1].o;
	LINE_NUMBER(17);
	((mindustry_entities_effect_WrapEffect *) NULL_CHECK((frame[0].o)))->F_effect = (jref) (frame[1].o);
	LINE_NUMBER(18);
	((mindustry_entities_effect_WrapEffect *) NULL_CHECK((frame[0].o)))->F_color = (jref) (frame[2].o);
	LINE_NUMBER(19);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_entities_effect_WrapEffect_mindustry_entities_Effect_arc_graphics_Color_float(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/effect/WrapEffect:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_effect_WrapEffect(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(21);
	init_mindustry_entities_Effect(ctx, (frame[0].o));
	LINE_NUMBER(9);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_none;
	((mindustry_entities_effect_WrapEffect *) NULL_CHECK(sp[0].o))->F_effect = (jref) sp[1].o;
	LINE_NUMBER(10);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_white;
	sp[1].o = (jobject)((func_arc_graphics_Color_cpy_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Color_cpy_R_arc_graphics_Color])(ctx, sp[1].o);
	((mindustry_entities_effect_WrapEffect *) NULL_CHECK(sp[0].o))->F_color = (jref) sp[1].o;
	LINE_NUMBER(22);
	((mindustry_entities_effect_WrapEffect *) NULL_CHECK((frame[0].o)))->F_effect = (jref) (frame[1].o);
	LINE_NUMBER(23);
	((mindustry_entities_effect_WrapEffect *) NULL_CHECK((frame[0].o)))->F_color = (jref) (frame[2].o);
	LINE_NUMBER(24);
	((mindustry_entities_effect_WrapEffect *) NULL_CHECK((frame[0].o)))->F_rotation = (frame[3].f);
	LINE_NUMBER(25);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_effect_WrapEffect_init(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/effect/WrapEffect:init", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(29);
	sp[0].o = (jobject)((mindustry_entities_effect_WrapEffect *) NULL_CHECK((frame[0].o)))->F_effect;
	((func_mindustry_entities_Effect_init) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_init])(ctx, sp[0].o);
	LINE_NUMBER(30);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_entities_effect_WrapEffect *) NULL_CHECK((frame[0].o)))->F_effect;
	((mindustry_entities_Effect *) NULL_CHECK(sp[0].o))->F_clip = ((jfloat)((mindustry_entities_Effect *) NULL_CHECK(sp[1].o))->F_clip);
	LINE_NUMBER(31);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_entities_effect_WrapEffect *) NULL_CHECK((frame[0].o)))->F_effect;
	((mindustry_entities_Effect *) NULL_CHECK(sp[0].o))->F_lifetime = ((jfloat)((mindustry_entities_Effect *) NULL_CHECK(sp[1].o))->F_lifetime);
	LINE_NUMBER(32);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_effect_WrapEffect_render_mindustry_entities_Effect$EffectContainer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/effect/WrapEffect:render", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(36);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_effect_WrapEffect_create_float_float_float_arc_graphics_Color_java_lang_Object(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jobject param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/effect/WrapEffect:create", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(40);
	sp[0].o = (jobject)((mindustry_entities_effect_WrapEffect *) NULL_CHECK((frame[0].o)))->F_effect;
	jfloat temp0 = frame[1].f;
	jfloat temp1 = frame[2].f;
	jfloat temp2 = (jfloat)((mindustry_entities_effect_WrapEffect *) NULL_CHECK((frame[0].o)))->F_rotation;
	sp[1].o = (jobject)((mindustry_entities_effect_WrapEffect *) NULL_CHECK((frame[0].o)))->F_color;
	((func_mindustry_entities_Effect_create_float_float_float_arc_graphics_Color_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_create_float_float_float_arc_graphics_Color_java_lang_Object])(ctx, sp[0].o, temp0, temp1, temp2, sp[1].o, (frame[5].o));
	LINE_NUMBER(41);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_entities_effect_WrapEffect[] {
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
	(void *) M_mindustry_entities_effect_WrapEffect_init,
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
	(void *) M_mindustry_entities_effect_WrapEffect_create_float_float_float_arc_graphics_Color_java_lang_Object,
	(void *) M_mindustry_entities_Effect_add_float_float_float_arc_graphics_Color_java_lang_Object,
	(void *) M_mindustry_entities_Effect_render_int_arc_graphics_Color_float_float_float_float_float_java_lang_Object_R_float,
	(void *) M_mindustry_entities_effect_WrapEffect_render_mindustry_entities_Effect$EffectContainer,
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
	{ "effect", &class_mindustry_entities_Effect, offsetof(mindustry_entities_effect_WrapEffect, F_effect), "Lmindustry/entities/Effect;", 1 },
	{ "color", &class_arc_graphics_Color, offsetof(mindustry_entities_effect_WrapEffect, F_color), "Larc/graphics/Color;", 1 },
	{ "rotation", &class_float, offsetof(mindustry_entities_effect_WrapEffect, F_rotation), "F", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_entities_effect_WrapEffect, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_mindustry_entities_effect_WrapEffect_mindustry_entities_Effect_arc_graphics_Color, 0, "(Lmindustry/entities/Effect;Larc/graphics/Color;)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_entities_effect_WrapEffect_mindustry_entities_Effect_arc_graphics_Color_float, 0, "(Lmindustry/entities/Effect;Larc/graphics/Color;F)V", 1 },
	{ "init", (intptr_t) M_mindustry_entities_effect_WrapEffect_init, VTABLE_mindustry_entities_effect_WrapEffect_init, "()V", 1 },
	{ "render", (intptr_t) M_mindustry_entities_effect_WrapEffect_render_mindustry_entities_Effect$EffectContainer, VTABLE_mindustry_entities_effect_WrapEffect_render_mindustry_entities_Effect$EffectContainer, "(Lmindustry/entities/Effect$EffectContainer;)V", 1 },
	{ "create", (intptr_t) M_mindustry_entities_effect_WrapEffect_create_float_float_float_arc_graphics_Color_java_lang_Object, VTABLE_mindustry_entities_effect_WrapEffect_create_float_float_float_arc_graphics_Color_java_lang_Object, "(FFFLarc/graphics/Color;Ljava/lang/Object;)V", 1 },
};

Class class_mindustry_entities_effect_WrapEffect{
		.nativeName = (intptr_t) "mindustry/entities/effect/WrapEffect",
		.parentClass = (intptr_t) &class_mindustry_entities_Effect,
		.size = sizeof(mindustry_entities_effect_WrapEffect),
		.classVtable = (intptr_t) vtable_mindustry_entities_effect_WrapEffect,
		.staticInitializer = (intptr_t) clinit_mindustry_entities_effect_WrapEffect,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_entities_effect_WrapEffect,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 35,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_entities_effect_WrapEffect = registerClass(&class_mindustry_entities_effect_WrapEffect);

}
