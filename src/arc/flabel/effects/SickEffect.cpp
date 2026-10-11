#include "arc/flabel/effects/SickEffect.h"
#include "java/lang/Math.h"
#include "arc/flabel/FLabel.h"
#include "arc/util/Strings.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/math/Interp.h"
#include "arc/math/Interp_PowOut.h"
#include "arc/math/Interp_PowIn.h"
#include "arc/flabel/effects/SickEffect.h"
#include "arc/flabel/FGlyph.h"
#include "arc/struct/IntSeq.h"
#include "arc/flabel/FEffect.h"

extern "C" {

jfloat SF_arc_flabel_effects_SickEffect_defaultFrequency;
jfloat SF_arc_flabel_effects_SickEffect_defaultDistance;
jfloat SF_arc_flabel_effects_SickEffect_defaultIntensity;

void mark_arc_flabel_effects_SickEffect(jobject object, jint mark, jint depth) {
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
	auto self = (arc_flabel_effects_SickEffect *) object;
	if (self->F_indices)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_indices)->clazz)->markFunction)((jobject) self->F_indices, mark, depth + 1);
}

void clinit_arc_flabel_effects_SickEffect(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_flabel_FEffect(ctx);
	SF_arc_flabel_effects_SickEffect_defaultFrequency = jfloat(50.0f);
	SF_arc_flabel_effects_SickEffect_defaultDistance = jfloat(0.125f);
	SF_arc_flabel_effects_SickEffect_defaultIntensity = jfloat(1.0f);
}

void init_arc_flabel_effects_SickEffect(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/flabel/effects/SickEffect:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_flabel_effects_SickEffect(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(9);
	init_arc_flabel_FEffect(ctx, (frame[0].o));
	LINE_NUMBER(12);
	((arc_flabel_effects_SickEffect *) NULL_CHECK((frame[0].o)))->F_distance = (jfloat(1));
	LINE_NUMBER(13);
	((arc_flabel_effects_SickEffect *) NULL_CHECK((frame[0].o)))->F_intensity = (jfloat(1));
	LINE_NUMBER(15);
	sp[0].o = frame[0].o;
	clinit_arc_struct_IntSeq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_IntSeq);
	init_arc_struct_IntSeq(ctx, sp[1].o);
	((arc_flabel_effects_SickEffect *) NULL_CHECK(sp[0].o))->F_indices = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_flabel_effects_SickEffect_applyParams_Array1_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/flabel/effects/SickEffect:applyParams", 5 };
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
	((arc_flabel_effects_SickEffect *) NULL_CHECK(sp[0].o))->F_distance = temp0;
	}
label_1:;
	{
	LINE_NUMBER(20);
	if ((((jarray) nullCheck(ctx, (frame[1].o)))->length) <= (jint(1))) goto label_2;
	}
	{
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_arc_util_Strings_parseFloat_java_lang_String_float_R_float(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(1)))), (jfloat(1)));
	((arc_flabel_effects_SickEffect *) NULL_CHECK(sp[0].o))->F_intensity = temp0;
	}
label_2:;
	LINE_NUMBER(21);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_flabel_effects_SickEffect_onApply_arc_flabel_FLabel_arc_flabel_FGlyph_int_float(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[18];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/flabel/effects/SickEffect:onApply", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(26);
	frame[5].f = (((jfloat(1)) / ((jfloat)((arc_flabel_effects_SickEffect *) NULL_CHECK((frame[0].o)))->F_intensity)) * (jfloat(1)));
	LINE_NUMBER(27);
	frame[6].f = ((jfloat((frame[3].i))) / (jfloat(50.0f)));
	LINE_NUMBER(28);
	jfloat temp0 = (jfloat)((func_arc_flabel_effects_SickEffect_calculateProgress_float_float_boolean_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_flabel_effects_SickEffect_calculateProgress_float_float_boolean_R_float])(ctx, (frame[0].o), (frame[5].f), (-(frame[6].f)), (jint(0)));
	frame[7].f = temp0;
	LINE_NUMBER(30);
	if ((floatCompare((frame[7].f), (jfloat(1,000000e-02f)), 1)) >= 0) goto label_4;
	}
	{
	jdouble temp0 = (jdouble)SM_java_lang_Math_random_R_double(ctx);
	if ((doubleCompare(temp0, (jdouble(0.25)), -1)) <= 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((arc_flabel_effects_SickEffect *) NULL_CHECK((frame[0].o)))->F_indices;
	jint temp0 = (jint)((func_arc_struct_IntSeq_contains_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_contains_int_R_boolean])(ctx, sp[0].o, (frame[3].i));
	if (temp0 != 0) goto label_4;
	}
	{
	LINE_NUMBER(31);
	sp[0].o = (jobject)((arc_flabel_effects_SickEffect *) NULL_CHECK((frame[0].o)))->F_indices;
	((func_arc_struct_IntSeq_add_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_add_int])(ctx, sp[0].o, (frame[3].i));
	}
label_4:;
	{
	LINE_NUMBER(32);
	if ((floatCompare((frame[7].f), (jfloat(0.95f)), -1)) <= 0) goto label_6;
	}
	{
	LINE_NUMBER(33);
	sp[0].o = (jobject)((arc_flabel_effects_SickEffect *) NULL_CHECK((frame[0].o)))->F_indices;
	jint temp0 = (jint)((func_arc_struct_IntSeq_removeValue_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_removeValue_int_R_boolean])(ctx, sp[0].o, (frame[3].i));
	}
label_6:;
	{
	LINE_NUMBER(35);
	sp[0].o = (jobject)((arc_flabel_effects_SickEffect *) NULL_CHECK((frame[0].o)))->F_indices;
	jint temp0 = (jint)((func_arc_struct_IntSeq_contains_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_contains_int_R_boolean])(ctx, sp[0].o, (frame[3].i));
	if (temp0 != 0) goto label_8;
	}
	{
	sp[0].o = (jobject)((arc_flabel_effects_SickEffect *) NULL_CHECK((frame[0].o)))->F_indices;
	jint temp0 = (frame[3].i) - (jint(1));
	LINE_NUMBER(36);
	jint temp1 = (jint)((func_arc_struct_IntSeq_contains_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_contains_int_R_boolean])(ctx, sp[0].o, temp0);
	if (temp1 != 0) goto label_8;
	}
	{
	sp[0].o = (jobject)((arc_flabel_effects_SickEffect *) NULL_CHECK((frame[0].o)))->F_indices;
	jint temp0 = (frame[3].i) - (jint(2));
	LINE_NUMBER(37);
	jint temp1 = (jint)((func_arc_struct_IntSeq_contains_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_contains_int_R_boolean])(ctx, sp[0].o, temp0);
	if (temp1 != 0) goto label_8;
	}
	{
	sp[0].o = (jobject)((arc_flabel_effects_SickEffect *) NULL_CHECK((frame[0].o)))->F_indices;
	jint temp0 = (frame[3].i) + (jint(2));
	LINE_NUMBER(38);
	jint temp1 = (jint)((func_arc_struct_IntSeq_contains_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_contains_int_R_boolean])(ctx, sp[0].o, temp0);
	if (temp1 != 0) goto label_8;
	}
	{
	sp[0].o = (jobject)((arc_flabel_effects_SickEffect *) NULL_CHECK((frame[0].o)))->F_indices;
	jint temp0 = (frame[3].i) + (jint(1));
	LINE_NUMBER(39);
	jint temp1 = (jint)((func_arc_struct_IntSeq_contains_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_contains_int_R_boolean])(ctx, sp[0].o, temp0);
	if (temp1 != 0) goto label_8;
	}
	LINE_NUMBER(40);
	popStackFrame(ctx);
	INST_RETURN();
label_8:;
	{
	LINE_NUMBER(43);
	frame[8].f = (jfloat(0));
	LINE_NUMBER(44);
	frame[9].f = (jfloat(0.5f));
	LINE_NUMBER(45);
	if ((floatCompare((frame[7].f), (frame[9].f), 1)) >= 0) goto label_16;
	}
	{
	LINE_NUMBER(46);
	clinit_arc_math_Interp(ctx);
	sp[0].o = (jobject)SF_arc_math_Interp_pow2Out;
	jfloat temp0 = (jfloat)((func_arc_math_Interp$PowOut_apply_float_float_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Interp$PowOut_apply_float_float_float_R_float])(ctx, sp[0].o, (jfloat(0)), (jfloat(1)), ((frame[7].f) / (frame[9].f)));
	frame[8].f = temp0;
	goto label_18;
	}
label_16:;
	{
	LINE_NUMBER(48);
	clinit_arc_math_Interp(ctx);
	sp[0].o = (jobject)SF_arc_math_Interp_pow2In;
	jfloat temp0 = (jfloat)((func_arc_math_Interp$PowIn_apply_float_float_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Interp$PowIn_apply_float_float_float_R_float])(ctx, sp[0].o, (jfloat(1)), (jfloat(0)), (((frame[7].f) - (frame[9].f)) / ((jfloat(1)) - (frame[9].f))));
	frame[8].f = temp0;
	}
label_18:;
	{
	LINE_NUMBER(50);
	jfloat temp0 = (jfloat)((func_arc_flabel_effects_SickEffect_getLineHeight_arc_flabel_FLabel_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_flabel_effects_SickEffect_getLineHeight_arc_flabel_FLabel_R_float])(ctx, (frame[0].o), (frame[1].o));
	frame[10].f = (((temp0 * ((jfloat)((arc_flabel_effects_SickEffect *) NULL_CHECK((frame[0].o)))->F_distance)) * (frame[8].f)) * (jfloat(0.125f)));
	LINE_NUMBER(52);
	sp[0].o = (jobject)((arc_flabel_effects_SickEffect *) NULL_CHECK((frame[0].o)))->F_indices;
	jint temp1 = (jint)((func_arc_struct_IntSeq_contains_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_contains_int_R_boolean])(ctx, sp[0].o, (frame[3].i));
	if (temp1 == 0) goto label_20;
	}
	{
	LINE_NUMBER(53);
	frame[10].f = ((frame[10].f) * (jfloat(2.15f)));
	}
label_20:;
	{
	LINE_NUMBER(54);
	sp[0].o = (jobject)((arc_flabel_effects_SickEffect *) NULL_CHECK((frame[0].o)))->F_indices;
	jint temp0 = (jint)((func_arc_struct_IntSeq_contains_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_contains_int_R_boolean])(ctx, sp[0].o, ((frame[3].i) - (jint(1))));
	if (temp0 != 0) goto label_22;
	}
	{
	sp[0].o = (jobject)((arc_flabel_effects_SickEffect *) NULL_CHECK((frame[0].o)))->F_indices;
	jint temp0 = (jint)((func_arc_struct_IntSeq_contains_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_contains_int_R_boolean])(ctx, sp[0].o, ((frame[3].i) + (jint(1))));
	if (temp0 == 0) goto label_23;
	}
label_22:;
	{
	LINE_NUMBER(55);
	frame[10].f = ((frame[10].f) * (jfloat(1.35f)));
	}
label_23:;
	{
	LINE_NUMBER(58);
	jfloat temp0 = (jfloat)((func_arc_flabel_effects_SickEffect_calculateFadeout_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_flabel_effects_SickEffect_calculateFadeout_R_float])(ctx, (frame[0].o));
	frame[11].f = temp0;
	LINE_NUMBER(59);
	frame[10].f = ((frame[10].f) * (frame[11].f));
	LINE_NUMBER(62);
	sp[0].o = frame[2].o;
	((arc_graphics_g2d_Font$Glyph *) NULL_CHECK(sp[0].o))->F_yoffset = (jint(((jfloat(((jint)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK(sp[0].o))->F_yoffset))) - (frame[10].f))));
	LINE_NUMBER(63);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_flabel_effects_SickEffect[] {
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
	(void *) M_arc_flabel_effects_SickEffect_applyParams_Array1_java_lang_String,
	(void *) M_arc_flabel_FEffect_update_float,
	(void *) M_arc_flabel_FEffect_apply_arc_flabel_FLabel_arc_flabel_FGlyph_int_float,
	(void *) M_arc_flabel_effects_SickEffect_onApply_arc_flabel_FLabel_arc_flabel_FGlyph_int_float,
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
	{ "defaultFrequency", &class_float, (intptr_t) &SF_arc_flabel_effects_SickEffect_defaultFrequency, "F", 26 },
	{ "defaultDistance", &class_float, (intptr_t) &SF_arc_flabel_effects_SickEffect_defaultDistance, "F", 26 },
	{ "defaultIntensity", &class_float, (intptr_t) &SF_arc_flabel_effects_SickEffect_defaultIntensity, "F", 26 },
	{ "distance", &class_float, offsetof(arc_flabel_effects_SickEffect, F_distance), "F", 1 },
	{ "intensity", &class_float, offsetof(arc_flabel_effects_SickEffect, F_intensity), "F", 1 },
	{ "indices", &class_arc_struct_IntSeq, offsetof(arc_flabel_effects_SickEffect, F_indices), "Larc/struct/IntSeq;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_flabel_effects_SickEffect, 0, "()V", 1 },
	{ "applyParams", (intptr_t) M_arc_flabel_effects_SickEffect_applyParams_Array1_java_lang_String, VTABLE_arc_flabel_effects_SickEffect_applyParams_Array1_java_lang_String, "([Ljava/lang/String;)V", 1 },
	{ "onApply", (intptr_t) M_arc_flabel_effects_SickEffect_onApply_arc_flabel_FLabel_arc_flabel_FGlyph_int_float, VTABLE_arc_flabel_effects_SickEffect_onApply_arc_flabel_FLabel_arc_flabel_FGlyph_int_float, "(Larc/flabel/FLabel;Larc/flabel/FGlyph;IF)V", 4 },
};

Class class_arc_flabel_effects_SickEffect{
		.nativeName = (intptr_t) "arc/flabel/effects/SickEffect",
		.parentClass = (intptr_t) &class_arc_flabel_FEffect,
		.size = sizeof(arc_flabel_effects_SickEffect),
		.classVtable = (intptr_t) vtable_arc_flabel_effects_SickEffect,
		.staticInitializer = (intptr_t) clinit_arc_flabel_effects_SickEffect,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_flabel_effects_SickEffect,
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
static bool registered_arc_flabel_effects_SickEffect = registerClass(&class_arc_flabel_effects_SickEffect);

}
