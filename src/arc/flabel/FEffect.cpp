#include "arc/flabel/FEffect.h"
#include "arc/flabel/FLabel.h"
#include "arc/math/Mathf.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/graphics/g2d/Font.h"
#include "arc/math/Interp.h"
#include "java/lang/Float.h"
#include "arc/flabel/FGlyph.h"
#include "arc/graphics/g2d/FontCache.h"
#include "arc/flabel/FEffect.h"
#include "arc/scene/ui/Label.h"

extern "C" {

jfloat SF_arc_flabel_FEffect_fadeoutSplit;

void mark_arc_flabel_FEffect(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (arc_flabel_FEffect *) object;
	if (self->F_endToken)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_endToken)->clazz)->markFunction)((jobject) self->F_endToken, mark, depth + 1);
}

void clinit_arc_flabel_FEffect(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_arc_flabel_FEffect_fadeoutSplit = jfloat(0.25f);
}

void init_arc_flabel_FEffect(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/flabel/FEffect:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_flabel_FEffect(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(6);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(9);
	((arc_flabel_FEffect *) NULL_CHECK((frame[0].o)))->F_indexStart = (jint(-1));
	LINE_NUMBER(10);
	((arc_flabel_FEffect *) NULL_CHECK((frame[0].o)))->F_indexEnd = (jint(-1));
	LINE_NUMBER(11);
	((arc_flabel_FEffect *) NULL_CHECK((frame[0].o)))->F_duration = (jfloat(std::numeric_limits<float>::infinity()));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_flabel_FEffect_applyParams_Array1_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/flabel/FEffect:applyParams", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(18);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_flabel_FEffect_update_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/flabel/FEffect:update", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(21);
	sp[0].o = frame[0].o;
	((arc_flabel_FEffect *) NULL_CHECK(sp[0].o))->F_totalTime = (((jfloat)((arc_flabel_FEffect *) NULL_CHECK(sp[0].o))->F_totalTime) + (frame[1].f));
	LINE_NUMBER(22);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_flabel_FEffect_apply_arc_flabel_FLabel_arc_flabel_FGlyph_int_float(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/flabel/FEffect:apply", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(26);
	frame[5].i = ((frame[3].i) - ((jint)((arc_flabel_FEffect *) NULL_CHECK((frame[0].o)))->F_indexStart));
	LINE_NUMBER(27);
	((func_arc_flabel_FEffect_onApply_arc_flabel_FLabel_arc_flabel_FGlyph_int_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_flabel_FEffect_onApply_arc_flabel_FLabel_arc_flabel_FGlyph_int_float])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[5].i), (frame[4].f));
	LINE_NUMBER(28);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_flabel_FEffect_isFinished_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/flabel/FEffect:isFinished", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(35);
	if ((floatCompare(((jfloat)((arc_flabel_FEffect *) NULL_CHECK((frame[0].o)))->F_totalTime), ((jfloat)((arc_flabel_FEffect *) NULL_CHECK((frame[0].o)))->F_duration), -1)) <= 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jfloat M_arc_flabel_FEffect_calculateFadeout_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/flabel/FEffect:calculateFadeout", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(40);
	jint temp0 = (jint)SM_java_lang_Float_isInfinite_float_R_boolean(ctx, ((jfloat)((arc_flabel_FEffect *) NULL_CHECK((frame[0].o)))->F_duration));
	if (temp0 == 0) goto label_1;
	}
	INST_FCONST(1);
	popStackFrame(ctx);
	INST_FRETURN();
label_1:;
	{
	LINE_NUMBER(43);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, (((jfloat)((arc_flabel_FEffect *) NULL_CHECK((frame[0].o)))->F_totalTime) / ((jfloat)((arc_flabel_FEffect *) NULL_CHECK((frame[0].o)))->F_duration)), (jfloat(0)), (jfloat(1)));
	frame[1].f = temp0;
	LINE_NUMBER(46);
	if ((floatCompare((frame[1].f), (jfloat(0.25f)), 1)) >= 0) goto label_3;
	}
	INST_FCONST(1);
	popStackFrame(ctx);
	INST_FRETURN();
label_3:;
	{
	LINE_NUMBER(49);
	clinit_arc_math_Interp(ctx);
	sp[0].o = (jobject)SF_arc_math_Interp_smooth;
	jfloat temp0 = (jfloat)((func_arc_math_Interp_apply_float_float_float_R_float) resolveInterfaceMethod(ctx, &class_arc_math_Interp, INDEX_arc_math_Interp_apply_float_float_float_R_float, sp[0].o))(ctx, sp[0].o, (jfloat(1)), (jfloat(0)), (((frame[1].f) - (jfloat(0.25f))) / (jfloat(0.75f))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jfloat M_arc_flabel_FEffect_calculateProgress_float_R_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/flabel/FEffect:calculateProgress", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(57);
	jfloat temp0 = (jfloat)((func_arc_flabel_FEffect_calculateProgress_float_float_boolean_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_flabel_FEffect_calculateProgress_float_float_boolean_R_float])(ctx, (frame[0].o), (frame[1].f), (jfloat(0)), (jint(1)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jfloat M_arc_flabel_FEffect_calculateProgress_float_float_R_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/flabel/FEffect:calculateProgress", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(65);
	jfloat temp0 = (jfloat)((func_arc_flabel_FEffect_calculateProgress_float_float_boolean_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_flabel_FEffect_calculateProgress_float_float_boolean_R_float])(ctx, (frame[0].o), (frame[1].f), (frame[2].f), (jint(1)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jfloat M_arc_flabel_FEffect_calculateProgress_float_float_boolean_R_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/flabel/FEffect:calculateProgress", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(70);
	frame[4].f = ((((jfloat)((arc_flabel_FEffect *) NULL_CHECK((frame[0].o)))->F_totalTime) / (frame[1].f)) + (frame[2].f));
	}
label_1:;
	{
	LINE_NUMBER(71);
	if ((floatCompare((frame[4].f), (jfloat(0)), 1)) >= 0) goto label_2;
	}
	{
	LINE_NUMBER(72);
	frame[4].f = ((frame[4].f) + (jfloat(2)));
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(74);
	if ((frame[3].i) == 0) goto label_4;
	}
	{
	LINE_NUMBER(75);
	frame[4].f = (fmodf((frame[4].f), (jfloat(2))));
	LINE_NUMBER(76);
	if ((floatCompare((frame[4].f), (jfloat(1)), -1)) <= 0) goto label_7;
	}
	{
	frame[4].f = ((jfloat(1)) - ((frame[4].f) - (jfloat(1))));
	goto label_7;
	}
label_4:;
	{
	LINE_NUMBER(78);
	frame[4].f = (fmodf((frame[4].f), (jfloat(1))));
	}
label_7:;
	{
	LINE_NUMBER(80);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, (frame[4].f), (jfloat(0)), (jfloat(1)));
	frame[4].f = temp0;
	LINE_NUMBER(81);
	popStackFrame(ctx);
	return (frame[4].f);
	}

	popStackFrame(ctx);
}

jfloat M_arc_flabel_FEffect_getLineHeight_arc_flabel_FLabel_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/flabel/FEffect:getLineHeight", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(86);
	sp[0].o = (jobject)((func_arc_flabel_FLabel_getFontCache_R_arc_graphics_g2d_FontCache) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_flabel_FLabel_getFontCache_R_arc_graphics_g2d_FontCache])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_graphics_g2d_FontCache_getFont_R_arc_graphics_g2d_Font) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_FontCache_getFont_R_arc_graphics_g2d_Font])(ctx, sp[0].o);
	jfloat temp0 = (jfloat)((func_arc_graphics_g2d_Font_getLineHeight_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font_getLineHeight_R_float])(ctx, sp[0].o);
	jfloat temp1 = (jfloat)((func_arc_flabel_FLabel_getFontScaleY_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_flabel_FLabel_getFontScaleY_R_float])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return (temp0 * temp1);
	}

	popStackFrame(ctx);
}

void *vtable_arc_flabel_FEffect[] {
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
	(void *) M_arc_flabel_FEffect_applyParams_Array1_java_lang_String,
	(void *) M_arc_flabel_FEffect_update_float,
	(void *) M_arc_flabel_FEffect_apply_arc_flabel_FLabel_arc_flabel_FGlyph_int_float,
	(void *) nullptr,
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
	{ "fadeoutSplit", &class_float, (intptr_t) &SF_arc_flabel_FEffect_fadeoutSplit, "F", 26 },
	{ "indexStart", &class_int, offsetof(arc_flabel_FEffect, F_indexStart), "I", 1 },
	{ "indexEnd", &class_int, offsetof(arc_flabel_FEffect, F_indexEnd), "I", 1 },
	{ "duration", &class_float, offsetof(arc_flabel_FEffect, F_duration), "F", 1 },
	{ "endToken", &class_java_lang_String, offsetof(arc_flabel_FEffect, F_endToken), "Ljava/lang/String;", 1 },
	{ "totalTime", &class_float, offsetof(arc_flabel_FEffect, F_totalTime), "F", 4 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_flabel_FEffect, 0, "()V", 1 },
	{ "applyParams", (intptr_t) M_arc_flabel_FEffect_applyParams_Array1_java_lang_String, VTABLE_arc_flabel_FEffect_applyParams_Array1_java_lang_String, "([Ljava/lang/String;)V", 1 },
	{ "update", (intptr_t) M_arc_flabel_FEffect_update_float, VTABLE_arc_flabel_FEffect_update_float, "(F)V", 1 },
	{ "apply", (intptr_t) M_arc_flabel_FEffect_apply_arc_flabel_FLabel_arc_flabel_FGlyph_int_float, VTABLE_arc_flabel_FEffect_apply_arc_flabel_FLabel_arc_flabel_FGlyph_int_float, "(Larc/flabel/FLabel;Larc/flabel/FGlyph;IF)V", 17 },
	{ "onApply", 0, VTABLE_arc_flabel_FEffect_onApply_arc_flabel_FLabel_arc_flabel_FGlyph_int_float, "(Larc/flabel/FLabel;Larc/flabel/FGlyph;IF)V", 1028 },
	{ "isFinished", (intptr_t) M_arc_flabel_FEffect_isFinished_R_boolean, VTABLE_arc_flabel_FEffect_isFinished_R_boolean, "()Z", 1 },
	{ "calculateFadeout", (intptr_t) M_arc_flabel_FEffect_calculateFadeout_R_float, VTABLE_arc_flabel_FEffect_calculateFadeout_R_float, "()F", 4 },
	{ "calculateProgress", (intptr_t) M_arc_flabel_FEffect_calculateProgress_float_R_float, VTABLE_arc_flabel_FEffect_calculateProgress_float_R_float, "(F)F", 4 },
	{ "calculateProgress", (intptr_t) M_arc_flabel_FEffect_calculateProgress_float_float_R_float, VTABLE_arc_flabel_FEffect_calculateProgress_float_float_R_float, "(FF)F", 4 },
	{ "calculateProgress", (intptr_t) M_arc_flabel_FEffect_calculateProgress_float_float_boolean_R_float, VTABLE_arc_flabel_FEffect_calculateProgress_float_float_boolean_R_float, "(FFZ)F", 4 },
	{ "getLineHeight", (intptr_t) M_arc_flabel_FEffect_getLineHeight_arc_flabel_FLabel_R_float, VTABLE_arc_flabel_FEffect_getLineHeight_arc_flabel_FLabel_R_float, "(Larc/flabel/FLabel;)F", 4 },
};

Class class_arc_flabel_FEffect{
		.nativeName = (intptr_t) "arc/flabel/FEffect",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_flabel_FEffect),
		.classVtable = (intptr_t) vtable_arc_flabel_FEffect,
		.staticInitializer = (intptr_t) clinit_arc_flabel_FEffect,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_flabel_FEffect,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1057,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 6,
		.nativeFields = (intptr_t) fields,
		.methodCount = 11,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 21,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_flabel_FEffect = registerClass(&class_arc_flabel_FEffect);

}
