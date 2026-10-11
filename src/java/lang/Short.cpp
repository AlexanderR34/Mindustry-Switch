#include "java/lang/Short.h"
#include "java/lang/Short.h"
#include "java/lang/Integer.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/Number.h"
#include "java/lang/Comparable.h"
#include "java/lang/Class.h"
#include "java/nio/NativeUtils.h"

extern "C" {

jshort SF_java_lang_Short_MAX_VALUE;
jshort SF_java_lang_Short_MIN_VALUE;
jobject SF_java_lang_Short_TYPE;

void mark_java_lang_Short(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_java_lang_Short_TYPE)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_lang_Short_TYPE)->clazz)->markFunction)((jobject) SF_java_lang_Short_TYPE, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_lang_Number(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_lang_Short *) object;
}

void init_java_lang_Short_short(jcontext ctx, jobject self, jshort param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Short:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Short(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(53);
	init_java_lang_Number(ctx, (frame[0].o));
	LINE_NUMBER(54);
	((java_lang_Short *) NULL_CHECK((frame[0].o)))->F_value = (frame[1].i);
	LINE_NUMBER(55);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jshort SM_java_lang_Short_reverseBytes_short_R_short(jcontext ctx, jshort param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Short:reverseBytes", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Short(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(58);
	popStackFrame(ctx);
	return (jshort(((((frame[0].i) & (jint(65280))) >> (8)) | ((frame[0].i) << (8)))));
	}

	popStackFrame(ctx);
}

jbool M_java_lang_Short_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Short:equals", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(65);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	if (((jint)((java_lang_Short *) NULL_CHECK((checkCast(ctx, &class_java_lang_Short, (frame[1].o)))))->F_value) != ((jint)((java_lang_Short *) NULL_CHECK((frame[0].o)))->F_value)) goto label_1;
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

jint M_java_lang_Short_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Short:hashCode", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(72);
	popStackFrame(ctx);
	return ((jint)((java_lang_Short *) NULL_CHECK((frame[0].o)))->F_value);
	}

	popStackFrame(ctx);
}

jint SM_java_lang_Short_hashCode_short_R_int(jcontext ctx, jshort param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Short:hashCode", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Short(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(76);
	popStackFrame(ctx);
	return (frame[0].i);
	}

	popStackFrame(ctx);
}

jshort SM_java_lang_Short_parseShort_java_lang_String_R_short(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Short:parseShort", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Short(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(83);
	jint temp0 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_R_int(ctx, (frame[0].o));
	popStackFrame(ctx);
	return (jshort(temp0));
	}

	popStackFrame(ctx);
}

jshort SM_java_lang_Short_parseShort_java_lang_String_int_R_short(jcontext ctx, jobject param0, jint param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Short:parseShort", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Short(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(90);
	jint temp0 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_int_R_int(ctx, (frame[0].o), (frame[1].i));
	popStackFrame(ctx);
	return (jshort(temp0));
	}

	popStackFrame(ctx);
}

jshort M_java_lang_Short_shortValue_R_short(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Short:shortValue", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(97);
	popStackFrame(ctx);
	return ((jint)((java_lang_Short *) NULL_CHECK((frame[0].o)))->F_value);
	}

	popStackFrame(ctx);
}

jobject M_java_lang_Short_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Short:toString", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(104);
	sp[0].o = (jobject)SM_java_lang_Integer_toString_int_R_java_lang_String(ctx, ((jint)((java_lang_Short *) NULL_CHECK((frame[0].o)))->F_value));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_lang_Short_valueOf_short_R_java_lang_Short(jcontext ctx, jshort param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Short:valueOf", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Short(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(113);
	clinit_java_lang_Short(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_Short);
	init_java_lang_Short_short(ctx, sp[0].o, (frame[0].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_lang_Short_valueOf_java_lang_String_R_java_lang_Short(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Short:valueOf", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Short(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(117);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jint M_java_lang_Short_intValue_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Short:intValue", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(122);
	popStackFrame(ctx);
	return ((jint)((java_lang_Short *) NULL_CHECK((frame[0].o)))->F_value);
	}

	popStackFrame(ctx);
}

jlong M_java_lang_Short_longValue_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Short:longValue", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(127);
	popStackFrame(ctx);
	return (jlong(((jint)((java_lang_Short *) NULL_CHECK((frame[0].o)))->F_value)));
	}

	popStackFrame(ctx);
}

jfloat M_java_lang_Short_floatValue_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Short:floatValue", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(132);
	popStackFrame(ctx);
	return (jfloat(((jint)((java_lang_Short *) NULL_CHECK((frame[0].o)))->F_value)));
	}

	popStackFrame(ctx);
}

jdouble M_java_lang_Short_doubleValue_R_double(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Short:doubleValue", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(137);
	popStackFrame(ctx);
	return (jdouble(((jint)((java_lang_Short *) NULL_CHECK((frame[0].o)))->F_value)));
	}

	popStackFrame(ctx);
}

jint SM_java_lang_Short_toUnsignedInt_short_R_int(jcontext ctx, jshort param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Short:toUnsignedInt", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Short(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(141);
	popStackFrame(ctx);
	return ((frame[0].i) & (jint(65535)));
	}

	popStackFrame(ctx);
}

jlong SM_java_lang_Short_toUnsignedLong_short_R_long(jcontext ctx, jshort param0) {
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Short:toUnsignedLong", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Short(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(145);
	popStackFrame(ctx);
	return ((jlong((frame[0].i))) & (jlong(65535ll)));
	}

	popStackFrame(ctx);
}

jint SM_java_lang_Short_compare_short_short_R_int(jcontext ctx, jshort param0, jshort param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Short:compare", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Short(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(149);
	popStackFrame(ctx);
	return ((frame[0].i) - (frame[1].i));
	}

	popStackFrame(ctx);
}

jint SM_java_lang_Short_compareUnsigned_short_short_R_int(jcontext ctx, jshort param0, jshort param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Short:compareUnsigned", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Short(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(153);
	jint temp0 = (jint)SM_java_lang_Short_toUnsignedInt_short_R_int(ctx, (frame[0].i));
	jint temp1 = (jint)SM_java_lang_Short_toUnsignedInt_short_R_int(ctx, (frame[1].i));
	popStackFrame(ctx);
	return (temp0 - temp1);
	}

	popStackFrame(ctx);
}

jint M_java_lang_Short_compareTo_java_lang_Short_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Short:compareTo", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(157);
	if (((jint)((java_lang_Short *) NULL_CHECK((frame[0].o)))->F_value) >= ((jint)((java_lang_Short *) NULL_CHECK((frame[1].o)))->F_value)) goto label_1;
	}
	INST_ICONST(-1);
	goto label_2;
label_1:;
	{
	if (((jint)((java_lang_Short *) NULL_CHECK((frame[0].o)))->F_value) <= ((jint)((java_lang_Short *) NULL_CHECK((frame[1].o)))->F_value)) goto label_3;
	}
	INST_ICONST(1);
	goto label_2;
label_3:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint M_java_lang_Short_compareTo_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Short:compareTo", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(32);
	jint temp0 = (jint)((func_java_lang_Short_compareTo_java_lang_Short_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Short_compareTo_java_lang_Short_R_int])(ctx, (frame[0].o), (checkCast(ctx, &class_java_lang_Short, (frame[1].o))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void clinit_java_lang_Short(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_Number(ctx);
	SF_java_lang_Short_MAX_VALUE = jint(32767);
	SF_java_lang_Short_MIN_VALUE = jint(-32768);
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Short:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Short(ctx);
	{
	LINE_NUMBER(45);
	sp[0].o = (jobject)SM_java_nio_NativeUtils_getPrimitive_java_lang_String_R_java_lang_Class(ctx, (((jobject) createStringLiteral(ctx, u8"S"_j))));
	clinit_java_lang_Short(ctx);
	SF_java_lang_Short_TYPE = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_lang_Short[] {
	(void *) M_java_lang_Short_hashCode_R_int,
	(void *) M_java_lang_Short_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Short_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_lang_Short_intValue_R_int,
	(void *) M_java_lang_Number_byteValue_R_byte,
	(void *) M_java_lang_Short_longValue_R_long,
	(void *) M_java_lang_Short_floatValue_R_float,
	(void *) M_java_lang_Short_doubleValue_R_double,
	(void *) M_java_lang_Short_shortValue_R_short,
	(void *) M_java_lang_Short_compareTo_java_lang_Object_R_int,
	(void *) M_java_lang_Short_compareTo_java_lang_Short_R_int,
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
	{ "intValue", "()I" },
	{ "byteValue", "()B" },
	{ "longValue", "()J" },
	{ "floatValue", "()F" },
	{ "doubleValue", "()D" },
	{ "shortValue", "()S" },
	{ "compareTo", "(Ljava/lang/Object;)I" },
	{ "compareTo", "(Ljava/lang/Short;)I" },
};

static jclass interfaces[] { &class_java_lang_Comparable, };

static FieldMetadata fields[] {
	{ "MAX_VALUE", &class_short, (intptr_t) &SF_java_lang_Short_MAX_VALUE, "S", 25 },
	{ "MIN_VALUE", &class_short, (intptr_t) &SF_java_lang_Short_MIN_VALUE, "S", 25 },
	{ "TYPE", &class_java_lang_Class, (intptr_t) &SF_java_lang_Short_TYPE, "Ljava/lang/Class;", 25 },
	{ "value", &class_short, offsetof(java_lang_Short, F_value), "S", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_lang_Short_short, 0, "(S)V", 1 },
	{ "reverseBytes", (intptr_t) SM_java_lang_Short_reverseBytes_short_R_short, 0, "(S)S", 9 },
	{ "equals", (intptr_t) M_java_lang_Short_equals_java_lang_Object_R_boolean, VTABLE_java_lang_Short_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "hashCode", (intptr_t) M_java_lang_Short_hashCode_R_int, VTABLE_java_lang_Short_hashCode_R_int, "()I", 1 },
	{ "hashCode", (intptr_t) SM_java_lang_Short_hashCode_short_R_int, 0, "(S)I", 9 },
	{ "parseShort", (intptr_t) SM_java_lang_Short_parseShort_java_lang_String_R_short, 0, "(Ljava/lang/String;)S", 9 },
	{ "parseShort", (intptr_t) SM_java_lang_Short_parseShort_java_lang_String_int_R_short, 0, "(Ljava/lang/String;I)S", 9 },
	{ "shortValue", (intptr_t) M_java_lang_Short_shortValue_R_short, VTABLE_java_lang_Short_shortValue_R_short, "()S", 1 },
	{ "toString", (intptr_t) M_java_lang_Short_toString_R_java_lang_String, VTABLE_java_lang_Short_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "valueOf", (intptr_t) SM_java_lang_Short_valueOf_short_R_java_lang_Short, 0, "(S)Ljava/lang/Short;", 9 },
	{ "valueOf", (intptr_t) SM_java_lang_Short_valueOf_java_lang_String_R_java_lang_Short, 0, "(Ljava/lang/String;)Ljava/lang/Short;", 9 },
	{ "intValue", (intptr_t) M_java_lang_Short_intValue_R_int, VTABLE_java_lang_Short_intValue_R_int, "()I", 1 },
	{ "longValue", (intptr_t) M_java_lang_Short_longValue_R_long, VTABLE_java_lang_Short_longValue_R_long, "()J", 1 },
	{ "floatValue", (intptr_t) M_java_lang_Short_floatValue_R_float, VTABLE_java_lang_Short_floatValue_R_float, "()F", 1 },
	{ "doubleValue", (intptr_t) M_java_lang_Short_doubleValue_R_double, VTABLE_java_lang_Short_doubleValue_R_double, "()D", 1 },
	{ "toUnsignedInt", (intptr_t) SM_java_lang_Short_toUnsignedInt_short_R_int, 0, "(S)I", 9 },
	{ "toUnsignedLong", (intptr_t) SM_java_lang_Short_toUnsignedLong_short_R_long, 0, "(S)J", 9 },
	{ "compare", (intptr_t) SM_java_lang_Short_compare_short_short_R_int, 0, "(SS)I", 9 },
	{ "compareUnsigned", (intptr_t) SM_java_lang_Short_compareUnsigned_short_short_R_int, 0, "(SS)I", 9 },
	{ "compareTo", (intptr_t) M_java_lang_Short_compareTo_java_lang_Short_R_int, VTABLE_java_lang_Short_compareTo_java_lang_Short_R_int, "(Ljava/lang/Short;)I", 1 },
	{ "compareTo", (intptr_t) M_java_lang_Short_compareTo_java_lang_Object_R_int, VTABLE_java_lang_Short_compareTo_java_lang_Object_R_int, "(Ljava/lang/Object;)I", 4161 },
	{ "<clinit>", (intptr_t) clinit_java_lang_Short, 0, "()V", 8 },
};

Class class_java_lang_Short{
		.nativeName = (intptr_t) "java/lang/Short",
		.parentClass = (intptr_t) &class_java_lang_Number,
		.size = sizeof(java_lang_Short),
		.classVtable = (intptr_t) vtable_java_lang_Short,
		.staticInitializer = (intptr_t) clinit_java_lang_Short,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_lang_Short,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 22,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 19,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_lang_Short = registerClass(&class_java_lang_Short);

}
