#include "arc/flabel/effects/FadeEffect.h"
#include "arc/math/Mathf.h"
#include "arc/flabel/FLabel.h"
#include "arc/util/Strings.h"
#include "arc/graphics/g2d/GlyphLayout_GlyphRun.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/struct/IntFloatMap.h"
#include "arc/flabel/effects/FadeEffect.h"
#include "arc/flabel/FGlyph.h"
#include "arc/graphics/Color.h"
#include "arc/flabel/FEffect.h"

extern "C" {


void mark_arc_flabel_effects_FadeEffect(jobject object, jint mark, jint depth) {
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
	auto self = (arc_flabel_effects_FadeEffect *) object;
	if (self->F_color1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_color1)->clazz)->markFunction)((jobject) self->F_color1, mark, depth + 1);
	if (self->F_color2)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_color2)->clazz)->markFunction)((jobject) self->F_color2, mark, depth + 1);
	if (self->F_timePassedByGlyphIndex)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_timePassedByGlyphIndex)->clazz)->markFunction)((jobject) self->F_timePassedByGlyphIndex, mark, depth + 1);
}

void clinit_arc_flabel_effects_FadeEffect(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_flabel_FEffect(ctx);
}

void init_arc_flabel_effects_FadeEffect(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/flabel/effects/FadeEffect:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_flabel_effects_FadeEffect(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(10);
	init_arc_flabel_FEffect(ctx, (frame[0].o));
	LINE_NUMBER(11);
	((arc_flabel_effects_FadeEffect *) NULL_CHECK((frame[0].o)))->F_color1 = (jref) (jobject(nullptr));
	LINE_NUMBER(12);
	((arc_flabel_effects_FadeEffect *) NULL_CHECK((frame[0].o)))->F_color2 = (jref) (jobject(nullptr));
	LINE_NUMBER(13);
	((arc_flabel_effects_FadeEffect *) NULL_CHECK((frame[0].o)))->F_alpha1 = (jfloat(0));
	LINE_NUMBER(14);
	((arc_flabel_effects_FadeEffect *) NULL_CHECK((frame[0].o)))->F_alpha2 = (jfloat(1));
	LINE_NUMBER(15);
	((arc_flabel_effects_FadeEffect *) NULL_CHECK((frame[0].o)))->F_fadeDuration = (jfloat(1));
	LINE_NUMBER(17);
	sp[0].o = frame[0].o;
	clinit_arc_struct_IntFloatMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_IntFloatMap);
	init_arc_struct_IntFloatMap(ctx, sp[1].o);
	((arc_flabel_effects_FadeEffect *) NULL_CHECK(sp[0].o))->F_timePassedByGlyphIndex = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_flabel_effects_FadeEffect_applyParams_Array1_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/flabel/effects/FadeEffect:applyParams", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(21);
	if ((((jarray) nullCheck(ctx, (frame[1].o)))->length) <= 0) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0)));
	sp[2].o = (jobject)((arc_flabel_effects_FadeEffect *) NULL_CHECK((frame[0].o)))->F_color1;
	sp[1].o = (jobject)SM_arc_util_Strings_parseColor_java_lang_String_arc_graphics_Color_R_arc_graphics_Color(ctx, sp[1].o, sp[2].o);
	((arc_flabel_effects_FadeEffect *) NULL_CHECK(sp[0].o))->F_color1 = (jref) sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(22);
	if ((((jarray) nullCheck(ctx, (frame[1].o)))->length) <= (jint(1))) goto label_2;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(1)));
	sp[2].o = (jobject)((arc_flabel_effects_FadeEffect *) NULL_CHECK((frame[0].o)))->F_color2;
	sp[1].o = (jobject)SM_arc_util_Strings_parseColor_java_lang_String_arc_graphics_Color_R_arc_graphics_Color(ctx, sp[1].o, sp[2].o);
	((arc_flabel_effects_FadeEffect *) NULL_CHECK(sp[0].o))->F_color2 = (jref) sp[1].o;
	}
label_2:;
	{
	LINE_NUMBER(23);
	if ((((jarray) nullCheck(ctx, (frame[1].o)))->length) <= (jint(2))) goto label_3;
	}
	{
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_arc_util_Strings_parseFloat_java_lang_String_float_R_float(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(2)))), (jfloat(0)));
	((arc_flabel_effects_FadeEffect *) NULL_CHECK(sp[0].o))->F_alpha1 = temp0;
	}
label_3:;
	{
	LINE_NUMBER(24);
	if ((((jarray) nullCheck(ctx, (frame[1].o)))->length) <= (jint(3))) goto label_4;
	}
	{
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_arc_util_Strings_parseFloat_java_lang_String_float_R_float(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(3)))), (jfloat(1)));
	((arc_flabel_effects_FadeEffect *) NULL_CHECK(sp[0].o))->F_alpha2 = temp0;
	}
label_4:;
	{
	LINE_NUMBER(25);
	if ((((jarray) nullCheck(ctx, (frame[1].o)))->length) <= (jint(4))) goto label_5;
	}
	{
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_arc_util_Strings_parseFloat_java_lang_String_float_R_float(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(4)))), (jfloat(1)));
	((arc_flabel_effects_FadeEffect *) NULL_CHECK(sp[0].o))->F_fadeDuration = temp0;
	}
label_5:;
	LINE_NUMBER(26);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_flabel_effects_FadeEffect_onApply_arc_flabel_FLabel_arc_flabel_FGlyph_int_float(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/flabel/effects/FadeEffect:onApply", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(31);
	sp[0].o = (jobject)((arc_flabel_effects_FadeEffect *) NULL_CHECK((frame[0].o)))->F_timePassedByGlyphIndex;
	jfloat temp0 = (jfloat)((func_arc_struct_IntFloatMap_increment_int_float_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntFloatMap_increment_int_float_float_R_float])(ctx, sp[0].o, (frame[3].i), (jfloat(0)), (frame[4].f));
	frame[5].f = temp0;
	LINE_NUMBER(32);
	frame[6].f = ((frame[5].f) / ((jfloat)((arc_flabel_effects_FadeEffect *) NULL_CHECK((frame[0].o)))->F_fadeDuration));
	LINE_NUMBER(33);
	if ((floatCompare((frame[6].f), (jfloat(0)), 1)) < 0) goto label_3;
	}
	{
	if ((floatCompare((frame[6].f), (jfloat(1)), -1)) <= 0) goto label_4;
	}
label_3:;
	LINE_NUMBER(34);
	popStackFrame(ctx);
	INST_RETURN();
label_4:;
	{
	LINE_NUMBER(38);
	sp[0].o = (jobject)((arc_flabel_FGlyph *) NULL_CHECK((frame[2].o)))->F_color;
	if (sp[0].o != nullptr) goto label_5;
	}
	{
	LINE_NUMBER(39);
	sp[0].o = frame[2].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_Color);
	sp[2].o = (jobject)((arc_flabel_FGlyph *) NULL_CHECK((frame[2].o)))->F_run;
	sp[2].o = (jobject)((arc_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK(sp[2].o))->F_color;
	init_arc_graphics_Color_arc_graphics_Color(ctx, sp[1].o, sp[2].o);
	((arc_flabel_FGlyph *) NULL_CHECK(sp[0].o))->F_color = (jref) sp[1].o;
	}
label_5:;
	{
	LINE_NUMBER(43);
	sp[0].o = (jobject)((arc_flabel_effects_FadeEffect *) NULL_CHECK((frame[0].o)))->F_color1;
	if (sp[0].o != nullptr) goto label_7;
	}
	{
	LINE_NUMBER(44);
	sp[0].o = (jobject)((arc_flabel_FGlyph *) NULL_CHECK((frame[2].o)))->F_color;
	sp[1].o = (jobject)((arc_flabel_FGlyph *) NULL_CHECK((frame[2].o)))->F_color;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_lerp_float_float_float_R_float(ctx, ((jfloat)((arc_graphics_Color *) NULL_CHECK(sp[1].o))->F_a), ((jfloat)((arc_flabel_effects_FadeEffect *) NULL_CHECK((frame[0].o)))->F_alpha1), ((jfloat(1)) - (frame[6].f)));
	((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_a = temp0;
	goto label_9;
	}
label_7:;
	{
	LINE_NUMBER(46);
	sp[0].o = (jobject)((arc_flabel_FGlyph *) NULL_CHECK((frame[2].o)))->F_color;
	sp[1].o = (jobject)((arc_flabel_effects_FadeEffect *) NULL_CHECK((frame[0].o)))->F_color1;
	sp[0].o = (jobject)((func_arc_graphics_Color_lerp_arc_graphics_Color_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_lerp_arc_graphics_Color_float_R_arc_graphics_Color])(ctx, sp[0].o, sp[1].o, ((jfloat(1)) - (frame[6].f)));
	}
label_9:;
	{
	LINE_NUMBER(50);
	sp[0].o = (jobject)((arc_flabel_effects_FadeEffect *) NULL_CHECK((frame[0].o)))->F_color2;
	if (sp[0].o != nullptr) goto label_10;
	}
	{
	LINE_NUMBER(51);
	sp[0].o = (jobject)((arc_flabel_FGlyph *) NULL_CHECK((frame[2].o)))->F_color;
	sp[1].o = (jobject)((arc_flabel_FGlyph *) NULL_CHECK((frame[2].o)))->F_color;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_lerp_float_float_float_R_float(ctx, ((jfloat)((arc_graphics_Color *) NULL_CHECK(sp[1].o))->F_a), ((jfloat)((arc_flabel_effects_FadeEffect *) NULL_CHECK((frame[0].o)))->F_alpha2), (frame[6].f));
	((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_a = temp0;
	goto label_12;
	}
label_10:;
	{
	LINE_NUMBER(53);
	sp[0].o = (jobject)((arc_flabel_FGlyph *) NULL_CHECK((frame[2].o)))->F_color;
	sp[1].o = (jobject)((arc_flabel_effects_FadeEffect *) NULL_CHECK((frame[0].o)))->F_color2;
	sp[0].o = (jobject)((func_arc_graphics_Color_lerp_arc_graphics_Color_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_lerp_arc_graphics_Color_float_R_arc_graphics_Color])(ctx, sp[0].o, sp[1].o, (frame[6].f));
	}
label_12:;
	LINE_NUMBER(55);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_arc_flabel_effects_FadeEffect[] {
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
	(void *) M_arc_flabel_effects_FadeEffect_applyParams_Array1_java_lang_String,
	(void *) M_arc_flabel_FEffect_update_float,
	(void *) M_arc_flabel_FEffect_apply_arc_flabel_FLabel_arc_flabel_FGlyph_int_float,
	(void *) M_arc_flabel_effects_FadeEffect_onApply_arc_flabel_FLabel_arc_flabel_FGlyph_int_float,
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
	{ "color1", &class_arc_graphics_Color, offsetof(arc_flabel_effects_FadeEffect, F_color1), "Larc/graphics/Color;", 2 },
	{ "color2", &class_arc_graphics_Color, offsetof(arc_flabel_effects_FadeEffect, F_color2), "Larc/graphics/Color;", 2 },
	{ "alpha1", &class_float, offsetof(arc_flabel_effects_FadeEffect, F_alpha1), "F", 1 },
	{ "alpha2", &class_float, offsetof(arc_flabel_effects_FadeEffect, F_alpha2), "F", 1 },
	{ "fadeDuration", &class_float, offsetof(arc_flabel_effects_FadeEffect, F_fadeDuration), "F", 1 },
	{ "timePassedByGlyphIndex", &class_arc_struct_IntFloatMap, offsetof(arc_flabel_effects_FadeEffect, F_timePassedByGlyphIndex), "Larc/struct/IntFloatMap;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_flabel_effects_FadeEffect, 0, "()V", 1 },
	{ "applyParams", (intptr_t) M_arc_flabel_effects_FadeEffect_applyParams_Array1_java_lang_String, VTABLE_arc_flabel_effects_FadeEffect_applyParams_Array1_java_lang_String, "([Ljava/lang/String;)V", 1 },
	{ "onApply", (intptr_t) M_arc_flabel_effects_FadeEffect_onApply_arc_flabel_FLabel_arc_flabel_FGlyph_int_float, VTABLE_arc_flabel_effects_FadeEffect_onApply_arc_flabel_FLabel_arc_flabel_FGlyph_int_float, "(Larc/flabel/FLabel;Larc/flabel/FGlyph;IF)V", 4 },
};

Class class_arc_flabel_effects_FadeEffect{
		.nativeName = (intptr_t) "arc/flabel/effects/FadeEffect",
		.parentClass = (intptr_t) &class_arc_flabel_FEffect,
		.size = sizeof(arc_flabel_effects_FadeEffect),
		.classVtable = (intptr_t) vtable_arc_flabel_effects_FadeEffect,
		.staticInitializer = (intptr_t) clinit_arc_flabel_effects_FadeEffect,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_flabel_effects_FadeEffect,
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
static bool registered_arc_flabel_effects_FadeEffect = registerClass(&class_arc_flabel_effects_FadeEffect);

}
