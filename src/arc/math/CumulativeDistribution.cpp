#include "arc/math/CumulativeDistribution.h"
#include "arc/math/Mathf.h"
#include "java/lang/Object.h"
#include "java/util/Iterator.h"
#include "arc/struct/Seq.h"
#include "arc/math/CumulativeDistribution.h"
#include "java/lang/Class.h"
#include "arc/math/CumulativeDistribution_CumulativeValue.h"

extern "C" {


void mark_arc_math_CumulativeDistribution(jobject object, jint mark, jint depth) {
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
	auto self = (arc_math_CumulativeDistribution *) object;
	if (self->F_values)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_values)->clazz)->markFunction)((jobject) self->F_values, mark, depth + 1);
}

void clinit_arc_math_CumulativeDistribution(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_math_CumulativeDistribution(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/CumulativeDistribution:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_CumulativeDistribution(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(19);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(20);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq_boolean_int_java_lang_Class(ctx, sp[1].o, (jint(0)), (10), (((jobject) &class_arc_math_CumulativeDistribution$CumulativeValue)));
	((arc_math_CumulativeDistribution *) NULL_CHECK(sp[0].o))->F_values = (jref) sp[1].o;
	LINE_NUMBER(21);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_math_CumulativeDistribution_add_java_lang_Object_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/CumulativeDistribution:add", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(25);
	sp[0].o = (jobject)((arc_math_CumulativeDistribution *) NULL_CHECK((frame[0].o)))->F_values;
	clinit_arc_math_CumulativeDistribution$CumulativeValue(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_CumulativeDistribution$CumulativeValue);
	init_arc_math_CumulativeDistribution$CumulativeValue_arc_math_CumulativeDistribution_java_lang_Object_float_float(ctx, sp[1].o, (frame[0].o), (frame[1].o), (jfloat(0)), (frame[2].f));
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(26);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_math_CumulativeDistribution_add_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/CumulativeDistribution:add", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(30);
	sp[0].o = (jobject)((arc_math_CumulativeDistribution *) NULL_CHECK((frame[0].o)))->F_values;
	clinit_arc_math_CumulativeDistribution$CumulativeValue(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_CumulativeDistribution$CumulativeValue);
	init_arc_math_CumulativeDistribution$CumulativeValue_arc_math_CumulativeDistribution_java_lang_Object_float_float(ctx, sp[1].o, (frame[0].o), (frame[1].o), (jfloat(0)), (jfloat(0)));
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(31);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_math_CumulativeDistribution_generate(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/CumulativeDistribution:generate", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(35);
	frame[1].f = (jfloat(0));
	LINE_NUMBER(36);
	frame[2].i = (jint(0));
	}
label_2:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((arc_math_CumulativeDistribution *) NULL_CHECK((frame[0].o)))->F_values;
	if (temp0 >= ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_3;
	}
	{
	LINE_NUMBER(37);
	jfloat temp0 = frame[1].f;
	sp[0].o = (jobject)((arc_math_CumulativeDistribution *) NULL_CHECK((frame[0].o)))->F_values;
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_items;
	frame[1].f = (temp0 + ((jfloat)((arc_math_CumulativeDistribution$CumulativeValue *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (checkCast(ctx, getArrayClass(&class_arc_math_CumulativeDistribution$CumulativeValue, 1), sp[0].o)), (frame[2].i)))))->F_interval));
	LINE_NUMBER(38);
	sp[0].o = (jobject)((arc_math_CumulativeDistribution *) NULL_CHECK((frame[0].o)))->F_values;
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_items;
	((arc_math_CumulativeDistribution$CumulativeValue *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (checkCast(ctx, getArrayClass(&class_arc_math_CumulativeDistribution$CumulativeValue, 1), sp[0].o)), (frame[2].i)))))->F_frequency = (frame[1].f);
	LINE_NUMBER(36);
	INST_IINC(2, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(40);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_math_CumulativeDistribution_generateNormalized(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/CumulativeDistribution:generateNormalized", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(44);
	frame[1].f = (jfloat(0));
	LINE_NUMBER(45);
	frame[2].i = (jint(0));
	}
label_2:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((arc_math_CumulativeDistribution *) NULL_CHECK((frame[0].o)))->F_values;
	if (temp0 >= ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_3;
	}
	{
	LINE_NUMBER(46);
	jfloat temp0 = frame[1].f;
	sp[0].o = (jobject)((arc_math_CumulativeDistribution *) NULL_CHECK((frame[0].o)))->F_values;
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_items;
	frame[1].f = (temp0 + ((jfloat)((arc_math_CumulativeDistribution$CumulativeValue *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (checkCast(ctx, getArrayClass(&class_arc_math_CumulativeDistribution$CumulativeValue, 1), sp[0].o)), (frame[2].i)))))->F_interval));
	LINE_NUMBER(45);
	INST_IINC(2, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(48);
	frame[2].f = (jfloat(0));
	LINE_NUMBER(49);
	frame[3].i = (jint(0));
	}
label_7:;
	{
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((arc_math_CumulativeDistribution *) NULL_CHECK((frame[0].o)))->F_values;
	if (temp0 >= ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_8;
	}
	{
	LINE_NUMBER(50);
	jfloat temp0 = frame[2].f;
	sp[0].o = (jobject)((arc_math_CumulativeDistribution *) NULL_CHECK((frame[0].o)))->F_values;
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_items;
	frame[2].f = (temp0 + (((jfloat)((arc_math_CumulativeDistribution$CumulativeValue *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (checkCast(ctx, getArrayClass(&class_arc_math_CumulativeDistribution$CumulativeValue, 1), sp[0].o)), (frame[3].i)))))->F_interval) / (frame[1].f)));
	LINE_NUMBER(51);
	sp[0].o = (jobject)((arc_math_CumulativeDistribution *) NULL_CHECK((frame[0].o)))->F_values;
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_items;
	((arc_math_CumulativeDistribution$CumulativeValue *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (checkCast(ctx, getArrayClass(&class_arc_math_CumulativeDistribution$CumulativeValue, 1), sp[0].o)), (frame[3].i)))))->F_frequency = (frame[2].f);
	LINE_NUMBER(49);
	INST_IINC(3, 1);
	goto label_7;
	}
label_8:;
	LINE_NUMBER(53);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_math_CumulativeDistribution_generateUniform(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/CumulativeDistribution:generateUniform", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(57);
	jfloat temp0 = jfloat(1);
	sp[0].o = (jobject)((arc_math_CumulativeDistribution *) NULL_CHECK((frame[0].o)))->F_values;
	frame[1].f = (temp0 / (jfloat(((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size))));
	LINE_NUMBER(58);
	frame[2].i = (jint(0));
	}
label_2:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((arc_math_CumulativeDistribution *) NULL_CHECK((frame[0].o)))->F_values;
	if (temp0 >= ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_3;
	}
	{
	LINE_NUMBER(60);
	sp[0].o = (jobject)((arc_math_CumulativeDistribution *) NULL_CHECK((frame[0].o)))->F_values;
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_items;
	((arc_math_CumulativeDistribution$CumulativeValue *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (checkCast(ctx, getArrayClass(&class_arc_math_CumulativeDistribution$CumulativeValue, 1), sp[0].o)), (frame[2].i)))))->F_interval = (frame[1].f);
	LINE_NUMBER(61);
	sp[0].o = (jobject)((arc_math_CumulativeDistribution *) NULL_CHECK((frame[0].o)))->F_values;
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_items;
	((arc_math_CumulativeDistribution$CumulativeValue *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (checkCast(ctx, getArrayClass(&class_arc_math_CumulativeDistribution$CumulativeValue, 1), sp[0].o)), (frame[2].i)))))->F_frequency = ((jfloat(((frame[2].i) + (jint(1))))) * (frame[1].f));
	LINE_NUMBER(58);
	INST_IINC(2, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(63);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_arc_math_CumulativeDistribution_value_float_R_java_lang_Object(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/CumulativeDistribution:value", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(72);
	sp[0].o = (jobject)((arc_math_CumulativeDistribution *) NULL_CHECK((frame[0].o)))->F_values;
	frame[3].i = (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) - (jint(1)));
	frame[4].i = (jint(0));
	}
label_2:;
	{
	LINE_NUMBER(73);
	if ((frame[4].i) > (frame[3].i)) goto label_3;
	}
	{
	LINE_NUMBER(74);
	frame[5].i = ((frame[4].i) + (((frame[3].i) - (frame[4].i)) / (jint(2))));
	LINE_NUMBER(75);
	sp[0].o = (jobject)((arc_math_CumulativeDistribution *) NULL_CHECK((frame[0].o)))->F_values;
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_items;
	frame[2].o = ((jobject)ARRAY_ACCESS(jobject, (checkCast(ctx, getArrayClass(&class_arc_math_CumulativeDistribution$CumulativeValue, 1), sp[0].o)), (frame[5].i)));
	LINE_NUMBER(76);
	if ((floatCompare((frame[1].f), ((jfloat)((arc_math_CumulativeDistribution$CumulativeValue *) NULL_CHECK((frame[2].o)))->F_frequency), 1)) >= 0) goto label_7;
	}
	{
	LINE_NUMBER(77);
	frame[3].i = ((frame[5].i) - (jint(1)));
	goto label_2;
	}
label_7:;
	{
	LINE_NUMBER(78);
	if ((floatCompare((frame[1].f), ((jfloat)((arc_math_CumulativeDistribution$CumulativeValue *) NULL_CHECK((frame[2].o)))->F_frequency), -1)) <= 0) goto label_3;
	}
	{
	LINE_NUMBER(79);
	frame[4].i = ((frame[5].i) + (jint(1)));
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(83);
	sp[0].o = (jobject)((arc_math_CumulativeDistribution *) NULL_CHECK((frame[0].o)))->F_values;
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_items;
	sp[0].o = (jobject)((arc_math_CumulativeDistribution$CumulativeValue *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (checkCast(ctx, getArrayClass(&class_arc_math_CumulativeDistribution$CumulativeValue, 1), sp[0].o)), (frame[4].i)))))->F_value;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_CumulativeDistribution_value_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/CumulativeDistribution:value", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(88);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_random_R_float(ctx);
	sp[0].o = (jobject)((func_arc_math_CumulativeDistribution_value_float_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_CumulativeDistribution_value_float_R_java_lang_Object])(ctx, sp[0].o, temp0);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_arc_math_CumulativeDistribution_size_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/CumulativeDistribution:size", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(93);
	sp[0].o = (jobject)((arc_math_CumulativeDistribution *) NULL_CHECK((frame[0].o)))->F_values;
	popStackFrame(ctx);
	return ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size);
	}

	popStackFrame(ctx);
}

jfloat M_arc_math_CumulativeDistribution_getInterval_int_R_float(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/CumulativeDistribution:getInterval", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(98);
	sp[0].o = (jobject)((arc_math_CumulativeDistribution *) NULL_CHECK((frame[0].o)))->F_values;
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_items;
	popStackFrame(ctx);
	return ((jfloat)((arc_math_CumulativeDistribution$CumulativeValue *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (checkCast(ctx, getArrayClass(&class_arc_math_CumulativeDistribution$CumulativeValue, 1), sp[0].o)), (frame[1].i)))))->F_interval);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_CumulativeDistribution_getValue_int_R_java_lang_Object(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/CumulativeDistribution:getValue", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(103);
	sp[0].o = (jobject)((arc_math_CumulativeDistribution *) NULL_CHECK((frame[0].o)))->F_values;
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_items;
	sp[0].o = (jobject)((arc_math_CumulativeDistribution$CumulativeValue *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (checkCast(ctx, getArrayClass(&class_arc_math_CumulativeDistribution$CumulativeValue, 1), sp[0].o)), (frame[1].i)))))->F_value;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_math_CumulativeDistribution_setInterval_java_lang_Object_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/CumulativeDistribution:setInterval", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(111);
	sp[0].o = (jobject)((arc_math_CumulativeDistribution *) NULL_CHECK((frame[0].o)))->F_values;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_1:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_arc_math_CumulativeDistribution$CumulativeValue, sp[0].o));
	LINE_NUMBER(112);
	sp[0].o = (jobject)((arc_math_CumulativeDistribution$CumulativeValue *) NULL_CHECK((frame[4].o)))->F_value;
	if (sp[0].o != (frame[1].o)) goto label_4;
	}
	{
	LINE_NUMBER(113);
	((arc_math_CumulativeDistribution$CumulativeValue *) NULL_CHECK((frame[4].o)))->F_interval = (frame[2].f);
	LINE_NUMBER(114);
	popStackFrame(ctx);
	return;
	}
label_4:;
	LINE_NUMBER(112);
	goto label_1;
label_2:;
	LINE_NUMBER(116);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_math_CumulativeDistribution_setInterval_int_float(jcontext ctx, jobject self, jint param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/CumulativeDistribution:setInterval", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(120);
	sp[0].o = (jobject)((arc_math_CumulativeDistribution *) NULL_CHECK((frame[0].o)))->F_values;
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_items;
	((arc_math_CumulativeDistribution$CumulativeValue *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (checkCast(ctx, getArrayClass(&class_arc_math_CumulativeDistribution$CumulativeValue, 1), sp[0].o)), (frame[1].i)))))->F_interval = (frame[2].f);
	LINE_NUMBER(121);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_math_CumulativeDistribution_clear(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/CumulativeDistribution:clear", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(125);
	sp[0].o = (jobject)((arc_math_CumulativeDistribution *) NULL_CHECK((frame[0].o)))->F_values;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(126);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_math_CumulativeDistribution[] {
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
	(void *) M_arc_math_CumulativeDistribution_add_java_lang_Object_float,
	(void *) M_arc_math_CumulativeDistribution_add_java_lang_Object,
	(void *) M_arc_math_CumulativeDistribution_generate,
	(void *) M_arc_math_CumulativeDistribution_generateNormalized,
	(void *) M_arc_math_CumulativeDistribution_generateUniform,
	(void *) M_arc_math_CumulativeDistribution_value_float_R_java_lang_Object,
	(void *) M_arc_math_CumulativeDistribution_value_R_java_lang_Object,
	(void *) M_arc_math_CumulativeDistribution_size_R_int,
	(void *) M_arc_math_CumulativeDistribution_getInterval_int_R_float,
	(void *) M_arc_math_CumulativeDistribution_getValue_int_R_java_lang_Object,
	(void *) M_arc_math_CumulativeDistribution_setInterval_java_lang_Object_float,
	(void *) M_arc_math_CumulativeDistribution_setInterval_int_float,
	(void *) M_arc_math_CumulativeDistribution_clear,
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
	{ "add", "(Ljava/lang/Object;F)V" },
	{ "add", "(Ljava/lang/Object;)V" },
	{ "generate", "()V" },
	{ "generateNormalized", "()V" },
	{ "generateUniform", "()V" },
	{ "value", "(F)Ljava/lang/Object;" },
	{ "value", "()Ljava/lang/Object;" },
	{ "size", "()I" },
	{ "getInterval", "(I)F" },
	{ "getValue", "(I)Ljava/lang/Object;" },
	{ "setInterval", "(Ljava/lang/Object;F)V" },
	{ "setInterval", "(IF)V" },
	{ "clear", "()V" },
};

static jclass innerClasses[] {
	&class_arc_math_CumulativeDistribution$CumulativeValue,
};

static FieldMetadata fields[] {
	{ "values", &class_arc_struct_Seq, offsetof(arc_math_CumulativeDistribution, F_values), "Larc/struct/Seq;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_math_CumulativeDistribution, 0, "()V", 1 },
	{ "add", (intptr_t) M_arc_math_CumulativeDistribution_add_java_lang_Object_float, VTABLE_arc_math_CumulativeDistribution_add_java_lang_Object_float, "(Ljava/lang/Object;F)V", 1 },
	{ "add", (intptr_t) M_arc_math_CumulativeDistribution_add_java_lang_Object, VTABLE_arc_math_CumulativeDistribution_add_java_lang_Object, "(Ljava/lang/Object;)V", 1 },
	{ "generate", (intptr_t) M_arc_math_CumulativeDistribution_generate, VTABLE_arc_math_CumulativeDistribution_generate, "()V", 1 },
	{ "generateNormalized", (intptr_t) M_arc_math_CumulativeDistribution_generateNormalized, VTABLE_arc_math_CumulativeDistribution_generateNormalized, "()V", 1 },
	{ "generateUniform", (intptr_t) M_arc_math_CumulativeDistribution_generateUniform, VTABLE_arc_math_CumulativeDistribution_generateUniform, "()V", 1 },
	{ "value", (intptr_t) M_arc_math_CumulativeDistribution_value_float_R_java_lang_Object, VTABLE_arc_math_CumulativeDistribution_value_float_R_java_lang_Object, "(F)Ljava/lang/Object;", 1 },
	{ "value", (intptr_t) M_arc_math_CumulativeDistribution_value_R_java_lang_Object, VTABLE_arc_math_CumulativeDistribution_value_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "size", (intptr_t) M_arc_math_CumulativeDistribution_size_R_int, VTABLE_arc_math_CumulativeDistribution_size_R_int, "()I", 1 },
	{ "getInterval", (intptr_t) M_arc_math_CumulativeDistribution_getInterval_int_R_float, VTABLE_arc_math_CumulativeDistribution_getInterval_int_R_float, "(I)F", 1 },
	{ "getValue", (intptr_t) M_arc_math_CumulativeDistribution_getValue_int_R_java_lang_Object, VTABLE_arc_math_CumulativeDistribution_getValue_int_R_java_lang_Object, "(I)Ljava/lang/Object;", 1 },
	{ "setInterval", (intptr_t) M_arc_math_CumulativeDistribution_setInterval_java_lang_Object_float, VTABLE_arc_math_CumulativeDistribution_setInterval_java_lang_Object_float, "(Ljava/lang/Object;F)V", 1 },
	{ "setInterval", (intptr_t) M_arc_math_CumulativeDistribution_setInterval_int_float, VTABLE_arc_math_CumulativeDistribution_setInterval_int_float, "(IF)V", 1 },
	{ "clear", (intptr_t) M_arc_math_CumulativeDistribution_clear, VTABLE_arc_math_CumulativeDistribution_clear, "()V", 1 },
};

Class class_arc_math_CumulativeDistribution{
		.nativeName = (intptr_t) "arc/math/CumulativeDistribution",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_math_CumulativeDistribution),
		.classVtable = (intptr_t) vtable_arc_math_CumulativeDistribution,
		.staticInitializer = (intptr_t) clinit_arc_math_CumulativeDistribution,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_math_CumulativeDistribution,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 14,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 24,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_math_CumulativeDistribution = registerClass(&class_arc_math_CumulativeDistribution);

}
