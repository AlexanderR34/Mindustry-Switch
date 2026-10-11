#include "arc/flabel/effects/ShakeEffect.h"
#include "arc/flabel/FLabel.h"
#include "arc/math/Mathf.h"
#include "java/lang/Math.h"
#include "arc/util/Strings.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/flabel/effects/ShakeEffect.h"
#include "arc/math/Interp.h"
#include "arc/struct/FloatSeq.h"
#include "arc/flabel/FGlyph.h"
#include "arc/flabel/FEffect.h"

extern "C" {

jfloat SF_arc_flabel_effects_ShakeEffect_defaultDistance;
jfloat SF_arc_flabel_effects_ShakeEffect_defaultIntensity;

void mark_arc_flabel_effects_ShakeEffect(jobject object, jint mark, jint depth) {
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
	auto self = (arc_flabel_effects_ShakeEffect *) object;
	if (self->F_lastOffsets)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lastOffsets)->clazz)->markFunction)((jobject) self->F_lastOffsets, mark, depth + 1);
}

void clinit_arc_flabel_effects_ShakeEffect(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_flabel_FEffect(ctx);
	SF_arc_flabel_effects_ShakeEffect_defaultDistance = jfloat(0.12f);
	SF_arc_flabel_effects_ShakeEffect_defaultIntensity = jfloat(0.5f);
}

void init_arc_flabel_effects_ShakeEffect(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/flabel/effects/ShakeEffect:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_flabel_effects_ShakeEffect(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(9);
	init_arc_flabel_FEffect(ctx, (frame[0].o));
	LINE_NUMBER(12);
	sp[0].o = frame[0].o;
	clinit_arc_struct_FloatSeq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_FloatSeq);
	init_arc_struct_FloatSeq(ctx, sp[1].o);
	((arc_flabel_effects_ShakeEffect *) NULL_CHECK(sp[0].o))->F_lastOffsets = (jref) sp[1].o;
	LINE_NUMBER(14);
	((arc_flabel_effects_ShakeEffect *) NULL_CHECK((frame[0].o)))->F_distance = (jfloat(1));
	LINE_NUMBER(15);
	((arc_flabel_effects_ShakeEffect *) NULL_CHECK((frame[0].o)))->F_intensity = (jfloat(1));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_flabel_effects_ShakeEffect_applyParams_Array1_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/flabel/effects/ShakeEffect:applyParams", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(19);
	if ((((jarray) nullCheck(ctx, (frame[1].o)))->length) <= 0) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_arc_util_Strings_parseFloat_java_lang_String_float_R_float(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0)))), (jfloat(1)));
	((arc_flabel_effects_ShakeEffect *) NULL_CHECK(sp[0].o))->F_distance = temp0;
	}
label_1:;
	{
	LINE_NUMBER(20);
	if ((((jarray) nullCheck(ctx, (frame[1].o)))->length) <= (jint(1))) goto label_2;
	}
	{
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_arc_util_Strings_parseFloat_java_lang_String_float_R_float(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(1)))), (jfloat(1)));
	((arc_flabel_effects_ShakeEffect *) NULL_CHECK(sp[0].o))->F_intensity = temp0;
	}
label_2:;
	LINE_NUMBER(21);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_flabel_effects_ShakeEffect_onApply_arc_flabel_FLabel_arc_flabel_FGlyph_int_float(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/flabel/effects/ShakeEffect:onApply", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(26);
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((arc_flabel_effects_ShakeEffect *) NULL_CHECK((frame[0].o)))->F_lastOffsets;
	if (temp0 < (((jint)((arc_struct_FloatSeq *) NULL_CHECK(sp[0].o))->F_size) / (jint(2)))) goto label_1;
	}
	{
	LINE_NUMBER(27);
	sp[0].o = (jobject)((arc_flabel_effects_ShakeEffect *) NULL_CHECK((frame[0].o)))->F_lastOffsets;
	sp[1].o = (jobject)((arc_flabel_effects_ShakeEffect *) NULL_CHECK((frame[0].o)))->F_lastOffsets;
	sp[0].o = (jobject)((func_arc_struct_FloatSeq_setSize_int_R_Array1_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_FloatSeq_setSize_int_R_Array1_float])(ctx, sp[0].o, (((jint)((arc_struct_FloatSeq *) NULL_CHECK(sp[1].o))->F_size) + (16)));
	}
label_1:;
	{
	LINE_NUMBER(31);
	sp[0].o = (jobject)((arc_flabel_effects_ShakeEffect *) NULL_CHECK((frame[0].o)))->F_lastOffsets;
	jfloat temp0 = (jfloat)((func_arc_struct_FloatSeq_get_int_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_FloatSeq_get_int_R_float])(ctx, sp[0].o, ((frame[3].i) * (jint(2))));
	frame[5].f = temp0;
	LINE_NUMBER(32);
	sp[0].o = (jobject)((arc_flabel_effects_ShakeEffect *) NULL_CHECK((frame[0].o)))->F_lastOffsets;
	jfloat temp1 = (jfloat)((func_arc_struct_FloatSeq_get_int_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_FloatSeq_get_int_R_float])(ctx, sp[0].o, (((frame[3].i) * (jint(2))) + (jint(1))));
	frame[6].f = temp1;
	LINE_NUMBER(35);
	jfloat temp2 = (jfloat)((func_arc_flabel_effects_ShakeEffect_getLineHeight_arc_flabel_FLabel_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_flabel_effects_ShakeEffect_getLineHeight_arc_flabel_FLabel_R_float])(ctx, (frame[0].o), (frame[1].o));
	jfloat temp3 = temp2 * ((jfloat)((arc_flabel_effects_ShakeEffect *) NULL_CHECK((frame[0].o)))->F_distance);
	jint temp4 = (jint)SM_arc_math_Mathf_random_int_int_R_int(ctx, (jint(-1)), (jint(1)));
	frame[7].f = ((temp3 * (jfloat(temp4))) * (jfloat(0.12f)));
	LINE_NUMBER(36);
	jfloat temp5 = (jfloat)((func_arc_flabel_effects_ShakeEffect_getLineHeight_arc_flabel_FLabel_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_flabel_effects_ShakeEffect_getLineHeight_arc_flabel_FLabel_R_float])(ctx, (frame[0].o), (frame[1].o));
	jfloat temp6 = temp5 * ((jfloat)((arc_flabel_effects_ShakeEffect *) NULL_CHECK((frame[0].o)))->F_distance);
	jint temp7 = (jint)SM_arc_math_Mathf_random_int_int_R_int(ctx, (jint(-1)), (jint(1)));
	frame[8].f = ((temp6 * (jfloat(temp7))) * (jfloat(0.12f)));
	LINE_NUMBER(39);
	jfloat temp8 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, (((jfloat)((arc_flabel_effects_ShakeEffect *) NULL_CHECK((frame[0].o)))->F_intensity) * (jfloat(0.5f))), (jfloat(0)), (jfloat(1)));
	frame[9].f = temp8;
	LINE_NUMBER(40);
	clinit_arc_math_Interp(ctx);
	sp[0].o = (jobject)SF_arc_math_Interp_linear;
	jfloat temp9 = (jfloat)((func_arc_math_Interp_apply_float_float_float_R_float) resolveInterfaceMethod(ctx, &class_arc_math_Interp, INDEX_arc_math_Interp_apply_float_float_float_R_float, sp[0].o))(ctx, sp[0].o, (frame[5].f), (frame[7].f), (frame[9].f));
	frame[7].f = temp9;
	LINE_NUMBER(41);
	clinit_arc_math_Interp(ctx);
	sp[0].o = (jobject)SF_arc_math_Interp_linear;
	jfloat temp10 = (jfloat)((func_arc_math_Interp_apply_float_float_float_R_float) resolveInterfaceMethod(ctx, &class_arc_math_Interp, INDEX_arc_math_Interp_apply_float_float_float_R_float, sp[0].o))(ctx, sp[0].o, (frame[6].f), (frame[8].f), (frame[9].f));
	frame[8].f = temp10;
	LINE_NUMBER(44);
	jfloat temp11 = (jfloat)((func_arc_flabel_effects_ShakeEffect_calculateFadeout_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_flabel_effects_ShakeEffect_calculateFadeout_R_float])(ctx, (frame[0].o));
	frame[10].f = temp11;
	LINE_NUMBER(45);
	frame[7].f = ((frame[7].f) * (frame[10].f));
	LINE_NUMBER(46);
	frame[8].f = ((frame[8].f) * (frame[10].f));
	LINE_NUMBER(47);
	jint temp12 = (jint)SM_java_lang_Math_round_float_R_int(ctx, (frame[7].f));
	frame[7].f = (jfloat(temp12));
	LINE_NUMBER(48);
	jint temp13 = (jint)SM_java_lang_Math_round_float_R_int(ctx, (frame[8].f));
	frame[8].f = (jfloat(temp13));
	LINE_NUMBER(51);
	sp[0].o = (jobject)((arc_flabel_effects_ShakeEffect *) NULL_CHECK((frame[0].o)))->F_lastOffsets;
	((func_arc_struct_FloatSeq_set_int_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_FloatSeq_set_int_float])(ctx, sp[0].o, ((frame[3].i) * (jint(2))), (frame[7].f));
	LINE_NUMBER(52);
	sp[0].o = (jobject)((arc_flabel_effects_ShakeEffect *) NULL_CHECK((frame[0].o)))->F_lastOffsets;
	((func_arc_struct_FloatSeq_set_int_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_FloatSeq_set_int_float])(ctx, sp[0].o, (((frame[3].i) * (jint(2))) + (jint(1))), (frame[8].f));
	LINE_NUMBER(55);
	sp[0].o = frame[2].o;
	((arc_graphics_g2d_Font$Glyph *) NULL_CHECK(sp[0].o))->F_xoffset = (jint(((jfloat(((jint)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK(sp[0].o))->F_xoffset))) + (frame[7].f))));
	LINE_NUMBER(56);
	sp[0].o = frame[2].o;
	((arc_graphics_g2d_Font$Glyph *) NULL_CHECK(sp[0].o))->F_yoffset = (jint(((jfloat(((jint)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK(sp[0].o))->F_yoffset))) + (frame[8].f))));
	LINE_NUMBER(57);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_flabel_effects_ShakeEffect[] {
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
	(void *) M_arc_flabel_effects_ShakeEffect_applyParams_Array1_java_lang_String,
	(void *) M_arc_flabel_FEffect_update_float,
	(void *) M_arc_flabel_FEffect_apply_arc_flabel_FLabel_arc_flabel_FGlyph_int_float,
	(void *) M_arc_flabel_effects_ShakeEffect_onApply_arc_flabel_FLabel_arc_flabel_FGlyph_int_float,
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
	{ "defaultDistance", &class_float, (intptr_t) &SF_arc_flabel_effects_ShakeEffect_defaultDistance, "F", 26 },
	{ "defaultIntensity", &class_float, (intptr_t) &SF_arc_flabel_effects_ShakeEffect_defaultIntensity, "F", 26 },
	{ "lastOffsets", &class_arc_struct_FloatSeq, offsetof(arc_flabel_effects_ShakeEffect, F_lastOffsets), "Larc/struct/FloatSeq;", 18 },
	{ "distance", &class_float, offsetof(arc_flabel_effects_ShakeEffect, F_distance), "F", 1 },
	{ "intensity", &class_float, offsetof(arc_flabel_effects_ShakeEffect, F_intensity), "F", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_flabel_effects_ShakeEffect, 0, "()V", 1 },
	{ "applyParams", (intptr_t) M_arc_flabel_effects_ShakeEffect_applyParams_Array1_java_lang_String, VTABLE_arc_flabel_effects_ShakeEffect_applyParams_Array1_java_lang_String, "([Ljava/lang/String;)V", 1 },
	{ "onApply", (intptr_t) M_arc_flabel_effects_ShakeEffect_onApply_arc_flabel_FLabel_arc_flabel_FGlyph_int_float, VTABLE_arc_flabel_effects_ShakeEffect_onApply_arc_flabel_FLabel_arc_flabel_FGlyph_int_float, "(Larc/flabel/FLabel;Larc/flabel/FGlyph;IF)V", 4 },
};

Class class_arc_flabel_effects_ShakeEffect{
		.nativeName = (intptr_t) "arc/flabel/effects/ShakeEffect",
		.parentClass = (intptr_t) &class_arc_flabel_FEffect,
		.size = sizeof(arc_flabel_effects_ShakeEffect),
		.classVtable = (intptr_t) vtable_arc_flabel_effects_ShakeEffect,
		.staticInitializer = (intptr_t) clinit_arc_flabel_effects_ShakeEffect,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_flabel_effects_ShakeEffect,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 21,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_flabel_effects_ShakeEffect = registerClass(&class_arc_flabel_effects_ShakeEffect);

}
