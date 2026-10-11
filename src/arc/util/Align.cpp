#include "arc/util/Align.h"
#include "java/lang/Object.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/String.h"

extern "C" {

jint SF_arc_util_Align_center;
jint SF_arc_util_Align_top;
jint SF_arc_util_Align_bottom;
jint SF_arc_util_Align_left;
jint SF_arc_util_Align_right;
jint SF_arc_util_Align_topLeft;
jint SF_arc_util_Align_topRight;
jint SF_arc_util_Align_bottomLeft;
jint SF_arc_util_Align_bottomRight;

void mark_arc_util_Align(jobject object, jint mark, jint depth) {
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
	auto self = (arc_util_Align *) object;
}

void clinit_arc_util_Align(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_arc_util_Align_center = jint(1);
	SF_arc_util_Align_top = jint(2);
	SF_arc_util_Align_bottom = jint(4);
	SF_arc_util_Align_left = jint(8);
	SF_arc_util_Align_right = jint(16);
	SF_arc_util_Align_topLeft = jint(10);
	SF_arc_util_Align_topRight = jint(18);
	SF_arc_util_Align_bottomLeft = jint(12);
	SF_arc_util_Align_bottomRight = jint(20);
}

void init_arc_util_Align(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Align:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Align(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(7);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_arc_util_Align_isLeft_int_R_boolean(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Align:isLeft", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Align(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(20);
	if (((frame[0].i) & (8)) == 0) goto label_1;
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

jbool SM_arc_util_Align_isRight_int_R_boolean(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Align:isRight", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Align(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(24);
	if (((frame[0].i) & (16)) == 0) goto label_1;
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

jbool SM_arc_util_Align_isTop_int_R_boolean(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Align:isTop", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Align(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(28);
	if (((frame[0].i) & (jint(2))) == 0) goto label_1;
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

jbool SM_arc_util_Align_isBottom_int_R_boolean(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Align:isBottom", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Align(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(32);
	if (((frame[0].i) & (jint(4))) == 0) goto label_1;
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

jbool SM_arc_util_Align_isCenterVertical_int_R_boolean(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Align:isCenterVertical", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Align(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(36);
	if (((frame[0].i) & (jint(2))) != 0) goto label_1;
	}
	{
	if (((frame[0].i) & (jint(4))) != 0) goto label_1;
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

jbool SM_arc_util_Align_isCenterHorizontal_int_R_boolean(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Align:isCenterHorizontal", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Align(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(40);
	if (((frame[0].i) & (8)) != 0) goto label_1;
	}
	{
	if (((frame[0].i) & (16)) != 0) goto label_1;
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

jobject SM_arc_util_Align_toString_int_R_java_lang_String(jcontext ctx, jint param0) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Align:toString", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Align(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(44);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder_int(ctx, sp[0].o, (13));
	frame[1].o = sp[0].o;
	LINE_NUMBER(45);
	if (((frame[0].i) & (jint(2))) == 0) goto label_2;
	}
	{
	LINE_NUMBER(46);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"top,"_j))));
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(47);
	if (((frame[0].i) & (jint(4))) == 0) goto label_5;
	}
	{
	LINE_NUMBER(48);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"bottom,"_j))));
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(50);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"center,"_j))));
	}
label_4:;
	{
	LINE_NUMBER(51);
	if (((frame[0].i) & (8)) == 0) goto label_7;
	}
	{
	LINE_NUMBER(52);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"left"_j))));
	goto label_9;
	}
label_7:;
	{
	LINE_NUMBER(53);
	if (((frame[0].i) & (16)) == 0) goto label_10;
	}
	{
	LINE_NUMBER(54);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"right"_j))));
	goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(56);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"center"_j))));
	}
label_9:;
	{
	LINE_NUMBER(57);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_arc_util_Align[] {
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
};

static FieldMetadata fields[] {
	{ "center", &class_int, (intptr_t) &SF_arc_util_Align_center, "I", 25 },
	{ "top", &class_int, (intptr_t) &SF_arc_util_Align_top, "I", 25 },
	{ "bottom", &class_int, (intptr_t) &SF_arc_util_Align_bottom, "I", 25 },
	{ "left", &class_int, (intptr_t) &SF_arc_util_Align_left, "I", 25 },
	{ "right", &class_int, (intptr_t) &SF_arc_util_Align_right, "I", 25 },
	{ "topLeft", &class_int, (intptr_t) &SF_arc_util_Align_topLeft, "I", 25 },
	{ "topRight", &class_int, (intptr_t) &SF_arc_util_Align_topRight, "I", 25 },
	{ "bottomLeft", &class_int, (intptr_t) &SF_arc_util_Align_bottomLeft, "I", 25 },
	{ "bottomRight", &class_int, (intptr_t) &SF_arc_util_Align_bottomRight, "I", 25 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_util_Align, 0, "()V", 1 },
	{ "isLeft", (intptr_t) SM_arc_util_Align_isLeft_int_R_boolean, 0, "(I)Z", 9 },
	{ "isRight", (intptr_t) SM_arc_util_Align_isRight_int_R_boolean, 0, "(I)Z", 9 },
	{ "isTop", (intptr_t) SM_arc_util_Align_isTop_int_R_boolean, 0, "(I)Z", 9 },
	{ "isBottom", (intptr_t) SM_arc_util_Align_isBottom_int_R_boolean, 0, "(I)Z", 9 },
	{ "isCenterVertical", (intptr_t) SM_arc_util_Align_isCenterVertical_int_R_boolean, 0, "(I)Z", 9 },
	{ "isCenterHorizontal", (intptr_t) SM_arc_util_Align_isCenterHorizontal_int_R_boolean, 0, "(I)Z", 9 },
	{ "toString", (intptr_t) SM_arc_util_Align_toString_int_R_java_lang_String, 0, "(I)Ljava/lang/String;", 9 },
};

Class class_arc_util_Align{
		.nativeName = (intptr_t) "arc/util/Align",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_util_Align),
		.classVtable = (intptr_t) vtable_arc_util_Align,
		.staticInitializer = (intptr_t) clinit_arc_util_Align,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_util_Align,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 9,
		.nativeFields = (intptr_t) fields,
		.methodCount = 8,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_util_Align = registerClass(&class_arc_util_Align);

}
