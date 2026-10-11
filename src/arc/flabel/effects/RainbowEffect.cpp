#include "arc/flabel/effects/RainbowEffect.h"
#include "arc/flabel/FLabel.h"
#include "arc/util/Strings.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/flabel/effects/RainbowEffect.h"
#include "arc/flabel/FGlyph.h"
#include "arc/graphics/Color.h"
#include "arc/flabel/FEffect.h"

extern "C" {

jfloat SF_arc_flabel_effects_RainbowEffect_defaultDistance;
jfloat SF_arc_flabel_effects_RainbowEffect_defaultFrequency;

void mark_arc_flabel_effects_RainbowEffect(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_flabel_FEffect(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (arc_flabel_effects_RainbowEffect *) object;
}

void clinit_arc_flabel_effects_RainbowEffect(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_flabel_FEffect(ctx);
	SF_arc_flabel_effects_RainbowEffect_defaultDistance = jfloat(0.975f);
	SF_arc_flabel_effects_RainbowEffect_defaultFrequency = jfloat(2.0f);
}

void init_arc_flabel_effects_RainbowEffect(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/flabel/effects/RainbowEffect:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_flabel_effects_RainbowEffect(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(8);
	init_arc_flabel_FEffect(ctx, (frame[0].o));
	LINE_NUMBER(11);
	((arc_flabel_effects_RainbowEffect *) NULL_CHECK((frame[0].o)))->F_distance = (jfloat(1));
	LINE_NUMBER(12);
	((arc_flabel_effects_RainbowEffect *) NULL_CHECK((frame[0].o)))->F_frequency = (jfloat(1));
	LINE_NUMBER(13);
	((arc_flabel_effects_RainbowEffect *) NULL_CHECK((frame[0].o)))->F_saturation = (jfloat(1));
	LINE_NUMBER(14);
	((arc_flabel_effects_RainbowEffect *) NULL_CHECK((frame[0].o)))->F_brightness = (jfloat(1));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_flabel_effects_RainbowEffect_applyParams_Array1_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/flabel/effects/RainbowEffect:applyParams", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(18);
	if ((((jarray) nullCheck(ctx, (frame[1].o)))->length) <= 0) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_arc_util_Strings_parseFloat_java_lang_String_float_R_float(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0)))), (jfloat(1)));
	((arc_flabel_effects_RainbowEffect *) NULL_CHECK(sp[0].o))->F_distance = temp0;
	}
label_1:;
	{
	LINE_NUMBER(19);
	if ((((jarray) nullCheck(ctx, (frame[1].o)))->length) <= (jint(1))) goto label_2;
	}
	{
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_arc_util_Strings_parseFloat_java_lang_String_float_R_float(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(1)))), (jfloat(1)));
	((arc_flabel_effects_RainbowEffect *) NULL_CHECK(sp[0].o))->F_frequency = temp0;
	}
label_2:;
	{
	LINE_NUMBER(20);
	if ((((jarray) nullCheck(ctx, (frame[1].o)))->length) <= (jint(2))) goto label_3;
	}
	{
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_arc_util_Strings_parseFloat_java_lang_String_float_R_float(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(2)))), (jfloat(1)));
	((arc_flabel_effects_RainbowEffect *) NULL_CHECK(sp[0].o))->F_saturation = temp0;
	}
label_3:;
	{
	LINE_NUMBER(21);
	if ((((jarray) nullCheck(ctx, (frame[1].o)))->length) <= (jint(3))) goto label_4;
	}
	{
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_arc_util_Strings_parseFloat_java_lang_String_float_R_float(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(3)))), (jfloat(1)));
	((arc_flabel_effects_RainbowEffect *) NULL_CHECK(sp[0].o))->F_brightness = temp0;
	}
label_4:;
	LINE_NUMBER(22);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_flabel_effects_RainbowEffect_onApply_arc_flabel_FLabel_arc_flabel_FGlyph_int_float(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/flabel/effects/RainbowEffect:onApply", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(27);
	frame[5].f = (((jfloat(1)) / ((jfloat)((arc_flabel_effects_RainbowEffect *) NULL_CHECK((frame[0].o)))->F_distance)) * (jfloat(0.024999976f)));
	LINE_NUMBER(28);
	frame[6].f = (((jfloat(1)) / ((jfloat)((arc_flabel_effects_RainbowEffect *) NULL_CHECK((frame[0].o)))->F_frequency)) * (jfloat(2)));
	LINE_NUMBER(29);
	jfloat temp0 = (jfloat)((func_arc_flabel_effects_RainbowEffect_calculateProgress_float_float_boolean_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_flabel_effects_RainbowEffect_calculateProgress_float_float_boolean_R_float])(ctx, (frame[0].o), (frame[6].f), ((frame[5].f) * (jfloat((frame[3].i)))), (jint(0)));
	frame[7].f = temp0;
	LINE_NUMBER(32);
	sp[0].o = (jobject)((arc_flabel_FGlyph *) NULL_CHECK((frame[2].o)))->F_color;
	if (sp[0].o != nullptr) goto label_4;
	}
	{
	LINE_NUMBER(33);
	sp[0].o = frame[2].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_Color);
	clinit_arc_graphics_Color(ctx);
	sp[2].o = (jobject)SF_arc_graphics_Color_white;
	init_arc_graphics_Color_arc_graphics_Color(ctx, sp[1].o, sp[2].o);
	((arc_flabel_FGlyph *) NULL_CHECK(sp[0].o))->F_color = (jref) sp[1].o;
	}
label_4:;
	{
	LINE_NUMBER(35);
	jfloat temp0 = (jfloat(360.0f)) * (frame[7].f);
	jfloat temp1 = ((jfloat)((arc_flabel_effects_RainbowEffect *) NULL_CHECK((frame[0].o)))->F_saturation) * (jfloat(100.0f));
	jfloat temp2 = ((jfloat)((arc_flabel_effects_RainbowEffect *) NULL_CHECK((frame[0].o)))->F_brightness) * (jfloat(100.0f));
	sp[0].o = (jobject)((arc_flabel_FGlyph *) NULL_CHECK((frame[2].o)))->F_color;
	sp[0].o = (jobject)SM_arc_graphics_Color_HSVtoRGB_float_float_float_arc_graphics_Color_R_arc_graphics_Color(ctx, temp0, temp1, temp2, sp[0].o);
	LINE_NUMBER(36);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_flabel_effects_RainbowEffect[] {
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
	(void *) M_arc_flabel_effects_RainbowEffect_applyParams_Array1_java_lang_String,
	(void *) M_arc_flabel_FEffect_update_float,
	(void *) M_arc_flabel_FEffect_apply_arc_flabel_FLabel_arc_flabel_FGlyph_int_float,
	(void *) M_arc_flabel_effects_RainbowEffect_onApply_arc_flabel_FLabel_arc_flabel_FGlyph_int_float,
	(void *) M_arc_flabel_FEffect_isFinished_R_boolean,
	(void *) M_arc_flabel_FEffect_calculateFadeout_R_float,
	(void *) M_arc_flabel_FEffect_calculateProgress_float_R_float,
	(void *) M_arc_flabel_FEffect_calculateProgress_float_float_R_float,
	(void *) M_arc_flabel_FEffect_calculateProgress_float_float_boolean_R_float,
	(void *) M_arc_flabel_FEffect_getLineHeight_arc_flabel_FLabel_R_float,
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
	{ "applyParams", "([Ljava/lang/String;)V" },
	{ "update", "(F)V" },
	{ "apply", "(Larc/flabel/FLabel;Larc/flabel/FGlyph;IF)V" },
	{ "onApply", "(Larc/flabel/FLabel;Larc/flabel/FGlyph;IF)V" },
	{ "isFinished", "()Z" },
	{ "calculateFadeout", "()F" },
	{ "calculateProgress", "(F)F" },
	{ "calculateProgress", "(FF)F" },
	{ "calculateProgress", "(FFZ)F" },
	{ "getLineHeight", "(Larc/flabel/FLabel;)F" },
};

static FieldMetadata fields[] {
	{ "defaultDistance", &class_float, (intptr_t) &SF_arc_flabel_effects_RainbowEffect_defaultDistance, "F", 26 },
	{ "defaultFrequency", &class_float, (intptr_t) &SF_arc_flabel_effects_RainbowEffect_defaultFrequency, "F", 26 },
	{ "distance", &class_float, offsetof(arc_flabel_effects_RainbowEffect, F_distance), "F", 1 },
	{ "frequency", &class_float, offsetof(arc_flabel_effects_RainbowEffect, F_frequency), "F", 1 },
	{ "saturation", &class_float, offsetof(arc_flabel_effects_RainbowEffect, F_saturation), "F", 1 },
	{ "brightness", &class_float, offsetof(arc_flabel_effects_RainbowEffect, F_brightness), "F", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_flabel_effects_RainbowEffect, 0, "()V", 1 },
	{ "applyParams", (intptr_t) M_arc_flabel_effects_RainbowEffect_applyParams_Array1_java_lang_String, VTABLE_arc_flabel_effects_RainbowEffect_applyParams_Array1_java_lang_String, "([Ljava/lang/String;)V", 1 },
	{ "onApply", (intptr_t) M_arc_flabel_effects_RainbowEffect_onApply_arc_flabel_FLabel_arc_flabel_FGlyph_int_float, VTABLE_arc_flabel_effects_RainbowEffect_onApply_arc_flabel_FLabel_arc_flabel_FGlyph_int_float, "(Larc/flabel/FLabel;Larc/flabel/FGlyph;IF)V", 4 },
};

Class class_arc_flabel_effects_RainbowEffect{
		.nativeName = (intptr_t) "arc/flabel/effects/RainbowEffect",
		.parentClass = (intptr_t) &class_arc_flabel_FEffect,
		.size = sizeof(arc_flabel_effects_RainbowEffect),
		.classVtable = (intptr_t) vtable_arc_flabel_effects_RainbowEffect,
		.staticInitializer = (intptr_t) clinit_arc_flabel_effects_RainbowEffect,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_flabel_effects_RainbowEffect,
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
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 21,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_flabel_effects_RainbowEffect = registerClass(&class_arc_flabel_effects_RainbowEffect);

}
