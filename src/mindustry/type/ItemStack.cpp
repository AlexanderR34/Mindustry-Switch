#include "mindustry/type/ItemStack.h"
#include "arc/math/Mathf.h"
#include "java/lang/Object.h"
#include "mindustry/type/ItemStack.h"
#include "java/lang/String.h"
#include "java/lang/Number.h"
#include "java/lang/Comparable.h"
#include "mindustry/ctype/Content.h"
#include "arc/struct/Seq.h"
#include "mindustry/type/Item.h"
#include "mindustry/content/Items.h"

extern "C" {

jobject SF_mindustry_type_ItemStack_empty;

void mark_mindustry_type_ItemStack(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_type_ItemStack_empty)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_type_ItemStack_empty)->clazz)->markFunction)((jobject) SF_mindustry_type_ItemStack_empty, mark, depth + 1);
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
	auto self = (mindustry_type_ItemStack *) object;
	if (self->F_item)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_item)->clazz)->markFunction)((jobject) self->F_item, mark, depth + 1);
}

void init_mindustry_type_ItemStack_mindustry_type_Item_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/ItemStack:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_type_ItemStack(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(13);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(11);
	((mindustry_type_ItemStack *) NULL_CHECK((frame[0].o)))->F_amount = (jint(0));
	LINE_NUMBER(14);
	if ((frame[1].o) != nullptr) goto label_3;
	}
	clinit_mindustry_content_Items(ctx);
	(sp++)->o = SF_mindustry_content_Items_copper;
	INST_ASTORE(1);
label_3:;
	{
	LINE_NUMBER(15);
	((mindustry_type_ItemStack *) NULL_CHECK((frame[0].o)))->F_item = (jref) (frame[1].o);
	LINE_NUMBER(16);
	((mindustry_type_ItemStack *) NULL_CHECK((frame[0].o)))->F_amount = (frame[2].i);
	LINE_NUMBER(17);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_type_ItemStack(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/ItemStack:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_type_ItemStack(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(20);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(11);
	((mindustry_type_ItemStack *) NULL_CHECK((frame[0].o)))->F_amount = (jint(0));
	LINE_NUMBER(22);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Items(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Items_copper;
	((mindustry_type_ItemStack *) NULL_CHECK(sp[0].o))->F_item = (jref) sp[1].o;
	LINE_NUMBER(23);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_type_ItemStack_set_mindustry_type_Item_int_R_mindustry_type_ItemStack(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/ItemStack:set", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(26);
	((mindustry_type_ItemStack *) NULL_CHECK((frame[0].o)))->F_item = (jref) (frame[1].o);
	LINE_NUMBER(27);
	((mindustry_type_ItemStack *) NULL_CHECK((frame[0].o)))->F_amount = (frame[2].i);
	LINE_NUMBER(28);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_type_ItemStack_copy_R_mindustry_type_ItemStack(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/ItemStack:copy", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(32);
	clinit_mindustry_type_ItemStack(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_type_ItemStack);
	sp[1].o = (jobject)((mindustry_type_ItemStack *) NULL_CHECK((frame[0].o)))->F_item;
	init_mindustry_type_ItemStack_mindustry_type_Item_int(ctx, sp[0].o, sp[1].o, ((jint)((mindustry_type_ItemStack *) NULL_CHECK((frame[0].o)))->F_amount));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_type_ItemStack_equals_mindustry_type_ItemStack_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/ItemStack:equals", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(36);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_type_ItemStack *) NULL_CHECK((frame[1].o)))->F_item;
	sp[1].o = (jobject)((mindustry_type_ItemStack *) NULL_CHECK((frame[0].o)))->F_item;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	if (((jint)((mindustry_type_ItemStack *) NULL_CHECK((frame[1].o)))->F_amount) != ((jint)((mindustry_type_ItemStack *) NULL_CHECK((frame[0].o)))->F_amount)) goto label_1;
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

jobject SM_mindustry_type_ItemStack_mult_Array1_mindustry_type_ItemStack_float_R_Array1_mindustry_type_ItemStack(jcontext ctx, jobject param0, jfloat param1) {
	jtype frame[11];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/ItemStack:mult", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_type_ItemStack(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(40);
	sp[0].o = (jobject)createArray(ctx, &class_mindustry_type_ItemStack, (((jarray) nullCheck(ctx, (frame[0].o)))->length));
	frame[2].o = sp[0].o;
	LINE_NUMBER(41);
	frame[3].i = (jint(0));
	}
label_2:;
	{
	if ((frame[3].i) >= (((jarray) nullCheck(ctx, (frame[2].o)))->length)) goto label_3;
	}
	{
	LINE_NUMBER(42);
	sp[0].o = frame[2].o;
	jint temp0 = frame[3].i;
	clinit_mindustry_type_ItemStack(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_type_ItemStack);
	sp[2].o = (jobject)((mindustry_type_ItemStack *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[3].i)))))->F_item;
	jint temp1 = (jint)SM_arc_math_Mathf_round_float_R_int(ctx, ((jfloat(((jint)((mindustry_type_ItemStack *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[3].i)))))->F_amount))) * (frame[1].f)));
	init_mindustry_type_ItemStack_mindustry_type_Item_int(ctx, sp[1].o, sp[2].o, temp1);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(41);
	INST_IINC(3, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(44);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_type_ItemStack_with_Array1_java_lang_Object_R_Array1_mindustry_type_ItemStack(jcontext ctx, jobject param0) {
	jtype frame[11];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/ItemStack:with", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_type_ItemStack(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(48);
	sp[0].o = (jobject)createArray(ctx, &class_mindustry_type_ItemStack, ((((jarray) nullCheck(ctx, (frame[0].o)))->length) / (jint(2))));
	frame[1].o = sp[0].o;
	LINE_NUMBER(49);
	frame[2].i = (jint(0));
	}
label_2:;
	{
	if ((frame[2].i) >= (((jarray) nullCheck(ctx, (frame[0].o)))->length)) goto label_3;
	}
	{
	LINE_NUMBER(50);
	sp[0].o = frame[1].o;
	jint temp0 = (frame[2].i) / (jint(2));
	clinit_mindustry_type_ItemStack(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_type_ItemStack);
	sp[2].o = checkCast(ctx, &class_mindustry_type_Item, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[2].i))));
	jint temp1 = (jint)((func_java_lang_Number_intValue_R_int) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Number, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), ((frame[2].i) + (jint(1))))))))->vtable)[VTABLE_java_lang_Number_intValue_R_int])(ctx, (checkCast(ctx, &class_java_lang_Number, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), ((frame[2].i) + (jint(1))))))));
	init_mindustry_type_ItemStack_mindustry_type_Item_int(ctx, sp[1].o, sp[2].o, temp1);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(49);
	INST_IINC(2, 2);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(52);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_type_ItemStack_list_Array1_java_lang_Object_R_arc_struct_Seq(jcontext ctx, jobject param0) {
	jtype frame[10];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/ItemStack:list", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_type_ItemStack(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(56);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq_int(ctx, sp[0].o, ((((jarray) nullCheck(ctx, (frame[0].o)))->length) / (jint(2))));
	frame[1].o = sp[0].o;
	LINE_NUMBER(57);
	frame[2].i = (jint(0));
	}
label_2:;
	{
	if ((frame[2].i) >= (((jarray) nullCheck(ctx, (frame[0].o)))->length)) goto label_3;
	}
	{
	LINE_NUMBER(58);
	sp[0].o = frame[1].o;
	clinit_mindustry_type_ItemStack(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_type_ItemStack);
	sp[2].o = checkCast(ctx, &class_mindustry_type_Item, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[2].i))));
	jint temp0 = (jint)((func_java_lang_Number_intValue_R_int) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Number, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), ((frame[2].i) + (jint(1))))))))->vtable)[VTABLE_java_lang_Number_intValue_R_int])(ctx, (checkCast(ctx, &class_java_lang_Number, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), ((frame[2].i) + (jint(1))))))));
	init_mindustry_type_ItemStack_mindustry_type_Item_int(ctx, sp[1].o, sp[2].o, temp0);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(57);
	INST_IINC(2, 2);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(60);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_type_ItemStack_copy_Array1_mindustry_type_ItemStack_R_Array1_mindustry_type_ItemStack(jcontext ctx, jobject param0) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/ItemStack:copy", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_type_ItemStack(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(64);
	sp[0].o = (jobject)createArray(ctx, &class_mindustry_type_ItemStack, (((jarray) nullCheck(ctx, (frame[0].o)))->length));
	frame[1].o = sp[0].o;
	LINE_NUMBER(65);
	frame[2].i = (jint(0));
	}
label_2:;
	{
	if ((frame[2].i) >= (((jarray) nullCheck(ctx, (frame[1].o)))->length)) goto label_3;
	}
	{
	LINE_NUMBER(66);
	sp[0].o = frame[1].o;
	jint temp0 = frame[2].i;
	sp[1].o = (jobject)((func_mindustry_type_ItemStack_copy_R_mindustry_type_ItemStack) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[2].i))))->vtable)[VTABLE_mindustry_type_ItemStack_copy_R_mindustry_type_ItemStack])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[2].i))));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(65);
	INST_IINC(2, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(68);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jint M_mindustry_type_ItemStack_compareTo_mindustry_type_ItemStack_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/ItemStack:compareTo", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(73);
	sp[0].o = (jobject)((mindustry_type_ItemStack *) NULL_CHECK((frame[0].o)))->F_item;
	sp[1].o = (jobject)((mindustry_type_ItemStack *) NULL_CHECK((frame[1].o)))->F_item;
	jint temp0 = (jint)((func_mindustry_type_Item_compareTo_mindustry_ctype_Content_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_Item_compareTo_mindustry_ctype_Content_R_int])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_type_ItemStack_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/ItemStack:equals", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(78);
	if ((frame[0].o) == (frame[1].o)) goto label_1;
	}
	{
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_type_ItemStack)) == 0) goto label_2;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_type_ItemStack, (frame[1].o)));
	if (((jint)((mindustry_type_ItemStack *) NULL_CHECK((frame[2].o)))->F_amount) != ((jint)((mindustry_type_ItemStack *) NULL_CHECK((frame[0].o)))->F_amount)) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_type_ItemStack *) NULL_CHECK((frame[0].o)))->F_item;
	sp[1].o = (jobject)((mindustry_type_ItemStack *) NULL_CHECK((frame[2].o)))->F_item;
	if (sp[0].o != sp[1].o) goto label_2;
	}
label_1:;
	INST_ICONST(1);
	goto label_4;
label_2:;
	INST_ICONST(0);
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_type_ItemStack_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/ItemStack:toString", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(83);
	sp[0].o = (jobject)((mindustry_type_ItemStack *) NULL_CHECK((frame[0].o)))->F_item;
	sp[0].o = (jobject)SM_java_lang_String_valueOf_java_lang_Object_R_java_lang_String(ctx, sp[0].o);
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\u0001: \u0001"_j.string, 2, sp[0].o, boxInteger(ctx, ((jint)((mindustry_type_ItemStack *) NULL_CHECK((frame[0].o)))->F_amount)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_mindustry_type_ItemStack_compareTo_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/ItemStack:compareTo", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(7);
	jint temp0 = (jint)((func_mindustry_type_ItemStack_compareTo_mindustry_type_ItemStack_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_ItemStack_compareTo_mindustry_type_ItemStack_R_int])(ctx, (frame[0].o), (checkCast(ctx, &class_mindustry_type_ItemStack, (frame[1].o))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void clinit_mindustry_type_ItemStack(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/ItemStack:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_type_ItemStack(ctx);
	{
	LINE_NUMBER(8);
	sp[0].o = (jobject)createArray(ctx, &class_mindustry_type_ItemStack, (jint(0)));
	clinit_mindustry_type_ItemStack(ctx);
	SF_mindustry_type_ItemStack_empty = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_type_ItemStack[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_mindustry_type_ItemStack_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_mindustry_type_ItemStack_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_mindustry_type_ItemStack_compareTo_java_lang_Object_R_int,
	(void *) M_mindustry_type_ItemStack_set_mindustry_type_Item_int_R_mindustry_type_ItemStack,
	(void *) M_mindustry_type_ItemStack_copy_R_mindustry_type_ItemStack,
	(void *) M_mindustry_type_ItemStack_equals_mindustry_type_ItemStack_R_boolean,
	(void *) M_mindustry_type_ItemStack_compareTo_mindustry_type_ItemStack_R_int,
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
	{ "set", "(Lmindustry/type/Item;I)Lmindustry/type/ItemStack;" },
	{ "copy", "()Lmindustry/type/ItemStack;" },
	{ "equals", "(Lmindustry/type/ItemStack;)Z" },
	{ "compareTo", "(Lmindustry/type/ItemStack;)I" },
};

static jclass interfaces[] { &class_java_lang_Comparable, };

static FieldMetadata fields[] {
	{ "empty", getArrayClass(&class_mindustry_type_ItemStack, 1), (intptr_t) &SF_mindustry_type_ItemStack_empty, "[Lmindustry/type/ItemStack;", 25 },
	{ "item", &class_mindustry_type_Item, offsetof(mindustry_type_ItemStack, F_item), "Lmindustry/type/Item;", 1 },
	{ "amount", &class_int, offsetof(mindustry_type_ItemStack, F_amount), "I", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_type_ItemStack_mindustry_type_Item_int, 0, "(Lmindustry/type/Item;I)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_type_ItemStack, 0, "()V", 1 },
	{ "set", (intptr_t) M_mindustry_type_ItemStack_set_mindustry_type_Item_int_R_mindustry_type_ItemStack, VTABLE_mindustry_type_ItemStack_set_mindustry_type_Item_int_R_mindustry_type_ItemStack, "(Lmindustry/type/Item;I)Lmindustry/type/ItemStack;", 1 },
	{ "copy", (intptr_t) M_mindustry_type_ItemStack_copy_R_mindustry_type_ItemStack, VTABLE_mindustry_type_ItemStack_copy_R_mindustry_type_ItemStack, "()Lmindustry/type/ItemStack;", 1 },
	{ "equals", (intptr_t) M_mindustry_type_ItemStack_equals_mindustry_type_ItemStack_R_boolean, VTABLE_mindustry_type_ItemStack_equals_mindustry_type_ItemStack_R_boolean, "(Lmindustry/type/ItemStack;)Z", 1 },
	{ "mult", (intptr_t) SM_mindustry_type_ItemStack_mult_Array1_mindustry_type_ItemStack_float_R_Array1_mindustry_type_ItemStack, 0, "([Lmindustry/type/ItemStack;F)[Lmindustry/type/ItemStack;", 9 },
	{ "with", (intptr_t) SM_mindustry_type_ItemStack_with_Array1_java_lang_Object_R_Array1_mindustry_type_ItemStack, 0, "([Ljava/lang/Object;)[Lmindustry/type/ItemStack;", 137 },
	{ "list", (intptr_t) SM_mindustry_type_ItemStack_list_Array1_java_lang_Object_R_arc_struct_Seq, 0, "([Ljava/lang/Object;)Larc/struct/Seq;", 137 },
	{ "copy", (intptr_t) SM_mindustry_type_ItemStack_copy_Array1_mindustry_type_ItemStack_R_Array1_mindustry_type_ItemStack, 0, "([Lmindustry/type/ItemStack;)[Lmindustry/type/ItemStack;", 9 },
	{ "compareTo", (intptr_t) M_mindustry_type_ItemStack_compareTo_mindustry_type_ItemStack_R_int, VTABLE_mindustry_type_ItemStack_compareTo_mindustry_type_ItemStack_R_int, "(Lmindustry/type/ItemStack;)I", 1 },
	{ "equals", (intptr_t) M_mindustry_type_ItemStack_equals_java_lang_Object_R_boolean, VTABLE_mindustry_type_ItemStack_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "toString", (intptr_t) M_mindustry_type_ItemStack_toString_R_java_lang_String, VTABLE_mindustry_type_ItemStack_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "compareTo", (intptr_t) M_mindustry_type_ItemStack_compareTo_java_lang_Object_R_int, VTABLE_mindustry_type_ItemStack_compareTo_java_lang_Object_R_int, "(Ljava/lang/Object;)I", 4161 },
	{ "<clinit>", (intptr_t) clinit_mindustry_type_ItemStack, 0, "()V", 8 },
};

Class class_mindustry_type_ItemStack{
		.nativeName = (intptr_t) "mindustry/type/ItemStack",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_type_ItemStack),
		.classVtable = (intptr_t) vtable_mindustry_type_ItemStack,
		.staticInitializer = (intptr_t) clinit_mindustry_type_ItemStack,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_type_ItemStack,
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
		.methodCount = 14,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_type_ItemStack = registerClass(&class_mindustry_type_ItemStack);

}
