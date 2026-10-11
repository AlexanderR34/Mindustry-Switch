#include "mindustry/type/LiquidStack.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/Number.h"
#include "java/lang/Comparable.h"
#include "mindustry/type/Liquid.h"
#include "mindustry/ctype/Content.h"
#include "arc/struct/Seq.h"
#include "mindustry/type/LiquidStack.h"
#include "mindustry/content/Liquids.h"

extern "C" {

jobject SF_mindustry_type_LiquidStack_empty;

void mark_mindustry_type_LiquidStack(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_type_LiquidStack_empty)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_type_LiquidStack_empty)->clazz)->markFunction)((jobject) SF_mindustry_type_LiquidStack_empty, mark, depth + 1);
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
	auto self = (mindustry_type_LiquidStack *) object;
	if (self->F_liquid)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_liquid)->clazz)->markFunction)((jobject) self->F_liquid, mark, depth + 1);
}

void init_mindustry_type_LiquidStack_mindustry_type_Liquid_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/LiquidStack:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_type_LiquidStack(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(12);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(13);
	((mindustry_type_LiquidStack *) NULL_CHECK((frame[0].o)))->F_liquid = (jref) (frame[1].o);
	LINE_NUMBER(14);
	((mindustry_type_LiquidStack *) NULL_CHECK((frame[0].o)))->F_amount = (frame[2].f);
	LINE_NUMBER(15);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_type_LiquidStack(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/LiquidStack:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_type_LiquidStack(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(18);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(20);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Liquids(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Liquids_water;
	((mindustry_type_LiquidStack *) NULL_CHECK(sp[0].o))->F_liquid = (jref) sp[1].o;
	LINE_NUMBER(21);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_type_LiquidStack_set_mindustry_type_Liquid_float_R_mindustry_type_LiquidStack(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/LiquidStack:set", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(24);
	((mindustry_type_LiquidStack *) NULL_CHECK((frame[0].o)))->F_liquid = (jref) (frame[1].o);
	LINE_NUMBER(25);
	((mindustry_type_LiquidStack *) NULL_CHECK((frame[0].o)))->F_amount = (frame[2].f);
	LINE_NUMBER(26);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_type_LiquidStack_copy_R_mindustry_type_LiquidStack(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/LiquidStack:copy", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(30);
	clinit_mindustry_type_LiquidStack(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_type_LiquidStack);
	sp[1].o = (jobject)((mindustry_type_LiquidStack *) NULL_CHECK((frame[0].o)))->F_liquid;
	init_mindustry_type_LiquidStack_mindustry_type_Liquid_float(ctx, sp[0].o, sp[1].o, ((jfloat)((mindustry_type_LiquidStack *) NULL_CHECK((frame[0].o)))->F_amount));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_type_LiquidStack_equals_mindustry_type_LiquidStack_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/LiquidStack:equals", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(34);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_type_LiquidStack *) NULL_CHECK((frame[1].o)))->F_liquid;
	sp[1].o = (jobject)((mindustry_type_LiquidStack *) NULL_CHECK((frame[0].o)))->F_liquid;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	if ((floatCompare(((jfloat)((mindustry_type_LiquidStack *) NULL_CHECK((frame[1].o)))->F_amount), ((jfloat)((mindustry_type_LiquidStack *) NULL_CHECK((frame[0].o)))->F_amount), -1)) != 0) goto label_1;
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

jobject SM_mindustry_type_LiquidStack_mult_Array1_mindustry_type_LiquidStack_float_R_Array1_mindustry_type_LiquidStack(jcontext ctx, jobject param0, jfloat param1) {
	jtype frame[11];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/LiquidStack:mult", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_type_LiquidStack(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(38);
	sp[0].o = (jobject)createArray(ctx, &class_mindustry_type_LiquidStack, (((jarray) nullCheck(ctx, (frame[0].o)))->length));
	frame[2].o = sp[0].o;
	LINE_NUMBER(39);
	frame[3].i = (jint(0));
	}
label_2:;
	{
	if ((frame[3].i) >= (((jarray) nullCheck(ctx, (frame[2].o)))->length)) goto label_3;
	}
	{
	LINE_NUMBER(40);
	sp[0].o = frame[2].o;
	jint temp0 = frame[3].i;
	clinit_mindustry_type_LiquidStack(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_type_LiquidStack);
	sp[2].o = (jobject)((mindustry_type_LiquidStack *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[3].i)))))->F_liquid;
	init_mindustry_type_LiquidStack_mindustry_type_Liquid_float(ctx, sp[1].o, sp[2].o, (((jfloat)((mindustry_type_LiquidStack *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[3].i)))))->F_amount) * (frame[1].f)));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(39);
	INST_IINC(3, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(42);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_type_LiquidStack_with_Array1_java_lang_Object_R_Array1_mindustry_type_LiquidStack(jcontext ctx, jobject param0) {
	jtype frame[11];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/LiquidStack:with", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_type_LiquidStack(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(46);
	sp[0].o = (jobject)createArray(ctx, &class_mindustry_type_LiquidStack, ((((jarray) nullCheck(ctx, (frame[0].o)))->length) / (jint(2))));
	frame[1].o = sp[0].o;
	LINE_NUMBER(47);
	frame[2].i = (jint(0));
	}
label_2:;
	{
	if ((frame[2].i) >= (((jarray) nullCheck(ctx, (frame[0].o)))->length)) goto label_3;
	}
	{
	LINE_NUMBER(48);
	sp[0].o = frame[1].o;
	jint temp0 = (frame[2].i) / (jint(2));
	clinit_mindustry_type_LiquidStack(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_type_LiquidStack);
	sp[2].o = checkCast(ctx, &class_mindustry_type_Liquid, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[2].i))));
	jfloat temp1 = (jfloat)((func_java_lang_Number_floatValue_R_float) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Number, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), ((frame[2].i) + (jint(1))))))))->vtable)[VTABLE_java_lang_Number_floatValue_R_float])(ctx, (checkCast(ctx, &class_java_lang_Number, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), ((frame[2].i) + (jint(1))))))));
	init_mindustry_type_LiquidStack_mindustry_type_Liquid_float(ctx, sp[1].o, sp[2].o, temp1);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(47);
	INST_IINC(2, 2);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(50);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_type_LiquidStack_list_Array1_java_lang_Object_R_arc_struct_Seq(jcontext ctx, jobject param0) {
	jtype frame[10];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/LiquidStack:list", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_type_LiquidStack(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(54);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq_int(ctx, sp[0].o, ((((jarray) nullCheck(ctx, (frame[0].o)))->length) / (jint(2))));
	frame[1].o = sp[0].o;
	LINE_NUMBER(55);
	frame[2].i = (jint(0));
	}
label_2:;
	{
	if ((frame[2].i) >= (((jarray) nullCheck(ctx, (frame[0].o)))->length)) goto label_3;
	}
	{
	LINE_NUMBER(56);
	sp[0].o = frame[1].o;
	clinit_mindustry_type_LiquidStack(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_type_LiquidStack);
	sp[2].o = checkCast(ctx, &class_mindustry_type_Liquid, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[2].i))));
	jfloat temp0 = (jfloat)((func_java_lang_Number_floatValue_R_float) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Number, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), ((frame[2].i) + (jint(1))))))))->vtable)[VTABLE_java_lang_Number_floatValue_R_float])(ctx, (checkCast(ctx, &class_java_lang_Number, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), ((frame[2].i) + (jint(1))))))));
	init_mindustry_type_LiquidStack_mindustry_type_Liquid_float(ctx, sp[1].o, sp[2].o, temp0);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(55);
	INST_IINC(2, 2);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(58);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jint M_mindustry_type_LiquidStack_compareTo_mindustry_type_LiquidStack_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/LiquidStack:compareTo", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(63);
	sp[0].o = (jobject)((mindustry_type_LiquidStack *) NULL_CHECK((frame[0].o)))->F_liquid;
	sp[1].o = (jobject)((mindustry_type_LiquidStack *) NULL_CHECK((frame[1].o)))->F_liquid;
	jint temp0 = (jint)((func_mindustry_type_Liquid_compareTo_mindustry_ctype_Content_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_Liquid_compareTo_mindustry_ctype_Content_R_int])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_type_LiquidStack_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/LiquidStack:equals", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(68);
	if ((frame[0].o) != (frame[1].o)) goto label_1;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(69);
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_type_LiquidStack)) == 0) goto label_2;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_type_LiquidStack, (frame[1].o)));
	goto label_4;
	}
label_2:;
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
	{
	LINE_NUMBER(70);
	if ((floatCompare(((jfloat)((mindustry_type_LiquidStack *) NULL_CHECK((frame[0].o)))->F_amount), ((jfloat)((mindustry_type_LiquidStack *) NULL_CHECK((frame[2].o)))->F_amount), -1)) != 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((mindustry_type_LiquidStack *) NULL_CHECK((frame[0].o)))->F_liquid;
	sp[1].o = (jobject)((mindustry_type_LiquidStack *) NULL_CHECK((frame[2].o)))->F_liquid;
	if (sp[0].o != sp[1].o) goto label_5;
	}
	INST_ICONST(1);
	goto label_6;
label_5:;
	INST_ICONST(0);
label_6:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_type_LiquidStack_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/LiquidStack:toString", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(75);
	sp[0].o = (jobject)((mindustry_type_LiquidStack *) NULL_CHECK((frame[0].o)))->F_liquid;
	sp[0].o = (jobject)SM_java_lang_String_valueOf_java_lang_Object_R_java_lang_String(ctx, sp[0].o);
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"LiquidStack{liquid=\u0001, amount=\u0001}"_j.string, 2, sp[0].o, boxFloat(ctx, ((jfloat)((mindustry_type_LiquidStack *) NULL_CHECK((frame[0].o)))->F_amount)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_mindustry_type_LiquidStack_compareTo_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/LiquidStack:compareTo", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(6);
	jint temp0 = (jint)((func_mindustry_type_LiquidStack_compareTo_mindustry_type_LiquidStack_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_LiquidStack_compareTo_mindustry_type_LiquidStack_R_int])(ctx, (frame[0].o), (checkCast(ctx, &class_mindustry_type_LiquidStack, (frame[1].o))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void clinit_mindustry_type_LiquidStack(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/LiquidStack:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_type_LiquidStack(ctx);
	{
	LINE_NUMBER(7);
	sp[0].o = (jobject)createArray(ctx, &class_mindustry_type_LiquidStack, (jint(0)));
	clinit_mindustry_type_LiquidStack(ctx);
	SF_mindustry_type_LiquidStack_empty = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_type_LiquidStack[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_mindustry_type_LiquidStack_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_mindustry_type_LiquidStack_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_mindustry_type_LiquidStack_compareTo_java_lang_Object_R_int,
	(void *) M_mindustry_type_LiquidStack_set_mindustry_type_Liquid_float_R_mindustry_type_LiquidStack,
	(void *) M_mindustry_type_LiquidStack_copy_R_mindustry_type_LiquidStack,
	(void *) M_mindustry_type_LiquidStack_equals_mindustry_type_LiquidStack_R_boolean,
	(void *) M_mindustry_type_LiquidStack_compareTo_mindustry_type_LiquidStack_R_int,
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
	{ "compareTo", "(Ljava/lang/Object;)I" },
	{ "set", "(Lmindustry/type/Liquid;F)Lmindustry/type/LiquidStack;" },
	{ "copy", "()Lmindustry/type/LiquidStack;" },
	{ "equals", "(Lmindustry/type/LiquidStack;)Z" },
	{ "compareTo", "(Lmindustry/type/LiquidStack;)I" },
};

static jclass interfaces[] { &class_java_lang_Comparable, };

static FieldMetadata fields[] {
	{ "empty", getArrayClass(&class_mindustry_type_LiquidStack, 1), (intptr_t) &SF_mindustry_type_LiquidStack_empty, "[Lmindustry/type/LiquidStack;", 25 },
	{ "liquid", &class_mindustry_type_Liquid, offsetof(mindustry_type_LiquidStack, F_liquid), "Lmindustry/type/Liquid;", 1 },
	{ "amount", &class_float, offsetof(mindustry_type_LiquidStack, F_amount), "F", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_type_LiquidStack_mindustry_type_Liquid_float, 0, "(Lmindustry/type/Liquid;F)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_type_LiquidStack, 0, "()V", 4 },
	{ "set", (intptr_t) M_mindustry_type_LiquidStack_set_mindustry_type_Liquid_float_R_mindustry_type_LiquidStack, VTABLE_mindustry_type_LiquidStack_set_mindustry_type_Liquid_float_R_mindustry_type_LiquidStack, "(Lmindustry/type/Liquid;F)Lmindustry/type/LiquidStack;", 1 },
	{ "copy", (intptr_t) M_mindustry_type_LiquidStack_copy_R_mindustry_type_LiquidStack, VTABLE_mindustry_type_LiquidStack_copy_R_mindustry_type_LiquidStack, "()Lmindustry/type/LiquidStack;", 1 },
	{ "equals", (intptr_t) M_mindustry_type_LiquidStack_equals_mindustry_type_LiquidStack_R_boolean, VTABLE_mindustry_type_LiquidStack_equals_mindustry_type_LiquidStack_R_boolean, "(Lmindustry/type/LiquidStack;)Z", 1 },
	{ "mult", (intptr_t) SM_mindustry_type_LiquidStack_mult_Array1_mindustry_type_LiquidStack_float_R_Array1_mindustry_type_LiquidStack, 0, "([Lmindustry/type/LiquidStack;F)[Lmindustry/type/LiquidStack;", 9 },
	{ "with", (intptr_t) SM_mindustry_type_LiquidStack_with_Array1_java_lang_Object_R_Array1_mindustry_type_LiquidStack, 0, "([Ljava/lang/Object;)[Lmindustry/type/LiquidStack;", 137 },
	{ "list", (intptr_t) SM_mindustry_type_LiquidStack_list_Array1_java_lang_Object_R_arc_struct_Seq, 0, "([Ljava/lang/Object;)Larc/struct/Seq;", 137 },
	{ "compareTo", (intptr_t) M_mindustry_type_LiquidStack_compareTo_mindustry_type_LiquidStack_R_int, VTABLE_mindustry_type_LiquidStack_compareTo_mindustry_type_LiquidStack_R_int, "(Lmindustry/type/LiquidStack;)I", 1 },
	{ "equals", (intptr_t) M_mindustry_type_LiquidStack_equals_java_lang_Object_R_boolean, VTABLE_mindustry_type_LiquidStack_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "toString", (intptr_t) M_mindustry_type_LiquidStack_toString_R_java_lang_String, VTABLE_mindustry_type_LiquidStack_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "compareTo", (intptr_t) M_mindustry_type_LiquidStack_compareTo_java_lang_Object_R_int, VTABLE_mindustry_type_LiquidStack_compareTo_java_lang_Object_R_int, "(Ljava/lang/Object;)I", 4161 },
	{ "<clinit>", (intptr_t) clinit_mindustry_type_LiquidStack, 0, "()V", 8 },
};

Class class_mindustry_type_LiquidStack{
		.nativeName = (intptr_t) "mindustry/type/LiquidStack",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_type_LiquidStack),
		.classVtable = (intptr_t) vtable_mindustry_type_LiquidStack,
		.staticInitializer = (intptr_t) clinit_mindustry_type_LiquidStack,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_type_LiquidStack,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 13,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_type_LiquidStack = registerClass(&class_mindustry_type_LiquidStack);

}
