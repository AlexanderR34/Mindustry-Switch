#include "mindustry/type/PayloadStack.h"
#include "mindustry/content/Blocks.h"
#include "java/lang/Object.h"
#include "mindustry/world/Block.h"
#include "java/lang/String.h"
#include "java/lang/Number.h"
#include "java/lang/Comparable.h"
#include "mindustry/ctype/Content.h"
#include "arc/struct/Seq.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "mindustry/type/PayloadStack.h"

extern "C" {


void mark_mindustry_type_PayloadStack(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_type_PayloadStack *) object;
	if (self->F_item)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_item)->clazz)->markFunction)((jobject) self->F_item, mark, depth + 1);
}

void clinit_mindustry_type_PayloadStack(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_type_PayloadStack_mindustry_ctype_UnlockableContent_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/PayloadStack:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_type_PayloadStack(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(11);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(8);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_router;
	((mindustry_type_PayloadStack *) NULL_CHECK(sp[0].o))->F_item = (jref) sp[1].o;
	LINE_NUMBER(9);
	((mindustry_type_PayloadStack *) NULL_CHECK((frame[0].o)))->F_amount = (jint(1));
	LINE_NUMBER(12);
	((mindustry_type_PayloadStack *) NULL_CHECK((frame[0].o)))->F_item = (jref) (frame[1].o);
	LINE_NUMBER(13);
	((mindustry_type_PayloadStack *) NULL_CHECK((frame[0].o)))->F_amount = (frame[2].i);
	LINE_NUMBER(14);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_type_PayloadStack_mindustry_ctype_UnlockableContent(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/PayloadStack:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_type_PayloadStack(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(16);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(8);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_router;
	((mindustry_type_PayloadStack *) NULL_CHECK(sp[0].o))->F_item = (jref) sp[1].o;
	LINE_NUMBER(9);
	((mindustry_type_PayloadStack *) NULL_CHECK((frame[0].o)))->F_amount = (jint(1));
	LINE_NUMBER(17);
	((mindustry_type_PayloadStack *) NULL_CHECK((frame[0].o)))->F_item = (jref) (frame[1].o);
	LINE_NUMBER(18);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_type_PayloadStack(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/PayloadStack:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_type_PayloadStack(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(20);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(8);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_router;
	((mindustry_type_PayloadStack *) NULL_CHECK(sp[0].o))->F_item = (jref) sp[1].o;
	LINE_NUMBER(9);
	((mindustry_type_PayloadStack *) NULL_CHECK((frame[0].o)))->F_amount = (jint(1));
	LINE_NUMBER(21);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_type_PayloadStack_with_Array1_java_lang_Object_R_Array1_mindustry_type_PayloadStack(jcontext ctx, jobject param0) {
	jtype frame[11];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/PayloadStack:with", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_type_PayloadStack(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(24);
	sp[0].o = (jobject)createArray(ctx, &class_mindustry_type_PayloadStack, ((((jarray) nullCheck(ctx, (frame[0].o)))->length) / (jint(2))));
	frame[1].o = sp[0].o;
	LINE_NUMBER(25);
	frame[2].i = (jint(0));
	}
label_2:;
	{
	if ((frame[2].i) >= (((jarray) nullCheck(ctx, (frame[0].o)))->length)) goto label_3;
	}
	{
	LINE_NUMBER(26);
	sp[0].o = frame[1].o;
	jint temp0 = (frame[2].i) / (jint(2));
	clinit_mindustry_type_PayloadStack(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_type_PayloadStack);
	sp[2].o = checkCast(ctx, &class_mindustry_ctype_UnlockableContent, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[2].i))));
	jint temp1 = (jint)((func_java_lang_Number_intValue_R_int) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Number, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), ((frame[2].i) + (jint(1))))))))->vtable)[VTABLE_java_lang_Number_intValue_R_int])(ctx, (checkCast(ctx, &class_java_lang_Number, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), ((frame[2].i) + (jint(1))))))));
	init_mindustry_type_PayloadStack_mindustry_ctype_UnlockableContent_int(ctx, sp[1].o, sp[2].o, temp1);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(25);
	INST_IINC(2, 2);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(28);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_type_PayloadStack_list_Array1_java_lang_Object_R_arc_struct_Seq(jcontext ctx, jobject param0) {
	jtype frame[10];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/PayloadStack:list", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_type_PayloadStack(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(32);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq_int(ctx, sp[0].o, ((((jarray) nullCheck(ctx, (frame[0].o)))->length) / (jint(2))));
	frame[1].o = sp[0].o;
	LINE_NUMBER(33);
	frame[2].i = (jint(0));
	}
label_2:;
	{
	if ((frame[2].i) >= (((jarray) nullCheck(ctx, (frame[0].o)))->length)) goto label_3;
	}
	{
	LINE_NUMBER(34);
	sp[0].o = frame[1].o;
	clinit_mindustry_type_PayloadStack(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_type_PayloadStack);
	sp[2].o = checkCast(ctx, &class_mindustry_ctype_UnlockableContent, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[2].i))));
	jint temp0 = (jint)((func_java_lang_Number_intValue_R_int) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Number, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), ((frame[2].i) + (jint(1))))))))->vtable)[VTABLE_java_lang_Number_intValue_R_int])(ctx, (checkCast(ctx, &class_java_lang_Number, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), ((frame[2].i) + (jint(1))))))));
	init_mindustry_type_PayloadStack_mindustry_ctype_UnlockableContent_int(ctx, sp[1].o, sp[2].o, temp0);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(33);
	INST_IINC(2, 2);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(36);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jint M_mindustry_type_PayloadStack_compareTo_mindustry_type_PayloadStack_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/PayloadStack:compareTo", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(41);
	sp[0].o = (jobject)((mindustry_type_PayloadStack *) NULL_CHECK((frame[0].o)))->F_item;
	sp[1].o = (jobject)((mindustry_type_PayloadStack *) NULL_CHECK((frame[1].o)))->F_item;
	jint temp0 = (jint)((func_mindustry_ctype_UnlockableContent_compareTo_mindustry_ctype_Content_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ctype_UnlockableContent_compareTo_mindustry_ctype_Content_R_int])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_type_PayloadStack_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/PayloadStack:equals", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(46);
	if ((frame[0].o) == (frame[1].o)) goto label_1;
	}
	{
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_type_PayloadStack)) == 0) goto label_2;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_type_PayloadStack, (frame[1].o)));
	if (((jint)((mindustry_type_PayloadStack *) NULL_CHECK((frame[2].o)))->F_amount) != ((jint)((mindustry_type_PayloadStack *) NULL_CHECK((frame[0].o)))->F_amount)) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_type_PayloadStack *) NULL_CHECK((frame[0].o)))->F_item;
	sp[1].o = (jobject)((mindustry_type_PayloadStack *) NULL_CHECK((frame[2].o)))->F_item;
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

jobject M_mindustry_type_PayloadStack_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/PayloadStack:toString", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(51);
	sp[0].o = (jobject)((mindustry_type_PayloadStack *) NULL_CHECK((frame[0].o)))->F_item;
	sp[0].o = (jobject)SM_java_lang_String_valueOf_java_lang_Object_R_java_lang_String(ctx, sp[0].o);
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"BlockStack{item=\u0001, amount=\u0001}"_j.string, 2, sp[0].o, boxInteger(ctx, ((jint)((mindustry_type_PayloadStack *) NULL_CHECK((frame[0].o)))->F_amount)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_mindustry_type_PayloadStack_compareTo_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/PayloadStack:compareTo", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(7);
	jint temp0 = (jint)((func_mindustry_type_PayloadStack_compareTo_mindustry_type_PayloadStack_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_PayloadStack_compareTo_mindustry_type_PayloadStack_R_int])(ctx, (frame[0].o), (checkCast(ctx, &class_mindustry_type_PayloadStack, (frame[1].o))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_type_PayloadStack[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_mindustry_type_PayloadStack_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_mindustry_type_PayloadStack_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_mindustry_type_PayloadStack_compareTo_java_lang_Object_R_int,
	(void *) M_mindustry_type_PayloadStack_compareTo_mindustry_type_PayloadStack_R_int,
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
	{ "compareTo", "(Lmindustry/type/PayloadStack;)I" },
};

static jclass interfaces[] { &class_java_lang_Comparable, };

static FieldMetadata fields[] {
	{ "item", &class_mindustry_ctype_UnlockableContent, offsetof(mindustry_type_PayloadStack, F_item), "Lmindustry/ctype/UnlockableContent;", 1 },
	{ "amount", &class_int, offsetof(mindustry_type_PayloadStack, F_amount), "I", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_type_PayloadStack_mindustry_ctype_UnlockableContent_int, 0, "(Lmindustry/ctype/UnlockableContent;I)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_type_PayloadStack_mindustry_ctype_UnlockableContent, 0, "(Lmindustry/ctype/UnlockableContent;)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_type_PayloadStack, 0, "()V", 1 },
	{ "with", (intptr_t) SM_mindustry_type_PayloadStack_with_Array1_java_lang_Object_R_Array1_mindustry_type_PayloadStack, 0, "([Ljava/lang/Object;)[Lmindustry/type/PayloadStack;", 137 },
	{ "list", (intptr_t) SM_mindustry_type_PayloadStack_list_Array1_java_lang_Object_R_arc_struct_Seq, 0, "([Ljava/lang/Object;)Larc/struct/Seq;", 137 },
	{ "compareTo", (intptr_t) M_mindustry_type_PayloadStack_compareTo_mindustry_type_PayloadStack_R_int, VTABLE_mindustry_type_PayloadStack_compareTo_mindustry_type_PayloadStack_R_int, "(Lmindustry/type/PayloadStack;)I", 1 },
	{ "equals", (intptr_t) M_mindustry_type_PayloadStack_equals_java_lang_Object_R_boolean, VTABLE_mindustry_type_PayloadStack_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "toString", (intptr_t) M_mindustry_type_PayloadStack_toString_R_java_lang_String, VTABLE_mindustry_type_PayloadStack_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "compareTo", (intptr_t) M_mindustry_type_PayloadStack_compareTo_java_lang_Object_R_int, VTABLE_mindustry_type_PayloadStack_compareTo_java_lang_Object_R_int, "(Ljava/lang/Object;)I", 4161 },
};

Class class_mindustry_type_PayloadStack{
		.nativeName = (intptr_t) "mindustry/type/PayloadStack",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_type_PayloadStack),
		.classVtable = (intptr_t) vtable_mindustry_type_PayloadStack,
		.staticInitializer = (intptr_t) clinit_mindustry_type_PayloadStack,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_type_PayloadStack,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 9,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 13,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_type_PayloadStack = registerClass(&class_mindustry_type_PayloadStack);

}
