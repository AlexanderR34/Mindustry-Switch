#include "mindustry/content/UnitTypes_33_2_1_1.h"
#include "mindustry/entities/Effect.h"
#include "mindustry/content/UnitTypes_33_2_1_1.h"
#include "mindustry/graphics/Pal.h"
#include "java/lang/Object.h"
#include "arc/graphics/Color.h"
#include "mindustry/entities/effect/ExplosionEffect.h"
#include "mindustry/content/UnitTypes_33_2_1.h"

extern "C" {


void mark_mindustry_content_UnitTypes$33$2$1$1(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_entities_effect_ExplosionEffect(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_content_UnitTypes$33$2$1$1 *) object;
	if (self->F_this$2)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$2)->clazz)->markFunction)((jobject) self->F_this$2, mark, depth + 1);
}

void clinit_mindustry_content_UnitTypes$33$2$1$1(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_entities_effect_ExplosionEffect(ctx);
}

void init_mindustry_content_UnitTypes$33$2$1$1_mindustry_content_UnitTypes$33$2$1(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/UnitTypes$33$2$1$1:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_UnitTypes$33$2$1$1(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2202);
	((mindustry_content_UnitTypes$33$2$1$1 *) NULL_CHECK((frame[0].o)))->F_this$2 = (jref) (frame[1].o);
	init_mindustry_entities_effect_ExplosionEffect(ctx, (frame[0].o));
	LINE_NUMBER(2203);
	((mindustry_entities_Effect *) NULL_CHECK((frame[0].o)))->F_lifetime = (jfloat(28.0f));
	LINE_NUMBER(2204);
	((mindustry_entities_effect_ExplosionEffect *) NULL_CHECK((frame[0].o)))->F_waveStroke = (jfloat(6.0f));
	LINE_NUMBER(2205);
	((mindustry_entities_effect_ExplosionEffect *) NULL_CHECK((frame[0].o)))->F_waveLife = (jfloat(10.0f));
	LINE_NUMBER(2206);
	((mindustry_entities_effect_ExplosionEffect *) NULL_CHECK((frame[0].o)))->F_waveRadBase = (jfloat(7.0f));
	LINE_NUMBER(2207);
	sp[0].o = frame[0].o;
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_heal;
	((mindustry_entities_effect_ExplosionEffect *) NULL_CHECK(sp[0].o))->F_waveColor = (jref) sp[1].o;
	LINE_NUMBER(2208);
	((mindustry_entities_effect_ExplosionEffect *) NULL_CHECK((frame[0].o)))->F_waveRad = (jfloat(30.0f));
	LINE_NUMBER(2209);
	((mindustry_entities_effect_ExplosionEffect *) NULL_CHECK((frame[0].o)))->F_smokes = (6);
	LINE_NUMBER(2210);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_white;
	((mindustry_entities_effect_ExplosionEffect *) NULL_CHECK(sp[0].o))->F_smokeColor = (jref) sp[1].o;
	LINE_NUMBER(2211);
	sp[0].o = frame[0].o;
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_heal;
	((mindustry_entities_effect_ExplosionEffect *) NULL_CHECK(sp[0].o))->F_sparkColor = (jref) sp[1].o;
	LINE_NUMBER(2212);
	((mindustry_entities_effect_ExplosionEffect *) NULL_CHECK((frame[0].o)))->F_sparks = (6);
	LINE_NUMBER(2213);
	((mindustry_entities_effect_ExplosionEffect *) NULL_CHECK((frame[0].o)))->F_sparkRad = (jfloat(35.0f));
	LINE_NUMBER(2214);
	((mindustry_entities_effect_ExplosionEffect *) NULL_CHECK((frame[0].o)))->F_sparkStroke = (jfloat(1.5f));
	LINE_NUMBER(2215);
	((mindustry_entities_effect_ExplosionEffect *) NULL_CHECK((frame[0].o)))->F_sparkLen = (jfloat(4.0f));
	LINE_NUMBER(2202);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_content_UnitTypes$33$2$1$1[] {
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
	(void *) M_mindustry_entities_Effect_create_float_float_float_arc_graphics_Color_java_lang_Object,
	(void *) M_mindustry_entities_Effect_add_float_float_float_arc_graphics_Color_java_lang_Object,
	(void *) M_mindustry_entities_Effect_render_int_arc_graphics_Color_float_float_float_float_float_java_lang_Object_R_float,
	(void *) M_mindustry_entities_Effect_render_mindustry_entities_Effect$EffectContainer,
	(void *) M_mindustry_entities_Effect_lambda$create$0_float_float_float_arc_graphics_Color_java_lang_Object,
	(void *) M_mindustry_entities_effect_ExplosionEffect_lambda$new$0_mindustry_entities_Effect$EffectContainer,
	(void *) M_mindustry_entities_effect_ExplosionEffect_lambda$new$3_mindustry_entities_Effect$EffectContainer_float_float,
	(void *) M_mindustry_entities_effect_ExplosionEffect_lambda$new$2_mindustry_entities_Effect$EffectContainer_float_float,
	(void *) M_mindustry_entities_effect_ExplosionEffect_lambda$new$1_mindustry_entities_Effect$EffectContainer_mindustry_entities_Effect$EffectContainer,
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
	{ "lambda$new$0", "(Lmindustry/entities/Effect$EffectContainer;)V" },
	{ "lambda$new$3", "(Lmindustry/entities/Effect$EffectContainer;FF)V" },
	{ "lambda$new$2", "(Lmindustry/entities/Effect$EffectContainer;FF)V" },
	{ "lambda$new$1", "(Lmindustry/entities/Effect$EffectContainer;Lmindustry/entities/Effect$EffectContainer;)V" },
};

static FieldMetadata fields[] {
	{ "this$2", &class_mindustry_content_UnitTypes$33$2$1, offsetof(mindustry_content_UnitTypes$33$2$1$1, F_this$2), "Lmindustry/content/UnitTypes$33$2$1;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_content_UnitTypes$33$2$1$1_mindustry_content_UnitTypes$33$2$1, 0, "(Lmindustry/content/UnitTypes$33$2$1;)V", 0 },
};

Class class_mindustry_content_UnitTypes$33$2$1$1{
		.nativeName = (intptr_t) "mindustry/content/UnitTypes$33$2$1$1",
		.parentClass = (intptr_t) &class_mindustry_entities_effect_ExplosionEffect,
		.size = sizeof(mindustry_content_UnitTypes$33$2$1$1),
		.classVtable = (intptr_t) vtable_mindustry_content_UnitTypes$33$2$1$1,
		.staticInitializer = (intptr_t) clinit_mindustry_content_UnitTypes$33$2$1$1,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_content_UnitTypes$33$2$1$1,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 39,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_mindustry_content_UnitTypes$33$2$1$1 = registerClass(&class_mindustry_content_UnitTypes$33$2$1$1);

}

