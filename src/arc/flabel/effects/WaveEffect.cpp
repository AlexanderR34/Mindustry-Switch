#include "arc/flabel/effects/WaveEffect.h"
#include "arc/flabel/FLabel.h"
#include "arc/util/Strings.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/flabel/effects/WaveEffect.h"
#include "arc/math/Interp.h"
#include "arc/flabel/FGlyph.h"
#include "arc/flabel/FEffect.h"

extern "C" {

jfloat SF_arc_flabel_effects_WaveEffect_defaultFrequency;
jfloat SF_arc_flabel_effects_WaveEffect_defaultDistance;
jfloat SF_arc_flabel_effects_WaveEffect_defaultIntensity;

void mark_arc_flabel_effects_WaveEffect(jobject object, jint mark, jint depth) {
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
	auto self = (arc_flabel_effects_WaveEffect *) object;
}

void clinit_arc_flabel_effects_WaveEffect(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_flabel_FEffect(ctx);
	SF_arc_flabel_effects_WaveEffect_defaultFrequency = jfloat(15.0f);
	SF_arc_flabel_effects_WaveEffect_defaultDistance = jfloat(0.33f);
	SF_arc_flabel_effects_WaveEffect_defaultIntensity = jfloat(0.5f);
}

void init_arc_flabel_effects_WaveEffect(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/flabel/effects/WaveEffect:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_flabel_effects_WaveEffect(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(8);
	init_arc_flabel_FEffect(ctx, (frame[0].o));
	LINE_NUMBER(11);
	((arc_flabel_effects_WaveEffect *) NULL_CHECK((frame[0].o)))->F_distance = (jfloat(1));
	LINE_NUMBER(12);
	((arc_flabel_effects_WaveEffect *) NULL_CHECK((frame[0].o)))->F_frequency = (jfloat(1));
	LINE_NUMBER(13);
	((arc_flabel_effects_WaveEffect *) NULL_CHECK((frame[0].o)))->F_intensity = (jfloat(1));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_flabel_effects_WaveEffect_applyParams_Array1_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/flabel/effects/WaveEffect:applyParams", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(17);
	if ((((jarray) nullCheck(ctx, (frame[1].o)))->length) <= 0) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_arc_util_Strings_parseFloat_java_lang_String_float_R_float(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0)))), (jfloat(1)));
	((arc_flabel_effects_WaveEffect *) NULL_CHECK(sp[0].o))->F_distance = temp0;
	}
label_1:;
	{
	LINE_NUMBER(18);
	if ((((jarray) nullCheck(ctx, (frame[1].o)))->length) <= (jint(1))) goto label_2;
	}
	{
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_arc_util_Strings_parseFloat_java_lang_String_float_R_float(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(1)))), (jfloat(1)));
	((arc_flabel_effects_WaveEffect *) NULL_CHECK(sp[0].o))->F_frequency = temp0;
	}
label_2:;
	{
	LINE_NUMBER(19);
	if ((((jarray) nullCheck(ctx, (frame[1].o)))->length) <= (jint(2))) goto label_3;
	}
	{
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_arc_util_Strings_parseFloat_java_lang_String_float_R_float(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(2)))), (jfloat(1)));
	((arc_flabel_effects_WaveEffect *) NULL_CHECK(sp[0].o))->F_intensity = temp0;
	}
label_3:;
	LINE_NUMBER(20);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_flabel_effects_WaveEffect_onApply_arc_flabel_FLabel_arc_flabel_FGlyph_int_float(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/flabel/effects/WaveEffect:onApply", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(25);
	frame[5].f = (((jfloat(1)) / ((jfloat)((arc_flabel_effects_WaveEffect *) NULL_CHECK((frame[0].o)))->F_intensity)) * (jfloat(0.5f)));
	LINE_NUMBER(26);
	frame[6].f = (((jfloat(1)) / ((jfloat)((arc_flabel_effects_WaveEffect *) NULL_CHECK((frame[0].o)))->F_frequency)) * (jfloat(15.0f)));
	LINE_NUMBER(27);
	frame[7].f = ((jfloat((frame[3].i))) / (frame[6].f));
	LINE_NUMBER(28);
	jfloat temp0 = (jfloat)((func_arc_flabel_effects_WaveEffect_calculateProgress_float_float_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_flabel_effects_WaveEffect_calculateProgress_float_float_R_float])(ctx, (frame[0].o), (frame[5].f), (frame[7].f));
	frame[8].f = temp0;
	LINE_NUMBER(31);
	jfloat temp1 = (jfloat)((func_arc_flabel_effects_WaveEffect_getLineHeight_arc_flabel_FLabel_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_flabel_effects_WaveEffect_getLineHeight_arc_flabel_FLabel_R_float])(ctx, (frame[0].o), (frame[1].o));
	jfloat temp2 = temp1 * ((jfloat)((arc_flabel_effects_WaveEffect *) NULL_CHECK((frame[0].o)))->F_distance);
	clinit_arc_math_Interp(ctx);
	sp[0].o = (jobject)SF_arc_math_Interp_sine;
	jfloat temp3 = (jfloat)((func_arc_math_Interp_apply_float_float_float_R_float) resolveInterfaceMethod(ctx, &class_arc_math_Interp, INDEX_arc_math_Interp_apply_float_float_float_R_float, sp[0].o))(ctx, sp[0].o, (jfloat(-1.0f)), (jfloat(1)), (frame[8].f));
	frame[9].f = ((temp2 * temp3) * (jfloat(0.33f)));
	LINE_NUMBER(34);
	jfloat temp4 = (jfloat)((func_arc_flabel_effects_WaveEffect_calculateFadeout_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_flabel_effects_WaveEffect_calculateFadeout_R_float])(ctx, (frame[0].o));
	frame[10].f = temp4;
	LINE_NUMBER(35);
	frame[9].f = ((frame[9].f) * (frame[10].f));
	LINE_NUMBER(38);
	sp[0].o = frame[2].o;
	((arc_graphics_g2d_Font$Glyph *) NULL_CHECK(sp[0].o))->F_yoffset = (jint(((jfloat(((jint)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK(sp[0].o))->F_yoffset))) + (frame[9].f))));
	LINE_NUMBER(39);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_flabel_effects_WaveEffect[] {
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
	(void *) M_arc_flabel_effects_WaveEffect_applyParams_Array1_java_lang_String,
	(void *) M_arc_flabel_FEffect_update_float,
	(void *) M_arc_flabel_FEffect_apply_arc_flabel_FLabel_arc_flabel_FGlyph_int_float,
	(void *) M_arc_flabel_effects_WaveEffect_onApply_arc_flabel_FLabel_arc_flabel_FGlyph_int_float,
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
	{ "defaultFrequency", &class_float, (intptr_t) &SF_arc_flabel_effects_WaveEffect_defaultFrequency, "F", 26 },
	{ "defaultDistance", &class_float, (intptr_t) &SF_arc_flabel_effects_WaveEffect_defaultDistance, "F", 26 },
	{ "defaultIntensity", &class_float, (intptr_t) &SF_arc_flabel_effects_WaveEffect_defaultIntensity, "F", 26 },
	{ "distance", &class_float, offsetof(arc_flabel_effects_WaveEffect, F_distance), "F", 1 },
	{ "frequency", &class_float, offsetof(arc_flabel_effects_WaveEffect, F_frequency), "F", 1 },
	{ "intensity", &class_float, offsetof(arc_flabel_effects_WaveEffect, F_intensity), "F", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_flabel_effects_WaveEffect, 0, "()V", 1 },
	{ "applyParams", (intptr_t) M_arc_flabel_effects_WaveEffect_applyParams_Array1_java_lang_String, VTABLE_arc_flabel_effects_WaveEffect_applyParams_Array1_java_lang_String, "([Ljava/lang/String;)V", 1 },
	{ "onApply", (intptr_t) M_arc_flabel_effects_WaveEffect_onApply_arc_flabel_FLabel_arc_flabel_FGlyph_int_float, VTABLE_arc_flabel_effects_WaveEffect_onApply_arc_flabel_FLabel_arc_flabel_FGlyph_int_float, "(Larc/flabel/FLabel;Larc/flabel/FGlyph;IF)V", 4 },
};

Class class_arc_flabel_effects_WaveEffect{
		.nativeName = (intptr_t) "arc/flabel/effects/WaveEffect",
		.parentClass = (intptr_t) &class_arc_flabel_FEffect,
		.size = sizeof(arc_flabel_effects_WaveEffect),
		.classVtable = (intptr_t) vtable_arc_flabel_effects_WaveEffect,
		.staticInitializer = (intptr_t) clinit_arc_flabel_effects_WaveEffect,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_flabel_effects_WaveEffect,
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
static bool registered_arc_flabel_effects_WaveEffect = registerClass(&class_arc_flabel_effects_WaveEffect);

}
