#include "regexodus/MemReg.h"
#include "java/lang/Object.h"
#include "java/io/Serializable.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/String.h"
#include "regexodus/MemReg.h"
#include "java/lang/Class.h"

extern "C" {

jlong SF_regexodus_MemReg_serialVersionUID;

void mark_regexodus_MemReg(jobject object, jint mark, jint depth) {
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
	auto self = (regexodus_MemReg *) object;
}

void clinit_regexodus_MemReg(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_regexodus_MemReg_serialVersionUID = jlong(-3628346657932720807ll);
}

void init_regexodus_MemReg_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/MemReg:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_MemReg(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(2738);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(2735);
	((regexodus_MemReg *) NULL_CHECK((frame[0].o)))->F_in = (jint(-1));
	((regexodus_MemReg *) NULL_CHECK((frame[0].o)))->F_out = (jint(-1));
	LINE_NUMBER(2736);
	((regexodus_MemReg *) NULL_CHECK((frame[0].o)))->F_tmp = (jint(-1));
	LINE_NUMBER(2739);
	((regexodus_MemReg *) NULL_CHECK((frame[0].o)))->F_index = (frame[1].i);
	LINE_NUMBER(2740);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_regexodus_MemReg_reset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/MemReg:reset", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2743);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp0 = jint(-1);
	((regexodus_MemReg *) NULL_CHECK(sp[1].o))->F_out = temp0;
	((regexodus_MemReg *) NULL_CHECK(sp[0].o))->F_in = temp0;
	LINE_NUMBER(2744);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_regexodus_MemReg_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/MemReg:equals", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2748);
	if ((frame[0].o) != (frame[1].o)) goto label_1;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(2749);
	if ((frame[1].o) == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[1].o));
	if (sp[0].o == sp[1].o) goto label_3;
	}
label_2:;
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(2751);
	frame[2].o = (checkCast(ctx, &class_regexodus_MemReg, (frame[1].o)));
	LINE_NUMBER(2753);
	if (((jint)((regexodus_MemReg *) NULL_CHECK((frame[0].o)))->F_index) == ((jint)((regexodus_MemReg *) NULL_CHECK((frame[2].o)))->F_index)) goto label_5;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(2754);
	if (((jint)((regexodus_MemReg *) NULL_CHECK((frame[0].o)))->F_in) != ((jint)((regexodus_MemReg *) NULL_CHECK((frame[2].o)))->F_in)) goto label_6;
	}
	{
	if (((jint)((regexodus_MemReg *) NULL_CHECK((frame[0].o)))->F_out) != ((jint)((regexodus_MemReg *) NULL_CHECK((frame[2].o)))->F_out)) goto label_6;
	}
	{
	if (((jint)((regexodus_MemReg *) NULL_CHECK((frame[0].o)))->F_tmp) != ((jint)((regexodus_MemReg *) NULL_CHECK((frame[2].o)))->F_tmp)) goto label_6;
	}
	INST_ICONST(1);
	goto label_7;
label_6:;
	INST_ICONST(0);
label_7:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint M_regexodus_MemReg_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/MemReg:hashCode", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2760);
	frame[1].i = ((jint)((regexodus_MemReg *) NULL_CHECK((frame[0].o)))->F_index);
	LINE_NUMBER(2761);
	frame[1].i = (((31) * (frame[1].i)) + ((jint)((regexodus_MemReg *) NULL_CHECK((frame[0].o)))->F_in));
	LINE_NUMBER(2762);
	frame[1].i = (((31) * (frame[1].i)) + ((jint)((regexodus_MemReg *) NULL_CHECK((frame[0].o)))->F_out));
	LINE_NUMBER(2763);
	frame[1].i = (((31) * (frame[1].i)) + ((jint)((regexodus_MemReg *) NULL_CHECK((frame[0].o)))->F_tmp));
	LINE_NUMBER(2764);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

jobject M_regexodus_MemReg_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/MemReg:toString", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2769);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"MemReg{index="_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((regexodus_MemReg *) NULL_CHECK((frame[0].o)))->F_index));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8", in="_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((regexodus_MemReg *) NULL_CHECK((frame[0].o)))->F_in));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8", out="_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((regexodus_MemReg *) NULL_CHECK((frame[0].o)))->F_out));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8", tmp="_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((regexodus_MemReg *) NULL_CHECK((frame[0].o)))->F_tmp));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, (125));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_regexodus_MemReg[] {
	(void *) M_regexodus_MemReg_hashCode_R_int,
	(void *) M_regexodus_MemReg_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_regexodus_MemReg_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_regexodus_MemReg_reset,
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
	{ "reset", "()V" },
};

static jclass interfaces[] { &class_java_io_Serializable, };

static FieldMetadata fields[] {
	{ "serialVersionUID", &class_long, (intptr_t) &SF_regexodus_MemReg_serialVersionUID, "J", 26 },
	{ "index", &class_int, offsetof(regexodus_MemReg, F_index), "I", 2 },
	{ "in", &class_int, offsetof(regexodus_MemReg, F_in), "I", 0 },
	{ "out", &class_int, offsetof(regexodus_MemReg, F_out), "I", 0 },
	{ "tmp", &class_int, offsetof(regexodus_MemReg, F_tmp), "I", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_regexodus_MemReg_int, 0, "(I)V", 0 },
	{ "reset", (intptr_t) M_regexodus_MemReg_reset, VTABLE_regexodus_MemReg_reset, "()V", 0 },
	{ "equals", (intptr_t) M_regexodus_MemReg_equals_java_lang_Object_R_boolean, VTABLE_regexodus_MemReg_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "hashCode", (intptr_t) M_regexodus_MemReg_hashCode_R_int, VTABLE_regexodus_MemReg_hashCode_R_int, "()I", 1 },
	{ "toString", (intptr_t) M_regexodus_MemReg_toString_R_java_lang_String, VTABLE_regexodus_MemReg_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
};

Class class_regexodus_MemReg{
		.nativeName = (intptr_t) "regexodus/MemReg",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(regexodus_MemReg),
		.classVtable = (intptr_t) vtable_regexodus_MemReg,
		.staticInitializer = (intptr_t) clinit_regexodus_MemReg,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_regexodus_MemReg,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_regexodus_MemReg = registerClass(&class_regexodus_MemReg);

}
