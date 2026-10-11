#include "arc/flabel/effects/WindEffect.h"
#include "arc/flabel/FLabel.h"
#include "java/lang/Math.h"
#include "arc/util/Strings.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/util/noise/Simplex.h"
#include "arc/flabel/effects/WindEffect.h"
#include "arc/flabel/FGlyph.h"
#include "arc/flabel/FEffect.h"

extern "C" {

jfloat SF_arc_flabel_effects_WindEffect_defaultSpacing;
jfloat SF_arc_flabel_effects_WindEffect_defaultDistance;
jfloat SF_arc_flabel_effects_WindEffect_defaultIntensity;
jfloat SF_arc_flabel_effects_WindEffect_distanceXRatio;
jfloat SF_arc_flabel_effects_WindEffect_distanceYRatio;

void mark_arc_flabel_effects_WindEffect(jobject object, jint mark, jint depth) {
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
	auto self = (arc_flabel_effects_WindEffect *) object;
}

void clinit_arc_flabel_effects_WindEffect(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_flabel_FEffect(ctx);
	SF_arc_flabel_effects_WindEffect_defaultSpacing = jfloat(10.0f);
	SF_arc_flabel_effects_WindEffect_defaultDistance = jfloat(0.33f);
	SF_arc_flabel_effects_WindEffect_defaultIntensity = jfloat(0.375f);
	SF_arc_flabel_effects_WindEffect_distanceXRatio = jfloat(1.5f);
	SF_arc_flabel_effects_WindEffect_distanceYRatio = jfloat(1.0f);
}

void init_arc_flabel_effects_WindEffect(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/flabel/effects/WindEffect:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_flabel_effects_WindEffect(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(8);
	init_arc_flabel_FEffect(ctx, (frame[0].o));
	LINE_NUMBER(11);
	((arc_flabel_effects_WindEffect *) NULL_CHECK((frame[0].o)))->F_noiseCursorX = (jfloat(0));
	LINE_NUMBER(12);
	((arc_flabel_effects_WindEffect *) NULL_CHECK((frame[0].o)))->F_noiseCursorY = (jfloat(0));
	LINE_NUMBER(14);
	((arc_flabel_effects_WindEffect *) NULL_CHECK((frame[0].o)))->F_distanceX = (jfloat(1));
	LINE_NUMBER(15);
	((arc_flabel_effects_WindEffect *) NULL_CHECK((frame[0].o)))->F_distanceY = (jfloat(1));
	LINE_NUMBER(16);
	((arc_flabel_effects_WindEffect *) NULL_CHECK((frame[0].o)))->F_spacing = (jfloat(1));
	LINE_NUMBER(17);
	((arc_flabel_effects_WindEffect *) NULL_CHECK((frame[0].o)))->F_intensity = (jfloat(1));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_flabel_effects_WindEffect_applyParams_Array1_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/flabel/effects/WindEffect:applyParams", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(21);
	if ((((jarray) nullCheck(ctx, (frame[1].o)))->length) <= 0) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_arc_util_Strings_parseFloat_java_lang_String_float_R_float(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0)))), (jfloat(1)));
	((arc_flabel_effects_WindEffect *) NULL_CHECK(sp[0].o))->F_distanceX = temp0;
	}
label_1:;
	{
	LINE_NUMBER(22);
	if ((((jarray) nullCheck(ctx, (frame[1].o)))->length) <= (jint(1))) goto label_2;
	}
	{
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_arc_util_Strings_parseFloat_java_lang_String_float_R_float(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(1)))), (jfloat(1)));
	((arc_flabel_effects_WindEffect *) NULL_CHECK(sp[0].o))->F_distanceY = temp0;
	}
label_2:;
	{
	LINE_NUMBER(23);
	if ((((jarray) nullCheck(ctx, (frame[1].o)))->length) <= (jint(2))) goto label_3;
	}
	{
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_arc_util_Strings_parseFloat_java_lang_String_float_R_float(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(2)))), (jfloat(1)));
	((arc_flabel_effects_WindEffect *) NULL_CHECK(sp[0].o))->F_spacing = temp0;
	}
label_3:;
	{
	LINE_NUMBER(24);
	if ((((jarray) nullCheck(ctx, (frame[1].o)))->length) <= (jint(3))) goto label_4;
	}
	{
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_arc_util_Strings_parseFloat_java_lang_String_float_R_float(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(3)))), (jfloat(1)));
	((arc_flabel_effects_WindEffect *) NULL_CHECK(sp[0].o))->F_intensity = temp0;
	}
label_4:;
	LINE_NUMBER(25);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_flabel_effects_WindEffect_update_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/flabel/effects/WindEffect:update", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(29);
	M_arc_flabel_FEffect_update_float(ctx, (frame[0].o), (frame[1].f));
	LINE_NUMBER(32);
	sp[0].o = frame[0].o;
	((arc_flabel_effects_WindEffect *) NULL_CHECK(sp[0].o))->F_noiseCursorX = (((jfloat)((arc_flabel_effects_WindEffect *) NULL_CHECK(sp[0].o))->F_noiseCursorX) + (((jfloat(0.1f)) * ((jfloat)((arc_flabel_effects_WindEffect *) NULL_CHECK((frame[0].o)))->F_intensity)) * (jfloat(0.375f))));
	LINE_NUMBER(33);
	sp[0].o = frame[0].o;
	((arc_flabel_effects_WindEffect *) NULL_CHECK(sp[0].o))->F_noiseCursorY = (((jfloat)((arc_flabel_effects_WindEffect *) NULL_CHECK(sp[0].o))->F_noiseCursorY) + (((jfloat(0.1f)) * ((jfloat)((arc_flabel_effects_WindEffect *) NULL_CHECK((frame[0].o)))->F_intensity)) * (jfloat(0.375f))));
	LINE_NUMBER(34);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_flabel_effects_WindEffect_onApply_arc_flabel_FLabel_arc_flabel_FGlyph_int_float(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[27];
	auto stack = &frame[16];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/flabel/effects/WindEffect:onApply", 27 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(39);
	frame[5].f = (((jfloat(1)) / ((jfloat)((arc_flabel_effects_WindEffect *) NULL_CHECK((frame[0].o)))->F_intensity)) * (jfloat(0.375f)));
	LINE_NUMBER(40);
	frame[6].f = (((jfloat(1)) / ((jfloat)((arc_flabel_effects_WindEffect *) NULL_CHECK((frame[0].o)))->F_spacing)) * (jfloat(10.0f)));
	LINE_NUMBER(41);
	frame[7].f = ((jfloat((frame[3].i))) / (frame[6].f));
	LINE_NUMBER(42);
	jfloat temp0 = (jfloat)((func_arc_flabel_effects_WindEffect_calculateProgress_float_float_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_flabel_effects_WindEffect_calculateProgress_float_float_R_float])(ctx, (frame[0].o), (frame[5].f), (frame[7].f));
	frame[8].f = temp0;
	LINE_NUMBER(45);
	frame[9].f = (((jfloat((frame[3].i))) * (jfloat(0.05f))) * ((jfloat)((arc_flabel_effects_WindEffect *) NULL_CHECK((frame[0].o)))->F_spacing));
	LINE_NUMBER(46);
	jfloat temp1 = (jfloat)SM_arc_util_noise_Simplex_noise2d_int_double_double_double_double_double_R_float(ctx, (jint(1)), (jdouble(6.0)), (jdouble(0)), (jdouble(1)), (jdouble((((jfloat)((arc_flabel_effects_WindEffect *) NULL_CHECK((frame[0].o)))->F_noiseCursorX) + (frame[9].f)))), (jdouble(0)));
	frame[10].f = temp1;
	LINE_NUMBER(47);
	jfloat temp2 = (jfloat)SM_arc_util_noise_Simplex_noise2d_int_double_double_double_double_double_R_float(ctx, (jint(1)), (jdouble(6.0)), (jdouble(0)), (jdouble(1)), (jdouble((((jfloat)((arc_flabel_effects_WindEffect *) NULL_CHECK((frame[0].o)))->F_noiseCursorY) + (frame[9].f)))), (jdouble(0)));
	frame[11].f = temp2;
	LINE_NUMBER(50);
	jfloat temp3 = (jfloat)((func_arc_flabel_effects_WindEffect_getLineHeight_arc_flabel_FLabel_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_flabel_effects_WindEffect_getLineHeight_arc_flabel_FLabel_R_float])(ctx, (frame[0].o), (frame[1].o));
	frame[12].f = temp3;
	LINE_NUMBER(51);
	frame[13].f = ((((((frame[12].f) * (frame[10].f)) * (frame[8].f)) * ((jfloat)((arc_flabel_effects_WindEffect *) NULL_CHECK((frame[0].o)))->F_distanceX)) * (jfloat(1.5f))) * (jfloat(0.33f)));
	LINE_NUMBER(52);
	frame[14].f = ((((((frame[12].f) * (frame[11].f)) * (frame[8].f)) * ((jfloat)((arc_flabel_effects_WindEffect *) NULL_CHECK((frame[0].o)))->F_distanceY)) * (jfloat(1))) * (jfloat(0.33f)));
	LINE_NUMBER(55);
	jfloat temp4 = (jfloat)((func_arc_flabel_effects_WindEffect_calculateFadeout_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_flabel_effects_WindEffect_calculateFadeout_R_float])(ctx, (frame[0].o));
	frame[15].f = temp4;
	LINE_NUMBER(56);
	frame[13].f = ((frame[13].f) * (frame[15].f));
	LINE_NUMBER(57);
	frame[14].f = ((frame[14].f) * (frame[15].f));
	LINE_NUMBER(60);
	jfloat temp5 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, (frame[13].f));
	jfloat temp6 = (jfloat)SM_java_lang_Math_signum_float_R_float(ctx, ((jfloat)((arc_flabel_effects_WindEffect *) NULL_CHECK((frame[0].o)))->F_distanceX));
	frame[13].f = (temp5 * (-temp6));
	LINE_NUMBER(63);
	sp[0].o = frame[2].o;
	((arc_graphics_g2d_Font$Glyph *) NULL_CHECK(sp[0].o))->F_xoffset = (jint(((jfloat(((jint)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK(sp[0].o))->F_xoffset))) + (frame[13].f))));
	LINE_NUMBER(64);
	sp[0].o = frame[2].o;
	((arc_graphics_g2d_Font$Glyph *) NULL_CHECK(sp[0].o))->F_yoffset = (jint(((jfloat(((jint)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK(sp[0].o))->F_yoffset))) + (frame[14].f))));
	LINE_NUMBER(65);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_flabel_effects_WindEffect[] {
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
	(void *) M_arc_flabel_effects_WindEffect_applyParams_Array1_java_lang_String,
	(void *) M_arc_flabel_effects_WindEffect_update_float,
	(void *) M_arc_flabel_FEffect_apply_arc_flabel_FLabel_arc_flabel_FGlyph_int_float,
	(void *) M_arc_flabel_effects_WindEffect_onApply_arc_flabel_FLabel_arc_flabel_FGlyph_int_float,
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
	{ "defaultSpacing", &class_float, (intptr_t) &SF_arc_flabel_effects_WindEffect_defaultSpacing, "F", 26 },
	{ "defaultDistance", &class_float, (intptr_t) &SF_arc_flabel_effects_WindEffect_defaultDistance, "F", 26 },
	{ "defaultIntensity", &class_float, (intptr_t) &SF_arc_flabel_effects_WindEffect_defaultIntensity, "F", 26 },
	{ "distanceXRatio", &class_float, (intptr_t) &SF_arc_flabel_effects_WindEffect_distanceXRatio, "F", 26 },
	{ "distanceYRatio", &class_float, (intptr_t) &SF_arc_flabel_effects_WindEffect_distanceYRatio, "F", 26 },
	{ "noiseCursorX", &class_float, offsetof(arc_flabel_effects_WindEffect, F_noiseCursorX), "F", 2 },
	{ "noiseCursorY", &class_float, offsetof(arc_flabel_effects_WindEffect, F_noiseCursorY), "F", 2 },
	{ "distanceX", &class_float, offsetof(arc_flabel_effects_WindEffect, F_distanceX), "F", 1 },
	{ "distanceY", &class_float, offsetof(arc_flabel_effects_WindEffect, F_distanceY), "F", 1 },
	{ "spacing", &class_float, offsetof(arc_flabel_effects_WindEffect, F_spacing), "F", 1 },
	{ "intensity", &class_float, offsetof(arc_flabel_effects_WindEffect, F_intensity), "F", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_flabel_effects_WindEffect, 0, "()V", 1 },
	{ "applyParams", (intptr_t) M_arc_flabel_effects_WindEffect_applyParams_Array1_java_lang_String, VTABLE_arc_flabel_effects_WindEffect_applyParams_Array1_java_lang_String, "([Ljava/lang/String;)V", 1 },
	{ "update", (intptr_t) M_arc_flabel_effects_WindEffect_update_float, VTABLE_arc_flabel_effects_WindEffect_update_float, "(F)V", 1 },
	{ "onApply", (intptr_t) M_arc_flabel_effects_WindEffect_onApply_arc_flabel_FLabel_arc_flabel_FGlyph_int_float, VTABLE_arc_flabel_effects_WindEffect_onApply_arc_flabel_FLabel_arc_flabel_FGlyph_int_float, "(Larc/flabel/FLabel;Larc/flabel/FGlyph;IF)V", 4 },
};

Class class_arc_flabel_effects_WindEffect{
		.nativeName = (intptr_t) "arc/flabel/effects/WindEffect",
		.parentClass = (intptr_t) &class_arc_flabel_FEffect,
		.size = sizeof(arc_flabel_effects_WindEffect),
		.classVtable = (intptr_t) vtable_arc_flabel_effects_WindEffect,
		.staticInitializer = (intptr_t) clinit_arc_flabel_effects_WindEffect,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_flabel_effects_WindEffect,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 11,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 21,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_flabel_effects_WindEffect = registerClass(&class_arc_flabel_effects_WindEffect);

}
