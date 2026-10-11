#include "java/lang/Boolean.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/Comparable.h"
#include "java/lang/Boolean.h"
#include "java/lang/Class.h"
#include "java/nio/NativeUtils.h"

extern "C" {

jobject SF_java_lang_Boolean_FALSE;
jobject SF_java_lang_Boolean_TRUE;
jobject SF_java_lang_Boolean_TYPE;

void mark_java_lang_Boolean(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_java_lang_Boolean_FALSE)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_lang_Boolean_FALSE)->clazz)->markFunction)((jobject) SF_java_lang_Boolean_FALSE, mark, depth + 1);
		if (SF_java_lang_Boolean_TRUE)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_lang_Boolean_TRUE)->clazz)->markFunction)((jobject) SF_java_lang_Boolean_TRUE, mark, depth + 1);
		if (SF_java_lang_Boolean_TYPE)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_lang_Boolean_TYPE)->clazz)->markFunction)((jobject) SF_java_lang_Boolean_TYPE, mark, depth + 1);
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
	auto self = (java_lang_Boolean *) object;
}

void init_java_lang_Boolean_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Boolean:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Boolean(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(55);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(56);
	((java_lang_Boolean *) NULL_CHECK((frame[0].o)))->F_value = (frame[1].i);
	LINE_NUMBER(57);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_java_lang_Boolean_booleanValue_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Boolean:booleanValue", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(63);
	popStackFrame(ctx);
	return ((jint)((java_lang_Boolean *) NULL_CHECK((frame[0].o)))->F_value);
	}

	popStackFrame(ctx);
}

jbool M_java_lang_Boolean_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Boolean:equals", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(70);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	if (((jint)((java_lang_Boolean *) NULL_CHECK((checkCast(ctx, &class_java_lang_Boolean, (frame[1].o)))))->F_value) != ((jint)((java_lang_Boolean *) NULL_CHECK((frame[0].o)))->F_value)) goto label_1;
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

jint M_java_lang_Boolean_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Boolean:hashCode", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(77);
	jint temp0 = (jint)SM_java_lang_Boolean_hashCode_boolean_R_int(ctx, ((jint)((java_lang_Boolean *) NULL_CHECK((frame[0].o)))->F_value));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint SM_java_lang_Boolean_hashCode_boolean_R_int(jcontext ctx, jbool param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Boolean:hashCode", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Boolean(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(81);
	if ((frame[0].i) == 0) goto label_1;
	}
	INST_SIPUSH(1231);
	goto label_2;
label_1:;
	INST_SIPUSH(1237);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject SM_java_lang_Boolean_toString_boolean_R_java_lang_String(jcontext ctx, jbool param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Boolean:toString", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Boolean(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(85);
	if ((frame[0].i) == 0) goto label_1;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"true"_j));
	goto label_2;
label_1:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"false"_j));
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_java_lang_Boolean_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Boolean:toString", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(92);
	if (((jint)((java_lang_Boolean *) NULL_CHECK((frame[0].o)))->F_value) == 0) goto label_1;
	}
	{
	LINE_NUMBER(93);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"true"_j)));
	}
label_1:;
	{
	LINE_NUMBER(95);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"false"_j)));
	}

	popStackFrame(ctx);
}

jobject SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(jcontext ctx, jbool param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Boolean:valueOf", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Boolean(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(104);
	if ((frame[0].i) == 0) goto label_1;
	}
	clinit_java_lang_Boolean(ctx);
	(sp++)->o = SF_java_lang_Boolean_TRUE;
	goto label_2;
label_1:;
	clinit_java_lang_Boolean(ctx);
	(sp++)->o = SF_java_lang_Boolean_FALSE;
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject SM_java_lang_Boolean_valueOf_java_lang_String_R_java_lang_Boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Boolean:valueOf", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Boolean(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(108);
	jint temp0 = (jint)SM_java_lang_Boolean_parseBoolean_java_lang_String_R_boolean(ctx, (frame[0].o));
	sp[0].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, temp0);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool SM_java_lang_Boolean_parseBoolean_java_lang_String_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Boolean:parseBoolean", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Boolean(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(112);
	if ((frame[0].o) == nullptr) goto label_1;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"true"_j))));
	if (temp0 == 0) goto label_1;
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

jint M_java_lang_Boolean_compareTo_java_lang_Boolean_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Boolean:compareTo", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(116);
	if (((jint)((java_lang_Boolean *) NULL_CHECK((frame[1].o)))->F_value) != ((jint)((java_lang_Boolean *) NULL_CHECK((frame[0].o)))->F_value)) goto label_1;
	}
	{
	LINE_NUMBER(117);
	popStackFrame(ctx);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(119);
	if (((jint)((java_lang_Boolean *) NULL_CHECK((frame[1].o)))->F_value) == 0) goto label_3;
	}
	{
	LINE_NUMBER(120);
	popStackFrame(ctx);
	return (jint(-1));
	}
label_3:;
	{
	LINE_NUMBER(122);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jint SM_java_lang_Boolean_compare_boolean_boolean_R_int(jcontext ctx, jbool param0, jbool param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Boolean:compare", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Boolean(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(126);
	if ((frame[0].i) != (frame[1].i)) goto label_1;
	}
	INST_ICONST(0);
	goto label_2;
label_1:;
	INST_ILOAD(0);
	if ((--sp)->i == 0) goto label_3;
	INST_ICONST(1);
	goto label_2;
label_3:;
	INST_ICONST(-1);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint M_java_lang_Boolean_compareTo_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Boolean:compareTo", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(36);
	jint temp0 = (jint)((func_java_lang_Boolean_compareTo_java_lang_Boolean_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Boolean_compareTo_java_lang_Boolean_R_int])(ctx, (frame[0].o), (checkCast(ctx, &class_java_lang_Boolean, (frame[1].o))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void clinit_java_lang_Boolean(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[3];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Boolean:<clinit>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Boolean(ctx);
	{
	LINE_NUMBER(40);
	clinit_java_lang_Boolean(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_Boolean);
	init_java_lang_Boolean_boolean(ctx, sp[0].o, (jint(0)));
	clinit_java_lang_Boolean(ctx);
	SF_java_lang_Boolean_FALSE = sp[0].o;
	LINE_NUMBER(45);
	clinit_java_lang_Boolean(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_Boolean);
	init_java_lang_Boolean_boolean(ctx, sp[0].o, (jint(1)));
	clinit_java_lang_Boolean(ctx);
	SF_java_lang_Boolean_TRUE = sp[0].o;
	LINE_NUMBER(47);
	sp[0].o = (jobject)SM_java_nio_NativeUtils_getPrimitive_java_lang_String_R_java_lang_Class(ctx, (((jobject) createStringLiteral(ctx, u8"Z"_j))));
	clinit_java_lang_Boolean(ctx);
	SF_java_lang_Boolean_TYPE = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_lang_Boolean[] {
	(void *) M_java_lang_Boolean_hashCode_R_int,
	(void *) M_java_lang_Boolean_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Boolean_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_lang_Boolean_compareTo_java_lang_Object_R_int,
	(void *) M_java_lang_Boolean_booleanValue_R_boolean,
	(void *) M_java_lang_Boolean_compareTo_java_lang_Boolean_R_int,
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
	{ "booleanValue", "()Z" },
	{ "compareTo", "(Ljava/lang/Boolean;)I" },
};

static jclass interfaces[] { &class_java_lang_Comparable, };

static FieldMetadata fields[] {
	{ "FALSE", &class_java_lang_Boolean, (intptr_t) &SF_java_lang_Boolean_FALSE, "Ljava/lang/Boolean;", 25 },
	{ "TRUE", &class_java_lang_Boolean, (intptr_t) &SF_java_lang_Boolean_TRUE, "Ljava/lang/Boolean;", 25 },
	{ "TYPE", &class_java_lang_Class, (intptr_t) &SF_java_lang_Boolean_TYPE, "Ljava/lang/Class;", 25 },
	{ "value", &class_boolean, offsetof(java_lang_Boolean, F_value), "Z", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_lang_Boolean_boolean, 0, "(Z)V", 1 },
	{ "booleanValue", (intptr_t) M_java_lang_Boolean_booleanValue_R_boolean, VTABLE_java_lang_Boolean_booleanValue_R_boolean, "()Z", 1 },
	{ "equals", (intptr_t) M_java_lang_Boolean_equals_java_lang_Object_R_boolean, VTABLE_java_lang_Boolean_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "hashCode", (intptr_t) M_java_lang_Boolean_hashCode_R_int, VTABLE_java_lang_Boolean_hashCode_R_int, "()I", 1 },
	{ "hashCode", (intptr_t) SM_java_lang_Boolean_hashCode_boolean_R_int, 0, "(Z)I", 9 },
	{ "toString", (intptr_t) SM_java_lang_Boolean_toString_boolean_R_java_lang_String, 0, "(Z)Ljava/lang/String;", 9 },
	{ "toString", (intptr_t) M_java_lang_Boolean_toString_R_java_lang_String, VTABLE_java_lang_Boolean_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "valueOf", (intptr_t) SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean, 0, "(Z)Ljava/lang/Boolean;", 9 },
	{ "valueOf", (intptr_t) SM_java_lang_Boolean_valueOf_java_lang_String_R_java_lang_Boolean, 0, "(Ljava/lang/String;)Ljava/lang/Boolean;", 9 },
	{ "parseBoolean", (intptr_t) SM_java_lang_Boolean_parseBoolean_java_lang_String_R_boolean, 0, "(Ljava/lang/String;)Z", 9 },
	{ "compareTo", (intptr_t) M_java_lang_Boolean_compareTo_java_lang_Boolean_R_int, VTABLE_java_lang_Boolean_compareTo_java_lang_Boolean_R_int, "(Ljava/lang/Boolean;)I", 1 },
	{ "compare", (intptr_t) SM_java_lang_Boolean_compare_boolean_boolean_R_int, 0, "(ZZ)I", 9 },
	{ "compareTo", (intptr_t) M_java_lang_Boolean_compareTo_java_lang_Object_R_int, VTABLE_java_lang_Boolean_compareTo_java_lang_Object_R_int, "(Ljava/lang/Object;)I", 4161 },
	{ "<clinit>", (intptr_t) clinit_java_lang_Boolean, 0, "()V", 8 },
};

Class class_java_lang_Boolean{
		.nativeName = (intptr_t) "java/lang/Boolean",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_lang_Boolean),
		.classVtable = (intptr_t) vtable_java_lang_Boolean,
		.staticInitializer = (intptr_t) clinit_java_lang_Boolean,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_lang_Boolean,
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
		.methodCount = 14,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 14,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_lang_Boolean = registerClass(&class_java_lang_Boolean);

}
