#include "arc/flabel/effects/EaseEffect.h"
#include "arc/flabel/FLabel.h"
#include "arc/flabel/effects/EaseEffect.h"
#include "arc/util/Strings.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/struct/IntFloatMap.h"
#include "java/lang/Boolean.h"
#include "arc/math/Interp.h"
#include "arc/math/Interp_SwingOut.h"
#include "arc/flabel/FGlyph.h"
#include "arc/flabel/FEffect.h"

extern "C" {

jfloat SF_arc_flabel_effects_EaseEffect_defaultDistance;
jfloat SF_arc_flabel_effects_EaseEffect_defaultIntensity;

void mark_arc_flabel_effects_EaseEffect(jobject object, jint mark, jint depth) {
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
	auto self = (arc_flabel_effects_EaseEffect *) object;
	if (self->F_timePassedByGlyphIndex)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_timePassedByGlyphIndex)->clazz)->markFunction)((jobject) self->F_timePassedByGlyphIndex, mark, depth + 1);
}

void clinit_arc_flabel_effects_EaseEffect(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_flabel_FEffect(ctx);
	SF_arc_flabel_effects_EaseEffect_defaultDistance = jfloat(0.15f);
	SF_arc_flabel_effects_EaseEffect_defaultIntensity = jfloat(0.075f);
}

void init_arc_flabel_effects_EaseEffect(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/flabel/effects/EaseEffect:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_flabel_effects_EaseEffect(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(9);
	init_arc_flabel_FEffect(ctx, (frame[0].o));
	LINE_NUMBER(13);
	((arc_flabel_effects_EaseEffect *) NULL_CHECK((frame[0].o)))->F_distance = (jfloat(1));
	LINE_NUMBER(14);
	((arc_flabel_effects_EaseEffect *) NULL_CHECK((frame[0].o)))->F_intensity = (jfloat(1));
	LINE_NUMBER(15);
	((arc_flabel_effects_EaseEffect *) NULL_CHECK((frame[0].o)))->F_elastic = (jint(0));
	LINE_NUMBER(17);
	sp[0].o = frame[0].o;
	clinit_arc_struct_IntFloatMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_IntFloatMap);
	init_arc_struct_IntFloatMap(ctx, sp[1].o);
	((arc_flabel_effects_EaseEffect *) NULL_CHECK(sp[0].o))->F_timePassedByGlyphIndex = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_flabel_effects_EaseEffect_applyParams_Array1_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/flabel/effects/EaseEffect:applyParams", 5 };
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
	((arc_flabel_effects_EaseEffect *) NULL_CHECK(sp[0].o))->F_distance = temp0;
	}
label_1:;
	{
	LINE_NUMBER(22);
	if ((((jarray) nullCheck(ctx, (frame[1].o)))->length) <= (jint(1))) goto label_2;
	}
	{
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_arc_util_Strings_parseFloat_java_lang_String_float_R_float(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(1)))), (jfloat(1)));
	((arc_flabel_effects_EaseEffect *) NULL_CHECK(sp[0].o))->F_intensity = temp0;
	}
label_2:;
	{
	LINE_NUMBER(23);
	if ((((jarray) nullCheck(ctx, (frame[1].o)))->length) <= (jint(2))) goto label_3;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Boolean_parseBoolean_java_lang_String_R_boolean(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(2)))));
	((arc_flabel_effects_EaseEffect *) NULL_CHECK(sp[0].o))->F_elastic = temp0;
	}
label_3:;
	LINE_NUMBER(24);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_flabel_effects_EaseEffect_onApply_arc_flabel_FLabel_arc_flabel_FGlyph_int_float(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/flabel/effects/EaseEffect:onApply", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(29);
	jfloat temp0 = (jfloat)((arc_flabel_effects_EaseEffect *) NULL_CHECK((frame[0].o)))->F_intensity;
	sp[0].f = temp0;
	sp += 1;
	if (((jint)((arc_flabel_effects_EaseEffect *) NULL_CHECK((frame[0].o)))->F_elastic) == 0) goto label_1;
	}
	(sp++)->f = jfloat(3.0f);
	goto label_2;
label_1:;
	INST_FCONST(1);
label_2:;
	{
	sp -= 2;
	frame[5].f = ((sp[0].f * sp[1].f) * (jfloat(0.075f)));
	LINE_NUMBER(32);
	sp[0].o = (jobject)((arc_flabel_effects_EaseEffect *) NULL_CHECK((frame[0].o)))->F_timePassedByGlyphIndex;
	jfloat temp0 = (jfloat)((func_arc_struct_IntFloatMap_increment_int_float_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntFloatMap_increment_int_float_float_R_float])(ctx, sp[0].o, (frame[3].i), (jfloat(0)), (frame[4].f));
	frame[6].f = temp0;
	LINE_NUMBER(33);
	frame[7].f = ((frame[6].f) / (frame[5].f));
	LINE_NUMBER(34);
	if ((floatCompare((frame[7].f), (jfloat(0)), 1)) < 0) goto label_6;
	}
	{
	if ((floatCompare((frame[7].f), (jfloat(1)), -1)) <= 0) goto label_7;
	}
label_6:;
	LINE_NUMBER(35);
	popStackFrame(ctx);
	INST_RETURN();
label_7:;
	{
	LINE_NUMBER(39);
	if (((jint)((arc_flabel_effects_EaseEffect *) NULL_CHECK((frame[0].o)))->F_elastic) == 0) goto label_8;
	}
	clinit_arc_math_Interp(ctx);
	(sp++)->o = SF_arc_math_Interp_swingOut;
	goto label_9;
label_8:;
	clinit_arc_math_Interp(ctx);
	(sp++)->o = SF_arc_math_Interp_sine;
label_9:;
	{
	sp -= 1;
	frame[8].o = sp[0].o;
	LINE_NUMBER(40);
	jfloat temp0 = (jfloat)((func_arc_math_Interp_apply_float_float_float_R_float) resolveInterfaceMethod(ctx, &class_arc_math_Interp, INDEX_arc_math_Interp_apply_float_float_float_R_float, (frame[8].o)))(ctx, (frame[8].o), (jfloat(1)), (jfloat(0)), (frame[7].f));
	frame[9].f = temp0;
	LINE_NUMBER(41);
	jfloat temp1 = (jfloat)((func_arc_flabel_effects_EaseEffect_getLineHeight_arc_flabel_FLabel_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_flabel_effects_EaseEffect_getLineHeight_arc_flabel_FLabel_R_float])(ctx, (frame[0].o), (frame[1].o));
	frame[10].f = (((temp1 * ((jfloat)((arc_flabel_effects_EaseEffect *) NULL_CHECK((frame[0].o)))->F_distance)) * (frame[9].f)) * (jfloat(0.15f)));
	LINE_NUMBER(44);
	sp[0].o = frame[2].o;
	((arc_graphics_g2d_Font$Glyph *) NULL_CHECK(sp[0].o))->F_yoffset = (jint(((jfloat(((jint)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK(sp[0].o))->F_yoffset))) + (frame[10].f))));
	LINE_NUMBER(45);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_flabel_effects_EaseEffect[] {
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
	(void *) M_arc_flabel_effects_EaseEffect_applyParams_Array1_java_lang_String,
	(void *) M_arc_flabel_FEffect_update_float,
	(void *) M_arc_flabel_FEffect_apply_arc_flabel_FLabel_arc_flabel_FGlyph_int_float,
	(void *) M_arc_flabel_effects_EaseEffect_onApply_arc_flabel_FLabel_arc_flabel_FGlyph_int_float,
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
	{ "defaultDistance", &class_float, (intptr_t) &SF_arc_flabel_effects_EaseEffect_defaultDistance, "F", 26 },
	{ "defaultIntensity", &class_float, (intptr_t) &SF_arc_flabel_effects_EaseEffect_defaultIntensity, "F", 26 },
	{ "distance", &class_float, offsetof(arc_flabel_effects_EaseEffect, F_distance), "F", 1 },
	{ "intensity", &class_float, offsetof(arc_flabel_effects_EaseEffect, F_intensity), "F", 1 },
	{ "elastic", &class_boolean, offsetof(arc_flabel_effects_EaseEffect, F_elastic), "Z", 1 },
	{ "timePassedByGlyphIndex", &class_arc_struct_IntFloatMap, offsetof(arc_flabel_effects_EaseEffect, F_timePassedByGlyphIndex), "Larc/struct/IntFloatMap;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_flabel_effects_EaseEffect, 0, "()V", 1 },
	{ "applyParams", (intptr_t) M_arc_flabel_effects_EaseEffect_applyParams_Array1_java_lang_String, VTABLE_arc_flabel_effects_EaseEffect_applyParams_Array1_java_lang_String, "([Ljava/lang/String;)V", 1 },
	{ "onApply", (intptr_t) M_arc_flabel_effects_EaseEffect_onApply_arc_flabel_FLabel_arc_flabel_FGlyph_int_float, VTABLE_arc_flabel_effects_EaseEffect_onApply_arc_flabel_FLabel_arc_flabel_FGlyph_int_float, "(Larc/flabel/FLabel;Larc/flabel/FGlyph;IF)V", 4 },
};

Class class_arc_flabel_effects_EaseEffect{
		.nativeName = (intptr_t) "arc/flabel/effects/EaseEffect",
		.parentClass = (intptr_t) &class_arc_flabel_FEffect,
		.size = sizeof(arc_flabel_effects_EaseEffect),
		.classVtable = (intptr_t) vtable_arc_flabel_effects_EaseEffect,
		.staticInitializer = (intptr_t) clinit_arc_flabel_effects_EaseEffect,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_flabel_effects_EaseEffect,
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
static bool registered_arc_flabel_effects_EaseEffect = registerClass(&class_arc_flabel_effects_EaseEffect);

}
