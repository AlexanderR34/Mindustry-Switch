#include "java/util/Date.h"
#include "java/text/DateFormat.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/Comparable.h"
#include "java/lang/System.h"
#include "java/util/Date.h"

extern "C" {


void mark_java_util_Date(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_Date *) object;
}

void clinit_java_util_Date(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_java_util_Date(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Date:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Date(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(41);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)SM_java_lang_System_currentTimeMillis_R_long(ctx);
	init_java_util_Date_long(ctx, sp[0].o, temp0);
	LINE_NUMBER(42);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_Date_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Date:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Date(ctx);
	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(48);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(49);
	((java_util_Date *) NULL_CHECK((frame[0].o)))->F_date = (frame[1].l);
	LINE_NUMBER(50);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_java_util_Date_after_java_util_Date_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Date:after", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(53);
	jlong temp0 = (jlong)((func_java_util_Date_getTime_R_long) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_Date_getTime_R_long])(ctx, (frame[0].o));
	jlong temp1 = (jlong)((func_java_util_Date_getTime_R_long) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_Date_getTime_R_long])(ctx, (frame[1].o));
	if ((longCompare(temp0, temp1)) <= 0) goto label_1;
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

jbool M_java_util_Date_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Date:equals", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(61);
	if ((isInstance(ctx, (frame[1].o), &class_java_util_Date)) == 0) goto label_1;
	}
	{
	if ((longCompare(((jlong)((java_util_Date *) NULL_CHECK((checkCast(ctx, &class_java_util_Date, (frame[1].o)))))->F_date), ((jlong)((java_util_Date *) NULL_CHECK((frame[0].o)))->F_date))) != 0) goto label_1;
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

jlong M_java_util_Date_getTime_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Date:getTime", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(68);
	popStackFrame(ctx);
	return ((jlong)((java_util_Date *) NULL_CHECK((frame[0].o)))->F_date);
	}

	popStackFrame(ctx);
}

jint M_java_util_Date_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Date:hashCode", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(76);
	popStackFrame(ctx);
	return (jint(((jlong)((java_util_Date *) NULL_CHECK((frame[0].o)))->F_date)));
	}

	popStackFrame(ctx);
}

void M_java_util_Date_setTime_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Date:setTime", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(83);
	((java_util_Date *) NULL_CHECK((frame[0].o)))->F_date = (frame[1].l);
	LINE_NUMBER(84);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_util_Date_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Date:toString", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(90);
	sp[0].o = (jobject)SM_java_text_DateFormat_getDateTimeInstance_int_int_R_java_text_DateFormat(ctx, (jint(1)), (jint(1)));
	sp[0].o = (jobject)((func_java_text_DateFormat_format_java_util_Date_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_text_DateFormat_format_java_util_Date_R_java_lang_String])(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_java_util_Date_compareTo_java_util_Date_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Date:compareTo", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(94);
	jlong temp0 = (jlong)((func_java_util_Date_getTime_R_long) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_Date_getTime_R_long])(ctx, (frame[0].o));
	jlong temp1 = (jlong)((func_java_util_Date_getTime_R_long) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_Date_getTime_R_long])(ctx, (frame[1].o));
	if ((longCompare(temp0, temp1)) >= 0) goto label_1;
	}
	INST_ICONST(-1);
	goto label_2;
label_1:;
	{
	jlong temp0 = (jlong)((func_java_util_Date_getTime_R_long) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_Date_getTime_R_long])(ctx, (frame[0].o));
	jlong temp1 = (jlong)((func_java_util_Date_getTime_R_long) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_Date_getTime_R_long])(ctx, (frame[1].o));
	if ((longCompare(temp0, temp1)) <= 0) goto label_3;
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

jlong SM_java_util_Date_parse_java_lang_String_R_long(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Date:parse", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Date(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(98);
	popStackFrame(ctx);
	return (jlong(0));
	}

	popStackFrame(ctx);
}

jint M_java_util_Date_compareTo_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Date:compareTo", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(34);
	jint temp0 = (jint)((func_java_util_Date_compareTo_java_util_Date_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_Date_compareTo_java_util_Date_R_int])(ctx, (frame[0].o), (checkCast(ctx, &class_java_util_Date, (frame[1].o))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_Date[] {
	(void *) M_java_util_Date_hashCode_R_int,
	(void *) M_java_util_Date_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_util_Date_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_util_Date_compareTo_java_lang_Object_R_int,
	(void *) M_java_util_Date_after_java_util_Date_R_boolean,
	(void *) M_java_util_Date_getTime_R_long,
	(void *) M_java_util_Date_setTime_long,
	(void *) M_java_util_Date_compareTo_java_util_Date_R_int,
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
	{ "after", "(Ljava/util/Date;)Z" },
	{ "getTime", "()J" },
	{ "setTime", "(J)V" },
	{ "compareTo", "(Ljava/util/Date;)I" },
};

static jclass interfaces[] { &class_java_lang_Comparable, };

static FieldMetadata fields[] {
	{ "date", &class_long, offsetof(java_util_Date, F_date), "J", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_Date, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_java_util_Date_long, 0, "(J)V", 1 },
	{ "after", (intptr_t) M_java_util_Date_after_java_util_Date_R_boolean, VTABLE_java_util_Date_after_java_util_Date_R_boolean, "(Ljava/util/Date;)Z", 1 },
	{ "equals", (intptr_t) M_java_util_Date_equals_java_lang_Object_R_boolean, VTABLE_java_util_Date_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "getTime", (intptr_t) M_java_util_Date_getTime_R_long, VTABLE_java_util_Date_getTime_R_long, "()J", 1 },
	{ "hashCode", (intptr_t) M_java_util_Date_hashCode_R_int, VTABLE_java_util_Date_hashCode_R_int, "()I", 1 },
	{ "setTime", (intptr_t) M_java_util_Date_setTime_long, VTABLE_java_util_Date_setTime_long, "(J)V", 1 },
	{ "toString", (intptr_t) M_java_util_Date_toString_R_java_lang_String, VTABLE_java_util_Date_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "compareTo", (intptr_t) M_java_util_Date_compareTo_java_util_Date_R_int, VTABLE_java_util_Date_compareTo_java_util_Date_R_int, "(Ljava/util/Date;)I", 1 },
	{ "parse", (intptr_t) SM_java_util_Date_parse_java_lang_String_R_long, 0, "(Ljava/lang/String;)J", 9 },
	{ "compareTo", (intptr_t) M_java_util_Date_compareTo_java_lang_Object_R_int, VTABLE_java_util_Date_compareTo_java_lang_Object_R_int, "(Ljava/lang/Object;)I", 4161 },
};

Class class_java_util_Date{
		.nativeName = (intptr_t) "java/util/Date",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_Date),
		.classVtable = (intptr_t) vtable_java_util_Date,
		.staticInitializer = (intptr_t) clinit_java_util_Date,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_Date,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 11,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_Date = registerClass(&class_java_util_Date);

}
